
/* WARNING: Unknown calling convention */

size_t wd_hasher(void *entry,size_t tabsize)

{
  return (ulong)(long)*(int *)((long)entry + 0x44) % tabsize;
}



/* WARNING: Unknown calling convention */

_Bool wd_comparator(void *e1,void *e2)

{
  return *(int *)((long)e1 + 0x44) == *(int *)((long)e2 + 0x44);
}



/* WARNING: Unknown calling convention */

_Bool writers_are_dead(void)

{
  __pid_t *p_Var1;
  int iVar2;
  int *piVar3;
  pid_t *ppVar4;
  
  if (nbpids == 0) {
    return false;
  }
  if (0 < nbpids) {
    p_Var1 = pids + nbpids;
    ppVar4 = pids;
    while( true ) {
      iVar2 = kill(*ppVar4,0);
      if (iVar2 == 0) {
        return false;
      }
      piVar3 = __errno_location();
      if (*piVar3 == 1) break;
      ppVar4 = ppVar4 + 1;
      if (ppVar4 == p_Var1) {
        return true;
      }
    }
    return false;
  }
  return true;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void write_error(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  fflush_unlocked(_stdout);
  fpurge(_stdout);
  clearerr_unlocked(_stdout);
  uVar3 = dcgettext(0,"write error",5);
  uVar5 = 1;
  error(1,iVar1,uVar3);
  uVar3 = quotearg_style(4);
  uVar4 = dcgettext(0,"closing %s (fd=%d)",5);
  piVar2 = __errno_location();
  error(0,*piVar2,uVar4,uVar3,uVar5 & 0xffffffff);
  return;
}



/* WARNING: Unknown calling convention */

void close_fd(int fd,char *filename)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  
  uVar1 = quotearg_style(4);
  uVar2 = dcgettext(0,"closing %s (fd=%d)",5);
  piVar3 = __errno_location();
  error(0,*piVar3,uVar2,uVar1,fd);
  return;
}



/* WARNING: Unknown calling convention */

void close_fd(int fd,char *filename)

{
  int iVar1;
  
  if (fd + 1U < 2) {
    return;
  }
  iVar1 = close(fd);
  if (iVar1 == 0) {
    return;
  }
  close_fd(fd,filename);
  return;
}



off_t xlseek(int fd,off_t offset,int whence,char *filename)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined4 in_register_00000014;
  char *pcVar4;
  undefined4 in_register_0000003c;
  
  if ((int)offset == 1) goto LAB_001001d0;
  uVar1 = quotearg_n_style_colon(0,3,CONCAT44(in_register_00000014,whence));
  pcVar4 = "%s: cannot seek to offset %jd";
  do {
    uVar2 = dcgettext(0,pcVar4,5);
    piVar3 = __errno_location();
    error(1,*piVar3,uVar2,uVar1,CONCAT44(in_register_0000003c,fd));
LAB_001001d0:
    uVar1 = quotearg_n_style_colon();
    pcVar4 = "%s: cannot seek to relative offset %jd";
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void xwrite_stdout(char *buffer,size_t n_bytes)

{
  char *pcVar1;
  size_t sVar2;
  long *plVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  void *pvVar7;
  long *plVar8;
  long extraout_RDX;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  char *buffer_00;
  int __c;
  long in_FS_OFFSET;
  char acStack_2060 [8200];
  long lStack_58;
  undefined8 uStack_48;
  long *plStack_40;
  
  sVar2 = fwrite_unlocked(buffer,1,n_bytes,_stdout);
  if (n_bytes <= sVar2) {
    return;
  }
  clearerr_unlocked(_stdout);
  plVar3 = (long *)quotearg_style(4,"standard output");
  uVar4 = dcgettext(0,"error writing %s",5);
  piVar5 = __errno_location();
  uVar11 = 1;
  iVar10 = *piVar5;
  plVar8 = plVar3;
  error(1,iVar10,uVar4);
  lStack_58 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_48 = uVar4;
  plStack_40 = plVar3;
  if (extraout_RDX != 0) {
    lVar9 = extraout_RDX;
    while( true ) {
      lVar6 = safe_read(iVar10,acStack_2060,0x2000);
      if (lVar6 == 0) break;
      if (lVar6 < 0) {
        uVar4 = quotearg_style(4,uVar11);
        uVar11 = dcgettext(0,"error reading %s",5);
        piVar5 = __errno_location();
        error(0,*piVar5,uVar11,uVar4);
        break;
      }
      *plVar8 = *plVar8 + lVar6;
      __c = (int)line_end;
      pcVar1 = acStack_2060 + lVar6;
      buffer_00 = acStack_2060;
      while (pvVar7 = memchr(buffer_00,__c,(long)pcVar1 - (long)buffer_00), pvVar7 != (void *)0x0) {
        buffer_00 = (char *)((long)pvVar7 + 1);
        lVar9 = lVar9 + -1;
        if (lVar9 == 0) {
          if (buffer_00 < pcVar1) {
            xwrite_stdout(buffer_00,(long)pcVar1 - (long)buffer_00);
          }
          goto LAB_00100318;
        }
      }
    }
  }
LAB_00100318:
  if (lStack_58 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention */

int start_lines(char *pretty_filename,int fd,uintmax_t n_lines,uintmax_t *read_pos)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  char *buffer_00;
  int iVar8;
  long in_FS_OFFSET;
  char buffer [8192];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = 0;
  if (n_lines != 0) {
    while( true ) {
      lVar3 = safe_read(fd,buffer,0x2000);
      if (lVar3 == 0) break;
      if (lVar3 < 0) {
        uVar5 = quotearg_style(4,pretty_filename);
        uVar6 = dcgettext(0,"error reading %s",5);
        piVar7 = __errno_location();
        error(0,*piVar7,uVar6,uVar5);
        iVar8 = 1;
        goto LAB_00100318;
      }
      *read_pos = *read_pos + lVar3;
      iVar8 = (int)line_end;
      pcVar1 = buffer + lVar3;
      buffer_00 = buffer;
      while( true ) {
        pvVar4 = memchr(buffer_00,iVar8,(long)pcVar1 - (long)buffer_00);
        if (pvVar4 == (void *)0x0) break;
        buffer_00 = (char *)((long)pvVar4 + 1);
        n_lines = n_lines - 1;
        if (n_lines == 0) {
          if (buffer_00 < pcVar1) {
            xwrite_stdout(buffer_00,(long)pcVar1 - (long)buffer_00);
            iVar8 = 0;
          }
          else {
            iVar8 = 0;
          }
          goto LAB_00100318;
        }
      }
    }
    iVar8 = -1;
  }
LAB_00100318:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

int start_bytes(char *pretty_filename,int fd,uintmax_t n_bytes,uintmax_t *read_pos)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  long in_FS_OFFSET;
  char buffer [8192];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (n_bytes != 0) {
    do {
      uVar3 = safe_read(fd,buffer,0x2000);
      if (uVar3 == 0) {
        iVar2 = -1;
        goto LAB_00100428;
      }
      if ((long)uVar3 < 0) {
        uVar4 = quotearg_style(4,pretty_filename);
        uVar5 = dcgettext(0,"error reading %s",5);
        piVar6 = __errno_location();
        error(0,*piVar6,uVar5,uVar4);
        iVar2 = 1;
        goto LAB_00100428;
      }
      *read_pos = *read_pos + uVar3;
      if (n_bytes < uVar3) {
        xwrite_stdout(buffer + n_bytes,uVar3 - n_bytes);
        break;
      }
      n_bytes = n_bytes - uVar3;
    } while (n_bytes != 0);
  }
  iVar2 = 0;
LAB_00100428:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* WARNING: Unknown calling convention */

_Bool fremote(int fd,char *name)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  statfs buf;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = fstatfs(fd,(statfs *)&buf);
  if (iVar2 != 0) {
    piVar3 = __errno_location();
    if (*piVar3 != 0x26) {
      uVar4 = quotearg_style(4,name);
      uVar5 = dcgettext(0,"cannot determine location of %s. reverting to polling",5);
      error(0,*piVar3,uVar5,uVar4);
    }
    bVar6 = true;
    goto LAB_0010067a;
  }
  if (buf.f_type != 0x2fc12fc1) {
    if (buf.f_type < 0x2fc12fc2) {
      if (buf.f_type != 0xadf5) {
        if (buf.f_type < 0xadf6) {
          if (buf.f_type < 0x4007) {
            if (0x3fff < buf.f_type) {
              bVar6 = (0x51UL >> (buf.f_type & 0x3fU) & 1) == 0;
              goto LAB_0010067a;
            }
            if (buf.f_type < 0x1390) {
              if (0x1372 < buf.f_type) {
                bVar6 = (0x10001401UL >> (buf.f_type - 0x1373U & 0x3f) & 1) == 0;
                goto LAB_0010067a;
              }
              if (buf.f_type != 0x187) {
                if (buf.f_type < 0x188) {
                  bVar6 = (buf.f_type - 0x2fU & 0xfffffffffffffffb) != 0;
                }
                else {
                  bVar6 = buf.f_type != 0x7c0;
                }
                goto LAB_0010067a;
              }
            }
            else if (buf.f_type != 0x2478) {
              if (0x2478 < buf.f_type) {
                bVar6 = buf.f_type != 0x3434;
                goto LAB_0010067a;
              }
              if (buf.f_type != 0x1cd1) {
                bVar6 = buf.f_type != 0x2468;
                goto LAB_0010067a;
              }
            }
          }
          else if (buf.f_type != 0x5df5) {
            if (buf.f_type < 0x5df6) {
              if (buf.f_type != 0x4858) {
                if (buf.f_type < 0x4859) {
                  if (buf.f_type != 0x4244) {
                    bVar6 = buf.f_type != 0x482b;
                    goto LAB_0010067a;
                  }
                }
                else if (buf.f_type != 0x4d44) {
                  bVar6 = buf.f_type != 0x4d5a;
                  goto LAB_0010067a;
                }
              }
            }
            else if (buf.f_type != 0x9660) {
              if (0x9660 < buf.f_type) {
                bVar6 = 2 < buf.f_type - 0x9fa0U;
                goto LAB_0010067a;
              }
              if (buf.f_type != 0x7275) {
                bVar6 = buf.f_type != 0x72b6;
                goto LAB_0010067a;
              }
            }
          }
        }
        else if (buf.f_type != 0x7655821) {
          if (buf.f_type < 0x7655822) {
            if (buf.f_type != 0x414a53) {
              if (buf.f_type < 0x414a54) {
                if (buf.f_type != 0xf15f) {
                  if (buf.f_type < 0xf160) {
                    if ((buf.f_type & 0xfffffffffffffffdU) != 0xef51) {
                      bVar6 = buf.f_type != 0xadff;
                      goto LAB_0010067a;
                    }
                  }
                  else if (buf.f_type != 0x11954) {
                    bVar6 = buf.f_type != 0x27e0eb;
                    goto LAB_0010067a;
                  }
                }
              }
              else if (buf.f_type != 0x1021997) {
                if (buf.f_type < 0x1021998) {
                  if (buf.f_type != 0xc0ffee) {
                    bVar6 = buf.f_type != 0x1021994;
                    goto LAB_0010067a;
                  }
                }
                else if (buf.f_type != 0x12fd16d) {
                  bVar6 = 3 < buf.f_type - 0x12ff7b4U;
                  goto LAB_0010067a;
                }
              }
            }
          }
          else if (buf.f_type != 0x19800202) {
            if (buf.f_type < 0x19800203) {
              if (buf.f_type != 0x11307854) {
                if (buf.f_type < 0x11307855) {
                  if (buf.f_type != 0x9041934) {
                    bVar6 = buf.f_type != 0xbad1dea;
                    goto LAB_0010067a;
                  }
                }
                else if (buf.f_type != 0x13661366) {
                  bVar6 = buf.f_type != 0x15013346;
                  goto LAB_0010067a;
                }
              }
            }
            else if (buf.f_type != 0x24051905) {
              if (buf.f_type < 0x24051906) {
                if (buf.f_type != 0x1badface) {
                  bVar6 = buf.f_type != 0x2011bab0;
                  goto LAB_0010067a;
                }
              }
              else if (buf.f_type != 0x28cd3d45) {
                bVar6 = buf.f_type != 0x2bad1dea;
                goto LAB_0010067a;
              }
            }
          }
        }
      }
    }
    else if (buf.f_type != 0x62656572) {
      if (buf.f_type < 0x62656573) {
        if (buf.f_type != 0x53464846) {
          if (buf.f_type < 0x53464847) {
            if (buf.f_type != 0x454d444d) {
              if (buf.f_type < 0x454d444e) {
                if (buf.f_type != 0x43415d53) {
                  if (buf.f_type < 0x43415d54) {
                    if ((buf.f_type != 0x42465331) && (buf.f_type != 0x42494e4d)) {
                      bVar6 = buf.f_type != 0x3153464a;
                      goto LAB_0010067a;
                    }
                  }
                  else if (buf.f_type != 0x444d4142) {
                    bVar6 = buf.f_type != 0x453dcd28;
                    goto LAB_0010067a;
                  }
                }
              }
              else if (buf.f_type != 0x52654973) {
                if (buf.f_type < 0x52654974) {
                  if (buf.f_type != 0x45584653) {
                    bVar6 = buf.f_type != 0x50494446;
                    goto LAB_0010067a;
                  }
                }
                else if (buf.f_type != 0x5345434d) {
                  bVar6 = buf.f_type != 0x5346314d;
                  goto LAB_0010067a;
                }
              }
            }
          }
          else if (buf.f_type != 0x5a3c69f0) {
            if (buf.f_type < 0x5a3c69f1) {
              if (buf.f_type != 0x565a4653) {
                if (buf.f_type < 0x565a4654) {
                  if ((buf.f_type != 0x534f434b) && (buf.f_type != 0x54190100)) {
                    bVar6 = buf.f_type != 0x5346544e;
                    goto LAB_0010067a;
                  }
                }
                else if (buf.f_type != 0x58295829) {
                  bVar6 = buf.f_type != 0x58465342;
                  goto LAB_0010067a;
                }
              }
            }
            else if (buf.f_type != 0x6165676c) {
              if (buf.f_type < 0x6165676d) {
                if (buf.f_type != 0x5a4f4653) {
                  bVar6 = buf.f_type != 0x5dca2df5;
                  goto LAB_0010067a;
                }
              }
              else if (buf.f_type != 0x62646576) {
                bVar6 = buf.f_type != 0x62656570;
                goto LAB_0010067a;
              }
            }
          }
        }
      }
      else if (buf.f_type != 0x9123683e) {
        if (buf.f_type < 0x9123683f) {
          if (buf.f_type != 0x6e736673) {
            if (buf.f_type < 0x6e736674) {
              if (buf.f_type != 0x67596969) {
                if (buf.f_type < 0x6759696a) {
                  if ((buf.f_type != 0x64626720) && (buf.f_type != 0x64646178)) {
                    bVar6 = buf.f_type != 0x63677270;
                    goto LAB_0010067a;
                  }
                }
                else if (buf.f_type != 0x68191122) {
                  bVar6 = buf.f_type != 0x6c6f6f70;
                  goto LAB_0010067a;
                }
              }
            }
            else if (buf.f_type != 0x73727279) {
              if (buf.f_type < 0x7372727a) {
                if (buf.f_type != 0x73636673) {
                  bVar6 = buf.f_type != 0x73717368;
                  goto LAB_0010067a;
                }
              }
              else if (buf.f_type != 0x74726163) {
                bVar6 = buf.f_type != 0x858458f6;
                goto LAB_0010067a;
              }
            }
          }
        }
        else if (buf.f_type != 0xcafe4a11) {
          if (buf.f_type < 0xcafe4a12) {
            if (buf.f_type != 0xc7571590) {
              if (buf.f_type < 0xc7571591) {
                if (buf.f_type != 0x958458f6) {
                  bVar6 = buf.f_type != 0xabba1974;
                  goto LAB_0010067a;
                }
              }
              else if (buf.f_type != 0xc97e8168) {
                bVar6 = buf.f_type != 0xca451a4e;
                goto LAB_0010067a;
              }
            }
          }
          else if (buf.f_type != 0xf2f52010) {
            if (buf.f_type < 0xf2f52011) {
              if (buf.f_type != 0xde5e81e4) {
                bVar6 = buf.f_type != 0xe0f5e1e2;
                goto LAB_0010067a;
              }
            }
            else if (buf.f_type != 0xf97cff8c) {
              bVar6 = buf.f_type != 0xf995e849;
              goto LAB_0010067a;
            }
          }
        }
      }
    }
  }
  bVar6 = false;
LAB_0010067a:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



char * pretty_name(File_spec *f)

{
  char *pcVar1;
  
  if ((*(char *)&f->name == '-') && (*(char *)((long)&f->name + 1) == '\0')) {
    pcVar1 = (char *)dcgettext(0,"standard input",5);
    return pcVar1;
  }
  return (char *)f;
}



/* WARNING: Unknown calling convention */

uintmax_t dump_remainder(_Bool want_header,char *pretty_filename,int fd,uintmax_t n_bytes)

{
  long lVar1;
  size_t n_bytes_00;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  uintmax_t uVar7;
  uintmax_t uVar8;
  long in_FS_OFFSET;
  char buffer [8192];
  
  uVar8 = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = n_bytes;
  while( true ) {
    uVar5 = 0x2000;
    if (uVar7 < 0x2001) {
      uVar5 = uVar7;
    }
    n_bytes_00 = safe_read(fd,buffer,uVar5);
    if ((long)n_bytes_00 < 0) break;
    if (n_bytes_00 == 0) goto LAB_00100c75;
    if (want_header != false) {
      puVar6 = &_LC9;
      if (first_file_3 == '\0') {
        puVar6 = &_LC10;
      }
      __printf_chk(2,"%s==> %s <==\n",puVar6,pretty_filename);
      first_file_3 = '\0';
    }
    uVar8 = uVar8 + n_bytes_00;
    xwrite_stdout(buffer,n_bytes_00);
    if ((n_bytes != 0xffffffffffffffff) &&
       ((uVar7 = uVar7 - n_bytes_00, uVar7 == 0 || (n_bytes == 0xfffffffffffffffe))))
    goto LAB_00100c75;
    want_header = false;
  }
  piVar2 = __errno_location();
  if (*piVar2 != 0xb) {
    uVar3 = quotearg_style(4,pretty_filename);
    uVar4 = dcgettext(0,"error reading %s",5);
    error(1,*piVar2,uVar4,uVar3);
    goto LAB_00100d1e;
  }
LAB_00100c75:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
LAB_00100d1e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void check_fspec(File_spec *fspec,File_spec **prev_fspec)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uintmax_t uVar5;
  char *pretty_filename;
  int *piVar6;
  char *filename;
  undefined8 uVar7;
  __off_t _Var8;
  long in_FS_OFFSET;
  undefined1 want_header;
  stat stats;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (fspec->fd == -1) goto LAB_00100dca;
  pretty_filename = fspec->name;
  if ((*pretty_filename == '-') && (pretty_filename[1] == '\0')) {
    pretty_filename = (char *)dcgettext(0,"standard input",5);
    iVar4 = fstat(fspec->fd,(stat *)&stats);
    if (iVar4 == 0) goto LAB_00100d81;
LAB_00100e2f:
    piVar6 = __errno_location();
    prev_fspec = (File_spec **)(ulong)(uint)fspec->fd;
    fspec->errnum = *piVar6;
    if (1 < fspec->fd + 1U) goto LAB_00100ed0;
  }
  else {
    iVar4 = fstat(fspec->fd,(stat *)&stats);
    if (iVar4 != 0) goto LAB_00100e2f;
LAB_00100d81:
    want_header = (undefined1)iVar4;
    if ((fspec->mode & 0xf000) == 0x8000) {
      if (stats.st_size < fspec->size) {
        filename = (char *)quotearg_n_style_colon(0,3,pretty_filename);
        uVar7 = dcgettext(0,"%s: file truncated",5);
        error(0,0,uVar7);
        _Var8 = lseek(fspec->fd,0,0);
        if (_Var8 < 0) {
          xlseek(0,0,(int)pretty_filename,filename);
        }
        fspec->size = 0;
      }
      else if ((stats.st_size == fspec->size) &&
              (lVar2 = (fspec->mtime).tv_sec, lVar3 = (fspec->mtime).tv_nsec,
              ((uint)(stats.st_mtim.tv_nsec < lVar3) - (uint)(lVar3 < stats.st_mtim.tv_nsec)) +
              ((uint)(stats.st_mtim.tv_sec < lVar2) - (uint)(lVar2 < stats.st_mtim.tv_sec)) * 2 == 0
              )) goto LAB_00100dca;
    }
    if (print_headers != false) {
      want_header = *prev_fspec != fspec;
    }
    uVar5 = dump_remainder((_Bool)want_header,pretty_filename,fspec->fd,0xffffffffffffffff);
    fspec->size = fspec->size + uVar5;
    if (uVar5 == 0) goto LAB_00100dca;
    *prev_fspec = fspec;
    iVar4 = fflush_unlocked(_stdout);
    if (iVar4 == 0) goto LAB_00100dca;
    write_error();
LAB_00100ed0:
    iVar4 = close((int)prev_fspec);
    if (iVar4 != 0) {
      close_fd((int)prev_fspec,pretty_filename);
    }
  }
  fspec->fd = -1;
LAB_00100dca:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention */

void recheck(File_spec *f,_Bool blocking)

{
  byte *pbVar1;
  long lVar2;
  _Bool _Var3;
  _Bool _Var4;
  byte bVar5;
  _Bool _Var6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int *piVar11;
  File_spec *pFVar12;
  __off_t _Var13;
  off_t oVar14;
  char *pcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char *pcVar18;
  uint uVar19;
  undefined *puVar20;
  uint uVar21;
  long in_FS_OFFSET;
  stat new_stats;
  
  pbVar1 = (byte *)f->name;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  uVar19 = *pbVar1 - 0x2d;
  if (uVar19 == 0) {
    uVar19 = (uint)pbVar1[1];
  }
  _Var6 = f->tailable;
  uVar21 = f->errnum;
  if (uVar19 == 0) {
    iVar7 = 0;
    uVar8 = uVar21;
  }
  else {
    iVar7 = open_safer(pbVar1,(blocking ^ 1) << 0xb);
    uVar8 = f->errnum;
  }
  _Var4 = reopen_inaccessible_files;
  _Var3 = disable_inotify;
  if ((f->fd == -1) == (uVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("valid_file_spec (f)","src/tail.c",0x3d8,"recheck");
  }
  if (reopen_inaccessible_files == false) {
    f->tailable = true;
    if (((_Var3 == false) && (iVar9 = lstat(f->name,(stat *)&new_stats), iVar9 == 0)) &&
       ((new_stats.st_mode & 0xf000) == 0xa000)) goto LAB_001014e6;
    if (iVar7 == -1) {
LAB_00101009:
      puVar10 = (uint *)__errno_location();
      pFVar12 = (File_spec *)f->name;
      uVar19 = *puVar10;
      f->errnum = uVar19;
      if (f->tailable == false) goto LAB_00101283;
      if (uVar19 != uVar21) {
        pcVar15 = pretty_name(pFVar12);
        uVar16 = quotearg_n_style_colon(0,3,pcVar15);
        error(0,*puVar10,&_LC17,uVar16);
        pFVar12 = (File_spec *)f->name;
      }
    }
    else {
LAB_001010cb:
      iVar9 = fstat(iVar7,(stat *)&new_stats);
      if (iVar9 < 0) goto LAB_00101009;
      if ((((new_stats.st_mode & 0xf000) - 0x1000 & 0xffffe000) == 0) ||
         ((new_stats.st_mode & 0xb000) == 0x8000)) {
        pcVar15 = f->name;
        if ((*pcVar15 == '-') && (pcVar15[1] == '\0')) {
          pcVar15 = (char *)dcgettext(0,"standard input",5);
        }
        _Var6 = fremote(iVar7,pcVar15);
        f->remote = _Var6;
        if ((!_Var6) || (disable_inotify != false)) {
          f->errnum = 0;
          if ((uVar21 & 0xfffffffd) == 0) {
            pFVar12 = (File_spec *)f->name;
            if (f->fd == -1) {
              pcVar15 = pretty_name(pFVar12);
              pcVar15 = (char *)quotearg_style(4,pcVar15);
              pcVar18 = "%s has appeared;  following new file";
              goto LAB_00101366;
            }
            if ((f->ino == new_stats.st_ino) && (f->dev == new_stats.st_dev)) {
              if ((*(char *)&pFVar12->name == '-') && (*(char *)((long)&pFVar12->name + 1) == '\0'))
              {
                pFVar12 = (File_spec *)dcgettext(0,"standard input",5);
              }
              if ((iVar7 != 0) && (iVar9 = close(iVar7), iVar9 != 0)) {
                close_fd(iVar7,(char *)pFVar12);
              }
              goto LAB_00101070;
            }
            pcVar15 = pretty_name(pFVar12);
            pcVar15 = (char *)quotearg_style(4,pcVar15);
            uVar16 = dcgettext(0,"%s has been replaced;  following new file",5);
            error(0,0,uVar16);
            pcVar18 = pretty_name((File_spec *)f->name);
            close_fd(f->fd,pcVar18);
          }
          else {
            if (f->fd != -1) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("f->fd == -1","src/tail.c",0x425,"recheck");
            }
            pcVar15 = f->name;
            if ((*pcVar15 == '-') && (pcVar15[1] == '\0')) {
              pcVar15 = (char *)dcgettext(0,"standard input",5);
            }
            pcVar15 = (char *)quotearg_style(4,pcVar15);
            pcVar18 = "%s has become accessible";
LAB_00101366:
            uVar16 = dcgettext(0,pcVar18,5);
            error(0,0,uVar16);
          }
          uVar21 = (uint)blocking;
          f->fd = iVar7;
          if (uVar19 == 0) {
            uVar21 = 0xffffffff;
          }
          f->size = 0;
          f->n_unchanged_stats = 0;
          (f->mtime).tv_sec = new_stats.st_mtim.tv_sec;
          f->blocking = uVar21;
          (f->mtime).tv_nsec = new_stats.st_mtim.tv_nsec;
          f->ignore = false;
          f->mode = new_stats.st_mode;
          f->dev = new_stats.st_dev;
          f->ino = new_stats.st_ino;
          if ((new_stats.st_mode & 0xf000) != 0x8000) goto LAB_00101070;
          f = (File_spec *)f->name;
          if ((*(char *)&f->name == '-') && (*(char *)((long)&f->name + 1) == '\0')) {
            f = (File_spec *)dcgettext(0,"standard input",5);
          }
          _Var13 = lseek(iVar7,0,0);
          if (-1 < _Var13) goto LAB_00101070;
          oVar14 = xlseek(0,0,(int)f,pcVar15);
          bVar5 = (byte)oVar14;
          goto LAB_00101428;
        }
        f->errnum = -1;
        pcVar15 = pretty_name((File_spec *)f->name);
        uVar16 = quotearg_style(4,pcVar15);
        uVar17 = dcgettext(0,"%s has been replaced with an untailable remote file",5);
        error(0,0,uVar17,uVar16);
        f->ignore = true;
        f->remote = true;
      }
      else {
        f->errnum = -1;
        f->tailable = false;
        bVar5 = uVar21 != 0xffffffff | _Var6;
        if ((_Var4 == false) || (follow_mode != Follow_name)) {
LAB_00101428:
          f->ignore = true;
          if (bVar5 == 0) goto LAB_0010128e;
          puVar20 = (undefined *)dcgettext(0,"; giving up on this name",5);
        }
        else {
          f->ignore = false;
          if (bVar5 == 0) goto LAB_0010128e;
          puVar20 = &_LC9;
        }
        pcVar15 = pretty_name((File_spec *)f->name);
        uVar16 = quotearg_style(4,pcVar15);
        uVar17 = dcgettext(0,"%s has been replaced with an untailable file%s",5);
        error(0,0,uVar17,uVar16,puVar20);
      }
LAB_0010128e:
      pFVar12 = (File_spec *)f->name;
    }
  }
  else {
    if (iVar7 == -1) {
      f->tailable = false;
      pFVar12 = (File_spec *)f->name;
      if (_Var3 != false) {
        piVar11 = __errno_location();
        f->errnum = *piVar11;
LAB_00101283:
        if (_Var6 == false) goto LAB_0010128e;
        pcVar15 = pretty_name(pFVar12);
        uVar16 = quotearg_style(4,pcVar15);
        uVar17 = dcgettext(0,"%s has become inaccessible",5);
        error(0,f->errnum,uVar17,uVar16);
        pFVar12 = (File_spec *)f->name;
        goto LAB_00101033;
      }
      iVar9 = lstat((char *)pFVar12,(stat *)&new_stats);
      if ((iVar9 != 0) || ((new_stats.st_mode & 0xf000) != 0xa000)) goto LAB_00101009;
    }
    else {
      f->tailable = true;
      if (((_Var3 != false) || (iVar9 = lstat(f->name,(stat *)&new_stats), iVar9 != 0)) ||
         ((new_stats.st_mode & 0xf000) != 0xa000)) goto LAB_001010cb;
    }
LAB_001014e6:
    f->errnum = -1;
    f->ignore = true;
    pcVar15 = pretty_name((File_spec *)f->name);
    uVar16 = quotearg_style(4,pcVar15);
    uVar17 = dcgettext(0,"%s has been replaced with an untailable symbolic link",5);
    error(0,0,uVar17,uVar16);
    pFVar12 = (File_spec *)f->name;
  }
LAB_00101033:
  uVar19 = *(byte *)&pFVar12->name - 0x2d;
  if (uVar19 == 0) {
    uVar19 = (uint)*(byte *)((long)&pFVar12->name + 1);
  }
  if (uVar19 == 0) {
    pFVar12 = (File_spec *)dcgettext(0,"standard input",5);
    if (1 < iVar7 + 1U) goto LAB_001012dc;
LAB_001012ec:
    pFVar12 = (File_spec *)f->name;
    if ((*(char *)&pFVar12->name == '-') && (*(char *)((long)&pFVar12->name + 1) == '\0')) {
      pFVar12 = (File_spec *)dcgettext(0,"standard input",5);
    }
  }
  else if (1 < iVar7 + 1U) {
LAB_001012dc:
    iVar9 = close(iVar7);
    if (iVar9 != 0) {
      close_fd(iVar7,(char *)pFVar12);
    }
    goto LAB_001012ec;
  }
  iVar7 = f->fd;
  if ((1 < iVar7 + 1U) && (iVar9 = close(iVar7), iVar9 != 0)) {
    close_fd(iVar7,(char *)pFVar12);
  }
  f->fd = -1;
LAB_00101070:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void usage(int status)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  infomap *piVar6;
  undefined *puVar7;
  infomap infomap [7];
  
  uVar4 = _program_name;
  piVar6 = infomap;
  if (status != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar4);
    goto LAB_0010172a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(2,uVar3,uVar4);
  uVar4 = dcgettext(0,
                    "Print the last %d lines of each FILE to standard output.\nWith more than one FILE, precede each with a header giving the file name.\n"
                    ,5);
  __printf_chk(2,uVar4,10);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -c, --bytes=[+]NUM       output the last NUM bytes; or use -c +NUM to\n                             output starting with byte NUM of each file\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -f, --follow[={name|descriptor}]\n                           output appended data as the file grows;\n                             an absent option argument means \'descriptor\'\n  -F                       same as --follow=name --retry\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  uVar4 = dcgettext(0,
                    "  -n, --lines=[+]NUM       output the last NUM lines, instead of the last %d;\n                             or use -n +NUM to skip NUM-1 lines at the start\n"
                    ,5);
  __printf_chk(2,uVar4,10);
  uVar4 = dcgettext(0,
                    "      --max-unchanged-stats=N\n                           with --follow=name, reopen a FILE which has not\n                             changed size after N (default %d) iterations\n                             to see if it has been unlinked or renamed\n                             (this is the usual case of rotated log files);\n                             with inotify, this option is rarely useful\n"
                    ,5);
  __printf_chk(2,uVar4,5);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "      --pid=PID            with -f, terminate after process ID, PID dies;\n                             can be repeated to watch multiple processes\n  -q, --quiet, --silent    never output headers giving file names\n      --retry              keep trying to open a file if it is inaccessible\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -s, --sleep-interval=N   with -f, sleep for approximately N seconds\n                             (default 1.0) between iterations;\n                             with inotify and --pid=P, check process P at\n                             least once every N seconds\n  -v, --verbose            always output headers giving file names\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"  -z, --zero-terminated    line delimiter is NUL, not newline\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nNUM may have a multiplier suffix:\nb 512, kB 1000, K 1024, MB 1000*1000, M 1024*1024,\nGB 1000*1000*1000, G 1024*1024*1024, and so on for T, P, E, Z, Y, R, Q.\nBinary prefixes can be used, too: KiB=K, MiB=M, and so on.\n\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = _stdout;
  pcVar5 = (char *)dcgettext(0,
                             "With --follow (-f), tail defaults to following the file descriptor, which\nmeans that even if a tail\'ed file is renamed, tail will continue to track\nits end.  This default behavior is not desirable when you really want to\ntrack the actual name of the file, not the file descriptor (e.g., log\nrotation).  Use --follow=name in that case.  That causes tail to track the\nnamed file in a way that accommodates renaming, removal and creation.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pcVar5 = "[";
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
    iVar2 = strcmp("tail",pcVar5);
    if (iVar2 == 0) break;
    pcVar5 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar5 != (char *)0x0);
  puVar7 = *(undefined **)((long)piVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC27;
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) goto LAB_00101a85;
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar5 = " invocation";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/",&_LC27);
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) {
LAB_00101a85:
      iVar2 = strncmp(pcVar5,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar5 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar5,pFVar1);
      }
    }
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar5 = "";
    __printf_chk(2,uVar4,"https://www.gnu.org/software/coreutils/",&_LC27);
    if (puVar7 == &_LC27) {
      pcVar5 = " invocation";
    }
  }
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar4,puVar7,pcVar5);
LAB_0010172a:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  char **ppcVar1;
  long lVar2;
  File_spec *f;
  __dev_t _Var3;
  Follow_mode FVar4;
  _Bool _Var5;
  int iVar6;
  uint uVar7;
  pid_t pVar8;
  int iVar9;
  uint uVar10;
  uint32_t __mask;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int *piVar16;
  char **ppcVar17;
  char *pcVar18;
  stat *psVar19;
  stat *psVar20;
  uintmax_t uVar21;
  stat *psVar22;
  void *pvVar23;
  __blksize_t _Var24;
  off_t oVar25;
  stat *psVar26;
  uint *puVar27;
  __off_t _Var28;
  size_t sVar29;
  stat *psVar30;
  stat *psVar31;
  stat *psVar32;
  size_t sVar33;
  long lVar34;
  undefined7 extraout_var;
  long lVar35;
  stat *psVar36;
  int new_flags;
  int extraout_EDX;
  char *pcVar37;
  stat *extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined *puVar38;
  uint uVar39;
  char **ppcVar40;
  long *plVar41;
  stat *psVar42;
  uint *puVar43;
  char *pcVar44;
  ulong uVar45;
  byte bVar46;
  stat *psVar47;
  option *poVar48;
  undefined1 uVar49;
  char cVar50;
  long in_FS_OFFSET;
  bool bVar51;
  double dVar52;
  stat *local_260;
  undefined8 local_258;
  stat *local_250;
  stat *local_248;
  stat *local_240;
  stat *local_238;
  double local_230;
  stat *local_228;
  stat *local_220;
  stat *local_218;
  stat *local_210;
  stat *local_208;
  stat *local_200;
  stat *local_1f0;
  stat *local_1e8;
  byte local_1dd;
  uintmax_t n_units;
  File_spec *prev_fspec;
  File_spec key;
  stat out_stat;
  stat in_stat;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  n_units = 10;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  iVar6 = getpagesize();
  have_read_stdin = false;
  page_size = (idx_t)iVar6;
  count_lines = true;
  print_headers = false;
  from_start = false;
  forever = false;
  line_end = '\n';
  if (argc == 2) {
LAB_001030ce:
    iVar6 = posix2_version();
    pcVar44 = argv[1];
    pcVar18 = pcVar44 + 1;
    pcVar37 = pcVar18;
    if (*pcVar44 == '+') {
      psVar26 = (stat *)0x1;
      if (0x2b8 < iVar6 - 0x30db0U) goto LAB_0010327b;
    }
    else if ((*pcVar44 == '-') &&
            ((iVar6 < 0x30db0 || (pcVar44[(ulong)(pcVar44[1] == 'c') + 1] != '\0')))) {
      psVar26 = (stat *)0x0;
LAB_0010327b:
      for (; cVar50 = *pcVar37, (int)cVar50 - 0x30U < 10; pcVar37 = pcVar37 + 1) {
      }
      if (cVar50 == 'c') {
        poVar48 = (option *)0x0;
        uVar21 = 10;
LAB_001034df:
        pcVar44 = pcVar37 + 1;
      }
      else {
        if (cVar50 == 'l') {
          poVar48 = (option *)0x1;
          uVar21 = 10;
          goto LAB_001034df;
        }
        if (cVar50 == 'b') {
          poVar48 = (option *)0x0;
          uVar21 = 0x1400;
          goto LAB_001034df;
        }
        poVar48 = (option *)0x1;
        uVar21 = 10;
        pcVar44 = pcVar37;
      }
      cVar50 = *pcVar44;
      if (cVar50 == 'f') {
        pcVar44 = pcVar44 + 1;
      }
      if (*pcVar44 == '\0') {
        if ((pcVar18 != pcVar37) &&
           (uVar39 = xstrtoumax(pcVar18,0,10,&n_units), uVar21 = n_units, (uVar39 & 0xfffffffd) != 0
           )) {
          psVar42 = (stat *)quote(argv[1]);
          uVar39 = dcgettext(0,"invalid number",5);
          piVar16 = __errno_location();
          error(1,*piVar16,"%s: %s");
LAB_00105c5d:
          reopen_inaccessible_files = false;
          pcVar18 = "warning: --retry ignored; --retry is useful only when following";
LAB_001037f7:
          uVar12 = dcgettext(0,pcVar18,5);
          error(0,0,uVar12);
LAB_0010380c:
          if (nbpids == 0) goto LAB_001035da;
          if (forever == false) {
            uVar12 = dcgettext(0,"warning: PID ignored; --pid=PID is useful only when following",5);
            error(0,0,uVar12);
            goto LAB_001035da;
          }
LAB_001035b8:
          iVar6 = kill(*pids,0);
          if (iVar6 == 0) goto LAB_001035da;
          piVar16 = __errno_location();
          if (*piVar16 == 0x26) goto LAB_00105bcb;
          goto LAB_001035da;
        }
        n_units = uVar21;
        from_start = SUB81(psVar26,0);
        lVar35 = 1;
        count_lines = SUB81(poVar48,0);
        forever = cVar50 == 'f';
        goto LAB_001030f2;
      }
    }
  }
  else {
    if (argc == 3) {
      pcVar18 = argv[2];
      if ((*pcVar18 == '-') && (pcVar18[1] != '\0')) goto LAB_001030be;
      goto LAB_001030ce;
    }
    if (argc == 4) {
      pcVar18 = argv[2];
LAB_001030be:
      iVar6 = strcmp(pcVar18,"--");
      if (iVar6 == 0) goto LAB_001030ce;
    }
  }
  lVar35 = 0;
LAB_001030f2:
  local_258 = local_258 & 0xffffffff00000000;
  psVar26 = (stat *)(argv + lVar35);
  uVar39 = argc - (int)lVar35;
  psVar20 = (stat *)(ulong)uVar39;
  poVar48 = long_options;
  uVar49 = 0xae;
  local_230 = _LC60;
  puVar43 = &switchD_00103174::switchdataD_00105c78;
  while( true ) {
    psVar42 = (stat *)0x0;
    uVar45 = (ulong)uVar39;
    uVar7 = getopt_long(uVar45,psVar26,"c:n:fFqs:vz0123456789");
    if (uVar7 == 0xffffffff) break;
    if (0x85 < (int)uVar7) {
switchD_00103174_caseD_3a:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    if ((int)uVar7 < 0x30) {
      if (uVar7 == 0xffffff7d) {
        uVar12 = proper_name_lite("Jim Meyering","Jim Meyering");
        uVar13 = proper_name_lite("Ian Lance Taylor","Ian Lance Taylor");
        uVar14 = proper_name_lite("David MacKenzie","David MacKenzie");
        uVar15 = proper_name_lite("Paul Rubin","Paul Rubin");
        version_etc(_stdout,&_LC27,"GNU coreutils",_Version,uVar15,uVar14,uVar13,uVar12,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (uVar7 == 0xffffff7e) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00103174_caseD_3a;
    }
    switch(uVar7) {
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      local_260 = (stat *)CONCAT44(local_260._4_4_,uVar7);
      uVar12 = dcgettext(0,"option used in invalid context -- %c",5);
      psVar32 = (stat *)(ulong)uVar7;
      puVar38 = (undefined *)0x0;
      psVar26 = (stat *)0x1;
      psVar19 = (stat *)error(1,0,uVar12);
LAB_00104391:
      xwrite_stdout((char *)psVar26,(size_t)puVar38);
      local_250 = psVar19;
LAB_00104190:
      pcVar18 = (char *)psVar19[0x39].st_dev;
      psVar19 = psVar32;
      for (; pcVar18 != (char *)0x0; pcVar18 = *(char **)(pcVar18 + 0x2010)) {
        if (*(size_t *)(pcVar18 + 0x2000) != 0) {
          xwrite_stdout(pcVar18,*(size_t *)(pcVar18 + 0x2000));
        }
      }
      local_220 = (stat *)CONCAT71(local_220._1_7_,uVar49);
LAB_00103ed0:
      do {
        psVar26 = (stat *)((stat *)((long)poVar48 + 0x2010))->st_dev;
        free(poVar48);
        poVar48 = (option *)psVar26;
      } while (psVar26 != (stat *)0x0);
      psVar26 = (stat *)0x0;
LAB_0010394f:
      psVar47 = (stat *)((ulong)local_220 & 0xff);
      psVar32 = psVar19;
LAB_00103955:
      do {
        iVar6 = (int)psVar20;
        psVar22 = psVar47;
        if (forever != false) {
          *(int *)((long)&((stat *)puVar43)->st_blksize + 4) = (int)psVar47 + -1;
          iVar9 = fstat((uint)local_258,(stat *)local_218);
          _Var5 = reopen_inaccessible_files;
          if (iVar9 < 0) {
            piVar16 = __errno_location();
            f = (File_spec *)((stat *)puVar43)->st_dev;
            *(int *)((long)&((stat *)puVar43)->st_blksize + 4) = *piVar16;
            pcVar18 = pretty_name(f);
            psVar32 = (stat *)quotearg_style(4,pcVar18);
            uVar12 = dcgettext(0,"error reading %s",5);
            error(0,*piVar16,uVar12);
          }
          else if ((((in_stat.st_mode & 0xf000) - 0x1000 & 0xffffe000) == 0) ||
                  ((in_stat.st_mode & 0xb000) == 0x8000)) {
            if ((char)psVar47 != '\0') {
              *(__mode_t *)&((stat *)puVar43)->st_size = in_stat.st_mode;
              psVar20 = (stat *)((stat *)puVar43)->st_dev;
              *(undefined1 *)((long)&((stat *)puVar43)->st_size + 4) = 0;
              *(uint *)&((stat *)puVar43)->st_blksize = (uint)local_258;
              *(uint *)&((stat *)puVar43)->st_blocks = -(uint)(iVar6 == 0) | 1;
              *(__syscall_slong_t *)&((stat *)puVar43)->st_mode = in_stat.st_mtim.tv_nsec;
              ((timespec *)&((stat *)puVar43)->st_mtim)->tv_sec = 0;
              ((stat *)puVar43)->st_ino = (__ino_t)key.name;
              ((stat *)puVar43)->st_nlink = in_stat.st_mtim.tv_sec;
              *(ulong *)&((stat *)puVar43)->st_gid =
                   CONCAT26(in_stat.st_dev._6_2_,CONCAT24(in_stat.st_dev._4_2_,(int)in_stat.st_dev))
              ;
              ((stat *)puVar43)->st_rdev = in_stat.st_ino;
              psVar19 = (stat *)in_stat.st_mtim.tv_nsec;
              iVar6 = strcmp((char *)psVar20,"-");
              if (iVar6 == 0) {
                psVar20 = (stat *)dcgettext(0,"standard input",5);
              }
              _Var5 = fremote((uint)local_258,(char *)psVar20);
              *(_Bool *)((long)&((stat *)puVar43)->st_size + 5) = _Var5;
              goto LAB_0010396a;
            }
          }
          else {
            *(undefined4 *)((long)&((stat *)puVar43)->st_blksize + 4) = 0xffffffff;
            psVar42 = (stat *)&_LC9;
            *(undefined1 *)((long)&((stat *)puVar43)->st_size + 6) = 0;
            *(byte *)((long)&((stat *)puVar43)->st_size + 4) = _Var5 ^ 1U;
            if ((_Var5 ^ 1U) != 0) {
              psVar42 = (stat *)dcgettext(0,"; giving up on this name",5);
            }
            pcVar18 = pretty_name((File_spec *)((stat *)puVar43)->st_dev);
            psVar32 = (stat *)quotearg_n_style_colon(0,3,pcVar18);
            uVar12 = dcgettext(0,"%s: cannot follow end of this type of file%s",5);
            error(0,0,uVar12);
          }
          psVar20 = (stat *)((stat *)puVar43)->st_dev;
          *(byte *)((long)&((stat *)puVar43)->st_size + 4) = reopen_inaccessible_files ^ 1;
          iVar6 = strcmp((char *)psVar20,"-");
          if (iVar6 == 0) {
            psVar20 = (stat *)dcgettext(0,"standard input",5);
          }
          psVar19 = psVar32;
          iVar6 = (uint)local_258;
          if ((uint)local_258 != 0) goto LAB_0010433b;
          goto LAB_00103b8b;
        }
        psVar19 = psVar32;
        if (iVar6 == 0) goto LAB_0010396a;
        iVar6 = close((uint)local_258);
        psVar19 = psVar32;
        if (iVar6 == 0) goto LAB_0010396a;
        pcVar18 = pretty_name((File_spec *)((stat *)puVar43)->st_dev);
        psVar19 = (stat *)quotearg_style(4,pcVar18);
        pcVar18 = "error reading %s";
LAB_001037a9:
        psVar20 = (stat *)dcgettext(0,pcVar18,5);
        piVar16 = __errno_location();
        error(0,*piVar16,psVar20);
        psVar22 = (stat *)0x0;
LAB_0010396a:
        psVar47 = local_210;
        _Var5 = forever;
        puVar43 = (uint *)&((timespec *)&((stat *)puVar43)->st_mtim)->tv_nsec;
        local_1dd = local_1dd & (byte)psVar22;
        if ((stat *)puVar43 != local_210) {
LAB_00103700:
          psVar32 = (stat *)n_units;
          psVar22 = local_220;
          psVar47 = (stat *)((stat *)puVar43)->st_dev;
          local_250 = (stat *)n_units;
          uVar39 = (byte)psVar47->st_dev - 0x2d;
          psVar20 = (stat *)(ulong)uVar39;
          if (uVar39 == 0) {
            psVar20 = (stat *)(ulong)*(byte *)((long)&psVar47->st_dev + 1);
          }
          if ((forever == false) || ((nbpids == 0 && (local_260 == (stat *)0x1)))) {
            if ((int)psVar20 == 0) goto LAB_00103873;
            uVar12 = 0;
LAB_0010374e:
            iVar6 = open_safer(psVar47,uVar12);
            _Var5 = reopen_inaccessible_files;
            local_258 = CONCAT44(local_258._4_4_,iVar6);
            if (reopen_inaccessible_files == false) {
              *(undefined1 *)((long)&((stat *)puVar43)->st_size + 6) = 1;
              if (iVar6 == -1) {
LAB_00103777:
                if (forever != false) {
                  *(undefined4 *)&((stat *)puVar43)->st_blksize = 0xffffffff;
                  piVar16 = __errno_location();
                  *(byte *)((long)&((stat *)puVar43)->st_size + 4) = _Var5 ^ 1;
                  iVar6 = *piVar16;
                  *(undefined1 (*) [16])&((stat *)puVar43)->st_gid = (undefined1  [16])0x0;
                  *(int *)((long)&((stat *)puVar43)->st_blksize + 4) = iVar6;
                }
                pcVar18 = pretty_name((File_spec *)((stat *)puVar43)->st_dev);
                psVar19 = (stat *)quotearg_style(4,pcVar18);
                pcVar18 = "cannot open %s for reading";
                goto LAB_001037a9;
              }
              psVar47 = (stat *)((stat *)puVar43)->st_dev;
            }
            else {
              if (iVar6 == -1) {
                *(undefined1 *)((long)&((stat *)puVar43)->st_size + 6) = 0;
                goto LAB_00103777;
              }
              psVar47 = (stat *)((stat *)puVar43)->st_dev;
LAB_00103c9b:
              *(undefined1 *)((long)&((stat *)puVar43)->st_size + 6) = 1;
            }
          }
          else {
            uVar12 = 0x800;
            if ((int)psVar20 != 0) goto LAB_0010374e;
LAB_00103873:
            have_read_stdin = true;
            if (reopen_inaccessible_files != false) {
              psVar20 = (stat *)0x0;
              local_258 = (ulong)local_258._4_4_ << 0x20;
              goto LAB_00103c9b;
            }
            *(undefined1 *)((long)&((stat *)puVar43)->st_size + 6) = 1;
            psVar20 = (stat *)0x0;
            local_258 = (ulong)local_258._4_4_ << 0x20;
          }
          if (print_headers != false) {
            iVar6 = strcmp((char *)psVar47,"-");
            psVar19 = psVar47;
            if (iVar6 == 0) {
              psVar19 = (stat *)dcgettext(0,"standard input",5);
            }
            puVar38 = &_LC9;
            if (first_file_3 == '\0') {
              puVar38 = &_LC10;
            }
            __printf_chk(2,"%s==> %s <==\n",puVar38);
            first_file_3 = '\0';
            psVar47 = (stat *)((stat *)puVar43)->st_dev;
          }
          local_240 = psVar47;
          if (((char)psVar47->st_dev == '-') && (*(char *)((long)&psVar47->st_dev + 1) == '\0')) {
            local_240 = (stat *)dcgettext(0,"standard input",5);
          }
          uVar49 = count_lines;
          psVar47 = (stat *)(ulong)count_lines;
          local_218 = &in_stat;
          key.name = (char *)0x0;
          iVar6 = (int)local_240;
          if (count_lines != false) goto code_r0x001038f9;
          iVar9 = fstat((uint)local_258,(stat *)local_218);
          poVar48 = (option *)in_stat.st_size;
          if (iVar9 != 0) {
            psVar32 = (stat *)quotearg_style(4,local_240);
            psVar26 = (stat *)dcgettext(0,"cannot fstat %s",5);
            piVar16 = __errno_location();
            error(0,*piVar16,psVar26);
            goto LAB_00103955;
          }
          if (from_start != false) {
            if ((presume_input_pipe == false) && (-1 < (long)psVar32)) {
              iVar6 = 1;
              iVar9 = (uint)local_258;
              if ((in_stat.st_mode & 0xf000) == 0x8000) goto LAB_0010489d;
              _Var28 = lseek((uint)local_258,(__off_t)psVar32,1);
              if (_Var28 != -1) goto LAB_00103a44;
            }
            psVar19 = (stat *)&key;
            uVar39 = start_bytes((char *)local_240,(uint)local_258,(uintmax_t)psVar32,
                                 (uintmax_t *)psVar19);
            poVar48 = (option *)psVar26;
            if (uVar39 == 0) goto LAB_00103a51;
            psVar47 = (stat *)(ulong)(uVar39 >> 0x1f);
            psVar32 = psVar19;
            goto LAB_00103955;
          }
          if ((presume_input_pipe == false) && (-1 < (long)psVar32)) {
            if ((in_stat.st_mode & 0xd000) != 0x8000) {
              psVar26 = (stat *)lseek((uint)local_258,-(long)psVar32,2);
              if (psVar26 == (stat *)0xffffffffffffffff) goto LAB_00103ba2;
              poVar48 = (option *)((long)psVar26 + (long)psVar32);
LAB_0010441a:
              if (((long)poVar48 <= (long)psVar26) ||
                 ((ulong)((long)poVar48 - (long)psVar26) <= psVar32)) goto LAB_00103a5a;
              poVar48 = (option *)((long)poVar48 - (long)psVar32);
              _Var28 = lseek((uint)local_258,(__off_t)poVar48,0);
              psVar26 = (stat *)poVar48;
              if (-1 < _Var28) goto LAB_00103a5a;
              xlseek((int)poVar48,0,iVar6,(char *)psVar19);
              psVar26 = extraout_RDX;
              psVar19 = psVar42;
              goto LAB_001044c4;
            }
            psVar19 = (stat *)0x1fffffffffffffff;
            _Var24 = in_stat.st_blksize;
            if (0x1fffffffffffffff < in_stat.st_blksize - 1U) {
              _Var24 = 0x200;
            }
            if (in_stat.st_size <= _Var24) goto LAB_00103ba2;
            psVar26 = (stat *)lseek((uint)local_258,0,1);
            if (-1 < (long)psVar26) goto LAB_0010441a;
            xlseek(0,1,iVar6,(char *)psVar19);
LAB_00104081:
            local_260 = (stat *)0x1;
            ppcVar40 = &main::lexical_block_11::dummy_stdin;
            while( true ) {
              bVar51 = false;
              ppcVar1 = ppcVar40 + (long)local_260;
              ppcVar17 = ppcVar40;
              do {
                if ((**ppcVar17 == '-') && ((*ppcVar17)[1] == '\0')) {
                  bVar51 = true;
                }
                ppcVar17 = ppcVar17 + 1;
              } while (ppcVar17 != ppcVar1);
              if (!bVar51) break;
              if (follow_mode != Follow_name) {
                if (forever != false) {
                  if (((((nbpids != 0) || (local_260 != (stat *)0x1)) ||
                       (follow_mode != Follow_descriptor)) ||
                      ((iVar6 = fstat(0,(stat *)&in_stat), iVar6 != 0 ||
                       ((in_stat.st_mode & 0xf000) == 0x8000)))) && (iVar6 = isatty(0), iVar6 != 0))
                  {
                    uVar12 = dcgettext(0,
                                       "warning: following standard input indefinitely is ineffective"
                                       ,5);
                    error(0,0,uVar12);
                  }
                  break;
                }
                goto LAB_00103674;
              }
              uVar39 = quotearg_style(4,&_LC85);
              pcVar18 = "cannot follow %s by name";
LAB_00105bb0:
              uVar12 = dcgettext(0,pcVar18,5);
              error(1,0,uVar12);
LAB_00105bcb:
              uVar12 = dcgettext(0,"warning: --pid=PID is not supported on this system",5);
              error(0,0,uVar12);
              nbpids = 0;
              free(pids);
LAB_001035da:
              n_units = n_units - (byte)(n_units - 1 < 0xfffffffffffffffe & from_start);
              if ((int)uVar39 <= _optind) goto LAB_00104081;
              local_260 = (stat *)(long)(int)(uVar39 - _optind);
              ppcVar40 = (char **)((long)psVar26 + (long)_optind * 8);
            }
            if (forever == false) {
LAB_00103674:
              if (from_start + n_units == 0) goto LAB_001048bf;
            }
            puVar43 = (uint *)xnmalloc(local_260);
            psVar26 = (stat *)puVar43;
            do {
              pcVar18 = *ppcVar40;
              ppcVar40 = ppcVar40 + 1;
              psVar26->st_dev = (__dev_t)pcVar18;
              psVar26 = (stat *)&((timespec *)&psVar26->st_mtim)->tv_nsec;
            } while (ppcVar40 != ppcVar1);
            if (((uint)local_258 == 1) || (((uint)local_258 == 0 && (local_260 != (stat *)0x1)))) {
              print_headers = true;
            }
            local_1e8 = (stat *)((long)local_260 * 0x60);
            local_1dd = 1;
            psVar19 = (stat *)((long)(((stat *)(((stat *)(local_1e8->__glibc_reserved + -0xf))->
                                                __unused + -0xf))->__unused + 0xfffffffffffffff1) +
                              (long)((stat *)(((stat *)(((stat *)(((stat *)puVar43)->
                                                                  __glibc_reserved + -0xf))->
                                                        __unused + -0xf))->__unused + -0xf))->
                                    __unused + 0xffffffffffffff88U);
            psVar26 = (stat *)poVar48;
            local_228 = (stat *)puVar43;
            local_210 = psVar19;
            goto LAB_00103700;
          }
LAB_00103ba2:
          psVar42 = (stat *)xmalloc(0x2010);
          psVar42[0x38].__glibc_reserved[1] = 0;
          psVar42[0x38].__glibc_reserved[2] = 0;
          poVar48 = (option *)xmalloc(0x2010);
          psVar47 = psVar42;
          psVar26 = (stat *)0x0;
          while (psVar19 = psVar42, sVar33 = safe_read(local_258 & 0xffffffff,poVar48,0x2000),
                0 < (long)sVar33) {
            key.name = key.name + sVar33;
            psVar26 = (stat *)((long)psVar26->__glibc_reserved + (sVar33 - 0x78));
            ((stat *)((long)poVar48 + 0x1f80))->__glibc_reserved[1] = sVar33;
            ((stat *)((long)poVar48 + 0x1f80))->__glibc_reserved[2] = 0;
            psVar42 = psVar19;
            if (sVar33 + psVar47[0x38].__glibc_reserved[1] < 0x2000) {
              memcpy((void *)((long)psVar47->__glibc_reserved +
                             psVar47[0x38].__glibc_reserved[1] + -0x78),poVar48,sVar33);
              psVar47[0x38].__glibc_reserved[1] =
                   psVar47[0x38].__glibc_reserved[1] +
                   ((stat *)((long)poVar48 + 0x1f80))->__glibc_reserved[1];
            }
            else {
              psVar22 = (stat *)((long)psVar26 - psVar19[0x38].__glibc_reserved[1]);
              psVar47[0x38].__glibc_reserved[2] = (__syscall_slong_t)poVar48;
              psVar47 = (stat *)poVar48;
              if (psVar32 < psVar22) {
                psVar42 = (stat *)psVar19[0x38].__glibc_reserved[2];
                poVar48 = (option *)psVar19;
                psVar26 = psVar22;
              }
              else {
                psVar19 = (stat *)xmalloc(0x2010);
                poVar48 = (option *)psVar19;
              }
            }
          }
          psVar47 = (stat *)0x0;
          free(poVar48);
          psVar42 = psVar19;
          local_248 = psVar26;
          local_238 = psVar20;
          local_220 = (stat *)puVar43;
          local_208 = psVar19;
          if ((sVar33 == 0) || (piVar16 = __errno_location(), local_238 = psVar19, *piVar16 == 0xb))
          {
LAB_001044c4:
            while( true ) {
              psVar47 = (stat *)((long)psVar26 - psVar19[0x38].__glibc_reserved[1]);
              if (psVar47 <= psVar32) break;
              psVar26 = psVar47;
              psVar19 = (stat *)psVar19[0x38].__glibc_reserved[2];
            }
            lVar35 = 0;
            if (psVar32 < psVar26) {
              lVar35 = (long)psVar26 - (long)psVar32;
            }
            sVar29 = psVar19[0x38].__glibc_reserved[1] - lVar35;
            if (sVar29 != 0) {
              xwrite_stdout((char *)((long)psVar19->__glibc_reserved + lVar35 + -0x78),sVar29);
              local_250 = psVar42;
            }
            for (pcVar18 = (char *)psVar19[0x38].__glibc_reserved[2]; pcVar18 != (char *)0x0;
                pcVar18 = *(char **)(pcVar18 + 0x2008)) {
              if (*(size_t *)(pcVar18 + 0x2000) != 0) {
                xwrite_stdout(pcVar18,*(size_t *)(pcVar18 + 0x2000));
              }
            }
            psVar47 = (stat *)0x1;
            psVar19 = psVar42;
          }
          else {
            poVar48 = (option *)quotearg_style(4,local_240);
            uVar12 = dcgettext(0,"error reading %s",5);
            psVar32 = (stat *)poVar48;
            error(0,*piVar16,uVar12);
            local_250 = psVar19;
          }
          while (psVar26 = (stat *)poVar48, psVar19 != (stat *)0x0) {
            psVar26 = (stat *)psVar19[0x38].__glibc_reserved[2];
            free(psVar19);
            psVar19 = psVar26;
          }
          goto LAB_00103955;
        }
        local_238 = (stat *)CONCAT71(local_238._1_7_,forever);
        if (forever == false) goto LAB_0010399f;
        psVar32 = (stat *)0x0;
        psVar20 = (stat *)&_LC85;
        puVar43 = (uint *)local_228;
        do {
          iVar6 = strcmp((char *)((stat *)puVar43)->st_dev,"-");
          if ((((iVar6 == 0) && (*(char *)((long)&((stat *)puVar43)->st_size + 4) == '\0')) &&
              (-1 < (int)((stat *)puVar43)->st_blksize)) &&
             ((((stat *)puVar43)->st_size & 0xf000) == 0x1000)) {
            *(undefined4 *)&((stat *)puVar43)->st_blksize = 0xffffffff;
            *(undefined1 *)((long)&((stat *)puVar43)->st_size + 4) = 1;
          }
          else {
            psVar32 = (stat *)((long)&psVar32->st_dev + 1);
          }
          puVar43 = (uint *)&((timespec *)&((stat *)puVar43)->st_mtim)->tv_nsec;
        } while ((stat *)puVar43 != local_210);
        if (psVar32 != (stat *)0x0) {
          iVar6 = fstat(1,(stat *)&out_stat);
          pcVar18 = "standard output";
          psVar22 = local_1e8;
          if (iVar6 < 0) goto LAB_00104c1e;
          monitor_output = (out_stat.st_mode & 0xf000) == 0x1000;
          puVar43 = (uint *)local_228;
          if (disable_inotify == false) {
            do {
              if ((*(char *)((long)&((stat *)puVar43)->st_size + 4) == '\0') &&
                 (iVar6 = strcmp((char *)((stat *)puVar43)->st_dev,"-"), iVar6 == 0))
              goto LAB_0010467d;
              puVar43 = (uint *)&((timespec *)&((stat *)puVar43)->st_mtim)->tv_nsec;
            } while ((stat *)puVar43 != local_210);
            lVar35 = 0;
            do {
              if ((-1 < *(int *)((long)&local_228->st_blksize + lVar35)) &&
                 (((undefined1 *)((long)&local_228->st_size + 5))[lVar35] != '\0'))
              goto LAB_0010467d;
              lVar35 = lVar35 + 0x60;
            } while ((stat *)lVar35 != local_1e8);
            lVar35 = 0;
            do {
              if ((-1 < *(int *)((long)&local_228->st_blksize + lVar35)) &&
                 (((undefined1 *)((long)&local_228->st_size + 5))[lVar35] == '\0')) {
                local_218 = &in_stat;
                psVar20 = local_228;
                goto LAB_001050f4;
              }
              lVar35 = lVar35 + 0x60;
            } while ((stat *)lVar35 != local_1e8);
          }
          goto LAB_0010467d;
        }
LAB_0010399f:
        if ((have_read_stdin == false) || (iVar6 = close(0), -1 < iVar6)) {
          uVar39 = (uint)(local_1dd ^ 1);
LAB_001039ba:
          if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
            return uVar39;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        puVar27 = (uint *)__errno_location();
        iVar9 = 1;
        psVar32 = (stat *)(ulong)*puVar27;
        error(1,psVar32,&_LC85);
        iVar6 = extraout_EDX;
LAB_0010489d:
        _Var28 = lseek(iVar9,(__off_t)psVar32,iVar6);
        if (_Var28 < 0) {
          xlseek((int)local_250,1,(int)local_240,(char *)psVar19);
LAB_001048bf:
          uVar39 = 0;
          goto LAB_001039ba;
        }
LAB_00103a44:
        key.name = (char *)local_250;
        poVar48 = (option *)psVar26;
LAB_00103a51:
        local_250 = (stat *)0xffffffffffffffff;
        psVar26 = (stat *)key.name;
LAB_00103a5a:
        key.name = (char *)psVar26;
        psVar47 = (stat *)0x1;
        psVar32 = local_250;
        uVar21 = dump_remainder(false,(char *)local_240,(uint)local_258,(uintmax_t)local_250);
        key.name = key.name + uVar21;
        psVar26 = (stat *)poVar48;
      } while( true );
    default:
      goto switchD_00103174_caseD_3a;
    case 0x46:
      forever = true;
      follow_mode = Follow_name;
      reopen_inaccessible_files = true;
      break;
    case 99:
    case 0x6e:
      count_lines = uVar7 == 0x6e;
      if (*_optarg == '+') {
        from_start = true;
      }
      else if (*_optarg == '-') {
        _optarg = _optarg + 1;
      }
      if (uVar7 == 0x6e) {
        uVar12 = dcgettext(0,"invalid number of lines",5);
      }
      else {
        uVar12 = dcgettext(0,"invalid number of bytes",5);
      }
      n_units = xnumtoumax(_optarg,10,0,0xffffffffffffffff,"bkKmMGTPEZYRQ0",uVar12,0,2);
      break;
    case 0x66:
    case 0x84:
      forever = true;
      if (_optarg == (char *)0x0) {
        follow_mode = Follow_descriptor;
      }
      else {
        lVar35 = __xargmatch_internal
                           ("--follow",_optarg,follow_mode_string,follow_mode_map,4,_argmatch_die,1,
                            uVar45);
        follow_mode = follow_mode_map[lVar35];
      }
      break;
    case 0x71:
      local_258 = CONCAT44(local_258._4_4_,2);
      break;
    case 0x73:
      local_260 = (stat *)__errno_location();
      pcVar18 = _optarg;
      *(int *)local_260 = 0;
      dVar52 = (double)cl_strtod(pcVar18,&key);
      if (((_optarg == key.name) || (*key.name != '\0')) || (dVar52 < 0.0)) {
        uVar39 = quote();
        pcVar18 = "invalid number of seconds: %s";
        goto LAB_00105bb0;
      }
      local_230 = (double)dtimespec_bound(*(int *)local_260);
      break;
    case 0x76:
      local_258 = CONCAT44(local_258._4_4_,1);
      break;
    case 0x7a:
      line_end = '\0';
      break;
    case 0x80:
      reopen_inaccessible_files = true;
      break;
    case 0x81:
      uVar12 = dcgettext(0,"invalid maximum number of unchanged stats between opens",5);
      max_n_unchanged_stats_between_opens =
           xnumtoumax(_optarg,10,0,0xffffffffffffffff,&_LC9,uVar12,0,2);
      break;
    case 0x82:
      if (nbpids == pids_alloc) {
        pids = (pid_t *)xpalloc(pids,&pids_alloc,1,0x7fffffff,4);
      }
      dcgettext(0,"invalid PID",5);
      pVar8 = xdectoumax(_optarg,0,0x7fffffff,&_LC9);
      lVar35 = (long)nbpids;
      nbpids = nbpids + 1;
      pids[lVar35] = pVar8;
      break;
    case 0x83:
      presume_input_pipe = true;
      break;
    case 0x85:
      disable_inotify = true;
    }
  }
  if (reopen_inaccessible_files != false) {
    if (forever == false) goto LAB_00105c5d;
    if (follow_mode != Follow_descriptor) {
      if (nbpids == 0) goto LAB_001035da;
      goto LAB_001035b8;
    }
    pcVar18 = "warning: --retry only effective for the initial open";
    goto LAB_001037f7;
  }
  goto LAB_0010380c;
code_r0x001038f9:
  iVar9 = fstat((uint)local_258,(stat *)local_218);
  if (iVar9 != 0) {
    psVar19 = (stat *)quotearg_style(4,local_240);
    uVar12 = dcgettext(0,"cannot fstat %s",5);
    piVar16 = __errno_location();
    error(0,*piVar16,uVar12);
    local_220 = (stat *)((ulong)local_220._1_7_ << 8);
    goto LAB_0010394f;
  }
  local_220 = (stat *)CONCAT71(local_220._1_7_,from_start);
  if (from_start == false) {
    psVar22 = (stat *)(ulong)presume_input_pipe;
    if (((presume_input_pipe == false) && ((in_stat.st_mode & 0xf000) == 0x8000)) &&
       (psVar26 = (stat *)lseek((uint)local_258,0,1), psVar26 != (stat *)0xffffffffffffffff)) {
      psVar36 = (stat *)lseek((uint)local_258,0,2);
      if ((long)psVar26 < (long)psVar36) {
        if ((psVar36 != (stat *)0x0) && (psVar32 != (stat *)0x0)) {
          key.name = (char *)psVar36;
          if ((in_stat.st_mode & 0xf000) != 0x8000) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("((((sb->st_mode)) & 0170000) == (0100000))","src/tail.c",0x21c,
                          "file_lines");
          }
          local_220 = (stat *)0x2000;
          if ((in_stat.st_size % page_size == 0) && (local_220 = (stat *)0x2000, 0x1fff < page_size)
             ) {
            local_220 = (stat *)page_size;
          }
          local_248 = (stat *)xmalloc(local_220);
          psVar19 = (stat *)(((long)psVar36 - (long)psVar26) % (long)local_220);
          if (psVar19 == (stat *)0x0) {
            psVar19 = local_220;
          }
          local_208 = (stat *)((long)psVar36 - (long)psVar19);
          _Var28 = lseek((uint)local_258,(__off_t)local_208,0);
          local_238 = psVar19;
          if (-1 < _Var28) goto LAB_00104ca1;
          psVar32 = psVar19;
          oVar25 = xlseek((int)local_208,0,iVar6,(char *)psVar19);
          iVar6 = (int)oVar25;
LAB_0010433b:
          iVar6 = close(iVar6);
          psVar19 = psVar32;
          if (iVar6 != 0) {
            close_fd((uint)local_258,(char *)psVar20);
            psVar19 = psVar32;
          }
LAB_00103b8b:
          *(undefined4 *)&((stat *)puVar43)->st_blksize = 0xffffffff;
          psVar22 = (stat *)0x0;
          goto LAB_0010396a;
        }
        goto LAB_001040dc;
      }
      _Var28 = lseek((uint)local_258,(__off_t)psVar26,0);
      if (_Var28 < 0) goto LAB_00104c92;
    }
    psVar47 = (stat *)xmalloc(0x2018);
    psVar47[0x38].__glibc_reserved[1] = 0;
    psVar47[0x38].__glibc_reserved[2] = 0;
    psVar47[0x39].st_dev = 0;
    psVar26 = (stat *)xmalloc(0x2018);
    local_208 = (stat *)CONCAT71(local_208._1_7_,uVar49);
    local_248 = (stat *)0x0;
    local_238 = psVar47;
    while (local_1f0 = (stat *)safe_read(local_258 & 0xffffffff,psVar26,0x2000), 0 < (long)local_1f0
          ) {
      psVar26[0x38].__glibc_reserved[1] = (__syscall_slong_t)local_1f0;
      iVar6 = (int)line_end;
      key.name = key.name + (long)local_1f0;
      psVar26[0x38].__glibc_reserved[2] = 0;
      psVar26[0x39].st_dev = 0;
      psVar19 = psVar26;
      lVar35 = 0;
      while( true ) {
        pvVar23 = memchr(psVar19,iVar6,
                         (size_t)((long)local_1f0 +
                                 (long)psVar26->__glibc_reserved + (-0x78 - (long)psVar19)));
        if (pvVar23 == (void *)0x0) break;
        psVar26[0x38].__glibc_reserved[2] = lVar35 + 1;
        psVar19 = (stat *)((long)pvVar23 + 1);
        lVar35 = lVar35 + 1;
      }
      local_248 = (stat *)((long)local_248->__glibc_reserved + lVar35 + -0x78);
      if ((ulong)((long)local_1f0->__glibc_reserved + psVar47[0x38].__glibc_reserved[1] + -0x78) <
          0x2000) {
        memcpy((void *)((long)psVar47->__glibc_reserved + psVar47[0x38].__glibc_reserved[1] + -0x78)
               ,psVar26,(size_t)local_1f0);
        lVar35 = psVar47[0x38].__glibc_reserved[2];
        lVar34 = psVar26[0x38].__glibc_reserved[2];
        psVar47[0x38].__glibc_reserved[1] =
             psVar47[0x38].__glibc_reserved[1] + psVar26[0x38].__glibc_reserved[1];
        psVar47[0x38].__glibc_reserved[2] = lVar35 + lVar34;
      }
      else {
        psVar47[0x39].st_dev = (__dev_t)psVar26;
        psVar19 = (stat *)((long)local_248 - local_238[0x38].__glibc_reserved[2]);
        psVar47 = psVar26;
        if (psVar32 < psVar19) {
          psVar26 = local_238;
          local_248 = psVar19;
          local_238 = (stat *)local_238[0x39].st_dev;
        }
        else {
          psVar26 = (stat *)xmalloc(0x2018);
        }
      }
    }
    free(psVar26);
    poVar48 = (option *)local_238;
    local_200 = psVar20;
    if ((local_1f0 == (stat *)0x0) ||
       (psVar26 = (stat *)__errno_location(), (int)psVar26->st_dev == 0xb)) {
      cVar50 = line_end;
      psVar19 = (stat *)psVar47[0x38].__glibc_reserved[1];
      local_220 = (stat *)CONCAT71(local_220._1_7_,psVar32 == (stat *)0x0 || psVar19 == (stat *)0x0)
      ;
      if (psVar32 != (stat *)0x0 && psVar19 != (stat *)0x0) goto LAB_001040e6;
    }
    else {
      psVar19 = (stat *)quotearg_style(4,local_240);
      uVar12 = dcgettext(0,"error reading %s",5);
      error(0,(int)psVar26->st_dev,uVar12);
      local_250 = psVar26;
    }
    psVar26 = local_238;
    if (local_238 != (stat *)0x0) goto LAB_00103ed0;
    goto LAB_0010394f;
  }
  if ((psVar32 != (stat *)0xffffffffffffffff) ||
     (psVar36 = (stat *)lseek((uint)local_258,2,0), (long)psVar36 < 0)) {
    psVar19 = (stat *)&key;
    uVar39 = start_lines((char *)local_240,(uint)local_258,(uintmax_t)psVar32,(uintmax_t *)psVar19);
    if (uVar39 != 0) {
      local_220 = (stat *)CONCAT44(SUB84(psVar22,4),uVar39 >> 0x1f);
      goto LAB_0010394f;
    }
    psVar19 = (stat *)0xffffffffffffffff;
    uVar21 = dump_remainder(false,(char *)local_240,(uint)local_258,0xffffffffffffffff);
    psVar36 = (stat *)(key.name + uVar21);
  }
LAB_001040dc:
  key.name = (char *)psVar36;
  local_220 = (stat *)CONCAT71(local_220._1_7_,uVar49);
  goto LAB_0010394f;
LAB_001040e6:
  if (((undefined1 *)((long)psVar47[-1].__glibc_reserved + 0x17))[(long)psVar19] != line_end) {
    psVar47[0x38].__glibc_reserved[2] = psVar47[0x38].__glibc_reserved[2] + 1;
    local_248 = (stat *)((long)&local_248->st_dev + 1);
  }
  psVar26 = (stat *)((long)local_248 - local_238[0x38].__glibc_reserved[2]);
  psVar47 = local_248;
  psVar19 = local_238;
  while (psVar22 = psVar26, psVar32 < psVar22) {
    psVar19 = (stat *)psVar19[0x39].st_dev;
    psVar47 = psVar22;
    psVar26 = (stat *)((long)psVar22 - psVar19[0x38].__glibc_reserved[2]);
  }
  lVar35 = psVar19[0x38].__glibc_reserved[1];
  psVar26 = psVar19;
  if (psVar32 < psVar47) {
    lVar34 = (long)psVar47 - (long)psVar32;
    local_248 = (stat *)CONCAT71(local_248._1_7_,uVar49);
    do {
      pvVar23 = rawmemchr(psVar26,(int)cVar50);
      psVar26 = (stat *)((long)pvVar23 + 1);
      lVar34 = lVar34 + -1;
      local_250 = psVar19;
    } while (lVar34 != 0);
  }
  puVar38 = (undefined *)((long)psVar19 + (lVar35 - (long)psVar26));
  if (puVar38 != (undefined *)0x0) goto LAB_00104391;
  goto LAB_00104190;
  while (psVar20 = (stat *)&((timespec *)&psVar20->st_mtim)->tv_nsec, psVar20 != local_210) {
LAB_001050f4:
    iVar6 = lstat((char *)psVar20->st_dev,(stat *)local_218);
    if ((iVar6 == 0) && ((in_stat.st_mode & 0xf000) == 0xa000)) goto LAB_0010467d;
  }
  lVar35 = 0;
  do {
    if (((-1 < *(int *)((long)&local_228->st_blksize + lVar35)) &&
        (uVar39 = *(uint *)((long)&local_228->st_size + lVar35) & 0xf000, uVar39 != 0x8000)) &&
       (uVar39 != 0x1000)) goto LAB_0010467d;
    lVar35 = lVar35 + 0x60;
  } while ((stat *)lVar35 != local_1e8);
  if ((local_1dd != 0) || (follow_mode != Follow_descriptor)) {
    uVar39 = inotify_init();
    psVar26 = (stat *)(ulong)uVar39;
    psVar36 = local_1e8;
    if ((int)uVar39 < 0) goto LAB_001058dc;
    iVar6 = fflush_unlocked(_stdout);
    psVar32 = local_210;
    if (iVar6 != 0) goto LAB_00105a5a;
    psVar42 = (stat *)0x0;
    local_250 = (stat *)hash_initialize(local_260,0,0x100000);
    if (local_250 != (stat *)0x0) {
      __mask = 0xc06;
      if (follow_mode != Follow_name) {
        __mask = 2;
      }
      local_258 = CONCAT44(local_258._4_4_,uVar39);
      local_200 = (stat *)((ulong)local_200 & 0xffffffffffffff00);
      uVar45 = 0;
      cVar50 = '\0';
      local_248 = (stat *)CONCAT44(local_248._4_4_,__mask);
      psVar20 = local_228;
      do {
        FVar4 = follow_mode;
        if (*(char *)((long)&psVar20->st_size + 4) == '\0') {
          pcVar18 = (char *)psVar20->st_dev;
          sVar33 = strlen(pcVar18);
          *(undefined4 *)((long)&psVar20->st_blocks + 4) = 0xffffffff;
          if (uVar45 < sVar33) {
            uVar45 = sVar33;
          }
          if (FVar4 == Follow_name) {
            lVar35 = dir_len(pcVar18);
            local_208 = (stat *)(pcVar18 + lVar35);
            uVar49 = (undefined1)local_208->st_dev;
            local_240 = (stat *)CONCAT71(local_240._1_7_,uVar49);
            lVar34 = last_component(pcVar18);
            pcVar44 = ".";
            ((timespec *)&psVar20->st_atim)->tv_nsec = lVar34 - (long)pcVar18;
            *(undefined1 *)&local_208->st_dev = 0;
            if (lVar35 != 0) {
              pcVar44 = (char *)psVar20->st_dev;
            }
            iVar6 = inotify_add_watch(uVar39,pcVar44,0x784);
            *(int *)&((timespec *)&psVar20->st_atim)->tv_sec = iVar6;
            *(undefined1 *)(psVar20->st_dev + lVar35) = uVar49;
            if ((int)((timespec *)&psVar20->st_atim)->tv_sec < 0) {
              piVar16 = __errno_location();
              psVar26 = (stat *)(ulong)uVar39;
              if (*piVar16 == 0x1c) goto LAB_001059a4;
              uVar12 = quotearg_style(4,psVar20->st_dev);
              uVar13 = dcgettext(0,"cannot watch parent directory of %s",5);
              error(0,*piVar16,uVar13,uVar12);
              goto LAB_001058bf;
            }
          }
          iVar6 = inotify_add_watch(uVar39,(char *)psVar20->st_dev,__mask);
          *(int *)((long)&psVar20->st_blocks + 4) = iVar6;
          if (iVar6 < 0) {
            if ((int)psVar20->st_blksize != -1) {
              cVar50 = _Var5;
            }
            puVar43 = (uint *)__errno_location();
            if ((*puVar43 & 0xffffffef) == 0xc) {
              psVar26 = (stat *)(ulong)uVar39;
              goto LAB_001059a4;
            }
            if (*puVar43 != *(uint *)((long)&psVar20->st_blksize + 4)) {
              local_240 = (stat *)quotearg_style(4,psVar20->st_dev);
              uVar12 = dcgettext(0,"cannot watch %s",5);
              error(0,*puVar43,uVar12,local_240);
            }
          }
          else {
            lVar35 = hash_insert();
            if (lVar35 == 0) break;
            local_200 = (stat *)CONCAT71(local_200._1_7_,_Var5);
          }
        }
        psVar20 = (stat *)&((timespec *)&psVar20->st_mtim)->tv_nsec;
        if (psVar20 == local_210) {
          psVar26 = (stat *)(ulong)uVar39;
          psVar19 = (stat *)((ulong)local_200 & 0xff);
          if (follow_mode == Follow_descriptor) {
            if (cVar50 != '\0') goto LAB_001058bf;
            if ((char)local_200 == '\0') {
LAB_0010486a:
                    /* WARNING: Subroutine does not return */
              exit(1);
            }
          }
          prev_fspec = (File_spec *)((long)&local_228[-1].st_size + (long)local_1e8);
          psVar20 = local_228;
          do {
            if (*(char *)((long)&psVar20->st_size + 4) == '\0') {
              if (follow_mode == Follow_name) {
                recheck((File_spec *)psVar20,false);
              }
              else if ((((int)psVar20->st_blksize != -1) &&
                       (iVar6 = stat((char *)psVar20->st_dev,(stat *)local_218), iVar6 == 0)) &&
                      ((*(long *)&psVar20->st_gid !=
                        CONCAT26(in_stat.st_dev._6_2_,
                                 CONCAT24(in_stat.st_dev._4_2_,(int)in_stat.st_dev)) ||
                       (psVar20->st_rdev != in_stat.st_ino)))) {
                pcVar18 = pretty_name((File_spec *)psVar20->st_dev);
                uVar12 = quotearg_style(4,pcVar18);
                uVar13 = dcgettext(0,"%s was replaced",5);
                piVar16 = __errno_location();
                error(0,*piVar16,uVar13,uVar12);
                goto LAB_001058bf;
              }
              check_fspec((File_spec *)psVar20,&prev_fspec);
            }
            psVar20 = (stat *)&((timespec *)&psVar20->st_mtim)->tv_nsec;
            if (psVar20 == local_210) {
              local_220 = (stat *)(uVar45 + 0x11);
              psVar20 = (stat *)0x0;
              psVar32 = (stat *)0x0;
              local_258 = xmalloc();
              local_240 = (stat *)0x0;
              local_210 = (stat *)CONCAT44(local_210._4_4_,3);
              local_1f0 = local_1e8;
              psVar22 = (stat *)0x0;
              puVar43 = (uint *)local_260;
              goto LAB_00105449;
            }
          } while( true );
        }
      } while( true );
    }
LAB_00105851:
    xalloc_die();
LAB_00105856:
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
LAB_0010467d:
  disable_inotify = true;
  local_258 = CONCAT44(local_258._4_4_,nbpids);
  if (nbpids != 0) goto LAB_00104d98;
  if (((follow_mode == Follow_descriptor) && (local_260 == (stat *)0x1)) &&
     ((int)local_228->st_blksize != -1)) {
    local_258 = CONCAT44(local_258._4_4_,(uint)((local_228->st_size & 0xf000) != 0x8000));
  }
  do {
    local_218 = (stat *)((ulong)local_218 & 0xffffffffffffff00);
    local_210 = (stat *)(CONCAT71(local_210._1_7_,(char)local_258) & 0xffffffffffffff01);
    local_248 = (stat *)((long)local_260[-1].__glibc_reserved + 0x17);
    local_240 = (stat *)CONCAT44(local_240._4_4_,((uint)local_258 ^ 1) << 0xb);
    puVar43 = (uint *)((undefined1 *)((long)&local_228->st_size + 4) + (long)psVar22);
    psVar19 = local_260;
    local_220 = (stat *)puVar43;
LAB_001046e3:
    local_250 = (stat *)((ulong)local_250 & 0xffffffffffffff00);
    psVar22 = (stat *)0x0;
    psVar20 = local_228;
    while( true ) {
      bVar46 = *(byte *)((long)&psVar20->st_size + 4);
      psVar47 = (stat *)(ulong)bVar46;
      if (bVar46 != 0) goto LAB_0010479e;
      uVar39 = (uint)psVar20->st_blksize;
      psVar32 = (stat *)(ulong)uVar39;
      if (-1 < (int)uVar39) break;
      psVar22 = (stat *)((long)&psVar22->st_dev + 1);
      plVar41 = &((timespec *)&psVar20->st_mtim)->tv_nsec;
      recheck((File_spec *)psVar20,SUB81(local_258,0));
      psVar20 = (stat *)plVar41;
      if (local_260 == psVar22) {
        do {
          psVar32 = local_220;
          if ((reopen_inaccessible_files == false) || (follow_mode != Follow_name)) {
            pcVar18 = (char *)((long)&local_228->st_size + 4);
            while ((psVar19 = (stat *)(ulong)(uint)*(__blksize_t *)(pcVar18 + 4),
                   (int)(uint)*(__blksize_t *)(pcVar18 + 4) < 0 &&
                   ((*pcVar18 == '\x01' || (reopen_inaccessible_files == false))))) {
              pcVar18 = pcVar18 + 0x60;
              if ((stat *)pcVar18 == local_220) {
LAB_001055cb:
                uVar12 = dcgettext(0,"no files remaining",5);
                error(1,0,uVar12);
                do {
                  check_fspec((File_spec *)psVar20,&prev_fspec);
LAB_0010556b:
                  psVar32 = (stat *)((long)psVar32->__glibc_reserved +
                                    (((ulong)local_200 & 0xffffffff) - 0x68));
LAB_00105449:
                  while( true ) {
                    if (((follow_mode == Follow_name) && (reopen_inaccessible_files == false)) &&
                       (lVar35 = hash_get_n_entries(), lVar35 == 0)) goto LAB_001055cb;
                    iVar6 = (int)psVar26;
                    if (psVar32 < local_240) break;
                    do {
                      if (nbpids == 0) {
LAB_001056a8:
                        iVar9 = -1;
                      }
                      else {
                        if ((char)psVar22 != '\0') goto LAB_00105856;
                        _Var5 = writers_are_dead();
                        psVar22 = (stat *)(CONCAT71(extraout_var,_Var5) & 0xffffffff);
                        iVar9 = 0;
                        if ((!_Var5) && (iVar9 = 0, 0.0 < local_230)) {
                          if (_LC97 <= local_230) goto LAB_001056a8;
                          iVar9 = (int)(_LC98 * local_230);
                          iVar9 = iVar9 + (uint)((double)iVar9 < _LC98 * local_230);
                        }
                      }
                      in_stat.st_dev._4_2_ = 1;
                      in_stat.st_ino = 1;
                      in_stat.st_dev._0_4_ = iVar6;
                      iVar9 = poll((pollfd *)local_218,(ulong)monitor_output + 1,iVar9);
                    } while (iVar9 == 0);
                    if (iVar9 < 0) {
                      pcVar18 = "error waiting for inotify and output events";
                      goto LAB_00104c1e;
                    }
                    if (in_stat.st_ino._6_2_ != 0) goto LAB_00104860;
                    local_240 = (stat *)safe_read((ulong)psVar26 & 0xffffffff,local_258,local_220);
                    if (local_240 != (stat *)0x0) {
                      psVar32 = (stat *)0x0;
                      if ((long)local_240 < 0) {
                        piVar16 = __errno_location();
                        if (*piVar16 == 0x16) goto LAB_00105937;
LAB_00105709:
                        pcVar18 = "error reading inotify event";
                        goto LAB_00104c1e;
                      }
                      break;
                    }
LAB_00105937:
                    if ((int)local_210 == 0) goto LAB_00105709;
                    psVar32 = (stat *)0x0;
                    local_210 = (stat *)CONCAT44(local_210._4_4_,(int)local_210 + -1);
                    local_220 = (stat *)((long)local_220 * 2);
                    local_258 = xrealloc(local_258,local_220);
                    local_240 = (stat *)0x0;
                    psVar20 = local_218;
                  }
                  local_208 = (stat *)((long)psVar32->__glibc_reserved + (local_258 - 0x78));
                  uVar39 = *(uint *)((long)&local_208->st_ino + 4);
                  psVar19 = (stat *)(ulong)uVar39;
                  _Var3 = local_208->st_dev;
                  iVar9 = (int)local_208->st_dev;
                  local_200 = (stat *)(ulong)uVar39;
                  psVar36 = local_1f0;
                  if ((_Var3 & 0x40000000000) == 0) {
                    if (uVar39 == 0) goto LAB_00105584;
LAB_00105491:
                    psVar47 = (stat *)0x0;
                    psVar20 = local_228;
                    psVar30 = psVar42;
                    do {
                      psVar42 = psVar30;
                      local_1e8 = psVar32;
                      if (((int)((timespec *)&psVar20->st_atim)->tv_sec == iVar9) &&
                         (iVar11 = strcmp((char *)&local_208->st_nlink,
                                          (char *)(((timespec *)&psVar20->st_atim)->tv_nsec +
                                                  psVar20->st_dev)), psVar42 = psVar30, iVar11 == 0)
                         ) {
                        if (psVar47 == (stat *)puVar43) break;
                        psVar20 = (stat *)(local_228->__glibc_reserved + (long)psVar47 * 0xc + -0xf)
                        ;
                        if ((_Var3 & 0x20000000000) == 0) {
                          uVar39 = inotify_add_watch(iVar6,(char *)psVar20->st_dev,
                                                     (uint32_t)local_248);
                          psVar47 = (stat *)(ulong)uVar39;
                          if ((int)uVar39 < 0) {
                            psVar42 = (stat *)__errno_location();
                            if ((psVar42->st_dev & 0xffffffef) == 0xc) goto LAB_001059a4;
                            psVar19 = (stat *)quotearg_style(4,psVar20->st_dev);
                            uVar12 = dcgettext(0,"cannot watch %s",5);
                            psVar30 = psVar42;
                            error(0,(int)psVar42->st_dev,uVar12);
                            uVar7 = *(uint *)((long)&psVar20->st_blocks + 4);
                            local_1e8 = psVar42;
                            if (-1 < (int)uVar7) {
LAB_0010591d:
                              inotify_rm_watch(iVar6,uVar7);
                              hash_remove(local_250,psVar20);
                            }
                            *(uint *)((long)&psVar20->st_blocks + 4) = uVar39;
                            psVar47 = (stat *)(ulong)(uVar39 + 1);
                            psVar42 = psVar30;
                            if (uVar39 + 1 == 0) break;
                          }
                          else {
                            uVar7 = *(uint *)((long)&psVar20->st_blocks + 4);
                            if (-1 < (int)uVar7) {
                              if (uVar39 != uVar7) goto LAB_0010591d;
                              goto LAB_00105516;
                            }
                            *(uint *)((long)&psVar20->st_blocks + 4) = uVar39;
                          }
                          psVar47 = (stat *)hash_remove(local_250);
                          if ((psVar47 != (stat *)0x0) && (psVar20 != psVar47)) {
                            if (follow_mode == Follow_name) {
                              recheck((File_spec *)psVar47,false);
                            }
                            *(undefined4 *)((long)&psVar47->st_blocks + 4) = 0xffffffff;
                            pcVar18 = pretty_name((File_spec *)psVar47->st_dev);
                            close_fd((int)psVar47->st_blksize,pcVar18);
                          }
                          lVar35 = hash_insert();
                          if (lVar35 == 0) goto LAB_00105851;
                        }
LAB_00105516:
                        psVar42 = psVar30;
                        if (follow_mode == Follow_name) {
                          recheck((File_spec *)psVar20,false);
                          psVar42 = psVar30;
                        }
                        goto LAB_00105523;
                      }
                      psVar47 = (stat *)((long)&psVar47->st_dev + 1);
                      psVar20 = (stat *)&((timespec *)&psVar20->st_mtim)->tv_nsec;
                      psVar30 = psVar42;
                    } while ((stat *)puVar43 != psVar47);
                    goto LAB_0010556b;
                  }
                  if (uVar39 != 0) goto LAB_00105491;
                  psVar20 = (stat *)0x0;
                  do {
                    if ((int)local_228->__glibc_reserved[(long)psVar20 * 0xc + -6] == iVar9) {
                      pcVar18 = "directory containing watched file was removed";
                      goto LAB_0010574b;
                    }
                    psVar20 = (stat *)((long)&psVar20->st_dev + 1);
                    psVar19 = local_228;
                  } while ((stat *)puVar43 != psVar20);
LAB_00105584:
                  key.wd = iVar9;
                  psVar20 = (stat *)hash_lookup();
                  if (psVar20 == (stat *)0x0) goto LAB_0010556b;
LAB_00105523:
                  _Var3 = local_208->st_dev;
                  if ((_Var3 & 0xe0400000000) != 0) {
                    if (((_Var3 & 0x40000000000) != 0) ||
                       ((reopen_inaccessible_files == false && ((_Var3 & 0x80000000000) != 0)))) {
                      inotify_rm_watch(iVar6,*(int *)((long)&psVar20->st_blocks + 4));
                      hash_remove(local_250);
                    }
                    recheck((File_spec *)psVar20,false);
                    goto LAB_0010556b;
                  }
                } while( true );
              }
            }
          }
          if (((byte)local_250 == '\x01') && ((char)local_210 == '\0')) {
            if ((monitor_output == false) || (iVar6 = iopoll(0xffffffff,1,0), iVar6 != -2))
            goto LAB_001046e3;
LAB_00104860:
            raise(0xd);
            goto LAB_0010486a;
          }
          iVar6 = fflush_unlocked(_stdout);
          if (iVar6 == 0) {
            if ((monitor_output != false) && (iVar6 = iopoll(0xffffffff,1,0), iVar6 == -2))
            goto LAB_00104860;
            if ((byte)local_250 != '\0') goto LAB_001046e3;
            if ((char)local_218 != '\0') goto LAB_0010399f;
            _Var5 = writers_are_dead();
            local_218 = (stat *)CONCAT71(local_218._1_7_,_Var5);
            if ((_Var5) || (iVar6 = xnanosleep(local_230), iVar6 == 0)) goto LAB_001046e3;
            pcVar18 = "cannot read realtime clock";
LAB_00104c1e:
            uVar39 = (uint)psVar32;
            psVar20 = (stat *)dcgettext(0,pcVar18,5);
            piVar16 = __errno_location();
            error(1,*piVar16,psVar20);
LAB_00104c3e:
            recheck((File_spec *)psVar20,(int)psVar20->st_blocks != 0);
            psVar42 = (stat *)0x0;
            ((timespec *)&psVar20->st_mtim)->tv_sec = 0;
LAB_00104a9d:
            if (((uVar39 == (uint)psVar20->st_blksize) && ((in_stat.st_mode & 0xf000) != 0x8000)) &&
               (local_260 == (stat *)0x1)) {
              uVar7 = (uint)puVar43;
              *(__mode_t *)&psVar20->st_size = in_stat.st_mode;
              psVar47 = (stat *)((ulong)local_238 & 0xff);
              psVar20->st_nlink = in_stat.st_mtim.tv_sec;
              *(__syscall_slong_t *)&psVar20->st_mode = in_stat.st_mtim.tv_nsec;
joined_r0x001049c4:
              puVar43 = (uint *)(ulong)(uVar7 & 0xf000);
              if ((uVar7 & 0xf000) == 0x8000) {
                if (in_stat.st_size < (long)psVar20->st_ino) goto LAB_00105a5f;
                goto LAB_00104b08;
              }
              if ((local_248 != psVar22) && (print_headers != false)) goto LAB_00104b3e;
              if ((int)psVar20->st_blocks != 0) goto LAB_00105b41;
LAB_001049e9:
              psVar19 = (stat *)0xffffffffffffffff;
              goto LAB_001049f0;
            }
          }
          else {
LAB_00105a5a:
            uVar39 = (uint)psVar32;
            write_error();
LAB_00105a5f:
            local_208 = (stat *)quotearg_n_style_colon(0,3,psVar26);
            uVar12 = dcgettext(0,"%s: file truncated",5);
            psVar42 = local_208;
            error(0,0,uVar12);
            _Var28 = lseek(uVar39,0,0);
            if (_Var28 < 0) {
              xlseek(0,0,(int)psVar26,(char *)psVar42);
            }
            psVar20->st_ino = 0;
LAB_00104b08:
            if ((local_248 == psVar22) || (print_headers == false)) {
              if ((int)psVar20->st_blocks == 0) goto LAB_00104b23;
LAB_00105b41:
              psVar19 = (stat *)0xfffffffffffffffe;
            }
            else {
LAB_00104b3e:
              puVar38 = &_LC9;
              if (first_file_3 == '\0') {
                puVar38 = &_LC10;
              }
              __printf_chk(2,"%s==> %s <==\n",puVar38,psVar26);
              first_file_3 = '\0';
              if ((int)psVar20->st_blocks != 0) goto LAB_00105b41;
              if ((int)puVar43 != 0x8000) goto LAB_001049e9;
LAB_00104b23:
              if (*(char *)((long)&psVar20->st_size + 5) == '\0') goto LAB_001049e9;
              psVar19 = (stat *)(in_stat.st_size - psVar20->st_ino);
            }
LAB_001049f0:
            uVar21 = dump_remainder(false,(char *)psVar26,uVar39,(uintmax_t)psVar19);
            bVar46 = (byte)((ulong)psVar47 & 0xffffffff) & uVar21 != 0;
            psVar42 = (stat *)CONCAT71((int7)(((ulong)psVar47 & 0xffffffff) >> 8),bVar46);
            local_248 = psVar22;
            if (bVar46 == 0) {
              psVar42 = (stat *)(CONCAT71((int7)((ulong)extraout_RDX_00 >> 8),uVar21 != 0) &
                                0xffffffff);
            }
            else {
              ((timespec *)&psVar20->st_mtim)->tv_sec = 0;
            }
LAB_00104795:
            local_250 = (stat *)CONCAT71(local_250._1_7_,(byte)local_250 | (byte)psVar42);
            psVar20->st_ino = psVar20->st_ino + uVar21;
          }
LAB_0010479e:
          psVar22 = (stat *)((long)&psVar22->st_dev + 1);
          psVar20 = (stat *)&((timespec *)&psVar20->st_mtim)->tv_nsec;
        } while (local_260 == psVar22);
      }
    }
    psVar26 = (stat *)psVar20->st_dev;
    if (((char)psVar26->st_dev == '-') && (*(char *)((long)&psVar26->st_dev + 1) == '\0')) {
      psVar26 = (stat *)dcgettext(0,"standard input",5);
    }
    uVar7 = (uint)psVar20->st_size;
    puVar43 = (uint *)(ulong)uVar7;
    iVar6 = (int)psVar20->st_blocks;
    if ((uint)local_258 == iVar6) {
LAB_00104772:
      if (iVar6 != 0) {
        psVar19 = (stat *)0xfffffffffffffffe;
        uVar21 = dump_remainder(false,(char *)psVar26,uVar39,0xfffffffffffffffe);
        psVar42 = (stat *)CONCAT71((int7)((ulong)psVar42 >> 8),uVar21 != 0);
        goto LAB_00104795;
      }
      iVar6 = fstat(uVar39,(stat *)&in_stat);
      if (iVar6 == 0) {
        if (((__mode_t)psVar20->st_size == in_stat.st_mode) &&
           ((((in_stat.st_mode & 0xf000) != 0x8000 || (psVar20->st_ino == in_stat.st_size)) &&
            (uVar10 = (uint)(in_stat.st_mtim.tv_sec < (long)psVar20->st_nlink) -
                      (uint)((long)psVar20->st_nlink < in_stat.st_mtim.tv_sec),
            psVar19 = (stat *)(ulong)uVar10,
            ((uint)(in_stat.st_mtim.tv_nsec < *(long *)&psVar20->st_mode) -
            (uint)(*(long *)&psVar20->st_mode < in_stat.st_mtim.tv_nsec)) + uVar10 * 2 == 0)))) {
          uVar45 = ((timespec *)&psVar20->st_mtim)->tv_sec;
          bVar51 = uVar45 < max_n_unchanged_stats_between_opens;
          ((timespec *)&psVar20->st_mtim)->tv_sec = uVar45 + 1;
          if (bVar51) goto LAB_00104a9d;
          if (follow_mode == Follow_name) goto LAB_00104c3e;
          goto LAB_00104a9d;
        }
        if ((uint)psVar20->st_blksize != uVar39) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("fd == f[i].fd","src/tail.c",0x4e7,"tail_forever");
        }
        *(__mode_t *)&psVar20->st_size = in_stat.st_mode;
        ((timespec *)&psVar20->st_mtim)->tv_sec = 0;
        psVar20->st_nlink = in_stat.st_mtim.tv_sec;
        *(__syscall_slong_t *)&psVar20->st_mode = in_stat.st_mtim.tv_nsec;
        goto joined_r0x001049c4;
      }
      *(undefined4 *)&psVar20->st_blksize = 0xffffffff;
      puVar43 = (uint *)__errno_location();
      *(int *)((long)&psVar20->st_blksize + 4) = (int)((stat *)puVar43)->st_dev;
      psVar19 = (stat *)quotearg_n_style_colon(0,3,psVar26);
      error(0,(int)((stat *)puVar43)->st_dev,&_LC17);
      close(uVar39);
      goto LAB_0010479e;
    }
    uVar10 = rpl_fcntl(psVar32,3);
    if ((-1 < (int)uVar10) &&
       ((uVar10 == ((uint)local_240 | uVar10) || (iVar6 = rpl_fcntl(psVar32,4), iVar6 != -1)))) {
      *(uint *)&psVar20->st_blocks = (uint)local_258;
      iVar6 = (uint)local_258;
      goto LAB_00104772;
    }
    if (((psVar20->st_size & 0xf000) == 0x8000) && (piVar16 = __errno_location(), *piVar16 == 1)) {
      iVar6 = (int)psVar20->st_blocks;
      goto LAB_00104772;
    }
    puVar43 = (uint *)quotearg_n_style_colon(0,3,psVar26);
    psVar30 = (stat *)dcgettext(0,"%s: cannot change nonblocking mode",5);
    piVar16 = __errno_location();
    psVar19 = (stat *)puVar43;
    error(1,*piVar16,psVar30);
    do {
      uVar49 = SUB81(psVar47,0);
      psVar31 = (stat *)safe_read(local_258 & 0xffffffff,local_248,local_220);
      if ((long)psVar31 < 0) {
        psVar20 = (stat *)((ulong)local_238 & 0xffffffff);
LAB_00104f11:
        uVar49 = SUB81(psVar22,0);
        psVar19 = (stat *)quotearg_style(4,local_240);
        uVar12 = dcgettext(0,"error reading %s",5);
        piVar16 = __errno_location();
        error(0,*piVar16,uVar12);
LAB_00104e4f:
        free(local_248);
        local_220 = (stat *)CONCAT71(local_220._1_7_,uVar49);
        goto LAB_0010394f;
      }
      key.name = (char *)((long)(((stat *)(((stat *)(psVar31->__glibc_reserved + -0xf))->__unused +
                                          -0xf))->__unused + 0xfffffffffffffff1) +
                         (long)((stat *)(((stat *)(((stat *)(psVar30->__glibc_reserved + -0xf))->
                                                   __unused + -0xf))->__unused + -0xf))->__unused +
                         0xffffffffffffff88U);
      psVar36 = psVar19;
      if (psVar31 == (stat *)0x0) {
LAB_00104e4c:
        psVar20 = (stat *)((ulong)local_238 & 0xffffffff);
        psVar19 = psVar36;
        goto LAB_00104e4f;
      }
      while( true ) {
        psVar36 = psVar32;
        pcVar18 = key.name;
        uVar49 = SUB81(psVar47,0);
        iVar6 = (int)line_end;
        psVar20 = psVar31;
        psVar32 = local_250;
        while ((local_250 = psVar32, local_208 = (stat *)puVar43, local_200 = psVar31,
               psVar20 != (stat *)0x0 &&
               (psVar19 = (stat *)memrchr(local_248,iVar6,(size_t)psVar20), psVar19 != (stat *)0x0))
              ) {
          psVar20 = (stat *)((long)psVar19 - (long)local_248);
          psVar32 = (stat *)((long)local_250[-1].__glibc_reserved + 0x17);
          if (local_250 == (stat *)0x0) {
            sVar29 = (long)psVar31 - (long)((long)&psVar20->st_dev + 1);
            if (sVar29 != 0) {
              xwrite_stdout((char *)((long)&psVar19->st_dev + 1),sVar29);
              local_250 = (stat *)pcVar18;
            }
            psVar36 = (stat *)((long)psVar36 - (long)pcVar18);
            uVar21 = dump_remainder(false,(char *)local_240,(uint)local_258,(uintmax_t)psVar36);
            key.name = key.name + uVar21;
            goto LAB_00104e4c;
          }
        }
        if (psVar26 != psVar30) break;
        psVar20 = (stat *)((ulong)local_238 & 0xffffffff);
        _Var28 = lseek((uint)local_258,(__off_t)psVar26,0);
        if (-1 < _Var28) {
          uVar21 = dump_remainder(false,(char *)local_240,(uint)local_258,(uintmax_t)psVar36);
          key.name = (char *)((long)psVar26->__glibc_reserved + (uVar21 - 0x78));
          goto LAB_00104e4c;
        }
LAB_00104c92:
        xlseek((int)psVar26,0,(int)local_240,(char *)psVar19);
LAB_00104ca1:
        psVar31 = (stat *)safe_read(local_258 & 0xffffffff,local_248,psVar19);
        if ((long)psVar31 < 0) goto LAB_00104f11;
        key.name = (char *)((long)(((stat *)(((stat *)(psVar31->__glibc_reserved + -0xf))->__unused
                                            + -0xf))->__unused + 0xfffffffffffffff1) +
                           (long)((stat *)(((stat *)(((stat *)(local_208->__glibc_reserved + -0xf))
                                                     ->__unused + -0xf))->__unused + -0xf))->
                                 __unused + 0xffffffffffffff88U);
        psVar30 = local_208;
        psVar32 = psVar36;
        local_238 = psVar20;
        if ((psVar31 != (stat *)0x0) &&
           (psVar19 = local_248,
           ((undefined1 *)((long)local_248[-1].__glibc_reserved + 0x17))[(long)psVar31] != line_end)
           ) {
          local_250 = (stat *)((long)local_250[-1].__glibc_reserved + 0x17);
        }
      }
      psVar30 = (stat *)((long)psVar30 - (long)local_220);
      _Var28 = lseek((uint)local_258,(__off_t)psVar30,0);
      psVar32 = psVar36;
    } while (-1 < _Var28);
    xlseek((int)psVar30,0,(int)local_240,(char *)psVar19);
LAB_00104d98:
    local_258 = local_258 & 0xffffffff00000000;
  } while( true );
LAB_001059a4:
  pcVar18 = "inotify resources exhausted";
LAB_0010574b:
  uVar12 = dcgettext(0,pcVar18,5);
  error(0,0,uVar12);
LAB_001058bf:
  hash_free(local_250);
  close((int)psVar26);
  piVar16 = __errno_location();
  *piVar16 = 0;
LAB_001058dc:
  uVar12 = dcgettext(0,"inotify cannot be used, reverting to polling",5);
  piVar16 = __errno_location();
  error(0,*piVar16,uVar12);
  psVar22 = psVar36;
  goto LAB_0010467d;
}


