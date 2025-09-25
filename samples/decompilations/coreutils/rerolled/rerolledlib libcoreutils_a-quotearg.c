/* WARNING: Unknown calling convention */char *gettext_quote(char *msgid, quoting_style s) {
   byte *pbVar1;
   char *pcVar2;
   pbVar1 = (byte*)locale_charset();
   if (( *pbVar1 & 0xdf ) == 0x55) {
      if (( ( ( ( pbVar1[1] & 0xdf ) == 0x54 ) && ( ( pbVar1[2] & 0xdf ) == 0x46 ) ) && ( pbVar1[3] == 0x2d ) ) && ( ( pbVar1[4] == 0x38 && ( pbVar1[5] == 0 ) ) )) {
         pcVar2 = &_LC0;
         if (*msgid == '`') {
            pcVar2 = &_LC5;
         }

         return pcVar2;
      }

   }
 else if (( ( ( ( *pbVar1 & 0xdf ) == 0x47 ) && ( ( pbVar1[1] & 0xdf ) == 0x42 ) ) && ( pbVar1[2] == 0x31 ) ) && ( ( ( pbVar1[3] == 0x38 && ( pbVar1[4] == 0x30 ) ) && ( ( pbVar1[5] == 0x33 && ( ( pbVar1[6] == 0x30 && ( pbVar1[7] == 0 ) ) ) ) ) ) )) {
      pcVar2 = &_LC1;
      if (*msgid == '`') {
         pcVar2 = &_LC4;
      }

      return pcVar2;
   }

   pcVar2 = "\'";
   if (s == clocale_quoting_style) {
      pcVar2 = "\"";
   }

   return pcVar2;
}
/* WARNING: Type propagation algorithm not settling *//* WARNING: Unknown calling convention */size_t quotearg_buffer_restyled(char *buffer, size_t buffersize, char *arg, size_t argsize, quoting_style quoting_style, int flags, uint *quote_these_too, char *left_quote, char *right_quote) {
   byte *__s1;
   long lVar1;
   bool bVar2;
   bool bVar3;
   bool bVar4;
   bool bVar5;
   bool bVar6;
   bool bVar7;
   bool bVar8;
   quoting_style qVar9;
   int iVar10;
   size_t sVar11;
   ushort **ppuVar12;
   ulong uVar13;
   ulong uVar14;
   char cVar15;
   byte *pbVar16;
   ulong uVar17;
   byte bVar18;
   uint uVar19;
   ulong uVar20;
   ulong uVar21;
   long in_FS_OFFSET;
   bool bVar22;
   bool bVar23;
   bool bVar24;
   bool bVar25;
   bool bVar26;
   bool bVar27;
   quoting_style local_dc;
   ulong local_c0;
   uint *local_b8;
   char *local_90;
   ulong local_88;
   bool local_7d;
   uint local_7c;
   char *local_68;
   char *local_60;
   char32_t w;
   mbstate_t mbstate;
   local_b8 = quote_these_too;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = left_quote;
   local_68 = right_quote;
   local_dc = quoting_style;
   local_7c = flags;
   LAB_00100160:sVar11 = __ctype_get_mb_cur_max();
   uVar19 = local_7c & 2;
   bVar22 = uVar19 != 0;
   switch (local_dc) {
      case literal_quoting_style:
    bVar8 = true;
    uVar17 = 0;
    local_7d = false;
    local_88 = 0;
    bVar22 = false;
    bVar4 = false;
    local_c0 = 0;
    local_90 = (char *)0x0;
    break;
      case shell_quoting_style:
    bVar4 = false;
    goto LAB_00100a32;
      case shell_always_quoting_style:
    bVar8 = true;
    uVar21 = 0;
    bVar4 = false;
    local_7d = false;
    local_88 = buffersize;
    goto LAB_001011ec;
      case shell_escape_quoting_style:
    bVar4 = true;
    goto LAB_00100a32;
      case shell_escape_always_quoting_style:
    bVar8 = true;
    local_7d = false;
    local_88 = 0;
    if (uVar19 == 0) {
      bVar4 = true;
      goto LAB_0010089a;
    }
    bVar4 = false;
LAB_00100a32:
    bVar8 = true;
    local_7d = false;
    bVar22 = true;
    local_88 = 0;
    local_dc = shell_always_quoting_style;
    uVar17 = 0;
    local_c0 = 1;
    local_90 = "\'";
    break;
      case c_quoting_style:
    if (uVar19 == 0) {
      if (buffersize != 0) {
        *buffer = '\"';
      }
      bVar8 = true;
      local_7d = false;
      local_88 = 0;
      bVar22 = false;
      uVar17 = 1;
      bVar4 = true;
      local_c0 = 1;
      local_90 = "\"";
    }
    else {
      bVar8 = true;
      uVar17 = 0;
      local_7d = false;
      local_88 = 0;
      bVar22 = true;
      bVar4 = true;
      local_c0 = 1;
      local_90 = "\"";
    }
    break;
      case c_maybe_quoting_style:
    bVar8 = true;
    uVar17 = 0;
    local_7d = false;
    local_88 = 0;
    bVar22 = true;
    bVar4 = true;
    local_c0 = 1;
    local_90 = "\"";
    local_dc = c_quoting_style;
    break;
      case escape_quoting_style:
    bVar8 = true;
    uVar17 = 0;
    local_7d = false;
    local_88 = 0;
    bVar22 = false;
    bVar4 = true;
    local_c0 = 0;
    local_90 = (char *)0x0;
    break;
      case locale_quoting_style:
      case clocale_quoting_style:
      case custom_quoting_style:
    if (local_dc != custom_quoting_style) {
      local_60 = (char *)dcgettext("gnulib",&_LC6,5);
      if (local_60 == "`") {
        local_60 = gettext_quote("`",local_dc);
      }
      local_68 = (char *)dcgettext("gnulib",&_LC3,5);
      if (local_68 == "\'") {
        local_68 = gettext_quote("\'",local_dc);
      }
    }
    uVar17 = 0;
    if (uVar19 == 0) {
      cVar15 = *local_60;
      while (cVar15 != '\0') {
        if (uVar17 < buffersize) {
          buffer[uVar17] = cVar15;
        }
        uVar17 = uVar17 + 1;
        cVar15 = local_60[uVar17];
      }
    }
    local_c0 = strlen(local_68);
    local_90 = local_68;
    bVar8 = true;
    local_7d = false;
    local_88 = 0;
    bVar4 = true;
    break;
      default:
                    /* WARNING: Subroutine does not return */
    abort();
   }

   LAB_00100290:bVar27 = false;
   uVar21 = 0;
   bVar2 = local_7d;
   LAB_001002a0:bVar23 = argsize != uVar21;
   if (argsize == 0xffffffffffffffff) {
      bVar23 = arg[uVar21] != '\0';
   }

   bVar25 = bVar4;
   if (!bVar23) goto LAB_00101094;
   bVar5 = (bool)( local_dc != shell_always_quoting_style & bVar4 );
   __s1 = (byte*)( arg + uVar21 );
   bVar6 = (bool)( local_c0 != 0 & bVar5 );
   qVar9 = local_dc;
   bVar3 = bVar27;
   if (!bVar6) {
      bVar18 = *__s1;
      uVar20 = (ulong)bVar18;
      if ('?' < (char)bVar18) {
         if ('z' < (char)bVar18) {
            if (bVar18 != 0x7d) {
               if ('}' < (char)bVar18) {
                  if (bVar18 == 0x7e) goto LAB_00100824;
                  uVar20 = 0x7f;
                  goto switchD_0010032d_caseD_1;
               }

               if (bVar18 != 0x7b) {
                  bVar23 = false;
                  uVar20 = 0x7c;
                  goto LAB_00100613;
               }

            }

            LAB_00100ebe:bVar26 = argsize != 1;
            if (argsize == 0xffffffffffffffff) {
               bVar26 = arg[1] != '\0';
            }

            if (bVar26) goto switchD_00100b4a_caseD_21;
            goto LAB_00100824;
         }

         if (bVar18 == 0x40) goto switchD_0010032d_caseD_1;
         uVar14 = 1L << ( bVar18 + 0xbf & 0x3f );
         if (( uVar14 & 0x3ffffff53ffffff ) != 0) goto switchD_0010032d_caseD_25;
         if (( uVar14 & 0xa4000000 ) != 0) goto switchD_0010032d_caseD_21;
         if (local_dc == shell_always_quoting_style) {
            if (bVar22) goto LAB_00100636;
         }
 else {
            LAB_00100f25:bVar6 = (bool)( bVar4 & bVar22 );
            if (!bVar6) goto LAB_0010117d;
            if (local_c0 == 0) goto LAB_00100646;
         }

         uVar21 = uVar21 + 1;
         bVar23 = false;
         bVar18 = 0x5c;
         goto LAB_0010043b;
      }

      switch (uVar20) {
         case 0:
      if (bVar4) {
switchD_00100c97_caseD_0:
        if (!bVar22) {
          bVar25 = (bool)(local_dc == shell_always_quoting_style & (bVar27 ^ 1U));
          bVar6 = bVar25;
          if (bVar25) {
            if (uVar17 < buffersize) {
              buffer[uVar17] = '\'';
            }
            if (uVar17 + 1 < buffersize) {
              buffer[uVar17 + 1] = '$';
            }
            if (uVar17 + 2 < buffersize) {
              buffer[uVar17 + 2] = '\'';
            }
            if (uVar17 + 3 < buffersize) {
              buffer[uVar17 + 3] = '\\';
            }
            uVar17 = uVar17 + 4;
            bVar23 = false;
            bVar18 = 0x30;
            bVar3 = bVar25;
            goto LAB_00100431;
          }
LAB_00100bf8:
          uVar14 = uVar17 + 1;
          if (uVar17 < buffersize) {
            buffer[uVar17] = '\\';
          }
          if (!bVar5) {
            bVar18 = 0x30;
            uVar17 = uVar14;
            bVar25 = bVar23;
            bVar7 = bVar6;
            bVar6 = false;
            goto LAB_00100420;
          }
          if ((uVar21 + 1 < argsize) && ((byte)(arg[uVar21 + 1] - 0x30U) < 10)) {
            if (uVar14 < buffersize) {
              buffer[uVar14] = '0';
            }
            if (uVar17 + 2 < buffersize) {
              buffer[uVar17 + 2] = '0';
            }
            uVar14 = uVar17 + 3;
          }
          bVar26 = false;
          uVar20 = 0x30;
          bVar24 = bVar6;
          goto LAB_00100365;
        }
        qVar9 = shell_escape_always_quoting_style;
        if (local_dc != shell_always_quoting_style) {
          qVar9 = local_dc;
        }
        goto LAB_00100646;
      }
      if ((local_7c & 1) == 0) {
        uVar20 = 0;
        bVar18 = 0;
        bVar24 = false;
        bVar26 = false;
        if ((bool)(bVar5 | bVar22)) goto LAB_00100363;
        bVar25 = false;
        bVar7 = false;
        bVar6 = false;
        goto LAB_00100420;
      }
      uVar21 = uVar21 + 1;
      goto LAB_001002a0;
         default:
switchD_0010032d_caseD_1:
      bVar7 = bVar4;
      if (sVar11 == 1) {
        ppuVar12 = __ctype_b_loc();
        uVar14 = 1;
        bVar25 = (*(byte *)((long)*ppuVar12 + uVar20 * 2 + 1) & 0x40) == 0;
        bVar23 = !bVar25;
        bVar25 = (bool)(bVar25 & bVar4);
        goto LAB_001004ca;
      }
      mbstate.__count = 0;
      mbstate.__value = (anon_union_4_2_91654ee9_for___value)0x0;
      if (argsize == 0xffffffffffffffff) {
        argsize = strlen(arg);
      }
      uVar14 = rpl_mbrtoc32(&w,__s1,argsize - uVar21,&mbstate);
      if (uVar14 == 0) goto switchD_0010032d_caseD_25;
      if (uVar14 == 0xffffffffffffffff) {
        bVar23 = false;
        uVar14 = 0;
LAB_001004ca:
        if (!bVar25) goto switchD_0010032d_caseD_25;
      }
      else {
        if (uVar14 == 0xfffffffffffffffe) {
          uVar14 = 0;
          if (uVar21 < argsize) {
            do {
              if (__s1[uVar14] == 0) break;
              uVar14 = uVar14 + 1;
            } while (argsize - uVar21 != uVar14);
            goto LAB_0010133f;
          }
          bVar23 = false;
          goto LAB_001004ca;
        }
        bVar26 = (bool)(local_dc == shell_always_quoting_style & bVar22);
        if (!bVar26) {
          iVar10 = iswprint(w);
          if (iVar10 != 0) {
            if (uVar14 != 1) {
              bVar7 = false;
              goto LAB_001004da;
            }
            goto switchD_0010032d_caseD_25;
          }
LAB_0010133f:
          bVar23 = false;
          if (1 < uVar14) goto LAB_001004da;
          goto LAB_001004ca;
        }
        if (uVar14 == 1) {
          iVar10 = iswprint(w);
          bVar24 = bVar6;
          if (iVar10 != 0) goto LAB_00100363;
          bVar23 = false;
          goto LAB_001004ca;
        }
        pbVar16 = (byte *)(arg + uVar21 + 1);
        do {
          while (0x21 < (byte)(*pbVar16 - 0x5b)) {
            pbVar16 = pbVar16 + 1;
            if (__s1 + uVar14 == pbVar16) goto LAB_00101419;
          }
          if ((0x20000002bU >> ((ulong)(*pbVar16 - 0x5b) & 0x3f) & 1) != 0) goto LAB_00100629;
          pbVar16 = pbVar16 + 1;
        } while (__s1 + uVar14 != pbVar16);
LAB_00101419:
        iVar10 = iswprint(w);
        if (iVar10 != 0) {
          bVar7 = false;
          goto LAB_001004da;
        }
      }
      bVar23 = false;
LAB_001004da:
      uVar14 = uVar14 + uVar21;
      bVar25 = false;
      uVar13 = uVar21;
      do {
        bVar18 = (byte)uVar20;
        if (bVar7) {
          bVar25 = local_dc == shell_always_quoting_style;
          if (bVar22) goto LAB_00100636;
          bVar27 = (bool)((bVar3 ^ 1U) & local_dc == shell_always_quoting_style);
          if (bVar27) {
            if (uVar17 < buffersize) {
              buffer[uVar17] = '\'';
            }
            if (uVar17 + 1 < buffersize) {
              buffer[uVar17 + 1] = '$';
            }
            if (uVar17 + 2 < buffersize) {
              buffer[uVar17 + 2] = '\'';
            }
            uVar17 = uVar17 + 3;
            bVar3 = bVar27;
          }
          if (uVar17 < buffersize) {
            buffer[uVar17] = '\\';
          }
          if (uVar17 + 1 < buffersize) {
            buffer[uVar17 + 1] = (char)(uVar20 >> 6) + '0';
          }
          if (uVar17 + 2 < buffersize) {
            buffer[uVar17 + 2] = ((byte)(uVar20 >> 3) & 7) + 0x30;
          }
          uVar21 = uVar13 + 1;
          uVar17 = uVar17 + 3;
          bVar18 = (bVar18 & 7) + 0x30;
          bVar25 = bVar7;
          if (uVar14 <= uVar21) goto LAB_001003e8;
        }
        else {
          bVar27 = (bool)((bVar25 ^ 1U) & bVar3);
          if (bVar6) {
            if (uVar17 < buffersize) {
              buffer[uVar17] = '\\';
            }
            uVar17 = uVar17 + 1;
          }
          uVar21 = uVar13 + 1;
          if (uVar14 <= uVar21) goto LAB_0010043b;
          if (bVar27) {
            if (uVar17 < buffersize) {
              buffer[uVar17] = '\'';
            }
            if (uVar17 + 1 < buffersize) {
              buffer[uVar17 + 1] = '\'';
            }
            uVar17 = uVar17 + 2;
            bVar6 = false;
            bVar3 = false;
          }
          else {
            bVar6 = false;
          }
        }
        uVar13 = uVar13 + 1;
        if (uVar17 < buffersize) {
          buffer[uVar17] = bVar18;
        }
        uVar20 = (ulong)(byte)arg[uVar13];
        uVar17 = uVar17 + 1;
      } while( true );
         case 7:
      bVar24 = local_dc == shell_always_quoting_style;
      uVar20 = 7;
      bVar18 = 0x61;
      break;
         case 8:
      bVar24 = local_dc == shell_always_quoting_style;
      uVar20 = 8;
      bVar18 = 0x62;
      break;
         case 9:
      uVar20 = 9;
      bVar18 = 0x74;
      goto LAB_00100846;
         case 10:
      uVar20 = 10;
      bVar18 = 0x6e;
      goto LAB_00100846;
         case 0xb:
      bVar24 = local_dc == shell_always_quoting_style;
      uVar20 = 0xb;
      bVar18 = 0x76;
      break;
         case 0xc:
      bVar24 = local_dc == shell_always_quoting_style;
      uVar20 = 0xc;
      bVar18 = 0x66;
      break;
         case 0xd:
      uVar20 = 0xd;
      bVar18 = 0x72;
LAB_00100846:
      bVar24 = local_dc == shell_always_quoting_style;
      bVar6 = (bool)(bVar22 & bVar24);
      if (bVar6) goto LAB_00100629;
      break;
         case 0x20:
      uVar20 = 0x20;
      goto LAB_00100613;
         case 0x21:
         case 0x22:
         case 0x24:
         case 0x26:
         case 0x28:
         case 0x29:
         case 0x2a:
         case 0x3b:
         case 0x3c:
         case 0x3d:
         case 0x3e:
switchD_0010032d_caseD_21:
      bVar23 = false;
      goto LAB_00100613;
         case 0x23:
switchD_0010032d_caseD_23:
      uVar20 = 0x23;
LAB_00100824:
      if (uVar21 != 0) goto switchD_00100b4a_caseD_21;
LAB_00100613:
      if ((local_dc != shell_always_quoting_style) || (!bVar22)) goto switchD_0010032d_caseD_25;
      goto LAB_00100629;
         case 0x25:
         case 0x2b:
         case 0x2c:
         case 0x2d:
         case 0x2e:
         case 0x2f:
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
         case 0x3a:
      goto switchD_0010032d_caseD_25;
         case 0x27:
      uVar20 = 0x27;
      bVar2 = bVar23;
      if (local_dc != shell_always_quoting_style) goto switchD_0010032d_caseD_25;
      if (!bVar22) {
        if ((buffersize == 0) || (uVar14 = 0, uVar20 = buffersize, local_88 != 0)) {
          if (uVar17 < buffersize) {
            buffer[uVar17] = '\'';
          }
          if (uVar17 + 1 < buffersize) {
            buffer[uVar17 + 1] = '\\';
          }
          uVar14 = buffersize;
          uVar20 = local_88;
          if (uVar17 + 2 < buffersize) {
            buffer[uVar17 + 2] = '\'';
          }
        }
        uVar17 = uVar17 + 3;
        bVar25 = false;
        bVar18 = 0x27;
        buffersize = uVar14;
        local_88 = uVar20;
        bVar3 = false;
        goto LAB_00100431;
      }
      goto LAB_00100636;
         case 0x3f:
      if (local_dc == shell_always_quoting_style) {
        if (!bVar22) {
          bVar23 = false;
          bVar25 = false;
          bVar18 = 0x3f;
          goto LAB_00100431;
        }
        goto LAB_00100636;
      }
switchD_00100b4a_caseD_3f:
joined_r0x00100d68:
      bVar24 = bVar6;
      bVar7 = bVar6;
      if ((local_dc != c_quoting_style) || ((local_7c & 4) == 0)) {
        uVar20 = 0x3f;
        bVar18 = 0x3f;
        bVar26 = false;
        if ((bool)(bVar5 | bVar22)) goto LAB_00100363;
        bVar25 = false;
        bVar6 = false;
        goto LAB_00100420;
      }
      uVar14 = uVar21 + 2;
      bVar23 = false;
      uVar20 = 0x3f;
      if ((argsize <= uVar14) || (arg[uVar21 + 1] != '?')) goto switchD_0010032d_caseD_25;
      bVar18 = arg[uVar14];
      uVar20 = (ulong)bVar18;
      if ((bVar18 < 0x3f) && (bVar23 = (0x7000a38200000000U >> (uVar20 & 0x3f) & 1) != 0, bVar23)) {
        if (!bVar22) {
          if (uVar17 < buffersize) {
            buffer[uVar17] = '?';
          }
          if (uVar17 + 1 < buffersize) {
            buffer[uVar17 + 1] = '\"';
          }
          if (uVar17 + 2 < buffersize) {
            buffer[uVar17 + 2] = '\"';
          }
          if (uVar17 + 3 < buffersize) {
            buffer[uVar17 + 3] = '?';
          }
          uVar17 = uVar17 + 4;
          uVar21 = uVar14;
          bVar26 = false;
          if (bVar5) goto LAB_00100363;
          bVar25 = false;
          bVar6 = false;
          goto LAB_00100420;
        }
        goto LAB_00100646;
      }
      uVar20 = 0x3f;
      bVar18 = 0x3f;
      bVar26 = bVar23;
      if ((bool)(bVar5 | bVar22)) goto LAB_00100363;
      bVar25 = false;
      bVar6 = bVar23;
LAB_00100420:
      bVar23 = bVar6;
      bVar24 = local_dc == shell_always_quoting_style;
      if (bVar7) goto joined_r0x001007b2;
LAB_00100431:
      uVar21 = uVar21 + 1;
      bVar27 = (bool)((bVar25 ^ 1U) & bVar3);
LAB_0010043b:
      if (bVar27) {
        if (uVar17 < buffersize) {
          buffer[uVar17] = '\'';
        }
        if (uVar17 + 1 < buffersize) {
          buffer[uVar17 + 1] = '\'';
        }
        uVar17 = uVar17 + 2;
        bVar3 = false;
      }
      goto LAB_001003e8;
      }

      joined_r0x0010079e:if (!bVar4) {
         switchD_00100b4a_caseD_21:bVar23 = false;
         switchD_0010032d_caseD_25:bVar18 = (byte)uVar20;
         bVar25 = (bool)( bVar5 | bVar22 );
         bVar24 = bVar6;
         bVar7 = bVar6;
         bVar6 = bVar23;
         bVar26 = bVar23;
         if ((bool)( bVar5 | bVar22 )) {
            LAB_00100363:bVar23 = false;
            uVar14 = uVar17;
            LAB_00100365:bVar18 = (byte)uVar20;
            uVar17 = uVar14;
            bVar25 = bVar23;
            bVar7 = bVar24;
            bVar6 = bVar26;
            if (( local_b8 != (uint*)0x0 ) && ( ( local_b8[uVar20 >> 5] >> ( bVar18 & 0x1f ) & 1 ) != 0 )) {
               bVar24 = local_dc == shell_always_quoting_style;
               bVar23 = bVar26;
               goto joined_r0x001007b2;
            }

         }

         goto LAB_00100420;
      }

      bVar23 = false;
      goto joined_r0x001007b2;
   }

   if (( argsize == 0xffffffffffffffff ) && ( 1 < local_c0 )) {
      argsize = strlen(arg);
   }

   uVar14 = uVar17;
   bVar26 = bVar6;
   if (( uVar21 + local_c0 <= argsize ) && ( iVar10 = iVar10 == 0 )) {
      if (!bVar22) {
         bVar18 = *__s1;
         uVar20 = (ulong)bVar18;
         bVar24 = bVar6;
         if ('?' < (char)bVar18) {
            if ('z' < (char)bVar18) {
               if (bVar18 != 0x7d) {
                  if ('}' < (char)bVar18) {
                     if (bVar18 == 0x7e) {
                        LAB_001012cb:if (uVar21 == 0) {
                           uVar20 = 0x7e;
                           bVar18 = 0x7e;
                           if ((bool)( bVar5 | bVar22 )) goto LAB_00100363;
                           bVar25 = false;
                           bVar7 = bVar24;
                           goto LAB_00100420;
                        }

                        bVar26 = false;
                        bVar23 = false;
                        uVar20 = 0x7e;
                        goto LAB_00100365;
                     }

                     uVar20 = 0x7f;
                     goto switchD_0010032d_caseD_1;
                  }

                  if (bVar18 != 0x7b) {
                     uVar20 = 0x7c;
                     goto switchD_00100b4a_caseD_21;
                  }

               }

               goto LAB_00100ebe;
            }

            if (bVar18 == 0x40) goto switchD_0010032d_caseD_1;
            uVar13 = 1L << ( bVar18 + 0xbf & 0x3f );
            if (( uVar13 & 0x3ffffff53ffffff ) != 0) {
               LAB_0010128e:bVar23 = false;
               goto LAB_00100365;
            }

            if (( uVar13 & 0xa4000000 ) != 0) goto switchD_00100b4a_caseD_21;
            LAB_0010117d:if (!bVar4) goto switchD_00100b4a_caseD_21;
            bVar23 = false;
            bVar18 = 0x5c;
            goto LAB_001003d6;
         }

         bVar7 = bVar6;
         switch (uVar20) {
            case 0:
        goto LAB_00100bf8;
            default:
        goto switchD_0010032d_caseD_1;
            case 7:
        bVar24 = false;
        bVar23 = false;
        bVar18 = 0x61;
        break;
            case 8:
        bVar24 = false;
        bVar23 = false;
        bVar18 = 0x62;
        break;
            case 9:
        bVar24 = false;
        uVar20 = 9;
        bVar18 = 0x74;
        goto joined_r0x0010079e;
            case 10:
        bVar24 = false;
        uVar20 = 10;
        bVar18 = 0x6e;
        goto joined_r0x0010079e;
            case 0xb:
        bVar24 = false;
        bVar23 = false;
        bVar18 = 0x76;
        break;
            case 0xc:
        bVar24 = false;
        bVar23 = false;
        bVar18 = 0x66;
        break;
            case 0xd:
        bVar24 = false;
        uVar20 = 0xd;
        bVar18 = 0x72;
        goto joined_r0x0010079e;
            case 0x20:
        uVar20 = 0x20;
        bVar18 = 0x20;
        if (!bVar5) {
          bVar25 = false;
          goto LAB_00100420;
        }
        goto LAB_00100363;
            case 0x21:
            case 0x22:
            case 0x24:
            case 0x26:
            case 0x28:
            case 0x29:
            case 0x2a:
            case 0x3b:
            case 0x3c:
            case 0x3d:
            case 0x3e:
        goto switchD_00100b4a_caseD_21;
            case 0x23:
        goto switchD_0010032d_caseD_23;
            case 0x25:
            case 0x2b:
            case 0x2c:
            case 0x2d:
            case 0x2e:
            case 0x2f:
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
            case 0x3a:
        if (bVar5) goto LAB_00100363;
        bVar25 = false;
        goto LAB_00100420;
            case 0x27:
        uVar20 = 0x27;
        bVar18 = 0x27;
        bVar2 = bVar6;
        if (bVar5) goto LAB_00100363;
        bVar25 = false;
        goto LAB_00100420;
            case 0x3f:
        goto switchD_00100b4a_caseD_3f;
         }

         goto LAB_0010039d;
      }

      goto LAB_00100646;
   }

   bVar18 = *__s1;
   uVar20 = (ulong)bVar18;
   if ('?' < (char)bVar18) {
      if ('z' < (char)bVar18) {
         if (bVar18 == 0x7d) {
            bVar6 = false;
         }
 else {
            if ('}' < (char)bVar18) {
               bVar24 = false;
               if (bVar18 == 0x7e) goto LAB_001012cb;
               uVar20 = 0x7f;
               bVar6 = false;
               goto switchD_0010032d_caseD_1;
            }

            bVar6 = false;
            if (bVar18 != 0x7b) {
               uVar20 = 0x7c;
               goto switchD_00100b4a_caseD_21;
            }

         }

         goto LAB_00100ebe;
      }

      if (bVar18 != 0x40) {
         uVar13 = 1L << ( bVar18 + 0xbf & 0x3f );
         if (( uVar13 & 0x3ffffff53ffffff ) != 0) {
            bVar24 = false;
            goto LAB_0010128e;
         }

         if (( uVar13 & 0xa4000000 ) == 0) goto LAB_00100f25;
         bVar6 = false;
         goto switchD_00100b4a_caseD_21;
      }

      switchD_00100c97_caseD_1:bVar6 = false;
      goto switchD_0010032d_caseD_1;
   }

   switch (uVar20) {
      case 0:
    goto switchD_00100c97_caseD_0;
      default:
    goto switchD_00100c97_caseD_1;
      case 7:
    bVar24 = false;
    bVar23 = false;
    bVar18 = 0x61;
    break;
      case 8:
    bVar24 = false;
    bVar23 = false;
    bVar18 = 0x62;
    break;
      case 9:
    bVar24 = false;
    uVar20 = 9;
    bVar6 = false;
    bVar18 = 0x74;
    goto joined_r0x0010079e;
      case 10:
    bVar24 = false;
    uVar20 = 10;
    bVar6 = false;
    bVar18 = 0x6e;
    goto joined_r0x0010079e;
      case 0xb:
    bVar24 = false;
    bVar23 = false;
    bVar18 = 0x76;
    break;
      case 0xc:
    bVar24 = false;
    bVar23 = false;
    bVar18 = 0x66;
    break;
      case 0xd:
    bVar24 = false;
    uVar20 = 0xd;
    bVar6 = false;
    bVar18 = 0x72;
    goto joined_r0x0010079e;
      case 0x20:
    uVar20 = 0x20;
    bVar18 = 0x20;
    bVar7 = false;
    bVar24 = false;
    if ((bool)(bVar5 | bVar22)) goto LAB_00100363;
    bVar25 = false;
    goto LAB_00100420;
      case 0x21:
      case 0x22:
      case 0x24:
      case 0x26:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
    bVar7 = false;
    bVar24 = false;
    bVar26 = false;
    if ((bool)(bVar5 | bVar22)) goto LAB_00100363;
    bVar25 = false;
    bVar6 = false;
    goto LAB_00100420;
      case 0x23:
    uVar20 = 0x23;
    bVar6 = false;
    goto LAB_00100824;
      case 0x25:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
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
      case 0x3a:
    bVar7 = false;
    bVar24 = false;
    if ((bool)(bVar5 | bVar22)) goto LAB_00100363;
    bVar25 = false;
    goto LAB_00100420;
      case 0x27:
    uVar20 = 0x27;
    bVar18 = 0x27;
    bVar7 = false;
    bVar24 = false;
    bVar2 = bVar6;
    if ((bool)(bVar5 | bVar22)) goto LAB_00100363;
    bVar25 = false;
    goto LAB_00100420;
      case 0x3f:
    bVar6 = false;
    goto joined_r0x00100d68;
   }

   joined_r0x001007b2:if (bVar22) {
      bVar25 = (bool)( bVar24 & bVar4 );
      goto LAB_00100636;
   }

   LAB_0010039d:bVar24 = (bool)( ( bVar27 ^ 1U ) & bVar24 );
   if (bVar24) {
      if (uVar17 < buffersize) {
         buffer[uVar17] = '\'';
      }

      if (uVar17 + 1 < buffersize) {
         buffer[uVar17 + 1] = '$';
      }

      if (uVar17 + 2 < buffersize) {
         buffer[uVar17 + 2] = '\'';
      }

      uVar17 = uVar17 + 3;
      bVar27 = bVar24;
   }

   LAB_001003d6:if (uVar17 < buffersize) {
      buffer[uVar17] = '\\';
   }

   uVar17 = uVar17 + 1;
   uVar21 = uVar21 + 1;
   bVar3 = bVar27;
   LAB_001003e8:bVar27 = bVar3;
   if (uVar17 < buffersize) {
      buffer[uVar17] = bVar18;
   }

   uVar17 = uVar17 + 1;
   if (!bVar23) {
      bVar8 = false;
   }

   goto LAB_001002a0;
   LAB_001015f9:local_dc = c_quoting_style;
   buffersize = local_88;
   goto LAB_00100160;
   LAB_00101094:bVar27 = local_dc == shell_always_quoting_style;
   bVar23 = uVar17 == 0;
   if (bVar23 && bVar27) {
      if (bVar22) {
         LAB_00100629:local_dc = shell_always_quoting_style;
         LAB_00100636:qVar9 = shell_escape_always_quoting_style;
         if (!bVar25) {
            qVar9 = local_dc;
         }

         LAB_00100646:local_dc = qVar9;
         local_7c = local_7c & 0xfffffffd;
         local_b8 = (uint*)0x0;
         goto LAB_00100160;
      }

      if (bVar2) {
         if (bVar8) goto LAB_001015f9;
         local_7d = local_88 != 0 && buffersize == 0;
         uVar21 = local_88;
         uVar14 = local_88;
         if (local_88 != 0 && buffersize == 0) {
            LAB_001008d9:local_88 = uVar14;
            uVar17 = 1;
            *buffer = '\'';
            bVar22 = false;
            local_c0 = 1;
            local_90 = "\'";
            local_dc = shell_always_quoting_style;
            buffersize = local_88;
            local_88 = uVar21;
            goto LAB_00100290;
         }

         uVar17 = 0;
         bVar22 = bVar2;
      }
 else {
         uVar17 = 0;
         bVar22 = bVar23 && bVar27;
      }

   }
 else {
      bVar27 = (bool)( bVar27 & ( bVar22 ^ 1U ) );
      bVar22 = (bool)( bVar22 ^ 1U );
      if (( bVar27 ) && ( bVar22 = bVar2 )) {
         if (bVar8) goto LAB_001015f9;
         local_7d = buffersize == 0 && local_88 != 0;
         bVar22 = bVar2;
         if (buffersize == 0 && local_88 != 0) {
            uVar21 = local_88;
            bVar22 = bVar8;
            bVar8 = false;
            LAB_001011ec:uVar17 = 0;
            local_dc = shell_always_quoting_style;
            local_90 = "\'";
            local_c0 = 1;
            buffersize = local_88;
            local_88 = uVar21;
            if (bVar22) goto LAB_00100290;
            LAB_0010089a:bVar22 = false;
            uVar17 = 1;
            local_dc = shell_always_quoting_style;
            local_90 = "\'";
            local_c0 = 1;
            uVar21 = local_88;
            uVar14 = buffersize;
            if (buffersize == 0) goto LAB_00100290;
            goto LAB_001008d9;
         }

      }

   }

   uVar21 = uVar17;
   if (( ( local_90 != (char*)0x0 ) && ( bVar22 ) ) && ( cVar15 = cVar15 != '\0' )) {
      do {
         if (uVar21 < buffersize) {
            buffer[uVar21] = cVar15;
         }

         uVar21 = uVar21 + 1;
         cVar15 = local_90[uVar21 - uVar17];
      }
 while ( cVar15 != '\0' );
   }

   if (uVar21 < buffersize) {
      buffer[uVar21] = '\0';
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar21;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */char *quotearg_n_options(int n, char *arg, size_t argsize, quoting_options *options) {
   int iVar1;
   quoting_style quoting_style;
   size_t buffersize;
   uint flags;
   int *piVar2;
   slotvec *psVar3;
   size_t sVar4;
   char *buffer;
   long lVar5;
   long in_FS_OFFSET;
   idx_t new_nslots;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   piVar2 = __errno_location();
   iVar1 = *piVar2;
   if (0x7ffffffe < (uint)n) {
      /* WARNING: Subroutine does not return */
      abort();
   }

   psVar3 = slotvec;
   if (nslots <= n) {
      new_nslots = (idx_t)nslots;
      lVar5 = (long)( ( n - nslots ) + 1 );
      if (slotvec == &slotvec0) {
         psVar3 = (slotvec*)xpalloc(0, &new_nslots, lVar5, 0x7fffffff, 0x10);
         slotvec = psVar3;
         *psVar3 = slotvec0;
      }
 else {
         psVar3 = (slotvec*)xpalloc(slotvec, &new_nslots, lVar5, 0x7fffffff, 0x10);
         slotvec = psVar3;
      }

      memset(psVar3 + nslots, 0, ( new_nslots - nslots ) * 0x10);
      nslots = (int)new_nslots;
   }

   psVar3 = psVar3 + n;
   flags = options.flags | 1;
   buffersize = psVar3.size;
   buffer = psVar3.val;
   sVar4 = quotearg_buffer_restyled(buffer, buffersize, arg, argsize, options.style, flags, options.quote_these_too, options.left_quote, options.right_quote);
   if (buffersize <= sVar4) {
      sVar4 = sVar4 + 1;
      psVar3.size = sVar4;
      if (buffer != slot0) {
         free(buffer);
      }

      buffer = (char*)xcharalloc(sVar4);
      quoting_style = options.style;
      psVar3.val = buffer;
      quotearg_buffer_restyled(buffer, sVar4, arg, argsize, quoting_style, flags, options.quote_these_too, options.left_quote, options.right_quote);
   }

   *piVar2 = iVar1;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return buffer;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */quoting_options *clone_quoting_options(quoting_options *o) {
   int iVar1;
   int *piVar2;
   quoting_options *pqVar3;
   piVar2 = __errno_location();
   iVar1 = *piVar2;
   if (o == (quoting_options*)0x0) {
      o = &default_quoting_options;
   }

   pqVar3 = (quoting_options*)xmemdup(o, 0x38);
   *piVar2 = iVar1;
   return pqVar3;
}
/* WARNING: Unknown calling convention */quoting_style get_quoting_style(quoting_options *o) {
   if (o == (quoting_options*)0x0) {
      o = &default_quoting_options;
   }

   return o.style;
}
/* WARNING: Unknown calling convention */void set_quoting_style(quoting_options *o, quoting_style s) {
   if (o == (quoting_options*)0x0) {
      o = &default_quoting_options;
   }

   o.style = s;
   return;
}
/* WARNING: Unknown calling convention */int set_char_quoting(quoting_options *o, char c, int i) {
   uint uVar1;
   uint uVar2;
   if (o == (quoting_options*)0x0) {
      o = &default_quoting_options;
   }

   uVar1 = o.quote_these_too[(byte)c >> 5];
   uVar2 = uVar1 >> ( c & 0x1fU ) & 1;
   o.quote_these_too[(byte)c >> 5] = ( i & 1U ^ uVar2 ) << ( c & 0x1fU ) ^ uVar1;
   return uVar2;
}
/* WARNING: Unknown calling convention */int set_quoting_flags(quoting_options *o, int i) {
   int iVar1;
   if (o == (quoting_options*)0x0) {
      o = &default_quoting_options;
   }

   iVar1 = o.flags;
   o.flags = i;
   return iVar1;
}
/* WARNING: Unknown calling convention */void set_custom_quoting(quoting_options *o, char *left_quote, char *right_quote) {
   if (o == (quoting_options*)0x0) {
      o = &default_quoting_options;
   }

   o.style = custom_quoting_style;
   if (( left_quote != (char*)0x0 ) && ( right_quote != (char*)0x0 )) {
      o.left_quote = left_quote;
      o.right_quote = right_quote;
      return;
   }

   /* WARNING: Subroutine does not return */
   abort();
}
/* WARNING: Unknown calling convention */size_t quotearg_buffer(char *buffer, size_t buffersize, char *arg, size_t argsize, quoting_options *o) {
   int iVar1;
   int *piVar2;
   size_t sVar3;
   if (o == (quoting_options*)0x0) {
      o = &default_quoting_options;
   }

   piVar2 = __errno_location();
   iVar1 = *piVar2;
   sVar3 = quotearg_buffer_restyled(buffer, buffersize, arg, argsize, o.style, o.flags, o.quote_these_too, o.left_quote, o.right_quote);
   *piVar2 = iVar1;
   return sVar3;
}
/* WARNING: Unknown calling convention */char *quotearg_alloc_mem(char *arg, size_t argsize, size_t *size, quoting_options *o) {
   int iVar1;
   int *piVar2;
   size_t sVar3;
   char *buffer;
   uint flags;
   int e;
   if (o == (quoting_options*)0x0) {
      o = &default_quoting_options;
   }

   piVar2 = __errno_location();
   iVar1 = *piVar2;
   flags = ( uint )(size == (size_t*)0x0) | o.flags;
   sVar3 = quotearg_buffer_restyled((char*)0x0, 0, arg, argsize, o.style, flags, o.quote_these_too, o.left_quote, o.right_quote);
   buffer = (char*)xcharalloc(sVar3 + 1);
   quotearg_buffer_restyled(buffer, sVar3 + 1, arg, argsize, o.style, flags, o.quote_these_too, o.left_quote, o.right_quote);
   *piVar2 = iVar1;
   if (size != (size_t*)0x0) {
      *size = sVar3;
   }

   return buffer;
}
/* WARNING: Unknown calling convention */char *quotearg_alloc(char *arg, size_t argsize, quoting_options *o) {
   char *pcVar1;
   pcVar1 = quotearg_alloc_mem(arg, argsize, (size_t*)0x0, o);
   return pcVar1;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked */void quotearg_free(void) {
   char *__ptr;
   slotvec *psVar1;
   slotvec *__ptr_00;
   char **ppcVar2;
   __ptr_00 = slotvec;
   if (1 < nslots) {
      ppcVar2 = &slotvec[1].val;
      psVar1 = slotvec + ( ulong )(nslots - 2) + 2;
      do {
         __ptr = *ppcVar2;
         ppcVar2 = ppcVar2 + 2;
         free(__ptr);
      }
 while ( ppcVar2 != &psVar1.val );
   }

   if (__ptr_00.val != slot0) {
      free(__ptr_00.val);
      slotvec0.val = slot0;
      slotvec0.size = 0x100;
   }

   if (__ptr_00 != &slotvec0) {
      free(__ptr_00);
      slotvec = &slotvec0;
   }

   nslots = 1;
   return;
}
/* WARNING: Unknown calling convention */char *quotearg_n(int n, char *arg) {
   char *pcVar1;
   pcVar1 = quotearg_n_options(n, arg, 0xffffffffffffffff, &default_quoting_options);
   return pcVar1;
}
/* WARNING: Unknown calling convention */char *quotearg_n_mem(int n, char *arg, size_t argsize) {
   char *pcVar1;
   pcVar1 = quotearg_n_options(n, arg, argsize, &default_quoting_options);
   return pcVar1;
}
/* WARNING: Unknown calling convention */char *quotearg(char *arg) {
   char *pcVar1;
   pcVar1 = quotearg_n_options(0, arg, 0xffffffffffffffff, &default_quoting_options);
   return pcVar1;
}
/* WARNING: Unknown calling convention */char *quotearg_mem(char *arg, size_t argsize) {
   char *pcVar1;
   pcVar1 = quotearg_n_options(0, arg, argsize, &default_quoting_options);
   return pcVar1;
}
/* WARNING: Unknown calling convention */char *quotearg_n_style(int n, quoting_style s, char *arg) {
   long lVar1;
   char *pcVar2;
   long in_FS_OFFSET;
   quoting_options o;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (s == custom_quoting_style) {
      /* WARNING: Subroutine does not return */
      abort();
   }

   for (int i = 0; i < 8; i++) {
      o.quote_these_too[i] = 0;
   }

   o.flags = 0;
   o.left_quote = (char*)0x0;
   o.right_quote = (char*)0x0;
   o.style = s;
   pcVar2 = quotearg_n_options(n, arg, 0xffffffffffffffff, &o);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pcVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */char *quotearg_n_style_mem(int n, quoting_style s, char *arg, size_t argsize) {
   long lVar1;
   char *pcVar2;
   long in_FS_OFFSET;
   quoting_options o;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (s == custom_quoting_style) {
      /* WARNING: Subroutine does not return */
      abort();
   }

   for (int i = 0; i < 8; i++) {
      o.quote_these_too[i] = 0;
   }

   o.flags = 0;
   o.left_quote = (char*)0x0;
   o.right_quote = (char*)0x0;
   o.style = s;
   pcVar2 = quotearg_n_options(n, arg, argsize, &o);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pcVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */char *quotearg_style(quoting_style s, char *arg) {
   long lVar1;
   char *pcVar2;
   long in_FS_OFFSET;
   quoting_options o;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (s == custom_quoting_style) {
      /* WARNING: Subroutine does not return */
      abort();
   }

   for (int i = 0; i < 8; i++) {
      o.quote_these_too[i] = 0;
   }

   o.flags = 0;
   o.left_quote = (char*)0x0;
   o.right_quote = (char*)0x0;
   o.style = s;
   pcVar2 = quotearg_n_options(0, arg, 0xffffffffffffffff, &o);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pcVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */char *quotearg_style_mem(quoting_style s, char *arg, size_t argsize) {
   long lVar1;
   char *pcVar2;
   long in_FS_OFFSET;
   quoting_options o;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (s == custom_quoting_style) {
      /* WARNING: Subroutine does not return */
      abort();
   }

   for (int i = 0; i < 8; i++) {
      o.quote_these_too[i] = 0;
   }

   o.flags = 0;
   o.left_quote = (char*)0x0;
   o.right_quote = (char*)0x0;
   o.style = s;
   pcVar2 = quotearg_n_options(0, arg, argsize, &o);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pcVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */char *quotearg_char_mem(char *arg, size_t argsize, char ch) {
   uint uVar1;
   long lVar2;
   char *pcVar3;
   long in_FS_OFFSET;
   quoting_options options;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   options._0_8_ = default_quoting_options._0_8_;
   options.quote_these_too._0_8_ = default_quoting_options.quote_these_too._0_8_;
   options.right_quote = default_quoting_options.right_quote;
   options.quote_these_too._8_8_ = default_quoting_options.quote_these_too._8_8_;
   options.quote_these_too._16_8_ = default_quoting_options.quote_these_too._16_8_;
   options.quote_these_too._24_8_ = default_quoting_options.quote_these_too._24_8_;
   options.left_quote = default_quoting_options.left_quote;
   uVar1 = options.quote_these_too[(byte)ch >> 5];
   options.quote_these_too[(byte)ch >> 5] = ( uint )(( uVar1 >> ( (byte)ch & 0x1f ) & 1 ) == 0) << ( sbyte )((byte)ch & 0x1f) ^ uVar1;
   pcVar3 = quotearg_n_options(0, arg, argsize, &options);
   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pcVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */char *quotearg_char(char *arg, char ch) {
   uint uVar1;
   long lVar2;
   char *pcVar3;
   long in_FS_OFFSET;
   quoting_options options;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   options._0_8_ = default_quoting_options._0_8_;
   options.quote_these_too._0_8_ = default_quoting_options.quote_these_too._0_8_;
   options.right_quote = default_quoting_options.right_quote;
   options.quote_these_too._8_8_ = default_quoting_options.quote_these_too._8_8_;
   options.quote_these_too._16_8_ = default_quoting_options.quote_these_too._16_8_;
   options.quote_these_too._24_8_ = default_quoting_options.quote_these_too._24_8_;
   options.left_quote = default_quoting_options.left_quote;
   uVar1 = options.quote_these_too[(byte)ch >> 5];
   options.quote_these_too[(byte)ch >> 5] = ( uint )(( uVar1 >> ( (byte)ch & 0x1f ) & 1 ) == 0) << ( sbyte )((byte)ch & 0x1f) ^ uVar1;
   pcVar3 = quotearg_n_options(0, arg, 0xffffffffffffffff, &options);
   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pcVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */char *quotearg_colon(char *arg) {
   long lVar1;
   char *pcVar2;
   long in_FS_OFFSET;
   quoting_options options;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   options._0_8_ = default_quoting_options._0_8_;
   options.quote_these_too._8_8_ = default_quoting_options.quote_these_too._8_8_;
   options.quote_these_too._16_8_ = default_quoting_options.quote_these_too._16_8_;
   options.quote_these_too._0_8_ = default_quoting_options.quote_these_too._0_8_ | 0x400000000000000;
   options.right_quote = default_quoting_options.right_quote;
   options.quote_these_too._24_8_ = default_quoting_options.quote_these_too._24_8_;
   options.left_quote = default_quoting_options.left_quote;
   pcVar2 = quotearg_n_options(0, arg, 0xffffffffffffffff, &options);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pcVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */char *quotearg_colon_mem(char *arg, size_t argsize) {
   long lVar1;
   char *pcVar2;
   long in_FS_OFFSET;
   quoting_options options;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   options._0_8_ = default_quoting_options._0_8_;
   options.quote_these_too._8_8_ = default_quoting_options.quote_these_too._8_8_;
   options.quote_these_too._16_8_ = default_quoting_options.quote_these_too._16_8_;
   options.quote_these_too._0_8_ = default_quoting_options.quote_these_too._0_8_ | 0x400000000000000;
   options.right_quote = default_quoting_options.right_quote;
   options.quote_these_too._24_8_ = default_quoting_options.quote_these_too._24_8_;
   options.left_quote = default_quoting_options.left_quote;
   pcVar2 = quotearg_n_options(0, arg, argsize, &options);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pcVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */char *quotearg_n_style_colon(int n, quoting_style s, char *arg) {
   long lVar1;
   char *pcVar2;
   long in_FS_OFFSET;
   quoting_options options;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (s == custom_quoting_style) {
      /* WARNING: Subroutine does not return */
      abort();
   }

   options.left_quote = (char*)0x0;
   options.right_quote = (char*)0x0;
   options.flags = 0;
   options.quote_these_too._0_8_ = __LC15;
   options.quote_these_too._8_8_ = _UNK_00102a88;
   for (int i = 0; i < 4; i++) {
      options.quote_these_too[( i + 4 )] = 0;
   }

   options.style = s;
   pcVar2 = quotearg_n_options(n, arg, 0xffffffffffffffff, &options);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pcVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */char *quotearg_n_custom(int n, char *left_quote, char *right_quote, char *arg) {
   long lVar1;
   char *pcVar2;
   long in_FS_OFFSET;
   quoting_options o;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   o.quote_these_too._0_8_ = default_quoting_options.quote_these_too._0_8_;
   o.quote_these_too._8_8_ = default_quoting_options.quote_these_too._8_8_;
   o.quote_these_too._16_8_ = default_quoting_options.quote_these_too._16_8_;
   o.right_quote = default_quoting_options.right_quote;
   o.flags = SUB84(default_quoting_options._0_8_, 4);
   o.style = custom_quoting_style;
   o.quote_these_too._24_8_ = default_quoting_options.quote_these_too._24_8_;
   o.left_quote = default_quoting_options.left_quote;
   if (( left_quote != (char*)0x0 ) && ( right_quote != (char*)0x0 )) {
      o.left_quote = left_quote;
      o.right_quote = right_quote;
      pcVar2 = quotearg_n_options(n, arg, 0xffffffffffffffff, &o);
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return pcVar2;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Subroutine does not return */
   abort();
}
/* WARNING: Unknown calling convention */char *quotearg_n_custom_mem(int n, char *left_quote, char *right_quote, char *arg, size_t argsize) {
   long lVar1;
   char *pcVar2;
   long in_FS_OFFSET;
   quoting_options o;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   o.quote_these_too._0_8_ = default_quoting_options.quote_these_too._0_8_;
   o.quote_these_too._8_8_ = default_quoting_options.quote_these_too._8_8_;
   o.quote_these_too._16_8_ = default_quoting_options.quote_these_too._16_8_;
   o.right_quote = default_quoting_options.right_quote;
   o.flags = SUB84(default_quoting_options._0_8_, 4);
   o.style = custom_quoting_style;
   o.quote_these_too._24_8_ = default_quoting_options.quote_these_too._24_8_;
   o.left_quote = default_quoting_options.left_quote;
   if (( left_quote != (char*)0x0 ) && ( right_quote != (char*)0x0 )) {
      o.left_quote = left_quote;
      o.right_quote = right_quote;
      pcVar2 = quotearg_n_options(n, arg, argsize, &o);
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return pcVar2;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Subroutine does not return */
   abort();
}
/* WARNING: Unknown calling convention */char *quotearg_custom(char *left_quote, char *right_quote, char *arg) {
   long lVar1;
   char *pcVar2;
   long in_FS_OFFSET;
   quoting_options o;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   o.quote_these_too._0_8_ = default_quoting_options.quote_these_too._0_8_;
   o.quote_these_too._8_8_ = default_quoting_options.quote_these_too._8_8_;
   o.quote_these_too._16_8_ = default_quoting_options.quote_these_too._16_8_;
   o.right_quote = default_quoting_options.right_quote;
   o.flags = SUB84(default_quoting_options._0_8_, 4);
   o.style = custom_quoting_style;
   o.quote_these_too._24_8_ = default_quoting_options.quote_these_too._24_8_;
   o.left_quote = default_quoting_options.left_quote;
   if (( left_quote != (char*)0x0 ) && ( right_quote != (char*)0x0 )) {
      o.left_quote = left_quote;
      o.right_quote = right_quote;
      pcVar2 = quotearg_n_options(0, arg, 0xffffffffffffffff, &o);
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return pcVar2;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Subroutine does not return */
   abort();
}
/* WARNING: Unknown calling convention */char *quotearg_custom_mem(char *left_quote, char *right_quote, char *arg, size_t argsize) {
   long lVar1;
   char *pcVar2;
   long in_FS_OFFSET;
   quoting_options o;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   o.quote_these_too._0_8_ = default_quoting_options.quote_these_too._0_8_;
   o.quote_these_too._8_8_ = default_quoting_options.quote_these_too._8_8_;
   o.quote_these_too._16_8_ = default_quoting_options.quote_these_too._16_8_;
   o.right_quote = default_quoting_options.right_quote;
   o.flags = SUB84(default_quoting_options._0_8_, 4);
   o.style = custom_quoting_style;
   o.quote_these_too._24_8_ = default_quoting_options.quote_these_too._24_8_;
   o.left_quote = default_quoting_options.left_quote;
   if (( left_quote != (char*)0x0 ) && ( right_quote != (char*)0x0 )) {
      o.left_quote = left_quote;
      o.right_quote = right_quote;
      pcVar2 = quotearg_n_options(0, arg, argsize, &o);
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return pcVar2;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Subroutine does not return */
   abort();
}
/* WARNING: Unknown calling convention */char *quote_n_mem(int n, char *arg, size_t argsize) {
   char *pcVar1;
   pcVar1 = quotearg_n_options(n, arg, argsize, &quote_quoting_options);
   return pcVar1;
}
/* WARNING: Unknown calling convention */char *quote_mem(char *arg, size_t argsize) {
   char *pcVar1;
   pcVar1 = quotearg_n_options(0, arg, argsize, &quote_quoting_options);
   return pcVar1;
}
/* WARNING: Unknown calling convention */char *quote_n(int n, char *arg) {
   char *pcVar1;
   pcVar1 = quotearg_n_options(n, arg, 0xffffffffffffffff, &quote_quoting_options);
   return pcVar1;
}
/* WARNING: Unknown calling convention */char *quote(char *arg) {
   char *pcVar1;
   pcVar1 = quotearg_n_options(0, arg, 0xffffffffffffffff, &quote_quoting_options);
   return pcVar1;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked */void quotearg_buffer_restyled_cold(void) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked */void quotearg_n_options_cold(void) {
   /* WARNING: Subroutine does not return */
   abort();
}
void set_custom_quoting_cold(void) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked */void quotearg_n_style_cold(void) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked */void quotearg_n_style_mem_cold(void) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked */void quotearg_style_cold(void) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked */void quotearg_style_mem_cold(void) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked */void quotearg_n_style_colon_cold(void) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked */void quotearg_n_custom_cold(void) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked */void quotearg_n_custom_mem_cold(void) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked */void quotearg_custom_cold(void) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked */void quotearg_custom_mem_cold(void) {
   /* WARNING: Subroutine does not return */
   abort();
}

