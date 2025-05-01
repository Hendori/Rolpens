
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

char * human_readable(uintmax_t n,char *buf,int opts,uintmax_t from_block_size,
                     uintmax_t to_block_size)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  lconv *plVar13;
  ulong uVar14;
  size_t sVar15;
  ulong uVar16;
  ulong uVar17;
  void *pvVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  char *pcVar22;
  void *__src;
  uint uVar23;
  int iVar24;
  ulong uVar25;
  char *pcVar26;
  ulong uVar27;
  byte *pbVar28;
  char *__s;
  char *pcVar29;
  long in_FS_OFFSET;
  bool bVar30;
  longdouble lVar31;
  longdouble lVar32;
  longdouble lVar33;
  char *local_c0;
  uint local_b8;
  char buf_1 [41];
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  uVar20 = opts & 0x20;
  local_b8 = opts & 3;
  uVar11 = (-(uint)(uVar20 == 0) & 0xffffffe8) + 0x400;
  plVar13 = localeconv();
  pcVar22 = plVar13->decimal_point;
  uVar14 = strlen(pcVar22);
  pbVar28 = (byte *)plVar13->grouping;
  __s = plVar13->thousands_sep;
  if (0xf < uVar14 - 1) {
    uVar14 = 1;
    pcVar22 = ".";
  }
  sVar15 = strlen(__s);
  if (0x10 < sVar15) {
    __s = "";
  }
  local_c0 = buf + 0x287;
  uVar12 = (uint)uVar14;
  pcVar29 = local_c0;
  pcVar26 = local_c0;
  if (from_block_size < to_block_size) {
    if ((from_block_size == 0) ||
       (uVar17 = to_block_size / from_block_size, to_block_size % from_block_size != 0))
    goto LAB_001000e9;
    uVar16 = n / uVar17;
    uVar27 = (n % uVar17) * 10;
    uVar9 = uVar27 / uVar17;
    uVar25 = (uVar27 % uVar17) * 2;
    auVar8._8_8_ = uVar25;
    auVar8._0_8_ = uVar16;
    uVar27 = uVar9 & 0xffffffff;
    uVar21 = (uint)uVar9;
    if (uVar25 < uVar17) {
      uVar23 = (uint)(uVar25 != 0);
    }
    else {
      uVar23 = (uVar17 < uVar25) + 2;
    }
    if ((opts & 0x10U) == 0) goto LAB_001007f2;
LAB_001005eb:
    uVar21 = (uint)uVar27;
    uVar16 = auVar8._0_8_;
    uVar25 = (ulong)uVar11;
    iVar24 = 0;
    uVar17 = uVar16;
    if (uVar25 <= uVar16) {
LAB_00100771:
      uVar16 = uVar17 / uVar25;
      uVar21 = (int)uVar27 + (int)(uVar17 % uVar25) * 10;
      uVar27 = uVar21 / uVar25;
      uVar1 = ((int)uVar23 >> 1) + (uVar21 % uVar11) * 2;
      uVar21 = (uint)uVar27;
      uVar23 = uVar23 + uVar1;
      if (uVar1 < uVar11) {
        uVar23 = (uint)(uVar23 != 0);
      }
      else {
        uVar23 = (uVar11 < uVar23) + 2;
      }
      iVar24 = iVar24 + 1;
      if (uVar25 <= uVar16) goto code_r0x00100767;
      if (uVar16 < 10) {
        if (local_b8 == 1) {
          if ((uVar21 & 1) + uVar23 < 3) goto LAB_00100aee;
LAB_00100a5a:
          cVar10 = (char)uVar27 + '1';
          if (uVar21 == 9) {
            uVar17 = uVar16 + 1;
            bVar30 = uVar16 == 9;
            uVar16 = uVar17;
            if (bVar30) goto LAB_00100648;
            uVar23 = 0;
LAB_00100afb:
            if ((opts & 8U) != 0) goto LAB_00100aa8;
            cVar10 = '0';
          }
        }
        else {
          if ((local_b8 == 0) && (uVar23 != 0)) goto LAB_00100a5a;
LAB_00100aee:
          cVar10 = (char)uVar27 + '0';
          if (uVar21 == 0) goto LAB_00100afb;
        }
        buf[0x286] = cVar10;
        pcVar29 = buf + (0x286 - uVar14);
        uVar17 = uVar14 & 0xffffffff;
        if (uVar12 < 8) {
          if ((uVar14 & 4) == 0) {
            if ((uVar12 != 0) && (*pcVar29 = *pcVar22, (uVar14 & 2) != 0)) {
              *(undefined2 *)(buf + uVar17 + (0x284 - uVar14)) =
                   *(undefined2 *)(pcVar22 + (uVar17 - 2));
            }
          }
          else {
            *(undefined4 *)pcVar29 = *(undefined4 *)pcVar22;
            *(undefined4 *)(buf + uVar17 + (0x282 - uVar14)) =
                 *(undefined4 *)(pcVar22 + (uVar17 - 4));
          }
        }
        else {
          *(undefined8 *)pcVar29 = *(undefined8 *)pcVar22;
          *(undefined8 *)(buf + (uVar14 & 0xffffffff) + (0x27e - uVar14)) =
               *(undefined8 *)(pcVar22 + ((uVar14 & 0xffffffff) - 8));
          lVar19 = (long)pcVar29 - ((ulong)(buf + (0x28e - uVar14)) & 0xfffffffffffffff8);
          uVar21 = (int)lVar19 + uVar12 & 0xfffffff8;
          if (7 < uVar21) {
            uVar23 = 0;
            do {
              uVar17 = (ulong)uVar23;
              uVar23 = uVar23 + 8;
              *(undefined8 *)(((ulong)(buf + (0x28e - uVar14)) & 0xfffffffffffffff8) + uVar17) =
                   *(undefined8 *)(pcVar22 + (uVar17 - lVar19));
            } while (uVar23 < uVar21);
          }
        }
        uVar23 = 0;
LAB_00100aa8:
        uVar21 = 0;
        pcVar26 = pcVar29;
        if (local_b8 != 1) goto LAB_0010060f;
        goto LAB_00100648;
      }
    }
LAB_001005ff:
    if (local_b8 == 1) {
      if ((int)((((uint)uVar16 & 1) + uVar23 != 0) + uVar21) < 6) goto LAB_00100648;
LAB_00100620:
      uVar16 = uVar16 + 1;
      pcVar29 = pcVar26;
      if ((((opts & 0x10U) == 0) || (uVar11 != uVar16)) || (iVar24 == 10)) goto LAB_00100648;
      iVar24 = iVar24 + 1;
      if ((opts & 8U) == 0) {
        pcVar26[-1] = '0';
        pcVar26 = pcVar26 + ~uVar14;
        uVar17 = uVar14 & 0xffffffff;
        if (uVar12 < 8) {
          if ((uVar14 & 4) == 0) {
            if ((uVar12 != 0) && (*pcVar26 = *pcVar22, (uVar14 & 2) != 0)) {
              *(undefined2 *)(pcVar26 + (uVar17 - 2)) = *(undefined2 *)(pcVar22 + (uVar17 - 2));
            }
          }
          else {
            *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
            *(undefined4 *)(pcVar26 + (uVar17 - 4)) = *(undefined4 *)(pcVar22 + (uVar17 - 4));
          }
        }
        else {
          *(undefined8 *)pcVar26 = *(undefined8 *)pcVar22;
          *(undefined8 *)(pcVar26 + ((uVar14 & 0xffffffff) - 8)) =
               *(undefined8 *)(pcVar22 + ((uVar14 & 0xffffffff) - 8));
          lVar19 = (long)pcVar26 - ((ulong)(pcVar26 + 8) & 0xfffffffffffffff8);
          uVar12 = (int)lVar19 + uVar12 & 0xfffffff8;
          if (7 < uVar12) {
            uVar21 = 0;
            do {
              uVar14 = (ulong)uVar21;
              uVar21 = uVar21 + 8;
              *(undefined8 *)(((ulong)(pcVar26 + 8) & 0xfffffffffffffff8) + uVar14) =
                   *(undefined8 *)(pcVar22 + (uVar14 - lVar19));
            } while (uVar21 < uVar12);
          }
        }
      }
      pcVar26[-1] = '1';
      pcVar29 = pcVar26 + -1;
    }
    else {
LAB_0010060f:
      pcVar26 = pcVar29;
      if ((local_b8 == 0) && (0 < (int)(uVar23 + uVar21))) goto LAB_00100620;
LAB_00100648:
      do {
        pcVar29 = pcVar29 + -1;
        *pcVar29 = (char)uVar16 + (char)(uVar16 / 10) * -10 + '0';
        bVar30 = 9 < uVar16;
        uVar16 = uVar16 / 10;
      } while (bVar30);
    }
  }
  else {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = to_block_size;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = from_block_size;
    if (from_block_size % to_block_size == 0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = SUB168(auVar5 / auVar4,0);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = n;
      auVar8 = auVar6 * auVar7;
      uVar16 = auVar8._0_8_;
      if (auVar8._8_8_ == 0) {
        uVar23 = 0;
        uVar27 = 0;
        uVar21 = 0;
        if ((opts & 0x10U) != 0) goto LAB_001005eb;
LAB_001007f2:
        iVar24 = -1;
        goto LAB_001005ff;
      }
    }
LAB_001000e9:
    lVar31 = (longdouble)(long)from_block_size;
    if ((long)from_block_size < 0) {
      lVar31 = lVar31 + (longdouble)__LC3;
    }
    if ((long)to_block_size < 0) {
      lVar31 = lVar31 / ((longdouble)(long)to_block_size + (longdouble)__LC3);
      if ((long)n < 0) goto LAB_00100360;
LAB_00100126:
      lVar31 = (longdouble)(long)n * lVar31;
      if ((opts & 0x10U) != 0) goto LAB_00100133;
LAB_00100450:
      __sprintf_chk(buf,2,0xffffffffffffffff,"%.0Lf");
      uVar17 = strlen(buf);
      iVar24 = -1;
      sVar15 = uVar17;
    }
    else {
      lVar31 = lVar31 / (longdouble)(long)to_block_size;
      if (-1 < (long)n) goto LAB_00100126;
LAB_00100360:
      lVar31 = ((longdouble)(long)n + (longdouble)__LC3) * lVar31;
      if ((opts & 0x10U) == 0) goto LAB_00100450;
LAB_00100133:
      iVar24 = 0;
      lVar33 = (longdouble)(int)uVar11;
      do {
        lVar32 = lVar33;
        iVar24 = iVar24 + 1;
        lVar33 = lVar32 * (longdouble)(int)uVar11;
        if (lVar31 < lVar33) break;
      } while (iVar24 != 10);
      if ((local_b8 == 1) || (__LC4 <= lVar31 / lVar32)) {
        __sprintf_chk(buf,2,0xffffffffffffffff,"%.1Lf");
        uVar17 = strlen(buf);
      }
      else {
        __sprintf_chk(buf,2,0xffffffffffffffff,"%.1Lf");
        uVar17 = strlen(buf);
      }
      if ((uVar14 + 2 + (ulong)(uVar20 == 0) < uVar17) ||
         (((opts & 8U) != 0 && (buf[uVar17 - 1] == '0')))) {
        __sprintf_chk(buf,2,0xffffffffffffffff,"%.0Lf");
        uVar17 = strlen(buf);
        sVar15 = uVar17;
      }
      else {
        sVar15 = uVar17 - (uVar14 + 1);
      }
    }
    pcVar29 = local_c0 + -uVar17;
    pcVar26 = pcVar29 + sVar15;
    memmove(pcVar29,buf,uVar17);
  }
  if ((opts & 4U) != 0) {
    sVar15 = strlen(__s);
    pvVar18 = (void *)__memcpy_chk(buf_1,pcVar29,(long)pcVar26 - (long)pcVar29,0x29);
    uVar17 = 0xffffffffffffffff;
    uVar14 = (long)pcVar26 - (long)pcVar29;
    while( true ) {
      bVar2 = *pbVar28;
      if (bVar2 == 0) {
        if (uVar14 < uVar17) {
          uVar17 = uVar14;
        }
        uVar27 = uVar14 - uVar17;
        __src = (void *)((long)pvVar18 + uVar27);
      }
      else {
        if (bVar2 < 0x7f) {
          uVar17 = (long)(char)bVar2;
          if (uVar14 < (ulong)(long)(char)bVar2) {
            uVar17 = uVar14;
          }
          uVar27 = uVar14 - uVar17;
          __src = (void *)((long)pvVar18 + uVar27);
          uVar14 = uVar17;
        }
        else {
          uVar27 = 0;
          __src = pvVar18;
        }
        pbVar28 = pbVar28 + 1;
        uVar17 = uVar14;
      }
      pcVar29 = pcVar26 + -uVar17;
      memcpy(pcVar29,__src,uVar17);
      if (uVar27 == 0) break;
      pcVar26 = pcVar29 + -sVar15;
      memcpy(pcVar26,__s,sVar15);
      uVar14 = uVar27;
    }
  }
  pcVar22 = local_c0;
  if ((opts & 0x80U) == 0) goto LAB_00100559;
  if (iVar24 == -1) {
    if (to_block_size < 2) {
      iVar24 = 0;
      goto LAB_00100545;
    }
    iVar24 = 1;
    uVar14 = 1;
    do {
      uVar14 = uVar14 * uVar11;
      if (to_block_size <= uVar14) break;
      iVar24 = iVar24 + 1;
    } while (iVar24 != 10);
    if ((opts & 0x40U) != 0) {
      local_c0 = buf + 0x288;
      buf[0x287] = ' ';
    }
LAB_0010085a:
    pcVar22 = local_c0 + 1;
    if ((uVar20 == 0) && (iVar24 == 1)) {
      *local_c0 = 'k';
      goto joined_r0x00100ad5;
    }
    *local_c0 = ""[iVar24];
    if ((opts & 0x100U) == 0) goto LAB_00100559;
    if (uVar20 != 0) {
      local_c0[1] = 'i';
      pcVar22 = local_c0 + 2;
    }
  }
  else {
LAB_00100545:
    if ((opts & 0x100U) == 0 && iVar24 == 0) goto LAB_00100559;
    if ((opts & 0x40U) != 0) {
      local_c0 = buf + 0x288;
      buf[0x287] = ' ';
    }
    pcVar22 = local_c0;
    if (iVar24 != 0) goto LAB_0010085a;
joined_r0x00100ad5:
    if ((opts & 0x100U) == 0) goto LAB_00100559;
  }
  *pcVar22 = 'B';
  pcVar22 = pcVar22 + 1;
LAB_00100559:
  local_c0 = pcVar22;
  *local_c0 = '\0';
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar29;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00100767:
  uVar17 = uVar16;
  if (iVar24 == 10) goto LAB_001005ff;
  goto LAB_00100771;
}



/* WARNING: Unknown calling convention */

strtol_error human_options(char *spec,int *opts,uintmax_t *block_size)

{
  char cVar1;
  int iVar2;
  strtol_error sVar3;
  char *pcVar4;
  uintmax_t uVar5;
  uint uVar6;
  long in_FS_OFFSET;
  char *ptr;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((spec == (char *)0x0) && (spec = getenv("BLOCK_SIZE"), spec == (char *)0x0)) &&
     (spec = getenv("BLOCKSIZE"), spec == (char *)0x0)) {
    pcVar4 = getenv("POSIXLY_CORRECT");
    *block_size = (ulong)(-(uint)(pcVar4 == (char *)0x0) & 0x200) + 0x200;
    sVar3 = LONGINT_OK;
    *opts = 0;
  }
  else {
    uVar6 = 0;
    if (*spec == '\'') {
      spec = spec + 1;
      uVar6 = 4;
    }
    iVar2 = argmatch(spec,block_size_args,block_size_opts,4);
    if (iVar2 < 0) {
      sVar3 = xstrtoumax(spec,&ptr,0,block_size,"eEgGkKmMpPtTyYzZ0");
      if (sVar3 == LONGINT_OK) {
        cVar1 = *spec;
        while (9 < (byte)(cVar1 - 0x30U)) {
          if (ptr == spec) {
            if (ptr[-1] == 'B') {
              uVar6 = uVar6 | 0x180;
              if (ptr[-2] != 'i') break;
            }
            else {
              uVar6 = uVar6 | 0x80;
            }
            uVar6 = uVar6 | 0x20;
            break;
          }
          pcVar4 = spec + 1;
          spec = spec + 1;
          cVar1 = *pcVar4;
        }
        uVar5 = *block_size;
        *opts = uVar6;
      }
      else {
        *opts = 0;
        uVar5 = *block_size;
      }
      if (uVar5 == 0) {
        pcVar4 = getenv("POSIXLY_CORRECT");
        *block_size = (ulong)(-(uint)(pcVar4 == (char *)0x0) & 0x200) + 0x200;
        sVar3 = LONGINT_INVALID;
      }
    }
    else {
      *block_size = 1;
      sVar3 = LONGINT_OK;
      *opts = uVar6 | block_size_opts[iVar2];
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


