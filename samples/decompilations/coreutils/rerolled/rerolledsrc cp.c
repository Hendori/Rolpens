/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */void decode_preserve_arg(char *arg, cp_options *x, _Bool on_off) {
   char *__s;
   char *pcVar1;
   long lVar2;
   char *pcVar3;
   pcVar3 = "--preserve";
   __s = (char*)xstrdup();
   if (!on_off) {
      pcVar3 = "--no-preserve";
   }

   pcVar1 = strchr(__s, 0x2c);
   if (pcVar1 != (char*)0x0) {
      *pcVar1 = '\0';
   }

   lVar2 = __xargmatch_internal(pcVar3, __s, decode_preserve_arg::preserve_args, decode_preserve_arg::preserve_vals, 4, _argmatch_die);
   if (decode_preserve_arg::preserve_vals[lVar2] < ( PRESERVE_ALL | PRESERVE_TIMESTAMPS )) {
      /* WARNING: Could not recover jumptable at 0x001000cd. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *(code*)( &DAT_00101d60 + *(int*)( &DAT_00101d60 + (ulong)decode_preserve_arg::preserve_vals[lVar2] * 4 ) ) )();
      return;
   }

   /* WARNING: Subroutine does not return */
   __assert_fail("0", "src/cp.c", 0x3c5, "decode_preserve_arg");
}
/* WARNING: Unknown calling convention */_Bool make_dir_parents_private(char *const_dir, size_t src_offset, int dst_dirfd, char *verbose_fmt_string, dir_attr **attr_list, _Bool *new_dst, cp_options *x) {
   short sVar1;
   __mode_t _Var2;
   long lVar3;
   dir_attr *pdVar4;
   long lVar5;
   _Bool _Var6;
   char cVar7;
   int iVar8;
   int iVar9;
   uint uVar10;
   ulong uVar11;
   size_t sVar12;
   ulong uVar13;
   char *pcVar14;
   int *piVar15;
   dir_attr *pdVar16;
   undefined8 uVar17;
   undefined8 uVar18;
   uint uVar19;
   char **ppcVar20;
   undefined1 *puVar21;
   char **ppcVar22;
   undefined1 *puVar24;
   char *pcVar26;
   uint uVar27;
   long in_FS_OFFSET;
   char *local_1a8;
   stat *local_1a0;
   dir_attr **local_198;
   stat *local_190;
   _Bool *local_188;
   ulong local_180;
   char *local_178;
   int local_16c;
   stat stats;
   stat src_st;
   char **ppcVar23;
   undefined1 *puVar25;
   ppcVar23 = &local_1a8;
   ppcVar22 = &local_1a8;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   local_1a8 = verbose_fmt_string;
   local_198 = attr_list;
   local_188 = new_dst;
   local_16c = dst_dirfd;
   uVar11 = dir_len();
   *attr_list = (dir_attr*)0x0;
   ppcVar20 = &local_1a8;
   if (src_offset < uVar11) {
      sVar12 = strlen(const_dir);
      ppcVar20 = &local_1a8;
      while (ppcVar23 != (char**)( (long)&local_1a8 - ( sVar12 + 0x18 & 0xfffffffffffff000 ) )) {
         ppcVar22 = (char**)( (long)ppcVar20 + -0x1000 );
         *(undefined8*)( (long)ppcVar20 + -8 ) = *(undefined8*)( (long)ppcVar20 + -8 );
         ppcVar23 = (char**)( (long)ppcVar20 + -0x1000 );
         ppcVar20 = (char**)( (long)ppcVar20 + -0x1000 );
      }
;
      uVar13 = ( ulong )(( uint )(sVar12 + 0x18) & 0xff0);
      lVar5 = -uVar13;
      puVar24 = (undefined1*)( (long)ppcVar22 + lVar5 );
      puVar25 = (undefined1*)( (long)ppcVar22 + lVar5 );
      if (uVar13 != 0) {
         *(undefined8*)( (long)ppcVar22 + -8 ) = *(undefined8*)( (long)ppcVar22 + -8 );
      }

      *(undefined8*)( (long)ppcVar22 + lVar5 + -8 ) = 0x1002b3;
      local_180 = __memcpy_chk(( ulong )((long)ppcVar22 + lVar5 + 0xf) & 0xfffffffffffffff0, const_dir, sVar12 + 1, sVar12 + 1);
      puVar21 = (undefined1*)( (long)ppcVar22 + lVar5 );
      while (puVar24 != (undefined1*)( (long)ppcVar22 + ( lVar5 - ( uVar11 + 0x18 & 0xfffffffffffff000 ) ) )) {
         puVar25 = puVar21 + -0x1000;
         *(undefined8*)( puVar21 + -8 ) = *(undefined8*)( puVar21 + -8 );
         puVar24 = puVar21 + -0x1000;
         puVar21 = puVar21 + -0x1000;
      }
;
      uVar13 = ( ulong )(( uint )(uVar11 + 0x18) & 0xff0);
      lVar5 = -uVar13;
      ppcVar20 = (char**)( puVar25 + lVar5 );
      puVar21 = puVar25 + lVar5;
      if (uVar13 != 0) {
         *(undefined8*)( puVar25 + -8 ) = *(undefined8*)( puVar25 + -8 );
      }

      uVar13 = ( ulong )(puVar25 + lVar5 + 0xf) & 0xfffffffffffffff0;
      *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x100326;
      __memcpy_chk(uVar13, local_180, uVar11);
      pcVar26 = (char*)( uVar13 + src_offset );
      *(undefined1*)( uVar13 + uVar11 ) = 0;
      cVar7 = *pcVar26;
      while (cVar7 == '/') {
         pcVar26 = pcVar26 + 1;
         cVar7 = *pcVar26;
      }
;
      local_190 = &stats;
      *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x100367;
      iVar8 = fstatat(local_16c, pcVar26, (stat*)local_190, 0);
      if (iVar8 == 0) {
         if (( stats.st_mode & 0xf000 ) != 0x4000) {
            LAB_001007a9:*(undefined8*)( puVar25 + lVar5 + -8 ) = 0x1007b3;
            uVar17 = quotearg_style(4, uVar13);
            *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x1007c9;
            uVar18 = dcgettext(0, "%s exists but is not a directory", 5);
            *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x1007da;
            error(0, 0, uVar18, uVar17);
            _Var6 = false;
            puVar21 = puVar25 + lVar5;
            goto LAB_00100221;
         }

         *local_188 = false;
      }
 else {
         local_178 = (char*)( local_180 + src_offset );
         cVar7 = *local_178;
         pcVar26 = local_178;
         while (cVar7 == '/') {
            pcVar26 = pcVar26 + 1;
            cVar7 = *pcVar26;
         }
;
         local_1a0 = &src_st;
         pcVar14 = pcVar26;
         while (true) {
            *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x1003ba;
            pcVar14 = strchr(pcVar14, 0x2f);
            ppcVar20 = (char**)( puVar25 + lVar5 );
            if (pcVar14 == (char*)0x0) break;
            *pcVar14 = '\0';
            *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x1003e0;
            iVar8 = fstatat(local_16c, pcVar26, (stat*)local_190, 0);
            if (( ( iVar8 != 0 ) || ( x.preserve_ownership != false ) ) || ( sVar1._0_1_ = x.preserve_mode ),sVar1._1_1_ = x.preserve_timestamps,sVar1 != 0) {
               *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x1004b3;
               iVar9 = stat(local_178, (stat*)local_1a0);
               if (iVar9 != 0) {
                  *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x1004c0;
                  piVar15 = __errno_location();
                  iVar9 = *piVar15;
                  if (*piVar15 == 0) goto LAB_001004cc;
                  LAB_001006c4:local_16c = iVar9;
                  *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x1006dc;
                  uVar17 = quotearg_style(4, local_178);
                  *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x1006f2;
                  uVar18 = dcgettext(0, "failed to get attributes of %s", 5);
                  *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x100707;
                  error(0, local_16c, uVar18, uVar17);
                  goto LAB_00100707;
               }

               if (( src_st.st_mode & 0xf000 ) != 0x4000) {
                  iVar9 = 0x14;
                  goto LAB_001006c4;
               }

               LAB_001004cc:*(undefined8*)( puVar25 + lVar5 + -8 ) = 0x1004d6;
               pdVar16 = (dir_attr*)xmalloc(0xa8);
               ( pdVar16.st ).st_dev = src_st.st_dev;
               ( pdVar16.st ).st_ino = src_st.st_ino;
               ( pdVar16.st ).st_nlink = src_st.st_nlink;
               ( pdVar16.st ).st_mode = (int)CONCAT44(src_st.st_uid, src_st.st_mode);
               ( pdVar16.st ).st_uid = (int)( CONCAT44(src_st.st_uid, src_st.st_mode) >> 0x20 );
               ( pdVar16.st ).st_gid = src_st.st_gid;
               ( pdVar16.st ).__pad0 = src_st.__pad0;
               ( pdVar16.st ).st_rdev = src_st.st_rdev;
               ( pdVar16.st ).st_size = src_st.st_size;
               ( pdVar16.st ).st_blksize = src_st.st_blksize;
               ( pdVar16.st ).st_blocks = src_st.st_blocks;
               ( pdVar16.st ).st_atim.tv_sec = src_st.st_atim.tv_sec;
               ( pdVar16.st ).st_atim.tv_nsec = src_st.st_atim.tv_nsec;
               ( pdVar16.st ).st_mtim.tv_sec = src_st.st_mtim.tv_sec;
               ( pdVar16.st ).st_mtim.tv_nsec = src_st.st_mtim.tv_nsec;
               ( pdVar16.st ).st_ctim.tv_sec = src_st.st_ctim.tv_sec;
               ( pdVar16.st ).st_ctim.tv_nsec = src_st.st_ctim.tv_nsec;
               for (int i = 0; i < 3; i++) {
                  ( pdVar16.st ).__glibc_reserved[i] = src_st.__glibc_reserved[i];
               }

               pdVar16.restore_mode = false;
               pdVar16.slash_offset = (long)pcVar14 - local_180;
               pdVar4 = *local_198;
               *local_198 = pdVar16;
               pdVar16.next = pdVar4;
               if (iVar8 == 0) goto LAB_00100404;
               _Var2 = ( pdVar16.st ).st_mode;
               *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x10058c;
               cVar7 = set_process_security_ctx(local_178, local_180, _Var2, 1, x);
               if (cVar7 == '\0') goto LAB_00100707;
               uVar10 = ( pdVar16.st ).st_mode;
               *local_188 = true;
               if (x.preserve_ownership == false) {
                  if (x.preserve_mode == false) {
                     uVar19 = 0xffffffff;
                     uVar27 = 0;
                  }
 else {
                     uVar27 = uVar10 & 0x12;
                     uVar19 = ~uVar27;
                  }

               }
 else {
                  uVar27 = uVar10 & 0x3f;
                  uVar19 = ~uVar27;
               }

               if (x.explicit_no_preserve_mode != false) {
                  uVar10 = 0x1ff;
               }

               *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x1005de;
               iVar8 = mkdirat(local_16c, pcVar26, uVar10 & uVar19 & 0xfff);
               if (iVar8 == 0) {
                  if (local_1a8 != (char*)0x0) {
                     *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x10060f;
                     __printf_chk(2, local_1a8, local_178, local_180);
                  }

                  *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x100629;
                  iVar8 = fstatat(local_16c, pcVar26, (stat*)local_190, 0x100);
                  if (iVar8 == 0) {
                     if (x.preserve_mode == false) {
                        if (( ~stats.st_mode & uVar27 ) == 0) {
                           LAB_0010064c:if (( ~stats.st_mode & 0x1c0 ) == 0) goto LAB_00100667;
                        }
 else {
                           *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x100746;
                           uVar10 = cached_umask();
                           uVar27 = uVar27 & ~uVar10;
                           if (( ~stats.st_mode & uVar27 ) == 0) goto LAB_0010064c;
                        }

                        pdVar16.restore_mode = true;
                        ( pdVar16.st ).st_mode = uVar27 | stats.st_mode;
                     }

                     LAB_00100667:if (( stats.st_mode | 0x1c0 ) != stats.st_mode) {
                        *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x100686;
                        iVar8 = fchmodat(local_16c, pcVar26, stats.st_mode | 0x1c0, 0x100);
                        if (iVar8 != 0) {
                           *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x1007f7;
                           uVar17 = quotearg_style(4, local_180);
                           *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x10080d;
                           uVar18 = dcgettext(0, "setting permissions for %s", 5);
                           *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x100815;
                           piVar15 = __errno_location();
                           iVar8 = *piVar15;
                           *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x100826;
                           error(0, iVar8, uVar18, uVar17);
                           _Var6 = false;
                           puVar21 = puVar25 + lVar5;
                           goto LAB_00100221;
                        }

                     }

                     if (*local_188 == false) goto LAB_00100446;
                     goto LAB_00100478;
                  }

                  *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x10088a;
                  uVar17 = quotearg_style(4, local_180);
                  pcVar26 = "failed to get attributes of %s";
               }
 else {
                  *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x100843;
                  uVar17 = quotearg_style(4, local_180);
                  pcVar26 = "cannot make directory %s";
               }

               *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x100859;
               uVar18 = dcgettext(0, pcVar26, 5);
               *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x100861;
               piVar15 = __errno_location();
               iVar8 = *piVar15;
               *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x100872;
               error(0, iVar8, uVar18, uVar17);
               _Var6 = false;
               goto LAB_00100221;
            }

            LAB_00100404:*(undefined8*)( puVar25 + lVar5 + -8 ) = 0x10041e;
            cVar7 = set_process_security_ctx(local_178, local_180, 0, 0, x);
            if (cVar7 == '\0') {
               LAB_00100707:_Var6 = false;
               puVar21 = puVar25 + lVar5;
               goto LAB_00100221;
            }

            uVar13 = local_180;
            if (( stats.st_mode & 0xf000 ) != 0x4000) goto LAB_001007a9;
            *local_188 = false;
            LAB_00100446:if (( x.set_security_context != (selabel_handle*)0x0 ) || ( x.preserve_security_context != false )) {
               *(undefined8*)( puVar25 + lVar5 + -8 ) = 0x100463;
               cVar7 = set_file_security_ctx(local_180, 0, x);
               if (( cVar7 == '\0' ) && ( x.require_preserve_context != false )) goto LAB_00100707;
            }

            LAB_00100478:cVar7 = pcVar14[1];
            *pcVar14 = '/';
            pcVar14 = pcVar14 + 1;
            while (cVar7 == '/') {
               pcVar14 = pcVar14 + 1;
               cVar7 = *pcVar14;
            }
;
         }
;
      }

   }

   _Var6 = true;
   puVar21 = (undefined1*)ppcVar20;
   LAB_00100221:if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return _Var6;
   }

   /* WARNING: Subroutine does not return */
   *(undefined8*)( puVar21 + -8 ) = 0x100832;
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */_Bool re_protect(char *const_dst_name, char *dst_src_name, int dst_dirfd, char *dst_relname, dir_attr *attr_list, cp_options *x) {
   __mode_t _Var1;
   __gid_t _Var2;
   __uid_t __owner;
   __mode_t __mode;
   long lVar3;
   long lVar4;
   timespec **pptVar5;
   char cVar6;
   _Bool _Var7;
   int iVar8;
   size_t sVar9;
   long lVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   int *piVar13;
   ulong uVar14;
   timespec **pptVar15;
   char *pcVar17;
   long in_FS_OFFSET;
   timespec *local_78;
   char *local_70;
   timespec timespec[2];
   timespec **pptVar16;
   pptVar15 = &local_78;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = (timespec*)dst_relname;
   local_70 = dst_src_name;
   sVar9 = strlen(const_dst_name);
   pptVar16 = &local_78;
   pptVar5 = &local_78;
   while (pptVar16 != (timespec**)( (long)&local_78 - ( sVar9 + 0x18 & 0xfffffffffffff000 ) )) {
      pptVar15 = (timespec**)( (long)pptVar5 + -0x1000 );
      *(undefined8*)( (long)pptVar5 + -8 ) = *(undefined8*)( (long)pptVar5 + -8 );
      pptVar16 = (timespec**)( (long)pptVar5 + -0x1000 );
      pptVar5 = (timespec**)( (long)pptVar5 + -0x1000 );
   }
;
   uVar14 = ( ulong )(( uint )(sVar9 + 0x18) & 0xff0);
   lVar4 = -uVar14;
   if (uVar14 != 0) {
      *(undefined8*)( (long)pptVar15 + -8 ) = *(undefined8*)( (long)pptVar15 + -8 );
   }

   *(undefined8*)( (long)pptVar15 + lVar4 + -8 ) = 0x100937;
   lVar10 = __memcpy_chk(( ulong )((long)pptVar15 + lVar4 + 0xf) & 0xfffffffffffffff0, const_dst_name, sVar9 + 1);
   local_70 = local_70 + ( lVar10 - (long)const_dst_name );
   pcVar17 = (char*)( (long)local_78 + ( lVar10 - (long)const_dst_name ) );
   if (attr_list != (dir_attr*)0x0) {
      local_78 = (timespec*)timespec;
      do {
         _Var7 = x.preserve_timestamps;
         *(undefined1*)( lVar10 + attr_list.slash_offset ) = 0;
         if (_Var7 != false) {
            timespec[0].tv_sec = ( attr_list.st ).st_atim.tv_sec;
            timespec[0].tv_nsec = ( attr_list.st ).st_atim.tv_nsec;
            timespec[1].tv_sec = ( attr_list.st ).st_mtim.tv_sec;
            timespec[1].tv_nsec = ( attr_list.st ).st_mtim.tv_nsec;
            *(undefined8*)( (long)pptVar15 + lVar4 + -8 ) = 0x1009e5;
            iVar8 = utimensat(dst_dirfd, pcVar17, local_78, 0);
            if (iVar8 == 0) goto LAB_00100970;
            *(undefined8*)( (long)pptVar15 + lVar4 + -8 ) = 0x1009f6;
            uVar11 = quotearg_style(4, lVar10);
            pcVar17 = "failed to preserve times for %s";
            LAB_00100ac8:*(undefined8*)( (long)pptVar15 + lVar4 + -8 ) = 0x100acf;
            uVar12 = dcgettext(0, pcVar17, 5);
            *(undefined8*)( (long)pptVar15 + lVar4 + -8 ) = 0x100ad7;
            piVar13 = __errno_location();
            iVar8 = *piVar13;
            *(undefined8*)( (long)pptVar15 + lVar4 + -8 ) = 0x100ae8;
            error(0, iVar8, uVar12, uVar11);
            _Var7 = false;
            goto LAB_00100af5;
         }

         LAB_00100970:if (x.preserve_ownership != false) {
            _Var2 = ( attr_list.st ).st_gid;
            __owner = ( attr_list.st ).st_uid;
            *(undefined8*)( (long)pptVar15 + lVar4 + -8 ) = 0x100a59;
            iVar8 = fchownat(dst_dirfd, pcVar17, __owner, _Var2, 0x100);
            if (iVar8 != 0) {
               *(undefined8*)( (long)pptVar15 + lVar4 + -8 ) = 0x100a69;
               cVar6 = chown_failure_ok(x);
               if (cVar6 == '\0') {
                  *(undefined8*)( (long)pptVar15 + lVar4 + -8 ) = 0x100b2b;
                  uVar11 = quotearg_style(4, lVar10);
                  pcVar17 = "failed to preserve ownership for %s";
                  goto LAB_00100ac8;
               }

               _Var2 = ( attr_list.st ).st_gid;
               *(undefined8*)( (long)pptVar15 + lVar4 + -8 ) = 0x100a8b;
               fchownat(dst_dirfd, pcVar17, 0xffffffff, _Var2, 0x100);
            }

         }

         if (x.preserve_mode == false) {
            if (attr_list.restore_mode != false) {
               __mode = ( attr_list.st ).st_mode;
               *(undefined8*)( (long)pptVar15 + lVar4 + -8 ) = 0x100aa4;
               iVar8 = fchmodat(dst_dirfd, pcVar17, __mode, 0x100);
               if (iVar8 != 0) {
                  *(undefined8*)( (long)pptVar15 + lVar4 + -8 ) = 0x100ab9;
                  uVar11 = quotearg_style(4, lVar10);
                  pcVar17 = "failed to preserve permissions for %s";
                  goto LAB_00100ac8;
               }

            }

         }
 else {
            _Var1 = ( attr_list.st ).st_mode;
            *(undefined8*)( (long)pptVar15 + lVar4 + -8 ) = 0x100a2a;
            iVar8 = xcopy_acl(local_70, 0xffffffff, lVar10, 0xffffffff, _Var1);
            if (iVar8 != 0) {
               _Var7 = false;
               goto LAB_00100af5;
            }

         }

         *(undefined1*)( lVar10 + attr_list.slash_offset ) = 0x2f;
         attr_list = attr_list.next;
      }
 while ( attr_list != (dir_attr*)0x0 );
   }

   _Var7 = true;
   LAB_00100af5:if (lVar3 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      *(undefined**)( (long)pptVar15 + lVar4 + -8 ) = &UNK_00100b41;
      __stack_chk_fail();
   }

   return _Var7;
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
      goto LAB_00100ba9;
   }

   uVar3 = dcgettext(0, "Usage: %s [OPTION]... [-T] SOURCE DEST\n  or:  %s [OPTION]... SOURCE... DIRECTORY\n  or:  %s [OPTION]... -t DIRECTORY SOURCE...\n", 5);
   __printf_chk(2, uVar3, uVar5, uVar5, uVar5);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "  -a, --archive                same as -dR --preserve=all\n      --attributes-only        don\'t copy the file data, just the attributes\n      --backup[=CONTROL]       make a backup of each existing destination file\n  -b                           like --backup but does not accept an argument\n      --copy-contents          copy contents of special files when recursive\n  -d                           same as --no-dereference --preserve=links\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "      --debug                  explain how a file is copied.  Implies -v\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "  -f, --force                  if an existing destination file cannot be\n                                 opened, remove it and try again (this option\n                                 is ignored when the -n option is also used)\n  -i, --interactive            prompt before overwrite (overrides a previous -n\n                                  option)\n  -H                           follow command-line symbolic links in SOURCE\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "  -l, --link                   hard link files instead of copying\n  -L, --dereference            always follow symbolic links in SOURCE\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "  -n, --no-clobber             (deprecated) silently skip existing files.\n                                 See also --update\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "  -P, --no-dereference         never follow symbolic links in SOURCE\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "  -p                           same as --preserve=mode,ownership,timestamps\n      --preserve[=ATTR_LIST]   preserve the specified attributes\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "      --no-preserve=ATTR_LIST  don\'t preserve the specified attributes\n      --parents                use full source file name under DIRECTORY\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "  -R, -r, --recursive          copy directories recursively\n      --reflink[=WHEN]         control clone/CoW copies. See below\n      --remove-destination     remove each existing destination file before\n                                 attempting to open it (contrast with --force)\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "      --sparse=WHEN            control creation of sparse files. See below\n      --strip-trailing-slashes  remove any trailing slashes from each SOURCE\n                                 argument\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "  -s, --symbolic-link          make symbolic links instead of copying\n  -S, --suffix=SUFFIX          override the usual backup suffix\n  -t, --target-directory=DIRECTORY  copy all SOURCE arguments into DIRECTORY\n  -T, --no-target-directory    treat DEST as a normal file\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "      --update[=UPDATE]        control which existing files are updated;\n                                 UPDATE={all,none,none-fail,older(default)}\n  -u                           equivalent to --update[=older].  See below\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "  -v, --verbose                explain what is being done\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "      --keep-directory-symlink  follow existing symlinks to directories\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "  -x, --one-file-system        stay on this file system\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "  -Z                           set SELinux security context of destination\n                                 file to default type\n      --context[=CTX]          like -Z, or if CTX is specified then set the\n                                 SELinux or SMACK security context to CTX\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "      --help        display this help and exit\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "      --version     output version information and exit\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "\nATTR_LIST is a comma-separated list of attributes. Attributes are \'mode\' for\npermissions (including any ACL and xattr permissions), \'ownership\' for user\nand group, \'timestamps\' for file timestamps, \'links\' for hard links, \'context\'\nfor security context, \'xattr\' for extended attributes, and \'all\' for all\nattributes.\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "\nBy default, sparse SOURCE files are detected by a crude heuristic and the\ncorresponding DEST file is made sparse as well.  That is the behavior\nselected by --sparse=auto.  Specify --sparse=always to create a sparse DEST\nfile whenever the SOURCE file contains a long enough sequence of zero bytes.\nUse --sparse=never to inhibit creation of sparse files.\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "\nUPDATE controls which existing files in the destination are replaced.\n\'all\' is the default operation when an --update option is not specified,\nand results in all existing files in the destination being replaced.\n\'none\' is like the --no-clobber option, in that no files in the\ndestination are replaced, and skipped files do not induce a failure.\n\'none-fail\' also ensures no files are replaced in the destination,\nbut any skipped files are diagnosed and induce a failure.\n\'older\' is the default operation when --update is specified, and results\nin files being replaced if they\'re older than the corresponding source file.\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "\nWhen --reflink[=always] is specified, perform a lightweight copy, where the\ndata blocks are copied only when modified.  If this is not possible the copy\nfails, or if --reflink=auto is specified, fall back to a standard copy.\nUse --reflink=never to ensure a standard copy is performed.\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "\nThe backup suffix is \'~\', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "\nAs a special case, cp makes a backup of SOURCE when the force and backup\noptions are given and SOURCE and DEST are the same name for an existing,\nregular file.\n", 5);
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
      if (( ( *pcVar4 == 'c' ) && ( pcVar4[1] == 'p' ) ) && ( pcVar4[2] == '\0' )) break;
      pcVar4 = *(char**)( (long)piVar6 + 0x10 );
      piVar6 = (infomap*)( (long)piVar6 + 0x10 );
   }
 while ( pcVar4 != (char*)0x0 );
   puVar7 = *(undefined1**)( (long)piVar6 + 8 );
   if (puVar7 == (undefined1*)0x0) {
      uVar5 = dcgettext(0, "\n%s online help: <%s>\n", 5);
      puVar7 = &_LC12;
      __printf_chk(2, uVar5, "GNU coreutils", "https://www.gnu.org/software/coreutils/");
      pcVar4 = setlocale(5, (char*)0x0);
      if (pcVar4 != (char*)0x0) goto LAB_001010f4;
      uVar5 = dcgettext(0, "Full documentation <%s%s>\n", 5);
      pcVar4 = " invocation";
      __printf_chk(2, uVar5, "https://www.gnu.org/software/coreutils/", &_LC12);
   }
 else {
      uVar5 = dcgettext(0, "\n%s online help: <%s>\n", 5);
      __printf_chk(2, uVar5, "GNU coreutils", "https://www.gnu.org/software/coreutils/");
      pcVar4 = setlocale(5, (char*)0x0);
      if (pcVar4 != (char*)0x0) {
         LAB_001010f4:iVar2 = strncmp(pcVar4, "en_", 3);
         pFVar1 = _stdout;
         if (iVar2 != 0) {
            pcVar4 = (char*)dcgettext(0, "Report any translation bugs to <https://translationproject.org/team/>\n", 5);
            fputs_unlocked(pcVar4, pFVar1);
         }

      }

      uVar5 = dcgettext(0, "Full documentation <%s%s>\n", 5);
      pcVar4 = "";
      __printf_chk(2, uVar5, "https://www.gnu.org/software/coreutils/", &_LC12);
      if (puVar7 == &_LC12) {
         pcVar4 = " invocation";
      }

   }

   uVar5 = dcgettext(0, "or available locally via: info \'(coreutils) %s%s\'\n", 5);
   __printf_chk(2, uVar5, puVar7, pcVar4);
   LAB_00100ba9:/* WARNING: Subroutine does not return */exit(status);
}
/* WARNING: Unknown calling convention */_Bool do_copy(int n_files, char **file, char *target_directory, _Bool no_target_directory, cp_options *x) {
   char cVar1;
   long lVar2;
   EVP_PKEY_CTX *pEVar3;
   dir_attr *pdVar4;
   long lVar5;
   dir_attr *__ptr;
   _Bool _Var6;
   int iVar7;
   uint uVar8;
   size_t sVar9;
   undefined8 uVar10;
   EVP_PKEY_CTX *pEVar11;
   byte *pbVar12;
   undefined8 uVar13;
   int *piVar14;
   char *pcVar15;
   ulong uVar16;
   char *extraout_RDX;
   undefined1 *puVar17;
   char **ppcVar18;
   char **ppcVar19;
   char **ppcVar20;
   cp_options *pcVar21;
   cp_options *pcVar22;
   undefined1 uVar23;
   long lVar24;
   uint uVar25;
   long in_FS_OFFSET;
   byte bVar26;
   char *local_128;
   char **local_120;
   char *local_118;
   char *local_110;
   cp_options *local_108;
   char *local_100;
   _Bool new_dst;
   _Bool copy_into_self;
   dir_attr *attr_list;
   char *arg_in_concat;
   stat sb;
   bVar26 = 0;
   ppcVar20 = &local_128;
   ppcVar18 = &local_128;
   ppcVar19 = &local_128;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   new_dst = false;
   local_108 = x;
   if ((int)( uint )(target_directory == (char*)0x0) < n_files) {
      sb.st_mode = 0;
      if (!no_target_directory) {
         if (target_directory == (char*)0x0) {
            local_118 = (char*)CONCAT44(local_118._4_4_, n_files);
            local_100 = file[(long)n_files + -1];
            iVar7 = target_directory_operand(local_100, &sb);
            local_110 = (char*)CONCAT44(local_110._4_4_, iVar7);
            if (iVar7 == -1) {
               local_110 = local_100;
               local_100 = (char*)CONCAT44(local_100._4_4_, (int)local_118);
               piVar14 = __errno_location();
               uVar16 = (ulong)local_100 & 0xffffffff;
               iVar7 = *piVar14;
               pcVar15 = local_110;
               if (iVar7 == 2) goto LAB_001017e6;
               while (2 < (int)uVar16) {
                  uVar10 = quotearg_style(4, pcVar15);
                  uVar13 = dcgettext(0, "target %s", 5);
                  error(1, iVar7, uVar13, uVar10);
                  pcVar15 = extraout_RDX;
                  LAB_001017e6:new_dst = true;
               }
;
            }
 else {
               iVar7 = (int)local_118 + -1;
               if (local_100 != (char*)0x0) {
                  if (1 < iVar7) goto LAB_001016e0;
                  uVar23 = 1;
                  ppcVar19 = &local_128;
                  if (iVar7 == 1) {
                     iVar7 = 1;
                     local_128 = local_100;
                     goto LAB_001012e5;
                  }

                  goto LAB_00101437;
               }

            }

            LAB_0010146e:_Var6 = new_dst;
            pEVar3 = (EVP_PKEY_CTX*)*file;
            pEVar11 = (EVP_PKEY_CTX*)file[1];
            if (parents_option != false) {
               pcVar15 = "with --parents, the destination must be a directory";
               goto LAB_001018c4;
            }

            if (( ( ( ( local_108.unlink_dest_after_failed_open != false ) && ( local_108.backup_type != no_backups ) ) && ( iVar7 = strcmp((char*)pEVar3, (char*)pEVar11) ),iVar7 == 0 ) ) && ( ( _Var6 == false && ( ( sb.st_mode != 0 || ( iVar7 = stat((char*)pEVar11, (stat*)&sb) ),iVar7 == 0 ) ) ) )) {
               pEVar11 = (EVP_PKEY_CTX*)find_backup_file_name(0xffffff9c, pEVar11, local_108.backup_type);
               pcVar22 = &do_copy::lexical_block_11::lexical_block_11_3::x_tmp;
               for (lVar24 = 0x18; lVar24 != 0; lVar24 = lVar24 + -1) {
                  pcVar22.backup_type = pcVar21.backup_type;
                  pcVar21 = (cp_options*)( (long)pcVar21 + (ulong)bVar26 * -8 + 4 );
                  pcVar22 = (cp_options*)( (long)pcVar22 + ( (ulong)bVar26 * -2 + 1 ) * 4 );
               }

               do_copy::lexical_block_11::lexical_block_11_3::x_tmp.backup_type = no_backups;
               local_108 = &do_copy::lexical_block_11::lexical_block_11_3::x_tmp;
            }

            iVar7 = copy(pEVar3, pEVar11);
            uVar23 = (undefined1)iVar7;
         }
 else {
            local_118 = (char*)CONCAT44(local_118._4_4_, n_files);
            local_100 = target_directory;
            iVar7 = target_directory_operand(target_directory, &sb);
            local_110 = (char*)CONCAT44(local_110._4_4_, iVar7);
            if (iVar7 == -1) {
               uVar10 = quotearg_style(4, local_100);
               uVar13 = dcgettext(0, "target directory %s", 5);
               piVar14 = __errno_location();
               error(1, *piVar14, uVar13, uVar10);
               goto LAB_001018ad;
            }

            local_128 = local_100;
            iVar7 = (int)local_118;
            if ((int)local_118 != 1) {
               LAB_001016e0:pcVar21 = local_108;
               local_118 = local_100;
               local_100 = (char*)CONCAT44(local_100._4_4_, iVar7);
               dest_info_init(local_108);
               src_info_init(pcVar21);
               local_128 = local_118;
               iVar7 = (int)local_100;
            }

            LAB_001012e5:local_120 = &arg_in_concat;
            local_100 = (char*)CONCAT44(local_100._4_4_, iVar7);
            lVar24 = 0;
            uVar25 = 1;
            do {
               pEVar3 = (EVP_PKEY_CTX*)file[lVar24];
               if (remove_trailing_slashes != false) {
                  *(undefined8*)( (long)ppcVar18 + -8 ) = 0x1016a0;
                  strip_trailing_slashes(pEVar3);
               }

               if (parents_option == false) {
                  *(undefined8*)( (long)ppcVar18 + -8 ) = 0x10154d;
                  pcVar15 = (char*)last_component();
                  *(undefined8*)( (long)ppcVar18 + -8 ) = 0x101558;
                  sVar9 = strlen(pcVar15);
                  for (puVar17 = (undefined1*)ppcVar18; puVar17 != (undefined1*)( (long)ppcVar18 + -(sVar9 + 0x18 & 0xfffffffffffff000) ); puVar17 = puVar17 + -0x1000) {
                     *(undefined8*)( puVar17 + -8 ) = *(undefined8*)( puVar17 + -8 );
                  }

                  uVar16 = ( ulong )(( uint )(sVar9 + 0x18) & 0xff0);
                  lVar5 = -uVar16;
                  ppcVar18 = (char**)( puVar17 + lVar5 );
                  if (uVar16 != 0) {
                     *(undefined8*)( puVar17 + -8 ) = *(undefined8*)( puVar17 + -8 );
                  }

                  *(undefined8*)( puVar17 + lVar5 + -8 ) = 0x1015b8;
                  pbVar12 = (byte*)__memcpy_chk(( ulong )(puVar17 + lVar5 + 0xf) & 0xfffffffffffffff0, pcVar15, sVar9 + 1, sVar9 + 1);
                  *(undefined8*)( puVar17 + lVar5 + -8 ) = 0x1015c3;
                  strip_trailing_slashes(pbVar12);
                  uVar8 = *pbVar12 - 0x2e;
                  if (( uVar8 == 0 ) && ( uVar8 = uVar8 == 0 )) {
                     uVar8 = (uint)pbVar12[2];
                  }

                  *(undefined8*)( puVar17 + lVar5 + -8 ) = 0x1015f9;
                  pEVar11 = (EVP_PKEY_CTX*)file_name_concat(local_128, pbVar12 + ( uVar8 == 0 ), local_120);
                  LAB_001015fc:cVar1 = *arg_in_concat;
                  local_118 = arg_in_concat;
                  while (cVar1 == '/') {
                     local_118 = local_118 + 1;
                     cVar1 = *local_118;
                  }
;
                  *(undefined8*)( (long)ppcVar18 + -8 ) = 0;
                  *(_Bool**)( (long)ppcVar18 + -0x10 ) = &copy_into_self;
                  *(undefined8*)( (long)ppcVar18 + -0x18 ) = 0x10164a;
                  uVar8 = copy(pEVar3, pEVar11);
                  uVar25 = uVar25 & uVar8;
                  if (parents_option != false) {
                     *(undefined8*)( (long)ppcVar18 + -8 ) = 0x101686;
                     _Var6 = re_protect((char*)pEVar11, arg_in_concat, (int)local_110, local_118, attr_list, local_108);
                     uVar25 = uVar25 & _Var6;
                     goto LAB_00101413;
                  }

               }
 else {
                  *(undefined8*)( (long)ppcVar18 + -8 ) = 0x101336;
                  sVar9 = strlen((char*)pEVar3);
                  for (puVar17 = (undefined1*)ppcVar18; puVar17 != (undefined1*)( (long)ppcVar18 + -(sVar9 + 0x18 & 0xfffffffffffff000) ); puVar17 = puVar17 + -0x1000) {
                     *(undefined8*)( puVar17 + -8 ) = *(undefined8*)( puVar17 + -8 );
                  }

                  uVar16 = ( ulong )(( uint )(sVar9 + 0x18) & 0xff0);
                  lVar5 = -uVar16;
                  ppcVar18 = (char**)( puVar17 + lVar5 );
                  if (uVar16 != 0) {
                     *(undefined8*)( puVar17 + -8 ) = *(undefined8*)( puVar17 + -8 );
                  }

                  *(undefined8*)( puVar17 + lVar5 + -8 ) = 0x101396;
                  uVar10 = __memcpy_chk(( ulong )(puVar17 + lVar5 + 0xf) & 0xfffffffffffffff0, pEVar3, sVar9 + 1);
                  *(undefined8*)( puVar17 + lVar5 + -8 ) = 0x1013a1;
                  strip_trailing_slashes(uVar10);
                  *(undefined8*)( puVar17 + lVar5 + -8 ) = 0x1013b7;
                  pEVar11 = (EVP_PKEY_CTX*)file_name_concat(local_128, uVar10, local_120);
                  pcVar15 = (char*)0x0;
                  if (local_108.verbose != false) {
                     pcVar15 = "%s -> %s\n";
                  }

                  *(cp_options**)( puVar17 + lVar5 + -0x10 ) = local_108;
                  *(undefined8*)( puVar17 + lVar5 + -0x18 ) = 0x1013fd;
                  _Var6 = make_dir_parents_private((char*)pEVar11, (long)arg_in_concat - (long)pEVar11, (int)local_110, pcVar15, &attr_list, &new_dst, *(cp_options**)( puVar17 + lVar5 + -0x10 ));
                  if (_Var6) goto LAB_001015fc;
                  uVar25 = 0;
                  ppcVar18 = (char**)( puVar17 + lVar5 );
                  LAB_00101413:__ptr = attr_list;
                  if (parents_option != false) {
                     while (__ptr != (dir_attr*)0x0) {
                        pdVar4 = __ptr.next;
                        *(undefined8*)( (long)ppcVar18 + -8 ) = 0x1016d6;
                        attr_list = pdVar4;
                        free(__ptr);
                        __ptr = pdVar4;
                     }
;
                  }

               }

               lVar24 = lVar24 + 1;
               *(undefined8*)( (long)ppcVar18 + -8 ) = 0x101427;
               free(pEVar11);
            }
 while ( (int)lVar24 < (int)local_100 );
            uVar23 = (undefined1)uVar25;
            ppcVar19 = ppcVar18;
         }

         LAB_00101437:ppcVar20 = ppcVar19;
         if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return (_Bool)uVar23;
         }

         LAB_001018ad:/* WARNING: Subroutine does not return */*(undefined8*)( (long)ppcVar20 + -8 ) = 0x1018b2;
         __stack_chk_fail();
      }

      if (target_directory == (char*)0x0) {
         if (n_files < 3) goto LAB_0010146e;
      }
 else {
         uVar10 = dcgettext(0, "cannot combine --target-directory (-t) and --no-target-directory (-T)", 5);
         file = (char**)0x0;
         error(1, 0, uVar10);
      }

      uVar10 = quotearg_style(4, file[2]);
      pcVar15 = "extra operand %s";
   }
 else {
      if (n_files != 1) {
         pcVar15 = "missing file operand";
         LAB_001018c4:uVar10 = dcgettext(0, pcVar15, 5);
         error(0, 0, uVar10);
         goto LAB_00101864;
      }

      uVar10 = quotearg_style(4, *file);
      pcVar15 = "missing destination file operand after %s";
   }

   uVar13 = dcgettext(0, pcVar15, 5);
   error(0, 0, uVar13, uVar10);
   LAB_00101864:/* WARNING: Subroutine does not return */usage(1);
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */int main(int argc, char **argv) {
   long lVar1;
   bool bVar2;
   char *pcVar3;
   _Bool _Var4;
   int iVar5;
   char *pcVar6;
   long lVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   int *piVar10;
   undefined8 uVar11;
   option *poVar12;
   undefined8 in_R9;
   long in_FS_OFFSET;
   char *local_d8;
   char *local_d0;
   char *local_c8;
   char *local_c0;
   _Bool local_b2;
   _Bool local_b1;
   cp_options x;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   set_program_name(*argv);
   setlocale(6, "");
   bindtextdomain("coreutils");
   textdomain("coreutils");
   atexit((__func*)&close_stdin);
   selinux_enabled = false;
   cp_options_default(&x);
   x.copy_as_regular = true;
   x.unlink_dest_before_opening = false;
   x.unlink_dest_after_failed_open = false;
   x.hard_link = false;
   x.move_mode = false;
   x.dereference = __LC70;
   x.interactive = _UNK_00104984;
   x.sparse_mode = _UNK_00104988;
   x.mode = _UNK_0010498c;
   x.install_mode = false;
   x.reflink_mode = REFLINK_AUTO;
   x.one_file_system = false;
   x.preserve_ownership = false;
   x.preserve_mode = false;
   x.preserve_timestamps = false;
   x.explicit_no_preserve_mode = false;
   x.set_security_context = (selabel_handle*)0x0;
   x.preserve_links = false;
   x.data_copy_required = true;
   x.require_preserve = false;
   x.preserve_security_context = false;
   x.require_preserve_context = false;
   x.preserve_xattr = false;
   x.require_preserve_xattr = false;
   x.reduce_diagnostics = false;
   x.symbolic_link = false;
   x.recursive = false;
   x.set_mode = false;
   x.stdin_tty = false;
   x.update = UPDATE_ALL;
   x.verbose = false;
   x.keep_directory_symlink = false;
   pcVar6 = getenv("POSIXLY_CORRECT");
   local_b2 = false;
   local_c0 = (char*)0x0;
   x.open_dangling_dest_symlink = pcVar6 != (char*)0x0;
   local_d8 = (char*)0x0;
   local_b1 = false;
   local_d0 = (char*)0x0;
   local_c8 = (char*)0x0;
   bVar2 = false;
   x.dest_info = (Hash_table*)0x0;
   x.src_info = (Hash_table*)0x0;
   pcVar6 = local_d0;
   pcVar3 = local_c0;
   LAB_00103de8:local_c0 = pcVar3;
   local_d0 = pcVar6;
   poVar12 = long_opts;
   iVar5 = getopt_long(argc, argv, "abdfHilLnprst:uvxPRS:TZ", long_opts, 0);
   if (iVar5 != -1) {
      if (0x10d < iVar5 + 0x83U) goto switchD_00103e1b_caseD_ffffff7f;
      pcVar6 = local_d0;
      pcVar3 = local_c0;
      switch (iVar5) {
         case 0x48:
      x.dereference = DEREF_COMMAND_LINE_ARGUMENTS;
      break;
         case 0x4c:
      x.dereference = DEREF_ALWAYS;
      break;
         case 0x50:
      x.dereference = DEREF_NEVER;
      break;
         case 0x52:
         case 0x72:
      x.recursive = true;
      break;
         case 0x53:
      local_c8 = _optarg;
      bVar2 = true;
      break;
         case 0x54:
      local_b2 = true;
      break;
         case 0x5a:
      if (selinux_enabled == false) {
        if (_optarg != (char *)0x0) {
          uVar9 = dcgettext(0,"warning: ignoring --context; it requires an SELinux-enabled kernel",5
                           );
          error(0,0,uVar9);
        }
      }
      else {
        pcVar3 = _optarg;
        if (_optarg == (char *)0x0) {
          piVar10 = __errno_location();
          *piVar10 = 0x5f;
          x.set_security_context = (selabel_handle *)0x0;
          uVar9 = dcgettext(0,"warning: ignoring --context",5);
          error(0,*piVar10,uVar9);
          pcVar3 = local_c0;
        }
      }
      break;
         case 0x61:
      x.preserve_links = true;
      x.dereference = DEREF_NEVER;
      x.preserve_ownership = (_Bool)(undefined1)_LC74;
      x.preserve_mode = (_Bool)_LC74._1_1_;
      x.preserve_timestamps = true;
      x.require_preserve = true;
      if (selinux_enabled != false) {
        x.preserve_security_context = true;
      }
      x.preserve_xattr = true;
      x.reduce_diagnostics = SUB21(_LC74,0);
      x.recursive = SUB21((ushort)_LC74 >> 8,0);
      break;
         case 0x62:
      bVar2 = true;
      pcVar6 = _optarg;
      if (_optarg == (char *)0x0) {
        pcVar6 = local_d0;
      }
      break;
         case 100:
      x.preserve_links = true;
      x.dereference = DEREF_NEVER;
      break;
         case 0x66:
      x.unlink_dest_after_failed_open = true;
      break;
         case 0x69:
      x.interactive = I_ASK_USER;
      break;
         case 0x6c:
      x.hard_link = true;
      break;
         case 0x6e:
      x.interactive = I_ALWAYS_SKIP;
      break;
         case 0x73:
      x.symbolic_link = true;
      break;
         case 0x74:
      if (local_d8 != (char *)0x0) {
        pcVar6 = "multiple target directories specified";
        goto LAB_001043ce;
      }
      local_d8 = _optarg;
      break;
         case 0x75:
      x.update = UPDATE_OLDER;
      if (_optarg != (char *)0x0) {
        in_R9 = _argmatch_die;
        lVar7 = __xargmatch_internal
                          ("--update",_optarg,update_type_string,update_type,4,_argmatch_die,1,
                           poVar12);
        x.update = update_type[lVar7];
      }
      break;
         case 0x76:
      x.verbose = true;
      break;
         case 0x78:
      x.one_file_system = true;
      break;
         case 0x80:
      x.data_copy_required = false;
      break;
         case 0x81:
      local_b1 = true;
      break;
         case 0x82:
      x.verbose = true;
      x.debug = true;
      break;
         case 0x83:
      decode_preserve_arg(_optarg,&x,false);
      break;
         case 0x84:
      parents_option = true;
      break;
         case 0x85:
      if (_optarg != (char *)0x0) {
        decode_preserve_arg(_optarg,&x,true);
        x.require_preserve = true;
        break;
      }
         case 0x70:
      x.preserve_ownership = true;
      x.preserve_mode = true;
      x.preserve_timestamps = true;
      x.require_preserve = true;
      break;
         case 0x86:
      if (_optarg == (char *)0x0) {
        x.reflink_mode = REFLINK_ALWAYS;
      }
      else {
        uVar9 = _argmatch_die;
        lVar7 = __xargmatch_internal
                          ("--reflink",_optarg,reflink_type_string,reflink_type,4,_argmatch_die,1,
                           in_R9);
        x.reflink_mode = reflink_type[lVar7];
        in_R9 = uVar9;
      }
      break;
         case 0x87:
      in_R9 = _argmatch_die;
      lVar7 = __xargmatch_internal
                        ("--sparse",_optarg,sparse_type_string,sparse_type,4,_argmatch_die,1,
                         (long)&switchD_00103e1b::switchdataD_00101d7c +
                         (long)(int)(&switchD_00103e1b::switchdataD_00101d7c)[iVar5 + 0x83U]);
      x.sparse_mode = sparse_type[lVar7];
      break;
         case 0x88:
      remove_trailing_slashes = true;
      break;
         case 0x89:
      x.unlink_dest_before_opening = true;
      break;
         case 0x8a:
      goto switchD_00103e1b_caseD_8a;
         case -0x83:
      uVar9 = proper_name_lite("Jim Meyering","Jim Meyering");
      uVar11 = proper_name_lite("David MacKenzie","David MacKenzie");
      uVar8 = proper_name_lite("Torbjorn Granlund",&_LC81);
      version_etc(_stdout,&_LC12,"GNU coreutils",_Version,uVar8,uVar11,uVar9,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
         case -0x82:
                    /* WARNING: Subroutine does not return */
      usage(0);
         default:
      goto switchD_00103e1b_caseD_ffffff7f;
      }

      goto LAB_00103de8;
   }

   if (( x.reflink_mode == REFLINK_AUTO ) && ( x.sparse_mode == SPARSE_NEVER )) {
      x.reflink_mode = REFLINK_NEVER;
   }

   if (( x.hard_link != false ) && ( x.symbolic_link != false )) {
      pcVar6 = "cannot make both hard and symbolic links";
      goto LAB_0010437d;
   }

   if (x.interactive == I_ALWAYS_SKIP) {
      x.update = UPDATE_NONE;
      if (bVar2) {
         LAB_0010447a:pcVar6 = "--backup is mutually exclusive with -n or --update=none-fail";
         goto LAB_0010437d;
      }

      LAB_0010420b:if (( x.reflink_mode == REFLINK_ALWAYS ) && ( x.sparse_mode != SPARSE_AUTO )) {
         LAB_0010432c:pcVar6 = "--reflink can be used only with --sparse=auto";
         LAB_0010437d:uVar9 = dcgettext(0, pcVar6, 5);
         error(0, 0, uVar9);
         switchD_00103e1b_caseD_ffffff7f:/* WARNING: Subroutine does not return */usage(1);
      }

      x.backup_type = no_backups;
   }
 else {
      if (!bVar2) goto LAB_0010420b;
      if (x.update - UPDATE_NONE < 2) goto LAB_0010447a;
      if (( x.reflink_mode == REFLINK_ALWAYS ) && ( x.sparse_mode != SPARSE_AUTO )) goto LAB_0010432c;
      uVar9 = dcgettext(0, "backup type", 5);
      x.backup_type = xget_version(uVar9, local_d0);
   }

   set_simple_backup_suffix(local_c8);
   if (x.dereference == DEREF_UNDEFINED) {
      if (( x.recursive == false ) || ( x.hard_link != false )) {
         x.dereference = DEREF_ALWAYS;
         goto LAB_00104231;
      }

      x.dereference = DEREF_NEVER;
   }
 else {
      LAB_00104231:if (x.recursive == false) goto LAB_0010423c;
   }

   x.copy_as_regular = local_b1;
   LAB_0010423c:if (local_c0 == (char*)0x0 && x.set_security_context == (selabel_handle*)0x0) {
      if (x.preserve_security_context == false) goto LAB_001043e6;
      if (x.require_preserve_context == false) goto LAB_0010427b;
      if (selinux_enabled != false) goto LAB_0010427b;
      goto LAB_001043c2;
   }

   if (x.require_preserve_context == false) {
      x.preserve_security_context = false;
      goto LAB_0010426f;
   }

   if (x.preserve_security_context == false) goto LAB_00104262;
   pcVar6 = "cannot set target context and preserve it";
   LAB_001043ce:do {
      uVar9 = dcgettext(0, pcVar6, 5);
      error(1, 0, uVar9);
      LAB_001043e6:if (x.require_preserve_context != false) {
         LAB_00104262:if (selinux_enabled == false) {
            LAB_001043c2:pcVar6 = "cannot preserve security context without an SELinux-enabled kernel";
            goto LAB_001043ce;
         }

         LAB_0010426f:if (local_c0 != (char*)0x0) {
            piVar10 = __errno_location();
            *piVar10 = 0x5f;
            uVar9 = quote(local_c0);
            uVar11 = dcgettext(0, "failed to set default file creation context to %s", 5);
            error(1, *piVar10, uVar11, uVar9);
            goto LAB_0010447a;
         }

      }

      LAB_0010427b:pcVar6 = "cannot preserve extended attributes, cp is built without xattr support";
      if (x.require_preserve_xattr == false) {
         hash_init();
         _Var4 = do_copy(argc - _optind, argv + _optind, local_d8, local_b2, &x);
         if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return (int)!_Var4;
      }

   }
 while ( true );
   switchD_00103e1b_caseD_8a:x.keep_directory_symlink = true;
   goto LAB_00103de8;
}

