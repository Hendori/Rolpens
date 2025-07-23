void digits_to_date_time(parser_control *pc, textint text_int) {
   intmax_t iVar1;
   long lVar2;
   long lVar3;
   iVar1 = text_int.value;
   if (( ( pc->dates_seen == 0 ) || ( (pc->year).digits != 0 ) ) || ( pc->rels_seen != false )) {
      if (4 < text_int.digits) {
         pc->dates_seen = pc->dates_seen + 1;
         (pc->year).digits = text_int.digits + -4;
         pc->day = text_int.value % 100;
         pc->month = ( text_int.value / 100 ) % 100;
         (pc->year).value = text_int.value / 10000;
         return;
      }

      lVar2 = 0;
      lVar3 = pc->times_seen + 1;
      if (2 < text_int.digits) {
         iVar1 = ( SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(text_int.value), 8) + text_int.value >> 6 ) - ( text_int.value >> 0x3f );
         lVar2 = text_int.value + iVar1 * -100;
      }

   }
 else {
      if (( pc->times_seen != 0 ) || ( 2 < text_int.digits )) {
         pc->year_seen = true;
         (pc->year).digits = text_int.digits;
         (pc->year).negative = text_int.negative;
         *(undefined7*)&(pc->year).field_0x1 = text_int._1_7_;
         (pc->year).value = text_int.value;
         return;
      }

      lVar3 = 1;
      lVar2 = 0;
   }

   pc->times_seen = lVar3;
   pc->minutes = lVar2;
   pc->hour = iVar1;
   pc->meridian = 2;
   (pc->seconds).tv_sec = 0;
   (pc->seconds).tv_nsec = 0;
   return;
}
/* WARNING: Unknown calling convention */_Bool mktime_ok(tm *tm0, tm *tm1) {
   _Bool _Var1;
   _Var1 = false;
   if (-1 < tm1->tm_wday) {
      _Var1 = ( ( ( ( tm0->tm_sec == tm1->tm_sec && tm0->tm_min == tm1->tm_min ) && tm0->tm_hour == tm1->tm_hour ) && tm0->tm_mday == tm1->tm_mday ) && tm0->tm_mon == tm1->tm_mon ) && tm0->tm_year == tm1->tm_year;
   }

   return _Var1;
}
/* WARNING: Unknown calling convention */char *time_zone_str(int time_zone, char *time_zone_buf) {
   uint uVar1;
   int iVar2;
   int iVar3;
   char *pcVar4;
   uint uVar5;
   char *pcVar6;
   iVar2 = time_zone / 0xe10;
   iVar3 = -iVar2;
   if (0 < iVar2) {
      iVar3 = iVar2;
   }

   iVar3 = __sprintf_chk(time_zone_buf, 2, 0xffffffffffffffff, "%c%02d", ( time_zone >> 0x1f & 2U ) + 0x2b, iVar3);
   uVar5 = time_zone % 0xe10;
   if (uVar5 != 0) {
      pcVar4 = time_zone_buf + iVar3;
      uVar1 = -uVar5;
      if (0 < (int)uVar5) {
         uVar1 = uVar5;
      }

      *pcVar4 = ':';
      pcVar4[1] = (char)( ( uVar1 / 0x3c ) / 10 ) + '0';
      pcVar6 = pcVar4 + 3;
      uVar5 = uVar1 % 0x3c;
      pcVar4[2] = (char)( uVar1 / 0x3c ) + (char)( ( uVar1 / 0x3c ) / 10 ) * -10 + '0';
      if (uVar5 != 0) {
         pcVar4[3] = ':';
         pcVar4[4] = (char)( uVar5 / 10 ) + '0';
         pcVar6 = pcVar4 + 6;
         pcVar4[5] = (char)uVar5 + (char)( uVar5 / 10 ) * -10 + '0';
      }

      *pcVar6 = '\0';
   }

   return time_zone_buf;
}
/* WARNING: Unknown calling convention */char *tm_year_str(int tm_year, char *buf) {
   int iVar1;
   int iVar2;
   int iVar3;
   iVar2 = tm_year / 100 + 0x13;
   iVar3 = tm_year % 100;
   iVar1 = -iVar3;
   if (0 < iVar3) {
      iVar1 = iVar3;
   }

   iVar3 = -iVar2;
   if (0 < iVar2) {
      iVar3 = iVar2;
   }

   __sprintf_chk(buf, 2, 0xffffffffffffffff, "-%02d%02d" + ( -0x76d < tm_year ), iVar3, iVar1);
   return buf;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */void dbg_printf(char *msgid, ...) {
   long lVar1;
   char in_AL;
   undefined8 in_RCX;
   undefined8 in_RDX;
   undefined8 in_RSI;
   undefined8 in_R8;
   undefined8 in_R9;
   long in_FS_OFFSET;
   undefined8 in_XMM0_Qa;
   undefined8 in_XMM1_Qa;
   undefined8 in_XMM2_Qa;
   undefined8 in_XMM3_Qa;
   undefined8 in_XMM4_Qa;
   undefined8 in_XMM5_Qa;
   undefined8 in_XMM6_Qa;
   undefined8 in_XMM7_Qa;
   va_list args;
   undefined1 local_b8[8];
   undefined8 local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_68;
   undefined8 local_58;
   undefined8 local_48;
   undefined8 local_38;
   undefined8 local_28;
   undefined8 local_18;
   if (in_AL != '\0') {
      local_88 = in_XMM0_Qa;
      local_78 = in_XMM1_Qa;
      local_68 = in_XMM2_Qa;
      local_58 = in_XMM3_Qa;
      local_48 = in_XMM4_Qa;
      local_38 = in_XMM5_Qa;
      local_28 = in_XMM6_Qa;
      local_18 = in_XMM7_Qa;
   }

   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   local_b0 = in_RSI;
   local_a8 = in_RDX;
   local_a0 = in_RCX;
   local_98 = in_R8;
   local_90 = in_R9;
   fwrite("date: ", 1, 6, _stderr);
   args[0].overflow_arg_area = &stack0x00000008;
   args[0].gp_offset = 8;
   args[0].reg_save_area = local_b8;
   args[0].fp_offset = 0x30;
   __vfprintf_chk(_stderr, 2, msgid, args);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */table *lookup_zone(parser_control *pc, char *name) {
   table *ptVar1;
   int iVar2;
   table *ptVar3;
   char *pcVar4;
   pcVar4 = "GMT";
   ptVar3 = universal_time_zone_table;
   do {
      iVar2 = strcmp(name, pcVar4);
      if (iVar2 == 0) {
         return ptVar3;
      }

      pcVar4 = ptVar3[1].name;
      ptVar3 = ptVar3 + 1;
   }
 while ( pcVar4 != (char*)0x0 );
   ptVar3 = pc->local_time_zone_table;
   pcVar4 = pc->local_time_zone_table[0].name;
   while (pcVar4 != (char*)0x0) {
      iVar2 = strcmp(name, pcVar4);
      if (iVar2 == 0) {
         return ptVar3;
      }

      ptVar1 = ptVar3 + 1;
      ptVar3 = ptVar3 + 1;
      pcVar4 = ptVar1->name;
   }
;
   ptVar3 = time_zone_table;
   pcVar4 = "WET";
   do {
      iVar2 = strcmp(name, pcVar4);
      if (iVar2 == 0) {
         return ptVar3;
      }

      pcVar4 = ptVar3[1].name;
      ptVar3 = ptVar3 + 1;
   }
 while ( pcVar4 != (char*)0x0 );
   return (table*)0x0;
}
char *debug_strfdatetime(tm *tm, parser_control *pc, char *buf, int n) {
   long lVar1;
   int iVar2;
   size_t sVar3;
   char *pcVar4;
   long in_FS_OFFSET;
   char time_zone_buf[27];
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   sVar3 = strftime(buf, 100, "(Y-M-D) %Y-%m-%d %H:%M:%S", (tm*)tm);
   if (( ( pc != (parser_control*)0x0 ) && ( iVar2 = (int)sVar3 ),iVar2 < 100 )) {
      pcVar4 = time_zone_str(pc->time_zone, time_zone_buf);
      __snprintf_chk(buf + iVar2, (long)( 100 - iVar2 ), 2, 0xffffffffffffffff, " TZ=%s", pcVar4);
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return buf;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
char *str_days(parser_control *pc, char *buffer, int n) {
   uint uVar1;
   uint uVar2;
   ulong uVar3;
   long lVar4;
   char *pcVar5;
   if (pc->debug_ordinal_day_seen == false) {
      *buffer = '\0';
      uVar1 = pc->day_number;
      if (6 < uVar1) {
         return buffer;
      }

      uVar3 = 1;
      lVar4 = 100;
      pcVar5 = buffer;
   }
 else {
      uVar3 = pc->day_ordinal + 1;
      if (uVar3 < 0xe) {
         uVar2 = snprintf(buffer, 100, "%s", &ordinal_values_1 + uVar3 * 0xb);
         uVar1 = pc->day_number;
         if (( 6 < uVar1 ) || ( 99 < uVar2 )) {
            return buffer;
         }

      }
 else {
         uVar2 = __snprintf_chk(buffer, 100, 2, 0xffffffffffffffff, &_LC8);
         uVar1 = pc->day_number;
         if (6 < uVar1) {
            return buffer;
         }

      }

      uVar3 = ( ulong )(uVar2 == 0);
      lVar4 = (long)(int)( 100 - uVar2 );
      pcVar5 = buffer + (int)uVar2;
   }

   __snprintf_chk(pcVar5, lVar4, 2, 0xffffffffffffffff, &_LC9 + uVar3, days_values_0 + (long)(int)uVar1 * 4);
   return buffer;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */void debug_print_current_time(char *item, parser_control *pc) {
   char cVar1;
   int iVar2;
   long lVar3;
   intmax_t iVar4;
   bool bVar5;
   char *pcVar6;
   undefined8 uVar7;
   char *pcVar8;
   int extraout_EDX;
   int extraout_EDX_00;
   int n;
   int extraout_EDX_01;
   int extraout_EDX_02;
   __time_t _Var9;
   undefined *puVar10;
   long in_FS_OFFSET;
   char tmp[100];
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar6 = (char*)dcgettext("gnulib", "parsed %s part: ", 5);
   dbg_printf(pcVar6, item);
   if (( pc->dates_seen == 0 ) || ( pc->debug_dates_seen != false )) {
      if (pc->year_seen != pc->debug_year_seen) goto LAB_00100714;
      bVar5 = false;
      n = extraout_EDX;
   }
 else {
      __fprintf_chk(_stderr, 2, "(Y-M-D) %04ld-%02ld-%02ld", (pc->year).value, pc->month, pc->day);
      pc->debug_dates_seen = true;
      n = extraout_EDX_02;
      if (pc->year_seen != pc->debug_year_seen) {
         fputc(0x20, _stderr);
         LAB_00100714:iVar4 = (pc->year).value;
         uVar7 = dcgettext("gnulib", "year: %04ld", 5);
         __fprintf_chk(_stderr, 2, uVar7, iVar4);
         pc->debug_year_seen = pc->year_seen;
         n = extraout_EDX_00;
      }

      bVar5 = true;
   }

   if (( pc->times_seen == 0 ) || ( pc->debug_times_seen != false )) {
      if (( pc->days_seen != 0 ) && ( pc->debug_days_seen == false )) {
         if (bVar5) goto LAB_00100985;
         goto LAB_00100792;
      }

   }
 else {
      __fprintf_chk(_stderr, 2, " %02ld:%02ld:%02ld" + !bVar5, pc->hour, pc->minutes, (pc->seconds).tv_sec);
      if ((pc->seconds).tv_nsec != 0) {
         __fprintf_chk(_stderr, 2, ".%09d");
      }

      if (pc->meridian == 1) {
         fwrite(&_LC19, 1, 2, _stderr);
      }

      pc->debug_times_seen = true;
      if (( pc->days_seen != 0 ) && ( pc->debug_days_seen == false )) {
         LAB_00100985:fputc(0x20, _stderr);
         n = extraout_EDX_01;
         LAB_00100792:iVar2 = pc->day_number;
         iVar4 = pc->day_ordinal;
         pcVar6 = str_days(pc, tmp, n);
         uVar7 = dcgettext("gnulib", "%s (day ordinal=%ld number=%d)", 5);
         __fprintf_chk(_stderr, 2, uVar7, pcVar6, iVar4, iVar2);
         pc->debug_days_seen = true;
      }

      bVar5 = true;
   }

   if (( pc->local_zones_seen == 0 ) || ( pc->debug_local_zones_seen != false )) {
      if (( pc->zones_seen != 0 ) && ( pc->debug_zones_seen == false )) {
         pcVar6 = " UTC%s" + !bVar5;
         goto LAB_00100a0d;
      }

      if (pc->timespec_seen == false) goto LAB_001008d5;
      _Var9 = (pc->seconds).tv_sec;
      if (bVar5) goto LAB_0010086a;
   }
 else {
      puVar10 = &_LC11;
      if (pc->dsts_seen != 0) {
         puVar10 = &_LC10;
      }

      __fprintf_chk(_stderr, 2, " isdst=%d%s" + !bVar5, pc->local_isdst, puVar10);
      pc->debug_local_zones_seen = true;
      if (( pc->zones_seen == 0 ) || ( pc->debug_zones_seen != false )) {
         cVar1 = pc->timespec_seen;
      }
 else {
         pcVar6 = " UTC%s";
         LAB_00100a0d:pcVar8 = time_zone_str(pc->time_zone, tmp);
         __fprintf_chk(_stderr, 2, pcVar6, pcVar8);
         cVar1 = pc->timespec_seen;
         pc->debug_zones_seen = true;
      }

      if (cVar1 == '\0') goto LAB_001008d5;
      _Var9 = (pc->seconds).tv_sec;
      LAB_0010086a:fputc(0x20, _stderr);
   }

   uVar7 = dcgettext("gnulib", "number of seconds: %ld", 5);
   __fprintf_chk(_stderr, 2, uVar7, _Var9);
   LAB_001008d5:if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      fputc(10, _stderr);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
_Bool time_zone_hhmm(parser_control *pc, textint s, intmax_t mm) {
   long lVar1;
   long in_RCX;
   long in_RDX;
   long in_R8;
   long lVar2;
   bool bVar3;
   if (in_RCX < 3) {
      if (-1 < in_R8) {
         LAB_00100abe:lVar1 = in_RDX * 0x3c;
         if ((char)mm == '\0') {
            bVar3 = SCARRY8(in_R8, lVar1);
            lVar2 = in_R8 + lVar1;
         }
 else {
            bVar3 = SBORROW8(lVar1, in_R8);
            lVar2 = lVar1 - in_R8;
         }

         if (bVar3 || SEXT816(lVar1) != SEXT816(in_RDX) * SEXT816(0x3c)) {
            return false;
         }

         goto LAB_00100ada;
      }

      lVar2 = 0;
      lVar1 = in_RDX;
   }
 else {
      if (-1 < in_R8) goto LAB_00100abe;
      lVar1 = in_RDX / 100;
      lVar2 = in_RDX % 100;
   }

   lVar2 = lVar2 + lVar1 * 0x3c;
   LAB_00100ada:bVar3 = lVar2 + 0x5a0U < 0xb41;
   if (bVar3) {
      pc->time_zone = (int)lVar2 * 0x3c;
   }

   return bVar3;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */void dbg_fputs(char *msgid) {
   fwrite("date: ", 1, 6, _stderr);
   fputs(msgid, _stderr);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */void debug_print_relative_time(char *item, parser_control *pc) {
   bool bVar1;
   FILE *__stream;
   char *pcVar2;
   long lVar3;
   pcVar2 = (char*)dcgettext("gnulib", "parsed %s part: ", 5);
   dbg_printf(pcVar2, item);
   __stream = _stderr;
   lVar3 = (pc->rel).year;
   if (lVar3 == 0) {
      lVar3 = (pc->rel).month;
      if (lVar3 != 0) {
         pcVar2 = "%+ld %s";
         LAB_00100bea:__fprintf_chk(_stderr, 2, pcVar2, lVar3, "month(s)");
         goto LAB_00100c00;
      }

      lVar3 = (pc->rel).day;
      if (lVar3 != 0) {
         bVar1 = false;
         goto LAB_00100dfc;
      }

      if ((pc->rel).hour == 0) {
         bVar1 = false;
         if ((pc->rel).minutes != 0) goto LAB_00100c29;
         if (( (pc->rel).seconds == 0 ) && ( (pc->rel).ns == 0 )) {
            pcVar2 = (char*)dcgettext("gnulib", "today/this/now\n", 5);
            fputs(pcVar2, __stream);
            return;
         }

         goto LAB_00100c19;
      }

      lVar3 = (pc->rel).hour;
      bVar1 = false;
   }
 else {
      __fprintf_chk(_stderr, 2, "%+ld %s", lVar3, "year(s)");
      lVar3 = (pc->rel).month;
      if (lVar3 != 0) {
         pcVar2 = " %+ld %s";
         goto LAB_00100bea;
      }

      LAB_00100c00:lVar3 = (pc->rel).day;
      if (lVar3 != 0) {
         bVar1 = true;
         LAB_00100dfc:__fprintf_chk(_stderr, 2, &_LC23 + !bVar1, lVar3, "day(s)");
      }

      bVar1 = true;
      LAB_00100c19:lVar3 = (pc->rel).hour;
      if (lVar3 == 0) goto LAB_00100c29;
   }

   __fprintf_chk(_stderr, 2, &_LC23 + !bVar1, lVar3, "hour(s)");
   bVar1 = true;
   LAB_00100c29:lVar3 = (pc->rel).minutes;
   if (lVar3 != 0) {
      __fprintf_chk(_stderr, 2, &_LC23 + !bVar1, lVar3, "minutes");
      bVar1 = true;
   }

   lVar3 = (pc->rel).seconds;
   if (lVar3 != 0) {
      __fprintf_chk(_stderr, 2, &_LC23 + !bVar1, lVar3, "seconds");
      bVar1 = true;
   }

   lVar3 = (long)(pc->rel).ns;
   if (lVar3 != 0) {
      __fprintf_chk(_stderr, 2, &_LC23 + !bVar1, lVar3, "nanoseconds");
   }

   fputc(10, _stderr);
   return;
}
/* WARNING: Removing unreachable block (ram,0x001024da) *//* WARNING: Removing unreachable block (ram,0x00101f69) *//* WARNING: Unknown calling convention */int yyparse(parser_control *pc) {
   intmax_t iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   long lVar13;
   textint s;
   textint s_00;
   char cVar14;
   _Bool _Var15;
   byte *pbVar16;
   long lVar17;
   long lVar18;
   size_t sVar19;
   uint uVar20;
   byte bVar21;
   long lVar22;
   char *pcVar23;
   byte *pbVar24;
   YYSTYPE *pYVar25;
   table *ptVar26;
   YYSTYPE *pYVar27;
   uint uVar28;
   char *pcVar29;
   int iVar30;
   int iVar31;
   int iVar32;
   int iVar33;
   long lVar34;
   byte *pbVar35;
   long lVar36;
   int iVar37;
   ulong uVar38;
   yytype_int8 yVar39;
   uint uVar40;
   char *pcVar41;
   long in_FS_OFFSET;
   bool bVar42;
   bool bVar43;
   bool bVar44;
   bool bVar45;
   bool bVar46;
   bool bVar47;
   bool bVar48;
   long extraout_XMM0_Qa;
   long extraout_XMM0_Qa_00;
   long extraout_XMM0_Qb;
   long extraout_XMM0_Qb_00;
   undefined8 in_stack_fffffffffffff9c8;
   undefined4 uVar49;
   undefined4 uVar50;
   undefined4 uVar51;
   undefined4 uVar52;
   undefined4 uVar53;
   undefined4 uVar54;
   undefined4 uVar55;
   undefined4 uVar56;
   long local_618;
   long local_5f8;
   undefined8 local_5e8;
   long local_5d8;
   long local_5b8;
   long local_5a8;
   int local_584;
   long local_558;
   long local_540;
   long lStack_538;
   long lStack_530;
   long local_528;
   undefined8 local_4e8;
   YYSTYPE yyvsa[20];
   yy_state_t yyssa[20];
   char buff[20];
   local_618 = 0;
   lVar17 = 0;
   iVar31 = 0;
   yVar39 = -0xe;
   uVar40 = 0xfffffffe;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   yyssa[0] = '\0';
   pcVar23 = yyssa;
   local_584 = 0;
   pYVar27 = yyvsa;
   pcVar41 = pcVar23;
   LAB_00100ea0:uVar20 = (uint)yVar39;
   lVar34 = local_618;
   if (uVar20 != 0xffffffa5) {
      lVar36 = lVar17;
      uVar28 = uVar20;
      if (uVar40 != 0xfffffffe) goto LAB_00100ec1;
      pbVar16 = (byte*)pc->input;
      uVar38 = ( ulong ) * pbVar16;
      LAB_00101216:bVar21 = (byte)uVar38;
      if ((char)bVar21 < '\x0e') {
         if ((char)bVar21 < '\t') goto LAB_00101228;
         LAB_00101500:pbVar16 = pbVar16 + 1;
         pc->input = (char*)pbVar16;
         uVar38 = ( ulong ) * pbVar16;
         goto LAB_00101216;
      }

      if (bVar21 == 0x20) goto LAB_00101500;
      if (0x39 < bVar21) {
         if ((char)bVar21 < '[') {
            if ('@' < (char)bVar21) goto LAB_00101558;
         }
 else if (( byte )(bVar21 + 0x9f) < 0x1a) {
            LAB_00101558:pbVar35 = (byte*)buff;
            pbVar24 = pbVar35;
            goto LAB_00101570;
         }

         LAB_00101228:pc->input = (char*)( pbVar16 + 1 );
         uVar40 = ( uint ) * pbVar16;
         if (*pbVar16 == 0) goto LAB_00101240;
         goto LAB_00101348;
      }

      if (( 0x3ff280000000000U >> ( uVar38 & 0x3f ) & 1 ) == 0) {
         if (bVar21 != 0x28) goto LAB_00101228;
         lVar22 = 0;
         do {
            pbVar35 = pbVar16;
            pbVar16 = pbVar35 + 1;
            pc->input = (char*)pbVar16;
            bVar21 = *pbVar35;
            if (bVar21 == 0) goto LAB_00101240;
            if (bVar21 == 0x28) {
               lVar22 = lVar22 + 1;
            }
 else {
               lVar22 = lVar22 - ( ulong )(bVar21 == 0x29);
            }

         }
 while ( lVar22 != 0 );
         uVar38 = (ulong)pbVar35[1];
         goto LAB_00101216;
      }

      if (( (int)uVar38 - 0x2bU & 0xfd ) != 0) {
         iVar30 = 0;
         goto LAB_001013f3;
      }

      iVar30 = ( ( bVar21 != 0x2d ) - 1 ) + ( uint )(bVar21 != 0x2d);
      do {
         pbVar16 = pbVar16 + 1;
         pc->input = (char*)pbVar16;
         bVar21 = *pbVar16;
         while (uVar38 = (ulong)bVar21,(char)bVar21 < '\x0e') {
            if ((char)bVar21 < '\t') goto LAB_00101216;
            pbVar16 = pbVar16 + 1;
            pc->input = (char*)pbVar16;
            bVar21 = *pbVar16;
         }
;
      }
 while ( bVar21 == 0x20 );
      if (9 < (int)(char)bVar21 - 0x30U) goto LAB_00101216;
      LAB_001013f3:lVar22 = 0;
      do {
         pbVar35 = pbVar16;
         lVar34 = lVar22 * 10;
         if (SEXT816(lVar34) != SEXT816(lVar22) * SEXT816(10)) {
            LAB_0010133e:uVar40 = 0x3f;
            goto LAB_00101348;
         }

         iVar32 = (int)uVar38 + -0x30;
         if (iVar30 == -1) {
            iVar32 = 0x30 - (int)uVar38;
         }

         lVar22 = iVar32 + lVar34;
         if (SCARRY8((long)iVar32, lVar34)) goto LAB_0010133e;
         bVar21 = pbVar35[1];
         uVar38 = (ulong)bVar21;
         pbVar16 = pbVar35 + 1;
      }
 while ( bVar21 - 0x30 < 10 );
      if (( ( bVar21 & 0xfd ) == 0x2c ) && ( uVar28 = uVar28 < 10 )) {
         iVar37 = (int)(char)pbVar35[3];
         pbVar35 = pbVar35 + 3;
         iVar33 = 8;
         iVar32 = iVar37;
         do {
            uVar40 = iVar37 - 0x30;
            uVar28 = uVar28 * 10;
            if (uVar40 < 10) {
               iVar37 = (int)(char)pbVar35[1];
               uVar28 = uVar28 + uVar40;
               pbVar35 = pbVar35 + 1;
               uVar40 = iVar37 - 0x30;
               iVar32 = iVar37;
            }

            iVar33 = iVar33 + -1;
         }
 while ( iVar33 != 0 );
         if (iVar30 != -1) {
            if (uVar40 < 10) {
               LAB_001014ac:do {
                  pbVar16 = pbVar35 + 1;
                  pbVar35 = pbVar35 + 1;
               }
 while ( (int)(char)*pbVar16 - 0x30U < 10 );
               if (( iVar30 < 0 ) && ( uVar28 != 0 )) goto LAB_001014cd;
            }

            pc->input = (char*)pbVar35;
            iVar32 = 0x16 - ( uint )(iVar30 != 0);
            uVar40 = 0x115 - ( iVar30 != 0 );
            lVar34 = (long)(int)uVar28;
            local_558 = lVar22;
            goto LAB_00101356;
         }

         while (uVar40 < 10) {
            if ((char)iVar32 != '0') {
               uVar28 = uVar28 + 1;
               if ((int)(char)*pbVar35 - 0x30U < 10) goto LAB_001014ac;
               break;
            }

            iVar32 = (int)(char)pbVar35[1];
            pbVar35 = pbVar35 + 1;
            uVar40 = iVar32 - 0x30;
         }
;
         if (uVar28 == 0) {
            pc->input = (char*)pbVar35;
            iVar32 = 0x15;
            uVar40 = 0x114;
            lVar34 = 0;
            local_558 = lVar22;
            goto LAB_00101356;
         }

         LAB_001014cd:if (!SCARRY8(lVar22,-1)) {
            pc->input = (char*)pbVar35;
            uVar40 = 0x114;
            iVar32 = 0x15;
            lVar34 = (long)(int)( 1000000000 - uVar28 );
            local_558 = lVar22 + -1;
            goto LAB_00101356;
         }

         goto LAB_001028b3;
      }

      local_558 = CONCAT71(local_558._1_7_, ( byte )((uint)iVar30 >> 0x1f));
      lVar17 = (long)pbVar16 - (long)pc->input;
      pc->input = (char*)pbVar16;
      iVar32 = 0x14 - ( uint )(iVar30 != 0);
      uVar40 = 0x113 - ( iVar30 != 0 );
      lVar34 = lVar22;
      goto LAB_00101356;
   }

   iVar32 = (int)"\x05"[iVar31];
   if ("\x05"[iVar31] != '\0') goto LAB_00101000;
   if (local_584 != 3) goto LAB_001012ca;
   if (0 < (int)uVar40) {
      uVar40 = 0xfffffffe;
      goto LAB_001012ca;
   }

   if (uVar40 != 0) goto LAB_001012ca;
   goto LAB_00100fb3;
   while (( byte )(bVar21 + 0x9f) < 0x1a) {
      LAB_00101570:if (pbVar24 < buff + 0x13) {
         *pbVar24 = (byte)uVar38;
         pbVar24 = pbVar24 + 1;
      }

      pbVar16 = pbVar16 + 1;
      pc->input = (char*)pbVar16;
      bVar21 = *pbVar16;
      uVar38 = (ulong)bVar21;
      if ((char)bVar21 < '[') {
         if (( (char)bVar21 < 'A' ) && ( bVar21 != 0x2e )) break;
         goto LAB_00101570;
      }

   }
;
   *pbVar24 = 0;
   pbVar16 = pbVar35;
   bVar21 = buff[0];
   while (bVar21 != 0) {
      if (bVar21 - 0x61 < 0x1a) {
         bVar21 = bVar21 - 0x20;
      }

      *pbVar16 = bVar21;
      bVar21 = pbVar16[1];
      pbVar16 = pbVar16 + 1;
   }
;
   uVar49 = SUB84(pYVar27, 0);
   uVar51 = ( undefined4 )((ulong)pYVar27 >> 0x20);
   pcVar29 = "AM";
   ptVar26 = meridian_table;
   do {
      iVar32 = strcmp((char*)pbVar35, pcVar29);
      lVar34 = local_618;
      if (iVar32 == 0) goto LAB_001025e1;
      pcVar29 = ptVar26[1].name;
      ptVar26 = ptVar26 + 1;
   }
 while ( pcVar29 != (char*)0x0 );
   pYVar27 = (YYSTYPE*)CONCAT44(uVar51, uVar49);
   uVar53 = (undefined4)local_618;
   uVar55 = ( undefined4 )((ulong)local_618 >> 0x20);
   uVar50 = uVar53;
   uVar52 = uVar55;
   sVar19 = strlen((char*)pbVar35);
   lVar34 = CONCAT44(uVar52, uVar50);
   uVar40 = 1;
   if (( sVar19 != 3 ) && ( uVar40 = sVar19 == 4 )) {
      uVar40 = ( uint )(buff[3] == '.');
   }

   ptVar26 = month_and_day_table;
   pcVar29 = "JANUARY";
   do {
      if (uVar40 == 0) {
         iVar32 = strcmp((char*)pbVar35, pcVar29);
      }
 else {
         iVar32 = strncmp((char*)pbVar35, pcVar29, 3);
      }

      bVar42 = iVar32 == 0;
      if (bVar42) goto LAB_00102608;
      pcVar29 = ptVar26[1].name;
      ptVar26 = ptVar26 + 1;
   }
 while ( pcVar29 != (char*)0x0 );
   local_5e8._4_4_ = ( undefined4 )((ulong)lVar17 >> 0x20);
   ptVar26 = lookup_zone(pc, (char*)pbVar35);
   if (ptVar26 != (table*)0x0) {
      iVar32 = ptVar26->value;
      uVar40 = ptVar26->type;
      goto LAB_00102610;
   }

   iVar32 = strcmp((char*)pbVar35, "DST");
   local_618 = CONCAT44(uVar55, uVar53);
   pcVar29 = "YEAR";
   if (iVar32 == 0) {
      local_558 = 0;
      uVar40 = 0x103;
      LAB_00101348:iVar32 = (int)""[(int)uVar40];
      lVar34 = local_618;
      lVar17 = lVar36;
      uVar20 = uVar28;
   }
 else {
      ptVar26 = time_units_table;
      do {
         iVar32 = strcmp((char*)pbVar35, pcVar29);
         if (iVar32 == 0) goto LAB_001025e1;
         pcVar29 = ptVar26[1].name;
         ptVar26 = ptVar26 + 1;
      }
 while ( pcVar29 != (char*)0x0 );
      pYVar27 = (YYSTYPE*)CONCAT44(uVar51, uVar49);
      pbVar16 = pbVar35 + ( sVar19 - 1 );
      if (*pbVar16 == 0x53) {
         uVar50 = SUB84(pc, 0);
         uVar52 = ( undefined4 )((ulong)pc >> 0x20);
         ptVar26 = time_units_table;
         *pbVar16 = 0;
         pcVar29 = "YEAR";
         uVar54 = SUB84(pcVar41, 0);
         uVar56 = ( undefined4 )((ulong)pcVar41 >> 0x20);
         do {
            iVar32 = strcmp((char*)pbVar35, pcVar29);
            if (iVar32 == 0) {
               pc = (parser_control*)CONCAT44(uVar52, uVar50);
               pcVar41 = (char*)CONCAT44(uVar56, uVar54);
               goto LAB_00102608;
            }

            pcVar29 = ptVar26[1].name;
            ptVar26 = ptVar26 + 1;
         }
 while ( pcVar29 != (char*)0x0 );
         pcVar41 = (char*)CONCAT44(uVar56, uVar54);
         pc = (parser_control*)CONCAT44(uVar52, uVar50);
         *pbVar16 = 0x53;
      }

      pcVar29 = "TOMORROW";
      ptVar26 = relative_time_table;
      do {
         iVar32 = strcmp((char*)pbVar35, pcVar29);
         if (iVar32 == 0) goto LAB_001025e1;
         pcVar29 = ptVar26[1].name;
         ptVar26 = ptVar26 + 1;
      }
 while ( pcVar29 != (char*)0x0 );
      pYVar27 = (YYSTYPE*)CONCAT44(uVar51, uVar49);
      if (sVar19 == 1) {
         ptVar26 = military_table;
         pcVar29 = "A";
         do {
            if (*pcVar29 == buff[0]) goto LAB_00102608;
            pcVar29 = ptVar26[1].name;
            ptVar26 = ptVar26 + 1;
         }
 while ( pcVar29 != (char*)0x0 );
      }

      pbVar16 = pbVar35;
      pbVar24 = pbVar35;
      bVar21 = buff[0];
      if (buff[0] != '\0') {
         do {
            if (bVar21 == 0x2e) {
               bVar42 = true;
            }
 else {
               pbVar16 = pbVar16 + 1;
            }

            bVar21 = pbVar24[1];
            pbVar24 = pbVar24 + 1;
            *pbVar16 = bVar21;
         }
 while ( bVar21 != 0 );
         if (bVar42) {
            uVar49 = (undefined4)lVar17;
            ptVar26 = lookup_zone(pc, (char*)pbVar35);
            local_618 = CONCAT44(uVar55, uVar53);
            lVar36 = CONCAT44(local_5e8._4_4_, uVar49);
            if (ptVar26 != (table*)0x0) goto LAB_00102608;
         }

      }

      lVar17 = lVar36;
      uVar20 = uVar28;
      if (pc->parse_datetime_debug != false) {
         uVar50 = (undefined4)lVar17;
         uVar52 = ( undefined4 )((ulong)lVar17 >> 0x20);
         uVar49 = (undefined4)local_618;
         uVar51 = ( undefined4 )((ulong)local_618 >> 0x20);
         pcVar29 = (char*)dcgettext("gnulib", "error: unknown word \'%s\'\n", 5);
         dbg_printf(pcVar29, pbVar35);
         lVar17 = CONCAT44(uVar52, uVar50);
         local_618 = CONCAT44(uVar51, uVar49);
      }

      LAB_001028b3:iVar32 = 2;
      uVar40 = 0x3f;
      lVar34 = local_618;
   }

   LAB_00101356:uVar20 = uVar20 + iVar32;
   LAB_00100eed:local_618 = lVar34;
   if (( uVar20 < 0x73 ) && ( "\x1b\x05\x06\a\b\t\n\x13\f\x17\x04\x0f\x10g\x1a\x13\x05\x06\a\b\t\n\x1aq\x1c\x13\x13\x14\x15\x16\x13\x05\x06\a\b\t\n\x1a\x14"[(int)uVar20] == iVar32 )) {
      cVar14 = "PDEFGHIfJ\x01;KLlkM>?@ABCNrO<\x05\x06\a\b]>?@ABCY\x06\f\b0\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16Y\x17\x18\x19\x1a\x1b\x1c\x1de\x1e\x1f=fQ231TPg456789f:p[\\RSqp>?@ABCoU\x1aVfWX_`bacdZ"[(int)uVar20];
      iVar31 = (int)cVar14;
      if ('\0' < cVar14) {
         uVar40 = 0xfffffffe;
         *(long*)( (long)pYVar27 + 0x68 ) = local_528;
         local_584 = local_584 + -1 + ( uint )(local_584 == 0);
         pYVar27[1].intval = local_558;
         *(long*)( (long)pYVar27 + 0x40 ) = lVar34;
         pYVar25 = pYVar27 + 1;
         *(long*)( (long)pYVar27 + 0x48 ) = lVar17;
         *(long*)( (long)pYVar27 + 0x50 ) = local_540;
         *(long*)( (long)pYVar27 + 0x58 ) = lStack_538;
         *(long*)( (long)pYVar27 + 0x60 ) = lStack_530;
         goto LAB_001011d6;
      }

      iVar32 = -iVar31;
   }
 else {
      iVar32 = (int)"\x05"[iVar31];
      if ("\x05"[iVar31] == '\0') {
         if (local_584 == 3) {
            if (uVar40 == 0) goto LAB_00100fb3;
            uVar40 = 0xfffffffe;
         }

         uVar20 = (int)yypact[iVar31];
         LAB_001012ca:do {
            if (( ( uVar20 != 0xffffffa5 ) && ( uVar20 = uVar20 + 1 ),uVar20 < 0x73 )) {
               cVar14 = "PDEFGHIfJ\x01;KLlkM>?@ABCNrO<\x05\x06\a\b]>?@ABCY\x06\f\b0\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16Y\x17\x18\x19\x1a\x1b\x1c\x1de\x1e\x1f=fQ231TPg456789f:p[\\RSqp>?@ABCoU\x1aVfWX_`bacdZ"[(int)uVar20];
               iVar31 = (int)cVar14;
               if ('\0' < cVar14) goto code_r0x001012ed;
            }

            if (pcVar23 == pcVar41) goto LAB_00100fb3;
            pcVar29 = pcVar23 + -1;
            pcVar23 = pcVar23 + -1;
            pYVar27 = pYVar27 + -1;
            uVar20 = (int)yypact[*pcVar29];
         }
 while ( true );
      }

   }

   LAB_00101000:cVar14 = ""[iVar32];
   lVar22 = (long)cVar14;
   pYVar25 = pYVar27 + ( 1 - cVar14 );
   local_5f8 = (pYVar25->textintval).digits;
   local_4e8._4_4_ = ( undefined4 )(( ulong ) * (undefined8*)&(pYVar25->rel).ns >> 0x20);
   uVar38 = pYVar25->intval;
   lVar36 = (pYVar25->textintval).value;
   uVar49 = (undefined4)(pYVar25->rel).hour;
   uVar51 = ( undefined4 )((ulong)(pYVar25->rel).hour >> 0x20);
   local_618 = (pYVar25->rel).minutes;
   iVar31 = (pYVar25->rel).ns;
   uVar50 = (undefined4)(pYVar25->rel).seconds;
   uVar52 = ( undefined4 )((ulong)(pYVar25->rel).seconds >> 0x20);
   switch (iVar32) {
      case 4:
    lVar22 = pYVar27->intval;
    iVar1 = (pYVar27->textintval).value;
    pcVar29 = "number of seconds";
    pc->timespec_seen = true;
    (pc->seconds).tv_sec = lVar22;
    (pc->seconds).tv_nsec = iVar1;
    goto LAB_001019c0;
      case 7:
    pc->times_seen = pc->times_seen + 1;
    pcVar29 = "datetime";
    pc->dates_seen = pc->dates_seen + 1;
    goto LAB_001019c0;
      case 8:
    pc->times_seen = pc->times_seen + 1;
    pcVar29 = "time";
    goto LAB_001019c0;
      case 9:
    pc->local_zones_seen = pc->local_zones_seen + 1;
    pcVar29 = "local_zone";
    goto LAB_001019c0;
      case 10:
    pc->J_zones_seen = pc->J_zones_seen + 1;
    if (pc->parse_datetime_debug == false) break;
    pcVar29 = "J";
    goto LAB_001019f9;
      case 0xb:
    pc->zones_seen = pc->zones_seen + 1;
    pcVar29 = "zone";
    goto LAB_001019c0;
      case 0xc:
    pc->dates_seen = pc->dates_seen + 1;
    pcVar29 = "date";
    goto LAB_001019c0;
      case 0xd:
    pc->days_seen = pc->days_seen + 1;
    pcVar29 = "day";
    goto LAB_001019c0;
      case 0xe:
    goto LAB_001021a3;
      case 0xf:
    pcVar29 = "number";
LAB_001019c0:
    pcVar29 = (char *)dcgettext("gnulib",pcVar29,5);
    lVar22 = (long)cVar14;
    if (pc->parse_datetime_debug != false) {
LAB_001019f9:
      debug_print_current_time(pcVar29,pc);
      lVar22 = (long)cVar14;
    }
    break;
      case 0x10:
    pcVar29 = "hybrid";
    goto LAB_00102108;
      case 0x13:
    lVar4 = *(long *)((long)pYVar27 + -0x30);
    pc->minutes = 0;
    (pc->seconds).tv_sec = 0;
    pc->hour = lVar4;
    lVar4 = pYVar27->intval;
    (pc->seconds).tv_nsec = 0;
    pc->meridian = (int)lVar4;
    break;
      case 0x14:
    lVar18 = *(long *)((long)pYVar27 + -0x30);
    lVar4 = pYVar27->intval;
    pc->hour = *(intmax_t *)((long)pYVar27 + -0xa0);
    pc->minutes = lVar18;
    pc->meridian = (int)lVar4;
    (pc->seconds).tv_sec = 0;
    (pc->seconds).tv_nsec = 0;
    break;
      case 0x15:
    lVar18 = *(idx_t *)((long)pYVar27 + -0x110);
    lVar5 = *(intmax_t *)((long)pYVar27 + -0xa0);
    (pc->seconds).tv_sec = pYVar27[-1].intval;
    (pc->seconds).tv_nsec = (long)*(int *)((long)pYVar27 + -0x30);
    lVar4 = pYVar27->intval;
    pc->hour = lVar18;
    pc->minutes = lVar5;
    pc->meridian = (int)lVar4;
    break;
      case 0x17:
    lVar4 = *(long *)((long)pYVar27 + -0x30);
    pc->minutes = 0;
    (pc->seconds).tv_sec = 0;
    pc->hour = lVar4;
    (pc->seconds).tv_nsec = 0;
    pc->meridian = 2;
    break;
      case 0x18:
    lVar4 = *(intmax_t *)((long)pYVar27 + -0xa0);
    pc->meridian = 2;
    lVar18 = *(long *)((long)pYVar27 + -0x30);
    pc->hour = lVar4;
    pc->minutes = lVar18;
    (pc->seconds).tv_sec = 0;
    (pc->seconds).tv_nsec = 0;
    break;
      case 0x19:
    lVar4 = pYVar27[-1].intval;
    lVar18 = *(idx_t *)((long)pYVar27 + -0x110);
    pc->meridian = 2;
    lVar5 = *(intmax_t *)((long)pYVar27 + -0xa0);
    (pc->seconds).tv_sec = lVar4;
    (pc->seconds).tv_nsec = (long)*(int *)((long)pYVar27 + -0x30);
    pc->hour = lVar18;
    pc->minutes = lVar5;
    break;
      case 0x1c:
    pc->zones_seen = pc->zones_seen + 1;
    s.value._0_4_ = uVar49;
    s._0_8_ = in_stack_fffffffffffff9c8;
    s.value._4_4_ = uVar51;
    s.digits._0_4_ = uVar50;
    s.digits._4_4_ = uVar52;
    _Var15 = time_zone_hhmm(pc,s,(ulong)pYVar27[-1].textintval.negative);
    lVar34 = extraout_XMM0_Qa;
    lVar17 = extraout_XMM0_Qb;
    if (!_Var15) goto LAB_00100fb3;
    break;
      case 0x1d:
    pc->local_isdst = (int)pYVar27->intval;
    break;
      case 0x1e:
    pc->dsts_seen = pc->dsts_seen + 1;
    pc->local_isdst = 1;
    break;
      case 0x1f:
    pc->time_zone = (int)pYVar27->intval;
    break;
      case 0x20:
    pc->time_zone = -0x6270;
    break;
      case 0x21:
    pc->time_zone = (int)pYVar27[-1].intval;
    goto LAB_001022d7;
      case 0x22:
    pc->time_zone = -0x6270;
LAB_001022d7:
    iVar30 = (pc->rel).ns;
    iVar33 = (pYVar27->rel).ns;
    (pc->rel).ns = iVar30 + (pYVar27->rel).ns;
    lVar22 = (pc->rel).seconds;
    lVar4 = (pYVar27->rel).seconds;
    (pc->rel).seconds = lVar22 + (pYVar27->rel).seconds;
    lVar18 = (pc->rel).minutes;
    lVar5 = (pYVar27->rel).minutes;
    (pc->rel).minutes = lVar18 + (pYVar27->rel).minutes;
    lVar6 = (pc->rel).hour;
    lVar7 = (pYVar27->rel).hour;
    (pc->rel).hour = lVar6 + (pYVar27->rel).hour;
    lVar8 = (pc->rel).day;
    lVar9 = (pYVar27->textintval).digits;
    (pc->rel).day = lVar8 + (pYVar27->textintval).digits;
    lVar10 = (pc->rel).month;
    lVar11 = (pYVar27->textintval).value;
    (pc->rel).month = lVar10 + (pYVar27->textintval).value;
    lVar12 = (pc->rel).year;
    lVar13 = pYVar27->intval;
    (pc->rel).year = lVar12 + pYVar27->intval;
    if ((((((SCARRY8(lVar22,lVar4) || SCARRY4(iVar30,iVar33)) || SCARRY8(lVar18,lVar5)) ||
          SCARRY8(lVar6,lVar7)) || SCARRY8(lVar8,lVar9)) || SCARRY8(lVar10,lVar11)) ||
       (SCARRY8(lVar12,lVar13))) {
LAB_00100fb3:
      iVar31 = 1;
      goto LAB_00100fb8;
    }
    pc->rels_seen = true;
LAB_001021a3:
    pcVar29 = "relative";
LAB_00102108:
    pcVar29 = (char *)dcgettext("gnulib",pcVar29,5);
    lVar22 = (long)cVar14;
    if (pc->parse_datetime_debug != false) {
      debug_print_relative_time(pcVar29,pc);
      lVar22 = (long)cVar14;
    }
    break;
      case 0x23:
    s_00.value._0_4_ = uVar49;
    s_00._0_8_ = in_stack_fffffffffffff9c8;
    s_00.value._4_4_ = uVar51;
    s_00.digits._0_4_ = uVar50;
    s_00.digits._4_4_ = uVar52;
    _Var15 = time_zone_hhmm(pc,s_00,(ulong)pYVar27[-1].textintval.negative);
    if ((!_Var15) ||
       (iVar30 = pc->time_zone, lVar4 = pYVar27[-2].intval,
       lVar18 = (long)iVar30 + pYVar27[-2].intval, iVar33 = (int)lVar18, pc->time_zone = iVar33,
       lVar34 = extraout_XMM0_Qa_00, lVar17 = extraout_XMM0_Qb_00,
       lVar18 != iVar33 || SCARRY8((long)iVar30,lVar4))) goto LAB_00100fb3;
    break;
      case 0x24:
    pc->time_zone = *(int *)pYVar27 + 0xe10;
    break;
      case 0x25:
    pc->time_zone = *(int *)(pYVar27 + -1) + 0xe10;
    break;
      case 0x26:
    lVar4 = pYVar27->intval;
    pc->day_ordinal = 0;
    pc->day_number = (int)lVar4;
    break;
      case 0x27:
    lVar4 = pYVar27[-1].intval;
    pc->day_ordinal = 0;
    pc->day_number = (int)lVar4;
    break;
      case 0x28:
    lVar4 = pYVar27[-1].intval;
    pc->debug_ordinal_day_seen = true;
    pc->day_ordinal = lVar4;
    pc->day_number = (int)pYVar27->intval;
    break;
      case 0x29:
    lVar4 = *(long *)((long)pYVar27 + -0x30);
    pc->debug_ordinal_day_seen = true;
    pc->day_ordinal = lVar4;
    pc->day_number = (int)pYVar27->intval;
    break;
      case 0x2a:
    goto switchD_001010a6_caseD_2a;
      case 0x2b:
    lVar22 = *(intmax_t *)((long)pYVar27 + -0xd0);
    if (lVar22 < 4) {
      lVar22 = *(long *)((long)pYVar27 + -0xd8);
      if (pc->parse_datetime_debug != false) {
        pcVar29 = (char *)dcgettext("gnulib",
                                    "warning: value %ld has less than 4 digits. Assuming MM/DD/YY[YY]\n"
                                    ,5);
        dbg_printf(pcVar29,lVar22);
      }
      goto LAB_001024e5;
    }
    if (pc->parse_datetime_debug != false) {
      lVar4 = *(long *)((long)pYVar27 + -0xd8);
      pcVar29 = (char *)dcgettext("gnulib",
                                  "warning: value %ld has %ld digits. Assuming YYYY/MM/DD\n",5);
      dbg_printf(pcVar29,lVar4,lVar22);
    }
    lVar22 = pYVar27[-4].intval;
    lVar4 = *(long *)((long)pYVar27 + -0xd8);
    (pc->year).digits = *(intmax_t *)((long)pYVar27 + -0xd0);
    *(long *)&pc->year = lVar22;
    (pc->year).value = lVar4;
    goto switchD_001010a6_caseD_2a;
      case 0x2c:
    lVar4 = *(idx_t *)((long)pYVar27 + -0x68);
    lVar22 = (pYVar27->textintval).value;
    pc->month = pYVar27[-1].intval;
    pc->day = lVar4;
    (pc->year).value = -lVar22;
    goto LAB_0010243c;
      case 0x2d:
    lVar22 = *(long *)((long)pYVar27 + -0x30);
    pc->month = pYVar27[-2].intval;
    pc->day = -lVar22;
    (pc->year).value = -(pYVar27->textintval).value;
    goto LAB_0010243c;
      case 0x2e:
    iVar1 = (pYVar27->textintval).value;
    pc->month = pYVar27[-1].intval;
    pc->day = iVar1;
    break;
      case 0x2f:
    lVar4 = pYVar27[-3].intval;
    iVar1 = (pYVar27->textintval).value;
    lVar18 = *(idx_t *)((long)pYVar27 + -0x68);
    *(intmax_t *)&pc->year = pYVar27->intval;
    (pc->year).value = iVar1;
    pc->month = lVar4;
    pc->day = lVar18;
    (pc->year).digits = (pYVar27->textintval).digits;
    break;
      case 0x30:
    lVar4 = *(long *)((long)pYVar27 + -0x30);
    pc->month = pYVar27->intval;
    pc->day = lVar4;
    break;
      case 0x31:
    lVar22 = pYVar27[-1].intval;
LAB_001024e5:
    lVar18 = pYVar27->intval;
    iVar1 = (pYVar27->textintval).value;
    lVar4 = *(idx_t *)((long)pYVar27 + -0x68);
    pc->month = lVar22;
    pc->day = lVar4;
    *(long *)&pc->year = lVar18;
    (pc->year).value = iVar1;
LAB_0010243c:
    lVar22 = (long)cVar14;
    (pc->year).digits = (pYVar27->textintval).digits;
    break;
      case 0x33:
    lVar18 = pYVar27[-2].intval;
    lVar5 = *(idx_t *)((long)pYVar27 + -0x68);
    (pc->year).digits = *(long *)((long)pYVar27 + -0x60);
    lVar4 = *(long *)((long)pYVar27 + -0x30);
    *(long *)&pc->year = lVar18;
    (pc->year).value = lVar5;
    pc->month = -lVar4;
    pc->day = -(pYVar27->textintval).value;
    break;
      case 0x34:
    local_5d8 = *(long *)((long)pYVar27 + -0x30);
    lVar4 = pYVar27[-1].intval;
    local_5a8 = *(idx_t *)((long)pYVar27 + -0x20);
    local_5b8 = *(long *)((long)pYVar27 + -0x18);
    lVar18 = *(intmax_t *)((long)pYVar27 + -0x10);
    iVar30 = *(int *)((long)pYVar27 + -8);
    iVar33 = (pc->rel).ns;
    lVar5 = *(intmax_t *)((long)pYVar27 + -0x28);
    lVar6 = (pc->rel).seconds;
    lVar7 = (pc->rel).minutes;
    lVar8 = (pc->rel).hour;
    lVar9 = (pc->rel).day;
    lVar10 = (pc->rel).month;
    lVar11 = (pc->rel).year;
    if (*(int *)pYVar27 < 0) {
      bVar43 = SBORROW4(iVar33,iVar30);
      iVar30 = -iVar30;
      bVar44 = SBORROW8(lVar6,lVar18);
      lVar18 = -lVar18;
      bVar45 = SBORROW8(lVar7,local_5b8);
      local_5b8 = -local_5b8;
      bVar46 = SBORROW8(lVar8,local_5a8);
      local_5a8 = -local_5a8;
      bVar47 = SBORROW8(lVar9,lVar5);
      lVar5 = -lVar5;
      bVar48 = SBORROW8(lVar10,local_5d8);
      local_5d8 = -local_5d8;
      bVar42 = SBORROW8(lVar11,lVar4);
      lVar4 = -lVar4;
      bVar42 = (((((bVar44 || bVar43) || bVar45) || bVar46) || bVar47) || bVar48) || bVar42;
    }
    else {
      bVar42 = (((((SCARRY4(iVar30,iVar33) || SCARRY8(lVar18,lVar6)) || SCARRY8(local_5b8,lVar7)) ||
                 SCARRY8(local_5a8,lVar8)) || SCARRY8(lVar5,lVar9)) || SCARRY8(local_5d8,lVar10)) ||
               SCARRY8(lVar4,lVar11);
    }
    local_5a8 = local_5a8 + lVar8;
    local_5b8 = local_5b8 + lVar7;
    local_5d8 = local_5d8 + lVar10;
    (pc->rel).seconds = lVar18 + lVar6;
    (pc->rel).day = lVar5 + lVar9;
    (pc->rel).minutes = local_5b8;
    (pc->rel).ns = iVar30 + iVar33;
    (pc->rel).month = local_5d8;
    (pc->rel).hour = local_5a8;
    (pc->rel).year = lVar4 + lVar11;
    if (bVar42) goto LAB_00100fb3;
    goto LAB_00101765;
      case 0x35:
      case 0x36:
    iVar30 = (pc->rel).ns;
    iVar33 = (pYVar27->rel).ns;
    (pc->rel).ns = iVar30 + (pYVar27->rel).ns;
    lVar4 = (pc->rel).seconds;
    lVar18 = (pYVar27->rel).seconds;
    (pc->rel).seconds = lVar4 + (pYVar27->rel).seconds;
    lVar5 = (pc->rel).minutes;
    lVar6 = (pYVar27->rel).minutes;
    (pc->rel).minutes = lVar5 + (pYVar27->rel).minutes;
    lVar7 = (pc->rel).hour;
    lVar8 = (pYVar27->rel).hour;
    (pc->rel).hour = lVar7 + (pYVar27->rel).hour;
    lVar9 = (pc->rel).day;
    lVar10 = (pYVar27->textintval).digits;
    (pc->rel).day = lVar9 + (pYVar27->textintval).digits;
    lVar11 = (pc->rel).month;
    lVar12 = (pYVar27->textintval).value;
    (pc->rel).month = lVar11 + (pYVar27->textintval).value;
    lVar13 = (pc->rel).year;
    lVar3 = pYVar27->intval;
    (pc->rel).year = lVar13 + pYVar27->intval;
    if ((((((SCARRY8(lVar4,lVar18) || SCARRY4(iVar30,iVar33)) || SCARRY8(lVar5,lVar6)) ||
          SCARRY8(lVar7,lVar8)) || SCARRY8(lVar9,lVar10)) || SCARRY8(lVar11,lVar12)) ||
       (SCARRY8(lVar13,lVar3))) goto LAB_00100fb3;
LAB_00101765:
    pc->rels_seen = true;
    break;
      case 0x37:
    uVar38 = pYVar27[-1].intval;
    goto LAB_00101674;
      case 0x38:
      case 0x4c:
    uVar38 = *(ulong *)((long)pYVar27 + -0x30);
LAB_00101674:
    local_4e8._4_4_ = 0;
    iVar31 = 0;
    lVar36 = 0;
    uVar50 = 0;
    uVar52 = 0;
    local_618 = 0;
    uVar49 = 0;
    uVar51 = 0;
    local_5f8 = 0;
    break;
      case 0x39:
    local_4e8._4_4_ = 0;
    lVar36 = 0;
    uVar38 = 1;
    iVar31 = 0;
    uVar50 = 0;
    uVar52 = 0;
    local_618 = 0;
    uVar49 = 0;
    uVar51 = 0;
    local_5f8 = 0;
    break;
      case 0x3a:
    lVar36 = pYVar27[-1].intval;
    goto LAB_001015c2;
      case 0x3b:
      case 0x4d:
    lVar36 = *(long *)((long)pYVar27 + -0x30);
LAB_001015c2:
    local_4e8._4_4_ = 0;
    iVar31 = 0;
    uVar38 = 0;
    uVar50 = 0;
    uVar52 = 0;
    local_618 = 0;
    uVar49 = 0;
    uVar51 = 0;
    local_5f8 = 0;
    break;
      case 0x3c:
    local_4e8._4_4_ = 0;
    lVar36 = 1;
    uVar38 = 0;
    iVar31 = 0;
    uVar50 = 0;
    uVar52 = 0;
    local_618 = 0;
    uVar49 = 0;
    uVar51 = 0;
    local_5f8 = 0;
    break;
      case 0x3d:
    lVar36 = pYVar27[-1].intval;
    goto LAB_00101821;
      case 0x3e:
      case 0x4e:
    lVar36 = *(long *)((long)pYVar27 + -0x30);
LAB_00101821:
    local_4e8._4_4_ = 0;
    local_5f8 = lVar36 * pYVar27->intval;
    bVar42 = SEXT816(local_5f8) != SEXT816(lVar36) * SEXT816(pYVar27->intval);
    uVar38 = (ulong)bVar42;
    if (bVar42) goto LAB_00100fb3;
    uVar50 = 0;
    uVar52 = 0;
    lVar36 = 0;
    local_618 = 0;
    uVar49 = 0;
    uVar51 = 0;
    iVar31 = 0;
    break;
      case 0x3f:
      case 0x52:
    local_5f8 = pYVar27->intval;
    lVar36 = 0;
    uVar38 = 0;
    local_4e8._4_4_ = 0;
    iVar31 = 0;
    uVar50 = 0;
    uVar52 = 0;
    local_618 = 0;
    uVar49 = 0;
    uVar51 = 0;
    break;
      case 0x40:
    lVar36 = pYVar27[-1].intval;
    goto LAB_00101781;
      case 0x41:
      case 0x4f:
    lVar36 = *(long *)((long)pYVar27 + -0x30);
LAB_00101781:
    local_4e8._4_4_ = 0;
    uVar49 = (undefined4)lVar36;
    uVar51 = (undefined4)((ulong)lVar36 >> 0x20);
    lVar36 = 0;
    uVar38 = 0;
    iVar31 = 0;
    uVar50 = 0;
    uVar52 = 0;
    local_618 = 0;
    local_5f8 = 0;
    break;
      case 0x42:
    iVar31 = 0;
    lVar36 = 0;
    uVar38 = 0;
    local_4e8._4_4_ = 0;
    uVar50 = 0;
    uVar52 = 0;
    local_618 = 0;
    uVar49 = 1;
    uVar51 = 0;
    local_5f8 = 0;
    break;
      case 0x43:
    local_618 = pYVar27[-1].intval;
    goto LAB_00101611;
      case 0x44:
      case 0x50:
    local_618 = *(long *)((long)pYVar27 + -0x30);
LAB_00101611:
    local_4e8._4_4_ = 0;
    lVar36 = 0;
    uVar38 = 0;
    iVar31 = 0;
    uVar50 = 0;
    uVar52 = 0;
    uVar49 = 0;
    uVar51 = 0;
    local_5f8 = 0;
    break;
      case 0x45:
    iVar31 = 0;
    lVar36 = 0;
    uVar38 = 0;
    local_4e8._4_4_ = 0;
    uVar50 = 0;
    uVar52 = 0;
    local_618 = 1;
    uVar49 = 0;
    uVar51 = 0;
    local_5f8 = 0;
    break;
      case 0x46:
    iVar31 = 0;
    uVar50 = (undefined4)pYVar27[-1].intval;
    uVar52 = (undefined4)((ulong)pYVar27[-1].intval >> 0x20);
    goto LAB_001010c4;
      case 0x47:
      case 0x51:
    iVar31 = 0;
    uVar50 = (undefined4)*(long *)((long)pYVar27 + -0x30);
    uVar52 = (undefined4)((ulong)*(long *)((long)pYVar27 + -0x30) >> 0x20);
    goto LAB_001010c4;
      case 0x48:
      case 0x49:
    uVar50 = (undefined4)pYVar27[-1].intval;
    uVar52 = (undefined4)((ulong)pYVar27[-1].intval >> 0x20);
    iVar31 = *(int *)((long)pYVar27 + -0x30);
    goto LAB_001010c4;
      case 0x4a:
    iVar31 = 0;
    uVar50 = 1;
    uVar52 = 0;
LAB_001010c4:
    local_4e8._4_4_ = 0;
    local_618 = 0;
    lVar36 = 0;
    uVar38 = 0;
    uVar49 = 0;
    uVar51 = 0;
    local_5f8 = 0;
    break;
      case 0x56:
      case 0x58:
    uVar38 = (pYVar27->textintval).value;
    lVar36 = 0;
    break;
      case 0x59:
    digits_to_date_time(pc,pYVar27->textintval);
    lVar22 = (long)cVar14;
    break;
      case 0x5a:
    digits_to_date_time(pc,pYVar27[-1].textintval);
    iVar30 = (pc->rel).ns;
    iVar33 = (pYVar27->rel).ns;
    (pc->rel).ns = iVar30 + (pYVar27->rel).ns;
    lVar22 = (pc->rel).seconds;
    lVar4 = (pYVar27->rel).seconds;
    (pc->rel).seconds = lVar22 + (pYVar27->rel).seconds;
    lVar18 = (pc->rel).minutes;
    lVar5 = (pYVar27->rel).minutes;
    (pc->rel).minutes = lVar18 + (pYVar27->rel).minutes;
    lVar6 = (pc->rel).hour;
    lVar7 = (pYVar27->rel).hour;
    (pc->rel).hour = lVar6 + (pYVar27->rel).hour;
    lVar8 = (pc->rel).day;
    lVar9 = (pYVar27->textintval).digits;
    (pc->rel).day = lVar8 + (pYVar27->textintval).digits;
    lVar10 = (pc->rel).month;
    lVar11 = (pYVar27->textintval).value;
    (pc->rel).month = lVar10 + (pYVar27->textintval).value;
    lVar12 = (pc->rel).year;
    lVar13 = pYVar27->intval;
    (pc->rel).year = lVar12 + pYVar27->intval;
    if ((((((SCARRY8(lVar22,lVar4) || SCARRY4(iVar30,iVar33)) || SCARRY8(lVar18,lVar5)) ||
          SCARRY8(lVar6,lVar7)) || SCARRY8(lVar8,lVar9)) || SCARRY8(lVar10,lVar11)) ||
       (SCARRY8(lVar12,lVar13))) goto LAB_00100fb3;
    pc->rels_seen = true;
    lVar22 = (long)cVar14;
    break;
      case 0x5b:
    uVar38 = 0xffffffffffffffff;
    break;
      case 0x5c:
    uVar38 = (pYVar27->textintval).value;
   }

   switchD_001010a6_caseD_5:pYVar25 = pYVar27 + ( 1 - lVar22 );
   pcVar23 = pcVar23 + -lVar22;
   pYVar27[1 - lVar22].intval = uVar38;
   *(long*)( (long)pYVar27 + lVar22 * -0x38 + 0x40 ) = lVar36;
   cVar14 = *pcVar23;
   *(long*)( (long)pYVar27 + lVar22 * -0x38 + 0x48 ) = local_5f8;
   *(ulong*)( (long)pYVar27 + lVar22 * -0x38 + 0x50 ) = CONCAT44(uVar51, uVar49);
   local_4e8 = CONCAT44(local_4e8._4_4_, iVar31);
   *(long*)( (long)pYVar27 + lVar22 * -0x38 + 0x58 ) = local_618;
   *(ulong*)( (long)pYVar27 + lVar22 * -0x38 + 0x60 ) = CONCAT44(uVar52, uVar50);
   *(undefined8*)( (long)pYVar27 + lVar22 * -0x38 + 0x68 ) = local_4e8;
   uVar20 = (int)yypgoto[""[iVar32] + -0x1d] + (int)cVar14;
   local_618 = lVar34;
   if (( uVar20 < 0x73 ) && ( cVar14 == "\x1b\x05\x06\a\b\t\n\x13\f\x17\x04\x0f\x10g\x1a\x13\x05\x06\a\b\t\n\x1aq\x1c\x13\x13\x14\x15\x16\x13\x05\x06\a\b\t\n\x1a\x14"[(int)uVar20] )) {
      cVar14 = "PDEFGHIfJ\x01;KLlkM>?@ABCNrO<\x05\x06\a\b]>?@ABCY\x06\f\b0\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16Y\x17\x18\x19\x1a\x1b\x1c\x1de\x1e\x1f=fQ231TPg456789f:p[\\RSqp>?@ABCoU\x1aVfWX_`bacdZ"[(int)uVar20];
      iVar31 = (int)cVar14;
   }
 else {
      cVar14 = ""[""[iVar32] + -0x1d];
      iVar31 = (int)cVar14;
   }

   LAB_001011d6:pcVar23[1] = cVar14;
   pcVar23 = pcVar23 + 1;
   if (yyssa + 0x13 <= pcVar23) {
      iVar31 = 2;
      goto LAB_00100fb8;
   }

   if (iVar31 == 0xc) {
      iVar31 = 0;
      LAB_00100fb8:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return iVar31;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   yVar39 = yypact[iVar31];
   pYVar27 = pYVar25;
   goto LAB_00100ea0;
   LAB_001025e1:local_5e8 = lVar34;
   pYVar27 = (YYSTYPE*)CONCAT44(uVar51, uVar49);
   lVar34 = local_5e8;
   LAB_00102608:iVar32 = ptVar26->value;
   uVar40 = ptVar26->type;
   LAB_00102610:local_558 = (long)iVar32;
   LAB_00100ec1:if ((int)uVar40 < 1) {
      LAB_00101240:iVar32 = 0;
      uVar40 = 0;
   }
 else {
      if (uVar40 == 0x100) {
         uVar40 = 0x101;
         uVar20 = uVar28;
         local_618 = lVar34;
         goto LAB_001012ca;
      }

      if ((int)uVar40 < 0x116) goto LAB_00101348;
      uVar20 = uVar28 + 2;
      iVar32 = 2;
   }

   goto LAB_00100eed;
   switchD_001010a6_caseD_2a:lVar22 = (long)cVar14;
   iVar1 = (pYVar27->textintval).value;
   pc->month = *(idx_t*)( (long)pYVar27 + -0x68 );
   pc->day = iVar1;
   goto switchD_001010a6_caseD_5;
   code_r0x001012ed:pYVar25 = pYVar27 + 1;
   local_584 = 3;
   pYVar25->intval = local_558;
   *(long*)( (long)pYVar27 + 0x40 ) = local_618;
   *(long*)( (long)pYVar27 + 0x68 ) = local_528;
   *(long*)( (long)pYVar27 + 0x48 ) = lVar17;
   *(long*)( (long)pYVar27 + 0x50 ) = local_540;
   *(long*)( (long)pYVar27 + 0x58 ) = lStack_538;
   *(long*)( (long)pYVar27 + 0x60 ) = lStack_530;
   goto LAB_001011d6;
}
/* WARNING: Type propagation algorithm not settling *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */_Bool parse_datetime_body(timespec *result, char *p, timespec *now, uint flags, timezone_t tzdefault, char *tzstring) {
   char *pcVar1;
   char *pcVar2;
   char cVar3;
   long lVar4;
   __syscall_slong_t _Var5;
   __time_t _Var6;
   int iVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   int iVar11;
   int iVar12;
   int iVar13;
   int iVar14;
   idx_t iVar15;
   char cVar16;
   _Bool _Var17;
   int iVar18;
   int iVar19;
   size_t sVar20;
   long lVar21;
   timezone_t ptVar22;
   char *pcVar23;
   undefined *puVar24;
   undefined8 uVar25;
   tm *ptVar26;
   char *pcVar27;
   long lVar28;
   intmax_t iVar29;
   int n;
   FILE *pFVar30;
   undefined *puVar31;
   intmax_t iVar32;
   ulong uVar33;
   int extraout_EDX;
   int extraout_EDX_00;
   int iVar34;
   int n_00;
   int n_01;
   _Bool _Var35;
   uint uVar36;
   idx_t iVar37;
   intmax_t iVar38;
   long lVar39;
   idx_t iVar40;
   ulong uVar41;
   undefined *puVar42;
   size_t __size;
   undefined *puVar43;
   long lVar44;
   undefined *puVar45;
   int iVar46;
   undefined *puVar47;
   idx_t iVar48;
   idx_t iVar49;
   char *pcVar50;
   long in_FS_OFFSET;
   bool bVar51;
   char *local_498;
   char *local_490;
   parser_control *local_488;
   ulong local_470;
   char *local_460;
   uint local_444;
   timespec gettime_buffer;
   tm tm;
   tm tm0;
   tm tmp;
   time_t probe;
   tm probe_tm;
   parser_control pc;
   char tm_year_buf[13];
   char time_zone_buf[27];
   char dbg_tm[100];
   char tz1buf[100];
   char cStack_a9;
   char dbg_ord[100];
   lVar4 = *(long*)( in_FS_OFFSET + 0x28 );
   sVar20 = strlen(p);
   if (now == (timespec*)0x0) {
      now = &gettime_buffer;
      gettime(now);
   }

   _Var5 = now->tv_nsec;
   lVar28 = now->tv_sec;
   pcVar50 = p;
   do {
      cVar3 = *pcVar50;
      if (cVar3 < '\x0e') {
         if (cVar3 < '\t') goto LAB_00102e45;
      }
 else if (cVar3 != ' ') goto LAB_00102e45;
      pcVar50 = pcVar50 + 1;
   }
 while ( true );
   joined_r0x00103299:while (cVar3 != '\"') {
      pcVar50 = pcVar50 + ( cVar3 == '\\' );
      cVar3 = pcVar50[1];
      *pcVar27 = *pcVar50;
      pcVar50 = pcVar50 + 1;
      pcVar27 = pcVar27 + 1;
   }
;
   *pcVar27 = '\0';
   ptVar22 = (timezone_t)tzalloc(local_490);
   if (ptVar22 == (timezone_t)0x0) {
      LAB_00103650:_Var35 = false;
      goto LAB_001031ee;
   }

   do {
      while (true) {
         pcVar50 = pcVar50 + 1;
         cVar3 = *pcVar50;
         if ('\r' < cVar3) break;
         if (cVar3 < '\t') goto LAB_00103300;
      }
;
   }
 while ( cVar3 == ' ' );
   LAB_00103300:lVar21 = localtime_rz(ptVar22, now, &tmp);
   if (lVar21 != 0) goto LAB_00102ee2;
   goto LAB_0010331c;
   LAB_00102e45:iVar18 = strncmp(pcVar50, "TZ=\"", 4);
   if (iVar18 == 0) {
      cVar3 = pcVar50[4];
      pcVar23 = pcVar50 + 4;
      if (cVar3 == '\0') goto LAB_00103240;
      __size = 1;
      pcVar27 = pcVar23;
      cVar16 = cVar3;
      do {
         if (cVar16 == '\\') {
            pcVar1 = pcVar27 + 1;
            pcVar2 = pcVar27 + 1;
            pcVar27 = pcVar1;
            if (( *pcVar2 != '\\' ) && ( *pcVar2 != '\"' )) break;
         }
 else if (cVar16 == '\"') {
            pcVar27 = tz1buf;
            local_498 = (char*)0x0;
            pcVar50 = pcVar23;
            local_490 = pcVar27;
            if (( (long)__size < 0x65 ) || ( pcVar27 = (char*)malloc(__size) ),local_490 = pcVar27,local_498 = pcVar27,pcVar27 != (char*)0x0) goto joined_r0x00103299;
            goto LAB_0010325e;
         }

         cVar16 = pcVar27[1];
         __size = __size + 1;
         pcVar27 = pcVar27 + 1;
      }
 while ( cVar16 != '\0' );
      local_498 = (char*)localtime_rz(tzdefault, now, &tmp);
      if (local_498 == (char*)0x0) goto LAB_00103650;
   }
 else {
      LAB_00103240:lVar21 = localtime_rz(tzdefault, now, &tmp);
      if (lVar21 == 0) {
         LAB_0010325e:local_498 = (char*)0x0;
         _Var35 = false;
         goto LAB_001031ee;
      }

   }

   local_498 = (char*)0x0;
   ptVar22 = tzdefault;
   local_490 = tzstring;
   LAB_00102ee2:if (*pcVar50 == '\0') {
      pcVar50 = "0";
   }

   tm.tm_isdst = tmp.tm_isdst;
   pc.year.value = (long)tmp.tm_year + 0x76c;
   local_488._0_4_ = (int)_Var5;
   pc.seconds.tv_nsec = (__syscall_slong_t)(int)local_488;
   pc.parse_datetime_debug = ( _Bool )((byte)flags & 1);
   pc.year.digits = 0;
   pc.month = ( intmax_t )(tmp.tm_mon + 1);
   pc.day = (intmax_t)tmp.tm_mday;
   pc.meridian = 2;
   pc.hour = (intmax_t)tmp.tm_hour;
   pc.rel.year = 0;
   pc.minutes = (intmax_t)tmp.tm_min;
   pc.rel.month = 0;
   pc.seconds.tv_sec = (__time_t)tmp.tm_sec;
   pc.rel.day = 0;
   pc.timespec_seen = false;
   pc.rels_seen = false;
   pc.rel.hour = 0;
   pc.rel.minutes = 0;
   pc.rel.seconds = 0;
   pc.rel.ns = 0;
   pc.dates_seen = 0;
   pc.days_seen = 0;
   pc.J_zones_seen = 0;
   pc.local_zones_seen = 0;
   pc.debug_dates_seen = false;
   pc.debug_days_seen = false;
   pc.local_time_zone_table[0].value = tmp.tm_isdst;
   pc.zones_seen = 0;
   pc.local_time_zone_table[0].name = tmp.tm_zone;
   if (*tmp.tm_zone == '\0') {
      pc.local_time_zone_table[0].name = (char*)0x0;
   }

   pc.year_seen = false;
   pc.debug_local_zones_seen = false;
   pc.debug_times_seen = false;
   pc.debug_zones_seen = false;
   pc.debug_year_seen = false;
   probe = lVar28 + 0x76a700;
   pc.debug_ordinal_day_seen = false;
   pc.local_time_zone_table[0].type = 0x10d;
   pc.local_time_zone_table[1].name = (char*)0x0;
   pc.dsts_seen = 0;
   pc.times_seen = 0;
   pc.input = pcVar50;
   if (!SCARRY8(lVar28,0x76a700)) {
      iVar18 = 0xed4e00;
      do {
         lVar21 = localtime_rz(ptVar22, &probe, &probe_tm);
         if (( lVar21 != 0 ) && ( ( pc.local_time_zone_table[0].name == (char*)0x0 || ( probe_tm.tm_isdst != pc.local_time_zone_table[0].value ) ) )) {
            bVar51 = pc.local_time_zone_table[0].name != (char*)0x0;
            pc.local_time_zone_table[bVar51].value = probe_tm.tm_isdst;
            cVar3 = *probe_tm.tm_zone;
            pc.local_time_zone_table[bVar51].type = 0x10d;
            pcVar50 = probe_tm.tm_zone;
            if (cVar3 == '\0') {
               pcVar50 = (char*)0x0;
            }

            pc.local_time_zone_table[bVar51].name = pcVar50;
            *(undefined8*)( &pc.day_number + (long)(int)( bVar51 + 0xf ) * 4 ) = 0;
            if (pc.local_time_zone_table[1].name != (char*)0x0) {
               iVar18 = strcmp(pc.local_time_zone_table[0].name, pc.local_time_zone_table[1].name);
               if (iVar18 == 0) {
                  pc.local_time_zone_table[0].value = -1;
                  pc.local_time_zone_table[1].name = (char*)0x0;
               }

               break;
            }

         }

         if (iVar18 == 0x1da9c00) break;
         lVar21 = (long)iVar18;
         probe = lVar21 + lVar28;
         iVar18 = iVar18 + 0x76a700;
      }
 while ( !SCARRY8(lVar21,lVar28) );
   }

   local_488 = &pc;
   iVar18 = yyparse(local_488);
   _Var35 = pc.parse_datetime_debug;
   pcVar50 = pc.input;
   if (iVar18 == 0) {
      _Var17 = pc.timespec_seen;
      if (pc.parse_datetime_debug == false) {
         if (pc.timespec_seen == false) {
            iVar37 = pc.times_seen;
            iVar40 = pc.days_seen;
            iVar48 = pc.dates_seen;
            iVar49 = pc.local_zones_seen;
            if (1 < ( pc.dates_seen | pc.times_seen | pc.days_seen | pc.dsts_seen | pc.J_zones_seen + pc.local_zones_seen + pc.zones_seen )) goto LAB_0010331c;
            LAB_0010373c:iVar15 = pc.zones_seen;
            iVar29 = pc.year.value;
            iVar18 = (int)pc.day;
            if (pc.year.value < 0) {
               bVar51 = SBORROW8(-0x76c, pc.year.value);
               lVar28 = -pc.year.value;
               LAB_00103768:tm.tm_year = (int)( lVar28 + -0x76c );
               if (lVar28 + -0x76c != (long)tm.tm_year) {
                  bVar51 = true;
               }

               if (bVar51) {
                  uVar41 = pc.year.value;
                  if (_Var35 != false) {
                     LAB_00103f87:pcVar50 = (char*)dcgettext("gnulib", "error: out-of-range year %ld\n", 5);
                     dbg_printf(pcVar50, uVar41);
                     LAB_00103efc:pcVar50 = "error: year, month, or day overflow\n";
                     LAB_00103f08:pcVar50 = (char*)dcgettext("gnulib", pcVar50, 5);
                     fwrite("date: ", 1, 6, _stderr);
                     _Var35 = false;
                     fputs(pcVar50, _stderr);
                     goto LAB_001031df;
                  }

               }
 else {
                  tm.tm_mon = (int)( pc.month + -1 );
                  if (( pc.month + -1 == (long)tm.tm_mon && !SCARRY8(pc.month,-1) ) && ( tm.tm_mday = pc.day == iVar18 )) goto LAB_001037d4;
                  if (_Var35 != false) goto LAB_00103efc;
               }

            }
 else {
               if (pc.year.digits != 2) {
                  bVar51 = SBORROW8(pc.year.value, 0x76c);
                  lVar28 = pc.year.value;
                  goto LAB_00103768;
               }

               lVar28 = 0x76c;
               if (pc.year.value < 0x45) {
                  lVar28 = 2000;
               }

               uVar41 = lVar28 + pc.year.value;
               if (_Var35 != false) {
                  pcVar50 = (char*)dcgettext("gnulib", "warning: adjusting year value %ld to %ld\n", 5);
                  dbg_printf(pcVar50, iVar29, uVar41);
                  bVar51 = false;
                  lVar28 = uVar41 - 0x76c;
                  if (uVar41 < 0x76c) {
                     bVar51 = false;
                     if (-1 < lVar28) {
                        LAB_00104d6e:bVar51 = true;
                     }

                  }
 else if (lVar28 < 0) goto LAB_00104d6e;
                  tm.tm_year = (int)lVar28;
                  if (lVar28 != tm.tm_year) {
                     bVar51 = true;
                  }

                  if (!bVar51) {
                     tm.tm_mon = (int)( pc.month + -1 );
                     if (pc.month + -1 == (long)tm.tm_mon && !SCARRY8(pc.month,-1)) {
                        tm.tm_mday = (int)pc.day;
                        if (pc.day == (int)pc.day) goto LAB_001037d4;
                     }

                     goto LAB_00103efc;
                  }

                  goto LAB_00103f87;
               }

               bVar51 = false;
               lVar28 = uVar41 - 0x76c;
               if (uVar41 < 0x76c) {
                  bVar51 = false;
                  if (-1 < lVar28) {
                     LAB_001048f9:bVar51 = true;
                  }

               }
 else if (lVar28 < 0) goto LAB_001048f9;
               tm.tm_year = (int)lVar28;
               if (lVar28 != tm.tm_year) {
                  bVar51 = true;
               }

               if (( bVar51 ) || ( tm.tm_mon = (int)( pc.month + -1 ) ),pc.month + -1 != (long)tm.tm_mon || SCARRY8(pc.month, -1)) goto LAB_0010331c;
               tm.tm_mday = iVar18;
               if (pc.day != iVar18) {
                  _Var35 = false;
                  goto LAB_001031df;
               }

               LAB_001037d4:iVar29 = pc.hour;
               if (( iVar37 != 0 ) || ( ( iVar48 == 0 && iVar40 == 0 && ( pc.rels_seen != false ) ) )) {
                  uVar41 = (ulong)(uint)pc.meridian;
                  if (pc.meridian == 0) {
                     if (pc.hour - 1U < 0xb) {
                        LAB_00104391:uVar41 = pc.hour & 0xffffffff;
                        LAB_00104394:iVar46 = (int)uVar41;
                        tm.tm_hour = iVar46;
                        iVar18 = (int)pc.minutes;
                        iVar19 = (int)pc.seconds.tv_sec;
                        tm.tm_min = iVar18;
                        tm.tm_sec = iVar19;
                        if (_Var35 == false) goto LAB_00103826;
                        pcVar50 = dbg_tm;
                        __snprintf_chk(pcVar50, 100, 2, 100, "%02d:%02d:%02d", uVar41, pc.minutes, pc.seconds.tv_sec);
                        if (iVar37 == 0) {
                           pcVar23 = (char*)dcgettext("gnulib", "using current time as starting value: \'%s\'\n", 5);
                           goto LAB_00104daf;
                        }

                        pcVar23 = (char*)dcgettext("gnulib", "using specified time as starting value: \'%s\'\n", 5);
                        dbg_printf(pcVar23, pcVar50);
                        iVar18 = SUB84(tm._0_8_, 4);
                        iVar46 = (int)tm._8_8_;
                        iVar19 = tm.tm_sec;
                        goto LAB_00104460;
                     }

                     if (pc.hour == 0xc) goto LAB_00104394;
                     puVar42 = &_LC53;
                  }
 else if (pc.meridian == 1) {
                     uVar41 = ( ulong )((int)pc.hour + 0xc);
                     if (( pc.hour - 1U < 0xb ) || ( uVar41 = pc.hour == 0xc )) goto LAB_00104394;
                     puVar42 = &_LC19;
                  }
 else {
                     if ((ulong)pc.hour < 0x18) goto LAB_00104391;
                     puVar42 = &_LC11;
                  }

                  tm.tm_hour = -1;
                  if (_Var35 == false) goto LAB_0010331c;
                  pcVar50 = (char*)dcgettext("gnulib", "error: invalid hour %ld%s\n", 5);
                  _Var35 = false;
                  dbg_printf(pcVar50, iVar29, puVar42);
                  goto LAB_001031df;
               }

               tm.tm_sec = 0;
               tm.tm_min = 0;
               tm._8_8_ = (ulong)(uint)tm.tm_mday << 0x20;
               pc.seconds.tv_nsec = 0;
               if (_Var35 == false) {
                  iVar46 = 0;
                  iVar18 = 0;
                  iVar19 = 0;
               }
 else {
                  pcVar23 = (char*)dcgettext("gnulib", "warning: using midnight as starting time: %s\n", 5);
                  pcVar50 = "00:00:00";
                  LAB_00104daf:dbg_printf(pcVar23, pcVar50);
                  iVar18 = SUB84(tm._0_8_, 4);
                  iVar46 = (int)tm._8_8_;
                  iVar19 = tm.tm_sec;
               }

               LAB_00103826:if (( iVar37 != 0 || iVar48 != 0 ) || iVar40 != 0) {
                  LAB_00104460:tm.tm_isdst = -1;
               }

               if (iVar49 != 0) {
                  tm.tm_isdst = pc.local_isdst;
               }

               tm0.tm_min = iVar18;
               tm0.tm_sec = iVar19;
               tm0.tm_mday = tm.tm_mday;
               tm0.tm_hour = iVar46;
               tm0.tm_mon = tm.tm_mon;
               tm0.tm_year = tm.tm_year;
               tm.tm_wday = -1;
               tm0.tm_isdst = tm.tm_isdst;
               iVar19 = tm.tm_isdst;
               local_470 = mktime_z(ptVar22, &tm);
               _Var17 = mktime_ok(&tm0, &tm);
               iVar18 = extraout_EDX;
               if (!_Var17) {
                  if (iVar15 != 0) {
                     for (int i = 0; i < 3; i++) {
                        dbg_ord[i] = 'X';
                     }

                     time_zone_str(pc.time_zone, dbg_ord + 3);
                     lVar28 = tzalloc(dbg_ord);
                     if (lVar28 == 0) {
                        pcVar23 = "error: tzalloc (\"%s\") failed\n";
                        pcVar50 = dbg_ord;
                        if (_Var35 != false) goto LAB_001036c3;
                        _Var35 = false;
                        goto LAB_001031df;
                     }

                     tm.tm_wday = -1;
                     tm.tm_mon = tm0.tm_mon;
                     tm.tm_year = tm0.tm_year;
                     tm.tm_sec = tm0.tm_sec;
                     tm.tm_min = tm0.tm_min;
                     tm.tm_hour = tm0.tm_hour;
                     tm.tm_mday = tm0.tm_mday;
                     tm.tm_isdst = tm0.tm_isdst;
                     local_470 = mktime_z(lVar28, &tm);
                     _Var17 = mktime_ok(&tm0, &tm);
                     tzfree(lVar28);
                     iVar18 = extraout_EDX_00;
                     if (_Var17) goto LAB_001041ad;
                  }

                  iVar11 = tm0.tm_hour;
                  iVar9 = tm0.tm_sec;
                  iVar18 = tm.tm_sec;
                  iVar10 = tm0.tm_min;
                  iVar46 = tm.tm_hour;
                  iVar19 = tm.tm_min;
                  iVar12 = tm0.tm_mday;
                  iVar34 = tm.tm_mday;
                  iVar13 = tm0.tm_mon;
                  iVar7 = tm.tm_mon;
                  iVar14 = tm0.tm_year;
                  iVar8 = tm.tm_year;
                  if (( tm0.tm_sec == tm.tm_sec ) && ( tm0.tm_min == tm.tm_min )) {
                     if (( tm0.tm_mday == tm.tm_mday ) && ( tm0.tm_hour != tm.tm_hour )) {
                        bVar51 = tm0.tm_year == tm.tm_year && tm0.tm_mon == tm.tm_mon;
                     }
 else {
                        bVar51 = false;
                     }

                     if (_Var35 != false) {
                        pcVar50 = (char*)dcgettext("gnulib", "error: invalid date/time value:\n", 5);
                        pFVar30 = _stderr;
                        fwrite("date: ", 1, 6, _stderr);
                        iVar18 = (int)pFVar30;
                        fputs(pcVar50, _stderr);
                        pcVar50 = debug_strfdatetime(&tm0, local_488, dbg_ord, iVar18);
                        pcVar23 = (char*)dcgettext("gnulib", "    user provided time: \'%s\'\n", 5);
                        dbg_printf(pcVar23, pcVar50);
                        pcVar50 = debug_strfdatetime(&tm, local_488, dbg_ord, iVar18);
                        pcVar23 = (char*)dcgettext("gnulib", "       normalized time: \'%s\'\n", 5);
                        dbg_printf(pcVar23, pcVar50);
                        puVar31 = &_LC11;
                        puVar42 = &_LC11;
                        LAB_00103a7e:puVar24 = &_LC54;
                        puVar45 = &_LC11;
                        puVar43 = &_LC11;
                        if (iVar11 != iVar46) {
                           puVar45 = &_LC54;
                        }

                        puVar47 = &_LC55;
                        if (iVar12 != iVar34) {
                           puVar43 = &_LC54;
                        }

                        if (iVar13 == iVar7) {
                           puVar24 = &_LC11;
                        }

                        if (iVar14 == iVar8) {
                           puVar47 = &_LC11;
                        }

                        __snprintf_chk(dbg_ord, 100, 2, 100, "                                 %4s %2s %2s %2s %2s %2s", puVar47, puVar24, puVar43, puVar45, puVar42, puVar31, iVar8);
                        lVar28 = 0x34;
                        do {
                           lVar21 = lVar28;
                           iVar18 = 0;
                           if (lVar21 == 0) goto LAB_00103b1b;
                           lVar28 = lVar21 + -1;
                        }
 while ( dbg_ord[lVar21 + -1] == ' ' );
                        iVar18 = (int)lVar21;
                        LAB_00103b1b:dbg_ord[iVar18] = '\0';
                        dbg_printf("%s\n", dbg_ord);
                        pcVar50 = (char*)dcgettext("gnulib", "     possible reasons:\n", 5);
                        fwrite("date: ", 1, 6, _stderr);
                        fputs(pcVar50, _stderr);
                        if (bVar51) {
                           pcVar50 = (char*)dcgettext("gnulib", "       nonexistent due to daylight-saving time;\n", 5);
                           fwrite("date: ", 1, 6, _stderr);
                           fputs(pcVar50, _stderr);
                        }

                        if (( iVar12 != iVar34 ) && ( iVar13 != iVar7 )) {
                           pcVar50 = (char*)dcgettext("gnulib", "       invalid day/month combination;\n", 5);
                           fwrite("date: ", 1, 6, _stderr);
                           fputs(pcVar50, _stderr);
                        }

                        pcVar50 = (char*)dcgettext("gnulib", "       numeric values overflow;\n", 5);
                        fwrite("date: ", 1, 6, _stderr);
                        fputs(pcVar50, _stderr);
                        if (iVar15 == 0) {
                           uVar25 = dcgettext("gnulib", "missing timezone", 5);
                        }
 else {
                           uVar25 = dcgettext("gnulib", "incorrect timezone", 5);
                        }

                        _Var35 = false;
                        dbg_printf("       %s\n", uVar25);
                        goto LAB_001031df;
                     }

                  }
 else if (_Var35 != false) {
                     pcVar50 = (char*)dcgettext("gnulib", "error: invalid date/time value:\n", 5);
                     pFVar30 = _stderr;
                     fwrite("date: ", 1, 6, _stderr);
                     n = (int)pFVar30;
                     fputs(pcVar50, _stderr);
                     pcVar50 = debug_strfdatetime(&tm0, local_488, dbg_ord, n);
                     pcVar23 = (char*)dcgettext("gnulib", "    user provided time: \'%s\'\n", 5);
                     dbg_printf(pcVar23, pcVar50);
                     pcVar50 = debug_strfdatetime(&tm, local_488, dbg_ord, n);
                     pcVar23 = (char*)dcgettext("gnulib", "       normalized time: \'%s\'\n", 5);
                     dbg_printf(pcVar23, pcVar50);
                     if (iVar9 == iVar18) {
                        bVar51 = false;
                        puVar31 = &_LC11;
                        puVar42 = &_LC54;
                     }
 else {
                        puVar31 = &_LC54;
                        bVar51 = false;
                        puVar42 = &_LC11;
                        if (iVar10 != iVar19) {
                           puVar42 = puVar31;
                        }

                     }

                     goto LAB_00103a7e;
                  }

                  goto LAB_0010331c;
               }

               LAB_001041ad:iVar46 = tm.tm_mday;
               if (iVar40 == 0) {
                  if (_Var35 == false) goto LAB_001045b0;
                  if (iVar48 == 0) {
                     iVar18 = tm.tm_mon + 1;
                     iVar19 = tm.tm_year / 100 + 0x13;
                     iVar34 = (int)( (long)tm.tm_year % 100 );
                     uVar41 = ( ulong )(uint) - iVar34;
                     if (0 < iVar34) {
                        uVar41 = (long)tm.tm_year % 100 & 0xffffffff;
                     }

                     iVar34 = -iVar19;
                     if (0 < iVar19) {
                        iVar34 = iVar19;
                     }

                     __sprintf_chk(dbg_ord, 2, 0xd, "-%02d%02d" + ( -0x76d < tm.tm_year ), iVar34, uVar41);
                     iVar19 = iVar46;
                     __snprintf_chk(dbg_tm, 100, 2, 100, "(Y-M-D) %s-%02d-%02d", dbg_ord, iVar18);
                     pcVar50 = (char*)dcgettext("gnulib", "using current date as starting value: \'%s\'\n", 5);
                     dbg_printf(pcVar50, dbg_tm);
                  }

                  LAB_00104212:local_460 = dbg_tm;
                  pcVar50 = debug_strfdatetime(&tm, local_488, local_460, iVar19);
                  pcVar23 = (char*)dcgettext("gnulib", "starting date/time: \'%s\'\n", 5);
                  dbg_printf(pcVar23, pcVar50);
                  uVar41 = pc.rel.day;
                  iVar38 = pc.rel.month;
                  iVar29 = pc.rel.year;
                  if (pc.rel.day == 0 && ( pc.rel.month == 0 && pc.rel.year == 0 )) {
                     uVar33 = 0;
                     if (iVar15 != 0) goto LAB_00104a0c;
                     LAB_00104a40:if (_Var35 != false) goto LAB_00104a5d;
                     goto LAB_00104717;
                  }

                  if (( pc.rel.month != 0 || pc.rel.year != 0 ) && ( tm.tm_mday != 0xf )) {
                     pcVar50 = (char*)dcgettext("gnulib", "warning: when adding relative months/years, it is recommended to specify the 15th of the months\n", 5);
                     dbg_fputs(pcVar50);
                  }

                  if (( uVar41 != 0 ) && ( tm.tm_hour != 0xc )) {
                     pcVar50 = (char*)dcgettext("gnulib", "warning: when adding relative days, it is recommended to specify noon\n", 5);
                     dbg_fputs(pcVar50);
                  }

                  lVar28 = tm.tm_year + iVar29;
                  iVar18 = (int)lVar28;
                  if (( lVar28 != iVar18 ) || ( SCARRY8((long)tm.tm_year, iVar29) )) {
                     LAB_00104333:_Var35 = false;
                     pcVar50 = (char*)dcgettext("gnulib", "error: %s:%d\n", 5);
                     dbg_printf(pcVar50, "parse-datetime.y", 0x86e);
                     goto LAB_001031df;
                  }

                  lVar28 = tm.tm_mon + iVar38;
                  iVar19 = (int)lVar28;
                  if (( lVar28 != iVar19 ) || ( SCARRY8((long)tm.tm_mon, iVar38) )) goto LAB_00104333;
                  lVar28 = (long)tm.tm_mday + uVar41;
                  local_444 = (uint)lVar28;
                  lVar21 = (long)(int)local_444;
                  if (( lVar28 != lVar21 ) || ( SCARRY8((long)tm.tm_mday, uVar41) )) {
                     if (_Var35 == false) goto LAB_0010331c;
                     goto LAB_00104333;
                  }

                  LAB_00104650:iVar46 = (int)lVar21;
                  tm.tm_wday = -1;
                  tm.tm_mday = local_444;
                  tm.tm_hour = tm0.tm_hour;
                  tm.tm_year = iVar18;
                  tm.tm_mon = iVar19;
                  tm.tm_sec = tm0.tm_sec;
                  tm.tm_min = tm0.tm_min;
                  tm.tm_isdst = tm0.tm_isdst;
                  local_470 = mktime_z(ptVar22, &tm);
                  if (tm.tm_wday < 0) {
                     if (_Var35 != false) {
                        pcVar50 = debug_strfdatetime(&tm, local_488, dbg_tm, iVar46);
                        pcVar23 = "error: adding relative date resulted in an invalid date: \'%s\'\n";
                        goto LAB_001036c3;
                     }

                  }
 else {
                     if (_Var35 != false) {
                        pcVar50 = (char*)dcgettext("gnulib", "after date adjustment (%+ld years, %+ld months, %+ld days),\n", 5);
                        uVar33 = uVar41;
                        dbg_printf(pcVar50, iVar29, iVar38);
                        pcVar50 = debug_strfdatetime(&tm, local_488, dbg_tm, (int)uVar33);
                        pcVar23 = (char*)dcgettext("gnulib", "    new date/time = \'%s\'\n", 5);
                        dbg_printf(pcVar23, pcVar50);
                        if (( tm0.tm_isdst != -1 ) && ( tm0.tm_isdst != tm.tm_isdst )) {
                           pcVar50 = (char*)dcgettext("gnulib", "warning: daylight saving time changed after date adjustment\n", 5);
                           dbg_fputs(pcVar50);
                        }

                        if (uVar41 == 0) {
                           if (( tm.tm_mday != local_444 ) || ( ( iVar38 == 0 && ( tm.tm_mon != iVar19 ) ) )) {
                              pcVar50 = (char*)dcgettext("gnulib", "warning: month/year adjustment resulted in shifted dates:\n", 5);
                              dbg_fputs(pcVar50);
                              pcVar50 = tm_year_str(iVar18, tm_year_buf);
                              pcVar23 = (char*)dcgettext("gnulib", "     adjusted Y M D: %s %02d %02d\n", 5);
                              dbg_printf(pcVar23, pcVar50, ( ulong )(iVar19 + 1), (ulong)local_444);
                              uVar33 = (ulong)tm._8_8_ >> 0x20;
                              uVar36 = tm.tm_mon + 1;
                              pcVar50 = tm_year_str(tm.tm_year, tm_year_buf);
                              pcVar23 = (char*)dcgettext("gnulib", "   normalized Y M D: %s %02d %02d\n", 5);
                              dbg_printf(pcVar23, pcVar50, (ulong)uVar36);
                           }

                           if (iVar15 != 0) {
                              lVar28 = pc.time_zone - tm.tm_gmtoff;
                              uVar33 = (ulong)SBORROW8((long)pc.time_zone, tm.tm_gmtoff);
                              bVar51 = SBORROW8(local_470, lVar28);
                              local_470 = local_470 - lVar28;
                              uVar36 = pc.time_zone;
                              if (bVar51 || uVar33 != 0) goto LAB_00104deb;
                           }

                        }
 else if (( iVar15 != 0 ) && ( lVar28 = pc.time_zone - tm.tm_gmtoff ),bVar51 = SBORROW8(local_470, lVar28),uVar33 = local_470 - lVar28,uVar36 = pc.time_zone,local_470 = uVar33,SBORROW8((long)pc.time_zone, tm.tm_gmtoff) || bVar51) {
                           LAB_00104deb:pcVar50 = (char*)dcgettext("gnulib", "error: timezone %d caused time_t overflow\n", 5);
                           _Var35 = false;
                           dbg_printf(pcVar50, (ulong)uVar36);
                           goto LAB_001031df;
                        }

                        LAB_00104a5d:local_460 = dbg_tm;
                        pcVar50 = debug_strfdatetime(&tm, local_488, local_460, (int)uVar33);
                        pcVar23 = (char*)dcgettext("gnulib", "\'%s\' = %ld epoch-seconds\n", 5);
                        dbg_printf(pcVar23, pcVar50, local_470);
                        lVar28 = pc.rel.hour * 0xe10;
                        if (( SEXT816(lVar28) == SEXT816(pc.rel.hour) * SEXT416(0xe10) ) && ( lVar21 = lVar28 + local_470 ),!SCARRY8(lVar28,local_470)) {
                           lVar44 = (long)pc.rel.ns;
                           lVar28 = pc.seconds.tv_nsec + lVar44;
                           uVar41 = ( lVar28 % 1000000000 + 1000000000 ) % 1000000000;
                           iVar19 = (int)( (long)( lVar28 - uVar41 ) / 1000000000 );
                           goto LAB_001047c4;
                        }

                        LAB_001049ef:pcVar50 = "error: adding relative time caused an overflow\n";
                        goto LAB_00103f08;
                     }

                     if (( iVar15 == 0 ) || ( lVar28 = pc.time_zone - tm.tm_gmtoff ),bVar51 = SBORROW8(local_470, lVar28),local_470 = local_470 - lVar28,!SBORROW8((long)pc.time_zone,tm.tm_gmtoff) && !bVar51) goto LAB_00104717;
                  }

               }
 else {
                  if (iVar48 == 0) {
                     tm.tm_yday = -1;
                     iVar29 = pc.day_ordinal;
                     if (0 < pc.day_ordinal) {
                        iVar29 = pc.day_ordinal - ( ulong )(tm.tm_wday != pc.day_number);
                     }

                     lVar28 = iVar29 * 7;
                     if (( SEXT816(lVar28) == SEXT816(iVar29) * SEXT816(7) ) && ( lVar21 = (long)( ( ( pc.day_number - tm.tm_wday ) + 7 ) % 7 ) ),lVar44 = lVar21 + lVar28,!SCARRY8(lVar21,lVar28)) {
                        lVar39 = (long)tm.tm_mday;
                        lVar21 = lVar44 + lVar39;
                        iVar18 = (int)lVar21;
                        tm.tm_mday = iVar18;
                        lVar28 = 1;
                        if (lVar21 == iVar18 && !SCARRY8(lVar44,lVar39)) {
                           tm.tm_isdst = -1;
                           local_470 = mktime_z(ptVar22, &tm);
                           iVar19 = (int)lVar28;
                           if (-1 < tm.tm_yday) {
                              if (_Var35 != false) {
                                 pcVar50 = debug_strfdatetime(&tm, local_488, dbg_tm, iVar19);
                                 pcVar23 = str_days(local_488, dbg_ord, n_01);
                                 pcVar27 = (char*)dcgettext("gnulib", "new start date: \'%s\' is \'%s\'\n", 5);
                                 dbg_printf(pcVar27, pcVar23, pcVar50);
                                 goto LAB_00104212;
                              }

                              goto LAB_001045b0;
                           }

                        }

                     }

                     if (_Var35 == false) goto LAB_0010331c;
                     pcVar50 = debug_strfdatetime(&tm, local_488, dbg_tm, (int)lVar28);
                     pcVar23 = str_days(local_488, dbg_ord, n_00);
                     pcVar27 = (char*)dcgettext("gnulib", "error: day \'%s\' (day ordinal=%ld number=%d) resulted in an invalid date: \'%s\'\n", 5);
                     _Var35 = false;
                     dbg_printf(pcVar27, pcVar23, pc.day_ordinal, (ulong)(uint)pc.day_number, pcVar50);
                     goto LAB_001031df;
                  }

                  if (_Var35 != false) {
                     pcVar50 = str_days(local_488, dbg_ord, iVar18);
                     pcVar23 = (char*)dcgettext("gnulib", "warning: day (%s) ignored when explicit dates are given\n", 5);
                     dbg_printf(pcVar23, pcVar50);
                     goto LAB_00104212;
                  }

                  LAB_001045b0:if (( pc.rel.year == 0 && pc.rel.month == 0 ) && pc.rel.day == 0) {
                     if (iVar15 == 0) {
                        LAB_00104717:lVar28 = pc.rel.hour * 0xe10;
                        if (( SEXT816(lVar28) == SEXT816(pc.rel.hour) * SEXT416(0xe10) ) && ( lVar21 = lVar28 + local_470 ),!SCARRY8(lVar28,local_470)) {
                           lVar28 = 0x112e0be826d694b3;
                           lVar44 = (long)pc.rel.ns;
                           uVar41 = ( ( pc.seconds.tv_nsec + lVar44 ) % 1000000000 + 1000000000U ) % 1000000000;
                           iVar19 = (int)( (long)( ( pc.seconds.tv_nsec + lVar44 ) - uVar41 ) / 1000000000 );
                           LAB_001047c4:iVar46 = pc.rel.ns;
                           iVar32 = pc.rel.seconds;
                           iVar38 = pc.rel.minutes;
                           iVar29 = pc.rel.hour;
                           iVar18 = (int)lVar28;
                           lVar28 = pc.rel.minutes * 0x3c;
                           if (( ( ( SEXT816(lVar28) == SEXT816(pc.rel.minutes) * SEXT816(0x3c) ) && ( !SCARRY8(lVar28,lVar21) ) ) && ( lVar39 = lVar28 + lVar21 + pc.rel.seconds ),!SCARRY8(lVar28 + lVar21,pc.rel.seconds) )) {
                              result->tv_sec = lVar28;
                              result->tv_nsec = uVar41;
                              if (_Var35 != false) {
                                 if (( ( pc.rel.minutes != 0 || pc.rel.seconds != 0 ) || lVar44 != 0 ) || pc.rel.hour != 0) {
                                    pcVar50 = (char*)dcgettext("gnulib", "after time adjustment (%+ld hours, %+ld minutes, %+ld seconds, %+d ns),\n", 5);
                                    dbg_printf(pcVar50, iVar29, iVar38, iVar32, iVar46);
                                    iVar18 = (int)iVar32;
                                    pcVar50 = (char*)dcgettext("gnulib", "    new time = %ld epoch-seconds\n", 5);
                                    dbg_printf(pcVar50, lVar28);
                                    if (( ( tm.tm_isdst != -1 ) && ( lVar28 = localtime_rz(ptVar22, result, &probe_tm) ),lVar28 != 0 )) {
                                       pcVar50 = (char*)dcgettext("gnulib", "warning: daylight saving time changed after time adjustment\n", 5);
                                       dbg_fputs(pcVar50);
                                    }

                                 }

                                 goto LAB_00103d04;
                              }

                              goto LAB_001031da;
                           }

                           if (_Var35 != false) goto LAB_001049ef;
                        }

                     }
 else {
                        LAB_00104a0c:lVar28 = pc.time_zone - tm.tm_gmtoff;
                        bVar51 = SBORROW8(local_470, lVar28);
                        uVar33 = local_470 - lVar28;
                        local_470 = uVar33;
                        if (!SBORROW8((long)pc.time_zone,tm.tm_gmtoff) && !bVar51) goto LAB_00104a40;
                        uVar36 = pc.time_zone;
                        if (_Var35 != false) goto LAB_00104deb;
                     }

                  }
 else {
                     lVar21 = tm.tm_year + pc.rel.year;
                     iVar18 = (int)lVar21;
                     if (( lVar21 == iVar18 ) && ( !SCARRY8((long)tm.tm_year,pc.rel.year) )) {
                        lVar28 = tm.tm_mon + pc.rel.month;
                        iVar19 = (int)lVar28;
                        if (( lVar28 == iVar19 ) && ( !SCARRY8((long)tm.tm_mon,pc.rel.month) )) {
                           lVar28 = tm.tm_mday + pc.rel.day;
                           local_444 = (uint)lVar28;
                           if (( lVar28 == (int)local_444 ) && ( iVar38 = pc.rel.month ),uVar41 = pc.rel.day,iVar29 = pc.rel.year,!SCARRY8((long)tm.tm_mday,pc.rel.day)) goto LAB_00104650;
                        }

                     }

                  }

               }

            }

            LAB_0010331c:_Var35 = false;
            goto LAB_001031df;
         }

         result->tv_sec = pc.seconds.tv_sec;
         result->tv_nsec = pc.seconds.tv_nsec;
      }
 else {
         pcVar50 = (char*)dcgettext("gnulib", "input timezone: ", 5);
         pFVar30 = _stderr;
         fwrite("date: ", 1, 6, _stderr);
         iVar18 = (int)pFVar30;
         fputs(pcVar50, _stderr);
         iVar48 = pc.zones_seen;
         pFVar30 = _stderr;
         if (_Var17 == false) {
            if (pc.zones_seen != 0) {
               pcVar50 = (char*)dcgettext("gnulib", "parsed date/time string", 5);
               fputs(pcVar50, pFVar30);
               goto LAB_00103ca0;
            }

            if (local_490 == (char*)0x0) {
               pcVar50 = "system default";
               LAB_00104004:pFVar30 = _stderr;
               pcVar50 = (char*)dcgettext("gnulib", pcVar50, 5);
               fputs(pcVar50, pFVar30);
            }
 else if (tzdefault == ptVar22) {
               iVar18 = strcmp(local_490, "UTC0");
               if (iVar18 == 0) {
                  pcVar50 = "TZ=\"UTC0\" environment value or -u";
                  goto LAB_00104004;
               }

               uVar25 = dcgettext("gnulib", "TZ=\"%s\" environment value", 5);
               __fprintf_chk(_stderr, 2, uVar25, local_490);
            }
 else {
               uVar25 = dcgettext("gnulib", "TZ=\"%s\" in date string", 5);
               __fprintf_chk(_stderr, 2, uVar25, local_490);
            }

            if (( pc.local_zones_seen != 0 ) && ( 0 < pc.local_isdst )) {
               LAB_0010401c:pFVar30 = _stderr;
               fwrite(", dst", 1, 5, _stderr);
               iVar18 = (int)pFVar30;
               goto LAB_00103cd1;
            }

            fputc(10, _stderr);
            LAB_00103405:iVar48 = pc.dates_seen;
            iVar40 = pc.days_seen;
            uVar41 = pc.J_zones_seen + pc.local_zones_seen + pc.zones_seen;
            iVar15 = pc.dsts_seen;
            iVar37 = pc.times_seen;
            iVar49 = pc.local_zones_seen;
            if ((long)( pc.times_seen | pc.dates_seen | pc.days_seen | pc.dsts_seen | uVar41 ) < 2) goto LAB_0010373c;
            if (1 < pc.times_seen) {
               pcVar50 = (char*)dcgettext("gnulib", "error: seen multiple time parts\n", 5);
               fwrite("date: ", 1, 6, _stderr);
               fputs(pcVar50, _stderr);
            }

            if (1 < iVar48) {
               pcVar50 = (char*)dcgettext("gnulib", "error: seen multiple date parts\n", 5);
               fwrite("date: ", 1, 6, _stderr);
               fputs(pcVar50, _stderr);
            }

            if (1 < iVar40) {
               pcVar50 = (char*)dcgettext("gnulib", "error: seen multiple days parts\n", 5);
               fwrite("date: ", 1, 6, _stderr);
               fputs(pcVar50, _stderr);
            }

            if (1 < iVar15) {
               pcVar50 = (char*)dcgettext("gnulib", "error: seen multiple daylight-saving parts\n", 5);
               fwrite("date: ", 1, 6, _stderr);
               fputs(pcVar50, _stderr);
            }

            if ((long)uVar41 < 2) goto LAB_0010331c;
            pcVar50 = (char*)dcgettext("gnulib", "error: seen multiple time-zone parts\n", 5);
            fwrite("date: ", 1, 6, _stderr);
            _Var35 = false;
            fputs(pcVar50, _stderr);
            goto LAB_001031df;
         }

         pcVar50 = (char*)dcgettext("gnulib", "\'@timespec\' - always UTC", 5);
         fputs(pcVar50, pFVar30);
         if (pc.local_zones_seen == 0) {
            if (iVar48 != 0) goto LAB_00103ca0;
            LAB_00103eb3:fputc(10, _stderr);
         }
 else {
            if (iVar48 == 0) {
               if (pc.local_isdst < 1) goto LAB_00103eb3;
               goto LAB_0010401c;
            }

            LAB_00103ca0:pcVar50 = time_zone_str(pc.time_zone, time_zone_buf);
            iVar18 = (int)pcVar50;
            __fprintf_chk(_stderr, 2, " (%s)");
            LAB_00103cd1:fputc(10, _stderr);
            if (_Var17 == false) goto LAB_00103405;
         }

         result->tv_sec = pc.seconds.tv_sec;
         result->tv_nsec = pc.seconds.tv_nsec;
         LAB_00103d04:pcVar50 = "timezone: system default\n";
         if (local_490 == (char*)0x0) {
            LAB_00103d3d:pcVar50 = (char*)dcgettext("gnulib", pcVar50, 5);
            pFVar30 = _stderr;
            fwrite("date: ", 1, 6, _stderr);
            iVar18 = (int)pFVar30;
            fputs(pcVar50, _stderr);
         }
 else {
            iVar19 = strcmp(local_490, "UTC0");
            if (iVar19 == 0) {
               pcVar50 = "timezone: Universal Time\n";
               goto LAB_00103d3d;
            }

            pcVar50 = (char*)dcgettext("gnulib", "timezone: TZ=\"%s\" environment value\n", 5);
            dbg_printf(pcVar50, local_490);
         }

         _Var6 = result->tv_sec;
         _Var5 = result->tv_nsec;
         pcVar50 = (char*)dcgettext("gnulib", "final: %ld.%09d (epoch-seconds)\n", 5);
         dbg_printf(pcVar50, _Var6, (ulong)(uint)_Var5);
         ptVar26 = gmtime_r(&result->tv_sec, (tm*)&probe);
         if (ptVar26 != (tm*)0x0) {
            pcVar50 = debug_strfdatetime((tm*)&probe, (parser_control*)0x0, dbg_tm, iVar18);
            pcVar23 = (char*)dcgettext("gnulib", "final: %s (UTC)\n", 5);
            dbg_printf(pcVar23, pcVar50);
         }

         lVar28 = localtime_rz(ptVar22, result, &probe_tm);
         if (lVar28 != 0) {
            pcVar50 = time_zone_str((int)probe_tm.tm_gmtoff, time_zone_buf);
            pcVar23 = debug_strfdatetime(&probe_tm, (parser_control*)0x0, dbg_tm, iVar18);
            pcVar27 = (char*)dcgettext("gnulib", "final: %s (UTC%s)\n", 5);
            dbg_printf(pcVar27, pcVar23, pcVar50);
         }

      }

      LAB_001031da:_Var35 = true;
   }
 else {
      if (pc.parse_datetime_debug == false) goto LAB_0010331c;
      if (pc.input < p + sVar20) {
         pcVar23 = "error: parsing failed, stopped at \'%s\'\n";
         LAB_001036c3:pcVar23 = (char*)dcgettext("gnulib", pcVar23, 5);
      }
 else {
         pcVar23 = (char*)dcgettext("gnulib", "error: parsing failed\n", 5);
      }

      _Var35 = false;
      dbg_printf(pcVar23, pcVar50);
   }

   LAB_001031df:if (tzdefault != ptVar22) {
      tzfree(ptVar22);
   }

   LAB_001031ee:free(local_498);
   if (lVar4 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return _Var35;
}
/* WARNING: Unknown calling convention */_Bool parse_datetime2(timespec *result, char *p, timespec *now, uint flags, timezone_t tzdefault, char *tzstring) {
   _Bool _Var1;
   _Var1 = parse_datetime_body(result, p, now, flags, tzdefault, tzstring);
   return _Var1;
}
/* WARNING: Unknown calling convention */_Bool parse_datetime(timespec *result, char *p, timespec *now) {
   _Bool _Var1;
   char *tzstring;
   timezone_t tzdefault;
   _Var1 = false;
   tzstring = getenv("TZ");
   tzdefault = (timezone_t)tzalloc(tzstring);
   if (tzdefault != (timezone_t)0x0) {
      _Var1 = parse_datetime_body(result, p, now, 0, tzdefault, tzstring);
      tzfree(tzdefault);
   }

   return _Var1;
}

