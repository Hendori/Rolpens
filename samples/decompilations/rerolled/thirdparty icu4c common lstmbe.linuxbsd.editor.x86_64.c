/* icu_76_godot::ConstArray1D::~ConstArray1D() */void icu_76_godot::ConstArray1D::~ConstArray1D(ConstArray1D *this) {
   return;
}
/* icu_76_godot::ConstArray2D::~ConstArray2D() */void icu_76_godot::ConstArray2D::~ConstArray2D(ConstArray2D *this) {
   return;
}
/* icu_76_godot::CodePointsVectorizer::~CodePointsVectorizer() */void icu_76_godot::CodePointsVectorizer::~CodePointsVectorizer(CodePointsVectorizer *this) {
   return;
}
/* icu_76_godot::GraphemeClusterVectorizer::~GraphemeClusterVectorizer() */void icu_76_godot::GraphemeClusterVectorizer::~GraphemeClusterVectorizer(GraphemeClusterVectorizer *this) {
   return;
}
/* icu_76_godot::LSTMBreakEngine::name() const */undefined8 icu_76_godot::LSTMBreakEngine::name(LSTMBreakEngine *this) {
   return *(undefined8*)( *(long*)( this + 0xd0 ) + 0x10 );
}
/* icu_76_godot::Array1D::~Array1D() */void icu_76_godot::Array1D::~Array1D(Array1D *this) {
   *(undefined***)this = &PTR__Array1D_00102b68;
   uprv_free_76_godot(*(undefined8*)( this + 8 ));
   return;
}
/* icu_76_godot::Array2D::~Array2D() */void icu_76_godot::Array2D::~Array2D(Array2D *this) {
   *(undefined***)this = &PTR__Array2D_00102b98;
   uprv_free_76_godot(*(undefined8*)( this + 8 ));
   return;
}
/* icu_76_godot::ConstArray1D::~ConstArray1D() */void icu_76_godot::ConstArray1D::~ConstArray1D(ConstArray1D *this) {
   operator_delete(this, 0x18);
   return;
}
/* icu_76_godot::Array1D::~Array1D() */void icu_76_godot::Array1D::~Array1D(Array1D *this) {
   *(undefined***)this = &PTR__Array1D_00102b68;
   uprv_free_76_godot(*(undefined8*)( this + 8 ));
   operator_delete(this, 0x20);
   return;
}
/* icu_76_godot::ConstArray2D::~ConstArray2D() */void icu_76_godot::ConstArray2D::~ConstArray2D(ConstArray2D *this) {
   operator_delete(this, 0x18);
   return;
}
/* icu_76_godot::Array2D::~Array2D() */void icu_76_godot::Array2D::~Array2D(Array2D *this) {
   *(undefined***)this = &PTR__Array2D_00102b98;
   uprv_free_76_godot(*(undefined8*)( this + 8 ));
   operator_delete(this, 0x20);
   return;
}
/* icu_76_godot::CodePointsVectorizer::~CodePointsVectorizer() */void icu_76_godot::CodePointsVectorizer::~CodePointsVectorizer(CodePointsVectorizer *this) {
   void *in_RSI;
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}
/* icu_76_godot::GraphemeClusterVectorizer::~GraphemeClusterVectorizer() */void icu_76_godot::GraphemeClusterVectorizer::~GraphemeClusterVectorizer(GraphemeClusterVectorizer *this) {
   void *in_RSI;
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}
/* icu_76_godot::LSTMBreakEngine::~LSTMBreakEngine() */void icu_76_godot::LSTMBreakEngine::~LSTMBreakEngine(LSTMBreakEngine *this) {
   UMemory *this_00;
   void *in_RSI;
   this_00 = *(UMemory**)( this + 0xd0 );
   *(undefined***)this = &PTR__LSTMBreakEngine_00102c48;
   if (this_00 != (UMemory*)0x0) {
      uhash_close_76_godot(*(undefined8*)this_00);
      ures_close_76_godot(*(undefined8*)( this_00 + 0xf0 ));
      icu_76_godot::UMemory::operator_delete(this_00, in_RSI);
   }

   if (*(long**)( this + 0xd8 ) != (long*)0x0) {
      ( **(code**)( **(long**)( this + 0xd8 ) + 8 ) )();
   }

   icu_76_godot::DictionaryBreakEngine::~DictionaryBreakEngine((DictionaryBreakEngine*)this);
   return;
}
/* icu_76_godot::LSTMBreakEngine::~LSTMBreakEngine() */void icu_76_godot::LSTMBreakEngine::~LSTMBreakEngine(LSTMBreakEngine *this) {
   void *in_RSI;
   ~LSTMBreakEngine(this)
   ;;
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}
/* icu_76_godot::CodePointsVectorizer::vectorize(UText*, int, int, icu_76_godot::UVector32&,
   icu_76_godot::UVector32&, UErrorCode&) const */void icu_76_godot::CodePointsVectorizer::vectorize(CodePointsVectorizer *this, UText *param_1, int param_2, int param_3, UVector32 *param_4, UVector32 *param_5, UErrorCode *param_6) {
   int iVar1;
   char cVar2;
   undefined2 uVar3;
   int iVar4;
   undefined4 uVar5;
   uint uVar6;
   int iVar7;
   long in_FS_OFFSET;
   char local_45;
   undefined4 local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = param_3 - param_2;
   iVar7 = (int)param_4;
   if ((int)uVar6 < 0) {
      cVar2 = icu_76_godot::UVector32::expandCapacity(iVar7, (UErrorCode*)(ulong)uVar6);
      if (cVar2 == '\0') goto LAB_00100211;
   }
 else {
      if (( *(int*)( param_4 + 0xc ) < (int)uVar6 ) && ( cVar2 = icu_76_godot::UVector32::expandCapacity(iVar7, (UErrorCode*)(ulong)uVar6) ),cVar2 == '\0') goto LAB_00100211;
      if ((int)uVar6 <= *(int*)( param_5 + 0xc )) goto LAB_0010024c;
   }

   cVar2 = icu_76_godot::UVector32::expandCapacity((int)param_5, (UErrorCode*)(ulong)uVar6);
   if (cVar2 != '\0') {
      LAB_0010024c:if (*(int*)param_6 < 1) {
         utext_setNativeIndex_76_godot(param_1, (long)param_2);
         local_44 = 0;
         LAB_00100278:if (( *(int*)param_6 < 1 ) && ( iVar4 = iVar4 < param_3 )) {
            uVar3 = utext_next32_76_godot(param_1);
            local_44 = CONCAT22(local_44._2_2_, uVar3);
            iVar1 = *(int*)( param_4 + 8 );
            uVar6 = iVar1 + 1;
            if (( (int)uVar6 < 0 ) || ( *(int*)( param_4 + 0xc ) < (int)uVar6 )) {
               cVar2 = icu_76_godot::UVector32::expandCapacity(iVar7, (UErrorCode*)(ulong)uVar6);
               if (cVar2 != '\0') {
                  iVar1 = *(int*)( param_4 + 8 );
                  goto LAB_00100354;
               }

            }
 else {
               LAB_00100354:*(int*)( *(long*)( param_4 + 0x18 ) + (long)iVar1 * 4 ) = iVar4;
               *(int*)( param_4 + 8 ) = *(int*)( param_4 + 8 ) + 1;
            }

            local_45 = '\0';
            uVar5 = uhash_getiAndFound_76_godot(*(undefined8*)( this + 8 ), &local_44, &local_45);
            if (local_45 == '\0') {
               uVar5 = *(undefined4*)( *(long*)( this + 8 ) + 0x30 );
            }

            iVar4 = *(int*)( param_5 + 8 );
            uVar6 = iVar4 + 1;
            if (( (int)uVar6 < 0 ) || ( *(int*)( param_5 + 0xc ) < (int)uVar6 )) goto LAB_001002ff;
            goto LAB_00100316;
         }

      }

   }

   LAB_00100211:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   LAB_001002ff:cVar2 = icu_76_godot::UVector32::expandCapacity((int)param_5, (UErrorCode*)(ulong)uVar6);
   if (cVar2 != '\0') {
      iVar4 = *(int*)( param_5 + 8 );
      LAB_00100316:*(undefined4*)( *(long*)( param_5 + 0x18 ) + (long)iVar4 * 4 ) = uVar5;
      *(int*)( param_5 + 8 ) = *(int*)( param_5 + 8 ) + 1;
   }

   goto LAB_00100278;
}
/* icu_76_godot::ReadArray1D::~ReadArray1D() */void icu_76_godot::ReadArray1D::~ReadArray1D(ReadArray1D *this) {
   return;
}
/* icu_76_godot::ReadArray1D::~ReadArray1D() */void icu_76_godot::ReadArray1D::~ReadArray1D(ReadArray1D *this) {
   operator_delete(this, 8);
   return;
}
/* icu_76_godot::ReadArray2D::~ReadArray2D() */void icu_76_godot::ReadArray2D::~ReadArray2D(ReadArray2D *this) {
   return;
}
/* icu_76_godot::ReadArray2D::~ReadArray2D() */void icu_76_godot::ReadArray2D::~ReadArray2D(ReadArray2D *this) {
   operator_delete(this, 8);
   return;
}
/* icu_76_godot::LSTMData::LSTMData(UResourceBundle*, UErrorCode&) */void icu_76_godot::LSTMData::LSTMData(LSTMData *this, UResourceBundle *param_1, UErrorCode *param_2) {
   int iVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   undefined8 uVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   uint uVar11;
   long in_FS_OFFSET;
   undefined4 local_110;
   UErrorCode local_10c[4];
   UErrorCode local_108[16];
   uint local_f8;
   code *local_e8;
   undefined8 local_e0;
   undefined8 local_d8;
   undefined4 local_d0;
   StackUResourceBundle local_c8[136];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)( this + 0x60 ) = &PTR__ConstArray1D_00102b00;
   *(undefined8*)this = 0;
   *(undefined4*)( this + 8 ) = 0;
   *(undefined8*)( this + 0x10 ) = 0;
   for (int i = 0; i < 3; i++) {
      *(undefined***)( this + ( 24*i + 24 ) ) = &PTR__ConstArray2D_00102b30;
      *(undefined8*)( this + ( 24*i + 32 ) ) = 0;
      *(undefined8*)( this + ( 24*i + 40 ) ) = 0;
   }

   *(undefined8*)( this + 0x68 ) = 0;
   *(undefined4*)( this + 0x70 ) = 0;
   *(undefined***)( this + 0x78 ) = &PTR__ConstArray2D_00102b30;
   *(undefined8*)( this + 0x80 ) = 0;
   iVar1 = *(int*)param_2;
   *(undefined8*)( this + 0x88 ) = 0;
   *(undefined***)( this + 0x90 ) = &PTR__ConstArray2D_00102b30;
   *(undefined8*)( this + 0x98 ) = 0;
   *(undefined8*)( this + 0xa0 ) = 0;
   *(undefined***)( this + 0xa8 ) = &PTR__ConstArray1D_00102b00;
   *(undefined8*)( this + 0xb0 ) = 0;
   *(undefined4*)( this + 0xb8 ) = 0;
   *(undefined***)( this + 0xc0 ) = &PTR__ConstArray2D_00102b30;
   *(undefined8*)( this + 200 ) = 0;
   *(undefined8*)( this + 0xd0 ) = 0;
   *(undefined***)( this + 0xd8 ) = &PTR__ConstArray1D_00102b00;
   *(undefined8*)( this + 0xe0 ) = 0;
   *(undefined4*)( this + 0xe8 ) = 0;
   *(UResourceBundle**)( this + 0xf0 ) = param_1;
   if (iVar1 < 1) {
      lVar4 = ures_getByKey_76_godot(param_1, "embeddings", 0, param_2);
      iVar1 = ures_getInt_76_godot(lVar4, param_2);
      lVar5 = ures_getByKey_76_godot(param_1, "hunits", 0, param_2);
      if (*(int*)param_2 < 1) {
         iVar2 = ures_getInt_76_godot(lVar5, param_2);
         uVar6 = ures_getStringByKey_76_godot(param_1, &_LC2, 0, param_2);
         if (*(int*)param_2 < 1) {
            iVar3 = u_strCompare_76_godot(uVar6, 0xffffffff, L"codepoints", 0xffffffff, 0);
            if (iVar3 == 0) {
               *(undefined4*)( this + 8 ) = 1;
            }
 else {
               iVar3 = u_strCompare_76_godot(uVar6, 0xffffffff, L"graphclust", 0xffffffff, 0);
               if (iVar3 == 0) {
                  *(undefined4*)( this + 8 ) = 2;
               }

            }

            uVar6 = ures_getStringByKey_76_godot(param_1, "model", 0, param_2);
            *(undefined8*)( this + 0x10 ) = uVar6;
            lVar7 = ures_getByKey_76_godot(param_1, &_LC6, 0, param_2);
            if (*(int*)param_2 < 1) {
               local_110 = 0;
               lVar8 = ures_getIntVector_76_godot(lVar7, &local_110, param_2);
               uVar6 = uhash_open_76_godot(&uhash_hashUChars_76_godot, &uhash_compareUChars_76_godot, 0, param_2);
               *(undefined8*)this = uVar6;
               icu_76_godot::StackUResourceBundle::StackUResourceBundle(local_c8);
               local_e0 = 0;
               local_e8 = icu_76_godot::ResourceDataValue::getArray;
               local_d8 = 0;
               local_d0 = 0xffffffff;
               ures_getValueWithFallback_76_godot(param_1, &_LC7, local_c8, (ResourceDataValue*)&local_e8, param_2);
               icu_76_godot::ResourceDataValue::getArray(local_108);
               if (*(int*)param_2 < 1) {
                  if (0 < (int)local_f8) {
                     uVar11 = 0;
                     do {
                        icu_76_godot::ResourceArray::getValue((int)local_108, (ResourceValue*)(ulong)uVar11);
                        uVar6 = icu_76_godot::ResourceDataValue::getString((int*)&local_e8, local_10c);
                        uhash_putiAllowZero_76_godot(*(undefined8*)this, uVar6, uVar11, param_2);
                        if (0 < *(int*)param_2) goto LAB_001007bf;
                        uVar11 = uVar11 + 1;
                     }
 while ( uVar11 != local_f8 );
                  }

                  *(undefined4*)( this + 0xd4 ) = 4;
                  *(uint*)( this + 0x28 ) = local_f8 + 1;
                  iVar3 = iVar2 * 4;
                  *(int*)( this + 0x2c ) = iVar1;
                  *(long*)( this + 0x20 ) = lVar8;
                  *(int*)( this + 0x40 ) = iVar1;
                  *(int*)( this + 0x44 ) = iVar3;
                  lVar8 = lVar8 + (long)(int)( ( local_f8 + 1 ) * iVar1 ) * 4;
                  *(int*)( this + 0x58 ) = iVar2;
                  *(long*)( this + 0x38 ) = lVar8;
                  *(int*)( this + 0x5c ) = iVar3;
                  *(int*)( this + 0x70 ) = iVar3;
                  *(int*)( this + 0x88 ) = iVar1;
                  *(int*)( this + 0x8c ) = iVar3;
                  lVar10 = (long)( iVar2 * iVar1 * 4 ) * 4;
                  *(int*)( this + 0xa0 ) = iVar2;
                  lVar8 = lVar8 + lVar10;
                  lVar9 = (long)( iVar2 * iVar2 * 4 ) * 4;
                  *(long*)( this + 0x50 ) = lVar8;
                  lVar8 = lVar8 + lVar9;
                  *(long*)( this + 0x68 ) = lVar8;
                  lVar8 = lVar8 + (long)iVar3 * 4;
                  *(long*)( this + 0x80 ) = lVar8;
                  lVar8 = lVar8 + lVar10;
                  *(long*)( this + 0x98 ) = lVar8;
                  lVar8 = lVar8 + lVar9;
                  *(int*)( this + 0xd0 ) = iVar2 * 2;
                  *(long*)( this + 0xb0 ) = lVar8;
                  lVar8 = lVar8 + (long)iVar3 * 4;
                  *(int*)( this + 0xa4 ) = iVar3;
                  *(int*)( this + 0xb8 ) = iVar3;
                  *(long*)( this + 200 ) = lVar8;
                  *(long*)( this + 0xe0 ) = lVar8 + (long)( iVar2 * 8 ) * 4;
                  *(undefined4*)( this + 0xe8 ) = 4;
                  icu_76_godot::ResourceDataValue::~ResourceDataValue((ResourceDataValue*)&local_e8);
                  icu_76_godot::StackUResourceBundle::~StackUResourceBundle(local_c8);
               }
 else {
                  LAB_001007bf:icu_76_godot::ResourceDataValue::~ResourceDataValue((ResourceDataValue*)&local_e8);
                  icu_76_godot::StackUResourceBundle::~StackUResourceBundle(local_c8);
               }

            }

            if (lVar7 != 0) {
               ures_close_76_godot(lVar7);
            }

         }

      }

      if (lVar5 != 0) {
         ures_close_76_godot(lVar5);
      }

      if (lVar4 != 0) {
         ures_close_76_godot(lVar4);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* icu_76_godot::LSTMData::~LSTMData() */void icu_76_godot::LSTMData::~LSTMData(LSTMData *this) {
   uhash_close_76_godot(*(undefined8*)this);
   ures_close_76_godot(*(undefined8*)( this + 0xf0 ));
   return;
}
/* icu_76_godot::Vectorizer::~Vectorizer() */void icu_76_godot::Vectorizer::~Vectorizer(Vectorizer *this) {
   return;
}
/* icu_76_godot::Vectorizer::~Vectorizer() */void icu_76_godot::Vectorizer::~Vectorizer(Vectorizer *this) {
   void *in_RSI;
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* icu_76_godot::compute(int, icu_76_godot::ReadArray2D const&, icu_76_godot::ReadArray2D const&,
   icu_76_godot::ReadArray1D const&, icu_76_godot::ReadArray1D const&, icu_76_godot::Array1D&,
   icu_76_godot::Array1D&, icu_76_godot::Array1D&) */void icu_76_godot::compute(int param_1, ReadArray2D *param_2, ReadArray2D *param_3, ReadArray1D *param_4, ReadArray1D *param_5, Array1D *param_6, Array1D *param_7, Array1D *param_8) {
   long lVar1;
   long lVar2;
   int iVar3;
   int iVar4;
   float *pfVar5;
   code *pcVar6;
   ulong uVar7;
   float *pfVar8;
   float *pfVar9;
   long lVar10;
   long lVar11;
   ulong uVar12;
   long lVar13;
   undefined4 uVar14;
   float fVar15;
   float fVar16;
   ulong local_60;
   uVar7 = 0;
   while (true) {
      if (*(code**)( *(long*)param_8 + 0x10 ) == Array1D::d1) {
         iVar3 = *(int*)( param_8 + 0x18 );
      }
 else {
         iVar3 = ( **(code**)( *(long*)param_8 + 0x10 ) )(param_8, uVar7 & 0xffffffff);
      }

      if (iVar3 <= (int)uVar7) break;
      uVar12 = uVar7 & 0xffffffff;
      lVar13 = *(long*)( param_8 + 0x10 );
      lVar1 = uVar7 * 4;
      uVar7 = uVar7 + 1;
      uVar14 = ( **(code**)( *(long*)param_4 + 0x18 ) )(param_4, uVar12);
      *(undefined4*)( lVar13 + lVar1 ) = uVar14;
   }
;
   uVar7 = 0;
   while (true) {
      if (*(code**)( *(long*)param_8 + 0x10 ) == Array1D::d1) {
         iVar3 = *(int*)( param_8 + 0x18 );
      }
 else {
         iVar3 = ( **(code**)( *(long*)param_8 + 0x10 ) )(param_8);
      }

      if (iVar3 <= (int)uVar7) break;
      for (iVar3 = 0; iVar4 = ( **(code**)( *(long*)param_5 + 0x10 ) )(),iVar3 < iVar4; iVar3 = iVar3 + 1) {
         fVar15 = (float)( **(code**)( *(long*)param_5 + 0x18 ) )(param_5, iVar3);
         fVar16 = (float)( **(code**)( *(long*)param_2 + 0x20 ) )(param_2, iVar3, uVar7 & 0xffffffff);
         pfVar5 = (float*)( *(long*)( param_8 + 0x10 ) + uVar7 * 4 );
         *pfVar5 = fVar16 * fVar15 + *pfVar5;
      }

      uVar7 = uVar7 + 1;
   }
;
   local_60 = 0;
   while (true) {
      if (*(code**)( *(long*)param_8 + 0x10 ) == Array1D::d1) {
         iVar3 = *(int*)( param_8 + 0x18 );
      }
 else {
         iVar3 = ( **(code**)( *(long*)param_8 + 0x10 ) )(param_8);
      }

      if (iVar3 <= (int)local_60) break;
      for (iVar3 = 0; iVar4 = ( **(code**)( *(long*)param_6 + 0x10 ) )(),iVar3 < iVar4; iVar3 = iVar3 + 1) {
         fVar15 = (float)( **(code**)( *(long*)param_6 + 0x18 ) )(param_6, iVar3);
         fVar16 = (float)( **(code**)( *(long*)param_3 + 0x20 ) )(param_3, iVar3, local_60 & 0xffffffff);
         pfVar5 = (float*)( *(long*)( param_8 + 0x10 ) + local_60 * 4 );
         *pfVar5 = fVar16 * fVar15 + *pfVar5;
      }

      local_60 = local_60 + 1;
   }
;
   pfVar5 = *(float**)( param_8 + 0x10 );
   lVar1 = (long)( param_1 * 2 ) * 4;
   lVar13 = (long)param_1;
   if (param_1 < 1) {
      for (int i = 0; i < 3; i++) {
         uprv_free_76_godot(0);
      }

      local_60 = (long)( param_1 * 3 ) << 2;
   }
 else {
      pfVar8 = pfVar5;
      do {
         pfVar9 = pfVar8 + 1;
         fVar15 = expf((float)( ( uint ) * pfVar8 ^ __LC8 ));
         *pfVar8 = _LC9 / ( fVar15 + _LC9 );
         pfVar8 = pfVar9;
      }
 while ( pfVar9 != pfVar5 + lVar13 );
      uprv_free_76_godot(0);
      lVar11 = *(long*)( param_8 + 0x10 );
      pfVar5 = (float*)( lVar11 + lVar13 * 4 );
      do {
         pfVar8 = pfVar5 + 1;
         fVar15 = expf((float)( ( uint ) * pfVar5 ^ __LC8 ));
         *pfVar5 = _LC9 / ( fVar15 + _LC9 );
         pfVar5 = pfVar8;
      }
 while ( (float*)( lVar11 + lVar1 ) != pfVar8 );
      local_60 = lVar13 * 0xc;
      uprv_free_76_godot(0);
      lVar11 = *(long*)( param_8 + 0x10 );
      pfVar5 = (float*)( lVar11 + lVar1 );
      do {
         pfVar8 = pfVar5 + 1;
         fVar15 = tanhf(*pfVar5);
         *pfVar5 = fVar15;
         pfVar5 = pfVar8;
      }
 while ( (float*)( lVar11 + local_60 ) != pfVar8 );
      uprv_free_76_godot(0);
      lVar11 = *(long*)( param_8 + 0x10 );
      pfVar5 = (float*)( local_60 + lVar11 );
      do {
         pfVar8 = pfVar5 + 1;
         fVar15 = expf((float)( ( uint ) * pfVar5 ^ __LC8 ));
         *pfVar5 = _LC9 / ( fVar15 + _LC9 );
         pfVar5 = pfVar8;
      }
 while ( pfVar8 != (float*)( lVar11 + lVar13 * 0x10 ) );
   }

   lVar10 = 0;
   uprv_free_76_godot(0);
   lVar11 = *(long*)( param_8 + 0x10 );
   pcVar6 = *(code**)( *(long*)param_7 + 0x10 );
   while (true) {
      if (pcVar6 == Array1D::d1) {
         iVar3 = *(int*)( param_7 + 0x18 );
      }
 else {
         iVar3 = ( *pcVar6 )(param_7);
         pcVar6 = *(code**)( *(long*)param_7 + 0x10 );
      }

      if (iVar3 <= (int)lVar10) break;
      pfVar5 = (float*)( *(long*)( param_7 + 0x10 ) + lVar10 * 4 );
      lVar2 = lVar10 * 4;
      lVar10 = lVar10 + 1;
      *pfVar5 = *pfVar5 * *(float*)( lVar13 * 4 + lVar11 + lVar2 );
   }
;
   lVar13 = *(long*)( param_8 + 0x10 );
   lVar11 = 0;
   while (true) {
      if (pcVar6 == Array1D::d1) {
         iVar3 = *(int*)( param_7 + 0x18 );
      }
 else {
         iVar3 = ( *pcVar6 )(param_7);
      }

      if (iVar3 <= (int)lVar11) break;
      lVar10 = lVar11 * 4;
      lVar2 = lVar11 * 4;
      pfVar5 = (float*)( *(long*)( param_7 + 0x10 ) + lVar11 * 4 );
      lVar11 = lVar11 + 1;
      *pfVar5 = *(float*)( lVar13 + lVar1 + lVar10 ) * *(float*)( lVar13 + lVar2 ) + *pfVar5;
      pcVar6 = *(code**)( *(long*)param_7 + 0x10 );
   }
;
   uVar7 = 0;
   for (int i = 0; i < 3; i++) {
      uprv_free_76_godot(0);
   }

   if (0 < *(int*)( param_6 + 0x18 )) {
      do {
         lVar1 = uVar7 * 4;
         if (*(code**)( *(long*)param_7 + 0x18 ) == Array1D::get) {
            fVar15 = *(float*)( *(long*)( param_7 + 0x10 ) + uVar7 * 4 );
         }
 else {
            fVar15 = (float)( **(code**)( *(long*)param_7 + 0x18 ) )(param_7, uVar7 & 0xffffffff);
         }

         fVar15 = tanhf(fVar15);
         uVar7 = uVar7 + 1;
         *(float*)( *(long*)( param_6 + 0x10 ) + lVar1 ) = fVar15;
      }
 while ( (int)uVar7 < *(int*)( param_6 + 0x18 ) );
   }

   lVar13 = 0;
   lVar1 = *(long*)( param_8 + 0x10 );
   while (true) {
      if (*(code**)( *(long*)param_6 + 0x10 ) == Array1D::d1) {
         iVar3 = *(int*)( param_6 + 0x18 );
      }
 else {
         iVar3 = ( **(code**)( *(long*)param_6 + 0x10 ) )(param_6);
      }

      if (iVar3 <= (int)lVar13) break;
      pfVar5 = (float*)( *(long*)( param_6 + 0x10 ) + lVar13 * 4 );
      lVar11 = lVar13 * 4;
      lVar13 = lVar13 + 1;
      *pfVar5 = *pfVar5 * *(float*)( local_60 + lVar1 + lVar11 );
   }
;
   uprv_free_76_godot(0);
   return;
}
/* icu_76_godot::createVectorizer(icu_76_godot::LSTMData const*, UErrorCode&) */undefined8 *icu_76_godot::createVectorizer(LSTMData *param_1, UErrorCode *param_2) {
   undefined8 uVar1;
   undefined8 *puVar2;
   if (0 < *(int*)param_2) {
      return (undefined8*)0x0;
   }

   if (*(int*)( param_1 + 8 ) == 1) {
      puVar2 = (undefined8*)icu_76_godot::UMemory::operator_new((UMemory*)0x10, (ulong)param_2);
      if (puVar2 != (undefined8*)0x0) {
         uVar1 = *(undefined8*)param_1;
         *puVar2 = &PTR__CodePointsVectorizer_00102bf8;
         puVar2[1] = uVar1;
         return puVar2;
      }

   }
 else {
      if (*(int*)( param_1 + 8 ) != 2) {
         puVar2 = (undefined8*)createVectorizer(param_1, param_2);
         return puVar2;
      }

      puVar2 = (undefined8*)icu_76_godot::UMemory::operator_new((UMemory*)0x10, (ulong)param_2);
      if (puVar2 != (undefined8*)0x0) {
         uVar1 = *(undefined8*)param_1;
         *puVar2 = &PTR__GraphemeClusterVectorizer_00102c20;
         puVar2[1] = uVar1;
      }

   }

   return puVar2;
}
/* icu_76_godot::LSTMBreakEngine::LSTMBreakEngine(icu_76_godot::LSTMData const*,
   icu_76_godot::UnicodeSet const&, UErrorCode&) */void icu_76_godot::LSTMBreakEngine::LSTMBreakEngine(LSTMBreakEngine *this, LSTMData *param_1, UnicodeSet *param_2, UErrorCode *param_3) {
   undefined8 uVar1;
   icu_76_godot::DictionaryBreakEngine::DictionaryBreakEngine((DictionaryBreakEngine*)this);
   *(undefined***)this = &PTR__LSTMBreakEngine_00102c48;
   *(LSTMData**)( this + 0xd0 ) = param_1;
   uVar1 = createVectorizer(param_1, param_3);
   *(undefined8*)( this + 0xd8 ) = uVar1;
   if (0 < *(int*)param_3) {
      *(undefined8*)( this + 0xd0 ) = 0;
      return;
   }

   icu_76_godot::DictionaryBreakEngine::setCharacters((UnicodeSet*)this);
   return;
}
/* icu_76_godot::defaultLSTM(UScriptCode, UErrorCode&) */icu_76_godot * __thiscall
icu_76_godot::defaultLSTM(icu_76_godot *this,undefined4 param_2,int *param_3){
   undefined8 uVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined4 local_3c;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = ures_open_76_godot("icudt76l-brkitr", &_LC11);
   uVar1 = ures_getByKeyWithFallback_76_godot(uVar1, &_LC13, uVar1, param_3);
   uVar2 = uscript_getShortName_76_godot(param_2);
   local_3c = 0;
   *(code**)this = icu_76_godot::UnicodeString::setTo;
   *(undefined2*)( this + 8 ) = 2;
   uVar2 = ures_getStringByKey_76_godot(uVar1, uVar2, &local_3c, param_3);
   if (*param_3 < 1) {
      local_38 = uVar2;
      icu_76_godot::UnicodeString::setTo(this, 1, &local_38, local_3c);
   }
 else {
      icu_76_godot::UnicodeString::setToBogus();
   }

   ures_close_76_godot(uVar1);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
LSTMData *CreateLSTMDataForScript_76_godot(ulong param_1, UErrorCode *param_2) {
   int iVar1;
   UResourceBundle *pUVar2;
   LSTMData *this;
   ulong uVar3;
   long in_FS_OFFSET;
   UnicodeString aUStack_b8[64];
   ulong local_78;
   undefined4 local_70;
   undefined2 local_6c;
   undefined4 local_40;
   long local_30;
   this(LSTMData * 0x0);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( (uint)param_1 < 0x27 ) && ( ( 0xffffffbfee7fffffU >> ( param_1 & 0x3f ) & 1 ) == 0 )) {
      icu_76_godot::defaultLSTM((icu_76_godot*)aUStack_b8, param_1 & 0xffffffff, param_2);
      if (*(int*)param_2 < 1) {
         local_78 = (long)&local_6c + 1;
         local_70 = 0x28;
         local_40 = 0;
         local_6c = 0;
         iVar1 = icu_76_godot::CharString::appendInvariantChars((UnicodeString*)&local_78, (UErrorCode*)aUStack_b8);
         icu_76_godot::CharString::lastIndexOf((char)(UnicodeString*)&local_78);
         icu_76_godot::CharString::truncate(iVar1);
         uVar3 = local_78;
         pUVar2 = (UResourceBundle*)ures_openDirect_76_godot("icudt76l-brkitr", local_78, param_2);
         if (*(int*)param_2 < 1) {
            this(LSTMData * icu_76_godot::UMemory::operator_new((UMemory*)0xf8, uVar3));
            if (this != (LSTMData*)0x0) {
               icu_76_godot::LSTMData::LSTMData(this, pUVar2, param_2);
            }

         }
 else {
            if (pUVar2 != (UResourceBundle*)0x0) {
               ures_close_76_godot(pUVar2);
            }

            this(LSTMData * 0x0);
         }

         if ((char)local_6c != '\0') {
            uprv_free_76_godot(local_78);
         }

      }

      icu_76_godot::UnicodeString::~UnicodeString(aUStack_b8);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
LSTMData *CreateLSTMData_76_godot(UResourceBundle *param_1, UErrorCode *param_2) {
   LSTMData *this;
   this(LSTMData * icu_76_godot::UMemory::operator_new((UMemory*)0xf8, (ulong)param_2));
   if (this != (LSTMData*)0x0) {
      icu_76_godot::LSTMData::LSTMData(this, param_1, param_2);
   }

   return this;
}
void DeleteLSTMData_76_godot(UMemory *param_1, void *param_2) {
   if (param_1 != (UMemory*)0x0) {
      uhash_close_76_godot(*(undefined8*)param_1);
      ures_close_76_godot(*(undefined8*)( param_1 + 0xf0 ));
      icu_76_godot::UMemory::operator_delete(param_1, param_2);
      return;
   }

   return;
}
undefined8 LSTMDataName_76_godot(long param_1) {
   return *(undefined8*)( param_1 + 0x10 );
}
/* icu_76_godot::GraphemeClusterVectorizer::vectorize(UText*, int, int, icu_76_godot::UVector32&,
   icu_76_godot::UVector32&, UErrorCode&) const */void icu_76_godot::GraphemeClusterVectorizer::vectorize(GraphemeClusterVectorizer *this, UText *param_1, int param_2, int param_3, UVector32 *param_4, UVector32 *param_5, UErrorCode *param_6) {
   int iVar1;
   char cVar2;
   undefined4 uVar3;
   long *plVar4;
   uint uVar5;
   uint uVar6;
   int iVar7;
   uint uVar9;
   long in_FS_OFFSET;
   char local_129;
   Locale local_128[232];
   long local_40;
   int iVar8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0 < *(int*)param_6) goto LAB_0010130d;
   uVar9 = param_3 - param_2;
   iVar7 = (int)param_4;
   iVar8 = (int)param_5;
   if ((int)uVar9 < 0) {
      cVar2 = icu_76_godot::UVector32::expandCapacity(iVar7, (UErrorCode*)(ulong)uVar9);
      if (cVar2 == '\0') goto LAB_0010130d;
      LAB_00101386:cVar2 = icu_76_godot::UVector32::expandCapacity(iVar8, (UErrorCode*)(ulong)uVar9);
      if (cVar2 == '\0') goto LAB_0010130d;
      LAB_001013a4:if (0 < *(int*)param_6) goto LAB_0010130d;
   }
 else {
      if (*(int*)( param_4 + 0xc ) < (int)uVar9) {
         cVar2 = icu_76_godot::UVector32::expandCapacity(iVar7, (UErrorCode*)(ulong)uVar9);
         if (cVar2 == '\0') goto LAB_0010130d;
         if (*(int*)( param_5 + 0xc ) < (int)uVar9) goto LAB_00101386;
         goto LAB_001013a4;
      }

      if (*(int*)( param_5 + 0xc ) < (int)uVar9) goto LAB_00101386;
   }

   icu_76_godot::Locale::Locale(local_128);
   plVar4 = (long*)icu_76_godot::BreakIterator::createCharacterInstance(local_128, param_6);
   icu_76_godot::Locale::~Locale(local_128);
   if (*(int*)param_6 < 1) {
      ( **(code**)( *plVar4 + 0x40 ) )(plVar4, param_1, param_6);
      if (*(int*)param_6 < 1) {
         if (param_2 != 0) {
            ( **(code**)( *plVar4 + 0x80 ) )(plVar4, param_2);
         }

         uVar9 = param_2;
         do {
            do {
               uVar6 = uVar9;
               uVar9 = ( **(code**)( *plVar4 + 0x68 ) )(plVar4);
               if (( param_3 <= (int)uVar9 ) || ( uVar9 == 0xffffffff )) {
                  if (( *(int*)param_6 < 1 ) && ( ( (int)uVar6 < param_3 && ( utext_extract_76_godot(param_1, (long)(int)uVar6, (long)param_3, local_128, 10, param_6),*(int*)param_6 < 1 ) ) )) {
                     UVector32::addElement(iVar7, (UErrorCode*)(ulong)uVar6);
                     local_129 = '\0';
                     uVar9 = uhash_getiAndFound_76_godot(*(undefined8*)( this + 8 ), local_128, &local_129);
                     if (local_129 == '\0') {
                        uVar9 = *(uint*)( *(long*)( this + 8 ) + 0x30 );
                     }

                     UVector32::addElement(iVar8, (UErrorCode*)(ulong)uVar9);
                  }

                  goto LAB_00101520;
               }

            }
 while ( (int)uVar9 <= param_2 );
            utext_extract_76_godot(param_1, (long)(int)uVar6, (long)(int)uVar9, local_128, 10, param_6);
            if (0 < *(int*)param_6) break;
            iVar1 = *(int*)( param_4 + 8 );
            uVar5 = iVar1 + 1;
            if (( (int)uVar5 < 0 ) || ( *(int*)( param_4 + 0xc ) < (int)uVar5 )) {
               cVar2 = icu_76_godot::UVector32::expandCapacity(iVar7, (UErrorCode*)(ulong)uVar5);
               if (cVar2 != '\0') {
                  iVar1 = *(int*)( param_4 + 8 );
                  goto LAB_0010156c;
               }

            }
 else {
               LAB_0010156c:*(uint*)( *(long*)( param_4 + 0x18 ) + (long)iVar1 * 4 ) = uVar6;
               *(int*)( param_4 + 8 ) = *(int*)( param_4 + 8 ) + 1;
            }

            local_129 = '\0';
            uVar3 = uhash_getiAndFound_76_godot(*(undefined8*)( this + 8 ), local_128, &local_129);
            if (local_129 == '\0') {
               uVar3 = *(undefined4*)( *(long*)( this + 8 ) + 0x30 );
            }

            iVar1 = *(int*)( param_5 + 8 );
            uVar6 = iVar1 + 1;
            if (( (int)uVar6 < 0 ) || ( *(int*)( param_5 + 0xc ) < (int)uVar6 )) {
               cVar2 = icu_76_godot::UVector32::expandCapacity(iVar8, (UErrorCode*)(ulong)uVar6);
               if (cVar2 != '\0') {
                  iVar1 = *(int*)( param_5 + 8 );
                  goto LAB_00101585;
               }

            }
 else {
               LAB_00101585:*(undefined4*)( *(long*)( param_5 + 0x18 ) + (long)iVar1 * 4 ) = uVar3;
               *(int*)( param_5 + 8 ) = *(int*)( param_5 + 8 ) + 1;
            }

         }
 while ( *(int*)param_6 < 1 );
      }

   }
 else if (plVar4 == (long*)0x0) goto LAB_0010130d;
   LAB_00101520:( **(code**)( *plVar4 + 8 ) )(plVar4);
   LAB_0010130d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* icu_76_godot::LSTMBreakEngine::divideUpDictionaryRange(UText*, int, int,
   icu_76_godot::UVector32&, signed char, UErrorCode&) const */int icu_76_godot::LSTMBreakEngine::divideUpDictionaryRange(LSTMBreakEngine *this, undefined8 param_1, int param_2, int param_3, long param_4, undefined8 param_6, UErrorCode *param_7) {
   long lVar1;
   int iVar2;
   float fVar3;
   float fVar4;
   int iVar5;
   long lVar6;
   char cVar7;
   int iVar8;
   int iVar9;
   long lVar10;
   size_t __n;
   undefined1(*pauVar11)[16];
   void *__s;
   void *__s_00;
   int iVar12;
   size_t sVar13;
   ulong uVar14;
   uint uVar15;
   ulong uVar16;
   void *pvVar17;
   undefined1(*pauVar18)[16];
   long in_FS_OFFSET;
   undefined4 uVar19;
   float fVar20;
   long local_1a0;
   void *local_190;
   undefined **local_108;
   long local_100;
   int local_f8;
   UVector32 local_e8[24];
   long local_d0;
   UVector32 local_c8[8];
   int local_c0;
   long local_b0;
   undefined **local_a8;
   void *local_a0;
   void *pvStack_98;
   int local_90;
   undefined **local_88;
   void *local_80;
   void *pvStack_78;
   int local_70;
   undefined **local_68;
   undefined8 local_60;
   void *local_58;
   int local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)param_7 < 1) {
      iVar9 = *(int*)( param_4 + 8 );
      utext_setNativeIndex_76_godot(param_1, (long)param_2);
      utext_moveIndex32_76_godot(param_1, 4);
      lVar10 = utext_getNativeIndex_76_godot(param_1);
      if (lVar10 < param_3) {
         utext_setNativeIndex_76_godot(param_1, (long)param_2);
         icu_76_godot::UVector32::UVector32(local_e8, param_7);
         icu_76_godot::UVector32::UVector32(local_c8, param_7);
         if (( *(int*)param_7 < 1 ) && ( ( **(code**)( **(long**)( this + 0xd8 ) + 0x10 ) )(*(long**)( this + 0xd8 ), param_1, param_2, param_3, local_e8, local_c8, param_7),*(int*)param_7 < 1 )) {
            iVar5 = *(int*)( *(long*)( this + 0xd0 ) + 0x58 );
            iVar2 = iVar5 * 4;
            local_a8 = &PTR__Array1D_00102b68;
            __n = (size_t)iVar2;
            local_a0 = (void*)uprv_malloc_76_godot(__n * 4);
            pvStack_98 = local_a0;
            local_90 = iVar2;
            if (*(int*)param_7 < 1) {
               if (local_a0 == (void*)0x0) {
                  *(undefined4*)param_7 = 7;
               }
 else {
                  memset(local_a0, 0, __n * 4);
               }

            }

            local_88 = &PTR__Array1D_00102b68;
            local_80 = (void*)uprv_malloc_76_godot(__n);
            pvStack_78 = local_80;
            local_70 = iVar5;
            if (*(int*)param_7 < 1) {
               if (local_80 == (void*)0x0) {
                  *(undefined4*)param_7 = 7;
               }
 else {
                  memset(local_80, 0, __n);
               }

            }

            pauVar11 = (undefined1(*) [16])uprv_malloc_76_godot(0x10);
            if (*(int*)param_7 < 1) {
               if (pauVar11 == (undefined1(*) [16])0x0) {
                  *(undefined4*)param_7 = 7;
               }
 else {
                  *pauVar11 = (undefined1[16])0x0;
               }

            }

            sVar13 = (long)( local_c0 * iVar5 ) << 2;
            __s = (void*)uprv_malloc_76_godot(sVar13);
            if (*(int*)param_7 < 1) {
               if (__s == (void*)0x0) {
                  *(undefined4*)param_7 = 7;
               }
 else {
                  memset(__s, 0, sVar13);
               }

            }

            iVar2 = iVar5 * 2;
            __s_00 = (void*)uprv_malloc_76_godot((long)iVar2 << 2);
            if (*(int*)param_7 < 1) {
               if (__s_00 == (void*)0x0) {
                  *(undefined4*)param_7 = 7;
                  goto LAB_001018ea;
               }

               memset(__s_00, 0, (long)iVar2 << 2);
               iVar8 = local_c0 + -1;
               if (-1 < iVar8) {
                  lVar10 = (long)iVar8;
                  iVar12 = local_c0 * iVar5;
                  pvVar17 = (void*)( (long)__s + (long)( local_c0 * iVar5 - iVar5 ) * 4 );
                  do {
                     local_68 = &PTR__Array1D_00102b68;
                     local_60 = 0;
                     local_58 = pvVar17;
                     local_50 = iVar5;
                     if (iVar8 != (int)lVar10) {
                        sVar13 = 0;
                        if (0 < iVar5) {
                           do {
                              *(undefined4*)( (long)pvVar17 + sVar13 ) = *(undefined4*)( (long)__s + sVar13 + (long)iVar12 * 4 );
                              sVar13 = sVar13 + 4;
                           }
 while ( __n != sVar13 );
                        }

                        uprv_free_76_godot(0);
                     }

                     lVar6 = *(long*)( this + 0xd0 );
                     iVar12 = iVar12 - iVar5;
                     local_f8 = *(int*)( lVar6 + 0x2c );
                     lVar1 = lVar10 * 4;
                     lVar10 = lVar10 + -1;
                     local_108 = &PTR__ConstArray1D_00102b00;
                     local_100 = *(long*)( lVar6 + 0x20 ) + (long)( *(int*)( local_b0 + lVar1 ) * local_f8 ) * 4;
                     compute(iVar5, (ReadArray2D*)( lVar6 + 0x78 ), (ReadArray2D*)( lVar6 + 0x90 ), (ReadArray1D*)( lVar6 + 0xa8 ), (ReadArray1D*)&local_108, (Array1D*)&local_68, (Array1D*)&local_88, (Array1D*)&local_a8);
                     local_68 = &PTR__Array1D_00102b68;
                     uprv_free_76_godot(local_60);
                     pvVar17 = (void*)( (long)pvVar17 + (long)-iVar5 * 4 );
                  }
 while ( -1 < (int)lVar10 );
                  local_68 = &PTR__Array1D_00102b68;
                  local_60 = 0;
                  local_58 = __s_00;
                  local_50 = iVar5;
                  memset(pvStack_78, 0, (long)local_70 << 2);
                  local_1a0 = 0;
                  local_190 = __s;
                  LAB_00101bd0:lVar10 = *(long*)( this + 0xd0 );
                  local_f8 = *(int*)( lVar10 + 0x2c );
                  local_108 = &PTR__ConstArray1D_00102b00;
                  local_100 = *(long*)( lVar10 + 0x20 ) + (long)( *(int*)( local_b0 + local_1a0 * 4 ) * local_f8 ) * 4;
                  compute(iVar5, (ReadArray2D*)( lVar10 + 0x30 ), (ReadArray2D*)( lVar10 + 0x48 ), (ReadArray1D*)( lVar10 + 0x60 ), (ReadArray1D*)&local_108, (Array1D*)&local_68, (Array1D*)&local_88, (Array1D*)&local_a8);
                  if (0 < iVar5) {
                     memcpy((void*)( __n + (long)__s_00 ), local_190, ( ulong )(iVar5 - 1) * 4 + 4);
                  }

                  uVar14 = 0;
                  uprv_free_76_godot(0);
                  lVar10 = *(long*)( this + 0xd0 );
                  do {
                     uVar19 = ( **(code**)( *(long*)( lVar10 + 0xd8 ) + 0x18 ) )(lVar10 + 0xd8, uVar14 & 0xffffffff);
                     *(undefined4*)( *pauVar11 + uVar14 * 4 ) = uVar19;
                     uVar14 = uVar14 + 1;
                  }
 while ( uVar14 != 4 );
                  iVar8 = 0;
                  lVar10 = *(long*)( this + 0xd0 );
                  pauVar18 = pauVar11;
                  do {
                     if (0 < iVar2) goto LAB_00101cd8;
                     iVar8 = iVar8 + 1;
                     pauVar18 = (undefined1(*) [16])( *pauVar18 + 4 );
                  }
 while ( iVar8 != 4 );
                  goto LAB_00101d2b;
               }

               local_68 = &PTR__Array1D_00102b68;
               local_60 = 0;
               local_58 = __s_00;
               local_50 = iVar5;
               memset(pvStack_78, 0, (long)local_70 << 2);
               LAB_00101da7:iVar9 = *(int*)( param_4 + 8 ) - iVar9;
               LAB_00101db5:uprv_free_76_godot(0);
               local_68 = &PTR__Array1D_00102b68;
               uprv_free_76_godot(local_60);
            }
 else {
               LAB_001018ea:iVar9 = 0;
            }

            uprv_free_76_godot(__s_00);
            uprv_free_76_godot(__s);
            uprv_free_76_godot(pauVar11);
            local_88 = &PTR__Array1D_00102b68;
            uprv_free_76_godot(local_80);
            local_a8 = &PTR__Array1D_00102b68;
            uprv_free_76_godot(local_a0);
         }
 else {
            iVar9 = 0;
         }

         icu_76_godot::UVector32::~UVector32(local_c8);
         icu_76_godot::UVector32::~UVector32(local_e8);
         goto LAB_00101673;
      }

   }

   iVar9 = 0;
   LAB_00101673:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar9;
   LAB_00101cd8:do {
      uVar14 = 0;
      do {
         fVar3 = *(float*)( (long)__s_00 + uVar14 * 4 );
         uVar16 = uVar14 & 0xffffffff;
         uVar14 = uVar14 + 1;
         fVar20 = (float)( **(code**)( *(long*)( lVar10 + 0xc0 ) + 0x20 ) )(lVar10 + 0xc0, uVar16, iVar8);
         *(float*)*pauVar18 = fVar20 * fVar3 + *(float*)*pauVar18;
      }
 while ( (int)uVar14 < iVar2 );
      iVar8 = iVar8 + 1;
      pauVar18 = (undefined1(*) [16])( *pauVar18 + 4 );
   }
 while ( iVar8 != 4 );
   LAB_00101d2b:fVar3 = *(float*)*pauVar11;
   fVar20 = *(float*)( *pauVar11 + 4 );
   fVar4 = fVar20;
   if (fVar20 <= fVar3) {
      fVar4 = fVar3;
   }

   cVar7 = fVar3 < fVar20;
   if (fVar4 < *(float*)( *pauVar11 + 8 )) {
      if (*(float*)( *pauVar11 + 0xc ) <= *(float*)( *pauVar11 + 8 )) goto LAB_00101d7f;
      cVar7 = '\x03';
   }
 else if (fVar4 < *(float*)( *pauVar11 + 0xc )) {
      cVar7 = '\x03';
   }

   if (( cVar7 != '\0' && cVar7 != '\x03' ) || ( (int)local_1a0 == 0 )) goto LAB_00101d7f;
   uVar19 = *(undefined4*)( local_d0 + local_1a0 * 4 );
   iVar8 = *(int*)( param_4 + 8 );
   uVar15 = iVar8 + 1;
   if (( (int)uVar15 < 0 ) || ( *(int*)( param_4 + 0xc ) < (int)uVar15 )) {
      cVar7 = icu_76_godot::UVector32::expandCapacity((int)param_4, (UErrorCode*)(ulong)uVar15);
      if (cVar7 != '\0') {
         iVar8 = *(int*)( param_4 + 8 );
         goto LAB_00101e7d;
      }

   }
 else {
      LAB_00101e7d:*(undefined4*)( *(long*)( param_4 + 0x18 ) + (long)iVar8 * 4 ) = uVar19;
      *(int*)( param_4 + 8 ) = *(int*)( param_4 + 8 ) + 1;
   }

   if (0 < *(int*)param_7) {
      iVar9 = 0;
      goto LAB_00101db5;
   }

   LAB_00101d7f:local_1a0 = local_1a0 + 1;
   local_190 = (void*)( (long)local_190 + __n );
   if (local_c0 == local_1a0) goto LAB_00101da7;
   goto LAB_00101bd0;
}
DictionaryBreakEngine *CreateLSTMBreakEngine_76_godot(int param_1, LSTMData *param_2, UErrorCode *param_3) {
   int iVar1;
   DictionaryBreakEngine *this;
   undefined8 uVar2;
   long lVar3;
   code **ppcVar4;
   UErrorCode *pUVar5;
   LSTMData *pLVar6;
   long in_FS_OFFSET;
   code *local_138;
   undefined2 local_130;
   code *local_f8;
   undefined2 local_f0;
   long local_30;
   ppcVar4 = &local_138;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_130 = 2;
   local_138 = icu_76_godot::UnicodeString::setTo;
   if (param_1 == 0x1c) {
      lVar3 = 0;
      do {
         lVar3 = lVar3 + 1;
      }
 while ( *(short*)( &_LC15 + lVar3 * 2 ) != 0 );
   }
 else {
      if (param_1 != 0x26) {
         if (param_2 != (LSTMData*)0x0) {
            pLVar6 = param_2;
            uhash_close_76_godot(*(undefined8*)param_2);
            ures_close_76_godot(*(undefined8*)( param_2 + 0xf0 ));
            icu_76_godot::UMemory::operator_delete((UMemory*)param_2, pLVar6);
         }

         this(DictionaryBreakEngine * 0x0);
         goto LAB_001020dc;
      }

      lVar3 = 0;
      do {
         lVar3 = lVar3 + 1;
      }
 while ( *(short*)( &_LC14 + lVar3 * 2 ) != 0 );
   }

   local_f0 = 2;
   local_f8 = icu_76_godot::UnicodeString::setTo;
   icu_76_godot::UnicodeString::doAppend((UnicodeString*)&local_f8);
   icu_76_godot::UnicodeString::operator =((UnicodeString*)&local_138, (UnicodeString*)&local_f8);
   icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)&local_f8);
   icu_76_godot::UnicodeSet::UnicodeSet((UnicodeSet*)&local_f8);
   icu_76_godot::UnicodeSet::applyPattern((UnicodeString*)&local_f8, (UErrorCode*)&local_138);
   this(DictionaryBreakEngine * icu_76_godot::UMemory::operator_new((UMemory*)0xe0, (ulong)ppcVar4));
   if (this == (DictionaryBreakEngine*)0x0) {
      *(undefined4*)param_3 = 7;
      this(DictionaryBreakEngine * 0x0);
   }
 else {
      icu_76_godot::DictionaryBreakEngine::DictionaryBreakEngine(this);
      *(undefined***)this = &PTR__LSTMBreakEngine_00102c48;
      *(LSTMData**)( this + 0xd0 ) = param_2;
      pUVar5 = param_3;
      uVar2 = icu_76_godot::createVectorizer(param_2, param_3);
      iVar1 = *(int*)param_3;
      *(undefined8*)( this + 0xd8 ) = uVar2;
      if (iVar1 < 1) {
         pUVar5 = (UErrorCode*)&local_f8;
         icu_76_godot::DictionaryBreakEngine::setCharacters((UnicodeSet*)this);
         if (*(int*)param_3 < 1) goto LAB_001020d4;
      }
 else {
         *(undefined8*)( this + 0xd0 ) = 0;
      }

      if (*(code**)( *(long*)this + 8 ) == icu_76_godot::LSTMBreakEngine::~LSTMBreakEngine) {
         icu_76_godot::LSTMBreakEngine::~LSTMBreakEngine((LSTMBreakEngine*)this);
         icu_76_godot::UMemory::operator_delete((UMemory*)this, pUVar5);
         this(DictionaryBreakEngine * 0x0);
      }
 else {
         ( **(code**)( *(long*)this + 8 ) )();
         this(DictionaryBreakEngine * 0x0);
      }

   }

   LAB_001020d4:icu_76_godot::UnicodeSet::~UnicodeSet((UnicodeSet*)&local_f8);
   LAB_001020dc:icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)&local_138);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* icu_76_godot::ConstArray1D::d1() const */undefined4 icu_76_godot::ConstArray1D::d1(ConstArray1D *this) {
   return *(undefined4*)( this + 0x10 );
}
/* icu_76_godot::ConstArray1D::get(int) const */undefined4 icu_76_godot::ConstArray1D::get(ConstArray1D *this, int param_1) {
   return *(undefined4*)( *(long*)( this + 8 ) + (long)param_1 * 4 );
}
/* icu_76_godot::ConstArray2D::d1() const */undefined4 icu_76_godot::ConstArray2D::d1(ConstArray2D *this) {
   return *(undefined4*)( this + 0x10 );
}
/* icu_76_godot::ConstArray2D::d2() const */undefined4 icu_76_godot::ConstArray2D::d2(ConstArray2D *this) {
   return *(undefined4*)( this + 0x14 );
}
/* icu_76_godot::ConstArray2D::get(int, int) const */undefined4 icu_76_godot::ConstArray2D::get(ConstArray2D *this, int param_1, int param_2) {
   return *(undefined4*)( *(long*)( this + 8 ) + (long)( param_1 * *(int*)( this + 0x14 ) + param_2 ) * 4 );
}
/* icu_76_godot::Array1D::d1() const */undefined4 icu_76_godot::Array1D::d1(Array1D *this) {
   return *(undefined4*)( this + 0x18 );
}
/* icu_76_godot::Array1D::get(int) const */undefined4 icu_76_godot::Array1D::get(Array1D *this, int param_1) {
   return *(undefined4*)( *(long*)( this + 0x10 ) + (long)param_1 * 4 );
}
/* icu_76_godot::Array2D::d1() const */undefined4 icu_76_godot::Array2D::d1(Array2D *this) {
   return *(undefined4*)( this + 0x18 );
}
/* icu_76_godot::Array2D::d2() const */undefined4 icu_76_godot::Array2D::d2(Array2D *this) {
   return *(undefined4*)( this + 0x1c );
}
/* icu_76_godot::Array2D::get(int, int) const */undefined4 icu_76_godot::Array2D::get(Array2D *this, int param_1, int param_2) {
   return *(undefined4*)( *(long*)( this + 0x10 ) + (long)( param_1 * *(int*)( this + 0x1c ) + param_2 ) * 4 );
}
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray() */void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(MaybeStackArray<char,40> *this) {
   *(undefined4*)( this + 8 ) = 0x28;
   *(MaybeStackArray<char,40>**)this = this + 0xd;
   this[0xc] = (MaybeStackArray<char,40>)0x0;
   return;
}
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(int, UErrorCode) */void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(MaybeStackArray<char,40> *this, int param_1, int param_3) {
   long lVar1;
   *(undefined4*)( this + 8 ) = 0x28;
   *(MaybeStackArray<char,40>**)this = this + 0xd;
   this[0xc] = (MaybeStackArray<char,40>)0x0;
   if (( 0x28 < param_1 ) && ( param_3 < 1 )) {
      lVar1 = uprv_malloc_76_godot((long)param_1);
      if (lVar1 != 0) {
         if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
            uprv_free_76_godot(*(undefined8*)this);
         }

         *(long*)this = lVar1;
         *(int*)( this + 8 ) = param_1;
         this[0xc] = (MaybeStackArray<char,40>)0x1;
      }

      return;
   }

   return;
}
/* icu_76_godot::MaybeStackArray<char, 40>::~MaybeStackArray() */void icu_76_godot::MaybeStackArray<char,40>::~MaybeStackArray(MaybeStackArray<char,40> *this) {
   if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
      return;
   }

   uprv_free_76_godot(*(undefined8*)this);
   return;
}
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(icu_76_godot::MaybeStackArray<char,
   40>&&) */void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(MaybeStackArray<char,40> *this, MaybeStackArray *param_1) {
   int iVar1;
   MaybeStackArray *__src;
   __src = *(MaybeStackArray**)param_1;
   iVar1 = *(int*)( param_1 + 8 );
   *(MaybeStackArray*)( this + 0xc ) = param_1[0xc];
   *(MaybeStackArray**)this = __src;
   *(int*)( this + 8 ) = iVar1;
   if (__src != param_1 + 0xd) {
      *(MaybeStackArray**)param_1 = param_1 + 0xd;
      *(undefined4*)( param_1 + 8 ) = 0x28;
      param_1[0xc] = (MaybeStackArray)0x0;
      return;
   }

   *(MaybeStackArray<char,40>**)this = this + 0xd;
   memcpy(this + 0xd, __src, (long)iVar1);
   return;
}
/* icu_76_godot::MaybeStackArray<char,
   40>::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::MaybeStackArray<char, 40>&&) */MaybeStackArray<char,40> * __thiscall
icu_76_godot::MaybeStackArray<char,40>::operator=
          (MaybeStackArray<char,40> *this,MaybeStackArray *param_1){
   int iVar1;
   MaybeStackArray *__src;
   if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
      uprv_free_76_godot(*(undefined8*)this);
   }

   *(undefined4*)( this + 8 ) = *(undefined4*)( param_1 + 8 );
   *(MaybeStackArray*)( this + 0xc ) = param_1[0xc];
   __src = *(MaybeStackArray**)param_1;
   if (__src != param_1 + 0xd) {
      *(MaybeStackArray**)this = __src;
      *(MaybeStackArray**)param_1 = param_1 + 0xd;
      *(undefined4*)( param_1 + 8 ) = 0x28;
      param_1[0xc] = (MaybeStackArray)0x0;
      return this;
   }

   iVar1 = *(int*)( param_1 + 8 );
   *(MaybeStackArray<char,40>**)this = this + 0xd;
   memcpy(this + 0xd, __src, (long)iVar1);
   return this;
}
/* icu_76_godot::MaybeStackArray<char, 40>::getCapacity() const */undefined4 icu_76_godot::MaybeStackArray<char,40>::getCapacity(MaybeStackArray<char,40> *this) {
   return *(undefined4*)( this + 8 );
}
/* icu_76_godot::MaybeStackArray<char, 40>::getAlias() const */undefined8 icu_76_godot::MaybeStackArray<char,40>::getAlias(MaybeStackArray<char,40> *this) {
   return *(undefined8*)this;
}
/* icu_76_godot::MaybeStackArray<char, 40>::getArrayLimit() const */long icu_76_godot::MaybeStackArray<char,40>::getArrayLimit(MaybeStackArray<char,40> *this) {
   return (long)*(int*)( this + 8 ) + *(long*)this;
}
/* icu_76_godot::MaybeStackArray<char, 40>::operator[](long) const */long icu_76_godot::MaybeStackArray<char,40>::operator [](MaybeStackArray<char,40> *this, long param_1) {
   return *(long*)this + param_1;
}
/* icu_76_godot::MaybeStackArray<char, 40>::operator[](long) */long icu_76_godot::MaybeStackArray<char,40>::operator [](MaybeStackArray<char,40> *this, long param_1) {
   return *(long*)this + param_1;
}
/* icu_76_godot::MaybeStackArray<char, 40>::aliasInstead(char*, int) */void icu_76_godot::MaybeStackArray<char,40>::aliasInstead(MaybeStackArray<char,40> *this, char *param_1, int param_2) {
   if (( param_1 != (char*)0x0 ) && ( 0 < param_2 )) {
      if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
         *(char**)this = param_1;
         *(int*)( this + 8 ) = param_2;
         this[0xc] = (MaybeStackArray<char,40>)0x0;
         return;
      }

      uprv_free_76_godot(*(undefined8*)this);
      this[0xc] = (MaybeStackArray<char,40>)0x0;
      *(char**)this = param_1;
      *(int*)( this + 8 ) = param_2;
      return;
   }

   return;
}
/* icu_76_godot::MaybeStackArray<char, 40>::resize(int, int) */long icu_76_godot::MaybeStackArray<char,40>::resize(MaybeStackArray<char,40> *this, int param_1, int param_2) {
   MaybeStackArray<char,40> MVar1;
   long lVar2;
   if (0 < param_1) {
      lVar2 = uprv_malloc_76_godot((long)param_1);
      if (lVar2 != 0) {
         if (param_2 < 1) {
            MVar1 = this[0xc];
         }
 else {
            if (*(int*)( this + 8 ) < param_2) {
               param_2 = *(int*)( this + 8 );
            }

            if (param_1 < param_2) {
               param_2 = param_1;
            }

            __memcpy_chk(lVar2, *(undefined8*)this, (long)param_2, (long)param_1);
            MVar1 = this[0xc];
         }

         if (MVar1 != (MaybeStackArray<char,40>)0x0) {
            uprv_free_76_godot(*(undefined8*)this);
         }

         *(long*)this = lVar2;
         *(int*)( this + 8 ) = param_1;
         this[0xc] = (MaybeStackArray<char,40>)0x1;
         return lVar2;
      }

   }

   return 0;
}
/* icu_76_godot::MaybeStackArray<char, 40>::orphanOrClone(int, int&) */undefined8 icu_76_godot::MaybeStackArray<char,40>::orphanOrClone(MaybeStackArray<char,40> *this, int param_1, int *param_2) {
   long lVar1;
   undefined8 uVar2;
   long lVar3;
   if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
      uVar2 = *(undefined8*)this;
      LAB_0010256f:*param_2 = param_1;
      *(MaybeStackArray<char,40>**)this = this + 0xd;
      *(undefined4*)( this + 8 ) = 0x28;
      this[0xc] = (MaybeStackArray<char,40>)0x0;
      return uVar2;
   }

   if (0 < param_1) {
      if (*(int*)( this + 8 ) < param_1) {
         param_1 = *(int*)( this + 8 );
      }

      lVar3 = (long)param_1;
      lVar1 = uprv_malloc_76_godot(lVar3);
      if (lVar1 != 0) {
         uVar2 = __memcpy_chk(lVar1, *(undefined8*)this, lVar3, lVar3);
         goto LAB_0010256f;
      }

   }

   return 0;
}
/* icu_76_godot::MaybeStackArray<char, 40>::copyFrom(icu_76_godot::MaybeStackArray<char, 40> const&,
   UErrorCode&) */void icu_76_godot::MaybeStackArray<char,40>::copyFrom(MaybeStackArray<char,40> *this, MaybeStackArray *param_1, UErrorCode *param_2) {
   int iVar1;
   void *__src;
   void *__dest;
   if (0 < *(int*)param_2) {
      return;
   }

   iVar1 = *(int*)( param_1 + 8 );
   if (0 < iVar1) {
      __dest = (void*)uprv_malloc_76_godot((long)iVar1);
      if (__dest != (void*)0x0) {
         if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
            uprv_free_76_godot(*(undefined8*)this);
         }

         *(void**)this = __dest;
         this[0xc] = (MaybeStackArray<char,40>)0x1;
         __src = *(void**)param_1;
         *(int*)( this + 8 ) = iVar1;
         memcpy(__dest, __src, (long)iVar1);
         return;
      }

   }

   *(undefined4*)param_2 = 7;
   return;
}
/* icu_76_godot::MaybeStackArray<char, 40>::releaseArray() */void icu_76_godot::MaybeStackArray<char,40>::releaseArray(MaybeStackArray<char,40> *this) {
   if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
      return;
   }

   uprv_free_76_godot(*(undefined8*)this);
   return;
}
/* icu_76_godot::MaybeStackArray<char, 40>::resetToStackArray() */void icu_76_godot::MaybeStackArray<char,40>::resetToStackArray(MaybeStackArray<char,40> *this) {
   *(undefined4*)( this + 8 ) = 0x28;
   *(MaybeStackArray<char,40>**)this = this + 0xd;
   this[0xc] = (MaybeStackArray<char,40>)0x0;
   return;
}
/* icu_76_godot::UVector32::addElement(int, UErrorCode&) */void icu_76_godot::UVector32::addElement(int param_1, UErrorCode *param_2) {
   int iVar1;
   char cVar2;
   uint uVar3;
   undefined4 in_register_0000003c;
   long lVar4;
   lVar4 = CONCAT44(in_register_0000003c, param_1);
   iVar1 = *(int*)( lVar4 + 8 );
   uVar3 = iVar1 + 1;
   if (( (int)uVar3 < 0 ) || ( *(int*)( lVar4 + 0xc ) < (int)uVar3 )) {
      cVar2 = icu_76_godot::UVector32::expandCapacity(param_1, (UErrorCode*)(ulong)uVar3);
      if (cVar2 == '\0') {
         return;
      }

      iVar1 = *(int*)( lVar4 + 8 );
   }

   *(int*)( *(long*)( lVar4 + 0x18 ) + (long)iVar1 * 4 ) = (int)param_2;
   *(int*)( lVar4 + 8 ) = *(int*)( lVar4 + 8 ) + 1;
   return;
}
/* icu_76_godot::createVectorizer(icu_76_godot::LSTMData const*, UErrorCode&) [clone .cold] */void icu_76_godot::createVectorizer(LSTMData *param_1, UErrorCode *param_2) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* WARNING: Control flow encountered bad instruction data *//* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(icu_76_godot::MaybeStackArray<char,
   40>&&) */void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(MaybeStackArray *param_1) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* icu_76_godot::MaybeStackArray<char, 40>::~MaybeStackArray() */void icu_76_godot::MaybeStackArray<char,40>::~MaybeStackArray(MaybeStackArray<char,40> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(int, UErrorCode) */void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray() */void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

