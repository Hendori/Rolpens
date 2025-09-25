/* WARNING: Unknown calling convention */void format_address_none(uintmax_t address, char c) {
   return;
}
/* WARNING: Unknown calling convention */int get_lcm(void) {
   size_spec *psVar1;
   size_spec sVar2;
   ulong uVar3;
   ulong uVar4;
   ulong uVar5;
   int iVar6;
   size_spec *psVar7;
   if (n_specs < 1) {
      iVar6 = 1;
   }
 else {
      iVar6 = 1;
      psVar7 = &spec.size;
      psVar1 = psVar7 + n_specs * 10;
      do {
         sVar2 = *psVar7;
         uVar3 = (long)iVar6;
         uVar5 = (long)width_bytes[sVar2];
         do {
            uVar4 = uVar5;
            uVar5 = uVar3 % uVar4;
            uVar3 = uVar4;
         }
 while ( uVar5 != 0 );
         psVar7 = psVar7 + 10;
         iVar6 = iVar6 * (int)( (ulong)(long)width_bytes[sVar2] / uVar4 );
      }
 while ( psVar1 != psVar7 );
   }

   return iVar6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */void format_address_std(uintmax_t address, char c) {
   long lVar1;
   bool bVar2;
   byte bVar3;
   uint uVar4;
   char *__s;
   char *__s_00;
   long in_FS_OFFSET;
   char buf[25];
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   __s = buf + 0x17;
   buf[0x18] = '\0';
   __s_00 = __s + -(long)address_pad_len;
   if (address_base == 10) {
      do {
         __s = __s + -1;
         *__s = (char)address + (char)( address / 10 ) * -10 + '0';
         bVar2 = 9 < address;
         address = address / 10;
      }
 while ( bVar2 );
   }
 else if (address_base == 0x10) {
      do {
         __s = __s + -1;
         uVar4 = (uint)address;
         address = address >> 4;
         *__s = "0123456789abcdef"[uVar4 & 0xf];
      }
 while ( address != 0 );
   }
 else if (address_base == 8) {
      do {
         __s = __s + -1;
         bVar3 = (byte)address;
         address = address >> 3;
         *__s = ( bVar3 & 7 ) + 0x30;
      }
 while ( address != 0 );
   }

   buf[0x17] = c;
   if (__s_00 < __s) {
      __s = (char*)memset(__s_00, 0x30, (long)__s - (long)__s_00);
   }

   fputs_unlocked(__s, _stdout);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */_Bool parse_old_offset(char *s, uintmax_t *offset) {
   int iVar1;
   char *pcVar2;
   char cVar3;
   if (*s != '\0') {
      if (*s == '+') {
         s = s + 1;
      }

      pcVar2 = strchr(s, 0x2e);
      cVar3 = '\n';
      if (( pcVar2 == (char*)0x0 ) && ( cVar3 = '\b' * s == '0' )) {
         cVar3 = ( ( s[1] & 0xdfU ) == 0x58 ) * '\b' + '\b';
      }

      iVar1 = xstrtoumax(s, 0, cVar3, offset, &_LC1);
      return iVar1 == 0;
   }

   return false;
}
/* WARNING: Unknown calling convention */void print_named_ascii(size_t fields, size_t blank, void *block, char *unused_fmt_string, int width, int pad) {
   long lVar1;
   int iVar2;
   byte bVar3;
   ulong uVar4;
   byte *pbVar5;
   byte *pbVar6;
   int iVar7;
   char(*pacVar8)[4];
   long in_FS_OFFSET;
   char buf[2];
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (blank < fields) {
      uVar4 = ( fields - 1 ) * (long)pad;
      pbVar5 = (byte*)block;
      iVar7 = pad;
      do {
         pbVar6 = pbVar5 + 1;
         iVar2 = (int)( uVar4 / fields );
         bVar3 = ( byte )(*pbVar5 & 0x7f);
         pacVar8 = (char(*) [4])&_LC2;
         if (bVar3 != 0x7f) {
            if (bVar3 < 0x21) {
               pacVar8 = charname + ( *pbVar5 & 0x7f );
            }
 else {
               buf[1] = '\0';
               pacVar8 = (char(*) [4])buf;
               buf[0] = bVar3;
            }

         }

         xprintf(&_LC3, ( iVar7 - iVar2 ) + width, pacVar8);
         uVar4 = uVar4 - (long)pad;
         pbVar5 = pbVar6;
         iVar7 = iVar2;
      }
 while ( blank < ( fields - (long)pbVar6 ) + (long)block );
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */void print_long_long(size_t fields, size_t blank, void *block, char *fmt_string, int width, int pad) {
   char cVar1;
   int iVar2;
   char *pcVar3;
   anon_union_8_2_94730037 aVar4;
   anon_union_8_2_94730037 *paVar5;
   anon_union_8_2_94730037 *paVar6;
   ulong uVar7;
   size_t sVar8;
   int iVar9;
   long in_FS_OFFSET;
   anon_union_8_2_94730037 u;
   anon_union_8_2_94730037 local_40[2];
   local_40[0] = ( anon_union_8_2_94730037 )((anon_union_8_2_94730037*)( in_FS_OFFSET + 0x28 )).x;
   if (blank < fields) {
      uVar7 = (long)pad * ( fields - 1 );
      sVar8 = fields;
      iVar9 = pad;
      do {
         sVar8 = sVar8 - 1;
         iVar2 = (int)( uVar7 / fields );
         if (input_swap == false) {
            /* WARNING: Load size is inaccurate */
            aVar4.b = *block;
         }
 else {
            pcVar3 = *(char(*) [8])block + 7;
            paVar5 = &u;
            do {
               cVar1 = *pcVar3;
               paVar6 = (anon_union_8_2_94730037*)( paVar5.b + 1 );
               pcVar3 = pcVar3 + -1;
               paVar5.b[0] = cVar1;
               aVar4 = u;
               paVar5 = paVar6;
            }
 while ( local_40 != paVar6 );
         }

         block = (void*)( (long)block + 8 );
         xprintf(fmt_string, ( iVar9 - iVar2 ) + width, aVar4.x);
         uVar7 = uVar7 - (long)pad;
         iVar9 = iVar2;
      }
 while ( blank < sVar8 );
   }

   if (local_40[0].x != *(unsigned_long_long_int*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Unknown calling convention */void print_long(size_t fields, size_t blank, void *block, char *fmt_string, int width, int pad) {
   char cVar1;
   int iVar2;
   char *pcVar3;
   anon_union_8_2_94730037 aVar4;
   anon_union_8_2_94730037 *paVar5;
   anon_union_8_2_94730037 *paVar6;
   ulong uVar7;
   size_t sVar8;
   int iVar9;
   long in_FS_OFFSET;
   anon_union_8_2_94730037 u;
   anon_union_8_2_94730037 local_40[2];
   local_40[0] = ( anon_union_8_2_94730037 )((anon_union_8_2_94730037*)( in_FS_OFFSET + 0x28 )).x;
   if (blank < fields) {
      uVar7 = (long)pad * ( fields - 1 );
      sVar8 = fields;
      iVar9 = pad;
      do {
         sVar8 = sVar8 - 1;
         iVar2 = (int)( uVar7 / fields );
         if (input_swap == false) {
            /* WARNING: Load size is inaccurate */
            aVar4.b = *block;
         }
 else {
            pcVar3 = *(char(*) [8])block + 7;
            paVar5 = &u;
            do {
               cVar1 = *pcVar3;
               paVar6 = (anon_union_8_2_94730037*)( paVar5.b + 1 );
               pcVar3 = pcVar3 + -1;
               paVar5.b[0] = cVar1;
               aVar4 = u;
               paVar5 = paVar6;
            }
 while ( local_40 != paVar6 );
         }

         block = (void*)( (long)block + 8 );
         xprintf(fmt_string, ( iVar9 - iVar2 ) + width, aVar4.x);
         uVar7 = uVar7 - (long)pad;
         iVar9 = iVar2;
      }
 while ( blank < sVar8 );
   }

   if (local_40[0].x != *(ulong*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Unknown calling convention */void print_int(size_t fields, size_t blank, void *block, char *fmt_string, int width, int pad) {
   int iVar1;
   ulong uVar2;
   undefined4 uVar3;
   size_t sVar4;
   int iVar5;
   if (blank < fields) {
      uVar2 = ( fields - 1 ) * (long)pad;
      sVar4 = fields;
      iVar5 = pad;
      do {
         sVar4 = sVar4 - 1;
         iVar1 = (int)( uVar2 / fields );
         if (input_swap == false) {
            /* WARNING: Load size is inaccurate */
            uVar3 = *block;
         }
 else {
            /* WARNING: Load size is inaccurate */
            uVar3 = CONCAT31(CONCAT21(CONCAT11(*block, *(undefined1*)( (long)block + 1 )), *(undefined1*)( (long)block + 2 )), *(undefined1*)( (long)block + 3 ));
         }

         block = (void*)( (long)block + 4 );
         uVar2 = uVar2 - (long)pad;
         xprintf(fmt_string, ( iVar5 - iVar1 ) + width, uVar3);
         iVar5 = iVar1;
      }
 while ( blank < sVar4 );
   }

   return;
}
/* WARNING: Unknown calling convention */void print_short(size_t fields, size_t blank, void *block, char *fmt_string, int width, int pad) {
   int iVar1;
   ulong uVar2;
   undefined2 uVar3;
   size_t sVar4;
   int iVar5;
   if (blank < fields) {
      uVar2 = ( fields - 1 ) * (long)pad;
      sVar4 = fields;
      iVar5 = pad;
      do {
         sVar4 = sVar4 - 1;
         iVar1 = (int)( uVar2 / fields );
         if (input_swap == false) {
            /* WARNING: Load size is inaccurate */
            uVar3 = *block;
         }
 else {
            /* WARNING: Load size is inaccurate */
            uVar3 = CONCAT11(*block, *(undefined1*)( (long)block + 1 ));
         }

         block = (void*)( (long)block + 2 );
         uVar2 = uVar2 - (long)pad;
         xprintf(fmt_string, ( iVar5 - iVar1 ) + width, uVar3);
         iVar5 = iVar1;
      }
 while ( blank < sVar4 );
   }

   return;
}
/* WARNING: Unknown calling convention */void print_s_short(size_t fields, size_t blank, void *block, char *fmt_string, int width, int pad) {
   int iVar1;
   ulong uVar2;
   short sVar3;
   size_t sVar4;
   int iVar5;
   if (blank < fields) {
      uVar2 = ( fields - 1 ) * (long)pad;
      sVar4 = fields;
      iVar5 = pad;
      do {
         sVar4 = sVar4 - 1;
         iVar1 = (int)( uVar2 / fields );
         if (input_swap == false) {
            /* WARNING: Load size is inaccurate */
            sVar3 = *block;
         }
 else {
            /* WARNING: Load size is inaccurate */
            sVar3 = CONCAT11((char)*block, *(undefined1*)( (long)block + 1 ));
         }

         block = (void*)( (long)block + 2 );
         uVar2 = uVar2 - (long)pad;
         xprintf(fmt_string, ( iVar5 - iVar1 ) + width, (int)sVar3);
         iVar5 = iVar1;
      }
 while ( blank < sVar4 );
   }

   return;
}
/* WARNING: Unknown calling convention */void print_char(size_t fields, size_t blank, void *block, char *fmt_string, int width, int pad) {
   undefined1 uVar1;
   ulong uVar2;
   int iVar3;
   int iVar4;
   ulong uVar5;
   undefined1 *puVar6;
   if (blank < fields) {
      uVar5 = ( fields - 1 ) * (long)pad;
      puVar6 = (undefined1*)block;
      iVar4 = pad;
      do {
         uVar2 = uVar5 / fields;
         uVar1 = *puVar6;
         puVar6 = puVar6 + 1;
         uVar5 = uVar5 - (long)pad;
         iVar3 = (int)uVar2;
         xprintf(fmt_string, ( iVar4 - iVar3 ) + width, uVar1);
         iVar4 = iVar3;
      }
 while ( blank < (long)block + ( fields - (long)puVar6 ) );
   }

   return;
}
/* WARNING: Unknown calling convention */void print_s_char(size_t fields, size_t blank, void *block, char *fmt_string, int width, int pad) {
   char cVar1;
   ulong uVar2;
   int iVar3;
   int iVar4;
   ulong uVar5;
   char *pcVar6;
   if (blank < fields) {
      uVar5 = ( fields - 1 ) * (long)pad;
      pcVar6 = (char*)block;
      iVar4 = pad;
      do {
         uVar2 = uVar5 / fields;
         cVar1 = *pcVar6;
         pcVar6 = pcVar6 + 1;
         uVar5 = uVar5 - (long)pad;
         iVar3 = (int)uVar2;
         xprintf(fmt_string, ( iVar4 - iVar3 ) + width, (int)cVar1);
         iVar4 = iVar3;
      }
 while ( blank < (long)block + ( fields - (long)pcVar6 ) );
   }

   return;
}
/* WARNING: Unknown calling convention */void print_long_double(size_t fields, size_t blank, void *block, char *fmt_string, int width, int pad) {
   char cVar1;
   long lVar2;
   int iVar3;
   ulong uVar4;
   anon_union_16_2_94730037 *paVar5;
   anon_union_16_2_94730037 *paVar6;
   char *pcVar7;
   size_t sVar8;
   int iVar9;
   long in_FS_OFFSET;
   anon_union_16_2_94730037 u;
   char buf[45];
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (blank < fields) {
      uVar4 = (long)pad * ( fields - 1 );
      sVar8 = fields;
      iVar9 = pad;
      do {
         sVar8 = sVar8 - 1;
         iVar3 = (int)( uVar4 / fields );
         if (input_swap != false) {
            pcVar7 = (char*)( (long)block + 0xf );
            paVar5 = &u;
            do {
               cVar1 = *pcVar7;
               paVar6 = (anon_union_16_2_94730037*)( paVar5.b + 1 );
               pcVar7 = pcVar7 + -1;
               paVar5.b[0] = cVar1;
               paVar5 = paVar6;
            }
 while ( (anon_union_16_2_94730037*)buf != paVar6 );
         }

         block = (void*)( (long)block + 0x10 );
         ldtoastr((anon_union_16_2_94730037*)buf, 0x2d, 0, 0);
         xprintf(&_LC3, ( iVar9 - iVar3 ) + width, (anon_union_16_2_94730037*)buf);
         uVar4 = uVar4 - (long)pad;
         iVar9 = iVar3;
      }
 while ( blank < sVar8 );
   }

   if (lVar2 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Unknown calling convention */void print_double(size_t fields, size_t blank, void *block, char *fmt_string, int width, int pad) {
   char cVar1;
   long lVar2;
   int iVar3;
   ulong uVar4;
   anon_union_8_2_94730037 *paVar5;
   anon_union_8_2_94730037 *paVar6;
   char *pcVar7;
   size_t sVar8;
   int iVar9;
   long in_FS_OFFSET;
   anon_union_8_2_94730037 aVar10;
   anon_union_8_2_94730037 u;
   char buf[40];
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (blank < fields) {
      uVar4 = (long)pad * ( fields - 1 );
      sVar8 = fields;
      iVar9 = pad;
      do {
         sVar8 = sVar8 - 1;
         iVar3 = (int)( uVar4 / fields );
         if (input_swap == false) {
            /* WARNING: Load size is inaccurate */
            aVar10.b = *block;
         }
 else {
            pcVar7 = *(char(*) [8])block + 7;
            paVar5 = &u;
            do {
               cVar1 = *pcVar7;
               paVar6 = (anon_union_8_2_94730037*)( paVar5.b + 1 );
               pcVar7 = pcVar7 + -1;
               paVar5.b[0] = cVar1;
               paVar5 = paVar6;
               aVar10 = u;
            }
 while ( (anon_union_8_2_94730037*)buf != paVar6 );
         }

         dtoastr(aVar10.x, (anon_union_8_2_94730037*)buf, 0x28, 0, 0);
         block = (void*)( (long)block + 8 );
         xprintf(&_LC3, ( iVar9 - iVar3 ) + width, (anon_union_8_2_94730037*)buf);
         uVar4 = uVar4 - (long)pad;
         iVar9 = iVar3;
      }
 while ( blank < sVar8 );
   }

   if (lVar2 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Unknown calling convention */void print_float(size_t fields, size_t blank, void *block, char *fmt_string, int width, int pad) {
   long lVar1;
   int iVar2;
   ulong uVar3;
   size_t sVar4;
   int iVar5;
   long in_FS_OFFSET;
   char buf[31];
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (blank < fields) {
      uVar3 = (long)pad * ( fields - 1 );
      sVar4 = fields;
      iVar5 = pad;
      do {
         sVar4 = sVar4 - 1;
         iVar2 = (int)( uVar3 / fields );
         ftoastr(buf, 0x1f, 0, 0);
         xprintf(&_LC3, ( iVar5 - iVar2 ) + width, buf);
         uVar3 = uVar3 - (long)pad;
         iVar5 = iVar2;
      }
 while ( blank < sVar4 );
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */void print_halffloat(size_t fields, size_t blank, void *block, char *fmt_string, int width, int pad) {
   long lVar1;
   int iVar2;
   ulong uVar3;
   size_t sVar4;
   int iVar5;
   long in_FS_OFFSET;
   ulong in_XMM0_Qa;
   ulong uVar6;
   char buf[31];
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (blank < fields) {
      uVar3 = (long)pad * ( fields - 1 );
      sVar4 = fields;
      iVar5 = pad;
      do {
         sVar4 = sVar4 - 1;
         iVar2 = (int)( uVar3 / fields );
         if (input_swap == false) {
            /* WARNING: Load size is inaccurate */
            uVar6 = in_XMM0_Qa & 0xffffffffffff0000 | ( ulong ) * block;
         }
 else {
            /* WARNING: Load size is inaccurate */
            uVar6 = (ulong)CONCAT11((char)*block, *(undefined1*)( (long)block + 1 ));
         }

         __extendhfsf2(uVar6);
         block = (void*)( (long)block + 2 );
         ftoastr(buf, 0x1f, 0, 0);
         in_XMM0_Qa = xprintf(&_LC3, ( iVar5 - iVar2 ) + width, buf);
         uVar3 = uVar3 - (long)pad;
         iVar5 = iVar2;
      }
 while ( blank < sVar4 );
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */void print_bfloat(size_t fields, size_t blank, void *block, char *fmt_string, int width, int pad) {
   long lVar1;
   int iVar2;
   ulong uVar3;
   size_t sVar4;
   int iVar5;
   long in_FS_OFFSET;
   ulong in_XMM0_Qa;
   ulong uVar6;
   char buf[31];
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (blank < fields) {
      uVar3 = (long)pad * ( fields - 1 );
      sVar4 = fields;
      iVar5 = pad;
      do {
         sVar4 = sVar4 - 1;
         iVar2 = (int)( uVar3 / fields );
         if (input_swap == false) {
            /* WARNING: Load size is inaccurate */
            uVar6 = in_XMM0_Qa & 0xffffffffffff0000 | ( ulong ) * block;
         }
 else {
            /* WARNING: Load size is inaccurate */
            uVar6 = (ulong)CONCAT11((char)*block, *(undefined1*)( (long)block + 1 ));
         }

         __extendbfsf2(uVar6);
         block = (void*)( (long)block + 2 );
         ftoastr(buf, 0x1f, 0, 0);
         in_XMM0_Qa = xprintf(&_LC3, ( iVar5 - iVar2 ) + width, buf);
         uVar3 = uVar3 - (long)pad;
         iVar5 = iVar2;
      }
 while ( blank < sVar4 );
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */void print_ascii(size_t fields, size_t blank, void *block, char *unused_fmt_string, int width, int pad) {
   byte bVar1;
   long lVar2;
   int iVar3;
   ushort **ppuVar4;
   undefined *puVar5;
   char *pcVar6;
   ulong uVar7;
   byte *pbVar8;
   int iVar9;
   long in_FS_OFFSET;
   char buf[4];
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (blank < fields) {
      uVar7 = ( fields - 1 ) * (long)pad;
      pbVar8 = (byte*)block;
      iVar9 = pad;
      do {
         bVar1 = *pbVar8;
         pbVar8 = pbVar8 + 1;
         iVar3 = (int)( uVar7 / fields );
         switch ((ulong)bVar1) {
            case 0:
        pcVar6 = "\\0";
        break;
            default:
        ppuVar4 = __ctype_b_loc();
        puVar5 = &_LC5;
        pcVar6 = buf;
        if ((*(byte *)((long)*ppuVar4 + (ulong)bVar1 * 2 + 1) & 0x40) == 0) {
          puVar5 = &_LC6;
        }
        __sprintf_chk(pcVar6,2,4,puVar5,bVar1);
        break;
            case 7:
        pcVar6 = "\\a";
        break;
            case 8:
        pcVar6 = "\\b";
        break;
            case 9:
        pcVar6 = "\\t";
        break;
            case 10:
        pcVar6 = "\\n";
        break;
            case 0xb:
        pcVar6 = "\\v";
        break;
            case 0xc:
        pcVar6 = "\\f";
        break;
            case 0xd:
        pcVar6 = "\\r";
         }

         xprintf(&_LC3, ( iVar9 - iVar3 ) + width, pcVar6);
         uVar7 = uVar7 - (long)pad;
         iVar9 = iVar3;
      }
 while ( blank < ( fields - (long)pbVar8 ) + (long)block );
   }

   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */void write_block(uintmax_t current_offset, size_t n_bytes, char *prev_block, char *curr_block) {
   char *pcVar1;
   byte *pbVar2;
   byte bVar3;
   int iVar4;
   int iVar5;
   ushort **ppuVar6;
   ulong uVar7;
   byte *pbVar8;
   long lVar9;
   uint uVar10;
   if (( ( ( abbreviate_duplicate_blocks ) && ( !write_block::first ) ) && ( bytes_per_block == n_bytes ) ) && ( iVar5 = iVar5 == 0 )) {
      if (write_block::prev_pair_equal != false) {
         write_block::first = false;
         return;
      }

      puts("*");
      write_block::first = false;
      write_block::prev_pair_equal = true;
      return;
   }

   write_block::prev_pair_equal = false;
   if (0 < n_specs) {
      lVar9 = 0;
      do {
         iVar5 = width_bytes[spec[lVar9].size];
         uVar7 = bytes_per_block - n_bytes;
         iVar4 = (int)( bytes_per_block / (ulong)(long)iVar5 );
         if (lVar9 == 0) {
            ( *format_address )(current_offset, '\0');
         }
 else {
            __printf_chk(2, &_LC3, address_pad_len, &_LC16);
         }

         iVar5 = (int)( uVar7 / (ulong)(long)iVar5 );
         ( *spec[lVar9].print_function )((long)iVar4, (long)iVar5, curr_block, spec[lVar9].fmt_string, spec[lVar9].field_width, spec[lVar9].pad_width);
         if (spec[lVar9].hexl_mode_trailer != false) {
            __printf_chk(2, &_LC3, ( spec[lVar9].pad_width * iVar5 ) / iVar4 + iVar5 * spec[lVar9].field_width, &_LC16);
            fwrite_unlocked(&_LC17, 1, 3, _stdout);
            if (n_bytes != 0) {
               ppuVar6 = __ctype_b_loc();
               pbVar8 = (byte*)curr_block;
               do {
                  bVar3 = *pbVar8;
                  pbVar8 = pbVar8 + 1;
                  uVar10 = (uint)bVar3;
                  if (( *(byte*)( (long)*ppuVar6 + (ulong)bVar3 * 2 + 1 ) & 0x40 ) == 0) {
                     uVar10 = 0x2e;
                     bVar3 = 0x2e;
                  }

                  pbVar2 = (byte*)_stdout._IO_write_ptr;
                  if (pbVar2 < _stdout._IO_write_end) {
                     _stdout._IO_write_ptr = (char*)( pbVar2 + 1 );
                     *pbVar2 = bVar3;
                  }
 else {
                     __overflow(_stdout, uVar10);
                  }

               }
 while ( pbVar8 != (byte*)( curr_block + n_bytes ) );
            }

            pcVar1 = _stdout._IO_write_ptr;
            if (pcVar1 < _stdout._IO_write_end) {
               _stdout._IO_write_ptr = pcVar1 + 1;
               *pcVar1 = '<';
            }
 else {
               __overflow(_stdout, 0x3c);
            }

         }

         pcVar1 = _stdout._IO_write_ptr;
         if (pcVar1 < _stdout._IO_write_end) {
            _stdout._IO_write_ptr = pcVar1 + 1;
            *pcVar1 = '\n';
         }
 else {
            __overflow(_stdout, 10);
         }

         lVar9 = lVar9 + 1;
      }
 while ( lVar9 < n_specs );
   }

   write_block::first = false;
   return;
}
/* WARNING: Unknown calling convention */_Bool decode_format_string(char *s) {
   char *pcVar1;
   tspec *ptVar2;
   char cVar3;
   char cVar4;
   uint uVar5;
   ulong uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   lconv *plVar9;
   size_t sVar10;
   long lVar11;
   byte bVar12;
   code *pcVar13;
   char *next;
   char *pcVar14;
   char *pcVar15;
   output_format oVar16;
   char *pcVar17;
   int iVar18;
   undefined *puVar19;
   size_spec sVar20;
   uint local_3c;
   if (*s == '\0') {
      return true;
   }

   pcVar17 = s;
   if (n_specs_allocated <= n_specs) goto LAB_0010146b;
   do {
      cVar3 = *pcVar17;
      ptVar2 = spec + n_specs;
      if (cVar3 == 'a') {
         pcVar15 = pcVar17 + 1;
         iVar18 = 3;
         oVar16 = NAMED_CHARACTER;
         sVar20 = CHAR;
         pcVar13 = print_named_ascii;
      }
 else {
         bVar12 = cVar3 + 0x9d;
         if (0x15 < bVar12) {
            LAB_001019b5:uVar7 = quote(s);
            cVar3 = *pcVar17;
            uVar8 = dcgettext(0, "invalid character \'%c\' in type string %s", 5);
            error(0, 0, uVar8, (int)cVar3, uVar7);
            return false;
         }

         uVar6 = 1L << ( bVar12 & 0x3f );
         if (( uVar6 & 0x241002 ) == 0) {
            if (( uVar6 & 1 ) == 0) {
               if (bVar12 != 3) goto LAB_001019b5;
               sVar20 = fp_type_size[8];
               switch (pcVar17[1]) {
                  case 'B':
            pcVar15 = pcVar17 + 2;
            oVar16 = BFLOATING_POINT;
            sVar20 = fp_type_size[2];
            break;
                  default:
            pcVar15 = pcVar17 + 1;
            local_3c = (int)pcVar17[1] - 0x30;
            pcVar14 = pcVar15;
            if (local_3c < 10) {
              while( true ) {
                pcVar1 = pcVar14 + 1;
                pcVar14 = pcVar14 + 1;
                uVar5 = (int)*pcVar1 - 0x30;
                if (9 < uVar5) break;
                iVar18 = (int)((long)(int)local_3c * 10);
                if (((long)iVar18 != (long)(int)local_3c * 10) ||
                   (local_3c = uVar5 + iVar18, SCARRY4(uVar5,iVar18))) {
LAB_0010136c:
                  uVar7 = quote(s);
                  uVar8 = dcgettext(0,"invalid type string %s",5);
                  error(0,0,uVar8,uVar7);
                  return false;
                }
              }
              if (pcVar15 == pcVar14) {
                oVar16 = FLOATING_POINT;
                pcVar15 = pcVar14;
              }
              else {
                if ((0x10 < local_3c) || (fp_type_size[(int)local_3c] == NO_SIZE)) {
                  uVar7 = quote(s);
                  pcVar17 = 
                  "invalid type string %s;\nthis system doesn\'t provide a %d-byte floating point type"
                  ;
                  goto LAB_0010196b;
                }
                oVar16 = FLOATING_POINT;
                pcVar15 = pcVar14;
                sVar20 = fp_type_size[(int)local_3c];
              }
            }
            else {
              oVar16 = FLOATING_POINT;
            }
            break;
                  case 'D':
            pcVar15 = pcVar17 + 2;
            oVar16 = FLOATING_POINT;
            break;
                  case 'F':
            pcVar15 = pcVar17 + 2;
            oVar16 = FLOATING_POINT;
            sVar20 = fp_type_size[4];
            break;
                  case 'H':
            pcVar15 = pcVar17 + 2;
            oVar16 = HFLOATING_POINT;
            sVar20 = fp_type_size[2];
            break;
                  case 'L':
            pcVar15 = pcVar17 + 2;
            oVar16 = FLOATING_POINT;
            sVar20 = fp_type_size[0x10];
               }

               plVar9 = localeconv();
               iVar18 = 1;
               if (*plVar9.decimal_point != '\0') {
                  sVar10 = strlen(plVar9.decimal_point);
                  iVar18 = (int)sVar10;
               }

               if (sVar20 == FLOAT_DOUBLE) {
                  iVar18 = iVar18 + 0x17;
                  pcVar13 = print_double;
               }
 else if (sVar20 < FLOAT_LONG_DOUBLE) {
                  if (sVar20 == FLOAT_HALF) {
                     pcVar13 = print_halffloat;
                     if (oVar16 == BFLOATING_POINT) {
                        pcVar13 = print_bfloat;
                     }

                     iVar18 = iVar18 + 0xe;
                  }
 else {
                     if (sVar20 != FLOAT_SINGLE) goto LAB_001019f3;
                     iVar18 = iVar18 + 0xe;
                     pcVar13 = print_float;
                  }

               }
 else {
                  if (sVar20 != FLOAT_LONG_DOUBLE) {
                     LAB_001019f3:/* WARNING: Subroutine does not return */__assert_fail("0", "src/od.c", 0x38a, "decode_one_format");
                  }

                  iVar18 = iVar18 + 0x1c;
                  pcVar13 = print_long_double;
               }

            }
 else {
               pcVar15 = pcVar17 + 1;
               iVar18 = 3;
               oVar16 = CHARACTER;
               sVar20 = CHAR;
               pcVar13 = print_ascii;
            }

            goto LAB_00101410;
         }

         cVar4 = pcVar17[1];
         if (cVar4 == 'L') {
            pcVar15 = pcVar17 + 2;
            lVar11 = 8;
            sVar20 = integral_type_size[8];
            LAB_0010157d:if (cVar3 == 'u') goto LAB_001016bf;
            LAB_00101586:if (cVar3 < 'v') {
               if (cVar3 == 'd') {
                  puVar19 = &_LC18;
                  iVar18 = (int)"\x01\x04\x06\b\v\r\x10\x12\x14\x17\x19\x1c\x1e!#%("[lVar11];
                  if (( sVar20 != LONG_LONG ) && ( puVar19 = sVar20 == LONG )) {
                     puVar19 = &_LC19;
                  }

                  oVar16 = SIGNED_DECIMAL;
                  __sprintf_chk(ptVar2.fmt_string, 2, 10, "%%*%s", puVar19);
               }
 else {
                  puVar19 = &_LC21;
                  if (( sVar20 != LONG_LONG ) && ( puVar19 = sVar20 == LONG )) {
                     puVar19 = &_LC22;
                  }

                  iVar18 = (int)""[lVar11];
                  oVar16 = OCTAL;
                  __sprintf_chk(ptVar2.fmt_string, 2, 10, "%%*.%d%s", iVar18, puVar19);
               }

            }
 else {
               puVar19 = &_LC27;
               if (( sVar20 != LONG_LONG ) && ( puVar19 = sVar20 == LONG )) {
                  puVar19 = &_LC28;
               }

               iVar18 = (int)""[lVar11];
               oVar16 = HEXADECIMAL;
               __sprintf_chk(ptVar2.fmt_string, 2, 10, "%%*.%d%s", iVar18, puVar19);
            }

         }
 else {
            sVar20 = integral_type_size[4];
            if (cVar4 < 'M') {
               if (cVar4 == 'C') {
                  pcVar15 = pcVar17 + 2;
                  lVar11 = 1;
                  sVar20 = integral_type_size[1];
               }
 else {
                  if (cVar4 != 'I') {
                     local_3c = (int)cVar4 - 0x30;
                     pcVar15 = pcVar17 + 1;
                     if (local_3c < 10) {
                        pcVar15 = pcVar17 + 2;
                        cVar4 = pcVar17[2];
                        while (uVar5 = (int)cVar4 - 0x30,uVar5 < 10) {
                           iVar18 = (int)( (long)(int)local_3c * 10 );
                           if (( (long)iVar18 != (long)(int)local_3c * 10 ) || ( local_3c = SCARRY4(uVar5, iVar18) )) goto LAB_0010136c;
                           pcVar14 = pcVar15 + 1;
                           pcVar15 = pcVar15 + 1;
                           cVar4 = *pcVar14;
                        }
;
                        if (pcVar17 + 1 != pcVar15) {
                           if (local_3c < 9) {
                              lVar11 = (long)(int)local_3c;
                              sVar20 = integral_type_size[lVar11];
                              if (integral_type_size[lVar11] != NO_SIZE) goto LAB_0010157d;
                           }

                           uVar7 = quote(s);
                           pcVar17 = "invalid type string %s;\nthis system doesn\'t provide a %d-byte integral type";
                           LAB_0010196b:uVar8 = dcgettext(0, pcVar17, 5);
                           error(0, 0, uVar8, uVar7, local_3c);
                           return false;
                        }

                     }

                     goto LAB_001018c8;
                  }

                  pcVar15 = pcVar17 + 2;
                  lVar11 = 4;
               }

               goto LAB_0010157d;
            }

            pcVar15 = pcVar17 + 1;
            if (cVar4 != 'S') {
               LAB_001018c8:lVar11 = 4;
               goto LAB_0010157d;
            }

            pcVar15 = pcVar17 + 2;
            lVar11 = 2;
            sVar20 = integral_type_size[2];
            if (cVar3 != 'u') goto LAB_00101586;
            LAB_001016bf:puVar19 = &_LC24;
            iVar18 = (int)""[lVar11];
            if (( sVar20 != LONG_LONG ) && ( puVar19 = sVar20 == LONG )) {
               puVar19 = &_LC25;
            }

            oVar16 = UNSIGNED_DECIMAL;
            __sprintf_chk(ptVar2.fmt_string, 2, 10, "%%*%s", puVar19);
         }

         switch (sVar20) {
            default:
                    /* WARNING: Subroutine does not return */
        __assert_fail("0","src/od.c",800,"decode_one_format");
            case CHAR:
        pcVar13 = print_char;
        if (oVar16 == SIGNED_DECIMAL) {
          pcVar13 = print_s_char;
        }
        break;
            case SHORT:
        pcVar13 = print_short;
        if (oVar16 == SIGNED_DECIMAL) {
          pcVar13 = print_s_short;
        }
        break;
            case INT:
        pcVar13 = print_int;
        break;
            case LONG:
        pcVar13 = print_long;
        break;
            case LONG_LONG:
        pcVar13 = print_long_long;
         }

      }

      LAB_00101410:ptVar2.size = sVar20;
      ptVar2.fmt = oVar16;
      ptVar2.print_function = pcVar13;
      ptVar2.field_width = iVar18;
      cVar3 = *pcVar15;
      ptVar2.hexl_mode_trailer = cVar3 == 'z';
      pcVar15 = pcVar15 + ( cVar3 == 'z' );
      if (pcVar15 == pcVar17) {
         /* WARNING: Subroutine does not return */
         __assert_fail("s != next", "src/od.c", 0x418, "decode_format_string");
      }

      n_specs = n_specs + 1;
      if (*pcVar15 == '\0') {
         return true;
      }

      pcVar17 = pcVar15;
      if (n_specs_allocated <= n_specs) {
         LAB_0010146b:spec = (tspec*)xpalloc(spec, &n_specs_allocated, 1, 0xffffffffffffffff, 0x28);
      }

   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */_Bool open_next_file(void) {
   int *piVar1;
   _Bool _Var2;
   _Var2 = true;
   do {
      input_filename = *file_list;
      if (input_filename == (char*)0x0) {
         return _Var2;
      }

      file_list = file_list + 1;
      if (( *input_filename == '-' ) && ( input_filename[1] == '\0' )) {
         input_filename = (char*)dcgettext(0, "standard input", 5);
         have_read_stdin = true;
         in_stream = _stdin;
      }
 else {
         in_stream = (FILE*)rpl_fopen();
         if (in_stream != (FILE*)0x0) break;
         quotearg_n_style_colon(0, 3, input_filename);
         piVar1 = __errno_location();
         _Var2 = false;
         error(0, *piVar1, &_LC41);
      }

   }
 while ( in_stream == (FILE*)0x0 );
   if (( limit_bytes_to_format != false ) && ( flag_dump_strings == false )) {
      setvbuf((FILE*)in_stream, (char*)0x0, 2, 0);
   }

   return _Var2;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */_Bool check_and_close(int in_errno) {
   int iVar1;
   uint *puVar2;
   undefined8 uVar3;
   _Bool _Var4;
   uint uVar5;
   _Var4 = true;
   if (in_stream == (FILE*)0x0) goto LAB_00101bbc;
   uVar5 = in_stream._flags & 0x20;
   if (uVar5 != 0) {
      uVar5 = in_errno;
   }

   if (( *file_list[-1] == '-' ) && ( file_list[-1][1] == '\0' )) {
      clearerr_unlocked((FILE*)in_stream);
      LAB_00101ba8:if (uVar5 != 0) goto LAB_00101c0b;
      _Var4 = true;
   }
 else {
      iVar1 = rpl_fclose();
      if (iVar1 == 0) goto LAB_00101ba8;
      if (uVar5 == 0) {
         puVar2 = (uint*)__errno_location();
         uVar5 = *puVar2;
         goto LAB_00101ba8;
      }

      LAB_00101c0b:uVar3 = quotearg_n_style_colon(0, 3, input_filename);
      error(0, uVar5, &_LC41, uVar3);
      _Var4 = false;
   }

   in_stream = (FILE*)0x0;
   LAB_00101bbc:if (( *_stdout & 0x20 ) != 0) {
      uVar3 = dcgettext(0, "write error", 5);
      error(0, 0, uVar3);
      _Var4 = false;
   }

   return _Var4;
}
/* WARNING: Unknown calling convention */_Bool read_block(size_t n, char *block, size_t *n_bytes_in_buffer) {
   _Bool _Var1;
   _Bool _Var2;
   int *piVar3;
   size_t sVar4;
   FILE *__stream;
   size_t sVar5;
   _Bool _Var6;
   __stream = (FILE*)in_stream;
   if (( n != 0 ) && ( n <= bytes_per_block )) {
      *n_bytes_in_buffer = 0;
      if (__stream == (FILE*)0x0) {
         _Var6 = true;
      }
 else {
         sVar5 = 0;
         _Var6 = true;
         while (true) {
            sVar4 = fread_unlocked(block + sVar5, 1, n - sVar5, __stream);
            *n_bytes_in_buffer = *n_bytes_in_buffer + sVar4;
            if (n - sVar5 == sVar4) break;
            piVar3 = __errno_location();
            _Var1 = check_and_close(*piVar3);
            _Var2 = open_next_file();
            _Var6 = ( _Bool )(_Var6 & ( _Var1 && _Var2 ));
            if (in_stream == (FILE*)0x0) {
               return _Var6;
            }

            sVar5 = *n_bytes_in_buffer;
            __stream = (FILE*)in_stream;
         }
;
      }

      return _Var6;
   }

   /* WARNING: Subroutine does not return */
   __assert_fail("0 < n && n <= bytes_per_block", "src/od.c", 0x540, "read_block");
}
/* WARNING: Unknown calling convention */_Bool read_char(int *c) {
   _Bool _Var1;
   _Bool _Var2;
   int iVar3;
   int *piVar4;
   _Bool _Var5;
   _Var5 = true;
   *c = -1;
   while (true) {
      if ((FILE*)in_stream == (FILE*)0x0) {
         return _Var5;
      }

      iVar3 = fgetc((FILE*)in_stream);
      *c = iVar3;
      if (iVar3 != -1) break;
      piVar4 = __errno_location();
      _Var1 = check_and_close(*piVar4);
      _Var2 = open_next_file();
      _Var5 = ( _Bool )(_Var5 & ( _Var1 && _Var2 ));
   }
;
   return _Var5;
}
/* WARNING: Unknown calling convention */_Bool skip(uintmax_t n_skip) {
   long lVar1;
   FILE *pFVar2;
   _Bool _Var3;
   _Bool _Var4;
   int iVar5;
   __blksize_t _Var6;
   ulong uVar7;
   undefined8 uVar8;
   int *piVar9;
   ulong uVar10;
   _Bool _Var11;
   long in_FS_OFFSET;
   stat file_stats;
   char buf[8192];
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (n_skip == 0) {
      _Var11 = true;
      LAB_00101eb1:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return _Var11;
   }

   _Var11 = true;
   if (in_stream != (FILE*)0x0) goto LAB_00101e1d;
   LAB_00101f16:uVar8 = dcgettext(0, "cannot skip past end of combined input", 5);
   error(1, 0, uVar8);
   LAB_00101f3a:_Var11 = false;
   uVar8 = quotearg_n_style_colon(0, 3, input_filename);
   piVar9 = __errno_location();
   error(0, *piVar9, &_LC41, uVar8);
   LAB_00101dfb:_Var3 = check_and_close(0);
   _Var4 = open_next_file();
   _Var11 = ( _Bool )(_Var11 & _Var3 & _Var4);
   if (in_stream == (FILE*)0x0) {
      if (n_skip == 0) goto LAB_00101eb1;
      goto LAB_00101f16;
   }

   LAB_00101e1d:pFVar2 = in_stream;
   iVar5 = fileno((FILE*)in_stream);
   iVar5 = fstat(iVar5, (stat*)&file_stats);
   if (iVar5 == 0) {
      if (( file_stats.st_mode & 0xd000 ) == 0x8000) {
         _Var6 = file_stats.st_blksize;
         if (0x1fffffffffffffff < file_stats.st_blksize - 1U) {
            _Var6 = 0x200;
         }

         if (_Var6 < file_stats.st_size) {
            if (n_skip <= (ulong)file_stats.st_size) {
               iVar5 = rpl_fseeko(pFVar2, n_skip, 1);
               if (iVar5 != 0) {
                  LAB_00101f04:_Var11 = false;
               }

               goto LAB_00101eb1;
            }

            n_skip = n_skip - file_stats.st_size;
            goto LAB_00101dfb;
         }

      }
 else {
         iVar5 = rpl_fseeko(pFVar2, n_skip, 1);
         if (iVar5 == 0) goto LAB_00101eb1;
      }

      if (n_skip != 0) {
         uVar10 = 0x2000;
         do {
            if (n_skip < uVar10) {
               uVar10 = n_skip;
            }

            uVar7 = __fread_unlocked_chk(buf, 0x2000, 1, uVar10, in_stream);
            n_skip = n_skip - uVar7;
            if (uVar10 != uVar7) {
               if (( in_stream._flags & 0x20U ) != 0) goto LAB_00101f04;
               if (( in_stream._flags & 0x10U ) != 0) goto LAB_00101ee0;
            }

            if (n_skip == 0) break;
         }
 while ( true );
      }

      goto LAB_00101eb1;
   }

   goto LAB_00101f3a;
   LAB_00101ee0:if (n_skip == 0) goto LAB_00101eb1;
   goto LAB_00101dfb;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */void format_address_paren(uintmax_t address, char c) {
   char *pcVar1;
   pcVar1 = _stdout._IO_write_ptr;
   if (pcVar1 < _stdout._IO_write_end) {
      _stdout._IO_write_ptr = pcVar1 + 1;
      *pcVar1 = '(';
   }
 else {
      __overflow(_stdout, 0x28);
   }

   format_address_std(address, ')');
   if (c != '\0') {
      pcVar1 = _stdout._IO_write_ptr;
      if (_stdout._IO_write_end <= pcVar1) {
         __overflow(_stdout, (uint)(byte)c);
         return;
      }

      _stdout._IO_write_ptr = pcVar1 + 1;
      *pcVar1 = c;
   }

   return;
}
/* WARNING: Unknown calling convention */void format_address_label(uintmax_t address, char c) {
   format_address_std(address, ' ');
   format_address_paren(address + pseudo_offset, c);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */void usage(int status) {
   FILE *pFVar1;
   int iVar2;
   undefined8 uVar3;
   char *pcVar4;
   undefined8 uVar5;
   infomap *piVar6;
   undefined1 *puVar7;
   infomap infomap[7];
   uVar5 = _program_name;
   piVar6 = infomap;
   if (status != 0) {
      uVar3 = dcgettext(0, "Try \'%s --help\' for more information.\n", 5);
      __fprintf_chk(_stderr, 2, uVar3, uVar5);
      goto LAB_00102099;
   }

   uVar3 = dcgettext(0, "Usage: %s [OPTION]... [FILE]...\n  or:  %s [-abcdfilosx]... [FILE] [[+]OFFSET[.][b]]\n  or:  %s --traditional [OPTION]... [FILE] [[+]OFFSET[.][b] [+][LABEL][.][b]]\n", 5);
   __printf_chk(2, uVar3, uVar5, uVar5, uVar5);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "\nWrite an unambiguous representation, octal bytes by default,\nof FILE to standard output.  With more than one FILE argument,\nconcatenate them in the listed order to form the input.\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "\nWith no FILE, or when FILE is -, read standard input.\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "\nIf first and second call formats both apply, the second format is assumed\nif the last operand begins with + or (if there are 2 operands) a digit.\nAn OFFSET operand means -j OFFSET.  LABEL is the pseudo-address\nat first byte printed, incremented when dump is progressing.\nFor OFFSET and LABEL, a 0x or 0X prefix indicates hexadecimal;\nsuffixes may be . for octal and b for multiply by 512.\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "  -A, --address-radix=RADIX   output format for file offsets; RADIX is one\n                                of [doxn], for Decimal, Octal, Hex or None\n      --endian={big|little}   swap input bytes according the specified order\n  -j, --skip-bytes=BYTES      skip BYTES input bytes first\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "  -N, --read-bytes=BYTES      limit dump to BYTES input bytes\n  -S BYTES, --strings[=BYTES]  show only NUL terminated strings\n                                of at least BYTES (3) printable characters\n  -t, --format=TYPE           select output format or formats\n  -v, --output-duplicates     do not use * to mark line suppression\n  -w[BYTES], --width[=BYTES]  output BYTES bytes per output line;\n                                32 is implied when BYTES is not specified\n      --traditional           accept arguments in third form above\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "      --help        display this help and exit\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "      --version     output version information and exit\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "\n\nTraditional format specifications may be intermixed; they accumulate:\n  -a   same as -t a,  select named characters, ignoring high-order bit\n  -b   same as -t o1, select octal bytes\n  -c   same as -t c,  select printable characters or backslash escapes\n  -d   same as -t u2, select unsigned decimal 2-byte units\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "  -f   same as -t fF, select floats\n  -i   same as -t dI, select decimal ints\n  -l   same as -t dL, select decimal longs\n  -o   same as -t o2, select octal 2-byte units\n  -s   same as -t d2, select decimal 2-byte units\n  -x   same as -t x2, select hexadecimal 2-byte units\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "\n\nTYPE is made up of one or more of these specifications:\n  a          named character, ignoring high-order bit\n  c          printable character or backslash escape\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "  d[SIZE]    signed decimal, SIZE bytes per integer\n  f[SIZE]    floating point, SIZE bytes per float\n  o[SIZE]    octal, SIZE bytes per integer\n  u[SIZE]    unsigned decimal, SIZE bytes per integer\n  x[SIZE]    hexadecimal, SIZE bytes per integer\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "\nSIZE is a number.  For TYPE in [doux], SIZE may also be C for\nsizeof(char), S for sizeof(short), I for sizeof(int) or L for\nsizeof(long).  If TYPE is f, SIZE may also be B for Brain 16 bit,\nH for Half precision float, F for sizeof(float), D for sizeof(double),\nor L for sizeof(long double).\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "\nAdding a z suffix to any type displays printable characters at the end of\neach output line.\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "\n\nBYTES is hex with 0x or 0X prefix, and may have a multiplier suffix:\n  b    512\n  KB   1000\n  K    1024\n  MB   1000*1000\n  M    1024*1024\nand so on for G, T, P, E, Z, Y, R, Q.\nBinary prefixes can be used, too: KiB=K, MiB=M, and so on.\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
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
   infomap[6].program = (char*)0x0;
   infomap[6].node = (char*)0x0;
   do {
      if (( ( *pcVar4 == 'o' ) && ( pcVar4[1] == 'd' ) ) && ( pcVar4[2] == '\0' )) break;
      pcVar4 = *(char**)( (long)piVar6 + 0x10 );
      piVar6 = (infomap*)( (long)piVar6 + 0x10 );
   }
 while ( pcVar4 != (char*)0x0 );
   puVar7 = *(undefined1**)( (long)piVar6 + 8 );
   if (puVar7 == (undefined1*)0x0) {
      uVar5 = dcgettext(0, "\n%s online help: <%s>\n", 5);
      puVar7 = &_LC46;
      __printf_chk(2, uVar5, "GNU coreutils", "https://www.gnu.org/software/coreutils/");
      pcVar4 = setlocale(5, (char*)0x0);
      if (pcVar4 != (char*)0x0) goto LAB_0010242c;
      uVar5 = dcgettext(0, "Full documentation <%s%s>\n", 5);
      pcVar4 = " invocation";
      __printf_chk(2, uVar5, "https://www.gnu.org/software/coreutils/", &_LC46);
   }
 else {
      uVar5 = dcgettext(0, "\n%s online help: <%s>\n", 5);
      __printf_chk(2, uVar5, "GNU coreutils", "https://www.gnu.org/software/coreutils/");
      pcVar4 = setlocale(5, (char*)0x0);
      if (pcVar4 != (char*)0x0) {
         LAB_0010242c:iVar2 = strncmp(pcVar4, "en_", 3);
         pFVar1 = _stdout;
         if (iVar2 != 0) {
            pcVar4 = (char*)dcgettext(0, "Report any translation bugs to <https://translationproject.org/team/>\n", 5);
            fputs_unlocked(pcVar4, pFVar1);
         }

      }

      uVar5 = dcgettext(0, "Full documentation <%s%s>\n", 5);
      pcVar4 = "";
      __printf_chk(2, uVar5, "https://www.gnu.org/software/coreutils/", &_LC46);
      if (puVar7 == &_LC46) {
         pcVar4 = " invocation";
      }

   }

   uVar5 = dcgettext(0, "or available locally via: info \'(coreutils) %s%s\'\n", 5);
   __printf_chk(2, uVar5, puVar7, pcVar4);
   LAB_00102099:/* WARNING: Subroutine does not return */exit(status);
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */int main(int argc, char **argv) {
   size_spec *psVar1;
   byte bVar2;
   long lVar3;
   char *pcVar4;
   byte *pbVar5;
   undefined1 auVar6[16];
   bool bVar7;
   bool bVar8;
   idx_t iVar9;
   _Bool _Var10;
   _Bool _Var11;
   int iVar12;
   undefined7 extraout_var;
   undefined7 extraout_var_00;
   undefined7 extraout_var_01;
   undefined7 extraout_var_02;
   undefined7 extraout_var_03;
   undefined7 extraout_var_04;
   undefined7 extraout_var_05;
   undefined7 extraout_var_06;
   undefined7 extraout_var_07;
   undefined7 extraout_var_08;
   undefined7 extraout_var_09;
   undefined7 extraout_var_10;
   undefined7 extraout_var_11;
   undefined7 extraout_var_12;
   undefined7 extraout_var_13;
   undefined8 uVar13;
   uintmax_t uVar14;
   long lVar15;
   byte *__ptr;
   ushort **ppuVar16;
   undefined8 uVar17;
   int *piVar18;
   char cVar19;
   size_spec *psVar20;
   uint uVar21;
   uint uVar22;
   uint *puVar23;
   char *pcVar24;
   size_spec *psVar25;
   byte bVar26;
   byte *pbVar27;
   ulong uVar28;
   ulong uVar29;
   uint *puVar30;
   long in_FS_OFFSET;
   size_t *local_88;
   uint *local_78;
   uintmax_t local_70;
   int oi;
   undefined4 uStack_64;
   uintmax_t tmp;
   char *block[2];
   puVar23 = (uint*)0x1;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   set_program_name(*argv);
   setlocale(6, "");
   bindtextdomain("coreutils", "/usr/local/share/locale");
   textdomain("coreutils");
   atexit((__func*)&close_stdout);
   integral_type_size[8] = LONG_LONG;
   auVar6._8_8_ = 0;
   auVar6._0_8_ = _LC81;
   integral_type_size._0_16_ = auVar6 << 0x20;
   integral_type_size._20_12_ = SUB1612((undefined1[16])0x0, 4);
   integral_type_size[4] = INT;
   fp_type_size._0_12_ = ZEXT412(6) << 0x40;
   fp_type_size[3] = NO_SIZE;
   fp_type_size._20_12_ = SUB1612((undefined1[16])0x0, 4);
   fp_type_size[4] = FLOAT_SINGLE;
   fp_type_size[0x10] = FLOAT_LONG_DOUBLE;
   fp_type_size._36_12_ = SUB1612((undefined1[16])0x0, 4);
   fp_type_size[8] = FLOAT_DOUBLE;
   n_specs = 0;
   n_specs_allocated = 0;
   spec = (tspec*)0x0;
   format_address = format_address_std;
   address_base = 8;
   address_pad_len = 7;
   flag_dump_strings = false;
   bVar8 = false;
   bVar7 = false;
   for (int i = 0; i < 4; i++) {
      fp_type_size[( i + 12 )] = NO_SIZE;
   }

   LAB_00103ea0:oi = -1;
   iVar12 = getopt_long(argc, argv, "A:aBbcDdeFfHhIij:LlN:OoS:st:vw::Xx", long_options);
   if (iVar12 != -1) {
      if (0x81 < iVar12) goto switchD_00103ef0_caseD_43;
      if (iVar12 < 0x41) {
         LAB_001041e8:if (iVar12 == -0x83) {
            uVar13 = proper_name_lite("Jim Meyering", "Jim Meyering");
            version_etc(_stdout, &_LC46, "GNU coreutils", _Version, uVar13, 0);
            /* WARNING: Subroutine does not return */
            exit(0);
         }

         if (iVar12 == -0x82) {
            /* WARNING: Subroutine does not return */
            usage(0);
         }

         goto switchD_00103ef0_caseD_43;
      }

      if (0x40 < iVar12 - 0x41U) goto switchD_00103ef0_caseD_43;
      uVar22 = (uint)puVar23;
      switch (iVar12) {
         case 0x41:
      cVar19 = *_optarg;
      if (cVar19 == 'o') {
        address_base = 8;
        format_address = format_address_std;
        address_pad_len = 7;
        goto LAB_00103f98;
      }
      if (cVar19 < 'p') {
        if (cVar19 == 'd') {
          address_base = 10;
          address_pad_len = 7;
LAB_001045d3:
          format_address = format_address_std;
          bVar7 = true;
          goto LAB_00103ea0;
        }
        if (cVar19 == 'n') {
          bVar7 = true;
          format_address = format_address_none;
          address_pad_len = 0;
          goto LAB_00103ea0;
        }
      }
      else if (cVar19 == 'x') {
        address_base = 0x10;
        address_pad_len = 6;
        goto LAB_001045d3;
      }
      break;
         case 0x42:
         case 0x6f:
      _Var10 = decode_format_string("o2");
      puVar23 = (uint *)(ulong)(uVar22 & (uint)CONCAT71(extraout_var_02,_Var10));
      goto LAB_00103ea0;
         default:
      goto switchD_00103ef0_caseD_43;
         case 0x44:
      _Var10 = decode_format_string("u4");
      puVar23 = (uint *)(ulong)(uVar22 & (uint)CONCAT71(extraout_var_06,_Var10));
      goto LAB_00103ea0;
         case 0x46:
         case 0x65:
      _Var10 = decode_format_string("fD");
      puVar23 = (uint *)(ulong)(uVar22 & (uint)CONCAT71(extraout_var_01,_Var10));
      goto LAB_00103ea0;
         case 0x48:
         case 0x58:
      _Var10 = decode_format_string("x4");
      puVar23 = (uint *)(ulong)(uVar22 & (uint)CONCAT71(extraout_var_00,_Var10));
      goto LAB_00103ea0;
         case 0x49:
         case 0x4c:
         case 0x6c:
      _Var10 = decode_format_string("dL");
      puVar23 = (uint *)(ulong)(uVar22 & (uint)CONCAT71(extraout_var,_Var10));
      goto LAB_00103ea0;
         case 0x4e:
      limit_bytes_to_format = true;
      iVar12 = xstrtoumax(_optarg,0,0,&max_bytes_to_format,"bEGKkMmPQRTYZ0");
      if (iVar12 != 0) {
        iVar12 = xstrtol_fatal(iVar12,oi,0x4e,long_options,_optarg);
        goto LAB_001041e8;
      }
      goto LAB_00103f98;
         case 0x4f:
      _Var10 = decode_format_string("o4");
      puVar23 = (uint *)(ulong)(uVar22 & (uint)CONCAT71(extraout_var_13,_Var10));
      goto LAB_00103ea0;
         case 0x53:
      if (_optarg == (char *)0x0) {
        uVar14 = 3;
LAB_00104176:
        flag_dump_strings = true;
        string_min = uVar14;
        goto LAB_00103f98;
      }
      iVar12 = xstrtoumax(_optarg,0,0,&tmp,"bEGKkMmPQRTYZ0");
      if (iVar12 == 0) {
        uVar14 = tmp;
        if ((long)tmp < 0) {
          uVar13 = quote(_optarg);
          uVar17 = dcgettext(0,"%s is too large",5);
          iVar12 = error(1,0,uVar17,uVar13);
          goto LAB_00104d26;
        }
        goto LAB_00104176;
      }
      goto LAB_00104d85;
         case 0x61:
      _Var10 = decode_format_string("a");
      puVar23 = (uint *)(ulong)(uVar22 & (uint)CONCAT71(extraout_var_12,_Var10));
      goto LAB_00103ea0;
         case 0x62:
      _Var10 = decode_format_string("o1");
      puVar23 = (uint *)(ulong)(uVar22 & (uint)CONCAT71(extraout_var_11,_Var10));
      goto LAB_00103ea0;
         case 99:
      _Var10 = decode_format_string("c");
      puVar23 = (uint *)(ulong)(uVar22 & (uint)CONCAT71(extraout_var_10,_Var10));
      goto LAB_00103ea0;
         case 100:
      _Var10 = decode_format_string("u2");
      puVar23 = (uint *)(ulong)(uVar22 & (uint)CONCAT71(extraout_var_09,_Var10));
      goto LAB_00103ea0;
         case 0x66:
      _Var10 = decode_format_string("fF");
      puVar23 = (uint *)(ulong)(uVar22 & (uint)CONCAT71(extraout_var_08,_Var10));
      goto LAB_00103ea0;
         case 0x68:
         case 0x78:
      _Var10 = decode_format_string("x2");
      puVar23 = (uint *)(ulong)(uVar22 & (uint)CONCAT71(extraout_var_03,_Var10));
      goto LAB_00103ea0;
         case 0x69:
      _Var10 = decode_format_string("dI");
      puVar23 = (uint *)(ulong)(uVar22 & (uint)CONCAT71(extraout_var_04,_Var10));
      goto LAB_00103ea0;
         case 0x6a:
      iVar12 = xstrtoumax(_optarg,0,0,&n_bytes_to_skip,"bEGKkMmPQRTYZ0");
      if (iVar12 != 0) goto LAB_00104d40;
LAB_00103f98:
      bVar7 = true;
      goto LAB_00103ea0;
         case 0x73:
      _Var10 = decode_format_string("d2");
      puVar23 = (uint *)(ulong)(uVar22 & (uint)CONCAT71(extraout_var_05,_Var10));
      goto LAB_00103ea0;
         case 0x74:
      _Var10 = decode_format_string(_optarg);
      bVar7 = true;
      puVar23 = (uint *)(ulong)(uVar22 & (uint)CONCAT71(extraout_var_07,_Var10));
      goto LAB_00103ea0;
         case 0x76:
      abbreviate_duplicate_blocks = false;
      bVar7 = true;
      goto LAB_00103ea0;
         case 0x77:
      if (_optarg == (char *)0x0) {
        bVar8 = true;
        bVar7 = true;
        local_78 = (uint *)0x20;
        goto LAB_00103ea0;
      }
      iVar12 = xstrtoimax(_optarg,0,10,&tmp,&_LC16);
      if (iVar12 == 0) {
        local_78 = (uint *)tmp;
        if (0 < (long)tmp) {
          bVar8 = true;
          bVar7 = true;
          goto LAB_00103ea0;
        }
      }
LAB_00104d26:
      iVar12 = xstrtol_fatal(iVar12,oi,0x77,long_options,_optarg);
LAB_00104d40:
      cVar19 = ' ';
      xstrtol_fatal(iVar12,oi,0x6a,long_options,_optarg);
      break;
         case 0x80:
      traditional = true;
      goto LAB_00103ea0;
         case 0x81:
      goto switchD_00103ef0_caseD_81;
      }

      uVar13 = dcgettext(0, "invalid output address radix \'%c\'; it must be one character from [doxn]", 5);
      iVar12 = error(1, 0, uVar13, (int)cVar19);
      LAB_00104d85:xstrtol_fatal(iVar12, oi, 0x53, long_options, _optarg);
      goto LAB_00104d9f;
   }

   if ((char)puVar23 == '\0') {
      uVar22 = 1;
      goto LAB_0010457f;
   }

   if (( flag_dump_strings != false ) && ( pcVar24= "no type may be specified when dumping strings",0 < n_specs )) goto LAB_00104dd9;
   lVar15 = (long)_optind;
   iVar12 = argc - _optind;
   if (bVar7) {
      if (traditional == false) goto LAB_001042f0;
      if (iVar12 == 2) {
         pcVar24 = argv[lVar15 + 1];
         goto LAB_0010460d;
      }

      LAB_001042b0:if (iVar12 == 3) {
         if (traditional != false) {
            _Var10 = parse_old_offset(argv[lVar15 + 1], (uintmax_t*)&oi);
            if (( !_Var10 ) || ( _Var10 = !_Var10 )) goto LAB_0010465a;
            n_bytes_to_skip = CONCAT44(uStack_64, oi);
            flag_pseudo_start = true;
            iVar12 = 1;
            local_70 = tmp;
            argv[(long)_optind + 2] = argv[_optind];
            argv = argv + 2;
         }

      }
 else if (iVar12 == 1) {
         if (( ( traditional != false ) || ( *argv[lVar15] == '+' ) ) && ( _Var10 = _Var10 )) {
            n_bytes_to_skip = CONCAT44(uStack_64, oi);
            argv = argv + 1;
            iVar12 = 0;
         }

      }
 else {
         LAB_0010465a:if (( traditional != false ) && ( 1 < iVar12 )) {
            uVar13 = quote(argv[(long)_optind + 1]);
            uVar17 = dcgettext(0, "extra operand %s", 5);
            error(0, 0, uVar17, uVar13);
            uVar13 = dcgettext(0, "compatibility mode supports at most one file", 5);
            error(0, 0, &_LC41, uVar13);
            switchD_00103ef0_caseD_43:/* WARNING: Subroutine does not return */usage(1);
         }

      }

   }
 else {
      if (iVar12 != 2) goto LAB_001042b0;
      pcVar24 = argv[lVar15 + 1];
      if (( ( traditional != false ) || ( *pcVar24 == '+' ) ) || ( (int)*pcVar24 - 0x30U < 10 )) {
         LAB_0010460d:_Var10 = parse_old_offset(pcVar24, &tmp);
         if (_Var10) {
            lVar15 = (long)_optind;
            if (traditional != false) {
               _Var10 = parse_old_offset(argv[lVar15], (uintmax_t*)&oi);
               if (_Var10) {
                  n_bytes_to_skip = CONCAT44(uStack_64, oi);
                  flag_pseudo_start = true;
                  argv = argv + 2;
                  iVar12 = 0;
                  local_70 = tmp;
                  goto LAB_001042f0;
               }

               lVar15 = (long)_optind;
            }

            iVar12 = 1;
            n_bytes_to_skip = tmp;
            argv[lVar15 + 1] = argv[lVar15];
            argv = argv + 1;
            goto LAB_001042f0;
         }

         goto LAB_0010465a;
      }

   }

   LAB_001042f0:if (flag_pseudo_start != false) {
      if (format_address == format_address_none) {
         address_base = 8;
         address_pad_len = 7;
         format_address = format_address_paren;
      }
 else {
         format_address = format_address_label;
      }

   }

   if (( limit_bytes_to_format == false ) || ( end_offset = max_bytes_to_format + n_bytes_to_skip ),!CARRY8(max_bytes_to_format,n_bytes_to_skip)) {
      if (n_specs == 0) {
         decode_format_string("oS");
      }

      file_list = default_file_list;
      if (0 < iVar12) {
         file_list = argv + _optind;
      }

      _Var10 = open_next_file();
      uVar22 = (uint)_Var10;
      if (in_stream == (FILE*)0x0) goto LAB_0010456a;
      _Var11 = skip(n_bytes_to_skip);
      bVar26 = _Var10 && _Var11;
      argv = (char**)(ulong)bVar26;
      uVar22 = (uint)bVar26;
      if (in_stream == (FILE*)0x0) goto LAB_0010456a;
      pseudo_offset = 0;
      if (flag_pseudo_start != false) {
         pseudo_offset = local_70 - n_bytes_to_skip;
      }

      iVar12 = get_lcm();
      if (bVar8) {
         puVar23 = (uint*)(long)iVar12;
         if (( local_78 == (uint*)0x0 ) || ( (long)local_78 % (long)puVar23 != 0 )) {
            LAB_00104d9f:bVar26 = (byte)argv;
            uVar13 = dcgettext(0, "warning: invalid width %td; using %d instead", 5);
            error(0, 0, uVar13, local_78);
            local_78 = puVar23;
         }

      }
 else if (iVar12 < 0x10) {
         local_78 = (uint*)(long)( (int)( 0x10 / (long)iVar12 ) * iVar12 );
      }
 else {
         local_78 = (uint*)(long)iVar12;
      }

      bytes_per_block = (size_t)local_78;
      if (0 < n_specs) {
         uVar22 = 0;
         psVar20 = &spec.size;
         psVar1 = psVar20 + n_specs * 10;
         psVar25 = psVar20;
         do {
            uVar21 = ( psVar25[6] + 1 ) * (int)( (ulong)local_78 / (ulong)(long)width_bytes[*psVar25] );
            if (uVar22 < uVar21) {
               uVar22 = uVar21;
            }

            psVar25 = psVar25 + 10;
         }
 while ( psVar1 != psVar25 );
         do {
            psVar25 = psVar20 + 10;
            psVar20[7] = uVar22 - (int)( (ulong)local_78 / (ulong)(long)width_bytes[*psVar20] ) * psVar20[6];
            psVar20 = psVar25;
         }
 while ( psVar25 != psVar1 );
      }

      uVar22 = (uint)flag_dump_strings;
      puVar23 = local_78;
      if (flag_dump_strings == false) goto LAB_0010474f;
      tmp = string_min;
      if (string_min < 100) {
         tmp = 100;
      }

      __ptr = (byte*)xmalloc();
      puVar23 = (uint*)n_bytes_to_skip;
      uVar29 = n_bytes_to_skip;
      LAB_001044cc:do {
         if (( limit_bytes_to_format != false ) && ( ( end_offset < (ulong)string_min || ( end_offset - string_min <= uVar29 ) ) )) {
            uVar21 = (uint)bVar26;
            free(__ptr);
            _Var10 = check_and_close(0);
            uVar22 = uVar22 & _Var10;
            goto LAB_0010455d;
         }

         puVar30 = (uint*)0x0;
         if (0 < string_min) {
            puVar23 = (uint*)( uVar29 + 1 );
            do {
               uVar29 = (long)puVar23 + (long)puVar30;
               _Var10 = read_char(&oi);
               iVar12 = oi;
               uVar22 = uVar22 & _Var10;
               if (oi < 0) goto LAB_0010454f;
               ppuVar16 = __ctype_b_loc();
               iVar9 = string_min;
               if (( *(byte*)( (long)*ppuVar16 + (long)iVar12 * 2 + 1 ) & 0x40 ) == 0) goto LAB_001044cc;
               __ptr[(long)puVar30] = (byte)iVar12;
               puVar30 = (uint*)( (long)puVar30 + 1 );
            }
 while ( (long)puVar30 < iVar9 );
         }

         puVar23 = puVar30;
         while (( limit_bytes_to_format == false || ( uVar29 < end_offset ) )) {
            if ((uint*)tmp == puVar23) {
               __ptr = (byte*)xpalloc(__ptr, &tmp, 1, 0xffffffffffffffff, 1);
            }

            uVar29 = uVar29 + 1;
            _Var10 = read_char(&oi);
            iVar12 = oi;
            uVar22 = uVar22 & _Var10;
            if (oi < 0) goto LAB_0010454f;
            if (oi == 0) break;
            ppuVar16 = __ctype_b_loc();
            if (( *(byte*)( (long)*ppuVar16 + (long)iVar12 * 2 + 1 ) & 0x40 ) == 0) goto LAB_001044cc;
            __ptr[(long)puVar23] = (byte)iVar12;
            puVar23 = (uint*)( (long)puVar23 + 1 );
         }
;
         __ptr[(long)puVar23] = 0;
         ( *format_address )(( uVar29 - 1 ) - (long)puVar23, ' ');
         pbVar27 = __ptr;
         while (true) {
            bVar2 = *pbVar27;
            oi = (int)(char)bVar2;
            if (bVar2 == 0) break;
            switch (bVar2) {
               case 7:
          fwrite_unlocked(&_LC8,1,2,_stdout);
          break;
               case 8:
          fwrite_unlocked(&_LC9,1,2,_stdout);
          break;
               case 9:
          fwrite_unlocked(&_LC13,1,2,_stdout);
          break;
               case 10:
          fwrite_unlocked(&_LC11,1,2,_stdout);
          break;
               case 0xb:
          fwrite_unlocked(&_LC14,1,2,_stdout);
          break;
               case 0xc:
          fwrite_unlocked(&_LC10,1,2,_stdout);
          break;
               case 0xd:
          fwrite_unlocked(&_LC12,1,2,_stdout);
          break;
               default:
          pbVar5 = (byte *)_stdout->_IO_write_ptr;
          if (pbVar5 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(pbVar5 + 1);
            *pbVar5 = bVar2;
          }
          else {
            __overflow(_stdout,(uint)bVar2);
          }
            }

            pbVar27 = pbVar27 + 1;
         }
;
         pcVar24 = _stdout._IO_write_ptr;
         puVar23 = &switchD_00104b63::switchdataD_00102ac0;
         if (pcVar24 < _stdout._IO_write_end) {
            _stdout._IO_write_ptr = pcVar24 + 1;
            *pcVar24 = '\n';
         }
 else {
            __overflow(_stdout, 10);
         }

      }
 while ( true );
   }

   pcVar24 = "skip-bytes + read-bytes is too large";
   LAB_00104dd9:uVar13 = dcgettext(0, pcVar24, 5);
   error(1, 0, uVar13);
   LAB_00104df1:/* WARNING: Subroutine does not return */__assert_fail("n_bytes_read == bytes_per_block", "src/od.c", 0x5bf, "dump");
   switchD_00103ef0_caseD_81:lVar15 = __xargmatch_internal("--endian", _optarg, endian_args, endian_types, 4, _argmatch_die, 1, (long)&switchD_00103ef0::switchdataD_001029bc + (long)(int)( &switchD_00103ef0::switchdataD_001029bc )[iVar12 - 0x41U]);
   if (endian_types[lVar15] == endian_little) {
      input_swap = false;
   }
 else if (endian_types[lVar15] == endian_big) {
      input_swap = true;
   }

   goto LAB_00103ea0;
   LAB_0010454f:uVar21 = (uint)bVar26;
   free(__ptr);
   LAB_0010455d:while (true) {
      uVar22 = uVar22 & uVar21 & 1;
      LAB_0010456a:bVar26 = (byte)uVar22;
      if (( have_read_stdin == false ) || ( iVar12 = iVar12 != -1 )) break;
      uVar13 = dcgettext(0, "standard input", 5);
      piVar18 = __errno_location();
      error(1, *piVar18, uVar13);
      LAB_0010474f:uVar29 = 0;
      pcVar24 = (char*)xnmalloc(2, puVar23);
      _Var10 = limit_bytes_to_format;
      block[0] = pcVar24;
      block[1] = pcVar24 + bytes_per_block;
      if (limit_bytes_to_format == false) {
         uVar28 = 0;
         puVar30 = (uint*)n_bytes_to_skip;
         do {
            local_88 = &tmp;
            uVar21 = (uint)uVar29;
            pcVar4 = block[(int)uVar28];
            _Var10 = read_block(bytes_per_block, pcVar4, local_88);
            uVar22 = (uint)_Var10;
            if (tmp < bytes_per_block) break;
            if (tmp != bytes_per_block) goto LAB_00104df1;
            uVar21 = uVar21 ^ 1;
            uVar29 = (ulong)uVar21;
            uVar28 = (ulong)uVar21;
            puVar23 = (uint*)( (long)puVar30 + tmp );
            write_block((uintmax_t)puVar30, tmp, block[uVar29], pcVar4);
            puVar30 = puVar23;
            if (( _stdout._flags & 0x20 ) != 0) {
               uVar22 = 0;
               break;
            }

         }
 while ( _Var10 );
      }
 else {
         puVar23 = (uint*)n_bytes_to_skip;
         do {
            uVar28 = uVar29;
            uVar21 = (uint)uVar28;
            if (end_offset <= puVar23) {
               uVar22 = (uint)_Var10;
               goto LAB_00104895;
            }

            pcVar4 = block[uVar28];
            uVar29 = end_offset - (long)puVar23;
            if (bytes_per_block < end_offset - (long)puVar23) {
               uVar29 = bytes_per_block;
            }

            _Var11 = read_block(uVar29, pcVar4, &tmp);
            uVar22 = (uint)_Var11;
            puVar30 = puVar23;
            if (tmp < bytes_per_block) break;
            if (tmp != bytes_per_block) {
               /* WARNING: Subroutine does not return */
               __assert_fail("n_bytes_read == bytes_per_block", "src/od.c", 0x5af, "dump");
            }

            uVar21 = uVar21 ^ 1;
            uVar28 = (ulong)uVar21;
            puVar30 = (uint*)( (long)puVar23 + tmp );
            write_block((uintmax_t)puVar23, tmp, block[uVar21], pcVar4);
            if (( _stdout._flags & 0x20 ) != 0) {
               uVar22 = 0;
               break;
            }

            uVar29 = (ulong)uVar21;
            puVar23 = puVar30;
         }
 while ( _Var11 );
      }

      uVar14 = tmp;
      puVar23 = puVar30;
      if (tmp != 0) {
         iVar12 = get_lcm();
         pcVar4 = block[uVar28];
         uVar29 = ( (long)iVar12 - 1U ) + uVar14;
         memset(pcVar4 + uVar14, 0, ( uVar29 - uVar29 % (ulong)(long)iVar12 ) - uVar14);
         puVar23 = (uint*)( (long)puVar30 + uVar14 );
         write_block((uintmax_t)puVar30, uVar14, block[uVar21 ^ 1], pcVar4);
      }

      LAB_00104895:uVar21 = (uint)bVar26;
      ( *format_address )((uintmax_t)puVar23, '\n');
      if (( limit_bytes_to_format != false ) && ( end_offset <= puVar23 )) {
         _Var10 = check_and_close(0);
         uVar22 = uVar22 & _Var10;
      }

      free(pcVar24);
   }
;
   uVar22 = uVar22 ^ 1;
   LAB_0010457f:if (lVar3 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar22;
}

