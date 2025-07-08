undefined8 godot_read(undefined8 param_1, undefined8 *param_2, undefined8 param_3, undefined8 param_4) {
   ( **(code**)( *(long*)*param_2 + 0x220 ) )((long*)*param_2, param_3, param_4);
   return param_4;
}
undefined8 godot_write(void) {
   return 0;
}
/* FileAccessZip::is_open() const */bool FileAccessZip::is_open(FileAccessZip *this) {
   return *(long*)( this + 400 ) != 0;
}
/* FileAccessZip::file_exists(String const&) */undefined8 FileAccessZip::file_exists(String *param_1) {
   return 0;
}
/* FileAccessZip::flush() */void FileAccessZip::flush(void) {
   _err_print_error("flush", "core/io/file_access_zip.cpp", 0x142, "Method/function failed.", 0, 0);
   return;
}
/* FileAccessZip::store_buffer(unsigned char const*, unsigned long) */undefined8 FileAccessZip::store_buffer(uchar *param_1, ulong param_2) {
   _err_print_error("store_buffer", "core/io/file_access_zip.cpp", 0x146, "Method/function failed. Returning: false", 0, 0);
   return 0;
}
void godot_free(undefined8 param_1, void *param_2) {
   Memory::free_static(param_2, false);
   return;
}
void godot_alloc(undefined8 param_1, uint param_2, uint param_3) {
   Memory::alloc_static((ulong)param_2 * (ulong)param_3, false);
   return;
}
/* FileAccessZip::get_buffer(unsigned char*, unsigned long) const */ulong FileAccessZip::get_buffer(FileAccessZip *this, uchar *param_1, ulong param_2) {
   int iVar1;
   ulong uVar2;
   if (( param_1 == (uchar*)0x0 ) && ( param_2 != 0 )) {
      _err_print_error("get_buffer", "core/io/file_access_zip.cpp", 0x127, "Condition \"!p_dst && p_length > 0\" is true. Returning: -1", 0, 0);
   }
 else {
      if (*(long*)( this + 400 ) != 0) {
         iVar1 = unzeof();
         this[0x220] = ( FileAccessZip )(iVar1 != 0);
         if (iVar1 != 0) {
            return 0;
         }

         iVar1 = unzReadCurrentFile(*(undefined8*)( this + 400 ), param_1, param_2 & 0xffffffff);
         if (-1 < iVar1) {
            uVar2 = (ulong)iVar1;
            if (param_2 <= uVar2) {
               return uVar2;
            }

            this[0x220] = (FileAccessZip)0x1;
            return uVar2;
         }

         _err_print_error("get_buffer", "core/io/file_access_zip.cpp", 0x12f, "Condition \"read < 0\" is true. Returning: read", 0, 0);
         return (long)iVar1;
      }

      _err_print_error("get_buffer", "core/io/file_access_zip.cpp", 0x128, "Parameter \"zfile\" is null.", 0, 0);
   }

   return 0xffffffffffffffff;
}
/* FileAccessZip::get_length() const */undefined8 FileAccessZip::get_length(FileAccessZip *this) {
   if (*(long*)( this + 400 ) != 0) {
      return *(undefined8*)( this + 0x1d0 );
   }

   _err_print_error("get_length", "core/io/file_access_zip.cpp", 0x11c, "Parameter \"zfile\" is null.", 0, 0);
   return 0;
}
/* FileAccessZip::eof_reached() const */FileAccessZip FileAccessZip::eof_reached(FileAccessZip *this) {
   if (*(long*)( this + 400 ) != 0) {
      return this[0x220];
   }

   _err_print_error("eof_reached", "core/io/file_access_zip.cpp", 0x121, "Parameter \"zfile\" is null.", 0, 0);
   return (FileAccessZip)0x1;
}
/* FileAccessZip::seek(unsigned long) */void FileAccessZip::seek(ulong param_1) {
   if (*(long*)( param_1 + 400 ) != 0) {
      unzSeekCurrentFile();
      return;
   }

   _err_print_error(&_LC11, "core/io/file_access_zip.cpp", 0x10c, "Parameter \"zfile\" is null.", 0, 0);
   return;
}
/* FileAccessZip::get_position() const */undefined8 FileAccessZip::get_position(FileAccessZip *this) {
   undefined8 uVar1;
   if (*(long*)( this + 400 ) != 0) {
      uVar1 = unztell64();
      return uVar1;
   }

   _err_print_error("get_position", "core/io/file_access_zip.cpp", 0x117, "Parameter \"zfile\" is null.", 0, 0);
   return 0;
}
/* FileAccessZip::get_error() const */byte FileAccessZip::get_error(FileAccessZip *this) {
   char cVar1;
   if (*(long*)( this + 400 ) == 0) {
      return 3;
   }

   if (*(code**)( *(long*)this + 0x1d8 ) == eof_reached) {
      return -(this[0x220] != (FileAccessZip)0x0) & 0x12;
   }

   cVar1 = ( **(code**)( *(long*)this + 0x1d8 ) )();
   return -(cVar1 != '\0') & 0x12;
}
/* FileAccessZip::seek_end(long) */void FileAccessZip::seek_end(FileAccessZip *this, long param_1) {
   int iVar1;
   if (*(long*)( this + 400 ) == 0) {
      _err_print_error("seek_end", "core/io/file_access_zip.cpp", 0x112, "Parameter \"zfile\" is null.", 0, 0);
      return;
   }

   if (*(code**)( *(long*)this + 0x1d0 ) == get_length) {
      unzSeekCurrentFile(*(long*)( this + 400 ), (int)param_1 + (int)*(undefined8*)( this + 0x1d0 ));
      return;
   }

   iVar1 = ( **(code**)( *(long*)this + 0x1d0 ) )(this);
   unzSeekCurrentFile(*(undefined8*)( this + 400 ), (int)param_1 + iVar1);
   return;
}
undefined8 godot_tell(undefined8 param_1, long *param_2) {
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar1;
   UNRECOVERED_JUMPTABLE = *(code**)( *(long*)*param_2 + 0x1c8 );
   if (UNRECOVERED_JUMPTABLE != FileAccessZip::get_position) {
      /* WARNING: Could not recover jumptable at 0x00100490. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar1 = ( *UNRECOVERED_JUMPTABLE )();
      return uVar1;
   }

   if (( (long*)*param_2 )[0x32] != 0) {
      uVar1 = unztell64();
      return uVar1;
   }

   _err_print_error("get_position", "core/io/file_access_zip.cpp", 0x117, "Parameter \"zfile\" is null.", 0, 0);
   return 0;
}
undefined1 godot_testerror(undefined8 param_1, long *param_2) {
   code *pcVar1;
   undefined1 uVar2;
   int iVar3;
   param_2 = (long*)*param_2;
   pcVar1 = *(code**)( *param_2 + 0x250 );
   if (pcVar1 == FileAccessZip::get_error) {
      if (param_2[0x32] == 0) {
         uVar2 = 1;
      }
 else {
         pcVar1 = *(code**)( *param_2 + 0x1d8 );
         if (pcVar1 == FileAccessZip::eof_reached) {
            uVar2 = (undefined1)param_2[0x44];
         }
 else {
            uVar2 = ( *pcVar1 )();
         }

      }

   }
 else {
      iVar3 = ( *pcVar1 )();
      uVar2 = iVar3 != 0;
   }

   return uVar2;
}
undefined8 godot_seek(undefined8 param_1, long *param_2, ulong param_3, int param_4) {
   long lVar1;
   long *plVar2;
   plVar2 = (long*)*param_2;
   lVar1 = *plVar2;
   if (param_4 == 1) {
      if (*(code**)( lVar1 + 0x1c8 ) == FileAccessZip::get_position) {
         if (plVar2[0x32] == 0) {
            _err_print_error("get_position", "core/io/file_access_zip.cpp", 0x117, "Parameter \"zfile\" is null.", 0, 0);
         }
 else {
            lVar1 = unztell64();
            param_3 = param_3 + lVar1;
         }

      }
 else {
         lVar1 = ( **(code**)( lVar1 + 0x1c8 ) )();
         param_3 = param_3 + lVar1;
      }

   }
 else {
      if (param_4 != 2) goto LAB_00100560;
      if (*(code**)( lVar1 + 0x1d0 ) == FileAccessZip::get_length) {
         if (plVar2[0x32] == 0) {
            _err_print_error("get_length", "core/io/file_access_zip.cpp", 0x11c, "Parameter \"zfile\" is null.", 0, 0);
            plVar2 = (long*)*param_2;
            lVar1 = *plVar2;
         }
 else {
            param_3 = param_3 + plVar2[0x3a];
         }

         goto LAB_00100560;
      }

      lVar1 = ( **(code**)( lVar1 + 0x1d0 ) )();
      param_3 = param_3 + lVar1;
   }

   plVar2 = (long*)*param_2;
   lVar1 = *plVar2;
   LAB_00100560:if (*(code**)( lVar1 + 0x1b8 ) == FileAccessZip::seek) {
      if (plVar2[0x32] == 0) {
         _err_print_error(&_LC11, "core/io/file_access_zip.cpp", 0x10c, "Parameter \"zfile\" is null.", 0, 0);
      }
 else {
         unzSeekCurrentFile(plVar2[0x32], param_3 & 0xffffffff);
      }

      return 0;
   }

   ( **(code**)( lVar1 + 0x1b8 ) )(plVar2, param_3);
   return 0;
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
/* ZipArchive::close_handle(void*) const */undefined8 ZipArchive::close_handle(ZipArchive *this, void *param_1) {
   undefined8 uVar1;
   if (param_1 != (void*)0x0) {
      unzCloseCurrentFile(param_1);
      uVar1 = unzClose(param_1);
      return uVar1;
   }

   _err_print_error("close_handle", "core/io/file_access_zip.cpp", 0x71, "Parameter \"p_file\" is null.", "Cannot close a file if none is open.", 0);
   return 0;
}
/* ZipArchive::file_exists(String const&) const */undefined8 ZipArchive::file_exists(ZipArchive *this, String *param_1) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   uint uVar11;
   undefined8 uVar12;
   uint uVar13;
   int iVar14;
   long lVar15;
   ulong uVar16;
   long lVar17;
   uint uVar18;
   if (( *(long*)( this + 0x20 ) != 0 ) && ( *(int*)( this + 0x44 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x40 ) * 4 );
      uVar16 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x40 ) * 8 );
      uVar11 = String::hash();
      lVar17 = *(long*)( this + 0x28 );
      uVar13 = 1;
      if (uVar11 != 0) {
         uVar13 = uVar11;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar13 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      lVar15 = SUB168(auVar3 * auVar7, 8);
      uVar11 = *(uint*)( lVar17 + lVar15 * 4 );
      iVar14 = SUB164(auVar3 * auVar7, 8);
      if (uVar11 != 0) {
         uVar18 = 0;
         do {
            if (uVar13 == uVar11) {
               uVar12 = String::operator ==((String*)( *(long*)( *(long*)( this + 0x20 ) + lVar15 * 8 ) + 0x10 ), param_1);
               if ((char)uVar12 != '\0') {
                  return uVar12;
               }

               lVar17 = *(long*)( this + 0x28 );
            }

            uVar18 = uVar18 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar14 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar16;
            lVar15 = SUB168(auVar4 * auVar8, 8);
            uVar11 = *(uint*)( lVar17 + lVar15 * 4 );
            iVar14 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar11 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar11 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar14 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,uVar18 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* ZipArchive::get_singleton() */void ZipArchive::get_singleton(void) {
   undefined8 *puVar1;
   if (instance != (undefined8*)0x0) {
      return;
   }

   puVar1 = (undefined8*)operator_new(0x48, "");
   *puVar1 = &PTR_try_open_pack_00104db8;
   puVar1[2] = 0;
   puVar1[8] = 2;
   instance = puVar1;
   *(undefined1(*) [16])( puVar1 + 4 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar1 + 6 ) = (undefined1[16])0x0;
   return;
}
/* FileAccessZip::close() */undefined8 FileAccessZip::close(FileAccessZip *this) {
   undefined8 in_RAX;
   long lVar1;
   undefined8 uVar2;
   undefined8 uStack_28;
   if (*(long*)( this + 400 ) == 0) {
      return in_RAX;
   }

   lVar1 = ZipArchive::get_singleton();
   if (lVar1 != 0) {
      lVar1 = *(long*)( this + 400 );
      if (lVar1 == 0) {
         uStack_28 = 0;
         _err_print_error("close_handle", "core/io/file_access_zip.cpp", 0x71, "Parameter \"p_file\" is null.", "Cannot close a file if none is open.", 0);
      }
 else {
         unzCloseCurrentFile(lVar1);
         uStack_28 = unzClose(lVar1);
      }

      *(undefined8*)( this + 400 ) = 0;
      return uStack_28;
   }

   uVar2 = _err_print_error("_close", "core/io/file_access_zip.cpp", 0x102, "Parameter \"arch\" is null.", 0, 0);
   return uVar2;
}
/* ZipArchive::ZipArchive() */void ZipArchive::ZipArchive(ZipArchive *this) {
   *(undefined8*)( this + 0x10 ) = 0;
   *(undefined***)this = &PTR_try_open_pack_00104db8;
   *(undefined8*)( this + 0x40 ) = 2;
   instance = this;
   *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   return;
}
/* FileAccessZip::_close() */undefined8 FileAccessZip::_close(FileAccessZip *this) {
   undefined8 in_RAX;
   long lVar1;
   undefined8 uVar2;
   undefined8 uStack_28;
   if (*(long*)( this + 400 ) == 0) {
      return in_RAX;
   }

   lVar1 = ZipArchive::get_singleton();
   if (lVar1 != 0) {
      lVar1 = *(long*)( this + 400 );
      if (lVar1 == 0) {
         uStack_28 = 0;
         _err_print_error("close_handle", "core/io/file_access_zip.cpp", 0x71, "Parameter \"p_file\" is null.", "Cannot close a file if none is open.", 0);
      }
 else {
         unzCloseCurrentFile(lVar1);
         uStack_28 = unzClose(lVar1);
      }

      *(undefined8*)( this + 400 ) = 0;
      return uStack_28;
   }

   uVar2 = _err_print_error("_close", "core/io/file_access_zip.cpp", 0x102, "Parameter \"arch\" is null.", 0, 0);
   return uVar2;
}
/* FileAccessZip::~FileAccessZip() */void FileAccessZip::~FileAccessZip(FileAccessZip *this) {
   *(undefined***)this = &PTR__initialize_classv_00104de8;
   _close(this);
   FileAccess::~FileAccess((FileAccess*)this);
   return;
}
/* FileAccessZip::~FileAccessZip() */void FileAccessZip::~FileAccessZip(FileAccessZip *this) {
   *(undefined***)this = &PTR__initialize_classv_00104de8;
   _close(this);
   FileAccess::~FileAccess((FileAccess*)this);
   operator_delete(this, 0x228);
   return;
}
/* ZipArchive::get_file_handle(String const&) const */long ZipArchive::get_file_handle(ZipArchive *this, String *param_1) {
   long *plVar1;
   code *pcVar2;
   long *plVar3;
   uint uVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   code *pcVar21;
   char *pcVar22;
   char cVar23;
   uint uVar24;
   int iVar25;
   undefined8 uVar26;
   long lVar27;
   uint uVar28;
   long lVar29;
   long lVar30;
   ulong uVar31;
   uint uVar32;
   uint uVar33;
   long in_FS_OFFSET;
   bool bVar34;
   long local_d8;
   long local_d0;
   char *local_c8;
   undefined8 local_c0;
   long local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   code *local_98;
   undefined8 uStack_90;
   code *local_88;
   code *pcStack_80;
   code *local_78;
   code *pcStack_70;
   code *local_68;
   undefined8 local_60;
   code *local_58;
   code *pcStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x20 ) != 0 ) && ( *(int*)( this + 0x44 ) != 0 )) {
      uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x40 ) * 4 );
      lVar27 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x40 ) * 8 );
      uVar24 = String::hash();
      uVar31 = CONCAT44(0, uVar4);
      lVar30 = *(long*)( this + 0x28 );
      uVar28 = 1;
      if (uVar24 != 0) {
         uVar28 = uVar24;
      }

      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar28 * lVar27;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar31;
      lVar29 = SUB168(auVar5 * auVar13, 8);
      uVar24 = *(uint*)( lVar30 + lVar29 * 4 );
      iVar25 = SUB164(auVar5 * auVar13, 8);
      if (uVar24 != 0) {
         uVar33 = 0;
         do {
            if (uVar28 == uVar24) {
               cVar23 = String::operator ==((String*)( *(long*)( *(long*)( this + 0x20 ) + lVar29 * 8 ) + 0x10 ), param_1);
               if (cVar23 != '\0') {
                  if (( *(long*)( this + 0x20 ) == 0 ) || ( *(int*)( this + 0x44 ) == 0 )) goto LAB_00101010;
                  uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x40 ) * 4 );
                  uVar31 = CONCAT44(0, uVar4);
                  lVar27 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x40 ) * 8 );
                  uVar24 = String::hash();
                  lVar30 = *(long*)( this + 0x28 );
                  uVar28 = 1;
                  if (uVar24 != 0) {
                     uVar28 = uVar24;
                  }

                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = (ulong)uVar28 * lVar27;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar31;
                  lVar29 = SUB168(auVar9 * auVar17, 8);
                  uVar24 = *(uint*)( lVar30 + lVar29 * 4 );
                  uVar33 = SUB164(auVar9 * auVar17, 8);
                  if (uVar24 == 0) goto LAB_00101010;
                  uVar32 = 0;
                  goto LAB_00100e47;
               }

               lVar30 = *(long*)( this + 0x28 );
            }

            uVar33 = uVar33 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(iVar25 + 1) * lVar27;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar31;
            lVar29 = SUB168(auVar6 * auVar14, 8);
            uVar24 = *(uint*)( lVar30 + lVar29 * 4 );
            iVar25 = SUB164(auVar6 * auVar14, 8);
         }
 while ( ( uVar24 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar24 * lVar27,auVar15._8_8_ = 0,auVar15._0_8_ = uVar31,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar4 + iVar25 ) - SUB164(auVar7 * auVar15, 8)) * lVar27,auVar16._8_8_ = 0,auVar16._0_8_ = uVar31,uVar33 <= SUB164(auVar8 * auVar16, 8) );
      }

   }

   local_b8 = 0;
   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
      do {
         lVar27 = *plVar1;
         if (lVar27 == 0) goto LAB_00100bd8;
         LOCK();
         lVar30 = *plVar1;
         bVar34 = lVar27 == lVar30;
         if (bVar34) {
            *plVar1 = lVar27 + 1;
            lVar30 = lVar27;
         }

         UNLOCK();
      }
 while ( !bVar34 );
      if (lVar30 != -1) {
         local_b8 = *(long*)param_1;
      }

   }

   LAB_00100bd8:local_c8 = (char*)0x0;
   uStack_90 = 0x18;
   local_98 = (code*)0x102443;
   String::parse_latin1((StrRange*)&local_c8);
   vformat<String>(&local_98, (StrRange*)&local_c8, &local_b8);
   _err_print_error("get_file_handle", "core/io/file_access_zip.cpp", 0x77, "Condition \"!file_exists(p_file)\" is true. Returning: nullptr", &local_98, 0, 0);
   pcVar21 = local_98;
   if (local_98 != (code*)0x0) {
      LOCK();
      pcVar2 = local_98 + -0x10;
      *(long*)pcVar2 = *(long*)pcVar2 + -1;
      UNLOCK();
      if (*(long*)pcVar2 == 0) {
         local_98 = (code*)0x0;
         Memory::free_static(pcVar21 + -0x10, false);
      }

   }

   pcVar22 = local_c8;
   if (local_c8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8 = (char*)0x0;
         Memory::free_static(pcVar22 + -0x10, false);
      }

   }

   lVar27 = local_b8;
   if (local_b8 != 0) {
      LOCK();
      plVar1 = (long*)( local_b8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b8 = 0;
         Memory::free_static((void*)( lVar27 + -0x10 ), false);
         lVar30 = 0;
         goto LAB_00100fdd;
      }

   }

   LAB_00100c8b:lVar30 = 0;
   LAB_00100fdd:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return lVar30;
   LAB_00100e47:if (uVar24 == uVar28) {
      cVar23 = String::operator ==((String*)( *(long*)( *(long*)( this + 0x20 ) + lVar29 * 8 ) + 0x10 ), param_1);
      if (cVar23 != '\0') {
         lVar27 = *(long*)( *(long*)( this + 0x20 ) + (ulong)uVar33 * 8 );
         local_b8 = *(long*)( lVar27 + 0x18 );
         uStack_b0 = *(undefined8*)( lVar27 + 0x20 );
         local_a8 = *(undefined8*)( lVar27 + 0x28 );
         local_60 = 0;
         local_98 = godot_open;
         uStack_90 = 0x100000;
         local_88 = godot_write;
         pcStack_80 = godot_tell;
         local_68 = godot_testerror;
         local_78 = godot_seek;
         pcStack_70 = godot_close;
         lVar27 = (long)(int)local_b8;
         local_58 = godot_alloc;
         pcStack_50 = godot_free;
         if (lVar27 < 0) {
            lVar30 = *(long*)( this + 0x10 );
            joined_r0x0010107f:if (lVar30 != 0) {
               LAB_00101085:lVar30 = *(long*)( lVar30 + -8 );
               goto LAB_00101089;
            }

         }
 else if (*(long*)( this + 0x10 ) != 0) {
            lVar30 = *(long*)( *(long*)( this + 0x10 ) + -8 );
            if (lVar30 <= lVar27) goto LAB_00101089;
            String::utf8();
            uVar26 = CharString::get_data();
            lVar27 = unzOpen2(uVar26);
            pcVar22 = local_c8;
            if (local_c8 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_c8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_c8 = (char*)0x0;
                  Memory::free_static(pcVar22 + -0x10, false);
               }

            }

            if (lVar27 != 0) {
               iVar25 = unzGoToFilePos(lVar27, &uStack_b0);
               if (( iVar25 != 0 ) || ( iVar25 = unzOpenCurrentFile(lVar27) ),lVar30 = lVar27,iVar25 != 0) {
                  lVar30 = 0;
                  unzClose(lVar27);
                  _err_print_error("get_file_handle", "core/io/file_access_zip.cpp", 0x8f, "Method/function failed. Returning: nullptr", 0, 0);
               }

               goto LAB_00100fdd;
            }

            lVar27 = (long)(int)local_b8;
            lVar30 = *(long*)( this + 0x10 );
            if (lVar27 < 0) goto joined_r0x0010107f;
            if (lVar30 == 0) goto LAB_00101238;
            if (*(long*)( lVar30 + -8 ) <= lVar27) goto LAB_00101085;
            local_d0 = 0;
            plVar3 = (long*)( lVar30 + lVar27 * 0x10 );
            lVar27 = *plVar3;
            plVar1 = (long*)( lVar27 + -0x10 );
            if (lVar27 == 0) goto LAB_00101130;
            goto LAB_0010110f;
         }

         LAB_00101238:lVar30 = 0;
         LAB_00101089:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar27, lVar30, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar21 = (code*)invalidInstructionException();
         ( *pcVar21 )();
      }

      lVar30 = *(long*)( this + 0x28 );
   }

   uVar32 = uVar32 + 1;
   auVar10._8_8_ = 0;
   auVar10._0_8_ = ( ulong )(uVar33 + 1) * lVar27;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = uVar31;
   lVar29 = SUB168(auVar10 * auVar18, 8);
   uVar24 = *(uint*)( lVar30 + lVar29 * 4 );
   uVar33 = SUB164(auVar10 * auVar18, 8);
   if (( uVar24 == 0 ) || ( auVar11._8_8_ = 0 ),auVar11._0_8_ = (ulong)uVar24 * lVar27,auVar19._8_8_ = 0,auVar19._0_8_ = uVar31,auVar12._8_8_ = 0,auVar12._0_8_ = ( ulong )(( uVar4 + uVar33 ) - SUB164(auVar11 * auVar19, 8)) * lVar27,auVar20._8_8_ = 0,auVar20._0_8_ = uVar31,SUB164(auVar12 * auVar20, 8) < uVar32) {
      LAB_00101010:_err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar21 = (code*)invalidInstructionException();
      ( *pcVar21 )();
   }

   goto LAB_00100e47;
   while (true) {
      LOCK();
      lVar30 = *plVar1;
      bVar34 = lVar27 == lVar30;
      if (bVar34) {
         *plVar1 = lVar27 + 1;
         lVar30 = lVar27;
      }

      UNLOCK();
      if (bVar34) break;
      LAB_0010110f:lVar27 = *plVar1;
      if (lVar27 == 0) goto LAB_00101130;
   }
;
   if (lVar30 != -1) {
      local_d0 = *plVar3;
   }

   LAB_00101130:local_d8 = 0;
   local_c8 = "Cannot open file \'%s\'.";
   local_c0 = 0x16;
   String::parse_latin1((StrRange*)&local_d8);
   vformat<String>(&local_c8, (StrRange*)&local_d8, &local_d0);
   _err_print_error("get_file_handle", "core/io/file_access_zip.cpp", 0x8b, "Parameter \"pkg\" is null.", &local_c8, 0);
   pcVar22 = local_c8;
   if (local_c8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8 = (char*)0x0;
         Memory::free_static(pcVar22 + -0x10, false);
      }

   }

   lVar27 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar1 = (long*)( local_d8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar27 + -0x10 ), false);
      }

   }

   lVar27 = local_d0;
   if (local_d0 != 0) {
      LOCK();
      plVar1 = (long*)( local_d0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar30 = 0;
         local_d0 = 0;
         Memory::free_static((void*)( lVar27 + -0x10 ), false);
         goto LAB_00100fdd;
      }

   }

   goto LAB_00100c8b;
}
/* FileAccessZip::open_internal(String const&, int) */undefined8 FileAccessZip::open_internal(FileAccessZip *this, String *param_1, int param_2) {
   int iVar1;
   ZipArchive *this_00;
   long lVar2;
   _close(this);
   if (( param_2 & 2U ) == 0) {
      this_00 = (ZipArchive*)ZipArchive::get_singleton();
      if (this_00 == (ZipArchive*)0x0) {
         _err_print_error("open_internal", "core/io/file_access_zip.cpp", 0xf2, "Parameter \"arch\" is null.", 0, 0);
      }
 else {
         lVar2 = ZipArchive::get_file_handle(this_00, param_1);
         *(long*)( this + 400 ) = lVar2;
         if (lVar2 == 0) {
            _err_print_error("open_internal", "core/io/file_access_zip.cpp", 0xf4, "Parameter \"zfile\" is null.", 0, 0);
         }
 else {
            iVar1 = unzGetCurrentFileInfo64(lVar2, this + 0x198, 0, 0, 0, 0, 0, 0);
            if (iVar1 == 0) {
               return 0;
            }

            _err_print_error("open_internal", "core/io/file_access_zip.cpp", 0xf7, "Condition \"err != (0)\" is true. Returning: FAILED", 0, 0);
         }

      }

   }
 else {
      _err_print_error("open_internal", "core/io/file_access_zip.cpp", 0xf0, "Condition \"p_mode_flags & FileAccess::WRITE\" is true. Returning: FAILED", 0, 0);
   }

   return 1;
}
/* FileAccessZip::FileAccessZip(String const&, PackedData::PackedFile const&) */void FileAccessZip::FileAccessZip(FileAccessZip *this, String *param_1, PackedFile *param_2) {
   RefCounted::RefCounted((RefCounted*)this);
   this[0x220] = (FileAccessZip)0x0;
   *(undefined2*)( this + 0x17c ) = 0;
   *(undefined2*)( this + 0x184 ) = 0;
   *(undefined4*)( this + 0x180 ) = 2;
   *(undefined***)this = &PTR__initialize_classv_00104de8;
   *(undefined1(*) [16])( this + 0x188 ) = (undefined1[16])0x0;
   open_internal(this, param_1, 1);
   return;
}
undefined8 godot_close(undefined8 param_1, long *param_2) {
   char cVar1;
   if (*param_2 != 0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         memdelete<FileAccess>((FileAccess*)*param_2);
         Memory::free_static(param_2, false);
         return 0;
      }

   }

   Memory::free_static(param_2, false);
   return 0;
}
/* ZipArchive::get_file(String const&, PackedData::PackedFile*) */ZipArchive * __thiscall ZipArchive::get_file(ZipArchive *this,String *param_1,PackedFile *param_2){
   char cVar1;
   RefCounted *this_00;
   this_00 = (RefCounted*)operator_new(0x228, "");
   RefCounted::RefCounted(this_00);
   this_00[0x220] = (RefCounted)0x0;
   *(undefined2*)( this_00 + 0x17c ) = 0;
   *(undefined2*)( this_00 + 0x184 ) = 0;
   *(undefined4*)( this_00 + 0x180 ) = 2;
   *(undefined***)this_00 = &PTR__initialize_classv_00104de8;
   *(undefined1(*) [16])( this_00 + 0x188 ) = (undefined1[16])0x0;
   FileAccessZip::open_internal((FileAccessZip*)this_00, (String*)param_2, 1);
   postinitialize_handler((Object*)this_00);
   *(RefCounted**)this = this_00;
   cVar1 = RefCounted::init_ref();
   if (cVar1 == '\0') {
      *(undefined8*)this = 0;
   }

   return this;
}
long *godot_open(undefined8 param_1, int param_2, uint param_3) {
   long lVar1;
   char cVar2;
   long *plVar3;
   long in_FS_OFFSET;
   FileAccess *local_20;
   long local_18;
   long local_10;
   plVar3 = (long*)0x0;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 & 2 ) == 0) {
      String::utf8((char*)&local_18, param_2);
      FileAccess::open((String*)&local_20, (int)&local_18, (Error*)0x1);
      lVar1 = local_18;
      if (local_18 != 0) {
         LOCK();
         plVar3 = (long*)( local_18 + -0x10 );
         *plVar3 = *plVar3 + -1;
         UNLOCK();
         if (*plVar3 == 0) {
            local_18 = 0;
            Memory::free_static((void*)( lVar1 + -0x10 ), false);
         }

      }

      if (local_20 == (FileAccess*)0x0) {
         _err_print_error("godot_open", "core/io/file_access_zip.cpp", 0x33, "Condition \"f.is_null()\" is true. Returning: nullptr", 0, 0);
         plVar3 = (long*)0x0;
      }
 else {
         plVar3 = (long*)operator_new(8, "");
         *plVar3 = 0;
         if (local_20 == (FileAccess*)0x0) goto LAB_0010160a;
         *plVar3 = (long)local_20;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *plVar3 = 0;
         }

      }

      if (local_20 != (FileAccess*)0x0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            memdelete<FileAccess>(local_20);
         }

      }

   }

   LAB_0010160a:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return plVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<ZipArchive::Package>::_copy_on_write() [clone .isra.0] */void CowData<ZipArchive::Package>::_copy_on_write(CowData<ZipArchive::Package> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   CowData *pCVar4;
   ulong uVar5;
   CowData<char32_t> *this_00;
   long lVar6;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   if (lVar1 * 0x10 != 0) {
      uVar5 = lVar1 * 0x10 - 1;
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar3 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar3 != (undefined8*)0x0) {
      lVar6 = 0;
      *puVar3 = 1;
      puVar3[1] = lVar1;
      this_00 = (CowData<char32_t>*)( puVar3 + 2 );
      if (lVar1 != 0) {
         do {
            pCVar4 = (CowData*)( lVar6 * 0x10 + *(long*)this );
            *(undefined8*)this_00 = 0;
            if (*(long*)pCVar4 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar4);
            }

            lVar6 = lVar6 + 1;
            *(undefined8*)( this_00 + 8 ) = *(undefined8*)( pCVar4 + 8 );
            this_00 = this_00 + 0x10;
         }
 while ( lVar1 != lVar6 );
      }

      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar3 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* ZipArchive::~ZipArchive() */void ZipArchive::~ZipArchive(ZipArchive *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   *(undefined***)this = &PTR_try_open_pack_00104db8;
   lVar4 = *(long*)( this + 0x10 );
   lVar3 = 0;
   while (lVar4 != 0) {
      if (*(long*)( lVar4 + -8 ) <= lVar3) {
         if (*(long*)( lVar4 + -8 ) != 0) {
            CowData<ZipArchive::Package>::_unref((CowData<ZipArchive::Package>*)( this + 0x10 ));
         }

         break;
      }

      unzClose(*(undefined8*)( lVar4 + 8 + lVar3 * 0x10 ));
      lVar3 = lVar3 + 1;
      lVar4 = *(long*)( this + 0x10 );
   }
;
   pvVar5 = *(void**)( this + 0x20 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x44 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x40 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x44 ) = 0;
            *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x28 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x28 ) + lVar4 ) = 0;
                  if (*(long*)( (long)pvVar5 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x10 );
                        *(undefined8*)( (long)pvVar5 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( this + 0x20 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar4 );
            *(undefined4*)( this + 0x44 ) = 0;
            *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_001018be;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x28 ), false);
   }

   LAB_001018be:CowData<ZipArchive::Package>::_unref((CowData<ZipArchive::Package>*)( this + 0x10 ));
   return;
}
/* ZipArchive::~ZipArchive() */void ZipArchive::~ZipArchive(ZipArchive *this) {
   ~ZipArchive(this)
   ;;
   operator_delete(this, 0x48);
   return;
}
/* ZipArchive::try_open_pack(String const&, bool, unsigned long) */undefined8 ZipArchive::try_open_pack(ZipArchive *this, String *param_1, bool param_2, ulong param_3) {
   code *pcVar1;
   String *pSVar2;
   char *pcVar3;
   code *pcVar4;
   undefined *puVar5;
   char cVar6;
   int iVar7;
   undefined8 uVar8;
   long lVar9;
   long *plVar10;
   ulong uVar11;
   long lVar12;
   long lVar13;
   CowData<char32_t> *this_00;
   long in_FS_OFFSET;
   bool bVar14;
   undefined8 uVar15;
   int local_2a0;
   undefined *local_290;
   long local_288;
   long local_280;
   ulong local_278[2];
   char *local_268;
   undefined8 local_260;
   long local_258;
   long lStack_250;
   long local_248;
   code *local_238;
   undefined8 uStack_230;
   code *local_228;
   code *pcStack_220;
   code *local_218;
   code *pcStack_210;
   code *local_208;
   undefined1 local_200[16];
   undefined8 local_1f0;
   undefined *local_1e8;
   long local_1e0;
   PackSource local_158[280];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == 0) {
      String::get_extension();
      local_268 = (char*)0x0;
      local_1e8 = &_LC63;
      local_1e0 = 3;
      String::parse_latin1((StrRange*)&local_268);
      cVar6 = String::nocasecmp_to((String*)local_278);
      uVar11 = local_278[0];
      if (cVar6 == '\0') {
         bVar14 = false;
         if (local_268 != (char*)0x0) {
            LAB_001019f0:pcVar3 = local_268;
            LOCK();
            plVar10 = (long*)( local_268 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            uVar11 = local_278[0];
            if (*plVar10 == 0) {
               local_268 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
               uVar11 = local_278[0];
            }

            goto joined_r0x00101a00;
         }

         if (local_278[0] != 0) {
            LOCK();
            plVar10 = (long*)( local_278[0] - 0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_278[0] = 0;
               Memory::free_static((void*)( uVar11 - 0x10 ), false);
            }

         }

      }
 else {
         String::get_extension();
         local_238 = (code*)0x0;
         local_1e8 = &_LC64;
         local_1e0 = 3;
         String::parse_latin1((StrRange*)&local_238);
         cVar6 = String::nocasecmp_to((String*)&local_258);
         pcVar4 = local_238;
         bVar14 = cVar6 != '\0';
         if (local_238 != (code*)0x0) {
            LOCK();
            pcVar1 = local_238 + -0x10;
            *(long*)pcVar1 = *(long*)pcVar1 + -1;
            UNLOCK();
            if (*(long*)pcVar1 == 0) {
               local_238 = (code*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }

         }

         lVar9 = local_258;
         if (local_258 != 0) {
            LOCK();
            plVar10 = (long*)( local_258 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_258 = 0;
               Memory::free_static((void*)( lVar9 + -0x10 ), false);
            }

         }

         uVar11 = local_278[0];
         if (local_268 != (char*)0x0) goto LAB_001019f0;
         joined_r0x00101a00:local_278[0] = uVar11;
         if (uVar11 != 0) {
            LOCK();
            plVar10 = (long*)( uVar11 - 0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_278[0] = 0;
               Memory::free_static((void*)( uVar11 - 0x10 ), false);
            }

         }

         if (bVar14) goto LAB_00101a2c;
      }

      local_200 = (undefined1[16])0x0;
      local_1f0 = 0;
      local_238 = godot_open;
      uStack_230 = 0x100000;
      local_228 = godot_write;
      pcStack_220 = godot_tell;
      local_208 = godot_testerror;
      local_218 = godot_seek;
      pcStack_210 = godot_close;
      String::utf8();
      uVar8 = CharString::get_data();
      lVar9 = unzOpen2(uVar8);
      puVar5 = local_1e8;
      if (local_1e8 != (undefined*)0x0) {
         LOCK();
         plVar10 = (long*)( local_1e8 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_1e8 = (undefined*)0x0;
            Memory::free_static(puVar5 + -0x10, false);
         }

      }

      if (lVar9 == 0) {
         _err_print_error("try_open_pack", "core/io/file_access_zip.cpp", 0xab, "Parameter \"zfile\" is null.", 0, 0);
      }
 else {
         iVar7 = unzGetGlobalInfo64(lVar9);
         if (iVar7 == 0) {
            plVar10 = (long*)( *(long*)param_1 + -0x10 );
            if (*(long*)param_1 == 0) {
               LAB_00101fec:local_1e8 = (undefined*)0x0;
               local_290 = (undefined*)0x0;
            }
 else {
               do {
                  lVar12 = *plVar10;
                  if (lVar12 == 0) goto LAB_00101fec;
                  LOCK();
                  lVar13 = *plVar10;
                  bVar14 = lVar12 == lVar13;
                  if (bVar14) {
                     *plVar10 = lVar12 + 1;
                     lVar13 = lVar12;
                  }

                  UNLOCK();
               }
 while ( !bVar14 );
               if (lVar13 == -1) goto LAB_00101fec;
               local_1e8 = (undefined*)0x0;
               local_290 = *(undefined**)param_1;
               if (local_290 == (undefined*)0x0) goto LAB_00101fec;
               plVar10 = (long*)( local_290 + -0x10 );
               do {
                  lVar12 = *plVar10;
                  if (lVar12 == 0) goto LAB_00101c39;
                  LOCK();
                  lVar13 = *plVar10;
                  bVar14 = lVar12 == lVar13;
                  if (bVar14) {
                     *plVar10 = lVar12 + 1;
                     lVar13 = lVar12;
                  }

                  UNLOCK();
               }
 while ( !bVar14 );
               if (lVar13 != -1) {
                  local_1e8 = local_290;
               }

            }

            LAB_00101c39:puVar5 = local_1e8;
            if (*(long*)( this + 0x10 ) == 0) {
               lVar12 = 1;
            }
 else {
               lVar12 = *(long*)( *(long*)( this + 0x10 ) + -8 ) + 1;
            }

            local_1e0 = lVar9;
            iVar7 = CowData<ZipArchive::Package>::resize<false>((CowData<ZipArchive::Package>*)( this + 0x10 ), lVar12);
            if (iVar7 == 0) {
               if (*(long*)( this + 0x10 ) == 0) {
                  lVar13 = -1;
                  lVar12 = 0;
               }
 else {
                  lVar12 = *(long*)( *(long*)( this + 0x10 ) + -8 );
                  lVar13 = lVar12 + -1;
                  if (-1 < lVar13) {
                     CowData<ZipArchive::Package>::_copy_on_write((CowData<ZipArchive::Package>*)( this + 0x10 ));
                     this_00 = (CowData<char32_t>*)( lVar13 * 0x10 + *(long*)( this + 0x10 ) );
                     if (puVar5 != *(undefined**)this_00) {
                        CowData<char32_t>::_ref(this_00, (CowData*)&local_1e8);
                     }

                     *(long*)( this_00 + 8 ) = lVar9;
                     goto LAB_00101cba;
                  }

               }

               _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar13, lVar12, "p_index", "size()", "", false, false);
            }
 else {
               _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
            }

            LAB_00101cba:if (puVar5 != (undefined*)0x0) {
               LOCK();
               plVar10 = (long*)( puVar5 + -0x10 );
               *plVar10 = *plVar10 + -1;
               UNLOCK();
               if (*plVar10 == 0) {
                  Memory::free_static(local_1e8 + -0x10, false);
               }

            }

            if (*(long*)( this + 0x10 ) == 0) {
               local_2a0 = -1;
            }
 else {
               local_2a0 = (int)*(undefined8*)( *(long*)( this + 0x10 ) + -8 ) + -1;
            }

            if (local_278[0] != 0) {
               uVar11 = 0;
               do {
                  uVar15 = 0;
                  uVar8 = 0;
                  uVar11 = uVar11 + 1;
                  iVar7 = unzGetCurrentFileInfo64(lVar9, (CowData*)&local_1e8, local_158 + 0x10, 0x100, 0, 0);
                  if (iVar7 == 0) {
                     local_258 = CONCAT44(local_258._4_4_, local_2a0);
                     unzGetFilePos(lVar9, &lStack_250, uVar8, uVar15);
                     String::utf8((char*)&local_280, (int)( local_158 + 0x10 ));
                     local_268 = "res://";
                     local_288 = 0;
                     local_260 = 6;
                     String::parse_latin1((StrRange*)&local_288);
                     String::operator +((String*)&local_268, (String*)&local_288);
                     lVar12 = local_288;
                     if (local_288 != 0) {
                        LOCK();
                        plVar10 = (long*)( local_288 + -0x10 );
                        *plVar10 = *plVar10 + -1;
                        UNLOCK();
                        if (*plVar10 == 0) {
                           local_288 = 0;
                           Memory::free_static((void*)( lVar12 + -0x10 ), false);
                        }

                     }

                     lVar12 = local_280;
                     if (local_280 != 0) {
                        LOCK();
                        plVar10 = (long*)( local_280 + -0x10 );
                        *plVar10 = *plVar10 + -1;
                        UNLOCK();
                        if (*plVar10 == 0) {
                           local_280 = 0;
                           Memory::free_static((void*)( lVar12 + -0x10 ), false);
                        }

                     }

                     plVar10 = (long*)HashMap<String,ZipArchive::File,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ZipArchive::File>>>::operator []((HashMap<String,ZipArchive::File,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ZipArchive::File>>>*)( this + 0x18 ), (String*)&local_268);
                     pSVar2 = PackedData::singleton;
                     *plVar10 = local_258;
                     plVar10[1] = lStack_250;
                     for (int i = 0; i < 16; i++) {
                        local_158[i] = (PackSource)0;
                     }

                     plVar10[2] = local_248;
                     PackedData::add_path(pSVar2, param_1, ( ulong ) & local_268, 1, (uchar*)0x0, local_158, SUB81(this, 0), param_2);
                     if (uVar11 < local_278[0]) {
                        unzGoToNextFile(lVar9);
                     }

                     pcVar3 = local_268;
                     if (local_268 != (char*)0x0) {
                        LOCK();
                        plVar10 = (long*)( local_268 + -0x10 );
                        *plVar10 = *plVar10 + -1;
                        UNLOCK();
                        if (*plVar10 == 0) {
                           local_268 = (char*)0x0;
                           Memory::free_static(pcVar3 + -0x10, false);
                        }

                     }

                  }
 else {
                     _err_print_error("try_open_pack", "core/io/file_access_zip.cpp", 0xbc, "Condition \"err != (0)\" is true. Continuing.");
                  }

               }
 while ( uVar11 < local_278[0] );
            }

            if (local_290 != (undefined*)0x0) {
               plVar10 = (long*)( local_290 + -0x10 );
               LOCK();
               *plVar10 = *plVar10 + -1;
               UNLOCK();
               if (*plVar10 == 0) {
                  Memory::free_static(plVar10, false);
               }

            }

            uVar8 = 1;
            goto LAB_00101a2e;
         }

         _err_print_error("try_open_pack", "core/io/file_access_zip.cpp", 0xaf, "Condition \"err != (0)\" is true. Returning: false", 0, 0);
      }

   }
 else {
      _err_print_error("try_open_pack", "core/io/file_access_zip.cpp", 0x97, "Condition \"p_offset != 0\" is true. Returning: false", "Invalid PCK data. Note that loading files with a non-zero offset isn\'t supported with ZIP archives.", 0, 0);
   }

   LAB_00101a2c:uVar8 = 0;
   LAB_00101a2e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8;
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
   return (uint)CONCAT71(0x1050, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1050, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1050, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
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
/* FileAccessZip::resize(long) */undefined8 FileAccessZip::resize(long param_1) {
   return 2;
}
/* FileAccessZip::_get_modified_time(String const&) */undefined8 FileAccessZip::_get_modified_time(String *param_1) {
   return 0;
}
/* FileAccessZip::_get_unix_permissions(String const&) */undefined8 FileAccessZip::_get_unix_permissions(String *param_1) {
   return 0;
}
/* FileAccessZip::_set_unix_permissions(String const&, BitField<FileAccess::UnixPermissionFlags>) */undefined8 FileAccessZip::_set_unix_permissions(void) {
   return 1;
}
/* FileAccessZip::_get_hidden_attribute(String const&) */undefined8 FileAccessZip::_get_hidden_attribute(String *param_1) {
   return 0;
}
/* FileAccessZip::_set_hidden_attribute(String const&, bool) */undefined8 FileAccessZip::_set_hidden_attribute(String *param_1, bool param_2) {
   return 2;
}
/* FileAccessZip::_get_read_only_attribute(String const&) */undefined8 FileAccessZip::_get_read_only_attribute(String *param_1) {
   return 0;
}
/* FileAccessZip::_set_read_only_attribute(String const&, bool) */undefined8 FileAccessZip::_set_read_only_attribute(String *param_1, bool param_2) {
   return 2;
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
         LAB_00102913:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00102913;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "FileAccess");
         goto LAB_0010297e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "FileAccess");
   LAB_0010297e:return &_get_class_namev();
}
/* FileAccess::get_path_absolute() const */FileAccess * __thiscall FileAccess::get_path_absolute(FileAccess *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* FileAccess::get_path() const */FileAccess * __thiscall FileAccess::get_path(FileAccess *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
   if (initialize_class() != '\0') goto LAB_00102ce0;
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
         LAB_00102dee:if ((code*)PTR__bind_methods_00107010 != RefCounted::_bind_methods) {
            LAB_00102dfe:RefCounted::_bind_methods();
         }

      }
 else {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_00102dee;
         local_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         if ((code*)PTR__bind_methods_00107010 != RefCounted::_bind_methods) goto LAB_00102dfe;
      }

      RefCounted::initialize_class() {
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

      if ((code*)PTR__bind_compatibility_methods_00107008 != Object::_bind_compatibility_methods) {
         FileAccess::_bind_compatibility_methods();
      }

      initialize_class() {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* FileAccess::is_class(String const&) const */
   undefined8 FileAccess::is_class(FileAccess *this, String *param_1) {
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
                     if (lVar5 == 0) goto LAB_00102edf;
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

         LAB_00102edf:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00102f93;
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
                        if (lVar5 == 0) goto LAB_0010306b;
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

            LAB_0010306b:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

            if (cVar6 != '\0') goto LAB_00102f93;
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
                           if (lVar5 == 0) goto LAB_0010314b;
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

               LAB_0010314b:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

               if (cVar6 != '\0') goto LAB_00102f93;
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar7 = String::operator ==(param_1, "Object");
               return uVar7;
            }

            goto LAB_001031f4;
         }

      }

      LAB_00102f93:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

      LAB_001031f4:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void RefCounted::_get_property_listv(List *param_1, bool param_2) {
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
         LAB_00103368:local_50 = 0x80;
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 != 0x11) goto LAB_00103368;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 != local_80) {
            StringName::unref();
            lVar2 = *(long*)pLVar6;
            local_68 = local_80;
            goto joined_r0x00103386;
         }

         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }

      lVar2 = *(long*)pLVar6;
      joined_r0x00103386:if (lVar2 == 0) {
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

   /* FileAccess::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void FileAccess::_get_property_listv(FileAccess *this, List *param_1, bool param_2) {
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
         LAB_00103768:local_50 = 0x80;
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 != 0x11) goto LAB_00103768;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 != local_80) {
            StringName::unref();
            lVar2 = *(long*)param_1;
            local_68 = local_80;
            goto joined_r0x00103785;
         }

         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }

      lVar2 = *(long*)param_1;
      joined_r0x00103785:if (lVar2 == 0) {
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

   /* WARNING: Removing unreachable block (ram,0x00103bc8) */
   /* WARNING: Removing unreachable block (ram,0x00103cf8) */
   /* WARNING: Removing unreachable block (ram,0x00103ec0) */
   /* WARNING: Removing unreachable block (ram,0x00103d04) */
   /* WARNING: Removing unreachable block (ram,0x00103d0e) */
   /* WARNING: Removing unreachable block (ram,0x00103ea0) */
   /* WARNING: Removing unreachable block (ram,0x00103d1a) */
   /* WARNING: Removing unreachable block (ram,0x00103d24) */
   /* WARNING: Removing unreachable block (ram,0x00103e80) */
   /* WARNING: Removing unreachable block (ram,0x00103d30) */
   /* WARNING: Removing unreachable block (ram,0x00103d3a) */
   /* WARNING: Removing unreachable block (ram,0x00103e60) */
   /* WARNING: Removing unreachable block (ram,0x00103d46) */
   /* WARNING: Removing unreachable block (ram,0x00103d50) */
   /* WARNING: Removing unreachable block (ram,0x00103e40) */
   /* WARNING: Removing unreachable block (ram,0x00103d5c) */
   /* WARNING: Removing unreachable block (ram,0x00103d66) */
   /* WARNING: Removing unreachable block (ram,0x00103e20) */
   /* WARNING: Removing unreachable block (ram,0x00103d72) */
   /* WARNING: Removing unreachable block (ram,0x00103d7c) */
   /* WARNING: Removing unreachable block (ram,0x00103e00) */
   /* WARNING: Removing unreachable block (ram,0x00103d84) */
   /* WARNING: Removing unreachable block (ram,0x00103d9a) */
   /* WARNING: Removing unreachable block (ram,0x00103da6) */
   /* String vformat<String>(String const&, String const) */
   undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
      char cVar1;
      Variant *this;
      int iVar2;
      long in_FS_OFFSET;
      Array local_c8[8];
      undefined8 local_c0[9];
      int local_78[6];
      undefined8 local_60;
      undefined1 local_58[16];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      Variant::Variant((Variant*)local_78, param_3);
      local_60 = 0;
      local_58 = (undefined1[16])0x0;
      Array::Array(local_c8);
      iVar2 = (int)local_c8;
      Array::resize(iVar2);
      this(Variant * Array::operator [](iVar2));
      Variant::operator =(this, (Variant*)local_78);
      String::sprintf((Array*)local_c0, param_2);
      *param_1 = local_c0[0];
      Array::~Array(local_c8);
      if (Variant::needs_deinit[(int)local_60] == '\0') {
         cVar1 = Variant::needs_deinit[local_78[0]];
      }
 else {
         Variant::_clear_internal();
         cVar1 = Variant::needs_deinit[local_78[0]];
      }

      if (cVar1 != '\0') {
         Variant::_clear_internal();
      }

      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return param_1;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* HashMap<String, ZipArchive::File, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, ZipArchive::File> > >::operator[](String const&) */
   undefined1 * __thiscallHashMap<String,ZipArchive::File,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ZipArchive::File>>>::operator [](HashMap<String,ZipArchive::File,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ZipArchive::File>>> * this, String * param_1);
   {
      long *plVar1;
      void *pvVar2;
      void *__s;
      long lVar3;
      undefined1 auVar4[16];
      undefined1 auVar5[16];
      undefined1 auVar6[16];
      undefined1 auVar7[16];
      undefined1 auVar8[16];
      undefined1 auVar9[16];
      undefined1 auVar10[16];
      undefined1 auVar11[16];
      undefined1 auVar12[16];
      undefined1 auVar13[16];
      undefined1 auVar14[16];
      undefined1 auVar15[16];
      undefined1 auVar16[16];
      undefined1 auVar17[16];
      undefined1 auVar18[16];
      undefined1 auVar19[16];
      undefined1 auVar20[16];
      undefined1 auVar21[16];
      undefined1 auVar22[16];
      undefined1 auVar23[16];
      undefined1 auVar24[16];
      undefined1 auVar25[16];
      undefined1 auVar26[16];
      undefined1 auVar27[16];
      undefined1 auVar28[16];
      undefined1 auVar29[16];
      undefined1 auVar30[16];
      undefined1 auVar31[16];
      undefined1 auVar32[16];
      undefined1 auVar33[16];
      undefined1 auVar34[16];
      undefined1 auVar35[16];
      char cVar36;
      uint uVar37;
      uint uVar38;
      ulong uVar39;
      undefined8 uVar40;
      void *__s_00;
      undefined1(*pauVar41)[16];
      undefined8 *puVar42;
      void *pvVar43;
      ulong uVar44;
      int iVar45;
      long lVar46;
      long lVar47;
      ulong uVar48;
      undefined8 uVar49;
      uint *puVar50;
      uint uVar51;
      uint uVar52;
      long lVar53;
      uint uVar54;
      uint uVar55;
      undefined1(*pauVar56)[16];
      undefined1(*pauVar57)[16];
      long in_FS_OFFSET;
      long local_68;
      undefined4 local_60;
      undefined4 uStack_5c;
      undefined8 uStack_58;
      undefined8 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (*(long*)( this + 8 ) == 0) {
         LAB_001046a8:uVar39 = (ulong)uVar55;
         uVar44 = uVar39 * 4;
         uVar48 = uVar39 * 8;
         uVar40 = Memory::alloc_static(uVar44, false);
         *(undefined8*)( this + 0x10 ) = uVar40;
         pvVar43 = (void*)Memory::alloc_static(uVar48, false);
         *(void**)( this + 8 ) = pvVar43;
         if (uVar55 != 0) {
            pvVar2 = *(void**)( this + 0x10 );
            if (( pvVar2 < (void*)( (long)pvVar43 + uVar48 ) ) && ( pvVar43 < (void*)( (long)pvVar2 + uVar44 ) )) {
               uVar44 = 0;
               do {
                  *(undefined4*)( (long)pvVar2 + uVar44 * 4 ) = 0;
                  *(undefined8*)( (long)pvVar43 + uVar44 * 8 ) = 0;
                  uVar44 = uVar44 + 1;
               }
 while ( uVar39 != uVar44 );
               goto LAB_0010450a;
            }

            memset(pvVar2, 0, uVar44);
            memset(pvVar43, 0, uVar48);
            iVar45 = *(int*)( this + 0x2c );
            LAB_0010450e:if (iVar45 != 0) {
               LAB_00104516:uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
               lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               uVar52 = String::hash();
               uVar39 = CONCAT44(0, uVar37);
               lVar53 = *(long*)( this + 0x10 );
               uVar38 = 1;
               if (uVar52 != 0) {
                  uVar38 = uVar52;
               }

               uVar54 = 0;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = (ulong)uVar38 * lVar3;
               auVar32._8_8_ = 0;
               auVar32._0_8_ = uVar39;
               lVar46 = SUB168(auVar16 * auVar32, 8);
               uVar52 = *(uint*)( lVar53 + lVar46 * 4 );
               uVar51 = SUB164(auVar16 * auVar32, 8);
               if (uVar52 != 0) {
                  do {
                     if (uVar38 == uVar52) {
                        cVar36 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar46 * 8 ) + 0x10 ), param_1);
                        if (cVar36 != '\0') {
                           pauVar41 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar51 * 8 );
                           *(undefined4*)( pauVar41[1] + 8 ) = 0xffffffff;
                           *(undefined8*)pauVar41[2] = 0;
                           *(undefined8*)( pauVar41[2] + 8 ) = 0;
                           goto LAB_001043bb;
                        }

                        lVar53 = *(long*)( this + 0x10 );
                     }

                     uVar54 = uVar54 + 1;
                     auVar17._8_8_ = 0;
                     auVar17._0_8_ = ( ulong )(uVar51 + 1) * lVar3;
                     auVar33._8_8_ = 0;
                     auVar33._0_8_ = uVar39;
                     lVar46 = SUB168(auVar17 * auVar33, 8);
                     uVar52 = *(uint*)( lVar53 + lVar46 * 4 );
                     uVar51 = SUB164(auVar17 * auVar33, 8);
                  }
 while ( ( uVar52 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = (ulong)uVar52 * lVar3,auVar34._8_8_ = 0,auVar34._0_8_ = uVar39,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( uVar37 + uVar51 ) - SUB164(auVar18 * auVar34, 8)) * lVar3,auVar35._8_8_ = 0,auVar35._0_8_ = uVar39,uVar54 <= SUB164(auVar19 * auVar35, 8) );
               }

               iVar45 = *(int*)( this + 0x2c );
            }

            uVar39 = (ulong)uVar55;
            goto LAB_00103fe7;
         }

         iVar45 = *(int*)( this + 0x2c );
         if (pvVar43 == (void*)0x0) goto LAB_00103fe7;
         if (iVar45 != 0) goto LAB_00104516;
         LAB_0010400d:uVar55 = *(uint*)( this + 0x28 );
         if (uVar55 == 0x1c) {
            pauVar41 = (undefined1(*) [16])0x0;
            _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            goto LAB_001043bb;
         }

         uVar39 = ( ulong )(uVar55 + 1);
         *(undefined4*)( this + 0x2c ) = 0;
         uVar37 = *(uint*)( hash_table_size_primes + (ulong)uVar55 * 4 );
         if (uVar55 + 1 < 2) {
            uVar39 = 2;
         }

         uVar55 = *(uint*)( hash_table_size_primes + uVar39 * 4 );
         uVar48 = (ulong)uVar55;
         *(int*)( this + 0x28 ) = (int)uVar39;
         pvVar43 = *(void**)( this + 8 );
         uVar39 = uVar48 * 4;
         uVar44 = uVar48 * 8;
         pvVar2 = *(void**)( this + 0x10 );
         uVar40 = Memory::alloc_static(uVar39, false);
         *(undefined8*)( this + 0x10 ) = uVar40;
         __s_00 = (void*)Memory::alloc_static(uVar44, false);
         *(void**)( this + 8 ) = __s_00;
         if (uVar55 != 0) {
            __s = *(void**)( this + 0x10 );
            if (( __s < (void*)( (long)__s_00 + uVar44 ) ) && ( __s_00 < (void*)( (long)__s + uVar39 ) )) {
               uVar39 = 0;
               do {
                  *(undefined4*)( (long)__s + uVar39 * 4 ) = 0;
                  *(undefined8*)( (long)__s_00 + uVar39 * 8 ) = 0;
                  uVar39 = uVar39 + 1;
               }
 while ( uVar39 != uVar48 );
            }
 else {
               memset(__s, 0, uVar39);
               memset(__s_00, 0, uVar44);
            }

         }

         if (uVar37 != 0) {
            uVar39 = 0;
            do {
               uVar55 = *(uint*)( (long)pvVar2 + uVar39 * 4 );
               if (uVar55 != 0) {
                  lVar3 = *(long*)( this + 0x10 );
                  uVar51 = 0;
                  uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
                  uVar44 = CONCAT44(0, uVar38);
                  lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = (ulong)uVar55 * lVar53;
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = uVar44;
                  lVar46 = SUB168(auVar4 * auVar20, 8);
                  puVar50 = (uint*)( lVar3 + lVar46 * 4 );
                  iVar45 = SUB164(auVar4 * auVar20, 8);
                  uVar52 = *puVar50;
                  uVar40 = *(undefined8*)( (long)pvVar43 + uVar39 * 8 );
                  while (uVar52 != 0) {
                     auVar5._8_8_ = 0;
                     auVar5._0_8_ = (ulong)uVar52 * lVar53;
                     auVar21._8_8_ = 0;
                     auVar21._0_8_ = uVar44;
                     auVar6._8_8_ = 0;
                     auVar6._0_8_ = ( ulong )(( uVar38 + iVar45 ) - SUB164(auVar5 * auVar21, 8)) * lVar53;
                     auVar22._8_8_ = 0;
                     auVar22._0_8_ = uVar44;
                     uVar54 = SUB164(auVar6 * auVar22, 8);
                     uVar49 = uVar40;
                     if (uVar54 < uVar51) {
                        *puVar50 = uVar55;
                        puVar42 = (undefined8*)( (long)__s_00 + lVar46 * 8 );
                        uVar49 = *puVar42;
                        *puVar42 = uVar40;
                        uVar55 = uVar52;
                        uVar51 = uVar54;
                     }

                     uVar51 = uVar51 + 1;
                     auVar7._8_8_ = 0;
                     auVar7._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
                     auVar23._8_8_ = 0;
                     auVar23._0_8_ = uVar44;
                     lVar46 = SUB168(auVar7 * auVar23, 8);
                     puVar50 = (uint*)( lVar3 + lVar46 * 4 );
                     iVar45 = SUB164(auVar7 * auVar23, 8);
                     uVar40 = uVar49;
                     uVar52 = *puVar50;
                  }
;
                  *(undefined8*)( (long)__s_00 + lVar46 * 8 ) = uVar40;
                  *puVar50 = uVar55;
                  *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
               }

               uVar39 = uVar39 + 1;
            }
 while ( uVar37 != uVar39 );
            Memory::free_static(pvVar43, false);
            Memory::free_static(pvVar2, false);
         }

      }
 else {
         iVar45 = *(int*)( this + 0x2c );
         uVar39 = CONCAT44(0, uVar55);
         if (iVar45 != 0) {
            lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            uVar38 = String::hash();
            lVar53 = *(long*)( this + 0x10 );
            uVar37 = 1;
            if (uVar38 != 0) {
               uVar37 = uVar38;
            }

            uVar51 = 0;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)uVar37 * lVar3;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar39;
            lVar46 = SUB168(auVar12 * auVar28, 8);
            uVar38 = *(uint*)( lVar53 + lVar46 * 4 );
            uVar52 = SUB164(auVar12 * auVar28, 8);
            if (uVar38 != 0) {
               do {
                  if (uVar37 == uVar38) {
                     cVar36 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar46 * 8 ) + 0x10 ), param_1);
                     if (cVar36 != '\0') {
                        pauVar41 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar52 * 8 );
                        goto LAB_001043bb;
                     }

                     lVar53 = *(long*)( this + 0x10 );
                  }

                  uVar51 = uVar51 + 1;
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = ( ulong )(uVar52 + 1) * lVar3;
                  auVar29._8_8_ = 0;
                  auVar29._0_8_ = uVar39;
                  lVar46 = SUB168(auVar13 * auVar29, 8);
                  uVar38 = *(uint*)( lVar53 + lVar46 * 4 );
                  uVar52 = SUB164(auVar13 * auVar29, 8);
               }
 while ( ( uVar38 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar38 * lVar3,auVar30._8_8_ = 0,auVar30._0_8_ = uVar39,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar52 + uVar55 ) - SUB164(auVar14 * auVar30, 8)) * lVar3,auVar31._8_8_ = 0,auVar31._0_8_ = uVar39,uVar51 <= SUB164(auVar15 * auVar31, 8) );
            }

            uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            if (*(long*)( this + 8 ) == 0) goto LAB_001046a8;
            LAB_0010450a:iVar45 = *(int*)( this + 0x2c );
            goto LAB_0010450e;
         }

         LAB_00103fe7:if ((float)uVar39 * __LC47 < (float)( iVar45 + 1 )) goto LAB_0010400d;
      }

      local_68 = 0;
      if (*(long*)param_1 == 0) {
         local_60 = 0xffffffff;
         uStack_58 = 0;
         local_50 = 0;
         pauVar41 = (undefined1(*) [16])operator_new(0x30, "");
         *(undefined8*)pauVar41[1] = 0;
         *pauVar41 = (undefined1[16])0x0;
         LAB_00104675:*(ulong*)( pauVar41[1] + 8 ) = CONCAT44(uStack_5c, local_60);
         *(undefined8*)pauVar41[2] = uStack_58;
         *(undefined8*)( pauVar41[2] + 8 ) = local_50;
         LAB_001042af:puVar42 = *(undefined8**)( this + 0x20 );
         if (puVar42 != (undefined8*)0x0) goto LAB_001042bc;
         LAB_001044e5:*(undefined1(**) [16])( this + 0x18 ) = pauVar41;
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)param_1);
         lVar3 = local_68;
         local_60 = 0xffffffff;
         uStack_58 = 0;
         local_50 = 0;
         pauVar41 = (undefined1(*) [16])operator_new(0x30, "");
         *(undefined8*)pauVar41[1] = 0;
         *(undefined8*)*pauVar41 = 0;
         *(undefined8*)( *pauVar41 + 8 ) = 0;
         if (lVar3 == 0) goto LAB_00104675;
         CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar41 + 1 ), (CowData*)&local_68);
         *(undefined8*)( pauVar41[2] + 8 ) = local_50;
         *(ulong*)( pauVar41[1] + 8 ) = CONCAT44(uStack_5c, local_60);
         *(undefined8*)pauVar41[2] = uStack_58;
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_001042af;
         Memory::free_static((void*)( local_68 + -0x10 ), false);
         puVar42 = *(undefined8**)( this + 0x20 );
         if (puVar42 == (undefined8*)0x0) goto LAB_001044e5;
         LAB_001042bc:*puVar42 = pauVar41;
         *(undefined8**)( *pauVar41 + 8 ) = puVar42;
      }

      *(undefined1(**) [16])( this + 0x20 ) = pauVar41;
      uVar37 = String::hash();
      lVar3 = *(long*)( this + 0x10 );
      uVar55 = 1;
      if (uVar37 != 0) {
         uVar55 = uVar37;
      }

      uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar39 = CONCAT44(0, uVar37);
      lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar55 * lVar53;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar39;
      lVar47 = SUB168(auVar8 * auVar24, 8);
      lVar46 = *(long*)( this + 8 );
      puVar50 = (uint*)( lVar3 + lVar47 * 4 );
      iVar45 = SUB164(auVar8 * auVar24, 8);
      uVar38 = *puVar50;
      pauVar57 = pauVar41;
      if (uVar38 != 0) {
         uVar52 = 0;
         pauVar56 = pauVar41;
         do {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar38 * lVar53;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar39;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = ( ulong )(( uVar37 + iVar45 ) - SUB164(auVar9 * auVar25, 8)) * lVar53;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar39;
            uVar51 = SUB164(auVar10 * auVar26, 8);
            pauVar57 = pauVar56;
            if (uVar51 < uVar52) {
               *puVar50 = uVar55;
               puVar42 = (undefined8*)( lVar46 + lVar47 * 8 );
               pauVar57 = (undefined1(*) [16])*puVar42;
               *puVar42 = pauVar56;
               uVar52 = uVar51;
               uVar55 = uVar38;
            }

            uVar52 = uVar52 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar39;
            lVar47 = SUB168(auVar11 * auVar27, 8);
            puVar50 = (uint*)( lVar3 + lVar47 * 4 );
            iVar45 = SUB164(auVar11 * auVar27, 8);
            uVar38 = *puVar50;
            pauVar56 = pauVar57;
         }
 while ( uVar38 != 0 );
      }

      *(undefined1(**) [16])( lVar46 + lVar47 * 8 ) = pauVar57;
      *puVar50 = uVar55;
      *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
      LAB_001043bb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return pauVar41[1] + 8;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* void memdelete<FileAccess>(FileAccess*) */
   void memdelete<FileAccess>(FileAccess *param_1) {
      char cVar1;
      cVar1 = predelete_handler((Object*)param_1);
      if (cVar1 == '\0') {
         return;
      }

      if (*(code**)( *(long*)param_1 + 0x140 ) == FileAccessZip::~FileAccessZip) {
         *(undefined***)param_1 = &PTR__initialize_classv_00104de8;
         FileAccessZip::_close((FileAccessZip*)param_1);
         FileAccess::~FileAccess(param_1);
         Memory::free_static(param_1, false);
         return;
      }

      ( **(code**)( *(long*)param_1 + 0x140 ) )(param_1);
      Memory::free_static(param_1, false);
      return;
   }

   /* CowData<ZipArchive::Package>::_unref() */
   void CowData<ZipArchive::Package>::_unref(CowData<ZipArchive::Package> *this) {
      long *plVar1;
      long *plVar2;
      long lVar3;
      long lVar4;
      code *pcVar5;
      long *plVar6;
      long lVar7;
      if (*(long*)this == 0) {
         return;
      }

      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)this;
         if (plVar1 != (long*)0x0) {
            lVar3 = plVar1[-1];
            *(undefined8*)this = 0;
            if (lVar3 != 0) {
               lVar7 = 0;
               plVar6 = plVar1;
               do {
                  if (*plVar6 != 0) {
                     LOCK();
                     plVar2 = (long*)( *plVar6 + -0x10 );
                     *plVar2 = *plVar2 + -1;
                     UNLOCK();
                     if (*plVar2 == 0) {
                        lVar4 = *plVar6;
                        *plVar6 = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }

                  }

                  lVar7 = lVar7 + 1;
                  plVar6 = plVar6 + 2;
               }
 while ( lVar3 != lVar7 );
            }

            Memory::free_static(plVar1 + -2, false);
            return;
         }

         /* WARNING: Does not return */
         pcVar5 = (code*)invalidInstructionException();
         ( *pcVar5 )();
      }

      *(undefined8*)this = 0;
      return;
   }

   /* CowData<ZipArchive::Package>::_copy_on_write() [clone .isra.0] [clone .cold] */
   void CowData<ZipArchive::Package>::_copy_on_write(void) {
      code *pcVar1;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* CowData<ZipArchive::Package>::_realloc(long) */
   undefined8 CowData<ZipArchive::Package>::_realloc(CowData<ZipArchive::Package> *this, long param_1) {
      undefined8 *puVar1;
      puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
      if (puVar1 != (undefined8*)0x0) {
         *puVar1 = 1;
         *(undefined8**)this = puVar1 + 2;
         return 0;
      }

      _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
      return 6;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* Error CowData<ZipArchive::Package>::resize<false>(long) */
   undefined8 CowData<ZipArchive::Package>::resize<false>(CowData<ZipArchive::Package> *this, long param_1) {
      long *plVar1;
      code *pcVar2;
      long *plVar3;
      undefined8 uVar4;
      undefined8 *puVar5;
      undefined1(*pauVar6)[16];
      undefined1(*pauVar7)[16];
      long lVar8;
      undefined8 *puVar9;
      long lVar10;
      ulong uVar11;
      long lVar12;
      undefined1(*pauVar13)[16];
      if (param_1 < 0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
         return 0x1f;
      }

      if (*(long*)this == 0) {
         if (param_1 == 0) {
            return 0;
         }

         _copy_on_write(this);
         lVar8 = 0;
         lVar10 = 0;
      }
 else {
         lVar8 = *(long*)( *(long*)this + -8 );
         if (param_1 == lVar8) {
            return 0;
         }

         if (param_1 == 0) {
            _unref(this);
            return 0;
         }

         _copy_on_write(this);
         lVar10 = lVar8 * 0x10;
         if (lVar10 != 0) {
            uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
            uVar11 = uVar11 | uVar11 >> 2;
            uVar11 = uVar11 | uVar11 >> 4;
            uVar11 = uVar11 | uVar11 >> 8;
            uVar11 = uVar11 | uVar11 >> 0x10;
            lVar10 = ( uVar11 | uVar11 >> 0x20 ) + 1;
         }

      }

      if (param_1 * 0x10 == 0) {
         LAB_00104cd0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
         return 6;
      }

      uVar11 = param_1 * 0x10 - 1;
      uVar11 = uVar11 >> 1 | uVar11;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      uVar11 = uVar11 | uVar11 >> 0x20;
      lVar12 = uVar11 + 1;
      if (lVar12 == 0) goto LAB_00104cd0;
      if (param_1 <= lVar8) {
         lVar8 = *(long*)this;
         uVar11 = param_1;
         while (lVar8 != 0) {
            if (*(ulong*)( lVar8 + -8 ) <= uVar11) {
               LAB_00104b5f:if (lVar12 != lVar10) {
                  uVar4 = _realloc(this, lVar12);
                  if ((int)uVar4 != 0) {
                     return uVar4;
                  }

                  lVar8 = *(long*)this;
                  if (lVar8 == 0) {
                     _DAT_00000000 = 0;
                     /* WARNING: Does not return */
                     pcVar2 = (code*)invalidInstructionException();
                     ( *pcVar2 )();
                  }

               }

               *(long*)( lVar8 + -8 ) = param_1;
               return 0;
            }

            while (true) {
               plVar3 = (long*)( uVar11 * 0x10 + lVar8 );
               if (*plVar3 != 0) break;
               uVar11 = uVar11 + 1;
               if (*(ulong*)( lVar8 + -8 ) <= uVar11) goto LAB_00104b5f;
            }
;
            LOCK();
            plVar1 = (long*)( *plVar3 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar8 = *plVar3;
               *plVar3 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }

            uVar11 = uVar11 + 1;
            lVar8 = *(long*)this;
         }
;
         goto LAB_00104d26;
      }

      if (lVar12 == lVar10) {
         LAB_00104c43:puVar9 = *(undefined8**)this;
         if (puVar9 == (undefined8*)0x0) {
            LAB_00104d26:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar8 = puVar9[-1];
         if (param_1 <= lVar8) goto LAB_00104c20;
      }
 else {
         if (lVar8 != 0) {
            uVar4 = _realloc(this, lVar12);
            if ((int)uVar4 != 0) {
               return uVar4;
            }

            goto LAB_00104c43;
         }

         puVar5 = (undefined8*)Memory::alloc_static(uVar11 + 0x11, false);
         if (puVar5 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }

         puVar9 = puVar5 + 2;
         *puVar5 = 1;
         puVar5[1] = 0;
         *(undefined8**)this = puVar9;
         lVar8 = 0;
      }

      pauVar13 = (undefined1(*) [16])( puVar9 + param_1 * 2 );
      pauVar7 = (undefined1(*) [16])( puVar9 + lVar8 * 2 );
      pauVar6 = pauVar7;
      if (( (int)pauVar13 - (int)pauVar7 & 0x10U ) != 0) {
         *pauVar7 = (undefined1[16])0x0;
         pauVar6 = pauVar7 + 1;
         if (pauVar7 + 1 == pauVar13) goto LAB_00104c20;
      }

      do {
         *pauVar6 = (undefined1[16])0x0;
         pauVar7 = pauVar6 + 2;
         pauVar6[1] = (undefined1[16])0x0;
         pauVar6 = pauVar7;
      }
 while ( pauVar7 != pauVar13 );
      LAB_00104c20:puVar9[-1] = param_1;
      return 0;
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* StringName::~StringName() */
   void StringName::~StringName(StringName *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

}

