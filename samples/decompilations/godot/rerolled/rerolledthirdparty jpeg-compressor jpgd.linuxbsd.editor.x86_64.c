/* jpgd::jpeg_decoder_mem_stream::read(unsigned char*, int, bool*) */uint jpgd::jpeg_decoder_mem_stream::read(jpeg_decoder_mem_stream *this, uchar *param_1, int param_2, bool *param_3) {
   uint uVar1;
   long lVar2;
   uint uVar3;
   lVar2 = *(long*)( this + 8 );
   *param_3 = false;
   if (lVar2 == 0) {
      param_2 = 0xffffffff;
   }
 else {
      uVar1 = *(uint*)( this + 0x10 );
      uVar3 = *(int*)( this + 0x14 ) - uVar1;
      if (uVar3 < (uint)param_2) {
         *param_3 = true;
         param_2 = uVar3;
      }

      memcpy(param_1, (void*)( lVar2 + (ulong)uVar1 ), (long)param_2);
      *(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + param_2;
   }

   return param_2;
}
/* jpgd::jpeg_decoder_file_stream::read(unsigned char*, int, bool*) */ulong jpgd::jpeg_decoder_file_stream::read(jpeg_decoder_file_stream *this, uchar *param_1, int param_2, bool *param_3) {
   int iVar1;
   size_t sVar2;
   if (*(FILE**)( this + 8 ) != (FILE*)0x0) {
      if (this[0x10] != (jpeg_decoder_file_stream)0x0) {
         *param_3 = true;
         return 0;
      }

      if (this[0x11] == (jpeg_decoder_file_stream)0x0) {
         sVar2 = fread(param_1, 1, (long)param_2, *(FILE**)( this + 8 ));
         if (param_2 <= (int)sVar2) {
            return sVar2 & 0xffffffff;
         }

         iVar1 = ferror(*(FILE**)( this + 8 ));
         if (iVar1 == 0) {
            this[0x10] = (jpeg_decoder_file_stream)0x1;
            *param_3 = true;
            return sVar2 & 0xffffffff;
         }

         this[0x11] = (jpeg_decoder_file_stream)0x1;
      }

   }

   return 0xffffffff;
}
/* jpgd::jpeg_decoder_file_stream::~jpeg_decoder_file_stream() */void jpgd::jpeg_decoder_file_stream::~jpeg_decoder_file_stream(jpeg_decoder_file_stream *this) {
   *(undefined***)this = &PTR__jpeg_decoder_file_stream_0010cc30;
   if (*(FILE**)( this + 8 ) != (FILE*)0x0) {
      fclose(*(FILE**)( this + 8 ));
      return;
   }

   return;
}
/* jpgd::jpeg_decoder_file_stream::~jpeg_decoder_file_stream() */void jpgd::jpeg_decoder_file_stream::~jpeg_decoder_file_stream(jpeg_decoder_file_stream *this) {
   *(undefined***)this = &PTR__jpeg_decoder_file_stream_0010cc30;
   if (*(FILE**)( this + 8 ) != (FILE*)0x0) {
      fclose(*(FILE**)( this + 8 ));
   }

   operator_delete(this, 0x18);
   return;
}
/* jpgd::idctSSEShortU8(short const*, unsigned char*) */void jpgd::idctSSEShortU8(short *param_1, uchar *param_2) {
   undefined2 uVar1;
   undefined2 uVar2;
   undefined2 uVar3;
   undefined2 uVar4;
   undefined2 uVar5;
   undefined2 uVar6;
   undefined2 uVar7;
   undefined2 uVar8;
   short sVar9;
   undefined4 uVar10;
   short sVar12;
   short sVar13;
   undefined4 uVar14;
   short sVar15;
   short sVar16;
   undefined4 uVar17;
   short sVar18;
   short sVar19;
   undefined1 in_XMM0[16];
   undefined1 auVar11[16];
   undefined4 uVar20;
   short sVar21;
   short sVar22;
   int iVar23;
   short sVar27;
   short sVar28;
   int iVar29;
   short sVar30;
   short sVar31;
   int iVar32;
   short sVar33;
   short sVar34;
   undefined1 auVar24[16];
   int iVar35;
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   short sVar36;
   short sVar37;
   short sVar39;
   short sVar40;
   short sVar41;
   short sVar42;
   short sVar43;
   short sVar44;
   undefined1 auVar38[16];
   short sVar45;
   short sVar46;
   int iVar47;
   short sVar52;
   short sVar53;
   int iVar54;
   short sVar55;
   short sVar56;
   int iVar57;
   short sVar58;
   short sVar59;
   undefined1 auVar48[16];
   undefined1 auVar49[16];
   int iVar60;
   undefined1 auVar50[16];
   undefined1 auVar51[16];
   short sVar61;
   int iVar62;
   int iVar68;
   int iVar69;
   int iVar70;
   undefined1 auVar63[16];
   undefined1 auVar64[16];
   undefined1 auVar65[16];
   undefined1 auVar66[16];
   undefined1 auVar67[16];
   short sVar71;
   short sVar75;
   short sVar76;
   short sVar77;
   short sVar78;
   short sVar79;
   short sVar80;
   undefined1 auVar72[16];
   undefined1 auVar73[16];
   undefined1 auVar74[16];
   short sVar81;
   undefined1 auVar82[16];
   undefined1 auVar83[16];
   undefined1 auVar84[16];
   undefined1 auVar85[16];
   undefined1 auVar86[16];
   undefined1 auVar87[16];
   undefined1 auVar88[16];
   undefined1 auVar89[16];
   undefined1 auVar90[16];
   undefined1 auVar91[16];
   undefined1 auVar92[16];
   undefined1 auVar93[16];
   undefined1 auVar94[16];
   undefined1 auVar95[16];
   undefined1 auVar96[16];
   undefined1 auVar97[16];
   undefined1 auVar98[16];
   undefined1 auVar99[16];
   undefined1 auVar100[16];
   undefined1 auVar101[16];
   undefined1 auVar102[16];
   undefined1 auVar103[16];
   undefined1 auVar104[16];
   undefined1 auVar105[16];
   undefined1 auVar106[16];
   undefined1 auVar107[16];
   undefined1 auVar108[16];
   undefined1 auVar109[16];
   undefined1 auVar110[16];
   undefined1 auVar111[16];
   undefined1 auVar112[16];
   undefined1 auVar113[16];
   undefined1 auVar114[16];
   undefined1 auVar115[16];
   uVar8 = shortM128_128._14_2_;
   uVar7 = shortM128_128._12_2_;
   uVar6 = shortM128_128._10_2_;
   uVar5 = shortM128_128._8_2_;
   uVar4 = shortM128_128._6_2_;
   uVar3 = shortM128_128._4_2_;
   uVar2 = shortM128_128._2_2_;
   uVar1 = shortM128_128._0_2_;
   auVar11 = pshuflw(in_XMM0, *(undefined1(*) [16])param_1, 0xd8);
   uVar10 = auVar11._0_4_;
   uVar14 = auVar11._4_4_;
   auVar51._4_4_ = uVar10;
   auVar51._0_4_ = uVar10;
   auVar51._8_4_ = uVar10;
   auVar51._12_4_ = uVar10;
   auVar82._4_4_ = uVar14;
   auVar82._0_4_ = uVar14;
   auVar82._8_4_ = uVar14;
   auVar82._12_4_ = uVar14;
   auVar11 = pshufhw(auVar11, auVar11, 0xd8);
   uVar10 = auVar11._8_4_;
   uVar14 = auVar11._12_4_;
   auVar48._4_4_ = uVar14;
   auVar48._0_4_ = uVar14;
   auVar48._8_4_ = uVar14;
   auVar48._12_4_ = uVar14;
   auVar74._4_4_ = uVar10;
   auVar74._0_4_ = uVar10;
   auVar74._8_4_ = uVar10;
   auVar74._12_4_ = uVar10;
   auVar11 = pshufhw(auVar11, *(undefined1(*) [16])( param_1 + 0x10 ), 0xd8);
   auVar24 = pmaddwd(auVar74, shortM128_tab_i_04._16_16_);
   auVar72 = pmaddwd(auVar51, shortM128_tab_i_04._0_16_);
   auVar83 = pmaddwd(auVar82, shortM128_tab_i_04._32_16_);
   auVar11 = pshuflw(auVar11, auVar11, 0xd8);
   auVar49 = pmaddwd(auVar48, shortM128_tab_i_04._48_16_);
   uVar10 = auVar11._0_4_;
   uVar14 = auVar11._4_4_;
   uVar17 = auVar11._8_4_;
   auVar73._4_4_ = uVar14;
   auVar73._0_4_ = uVar14;
   auVar73._8_4_ = uVar14;
   auVar73._12_4_ = uVar14;
   auVar89._4_4_ = uVar10;
   auVar89._0_4_ = uVar10;
   auVar89._8_4_ = uVar10;
   auVar89._12_4_ = uVar10;
   iVar62 = auVar24._0_4_ + auVar72._0_4_ + shortM128_round_inv_row._0_4_;
   iVar68 = auVar24._4_4_ + auVar72._4_4_ + shortM128_round_inv_row._4_4_;
   iVar69 = auVar24._8_4_ + auVar72._8_4_ + shortM128_round_inv_row._8_4_;
   iVar70 = auVar24._12_4_ + auVar72._12_4_ + shortM128_round_inv_row._12_4_;
   iVar47 = auVar49._0_4_ + auVar83._0_4_;
   iVar54 = auVar49._4_4_ + auVar83._4_4_;
   iVar57 = auVar49._8_4_ + auVar83._8_4_;
   iVar60 = auVar49._12_4_ + auVar83._12_4_;
   auVar96._4_4_ = uVar17;
   auVar96._0_4_ = uVar17;
   auVar96._8_4_ = uVar17;
   auVar96._12_4_ = uVar17;
   auVar49 = pmaddwd(auVar73, shortM128_tab_i_26._32_16_);
   auVar72 = pmaddwd(auVar89, shortM128_tab_i_26._0_16_);
   auVar11._4_4_ = auVar11._12_4_;
   auVar11._0_4_ = auVar11._12_4_;
   auVar11._8_4_ = auVar11._12_4_;
   auVar24 = pmaddwd(auVar96, shortM128_tab_i_26._16_16_);
   auVar11 = pmaddwd(auVar11, shortM128_tab_i_26._48_16_);
   iVar23 = auVar24._0_4_ + auVar72._0_4_ + shortM128_round_inv_row._0_4_;
   iVar29 = auVar24._4_4_ + auVar72._4_4_ + shortM128_round_inv_row._4_4_;
   iVar32 = auVar24._8_4_ + auVar72._8_4_ + shortM128_round_inv_row._8_4_;
   iVar35 = auVar24._12_4_ + auVar72._12_4_ + shortM128_round_inv_row._12_4_;
   auVar63._4_4_ = iVar69 - iVar57 >> 0xc;
   auVar63._0_4_ = iVar70 - iVar60 >> 0xc;
   auVar63._8_4_ = iVar68 - iVar54 >> 0xc;
   auVar63._12_4_ = iVar62 - iVar47 >> 0xc;
   auVar50._0_4_ = iVar47 + iVar62 >> 0xc;
   auVar50._4_4_ = iVar54 + iVar68 >> 0xc;
   auVar50._8_4_ = iVar57 + iVar69 >> 0xc;
   auVar50._12_4_ = iVar60 + iVar70 >> 0xc;
   iVar47 = auVar11._0_4_ + auVar49._0_4_;
   iVar54 = auVar11._4_4_ + auVar49._4_4_;
   iVar57 = auVar11._8_4_ + auVar49._8_4_;
   iVar60 = auVar11._12_4_ + auVar49._12_4_;
   auVar51 = packssdw(auVar50, auVar63);
   auVar24._0_4_ = iVar47 + iVar23 >> 0xc;
   auVar24._4_4_ = iVar54 + iVar29 >> 0xc;
   auVar24._8_4_ = iVar57 + iVar32 >> 0xc;
   auVar24._12_4_ = iVar60 + iVar35 >> 0xc;
   auVar11 = pshuflw(auVar24, *(undefined1(*) [16])( param_1 + 0x20 ), 0xd8);
   auVar112._4_4_ = iVar32 - iVar57 >> 0xc;
   auVar112._0_4_ = iVar35 - iVar60 >> 0xc;
   auVar112._8_4_ = iVar29 - iVar54 >> 0xc;
   auVar112._12_4_ = iVar23 - iVar47 >> 0xc;
   auVar74 = packssdw(auVar24, auVar112);
   uVar10 = auVar11._0_4_;
   uVar14 = auVar11._4_4_;
   auVar92._4_4_ = uVar14;
   auVar92._0_4_ = uVar14;
   auVar92._8_4_ = uVar14;
   auVar92._12_4_ = uVar14;
   auVar115._4_4_ = uVar10;
   auVar115._0_4_ = uVar10;
   auVar115._8_4_ = uVar10;
   auVar115._12_4_ = uVar10;
   auVar11 = pshufhw(auVar11, auVar11, 0xd8);
   uVar10 = auVar11._8_4_;
   uVar14 = auVar11._12_4_;
   auVar64._4_4_ = uVar10;
   auVar64._0_4_ = uVar10;
   auVar64._8_4_ = uVar10;
   auVar64._12_4_ = uVar10;
   auVar49 = pmaddwd(auVar64, shortM128_tab_i_04._16_16_);
   auVar72 = pmaddwd(auVar115, shortM128_tab_i_04._0_16_);
   auVar25._4_4_ = uVar14;
   auVar25._0_4_ = uVar14;
   auVar25._8_4_ = uVar14;
   auVar25._12_4_ = uVar14;
   auVar11 = pshufhw(auVar11, *(undefined1(*) [16])( param_1 + 0x30 ), 0xd8);
   auVar24 = pmaddwd(auVar25, shortM128_tab_i_04._48_16_);
   auVar83 = pmaddwd(auVar92, shortM128_tab_i_04._32_16_);
   auVar11 = pshuflw(auVar11, auVar11, 0xd8);
   uVar10 = auVar11._0_4_;
   uVar14 = auVar11._4_4_;
   uVar17 = auVar11._8_4_;
   uVar20 = auVar11._12_4_;
   auVar103._4_4_ = uVar10;
   auVar103._0_4_ = uVar10;
   auVar103._8_4_ = uVar10;
   auVar103._12_4_ = uVar10;
   auVar65._4_4_ = uVar17;
   auVar65._0_4_ = uVar17;
   auVar65._8_4_ = uVar17;
   auVar65._12_4_ = uVar17;
   iVar62 = auVar49._0_4_ + auVar72._0_4_ + shortM128_round_inv_row._0_4_;
   iVar68 = auVar49._4_4_ + auVar72._4_4_ + shortM128_round_inv_row._4_4_;
   iVar69 = auVar49._8_4_ + auVar72._8_4_ + shortM128_round_inv_row._8_4_;
   iVar70 = auVar49._12_4_ + auVar72._12_4_ + shortM128_round_inv_row._12_4_;
   iVar23 = auVar24._0_4_ + auVar83._0_4_;
   iVar29 = auVar24._4_4_ + auVar83._4_4_;
   iVar32 = auVar24._8_4_ + auVar83._8_4_;
   iVar35 = auVar24._12_4_ + auVar83._12_4_;
   auVar97._4_4_ = uVar14;
   auVar97._0_4_ = uVar14;
   auVar97._8_4_ = uVar14;
   auVar97._12_4_ = uVar14;
   auVar72 = pmaddwd(auVar103, shortM128_tab_i_26._0_16_);
   auVar11 = pmaddwd(auVar65, shortM128_tab_i_26._16_16_);
   auVar49 = pmaddwd(auVar97, shortM128_tab_i_26._32_16_);
   auVar93._0_4_ = iVar62 - iVar23 >> 0xc;
   auVar93._4_4_ = iVar68 - iVar29 >> 0xc;
   auVar93._8_4_ = iVar69 - iVar32 >> 0xc;
   auVar93._12_4_ = iVar70 - iVar35 >> 0xc;
   auVar66._4_4_ = uVar20;
   auVar66._0_4_ = uVar20;
   auVar66._8_4_ = uVar20;
   auVar66._12_4_ = uVar20;
   auVar24 = pmaddwd(auVar66, shortM128_tab_i_26._48_16_);
   auVar84._4_4_ = auVar93._8_4_;
   auVar84._0_4_ = auVar93._12_4_;
   auVar84._8_4_ = auVar93._4_4_;
   auVar84._12_4_ = auVar93._0_4_;
   iVar47 = auVar11._0_4_ + auVar72._0_4_ + shortM128_round_inv_row._0_4_;
   iVar54 = auVar11._4_4_ + auVar72._4_4_ + shortM128_round_inv_row._4_4_;
   iVar57 = auVar11._8_4_ + auVar72._8_4_ + shortM128_round_inv_row._8_4_;
   iVar60 = auVar11._12_4_ + auVar72._12_4_ + shortM128_round_inv_row._12_4_;
   auVar26._0_4_ = iVar23 + iVar62 >> 0xc;
   auVar26._4_4_ = iVar29 + iVar68 >> 0xc;
   auVar26._8_4_ = iVar32 + iVar69 >> 0xc;
   auVar26._12_4_ = iVar35 + iVar70 >> 0xc;
   iVar23 = auVar24._0_4_ + auVar49._0_4_;
   iVar29 = auVar24._4_4_ + auVar49._4_4_;
   iVar32 = auVar24._8_4_ + auVar49._8_4_;
   iVar35 = auVar24._12_4_ + auVar49._12_4_;
   auVar24 = packssdw(auVar26, auVar84);
   auVar11 = pshufhw(auVar93, *(undefined1(*) [16])( param_1 + 8 ), 0xd8);
   auVar85._0_4_ = iVar47 - iVar23 >> 0xc;
   auVar85._4_4_ = iVar54 - iVar29 >> 0xc;
   auVar85._8_4_ = iVar57 - iVar32 >> 0xc;
   auVar85._12_4_ = iVar60 - iVar35 >> 0xc;
   auVar67._0_4_ = iVar23 + iVar47 >> 0xc;
   auVar67._4_4_ = iVar29 + iVar54 >> 0xc;
   auVar67._8_4_ = iVar32 + iVar57 >> 0xc;
   auVar67._12_4_ = iVar35 + iVar60 >> 0xc;
   auVar72 = pshuflw(auVar11, auVar11, 0xd8);
   auVar49._4_4_ = auVar85._8_4_;
   auVar49._0_4_ = auVar85._12_4_;
   auVar49._8_4_ = auVar85._4_4_;
   auVar49._12_4_ = auVar85._0_4_;
   auVar11 = pshuflw(auVar85, *(undefined1(*) [16])( param_1 + 0x18 ), 0xd8);
   uVar10 = auVar72._0_4_;
   uVar17 = auVar72._4_4_;
   uVar20 = auVar72._8_4_;
   auVar94._12_4_ = auVar72._12_4_;
   auVar107._4_4_ = uVar10;
   auVar107._0_4_ = uVar10;
   auVar107._8_4_ = uVar10;
   auVar107._12_4_ = uVar10;
   auVar108 = pmaddwd(auVar107, shortM128_tab_i_17._0_16_);
   auVar49 = packssdw(auVar67, auVar49);
   uVar10 = auVar11._0_4_;
   uVar14 = auVar11._4_4_;
   auVar98._4_4_ = uVar10;
   auVar98._0_4_ = uVar10;
   auVar98._8_4_ = uVar10;
   auVar98._12_4_ = uVar10;
   auVar104._4_4_ = uVar14;
   auVar104._0_4_ = uVar14;
   auVar104._8_4_ = uVar14;
   auVar104._12_4_ = uVar14;
   auVar11 = pshufhw(auVar11, auVar11, 0xd8);
   auVar99 = pmaddwd(auVar98, shortM128_tab_i_35._0_16_);
   uVar10 = auVar11._8_4_;
   uVar14 = auVar11._12_4_;
   auVar72._4_4_ = uVar10;
   auVar72._0_4_ = uVar10;
   auVar72._8_4_ = uVar10;
   auVar72._12_4_ = uVar10;
   auVar90._4_4_ = uVar14;
   auVar90._0_4_ = uVar14;
   auVar90._8_4_ = uVar14;
   auVar90._12_4_ = uVar14;
   auVar11 = pmaddwd(auVar72, shortM128_tab_i_35._16_16_);
   auVar83 = pmaddwd(auVar90, shortM128_tab_i_35._48_16_);
   auVar86._4_4_ = uVar20;
   auVar86._0_4_ = uVar20;
   auVar86._8_4_ = uVar20;
   auVar86._12_4_ = uVar20;
   auVar105 = pmaddwd(auVar104, shortM128_tab_i_35._32_16_);
   auVar72 = pmaddwd(auVar86, shortM128_tab_i_17._16_16_);
   auVar100._4_4_ = uVar17;
   auVar100._0_4_ = uVar17;
   auVar100._8_4_ = uVar17;
   auVar100._12_4_ = uVar17;
   auVar94._4_4_ = auVar94._12_4_;
   auVar94._0_4_ = auVar94._12_4_;
   auVar94._8_4_ = auVar94._12_4_;
   iVar47 = auVar11._0_4_ + auVar99._0_4_ + shortM128_round_inv_row._0_4_;
   iVar54 = auVar11._4_4_ + auVar99._4_4_ + shortM128_round_inv_row._4_4_;
   iVar57 = auVar11._8_4_ + auVar99._8_4_ + shortM128_round_inv_row._8_4_;
   iVar60 = auVar11._12_4_ + auVar99._12_4_ + shortM128_round_inv_row._12_4_;
   iVar23 = auVar83._0_4_ + auVar105._0_4_;
   iVar29 = auVar83._4_4_ + auVar105._4_4_;
   iVar32 = auVar83._8_4_ + auVar105._8_4_;
   iVar35 = auVar83._12_4_ + auVar105._12_4_;
   auVar99 = pmaddwd(auVar100, shortM128_tab_i_17._32_16_);
   auVar91._0_4_ = iVar23 + iVar47 >> 0xc;
   auVar91._4_4_ = iVar29 + iVar54 >> 0xc;
   auVar91._8_4_ = iVar32 + iVar57 >> 0xc;
   auVar91._12_4_ = iVar35 + iVar60 >> 0xc;
   auVar87._0_4_ = auVar72._0_4_ + auVar108._0_4_ + shortM128_round_inv_row._0_4_;
   auVar87._4_4_ = auVar72._4_4_ + auVar108._4_4_ + shortM128_round_inv_row._4_4_;
   auVar87._8_4_ = auVar72._8_4_ + auVar108._8_4_ + shortM128_round_inv_row._8_4_;
   auVar87._12_4_ = auVar72._12_4_ + auVar108._12_4_ + shortM128_round_inv_row._12_4_;
   auVar11 = pmaddwd(auVar94, shortM128_tab_i_17._48_16_);
   auVar83._4_4_ = iVar57 - iVar32 >> 0xc;
   auVar83._0_4_ = iVar60 - iVar35 >> 0xc;
   auVar83._8_4_ = iVar54 - iVar29 >> 0xc;
   auVar83._12_4_ = iVar47 - iVar23 >> 0xc;
   auVar83 = packssdw(auVar91, auVar83);
   iVar47 = auVar11._0_4_ + auVar99._0_4_;
   iVar54 = auVar11._4_4_ + auVar99._4_4_;
   iVar57 = auVar11._8_4_ + auVar99._8_4_;
   iVar60 = auVar11._12_4_ + auVar99._12_4_;
   auVar11 = pshuflw(auVar87, *(undefined1(*) [16])( param_1 + 0x28 ), 0xd8);
   auVar95._0_4_ = iVar47 + auVar87._0_4_ >> 0xc;
   auVar95._4_4_ = iVar54 + auVar87._4_4_ >> 0xc;
   auVar95._8_4_ = iVar57 + auVar87._8_4_ >> 0xc;
   auVar95._12_4_ = iVar60 + auVar87._12_4_ >> 0xc;
   uVar10 = auVar11._0_4_;
   uVar14 = auVar11._4_4_;
   auVar109._4_4_ = uVar10;
   auVar109._0_4_ = uVar10;
   auVar109._8_4_ = uVar10;
   auVar109._12_4_ = uVar10;
   auVar111._4_4_ = uVar14;
   auVar111._0_4_ = uVar14;
   auVar111._8_4_ = uVar14;
   auVar111._12_4_ = uVar14;
   auVar11 = pshufhw(auVar11, auVar11, 0xd8);
   auVar99._4_4_ = auVar87._8_4_ - iVar57 >> 0xc;
   auVar99._0_4_ = auVar87._12_4_ - iVar60 >> 0xc;
   auVar99._8_4_ = auVar87._4_4_ - iVar54 >> 0xc;
   auVar99._12_4_ = auVar87._0_4_ - iVar47 >> 0xc;
   uVar10 = auVar11._8_4_;
   uVar14 = auVar11._12_4_;
   auVar101._4_4_ = uVar10;
   auVar101._0_4_ = uVar10;
   auVar101._8_4_ = uVar10;
   auVar101._12_4_ = uVar10;
   auVar108 = pmaddwd(auVar109, shortM128_tab_i_35._0_16_);
   auVar112 = pmaddwd(auVar111, shortM128_tab_i_35._32_16_);
   auVar96 = packssdw(auVar95, auVar99);
   auVar105._4_4_ = uVar14;
   auVar105._0_4_ = uVar14;
   auVar105._8_4_ = uVar14;
   auVar105._12_4_ = uVar14;
   auVar99 = pshufhw(auVar101, *(undefined1(*) [16])( param_1 + 0x38 ), 0xd8);
   auVar72 = pmaddwd(auVar101, shortM128_tab_i_35._16_16_);
   auVar11 = pmaddwd(auVar105, shortM128_tab_i_35._48_16_);
   auVar99 = pshuflw(auVar99, auVar99, 0xd8);
   uVar10 = auVar99._0_4_;
   uVar14 = auVar99._4_4_;
   uVar17 = auVar99._8_4_;
   auVar102._12_4_ = auVar99._12_4_;
   auVar114._4_4_ = uVar10;
   auVar114._0_4_ = uVar10;
   auVar114._8_4_ = uVar10;
   auVar114._12_4_ = uVar10;
   auVar106._4_4_ = uVar17;
   auVar106._0_4_ = uVar17;
   auVar106._8_4_ = uVar17;
   auVar106._12_4_ = uVar17;
   iVar23 = auVar72._0_4_ + auVar108._0_4_ + shortM128_round_inv_row._0_4_;
   iVar29 = auVar72._4_4_ + auVar108._4_4_ + shortM128_round_inv_row._4_4_;
   iVar32 = auVar72._8_4_ + auVar108._8_4_ + shortM128_round_inv_row._8_4_;
   iVar35 = auVar72._12_4_ + auVar108._12_4_ + shortM128_round_inv_row._12_4_;
   auVar99 = pmaddwd(auVar114, shortM128_tab_i_17._0_16_);
   auVar110._4_4_ = uVar14;
   auVar110._0_4_ = uVar14;
   auVar110._8_4_ = uVar14;
   auVar110._12_4_ = uVar14;
   iVar47 = auVar11._0_4_ + auVar112._0_4_;
   iVar54 = auVar11._4_4_ + auVar112._4_4_;
   iVar57 = auVar11._8_4_ + auVar112._8_4_;
   iVar60 = auVar11._12_4_ + auVar112._12_4_;
   auVar11 = pmaddwd(auVar106, shortM128_tab_i_17._16_16_);
   auVar102._4_4_ = auVar102._12_4_;
   auVar102._0_4_ = auVar102._12_4_;
   auVar102._8_4_ = auVar102._12_4_;
   auVar72 = pmaddwd(auVar102, shortM128_tab_i_17._48_16_);
   iVar62 = auVar11._0_4_ + auVar99._0_4_ + shortM128_round_inv_row._0_4_;
   iVar68 = auVar11._4_4_ + auVar99._4_4_ + shortM128_round_inv_row._4_4_;
   iVar69 = auVar11._8_4_ + auVar99._8_4_ + shortM128_round_inv_row._8_4_;
   iVar70 = auVar11._12_4_ + auVar99._12_4_ + shortM128_round_inv_row._12_4_;
   auVar113._4_4_ = iVar32 - iVar57 >> 0xc;
   auVar113._0_4_ = iVar35 - iVar60 >> 0xc;
   auVar113._8_4_ = iVar29 - iVar54 >> 0xc;
   auVar113._12_4_ = iVar23 - iVar47 >> 0xc;
   auVar108._0_4_ = iVar47 + iVar23 >> 0xc;
   auVar108._4_4_ = iVar54 + iVar29 >> 0xc;
   auVar108._8_4_ = iVar57 + iVar32 >> 0xc;
   auVar108._12_4_ = iVar60 + iVar35 >> 0xc;
   auVar115 = pmulhw(auVar96, shortM128_tg_1_16);
   auVar105 = pmaddwd(auVar110, shortM128_tab_i_17._32_16_);
   auVar11 = packssdw(auVar108, auVar113);
   auVar99 = pmulhw(auVar74, shortM128_tg_2_16);
   auVar112 = psubsw(auVar99, auVar49);
   iVar47 = auVar72._0_4_ + auVar105._0_4_;
   iVar54 = auVar72._4_4_ + auVar105._4_4_;
   iVar57 = auVar72._8_4_ + auVar105._8_4_;
   iVar60 = auVar72._12_4_ + auVar105._12_4_;
   auVar49 = pmulhw(auVar49, shortM128_tg_2_16);
   auVar99 = paddsw(auVar74, auVar49);
   auVar49 = pmulhw(auVar11, shortM128_tg_3_16);
   auVar38._0_4_ = iVar47 + iVar62 >> 0xc;
   auVar38._4_4_ = iVar54 + iVar68 >> 0xc;
   auVar38._8_4_ = iVar57 + iVar69 >> 0xc;
   auVar38._12_4_ = iVar60 + iVar70 >> 0xc;
   auVar49 = paddsw(auVar49, auVar11);
   auVar88._4_4_ = iVar69 - iVar57 >> 0xc;
   auVar88._0_4_ = iVar70 - iVar60 >> 0xc;
   auVar88._8_4_ = iVar68 - iVar54 >> 0xc;
   auVar88._12_4_ = iVar62 - iVar47 >> 0xc;
   auVar108 = paddsw(auVar49, auVar83);
   auVar49 = packssdw(auVar38, auVar88);
   auVar72 = pmulhw(auVar83, shortM128_tg_3_16);
   auVar72 = paddsw(auVar72, auVar83);
   auVar11 = psubsw(auVar11, auVar72);
   auVar83 = pmulhw(auVar49, shortM128_tg_1_16);
   auVar72 = psubsw(auVar115, auVar49);
   auVar49 = paddsw(auVar83, auVar96);
   auVar74 = paddsw(auVar72, auVar11);
   auVar11 = psubsw(auVar72, auVar11);
   auVar105 = paddsw(auVar108, auVar49);
   auVar49 = psubsw(auVar49, auVar108);
   auVar96 = paddsw(auVar11, shortM128_one_corr);
   auVar72 = psubsw(auVar49, auVar96);
   auVar11 = paddsw(auVar24, auVar51);
   auVar83 = psubsw(auVar51, auVar24);
   auVar108 = paddsw(auVar105, shortM128_one_corr);
   auVar24 = pmulhw(auVar72, shortM128_cos_4_16);
   auVar51 = paddsw(auVar49, auVar96);
   auVar49 = paddsw(auVar24, auVar72);
   auVar24 = psubsw(auVar11, auVar99);
   auVar11 = paddsw(auVar11, auVar99);
   auVar11 = paddsw(auVar11, shortM128_round_inv_col);
   auVar72 = psubsw(auVar83, auVar112);
   auVar99 = paddsw(auVar72, shortM128_round_inv_corr);
   auVar72 = pmulhw(auVar51, shortM128_cos_4_16);
   auVar105 = paddsw(auVar108, auVar11);
   auVar51 = paddsw(auVar72, auVar51);
   auVar11 = psubsw(auVar11, auVar108);
   auVar72 = psraw(auVar11, 5);
   auVar83 = paddsw(auVar83, auVar112);
   auVar108 = paddsw(auVar99, auVar49 | shortM128_one_corr);
   auVar11 = paddsw(auVar24, shortM128_round_inv_corr);
   auVar83 = paddsw(auVar83, shortM128_round_inv_col);
   auVar108 = psraw(auVar108, 5);
   auVar49 = psubsw(auVar99, auVar49 | shortM128_one_corr);
   auVar24 = paddsw(auVar74, auVar11);
   auVar11 = psubsw(auVar11, auVar74);
   auVar49 = psraw(auVar49, 5);
   auVar99 = psubsw(auVar83, auVar51 | shortM128_one_corr);
   auVar24 = psraw(auVar24, 5);
   auVar11 = psraw(auVar11, 5);
   auVar83 = paddsw(auVar83, auVar51 | shortM128_one_corr);
   sVar37 = auVar24._0_2_ + shortM128_128._0_2_;
   sVar39 = auVar24._2_2_ + shortM128_128._2_2_;
   sVar40 = auVar24._4_2_ + shortM128_128._4_2_;
   sVar41 = auVar24._6_2_ + shortM128_128._6_2_;
   sVar42 = auVar24._8_2_ + shortM128_128._8_2_;
   sVar43 = auVar24._10_2_ + shortM128_128._10_2_;
   sVar44 = auVar24._12_2_ + shortM128_128._12_2_;
   sVar45 = auVar24._14_2_ + shortM128_128._14_2_;
   auVar24 = psraw(auVar99, 5);
   sVar22 = auVar108._0_2_ + shortM128_128._0_2_;
   sVar27 = auVar108._2_2_ + shortM128_128._2_2_;
   sVar28 = auVar108._4_2_ + shortM128_128._4_2_;
   sVar30 = auVar108._6_2_ + shortM128_128._6_2_;
   sVar31 = auVar108._8_2_ + shortM128_128._8_2_;
   sVar33 = auVar108._10_2_ + shortM128_128._10_2_;
   sVar34 = auVar108._12_2_ + shortM128_128._12_2_;
   sVar36 = auVar108._14_2_ + shortM128_128._14_2_;
   sVar9 = auVar11._0_2_ + shortM128_128._0_2_;
   sVar12 = auVar11._2_2_ + shortM128_128._2_2_;
   sVar13 = auVar11._4_2_ + shortM128_128._4_2_;
   sVar15 = auVar11._6_2_ + shortM128_128._6_2_;
   sVar16 = auVar11._8_2_ + shortM128_128._8_2_;
   sVar18 = auVar11._10_2_ + shortM128_128._10_2_;
   sVar19 = auVar11._12_2_ + shortM128_128._12_2_;
   sVar21 = auVar11._14_2_ + shortM128_128._14_2_;
   sVar46 = auVar49._0_2_ + shortM128_128._0_2_;
   sVar52 = auVar49._2_2_ + shortM128_128._2_2_;
   sVar53 = auVar49._4_2_ + shortM128_128._4_2_;
   sVar55 = auVar49._6_2_ + shortM128_128._6_2_;
   sVar56 = auVar49._8_2_ + shortM128_128._8_2_;
   sVar58 = auVar49._10_2_ + shortM128_128._10_2_;
   sVar59 = auVar49._12_2_ + shortM128_128._12_2_;
   sVar61 = auVar49._14_2_ + shortM128_128._14_2_;
   sVar71 = auVar24._0_2_ + shortM128_128._0_2_;
   sVar75 = auVar24._2_2_ + shortM128_128._2_2_;
   sVar76 = auVar24._4_2_ + shortM128_128._4_2_;
   sVar77 = auVar24._6_2_ + shortM128_128._6_2_;
   sVar78 = auVar24._8_2_ + shortM128_128._8_2_;
   sVar79 = auVar24._10_2_ + shortM128_128._10_2_;
   sVar80 = auVar24._12_2_ + shortM128_128._12_2_;
   sVar81 = auVar24._14_2_ + shortM128_128._14_2_;
   param_2[0x10] = ( 0 < sVar22 ) * ( sVar22 < 0x100 ) * (char)sVar22 - ( 0xff < sVar22 );
   param_2[0x11] = ( 0 < sVar27 ) * ( sVar27 < 0x100 ) * (char)sVar27 - ( 0xff < sVar27 );
   param_2[0x12] = ( 0 < sVar28 ) * ( sVar28 < 0x100 ) * (char)sVar28 - ( 0xff < sVar28 );
   param_2[0x13] = ( 0 < sVar30 ) * ( sVar30 < 0x100 ) * (char)sVar30 - ( 0xff < sVar30 );
   param_2[0x14] = ( 0 < sVar31 ) * ( sVar31 < 0x100 ) * (char)sVar31 - ( 0xff < sVar31 );
   param_2[0x15] = ( 0 < sVar33 ) * ( sVar33 < 0x100 ) * (char)sVar33 - ( 0xff < sVar33 );
   param_2[0x16] = ( 0 < sVar34 ) * ( sVar34 < 0x100 ) * (char)sVar34 - ( 0xff < sVar34 );
   param_2[0x17] = ( 0 < sVar36 ) * ( sVar36 < 0x100 ) * (char)sVar36 - ( 0xff < sVar36 );
   param_2[0x18] = ( 0 < sVar37 ) * ( sVar37 < 0x100 ) * (char)sVar37 - ( 0xff < sVar37 );
   param_2[0x19] = ( 0 < sVar39 ) * ( sVar39 < 0x100 ) * (char)sVar39 - ( 0xff < sVar39 );
   param_2[0x1a] = ( 0 < sVar40 ) * ( sVar40 < 0x100 ) * (char)sVar40 - ( 0xff < sVar40 );
   param_2[0x1b] = ( 0 < sVar41 ) * ( sVar41 < 0x100 ) * (char)sVar41 - ( 0xff < sVar41 );
   param_2[0x1c] = ( 0 < sVar42 ) * ( sVar42 < 0x100 ) * (char)sVar42 - ( 0xff < sVar42 );
   param_2[0x1d] = ( 0 < sVar43 ) * ( sVar43 < 0x100 ) * (char)sVar43 - ( 0xff < sVar43 );
   param_2[0x1e] = ( 0 < sVar44 ) * ( sVar44 < 0x100 ) * (char)sVar44 - ( 0xff < sVar44 );
   param_2[0x1f] = ( 0 < sVar45 ) * ( sVar45 < 0x100 ) * (char)sVar45 - ( 0xff < sVar45 );
   auVar11 = psraw(auVar105, 5);
   auVar24 = psraw(auVar83, 5);
   param_2[0x20] = ( 0 < sVar9 ) * ( sVar9 < 0x100 ) * (char)sVar9 - ( 0xff < sVar9 );
   param_2[0x21] = ( 0 < sVar12 ) * ( sVar12 < 0x100 ) * (char)sVar12 - ( 0xff < sVar12 );
   param_2[0x22] = ( 0 < sVar13 ) * ( sVar13 < 0x100 ) * (char)sVar13 - ( 0xff < sVar13 );
   param_2[0x23] = ( 0 < sVar15 ) * ( sVar15 < 0x100 ) * (char)sVar15 - ( 0xff < sVar15 );
   param_2[0x24] = ( 0 < sVar16 ) * ( sVar16 < 0x100 ) * (char)sVar16 - ( 0xff < sVar16 );
   param_2[0x25] = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * (char)sVar18 - ( 0xff < sVar18 );
   param_2[0x26] = ( 0 < sVar19 ) * ( sVar19 < 0x100 ) * (char)sVar19 - ( 0xff < sVar19 );
   param_2[0x27] = ( 0 < sVar21 ) * ( sVar21 < 0x100 ) * (char)sVar21 - ( 0xff < sVar21 );
   param_2[0x28] = ( 0 < sVar46 ) * ( sVar46 < 0x100 ) * (char)sVar46 - ( 0xff < sVar46 );
   param_2[0x29] = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * (char)sVar52 - ( 0xff < sVar52 );
   param_2[0x2a] = ( 0 < sVar53 ) * ( sVar53 < 0x100 ) * (char)sVar53 - ( 0xff < sVar53 );
   param_2[0x2b] = ( 0 < sVar55 ) * ( sVar55 < 0x100 ) * (char)sVar55 - ( 0xff < sVar55 );
   param_2[0x2c] = ( 0 < sVar56 ) * ( sVar56 < 0x100 ) * (char)sVar56 - ( 0xff < sVar56 );
   param_2[0x2d] = ( 0 < sVar58 ) * ( sVar58 < 0x100 ) * (char)sVar58 - ( 0xff < sVar58 );
   param_2[0x2e] = ( 0 < sVar59 ) * ( sVar59 < 0x100 ) * (char)sVar59 - ( 0xff < sVar59 );
   param_2[0x2f] = ( 0 < sVar61 ) * ( sVar61 < 0x100 ) * (char)sVar61 - ( 0xff < sVar61 );
   sVar9 = auVar72._0_2_ + uVar1;
   sVar12 = auVar72._2_2_ + uVar2;
   sVar13 = auVar72._4_2_ + uVar3;
   sVar15 = auVar72._6_2_ + uVar4;
   sVar16 = auVar72._8_2_ + uVar5;
   sVar18 = auVar72._10_2_ + uVar6;
   sVar19 = auVar72._12_2_ + uVar7;
   sVar21 = auVar72._14_2_ + uVar8;
   sVar22 = auVar11._0_2_ + uVar1;
   sVar27 = auVar11._2_2_ + uVar2;
   sVar28 = auVar11._4_2_ + uVar3;
   sVar30 = auVar11._6_2_ + uVar4;
   sVar31 = auVar11._8_2_ + uVar5;
   sVar33 = auVar11._10_2_ + uVar6;
   sVar34 = auVar11._12_2_ + uVar7;
   sVar36 = auVar11._14_2_ + uVar8;
   sVar37 = auVar24._0_2_ + uVar1;
   sVar39 = auVar24._2_2_ + uVar2;
   sVar40 = auVar24._4_2_ + uVar3;
   sVar41 = auVar24._6_2_ + uVar4;
   sVar42 = auVar24._8_2_ + uVar5;
   sVar43 = auVar24._10_2_ + uVar6;
   sVar44 = auVar24._12_2_ + uVar7;
   sVar45 = auVar24._14_2_ + uVar8;
   *param_2 = ( 0 < sVar22 ) * ( sVar22 < 0x100 ) * (char)sVar22 - ( 0xff < sVar22 );
   param_2[1] = ( 0 < sVar27 ) * ( sVar27 < 0x100 ) * (char)sVar27 - ( 0xff < sVar27 );
   param_2[2] = ( 0 < sVar28 ) * ( sVar28 < 0x100 ) * (char)sVar28 - ( 0xff < sVar28 );
   param_2[3] = ( 0 < sVar30 ) * ( sVar30 < 0x100 ) * (char)sVar30 - ( 0xff < sVar30 );
   param_2[4] = ( 0 < sVar31 ) * ( sVar31 < 0x100 ) * (char)sVar31 - ( 0xff < sVar31 );
   param_2[5] = ( 0 < sVar33 ) * ( sVar33 < 0x100 ) * (char)sVar33 - ( 0xff < sVar33 );
   param_2[6] = ( 0 < sVar34 ) * ( sVar34 < 0x100 ) * (char)sVar34 - ( 0xff < sVar34 );
   param_2[7] = ( 0 < sVar36 ) * ( sVar36 < 0x100 ) * (char)sVar36 - ( 0xff < sVar36 );
   param_2[8] = ( 0 < sVar37 ) * ( sVar37 < 0x100 ) * (char)sVar37 - ( 0xff < sVar37 );
   param_2[9] = ( 0 < sVar39 ) * ( sVar39 < 0x100 ) * (char)sVar39 - ( 0xff < sVar39 );
   param_2[10] = ( 0 < sVar40 ) * ( sVar40 < 0x100 ) * (char)sVar40 - ( 0xff < sVar40 );
   param_2[0xb] = ( 0 < sVar41 ) * ( sVar41 < 0x100 ) * (char)sVar41 - ( 0xff < sVar41 );
   param_2[0xc] = ( 0 < sVar42 ) * ( sVar42 < 0x100 ) * (char)sVar42 - ( 0xff < sVar42 );
   param_2[0xd] = ( 0 < sVar43 ) * ( sVar43 < 0x100 ) * (char)sVar43 - ( 0xff < sVar43 );
   param_2[0xe] = ( 0 < sVar44 ) * ( sVar44 < 0x100 ) * (char)sVar44 - ( 0xff < sVar44 );
   param_2[0xf] = ( 0 < sVar45 ) * ( sVar45 < 0x100 ) * (char)sVar45 - ( 0xff < sVar45 );
   param_2[0x30] = ( 0 < sVar71 ) * ( sVar71 < 0x100 ) * (char)sVar71 - ( 0xff < sVar71 );
   param_2[0x31] = ( 0 < sVar75 ) * ( sVar75 < 0x100 ) * (char)sVar75 - ( 0xff < sVar75 );
   param_2[0x32] = ( 0 < sVar76 ) * ( sVar76 < 0x100 ) * (char)sVar76 - ( 0xff < sVar76 );
   param_2[0x33] = ( 0 < sVar77 ) * ( sVar77 < 0x100 ) * (char)sVar77 - ( 0xff < sVar77 );
   param_2[0x34] = ( 0 < sVar78 ) * ( sVar78 < 0x100 ) * (char)sVar78 - ( 0xff < sVar78 );
   param_2[0x35] = ( 0 < sVar79 ) * ( sVar79 < 0x100 ) * (char)sVar79 - ( 0xff < sVar79 );
   param_2[0x36] = ( 0 < sVar80 ) * ( sVar80 < 0x100 ) * (char)sVar80 - ( 0xff < sVar80 );
   param_2[0x37] = ( 0 < sVar81 ) * ( sVar81 < 0x100 ) * (char)sVar81 - ( 0xff < sVar81 );
   param_2[0x38] = ( 0 < sVar9 ) * ( sVar9 < 0x100 ) * (char)sVar9 - ( 0xff < sVar9 );
   param_2[0x39] = ( 0 < sVar12 ) * ( sVar12 < 0x100 ) * (char)sVar12 - ( 0xff < sVar12 );
   param_2[0x3a] = ( 0 < sVar13 ) * ( sVar13 < 0x100 ) * (char)sVar13 - ( 0xff < sVar13 );
   param_2[0x3b] = ( 0 < sVar15 ) * ( sVar15 < 0x100 ) * (char)sVar15 - ( 0xff < sVar15 );
   param_2[0x3c] = ( 0 < sVar16 ) * ( sVar16 < 0x100 ) * (char)sVar16 - ( 0xff < sVar16 );
   param_2[0x3d] = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * (char)sVar18 - ( 0xff < sVar18 );
   param_2[0x3e] = ( 0 < sVar19 ) * ( sVar19 < 0x100 ) * (char)sVar19 - ( 0xff < sVar19 );
   param_2[0x3f] = ( 0 < sVar21 ) * ( sVar21 < 0x100 ) * (char)sVar21 - ( 0xff < sVar21 );
   return;
}
/* jpgd::jpeg_decoder::free_all_blocks() */void jpgd::jpeg_decoder::free_all_blocks(jpeg_decoder *this) {
   undefined8 *puVar1;
   undefined8 *__ptr;
   *(undefined8*)( this + 0xe0 ) = 0;
   __ptr = *(undefined8**)( this + 0xd0 );
   while (__ptr != (undefined8*)0x0) {
      puVar1 = (undefined8*)*__ptr;
      free(__ptr);
      __ptr = puVar1;
   }
;
   *(undefined8*)( this + 0xd0 ) = 0;
   return;
}
/* jpgd::jpeg_decoder::stop_decoding(jpgd::jpgd_status) */void jpgd::jpeg_decoder::stop_decoding(jpeg_decoder *this, undefined4 param_2) {
   *(undefined4*)( this + 0x34c8 ) = param_2;
   free_all_blocks(this);
   /* WARNING: Subroutine does not return */
   __longjmp_chk(this, param_2);
}
/* jpgd::jpeg_decoder::alloc(unsigned long, bool) */undefined8 * __thiscall jpgd::jpeg_decoder::alloc(jpeg_decoder *this,ulong param_1,bool param_2){
   undefined8 *puVar1;
   long lVar2;
   undefined8 *puVar3;
   ulong uVar4;
   undefined8 *puVar5;
   ulong uVar6;
   uVar6 = 1;
   if (param_1 != 0) {
      uVar6 = param_1;
   }

   puVar1 = *(undefined8**)( this + 0xd0 );
   uVar6 = uVar6 + 3 & 0xfffffffffffffffc;
   puVar3 = puVar1;
   do {
      if (puVar3 == (undefined8*)0x0) {
         uVar4 = uVar6 + 0x7ff & 0xfffffffffffff800;
         if (uVar4 < 0x7f00) {
            uVar4 = 0x7f00;
         }

         puVar5 = (undefined8*)malloc((long)(int)uVar4 + 0x20);
         if (puVar5 == (undefined8*)0x0) {
            /* WARNING: Subroutine does not return */
            stop_decoding(this, 0xffffff1f);
         }

         *puVar5 = puVar1;
         puVar3 = puVar5 + 3;
         *(undefined8**)( this + 0xd0 ) = puVar5;
         puVar5[1] = uVar6;
         puVar5[2] = (long)(int)uVar4;
         joined_r0x00100863:if (!param_2) {
            return puVar3;
         }

         puVar3 = (undefined8*)memset(puVar3, 0, uVar6);
         return puVar3;
      }

      lVar2 = puVar3[1];
      uVar4 = lVar2 + uVar6;
      if (uVar4 <= (ulong)puVar3[2]) {
         puVar3[1] = uVar4;
         puVar3 = (undefined8*)( (long)puVar3 + lVar2 + 0x18 );
         goto joined_r0x00100863;
      }

      puVar3 = (undefined8*)*puVar3;
   }
 while ( true );
}
/* jpgd::jpeg_decoder::alloc_aligned(unsigned long, unsigned int, bool) */ulong jpgd::jpeg_decoder::alloc_aligned(jpeg_decoder *this, ulong param_1, uint param_2, bool param_3) {
   long lVar1;
   lVar1 = alloc(this, ( (ulong)param_2 - 1 ) + param_1, param_3);
   return lVar1 + ( ulong )(param_2 - 1) & ~(ulong)(param_2 - 1);
}
/* jpgd::jpeg_decoder::word_clear(void*, unsigned short, unsigned int) */void jpgd::jpeg_decoder::word_clear(jpeg_decoder *this, void *param_1, ushort param_2, uint param_3) {
   ushort *puVar1;
   ushort *puVar2;
   if (param_3 != 0) {
      puVar1 = (ushort*)param_1;
      do {
         puVar2 = puVar1 + 1;
         *puVar1 = param_2;
         puVar1 = puVar2;
      }
 while ( puVar2 != (ushort*)( (long)param_1 + (ulong)param_3 * 2 ) );
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* jpgd::jpeg_decoder::prep_in_buffer() */void jpgd::jpeg_decoder::prep_in_buffer(jpeg_decoder *this) {
   long lVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   int iVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   *(undefined4*)( this + 0x340 ) = 0;
   *(jpeg_decoder**)( this + 0x338 ) = this + 0x388;
   if (this[0x34d1] == (jpeg_decoder)0x0) {
      iVar4 = 0;
      do {
         iVar4 = ( **(code**)( **(long**)( this + 0xe0 ) + 0x10 ) )(*(long**)( this + 0xe0 ), this + 0x388 + iVar4, 0x2000 - iVar4, this + 0x34d1);
         if (iVar4 == -1) {
            /* WARNING: Subroutine does not return */
            stop_decoding(this, 0xffffff1e);
         }

         iVar4 = iVar4 + *(int*)( this + 0x340 );
         *(int*)( this + 0x340 ) = iVar4;
      }
 while ( ( iVar4 < 0x2000 ) && ( this[0x34d1] == (jpeg_decoder)0x0 ) );
      *(int*)( this + 0x34cc ) = *(int*)( this + 0x34cc ) + iVar4;
      uVar3 = _UNK_0010cc78;
      uVar2 = __LC0;
      lVar1 = *(long*)( this + 0x338 );
      puVar5 = (undefined8*)( iVar4 + lVar1 );
      do {
         *puVar5 = uVar2;
         puVar5[1] = uVar3;
         puVar6 = puVar5 + 4;
         puVar5[2] = uVar2;
         puVar5[3] = uVar3;
         puVar5 = puVar6;
      }
 while ( puVar6 != (undefined8*)( iVar4 + lVar1 ) + 0x10 );
   }

   return;
}
/* jpgd::jpeg_decoder::decode_block_dc_first(jpgd::jpeg_decoder*, int, int, int) */void jpgd::jpeg_decoder::decode_block_dc_first(jpeg_decoder *param_1, int param_2, int param_3, int param_4) {
   int iVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   uint uVar7;
   int iVar8;
   long lVar9;
   long lVar10;
   lVar10 = (long)param_2;
   plVar2 = *(long**)( param_1 + lVar10 * 8 + 0x2e0 );
   lVar5 = plVar2[1];
   if (( param_3 < (int)lVar5 ) && ( param_4 < *(int*)( (long)plVar2 + 0xc ) )) {
      lVar6 = plVar2[3];
      lVar3 = *(long*)( param_1 + (long)*(int*)( param_1 + lVar10 * 4 + 0x214 ) * 8 + 0x2a0 );
      lVar4 = *plVar2;
      if (lVar3 != 0) {
         iVar8 = *(int*)( lVar3 + 4 + ( ulong )(*(uint*)( param_1 + 0x244c ) >> 0x18) * 4 );
         lVar9 = (long)iVar8;
         if (iVar8 < 0) {
            iVar8 = 0x17;
            do {
               uVar7 = -((*(uint *)(param_1 + 0x244c) >> ((byte)iVar8 & 0x1f) & 1) + (int)lVar9);
               if (( 0x1ff < uVar7 ) || ( iVar8 < 0 )) goto LAB_00100b05;
               iVar1 = *(int*)( lVar3 + 0x904 + (ulong)uVar7 * 4 );
               lVar9 = (long)iVar1;
               iVar8 = iVar8 + -1;
            }
 while ( iVar1 < 0 );
            get_bits_no_markers(param_1, 0x1f - iVar8);
         }
 else {
            get_bits_no_markers(param_1, ( uint ) * (byte*)( lVar3 + 0x804 + (long)iVar8 ));
         }

         iVar8 = (int)lVar9;
         if (iVar8 == 0) {
            iVar8 = 0;
         }
 else {
            if (0xf < iVar8) goto LAB_00100b05;
            iVar8 = get_bits_no_markers(param_1, iVar8);
            if (iVar8 < *(int*)( s_extend_test + lVar9 * 4 )) {
               iVar8 = iVar8 + *(int*)( s_extend_offset + lVar9 * 4 );
            }

         }

         iVar1 = *(int*)( param_1 + lVar10 * 4 + 0x2468 );
         *(int*)( param_1 + lVar10 * 4 + 0x2468 ) = iVar8 + iVar1;
         *(short*)( (long)( (int)lVar5 * (int)lVar6 * param_4 ) + (long)( param_3 * (int)lVar6 ) + lVar4 ) = (short)( iVar8 + iVar1 << ( ( byte ) * (undefined4*)( param_1 + 0x23c ) & 0x1f ) );
         return;
      }

   }

   LAB_00100b05:/* WARNING: Subroutine does not return */stop_decoding(param_1, 0xffffff1a);
}
/* jpgd::jpeg_decoder::decode_block_dc_refine(jpgd::jpeg_decoder*, int, int, int) */void jpgd::jpeg_decoder::decode_block_dc_refine(jpeg_decoder *param_1, int param_2, int param_3, int param_4) {
   long *plVar1;
   int iVar2;
   ushort *puVar3;
   iVar2 = get_bits_no_markers(param_1, 1);
   if (iVar2 == 0) {
      return;
   }

   plVar1 = *(long**)( param_1 + (long)param_2 * 8 + 0x2e0 );
   if (( param_3 < (int)plVar1[1] ) && ( param_4 < *(int*)( (long)plVar1 + 0xc ) )) {
      puVar3 = (ushort*)( (long)( (int)plVar1[1] * (int)plVar1[3] * param_4 ) + (long)( param_3 * (int)plVar1[3] ) + *plVar1 );
      *puVar3 = *puVar3 | ( ushort )(1 << ( ( byte ) * (undefined4*)( param_1 + 0x23c ) & 0x1f ));
      return;
   }

   /* WARNING: Subroutine does not return */
   stop_decoding(param_1, 0xffffff1a);
}
/* jpgd::jpeg_decoder::decode_block_ac_first(jpgd::jpeg_decoder*, int, int, int) */void jpgd::jpeg_decoder::decode_block_ac_first(jpeg_decoder *param_1, int param_2, int param_3, int param_4) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   uint uVar6;
   int iVar7;
   int iVar8;
   iVar8 = *(int*)( param_1 + 800 );
   if (iVar8 == 0) {
      plVar1 = *(long**)( param_1 + (long)param_2 * 8 + 0x300 );
      lVar4 = plVar1[1];
      if (( (int)lVar4 <= param_3 ) || ( *(int*)( (long)plVar1 + 0xc ) <= param_4 )) {
         LAB_00100d55:/* WARNING: Subroutine does not return */stop_decoding(param_1, 0xffffff1a);
      }

      lVar2 = *plVar1;
      lVar5 = plVar1[3];
      iVar8 = *(int*)( param_1 + 0x234 );
      if (iVar8 <= *(int*)( param_1 + 0x238 )) {
         do {
            if (( 7 < *(uint*)( param_1 + ( (long)param_2 + 0x88 ) * 4 + 4 ) ) || ( lVar3 = *(long*)( param_1 + ( ulong ) * (uint*)( param_1 + ( (long)param_2 + 0x88 ) * 4 + 4 ) * 8 + 0x2a0 ) ),lVar3 == 0) goto LAB_00100d55;
            uVar6 = *(uint*)( lVar3 + 4 + ( ulong )(*(uint*)( param_1 + 0x244c ) >> 0x18) * 4 );
            if ((int)uVar6 < 0) {
               iVar7 = 0x17;
               do {
                  uVar6 = -((*(uint *)(param_1 + 0x244c) >> ((byte)iVar7 & 0x1f) & 1) + uVar6);
                  if (( 0x1ff < uVar6 ) || ( iVar7 < 0 )) goto LAB_00100d55;
                  uVar6 = *(uint*)( lVar3 + 0x904 + (ulong)uVar6 * 4 );
                  iVar7 = iVar7 + -1;
               }
 while ( (int)uVar6 < 0 );
               get_bits_no_markers(param_1, 0x1f - iVar7);
            }
 else {
               get_bits_no_markers(param_1, ( uint ) * (byte*)( lVar3 + 0x804 + (long)(int)uVar6 ));
            }

            iVar7 = (int)uVar6 >> 4;
            uVar6 = uVar6 & 0xf;
            if (uVar6 == 0) {
               if (iVar7 != 0xf) {
                  *(int*)( param_1 + 800 ) = 1 << ( (byte)iVar7 & 0x1f );
                  iVar8 = 1;
                  if (iVar7 != 0) {
                     iVar8 = get_bits_no_markers(param_1, iVar7);
                     iVar8 = iVar8 + *(int*)( param_1 + 800 );
                  }

                  goto LAB_00100bcf;
               }

               iVar8 = iVar8 + 0xf;
               if (0x3f < iVar8) goto LAB_00100d55;
            }
 else {
               iVar8 = iVar8 + iVar7;
               if (0x3f < iVar8) goto LAB_00100d55;
               iVar7 = get_bits_no_markers(param_1, uVar6);
               if (iVar7 < *(int*)( s_extend_test + (long)(int)uVar6 * 4 )) {
                  iVar7 = iVar7 + *(int*)( s_extend_offset + (long)(int)uVar6 * 4 );
               }

               *(short*)( lVar2 + (long)*(int*)( g_ZAG + (long)iVar8 * 4 ) * 2 + (long)( param_3 * (int)lVar5 ) + (long)( (int)lVar4 * (int)lVar5 * param_4 ) ) = (short)( iVar7 << ( ( byte ) * (undefined4*)( param_1 + 0x23c ) & 0x1f ) );
            }

            iVar8 = iVar8 + 1;
            if (*(int*)( param_1 + 0x238 ) < iVar8) {
               return;
            }

         }
 while ( true );
      }

   }
 else {
      LAB_00100bcf:*(int*)( param_1 + 800 ) = iVar8 + -1;
   }

   return;
}
/* jpgd::jpeg_decoder::decode_block_ac_refine(jpgd::jpeg_decoder*, int, int, int) */void jpgd::jpeg_decoder::decode_block_ac_refine(jpeg_decoder *param_1, int param_2, int param_3, int param_4) {
   short *psVar1;
   byte bVar2;
   byte bVar3;
   short sVar4;
   int iVar5;
   int iVar6;
   long *plVar7;
   long lVar8;
   byte *pbVar9;
   short sVar10;
   uint uVar11;
   uint uVar12;
   uint uVar13;
   int iVar14;
   uint uVar15;
   byte *pbVar16;
   uint uVar17;
   int iVar18;
   int iVar19;
   long lVar20;
   bool bVar21;
   uint local_54;
   short local_48;
   uVar11 = 1 << ( ( byte ) * (undefined4*)( param_1 + 0x23c ) & 0x1f );
   uVar12 = -1 << ( ( byte ) * (undefined4*)( param_1 + 0x23c ) & 0x1f );
   plVar7 = *(long**)( param_1 + (long)param_2 * 8 + 0x300 );
   if (( param_3 < (int)plVar7[1] ) && ( param_4 < *(int*)( (long)plVar7 + 0xc ) )) {
      lVar20 = (long)( (int)plVar7[1] * (int)plVar7[3] * param_4 ) + (long)( param_3 * (int)plVar7[3] ) + *plVar7;
      if (*(int*)( param_1 + 0x238 ) < 0x40) {
         iVar14 = *(int*)( param_1 + 800 );
         uVar17 = *(uint*)( param_1 + 0x234 );
         local_48 = (short)uVar12;
         if (iVar14 == 0) {
            if (*(int*)( param_1 + 0x238 ) < (int)uVar17) {
               return;
            }

            do {
               if (( 7 < *(uint*)( param_1 + (long)param_2 * 4 + 0x224 ) ) || ( lVar8 = *(long*)( param_1 + ( ulong ) * (uint*)( param_1 + (long)param_2 * 4 + 0x224 ) * 8 + 0x2a0 ) ),lVar8 == 0) goto LAB_001014d4;
               uVar13 = *(uint*)( lVar8 + 4 + ( ulong )(*(uint*)( param_1 + 0x244c ) >> 0x18) * 4 );
               if ((int)uVar13 < 0) {
                  iVar14 = 0x17;
                  do {
                     uVar13 = -((*(uint *)(param_1 + 0x244c) >> ((byte)iVar14 & 0x1f) & 1) + uVar13);
                     if (( 0x1ff < uVar13 ) || ( iVar14 < 0 )) goto LAB_001014d4;
                     uVar13 = *(uint*)( lVar8 + 0x904 + (ulong)uVar13 * 4 );
                     iVar14 = iVar14 + -1;
                  }
 while ( (int)uVar13 < 0 );
                  get_bits_no_markers(param_1, 0x1f - iVar14);
               }
 else {
                  get_bits_no_markers(param_1, ( uint ) * (byte*)( lVar8 + 0x804 + (long)(int)uVar13 ));
               }

               iVar19 = (int)uVar13 >> 4;
               if (( uVar13 & 0xf ) == 0) {
                  if (iVar19 != 0xf) {
                     *(int*)( param_1 + 800 ) = 1 << ( (byte)iVar19 & 0x1f );
                     iVar14 = 1;
                     if (iVar19 == 0) goto LAB_00101015;
                     iVar14 = get_bits_no_markers(param_1, iVar19);
                     iVar14 = iVar14 + *(int*)( param_1 + 800 );
                     *(int*)( param_1 + 800 ) = iVar14;
                     goto LAB_0010100d;
                  }

                  bVar21 = false;
                  local_54 = 0;
               }
 else {
                  if (( uVar13 & 0xf ) != 1) goto LAB_001014d4;
                  iVar14 = get_bits_no_markers(param_1, 1);
                  if (iVar14 == 0) {
                     bVar21 = true;
                     local_54 = uVar12;
                  }
 else {
                     bVar21 = uVar11 != 0;
                     local_54 = uVar11;
                  }

               }

               LAB_00100f5d:do {
                  uVar13 = uVar17;
                  psVar1 = (short*)( lVar20 + (long)*(int*)( g_ZAG + ( ulong )(uVar13 & 0x3f) * 4 ) * 2 );
                  if (*psVar1 == 0) {
                     iVar19 = iVar19 + -1;
                     if (iVar19 < 0) {
                        iVar14 = *(int*)( param_1 + 0x238 );
                        goto LAB_00100fe4;
                     }

                  }
 else {
                     iVar5 = *(int*)( param_1 + 0x2448 );
                     iVar6 = *(int*)( param_1 + 0x244c );
                     iVar14 = iVar5 + -1;
                     *(int*)( param_1 + 0x2448 ) = iVar14;
                     if (iVar14 < 1) {
                        iVar18 = *(int*)( param_1 + 0x340 );
                        uVar17 = iVar6 << ( (byte)iVar5 & 0x1f );
                        *(uint*)( param_1 + 0x244c ) = uVar17;
                        if (iVar18 < 2) {
                           if (iVar18 == 0) {
                              prep_in_buffer(param_1);
                              iVar18 = *(int*)( param_1 + 0x340 );
                              if (iVar18 != 0) goto LAB_00101330;
                              uVar17 = *(uint*)( param_1 + 0x344 );
                              *(uint*)( param_1 + 0x344 ) = uVar17 ^ 1;
                              uVar17 = ( -(uint)(uVar17 == 0) & 0x2600 ) + 0xd900;
                           }
 else {
                              LAB_00101330:pbVar9 = *(byte**)( param_1 + 0x338 );
                              iVar18 = iVar18 + -1;
                              pbVar16 = pbVar9 + 1;
                              *(byte**)( param_1 + 0x338 ) = pbVar16;
                              bVar2 = *pbVar9;
                              *(int*)( param_1 + 0x340 ) = iVar18;
                              uVar17 = (uint)bVar2;
                              if (uVar17 == 0xff) {
                                 if (iVar18 == 0) {
                                    prep_in_buffer(param_1);
                                    iVar18 = *(int*)( param_1 + 0x340 );
                                    if (iVar18 == 0) {
                                       lVar8 = *(long*)( param_1 + 0x338 );
                                       *(uint*)( param_1 + 0x344 ) = *(uint*)( param_1 + 0x344 ) ^ 1;
                                       *(long*)( param_1 + 0x338 ) = lVar8 + -1;
                                       *(undefined1*)( lVar8 + -1 ) = 0xff;
                                       iVar18 = *(int*)( param_1 + 0x340 ) + 1;
                                       uVar17 = 0xff00;
                                       *(int*)( param_1 + 0x340 ) = iVar18;
                                       goto LAB_0010135c;
                                    }

                                    pbVar16 = *(byte**)( param_1 + 0x338 );
                                 }

                                 LAB_0010139f:iVar18 = iVar18 + -1;
                                 *(byte**)( param_1 + 0x338 ) = pbVar16 + 1;
                                 bVar2 = *pbVar16;
                                 uVar17 = 0xff00;
                                 *(int*)( param_1 + 0x340 ) = iVar18;
                                 if (bVar2 != 0) {
                                    *(byte**)( param_1 + 0x338 ) = pbVar16;
                                    *pbVar16 = bVar2;
                                    lVar8 = *(long*)( param_1 + 0x338 );
                                    *(int*)( param_1 + 0x340 ) = *(int*)( param_1 + 0x340 ) + 1;
                                    *(long*)( param_1 + 0x338 ) = lVar8 + -1;
                                    *(undefined1*)( lVar8 + -1 ) = 0xff;
                                    iVar18 = *(int*)( param_1 + 0x340 ) + 1;
                                    *(int*)( param_1 + 0x340 ) = iVar18;
                                 }

                              }
 else {
                                 uVar17 = uVar17 << 8;
                              }

                              LAB_0010135c:if (iVar18 != 0) goto LAB_00101288;
                           }

                           prep_in_buffer(param_1);
                           iVar18 = *(int*)( param_1 + 0x340 );
                           if (iVar18 == 0) {
                              uVar15 = *(uint*)( param_1 + 0x344 );
                              *(uint*)( param_1 + 0x344 ) = uVar15 ^ 1;
                              uVar15 = ( -(uint)(uVar15 == 0) & 0x26 ) + 0xd9;
                           }
 else {
                              LAB_00101288:pbVar9 = *(byte**)( param_1 + 0x338 );
                              iVar18 = iVar18 + -1;
                              pbVar16 = pbVar9 + 1;
                              *(byte**)( param_1 + 0x338 ) = pbVar16;
                              uVar15 = ( uint ) * pbVar9;
                              *(int*)( param_1 + 0x340 ) = iVar18;
                              if (uVar15 == 0xff) {
                                 if (iVar18 == 0) {
                                    prep_in_buffer(param_1);
                                    iVar18 = *(int*)( param_1 + 0x340 );
                                    if (iVar18 != 0) {
                                       pbVar16 = *(byte**)( param_1 + 0x338 );
                                       goto LAB_001012ba;
                                    }

                                    *(uint*)( param_1 + 0x344 ) = *(uint*)( param_1 + 0x344 ) ^ 1;
                                 }
 else {
                                    LAB_001012ba:*(byte**)( param_1 + 0x338 ) = pbVar16 + 1;
                                    bVar2 = *pbVar16;
                                    *(int*)( param_1 + 0x340 ) = iVar18 + -1;
                                    if (bVar2 == 0) goto LAB_00101240;
                                    *(byte**)( param_1 + 0x338 ) = pbVar16;
                                    *pbVar16 = bVar2;
                                    *(int*)( param_1 + 0x340 ) = *(int*)( param_1 + 0x340 ) + 1;
                                 }

                                 lVar8 = *(long*)( param_1 + 0x338 );
                                 *(long*)( param_1 + 0x338 ) = lVar8 + -1;
                                 *(undefined1*)( lVar8 + -1 ) = 0xff;
                                 *(int*)( param_1 + 0x340 ) = *(int*)( param_1 + 0x340 ) + 1;
                              }

                           }

                           LAB_00101240:iVar14 = *(int*)( param_1 + 0x2448 );
                           uVar17 = *(uint*)( param_1 + 0x244c ) | uVar15 | uVar17;
                        }
 else {
                           pbVar9 = *(byte**)( param_1 + 0x338 );
                           bVar2 = *pbVar9;
                           if (( bVar2 == 0xff ) || ( bVar3 = bVar3 == 0xff )) {
                              pbVar16 = pbVar9 + 1;
                              iVar18 = iVar18 + -1;
                              *(byte**)( param_1 + 0x338 ) = pbVar16;
                              bVar2 = *pbVar9;
                              *(int*)( param_1 + 0x340 ) = iVar18;
                              if (bVar2 == 0xff) goto LAB_0010139f;
                              uVar17 = (uint)bVar2 << 8;
                              goto LAB_00101288;
                           }

                           *(int*)( param_1 + 0x340 ) = iVar18 + -2;
                           *(byte**)( param_1 + 0x338 ) = pbVar9 + 2;
                           uVar17 = (uint)bVar2 << 8 | bVar3 | uVar17;
                        }

                        *(int*)( param_1 + 0x2448 ) = iVar14 + 0x10;
                        *(uint*)( param_1 + 0x244c ) = uVar17 << ( -(char)iVar14 & 0x1fU );
                     }
 else {
                        *(int*)( param_1 + 0x244c ) = iVar6 * 2;
                     }

                     if (( iVar6 < 0 ) && ( sVar4 = *psVar1(uVar11 & (int)sVar4) == 0 )) {
                        sVar10 = local_48;
                        if (-1 < sVar4) {
                           sVar10 = (short)uVar11;
                        }

                        *psVar1 = sVar4 + sVar10;
                        iVar14 = *(int*)( param_1 + 0x238 );
                        uVar17 = uVar13 + 1;
                        if (iVar14 < (int)( uVar13 + 1 )) break;
                        goto LAB_00100f5d;
                     }

                  }

                  iVar14 = *(int*)( param_1 + 0x238 );
                  uVar17 = uVar13 + 1;
               }
 while ( (int)( uVar13 + 1 ) <= iVar14 );
               uVar13 = uVar13 + 1;
               LAB_00100fe4:if (( (int)uVar13 < 0x40 ) && ( bVar21 )) {
                  *(short*)( lVar20 + (long)*(int*)( g_ZAG + (long)(int)uVar13 * 4 ) * 2 ) = (short)local_54;
               }

               uVar17 = uVar13 + 1;
            }
 while ( (int)uVar17 <= iVar14 );
            iVar14 = *(int*)( param_1 + 800 );
         }

         LAB_0010100d:if (0 < iVar14) {
            LAB_00101015:if ((int)uVar17 <= *(int*)( param_1 + 0x238 )) {
               do {
                  while (( ( psVar1 = (short*)( lVar20 + (long)*(int*)( g_ZAG + ( ulong )(uVar17 & 0x3f) * 4 ) * 2 ) * psVar1 != 0 && ( iVar14 = get_bits_no_markers(param_1, 1) != 0 ) ) && ( sVar4 = *psVar1((int)sVar4 & uVar11) == 0 ) )) {
                     sVar10 = local_48;
                     if (-1 < sVar4) {
                        sVar10 = (short)uVar11;
                     }

                     uVar17 = uVar17 + 1;
                     *psVar1 = sVar4 + sVar10;
                     if (*(int*)( param_1 + 0x238 ) < (int)uVar17) goto LAB_00101090;
                  }
;
                  uVar17 = uVar17 + 1;
               }
 while ( (int)uVar17 <= *(int*)( param_1 + 0x238 ) );
               LAB_00101090:iVar14 = *(int*)( param_1 + 800 );
            }

            *(int*)( param_1 + 800 ) = iVar14 + -1;
         }

         return;
      }

   }

   LAB_001014d4:/* WARNING: Subroutine does not return */stop_decoding(param_1, 0xffffff1a);
}
/* jpgd::jpeg_decoder::read_dht_marker() */void jpgd::jpeg_decoder::read_dht_marker(jpeg_decoder *this) {
   undefined8 *puVar1;
   byte bVar2;
   char cVar3;
   byte *pbVar4;
   long *plVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   undefined8 uVar9;
   uint uVar10;
   long lVar11;
   byte *pbVar12;
   uint uVar13;
   undefined1 uVar14;
   uint uVar15;
   char *pcVar16;
   uint uVar17;
   uint uVar18;
   uint7 *puVar19;
   undefined8 *puVar20;
   long in_FS_OFFSET;
   byte bVar21;
   uint local_284;
   char local_268[256];
   undefined1 local_168;
   uint7 uStack_167;
   long lStack_160;
   undefined1 local_158;
   undefined1 local_157[15];
   undefined8 local_148[4];
   undefined8 local_128;
   undefined8 uStack_120;
   undefined8 local_118;
   undefined8 uStack_110;
   undefined8 local_108;
   undefined8 uStack_100;
   undefined8 local_f8;
   undefined8 uStack_f0;
   undefined8 local_e8;
   undefined8 uStack_e0;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   bVar21 = 0;
   uVar15 = *(uint*)( this + 0x244c );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar8 = *(int*)( this + 0x2448 );
   iVar6 = iVar8 + -0x10;
   *(int*)( this + 0x2448 ) = iVar6;
   if (0 < iVar6) {
      *(uint*)( this + 0x244c ) = uVar15 << 0x10;
      goto LAB_0010154a;
   }

   iVar6 = *(int*)( this + 0x340 );
   *(uint*)( this + 0x244c ) = uVar15 << ( (byte)iVar8 & 0x1f );
   if (iVar6 == 0) {
      prep_in_buffer(this);
      iVar6 = *(int*)( this + 0x340 );
      if (iVar6 != 0) goto LAB_00101bca;
      uVar13 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar13 ^ 1;
      uVar13 = ( -(uint)(uVar13 == 0) & 0x2600 ) + 0xd900;
      LAB_00101c64:prep_in_buffer(this);
      iVar6 = *(int*)( this + 0x340 );
      if (iVar6 != 0) {
         pbVar12 = *(byte**)( this + 0x338 );
         goto LAB_00101bef;
      }

      uVar18 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar18 ^ 1;
      uVar18 = ( -(uint)(uVar18 == 0) & 0x26 ) + 0xd9;
   }
 else {
      LAB_00101bca:pbVar4 = *(byte**)( this + 0x338 );
      iVar6 = iVar6 + -1;
      pbVar12 = pbVar4 + 1;
      *(byte**)( this + 0x338 ) = pbVar12;
      bVar2 = *pbVar4;
      *(int*)( this + 0x340 ) = iVar6;
      uVar13 = (uint)bVar2 << 8;
      if (iVar6 == 0) goto LAB_00101c64;
      LAB_00101bef:*(byte**)( this + 0x338 ) = pbVar12 + 1;
      uVar18 = ( uint ) * pbVar12;
      *(int*)( this + 0x340 ) = iVar6 + -1;
   }

   iVar8 = *(int*)( this + 0x2448 );
   iVar6 = iVar8 + 0x10;
   *(int*)( this + 0x2448 ) = iVar6;
   *(uint*)( this + 0x244c ) = ( uVar18 | uVar13 | *(uint*)( this + 0x244c ) & 0xffff0000 ) << ( -(char)iVar8 & 0x1fU );
   LAB_0010154a:if (uVar15 >> 0x10 < 2) {
      LAB_00101ca6:/* WARNING: Subroutine does not return */stop_decoding(this, 0xffffff02);
   }

   local_284 = ( uVar15 >> 0x10 ) - 2;
   if (local_284 == 0) {
      LAB_00101b8f:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   LAB_00101588:uVar15 = *(uint*)( this + 0x244c );
   iVar8 = iVar6 + -8;
   *(int*)( this + 0x2448 ) = iVar8;
   uVar13 = uVar15 << 8;
   if (0 < iVar8) goto LAB_001015ad;
   iVar8 = *(int*)( this + 0x340 );
   *(uint*)( this + 0x244c ) = uVar15 << ( (byte)iVar6 & 0x1f );
   if (iVar8 == 0) {
      prep_in_buffer(this);
      iVar8 = *(int*)( this + 0x340 );
      if (iVar8 != 0) goto LAB_00101a78;
      uVar13 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar13 ^ 1;
      uVar13 = ( -(uint)(uVar13 == 0) & 0x2600 ) + 0xd900;
      LAB_00101b4d:prep_in_buffer(this);
      iVar8 = *(int*)( this + 0x340 );
      if (iVar8 != 0) {
         pbVar12 = *(byte**)( this + 0x338 );
         goto LAB_00101aa3;
      }

      uVar18 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar18 ^ 1;
      uVar18 = ( -(uint)(uVar18 == 0) & 0x26 ) + 0xd9;
   }
 else {
      LAB_00101a78:pbVar4 = *(byte**)( this + 0x338 );
      iVar8 = iVar8 + -1;
      pbVar12 = pbVar4 + 1;
      *(byte**)( this + 0x338 ) = pbVar12;
      bVar2 = *pbVar4;
      *(int*)( this + 0x340 ) = iVar8;
      uVar13 = (uint)bVar2 << 8;
      if (iVar8 == 0) goto LAB_00101b4d;
      LAB_00101aa3:*(byte**)( this + 0x338 ) = pbVar12 + 1;
      uVar18 = ( uint ) * pbVar12;
      *(int*)( this + 0x340 ) = iVar8 + -1;
   }

   uVar13 = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar18 | uVar13 ) << ( -(char)*(int *)(this + 0x2448) & 0x1fU );
   iVar8 = *(int*)( this + 0x2448 ) + 0x10;
   LAB_001015ad:iVar6 = 0;
   puVar19 = &uStack_167;
   do {
      *(int*)( this + 0x2448 ) = iVar8 + -8;
      uVar14 = ( undefined1 )(uVar13 >> 0x18);
      if (iVar8 + -8 < 1) {
         iVar7 = *(int*)( this + 0x340 );
         *(uint*)( this + 0x244c ) = uVar13 << ( (byte)iVar8 & 0x1f );
         if (iVar7 == 0) {
            prep_in_buffer(this);
            iVar7 = *(int*)( this + 0x340 );
            if (iVar7 != 0) goto LAB_00101610;
            uVar18 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar18 ^ 1;
            uVar18 = ( -(uint)(uVar18 == 0) & 0x2600 ) + 0xd900;
            LAB_001017f3:prep_in_buffer(this);
            iVar7 = *(int*)( this + 0x340 );
            if (iVar7 != 0) {
               pbVar12 = *(byte**)( this + 0x338 );
               goto LAB_0010163c;
            }

            uVar17 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar17 ^ 1;
            uVar17 = ( -(uint)(uVar17 == 0) & 0x26 ) + 0xd9;
         }
 else {
            LAB_00101610:pbVar4 = *(byte**)( this + 0x338 );
            iVar7 = iVar7 + -1;
            pbVar12 = pbVar4 + 1;
            *(byte**)( this + 0x338 ) = pbVar12;
            bVar2 = *pbVar4;
            *(int*)( this + 0x340 ) = iVar7;
            uVar18 = (uint)bVar2 << 8;
            if (iVar7 == 0) goto LAB_001017f3;
            LAB_0010163c:*(byte**)( this + 0x338 ) = pbVar12 + 1;
            uVar17 = ( uint ) * pbVar12;
            *(int*)( this + 0x340 ) = iVar7 + -1;
         }

         iVar8 = *(int*)( this + 0x2448 );
         *(undefined1*)puVar19 = uVar14;
         *(int*)( this + 0x2448 ) = iVar8 + 0x10;
         *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar17 | uVar18 ) << ( -(char)iVar8 & 0x1fU );
      }
 else {
         *(undefined1*)puVar19 = uVar14;
         *(uint*)( this + 0x244c ) = uVar13 << 8;
      }

      if ((undefined1*)( (long)puVar19 + 1 ) == local_157) break;
      iVar6 = iVar6 + ( uVar13 >> 0x18 );
      puVar19 = (uint7*)( (long)puVar19 + 1 );
      uVar13 = *(uint*)( this + 0x244c );
      iVar8 = *(int*)( this + 0x2448 );
   }
 while ( true );
   iVar6 = iVar6 + ( uVar13 >> 0x18 );
   if (0xff < iVar6) {
      LAB_001017a7:/* WARNING: Subroutine does not return */stop_decoding(this, 0xffffff00);
   }

   pcVar16 = local_268;
   for (lVar11 = 0x20; lVar11 != 0; lVar11 = lVar11 + -1) {
      for (int i = 0; i < 8; i++) {
         pcVar16[i] = '\0';
      }

      pcVar16 = pcVar16 + ( (ulong)bVar21 * -2 + 1 ) * 8;
   }

   if (0 < iVar6) {
      puVar20 = local_148;
      iVar8 = *(int*)( this + 0x2448 );
      puVar1 = (undefined8*)( (long)iVar6 + (long)puVar20 );
      do {
         uVar13 = *(uint*)( this + 0x244c );
         iVar7 = iVar8 + -8;
         *(int*)( this + 0x2448 ) = iVar7;
         uVar18 = uVar13 >> 0x18;
         if (iVar7 < 1) {
            iVar7 = *(int*)( this + 0x340 );
            *(uint*)( this + 0x244c ) = uVar13 << ( (byte)iVar8 & 0x1f );
            if (iVar7 == 0) {
               prep_in_buffer(this);
               iVar7 = *(int*)( this + 0x340 );
               if (iVar7 != 0) goto LAB_0010172e;
               uVar17 = *(uint*)( this + 0x344 );
               *(uint*)( this + 0x344 ) = uVar17 ^ 1;
               uVar17 = ( -(uint)(uVar17 == 0) & 0x2600 ) + 0xd900;
               LAB_00101853:prep_in_buffer(this);
               iVar7 = *(int*)( this + 0x340 );
               if (iVar7 != 0) {
                  pbVar12 = *(byte**)( this + 0x338 );
                  goto LAB_00101759;
               }

               uVar10 = *(uint*)( this + 0x344 );
               *(uint*)( this + 0x344 ) = uVar10 ^ 1;
               uVar10 = ( -(uint)(uVar10 == 0) & 0x26 ) + 0xd9;
            }
 else {
               LAB_0010172e:pbVar4 = *(byte**)( this + 0x338 );
               iVar7 = iVar7 + -1;
               pbVar12 = pbVar4 + 1;
               *(byte**)( this + 0x338 ) = pbVar12;
               bVar2 = *pbVar4;
               *(int*)( this + 0x340 ) = iVar7;
               uVar17 = (uint)bVar2 << 8;
               if (iVar7 == 0) goto LAB_00101853;
               LAB_00101759:*(byte**)( this + 0x338 ) = pbVar12 + 1;
               uVar10 = ( uint ) * pbVar12;
               *(int*)( this + 0x340 ) = iVar7 + -1;
            }

            iVar7 = *(int*)( this + 0x2448 );
            iVar8 = iVar7 + 0x10;
            *(int*)( this + 0x2448 ) = iVar8;
            *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar10 | uVar17 ) << ( -(char)iVar7 & 0x1fU );
            cVar3 = local_268[(int)uVar18];
         }
 else {
            *(uint*)( this + 0x244c ) = uVar13 << 8;
            cVar3 = local_268[(int)uVar18];
            iVar8 = iVar7;
         }

         if (cVar3 != '\0') goto LAB_001017a7;
         *(char*)puVar20 = (char)( uVar13 >> 0x18 );
         puVar20 = (undefined8*)( (long)puVar20 + 1 );
         local_268[(int)uVar18] = '\x01';
      }
 while ( puVar20 != puVar1 );
   }

   if (local_284 < iVar6 + 0x11U) goto LAB_00101ca6;
   local_284 = local_284 - ( iVar6 + 0x11U );
   uVar15 = ( uVar15 >> 0x18 & 0xf ) + ( uVar15 >> 0x1a & 4 );
   if (7 < uVar15) {
      /* WARNING: Subroutine does not return */
      stop_decoding(this, 0xffffff01);
   }

   lVar11 = (long)(int)uVar15;
   if (*(long*)( this + lVar11 * 8 + 0xf8 ) == 0) {
      uVar9 = alloc(this, 0x11, false);
      *(undefined8*)( this + lVar11 * 8 + 0xf8 ) = uVar9;
   }

   if (*(long*)( this + lVar11 * 8 + 0x138 ) == 0) {
      uVar9 = alloc(this, 0x100, false);
      *(undefined8*)( this + lVar11 * 8 + 0x138 ) = uVar9;
   }

   this[lVar11 + 0xec] = (jpeg_decoder)0x0;
   plVar5 = *(long**)( this + lVar11 * 8 + 0xf8 );
   local_168 = 0;
   *(undefined1*)( plVar5 + 2 ) = local_158;
   *plVar5 = (ulong)uStack_167 << 8;
   plVar5[1] = lStack_160;
   puVar1 = *(undefined8**)( this + lVar11 * 8 + 0x138 );
   *puVar1 = local_148[0];
   for (int i = 0; i < 3; i++) {
      puVar1[( i + 1 )] = local_148[( i + 1 )];
   }

   puVar1[4] = local_128;
   puVar1[5] = uStack_120;
   puVar1[6] = local_118;
   puVar1[7] = uStack_110;
   puVar1[10] = local_f8;
   puVar1[0xb] = uStack_f0;
   puVar1[0xc] = local_e8;
   puVar1[0xd] = uStack_e0;
   puVar1[0xe] = local_d8;
   puVar1[0xf] = uStack_d0;
   puVar1[8] = local_108;
   puVar1[9] = uStack_100;
   puVar1[0x10] = local_c8;
   puVar1[0x11] = uStack_c0;
   puVar1[0x12] = local_b8;
   puVar1[0x13] = uStack_b0;
   puVar1[0x14] = local_a8;
   puVar1[0x15] = uStack_a0;
   puVar1[0x16] = local_98;
   puVar1[0x17] = uStack_90;
   puVar1[0x18] = local_88;
   puVar1[0x19] = uStack_80;
   puVar1[0x1a] = local_78;
   puVar1[0x1b] = uStack_70;
   puVar1[0x1c] = local_68;
   puVar1[0x1d] = uStack_60;
   puVar1[0x1e] = local_58;
   puVar1[0x1f] = uStack_50;
   if (local_284 == 0) goto LAB_00101b8f;
   iVar6 = *(int*)( this + 0x2448 );
   goto LAB_00101588;
}
/* jpgd::jpeg_decoder::read_dqt_marker() */void jpgd::jpeg_decoder::read_dqt_marker(jpeg_decoder *this) {
   byte bVar1;
   byte bVar2;
   byte *pbVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   undefined8 uVar7;
   uint uVar8;
   uint uVar9;
   byte *pbVar10;
   uint uVar11;
   uint uVar12;
   long lVar13;
   ushort uVar14;
   ulong uVar15;
   iVar5 = *(int*)( this + 0x2448 );
   uVar11 = *(uint*)( this + 0x244c );
   iVar4 = iVar5 + -0x10;
   *(int*)( this + 0x2448 ) = iVar4;
   if (0 < iVar4) {
      *(uint*)( this + 0x244c ) = uVar11 << 0x10;
      goto LAB_00101d12;
   }

   iVar4 = *(int*)( this + 0x340 );
   *(uint*)( this + 0x244c ) = uVar11 << ( (byte)iVar5 & 0x1f );
   if (iVar4 == 0) {
      prep_in_buffer(this);
      iVar4 = *(int*)( this + 0x340 );
      if (iVar4 != 0) goto LAB_001021a0;
      uVar9 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar9 ^ 1;
      uVar9 = ( -(uint)(uVar9 == 0) & 0x2600 ) + 0xd900;
      LAB_00102240:prep_in_buffer(this);
      iVar4 = *(int*)( this + 0x340 );
      if (iVar4 != 0) {
         pbVar10 = *(byte**)( this + 0x338 );
         goto LAB_001021c7;
      }

      uVar12 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar12 ^ 1;
      uVar12 = ( -(uint)(uVar12 == 0) & 0x26 ) + 0xd9;
   }
 else {
      LAB_001021a0:pbVar3 = *(byte**)( this + 0x338 );
      iVar4 = iVar4 + -1;
      pbVar10 = pbVar3 + 1;
      *(byte**)( this + 0x338 ) = pbVar10;
      bVar2 = *pbVar3;
      *(int*)( this + 0x340 ) = iVar4;
      uVar9 = (uint)bVar2 << 8;
      if (iVar4 == 0) goto LAB_00102240;
      LAB_001021c7:*(byte**)( this + 0x338 ) = pbVar10 + 1;
      uVar12 = ( uint ) * pbVar10;
      *(int*)( this + 0x340 ) = iVar4 + -1;
   }

   iVar5 = *(int*)( this + 0x2448 );
   iVar4 = iVar5 + 0x10;
   *(int*)( this + 0x2448 ) = iVar4;
   *(uint*)( this + 0x244c ) = ( uVar12 | uVar9 | *(uint*)( this + 0x244c ) & 0xffff0000 ) << ( -(char)iVar5 & 0x1fU );
   LAB_00101d12:if (uVar11 >> 0x10 < 2) {
      /* WARNING: Subroutine does not return */
      stop_decoding(this, 0xffffff03);
   }

   uVar11 = ( uVar11 >> 0x10 ) - 2;
   do {
      if (uVar11 == 0) {
         return;
      }

      uVar9 = *(uint*)( this + 0x244c );
      iVar5 = iVar4 + -8;
      *(int*)( this + 0x2448 ) = iVar5;
      uVar12 = uVar9 >> 0x18;
      if (iVar5 < 1) {
         iVar5 = *(int*)( this + 0x340 );
         *(uint*)( this + 0x244c ) = uVar9 << ( (byte)iVar4 & 0x1f );
         if (iVar5 == 0) {
            prep_in_buffer(this);
            iVar5 = *(int*)( this + 0x340 );
            if (iVar5 != 0) goto LAB_00102082;
            uVar9 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar9 ^ 1;
            uVar9 = ( -(uint)(uVar9 == 0) & 0x2600 ) + 0xd900;
            LAB_0010214c:prep_in_buffer(this);
            iVar5 = *(int*)( this + 0x340 );
            if (iVar5 != 0) {
               pbVar10 = *(byte**)( this + 0x338 );
               goto LAB_001020ad;
            }

            uVar8 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar8 ^ 1;
            uVar8 = ( -(uint)(uVar8 == 0) & 0x26 ) + 0xd9;
         }
 else {
            LAB_00102082:pbVar3 = *(byte**)( this + 0x338 );
            iVar5 = iVar5 + -1;
            pbVar10 = pbVar3 + 1;
            *(byte**)( this + 0x338 ) = pbVar10;
            bVar2 = *pbVar3;
            *(int*)( this + 0x340 ) = iVar5;
            uVar9 = (uint)bVar2 << 8;
            if (iVar5 == 0) goto LAB_0010214c;
            LAB_001020ad:*(byte**)( this + 0x338 ) = pbVar10 + 1;
            uVar8 = ( uint ) * pbVar10;
            *(int*)( this + 0x340 ) = iVar5 + -1;
         }

         iVar4 = *(int*)( this + 0x2448 );
         iVar5 = iVar4 + 0x10;
         *(int*)( this + 0x2448 ) = iVar5;
         *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar8 | uVar9 ) << ( -(char)iVar4 & 0x1fU );
      }
 else {
         *(uint*)( this + 0x244c ) = uVar9 << 8;
      }

      uVar15 = ( ulong )(uVar12 & 0xf);
      if (( uVar12 & 0xc ) != 0) {
         /* WARNING: Subroutine does not return */
         stop_decoding(this, 0xffffff04);
      }

      if (*(long*)( this + uVar15 * 8 + 0x178 ) == 0) {
         uVar7 = alloc(this, 0x80, false);
         *(undefined8*)( this + ( uVar15 + 0x2e ) * 8 + 8 ) = uVar7;
         iVar5 = *(int*)( this + 0x2448 );
      }

      lVar13 = 0;
      do {
         iVar4 = *(int*)( this + 0x244c );
         iVar6 = iVar5 + -8;
         *(int*)( this + 0x2448 ) = iVar6;
         bVar2 = ( byte )((uint)iVar4 >> 0x18);
         uVar14 = (ushort)bVar2;
         if (iVar6 < 1) {
            iVar6 = *(int*)( this + 0x340 );
            *(int*)( this + 0x244c ) = iVar4 << ( (byte)iVar5 & 0x1f );
            if (iVar6 == 0) {
               prep_in_buffer(this);
               iVar6 = *(int*)( this + 0x340 );
               if (iVar6 != 0) goto LAB_00101e1e;
               uVar9 = *(uint*)( this + 0x344 );
               *(uint*)( this + 0x344 ) = uVar9 ^ 1;
               uVar9 = ( -(uint)(uVar9 == 0) & 0x2600 ) + 0xd900;
               LAB_00101f58:prep_in_buffer(this);
               iVar6 = *(int*)( this + 0x340 );
               if (iVar6 != 0) {
                  pbVar10 = *(byte**)( this + 0x338 );
                  goto LAB_00101e49;
               }

               uVar8 = *(uint*)( this + 0x344 );
               *(uint*)( this + 0x344 ) = uVar8 ^ 1;
               uVar8 = ( -(uint)(uVar8 == 0) & 0x26 ) + 0xd9;
            }
 else {
               LAB_00101e1e:pbVar3 = *(byte**)( this + 0x338 );
               iVar6 = iVar6 + -1;
               pbVar10 = pbVar3 + 1;
               *(byte**)( this + 0x338 ) = pbVar10;
               bVar1 = *pbVar3;
               *(int*)( this + 0x340 ) = iVar6;
               uVar9 = (uint)bVar1 << 8;
               if (iVar6 == 0) goto LAB_00101f58;
               LAB_00101e49:*(byte**)( this + 0x338 ) = pbVar10 + 1;
               uVar8 = ( uint ) * pbVar10;
               *(int*)( this + 0x340 ) = iVar6 + -1;
            }

            iVar4 = *(int*)( this + 0x2448 );
            iVar5 = iVar4 + 0x10;
            *(int*)( this + 0x2448 ) = iVar5;
            *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar8 | uVar9 ) << ( -(char)iVar4 & 0x1fU );
         }
 else {
            *(int*)( this + 0x244c ) = iVar4 << 8;
            iVar5 = iVar6;
         }

         if ((int)uVar12 >> 4 != 0) {
            iVar4 = *(int*)( this + 0x244c );
            iVar6 = iVar5 + -8;
            *(int*)( this + 0x2448 ) = iVar6;
            if (iVar6 < 1) {
               iVar6 = *(int*)( this + 0x340 );
               *(int*)( this + 0x244c ) = iVar4 << ( (byte)iVar5 & 0x1f );
               if (iVar6 == 0) {
                  prep_in_buffer(this);
                  iVar6 = *(int*)( this + 0x340 );
                  if (iVar6 != 0) goto LAB_00101ea6;
                  uVar9 = *(uint*)( this + 0x344 );
                  *(uint*)( this + 0x344 ) = uVar9 ^ 1;
                  uVar9 = ( -(uint)(uVar9 == 0) & 0x2600 ) + 0xd900;
                  LAB_00101fe3:prep_in_buffer(this);
                  iVar6 = *(int*)( this + 0x340 );
                  if (iVar6 != 0) {
                     pbVar10 = *(byte**)( this + 0x338 );
                     goto LAB_00101ed1;
                  }

                  uVar8 = *(uint*)( this + 0x344 );
                  *(uint*)( this + 0x344 ) = uVar8 ^ 1;
                  uVar8 = ( -(uint)(uVar8 == 0) & 0x26 ) + 0xd9;
               }
 else {
                  LAB_00101ea6:pbVar3 = *(byte**)( this + 0x338 );
                  iVar6 = iVar6 + -1;
                  pbVar10 = pbVar3 + 1;
                  *(byte**)( this + 0x338 ) = pbVar10;
                  bVar1 = *pbVar3;
                  *(int*)( this + 0x340 ) = iVar6;
                  uVar9 = (uint)bVar1 << 8;
                  if (iVar6 == 0) goto LAB_00101fe3;
                  LAB_00101ed1:*(byte**)( this + 0x338 ) = pbVar10 + 1;
                  uVar8 = ( uint ) * pbVar10;
                  *(int*)( this + 0x340 ) = iVar6 + -1;
               }

               iVar6 = *(int*)( this + 0x2448 );
               iVar5 = iVar6 + 0x10;
               *(int*)( this + 0x2448 ) = iVar5;
               *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar8 | uVar9 ) << ( -(char)iVar6 & 0x1fU );
            }
 else {
               *(int*)( this + 0x244c ) = iVar4 << 8;
               iVar5 = iVar6;
            }

            uVar14 = (ushort)bVar2 * 0x100 + ( ushort )(byte)((uint)iVar4 >> 0x18);
         }

         *(ushort*)( *(long*)( this + ( uVar15 + 0x2e ) * 8 + 8 ) + lVar13 ) = uVar14;
         lVar13 = lVar13 + 2;
      }
 while ( lVar13 != 0x80 );
      uVar9 = ( -(uint)((int)uVar12 >> 4 == 0) & 0xffffffc0 ) + 0x81;
      if (uVar11 < uVar9) {
         /* WARNING: Subroutine does not return */
         stop_decoding(this, 0xffffff13);
      }

      uVar11 = uVar11 - uVar9;
      iVar4 = iVar5;
   }
 while ( true );
}
/* jpgd::jpeg_decoder::read_sof_marker() */void jpgd::jpeg_decoder::read_sof_marker(jpeg_decoder *this) {
   byte bVar1;
   byte *pbVar2;
   uint uVar3;
   uint uVar4;
   int iVar5;
   uint uVar6;
   byte *pbVar7;
   uint uVar8;
   long lVar9;
   int iVar10;
   uint uVar11;
   uVar4 = *(uint*)( this + 0x244c );
   iVar10 = *(int*)( this + 0x2448 );
   iVar5 = iVar10 + -0x10;
   *(int*)( this + 0x2448 ) = iVar5;
   uVar3 = uVar4 << 0x10;
   if (iVar5 < 1) {
      iVar5 = *(int*)( this + 0x340 );
      *(uint*)( this + 0x244c ) = uVar4 << ( (byte)iVar10 & 0x1f );
      if (iVar5 == 0) {
         prep_in_buffer(this);
         iVar5 = *(int*)( this + 0x340 );
         if (iVar5 != 0) goto LAB_00102931;
         uVar3 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar3 ^ 1;
         uVar3 = ( -(uint)(uVar3 == 0) & 0x2600 ) + 0xd900;
         LAB_00102d34:prep_in_buffer(this);
         iVar5 = *(int*)( this + 0x340 );
         if (iVar5 != 0) {
            pbVar7 = *(byte**)( this + 0x338 );
            goto LAB_0010295a;
         }

         uVar8 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar8 ^ 1;
         uVar8 = ( -(uint)(uVar8 == 0) & 0x26 ) + 0xd9;
      }
 else {
         LAB_00102931:pbVar2 = *(byte**)( this + 0x338 );
         iVar5 = iVar5 + -1;
         pbVar7 = pbVar2 + 1;
         *(byte**)( this + 0x338 ) = pbVar7;
         bVar1 = *pbVar2;
         *(int*)( this + 0x340 ) = iVar5;
         uVar3 = (uint)bVar1 << 8;
         if (iVar5 == 0) goto LAB_00102d34;
         LAB_0010295a:*(byte**)( this + 0x338 ) = pbVar7 + 1;
         uVar8 = ( uint ) * pbVar7;
         *(int*)( this + 0x340 ) = iVar5 + -1;
      }

      iVar5 = *(int*)( this + 0x2448 ) + 0x10;
      uVar3 = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar8 | uVar3 ) << ( -(char)*(int *)(this + 0x2448) & 0x1fU );
   }

   *(int*)( this + 0x2448 ) = iVar5 + -8;
   if (iVar5 + -8 < 1) {
      *(uint*)( this + 0x244c ) = uVar3 << ( (byte)iVar5 & 0x1f );
      iVar10 = *(int*)( this + 0x340 );
      if (iVar10 == 0) {
         prep_in_buffer(this);
         iVar10 = *(int*)( this + 0x340 );
         if (iVar10 != 0) goto LAB_00102b38;
         uVar8 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar8 ^ 1;
         uVar8 = ( -(uint)(uVar8 == 0) & 0x2600 ) + 0xd900;
         LAB_00102bdb:prep_in_buffer(this);
         iVar10 = *(int*)( this + 0x340 );
         if (iVar10 != 0) {
            pbVar7 = *(byte**)( this + 0x338 );
            goto LAB_00102b5f;
         }

         uVar11 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar11 ^ 1;
         uVar11 = ( -(uint)(uVar11 == 0) & 0x26 ) + 0xd9;
      }
 else {
         LAB_00102b38:pbVar2 = *(byte**)( this + 0x338 );
         iVar10 = iVar10 + -1;
         pbVar7 = pbVar2 + 1;
         *(byte**)( this + 0x338 ) = pbVar7;
         bVar1 = *pbVar2;
         *(int*)( this + 0x340 ) = iVar10;
         uVar8 = (uint)bVar1 << 8;
         if (iVar10 == 0) goto LAB_00102bdb;
         LAB_00102b5f:*(byte**)( this + 0x338 ) = pbVar7 + 1;
         uVar11 = ( uint ) * pbVar7;
         *(int*)( this + 0x340 ) = iVar10 + -1;
      }

      iVar10 = *(int*)( this + 0x2448 );
      *(int*)( this + 0x2448 ) = iVar10 + 0x10;
      *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar11 | uVar8 ) << ( -(char)iVar10 & 0x1fU );
   }
 else {
      *(uint*)( this + 0x244c ) = uVar3 << 8;
   }

   if (uVar3 >> 0x18 != 8) {
      /* WARNING: Subroutine does not return */
      stop_decoding(this, 0xffffff05);
   }

   iVar10 = *(int*)( this + 0x2448 );
   uVar3 = *(uint*)( this + 0x244c );
   iVar5 = iVar10 + -0x10;
   *(int*)( this + 0x2448 ) = iVar5;
   if (iVar5 < 1) {
      *(uint*)( this + 0x244c ) = uVar3 << ( (byte)iVar10 & 0x1f );
      iVar10 = *(int*)( this + 0x340 );
      if (iVar10 == 0) {
         prep_in_buffer(this);
         iVar10 = *(int*)( this + 0x340 );
         if (iVar10 != 0) goto LAB_00102ab4;
         uVar8 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar8 ^ 1;
         uVar8 = ( -(uint)(uVar8 == 0) & 0x2600 ) + 0xd900;
         LAB_00102c50:prep_in_buffer(this);
         iVar10 = *(int*)( this + 0x340 );
         if (iVar10 != 0) {
            pbVar7 = *(byte**)( this + 0x338 );
            goto LAB_00102adf;
         }

         uVar11 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar11 ^ 1;
         uVar11 = ( -(uint)(uVar11 == 0) & 0x26 ) + 0xd9;
      }
 else {
         LAB_00102ab4:pbVar2 = *(byte**)( this + 0x338 );
         iVar10 = iVar10 + -1;
         pbVar7 = pbVar2 + 1;
         *(byte**)( this + 0x338 ) = pbVar7;
         bVar1 = *pbVar2;
         *(int*)( this + 0x340 ) = iVar10;
         uVar8 = (uint)bVar1 << 8;
         if (iVar10 == 0) goto LAB_00102c50;
         LAB_00102adf:*(byte**)( this + 0x338 ) = pbVar7 + 1;
         uVar11 = ( uint ) * pbVar7;
         *(int*)( this + 0x340 ) = iVar10 + -1;
      }

      iVar10 = *(int*)( this + 0x2448 );
      iVar5 = iVar10 + 0x10;
      *(int*)( this + 0x2448 ) = iVar5;
      *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar11 | uVar8 ) << ( -(char)iVar10 & 0x1fU );
   }
 else {
      *(uint*)( this + 0x244c ) = uVar3 << 0x10;
   }

   *(uint*)( this + 0xdc ) = uVar3 >> 0x10;
   if (0x7fff < ( uVar3 >> 0x10 ) - 1) {
      /* WARNING: Subroutine does not return */
      stop_decoding(this, 0xffffff06);
   }

   uVar3 = *(uint*)( this + 0x244c );
   iVar10 = iVar5 + -0x10;
   *(int*)( this + 0x2448 ) = iVar10;
   if (iVar10 < 1) {
      *(uint*)( this + 0x244c ) = uVar3 << ( (byte)iVar5 & 0x1f );
      iVar10 = *(int*)( this + 0x340 );
      if (iVar10 == 0) {
         prep_in_buffer(this);
         iVar10 = *(int*)( this + 0x340 );
         if (iVar10 != 0) goto LAB_00102a2e;
         uVar8 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar8 ^ 1;
         uVar8 = ( -(uint)(uVar8 == 0) & 0x2600 ) + 0xd900;
         LAB_00102cc5:prep_in_buffer(this);
         iVar10 = *(int*)( this + 0x340 );
         if (iVar10 != 0) {
            pbVar7 = *(byte**)( this + 0x338 );
            goto LAB_00102a59;
         }

         uVar11 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar11 ^ 1;
         uVar11 = ( -(uint)(uVar11 == 0) & 0x26 ) + 0xd9;
      }
 else {
         LAB_00102a2e:pbVar2 = *(byte**)( this + 0x338 );
         iVar10 = iVar10 + -1;
         pbVar7 = pbVar2 + 1;
         *(byte**)( this + 0x338 ) = pbVar7;
         bVar1 = *pbVar2;
         *(int*)( this + 0x340 ) = iVar10;
         uVar8 = (uint)bVar1 << 8;
         if (iVar10 == 0) goto LAB_00102cc5;
         LAB_00102a59:*(byte**)( this + 0x338 ) = pbVar7 + 1;
         uVar11 = ( uint ) * pbVar7;
         *(int*)( this + 0x340 ) = iVar10 + -1;
      }

      iVar5 = *(int*)( this + 0x2448 );
      iVar10 = iVar5 + 0x10;
      *(int*)( this + 0x2448 ) = iVar10;
      *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar11 | uVar8 ) << ( -(char)iVar5 & 0x1fU );
   }
 else {
      *(uint*)( this + 0x244c ) = uVar3 << 0x10;
   }

   *(uint*)( this + 0xd8 ) = uVar3 >> 0x10;
   if (0x7fff < ( uVar3 >> 0x10 ) - 1) {
      /* WARNING: Subroutine does not return */
      stop_decoding(this, 0xffffff07);
   }

   uVar3 = *(uint*)( this + 0x244c );
   iVar5 = iVar10 + -8;
   *(int*)( this + 0x2448 ) = iVar5;
   uVar8 = uVar3 >> 0x18;
   if (0 < iVar5) {
      *(uint*)( this + 0x244c ) = uVar3 << 8;
      goto LAB_001023b5;
   }

   *(uint*)( this + 0x244c ) = uVar3 << ( (byte)iVar10 & 0x1f );
   iVar10 = *(int*)( this + 0x340 );
   if (iVar10 == 0) {
      prep_in_buffer(this);
      iVar10 = *(int*)( this + 0x340 );
      if (iVar10 != 0) goto LAB_001029a8;
      uVar11 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar11 ^ 1;
      uVar11 = ( -(uint)(uVar11 == 0) & 0x2600 ) + 0xd900;
      LAB_00102da9:prep_in_buffer(this);
      iVar10 = *(int*)( this + 0x340 );
      if (iVar10 != 0) {
         pbVar7 = *(byte**)( this + 0x338 );
         goto LAB_001029d3;
      }

      uVar6 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar6 ^ 1;
      uVar6 = ( -(uint)(uVar6 == 0) & 0x26 ) + 0xd9;
   }
 else {
      LAB_001029a8:pbVar2 = *(byte**)( this + 0x338 );
      iVar10 = iVar10 + -1;
      pbVar7 = pbVar2 + 1;
      *(byte**)( this + 0x338 ) = pbVar7;
      bVar1 = *pbVar2;
      *(int*)( this + 0x340 ) = iVar10;
      uVar11 = (uint)bVar1 << 8;
      if (iVar10 == 0) goto LAB_00102da9;
      LAB_001029d3:*(byte**)( this + 0x338 ) = pbVar7 + 1;
      uVar6 = ( uint ) * pbVar7;
      *(int*)( this + 0x340 ) = iVar10 + -1;
   }

   iVar10 = *(int*)( this + 0x2448 );
   iVar5 = iVar10 + 0x10;
   *(int*)( this + 0x2448 ) = iVar5;
   *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar6 | uVar11 ) << ( -(char)iVar10 & 0x1fU );
   LAB_001023b5:*(uint*)( this + 0x19c ) = uVar8;
   if (4 < uVar8) {
      /* WARNING: Subroutine does not return */
      stop_decoding(this, 0xffffff08);
   }

   if (uVar8 * 3 + 8 != uVar4 >> 0x10) {
      /* WARNING: Subroutine does not return */
      stop_decoding(this, 0xffffff09);
   }

   if (uVar3 >> 0x18 == 0) {
      return;
   }

   lVar9 = 0;
   do {
      uVar4 = *(uint*)( this + 0x244c );
      iVar10 = iVar5 + -8;
      *(int*)( this + 0x2448 ) = iVar10;
      uVar3 = uVar4 << 8;
      if (iVar10 < 1) {
         *(uint*)( this + 0x244c ) = uVar4 << ( (byte)iVar5 & 0x1f );
         iVar10 = *(int*)( this + 0x340 );
         if (iVar10 == 0) {
            prep_in_buffer(this);
            iVar10 = *(int*)( this + 0x340 );
            if (iVar10 != 0) goto LAB_00102568;
            uVar3 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar3 ^ 1;
            uVar3 = ( -(uint)(uVar3 == 0) & 0x2600 ) + 0xd900;
            LAB_001027eb:prep_in_buffer(this);
            iVar10 = *(int*)( this + 0x340 );
            if (iVar10 != 0) {
               pbVar7 = *(byte**)( this + 0x338 );
               goto LAB_00102593;
            }

            uVar8 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar8 ^ 1;
            uVar8 = ( -(uint)(uVar8 == 0) & 0x26 ) + 0xd9;
         }
 else {
            LAB_00102568:pbVar2 = *(byte**)( this + 0x338 );
            iVar10 = iVar10 + -1;
            pbVar7 = pbVar2 + 1;
            *(byte**)( this + 0x338 ) = pbVar7;
            bVar1 = *pbVar2;
            *(int*)( this + 0x340 ) = iVar10;
            uVar3 = (uint)bVar1 << 8;
            if (iVar10 == 0) goto LAB_001027eb;
            LAB_00102593:*(byte**)( this + 0x338 ) = pbVar7 + 1;
            uVar8 = ( uint ) * pbVar7;
            *(int*)( this + 0x340 ) = iVar10 + -1;
         }

         uVar3 = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar8 | uVar3 ) << ( -(char)*(int *)(this + 0x2448) & 0x1fU );
         iVar10 = *(int*)( this + 0x2448 ) + 0x10;
      }

      *(uint*)( this + lVar9 * 4 + 0x1d0 ) = uVar4 >> 0x18;
      iVar5 = iVar10 + -4;
      *(int*)( this + 0x2448 ) = iVar5;
      uVar4 = uVar3 << 4;
      if (iVar5 < 1) {
         iVar5 = *(int*)( this + 0x340 );
         *(uint*)( this + 0x244c ) = uVar3 << ( (byte)iVar10 & 0x1f );
         if (iVar5 == 0) {
            prep_in_buffer(this);
            iVar5 = *(int*)( this + 0x340 );
            if (iVar5 != 0) goto LAB_001024ec;
            uVar4 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar4 ^ 1;
            uVar4 = ( -(uint)(uVar4 == 0) & 0x2600 ) + 0xd900;
            LAB_0010278b:prep_in_buffer(this);
            iVar5 = *(int*)( this + 0x340 );
            if (iVar5 != 0) {
               pbVar7 = *(byte**)( this + 0x338 );
               goto LAB_00102517;
            }

            uVar8 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar8 ^ 1;
            uVar8 = ( -(uint)(uVar8 == 0) & 0x26 ) + 0xd9;
         }
 else {
            LAB_001024ec:pbVar2 = *(byte**)( this + 0x338 );
            iVar5 = iVar5 + -1;
            pbVar7 = pbVar2 + 1;
            *(byte**)( this + 0x338 ) = pbVar7;
            bVar1 = *pbVar2;
            *(int*)( this + 0x340 ) = iVar5;
            uVar4 = (uint)bVar1 << 8;
            if (iVar5 == 0) goto LAB_0010278b;
            LAB_00102517:*(byte**)( this + 0x338 ) = pbVar7 + 1;
            uVar8 = ( uint ) * pbVar7;
            *(int*)( this + 0x340 ) = iVar5 + -1;
         }

         iVar5 = *(int*)( this + 0x2448 ) + 0x10;
         uVar4 = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar8 | uVar4 ) << ( -(char)*(int *)(this + 0x2448) & 0x1fU );
      }

      *(uint*)( this + lVar9 * 4 + 0x1a0 ) = uVar3 >> 0x1c;
      *(int*)( this + 0x2448 ) = iVar5 + -4;
      if (iVar5 + -4 < 1) {
         *(uint*)( this + 0x244c ) = uVar4 << ( (byte)iVar5 & 0x1f );
         iVar10 = *(int*)( this + 0x340 );
         if (iVar10 == 0) {
            prep_in_buffer(this);
            iVar10 = *(int*)( this + 0x340 );
            if (iVar10 != 0) goto LAB_001025e8;
            uVar3 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar3 ^ 1;
            uVar3 = ( -(uint)(uVar3 == 0) & 0x2600 ) + 0xd900;
            LAB_0010272b:prep_in_buffer(this);
            iVar10 = *(int*)( this + 0x340 );
            if (iVar10 != 0) {
               pbVar7 = *(byte**)( this + 0x338 );
               goto LAB_00102613;
            }

            uVar8 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar8 ^ 1;
            uVar8 = ( -(uint)(uVar8 == 0) & 0x26 ) + 0xd9;
         }
 else {
            LAB_001025e8:pbVar2 = *(byte**)( this + 0x338 );
            iVar10 = iVar10 + -1;
            pbVar7 = pbVar2 + 1;
            *(byte**)( this + 0x338 ) = pbVar7;
            bVar1 = *pbVar2;
            *(int*)( this + 0x340 ) = iVar10;
            uVar3 = (uint)bVar1 << 8;
            if (iVar10 == 0) goto LAB_0010272b;
            LAB_00102613:*(byte**)( this + 0x338 ) = pbVar7 + 1;
            uVar8 = ( uint ) * pbVar7;
            *(int*)( this + 0x340 ) = iVar10 + -1;
         }

         iVar10 = *(int*)( this + 0x2448 );
         *(int*)( this + 0x2448 ) = iVar10 + 0x10;
         *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar8 | uVar3 ) << ( -(char)iVar10 & 0x1fU );
      }
 else {
         *(uint*)( this + 0x244c ) = uVar4 << 4;
      }

      *(uint*)( this + lVar9 * 4 + 0x1b0 ) = uVar4 >> 0x1c;
      if (( *(int*)( this + lVar9 * 4 + 0x1a0 ) == 0 || 2 < *(int*)( this + lVar9 * 4 + 0x1a0 ) ) || ( 1 < ( uVar4 >> 0x1c ) - 1 )) {
         /* WARNING: Subroutine does not return */
         stop_decoding(this, 0xffffff19);
      }

      iVar10 = *(int*)( this + 0x2448 );
      uVar4 = *(uint*)( this + 0x244c );
      iVar5 = iVar10 + -8;
      *(int*)( this + 0x2448 ) = iVar5;
      if (iVar5 < 1) {
         *(uint*)( this + 0x244c ) = uVar4 << ( (byte)iVar10 & 0x1f );
         iVar10 = *(int*)( this + 0x340 );
         if (iVar10 == 0) {
            prep_in_buffer(this);
            iVar10 = *(int*)( this + 0x340 );
            if (iVar10 != 0) goto LAB_00102676;
            uVar3 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar3 ^ 1;
            uVar3 = ( -(uint)(uVar3 == 0) & 0x2600 ) + 0xd900;
            LAB_0010284b:prep_in_buffer(this);
            iVar10 = *(int*)( this + 0x340 );
            if (iVar10 != 0) {
               pbVar7 = *(byte**)( this + 0x338 );
               goto LAB_001026a1;
            }

            uVar8 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar8 ^ 1;
            uVar8 = ( -(uint)(uVar8 == 0) & 0x26 ) + 0xd9;
         }
 else {
            LAB_00102676:pbVar2 = *(byte**)( this + 0x338 );
            iVar10 = iVar10 + -1;
            pbVar7 = pbVar2 + 1;
            *(byte**)( this + 0x338 ) = pbVar7;
            bVar1 = *pbVar2;
            *(int*)( this + 0x340 ) = iVar10;
            uVar3 = (uint)bVar1 << 8;
            if (iVar10 == 0) goto LAB_0010284b;
            LAB_001026a1:*(byte**)( this + 0x338 ) = pbVar7 + 1;
            uVar8 = ( uint ) * pbVar7;
            *(int*)( this + 0x340 ) = iVar10 + -1;
         }

         iVar10 = *(int*)( this + 0x2448 );
         *(int*)( this + 0x2448 ) = iVar10 + 0x10;
         *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar8 | uVar3 ) << ( -(char)iVar10 & 0x1fU );
      }
 else {
         *(uint*)( this + 0x244c ) = uVar4 << 8;
      }

      *(uint*)( this + lVar9 * 4 + 0x1c0 ) = uVar4 >> 0x18;
      if (3 < uVar4 >> 0x18) {
         /* WARNING: Subroutine does not return */
         stop_decoding(this, 0xffffff1a);
      }

      lVar9 = lVar9 + 1;
      if (*(int*)( this + 0x19c ) <= (int)lVar9) {
         return;
      }

      iVar5 = *(int*)( this + 0x2448 );
   }
 while ( true );
}
/* jpgd::jpeg_decoder::skip_variable_marker() */void jpgd::jpeg_decoder::skip_variable_marker(jpeg_decoder *this) {
   byte bVar1;
   byte *pbVar2;
   int iVar3;
   int iVar4;
   uint uVar5;
   uint uVar6;
   byte *pbVar7;
   int iVar8;
   uint uVar9;
   iVar8 = *(int*)( this + 0x2448 );
   uVar9 = *(uint*)( this + 0x244c );
   iVar3 = iVar8 + -0x10;
   *(int*)( this + 0x2448 ) = iVar3;
   if (0 < iVar3) {
      *(uint*)( this + 0x244c ) = uVar9 << 0x10;
      goto LAB_00102eb8;
   }

   iVar3 = *(int*)( this + 0x340 );
   *(uint*)( this + 0x244c ) = uVar9 << ( (byte)iVar8 & 0x1f );
   if (iVar3 == 0) {
      prep_in_buffer(this);
      iVar3 = *(int*)( this + 0x340 );
      if (iVar3 != 0) goto LAB_00103022;
      uVar5 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar5 ^ 1;
      uVar5 = ( -(uint)(uVar5 == 0) & 0x2600 ) + 0xd900;
      LAB_001030c2:prep_in_buffer(this);
      iVar3 = *(int*)( this + 0x340 );
      if (iVar3 != 0) {
         pbVar7 = *(byte**)( this + 0x338 );
         goto LAB_00103049;
      }

      uVar6 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar6 ^ 1;
      uVar6 = ( -(uint)(uVar6 == 0) & 0x26 ) + 0xd9;
   }
 else {
      LAB_00103022:pbVar2 = *(byte**)( this + 0x338 );
      iVar3 = iVar3 + -1;
      pbVar7 = pbVar2 + 1;
      *(byte**)( this + 0x338 ) = pbVar7;
      bVar1 = *pbVar2;
      *(int*)( this + 0x340 ) = iVar3;
      uVar5 = (uint)bVar1 << 8;
      if (iVar3 == 0) goto LAB_001030c2;
      LAB_00103049:*(byte**)( this + 0x338 ) = pbVar7 + 1;
      uVar6 = ( uint ) * pbVar7;
      *(int*)( this + 0x340 ) = iVar3 + -1;
   }

   iVar8 = *(int*)( this + 0x2448 );
   iVar3 = iVar8 + 0x10;
   *(int*)( this + 0x2448 ) = iVar3;
   *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar6 | uVar5 ) << ( -(char)iVar8 & 0x1fU );
   LAB_00102eb8:if (uVar9 >> 0x10 < 2) {
      /* WARNING: Subroutine does not return */
      stop_decoding(this, 0xffffff0a);
   }

   iVar8 = ( uVar9 >> 0x10 ) - 2;
   do {
      if (iVar8 == 0) {
         return;
      }

      while (true) {
         iVar4 = iVar3 + -8;
         *(int*)( this + 0x2448 ) = iVar4;
         if (0 < iVar4) break;
         iVar4 = *(int*)( this + 0x340 );
         *(int*)( this + 0x244c ) = *(int*)( this + 0x244c ) << ( (byte)iVar3 & 0x1f );
         if (iVar4 == 0) {
            prep_in_buffer(this);
            iVar4 = *(int*)( this + 0x340 );
            if (iVar4 != 0) goto LAB_00102f09;
            uVar9 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar9 ^ 1;
            uVar9 = ( -(uint)(uVar9 == 0) & 0x2600 ) + 0xd900;
            LAB_00102fc3:prep_in_buffer(this);
            iVar4 = *(int*)( this + 0x340 );
            if (iVar4 != 0) {
               pbVar7 = *(byte**)( this + 0x338 );
               goto LAB_00102f34;
            }

            uVar5 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar5 ^ 1;
            uVar5 = ( -(uint)(uVar5 == 0) & 0x26 ) + 0xd9;
         }
 else {
            LAB_00102f09:pbVar2 = *(byte**)( this + 0x338 );
            iVar4 = iVar4 + -1;
            pbVar7 = pbVar2 + 1;
            *(byte**)( this + 0x338 ) = pbVar7;
            bVar1 = *pbVar2;
            *(int*)( this + 0x340 ) = iVar4;
            uVar9 = (uint)bVar1 << 8;
            if (iVar4 == 0) goto LAB_00102fc3;
            LAB_00102f34:*(byte**)( this + 0x338 ) = pbVar7 + 1;
            uVar5 = ( uint ) * pbVar7;
            *(int*)( this + 0x340 ) = iVar4 + -1;
         }

         iVar4 = *(int*)( this + 0x2448 );
         iVar3 = iVar4 + 0x10;
         *(int*)( this + 0x2448 ) = iVar3;
         *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar5 | uVar9 ) << ( -(char)iVar4 & 0x1fU );
         iVar8 = iVar8 + -1;
         if (iVar8 == 0) {
            return;
         }

      }
;
      *(int*)( this + 0x244c ) = *(int*)( this + 0x244c ) << 8;
      iVar8 = iVar8 + -1;
      iVar3 = iVar4;
   }
 while ( true );
}
/* jpgd::jpeg_decoder::read_dri_marker() */void jpgd::jpeg_decoder::read_dri_marker(jpeg_decoder *this) {
   byte bVar1;
   uint uVar2;
   byte *pbVar3;
   int iVar4;
   int iVar5;
   uint uVar6;
   byte *pbVar7;
   uint uVar8;
   iVar5 = *(int*)( this + 0x2448 );
   uVar2 = *(uint*)( this + 0x244c );
   iVar4 = iVar5 + -0x10;
   *(int*)( this + 0x2448 ) = iVar4;
   if (iVar4 < 1) {
      iVar4 = *(int*)( this + 0x340 );
      *(uint*)( this + 0x244c ) = uVar2 << ( (byte)iVar5 & 0x1f );
      if (iVar4 == 0) {
         prep_in_buffer(this);
         iVar4 = *(int*)( this + 0x340 );
         if (iVar4 != 0) goto LAB_001031a6;
         uVar8 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar8 ^ 1;
         uVar8 = ( -(uint)(uVar8 == 0) & 0x2600 ) + 0xd900;
         LAB_001032e8:prep_in_buffer(this);
         iVar4 = *(int*)( this + 0x340 );
         if (iVar4 != 0) {
            pbVar7 = *(byte**)( this + 0x338 );
            goto LAB_001031d1;
         }

         uVar6 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar6 ^ 1;
         uVar6 = ( -(uint)(uVar6 == 0) & 0x26 ) + 0xd9;
      }
 else {
         LAB_001031a6:pbVar3 = *(byte**)( this + 0x338 );
         iVar4 = iVar4 + -1;
         pbVar7 = pbVar3 + 1;
         *(byte**)( this + 0x338 ) = pbVar7;
         bVar1 = *pbVar3;
         *(int*)( this + 0x340 ) = iVar4;
         uVar8 = (uint)bVar1 << 8;
         if (iVar4 == 0) goto LAB_001032e8;
         LAB_001031d1:*(byte**)( this + 0x338 ) = pbVar7 + 1;
         uVar6 = ( uint ) * pbVar7;
         *(int*)( this + 0x340 ) = iVar4 + -1;
      }

      iVar5 = *(int*)( this + 0x2448 );
      iVar4 = iVar5 + 0x10;
      *(int*)( this + 0x2448 ) = iVar4;
      *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar6 | uVar8 ) << ( -(char)iVar5 & 0x1fU );
   }
 else {
      *(uint*)( this + 0x244c ) = uVar2 << 0x10;
   }

   if (uVar2 >> 0x10 != 4) {
      /* WARNING: Subroutine does not return */
      stop_decoding(this, 0xffffff0b);
   }

   uVar2 = *(uint*)( this + 0x244c );
   *(int*)( this + 0x2448 ) = iVar4 + -0x10;
   if (0 < iVar4 + -0x10) {
      *(uint*)( this + 0x2450 ) = uVar2 >> 0x10;
      *(uint*)( this + 0x244c ) = uVar2 << 0x10;
      return;
   }

   iVar5 = *(int*)( this + 0x340 );
   *(uint*)( this + 0x244c ) = uVar2 << ( (byte)iVar4 & 0x1f );
   if (iVar5 == 0) {
      prep_in_buffer(this);
      iVar5 = *(int*)( this + 0x340 );
      if (iVar5 != 0) goto LAB_00103238;
      uVar8 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar8 ^ 1;
      uVar8 = ( -(uint)(uVar8 == 0) & 0x2600 ) + 0xd900;
      LAB_00103363:prep_in_buffer(this);
      iVar5 = *(int*)( this + 0x340 );
      if (iVar5 == 0) {
         uVar6 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar6 ^ 1;
         uVar6 = ( -(uint)(uVar6 == 0) & 0x26 ) + 0xd9;
         goto LAB_0010327a;
      }

      pbVar7 = *(byte**)( this + 0x338 );
   }
 else {
      LAB_00103238:pbVar3 = *(byte**)( this + 0x338 );
      iVar5 = iVar5 + -1;
      pbVar7 = pbVar3 + 1;
      *(byte**)( this + 0x338 ) = pbVar7;
      bVar1 = *pbVar3;
      *(int*)( this + 0x340 ) = iVar5;
      uVar8 = (uint)bVar1 << 8;
      if (iVar5 == 0) goto LAB_00103363;
   }

   *(byte**)( this + 0x338 ) = pbVar7 + 1;
   uVar6 = ( uint ) * pbVar7;
   *(int*)( this + 0x340 ) = iVar5 + -1;
   LAB_0010327a:iVar5 = *(int*)( this + 0x2448 );
   *(uint*)( this + 0x2450 ) = uVar2 >> 0x10;
   *(int*)( this + 0x2448 ) = iVar5 + 0x10;
   *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar6 | uVar8 ) << ( -(char)iVar5 & 0x1fU );
   return;
}
/* jpgd::jpeg_decoder::read_sos_marker() */void jpgd::jpeg_decoder::read_sos_marker(jpeg_decoder *this) {
   byte bVar1;
   byte *pbVar2;
   uint uVar3;
   long lVar4;
   uint uVar5;
   int iVar6;
   uint uVar7;
   byte *pbVar8;
   long lVar9;
   int iVar10;
   int iVar11;
   uint uVar12;
   uint uVar13;
   uVar7 = *(uint*)( this + 0x244c );
   iVar10 = *(int*)( this + 0x2448 );
   iVar6 = iVar10 + -0x10;
   *(int*)( this + 0x2448 ) = iVar6;
   uVar3 = uVar7 << 0x10;
   if (iVar6 < 1) {
      iVar6 = *(int*)( this + 0x340 );
      *(uint*)( this + 0x244c ) = uVar7 << ( (byte)iVar10 & 0x1f );
      if (iVar6 == 0) {
         prep_in_buffer(this);
         iVar6 = *(int*)( this + 0x340 );
         if (iVar6 != 0) goto LAB_00103972;
         uVar3 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar3 ^ 1;
         uVar3 = ( -(uint)(uVar3 == 0) & 0x2600 ) + 0xd900;
         LAB_00103ec1:prep_in_buffer(this);
         iVar6 = *(int*)( this + 0x340 );
         if (iVar6 != 0) {
            pbVar8 = *(byte**)( this + 0x338 );
            goto LAB_0010399b;
         }

         uVar12 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar12 ^ 1;
         uVar12 = ( -(uint)(uVar12 == 0) & 0x26 ) + 0xd9;
      }
 else {
         LAB_00103972:pbVar2 = *(byte**)( this + 0x338 );
         iVar6 = iVar6 + -1;
         pbVar8 = pbVar2 + 1;
         *(byte**)( this + 0x338 ) = pbVar8;
         bVar1 = *pbVar2;
         *(int*)( this + 0x340 ) = iVar6;
         uVar3 = (uint)bVar1 << 8;
         if (iVar6 == 0) goto LAB_00103ec1;
         LAB_0010399b:*(byte**)( this + 0x338 ) = pbVar8 + 1;
         uVar12 = ( uint ) * pbVar8;
         *(int*)( this + 0x340 ) = iVar6 + -1;
      }

      iVar6 = *(int*)( this + 0x2448 ) + 0x10;
      uVar3 = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar12 | uVar3 ) << ( -(char)*(int *)(this + 0x2448) & 0x1fU );
   }

   *(int*)( this + 0x2448 ) = iVar6 + -8;
   uVar12 = uVar3 >> 0x18;
   if (iVar6 + -8 < 1) {
      *(uint*)( this + 0x244c ) = uVar3 << ( (byte)iVar6 & 0x1f );
      iVar10 = *(int*)( this + 0x340 );
      if (iVar10 == 0) {
         prep_in_buffer(this);
         iVar10 = *(int*)( this + 0x340 );
         if (iVar10 != 0) goto LAB_001039eb;
         uVar3 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar3 ^ 1;
         uVar3 = ( -(uint)(uVar3 == 0) & 0x2600 ) + 0xd900;
         LAB_00103e52:prep_in_buffer(this);
         iVar10 = *(int*)( this + 0x340 );
         if (iVar10 != 0) {
            pbVar8 = *(byte**)( this + 0x338 );
            goto LAB_00103a14;
         }

         uVar13 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar13 ^ 1;
         uVar13 = ( -(uint)(uVar13 == 0) & 0x26 ) + 0xd9;
      }
 else {
         LAB_001039eb:pbVar2 = *(byte**)( this + 0x338 );
         iVar10 = iVar10 + -1;
         pbVar8 = pbVar2 + 1;
         *(byte**)( this + 0x338 ) = pbVar8;
         bVar1 = *pbVar2;
         *(int*)( this + 0x340 ) = iVar10;
         uVar3 = (uint)bVar1 << 8;
         if (iVar10 == 0) goto LAB_00103e52;
         LAB_00103a14:*(byte**)( this + 0x338 ) = pbVar8 + 1;
         uVar13 = ( uint ) * pbVar8;
         *(int*)( this + 0x340 ) = iVar10 + -1;
      }

      iVar10 = *(int*)( this + 0x2448 );
      *(int*)( this + 0x2448 ) = iVar10 + 0x10;
      *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar13 | uVar3 ) << ( -(char)iVar10 & 0x1fU );
   }
 else {
      *(uint*)( this + 0x244c ) = uVar3 << 8;
   }

   iVar10 = ( uVar7 >> 0x10 ) - 3;
   *(uint*)( this + 0x200 ) = uVar12;
   if (( uVar12 * 2 + 3 != iVar10 ) || ( 3 < uVar12 - 1 )) {
      /* WARNING: Subroutine does not return */
      stop_decoding(this, 0xffffff0c);
   }

   lVar9 = 0;
   do {
      iVar11 = iVar10;
      uVar7 = *(uint*)( this + 0x244c );
      iVar10 = *(int*)( this + 0x2448 );
      iVar6 = iVar10 + -8;
      *(int*)( this + 0x2448 ) = iVar6;
      uVar3 = uVar7 << 8;
      if (iVar6 < 1) {
         iVar6 = *(int*)( this + 0x340 );
         *(uint*)( this + 0x244c ) = uVar7 << ( (byte)iVar10 & 0x1f );
         if (iVar6 == 0) {
            prep_in_buffer(this);
            iVar6 = *(int*)( this + 0x340 );
            if (iVar6 != 0) goto LAB_001035ee;
            uVar3 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar3 ^ 1;
            uVar3 = ( -(uint)(uVar3 == 0) & 0x2600 ) + 0xd900;
            LAB_001036ef:prep_in_buffer(this);
            iVar6 = *(int*)( this + 0x340 );
            if (iVar6 != 0) {
               pbVar8 = *(byte**)( this + 0x338 );
               goto LAB_00103619;
            }

            uVar13 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar13 ^ 1;
            uVar13 = ( -(uint)(uVar13 == 0) & 0x26 ) + 0xd9;
         }
 else {
            LAB_001035ee:pbVar2 = *(byte**)( this + 0x338 );
            iVar6 = iVar6 + -1;
            pbVar8 = pbVar2 + 1;
            *(byte**)( this + 0x338 ) = pbVar8;
            bVar1 = *pbVar2;
            *(int*)( this + 0x340 ) = iVar6;
            uVar3 = (uint)bVar1 << 8;
            if (iVar6 == 0) goto LAB_001036ef;
            LAB_00103619:*(byte**)( this + 0x338 ) = pbVar8 + 1;
            uVar13 = ( uint ) * pbVar8;
            *(int*)( this + 0x340 ) = iVar6 + -1;
         }

         iVar6 = *(int*)( this + 0x2448 ) + 0x10;
         uVar3 = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar13 | uVar3 ) << ( -(char)*(int *)(this + 0x2448) & 0x1fU );
      }

      *(int*)( this + 0x2448 ) = iVar6 + -8;
      uVar13 = uVar3 >> 0x18;
      if (iVar6 + -8 < 1) {
         *(uint*)( this + 0x244c ) = uVar3 << ( (byte)iVar6 & 0x1f );
         iVar10 = *(int*)( this + 0x340 );
         if (iVar10 == 0) {
            prep_in_buffer(this);
            iVar10 = *(int*)( this + 0x340 );
            if (iVar10 != 0) goto LAB_00103548;
            uVar3 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar3 ^ 1;
            uVar3 = ( -(uint)(uVar3 == 0) & 0x2600 ) + 0xd900;
            LAB_0010368a:prep_in_buffer(this);
            iVar10 = *(int*)( this + 0x340 );
            if (iVar10 != 0) {
               pbVar8 = *(byte**)( this + 0x338 );
               goto LAB_00103571;
            }

            uVar5 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar5 ^ 1;
            uVar5 = ( -(uint)(uVar5 == 0) & 0x26 ) + 0xd9;
         }
 else {
            LAB_00103548:pbVar2 = *(byte**)( this + 0x338 );
            iVar10 = iVar10 + -1;
            pbVar8 = pbVar2 + 1;
            *(byte**)( this + 0x338 ) = pbVar8;
            bVar1 = *pbVar2;
            *(int*)( this + 0x340 ) = iVar10;
            uVar3 = (uint)bVar1 << 8;
            if (iVar10 == 0) goto LAB_0010368a;
            LAB_00103571:*(byte**)( this + 0x338 ) = pbVar8 + 1;
            uVar5 = ( uint ) * pbVar8;
            *(int*)( this + 0x340 ) = iVar10 + -1;
         }

         iVar10 = *(int*)( this + 0x2448 );
         *(int*)( this + 0x2448 ) = iVar10 + 0x10;
         iVar6 = *(int*)( this + 0x19c );
         *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar5 | uVar3 ) << ( -(char)iVar10 & 0x1fU );
      }
 else {
         iVar6 = *(int*)( this + 0x19c );
         *(uint*)( this + 0x244c ) = uVar3 << 8;
      }

      if (iVar6 < 1) {
         LAB_001035c8:/* WARNING: Subroutine does not return */stop_decoding(this, 0xffffff0d);
      }

      lVar4 = 0;
      while (*(uint*)( this + lVar4 * 4 + 0x1d0 ) != uVar7 >> 0x18) {
         lVar4 = lVar4 + 1;
         if (iVar6 == lVar4) goto LAB_001035c8;
      }
;
      iVar10 = (int)lVar4;
      *(int*)( this + lVar9 * 4 + 0x204 ) = iVar10;
      *(int*)( this + (long)iVar10 * 4 + 0x214 ) = (int)uVar13 >> 4;
      uVar7 = ( uVar13 & 0xf ) + 4;
      *(uint*)( this + (long)iVar10 * 4 + 0x224 ) = uVar7;
      if (( ( uVar13 & 0x80 ) != 0 ) || ( 7 < uVar7 )) {
         /* WARNING: Subroutine does not return */
         stop_decoding(this, 0xffffff1a);
      }

      lVar9 = lVar9 + 1;
      iVar10 = iVar11 + -2;
   }
 while ( (int)lVar9 < (int)uVar12 );
   uVar7 = *(uint*)( this + 0x244c );
   iVar6 = *(int*)( this + 0x2448 );
   iVar10 = iVar6 + -8;
   *(int*)( this + 0x2448 ) = iVar10;
   uVar3 = uVar7 << 8;
   if (iVar10 < 1) {
      iVar10 = *(int*)( this + 0x340 );
      *(uint*)( this + 0x244c ) = uVar7 << ( (byte)iVar6 & 0x1f );
      if (iVar10 == 0) {
         prep_in_buffer(this);
         iVar10 = *(int*)( this + 0x340 );
         if (iVar10 != 0) goto LAB_00103bea;
         uVar3 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar3 ^ 1;
         uVar3 = ( -(uint)(uVar3 == 0) & 0x2600 ) + 0xd900;
         LAB_00103c81:prep_in_buffer(this);
         iVar10 = *(int*)( this + 0x340 );
         if (iVar10 != 0) {
            pbVar8 = *(byte**)( this + 0x338 );
            goto LAB_00103c11;
         }

         uVar12 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar12 ^ 1;
         uVar12 = ( -(uint)(uVar12 == 0) & 0x26 ) + 0xd9;
      }
 else {
         LAB_00103bea:pbVar2 = *(byte**)( this + 0x338 );
         iVar10 = iVar10 + -1;
         pbVar8 = pbVar2 + 1;
         *(byte**)( this + 0x338 ) = pbVar8;
         bVar1 = *pbVar2;
         *(int*)( this + 0x340 ) = iVar10;
         uVar3 = (uint)bVar1 << 8;
         if (iVar10 == 0) goto LAB_00103c81;
         LAB_00103c11:*(byte**)( this + 0x338 ) = pbVar8 + 1;
         uVar12 = ( uint ) * pbVar8;
         *(int*)( this + 0x340 ) = iVar10 + -1;
      }

      iVar10 = *(int*)( this + 0x2448 ) + 0x10;
      uVar3 = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar12 | uVar3 ) << ( -(char)*(int *)(this + 0x2448) & 0x1fU );
   }

   *(uint*)( this + 0x234 ) = uVar7 >> 0x18;
   iVar6 = iVar10 + -8;
   *(int*)( this + 0x2448 ) = iVar6;
   uVar7 = uVar3 << 8;
   if (iVar6 < 1) {
      *(uint*)( this + 0x244c ) = uVar3 << ( (byte)iVar10 & 0x1f );
      iVar10 = *(int*)( this + 0x340 );
      if (iVar10 == 0) {
         prep_in_buffer(this);
         iVar10 = *(int*)( this + 0x340 );
         if (iVar10 != 0) goto LAB_00103b74;
         uVar7 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar7 ^ 1;
         uVar7 = ( -(uint)(uVar7 == 0) & 0x2600 ) + 0xd900;
         LAB_00103cf6:prep_in_buffer(this);
         iVar10 = *(int*)( this + 0x340 );
         if (iVar10 != 0) {
            pbVar8 = *(byte**)( this + 0x338 );
            goto LAB_00103b9f;
         }

         uVar12 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar12 ^ 1;
         uVar12 = ( -(uint)(uVar12 == 0) & 0x26 ) + 0xd9;
      }
 else {
         LAB_00103b74:pbVar2 = *(byte**)( this + 0x338 );
         iVar10 = iVar10 + -1;
         pbVar8 = pbVar2 + 1;
         *(byte**)( this + 0x338 ) = pbVar8;
         bVar1 = *pbVar2;
         *(int*)( this + 0x340 ) = iVar10;
         uVar7 = (uint)bVar1 << 8;
         if (iVar10 == 0) goto LAB_00103cf6;
         LAB_00103b9f:*(byte**)( this + 0x338 ) = pbVar8 + 1;
         uVar12 = ( uint ) * pbVar8;
         *(int*)( this + 0x340 ) = iVar10 + -1;
      }

      iVar6 = *(int*)( this + 0x2448 ) + 0x10;
      uVar7 = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar12 | uVar7 ) << ( -(char)*(int *)(this + 0x2448) & 0x1fU );
   }

   *(uint*)( this + 0x238 ) = uVar3 >> 0x18;
   iVar10 = iVar6 + -4;
   *(int*)( this + 0x2448 ) = iVar10;
   uVar3 = uVar7 << 4;
   if (iVar10 < 1) {
      iVar10 = *(int*)( this + 0x340 );
      *(uint*)( this + 0x244c ) = uVar7 << ( (byte)iVar6 & 0x1f );
      if (iVar10 == 0) {
         prep_in_buffer(this);
         iVar10 = *(int*)( this + 0x340 );
         if (iVar10 != 0) goto LAB_00103af8;
         uVar3 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar3 ^ 1;
         uVar3 = ( -(uint)(uVar3 == 0) & 0x2600 ) + 0xd900;
         LAB_00103d6b:prep_in_buffer(this);
         iVar10 = *(int*)( this + 0x340 );
         if (iVar10 != 0) {
            pbVar8 = *(byte**)( this + 0x338 );
            goto LAB_00103b23;
         }

         uVar12 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar12 ^ 1;
         uVar12 = ( -(uint)(uVar12 == 0) & 0x26 ) + 0xd9;
      }
 else {
         LAB_00103af8:pbVar2 = *(byte**)( this + 0x338 );
         iVar10 = iVar10 + -1;
         pbVar8 = pbVar2 + 1;
         *(byte**)( this + 0x338 ) = pbVar8;
         bVar1 = *pbVar2;
         *(int*)( this + 0x340 ) = iVar10;
         uVar3 = (uint)bVar1 << 8;
         if (iVar10 == 0) goto LAB_00103d6b;
         LAB_00103b23:*(byte**)( this + 0x338 ) = pbVar8 + 1;
         uVar12 = ( uint ) * pbVar8;
         *(int*)( this + 0x340 ) = iVar10 + -1;
      }

      iVar10 = *(int*)( this + 0x2448 ) + 0x10;
      uVar3 = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar12 | uVar3 ) << ( -(char)*(int *)(this + 0x2448) & 0x1fU );
   }

   *(uint*)( this + 0x240 ) = uVar7 >> 0x1c;
   *(int*)( this + 0x2448 ) = iVar10 + -4;
   if (0 < iVar10 + -4) {
      *(uint*)( this + 0x244c ) = uVar3 << 4;
      goto LAB_001037e3;
   }

   *(uint*)( this + 0x244c ) = uVar3 << ( (byte)iVar10 & 0x1f );
   iVar10 = *(int*)( this + 0x340 );
   if (iVar10 == 0) {
      prep_in_buffer(this);
      iVar10 = *(int*)( this + 0x340 );
      if (iVar10 != 0) goto LAB_00103a70;
      uVar7 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar7 ^ 1;
      uVar7 = ( -(uint)(uVar7 == 0) & 0x2600 ) + 0xd900;
      LAB_00103de0:prep_in_buffer(this);
      iVar10 = *(int*)( this + 0x340 );
      if (iVar10 != 0) {
         pbVar8 = *(byte**)( this + 0x338 );
         goto LAB_00103a9b;
      }

      uVar12 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar12 ^ 1;
      uVar12 = ( -(uint)(uVar12 == 0) & 0x26 ) + 0xd9;
   }
 else {
      LAB_00103a70:pbVar2 = *(byte**)( this + 0x338 );
      iVar10 = iVar10 + -1;
      pbVar8 = pbVar2 + 1;
      *(byte**)( this + 0x338 ) = pbVar8;
      bVar1 = *pbVar2;
      *(int*)( this + 0x340 ) = iVar10;
      uVar7 = (uint)bVar1 << 8;
      if (iVar10 == 0) goto LAB_00103de0;
      LAB_00103a9b:*(byte**)( this + 0x338 ) = pbVar8 + 1;
      uVar12 = ( uint ) * pbVar8;
      *(int*)( this + 0x340 ) = iVar10 + -1;
   }

   iVar10 = *(int*)( this + 0x2448 );
   *(int*)( this + 0x2448 ) = iVar10 + 0x10;
   *(uint*)( this + 0x244c ) = ( uVar12 | uVar7 | *(uint*)( this + 0x244c ) & 0xffff0000 ) << ( -(char)iVar10 & 0x1fU );
   LAB_001037e3:*(uint*)( this + 0x23c ) = uVar3 >> 0x1c;
   if (*(int*)( this + 0xe8 ) == 0) {
      *(undefined8*)( this + 0x234 ) = _LC1;
   }

   iVar11 = iVar11 + -5;
   if (iVar11 != 0) {
      iVar10 = *(int*)( this + 0x2448 );
      do {
         while (true) {
            iVar6 = iVar10 + -8;
            *(int*)( this + 0x2448 ) = iVar6;
            if (0 < iVar6) break;
            iVar6 = *(int*)( this + 0x340 );
            *(int*)( this + 0x244c ) = *(int*)( this + 0x244c ) << ( (byte)iVar10 & 0x1f );
            if (iVar6 == 0) {
               prep_in_buffer(this);
               iVar6 = *(int*)( this + 0x340 );
               if (iVar6 != 0) goto LAB_0010384e;
               uVar7 = *(uint*)( this + 0x344 );
               *(uint*)( this + 0x344 ) = uVar7 ^ 1;
               uVar7 = ( -(uint)(uVar7 == 0) & 0x2600 ) + 0xd900;
               LAB_00103907:prep_in_buffer(this);
               iVar6 = *(int*)( this + 0x340 );
               if (iVar6 != 0) {
                  pbVar8 = *(byte**)( this + 0x338 );
                  goto LAB_00103877;
               }

               uVar3 = *(uint*)( this + 0x344 );
               *(uint*)( this + 0x344 ) = uVar3 ^ 1;
               uVar3 = ( -(uint)(uVar3 == 0) & 0x26 ) + 0xd9;
            }
 else {
               LAB_0010384e:pbVar2 = *(byte**)( this + 0x338 );
               iVar6 = iVar6 + -1;
               pbVar8 = pbVar2 + 1;
               *(byte**)( this + 0x338 ) = pbVar8;
               bVar1 = *pbVar2;
               *(int*)( this + 0x340 ) = iVar6;
               uVar7 = (uint)bVar1 << 8;
               if (iVar6 == 0) goto LAB_00103907;
               LAB_00103877:*(byte**)( this + 0x338 ) = pbVar8 + 1;
               uVar3 = ( uint ) * pbVar8;
               *(int*)( this + 0x340 ) = iVar6 + -1;
            }

            iVar6 = *(int*)( this + 0x2448 );
            iVar10 = iVar6 + 0x10;
            *(int*)( this + 0x2448 ) = iVar10;
            *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar3 | uVar7 ) << ( -(char)iVar6 & 0x1fU );
            iVar11 = iVar11 + -1;
            if (iVar11 == 0) {
               return;
            }

         }
;
         *(int*)( this + 0x244c ) = *(int*)( this + 0x244c ) << 8;
         iVar11 = iVar11 + -1;
         iVar10 = iVar6;
      }
 while ( iVar11 != 0 );
   }

   return;
}
/* jpgd::jpeg_decoder::next_marker() */uint jpgd::jpeg_decoder::next_marker(jpeg_decoder *this) {
   byte bVar1;
   byte *pbVar2;
   uint uVar3;
   int iVar4;
   uint uVar5;
   int iVar6;
   byte *pbVar7;
   uint uVar8;
   LAB_00103f70:uVar3 = *(uint*)( this + 0x244c );
   iVar4 = *(int*)( this + 0x2448 );
   do {
      iVar6 = iVar4 + -8;
      *(int*)( this + 0x2448 ) = iVar6;
      uVar8 = uVar3 >> 0x18;
      if (iVar6 < 1) {
         *(uint*)( this + 0x244c ) = uVar3 << ( (byte)iVar4 & 0x1f );
         iVar4 = *(int*)( this + 0x340 );
         if (iVar4 == 0) {
            prep_in_buffer(this);
            iVar4 = *(int*)( this + 0x340 );
            if (iVar4 != 0) goto LAB_001040f6;
            uVar3 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar3 ^ 1;
            uVar3 = ( -(uint)(uVar3 == 0) & 0x2600 ) + 0xd900;
            LAB_001041d3:prep_in_buffer(this);
            iVar4 = *(int*)( this + 0x340 );
            if (iVar4 != 0) {
               pbVar7 = *(byte**)( this + 0x338 );
               goto LAB_00104121;
            }

            uVar5 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar5 ^ 1;
            uVar5 = ( -(uint)(uVar5 == 0) & 0x26 ) + 0xd9;
         }
 else {
            LAB_001040f6:pbVar2 = *(byte**)( this + 0x338 );
            iVar4 = iVar4 + -1;
            pbVar7 = pbVar2 + 1;
            *(byte**)( this + 0x338 ) = pbVar7;
            bVar1 = *pbVar2;
            *(int*)( this + 0x340 ) = iVar4;
            uVar3 = (uint)bVar1 << 8;
            if (iVar4 == 0) goto LAB_001041d3;
            LAB_00104121:*(byte**)( this + 0x338 ) = pbVar7 + 1;
            uVar5 = ( uint ) * pbVar7;
            *(int*)( this + 0x340 ) = iVar4 + -1;
         }

         uVar3 = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar5 | uVar3 ) << ( -(char)*(int *)(this + 0x2448) & 0x1fU );
         iVar6 = *(int*)( this + 0x2448 ) + 0x10;
         *(uint*)( this + 0x244c ) = uVar3;
         *(int*)( this + 0x2448 ) = iVar6;
      }
 else {
         uVar3 = uVar3 << 8;
         *(uint*)( this + 0x244c ) = uVar3;
      }

      iVar4 = iVar6;
   }
 while ( uVar8 != 0xff );
   do {
      *(int*)( this + 0x2448 ) = iVar6 + -8;
      uVar8 = uVar3 >> 0x18;
      if (iVar6 + -8 < 1) {
         *(uint*)( this + 0x244c ) = uVar3 << ( (byte)iVar6 & 0x1f );
         iVar4 = *(int*)( this + 0x340 );
         if (iVar4 == 0) {
            prep_in_buffer(this);
            iVar4 = *(int*)( this + 0x340 );
            if (iVar4 != 0) goto LAB_00103ff9;
            uVar3 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar3 ^ 1;
            uVar3 = ( -(uint)(uVar3 == 0) & 0x2600 ) + 0xd900;
            LAB_001040bb:prep_in_buffer(this);
            iVar4 = *(int*)( this + 0x340 );
            if (iVar4 != 0) {
               pbVar7 = *(byte**)( this + 0x338 );
               goto LAB_00104024;
            }

            uVar5 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar5 ^ 1;
            uVar5 = ( -(uint)(uVar5 == 0) & 0x26 ) + 0xd9;
         }
 else {
            LAB_00103ff9:pbVar2 = *(byte**)( this + 0x338 );
            iVar4 = iVar4 + -1;
            pbVar7 = pbVar2 + 1;
            *(byte**)( this + 0x338 ) = pbVar7;
            bVar1 = *pbVar2;
            *(int*)( this + 0x340 ) = iVar4;
            uVar3 = (uint)bVar1 << 8;
            if (iVar4 == 0) goto LAB_001040bb;
            LAB_00104024:*(byte**)( this + 0x338 ) = pbVar7 + 1;
            uVar5 = ( uint ) * pbVar7;
            *(int*)( this + 0x340 ) = iVar4 + -1;
         }

         iVar4 = *(int*)( this + 0x2448 );
         *(int*)( this + 0x2448 ) = iVar4 + 0x10;
         *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar5 | uVar3 ) << ( -(char)iVar4 & 0x1fU );
      }
 else {
         *(uint*)( this + 0x244c ) = uVar3 << 8;
      }

      if (uVar8 != 0xff) break;
      uVar3 = *(uint*)( this + 0x244c );
      iVar6 = *(int*)( this + 0x2448 );
   }
 while ( true );
   if (uVar8 != 0) {
      return uVar8;
   }

   goto LAB_00103f70;
}
/* jpgd::jpeg_decoder::process_markers() */uint jpgd::jpeg_decoder::process_markers(jpeg_decoder *this) {
   byte bVar1;
   byte *pbVar2;
   uint uVar3;
   int iVar4;
   ulong uVar5;
   byte *pbVar6;
   uint uVar7;
   uint uVar8;
   int iVar9;
   int iVar10;
   uint uVar11;
   LAB_00104238:uVar3 = *(uint*)( this + 0x244c );
   iVar4 = *(int*)( this + 0x2448 );
   LAB_00104244:do {
      iVar9 = iVar4 + -8;
      *(int*)( this + 0x2448 ) = iVar9;
      uVar11 = uVar3 >> 0x18;
      if (iVar9 < 1) {
         iVar9 = *(int*)( this + 0x340 );
         *(uint*)( this + 0x244c ) = uVar3 << ( (byte)iVar4 & 0x1f );
         if (iVar9 == 0) {
            prep_in_buffer(this);
            iVar9 = *(int*)( this + 0x340 );
            if (iVar9 != 0) goto LAB_00104416;
            uVar3 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar3 ^ 1;
            uVar3 = ( -(uint)(uVar3 == 0) & 0x2600 ) + 0xd900;
            LAB_001044f3:prep_in_buffer(this);
            iVar9 = *(int*)( this + 0x340 );
            if (iVar9 != 0) {
               pbVar6 = *(byte**)( this + 0x338 );
               goto LAB_00104441;
            }

            uVar8 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar8 ^ 1;
            uVar8 = ( -(uint)(uVar8 == 0) & 0x26 ) + 0xd9;
         }
 else {
            LAB_00104416:pbVar2 = *(byte**)( this + 0x338 );
            iVar9 = iVar9 + -1;
            pbVar6 = pbVar2 + 1;
            *(byte**)( this + 0x338 ) = pbVar6;
            bVar1 = *pbVar2;
            *(int*)( this + 0x340 ) = iVar9;
            uVar3 = (uint)bVar1 << 8;
            if (iVar9 == 0) goto LAB_001044f3;
            LAB_00104441:*(byte**)( this + 0x338 ) = pbVar6 + 1;
            uVar8 = ( uint ) * pbVar6;
            *(int*)( this + 0x340 ) = iVar9 + -1;
         }

         uVar3 = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar8 | uVar3 ) << ( -(char)*(int *)(this + 0x2448) & 0x1fU );
         iVar9 = *(int*)( this + 0x2448 ) + 0x10;
         *(uint*)( this + 0x244c ) = uVar3;
         *(int*)( this + 0x2448 ) = iVar9;
      }
 else {
         uVar3 = uVar3 << 8;
         *(uint*)( this + 0x244c ) = uVar3;
      }

      iVar4 = iVar9;
      if (uVar11 == 0xff) {
         do {
            *(int*)( this + 0x2448 ) = iVar9 + -8;
            uVar11 = uVar3 >> 0x18;
            if (iVar9 + -8 < 1) {
               *(uint*)( this + 0x244c ) = uVar3 << ( (byte)iVar9 & 0x1f );
               iVar4 = *(int*)( this + 0x340 );
               if (iVar4 == 0) {
                  prep_in_buffer(this);
                  iVar4 = *(int*)( this + 0x340 );
                  if (iVar4 != 0) goto LAB_001042bc;
                  uVar8 = *(uint*)( this + 0x344 );
                  *(uint*)( this + 0x344 ) = uVar8 ^ 1;
                  uVar8 = ( -(uint)(uVar8 == 0) & 0x2600 ) + 0xd900;
                  LAB_001043db:prep_in_buffer(this);
                  iVar4 = *(int*)( this + 0x340 );
                  if (iVar4 != 0) {
                     pbVar6 = *(byte**)( this + 0x338 );
                     goto LAB_001042e7;
                  }

                  uVar7 = *(uint*)( this + 0x344 );
                  *(uint*)( this + 0x344 ) = uVar7 ^ 1;
                  uVar7 = ( -(uint)(uVar7 == 0) & 0x26 ) + 0xd9;
               }
 else {
                  LAB_001042bc:pbVar2 = *(byte**)( this + 0x338 );
                  iVar4 = iVar4 + -1;
                  pbVar6 = pbVar2 + 1;
                  *(byte**)( this + 0x338 ) = pbVar6;
                  bVar1 = *pbVar2;
                  *(int*)( this + 0x340 ) = iVar4;
                  uVar8 = (uint)bVar1 << 8;
                  if (iVar4 == 0) goto LAB_001043db;
                  LAB_001042e7:*(byte**)( this + 0x338 ) = pbVar6 + 1;
                  uVar7 = ( uint ) * pbVar6;
                  *(int*)( this + 0x340 ) = iVar4 + -1;
               }

               iVar4 = *(int*)( this + 0x2448 );
               *(int*)( this + 0x2448 ) = iVar4 + 0x10;
               *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar7 | uVar8 ) << ( -(char)iVar4 & 0x1fU );
            }
 else {
               *(uint*)( this + 0x244c ) = uVar3 << 8;
            }

            if (uVar11 != 0xff) goto LAB_00104334;
            uVar3 = *(uint*)( this + 0x244c );
            iVar9 = *(int*)( this + 0x2448 );
         }
 while ( true );
      }

   }
 while ( true );
   LAB_00104334:if (uVar11 == 0) goto LAB_00104238;
   if (uVar11 < 0xdb) {
      if (0xd7 < uVar11) {
         return uVar11;
      }

      if (uVar11 == 0xc4) {
         read_dht_marker(this);
         uVar3 = *(uint*)( this + 0x244c );
         iVar4 = *(int*)( this + 0x2448 );
         goto LAB_00104244;
      }

      if (0xc4 < uVar11) {
         uVar5 = 1L << ( (char)( uVar3 >> 0x18 ) + 0x3bU & 0x3f );
         if (( uVar5 & 0x7f808 ) == 0) {
            if (( uVar5 & 0x777 ) != 0) {
               return uVar11;
            }

            /* WARNING: Subroutine does not return */
            stop_decoding(this, 0xffffff0f);
         }

         LAB_00104a81:/* WARNING: Subroutine does not return */stop_decoding(this, 0xffffff10);
      }

      if (uVar11 == 1) goto LAB_00104a81;
      if (uVar11 - 0xc0 < 4) {
         return uVar11;
      }

   }
 else {
      if (uVar11 == 0xdb) {
         read_dqt_marker(this);
         uVar3 = *(uint*)( this + 0x244c );
         iVar4 = *(int*)( this + 0x2448 );
         goto LAB_00104244;
      }

      if (uVar11 == 0xdd) {
         iVar4 = *(int*)( this + 0x2448 );
         uVar3 = *(uint*)( this + 0x244c );
         iVar9 = iVar4 + -0x10;
         *(int*)( this + 0x2448 ) = iVar9;
         if (iVar9 < 1) {
            *(uint*)( this + 0x244c ) = uVar3 << ( (byte)iVar4 & 0x1f );
            iVar4 = *(int*)( this + 0x340 );
            if (iVar4 == 0) {
               prep_in_buffer(this);
               iVar4 = *(int*)( this + 0x340 );
               if (iVar4 != 0) goto LAB_00104793;
               uVar11 = *(uint*)( this + 0x344 );
               *(uint*)( this + 0x344 ) = uVar11 ^ 1;
               uVar11 = ( -(uint)(uVar11 == 0) & 0x2600 ) + 0xd900;
               LAB_00104a1a:prep_in_buffer(this);
               iVar4 = *(int*)( this + 0x340 );
               if (iVar4 != 0) {
                  pbVar6 = *(byte**)( this + 0x338 );
                  goto LAB_001047be;
               }

               uVar8 = *(uint*)( this + 0x344 );
               *(uint*)( this + 0x344 ) = uVar8 ^ 1;
               uVar8 = ( -(uint)(uVar8 == 0) & 0x26 ) + 0xd9;
            }
 else {
               LAB_00104793:pbVar2 = *(byte**)( this + 0x338 );
               iVar4 = iVar4 + -1;
               pbVar6 = pbVar2 + 1;
               *(byte**)( this + 0x338 ) = pbVar6;
               bVar1 = *pbVar2;
               *(int*)( this + 0x340 ) = iVar4;
               uVar11 = (uint)bVar1 << 8;
               if (iVar4 == 0) goto LAB_00104a1a;
               LAB_001047be:*(byte**)( this + 0x338 ) = pbVar6 + 1;
               uVar8 = ( uint ) * pbVar6;
               *(int*)( this + 0x340 ) = iVar4 + -1;
            }

            iVar4 = *(int*)( this + 0x2448 );
            iVar9 = iVar4 + 0x10;
            *(int*)( this + 0x2448 ) = iVar9;
            *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar8 | uVar11 ) << ( -(char)iVar4 & 0x1fU );
         }
 else {
            *(uint*)( this + 0x244c ) = uVar3 << 0x10;
         }

         if (uVar3 >> 0x10 != 4) {
            /* WARNING: Subroutine does not return */
            stop_decoding(this, 0xffffff0b);
         }

         uVar11 = *(uint*)( this + 0x244c );
         iVar4 = iVar9 + -0x10;
         *(int*)( this + 0x2448 ) = iVar4;
         uVar3 = uVar11 << 0x10;
         if (0 < iVar4) goto LAB_001045b0;
         iVar4 = *(int*)( this + 0x340 );
         *(uint*)( this + 0x244c ) = uVar11 << ( (byte)iVar9 & 0x1f );
         if (iVar4 == 0) {
            prep_in_buffer(this);
            iVar4 = *(int*)( this + 0x340 );
            if (iVar4 != 0) goto LAB_0010489d;
            uVar3 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar3 ^ 1;
            uVar3 = ( -(uint)(uVar3 == 0) & 0x2600 ) + 0xd900;
            LAB_00104934:prep_in_buffer(this);
            iVar4 = *(int*)( this + 0x340 );
            if (iVar4 != 0) {
               pbVar6 = *(byte**)( this + 0x338 );
               goto LAB_001048c4;
            }

            uVar8 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar8 ^ 1;
            uVar7 = 0xff;
            if (uVar8 != 0) {
               uVar7 = 0xd9;
            }

         }
 else {
            LAB_0010489d:pbVar2 = *(byte**)( this + 0x338 );
            iVar4 = iVar4 + -1;
            pbVar6 = pbVar2 + 1;
            *(byte**)( this + 0x338 ) = pbVar6;
            bVar1 = *pbVar2;
            *(int*)( this + 0x340 ) = iVar4;
            uVar3 = (uint)bVar1 << 8;
            if (iVar4 == 0) goto LAB_00104934;
            LAB_001048c4:*(byte**)( this + 0x338 ) = pbVar6 + 1;
            bVar1 = *pbVar6;
            *(int*)( this + 0x340 ) = iVar4 + -1;
            uVar7 = (uint)bVar1;
         }

         uVar3 = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar7 | uVar3 ) << ( -(char)*(int *)(this + 0x2448) & 0x1fU );
         iVar4 = *(int*)( this + 0x2448 ) + 0x10;
         LAB_001045b0:*(uint*)( this + 0x2450 ) = uVar11 >> 0x10;
         goto LAB_00104244;
      }

   }

   iVar9 = *(int*)( this + 0x2448 );
   uVar11 = *(uint*)( this + 0x244c );
   iVar4 = iVar9 + -0x10;
   *(int*)( this + 0x2448 ) = iVar4;
   if (0 < iVar4) {
      *(uint*)( this + 0x244c ) = uVar11 << 0x10;
      goto LAB_0010461b;
   }

   *(uint*)( this + 0x244c ) = uVar11 << ( (byte)iVar9 & 0x1f );
   iVar4 = *(int*)( this + 0x340 );
   if (iVar4 == 0) {
      prep_in_buffer(this);
      iVar4 = *(int*)( this + 0x340 );
      if (iVar4 != 0) goto LAB_00104819;
      uVar3 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar3 ^ 1;
      uVar3 = ( -(uint)(uVar3 == 0) & 0x2600 ) + 0xd900;
      LAB_001049a5:prep_in_buffer(this);
      iVar4 = *(int*)( this + 0x340 );
      if (iVar4 != 0) {
         pbVar6 = *(byte**)( this + 0x338 );
         goto LAB_00104844;
      }

      uVar8 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar8 ^ 1;
      uVar8 = ( -(uint)(uVar8 == 0) & 0x26 ) + 0xd9;
   }
 else {
      LAB_00104819:pbVar2 = *(byte**)( this + 0x338 );
      iVar4 = iVar4 + -1;
      pbVar6 = pbVar2 + 1;
      *(byte**)( this + 0x338 ) = pbVar6;
      bVar1 = *pbVar2;
      *(int*)( this + 0x340 ) = iVar4;
      uVar3 = (uint)bVar1 << 8;
      if (iVar4 == 0) goto LAB_001049a5;
      LAB_00104844:*(byte**)( this + 0x338 ) = pbVar6 + 1;
      uVar8 = ( uint ) * pbVar6;
      *(int*)( this + 0x340 ) = iVar4 + -1;
   }

   iVar9 = *(int*)( this + 0x2448 );
   iVar4 = iVar9 + 0x10;
   *(int*)( this + 0x2448 ) = iVar4;
   *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar8 | uVar3 ) << ( -(char)iVar9 & 0x1fU );
   LAB_0010461b:if (uVar11 >> 0x10 < 2) {
      /* WARNING: Subroutine does not return */
      stop_decoding(this, 0xffffff0a);
   }

   uVar3 = *(uint*)( this + 0x244c );
   for (iVar9 = ( uVar11 >> 0x10 ) - 2; iVar9 != 0; iVar9 = iVar9 + -1) {
      iVar10 = iVar4 + -8;
      *(int*)( this + 0x2448 ) = iVar10;
      if (iVar10 < 1) {
         *(uint*)( this + 0x244c ) = uVar3 << ( (byte)iVar4 & 0x1f );
         iVar4 = *(int*)( this + 0x340 );
         if (iVar4 == 0) {
            prep_in_buffer(this);
            iVar4 = *(int*)( this + 0x340 );
            if (iVar4 != 0) goto LAB_00104677;
            uVar3 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar3 ^ 1;
            uVar3 = ( -(uint)(uVar3 == 0) & 0x2600 ) + 0xd900;
            LAB_0010473b:prep_in_buffer(this);
            iVar4 = *(int*)( this + 0x340 );
            if (iVar4 != 0) {
               pbVar6 = *(byte**)( this + 0x338 );
               goto LAB_001046a2;
            }

            uVar11 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar11 ^ 1;
            uVar11 = ( -(uint)(uVar11 == 0) & 0x26 ) + 0xd9;
         }
 else {
            LAB_00104677:pbVar2 = *(byte**)( this + 0x338 );
            iVar4 = iVar4 + -1;
            pbVar6 = pbVar2 + 1;
            *(byte**)( this + 0x338 ) = pbVar6;
            bVar1 = *pbVar2;
            *(int*)( this + 0x340 ) = iVar4;
            uVar3 = (uint)bVar1 << 8;
            if (iVar4 == 0) goto LAB_0010473b;
            LAB_001046a2:*(byte**)( this + 0x338 ) = pbVar6 + 1;
            uVar11 = ( uint ) * pbVar6;
            *(int*)( this + 0x340 ) = iVar4 + -1;
         }

         uVar3 = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar11 | uVar3 ) << ( -(char)*(int *)(this + 0x2448) & 0x1fU );
         iVar10 = *(int*)( this + 0x2448 ) + 0x10;
         *(uint*)( this + 0x244c ) = uVar3;
         *(int*)( this + 0x2448 ) = iVar10;
      }
 else {
         uVar3 = uVar3 << 8;
         *(uint*)( this + 0x244c ) = uVar3;
      }

      iVar4 = iVar10;
   }

   goto LAB_00104244;
}
/* jpgd::jpeg_decoder::locate_soi_marker() */void jpgd::jpeg_decoder::locate_soi_marker(jpeg_decoder *this) {
   byte bVar1;
   byte *pbVar2;
   uint uVar3;
   int iVar4;
   int iVar5;
   uint uVar6;
   int iVar7;
   byte *pbVar8;
   uint uVar9;
   uint uVar10;
   uVar9 = *(uint*)( this + 0x244c );
   iVar5 = *(int*)( this + 0x2448 );
   iVar7 = iVar5 + -8;
   uVar3 = uVar9 << 8;
   *(int*)( this + 0x2448 ) = iVar7;
   if (iVar7 < 1) {
      iVar7 = *(int*)( this + 0x340 );
      *(uint*)( this + 0x244c ) = uVar9 << ( (byte)iVar5 & 0x1f );
      if (iVar7 == 0) {
         prep_in_buffer(this);
         iVar7 = *(int*)( this + 0x340 );
         if (iVar7 != 0) goto LAB_00104d5d;
         uVar3 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar3 ^ 1;
         uVar3 = ( -(uint)(uVar3 == 0) & 0x2600 ) + 0xd900;
         LAB_00104df1:prep_in_buffer(this);
         iVar7 = *(int*)( this + 0x340 );
         if (iVar7 != 0) {
            pbVar8 = *(byte**)( this + 0x338 );
            goto LAB_00104d84;
         }

         uVar10 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar10 ^ 1;
         uVar10 = ( -(uint)(uVar10 == 0) & 0x26 ) + 0xd9;
      }
 else {
         LAB_00104d5d:pbVar2 = *(byte**)( this + 0x338 );
         iVar7 = iVar7 + -1;
         pbVar8 = pbVar2 + 1;
         *(byte**)( this + 0x338 ) = pbVar8;
         bVar1 = *pbVar2;
         *(int*)( this + 0x340 ) = iVar7;
         uVar3 = (uint)bVar1 << 8;
         if (iVar7 == 0) goto LAB_00104df1;
         LAB_00104d84:*(byte**)( this + 0x338 ) = pbVar8 + 1;
         uVar10 = ( uint ) * pbVar8;
         *(int*)( this + 0x340 ) = iVar7 + -1;
      }

      iVar7 = *(int*)( this + 0x2448 ) + 0x10;
      uVar3 = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar10 | uVar3 ) << ( -(char)*(int *)(this + 0x2448) & 0x1fU );
   }

   *(int*)( this + 0x2448 ) = iVar7 + -8;
   if (0 < iVar7 + -8) {
      *(uint*)( this + 0x244c ) = uVar3 << 8;
      goto LAB_00104b07;
   }

   *(uint*)( this + 0x244c ) = uVar3 << ( (byte)iVar7 & 0x1f );
   iVar5 = *(int*)( this + 0x340 );
   if (iVar5 == 0) {
      prep_in_buffer(this);
      iVar5 = *(int*)( this + 0x340 );
      if (iVar5 != 0) goto LAB_00104cdb;
      uVar10 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar10 ^ 1;
      uVar10 = ( -(uint)(uVar10 == 0) & 0x2600 ) + 0xd900;
      LAB_00104e66:prep_in_buffer(this);
      iVar5 = *(int*)( this + 0x340 );
      if (iVar5 != 0) {
         pbVar8 = *(byte**)( this + 0x338 );
         goto LAB_00104d06;
      }

      uVar6 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar6 ^ 1;
      uVar6 = ( -(uint)(uVar6 == 0) & 0x26 ) + 0xd9;
   }
 else {
      LAB_00104cdb:pbVar2 = *(byte**)( this + 0x338 );
      iVar5 = iVar5 + -1;
      pbVar8 = pbVar2 + 1;
      *(byte**)( this + 0x338 ) = pbVar8;
      bVar1 = *pbVar2;
      *(int*)( this + 0x340 ) = iVar5;
      uVar10 = (uint)bVar1 << 8;
      if (iVar5 == 0) goto LAB_00104e66;
      LAB_00104d06:*(byte**)( this + 0x338 ) = pbVar8 + 1;
      uVar6 = ( uint ) * pbVar8;
      *(int*)( this + 0x340 ) = iVar5 + -1;
   }

   iVar5 = *(int*)( this + 0x2448 );
   *(int*)( this + 0x2448 ) = iVar5 + 0x10;
   *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar6 | uVar10 ) << ( -(char)iVar5 & 0x1fU );
   LAB_00104b07:if (( uVar9 >> 0x18 == 0xff ) && ( uVar3 >> 0x18 == 0xd8 )) {
      return;
   }

   iVar5 = *(int*)( this + 0x2448 );
   iVar7 = 0xfff;
   uVar9 = uVar3 >> 0x18;
   do {
      uVar3 = *(uint*)( this + 0x244c );
      iVar4 = iVar5 + -8;
      *(int*)( this + 0x2448 ) = iVar4;
      uVar10 = uVar3 >> 0x18;
      if (iVar4 < 1) {
         iVar4 = *(int*)( this + 0x340 );
         *(uint*)( this + 0x244c ) = uVar3 << ( (byte)iVar5 & 0x1f );
         if (iVar4 == 0) {
            prep_in_buffer(this);
            iVar4 = *(int*)( this + 0x340 );
            if (iVar4 != 0) goto LAB_00104baa;
            uVar3 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar3 ^ 1;
            uVar3 = ( -(uint)(uVar3 == 0) & 0x2600 ) + 0xd900;
            LAB_00104c5b:prep_in_buffer(this);
            iVar4 = *(int*)( this + 0x340 );
            if (iVar4 != 0) {
               pbVar8 = *(byte**)( this + 0x338 );
               goto LAB_00104bd5;
            }

            uVar6 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar6 ^ 1;
            uVar6 = ( -(uint)(uVar6 == 0) & 0x26 ) + 0xd9;
         }
 else {
            LAB_00104baa:pbVar2 = *(byte**)( this + 0x338 );
            iVar4 = iVar4 + -1;
            pbVar8 = pbVar2 + 1;
            *(byte**)( this + 0x338 ) = pbVar8;
            bVar1 = *pbVar2;
            *(int*)( this + 0x340 ) = iVar4;
            uVar3 = (uint)bVar1 << 8;
            if (iVar4 == 0) goto LAB_00104c5b;
            LAB_00104bd5:*(byte**)( this + 0x338 ) = pbVar8 + 1;
            uVar6 = ( uint ) * pbVar8;
            *(int*)( this + 0x340 ) = iVar4 + -1;
         }

         iVar4 = *(int*)( this + 0x2448 );
         iVar5 = iVar4 + 0x10;
         *(int*)( this + 0x2448 ) = iVar5;
         *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar6 | uVar3 ) << ( -(char)iVar4 & 0x1fU );
      }
 else {
         *(uint*)( this + 0x244c ) = uVar3 << 8;
         iVar5 = iVar4;
      }

      if (uVar9 == 0xff) {
         if (uVar10 == 0xd8) {
            if (this[0x244f] == (jpeg_decoder)0xff) {
               return;
            }

            break;
         }

         if (uVar10 == 0xd9) break;
      }

      iVar7 = iVar7 + -1;
      uVar9 = uVar10;
   }
 while ( iVar7 != 0 );
   /* WARNING: Subroutine does not return */
   stop_decoding(this, 0xffffff11);
}
/* jpgd::jpeg_decoder::locate_sof_marker() */void jpgd::jpeg_decoder::locate_sof_marker(jpeg_decoder *this) {
   int iVar1;
   locate_soi_marker(this);
   iVar1 = process_markers(this);
   if (iVar1 == 0xc2) {
      *(undefined4*)( this + 0xe8 ) = 1;
      read_sof_marker(this);
      return;
   }

   if (iVar1 < 0xc3) {
      if (iVar1 - 0xc0U < 2) {
         read_sof_marker(this);
         return;
      }

   }
 else if (iVar1 == 0xc9) {
      /* WARNING: Subroutine does not return */
      stop_decoding(this, 0xffffff0f);
   }

   /* WARNING: Subroutine does not return */
   stop_decoding(this, 0xffffff12);
}
/* jpgd::jpeg_decoder::locate_sos_marker() */undefined8 jpgd::jpeg_decoder::locate_sos_marker(jpeg_decoder *this) {
   int iVar1;
   iVar1 = process_markers(this);
   if (iVar1 == 0xd9) {
      return 0;
   }

   if (iVar1 == 0xda) {
      read_sos_marker(this);
      return 1;
   }

   /* WARNING: Subroutine does not return */
   stop_decoding(this, 0xffffff10);
}
/* jpgd::jpeg_decoder::init(jpgd::jpeg_decoder_stream*, unsigned int) */void jpgd::jpeg_decoder::init(jpeg_decoder *this, jpeg_decoder_stream *param_1, uint param_2) {
   byte bVar1;
   byte *pbVar2;
   char cVar3;
   undefined8 uVar4;
   int iVar5;
   jpeg_decoder *pjVar6;
   jpeg_decoder *pjVar7;
   uint uVar8;
   byte *pbVar9;
   uint uVar10;
   *(uint*)( this + 200 ) = param_2;
   *(jpeg_decoder_stream**)( this + 0xe0 ) = param_1;
   *(undefined8*)( this + 0xd0 ) = 0;
   *(undefined8*)( this + 0xd8 ) = 0;
   *(undefined4*)( this + 0xe8 ) = 0;
   *(undefined8*)( this + 0xec ) = 0;
   for (int i = 0; i < 10; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 248 ) ) = (undefined1[16])0;
   }

   *(undefined8*)( this + 0x198 ) = 0;
   for (int i = 0; i < 6; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 416 ) ) = (undefined1[16])0;
   }

   *(undefined4*)( this + 0x200 ) = 0;
   *(undefined1(*) [16])( this + 0x204 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x214 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x224 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x234 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x244 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x284 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x254 ) = 0;
   *(undefined1(*) [16])( this + 0x25c ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x26c ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x27c ) = 0;
   *(undefined8*)( this + 0x294 ) = 0;
   for (int i = 0; i < 4; i++) {
      *(undefined1(*) [16])( this + ( 32*i + 672 ) ) = (undefined1[16])0;
      *(undefined1(*) [16])( this + ( 32*i + 688 ) ) = (undefined1[16])0;
   }

   *(undefined1(*) [16])( this + 0x324 ) = (undefined1[16])0x0;
   *(undefined4*)( this + 800 ) = 0;
   *(jpeg_decoder**)( this + 0x338 ) = this + 0x388;
   *(undefined8*)( this + 0x340 ) = 0;
   for (int i = 0; i < 4; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 840 ) ) = (undefined1[16])0;
   }

   memset(this + 0x388, 0, 0x2080);
   *(undefined2*)( this + 0x34d0 ) = 0;
   *(undefined8*)( this + 0x2460 ) = 0;
   *(undefined8*)( this + 0x2478 ) = 0;
   *(undefined8*)( this + 0x34c8 ) = 0;
   this[0x34d2] = (jpeg_decoder)0x0;
   *(undefined1(*) [16])( this + 0x2408 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2418 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2428 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2438 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2468 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2450 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x24a8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x34b8 ) = (undefined1[16])0x0;
   prep_in_buffer(this);
   iVar5 = *(int*)( this + 0x340 );
   *(undefined8*)( this + 0x2448 ) = 0;
   if (iVar5 == 0) {
      prep_in_buffer(this);
      iVar5 = *(int*)( this + 0x340 );
      if (iVar5 != 0) goto LAB_001051c2;
      uVar10 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar10 ^ 1;
      uVar10 = ( -(uint)(uVar10 == 0) & 0x2600 ) + 0xd900;
      LAB_00105390:prep_in_buffer(this);
      iVar5 = *(int*)( this + 0x340 );
      if (iVar5 != 0) {
         pbVar9 = *(byte**)( this + 0x338 );
         goto LAB_001051eb;
      }

      uVar8 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar8 ^ 1;
      uVar8 = ( -(uint)(uVar8 == 0) & 0x26 ) + 0xd9;
   }
 else {
      LAB_001051c2:pbVar2 = *(byte**)( this + 0x338 );
      iVar5 = iVar5 + -1;
      pbVar9 = pbVar2 + 1;
      *(byte**)( this + 0x338 ) = pbVar9;
      bVar1 = *pbVar2;
      *(int*)( this + 0x340 ) = iVar5;
      uVar10 = (uint)bVar1 << 8;
      if (iVar5 == 0) goto LAB_00105390;
      LAB_001051eb:*(byte**)( this + 0x338 ) = pbVar9 + 1;
      uVar8 = ( uint ) * pbVar9;
      *(int*)( this + 0x340 ) = iVar5 + -1;
   }

   cVar3 = (char)*(int*)( this + 0x2448 );
   iVar5 = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar8 | uVar10 ) << ( -cVar3 & 0x1fU );
   if (0 < *(int*)( this + 0x2448 )) {
      *(int*)( this + 0x244c ) = iVar5 << 0x10;
      goto LAB_00105228;
   }

   *(int*)( this + 0x244c ) = iVar5 << ( cVar3 + 0x10U & 0x1f );
   iVar5 = *(int*)( this + 0x340 );
   if (iVar5 == 0) {
      prep_in_buffer(this);
      iVar5 = *(int*)( this + 0x340 );
      if (iVar5 != 0) goto LAB_0010527d;
      uVar10 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar10 ^ 1;
      uVar10 = ( -(uint)(uVar10 == 0) & 0x2600 ) + 0xd900;
      LAB_0010531a:prep_in_buffer(this);
      iVar5 = *(int*)( this + 0x340 );
      if (iVar5 != 0) {
         pbVar9 = *(byte**)( this + 0x338 );
         goto LAB_001052a2;
      }

      uVar8 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar8 ^ 1;
      uVar8 = ( -(uint)(uVar8 == 0) & 0x26 ) + 0xd9;
   }
 else {
      LAB_0010527d:pbVar2 = *(byte**)( this + 0x338 );
      iVar5 = iVar5 + -1;
      pbVar9 = pbVar2 + 1;
      *(byte**)( this + 0x338 ) = pbVar9;
      bVar1 = *pbVar2;
      *(int*)( this + 0x340 ) = iVar5;
      uVar10 = (uint)bVar1 << 8;
      if (iVar5 == 0) goto LAB_0010531a;
      LAB_001052a2:*(byte**)( this + 0x338 ) = pbVar9 + 1;
      uVar8 = ( uint ) * pbVar9;
      *(int*)( this + 0x340 ) = iVar5 + -1;
   }

   iVar5 = *(int*)( this + 0x2448 );
   *(int*)( this + 0x2448 ) = iVar5 + 0x10;
   *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar8 | uVar10 ) << ( -(char)iVar5 & 0x1fU );
   LAB_00105228:uVar4 = _LC2;
   *(undefined8*)( this + 0x2480 ) = _LC2;
   pjVar6 = this + 0x2488;
   do {
      *(undefined8*)pjVar6 = uVar4;
      pjVar7 = pjVar6 + 0x10;
      *(undefined8*)( pjVar6 + 8 ) = uVar4;
      pjVar6 = pjVar7;
   }
 while ( this + 0x24a8 != pjVar7 );
   this[0x34d3] = (jpeg_decoder)0x1;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* jpgd::jpeg_decoder::create_look_ups() */void jpgd::jpeg_decoder::create_look_ups(jpeg_decoder *this) {
   int iVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   int iVar11;
   int iVar12;
   jpeg_decoder *pjVar13;
   jpeg_decoder *pjVar14;
   int iVar15;
   int iVar16;
   int iVar17;
   int iVar18;
   int iVar19;
   int iVar20;
   int iVar21;
   int iVar22;
   iVar12 = _UNK_0010ccbc;
   iVar11 = _UNK_0010ccb8;
   iVar10 = _UNK_0010ccb4;
   iVar9 = __LC9;
   iVar8 = _UNK_0010ccac;
   iVar7 = _UNK_0010cca8;
   iVar6 = _UNK_0010cca4;
   iVar5 = __LC8;
   iVar4 = _UNK_0010cc9c;
   iVar3 = _UNK_0010cc98;
   iVar2 = _UNK_0010cc94;
   iVar1 = __LC7;
   pjVar13 = this + 0x24b8;
   iVar19 = __LC6;
   iVar20 = _UNK_0010cc84;
   iVar21 = _UNK_0010cc88;
   iVar22 = _UNK_0010cc8c;
   do {
      pjVar14 = pjVar13 + 0x10;
      iVar15 = iVar19 + iVar5;
      iVar16 = iVar20 + iVar6;
      iVar17 = iVar21 + iVar7;
      iVar18 = iVar22 + iVar8;
      *(int*)pjVar13 = iVar15 * 0x166e9 + iVar9 >> 0x10;
      *(int*)( pjVar13 + 4 ) = iVar16 * 0x166e9 + iVar10 >> 0x10;
      *(int*)( pjVar13 + 8 ) = iVar17 * 0x166e9 + iVar11 >> 0x10;
      *(int*)( pjVar13 + 0xc ) = iVar18 * 0x166e9 + iVar12 >> 0x10;
      *(int*)( pjVar13 + 0x400 ) = iVar15 * 0x1c5a2 + iVar9 >> 0x10;
      *(int*)( pjVar13 + 0x404 ) = iVar16 * 0x1c5a2 + iVar10 >> 0x10;
      *(int*)( pjVar13 + 0x408 ) = iVar17 * 0x1c5a2 + iVar11 >> 0x10;
      *(int*)( pjVar13 + 0x40c ) = iVar18 * 0x1c5a2 + iVar12 >> 0x10;
      *(int*)( pjVar13 + 0x800 ) = iVar15 * -0xb6d2;
      *(int*)( pjVar13 + 0x804 ) = iVar16 * -0xb6d2;
      *(int*)( pjVar13 + 0x808 ) = iVar17 * -0xb6d2;
      *(int*)( pjVar13 + 0x80c ) = iVar18 * -0xb6d2;
      *(int*)( pjVar13 + 0xc00 ) = iVar9 + iVar15 * -0x581a;
      *(int*)( pjVar13 + 0xc04 ) = iVar10 + iVar16 * -0x581a;
      *(int*)( pjVar13 + 0xc08 ) = iVar11 + iVar17 * -0x581a;
      *(int*)( pjVar13 + 0xc0c ) = iVar12 + iVar18 * -0x581a;
      pjVar13 = pjVar14;
      iVar19 = iVar19 + iVar1;
      iVar20 = iVar20 + iVar2;
      iVar21 = iVar21 + iVar3;
      iVar22 = iVar22 + iVar4;
   }
 while ( this + 0x28b8 != pjVar14 );
   return;
}
/* jpgd::jpeg_decoder::fix_in_buffer() */void jpgd::jpeg_decoder::fix_in_buffer(jpeg_decoder *this) {
   long lVar1;
   int iVar2;
   iVar2 = *(int*)( this + 0x2448 );
   if (iVar2 == 0x10) {
      lVar1 = *(long*)( this + 0x338 );
      *(long*)( this + 0x338 ) = lVar1 + -1;
      *(char*)( lVar1 + -1 ) = (char)*(undefined4*)( this + 0x244c );
      iVar2 = *(int*)( this + 0x2448 );
      *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
   }

   if (7 < iVar2) {
      lVar1 = *(long*)( this + 0x338 );
      *(long*)( this + 0x338 ) = lVar1 + -1;
      *(char*)( lVar1 + -1 ) = (char)( ( uint ) * (undefined4*)( this + 0x244c ) >> 8 );
      *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
   }

   lVar1 = *(long*)( this + 0x338 );
   *(long*)( this + 0x338 ) = lVar1 + -1;
   *(char*)( lVar1 + -1 ) = (char)*(undefined2*)( this + 0x244e );
   lVar1 = *(long*)( this + 0x338 );
   *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
   *(long*)( this + 0x338 ) = lVar1 + -1;
   *(jpeg_decoder*)( lVar1 + -1 ) = this[0x244f];
   *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
   *(undefined4*)( this + 0x2448 ) = 0x10;
   get_bits_no_markers(this, 0x10);
   get_bits_no_markers(this, 0x10);
   return;
}
/* jpgd::jpeg_decoder::process_restart() */void jpgd::jpeg_decoder::process_restart(jpeg_decoder *this) {
   char cVar1;
   byte bVar2;
   char *pcVar3;
   byte *pbVar4;
   int iVar5;
   uint uVar6;
   int iVar7;
   iVar7 = 0x600;
   do {
      iVar5 = *(int*)( this + 0x340 );
      if (iVar5 == 0) {
         prep_in_buffer(this);
         iVar5 = *(int*)( this + 0x340 );
         if (iVar5 != 0) goto LAB_00105618;
         uVar6 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar6 ^ 1;
         iVar5 = 0;
         if (uVar6 == 0) goto LAB_001056b4;
      }
 else {
         LAB_00105618:pcVar3 = *(char**)( this + 0x338 );
         iVar5 = iVar5 + -1;
         *(char**)( this + 0x338 ) = pcVar3 + 1;
         cVar1 = *pcVar3;
         *(int*)( this + 0x340 ) = iVar5;
         if (cVar1 == -1) goto LAB_001056b4;
      }

      iVar7 = iVar7 + -1;
   }
 while ( iVar7 != 0 );
   LAB_00105770:/* WARNING: Subroutine does not return */stop_decoding(this, 0xffffff1b);
   LAB_001056b4:if (iVar5 == 0) {
      prep_in_buffer(this);
      iVar5 = *(int*)( this + 0x340 );
      if (iVar5 != 0) goto LAB_00105680;
      uVar6 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar6 ^ 1;
      if (uVar6 != 0) {
         uVar6 = 0xd9;
         goto LAB_001056e4;
      }

   }
 else {
      LAB_00105680:pbVar4 = *(byte**)( this + 0x338 );
      *(byte**)( this + 0x338 ) = pbVar4 + 1;
      bVar2 = *pbVar4;
      uVar6 = (uint)bVar2;
      *(int*)( this + 0x340 ) = iVar5 + -1;
      if (bVar2 != 0xff) {
         LAB_001056e4:iVar7 = *(int*)( this + 0x2458 );
         if (iVar7 + 0xd0U == uVar6) {
            memset(this + 0x2468, 0, (long)*(int*)( this + 0x19c ) << 2);
            *(undefined4*)( this + 800 ) = 0;
            *(undefined4*)( this + 0x2448 ) = 0x10;
            *(ulong*)( this + 0x2454 ) = CONCAT44(iVar7 + 1, *(undefined4*)( this + 0x2450 )) & 0x7ffffffff;
            get_bits_no_markers(this, 0x10);
            get_bits_no_markers(this, 0x10);
            return;
         }

         goto LAB_00105770;
      }

   }

   iVar7 = iVar7 + -1;
   if (iVar7 == 0) goto LAB_00105770;
   iVar5 = *(int*)( this + 0x340 );
   goto LAB_001056b4;
}
/* jpgd::jpeg_decoder::H1V1Convert() */void jpgd::jpeg_decoder::H1V1Convert(jpeg_decoder *this) {
   byte bVar1;
   byte bVar2;
   byte bVar3;
   int iVar4;
   long lVar5;
   uint uVar6;
   undefined1 *puVar7;
   undefined1 *puVar8;
   byte *pbVar9;
   undefined1 *puVar10;
   byte *pbVar11;
   iVar4 = *(int*)( this + 0x245c );
   lVar5 = *(long*)( this + 0x34b8 );
   pbVar11 = (byte*)( (long)( ( *(int*)( this + 0x248 ) - *(int*)( this + 0x288 ) ) * 8 ) + *(long*)( this + 0x24a8 ) );
   if (0 < iVar4) {
      puVar10 = (undefined1*)( lVar5 + 0x20 );
      do {
         puVar7 = puVar10 + -0x20;
         pbVar9 = pbVar11;
         do {
            bVar1 = pbVar9[0x80];
            bVar2 = *pbVar9;
            bVar3 = pbVar9[0x40];
            uVar6 = *(int*)( this + (ulong)bVar1 * 4 + 0x24b8 ) + (uint)bVar2;
            if (0xff < uVar6) {
               uVar6 = (int)~uVar6 >> 0x1f & 0xff;
            }

            *puVar7 = (char)uVar6;
            uVar6 = ( *(int*)( this + (ulong)bVar3 * 4 + 0x30b8 ) + *(int*)( this + (ulong)bVar1 * 4 + 0x2cb8 ) >> 0x10 ) + (uint)bVar2;
            if (0xff < uVar6) {
               uVar6 = (int)~uVar6 >> 0x1f & 0xff;
            }

            puVar7[1] = (char)uVar6;
            uVar6 = *(int*)( this + (ulong)bVar3 * 4 + 0x28b8 ) + (uint)bVar2;
            if (0xff < uVar6) {
               uVar6 = (int)~uVar6 >> 0x1f & 0xff;
            }

            puVar7[2] = (char)uVar6;
            puVar8 = puVar7 + 4;
            pbVar9 = pbVar9 + 1;
            puVar7[3] = 0xff;
            puVar7 = puVar8;
         }
 while ( puVar8 != puVar10 );
         puVar10 = puVar10 + 0x20;
         pbVar11 = pbVar11 + 0xc0;
      }
 while ( (undefined1*)( lVar5 + 0x40 + ( ulong )(iVar4 - 1) * 0x20 ) != puVar10 );
      return;
   }

   return;
}
/* jpgd::jpeg_decoder::H2V1Convert() */void jpgd::jpeg_decoder::H2V1Convert(jpeg_decoder *this) {
   byte bVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   long lVar5;
   int iVar6;
   long lVar7;
   uint uVar8;
   undefined1 *puVar9;
   undefined1 *puVar10;
   long lVar11;
   ulong uVar12;
   long lVar13;
   long lVar14;
   long lVar15;
   long lVar16;
   undefined1 *puVar17;
   uint uVar18;
   lVar5 = *(long*)( this + 0x24a8 );
   puVar17 = *(undefined1**)( this + 0x34b8 );
   lVar7 = (long)( ( *(int*)( this + 0x248 ) - *(int*)( this + 0x288 ) ) * 8 );
   lVar11 = lVar5 + 0x80 + lVar7;
   iVar2 = *(int*)( this + 0x245c );
   if (0 < iVar2) {
      lVar16 = lVar11;
      do {
         lVar14 = lVar11 + -0x80;
         puVar10 = puVar17;
         lVar15 = lVar16;
         do {
            lVar13 = 0;
            puVar9 = puVar10;
            do {
               uVar12 = ( ulong ) * (byte*)( lVar15 + 0x40 + lVar13 );
               iVar3 = *(int*)( this + uVar12 * 4 + 0x24b8 );
               iVar4 = *(int*)( this + ( ulong ) * (byte*)( lVar15 + lVar13 ) * 4 + 0x28b8 );
               uVar8 = ( uint ) * (byte*)( lVar14 + lVar13 * 2 );
               iVar6 = *(int*)( this + ( ulong ) * (byte*)( lVar15 + lVar13 ) * 4 + 0x30b8 ) + *(int*)( this + uVar12 * 4 + 0x2cb8 ) >> 0x10;
               uVar18 = iVar3 + uVar8;
               if (0xff < uVar18) {
                  uVar18 = (int)~uVar18 >> 0x1f & 0xff;
               }

               *puVar9 = (char)uVar18;
               uVar18 = iVar6 + uVar8;
               if (0xff < uVar18) {
                  uVar18 = (int)~uVar18 >> 0x1f & 0xff;
               }

               uVar8 = uVar8 + iVar4;
               puVar9[1] = (char)uVar18;
               if (0xff < uVar8) {
                  uVar8 = (int)~uVar8 >> 0x1f & 0xff;
               }

               puVar9[2] = (char)uVar8;
               puVar9[3] = 0xff;
               bVar1 = *(byte*)( lVar14 + 1 + lVar13 * 2 );
               uVar18 = iVar3 + (uint)bVar1;
               if (0xff < uVar18) {
                  uVar18 = (int)~uVar18 >> 0x1f & 0xff;
               }

               uVar8 = iVar6 + (uint)bVar1;
               puVar9[4] = (char)uVar18;
               if (0xff < uVar8) {
                  uVar8 = (int)~uVar8 >> 0x1f & 0xff;
               }

               uVar18 = iVar4 + (uint)bVar1;
               puVar9[5] = (char)uVar8;
               if (0xff < uVar18) {
                  uVar18 = (int)~uVar18 >> 0x1f & 0xff;
               }

               lVar13 = lVar13 + 1;
               puVar9[6] = (char)uVar18;
               puVar9[7] = 0xff;
               puVar9 = puVar9 + 8;
            }
 while ( lVar13 != 4 );
            lVar14 = lVar14 + 0x40;
            puVar10 = puVar10 + 0x20;
            lVar15 = lVar15 + 4;
         }
 while ( lVar14 != lVar11 );
         lVar11 = lVar11 + 0x100;
         puVar17 = puVar17 + 0x40;
         lVar16 = lVar16 + 0x100;
      }
 while ( lVar5 + lVar7 + 0x180 + ( ulong )(iVar2 - 1) * 0x100 != lVar11 );
   }

   return;
}
/* jpgd::jpeg_decoder::H2V1ConvertFiltered() */void jpgd::jpeg_decoder::H2V1ConvertFiltered(jpeg_decoder *this) {
   byte bVar1;
   byte bVar2;
   uint uVar3;
   int iVar4;
   uint uVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   undefined1 *puVar9;
   uint uVar10;
   int iVar11;
   uint uVar12;
   long lVar13;
   long lVar14;
   iVar11 = *(int*)( this + 0xd8 );
   if (iVar11 == 1) {
      uVar12 = 0;
   }
 else {
      uVar12 = ( iVar11 >> 1 ) - 1;
      if (iVar11 < 1) {
         return;
      }

   }

   iVar11 = ( *(int*)( this + 0x248 ) - *(int*)( this + 0x288 ) ) * 8;
   uVar6 = 0;
   puVar9 = *(undefined1**)( this + 0x34b8 );
   do {
      lVar13 = *(long*)( this + 0x24a8 );
      uVar10 = ( uint ) * (byte*)( lVar13 + (int)( ( uVar6 & 7 ) + iVar11 + ( (int)uVar6 >> 4 ) * 0x100 + ( uVar6 * 8 & 0x40 ) ) );
      uVar3 = (int)( uVar6 - 1 ) >> 1;
      uVar7 = uVar3 + 1;
      if ((int)uVar12 < (int)( uVar3 + 1 )) {
         uVar7 = uVar12;
      }

      if ((int)uVar3 < 0) {
         uVar3 = 0;
      }

      iVar4 = ( (int)uVar3 >> 3 ) * 0x100 + ( uVar3 & 7 ) + iVar11;
      uVar8 = ( uint ) * (byte*)( lVar13 + ( iVar4 + 0xc0 ) );
      uVar3 = ( uint ) * (byte*)( lVar13 + ( iVar4 + 0x80 ) );
      iVar4 = ( uVar7 & 7 ) + iVar11 + ( (int)uVar7 >> 3 ) * 0x100;
      bVar1 = *(byte*)( lVar13 + ( iVar4 + 0x80 ) );
      uVar7 = (uint)bVar1;
      bVar2 = *(byte*)( lVar13 + ( iVar4 + 0xc0 ) );
      uVar5 = (uint)bVar2;
      if (( uVar6 & 1 ) == 0) {
         uVar7 = (uint)bVar1 * 3;
         uVar5 = (uint)bVar2 * 3;
      }
 else {
         uVar3 = uVar3 * 3;
         uVar8 = uVar8 * 3;
      }

      lVar14 = (long)( (int)( uVar5 + 2 + uVar8 ) >> 2 );
      lVar13 = (long)( (int)( uVar7 + 2 + uVar3 ) >> 2 );
      iVar4 = *(int*)( this + lVar13 * 4 + 0x28b8 );
      uVar7 = *(int*)( this + lVar14 * 4 + 0x24b8 ) + uVar10;
      if (0xff < uVar7) {
         uVar7 = (int)~uVar7 >> 0x1f & 0xff;
      }

      uVar3 = ( *(int*)( this + lVar14 * 4 + 0x2cb8 ) + *(int*)( this + lVar13 * 4 + 0x30b8 ) >> 0x10 ) + uVar10;
      *puVar9 = (char)uVar7;
      if (0xff < uVar3) {
         uVar3 = (int)~uVar3 >> 0x1f & 0xff;
      }

      puVar9[1] = (char)uVar3;
      uVar10 = iVar4 + uVar10;
      if (0xff < uVar10) {
         uVar10 = (int)~uVar10 >> 0x1f & 0xff;
      }

      puVar9[2] = (char)uVar10;
      uVar6 = uVar6 + 1;
      puVar9[3] = 0xff;
      puVar9 = puVar9 + 4;
   }
 while ( (int)uVar6 < *(int*)( this + 0xd8 ) );
   return;
}
/* jpgd::jpeg_decoder::H1V2Convert() */void jpgd::jpeg_decoder::H1V2Convert(jpeg_decoder *this) {
   long lVar1;
   int iVar2;
   int iVar3;
   uint uVar4;
   long lVar5;
   int iVar6;
   uint uVar7;
   uint uVar8;
   ulong uVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   long lVar13;
   uVar4 = *(int*)( this + 0x248 ) - *(int*)( this + 0x288 );
   lVar10 = *(long*)( this + 0x34c0 );
   lVar11 = *(long*)( this + 0x34b8 );
   lVar13 = *(long*)( this + 0x24a8 );
   if ((int)uVar4 < 8) {
      lVar12 = (int)( uVar4 * 8 ) + lVar13;
   }
 else {
      lVar12 = lVar13 + 0x40 + ( ulong )(uVar4 & 7) * 8;
   }

   lVar13 = lVar13 + 0x80 + (long)( ( (int)uVar4 >> 1 ) << 3 );
   if (0 < (int)*(uint*)( this + 0x245c )) {
      lVar1 = lVar10 + ( ulong ) * (uint*)( this + 0x245c ) * 0x20;
      do {
         lVar5 = 0;
         do {
            uVar9 = ( ulong ) * (byte*)( lVar13 + 0x40 + lVar5 );
            iVar2 = *(int*)( this + uVar9 * 4 + 0x24b8 );
            iVar3 = *(int*)( this + ( ulong ) * (byte*)( lVar13 + lVar5 ) * 4 + 0x28b8 );
            uVar8 = ( uint ) * (byte*)( lVar12 + lVar5 );
            iVar6 = *(int*)( this + ( ulong ) * (byte*)( lVar13 + lVar5 ) * 4 + 0x30b8 ) + *(int*)( this + uVar9 * 4 + 0x2cb8 ) >> 0x10;
            uVar4 = iVar2 + uVar8;
            if (0xff < uVar4) {
               uVar4 = (int)~uVar4 >> 0x1f & 0xff;
            }

            *(char*)( lVar11 + lVar5 * 4 ) = (char)uVar4;
            uVar4 = iVar6 + uVar8;
            if (0xff < uVar4) {
               uVar4 = (int)~uVar4 >> 0x1f & 0xff;
            }

            uVar8 = uVar8 + iVar3;
            *(char*)( lVar11 + 1 + lVar5 * 4 ) = (char)uVar4;
            if (0xff < uVar8) {
               uVar8 = (int)~uVar8 >> 0x1f & 0xff;
            }

            *(char*)( lVar11 + 2 + lVar5 * 4 ) = (char)uVar8;
            *(undefined1*)( lVar11 + 3 + lVar5 * 4 ) = 0xff;
            uVar4 = ( uint ) * (byte*)( lVar12 + 8 + lVar5 );
            uVar8 = iVar2 + uVar4;
            if (0xff < uVar8) {
               uVar8 = (int)~uVar8 >> 0x1f & 0xff;
            }

            uVar7 = iVar6 + uVar4;
            *(char*)( lVar10 + lVar5 * 4 ) = (char)uVar8;
            if (0xff < uVar7) {
               uVar7 = (int)~uVar7 >> 0x1f & 0xff;
            }

            uVar4 = iVar3 + uVar4;
            *(char*)( lVar10 + 1 + lVar5 * 4 ) = (char)uVar7;
            if (0xff < uVar4) {
               uVar4 = (int)~uVar4 >> 0x1f & 0xff;
            }

            *(char*)( lVar10 + 2 + lVar5 * 4 ) = (char)uVar4;
            *(undefined1*)( lVar10 + 3 + lVar5 * 4 ) = 0xff;
            lVar5 = lVar5 + 1;
         }
 while ( lVar5 != 8 );
         lVar10 = lVar10 + 0x20;
         lVar11 = lVar11 + 0x20;
         lVar12 = lVar12 + 0x100;
         lVar13 = lVar13 + 0x100;
      }
 while ( lVar10 != lVar1 );
      return;
   }

   return;
}
/* jpgd::jpeg_decoder::H1V2ConvertFiltered() */void jpgd::jpeg_decoder::H1V2ConvertFiltered(jpeg_decoder *this) {
   byte bVar1;
   uint uVar2;
   int iVar3;
   uint uVar4;
   uint uVar5;
   int iVar6;
   uint uVar7;
   uint uVar8;
   long lVar9;
   undefined1 *puVar10;
   uint uVar11;
   uint uVar12;
   long lVar13;
   long lVar14;
   int iVar15;
   long local_38;
   iVar15 = 3;
   iVar3 = *(int*)( this + 0xdc );
   uVar7 = iVar3 - *(int*)( this + 0x284 );
   uVar11 = ( iVar3 >> 1 ) - 1;
   if (iVar3 == 1) {
      uVar11 = 0;
   }

   uVar8 = uVar7 & 1;
   if (uVar8 == 0) {
      iVar15 = 1;
      uVar8 = 3;
   }

   lVar14 = *(long*)( this + 0x24a8 );
   uVar2 = (int)( uVar7 - 1 ) >> 1;
   uVar5 = uVar2 + 1;
   if ((int)uVar11 < (int)( uVar2 + 1 )) {
      uVar5 = uVar11;
   }

   lVar9 = lVar14;
   local_38 = lVar14;
   if (( ( ( -1 < (int)uVar2 ) && ( 1 < *(int*)( this + 0x284 ) ) ) && ( ( 0x8001UL >> ( uVar7 & 0xf ) & 1 ) != 0 ) ) && ( lVar9 = *(long*)( this + 0x24b0 )(uVar7 & 0xf) == 0xf )) {
      local_38 = lVar9;
   }

   if (0 < *(int*)( this + 0xd8 )) {
      uVar11 = 0;
      puVar10 = *(undefined1**)( this + 0x34b8 );
      while (true) {
         iVar3 = ( (int)uVar11 >> 3 ) * 0x100 + ( uVar11 & 7 );
         bVar1 = *(byte*)( local_38 + (int)( ( uVar7 & 8 ) * 8 + ( uVar7 & 7 ) * 8 + iVar3 ) );
         iVar6 = ( uVar2 & 7 ) * 8 + 0x80 + iVar3;
         iVar3 = iVar3 + ( uVar5 & 7 ) * 8 + 0x80;
         lVar13 = (long)( (int)( ( uint ) * (byte*)( lVar9 + iVar6 ) * iVar15 + 2 + *(byte*)( lVar14 + iVar3 ) * uVar8 ) >> 2 );
         lVar14 = (long)( (int)( ( uint ) * (byte*)( lVar9 + ( iVar6 + 0x40 ) ) * iVar15 + 2 + *(byte*)( lVar14 + ( iVar3 + 0x40 ) ) * uVar8 ) >> 2 );
         iVar3 = *(int*)( this + lVar13 * 4 + 0x28b8 );
         uVar12 = *(int*)( this + lVar14 * 4 + 0x24b8 ) + (uint)bVar1;
         if (0xff < uVar12) {
            uVar12 = (int)~uVar12 >> 0x1f & 0xff;
         }

         uVar4 = ( *(int*)( this + lVar13 * 4 + 0x30b8 ) + *(int*)( this + lVar14 * 4 + 0x2cb8 ) >> 0x10 ) + (uint)bVar1;
         *puVar10 = (char)uVar12;
         if (0xff < uVar4) {
            uVar4 = (int)~uVar4 >> 0x1f & 0xff;
         }

         uVar12 = (uint)bVar1 + iVar3;
         puVar10[1] = (char)uVar4;
         if (0xff < uVar12) {
            uVar12 = (int)~uVar12 >> 0x1f & 0xff;
         }

         puVar10[2] = (char)uVar12;
         uVar11 = uVar11 + 1;
         puVar10[3] = 0xff;
         if (*(int*)( this + 0xd8 ) <= (int)uVar11) break;
         lVar14 = *(long*)( this + 0x24a8 );
         puVar10 = puVar10 + 4;
      }
;
   }

   return;
}
/* jpgd::jpeg_decoder::H2V2Convert() */void jpgd::jpeg_decoder::H2V2Convert(jpeg_decoder *this) {
   byte bVar1;
   int iVar2;
   int iVar3;
   uint uVar4;
   undefined1 *puVar5;
   long lVar6;
   int iVar7;
   long lVar8;
   long lVar9;
   undefined1 *puVar10;
   undefined1 *puVar11;
   undefined1 *puVar12;
   undefined1 *puVar13;
   uint uVar14;
   ulong uVar15;
   long lVar16;
   undefined1 *puVar17;
   long lVar18;
   undefined1 *puVar19;
   lVar6 = *(long*)( this + 0x24a8 );
   uVar4 = *(int*)( this + 0x248 ) - *(int*)( this + 0x288 );
   puVar10 = *(undefined1**)( this + 0x34b8 );
   puVar12 = *(undefined1**)( this + 0x34c0 );
   if ((int)uVar4 < 8) {
      lVar18 = (int)( uVar4 * 8 ) + lVar6;
   }
 else {
      lVar18 = lVar6 + 0x80 + ( ulong )(uVar4 & 7) * 8;
   }

   lVar6 = lVar6 + 0x100 + (long)( ( (int)uVar4 >> 1 ) << 3 );
   if (0 < (int)*(uint*)( this + 0x245c )) {
      lVar18 = lVar18 + 0x80;
      puVar5 = puVar10 + ( ulong ) * (uint*)( this + 0x245c ) * 0x40;
      do {
         lVar8 = lVar18 + -0x80;
         lVar9 = lVar6;
         puVar17 = puVar10;
         puVar19 = puVar12;
         do {
            lVar16 = 0;
            puVar11 = puVar17;
            puVar13 = puVar19;
            do {
               uVar15 = ( ulong ) * (byte*)( lVar9 + 0x40 + lVar16 );
               iVar2 = *(int*)( this + uVar15 * 4 + 0x24b8 );
               uVar14 = ( uint ) * (byte*)( lVar8 + lVar16 * 2 );
               iVar3 = *(int*)( this + ( ulong ) * (byte*)( lVar9 + lVar16 ) * 4 + 0x28b8 );
               iVar7 = *(int*)( this + ( ulong ) * (byte*)( lVar9 + lVar16 ) * 4 + 0x30b8 ) + *(int*)( this + uVar15 * 4 + 0x2cb8 ) >> 0x10;
               uVar4 = iVar2 + uVar14;
               if (0xff < uVar4) {
                  uVar4 = (int)~uVar4 >> 0x1f & 0xff;
               }

               *puVar11 = (char)uVar4;
               uVar4 = iVar7 + uVar14;
               if (0xff < uVar4) {
                  uVar4 = (int)~uVar4 >> 0x1f & 0xff;
               }

               uVar14 = uVar14 + iVar3;
               puVar11[1] = (char)uVar4;
               if (0xff < uVar14) {
                  uVar14 = (int)~uVar14 >> 0x1f & 0xff;
               }

               puVar11[2] = (char)uVar14;
               puVar11[3] = 0xff;
               uVar14 = ( uint ) * (byte*)( lVar8 + 1 + lVar16 * 2 );
               uVar4 = iVar2 + uVar14;
               if (0xff < uVar4) {
                  uVar4 = (int)~uVar4 >> 0x1f & 0xff;
               }

               puVar11[4] = (char)uVar4;
               uVar4 = iVar7 + uVar14;
               if (0xff < uVar4) {
                  uVar4 = (int)~uVar4 >> 0x1f & 0xff;
               }

               uVar14 = uVar14 + iVar3;
               puVar11[5] = (char)uVar4;
               if (0xff < uVar14) {
                  uVar14 = (int)~uVar14 >> 0x1f & 0xff;
               }

               puVar11[6] = (char)uVar14;
               puVar11[7] = 0xff;
               uVar14 = ( uint ) * (byte*)( lVar8 + 8 + lVar16 * 2 );
               uVar4 = iVar2 + uVar14;
               if (0xff < uVar4) {
                  uVar4 = (int)~uVar4 >> 0x1f & 0xff;
               }

               *puVar13 = (char)uVar4;
               uVar4 = iVar7 + uVar14;
               if (0xff < uVar4) {
                  uVar4 = (int)~uVar4 >> 0x1f & 0xff;
               }

               uVar14 = uVar14 + iVar3;
               puVar13[1] = (char)uVar4;
               if (0xff < uVar14) {
                  uVar14 = (int)~uVar14 >> 0x1f & 0xff;
               }

               puVar13[2] = (char)uVar14;
               puVar13[3] = 0xff;
               bVar1 = *(byte*)( lVar8 + 9 + lVar16 * 2 );
               uVar4 = iVar2 + (uint)bVar1;
               if (0xff < uVar4) {
                  uVar4 = (int)~uVar4 >> 0x1f & 0xff;
               }

               uVar14 = iVar7 + (uint)bVar1;
               puVar13[4] = (char)uVar4;
               if (0xff < uVar14) {
                  uVar14 = (int)~uVar14 >> 0x1f & 0xff;
               }

               uVar4 = iVar3 + (uint)bVar1;
               puVar13[5] = (char)uVar14;
               if (0xff < uVar4) {
                  uVar4 = (int)~uVar4 >> 0x1f & 0xff;
               }

               lVar16 = lVar16 + 1;
               puVar13[6] = (char)uVar4;
               puVar11 = puVar11 + 8;
               puVar13[7] = 0xff;
               puVar13 = puVar13 + 8;
            }
 while ( lVar16 != 4 );
            lVar8 = lVar8 + 0x40;
            puVar17 = puVar17 + 0x20;
            puVar19 = puVar19 + 0x20;
            lVar9 = lVar9 + 4;
         }
 while ( lVar8 != lVar18 );
         lVar18 = lVar18 + 0x180;
         puVar10 = puVar10 + 0x40;
         lVar6 = lVar6 + 0x180;
         puVar12 = puVar12 + 0x40;
      }
 while ( puVar5 != puVar10 );
   }

   return;
}
/* jpgd::jpeg_decoder::H2V2ConvertFiltered() */undefined8 jpgd::jpeg_decoder::H2V2ConvertFiltered(jpeg_decoder *this) {
   int iVar1;
   long lVar2;
   byte bVar3;
   byte bVar4;
   byte bVar5;
   int iVar6;
   int iVar7;
   long lVar8;
   uint uVar9;
   int iVar10;
   int iVar11;
   undefined1 *puVar12;
   uint uVar13;
   int iVar14;
   int iVar15;
   long lVar16;
   ulong uVar17;
   int iVar18;
   undefined1 *puVar19;
   uint uVar20;
   long lVar21;
   uint uVar22;
   uint uVar23;
   long lVar24;
   uint uVar25;
   uint uVar26;
   uint uVar27;
   undefined1 *puVar28;
   undefined1 *puVar29;
   uint uVar30;
   long lVar31;
   uint uVar32;
   long local_68;
   uint local_58;
   int local_4c;
   iVar6 = *(int*)( this + 0xdc );
   uVar25 = iVar6 - *(int*)( this + 0x284 );
   uVar13 = uVar25 & 0xf;
   uVar22 = ( iVar6 >> 1 ) - 1;
   if (iVar6 == 1) {
      uVar22 = 0;
   }

   uVar9 = (int)( uVar25 - 1 ) >> 1;
   if ((int)( uVar9 + 1 ) <= (int)uVar22) {
      uVar22 = uVar9 + 1;
   }

   lVar21 = *(long*)( this + 0x24a8 );
   lVar31 = lVar21;
   local_68 = lVar21;
   if (( ( ( -1 < (int)uVar9 ) && ( ( 0x8001UL >> uVar13 & 1 ) != 0 ) ) && ( 1 < *(int*)( this + 0x284 ) ) ) && ( lVar31 = uVar13 == 0xf )) {
      local_68 = lVar31;
   }

   iVar6 = ( uVar9 & 7 ) * 8 + 0x100;
   iVar18 = ( uVar25 & 8 ) * 0x10 + ( uVar25 & 7 ) * 8;
   iVar1 = ( uVar22 & 7 ) * 8 + 0x100;
   iVar11 = *(int*)( this + 0xd8 );
   if (iVar11 == 1) {
      if (uVar13 - 1 < 0xe) {
         local_58 = 0;
         puVar19 = *(undefined1**)( this + 0x34c0 );
         local_4c = ( uVar13 + 1 & 8 ) * 0x10 + ( uVar13 + 1 & 7 ) * 8;
         goto LAB_0010654a;
      }

      local_58 = 0;
   }
 else {
      local_58 = ( iVar11 >> 1 ) - 1;
      if (uVar13 - 1 < 0xe) {
         puVar19 = *(undefined1**)( this + 0x34c0 );
         local_4c = ( uVar13 + 1 & 8 ) * 0x10 + ( uVar13 + 1 & 7 ) * 8;
         if (iVar11 < 1) {
            return 2;
         }

         LAB_0010654a:uVar22 = 0;
         lVar8 = ( ulong )(uVar25 & 1) * 2;
         lVar2 = ( ulong )(uVar13 + 1 & 1) * 2;
         puVar29 = *(undefined1**)( this + 0x34b8 );
         while (true) {
            uVar25 = (int)( uVar22 - 1 ) >> 1;
            iVar11 = ( uVar22 * 8 & 0x40 ) + ( (int)uVar22 >> 4 ) * 0x180 + ( uVar22 & 7 );
            bVar3 = *(byte*)( local_68 + ( iVar18 + iVar11 ) );
            bVar4 = *(byte*)( local_68 + ( iVar11 + local_4c ) );
            uVar13 = uVar25 + 1;
            if ((int)local_58 < (int)( uVar25 + 1 )) {
               uVar13 = local_58;
            }

            uVar9 = 0;
            if (-1 < (int)uVar25) {
               uVar9 = uVar25;
            }

            iVar15 = ( uVar9 & 7 ) + ( (int)uVar9 >> 3 ) * 0x180;
            iVar11 = iVar6 + iVar15;
            uVar32 = ( uint ) * (byte*)( lVar31 + iVar11 );
            iVar15 = iVar15 + iVar1;
            uVar26 = ( uint ) * (byte*)( lVar31 + ( iVar11 + 0x40 ) );
            uVar27 = ( uint ) * (byte*)( lVar21 + iVar15 );
            uVar25 = ( uint ) * (byte*)( lVar21 + ( iVar15 + 0x40 ) );
            iVar15 = ( (int)uVar13 >> 3 ) * 0x180 + ( uVar13 & 7 );
            iVar11 = iVar6 + iVar15;
            uVar23 = ( uint ) * (byte*)( lVar31 + iVar11 );
            iVar15 = iVar15 + iVar1;
            uVar30 = ( uint ) * (byte*)( lVar31 + ( iVar11 + 0x40 ) );
            bVar5 = *(byte*)( lVar21 + iVar15 );
            uVar17 = ( ulong )(uVar22 & 1);
            uVar9 = ( uint ) * (byte*)( lVar21 + ( iVar15 + 0x40 ) );
            lVar21 = ( lVar8 + uVar17 ) * 4;
            lVar16 = (long)( (int)( uVar23 * (byte)::s_muls[lVar21 + 2] + uVar27 * (byte)::s_muls[lVar21 + 1] + uVar32 * (byte)::s_muls[( lVar8 + uVar17 ) * 4] + 8 + (uint)(byte)::s_muls[lVar21 + 3] * (uint)bVar5 ) >> 4 );
            iVar11 = *(int*)( this + lVar16 * 4 + 0x28b8 );
            lVar21 = (long)( (int)( (byte)::s_muls[lVar21 + 2] * uVar30 + (byte)::s_muls[lVar21 + 1] * uVar25 + (byte)::s_muls[( lVar8 + uVar17 ) * 4] * uVar26 + 8 + (byte)::s_muls[lVar21 + 3] * uVar9 ) >> 4 );
            uVar13 = *(int*)( this + lVar21 * 4 + 0x24b8 ) + (uint)bVar3;
            if (0xff < uVar13) {
               uVar13 = (int)~uVar13 >> 0x1f & 0xff;
            }

            uVar20 = ( *(int*)( this + lVar16 * 4 + 0x30b8 ) + *(int*)( this + lVar21 * 4 + 0x2cb8 ) >> 0x10 ) + (uint)bVar3;
            *puVar29 = (char)uVar13;
            if (0xff < uVar20) {
               uVar20 = (int)~uVar20 >> 0x1f & 0xff;
            }

            uVar13 = (uint)bVar3 + iVar11;
            puVar29[1] = (char)uVar20;
            if (0xff < uVar13) {
               uVar13 = (int)~uVar13 >> 0x1f & 0xff;
            }

            puVar29[2] = (char)uVar13;
            puVar28 = puVar29 + 4;
            puVar29[3] = 0xff;
            lVar16 = uVar17 + lVar2;
            lVar21 = lVar16 * 4;
            lVar24 = (long)( (int)( uVar23 * (byte)::s_muls[lVar21 + 2] + uVar27 * (byte)::s_muls[lVar21 + 1] + uVar32 * (byte)::s_muls[lVar16 * 4] + 8 + (uint)(byte)::s_muls[lVar21 + 3] * (uint)bVar5 ) >> 4 );
            iVar11 = *(int*)( this + lVar24 * 4 + 0x28b8 );
            lVar21 = (long)( (int)( (byte)::s_muls[lVar21 + 2] * uVar30 + (byte)::s_muls[lVar21 + 1] * uVar25 + (byte)::s_muls[lVar16 * 4] * uVar26 + 8 + (byte)::s_muls[lVar21 + 3] * uVar9 ) >> 4 );
            uVar13 = *(int*)( this + lVar21 * 4 + 0x24b8 ) + (uint)bVar4;
            if (0xff < uVar13) {
               uVar13 = (int)~uVar13 >> 0x1f & 0xff;
            }

            uVar20 = ( *(int*)( this + lVar24 * 4 + 0x30b8 ) + *(int*)( this + lVar21 * 4 + 0x2cb8 ) >> 0x10 ) + (uint)bVar4;
            *puVar19 = (char)uVar13;
            if (0xff < uVar20) {
               uVar20 = (int)~uVar20 >> 0x1f & 0xff;
            }

            uVar13 = (uint)bVar4 + iVar11;
            puVar19[1] = (char)uVar20;
            if (0xff < uVar13) {
               uVar13 = (int)~uVar13 >> 0x1f & 0xff;
            }

            puVar19[2] = (char)uVar13;
            puVar12 = puVar19 + 4;
            puVar19[3] = 0xff;
            iVar11 = *(int*)( this + 0xd8 );
            if (( ( uVar22 & 1 ) != 0 ) && ( (int)uVar22 < iVar11 + -1 )) {
               uVar22 = uVar22 + 1;
               iVar11 = ( uVar22 * 8 & 0x40 ) + ( (int)uVar22 >> 4 ) * 0x180 + ( uVar22 & 7 );
               bVar3 = *(byte*)( local_68 + ( iVar18 + iVar11 ) );
               bVar4 = *(byte*)( local_68 + ( iVar11 + local_4c ) );
               lVar16 = lVar8 + ( ulong )(uVar22 & 1);
               lVar21 = lVar16 * 4;
               lVar24 = (long)( (int)( uVar23 * (byte)::s_muls[lVar21 + 2] + uVar27 * (byte)::s_muls[lVar21 + 1] + uVar32 * (byte)::s_muls[lVar16 * 4] + 8 + (uint)(byte)::s_muls[lVar21 + 3] * (uint)bVar5 ) >> 4 );
               iVar11 = *(int*)( this + lVar24 * 4 + 0x28b8 );
               lVar21 = (long)( (int)( (byte)::s_muls[lVar21 + 2] * uVar30 + (byte)::s_muls[lVar21 + 1] * uVar25 + (byte)::s_muls[lVar16 * 4] * uVar26 + 8 + (byte)::s_muls[lVar21 + 3] * uVar9 ) >> 4 );
               uVar13 = *(int*)( this + lVar21 * 4 + 0x24b8 ) + (uint)bVar3;
               if (0xff < uVar13) {
                  uVar13 = (int)~uVar13 >> 0x1f & 0xff;
               }

               uVar20 = ( *(int*)( this + lVar24 * 4 + 0x30b8 ) + *(int*)( this + lVar21 * 4 + 0x2cb8 ) >> 0x10 ) + (uint)bVar3;
               puVar29[4] = (char)uVar13;
               if (0xff < uVar20) {
                  uVar20 = (int)~uVar20 >> 0x1f & 0xff;
               }

               uVar13 = (uint)bVar3 + iVar11;
               puVar29[5] = (char)uVar20;
               if (0xff < uVar13) {
                  uVar13 = (int)~uVar13 >> 0x1f & 0xff;
               }

               puVar29[6] = (char)uVar13;
               puVar28 = puVar29 + 8;
               puVar29[7] = 0xff;
               lVar16 = lVar2 + ( ulong )(uVar22 & 1);
               lVar21 = lVar16 * 4;
               lVar24 = (long)( (int)( uVar23 * (byte)::s_muls[lVar21 + 2] + uVar27 * (byte)::s_muls[lVar21 + 1] + uVar32 * (byte)::s_muls[lVar16 * 4] + 8 + (uint)bVar5 * (uint)(byte)::s_muls[lVar21 + 3] ) >> 4 );
               iVar11 = *(int*)( this + lVar24 * 4 + 0x28b8 );
               lVar21 = (long)( (int)( (byte)::s_muls[lVar16 * 4] * uVar26 + (byte)::s_muls[lVar21 + 1] * uVar25 + (byte)::s_muls[lVar21 + 2] * uVar30 + 8 + (byte)::s_muls[lVar21 + 3] * uVar9 ) >> 4 );
               uVar13 = *(int*)( this + lVar21 * 4 + 0x24b8 ) + (uint)bVar4;
               if (0xff < uVar13) {
                  uVar13 = (int)~uVar13 >> 0x1f & 0xff;
               }

               uVar25 = ( *(int*)( this + lVar24 * 4 + 0x30b8 ) + *(int*)( this + lVar21 * 4 + 0x2cb8 ) >> 0x10 ) + (uint)bVar4;
               puVar19[4] = (char)uVar13;
               if (0xff < uVar25) {
                  uVar25 = (int)~uVar25 >> 0x1f & 0xff;
               }

               uVar13 = (uint)bVar4 + iVar11;
               puVar19[5] = (char)uVar25;
               if (0xff < uVar13) {
                  uVar13 = (int)~uVar13 >> 0x1f & 0xff;
               }

               puVar19[6] = (char)uVar13;
               puVar12 = puVar19 + 8;
               puVar19[7] = 0xff;
               iVar11 = *(int*)( this + 0xd8 );
            }

            uVar22 = uVar22 + 1;
            if (iVar11 <= (int)uVar22) break;
            lVar21 = *(long*)( this + 0x24a8 );
            puVar19 = puVar12;
            puVar29 = puVar28;
         }
;
         return 2;
      }

      if (iVar11 < 1) {
         return 1;
      }

   }

   uVar22 = 0;
   lVar8 = ( ulong )(uVar25 & 1) * 2;
   puVar19 = *(undefined1**)( this + 0x34b8 );
   while (true) {
      bVar3 = *(byte*)( local_68 + (int)( ( (int)uVar22 >> 4 ) * 0x180 + ( uVar22 & 7 ) + iVar18 + ( uVar22 * 8 & 0x40 ) ) );
      uVar25 = (int)( uVar22 - 1 ) >> 1;
      uVar13 = uVar25 + 1;
      if ((int)local_58 < (int)( uVar25 + 1 )) {
         uVar13 = local_58;
      }

      if ((int)uVar25 < 0) {
         uVar25 = 0;
      }

      iVar10 = ( uVar25 & 7 ) + ( (int)uVar25 >> 3 ) * 0x180;
      iVar11 = iVar6 + iVar10;
      iVar10 = iVar10 + iVar1;
      iVar14 = ( uVar13 & 7 ) + ( (int)uVar13 >> 3 ) * 0x180;
      iVar15 = iVar6 + iVar14;
      iVar14 = iVar1 + iVar14;
      lVar2 = ( ( ulong )(uVar22 & 1) + lVar8 ) * 4;
      lVar16 = (long)( (int)( ( uint ) * (byte*)( lVar31 + iVar11 ) * (uint)(byte)::s_muls[( ( ulong )(uVar22 & 1) + lVar8 ) * 4] + ( uint ) * (byte*)( lVar21 + iVar10 ) * (uint)(byte)::s_muls[lVar2 + 1] + ( uint ) * (byte*)( lVar31 + iVar15 ) * (uint)(byte)::s_muls[lVar2 + 2] + 8 + ( uint ) * (byte*)( lVar21 + iVar14 ) * (uint)(byte)::s_muls[lVar2 + 3] ) >> 4 );
      iVar7 = *(int*)( this + lVar16 * 4 + 0x28b8 );
      lVar21 = (long)( (int)( ( uint ) * (byte*)( lVar31 + ( iVar15 + 0x40 ) ) * (uint)(byte)::s_muls[lVar2 + 2] + ( uint ) * (byte*)( lVar21 + ( iVar10 + 0x40 ) ) * (uint)(byte)::s_muls[lVar2 + 1] + ( uint ) * (byte*)( lVar31 + ( iVar11 + 0x40 ) ) * (uint)(byte)::s_muls[( ( ulong )(uVar22 & 1) + lVar8 ) * 4] + 8 + ( uint ) * (byte*)( lVar21 + ( iVar14 + 0x40 ) ) * (uint)(byte)::s_muls[lVar2 + 3] ) >> 4 );
      uVar13 = *(int*)( this + lVar21 * 4 + 0x24b8 ) + (uint)bVar3;
      if (0xff < uVar13) {
         uVar13 = (int)~uVar13 >> 0x1f & 0xff;
      }

      uVar25 = ( *(int*)( this + lVar16 * 4 + 0x30b8 ) + *(int*)( this + lVar21 * 4 + 0x2cb8 ) >> 0x10 ) + (uint)bVar3;
      *puVar19 = (char)uVar13;
      if (0xff < uVar25) {
         uVar25 = (int)~uVar25 >> 0x1f & 0xff;
      }

      uVar13 = (uint)bVar3 + iVar7;
      puVar19[1] = (char)uVar25;
      if (0xff < uVar13) {
         uVar13 = (int)~uVar13 >> 0x1f & 0xff;
      }

      puVar19[2] = (char)uVar13;
      uVar22 = uVar22 + 1;
      puVar19[3] = 0xff;
      if (*(int*)( this + 0xd8 ) <= (int)uVar22) break;
      lVar21 = *(long*)( this + 0x24a8 );
      puVar19 = puVar19 + 4;
   }
;
   return 1;
}
/* jpgd::jpeg_decoder::gray_convert() */void jpgd::jpeg_decoder::gray_convert(jpeg_decoder *this) {
   uint uVar1;
   undefined4 *puVar2;
   undefined4 *puVar3;
   undefined4 *puVar4;
   undefined4 *puVar5;
   uVar1 = *(uint*)( this + 0x245c );
   puVar2 = *(undefined4**)( this + 0x34b8 );
   if (0 < (int)uVar1) {
      puVar3 = puVar2;
      puVar5 = (undefined4*)( (long)( ( *(int*)( this + 0x248 ) - *(int*)( this + 0x288 ) ) * 8 ) + *(long*)( this + 0x24a8 ) );
      do {
         puVar4 = puVar3 + 2;
         *puVar3 = *puVar5;
         puVar3[1] = puVar5[1];
         puVar3 = puVar4;
         puVar5 = puVar5 + 0x10;
      }
 while ( puVar4 != puVar2 + (ulong)uVar1 * 2 );
   }

   return;
}
/* jpgd::jpeg_decoder::find_eoi() */void jpgd::jpeg_decoder::find_eoi(jpeg_decoder *this) {
   byte bVar1;
   byte *pbVar2;
   char cVar3;
   int iVar4;
   uint uVar5;
   byte *pbVar6;
   uint uVar7;
   if (*(int*)( this + 0xe8 ) != 0) goto LAB_00106bd7;
   iVar4 = *(int*)( this + 0x340 );
   *(int*)( this + 0x244c ) = *(int*)( this + 0x244c ) << 0x10;
   *(undefined4*)( this + 0x2448 ) = 0;
   if (iVar4 == 0) {
      prep_in_buffer(this);
      iVar4 = *(int*)( this + 0x340 );
      if (iVar4 != 0) goto LAB_00106c0f;
      uVar7 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar7 ^ 1;
      uVar7 = ( -(uint)(uVar7 == 0) & 0x2600 ) + 0xd900;
      LAB_00106d45:prep_in_buffer(this);
      iVar4 = *(int*)( this + 0x340 );
      if (iVar4 != 0) {
         pbVar6 = *(byte**)( this + 0x338 );
         goto LAB_00106c38;
      }

      uVar5 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar5 ^ 1;
      uVar5 = ( -(uint)(uVar5 == 0) & 0x26 ) + 0xd9;
   }
 else {
      LAB_00106c0f:pbVar2 = *(byte**)( this + 0x338 );
      iVar4 = iVar4 + -1;
      pbVar6 = pbVar2 + 1;
      *(byte**)( this + 0x338 ) = pbVar6;
      bVar1 = *pbVar2;
      *(int*)( this + 0x340 ) = iVar4;
      uVar7 = (uint)bVar1 << 8;
      if (iVar4 == 0) goto LAB_00106d45;
      LAB_00106c38:*(byte**)( this + 0x338 ) = pbVar6 + 1;
      uVar5 = ( uint ) * pbVar6;
      *(int*)( this + 0x340 ) = iVar4 + -1;
   }

   cVar3 = (char)*(int*)( this + 0x2448 );
   iVar4 = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar5 | uVar7 ) << ( -cVar3 & 0x1fU );
   if (*(int*)( this + 0x2448 ) < 1) {
      *(int*)( this + 0x244c ) = iVar4 << ( cVar3 + 0x10U & 0x1f );
      iVar4 = *(int*)( this + 0x340 );
      if (iVar4 == 0) {
         prep_in_buffer(this);
         iVar4 = *(int*)( this + 0x340 );
         if (iVar4 != 0) goto LAB_00106ca1;
         uVar7 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar7 ^ 1;
         uVar7 = ( -(uint)(uVar7 == 0) & 0x2600 ) + 0xd900;
         LAB_00106da0:prep_in_buffer(this);
         iVar4 = *(int*)( this + 0x340 );
         if (iVar4 != 0) {
            pbVar6 = *(byte**)( this + 0x338 );
            goto LAB_00106cca;
         }

         uVar5 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar5 ^ 1;
         uVar5 = ( -(uint)(uVar5 == 0) & 0x26 ) + 0xd9;
      }
 else {
         LAB_00106ca1:pbVar2 = *(byte**)( this + 0x338 );
         iVar4 = iVar4 + -1;
         pbVar6 = pbVar2 + 1;
         *(byte**)( this + 0x338 ) = pbVar6;
         bVar1 = *pbVar2;
         *(int*)( this + 0x340 ) = iVar4;
         uVar7 = (uint)bVar1 << 8;
         if (iVar4 == 0) goto LAB_00106da0;
         LAB_00106cca:*(byte**)( this + 0x338 ) = pbVar6 + 1;
         uVar5 = ( uint ) * pbVar6;
         *(int*)( this + 0x340 ) = iVar4 + -1;
      }

      iVar4 = *(int*)( this + 0x2448 );
      *(int*)( this + 0x2448 ) = iVar4 + 0x10;
      *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar5 | uVar7 ) << ( -(char)iVar4 & 0x1fU );
   }
 else {
      *(int*)( this + 0x244c ) = iVar4 << 0x10;
   }

   process_markers(this);
   LAB_00106bd7:*(int*)( this + 0x34cc ) = *(int*)( this + 0x34cc ) - *(int*)( this + 0x340 );
   return;
}
/* jpgd::jpeg_decoder::make_huff_table(int, jpgd::jpeg_decoder::huff_tables*) */void jpgd::jpeg_decoder::make_huff_table(jpeg_decoder *this, int param_1, huff_tables *param_2) {
   huff_tables hVar1;
   byte bVar2;
   uint uVar3;
   int iVar4;
   uint uVar5;
   ulong uVar6;
   int iVar7;
   uint uVar8;
   long lVar9;
   uint uVar10;
   undefined8 *puVar11;
   uint uVar12;
   long lVar13;
   uint uVar14;
   huff_tables *phVar15;
   int iVar16;
   long lVar17;
   long in_FS_OFFSET;
   uint local_55c[261];
   huff_tables local_148[264];
   long local_40;
   lVar9 = (long)param_1;
   lVar13 = 1;
   lVar17 = *(long*)( this + lVar9 * 8 + 0xf8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_2 = ( huff_tables )(this[lVar9 + 0xec] != (jpeg_decoder)0x0);
   iVar7 = 0;
   do {
      if (*(byte*)( lVar17 + lVar13 ) != 0) {
         if (0x100 < iVar7) goto LAB_0010720d;
         iVar4 = ( uint ) * (byte*)( lVar17 + lVar13 ) + iVar7;
         phVar15 = local_148 + iVar7;
         while (true) {
            iVar7 = iVar7 + 1;
            *phVar15 = SUB81(lVar13, 0);
            if (iVar4 == iVar7) break;
            phVar15 = phVar15 + 1;
            if (iVar7 == 0x101) goto LAB_0010720d;
         }
;
      }

      lVar13 = lVar13 + 1;
   }
 while ( lVar13 != 0x11 );
   uVar6 = 0;
   local_148[iVar7] = (huff_tables)0x0;
   uVar10 = (uint)(byte)local_148[0];
   uVar3 = 0;
   uVar14 = (uint)(byte)local_148[0];
   if (local_148[0] != (huff_tables)0x0) {
      do {
         if (uVar10 == uVar14) {
            do {
               iVar4 = (int)uVar6;
               if (0x100 < iVar4) goto LAB_0010720d;
               iVar16 = uVar3 + 0x101;
               uVar6 = ( ulong )(iVar4 + 1);
               while (true) {
                  hVar1 = local_148[uVar6];
                  uVar10 = (uint)(byte)hVar1;
                  local_55c[uVar6] = uVar3;
                  uVar3 = uVar3 + 1;
                  if (uVar10 != uVar14) break;
                  uVar6 = uVar6 + 1;
                  if (iVar16 - iVar4 == uVar3) goto LAB_0010720d;
               }
;
               uVar3 = uVar3 * 2;
               uVar14 = uVar14 + 1;
               if (hVar1 == (huff_tables)0x0) goto LAB_00106f49;
               uVar6 = uVar6 & 0xffffffff;
            }
 while ( uVar10 == uVar14 );
         }

         uVar3 = uVar3 * 2;
         uVar14 = uVar14 + 1;
      }
 while ( true );
   }

   LAB_00106f49:iVar4 = (int)param_2;
   *(undefined8*)( param_2 + 4 ) = 0;
   *(undefined8*)( param_2 + 0x3fc ) = 0;
   puVar11 = (undefined8*)( ( ulong )(param_2 + 0xc) & 0xfffffffffffffff8 );
   for (uVar6 = ( ulong )(( iVar4 - (int)(undefined8*)( ( ulong )(param_2 + 0xc) & 0xfffffffffffffff8 ) ) + 0x404U >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
   }

   *(undefined8*)( param_2 + 0x404 ) = 0;
   *(undefined8*)( param_2 + 0x7fc ) = 0;
   puVar11 = (undefined8*)( ( ulong )(param_2 + 0x40c) & 0xfffffffffffffff8 );
   for (uVar6 = ( ulong )(( iVar4 - (int)(undefined8*)( ( ulong )(param_2 + 0x40c) & 0xfffffffffffffff8 ) ) + 0x804U >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
   }

   *(undefined8*)( param_2 + 0x904 ) = 0;
   *(undefined8*)( param_2 + 0x10fc ) = 0;
   puVar11 = (undefined8*)( ( ulong )(param_2 + 0x90c) & 0xfffffffffffffff8 );
   for (uVar6 = ( ulong )(( iVar4 - (int)(undefined8*)( ( ulong )(param_2 + 0x90c) & 0xfffffffffffffff8 ) ) + 0x1104U >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
   }

   *(undefined8*)( param_2 + 0x804 ) = 0;
   *(undefined8*)( param_2 + 0x8fc ) = 0;
   puVar11 = (undefined8*)( ( ulong )(param_2 + 0x80c) & 0xfffffffffffffff8 );
   for (uVar6 = ( ulong )(( iVar4 - (int)(undefined8*)( ( ulong )(param_2 + 0x80c) & 0xfffffffffffffff8 ) ) + 0x904U >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
   }

   if (0 < iVar7) {
      lVar17 = 0;
      uVar3 = 0xffffffff;
      do {
         hVar1 = local_148[lVar17];
         uVar10 = (uint)(byte)hVar1;
         bVar2 = *(byte*)( *(long*)( this + ( lVar9 + 0x26 ) * 8 + 8 ) + lVar17 );
         uVar14 = local_55c[lVar17 + 1];
         param_2[(ulong)bVar2 + 0x804] = hVar1;
         if ((byte)hVar1 < 9) {
            uVar14 = uVar14 << ( 8U - (char)hVar1 & 0x1f );
            if (0xff < uVar14) {
               LAB_0010720d:/* WARNING: Subroutine does not return */stop_decoding(this, 0xffffff1a);
            }

            uVar8 = ( 1 << ( 8U - (char)hVar1 & 0x1f ) ) + uVar14;
            uVar10 = ( bVar2 & 0xf ) + (uint)(byte)hVar1;
            phVar15 = param_2 + (ulong)uVar14 * 4;
            while (true) {
               uVar12 = (uint)CONCAT11(hVar1, bVar2);
               if (( ( bVar2 & 0xf ) != 0 ) && ( uVar10 < 9 )) {
                  uVar12 = ( uVar14 >> ( 8U - (char)uVar10 & 0x1f ) & ( 1 << ( bVar2 & 0xf ) ) - 1U ) << 0x10 | (uint)bVar2 | uVar10 * 0x100 | 0x8000;
               }

               uVar14 = uVar14 + 1;
               *(uint*)( phVar15 + 4 ) = (uint)bVar2;
               *(uint*)( phVar15 + 0x404 ) = uVar12;
               local_55c[0] = uVar3;
               if (uVar8 == uVar14) break;
               phVar15 = phVar15 + 4;
               if (uVar14 == 0x100) goto LAB_0010720d;
            }
;
         }
 else {
            uVar5 = uVar14 >> ( (char)hVar1 - 8U & 0x1f ) & 0xff;
            uVar8 = *(uint*)( param_2 + (ulong)uVar5 * 4 + 4 );
            uVar12 = uVar3;
            if (*(uint*)( param_2 + (ulong)uVar5 * 4 + 4 ) == 0) {
               *(uint*)( param_2 + (ulong)uVar5 * 4 + 4 ) = uVar3;
               *(uint*)( param_2 + (ulong)uVar5 * 4 + 0x404 ) = uVar3;
               uVar12 = uVar3 - 2;
               uVar8 = uVar3;
            }

            uVar14 = uVar14 << ( 0x18U - (char)hVar1 & 0x1f );
            if (hVar1 != (huff_tables)0x9) {
               do {
                  uVar3 = ~(uVar8 - ((uVar14 & 0x8000) == 0));
                  if (0x1ff < uVar3) goto LAB_0010720d;
                  lVar13 = (ulong)uVar3 + 0x240;
                  uVar8 = *(uint*)( param_2 + lVar13 * 4 + 4 );
                  if (*(uint*)( param_2 + lVar13 * 4 + 4 ) == 0) {
                     *(uint*)( param_2 + lVar13 * 4 + 4 ) = uVar12;
                     uVar8 = uVar12;
                     uVar12 = uVar12 - 2;
                  }

                  uVar10 = uVar10 - 1;
                  uVar14 = uVar14 * 2;
               }
 while ( uVar10 != 9 );
            }

            uVar8 = uVar8 - ( ( uVar14 & 0x8000 ) == 0 );
            if ((int)uVar8 < -0x200) goto LAB_0010720d;
            *(uint*)( param_2 + (long)(int)~uVar8 * 4 + 0x904 ) = (uint)bVar2;
            uVar3 = uVar12;
         }

         lVar17 = lVar17 + 1;
      }
 while ( iVar7 != lVar17 );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* jpgd::jpeg_decoder::check_quant_tables() */void jpgd::jpeg_decoder::check_quant_tables(jpeg_decoder *this) {
   jpeg_decoder *pjVar1;
   if (0 < *(int*)( this + 0x200 )) {
      pjVar1 = this;
      do {
         if (*(long*)( this + (long)*(int*)( this + (long)*(int*)( pjVar1 + 0x204 ) * 4 + 0x1c0 ) * 8 + 0x178 ) == 0) {
            /* WARNING: Subroutine does not return */
            stop_decoding(this, 0xffffff15);
         }

         pjVar1 = pjVar1 + 4;
      }
 while ( pjVar1 != this + (long)*(int*)( this + 0x200 ) * 4 );
   }

   return;
}
/* jpgd::jpeg_decoder::check_huff_tables() */void jpgd::jpeg_decoder::check_huff_tables(jpeg_decoder *this) {
   jpeg_decoder *pjVar1;
   huff_tables *phVar2;
   long lVar3;
   if (0 < *(int*)( this + 0x200 )) {
      pjVar1 = this;
      do {
         if (*(int*)( this + 0x234 ) == 0) {
            while (true) {
               if (*(long*)( this + (long)*(int*)( this + (long)*(int*)( pjVar1 + 0x204 ) * 4 + 0x214 ) * 8 + 0xf8 ) == 0) goto LAB_00107377;
               if (0 < *(int*)( this + 0x238 )) break;
               pjVar1 = pjVar1 + 4;
               if (pjVar1 == this + (long)*(int*)( this + 0x200 ) * 4) goto LAB_00107318;
            }
;
            LAB_001072ba:if (*(long*)( this + (long)*(int*)( this + (long)*(int*)( pjVar1 + 0x204 ) * 4 + 0x224 ) * 8 + 0xf8 ) == 0) {
               LAB_00107377:/* WARNING: Subroutine does not return */stop_decoding(this, 0xffffff16);
            }

         }
 else if (0 < *(int*)( this + 0x238 )) goto LAB_001072ba;
         pjVar1 = pjVar1 + 4;
      }
 while ( pjVar1 != this + (long)*(int*)( this + 0x200 ) * 4 );
   }

   LAB_00107318:lVar3 = 0;
   do {
      if (*(long*)( this + lVar3 * 8 + 0xf8 ) != 0) {
         phVar2 = *(huff_tables**)( this + lVar3 * 8 + 0x2a0 );
         if (phVar2 == (huff_tables*)0x0) {
            phVar2 = (huff_tables*)alloc(this, 0x1104, false);
            *(huff_tables**)( this + lVar3 * 8 + 0x2a0 ) = phVar2;
         }

         make_huff_table(this, (int)lVar3, phVar2);
      }

      lVar3 = lVar3 + 1;
   }
 while ( lVar3 != 8 );
   return;
}
/* jpgd::jpeg_decoder::calc_mcu_block_order() */undefined1  [16] __thiscalljpgd::jpeg_decoder::calc_mcu_block_order(jpeg_decoder *this) {
   int iVar1;
   undefined4 uVar2;
   undefined4 uVar3;
   int iVar4;
   undefined1 auVar5[16];
   int iVar6;
   jpeg_decoder *pjVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   jpeg_decoder *pjVar11;
   int iVar12;
   ulong uVar13;
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   iVar1 = *(int*)( this + 0x19c );
   if (iVar1 < 1) {
      iVar12 = 0;
      iVar10 = 0;
   }
 else {
      iVar10 = 0;
      iVar12 = 0;
      pjVar7 = this;
      do {
         if (iVar10 < *(int*)( pjVar7 + 0x1a0 )) {
            iVar10 = *(int*)( pjVar7 + 0x1a0 );
         }

         if (iVar12 < *(int*)( pjVar7 + 0x1b0 )) {
            iVar12 = *(int*)( pjVar7 + 0x1b0 );
         }

         pjVar7 = pjVar7 + 4;
      }
 while ( this + (long)iVar1 * 4 != pjVar7 );
      iVar9 = *(int*)( this + 0xd8 );
      iVar8 = *(int*)( this + 0xdc );
      pjVar7 = this;
      do {
         iVar4 = ( *(int*)( pjVar7 + 0x1a0 ) * iVar9 + iVar10 + -1 ) / iVar10;
         iVar6 = iVar4 + 7;
         iVar4 = iVar4 + 0xe;
         if (-1 < iVar6) {
            iVar4 = iVar6;
         }

         *(int*)( pjVar7 + 0x1e0 ) = iVar4 >> 3;
         iVar4 = ( *(int*)( pjVar7 + 0x1b0 ) * iVar8 + iVar12 + -1 ) / iVar12;
         iVar6 = iVar4 + 7;
         iVar4 = iVar4 + 0xe;
         if (-1 < iVar6) {
            iVar4 = iVar6;
         }

         pjVar11 = pjVar7 + 4;
         *(int*)( pjVar7 + 0x1f0 ) = iVar4 >> 3;
         pjVar7 = pjVar11;
      }
 while ( this + (long)iVar1 * 4 != pjVar11 );
   }

   iVar1 = *(int*)( this + 0x200 );
   if (iVar1 == 1) {
      uVar13 = ( ulong ) * (int*)( this + 0x204 );
      uVar2 = *(undefined4*)( this + uVar13 * 4 + 0x1e0 );
      uVar3 = *(undefined4*)( this + uVar13 * 4 + 0x1f0 );
      *(int*)( this + 0x25c ) = *(int*)( this + 0x204 );
      *(undefined4*)( this + 0x24c ) = 1;
      *(ulong*)( this + 0x254 ) = CONCAT44(uVar3, uVar2);
      iVar10 = 1;
      if (*(int*)( this + 0x2460 ) < 1) goto LAB_00107552;
   }
 else {
      *(undefined4*)( this + 0x24c ) = 0;
      iVar8 = *(int*)( this + 0xd8 ) + 7;
      iVar9 = *(int*)( this + 0xd8 ) + 0xe;
      if (-1 < iVar8) {
         iVar9 = iVar8;
      }

      *(int*)( this + 0x254 ) = ( iVar10 + -1 + ( iVar9 >> 3 ) ) / iVar10;
      iVar9 = *(int*)( this + 0xdc ) + 7;
      iVar10 = *(int*)( this + 0xdc ) + 0xe;
      if (-1 < iVar9) {
         iVar10 = iVar9;
      }

      iVar10 = iVar12 + -1 + ( iVar10 >> 3 );
      auVar15._8_8_ = (long)iVar10 % (long)iVar12 & 0xffffffff;
      *(int*)( this + 600 ) = iVar10 / iVar12;
      if (iVar1 < 1) {
         auVar15._0_4_ = ~*(uint *)(this + 0x2460) >> 0x1f;
         auVar15._4_4_ = 0;
         return auVar15;
      }

      iVar10 = 0;
      pjVar7 = this;
      do {
         iVar12 = *(int*)( pjVar7 + 0x204 );
         uVar13 = (ulong)iVar12;
         iVar9 = *(int*)( this + uVar13 * 4 + 0x1a0 ) * *(int*)( this + uVar13 * 4 + 0x1b0 );
         if (iVar9 != 0) {
            pjVar11 = this + (long)iVar10 * 4;
            if (( (int)( this + ( ( ulong )(iVar9 - 1) + (long)iVar10 ) * 4 + 4 ) - (int)pjVar11 & 4U ) == 0) goto LAB_001074f8;
            *(int*)( pjVar11 + 0x25c ) = iVar12;
            for (pjVar11 = pjVar11 + 4; this + ( ( ulong )(iVar9 - 1) + (long)iVar10 ) * 4 + 4 != pjVar11; pjVar11 = pjVar11 + 8) {
               LAB_001074f8:*(int*)( pjVar11 + 0x25c ) = iVar12;
               *(int*)( pjVar11 + 0x260 ) = iVar12;
            }

            iVar10 = iVar9 + iVar10;
            *(int*)( this + 0x24c ) = iVar10;
         }

         pjVar7 = pjVar7 + 4;
      }
 while ( this + (long)iVar1 * 4 != pjVar7 );
      if (*(int*)( this + 0x2460 ) < iVar10) {
         LAB_00107552:auVar5._8_8_ = 0;
         auVar5._0_8_ = uVar13;
         return auVar5 << 0x40;
      }

      if (iVar10 < 1) goto LAB_001075a8;
   }

   pjVar7 = this + (long)iVar10 * 4;
   do {
      if (3 < *(int*)( this + 0x25c )) goto LAB_00107552;
      this =
      this + 4;
   }
 while ( pjVar7 != this );
   LAB_001075a8:auVar14._8_8_ = uVar13;
   auVar14._0_8_ = 1;
   return auVar14;
}
/* jpgd::jpeg_decoder::init_scan() */undefined8 jpgd::jpeg_decoder::init_scan(jpeg_decoder *this) {
   char cVar1;
   int iVar2;
   jpeg_decoder *pjVar3;
   iVar2 = process_markers(this);
   if (iVar2 != 0xd9) {
      if (iVar2 != 0xda) {
         /* WARNING: Subroutine does not return */
         stop_decoding(this, 0xffffff10);
      }

      read_sos_marker(this);
      cVar1 = calc_mcu_block_order(this);
      if (cVar1 != '\0') {
         check_huff_tables(this);
         if (0 < *(int*)( this + 0x200 )) {
            pjVar3 = this;
            do {
               if (*(long*)( this + (long)*(int*)( this + (long)*(int*)( pjVar3 + 0x204 ) * 4 + 0x1c0 ) * 8 + 0x178 ) == 0) {
                  /* WARNING: Subroutine does not return */
                  stop_decoding(this, 0xffffff15);
               }

               pjVar3 = pjVar3 + 4;
            }
 while ( this + (long)*(int*)( this + 0x200 ) * 4 != pjVar3 );
         }

         memset(this + 0x2468, 0, (long)*(int*)( this + 0x19c ) << 2);
         *(undefined4*)( this + 800 ) = 0;
         if (*(int*)( this + 0x2450 ) != 0) {
            *(int*)( this + 0x2454 ) = *(int*)( this + 0x2450 );
            *(undefined4*)( this + 0x2458 ) = 0;
         }

         fix_in_buffer(this);
         return 1;
      }

   }

   return 0;
}
/* jpgd::jpeg_decoder::init_frame() */void jpgd::jpeg_decoder::init_frame(jpeg_decoder *this) {
   int iVar1;
   uint uVar2;
   undefined8 uVar3;
   long lVar4;
   jpeg_decoder *pjVar5;
   jpeg_decoder *pjVar6;
   int iVar7;
   int iVar8;
   undefined4 uVar9;
   int iVar10;
   int iVar11;
   int iVar12;
   if (*(int*)( this + 0x19c ) == 1) {
      if (*(int*)( this + 0x1a0 ) != 1) {
         LAB_00107718:/* WARNING: Subroutine does not return */stop_decoding(this, 0xffffff19);
      }

      if (*(int*)( this + 0x1b0 ) != 1) goto LAB_00107718;
      iVar8 = 0;
      iVar10 = 7;
      iVar7 = 7;
      iVar11 = 8;
      iVar12 = 8;
      uVar9 = 1;
   }
 else {
      if (*(int*)( this + 0x19c ) != 3) {
         /* WARNING: Subroutine does not return */
         stop_decoding(this, 0xffffff18);
      }

      if (( ( ( *(int*)( this + 0x1a4 ) != 1 ) || ( *(int*)( this + 0x1b4 ) != 1 ) ) || ( *(int*)( this + 0x1a8 ) != 1 ) ) || ( *(int*)( this + 0x1b8 ) != 1 )) goto LAB_00107718;
      if (*(int*)( this + 0x1a0 ) == 1) {
         if (*(int*)( this + 0x1b0 ) == 1) {
            iVar10 = 7;
            iVar11 = 8;
            iVar7 = 7;
            iVar12 = 8;
            uVar9 = 3;
            iVar8 = 1;
         }
 else {
            if (*(int*)( this + 0x1b0 ) != 2) goto LAB_00107718;
            iVar8 = 3;
            uVar9 = 4;
            iVar10 = 0xf;
            iVar11 = 0x10;
            iVar7 = 7;
            iVar12 = 8;
         }

      }
 else {
         if (*(int*)( this + 0x1a0 ) != 2) goto LAB_00107718;
         if (*(int*)( this + 0x1b0 ) == 1) {
            uVar9 = 4;
            iVar10 = 7;
            iVar7 = 0xf;
            iVar11 = 8;
            iVar12 = 0x10;
            iVar8 = 2;
         }
 else {
            if (*(int*)( this + 0x1b0 ) != 2) goto LAB_00107718;
            uVar9 = 6;
            iVar8 = 4;
            iVar10 = 0xf;
            iVar11 = 0x10;
            iVar7 = 0xf;
            iVar12 = 0x10;
         }

      }

   }

   iVar1 = *(int*)( this + 0xd8 );
   *(undefined4*)( this + 0x2460 ) = uVar9;
   *(int*)( this + 0x198 ) = iVar8;
   *(int*)( this + 0x244 ) = iVar12;
   *(int*)( this + 0x248 ) = iVar11;
   *(int*)( this + 0x245c ) = ( iVar7 + iVar1 ) / iVar12;
   *(int*)( this + 0x2464 ) = ( *(int*)( this + 0xdc ) + iVar10 ) / iVar11;
   if (iVar8 == 0) {
      iVar7 = 1;
      iVar8 = iVar1;
   }
 else {
      iVar7 = 4;
      iVar8 = iVar1 * 4;
   }

   *(int*)( this + 0x290 ) = iVar8;
   *(int*)( this + 0x298 ) = iVar7;
   iVar7 = ( iVar1 + 0xfU & 0xfff0 ) * iVar7;
   *(int*)( this + 0x294 ) = iVar7;
   uVar3 = alloc(this, (long)iVar7, false);
   *(undefined8*)( this + 0x34b8 ) = uVar3;
   if (*(int*)( this + 0x198 ) - 3U < 2) {
      uVar3 = alloc(this, (long)*(int*)( this + 0x294 ), false);
      *(undefined8*)( this + 0x34c0 ) = uVar3;
   }

   iVar8 = *(int*)( this + 0x245c ) * *(int*)( this + 0x2460 );
   *(int*)( this + 0x250 ) = iVar8;
   if (0x4000 < iVar8) {
      /* WARNING: Subroutine does not return */
      stop_decoding(this, 0xffffff1a);
   }

   lVar4 = alloc(this, (long)( *(int*)( this + 0x2460 ) << 6 ) * 2 + 0xf, false);
   uVar2 = *(uint*)( this + 0x2460 );
   *(ulong*)( this + 0x2478 ) = lVar4 + 0xfU & 0xfffffffffffffff0;
   if (0 < (int)uVar2) {
      pjVar5 = this;
      if (( uVar2 & 1 ) != 0) {
         *(undefined4*)( this + 0x2480 ) = 0x40;
         pjVar5 = this + 4;
         if (this + 4 == this + (long)(int)uVar2 * 4) goto LAB_001078ad;
      }

      do {
         *(undefined4*)( pjVar5 + 0x2480 ) = 0x40;
         pjVar6 = pjVar5 + 8;
         *(undefined4*)( pjVar5 + 0x2484 ) = 0x40;
         pjVar5 = pjVar6;
      }
 while ( pjVar6 != this + (long)(int)uVar2 * 4 );
   }

   LAB_001078ad:lVar4 = alloc(this, (long)( *(int*)( this + 0x250 ) << 6 ) + 0xf, false);
   *(ulong*)( this + 0x24a8 ) = lVar4 + 0xfU & 0xfffffffffffffff0;
   lVar4 = alloc(this, (long)( *(int*)( this + 0x250 ) << 6 ) + 0xf, false);
   *(undefined4*)( this + 0x288 ) = 0;
   *(ulong*)( this + 0x24b0 ) = lVar4 + 0xfU & 0xfffffffffffffff0;
   *(undefined4*)( this + 0x284 ) = *(undefined4*)( this + 0xdc );
   create_look_ups(this);
   return;
}
/* jpgd::jpeg_decoder::coeff_buf_open(int, int, int, int) */undefined8 * __thiscall
jpgd::jpeg_decoder::coeff_buf_open
          (jpeg_decoder *this,int param_1,int param_2,int param_3,int param_4){
   int iVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   iVar1 = param_3 * param_4 * 2;
   puVar2 = (undefined8*)alloc(this, 0x20, false);
   *(int*)( puVar2 + 3 ) = iVar1;
   puVar2[1] = CONCAT44(param_2, param_1);
   puVar2[2] = CONCAT44(param_4, param_3);
   uVar3 = alloc(this, (long)( iVar1 * param_1 * param_2 ), true);
   *puVar2 = uVar3;
   return puVar2;
}
/* jpgd::jpeg_decoder::decode_scan(void (*)(jpgd::jpeg_decoder*, int, int, int)) */void jpgd::jpeg_decoder::decode_scan(jpeg_decoder *this, _func_void_jpeg_decoder_ptr_int_int_int *param_1) {
   jpeg_decoder *pjVar1;
   jpeg_decoder *pjVar2;
   int iVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   int iVar7;
   long in_FS_OFFSET;
   int local_78;
   int local_74;
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   if (0 < *(int*)( this + 600 )) {
      local_74 = 0;
      do {
         local_68 = (undefined1[16])0x0;
         if (0 < *(int*)( this + 0x254 )) {
            local_78 = 0;
            do {
               if (( *(int*)( this + 0x2450 ) != 0 ) && ( *(int*)( this + 0x2454 ) == 0 )) {
                  process_restart(this);
               }

               if (0 < *(int*)( this + 0x24c )) {
                  lVar6 = 0;
                  iVar3 = 0;
                  iVar7 = 0;
                  do {
                     while (true) {
                        lVar5 = (long)*(int*)( this + lVar6 * 4 + 0x25c );
                        iVar4 = *(int*)( local_68 + lVar5 * 4 );
                        ( *param_1 )(this, *(int*)( this + lVar6 * 4 + 0x25c ), iVar4 + iVar7, *(int*)( local_58 + lVar5 * 4 ) + iVar3);
                        if (*(int*)( this + 0x200 ) != 1) break;
                        lVar6 = lVar6 + 1;
                        *(int*)( local_68 + lVar5 * 4 ) = iVar4 + 1;
                        if (*(int*)( this + 0x24c ) <= (int)lVar6) goto LAB_00107b84;
                     }
;
                     iVar7 = iVar7 + 1;
                     if (*(int*)( this + lVar5 * 4 + 0x1a0 ) == iVar7) {
                        iVar3 = iVar3 + 1;
                        if (*(int*)( this + lVar5 * 4 + 0x1b0 ) == iVar3) {
                           iVar4 = iVar4 + iVar7;
                           iVar3 = 0;
                           iVar7 = 0;
                           *(int*)( local_68 + lVar5 * 4 ) = iVar4;
                        }
 else {
                           iVar7 = 0;
                        }

                     }

                     lVar6 = lVar6 + 1;
                  }
 while ( (int)lVar6 < *(int*)( this + 0x24c ) );
               }

               LAB_00107b84:local_78 = local_78 + 1;
               *(int*)( this + 0x2454 ) = *(int*)( this + 0x2454 ) + -1;
            }
 while ( local_78 < *(int*)( this + 0x254 ) );
         }

         iVar3 = *(int*)( this + 0x200 );
         if (iVar3 == 1) {
            *(int*)( local_58 + (long)*(int*)( this + 0x204 ) * 4 ) = *(int*)( local_58 + (long)*(int*)( this + 0x204 ) * 4 ) + 1;
         }
 else if (0 < iVar3) {
            pjVar2 = this;
            do {
               pjVar1 = pjVar2 + 0x204;
               pjVar2 = pjVar2 + 4;
               *(int*)( local_58 + (long)*(int*)pjVar1 * 4 ) = *(int*)( local_58 + (long)*(int*)pjVar1 * 4 ) + *(int*)( this + (long)*(int*)pjVar1 * 4 + 0x1b0 );
            }
 while ( this + (long)iVar3 * 4 != pjVar2 );
         }

         local_74 = local_74 + 1;
      }
 while ( local_74 < *(int*)( this + 600 ) );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* jpgd::jpeg_decoder::init_progressive() [clone .part.0] */void jpgd::jpeg_decoder::init_progressive(jpeg_decoder *this) {
   byte bVar1;
   int iVar2;
   int iVar3;
   byte *pbVar4;
   undefined8 uVar5;
   char cVar6;
   int iVar7;
   undefined8 *puVar8;
   undefined8 uVar9;
   uint uVar10;
   byte *pbVar11;
   int iVar12;
   code *pcVar13;
   long lVar14;
   uint uVar15;
   uVar5 = _LC10;
   lVar14 = 0;
   if (0 < *(int*)( this + 0x19c )) {
      do {
         iVar12 = *(int*)( this + 0x245c );
         iVar7 = *(int*)( this + lVar14 * 4 + 0x1a0 );
         iVar2 = *(int*)( this + 0x2464 );
         iVar3 = *(int*)( this + lVar14 * 4 + 0x1b0 );
         puVar8 = (undefined8*)alloc(this, 0x20, false);
         *(int*)( (long)puVar8 + 0xc ) = iVar2 * iVar3;
         *(int*)( puVar8 + 1 ) = iVar12 * iVar7;
         puVar8[2] = uVar5;
         *(undefined4*)( puVar8 + 3 ) = 2;
         uVar9 = alloc(this, (long)( iVar2 * iVar3 * iVar12 * iVar7 * 2 ), true);
         iVar12 = *(int*)( this + 0x245c );
         *puVar8 = uVar9;
         iVar7 = *(int*)( this + 0x2464 );
         iVar2 = *(int*)( this + lVar14 * 4 + 0x1a0 );
         *(undefined8**)( this + lVar14 * 8 + 0x2e0 ) = puVar8;
         iVar3 = *(int*)( this + lVar14 * 4 + 0x1b0 );
         puVar8 = (undefined8*)alloc(this, 0x20, false);
         *(int*)( (long)puVar8 + 0xc ) = iVar7 * iVar3;
         *(int*)( puVar8 + 1 ) = iVar12 * iVar2;
         uVar9 = _LC11;
         *(undefined4*)( puVar8 + 3 ) = 0x80;
         puVar8[2] = uVar9;
         uVar9 = alloc(this, (long)( iVar7 * iVar3 * iVar12 * iVar2 * 0x80 ), true);
         *puVar8 = uVar9;
         *(undefined8**)( this + lVar14 * 8 + 0x300 ) = puVar8;
         lVar14 = lVar14 + 1;
      }
 while ( (int)lVar14 < *(int*)( this + 0x19c ) );
   }

   iVar12 = 0x3e9;
   do {
      iVar7 = init_scan(this);
      if (iVar7 == 0) {
         iVar12 = *(int*)( this + 0x19c );
         lVar14 = 0;
         *(int*)( this + 0x200 ) = iVar12;
         if (0 < iVar12) {
            do {
               *(int*)( this + lVar14 * 4 + 0x204 ) = (int)lVar14;
               lVar14 = lVar14 + 1;
            }
 while ( iVar12 != lVar14 );
         }

         cVar6 = calc_mcu_block_order(this);
         if (cVar6 != '\0') {
            return;
         }

         /* WARNING: Subroutine does not return */
         stop_decoding(this, 0xffffff1a);
      }

      iVar7 = *(int*)( this + 0x238 );
      iVar2 = *(int*)( this + 0x240 );
      if (( 0x3f < iVar7 ) || ( iVar7 < *(int*)( this + 0x234 ) )) {
         LAB_001080b6:/* WARNING: Subroutine does not return */stop_decoding(this, 0xffffff1c);
      }

      if (*(int*)( this + 0x234 ) == 0) {
         if (iVar7 != 0) goto LAB_001080b6;
         pcVar13 = decode_block_dc_first;
         if (iVar2 != 0) {
            if (iVar2 + -1 != *(int*)( this + 0x23c )) {
               LAB_00107de5:/* WARNING: Subroutine does not return */stop_decoding(this, 0xffffff1d);
            }

            pcVar13 = decode_block_dc_refine;
         }

      }
 else {
         if (*(int*)( this + 0x200 ) != 1) goto LAB_001080b6;
         pcVar13 = decode_block_ac_first;
         if (iVar2 != 0) {
            if (iVar2 + -1 != *(int*)( this + 0x23c )) goto LAB_00107de5;
            pcVar13 = decode_block_ac_refine;
         }

      }

      decode_scan(this, pcVar13);
      iVar7 = *(int*)( this + 0x340 );
      *(undefined4*)( this + 0x2448 ) = 0;
      *(int*)( this + 0x244c ) = *(int*)( this + 0x244c ) << 0x10;
      if (iVar7 == 0) {
         prep_in_buffer(this);
         iVar7 = *(int*)( this + 0x340 );
         if (iVar7 != 0) goto LAB_00107e41;
         uVar15 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar15 ^ 1;
         uVar15 = ( -(uint)(uVar15 == 0) & 0x2600 ) + 0xd900;
         LAB_00107fa3:prep_in_buffer(this);
         iVar7 = *(int*)( this + 0x340 );
         if (iVar7 != 0) {
            pbVar11 = *(byte**)( this + 0x338 );
            goto LAB_00107e6d;
         }

         uVar10 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar10 ^ 1;
         uVar10 = ( -(uint)(uVar10 == 0) & 0x26 ) + 0xd9;
      }
 else {
         LAB_00107e41:pbVar4 = *(byte**)( this + 0x338 );
         iVar7 = iVar7 + -1;
         pbVar11 = pbVar4 + 1;
         *(byte**)( this + 0x338 ) = pbVar11;
         bVar1 = *pbVar4;
         *(int*)( this + 0x340 ) = iVar7;
         uVar15 = (uint)bVar1 << 8;
         if (iVar7 == 0) goto LAB_00107fa3;
         LAB_00107e6d:*(byte**)( this + 0x338 ) = pbVar11 + 1;
         uVar10 = ( uint ) * pbVar11;
         *(int*)( this + 0x340 ) = iVar7 + -1;
      }

      cVar6 = (char)*(int*)( this + 0x2448 );
      iVar7 = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar10 | uVar15 ) << ( -cVar6 & 0x1fU );
      if (*(int*)( this + 0x2448 ) < 1) {
         *(int*)( this + 0x244c ) = iVar7 << ( cVar6 + 0x10U & 0x1f );
         iVar7 = *(int*)( this + 0x340 );
         if (iVar7 == 0) {
            prep_in_buffer(this);
            iVar7 = *(int*)( this + 0x340 );
            if (iVar7 != 0) goto LAB_00107ee1;
            uVar15 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar15 ^ 1;
            uVar15 = ( -(uint)(uVar15 == 0) & 0x2600 ) + 0xd900;
            LAB_00108003:prep_in_buffer(this);
            iVar7 = *(int*)( this + 0x340 );
            if (iVar7 != 0) {
               pbVar11 = *(byte**)( this + 0x338 );
               goto LAB_00107f0d;
            }

            uVar10 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar10 ^ 1;
            uVar10 = ( -(uint)(uVar10 == 0) & 0x26 ) + 0xd9;
         }
 else {
            LAB_00107ee1:pbVar4 = *(byte**)( this + 0x338 );
            iVar7 = iVar7 + -1;
            pbVar11 = pbVar4 + 1;
            *(byte**)( this + 0x338 ) = pbVar11;
            bVar1 = *pbVar4;
            *(int*)( this + 0x340 ) = iVar7;
            uVar15 = (uint)bVar1 << 8;
            if (iVar7 == 0) goto LAB_00108003;
            LAB_00107f0d:*(byte**)( this + 0x338 ) = pbVar11 + 1;
            uVar10 = ( uint ) * pbVar11;
            *(int*)( this + 0x340 ) = iVar7 + -1;
         }

         iVar7 = *(int*)( this + 0x2448 );
         *(int*)( this + 0x2448 ) = iVar7 + 0x10;
         *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar10 | uVar15 ) << ( -(char)iVar7 & 0x1fU );
      }
 else {
         *(int*)( this + 0x244c ) = iVar7 << 0x10;
      }

      iVar12 = iVar12 + -1;
      if (iVar12 == 0) {
         /* WARNING: Subroutine does not return */
         stop_decoding(this, 0xffffff20);
      }

   }
 while ( true );
}
/* jpgd::jpeg_decoder::init_progressive() */void jpgd::jpeg_decoder::init_progressive(jpeg_decoder *this) {
   if (*(int*)( this + 0x19c ) != 4) {
      init_progressive(this);
      return;
   }

   /* WARNING: Subroutine does not return */
   stop_decoding(this, 0xffffff18);
}
/* jpgd::jpeg_decoder::init_sequential() */void jpgd::jpeg_decoder::init_sequential(jpeg_decoder *this) {
   int iVar1;
   iVar1 = init_scan(this);
   if (iVar1 != 0) {
      return;
   }

   /* WARNING: Subroutine does not return */
   stop_decoding(this, 0xffffff10);
}
/* jpgd::jpeg_decoder::decode_start() */void jpgd::jpeg_decoder::decode_start(jpeg_decoder *this) {
   int iVar1;
   init_frame(this);
   if (*(int*)( this + 0xe8 ) == 0) {
      iVar1 = init_scan(this);
      if (iVar1 != 0) {
         return;
      }

      /* WARNING: Subroutine does not return */
      stop_decoding(this, 0xffffff10);
   }

   if (*(int*)( this + 0x19c ) != 4) {
      init_progressive(this);
      return;
   }

   /* WARNING: Subroutine does not return */
   stop_decoding(this, 0xffffff18);
}
/* jpgd::jpeg_decoder::decode_init(jpgd::jpeg_decoder_stream*, unsigned int) */void jpgd::jpeg_decoder::decode_init(jpeg_decoder *this, jpeg_decoder_stream *param_1, uint param_2) {
   init(this, param_1, param_2);
   locate_sof_marker(this);
   return;
}
/* jpgd::jpeg_decoder::jpeg_decoder(jpgd::jpeg_decoder_stream*, unsigned int) */void jpgd::jpeg_decoder::jpeg_decoder(jpeg_decoder *this, jpeg_decoder_stream *param_1, uint param_2) {
   int iVar1;
   iVar1 = _setjmp((__jmp_buf_tag*)this);
   if (iVar1 == 0) {
      init(this, param_1, param_2);
      locate_sof_marker(this);
   }

   return;
}
/* jpgd::jpeg_decoder::begin_decoding() */undefined8 jpgd::jpeg_decoder::begin_decoding(jpeg_decoder *this) {
   int iVar1;
   undefined8 uVar2;
   if (this[0x34d0] == (jpeg_decoder)0x0) {
      if (*(int*)( this + 0x34c8 ) == 0) {
         iVar1 = _setjmp((__jmp_buf_tag*)this);
         if (iVar1 == 0) {
            decode_start(this);
            this[0x34d0] = (jpeg_decoder)0x1;
            goto LAB_00108227;
         }

      }

      uVar2 = 0xffffffff;
   }
 else {
      LAB_00108227:uVar2 = 0;
   }

   return uVar2;
}
/* jpgd::jpeg_decoder::~jpeg_decoder() */void jpgd::jpeg_decoder::~jpeg_decoder(jpeg_decoder *this) {
   undefined8 *puVar1;
   undefined8 *__ptr;
   __ptr = *(undefined8**)( this + 0xd0 );
   while (__ptr != (undefined8*)0x0) {
      puVar1 = (undefined8*)*__ptr;
      free(__ptr);
      __ptr = puVar1;
   }
;
   return;
}
/* jpgd::jpeg_decoder_file_stream::jpeg_decoder_file_stream() */void jpgd::jpeg_decoder_file_stream::jpeg_decoder_file_stream(jpeg_decoder_file_stream *this) {
   *(undefined8*)( this + 8 ) = 0;
   *(undefined***)this = &PTR__jpeg_decoder_file_stream_0010cc30;
   *(undefined2*)( this + 0x10 ) = 0;
   return;
}
/* jpgd::jpeg_decoder_file_stream::close() */void jpgd::jpeg_decoder_file_stream::close(jpeg_decoder_file_stream *this) {
   if (*(FILE**)( this + 8 ) != (FILE*)0x0) {
      fclose(*(FILE**)( this + 8 ));
      *(undefined8*)( this + 8 ) = 0;
   }

   *(undefined2*)( this + 0x10 ) = 0;
   return;
}
/* jpgd::jpeg_decoder_file_stream::open(char const*) */bool jpgd::jpeg_decoder_file_stream::open(jpeg_decoder_file_stream *this, char *param_1) {
   FILE *pFVar1;
   if (*(FILE**)( this + 8 ) != (FILE*)0x0) {
      fclose(*(FILE**)( this + 8 ));
      *(undefined8*)( this + 8 ) = 0;
   }

   *(undefined2*)( this + 0x10 ) = 0;
   pFVar1 = fopen64(param_1, "rb");
   *(FILE**)( this + 8 ) = pFVar1;
   return pFVar1 != (FILE*)0x0;
}
/* jpgd::jpeg_decoder_mem_stream::open(unsigned char const*, unsigned int) */undefined8 jpgd::jpeg_decoder_mem_stream::open(jpeg_decoder_mem_stream *this, uchar *param_1, uint param_2) {
   *(undefined4*)( this + 0x10 ) = 0;
   *(uchar**)( this + 8 ) = param_1;
   *(uint*)( this + 0x14 ) = param_2;
   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* jpgd::jpeg_decoder::transform_mcu(int) */void jpgd::jpeg_decoder::transform_mcu(jpeg_decoder *this, int param_1) {
   undefined1 uVar1;
   uint uVar2;
   int *piVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   short *psVar7;
   int *piVar8;
   int iVar9;
   int iVar10;
   int iVar11;
   int *piVar12;
   int iVar13;
   short *psVar14;
   int iVar15;
   int iVar16;
   char cVar17;
   int iVar18;
   uint uVar19;
   int iVar20;
   long lVar21;
   int iVar22;
   int iVar23;
   undefined1 *puVar24;
   int *piVar25;
   int *piVar26;
   long in_FS_OFFSET;
   int local_148[64];
   int local_48[2];
   long local_40;
   psVar14 = *(short**)( this + 0x2478 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar9 = param_1 * *(int*)( this + 0x24c );
   if (*(int*)( this + 0x250 ) <= iVar9) {
      /* WARNING: Subroutine does not return */
      stop_decoding(this, 0xffffff1a);
   }

   lVar21 = 0;
   piVar12 = (int*)( (long)( iVar9 * 0x40 ) + *(long*)( this + 0x24a8 ) );
   if (0 < *(int*)( this + 0x24c )) {
      do {
         iVar9 = *(int*)( this + lVar21 * 4 + 0x2480 );
         if (( (byte)this[200] & 2 ) == 0) {
            if (iVar9 < 2) goto LAB_00108e20;
            if (this[0x34d3] == (jpeg_decoder)0x0) goto LAB_001083bf;
            idctSSEShortU8(psVar14, (uchar*)piVar12);
         }
 else {
            if (1 < iVar9) {
               LAB_001083bf:piVar25 = local_148;
               puVar24 = s_idct_row_table + ( iVar9 + -1 ) * 8;
               piVar3 = piVar25;
               psVar7 = psVar14;
               do {
                  switch (*puVar24) {
                     case 1:
              iVar6 = *psVar7 * 4;
              *piVar3 = iVar6;
              piVar3[1] = iVar6;
              piVar3[2] = iVar6;
              piVar3[3] = iVar6;
              piVar3[4] = iVar6;
              piVar3[5] = iVar6;
              piVar3[6] = iVar6;
              piVar3[7] = iVar6;
              break;
                     case 2:
              iVar6 = *psVar7 * 0x2000;
              iVar4 = (int)psVar7[1];
              *piVar3 = iVar4 * 0x2c63 + iVar6 + __LC13 >> 0xb;
              piVar3[1] = iVar4 * 0x25a1 + iVar6 + _UNK_0010ccc4 >> 0xb;
              piVar3[2] = iVar4 * 0x1925 + iVar6 + _UNK_0010ccc8 >> 0xb;
              piVar3[3] = iVar4 * 0x8d4 + iVar6 + _UNK_0010cccc >> 0xb;
              piVar3[4] = iVar6 + iVar4 * -0x8d4 + __LC13 >> 0xb;
              piVar3[5] = iVar6 + iVar4 * -0x1925 + _UNK_0010ccc4 >> 0xb;
              piVar3[6] = iVar6 + iVar4 * -0x25a1 + _UNK_0010ccc8 >> 0xb;
              piVar3[7] = iVar6 + iVar4 * -0x2c63 + _UNK_0010cccc >> 0xb;
              break;
                     case 3:
              iVar10 = (int)psVar7[2];
              iVar5 = *psVar7 * 0x2000;
              iVar6 = iVar10 * 0x29cf + iVar5;
              iVar23 = iVar5 + iVar10 * -0x29cf;
              iVar4 = iVar10 * 0x1151 + iVar5;
              iVar5 = iVar5 + iVar10 * -0x1151;
              iVar10 = (int)psVar7[1];
              piVar3[1] = iVar4 + 0x400 + iVar10 * 0x25a1 >> 0xb;
              *piVar3 = iVar6 + 0x400 + iVar10 * 0x2c63 >> 0xb;
              piVar3[7] = iVar6 + iVar10 * -0x2c63 + 0x400 >> 0xb;
              piVar3[5] = iVar5 + iVar10 * -0x1925 + 0x400 >> 0xb;
              piVar3[6] = iVar4 + iVar10 * -0x25a1 + 0x400 >> 0xb;
              piVar3[2] = iVar5 + 0x400 + iVar10 * 0x1925 >> 0xb;
              piVar3[3] = iVar23 + 0x400 + iVar10 * 0x8d4 >> 0xb;
              piVar3[4] = iVar23 + iVar10 * -0x8d4 + 0x400 >> 0xb;
              break;
                     case 4:
              iVar5 = (int)psVar7[2];
              iVar23 = *psVar7 * 0x2000;
              iVar6 = iVar5 * 0x1151 + iVar23;
              iVar4 = iVar5 * 0x29cf + iVar23;
              iVar18 = iVar23 + iVar5 * -0x29cf;
              iVar23 = iVar23 + iVar5 * -0x1151;
              iVar16 = (int)psVar7[1];
              iVar15 = (int)psVar7[3];
              iVar13 = (iVar15 + iVar16) * 0x25a1;
              iVar11 = iVar15 * -0x3ec5 + iVar13;
              iVar13 = iVar16 * -0xc7c + iVar13;
              iVar10 = iVar16 * -0x1ccd + iVar11;
              iVar5 = iVar15 * -0x5203 + iVar13;
              iVar11 = iVar15 * 0x1051 + iVar11;
              iVar13 = iVar16 * 0x133e + iVar13;
              *piVar3 = iVar4 + 0x400 + iVar13 >> 0xb;
              piVar3[1] = iVar6 + 0x400 + iVar11 >> 0xb;
              piVar3[5] = (iVar23 - iVar5) + 0x400 >> 0xb;
              piVar3[7] = (iVar4 - iVar13) + 0x400 >> 0xb;
              piVar3[6] = (iVar6 - iVar11) + 0x400 >> 0xb;
              piVar3[2] = iVar23 + 0x400 + iVar5 >> 0xb;
              piVar3[3] = iVar18 + 0x400 + iVar10 >> 0xb;
              piVar3[4] = (iVar18 - iVar10) + 0x400 >> 0xb;
              break;
                     case 5:
              iVar5 = (int)psVar7[2];
              iVar15 = ((int)*psVar7 + (int)psVar7[4]) * 0x2000;
              iVar23 = ((int)*psVar7 - (int)psVar7[4]) * 0x2000;
              iVar6 = iVar5 * 0x1151 + iVar23;
              iVar23 = iVar23 + iVar5 * -0x1151;
              iVar16 = (int)psVar7[3];
              iVar4 = iVar5 * 0x29cf + iVar15;
              iVar15 = iVar15 + iVar5 * -0x29cf;
              iVar18 = (int)psVar7[1];
              iVar13 = (iVar16 + iVar18) * 0x25a1;
              iVar11 = iVar16 * -0x3ec5 + iVar13;
              iVar13 = iVar18 * -0xc7c + iVar13;
              iVar10 = iVar18 * -0x1ccd + iVar11;
              iVar5 = iVar16 * -0x5203 + iVar13;
              iVar11 = iVar16 * 0x1051 + iVar11;
              iVar13 = iVar18 * 0x133e + iVar13;
              *piVar3 = iVar4 + 0x400 + iVar13 >> 0xb;
              piVar3[1] = iVar6 + 0x400 + iVar11 >> 0xb;
              piVar3[7] = (iVar4 - iVar13) + 0x400 >> 0xb;
              piVar3[5] = (iVar23 - iVar5) + 0x400 >> 0xb;
              piVar3[6] = (iVar6 - iVar11) + 0x400 >> 0xb;
              piVar3[2] = iVar23 + 0x400 + iVar5 >> 0xb;
              piVar3[3] = iVar15 + 0x400 + iVar10 >> 0xb;
              piVar3[4] = (iVar15 - iVar10) + 0x400 >> 0xb;
              break;
                     case 6:
              iVar4 = psVar7[2] * 0x1151;
              iVar6 = psVar7[2] * 0x29cf;
              goto LAB_00108606;
                     case 7:
              iVar6 = ((int)psVar7[2] + (int)psVar7[6]) * 0x1151;
              iVar4 = psVar7[6] * -0x3b21 + iVar6;
              iVar6 = psVar7[2] * 0x187e + iVar6;
LAB_00108606:
              iVar18 = (int)psVar7[1];
              iVar13 = ((int)*psVar7 + (int)psVar7[4]) * 0x2000;
              iVar10 = ((int)*psVar7 - (int)psVar7[4]) * 0x2000;
              iVar5 = iVar6 + iVar13;
              iVar13 = iVar13 - iVar6;
              iVar16 = (int)psVar7[5];
              iVar6 = iVar4 + iVar10;
              iVar10 = iVar10 - iVar4;
              iVar15 = (int)psVar7[3];
              iVar23 = (iVar15 + iVar16 + iVar18) * 0x25a1;
              iVar20 = (iVar16 + iVar15) * -0x5203;
              iVar11 = iVar15 * -0x3ec5 + iVar23;
              iVar23 = (iVar16 + iVar18) * -0xc7c + iVar23;
              iVar4 = iVar18 * -0x1ccd + iVar11;
              iVar16 = iVar16 * 0x41b3 + iVar20 + iVar23;
              iVar11 = iVar15 * 0x6254 + iVar20 + iVar11;
              iVar23 = iVar18 * 0x133e + iVar23;
              *piVar3 = iVar5 + 0x400 + iVar23 >> 0xb;
              piVar3[7] = (iVar5 - iVar23) + 0x400 >> 0xb;
              piVar3[1] = iVar6 + 0x400 + iVar11 >> 0xb;
              piVar3[5] = (iVar10 - iVar16) + 0x400 >> 0xb;
              piVar3[6] = (iVar6 - iVar11) + 0x400 >> 0xb;
              piVar3[2] = iVar10 + 0x400 + iVar16 >> 0xb;
              piVar3[3] = iVar13 + 0x400 + iVar4 >> 0xb;
              piVar3[4] = (iVar13 - iVar4) + 0x400 >> 0xb;
              break;
                     case 8:
              iVar4 = ((int)psVar7[2] + (int)psVar7[6]) * 0x1151;
              iVar10 = psVar7[6] * -0x3b21 + iVar4;
              iVar4 = psVar7[2] * 0x187e + iVar4;
              iVar18 = (int)psVar7[1];
              iVar15 = ((int)*psVar7 + (int)psVar7[4]) * 0x2000;
              iVar5 = ((int)*psVar7 - (int)psVar7[4]) * 0x2000;
              iVar6 = iVar4 + iVar15;
              iVar15 = iVar15 - iVar4;
              iVar4 = iVar10 + iVar5;
              iVar13 = (int)psVar7[5];
              iVar5 = iVar5 - iVar10;
              iVar11 = (int)psVar7[7];
              iVar16 = (int)psVar7[3];
              iVar20 = (iVar11 + iVar18) * -0x1ccd;
              iVar23 = (iVar11 + iVar16 + iVar13 + iVar18) * 0x25a1;
              iVar22 = (iVar13 + iVar16) * -0x5203;
              iVar10 = (iVar13 + iVar18) * -0xc7c + iVar23;
              iVar18 = iVar18 * 0x300b + iVar20 + iVar10;
              iVar10 = iVar13 * 0x41b3 + iVar22 + iVar10;
              iVar23 = (iVar11 + iVar16) * -0x3ec5 + iVar23;
              iVar13 = iVar16 * 0x6254 + iVar22 + iVar23;
              *piVar3 = iVar6 + 0x400 + iVar18 >> 0xb;
              iVar23 = iVar11 * 0x98e + iVar20 + iVar23;
              piVar3[7] = (iVar6 - iVar18) + 0x400 >> 0xb;
              piVar3[1] = iVar4 + 0x400 + iVar13 >> 0xb;
              piVar3[5] = (iVar5 - iVar10) + 0x400 >> 0xb;
              piVar3[6] = (iVar4 - iVar13) + 0x400 >> 0xb;
              piVar3[3] = iVar15 + 0x400 + iVar23 >> 0xb;
              piVar3[2] = iVar5 + 0x400 + iVar10 >> 0xb;
              piVar3[4] = (iVar15 - iVar23) + 0x400 >> 0xb;
                  }

                  piVar3 = piVar3 + 8;
                  psVar7 = psVar7 + 8;
                  puVar24 = puVar24 + 1;
               }
 while ( piVar3 != local_48 );
               piVar3 = local_148 + 8;
               piVar8 = piVar12;
               LAB_001085d1:switch (s_idct_col_table[iVar9 + -1]) {
                  default:
            goto switchD_001085e8_caseD_0;
                  case 1:
            do {
              uVar19 = *piVar25 + 0x1010 >> 5;
              uVar2 = (int)~uVar19 >> 0x1f;
              if (uVar19 < 0x100) {
                uVar2 = uVar19;
              }
              piVar25 = piVar25 + 1;
              uVar1 = (undefined1)uVar2;
              *(undefined1 *)piVar8 = uVar1;
              *(undefined1 *)(piVar8 + 2) = uVar1;
              *(undefined1 *)(piVar8 + 4) = uVar1;
              *(undefined1 *)(piVar8 + 6) = uVar1;
              *(undefined1 *)(piVar8 + 8) = uVar1;
              *(undefined1 *)(piVar8 + 10) = uVar1;
              *(undefined1 *)(piVar8 + 0xc) = uVar1;
              *(undefined1 *)(piVar8 + 0xe) = uVar1;
              piVar8 = (int *)((long)piVar8 + 1);
            } while (piVar25 != piVar3);
            break;
                  case 2:
            do {
              iVar6 = piVar25[8];
              iVar4 = *piVar25 * 0x2000;
              iVar9 = iVar4 + 0x2020000 + iVar6 * 0x2c63;
              uVar2 = iVar9 >> 0x12;
              cVar17 = (char)~(byte)(iVar9 >> 0x1f) >> 7;
              if (uVar2 < 0x100) {
                cVar17 = (char)uVar2;
              }
              *(char *)piVar8 = cVar17;
              uVar2 = iVar4 + iVar6 * -0x2c63 + 0x2020000 >> 0x12;
              if (0xff < uVar2) {
                uVar2 = (int)~uVar2 >> 0x1f;
              }
              iVar9 = iVar4 + 0x2020000 + iVar6 * 0x25a1;
              uVar19 = iVar9 >> 0x12;
              *(char *)(piVar8 + 0xe) = (char)uVar2;
              cVar17 = (char)~(byte)(iVar9 >> 0x1f) >> 7;
              if (uVar19 < 0x100) {
                cVar17 = (char)uVar19;
              }
              *(char *)(piVar8 + 2) = cVar17;
              uVar2 = iVar4 + iVar6 * -0x25a1 + 0x2020000 >> 0x12;
              if (0xff < uVar2) {
                uVar2 = (int)~uVar2 >> 0x1f;
              }
              iVar9 = iVar4 + 0x2020000 + iVar6 * 0x1925;
              uVar19 = iVar9 >> 0x12;
              *(char *)(piVar8 + 0xc) = (char)uVar2;
              cVar17 = (char)~(byte)(iVar9 >> 0x1f) >> 7;
              if (uVar19 < 0x100) {
                cVar17 = (char)uVar19;
              }
              *(char *)(piVar8 + 4) = cVar17;
              uVar2 = iVar4 + iVar6 * -0x1925 + 0x2020000 >> 0x12;
              if (0xff < uVar2) {
                uVar2 = (int)~uVar2 >> 0x1f;
              }
              uVar19 = iVar4 + 0x2020000 + iVar6 * 0x8d4 >> 0x12;
              *(char *)(piVar8 + 10) = (char)uVar2;
              uVar2 = (int)~uVar19 >> 0x1f;
              if (uVar19 < 0x100) {
                uVar2 = uVar19;
              }
              uVar19 = iVar4 + iVar6 * -0x8d4 + 0x2020000 >> 0x12;
              *(char *)(piVar8 + 6) = (char)uVar2;
              if (0xff < uVar19) {
                uVar19 = (int)~uVar19 >> 0x1f;
              }
              piVar25 = piVar25 + 1;
              *(char *)(piVar8 + 8) = (char)uVar19;
              piVar8 = (int *)((long)piVar8 + 1);
            } while (piVar25 != piVar3);
            break;
                  case 3:
            do {
              piVar26 = piVar25 + 1;
              Col<3>::idct((uchar *)piVar8,piVar25);
              piVar8 = (int *)((long)piVar8 + 1);
              piVar25 = piVar26;
            } while (piVar26 != piVar3);
            break;
                  case 4:
            do {
              piVar26 = piVar25 + 1;
              Col<4>::idct((uchar *)piVar8,piVar25);
              piVar8 = (int *)((long)piVar8 + 1);
              piVar25 = piVar26;
            } while (piVar26 != piVar3);
            break;
                  case 5:
            do {
              piVar26 = piVar25 + 1;
              Col<5>::idct((uchar *)piVar8,piVar25);
              piVar8 = (int *)((long)piVar8 + 1);
              piVar25 = piVar26;
            } while (piVar26 != piVar3);
            break;
                  case 6:
            do {
              piVar26 = piVar25 + 1;
              Col<6>::idct((uchar *)piVar8,piVar25);
              piVar8 = (int *)((long)piVar8 + 1);
              piVar25 = piVar26;
            } while (piVar26 != piVar3);
            break;
                  case 7:
            do {
              piVar26 = piVar25 + 1;
              Col<7>::idct((uchar *)piVar8,piVar25);
              piVar8 = (int *)((long)piVar8 + 1);
              piVar25 = piVar26;
            } while (piVar26 != piVar3);
            break;
                  case 8:
            do {
              piVar26 = piVar25 + 1;
              Col<8>::idct((uchar *)piVar8,piVar25);
              piVar8 = (int *)((long)piVar8 + 1);
              piVar25 = piVar26;
            } while (piVar26 != piVar3);
               }

               goto LAB_00108b38;
            }

            LAB_00108e20:uVar2 = ( *psVar14 + 4 >> 3 ) + 0x80;
            if (0xff < uVar2) {
               uVar2 = (int)~uVar2 >> 0x1f & 0xff;
            }

            iVar9 = uVar2 * 0x1010101;
            *piVar12 = iVar9;
            for (int i = 0; i < 15; i++) {
               piVar12[( i + 1 )] = iVar9;
            }

         }

         LAB_00108b38:psVar14 = psVar14 + 0x40;
         piVar12 = piVar12 + 0x10;
         lVar21 = lVar21 + 1;
      }
 while ( (int)lVar21 < *(int*)( this + 0x24c ) );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   switchD_001085e8_caseD_0:piVar25 = piVar25 + 1;
   piVar8 = (int*)( (long)piVar8 + 1 );
   if (piVar25 == piVar3) goto LAB_00108b38;
   goto LAB_001085d1;
}
/* jpgd::jpeg_decoder::load_next_row() */void jpgd::jpeg_decoder::load_next_row(jpeg_decoder *this) {
   jpeg_decoder *pjVar1;
   short sVar2;
   long *plVar3;
   long lVar4;
   long lVar5;
   undefined8 uVar6;
   long lVar7;
   short *psVar8;
   undefined8 *puVar9;
   long lVar10;
   long lVar11;
   jpeg_decoder *pjVar12;
   int iVar13;
   int iVar14;
   int iVar15;
   long lVar16;
   int iVar17;
   long lVar18;
   int iVar19;
   long in_FS_OFFSET;
   int local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   iVar13 = 0;
   if (0 < *(int*)( this + 0x254 )) {
      do {
         lVar18 = 0;
         iVar19 = 0;
         local_60 = 0;
         if (0 < *(int*)( this + 0x24c )) {
            do {
               lVar16 = (long)*(int*)( this + lVar18 * 4 + 0x25c );
               if (3 < *(int*)( this + lVar16 * 4 + 0x1c0 )) {
                  LAB_0010917a:/* WARNING: Subroutine does not return */stop_decoding(this, 0xffffff1a);
               }

               plVar3 = *(long**)( this + lVar16 * 8 + 0x300 );
               iVar14 = *(int*)( local_58 + lVar16 * 4 );
               lVar4 = *(long*)( this + (long)*(int*)( this + lVar16 * 4 + 0x1c0 ) * 8 + 0x178 );
               lVar10 = plVar3[1];
               iVar15 = iVar14 + iVar19;
               iVar17 = local_60 + *(int*)( this + lVar16 * 4 + 0x324 );
               psVar8 = (short*)( lVar18 * 0x80 + *(long*)( this + 0x2478 ) );
               if (( (int)lVar10 <= iVar15 ) || ( *(int*)( (long)plVar3 + 0xc ) <= iVar17 )) goto LAB_0010917a;
               lVar5 = *plVar3;
               lVar7 = plVar3[3];
               plVar3 = *(long**)( this + lVar16 * 8 + 0x2e0 );
               if (( (int)plVar3[1] <= iVar15 ) || ( *(int*)( (long)plVar3 + 0xc ) <= iVar17 )) goto LAB_0010917a;
               sVar2 = *(short*)( (long)( (int)plVar3[1] * (int)plVar3[3] * iVar17 ) + *plVar3 + (long)( iVar15 * (int)plVar3[3] ) );
               lVar11 = 0x3f;
               *psVar8 = sVar2;
               puVar9 = (undefined8*)( (long)( (int)lVar10 * (int)lVar7 * iVar17 ) + (long)( (int)lVar7 * iVar15 ) + 2 + lVar5 );
               uVar6 = puVar9[1];
               *(undefined8*)( psVar8 + 1 ) = *puVar9;
               *(undefined8*)( psVar8 + 5 ) = uVar6;
               for (int i = 0; i < 6; i++) {
                  uVar6 = puVar9[( 2*i + 3 )];
                  *(undefined8*)( psVar8 + ( 8*i + 9 ) ) = puVar9[( 2*i + 2 )];
                  *(undefined8*)( psVar8 + ( 8*i + 13 ) ) = uVar6;
               }

               uVar6 = *(undefined8*)( (long)puVar9 + 0x76 );
               *(undefined8*)( psVar8 + 0x38 ) = *(undefined8*)( (long)puVar9 + 0x6e );
               *(undefined8*)( psVar8 + 0x3c ) = uVar6;
               lVar10 = 0x3f;
               while (psVar8[lVar10] == 0) {
                  lVar11 = lVar11 + -1;
                  if (lVar11 == 0) {
                     iVar17 = 1;
                     iVar15 = 0;
                     goto LAB_0010902c;
                  }

                  lVar10 = (long)*(int*)( g_ZAG + lVar11 * 4 );
               }
;
               iVar15 = (int)lVar11;
               iVar17 = iVar15 + 1;
               sVar2 = psVar8[lVar10];
               LAB_0010902c:*(int*)( this + lVar18 * 4 + 0x2480 ) = iVar17;
               lVar10 = (long)iVar15;
               while (true) {
                  if (sVar2 != 0) {
                     psVar8[*(int*)( g_ZAG + lVar10 * 4 )] = sVar2 * *(short*)( lVar4 + lVar10 * 2 );
                  }

                  lVar10 = lVar10 + -1;
                  if ((int)lVar10 == -1) break;
                  sVar2 = psVar8[*(int*)( g_ZAG + lVar10 * 4 )];
               }
;
               if (*(int*)( this + 0x200 ) == 1) {
                  *(int*)( local_58 + lVar16 * 4 ) = iVar14 + 1;
               }
 else {
                  iVar19 = iVar19 + 1;
                  if (*(int*)( this + lVar16 * 4 + 0x1a0 ) == iVar19) {
                     local_60 = local_60 + 1;
                     if (*(int*)( this + lVar16 * 4 + 0x1b0 ) == local_60) {
                        iVar14 = iVar14 + iVar19;
                        local_60 = 0;
                        iVar19 = 0;
                        *(int*)( local_58 + lVar16 * 4 ) = iVar14;
                     }
 else {
                        iVar19 = 0;
                     }

                  }

               }

               lVar18 = lVar18 + 1;
            }
 while ( (int)lVar18 < *(int*)( this + 0x24c ) );
         }

         iVar19 = iVar13 + 1;
         transform_mcu(this, iVar13);
         iVar13 = iVar19;
      }
 while ( iVar19 < *(int*)( this + 0x254 ) );
   }

   iVar13 = *(int*)( this + 0x200 );
   if (iVar13 == 1) {
      *(int*)( this + (long)*(int*)( this + 0x204 ) * 4 + 0x324 ) = *(int*)( this + (long)*(int*)( this + 0x204 ) * 4 + 0x324 ) + 1;
   }
 else if (0 < iVar13) {
      pjVar12 = this;
      do {
         pjVar1 = pjVar12 + 0x204;
         pjVar12 = pjVar12 + 4;
         *(int*)( this + (long)*(int*)pjVar1 * 4 + 0x324 ) = *(int*)( this + (long)*(int*)pjVar1 * 4 + 0x324 ) + *(int*)( this + (long)*(int*)pjVar1 * 4 + 0x1b0 );
      }
 while ( pjVar12 != this + (long)iVar13 * 4 );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* jpgd::jpeg_decoder::decode_next_row() */void jpgd::jpeg_decoder::decode_next_row(jpeg_decoder *this) {
   byte bVar1;
   byte bVar2;
   int iVar3;
   short *psVar4;
   long lVar5;
   byte *pbVar6;
   long lVar7;
   uint uVar8;
   uint uVar9;
   int iVar10;
   byte *pbVar11;
   long lVar12;
   int *piVar13;
   int iVar14;
   uint uVar15;
   ulong uVar16;
   int iVar17;
   int iVar18;
   uint uVar19;
   uint uVar20;
   long lVar21;
   uint uVar22;
   short *psVar23;
   if (*(int*)( this + 0x254 ) < 1) {
      return;
   }

   iVar14 = 0;
   do {
      if (( *(int*)( this + 0x2450 ) != 0 ) && ( *(int*)( this + 0x2454 ) == 0 )) {
         process_restart(this);
      }

      psVar23 = *(short**)( this + 0x2478 );
      if (0 < *(int*)( this + 0x24c )) {
         lVar21 = 0;
         do {
            iVar10 = *(int*)( this + lVar21 * 4 + 0x25c );
            if (3 < *(int*)( this + (long)iVar10 * 4 + 0x1c0 )) {
               LAB_00109526:/* WARNING: Subroutine does not return */stop_decoding(this, 0xffffff1a);
            }

            psVar4 = *(short**)( this + (long)*(int*)( this + (long)iVar10 * 4 + 0x1c0 ) * 8 + 0x178 );
            lVar5 = *(long*)( this + (long)*(int*)( this + (long)iVar10 * 4 + 0x214 ) * 8 + 0x2a0 );
            if (lVar5 == 0) goto LAB_00109526;
            uVar22 = *(uint*)( lVar5 + 0x404 + ( ulong )(*(uint*)( this + 0x244c ) >> 0x18) * 4 );
            uVar16 = (ulong)uVar22;
            if ((int)uVar22 < 0) {
               iVar17 = 0x17;
               do {
                  uVar22 = -((*(uint *)(this + 0x244c) >> ((byte)iVar17 & 0x1f) & 1) + (int)uVar16);
                  if (( 0x1ff < uVar22 ) || ( iVar17 < 0 )) goto LAB_00109526;
                  uVar22 = *(uint*)( lVar5 + 0x904 + (ulong)uVar22 * 4 );
                  uVar16 = (ulong)(int)uVar22;
                  iVar17 = iVar17 + -1;
               }
 while ( (int)uVar22 < 0 );
               get_bits_no_markers(this, 0x1f - iVar17);
               uVar9 = get_bits_no_markers(this, uVar22 & 0xf);
            }
 else {
               if (( uVar22 & 0x8000 ) == 0) {
                  uVar8 = (int)uVar22 >> 8 & 0x1f;
                  uVar15 = uVar22 & 0xf;
                  uVar9 = uVar8 + uVar15;
                  if (uVar9 < 0x11) {
                     uVar9 = get_bits_no_markers(this, uVar9);
                     uVar9 = ( 1 << (sbyte)uVar15 ) - 1U & uVar9;
                  }
 else {
                     get_bits_no_markers(this, uVar8);
                     uVar9 = get_bits_no_markers(this, uVar15);
                  }

               }
 else {
                  get_bits_no_markers(this, (int)uVar22 >> 8 & 0xf);
                  uVar9 = (int)uVar22 >> 0x10;
               }

               uVar16 = (ulong)(byte)uVar22;
            }

            if (0xf < (int)uVar16) goto LAB_00109526;
            if ((int)uVar9 < *(int*)( s_extend_test + uVar16 * 4 )) {
               uVar9 = uVar9 + *(int*)( s_extend_offset + uVar16 * 4 );
            }

            iVar17 = *(int*)( this + (long)iVar10 * 4 + 0x2468 );
            *(uint*)( this + (long)iVar10 * 4 + 0x2468 ) = uVar9 + iVar17;
            iVar3 = *(int*)( this + lVar21 * 4 + 0x2480 );
            *psVar23 = (short)( uVar9 + iVar17 ) * *psVar4;
            lVar5 = *(long*)( this + (long)*(int*)( this + (long)iVar10 * 4 + 0x224 ) * 8 + 0x2a0 );
            if (lVar5 == 0) goto LAB_00109526;
            uVar22 = 1;
            do {
               uVar9 = *(uint*)( this + 0x244c );
               uVar8 = *(uint*)( lVar5 + 0x404 + ( ulong )(uVar9 >> 0x18) * 4 );
               if ((int)uVar8 < 0) {
                  iVar10 = 0x17;
                  do {
                     uVar8 = -((uVar9 >> ((byte)iVar10 & 0x1f) & 1) + uVar8);
                     if (( 0x1ff < uVar8 ) || ( iVar10 < 0 )) goto LAB_00109526;
                     uVar8 = *(uint*)( lVar5 + 0x904 + (ulong)uVar8 * 4 );
                     iVar10 = iVar10 + -1;
                  }
 while ( (int)uVar8 < 0 );
                  iVar17 = *(int*)( this + 0x2448 );
                  iVar18 = iVar17 - ( 0x1f - iVar10 );
                  *(int*)( this + 0x2448 ) = iVar18;
                  if (iVar18 < 1) {
                     iVar10 = *(int*)( this + 0x340 );
                     uVar9 = uVar9 << ( (byte)iVar17 & 0x1f );
                     *(uint*)( this + 0x244c ) = uVar9;
                     if (iVar10 < 2) {
                        if (iVar10 == 0) {
                           prep_in_buffer(this);
                           iVar10 = *(int*)( this + 0x340 );
                           if (iVar10 != 0) goto LAB_0010a038;
                           uVar9 = *(uint*)( this + 0x344 );
                           *(uint*)( this + 0x344 ) = uVar9 ^ 1;
                           uVar9 = ( -(uint)(uVar9 == 0) & 0x2600 ) + 0xd900;
                        }
 else {
                           LAB_0010a038:pbVar6 = *(byte**)( this + 0x338 );
                           iVar10 = iVar10 + -1;
                           pbVar11 = pbVar6 + 1;
                           *(byte**)( this + 0x338 ) = pbVar11;
                           bVar1 = *pbVar6;
                           *(int*)( this + 0x340 ) = iVar10;
                           if (bVar1 == 0xff) {
                              if (iVar10 == 0) {
                                 prep_in_buffer(this);
                                 iVar10 = *(int*)( this + 0x340 );
                                 if (iVar10 == 0) {
                                    lVar12 = *(long*)( this + 0x338 );
                                    *(uint*)( this + 0x344 ) = *(uint*)( this + 0x344 ) ^ 1;
                                    *(long*)( this + 0x338 ) = lVar12 + -1;
                                    uVar9 = 0xff00;
                                    *(undefined1*)( lVar12 + -1 ) = 0xff;
                                    iVar10 = *(int*)( this + 0x340 ) + 1;
                                    *(int*)( this + 0x340 ) = iVar10;
                                    goto LAB_0010a066;
                                 }

                                 pbVar11 = *(byte**)( this + 0x338 );
                              }

                              LAB_0010a4ea:iVar10 = iVar10 + -1;
                              *(byte**)( this + 0x338 ) = pbVar11 + 1;
                              bVar1 = *pbVar11;
                              uVar9 = 0xff00;
                              *(int*)( this + 0x340 ) = iVar10;
                              if (bVar1 != 0) {
                                 *(byte**)( this + 0x338 ) = pbVar11;
                                 *pbVar11 = bVar1;
                                 lVar12 = *(long*)( this + 0x338 );
                                 *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
                                 *(long*)( this + 0x338 ) = lVar12 + -1;
                                 *(undefined1*)( lVar12 + -1 ) = 0xff;
                                 iVar10 = *(int*)( this + 0x340 ) + 1;
                                 *(int*)( this + 0x340 ) = iVar10;
                              }

                           }
 else {
                              uVar9 = (uint)bVar1 << 8;
                           }

                           LAB_0010a066:if (iVar10 != 0) goto LAB_00109bbc;
                        }

                        prep_in_buffer(this);
                        iVar10 = *(int*)( this + 0x340 );
                        if (iVar10 == 0) {
                           uVar15 = *(uint*)( this + 0x344 );
                           *(uint*)( this + 0x344 ) = uVar15 ^ 1;
                           uVar15 = ( -(uint)(uVar15 == 0) & 0x26 ) + 0xd9;
                        }
 else {
                           LAB_00109bbc:pbVar6 = *(byte**)( this + 0x338 );
                           iVar10 = iVar10 + -1;
                           pbVar11 = pbVar6 + 1;
                           *(byte**)( this + 0x338 ) = pbVar11;
                           bVar1 = *pbVar6;
                           uVar15 = (uint)bVar1;
                           *(int*)( this + 0x340 ) = iVar10;
                           if (bVar1 == 0xff) {
                              if (iVar10 == 0) {
                                 prep_in_buffer(this);
                                 iVar10 = *(int*)( this + 0x340 );
                                 if (iVar10 != 0) {
                                    pbVar11 = *(byte**)( this + 0x338 );
                                    goto LAB_0010a460;
                                 }

                                 *(uint*)( this + 0x344 ) = *(uint*)( this + 0x344 ) ^ 1;
                              }
 else {
                                 LAB_0010a460:*(byte**)( this + 0x338 ) = pbVar11 + 1;
                                 bVar1 = *pbVar11;
                                 *(int*)( this + 0x340 ) = iVar10 + -1;
                                 if (bVar1 == 0) goto LAB_00109be9;
                                 *(byte**)( this + 0x338 ) = pbVar11;
                                 *pbVar11 = bVar1;
                                 *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
                              }

                              lVar12 = *(long*)( this + 0x338 );
                              *(long*)( this + 0x338 ) = lVar12 + -1;
                              *(undefined1*)( lVar12 + -1 ) = 0xff;
                              *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
                           }

                        }

                        LAB_00109be9:iVar18 = *(int*)( this + 0x2448 );
                        uVar9 = uVar15 | uVar9 | *(uint*)( this + 0x244c );
                     }
 else {
                        pbVar6 = *(byte**)( this + 0x338 );
                        bVar1 = *pbVar6;
                        if (( bVar1 == 0xff ) || ( bVar2 = bVar2 == 0xff )) {
                           pbVar11 = pbVar6 + 1;
                           iVar10 = iVar10 + -1;
                           *(byte**)( this + 0x338 ) = pbVar11;
                           bVar1 = *pbVar6;
                           *(int*)( this + 0x340 ) = iVar10;
                           if (bVar1 == 0xff) goto LAB_0010a4ea;
                           uVar9 = (uint)bVar1 << 8;
                           goto LAB_00109bbc;
                        }

                        *(int*)( this + 0x340 ) = iVar10 + -2;
                        *(byte**)( this + 0x338 ) = pbVar6 + 2;
                        uVar9 = bVar2 | uVar9 | (uint)bVar1 << 8;
                     }

                     *(int*)( this + 0x2448 ) = iVar18 + 0x10;
                     *(uint*)( this + 0x244c ) = uVar9 << ( -(char)iVar18 & 0x1fU );
                  }
 else {
                     *(uint*)( this + 0x244c ) = uVar9 << ( ( byte )(0x1f - iVar10) & 0x1f );
                  }

                  uVar20 = uVar8 & 0xf;
                  uVar9 = (int)uVar8 >> 4;
                  if (uVar20 == 0) {
                     LAB_001094f5:if (uVar9 == 0xf) goto LAB_001094fe;
                     break;
                  }

                  iVar10 = *(int*)( this + 0x2448 );
                  uVar15 = *(uint*)( this + 0x244c );
                  lVar12 = (long)(int)uVar20;
                  iVar17 = iVar10 - uVar20;
                  *(int*)( this + 0x2448 ) = iVar17;
                  if (iVar17 < 1) {
                     uVar19 = uVar15 << ( (byte)iVar10 & 0x1f );
                     *(uint*)( this + 0x244c ) = uVar19;
                     iVar10 = *(int*)( this + 0x340 );
                     if (iVar10 < 2) {
                        if (iVar10 == 0) {
                           prep_in_buffer(this);
                           lVar12 = (long)(int)( uVar8 & 0xf );
                           iVar10 = *(int*)( this + 0x340 );
                           if (iVar10 != 0) goto LAB_00109ad4;
                           uVar8 = *(uint*)( this + 0x344 );
                           *(uint*)( this + 0x344 ) = uVar8 ^ 1;
                           uVar8 = ( -(uint)(uVar8 == 0) & 0x2600 ) + 0xd900;
                        }
 else {
                           LAB_00109ad4:pbVar6 = *(byte**)( this + 0x338 );
                           iVar10 = iVar10 + -1;
                           pbVar11 = pbVar6 + 1;
                           *(byte**)( this + 0x338 ) = pbVar11;
                           bVar1 = *pbVar6;
                           *(int*)( this + 0x340 ) = iVar10;
                           if (bVar1 == 0xff) {
                              if (iVar10 == 0) {
                                 prep_in_buffer(this);
                                 lVar12 = (long)(int)lVar12;
                                 iVar10 = *(int*)( this + 0x340 );
                                 if (iVar10 == 0) {
                                    lVar7 = *(long*)( this + 0x338 );
                                    *(uint*)( this + 0x344 ) = *(uint*)( this + 0x344 ) ^ 1;
                                    uVar8 = 0xff00;
                                    *(long*)( this + 0x338 ) = lVar7 + -1;
                                    *(undefined1*)( lVar7 + -1 ) = 0xff;
                                    iVar10 = *(int*)( this + 0x340 ) + 1;
                                    *(int*)( this + 0x340 ) = iVar10;
                                    goto LAB_00109b05;
                                 }

                                 pbVar11 = *(byte**)( this + 0x338 );
                              }

                              LAB_0010a5d0:iVar10 = iVar10 + -1;
                              uVar8 = 0xff00;
                              *(byte**)( this + 0x338 ) = pbVar11 + 1;
                              bVar1 = *pbVar11;
                              *(int*)( this + 0x340 ) = iVar10;
                              if (bVar1 != 0) {
                                 *(byte**)( this + 0x338 ) = pbVar11;
                                 *pbVar11 = bVar1;
                                 lVar7 = *(long*)( this + 0x338 );
                                 *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
                                 *(long*)( this + 0x338 ) = lVar7 + -1;
                                 *(undefined1*)( lVar7 + -1 ) = 0xff;
                                 iVar10 = *(int*)( this + 0x340 ) + 1;
                                 *(int*)( this + 0x340 ) = iVar10;
                              }

                           }
 else {
                              uVar8 = (uint)bVar1 << 8;
                           }

                           LAB_00109b05:if (iVar10 != 0) goto LAB_00109b0d;
                        }

                        prep_in_buffer(this);
                        lVar12 = (long)(int)lVar12;
                        iVar10 = *(int*)( this + 0x340 );
                        if (iVar10 == 0) {
                           uVar19 = *(uint*)( this + 0x344 );
                           *(uint*)( this + 0x344 ) = uVar19 ^ 1;
                           uVar19 = ( -(uint)(uVar19 == 0) & 0x26 ) + 0xd9;
                        }
 else {
                           LAB_00109b0d:pbVar6 = *(byte**)( this + 0x338 );
                           iVar10 = iVar10 + -1;
                           pbVar11 = pbVar6 + 1;
                           *(byte**)( this + 0x338 ) = pbVar11;
                           uVar19 = ( uint ) * pbVar6;
                           *(int*)( this + 0x340 ) = iVar10;
                           if (uVar19 == 0xff) {
                              if (iVar10 == 0) {
                                 prep_in_buffer(this);
                                 iVar10 = *(int*)( this + 0x340 );
                                 lVar12 = (long)(int)lVar12;
                                 if (iVar10 != 0) {
                                    pbVar11 = *(byte**)( this + 0x338 );
                                    goto LAB_00109b3e;
                                 }

                                 *(uint*)( this + 0x344 ) = *(uint*)( this + 0x344 ) ^ 1;
                              }
 else {
                                 LAB_00109b3e:*(byte**)( this + 0x338 ) = pbVar11 + 1;
                                 bVar1 = *pbVar11;
                                 *(int*)( this + 0x340 ) = iVar10 + -1;
                                 if (bVar1 == 0) goto LAB_00109abe;
                                 *(byte**)( this + 0x338 ) = pbVar11;
                                 *pbVar11 = bVar1;
                                 *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
                              }

                              lVar7 = *(long*)( this + 0x338 );
                              *(long*)( this + 0x338 ) = lVar7 + -1;
                              *(undefined1*)( lVar7 + -1 ) = 0xff;
                              *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
                           }

                        }

                        LAB_00109abe:iVar17 = *(int*)( this + 0x2448 );
                        uVar8 = uVar19 | uVar8 | *(uint*)( this + 0x244c );
                     }
 else {
                        pbVar6 = *(byte**)( this + 0x338 );
                        bVar1 = *pbVar6;
                        if (( bVar1 == 0xff ) || ( bVar2 = bVar2 == 0xff )) {
                           pbVar11 = pbVar6 + 1;
                           iVar10 = iVar10 + -1;
                           *(byte**)( this + 0x338 ) = pbVar11;
                           bVar1 = *pbVar6;
                           *(int*)( this + 0x340 ) = iVar10;
                           if (bVar1 == 0xff) goto LAB_0010a5d0;
                           uVar8 = (uint)bVar1 << 8;
                           goto LAB_00109b0d;
                        }

                        *(int*)( this + 0x340 ) = iVar10 + -2;
                        *(byte**)( this + 0x338 ) = pbVar6 + 2;
                        uVar8 = (uint)bVar1 << 8 | uVar19 | bVar2;
                     }

                     *(int*)( this + 0x2448 ) = iVar17 + 0x10;
                     *(uint*)( this + 0x244c ) = uVar8 << ( -(char)iVar17 & 0x1fU );
                  }
 else {
                     *(uint*)( this + 0x244c ) = uVar15 << (sbyte)uVar20;
                  }

                  uVar15 = uVar15 >> ( 0x20U - (sbyte)uVar20 & 0x1f );
                  LAB_001093c4:uVar8 = uVar22;
                  if (uVar9 != 0) {
                     uVar8 = uVar9 + uVar22;
                     if (0x3f < (int)uVar8) goto LAB_00109526;
                     if ((int)uVar22 < iVar3) {
                        piVar13 = (int*)( g_ZAG + (long)(int)uVar22 * 4 );
                        uVar20 = iVar3 - uVar22;
                        if ((int)uVar9 < (int)( iVar3 - uVar22 )) {
                           uVar20 = uVar9;
                        }

                        do {
                           iVar10 = *piVar13;
                           piVar13 = piVar13 + 1;
                           psVar23[iVar10] = 0;
                        }
 while ( (int*)( g_ZAG + ( ( ulong )(uVar20 - 1) + (long)(int)uVar22 ) * 4 + 4 ) != piVar13 );
                     }

                  }

                  if ((int)uVar15 < *(int*)( s_extend_test + lVar12 * 4 )) {
                     uVar15 = uVar15 + *(int*)( s_extend_offset + lVar12 * 4 );
                  }

                  psVar23[*(int*)( g_ZAG + (long)(int)uVar8 * 4 )] = psVar4[(int)uVar8] * (short)uVar15;
               }
 else {
                  if (( uVar8 & 0x8000 ) != 0) {
                     uVar15 = (int)uVar8 >> 8 & 0xf;
                     if (uVar15 != 0) {
                        iVar10 = *(int*)( this + 0x2448 );
                        iVar17 = iVar10 - uVar15;
                        *(int*)( this + 0x2448 ) = iVar17;
                        if (iVar17 < 1) {
                           uVar9 = uVar9 << ( (byte)iVar10 & 0x1f );
                           iVar10 = *(int*)( this + 0x340 );
                           *(uint*)( this + 0x244c ) = uVar9;
                           if (iVar10 < 2) {
                              if (iVar10 == 0) {
                                 prep_in_buffer(this);
                                 iVar10 = *(int*)( this + 0x340 );
                                 if (iVar10 != 0) goto LAB_0010a12b;
                                 uVar9 = *(uint*)( this + 0x344 );
                                 *(uint*)( this + 0x344 ) = uVar9 ^ 1;
                                 uVar9 = ( -(uint)(uVar9 == 0) & 0x2600 ) + 0xd900;
                              }
 else {
                                 LAB_0010a12b:pbVar6 = *(byte**)( this + 0x338 );
                                 iVar10 = iVar10 + -1;
                                 pbVar11 = pbVar6 + 1;
                                 *(byte**)( this + 0x338 ) = pbVar11;
                                 bVar1 = *pbVar6;
                                 *(int*)( this + 0x340 ) = iVar10;
                                 uVar9 = (uint)bVar1;
                                 if (uVar9 == 0xff) {
                                    if (iVar10 == 0) {
                                       prep_in_buffer(this);
                                       iVar10 = *(int*)( this + 0x340 );
                                       if (iVar10 == 0) {
                                          lVar12 = *(long*)( this + 0x338 );
                                          *(uint*)( this + 0x344 ) = *(uint*)( this + 0x344 ) ^ 1;
                                          uVar9 = 0xff00;
                                          *(long*)( this + 0x338 ) = lVar12 + -1;
                                          *(undefined1*)( lVar12 + -1 ) = 0xff;
                                          iVar10 = *(int*)( this + 0x340 ) + 1;
                                          *(int*)( this + 0x340 ) = iVar10;
                                          goto LAB_0010a15c;
                                       }

                                       pbVar11 = *(byte**)( this + 0x338 );
                                    }

                                    LAB_0010a73f:iVar10 = iVar10 + -1;
                                    uVar9 = 0xff00;
                                    *(byte**)( this + 0x338 ) = pbVar11 + 1;
                                    bVar1 = *pbVar11;
                                    *(int*)( this + 0x340 ) = iVar10;
                                    if (bVar1 != 0) {
                                       *(byte**)( this + 0x338 ) = pbVar11;
                                       *pbVar11 = bVar1;
                                       lVar12 = *(long*)( this + 0x338 );
                                       *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
                                       *(long*)( this + 0x338 ) = lVar12 + -1;
                                       *(undefined1*)( lVar12 + -1 ) = 0xff;
                                       iVar10 = *(int*)( this + 0x340 ) + 1;
                                       *(int*)( this + 0x340 ) = iVar10;
                                    }

                                 }
 else {
                                    uVar9 = uVar9 << 8;
                                 }

                                 LAB_0010a15c:if (iVar10 != 0) goto LAB_0010a164;
                              }

                              prep_in_buffer(this);
                              iVar10 = *(int*)( this + 0x340 );
                              if (iVar10 == 0) {
                                 uVar15 = *(uint*)( this + 0x344 );
                                 *(uint*)( this + 0x344 ) = uVar15 ^ 1;
                                 uVar15 = ( -(uint)(uVar15 == 0) & 0x26 ) + 0xd9;
                              }
 else {
                                 LAB_0010a164:pbVar6 = *(byte**)( this + 0x338 );
                                 iVar10 = iVar10 + -1;
                                 pbVar11 = pbVar6 + 1;
                                 *(byte**)( this + 0x338 ) = pbVar11;
                                 uVar15 = ( uint ) * pbVar6;
                                 *(int*)( this + 0x340 ) = iVar10;
                                 if (uVar15 == 0xff) {
                                    if (iVar10 == 0) {
                                       prep_in_buffer(this);
                                       iVar10 = *(int*)( this + 0x340 );
                                       if (iVar10 != 0) {
                                          pbVar11 = *(byte**)( this + 0x338 );
                                          goto LAB_0010a193;
                                       }

                                       *(uint*)( this + 0x344 ) = *(uint*)( this + 0x344 ) ^ 1;
                                    }
 else {
                                       LAB_0010a193:*(byte**)( this + 0x338 ) = pbVar11 + 1;
                                       bVar1 = *pbVar11;
                                       *(int*)( this + 0x340 ) = iVar10 + -1;
                                       if (bVar1 == 0) goto LAB_0010a115;
                                       *(byte**)( this + 0x338 ) = pbVar11;
                                       *pbVar11 = bVar1;
                                       *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
                                    }

                                    lVar12 = *(long*)( this + 0x338 );
                                    *(long*)( this + 0x338 ) = lVar12 + -1;
                                    *(undefined1*)( lVar12 + -1 ) = 0xff;
                                    *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
                                 }

                              }

                              LAB_0010a115:iVar17 = *(int*)( this + 0x2448 );
                              uVar9 = uVar15 | uVar9 | *(uint*)( this + 0x244c );
                           }
 else {
                              pbVar6 = *(byte**)( this + 0x338 );
                              bVar1 = *pbVar6;
                              if (( bVar1 == 0xff ) || ( bVar2 = bVar2 == 0xff )) {
                                 pbVar11 = pbVar6 + 1;
                                 iVar10 = iVar10 + -1;
                                 *(byte**)( this + 0x338 ) = pbVar11;
                                 bVar1 = *pbVar6;
                                 *(int*)( this + 0x340 ) = iVar10;
                                 if (bVar1 == 0xff) goto LAB_0010a73f;
                                 uVar9 = (uint)bVar1 << 8;
                                 goto LAB_0010a164;
                              }

                              *(int*)( this + 0x340 ) = iVar10 + -2;
                              uVar9 = uVar9 | bVar2 | (uint)bVar1 << 8;
                              *(byte**)( this + 0x338 ) = pbVar6 + 2;
                           }

                           *(uint*)( this + 0x244c ) = uVar9 << ( -(char)iVar17 & 0x1fU );
                           *(int*)( this + 0x2448 ) = iVar17 + 0x10;
                        }
 else {
                           *(uint*)( this + 0x244c ) = uVar9 << (sbyte)uVar15;
                        }

                     }

                     uVar15 = (int)uVar8 >> 0x10;
                     LAB_001093b0:uVar9 = (int)uVar8 >> 4 & 0xf;
                     lVar12 = (long)(int)( uVar8 & 0xf );
                     if (( uVar8 & 0xf ) != 0) goto LAB_001093c4;
                     goto LAB_001094f5;
                  }

                  uVar15 = (int)uVar8 >> 8 & 0x1f;
                  uVar20 = uVar15 + ( uVar8 & 0xf );
                  if (uVar20 < 0x11) {
                     if (uVar20 == 0) goto LAB_001095c8;
                     iVar10 = *(int*)( this + 0x2448 );
                     iVar17 = iVar10 - uVar20;
                     *(int*)( this + 0x2448 ) = iVar17;
                     uVar15 = ( 1 << ( sbyte )(uVar8 & 0xf) ) - 1U & uVar9 >> ( 0x20 - (byte)uVar20 & 0x1f );
                     if (iVar17 < 1) {
                        iVar18 = *(int*)( this + 0x340 );
                        uVar9 = uVar9 << ( (byte)iVar10 & 0x1f );
                        *(uint*)( this + 0x244c ) = uVar9;
                        if (iVar18 < 2) {
                           if (iVar18 == 0) {
                              prep_in_buffer(this);
                              iVar18 = *(int*)( this + 0x340 );
                              if (iVar18 != 0) goto LAB_00109e04;
                              uVar9 = *(uint*)( this + 0x344 );
                              *(uint*)( this + 0x344 ) = uVar9 ^ 1;
                              uVar9 = ( -(uint)(uVar9 == 0) & 0x2600 ) + 0xd900;
                           }
 else {
                              LAB_00109e04:pbVar6 = *(byte**)( this + 0x338 );
                              iVar18 = iVar18 + -1;
                              pbVar11 = pbVar6 + 1;
                              *(byte**)( this + 0x338 ) = pbVar11;
                              bVar1 = *pbVar6;
                              *(int*)( this + 0x340 ) = iVar18;
                              uVar9 = (uint)bVar1;
                              if (uVar9 == 0xff) {
                                 if (iVar18 == 0) {
                                    prep_in_buffer(this);
                                    iVar18 = *(int*)( this + 0x340 );
                                    if (iVar18 == 0) {
                                       lVar12 = *(long*)( this + 0x338 );
                                       *(uint*)( this + 0x344 ) = *(uint*)( this + 0x344 ) ^ 1;
                                       *(long*)( this + 0x338 ) = lVar12 + -1;
                                       uVar9 = 0xff00;
                                       *(undefined1*)( lVar12 + -1 ) = 0xff;
                                       iVar18 = *(int*)( this + 0x340 ) + 1;
                                       *(int*)( this + 0x340 ) = iVar18;
                                       goto LAB_00109e32;
                                    }

                                    pbVar11 = *(byte**)( this + 0x338 );
                                 }

                                 LAB_0010a6a5:iVar18 = iVar18 + -1;
                                 *(byte**)( this + 0x338 ) = pbVar11 + 1;
                                 bVar1 = *pbVar11;
                                 uVar9 = 0xff00;
                                 *(int*)( this + 0x340 ) = iVar18;
                                 if (bVar1 != 0) {
                                    *(byte**)( this + 0x338 ) = pbVar11;
                                    *pbVar11 = bVar1;
                                    lVar12 = *(long*)( this + 0x338 );
                                    *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
                                    *(long*)( this + 0x338 ) = lVar12 + -1;
                                    *(undefined1*)( lVar12 + -1 ) = 0xff;
                                    iVar18 = *(int*)( this + 0x340 ) + 1;
                                    *(int*)( this + 0x340 ) = iVar18;
                                 }

                              }
 else {
                                 uVar9 = uVar9 << 8;
                              }

                              LAB_00109e32:if (iVar18 != 0) goto LAB_00109e3a;
                           }

                           prep_in_buffer(this);
                           iVar18 = *(int*)( this + 0x340 );
                           if (iVar18 == 0) {
                              uVar20 = *(uint*)( this + 0x344 );
                              *(uint*)( this + 0x344 ) = uVar20 ^ 1;
                              uVar20 = ( -(uint)(uVar20 == 0) & 0x26 ) + 0xd9;
                           }
 else {
                              LAB_00109e3a:pbVar6 = *(byte**)( this + 0x338 );
                              iVar18 = iVar18 + -1;
                              pbVar11 = pbVar6 + 1;
                              *(byte**)( this + 0x338 ) = pbVar11;
                              uVar20 = ( uint ) * pbVar6;
                              *(int*)( this + 0x340 ) = iVar18;
                              if (uVar20 == 0xff) {
                                 if (iVar18 == 0) {
                                    prep_in_buffer(this);
                                    iVar18 = *(int*)( this + 0x340 );
                                    if (iVar18 != 0) {
                                       pbVar11 = *(byte**)( this + 0x338 );
                                       goto LAB_00109e69;
                                    }

                                    *(uint*)( this + 0x344 ) = *(uint*)( this + 0x344 ) ^ 1;
                                 }
 else {
                                    LAB_00109e69:*(byte**)( this + 0x338 ) = pbVar11 + 1;
                                    bVar1 = *pbVar11;
                                    *(int*)( this + 0x340 ) = iVar18 + -1;
                                    if (bVar1 == 0) goto LAB_00109def;
                                    *(byte**)( this + 0x338 ) = pbVar11;
                                    *pbVar11 = bVar1;
                                    *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
                                 }

                                 lVar12 = *(long*)( this + 0x338 );
                                 *(long*)( this + 0x338 ) = lVar12 + -1;
                                 *(undefined1*)( lVar12 + -1 ) = 0xff;
                                 *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
                              }

                           }

                           LAB_00109def:iVar17 = *(int*)( this + 0x2448 );
                           uVar9 = uVar20 | uVar9 | *(uint*)( this + 0x244c );
                        }
 else {
                           pbVar6 = *(byte**)( this + 0x338 );
                           bVar1 = *pbVar6;
                           if (( bVar1 == 0xff ) || ( bVar2 = bVar2 == 0xff )) {
                              pbVar11 = pbVar6 + 1;
                              iVar18 = iVar18 + -1;
                              *(byte**)( this + 0x338 ) = pbVar11;
                              bVar1 = *pbVar6;
                              *(int*)( this + 0x340 ) = iVar18;
                              if (bVar1 == 0xff) goto LAB_0010a6a5;
                              uVar9 = (uint)bVar1 << 8;
                              goto LAB_00109e3a;
                           }

                           *(int*)( this + 0x340 ) = iVar18 + -2;
                           *(byte**)( this + 0x338 ) = pbVar6 + 2;
                           uVar9 = (uint)bVar1 << 8 | bVar2 | uVar9;
                        }

                        *(int*)( this + 0x2448 ) = iVar17 + 0x10;
                        *(uint*)( this + 0x244c ) = uVar9 << ( -(char)iVar17 & 0x1fU );
                     }
 else {
                        *(uint*)( this + 0x244c ) = uVar9 << ( (byte)uVar20 & 0x1f );
                     }

                     goto LAB_001093b0;
                  }

                  iVar10 = *(int*)( this + 0x2448 );
                  iVar17 = iVar10 - uVar15;
                  *(int*)( this + 0x2448 ) = iVar17;
                  if (iVar17 < 1) {
                     uVar9 = uVar9 << ( (byte)iVar10 & 0x1f );
                     iVar10 = *(int*)( this + 0x340 );
                     *(uint*)( this + 0x244c ) = uVar9;
                     if (iVar10 < 2) {
                        if (iVar10 == 0) {
                           prep_in_buffer(this);
                           iVar10 = *(int*)( this + 0x340 );
                           if (iVar10 != 0) goto LAB_0010a2b9;
                           uVar9 = *(uint*)( this + 0x344 );
                           *(uint*)( this + 0x344 ) = uVar9 ^ 1;
                           uVar9 = ( -(uint)(uVar9 == 0) & 0x2600 ) + 0xd900;
                        }
 else {
                           LAB_0010a2b9:pbVar6 = *(byte**)( this + 0x338 );
                           iVar10 = iVar10 + -1;
                           pbVar11 = pbVar6 + 1;
                           *(byte**)( this + 0x338 ) = pbVar11;
                           bVar1 = *pbVar6;
                           *(int*)( this + 0x340 ) = iVar10;
                           uVar9 = (uint)bVar1;
                           if (uVar9 == 0xff) {
                              if (iVar10 == 0) {
                                 prep_in_buffer(this);
                                 iVar10 = *(int*)( this + 0x340 );
                                 if (iVar10 == 0) {
                                    lVar12 = *(long*)( this + 0x338 );
                                    *(uint*)( this + 0x344 ) = *(uint*)( this + 0x344 ) ^ 1;
                                    *(long*)( this + 0x338 ) = lVar12 + -1;
                                    *(undefined1*)( lVar12 + -1 ) = 0xff;
                                    uVar9 = 0xff00;
                                    iVar10 = *(int*)( this + 0x340 ) + 1;
                                    *(int*)( this + 0x340 ) = iVar10;
                                    goto LAB_0010a2e7;
                                 }

                                 pbVar11 = *(byte**)( this + 0x338 );
                              }

                              LAB_0010a954:iVar10 = iVar10 + -1;
                              *(byte**)( this + 0x338 ) = pbVar11 + 1;
                              bVar1 = *pbVar11;
                              uVar9 = 0xff00;
                              *(int*)( this + 0x340 ) = iVar10;
                              if (bVar1 != 0) {
                                 *(byte**)( this + 0x338 ) = pbVar11;
                                 *pbVar11 = bVar1;
                                 lVar12 = *(long*)( this + 0x338 );
                                 *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
                                 *(long*)( this + 0x338 ) = lVar12 + -1;
                                 *(undefined1*)( lVar12 + -1 ) = 0xff;
                                 iVar10 = *(int*)( this + 0x340 ) + 1;
                                 *(int*)( this + 0x340 ) = iVar10;
                              }

                           }
 else {
                              uVar9 = uVar9 << 8;
                           }

                           LAB_0010a2e7:if (iVar10 != 0) goto LAB_0010a2ef;
                        }

                        prep_in_buffer(this);
                        iVar10 = *(int*)( this + 0x340 );
                        if (iVar10 == 0) {
                           uVar15 = *(uint*)( this + 0x344 );
                           *(uint*)( this + 0x344 ) = uVar15 ^ 1;
                           uVar15 = ( -(uint)(uVar15 == 0) & 0x26 ) + 0xd9;
                        }
 else {
                           LAB_0010a2ef:pbVar6 = *(byte**)( this + 0x338 );
                           iVar10 = iVar10 + -1;
                           pbVar11 = pbVar6 + 1;
                           *(byte**)( this + 0x338 ) = pbVar11;
                           bVar1 = *pbVar6;
                           uVar15 = (uint)bVar1;
                           *(int*)( this + 0x340 ) = iVar10;
                           if (bVar1 == 0xff) {
                              if (iVar10 == 0) {
                                 prep_in_buffer(this);
                                 iVar10 = *(int*)( this + 0x340 );
                                 if (iVar10 != 0) {
                                    pbVar11 = *(byte**)( this + 0x338 );
                                    goto LAB_0010a320;
                                 }

                                 *(uint*)( this + 0x344 ) = *(uint*)( this + 0x344 ) ^ 1;
                              }
 else {
                                 LAB_0010a320:*(byte**)( this + 0x338 ) = pbVar11 + 1;
                                 bVar1 = *pbVar11;
                                 *(int*)( this + 0x340 ) = iVar10 + -1;
                                 if (bVar1 == 0) goto LAB_0010a2a3;
                                 *(byte**)( this + 0x338 ) = pbVar11;
                                 *pbVar11 = bVar1;
                                 *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
                              }

                              lVar12 = *(long*)( this + 0x338 );
                              *(long*)( this + 0x338 ) = lVar12 + -1;
                              *(undefined1*)( lVar12 + -1 ) = 0xff;
                              *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
                           }

                        }

                        LAB_0010a2a3:iVar17 = *(int*)( this + 0x2448 );
                        uVar9 = uVar9 | uVar15 | *(uint*)( this + 0x244c );
                     }
 else {
                        pbVar6 = *(byte**)( this + 0x338 );
                        bVar1 = *pbVar6;
                        if (( bVar1 == 0xff ) || ( bVar2 = bVar2 == 0xff )) {
                           pbVar11 = pbVar6 + 1;
                           iVar10 = iVar10 + -1;
                           *(byte**)( this + 0x338 ) = pbVar11;
                           bVar1 = *pbVar6;
                           *(int*)( this + 0x340 ) = iVar10;
                           if (bVar1 == 0xff) goto LAB_0010a954;
                           uVar9 = (uint)bVar1 << 8;
                           goto LAB_0010a2ef;
                        }

                        *(int*)( this + 0x340 ) = iVar10 + -2;
                        uVar9 = uVar9 | bVar2 | (uint)bVar1 << 8;
                        *(byte**)( this + 0x338 ) = pbVar6 + 2;
                     }

                     *(int*)( this + 0x2448 ) = iVar17 + 0x10;
                     *(uint*)( this + 0x244c ) = uVar9 << ( -(char)iVar17 & 0x1fU );
                  }
 else {
                     *(uint*)( this + 0x244c ) = uVar9 << (sbyte)uVar15;
                  }

                  uVar9 = uVar8 & 0xf;
                  if (uVar9 != 0) {
                     uVar20 = *(uint*)( this + 0x244c );
                     uVar15 = uVar20 >> ( 0x20U - (sbyte)uVar9 & 0x1f );
                     iVar10 = *(int*)( this + 0x2448 );
                     iVar17 = iVar10 - uVar9;
                     *(int*)( this + 0x2448 ) = iVar17;
                     if (0 < iVar17) {
                        *(uint*)( this + 0x244c ) = uVar20 << (sbyte)uVar9;
                        goto LAB_001093b0;
                     }

                     uVar20 = uVar20 << ( (byte)iVar10 & 0x1f );
                     iVar10 = *(int*)( this + 0x340 );
                     *(uint*)( this + 0x244c ) = uVar20;
                     if (iVar10 < 2) {
                        if (iVar10 == 0) {
                           prep_in_buffer(this);
                           iVar10 = *(int*)( this + 0x340 );
                           if (iVar10 != 0) goto LAB_00109f7c;
                           uVar9 = *(uint*)( this + 0x344 );
                           *(uint*)( this + 0x344 ) = uVar9 ^ 1;
                           uVar9 = ( -(uint)(uVar9 == 0) & 0x2600 ) + 0xd900;
                        }
 else {
                           LAB_00109f7c:pbVar6 = *(byte**)( this + 0x338 );
                           iVar10 = iVar10 + -1;
                           pbVar11 = pbVar6 + 1;
                           *(byte**)( this + 0x338 ) = pbVar11;
                           bVar1 = *pbVar6;
                           *(int*)( this + 0x340 ) = iVar10;
                           if (bVar1 == 0xff) {
                              if (iVar10 == 0) {
                                 prep_in_buffer(this);
                                 iVar10 = *(int*)( this + 0x340 );
                                 if (iVar10 == 0) {
                                    lVar12 = *(long*)( this + 0x338 );
                                    *(uint*)( this + 0x344 ) = *(uint*)( this + 0x344 ) ^ 1;
                                    uVar9 = 0xff00;
                                    *(long*)( this + 0x338 ) = lVar12 + -1;
                                    *(undefined1*)( lVar12 + -1 ) = 0xff;
                                    iVar10 = *(int*)( this + 0x340 ) + 1;
                                    *(int*)( this + 0x340 ) = iVar10;
                                    goto LAB_00109faa;
                                 }

                                 pbVar11 = *(byte**)( this + 0x338 );
                              }

                              LAB_0010a7da:iVar10 = iVar10 + -1;
                              *(byte**)( this + 0x338 ) = pbVar11 + 1;
                              bVar1 = *pbVar11;
                              uVar9 = 0xff00;
                              *(int*)( this + 0x340 ) = iVar10;
                              if (bVar1 != 0) {
                                 *(byte**)( this + 0x338 ) = pbVar11;
                                 *pbVar11 = bVar1;
                                 lVar12 = *(long*)( this + 0x338 );
                                 *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
                                 *(long*)( this + 0x338 ) = lVar12 + -1;
                                 *(undefined1*)( lVar12 + -1 ) = 0xff;
                                 iVar10 = *(int*)( this + 0x340 ) + 1;
                                 *(int*)( this + 0x340 ) = iVar10;
                              }

                           }
 else {
                              uVar9 = (uint)bVar1 << 8;
                           }

                           LAB_00109faa:if (iVar10 != 0) goto LAB_00109fb2;
                        }

                        prep_in_buffer(this);
                        iVar10 = *(int*)( this + 0x340 );
                        if (iVar10 == 0) {
                           uVar20 = *(uint*)( this + 0x344 );
                           *(uint*)( this + 0x344 ) = uVar20 ^ 1;
                           uVar20 = ( -(uint)(uVar20 == 0) & 0x26 ) + 0xd9;
                        }
 else {
                           LAB_00109fb2:pbVar6 = *(byte**)( this + 0x338 );
                           iVar10 = iVar10 + -1;
                           pbVar11 = pbVar6 + 1;
                           *(byte**)( this + 0x338 ) = pbVar11;
                           uVar20 = ( uint ) * pbVar6;
                           *(int*)( this + 0x340 ) = iVar10;
                           if (uVar20 == 0xff) {
                              if (iVar10 == 0) {
                                 prep_in_buffer(this);
                                 iVar10 = *(int*)( this + 0x340 );
                                 if (iVar10 != 0) {
                                    pbVar11 = *(byte**)( this + 0x338 );
                                    goto LAB_00109fe1;
                                 }

                                 *(uint*)( this + 0x344 ) = *(uint*)( this + 0x344 ) ^ 1;
                              }
 else {
                                 LAB_00109fe1:*(byte**)( this + 0x338 ) = pbVar11 + 1;
                                 bVar1 = *pbVar11;
                                 *(int*)( this + 0x340 ) = iVar10 + -1;
                                 if (bVar1 == 0) goto LAB_00109f67;
                                 *(byte**)( this + 0x338 ) = pbVar11;
                                 *pbVar11 = bVar1;
                                 *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
                              }

                              lVar12 = *(long*)( this + 0x338 );
                              *(long*)( this + 0x338 ) = lVar12 + -1;
                              *(undefined1*)( lVar12 + -1 ) = 0xff;
                              *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
                           }

                        }

                        LAB_00109f67:iVar17 = *(int*)( this + 0x2448 );
                        uVar9 = uVar20 | uVar9 | *(uint*)( this + 0x244c );
                     }
 else {
                        pbVar6 = *(byte**)( this + 0x338 );
                        bVar1 = *pbVar6;
                        if (( bVar1 == 0xff ) || ( bVar2 = bVar2 == 0xff )) {
                           pbVar11 = pbVar6 + 1;
                           iVar10 = iVar10 + -1;
                           *(byte**)( this + 0x338 ) = pbVar11;
                           bVar1 = *pbVar6;
                           *(int*)( this + 0x340 ) = iVar10;
                           if (bVar1 == 0xff) goto LAB_0010a7da;
                           uVar9 = (uint)bVar1 << 8;
                           goto LAB_00109fb2;
                        }

                        *(int*)( this + 0x340 ) = iVar10 + -2;
                        uVar9 = uVar20 | bVar2 | (uint)bVar1 << 8;
                        *(byte**)( this + 0x338 ) = pbVar6 + 2;
                     }

                     *(int*)( this + 0x2448 ) = iVar17 + 0x10;
                     *(uint*)( this + 0x244c ) = uVar9 << ( -(char)iVar17 & 0x1fU );
                     goto LAB_001093b0;
                  }

                  LAB_001095c8:if (( (int)uVar8 >> 4 & 0xfU ) != 0xf) break;
                  LAB_001094fe:if (0x30 < (int)uVar22) goto LAB_00109526;
                  if ((int)uVar22 < iVar3) {
                     lVar12 = (long)(int)uVar22;
                     iVar10 = iVar3 - uVar22;
                     piVar13 = (int*)( g_ZAG + lVar12 * 4 );
                     if (0x10 < iVar10) {
                        iVar10 = 0x10;
                     }

                     while (psVar23[*piVar13] = 0,piVar13 != (int*)( g_ZAG + ( ( ulong )(iVar10 - 1) + lVar12 ) * 4 )) {
                        piVar13 = piVar13 + 1;
                        if (piVar13 == (int*)( g_ZAG + ( ( ulong )(0x3f - uVar22) + lVar12 ) * 4 + 4 )) {
                           /* WARNING: Subroutine does not return */
                           stop_decoding(this, 0xffffff1a);
                        }

                     }
;
                  }

                  uVar8 = uVar22 + 0xf;
                  if (psVar23[*(int*)( g_ZAG + ( ulong )(uVar8 & 0x3f) * 4 )] != 0) goto LAB_00109526;
               }

               uVar22 = uVar8 + 1;
            }
 while ( uVar22 != 0x40 );
            if ((int)uVar22 < iVar3) {
               piVar13 = (int*)( g_ZAG + (long)(int)uVar22 * 4 );
               do {
                  iVar10 = *piVar13;
                  piVar13 = piVar13 + 1;
                  psVar23[iVar10] = 0;
               }
 while ( piVar13 != (int*)( g_ZAG + ( ( ulong )(iVar3 - uVar22) + (long)(int)uVar22 ) * 4 ) );
            }

            *(uint*)( this + lVar21 * 4 + 0x2480 ) = uVar22;
            psVar23 = psVar23 + 0x40;
            lVar21 = lVar21 + 1;
         }
 while ( (int)lVar21 < *(int*)( this + 0x24c ) );
      }

      iVar10 = iVar14 + 1;
      transform_mcu(this, iVar14);
      *(int*)( this + 0x2454 ) = *(int*)( this + 0x2454 ) + -1;
      iVar14 = iVar10;
      if (*(int*)( this + 0x254 ) <= iVar10) {
         return;
      }

   }
 while ( true );
}
/* jpgd::jpeg_decoder::decode_next_mcu_row() */undefined4 jpgd::jpeg_decoder::decode_next_mcu_row(jpeg_decoder *this) {
   byte *pbVar1;
   char cVar2;
   undefined8 uVar3;
   int iVar4;
   byte *pbVar5;
   uint uVar6;
   int iVar7;
   uint uVar8;
   iVar4 = _setjmp((__jmp_buf_tag*)this);
   if (iVar4 != 0) {
      return 0xffffffff;
   }

   if (( ( (byte)this[200] & 1 ) == 0 ) && ( *(int*)( this + 0x198 ) - 3U < 2 )) {
      uVar3 = *(undefined8*)( this + 0x24a8 );
      this[0x34d2] = (jpeg_decoder)0x1;
      *(undefined8*)( this + 0x24a8 ) = *(undefined8*)( this + 0x24b0 );
      *(undefined8*)( this + 0x24b0 ) = uVar3;
   }

   if (*(int*)( this + 0xe8 ) == 0) {
      decode_next_row(this);
   }
 else {
      load_next_row(this);
   }

   iVar4 = *(int*)( this + 0x248 );
   if (iVar4 < *(int*)( this + 0x284 )) goto LAB_0010aca4;
   iVar7 = *(int*)( this + 0x340 );
   if (*(int*)( this + 0xe8 ) == 0) {
      *(undefined4*)( this + 0x2448 ) = 0;
      *(int*)( this + 0x244c ) = *(int*)( this + 0x244c ) << 0x10;
      if (iVar7 == 0) {
         prep_in_buffer(this);
         iVar7 = *(int*)( this + 0x340 );
         if (iVar7 != 0) goto LAB_0010ad19;
         uVar8 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar8 ^ 1;
         uVar8 = ( -(uint)(uVar8 == 0) & 0x26 ) + 0xd9;
         LAB_0010adf0:prep_in_buffer(this);
         iVar7 = *(int*)( this + 0x340 );
         if (iVar7 != 0) {
            pbVar5 = *(byte**)( this + 0x338 );
            goto LAB_0010ad42;
         }

         uVar6 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar6 ^ 1;
         uVar6 = ( -(uint)(uVar6 == 0) & 0x26 ) + 0xd9;
      }
 else {
         LAB_0010ad19:iVar7 = iVar7 + -1;
         pbVar1 = *(byte**)( this + 0x338 );
         pbVar5 = pbVar1 + 1;
         *(byte**)( this + 0x338 ) = pbVar5;
         uVar8 = ( uint ) * pbVar1;
         *(int*)( this + 0x340 ) = iVar7;
         if (iVar7 == 0) goto LAB_0010adf0;
         LAB_0010ad42:*(byte**)( this + 0x338 ) = pbVar5 + 1;
         uVar6 = ( uint ) * pbVar5;
         *(int*)( this + 0x340 ) = iVar7 + -1;
      }

      cVar2 = (char)*(int*)( this + 0x2448 );
      iVar4 = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar6 | uVar8 << 8 ) << ( -cVar2 & 0x1fU );
      if (*(int*)( this + 0x2448 ) < 1) {
         *(int*)( this + 0x244c ) = iVar4 << ( cVar2 + 0x10U & 0x1f );
         iVar4 = *(int*)( this + 0x340 );
         if (iVar4 == 0) {
            prep_in_buffer(this);
            iVar4 = *(int*)( this + 0x340 );
            if (iVar4 != 0) goto LAB_0010ae3e;
            uVar8 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar8 ^ 1;
            uVar8 = ( -(uint)(uVar8 == 0) & 0x26 ) + 0xd9;
            LAB_0010af02:prep_in_buffer(this);
            iVar4 = *(int*)( this + 0x340 );
            if (iVar4 != 0) {
               pbVar5 = *(byte**)( this + 0x338 );
               goto LAB_0010ae67;
            }

            uVar6 = *(uint*)( this + 0x344 );
            *(uint*)( this + 0x344 ) = uVar6 ^ 1;
            uVar6 = ( -(uint)(uVar6 == 0) & 0x26 ) + 0xd9;
         }
 else {
            LAB_0010ae3e:iVar4 = iVar4 + -1;
            pbVar1 = *(byte**)( this + 0x338 );
            pbVar5 = pbVar1 + 1;
            *(byte**)( this + 0x338 ) = pbVar5;
            uVar8 = ( uint ) * pbVar1;
            *(int*)( this + 0x340 ) = iVar4;
            if (iVar4 == 0) goto LAB_0010af02;
            LAB_0010ae67:*(byte**)( this + 0x338 ) = pbVar5 + 1;
            uVar6 = ( uint ) * pbVar5;
            *(int*)( this + 0x340 ) = iVar4 + -1;
         }

         iVar4 = *(int*)( this + 0x2448 );
         *(int*)( this + 0x2448 ) = iVar4 + 0x10;
         *(uint*)( this + 0x244c ) = ( *(uint*)( this + 0x244c ) & 0xffff0000 | uVar6 | uVar8 << 8 ) << ( -(char)iVar4 & 0x1fU );
      }
 else {
         *(int*)( this + 0x244c ) = iVar4 << 0x10;
      }

      process_markers(this);
      iVar4 = *(int*)( this + 0x248 );
   }

   *(int*)( this + 0x34cc ) = *(int*)( this + 0x34cc ) - *(int*)( this + 0x340 );
   LAB_0010aca4:*(int*)( this + 0x288 ) = iVar4;
   return 0;
}
/* jpgd::jpeg_decoder::decode(void const**, unsigned int*) */int jpgd::jpeg_decoder::decode(jpeg_decoder *this, void **param_1, uint *param_2) {
   jpeg_decoder jVar1;
   int iVar2;
   undefined4 *puVar3;
   jpeg_decoder jVar4;
   uint uVar5;
   int iVar6;
   void *pvVar7;
   undefined4 *puVar8;
   undefined4 *puVar9;
   undefined4 *puVar10;
   undefined4 *puVar11;
   jpeg_decoder jVar12;
   if (( *(int*)( this + 0x34c8 ) != 0 ) || ( jVar1 = jVar1 == (jpeg_decoder)0x0 )) {
      return -1;
   }

   iVar6 = *(int*)( this + 0x284 );
   if (iVar6 == 0) {
      return 1;
   }

   uVar5 = *(uint*)( this + 200 ) & 1;
   if (( uVar5 != 0 ) || ( iVar2 = 1 < iVar2 - 3U )) {
      if (*(int*)( this + 0x288 ) == 0) {
         jVar12 = (jpeg_decoder)0x0;
         goto LAB_0010aff4;
      }

      iVar2 = *(int*)( this + 0x198 );
      jVar1 = (jpeg_decoder)0x0;
      LAB_0010b039:jVar12 = jVar1;
      switch (iVar2) {
         case 0:
      jVar4 = (jpeg_decoder)0x0;
      goto switchD_0010b024_caseD_0;
         case 1:
      H1V1Convert(this);
      *param_1 = *(void **)(this + 0x34b8);
      *param_2 = *(uint *)(this + 0x290);
      break;
         case 2:
      jVar4 = (jpeg_decoder)0x0;
      goto LAB_0010b05b;
         case 3:
      jVar4 = (jpeg_decoder)0x0;
      goto switchD_0010b024_caseD_3;
         case 4:
      jVar4 = (jpeg_decoder)0x0;
      goto LAB_0010b19b;
         default:
      *param_2 = *(uint *)(this + 0x290);
      }

      goto LAB_0010b0cc;
   }

   jVar12 = jVar1;
   if (iVar6 == *(int*)( this + 0xdc )) {
      LAB_0010aff4:jVar4 = (jpeg_decoder)0x0;
   }
 else {
      jVar12 = ( jpeg_decoder )(*(int*)( this + 0x288 ) == 1 && 1 < iVar6);
      jVar4 = jVar12;
      if (*(int*)( this + 0x288 ) != 1 || iVar6 < 2) goto LAB_0010b039;
   }

   iVar6 = decode_next_mcu_row(this);
   if (iVar6 != 0) {
      return iVar6;
   }

   switch (*(undefined4*)( this + 0x198 )) {
      case 0:
switchD_0010b024_caseD_0:
    uVar5 = *(uint *)(this + 0x245c);
    puVar3 = *(undefined4 **)(this + 0x34b8);
    puVar8 = (undefined4 *)
             ((long)((*(int *)(this + 0x248) - *(int *)(this + 0x288)) * 8) +
             *(long *)(this + 0x24a8));
    if (0 < (int)uVar5) {
      puVar9 = puVar8;
      puVar11 = puVar3;
      do {
        puVar10 = puVar9 + 0x10;
        *puVar11 = *puVar9;
        puVar11[1] = puVar9[1];
        puVar9 = puVar10;
        puVar11 = puVar11 + 2;
      } while (puVar10 != puVar8 + (ulong)uVar5 * 0x10);
    }
    *param_1 = puVar3;
    break;
      case 1:
    H1V1Convert(this);
    *param_1 = *(void **)(this + 0x34b8);
    break;
      case 2:
    uVar5 = *(uint *)(this + 200) & 1;
LAB_0010b05b:
    if (uVar5 == 0) {
      H2V1ConvertFiltered(this);
    }
    else {
      H2V1Convert(this);
    }
LAB_0010b06b:
    pvVar7 = *(void **)(this + 0x34b8);
    goto LAB_0010b072;
      case 3:
switchD_0010b024_caseD_3:
    if (jVar12 == (jpeg_decoder)0x0) {
      if (((byte)this[0x288] & 1) == 0) {
        H1V2Convert(this);
        goto LAB_0010b06b;
      }
      pvVar7 = *(void **)(this + 0x34c0);
    }
    else {
      H1V2ConvertFiltered(this);
      pvVar7 = *(void **)(this + 0x34b8);
    }
LAB_0010b072:
    *param_1 = pvVar7;
    break;
      case 4:
    uVar5 = *(uint *)(this + 200) & 1;
LAB_0010b19b:
    if (uVar5 == 0) {
      iVar6 = *(int *)(this + 0x28c);
      if (iVar6 == 1) {
        *param_1 = *(void **)(this + 0x34c0);
      }
      else if (iVar6 == 0) {
        iVar6 = H2V2ConvertFiltered(this);
        *param_1 = *(void **)(this + 0x34b8);
      }
      *(int *)(this + 0x28c) = iVar6 + -1;
    }
    else if (((byte)this[0x288] & 1) == 0) {
      H2V2Convert(this);
      *param_1 = *(void **)(this + 0x34b8);
    }
    else {
      *param_1 = *(void **)(this + 0x34c0);
    }
   }

   *param_2 = *(uint*)( this + 0x290 );
   if (!(bool)jVar4) {
      LAB_0010b0cc:*(int*)( this + 0x288 ) = *(int*)( this + 0x288 ) + -1;
   }

   *(int*)( this + 0x284 ) = *(int*)( this + 0x284 ) + -1;
   return 0;
}
/* jpgd::decompress_jpeg_image_from_stream(jpgd::jpeg_decoder_stream*, int*, int*, int*, int,
   unsigned int) */byte *jpgd::decompress_jpeg_image_from_stream(jpeg_decoder_stream *param_1, int *param_2, int *param_3, int *param_4, int param_5, uint param_6) {
   long lVar1;
   byte bVar2;
   undefined8 *puVar3;
   int iVar4;
   int iVar5;
   size_t __size;
   byte *__ptr;
   byte *pbVar6;
   byte *pbVar7;
   byte *pbVar8;
   size_t sVar9;
   byte *pbVar10;
   ulong uVar11;
   long lVar12;
   int iVar13;
   long in_FS_OFFSET;
   uint local_3524;
   byte *local_3520;
   jpeg_decoder local_3518[208];
   undefined8 *local_3448;
   int local_3440;
   int local_343c;
   int local_337c;
   int local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( ( ( param_4 == (int*)0x0 ) || ( *param_4 = 0 ),param_1 == (jpeg_decoder_stream*)0x0 ) ) || ( param_2 == (int*)0x0 ) ) || ( ( param_3 == (int*)0x0 || ( param_5 == 0 ) ) )) {
      __ptr = (byte*)0x0;
      goto LAB_0010b3b3;
   }

   jpeg_decoder::jpeg_decoder(local_3518, param_1, param_6);
   if (local_50 == 0) {
      *param_2 = local_3440;
      *param_3 = local_343c;
      *param_4 = local_337c;
      iVar4 = jpeg_decoder::begin_decoding(local_3518);
      if (iVar4 != 0) goto LAB_0010b38e;
      iVar4 = local_3440 * param_5;
      __size = (size_t)( local_343c * iVar4 );
      __ptr = (byte*)malloc(__size);
      if (__ptr == (byte*)0x0) goto LAB_0010b38e;
      if (0 < local_343c) {
         lVar12 = (long)iVar4;
         lVar1 = (long)local_3440 * 4;
         uVar11 = 0;
         iVar13 = 0;
         pbVar8 = __ptr;
         do {
            iVar5 = jpeg_decoder::decode(local_3518, &local_3520, &local_3524);
            if (iVar5 != 0) {
               free(__ptr);
               goto LAB_0010b38e;
            }

            if (param_5 == 1) {
               if (local_337c == 1) {
                  LAB_0010b570:sVar9 = __size;
                  if (__size < uVar11) {
                     sVar9 = uVar11;
                  }

                  __memcpy_chk(pbVar8, local_3520, lVar12, sVar9 - uVar11);
               }
 else if (( local_337c == 3 ) && ( 0 < iVar4 )) {
                  pbVar6 = pbVar8;
                  pbVar10 = local_3520;
                  do {
                     pbVar7 = pbVar6 + 1;
                     *pbVar6 = ( byte )(( uint ) * pbVar10 * 0x4c8b + (uint)pbVar10[1] * 0x9646 + 0x8000 + (uint)pbVar10[2] * 0x1d2f >> 0x10);
                     pbVar6 = pbVar7;
                     pbVar10 = pbVar10 + 4;
                  }
 while ( pbVar7 != pbVar8 + lVar12 );
               }

            }
 else if (param_5 == 4) {
               if (local_337c == 3) goto LAB_0010b570;
               if (( local_337c == 1 ) && ( 0 < local_3440 )) {
                  pbVar6 = pbVar8;
                  pbVar10 = local_3520;
                  do {
                     bVar2 = *pbVar10;
                     pbVar7 = pbVar6 + 4;
                     pbVar6[3] = 0xff;
                     pbVar10 = pbVar10 + 1;
                     pbVar6[2] = bVar2;
                     *(ushort*)pbVar6 = CONCAT11(bVar2, bVar2);
                     pbVar6 = pbVar7;
                  }
 while ( pbVar7 != pbVar8 + lVar1 );
               }

            }
 else if (local_337c == 1) {
               if (0 < local_3440) {
                  pbVar6 = pbVar8;
                  pbVar10 = local_3520;
                  do {
                     bVar2 = *pbVar10;
                     pbVar10 = pbVar10 + 1;
                     pbVar6[2] = bVar2;
                     *(ushort*)pbVar6 = CONCAT11(bVar2, bVar2);
                     pbVar6 = pbVar6 + 3;
                  }
 while ( local_3520 + local_3440 != pbVar10 );
               }

            }
 else if (( local_337c == 3 ) && ( 0 < local_3440 )) {
               pbVar6 = pbVar8;
               pbVar10 = local_3520;
               do {
                  pbVar7 = pbVar10 + 4;
                  *pbVar6 = *pbVar10;
                  pbVar6[1] = pbVar10[1];
                  pbVar6[2] = pbVar10[2];
                  pbVar6 = pbVar6 + 3;
                  pbVar10 = pbVar7;
               }
 while ( pbVar7 != local_3520 + lVar1 );
            }

            pbVar8 = pbVar8 + lVar12;
            iVar13 = iVar13 + 1;
            uVar11 = uVar11 + lVar12;
         }
 while ( local_343c != iVar13 );
      }

   }
 else {
      LAB_0010b38e:__ptr = (byte*)0x0;
   }

   while (local_3448 != (undefined8*)0x0) {
      puVar3 = (undefined8*)*local_3448;
      free(local_3448);
      local_3448 = puVar3;
   }
;
   LAB_0010b3b3:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return __ptr;
}
/* jpgd::decompress_jpeg_image_from_memory(unsigned char const*, int, int*, int*, int*, int,
   unsigned int) */void jpgd::decompress_jpeg_image_from_memory(uchar *param_1, int param_2, int *param_3, int *param_4, int *param_5, int param_6, uint param_7) {
   long in_FS_OFFSET;
   undefined **local_28;
   uchar *local_20;
   undefined4 local_18;
   int local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = &PTR__jpeg_decoder_mem_stream_0010cc58;
   local_18 = 0;
   local_20 = param_1;
   local_14 = param_2;
   decompress_jpeg_image_from_stream((jpeg_decoder_stream*)&local_28, param_3, param_4, param_5, param_6, param_7);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* jpgd::decompress_jpeg_image_from_file(char const*, int*, int*, int*, int, unsigned int) */FILE *jpgd::decompress_jpeg_image_from_file(char *param_1, int *param_2, int *param_3, int *param_4, int param_5, uint param_6) {
   FILE *pFVar1;
   long in_FS_OFFSET;
   undefined **local_58;
   FILE *local_50;
   undefined2 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = &PTR__jpeg_decoder_file_stream_0010cc30;
   local_50 = (FILE*)0x0;
   local_48 = 0;
   pFVar1 = fopen64(param_1, "rb");
   local_50 = pFVar1;
   if (pFVar1 != (FILE*)0x0) {
      pFVar1 = (FILE*)decompress_jpeg_image_from_stream((jpeg_decoder_stream*)&local_58, param_2, param_3, param_4, param_5, param_6);
      local_58 = &PTR__jpeg_decoder_file_stream_0010cc30;
      if (local_50 != (FILE*)0x0) {
         fclose(local_50);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pFVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* jpgd::jpeg_decoder_mem_stream::~jpeg_decoder_mem_stream() */void jpgd::jpeg_decoder_mem_stream::~jpeg_decoder_mem_stream(jpeg_decoder_mem_stream *this) {
   return;
}
/* jpgd::jpeg_decoder_mem_stream::~jpeg_decoder_mem_stream() */void jpgd::jpeg_decoder_mem_stream::~jpeg_decoder_mem_stream(jpeg_decoder_mem_stream *this) {
   operator_delete(this, 0x18);
   return;
}
/* jpgd::jpeg_decoder::get_bits_no_markers(int) */uint jpgd::jpeg_decoder::get_bits_no_markers(jpeg_decoder *this, int param_1) {
   byte bVar1;
   byte bVar2;
   byte *pbVar3;
   long lVar4;
   uint uVar5;
   byte *pbVar6;
   int iVar7;
   int iVar8;
   uint uVar9;
   uint uVar10;
   if (param_1 == 0) {
      return 0;
   }

   uVar5 = *(uint*)( this + 0x244c );
   uVar10 = uVar5 >> ( 0x20 - (byte)param_1 & 0x1f );
   iVar7 = *(int*)( this + 0x2448 );
   iVar8 = iVar7 - param_1;
   *(int*)( this + 0x2448 ) = iVar8;
   if (0 < iVar8) {
      *(uint*)( this + 0x244c ) = uVar5 << ( (byte)param_1 & 0x1f );
      return uVar10;
   }

   uVar5 = uVar5 << ( (byte)iVar7 & 0x1f );
   iVar7 = *(int*)( this + 0x340 );
   *(uint*)( this + 0x244c ) = uVar5;
   if (iVar7 < 2) {
      if (iVar7 == 0) {
         prep_in_buffer(this);
         iVar7 = *(int*)( this + 0x340 );
         if (iVar7 != 0) goto LAB_0010bb07;
         uVar5 = *(uint*)( this + 0x344 );
         *(uint*)( this + 0x344 ) = uVar5 ^ 1;
         uVar5 = ( -(uint)(uVar5 == 0) & 0x2600 ) + 0xd900;
      }
 else {
         LAB_0010bb07:pbVar3 = *(byte**)( this + 0x338 );
         iVar7 = iVar7 + -1;
         pbVar6 = pbVar3 + 1;
         *(byte**)( this + 0x338 ) = pbVar6;
         bVar1 = *pbVar3;
         *(int*)( this + 0x340 ) = iVar7;
         if (bVar1 == 0xff) {
            if (iVar7 == 0) {
               prep_in_buffer(this);
               iVar7 = *(int*)( this + 0x340 );
               if (iVar7 == 0) {
                  lVar4 = *(long*)( this + 0x338 );
                  *(uint*)( this + 0x344 ) = *(uint*)( this + 0x344 ) ^ 1;
                  uVar5 = 0xff00;
                  *(long*)( this + 0x338 ) = lVar4 + -1;
                  *(undefined1*)( lVar4 + -1 ) = 0xff;
                  iVar7 = *(int*)( this + 0x340 ) + 1;
                  *(int*)( this + 0x340 ) = iVar7;
                  goto LAB_0010bbb0;
               }

               pbVar6 = *(byte**)( this + 0x338 );
            }

            LAB_0010bb58:iVar7 = iVar7 + -1;
            uVar5 = 0xff00;
            *(byte**)( this + 0x338 ) = pbVar6 + 1;
            bVar1 = *pbVar6;
            *(int*)( this + 0x340 ) = iVar7;
            if (bVar1 != 0) {
               *(byte**)( this + 0x338 ) = pbVar6;
               *pbVar6 = bVar1;
               lVar4 = *(long*)( this + 0x338 );
               *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
               *(long*)( this + 0x338 ) = lVar4 + -1;
               *(undefined1*)( lVar4 + -1 ) = 0xff;
               iVar7 = *(int*)( this + 0x340 ) + 1;
               *(int*)( this + 0x340 ) = iVar7;
            }

         }
 else {
            uVar5 = (uint)bVar1 << 8;
         }

         LAB_0010bbb0:if (iVar7 != 0) goto LAB_0010baa9;
      }

      prep_in_buffer(this);
      iVar7 = *(int*)( this + 0x340 );
      if (iVar7 != 0) goto LAB_0010baa9;
      uVar9 = *(uint*)( this + 0x344 );
      *(uint*)( this + 0x344 ) = uVar9 ^ 1;
      uVar9 = ( -(uint)(uVar9 == 0) & 0x26 ) + 0xd9;
   }
 else {
      pbVar3 = *(byte**)( this + 0x338 );
      bVar1 = *pbVar3;
      if (( bVar1 != 0xff ) && ( bVar2 = bVar2 != 0xff )) {
         *(int*)( this + 0x340 ) = iVar7 + -2;
         uVar5 = (uint)bVar1 << 8 | bVar2 | uVar5;
         *(byte**)( this + 0x338 ) = pbVar3 + 2;
         goto LAB_0010ba5c;
      }

      pbVar6 = pbVar3 + 1;
      iVar7 = iVar7 + -1;
      *(byte**)( this + 0x338 ) = pbVar6;
      bVar1 = *pbVar3;
      *(int*)( this + 0x340 ) = iVar7;
      if (bVar1 == 0xff) goto LAB_0010bb58;
      uVar5 = (uint)bVar1 << 8;
      LAB_0010baa9:pbVar3 = *(byte**)( this + 0x338 );
      iVar7 = iVar7 + -1;
      pbVar6 = pbVar3 + 1;
      *(byte**)( this + 0x338 ) = pbVar6;
      bVar1 = *pbVar3;
      uVar9 = (uint)bVar1;
      *(int*)( this + 0x340 ) = iVar7;
      if (bVar1 == 0xff) {
         if (iVar7 == 0) {
            prep_in_buffer(this);
            iVar7 = *(int*)( this + 0x340 );
            if (iVar7 != 0) {
               pbVar6 = *(byte**)( this + 0x338 );
               goto LAB_0010bc38;
            }

            *(uint*)( this + 0x344 ) = *(uint*)( this + 0x344 ) ^ 1;
         }
 else {
            LAB_0010bc38:*(byte**)( this + 0x338 ) = pbVar6 + 1;
            bVar1 = *pbVar6;
            *(int*)( this + 0x340 ) = iVar7 + -1;
            if (bVar1 == 0) goto LAB_0010bad3;
            *(byte**)( this + 0x338 ) = pbVar6;
            *pbVar6 = bVar1;
            *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
         }

         lVar4 = *(long*)( this + 0x338 );
         *(long*)( this + 0x338 ) = lVar4 + -1;
         *(undefined1*)( lVar4 + -1 ) = 0xff;
         *(int*)( this + 0x340 ) = *(int*)( this + 0x340 ) + 1;
      }

   }

   LAB_0010bad3:iVar8 = *(int*)( this + 0x2448 );
   uVar5 = uVar9 | uVar5 | *(uint*)( this + 0x244c );
   LAB_0010ba5c:*(int*)( this + 0x2448 ) = iVar8 + 0x10;
   *(uint*)( this + 0x244c ) = uVar5 << ( -(char)iVar8 & 0x1fU );
   return uVar10;
}
/* jpgd::Col<3>::idct(unsigned char*, int const*) */void jpgd::Col<3>::idct(uchar *param_1, int *param_2) {
   int iVar1;
   int iVar2;
   int iVar3;
   uchar uVar4;
   uint uVar5;
   int iVar6;
   int iVar7;
   uint uVar8;
   int iVar9;
   uint uVar10;
   iVar2 = param_2[0x10];
   iVar7 = *param_2 * 0x2000;
   iVar6 = iVar2 * 0x1151 + iVar7;
   iVar1 = iVar2 * 0x29cf + iVar7;
   iVar9 = iVar7 + iVar2 * -0x29cf;
   iVar3 = param_2[8];
   iVar7 = iVar7 + iVar2 * -0x1151;
   uVar8 = iVar1 + 0x2020000 + iVar3 * 0x2c63 >> 0x12;
   uVar5 = (int)~uVar8 >> 0x1f;
   if (uVar8 < 0x100) {
      uVar5 = uVar8;
   }

   uVar8 = iVar1 + iVar3 * -0x2c63 + 0x2020000 >> 0x12;
   *param_1 = (uchar)uVar5;
   if (0xff < uVar8) {
      uVar8 = (int)~uVar8 >> 0x1f;
   }

   uVar10 = iVar6 + 0x2020000 + iVar3 * 0x25a1 >> 0x12;
   param_1[0x38] = (uchar)uVar8;
   uVar5 = (int)~uVar10 >> 0x1f;
   if (uVar10 < 0x100) {
      uVar5 = uVar10;
   }

   param_1[8] = (uchar)uVar5;
   uVar5 = iVar6 + iVar3 * -0x25a1 + 0x2020000 >> 0x12;
   if (0xff < uVar5) {
      uVar5 = (int)~uVar5 >> 0x1f;
   }

   uVar8 = iVar7 + 0x2020000 + iVar3 * 0x1925 >> 0x12;
   param_1[0x30] = (uchar)uVar5;
   uVar5 = (int)~uVar8 >> 0x1f;
   if (uVar8 < 0x100) {
      uVar5 = uVar8;
   }

   uVar8 = iVar7 + iVar3 * -0x1925 + 0x2020000 >> 0x12;
   param_1[0x10] = (uchar)uVar5;
   uVar5 = (int)~uVar8 >> 0x1f;
   if (uVar8 < 0x100) {
      uVar5 = uVar8;
   }

   iVar6 = iVar9 + 0x2020000 + iVar3 * 0x8d4;
   uVar8 = iVar6 >> 0x12;
   param_1[0x28] = (uchar)uVar5;
   uVar4 = (char)~(byte)(iVar6 >> 0x1f) >> 7;
   if (uVar8 < 0x100) {
      uVar4 = (uchar)uVar8;
   }

   param_1[0x18] = uVar4;
   iVar6 = iVar9 + iVar3 * -0x8d4 + 0x2020000;
   uVar5 = iVar6 >> 0x12;
   uVar4 = (uchar)uVar5;
   if (0xff < uVar5) {
      uVar4 = (char)~(byte)(iVar6 >> 0x1f) >> 7;
   }

   param_1[0x20] = uVar4;
   return;
}
/* jpgd::Col<4>::idct(unsigned char*, int const*) */void jpgd::Col<4>::idct(uchar *param_1, int *param_2) {
   int iVar1;
   int iVar2;
   int iVar3;
   uchar uVar4;
   int iVar5;
   uint uVar6;
   int iVar7;
   int iVar8;
   uint uVar9;
   int iVar10;
   int iVar11;
   uint uVar12;
   int iVar13;
   iVar2 = param_2[0x10];
   iVar7 = *param_2 * 0x2000;
   iVar5 = iVar2 * 0x1151 + iVar7;
   iVar1 = iVar2 * 0x29cf + iVar7;
   iVar11 = iVar7 + iVar2 * -0x29cf;
   iVar7 = iVar7 + iVar2 * -0x1151;
   iVar3 = param_2[0x18];
   iVar8 = param_2[8];
   iVar10 = ( iVar3 + iVar8 ) * 0x25a1;
   iVar13 = iVar3 * -0x3ec5 + iVar10;
   iVar10 = iVar8 * -0xc7c + iVar10;
   iVar2 = iVar8 * -0x1ccd + iVar13;
   iVar8 = iVar8 * 0x133e + iVar10;
   iVar10 = iVar3 * -0x5203 + iVar10;
   uVar9 = iVar1 + 0x2020000 + iVar8 >> 0x12;
   iVar13 = iVar3 * 0x1051 + iVar13;
   uVar6 = (int)~uVar9 >> 0x1f;
   if (uVar9 < 0x100) {
      uVar6 = uVar9;
   }

   uVar9 = ( iVar1 - iVar8 ) + 0x2020000 >> 0x12;
   *param_1 = (uchar)uVar6;
   if (0xff < uVar9) {
      uVar9 = (int)~uVar9 >> 0x1f;
   }

   uVar12 = iVar5 + 0x2020000 + iVar13 >> 0x12;
   param_1[0x38] = (uchar)uVar9;
   uVar6 = (int)~uVar12 >> 0x1f;
   if (uVar12 < 0x100) {
      uVar6 = uVar12;
   }

   uVar9 = ( iVar5 - iVar13 ) + 0x2020000 >> 0x12;
   param_1[8] = (uchar)uVar6;
   if (0xff < uVar9) {
      uVar9 = (int)~uVar9 >> 0x1f;
   }

   uVar12 = iVar7 + 0x2020000 + iVar10 >> 0x12;
   param_1[0x30] = (uchar)uVar9;
   uVar6 = (int)~uVar12 >> 0x1f;
   if (uVar12 < 0x100) {
      uVar6 = uVar12;
   }

   uVar9 = ( iVar7 - iVar10 ) + 0x2020000 >> 0x12;
   param_1[0x10] = (uchar)uVar6;
   uVar6 = (int)~uVar9 >> 0x1f;
   if (uVar9 < 0x100) {
      uVar6 = uVar9;
   }

   iVar5 = iVar11 + 0x2020000 + iVar2;
   uVar9 = iVar5 >> 0x12;
   param_1[0x28] = (uchar)uVar6;
   uVar4 = (char)~(byte)(iVar5 >> 0x1f) >> 7;
   if (uVar9 < 0x100) {
      uVar4 = (uchar)uVar9;
   }

   param_1[0x18] = uVar4;
   iVar5 = ( iVar11 - iVar2 ) + 0x2020000;
   uVar6 = iVar5 >> 0x12;
   uVar4 = (uchar)uVar6;
   if (0xff < uVar6) {
      uVar4 = (char)~(byte)(iVar5 >> 0x1f) >> 7;
   }

   param_1[0x20] = uVar4;
   return;
}
/* jpgd::Col<5>::idct(unsigned char*, int const*) */void jpgd::Col<5>::idct(uchar *param_1, int *param_2) {
   int iVar1;
   int iVar2;
   int iVar3;
   uchar uVar4;
   int iVar5;
   int iVar6;
   uint uVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   uint uVar11;
   int iVar12;
   uint uVar13;
   iVar2 = param_2[0x10];
   iVar5 = ( *param_2 + param_2[0x20] ) * 0x2000;
   iVar8 = ( *param_2 - param_2[0x20] ) * 0x2000;
   iVar6 = iVar2 * 0x1151 + iVar8;
   iVar8 = iVar8 + iVar2 * -0x1151;
   iVar1 = iVar2 * 0x29cf + iVar5;
   iVar5 = iVar5 + iVar2 * -0x29cf;
   iVar2 = param_2[8];
   iVar3 = param_2[0x18];
   iVar12 = ( iVar3 + iVar2 ) * 0x25a1;
   iVar10 = iVar2 * -0xc7c + iVar12;
   iVar9 = iVar2 * 0x133e + iVar10;
   iVar12 = iVar3 * -0x3ec5 + iVar12;
   iVar2 = iVar2 * -0x1ccd + iVar12;
   uVar11 = iVar1 + 0x2020000 + iVar9 >> 0x12;
   iVar10 = iVar3 * -0x5203 + iVar10;
   iVar12 = iVar3 * 0x1051 + iVar12;
   uVar7 = (int)~uVar11 >> 0x1f;
   if (uVar11 < 0x100) {
      uVar7 = uVar11;
   }

   uVar11 = ( iVar1 - iVar9 ) + 0x2020000 >> 0x12;
   *param_1 = (uchar)uVar7;
   if (0xff < uVar11) {
      uVar11 = (int)~uVar11 >> 0x1f;
   }

   uVar13 = iVar6 + 0x2020000 + iVar12 >> 0x12;
   param_1[0x38] = (uchar)uVar11;
   uVar7 = (int)~uVar13 >> 0x1f;
   if (uVar13 < 0x100) {
      uVar7 = uVar13;
   }

   uVar11 = ( iVar6 - iVar12 ) + 0x2020000 >> 0x12;
   param_1[8] = (uchar)uVar7;
   if (0xff < uVar11) {
      uVar11 = (int)~uVar11 >> 0x1f;
   }

   uVar13 = iVar8 + 0x2020000 + iVar10 >> 0x12;
   param_1[0x30] = (uchar)uVar11;
   uVar7 = (int)~uVar13 >> 0x1f;
   if (uVar13 < 0x100) {
      uVar7 = uVar13;
   }

   uVar11 = ( iVar8 - iVar10 ) + 0x2020000 >> 0x12;
   param_1[0x10] = (uchar)uVar7;
   uVar7 = (int)~uVar11 >> 0x1f;
   if (uVar11 < 0x100) {
      uVar7 = uVar11;
   }

   iVar6 = iVar5 + 0x2020000 + iVar2;
   uVar11 = iVar6 >> 0x12;
   param_1[0x28] = (uchar)uVar7;
   uVar4 = (char)~(byte)(iVar6 >> 0x1f) >> 7;
   if (uVar11 < 0x100) {
      uVar4 = (uchar)uVar11;
   }

   param_1[0x18] = uVar4;
   iVar6 = ( iVar5 - iVar2 ) + 0x2020000;
   uVar7 = iVar6 >> 0x12;
   uVar4 = (uchar)uVar7;
   if (0xff < uVar7) {
      uVar4 = (char)~(byte)(iVar6 >> 0x1f) >> 7;
   }

   param_1[0x20] = uVar4;
   return;
}
/* jpgd::Col<6>::idct(unsigned char*, int const*) */void jpgd::Col<6>::idct(uchar *param_1, int *param_2) {
   int iVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   uchar uVar6;
   int iVar7;
   int iVar8;
   uint uVar9;
   int iVar10;
   int iVar11;
   uint uVar12;
   int iVar13;
   int iVar14;
   uint uVar15;
   int iVar16;
   iVar2 = param_2[0x10];
   iVar7 = ( *param_2 + param_2[0x20] ) * 0x2000;
   iVar10 = ( *param_2 - param_2[0x20] ) * 0x2000;
   iVar8 = iVar2 * 0x1151 + iVar10;
   iVar10 = iVar10 + iVar2 * -0x1151;
   iVar3 = param_2[8];
   iVar1 = iVar2 * 0x29cf + iVar7;
   iVar7 = iVar7 + iVar2 * -0x29cf;
   iVar4 = param_2[0x28];
   iVar5 = param_2[0x18];
   iVar13 = ( iVar5 + iVar4 + iVar3 ) * 0x25a1;
   iVar11 = ( iVar4 + iVar3 ) * -0xc7c + iVar13;
   iVar16 = ( iVar4 + iVar5 ) * -0x5203;
   iVar14 = iVar3 * 0x133e + iVar11;
   iVar13 = iVar5 * -0x3ec5 + iVar13;
   iVar2 = iVar3 * -0x1ccd + iVar13;
   uVar12 = iVar1 + 0x2020000 + iVar14 >> 0x12;
   iVar11 = iVar4 * 0x41b3 + iVar16 + iVar11;
   iVar13 = iVar5 * 0x6254 + iVar16 + iVar13;
   uVar9 = (int)~uVar12 >> 0x1f;
   if (uVar12 < 0x100) {
      uVar9 = uVar12;
   }

   uVar12 = ( iVar1 - iVar14 ) + 0x2020000 >> 0x12;
   *param_1 = (uchar)uVar9;
   if (0xff < uVar12) {
      uVar12 = (int)~uVar12 >> 0x1f;
   }

   uVar15 = iVar8 + 0x2020000 + iVar13 >> 0x12;
   param_1[0x38] = (uchar)uVar12;
   uVar9 = (int)~uVar15 >> 0x1f;
   if (uVar15 < 0x100) {
      uVar9 = uVar15;
   }

   uVar12 = ( iVar8 - iVar13 ) + 0x2020000 >> 0x12;
   param_1[8] = (uchar)uVar9;
   if (0xff < uVar12) {
      uVar12 = (int)~uVar12 >> 0x1f;
   }

   uVar15 = iVar10 + 0x2020000 + iVar11 >> 0x12;
   param_1[0x30] = (uchar)uVar12;
   uVar9 = (int)~uVar15 >> 0x1f;
   if (uVar15 < 0x100) {
      uVar9 = uVar15;
   }

   uVar12 = ( iVar10 - iVar11 ) + 0x2020000 >> 0x12;
   param_1[0x10] = (uchar)uVar9;
   uVar9 = (int)~uVar12 >> 0x1f;
   if (uVar12 < 0x100) {
      uVar9 = uVar12;
   }

   iVar8 = iVar7 + 0x2020000 + iVar2;
   uVar12 = iVar8 >> 0x12;
   param_1[0x28] = (uchar)uVar9;
   uVar6 = (char)~(byte)(iVar8 >> 0x1f) >> 7;
   if (uVar12 < 0x100) {
      uVar6 = (uchar)uVar12;
   }

   param_1[0x18] = uVar6;
   iVar8 = ( iVar7 - iVar2 ) + 0x2020000;
   uVar9 = iVar8 >> 0x12;
   uVar6 = (uchar)uVar9;
   if (0xff < uVar9) {
      uVar6 = (char)~(byte)(iVar8 >> 0x1f) >> 7;
   }

   param_1[0x20] = uVar6;
   return;
}
/* jpgd::Col<7>::idct(unsigned char*, int const*) */void jpgd::Col<7>::idct(uchar *param_1, int *param_2) {
   int iVar1;
   int iVar2;
   uchar uVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   uint uVar7;
   int iVar8;
   int iVar9;
   uint uVar10;
   int iVar11;
   int iVar12;
   int iVar13;
   uint uVar14;
   int iVar15;
   iVar1 = param_2[8];
   iVar4 = ( param_2[0x10] + param_2[0x30] ) * 0x1151;
   iVar11 = param_2[0x30] * -0x3b21 + iVar4;
   iVar4 = param_2[0x10] * 0x187e + iVar4;
   iVar5 = ( *param_2 + param_2[0x20] ) * 0x2000;
   iVar8 = ( *param_2 - param_2[0x20] ) * 0x2000;
   iVar6 = iVar4 + iVar5;
   iVar5 = iVar5 - iVar4;
   iVar4 = iVar11 + iVar8;
   iVar8 = iVar8 - iVar11;
   iVar11 = param_2[0x28];
   iVar2 = param_2[0x18];
   iVar12 = ( iVar2 + iVar11 + iVar1 ) * 0x25a1;
   iVar15 = ( iVar11 + iVar2 ) * -0x5203;
   iVar9 = ( iVar11 + iVar1 ) * -0xc7c + iVar12;
   iVar13 = iVar1 * 0x133e + iVar9;
   iVar12 = iVar2 * -0x3ec5 + iVar12;
   iVar1 = iVar1 * -0x1ccd + iVar12;
   uVar10 = iVar6 + 0x2020000 + iVar13 >> 0x12;
   iVar9 = iVar11 * 0x41b3 + iVar15 + iVar9;
   iVar12 = iVar2 * 0x6254 + iVar15 + iVar12;
   uVar7 = (int)~uVar10 >> 0x1f;
   if (uVar10 < 0x100) {
      uVar7 = uVar10;
   }

   uVar10 = ( iVar6 - iVar13 ) + 0x2020000 >> 0x12;
   *param_1 = (uchar)uVar7;
   if (0xff < uVar10) {
      uVar10 = (int)~uVar10 >> 0x1f;
   }

   uVar14 = iVar4 + 0x2020000 + iVar12 >> 0x12;
   param_1[0x38] = (uchar)uVar10;
   uVar7 = (int)~uVar14 >> 0x1f;
   if (uVar14 < 0x100) {
      uVar7 = uVar14;
   }

   uVar10 = ( iVar4 - iVar12 ) + 0x2020000 >> 0x12;
   param_1[8] = (uchar)uVar7;
   if (0xff < uVar10) {
      uVar10 = (int)~uVar10 >> 0x1f;
   }

   uVar14 = iVar8 + 0x2020000 + iVar9 >> 0x12;
   param_1[0x30] = (uchar)uVar10;
   uVar7 = (int)~uVar14 >> 0x1f;
   if (uVar14 < 0x100) {
      uVar7 = uVar14;
   }

   uVar10 = ( iVar8 - iVar9 ) + 0x2020000 >> 0x12;
   param_1[0x10] = (uchar)uVar7;
   uVar7 = (int)~uVar10 >> 0x1f;
   if (uVar10 < 0x100) {
      uVar7 = uVar10;
   }

   iVar6 = iVar5 + 0x2020000 + iVar1;
   uVar10 = iVar6 >> 0x12;
   param_1[0x28] = (uchar)uVar7;
   uVar3 = (char)~(byte)(iVar6 >> 0x1f) >> 7;
   if (uVar10 < 0x100) {
      uVar3 = (uchar)uVar10;
   }

   param_1[0x18] = uVar3;
   iVar6 = ( iVar5 - iVar1 ) + 0x2020000;
   uVar7 = iVar6 >> 0x12;
   uVar3 = (uchar)uVar7;
   if (0xff < uVar7) {
      uVar3 = (char)~(byte)(iVar6 >> 0x1f) >> 7;
   }

   param_1[0x20] = uVar3;
   return;
}
/* jpgd::Col<8>::idct(unsigned char*, int const*) */void jpgd::Col<8>::idct(uchar *param_1, int *param_2) {
   int iVar1;
   int iVar2;
   uint uVar3;
   uchar uVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   uint uVar10;
   int iVar11;
   int iVar12;
   uint uVar13;
   int iVar14;
   int iVar15;
   int iVar16;
   iVar2 = param_2[0x18];
   iVar5 = ( param_2[0x10] + param_2[0x30] ) * 0x1151;
   iVar11 = param_2[0x30] * -0x3b21 + iVar5;
   iVar5 = param_2[0x10] * 0x187e + iVar5;
   iVar6 = ( *param_2 + param_2[0x20] ) * 0x2000;
   iVar8 = ( *param_2 - param_2[0x20] ) * 0x2000;
   iVar7 = iVar5 + iVar6;
   iVar1 = iVar11 + iVar8;
   iVar6 = iVar6 - iVar5;
   iVar8 = iVar8 - iVar11;
   iVar5 = param_2[0x28];
   iVar11 = param_2[0x38];
   iVar12 = param_2[8];
   iVar14 = ( iVar11 + iVar12 ) * -0x1ccd;
   iVar16 = ( iVar11 + iVar2 + iVar5 + iVar12 ) * 0x25a1;
   iVar15 = ( iVar5 + iVar2 ) * -0x5203;
   iVar9 = ( iVar5 + iVar12 ) * -0xc7c + iVar16;
   iVar12 = iVar12 * 0x300b + iVar14 + iVar9;
   iVar16 = ( iVar11 + iVar2 ) * -0x3ec5 + iVar16;
   iVar11 = iVar11 * 0x98e + iVar14 + iVar16;
   iVar16 = iVar2 * 0x6254 + iVar15 + iVar16;
   uVar10 = iVar7 + 0x2020000 + iVar12 >> 0x12;
   iVar9 = iVar5 * 0x41b3 + iVar15 + iVar9;
   uVar3 = (int)~uVar10 >> 0x1f;
   if (uVar10 < 0x100) {
      uVar3 = uVar10;
   }

   uVar10 = ( iVar7 - iVar12 ) + 0x2020000 >> 0x12;
   *param_1 = (uchar)uVar3;
   if (0xff < uVar10) {
      uVar10 = (int)~uVar10 >> 0x1f;
   }

   uVar13 = iVar1 + 0x2020000 + iVar16 >> 0x12;
   param_1[0x38] = (uchar)uVar10;
   uVar3 = (int)~uVar13 >> 0x1f;
   if (uVar13 < 0x100) {
      uVar3 = uVar13;
   }

   uVar10 = ( iVar1 - iVar16 ) + 0x2020000 >> 0x12;
   param_1[8] = (uchar)uVar3;
   if (0xff < uVar10) {
      uVar10 = (int)~uVar10 >> 0x1f;
   }

   uVar13 = iVar8 + 0x2020000 + iVar9 >> 0x12;
   param_1[0x30] = (uchar)uVar10;
   uVar3 = (int)~uVar13 >> 0x1f;
   if (uVar13 < 0x100) {
      uVar3 = uVar13;
   }

   uVar10 = ( iVar8 - iVar9 ) + 0x2020000 >> 0x12;
   param_1[0x10] = (uchar)uVar3;
   if (0xff < uVar10) {
      uVar10 = (int)~uVar10 >> 0x1f;
   }

   uVar13 = iVar6 + 0x2020000 + iVar11 >> 0x12;
   param_1[0x28] = (uchar)uVar10;
   uVar3 = (int)~uVar13 >> 0x1f;
   if (uVar13 < 0x100) {
      uVar3 = uVar13;
   }

   iVar7 = ( iVar6 - iVar11 ) + 0x2020000;
   uVar10 = iVar7 >> 0x12;
   param_1[0x18] = (uchar)uVar3;
   uVar4 = (uchar)uVar10;
   if (0xff < uVar10) {
      uVar4 = (char)~(byte)(iVar7 >> 0x1f) >> 7;
   }

   param_1[0x20] = uVar4;
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* jpgd::jpeg_decoder_mem_stream::~jpeg_decoder_mem_stream() */void jpgd::jpeg_decoder_mem_stream::~jpeg_decoder_mem_stream(jpeg_decoder_mem_stream *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

