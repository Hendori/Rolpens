/* WARNING: Unknown calling convention */uintmax_t string_to_integer(_Bool count_lines, char *n_string) {
   undefined8 uVar1;
   uintmax_t uVar2;
   if (count_lines) {
      uVar1 = dcgettext(0, "invalid number of lines", 5);
   }
 else {
      uVar1 = dcgettext(0, "invalid number of bytes", 5);
   }

   uVar2 = xnumtoumax(n_string, 10, 0, 0xffffffffffffffff, "bkKmMGTPEZYRQ0", uVar1, 0, 2);
   return uVar2;
}
/* WARNING: Unknown calling convention */void diagnose_copy_fd_failure(Copy_fd_status err, char *filename) {
   undefined8 uVar1;
   undefined8 uVar2;
   int *piVar3;
   char *pcVar4;
   if (err == COPY_FD_READ_ERROR) {
      uVar1 = quotearg_style(4);
      pcVar4 = "error reading %s";
   }
 else {
      if (err != COPY_FD_UNEXPECTED_EOF) {
         /* WARNING: Subroutine does not return */
         __assert_fail("0", "src/head.c", 0xa2, "diagnose_copy_fd_failure");
      }

      uVar1 = quotearg_n_style_colon(0, 3, filename);
      pcVar4 = "%s: file has shrunk too much";
   }

   uVar2 = dcgettext(0, pcVar4, 5);
   piVar3 = __errno_location();
   error(0, *piVar3, uVar2, uVar1);
   return;
}
off_t elseek(int fd, off_t offset, int whence, char *filename) {
   undefined8 uVar1;
   undefined8 uVar2;
   int *piVar3;
   off_t oVar4;
   undefined4 in_register_00000014;
   char *pcVar5;
   undefined4 in_register_0000003c;
   uVar1 = quotearg_n_style_colon(0, 3, CONCAT44(in_register_00000014, whence));
   pcVar5 = "%s: cannot seek to relative offset %jd";
   if ((int)offset == 0) {
      pcVar5 = "%s: cannot seek to offset %jd";
   }

   uVar2 = dcgettext(0, pcVar5, 5);
   piVar3 = __errno_location();
   oVar4 = error(0, *piVar3, uVar2, uVar1, CONCAT44(in_register_0000003c, fd));
   return oVar4;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */void xwrite_stdout(char *buffer, size_t n_bytes) {
   size_t sVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   uint *puVar4;
   size_t n_bytes_00;
   ulong uVar5;
   ulong uVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   char acStack_2040[8200];
   long lStack_38;
   undefined8 uStack_30;
   undefined8 uStack_28;
   sVar1 = fwrite_unlocked(buffer, 1, n_bytes, _stdout);
   if (n_bytes <= sVar1) {
      return;
   }

   clearerr_unlocked(_stdout);
   fpurge(_stdout);
   uVar2 = quotearg_style(4, "standard output");
   uVar3 = dcgettext(0, "error writing %s", 5);
   puVar4 = (uint*)__errno_location();
   uVar7 = 1;
   uVar6 = ( ulong ) * puVar4;
   error(1, uVar6, uVar3, uVar2);
   lStack_38 = *(long*)( in_FS_OFFSET + 0x28 );
   uStack_30 = uVar3;
   uStack_28 = uVar2;
   do {
      uVar5 = 0x2000;
      if (uVar6 < 0x2001) {
         uVar5 = uVar6;
      }

      n_bytes_00 = safe_read(uVar7 & 0xffffffff, acStack_2040, uVar5);
   }
 while ( ( -1 < (long)n_bytes_00 ) && ( ( ( uVar6 = uVar6 - n_bytes_00 ),n_bytes_00 != 0 || ( uVar6 == 0 ) ) && ( xwrite_stdout(acStack_2040, n_bytes_00),uVar6 != 0 ) ) );
   if (lStack_38 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Unknown calling convention */Copy_fd_status copy_fd(int src_fd, uintmax_t n_bytes) {
   long lVar1;
   Copy_fd_status CVar2;
   size_t n_bytes_00;
   ulong uVar3;
   long in_FS_OFFSET;
   char buf[8192];
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      uVar3 = 0x2000;
      if (n_bytes < 0x2001) {
         uVar3 = n_bytes;
      }

      n_bytes_00 = safe_read(src_fd, buf, uVar3);
      if ((long)n_bytes_00 < 0) {
         CVar2 = COPY_FD_READ_ERROR;
         goto LAB_0010026d;
      }

      n_bytes = n_bytes - n_bytes_00;
      if (( n_bytes_00 == 0 ) && ( n_bytes != 0 )) {
         CVar2 = COPY_FD_UNEXPECTED_EOF;
         goto LAB_0010026d;
      }

      xwrite_stdout(buf, n_bytes_00);
   }
 while ( n_bytes != 0 );
   CVar2 = COPY_FD_OK;
   LAB_0010026d:if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return CVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */_Bool head_bytes(char *filename, int fd, uintmax_t bytes_to_write) {
   long lVar1;
   _Bool _Var2;
   size_t n_bytes;
   undefined8 uVar3;
   undefined8 uVar4;
   int *piVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   char buffer[8192];
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (bytes_to_write != 0) {
      uVar6 = 0x2000;
      do {
         if (bytes_to_write < uVar6) {
            uVar6 = bytes_to_write;
         }

         n_bytes = safe_read(fd, buffer, uVar6);
         if ((long)n_bytes < 0) {
            uVar3 = quotearg_style(4, filename);
            uVar4 = dcgettext(0, "error reading %s", 5);
            piVar5 = __errno_location();
            error(0, *piVar5, uVar4, uVar3);
            _Var2 = false;
            goto LAB_0010033c;
         }

         if (n_bytes == 0) break;
         xwrite_stdout(buffer, n_bytes);
         bytes_to_write = bytes_to_write - n_bytes;
      }
 while ( bytes_to_write != 0 );
   }

   _Var2 = true;
   LAB_0010033c:if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return _Var2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */_Bool head_lines(char *filename, int fd, uintmax_t lines_to_write) {
   long lVar1;
   _Bool _Var2;
   int iVar3;
   long lVar4;
   __off_t _Var5;
   undefined8 uVar6;
   undefined8 uVar7;
   int *piVar8;
   char *in_RCX;
   size_t n_bytes;
   long in_FS_OFFSET;
   stat st;
   char buffer[8192];
   size_t sVar9;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lines_to_write != 0) {
      do {
         lVar4 = safe_read(fd, buffer, 0x2000);
         if (lVar4 < 0) {
            uVar6 = quotearg_style(4, filename);
            uVar7 = dcgettext(0, "error reading %s", 5);
            piVar8 = __errno_location();
            error(0, *piVar8, uVar7, uVar6);
            _Var2 = false;
            goto LAB_00100480;
         }

         if (lVar4 == 0) break;
         sVar9 = 0;
         do {
            n_bytes = sVar9 + 1;
            if (( buffer[sVar9] == line_end ) && ( lines_to_write = lines_to_write == 0 )) {
               lVar4 = n_bytes - lVar4;
               _Var5 = lseek(fd, lVar4, 1);
               if (( _Var5 < 0 ) && ( ( ( iVar3 = fstat(fd, (stat*)&st) ),iVar3 != 0 || ( ( st.st_mode & 0xf000 ) == 0x8000 ) ) && ( _Var5 = _Var5 < 0 ) )) {
                  elseek((int)lVar4, 1, (int)filename, in_RCX);
               }

               xwrite_stdout(buffer, n_bytes);
               goto LAB_0010047b;
            }

            sVar9 = n_bytes;
         }
 while ( (long)n_bytes < lVar4 );
         xwrite_stdout(buffer, n_bytes);
      }
 while ( lines_to_write != 0 );
   }

   LAB_0010047b:_Var2 = true;
   LAB_00100480:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return _Var2;
}
/* WARNING: Unknown calling convention */_Bool elide_tail_lines_seekable(char *pretty_filename, int fd, uintmax_t n_lines, off_t start_pos, off_t size) {
   char *__offset;
   long lVar1;
   _Bool _Var2;
   Copy_fd_status err;
   __off_t _Var3;
   char *filename;
   undefined8 uVar4;
   undefined8 uVar5;
   int *piVar6;
   long __offset_00;
   int __c;
   long lVar7;
   uintmax_t uVar8;
   uintmax_t uVar9;
   long in_FS_OFFSET;
   undefined8 local_2050;
   char buffer[8192];
   lVar7 = 0x2000;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( size - start_pos & 0x1fffU ) != 0) {
      lVar7 = ( size - start_pos ) % 0x2000;
   }

   __offset_00 = size - lVar7;
   filename = (char*)start_pos;
   local_2050 = pretty_filename;
   _Var3 = lseek(fd, __offset_00, 0);
   if (_Var3 < 0) {
      LAB_001007e8:elseek((int)__offset_00, 0, (int)local_2050, filename);
      _Var2 = false;
   }
 else {
      filename = (char*)safe_read(fd, buffer, lVar7);
      if (-1 < (long)filename) {
         __c = (int)line_end;
         uVar9 = n_lines;
         if (( ( n_lines != 0 ) && ( filename != (char*)0x0 ) ) && ( filename[(long)&local_2050 + 7] != line_end )) {
            uVar9 = n_lines - 1;
         }

         do {
            uVar8 = uVar9;
            if (filename != (char*)0x0) {
               if (n_lines == 0) {
                  do {
                     filename = filename + -1;
                     uVar8 = uVar9 - 1;
                     if (uVar9 == 0) goto LAB_00100669;
                     uVar9 = uVar8;
                  }
 while ( filename != (char*)0x0 );
               }
 else {
                  do {
                     filename = (char*)memrchr(buffer, __c, (size_t)filename);
                     uVar8 = uVar9;
                     if (filename == (char*)0x0) break;
                     filename = filename + -(long)buffer;
                     uVar8 = uVar9 - 1;
                     if (uVar9 == 0) goto LAB_00100669;
                     uVar9 = uVar8;
                  }
 while ( filename != (char*)0x0 );
               }

            }

            if (__offset_00 == start_pos) goto LAB_001007ac;
            __offset_00 = __offset_00 + -0x2000;
            _Var3 = lseek(fd, __offset_00, 0);
            if (_Var3 < 0) goto LAB_001007e8;
            filename = (char*)safe_read(fd, buffer, 0x2000);
            if ((long)filename < 0) break;
            if (filename == (char*)0x0) goto LAB_001007ac;
            __c = (int)line_end;
            uVar9 = uVar8;
         }
 while ( true );
      }

      uVar4 = quotearg_style(4, local_2050);
      uVar5 = dcgettext(0, "error reading %s", 5);
      piVar6 = __errno_location();
      error(0, *piVar6, uVar5, uVar4);
      _Var2 = false;
   }

   LAB_001006e5:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return _Var2;
   LAB_00100669:if (start_pos < __offset_00) {
      _Var3 = lseek(fd, start_pos, 0);
      if (_Var3 < 0) {
         elseek((int)start_pos, 0, (int)local_2050, filename);
         _Var2 = false;
         goto LAB_001006e5;
      }

      err = copy_fd(fd, __offset_00 - start_pos);
      if (err != COPY_FD_OK) {
         diagnose_copy_fd_failure(err, local_2050);
         _Var2 = false;
         goto LAB_001006e5;
      }

   }

   if (filename + 1 != (char*)0x0) {
      xwrite_stdout(buffer, (size_t)( filename + 1 ));
   }

   __offset = filename + __offset_00 + 1;
   _Var3 = lseek(fd, (__off_t)__offset, 0);
   if (_Var3 < 0) {
      elseek((int)__offset, 0, (int)local_2050, filename);
   }

   _Var2 = ( _Bool )((byte)~(byte)((ulong)_Var3 >> 0x38) >> 7);
   goto LAB_001006e5;
   LAB_001007ac:_Var2 = true;
   goto LAB_001006e5;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */void usage(int status) {
   FILE *pFVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   char *pcVar5;
   infomap *piVar6;
   undefined *puVar7;
   infomap infomap[7];
   uVar4 = _program_name;
   piVar6 = infomap;
   if (status != 0) {
      uVar3 = dcgettext(0, "Try \'%s --help\' for more information.\n", 5);
      __fprintf_chk(_stderr, 2, uVar3, uVar4);
      goto LAB_001008aa;
   }

   uVar3 = dcgettext(0, "Usage: %s [OPTION]... [FILE]...\n", 5);
   __printf_chk(2, uVar3, uVar4);
   uVar4 = dcgettext(0, "Print the first %d lines of each FILE to standard output.\nWith more than one FILE, precede each with a header giving the file name.\n", 5);
   __printf_chk(2, uVar4, 10);
   pFVar1 = _stdout;
   pcVar5 = (char*)dcgettext(0, "\nWith no FILE, or when FILE is -, read standard input.\n", 5);
   fputs_unlocked(pcVar5, pFVar1);
   pFVar1 = _stdout;
   pcVar5 = (char*)dcgettext(0, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
   fputs_unlocked(pcVar5, pFVar1);
   uVar4 = dcgettext(0, "  -c, --bytes=[-]NUM       print the first NUM bytes of each file;\n                             with the leading \'-\', print all but the last\n                             NUM bytes of each file\n  -n, --lines=[-]NUM       print the first NUM lines instead of the first %d;\n                             with the leading \'-\', print all but the last\n                             NUM lines of each file\n", 5);
   __printf_chk(2, uVar4, 10);
   pFVar1 = _stdout;
   pcVar5 = (char*)dcgettext(0, "  -q, --quiet, --silent    never print headers giving file names\n  -v, --verbose            always print headers giving file names\n", 5);
   fputs_unlocked(pcVar5, pFVar1);
   pFVar1 = _stdout;
   pcVar5 = (char*)dcgettext(0, "  -z, --zero-terminated    line delimiter is NUL, not newline\n", 5);
   fputs_unlocked(pcVar5, pFVar1);
   pFVar1 = _stdout;
   pcVar5 = (char*)dcgettext(0, "      --help        display this help and exit\n", 5);
   fputs_unlocked(pcVar5, pFVar1);
   pFVar1 = _stdout;
   pcVar5 = (char*)dcgettext(0, "      --version     output version information and exit\n", 5);
   fputs_unlocked(pcVar5, pFVar1);
   pFVar1 = _stdout;
   pcVar5 = (char*)dcgettext(0, "\nNUM may have a multiplier suffix:\nb 512, kB 1000, K 1024, MB 1000*1000, M 1024*1024,\nGB 1000*1000*1000, G 1024*1024*1024, and so on for T, P, E, Z, Y, R, Q.\nBinary prefixes can be used, too: KiB=K, MiB=M, and so on.\n", 5);
   fputs_unlocked(pcVar5, pFVar1);
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
   infomap[6].program = (char*)0x0;
   infomap[6].node = (char*)0x0;
   do {
      iVar2 = strcmp("head", pcVar5);
      if (iVar2 == 0) break;
      pcVar5 = *(char**)( (long)piVar6 + 0x10 );
      piVar6 = (infomap*)( (long)piVar6 + 0x10 );
   }
 while ( pcVar5 != (char*)0x0 );
   puVar7 = *(undefined**)( (long)piVar6 + 8 );
   if (puVar7 == (undefined*)0x0) {
      uVar4 = dcgettext(0, "\n%s online help: <%s>\n", 5);
      puVar7 = &_LC12;
      __printf_chk(2, uVar4, "GNU coreutils", "https://www.gnu.org/software/coreutils/");
      pcVar5 = setlocale(5, (char*)0x0);
      if (pcVar5 != (char*)0x0) goto LAB_00100b4d;
      uVar4 = dcgettext(0, "Full documentation <%s%s>\n", 5);
      pcVar5 = " invocation";
      __printf_chk(2, uVar4, "https://www.gnu.org/software/coreutils/", &_LC12);
   }
 else {
      uVar4 = dcgettext(0, "\n%s online help: <%s>\n", 5);
      __printf_chk(2, uVar4, "GNU coreutils", "https://www.gnu.org/software/coreutils/");
      pcVar5 = setlocale(5, (char*)0x0);
      if (pcVar5 != (char*)0x0) {
         LAB_00100b4d:iVar2 = strncmp(pcVar5, "en_", 3);
         pFVar1 = _stdout;
         if (iVar2 != 0) {
            pcVar5 = (char*)dcgettext(0, "Report any translation bugs to <https://translationproject.org/team/>\n", 5);
            fputs_unlocked(pcVar5, pFVar1);
         }

      }

      uVar4 = dcgettext(0, "Full documentation <%s%s>\n", 5);
      pcVar5 = "";
      __printf_chk(2, uVar4, "https://www.gnu.org/software/coreutils/", &_LC12);
      if (puVar7 == &_LC12) {
         pcVar5 = " invocation";
      }

   }

   uVar4 = dcgettext(0, "or available locally via: info \'(coreutils) %s%s\'\n", 5);
   __printf_chk(2, uVar4, puVar7, pcVar5);
   LAB_001008aa:/* WARNING: Subroutine does not return */exit(status);
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */int main(int argc, char **argv) {
   long lVar1;
   void *__ptr;
   _Bool _Var2;
   int iVar3;
   uint uVar4;
   int iVar5;
   Copy_fd_status err;
   undefined8 uVar6;
   byte *__file;
   size_t sVar7;
   int *piVar8;
   byte *pbVar9;
   undefined8 *__ptr_00;
   __off_t _Var10;
   char *pcVar11;
   char *pcVar12;
   ulong uVar13;
   __blksize_t _Var14;
   undefined8 uVar15;
   byte bVar16;
   char *pcVar18;
   undefined *puVar19;
   char cVar20;
   ulong uVar21;
   byte *pbVar22;
   char *pcVar23;
   uint uVar24;
   ulong uVar25;
   size_t n_bytes;
   undefined8 *puVar26;
   size_t n_bytes_00;
   long lVar27;
   ulong uVar28;
   long lVar29;
   bool bVar30;
   long in_FS_OFFSET;
   int local_14c;
   uintmax_t local_148;
   char **local_140;
   char *local_138;
   uint local_130;
   bool local_12b;
   _Bool local_12a;
   byte local_129;
   __off_t local_128;
   __off_t local_120;
   ulong local_118;
   idx_t n_array_alloc;
   char *b[2];
   stat st;
   byte *pbVar17;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   set_program_name(*argv);
   setlocale(6, "");
   bindtextdomain("coreutils", "/usr/local/share/locale");
   textdomain("coreutils");
   atexit((__func*)&close_stdout);
   have_read_stdin = false;
   print_headers = false;
   line_end = '\n';
   if (( ( argc < 2 ) || ( pcVar23 = argv[1] * pcVar23 != '-' ) ) || ( 9 < (int)pcVar23[1] - 0x30U )) {
      local_12a = true;
      iVar5 = 0;
      local_148 = 10;
      local_140 = argv;
   }
 else {
      pcVar11 = pcVar23 + 1;
      do {
         pcVar12 = pcVar11;
         uVar4 = (uint)pcVar12[1];
         pcVar11 = pcVar12 + 1;
      }
 while ( uVar4 - 0x30 < 10 );
      if (pcVar12[1] == '\0') {
         local_12a = true;
         iVar5 = 0;
      }
 else {
         uVar24 = 0;
         local_12a = true;
         iVar5 = 0;
         pcVar18 = pcVar11;
         do {
            switch ((char)uVar4) {
               case 'b':
               case 'k':
               case 'm':
          local_12a = false;
          uVar24 = uVar4;
          break;
               case 'c':
          uVar24 = 0;
          local_12a = false;
          break;
               default:
          uVar15 = dcgettext(0,"invalid trailing option -- %c",5);
          iVar3 = (int)(char)uVar4;
          goto LAB_00102079;
               case 'l':
          local_12a = true;
          break;
               case 'q':
          iVar5 = 2;
          break;
               case 'v':
          iVar5 = 1;
          break;
               case 'z':
          line_end = '\0';
            }

            pbVar9 = (byte*)( pcVar18 + 1 );
            uVar4 = ( uint ) * pbVar9;
            pcVar18 = pcVar18 + 1;
         }
 while ( *pbVar9 != 0 );
         *pcVar11 = (char)uVar24;
         if ((char)uVar24 != '\0') {
            pcVar12[2] = '\0';
         }

      }

      local_140 = argv + 1;
      argc = argc + -1;
      local_148 = string_to_integer(local_12a, pcVar23 + 1);
      *local_140 = *argv;
   }

   local_12b = false;
   while (iVar3 = getopt_long(argc, local_140, "c:n:qvz0123456789", long_options, 0),iVar3 != -1) {
      if (0x80 < iVar3) goto LAB_00102084;
      if (iVar3 < 99) {
         if (iVar3 == -0x83) {
            uVar15 = proper_name_lite("Jim Meyering", "Jim Meyering");
            uVar6 = proper_name_lite("David MacKenzie", "David MacKenzie");
            version_etc(_stdout, &_LC12, "GNU coreutils", _Version, uVar6, uVar15, 0);
            /* WARNING: Subroutine does not return */
            exit(0);
         }

         if (iVar3 == -0x82) {
            /* WARNING: Subroutine does not return */
            usage(0);
         }

         goto switchD_001015e8_caseD_64;
      }

      switch (iVar3) {
         case 99:
      local_12b = *_optarg == '-';
      if (local_12b) {
        _optarg = _optarg + 1;
      }
      local_148 = string_to_integer(false,_optarg);
      local_12a = false;
      break;
         default:
      goto switchD_001015e8_caseD_64;
         case 0x6e:
      local_12b = *_optarg == '-';
      if (local_12b) {
        _optarg = _optarg + 1;
      }
      local_148 = string_to_integer(true,_optarg);
      local_12a = true;
      break;
         case 0x71:
      iVar5 = 2;
      break;
         case 0x76:
      iVar5 = 1;
      break;
         case 0x7a:
      line_end = '\0';
      break;
         case 0x80:
      presume_input_pipe = true;
      }

   }
;
   if (( iVar5 == 1 ) || ( ( iVar5 == 0 && ( _optind < argc + -1 ) ) )) {
      print_headers = true;
   }

   if (_optind < argc) {
      local_140 = local_140 + _optind;
      pbVar9 = (byte*)*local_140;
      if (pbVar9 == (byte*)0x0) {
         local_129 = 1;
         LAB_00101a85:iVar3 = (int)pbVar9;
         if (( have_read_stdin == false ) || ( iVar5 = -1 < iVar5 )) {
            if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return (int)( local_129 ^ 1 );
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         piVar8 = __errno_location();
         error(1, *piVar8, &_LC41);
         switchD_001015e8_caseD_64:if (iVar3 - 0x30U < 10) {
            uVar15 = dcgettext(0, "invalid trailing option -- %c", 5);
            LAB_00102079:error(0, 0, uVar15, iVar3);
         }

         LAB_00102084:/* WARNING: Subroutine does not return */usage(1);
      }

   }
 else {
      pbVar9 = &_LC41;
      local_140 = main::default_file_list;
   }

   local_129 = 1;
   __file = pbVar9;
   LAB_00101820:local_140 = local_140 + 1;
   local_130 = *__file - 0x2d;
   if (( local_130 == 0 ) && ( local_130 = local_130 == 0 )) {
      have_read_stdin = true;
      __file = (byte*)dcgettext(0, "standard input", 5);
      local_14c = 0;
      LAB_00101863:if (print_headers != false) {
         puVar19 = &_LC14;
         if (first_file_1 == '\0') {
            puVar19 = &_LC42;
         }

         pbVar9 = __file;
         __printf_chk(2, "%s==> %s <==\n", puVar19);
         first_file_1 = '\0';
      }

      if (local_12b != false) {
         if (local_148 == 0xffffffffffffffff) {
            LAB_00101c26:pbVar22 = (byte*)(ulong)local_12b;
            goto LAB_00101a5c;
         }

         iVar5 = fstat(local_14c, (stat*)&st);
         if (iVar5 != 0) {
            pbVar9 = (byte*)quotearg_style(4, __file);
            uVar15 = dcgettext(0, "cannot fstat %s", 5);
            piVar8 = __errno_location();
            error(0, *piVar8, uVar15);
            pbVar22 = (byte*)0x0;
            goto LAB_00101a5c;
         }

         if (( presume_input_pipe == false ) && ( ( st.st_mode & 0xd000 ) == 0x8000 )) {
            local_120 = lseek(local_14c, 0, 1);
            if (local_120 < 0) {
               elseek(0, 1, (int)__file, (char*)pbVar9);
               pbVar22 = (byte*)0x0;
            }
 else if (local_12a == false) {
               pbVar9 = (byte*)0x1fffffffffffffff;
               _Var14 = st.st_blksize;
               if (0x1fffffffffffffff < st.st_blksize - 1U) {
                  _Var14 = 0x200;
               }

               if (st.st_size <= _Var14) goto LAB_001018d4;
               uVar28 = st.st_size - local_120;
               if ((long)uVar28 < 0) {
                  uVar28 = 0;
               }

               if (( uVar28 <= local_148 ) || ( err = err == COPY_FD_OK )) goto LAB_00101c26;
               diagnose_copy_fd_failure(err, (char*)__file);
               pbVar22 = (byte*)0x0;
            }
 else {
               pbVar9 = (byte*)0x1fffffffffffffff;
               _Var14 = st.st_blksize;
               if (0x1fffffffffffffff < st.st_blksize - 1U) {
                  _Var14 = 0x200;
               }

               if (st.st_size <= _Var14) goto LAB_00101cd5;
               pbVar9 = (byte*)0x1;
               pbVar22 = pbVar9;
               if (local_120 < st.st_size) {
                  _Var2 = elide_tail_lines_seekable((char*)__file, local_14c, local_148, local_120, st.st_size);
                  pbVar9 = (byte*)(ulong)_Var2;
                  pbVar22 = pbVar9;
               }

            }

            goto LAB_00101a5c;
         }

         local_120 = -1;
         if (local_12a == false) {
            LAB_001018d4:local_128 = local_120;
            if (0x100000 < local_148) {
               pbVar9 = (byte*)( ulong )((uint)local_148 & 0x1fff);
               uVar13 = 0;
               bVar30 = false;
               n_array_alloc = 0;
               __ptr_00 = (undefined8*)0x0;
               uVar28 = ( local_148 >> 0xd ) + 1 + ( ulong )(( local_148 & 0x1fff ) != 0);
               local_118 = 0;
               uVar21 = 0;
               uVar25 = 1;
               do {
                  if (n_array_alloc == uVar21) {
                     uVar13 = uVar28;
                     __ptr_00 = (undefined8*)xpalloc(__ptr_00, &n_array_alloc, 1, uVar28, 8);
                  }

                  if (bVar30 == false) {
                     uVar15 = xmalloc(0x2000);
                     __ptr_00[uVar21] = uVar15;
                     local_118 = uVar21 + 1;
                     sVar7 = full_read(local_14c, uVar15, 0x2000);
                     if ((long)sVar7 < 0x2000) goto LAB_00101991;
                     if (local_118 == uVar28) goto LAB_00101939;
                  }
 else {
                     sVar7 = full_read(local_14c, __ptr_00[uVar21], 0x2000);
                     if ((long)sVar7 < 0x2000) goto LAB_00101991;
                     LAB_00101939:local_128 = local_128 + sVar7;
                     xwrite_stdout((char*)__ptr_00[uVar25], sVar7);
                     bVar30 = local_12b;
                  }

                  uVar21 = uVar25;
                  uVar25 = ( uVar25 + 1 ) % uVar28;
               }
 while ( true );
            }

            uVar28 = 0;
            lVar27 = local_148 + 0x2000;
            pcVar23 = (char*)xnmalloc(2, lVar27);
            pbVar22 = (byte*)(ulong)local_12b;
            b[0] = pcVar23;
            b[1] = pcVar23 + lVar27;
            while (true) {
               while (true) {
                  pcVar11 = b[uVar28];
                  sVar7 = full_read(local_14c, pcVar11, lVar27);
                  uVar4 = (uint)uVar28;
                  cVar20 = (char)pbVar22;
                  if ((long)sVar7 < lVar27) break;
                  if (cVar20 == '\0') {
                     local_128 = local_128 + local_148;
                     if (local_148 == 0) goto LAB_001021f8;
                     pbVar9 = (byte*)( ulong )(uVar4 ^ 1);
                     xwrite_stdout(b[(long)pbVar9] + 0x2000, local_148);
                     if ((long)local_148 < (long)sVar7) goto LAB_001021f5;
                     uVar28 = ( ulong )(byte)(uVar4 ^ 1);
                     goto LAB_001021e7;
                  }

                  if ((long)local_148 < (long)sVar7) {
                     pbVar22 = (byte*)0x0;
                     goto LAB_001021f5;
                  }

                  uVar28 = ( ulong )(uVar4 ^ 1);
                  pbVar22 = (byte*)0x0;
               }
;
               piVar8 = __errno_location();
               if (*piVar8 != 0) break;
               if ((long)local_148 < (long)sVar7) {
                  if (cVar20 == '\0') {
                     local_128 = local_128 + local_148;
                     pbVar22 = (byte*)(ulong)local_12b;
                     if (local_148 == 0) goto LAB_001021f8;
                     xwrite_stdout(b[uVar4 ^ 1] + 0x2000, local_148);
                     pbVar22 = (byte*)(ulong)local_12b;
                  }

                  LAB_001021f5:sVar7 = sVar7 - local_148;
                  LAB_001021f8:local_128 = local_128 + sVar7;
                  xwrite_stdout(pcVar11, sVar7);
               }
 else {
                  if (cVar20 != '\0') goto LAB_0010219d;
                  local_128 = local_128 + sVar7;
                  if (sVar7 == 0) {
                     pbVar22 = (byte*)(ulong)local_12b;
                     goto LAB_0010219d;
                  }

                  xwrite_stdout(b[uVar4 ^ 1] + 0x2000, sVar7);
                  pbVar22 = (byte*)(ulong)local_12b;
               }

               uVar28 = ( ulong )(uVar4 ^ 1);
               if ((char)pbVar22 != '\0') goto LAB_0010219d;
               LAB_001021e7:pbVar22 = (byte*)0x0;
            }
;
            pbVar9 = (byte*)quotearg_style(4, __file);
            uVar15 = dcgettext(0, "error reading %s", 5);
            pbVar22 = (byte*)0x0;
            error(0, *piVar8, uVar15);
            LAB_0010219d:free(pcVar23);
         }
 else {
            LAB_00101cd5:uVar28 = 0;
            pcVar11 = (char*)xmalloc(0x2020);
            for (int i = 0; i < 8; i++) {
               pcVar11[( i + 8216 )] = '\0';
            }

            *(undefined1(*) [16])( pcVar11 + 0x2008 ) = (undefined1[16])0x0;
            pcVar23 = (char*)xmalloc(0x2020);
            local_128 = local_120;
            local_138 = pcVar11;
            while (sVar7 = safe_read(local_14c, pcVar23, 0x2000),cVar20 = line_end,0 < (long)sVar7) {
               if (local_148 == 0) {
                  local_128 = local_128 + sVar7;
                  xwrite_stdout(pcVar23, sVar7);
               }
 else {
                  iVar5 = (int)line_end;
                  for (int i = 0; i < 8; i++) {
                     pcVar23[( i + 8208 )] = '\0';
                  }

                  *(size_t*)( pcVar23 + 0x2008 ) = sVar7;
                  for (int i = 0; i < 8; i++) {
                     pcVar23[( i + 8216 )] = '\0';
                  }

                  pcVar23[sVar7] = cVar20;
                  pcVar12 = pcVar23;
                  lVar27 = *(long*)( pcVar23 + 0x2010 );
                  while (true) {
                     pcVar12 = (char*)rawmemchr(pcVar12, iVar5);
                     if (pcVar23 + sVar7 <= pcVar12) break;
                     *(long*)( pcVar23 + 0x2010 ) = lVar27 + 1;
                     pcVar12 = pcVar12 + 1;
                     lVar27 = lVar27 + 1;
                  }
;
                  uVar28 = uVar28 + lVar27;
                  if (*(size_t*)( pcVar23 + 0x2008 ) + *(long*)( local_138 + 0x2008 ) < 0x2000) {
                     memcpy(local_138 + *(long*)( local_138 + 0x2008 ), pcVar23, *(size_t*)( pcVar23 + 0x2008 ));
                     lVar27 = *(long*)( pcVar23 + 0x2010 );
                     *(long*)( local_138 + 0x2008 ) = *(long*)( pcVar23 + 0x2008 ) + *(long*)( local_138 + 0x2008 );
                     *(long*)( local_138 + 0x2010 ) = lVar27 + *(long*)( local_138 + 0x2010 );
                  }
 else {
                     *(char**)( local_138 + 0x2018 ) = pcVar23;
                     local_138 = pcVar23;
                     if (local_148 < uVar28 - *(long*)( pcVar11 + 0x2010 )) {
                        sVar7 = *(size_t*)( pcVar11 + 0x2008 );
                        local_128 = local_128 + sVar7;
                        if (sVar7 != 0) {
                           xwrite_stdout(pcVar11, sVar7);
                        }

                        uVar28 = uVar28 - *(long*)( pcVar11 + 0x2010 );
                        pcVar23 = pcVar11;
                        pcVar11 = *(char**)( pcVar11 + 0x2018 );
                     }
 else {
                        pcVar23 = (char*)xmalloc(0x2020);
                     }

                  }

               }

            }
;
            free(pcVar23);
            if (sVar7 == 0) {
               if (( *(long*)( local_138 + 0x2008 ) != 0 ) && ( pbVar9 = (byte*)(ulong)(byte)line_end ),local_138[*(long*)( local_138 + 0x2008 ) + -1] != line_end) {
                  *(long*)( local_138 + 0x2010 ) = *(long*)( local_138 + 0x2010 ) + 1;
                  uVar28 = uVar28 + 1;
               }

               uVar13 = uVar28 - *(long*)( pcVar11 + 0x2010 );
               pcVar23 = pcVar11;
               while (local_148 < uVar13) {
                  sVar7 = *(size_t*)( pcVar23 + 0x2008 );
                  local_128 = local_128 + sVar7;
                  if (sVar7 != 0) {
                     xwrite_stdout(pcVar23, sVar7);
                  }

                  uVar28 = uVar28 - *(long*)( pcVar23 + 0x2010 );
                  pcVar23 = *(char**)( pcVar23 + 0x2018 );
                  uVar13 = uVar28 - *(long*)( pcVar23 + 0x2010 );
               }
;
               if (local_148 < uVar28) {
                  lVar29 = uVar28 - local_148;
                  iVar5 = (int)line_end;
                  lVar27 = *(long*)( pcVar23 + 0x2008 );
                  pcVar12 = pcVar23;
                  do {
                     pcVar12 = (char*)memchr(pcVar12, iVar5, (size_t)( pcVar23 + ( lVar27 - (long)pcVar12 ) ));
                     if (pcVar12 == (char*)0x0) break;
                     *(long*)( pcVar23 + 0x2010 ) = *(long*)( pcVar23 + 0x2010 ) + 1;
                     pcVar12 = pcVar12 + 1;
                     lVar29 = lVar29 + -1;
                  }
 while ( lVar29 != 0 );
                  sVar7 = (long)pcVar12 - (long)pcVar23;
                  if (sVar7 != 0) {
                     xwrite_stdout(pcVar23, sVar7);
                  }

                  local_128 = local_128 + sVar7;
               }

               pbVar22 = (byte*)(ulong)local_12b;
            }
 else {
               pbVar9 = (byte*)quotearg_style(4, __file);
               uVar15 = dcgettext(0, "error reading %s", 5);
               piVar8 = __errno_location();
               pbVar22 = (byte*)0x0;
               error(0, *piVar8, uVar15);
               if (pcVar11 == (char*)0x0) goto LAB_00101c9a;
            }

            do {
               pcVar23 = *(char**)( pcVar11 + 0x2018 );
               free(pcVar11);
               pcVar11 = pcVar23;
            }
 while ( pcVar23 != (char*)0x0 );
         }

         goto LAB_00101c9a;
      }

      if (local_12a == false) {
         _Var2 = head_bytes((char*)__file, local_14c, local_148);
         pbVar22 = (byte*)(ulong)_Var2;
      }
 else {
         _Var2 = head_lines((char*)__file, local_14c, local_148);
         pbVar22 = (byte*)(ulong)_Var2;
      }

      goto LAB_00101a5c;
   }

   local_14c = open((char*)__file, 0);
   if (-1 < local_14c) goto LAB_00101863;
   pbVar9 = (byte*)quotearg_style(4, __file);
   pcVar23 = "cannot open %s for reading";
   goto LAB_00101b76;
   LAB_00101991:piVar8 = __errno_location();
   if (*piVar8 == 0) {
      bVar16 = uVar21 + 1 == uVar28 | bVar30;
      pbVar17 = (byte*)CONCAT71(( int7 )(uVar13 >> 8), bVar16);
      pbVar22 = (byte*)( (ulong)pbVar17 & 0xffffffff );
      if (bVar16 == 0) {
         if (uVar25 + 1 == uVar28) {
            sVar7 = sVar7 - (long)pbVar9;
            if (sVar7 != 0) {
               xwrite_stdout((char*)__ptr_00[uVar28 % uVar28], sVar7);
            }

            local_128 = local_128 + sVar7;
         }

         pbVar9 = pbVar17;
         pbVar22 = (byte*)(ulong)local_12b;
      }
 else {
         if (sVar7 != 0) {
            local_128 = local_128 + sVar7;
            xwrite_stdout((char*)__ptr_00[uVar25], sVar7);
         }

         n_bytes_00 = 0x2000 - (long)pbVar9;
         if ((long)sVar7 < (long)pbVar9) {
            xwrite_stdout((char*)( __ptr_00[uVar25] + sVar7 ), n_bytes_00);
         }
 else {
            n_bytes = sVar7 - (long)pbVar9;
            xwrite_stdout((char*)( __ptr_00[uVar25] + sVar7 ), 0x2000 - sVar7);
            if (n_bytes != 0) {
               xwrite_stdout((char*)__ptr_00[( uVar25 + 1 ) % uVar28], n_bytes);
            }

         }

         local_128 = local_128 + n_bytes_00;
      }

   }
 else {
      pbVar9 = (byte*)quotearg_style(4, __file);
      uVar15 = dcgettext(0, "error reading %s", 5);
      pbVar22 = (byte*)0x0;
      error(0, *piVar8, uVar15);
   }

   if (local_118 != 0) {
      puVar26 = __ptr_00;
      do {
         __ptr = (void*)*puVar26;
         puVar26 = puVar26 + 1;
         free(__ptr);
      }
 while ( __ptr_00 + local_118 != puVar26 );
   }

   free(__ptr_00);
   LAB_00101c9a:if (( local_120 != -1 ) && ( _Var10 = _Var10 < 0 )) {
      elseek((int)local_128, 0, (int)__file, (char*)pbVar9);
      pbVar22 = (byte*)0x0;
   }

   LAB_00101a5c:bVar16 = (byte)pbVar22;
   if (( local_130 != 0 ) && ( iVar5 = iVar5 != 0 )) {
      pbVar9 = (byte*)quotearg_style(4, __file);
      pcVar23 = "failed to close %s";
      LAB_00101b76:uVar15 = dcgettext(0, pcVar23, 5);
      piVar8 = __errno_location();
      bVar16 = 0;
      error(0, *piVar8, uVar15);
   }

   local_129 = local_129 & bVar16;
   __file = (byte*)*local_140;
   if (__file == (byte*)0x0) goto LAB_00101a85;
   goto LAB_00101820;
}

