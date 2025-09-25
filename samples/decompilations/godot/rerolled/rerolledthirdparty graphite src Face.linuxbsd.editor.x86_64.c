/* graphite2::Face::runGraphite(graphite2::Segment*, graphite2::Silf const*) const */undefined8 graphite2::Face::runGraphite(Face *this, Segment *param_1, Silf *param_2) {
   char cVar1;
   undefined8 uVar2;
   if (( ( ~(byte)param_1[0xc4] & 3 ) == 0 ) && ( param_2[0x2d] == (Silf)0xff )) {
      graphite2::Segment::doMirror((ushort)param_1);
   }

   cVar1 = graphite2::Silf::runGraphite((Segment*)param_2, (uchar)param_1, '\0', (uint)(byte)param_2[0x2b]);
   if (( cVar1 != '\0' ) && ( ( graphite2::Segment::associateChars((int)param_1, 0),( (byte)param_2[0x2e] & 0x20 ) == 0 || ( cVar1 = graphite2::Segment::initCollisions() ),cVar1 != '\0' ) )) {
      uVar2 = graphite2::Silf::runGraphite((Segment*)param_2, (uchar)param_1, (uchar)param_2[0x2b], (uint)(byte)param_2[0x28]);
      return uVar2;
   }

   return 0;
}
/* graphite2::Face::~Face() */void graphite2::Face::~Face(Face *this) {
   GlyphCache *this_00;
   long *__ptr;
   Silf *pSVar1;
   void *__ptr_00;
   void *__ptr_01;
   long lVar2;
   FeatureRef *pFVar3;
   Silf *this_01;
   undefined8 *puVar4;
   long lVar5;
   FeatureRef *this_02;
   undefined8 *puVar6;
   this_00 = *(GlyphCache**)( this + 0x78 );
   *(undefined***)this = &PTR__Face_00100bc8;
   if (this_00 != (GlyphCache*)0x0) {
      graphite2::GlyphCache::~GlyphCache(this_00);
      free(this_00);
   }

   __ptr = *(long**)( this + 0x80 );
   if (__ptr != (long*)0x0) {
      if (*(code**)( *__ptr + 8 ) == Cmap::~Cmap) {
         free(__ptr);
      }
 else {
         ( **(code**)( *__ptr + 8 ) )();
      }

   }

   pSVar1 = *(Silf**)( this + 0xa0 );
   if (pSVar1 != (Silf*)0x0) {
      this_01 = pSVar1 + *(long*)( pSVar1 + -8 ) * 0x58;
      if (pSVar1 != this_01) {
         do {
            this_01 = this_01 + -0x58;
            graphite2::Silf::~Silf(this_01);
         }
 while ( *(Silf**)( this + 0xa0 ) != this_01 );
      }

      free(this_01 + -8);
   }

   __ptr_00 = *(void**)( this + 0x88 );
   if (__ptr_00 != (void*)0x0) {
      puVar6 = (undefined8*)( (long)__ptr_00 + 0xf0 );
      free(*(void**)( (long)__ptr_00 + 0x10 ));
      do {
         puVar4 = puVar6 + -0x1a;
         do {
            __ptr_01 = (void*)*puVar4;
            puVar4 = puVar4 + 1;
            free(__ptr_01);
         }
 while ( puVar6 != puVar4 );
         puVar6 = puVar6 + 0x1a;
      }
 while ( (undefined8*)( (long)__ptr_00 + 0x1610 ) != puVar6 );
      free(__ptr_00);
   }

   lVar2 = *(long*)( this + 0x40 );
   if (lVar2 != 0) {
      lVar5 = *(long*)( lVar2 + -8 ) * 0x10 + lVar2;
      if (lVar2 != lVar5) {
         do {
            puVar6 = *(undefined8**)( lVar5 + -8 );
            lVar5 = lVar5 + -0x10;
            if (puVar6 != (undefined8*)0x0) {
               free((void*)*puVar6);
               free(puVar6);
            }

         }
 while ( *(long*)( this + 0x40 ) != lVar5 );
      }

      free((void*)( lVar5 + -8 ));
   }

   pFVar3 = *(FeatureRef**)( this + 0x10 );
   if (pFVar3 != (FeatureRef*)0x0) {
      this_02 = pFVar3 + *(long*)( pFVar3 + -8 ) * 0x28;
      if (pFVar3 != this_02) {
         do {
            this_02 = this_02 + -0x28;
            graphite2::FeatureRef::~FeatureRef(this_02);
         }
 while ( *(FeatureRef**)( this + 0x10 ) != this_02 );
      }

      free(this_02 + -8);
   }

   if (*(void**)( this + 0x18 ) != (void*)0x0) {
      free(*(void**)( this + 0x18 ));
   }

   free(*(void**)( this + 0x20 ));
   return;
}
/* graphite2::Face::~Face() */void graphite2::Face::~Face(Face *this) {
   ~Face(this)
   ;;
   free(this);
   return;
}
/* graphite2::Face::Face(void const*, gr_face_ops const&) */void graphite2::Face::Face(Face *this, void *param_1, gr_face_ops *param_2) {
   uint uVar1;
   ulong uVar2;
   uint uVar3;
   ulong uVar4;
   *(void**)( this + 0x68 ) = param_1;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 16 ) ) = (undefined1[16])0;
   }

   *(undefined***)this = &PTR__Face_00100bc8;
   *(undefined2*)( this + 0x48 ) = 0;
   *(undefined2*)( this + 8 ) = 0;
   *(undefined2*)( this + 0xac ) = 0;
   *(undefined1(*) [16])( this + 0x50 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 16*i + 112 ) ) = 0;
      *(undefined8*)( this + ( 16*i + 120 ) ) = 0;
   }

   *(undefined8*)( this + 0xa0 ) = 0;
   *(undefined4*)( this + 0xa8 ) = 0;
   *(undefined8*)( this + 0x60 ) = 0;
   uVar4 = *(ulong*)param_2;
   uVar2 = 0x18;
   if (uVar4 < 0x19) {
      uVar2 = uVar4;
   }

   uVar1 = (uint)uVar2;
   if (uVar1 < 8) {
      if (( uVar2 & 4 ) != 0) {
         *(undefined4*)( this + 0x50 ) = *(undefined4*)param_2;
         *(undefined4*)( this + ( uVar2 & 0xffffffff ) + 0x4c ) = *(undefined4*)( param_2 + ( ( uVar2 & 0xffffffff ) - 4 ) );
         return;
      }

      if (( uVar1 != 0 ) && ( *(gr_face_ops*)( this + 0x50 ) = *param_2(uVar2 & 2) != 0 )) {
         *(undefined2*)( this + ( uVar2 & 0xffffffff ) + 0x4e ) = *(undefined2*)( param_2 + ( ( uVar2 & 0xffffffff ) - 2 ) );
         return;
      }

   }
 else {
      *(ulong*)( this + 0x50 ) = uVar4;
      *(undefined8*)( this + ( uVar2 & 0xffffffff ) + 0x48 ) = *(undefined8*)( param_2 + ( ( uVar2 & 0xffffffff ) - 8 ) );
      uVar1 = uVar1 + (int)( this + ( 0x50 - ( ( ulong )(this + 0x58) & 0xfffffffffffffff8 ) ) ) & 0xfffffff8;
      if (7 < uVar1) {
         uVar3 = 0;
         do {
            uVar4 = (ulong)uVar3;
            uVar3 = uVar3 + 8;
            *(undefined8*)( ( ( ulong )(this + 0x58) & 0xfffffffffffffff8 ) + uVar4 ) = *(undefined8*)( param_2 + ( uVar4 - (long)( this + ( 0x50 - ( ( ulong )(this + 0x58) & 0xfffffffffffffff8 ) ) ) ) );
         }
 while ( uVar3 < uVar1 );
         return;
      }

   }

   return;
}
/* graphite2::Face::default_glyph_advance(void const*, unsigned short) */float graphite2::Face::default_glyph_advance(void *param_1, ushort param_2) {
   long lVar1;
   lVar1 = graphite2::GlyphCache::glyph(( ushort ) * (undefined8*)( *(long*)( (long)param_1 + 0x30 ) + 0x78 ));
   return *(float*)( lVar1 + 0x10 ) * *(float*)( (long)param_1 + 0x38 );
}
/* graphite2::Face::readGraphite(graphite2::Face::Table const&) */undefined4 graphite2::Face::readGraphite(Face *this, Table *param_1) {
   Silf *pSVar1;
   uint *puVar2;
   ushort uVar3;
   undefined4 uVar4;
   uint uVar5;
   undefined4 uVar6;
   ulong *puVar7;
   ulong uVar8;
   Silf *this_00;
   ulong uVar9;
   uint *puVar10;
   uint uVar11;
   long lVar12;
   puVar2 = *(uint**)( param_1 + 8 );
   *(undefined4*)( this + 0x9c ) = 2;
   if (puVar2 == (uint*)0x0) {
      uVar4 = 5;
   }
 else {
      if (0x13 < *(ulong*)( param_1 + 0x10 )) {
         uVar11 = *puVar2;
         uVar11 = uVar11 >> 0x18 | ( uVar11 & 0xff0000 ) >> 8 | ( uVar11 & 0xff00 ) << 8 | uVar11 << 0x18;
         if (uVar11 < 0x20000) {
            *(undefined4*)( this + 0x98 ) = 6;
            return 0;
         }

         puVar10 = puVar2 + 2;
         if (uVar11 < 0x30000) {
            puVar10 = puVar2 + 1;
         }

         uVar3 = ( ushort ) * puVar10 << 8 | ( ushort ) * puVar10 >> 8;
         uVar8 = (ulong)uVar3;
         *(ushort*)( this + 0xa8 ) = uVar3;
         puVar7 = (ulong*)malloc(uVar8 * 0x58 + 8);
         pSVar1 = (Silf*)( puVar7 + 1 );
         *puVar7 = uVar8;
         lVar12 = uVar8 - 1;
         this_00 = pSVar1;
         if (uVar8 != 0) {
            do {
               lVar12 = lVar12 + -1;
               graphite2::Silf::Silf(this_00);
               this_00 = this_00 + 0x58;
            }
 while ( lVar12 != -1 );
            uVar11 = ( uint ) * (ushort*)( this + 0xa8 );
            *(Silf**)( this + 0xa0 ) = pSVar1;
            if (*(ushort*)( this + 0xa8 ) == 0) {
               return 0;
            }

            lVar12 = 0;
            uVar4 = 0;
            do {
               uVar8 = *(ulong*)( param_1 + 0x10 );
               *(int*)( this + 0x9c ) = (int)lVar12 * 0x100 + 3;
               uVar5 = puVar10[lVar12 + 1];
               uVar5 = uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18;
               if (uVar11 - 1 == (int)lVar12) {
                  uVar11 = (uint)uVar8;
                  uVar9 = uVar8 & 0xffffffff;
               }
 else {
                  uVar11 = puVar10[lVar12 + 2];
                  uVar11 = uVar11 >> 0x18 | ( uVar11 & 0xff0000 ) >> 8 | ( uVar11 & 0xff00 ) << 8 | uVar11 << 0x18;
                  uVar9 = (ulong)uVar11;
               }

               if (( uVar11 <= uVar5 ) || ( uVar8 < uVar9 )) {
                  *(undefined4*)( this + 0x98 ) = 7;
                  return 0;
               }

               uVar6 = graphite2::Silf::readGraphite((uchar*)( *(long*)( this + 0xa0 ) + lVar12 * 0x58 ), (ulong)uVar5 + *(long*)( param_1 + 8 ), (Face*)( ulong )(uVar11 - uVar5), (uint)this);
               if ((char)uVar6 == '\0') {
                  return 0;
               }

               uVar11 = ( uint ) * (ushort*)( this + 0xa8 );
               if (*(char*)( *(long*)( this + 0xa0 ) + 0x28 + lVar12 * 0x58 ) != '\0') {
                  uVar4 = uVar6;
               }

               lVar12 = lVar12 + 1;
            }
 while ( (int)lVar12 < (int)uVar11 );
            return uVar4;
         }

         *(Silf**)( this + 0xa0 ) = pSVar1;
         return 0;
      }

      uVar4 = 7;
   }

   *(undefined4*)( this + 0x98 ) = uVar4;
   return 0;
}
/* graphite2::Face::readFeatures() */void graphite2::Face::readFeatures(Face *this) {
   graphite2::SillMap::readFace(this + 8);
   return;
}
/* graphite2::Face::setLogger(_IO_FILE*) */void graphite2::Face::setLogger(_IO_FILE *param_1) {
   return;
}
/* graphite2::Face::chooseSilf(unsigned int) const */undefined8 graphite2::Face::chooseSilf(uint param_1) {
   undefined4 in_register_0000003c;
   if (*(short*)( CONCAT44(in_register_0000003c, param_1) + 0xa8 ) != 0) {
      return *(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0xa0 );
   }

   return 0;
}
/* graphite2::Face::findPseudo(unsigned int) const */undefined8 graphite2::Face::findPseudo(uint param_1) {
   undefined8 uVar1;
   undefined4 in_register_0000003c;
   if (*(short*)( CONCAT44(in_register_0000003c, param_1) + 0xa8 ) == 0) {
      return 0;
   }

   uVar1 = graphite2::Silf::findPseudo(( uint ) * (undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0xa0 ));
   return uVar1;
}
/* graphite2::Face::getGlyphMetric(unsigned short, unsigned char) const */ulong graphite2::Face::getGlyphMetric(Face *this, ushort param_1, uchar param_2) {
   uchar uVar1;
   ulong uVar2;
   if (param_2 == '\n') {
      return ( ulong ) * (ushort*)( this + 0xaa );
   }

   if (param_2 != '\v') {
      if (*(ushort*)( *(long*)( this + 0x78 ) + 0x28 ) <= param_1) {
         return 0;
      }

      uVar1 = graphite2::GlyphCache::glyph(( ushort ) * (long*)( this + 0x78 ));
      uVar2 = graphite2::GlyphFace::getMetric(uVar1);
      return uVar2;
   }

   return ( ulong ) * (ushort*)( this + 0xac );
}
/* graphite2::Face::takeFileFace(graphite2::FileFace*) */void graphite2::Face::takeFileFace(FileFace *param_1) {
   return;
}
/* graphite2::Face::Table::release() */void graphite2::Face::Table::release(Table *this) {
   void *__ptr;
   code *pcVar1;
   __ptr = *(void**)( this + 8 );
   if (this[0x18] == (Table)0x0) {
      if (__ptr != (void*)0x0) {
         pcVar1 = *(code**)( *(long*)this + 0x60 );
         if (pcVar1 != (code*)0x0) {
            ( *pcVar1 )(*(undefined8*)( *(long*)this + 0x68 ), __ptr);
         }

      }

   }
 else {
      free(__ptr);
   }

   *(undefined8*)( this + 8 ) = 0;
   *(undefined8*)( this + 0x10 ) = 0;
   return;
}
/* graphite2::Face::Table::TEMPNAMEPLACEHOLDERVALUE(graphite2::Face::Table const&&) */Table * __thiscall graphite2::Face::Table::operator=(Table *this,Table *param_1){
   Table TVar1;
   void *__ptr;
   code *pcVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   if (this != param_1) {
      __ptr = *(void**)( this + 8 );
      if (this[0x18] == (Table)0x0) {
         if (__ptr != (void*)0x0) {
            pcVar2 = *(code**)( *(long*)this + 0x60 );
            if (pcVar2 != (code*)0x0) {
               ( *pcVar2 )(*(undefined8*)( *(long*)this + 0x68 ), __ptr);
            }

         }

      }
 else {
         free(__ptr);
      }

      uVar3 = *(undefined8*)param_1;
      uVar4 = *(undefined8*)( param_1 + 8 );
      *(undefined8*)( param_1 + 8 ) = 0;
      *(undefined8*)( this + 0x10 ) = *(undefined8*)( param_1 + 0x10 );
      TVar1 = param_1[0x18];
      *(undefined8*)this = uVar3;
      *(undefined8*)( this + 8 ) = uVar4;
      this[0x18] = TVar1;
   }

   return this;
}
/* graphite2::Face::Table::decompress() */undefined8 graphite2::Face::Table::decompress(Table *this) {
   int iVar1;
   ulong uVar2;
   int *piVar3;
   uint uVar4;
   uint uVar5;
   int *__ptr;
   byte bVar6;
   undefined8 uVar7;
   ulong __size;
   uVar2 = *(ulong*)( this + 0x10 );
   if (uVar2 < 0x14) {
      return 7;
   }

   piVar3 = *(int**)( this + 8 );
   uVar7 = 0;
   uVar4 = piVar3[1];
   bVar6 = (byte)uVar4 >> 3;
   if (bVar6 == 0) {
      return 0;
   }

   iVar1 = *piVar3;
   if (bVar6 == 1) {
      uVar4 = uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | ( uVar4 & 7 ) << 0x18;
      __size = (ulong)uVar4;
      __ptr = (int*)malloc(__size);
      if (( __ptr == (int*)0x0 ) || ( __size < 4 )) {
         uVar7 = 1;
         goto LAB_001007da;
      }

      *__ptr = 0;
      uVar5 = lz4::decompress(piVar3 + 2, uVar2 - 8, __ptr, __size);
      if (uVar5 != uVar4) {
         uVar7 = 0x46;
         goto LAB_001007da;
      }

      if (*__ptr == iVar1) {
         release(this);
         goto LAB_001007f0;
      }

      release(this);
      uVar7 = 0x46;
   }
 else {
      __ptr = (int*)0x0;
      uVar7 = 0x45;
      LAB_001007da:release(this);
   }

   __size = 0;
   free(__ptr);
   __ptr = (int*)0x0;
   LAB_001007f0:*(int**)( this + 8 ) = __ptr;
   *(ulong*)( this + 0x10 ) = __size;
   this[0x18] = (Table)0x1;
   return uVar7;
}
/* graphite2::Face::Table::Table(graphite2::Face const&, graphite2::TtfUtil::Tag, unsigned int) */void graphite2::Face::Table::Table(Table *this, long param_1, undefined4 param_3, uint param_4) {
   uint uVar1;
   char cVar2;
   undefined8 uVar3;
   *(long*)this = param_1;
   *(undefined8*)( this + 0x10 ) = 0;
   this[0x18] = (Table)0x0;
   uVar3 = ( **(code**)( param_1 + 0x58 ) )(*(undefined8*)( param_1 + 0x68 ), param_3, this + 0x10);
   *(undefined8*)( this + 8 ) = uVar3;
   cVar2 = graphite2::TtfUtil::CheckTable(param_3, uVar3, *(undefined8*)( this + 0x10 ));
   if (cVar2 == '\0') {
      release(this);
      return;
   }

   uVar1 = **(uint**)( this + 8 );
   if (( uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18 ) < param_4) {
      return;
   }

   decompress(this);
   return;
}
/* graphite2::Face::nameTable() const [clone .part.0] */NameTable * __thiscall graphite2::Face::nameTable(Face *this){
   NameTable *this_00;
   long in_FS_OFFSET;
   Table aTStack_58[8];
   void *local_50;
   ulong local_48;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Table::Table(aTStack_58, this, 0x6e616d65, 0xffffffff);
   if (local_50 == (void*)0x0) {
      this_00 = *(NameTable**)( this + 0x88 );
   }
 else {
      this_00 = (NameTable*)malloc(0x1548);
      graphite2::NameTable::NameTable(this_00, local_50, local_48, 3, 1);
      *(NameTable**)( this + 0x88 ) = this_00;
   }

   Table::release(aTStack_58);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this_00;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* graphite2::Face::nameTable() const */void graphite2::Face::nameTable(Face *this) {
   if (*(long*)( this + 0x88 ) != 0) {
      return;
   }

   nameTable(this);
   return;
}
/* graphite2::Face::languageForLocale(char const*) const */undefined8 graphite2::Face::languageForLocale(char *param_1) {
   undefined8 uVar1;
   char *pcVar2;
   pcVar2 = *(char**)( param_1 + 0x88 );
   if (pcVar2 == (char*)0x0) {
      nameTable((Face*)param_1);
      pcVar2 = *(char**)( param_1 + 0x88 );
      if (pcVar2 == (char*)0x0) {
         return 0;
      }

   }

   uVar1 = graphite2::NameTable::getLanguageId(pcVar2);
   return uVar1;
}
/* graphite2::Face::readGlyphs(unsigned int) */undefined4 graphite2::Face::readGlyphs(Face *this, uint param_1) {
   short sVar1;
   long lVar2;
   undefined4 uVar3;
   GlyphCache *this_00;
   DirectCmap *this_01;
   *(undefined4*)( this + 0x9c ) = 1;
   this_00 = (GlyphCache*)malloc(0x30);
   graphite2::GlyphCache::GlyphCache(this_00, this, param_1);
   sVar1 = *(short*)( this_00 + 0x28 );
   *(GlyphCache**)( this + 0x78 ) = this_00;
   if (sVar1 == 0) {
      *(undefined4*)( this + 0x98 ) = 2;
   }
 else if (*(short*)( this_00 + 0x2c ) == 0) {
      *(undefined4*)( this + 0x98 ) = 3;
   }
 else {
      if (( param_1 & 4 ) == 0) {
         this_01 = (DirectCmap*)malloc(0x38);
         graphite2::DirectCmap::DirectCmap(this_01, this);
      }
 else {
         this_01 = (DirectCmap*)malloc(0x18);
         graphite2::CachedCmap::CachedCmap((CachedCmap*)this_01, this);
      }

      lVar2 = *(long*)this_01;
      *(DirectCmap**)( this + 0x80 ) = this_01;
      if (( *(code**)( lVar2 + 0x18 ) != Cmap::operator_cast_to_bool ) && ( uVar3 = ( **(code**)( lVar2 + 0x18 ) )(this_01) ),(char)uVar3 != '\0') {
         if (( param_1 & 2 ) == 0) {
            return uVar3;
         }

         if (*(long*)( this + 0x88 ) != 0) {
            return uVar3;
         }

         nameTable(this);
         return uVar3;
      }

      *(undefined4*)( this + 0x98 ) = 4;
   }

   return 0;
}
/* graphite2::Cmap::operator bool() const */bool graphite2::Cmap::operator_cast_to_bool(Cmap *this) {
   return false;
}
/* graphite2::Cmap::~Cmap() */void graphite2::Cmap::~Cmap(Cmap *this) {
   free(this);
   return;
}
/* graphite2::Cmap::~Cmap() */void graphite2::Cmap::~Cmap(Cmap *this) {
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* graphite2::Cmap::~Cmap() */void graphite2::Cmap::~Cmap(Cmap *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

