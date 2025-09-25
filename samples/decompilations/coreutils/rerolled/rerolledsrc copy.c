/* WARNING: Unknown calling convention -- yet parameter storage is locked */void restore_default_fscreatecon_or_die(void) {
   ulong uVar1;
   uint *puVar2;
   undefined8 uVar3;
   size_t sVar4;
   long lVar5;
   ulong uVar6;
   char *__s;
   ulong uVar7;
   long lVar8;
   puVar2 = (uint*)__errno_location();
   *puVar2 = 0x5f;
   uVar3 = dcgettext(0, "failed to restore the default file creation context", 5);
   uVar7 = ( ulong ) * puVar2;
   lVar8 = 1;
   error(1, uVar7, uVar3);
   uVar7 = uVar7 - lVar8;
   sVar4 = strlen(__s);
   uVar1 = sVar4 + 1 + uVar7;
   lVar5 = ximalloc(uVar1);
   uVar6 = uVar1;
   if (uVar1 <= uVar7) {
      uVar6 = uVar7;
   }

   __memcpy_chk(lVar5 + uVar7, __s, sVar4 + 1, uVar6 - uVar7);
   __memcpy_chk(lVar5, lVar8, uVar7, uVar1);
   return;
}
/* WARNING: Unknown calling convention */char *subst_suffix(char *str, char *suffix, char *newsuffix) {
   ulong uVar1;
   size_t sVar2;
   long lVar3;
   char *pcVar4;
   ulong uVar5;
   ulong uVar6;
   uVar6 = (long)suffix - (long)str;
   sVar2 = strlen(newsuffix);
   uVar1 = sVar2 + 1 + uVar6;
   lVar3 = ximalloc(uVar1);
   uVar5 = uVar1;
   if (uVar1 <= uVar6) {
      uVar5 = uVar6;
   }

   __memcpy_chk(lVar3 + uVar6, newsuffix, sVar2 + 1, uVar5 - uVar6);
   pcVar4 = (char*)__memcpy_chk(lVar3, str, uVar6, uVar1);
   return pcVar4;
}
/* WARNING: Unknown calling convention */_Bool write_zeros(int fd, off_t n_bytes) {
   size_t sVar1;
   size_t sVar2;
   if (( write_zeros::zeros == (char*)0x0 ) && ( write_zeros::zeros = (char*)calloc(write_zeros::nz, 1) ),write_zeros::zeros == (char*)0x0) {
      write_zeros::nz = 0x400;
      write_zeros::zeros = write_zeros::lexical_block_4::fallback;
   }

   if (n_bytes != 0) {
      do {
         sVar2 = write_zeros::nz;
         if ((ulong)n_bytes <= write_zeros::nz) {
            sVar2 = n_bytes;
         }

         sVar1 = full_write(fd, write_zeros::zeros, sVar2);
         if (sVar2 != sVar1) {
            return false;
         }

         n_bytes = n_bytes - sVar2;
      }
 while ( n_bytes != 0 );
   }

   return true;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */void emit_verbose(char *format, char *src, char *dst, char *backup_dst_name) {
   char *pcVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   uVar2 = quotearg_n_style(1, 4);
   uVar3 = quotearg_n_style(0, 4, src);
   __printf_chk(2, format, uVar3, uVar2);
   if (backup_dst_name != (char*)0x0) {
      uVar2 = quotearg_style(4, backup_dst_name);
      uVar3 = dcgettext(0, " (backup: %s)", 5);
      __printf_chk(2, uVar3, uVar2);
   }

   pcVar1 = _stdout._IO_write_ptr;
   if (pcVar1 < _stdout._IO_write_end) {
      _stdout._IO_write_ptr = pcVar1 + 1;
      *pcVar1 = '\n';
      return;
   }

   __overflow(_stdout, 10);
   return;
}
/* WARNING: Unknown calling convention */_Bool create_hard_link(char *src_name, int src_dirfd, char *src_relname, char *dst_name, int dst_dirfd, char *dst_relname, _Bool replace, _Bool verbose, _Bool dereference) {
   _Bool _Var1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   char *__ptr;
   undefined8 uStack_40;
   iVar2 = force_linkat(src_dirfd, src_relname, dst_dirfd, dst_relname, (ulong)dereference << 10, replace);
   if (iVar2 < 1) {
      if (( iVar2 < 0 ) && ( verbose )) {
         uVar3 = quotearg_style(4, dst_name, 0xffffffffffffffff, uStack_40);
         uVar4 = dcgettext(0, "removed %s\n", 5);
         __printf_chk(2, uVar4, uVar3);
      }

      _Var1 = true;
   }
 else {
      __ptr = (char*)0x0;
      if (src_name == (char*)0x0) {
         src_name = subst_suffix(dst_name, dst_relname, src_relname);
         __ptr = src_name;
      }

      uVar3 = quotearg_n_style(1, 4, src_name);
      uVar4 = quotearg_n_style(0, 4, dst_name);
      uVar5 = dcgettext(0, "cannot create hard link %s to %s", 5);
      error(0, iVar2, uVar5, uVar4, uVar3);
      free(__ptr);
      _Var1 = false;
   }

   return _Var1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */_Bool overwrite_ok(cp_options *x, char *dst_name, int dst_dirfd, char *dst_relname, stat *dst_sb) {
   uint uVar1;
   uint uVar2;
   long lVar3;
   undefined8 uVar4;
   undefined1 uVar5;
   char cVar6;
   int iVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   long in_FS_OFFSET;
   char perms[12];
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( dst_sb.st_mode & 0xf000 ) != 0xa000) {
      cVar6 = can_write_any_file();
      if (cVar6 == '\0') {
         iVar7 = faccessat(dst_dirfd, dst_relname, 2, 0x200);
         if (iVar7 != 0) {
            strmode(dst_sb.st_mode, perms);
            uVar1 = dst_sb.st_mode;
            perms[10] = '\0';
            uVar8 = quotearg_style(4, dst_name);
            uVar4 = _program_name;
            if (( x.move_mode == false ) && ( uVar2._0_1_ = x.copy_as_regular ),uVar2._1_1_ = x.unlink_dest_before_opening,uVar2._2_1_ = x.unlink_dest_after_failed_open,uVar2._3_1_ = x.hard_link,( uVar2 & 0xffff00 ) == 0) {
               uVar9 = dcgettext(0, "%s: unwritable %s (mode %04lo, %s); try anyway? ", 5);
            }
 else {
               uVar9 = dcgettext(0, "%s: replace %s, overriding mode %04lo (%s)? ", 5);
            }

            __fprintf_chk(_stderr, 2, uVar9, uVar4, uVar8, uVar1 & 0xfff, perms + 1);
            goto LAB_001003c3;
         }

      }

   }

   uVar8 = quotearg_style(4, dst_name);
   uVar4 = _program_name;
   uVar9 = dcgettext(0, "%s: overwrite %s? ", 5);
   __fprintf_chk(_stderr, 2, uVar9, uVar4, uVar8);
   LAB_001003c3:if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar5 = yesno();
      return (_Bool)uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */_Bool create_hole(int fd, char *name, _Bool punch_holes, off_t size) {
   _Bool _Var1;
   int iVar2;
   __off_t _Var3;
   int *piVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   _Var3 = lseek(fd, size, 1);
   if (_Var3 < 0) {
      uVar5 = quotearg_style(4, name);
      uVar6 = dcgettext(0, "cannot lseek %s", 5);
      piVar4 = __errno_location();
      error(0, *piVar4, uVar6, uVar5);
      _Var1 = false;
   }
 else {
      if (( punch_holes ) && ( iVar2 = iVar2 < 0 )) {
         piVar4 = __errno_location();
         if (( *piVar4 != 0x5f ) && ( *piVar4 != 0x26 )) {
            uVar5 = quotearg_style(4, name);
            uVar6 = dcgettext(0, "error deallocating %s", 5);
            error(0, *piVar4, uVar6, uVar5);
            return false;
         }

      }

      _Var1 = true;
   }

   return _Var1;
}
/* WARNING: Type propagation algorithm not settling *//* WARNING: Unknown calling convention */_Bool sparse_copy(int src_fd, int dest_fd, char **abuf, size_t buf_size, size_t hole_size, _Bool punch_holes, _Bool allow_reflink, char *src_name, char *dst_name, uintmax_t max_n_read, off_t *total_n_read, _Bool *last_write_made_hole) {
   uint uVar1;
   long lVar2;
   _Bool _Var3;
   int iVar4;
   ulong uVar5;
   int *piVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   long lVar9;
   uint *puVar10;
   ulong uVar11;
   char *__buf;
   undefined8 uVar12;
   bool bVar13;
   bool bVar14;
   size_t sVar15;
   size_t __n;
   ulong uVar16;
   char *__s2;
   char *pcVar17;
   bool bVar18;
   ulong uVar19;
   byte bVar20;
   bool bVar21;
   bool bVar22;
   ulong local_78;
   *last_write_made_hole = false;
   local_78 = max_n_read;
   *total_n_read = 0;
   if (copy_debug.sparse_detection == COPY_DEBUG_UNKNOWN) {
      if (hole_size != 0) {
         copy_debug.sparse_detection = COPY_DEBUG_YES;
         goto LAB_0010065e;
      }

      copy_debug.sparse_detection = COPY_DEBUG_NO;
   }
 else if (hole_size != 0) {
      if (copy_debug.sparse_detection == COPY_DEBUG_EXTERNAL) {
         copy_debug.sparse_detection = COPY_DEBUG_EXTERNAL_INTERNAL;
      }

      goto LAB_0010065e;
   }

   if (allow_reflink) {
      if (max_n_read == 0) {
         return true;
      }

      do {
         while (true) {
            uVar19 = 0x7fffffffc0000000;
            if (max_n_read < 0x7fffffffc0000001) {
               uVar19 = max_n_read;
            }

            lVar9 = rpl_copy_file_range(src_fd, 0, dest_fd, 0, uVar19, 0);
            local_78 = max_n_read;
            if (lVar9 == 0) {
               if (*total_n_read != 0) {
                  copy_debug.offload = COPY_DEBUG_YES;
                  return true;
               }

               goto LAB_00100674;
            }

            lVar2 = *total_n_read;
            if (lVar9 < 0) break;
            copy_debug.offload = COPY_DEBUG_YES;
            *total_n_read = lVar2 + lVar9;
            max_n_read = max_n_read - lVar9;
            if (max_n_read == 0) {
               return true;
            }

         }
;
         copy_debug.offload = COPY_DEBUG_UNSUPPORTED;
         puVar10 = (uint*)__errno_location();
         uVar1 = *puVar10;
         if (lVar2 == 0) {
            if (0x1a < (int)uVar1) {
               if (( uVar1 != 0x26 ) && ( uVar1 != 0x5f )) goto LAB_00100ad5;
               goto LAB_00100674;
            }

            if ((int)uVar1 < 1) goto LAB_00100ad5;
            if (( ( 0x6442202UL >> ( (ulong)uVar1 & 0x3f ) & 1 ) != 0 ) || ( uVar1 == 2 )) goto LAB_00100674;
         }

         if (uVar1 != 4) {
            LAB_00100ad5:uVar7 = quotearg_n_style(1, 4, dst_name);
            uVar8 = quotearg_n_style(0, 4, src_name);
            uVar12 = dcgettext(0, "error copying %s to %s", 5);
            error(0, *puVar10, uVar12, uVar8, uVar7);
            return false;
         }

         copy_debug.offload = COPY_DEBUG_YES;
         *total_n_read = lVar2;
      }
 while ( true );
   }

   LAB_0010065e:copy_debug.offload = COPY_DEBUG_AVOIDED;
   if (max_n_read != 0) {
      LAB_00100674:bVar21 = hole_size != 0;
      if (!bVar21) {
         hole_size = buf_size;
      }

      uVar19 = 0;
      bVar18 = false;
      do {
         while (true) {
            __buf = *abuf;
            if (__buf == (char*)0x0) {
               iVar4 = getpagesize();
               __buf = (char*)xalignalloc((long)iVar4, buf_size);
               *abuf = __buf;
            }

            sVar15 = local_78;
            if (buf_size <= local_78) {
               sVar15 = buf_size;
            }

            uVar5 = read(src_fd, __buf, sVar15);
            if (-1 < (long)uVar5) break;
            piVar6 = __errno_location();
            if (*piVar6 != 4) {
               uVar7 = quotearg_style(4, src_name);
               uVar8 = dcgettext(0, "error reading %s", 5);
               error(0, *piVar6, uVar8, uVar7);
               return false;
            }

         }
;
         if (uVar5 == 0) break;
         local_78 = local_78 - uVar5;
         *total_n_read = *total_n_read + uVar5;
         sVar15 = hole_size;
         pcVar17 = __buf;
         bVar13 = bVar18;
         LAB_00100921:do {
            uVar16 = sVar15;
            if (uVar5 < sVar15) {
               uVar16 = uVar5;
            }

            bVar22 = uVar5 == uVar16;
            bVar18 = uVar16 != 0 && bVar21;
            __n = uVar16;
            __s2 = __buf;
            if (bVar18) {
               do {
                  if (*__s2 != '\0') {
                     bVar18 = false;
                     bVar14 = bVar13;
                     goto LAB_001008a0;
                  }

                  __s2 = __s2 + 1;
                  __n = __n - 1;
                  if (__n == 0) {
                     bVar20 = uVar19 != 0 & ( bVar13 ^ 1U );
                     goto LAB_00100aa7;
                  }

               }
 while ( ( __n & 0xf ) != 0 );
               iVar4 = memcmp(__buf, __s2, __n);
               bVar18 = iVar4 == 0;
               bVar22 = bVar22 && iVar4 != 0;
               bVar14 = (bool)( bVar13 ^ bVar18 );
               LAB_001008a0:bVar20 = uVar19 != 0 & bVar14;
               if (bVar22) {
                  if (bVar20 == 0) goto LAB_0010097b;
                  bVar22 = true;
               }
 else {
                  LAB_00100aa7:bVar22 = false;
                  if (bVar20 == 0) goto LAB_00100950;
               }

               if (bVar13 != false) goto LAB_00100993;
               LAB_001008ce:uVar11 = full_write(dest_fd, pcVar17, uVar19);
               if (uVar11 != uVar19) {
                  uVar7 = quotearg_style(4, dst_name);
                  uVar8 = dcgettext(0, "error writing %s", 5);
                  piVar6 = __errno_location();
                  error(0, *piVar6, uVar8, uVar7);
                  return false;
               }

               if (!bVar22) goto LAB_001009be;
               LAB_001008f3:if (uVar16 == 0) {
                  uVar19 = 0;
                  break;
               }

               if (bVar20 != 0) {
                  sVar15 = 0;
                  pcVar17 = __buf;
                  uVar19 = uVar16;
                  bVar13 = bVar18;
                  goto LAB_00100921;
               }

               uVar5 = uVar5 - uVar16;
               uVar19 = 0;
               pcVar17 = __buf;
            }
 else {
               bVar18 = bVar13;
               if (( ( ( bVar13 ^ 1U ) & bVar22 ) == 0 ) && ( uVar16 != 0 )) {
                  LAB_00100950:if (uVar19 + uVar16 + 0x8000000000000000 < uVar16) {
                     uVar7 = quotearg_style(4, src_name);
                     uVar8 = dcgettext(0, "overflow reading %s", 5);
                     error(0, 0, uVar8, uVar7);
                     return false;
                  }

                  uVar5 = uVar5 - uVar16;
                  uVar19 = uVar19 + uVar16;
               }
 else {
                  LAB_0010097b:uVar19 = uVar19 + uVar16;
                  bVar20 = 0;
                  bVar22 = true;
                  if (bVar13 == false) goto LAB_001008ce;
                  LAB_00100993:_Var3 = create_hole(dest_fd, dst_name, punch_holes, uVar19);
                  if (!_Var3) {
                     return false;
                  }

                  if (bVar22) goto LAB_001008f3;
                  LAB_001009be:uVar5 = uVar5 - uVar16;
                  pcVar17 = __buf;
                  uVar19 = uVar16;
               }

            }

            __buf = __buf + uVar16;
            sVar15 = uVar16;
            bVar13 = bVar18;
         }
 while ( uVar5 != 0 );
         *last_write_made_hole = bVar18;
      }
 while ( local_78 != 0 );
      if (bVar18 != false) {
         _Var3 = create_hole(dest_fd, dst_name, punch_holes, uVar19);
         return _Var3;
      }

   }

   return true;
}
int set_owner(cp_options *x, char *dst_name, int dst_dirfd, char *dst_relname, int dest_desc, stat *src_sb, _Bool new_dst, stat *dst_sb) {
   uint uVar1;
   int iVar2;
   uint *puVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   mode_t mVar6;
   undefined3 in_stack_00000009;
   char in_stack_00000018;
   uint in_stack_00000020;
   mVar6 = (mode_t)src_sb;
   if (in_stack_00000018 == '\0') {
      if (( x.preserve_mode == false ) && ( x.move_mode == false )) {
         if (x.set_mode == false) goto LAB_00100c35;
         mVar6 = x.mode;
      }

      if (( ( ( ushort )(~(ushort)mVar6 | 0xe00) & in_stack_00000020 & 0xfff ) == 0 ) || ( iVar2 = qset_acl(dst_name, dest_desc, mVar6 & in_stack_00000020 & 0x1c0) ),iVar2 == 0) goto LAB_00100c35;
      puVar3 = (uint*)__errno_location();
      if (( ( *puVar3 < 0x17 ) && ( ( 0x402002UL >> ( ( ulong ) * puVar3 & 0x3f ) & 1 ) != 0 ) ) && ( x.owner_privileges == false )) goto LAB_00100cb6;
      uVar4 = quotearg_style(4, dst_name);
      uVar5 = dcgettext(0, "clearing permissions for %s", 5);
      uVar1 = *puVar3;
   }
 else {
      LAB_00100c35:if (dest_desc < 0) {
         iVar2 = fchownat(dst_dirfd, dst_relname, _new_dst, (__gid_t)dst_sb, 0x100);
      }
 else {
         iVar2 = fchown(dest_desc, _new_dst, (__gid_t)dst_sb);
      }

      if (iVar2 == 0) {
         return 1;
      }

      puVar3 = (uint*)__errno_location();
      if (( ( *puVar3 < 0x17 ) && ( ( 0x402002UL >> ( ( ulong ) * puVar3 & 0x3f ) & 1 ) != 0 ) ) && ( x.chown_privileges == false )) {
         if (dest_desc < 0) {
            fchownat(dst_dirfd, dst_relname, 0xffffffff, (__gid_t)dst_sb, 0x100);
         }
 else {
            fchown(dest_desc, 0xffffffff, (__gid_t)dst_sb);
         }

         return 0;
      }

      uVar4 = quotearg_style(4, dst_name);
      uVar5 = dcgettext(0, "failed to preserve ownership for %s", 5);
      uVar1 = *puVar3;
   }

   error(0, uVar1, uVar5, uVar4);
   LAB_00100cb6:return -(uint)x->require_preserve;
}
/* WARNING: Unknown calling convention */_Bool set_process_security_ctx(char *src_name, char *dst_name, mode_t mode, _Bool new_dst, cp_options *x) {
   _Bool _Var1;
   byte bVar2;
   int *piVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   if (x.preserve_security_context != false) {
      _Var1 = x.data_copy_required;
      piVar3 = __errno_location();
      if (( _Var1 == false ) || ( x.require_preserve_context != false )) {
         *piVar3 = 0x5f;
         uVar4 = quotearg_style(4, src_name);
         uVar5 = dcgettext(0, "failed to get security context of %s", 5);
         error(0, *piVar3, uVar5, uVar4);
         bVar2 = x.require_preserve_context;
      }
 else {
         *piVar3 = 0x5f;
         bVar2 = 0;
      }

      return ( _Bool )(bVar2 ^ 1);
   }

   if (( x.set_security_context != (selabel_handle*)0x0 ) && ( new_dst )) {
      piVar3 = __errno_location();
      *piVar3 = 0x5f;
   }

   return true;
}
/* WARNING: Unknown calling convention */_Bool set_file_security_ctx(char *dst_name, _Bool recurse, cp_options *x) {
   _Bool _Var1;
   int *piVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   _Var1 = x.data_copy_required;
   piVar2 = __errno_location();
   if (( _Var1 != false ) && ( x.require_preserve_context == false )) {
      *piVar2 = 0x5f;
      return false;
   }

   *piVar2 = 0x5f;
   uVar3 = quotearg_n_style(0, 4, dst_name);
   uVar4 = dcgettext(0, "failed to set the security context of %s", 5);
   error(0, *piVar2, uVar4, uVar3);
   return false;
}
/* WARNING: Removing unreachable block (ram,0x00101fd8) *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */_Bool copy_internal(char *src_name, char *dst_name, int dst_dirfd, char *dst_relname, int nonexistent_dst, stat *parent, dir_list *ancestors, cp_options *x, _Bool command_line_arg, _Bool *first_dir_created_per_command_line_arg, _Bool *copy_into_self, _Bool *rename_succeeded) {
   undefined1 *puVar1;
   mode_t mVar2;
   Dereference_symlink DVar3;
   Sparse_type SVar4;
   long lVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   long lVar8;
   __dev_t _Var9;
   __ino_t _Var10;
   __uid_t __owner;
   __gid_t __group;
   __off_t _Var11;
   __mode_t _Var12;
   dir_list *pdVar13;
   _Bool _Var14;
   char cVar15;
   _Bool _Var16;
   byte bVar17;
   byte bVar18;
   char cVar19;
   char cVar20;
   undefined1 uVar21;
   int iVar22;
   int iVar23;
   Update_type UVar24;
   int iVar25;
   undefined4 uVar26;
   uint uVar27;
   __mode_t __mask;
   char *pcVar28;
   uint *puVar29;
   undefined8 uVar30;
   undefined8 uVar31;
   int *piVar32;
   ulong uVar33;
   stat *psVar34;
   undefined8 uVar35;
   size_t sVar36;
   void *__dest;
   char *pcVar37;
   dir_list *pdVar38;
   ssize_t sVar39;
   size_t sVar40;
   __off_t _Var41;
   stat *__offset;
   _Bool *p_Var42;
   undefined4 in_register_00000014;
   uint uVar43;
   ulong uVar44;
   long lVar45;
   cp_options **ppcVar46;
   cp_options **ppcVar47;
   cp_options **ppcVar48;
   undefined1 *puVar49;
   cp_options **ppcVar50;
   cp_options **ppcVar51;
   cp_options **ppcVar53;
   uint uVar54;
   char *pcVar55;
   Hash_table *pHVar56;
   stat *psVar57;
   uint uVar58;
   backup_type bVar59;
   stat *__offset_00;
   long in_FS_OFFSET;
   bool bVar60;
   undefined3 in_stack_00000019;
   cp_options *local_3d8;
   uint local_3d0;
   uint local_3cc;
   undefined8 local_3c8;
   char *local_3c0;
   char local_3b5;
   uint local_3b4;
   ulong *local_3b0;
   stat *local_3a8;
   undefined8 local_3a0;
   _Bool *local_398;
   _Bool *local_390;
   stat *local_388;
   stat *local_380;
   dir_list *local_378;
   undefined8 local_370;
   stat *local_368;
   stat *local_360;
   _Bool *local_358;
   char *local_350;
   stat *local_348;
   char *local_340;
   uint local_338;
   undefined4 local_334;
   uint local_330;
   int local_32c;
   char *local_328;
   char *local_320;
   _Bool local_copy_into_self;
   _Bool first_dir_created;
   _Bool rename_succeeded_1;
   cp_options non_command_line_options;
   timespec timespec_1[2];
   stat src_sb;
   stat dst_sb;
   stat tmp_dst_sb;
   stat dst_back_sb;
   char dummy[1];
   cp_options **ppcVar52;
   ppcVar53 = &local_3d8;
   ppcVar48 = &local_3d8;
   ppcVar47 = &local_3d8;
   ppcVar46 = &local_3d8;
   ppcVar52 = &local_3d8;
   ppcVar51 = &local_3d8;
   ppcVar50 = &local_3d8;
   local_328 = dst_name;
   local_320 = src_name;
   local_378 = ancestors;
   local_32c = dst_dirfd;
   local_334 = _command_line_arg;
   local_350 = dst_relname;
   local_358 = first_dir_created_per_command_line_arg;
   local_380 = parent;
   local_360 = (stat*)copy_into_self;
   local_368 = (stat*)rename_succeeded;
   lVar5 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar15 = *dst_relname;
   *copy_into_self = false;
   local_340 = ".";
   if (cVar15 != '\0') {
      local_340 = dst_relname;
   }

   uVar43 = x.rename_errno;
   uVar33 = (ulong)uVar43;
   if (( x.move_mode == false ) || ( x.exchange != false )) {
      if (uVar43 != 0) goto LAB_00100fea;
      LAB_00101194:if (x.last_file != false) {
         uVar33 = 0;
         goto LAB_00101040;
      }

      uVar33 = 0;
      pcVar55 = local_340;
      pcVar28 = local_328;
      iVar22 = local_32c;
      LAB_00101002:iVar22 = fstatat(iVar22, pcVar55, (stat*)&src_sb, ( uint )(x.dereference == DEREF_NEVER) << 8);
      if (iVar22 == 0) {
         local_330 = src_sb.st_mode;
         if (( ( src_sb.st_mode & 0xf000 ) != 0x4000 ) || ( x.recursive != false )) goto LAB_00101040;
         uVar30 = quotearg_style(4, local_320);
         if (x.install_mode == false) {
            uVar31 = dcgettext(0, "-r not specified; omitting directory %s", 5);
         }
 else {
            uVar31 = dcgettext(0, "omitting directory %s", 5);
         }

         error(0, 0, uVar31, uVar30);
         ppcVar53 = &local_3d8;
         goto LAB_001025a2;
      }

      LAB_00104cb4:*(undefined8*)( (long)ppcVar53 + -8 ) = 0x104cbe;
      uVar30 = quotearg_style(4, pcVar28);
      pcVar28 = "cannot stat %s";
      ppcVar50 = ppcVar53;
      LAB_00104ccd:*(undefined8*)( (long)ppcVar50 + -8 ) = 0x104cd4;
      uVar31 = dcgettext(0, pcVar28, 5);
      *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104cdc;
      piVar32 = __errno_location();
      iVar22 = *piVar32;
      *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104ced;
      error(0, iVar22, uVar31, uVar30);
      ppcVar53 = ppcVar50;
      goto LAB_001025a2;
   }

   if ((int)uVar43 < 0) {
      iVar22 = renameatu(0xffffff9c, src_name, CONCAT44(in_register_00000014, dst_dirfd), local_340, 1);
      if (iVar22 == 0) {
         nonexistent_dst = 1;
         *(_Bool*)&local_368.st_dev = true;
         goto LAB_00101194;
      }

      puVar29 = (uint*)__errno_location();
      uVar33 = ( ulong ) * puVar29;
   }

   iVar22 = (int)uVar33;
   *(bool*)&local_368.st_dev = iVar22 == 0;
   nonexistent_dst = (int)( iVar22 == 0 );
   if (iVar22 == 0) goto LAB_00101194;
   LAB_00100fea:if (( (int)uVar33 != 0x11 ) || ( 1 < x.update - UPDATE_NONE )) {
      pcVar55 = local_320;
      pcVar28 = local_320;
      iVar22 = -100;
      goto LAB_00101002;
   }

   LAB_00101040:if ((char)local_334 == '\0') {
      local_348 = (stat*)CONCAT71(local_348._1_7_, 1);
      local_370 = (stat*)0x0;
      local_338 = ( uint )(x.dereference == DEREF_ALWAYS);
      if (0 < nonexistent_dst) goto LAB_00101108;
      LAB_001013ec:if (( (int)uVar33 == 0x11 ) && ( UVar24 = UVar24 - UPDATE_NONE < 2 )) {
         local_348 = (stat*)( (ulong)local_348 & 0xffffffffffffff00 );
         cVar15 = '\0';
         LAB_00101efb:cVar20 = '\0';
         LAB_00101efe:if (x.move_mode != false) {
            LAB_00102b10:if (1 < UVar24 - UPDATE_NONE) {
               LAB_00102b1c:if (( ( x.interactive != I_ASK_USER ) && ( ( ( ( x.interactive != I_UNSPECIFIED || ( x.stdin_tty == false ) ) || ( ( dst_sb.st_mode & 0xf000 ) == 0xa000 ) ) || ( ( cVar19 = can_write_any_file() ),cVar19 != '\0' || ( iVar22 = faccessat(local_32c, local_340, 2, 0x200) ),iVar22 == 0 ) ) ) )) goto LAB_00102410;
               UVar24 = x.update;
            }

            if (local_368 != (stat*)0x0) {
               *(_Bool*)&local_368.st_dev = true;
            }

            LAB_00101f70:bVar17 = UVar24 == UPDATE_NONE;
            LAB_00101f77:if (UVar24 == UPDATE_NONE_FAIL) {
               uVar30 = quotearg_style(4, local_328);
               uVar31 = dcgettext(0, "not replacing %s", 5);
               error(0, 0, uVar31, uVar30);
               ppcVar53 = &local_3d8;
            }
 else {
               ppcVar53 = &local_3d8;
               if (x.debug != false) {
                  uVar30 = quotearg_style(4, local_328);
                  uVar31 = dcgettext(0, "skipped %s\n", 5);
                  __printf_chk(2, uVar31, uVar30);
                  ppcVar53 = &local_3d8;
               }

            }

            goto LAB_00101a0c;
         }

         if (( local_330 & 0xf000 ) != 0x4000) {
            LAB_00101f22:if (1 < UVar24 - UPDATE_NONE) {
               if (( x.interactive != I_ASK_USER ) || ( _Var14 = _Var14 )) goto LAB_00102410;
               UVar24 = x.update;
            }

            goto LAB_00101f70;
         }

         LAB_00102410:ppcVar50 = &local_3d8;
         if (cVar20 != '\0') goto LAB_00101a06;
         LAB_00102419:bVar59 = x.backup_type;
         uVar43 = local_330 & 0xf000;
         bVar60 = ( dst_sb.st_mode & 0xf000 ) != 0x4000;
         if (( uVar43 != 0x4000 ) == bVar60) {
            LAB_00103070:if (( (char)local_334 != '\0' ) && ( bVar60 )) {
               LAB_00102c26:if (bVar59 != numbered_backups) {
                  if (x.exchange == false) {
                     cVar20 = seen_file(x.dest_info, local_350, &dst_sb);
                     if (cVar20 != '\0') {
                        uVar30 = quotearg_n_style(1, 4, local_320);
                        uVar31 = quotearg_n_style(0, 4, local_328);
                        pcVar28 = "will not overwrite just-created %s with %s";
                        goto LAB_00101603;
                     }

                     bVar59 = x.backup_type;
                     goto LAB_00102c5c;
                  }

                  if (bVar59 == no_backups) goto LAB_00102480;
               }

               LAB_00102c6b:pcVar28 = (char*)last_component(local_320);
               if (( *pcVar28 == '.' ) && ( ( pcVar28[( ulong )(pcVar28[1] == '.') + 1] == '\0' || ( pcVar28[( ulong )(pcVar28[1] == '.') + 1] == '/' ) ) )) goto LAB_00103030;
               if (( x.move_mode == false ) && ( ( dst_sb.st_mode & 0xf000 ) == 0x4000 )) goto LAB_00103040;
               if (bVar59 != numbered_backups) {
                  sVar40 = strlen(pcVar28);
                  local_370 = (stat*)last_component(local_350);
                  local_348 = (stat*)strlen((char*)local_370);
                  local_388 = _simple_backup_suffix;
                  sVar36 = strlen((char*)_simple_backup_suffix);
                  psVar34 = local_348;
                  if (( ( sVar40 == (long)local_348.__glibc_reserved + ( sVar36 - 0x78 ) ) && ( iVar22 = memcmp(pcVar28, local_370, (size_t)local_348) ),psVar57 = local_388,iVar22 == 0 )) {
                     sVar40 = strlen(local_350);
                     pcVar28 = subst_suffix(pcVar28, pcVar28 + sVar40, (char*)psVar57);
                     iVar22 = fstatat(local_32c, pcVar28, (stat*)&dst_back_sb, 0);
                     free(pcVar28);
                     if (( iVar22 == 0 ) && ( src_sb.st_dev == dst_back_sb.st_dev && src_sb.st_ino == dst_back_sb.st_ino )) {
                        if (x.move_mode == false) {
                           uVar30 = dcgettext(0, "backing up %s might destroy source;  %s not copied", 5);
                        }
 else {
                           uVar30 = dcgettext(0, "backing up %s might destroy source;  %s not moved", 5);
                        }

                        uVar31 = quotearg_n_style(1, 4, local_320);
                        uVar35 = quotearg_n_style(0, 4, local_328);
                        error(0, 0, uVar30, uVar35, uVar31);
                        ppcVar53 = &local_3d8;
                        goto LAB_001025a2;
                     }

                     bVar59 = x.backup_type;
                  }

               }

               pcVar28 = local_350;
               pcVar55 = (char*)backup_file_rename(local_32c, local_350, bVar59);
               if (pcVar55 != (char*)0x0) {
                  lVar45 = (long)pcVar28 - (long)local_328;
                  sVar40 = strlen(pcVar55);
                  uVar33 = sVar40 + 1 + lVar45 + 0x17;
                  ppcVar53 = &local_3d8;
                  while (ppcVar52 != (cp_options**)( (long)&local_3d8 - ( uVar33 & 0xfffffffffffff000 ) )) {
                     ppcVar51 = (cp_options**)( (long)ppcVar53 + -0x1000 );
                     *(undefined8*)( (long)ppcVar53 + -8 ) = *(undefined8*)( (long)ppcVar53 + -8 );
                     ppcVar52 = (cp_options**)( (long)ppcVar53 + -0x1000 );
                     ppcVar53 = (cp_options**)( (long)ppcVar53 + -0x1000 );
                  }
;
                  uVar33 = ( ulong )((uint)uVar33 & 0xff0);
                  lVar8 = -uVar33;
                  if (uVar33 != 0) {
                     *(undefined8*)( (long)ppcVar51 + -8 ) = *(undefined8*)( (long)ppcVar51 + -8 );
                  }

                  local_370 = (stat*)( ( ulong )((long)ppcVar51 + lVar8 + 0xf) & 0xfffffffffffffff0 );
                  *(undefined8*)( (long)ppcVar51 + lVar8 + -8 ) = 0x103266;
                  __dest = (void*)__mempcpy_chk(local_370, local_328, lVar45);
                  *(undefined8*)( (long)ppcVar51 + lVar8 + -8 ) = 0x103274;
                  memcpy(__dest, pcVar55, sVar40 + 1);
                  uVar33 = 0x11;
                  *(undefined8*)( (long)ppcVar51 + lVar8 + -8 ) = 0x103281;
                  free(pcVar55);
                  local_348 = (stat*)CONCAT71(local_348._1_7_, 1);
                  ppcVar48 = (cp_options**)( (long)ppcVar51 + lVar8 );
                  goto LAB_00102609;
               }

               piVar32 = __errno_location();
               if (*piVar32 == 2) {
                  local_348 = (stat*)CONCAT71(local_348._1_7_, 1);
                  local_370 = (stat*)0x0;
                  uVar33 = 0x11;
                  ppcVar48 = &local_3d8;
                  goto LAB_00102609;
               }

               uVar30 = quotearg_style(4, local_328);
               pcVar28 = "cannot backup %s";
               LAB_00105347:uVar31 = dcgettext(0, pcVar28, 5);
               error(0, *piVar32, uVar31, uVar30);
               ppcVar53 = &local_3d8;
               goto LAB_001025a2;
            }

            LAB_00102c5c:if (bVar59 != no_backups) goto LAB_00102c6b;
            LAB_00103030:if (( dst_sb.st_mode & 0xf000 ) != 0x4000) goto LAB_00102480;
            LAB_00103040:local_370 = (stat*)0x0;
            uVar33 = 0x11;
            ppcVar48 = &local_3d8;
            LAB_00102609:if ((char)local_334 != '\0') goto LAB_001010c3;
            goto LAB_00101108;
         }

         if (bVar59 != no_backups) {
            LAB_00102c18:if (( (char)local_334 != '\0' ) && ( bVar60 )) goto LAB_00102c26;
            goto LAB_00102c6b;
         }

         if (x.exchange == false) {
            uVar30 = quotearg_n_style(1, 4, local_320);
            uVar31 = quotearg_n_style(0, 4, local_328);
            pcVar28 = "cannot overwrite directory %s with non-directory %s";
            if (uVar43 == 0x4000) {
               pcVar28 = "cannot overwrite non-directory %s with directory %s";
            }

            uVar35 = dcgettext(0, pcVar28, 5);
            error(0, 0, uVar35, uVar31, uVar30);
            ppcVar53 = &local_3d8;
            goto LAB_001025a2;
         }

         if (( !bVar60 ) || ( (char)local_334 == '\0' )) goto LAB_00103030;
         LAB_00102480:if (x.move_mode != false) goto LAB_00103040;
         if (x.unlink_dest_before_opening == false) {
            if (x.data_copy_required == false) goto LAB_00103040;
            if (( x.preserve_links == false ) || ( dst_sb.st_nlink < 2 )) {
               uVar33 = 0x11;
               local_370 = (stat*)0x0;
               ppcVar48 = &local_3d8;
               if (( x.dereference != DEREF_NEVER ) || ( ppcVar48 = &local_3d8(src_sb.st_mode & 0xf000) == 0x8000 )) goto LAB_00102609;
            }

         }

         iVar22 = unlinkat(local_32c, local_350, 0);
         if (( iVar22 != 0 ) && ( piVar32 = __errno_location() * piVar32 != 2 )) {
            uVar30 = quotearg_style(4, local_328);
            pcVar28 = "cannot remove %s";
            goto LAB_00105347;
         }

         local_348 = (stat*)CONCAT71(local_348._1_7_, x.verbose);
         if (x.verbose != false) {
            uVar30 = quotearg_style(4, local_328);
            uVar31 = dcgettext(0, "removed %s\n", 5);
            uVar33 = 0x11;
            __printf_chk(2, uVar31, uVar30);
            local_370 = (stat*)0x0;
            ppcVar48 = &local_3d8;
            goto LAB_00102609;
         }

         if ((char)local_334 != '\0') {
            uVar33 = 0x11;
            local_370 = (stat*)0x0;
            local_348 = (stat*)CONCAT71(local_348._1_7_, (char)local_334);
            ppcVar48 = &local_3d8;
            goto LAB_001010c3;
         }

         local_348 = (stat*)CONCAT71(local_348._1_7_, 1);
         uVar33 = 0x11;
         local_370 = (stat*)0x0;
         goto LAB_00101630;
      }

      uVar43 = local_330 & 0xf000;
      if (uVar43 == 0x8000) goto LAB_001018aa;
      cVar15 = x.copy_as_regular;
      if ((_Bool)cVar15 != false) {
         if (uVar43 == 0x4000) {
            if (x.keep_directory_symlink != false) goto LAB_001018aa;
            LAB_00101bc8:bVar18 = 1;
            nonexistent_dst = 0x100;
            goto LAB_00101431;
         }

         if (uVar43 == 0xa000) goto LAB_00101bc8;
         LAB_001018aa:cVar15 = x.move_mode;
         if (( ( (_Bool)cVar15 != false ) || ( cVar15 = x.symbolic_link ),(_Bool)cVar15 != false )) goto LAB_00101bc8;
         if (x.backup_type != no_backups) goto LAB_0010141f;
         cVar15 = x.unlink_dest_before_opening;
         if ((_Bool)cVar15 != false) goto LAB_00101bc8;
         bVar18 = 0;
         if (nonexistent_dst == 0) goto LAB_00101431;
         LAB_00101900:local_348 = (stat*)CONCAT71(local_348._1_7_, 1);
         LAB_001025f2:local_370 = (stat*)0x0;
         cVar15 = '\0';
         ppcVar48 = &local_3d8;
         if ((int)uVar33 == 0x11) goto LAB_0010146a;
         goto LAB_00102609;
      }

      LAB_0010141f:cVar15 = '\x01';
      bVar18 = 1;
      nonexistent_dst = 0x100;
      LAB_00101431:local_370 = (stat*)( CONCAT44(local_370._4_4_, local_330) & 0xffffffff0000f000 );
      iVar22 = fstatat(local_32c, local_340, (stat*)&dst_sb, nonexistent_dst);
      psVar34 = local_348;
      local_348 = (stat*)( (ulong)local_348 & 0xffffffffffffff00 );
      uVar43 = (uint)local_370;
      if (iVar22 < 0) {
         local_348 = (stat*)CONCAT44(SUB84(psVar34, 4), (uint)local_370);
         piVar32 = __errno_location();
         uVar43 = (uint)local_348;
         if (*piVar32 == 2) goto LAB_00101900;
         bVar18 = *piVar32 != 0x28 | bVar18;
         local_348 = (stat*)CONCAT71(local_348._1_7_, bVar18);
         if (( bVar18 != 0 ) || ( x.unlink_dest_after_failed_open == false )) {
            uVar30 = quotearg_style(4, local_328);
            uVar31 = dcgettext(0, "cannot stat %s", 5);
            error(0, *piVar32, uVar31, uVar30);
            ppcVar53 = &local_3d8;
            goto LAB_001025a2;
         }

         goto LAB_001025f2;
      }

      LAB_0010146a:UVar24 = x.update;
      if (UVar24 - UPDATE_NONE < 2) goto LAB_00101efb;
      uVar44 = src_sb.st_dev ^ dst_sb.st_dev;
      uVar33 = src_sb.st_ino ^ dst_sb.st_ino;
      bVar60 = uVar44 == 0 && uVar33 == 0;
      if (uVar44 != 0 || uVar33 != 0) {
         cVar20 = '\0';
         if (x.dereference != DEREF_NEVER) goto LAB_00102e1f;
         LAB_00103358:psVar34 = &dst_sb;
         psVar57 = &src_sb;
         if (( ( src_sb.st_mode & 0xf000 ) != 0xa000 ) || ( ( dst_sb.st_mode & 0xf000 ) != 0xa000 )) {
            LAB_00101570:if (x.backup_type == no_backups) {
               cVar20 = x.move_mode;
               if (( (_Bool)cVar20 == false ) && ( x.unlink_dest_before_opening == false )) {
                  if (( psVar57.st_mode & 0xf000 ) != 0xa000) {
                     LAB_00103612:if (( psVar34.st_mode & 0xf000 ) != 0xa000) {
                        LAB_001038e8:if (psVar57.st_dev != psVar34.st_dev || psVar57.st_ino != psVar34.st_ino) goto LAB_00103e89;
                        cVar20 = x.hard_link;
                        if ((_Bool)cVar20 != false) goto LAB_001033ef;
                     }

                     LAB_00103626:cVar20 = x.move_mode;
                     LAB_0010362c:if (( ( cVar20 != '\0' ) && ( ( src_sb.st_mode & 0xf000 ) == 0xa000 ) ) && ( 1 < psVar34.st_nlink )) {
                        local_370 = (stat*)CONCAT44(local_370._4_4_, uVar43);
                        local_388 = psVar57;
                        pcVar28 = canonicalize_file_name(local_320);
                        psVar57 = local_388;
                        uVar43 = (uint)local_370;
                        if (pcVar28 != (char*)0x0) {
                           cVar20 = '\0';
                           bVar18 = same_nameat(0xffffff9c, pcVar28, local_32c);
                           bVar18 = bVar18 ^ 1;
                           free(pcVar28);
                           goto LAB_001033e6;
                        }

                     }

                  }

                  if (( x.symbolic_link == false ) || ( ( psVar34.st_mode & 0xf000 ) != 0xa000 )) {
                     if (x.dereference != DEREF_NEVER) goto LAB_001015c8;
                     if (( psVar57.st_mode & 0xf000 ) == 0xa000) {
                        local_370 = (stat*)CONCAT44(local_370._4_4_, uVar43);
                        iVar22 = stat(local_320, (stat*)&dst_back_sb);
                        uVar43 = (uint)local_370;
                        if (iVar22 != 0) goto LAB_00103e89;
                     }
 else {
                        dst_back_sb.st_dev = psVar57.st_dev;
                        dst_back_sb.st_ino = psVar57.st_ino;
                        dst_back_sb.st_nlink = psVar57.st_nlink;
                        dst_back_sb._24_8_ = *(undefined8*)&psVar57.st_mode;
                        dst_back_sb._32_8_ = *(undefined8*)&psVar57.st_gid;
                        dst_back_sb.st_rdev = psVar57.st_rdev;
                        dst_back_sb.st_size = psVar57.st_size;
                        dst_back_sb.st_blksize = psVar57.st_blksize;
                        dst_back_sb.st_blocks = psVar57.st_blocks;
                        dst_back_sb.st_atim.tv_sec = ( (timespec*)&psVar57.st_atim ).tv_sec;
                        dst_back_sb.st_atim.tv_nsec = ( (timespec*)&psVar57.st_atim ).tv_nsec;
                        dst_back_sb.st_mtim.tv_sec = ( (timespec*)&psVar57.st_mtim ).tv_sec;
                        dst_back_sb.st_mtim.tv_nsec = ( (timespec*)&psVar57.st_mtim ).tv_nsec;
                        dst_back_sb.st_ctim.tv_sec = ( (timespec*)&psVar57.st_ctim ).tv_sec;
                        dst_back_sb.st_ctim.tv_nsec = ( (timespec*)&psVar57.st_ctim ).tv_nsec;
                        for (int i = 0; i < 3; i++) {
                           dst_back_sb.__glibc_reserved[i] = psVar57.__glibc_reserved[i];
                        }

                     }

                     if (( psVar34.st_mode & 0xf000 ) == 0xa000) {
                        local_370 = (stat*)CONCAT44(local_370._4_4_, uVar43);
                        iVar22 = fstatat(local_32c, local_340, (stat*)&tmp_dst_sb, 0);
                        uVar43 = (uint)local_370;
                        if (iVar22 != 0) goto LAB_00103e89;
                     }
 else {
                        tmp_dst_sb.st_dev = psVar34.st_dev;
                        tmp_dst_sb.st_ino = psVar34.st_ino;
                        tmp_dst_sb.st_nlink = psVar34.st_nlink;
                        tmp_dst_sb._24_8_ = *(undefined8*)&psVar34.st_mode;
                        tmp_dst_sb._32_8_ = *(undefined8*)&psVar34.st_gid;
                        tmp_dst_sb.st_rdev = psVar34.st_rdev;
                        tmp_dst_sb.st_size = psVar34.st_size;
                        tmp_dst_sb.st_blksize = psVar34.st_blksize;
                        tmp_dst_sb.st_blocks = psVar34.st_blocks;
                        tmp_dst_sb.st_atim.tv_sec = ( (timespec*)&psVar34.st_atim ).tv_sec;
                        tmp_dst_sb.st_atim.tv_nsec = ( (timespec*)&psVar34.st_atim ).tv_nsec;
                        tmp_dst_sb.st_mtim.tv_sec = ( (timespec*)&psVar34.st_mtim ).tv_sec;
                        tmp_dst_sb.st_mtim.tv_nsec = ( (timespec*)&psVar34.st_mtim ).tv_nsec;
                        tmp_dst_sb.st_ctim.tv_sec = ( (timespec*)&psVar34.st_ctim ).tv_sec;
                        tmp_dst_sb.st_ctim.tv_nsec = ( (timespec*)&psVar34.st_ctim ).tv_nsec;
                        for (int i = 0; i < 3; i++) {
                           tmp_dst_sb.__glibc_reserved[i] = psVar34.__glibc_reserved[i];
                        }

                     }

                     if (dst_back_sb.st_dev == tmp_dst_sb.st_dev && dst_back_sb.st_ino == tmp_dst_sb.st_ino) {
                        if (x.hard_link != false) {
                           cVar20 = ( psVar34.st_mode & 0xf000 ) != 0xa000;
                           UVar24 = x.update;
                           goto LAB_00102e1f;
                        }

                        goto LAB_001015c8;
                     }

                  }

               }
 else if (( psVar34.st_mode & 0xf000 ) != 0xa000) {
                  if (( bVar60 ) && ( 1 < psVar34.st_nlink )) {
                     local_370 = (stat*)CONCAT44(local_370._4_4_, uVar43);
                     local_388 = psVar57;
                     cVar20 = same_nameat(0xffffff9c, local_320, local_32c);
                     if (cVar20 != '\0') {
                        psVar57 = local_388;
                        uVar43 = (uint)local_370;
                        if (( local_388.st_mode & 0xf000 ) != 0xa000) goto LAB_00103612;
                        goto LAB_00103626;
                     }

                     bVar18 = x.move_mode ^ 1;
                     cVar20 = '\0';
                     goto LAB_001033e6;
                  }

                  if (( psVar57.st_mode & 0xf000 ) != 0xa000) goto LAB_001038e8;
                  goto LAB_0010362c;
               }

               LAB_00103e89:UVar24 = x.update;
               cVar20 = '\0';
               goto LAB_00102e1f;
            }

            if (bVar60) {
               cVar20 = '\0';
               local_370 = (stat*)CONCAT44(local_370._4_4_, uVar43);
               bVar18 = same_nameat(0xffffff9c, local_320, local_32c);
               bVar18 = bVar18 ^ 1;
               goto LAB_001033e6;
            }

            if (x.move_mode != false) {
               if (x.update != UPDATE_OLDER) {
                  cVar20 = '\0';
                  goto LAB_00102b07;
               }

               LAB_00103ee9:cVar20 = '\0';
               cVar19 = '\0';
               if (uVar43 != 0x4000) goto LAB_00102e35;
               if (x.move_mode != false) goto LAB_00102b1c;
               goto LAB_00102419;
            }

            if (( ( x.dereference != DEREF_NEVER ) && ( ( psVar57.st_mode & 0xf000 ) == 0xa000 ) ) && ( ( psVar34.st_mode & 0xf000 ) != 0xa000 )) goto LAB_001015c8;
            if (x.update == UPDATE_OLDER) goto LAB_00103ee9;
            cVar20 = '\0';
            if (uVar43 != 0x4000) goto LAB_0010351c;
            bVar59 = x.backup_type;
            bVar60 = ( dst_sb.st_mode & 0xf000 ) != 0x4000;
            if (bVar60 != ( ( local_330 & 0xf000 ) != 0x4000 )) goto LAB_00102c18;
            goto LAB_00103070;
         }

         local_370 = (stat*)CONCAT44(local_370._4_4_, uVar43);
         cVar20 = same_nameat(0xffffff9c, local_320, local_32c);
         if (cVar20 == '\0') {
            cVar20 = '\0';
            uVar43 = (uint)local_370;
            if (( x.backup_type != no_backups ) || ( uVar44 != 0 || uVar33 != 0 )) goto LAB_001033ef;
            cVar20 = '\x01';
            bVar18 = x.move_mode ^ 1;
            LAB_001033e6:uVar43 = (uint)local_370;
            if (bVar18 != 0) goto LAB_001033ef;
         }

         LAB_001015c8:uVar30 = quotearg_n_style(1, 4, local_328);
         uVar31 = quotearg_n_style(0, 4, local_320);
         pcVar28 = "%s and %s are the same file";
         ppcVar46 = &local_3d8;
         goto LAB_00101603;
      }

      cVar20 = x.hard_link;
      if ((_Bool)cVar20 == false) {
         if (x.dereference == DEREF_NEVER) goto LAB_00103358;
         psVar34 = &tmp_dst_sb;
         local_370 = (stat*)CONCAT44(local_370._4_4_, uVar43);
         iVar22 = fstatat(local_32c, local_340, (stat*)psVar34, 0x100);
         uVar43 = (uint)local_370;
         if (iVar22 == 0) {
            local_388 = (stat*)CONCAT44(local_388._4_4_, (uint)local_370);
            local_370 = &dst_back_sb;
            iVar22 = lstat(local_320, (stat*)&dst_back_sb);
            uVar43 = (uint)local_388;
            if (iVar22 == 0) {
               bVar60 = dst_back_sb.st_dev == tmp_dst_sb.st_dev && dst_back_sb.st_ino == tmp_dst_sb.st_ino;
               psVar57 = local_370;
               uVar43 = (uint)local_388;
               if (( ( ( dst_back_sb.st_mode & 0xf000 ) != 0xa000 ) || ( ( tmp_dst_sb.st_mode & 0xf000 ) != 0xa000 ) ) || ( x.unlink_dest_before_opening == false )) goto LAB_00101570;
            }

         }

         LAB_001033ef:UVar24 = x.update;
      }

      LAB_00102e1f:if (UVar24 != UPDATE_OLDER) goto LAB_00101efe;
      cVar19 = cVar20;
      if (uVar43 == 0x4000) {
         if (x.move_mode == false) goto LAB_00102410;
         goto LAB_00102b1c;
      }

      LAB_00102e35:cVar20 = cVar19;
      bVar60 = false;
      if (( x.preserve_timestamps != false ) && ( bVar60 = x.move_mode != false )) {
         bVar60 = dst_sb.st_dev != src_sb.st_dev;
      }

      iVar22 = utimecmpat(local_32c, local_350, &dst_sb, &src_sb, bVar60);
      if (iVar22 < 0) {
         if (x.move_mode == false) {
            LAB_0010351c:UVar24 = x.update;
            goto LAB_00101f22;
         }

         LAB_00102b07:UVar24 = x.update;
         goto LAB_00102b10;
      }

      if (local_368 != (stat*)0x0) {
         *(_Bool*)&local_368.st_dev = true;
      }

      pcVar28 = (char*)remember_copied(local_350, src_sb.st_ino, src_sb.st_dev);
      if (pcVar28 == (char*)0x0) {
         UVar24 = x.update;
         bVar17 = true;
         goto LAB_00101f77;
      }

      bVar17 = create_hard_link((char*)0x0, local_32c, pcVar28, local_328, local_32c, local_350, true, x.verbose, SUB41(local_338, 0));
      if ((bool)bVar17) {
         UVar24 = x.update;
         goto LAB_00101f77;
      }

      ppcVar53 = &local_3d8;
      if (x.preserve_security_context == false) goto LAB_001025a2;
      LAB_00103176:*(undefined8*)( (long)ppcVar50 + -8 ) = 0x10317b;
      restore_default_fscreatecon_or_die();
      LAB_00103180:pcVar28 = local_350;
      pHVar56 = x.dest_info;
      *(undefined8*)( (long)ppcVar50 + -8 ) = 0x103198;
      record_file(pHVar56, pcVar28, &src_sb);
   }
 else {
      pHVar56 = x.src_info;
      if (pHVar56 == (Hash_table*)0x0) {
         LAB_00101088:local_338 = ( uint )(x.dereference - DEREF_COMMAND_LINE_ARGUMENTS < 2);
         if (nonexistent_dst < 1) goto LAB_001013ec;
         cVar15 = '\0';
         local_370 = (stat*)0x0;
         local_348 = (stat*)CONCAT71(local_348._1_7_, (char)local_334);
         ppcVar48 = &local_3d8;
         LAB_001010c3:iVar22 = local_32c;
         pcVar28 = local_340;
         if (( x.dest_info == (Hash_table*)0x0 ) || ( x.move_mode != false )) {
            LAB_00101108:ppcVar47 = ppcVar48;
            if (x.verbose == false) {
               LAB_00101207:if ((int)uVar33 != 0) goto LAB_00101630;
               ppcVar50 = ppcVar47;
               if (x.move_mode == false) goto LAB_0010121b;
               goto LAB_001019b8;
            }

            if (x.move_mode == false) goto LAB_001011d0;
            if ((int)uVar33 != 0) {
               ppcVar50 = ppcVar48;
               if (x.exchange != false) goto LAB_00101648;
               goto LAB_001016fc;
            }

            LAB_00101128:if (x.exchange == false) {
               *(undefined8*)( (long)ppcVar47 + -8 ) = 0x102f26;
               pcVar28 = (char*)dcgettext(0, "renamed %s -> %s", 5);
            }
 else {
               *(undefined8*)( (long)ppcVar47 + -8 ) = 0x101147;
               pcVar28 = (char*)dcgettext(0, "exchanged %s <-> %s", 5);
            }

            pcVar37 = local_320;
            pcVar55 = local_328;
            psVar34 = local_370;
            *(undefined8*)( (long)ppcVar47 + -8 ) = 0x101164;
            emit_verbose(pcVar28, pcVar37, pcVar55, (char*)psVar34);
            ppcVar50 = ppcVar47;
            LAB_001019c6:pcVar28 = local_328;
            if (x.set_security_context != (selabel_handle*)0x0) {
               *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1019e2;
               set_file_security_ctx(pcVar28, true, x);
            }

            if (local_368 != (stat*)0x0) {
               *(_Bool*)&local_368.st_dev = true;
            }

            if (( (char)local_334 == '\0' ) || ( x.last_file != false )) goto LAB_00101a06;
            goto LAB_00103180;
         }

         if (x.backup_type == no_backups) {
            psVar34 = &dst_sb;
            if (cVar15 == '\0') {
               psVar34 = &dst_back_sb;
               *(undefined8*)( (long)ppcVar48 + -8 ) = 0x1032b1;
               iVar22 = fstatat(iVar22, pcVar28, (stat*)psVar34, 0x100);
               if (iVar22 < 0) goto LAB_00101108;
            }

            pcVar28 = local_350;
            if (( psVar34.st_mode & 0xf000 ) == 0xa000) {
               pHVar56 = x.dest_info;
               *(undefined8*)( (long)ppcVar48 + -8 ) = 0x102fba;
               cVar15 = seen_file(pHVar56, pcVar28);
               pcVar28 = local_328;
               if (cVar15 != '\0') {
                  *(undefined8*)( (long)ppcVar48 + -8 ) = 0x102fd8;
                  uVar30 = quotearg_n_style(1, 4, pcVar28);
                  pcVar28 = local_320;
                  *(undefined8*)( (long)ppcVar48 + -8 ) = 0x102fee;
                  uVar31 = quotearg_n_style(0, 4, pcVar28);
                  pcVar28 = "will not copy %s through just-created symlink %s";
                  ppcVar46 = ppcVar48;
                  LAB_00101603:*(undefined8*)( (long)ppcVar46 + -8 ) = 0x10160a;
                  uVar35 = dcgettext(0, pcVar28, 5);
                  *(undefined8*)( (long)ppcVar46 + -8 ) = 0x10161e;
                  error(0, 0, uVar35, uVar31, uVar30);
                  ppcVar53 = ppcVar46;
                  goto LAB_001025a2;
               }

            }

            goto LAB_00101108;
         }

         ppcVar47 = ppcVar48;
         if (x.verbose != false) {
            LAB_001011d0:pcVar55 = local_320;
            pcVar28 = local_328;
            psVar34 = local_370;
            if (( local_330 & 0xf000 ) != 0x4000) {
               *(undefined8*)( (long)ppcVar47 + -8 ) = 0x101207;
               emit_verbose("%s -> %s", pcVar55, pcVar28, (char*)psVar34);
               goto LAB_00101207;
            }

         }

         ppcVar50 = ppcVar47;
         if ((int)uVar33 == 0) {
            LAB_0010121b:local_388 = (stat*)0x0;
            local_368 = (stat*)CONCAT44(local_368._4_4_, (uint)(byte)local_348);
            LAB_00101233:pcVar55 = local_320;
            pcVar28 = local_328;
            uVar27 = local_330;
            uVar43 = local_330;
            if (x.set_mode != false) {
               uVar43 = x.mode;
            }

            _Var14 = SUB81(local_368, 0);
            ppcVar53 = ppcVar50;
            puVar49 = (undefined1*)ppcVar50;
            if (x.preserve_ownership == false) {
               if (( local_330 & 0xf000 ) == 0x4000) {
                  *(undefined8*)( (long)ppcVar50 + -8 ) = 0x101b6a;
                  _Var14 = set_process_security_ctx(pcVar55, pcVar28, uVar27, _Var14, x);
                  if (_Var14) {
                     local_3b4 = uVar43 & 0x12;
                     pdVar38 = local_378;
                     goto joined_r0x00101818;
                  }

               }
 else {
                  *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10129b;
                  _Var14 = set_process_security_ctx(pcVar55, pcVar28, uVar27, _Var14, x);
                  local_3b4 = 0;
                  if (_Var14) goto LAB_001012ad;
               }

            }
 else {
               *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1017c6;
               _Var14 = set_process_security_ctx(pcVar55, pcVar28, uVar27, _Var14, x);
               if (_Var14) {
                  local_3b4 = uVar43 & 0x3f;
                  pdVar38 = local_378;
                  if (( uVar27 & 0xf000 ) != 0x4000) {
                     LAB_001012ad:_Var11 = src_sb.st_size;
                     _Var9 = src_sb.st_rdev;
                     pcVar55 = local_320;
                     iVar22 = local_32c;
                     pcVar28 = local_350;
                     uVar58 = uVar27 & 0xf000;
                     local_358 = (_Bool*)CONCAT71(local_358._1_7_, x.symbolic_link);
                     if (x.symbolic_link == false) {
                        local_3b5 = x.hard_link;
                        if (x.hard_link == false) {
                           if (uVar58 == 0x8000) {
                              LAB_001026b5:_rename_succeeded_1 = (char*)0x0;
                              local_3a0 = (cp_options*)( CONCAT44(local_3a0._4_4_, uVar43) & 0xffffffff000001ff );
                              local_360 = (stat*)CONCAT71(local_360._1_7_, x.data_copy_required);
                              copy_debug.offload = COPY_DEBUG_UNKNOWN;
                              DVar3 = x.dereference;
                              copy_debug.reflink = ( copy_debug_val )(x.reflink_mode == REFLINK_NEVER);
                              copy_debug.sparse_detection = COPY_DEBUG_UNKNOWN;
                              *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10271c;
                              uVar43 = open_safer(pcVar55, ( ulong )(DVar3 == DEREF_NEVER) << 0x11);
                              pcVar28 = local_320;
                              local_338 = uVar43;
                              if ((int)uVar43 < 0) {
                                 *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104f66;
                                 uVar30 = quotearg_style(4, pcVar28);
                                 pcVar28 = "cannot open %s for reading";
                                 goto LAB_00103483;
                              }

                              *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10273c;
                              iVar23 = fstat(uVar43, (stat*)&dst_back_sb);
                              pcVar55 = local_320;
                              iVar22 = local_32c;
                              pcVar28 = local_350;
                              if (iVar23 == 0) {
                                 if (src_sb.st_dev != dst_back_sb.st_dev || src_sb.st_ino != dst_back_sb.st_ino) {
                                    *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1056dc;
                                    uVar30 = quotearg_style(4, pcVar55);
                                    *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1056f2;
                                    uVar31 = dcgettext(0, "skipping file %s, as it was replaced while being copied", 5);
                                    *(undefined8*)( (long)ppcVar50 + -8 ) = 0x105703;
                                    error(0, 0, uVar31, uVar30);
                                    goto LAB_00104092;
                                 }

                                 src_sb.st_nlink = dst_back_sb.st_nlink;
                                 src_sb.st_mode = dst_back_sb.st_mode;
                                 src_sb.st_uid = dst_back_sb.st_uid;
                                 uVar30 = src_sb._24_8_;
                                 src_sb.st_mode = (__mode_t)dst_back_sb._24_8_;
                                 src_sb.st_dev = dst_back_sb.st_dev;
                                 src_sb.st_ino = dst_back_sb.st_ino;
                                 src_sb.st_size = dst_back_sb.st_size;
                                 src_sb.st_blksize = dst_back_sb.st_blksize;
                                 src_sb.st_gid = dst_back_sb.st_gid;
                                 src_sb.__pad0 = dst_back_sb.__pad0;
                                 src_sb.st_rdev = dst_back_sb.st_rdev;
                                 src_sb.st_blocks = dst_back_sb.st_blocks;
                                 src_sb.st_atim.tv_sec = dst_back_sb.st_atim.tv_sec;
                                 local_3b0 = (ulong*)CONCAT44(local_3b0._4_4_, src_sb.st_mode);
                                 src_sb.st_atim.tv_nsec = dst_back_sb.st_atim.tv_nsec;
                                 src_sb.st_mtim.tv_sec = dst_back_sb.st_mtim.tv_sec;
                                 src_sb.st_mtim.tv_nsec = dst_back_sb.st_mtim.tv_nsec;
                                 src_sb.st_ctim.tv_sec = dst_back_sb.st_ctim.tv_sec;
                                 src_sb.st_ctim.tv_nsec = dst_back_sb.st_ctim.tv_nsec;
                                 for (int i = 0; i < 3; i++) {
                                    src_sb.__glibc_reserved[i] = dst_back_sb.__glibc_reserved[i];
                                 }

                                 src_sb._24_8_ = uVar30;
                                 if ((byte)local_348 == '\0') {
                                    bVar60 = (byte)local_360 == '\0';
                                    *(undefined8*)( (long)ppcVar50 + -8 ) = 0x102826;
                                    iVar25 = openat_safer(iVar22, pcVar28, ( -(uint)bVar60 & 0xfffffe00 ) + 0x201);
                                    local_358 = (_Bool*)CONCAT44(local_358._4_4_, iVar25);
                                    *(undefined8*)( (long)ppcVar50 + -8 ) = 0x102834;
                                    piVar32 = __errno_location();
                                    pcVar55 = local_328;
                                    iVar23 = local_32c;
                                    pcVar28 = local_350;
                                    iVar22 = *piVar32;
                                    if (iVar25 < 0) {
                                       if (iVar22 == 2) {
                                          LAB_0010405d:pcVar55 = local_320;
                                          pcVar28 = local_328;
                                          if (x.set_security_context != (selabel_handle*)0x0) {
                                             mVar2 = (uint)local_3a0;
                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10408a;
                                             _Var14 = set_process_security_ctx(pcVar55, pcVar28, mVar2, true, x);
                                             if (!_Var14) goto LAB_00104092;
                                          }

                                          goto LAB_00103530;
                                       }

                                       bVar18 = x.unlink_dest_after_failed_open;
                                       if ((_Bool)bVar18 != false) {
                                          *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104014;
                                          iVar22 = unlinkat(iVar23, pcVar28, 0);
                                          pcVar28 = local_328;
                                          if (iVar22 == 0) {
                                             if (x.verbose != false) {
                                                *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104035;
                                                uVar30 = quotearg_style(4, pcVar28);
                                                *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10404b;
                                                uVar31 = dcgettext(0, "removed %s\n", 5);
                                                *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10405d;
                                                __printf_chk(2, uVar31, uVar30);
                                             }

                                          }
 else if (*piVar32 != 2) {
                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104c06;
                                             uVar30 = quotearg_style(4, pcVar28);
                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104c1c;
                                             uVar31 = dcgettext(0, "cannot remove %s", 5);
                                             iVar22 = *piVar32;
                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104c2d;
                                             error(0, iVar22, uVar31, uVar30);
                                             goto LAB_00104092;
                                          }

                                          goto LAB_0010405d;
                                       }

                                       LAB_00103fee:local_348 = (stat*)CONCAT71(local_348._1_7_, bVar18);
                                       goto LAB_001035a3;
                                    }

                                    if (( x.set_security_context != (selabel_handle*)0x0 ) || ( x.preserve_security_context != false )) {
                                       *(undefined8*)( (long)ppcVar50 + -8 ) = 0x102860;
                                       bVar18 = set_file_security_ctx(pcVar55, false, x);
                                       if (( (bool)bVar18 ) || ( x.require_preserve_context == false )) goto LAB_00102873;
                                       local_348 = (stat*)( (ulong)local_348 & 0xffffffffffffff00 );
                                       goto LAB_001029cb;
                                    }

                                    LAB_00102873:local_3d0 = 0;
                                    uVar43 = 0;
                                    LAB_0010287f:if ((byte)local_360 == '\0') {
                                       LAB_001037f0:uVar54 = x.preserve_ownership | uVar43;
                                       local_3c0 = (char*)CONCAT44(local_3c0._4_4_, uVar54);
                                       if (uVar54 != 0) {
                                          local_360 = (stat*)( (ulong)local_360 & 0xffffffffffffff00 );
                                          LAB_0010289a:iVar22 = (int)local_358;
                                          *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1028ac;
                                          iVar22 = fstat(iVar22, (stat*)&tmp_dst_sb);
                                          pcVar28 = local_328;
                                          if (iVar22 != 0) {
                                             bVar18 = 0;
                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x105547;
                                             uVar30 = quotearg_style(4, pcVar28);
                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10555d;
                                             uVar31 = dcgettext(0, "cannot fstat %s", 5);
                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x105565;
                                             piVar32 = __errno_location();
                                             iVar22 = *piVar32;
                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x105576;
                                             error(0, iVar22, uVar31, uVar30);
                                             goto LAB_001029cb;
                                          }

                                          uVar54 = tmp_dst_sb.st_mode | uVar43;
                                          if (tmp_dst_sb.st_mode == uVar54) {
                                             LAB_001028c6:local_3c0 = (char*)CONCAT44(local_3c0._4_4_, uVar43);
                                          }
 else {
                                             iVar22 = (int)local_358;
                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10389a;
                                             iVar22 = fchmod(iVar22, uVar54);
                                             local_3c0 = (char*)( (ulong)local_3c0 & 0xffffffff00000000 );
                                             if (iVar22 == 0) goto LAB_001028c6;
                                          }

                                          uVar43 = local_338;
                                          if ((byte)local_360 == '\0') goto LAB_00103b82;
                                          local_398 = (_Bool*)tmp_dst_sb.st_blksize;
                                          if (tmp_dst_sb.st_blksize - 1U >> 0x3d == 0) {
                                             auVar7._8_8_ = 0;
                                             auVar7._0_8_ = SUB168(SEXT816(0x3ffff), 8);
                                             local_378 = (dir_list*)( ( 0x3ffff - SUB168(( auVar7 << 0x40 | ZEXT816(0x3ffff) ) % SEXT816(tmp_dst_sb.st_blksize), 0) ) + tmp_dst_sb.st_blksize );
                                             if (( ( tmp_dst_sb.st_mode & 0xf000 ) == 0x8000 ) && ( ( (ulong)local_378 & ( ulong )((long)&local_378[-1].dev + 7U) ) != 0 )) {
                                                lVar45 = 0x3f;
                                                if (local_378 != (dir_list*)0x0) {
                                                   for (; (ulong)local_378 >> lVar45 == 0; lVar45 = lVar45 + -1) {}
                                                }

                                                local_378 = (dir_list*)( 1L << ( (char)lVar45 + 1U & 0x3f ) );
                                             }

                                          }
 else {
                                             local_378 = (dir_list*)0x40000;
                                             local_398 = (_Bool*)0x200;
                                          }

                                          if (( dst_back_sb.st_mode & 0xf000 ) == 0x8000) {
                                             lVar45 = dst_back_sb.st_size + 0x1ff;
                                             if (-1 < dst_back_sb.st_size) {
                                                lVar45 = dst_back_sb.st_size;
                                             }

                                             if (lVar45 >> 9 <= dst_back_sb.st_blocks) goto LAB_00103a30;
                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10295f;
                                             psVar34 = (stat*)lseek(uVar43, 0, 3);
                                             if (-1 < (long)psVar34) {
                                                LAB_00104add:iVar22 = 3;
                                                goto LAB_00103a3c;
                                             }

                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x102970;
                                             piVar32 = __errno_location();
                                             pcVar28 = local_320;
                                             iVar22 = *piVar32;
                                             if (iVar22 == 6) goto LAB_00104add;
                                             if (( iVar22 == 0x16 ) || ( iVar22 == 0x5f )) {
                                                psVar34 = (stat*)0xffffffffffffffff;
                                                iVar22 = 2;
                                                goto LAB_00103a3c;
                                             }

                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1029a1;
                                             uVar30 = quotearg_style(4, pcVar28);
                                             pcVar28 = "cannot lseek %s";
                                             LAB_001029b0:*(undefined8*)( (long)ppcVar50 + -8 ) = 0x1029b7;
                                             uVar31 = dcgettext(0, pcVar28, 5);
                                             iVar22 = *piVar32;
                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1029c8;
                                             error(0, iVar22, uVar31, uVar30);
                                             goto LAB_001029c8;
                                          }

                                          LAB_00103a30:psVar34 = (stat*)0xffffffffffffffff;
                                          iVar22 = 1;
                                          LAB_00103a3c:uVar43 = local_338;
                                          if (( ( tmp_dst_sb.st_mode & 0xf000 ) == 0x8000 ) && ( ( x.sparse_mode == SPARSE_ALWAYS || ( ( x.sparse_mode == SPARSE_AUTO && ( iVar22 != 1 ) ) ) ) )) {
                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104318;
                                             fdadvise(uVar43, 0, 0);
                                             local_copy_into_self = false;
                                             if (iVar22 == 3) {
                                                local_390 = (_Bool*)CONCAT44(local_390._4_4_, x.sparse_mode);
                                                bVar60 = x.reflink_mode != REFLINK_NEVER;
                                                goto LAB_001045ad;
                                             }

                                             bVar60 = x.reflink_mode != REFLINK_NEVER;
                                             SVar4 = x.sparse_mode;
                                             LAB_00103b24:p_Var42 = local_398;
                                             local_copy_into_self = false;
                                             iVar22 = (int)local_358;
                                             *(_Bool**)( (long)ppcVar50 + -8 ) = &local_copy_into_self;
                                             uVar43 = local_338;
                                             *(cp_options**)( (long)ppcVar50 + -0x10 ) = &non_command_line_options;
                                             pdVar38 = local_378;
                                             *(undefined8*)( (long)ppcVar50 + -0x18 ) = 0xffffffffffffffff;
                                             *(char**)( (long)ppcVar50 + -0x20 ) = local_328;
                                             *(char**)( (long)ppcVar50 + -0x28 ) = local_320;
                                             *(ulong*)( (long)ppcVar50 + -0x30 ) = (ulong)bVar60;
                                             *(undefined8*)( (long)ppcVar50 + -0x38 ) = 0x103b69;
                                             _Var14 = sparse_copy(uVar43, iVar22, (char**)&rename_succeeded_1, (size_t)pdVar38, (size_t)p_Var42, SVar4 == SPARSE_ALWAYS, *(_Bool*)( (long)ppcVar50 + -0x30 ), *(char**)( (long)ppcVar50 + -0x28 ), *(char**)( (long)ppcVar50 + -0x20 ), *(uintmax_t*)( (long)ppcVar50 + -0x18 ), *(off_t**)( (long)ppcVar50 + -0x10 ), *(_Bool**)( (long)ppcVar50 + -8 ));
                                             if (!_Var14) goto LAB_001029c8;
                                             goto LAB_00103b75;
                                          }

                                          *(undefined8*)( (long)ppcVar50 + -8 ) = 0x103a62;
                                          fdadvise(uVar43, 0, 0, 2);
                                          pdVar38 = local_378;
                                          if (dst_back_sb.st_blksize - 1U >> 0x3d == 0) {
                                             auVar6._8_8_ = 0;
                                             auVar6._0_8_ = SUB168(SEXT816(0x3ffff), 8);
                                             uVar33 = dst_back_sb.st_blksize + ( 0x3ffff - SUB168(( auVar6 << 0x40 | ZEXT816(0x3ffff) ) % SEXT816(dst_back_sb.st_blksize), 0) );
                                             if (( dst_back_sb.st_mode & 0xf000 ) != 0x8000) goto LAB_00103aa5;
                                             if (( uVar33 - 1 & uVar33 ) == 0) goto LAB_00104484;
                                             lVar45 = 0x3f;
                                             if (uVar33 != 0) {
                                                for (; uVar33 >> lVar45 == 0; lVar45 = lVar45 + -1) {}
                                             }

                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104c64;
                                             pdVar38 = (dir_list*)buffer_lcm(1L << ( (char)lVar45 + 1U & 0x3f ), pdVar38, 0x7fffffffffffffff);
                                             LAB_0010449d:pdVar13 = (dir_list*)( dst_back_sb.st_size + 1 );
                                             if (local_378 <= (ulong)dst_back_sb.st_size) {
                                                pdVar13 = local_378;
                                             }

                                          }
 else {
                                             uVar33 = 0x40000;
                                             if (( dst_back_sb.st_mode & 0xf000 ) == 0x8000) {
                                                uVar33 = 0x40000;
                                                LAB_00104484:*(undefined8*)( (long)ppcVar50 + -8 ) = 0x10449a;
                                                pdVar38 = (dir_list*)buffer_lcm(uVar33, pdVar38, 0x7fffffffffffffff);
                                                goto LAB_0010449d;
                                             }

                                             LAB_00103aa5:*(undefined8*)( (long)ppcVar50 + -8 ) = 0x103abe;
                                             pdVar38 = (dir_list*)buffer_lcm(uVar33, pdVar38, 0x7fffffffffffffff);
                                             pdVar13 = local_378;
                                          }

                                          local_378 = pdVar13;
                                          local_copy_into_self = false;
                                          puVar1 = (undefined1*)( (long)&pdVar38[-1].dev + 7 ) + (long)local_378;
                                          bVar60 = x.reflink_mode != REFLINK_NEVER;
                                          local_378 = (dir_list*)( puVar1 + -((ulong)puVar1 % (ulong)pdVar38) );
                                          if ((long)( puVar1 + -((ulong)puVar1 % (ulong)pdVar38) ) < 1) {
                                             if (iVar22 != 3) {
                                                local_378 = pdVar38;
                                                SVar4 = x.sparse_mode;
                                                LAB_00103b19:local_398 = (_Bool*)0x0;
                                                goto LAB_00103b24;
                                             }

                                             local_390 = (_Bool*)CONCAT44(local_390._4_4_, 1);
                                             local_378 = pdVar38;
                                          }
 else {
                                             if (iVar22 != 3) {
                                                SVar4 = x.sparse_mode;
                                                goto LAB_00103b19;
                                             }

                                             local_390 = (_Bool*)CONCAT44(local_390._4_4_, 1);
                                          }

                                          LAB_001045ad:uVar43 = local_338;
                                          local_copy_into_self = false;
                                          copy_debug.sparse_detection = COPY_DEBUG_EXTERNAL;
                                          local_380 = (stat*)dst_back_sb.st_size;
                                          if ((long)psVar34 < 0) {
                                             bVar60 = 0 < dst_back_sb.st_size;
                                             local_368 = (stat*)0x0;
                                             LAB_001047cf:psVar34 = local_380;
                                             iVar22 = (int)local_358;
                                             if ((int)local_390 == 1) {
                                                lVar45 = (long)local_380 - (long)local_368;
                                                *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104d80;
                                                _Var14 = write_zeros(iVar22, lVar45);
                                                if (_Var14) goto LAB_00103b75;
                                             }
 else {
                                                *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1047f5;
                                                iVar23 = ftruncate(iVar22, (__off_t)psVar34);
                                                psVar57 = local_368;
                                                if (iVar23 == 0) {
                                                   if (( (int)local_390 == 3 ) && ( bVar60 )) {
                                                      lVar45 = (long)psVar34 - (long)local_368;
                                                      *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10482c;
                                                      iVar22 = fallocate(iVar22, 3, (__off_t)psVar57, lVar45);
                                                      if (iVar22 < 0) {
                                                         *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104839;
                                                         piVar32 = __errno_location();
                                                         pcVar28 = local_328;
                                                         if (( *piVar32 != 0x5f ) && ( *piVar32 != 0x26 )) {
                                                            *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104861;
                                                            uVar30 = quotearg_style(4, pcVar28);
                                                            pcVar28 = "error deallocating %s";
                                                            goto LAB_001029b0;
                                                         }

                                                      }

                                                   }

                                                   LAB_00103b75:uVar30 = non_command_line_options._0_8_;
                                                   if (local_copy_into_self != false) {
                                                      iVar22 = (int)local_358;
                                                      *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1044fb;
                                                      iVar22 = ftruncate(iVar22, uVar30);
                                                      if (iVar22 < 0) goto LAB_00104503;
                                                   }

                                                   LAB_00103b82:if (x.preserve_timestamps != false) goto LAB_00103dc7;
                                                   goto LAB_00103b8e;
                                                }

                                             }

                                             LAB_00104503:pcVar28 = local_328;
                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104514;
                                             uVar30 = quotearg_style(4, pcVar28);
                                             pcVar28 = "failed to extend %s";
                                          }
 else {
                                             local_3d8 = x;
                                             lVar45 = 0;
                                             local_3a8 = (stat*)CONCAT44(local_3a8._4_4_, (uint)bVar60);
                                             local_368 = (stat*)0x0;
                                             local_380 = (stat*)0x0;
                                             local_3c8 = (cp_options*)( CONCAT44(local_3c8._4_4_, uVar27) & 0xffffffff0000f000 );
                                             psVar57 = (stat*)dst_back_sb.st_size;
                                             do {
                                                __offset_00 = psVar34;
                                                *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104620;
                                                psVar34 = (stat*)lseek(uVar43, (__off_t)__offset_00, 4);
                                                if ((long)psVar34 < 0) {
                                                   *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104631;
                                                   piVar32 = __errno_location();
                                                   if (*piVar32 != 6) goto LAB_00105184;
                                                   psVar34 = psVar57;
                                                   if ((long)__offset_00 < (long)psVar57) goto LAB_00104646;
                                                   *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104887;
                                                   psVar34 = (stat*)lseek(uVar43, 0, 2);
                                                   if ((long)psVar34 < 0) goto LAB_00105184;
                                                   psVar57 = psVar34;
                                                   if ((long)__offset_00 < (long)psVar34) goto LAB_00104646;
                                                   bVar60 = (long)local_368 < (long)psVar34;
                                                   local_360 = (stat*)CONCAT71(local_360._1_7_, (byte)local_360 | bVar60);
                                                   __offset = local_368;
                                                   uVar58 = (uint)local_3c8;
                                                   local_368 = psVar34;
                                                   LAB_00104ac3:local_380 = local_368;
                                                   local_368 = __offset;
                                                   x = local_3d8;
                                                   goto LAB_001047c2;
                                                }

                                                if ((long)psVar57 < (long)psVar34) {
                                                   psVar57 = psVar34;
                                                }

                                                LAB_00104646:*(undefined8*)( (long)ppcVar50 + -8 ) = 0x104653;
                                                _Var41 = lseek(uVar43, (__off_t)__offset_00, 0);
                                                pcVar28 = local_328;
                                                if (_Var41 < 0) {
                                                   LAB_00105184:x = local_3d8;
                                                   uVar58 = (uint)local_3c8;
                                                   goto LAB_00105192;
                                                }

                                                p_Var42 = (_Bool*)( (long)__offset_00 + ( -lVar45 - (long)local_380 ) );
                                                if (p_Var42 != (_Bool*)0x0) {
                                                   iVar22 = (int)local_358;
                                                   if ((int)local_390 != 1) {
                                                      bVar60 = (int)local_390 == 3;
                                                      *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10469b;
                                                      _Var14 = create_hole(iVar22, pcVar28, bVar60, (off_t)p_Var42);
                                                      local_360 = (stat*)CONCAT71(local_360._1_7_, _Var14);
                                                      if (_Var14) goto LAB_001046a9;
                                                      LAB_001049c5:x = local_3d8;
                                                      uVar58 = (uint)local_3c8;
                                                      goto LAB_001029c8;
                                                   }

                                                   *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1048b2;
                                                   _Var14 = write_zeros(iVar22, (off_t)p_Var42);
                                                   pcVar28 = local_328;
                                                   x = local_3d8;
                                                   if (_Var14) {
                                                      local_360 = (stat*)( (ulong)local_360 & 0xffffffffffffff00 );
                                                      p_Var42 = (_Bool*)0x0;
                                                      lVar45 = (long)psVar34 - (long)__offset_00;
                                                      goto LAB_001046c1;
                                                   }

                                                   uVar58 = (uint)local_3c8;
                                                   *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10503d;
                                                   uVar30 = quotearg_n_style_colon(0, 3, pcVar28);
                                                   pcVar28 = "%s: write failed";
                                                   goto LAB_00104523;
                                                }

                                                local_360 = (stat*)( (ulong)local_360 & 0xffffffffffffff00 );
                                                LAB_001046a9:lVar45 = (long)psVar34 - (long)__offset_00;
                                                p_Var42 = (_Bool*)0x0;
                                                if ((int)local_390 == 3) {
                                                   p_Var42 = local_398;
                                                }

                                                LAB_001046c1:pdVar38 = local_378;
                                                iVar22 = (int)local_358;
                                                *(_Bool**)( (long)ppcVar50 + -8 ) = &first_dir_created;
                                                *(cp_options**)( (long)ppcVar50 + -0x10 ) = &non_command_line_options;
                                                uVar33 = (ulong)local_3a8 & 0xffffffff;
                                                *(long*)( (long)ppcVar50 + -0x18 ) = lVar45;
                                                *(char**)( (long)ppcVar50 + -0x20 ) = local_328;
                                                *(char**)( (long)ppcVar50 + -0x28 ) = local_320;
                                                *(ulong*)( (long)ppcVar50 + -0x30 ) = uVar33;
                                                *(undefined8*)( (long)ppcVar50 + -0x38 ) = 0x104707;
                                                _Var14 = sparse_copy(uVar43, iVar22, (char**)&rename_succeeded_1, (size_t)pdVar38, (size_t)p_Var42, true, *(_Bool*)( (long)ppcVar50 + -0x30 ), *(char**)( (long)ppcVar50 + -0x28 ), *(char**)( (long)ppcVar50 + -0x20 ), *(uintmax_t*)( (long)ppcVar50 + -0x18 ), *(off_t**)( (long)ppcVar50 + -0x10 ), *(_Bool**)( (long)ppcVar50 + -8 ));
                                                if (!_Var14) goto LAB_001049c5;
                                                __offset = (stat*)( (long)__offset_00.__glibc_reserved + non_command_line_options._0_8_ + -0x78 );
                                                if (non_command_line_options._0_8_ != 0) {
                                                   local_360 = (stat*)CONCAT71(local_360._1_7_, first_dir_created);
                                                }

                                                if ((long)non_command_line_options._0_8_ < lVar45) {
                                                   bVar60 = false;
                                                   uVar58 = (uint)local_3c8;
                                                   local_368 = __offset;
                                                   goto LAB_00104ac3;
                                                }

                                                local_368 = __offset;
                                                *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104758;
                                                psVar34 = (stat*)lseek(uVar43, (__off_t)__offset, 3);
                                                x = local_3d8;
                                                local_380 = __offset_00;
                                             }
 while ( -1 < (long)psVar34 );
                                             local_380 = psVar57;
                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1047a6;
                                             piVar32 = __errno_location();
                                             uVar58 = (uint)local_3c8;
                                             if (*piVar32 == 6) {
                                                bVar60 = (long)__offset < (long)psVar57;
                                                local_360 = (stat*)CONCAT71(local_360._1_7_, (byte)local_360 | bVar60);
                                                LAB_001047c2:if ((byte)local_360 == '\0') goto LAB_00103b75;
                                                goto LAB_001047cf;
                                             }

                                             LAB_00105192:pcVar28 = local_320;
                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1051a3;
                                             uVar30 = quotearg_style(4, pcVar28);
                                             pcVar28 = "cannot lseek %s";
                                          }

                                          LAB_00104523:*(undefined8*)( (long)ppcVar50 + -8 ) = 0x10452a;
                                          uVar31 = dcgettext(0, pcVar28, 5);
                                          *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104532;
                                          piVar32 = __errno_location();
                                          iVar22 = *piVar32;
                                          *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104543;
                                          error(0, iVar22, uVar31, uVar30);
                                          goto LAB_001029c8;
                                       }

                                       tmp_dst_sb._24_8_ = tmp_dst_sb._24_8_ & 0xffffffff00000000;
                                       if (x.preserve_timestamps != false) {
                                          LAB_00103dc7:iVar22 = local_32c;
                                          pcVar28 = local_350;
                                          uVar33 = (ulong)local_358 & 0xffffffff;
                                          timespec_1[0].tv_sec = src_sb.st_atim.tv_sec;
                                          timespec_1[0].tv_nsec = src_sb.st_atim.tv_nsec;
                                          timespec_1[1].tv_sec = src_sb.st_mtim.tv_sec;
                                          timespec_1[1].tv_nsec = src_sb.st_mtim.tv_nsec;
                                          *(undefined8*)( (long)ppcVar50 + -8 ) = 0x103e07;
                                          iVar22 = fdutimensat(uVar33, iVar22, pcVar28, timespec_1, 0);
                                          pcVar28 = local_328;
                                          if (iVar22 != 0) {
                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x103e20;
                                             uVar30 = quotearg_style(4, pcVar28);
                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x103e36;
                                             uVar31 = dcgettext(0, "preserving times for %s", 5);
                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x103e3e;
                                             piVar32 = __errno_location();
                                             iVar22 = *piVar32;
                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x103e4f;
                                             error(0, iVar22, uVar31, uVar30);
                                             if (x.require_preserve != false) goto LAB_001029c8;
                                          }

                                          LAB_00103b8e:pcVar55 = local_328;
                                          pcVar28 = local_350;
                                          if (x.preserve_ownership != false) {
                                             uVar33 = (ulong)src_sb.st_uid;
                                             if (src_sb.st_uid == tmp_dst_sb.st_uid) {
                                                if (src_sb.st_gid == tmp_dst_sb.st_gid) goto LAB_0010381a;
                                             }

                                             iVar22 = (int)local_358;
                                             *(ulong*)( (long)ppcVar50 + -8 ) = tmp_dst_sb._24_8_ & 0xffffffff;
                                             *(ulong*)( (long)ppcVar50 + -0x10 ) = (ulong)local_348 & 0xff;
                                             *(ulong*)( (long)ppcVar50 + -0x18 ) = src_sb._32_8_ & 0xffffffff;
                                             iVar23 = local_32c;
                                             *(ulong*)( (long)ppcVar50 + -0x20 ) = uVar33;
                                             psVar34 = (stat*)( src_sb._24_8_ & 0xffffffff );
                                             *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x103bfb;
                                             iVar22 = set_owner(x, pcVar55, iVar23, pcVar28, iVar22, psVar34, *(_Bool*)( (long)ppcVar50 + -0x20 ), *(stat**)( (long)ppcVar50 + -0x18 ));
                                             if (iVar22 == -1) goto LAB_001029c8;
                                             uVar43 = (uint)local_3b0 & 0xfffff1ff;
                                             if (iVar22 != 0) {
                                                uVar43 = (uint)local_3b0;
                                             }

                                             local_3b0 = (ulong*)CONCAT44(local_3b0._4_4_, uVar43);
                                          }

                                       }

                                       LAB_0010381a:pcVar55 = local_320;
                                       pcVar28 = local_328;
                                       uVar43 = local_338;
                                       if (( x.preserve_mode == false ) && ( x.move_mode == false )) {
                                          if (x.set_mode == false) {
                                             bVar18 = (byte)local_348 & x.explicit_no_preserve_mode;
                                             if (bVar18 == 0) {
                                                if ((int)local_3c0 != 0 || local_3d0 != 0) {
                                                   if (mask_0 == 0xffffffff) {
                                                      *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104ea5;
                                                      __mask = umask(0);
                                                      *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104eb4;
                                                      mask_0 = __mask;
                                                      umask(__mask);
                                                      if (( ~__mask & local_3d0 ) != 0 || (int)local_3c0 != 0) {
                                                         if (__mask == 0xffffffff) {
                                                            *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104ed8;
                                                            mask_0 = umask(0);
                                                            *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104ee5;
                                                            umask(mask_0);
                                                         }

                                                         goto LAB_00104b14;
                                                      }

                                                   }
 else if (( ~mask_0 & local_3d0 ) != 0 || (int)local_3c0 != 0) {
                                                      LAB_00104b14:iVar22 = (int)local_358;
                                                      bVar18 = 1;
                                                      uVar43 = (uint)local_3a0 & ~mask_0;
                                                      *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104b2f;
                                                      iVar22 = fchmod(iVar22, uVar43);
                                                      pcVar28 = local_328;
                                                      if (iVar22 != 0) {
                                                         *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104b48;
                                                         uVar30 = quotearg_style(4, pcVar28);
                                                         *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104b5e;
                                                         uVar31 = dcgettext(0, "preserving permissions for %s", 5);
                                                         *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104b66;
                                                         piVar32 = __errno_location();
                                                         iVar22 = *piVar32;
                                                         *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104b77;
                                                         error(0, iVar22, uVar31, uVar30);
                                                         goto LAB_00103948;
                                                      }

                                                      goto LAB_001029cb;
                                                   }

                                                }

                                                bVar18 = 1;
                                             }
 else {
                                                if (mask_0 == 0xffffffff) {
                                                   *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104e0f;
                                                   mask_0 = umask(0);
                                                   *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104e1c;
                                                   umask(mask_0);
                                                }

                                                pcVar28 = local_328;
                                                uVar33 = (ulong)local_358 & 0xffffffff;
                                                *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104d2e;
                                                iVar22 = xset_acl(pcVar28, uVar33, ~mask_0 & 0x1b6);
                                                local_348 = (stat*)CONCAT71(local_348._1_7_, bVar18);
                                                bVar18 = iVar22 == 0;
                                             }

                                          }
 else {
                                             mVar2 = x.mode;
                                             uVar33 = (ulong)local_358 & 0xffffffff;
                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1048e6;
                                             iVar22 = xset_acl(pcVar28, uVar33, mVar2);
                                             bVar18 = iVar22 == 0;
                                          }

                                       }
 else {
                                          uVar44 = (ulong)local_3b0 & 0xffffffff;
                                          uVar33 = (ulong)local_358 & 0xffffffff;
                                          bVar18 = 1;
                                          *(undefined8*)( (long)ppcVar50 + -8 ) = 0x103940;
                                          iVar22 = xcopy_acl(pcVar55, uVar43, pcVar28, uVar33, uVar44);
                                          if (iVar22 != 0) {
                                             LAB_00103948:bVar18 = x.require_preserve ^ 1;
                                          }

                                       }

                                    }
 else {
                                       if (x.reflink_mode == REFLINK_NEVER) goto LAB_0010289a;
                                       uVar33 = (ulong)local_338;
                                       iVar22 = (int)local_358;
                                       *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1037de;
                                       iVar22 = ioctl(iVar22, 0x40049409, uVar33);
                                       if (iVar22 == 0) {
                                          copy_debug.reflink = COPY_DEBUG_YES;
                                          goto LAB_001037f0;
                                       }

                                       local_368 = (stat*)CONCAT44(local_368._4_4_, x.reflink_mode);
                                       *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1049e8;
                                       puVar29 = (uint*)__errno_location();
                                       pcVar28 = local_320;
                                       uVar54 = *puVar29;
                                       if ((int)uVar54 < 0x1d) {
                                          if (( 4 < (int)uVar54 ) && ( ( 0x10001020UL >> ( (ulong)uVar54 & 0x3f ) & 1 ) != 0 )) goto LAB_00104a0e;
                                          LAB_00104d48:if ((int)local_368 != 2) {
                                             copy_debug.reflink = COPY_DEBUG_UNSUPPORTED;
                                             goto LAB_0010289a;
                                          }

                                          *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1052b6;
                                          uVar30 = quotearg_n_style(1, 4, pcVar28);
                                          pcVar28 = local_328;
                                          *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1052cc;
                                          uVar31 = quotearg_n_style(0, 4, pcVar28);
                                          *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1052e2;
                                          uVar35 = dcgettext(0, "failed to clone %s from %s", 5);
                                          uVar43 = *puVar29;
                                          *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1052f7;
                                          error(0, uVar43, uVar35, uVar31, uVar30);
                                          iVar22 = local_32c;
                                          pcVar28 = local_350;
                                          if ((byte)local_348 != '\0') {
                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x105314;
                                             iVar22 = unlinkat(iVar22, pcVar28, 0);
                                             pcVar28 = local_328;
                                             if (iVar22 != 0) {
                                                if (*puVar29 == 2) {
                                                   copy_debug.reflink = COPY_DEBUG_UNSUPPORTED;
                                                   bVar18 = 0;
                                                   goto LAB_001029cb;
                                                }

                                                *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10539c;
                                                uVar30 = quotearg_style(4, pcVar28);
                                                *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1053b2;
                                                uVar31 = dcgettext(0, "cannot remove %s", 5);
                                                uVar43 = *puVar29;
                                                *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1053c4;
                                                error(0, uVar43, uVar31, uVar30);
                                             }

                                             copy_debug.reflink = COPY_DEBUG_UNSUPPORTED;
                                             goto LAB_00104a9a;
                                          }

                                          copy_debug.reflink = COPY_DEBUG_UNSUPPORTED;
                                       }
 else {
                                          if (uVar54 != 0x7a) goto LAB_00104d48;
                                          LAB_00104a0e:*(undefined8*)( (long)ppcVar50 + -8 ) = 0x104a24;
                                          uVar30 = quotearg_n_style(1, 4, pcVar28);
                                          pcVar28 = local_328;
                                          *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104a3a;
                                          uVar31 = quotearg_n_style(0, 4, pcVar28);
                                          *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104a50;
                                          uVar35 = dcgettext(0, "failed to clone %s from %s", 5);
                                          uVar43 = *puVar29;
                                          *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104a65;
                                          error(0, uVar43, uVar35, uVar31, uVar30);
                                          if (( (int)local_368 == 2 ) && ( (byte)local_348 != '\0' )) {
                                             iVar22 = (int)local_358;
                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104a91;
                                             _Var41 = lseek(iVar22, 0, 2);
                                             iVar22 = local_32c;
                                             pcVar28 = local_350;
                                             if (_Var41 == 0) {
                                                *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104e4e;
                                                iVar22 = unlinkat(iVar22, pcVar28, 0);
                                                pcVar28 = local_328;
                                                if (( iVar22 != 0 ) && ( *puVar29 != 2 )) {
                                                   *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104e71;
                                                   uVar30 = quotearg_style(4, pcVar28);
                                                   *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104e87;
                                                   uVar31 = dcgettext(0, "cannot remove %s", 5);
                                                   uVar43 = *puVar29;
                                                   *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104e99;
                                                   error(0, uVar43, uVar31, uVar30);
                                                }

                                             }

                                             LAB_00104a9a:local_348 = (stat*)CONCAT71(local_348._1_7_, (byte)local_360);
                                          }

                                       }

                                       LAB_001029c8:bVar18 = 0;
                                    }

                                    LAB_001029cb:iVar22 = (int)local_358;
                                    *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1029d6;
                                    iVar22 = close(iVar22);
                                    pcVar28 = local_328;
                                    if (iVar22 < 0) {
                                       *(undefined8*)( (long)ppcVar50 + -8 ) = 0x105221;
                                       uVar30 = quotearg_style(4, pcVar28);
                                       pcVar28 = "failed to close %s";
                                       goto LAB_00105230;
                                    }

                                 }
 else {
                                    LAB_00103530:iVar22 = local_32c;
                                    pcVar28 = local_350;
                                    uVar43 = (uint)local_3a0 & ~local_3b4;
                                    *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10355b;
                                    uVar26 = openat_safer(iVar22, pcVar28, 0xc1, uVar43);
                                    local_358 = (_Bool*)CONCAT44(local_358._4_4_, uVar26);
                                    *(undefined8*)( (long)ppcVar50 + -8 ) = 0x103569;
                                    psVar34 = (stat*)__errno_location();
                                    iVar23 = local_32c;
                                    pcVar28 = local_350;
                                    iVar22 = (int)psVar34.st_dev;
                                    bVar17 = ( byte )((uint)uVar26 >> 0x1f);
                                    bVar18 = iVar22 == 0x11 & bVar17;
                                    if (bVar18 == 0) {
                                       LAB_001041b8:pcVar28 = local_328;
                                       bVar17 = iVar22 == 0x15 & bVar17;
                                       local_348 = (stat*)CONCAT71(local_348._1_7_, bVar17);
                                       if (bVar17 == 0) {
                                          if (-1 < (int)local_358) {
                                             local_348 = (stat*)CONCAT71(local_348._1_7_, 1);
                                             uVar43 = uVar43 & ~(uint)local_3a0;
                                             local_3d0 = local_3b4;
                                             goto LAB_0010287f;
                                          }

                                          local_348 = (stat*)CONCAT71(local_348._1_7_, 1);
                                       }
 else {
                                          iVar22 = 0x15;
                                          if (*local_328 != '\0') {
                                             *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1041ea;
                                             sVar40 = strlen(pcVar28);
                                             iVar22 = ( pcVar28[sVar40 - 1] != '/' ) + 0x14;
                                          }

                                       }

                                       LAB_001035a3:pcVar28 = local_328;
                                       *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1035b4;
                                       uVar30 = quotearg_style(4, pcVar28);
                                       *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1035ca;
                                       uVar31 = dcgettext(0, "cannot create regular file %s", 5);
                                       bVar18 = 0;
                                       *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1035df;
                                       error(0, iVar22, uVar31, uVar30);
                                    }
 else {
                                       iVar22 = 0x11;
                                       local_348 = (stat*)CONCAT71(local_348._1_7_, x.move_mode);
                                       if (x.move_mode != false) goto LAB_001035a3;
                                       local_348 = psVar34;
                                       *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104170;
                                       sVar39 = readlinkat(iVar23, pcVar28, dummy, 1);
                                       pcVar55 = local_328;
                                       iVar23 = local_32c;
                                       pcVar28 = local_350;
                                       if (sVar39 < 0) goto LAB_00103fee;
                                       if (x.open_dangling_dest_symlink != false) {
                                          *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1041a3;
                                          uVar26 = openat_safer(iVar23, pcVar28, 0x41, uVar43);
                                          local_358 = (_Bool*)CONCAT44(local_358._4_4_, uVar26);
                                          iVar22 = (int)local_348.st_dev;
                                          bVar17 = ( byte )((uint)uVar26 >> 0x1f);
                                          goto LAB_001041b8;
                                       }

                                       *(undefined8*)( (long)ppcVar50 + -8 ) = 0x105596;
                                       uVar30 = quotearg_style(4, pcVar55);
                                       *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1055ac;
                                       uVar31 = dcgettext(0, "not writing through dangling symlink %s", 5);
                                       *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1055bd;
                                       error(0, 0, uVar31, uVar30);
                                       local_348 = (stat*)CONCAT71(local_348._1_7_, bVar18);
                                       bVar18 = 0;
                                    }

                                 }

                              }
 else {
                                 *(undefined8*)( (long)ppcVar50 + -8 ) = 0x105719;
                                 uVar30 = quotearg_style(4, pcVar55);
                                 pcVar28 = "cannot fstat %s";
                                 LAB_00105230:*(undefined8*)( (long)ppcVar50 + -8 ) = 0x105237;
                                 uVar31 = dcgettext(0, pcVar28, 5);
                                 *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10523f;
                                 piVar32 = __errno_location();
                                 iVar22 = *piVar32;
                                 *(undefined8*)( (long)ppcVar50 + -8 ) = 0x105250;
                                 error(0, iVar22, uVar31, uVar30);
                                 LAB_00104092:bVar18 = 0;
                              }

                              uVar43 = local_338;
                              *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1029e9;
                              iVar22 = close(uVar43);
                              pcVar55 = _rename_succeeded_1;
                              pcVar28 = local_320;
                              if (iVar22 < 0) {
                                 *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1051c8;
                                 uVar30 = quotearg_style(4, pcVar28);
                                 *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1051de;
                                 uVar31 = dcgettext(0, "failed to close %s", 5);
                                 *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1051e6;
                                 piVar32 = __errno_location();
                                 iVar22 = *piVar32;
                                 *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1051f7;
                                 error(0, iVar22, uVar31, uVar30);
                                 pcVar28 = _rename_succeeded_1;
                                 if (( ( ( x.debug != false ) && ( x.hard_link == false ) ) && ( x.symbolic_link == false ) ) && ( x.data_copy_required != false )) goto LAB_00103c57;
                                 *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10520b;
                                 free(pcVar28);
                              }
 else {
                                 if (( ( x.debug != false ) && ( x.hard_link == false ) ) && ( ( x.symbolic_link == false && ( x.data_copy_required != false ) ) )) {
                                    LAB_00103c57:/* WARNING: Could not recover jumptable at 0x00103c6b. Too many branches *//* WARNING: Treating indirect jump as call */uVar21 = ( *(code*)( (long)&DAT_001069b0 + (long)(int)( &DAT_001069b0 )[copy_debug.sparse_detection] ) )();
                                    return (_Bool)uVar21;
                                 }

                                 *(undefined8*)( (long)ppcVar50 + -8 ) = 0x102a0c;
                                 free(pcVar55);
                                 local_358 = (_Bool*)( (ulong)local_358 & 0xffffffffffffff00 );
                                 bVar17 = bVar18;
                                 if (bVar18 != 0) goto LAB_00101345;
                              }

                           }
 else {
                              if (x.copy_as_regular == false) {
                                 bVar18 = 0;
                                 if (uVar58 == 0x1000) {
                                    uVar43 = ~local_3b4 & local_330;
                                    *(undefined8*)( (long)ppcVar50 + -8 ) = 0x103ebc;
                                    iVar23 = mknodat(iVar22, pcVar28, uVar43, 0);
                                    iVar22 = local_32c;
                                    pcVar28 = local_350;
                                    if (iVar23 != 0) {
                                       *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104567;
                                       iVar22 = mkfifoat(iVar22, pcVar28, uVar43 & 0xffffefff);
                                       pcVar28 = local_328;
                                       if (iVar22 != 0) {
                                          *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104580;
                                          uVar30 = quotearg_style(4, pcVar28);
                                          pcVar28 = "cannot create fifo %s";
                                          goto LAB_00103483;
                                       }

                                    }

                                    local_358 = (_Bool*)( (ulong)local_358 & 0xffffffffffffff00 );
                                    bVar17 = 1;
                                    local_3b5 = '\0';
                                    goto LAB_00101345;
                                 }

                                 bVar60 = ( uVar58 >> 8 & 0xbf ) == 0x20;
                                 bVar17 = bVar60 || uVar58 == 0xc000;
                                 if (bVar60 || uVar58 == 0xc000) {
                                    uVar43 = ~local_3b4 & local_330;
                                    *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10345b;
                                    iVar22 = mknodat(iVar22, pcVar28, uVar43, _Var9);
                                    pcVar28 = local_328;
                                    if (iVar22 == 0) goto LAB_00101345;
                                    *(undefined8*)( (long)ppcVar50 + -8 ) = 0x103474;
                                    uVar30 = quotearg_style(4, pcVar28);
                                    pcVar28 = "cannot create special file %s";
                                    goto LAB_00103483;
                                 }

                                 if (uVar58 != 0xa000) {
                                    *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10443a;
                                    uVar30 = quotearg_style(4, pcVar55);
                                    pcVar28 = "%s has unknown file type";
                                    goto LAB_00101858;
                                 }

                              }
 else if (uVar58 != 0xa000) goto LAB_001026b5;
                              *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10396a;
                              pcVar37 = (char*)areadlink_with_size(pcVar55, _Var11);
                              pcVar55 = local_320;
                              iVar22 = local_32c;
                              pcVar28 = local_350;
                              if (pcVar37 == (char*)0x0) {
                                 *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104ffc;
                                 uVar30 = quotearg_style(4, pcVar55);
                                 pcVar28 = "cannot read symbolic link %s";
                                 goto LAB_00103483;
                              }

                              _Var14 = x.unlink_dest_after_failed_open;
                              *(undefined8*)( (long)ppcVar50 + -8 ) = 0x103997;
                              iVar22 = force_symlinkat(pcVar37, iVar22, pcVar28, _Var14, 0xffffffff);
                              if (iVar22 < 1) {
                                 LAB_001042a5:*(undefined8*)( (long)ppcVar50 + -8 ) = 0x1042ad;
                                 free(pcVar37);
                                 iVar22 = local_32c;
                                 pcVar28 = local_350;
                                 local_3b5 = x.preserve_security_context;
                                 if (x.preserve_security_context != false) goto LAB_00103176;
                                 if (x.preserve_ownership != false) {
                                    __group = src_sb.st_gid;
                                    __owner = src_sb.st_uid;
                                    *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10437b;
                                    iVar22 = fchownat(iVar22, pcVar28, __owner, __group, 0x100);
                                    if (iVar22 != 0) {
                                       *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104388;
                                       puVar29 = (uint*)__errno_location();
                                       if (( ( 0x16 < *puVar29 ) || ( ( 0x402002UL >> ( ( ulong ) * puVar29 & 0x3f ) & 1 ) == 0 ) ) || ( x.chown_privileges != false )) {
                                          *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1043bc;
                                          uVar30 = dcgettext(0, "failed to preserve ownership for %s", 5);
                                          pcVar28 = local_328;
                                          uVar43 = *puVar29;
                                          *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1043d1;
                                          error(0, uVar43, uVar30, pcVar28);
                                          if (x.require_preserve != false) goto LAB_00102a20;
                                       }

                                    }

                                 }

                                 local_358 = (_Bool*)CONCAT71(local_358._1_7_, 1);
                                 bVar18 = 0;
                                 uVar58 = 0xa000;
                                 bVar17 = 1;
                                 goto LAB_00101345;
                              }

                              if (( ( x.update == UPDATE_OLDER ) && ( (byte)local_348 == '\0' ) ) && ( ( dst_sb.st_mode & 0xf000 ) == 0xa000 )) {
                                 *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104260;
                                 sVar40 = strlen(pcVar37);
                                 iVar23 = local_32c;
                                 pcVar28 = local_350;
                                 if (dst_sb.st_size == sVar40) {
                                    *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10427e;
                                    pcVar28 = (char*)areadlinkat_with_size(iVar23, pcVar28, dst_sb.st_size);
                                    if (pcVar28 != (char*)0x0) {
                                       *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104295;
                                       iVar23 = strcmp(pcVar28, pcVar37);
                                       if (iVar23 == 0) {
                                          *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1042a5;
                                          free(pcVar28);
                                          goto LAB_001042a5;
                                       }

                                       *(undefined8*)( (long)ppcVar50 + -8 ) = 0x105580;
                                       free(pcVar28);
                                    }

                                 }

                              }

                              *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1039b5;
                              free(pcVar37);
                              pcVar28 = local_328;
                              *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1039c6;
                              uVar30 = quotearg_style(4, pcVar28);
                              *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1039dc;
                              uVar31 = dcgettext(0, "cannot create symbolic link %s", 5);
                              *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1039ed;
                              error(0, iVar22, uVar31, uVar30);
                           }

                        }
 else {
                           uVar33 = 1;
                           if (x.unlink_dest_after_failed_open == false) {
                              uVar33 = ( ulong )(x.interactive == I_ASK_USER);
                           }

                           bVar18 = 0;
                           *(ulong*)( (long)ppcVar50 + -0x10 ) = (ulong)local_338;
                           pcVar37 = local_328;
                           *(undefined8*)( (long)ppcVar50 + -0x18 ) = 0;
                           *(ulong*)( (long)ppcVar50 + -0x20 ) = uVar33;
                           *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x1023df;
                           bVar17 = create_hard_link(pcVar55, -100, pcVar55, pcVar37, iVar22, pcVar28, *(_Bool*)( (long)ppcVar50 + -0x20 ), *(_Bool*)( (long)ppcVar50 + -0x18 ), *(_Bool*)( (long)ppcVar50 + -0x10 ));
                           local_3b5 = '\0';
                           if ((bool)bVar17) goto LAB_00101345;
                        }

                     }
 else {
                        if (*local_320 != '/') {
                           *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1012d9;
                           pcVar28 = (char*)dir_name(pcVar28);
                           if (( ( local_32c != -100 ) || ( *pcVar28 != '.' ) ) || ( pcVar28[1] != '\0' )) {
                              *(undefined8*)( (long)ppcVar50 + -8 ) = 0x101bf3;
                              iVar23 = stat(".", (stat*)&tmp_dst_sb);
                              iVar22 = local_32c;
                              if (iVar23 == 0) {
                                 *(undefined8*)( (long)ppcVar50 + -8 ) = 0x101c12;
                                 iVar22 = fstatat(iVar22, pcVar28, (stat*)&dst_back_sb, 0);
                                 if (( iVar22 == 0 ) && ( tmp_dst_sb.st_dev != dst_back_sb.st_dev || tmp_dst_sb.st_ino != dst_back_sb.st_ino )) {
                                    *(undefined8*)( (long)ppcVar50 + -8 ) = 0x101c47;
                                    free(pcVar28);
                                    pcVar28 = local_328;
                                    *(undefined8*)( (long)ppcVar50 + -8 ) = 0x101c5a;
                                    uVar30 = quotearg_n_style_colon(0, 3, pcVar28);
                                    pcVar28 = "%s: can make relative symbolic links only in current directory";
                                    LAB_00101858:*(undefined8*)( (long)ppcVar50 + -8 ) = 0x10185f;
                                    uVar31 = dcgettext(0, pcVar28, 5);
                                    *(undefined8*)( (long)ppcVar50 + -8 ) = 0x101870;
                                    error(0, 0, uVar31, uVar30);
                                    goto LAB_00102a20;
                                 }

                              }

                           }

                           *(undefined8*)( (long)ppcVar50 + -8 ) = 0x101304;
                           free(pcVar28);
                        }

                        pcVar55 = local_320;
                        iVar22 = local_32c;
                        pcVar28 = local_350;
                        _Var14 = x.unlink_dest_after_failed_open;
                        *(undefined8*)( (long)ppcVar50 + -8 ) = 0x101329;
                        iVar22 = force_symlinkat(pcVar55, iVar22, pcVar28, _Var14, 0xffffffff);
                        pcVar28 = local_320;
                        if (iVar22 < 1) {
                           local_3b5 = '\0';
                           bVar18 = 0;
                           bVar17 = (byte)local_358;
                           goto LAB_00101345;
                        }

                        *(undefined8*)( (long)ppcVar50 + -8 ) = 0x105743;
                        uVar30 = quotearg_n_style(1, 4, pcVar28);
                        pcVar28 = local_328;
                        *(undefined8*)( (long)ppcVar50 + -8 ) = 0x105759;
                        uVar31 = quotearg_n_style(0, 4, pcVar28);
                        *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10576f;
                        uVar35 = dcgettext(0, "cannot create symbolic link %s to %s", 5);
                        *(undefined8*)( (long)ppcVar50 + -8 ) = 0x105783;
                        error(0, iVar22, uVar35, uVar31, uVar30);
                     }

                     LAB_00102a20:_Var10 = src_sb.st_ino;
                     _Var9 = src_sb.st_dev;
                     ppcVar50 = (cp_options**)puVar49;
                     if (x.preserve_security_context != false) goto LAB_00103176;
                     if (local_388 == (stat*)0x0) {
                        *(undefined8*)( puVar49 + -8 ) = 0x102a49;
                        forget_created(_Var10, _Var9);
                     }

                     goto LAB_00102a50;
                  }

                  joined_r0x00101818:for (; _Var10 = src_sb.st_ino,_Var9 = src_sb.st_dev,pcVar28 = local_320,pdVar38 != (dir_list*)0x0; pdVar38 = pdVar38.parent) {
                     if (( pdVar38.ino == src_sb.st_ino ) && ( pdVar38.dev == src_sb.st_dev )) {
                        *(undefined8*)( (long)ppcVar50 + -8 ) = 0x101849;
                        uVar30 = quotearg_style(4, pcVar28);
                        pcVar28 = "cannot copy cyclic symbolic link %s";
                        goto LAB_00101858;
                     }

                  }

                  ppcVar53 = (cp_options**)( (long)ppcVar50 + -0x20 );
                  puVar49 = (undefined1*)( (long)ppcVar50 + -0x20 );
                  *(undefined8*)( (long)ppcVar50 + -8 ) = *(undefined8*)( (long)ppcVar50 + -8 );
                  pcVar55 = local_328;
                  iVar22 = local_32c;
                  pcVar28 = local_340;
                  local_3b0 = (ulong*)( ( ulong )((long)ppcVar50 + -0x11) & 0xfffffffffffffff0 );
                  *local_3b0 = (ulong)local_378;
                  local_3b0[1] = _Var10;
                  local_3b0[2] = _Var9;
                  if (( (byte)local_348 != '\0' ) || ( ( dst_sb.st_mode & 0xf000 ) != 0x4000 )) {
                     uVar27 = ~local_3b4;
                     *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x102050;
                     iVar23 = mkdirat(iVar22, pcVar28, uVar27 & uVar43 & 0xfff);
                     pcVar55 = local_328;
                     iVar22 = local_32c;
                     pcVar28 = local_340;
                     if (iVar23 == 0) {
                        *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x102076;
                        iVar23 = fstatat(iVar22, pcVar28, (stat*)&dst_sb, 0x100);
                        _Var12 = dst_sb.st_mode;
                        pcVar55 = local_328;
                        iVar22 = local_32c;
                        pcVar28 = local_340;
                        if (iVar23 == 0) {
                           local_3b5 = '\0';
                           if (( ~dst_sb.st_mode & 0x1c0 ) != 0) {
                              uVar43 = dst_sb.st_mode | 0x1c0;
                              *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x1020b5;
                              iVar22 = fchmodat(iVar22, pcVar28, uVar43, 0x100);
                              pcVar28 = local_328;
                              if (iVar22 != 0) {
                                 *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x10580f;
                                 uVar30 = quotearg_style(4, pcVar28);
                                 pcVar28 = "setting permissions for %s";
                                 puVar49 = (undefined1*)( (long)ppcVar50 + -0x20 );
                                 goto LAB_00103483;
                              }

                              local_3cc = _Var12;
                              local_3b5 = '\x01';
                           }

                           pcVar28 = local_350;
                           if (*local_358 == false) {
                              *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x1030ca;
                              remember_copied(pcVar28, dst_sb.st_ino, dst_sb.st_dev);
                              *local_358 = true;
                           }

                           pcVar55 = local_320;
                           pcVar28 = local_328;
                           if (x.verbose != false) {
                              if (x.move_mode == false) {
                                 *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x1034cc;
                                 emit_verbose("%s -> %s", pcVar55, pcVar28, (char*)0x0);
                              }
 else {
                                 *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x1020ff;
                                 uVar30 = quotearg_style(4, pcVar28);
                                 *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x102115;
                                 uVar31 = dcgettext(0, "created directory %s\n", 5);
                                 *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x102127;
                                 __printf_chk(2, uVar31, uVar30);
                              }

                           }

                           goto LAB_00102130;
                        }

                        *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x1056b7;
                        uVar30 = quotearg_style(4, pcVar55);
                        pcVar28 = "cannot stat %s";
                        puVar49 = (undefined1*)( (long)ppcVar50 + -0x20 );
                     }
 else {
                        *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x1057ea;
                        uVar30 = quotearg_style(4, pcVar55);
                        pcVar28 = "cannot create directory %s";
                     }

                     LAB_00103483:*(undefined8*)( puVar49 + -8 ) = 0x10348a;
                     uVar31 = dcgettext(0, pcVar28, 5);
                     *(undefined8*)( puVar49 + -8 ) = 0x103492;
                     piVar32 = __errno_location();
                     iVar22 = *piVar32;
                     *(undefined8*)( puVar49 + -8 ) = 0x1034a3;
                     error(0, iVar22, uVar31, uVar30);
                     goto LAB_00102a20;
                  }

                  if (( x.set_security_context != (selabel_handle*)0x0 ) || ( x.preserve_security_context != false )) {
                     *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x10332d;
                     _Var14 = set_file_security_ctx(pcVar55, false, x);
                     if (( !_Var14 ) && ( puVar49 = (undefined1*)( (long)ppcVar50 + -0x20 ) ),x.require_preserve_context != false) goto LAB_00102a20;
                  }

                  local_3b5 = '\0';
                  local_3b4 = 0;
                  LAB_00102130:pcVar28 = local_320;
                  bVar17 = local_380 != (stat*)0x0 & x.one_file_system;
                  if (( bVar17 == 0 ) || ( local_380.st_dev == src_sb.st_dev )) {
                     non_command_line_options.backup_type = x.backup_type;
                     non_command_line_options.dereference = x.dereference;
                     non_command_line_options.interactive = x.interactive;
                     non_command_line_options.sparse_mode = x.sparse_mode;
                     non_command_line_options.mode = x.mode;
                     non_command_line_options.copy_as_regular = x.copy_as_regular;
                     non_command_line_options.unlink_dest_before_opening = x.unlink_dest_before_opening;
                     non_command_line_options.unlink_dest_after_failed_open = x.unlink_dest_after_failed_open;
                     non_command_line_options.hard_link = x.hard_link;
                     non_command_line_options.move_mode = x.move_mode;
                     non_command_line_options.no_copy = x.no_copy;
                     non_command_line_options.exchange = x.exchange;
                     non_command_line_options.install_mode = x.install_mode;
                     non_command_line_options.chown_privileges = x.chown_privileges;
                     non_command_line_options.owner_privileges = x.owner_privileges;
                     non_command_line_options.one_file_system = x.one_file_system;
                     non_command_line_options.preserve_ownership = x.preserve_ownership;
                     non_command_line_options.preserve_mode = x.preserve_mode;
                     non_command_line_options.preserve_timestamps = x.preserve_timestamps;
                     non_command_line_options.explicit_no_preserve_mode = x.explicit_no_preserve_mode;
                     non_command_line_options._35_5_ = *(undefined5*)&x.field_0x23;
                     non_command_line_options.set_security_context = x.set_security_context;
                     non_command_line_options.preserve_links = x.preserve_links;
                     non_command_line_options.data_copy_required = x.data_copy_required;
                     non_command_line_options.require_preserve = x.require_preserve;
                     non_command_line_options.preserve_security_context = x.preserve_security_context;
                     non_command_line_options.require_preserve_context = x.require_preserve_context;
                     non_command_line_options.preserve_xattr = x.preserve_xattr;
                     non_command_line_options.require_preserve_xattr = x.require_preserve_xattr;
                     non_command_line_options.reduce_diagnostics = x.reduce_diagnostics;
                     non_command_line_options.recursive = x.recursive;
                     non_command_line_options.set_mode = x.set_mode;
                     non_command_line_options.symbolic_link = x.symbolic_link;
                     non_command_line_options._59_1_ = x.field_0x3b;
                     non_command_line_options.update = x.update;
                     non_command_line_options.verbose = x.verbose;
                     non_command_line_options.keep_directory_symlink = x.keep_directory_symlink;
                     non_command_line_options.debug = x.debug;
                     non_command_line_options.stdin_tty = x.stdin_tty;
                     non_command_line_options.open_dangling_dest_symlink = x.open_dangling_dest_symlink;
                     non_command_line_options.last_file = x.last_file;
                     non_command_line_options._70_2_ = *(undefined2*)&x.field_0x46;
                     non_command_line_options.rename_errno = x.rename_errno;
                     non_command_line_options.reflink_mode = x.reflink_mode;
                     non_command_line_options.dest_info = x.dest_info;
                     non_command_line_options.src_info = x.src_info;
                     *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x1021b0;
                     pcVar28 = (char*)savedir(pcVar28);
                     pcVar55 = local_320;
                     if (pcVar28 == (char*)0x0) {
                        bVar17 = 0;
                        *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x105458;
                        uVar30 = quotearg_style(4, pcVar55);
                        *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x10546e;
                        uVar31 = dcgettext(0, "cannot access %s", 5);
                        *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x105476;
                        piVar32 = __errno_location();
                        iVar22 = *piVar32;
                        *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x105487;
                        error(0, iVar22, uVar31, uVar30);
                     }
 else {
                        if (x.dereference == DEREF_COMMAND_LINE_ARGUMENTS) {
                           non_command_line_options.dereference = DEREF_NEVER;
                        }

                        bVar18 = false;
                        bVar17 = 1;
                        if (*pcVar28 != '\0') {
                           local_3a8 = &src_sb;
                           bVar18 = 0;
                           local_378 = (dir_list*)( local_350 + -(long)local_328 );
                           local_338 = CONCAT31(local_338._1_3_, 1);
                           local_398 = &rename_succeeded_1;
                           local_380 = (stat*)&local_copy_into_self;
                           local_390 = &first_dir_created;
                           local_3a0 = &non_command_line_options;
                           local_3c8 = x;
                           local_3c0 = pcVar28;
                           do {
                              pcVar55 = local_320;
                              *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x102296;
                              pcVar37 = (char*)file_name_concat(pcVar55, pcVar28, 0);
                              pcVar55 = local_328;
                              *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x1022aa;
                              pcVar55 = (char*)file_name_concat(pcVar55, pcVar28, 0);
                              iVar23 = local_32c;
                              pdVar38 = local_378;
                              psVar34 = local_3a8;
                              iVar22 = (int)local_368;
                              first_dir_created = *local_358;
                              *(_Bool**)( (long)ppcVar50 + -0x28 ) = local_398;
                              *(stat**)( (long)ppcVar50 + -0x30 ) = local_380;
                              *(_Bool**)( (long)ppcVar50 + -0x38 ) = local_390;
                              *(undefined8*)( (long)ppcVar50 + -0x40 ) = 0;
                              *(cp_options**)( (long)ppcVar50 + -0x48 ) = local_3a0;
                              *(ulong**)( (long)ppcVar50 + -0x50 ) = local_3b0;
                              *(undefined8*)( (long)ppcVar50 + -0x58 ) = 0x102308;
                              _Var16 = copy_internal(pcVar37, pcVar55, iVar23, pcVar55 + (long)pdVar38, iVar22, psVar34, *(dir_list**)( (long)ppcVar50 + -0x50 ), *(cp_options**)( (long)ppcVar50 + -0x48 ), *(_Bool*)( (long)ppcVar50 + -0x40 ), *(_Bool**)( (long)ppcVar50 + -0x38 ), *(_Bool**)( (long)ppcVar50 + -0x30 ), *(_Bool**)( (long)ppcVar50 + -0x28 ));
                              _Var14 = local_copy_into_self;
                              local_338 = CONCAT31(local_338._1_3_, (byte)local_338 & _Var16);
                              *(char*)&local_360.st_dev = SUB81(local_360.st_dev, 0) | local_copy_into_self;
                              *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x10232c;
                              free(pcVar55);
                              *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x102334;
                              free(pcVar37);
                              if (_Var14 != false) break;
                              bVar18 = bVar18 | first_dir_created;
                              *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x102277;
                              sVar40 = strlen(pcVar28);
                              pcVar28 = pcVar28 + sVar40 + 1;
                           }
 while ( *pcVar28 != '\0' );
                           pcVar28 = local_3c0;
                           x = local_3c8;
                           bVar17 = (byte)local_338;
                        }

                        *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x102358;
                        free(pcVar28);
                        *local_358 = (_Bool)bVar18;
                     }

                  }

                  local_358 = (_Bool*)( (ulong)local_358 & 0xffffffffffffff00 );
                  uVar58 = 0x4000;
                  bVar18 = 0;
                  LAB_00101345:pcVar28 = local_328;
                  if (( (byte)local_348 == '\0' ) && ( x.copy_as_regular == false )) {
                     if (uVar58 == 0x4000) {
                        if (( (char)local_334 != '\0' ) && ( x.dest_info != (Hash_table*)0x0 )) goto LAB_00101c81;
                     }
 else {
                        if (( x.set_security_context != (selabel_handle*)0x0 ) || ( x.preserve_security_context != false )) {
                           *(undefined8*)( (long)ppcVar53 + -8 ) = 0x101388;
                           _Var14 = set_file_security_ctx(pcVar28, false, x);
                           if (( !_Var14 ) && ( puVar49 = x.require_preserve_context != false )) goto LAB_00102a20;
                        }

                        if ((char)local_334 != '\0') goto LAB_00101c79;
                        if (x.hard_link != false) goto LAB_00101a0c;
                     }

                  }
 else {
                     if ((char)local_334 != '\0') {
                        LAB_00101c79:if (x.dest_info != (Hash_table*)0x0) {
                           LAB_00101c81:iVar22 = local_32c;
                           pcVar28 = local_340;
                           *(undefined8*)( (long)ppcVar53 + -8 ) = 0x101ca2;
                           iVar22 = fstatat(iVar22, pcVar28, (stat*)&dst_back_sb, 0x100);
                           pcVar28 = local_350;
                           if (iVar22 == 0) {
                              pHVar56 = x.dest_info;
                              *(undefined8*)( (long)ppcVar53 + -8 ) = 0x1032dc;
                              record_file(pHVar56, pcVar28, &dst_back_sb);
                           }

                        }

                     }

                     if (( x.hard_link != false ) && ( uVar58 != 0x4000 )) goto LAB_00101a0c;
                  }

                  iVar22 = local_32c;
                  pcVar28 = local_340;
                  if (bVar18 != 0) goto LAB_00101a0c;
                  if (x.preserve_timestamps != false) {
                     uVar43 = (uint)(byte)local_358;
                     dst_back_sb.st_dev = src_sb.st_atim.tv_sec;
                     dst_back_sb.st_ino = src_sb.st_atim.tv_nsec;
                     dst_back_sb.st_nlink = src_sb.st_mtim.tv_sec;
                     dst_back_sb.st_mode = (undefined4)src_sb.st_mtim.tv_nsec;
                     dst_back_sb.st_uid = src_sb.st_mtim.tv_nsec._4_4_;
                     *(undefined8*)( (long)ppcVar53 + -8 ) = 0x101d11;
                     iVar22 = utimensat(iVar22, pcVar28, (timespec*)&dst_back_sb, uVar43 << 8);
                     pcVar28 = local_328;
                     if (iVar22 != 0) {
                        *(undefined8*)( (long)ppcVar53 + -8 ) = 0x105799;
                        uVar30 = quotearg_style(4, pcVar28);
                        *(undefined8*)( (long)ppcVar53 + -8 ) = 0x1057af;
                        uVar31 = dcgettext(0, "preserving times for %s", 5);
                        *(undefined8*)( (long)ppcVar53 + -8 ) = 0x1057b7;
                        piVar32 = __errno_location();
                        iVar22 = *piVar32;
                        *(undefined8*)( (long)ppcVar53 + -8 ) = 0x1057c8;
                        error(0, iVar22, uVar31, uVar30);
                        if (x.require_preserve != false) goto LAB_001025a2;
                     }

                  }

                  pcVar55 = local_328;
                  iVar22 = local_32c;
                  pcVar28 = local_340;
                  if ((byte)local_358 != '\0') goto LAB_00101a0c;
                  uVar43 = local_330;
                  if (( x.preserve_ownership != false ) && ( ( ( (byte)local_348 != '\0' || ( src_sb.st_uid != dst_sb.st_uid ) ) || ( src_sb.st_gid != dst_sb.st_gid ) ) )) {
                     *(ulong*)( (long)ppcVar53 + -8 ) = (ulong)dst_sb.st_mode;
                     *(ulong*)( (long)ppcVar53 + -0x10 ) = (ulong)local_348 & 0xff;
                     *(ulong*)( (long)ppcVar53 + -0x18 ) = src_sb._32_8_ & 0xffffffff;
                     *(ulong*)( (long)ppcVar53 + -0x20 ) = (ulong)src_sb._24_8_ >> 0x20;
                     psVar34 = (stat*)( src_sb._24_8_ & 0xffffffff );
                     *(undefined8*)( (long)ppcVar53 + -0x28 ) = 0x101d93;
                     iVar22 = set_owner(x, pcVar55, iVar22, pcVar28, -1, psVar34, *(_Bool*)( (long)ppcVar53 + -0x20 ), *(stat**)( (long)ppcVar53 + -0x18 ));
                     if (iVar22 == -1) goto LAB_001025a2;
                     uVar43 = local_330 & 0xfffff1ff;
                     if (iVar22 != 0) {
                        uVar43 = local_330;
                     }

                  }

                  local_330 = uVar43;
                  pcVar55 = local_320;
                  pcVar28 = local_328;
                  uVar43 = local_330;
                  if (( x.preserve_mode == false ) && ( x.move_mode == false )) {
                     if (x.set_mode == false) {
                        if (( x.explicit_no_preserve_mode == false ) || ( (byte)local_348 == '\0' )) {
                           if (local_3b4 == 0) {
                              LAB_00101dfd:if (local_3b5 == '\0') goto LAB_00101a0c;
                           }
 else {
                              uVar43 = mask_0;
                              if (mask_0 == 0xffffffff) {
                                 *(undefined8*)( (long)ppcVar53 + -8 ) = 0x104b87;
                                 uVar43 = umask(0);
                                 *(undefined8*)( (long)ppcVar53 + -8 ) = 0x104b96;
                                 mask_0 = uVar43;
                                 umask(uVar43);
                              }

                              iVar22 = local_32c;
                              pcVar28 = local_340;
                              local_3b4 = local_3b4 & ~uVar43;
                              if (local_3b4 == 0) goto LAB_00101dfd;
                              if (local_3b5 != '\x01') {
                                 if ((byte)local_348 != '\0') {
                                    *(undefined8*)( (long)ppcVar53 + -8 ) = 0x104ca5;
                                    iVar22 = fstatat(iVar22, pcVar28, (stat*)&dst_sb, 0x100);
                                    pcVar28 = local_328;
                                    if (iVar22 != 0) goto LAB_00104cb4;
                                 }

                                 local_3cc = dst_sb.st_mode;
                                 if (( local_3b4 & ~dst_sb.st_mode ) == 0) goto LAB_00101a0c;
                              }

                           }

                           iVar22 = local_32c;
                           pcVar28 = local_340;
                           uVar43 = local_3cc | local_3b4;
                           *(undefined8*)( (long)ppcVar53 + -8 ) = 0x101e2f;
                           iVar22 = fchmodat(iVar22, pcVar28, uVar43, 0x100);
                           pcVar28 = local_328;
                           if (iVar22 == 0) goto LAB_00101a0c;
                           *(undefined8*)( (long)ppcVar53 + -8 ) = 0x101e48;
                           uVar30 = quotearg_style(4, pcVar28);
                           *(undefined8*)( (long)ppcVar53 + -8 ) = 0x101e5e;
                           uVar31 = dcgettext(0, "preserving permissions for %s", 5);
                           *(undefined8*)( (long)ppcVar53 + -8 ) = 0x101e66;
                           piVar32 = __errno_location();
                           iVar22 = *piVar32;
                           *(undefined8*)( (long)ppcVar53 + -8 ) = 0x101e77;
                           error(0, iVar22, uVar31, uVar30);
                           goto LAB_00101e80;
                        }

                        uVar43 = 0x1b6;
                        if (( ( local_330 & 0x7000 ) == 0x4000 ) && ( uVar43 = 0x1ff(local_330 & 0xf000) == 0x4000 )) {
                           uVar43 = dst_sb.st_mode & 0x400 | 0x1ff;
                        }

                        uVar27 = mask_0;
                        if (mask_0 == 0xffffffff) {
                           *(undefined8*)( (long)ppcVar53 + -8 ) = 0x104bb6;
                           uVar27 = umask(0);
                           *(undefined8*)( (long)ppcVar53 + -8 ) = 0x104bc5;
                           mask_0 = uVar27;
                           umask(uVar27);
                        }

                        uVar43 = ~uVar27 & uVar43;
                     }
 else {
                        uVar43 = x.mode;
                     }

                     pcVar28 = local_328;
                     *(undefined8*)( (long)ppcVar53 + -8 ) = 0x103a08;
                     iVar22 = xset_acl(pcVar28, 0xffffffff, uVar43);
                     if (iVar22 == 0) goto LAB_00101a0c;
                  }
 else {
                     *(undefined8*)( (long)ppcVar53 + -8 ) = 0x101ebc;
                     iVar22 = xcopy_acl(pcVar55, 0xffffffff, pcVar28, 0xffffffff, uVar43);
                     if (iVar22 == 0) goto LAB_00101a0c;
                     LAB_00101e80:if (x.require_preserve == false) goto LAB_00101a0c;
                  }

               }

            }

         }
 else {
            LAB_00101630:ppcVar50 = ppcVar47;
            if (x.exchange != false) {
               if (x.move_mode == false) goto LAB_0010121b;
               LAB_00101648:if ((int)uVar33 != 0x11) goto LAB_00101651;
               local_388 = (stat*)0x0;
               uVar43 = 1;
               LAB_00101980:pcVar55 = local_320;
               iVar22 = local_32c;
               pcVar28 = local_340;
               *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1019a1;
               iVar22 = renameatu(0xffffff9c, pcVar55, iVar22, pcVar28, uVar43 * 2);
               ppcVar47 = ppcVar50;
               if (iVar22 != 0) {
                  *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1019aa;
                  puVar29 = (uint*)__errno_location();
                  uVar33 = ( ulong ) * puVar29;
                  if (*puVar29 != 0) goto LAB_0010165c;
               }

               LAB_001019b8:ppcVar50 = ppcVar47;
               if (x.verbose != false) goto LAB_00101128;
               goto LAB_001019c6;
            }

            LAB_001016fc:_Var10 = src_sb.st_ino;
            _Var9 = src_sb.st_dev;
            pcVar28 = local_350;
            if (( x.recursive != false ) && ( ( local_330 & 0xf000 ) == 0x4000 )) {
               if ((char)local_334 == '\0') {
                  *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1034e0;
                  local_388 = (stat*)src_to_dest_lookup(_Var10, _Var9);
               }
 else {
                  *(undefined8*)( (long)ppcVar50 + -8 ) = 0x101a78;
                  local_388 = (stat*)remember_copied(pcVar28, _Var10);
               }

               if (local_388 == (stat*)0x0) {
                  LAB_00104dd0:cVar15 = x.move_mode;
                  LAB_00101956:if (cVar15 == '\0') goto LAB_0010121b;
                  goto LAB_0010195e;
               }

               LAB_00101a8d:pcVar28 = local_320;
               iVar22 = local_32c;
               psVar34 = local_388;
               *(undefined8*)( (long)ppcVar50 + -8 ) = 0x101aab;
               cVar15 = same_nameat(0xffffff9c, pcVar28, iVar22, psVar34);
               iVar22 = local_32c;
               pcVar28 = local_350;
               psVar34 = local_388;
               if (cVar15 == '\0') {
                  *(undefined8*)( (long)ppcVar50 + -8 ) = 0x101ace;
                  cVar15 = same_nameat(iVar22, pcVar28, iVar22, psVar34);
                  pcVar55 = local_328;
                  pcVar28 = local_350;
                  psVar34 = local_388;
                  if (cVar15 == '\0') {
                     if (( x.dereference != DEREF_ALWAYS ) && ( ( x.dereference != DEREF_COMMAND_LINE_ARGUMENTS || ( (char)local_334 == '\0' ) ) )) {
                        *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10506e;
                        pcVar28 = subst_suffix(pcVar55, pcVar28, (char*)psVar34);
                        *(undefined8*)( (long)ppcVar50 + -8 ) = 0x105083;
                        uVar30 = quotearg_n_style(1, 4, pcVar28);
                        *(undefined8*)( (long)ppcVar50 + -8 ) = 0x105095;
                        uVar31 = quotearg_n_style(0, 4, pcVar55);
                        *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1050ab;
                        uVar35 = dcgettext(0, "will not create hard link %s to directory %s", 5);
                        *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1050bf;
                        error(0, 0, uVar35, uVar31, uVar30);
                        *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1050c7;
                        free(pcVar28);
                        cVar15 = x.preserve_security_context;
                        goto joined_r0x001050cd;
                     }

                     if (x.move_mode == false) {
                        local_368 = (stat*)CONCAT44(local_368._4_4_, (uint)(byte)local_348);
                        goto LAB_00101233;
                     }

                     if ((int)uVar33 == 0x11) {
                        uVar43 = (uint)x.exchange;
                        goto LAB_00101980;
                     }

                     goto LAB_0010165c;
                  }

                  *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1055da;
                  uVar30 = quotearg_style(4, top_level_src_name);
                  *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1055f0;
                  uVar31 = dcgettext(0, "warning: source directory %s specified more than once", 5);
                  *(undefined8*)( (long)ppcVar50 + -8 ) = 0x105601;
                  error(0, 0, uVar31, uVar30);
                  if (( x.move_mode == false ) || ( psVar34 = local_368 ),local_368 == (stat*)0x0) goto LAB_00101a06;
                  goto LAB_00104f4d;
               }

               *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104f90;
               uVar30 = quotearg_n_style(1, 4, top_level_dst_name);
               *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104fa6;
               uVar31 = quotearg_n_style(0, 4, top_level_src_name);
               *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104fbc;
               uVar35 = dcgettext(0, "cannot copy a directory, %s, into itself, %s", 5);
               *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104fd0;
               error(0, 0, uVar35, uVar31, uVar30);
               *(_Bool*)&local_360.st_dev = true;
               cVar15 = x.preserve_security_context;
               joined_r0x001050cd:if (cVar15 != '\0') goto LAB_00103176;
               LAB_00102a50:iVar22 = local_32c;
               pcVar28 = local_340;
               ppcVar53 = ppcVar50;
               if (local_370 != (stat*)0x0) {
                  pcVar55 = (char*)( ( (long)local_350 - (long)local_328 ) + (long)local_370 );
                  *(undefined8*)( (long)ppcVar50 + -8 ) = 0x102a88;
                  iVar22 = renameat(iVar22, pcVar55, iVar22, pcVar28);
                  pcVar28 = local_328;
                  if (iVar22 != 0) {
                     *(undefined8*)( (long)ppcVar50 + -8 ) = 0x105658;
                     uVar30 = quotearg_style(4, pcVar28);
                     pcVar28 = "cannot un-backup %s";
                     goto LAB_00104ccd;
                  }

                  if (x.verbose != false) {
                     *(undefined8*)( (long)ppcVar50 + -8 ) = 0x102ab2;
                     uVar30 = quotearg_n_style(1, 4, pcVar28);
                     psVar34 = local_370;
                     *(undefined8*)( (long)ppcVar50 + -8 ) = 0x102ac8;
                     uVar31 = quotearg_n_style(0, 4, psVar34);
                     *(undefined8*)( (long)ppcVar50 + -8 ) = 0x102ade;
                     uVar35 = dcgettext(0, "%s -> %s (unbackup)\n", 5);
                     *(undefined8*)( (long)ppcVar50 + -8 ) = 0x102af3;
                     __printf_chk(2, uVar35, uVar31, uVar30);
                  }

               }

               goto LAB_001025a2;
            }

            cVar15 = x.move_mode;
            if ((_Bool)cVar15 == false) {
               if (( x.preserve_links == false ) || ( x.hard_link != false )) goto LAB_0010121b;
               LAB_00101928:if (( 1 < src_sb.st_nlink ) || ( ( ( (char)local_334 != '\0' && ( x.dereference == DEREF_COMMAND_LINE_ARGUMENTS ) ) || ( x.dereference == DEREF_ALWAYS ) ) )) {
                  *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1030fa;
                  local_388 = (stat*)remember_copied(pcVar28, _Var10, _Var9);
                  LAB_00103101:pcVar55 = local_328;
                  iVar22 = local_32c;
                  pcVar28 = local_350;
                  if (local_388 != (stat*)0x0) {
                     if (( local_330 & 0xf000 ) == 0x4000) goto LAB_00101a8d;
                     *(ulong*)( (long)ppcVar50 + -0x10 ) = (ulong)local_338;
                     psVar34 = local_388;
                     *(ulong*)( (long)ppcVar50 + -0x18 ) = (ulong)x.verbose;
                     *(undefined8*)( (long)ppcVar50 + -0x20 ) = 1;
                     *(undefined8*)( (long)ppcVar50 + -0x28 ) = 0x10315e;
                     _Var14 = create_hard_link((char*)0x0, iVar22, (char*)psVar34, pcVar55, iVar22, pcVar28, *(_Bool*)( (long)ppcVar50 + -0x20 ), *(_Bool*)( (long)ppcVar50 + -0x18 ), *(_Bool*)( (long)ppcVar50 + -0x10 ));
                     if (_Var14) goto LAB_00101a06;
                     cVar15 = x.preserve_security_context;
                     goto joined_r0x001050cd;
                  }

                  goto LAB_00104dd0;
               }

               goto LAB_00101956;
            }

            if (src_sb.st_nlink == 1) {
               *(undefined8*)( (long)ppcVar50 + -8 ) = 0x103503;
               local_388 = (stat*)src_to_dest_lookup(_Var10, _Var9);
               goto LAB_00103101;
            }

            if (( x.preserve_links != false ) && ( x.hard_link == false )) goto LAB_00101928;
            LAB_0010195e:if ((int)uVar33 == 0x11) {
               local_388 = (stat*)0x0;
               uVar43 = (uint)x.exchange;
               goto LAB_00101980;
            }

            LAB_00101651:local_388 = (stat*)0x0;
            LAB_0010165c:pcVar55 = local_328;
            iVar22 = local_32c;
            pcVar28 = local_340;
            iVar23 = (int)uVar33;
            if (iVar23 == 0x16) {
               *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104f06;
               uVar30 = quotearg_n_style(1, 4, top_level_dst_name);
               *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104f1c;
               uVar31 = quotearg_n_style(0, 4, top_level_src_name);
               *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104f32;
               uVar35 = dcgettext(0, "cannot move %s to a subdirectory of itself, %s", 5);
               *(undefined8*)( (long)ppcVar50 + -8 ) = 0x104f46;
               error(0, 0, uVar35, uVar31, uVar30);
               psVar34 = local_360;
               LAB_00104f4d:*(_Bool*)&psVar34.st_dev = true;
               goto LAB_00101a06;
            }

            if (iVar23 == 0x12) {
               uVar43._0_1_ = x.move_mode;
               uVar43._1_1_ = x.no_copy;
               uVar43._2_1_ = x.exchange;
               uVar43._3_1_ = x.install_mode;
               if (( uVar43 & 0xffff00 ) == 0) {
                  uVar43 = local_330 & 0xf000;
                  *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1016a9;
                  iVar22 = unlinkat(iVar22, pcVar28, ( uint )(uVar43 == 0x4000) << 9);
                  if (iVar22 == 0) {
                     LAB_001016be:if (( x.verbose != false ) && ( uVar43 != 0x4000 )) {
                        *(undefined8*)( (long)ppcVar50 + -8 ) = 0x102f73;
                        pcVar37 = (char*)dcgettext(0, "copied %s -> %s", 5);
                        pcVar55 = local_320;
                        pcVar28 = local_328;
                        psVar34 = local_370;
                        *(undefined8*)( (long)ppcVar50 + -8 ) = 0x102f90;
                        emit_verbose(pcVar37, pcVar55, pcVar28, (char*)psVar34);
                     }

                     local_368 = (stat*)CONCAT44(local_368._4_4_, 1);
                     local_348 = (stat*)CONCAT71(local_348._1_7_, 1);
                     goto LAB_00101233;
                  }

                  *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1016b2;
                  puVar29 = (uint*)__errno_location();
                  pcVar28 = local_328;
                  if (*puVar29 == 2) goto LAB_001016be;
                  *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1054a2;
                  uVar30 = quotearg_n_style(1, 4, pcVar28);
                  pcVar28 = local_320;
                  *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1054b8;
                  uVar31 = quotearg_n_style(0, 4, pcVar28);
                  *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1054ce;
                  uVar35 = dcgettext(0, "inter-device move failed: %s to %s; unable to remove target", 5);
                  uVar33 = ( ulong ) * puVar29;
               }
 else {
                  *(undefined8*)( (long)ppcVar50 + -8 ) = 0x102636;
                  uVar30 = quotearg_n_style(1, 4, pcVar55);
                  if (x.exchange == false) goto LAB_00102645;
                  LAB_0010567f:pcVar28 = local_320;
                  *(undefined8*)( (long)ppcVar50 + -8 ) = 0x105692;
                  uVar31 = quotearg_n_style(0, 4, pcVar28);
                  pcVar28 = "cannot exchange %s and %s";
                  LAB_00102667:*(undefined8*)( (long)ppcVar50 + -8 ) = 0x10266e;
                  uVar35 = dcgettext(0, pcVar28, 5);
               }

               *(undefined8*)( (long)ppcVar50 + -8 ) = 0x102682;
               error(0, uVar33, uVar35, uVar31, uVar30);
            }
 else {
               *(undefined8*)( (long)ppcVar50 + -8 ) = 0x102536;
               uVar30 = quotearg_n_style(1, 4, pcVar55);
               if (x.exchange != false) goto LAB_0010567f;
               if (0x27 < iVar23) {
                  if (iVar23 == 0x7a) goto LAB_0010256b;
                  LAB_00102645:pcVar28 = local_320;
                  *(undefined8*)( (long)ppcVar50 + -8 ) = 0x102658;
                  uVar31 = quotearg_n_style(0, 4, pcVar28);
                  pcVar28 = "cannot move %s to %s";
                  goto LAB_00102667;
               }

               if (( iVar23 < 0x11 ) || ( ( 0x8094220000U >> ( uVar33 & 0x3f ) & 1 ) == 0 )) goto LAB_00102645;
               LAB_0010256b:*(undefined8*)( (long)ppcVar50 + -8 ) = 0x10257e;
               uVar31 = dcgettext(0, "cannot overwrite %s", 5);
               *(undefined8*)( (long)ppcVar50 + -8 ) = 0x10258f;
               error(0, uVar33, uVar31, uVar30);
            }

            _Var10 = src_sb.st_ino;
            _Var9 = src_sb.st_dev;
            *(undefined8*)( (long)ppcVar50 + -8 ) = 0x1025a2;
            forget_created(_Var10, _Var9);
            ppcVar53 = ppcVar50;
         }

         LAB_001025a2:bVar17 = 0;
         goto LAB_00101a0c;
      }

      psVar34 = &src_sb;
      if (( ( local_330 & 0xf000 ) == 0x4000 ) || ( x.backup_type != no_backups )) {
         LAB_0010107c:record_file(pHVar56, local_320, psVar34);
         goto LAB_00101088;
      }

      local_348 = &src_sb;
      cVar15 = seen_file(pHVar56, local_320);
      if (cVar15 == '\0') {
         pHVar56 = x.src_info;
         psVar34 = local_348;
         goto LAB_0010107c;
      }

      uVar30 = quotearg_style(4, local_320);
      uVar31 = dcgettext(0, "warning: source file %s specified more than once", 5);
      error(0, 0, uVar31, uVar30);
      ppcVar50 = &local_3d8;
   }

   LAB_00101a06:bVar17 = 1;
   ppcVar53 = ppcVar50;
   LAB_00101a0c:if (lVar5 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (_Bool)bVar17;
   }

   /* WARNING: Subroutine does not return */
   *(undefined8*)( (long)ppcVar53 + -8 ) = 0x104d92;
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */void dest_info_init(cp_options *x) {
   Hash_table *pHVar1;
   long lVar2;
   char *dst_relname;
   int dst_dirfd;
   _Bool *unaff_RBX;
   char *dst_name;
   long lVar3;
   char *src_name;
   int nonexistent_dst;
   cp_options *in_R9;
   long in_FS_OFFSET;
   _Bool *unaff_retaddr;
   _Bool _Stack_21;
   long lStack_20;
   long lStack_18;
   cp_options *pcStack_10;
   lVar3 = 0x3d;
   pcStack_10 = (cp_options*)0x105859;
   pHVar1 = (Hash_table*)hash_initialize(0x3d, 0, &triple_hash, &triple_compare, &triple_free);
   x.dest_info = pHVar1;
   if (pHVar1 != (Hash_table*)0x0) {
      return;
   }

   pcStack_10 = (cp_options*)0x105869;
   xalloc_die();
   nonexistent_dst = 0x107278;
   dst_name = (char*)0x0;
   dst_relname = &triple_compare;
   src_name = (char*)0x3d;
   lStack_18 = 0x105899;
   pcStack_10 = x;
   lVar2 = hash_initialize(0x3d, 0, &triple_hash_no_name);
   *(long*)( lVar3 + 0x58 ) = lVar2;
   if (lVar2 != 0) {
      return;
   }

   lStack_18 = 0x1058a9;
   xalloc_die();
   lStack_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lStack_18 = lVar3;
   if (numbered_backups < in_R9.backup_type) {
      /* WARNING: Subroutine does not return */
      __assert_fail("((unsigned int) (co->backup_type) <= numbered_backups)", "src/copy.c", 0xd1d, "valid_options");
   }

   if (in_R9.sparse_mode - SPARSE_NEVER < 3) {
      if (REFLINK_ALWAYS < in_R9.reflink_mode) {
         /* WARNING: Subroutine does not return */
         __assert_fail("((co->reflink_mode) == REFLINK_NEVER || (co->reflink_mode) == REFLINK_AUTO || (co->reflink_mode) == REFLINK_ALWAYS)", "src/copy.c", 0xd1f, "valid_options");
      }

      if (( in_R9.hard_link != false ) && ( in_R9.symbolic_link != false )) {
         /* WARNING: Subroutine does not return */
         __assert_fail("!(co->hard_link && co->symbolic_link)", "src/copy.c", 0xd20, "valid_options");
      }

      if (( in_R9.sparse_mode != SPARSE_AUTO ) && ( in_R9.reflink_mode == REFLINK_ALWAYS )) {
         /* WARNING: Subroutine does not return */
         __assert_fail("! (co->reflink_mode == REFLINK_ALWAYS && co->sparse_mode != SPARSE_AUTO)", "src/copy.c", 0xd21, "valid_options");
      }

      _Stack_21 = false;
      top_level_dst_name = dst_name;
      top_level_src_name = src_name;
      copy_internal(src_name, dst_name, dst_dirfd, dst_relname, nonexistent_dst, (stat*)0x0, (dir_list*)0x0, in_R9, true, &_Stack_21, unaff_RBX, unaff_retaddr);
      if (lStack_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Subroutine does not return */
   __assert_fail("((co->sparse_mode) == SPARSE_NEVER || (co->sparse_mode) == SPARSE_AUTO || (co->sparse_mode) == SPARSE_ALWAYS)", "src/copy.c", 0xd1e, "valid_options");
}
/* WARNING: Unknown calling convention */void src_info_init(cp_options *x) {
   Hash_table *pHVar1;
   char *dst_relname;
   int dst_dirfd;
   char *dst_name;
   char *src_name;
   int nonexistent_dst;
   cp_options *in_R9;
   long in_FS_OFFSET;
   _Bool *unaff_retaddr;
   _Bool *in_stack_00000008;
   _Bool _Stack_19;
   long lStack_18;
   cp_options *pcStack_10;
   nonexistent_dst = 0x107278;
   dst_name = (char*)0x0;
   dst_relname = &triple_compare;
   src_name = (char*)0x3d;
   pcStack_10 = (cp_options*)0x105899;
   pHVar1 = (Hash_table*)hash_initialize(0x3d, 0, &triple_hash_no_name);
   x.src_info = pHVar1;
   if (pHVar1 != (Hash_table*)0x0) {
      return;
   }

   pcStack_10 = (cp_options*)0x1058a9;
   xalloc_die();
   lStack_18 = *(long*)( in_FS_OFFSET + 0x28 );
   pcStack_10 = x;
   if (numbered_backups < in_R9.backup_type) {
      /* WARNING: Subroutine does not return */
      __assert_fail("((unsigned int) (co->backup_type) <= numbered_backups)", "src/copy.c", 0xd1d, "valid_options");
   }

   if (2 < in_R9.sparse_mode - SPARSE_NEVER) {
      /* WARNING: Subroutine does not return */
      __assert_fail("((co->sparse_mode) == SPARSE_NEVER || (co->sparse_mode) == SPARSE_AUTO || (co->sparse_mode) == SPARSE_ALWAYS)", "src/copy.c", 0xd1e, "valid_options");
   }

   if (in_R9.reflink_mode < ( REFLINK_ALWAYS | REFLINK_AUTO )) {
      if (( in_R9.hard_link != false ) && ( in_R9.symbolic_link != false )) {
         /* WARNING: Subroutine does not return */
         __assert_fail("!(co->hard_link && co->symbolic_link)", "src/copy.c", 0xd20, "valid_options");
      }

      if (( in_R9.sparse_mode != SPARSE_AUTO ) && ( in_R9.reflink_mode == REFLINK_ALWAYS )) {
         /* WARNING: Subroutine does not return */
         __assert_fail("! (co->reflink_mode == REFLINK_ALWAYS && co->sparse_mode != SPARSE_AUTO)", "src/copy.c", 0xd21, "valid_options");
      }

      _Stack_19 = false;
      top_level_dst_name = dst_name;
      top_level_src_name = src_name;
      copy_internal(src_name, dst_name, dst_dirfd, dst_relname, nonexistent_dst, (stat*)0x0, (dir_list*)0x0, in_R9, true, &_Stack_19, unaff_retaddr, in_stack_00000008);
      if (lStack_18 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Subroutine does not return */
   __assert_fail("((co->reflink_mode) == REFLINK_NEVER || (co->reflink_mode) == REFLINK_AUTO || (co->reflink_mode) == REFLINK_ALWAYS)", "src/copy.c", 0xd1f, "valid_options");
}
int copy(EVP_PKEY_CTX *dst, EVP_PKEY_CTX *src) {
   _Bool _Var1;
   undefined7 extraout_var;
   char *in_RCX;
   int in_EDX;
   int in_R8D;
   cp_options *in_R9;
   long in_FS_OFFSET;
   _Bool *in_stack_00000008;
   _Bool *in_stack_00000010;
   _Bool first_dir_created_per_command_line_arg;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (numbered_backups < in_R9.backup_type) {
      /* WARNING: Subroutine does not return */
      __assert_fail("((unsigned int) (co->backup_type) <= numbered_backups)", "src/copy.c", 0xd1d, "valid_options");
   }

   if (2 < in_R9.sparse_mode - SPARSE_NEVER) {
      /* WARNING: Subroutine does not return */
      __assert_fail("((co->sparse_mode) == SPARSE_NEVER || (co->sparse_mode) == SPARSE_AUTO || (co->sparse_mode) == SPARSE_ALWAYS)", "src/copy.c", 0xd1e, "valid_options");
   }

   if (REFLINK_ALWAYS < in_R9.reflink_mode) {
      /* WARNING: Subroutine does not return */
      __assert_fail("((co->reflink_mode) == REFLINK_NEVER || (co->reflink_mode) == REFLINK_AUTO || (co->reflink_mode) == REFLINK_ALWAYS)", "src/copy.c", 0xd1f, "valid_options");
   }

   if (( in_R9.hard_link != false ) && ( in_R9.symbolic_link != false )) {
      /* WARNING: Subroutine does not return */
      __assert_fail("!(co->hard_link && co->symbolic_link)", "src/copy.c", 0xd20, "valid_options");
   }

   if (( in_R9.sparse_mode != SPARSE_AUTO ) && ( in_R9.reflink_mode == REFLINK_ALWAYS )) {
      /* WARNING: Subroutine does not return */
      __assert_fail("! (co->reflink_mode == REFLINK_ALWAYS && co->sparse_mode != SPARSE_AUTO)", "src/copy.c", 0xd21, "valid_options");
   }

   first_dir_created_per_command_line_arg = false;
   top_level_dst_name = (char*)src;
   top_level_src_name = (char*)dst;
   _Var1 = copy_internal((char*)dst, (char*)src, in_EDX, in_RCX, in_R8D, (stat*)0x0, (dir_list*)0x0, in_R9, true, &first_dir_created_per_command_line_arg, in_stack_00000008, in_stack_00000010);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (int)CONCAT71(extraout_var, _Var1);
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */void cp_options_default(cp_options *x) {
   undefined2 uVar1;
   __uid_t _Var2;
   ulong uVar3;
   undefined8 *puVar4;
   x.backup_type = no_backups;
   x.dereference = 0;
   x.src_info = (Hash_table*)0x0;
   puVar4 = (undefined8*)( ( ulong ) & x.interactive & 0xfffffffffffffff8 );
   uVar3 = ( ulong )(( (int)x - (int)puVar4 ) + 0x60U >> 3);
   for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
   }

   _Var2 = geteuid();
   x.rename_errno = -1;
   uVar1 = CONCAT11(_Var2 == 0, _Var2 == 0);
   x.chown_privileges = (_Bool)(char)uVar1;
   x.owner_privileges = (_Bool)(char)( (ushort)uVar1 >> 8 );
   return;
}
/* WARNING: Unknown calling convention */_Bool chown_failure_ok(cp_options *x) {
   uint *puVar1;
   byte bVar2;
   puVar1 = (uint*)__errno_location();
   bVar2 = 0;
   if (( *puVar1 < 0x17 ) && ( bVar2 = ( 0x402002UL >> ( ( ulong ) * puVar1 & 0x3f ) & 1 ) != 0 ),(bool)bVar2) {
      bVar2 = x.chown_privileges ^ 1;
   }

   return (_Bool)bVar2;
}
/* WARNING: Unknown calling convention */mode_t cached_umask(void) {
   __mode_t __mask;
   if (mask_0 != 0xffffffff) {
      return mask_0;
   }

   __mask = umask(0);
   mask_0 = __mask;
   umask(__mask);
   return __mask;
}

