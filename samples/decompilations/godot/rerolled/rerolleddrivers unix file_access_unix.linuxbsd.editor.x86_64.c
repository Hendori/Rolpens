/* FileAccessUnix::is_open() const */bool FileAccessUnix::is_open(FileAccessUnix *this) {
   return *(long*)( this + 400 ) != 0;
}
/* FileAccessUnix::get_error() const */undefined4 FileAccessUnix::get_error(FileAccessUnix *this) {
   return *(undefined4*)( this + 0x19c );
}
/* FileAccessUnix::_get_read_only_attribute(String const&) */undefined8 FileAccessUnix::_get_read_only_attribute(String *param_1) {
   return 0;
}
/* FileAccessUnix::_set_read_only_attribute(String const&, bool) */undefined8 FileAccessUnix::_set_read_only_attribute(String *param_1, bool param_2) {
   return 2;
}
/* FileAccessUnix::eof_reached() const */bool FileAccessUnix::eof_reached(FileAccessUnix *this) {
   int iVar1;
   iVar1 = feof(*(FILE**)( this + 400 ));
   return iVar1 != 0;
}
/* FileAccessUnix::get_length() const */__off64_t FileAccessUnix::get_length(FileAccessUnix *this) {
   int iVar1;
   __off64_t __off;
   __off64_t _Var2;
   if (*(FILE**)( this + 400 ) == (FILE*)0x0) {
      _err_print_error("get_length", "drivers/unix/file_access_unix.cpp", 0xfd, "Parameter \"f\" is null.", "File must be opened before use.", 0, 0);
      _Var2 = 0;
   }
 else {
      __off = ftello64(*(FILE**)( this + 400 ));
      if (__off < 0) {
         _err_print_error("get_length", "drivers/unix/file_access_unix.cpp", 0x100, "Condition \"pos < 0\" is true. Returning: 0", 0, 0);
         _Var2 = 0;
      }
 else {
         iVar1 = fseeko64(*(FILE**)( this + 400 ), 0, 2);
         if (iVar1 == 0) {
            _Var2 = ftello64(*(FILE**)( this + 400 ));
            if (_Var2 < 0) {
               _err_print_error("get_length", "drivers/unix/file_access_unix.cpp", 0x103, "Condition \"size < 0\" is true. Returning: 0", 0, 0);
               _Var2 = 0;
            }
 else {
               iVar1 = fseeko64(*(FILE**)( this + 400 ), __off, 0);
               if (iVar1 != 0) {
                  _err_print_error("get_length", "drivers/unix/file_access_unix.cpp", 0x104, "Condition \"fseeko(f, pos, 0)\" is true. Returning: 0", 0, 0);
                  _Var2 = 0;
               }

            }

         }
 else {
            _err_print_error("get_length", "drivers/unix/file_access_unix.cpp", 0x101, "Condition \"fseeko(f, 0, 2)\" is true. Returning: 0", 0, 0);
            _Var2 = 0;
         }

      }

   }

   return _Var2;
}
/* FileAccessUnix::resize(long) */undefined8 FileAccessUnix::resize(FileAccessUnix *this, long param_1) {
   int iVar1;
   if (*(FILE**)( this + 400 ) == (FILE*)0x0) {
      _err_print_error("resize", "drivers/unix/file_access_unix.cpp", 0x11c, "Parameter \"f\" is null.", "File must be opened before use.", 0, 0);
   }
 else {
      iVar1 = fileno(*(FILE**)( this + 400 ));
      iVar1 = ftruncate64(iVar1, param_1);
      if (iVar1 == 0x16) {
         return 0x1f;
      }

      if (iVar1 < 0x17) {
         if (iVar1 == 0) {
            return 0;
         }

         if (iVar1 == 9) {
            return 0xc;
         }

      }
 else if (iVar1 == 0x1b) {
         return 6;
      }

   }

   return 1;
}
/* FileAccessUnix::flush() */void FileAccessUnix::flush(FileAccessUnix *this) {
   if (*(FILE**)( this + 400 ) != (FILE*)0x0) {
      fflush(*(FILE**)( this + 400 ));
      return;
   }

   _err_print_error("flush", "drivers/unix/file_access_unix.cpp", 0x12d, "Parameter \"f\" is null.", "File must be opened before use.", 0, 0);
   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
 else {
         *(undefined8*)this = 0;
      }

   }

   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) {
            return;
         }

         LOCK();
         lVar3 = *plVar1;
         bVar4 = lVar2 == lVar3;
         if (bVar4) {
            *plVar1 = lVar2 + 1;
            lVar3 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }

   }

   return;
}
/* FileAccessUnix::get_path() const */void FileAccessUnix::get_path(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x1b0 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x1b0 ));
   }

   return;
}
/* FileAccessUnix::get_path_absolute() const */void FileAccessUnix::get_path_absolute(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x1a8 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x1a8 ));
   }

   return;
}
/* FileAccessUnix::_set_unix_permissions(String const&, BitField<FileAccess::UnixPermissionFlags>)
    */bool FileAccessUnix::_set_unix_permissions(FileAccessUnix *this, undefined8 param_1, __mode_t param_3) {
   long *plVar1;
   long lVar2;
   int iVar3;
   char *__file;
   long in_FS_OFFSET;
   long local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)this + 0x180 ) )(&local_30, this, param_1);
   String::utf8();
   __file = (char*)CharString::get_data();
   iVar3 = chmod(__file, param_3);
   lVar2 = local_28;
   if (local_28 != 0) {
      LOCK();
      plVar1 = (long*)( local_28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_28 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_30;
   if (local_30 != 0) {
      LOCK();
      plVar1 = (long*)( local_30 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_30 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3 != 0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* FileAccessUnix::_get_modified_time(String const&) */__time_t FileAccessUnix::_get_modified_time(FileAccessUnix *this, String *param_1) {
   long *plVar1;
   int iVar2;
   char *__file;
   long lVar3;
   __time_t _Var4;
   stat64 *psVar5;
   long in_FS_OFFSET;
   byte bVar6;
   long local_c8;
   long local_c0;
   stat64 local_b8;
   long local_20;
   bVar6 = 0;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)this + 0x180 ) )(&local_c8, this, param_1);
   psVar5 = &local_b8;
   for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
      psVar5.st_dev = 0;
      psVar5 = (stat64*)( (long)psVar5 + ( (ulong)bVar6 * -2 + 1 ) * 8 );
   }

   String::utf8();
   __file = (char*)CharString::get_data();
   iVar2 = stat64(__file, &local_b8);
   lVar3 = local_c0;
   if (local_c0 != 0) {
      LOCK();
      plVar1 = (long*)( local_c0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_c8;
   _Var4 = 0;
   if (iVar2 == 0) {
      _Var4 = local_b8.st_mtim.tv_sec;
   }

   if (local_c8 != 0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return _Var4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* FileAccessUnix::file_exists(String const&) */ulong FileAccessUnix::file_exists(FileAccessUnix *this, String *param_1) {
   long *plVar1;
   int iVar2;
   char *pcVar3;
   long lVar4;
   ulong uVar5;
   stat64 *psVar6;
   long in_FS_OFFSET;
   long local_c8;
   long local_c0;
   stat64 local_b8;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   psVar6 = &local_b8;
   for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
      psVar6.st_dev = 0;
      psVar6 = (stat64*)&psVar6.st_ino;
   }

   ( **(code**)( *(long*)this + 0x180 ) )(&local_c0, this, param_1);
   String::utf8();
   lVar4 = local_c0;
   if (local_c0 != 0) {
      LOCK();
      plVar1 = (long*)( local_c0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c0 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   pcVar3 = (char*)CharString::get_data();
   iVar2 = stat64(pcVar3, &local_b8);
   if (iVar2 == 0) {
      pcVar3 = (char*)CharString::get_data();
      iVar2 = access(pcVar3, 0);
      if (iVar2 == 0) {
         uVar5 = CONCAT71(( int7 )((ulong)&local_b8 >> 8), ( local_b8.st_mode & 0xd000 ) == 0x8000);
         goto LAB_00100629;
      }

   }

   uVar5 = 0;
   LAB_00100629:if (local_c8 != 0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_c8 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5 & 0xffffffff;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* FileAccessUnix::_get_unix_permissions(String const&) */uint FileAccessUnix::_get_unix_permissions(FileAccessUnix *this, String *param_1) {
   long *plVar1;
   undefined *puVar2;
   int iVar3;
   char *__file;
   long lVar4;
   uint uVar5;
   stat64 *psVar6;
   long in_FS_OFFSET;
   byte bVar7;
   long local_f0;
   long local_e8;
   long local_e0;
   undefined *local_d8;
   undefined8 local_d0;
   stat64 local_c8;
   long local_30;
   bVar7 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)this + 0x180 ) )(&local_f0, this, param_1);
   psVar6 = &local_c8;
   for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
      psVar6.st_dev = 0;
      psVar6 = (stat64*)( (long)psVar6 + ( (ulong)bVar7 * -2 + 1 ) * 8 );
   }

   String::utf8();
   __file = (char*)CharString::get_data();
   iVar3 = stat64(__file, &local_c8);
   puVar2 = local_d8;
   if (local_d8 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_d8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_d8 = (undefined*)0x0;
         Memory::free_static(puVar2 + -0x10, false);
      }

   }

   if (iVar3 == 0) {
      uVar5 = local_c8.st_mode & 0xfff;
   }
 else {
      local_e0 = 0;
      local_d8 = &_LC11;
      local_d0 = 1;
      String::parse_latin1((StrRange*)&local_e0);
      operator+((char *)&
      local_e8,(String*)"Failed to get unix permissions for: ";
      String::operator +((String*)&local_d8, (String*)&local_e8);
      _err_print_error("_get_unix_permissions", "drivers/unix/file_access_unix.cpp", 0x16f, "Method/function failed. Returning: 0", (String*)&local_d8, 0, 0);
      puVar2 = local_d8;
      if (local_d8 != (undefined*)0x0) {
         LOCK();
         plVar1 = (long*)( local_d8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_d8 = (undefined*)0x0;
            Memory::free_static(puVar2 + -0x10, false);
         }

      }

      lVar4 = local_e8;
      if (local_e8 != 0) {
         LOCK();
         plVar1 = (long*)( local_e8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_e8 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      lVar4 = local_e0;
      if (local_e0 != 0) {
         LOCK();
         plVar1 = (long*)( local_e0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            uVar5 = 0;
            local_e0 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
            goto LAB_00100778;
         }

      }

      uVar5 = 0;
   }

   LAB_00100778:lVar4 = local_f0;
   if (local_f0 != 0) {
      LOCK();
      plVar1 = (long*)( local_f0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_f0 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* FileAccessUnix::check_errors(bool) const */int FileAccessUnix::check_errors(FileAccessUnix *this, bool param_1) {
   int iVar1;
   if (*(FILE**)( this + 400 ) == (FILE*)0x0) {
      _err_print_error("check_errors", "drivers/unix/file_access_unix.cpp", 0x32, "Parameter \"f\" is null.", "File must be opened before use.", 0);
      return 0;
   }

   *(undefined4*)( this + 0x19c ) = 0;
   iVar1 = ferror(*(FILE**)( this + 400 ));
   if (iVar1 == 0) {
      if (param_1) {
         return 0;
      }

   }
 else {
      if (param_1) {
         *(undefined4*)( this + 0x19c ) = 0xd;
         return iVar1;
      }

      *(undefined4*)( this + 0x19c ) = 0xe;
   }

   iVar1 = feof(*(FILE**)( this + 400 ));
   if (iVar1 == 0) {
      return 0;
   }

   *(undefined4*)( this + 0x19c ) = 0x12;
   return iVar1;
}
/* FileAccessUnix::seek(unsigned long) */int FileAccessUnix::seek(FileAccessUnix *this, ulong param_1) {
   int iVar1;
   if (*(FILE**)( this + 400 ) == (FILE*)0x0) {
      _err_print_error(&_LC18, "drivers/unix/file_access_unix.cpp", 0xe2, "Parameter \"f\" is null.", "File must be opened before use.", 0);
      return 0;
   }

   iVar1 = fseeko64(*(FILE**)( this + 400 ), param_1, 0);
   if (iVar1 == 0) {
      return iVar1;
   }

   iVar1 = check_errors(this, false);
   return iVar1;
}
/* FileAccessUnix::seek_end(long) */int FileAccessUnix::seek_end(FileAccessUnix *this, long param_1) {
   int iVar1;
   if (*(FILE**)( this + 400 ) == (FILE*)0x0) {
      _err_print_error("seek_end", "drivers/unix/file_access_unix.cpp", 0xea, "Parameter \"f\" is null.", "File must be opened before use.", 0);
      return 0;
   }

   iVar1 = fseeko64(*(FILE**)( this + 400 ), param_1, 2);
   if (iVar1 == 0) {
      return iVar1;
   }

   iVar1 = check_errors(this, false);
   return iVar1;
}
/* FileAccessUnix::get_position() const */__off64_t FileAccessUnix::get_position(FileAccessUnix *this) {
   __off64_t _Var1;
   if (*(FILE**)( this + 400 ) == (FILE*)0x0) {
      _err_print_error("get_position", "drivers/unix/file_access_unix.cpp", 0xf2, "Parameter \"f\" is null.", "File must be opened before use.", 0, 0);
   }
 else {
      _Var1 = ftello64(*(FILE**)( this + 400 ));
      if (-1 < _Var1) {
         return _Var1;
      }

      check_errors(this, false);
      _err_print_error("get_position", "drivers/unix/file_access_unix.cpp", 0xf7, "Method/function failed. Returning: 0", 0, 0);
   }

   return 0;
}
/* FileAccessUnix::get_buffer(unsigned char*, unsigned long) const */size_t FileAccessUnix::get_buffer(FileAccessUnix *this, uchar *param_1, ulong param_2) {
   size_t sVar1;
   if (*(FILE**)( this + 400 ) == (FILE*)0x0) {
      _err_print_error("get_buffer", "drivers/unix/file_access_unix.cpp", 0x10e, "Parameter \"f\" is null.", "File must be opened before use.", 0, 0);
   }
 else {
      if (( param_1 != (uchar*)0x0 ) || ( param_2 == 0 )) {
         sVar1 = fread(param_1, 1, param_2, *(FILE**)( this + 400 ));
         check_errors(this, false);
         return sVar1;
      }

      _err_print_error("get_buffer", "drivers/unix/file_access_unix.cpp", 0x10f, "Condition \"!p_dst && p_length > 0\" is true. Returning: -1", 0, 0);
   }

   return 0xffffffffffffffff;
}
/* FileAccessUnix::store_buffer(unsigned char const*, unsigned long) */ulong FileAccessUnix::store_buffer(FileAccessUnix *this, uchar *param_1, ulong param_2) {
   size_t sVar1;
   ulong uVar2;
   if (*(FILE**)( this + 400 ) == (FILE*)0x0) {
      uVar2 = 0;
      _err_print_error("store_buffer", "drivers/unix/file_access_unix.cpp", 0x132, "Parameter \"f\" is null.", "File must be opened before use.", 0, 0);
   }
 else if (( param_1 == (uchar*)0x0 ) && ( param_2 != 0 )) {
      uVar2 = 0;
      _err_print_error("store_buffer", "drivers/unix/file_access_unix.cpp", 0x133, "Condition \"!p_src && p_length > 0\" is true. Returning: false", 0, 0);
   }
 else {
      sVar1 = fwrite(param_1, 1, param_2, *(FILE**)( this + 400 ));
      uVar2 = CONCAT71(( int7 )(param_2 >> 8), sVar1 == param_2);
      check_errors(this, true);
   }

   return uVar2 & 0xffffffff;
}
/* FileAccessUnix::_close() */void FileAccessUnix::_close(FileAccessUnix *this) {
   long *plVar1;
   StrRange *pSVar2;
   long lVar3;
   code *pcVar4;
   int iVar5;
   char *__new;
   char *__old;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(FILE**)( this + 400 ) != (FILE*)0x0) {
      fclose(*(FILE**)( this + 400 ));
      pcVar4 = close_notification_func;
      *(undefined8*)( this + 400 ) = 0;
      if (pcVar4 != (code*)0x0) {
         ( *pcVar4 )(this + 0x1a8, *(undefined4*)( this + 0x198 ));
      }

      if (( *(long*)( this + 0x1a0 ) != 0 ) && ( 1 < *(uint*)( *(long*)( this + 0x1a0 ) + -8 ) )) {
         pSVar2 = (StrRange*)( this + 0x1a0 );
         String::utf8();
         __new = (char*)CharString::get_data();
         String::utf8();
         __old = (char*)CharString::get_data();
         iVar5 = rename(__old, __new);
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_48 + -0x10 ), false);
            }

         }

         if (local_50 != 0) {
            LOCK();
            plVar1 = (long*)( local_50 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_50 + -0x10 ), false);
            }

         }

         if (iVar5 != 0) {
            if (FileAccess::close_fail_notify != (code*)0x0) {
               ( *FileAccess::close_fail_notify )(pSVar2);
            }

            String::parse_latin1(pSVar2);
            if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
               _err_print_error("_close", "drivers/unix/file_access_unix.cpp", 0xbd, "Condition \"rename_error != 0\" is true.", 0, 0);
               return;
            }

            goto LAB_00100ead;
         }

         String::parse_latin1(pSVar2);
      }

   }

   if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00100ead:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* FileAccessUnix::close() */void FileAccessUnix::close(FileAccessUnix *this) {
   _close(this);
   return;
}
/* FileAccessUnix::~FileAccessUnix() */void FileAccessUnix::~FileAccessUnix(FileAccessUnix *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_00103640;
   _close(this);
   if (*(long*)( this + 0x1b0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1b0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1b0 );
         *(undefined8*)( this + 0x1b0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x1a8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1a8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1a8 );
         *(undefined8*)( this + 0x1a8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x1a0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1a0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1a0 );
         *(undefined8*)( this + 0x1a0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         FileAccess::~FileAccess((FileAccess*)this);
         return;
      }

   }

   FileAccess::~FileAccess((FileAccess*)this);
   return;
}
/* FileAccessUnix::~FileAccessUnix() */void FileAccessUnix::~FileAccessUnix(FileAccessUnix *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_00103640;
   _close(this);
   for (int i = 0; i < 3; i++) {
      if (*(long*)( this + ( -8*i + 432 ) ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + ( -8*i + 432 ) ) + -16 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + ( -8*i + 432 ) );
            *(undefined8*)( this + ( -8*i + 432 ) ) = 0;
            Memory::free_static((void*)( lVar2 + -16 ), false);
         }

      }

   }

   FileAccess::~FileAccess((FileAccess*)this);
   operator_delete(this, 0x1b8);
   return;
}
/* FileAccessUnix::get_real_path() const */void FileAccessUnix::get_real_path(void) {
   long *plVar1;
   long lVar2;
   int iVar3;
   char *pcVar4;
   long in_RSI;
   CowData<char32_t> *in_RDI;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   String::utf8();
   pcVar4 = (char*)CharString::get_data();
   pcVar4 = realpath(pcVar4, (char*)0x0);
   lVar2 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (pcVar4 == (char*)0x0) {
      *(undefined8*)in_RDI = 0;
      if (*(long*)( in_RSI + 0x1a8 ) != 0) {
         CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x1a8 ));
      }

   }
 else {
      local_48 = 0;
      iVar3 = String::parse_utf8((char*)&local_48, (int)pcVar4, true);
      free(pcVar4);
      if (iVar3 == 0) {
         String::simplify_path();
      }
 else {
         *(undefined8*)in_RDI = 0;
         if (*(long*)( in_RSI + 0x1a8 ) != 0) {
            CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x1a8 ));
         }

      }

      lVar2 = local_48;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* FileAccessUnix::open_internal(String const&, int) */int FileAccessUnix::open_internal(FileAccessUnix *this, String *param_1, int param_2) {
   long *plVar1;
   char *pcVar2;
   String *pSVar3;
   size_t __n;
   code *pcVar4;
   char *pcVar5;
   char cVar6;
   int iVar7;
   uint uVar8;
   char *pcVar9;
   FILE *__stream;
   int *piVar10;
   long lVar11;
   undefined8 *puVar12;
   long lVar13;
   stat64 *psVar14;
   ulong uVar15;
   char *pcVar16;
   long in_FS_OFFSET;
   bool bVar17;
   byte bVar18;
   char *local_108;
   long local_100;
   long local_f8;
   char *local_f0;
   char *local_e8;
   undefined8 local_e0;
   stat64 local_d8;
   long local_40;
   bVar18 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _close(this);
   if (*(long*)( this + 0x1b0 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x1b0 ), (CowData*)param_1);
   }

   ( **(code**)( *(long*)this + 0x180 ) )((String*)&local_e8, this, param_1);
   pcVar9 = local_e8;
   pcVar16 = *(char**)( this + 0x1a8 );
   if (pcVar16 == local_e8) {
      if (pcVar16 == (char*)0x0) goto LAB_001012a3;
      LOCK();
      plVar1 = (long*)( pcVar16 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001012a3;
      local_e8 = (char*)0x0;
      Memory::free_static(pcVar9 + -0x10, false);
      lVar13 = *(long*)( this + 400 );
   }
 else {
      if (pcVar16 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( pcVar16 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar13 = *(long*)( this + 0x1a8 );
            *(undefined8*)( this + 0x1a8 ) = 0;
            Memory::free_static((void*)( lVar13 + -0x10 ), false);
         }

      }

      *(char**)( this + 0x1a8 ) = local_e8;
      LAB_001012a3:lVar13 = *(long*)( this + 400 );
   }

   if (lVar13 != 0) {
      _err_print_error("open_internal", "drivers/unix/file_access_unix.cpp", 0x48, "Condition \"f\" is true. Returning: ERR_ALREADY_IN_USE", "File is already in use.", 0, 0);
      iVar7 = 0x16;
      goto LAB_00101360;
   }

   if (param_2 == 3) {
      pcVar16 = "rb+";
   }
 else if (param_2 < 4) {
      if (param_2 == 1) {
         pcVar16 = "rb";
      }
 else {
         pcVar16 = "wb";
         if (param_2 != 2) goto LAB_00101420;
      }

   }
 else {
      pcVar16 = "wb+";
      if (param_2 != 7) {
         LAB_00101420:iVar7 = 0x1f;
         goto LAB_00101360;
      }

   }

   psVar14 = &local_d8;
   for (lVar13 = 0x12; lVar13 != 0; lVar13 = lVar13 + -1) {
      psVar14.st_dev = 0;
      psVar14 = (stat64*)( (long)psVar14 + ( (ulong)bVar18 * -2 + 1 ) * 8 );
   }

   pSVar3 = (String*)( this + 0x1a8 );
   String::utf8();
   pcVar9 = (char*)CharString::get_data();
   iVar7 = stat64(pcVar9, &local_d8);
   pcVar9 = local_e8;
   if (local_e8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_e8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_e8 = (char*)0x0;
         Memory::free_static(pcVar9 + -0x10, false);
      }

   }

   if (( iVar7 != 0 ) || ( ( local_d8.st_mode & 0xd000 ) == 0x8000 )) {
      if (( param_2 & 1U ) != 0) {
         get_real_path();
         cVar6 = String::operator !=((String*)&local_108, pSVar3);
         if (cVar6 != '\0') {
            String::to_lower();
            String::to_lower();
            cVar6 = String::operator ==((String*)&local_f0, (String*)&local_e8);
            pcVar9 = local_f0;
            if (local_f0 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_f0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_f0 = (char*)0x0;
                  Memory::free_static(pcVar9 + -0x10, false);
               }

            }

            pcVar9 = local_e8;
            if (local_e8 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_e8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_e8 = (char*)0x0;
                  Memory::free_static(pcVar9 + -0x10, false);
               }

            }

            if (cVar6 != '\0') {
               local_f0 = (char*)0x0;
               plVar1 = (long*)( local_108 + -0x10 );
               if (local_108 != (char*)0x0) {
                  do {
                     lVar13 = *plVar1;
                     if (lVar13 == 0) goto LAB_0010165a;
                     LOCK();
                     lVar11 = *plVar1;
                     bVar17 = lVar13 == lVar11;
                     if (bVar17) {
                        *plVar1 = lVar13 + 1;
                        lVar11 = lVar13;
                     }

                     UNLOCK();
                  }
 while ( !bVar17 );
                  if (lVar11 != -1) {
                     local_f0 = local_108;
                  }

               }

               LAB_0010165a:local_f8 = 0;
               plVar1 = (long*)( *(long*)( this + 0x1a8 ) + -0x10 );
               if (*(long*)( this + 0x1a8 ) != 0) {
                  do {
                     lVar13 = *plVar1;
                     if (lVar13 == 0) goto LAB_00101698;
                     LOCK();
                     lVar11 = *plVar1;
                     bVar17 = lVar13 == lVar11;
                     if (bVar17) {
                        *plVar1 = lVar13 + 1;
                        lVar11 = lVar13;
                     }

                     UNLOCK();
                  }
 while ( !bVar17 );
                  if (lVar11 != -1) {
                     local_f8 = *(long*)( this + 0x1a8 );
                  }

               }

               LAB_00101698:local_100 = 0;
               local_e8 = "Case mismatch opening requested file \'%s\', stored as \'%s\' in the filesystem. This file will not open when exported to other case-sensitive platforms.";
               local_e0 = 0x95;
               String::parse_latin1((StrRange*)&local_100);
               vformat<String,String>((String*)&local_e8, (StrRange*)&local_100, &local_f8, (String*)&local_f0);
               _err_print_error("open_internal", "drivers/unix/file_access_unix.cpp", 0x71, (String*)&local_e8, 0, 1);
               pcVar9 = local_e8;
               if (local_e8 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_e8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_e8 = (char*)0x0;
                     Memory::free_static(pcVar9 + -0x10, false);
                  }

               }

               lVar13 = local_100;
               if (local_100 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_100 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_100 = 0;
                     Memory::free_static((void*)( lVar13 + -0x10 ), false);
                  }

               }

               lVar13 = local_f8;
               if (local_f8 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_f8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_f8 = 0;
                     Memory::free_static((void*)( lVar13 + -0x10 ), false);
                  }

               }

               pcVar9 = local_f0;
               if (local_f0 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_f0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_f0 = (char*)0x0;
                     Memory::free_static(pcVar9 + -0x10, false);
                  }

               }

            }

         }

         pcVar9 = local_108;
         if (local_108 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_108 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_108 = (char*)0x0;
               Memory::free_static(pcVar9 + -0x10, false);
            }

         }

      }

      if (( param_2 != 2 ) || ( (char)FileAccess::backup_save == '\0' )) {
         String::utf8();
         pcVar9 = (char*)CharString::get_data();
         __stream = fopen64(pcVar9, pcVar16);
         pcVar16 = local_e8;
         *(FILE**)( this + 400 ) = __stream;
         if (local_e8 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_e8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_e8 = (char*)0x0;
               Memory::free_static(pcVar16 + -0x10, false);
               __stream = *(FILE**)( this + 400 );
            }
 else {
               LAB_0010148a:__stream = *(FILE**)( this + 400 );
            }

         }

         if (__stream == (FILE*)0x0) {
            piVar10 = __errno_location();
            iVar7 = ( uint )(*piVar10 != 2) * 5 + 7;
            *(int*)( this + 0x19c ) = iVar7;
            goto LAB_00101360;
         }

         LAB_0010149a:iVar7 = fileno(__stream);
         if (iVar7 != -1) {
            uVar8 = fcntl64(iVar7, 1);
            fcntl64(iVar7, 2, uVar8 | 1);
         }

         *(undefined4*)( this + 0x19c ) = 0;
         iVar7 = 0;
         *(int*)( this + 0x198 ) = param_2;
         goto LAB_00101360;
      }

      if (*(long*)( this + 0x1a0 ) != *(long*)( this + 0x1a8 )) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x1a0 ), (CowData*)pSVar3);
      }

      local_f0 = (char*)0x0;
      local_e8 = "-XXXXXX";
      local_e0 = 7;
      String::parse_latin1((StrRange*)&local_f0);
      String::operator +((String*)&local_e8, pSVar3);
      pcVar2 = local_e8;
      pcVar9 = *(char**)( this + 0x1a8 );
      if (pcVar9 == local_e8) {
         if (pcVar9 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( pcVar9 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_e8 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

      }
 else {
         if (pcVar9 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( pcVar9 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar13 = *(long*)( this + 0x1a8 );
               *(undefined8*)( this + 0x1a8 ) = 0;
               Memory::free_static((void*)( lVar13 + -0x10 ), false);
            }

         }

         *(char**)( this + 0x1a8 ) = local_e8;
      }

      pcVar9 = local_f0;
      if (local_f0 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_f0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_f0 = (char*)0x0;
            Memory::free_static(pcVar9 + -0x10, false);
         }

      }

      String::utf8();
      if (( local_f0 != (char*)0x0 ) && ( 1 < *(ulong*)( local_f0 + -0x10 ) )) {
         if (local_f0 == (char*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         __n = *(size_t*)( local_f0 + -8 );
         uVar15 = 0x10;
         if (__n != 0) {
            uVar15 = __n - 1 | __n - 1 >> 1;
            uVar15 = uVar15 | uVar15 >> 2;
            uVar15 = uVar15 | uVar15 >> 4;
            uVar15 = uVar15 | uVar15 >> 8;
            uVar15 = uVar15 | uVar15 >> 0x10;
            uVar15 = ( uVar15 | uVar15 >> 0x20 ) + 0x11;
         }

         puVar12 = (undefined8*)Memory::alloc_static(uVar15, false);
         pcVar9 = local_f0;
         if (puVar12 == (undefined8*)0x0) {
            _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
         }
 else {
            pcVar2 = (char*)( puVar12 + 2 );
            *puVar12 = 1;
            puVar12[1] = __n;
            memcpy(pcVar2, local_f0, __n);
            pcVar5 = local_f0;
            LOCK();
            plVar1 = (long*)( pcVar9 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            local_f0 = pcVar2;
            if (*plVar1 == 0) {
               local_f0 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
               local_f0 = pcVar2;
            }

         }

      }

      iVar7 = mkstemp64(local_f0);
      if (iVar7 != -1) {
         fchmod(iVar7, 0x1a4);
         String::utf8((char*)&local_e8, (int)local_f0);
         pcVar2 = local_e8;
         pcVar9 = *(char**)( this + 0x1a8 );
         if (pcVar9 == local_e8) {
            if (pcVar9 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( pcVar9 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_e8 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }

            }

         }
 else {
            if (pcVar9 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( pcVar9 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar13 = *(long*)( this + 0x1a8 );
                  *(undefined8*)( this + 0x1a8 ) = 0;
                  Memory::free_static((void*)( lVar13 + -0x10 ), false);
               }

            }

            *(char**)( this + 0x1a8 ) = local_e8;
         }

         __stream = fdopen(iVar7, pcVar16);
         pcVar16 = local_f0;
         *(FILE**)( this + 400 ) = __stream;
         if (__stream != (FILE*)0x0) {
            if (local_f0 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_f0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_f0 = (char*)0x0;
                  Memory::free_static(pcVar16 + -0x10, false);
               }

               goto LAB_0010148a;
            }

            goto LAB_0010149a;
         }

         unlink(local_f0);
         ::close(iVar7);
      }

      pcVar16 = local_f0;
      *(undefined4*)( this + 0x19c ) = 0xc;
      if (local_f0 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_f0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_f0 = (char*)0x0;
            Memory::free_static(pcVar16 + -0x10, false);
         }

      }

   }

   iVar7 = 0xc;
   LAB_00101360:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* Object::_bind_compatibility_methods() */void Object::_bind_compatibility_methods(void) {
   return;
}
/* Object::get_save_class() const */void Object::get_save_class(void) {
   long lVar1;
   long *in_RSI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *in_RSI + 0x48 ) )();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* FileAccess::is_class_ptr(void*) const */uint FileAccess::is_class_ptr(FileAccess *this, void *param_1) {
   return (uint)CONCAT71(0x1039, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1039, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1039, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* FileAccess::_getv(StringName const&, Variant&) const */undefined8 FileAccess::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* FileAccess::_setv(StringName const&, Variant const&) */undefined8 FileAccess::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* FileAccess::_validate_propertyv(PropertyInfo&) const */void FileAccess::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* FileAccess::_property_can_revertv(StringName const&) const */undefined8 FileAccess::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* FileAccess::_property_get_revertv(StringName const&, Variant&) const */undefined8 FileAccess::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* FileAccess::_notificationv(int, bool) */void FileAccess::_notificationv(int param_1, bool param_2) {
   return;
}
/* FileAccess::set_big_endian(bool) */void FileAccess::set_big_endian(FileAccess *this, bool param_1) {
   this[0x17c] = (FileAccess)param_1;
   return;
}
/* FileAccess::_get_class_namev() const */undefined8 *FileAccess::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001020f3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001020f3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "FileAccess");
         goto LAB_0010215e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "FileAccess");
   LAB_0010215e:return &_get_class_namev();
}
/* FileAccess::get_class() const */void FileAccess::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
   }
 else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }

         }
 else {
            strlen(__s);
            String::parse_latin1(in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* FileAccess::_initialize_classv() */void FileAccess::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() != '\0') goto LAB_00102400;
   if (RefCounted::initialize_class() == '\0') {
      Object::initialize_class();
      local_68 = 0;
      local_50 = 6;
      local_58 = "Object";
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "RefCounted";
      local_70 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      lVar2 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      lVar2 = local_68;
      if (local_68 == 0) {
         LAB_0010250e:if ((code*)PTR__bind_methods_00106010 != RefCounted::_bind_methods) {
            LAB_0010251e:RefCounted::_bind_methods();
         }

      }
 else {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_0010250e;
         local_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         if ((code*)PTR__bind_methods_00106010 != RefCounted::_bind_methods) goto LAB_0010251e;
      }

      RefCounted::initialize_class()::initialized =
      '\x01';
   }

   local_58 = "RefCounted";
   local_68 = 0;
   local_50 = 10;
   String::parse_latin1((StrRange*)&local_68);
   StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
   local_58 = "FileAccess";
   local_70 = 0;
   local_50 = 10;
   String::parse_latin1((StrRange*)&local_70);
   StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
   ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   lVar2 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if ((code*)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
      FileAccess::_bind_methods();
   }

   if ((code*)PTR__bind_compatibility_methods_00106008 != Object::_bind_compatibility_methods) {
      FileAccess::_bind_compatibility_methods();
   }

   initialize_class()::initialized =
   '\x01';
   LAB_00102400:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* FileAccess::is_class(String const&) const */undefined8 FileAccess::is_class(FileAccess *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   long lVar5;
   char cVar6;
   undefined8 uVar7;
   long lVar8;
   long in_FS_OFFSET;
   bool bVar9;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_001025ff;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_001025ff:cVar6 = String::operator ==(param_1, (String*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_001026b3;
   }

   cVar6 = String::operator ==(param_1, "FileAccess");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_0010278b;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_0010278b:cVar6 = String::operator ==(param_1, (String*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar6 != '\0') goto LAB_001026b3;
      }

      cVar6 = String::operator ==(param_1, "RefCounted");
      if (cVar6 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar4 = *(long*)( lVar2 + 0x20 );
            if (lVar4 == 0) {
               local_60 = 0;
            }
 else {
               pcVar3 = *(char**)( lVar4 + 8 );
               local_60 = 0;
               if (pcVar3 == (char*)0x0) {
                  plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
                  if (*(long*)( lVar4 + 0x10 ) != 0) {
                     do {
                        lVar5 = *plVar1;
                        if (lVar5 == 0) goto LAB_0010286b;
                        LOCK();
                        lVar8 = *plVar1;
                        bVar9 = lVar5 == lVar8;
                        if (bVar9) {
                           *plVar1 = lVar5 + 1;
                           lVar8 = lVar5;
                        }

                        UNLOCK();
                     }
 while ( !bVar9 );
                     if (lVar8 != -1) {
                        local_60 = *(long*)( lVar4 + 0x10 );
                     }

                  }

               }
 else {
                  local_50 = strlen(pcVar3);
                  local_58 = pcVar3;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            LAB_0010286b:cVar6 = String::operator ==(param_1, (String*)&local_60);
            lVar4 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar1 = (long*)( local_60 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

            if (cVar6 != '\0') goto LAB_001026b3;
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = String::operator ==(param_1, "Object");
            return uVar7;
         }

         goto LAB_00102914;
      }

   }

   LAB_001026b3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00102914:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
   undefined7 in_register_00000031;
   List *pLVar6;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   pLVar6 = (List*)CONCAT71(in_register_00000031, param_2);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = 0;
   local_90 = 0;
   local_78 = "RefCounted";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "RefCounted";
   local_98 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_00102a88:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00102a88;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00102aa6;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00102aa6:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])pLVar6 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   *(undefined8*)( puVar5 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
   *puVar5 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)pLVar6;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(long*)( puVar5 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar5;
   }

   plVar1[1] = (long)puVar5;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar5;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "RefCounted", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar6, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* FileAccess::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void FileAccess::_get_property_listv(FileAccess *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "FileAccess";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "FileAccess";
   local_98 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_00102e88:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00102e88;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00102ea5;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00102ea5:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   *(undefined8*)( puVar5 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
   *puVar5 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(long*)( puVar5 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar5;
   }

   plVar1[1] = (long)puVar5;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar5;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "FileAccess", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x00103320) *//* WARNING: Removing unreachable block (ram,0x00103450) *//* WARNING: Removing unreachable block (ram,0x001035c9) *//* WARNING: Removing unreachable block (ram,0x0010345c) *//* WARNING: Removing unreachable block (ram,0x00103466) *//* WARNING: Removing unreachable block (ram,0x001035ab) *//* WARNING: Removing unreachable block (ram,0x00103472) *//* WARNING: Removing unreachable block (ram,0x0010347c) *//* WARNING: Removing unreachable block (ram,0x0010358d) *//* WARNING: Removing unreachable block (ram,0x00103488) *//* WARNING: Removing unreachable block (ram,0x00103492) *//* WARNING: Removing unreachable block (ram,0x0010356f) *//* WARNING: Removing unreachable block (ram,0x0010349e) *//* WARNING: Removing unreachable block (ram,0x001034a8) *//* WARNING: Removing unreachable block (ram,0x00103551) *//* WARNING: Removing unreachable block (ram,0x001034b4) *//* WARNING: Removing unreachable block (ram,0x001034be) *//* WARNING: Removing unreachable block (ram,0x00103533) *//* WARNING: Removing unreachable block (ram,0x001034c6) *//* WARNING: Removing unreachable block (ram,0x001034d0) *//* WARNING: Removing unreachable block (ram,0x00103518) *//* WARNING: Removing unreachable block (ram,0x001034d8) *//* WARNING: Removing unreachable block (ram,0x001034ee) *//* WARNING: Removing unreachable block (ram,0x001034fa) *//* String vformat<String, String>(String const&, String const, String const) */undefined8 *vformat<String,String>(undefined8 *param_1, bool *param_2, String *param_3, String *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   int iVar3;
   long in_FS_OFFSET;
   Array local_d8[8];
   undefined8 local_d0[9];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_88, param_3);
   Variant::Variant(local_70, param_4);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, param_2);
   *param_1 = local_d0[0];
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* FileAccessUnix::open_internal(String const&, int) [clone .cold] */void FileAccessUnix::open_internal(String *param_1, int param_2) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

