/* icu_76_godot::DictionaryBreakEngine::DictionaryBreakEngine() */void icu_76_godot::DictionaryBreakEngine::DictionaryBreakEngine(DictionaryBreakEngine *this) {
   icu_76_godot::LanguageBreakEngine::LanguageBreakEngine((LanguageBreakEngine*)this);
   *(undefined**)this = &DAT_00104b90;
   icu_76_godot::UnicodeSet::UnicodeSet((UnicodeSet*)( this + 8 ));
   return;
}
/* icu_76_godot::PossibleWord::candidates(UText*, icu_76_godot::DictionaryMatcher*, int) */void icu_76_godot::PossibleWord::candidates(PossibleWord *this, UText *param_1, DictionaryMatcher *param_2, int param_3) {
   int iVar1;
   int iVar2;
   undefined8 extraout_RDX;
   undefined8 extraout_RDX_00;
   undefined8 uVar3;
   iVar1 = utext_getNativeIndex_76_godot(param_1);
   uVar3 = extraout_RDX;
   if (*(int*)( this + 8 ) == iVar1) {
      LAB_001000b3:iVar2 = *(int*)this;
      if (iVar2 < 1) goto LAB_001000b9;
   }
 else {
      *(int*)( this + 8 ) = iVar1;
      iVar2 = ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, param_1, param_3 - iVar1, 0x14, this + 0x14, this + 100);
      *(int*)this = iVar2;
      uVar3 = 0;
      if (iVar2 < 1) {
         utext_setNativeIndex_76_godot(param_1, (long)iVar1, 0, this + 4);
         uVar3 = extraout_RDX_00;
         goto LAB_001000b3;
      }

   }

   utext_setNativeIndex_76_godot(param_1, (long)( iVar1 + *(int*)( this + (long)( iVar2 + -1 ) * 4 + 0x14 ) ), uVar3);
   iVar2 = *(int*)this;
   LAB_001000b9:*(ulong*)( this + 0xc ) = CONCAT44(iVar2 + -1, iVar2 + -1);
   return;
}
/* icu_76_godot::PossibleWord::acceptMarked(UText*) */undefined4 icu_76_godot::PossibleWord::acceptMarked(PossibleWord *this, UText *param_1) {
   utext_setNativeIndex_76_godot(param_1, (long)( *(int*)( this + 8 ) + *(int*)( this + (long)*(int*)( this + 0xc ) * 4 + 0x14 ) ));
   return *(undefined4*)( this + (long)*(int*)( this + 0xc ) * 4 + 0x14 );
}
/* icu_76_godot::PossibleWord::backUp(UText*) */undefined8 icu_76_godot::PossibleWord::backUp(PossibleWord *this, UText *param_1) {
   int iVar1;
   if (*(int*)( this + 0x10 ) < 1) {
      return 0;
   }

   iVar1 = *(int*)( this + 0x10 ) + -1;
   *(int*)( this + 0x10 ) = iVar1;
   utext_setNativeIndex_76_godot(param_1, (long)( *(int*)( this + (long)iVar1 * 4 + 0x14 ) + *(int*)( this + 8 ) ));
   return 1;
}
/* icu_76_godot::DictionaryBreakEngine::~DictionaryBreakEngine() */void icu_76_godot::DictionaryBreakEngine::~DictionaryBreakEngine(DictionaryBreakEngine *this) {
   *(undefined**)this = &DAT_00104b90;
   icu_76_godot::UnicodeSet::~UnicodeSet((UnicodeSet*)( this + 8 ));
   icu_76_godot::LanguageBreakEngine::~LanguageBreakEngine((LanguageBreakEngine*)this);
   return;
}
/* icu_76_godot::DictionaryBreakEngine::~DictionaryBreakEngine() */void icu_76_godot::DictionaryBreakEngine::~DictionaryBreakEngine(DictionaryBreakEngine *this) {
   void *in_RSI;
   *(undefined**)this = &DAT_00104b90;
   icu_76_godot::UnicodeSet::~UnicodeSet((UnicodeSet*)( this + 8 ));
   icu_76_godot::LanguageBreakEngine::~LanguageBreakEngine((LanguageBreakEngine*)this);
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}
/* icu_76_godot::LaoBreakEngine::~LaoBreakEngine() */void icu_76_godot::LaoBreakEngine::~LaoBreakEngine(LaoBreakEngine *this) {
   *(undefined***)this = &PTR__LaoBreakEngine_00104c20;
   if (*(long**)( this + 0x328 ) != (long*)0x0) {
      ( **(code**)( **(long**)( this + 0x328 ) + 8 ) )();
   }

   for (int i = 0; i < 3; i++) {
      icu_76_godot::UnicodeSet::~UnicodeSet((UnicodeSet*)( this + ( -200*i + 608 ) ));
   }

   *(undefined**)this = &DAT_00104b90;
   icu_76_godot::UnicodeSet::~UnicodeSet((UnicodeSet*)( this + 8 ));
   icu_76_godot::LanguageBreakEngine::~LanguageBreakEngine((LanguageBreakEngine*)this);
   return;
}
/* icu_76_godot::LaoBreakEngine::~LaoBreakEngine() */void icu_76_godot::LaoBreakEngine::~LaoBreakEngine(LaoBreakEngine *this) {
   void *in_RSI;
   ~LaoBreakEngine(this)
   ;;
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}
/* icu_76_godot::BurmeseBreakEngine::~BurmeseBreakEngine() */void icu_76_godot::BurmeseBreakEngine::~BurmeseBreakEngine(BurmeseBreakEngine *this) {
   *(undefined***)this = &PTR__BurmeseBreakEngine_00104c68;
   if (*(long**)( this + 0x328 ) != (long*)0x0) {
      ( **(code**)( **(long**)( this + 0x328 ) + 8 ) )();
   }

   for (int i = 0; i < 3; i++) {
      icu_76_godot::UnicodeSet::~UnicodeSet((UnicodeSet*)( this + ( -200*i + 608 ) ));
   }

   *(undefined**)this = &DAT_00104b90;
   icu_76_godot::UnicodeSet::~UnicodeSet((UnicodeSet*)( this + 8 ));
   icu_76_godot::LanguageBreakEngine::~LanguageBreakEngine((LanguageBreakEngine*)this);
   return;
}
/* icu_76_godot::BurmeseBreakEngine::~BurmeseBreakEngine() */void icu_76_godot::BurmeseBreakEngine::~BurmeseBreakEngine(BurmeseBreakEngine *this) {
   void *in_RSI;
   ~BurmeseBreakEngine(this)
   ;;
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}
/* icu_76_godot::KhmerBreakEngine::~KhmerBreakEngine() */void icu_76_godot::KhmerBreakEngine::~KhmerBreakEngine(KhmerBreakEngine *this) {
   *(undefined***)this = &PTR__KhmerBreakEngine_00104cb0;
   if (*(long**)( this + 0x328 ) != (long*)0x0) {
      ( **(code**)( **(long**)( this + 0x328 ) + 8 ) )();
   }

   for (int i = 0; i < 3; i++) {
      icu_76_godot::UnicodeSet::~UnicodeSet((UnicodeSet*)( this + ( -200*i + 608 ) ));
   }

   *(undefined**)this = &DAT_00104b90;
   icu_76_godot::UnicodeSet::~UnicodeSet((UnicodeSet*)( this + 8 ));
   icu_76_godot::LanguageBreakEngine::~LanguageBreakEngine((LanguageBreakEngine*)this);
   return;
}
/* icu_76_godot::KhmerBreakEngine::~KhmerBreakEngine() */void icu_76_godot::KhmerBreakEngine::~KhmerBreakEngine(KhmerBreakEngine *this) {
   void *in_RSI;
   ~KhmerBreakEngine(this)
   ;;
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}
/* icu_76_godot::ThaiBreakEngine::~ThaiBreakEngine() */void icu_76_godot::ThaiBreakEngine::~ThaiBreakEngine(ThaiBreakEngine *this) {
   *(undefined***)this = &PTR__ThaiBreakEngine_00104bd8;
   if (*(long**)( this + 0x3f0 ) != (long*)0x0) {
      ( **(code**)( **(long**)( this + 0x3f0 ) + 8 ) )();
   }

   for (int i = 0; i < 4; i++) {
      icu_76_godot::UnicodeSet::~UnicodeSet((UnicodeSet*)( this + ( -200*i + 808 ) ));
   }

   *(undefined**)this = &DAT_00104b90;
   icu_76_godot::UnicodeSet::~UnicodeSet((UnicodeSet*)( this + 8 ));
   icu_76_godot::LanguageBreakEngine::~LanguageBreakEngine((LanguageBreakEngine*)this);
   return;
}
/* icu_76_godot::ThaiBreakEngine::~ThaiBreakEngine() */void icu_76_godot::ThaiBreakEngine::~ThaiBreakEngine(ThaiBreakEngine *this) {
   void *in_RSI;
   ~ThaiBreakEngine(this)
   ;;
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}
/* icu_76_godot::CjkBreakEngine::~CjkBreakEngine() */void icu_76_godot::CjkBreakEngine::~CjkBreakEngine(CjkBreakEngine *this) {
   *(undefined***)this = &PTR__CjkBreakEngine_00104cf8;
   if (*(long**)( this + 0x328 ) != (long*)0x0) {
      ( **(code**)( **(long**)( this + 0x328 ) + 8 ) )();
   }

   if (*(long**)( this + 0x338 ) != (long*)0x0) {
      ( **(code**)( **(long**)( this + 0x338 ) + 8 ) )();
   }

   if (*(long*)( this + 0x348 ) != 0) {
      uhash_close_76_godot();
   }

   for (int i = 0; i < 3; i++) {
      icu_76_godot::UnicodeSet::~UnicodeSet((UnicodeSet*)( this + ( -200*i + 608 ) ));
   }

   *(undefined**)this = &DAT_00104b90;
   icu_76_godot::UnicodeSet::~UnicodeSet((UnicodeSet*)( this + 8 ));
   icu_76_godot::LanguageBreakEngine::~LanguageBreakEngine((LanguageBreakEngine*)this);
   return;
}
/* icu_76_godot::CjkBreakEngine::~CjkBreakEngine() */void icu_76_godot::CjkBreakEngine::~CjkBreakEngine(CjkBreakEngine *this) {
   void *in_RSI;
   ~CjkBreakEngine(this)
   ;;
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}
/* icu_76_godot::DictionaryBreakEngine::handles(int, char const*) const */void icu_76_godot::DictionaryBreakEngine::handles(int param_1, char *param_2) {
   icu_76_godot::UnicodeSet::contains(param_1 + 8);
   return;
}
/* icu_76_godot::DictionaryBreakEngine::findBreaks(UText*, int, int, icu_76_godot::UVector32&,
   signed char, UErrorCode&) const */undefined1[16];icu_76_godot::DictionaryBreakEngine::findBreaks (DictionaryBreakEngine *this,undefined8 param_1,undefined8 param_3_00,int param_3,
          undefined8 param_4,char param_6,int *param_7) {
   char cVar1;
   undefined4 uVar2;
   int iVar3;
   uint uVar4;
   ulong uVar5;
   undefined1 auVar6[16];
   undefined8 uStack_60;
   uVar5 = 0;
   if (*param_7 < 1) {
      utext_setNativeIndex_76_godot(param_1, (long)(int)param_3_00);
      uVar2 = utext_getNativeIndex_76_godot(param_1);
      utext_current32_76_godot(param_1);
      while (true) {
         uStack_60 = 0x10056a;
         iVar3 = utext_getNativeIndex_76_godot(param_1);
         if (param_3 <= iVar3) break;
         uStack_60 = 0x10054b;
         cVar1 = icu_76_godot::UnicodeSet::contains((int)this + 8);
         if (cVar1 == '\0') break;
         utext_next32_76_godot(param_1);
         utext_current32_76_godot(param_1);
      }
;
      uVar4 = ( **(code**)( *(long*)this + 0x30 ) )(this, param_1, uVar2, iVar3, param_4, (int)param_6, param_7);
      uVar5 = (ulong)uVar4;
      utext_setNativeIndex_76_godot(param_1, (long)iVar3);
      param_3_00 = uStack_60;
   }

   auVar6._8_8_ = param_3_00;
   auVar6._0_8_ = uVar5;
   return auVar6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* icu_76_godot::ThaiBreakEngine::divideUpDictionaryRange(UText*, int, int,
   icu_76_godot::UVector32&, signed char, UErrorCode&) const */uint icu_76_godot::ThaiBreakEngine::divideUpDictionaryRange(ThaiBreakEngine *this, UText *param_1, int param_2, int param_3, long param_4, undefined8 param_6, int *param_7) {
   char cVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   long lVar8;
   PossibleWord *pPVar9;
   PossibleWord *pPVar10;
   ulong uVar11;
   int iVar12;
   long lVar13;
   ulong uVar14;
   uint uVar15;
   uint uVar16;
   long in_FS_OFFSET;
   int local_2a0;
   PossibleWord local_268[4];
   int aiStack_264[24];
   int aiStack_204[110];
   PossibleWord local_4c[12];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_7 < 1) {
      lVar13 = (long)param_2;
      utext_setNativeIndex_76_godot(param_1, lVar13);
      utext_moveIndex32_76_godot(param_1, 4);
      lVar8 = utext_getNativeIndex_76_godot(param_1);
      if (lVar8 < param_3) {
         utext_setNativeIndex_76_godot(param_1, lVar13);
         pPVar9 = local_268;
         do {
            *(undefined4*)( pPVar9 + 0x10 ) = 0;
            pPVar10 = pPVar9 + 0xb4;
            *(undefined8*)pPVar9 = __LC0;
            *(undefined8*)( pPVar9 + 8 ) = _UNK_00104d78;
            pPVar9 = pPVar10;
         }
 while ( local_4c != pPVar10 );
         utext_setNativeIndex_76_godot(param_1, lVar13);
         iVar12 = (int)this;
         uVar16 = 0;
         if (*param_7 < 1) {
            uVar16 = 0;
            LAB_001006f0:iVar2 = utext_getNativeIndex_76_godot(param_1);
            if (iVar2 < param_3) {
               uVar14 = ( ulong )(uVar16 % 3);
               pPVar9 = local_268 + uVar14 * 0xb4;
               iVar3 = PossibleWord::candidates(pPVar9, param_1, *(DictionaryMatcher**)( this + 0x3f0 ), param_3);
               if (iVar3 == 1) {
                  utext_setNativeIndex_76_godot(param_1, (long)( aiStack_264[uVar14 * 0x2d + 1] + aiStack_264[(long)aiStack_264[uVar14 * 0x2d + 2] + 4 + uVar14 * 0x2d] ));
                  lVar8 = (long)aiStack_264[uVar14 * 0x2d + 2] + uVar14 * 0x2d;
                  iVar3 = aiStack_264[lVar8 + 4];
                  iVar4 = aiStack_204[lVar8];
                  goto LAB_00100988;
               }

               if (1 < iVar3) {
                  iVar3 = utext_getNativeIndex_76_godot(param_1);
                  if (iVar3 < param_3) {
                     uVar11 = ( ulong )(( uVar16 + 1 ) % 3);
                     do {
                        iVar3 = PossibleWord::candidates(local_268 + uVar11 * 0xb4, param_1, *(DictionaryMatcher**)( this + 0x3f0 ), param_3);
                        if (iVar3 < 1) {
                           iVar3 = aiStack_264[uVar14 * 0x2d + 3];
                        }
 else {
                           aiStack_264[uVar14 * 0x2d + 2] = aiStack_264[uVar14 * 0x2d + 3];
                           iVar3 = utext_getNativeIndex_76_godot(param_1);
                           if (param_3 <= iVar3) goto LAB_00100c58;
                           while (true) {
                              iVar3 = PossibleWord::candidates(local_268 + ( ulong )(( uVar16 + 2 ) % 3) * 0xb4, param_1, *(DictionaryMatcher**)( this + 0x3f0 ), param_3);
                              if (iVar3 != 0) {
                                 lVar8 = (long)aiStack_264[uVar14 * 0x2d + 3];
                                 aiStack_264[uVar14 * 0x2d + 2] = aiStack_264[uVar14 * 0x2d + 3];
                                 goto LAB_0010093e;
                              }

                              if (aiStack_264[uVar11 * 0x2d + 3] < 1) break;
                              iVar3 = aiStack_264[uVar11 * 0x2d + 3] + -1;
                              aiStack_264[uVar11 * 0x2d + 3] = iVar3;
                              utext_setNativeIndex_76_godot(param_1, (long)( aiStack_264[(long)iVar3 + 4 + uVar11 * 0x2d] + aiStack_264[uVar11 * 0x2d + 1] ));
                           }
;
                           iVar3 = aiStack_264[uVar14 * 0x2d + 3];
                        }

                        if (iVar3 < 1) goto LAB_00100c58;
                        aiStack_264[uVar14 * 0x2d + 3] = iVar3 + -1;
                        utext_setNativeIndex_76_godot(param_1, (long)( aiStack_264[(long)( iVar3 + -1 ) + 4 + uVar14 * 0x2d] + aiStack_264[uVar14 * 0x2d + 1] ));
                     }
 while ( true );
                  }

                  lVar8 = (long)aiStack_264[uVar14 * 0x2d + 2];
                  goto LAB_0010093e;
               }

               iVar4 = utext_getNativeIndex_76_godot(param_1);
               iVar3 = 0;
               if (iVar4 < param_3) {
                  iVar3 = 0;
                  iVar4 = PossibleWord::candidates(pPVar9, param_1, *(DictionaryMatcher**)( this + 0x3f0 ), param_3);
                  local_2a0 = iVar2;
                  if (iVar4 < 1) goto LAB_001009ff;
                  goto LAB_00100795;
               }

               goto LAB_001007d3;
            }

         }

         LAB_0010080c:iVar12 = *(int*)( param_4 + 8 ) + -1;
         if (iVar12 < 0) {
            if (0 < param_3) goto LAB_00100601;
         }
 else {
            if (*(int*)( *(long*)( param_4 + 0x18 ) + (long)iVar12 * 4 ) < param_3) goto LAB_00100601;
            *(int*)( param_4 + 8 ) = iVar12;
         }

         uVar16 = uVar16 - 1;
         goto LAB_00100601;
      }

   }

   uVar16 = 0;
   LAB_00100601:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar16;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00100c58:lVar8 = (long)aiStack_264[uVar14 * 0x2d + 2];
   LAB_0010093e:utext_setNativeIndex_76_godot(param_1, (long)( aiStack_264[lVar8 + 4 + uVar14 * 0x2d] + aiStack_264[uVar14 * 0x2d + 1] ));
   lVar8 = (long)aiStack_264[uVar14 * 0x2d + 2] + uVar14 * 0x2d;
   iVar3 = aiStack_264[lVar8 + 4];
   iVar4 = aiStack_204[lVar8];
   LAB_00100988:uVar16 = uVar16 + 1;
   iVar5 = utext_getNativeIndex_76_godot(param_1);
   if (( iVar4 < 3 ) && ( iVar5 < param_3 )) {
      iVar4 = PossibleWord::candidates(local_268 + ( (ulong)uVar16 % 3 ) * 0xb4, param_1, *(DictionaryMatcher**)( this + 0x3f0 ), param_3);
      local_2a0 = iVar2 + iVar3;
      if (( iVar4 < 1 ) && ( ( iVar3 == 0 || ( aiStack_264[( (ulong)uVar16 % 3 ) * 0x2d] < 3 ) ) )) {
         LAB_001009ff:iVar4 = 0;
         iVar5 = param_3 - local_2a0;
         do {
            do {
               iVar6 = utext_getNativeIndex_76_godot(param_1);
               utext_next32_76_godot(param_1);
               iVar7 = utext_getNativeIndex_76_godot(param_1);
               iVar4 = iVar4 + ( iVar7 - iVar6 );
               iVar5 = iVar5 - ( iVar7 - iVar6 );
               if (iVar5 < 1) goto LAB_00100af1;
               utext_current32_76_godot(param_1);
               cVar1 = icu_76_godot::UnicodeSet::contains(iVar12 + 0xd0);
            }
 while ( ( cVar1 == '\0' ) || ( cVar1 = icu_76_godot::UnicodeSet::contains(iVar12 + 0x198) ),cVar1 == '\0' );
            iVar6 = PossibleWord::candidates(local_268 + ( ulong )(( uVar16 + 1 ) % 3) * 0xb4, param_1, *(DictionaryMatcher**)( this + 0x3f0 ), param_3);
            utext_setNativeIndex_76_godot(param_1, (long)( iVar4 + local_2a0 ));
         }
 while ( iVar6 < 1 );
         LAB_00100af1:if (iVar3 < 1) {
            uVar16 = uVar16 + 1;
         }

         iVar3 = iVar3 + iVar4;
      }
 else {
         LAB_00100795:utext_setNativeIndex_76_godot(param_1, (long)local_2a0);
      }

   }

   LAB_001007d3:while (iVar4 = utext_getNativeIndex_76_godot(param_1),iVar4 < param_3) {
      utext_current32_76_godot(param_1);
      cVar1 = icu_76_godot::UnicodeSet::contains(iVar12 + 0x328);
      if (cVar1 == '\0') break;
      utext_next32_76_godot(param_1);
      iVar5 = utext_getNativeIndex_76_godot(param_1);
      iVar3 = iVar3 + ( iVar5 - iVar4 );
   }
;
   iVar4 = utext_getNativeIndex_76_godot(param_1);
   if (param_3 <= iVar4) goto LAB_001008c0;
   if (iVar3 < 1) goto LAB_001007fa;
   iVar4 = PossibleWord::candidates(local_268 + ( ulong )(uVar16 % 3) * 0xb4, param_1, *(DictionaryMatcher**)( this + 0x3f0 ), param_3);
   if (iVar4 < 1) {
      iVar4 = utext_current32_76_godot(param_1);
      cVar1 = icu_76_godot::UnicodeSet::contains(iVar12 + 0x260);
      if (cVar1 == '\0') goto LAB_00100b55;
      if (iVar4 == 0xe2f) {
         utext_previous32_76_godot(param_1);
         cVar1 = icu_76_godot::UnicodeSet::contains(iVar12 + 0x260);
         if (cVar1 == '\0') {
            utext_next32_76_godot(param_1);
            iVar4 = utext_getNativeIndex_76_godot(param_1);
            utext_next32_76_godot(param_1);
            iVar5 = utext_getNativeIndex_76_godot(param_1);
            iVar3 = iVar3 + ( iVar5 - iVar4 );
            iVar4 = utext_current32_76_godot(param_1);
            if (iVar4 == 0xe46) {
               iVar4 = utext_previous32_76_godot(param_1);
               if (iVar4 != 0xe46) goto LAB_00100895;
               utext_next32_76_godot(param_1);
            }

            LAB_001008c0:if (iVar3 < 1) goto LAB_001007fa;
            goto LAB_001008c8;
         }

         utext_next32_76_godot(param_1);
         iVar3 = iVar3 + iVar2;
      }
 else {
         if (iVar4 == 0xe46) {
            iVar4 = utext_previous32_76_godot(param_1);
            if (iVar4 != 0xe46) {
               LAB_00100895:utext_next32_76_godot(param_1);
               iVar4 = utext_getNativeIndex_76_godot(param_1);
               utext_next32_76_godot(param_1);
               iVar5 = utext_getNativeIndex_76_godot(param_1);
               iVar3 = iVar3 + ( iVar5 - iVar4 );
               goto LAB_001008c0;
            }

            utext_next32_76_godot(param_1);
         }

         LAB_001008c8:iVar3 = iVar3 + iVar2;
      }

   }
 else {
      LAB_00100b55:iVar3 = iVar3 + iVar2;
      utext_setNativeIndex_76_godot(param_1, (long)iVar3);
   }

   iVar2 = *(int*)( param_4 + 8 );
   uVar15 = iVar2 + 1;
   if (( (int)uVar15 < 0 ) || ( *(int*)( param_4 + 0xc ) < (int)uVar15 )) {
      cVar1 = icu_76_godot::UVector32::expandCapacity((int)param_4, (UErrorCode*)(ulong)uVar15);
      if (cVar1 == '\0') goto LAB_001007fa;
      iVar2 = *(int*)( param_4 + 8 );
   }

   *(int*)( *(long*)( param_4 + 0x18 ) + (long)iVar2 * 4 ) = iVar3;
   *(int*)( param_4 + 8 ) = *(int*)( param_4 + 8 ) + 1;
   LAB_001007fa:if (0 < *param_7) goto LAB_0010080c;
   goto LAB_001006f0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* icu_76_godot::LaoBreakEngine::divideUpDictionaryRange(UText*, int, int, icu_76_godot::UVector32&,
   signed char, UErrorCode&) const */uint icu_76_godot::LaoBreakEngine::divideUpDictionaryRange(LaoBreakEngine *this, UText *param_1, int param_2, int param_3, long param_4, undefined8 param_6, int *param_7) {
   char cVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   PossibleWord *pPVar8;
   PossibleWord *pPVar9;
   long lVar10;
   ulong uVar11;
   int iVar12;
   ulong uVar13;
   uint uVar14;
   uint uVar15;
   long in_FS_OFFSET;
   int local_2a0;
   PossibleWord local_268[4];
   int aiStack_264[24];
   int aiStack_204[110];
   PossibleWord local_4c[12];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar15 = 0;
   if (( *param_7 < 1 ) && ( 3 < param_3 - param_2 )) {
      pPVar8 = local_268;
      do {
         *(undefined4*)( pPVar8 + 0x10 ) = 0;
         pPVar9 = pPVar8 + 0xb4;
         *(undefined8*)pPVar8 = __LC0;
         *(undefined8*)( pPVar8 + 8 ) = _UNK_00104d78;
         pPVar8 = pPVar9;
      }
 while ( pPVar9 != local_4c );
      uVar15 = 0;
      utext_setNativeIndex_76_godot(param_1, (long)param_2);
      iVar12 = (int)this;
      if (*param_7 < 1) {
         uVar15 = 0;
         LAB_00100f20:iVar2 = utext_getNativeIndex_76_godot(param_1);
         if (iVar2 < param_3) {
            uVar13 = ( ulong )(uVar15 % 3);
            pPVar8 = local_268 + uVar13 * 0xb4;
            iVar3 = PossibleWord::candidates(pPVar8, param_1, *(DictionaryMatcher**)( this + 0x328 ), param_3);
            if (iVar3 == 1) {
               utext_setNativeIndex_76_godot(param_1, (long)( aiStack_264[uVar13 * 0x2d + 1] + aiStack_264[(long)aiStack_264[uVar13 * 0x2d + 2] + 4 + uVar13 * 0x2d] ));
               lVar10 = (long)aiStack_264[uVar13 * 0x2d + 2] + uVar13 * 0x2d;
               iVar3 = aiStack_264[lVar10 + 4];
               iVar4 = aiStack_204[lVar10];
               goto LAB_0010113f;
            }

            if (1 < iVar3) {
               lVar10 = utext_getNativeIndex_76_godot(param_1);
               if (lVar10 < param_3) {
                  uVar11 = ( ulong )(( uVar15 + 1 ) % 3);
                  do {
                     iVar3 = PossibleWord::candidates(local_268 + uVar11 * 0xb4, param_1, *(DictionaryMatcher**)( this + 0x328 ), param_3);
                     if (iVar3 < 1) {
                        iVar3 = aiStack_264[uVar13 * 0x2d + 3];
                     }
 else {
                        aiStack_264[uVar13 * 0x2d + 2] = aiStack_264[uVar13 * 0x2d + 3];
                        iVar3 = utext_getNativeIndex_76_godot(param_1);
                        if (param_3 <= iVar3) goto LAB_001013b6;
                        while (true) {
                           iVar3 = PossibleWord::candidates(local_268 + ( ulong )(( uVar15 + 2 ) % 3) * 0xb4, param_1, *(DictionaryMatcher**)( this + 0x328 ), param_3);
                           if (iVar3 != 0) {
                              lVar10 = (long)aiStack_264[uVar13 * 0x2d + 3];
                              aiStack_264[uVar13 * 0x2d + 2] = aiStack_264[uVar13 * 0x2d + 3];
                              goto LAB_001010f5;
                           }

                           if (aiStack_264[uVar11 * 0x2d + 3] < 1) break;
                           iVar3 = aiStack_264[uVar11 * 0x2d + 3] + -1;
                           aiStack_264[uVar11 * 0x2d + 3] = iVar3;
                           utext_setNativeIndex_76_godot(param_1, (long)( aiStack_264[(long)iVar3 + 4 + uVar11 * 0x2d] + aiStack_264[uVar11 * 0x2d + 1] ));
                        }
;
                        iVar3 = aiStack_264[uVar13 * 0x2d + 3];
                     }

                     if (iVar3 < 1) goto LAB_001013b6;
                     aiStack_264[uVar13 * 0x2d + 3] = iVar3 + -1;
                     utext_setNativeIndex_76_godot(param_1, (long)( aiStack_264[(long)( iVar3 + -1 ) + 4 + uVar13 * 0x2d] + aiStack_264[uVar13 * 0x2d + 1] ));
                  }
 while ( true );
               }

               lVar10 = (long)aiStack_264[uVar13 * 0x2d + 2];
               goto LAB_001010f5;
            }

            iVar4 = utext_getNativeIndex_76_godot(param_1);
            iVar3 = 0;
            if (iVar4 < param_3) {
               iVar3 = 0;
               iVar4 = PossibleWord::candidates(pPVar8, param_1, *(DictionaryMatcher**)( this + 0x328 ), param_3);
               local_2a0 = iVar2;
               if (iVar4 < 1) goto LAB_001011b6;
               goto LAB_00100fc5;
            }

            goto LAB_00101003;
         }

      }

      LAB_0010102d:iVar12 = *(int*)( param_4 + 8 ) + -1;
      if (iVar12 < 0) {
         if (0 < param_3) goto LAB_00101051;
      }
 else {
         if (*(int*)( *(long*)( param_4 + 0x18 ) + (long)iVar12 * 4 ) < param_3) goto LAB_00101051;
         *(int*)( param_4 + 8 ) = iVar12;
      }

      uVar15 = uVar15 - 1;
   }

   LAB_00101051:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar15;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_001013b6:lVar10 = (long)aiStack_264[uVar13 * 0x2d + 2];
   LAB_001010f5:utext_setNativeIndex_76_godot(param_1, (long)( aiStack_264[lVar10 + 4 + uVar13 * 0x2d] + aiStack_264[uVar13 * 0x2d + 1] ));
   lVar10 = (long)aiStack_264[uVar13 * 0x2d + 2] + uVar13 * 0x2d;
   iVar3 = aiStack_264[lVar10 + 4];
   iVar4 = aiStack_204[lVar10];
   LAB_0010113f:uVar15 = uVar15 + 1;
   iVar5 = utext_getNativeIndex_76_godot(param_1);
   if (( iVar4 < 3 ) && ( iVar5 < param_3 )) {
      iVar4 = PossibleWord::candidates(local_268 + ( (ulong)uVar15 % 3 ) * 0xb4, param_1, *(DictionaryMatcher**)( this + 0x328 ), param_3);
      local_2a0 = iVar2 + iVar3;
      if (( iVar4 < 1 ) && ( ( iVar3 == 0 || ( aiStack_264[( (ulong)uVar15 % 3 ) * 0x2d] < 3 ) ) )) {
         LAB_001011b6:iVar4 = 0;
         iVar5 = param_3 - local_2a0;
         do {
            do {
               iVar6 = utext_getNativeIndex_76_godot(param_1);
               utext_next32_76_godot(param_1);
               iVar7 = utext_getNativeIndex_76_godot(param_1);
               iVar4 = iVar4 + ( iVar7 - iVar6 );
               iVar5 = iVar5 - ( iVar7 - iVar6 );
               if (iVar5 < 1) goto LAB_001012a9;
               utext_current32_76_godot(param_1);
               cVar1 = icu_76_godot::UnicodeSet::contains(iVar12 + 0xd0);
            }
 while ( ( cVar1 == '\0' ) || ( cVar1 = icu_76_godot::UnicodeSet::contains(iVar12 + 0x198) ),cVar1 == '\0' );
            iVar6 = PossibleWord::candidates(local_268 + ( ulong )(( uVar15 + 1 ) % 3) * 0xb4, param_1, *(DictionaryMatcher**)( this + 0x328 ), param_3);
            utext_setNativeIndex_76_godot(param_1, (long)( iVar4 + local_2a0 ));
         }
 while ( iVar6 < 1 );
         LAB_001012a9:if (iVar3 < 1) {
            uVar15 = uVar15 + 1;
         }

         iVar3 = iVar3 + iVar4;
      }
 else {
         LAB_00100fc5:utext_setNativeIndex_76_godot(param_1, (long)local_2a0);
      }

   }

   LAB_00101003:while (iVar4 = utext_getNativeIndex_76_godot(param_1),iVar4 < param_3) {
      utext_current32_76_godot(param_1);
      cVar1 = icu_76_godot::UnicodeSet::contains(iVar12 + 0x260);
      if (cVar1 == '\0') break;
      utext_next32_76_godot(param_1);
      iVar5 = utext_getNativeIndex_76_godot(param_1);
      iVar3 = iVar3 + ( iVar5 - iVar4 );
   }
;
   if (0 < iVar3) {
      iVar4 = *(int*)( param_4 + 8 );
      uVar14 = iVar4 + 1;
      if (( (int)uVar14 < 0 ) || ( *(int*)( param_4 + 0xc ) < (int)uVar14 )) {
         cVar1 = icu_76_godot::UVector32::expandCapacity((int)param_4, (UErrorCode*)(ulong)uVar14);
         if (cVar1 == '\0') goto LAB_00101016;
         iVar4 = *(int*)( param_4 + 8 );
      }

      *(int*)( *(long*)( param_4 + 0x18 ) + (long)iVar4 * 4 ) = iVar3 + iVar2;
      *(int*)( param_4 + 8 ) = *(int*)( param_4 + 8 ) + 1;
   }

   LAB_00101016:if (0 < *param_7) goto LAB_0010102d;
   goto LAB_00100f20;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* icu_76_godot::BurmeseBreakEngine::divideUpDictionaryRange(UText*, int, int,
   icu_76_godot::UVector32&, signed char, UErrorCode&) const */uint icu_76_godot::BurmeseBreakEngine::divideUpDictionaryRange(BurmeseBreakEngine *this, UText *param_1, int param_2, int param_3, long param_4, undefined8 param_6, int *param_7) {
   char cVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   PossibleWord *pPVar8;
   PossibleWord *pPVar9;
   long lVar10;
   ulong uVar11;
   int iVar12;
   ulong uVar13;
   uint uVar14;
   uint uVar15;
   long in_FS_OFFSET;
   int local_2a0;
   PossibleWord local_268[4];
   int aiStack_264[24];
   int aiStack_204[110];
   PossibleWord local_4c[12];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar15 = 0;
   if (( *param_7 < 1 ) && ( 3 < param_3 - param_2 )) {
      pPVar8 = local_268;
      do {
         *(undefined4*)( pPVar8 + 0x10 ) = 0;
         pPVar9 = pPVar8 + 0xb4;
         *(undefined8*)pPVar8 = __LC0;
         *(undefined8*)( pPVar8 + 8 ) = _UNK_00104d78;
         pPVar8 = pPVar9;
      }
 while ( pPVar9 != local_4c );
      uVar15 = 0;
      utext_setNativeIndex_76_godot(param_1, (long)param_2);
      iVar12 = (int)this;
      if (*param_7 < 1) {
         uVar15 = 0;
         LAB_001015f0:iVar2 = utext_getNativeIndex_76_godot(param_1);
         if (iVar2 < param_3) {
            uVar13 = ( ulong )(uVar15 % 3);
            pPVar8 = local_268 + uVar13 * 0xb4;
            iVar3 = PossibleWord::candidates(pPVar8, param_1, *(DictionaryMatcher**)( this + 0x328 ), param_3);
            if (iVar3 == 1) {
               utext_setNativeIndex_76_godot(param_1, (long)( aiStack_264[uVar13 * 0x2d + 1] + aiStack_264[(long)aiStack_264[uVar13 * 0x2d + 2] + 4 + uVar13 * 0x2d] ));
               lVar10 = (long)aiStack_264[uVar13 * 0x2d + 2] + uVar13 * 0x2d;
               iVar3 = aiStack_264[lVar10 + 4];
               iVar4 = aiStack_204[lVar10];
               goto LAB_0010180f;
            }

            if (1 < iVar3) {
               lVar10 = utext_getNativeIndex_76_godot(param_1);
               if (lVar10 < param_3) {
                  uVar11 = ( ulong )(( uVar15 + 1 ) % 3);
                  do {
                     iVar3 = PossibleWord::candidates(local_268 + uVar11 * 0xb4, param_1, *(DictionaryMatcher**)( this + 0x328 ), param_3);
                     if (iVar3 < 1) {
                        iVar3 = aiStack_264[uVar13 * 0x2d + 3];
                     }
 else {
                        aiStack_264[uVar13 * 0x2d + 2] = aiStack_264[uVar13 * 0x2d + 3];
                        iVar3 = utext_getNativeIndex_76_godot(param_1);
                        if (param_3 <= iVar3) goto LAB_00101a86;
                        while (true) {
                           iVar3 = PossibleWord::candidates(local_268 + ( ulong )(( uVar15 + 2 ) % 3) * 0xb4, param_1, *(DictionaryMatcher**)( this + 0x328 ), param_3);
                           if (iVar3 != 0) {
                              lVar10 = (long)aiStack_264[uVar13 * 0x2d + 3];
                              aiStack_264[uVar13 * 0x2d + 2] = aiStack_264[uVar13 * 0x2d + 3];
                              goto LAB_001017c5;
                           }

                           if (aiStack_264[uVar11 * 0x2d + 3] < 1) break;
                           iVar3 = aiStack_264[uVar11 * 0x2d + 3] + -1;
                           aiStack_264[uVar11 * 0x2d + 3] = iVar3;
                           utext_setNativeIndex_76_godot(param_1, (long)( aiStack_264[(long)iVar3 + 4 + uVar11 * 0x2d] + aiStack_264[uVar11 * 0x2d + 1] ));
                        }
;
                        iVar3 = aiStack_264[uVar13 * 0x2d + 3];
                     }

                     if (iVar3 < 1) goto LAB_00101a86;
                     aiStack_264[uVar13 * 0x2d + 3] = iVar3 + -1;
                     utext_setNativeIndex_76_godot(param_1, (long)( aiStack_264[(long)( iVar3 + -1 ) + 4 + uVar13 * 0x2d] + aiStack_264[uVar13 * 0x2d + 1] ));
                  }
 while ( true );
               }

               lVar10 = (long)aiStack_264[uVar13 * 0x2d + 2];
               goto LAB_001017c5;
            }

            iVar4 = utext_getNativeIndex_76_godot(param_1);
            iVar3 = 0;
            if (iVar4 < param_3) {
               iVar3 = 0;
               iVar4 = PossibleWord::candidates(pPVar8, param_1, *(DictionaryMatcher**)( this + 0x328 ), param_3);
               local_2a0 = iVar2;
               if (iVar4 < 1) goto LAB_00101886;
               goto LAB_00101695;
            }

            goto LAB_001016d3;
         }

      }

      LAB_001016fd:iVar12 = *(int*)( param_4 + 8 ) + -1;
      if (iVar12 < 0) {
         if (0 < param_3) goto LAB_00101721;
      }
 else {
         if (*(int*)( *(long*)( param_4 + 0x18 ) + (long)iVar12 * 4 ) < param_3) goto LAB_00101721;
         *(int*)( param_4 + 8 ) = iVar12;
      }

      uVar15 = uVar15 - 1;
   }

   LAB_00101721:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar15;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00101a86:lVar10 = (long)aiStack_264[uVar13 * 0x2d + 2];
   LAB_001017c5:utext_setNativeIndex_76_godot(param_1, (long)( aiStack_264[lVar10 + 4 + uVar13 * 0x2d] + aiStack_264[uVar13 * 0x2d + 1] ));
   lVar10 = (long)aiStack_264[uVar13 * 0x2d + 2] + uVar13 * 0x2d;
   iVar3 = aiStack_264[lVar10 + 4];
   iVar4 = aiStack_204[lVar10];
   LAB_0010180f:uVar15 = uVar15 + 1;
   iVar5 = utext_getNativeIndex_76_godot(param_1);
   if (( iVar4 < 3 ) && ( iVar5 < param_3 )) {
      iVar4 = PossibleWord::candidates(local_268 + ( (ulong)uVar15 % 3 ) * 0xb4, param_1, *(DictionaryMatcher**)( this + 0x328 ), param_3);
      local_2a0 = iVar2 + iVar3;
      if (( iVar4 < 1 ) && ( ( iVar3 == 0 || ( aiStack_264[( (ulong)uVar15 % 3 ) * 0x2d] < 3 ) ) )) {
         LAB_00101886:iVar4 = 0;
         iVar5 = param_3 - local_2a0;
         do {
            do {
               iVar6 = utext_getNativeIndex_76_godot(param_1);
               utext_next32_76_godot(param_1);
               iVar7 = utext_getNativeIndex_76_godot(param_1);
               iVar4 = iVar4 + ( iVar7 - iVar6 );
               iVar5 = iVar5 - ( iVar7 - iVar6 );
               if (iVar5 < 1) goto LAB_00101979;
               utext_current32_76_godot(param_1);
               cVar1 = icu_76_godot::UnicodeSet::contains(iVar12 + 0xd0);
            }
 while ( ( cVar1 == '\0' ) || ( cVar1 = icu_76_godot::UnicodeSet::contains(iVar12 + 0x198) ),cVar1 == '\0' );
            iVar6 = PossibleWord::candidates(local_268 + ( ulong )(( uVar15 + 1 ) % 3) * 0xb4, param_1, *(DictionaryMatcher**)( this + 0x328 ), param_3);
            utext_setNativeIndex_76_godot(param_1, (long)( iVar4 + local_2a0 ));
         }
 while ( iVar6 < 1 );
         LAB_00101979:if (iVar3 < 1) {
            uVar15 = uVar15 + 1;
         }

         iVar3 = iVar3 + iVar4;
      }
 else {
         LAB_00101695:utext_setNativeIndex_76_godot(param_1, (long)local_2a0);
      }

   }

   LAB_001016d3:while (iVar4 = utext_getNativeIndex_76_godot(param_1),iVar4 < param_3) {
      utext_current32_76_godot(param_1);
      cVar1 = icu_76_godot::UnicodeSet::contains(iVar12 + 0x260);
      if (cVar1 == '\0') break;
      utext_next32_76_godot(param_1);
      iVar5 = utext_getNativeIndex_76_godot(param_1);
      iVar3 = iVar3 + ( iVar5 - iVar4 );
   }
;
   if (0 < iVar3) {
      iVar4 = *(int*)( param_4 + 8 );
      uVar14 = iVar4 + 1;
      if (( (int)uVar14 < 0 ) || ( *(int*)( param_4 + 0xc ) < (int)uVar14 )) {
         cVar1 = icu_76_godot::UVector32::expandCapacity((int)param_4, (UErrorCode*)(ulong)uVar14);
         if (cVar1 == '\0') goto LAB_001016e6;
         iVar4 = *(int*)( param_4 + 8 );
      }

      *(int*)( *(long*)( param_4 + 0x18 ) + (long)iVar4 * 4 ) = iVar3 + iVar2;
      *(int*)( param_4 + 8 ) = *(int*)( param_4 + 8 ) + 1;
   }

   LAB_001016e6:if (0 < *param_7) goto LAB_001016fd;
   goto LAB_001015f0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* icu_76_godot::KhmerBreakEngine::divideUpDictionaryRange(UText*, int, int,
   icu_76_godot::UVector32&, signed char, UErrorCode&) const */uint icu_76_godot::KhmerBreakEngine::divideUpDictionaryRange(KhmerBreakEngine *this, UText *param_1, int param_2, int param_3, long param_4, undefined8 param_6, int *param_7) {
   char cVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   PossibleWord *pPVar8;
   PossibleWord *pPVar9;
   long lVar10;
   ulong uVar11;
   int iVar12;
   ulong uVar13;
   uint uVar14;
   uint uVar15;
   long in_FS_OFFSET;
   int local_2a0;
   PossibleWord local_268[4];
   int aiStack_264[24];
   int aiStack_204[110];
   PossibleWord local_4c[12];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar15 = 0;
   if (( *param_7 < 1 ) && ( 3 < param_3 - param_2 )) {
      pPVar8 = local_268;
      do {
         *(undefined4*)( pPVar8 + 0x10 ) = 0;
         pPVar9 = pPVar8 + 0xb4;
         *(undefined8*)pPVar8 = __LC0;
         *(undefined8*)( pPVar8 + 8 ) = _UNK_00104d78;
         pPVar8 = pPVar9;
      }
 while ( pPVar9 != local_4c );
      uVar15 = 0;
      utext_setNativeIndex_76_godot(param_1, (long)param_2);
      iVar12 = (int)this;
      if (*param_7 < 1) {
         uVar15 = 0;
         LAB_00101cc0:iVar2 = utext_getNativeIndex_76_godot(param_1);
         if (iVar2 < param_3) {
            uVar13 = ( ulong )(uVar15 % 3);
            pPVar8 = local_268 + uVar13 * 0xb4;
            iVar3 = PossibleWord::candidates(pPVar8, param_1, *(DictionaryMatcher**)( this + 0x328 ), param_3);
            if (iVar3 == 1) {
               utext_setNativeIndex_76_godot(param_1, (long)( aiStack_264[uVar13 * 0x2d + 1] + aiStack_264[(long)aiStack_264[uVar13 * 0x2d + 2] + 4 + uVar13 * 0x2d] ));
               lVar10 = (long)aiStack_264[uVar13 * 0x2d + 2] + uVar13 * 0x2d;
               iVar3 = aiStack_264[lVar10 + 4];
               iVar4 = aiStack_204[lVar10];
               goto LAB_00101ed8;
            }

            if (1 < iVar3) {
               iVar3 = utext_getNativeIndex_76_godot(param_1);
               if (iVar3 < param_3) {
                  uVar11 = ( ulong )(( uVar15 + 1 ) % 3);
                  do {
                     iVar3 = PossibleWord::candidates(local_268 + uVar11 * 0xb4, param_1, *(DictionaryMatcher**)( this + 0x328 ), param_3);
                     if (iVar3 < 1) {
                        iVar3 = aiStack_264[uVar13 * 0x2d + 3];
                     }
 else {
                        aiStack_264[uVar13 * 0x2d + 2] = aiStack_264[uVar13 * 0x2d + 3];
                        iVar3 = utext_getNativeIndex_76_godot(param_1);
                        if (param_3 <= iVar3) goto LAB_00102148;
                        while (true) {
                           iVar3 = PossibleWord::candidates(local_268 + ( ulong )(( uVar15 + 2 ) % 3) * 0xb4, param_1, *(DictionaryMatcher**)( this + 0x328 ), param_3);
                           if (iVar3 != 0) {
                              lVar10 = (long)aiStack_264[uVar13 * 0x2d + 3];
                              aiStack_264[uVar13 * 0x2d + 2] = aiStack_264[uVar13 * 0x2d + 3];
                              goto LAB_00101e8e;
                           }

                           if (aiStack_264[uVar11 * 0x2d + 3] < 1) break;
                           iVar3 = aiStack_264[uVar11 * 0x2d + 3] + -1;
                           aiStack_264[uVar11 * 0x2d + 3] = iVar3;
                           utext_setNativeIndex_76_godot(param_1, (long)( aiStack_264[(long)iVar3 + 4 + uVar11 * 0x2d] + aiStack_264[uVar11 * 0x2d + 1] ));
                        }
;
                        iVar3 = aiStack_264[uVar13 * 0x2d + 3];
                     }

                     if (iVar3 < 1) goto LAB_00102148;
                     aiStack_264[uVar13 * 0x2d + 3] = iVar3 + -1;
                     utext_setNativeIndex_76_godot(param_1, (long)( aiStack_264[(long)( iVar3 + -1 ) + 4 + uVar13 * 0x2d] + aiStack_264[uVar13 * 0x2d + 1] ));
                  }
 while ( true );
               }

               lVar10 = (long)aiStack_264[uVar13 * 0x2d + 2];
               goto LAB_00101e8e;
            }

            iVar4 = utext_getNativeIndex_76_godot(param_1);
            iVar3 = 0;
            if (iVar4 < param_3) {
               iVar3 = 0;
               iVar4 = PossibleWord::candidates(pPVar8, param_1, *(DictionaryMatcher**)( this + 0x328 ), param_3);
               local_2a0 = iVar2;
               if (iVar4 < 1) goto LAB_00101f4f;
               goto LAB_00101d65;
            }

            goto LAB_00101da3;
         }

      }

      LAB_00101dcd:iVar12 = *(int*)( param_4 + 8 ) + -1;
      if (iVar12 < 0) {
         if (0 < param_3) goto LAB_00101df1;
      }
 else {
         if (*(int*)( *(long*)( param_4 + 0x18 ) + (long)iVar12 * 4 ) < param_3) goto LAB_00101df1;
         *(int*)( param_4 + 8 ) = iVar12;
      }

      uVar15 = uVar15 - 1;
   }

   LAB_00101df1:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar15;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00102148:lVar10 = (long)aiStack_264[uVar13 * 0x2d + 2];
   LAB_00101e8e:utext_setNativeIndex_76_godot(param_1, (long)( aiStack_264[lVar10 + 4 + uVar13 * 0x2d] + aiStack_264[uVar13 * 0x2d + 1] ));
   lVar10 = (long)aiStack_264[uVar13 * 0x2d + 2] + uVar13 * 0x2d;
   iVar3 = aiStack_264[lVar10 + 4];
   iVar4 = aiStack_204[lVar10];
   LAB_00101ed8:uVar15 = uVar15 + 1;
   iVar5 = utext_getNativeIndex_76_godot(param_1);
   if (( iVar4 < 3 ) && ( iVar5 < param_3 )) {
      iVar4 = PossibleWord::candidates(local_268 + ( (ulong)uVar15 % 3 ) * 0xb4, param_1, *(DictionaryMatcher**)( this + 0x328 ), param_3);
      local_2a0 = iVar2 + iVar3;
      if (( iVar4 < 1 ) && ( ( iVar3 == 0 || ( aiStack_264[( (ulong)uVar15 % 3 ) * 0x2d] < 3 ) ) )) {
         LAB_00101f4f:iVar4 = 0;
         iVar5 = param_3 - local_2a0;
         do {
            do {
               iVar6 = utext_getNativeIndex_76_godot(param_1);
               utext_next32_76_godot(param_1);
               iVar7 = utext_getNativeIndex_76_godot(param_1);
               iVar4 = iVar4 + ( iVar7 - iVar6 );
               iVar5 = iVar5 - ( iVar7 - iVar6 );
               if (iVar5 < 1) goto LAB_00102041;
               utext_current32_76_godot(param_1);
               cVar1 = icu_76_godot::UnicodeSet::contains(iVar12 + 0xd0);
            }
 while ( ( cVar1 == '\0' ) || ( cVar1 = icu_76_godot::UnicodeSet::contains(iVar12 + 0x198) ),cVar1 == '\0' );
            iVar6 = PossibleWord::candidates(local_268 + ( ulong )(( uVar15 + 1 ) % 3) * 0xb4, param_1, *(DictionaryMatcher**)( this + 0x328 ), param_3);
            utext_setNativeIndex_76_godot(param_1, (long)( iVar4 + local_2a0 ));
         }
 while ( iVar6 < 1 );
         LAB_00102041:if (iVar3 < 1) {
            uVar15 = uVar15 + 1;
         }

         iVar3 = iVar3 + iVar4;
      }
 else {
         LAB_00101d65:utext_setNativeIndex_76_godot(param_1, (long)local_2a0);
      }

   }

   LAB_00101da3:while (iVar4 = utext_getNativeIndex_76_godot(param_1),iVar4 < param_3) {
      utext_current32_76_godot(param_1);
      cVar1 = icu_76_godot::UnicodeSet::contains(iVar12 + 0x260);
      if (cVar1 == '\0') break;
      utext_next32_76_godot(param_1);
      iVar5 = utext_getNativeIndex_76_godot(param_1);
      iVar3 = iVar3 + ( iVar5 - iVar4 );
   }
;
   if (0 < iVar3) {
      iVar4 = *(int*)( param_4 + 8 );
      uVar14 = iVar4 + 1;
      if (( (int)uVar14 < 0 ) || ( *(int*)( param_4 + 0xc ) < (int)uVar14 )) {
         cVar1 = icu_76_godot::UVector32::expandCapacity((int)param_4, (UErrorCode*)(ulong)uVar14);
         if (cVar1 == '\0') goto LAB_00101db6;
         iVar4 = *(int*)( param_4 + 8 );
      }

      *(int*)( *(long*)( param_4 + 0x18 ) + (long)iVar4 * 4 ) = iVar3 + iVar2;
      *(int*)( param_4 + 8 ) = *(int*)( param_4 + 8 ) + 1;
   }

   LAB_00101db6:if (0 < *param_7) goto LAB_00101dcd;
   goto LAB_00101cc0;
}
/* icu_76_godot::DictionaryBreakEngine::setCharacters(icu_76_godot::UnicodeSet const&) */void icu_76_godot::DictionaryBreakEngine::setCharacters(DictionaryBreakEngine *this, UnicodeSet *param_1) {
   icu_76_godot::UnicodeSet::operator =((UnicodeSet*)( this + 8 ), param_1);
   icu_76_godot::UnicodeSet::compact();
   return;
}
/* icu_76_godot::ThaiBreakEngine::ThaiBreakEngine(icu_76_godot::DictionaryMatcher*, UErrorCode&) */void icu_76_godot::ThaiBreakEngine::ThaiBreakEngine(ThaiBreakEngine *this, DictionaryMatcher *param_1, UErrorCode *param_2) {
   UnicodeSet *this_00;
   UnicodeSet *this_01;
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   code *local_148;
   undefined2 local_140;
   UnicodeSet local_108[200];
   long local_40;
   this_00 = (UnicodeSet*)( this + 0xd0 );
   this_01 = (UnicodeSet*)( this + 0x328 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   icu_76_godot::LanguageBreakEngine::LanguageBreakEngine((LanguageBreakEngine*)this);
   *(undefined**)this = &DAT_00104b90;
   icu_76_godot::UnicodeSet::UnicodeSet((UnicodeSet*)( this + 8 ));
   *(undefined***)this = &PTR__ThaiBreakEngine_00104bd8;
   icu_76_godot::UnicodeSet::UnicodeSet(this_00);
   icu_76_godot::UnicodeSet::UnicodeSet((UnicodeSet*)( this + 0x198 ));
   icu_76_godot::UnicodeSet::UnicodeSet((UnicodeSet*)( this + 0x260 ));
   icu_76_godot::UnicodeSet::UnicodeSet(this_01);
   local_148 = icu_76_godot::UnicodeSet::UnicodeSet;
   local_140 = 2;
   *(DictionaryMatcher**)( this + 0x3f0 ) = param_1;
   lVar1 = 0;
   do {
      lVar1 = lVar1 + 1;
   }
 while ( *(short*)( &_LC1 + lVar1 * 2 ) != 0 );
   icu_76_godot::UnicodeString::doAppend((UnicodeString*)&local_148);
   icu_76_godot::UnicodeSet::UnicodeSet(local_108, (UnicodeString*)&local_148, param_2);
   icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)&local_148);
   if (*(int*)param_2 < 1) {
      icu_76_godot::UnicodeSet::operator =((UnicodeSet*)( this + 8 ), local_108);
      icu_76_godot::UnicodeSet::compact();
   }

   local_148 = icu_76_godot::UnicodeSet::UnicodeSet;
   lVar1 = 0;
   local_140 = 2;
   do {
      lVar1 = lVar1 + 1;
   }
 while ( *(short*)( &_LC2 + lVar1 * 2 ) != 0 );
   icu_76_godot::UnicodeString::doAppend((UnicodeString*)&local_148);
   icu_76_godot::UnicodeSet::applyPattern((UnicodeString*)this_01, (UErrorCode*)&local_148);
   icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)&local_148);
   icu_76_godot::UnicodeSet::add((int)this_01);
   icu_76_godot::UnicodeSet::operator =(this_00, local_108);
   icu_76_godot::UnicodeSet::remove((int)this_00);
   icu_76_godot::UnicodeSet::remove((int)this_00, 0xe40);
   iVar2 = (int)(UnicodeSet*)( this + 0x198 );
   icu_76_godot::UnicodeSet::add(iVar2, 0xe01);
   icu_76_godot::UnicodeSet::add(iVar2, 0xe40);
   iVar2 = (int)(UnicodeSet*)( this + 0x260 );
   icu_76_godot::UnicodeSet::add(iVar2);
   icu_76_godot::UnicodeSet::add(iVar2);
   for (int i = 0; i < 4; i++) {
      icu_76_godot::UnicodeSet::compact();
   }

   icu_76_godot::UnicodeSet::~UnicodeSet(local_108);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::LaoBreakEngine::LaoBreakEngine(icu_76_godot::DictionaryMatcher*, UErrorCode&) */void icu_76_godot::LaoBreakEngine::LaoBreakEngine(LaoBreakEngine *this, DictionaryMatcher *param_1, UErrorCode *param_2) {
   UnicodeSet *this_00;
   UnicodeSet *this_01;
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   code *local_148;
   undefined2 local_140;
   UnicodeSet local_108[200];
   long local_40;
   this_00 = (UnicodeSet*)( this + 0xd0 );
   this_01 = (UnicodeSet*)( this + 0x260 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   icu_76_godot::LanguageBreakEngine::LanguageBreakEngine((LanguageBreakEngine*)this);
   *(undefined**)this = &DAT_00104b90;
   icu_76_godot::UnicodeSet::UnicodeSet((UnicodeSet*)( this + 8 ));
   *(undefined***)this = &PTR__LaoBreakEngine_00104c20;
   icu_76_godot::UnicodeSet::UnicodeSet(this_00);
   icu_76_godot::UnicodeSet::UnicodeSet((UnicodeSet*)( this + 0x198 ));
   icu_76_godot::UnicodeSet::UnicodeSet(this_01);
   lVar1 = 0;
   *(DictionaryMatcher**)( this + 0x328 ) = param_1;
   local_148 = icu_76_godot::UnicodeSet::UnicodeSet;
   local_140 = 2;
   do {
      lVar1 = lVar1 + 1;
   }
 while ( *(short*)( &_LC3 + lVar1 * 2 ) != 0 );
   icu_76_godot::UnicodeString::doAppend((UnicodeString*)&local_148);
   icu_76_godot::UnicodeSet::UnicodeSet(local_108, (UnicodeString*)&local_148, param_2);
   icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)&local_148);
   if (*(int*)param_2 < 1) {
      icu_76_godot::UnicodeSet::operator =((UnicodeSet*)( this + 8 ), local_108);
      icu_76_godot::UnicodeSet::compact();
   }

   local_148 = icu_76_godot::UnicodeSet::UnicodeSet;
   lVar1 = 0;
   local_140 = 2;
   do {
      lVar1 = lVar1 + 1;
   }
 while ( *(short*)( &_LC4 + lVar1 * 2 ) != 0 );
   icu_76_godot::UnicodeString::doAppend((UnicodeString*)&local_148);
   icu_76_godot::UnicodeSet::applyPattern((UnicodeString*)this_01, (UErrorCode*)&local_148);
   icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)&local_148);
   icu_76_godot::UnicodeSet::add((int)this_01);
   icu_76_godot::UnicodeSet::operator =(this_00, local_108);
   icu_76_godot::UnicodeSet::remove((int)this_00, 0xec0);
   iVar2 = (int)(UnicodeSet*)( this + 0x198 );
   icu_76_godot::UnicodeSet::add(iVar2, 0xe81);
   icu_76_godot::UnicodeSet::add(iVar2, 0xedc);
   icu_76_godot::UnicodeSet::add(iVar2, 0xec0);
   for (int i = 0; i < 3; i++) {
      icu_76_godot::UnicodeSet::compact();
   }

   icu_76_godot::UnicodeSet::~UnicodeSet(local_108);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::BurmeseBreakEngine::BurmeseBreakEngine(icu_76_godot::DictionaryMatcher*,
   UErrorCode&) */void icu_76_godot::BurmeseBreakEngine::BurmeseBreakEngine(BurmeseBreakEngine *this, DictionaryMatcher *param_1, UErrorCode *param_2) {
   UnicodeSet *this_00;
   UnicodeSet *this_01;
   long lVar1;
   long in_FS_OFFSET;
   code *local_88;
   undefined2 local_80;
   long local_40;
   this_00 = (UnicodeSet*)( this + 0xd0 );
   this_01 = (UnicodeSet*)( this + 0x260 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   icu_76_godot::LanguageBreakEngine::LanguageBreakEngine((LanguageBreakEngine*)this);
   *(undefined**)this = &DAT_00104b90;
   icu_76_godot::UnicodeSet::UnicodeSet((UnicodeSet*)( this + 8 ));
   *(undefined***)this = &PTR__BurmeseBreakEngine_00104c68;
   icu_76_godot::UnicodeSet::UnicodeSet(this_00);
   icu_76_godot::UnicodeSet::UnicodeSet((UnicodeSet*)( this + 0x198 ));
   icu_76_godot::UnicodeSet::UnicodeSet(this_01);
   *(DictionaryMatcher**)( this + 0x328 ) = param_1;
   icu_76_godot::UnicodeSet::add((int)(UnicodeSet*)( this + 0x198 ), 0x1000);
   lVar1 = 0;
   local_88 = icu_76_godot::UnicodeSet::UnicodeSet;
   local_80 = 2;
   do {
      lVar1 = lVar1 + 1;
   }
 while ( *(short*)( &_LC5 + lVar1 * 2 ) != 0 );
   icu_76_godot::UnicodeString::doAppend((UnicodeString*)&local_88);
   icu_76_godot::UnicodeSet::applyPattern((UnicodeString*)this_00, (UErrorCode*)&local_88);
   icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)&local_88);
   lVar1 = 0;
   local_88 = icu_76_godot::UnicodeSet::UnicodeSet;
   local_80 = 2;
   do {
      lVar1 = lVar1 + 1;
   }
 while ( *(short*)( &_LC6 + lVar1 * 2 ) != 0 );
   icu_76_godot::UnicodeString::doAppend((UnicodeString*)&local_88);
   icu_76_godot::UnicodeSet::applyPattern((UnicodeString*)this_01, (UErrorCode*)&local_88);
   icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)&local_88);
   icu_76_godot::UnicodeSet::add((int)this_01);
   if (*(int*)param_2 < 1) {
      icu_76_godot::UnicodeSet::operator =((UnicodeSet*)( this + 8 ), this_00);
      icu_76_godot::UnicodeSet::compact();
   }

   icu_76_godot::UnicodeSet::compact();
   icu_76_godot::UnicodeSet::compact();
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      icu_76_godot::UnicodeSet::compact();
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::KhmerBreakEngine::KhmerBreakEngine(icu_76_godot::DictionaryMatcher*, UErrorCode&)
    */void icu_76_godot::KhmerBreakEngine::KhmerBreakEngine(KhmerBreakEngine *this, DictionaryMatcher *param_1, UErrorCode *param_2) {
   UnicodeSet *this_00;
   UnicodeSet *this_01;
   long lVar1;
   long in_FS_OFFSET;
   code *local_148;
   undefined2 local_140;
   UnicodeSet local_108[200];
   long local_40;
   this_00 = (UnicodeSet*)( this + 0xd0 );
   this_01 = (UnicodeSet*)( this + 0x260 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   icu_76_godot::LanguageBreakEngine::LanguageBreakEngine((LanguageBreakEngine*)this);
   *(undefined**)this = &DAT_00104b90;
   icu_76_godot::UnicodeSet::UnicodeSet((UnicodeSet*)( this + 8 ));
   *(undefined***)this = &PTR__KhmerBreakEngine_00104cb0;
   icu_76_godot::UnicodeSet::UnicodeSet(this_00);
   icu_76_godot::UnicodeSet::UnicodeSet((UnicodeSet*)( this + 0x198 ));
   icu_76_godot::UnicodeSet::UnicodeSet(this_01);
   lVar1 = 0;
   *(DictionaryMatcher**)( this + 0x328 ) = param_1;
   local_148 = icu_76_godot::UnicodeSet::UnicodeSet;
   local_140 = 2;
   do {
      lVar1 = lVar1 + 1;
   }
 while ( *(short*)( &_LC7 + lVar1 * 2 ) != 0 );
   icu_76_godot::UnicodeString::doAppend((UnicodeString*)&local_148);
   icu_76_godot::UnicodeSet::UnicodeSet(local_108, (UnicodeString*)&local_148, param_2);
   icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)&local_148);
   if (*(int*)param_2 < 1) {
      icu_76_godot::UnicodeSet::operator =((UnicodeSet*)( this + 8 ), local_108);
      icu_76_godot::UnicodeSet::compact();
   }

   local_148 = icu_76_godot::UnicodeSet::UnicodeSet;
   lVar1 = 0;
   local_140 = 2;
   do {
      lVar1 = lVar1 + 1;
   }
 while ( *(short*)( &_LC8 + lVar1 * 2 ) != 0 );
   icu_76_godot::UnicodeString::doAppend((UnicodeString*)&local_148);
   icu_76_godot::UnicodeSet::applyPattern((UnicodeString*)this_01, (UErrorCode*)&local_148);
   icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)&local_148);
   icu_76_godot::UnicodeSet::add((int)this_01);
   icu_76_godot::UnicodeSet::operator =(this_00, local_108);
   icu_76_godot::UnicodeSet::add((int)(UnicodeSet*)( this + 0x198 ), 0x1780);
   icu_76_godot::UnicodeSet::remove((int)this_00);
   for (int i = 0; i < 3; i++) {
      icu_76_godot::UnicodeSet::compact();
   }

   icu_76_godot::UnicodeSet::~UnicodeSet(local_108);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::CjkBreakEngine::divideUpDictionaryRange(UText*, int, int, icu_76_godot::UVector32&,
   signed char, UErrorCode&) const [clone .part.0] */int icu_76_godot::CjkBreakEngine::divideUpDictionaryRange(CjkBreakEngine *this, long param_1, int param_2, int param_3, long param_4, char param_6, UErrorCode *param_7) {
   bool bVar1;
   int iVar2;
   char cVar3;
   ushort uVar4;
   undefined4 uVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   int iVar11;
   long lVar12;
   UVector32 *this_00;
   long lVar13;
   long lVar14;
   int iVar15;
   uint uVar16;
   ulong uVar17;
   UnicodeString *pUVar18;
   int iVar19;
   int iVar20;
   undefined8 *puVar21;
   int iVar22;
   int iVar23;
   int iVar24;
   long in_FS_OFFSET;
   byte bVar25;
   UVector32 *local_2f8;
   UVector32 *local_2d8;
   UVector32 *local_2a8;
   UVector32 *local_290;
   UVector32 *local_288;
   UVector32 local_278[8];
   int local_270;
   int local_26c;
   long local_260;
   UVector32 local_258[8];
   int local_250;
   int local_24c;
   long local_240;
   UVector32 local_238[8];
   int local_230;
   long local_220;
   UVector32 local_218[8];
   int local_210;
   int *local_200;
   UVector32 local_1f8[8];
   int local_1f0;
   int local_1ec;
   long local_1e0;
   undefined8 local_1d8;
   undefined4 uStack_1d0;
   undefined4 local_1cc;
   undefined8 local_150;
   code *local_148;
   short local_140;
   int local_13c;
   code *local_108;
   short local_100;
   int local_fc;
   code *local_c8;
   ushort local_c0;
   code *local_88;
   undefined2 local_80;
   long local_40;
   bVar25 = 0;
   uVar17 = (ulong)param_2;
   lVar13 = (long)param_3;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_140 = 2;
   local_148 = icu_76_godot::UnicodeSet::UnicodeSet;
   if (( ( ( ( *(byte*)( param_1 + 8 ) & 4 ) == 0 ) || ( lVar12 = *(long*)( param_1 + 0x20 ) ),(long)uVar17 < lVar12 ) ) || ( *(long*)( param_1 + 0x10 ) < lVar13 )) {
      utext_setNativeIndex_76_godot(param_1);
      lVar12 = utext_nativeLength_76_godot(param_1);
      iVar15 = param_3;
      if (lVar12 < lVar13) {
         iVar15 = utext_nativeLength_76_godot(param_1);
      }

      local_2a8 = (UVector32*)icu_76_godot::UMemory::operator_new((UMemory*)0x20, uVar17);
      if (local_2a8 == (UVector32*)0x0) {
         LAB_001034f1:if (*(int*)param_7 < 1) {
            *(undefined4*)param_7 = 7;
         }

      }
 else {
         icu_76_godot::UVector32::UVector32(local_2a8, param_7);
         if (*(int*)param_7 < 1) {
            LAB_00102ba6:while (true) {
               lVar12 = utext_getNativeIndex_76_godot(param_1);
               if (iVar15 <= lVar12) break;
               uVar5 = utext_getNativeIndex_76_godot(param_1);
               utext_next32_76_godot(param_1);
               icu_76_godot::UnicodeString::append((int)&local_148);
               iVar6 = *(int*)( local_2a8 + 8 );
               joined_r0x00102c13:iVar7 = local_13c;
               if (-1 < local_140) {
                  iVar7 = (int)( local_140 >> 5 );
               }

               if (iVar6 < iVar7) {
                  uVar16 = iVar6 + 1;
                  if (( (int)uVar16 < 0 ) || ( *(int*)( local_2a8 + 0xc ) < (int)uVar16 )) goto LAB_00102c2d;
                  goto LAB_00102c40;
               }

            }
;
            iVar6 = *(int*)( local_2a8 + 8 );
            uVar16 = iVar6 + 1;
            if (( (int)uVar16 < 0 ) || ( *(int*)( local_2a8 + 0xc ) < (int)uVar16 )) {
               cVar3 = icu_76_godot::UVector32::expandCapacity((int)local_2a8, (UErrorCode*)(ulong)uVar16);
               if (cVar3 == '\0') goto LAB_00102ca7;
               iVar6 = *(int*)( local_2a8 + 8 );
            }

            *(int*)( *(long*)( local_2a8 + 0x18 ) + (long)iVar6 * 4 ) = iVar15;
            *(int*)( local_2a8 + 8 ) = *(int*)( local_2a8 + 8 ) + 1;
            goto LAB_00102ca7;
         }

         icu_76_godot::UVector32::~UVector32(local_2a8);
         if (*(int*)param_7 < 1) {
            local_2a8 = (UVector32*)0x0;
            goto LAB_00102ba6;
         }

      }

      LAB_001034fc:iVar15 = 0;
      goto LAB_001034ff;
   }

   local_1d8 = *(long*)( param_1 + 0x30 ) + ( uVar17 - lVar12 ) * 2;
   icu_76_godot::UnicodeString::setTo(&local_148, 0, &local_1d8, param_3 - param_2);
   local_2a8 = (UVector32*)0x0;
   LAB_00102ca7:pUVar18 = (UnicodeString*)&local_148;
   cVar3 = ( **(code**)( **(long**)( this + 0x330 ) + 0x58 ) )(*(long**)( this + 0x330 ), (UnicodeString*)&local_148, param_7);
   iVar15 = (int)(UnicodeString*)&local_148;
   this_00 = local_2a8;
   if (cVar3 == '\0') {
      local_108 = icu_76_godot::UnicodeSet::UnicodeSet;
      local_100 = 2;
      this_00 = (UVector32*)icu_76_godot::UMemory::operator_new((UMemory*)0x20, (ulong)pUVar18);
      if (this_00 == (UVector32*)0x0) {
         if (*(int*)param_7 < 1) {
            *(undefined4*)param_7 = 7;
         }

      }
 else {
         icu_76_godot::UVector32::UVector32(this_00, param_7);
         if (*(int*)param_7 < 1) {
            local_c8 = icu_76_godot::UnicodeSet::UnicodeSet;
            local_88 = icu_76_godot::UnicodeSet::UnicodeSet;
            local_c0 = 2;
            local_80 = 2;
            iVar6 = 0;
            iVar7 = iVar6;
            if (local_140 < 0) goto LAB_00102f34;
            LAB_00102d88:lVar12 = (long)( local_140 >> 5 );
            iVar7 = iVar6;
            if (iVar6<local_140> > 5) {
               do {
                  uVar4 = local_c0 & 0x1f;
                  if (( local_c0 & 1 ) != 0) {
                     uVar4 = 2;
                  }

                  local_c0 = uVar4;
                  icu_76_godot::UnicodeString::char32At(iVar15);
                  iVar6 = iVar7;
                  do {
                     icu_76_godot::UnicodeString::append((int)(UnicodeString*)&local_c8);
                     iVar6 = icu_76_godot::UnicodeString::moveIndex32(iVar15, iVar6);
                     iVar11 = local_13c;
                     if (-1 < local_140) {
                        iVar11 = (int)( local_140 >> 5 );
                     }

                     if (iVar6 == iVar11) break;
                     uVar5 = icu_76_godot::UnicodeString::char32At(iVar15);
                     cVar3 = ( **(code**)( **(long**)( this + 0x330 ) + 0x78 ) )(*(long**)( this + 0x330 ), uVar5);
                  }
 while ( cVar3 == '\0' );
                  ( **(code**)( **(long**)( this + 0x330 ) + 0x18 ) )(*(long**)( this + 0x330 ), (UnicodeString*)&local_c8, (UnicodeString*)&local_88, param_7);
                  icu_76_godot::UnicodeString::doAppend((UnicodeString*)&local_108, (int)(UnicodeString*)&local_88, 0);
                  iVar11 = param_2 + iVar7;
                  if (( ( ( local_2a8 != (UVector32*)0x0 ) && ( iVar11 = 0 ),-1 < iVar7 ) ) && ( 0 < *(int*)( local_2a8 + 8 ) )) {
                     iVar11 = *(int*)( *(long*)( local_2a8 + 0x18 ) + (long)iVar7 * 4 );
                  }

                  do {
                     iVar7 = *(int*)( this_00 + 8 );
                     iVar2 = local_fc;
                     if (-1 < local_100) {
                        iVar2 = (int)( local_100 >> 5 );
                     }

                     if (iVar2 <= iVar7) break;
                     uVar16 = iVar7 + 1;
                     if (( (int)uVar16 < 0 ) || ( *(int*)( this_00 + 0xc ) < (int)uVar16 )) {
                        cVar3 = icu_76_godot::UVector32::expandCapacity((int)this_00, (UErrorCode*)(ulong)uVar16);
                        if (cVar3 != '\0') {
                           iVar7 = *(int*)( this_00 + 8 );
                           goto LAB_0010353c;
                        }

                     }
 else {
                        LAB_0010353c:*(int*)( *(long*)( this_00 + 0x18 ) + (long)iVar7 * 4 ) = iVar11;
                        *(int*)( this_00 + 8 ) = *(int*)( this_00 + 8 ) + 1;
                     }

                  }
 while ( *(int*)param_7 < 1 );
                  iVar7 = iVar6;
                  if (-1 < local_140) goto LAB_00102d88;
                  LAB_00102f34:lVar12 = (long)local_13c;
                  if (local_13c <= iVar7) break;
               }
 while ( true );
            }

            iVar6 = param_2 + (int)lVar12;
            if (( local_2a8 != (UVector32*)0x0 ) && ( ( -1 < local_140 || ( iVar6 = -1 < local_13c ) ) )) {
               iVar6 = 0;
               if (( 0 < *(int*)( local_2a8 + 8 ) ) && ( iVar6 = 0 ),(int)lVar12 < *(int*)( local_2a8 + 8 )) {
                  iVar6 = *(int*)( *(long*)( local_2a8 + 0x18 ) + lVar12 * 4 );
               }

            }

            iVar7 = *(int*)( this_00 + 8 );
            uVar16 = iVar7 + 1;
            if (( (int)uVar16 < 0 ) || ( *(int*)( this_00 + 0xc ) < (int)uVar16 )) {
               cVar3 = icu_76_godot::UVector32::expandCapacity((int)this_00, (UErrorCode*)(ulong)uVar16);
               if (cVar3 != '\0') {
                  iVar7 = *(int*)( this_00 + 8 );
                  goto LAB_00103ccf;
               }

            }
 else {
               LAB_00103ccf:*(int*)( *(long*)( this_00 + 0x18 ) + (long)iVar7 * 4 ) = iVar6;
               *(int*)( this_00 + 8 ) = *(int*)( this_00 + 8 ) + 1;
            }

            if (local_2a8 != (UVector32*)0x0) {
               ( **(code**)( *(long*)local_2a8 + 8 ) )(local_2a8);
            }

            icu_76_godot::UnicodeString::operator =((UnicodeString*)&local_148, (UnicodeString*)&local_108);
            icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)&local_88);
            icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)&local_c8);
            icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)&local_108);
            goto LAB_00102fdc;
         }

         icu_76_godot::UVector32::~UVector32(this_00);
      }

      iVar15 = 0;
      icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)&local_108);
   }
 else {
      LAB_00102fdc:uVar17 = 0;
      iVar6 = icu_76_godot::UnicodeString::countChar32(iVar15, 0);
      iVar7 = local_13c;
      if (-1 < local_140) {
         iVar7 = (int)( local_140 >> 5 );
      }

      local_2a8 = this_00;
      if (iVar6 != iVar7) {
         if (this_00 != (UVector32*)0x0) goto LAB_0010301b;
         local_2a8 = (UVector32*)icu_76_godot::UMemory::operator_new((UMemory*)0x20, uVar17);
         if (local_2a8 == (UVector32*)0x0) goto LAB_001034f1;
         icu_76_godot::UVector32::UVector32(local_2a8, param_7);
         if (*(int*)param_7 < 1) {
            LAB_0010301b:iVar7 = 0;
            do {
               if (this_00 == (UVector32*)0x0) {
                  iVar11 = *(int*)( local_2a8 + 8 );
                  uVar16 = iVar11 + 1;
                  if (( (int)uVar16 < 0 ) || ( *(int*)( local_2a8 + 0xc ) < (int)uVar16 )) {
                     cVar3 = icu_76_godot::UVector32::expandCapacity((int)local_2a8, (UErrorCode*)(ulong)uVar16);
                     if (cVar3 == '\0') goto LAB_00103087;
                     iVar11 = *(int*)( local_2a8 + 8 );
                  }

                  *(int*)( *(long*)( local_2a8 + 0x18 ) + (long)iVar11 * 4 ) = param_2 + iVar7;
                  *(int*)( local_2a8 + 8 ) = *(int*)( local_2a8 + 8 ) + 1;
               }
 else {
                  iVar11 = 0;
                  if (( ( -1 < iVar7 ) && ( iVar11 = 0 ),0 < *(int*)( local_2a8 + 8 ) )) {
                     iVar11 = *(int*)( *(long*)( local_2a8 + 0x18 ) + (long)iVar7 * 4 );
                  }

                  icu_76_godot::UVector32::setElementAt((int)local_2a8, iVar11);
               }

               LAB_00103087:iVar11 = local_13c;
               if (-1 < local_140) {
                  iVar11 = (int)( local_140 >> 5 );
               }

               if (iVar7 == iVar11) goto LAB_001030a9;
               iVar7 = icu_76_godot::UnicodeString::moveIndex32(iVar15, iVar7);
            }
 while ( true );
         }

         icu_76_godot::UVector32::~UVector32(local_2a8);
         if (*(int*)param_7 < 1) {
            local_2a8 = (UVector32*)0x0;
            goto LAB_0010301b;
         }

         goto LAB_001034fc;
      }

      LAB_001030a9:iVar7 = iVar6 + 1;
      icu_76_godot::UVector32::UVector32(local_278, iVar7, param_7);
      uVar16 = local_270 + 1;
      iVar11 = (int)local_278;
      if (( (int)uVar16 < 0 ) || ( local_26c < (int)uVar16 )) {
         cVar3 = icu_76_godot::UVector32::expandCapacity(iVar11, (UErrorCode*)(ulong)uVar16);
         if (cVar3 != '\0') goto LAB_001038a7;
      }
 else {
         LAB_001038a7:*(undefined4*)( local_260 + (long)local_270 * 4 ) = 0;
         local_270 = local_270 + 1;
      }

      iVar22 = 1;
      iVar2 = (int)this;
      if (iVar6 < 1) {
         icu_76_godot::UVector32::UVector32(local_258, iVar7, param_7);
         if (iVar6 == 0) goto LAB_00103190;
         icu_76_godot::UVector32::UVector32(local_238, iVar6, param_7);
         icu_76_godot::UVector32::setSize((int)local_238);
         icu_76_godot::UVector32::UVector32(local_218, iVar6, param_7);
         icu_76_godot::UVector32::setSize((int)local_218);
         local_1d8._4_4_ = 0;
         uStack_1d0 = 0;
         local_150 = 0;
         puVar21 = (undefined8*)&uStack_1d0;
         for (lVar12 = 0x11; lVar12 != 0; lVar12 = lVar12 + -1) {
            *puVar21 = 0;
            puVar21 = puVar21 + (ulong)bVar25 * -2 + 1;
         }

         local_1d8._0_4_ = 0x345ad82c;
         local_1cc = 0x90;
         utext_openUnicodeString_76_godot(&local_1d8, (UnicodeString*)&local_148, param_7);
         utext_close_76_godot(&local_1d8);
         icu_76_godot::UVector32::UVector32(local_1f8, iVar7, param_7);
         LAB_001039d1:if (param_6 != '\0') {
            LAB_001039d8:uVar16 = local_1f0 + 1;
            if (( ( -1 < (int)uVar16 ) && ( (int)uVar16 <= local_1ec ) ) || ( cVar3 = icu_76_godot::UVector32::expandCapacity((int)local_1f8, (UErrorCode*)(ulong)uVar16) ),cVar3 != '\0') {
               *(int*)( local_1e0 + (long)local_1f0 * 4 ) = iVar6;
               local_1f0 = local_1f0 + 1;
            }

            if (*(int*)param_7 < 1) {
               if (( ( iVar6 < 0 ) || ( local_250 < 1 ) ) || ( ( local_250 <= iVar6 || ( iVar6 = *(int*)( local_240 + (long)iVar6 * 4 ) ),iVar6 < 1 ) )) goto LAB_001036e5;
               iVar7 = 1;
               do {
                  local_2d8 = local_1f8;
                  iVar11 = icu_76_godot::UnicodeString::moveIndex32(iVar15, 0);
                  icu_76_godot::UnicodeString::moveIndex32(iVar15, 0);
                  icu_76_godot::UnicodeString::tempSubString((int)(UnicodeString*)&local_88, iVar15);
                  cVar3 = uhash_containsKey_76_godot(*(undefined8*)( this + 0x348 ));
                  if (cVar3 == '\0') {
                     icu_76_godot::UnicodeString::moveIndex32(iVar15, iVar11);
                     iVar11 = icu_76_godot::UnicodeString::char32At(iVar15);
                     if (( ( ( iVar11 - 0x30a1U < 0x5e ) && ( iVar11 != 0x30fb ) ) || ( iVar11 - 0xff66U < 0x3a ) ) && ( ( ( iVar11 = icu_76_godot::UnicodeString::char32At(iVar15) ),iVar11 - 0x30a1U < 0x5e && ( iVar11 != 0x30fb ) ) || ( iVar11 - 0xff66U < 0x3a ) )) goto LAB_00103e4c;
                     icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)&local_88);
                     uVar16 = local_1f0 + 1;
                     if (( ( -1 < (int)uVar16 ) && ( (int)uVar16 <= local_1ec ) ) || ( cVar3 = icu_76_godot::UVector32::expandCapacity((int)local_2d8, (UErrorCode*)(ulong)uVar16) ),cVar3 != '\0') {
                        *(int*)( local_1e0 + (long)local_1f0 * 4 ) = iVar6;
                        local_1f0 = local_1f0 + 1;
                     }

                     iVar7 = iVar7 + 1;
                  }
 else {
                     LAB_00103e4c:icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)&local_88);
                  }

               }
 while ( ( ( 0 < local_250 ) && ( iVar6 < local_250 ) ) && ( iVar6= *(int *)(local_240 + (long)iVar6 * 4),0 < iVar6 ) );
               goto LAB_00103a18;
            }

         }

         LAB_00103a11:iVar7 = 0;
      }
 else {
         do {
            while (true) {
               uVar16 = local_270 + 1;
               if (( (int)uVar16 < 0 ) || ( local_26c < (int)uVar16 )) break;
               LAB_00103154:iVar22 = iVar22 + 1;
               *(undefined4*)( local_260 + (long)local_270 * 4 ) = 0xffffffff;
               local_270 = local_270 + 1;
               if (iVar6 < iVar22) goto LAB_00103174;
            }
;
            cVar3 = icu_76_godot::UVector32::expandCapacity(iVar11, (UErrorCode*)(ulong)uVar16);
            if (cVar3 != '\0') goto LAB_00103154;
            iVar22 = iVar22 + 1;
         }
 while ( iVar22 <= iVar6 );
         LAB_00103174:icu_76_godot::UVector32::UVector32(local_258, iVar7, param_7);
         LAB_00103190:local_2f8 = local_258;
         iVar22 = 0;
         do {
            while (true) {
               uVar16 = local_250 + 1;
               iVar19 = (int)local_2f8;
               if (( (int)uVar16 < 0 ) || ( local_24c < (int)uVar16 )) break;
               LAB_001031d4:iVar22 = iVar22 + 1;
               *(undefined4*)( local_240 + (long)local_250 * 4 ) = 0xffffffff;
               local_250 = local_250 + 1;
               if (iVar6 < iVar22) goto LAB_001031f4;
            }
;
            cVar3 = icu_76_godot::UVector32::expandCapacity(iVar19, (UErrorCode*)(ulong)uVar16);
            if (cVar3 != '\0') goto LAB_001031d4;
            iVar22 = iVar22 + 1;
         }
 while ( iVar22 <= iVar6 );
         LAB_001031f4:icu_76_godot::UVector32::UVector32(local_238, iVar6, param_7);
         iVar22 = (int)local_238;
         icu_76_godot::UVector32::setSize(iVar22);
         icu_76_godot::UVector32::UVector32(local_218, iVar6, param_7);
         iVar20 = (int)local_218;
         icu_76_godot::UVector32::setSize(iVar20);
         local_1d8._4_4_ = 0;
         uStack_1d0 = 0;
         local_150 = 0;
         puVar21 = (undefined8*)&uStack_1d0;
         for (lVar12 = 0x11; lVar12 != 0; lVar12 = lVar12 + -1) {
            *puVar21 = 0;
            puVar21 = puVar21 + (ulong)bVar25 * -2 + 1;
         }

         local_1d8._0_4_ = 0x345ad82c;
         local_1cc = 0x90;
         utext_openUnicodeString_76_godot(&local_1d8, (UnicodeString*)&local_148, param_7);
         if (iVar6 == 0) {
            utext_close_76_godot(&local_1d8);
            icu_76_godot::UVector32::UVector32(local_1f8, 1, param_7);
            if (local_270 < 1) goto LAB_001039d1;
            LAB_001036a0:if (*(int*)( local_260 + (long)iVar6 * 4 ) == -1) {
               uVar16 = local_1f0 + 1;
               if (( ( -1 < (int)uVar16 ) && ( (int)uVar16 <= local_1ec ) ) || ( cVar3 = icu_76_godot::UVector32::expandCapacity((int)local_1f8, (UErrorCode*)(ulong)uVar16) ),cVar3 != '\0') {
                  *(int*)( local_1e0 + (long)local_1f0 * 4 ) = iVar6;
                  local_1f0 = local_1f0 + 1;
               }

               LAB_001036e5:iVar7 = 1;
               goto LAB_00103a18;
            }

            if (param_6 != '\0') goto LAB_001039d8;
            if (iVar6 == 0) goto LAB_00103a11;
         }
 else {
            lVar12 = 0;
            iVar8 = 0;
            iVar23 = 0;
            bVar1 = false;
            do {
               if (( ( local_270 < 1 ) || ( local_270 <= iVar23 ) ) || ( *(int*)( local_260 + lVar12 ) != -1 )) {
                  utext_setNativeIndex_76_godot(&local_1d8, (long)iVar8);
                  iVar9 = ( **(code**)( **(long**)( this + 0x328 ) + 0x10 ) )(*(long**)( this + 0x328 ), &local_1d8, 0x14, iVar6, 0, local_200, local_220, 0);
                  if (iVar9 == 0) {
                     icu_76_godot::UnicodeString::char32At(iVar15);
                     cVar3 = icu_76_godot::UnicodeSet::contains(iVar2 + 0xd0);
                     if (cVar3 == '\0') {
                        LAB_00103600:iVar9 = iVar9 + 1;
                        icu_76_godot::UVector32::setElementAt(iVar22, 0xff);
                        icu_76_godot::UVector32::setElementAt(iVar20, 1);
                        goto LAB_0010338c;
                     }

                  }
 else {
                     if (( local_210 < 1 ) || ( *local_200 != 1 )) {
                        icu_76_godot::UnicodeString::char32At(iVar15);
                        cVar3 = icu_76_godot::UnicodeSet::contains(iVar2 + 0xd0);
                        if (cVar3 == '\0') goto LAB_00103600;
                     }

                     LAB_0010338c:if (0 < iVar9) {
                        lVar14 = 0;
                        do {
                           while (true) {
                              uVar16 = 0;
                              if (( 0 < local_270 ) && ( iVar23 < local_270 )) {
                                 uVar16 = *(uint*)( local_260 + lVar12 );
                              }

                              if (( 0 < local_230 ) && ( (int)lVar14 < local_230 )) {
                                 uVar16 = uVar16 + *(int*)( local_220 + lVar14 * 4 );
                              }

                              iVar24 = iVar23;
                              if (( ( ( ( local_210 < 1 ) || ( local_210 <= (int)lVar14 ) ) || ( iVar24 = iVar23 + local_200[lVar14] ),-1 < iVar23 + local_200[lVar14] ) ) && ( ( 0 < local_270 && ( iVar24 < local_270 ) ) )) &&( uVar16 < *(uint*)( local_260 + (long)iVar24 * 4 ) );
                              lVar14 = lVar14 + 1;
                              if (lVar14 == iVar9) goto LAB_0010344e;
                           }
;
                           lVar14 = lVar14 + 1;
                           icu_76_godot::UVector32::setElementAt(iVar11, uVar16);
                           icu_76_godot::UVector32::setElementAt(iVar19, iVar23);
                        }
 while ( lVar14 != iVar9 );
                     }

                  }

                  LAB_0010344e:iVar9 = icu_76_godot::UnicodeString::char32At(iVar15);
                  if (( iVar9 - 0x30a1U < 0x5e && iVar9 != 0x30fb ) || ( iVar9 - 0xff66U < 0x3a )) {
                     if (!bVar1) {
                        iVar24 = 1;
                        iVar9 = icu_76_godot::UnicodeString::moveIndex32(iVar15, iVar8);
                        while (true) {
                           iVar10 = local_13c;
                           if (-1 < local_140) {
                              iVar10 = (int)( local_140 >> 5 );
                           }

                           if (iVar10 <= iVar9) break;
                           if (iVar24 == 0x14) goto LAB_001035d3;
                           iVar10 = icu_76_godot::UnicodeString::char32At(iVar15);
                           if (( ( 0x5d < iVar10 - 0x30a1U ) || ( iVar10 == 0x30fb ) ) && ( 0x39 < iVar10 - 0xff66U )) goto LAB_00103828;
                           iVar24 = iVar24 + 1;
                           iVar9 = icu_76_godot::UnicodeString::moveIndex32(iVar15, iVar9);
                        }
;
                        if (iVar24 == 0x14) goto LAB_001035d3;
                        LAB_00103828:if (0 < local_270) {
                           if (iVar23 < local_270) {
                              if (iVar24 < 9) {
                                 uVar16 = *(int*)( local_260 + lVar12 ) + *(int*)( getKatakanaCost(int):: );
                              }
 else {
                                 uVar16 = *(int*)( local_260 + lVar12 ) + 0x2000;
                              }

                           }
 else {
                              uVar16 = 0x2000;
                              if (iVar24 < 9) {
                                 uVar16 = *(uint*)( getKatakanaCost(int):: );
                              }

                           }

                           if (( iVar24 + iVar23 < local_270 ) && ( uVar16 < *(uint*)( local_260 + (long)( iVar24 + iVar23 ) * 4 ) )) {
                              icu_76_godot::UVector32::setElementAt(iVar11, uVar16);
                              icu_76_godot::UVector32::setElementAt(iVar19, iVar23);
                           }

                        }

                     }

                     LAB_001035d3:bVar1 = true;
                  }
 else {
                     bVar1 = false;
                  }

               }

               iVar23 = iVar23 + 1;
               iVar8 = icu_76_godot::UnicodeString::moveIndex32(iVar15, iVar8);
               lVar12 = lVar12 + 4;
            }
 while ( iVar6 != iVar23 );
            utext_close_76_godot(&local_1d8);
            icu_76_godot::UVector32::UVector32(local_1f8, iVar7, param_7);
            if (( 0 < local_270 ) && ( iVar6 < local_270 )) goto LAB_001036a0;
            if (param_6 != '\0') goto LAB_001039d8;
         }

         iVar7 = 0;
         do {
            uVar16 = local_1f0 + 1;
            if (( ( -1 < (int)uVar16 ) && ( (int)uVar16 <= local_1ec ) ) || ( cVar3 = icu_76_godot::UVector32::expandCapacity((int)local_1f8, (UErrorCode*)(ulong)uVar16) ),cVar3 != '\0') {
               *(int*)( local_1e0 + (long)local_1f0 * 4 ) = iVar6;
               local_1f0 = local_1f0 + 1;
            }

            iVar7 = iVar7 + 1;
         }
 while ( ( ( 0 < local_250 ) && ( iVar6 < local_250 ) ) && ( iVar6= *(int *)(local_240 + (long)iVar6 * 4),0 < iVar6 ) );
      }

      LAB_00103a18:local_288 = local_218;
      local_290 = local_238;
      local_2f8 = local_258;
      if (*(int*)( param_4 + 8 ) == 0) {
         LAB_00103c7c:uVar16 = local_1f0 + 1;
         if (( ( -1 < (int)uVar16 ) && ( (int)uVar16 <= local_1ec ) ) || ( cVar3 = icu_76_godot::UVector32::expandCapacity((int)local_1f8, (UErrorCode*)(ulong)uVar16) ),cVar3 != '\0') {
            *(undefined4*)( local_1e0 + (long)local_1f0 * 4 ) = 0;
            local_1f0 = local_1f0 + 1;
         }

      }
 else {
         iVar15 = 0;
         iVar6 = *(int*)( param_4 + 8 ) + -1;
         if (-1 < iVar6) {
            iVar15 = *(int*)( *(long*)( param_4 + 0x18 ) + (long)iVar6 * 4 );
         }

         if (iVar15 < param_2) goto LAB_00103c7c;
         iVar7 = iVar7 + -1;
      }

      if (iVar7 < 0) {
         iVar15 = 0;
      }
 else {
         lVar12 = (long)iVar7 << 2;
         iVar6 = -1;
         iVar15 = 0;
         do {
            if (( local_1f0 < 1 ) || ( local_1f0 <= iVar7 )) {
               if (local_2a8 != (UVector32*)0x0) {
                  lVar14 = 0;
                  iVar11 = 0;
                  if (0 < *(int*)( local_2a8 + 8 )) goto LAB_00103bd5;
                  goto LAB_00103ac7;
               }

               bVar1 = iVar6 < param_2;
               iVar6 = param_2;
               if (bVar1) goto LAB_00103c1c;
            }
 else {
               iVar22 = *(int*)( local_1e0 + lVar12 );
               iVar11 = param_2 + iVar22;
               if (local_2a8 != (UVector32*)0x0) {
                  iVar11 = 0;
                  if (( ( -1 < iVar22 ) && ( 0 < *(int*)( local_2a8 + 8 ) ) ) && ( iVar11 = 0 ),iVar22 < *(int*)( local_2a8 + 8 )) {
                     lVar14 = (long)iVar22 << 2;
                     LAB_00103bd5:iVar11 = *(int*)( *(long*)( local_2a8 + 0x18 ) + lVar14 );
                  }

               }

               LAB_00103ac7:bVar1 = iVar6 < iVar11;
               iVar6 = iVar11;
               if (bVar1) {
                  if (param_2 == iVar11) {
                     LAB_00103c1c:if (( param_6 != '\0' ) && ( 0 < iVar6 )) {
                        utext_char32At_76_godot(param_1, (long)( iVar6 + -1 ));
                        cVar3 = icu_76_godot::UnicodeSet::contains(iVar2 + 0x260);
                        if (cVar3 != '\0') goto LAB_00103ad4;
                     }

                  }
 else {
                     LAB_00103ad4:iVar11 = *(int*)( param_4 + 8 );
                     uVar16 = iVar11 + 1;
                     if (( (int)uVar16 < 0 ) || ( *(int*)( param_4 + 0xc ) < (int)uVar16 )) {
                        cVar3 = icu_76_godot::UVector32::expandCapacity((int)param_4, (UErrorCode*)(ulong)uVar16);
                        if (cVar3 != '\0') {
                           iVar11 = *(int*)( param_4 + 8 );
                           goto LAB_00103c6b;
                        }

                     }
 else {
                        LAB_00103c6b:*(int*)( *(long*)( param_4 + 0x18 ) + (long)iVar11 * 4 ) = iVar6;
                        *(int*)( param_4 + 8 ) = *(int*)( param_4 + 8 ) + 1;
                     }

                     iVar15 = iVar15 + 1;
                  }

               }

            }

            iVar7 = iVar7 + -1;
            lVar12 = lVar12 + -4;
         }
 while ( iVar7 != -1 );
      }

      utext_char32At_76_godot(param_1, lVar13);
      if (*(int*)( param_4 + 8 ) != 0) {
         iVar6 = *(int*)( param_4 + 8 ) + -1;
         if (iVar6 < 0) {
            if (param_3 == 0) {
               if (param_6 != '\0') goto LAB_00103fe8;
               goto LAB_00103cf8;
            }

         }
 else if (param_3 == *(int*)( *(long*)( param_4 + 0x18 ) + (long)iVar6 * 4 )) {
            if (param_6 == '\0') {
               *(int*)( param_4 + 8 ) = iVar6;
            }
 else {
               LAB_00103fe8:cVar3 = icu_76_godot::UnicodeSet::contains(iVar2 + 0x198);
               if (cVar3 != '\0') goto LAB_00103b70;
               if (0 < *(int*)( param_4 + 8 )) {
                  *(int*)( param_4 + 8 ) = *(int*)( param_4 + 8 ) + -1;
               }

            }

            LAB_00103cf8:iVar15 = iVar15 + -1;
         }

      }

      LAB_00103b70:icu_76_godot::UVector32::~UVector32(local_1f8);
      icu_76_godot::UVector32::~UVector32(local_288);
      icu_76_godot::UVector32::~UVector32(local_290);
      icu_76_godot::UVector32::~UVector32(local_2f8);
      icu_76_godot::UVector32::~UVector32(local_278);
   }

   if (local_2a8 != (UVector32*)0x0) {
      ( **(code**)( *(long*)local_2a8 + 8 ) )();
   }

   LAB_001034ff:icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)&local_148);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar15;
   LAB_00102c2d:cVar3 = icu_76_godot::UVector32::expandCapacity((int)local_2a8, (UErrorCode*)(ulong)uVar16);
   iVar6 = *(int*)( local_2a8 + 8 );
   if (cVar3 != '\0') {
      LAB_00102c40:*(undefined4*)( *(long*)( local_2a8 + 0x18 ) + (long)iVar6 * 4 ) = uVar5;
      iVar6 = *(int*)( local_2a8 + 8 ) + 1;
      *(int*)( local_2a8 + 8 ) = iVar6;
   }

   goto joined_r0x00102c13;
}
/* icu_76_godot::CjkBreakEngine::divideUpDictionaryRange(UText*, int, int, icu_76_godot::UVector32&,
   signed char, UErrorCode&) const */undefined8 icu_76_godot::CjkBreakEngine::divideUpDictionaryRange(undefined8 param_1, undefined8 param_2_00, int param_2, int param_3, undefined8 param_5, undefined8 param_6, int *param_7) {
   undefined8 uVar1;
   if (( *param_7 < 1 ) && ( param_2 < param_3 )) {
      uVar1 = divideUpDictionaryRange();
      return uVar1;
   }

   return 0;
}
/* icu_76_godot::CjkBreakEngine::loadJapaneseExtensions(UErrorCode&) */void icu_76_godot::CjkBreakEngine::loadJapaneseExtensions(CjkBreakEngine *this, UErrorCode *param_1) {
   int iVar1;
   char cVar2;
   UnicodeString *this_00;
   ResourceBundle *pRVar3;
   long in_FS_OFFSET;
   ResourceBundle aRStack_168[32];
   ResourceBundle local_148[32];
   Locale local_128[232];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   icu_76_godot::Locale::Locale(local_128, "ja", (char*)0x0, (char*)0x0, (char*)0x0);
   icu_76_godot::ResourceBundle::ResourceBundle(aRStack_168, "icudt76l-brkitr", local_128, param_1);
   icu_76_godot::Locale::~Locale(local_128);
   if (*(int*)param_1 < 1) {
      icu_76_godot::ResourceBundle::get((char*)local_148, (UErrorCode*)aRStack_168);
      iVar1 = *(int*)param_1;
      while (( iVar1 < 1 && ( cVar2 = cVar2 != '\0' ) )) {
         pRVar3 = local_148;
         icu_76_godot::ResourceBundle::getNextString((UErrorCode*)local_128);
         this_00 = (UnicodeString*)icu_76_godot::UMemory::operator_new((UMemory*)0x40, (ulong)pRVar3);
         if (this_00 != (UnicodeString*)0x0) {
            icu_76_godot::UnicodeString::UnicodeString(this_00, (UnicodeString*)local_128);
         }

         uhash_puti_76_godot(*(undefined8*)( this + 0x348 ), this_00, 1, param_1);
         icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)local_128);
         iVar1 = *(int*)param_1;
      }
;
      icu_76_godot::ResourceBundle::~ResourceBundle(local_148);
   }

   icu_76_godot::ResourceBundle::~ResourceBundle(aRStack_168);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::CjkBreakEngine::loadHiragana(UErrorCode&) */void icu_76_godot::CjkBreakEngine::loadHiragana(CjkBreakEngine *this, UErrorCode *param_1) {
   char cVar1;
   UnicodeString *this_00;
   long lVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   UnicodeSetIterator aUStack_188[8];
   uint local_180;
   code *local_148;
   undefined2 local_140;
   UnicodeSet local_108[200];
   long local_40;
   lVar2 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_148 = icu_76_godot::UnicodeSet::UnicodeSet;
   local_140 = 2;
   do {
      lVar2 = lVar2 + 1;
   }
 while ( *(short*)( &_LC12 + lVar2 * 2 ) != 0 );
   icu_76_godot::UnicodeString::doAppend((UnicodeString*)&local_148);
   icu_76_godot::UnicodeSet::UnicodeSet(local_108, (UnicodeString*)&local_148, param_1);
   icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)&local_148);
   icu_76_godot::UnicodeSet::compact();
   icu_76_godot::UnicodeSetIterator::UnicodeSetIterator(aUStack_188, local_108);
   while (true) {
      cVar1 = icu_76_godot::UnicodeSetIterator::next();
      if (cVar1 == '\0') break;
      uVar3 = (ulong)local_180;
      icu_76_godot::UnicodeString::UnicodeString((UnicodeString*)&local_148, local_180);
      this_00 = (UnicodeString*)icu_76_godot::UMemory::operator_new((UMemory*)0x40, uVar3);
      if (this_00 != (UnicodeString*)0x0) {
         icu_76_godot::UnicodeString::UnicodeString(this_00, (UnicodeString*)&local_148);
      }

      uhash_puti_76_godot(*(undefined8*)( this + 0x348 ), this_00, 1, param_1);
      icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)&local_148);
   }
;
   icu_76_godot::UnicodeSetIterator::~UnicodeSetIterator(aUStack_188);
   icu_76_godot::UnicodeSet::~UnicodeSet(local_108);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::CjkBreakEngine::initJapanesePhraseParameter(UErrorCode&) */void icu_76_godot::CjkBreakEngine::initJapanesePhraseParameter(CjkBreakEngine *this, UErrorCode *param_1) {
   loadJapaneseExtensions(this, param_1);
   loadHiragana(this, param_1);
   return;
}
/* icu_76_godot::CjkBreakEngine::CjkBreakEngine(icu_76_godot::DictionaryMatcher*,
   icu_76_godot::LanguageType, UErrorCode&) */void icu_76_godot::CjkBreakEngine::CjkBreakEngine(CjkBreakEngine *this, undefined8 param_1, int param_3, UErrorCode *param_4) {
   UnicodeSet *this_00;
   UnicodeSet *this_01;
   CjkBreakEngine *pCVar1;
   int iVar2;
   undefined8 uVar3;
   long lVar4;
   long in_FS_OFFSET;
   int local_14c;
   code *local_148;
   undefined2 local_140;
   code *local_108;
   undefined2 local_100;
   long local_40;
   this_01 = (UnicodeSet*)( this + 0xd0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   icu_76_godot::LanguageBreakEngine::LanguageBreakEngine((LanguageBreakEngine*)this);
   *(undefined**)this = &DAT_00104b90;
   this_00 = (UnicodeSet*)( this + 8 );
   icu_76_godot::UnicodeSet::UnicodeSet(this_00);
   *(undefined***)this = &PTR__CjkBreakEngine_00104cf8;
   icu_76_godot::UnicodeSet::UnicodeSet(this_01);
   icu_76_godot::UnicodeSet::UnicodeSet((UnicodeSet*)( this + 0x198 ));
   icu_76_godot::UnicodeSet::UnicodeSet((UnicodeSet*)( this + 0x260 ));
   *(undefined8*)( this + 0x328 ) = param_1;
   this[0x340] = (CjkBreakEngine)0x0;
   pCVar1 = this + 0x350;
   *(undefined8*)( this + 0x348 ) = 0;
   local_14c = 0;
   uhash_init_76_godot(pCVar1, &uhash_hashUnicodeString_76_godot, &uhash_compareUnicodeString_76_godot, 0, &local_14c);
   if (local_14c < 1) {
      *(CjkBreakEngine**)( this + 0x348 ) = pCVar1;
      uhash_setKeyDeleter_76_godot(pCVar1);
   }

   *(undefined8*)( this + 0x338 ) = 0;
   uVar3 = icu_76_godot::Normalizer2::getNFKCInstance(param_4);
   lVar4 = 0;
   local_108 = icu_76_godot::UnicodeSet::UnicodeSet;
   *(undefined8*)( this + 0x330 ) = uVar3;
   local_100 = 2;
   do {
      lVar4 = lVar4 + 1;
   }
 while ( *(short*)( &_LC13 + lVar4 * 2 ) != 0 );
   icu_76_godot::UnicodeString::doAppend((UnicodeString*)&local_108);
   icu_76_godot::UnicodeSet::applyPattern((UnicodeString*)this_01, (UErrorCode*)&local_108);
   icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)&local_108);
   icu_76_godot::UnicodeSet::compact();
   lVar4 = 0;
   local_108 = icu_76_godot::UnicodeSet::UnicodeSet;
   local_100 = 2;
   do {
      lVar4 = lVar4 + 1;
   }
 while ( *(short*)( &_LC14 + lVar4 * 2 ) != 0 );
   icu_76_godot::UnicodeString::doAppend((UnicodeString*)&local_108);
   icu_76_godot::UnicodeSet::applyPattern((UnicodeString*)( this + 0x198 ), (UErrorCode*)&local_108);
   icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)&local_108);
   icu_76_godot::UnicodeSet::compact();
   lVar4 = 0;
   local_108 = icu_76_godot::UnicodeSet::UnicodeSet;
   local_100 = 2;
   do {
      lVar4 = lVar4 + 1;
   }
 while ( *(short*)( &_LC15 + lVar4 * 2 ) != 0 );
   icu_76_godot::UnicodeString::doAppend((UnicodeString*)&local_108);
   icu_76_godot::UnicodeSet::applyPattern((UnicodeString*)( this + 0x260 ), (UErrorCode*)&local_108);
   icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)&local_108);
   icu_76_godot::UnicodeSet::compact();
   if (param_3 == 0) {
      if (*(int*)param_4 < 1) {
         icu_76_godot::UnicodeSet::operator =(this_00, this_01);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            icu_76_godot::UnicodeSet::compact();
            return;
         }

         goto LAB_0010468e;
      }

   }
 else {
      local_148 = icu_76_godot::UnicodeSet::UnicodeSet;
      lVar4 = 0;
      local_140 = 2;
      do {
         lVar4 = lVar4 + 1;
      }
 while ( *(short*)( &_LC16 + lVar4 * 2 ) != 0 );
      icu_76_godot::UnicodeString::doAppend((UnicodeString*)&local_148);
      icu_76_godot::UnicodeSet::UnicodeSet((UnicodeSet*)&local_108, (UnicodeString*)&local_148, param_4);
      icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)&local_148);
      iVar2 = *(int*)param_4;
      this[0x340] = (CjkBreakEngine)0x1;
      if (iVar2 < 1) {
         icu_76_godot::UnicodeSet::operator =(this_00, (UnicodeSet*)&local_108);
         icu_76_godot::UnicodeSet::compact();
         loadJapaneseExtensions(this, param_4);
         loadHiragana(this, param_4);
      }

      icu_76_godot::UnicodeSet::~UnicodeSet((UnicodeSet*)&local_108);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010468e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}

