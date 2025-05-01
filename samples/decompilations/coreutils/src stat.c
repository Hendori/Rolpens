
/* WARNING: Unknown calling convention */

char * default_format(_Bool fs,_Bool terse,_Bool device)

{
  undefined8 uVar1;
  void *pvVar2;
  void *__ptr;
  char *pcVar3;
  
  if (fs) {
    pcVar3 = "%n %i %l %t %s %S %b %f %a %c %d\n";
    if (!terse) {
      pcVar3 = (char *)dcgettext(0,
                                 "  File: \"%n\"\n    ID: %-8i Namelen: %-7l Type: %T\nBlock size: %-10s Fundamental block size: %S\nBlocks: Total: %-10b Free: %-10f Available: %a\nInodes: Total: %-10c Free: %d\n"
                                 ,5);
    }
  }
  else {
    if (!terse) {
      uVar1 = dcgettext(0,"  File: %N\n  Size: %-10s\tBlocks: %-10b IO Block: %-6o %F\n",5);
      pvVar2 = (void *)xstrdup(uVar1);
      pcVar3 = "Device: %Hd,%Ld\tInode: %-10i  Links: %-5h Device type: %Hr,%Lr\n";
      if (!device) {
        pcVar3 = "Device: %Hd,%Ld\tInode: %-10i  Links: %h\n";
      }
      uVar1 = dcgettext(0,pcVar3,5);
      __ptr = (void *)xasprintf(&_LC3,pvVar2,uVar1);
      free(pvVar2);
      uVar1 = dcgettext(0,"Access: (%04a/%10.10A)  Uid: (%5u/%8U)   Gid: (%5g/%8G)\n",5);
      pvVar2 = (void *)xasprintf(&_LC3,__ptr,uVar1);
      free(__ptr);
      uVar1 = dcgettext(0,"Access: %x\nModify: %y\nChange: %z\n Birth: %w\n",5);
      pcVar3 = (char *)xasprintf(&_LC3,pvVar2,uVar1);
      free(pvVar2);
      return pcVar3;
    }
    pcVar3 = "%n %s %b %f %u %g %D %i %h %t %T %X %Y %Z %W %o\n";
  }
  pcVar3 = (char *)xstrdup(pcVar3);
  return pcVar3;
}



/* WARNING: Unknown calling convention */

void make_format(char *pformat,size_t prefix_len,char *allowed_flags,char *suffix)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  char *__dest;
  char *pcVar5;
  
  pcVar1 = pformat + prefix_len;
  __dest = pformat + 1;
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
      pcVar3 = strchr(allowed_flags,(int)cVar2);
      if (pcVar3 != (char *)0x0) {
        *__dest = cVar2;
        __dest = __dest + 1;
      }
      pcVar5 = pcVar5 + 1;
    } while (pcVar1 != pcVar5);
  }
  strcpy(__dest,suffix);
  return;
}



/* WARNING: Unknown calling convention */

char * find_bind_mount(char *name)

{
  long lVar1;
  mount_entry *pmVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  int *piVar6;
  long in_FS_OFFSET;
  stat name_stats;
  stat dev_stats;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (!find_bind_mount::tried_mount_list) {
    find_bind_mount::mount_list = (mount_entry *)read_file_system_list(0);
    if (find_bind_mount::mount_list == (mount_entry *)0x0) {
      uVar5 = dcgettext(0,"cannot read table of mounted file systems",5);
      piVar6 = __errno_location();
      error(0,*piVar6,&_LC8,uVar5);
    }
    find_bind_mount::tried_mount_list = true;
  }
  iVar3 = stat(name,(stat *)&name_stats);
  pmVar2 = find_bind_mount::mount_list;
  if (iVar3 == 0) {
    for (; pmVar2 != (mount_entry *)0x0; pmVar2 = pmVar2->me_next) {
      if (((((pmVar2->field_0x28 & 1) != 0) && (pcVar4 = pmVar2->me_devname, *pcVar4 == '/')) &&
          (iVar3 = strcmp(pmVar2->me_mountdir,name), iVar3 == 0)) &&
         ((iVar3 = stat(pcVar4,(stat *)&dev_stats), iVar3 == 0 &&
          (name_stats.st_dev == dev_stats.st_dev && name_stats.st_ino == dev_stats.st_ino)))) {
        pcVar4 = pmVar2->me_devname;
        goto LAB_00100272;
      }
    }
  }
  pcVar4 = (char *)0x0;
LAB_00100272:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pcVar4;
}



char * human_time(timespec t)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  __time_t local_88;
  ulong local_80;
  tm tm;
  char secbuf [21];
  
  local_80 = t.tv_nsec;
  local_88 = t.tv_sec;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (human_time::tz == (timezone_t)0x0) {
    pcVar5 = getenv("TZ");
    human_time::tz = (timezone_t)tzalloc(pcVar5);
  }
  uVar2 = local_80;
  lVar3 = localtime_rz(human_time::tz,&local_88,&tm);
  if (lVar3 == 0) {
    uVar4 = imaxtostr(local_88,secbuf);
    __sprintf_chk(human_time::str,2,0x3d,"%s.%09d",uVar4,uVar2 & 0xffffffff);
  }
  else {
    nstrftime(human_time::str,0x3d,"%Y-%m-%d %H:%M:%S.%N %z",&tm,human_time::tz,uVar2 & 0xffffffff);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return human_time::str;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

size_t format_code_offset(char *directive)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  
  sVar1 = strspn(directive + 1,"\'-+ #0I");
  sVar2 = strspn(directive + sVar1 + 1,"0123456789");
  pcVar3 = directive + sVar1 + 1 + sVar2;
  if (*pcVar3 == '.') {
    sVar1 = strspn(pcVar3 + 1,"0123456789");
    pcVar3 = pcVar3 + sVar1 + 1;
  }
  return (long)pcVar3 - (long)directive;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

_Bool print_it(char *format,int fd,char *filename,
              _func__Bool_char_ptr_size_t_char_char_int_char_ptr_void_ptr *print_func,void *data)

{
  byte bVar1;
  byte *pbVar2;
  _Bool _Var3;
  size_t sVar4;
  char *__ptr;
  size_t sVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  byte bVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  _Bool local_4d;
  
  sVar4 = strlen(format);
  lVar7 = sVar4 + 3;
  __ptr = (char *)xmalloc(lVar7);
  local_4d = false;
  bVar11 = *format;
joined_r0x00100493:
  do {
    if (bVar11 == 0) {
      free(__ptr);
      fputs_unlocked(trailing_delim,_stdout);
      return local_4d;
    }
    if (bVar11 == 0x25) {
      sVar5 = format_code_offset(format);
      pbVar15 = (byte *)format + sVar5;
      bVar11 = *pbVar15;
      __memcpy_chk(__ptr,format,sVar5,lVar7);
      if (bVar11 == 0x25) {
LAB_0010051d:
        if (sVar5 < 2) {
          pcVar6 = _stdout->_IO_write_ptr;
          if (pcVar6 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar6 + 1;
            *pcVar6 = '%';
            bVar11 = pbVar15[1];
            format = (char *)(pbVar15 + 1);
            goto joined_r0x00100493;
          }
          __overflow(_stdout,0x25);
          format = (char *)pbVar15;
          pbVar15 = pbVar15 + 1;
        }
        else {
          __ptr[sVar5] = bVar11;
          __ptr[sVar5 + 1] = '\0';
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
        bVar13 = bVar11;
        if ((char)bVar11 < '&') {
          bVar9 = 0;
          if (bVar11 == 0) {
            pbVar15 = pbVar15 + -1;
            goto LAB_0010051d;
          }
        }
        else {
          bVar9 = 0;
          if ((((bVar11 & 0xfb) == 0x48) && (print_func == print_stat)) &&
             ((bVar1 = pbVar15[1], bVar1 == 100 || (bVar9 = 0, bVar1 == 0x72)))) {
            pbVar15 = pbVar15 + 1;
            bVar13 = bVar1;
            bVar9 = bVar11;
          }
        }
        _Var3 = (*print_func)(__ptr,sVar5,bVar9,bVar13,fd,filename,data);
        local_4d = (_Bool)(local_4d | _Var3);
        format = (char *)pbVar15;
        pbVar15 = pbVar15 + 1;
      }
    }
    else if (bVar11 == 0x5c) {
      pbVar15 = (byte *)format + 1;
      if (interpret_backslash_escapes == false) {
        pcVar6 = _stdout->_IO_write_ptr;
        if (pcVar6 < _stdout->_IO_write_end) goto LAB_001005aa;
        __overflow(_stdout,0x5c);
      }
      else {
        bVar11 = ((byte *)format)[1];
        if ((byte)(bVar11 - 0x30) < 8) {
          bVar11 = bVar11 - 0x30;
          pbVar16 = pbVar15;
          pbVar15 = (byte *)format + 2;
          if ((byte)(((byte *)format)[2] - 0x30) < 8) {
            bVar11 = (((byte *)format)[2] - 0x30) + bVar11 * '\b';
            pbVar15 = (byte *)format + 3;
            pbVar16 = (byte *)format + 2;
            if ((byte)(((byte *)format)[3] - 0x30) < 8) {
              bVar11 = (((byte *)format)[3] - 0x30) + bVar11 * '\b';
              pbVar16 = pbVar15;
              pbVar15 = (byte *)format + 4;
            }
          }
          format = (char *)pbVar16;
          pbVar16 = (byte *)_stdout->_IO_write_ptr;
          if (pbVar16 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(pbVar16 + 1);
            *pbVar16 = bVar11;
          }
          else {
            __overflow(_stdout,(uint)bVar11);
          }
        }
        else {
          if (bVar11 == 0x78) {
            bVar13 = ((byte *)format)[2];
            if ((0x36 < (byte)(bVar13 - 0x30)) ||
               ((0x7e0000007e03ffU >> ((ulong)(bVar13 - 0x30) & 0x3f) & 1) == 0)) {
switchD_00100655_caseD_5d:
              uVar14 = (uint)(char)bVar11;
              uVar8 = dcgettext(0,"warning: unrecognized escape \'\\%c\'",5);
              error(0,0,uVar8,uVar14);
              goto LAB_00100808;
            }
            iVar12 = (int)(char)bVar13;
            if ((byte)(bVar13 + 0x9f) < 6) {
              uVar14 = iVar12 - 0x57;
            }
            else {
              uVar14 = iVar12 - 0x30;
              if ((byte)(bVar13 + 0xbf) < 6) {
                uVar14 = iVar12 - 0x37;
              }
            }
            bVar11 = ((byte *)format)[3];
            if (((byte)(bVar11 - 0x30) < 0x37) &&
               ((0x7e0000007e03ffU >> ((ulong)(bVar11 - 0x30) & 0x3f) & 1) != 0)) {
              pbVar15 = (byte *)format + 3;
              iVar12 = (int)(char)bVar11;
              if ((byte)(bVar11 + 0x9f) < 6) {
                iVar10 = iVar12 + -0x57;
              }
              else {
                iVar10 = iVar12 + -0x30;
                if ((byte)(bVar11 + 0xbf) < 6) {
                  iVar10 = iVar12 + -0x37;
                }
              }
              uVar14 = uVar14 * 0x10 + iVar10;
            }
            else {
              pbVar15 = (byte *)format + 2;
            }
            pbVar16 = pbVar15 + 1;
            pcVar6 = _stdout->_IO_write_ptr;
            if (pcVar6 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = pcVar6 + 1;
              *pcVar6 = (char)uVar14;
              format = (char *)pbVar15;
              pbVar15 = pbVar16;
              goto LAB_001004d1;
            }
          }
          else {
            if (bVar11 == 0) goto LAB_00100950;
            if (bVar11 == 0x22) {
switchD_00100655_caseD_5c:
              uVar14 = (uint)(char)bVar11;
            }
            else {
              switch(bVar11) {
              case 0x5c:
                goto switchD_00100655_caseD_5c;
              default:
                goto switchD_00100655_caseD_5d;
              case 0x61:
                uVar14 = 7;
                bVar11 = 7;
                break;
              case 0x62:
                uVar14 = 8;
                bVar11 = 8;
                break;
              case 0x65:
                uVar14 = 0x1b;
                bVar11 = 0x1b;
                break;
              case 0x66:
                uVar14 = 0xc;
                bVar11 = 0xc;
                break;
              case 0x6e:
                uVar14 = 10;
                bVar11 = 10;
                break;
              case 0x72:
                uVar14 = 0xd;
                bVar11 = 0xd;
                break;
              case 0x74:
                uVar14 = 9;
                bVar11 = 9;
                break;
              case 0x76:
                uVar14 = 0xb;
                bVar11 = 0xb;
              }
            }
LAB_00100808:
            pbVar16 = (byte *)format + 2;
            pbVar2 = (byte *)_stdout->_IO_write_ptr;
            if (pbVar2 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
              *pbVar2 = bVar11;
              format = (char *)pbVar15;
              pbVar15 = pbVar16;
              goto LAB_001004d1;
            }
            uVar14 = uVar14 & 0xff;
          }
          __overflow(_stdout,uVar14);
          format = (char *)pbVar15;
          pbVar15 = pbVar16;
        }
      }
    }
    else {
      pbVar16 = (byte *)_stdout->_IO_write_ptr;
      pbVar15 = (byte *)format + 1;
      if (pbVar16 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)(pbVar16 + 1);
        *pbVar16 = bVar11;
      }
      else {
        __overflow(_stdout,(uint)bVar11);
      }
    }
LAB_001004d1:
    bVar11 = ((byte *)format)[1];
    format = (char *)pbVar15;
  } while( true );
}



/* WARNING: Unknown calling convention */

_Bool do_stat(char *filename,char *format,char *format2)

{
  long lVar1;
  char cVar2;
  _Bool _Var3;
  bool bVar4;
  int fd;
  size_t sVar5;
  char *pcVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  byte bVar11;
  uint uVar12;
  ushort uVar13;
  statx *psVar14;
  char *directive;
  long in_FS_OFFSET;
  undefined4 local_20c;
  char *local_208;
  print_args pa;
  stat st;
  statx stx;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*filename == '-') && (filename[1] == '\0')) {
    psVar14 = &stx;
    for (lVar10 = 0x20; lVar10 != 0; lVar10 = lVar10 + -1) {
      psVar14->stx_mask = 0;
      psVar14->stx_blksize = 0;
      psVar14 = (statx *)&psVar14->stx_attributes;
    }
    uVar12 = 0x1000;
    local_208 = "";
    local_20c = 0;
  }
  else {
    psVar14 = &stx;
    for (lVar10 = 0x20; lVar10 != 0; lVar10 = lVar10 + -1) {
      psVar14->stx_mask = 0;
      psVar14->stx_blksize = 0;
      psVar14 = (statx *)&psVar14->stx_attributes;
    }
    local_20c = 0xffffff9c;
    uVar12 = (follow_links ^ 1) << 8;
    local_208 = filename;
  }
  pa.btime.tv_nsec._0_4_ = 0xffffffff;
  pa.btime.tv_sec = 0xffffffffffffffff;
  pa.btime.tv_nsec._4_4_ = 0xffffffff;
  if (dont_sync) {
    uVar12 = uVar12 | 0x4000;
  }
  else {
    uVar12 = uVar12 | (uint)force_sync << 0xd;
  }
  pa.st = &st;
  cVar2 = *format;
  if (!force_sync) {
    uVar12 = uVar12 | 0x800;
  }
  if (cVar2 == '\0') {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    directive = format;
    do {
      while (cVar2 == '%') {
        sVar5 = format_code_offset(directive);
        pcVar6 = directive + sVar5;
        if (*pcVar6 == '\0') goto LAB_00100aa3;
        bVar11 = *pcVar6 + 0xbf;
        if (bVar11 < 0x3a) {
          uVar13 = uVar13 | *(ushort *)(CSWTCH_127 + (ulong)bVar11 * 2);
        }
        directive = pcVar6 + 1;
        cVar2 = pcVar6[1];
        if (cVar2 == '\0') goto LAB_00100aa3;
      }
      cVar2 = directive[1];
      directive = directive + 1;
    } while (cVar2 != '\0');
  }
LAB_00100aa3:
  fd = statx(local_20c,local_208,uVar12,uVar13,&stx);
  if (fd < 0) {
    if ((uVar12 & 0x1000) == 0) {
      uVar7 = quotearg_style(4,filename);
      uVar9 = dcgettext(0,"cannot statx %s",5);
      piVar8 = __errno_location();
      error(0,*piVar8,uVar9,uVar7);
      bVar4 = false;
    }
    else {
      uVar7 = dcgettext(0,"cannot stat standard input",5);
      piVar8 = __errno_location();
      error(0,*piVar8,uVar7);
      bVar4 = false;
    }
  }
  else {
    if ((stx.stx_mode & 0xb000) == 0x2000) {
      format = format2;
    }
    st.st_dev = ((ulong)stx.stx_dev_minor & 0xffffff00) << 0xc |
                ((ulong)stx.stx_dev_major & 0xfffff000) << 0x20 |
                (ulong)((stx.stx_dev_major & 0xfff) << 8) | (ulong)(byte)stx.stx_dev_minor;
    st.st_nlink = (__nlink_t)stx.stx_nlink;
    st.st_ino = stx.stx_ino;
    st.st_uid = stx.stx_uid;
    st.st_mode = (uint)stx.stx_mode;
    st.st_gid = stx.stx_gid;
    st.st_blksize._0_4_ = stx.stx_blksize;
    st.st_size = stx.stx_size;
    st.st_blksize._4_4_ = 0;
    st.st_rdev = ((ulong)stx.stx_rdev_minor & 0xffffff00) << 0xc |
                 ((ulong)stx.stx_rdev_major & 0xfffff000) << 0x20 |
                 (ulong)((stx.stx_rdev_major & 0xfff) << 8) | (ulong)(byte)stx.stx_rdev_minor;
    st.st_blocks = stx.stx_blocks;
    st.st_atim.tv_sec = stx.stx_atime.tv_sec;
    st.st_atim.tv_nsec = (__syscall_slong_t)stx.stx_atime.tv_nsec;
    st.st_mtim.tv_sec = stx.stx_mtime.tv_sec;
    st.st_mtim.tv_nsec = (__syscall_slong_t)stx.stx_mtime.tv_nsec;
    st.st_ctim.tv_sec = stx.stx_ctime.tv_sec;
    st.st_ctim.tv_nsec = (__syscall_slong_t)stx.stx_ctime.tv_nsec;
    if ((stx.stx_mask._1_1_ & 8) != 0) {
      pa.btime.tv_nsec._4_4_ = 0;
      pa.btime._0_12_ = stx.stx_btime._0_12_;
    }
    _Var3 = print_it(format,fd,filename,print_stat,&pa);
    bVar4 = !_Var3;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}



void out_epoch_sec(char *pformat,size_t prefix_len,timespec arg)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  int iVar12;
  ulong uVar13;
  char *pcVar14;
  int iVar15;
  long lVar16;
  size_t local_40;
  
  lVar10 = arg.tv_nsec;
  lVar16 = arg.tv_sec;
  pcVar5 = (char *)memchr(pformat,0x2e,prefix_len);
  if (pcVar5 == (char *)0x0) {
    uVar13 = 0;
    iVar2 = 0;
    local_40 = prefix_len;
LAB_00100f35:
    iVar12 = (int)uVar13;
    uVar13 = uVar13 & 0xffffffff;
    iVar3 = 1;
    do {
      uVar4 = (int)uVar13 + 1;
      uVar13 = (ulong)uVar4;
      iVar3 = iVar3 * 10;
    } while (uVar4 != 9);
    lVar6 = (long)iVar3;
    iVar8 = (int)(lVar10 / lVar6);
  }
  else {
    pformat[prefix_len] = '\0';
    local_40 = (long)pcVar5 - (long)pformat;
    iVar8 = arg.tv_nsec;
    if ((int)pcVar5[1] - 0x30U < 10) {
      uVar7 = __isoc23_strtol(pcVar5 + 1,0,10);
      uVar13 = 0x7fffffff;
      if ((long)uVar7 < 0x80000000) {
        uVar13 = uVar7;
      }
      if ((int)uVar13 != 0) {
        iVar2 = 0;
        if ((int)pcVar5[-1] - 0x30U < 10) goto LAB_00100e14;
        goto LAB_00100f20;
      }
      uVar13 = 0;
      iVar2 = 0;
      goto LAB_00100f35;
    }
    if ((int)pcVar5[-1] - 0x30U < 10) {
      uVar13 = 9;
LAB_00100e14:
      *pcVar5 = '\0';
      do {
        pcVar14 = pcVar5 + -2;
        pcVar5 = pcVar5 + -1;
      } while ((int)*pcVar14 - 0x30U < 10);
      lVar6 = __isoc23_strtol(pcVar5,0,10);
      if (0x7fffffff < lVar6) {
        lVar6 = 0x7fffffff;
      }
      iVar2 = (int)lVar6;
      if (1 < iVar2) {
        pcVar5 = pcVar5 + (*pcVar5 == '0');
        local_40 = (long)pcVar5 - (long)pformat;
        if (((decimal_point_len < (ulong)(long)iVar2) &&
            (iVar3 = iVar2 - (int)decimal_point_len, 1 < iVar3)) &&
           (iVar3 = iVar3 - (int)uVar13, 1 < iVar3)) {
          pcVar14 = pformat;
          if (pformat < pcVar5) {
            bVar1 = false;
            pcVar11 = pformat;
            do {
              if (*pcVar11 == '-') {
                bVar1 = true;
              }
              else {
                *pcVar14 = *pcVar11;
                pcVar14 = pcVar14 + 1;
              }
              pcVar11 = pcVar11 + 1;
            } while (pcVar5 != pcVar11);
            local_40 = (long)pcVar14 - (long)pformat;
            if (bVar1) goto LAB_00100f20;
          }
          else {
            local_40 = 0;
          }
          iVar3 = __sprintf_chk(pcVar14,2,0xffffffffffffffff,&_LC18,iVar3);
          local_40 = local_40 + (long)iVar3;
        }
      }
LAB_00100f20:
      iVar12 = (int)uVar13;
      if (iVar12 < 9) goto LAB_00100f35;
      lVar6 = 1;
      iVar3 = 1;
    }
    else {
      lVar6 = 1;
      iVar12 = 9;
      iVar2 = 0;
      iVar3 = 1;
    }
  }
  if (lVar16 < 0) {
    if (lVar10 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = ((int)(1000000000 / (long)iVar3) - iVar8) + -1 + (uint)(lVar10 % lVar6 == 0);
      lVar16 = (lVar16 + 1) - (ulong)(iVar8 == 0);
      if (lVar16 == 0) {
        make_format(pformat,local_40,"\'-+ 0",".0f");
        iVar3 = __printf_chk(_LC21,2,pformat);
        goto LAB_00100fd1;
      }
    }
  }
  make_format(pformat,local_40,"\'-+ 0","jd");
  iVar3 = __printf_chk(2,pformat,lVar16);
LAB_00100fd1:
  if (iVar12 != 0) {
    iVar9 = 9;
    if (iVar12 < 10) {
      iVar9 = iVar12;
    }
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    iVar15 = 0;
    if ((iVar3 < iVar2) && (decimal_point_len < (ulong)(long)(iVar2 - iVar3))) {
      iVar15 = (iVar2 - iVar3) - (iVar9 + (int)decimal_point_len);
    }
    __printf_chk(2,"%s%.*d%-*.*d",decimal_point,iVar9,iVar8,iVar15,iVar12 - iVar9,0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

_Bool print_statfs(char *pformat,size_t prefix_len,char mod,char m,int fd,char *filename,void *data)

{
  uint uVar1;
  char *suffix;
  char *allowed_flags;
  char *pcVar2;
  
  switch(m) {
  case 'S':
    pcVar2 = *(char **)((long)data + 8);
    if (pcVar2 == (char *)0x0) {
                    /* WARNING: Load size is inaccurate */
      pcVar2 = *data;
    }
    goto LAB_001011a2;
  case 'T':
    uVar1 = *(uint *)((long)data + 0x58);
    if (uVar1 == 0x43415d53) {
      pcVar2 = "smackfs";
    }
    else if (uVar1 < 0x43415d54) {
      if (uVar1 == 0xf15f) {
        pcVar2 = "ecryptfs";
      }
      else if (uVar1 < 0xf160) {
        pcVar2 = "hfsx";
        if (uVar1 != 0x4858) {
          if (uVar1 < 0x4859) {
            pcVar2 = "minix (30 char.)";
            if (uVar1 != 0x138f) {
              if (uVar1 < 0x1390) {
                pcVar2 = "jffs";
                if (uVar1 != 0x7c0) {
                  if (uVar1 < 0x7c1) {
                    pcVar2 = "z3fold";
                    if (((uVar1 != 0x33) && (pcVar2 = "autofs", uVar1 != 0x187)) &&
                       (pcVar2 = "qnx4", uVar1 != 0x2f)) goto LAB_00101467;
                  }
                  else {
                    pcVar2 = "ext";
                    if (((uVar1 != 0x137d) && (pcVar2 = "minix", uVar1 != 0x137f)) &&
                       (pcVar2 = "devfs", uVar1 != 0x1373)) goto LAB_00101467;
                  }
                }
              }
              else {
                pcVar2 = "nilfs";
                if (uVar1 != 0x3434) {
                  if (uVar1 < 0x3435) {
                    pcVar2 = "minix v2";
                    if (((uVar1 != 0x2468) && (pcVar2 = "minix v2 (30 char.)", uVar1 != 0x2478)) &&
                       (pcVar2 = "devpts", uVar1 != 0x1cd1)) goto LAB_00101467;
                  }
                  else {
                    pcVar2 = "hfs";
                    if (uVar1 != 0x4244) {
                      if (uVar1 < 0x4245) {
                        pcVar2 = "fat";
                        if ((uVar1 != 0x4006) &&
                           ((0x4006 < uVar1 || (pcVar2 = "isofs", (uVar1 & 0xfffffffb) != 0x4000))))
                        goto LAB_00101467;
                      }
                      else {
                        pcVar2 = "hfs+";
                        if (uVar1 != 0x482b) goto LAB_00101467;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            pcVar2 = "jffs2";
            if (uVar1 != 0x72b6) {
              if (uVar1 < 0x72b7) {
                pcVar2 = "novell";
                if (uVar1 != 0x564c) {
                  if (uVar1 < 0x564d) {
                    pcVar2 = "minix3";
                    if (((uVar1 != 0x4d5a) && (pcVar2 = "smb", uVar1 != 0x517b)) &&
                       (pcVar2 = "msdos", uVar1 != 0x4d44)) goto LAB_00101467;
                  }
                  else {
                    pcVar2 = "nfs";
                    if (((uVar1 != 0x6969) && (pcVar2 = "romfs", uVar1 != 0x7275)) &&
                       (pcVar2 = "exofs", uVar1 != 0x5df5)) goto LAB_00101467;
                  }
                }
              }
              else {
                pcVar2 = "adfs";
                if (uVar1 != 0xadf5) {
                  if (uVar1 < 0xadf6) {
                    pcVar2 = "openprom";
                    if (uVar1 != 0x9fa1) {
                      if (uVar1 < 0x9fa2) {
                        pcVar2 = "isofs";
                        if ((uVar1 != 0x9660) && (pcVar2 = "proc", uVar1 != 0x9fa0))
                        goto LAB_00101467;
                      }
                      else {
                        pcVar2 = "usbdevfs";
                        if (uVar1 != 0x9fa2) goto LAB_00101467;
                      }
                    }
                  }
                  else {
                    pcVar2 = "ext2";
                    if (((uVar1 != 0xef51) && (pcVar2 = "ext2/ext3", uVar1 != 0xef53)) &&
                       (pcVar2 = "affs", uVar1 != 0xadff)) goto LAB_00101467;
                  }
                }
              }
            }
          }
        }
      }
      else {
        pcVar2 = "futexfs";
        if (uVar1 != 0xbad1dea) {
          if (uVar1 < 0xbad1deb) {
            pcVar2 = "xia";
            if (uVar1 != 0x12fd16d) {
              if (uVar1 < 0x12fd16e) {
                pcVar2 = "ceph";
                if (uVar1 != 0xc36400) {
                  if (uVar1 < 0xc36401) {
                    pcVar2 = "efs";
                    if (uVar1 != 0x414a53) {
                      if (uVar1 < 0x414a54) {
                        pcVar2 = "ufs";
                        if ((uVar1 != 0x11954) && (pcVar2 = "cgroupfs", uVar1 != 0x27e0eb))
                        goto LAB_00101467;
                      }
                      else {
                        pcVar2 = "hostfs";
                        if (uVar1 != 0xc0ffee) goto LAB_00101467;
                      }
                    }
                  }
                  else {
                    pcVar2 = "v9fs";
                    if (((uVar1 != 0x1021997) && (pcVar2 = "gfs/gfs2", uVar1 != 0x1161970)) &&
                       (pcVar2 = "tmpfs", uVar1 != 0x1021994)) goto LAB_00101467;
                  }
                }
              }
              else {
                pcVar2 = "coh";
                if (uVar1 != 0x12ff7b7) {
                  if (uVar1 < 0x12ff7b8) {
                    pcVar2 = "sysv4";
                    if (((uVar1 != 0x12ff7b5) && (pcVar2 = "sysv2", uVar1 != 0x12ff7b6)) &&
                       (pcVar2 = "xenix", uVar1 != 0x12ff7b4)) goto LAB_00101467;
                  }
                  else {
                    pcVar2 = "rdt";
                    if (((uVar1 != 0x7655821) && (pcVar2 = "anon-inode FS", uVar1 != 0x9041934)) &&
                       (pcVar2 = "ibrix", uVar1 != 0x13111a8)) goto LAB_00101467;
                  }
                }
              }
            }
          }
          else {
            pcVar2 = "exfat";
            if (uVar1 != 0x2011bab0) {
              if (uVar1 < 0x2011bab1) {
                pcVar2 = "udf";
                if (uVar1 != 0x15013346) {
                  if (uVar1 < 0x15013347) {
                    pcVar2 = "inodefs";
                    if (((uVar1 != 0x11307854) && (pcVar2 = "balloon-kvm-fs", uVar1 != 0x13661366))
                       && (pcVar2 = "lustre", uVar1 != 0xbd00bd0)) goto LAB_00101467;
                  }
                  else {
                    pcVar2 = "fhgfs";
                    if (((uVar1 != 0x19830326) && (pcVar2 = "bfs", uVar1 != 0x1badface)) &&
                       (pcVar2 = "mqueue", uVar1 != 0x19800202)) goto LAB_00101467;
                  }
                }
              }
              else {
                pcVar2 = "zfs";
                if (uVar1 != 0x2fc12fc1) {
                  if (uVar1 < 0x2fc12fc2) {
                    pcVar2 = "cramfs";
                    if (((uVar1 != 0x28cd3d45) && (pcVar2 = "inotifyfs", uVar1 != 0x2bad1dea)) &&
                       (pcVar2 = "ubifs", uVar1 != 0x24051905)) goto LAB_00101467;
                  }
                  else {
                    pcVar2 = "befs";
                    if (((uVar1 != 0x42465331) && (pcVar2 = "binfmt_misc", uVar1 != 0x42494e4d)) &&
                       (pcVar2 = "jfs", uVar1 != 0x3153464a)) goto LAB_00101467;
                  }
                }
              }
            }
          }
        }
      }
    }
    else if (uVar1 == 0x68191122) {
      pcVar2 = "qnx6";
    }
    else if (uVar1 < 0x68191123) {
      pcVar2 = "zsmallocfs";
      if (uVar1 != 0x58295829) {
        if (uVar1 < 0x5829582a) {
          pcVar2 = "reiserfs";
          if (uVar1 != 0x52654973) {
            if (uVar1 < 0x52654974) {
              pcVar2 = "exfs";
              if (uVar1 != 0x45584653) {
                if (uVar1 < 0x45584654) {
                  pcVar2 = "cramfs-wend";
                  if (((uVar1 != 0x453dcd28) && (pcVar2 = "devmem", uVar1 != 0x454d444d)) &&
                     (pcVar2 = "dma-buf-fs", uVar1 != 0x444d4142)) {
LAB_00101467:
                    __sprintf_chk(buf_5,2,0x1d,"UNKNOWN (0x%lx)");
                    pcVar2 = buf_5;
                  }
                }
                else {
                  pcVar2 = "pidfs";
                  if (((uVar1 != 0x50494446) && (pcVar2 = "pipefs", uVar1 != 0x50495045)) &&
                     (pcVar2 = "gpfs", uVar1 != 0x47504653)) goto LAB_00101467;
                }
              }
            }
            else {
              pcVar2 = "wslfs";
              if (uVar1 != 0x53464846) {
                if (uVar1 < 0x53464847) {
                  pcVar2 = "m1fs";
                  if (((uVar1 != 0x5346314d) && (pcVar2 = "afs", uVar1 != 0x5346414f)) &&
                     (pcVar2 = "secretmem", uVar1 != 0x5345434d)) goto LAB_00101467;
                }
                else {
                  pcVar2 = "sockfs";
                  if (uVar1 != 0x534f434b) {
                    if (uVar1 < 0x534f434c) {
                      pcVar2 = "ntfs";
                      if (uVar1 != 0x5346544e) goto LAB_00101467;
                    }
                    else {
                      pcVar2 = "ufs";
                      if ((uVar1 != 0x54190100) && (pcVar2 = "vzfs", uVar1 != 0x565a4653))
                      goto LAB_00101467;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          pcVar2 = "configfs";
          if (uVar1 != 0x62656570) {
            if (uVar1 < 0x62656571) {
              pcVar2 = "acfs";
              if (uVar1 != 0x61636673) {
                if (uVar1 < 0x61636674) {
                  pcVar2 = "zonefs";
                  if (uVar1 != 0x5a4f4653) {
                    if (uVar1 < 0x5a4f4654) {
                      pcVar2 = "xfs";
                      if ((uVar1 != 0x58465342) && (pcVar2 = "aafs", uVar1 != 0x5a3c69f0))
                      goto LAB_00101467;
                    }
                    else {
                      pcVar2 = "sdcardfs";
                      if (uVar1 != 0x5dca2df5) goto LAB_00101467;
                    }
                  }
                }
                else {
                  pcVar2 = "aufs";
                  if (((uVar1 != 0x61756673) && (pcVar2 = "bdevfs", uVar1 != 0x62646576)) &&
                     (pcVar2 = "pstorefs", uVar1 != 0x6165676c)) goto LAB_00101467;
                }
              }
            }
            else {
              pcVar2 = "daxfs";
              if (uVar1 != 0x64646178) {
                if (uVar1 < 0x64646179) {
                  pcVar2 = "cgroup2fs";
                  if (((uVar1 != 0x63677270) && (pcVar2 = "debugfs", uVar1 != 0x64626720)) &&
                     (pcVar2 = "sysfs", uVar1 != 0x62656572)) goto LAB_00101467;
                }
                else {
                  pcVar2 = "fuse";
                  if (((uVar1 != 0x65735546) && (pcVar2 = "rpc_pipefs", uVar1 != 0x67596969)) &&
                     (pcVar2 = "fusectl", uVar1 != 0x65735543)) goto LAB_00101467;
                }
              }
            }
          }
        }
      }
    }
    else {
      pcVar2 = "vxfs";
      if (uVar1 != 0xa501fcf5) {
        if (uVar1 < 0xa501fcf6) {
          pcVar2 = "ocfs2";
          if (uVar1 != 0x7461636f) {
            if (uVar1 < 0x74616370) {
              pcVar2 = "securityfs";
              if (uVar1 != 0x73636673) {
                if (uVar1 < 0x73636674) {
                  pcVar2 = "nfsd";
                  if (uVar1 != 0x6e667364) {
                    if (uVar1 < 0x6e667365) {
                      pcVar2 = "k-afs";
                      if ((uVar1 != 0x6b414653) && (pcVar2 = "binderfs", uVar1 != 0x6c6f6f70))
                      goto LAB_00101467;
                    }
                    else {
                      pcVar2 = "nsfs";
                      if (uVar1 != 0x6e736673) goto LAB_00101467;
                    }
                  }
                }
                else {
                  pcVar2 = "btrfs_test";
                  if (((uVar1 != 0x73727279) && (pcVar2 = "coda", uVar1 != 0x73757245)) &&
                     (pcVar2 = "squashfs", uVar1 != 0x73717368)) goto LAB_00101467;
                }
              }
            }
            else {
              pcVar2 = "prl_fs";
              if (uVar1 != 0x7c7c6673) {
                if (uVar1 < 0x7c7c6674) {
                  pcVar2 = "vboxsf";
                  if (((uVar1 != 0x786f4256) && (pcVar2 = "overlayfs", uVar1 != 0x794c7630)) &&
                     (pcVar2 = "tracefs", uVar1 != 0x74726163)) goto LAB_00101467;
                }
                else {
                  pcVar2 = "btrfs";
                  if (((uVar1 != 0x9123683e) && (pcVar2 = "hugetlbfs", uVar1 != 0x958458f6)) &&
                     (pcVar2 = "ramfs", uVar1 != 0x858458f6)) goto LAB_00101467;
                }
              }
            }
          }
        }
        else {
          pcVar2 = "bpf_fs";
          if (uVar1 != 0xcafe4a11) {
            if (uVar1 < 0xcafe4a12) {
              pcVar2 = "snfs";
              if (uVar1 != 0xbeefdead) {
                if (uVar1 < 0xbeefdeae) {
                  pcVar2 = "xenfs";
                  if (((uVar1 != 0xabba1974) && (pcVar2 = "vmhgfs", uVar1 != 0xbacbacbc)) &&
                     (pcVar2 = "panfs", uVar1 != 0xaad7aaea)) goto LAB_00101467;
                }
                else {
                  pcVar2 = "logfs";
                  if (((uVar1 != 0xc97e8168) && (pcVar2 = "bcachefs", uVar1 != 0xca451a4e)) &&
                     (pcVar2 = "ppc-cmm-fs", uVar1 != 0xc7571590)) goto LAB_00101467;
                }
              }
            }
            else {
              pcVar2 = "selinux";
              if (uVar1 != 0xf97cff8c) {
                if (uVar1 < 0xf97cff8d) {
                  pcVar2 = "erofs";
                  if (((uVar1 != 0xe0f5e1e2) && (pcVar2 = "f2fs", uVar1 != 0xf2f52010)) &&
                     (pcVar2 = "efivarfs", uVar1 != 0xde5e81e4)) goto LAB_00101467;
                }
                else {
                  pcVar2 = "smb2";
                  if (((uVar1 != 0xfe534d42) && (pcVar2 = "cifs", uVar1 != 0xff534d42)) &&
                     (pcVar2 = "hpfs", uVar1 != 0xf995e849)) goto LAB_00101467;
                }
              }
            }
          }
        }
      }
    }
    suffix = "s";
    allowed_flags = "-";
    break;
  default:
    pcVar2 = _stdout->_IO_write_ptr;
    if (pcVar2 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = '?';
      return false;
    }
    __overflow(_stdout,0x3f);
    return false;
  case 'a':
    pcVar2 = *(char **)((long)data + 0x20);
    goto LAB_001012a9;
  case 'b':
    pcVar2 = *(char **)((long)data + 0x10);
    goto LAB_001012a9;
  case 'c':
    pcVar2 = *(char **)((long)data + 0x28);
LAB_001011a2:
    suffix = "ju";
    allowed_flags = "\'-0";
    break;
  case 'd':
    pcVar2 = *(char **)((long)data + 0x30);
    goto LAB_001012a9;
  case 'f':
    pcVar2 = *(char **)((long)data + 0x18);
LAB_001012a9:
    suffix = "jd";
    allowed_flags = "\'-+ 0";
    break;
  case 'i':
    suffix = "jx";
    allowed_flags = "-#0";
    pcVar2 = (char *)CONCAT44(*(undefined4 *)((long)data + 0x40),*(undefined4 *)((long)data + 0x44))
    ;
    break;
  case 'l':
    suffix = "ju";
    allowed_flags = "\'-0";
    pcVar2 = *(char **)((long)data + 0x50);
    break;
  case 'n':
    make_format(pformat,prefix_len,"-","s");
    __printf_chk(2,pformat,filename);
    return false;
  case 's':
    suffix = "ju";
    allowed_flags = "\'-0";
                    /* WARNING: Load size is inaccurate */
    pcVar2 = *data;
    break;
  case 't':
    suffix = "jx";
    allowed_flags = "-#0";
    pcVar2 = (char *)(ulong)*(uint *)((long)data + 0x58);
  }
  make_format(pformat,prefix_len,allowed_flags,suffix);
  __printf_chk(2,pformat,pcVar2);
  return false;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

_Bool print_stat(char *pformat,size_t prefix_len,char mod,char m,int fd,char *filename,void *data)

{
  undefined8 *puVar1;
  timespec arg;
  undefined4 uVar2;
  passwd *ppVar3;
  void *__ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  __syscall_slong_t _Var10;
  _Bool _Var12;
  uint uVar13;
  timespec t;
  char *local_48;
  long lStack_40;
  __time_t _Var11;
  
  local_48 = *(char **)((long)data + 8);
  lStack_40 = *(long *)((long)data + 0x10);
                    /* WARNING: Load size is inaccurate */
  puVar1 = *data;
  _Var11 = *(__time_t *)((long)data + 8);
  _Var10 = *(__syscall_slong_t *)((long)data + 0x10);
  switch(m) {
  case 'A':
    filemodestring(puVar1,modebuf_4);
    modebuf_4[10] = 0;
    filename = modebuf_4;
    goto switchD_00102068_caseD_6e;
  case 'B':
    make_format(pformat,prefix_len,"\'-0","ju");
    __printf_chk(2,pformat,0x200);
    return false;
  case 'C':
    piVar6 = __errno_location();
    *piVar6 = 0x5f;
    uVar4 = quotearg_style(4,filename);
    uVar5 = dcgettext(0,"failed to get security context of %s",5);
    error(0,*piVar6,uVar5,uVar4);
    (pformat + prefix_len)[0] = 's';
    (pformat + prefix_len)[1] = '\0';
    __printf_chk(2,pformat,&_LC163);
    return true;
  case 'D':
    pcVar7 = "jx";
    pcVar9 = "-#0";
    filename = (char *)*puVar1;
    break;
  default:
    pcVar7 = _stdout->_IO_write_ptr;
    if (pcVar7 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar7 + 1;
      *pcVar7 = '?';
      return false;
    }
    __overflow(_stdout,0x3f);
    return false;
  case 'F':
    filename = (char *)file_type(puVar1);
    goto switchD_00102068_caseD_6e;
  case 'G':
    ppVar3 = (passwd *)getgrgid(*(__gid_t *)(puVar1 + 4));
    goto joined_r0x00102463;
  case 'N':
    uVar2 = get_quoting_style(0);
    uVar4 = quotearg_style(uVar2,filename);
    make_format(pformat,prefix_len,"-","s");
    __printf_chk(2,pformat,uVar4);
    if ((*(uint *)(puVar1 + 3) & 0xf000) != 0xa000) {
      return false;
    }
    __ptr = (void *)areadlink_with_size(filename,puVar1[6]);
    if (__ptr != (void *)0x0) {
      __printf_chk(2,&_LC165);
      uVar2 = get_quoting_style(0);
      uVar4 = quotearg_style(uVar2,__ptr);
      make_format(pformat,prefix_len,"-","s");
      __printf_chk(2,pformat,uVar4);
      free(__ptr);
      return false;
    }
    uVar4 = quotearg_style(4,filename);
    uVar5 = dcgettext(0,"cannot read symbolic link %s",5);
    piVar6 = __errno_location();
    error(0,*piVar6,uVar5,uVar4);
    return true;
  case 'R':
    pcVar7 = "jx";
    pcVar9 = "-#0";
    filename = (char *)puVar1[5];
    break;
  case 'T':
    filename = (char *)puVar1[5];
    pcVar7 = "jx";
    pcVar9 = "-#0";
    uVar13 = (uint)filename;
    goto LAB_00102269;
  case 'U':
    ppVar3 = getpwuid(*(__uid_t *)((long)puVar1 + 0x1c));
joined_r0x00102463:
    filename = "UNKNOWN";
    if (ppVar3 != (passwd *)0x0) {
      filename = ppVar3->pw_name;
    }
    goto switchD_00102068_caseD_6e;
  case 'W':
    if (lStack_40 < 0) {
      local_48 = (char *)0x0;
      lStack_40 = 0;
    }
    goto LAB_001023fa;
  case 'X':
    local_48 = (char *)puVar1[9];
    lStack_40 = puVar1[10];
    goto LAB_001023fa;
  case 'Y':
    local_48 = (char *)puVar1[0xb];
    lStack_40 = puVar1[0xc];
    goto LAB_001023fa;
  case 'Z':
    local_48 = (char *)puVar1[0xd];
    lStack_40 = puVar1[0xe];
LAB_001023fa:
    arg.tv_nsec = lStack_40;
    arg.tv_sec = (__time_t)local_48;
    out_epoch_sec(pformat,prefix_len,arg);
    return false;
  case 'a':
    pcVar7 = "jo";
    pcVar9 = "-#0";
    filename = (char *)(ulong)(*(uint *)(puVar1 + 3) & 0xfff);
    break;
  case 'b':
    pcVar7 = "ju";
    pcVar9 = "\'-0";
    filename = (char *)puVar1[8];
    break;
  case 'd':
    filename = (char *)*puVar1;
    goto joined_r0x00102318;
  case 'f':
    pcVar7 = "jx";
    pcVar9 = "-#0";
    filename = (char *)(ulong)*(uint *)(puVar1 + 3);
    break;
  case 'g':
    pcVar7 = "ju";
    pcVar9 = "\'-0";
    filename = (char *)(ulong)*(uint *)(puVar1 + 4);
    break;
  case 'h':
    pcVar7 = "ju";
    pcVar9 = "\'-0";
    filename = (char *)puVar1[2];
    break;
  case 'i':
    pcVar7 = "ju";
    pcVar9 = "\'-0";
    filename = (char *)puVar1[1];
    break;
  case 'm':
    if ((follow_links) || ((*(uint *)(puVar1 + 3) & 0xf000) != 0xa000)) {
      pcVar7 = canonicalize_file_name(filename);
      if (pcVar7 != (char *)0x0) {
        pcVar9 = find_bind_mount(pcVar7);
        _Var12 = false;
        free(pcVar7);
        local_48 = (char *)0x0;
        if (pcVar9 != (char *)0x0) goto LAB_00102188;
        goto LAB_001026a0;
      }
      uVar4 = quotearg_style(4,filename);
      uVar5 = dcgettext(0,"failed to canonicalize %s",5);
      piVar6 = __errno_location();
      error(0,*piVar6,uVar5,uVar4);
    }
    else {
LAB_001026a0:
      local_48 = (char *)find_mount_point(filename,puVar1);
      if (local_48 != (char *)0x0) {
        pcVar9 = find_bind_mount(local_48);
        if (pcVar9 == (char *)0x0) {
          pcVar9 = local_48;
        }
        _Var12 = false;
        goto LAB_00102188;
      }
    }
    _Var12 = true;
    pcVar9 = "?";
    local_48 = (char *)0x0;
LAB_00102188:
    make_format(pformat,prefix_len,"-","s");
    __printf_chk(2,pformat,pcVar9);
    free(local_48);
    return _Var12;
  case 'n':
    goto switchD_00102068_caseD_6e;
  case 'o':
    filename = (char *)puVar1[7];
    if ((char *)0x1fffffffffffffff < filename + -1) {
      filename = (char *)0x200;
    }
    goto LAB_00102117;
  case 'r':
    filename = (char *)puVar1[5];
joined_r0x00102318:
    if (mod == 'H') {
      pcVar7 = "ju";
      pcVar9 = "\'-0";
      uVar13 = (uint)((ulong)filename >> 8);
LAB_001022d0:
      uVar13 = uVar13 & 0xfff;
      make_format(pformat,prefix_len,pcVar9,pcVar7);
      uVar8 = (uint)((ulong)filename >> 0x20) & 0xfffff000;
    }
    else {
      uVar13 = (uint)filename;
      pcVar7 = "ju";
      pcVar9 = "\'-0";
      if (mod != 'L') {
LAB_00102117:
        pcVar7 = "ju";
        pcVar9 = "\'-0";
        break;
      }
LAB_00102269:
      uVar13 = uVar13 & 0xff;
      make_format(pformat,prefix_len,pcVar9,pcVar7);
      uVar8 = (uint)(((ulong)filename >> 0x14) << 8);
    }
    __printf_chk(2,pformat,uVar8 | uVar13);
    return false;
  case 's':
    pcVar7 = "ju";
    pcVar9 = "\'-0";
    filename = (char *)puVar1[6];
    break;
  case 't':
    filename = (char *)puVar1[5];
    pcVar7 = "jx";
    pcVar9 = "-#0";
    uVar13 = (uint)((ulong)filename >> 8);
    goto LAB_001022d0;
  case 'u':
    pcVar7 = "ju";
    pcVar9 = "\'-0";
    filename = (char *)(ulong)*(uint *)((long)puVar1 + 0x1c);
    break;
  case 'w':
    pcVar9 = "-";
    pcVar7 = "s";
    filename = pcVar9;
    if (lStack_40 < 0) break;
    goto LAB_00102084;
  case 'x':
    filename = human_time(*(timespec *)(puVar1 + 9));
    goto switchD_00102068_caseD_6e;
  case 'y':
    filename = human_time(*(timespec *)(puVar1 + 0xb));
    goto switchD_00102068_caseD_6e;
  case 'z':
    _Var11 = puVar1[0xd];
    _Var10 = puVar1[0xe];
LAB_00102084:
    t.tv_nsec = _Var10;
    t.tv_sec = _Var11;
    filename = human_time(t);
switchD_00102068_caseD_6e:
    pcVar7 = "s";
    pcVar9 = "-";
  }
  make_format(pformat,prefix_len,pcVar9,pcVar7);
  __printf_chk(2,pformat,filename);
  return false;
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
    iVar2 = strcmp("stat",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)piVar6 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  cached_mode cVar1;
  long lVar2;
  _Bool _Var3;
  bool bVar4;
  int iVar5;
  lconv *plVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  char *__haystack;
  undefined8 uVar10;
  int *piVar11;
  byte bVar12;
  uint uVar13;
  char **ppcVar14;
  _Bool fs;
  long in_FS_OFFSET;
  char *local_c8;
  statvfs statfsbuf;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  plVar6 = localeconv();
  decimal_point = plVar6->decimal_point;
  if (*decimal_point == '\0') {
    decimal_point = ".";
  }
  fs = false;
  decimal_point_len = strlen(decimal_point);
  atexit((__func *)&close_stdout);
  _Var3 = false;
  __haystack = (char *)0x0;
LAB_00104978:
  do {
    iVar5 = getopt_long(argc,argv,"c:fLt",long_options,0);
    if (iVar5 == -1) {
      if (_optind != argc) {
        if (__haystack == (char *)0x0) {
          __haystack = default_format(fs,_Var3,false);
          local_c8 = default_format(fs,_Var3,true);
        }
        else {
          pcVar9 = strstr(__haystack,"%N");
          local_c8 = __haystack;
          if (pcVar9 != (char *)0x0) {
            pcVar9 = getenv("QUOTING_STYLE");
            if (pcVar9 == (char *)0x0) {
              set_quoting_style(0,4);
            }
            else {
              iVar5 = argmatch(pcVar9,&quoting_style_args,&quoting_style_vals,4);
              if (iVar5 < 0) {
                set_quoting_style(0,4);
                uVar7 = quote(pcVar9);
                uVar10 = dcgettext(0,
                                   "ignoring invalid value of environment variable QUOTING_STYLE: %s"
                                   ,5);
                error(0,0,uVar10,uVar7);
              }
              else {
                set_quoting_style(0,*(undefined4 *)(&quoting_style_vals + (long)iVar5 * 4));
              }
            }
          }
        }
        if (_optind < argc) {
          lVar8 = (long)_optind;
          uVar13 = argc - _optind;
          ppcVar14 = argv + lVar8;
          bVar12 = 1;
          do {
            pcVar9 = *ppcVar14;
            if (fs == false) {
              bVar4 = do_stat(pcVar9,__haystack,local_c8);
            }
            else {
              iVar5 = strcmp(pcVar9,"-");
              if (iVar5 == 0) {
                uVar7 = quotearg_style(4,pcVar9);
                uVar10 = dcgettext(0,
                                   "using %s to denote standard input does not work in file system mode"
                                   ,5);
                error(0,0,uVar10,uVar7);
                bVar4 = false;
              }
              else {
                iVar5 = statvfs(pcVar9,(statvfs *)&statfsbuf);
                if (iVar5 == 0) {
                  _Var3 = print_it(__haystack,-1,pcVar9,print_statfs,&statfsbuf);
                  bVar4 = !_Var3;
                }
                else {
                  uVar7 = quotearg_style(4,pcVar9);
                  uVar10 = dcgettext(0,"cannot read file system information for %s",5);
                  piVar11 = __errno_location();
                  error(0,*piVar11,uVar10,uVar7);
                  bVar4 = false;
                }
              }
            }
            ppcVar14 = ppcVar14 + 1;
            bVar12 = bVar12 & bVar4;
          } while (ppcVar14 != argv + (ulong)uVar13 + lVar8);
        }
        else {
          bVar12 = 1;
        }
        if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return (int)(bVar12 ^ 1);
      }
      uVar7 = dcgettext(0,"missing operand",5);
      error(0,0,uVar7);
LAB_00104ce3:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    if (iVar5 == 99) {
      interpret_backslash_escapes = false;
      trailing_delim = "\n";
      __haystack = _optarg;
      goto LAB_00104978;
    }
    if (iVar5 < 100) {
      if (iVar5 == 0) {
        lVar8 = __xargmatch_internal("--cached",_optarg,cached_args,cached_modes,4,_argmatch_die,1);
        cVar1 = cached_modes[lVar8];
        if (cVar1 == cached_never) {
          force_sync = true;
          dont_sync = false;
        }
        else if (cVar1 == cached_always) {
          force_sync = false;
          dont_sync = true;
        }
        else if (cVar1 == cached_default) {
          force_sync = false;
          dont_sync = false;
        }
      }
      else {
        if (iVar5 < 1) {
          if (iVar5 == -0x83) {
            uVar7 = proper_name_lite("Michael Meskes","Michael Meskes");
            version_etc(_stdout,&_LC170,"GNU coreutils",_Version,uVar7,0);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          if (iVar5 == -0x82) {
                    /* WARNING: Subroutine does not return */
            usage(0);
          }
          goto LAB_00104ce3;
        }
        if (iVar5 != 0x4c) goto LAB_00104ce3;
        follow_links = true;
      }
    }
    else if (iVar5 == 0x74) {
      _Var3 = true;
    }
    else if (iVar5 == 0x80) {
      interpret_backslash_escapes = true;
      trailing_delim = "";
      __haystack = _optarg;
    }
    else {
      if (iVar5 != 0x66) goto LAB_00104ce3;
      fs = true;
    }
  } while( true );
}


