
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong print_esc(long param_1,ulong param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  char *pcVar16;
  byte bVar17;
  _IO_FILE *p_Var18;
  char *pcVar19;
  
  bVar1 = *(byte *)(param_1 + 1);
  uVar15 = (uint)bVar1;
  iVar3 = (int)param_1;
  if (bVar1 == 0x78) {
    bVar1 = *(byte *)(param_1 + 2);
    if ((0x36 < (byte)(bVar1 - 0x30)) ||
       ((0x7e0000007e03ffU >> ((ulong)(bVar1 - 0x30) & 0x3f) & 1) == 0)) goto LAB_00100238;
    bVar17 = bVar1 + 0xa9;
    if (5 < (byte)(bVar1 + 0x9f)) {
      bVar17 = bVar1 - 0x30;
      if ((byte)(bVar1 + 0xbf) < 6) {
        bVar17 = bVar1 - 0x37;
      }
    }
    bVar1 = *(byte *)(param_1 + 3);
    pcVar16 = (char *)(param_1 + 3);
    if (((byte)(bVar1 - 0x30) < 0x37) &&
       ((0x7e0000007e03ffU >> ((ulong)(bVar1 - 0x30) & 0x3f) & 1) != 0)) {
      cVar8 = bVar1 + 0xa9;
      if (5 < (byte)(bVar1 + 0x9f)) {
        cVar8 = bVar1 - 0x37;
        if (5 < (byte)(bVar1 + 0xbf)) {
          cVar8 = bVar1 - 0x30;
        }
      }
      bVar17 = bVar17 * '\x10' + cVar8;
      pcVar16 = (char *)(param_1 + 4);
    }
LAB_00100073:
    uVar15 = (uint)pcVar16;
    pbVar2 = (byte *)_stdout->_IO_write_ptr;
    p_Var18 = _stdout;
    if (pbVar2 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
      *pbVar2 = bVar17;
      goto LAB_00100093;
    }
  }
  else {
    if ((byte)(bVar1 - 0x30) < 8) {
      pcVar16 = (char *)(param_1 + 1 + (bVar1 == 0x30 & param_2));
      if ((byte)(*pcVar16 - 0x30U) < 8) {
        bVar17 = *pcVar16 - 0x30;
        if ((byte)(pcVar16[1] - 0x30U) < 8) {
          bVar17 = pcVar16[1] + -0x30 + bVar17 * '\b';
          if ((byte)(pcVar16[2] - 0x30U) < 8) {
            bVar17 = pcVar16[2] + -0x30 + bVar17 * '\b';
            pcVar16 = pcVar16 + 3;
          }
          else {
            pcVar16 = pcVar16 + 2;
          }
        }
        else {
          pcVar16 = pcVar16 + 1;
        }
      }
      else {
        bVar17 = 0;
      }
      goto LAB_00100073;
    }
    if (bVar1 == 0) {
LAB_001000b1:
      pcVar16 = _stdout->_IO_write_ptr;
      if (pcVar16 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar16 + 1;
        *pcVar16 = '\\';
      }
      else {
        __overflow(_stdout,0x5c);
      }
      bVar1 = *(byte *)(param_1 + 1);
      if (bVar1 != 0) {
        pbVar2 = (byte *)_stdout->_IO_write_ptr;
        if (pbVar2 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
          *pbVar2 = bVar1;
        }
        else {
          __overflow(_stdout,(uint)bVar1);
        }
        return 1;
      }
      return 0;
    }
    pcVar16 = strchr("\"\\abcefnrtv",(int)(char)bVar1);
    if (pcVar16 != (char *)0x0) {
      switch(bVar1) {
      case 0x61:
        goto switchD_001001cc_caseD_61;
      case 0x62:
        pcVar16 = _stdout->_IO_write_ptr;
        if (pcVar16 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar16 + 1;
          *pcVar16 = '\b';
          return 1;
        }
        __overflow(_stdout,8);
        return 1;
      case 99:
                    /* WARNING: Subroutine does not return */
        exit(0);
      default:
        pbVar2 = (byte *)_stdout->_IO_write_ptr;
        if (pbVar2 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
          *pbVar2 = bVar1;
          return 1;
        }
        __overflow(_stdout,(uint)bVar1);
        return 1;
      case 0x65:
        pcVar16 = _stdout->_IO_write_ptr;
        if (pcVar16 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar16 + 1;
          *pcVar16 = '\x1b';
          return 1;
        }
        __overflow(_stdout,0x1b);
        return 1;
      case 0x66:
        pcVar16 = _stdout->_IO_write_ptr;
        if (pcVar16 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar16 + 1;
          *pcVar16 = '\f';
          return 1;
        }
        __overflow(_stdout,0xc);
        return 1;
      case 0x6e:
        pcVar16 = _stdout->_IO_write_ptr;
        if (pcVar16 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar16 + 1;
          *pcVar16 = '\n';
          return 1;
        }
        __overflow(_stdout,10);
        return 1;
      case 0x72:
        pcVar16 = _stdout->_IO_write_ptr;
        if (pcVar16 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar16 + 1;
          *pcVar16 = '\r';
          return 1;
        }
        __overflow(_stdout,0xd);
        return 1;
      case 0x74:
        pcVar16 = _stdout->_IO_write_ptr;
        if (pcVar16 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar16 + 1;
          *pcVar16 = '\t';
          return 1;
        }
        __overflow(_stdout,9);
        return 1;
      case 0x76:
        pcVar16 = _stdout->_IO_write_ptr;
        if (pcVar16 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar16 + 1;
          *pcVar16 = '\v';
          return 1;
        }
        __overflow(_stdout,0xb);
        return 1;
      }
    }
    if ((bVar1 & 0xdf) != 0x55) goto LAB_001000b1;
    bVar17 = *(byte *)(param_1 + 2);
    cVar8 = (bVar1 != 0x75) * '\x04' + '\x04';
    if (((byte)(bVar17 - 0x30) < 0x37) &&
       ((0x7e0000007e03ffU >> ((ulong)(bVar17 - 0x30) & 0x3f) & 1) != 0)) {
      iVar9 = (int)(char)bVar17;
      iVar12 = iVar9 + -0x57;
      if (5 < (byte)(bVar17 + 0x9f)) {
        iVar12 = iVar9 + -0x30;
        if ((byte)(bVar17 + 0xbf) < 6) {
          iVar12 = iVar9 + -0x37;
        }
      }
      bVar17 = *(byte *)(param_1 + 3);
      if (((byte)(bVar17 - 0x30) < 0x37) &&
         ((0x7e0000007e03ffU >> ((ulong)(bVar17 - 0x30) & 0x3f) & 1) != 0)) {
        iVar10 = (int)(char)bVar17;
        iVar9 = iVar10 + -0x57;
        if (5 < (byte)(bVar17 + 0x9f)) {
          iVar9 = iVar10 + -0x30;
          if ((byte)(bVar17 + 0xbf) < 6) {
            iVar9 = iVar10 + -0x37;
          }
        }
        bVar17 = *(byte *)(param_1 + 4);
        if (((byte)(bVar17 - 0x30) < 0x37) &&
           ((0x7e0000007e03ffU >> ((ulong)(bVar17 - 0x30) & 0x3f) & 1) != 0)) {
          iVar11 = (int)(char)bVar17;
          iVar10 = iVar11 + -0x57;
          if (5 < (byte)(bVar17 + 0x9f)) {
            iVar10 = iVar11 + -0x30;
            if ((byte)(bVar17 + 0xbf) < 6) {
              iVar10 = iVar11 + -0x37;
            }
          }
          bVar17 = *(byte *)(param_1 + 5);
          if (((byte)(bVar17 - 0x30) < 0x37) &&
             ((0x7e0000007e03ffU >> ((ulong)(bVar17 - 0x30) & 0x3f) & 1) != 0)) {
            iVar13 = (int)(char)bVar17;
            iVar11 = iVar13 + -0x57;
            if (5 < (byte)(bVar17 + 0x9f)) {
              iVar11 = iVar13 + -0x30;
              if ((byte)(bVar17 + 0xbf) < 6) {
                iVar11 = iVar13 + -0x37;
              }
            }
            iVar11 = ((iVar12 * 0x10 + iVar9) * 0x10 + iVar10) * 0x10 + iVar11;
            uVar15 = iVar3 + 6;
            if (cVar8 == '\x04') {
LAB_0010045d:
              if (0x7ff < iVar11 - 0xd800U) {
                print_unicode_char(_stdout,iVar11,0);
                return (ulong)((uVar15 - iVar3) - 1);
              }
              uVar4 = dcgettext(0,"invalid universal character name \\%c%0*x",5);
              pcVar16 = (char *)0x0;
              pcVar19 = (char *)0x1;
              error(1,0,uVar4,(int)(char)bVar1,cVar8,iVar11);
              if (pcVar19 == pcVar16) {
                uVar4 = quote();
                pcVar16 = "%s: expected a numeric value";
              }
              else {
                puVar5 = (uint *)__errno_location();
                if (*puVar5 != 0) {
                  uVar4 = quote(pcVar19);
                  uVar7 = error(0,*puVar5,&_LC4,uVar4);
                  exit_status = 1;
                  return uVar7;
                }
                if (*pcVar16 == '\0') {
                  return (ulong)*puVar5;
                }
                uVar4 = quote(pcVar19);
                pcVar16 = "%s: value not completely converted";
              }
              uVar6 = dcgettext(0,pcVar16,5);
              uVar7 = error(0,0,uVar6,uVar4);
              exit_status = 1;
              return uVar7;
            }
            bVar17 = *(byte *)(param_1 + 6);
            if (((byte)(bVar17 - 0x30) < 0x37) &&
               ((0x7e0000007e03ffU >> ((ulong)(bVar17 - 0x30) & 0x3f) & 1) != 0)) {
              iVar9 = (int)(char)bVar17;
              iVar12 = iVar9 + -0x57;
              if (5 < (byte)(bVar17 + 0x9f)) {
                iVar12 = iVar9 + -0x30;
                if ((byte)(bVar17 + 0xbf) < 6) {
                  iVar12 = iVar9 + -0x37;
                }
              }
              bVar17 = *(byte *)(param_1 + 7);
              if (((byte)(bVar17 - 0x30) < 0x37) &&
                 ((0x7e0000007e03ffU >> ((ulong)(bVar17 - 0x30) & 0x3f) & 1) != 0)) {
                iVar10 = (int)(char)bVar17;
                iVar9 = iVar10 + -0x57;
                if ((5 < (byte)(bVar17 + 0x9f)) &&
                   (iVar9 = iVar10 + -0x37, 5 < (byte)(bVar17 + 0xbf))) {
                  iVar9 = iVar10 + -0x30;
                }
                bVar17 = *(byte *)(param_1 + 8);
                if (((byte)(bVar17 - 0x30) < 0x37) &&
                   ((0x7e0000007e03ffU >> ((ulong)(bVar17 - 0x30) & 0x3f) & 1) != 0)) {
                  iVar13 = (int)(char)bVar17;
                  iVar10 = iVar13 + -0x57;
                  if ((5 < (byte)(bVar17 + 0x9f)) &&
                     (iVar10 = iVar13 + -0x37, 5 < (byte)(bVar17 + 0xbf))) {
                    iVar10 = iVar13 + -0x30;
                  }
                  bVar17 = *(byte *)(param_1 + 9);
                  if (((byte)(bVar17 - 0x30) < 0x37) &&
                     ((0x7e0000007e03ffU >> ((ulong)(bVar17 - 0x30) & 0x3f) & 1) != 0)) {
                    iVar13 = (int)(char)bVar17;
                    if ((byte)(bVar17 + 0x9f) < 6) {
                      iVar14 = iVar13 + -0x57;
                    }
                    else {
                      iVar14 = iVar13 + -0x30;
                      if ((byte)(bVar17 + 0xbf) < 6) {
                        iVar14 = iVar13 + -0x37;
                      }
                    }
                    iVar11 = (((iVar11 * 0x10 + iVar12) * 0x10 + iVar9) * 0x10 + iVar10) * 0x10 +
                             iVar14;
                    uVar15 = iVar3 + 10;
                    goto LAB_0010045d;
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_00100238:
    uVar4 = dcgettext(0,"missing hexadecimal number in escape",5);
    bVar17 = 0;
    p_Var18 = (_IO_FILE *)0x1;
    error(1,0,uVar4);
  }
  __overflow(p_Var18,(uint)bVar17);
LAB_00100093:
  return (ulong)((uVar15 - iVar3) - 1);
switchD_001001cc_caseD_61:
  pcVar16 = _stdout->_IO_write_ptr;
  if (pcVar16 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar16 + 1;
    *pcVar16 = '\a';
    return 1;
  }
  __overflow(_stdout,7);
  return 1;
}



void verify_numeric(char *param_1,char *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if (param_1 == param_2) {
    uVar3 = quote();
    pcVar4 = "%s: expected a numeric value";
  }
  else {
    piVar1 = __errno_location();
    if (*piVar1 != 0) {
      uVar3 = quote(param_1);
      error(0,*piVar1,&_LC4,uVar3);
      exit_status = 1;
      return;
    }
    if (*param_2 == '\0') {
      return;
    }
    uVar3 = quote(param_1);
    pcVar4 = "%s: value not completely converted";
  }
  uVar2 = dcgettext(0,pcVar4,5);
  error(0,0,uVar2,uVar3);
  exit_status = 1;
  return;
}



ulong vstrtoimax(char *param_1)

{
  char cVar1;
  int *piVar2;
  ulong uVar3;
  size_t sVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  int local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*param_1 == '\"') || (*param_1 == '\'')) &&
     (uVar3 = (ulong)(byte)param_1[1], param_1[1] != 0)) {
    pcVar8 = param_1 + 1;
    sVar4 = __ctype_get_mb_cur_max();
    if (sVar4 < 2) {
      cVar1 = param_1[2];
    }
    else {
      if (param_1[2] == '\0') goto LAB_00100844;
      local_38 = 0;
      sVar4 = strlen(pcVar8);
      lVar5 = rpl_mbrtowc(&local_40,pcVar8,sVar4,&local_38);
      if (0 < lVar5) {
        uVar3 = (ulong)local_40;
        pcVar8 = param_1 + lVar5;
      }
      cVar1 = pcVar8[1];
    }
    if ((cVar1 != '\0') && (posixly_correct == '\0')) {
      uVar6 = dcgettext(0,"warning: %s: character(s) following character constant have been ignored"
                        ,5);
      error(0,0,uVar6,pcVar8 + 1);
    }
    goto LAB_00100844;
  }
  piVar2 = __errno_location();
  *piVar2 = 0;
  uVar3 = __isoc23_strtoimax(param_1,&local_40,0);
  if ((char *)CONCAT44(uStack_3c,local_40) == param_1) {
    uVar6 = quote(param_1);
    pcVar8 = "%s: expected a numeric value";
  }
  else {
    if (*piVar2 != 0) {
      uVar6 = quote(param_1);
      error(0,*piVar2,&_LC4,uVar6);
      exit_status = 1;
      goto LAB_00100844;
    }
    if (*(char *)CONCAT44(uStack_3c,local_40) == '\0') goto LAB_00100844;
    uVar6 = quote(param_1);
    pcVar8 = "%s: value not completely converted";
  }
  uVar7 = dcgettext(0,pcVar8,5);
  error(0,0,uVar7,uVar6);
  exit_status = 1;
LAB_00100844:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int print_formatted(byte *param_1,int param_2,long param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FILE *pFVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  ulong uVar12;
  char *pcVar13;
  int *piVar14;
  size_t sVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  long lVar19;
  undefined **ppuVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  ulong uVar27;
  byte *pbVar28;
  long in_FS_OFFSET;
  byte bVar29;
  longdouble in_ST0;
  longdouble lVar30;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  longdouble in_ST7;
  undefined *puStack_270;
  char *pcStack_268;
  char *apcStack_260 [4];
  char *pcStack_240;
  char *pcStack_238;
  char *pcStack_230;
  char *pcStack_228;
  char *pcStack_220;
  char *pcStack_218;
  undefined1 auStack_210 [16];
  undefined8 uStack_1f8;
  byte *pbStack_1f0;
  ulong uStack_1e8;
  byte *pbStack_1e0;
  byte *local_1d8;
  undefined2 uStack_1d0;
  undefined6 uStack_1ce;
  uint local_1bc;
  long local_1b8;
  void *local_1b0;
  char *local_1a8;
  int local_1a0;
  undefined4 local_19c;
  longdouble local_198;
  longdouble local_188;
  byte *local_178;
  byte *local_170;
  char *local_168;
  undefined4 local_160;
  char local_15a;
  char local_159;
  int local_158;
  undefined4 uStack_154;
  undefined8 local_150;
  char local_148 [65];
  undefined1 local_107;
  undefined2 local_103;
  undefined1 local_101;
  undefined1 local_f0;
  undefined1 local_e7;
  uint local_e5;
  undefined1 local_e1;
  bool local_df;
  undefined1 local_d9;
  bool local_d5;
  bool local_d3;
  undefined1 local_d0;
  long local_40;
  
  bVar29 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_1d0 = 0x9d5;
  uStack_1ce = 0x10;
  local_1b8 = param_3;
  local_1a0 = param_2;
  strlen((char *)param_1);
  uStack_1d0 = 0x9de;
  uStack_1ce = 0x10;
  pcVar11 = (char *)xmalloc();
  local_1a8 = pcVar11;
  bVar7 = *param_1;
  if (bVar7 != 0) {
    uVar21 = 0xffffffff;
    local_160 = 0;
    local_19c = 0;
    uVar27 = 0xffffffff;
    local_1bc = 0xffffffff;
LAB_00100a59:
    if (bVar7 == 0x25) {
      bVar7 = param_1[1];
      *pcVar11 = '%';
      pFVar6 = _stdout;
      pbVar24 = param_1 + 1;
      if (bVar7 == 0x25) {
        pbVar28 = param_1 + 2;
        pcVar13 = _stdout->_IO_write_ptr;
        if (pcVar13 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = pcVar13 + 1;
          *pcVar13 = '%';
          param_1 = pbVar24;
        }
        else {
          uStack_1d0 = 0x110a;
          uStack_1ce = 0x10;
          __overflow(_stdout,0x25);
          param_1 = pbVar24;
        }
      }
      else {
        uVar8 = (int)(char)bVar7 - 0x30;
        if (uVar8 < 10) {
          iVar23 = (int)(char)param_1[2];
          pbVar28 = param_1 + 2;
          if (iVar23 - 0x30U < 10) {
            bVar3 = false;
            do {
              lVar19 = (long)(int)uVar8;
              iVar10 = (int)(lVar19 * 10);
              iVar23 = (int)(char)((char)iVar23 + -0x30);
              uVar8 = iVar23 + iVar10;
              pbVar28 = pbVar28 + 1;
              bVar3 = (bool)(bVar3 | ((long)iVar10 != lVar19 * 10 || SCARRY4(iVar23,iVar10)));
              iVar23 = (int)(char)*pbVar28;
            } while (iVar23 - 0x30U < 10);
            if (*pbVar28 == 0x24) {
              if (!bVar3) goto LAB_001010b8;
              uVar22 = 0x7ffffffe;
LAB_00100fab:
              pbVar24 = pbVar28 + 1;
              if ((int)uVar21 < (int)uVar22) {
                uVar21 = uVar22;
              }
              if (pbVar28[1] != 0x62) {
                uVar27 = uVar22;
                if (pbVar28[1] != 0x71) goto LAB_00100b6f;
                goto LAB_00100fc9;
              }
              goto LAB_0010101e;
            }
          }
          else if (param_1[2] == 0x24) {
LAB_001010b8:
            if (0 < (int)uVar8) {
              uVar22 = (ulong)(uVar8 - 1);
              goto LAB_00100fab;
            }
          }
LAB_00100b6a:
          uVar22 = 0xffffffff;
LAB_00100b6f:
          uVar8 = (uint)uVar22;
          bVar3 = false;
          bVar4 = false;
          pcVar13 = local_148;
          for (lVar19 = 0x20; lVar19 != 0; lVar19 = lVar19 + -1) {
            pcVar13[0] = '\0';
            pcVar13[1] = '\0';
            pcVar13[2] = '\0';
            pcVar13[3] = '\0';
            pcVar13[4] = '\0';
            pcVar13[5] = '\0';
            pcVar13[6] = '\0';
            pcVar13[7] = '\0';
            pcVar13 = pcVar13 + ((ulong)bVar29 * -2 + 1) * 8;
          }
          local_f0 = 1;
          local_d0 = 1;
          local_d3 = true;
          local_d5 = true;
          local_d9 = 1;
          local_df = true;
          local_101 = 1;
          local_e1 = 1;
          local_e5 = 0x1010101;
          local_107 = 1;
          local_e7 = 1;
          local_103 = 0x101;
          bVar5 = false;
          pbVar28 = (byte *)(pcVar11 + 1);
LAB_00100c08:
          bVar7 = *pbVar24;
          uVar9 = (uint)bVar7;
          switch(bVar7) {
          case 0x20:
          case 0x2b:
          case 0x2d:
            break;
          default:
            goto switchD_00100c1f_caseD_21;
          case 0x23:
            bVar3 = true;
            bVar5 = true;
            break;
          case 0x27:
          case 0x49:
            goto switchD_00100c1f_caseD_27;
          case 0x30:
            bVar5 = true;
          }
          pbVar24 = pbVar24 + 1;
          *pbVar28 = bVar7;
          pbVar28 = pbVar28 + 1;
          goto LAB_00100c08;
        }
        if (bVar7 == 0x62) {
          local_1bc = local_1bc + 1;
          if (-1 < (int)local_1bc) {
            uVar22 = (ulong)local_1bc;
LAB_0010101e:
            uVar27 = uVar22;
            if ((int)uVar21 < (int)uVar22) {
              uVar21 = uVar22;
            }
          }
          pbVar28 = pbVar24 + 1;
          param_1 = pbVar24;
          if ((int)uVar27 < local_1a0) {
            pbVar25 = *(byte **)(local_1b8 + (long)(int)uVar27 * 8);
            bVar7 = *pbVar25;
            while (bVar7 != 0) {
              if (bVar7 == 0x5c) {
                uStack_1d0 = 0x108f;
                uStack_1ce = 0x10;
                iVar23 = print_esc(pbVar25,1);
                pbVar25 = pbVar25 + iVar23;
              }
              else {
                pbVar26 = (byte *)_stdout->_IO_write_ptr;
                if (pbVar26 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = (char *)(pbVar26 + 1);
                  *pbVar26 = bVar7;
                }
                else {
                  uStack_1d0 = 0x10d8;
                  uStack_1ce = 0x10;
                  __overflow(_stdout,(uint)bVar7);
                }
              }
              bVar7 = pbVar25[1];
              pbVar25 = pbVar25 + 1;
            }
          }
        }
        else {
          if (bVar7 != 0x71) goto LAB_00100b6a;
          local_1bc = local_1bc + 1;
          if (-1 < (int)local_1bc) {
            uVar22 = (ulong)local_1bc;
LAB_00100fc9:
            uVar27 = uVar22;
            if ((int)uVar21 < (int)uVar22) {
              uVar21 = uVar22;
            }
          }
          param_1 = pbVar24;
          pbVar28 = pbVar24 + 1;
          if ((int)uVar27 < local_1a0) {
            uStack_1d0 = 0xffc;
            uStack_1ce = 0x10;
            pcVar13 = (char *)quotearg_style(3,*(undefined8 *)(local_1b8 + (long)(int)uVar27 * 8));
            uStack_1d0 = 0x1007;
            uStack_1ce = 0x10;
            fputs_unlocked(pcVar13,pFVar6);
          }
        }
      }
      goto LAB_00100a51;
    }
    if (bVar7 != 0x5c) {
      pbVar28 = param_1 + 1;
      pbVar24 = (byte *)_stdout->_IO_write_ptr;
      if (pbVar24 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)(pbVar24 + 1);
        *pbVar24 = bVar7;
      }
      else {
        uStack_1d0 = 0x10ae;
        uStack_1ce = 0x10;
        __overflow(_stdout,(uint)bVar7);
      }
      goto LAB_00100a51;
    }
    uStack_1d0 = 0xaba;
    uStack_1ce = 0x10;
    iVar23 = print_esc(param_1,0);
    bVar7 = param_1[(long)iVar23 + 1];
    param_1 = param_1 + (long)iVar23 + 1;
    goto joined_r0x00100a57;
  }
  uStack_1d0 = 0x165c;
  uStack_1ce = 0x10;
  free(pcVar11);
  local_1a0 = 0;
  iVar23 = local_1a0;
LAB_00100ae6:
  local_1a0 = iVar23;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
    uStack_1d0 = 0x186b;
    uStack_1ce = 0x10;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_1a0;
switchD_00100c1f_caseD_27:
  bVar5 = true;
  pbVar24 = pbVar24 + 1;
  *pbVar28 = bVar7;
  bVar4 = true;
  pbVar28 = pbVar28 + 1;
  goto LAB_00100c08;
switchD_00100c1f_caseD_21:
  if (bVar3) {
    local_e5 = 0x1010001;
    local_df = false;
    local_d3 = false;
  }
  local_d3 = !bVar3;
  local_df = !bVar3;
  if (bVar4) {
    local_e7 = 0;
    local_107 = 0;
    if (!bVar5) {
      local_d9 = 0;
    }
    else {
      local_e5._0_2_ = (short)(local_e5 >> 8) << 8;
      local_d9 = 0;
      local_d5 = false;
    }
    local_e5 = CONCAT13(local_e5._3_1_,(uint3)(ushort)local_e5);
    local_103 = 0x100;
    local_d9 = 0;
    local_d0 = 0;
    local_f0 = 0;
    local_d5 = !bVar5;
  }
  else if (bVar5) {
    local_e5 = local_e5 & 0xffffff00;
    local_d5 = false;
  }
  if (bVar7 == 0x2a) {
    bVar7 = pbVar24[1];
    *pbVar28 = 0x2a;
    pbVar28 = pbVar28 + 1;
    uVar9 = (int)(char)bVar7 - 0x30;
    if (uVar9 < 10) {
      iVar23 = (int)(char)pbVar24[2];
      pbVar25 = pbVar24 + 2;
      if (9 < iVar23 - 0x30U) {
        if (pbVar24[2] == 0x24) {
LAB_00101644:
          if (0 < (int)uVar9) {
            uVar18 = uVar9 - 1;
            goto LAB_001014a4;
          }
        }
        goto LAB_00100ce0;
      }
      bVar3 = false;
      do {
        lVar19 = (long)(int)uVar9;
        iVar10 = (int)(lVar19 * 10);
        iVar23 = (int)(char)((char)iVar23 + -0x30);
        uVar9 = iVar23 + iVar10;
        pbVar25 = pbVar25 + 1;
        bVar3 = (bool)(bVar3 | ((long)iVar10 != lVar19 * 10 || SCARRY4(iVar23,iVar10)));
        iVar23 = (int)(char)*pbVar25;
      } while (iVar23 - 0x30U < 10);
      if (*pbVar25 != 0x24) goto LAB_00100ce0;
      uVar18 = 0x7ffffffe;
      if (!bVar3) goto LAB_00101644;
LAB_001014a4:
      pbVar24 = pbVar25 + 1;
      uVar9 = local_1bc;
      local_1bc = uVar18;
LAB_00100cef:
      uVar18 = local_1bc;
      local_1bc = uVar9;
      uVar27 = (ulong)uVar18;
      if ((int)uVar21 < (int)uVar18) {
        uVar21 = (ulong)uVar18;
      }
    }
    else {
LAB_00100ce0:
      local_1bc = local_1bc + 1;
      pbVar24 = pbVar24 + 1;
      uVar9 = local_1bc;
      if (-1 < (int)local_1bc) goto LAB_00100cef;
    }
    if ((int)uVar27 < local_1a0) {
      local_198 = (longdouble)CONCAT28(local_198._8_2_,pbVar24);
      local_1b0 = (void *)CONCAT44(local_1b0._4_4_,uVar8);
      puVar1 = (undefined8 *)(local_1b8 + (long)(int)uVar27 * 8);
      uStack_1d0 = 0x1411;
      uStack_1ce = 0x10;
      lVar19 = vstrtoimax(*puVar1);
      if (lVar19 + 0x80000000U >> 0x20 != 0) {
        uStack_1d0 = 0x1873;
        uStack_1ce = 0x10;
        uVar16 = quote(*puVar1);
        pcVar11 = "invalid field width: %s";
        pbVar25 = pbVar28;
        goto LAB_00101882;
      }
      uVar8 = (uint)local_1b0;
      local_19c = (int)lVar19;
      local_15a = '\x01';
      bVar7 = *local_198._0_8_;
      pbVar24 = local_198._0_8_;
    }
    else {
      local_19c = 0;
      bVar7 = *pbVar24;
      local_15a = '\x01';
    }
  }
  else {
    uVar18 = (int)(char)bVar7;
    while (uVar18 - 0x30 < 10) {
      pbVar24 = pbVar24 + 1;
      bVar7 = *pbVar24;
      *pbVar28 = (byte)uVar9;
      pbVar28 = pbVar28 + 1;
      uVar9 = (uint)(char)bVar7;
      uVar18 = uVar9;
    }
    local_15a = '\0';
  }
  if (bVar7 == 0x2e) {
    bVar7 = pbVar24[1];
    *pbVar28 = 0x2e;
    local_e5 = local_e5 & 0xffffff00;
    if (bVar7 == 0x2a) {
      bVar7 = pbVar24[2];
      pbVar28[1] = 0x2a;
      pbVar25 = pbVar24 + 2;
      pbVar28 = pbVar28 + 2;
      uVar9 = (int)(char)bVar7 - 0x30;
      if (uVar9 < 10) {
        pbVar26 = pbVar24 + 3;
        iVar23 = (int)(char)pbVar24[3];
        if (9 < iVar23 - 0x30U) {
          if (pbVar24[3] == 0x24) {
LAB_00101513:
            if (0 < (int)uVar9) {
              uVar18 = uVar9 - 1;
              goto LAB_0010151e;
            }
          }
          goto LAB_00100d7a;
        }
        bVar3 = false;
        do {
          lVar19 = (long)(int)uVar9;
          iVar10 = (int)(lVar19 * 10);
          iVar23 = (int)(char)((char)iVar23 + -0x30);
          uVar9 = iVar23 + iVar10;
          pbVar26 = pbVar26 + 1;
          bVar3 = (bool)(bVar3 | ((long)iVar10 != lVar19 * 10 || SCARRY4(iVar23,iVar10)));
          iVar23 = (int)(char)*pbVar26;
        } while (iVar23 - 0x30U < 10);
        if (*pbVar26 != 0x24) goto LAB_00100d7a;
        uVar18 = 0x7ffffffe;
        if (!bVar3) goto LAB_00101513;
LAB_0010151e:
        pbVar25 = pbVar26 + 1;
        uVar9 = local_1bc;
        local_1bc = uVar18;
LAB_00100d88:
        uVar18 = local_1bc;
        uVar27 = (ulong)local_1bc;
        local_1bc = uVar9;
        pbVar24 = pbVar25;
        if ((int)uVar21 < (int)uVar18) {
          uVar21 = (ulong)uVar18;
        }
      }
      else {
LAB_00100d7a:
        local_1bc = local_1bc + 1;
        pbVar24 = pbVar25;
        uVar9 = local_1bc;
        if (-1 < (int)local_1bc) goto LAB_00100d88;
      }
      if ((int)uVar27 < local_1a0) {
        local_198 = (longdouble)CONCAT28(local_198._8_2_,pbVar24);
        local_1b0 = (void *)CONCAT44(local_1b0._4_4_,uVar8);
        pbVar25 = (byte *)(local_1b8 + (long)(int)uVar27 * 8);
        uStack_1d0 = 0xdc3;
        uStack_1ce = 0x10;
        lVar19 = vstrtoimax(*(undefined8 *)pbVar25);
        uVar8 = (uint)local_1b0;
        pbVar24 = local_198._0_8_;
        if (lVar19 < 0) {
          local_160 = 0xffffffff;
          local_159 = '\x01';
        }
        else {
          if (0x7fffffff < lVar19) {
            do {
              uStack_1d0 = 0x18a5;
              uStack_1ce = 0x10;
              uVar16 = quote(*(undefined8 *)pbVar25);
              pcVar11 = "invalid precision: %s";
LAB_00101882:
              uStack_1d0 = 0x1889;
              uStack_1ce = 0x10;
              uVar17 = dcgettext(0,pcVar11,5);
              uStack_1d0 = 0x189d;
              uStack_1ce = 0x10;
              error(1,0,uVar17,uVar16);
            } while( true );
          }
          local_160 = (int)lVar19;
          local_159 = '\x01';
        }
      }
      else {
        local_160 = 0;
        local_159 = '\x01';
      }
    }
    else {
      pbVar28 = pbVar28 + 1;
      if ((int)(char)bVar7 - 0x30U < 10) {
        pbVar25 = pbVar24 + 2;
        uVar9 = (uint)bVar7;
        do {
          pbVar24 = pbVar25;
          bVar7 = *pbVar24;
          *pbVar28 = (byte)uVar9;
          pbVar28 = pbVar28 + 1;
          pbVar25 = pbVar24 + 1;
          uVar9 = (int)(char)bVar7;
        } while ((int)(char)bVar7 - 0x30U < 10);
        goto LAB_0010137c;
      }
      local_159 = '\0';
      pbVar24 = pbVar24 + 1;
    }
  }
  else {
LAB_0010137c:
    local_159 = '\0';
  }
  *pbVar28 = 0;
  do {
    pbVar28 = pbVar24;
    bVar7 = *pbVar28;
    pbVar24 = pbVar28 + 1;
    if (0x2e < (byte)(bVar7 - 0x4c)) break;
  } while ((0x410150000001U >> ((ulong)(bVar7 - 0x4c) & 0x3f) & 1) != 0);
  if (local_148[bVar7] == '\0') {
    uStack_1d0 = 0x18cf;
    uStack_1ce = 0x10;
    uVar16 = dcgettext(0,"%.*s: invalid conversion specification",5);
    iVar23 = 1;
    lVar19 = 0x7fffffff;
    if ((long)pbVar24 - (long)param_1 < 0x80000000) {
      lVar19 = (long)pbVar24 - (long)param_1;
    }
    uStack_1d0 = 0x18f8;
    uStack_1ce = 0x10;
    error(1,0,uVar16,lVar19,param_1);
    uVar16 = _program_name;
    uStack_1d0 = (undefined2)uVar27;
    uStack_1ce = (undefined6)(uVar27 >> 0x10);
    ppuVar20 = &puStack_270;
    uStack_1f8 = *(undefined8 *)(in_FS_OFFSET + 0x28);
    pbStack_1f0 = pbVar28;
    uStack_1e8 = uVar21;
    pbStack_1e0 = param_1;
    local_1d8 = pbVar24;
    if (iVar23 == 0) {
      uVar17 = dcgettext(0,"Usage: %s FORMAT [ARGUMENT]...\n  or:  %s OPTION\n",5);
      __printf_chk(2,uVar17,uVar16,uVar16);
      pFVar6 = _stdout;
      pcVar11 = (char *)dcgettext(0,
                                  "Print ARGUMENT(s) according to FORMAT, or execute according to OPTION:\n\n"
                                  ,5);
      fputs_unlocked(pcVar11,pFVar6);
      pFVar6 = _stdout;
      pcVar11 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
      fputs_unlocked(pcVar11,pFVar6);
      pFVar6 = _stdout;
      pcVar11 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
      fputs_unlocked(pcVar11,pFVar6);
      pFVar6 = _stdout;
      pcVar11 = (char *)dcgettext(0,
                                  "\nFORMAT controls the output as in C printf.  Interpreted sequences are:\n\n  \\\"      double quote\n"
                                  ,5);
      fputs_unlocked(pcVar11,pFVar6);
      pFVar6 = _stdout;
      pcVar11 = (char *)dcgettext(0,
                                  "  \\\\      backslash\n  \\a      alert (BEL)\n  \\b      backspace\n  \\c      produce no further output\n  \\e      escape\n  \\f      form feed\n  \\n      new line\n  \\r      carriage return\n  \\t      horizontal tab\n  \\v      vertical tab\n"
                                  ,5);
      fputs_unlocked(pcVar11,pFVar6);
      pFVar6 = _stdout;
      pcVar11 = (char *)dcgettext(0,
                                  "  \\NNN    byte with octal value NNN (1 to 3 digits)\n  \\xHH    byte with hexadecimal value HH (1 to 2 digits)\n  \\uHHHH  Unicode (ISO/IEC 10646) character with hex value HHHH (4 digits)\n  \\UHHHHHHHH  Unicode character with hex value HHHHHHHH (8 digits)\n"
                                  ,5);
      fputs_unlocked(pcVar11,pFVar6);
      pFVar6 = _stdout;
      pcVar11 = (char *)dcgettext(0,
                                  "  %%      a single %\n  %b      ARGUMENT as a string with \'\\\' escapes interpreted,\n          except that octal escapes should have a leading 0 like \\0NNN\n  %q      ARGUMENT is printed in a format that can be reused as shell input,\n          escaping non-printable characters with the POSIX $\'\' syntax\n\nand all C format specifications ending with one of diouxXfeEgGcs, with\nARGUMENTs converted to proper type first.  Variable widths are handled.\n"
                                  ,5);
      fputs_unlocked(pcVar11,pFVar6);
      uVar16 = dcgettext(0,
                         "\nYour shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                         ,5);
      __printf_chk(2,uVar16,"printf");
      pcVar11 = "[";
      puStack_270 = &_LC18;
      pcStack_268 = "test invocation";
      apcStack_260[0] = "coreutils";
      apcStack_260[1] = "Multi-call invocation";
      apcStack_260[2] = "sha224sum";
      apcStack_260[3] = "sha2 utilities";
      pcStack_240 = "sha256sum";
      pcStack_238 = "sha2 utilities";
      pcStack_230 = "sha384sum";
      pcStack_228 = "sha2 utilities";
      pcStack_220 = "sha512sum";
      pcStack_218 = "sha2 utilities";
      auStack_210 = (undefined1  [16])0x0;
      goto LAB_00101b75;
    }
    uVar17 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar17,uVar16);
    goto LAB_0010195a;
  }
  if (((uVar8 != 0xffffffff) || (uVar8 = local_1bc + 1, local_1bc = uVar8, -1 < (int)uVar8)) &&
     (uVar27 = (ulong)uVar8, (int)uVar21 < (int)uVar8)) {
    uVar21 = (ulong)uVar8;
  }
  uVar16 = 0;
  if ((int)uVar27 < local_1a0) {
    uVar16 = *(undefined8 *)(local_1b8 + (long)(int)uVar27 * 8);
  }
  if ((byte)(bVar7 + 0xbf) < 0x38) {
    uVar22 = 1;
    uVar12 = 1L << (bVar7 + 0xbf & 0x3f);
    local_168 = "L";
    if ((uVar12 & 0x7100000071) == 0) {
      uVar12 = uVar12 & 0x90410800800000;
      uVar22 = (ulong)(uVar12 != 0);
      local_168 = "j";
      if (uVar12 == 0) {
        local_168 = pcVar11;
      }
    }
  }
  else {
    uVar22 = 0;
    local_168 = pcVar11;
  }
  local_188 = (longdouble)CONCAT28(local_188._8_2_,uVar16);
  uStack_1d0 = 0xec0;
  uStack_1ce = 0x10;
  local_170 = pbVar24;
  local_178 = (byte *)strlen(pcVar11);
  local_198 = (longdouble)CONCAT28(local_198._8_2_,local_178 + uVar22 + 2);
  uStack_1d0 = 0xed7;
  uStack_1ce = 0x10;
  local_1b0 = (void *)xmalloc(local_178 + uVar22 + 2);
  uStack_1d0 = 0xef1;
  uStack_1ce = 0x10;
  lVar19 = __mempcpy_chk(local_1b0,pcVar11,local_178,local_198._0_8_);
  pbVar24 = local_188._0_8_;
  if ((uint)uVar22 != 0) {
    uVar12 = 0;
    do {
      uVar8 = (int)uVar12 + 1;
      *(char *)(lVar19 + uVar12) = local_168[uVar12];
      uVar12 = (ulong)uVar8;
    } while (uVar8 < (uint)uVar22);
  }
  *(byte *)(lVar19 + uVar22) = bVar7;
  ((byte *)(lVar19 + uVar22))[1] = 0;
  pbVar25 = local_170;
  switch(bVar7) {
  case 0x41:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
    if (local_188._0_8_ == (byte *)0x0) {
      lVar30 = (longdouble)0;
      pbVar24 = local_170;
    }
    else if (((*local_188._0_8_ == 0x22) || (*local_188._0_8_ == 0x27)) && (local_188._0_8_[1] != 0)
            ) {
      local_198 = (longdouble)local_188._0_8_[1];
      pbVar25 = local_188._0_8_ + 1;
      local_188 = (longdouble)CONCAT28(local_188._8_2_,local_170);
      local_178 = pbVar24;
      uStack_1d0 = 0x1760;
      uStack_1ce = 0x10;
      sVar15 = __ctype_get_mb_cur_max();
      pbVar24 = local_188._0_8_;
      lVar30 = local_198;
      if (sVar15 < 2) {
        bVar7 = local_178[2];
      }
      else {
        if (local_178[2] == 0) goto LAB_0010157d;
        local_170 = local_188._0_8_;
        local_188 = local_198;
        local_198 = (longdouble)CONCAT28(local_198._8_2_,&local_150);
        local_150 = 0;
        uStack_1d0 = 0x17ac;
        uStack_1ce = 0x10;
        sVar15 = strlen((char *)pbVar25);
        uStack_1d0 = 0x17c1;
        uStack_1ce = 0x10;
        lVar19 = rpl_mbrtowc(&local_158,pbVar25,sVar15,local_198._0_8_);
        lVar30 = local_188;
        if (0 < lVar19) {
          lVar30 = (longdouble)local_158;
          pbVar25 = local_178 + lVar19;
        }
        bVar7 = pbVar25[1];
        pbVar24 = local_170;
      }
      if ((bVar7 != 0) && (posixly_correct == '\0')) {
        uStack_1d0 = 0x1814;
        uStack_1ce = 0x10;
        local_198 = lVar30;
        local_178 = pbVar24;
        uVar16 = dcgettext(0,
                           "warning: %s: character(s) following character constant have been ignored"
                           ,5);
        uStack_1d0 = 0x1826;
        uStack_1ce = 0x10;
        error(0,0,uVar16,pbVar25 + 1);
        pbVar24 = local_178;
        lVar30 = local_198;
      }
    }
    else {
      local_188 = (longdouble)CONCAT28(local_188._8_2_,local_170);
      local_198 = (longdouble)CONCAT28(local_198._8_2_,pbVar24);
      uStack_1d0 = 0x11b2;
      uStack_1ce = 0x10;
      piVar14 = __errno_location();
      *piVar14 = 0;
      local_178 = local_198._0_8_;
      uStack_1d0 = 0x11cf;
      uStack_1ce = 0x10;
      cl_strtold(local_198._0_8_,&local_158);
      uStack_1d0 = 0x11e2;
      uStack_1ce = 0x10;
      local_198 = in_ST0;
      verify_numeric(local_178);
      pbVar24 = local_188._0_8_;
      lVar30 = local_198;
      in_ST0 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = in_ST6;
      in_ST6 = in_ST7;
    }
LAB_0010157d:
    uStack_1d0 = (undefined2)((unkuint10)lVar30 >> 0x40);
    local_1d8 = SUB108(lVar30,0);
    in_ST7 = in_ST6;
    if (local_15a == '\0') {
      local_198 = (longdouble)CONCAT28(local_198._8_2_,pbVar24);
      uVar2 = local_160;
      if (local_159 == '\0') {
        pbStack_1e0 = (byte *)0x1015a7;
        xprintf(local_1b0);
        pbVar25 = local_198._0_8_;
        goto switchD_00100f46_caseD_42;
      }
    }
    else {
      local_198 = (longdouble)CONCAT28(local_198._8_2_,pbVar24);
      uVar2 = local_19c;
      if (local_159 != '\0') {
        pbStack_1e0 = (byte *)0x10161b;
        xprintf(local_1b0,local_19c,local_160);
        pbVar25 = local_198._0_8_;
        goto switchD_00100f46_caseD_42;
      }
    }
    local_198 = (longdouble)CONCAT28(local_198._8_2_,pbVar24);
    pbStack_1e0 = (byte *)0x1015d7;
    xprintf(local_1b0,uVar2);
    pbVar25 = local_198._0_8_;
  default:
    goto switchD_00100f46_caseD_42;
  case 0x58:
  case 0x6f:
  case 0x75:
  case 0x78:
    pbVar24 = (byte *)0x0;
    if (local_188._0_8_ != (byte *)0x0) {
      if (((*local_188._0_8_ == 0x22) || (*local_188._0_8_ == 0x27)) && (local_188._0_8_[1] != 0)) {
        local_178 = local_170;
        pbVar26 = local_188._0_8_ + 1;
        pbVar24 = (byte *)(ulong)local_188._0_8_[1];
        local_198 = (longdouble)CONCAT28(local_198._8_2_,local_188._0_8_);
        uStack_1d0 = 0x1680;
        uStack_1ce = 0x10;
        sVar15 = __ctype_get_mb_cur_max();
        pbVar25 = local_178;
        if (sVar15 < 2) {
          bVar7 = local_198._0_8_[2];
        }
        else {
          if (local_198._0_8_[2] == 0) goto LAB_0010124f;
          local_188 = (longdouble)CONCAT28(local_188._8_2_,local_178);
          local_178 = local_198._0_8_;
          local_198 = (longdouble)CONCAT28(local_198._8_2_,&local_150);
          local_150 = 0;
          uStack_1d0 = 0x16c4;
          uStack_1ce = 0x10;
          sVar15 = strlen((char *)pbVar26);
          uStack_1d0 = 0x16d9;
          uStack_1ce = 0x10;
          lVar19 = rpl_mbrtowc(&local_158,pbVar26,sVar15,local_198._0_8_);
          if (0 < lVar19) {
            pbVar24 = (byte *)(long)local_158;
            pbVar26 = local_178 + lVar19;
          }
          bVar7 = pbVar26[1];
          pbVar25 = local_188._0_8_;
        }
        if ((bVar7 != 0) && (posixly_correct == '\0')) {
          local_198 = (longdouble)CONCAT28(local_198._8_2_,pbVar25);
          uStack_1d0 = 0x1723;
          uStack_1ce = 0x10;
          uVar16 = dcgettext(0,
                             "warning: %s: character(s) following character constant have been ignored"
                             ,5);
          uStack_1d0 = 0x1735;
          uStack_1ce = 0x10;
          error(0,0,uVar16,pbVar26 + 1);
          pbVar25 = local_198._0_8_;
        }
      }
      else {
        local_178 = local_170;
        local_198 = (longdouble)CONCAT28(local_198._8_2_,local_188._0_8_);
        uStack_1d0 = 0x1221;
        uStack_1ce = 0x10;
        piVar14 = __errno_location();
        *piVar14 = 0;
        uStack_1d0 = 0x1238;
        uStack_1ce = 0x10;
        pbVar24 = (byte *)__isoc23_strtoumax(local_198._0_8_,&local_158,0);
        uStack_1d0 = 0x124a;
        uStack_1ce = 0x10;
        verify_numeric(local_198._0_8_,CONCAT44(uStack_154,local_158));
        pbVar25 = local_178;
      }
    }
LAB_0010124f:
    if (local_15a != '\0') {
      local_198 = (longdouble)CONCAT28(local_198._8_2_,pbVar25);
joined_r0x00101148:
      if (local_159 == '\0') {
        uStack_1d0 = 0x115e;
        uStack_1ce = 0x10;
        xprintf(local_1b0,local_19c,pbVar24);
        pbVar25 = local_198._0_8_;
      }
      else {
        uStack_1d0 = 0x1559;
        uStack_1ce = 0x10;
        xprintf(local_1b0,local_19c,local_160,pbVar24);
        pbVar25 = local_198._0_8_;
      }
      goto switchD_00100f46_caseD_42;
    }
    local_198 = (longdouble)CONCAT28(local_198._8_2_,pbVar25);
    if (local_159 == '\0') {
      uStack_1d0 = 0x1275;
      uStack_1ce = 0x10;
      xprintf(local_1b0);
      pbVar25 = local_198._0_8_;
      goto switchD_00100f46_caseD_42;
    }
    break;
  case 99:
    local_198 = (longdouble)CONCAT28(local_198._8_2_,local_170);
    if (local_15a == '\0') {
      uStack_1d0 = 0x1353;
      uStack_1ce = 0x10;
      xprintf(local_1b0);
      pbVar25 = local_198._0_8_;
    }
    else {
      uStack_1d0 = 0x14c5;
      uStack_1ce = 0x10;
      xprintf(local_1b0);
      pbVar25 = local_198._0_8_;
    }
    goto switchD_00100f46_caseD_42;
  case 100:
  case 0x69:
    pbVar24 = (byte *)0x0;
    if (local_188._0_8_ != (byte *)0x0) {
      local_198 = (longdouble)CONCAT28(local_198._8_2_,local_170);
      uStack_1d0 = 0x1293;
      uStack_1ce = 0x10;
      pbVar24 = (byte *)vstrtoimax(local_188._0_8_);
      pbVar25 = local_198._0_8_;
    }
    if (local_15a != '\0') {
      local_198 = (longdouble)CONCAT28(local_198._8_2_,pbVar25);
      goto joined_r0x00101148;
    }
    local_198 = (longdouble)CONCAT28(local_198._8_2_,pbVar25);
    if (local_159 == '\0') {
      uStack_1d0 = 0x12c1;
      uStack_1ce = 0x10;
      xprintf(local_1b0);
      pbVar25 = local_198._0_8_;
      goto switchD_00100f46_caseD_42;
    }
    break;
  case 0x73:
    if (local_188._0_8_ == (byte *)0x0) {
      pbVar24 = &_LC10;
    }
    if (local_15a != '\0') {
      local_198 = (longdouble)CONCAT28(local_198._8_2_,local_170);
      goto joined_r0x00101148;
    }
    local_198 = (longdouble)CONCAT28(local_198._8_2_,local_170);
    if (local_159 == '\0') {
      uStack_1d0 = 0x1320;
      uStack_1ce = 0x10;
      xprintf(local_1b0);
      pbVar25 = local_198._0_8_;
      goto switchD_00100f46_caseD_42;
    }
  }
  uStack_1d0 = 0x12de;
  uStack_1ce = 0x10;
  xprintf(local_1b0,local_160,pbVar24);
  pbVar25 = local_198._0_8_;
switchD_00100f46_caseD_42:
  local_198 = (longdouble)CONCAT28(local_198._8_2_,pbVar25);
  uStack_1d0 = 0x1177;
  uStack_1ce = 0x10;
  free(local_1b0);
  param_1 = pbVar28;
  pbVar28 = local_198._0_8_;
LAB_00100a51:
  bVar7 = param_1[1];
  param_1 = pbVar28;
joined_r0x00100a57:
  if (bVar7 == 0) goto LAB_00100acc;
  goto LAB_00100a59;
LAB_00100acc:
  uStack_1d0 = 0xad6;
  uStack_1ce = 0x10;
  free(local_1a8);
  iVar23 = (int)uVar21 + 1;
  if (local_1a0 <= (int)uVar21) {
    iVar23 = local_1a0;
  }
  goto LAB_00100ae6;
  while( true ) {
    pcVar11 = *(char **)((long)ppuVar20 + 0x10);
    ppuVar20 = (undefined **)((long)ppuVar20 + 0x10);
    if (pcVar11 == (char *)0x0) break;
LAB_00101b75:
    iVar10 = strcmp("printf",pcVar11);
    if (iVar10 == 0) break;
  }
  pcVar11 = *(char **)((long)ppuVar20 + 8);
  if (pcVar11 == (char *)0x0) {
    uVar16 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar11 = "printf";
    __printf_chk(2,uVar16,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar13 = setlocale(5,(char *)0x0);
    if (pcVar13 == (char *)0x0) {
      uVar16 = dcgettext(0,"Full documentation <%s%s>\n",5);
      pcVar13 = " invocation";
      __printf_chk(2,uVar16,"https://www.gnu.org/software/coreutils/","printf");
      goto LAB_00101c2b;
    }
LAB_00101bd5:
    iVar10 = strncmp(pcVar13,"en_",3);
    pFVar6 = _stdout;
    if (iVar10 != 0) {
      pcVar13 = (char *)dcgettext(0,
                                  "Report any translation bugs to <https://translationproject.org/team/>\n"
                                  ,5);
      fputs_unlocked(pcVar13,pFVar6);
    }
  }
  else {
    uVar16 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar16,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar13 = setlocale(5,(char *)0x0);
    if (pcVar13 != (char *)0x0) goto LAB_00101bd5;
  }
  uVar16 = dcgettext(0,"Full documentation <%s%s>\n",5);
  pcVar13 = "";
  __printf_chk(2,uVar16,"https://www.gnu.org/software/coreutils/","printf");
  if (pcVar11 == "printf") {
    pcVar13 = " invocation";
  }
LAB_00101c2b:
  uVar16 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar16,pcVar11,pcVar13);
LAB_0010195a:
                    /* WARNING: Subroutine does not return */
  exit(iVar23);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined **ppuVar7;
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
  ppuVar7 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_0010195a;
  }
  uVar3 = dcgettext(0,"Usage: %s FORMAT [ARGUMENT]...\n  or:  %s OPTION\n",5);
  __printf_chk(2,uVar3,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Print ARGUMENT(s) according to FORMAT, or execute according to OPTION:\n\n"
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
                             "\nFORMAT controls the output as in C printf.  Interpreted sequences are:\n\n  \\\"      double quote\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  \\\\      backslash\n  \\a      alert (BEL)\n  \\b      backspace\n  \\c      produce no further output\n  \\e      escape\n  \\f      form feed\n  \\n      new line\n  \\r      carriage return\n  \\t      horizontal tab\n  \\v      vertical tab\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  \\NNN    byte with octal value NNN (1 to 3 digits)\n  \\xHH    byte with hexadecimal value HH (1 to 2 digits)\n  \\uHHHH  Unicode (ISO/IEC 10646) character with hex value HHHH (4 digits)\n  \\UHHHHHHHH  Unicode character with hex value HHHHHHHH (8 digits)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %%      a single %\n  %b      ARGUMENT as a string with \'\\\' escapes interpreted,\n          except that octal escapes should have a leading 0 like \\0NNN\n  %q      ARGUMENT is printed in a format that can be reused as shell input,\n          escaping non-printable characters with the POSIX $\'\' syntax\n\nand all C format specifications ending with one of diouxXfeEgGcs, with\nARGUMENTs converted to proper type first.  Variable widths are handled.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nYour shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                    ,5);
  __printf_chk(2,uVar5,"printf");
  pcVar4 = "[";
  local_a8 = &_LC18;
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
    iVar2 = strcmp("printf",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "printf";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_00101bd5;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","printf");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_00101bd5:
      iVar2 = strncmp(pcVar6,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar6 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar6,pFVar1);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","printf");
    if (pcVar4 == "printf") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_0010195a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 main(int param_1,undefined8 *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  exit_status = 0;
  pcVar2 = getenv("POSIXLY_CORRECT");
  posixly_correct = pcVar2 != (char *)0x0;
  if (param_1 == 2) {
    pcVar2 = (char *)param_2[1];
    iVar1 = strcmp(pcVar2,"--help");
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
    iVar1 = strcmp(pcVar2,"--version");
    if (iVar1 == 0) {
      uVar3 = proper_name_lite("David MacKenzie","David MacKenzie");
      version_etc(_stdout,"printf","GNU coreutils",_Version,uVar3,0);
      return 0;
    }
    iVar1 = strcmp(pcVar2,"--");
    if (iVar1 == 0) goto LAB_00102992;
  }
  else {
    if (param_1 < 2) {
LAB_00102992:
      uVar3 = dcgettext(0,"missing operand",5);
      error(0,0,uVar3);
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    iVar1 = strcmp((char *)param_2[1],"--");
    if (iVar1 == 0) {
      param_1 = param_1 + -1;
      param_2 = param_2 + 1;
    }
  }
  uVar3 = param_2[1];
  param_1 = param_1 + -2;
  param_2 = param_2 + 2;
  do {
    iVar1 = print_formatted(uVar3,param_1,param_2);
    param_1 = param_1 - iVar1;
    param_2 = param_2 + iVar1;
    if (iVar1 < 1) {
      if (param_1 < 1) {
        return exit_status;
      }
      uVar3 = quote(*param_2);
      uVar4 = dcgettext(0,"warning: ignoring excess arguments, starting with %s",5);
      error(0,0,uVar4,uVar3);
      return exit_status;
    }
  } while (0 < param_1);
  return exit_status;
}


