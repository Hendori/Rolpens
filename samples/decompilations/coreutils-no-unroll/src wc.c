
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_counts(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,char *param_6)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined5 *puVar3;
  undefined5 *puVar4;
  long in_FS_OFFSET;
  undefined1 auStack_58 [24];
  long local_40;
  
  puVar3 = (undefined5 *)0x101b7d;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (print_lines != '\0') {
    uVar2 = umaxtostr(param_1,auStack_58);
    puVar3 = &format_sp_int_0;
    __printf_chk(2,0x101b7d,number_width,uVar2);
  }
  puVar4 = puVar3;
  if (print_words != '\0') {
    uVar2 = umaxtostr(param_2,auStack_58);
    puVar4 = &format_sp_int_0;
    __printf_chk(2,puVar3,number_width,uVar2);
  }
  puVar3 = puVar4;
  if (print_chars != '\0') {
    uVar2 = umaxtostr(param_3,auStack_58);
    puVar3 = &format_sp_int_0;
    __printf_chk(2,puVar4,number_width,uVar2);
  }
  puVar4 = puVar3;
  if (print_bytes != '\0') {
    uVar2 = umaxtostr(param_4,auStack_58);
    puVar4 = &format_sp_int_0;
    __printf_chk(2,puVar3,number_width,uVar2);
  }
  if (print_linelength != '\0') {
    uVar2 = imaxtostr(param_5,auStack_58);
    __printf_chk(2,puVar4,number_width,uVar2);
  }
  if (param_6 != (char *)0x0) {
    pcVar1 = strchr(param_6,10);
    if (pcVar1 != (char *)0x0) {
      param_6 = (char *)quotearg_n_style_colon(0,3,param_6);
    }
    __printf_chk(2,&_LC0,param_6);
  }
  pcVar1 = _stdout->_IO_write_ptr;
  if (pcVar1 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = '\n';
  }
  else {
    __overflow(_stdout,10);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong wc(undefined4 param_1,long param_2,int *param_3,long param_4)

{
  char *pcVar1;
  long *plVar2;
  char cVar3;
  int __fd;
  bool bVar4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  uint5 uVar11;
  undefined1 auVar12 [13];
  undefined1 auVar13 [14];
  undefined1 auVar14 [15];
  undefined1 auVar15 [13];
  undefined1 auVar16 [14];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  uint7 uVar19;
  undefined1 auVar20 [15];
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  char *pcVar27;
  char *pcVar28;
  char *pcVar29;
  char *pcVar30;
  char *pcVar31;
  char *pcVar32;
  char *pcVar33;
  char *pcVar34;
  char *pcVar35;
  undefined1 auVar36 [15];
  unkuint9 Var37;
  undefined1 auVar38 [11];
  undefined1 auVar39 [13];
  undefined1 auVar40 [13];
  undefined1 auVar41 [14];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  uint6 uVar44;
  undefined1 *puVar45;
  int iVar46;
  size_t sVar47;
  ssize_t sVar48;
  long lVar49;
  int *piVar50;
  __off_t _Var51;
  undefined8 uVar52;
  byte *pbVar53;
  __off_t _Var54;
  ulong uVar55;
  undefined1 *puVar56;
  ulong uVar57;
  ulong uVar58;
  byte *__buf;
  uint *puVar59;
  wchar_t __c;
  byte bVar60;
  uint uVar61;
  long lVar62;
  long lVar63;
  char *pcVar64;
  char *pcVar65;
  uint uVar66;
  long in_FS_OFFSET;
  byte bVar67;
  long lVar68;
  undefined1 auVar69 [16];
  undefined1 auStack_40030 [262144];
  
  puVar45 = &stack0xffffffffffffffd0;
  do {
    puVar56 = puVar45;
    *(undefined8 *)(puVar56 + -0x1000) = *(undefined8 *)(puVar56 + -0x1000);
    puVar45 = puVar56 + -0x1000;
  } while (puVar56 + -0x1000 != auStack_40030);
  *(undefined4 *)(puVar56 + -0x1094) = param_1;
  *(long *)(puVar56 + -0x1050) = param_2;
  *(undefined8 *)(puVar56 + 0x3eff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(long *)(puVar56 + -0x1048) = param_2;
  if (param_2 == 0) {
    *(undefined8 *)(puVar56 + -0x10b0) = 0x100e9c;
    uVar52 = dcgettext(0,"standard input",5);
    *(undefined8 *)(puVar56 + -0x1048) = uVar52;
  }
  *(undefined8 *)(puVar56 + -0x10b0) = 0x10026f;
  sVar47 = __ctype_get_mb_cur_max();
  bVar60 = print_bytes;
  if (sVar47 < 2) {
    puVar56[-0x103d] = 0;
    if (print_bytes == 0) {
      bVar60 = print_chars;
    }
  }
  else {
    puVar56[-0x103d] = print_chars;
  }
  if ((print_words == '\0') && (print_linelength == '\0')) {
    if ((bVar60 == 1) && (puVar56[-0x103d] == '\0')) {
      if (print_lines != '\0') {
        *(undefined8 *)(puVar56 + -0x10b0) = 0x100f5d;
        fdadvise(*(undefined4 *)(puVar56 + -0x1094),0,0,2);
        if (print_lines != '\0') {
LAB_001006ec:
          if (use_avx2_1 == '\0') {
            if (debug == '\0') {
              if ((_DAT_001040cc & 0x400) != 0) {
LAB_00100e4c:
                use_avx2_1 = '\x01';
                goto LAB_00100e53;
              }
            }
            else {
              if ((_DAT_001040cc & 0x400) != 0) {
                *(undefined8 *)(puVar56 + -0x10b0) = 0x100e3e;
                uVar52 = dcgettext(0,"using avx2 hardware support",5);
                *(undefined8 *)(puVar56 + -0x10b0) = 0x100e4c;
                error(0,0,uVar52);
                goto LAB_00100e4c;
              }
              *(undefined8 *)(puVar56 + -0x10b0) = 0x10108d;
              uVar52 = dcgettext(0,"avx2 support not detected",5);
              *(undefined8 *)(puVar56 + -0x10b0) = 0x10109b;
              error(0,0,uVar52);
            }
            use_avx2_1 = -1;
LAB_001006ff:
            bVar4 = false;
            lVar49 = 0;
            pcVar64 = puVar56 + -0x1018;
            lVar62 = 0;
            while( true ) {
              *(undefined8 *)(puVar56 + -0x10b0) = 0x100721;
              uVar58 = read(*(int *)(puVar56 + -0x1094),pcVar64,0x40000);
              if ((long)uVar58 < 1) break;
              lVar49 = lVar49 + uVar58;
              pcVar1 = pcVar64 + uVar58;
              if (bVar4) {
                *pcVar1 = '\n';
                lVar63 = 0;
                pcVar65 = pcVar64;
                while( true ) {
                  *(undefined8 *)(puVar56 + -0x10b0) = 0x100bda;
                  pcVar65 = (char *)rawmemchr(pcVar65,10);
                  if (pcVar1 <= pcVar65) break;
                  lVar63 = lVar63 + 1;
                  pcVar65 = pcVar65 + 1;
                }
                lVar62 = lVar62 + lVar63;
                lVar63 = lVar63 * 0xf;
              }
              else if (pcVar64 < pcVar1) {
                if (uVar58 - 1 < 0xf) {
                  lVar63 = 0;
                  pcVar65 = pcVar64;
LAB_00100828:
                  lVar63 = lVar63 + (ulong)(*pcVar65 == '\n');
                  if ((((((pcVar65 + 1 < pcVar1) &&
                         (lVar63 = lVar63 + (ulong)(pcVar65[1] == '\n'), pcVar65 + 2 < pcVar1)) &&
                        (lVar63 = lVar63 + (ulong)(pcVar65[2] == '\n'), pcVar65 + 3 < pcVar1)) &&
                       ((lVar63 = lVar63 + (ulong)(pcVar65[3] == '\n'), pcVar65 + 4 < pcVar1 &&
                        (lVar63 = lVar63 + (ulong)(pcVar65[4] == '\n'), pcVar65 + 5 < pcVar1)))) &&
                      ((lVar63 = lVar63 + (ulong)(pcVar65[5] == '\n'), pcVar65 + 6 < pcVar1 &&
                       ((lVar63 = lVar63 + (ulong)(pcVar65[6] == '\n'), pcVar65 + 7 < pcVar1 &&
                        (lVar63 = lVar63 + (ulong)(pcVar65[7] == '\n'), pcVar65 + 8 < pcVar1))))))
                     && ((lVar63 = lVar63 + (ulong)(pcVar65[8] == '\n'), pcVar65 + 9 < pcVar1 &&
                         ((((lVar63 = lVar63 + (ulong)(pcVar65[9] == '\n'), pcVar65 + 10 < pcVar1 &&
                            (lVar63 = lVar63 + (ulong)(pcVar65[10] == '\n'), pcVar65 + 0xb < pcVar1)
                            ) && (lVar63 = lVar63 + (ulong)(pcVar65[0xb] == '\n'),
                                 pcVar65 + 0xc < pcVar1)) &&
                          ((lVar63 = lVar63 + (ulong)(pcVar65[0xc] == '\n'), pcVar65 + 0xd < pcVar1
                           && (lVar63 = lVar63 + (ulong)(pcVar65[0xd] == '\n'),
                              pcVar65 + 0xe < pcVar1)))))))) {
                    lVar63 = lVar63 + (ulong)(pcVar65[0xe] == '\n');
                  }
                }
                else {
                  lVar63 = 0;
                  lVar68 = 0;
                  uVar57 = uVar58 & 0xfffffffffffffff0;
                  pcVar65 = pcVar64;
                  do {
                    cVar3 = *pcVar65;
                    pcVar21 = pcVar65 + 1;
                    pcVar22 = pcVar65 + 2;
                    pcVar23 = pcVar65 + 3;
                    pcVar24 = pcVar65 + 4;
                    pcVar25 = pcVar65 + 5;
                    pcVar26 = pcVar65 + 6;
                    pcVar27 = pcVar65 + 7;
                    pcVar28 = pcVar65 + 8;
                    pcVar29 = pcVar65 + 9;
                    pcVar30 = pcVar65 + 10;
                    pcVar31 = pcVar65 + 0xb;
                    pcVar32 = pcVar65 + 0xc;
                    pcVar33 = pcVar65 + 0xd;
                    pcVar34 = pcVar65 + 0xe;
                    pcVar35 = pcVar65 + 0xf;
                    pcVar65 = pcVar65 + 0x10;
                    auVar69[0] = -(cVar3 == _LC4);
                    auVar69[1] = -(*pcVar21 == UNK_00103441);
                    auVar69[2] = -(*pcVar22 == UNK_00103442);
                    auVar69[3] = -(*pcVar23 == UNK_00103443);
                    auVar69[4] = -(*pcVar24 == UNK_00103444);
                    auVar69[5] = -(*pcVar25 == UNK_00103445);
                    auVar69[6] = -(*pcVar26 == UNK_00103446);
                    auVar69[7] = -(*pcVar27 == UNK_00103447);
                    auVar69[8] = -(*pcVar28 == UNK_00103448);
                    auVar69[9] = -(*pcVar29 == UNK_00103449);
                    auVar69[10] = -(*pcVar30 == UNK_0010344a);
                    auVar69[0xb] = -(*pcVar31 == UNK_0010344b);
                    auVar69[0xc] = -(*pcVar32 == UNK_0010344c);
                    auVar69[0xd] = -(*pcVar33 == UNK_0010344d);
                    auVar69[0xe] = -(*pcVar34 == UNK_0010344e);
                    auVar69[0xf] = -(*pcVar35 == UNK_0010344f);
                    auVar69 = auVar69 & __LC5;
                    uVar61 = CONCAT13(0,CONCAT12(auVar69[9],(ushort)auVar69[8]));
                    auVar6[0xd] = 0;
                    auVar6._0_13_ = auVar69._0_13_;
                    auVar6[0xe] = auVar69[7];
                    auVar7[0xc] = auVar69[6];
                    auVar7._0_12_ = auVar69._0_12_;
                    auVar7._13_2_ = auVar6._13_2_;
                    auVar8[0xb] = 0;
                    auVar8._0_11_ = auVar69._0_11_;
                    auVar8._12_3_ = auVar7._12_3_;
                    auVar14[10] = auVar69[5];
                    auVar14._0_10_ = auVar69._0_10_;
                    auVar14._11_4_ = auVar8._11_4_;
                    auVar17[9] = 0;
                    auVar17._0_9_ = auVar69._0_9_;
                    auVar17._10_5_ = auVar14._10_5_;
                    auVar18[8] = auVar69[4];
                    auVar18._0_8_ = auVar69._0_8_;
                    auVar18._9_6_ = auVar17._9_6_;
                    uVar19 = auVar18._8_7_;
                    auVar36._7_8_ = 0;
                    auVar36._0_7_ = uVar19;
                    Var37 = CONCAT81(SUB158(auVar36 << 0x40,7),auVar69[3]);
                    auVar42._9_6_ = 0;
                    auVar42._0_9_ = Var37;
                    auVar38._1_10_ = SUB1510(auVar42 << 0x30,5);
                    auVar38[0] = auVar69[2];
                    auVar43._11_4_ = 0;
                    auVar43._0_11_ = auVar38;
                    auVar39._1_12_ = SUB1512(auVar43 << 0x20,3);
                    auVar39[0] = auVar69[1];
                    auVar20[1] = 0;
                    auVar20[0] = auVar69[0];
                    auVar20._2_13_ = auVar39;
                    auVar9[0xc] = auVar69[0xb];
                    auVar9._0_12_ = ZEXT112(auVar69[0xc]) << 0x40;
                    auVar10._10_3_ = auVar9._10_3_;
                    auVar10._0_10_ = (unkuint10)auVar69[10] << 0x40;
                    uVar11 = auVar10._8_5_;
                    auVar40._5_8_ = 0;
                    auVar40._0_5_ = uVar11;
                    auVar12[4] = auVar69[9];
                    auVar12._0_4_ = uVar61;
                    auVar12[5] = 0;
                    auVar12._6_7_ = SUB137(auVar40 << 0x40,6);
                    auVar15._4_9_ = auVar12._4_9_;
                    auVar15._0_4_ = uVar61 & 0xffff;
                    auVar5._10_2_ = 0;
                    auVar5._0_10_ = auVar20._0_10_;
                    auVar5._12_2_ = (short)Var37;
                    uVar44 = CONCAT42(auVar5._10_4_,auVar38._0_2_);
                    auVar41._6_8_ = 0;
                    auVar41._0_6_ = uVar44;
                    auVar13._4_2_ = auVar39._0_2_;
                    auVar13._0_4_ = auVar20._0_4_;
                    auVar13._6_8_ = SUB148(auVar41 << 0x40,6);
                    auVar16._4_10_ = auVar13._4_10_;
                    auVar16._0_4_ = auVar20._0_4_ & 0xffff;
                    lVar63 = lVar63 + (auVar16._0_8_ & 0xffffffff) + ((ulong)uVar44 & 0xffffffff) +
                             ((ulong)CONCAT24(auVar14._10_2_,(uint)auVar18._8_2_) & 0xffffffff) +
                             ((ulong)(uVar19 >> 0x20) & 0xffff) + (auVar15._0_8_ & 0xffffffff) +
                             ((ulong)uVar11 & 0xffffffff) +
                             ((ulong)CONCAT14(auVar69[0xd],(uint)auVar69[0xc]) & 0xffffffff) +
                             (ulong)auVar69[0xe];
                    lVar68 = lVar68 + (ulong)auVar13._4_4_ + (ulong)(auVar5._10_4_ >> 0x10) +
                             (ulong)auVar14._10_2_ + (ulong)(uVar19 >> 0x30) + (ulong)auVar12._4_4_
                             + (ulong)(uVar11 >> 0x20) + (ulong)auVar69[0xd] + (ulong)auVar69[0xf];
                  } while (pcVar64 + uVar57 != pcVar65);
                  lVar63 = lVar63 + lVar68;
                  pcVar65 = pcVar64 + uVar57;
                  if (uVar58 != uVar57) goto LAB_00100828;
                }
                lVar62 = lVar62 + lVar63;
                lVar63 = lVar63 * 0xf;
              }
              else {
                lVar63 = 0;
              }
              bVar4 = lVar63 <= (long)uVar58;
            }
            *(long *)(puVar56 + -0x1068) = lVar62;
            *(long *)(puVar56 + -0x1088) = lVar49;
            if (uVar58 == 0) {
              uVar58 = 1;
              iVar46 = 0;
            }
            else {
              *(undefined8 *)(puVar56 + -0x10b0) = 0x100dc5;
              piVar50 = __errno_location();
              iVar46 = *piVar50;
              uVar58 = CONCAT71((int7)(uVar58 >> 8),iVar46 == 0);
            }
          }
          else {
            if (use_avx2_1 < '\x01') goto LAB_001006ff;
LAB_00100e53:
            *(undefined8 *)(puVar56 + -0x10b0) = 0x100e61;
            wc_lines_avx2(puVar56 + -0x1038,*(undefined4 *)(puVar56 + -0x1094));
            iVar46 = *(int *)(puVar56 + -0x1038);
            *(undefined8 *)(puVar56 + -0x1068) = *(undefined8 *)(puVar56 + -0x1030);
            uVar58 = CONCAT71((int7)((ulong)param_4 >> 8),iVar46 == 0);
            *(undefined8 *)(puVar56 + -0x1088) = *(undefined8 *)(puVar56 + -0x1028);
          }
          *(undefined8 *)(puVar56 + -0x1080) = 0;
          lVar49 = 0;
          lVar62 = 0;
          goto LAB_00100c50;
        }
      }
LAB_0010041a:
      iVar46 = *param_3;
      if (0 < iVar46) {
        *(undefined8 *)(puVar56 + -0x10b0) = 0x10042f;
        iVar46 = fstat(*(int *)(puVar56 + -0x1094),(stat *)(param_3 + 2));
        *param_3 = iVar46;
      }
      lVar49 = page_size;
      if ((iVar46 == 0) && ((param_3[8] & 0xd000U) == 0x8000)) {
        lVar62 = *(long *)(param_3 + 0xe);
        *(long *)(puVar56 + -0x1088) = lVar62;
        if (lVar62 < 0) goto LAB_001009ba;
        if (param_4 == -1) {
          *(undefined8 *)(puVar56 + -0x10b0) = 0x100fb0;
          _Var54 = lseek(*(int *)(puVar56 + -0x1094),0,1);
          if (*(long *)(puVar56 + -0x1088) % lVar49 == 0) {
            bVar60 = (byte)~(byte)((ulong)_Var54 >> 0x38) >> 7;
            goto LAB_00100fd0;
          }
          if (_Var54 <= *(long *)(puVar56 + -0x1088)) {
            plVar2 = (long *)(puVar56 + -0x1088);
            *plVar2 = *plVar2 - _Var54;
            if (*plVar2 != 0) goto LAB_00100489;
          }
          goto LAB_001009ba;
        }
        bVar60 = 1;
        _Var54 = lVar62 % page_size;
        if (_Var54 != 0) {
LAB_00100489:
          *(undefined8 *)(puVar56 + -0x10b0) = 0x10049c;
          _Var54 = lseek(*(int *)(puVar56 + -0x1094),*(__off_t *)(puVar56 + -0x1088),1);
          if (-1 < _Var54) {
            uVar58 = 1;
            lVar49 = 0;
            *(undefined8 *)(puVar56 + -0x1080) = 0;
            *(undefined8 *)(puVar56 + -0x1068) = 0;
            iVar46 = 0;
            lVar62 = 0;
            goto LAB_00100c50;
          }
          goto LAB_001009ba;
        }
LAB_00100fd0:
        lVar49 = 0x201;
        if (*(long *)(param_3 + 0x10) - 1U < 0x2000000000000000) {
          lVar49 = *(long *)(param_3 + 0x10) + 1;
        }
        lVar49 = *(long *)(puVar56 + -0x1088) - *(long *)(puVar56 + -0x1088) % lVar49;
        if ((lVar49 <= _Var54) || (bVar60 == 0)) goto LAB_001009ba;
        *(undefined8 *)(puVar56 + -0x10b0) = 0x10102d;
        _Var51 = lseek(*(int *)(puVar56 + -0x1094),lVar49,1);
        if (_Var51 < 0) goto LAB_001009ba;
        *(long *)(puVar56 + -0x1088) = lVar49 - _Var54;
      }
      else {
LAB_001009ba:
        *(undefined8 *)(puVar56 + -0x1088) = 0;
      }
      __fd = *(int *)(puVar56 + -0x1094);
      *(undefined8 *)(puVar56 + -0x10b0) = 0x1009df;
      fdadvise(__fd,0,0,2);
      lVar49 = *(long *)(puVar56 + -0x1088);
      while( true ) {
        *(undefined8 *)(puVar56 + -0x10b0) = 0x100a08;
        sVar48 = read(__fd,puVar56 + -0x1018,0x40000);
        if (sVar48 == 0) break;
        if (sVar48 < 0) {
          *(long *)(puVar56 + -0x1088) = lVar49;
          *(undefined8 *)(puVar56 + -0x10b0) = 0x100f7a;
          piVar50 = __errno_location();
          *(undefined8 *)(puVar56 + -0x1080) = 0;
          *(undefined8 *)(puVar56 + -0x1068) = 0;
          iVar46 = *piVar50;
          uVar58 = (ulong)CONCAT31((int3)((uint)__fd >> 8),iVar46 == 0);
          lVar49 = 0;
          lVar62 = 0;
          goto LAB_00100c50;
        }
        lVar49 = lVar49 + sVar48;
      }
      *(long *)(puVar56 + -0x1088) = lVar49;
      uVar58 = 1;
      *(undefined8 *)(puVar56 + -0x1080) = 0;
      iVar46 = 0;
      *(undefined8 *)(puVar56 + -0x1068) = 0;
      lVar49 = 0;
      lVar62 = 0;
      goto LAB_00100c50;
    }
    *(undefined8 *)(puVar56 + -0x10b0) = 0x1006c4;
    fdadvise(*(undefined4 *)(puVar56 + -0x1094),0,0,2);
    if (puVar56[-0x103d] != '\x01') {
      if ((bVar60 != 0) && (print_lines == '\0')) goto LAB_0010041a;
      if (puVar56[-0x103d] == '\0') goto LAB_001006ec;
    }
  }
  else {
    *(undefined8 *)(puVar56 + -0x10b0) = 0x1002b4;
    fdadvise(*(undefined4 *)(puVar56 + -0x1094),0,0,2);
  }
  *(undefined8 *)(puVar56 + -0x10b0) = 0x1002b9;
  sVar47 = __ctype_get_mb_cur_max();
  if (1 < sVar47) {
    *(undefined8 *)(puVar56 + -0x10a0) = 0;
    uVar58 = 0;
    bVar60 = 0;
    uVar57 = 0;
    *(undefined8 *)(puVar56 + -0x1020) = 0;
    lVar49 = 0;
    pcVar64 = puVar56 + -0x1018;
    *(undefined8 *)(puVar56 + -0x1078) = 0;
    *(undefined8 *)(puVar56 + -0x1088) = 0;
    *(undefined8 *)(puVar56 + -0x1080) = 0;
    *(undefined8 *)(puVar56 + -0x1068) = 0;
LAB_00100528:
    *(ulong *)(puVar56 + -0x10a8) = uVar58;
    uVar55 = 0x40001;
    if (0x40000 < uVar58) {
      uVar55 = uVar58;
    }
    *(undefined8 *)(puVar56 + -0x10b0) = 0x100550;
    lVar62 = __read_chk(*(undefined4 *)(puVar56 + -0x1094),pcVar64 + uVar58,0x40000 - uVar58,
                        uVar55 - uVar58);
    uVar58 = *(ulong *)(puVar56 + -0x10a8);
    if (lVar62 == 0) {
      if (uVar58 == 0) goto LAB_00100f3e;
    }
    else if (lVar62 < 0) {
      *(undefined8 *)(puVar56 + -0x10b0) = 0x100c2b;
      piVar50 = __errno_location();
      iVar46 = *piVar50;
      uVar58 = CONCAT71((int7)(uVar57 >> 8),iVar46 == 0);
      goto LAB_00100c35;
    }
    *(long *)(puVar56 + -0x1088) = *(long *)(puVar56 + -0x1088) + lVar62;
    *(undefined1 **)(puVar56 + -0x10a8) = puVar56 + -0x1020;
    pcVar1 = pcVar64 + lVar62 + uVar58;
    *(long *)(puVar56 + -0x1070) = lVar62;
    *(char **)(puVar56 + -0x1060) = pcVar64;
    pcVar65 = pcVar64;
    do {
      uVar61 = (uint)uVar57;
      if ((bVar60 != 0) || (cVar3 = *pcVar65, cVar3 < '\0')) {
        uVar55 = (long)pcVar1 - (long)(pcVar65 + uVar58);
        *(undefined8 *)(puVar56 + -0x10b0) = 0x100a5b;
        uVar58 = rpl_mbrtoc32(puVar56 + -0x1038,pcVar65 + uVar58,uVar55,
                              *(undefined8 *)(puVar56 + -0x10a8));
        if (uVar58 <= uVar55) {
          *(ulong *)(puVar56 + -0x1090) = uVar58 + (uVar58 == 0);
          *(undefined8 *)(puVar56 + -0x10b0) = 0x100ad6;
          iVar46 = mbsinit(*(mbstate_t **)(puVar56 + -0x10a8));
          __c = *(wchar_t *)(puVar56 + -0x1038);
          uVar55 = *(ulong *)(puVar56 + -0x1090);
          bVar67 = iVar46 == 0;
          puVar59 = &switchD_00100afa::switchdataD_00101a40;
          switch(__c) {
          case L'\t':
            uVar58 = 0;
            goto LAB_00100675;
          case L'\n':
            uVar58 = 0;
            goto LAB_00100665;
          case L'\v':
            uVar58 = 0;
            uVar57 = 0;
            goto LAB_00100608;
          case L'\f':
          case L'\r':
            uVar58 = 0;
            goto LAB_0010062d;
          case L' ':
            uVar58 = 0;
            goto LAB_001006a5;
          }
          if ((bVar60 ^ 1) == uVar55) {
            uVar58 = 0;
            goto LAB_001005d5;
          }
          if (print_linelength != '\0') {
            *(ulong *)(puVar56 + -0x1058) = uVar55;
            puVar56[-0x1090] = bVar67;
            *(undefined8 *)(puVar56 + -0x10b0) = 0x100d8e;
            iVar46 = wcwidth(__c);
            bVar67 = puVar56[-0x1090];
            uVar55 = *(ulong *)(puVar56 + -0x1058);
            if (0 < iVar46) {
              *(long *)(puVar56 + -0x10a0) = *(long *)(puVar56 + -0x10a0) + (long)iVar46;
            }
            __c = *(wchar_t *)(puVar56 + -0x1038);
          }
          *(ulong *)(puVar56 + -0x1058) = uVar55;
          puVar56[-0x1090] = bVar67;
          *(wchar_t *)(puVar56 + -0x103c) = __c;
          *(undefined8 *)(puVar56 + -0x10b0) = 0x100b33;
          iVar46 = iswspace(__c);
          uVar55 = *(ulong *)(puVar56 + -0x1058);
          if (iVar46 == 0) {
            iVar46 = *(int *)(puVar56 + -0x103c);
            if (posixly_correct == 0) {
              if ((iVar46 == 0xa0) || (iVar46 == 0x2007)) goto LAB_00100d70;
              uVar66 = (uint)CONCAT71((int7)((ulong)puVar59 >> 8),iVar46 == 0x202f) |
                       (uint)(iVar46 == 0x2060);
              uVar57 = (ulong)(uVar66 ^ 1);
              *(ulong *)(puVar56 + -0x1080) =
                   *(long *)(puVar56 + -0x1080) + (ulong)(((uVar61 | uVar66) ^ 1) & 0xff);
            }
            else {
              *(ulong *)(puVar56 + -0x1080) =
                   *(long *)(puVar56 + -0x1080) + (ulong)((uVar61 ^ 1) & 0xff);
              uVar57 = (ulong)posixly_correct;
            }
          }
          else {
LAB_00100d70:
            uVar57 = 0;
          }
          uVar58 = 0;
          bVar67 = puVar56[-0x1090];
          goto LAB_00100608;
        }
        if (uVar58 == 0xfffffffffffffffe) {
          lVar62 = (long)pcVar1 - (long)pcVar65;
          bVar60 = lVar62 < 0x40000 && *(long *)(puVar56 + -0x1070) != 0;
          if ((bool)bVar60) {
            pcVar64 = *(char **)(puVar56 + -0x1060);
            *(long *)(puVar56 + -0x10a8) = lVar62;
            *(undefined8 *)(puVar56 + -0x10b0) = 0x100c17;
            __memmove_chk(pcVar64,pcVar65,lVar62,0x40001);
            uVar58 = *(ulong *)(puVar56 + -0x10a8);
            goto LAB_00100528;
          }
        }
        pcVar65 = pcVar65 + 1;
        uVar58 = 0;
        bVar60 = 0;
        *(ulong *)(puVar56 + -0x1080) = *(long *)(puVar56 + -0x1080) + (ulong)((uVar61 ^ 1) & 0xff);
        uVar57 = 1;
        **(undefined8 **)(puVar56 + -0x10a8) = 0;
        goto LAB_0010060f;
      }
      __c = (wchar_t)cVar3;
      *(wchar_t *)(puVar56 + -0x1038) = __c;
      bVar67 = bVar60;
      switch(cVar3) {
      case '\t':
        uVar55 = 1;
LAB_00100675:
        lVar62 = *(long *)(puVar56 + -0x10a0);
        uVar57 = 0;
        *(ulong *)(puVar56 + -0x10a0) =
             lVar62 + 8 +
             (((ulong)(lVar62 >> 0x3f) >> 0x3d) -
             (ulong)((int)lVar62 + ((uint)(lVar62 >> 0x3f) >> 0x1d) & 7));
        break;
      case '\n':
        uVar55 = 1;
LAB_00100665:
        *(long *)(puVar56 + -0x1068) = *(long *)(puVar56 + -0x1068) + 1;
        goto LAB_0010062d;
      case '\v':
        uVar57 = 0;
        uVar55 = 1;
        break;
      case '\f':
      case '\r':
        uVar55 = 1;
LAB_0010062d:
        lVar62 = *(long *)(puVar56 + -0x10a0);
        *(undefined8 *)(puVar56 + -0x10a0) = 0;
        if (lVar62 <= *(long *)(puVar56 + -0x1078)) {
          lVar62 = *(long *)(puVar56 + -0x1078);
        }
        uVar57 = 0;
        *(long *)(puVar56 + -0x1078) = lVar62;
        break;
      default:
        uVar55 = 1;
LAB_001005d5:
        *(ulong *)(puVar56 + -0x10a0) =
             *(long *)(puVar56 + -0x10a0) + (ulong)(byte)wc_isprint[(uint)__c];
        bVar60 = (&wc_isspace)[(uint)__c];
        *(ulong *)(puVar56 + -0x1080) =
             *(long *)(puVar56 + -0x1080) + (ulong)(((uVar61 | bVar60) ^ 1) & 0xff);
        uVar57 = (ulong)(bVar60 ^ 1);
        break;
      case ' ':
        uVar55 = 1;
LAB_001006a5:
        *(long *)(puVar56 + -0x10a0) = *(long *)(puVar56 + -0x10a0) + 1;
        uVar57 = 0;
      }
LAB_00100608:
      pcVar65 = pcVar65 + uVar55;
      lVar49 = lVar49 + 1;
      bVar60 = bVar67;
LAB_0010060f:
    } while (pcVar65 < pcVar1);
    pcVar64 = *(char **)(puVar56 + -0x1060);
    goto LAB_00100528;
  }
  *(undefined8 *)(puVar56 + -0x1088) = 0;
  uVar61 = 0;
  lVar63 = 0;
  lVar49 = 0;
  __buf = puVar56 + -0x1018;
  lVar62 = 0;
  *(undefined8 *)(puVar56 + -0x10a0) = 0;
  while( true ) {
    *(byte **)(puVar56 + -0x10a8) = __buf;
    *(undefined8 *)(puVar56 + -0x10b0) = 0x100312;
    sVar48 = read(*(int *)(puVar56 + -0x1094),__buf,0x40000);
    __buf = *(byte **)(puVar56 + -0x10a8);
    if (sVar48 == 0) break;
    if (sVar48 < 0) {
      *(long *)(puVar56 + -0x1068) = lVar49;
      lVar68 = *(long *)(puVar56 + -0x10a0);
      *(long *)(puVar56 + -0x1080) = lVar63;
      *(undefined8 *)(puVar56 + -0x10b0) = 0x100f14;
      piVar50 = __errno_location();
      iVar46 = *piVar50;
      uVar58 = CONCAT71(0x1016,iVar46 == 0);
      goto LAB_00100ebd;
    }
    lVar68 = *(long *)(puVar56 + -0x10a0);
    *(long *)(puVar56 + -0x1088) = *(long *)(puVar56 + -0x1088) + sVar48;
    pbVar53 = __buf;
    do {
      bVar60 = *pbVar53;
      pbVar53 = pbVar53 + 1;
      switch(bVar60) {
      case 9:
        uVar61 = 0;
        lVar62 = lVar62 + (8 - lVar62 % 8);
        break;
      case 10:
        lVar49 = lVar49 + 1;
      case 0xc:
      case 0xd:
        if (lVar68 < lVar62) {
          lVar68 = lVar62;
        }
        lVar62 = 0;
        uVar61 = 0;
        break;
      case 0xb:
        uVar61 = 0;
        break;
      default:
        lVar62 = lVar62 + (ulong)(byte)wc_isprint[bVar60];
        uVar66 = uVar61 | (byte)(&wc_isspace)[bVar60];
        uVar61 = (byte)(&wc_isspace)[bVar60] ^ 1;
        lVar63 = lVar63 + (ulong)(uVar66 ^ 1);
        break;
      case 0x20:
        lVar62 = lVar62 + 1;
        uVar61 = 0;
      }
    } while (pbVar53 != __buf + sVar48);
    *(long *)(puVar56 + -0x10a0) = lVar68;
  }
  *(long *)(puVar56 + -0x1080) = lVar63;
  lVar68 = *(long *)(puVar56 + -0x10a0);
  uVar58 = 1;
  *(long *)(puVar56 + -0x1068) = lVar49;
  iVar46 = 0;
LAB_00100ebd:
  if (lVar62 <= lVar68) {
    lVar62 = lVar68;
  }
  lVar49 = 0;
LAB_00100c50:
  if ((byte)puVar56[-0x103d] < print_chars) {
    lVar49 = *(long *)(puVar56 + -0x1088);
  }
  if (total_mode != 2) {
    *(undefined8 *)(puVar56 + -0x10b0) = 0x100c8a;
    write_counts(*(undefined8 *)(puVar56 + -0x1068),*(undefined8 *)(puVar56 + -0x1080),lVar49,
                 *(long *)(puVar56 + -0x1088),lVar62,*(undefined8 *)(puVar56 + -0x1050));
  }
  lVar63 = total_lines + -0x8000000000000000;
  total_lines = lVar63 + *(long *)(puVar56 + -0x1068) + -0x8000000000000000;
  total_lines_overflow = total_lines_overflow | SCARRY8(lVar63,*(long *)(puVar56 + -0x1068));
  lVar63 = total_words + -0x8000000000000000;
  total_words = lVar63 + *(long *)(puVar56 + -0x1080) + -0x8000000000000000;
  total_words_overflow = total_words_overflow | SCARRY8(lVar63,*(long *)(puVar56 + -0x1080));
  lVar63 = total_chars + -0x8000000000000000;
  total_chars = lVar49 + lVar63 + -0x8000000000000000;
  total_chars_overflow = total_chars_overflow | SCARRY8(lVar49,lVar63);
  lVar49 = total_bytes + -0x8000000000000000;
  total_bytes = lVar49 + *(long *)(puVar56 + -0x1088) + -0x8000000000000000;
  total_bytes_overflow = total_bytes_overflow | SCARRY8(lVar49,*(long *)(puVar56 + -0x1088));
  if (max_line_length < lVar62) {
    max_line_length = lVar62;
  }
  if (iVar46 != 0) {
    *(undefined8 *)(puVar56 + -0x10b0) = 0x101059;
    uVar52 = quotearg_n_style_colon(0,3,*(undefined8 *)(puVar56 + -0x1048));
    *(undefined8 *)(puVar56 + -0x10b0) = 0x10106f;
    error(0,iVar46,&_LC6,uVar52);
  }
  if (*(long *)(puVar56 + 0x3eff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar58 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar56 + -0x10b0) = 0x101048;
  __stack_chk_fail();
LAB_00100f3e:
  uVar58 = 1;
  iVar46 = 0;
LAB_00100c35:
  lVar62 = *(long *)(puVar56 + -0x10a0);
  if (*(long *)(puVar56 + -0x10a0) <= *(long *)(puVar56 + -0x1078)) {
    lVar62 = *(long *)(puVar56 + -0x1078);
  }
  goto LAB_00100c50;
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
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n  or:  %s [OPTION]... --files0-from=F\n",5);
  __printf_chk(2,uVar3,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Print newline, word, and byte counts for each FILE, and a total line if\nmore than one FILE is specified.  A word is a nonempty sequence of non white\nspace delimited by white space characters or by start or end of input.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nThe options below may be used to select which counts are printed, always in\nthe following order: newline, word, character, byte, maximum line length.\n  -c, --bytes            print the byte counts\n  -m, --chars            print the character counts\n  -l, --lines            print the newline counts\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --files0-from=F    read input from the files specified by\n                           NUL-terminated names in file F;\n                           If F is - then read names from standard input\n  -L, --max-line-length  print the maximum display width\n  -w, --words            print the word counts\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --total=WHEN       when to print a line with total counts;\n                           WHEN can be: auto, always, only, never\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC7;
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
    if (((*pcVar4 == 'w') && (pcVar4[1] == 'c')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined1 **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined1 *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC8;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_0010135c;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC8);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_0010135c:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC8);
    if (puVar7 == &_LC8) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_001010f9:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(ulong param_1,undefined8 *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  char *__s1;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  byte bVar11;
  int iVar12;
  char *pcVar13;
  ushort **ppuVar14;
  FILE *pFVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  FILE *__stream;
  int *piVar21;
  int iVar22;
  stat *__buf;
  uint *puVar23;
  char *pcVar24;
  undefined1 *puVar25;
  uint *puVar26;
  long in_FS_OFFSET;
  bool bVar27;
  ushort uVar28;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  double dVar29;
  double dVar30;
  ushort uVar34;
  ushort uVar35;
  ushort uVar36;
  ushort uVar37;
  ushort uVar38;
  ushort uVar39;
  ushort uVar40;
  ushort uVar41;
  ushort uVar42;
  ushort uVar43;
  ushort uVar44;
  ushort uVar45;
  ushort uVar46;
  ushort uVar47;
  ushort uVar48;
  ushort uVar49;
  ushort uVar50;
  ushort uVar51;
  ushort uVar52;
  ushort uVar53;
  ushort uVar54;
  ushort uVar55;
  ushort uVar56;
  ushort uVar57;
  ushort uVar58;
  ushort uVar59;
  ushort uVar60;
  ushort uVar61;
  double dVar62;
  int *local_220;
  int *local_218;
  byte local_20a;
  char local_209;
  int local_1fc;
  uint *local_1f8;
  ushort *local_1f0;
  stat local_d8;
  long local_40;
  
  puVar26 = &switchD_00102323::switchdataD_00101aa0;
  puVar25 = longopts;
  pcVar24 = "clLmw";
  __stream = (FILE *)(param_1 & 0xffffffff);
  iVar22 = (int)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  iVar12 = getpagesize();
  page_size = (long)iVar12;
  setvbuf(_stdout,(char *)0x0,1,0);
  pcVar13 = getenv("POSIXLY_CORRECT");
  print_bytes = 0;
  print_chars = 0;
  posixly_correct = pcVar13 != (char *)0x0;
  print_words = 0;
  print_lines = 0;
  print_linelength = 0;
  max_line_length = 0;
  total_bytes = 0;
  total_chars = 0;
  total_words = 0;
  total_lines = 0;
  pcVar13 = (char *)0x0;
  while (iVar12 = getopt_long(param_1 & 0xffffffff,param_2,"clLmw",longopts,0), iVar12 != -1) {
    if (0x82 < iVar12) goto switchD_00102323_caseD_4d;
    if (iVar12 < 0x4c) {
      if (iVar12 == -0x83) {
        uVar16 = proper_name_lite("David MacKenzie","David MacKenzie");
        uVar17 = proper_name_lite("Paul Rubin","Paul Rubin");
        version_etc(_stdout,&_LC8,"GNU coreutils",_Version,uVar17,uVar16,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar12 == -0x82) {
        iVar12 = usage(0);
        goto LAB_001030f9;
      }
      goto switchD_00102323_caseD_4d;
    }
    switch(iVar12) {
    case 0x4c:
      print_linelength = 1;
      break;
    default:
      goto switchD_00102323_caseD_4d;
    case 99:
      print_bytes = 1;
      break;
    case 0x6c:
      print_lines = 1;
      break;
    case 0x6d:
      print_chars = 1;
      break;
    case 0x77:
      print_words = 1;
      break;
    case 0x80:
      debug = 1;
      break;
    case 0x81:
      pcVar13 = _optarg;
      break;
    case 0x82:
      lVar20 = __xargmatch_internal("--total",_optarg,total_args,total_types,4,_argmatch_die,1);
      total_mode = *(int *)(total_types + lVar20 * 4);
    }
  }
  if (print_lines == 0) {
    if (print_words == 0) {
      if ((print_chars == 0) && (print_bytes == 0)) {
        if (print_linelength == 0) {
          print_bytes = 1;
          print_words = 1;
          print_lines = 1;
          goto LAB_00102a87;
        }
      }
      else if (print_linelength == 0) goto LAB_00102845;
LAB_00102475:
      ppuVar14 = __ctype_b_loc();
      puVar2 = *ppuVar14;
      uVar46 = ~-(ushort)((puVar2[8] & __LC42) == 0) & __LC43 & __LC44;
      uVar48 = ~-(ushort)((puVar2[9] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar50 = ~-(ushort)((puVar2[10] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar52 = ~-(ushort)((puVar2[0xb] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar54 = ~-(ushort)((puVar2[0xc] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar56 = ~-(ushort)((puVar2[0xd] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar58 = ~-(ushort)((puVar2[0xe] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar60 = ~-(ushort)((puVar2[0xf] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      uVar38 = ~-(ushort)((*puVar2 & __LC42) == 0) & __LC43 & __LC44;
      uVar39 = ~-(ushort)((puVar2[1] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar40 = ~-(ushort)((puVar2[2] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar41 = ~-(ushort)((puVar2[3] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar42 = ~-(ushort)((puVar2[4] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar43 = ~-(ushort)((puVar2[5] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar44 = ~-(ushort)((puVar2[6] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar45 = ~-(ushort)((puVar2[7] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      wc_isprint[0] =
           (0 < (short)uVar38) * ((short)uVar38 < 0x100) * (char)uVar38 - (0xff < (short)uVar38);
      wc_isprint[1] =
           (0 < (short)uVar39) * ((short)uVar39 < 0x100) * (char)uVar39 - (0xff < (short)uVar39);
      wc_isprint[2] =
           (0 < (short)uVar40) * ((short)uVar40 < 0x100) * (char)uVar40 - (0xff < (short)uVar40);
      wc_isprint[3] =
           (0 < (short)uVar41) * ((short)uVar41 < 0x100) * (char)uVar41 - (0xff < (short)uVar41);
      wc_isprint[4] =
           (0 < (short)uVar42) * ((short)uVar42 < 0x100) * (char)uVar42 - (0xff < (short)uVar42);
      wc_isprint[5] =
           (0 < (short)uVar43) * ((short)uVar43 < 0x100) * (char)uVar43 - (0xff < (short)uVar43);
      wc_isprint[6] =
           (0 < (short)uVar44) * ((short)uVar44 < 0x100) * (char)uVar44 - (0xff < (short)uVar44);
      wc_isprint[7] =
           (0 < (short)uVar45) * ((short)uVar45 < 0x100) * (char)uVar45 - (0xff < (short)uVar45);
      wc_isprint[8] =
           (0 < (short)uVar46) * ((short)uVar46 < 0x100) * (char)uVar46 - (0xff < (short)uVar46);
      wc_isprint[9] =
           (0 < (short)uVar48) * ((short)uVar48 < 0x100) * (char)uVar48 - (0xff < (short)uVar48);
      wc_isprint[10] =
           (0 < (short)uVar50) * ((short)uVar50 < 0x100) * (char)uVar50 - (0xff < (short)uVar50);
      wc_isprint[0xb] =
           (0 < (short)uVar52) * ((short)uVar52 < 0x100) * (char)uVar52 - (0xff < (short)uVar52);
      wc_isprint[0xc] =
           (0 < (short)uVar54) * ((short)uVar54 < 0x100) * (char)uVar54 - (0xff < (short)uVar54);
      wc_isprint[0xd] =
           (0 < (short)uVar56) * ((short)uVar56 < 0x100) * (char)uVar56 - (0xff < (short)uVar56);
      wc_isprint[0xe] =
           (0 < (short)uVar58) * ((short)uVar58 < 0x100) * (char)uVar58 - (0xff < (short)uVar58);
      wc_isprint[0xf] =
           (0 < (short)uVar60) * ((short)uVar60 < 0x100) * (char)uVar60 - (0xff < (short)uVar60);
      uVar46 = ~-(ushort)((puVar2[0x18] & __LC42) == 0) & __LC43 & __LC44;
      uVar48 = ~-(ushort)((puVar2[0x19] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar50 = ~-(ushort)((puVar2[0x1a] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar52 = ~-(ushort)((puVar2[0x1b] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar54 = ~-(ushort)((puVar2[0x1c] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar56 = ~-(ushort)((puVar2[0x1d] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar58 = ~-(ushort)((puVar2[0x1e] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar60 = ~-(ushort)((puVar2[0x1f] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      uVar38 = ~-(ushort)((puVar2[0x10] & __LC42) == 0) & __LC43 & __LC44;
      uVar39 = ~-(ushort)((puVar2[0x11] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar40 = ~-(ushort)((puVar2[0x12] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar41 = ~-(ushort)((puVar2[0x13] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar42 = ~-(ushort)((puVar2[0x14] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar43 = ~-(ushort)((puVar2[0x15] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar44 = ~-(ushort)((puVar2[0x16] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar45 = ~-(ushort)((puVar2[0x17] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      wc_isprint[0x10] =
           (0 < (short)uVar38) * ((short)uVar38 < 0x100) * (char)uVar38 - (0xff < (short)uVar38);
      wc_isprint[0x11] =
           (0 < (short)uVar39) * ((short)uVar39 < 0x100) * (char)uVar39 - (0xff < (short)uVar39);
      wc_isprint[0x12] =
           (0 < (short)uVar40) * ((short)uVar40 < 0x100) * (char)uVar40 - (0xff < (short)uVar40);
      wc_isprint[0x13] =
           (0 < (short)uVar41) * ((short)uVar41 < 0x100) * (char)uVar41 - (0xff < (short)uVar41);
      wc_isprint[0x14] =
           (0 < (short)uVar42) * ((short)uVar42 < 0x100) * (char)uVar42 - (0xff < (short)uVar42);
      wc_isprint[0x15] =
           (0 < (short)uVar43) * ((short)uVar43 < 0x100) * (char)uVar43 - (0xff < (short)uVar43);
      wc_isprint[0x16] =
           (0 < (short)uVar44) * ((short)uVar44 < 0x100) * (char)uVar44 - (0xff < (short)uVar44);
      wc_isprint[0x17] =
           (0 < (short)uVar45) * ((short)uVar45 < 0x100) * (char)uVar45 - (0xff < (short)uVar45);
      wc_isprint[0x18] =
           (0 < (short)uVar46) * ((short)uVar46 < 0x100) * (char)uVar46 - (0xff < (short)uVar46);
      wc_isprint[0x19] =
           (0 < (short)uVar48) * ((short)uVar48 < 0x100) * (char)uVar48 - (0xff < (short)uVar48);
      wc_isprint[0x1a] =
           (0 < (short)uVar50) * ((short)uVar50 < 0x100) * (char)uVar50 - (0xff < (short)uVar50);
      wc_isprint[0x1b] =
           (0 < (short)uVar52) * ((short)uVar52 < 0x100) * (char)uVar52 - (0xff < (short)uVar52);
      wc_isprint[0x1c] =
           (0 < (short)uVar54) * ((short)uVar54 < 0x100) * (char)uVar54 - (0xff < (short)uVar54);
      wc_isprint[0x1d] =
           (0 < (short)uVar56) * ((short)uVar56 < 0x100) * (char)uVar56 - (0xff < (short)uVar56);
      wc_isprint[0x1e] =
           (0 < (short)uVar58) * ((short)uVar58 < 0x100) * (char)uVar58 - (0xff < (short)uVar58);
      wc_isprint[0x1f] =
           (0 < (short)uVar60) * ((short)uVar60 < 0x100) * (char)uVar60 - (0xff < (short)uVar60);
      uVar46 = ~-(ushort)((puVar2[0x28] & __LC42) == 0) & __LC43 & __LC44;
      uVar48 = ~-(ushort)((puVar2[0x29] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar50 = ~-(ushort)((puVar2[0x2a] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar52 = ~-(ushort)((puVar2[0x2b] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar54 = ~-(ushort)((puVar2[0x2c] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar56 = ~-(ushort)((puVar2[0x2d] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar58 = ~-(ushort)((puVar2[0x2e] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar60 = ~-(ushort)((puVar2[0x2f] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      uVar38 = ~-(ushort)((puVar2[0x20] & __LC42) == 0) & __LC43 & __LC44;
      uVar39 = ~-(ushort)((puVar2[0x21] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar40 = ~-(ushort)((puVar2[0x22] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar41 = ~-(ushort)((puVar2[0x23] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar42 = ~-(ushort)((puVar2[0x24] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar43 = ~-(ushort)((puVar2[0x25] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar44 = ~-(ushort)((puVar2[0x26] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar45 = ~-(ushort)((puVar2[0x27] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      wc_isprint[0x20] =
           (0 < (short)uVar38) * ((short)uVar38 < 0x100) * (char)uVar38 - (0xff < (short)uVar38);
      wc_isprint[0x21] =
           (0 < (short)uVar39) * ((short)uVar39 < 0x100) * (char)uVar39 - (0xff < (short)uVar39);
      wc_isprint[0x22] =
           (0 < (short)uVar40) * ((short)uVar40 < 0x100) * (char)uVar40 - (0xff < (short)uVar40);
      wc_isprint[0x23] =
           (0 < (short)uVar41) * ((short)uVar41 < 0x100) * (char)uVar41 - (0xff < (short)uVar41);
      wc_isprint[0x24] =
           (0 < (short)uVar42) * ((short)uVar42 < 0x100) * (char)uVar42 - (0xff < (short)uVar42);
      wc_isprint[0x25] =
           (0 < (short)uVar43) * ((short)uVar43 < 0x100) * (char)uVar43 - (0xff < (short)uVar43);
      wc_isprint[0x26] =
           (0 < (short)uVar44) * ((short)uVar44 < 0x100) * (char)uVar44 - (0xff < (short)uVar44);
      wc_isprint[0x27] =
           (0 < (short)uVar45) * ((short)uVar45 < 0x100) * (char)uVar45 - (0xff < (short)uVar45);
      wc_isprint[0x28] =
           (0 < (short)uVar46) * ((short)uVar46 < 0x100) * (char)uVar46 - (0xff < (short)uVar46);
      wc_isprint[0x29] =
           (0 < (short)uVar48) * ((short)uVar48 < 0x100) * (char)uVar48 - (0xff < (short)uVar48);
      wc_isprint[0x2a] =
           (0 < (short)uVar50) * ((short)uVar50 < 0x100) * (char)uVar50 - (0xff < (short)uVar50);
      wc_isprint[0x2b] =
           (0 < (short)uVar52) * ((short)uVar52 < 0x100) * (char)uVar52 - (0xff < (short)uVar52);
      wc_isprint[0x2c] =
           (0 < (short)uVar54) * ((short)uVar54 < 0x100) * (char)uVar54 - (0xff < (short)uVar54);
      wc_isprint[0x2d] =
           (0 < (short)uVar56) * ((short)uVar56 < 0x100) * (char)uVar56 - (0xff < (short)uVar56);
      wc_isprint[0x2e] =
           (0 < (short)uVar58) * ((short)uVar58 < 0x100) * (char)uVar58 - (0xff < (short)uVar58);
      wc_isprint[0x2f] =
           (0 < (short)uVar60) * ((short)uVar60 < 0x100) * (char)uVar60 - (0xff < (short)uVar60);
      uVar46 = ~-(ushort)((puVar2[0x38] & __LC42) == 0) & __LC43 & __LC44;
      uVar48 = ~-(ushort)((puVar2[0x39] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar50 = ~-(ushort)((puVar2[0x3a] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar52 = ~-(ushort)((puVar2[0x3b] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar54 = ~-(ushort)((puVar2[0x3c] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar56 = ~-(ushort)((puVar2[0x3d] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar58 = ~-(ushort)((puVar2[0x3e] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar60 = ~-(ushort)((puVar2[0x3f] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      uVar38 = ~-(ushort)((puVar2[0x30] & __LC42) == 0) & __LC43 & __LC44;
      uVar39 = ~-(ushort)((puVar2[0x31] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar40 = ~-(ushort)((puVar2[0x32] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar41 = ~-(ushort)((puVar2[0x33] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar42 = ~-(ushort)((puVar2[0x34] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar43 = ~-(ushort)((puVar2[0x35] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar44 = ~-(ushort)((puVar2[0x36] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar45 = ~-(ushort)((puVar2[0x37] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      wc_isprint[0x30] =
           (0 < (short)uVar38) * ((short)uVar38 < 0x100) * (char)uVar38 - (0xff < (short)uVar38);
      wc_isprint[0x31] =
           (0 < (short)uVar39) * ((short)uVar39 < 0x100) * (char)uVar39 - (0xff < (short)uVar39);
      wc_isprint[0x32] =
           (0 < (short)uVar40) * ((short)uVar40 < 0x100) * (char)uVar40 - (0xff < (short)uVar40);
      wc_isprint[0x33] =
           (0 < (short)uVar41) * ((short)uVar41 < 0x100) * (char)uVar41 - (0xff < (short)uVar41);
      wc_isprint[0x34] =
           (0 < (short)uVar42) * ((short)uVar42 < 0x100) * (char)uVar42 - (0xff < (short)uVar42);
      wc_isprint[0x35] =
           (0 < (short)uVar43) * ((short)uVar43 < 0x100) * (char)uVar43 - (0xff < (short)uVar43);
      wc_isprint[0x36] =
           (0 < (short)uVar44) * ((short)uVar44 < 0x100) * (char)uVar44 - (0xff < (short)uVar44);
      wc_isprint[0x37] =
           (0 < (short)uVar45) * ((short)uVar45 < 0x100) * (char)uVar45 - (0xff < (short)uVar45);
      wc_isprint[0x38] =
           (0 < (short)uVar46) * ((short)uVar46 < 0x100) * (char)uVar46 - (0xff < (short)uVar46);
      wc_isprint[0x39] =
           (0 < (short)uVar48) * ((short)uVar48 < 0x100) * (char)uVar48 - (0xff < (short)uVar48);
      wc_isprint[0x3a] =
           (0 < (short)uVar50) * ((short)uVar50 < 0x100) * (char)uVar50 - (0xff < (short)uVar50);
      wc_isprint[0x3b] =
           (0 < (short)uVar52) * ((short)uVar52 < 0x100) * (char)uVar52 - (0xff < (short)uVar52);
      wc_isprint[0x3c] =
           (0 < (short)uVar54) * ((short)uVar54 < 0x100) * (char)uVar54 - (0xff < (short)uVar54);
      wc_isprint[0x3d] =
           (0 < (short)uVar56) * ((short)uVar56 < 0x100) * (char)uVar56 - (0xff < (short)uVar56);
      wc_isprint[0x3e] =
           (0 < (short)uVar58) * ((short)uVar58 < 0x100) * (char)uVar58 - (0xff < (short)uVar58);
      wc_isprint[0x3f] =
           (0 < (short)uVar60) * ((short)uVar60 < 0x100) * (char)uVar60 - (0xff < (short)uVar60);
      uVar46 = ~-(ushort)((puVar2[0x48] & __LC42) == 0) & __LC43 & __LC44;
      uVar48 = ~-(ushort)((puVar2[0x49] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar50 = ~-(ushort)((puVar2[0x4a] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar52 = ~-(ushort)((puVar2[0x4b] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar54 = ~-(ushort)((puVar2[0x4c] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar56 = ~-(ushort)((puVar2[0x4d] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar58 = ~-(ushort)((puVar2[0x4e] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar60 = ~-(ushort)((puVar2[0x4f] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      uVar38 = ~-(ushort)((puVar2[0x40] & __LC42) == 0) & __LC43 & __LC44;
      uVar39 = ~-(ushort)((puVar2[0x41] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar40 = ~-(ushort)((puVar2[0x42] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar41 = ~-(ushort)((puVar2[0x43] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar42 = ~-(ushort)((puVar2[0x44] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar43 = ~-(ushort)((puVar2[0x45] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar44 = ~-(ushort)((puVar2[0x46] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar45 = ~-(ushort)((puVar2[0x47] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      wc_isprint[0x40] =
           (0 < (short)uVar38) * ((short)uVar38 < 0x100) * (char)uVar38 - (0xff < (short)uVar38);
      wc_isprint[0x41] =
           (0 < (short)uVar39) * ((short)uVar39 < 0x100) * (char)uVar39 - (0xff < (short)uVar39);
      wc_isprint[0x42] =
           (0 < (short)uVar40) * ((short)uVar40 < 0x100) * (char)uVar40 - (0xff < (short)uVar40);
      wc_isprint[0x43] =
           (0 < (short)uVar41) * ((short)uVar41 < 0x100) * (char)uVar41 - (0xff < (short)uVar41);
      wc_isprint[0x44] =
           (0 < (short)uVar42) * ((short)uVar42 < 0x100) * (char)uVar42 - (0xff < (short)uVar42);
      wc_isprint[0x45] =
           (0 < (short)uVar43) * ((short)uVar43 < 0x100) * (char)uVar43 - (0xff < (short)uVar43);
      wc_isprint[0x46] =
           (0 < (short)uVar44) * ((short)uVar44 < 0x100) * (char)uVar44 - (0xff < (short)uVar44);
      wc_isprint[0x47] =
           (0 < (short)uVar45) * ((short)uVar45 < 0x100) * (char)uVar45 - (0xff < (short)uVar45);
      wc_isprint[0x48] =
           (0 < (short)uVar46) * ((short)uVar46 < 0x100) * (char)uVar46 - (0xff < (short)uVar46);
      wc_isprint[0x49] =
           (0 < (short)uVar48) * ((short)uVar48 < 0x100) * (char)uVar48 - (0xff < (short)uVar48);
      wc_isprint[0x4a] =
           (0 < (short)uVar50) * ((short)uVar50 < 0x100) * (char)uVar50 - (0xff < (short)uVar50);
      wc_isprint[0x4b] =
           (0 < (short)uVar52) * ((short)uVar52 < 0x100) * (char)uVar52 - (0xff < (short)uVar52);
      wc_isprint[0x4c] =
           (0 < (short)uVar54) * ((short)uVar54 < 0x100) * (char)uVar54 - (0xff < (short)uVar54);
      wc_isprint[0x4d] =
           (0 < (short)uVar56) * ((short)uVar56 < 0x100) * (char)uVar56 - (0xff < (short)uVar56);
      wc_isprint[0x4e] =
           (0 < (short)uVar58) * ((short)uVar58 < 0x100) * (char)uVar58 - (0xff < (short)uVar58);
      wc_isprint[0x4f] =
           (0 < (short)uVar60) * ((short)uVar60 < 0x100) * (char)uVar60 - (0xff < (short)uVar60);
      uVar46 = ~-(ushort)((puVar2[0x58] & __LC42) == 0) & __LC43 & __LC44;
      uVar48 = ~-(ushort)((puVar2[0x59] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar50 = ~-(ushort)((puVar2[0x5a] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar52 = ~-(ushort)((puVar2[0x5b] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar54 = ~-(ushort)((puVar2[0x5c] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar56 = ~-(ushort)((puVar2[0x5d] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar58 = ~-(ushort)((puVar2[0x5e] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar60 = ~-(ushort)((puVar2[0x5f] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      uVar38 = ~-(ushort)((puVar2[0x50] & __LC42) == 0) & __LC43 & __LC44;
      uVar39 = ~-(ushort)((puVar2[0x51] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar40 = ~-(ushort)((puVar2[0x52] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar41 = ~-(ushort)((puVar2[0x53] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar42 = ~-(ushort)((puVar2[0x54] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar43 = ~-(ushort)((puVar2[0x55] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar44 = ~-(ushort)((puVar2[0x56] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar45 = ~-(ushort)((puVar2[0x57] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      wc_isprint[0x50] =
           (0 < (short)uVar38) * ((short)uVar38 < 0x100) * (char)uVar38 - (0xff < (short)uVar38);
      wc_isprint[0x51] =
           (0 < (short)uVar39) * ((short)uVar39 < 0x100) * (char)uVar39 - (0xff < (short)uVar39);
      wc_isprint[0x52] =
           (0 < (short)uVar40) * ((short)uVar40 < 0x100) * (char)uVar40 - (0xff < (short)uVar40);
      wc_isprint[0x53] =
           (0 < (short)uVar41) * ((short)uVar41 < 0x100) * (char)uVar41 - (0xff < (short)uVar41);
      wc_isprint[0x54] =
           (0 < (short)uVar42) * ((short)uVar42 < 0x100) * (char)uVar42 - (0xff < (short)uVar42);
      wc_isprint[0x55] =
           (0 < (short)uVar43) * ((short)uVar43 < 0x100) * (char)uVar43 - (0xff < (short)uVar43);
      wc_isprint[0x56] =
           (0 < (short)uVar44) * ((short)uVar44 < 0x100) * (char)uVar44 - (0xff < (short)uVar44);
      wc_isprint[0x57] =
           (0 < (short)uVar45) * ((short)uVar45 < 0x100) * (char)uVar45 - (0xff < (short)uVar45);
      wc_isprint[0x58] =
           (0 < (short)uVar46) * ((short)uVar46 < 0x100) * (char)uVar46 - (0xff < (short)uVar46);
      wc_isprint[0x59] =
           (0 < (short)uVar48) * ((short)uVar48 < 0x100) * (char)uVar48 - (0xff < (short)uVar48);
      wc_isprint[0x5a] =
           (0 < (short)uVar50) * ((short)uVar50 < 0x100) * (char)uVar50 - (0xff < (short)uVar50);
      wc_isprint[0x5b] =
           (0 < (short)uVar52) * ((short)uVar52 < 0x100) * (char)uVar52 - (0xff < (short)uVar52);
      wc_isprint[0x5c] =
           (0 < (short)uVar54) * ((short)uVar54 < 0x100) * (char)uVar54 - (0xff < (short)uVar54);
      wc_isprint[0x5d] =
           (0 < (short)uVar56) * ((short)uVar56 < 0x100) * (char)uVar56 - (0xff < (short)uVar56);
      wc_isprint[0x5e] =
           (0 < (short)uVar58) * ((short)uVar58 < 0x100) * (char)uVar58 - (0xff < (short)uVar58);
      wc_isprint[0x5f] =
           (0 < (short)uVar60) * ((short)uVar60 < 0x100) * (char)uVar60 - (0xff < (short)uVar60);
      uVar46 = ~-(ushort)((puVar2[0x68] & __LC42) == 0) & __LC43 & __LC44;
      uVar48 = ~-(ushort)((puVar2[0x69] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar50 = ~-(ushort)((puVar2[0x6a] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar52 = ~-(ushort)((puVar2[0x6b] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar54 = ~-(ushort)((puVar2[0x6c] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar56 = ~-(ushort)((puVar2[0x6d] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar58 = ~-(ushort)((puVar2[0x6e] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar60 = ~-(ushort)((puVar2[0x6f] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      uVar38 = ~-(ushort)((puVar2[0x60] & __LC42) == 0) & __LC43 & __LC44;
      uVar39 = ~-(ushort)((puVar2[0x61] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar40 = ~-(ushort)((puVar2[0x62] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar41 = ~-(ushort)((puVar2[99] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar42 = ~-(ushort)((puVar2[100] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar43 = ~-(ushort)((puVar2[0x65] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar44 = ~-(ushort)((puVar2[0x66] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar45 = ~-(ushort)((puVar2[0x67] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      wc_isprint[0x60] =
           (0 < (short)uVar38) * ((short)uVar38 < 0x100) * (char)uVar38 - (0xff < (short)uVar38);
      wc_isprint[0x61] =
           (0 < (short)uVar39) * ((short)uVar39 < 0x100) * (char)uVar39 - (0xff < (short)uVar39);
      wc_isprint[0x62] =
           (0 < (short)uVar40) * ((short)uVar40 < 0x100) * (char)uVar40 - (0xff < (short)uVar40);
      wc_isprint[99] =
           (0 < (short)uVar41) * ((short)uVar41 < 0x100) * (char)uVar41 - (0xff < (short)uVar41);
      wc_isprint[100] =
           (0 < (short)uVar42) * ((short)uVar42 < 0x100) * (char)uVar42 - (0xff < (short)uVar42);
      wc_isprint[0x65] =
           (0 < (short)uVar43) * ((short)uVar43 < 0x100) * (char)uVar43 - (0xff < (short)uVar43);
      wc_isprint[0x66] =
           (0 < (short)uVar44) * ((short)uVar44 < 0x100) * (char)uVar44 - (0xff < (short)uVar44);
      wc_isprint[0x67] =
           (0 < (short)uVar45) * ((short)uVar45 < 0x100) * (char)uVar45 - (0xff < (short)uVar45);
      wc_isprint[0x68] =
           (0 < (short)uVar46) * ((short)uVar46 < 0x100) * (char)uVar46 - (0xff < (short)uVar46);
      wc_isprint[0x69] =
           (0 < (short)uVar48) * ((short)uVar48 < 0x100) * (char)uVar48 - (0xff < (short)uVar48);
      wc_isprint[0x6a] =
           (0 < (short)uVar50) * ((short)uVar50 < 0x100) * (char)uVar50 - (0xff < (short)uVar50);
      wc_isprint[0x6b] =
           (0 < (short)uVar52) * ((short)uVar52 < 0x100) * (char)uVar52 - (0xff < (short)uVar52);
      wc_isprint[0x6c] =
           (0 < (short)uVar54) * ((short)uVar54 < 0x100) * (char)uVar54 - (0xff < (short)uVar54);
      wc_isprint[0x6d] =
           (0 < (short)uVar56) * ((short)uVar56 < 0x100) * (char)uVar56 - (0xff < (short)uVar56);
      wc_isprint[0x6e] =
           (0 < (short)uVar58) * ((short)uVar58 < 0x100) * (char)uVar58 - (0xff < (short)uVar58);
      wc_isprint[0x6f] =
           (0 < (short)uVar60) * ((short)uVar60 < 0x100) * (char)uVar60 - (0xff < (short)uVar60);
      uVar46 = ~-(ushort)((puVar2[0x78] & __LC42) == 0) & __LC43 & __LC44;
      uVar48 = ~-(ushort)((puVar2[0x79] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar50 = ~-(ushort)((puVar2[0x7a] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar52 = ~-(ushort)((puVar2[0x7b] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar54 = ~-(ushort)((puVar2[0x7c] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar56 = ~-(ushort)((puVar2[0x7d] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar58 = ~-(ushort)((puVar2[0x7e] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar60 = ~-(ushort)((puVar2[0x7f] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      uVar38 = ~-(ushort)((puVar2[0x70] & __LC42) == 0) & __LC43 & __LC44;
      uVar39 = ~-(ushort)((puVar2[0x71] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar40 = ~-(ushort)((puVar2[0x72] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar41 = ~-(ushort)((puVar2[0x73] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar42 = ~-(ushort)((puVar2[0x74] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar43 = ~-(ushort)((puVar2[0x75] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar44 = ~-(ushort)((puVar2[0x76] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar45 = ~-(ushort)((puVar2[0x77] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      wc_isprint[0x70] =
           (0 < (short)uVar38) * ((short)uVar38 < 0x100) * (char)uVar38 - (0xff < (short)uVar38);
      wc_isprint[0x71] =
           (0 < (short)uVar39) * ((short)uVar39 < 0x100) * (char)uVar39 - (0xff < (short)uVar39);
      wc_isprint[0x72] =
           (0 < (short)uVar40) * ((short)uVar40 < 0x100) * (char)uVar40 - (0xff < (short)uVar40);
      wc_isprint[0x73] =
           (0 < (short)uVar41) * ((short)uVar41 < 0x100) * (char)uVar41 - (0xff < (short)uVar41);
      wc_isprint[0x74] =
           (0 < (short)uVar42) * ((short)uVar42 < 0x100) * (char)uVar42 - (0xff < (short)uVar42);
      wc_isprint[0x75] =
           (0 < (short)uVar43) * ((short)uVar43 < 0x100) * (char)uVar43 - (0xff < (short)uVar43);
      wc_isprint[0x76] =
           (0 < (short)uVar44) * ((short)uVar44 < 0x100) * (char)uVar44 - (0xff < (short)uVar44);
      wc_isprint[0x77] =
           (0 < (short)uVar45) * ((short)uVar45 < 0x100) * (char)uVar45 - (0xff < (short)uVar45);
      wc_isprint[0x78] =
           (0 < (short)uVar46) * ((short)uVar46 < 0x100) * (char)uVar46 - (0xff < (short)uVar46);
      wc_isprint[0x79] =
           (0 < (short)uVar48) * ((short)uVar48 < 0x100) * (char)uVar48 - (0xff < (short)uVar48);
      wc_isprint[0x7a] =
           (0 < (short)uVar50) * ((short)uVar50 < 0x100) * (char)uVar50 - (0xff < (short)uVar50);
      wc_isprint[0x7b] =
           (0 < (short)uVar52) * ((short)uVar52 < 0x100) * (char)uVar52 - (0xff < (short)uVar52);
      wc_isprint[0x7c] =
           (0 < (short)uVar54) * ((short)uVar54 < 0x100) * (char)uVar54 - (0xff < (short)uVar54);
      wc_isprint[0x7d] =
           (0 < (short)uVar56) * ((short)uVar56 < 0x100) * (char)uVar56 - (0xff < (short)uVar56);
      wc_isprint[0x7e] =
           (0 < (short)uVar58) * ((short)uVar58 < 0x100) * (char)uVar58 - (0xff < (short)uVar58);
      wc_isprint[0x7f] =
           (0 < (short)uVar60) * ((short)uVar60 < 0x100) * (char)uVar60 - (0xff < (short)uVar60);
      uVar46 = ~-(ushort)((puVar2[0x88] & __LC42) == 0) & __LC43 & __LC44;
      uVar48 = ~-(ushort)((puVar2[0x89] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar50 = ~-(ushort)((puVar2[0x8a] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar52 = ~-(ushort)((puVar2[0x8b] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar54 = ~-(ushort)((puVar2[0x8c] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar56 = ~-(ushort)((puVar2[0x8d] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar58 = ~-(ushort)((puVar2[0x8e] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar60 = ~-(ushort)((puVar2[0x8f] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      uVar38 = ~-(ushort)((puVar2[0x80] & __LC42) == 0) & __LC43 & __LC44;
      uVar39 = ~-(ushort)((puVar2[0x81] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar40 = ~-(ushort)((puVar2[0x82] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar41 = ~-(ushort)((puVar2[0x83] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar42 = ~-(ushort)((puVar2[0x84] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar43 = ~-(ushort)((puVar2[0x85] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar44 = ~-(ushort)((puVar2[0x86] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar45 = ~-(ushort)((puVar2[0x87] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      wc_isprint[0x80] =
           (0 < (short)uVar38) * ((short)uVar38 < 0x100) * (char)uVar38 - (0xff < (short)uVar38);
      wc_isprint[0x81] =
           (0 < (short)uVar39) * ((short)uVar39 < 0x100) * (char)uVar39 - (0xff < (short)uVar39);
      wc_isprint[0x82] =
           (0 < (short)uVar40) * ((short)uVar40 < 0x100) * (char)uVar40 - (0xff < (short)uVar40);
      wc_isprint[0x83] =
           (0 < (short)uVar41) * ((short)uVar41 < 0x100) * (char)uVar41 - (0xff < (short)uVar41);
      wc_isprint[0x84] =
           (0 < (short)uVar42) * ((short)uVar42 < 0x100) * (char)uVar42 - (0xff < (short)uVar42);
      wc_isprint[0x85] =
           (0 < (short)uVar43) * ((short)uVar43 < 0x100) * (char)uVar43 - (0xff < (short)uVar43);
      wc_isprint[0x86] =
           (0 < (short)uVar44) * ((short)uVar44 < 0x100) * (char)uVar44 - (0xff < (short)uVar44);
      wc_isprint[0x87] =
           (0 < (short)uVar45) * ((short)uVar45 < 0x100) * (char)uVar45 - (0xff < (short)uVar45);
      wc_isprint[0x88] =
           (0 < (short)uVar46) * ((short)uVar46 < 0x100) * (char)uVar46 - (0xff < (short)uVar46);
      wc_isprint[0x89] =
           (0 < (short)uVar48) * ((short)uVar48 < 0x100) * (char)uVar48 - (0xff < (short)uVar48);
      wc_isprint[0x8a] =
           (0 < (short)uVar50) * ((short)uVar50 < 0x100) * (char)uVar50 - (0xff < (short)uVar50);
      wc_isprint[0x8b] =
           (0 < (short)uVar52) * ((short)uVar52 < 0x100) * (char)uVar52 - (0xff < (short)uVar52);
      wc_isprint[0x8c] =
           (0 < (short)uVar54) * ((short)uVar54 < 0x100) * (char)uVar54 - (0xff < (short)uVar54);
      wc_isprint[0x8d] =
           (0 < (short)uVar56) * ((short)uVar56 < 0x100) * (char)uVar56 - (0xff < (short)uVar56);
      wc_isprint[0x8e] =
           (0 < (short)uVar58) * ((short)uVar58 < 0x100) * (char)uVar58 - (0xff < (short)uVar58);
      wc_isprint[0x8f] =
           (0 < (short)uVar60) * ((short)uVar60 < 0x100) * (char)uVar60 - (0xff < (short)uVar60);
      uVar46 = ~-(ushort)((puVar2[0x98] & __LC42) == 0) & __LC43 & __LC44;
      uVar48 = ~-(ushort)((puVar2[0x99] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar50 = ~-(ushort)((puVar2[0x9a] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar52 = ~-(ushort)((puVar2[0x9b] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar54 = ~-(ushort)((puVar2[0x9c] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar56 = ~-(ushort)((puVar2[0x9d] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar58 = ~-(ushort)((puVar2[0x9e] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar60 = ~-(ushort)((puVar2[0x9f] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      uVar38 = ~-(ushort)((puVar2[0x90] & __LC42) == 0) & __LC43 & __LC44;
      uVar39 = ~-(ushort)((puVar2[0x91] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar40 = ~-(ushort)((puVar2[0x92] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar41 = ~-(ushort)((puVar2[0x93] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar42 = ~-(ushort)((puVar2[0x94] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar43 = ~-(ushort)((puVar2[0x95] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar44 = ~-(ushort)((puVar2[0x96] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar45 = ~-(ushort)((puVar2[0x97] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      wc_isprint[0x90] =
           (0 < (short)uVar38) * ((short)uVar38 < 0x100) * (char)uVar38 - (0xff < (short)uVar38);
      wc_isprint[0x91] =
           (0 < (short)uVar39) * ((short)uVar39 < 0x100) * (char)uVar39 - (0xff < (short)uVar39);
      wc_isprint[0x92] =
           (0 < (short)uVar40) * ((short)uVar40 < 0x100) * (char)uVar40 - (0xff < (short)uVar40);
      wc_isprint[0x93] =
           (0 < (short)uVar41) * ((short)uVar41 < 0x100) * (char)uVar41 - (0xff < (short)uVar41);
      wc_isprint[0x94] =
           (0 < (short)uVar42) * ((short)uVar42 < 0x100) * (char)uVar42 - (0xff < (short)uVar42);
      wc_isprint[0x95] =
           (0 < (short)uVar43) * ((short)uVar43 < 0x100) * (char)uVar43 - (0xff < (short)uVar43);
      wc_isprint[0x96] =
           (0 < (short)uVar44) * ((short)uVar44 < 0x100) * (char)uVar44 - (0xff < (short)uVar44);
      wc_isprint[0x97] =
           (0 < (short)uVar45) * ((short)uVar45 < 0x100) * (char)uVar45 - (0xff < (short)uVar45);
      wc_isprint[0x98] =
           (0 < (short)uVar46) * ((short)uVar46 < 0x100) * (char)uVar46 - (0xff < (short)uVar46);
      wc_isprint[0x99] =
           (0 < (short)uVar48) * ((short)uVar48 < 0x100) * (char)uVar48 - (0xff < (short)uVar48);
      wc_isprint[0x9a] =
           (0 < (short)uVar50) * ((short)uVar50 < 0x100) * (char)uVar50 - (0xff < (short)uVar50);
      wc_isprint[0x9b] =
           (0 < (short)uVar52) * ((short)uVar52 < 0x100) * (char)uVar52 - (0xff < (short)uVar52);
      wc_isprint[0x9c] =
           (0 < (short)uVar54) * ((short)uVar54 < 0x100) * (char)uVar54 - (0xff < (short)uVar54);
      wc_isprint[0x9d] =
           (0 < (short)uVar56) * ((short)uVar56 < 0x100) * (char)uVar56 - (0xff < (short)uVar56);
      wc_isprint[0x9e] =
           (0 < (short)uVar58) * ((short)uVar58 < 0x100) * (char)uVar58 - (0xff < (short)uVar58);
      wc_isprint[0x9f] =
           (0 < (short)uVar60) * ((short)uVar60 < 0x100) * (char)uVar60 - (0xff < (short)uVar60);
      uVar46 = ~-(ushort)((puVar2[0xa8] & __LC42) == 0) & __LC43 & __LC44;
      uVar48 = ~-(ushort)((puVar2[0xa9] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar50 = ~-(ushort)((puVar2[0xaa] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar52 = ~-(ushort)((puVar2[0xab] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar54 = ~-(ushort)((puVar2[0xac] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar56 = ~-(ushort)((puVar2[0xad] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar58 = ~-(ushort)((puVar2[0xae] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar60 = ~-(ushort)((puVar2[0xaf] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      uVar38 = ~-(ushort)((puVar2[0xa0] & __LC42) == 0) & __LC43 & __LC44;
      uVar39 = ~-(ushort)((puVar2[0xa1] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar40 = ~-(ushort)((puVar2[0xa2] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar41 = ~-(ushort)((puVar2[0xa3] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar42 = ~-(ushort)((puVar2[0xa4] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar43 = ~-(ushort)((puVar2[0xa5] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar44 = ~-(ushort)((puVar2[0xa6] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar45 = ~-(ushort)((puVar2[0xa7] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      wc_isprint[0xa0] =
           (0 < (short)uVar38) * ((short)uVar38 < 0x100) * (char)uVar38 - (0xff < (short)uVar38);
      wc_isprint[0xa1] =
           (0 < (short)uVar39) * ((short)uVar39 < 0x100) * (char)uVar39 - (0xff < (short)uVar39);
      wc_isprint[0xa2] =
           (0 < (short)uVar40) * ((short)uVar40 < 0x100) * (char)uVar40 - (0xff < (short)uVar40);
      wc_isprint[0xa3] =
           (0 < (short)uVar41) * ((short)uVar41 < 0x100) * (char)uVar41 - (0xff < (short)uVar41);
      wc_isprint[0xa4] =
           (0 < (short)uVar42) * ((short)uVar42 < 0x100) * (char)uVar42 - (0xff < (short)uVar42);
      wc_isprint[0xa5] =
           (0 < (short)uVar43) * ((short)uVar43 < 0x100) * (char)uVar43 - (0xff < (short)uVar43);
      wc_isprint[0xa6] =
           (0 < (short)uVar44) * ((short)uVar44 < 0x100) * (char)uVar44 - (0xff < (short)uVar44);
      wc_isprint[0xa7] =
           (0 < (short)uVar45) * ((short)uVar45 < 0x100) * (char)uVar45 - (0xff < (short)uVar45);
      wc_isprint[0xa8] =
           (0 < (short)uVar46) * ((short)uVar46 < 0x100) * (char)uVar46 - (0xff < (short)uVar46);
      wc_isprint[0xa9] =
           (0 < (short)uVar48) * ((short)uVar48 < 0x100) * (char)uVar48 - (0xff < (short)uVar48);
      wc_isprint[0xaa] =
           (0 < (short)uVar50) * ((short)uVar50 < 0x100) * (char)uVar50 - (0xff < (short)uVar50);
      wc_isprint[0xab] =
           (0 < (short)uVar52) * ((short)uVar52 < 0x100) * (char)uVar52 - (0xff < (short)uVar52);
      wc_isprint[0xac] =
           (0 < (short)uVar54) * ((short)uVar54 < 0x100) * (char)uVar54 - (0xff < (short)uVar54);
      wc_isprint[0xad] =
           (0 < (short)uVar56) * ((short)uVar56 < 0x100) * (char)uVar56 - (0xff < (short)uVar56);
      wc_isprint[0xae] =
           (0 < (short)uVar58) * ((short)uVar58 < 0x100) * (char)uVar58 - (0xff < (short)uVar58);
      wc_isprint[0xaf] =
           (0 < (short)uVar60) * ((short)uVar60 < 0x100) * (char)uVar60 - (0xff < (short)uVar60);
      uVar46 = ~-(ushort)((puVar2[0xb8] & __LC42) == 0) & __LC43 & __LC44;
      uVar48 = ~-(ushort)((puVar2[0xb9] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar50 = ~-(ushort)((puVar2[0xba] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar52 = ~-(ushort)((puVar2[0xbb] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar54 = ~-(ushort)((puVar2[0xbc] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar56 = ~-(ushort)((puVar2[0xbd] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar58 = ~-(ushort)((puVar2[0xbe] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar60 = ~-(ushort)((puVar2[0xbf] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      uVar38 = ~-(ushort)((puVar2[0xb0] & __LC42) == 0) & __LC43 & __LC44;
      uVar39 = ~-(ushort)((puVar2[0xb1] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar40 = ~-(ushort)((puVar2[0xb2] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar41 = ~-(ushort)((puVar2[0xb3] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar42 = ~-(ushort)((puVar2[0xb4] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar43 = ~-(ushort)((puVar2[0xb5] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar44 = ~-(ushort)((puVar2[0xb6] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar45 = ~-(ushort)((puVar2[0xb7] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      wc_isprint[0xb0] =
           (0 < (short)uVar38) * ((short)uVar38 < 0x100) * (char)uVar38 - (0xff < (short)uVar38);
      wc_isprint[0xb1] =
           (0 < (short)uVar39) * ((short)uVar39 < 0x100) * (char)uVar39 - (0xff < (short)uVar39);
      wc_isprint[0xb2] =
           (0 < (short)uVar40) * ((short)uVar40 < 0x100) * (char)uVar40 - (0xff < (short)uVar40);
      wc_isprint[0xb3] =
           (0 < (short)uVar41) * ((short)uVar41 < 0x100) * (char)uVar41 - (0xff < (short)uVar41);
      wc_isprint[0xb4] =
           (0 < (short)uVar42) * ((short)uVar42 < 0x100) * (char)uVar42 - (0xff < (short)uVar42);
      wc_isprint[0xb5] =
           (0 < (short)uVar43) * ((short)uVar43 < 0x100) * (char)uVar43 - (0xff < (short)uVar43);
      wc_isprint[0xb6] =
           (0 < (short)uVar44) * ((short)uVar44 < 0x100) * (char)uVar44 - (0xff < (short)uVar44);
      wc_isprint[0xb7] =
           (0 < (short)uVar45) * ((short)uVar45 < 0x100) * (char)uVar45 - (0xff < (short)uVar45);
      wc_isprint[0xb8] =
           (0 < (short)uVar46) * ((short)uVar46 < 0x100) * (char)uVar46 - (0xff < (short)uVar46);
      wc_isprint[0xb9] =
           (0 < (short)uVar48) * ((short)uVar48 < 0x100) * (char)uVar48 - (0xff < (short)uVar48);
      wc_isprint[0xba] =
           (0 < (short)uVar50) * ((short)uVar50 < 0x100) * (char)uVar50 - (0xff < (short)uVar50);
      wc_isprint[0xbb] =
           (0 < (short)uVar52) * ((short)uVar52 < 0x100) * (char)uVar52 - (0xff < (short)uVar52);
      wc_isprint[0xbc] =
           (0 < (short)uVar54) * ((short)uVar54 < 0x100) * (char)uVar54 - (0xff < (short)uVar54);
      wc_isprint[0xbd] =
           (0 < (short)uVar56) * ((short)uVar56 < 0x100) * (char)uVar56 - (0xff < (short)uVar56);
      wc_isprint[0xbe] =
           (0 < (short)uVar58) * ((short)uVar58 < 0x100) * (char)uVar58 - (0xff < (short)uVar58);
      wc_isprint[0xbf] =
           (0 < (short)uVar60) * ((short)uVar60 < 0x100) * (char)uVar60 - (0xff < (short)uVar60);
      uVar46 = ~-(ushort)((puVar2[200] & __LC42) == 0) & __LC43 & __LC44;
      uVar48 = ~-(ushort)((puVar2[0xc9] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar50 = ~-(ushort)((puVar2[0xca] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar52 = ~-(ushort)((puVar2[0xcb] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar54 = ~-(ushort)((puVar2[0xcc] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar56 = ~-(ushort)((puVar2[0xcd] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar58 = ~-(ushort)((puVar2[0xce] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar60 = ~-(ushort)((puVar2[0xcf] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      uVar38 = ~-(ushort)((puVar2[0xc0] & __LC42) == 0) & __LC43 & __LC44;
      uVar39 = ~-(ushort)((puVar2[0xc1] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar40 = ~-(ushort)((puVar2[0xc2] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar41 = ~-(ushort)((puVar2[0xc3] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar42 = ~-(ushort)((puVar2[0xc4] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar43 = ~-(ushort)((puVar2[0xc5] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar44 = ~-(ushort)((puVar2[0xc6] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar45 = ~-(ushort)((puVar2[199] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      wc_isprint[0xc0] =
           (0 < (short)uVar38) * ((short)uVar38 < 0x100) * (char)uVar38 - (0xff < (short)uVar38);
      wc_isprint[0xc1] =
           (0 < (short)uVar39) * ((short)uVar39 < 0x100) * (char)uVar39 - (0xff < (short)uVar39);
      wc_isprint[0xc2] =
           (0 < (short)uVar40) * ((short)uVar40 < 0x100) * (char)uVar40 - (0xff < (short)uVar40);
      wc_isprint[0xc3] =
           (0 < (short)uVar41) * ((short)uVar41 < 0x100) * (char)uVar41 - (0xff < (short)uVar41);
      wc_isprint[0xc4] =
           (0 < (short)uVar42) * ((short)uVar42 < 0x100) * (char)uVar42 - (0xff < (short)uVar42);
      wc_isprint[0xc5] =
           (0 < (short)uVar43) * ((short)uVar43 < 0x100) * (char)uVar43 - (0xff < (short)uVar43);
      wc_isprint[0xc6] =
           (0 < (short)uVar44) * ((short)uVar44 < 0x100) * (char)uVar44 - (0xff < (short)uVar44);
      wc_isprint[199] =
           (0 < (short)uVar45) * ((short)uVar45 < 0x100) * (char)uVar45 - (0xff < (short)uVar45);
      wc_isprint[200] =
           (0 < (short)uVar46) * ((short)uVar46 < 0x100) * (char)uVar46 - (0xff < (short)uVar46);
      wc_isprint[0xc9] =
           (0 < (short)uVar48) * ((short)uVar48 < 0x100) * (char)uVar48 - (0xff < (short)uVar48);
      wc_isprint[0xca] =
           (0 < (short)uVar50) * ((short)uVar50 < 0x100) * (char)uVar50 - (0xff < (short)uVar50);
      wc_isprint[0xcb] =
           (0 < (short)uVar52) * ((short)uVar52 < 0x100) * (char)uVar52 - (0xff < (short)uVar52);
      wc_isprint[0xcc] =
           (0 < (short)uVar54) * ((short)uVar54 < 0x100) * (char)uVar54 - (0xff < (short)uVar54);
      wc_isprint[0xcd] =
           (0 < (short)uVar56) * ((short)uVar56 < 0x100) * (char)uVar56 - (0xff < (short)uVar56);
      wc_isprint[0xce] =
           (0 < (short)uVar58) * ((short)uVar58 < 0x100) * (char)uVar58 - (0xff < (short)uVar58);
      wc_isprint[0xcf] =
           (0 < (short)uVar60) * ((short)uVar60 < 0x100) * (char)uVar60 - (0xff < (short)uVar60);
      uVar46 = ~-(ushort)((puVar2[0xd8] & __LC42) == 0) & __LC43 & __LC44;
      uVar48 = ~-(ushort)((puVar2[0xd9] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar50 = ~-(ushort)((puVar2[0xda] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar52 = ~-(ushort)((puVar2[0xdb] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar54 = ~-(ushort)((puVar2[0xdc] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar56 = ~-(ushort)((puVar2[0xdd] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar58 = ~-(ushort)((puVar2[0xde] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar60 = ~-(ushort)((puVar2[0xdf] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      uVar38 = ~-(ushort)((puVar2[0xd0] & __LC42) == 0) & __LC43 & __LC44;
      uVar39 = ~-(ushort)((puVar2[0xd1] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar40 = ~-(ushort)((puVar2[0xd2] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar41 = ~-(ushort)((puVar2[0xd3] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar42 = ~-(ushort)((puVar2[0xd4] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar43 = ~-(ushort)((puVar2[0xd5] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar44 = ~-(ushort)((puVar2[0xd6] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar45 = ~-(ushort)((puVar2[0xd7] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      wc_isprint[0xd0] =
           (0 < (short)uVar38) * ((short)uVar38 < 0x100) * (char)uVar38 - (0xff < (short)uVar38);
      wc_isprint[0xd1] =
           (0 < (short)uVar39) * ((short)uVar39 < 0x100) * (char)uVar39 - (0xff < (short)uVar39);
      wc_isprint[0xd2] =
           (0 < (short)uVar40) * ((short)uVar40 < 0x100) * (char)uVar40 - (0xff < (short)uVar40);
      wc_isprint[0xd3] =
           (0 < (short)uVar41) * ((short)uVar41 < 0x100) * (char)uVar41 - (0xff < (short)uVar41);
      wc_isprint[0xd4] =
           (0 < (short)uVar42) * ((short)uVar42 < 0x100) * (char)uVar42 - (0xff < (short)uVar42);
      wc_isprint[0xd5] =
           (0 < (short)uVar43) * ((short)uVar43 < 0x100) * (char)uVar43 - (0xff < (short)uVar43);
      wc_isprint[0xd6] =
           (0 < (short)uVar44) * ((short)uVar44 < 0x100) * (char)uVar44 - (0xff < (short)uVar44);
      wc_isprint[0xd7] =
           (0 < (short)uVar45) * ((short)uVar45 < 0x100) * (char)uVar45 - (0xff < (short)uVar45);
      wc_isprint[0xd8] =
           (0 < (short)uVar46) * ((short)uVar46 < 0x100) * (char)uVar46 - (0xff < (short)uVar46);
      wc_isprint[0xd9] =
           (0 < (short)uVar48) * ((short)uVar48 < 0x100) * (char)uVar48 - (0xff < (short)uVar48);
      wc_isprint[0xda] =
           (0 < (short)uVar50) * ((short)uVar50 < 0x100) * (char)uVar50 - (0xff < (short)uVar50);
      wc_isprint[0xdb] =
           (0 < (short)uVar52) * ((short)uVar52 < 0x100) * (char)uVar52 - (0xff < (short)uVar52);
      wc_isprint[0xdc] =
           (0 < (short)uVar54) * ((short)uVar54 < 0x100) * (char)uVar54 - (0xff < (short)uVar54);
      wc_isprint[0xdd] =
           (0 < (short)uVar56) * ((short)uVar56 < 0x100) * (char)uVar56 - (0xff < (short)uVar56);
      wc_isprint[0xde] =
           (0 < (short)uVar58) * ((short)uVar58 < 0x100) * (char)uVar58 - (0xff < (short)uVar58);
      wc_isprint[0xdf] =
           (0 < (short)uVar60) * ((short)uVar60 < 0x100) * (char)uVar60 - (0xff < (short)uVar60);
      uVar46 = ~-(ushort)((puVar2[0xe8] & __LC42) == 0) & __LC43 & __LC44;
      uVar48 = ~-(ushort)((puVar2[0xe9] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar50 = ~-(ushort)((puVar2[0xea] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar52 = ~-(ushort)((puVar2[0xeb] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar54 = ~-(ushort)((puVar2[0xec] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar56 = ~-(ushort)((puVar2[0xed] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar58 = ~-(ushort)((puVar2[0xee] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar60 = ~-(ushort)((puVar2[0xef] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      uVar38 = ~-(ushort)((puVar2[0xe0] & __LC42) == 0) & __LC43 & __LC44;
      uVar39 = ~-(ushort)((puVar2[0xe1] & _UNK_00103462) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar40 = ~-(ushort)((puVar2[0xe2] & _UNK_00103464) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar41 = ~-(ushort)((puVar2[0xe3] & _UNK_00103466) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar42 = ~-(ushort)((puVar2[0xe4] & _UNK_00103468) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar43 = ~-(ushort)((puVar2[0xe5] & _UNK_0010346a) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar44 = ~-(ushort)((puVar2[0xe6] & _UNK_0010346c) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar45 = ~-(ushort)((puVar2[0xe7] & _UNK_0010346e) == 0) & _UNK_0010347e & _UNK_0010348e;
      wc_isprint[0xe0] =
           (0 < (short)uVar38) * ((short)uVar38 < 0x100) * (char)uVar38 - (0xff < (short)uVar38);
      wc_isprint[0xe1] =
           (0 < (short)uVar39) * ((short)uVar39 < 0x100) * (char)uVar39 - (0xff < (short)uVar39);
      wc_isprint[0xe2] =
           (0 < (short)uVar40) * ((short)uVar40 < 0x100) * (char)uVar40 - (0xff < (short)uVar40);
      wc_isprint[0xe3] =
           (0 < (short)uVar41) * ((short)uVar41 < 0x100) * (char)uVar41 - (0xff < (short)uVar41);
      wc_isprint[0xe4] =
           (0 < (short)uVar42) * ((short)uVar42 < 0x100) * (char)uVar42 - (0xff < (short)uVar42);
      wc_isprint[0xe5] =
           (0 < (short)uVar43) * ((short)uVar43 < 0x100) * (char)uVar43 - (0xff < (short)uVar43);
      wc_isprint[0xe6] =
           (0 < (short)uVar44) * ((short)uVar44 < 0x100) * (char)uVar44 - (0xff < (short)uVar44);
      wc_isprint[0xe7] =
           (0 < (short)uVar45) * ((short)uVar45 < 0x100) * (char)uVar45 - (0xff < (short)uVar45);
      wc_isprint[0xe8] =
           (0 < (short)uVar46) * ((short)uVar46 < 0x100) * (char)uVar46 - (0xff < (short)uVar46);
      wc_isprint[0xe9] =
           (0 < (short)uVar48) * ((short)uVar48 < 0x100) * (char)uVar48 - (0xff < (short)uVar48);
      wc_isprint[0xea] =
           (0 < (short)uVar50) * ((short)uVar50 < 0x100) * (char)uVar50 - (0xff < (short)uVar50);
      wc_isprint[0xeb] =
           (0 < (short)uVar52) * ((short)uVar52 < 0x100) * (char)uVar52 - (0xff < (short)uVar52);
      wc_isprint[0xec] =
           (0 < (short)uVar54) * ((short)uVar54 < 0x100) * (char)uVar54 - (0xff < (short)uVar54);
      wc_isprint[0xed] =
           (0 < (short)uVar56) * ((short)uVar56 < 0x100) * (char)uVar56 - (0xff < (short)uVar56);
      wc_isprint[0xee] =
           (0 < (short)uVar58) * ((short)uVar58 < 0x100) * (char)uVar58 - (0xff < (short)uVar58);
      wc_isprint[0xef] =
           (0 < (short)uVar60) * ((short)uVar60 < 0x100) * (char)uVar60 - (0xff < (short)uVar60);
      uVar46 = ~-(ushort)((__LC42 & puVar2[0xf0]) == 0) & __LC43 & __LC44;
      uVar48 = ~-(ushort)((_UNK_00103462 & puVar2[0xf1]) == 0) & _UNK_00103472 & _UNK_00103482;
      uVar50 = ~-(ushort)((_UNK_00103464 & puVar2[0xf2]) == 0) & _UNK_00103474 & _UNK_00103484;
      uVar52 = ~-(ushort)((_UNK_00103466 & puVar2[0xf3]) == 0) & _UNK_00103476 & _UNK_00103486;
      uVar54 = ~-(ushort)((_UNK_00103468 & puVar2[0xf4]) == 0) & _UNK_00103478 & _UNK_00103488;
      uVar56 = ~-(ushort)((_UNK_0010346a & puVar2[0xf5]) == 0) & _UNK_0010347a & _UNK_0010348a;
      uVar58 = ~-(ushort)((_UNK_0010346c & puVar2[0xf6]) == 0) & _UNK_0010347c & _UNK_0010348c;
      uVar60 = ~-(ushort)((_UNK_0010346e & puVar2[0xf7]) == 0) & _UNK_0010347e & _UNK_0010348e;
      uVar38 = __LC44 & ~-(ushort)((puVar2[0xf8] & __LC42) == 0) & __LC43;
      uVar39 = _UNK_00103482 & ~-(ushort)((puVar2[0xf9] & _UNK_00103462) == 0) & _UNK_00103472;
      uVar40 = _UNK_00103484 & ~-(ushort)((puVar2[0xfa] & _UNK_00103464) == 0) & _UNK_00103474;
      uVar41 = _UNK_00103486 & ~-(ushort)((puVar2[0xfb] & _UNK_00103466) == 0) & _UNK_00103476;
      uVar42 = _UNK_00103488 & ~-(ushort)((puVar2[0xfc] & _UNK_00103468) == 0) & _UNK_00103478;
      uVar43 = _UNK_0010348a & ~-(ushort)((puVar2[0xfd] & _UNK_0010346a) == 0) & _UNK_0010347a;
      uVar44 = _UNK_0010348c & ~-(ushort)((puVar2[0xfe] & _UNK_0010346c) == 0) & _UNK_0010347c;
      uVar45 = _UNK_0010348e & ~-(ushort)((puVar2[0xff] & _UNK_0010346e) == 0) & _UNK_0010347e;
      wc_isprint[0xf0] =
           (0 < (short)uVar46) * ((short)uVar46 < 0x100) * (char)uVar46 - (0xff < (short)uVar46);
      wc_isprint[0xf1] =
           (0 < (short)uVar48) * ((short)uVar48 < 0x100) * (char)uVar48 - (0xff < (short)uVar48);
      wc_isprint[0xf2] =
           (0 < (short)uVar50) * ((short)uVar50 < 0x100) * (char)uVar50 - (0xff < (short)uVar50);
      wc_isprint[0xf3] =
           (0 < (short)uVar52) * ((short)uVar52 < 0x100) * (char)uVar52 - (0xff < (short)uVar52);
      wc_isprint[0xf4] =
           (0 < (short)uVar54) * ((short)uVar54 < 0x100) * (char)uVar54 - (0xff < (short)uVar54);
      wc_isprint[0xf5] =
           (0 < (short)uVar56) * ((short)uVar56 < 0x100) * (char)uVar56 - (0xff < (short)uVar56);
      wc_isprint[0xf6] =
           (0 < (short)uVar58) * ((short)uVar58 < 0x100) * (char)uVar58 - (0xff < (short)uVar58);
      wc_isprint[0xf7] =
           (0 < (short)uVar60) * ((short)uVar60 < 0x100) * (char)uVar60 - (0xff < (short)uVar60);
      wc_isprint[0xf8] =
           (0 < (short)uVar38) * ((short)uVar38 < 0x100) * (char)uVar38 - (0xff < (short)uVar38);
      wc_isprint[0xf9] =
           (0 < (short)uVar39) * ((short)uVar39 < 0x100) * (char)uVar39 - (0xff < (short)uVar39);
      wc_isprint[0xfa] =
           (0 < (short)uVar40) * ((short)uVar40 < 0x100) * (char)uVar40 - (0xff < (short)uVar40);
      wc_isprint[0xfb] =
           (0 < (short)uVar41) * ((short)uVar41 < 0x100) * (char)uVar41 - (0xff < (short)uVar41);
      wc_isprint[0xfc] =
           (0 < (short)uVar42) * ((short)uVar42 < 0x100) * (char)uVar42 - (0xff < (short)uVar42);
      wc_isprint[0xfd] =
           (0 < (short)uVar43) * ((short)uVar43 < 0x100) * (char)uVar43 - (0xff < (short)uVar43);
      wc_isprint[0xfe] =
           (0 < (short)uVar44) * ((short)uVar44 < 0x100) * (char)uVar44 - (0xff < (short)uVar44);
      wc_isprint[0xff] =
           (0 < (short)uVar45) * ((short)uVar45 < 0x100) * (char)uVar45 - (0xff < (short)uVar45);
      goto LAB_00102838;
    }
    if (print_linelength != 0) goto LAB_00102475;
  }
  else {
    if (print_linelength != 0) goto LAB_00102475;
LAB_00102838:
    if (print_words == 0) goto LAB_00102845;
  }
LAB_00102a87:
  ppuVar14 = __ctype_b_loc();
  puVar25 = (undefined1 *)*ppuVar14;
  if (posixly_correct != '\0') goto LAB_00102e92;
  uVar19 = 0;
  puVar26 = (uint *)&wc_isspace;
  do {
    bVar27 = true;
    if ((*(byte *)((long)puVar25 + uVar19 * 2 + 1) & 0x20) == 0) {
      iVar12 = rpl_btowc(uVar19 & 0xffffffff);
      bVar27 = iVar12 == 0x2007 || iVar12 == 0xa0;
      if (iVar12 != 0x2007 && iVar12 != 0xa0) {
        bVar27 = iVar12 == 0x2060 || iVar12 == 0x202f;
      }
    }
    (&wc_isspace)[uVar19] = bVar27;
    uVar19 = uVar19 + 1;
  } while (uVar19 != 0x100);
  pcVar24 = (char *)0x100;
LAB_00102845:
  do {
    iVar22 = (int)__stream;
    iVar12 = _optind;
    if (pcVar13 == (char *)0x0) goto LAB_00102e5f;
    if (_optind < iVar22) {
      pcVar13 = (char *)quotearg_style(4,param_2[_optind]);
      uVar16 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar16,pcVar13);
      uVar16 = dcgettext(0,"file operands cannot be combined with --files0-from",5);
      __fprintf_chk(_stderr,2,&_LC48,uVar16);
switchD_00102323_caseD_4d:
      iVar12 = usage(1);
      goto LAB_00102f7a;
    }
    iVar12 = strcmp(pcVar13,"-");
    __stream = _stdin;
    if ((iVar12 != 0) && (__stream = (FILE *)rpl_fopen(pcVar13,&_LC50), __stream == (FILE *)0x0)) {
      uVar16 = quotearg_style(4,pcVar13);
      pcVar13 = (char *)dcgettext(0,"cannot open %s for reading",5);
      piVar21 = __errno_location();
      error(1,*piVar21,pcVar13,uVar16);
LAB_00102ff2:
      if ((uint)print_lines + (uint)print_words + (uint)print_chars + (uint)print_bytes +
          (uint)print_linelength != 1) goto LAB_00102dca;
LAB_001028e9:
      bVar27 = total_mode == 2;
      *local_220 = 1;
      if (bVar27) goto LAB_00102907;
      if (puVar26 != (uint *)0x1) goto LAB_00102907;
LAB_00102b17:
      if (0 < *local_220) goto LAB_00102907;
      iVar12 = 1;
      uVar19 = 0;
      puVar23 = (uint *)0x0;
      piVar21 = local_220;
      do {
        if (*piVar21 == 0) {
          if ((piVar21[8] & 0xf000U) == 0x8000) {
            lVar20 = uVar19 + 0x8000000000000000;
            uVar19 = lVar20 + *(long *)(piVar21 + 0xe) + 0x8000000000000000;
            if (SCARRY8(lVar20,*(long *)(piVar21 + 0xe))) {
              uVar19 = 0xffffffffffffffff;
              break;
            }
          }
          else {
            iVar12 = 7;
          }
        }
        puVar23 = (uint *)((long)puVar23 + 1);
        piVar21 = piVar21 + 0x26;
      } while (puVar26 != puVar23);
      number_width = 1;
      for (; 9 < uVar19; uVar19 = uVar19 / 10) {
        number_width = number_width + 1;
      }
      if (number_width <= iVar12) {
        number_width = iVar12;
      }
      do {
        __stream = (FILE *)0x0;
        local_20a = 1;
        while (pcVar24 = (char *)argv_iter(param_2,&local_1fc), pcVar24 != (char *)0x0) {
          if (pcVar13 == (char *)0x0) {
            if (*pcVar24 == '\0') {
              dcgettext(0,"invalid zero-length file name",5);
              error(0,0,&_LC6);
              goto LAB_00102c2c;
            }
LAB_001029f6:
            pFVar15 = (FILE *)0x0;
            if (puVar26 != (uint *)0x0) {
              pFVar15 = __stream;
            }
LAB_00102a06:
            local_218 = (int *)((long)&pFVar15->_flags + (long)local_220);
            iVar12 = strcmp(pcVar24,"-");
            if (iVar12 == 0) {
              have_read_stdin = '\x01';
              bVar11 = wc(0,pcVar24,local_218,0xffffffffffffffff);
            }
            else {
LAB_00102968:
              iVar12 = open(pcVar24,0);
              if (iVar12 != -1) {
                bVar11 = wc(iVar12,pcVar24,local_218,0);
                iVar12 = close(iVar12);
                if (iVar12 == 0) goto LAB_001029a6;
              }
              quotearg_n_style_colon(0,3,pcVar24);
              piVar21 = __errno_location();
              bVar11 = 0;
              error(0,*piVar21,&_LC6);
            }
LAB_001029a6:
            local_20a = local_20a & bVar11;
          }
          else {
            if ((*pcVar13 == '-') && (pcVar13[1] == '\0')) {
              iVar12 = strcmp(pcVar24,"-");
              if (iVar12 == 0) {
                quotearg_style(4,pcVar24);
                uVar16 = dcgettext(0,
                                   "when reading file names from stdin, no file name of %s allowed",
                                   5);
                error(0,0,uVar16);
                if (*pcVar24 != '\0') goto LAB_00102c2c;
              }
              else if (*pcVar24 != '\0') {
                pFVar15 = __stream;
                if (puVar26 != (uint *)0x0) goto LAB_00102a06;
                local_218 = local_220;
                goto LAB_00102968;
              }
            }
            else if (*pcVar24 != '\0') goto LAB_001029f6;
            uVar16 = dcgettext(0,"invalid zero-length file name",5);
            uVar17 = argv_iter_n_args(param_2);
            uVar18 = quotearg_n_style_colon(0,3,pcVar13);
            error(0,0,"%s:%zu: %s",uVar18,uVar17,uVar16);
LAB_00102c2c:
            local_20a = 0;
          }
          if (puVar26 == (uint *)0x0) {
            *local_220 = 1;
          }
          __stream = (FILE *)&__stream->__pad1;
        }
        pcVar24 = (char *)0x0;
        puVar25 = pcVar24;
        iVar12 = local_1fc;
        if (local_1fc == 2) {
          bVar11 = pcVar13 == (char *)0x0 & local_20a;
          pcVar13 = (char *)(ulong)bVar11;
          if ((bVar11 != 0) && (lVar20 = argv_iter_n_args(param_2), local_20a = bVar11, lVar20 == 0)
             ) {
            have_read_stdin = '\x01';
            local_20a = wc(0,0,local_220,0xffffffffffffffff);
          }
        }
        else {
LAB_001030f9:
          if (iVar12 == 3) goto LAB_00102e8d;
          __stream = (FILE *)quotearg_n_style_colon(0,3,pcVar13);
          pcVar13 = (char *)dcgettext(0,"%s: read error",5);
          piVar21 = __errno_location();
          error(0,*piVar21,pcVar13,__stream);
          local_20a = 0;
        }
        if (local_209 != '\0') {
          readtokens0_free(&local_1f8);
        }
        if ((total_mode != 3) &&
           ((total_mode != 0 || (uVar19 = argv_iter_n_args(param_2), 1 < uVar19)))) {
          if (total_lines_overflow != '\0') {
            total_lines = 0xffffffffffffffff;
            uVar16 = dcgettext(0,"total lines",5);
            error(0,0x4b,uVar16);
            local_20a = 0;
          }
          if (total_words_overflow != '\0') {
            total_words = 0xffffffffffffffff;
            uVar16 = dcgettext(0,"total words",5);
            error(0,0x4b,uVar16);
            local_20a = 0;
          }
          if (total_chars_overflow != '\0') {
            total_chars = 0xffffffffffffffff;
            uVar16 = dcgettext(0,"total characters",5);
            error(0,0x4b,uVar16);
            local_20a = 0;
          }
          if (total_bytes_overflow != '\0') {
            total_bytes = 0xffffffffffffffff;
            uVar16 = dcgettext(0,"total bytes",5);
            error(0,0x4b,uVar16);
            local_20a = 0;
          }
          if (total_mode != 2) {
            pcVar24 = (char *)dcgettext(0,"total",5);
          }
          write_counts(total_lines,total_words,total_chars,total_bytes,max_line_length,pcVar24);
        }
        argv_iter_free(param_2);
        free(local_220);
        if ((have_read_stdin == '\0') || (iVar12 = close(0), iVar12 == 0)) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return local_20a ^ 1;
          }
          goto LAB_001031ee;
        }
        piVar21 = __errno_location();
        iVar12 = error(1,*piVar21,&_LC49);
LAB_00102e5f:
        iVar22 = (int)__stream;
        if (iVar12 < iVar22) {
LAB_00102f7a:
          __stream = (FILE *)(ulong)(uint)(iVar22 - iVar12);
          pcVar24 = (char *)(param_2 + iVar12);
          puVar26 = (uint *)(long)(iVar22 - iVar12);
        }
        else {
          pcVar24 = (char *)&stdin_only_2;
          puVar26 = (uint *)0x1;
        }
        param_2 = (undefined8 *)argv_iter_init_argv(pcVar24);
        local_209 = '\0';
        if (param_2 == (undefined8 *)0x0) goto LAB_00102e8d;
LAB_00102da5:
        local_220 = (int *)xnmalloc();
        if (puVar26 == (uint *)0x1) goto LAB_00102ff2;
        if (0 < (long)puVar26) {
LAB_00102dca:
          puVar23 = (uint *)0x0;
          __buf = (stat *)(local_220 + 2);
          do {
            __s1 = *(char **)((long)pcVar24 + (long)puVar23 * 4 * 2);
            if ((__s1 == (char *)0x0) || (iVar12 = strcmp(__s1,"-"), iVar12 == 0)) {
              iVar12 = fstat(0,__buf);
            }
            else {
              iVar12 = stat(__s1,__buf);
            }
            puVar23 = (uint *)((long)puVar23 + 1);
            *(int *)(__buf[-1].__unused + 2) = iVar12;
            __buf = (stat *)&__buf[1].st_ino;
          } while (puVar26 != puVar23);
          if (total_mode != 2) goto LAB_00102b17;
        }
LAB_00102907:
        number_width = 1;
      } while( true );
    }
    iVar12 = fileno(__stream);
    iVar12 = fstat(iVar12,&local_d8);
    if ((iVar12 == 0) && ((local_d8.st_mode & 0xf000) == 0x8000)) {
      dVar62 = (double)local_d8.st_size;
      dVar29 = (double)physmem_available();
      dVar30 = _LC35;
      if (dVar29 * _LC52 <= _LC35) {
        dVar30 = (double)physmem_available();
        dVar30 = _LC52 * dVar30;
      }
      if (dVar30 < dVar62) goto LAB_001028ad;
      readtokens0_init(&local_1f8);
      local_209 = readtokens0(__stream,&local_1f8);
      if ((local_209 == '\0') ||
         (iVar12 = rpl_fclose(__stream), pcVar24 = (char *)local_1f0, puVar26 = local_1f8,
         iVar12 != 0)) {
        uVar16 = quotearg_style(4,pcVar13);
        uVar17 = dcgettext(0,"cannot read file names from %s",5);
        error(1,0,uVar17,uVar16);
LAB_001031ee:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      param_2 = (undefined8 *)argv_iter_init_argv(local_1f0);
    }
    else {
LAB_001028ad:
      pcVar24 = (char *)0x0;
      puVar26 = (uint *)0x0;
      param_2 = (undefined8 *)argv_iter_init_stream(__stream);
      local_209 = '\0';
    }
    if (param_2 != (undefined8 *)0x0) {
      if (puVar26 != (uint *)0x0) goto LAB_00102da5;
      local_220 = (int *)xnmalloc(1);
      goto LAB_001028e9;
    }
LAB_00102e8d:
    xalloc_die();
LAB_00102e92:
    uVar10 = _UNK_0010349e;
    uVar9 = _UNK_0010349c;
    uVar8 = _UNK_0010349a;
    uVar7 = _UNK_00103498;
    uVar6 = _UNK_00103496;
    uVar5 = _UNK_00103494;
    uVar4 = _UNK_00103492;
    uVar3 = __LC45;
    uVar60 = _UNK_0010348e;
    uVar58 = _UNK_0010348c;
    uVar56 = _UNK_0010348a;
    uVar54 = _UNK_00103488;
    uVar52 = _UNK_00103486;
    uVar50 = _UNK_00103484;
    uVar48 = _UNK_00103482;
    uVar46 = __LC44;
    uVar45 = _UNK_0010347e;
    uVar44 = _UNK_0010347c;
    uVar43 = _UNK_0010347a;
    uVar42 = _UNK_00103478;
    uVar41 = _UNK_00103476;
    uVar40 = _UNK_00103474;
    uVar39 = _UNK_00103472;
    uVar38 = __LC43;
    lVar20 = 0;
    puVar26 = (uint *)&wc_isspace;
    do {
      puVar1 = (ushort *)((long)puVar25 + (lVar20 + 8) * 2);
      puVar2 = (ushort *)((long)puVar25 + lVar20 * 2);
      uVar28 = ~-(ushort)((*puVar2 & uVar3) == 0) & uVar38 & uVar46;
      uVar31 = ~-(ushort)((puVar2[1] & uVar4) == 0) & uVar39 & uVar48;
      uVar32 = ~-(ushort)((puVar2[2] & uVar5) == 0) & uVar40 & uVar50;
      uVar33 = ~-(ushort)((puVar2[3] & uVar6) == 0) & uVar41 & uVar52;
      uVar34 = ~-(ushort)((puVar2[4] & uVar7) == 0) & uVar42 & uVar54;
      uVar35 = ~-(ushort)((puVar2[5] & uVar8) == 0) & uVar43 & uVar56;
      uVar36 = ~-(ushort)((puVar2[6] & uVar9) == 0) & uVar44 & uVar58;
      uVar37 = ~-(ushort)((puVar2[7] & uVar10) == 0) & uVar45 & uVar60;
      uVar47 = ~-(ushort)((*puVar1 & uVar3) == 0) & uVar38 & uVar46;
      uVar49 = ~-(ushort)((puVar1[1] & uVar4) == 0) & uVar39 & uVar48;
      uVar51 = ~-(ushort)((puVar1[2] & uVar5) == 0) & uVar40 & uVar50;
      uVar53 = ~-(ushort)((puVar1[3] & uVar6) == 0) & uVar41 & uVar52;
      uVar55 = ~-(ushort)((puVar1[4] & uVar7) == 0) & uVar42 & uVar54;
      uVar57 = ~-(ushort)((puVar1[5] & uVar8) == 0) & uVar43 & uVar56;
      uVar59 = ~-(ushort)((puVar1[6] & uVar9) == 0) & uVar44 & uVar58;
      uVar61 = ~-(ushort)((puVar1[7] & uVar10) == 0) & uVar45 & uVar60;
      (&wc_isspace)[lVar20] =
           (0 < (short)uVar28) * ((short)uVar28 < 0x100) * (char)uVar28 - (0xff < (short)uVar28);
      *(char *)(lVar20 + 0x101521) =
           (0 < (short)uVar31) * ((short)uVar31 < 0x100) * (char)uVar31 - (0xff < (short)uVar31);
      *(char *)(lVar20 + 0x101522) =
           (0 < (short)uVar32) * ((short)uVar32 < 0x100) * (char)uVar32 - (0xff < (short)uVar32);
      *(char *)(lVar20 + 0x101523) =
           (0 < (short)uVar33) * ((short)uVar33 < 0x100) * (char)uVar33 - (0xff < (short)uVar33);
      *(char *)(lVar20 + 0x101524) =
           (0 < (short)uVar34) * ((short)uVar34 < 0x100) * (char)uVar34 - (0xff < (short)uVar34);
      *(char *)(lVar20 + 0x101525) =
           (0 < (short)uVar35) * ((short)uVar35 < 0x100) * (char)uVar35 - (0xff < (short)uVar35);
      *(char *)(lVar20 + 0x101526) =
           (0 < (short)uVar36) * ((short)uVar36 < 0x100) * (char)uVar36 - (0xff < (short)uVar36);
      *(char *)(lVar20 + 0x101527) =
           (0 < (short)uVar37) * ((short)uVar37 < 0x100) * (char)uVar37 - (0xff < (short)uVar37);
      *(char *)(lVar20 + 0x101528) =
           (0 < (short)uVar47) * ((short)uVar47 < 0x100) * (char)uVar47 - (0xff < (short)uVar47);
      *(char *)(lVar20 + 0x101529) =
           (0 < (short)uVar49) * ((short)uVar49 < 0x100) * (char)uVar49 - (0xff < (short)uVar49);
      *(char *)(lVar20 + 0x10152a) =
           (0 < (short)uVar51) * ((short)uVar51 < 0x100) * (char)uVar51 - (0xff < (short)uVar51);
      *(char *)(lVar20 + 0x10152b) =
           (0 < (short)uVar53) * ((short)uVar53 < 0x100) * (char)uVar53 - (0xff < (short)uVar53);
      *(char *)(lVar20 + 0x10152c) =
           (0 < (short)uVar55) * ((short)uVar55 < 0x100) * (char)uVar55 - (0xff < (short)uVar55);
      *(char *)(lVar20 + 0x10152d) =
           (0 < (short)uVar57) * ((short)uVar57 < 0x100) * (char)uVar57 - (0xff < (short)uVar57);
      *(char *)(lVar20 + 0x10152e) =
           (0 < (short)uVar59) * ((short)uVar59 < 0x100) * (char)uVar59 - (0xff < (short)uVar59);
      *(char *)(lVar20 + 0x10152f) =
           (0 < (short)uVar61) * ((short)uVar61 < 0x100) * (char)uVar61 - (0xff < (short)uVar61);
      lVar20 = lVar20 + 0x10;
    } while (lVar20 != 0x100);
  } while( true );
}


