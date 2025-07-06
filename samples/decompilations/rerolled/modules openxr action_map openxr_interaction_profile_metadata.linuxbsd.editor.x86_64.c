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
      } else {
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
      } while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }
   }
   return;
}/* OpenXRInteractionProfileMetadata::check_profile_name(String const&) const */String *OpenXRInteractionProfileMetadata::check_profile_name(String *param_1) {
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
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   code *pcVar19;
   char cVar20;
   uint uVar21;
   uint uVar22;
   int iVar23;
   String *in_RDX;
   long lVar24;
   long in_RSI;
   long lVar25;
   ulong uVar26;
   uint uVar27;
   uint uVar28;
   if (( *(long*)( in_RSI + 0x180 ) != 0 ) && ( *(int*)( in_RSI + 0x1a4 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x1a0 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x1a0 ) * 8 );
      uVar21 = String::hash();
      uVar26 = CONCAT44(0, uVar1);
      lVar25 = *(long*)( in_RSI + 0x188 );
      uVar22 = 1;
      if (uVar21 != 0) {
         uVar22 = uVar21;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar22 * lVar2;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar26;
      lVar24 = SUB168(auVar3 * auVar11, 8);
      uVar21 = *(uint*)( lVar25 + lVar24 * 4 );
      iVar23 = SUB164(auVar3 * auVar11, 8);
      if (uVar21 != 0) {
         uVar27 = 0;
         do {
            if (uVar22 == uVar21) {
               cVar20 = String::operator ==((String*)( *(long*)( *(long*)( in_RSI + 0x180 ) + lVar24 * 8 ) + 0x10 ), in_RDX);
               if (cVar20 != '\0') {
                  if (( *(long*)( in_RSI + 0x180 ) != 0 ) && ( *(int*)( in_RSI + 0x1a4 ) != 0 )) {
                     uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x1a0 ) * 4 );
                     uVar26 = CONCAT44(0, uVar1);
                     lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x1a0 ) * 8 );
                     uVar21 = String::hash();
                     lVar25 = *(long*)( in_RSI + 0x188 );
                     uVar22 = 1;
                     if (uVar21 != 0) {
                        uVar22 = uVar21;
                     }
                     auVar7._8_8_ = 0;
                     auVar7._0_8_ = (ulong)uVar22 * lVar2;
                     auVar15._8_8_ = 0;
                     auVar15._0_8_ = uVar26;
                     lVar24 = SUB168(auVar7 * auVar15, 8);
                     uVar21 = *(uint*)( lVar25 + lVar24 * 4 );
                     uVar27 = SUB164(auVar7 * auVar15, 8);
                     if (uVar21 != 0) {
                        uVar28 = 0;
                        do {
                           if (uVar22 == uVar21) {
                              cVar20 = String::operator ==((String*)( *(long*)( *(long*)( in_RSI + 0x180 ) + lVar24 * 8 ) + 0x10 ), in_RDX);
                              if (cVar20 != '\0') {
                                 lVar2 = *(long*)( *(long*)( in_RSI + 0x180 ) + (ulong)uVar27 * 8 );
                                 *(undefined8*)param_1 = 0;
                                 if (*(long*)( lVar2 + 0x18 ) == 0) {
                                    return param_1;
                                 }
                                 CowData<char32_t>::_ref((CowData<char32_t>*)param_1, (CowData*)( lVar2 + 0x18 ));
                                 return param_1;
                              }
                              lVar25 = *(long*)( in_RSI + 0x188 );
                           }
                           uVar28 = uVar28 + 1;
                           auVar8._8_8_ = 0;
                           auVar8._0_8_ = ( ulong )(uVar27 + 1) * lVar2;
                           auVar16._8_8_ = 0;
                           auVar16._0_8_ = uVar26;
                           lVar24 = SUB168(auVar8 * auVar16, 8);
                           uVar21 = *(uint*)( lVar25 + lVar24 * 4 );
                           uVar27 = SUB164(auVar8 * auVar16, 8);
                        } while ( ( uVar21 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar21 * lVar2,auVar17._8_8_ = 0,auVar17._0_8_ = uVar26,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar1 + uVar27 ) - SUB164(auVar9 * auVar17, 8)) * lVar2,auVar18._8_8_ = 0,auVar18._0_8_ = uVar26,uVar28 <= SUB164(auVar10 * auVar18, 8) );
                     }
                  }
                  _err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar19 = (code*)invalidInstructionException();
                  ( *pcVar19 )();
               }
               lVar25 = *(long*)( in_RSI + 0x188 );
            }
            uVar27 = uVar27 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar23 + 1) * lVar2;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = uVar26;
            lVar24 = SUB168(auVar4 * auVar12, 8);
            uVar21 = *(uint*)( lVar25 + lVar24 * 4 );
            iVar23 = SUB164(auVar4 * auVar12, 8);
         } while ( ( uVar21 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar21 * lVar2,auVar13._8_8_ = 0,auVar13._0_8_ = uVar26,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar23 ) - SUB164(auVar5 * auVar13, 8)) * lVar2,auVar14._8_8_ = 0,auVar14._0_8_ = uVar26,uVar27 <= SUB164(auVar6 * auVar14, 8) );
      }
   }
   *(undefined8*)param_1 = 0;
   if (*(long*)in_RDX != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_1, (CowData*)in_RDX);
   }
   return param_1;
}/* OpenXRInteractionProfileMetadata::has_top_level_path(String) const */undefined8 OpenXRInteractionProfileMetadata::has_top_level_path(OpenXRInteractionProfileMetadata *this, String *param_2) {
   long lVar1;
   undefined8 uVar2;
   long lVar3;
   lVar1 = *(long*)( this + 0x1b0 );
   if (lVar1 == 0) {
      return 0;
   }
   lVar3 = 0;
   while (true) {
      if (*(long*)( lVar1 + -8 ) <= lVar3) {
         return 0;
      }
      uVar2 = String::operator ==((String*)( lVar1 + 8 + lVar3 * 0x18 ), param_2);
      if ((char)uVar2 != '\0') break;
      lVar1 = *(long*)( this + 0x1b0 );
      lVar3 = lVar3 + 1;
      if (lVar1 == 0) {
         return 0;
      }
   };
   return uVar2;
}/* OpenXRInteractionProfileMetadata::get_top_level_name(String) const */CowData<char32_t> *OpenXRInteractionProfileMetadata::get_top_level_name(CowData<char32_t> *param_1, long param_2, String *param_3) {
   long lVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   CowData *pCVar5;
   long lVar6;
   lVar1 = *(long*)( param_2 + 0x1b0 );
   for (lVar4 = 0; ( lVar1 != 0 && ( lVar4 < *(long*)( lVar1 + -8 ) ) ); lVar4 = lVar4 + 1) {
      cVar3 = String::operator ==((String*)( lVar1 + 8 + lVar4 * 0x18 ), param_3);
      if (cVar3 != '\0') {
         lVar1 = *(long*)( param_2 + 0x1b0 );
         if (lVar1 == 0) {
            lVar6 = 0;
         } else {
            lVar6 = *(long*)( lVar1 + -8 );
            if (lVar4 < lVar6) {
               pCVar5 = (CowData*)( lVar1 + lVar4 * 0x18 );
               *(undefined8*)param_1 = 0;
               if (*(long*)pCVar5 == 0) {
                  return param_1;
               }
               CowData<char32_t>::_ref(param_1, pCVar5);
               return param_1;
            }
         }
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar4, lVar6, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }
      lVar1 = *(long*)( param_2 + 0x1b0 );
   }
   *(undefined8*)param_1 = 0;
   return param_1;
}/* OpenXRInteractionProfileMetadata::get_top_level_extension(String) const */StrRange *OpenXRInteractionProfileMetadata::get_top_level_extension(StrRange *param_1, long param_2, String *param_3) {
   long lVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   lVar5 = 0;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = *(long*)( param_2 + 0x1b0 );
   if (lVar4 != 0) {
      while (lVar5 < *(long*)( lVar4 + -8 )) {
         cVar3 = String::operator ==((String*)( lVar4 + 8 + lVar5 * 0x18 ), param_3);
         lVar4 = *(long*)( param_2 + 0x1b0 );
         if (cVar3 != '\0') {
            if (lVar4 == 0) {
               lVar6 = 0;
            } else {
               lVar6 = *(long*)( lVar4 + -8 );
               if (lVar5 < lVar6) {
                  lVar4 = lVar4 + lVar5 * 0x18;
                  *(undefined8*)param_1 = 0;
                  if (*(long*)( lVar4 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)param_1, (CowData*)( lVar4 + 0x10 ));
                  }
                  goto LAB_0010055e;
               }
            }
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar5, lVar6, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         lVar5 = lVar5 + 1;
         if (lVar4 == 0) break;
      };
   }
   *(undefined8*)param_1 = 0;
   String::parse_latin1(param_1);
   LAB_0010055e:if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* OpenXRInteractionProfileMetadata::has_interaction_profile(String) const */undefined8 OpenXRInteractionProfileMetadata::has_interaction_profile(OpenXRInteractionProfileMetadata *this, String *param_2) {
   long lVar1;
   undefined8 uVar2;
   long lVar3;
   lVar3 = *(long*)( this + 0x1c0 );
   if (lVar3 != 0) {
      lVar1 = lVar3 + *(long*)( lVar3 + -8 ) * 0x28;
      for (; lVar1 != lVar3; lVar3 = lVar3 + 0x28) {
         uVar2 = String::operator ==((String*)( lVar3 + 8 ), param_2);
         if ((char)uVar2 != '\0') {
            return uVar2;
         }
      }
   }
   return 0;
}/* OpenXRInteractionProfileMetadata::get_interaction_profile_extension(String) const */CowData<char32_t> *OpenXRInteractionProfileMetadata::get_interaction_profile_extension(CowData<char32_t> *param_1, long param_2, String *param_3) {
   long lVar1;
   long lVar2;
   char cVar3;
   long lVar4;
   long in_FS_OFFSET;
   lVar4 = *(long*)( param_2 + 0x1c0 );
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar4 != 0) {
      lVar1 = lVar4 + *(long*)( lVar4 + -8 ) * 0x28;
      for (; lVar1 != lVar4; lVar4 = lVar4 + 0x28) {
         cVar3 = String::operator ==((String*)( lVar4 + 8 ), param_3);
         if (cVar3 != '\0') {
            *(undefined8*)param_1 = 0;
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref(param_1, (CowData*)( lVar4 + 0x10 ));
            }
            goto LAB_00100707;
         }
      }
   }
   *(undefined8*)param_1 = 0;
   String::parse_latin1((StrRange*)param_1);
   LAB_00100707:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* OpenXRInteractionProfileMetadata::get_profile(String) const */long OpenXRInteractionProfileMetadata::get_profile(OpenXRInteractionProfileMetadata *this, String *param_2) {
   long lVar1;
   char cVar2;
   long lVar3;
   lVar3 = *(long*)( this + 0x1c0 );
   if (lVar3 != 0) {
      lVar1 = lVar3 + *(long*)( lVar3 + -8 ) * 0x28;
      for (; lVar1 != lVar3; lVar3 = lVar3 + 0x28) {
         cVar2 = String::operator ==((String*)( lVar3 + 8 ), param_2);
         if (cVar2 != '\0') {
            return lVar3;
         }
      }
   }
   return 0;
}/* OpenXRInteractionProfileMetadata::InteractionProfile::has_io_path(String) const */undefined8 OpenXRInteractionProfileMetadata::InteractionProfile::has_io_path(InteractionProfile *this, String *param_2) {
   long lVar1;
   undefined8 uVar2;
   long lVar3;
   lVar1 = *(long*)( this + 0x20 );
   if (lVar1 == 0) {
      return 0;
   }
   lVar3 = 0;
   while (true) {
      if (*(long*)( lVar1 + -8 ) <= lVar3) {
         return 0;
      }
      uVar2 = String::operator ==((String*)( lVar1 + 0x10 + lVar3 * 0x28 ), param_2);
      if ((char)uVar2 != '\0') break;
      lVar1 = *(long*)( this + 0x20 );
      lVar3 = lVar3 + 1;
      if (lVar1 == 0) {
         return 0;
      }
   };
   return uVar2;
}/* OpenXRInteractionProfileMetadata::InteractionProfile::get_io_path(String) const */long OpenXRInteractionProfileMetadata::InteractionProfile::get_io_path(InteractionProfile *this, String *param_2) {
   code *pcVar1;
   char cVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   lVar3 = *(long*)( this + 0x20 );
   if (lVar3 == 0) {
      return 0;
   }
   lVar4 = 0;
   while (true) {
      if (*(long*)( lVar3 + -8 ) <= lVar4) {
         return 0;
      }
      cVar2 = String::operator ==((String*)( lVar3 + 0x10 + lVar4 * 0x28 ), param_2);
      lVar3 = *(long*)( this + 0x20 );
      if (cVar2 != '\0') break;
      lVar4 = lVar4 + 1;
      if (lVar3 == 0) {
         return 0;
      }
   };
   if (lVar3 == 0) {
      lVar5 = 0;
   } else {
      lVar5 = *(long*)( lVar3 + -8 );
      if (lVar4 < lVar5) {
         return lVar3 + lVar4 * 0x28;
      }
   }
   _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar4, lVar5, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* OpenXRInteractionProfileMetadata::get_io_path(String, String) const */undefined8 OpenXRInteractionProfileMetadata::get_io_path(OpenXRInteractionProfileMetadata *this, long *param_2, long *param_3) {
   long *plVar1;
   InteractionProfile *pIVar2;
   long lVar3;
   char cVar4;
   long lVar5;
   undefined8 uVar6;
   InteractionProfile *pIVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0;
   if (*param_2 != 0) {
      plVar1 = (long*)( *param_2 + -0x10 );
      do {
         lVar3 = *plVar1;
         if (lVar3 == 0) goto LAB_00100917;
         LOCK();
         lVar5 = *plVar1;
         bVar8 = lVar3 == lVar5;
         if (bVar8) {
            *plVar1 = lVar3 + 1;
            lVar5 = lVar3;
         }
         UNLOCK();
      } while ( !bVar8 );
      if (lVar5 != -1) {
         local_38 = *param_2;
      }
   }
   LAB_00100917:lVar3 = local_38;
   pIVar7 = *(InteractionProfile**)( this + 0x1c0 );
   if (( pIVar7 == (InteractionProfile*)0x0 ) || ( pIVar2 = pIVar7 == pIVar2 )) {
      if (local_38 != 0) {
         LOCK();
         plVar1 = (long*)( local_38 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            uVar6 = 0;
            goto LAB_00100a11;
         }
      }
   } else {
      do {
         cVar4 = String::operator ==((String*)( pIVar7 + 8 ), (String*)&local_38);
         lVar3 = local_38;
         if (cVar4 != '\0') {
            if (local_38 == 0) goto LAB_00100999;
            goto LAB_0010096f;
         }
         pIVar7 = pIVar7 + 0x28;
      } while ( pIVar2 != pIVar7 );
      if (local_38 != 0) {
         pIVar7 = (InteractionProfile*)0x0;
         LAB_0010096f:LOCK();
         plVar1 = (long*)( local_38 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }
         if (pIVar7 != (InteractionProfile*)0x0) {
            LAB_00100999:local_38 = 0;
            plVar1 = (long*)( *param_3 + -0x10 );
            if (*param_3 != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_001009d1;
                  LOCK();
                  lVar5 = *plVar1;
                  bVar8 = lVar3 == lVar5;
                  if (bVar8) {
                     *plVar1 = lVar3 + 1;
                     lVar5 = lVar3;
                  }
                  UNLOCK();
               } while ( !bVar8 );
               if (lVar5 != -1) {
                  local_38 = *param_3;
               }
            }
            LAB_001009d1:uVar6 = InteractionProfile::get_io_path(pIVar7);
            lVar3 = local_38;
            if (local_38 != 0) {
               LOCK();
               plVar1 = (long*)( local_38 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_38 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }
            }
            goto LAB_00100a11;
         }
      }
   }
   uVar6 = 0;
   LAB_00100a11:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar6;
}/* OpenXRInteractionProfileMetadata::register_profile_rename(String const&, String const&) */void OpenXRInteractionProfileMetadata::register_profile_rename(OpenXRInteractionProfileMetadata *this, String *param_1, String *param_2) {
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
   ulong uVar11;
   char cVar12;
   uint uVar13;
   CowData<char32_t> *this_00;
   uint uVar14;
   int iVar15;
   long lVar16;
   long lVar17;
   uint uVar18;
   if (( *(long*)( this + 0x180 ) != 0 ) && ( *(int*)( this + 0x1a4 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a0 ) * 8 );
      uVar13 = String::hash();
      uVar11 = CONCAT44(0, uVar1);
      lVar17 = *(long*)( this + 0x188 );
      uVar14 = 1;
      if (uVar13 != 0) {
         uVar14 = uVar13;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar14 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar11;
      lVar16 = SUB168(auVar3 * auVar7, 8);
      uVar13 = *(uint*)( lVar17 + lVar16 * 4 );
      iVar15 = SUB164(auVar3 * auVar7, 8);
      if (uVar13 != 0) {
         uVar18 = 0;
         do {
            if (uVar14 == uVar13) {
               cVar12 = String::operator ==((String*)( *(long*)( *(long*)( this + 0x180 ) + lVar16 * 8 ) + 0x10 ), param_1);
               if (cVar12 != '\0') {
                  _err_print_error("register_profile_rename", "modules/openxr/action_map/openxr_interaction_profile_metadata.cpp", 0x38, "Condition \"profile_renames.has(p_old_name)\" is true.", 0, 0);
                  return;
               }
               lVar17 = *(long*)( this + 0x188 );
            }
            uVar18 = uVar18 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar15 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar11;
            lVar16 = SUB168(auVar4 * auVar8, 8);
            uVar13 = *(uint*)( lVar17 + lVar16 * 4 );
            iVar15 = SUB164(auVar4 * auVar8, 8);
         } while ( ( uVar13 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar13 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar11,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar15 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar11,uVar18 <= SUB164(auVar6 * auVar10, 8) );
      }
   }
   this_00 = (CowData<char32_t>*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator []((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)( this + 0x178 ), param_1);
   if (*(long*)this_00 == *(long*)param_2) {
      return;
   }
   CowData<char32_t>::_ref(this_00, (CowData*)param_2);
   return;
}/* OpenXRInteractionProfileMetadata::_bind_methods() */void OpenXRInteractionProfileMetadata::_bind_methods(void) {
   long lVar1;
   code *pcVar2;
   undefined *puVar3;
   long *plVar4;
   MethodBind *pMVar5;
   uint uVar6;
   long *plVar7;
   long lVar8;
   long in_FS_OFFSET;
   long local_138[2];
   long *local_128;
   char *local_118;
   char *pcStack_110;
   undefined8 local_108;
   char *local_f8;
   char *pcStack_f0;
   char *local_e8;
   undefined8 local_e0;
   char *local_d8;
   char *pcStack_d0;
   char *local_c8;
   undefined8 local_c0;
   char *local_b8;
   char *pcStack_b0;
   char *local_a8;
   char *pcStack_a0;
   undefined *local_98;
   char *pcStack_90;
   undefined8 local_88;
   char **local_78;
   undefined1 auStack_70[16];
   char **ppcStack_60;
   undefined **local_58;
   char **ppcStack_50;
   long local_40;
   puVar3 = PTR__LC23_0010f2e0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_108 = 0;
   local_78 = &local_118;
   local_118 = "old_name";
   pcStack_110 = "new_name";
   auStack_70._8_8_ = auStack_70._0_8_;
   auStack_70._0_8_ = &pcStack_110;
   uVar6 = ( uint ) & local_78;
   D_METHODP((char*)local_138, (char***)"register_profile_rename", uVar6);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar5 = create_method_bind<OpenXRInteractionProfileMetadata,String_const&,String_const&>(register_profile_rename);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)local_138, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }
   plVar4 = local_128;
   if (local_128 != (long*)0x0) {
      LOCK();
      plVar7 = local_128 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_128 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         lVar1 = local_128[-1];
         local_128 = (long*)0x0;
         if (lVar1 != 0) {
            lVar8 = 0;
            plVar7 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }
               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            } while ( lVar1 != lVar8 );
         }
         Memory::free_static(plVar4 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_138[0] != 0 )) {
      StringName::unref();
   }
   local_c0 = 0;
   local_c8 = "openxr_extension_name";
   local_d8 = "display_name";
   pcStack_d0 = "openxr_path";
   auStack_70._8_8_ = &local_c8;
   auStack_70._0_8_ = &pcStack_d0;
   local_78 = &local_d8;
   D_METHODP((char*)local_138, (char***)"register_top_level_path", uVar6);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar5 = create_method_bind<OpenXRInteractionProfileMetadata,String_const&,String_const&,String_const&>(register_top_level_path);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)local_138, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }
   plVar4 = local_128;
   if (local_128 != (long*)0x0) {
      LOCK();
      plVar7 = local_128 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_128 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         lVar1 = local_128[-1];
         local_128 = (long*)0x0;
         if (lVar1 != 0) {
            lVar8 = 0;
            plVar7 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }
               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            } while ( lVar1 != lVar8 );
         }
         Memory::free_static(plVar4 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_138[0] != 0 )) {
      StringName::unref();
   }
   local_e0 = 0;
   local_e8 = "openxr_extension_name";
   local_f8 = "display_name";
   pcStack_f0 = "openxr_path";
   auStack_70._8_8_ = &local_e8;
   auStack_70._0_8_ = &pcStack_f0;
   local_78 = &local_f8;
   D_METHODP((char*)local_138, (char***)"register_interaction_profile", uVar6);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar5 = create_method_bind<OpenXRInteractionProfileMetadata,String_const&,String_const&,String_const&>(register_interaction_profile);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)local_138, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }
   plVar4 = local_128;
   if (local_128 != (long*)0x0) {
      LOCK();
      plVar7 = local_128 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_128 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         lVar1 = local_128[-1];
         local_128 = (long*)0x0;
         if (lVar1 != 0) {
            lVar8 = 0;
            plVar7 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }
               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            } while ( lVar1 != lVar8 );
         }
         Memory::free_static(plVar4 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_138[0] != 0 )) {
      StringName::unref();
   }
   local_b8 = "interaction_profile";
   pcStack_b0 = "display_name";
   local_a8 = "toplevel_path";
   pcStack_a0 = "openxr_path";
   local_98 = puVar3;
   pcStack_90 = "action_type";
   auStack_70._8_8_ = &local_a8;
   auStack_70._0_8_ = &pcStack_b0;
   local_88 = 0;
   local_78 = &local_b8;
   ppcStack_60 = &pcStack_a0;
   local_58 = &local_98;
   ppcStack_50 = &pcStack_90;
   D_METHODP((char*)local_138, (char***)"register_io_path", uVar6);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar5 = create_method_bind<OpenXRInteractionProfileMetadata,String_const&,String_const&,String_const&,String_const&,String_const&,OpenXRAction::ActionType>(register_io_path);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)local_138, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }
   plVar4 = local_128;
   if (local_128 != (long*)0x0) {
      LOCK();
      plVar7 = local_128 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_128 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         lVar1 = local_128[-1];
         local_128 = (long*)0x0;
         if (lVar1 != 0) {
            lVar8 = 0;
            plVar7 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }
               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            } while ( lVar1 != lVar8 );
         }
         Memory::free_static(plVar4 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_138[0] != 0 )) {
      StringName::unref();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
   CowData *pCVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   long lVar6;
   ulong uVar7;
   CowData<char32_t> *this_00;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }
   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }
   lVar2 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar2 * 8 != 0) {
      uVar7 = lVar2 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }
   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 != (undefined8*)0x0) {
      lVar6 = 0;
      *puVar5 = 1;
      puVar5[1] = lVar2;
      this_00 = (CowData<char32_t>*)( puVar5 + 2 );
      if (lVar2 != 0) {
         do {
            lVar3 = *(long*)this;
            *(undefined8*)this_00 = 0;
            pCVar1 = (CowData*)( lVar3 + lVar6 * 8 );
            if (*(long*)pCVar1 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar1);
            }
            lVar6 = lVar6 + 1;
            this_00 = this_00 + 8;
         } while ( lVar2 != lVar6 );
      }
      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar5 + 2 );
      return;
   }
   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}/* OpenXRInteractionProfileMetadata::get_interaction_profile_paths() const */void OpenXRInteractionProfileMetadata::get_interaction_profile_paths(void) {
   CowData<String> *this;
   long *plVar1;
   CowData<char32_t> *this_00;
   long lVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long in_RSI;
   long in_RDI;
   long lVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_48;
   long local_40;
   lVar6 = *(long*)( in_RSI + 0x1c0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( in_RDI + 8 ) = 0;
   if (( lVar6 != 0 ) && ( lVar2 = lVar2 != lVar6 )) {
      this(CowData<String> * )(in_RDI + 8);
      do {
         local_48 = 0;
         lVar5 = *(long*)( lVar6 + 8 );
         if (lVar5 == 0) {
            LAB_001014e9:lVar4 = *(long*)( in_RDI + 8 );
            lVar7 = lVar5;
            if (lVar4 == 0) goto LAB_001015c2;
            LAB_001014f7:iVar3 = CowData<String>::resize<false>(this, *(long*)( lVar4 + -8 ) + 1);
            lVar7 = lVar5;
            if (iVar3 != 0) goto LAB_001015e0;
            LAB_0010150f:if (*(long*)( in_RDI + 8 ) == 0) {
               lVar7 = -1;
               lVar4 = 0;
            } else {
               lVar4 = *(long*)( *(long*)( in_RDI + 8 ) + -8 );
               lVar7 = lVar4 + -1;
               if (-1 < lVar7) {
                  CowData<String>::_copy_on_write(this);
                  this_00 = (CowData<char32_t>*)( *(long*)( in_RDI + 8 ) + lVar7 * 8 );
                  if (lVar5 != *(long*)this_00) {
                     CowData<char32_t>::_ref(this_00, (CowData*)&local_48);
                  }
                  goto LAB_0010154e;
               }
            }
            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar7, lVar4, "p_index", "size()", "", false, false);
         } else {
            plVar1 = (long*)( lVar5 + -0x10 );
            do {
               lVar5 = *plVar1;
               if (lVar5 == 0) goto LAB_001015af;
               LOCK();
               lVar4 = *plVar1;
               bVar8 = lVar5 == lVar4;
               if (bVar8) {
                  *plVar1 = lVar5 + 1;
                  lVar4 = lVar5;
               }
               UNLOCK();
            } while ( !bVar8 );
            if (lVar4 != -1) {
               lVar5 = *(long*)( lVar6 + 8 );
               local_48 = lVar5;
               goto LAB_001014e9;
            }
            LAB_001015af:lVar4 = *(long*)( in_RDI + 8 );
            lVar5 = local_48;
            lVar7 = 0;
            if (lVar4 != 0) goto LAB_001014f7;
            LAB_001015c2:iVar3 = CowData<String>::resize<false>(this, 1);
            lVar5 = lVar7;
            if (iVar3 == 0) goto LAB_0010150f;
            LAB_001015e0:_err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
            lVar5 = lVar7;
         }
         LAB_0010154e:if (lVar5 != 0) {
            LOCK();
            plVar1 = (long*)( lVar5 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_48 + -0x10 ), false);
            }
         }
         lVar6 = lVar6 + 0x28;
      } while ( lVar2 != lVar6 );
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* CowData<OpenXRInteractionProfileMetadata::TopLevelPath>::_copy_on_write() [clone .isra.0] */void CowData<OpenXRInteractionProfileMetadata::TopLevelPath>::_copy_on_write(CowData<OpenXRInteractionProfileMetadata::TopLevelPath> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   CowData *pCVar4;
   long lVar5;
   ulong uVar6;
   CowData<char32_t> *this_00;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }
   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }
   lVar1 = *(long*)( *(long*)this + -8 );
   uVar6 = 0x10;
   if (lVar1 * 0x18 != 0) {
      uVar6 = lVar1 * 0x18 - 1;
      uVar6 = uVar6 | uVar6 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = ( uVar6 | uVar6 >> 0x20 ) + 0x11;
   }
   puVar3 = (undefined8*)Memory::alloc_static(uVar6, false);
   if (puVar3 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }
   lVar5 = 0;
   *puVar3 = 1;
   puVar3[1] = lVar1;
   this_00 = (CowData<char32_t>*)( puVar3 + 2 );
   if (lVar1 != 0) {
      do {
         pCVar4 = (CowData*)( this_00 + *(long*)this + ( -0x10 - (long)puVar3 ) );
         *(undefined8*)this_00 = 0;
         if (*(long*)pCVar4 != 0) {
            CowData<char32_t>::_ref(this_00, pCVar4);
         }
         *(undefined8*)( this_00 + 8 ) = 0;
         if (*(long*)( pCVar4 + 8 ) != 0) {
            CowData<char32_t>::_ref(this_00 + 8, pCVar4 + 8);
         }
         *(undefined8*)( this_00 + 0x10 ) = 0;
         if (*(long*)( pCVar4 + 0x10 ) != 0) {
            CowData<char32_t>::_ref(this_00 + 0x10, pCVar4 + 0x10);
         }
         lVar5 = lVar5 + 1;
         this_00 = this_00 + 0x18;
      } while ( lVar1 != lVar5 );
   }
   _unref(this);
   *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar3 + 2 );
   return;
}/* CowData<OpenXRInteractionProfileMetadata::IOPath>::_ref(CowData<OpenXRInteractionProfileMetadata::IOPath>
   const&) [clone .part.0] */void CowData<OpenXRInteractionProfileMetadata::IOPath>::_ref(CowData<OpenXRInteractionProfileMetadata::IOPath> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   _unref(this);
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
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
      } while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }
   }
   return;
}/* CowData<OpenXRInteractionProfileMetadata::IOPath>::_copy_on_write() [clone .isra.0] */void CowData<OpenXRInteractionProfileMetadata::IOPath>::_copy_on_write(CowData<OpenXRInteractionProfileMetadata::IOPath> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   CowData *pCVar4;
   CowData<char32_t> *this_00;
   ulong uVar5;
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
   if (lVar1 * 0x28 != 0) {
      uVar5 = lVar1 * 0x28 - 1;
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
            pCVar4 = (CowData*)( this_00 + *(long*)this + ( -0x10 - (long)puVar3 ) );
            *(undefined8*)this_00 = 0;
            if (*(long*)pCVar4 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar4);
            }
            for (int i = 0; i < 3; i++) {
               *(undefined8*)( this_00 + ( 8*i + 8 ) ) = 0;
               if (*(long*)( pCVar4 + ( 8*i + 8 ) ) != 0) {
                  CowData<char32_t>::_ref(this_00 + ( 8*i + 8 ), pCVar4 + ( 8*i + 8 ));
               }
            }
            lVar6 = lVar6 + 1;
            *(undefined4*)( this_00 + 0x20 ) = *(undefined4*)( pCVar4 + 0x20 );
            this_00 = this_00 + 0x28;
         } while ( lVar1 != lVar6 );
      }
      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar3 + 2 );
      return;
   }
   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}/* OpenXRInteractionProfileMetadata::~OpenXRInteractionProfileMetadata() */void OpenXRInteractionProfileMetadata::~OpenXRInteractionProfileMetadata(OpenXRInteractionProfileMetadata *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   *(undefined***)this = &PTR__initialize_classv_0010ee90;
   singleton = 0;
   CowData<OpenXRInteractionProfileMetadata::InteractionProfile>::_unref((CowData<OpenXRInteractionProfileMetadata::InteractionProfile>*)( this + 0x1c0 ));
   CowData<OpenXRInteractionProfileMetadata::TopLevelPath>::_unref((CowData<OpenXRInteractionProfileMetadata::TopLevelPath>*)( this + 0x1b0 ));
   pvVar5 = *(void**)( this + 0x180 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x1a4 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x1a4 ) = 0;
            *(undefined1(*) [16])( this + 400 ) = (undefined1[16])0x0;
         } else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x188 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x188 ) + lVar4 ) = 0;
                  if (*(long*)( (long)pvVar5 + 0x18 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x18 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x18 );
                        *(undefined8*)( (long)pvVar5 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }
                  }
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
                  pvVar5 = *(void**)( this + 0x180 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }
               lVar4 = lVar4 + 4;
            } while ( lVar4 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x1a4 ) = 0;
            *(undefined1(*) [16])( this + 400 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_00101b54;
         }
      }
      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x188 ), false);
      Object::~Object((Object*)this);
      return;
   }
   LAB_00101b54:Object::~Object((Object*)this);
   return;
}/* OpenXRInteractionProfileMetadata::~OpenXRInteractionProfileMetadata() */void OpenXRInteractionProfileMetadata::~OpenXRInteractionProfileMetadata(OpenXRInteractionProfileMetadata *this) {
   ~OpenXRInteractionProfileMetadata(this)
   ;;
   operator_delete(this, 0x1c8);
   return;
}/* CowData<OpenXRInteractionProfileMetadata::InteractionProfile>::_copy_on_write() [clone .isra.0]
    */void CowData<OpenXRInteractionProfileMetadata::InteractionProfile>::_copy_on_write(CowData<OpenXRInteractionProfileMetadata::InteractionProfile> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   CowData *pCVar4;
   ulong uVar5;
   long lVar6;
   CowData<char32_t> *this_00;
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
   if (lVar1 * 0x28 != 0) {
      uVar5 = lVar1 * 0x28 - 1;
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
            pCVar4 = (CowData*)( this_00 + *(long*)this + ( -0x10 - (long)puVar3 ) );
            *(undefined8*)this_00 = 0;
            if (*(long*)pCVar4 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar4);
            }
            *(undefined8*)( this_00 + 8 ) = 0;
            if (*(long*)( pCVar4 + 8 ) != 0) {
               CowData<char32_t>::_ref(this_00 + 8, pCVar4 + 8);
            }
            *(undefined8*)( this_00 + 0x10 ) = 0;
            if (*(long*)( pCVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref(this_00 + 0x10, pCVar4 + 0x10);
            }
            *(undefined8*)( this_00 + 0x20 ) = 0;
            if (*(long*)( pCVar4 + 0x20 ) != 0) {
               CowData<OpenXRInteractionProfileMetadata::IOPath>::_ref((CowData<OpenXRInteractionProfileMetadata::IOPath>*)( this_00 + 0x20 ), pCVar4 + 0x20);
            }
            lVar6 = lVar6 + 1;
            this_00 = this_00 + 0x28;
         } while ( lVar1 != lVar6 );
      }
      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar3 + 2 );
      return;
   }
   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}/* OpenXRInteractionProfileMetadata::register_top_level_path(String const&, String const&, String
   const&) */void OpenXRInteractionProfileMetadata::register_top_level_path(OpenXRInteractionProfileMetadata *this, String *param_1, String *param_2, String *param_3) {
   long *plVar1;
   CowData<char32_t> *this_00;
   char *pcVar2;
   char cVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   long local_78;
   long local_70;
   long local_68[2];
   char *local_58;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (char*)0x0;
   if (*(long*)param_2 == 0) {
      lVar6 = *(long*)( this + 0x1b0 );
      if (lVar6 != 0) goto LAB_00101de1;
      LAB_00101e37:local_78 = 0;
      if (*(long*)param_1 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)param_1);
      }
      local_70 = 0;
      if (*(long*)param_2 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)param_2);
      }
      local_68[0] = 0;
      lVar6 = *(long*)param_3;
      if (*(long*)param_3 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)local_68, (CowData*)param_3);
         lVar6 = local_68[0];
      }
      local_58 = (char*)0x0;
      if (local_78 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_78);
      }
      local_50 = 0;
      if (local_70 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, (CowData*)&local_70);
      }
      local_48 = 0;
      if (lVar6 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)local_68);
      }
      if (*(long*)( this + 0x1b0 ) == 0) {
         lVar6 = 1;
      } else {
         lVar6 = *(long*)( *(long*)( this + 0x1b0 ) + -8 ) + 1;
      }
      iVar4 = CowData<OpenXRInteractionProfileMetadata::TopLevelPath>::resize<false>((CowData<OpenXRInteractionProfileMetadata::TopLevelPath>*)( this + 0x1b0 ), lVar6);
      if (iVar4 == 0) {
         if (*(long*)( this + 0x1b0 ) == 0) {
            lVar5 = -1;
            lVar6 = 0;
         } else {
            lVar6 = *(long*)( *(long*)( this + 0x1b0 ) + -8 );
            lVar5 = lVar6 + -1;
            if (-1 < lVar5) {
               CowData<OpenXRInteractionProfileMetadata::TopLevelPath>::_copy_on_write((CowData<OpenXRInteractionProfileMetadata::TopLevelPath>*)( this + 0x1b0 ));
               this_00 = (CowData<char32_t>*)( *(long*)( this + 0x1b0 ) + lVar5 * 0x18 );
               if (*(char**)this_00 != local_58) {
                  CowData<char32_t>::_ref(this_00, (CowData*)&local_58);
               }
               if (*(long*)( this_00 + 8 ) != local_50) {
                  CowData<char32_t>::_ref(this_00 + 8, (CowData*)&local_50);
               }
               if (*(long*)( this_00 + 0x10 ) != local_48) {
                  CowData<char32_t>::_ref(this_00 + 0x10, (CowData*)&local_48);
               }
               goto LAB_00101fb4;
            }
         }
         _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar5, lVar6, "p_index", "size()", "", false, false);
      } else {
         _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      }
      LAB_00101fb4:CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (local_78 != 0) {
         LOCK();
         plVar1 = (long*)( local_78 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Memory::free_static((void*)( local_78 + -0x10 ), false);
               return;
            }
            goto LAB_001021d6;
         }
      }
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)param_2);
      pcVar2 = local_58;
      lVar6 = *(long*)( this + 0x1b0 );
      if (lVar6 == 0) {
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static((void*)( (long)pcVar2 + -0x10 ), false);
            }
         }
         goto LAB_00101e37;
      }
      LAB_00101de1:lVar5 = 0;
      do {
         if (*(long*)( lVar6 + -8 ) <= lVar5) break;
         cVar3 = String::operator ==((String*)( lVar6 + 8 + lVar5 * 0x18 ), (String*)&local_58);
         if (cVar3 != '\0') {
            if (local_58 != (char*)0x0) goto LAB_00101e23;
            goto LAB_001020de;
         }
         lVar6 = *(long*)( this + 0x1b0 );
         lVar5 = lVar5 + 1;
      } while ( lVar6 != 0 );
      cVar3 = '\0';
      if (local_58 == (char*)0x0) goto LAB_00101e37;
      LAB_00101e23:pcVar2 = local_58;
      LOCK();
      plVar1 = (long*)( (long)local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar2 + -0x10 ), false);
      }
      if (cVar3 == '\0') goto LAB_00101e37;
      LAB_001020de:local_78 = 0;
      local_58 = " had already been registered";
      local_50 = 0x1c;
      String::parse_latin1((StrRange*)&local_78);
      String::operator +((String*)&local_58, param_2);
      _err_print_error("register_top_level_path", "modules/openxr/action_map/openxr_interaction_profile_metadata.cpp", 0x46, "Condition \"has_top_level_path(p_openxr_path)\" is true.", (String*)&local_58, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_001021d6:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* OpenXRInteractionProfileMetadata::register_interaction_profile(String const&, String const&,
   String const&) */void OpenXRInteractionProfileMetadata::register_interaction_profile(OpenXRInteractionProfileMetadata *this, String *param_1, String *param_2, String *param_3) {
   long *plVar1;
   CowData<char32_t> *this_00;
   CowData<char32_t> *this_01;
   undefined1 auVar2[16];
   char *pcVar3;
   char cVar4;
   int iVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   CowData<OpenXRInteractionProfileMetadata::IOPath> *local_a0;
   undefined1 local_98[16];
   long local_88[2];
   long local_78[2];
   char *local_68;
   long local_60;
   long local_58[2];
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (char*)0x0;
   if (*(long*)param_2 == 0) {
      lVar7 = *(long*)( this + 0x1c0 );
      if (lVar7 != 0) goto LAB_00102245;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)param_2);
      lVar7 = *(long*)( this + 0x1c0 );
      if (lVar7 != 0) {
         LAB_00102245:lVar6 = lVar7 + *(long*)( lVar7 + -8 ) * 0x28;
         if (lVar6 != lVar7) {
            do {
               cVar4 = String::operator ==((String*)( lVar7 + 8 ), (String*)&local_68);
               pcVar3 = local_68;
               if (cVar4 != '\0') {
                  if (local_68 == (char*)0x0) goto LAB_00102550;
                  goto LAB_0010228b;
               }
               lVar7 = lVar7 + 0x28;
            } while ( lVar6 != lVar7 );
            if (local_68 != (char*)0x0) {
               LAB_0010228b:LOCK();
               plVar1 = (long*)( (long)local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = (char*)0x0;
                  Memory::free_static((void*)( (long)pcVar3 + -0x10 ), false);
               }
               if (cVar4 != '\0') {
                  LAB_00102550:auVar2._8_8_ = 0;
                  auVar2._0_8_ = local_98._8_8_;
                  local_98 = auVar2 << 0x40;
                  local_68 = " has already been registered";
                  local_60 = 0x1c;
                  String::parse_latin1((StrRange*)local_98);
                  String::operator +((String*)&local_68, param_2);
                  _err_print_error("register_interaction_profile", "modules/openxr/action_map/openxr_interaction_profile_metadata.cpp", 0x52, "Condition \"has_interaction_profile(p_openxr_path)\" is true.", (String*)&local_68, 0, 0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
                  goto LAB_001024d2;
               }
            }
            goto LAB_001022bd;
         }
      }
      pcVar3 = local_68;
      if (local_68 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( (long)local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = (char*)0x0;
            Memory::free_static((void*)( (long)pcVar3 + -0x10 ), false);
         }
      }
   }
   LAB_001022bd:local_88[0] = 0;
   local_78[0] = 0;
   local_98 = (undefined1[16])0x0;
   lVar7 = *(long*)param_1;
   if (*(long*)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_98, (CowData*)param_1);
      lVar7 = local_98._8_8_;
   }
   this_01 = (CowData<char32_t>*)( local_98 + 8 );
   if (*(long*)param_2 != lVar7) {
      CowData<char32_t>::_ref(this_01, (CowData*)param_2);
   }
   lVar7 = *(long*)param_3;
   if (local_88[0] != *(long*)param_3) {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_88, (CowData*)param_3);
      lVar7 = local_88[0];
   }
   local_68 = (char*)0x0;
   if (local_98._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)local_98);
   }
   local_60 = 0;
   if (local_98._8_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)this_01);
   }
   local_58[0] = 0;
   if (lVar7 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)local_88);
   }
   local_48 = 0;
   if (local_78[0] != 0) {
      CowData<OpenXRInteractionProfileMetadata::IOPath>::_ref((CowData<OpenXRInteractionProfileMetadata::IOPath>*)&local_48, (CowData*)local_78);
   }
   local_a0 = (CowData<OpenXRInteractionProfileMetadata::IOPath>*)local_78;
   if (*(long*)( this + 0x1c0 ) == 0) {
      lVar7 = 1;
   } else {
      lVar7 = *(long*)( *(long*)( this + 0x1c0 ) + -8 ) + 1;
   }
   iVar5 = CowData<OpenXRInteractionProfileMetadata::InteractionProfile>::resize<false>((CowData<OpenXRInteractionProfileMetadata::InteractionProfile>*)( this + 0x1c0 ), lVar7);
   if (iVar5 == 0) {
      if (*(long*)( this + 0x1c0 ) == 0) {
         lVar6 = -1;
         lVar7 = 0;
      } else {
         lVar7 = *(long*)( *(long*)( this + 0x1c0 ) + -8 );
         lVar6 = lVar7 + -1;
         if (-1 < lVar6) {
            CowData<OpenXRInteractionProfileMetadata::InteractionProfile>::_copy_on_write((CowData<OpenXRInteractionProfileMetadata::InteractionProfile>*)( this + 0x1c0 ));
            this_00 = (CowData<char32_t>*)( *(long*)( this + 0x1c0 ) + lVar6 * 0x28 );
            if (*(char**)this_00 != local_68) {
               CowData<char32_t>::_ref(this_00, (CowData*)&local_68);
            }
            if (*(long*)( this_00 + 8 ) != local_60) {
               CowData<char32_t>::_ref(this_00 + 8, (CowData*)&local_60);
            }
            if (*(long*)( this_00 + 0x10 ) != local_58[0]) {
               CowData<char32_t>::_ref(this_00 + 0x10, (CowData*)local_58);
            }
            if (*(long*)( this_00 + 0x20 ) != local_48) {
               CowData<OpenXRInteractionProfileMetadata::IOPath>::_ref((CowData<OpenXRInteractionProfileMetadata::IOPath>*)( this_00 + 0x20 ), (CowData*)&local_48);
            }
            goto LAB_0010248d;
         }
      }
      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar6, lVar7, "p_index", "size()", "", false, false);
   } else {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   }
   LAB_0010248d:CowData<OpenXRInteractionProfileMetadata::IOPath>::_unref((CowData<OpenXRInteractionProfileMetadata::IOPath>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<OpenXRInteractionProfileMetadata::IOPath>::_unref(local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   CowData<char32_t>::_unref(this_01);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   LAB_001024d2:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* OpenXRInteractionProfileMetadata::register_io_path(String const&, String const&, String const&,
   String const&, String const&, OpenXRAction::ActionType) */void OpenXRInteractionProfileMetadata::register_io_path(OpenXRInteractionProfileMetadata *this, CowData *param_1, long *param_2, CowData *param_3, long *param_4, long *param_5, undefined4 param_7) {
   long *plVar1;
   CowData<char32_t> *this_00;
   char cVar2;
   int iVar3;
   CowData<OpenXRInteractionProfileMetadata::IOPath> *pCVar4;
   long lVar5;
   char *pcVar6;
   undefined8 uVar7;
   long lVar8;
   long lVar9;
   CowData<OpenXRInteractionProfileMetadata::IOPath> *this_01;
   CowData<OpenXRInteractionProfileMetadata::IOPath> *pCVar10;
   long in_FS_OFFSET;
   bool bVar11;
   undefined8 local_b0;
   String local_a8[8];
   String local_a0[8];
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   undefined4 local_78;
   char *local_68;
   long local_60;
   long local_58;
   long local_50;
   undefined4 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (char*)0x0;
   if (*(long*)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, param_1);
   }
   lVar8 = *(long*)( this + 0x1c0 );
   if (lVar8 != 0) {
      lVar9 = lVar8 + *(long*)( lVar8 + -8 ) * 0x28;
      for (; lVar8 != lVar9; lVar8 = lVar8 + 0x28) {
         cVar2 = String::operator ==((String*)( lVar8 + 8 ), (String*)&local_68);
         if (cVar2 != '\0') {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            local_68 = (char*)0x0;
            if (*(long*)param_3 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, param_3);
            }
            lVar8 = *(long*)( this + 0x1b0 );
            lVar9 = 0;
            if (lVar8 != 0) goto LAB_00102778;
            goto LAB_001027a8;
         }
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   operator+((char *)&
   local_68,(String*)"Unknown interaction profile ";
   pcVar6 = "Condition \"!has_interaction_profile(p_interaction_profile)\" is true.";
   uVar7 = 0x5d;
   goto LAB_001027da;
   LAB_001028a0:do {
      cVar2 = String::operator ==((String*)( this_01 + -0x18 ), (String*)param_1);
      if (cVar2 != '\0') {
         local_68 = (char*)0x0;
         if (*param_4 == 0) {
            lVar8 = *(long*)this_01;
            if (lVar8 != 0) goto LAB_00102900;
         } else {
            plVar1 = (long*)( *param_4 + -0x10 );
            do {
               lVar8 = *plVar1;
               if (lVar8 == 0) goto LAB_001028f7;
               LOCK();
               lVar9 = *plVar1;
               bVar11 = lVar8 == lVar9;
               if (bVar11) {
                  *plVar1 = lVar8 + 1;
                  lVar9 = lVar8;
               }
               UNLOCK();
            } while ( !bVar11 );
            if (lVar9 != -1) {
               local_68 = (char*)*param_4;
            }
            LAB_001028f7:lVar8 = *(long*)this_01;
            if (lVar8 != 0) {
               LAB_00102900:lVar9 = 0;
               do {
                  if (*(long*)( lVar8 + -8 ) <= lVar9) break;
                  cVar2 = String::operator ==((String*)( lVar8 + 0x10 + lVar9 * 0x28 ), (String*)&local_68);
                  pcVar6 = local_68;
                  if (cVar2 != '\0') {
                     if (local_68 != (char*)0x0) {
                        LOCK();
                        plVar1 = (long*)( (long)local_68 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_68 = (char*)0x0;
                           Memory::free_static((void*)( (long)pcVar6 + -0x10 ), false);
                        }
                     }
                     local_98 = 0;
                     local_60 = 0xc;
                     local_68 = " registered!";
                     String::parse_latin1((StrRange*)&local_98);
                     local_68 = " already has io path ";
                     local_b0 = 0;
                     local_60 = 0x15;
                     String::parse_latin1((StrRange*)&local_b0);
                     String::operator +(local_a8, (String*)param_1);
                     String::operator +(local_a0, local_a8);
                     String::operator +((String*)&local_68, local_a0);
                     _err_print_error("register_io_path", "modules/openxr/action_map/openxr_interaction_profile_metadata.cpp", 0x62, "Condition \"interaction_profile.has_io_path(p_openxr_path)\" is true.", (CowData<char32_t>*)&local_68, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                     goto LAB_00102800;
                  }
                  lVar8 = *(long*)this_01;
                  lVar9 = lVar9 + 1;
               } while ( lVar8 != 0 );
            }
            pcVar6 = local_68;
            if (local_68 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( (long)local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = (char*)0x0;
                  Memory::free_static((void*)( (long)pcVar6 + -0x10 ), false);
               }
            }
         }
         local_98 = 0;
         plVar1 = (long*)( *param_2 + -0x10 );
         if (*param_2 != 0) {
            do {
               lVar8 = *plVar1;
               if (lVar8 == 0) goto LAB_001029a9;
               LOCK();
               lVar9 = *plVar1;
               bVar11 = lVar8 == lVar9;
               if (bVar11) {
                  *plVar1 = lVar8 + 1;
                  lVar9 = lVar8;
               }
               UNLOCK();
            } while ( !bVar11 );
            if (lVar9 != -1) {
               local_98 = *param_2;
            }
         }
         LAB_001029a9:local_90 = 0;
         plVar1 = (long*)( *(long*)param_3 + -0x10 );
         if (*(long*)param_3 != 0) {
            do {
               lVar8 = *plVar1;
               if (lVar8 == 0) goto LAB_001029df;
               LOCK();
               lVar9 = *plVar1;
               bVar11 = lVar8 == lVar9;
               if (bVar11) {
                  *plVar1 = lVar8 + 1;
                  lVar9 = lVar8;
               }
               UNLOCK();
            } while ( !bVar11 );
            if (lVar9 != -1) {
               local_90 = *(long*)param_3;
            }
         }
         LAB_001029df:local_88 = 0;
         plVar1 = (long*)( *param_4 + -0x10 );
         if (*param_4 != 0) {
            do {
               lVar8 = *plVar1;
               if (lVar8 == 0) goto LAB_00102a17;
               LOCK();
               lVar9 = *plVar1;
               bVar11 = lVar8 == lVar9;
               if (bVar11) {
                  *plVar1 = lVar8 + 1;
                  lVar9 = lVar8;
               }
               UNLOCK();
            } while ( !bVar11 );
            if (lVar9 != -1) {
               local_88 = *param_4;
            }
         }
         LAB_00102a17:local_80 = 0;
         lVar8 = *param_5;
         if (lVar8 != 0) {
            plVar1 = (long*)( lVar8 + -0x10 );
            do {
               lVar9 = *plVar1;
               lVar8 = local_80;
               if (lVar9 == 0) goto LAB_00102a5f;
               LOCK();
               lVar5 = *plVar1;
               bVar11 = lVar9 == lVar5;
               if (bVar11) {
                  *plVar1 = lVar9 + 1;
                  lVar5 = lVar9;
               }
               UNLOCK();
            } while ( !bVar11 );
            if (lVar5 != -1) {
               local_80 = *param_5;
               lVar8 = local_80;
            }
         }
         LAB_00102a5f:local_68 = (char*)0x0;
         local_78 = param_7;
         if (local_98 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_98);
         }
         local_60 = 0;
         if (local_90 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)&local_90);
         }
         local_58 = 0;
         if (local_88 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_88);
         }
         local_50 = 0;
         if (lVar8 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, (CowData*)&local_80);
            lVar8 = local_50;
         }
         local_48 = param_7;
         if (*(long*)this_01 == 0) {
            lVar9 = 1;
         } else {
            lVar9 = *(long*)( *(long*)this_01 + -8 ) + 1;
         }
         iVar3 = CowData<OpenXRInteractionProfileMetadata::IOPath>::resize<false>(this_01, lVar9);
         if (iVar3 == 0) {
            if (*(long*)this_01 == 0) {
               lVar5 = -1;
               lVar9 = 0;
            } else {
               lVar9 = *(long*)( *(long*)this_01 + -8 );
               lVar5 = lVar9 + -1;
               if (-1 < lVar5) {
                  CowData<OpenXRInteractionProfileMetadata::IOPath>::_copy_on_write(this_01);
                  this_00 = (CowData<char32_t>*)( *(long*)this_01 + lVar5 * 0x28 );
                  if (*(char**)this_00 != local_68) {
                     CowData<char32_t>::_ref(this_00, (CowData*)&local_68);
                  }
                  if (*(long*)( this_00 + 8 ) != local_60) {
                     CowData<char32_t>::_ref(this_00 + 8, (CowData*)&local_60);
                  }
                  if (*(long*)( this_00 + 0x10 ) != local_58) {
                     CowData<char32_t>::_ref(this_00 + 0x10, (CowData*)&local_58);
                  }
                  if (*(long*)( this_00 + 0x18 ) != lVar8) {
                     CowData<char32_t>::_ref(this_00 + 0x18, (CowData*)&local_50);
                  }
                  *(undefined4*)( this_00 + 0x20 ) = param_7;
                  goto LAB_00102be3;
               }
            }
            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar5, lVar9, "p_index", "size()", "", false, false);
         } else {
            _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true");
         }
         LAB_00102be3:if (lVar8 != 0) {
            LOCK();
            plVar1 = (long*)( lVar8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_50 + -0x10 ), false);
            }
         }
         if (local_58 != 0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_58 + -0x10 ), false);
            }
         }
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_60 + -0x10 ), false);
            }
         }
         if (local_68 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static(local_68 + -0x10, false);
            }
         }
         if (local_80 != 0) {
            LOCK();
            plVar1 = (long*)( local_80 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_80 + -0x10 ), false);
            }
         }
         if (local_88 != 0) {
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_88 + -0x10 ), false);
            }
         }
         if (local_90 != 0) {
            LOCK();
            plVar1 = (long*)( local_90 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_90 + -0x10 ), false);
            }
         }
         if (local_98 != 0) {
            LOCK();
            plVar1 = (long*)( local_98 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_98 + -0x10 ), false);
            }
         }
      }
      pCVar10 = this_01 + 8;
      this_01 = this_01 + 0x28;
   } while ( pCVar4 != pCVar10 );
   goto LAB_00102800;
   while (true) {
      cVar2 = String::operator ==((String*)( lVar8 + 8 + lVar9 * 0x18 ), (String*)&local_68);
      if (cVar2 != '\0') {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<OpenXRInteractionProfileMetadata::InteractionProfile>::_copy_on_write((CowData<OpenXRInteractionProfileMetadata::InteractionProfile>*)( this + 0x1c0 ));
         pCVar10 = *(CowData<OpenXRInteractionProfileMetadata::IOPath>**)( this + 0x1c0 );
         CowData<OpenXRInteractionProfileMetadata::InteractionProfile>::_copy_on_write((CowData<OpenXRInteractionProfileMetadata::InteractionProfile>*)( this + 0x1c0 ));
         pCVar4 = *(CowData<OpenXRInteractionProfileMetadata::IOPath>**)( this + 0x1c0 );
         if (pCVar4 != (CowData<OpenXRInteractionProfileMetadata::IOPath>*)0x0) {
            pCVar4 = pCVar4 + *(long*)( pCVar4 + -8 ) * 0x28;
         }
         this_01 = pCVar10 + 0x20;
         if (pCVar10 == pCVar4) goto LAB_00102800;
         goto LAB_001028a0;
      }
      lVar8 = *(long*)( this + 0x1b0 );
      lVar9 = lVar9 + 1;
      if (lVar8 == 0) break;
      LAB_00102778:if (*(long*)( lVar8 + -8 ) <= lVar9) break;
   };
   LAB_001027a8:CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   operator+((char *)&
   local_68,(String*)"Unknown top level path ";
   pcVar6 = "Condition \"!has_top_level_path(p_toplevel_path)\" is true.";
   uVar7 = 0x5e;
   LAB_001027da:_err_print_error("register_io_path", "modules/openxr/action_map/openxr_interaction_profile_metadata.cpp", uVar7, pcVar6, (CowData<char32_t>*)&local_68, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   LAB_00102800:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* OpenXRInteractionProfileMetadata::_register_core_metadata() */void OpenXRInteractionProfileMetadata::_register_core_metadata(OpenXRInteractionProfileMetadata *this) {
   char *pcVar1;
   undefined *puVar2;
   undefined *puVar3;
   size_t sVar4;
   undefined **ppuVar5;
   undefined **ppuVar6;
   long in_FS_OFFSET;
   undefined4 uVar9;
   undefined8 uVar7;
   ulong uVar8;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   size_t local_60;
   undefined *local_58;
   undefined *puStack_50;
   undefined *local_48;
   long local_40;
   puVar3 = PTR__LC58_0010f2f0;
   puVar2 = PTR__LC57_0010f2e8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (char*)0x0;
   String::parse_latin1((String*)&local_68, "");
   local_70 = 0;
   String::parse_latin1((String*)&local_70, "/user/hand/left");
   local_78 = 0;
   String::parse_latin1((String*)&local_78, "Left hand controller");
   register_top_level_path(this, (String*)&local_78, (String*)&local_70, (String*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   local_68 = (char*)0x0;
   String::parse_latin1((String*)&local_68, "");
   local_70 = 0;
   String::parse_latin1((String*)&local_70, "/user/hand/right");
   local_78 = 0;
   String::parse_latin1((String*)&local_78, "Right hand controller");
   register_top_level_path(this, (String*)&local_78, (String*)&local_70, (String*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   local_68 = (char*)0x0;
   String::parse_latin1((String*)&local_68, "");
   local_70 = 0;
   String::parse_latin1((String*)&local_70, "/user/head");
   local_78 = 0;
   String::parse_latin1((String*)&local_78, "Head");
   register_top_level_path(this, (String*)&local_78, (String*)&local_70, (String*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   local_68 = (char*)0x0;
   String::parse_latin1((String*)&local_68, "");
   local_70 = 0;
   String::parse_latin1((String*)&local_70, "/user/gamepad");
   local_78 = 0;
   String::parse_latin1((String*)&local_78, "Gamepad");
   register_top_level_path(this, (String*)&local_78, (String*)&local_70, (String*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   local_68 = (char*)0x0;
   String::parse_latin1((String*)&local_68, "");
   local_70 = 0;
   String::parse_latin1((String*)&local_70, "/user/treadmill");
   local_78 = 0;
   String::parse_latin1((String*)&local_78, "Treadmill");
   register_top_level_path(this, (String*)&local_78, (String*)&local_70, (String*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   local_98 = 0;
   String::parse_latin1((String*)&local_98, "/interaction_profiles/khr/simple_controller");
   local_68 = (char*)0x0;
   String::parse_latin1((String*)&local_68, "");
   local_70 = 0;
   String::parse_latin1((String*)&local_70, "Simple controller");
   register_interaction_profile(this, (String*)&local_70, (String*)&local_98, (String*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   ppuVar6 = &local_58;
   local_58 = puVar2;
   puStack_50 = puVar3;
   ppuVar5 = ppuVar6;
   do {
      local_90 = 0;
      pcVar1 = *ppuVar5;
      sVar4 = 0;
      if (pcVar1 != (char*)0x0) {
         sVar4 = strlen(pcVar1);
      }
      local_68 = pcVar1;
      local_60 = sVar4;
      String::parse_latin1((StrRange*)&local_90);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/grip/pose";
      local_88 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Grip pose";
      local_78 = 0;
      local_60 = 9;
      String::parse_latin1((StrRange*)&local_78);
      uVar9 = 0;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, 3);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/aim/pose";
      local_88 = 0;
      local_60 = 0xf;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Aim pose";
      local_78 = 0;
      local_60 = 8;
      String::parse_latin1((StrRange*)&local_78);
      uVar7 = CONCAT44(uVar9, 3);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar7);
      uVar9 = ( undefined4 )((ulong)uVar7 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_palm_pose";
      local_70 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/palm_ext/pose";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Palm pose";
      local_78 = 0;
      local_60 = 9;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = CONCAT44(uVar9, 3);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/menu/click";
      local_88 = 0;
      local_60 = 0x11;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Menu click";
      local_78 = 0;
      local_60 = 10;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/select/click";
      local_88 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Select click";
      local_78 = 0;
      local_60 = 0xc;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      uVar9 = ( undefined4 )(uVar8 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/output/haptic";
      local_88 = 0;
      local_60 = 0xe;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Haptic output";
      local_78 = 0;
      local_60 = 0xd;
      String::parse_latin1((StrRange*)&local_78);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, CONCAT44(uVar9, 4));
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      ppuVar5 = ppuVar5 + 1;
   } while ( ppuVar5 != &local_48 );
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   local_98 = 0;
   String::parse_latin1((String*)&local_98, "/interaction_profiles/htc/vive_controller");
   local_68 = (char*)0x0;
   String::parse_latin1((String*)&local_68, "");
   local_70 = 0;
   String::parse_latin1((String*)&local_70, "HTC Vive wand");
   register_interaction_profile(this, (String*)&local_70, (String*)&local_98, (String*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   local_58 = puVar2;
   puStack_50 = puVar3;
   ppuVar5 = ppuVar6;
   do {
      local_90 = 0;
      pcVar1 = *ppuVar5;
      sVar4 = 0;
      if (pcVar1 != (char*)0x0) {
         sVar4 = strlen(pcVar1);
      }
      local_68 = pcVar1;
      local_60 = sVar4;
      String::parse_latin1((StrRange*)&local_90);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/grip/pose";
      local_88 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Grip pose";
      local_78 = 0;
      local_60 = 9;
      String::parse_latin1((StrRange*)&local_78);
      uVar9 = 0;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, 3);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/aim/pose";
      local_88 = 0;
      local_60 = 0xf;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Aim pose";
      local_78 = 0;
      local_60 = 8;
      String::parse_latin1((StrRange*)&local_78);
      uVar7 = CONCAT44(uVar9, 3);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar7);
      uVar9 = ( undefined4 )((ulong)uVar7 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_palm_pose";
      local_70 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/palm_ext/pose";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Palm pose";
      local_78 = 0;
      local_60 = 9;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = CONCAT44(uVar9, 3);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/menu/click";
      local_88 = 0;
      local_60 = 0x11;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Menu click";
      local_78 = 0;
      local_60 = 10;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/system/click";
      local_88 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "System click";
      local_78 = 0;
      local_60 = 0xc;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      uVar9 = ( undefined4 )(uVar8 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trigger/value";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trigger";
      local_78 = 0;
      local_60 = 7;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = CONCAT44(uVar9, 1);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trigger/click";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trigger click";
      local_78 = 0;
      local_60 = 0xd;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/squeeze/click";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Squeeze click";
      local_78 = 0;
      local_60 = 0xd;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      uVar9 = ( undefined4 )(uVar8 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad";
      local_88 = 0;
      local_60 = 0xf;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad";
      local_78 = 0;
      local_60 = 8;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = CONCAT44(uVar9, 2);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad/click";
      local_88 = 0;
      local_60 = 0x15;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad click";
      local_78 = 0;
      local_60 = 0xe;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad/touch";
      local_88 = 0;
      local_60 = 0x15;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad touch";
      local_78 = 0;
      local_60 = 0xe;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad/dpad_up";
      local_88 = 0;
      local_60 = 0x17;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad Dpad Up";
      local_78 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad/dpad_down";
      local_88 = 0;
      local_60 = 0x19;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad Dpad Down";
      local_78 = 0;
      local_60 = 0x12;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad/dpad_left";
      local_88 = 0;
      local_60 = 0x19;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad Dpad Left";
      local_78 = 0;
      local_60 = 0x12;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad/dpad_right";
      local_88 = 0;
      local_60 = 0x1a;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad Dpad Right";
      local_78 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad/dpad_center";
      local_88 = 0;
      local_60 = 0x1b;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad Dpad Center";
      local_78 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      uVar9 = ( undefined4 )(uVar8 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/output/haptic";
      local_88 = 0;
      local_60 = 0xe;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Haptic output";
      local_78 = 0;
      local_60 = 0xd;
      String::parse_latin1((StrRange*)&local_78);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, CONCAT44(uVar9, 4));
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      ppuVar5 = ppuVar5 + 1;
   } while ( ppuVar5 != &local_48 );
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   local_98 = 0;
   String::parse_latin1((String*)&local_98, "/interaction_profiles/microsoft/motion_controller");
   local_68 = (char*)0x0;
   String::parse_latin1((String*)&local_68, "");
   local_70 = 0;
   String::parse_latin1((String*)&local_70, "MS Motion controller");
   register_interaction_profile(this, (String*)&local_70, (String*)&local_98, (String*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   local_58 = puVar2;
   puStack_50 = puVar3;
   ppuVar5 = ppuVar6;
   do {
      local_90 = 0;
      pcVar1 = *ppuVar5;
      sVar4 = 0;
      if (pcVar1 != (char*)0x0) {
         sVar4 = strlen(pcVar1);
      }
      local_68 = pcVar1;
      local_60 = sVar4;
      String::parse_latin1((StrRange*)&local_90);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/grip/pose";
      local_88 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Grip pose";
      local_78 = 0;
      local_60 = 9;
      String::parse_latin1((StrRange*)&local_78);
      uVar9 = 0;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, 3);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/aim/pose";
      local_88 = 0;
      local_60 = 0xf;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Aim pose";
      local_78 = 0;
      local_60 = 8;
      String::parse_latin1((StrRange*)&local_78);
      uVar7 = CONCAT44(uVar9, 3);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar7);
      uVar9 = ( undefined4 )((ulong)uVar7 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_palm_pose";
      local_70 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/palm_ext/pose";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Palm pose";
      local_78 = 0;
      local_60 = 9;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = CONCAT44(uVar9, 3);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/menu/click";
      local_88 = 0;
      local_60 = 0x11;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Menu click";
      local_78 = 0;
      local_60 = 10;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      uVar9 = ( undefined4 )(uVar8 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trigger/value";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trigger";
      local_78 = 0;
      local_60 = 7;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = CONCAT44(uVar9, 1);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trigger/click";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trigger click";
      local_78 = 0;
      local_60 = 0xd;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/squeeze/click";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Squeeze click";
      local_78 = 0;
      local_60 = 0xd;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      uVar9 = ( undefined4 )(uVar8 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/thumbstick";
      local_88 = 0;
      local_60 = 0x11;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Thumbstick";
      local_78 = 0;
      local_60 = 10;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = CONCAT44(uVar9, 2);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/thumbstick/click";
      local_88 = 0;
      local_60 = 0x17;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Thumbstick click";
      local_78 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/thumbstick/dpad_up";
      local_88 = 0;
      local_60 = 0x19;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Thumbstick Dpad Up";
      local_78 = 0;
      local_60 = 0x12;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/thumbstick/dpad_down";
      local_88 = 0;
      local_60 = 0x1b;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Thumbstick Dpad Down";
      local_78 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/thumbstick/dpad_left";
      local_88 = 0;
      local_60 = 0x1b;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Thumbstick Dpad Left";
      local_78 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/thumbstick/dpad_right";
      local_88 = 0;
      local_60 = 0x1c;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Thumbstick Dpad Right";
      local_78 = 0;
      local_60 = 0x15;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      uVar9 = ( undefined4 )(uVar8 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad";
      local_88 = 0;
      local_60 = 0xf;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad";
      local_78 = 0;
      local_60 = 8;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = CONCAT44(uVar9, 2);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad/click";
      local_88 = 0;
      local_60 = 0x15;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad click";
      local_78 = 0;
      local_60 = 0xe;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad/touch";
      local_88 = 0;
      local_60 = 0x15;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad touch";
      local_78 = 0;
      local_60 = 0xe;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad/dpad_up";
      local_88 = 0;
      local_60 = 0x17;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad Dpad Up";
      local_78 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad/dpad_down";
      local_88 = 0;
      local_60 = 0x19;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad Dpad Down";
      local_78 = 0;
      local_60 = 0x12;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad/dpad_left";
      local_88 = 0;
      local_60 = 0x19;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad Dpad Left";
      local_78 = 0;
      local_60 = 0x12;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad/dpad_right";
      local_88 = 0;
      local_60 = 0x1a;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad Dpad Right";
      local_78 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad/dpad_center";
      local_88 = 0;
      local_60 = 0x1b;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad Dpad Center";
      local_78 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      uVar9 = ( undefined4 )(uVar8 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/output/haptic";
      local_88 = 0;
      local_60 = 0xe;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Haptic output";
      local_78 = 0;
      local_60 = 0xd;
      String::parse_latin1((StrRange*)&local_78);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, CONCAT44(uVar9, 4));
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      ppuVar5 = ppuVar5 + 1;
   } while ( ppuVar5 != &local_48 );
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   local_68 = "/interaction_profiles/oculus/touch_controller";
   local_98 = 0;
   local_60 = 0x2d;
   String::parse_latin1((StrRange*)&local_98);
   local_68 = (char*)0x0;
   String::parse_latin1((String*)&local_68, "");
   local_70 = 0;
   String::parse_latin1((String*)&local_70, "Touch controller");
   register_interaction_profile(this, (String*)&local_70, (String*)&local_98, (String*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   local_58 = puVar2;
   puStack_50 = puVar3;
   ppuVar5 = ppuVar6;
   do {
      local_90 = 0;
      pcVar1 = *ppuVar5;
      sVar4 = 0;
      if (pcVar1 != (char*)0x0) {
         sVar4 = strlen(pcVar1);
      }
      local_68 = pcVar1;
      local_60 = sVar4;
      String::parse_latin1((StrRange*)&local_90);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/grip/pose";
      local_88 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Grip pose";
      local_78 = 0;
      local_60 = 9;
      String::parse_latin1((StrRange*)&local_78);
      uVar9 = 0;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, 3);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/aim/pose";
      local_88 = 0;
      local_60 = 0xf;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Aim pose";
      local_78 = 0;
      local_60 = 8;
      String::parse_latin1((StrRange*)&local_78);
      uVar7 = CONCAT44(uVar9, 3);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar7);
      uVar9 = ( undefined4 )((ulong)uVar7 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_palm_pose";
      local_70 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/palm_ext/pose";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Palm pose";
      local_78 = 0;
      local_60 = 9;
      String::parse_latin1((StrRange*)&local_78);
      uVar7 = CONCAT44(uVar9, 3);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar7);
      uVar9 = ( undefined4 )((ulong)uVar7 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trigger/value";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trigger";
      local_78 = 0;
      local_60 = 7;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = CONCAT44(uVar9, 1);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trigger/touch";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trigger touch";
      local_78 = 0;
      local_60 = 0xd;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      uVar9 = ( undefined4 )(uVar8 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/squeeze/value";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Squeeze";
      local_78 = 0;
      local_60 = 7;
      String::parse_latin1((StrRange*)&local_78);
      uVar7 = CONCAT44(uVar9, 1);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar7);
      uVar9 = ( undefined4 )((ulong)uVar7 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/thumbstick";
      local_88 = 0;
      local_60 = 0x11;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Thumbstick";
      local_78 = 0;
      local_60 = 10;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = CONCAT44(uVar9, 2);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/thumbstick/click";
      local_88 = 0;
      local_60 = 0x17;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Thumbstick click";
      local_78 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/thumbstick/touch";
      local_88 = 0;
      local_60 = 0x17;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Thumbstick touch";
      local_78 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/thumbstick/dpad_up";
      local_88 = 0;
      local_60 = 0x19;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Thumbstick Dpad Up";
      local_78 = 0;
      local_60 = 0x12;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/thumbstick/dpad_down";
      local_88 = 0;
      local_60 = 0x1b;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Thumbstick Dpad Down";
      local_78 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/thumbstick/dpad_left";
      local_88 = 0;
      local_60 = 0x1b;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Thumbstick Dpad Left";
      local_78 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/thumbstick/dpad_right";
      local_88 = 0;
      local_60 = 0x1c;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Thumbstick Dpad Right";
      local_78 = 0;
      local_60 = 0x15;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/thumbrest/touch";
      local_88 = 0;
      local_60 = 0x16;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Thumbrest touch";
      local_78 = 0;
      local_60 = 0xf;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      uVar9 = ( undefined4 )(uVar8 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/output/haptic";
      local_88 = 0;
      local_60 = 0xe;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Haptic output";
      local_78 = 0;
      local_60 = 0xd;
      String::parse_latin1((StrRange*)&local_78);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, CONCAT44(uVar9, 4));
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      ppuVar5 = ppuVar5 + 1;
   } while ( ppuVar5 != &local_48 );
   local_68 = (char*)0x0;
   String::parse_latin1((String*)&local_68, "");
   local_70 = 0;
   String::parse_latin1((String*)&local_70, "/user/hand/left/input/menu/click");
   local_78 = 0;
   String::parse_latin1((String*)&local_78, "/user/hand/left");
   local_80 = 0;
   String::parse_latin1((String*)&local_80, "Menu click");
   uVar8 = 0;
   register_io_path(this, (String*)&local_98, (String*)&local_80, (String*)&local_78, (String*)&local_70, (String*)&local_68, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   local_68 = (char*)0x0;
   String::parse_latin1((String*)&local_68, "");
   local_70 = 0;
   String::parse_latin1((String*)&local_70, "/user/hand/right/input/system/click");
   local_78 = 0;
   String::parse_latin1((String*)&local_78, "/user/hand/right");
   local_80 = 0;
   String::parse_latin1((String*)&local_80, "System click");
   uVar8 = uVar8 & 0xffffffff00000000;
   register_io_path(this, (String*)&local_98, (String*)&local_80, (String*)&local_78, (String*)&local_70, (String*)&local_68, uVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   local_70 = 0;
   String::parse_latin1((String*)&local_70, "");
   local_68 = "/user/hand/left/input/x/click";
   local_78 = 0;
   local_60 = 0x1d;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   String::parse_latin1((String*)&local_80, "/user/hand/left");
   local_68 = "X click";
   local_88 = 0;
   local_60 = 7;
   String::parse_latin1((StrRange*)&local_88);
   uVar8 = uVar8 & 0xffffffff00000000;
   register_io_path(this, (String*)&local_98, (StrRange*)&local_88, (String*)&local_80, (String*)&local_78, (String*)&local_70, uVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   local_70 = 0;
   String::parse_latin1((String*)&local_70, "");
   local_68 = "/user/hand/left/input/x/touch";
   local_78 = 0;
   local_60 = 0x1d;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   String::parse_latin1((String*)&local_80, "/user/hand/left");
   local_68 = "X touch";
   local_88 = 0;
   local_60 = 7;
   String::parse_latin1((StrRange*)&local_88);
   uVar8 = uVar8 & 0xffffffff00000000;
   register_io_path(this, (String*)&local_98, (StrRange*)&local_88, (String*)&local_80, (String*)&local_78, (String*)&local_70, uVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   local_70 = 0;
   String::parse_latin1((String*)&local_70, "");
   local_68 = "/user/hand/left/input/y/click";
   local_78 = 0;
   local_60 = 0x1d;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   String::parse_latin1((String*)&local_80, "/user/hand/left");
   local_68 = "Y click";
   local_88 = 0;
   local_60 = 7;
   String::parse_latin1((StrRange*)&local_88);
   uVar8 = uVar8 & 0xffffffff00000000;
   register_io_path(this, (String*)&local_98, (StrRange*)&local_88, (String*)&local_80, (String*)&local_78, (String*)&local_70, uVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   local_70 = 0;
   String::parse_latin1((String*)&local_70, "");
   local_78 = 0;
   String::parse_latin1((String*)&local_78, "/user/hand/left/input/y/touch");
   local_80 = 0;
   String::parse_latin1((String*)&local_80, "/user/hand/left");
   local_68 = "Y touch";
   local_88 = 0;
   local_60 = 7;
   String::parse_latin1((StrRange*)&local_88);
   uVar8 = uVar8 & 0xffffffff00000000;
   register_io_path(this, (String*)&local_98, (StrRange*)&local_88, (String*)&local_80, (String*)&local_78, (String*)&local_70, uVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   local_70 = 0;
   String::parse_latin1((String*)&local_70, "");
   local_68 = "/user/hand/right/input/a/click";
   local_78 = 0;
   local_60 = 0x1e;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   String::parse_latin1((String*)&local_80, "/user/hand/right");
   local_68 = "A click";
   local_88 = 0;
   local_60 = 7;
   String::parse_latin1((StrRange*)&local_88);
   uVar8 = uVar8 & 0xffffffff00000000;
   register_io_path(this, (String*)&local_98, (StrRange*)&local_88, (String*)&local_80, (String*)&local_78, (String*)&local_70, uVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   local_70 = 0;
   String::parse_latin1((String*)&local_70, "");
   local_68 = "/user/hand/right/input/a/touch";
   local_78 = 0;
   local_60 = 0x1e;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   String::parse_latin1((String*)&local_80, "/user/hand/right");
   local_68 = "A touch";
   local_88 = 0;
   local_60 = 7;
   String::parse_latin1((StrRange*)&local_88);
   uVar8 = uVar8 & 0xffffffff00000000;
   register_io_path(this, (String*)&local_98, (StrRange*)&local_88, (String*)&local_80, (String*)&local_78, (String*)&local_70, uVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   local_70 = 0;
   String::parse_latin1((String*)&local_70, "");
   local_68 = "/user/hand/right/input/b/click";
   local_78 = 0;
   local_60 = 0x1e;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   String::parse_latin1((String*)&local_80, "/user/hand/right");
   local_68 = "B click";
   local_88 = 0;
   local_60 = 7;
   String::parse_latin1((StrRange*)&local_88);
   uVar8 = uVar8 & 0xffffffff00000000;
   register_io_path(this, (String*)&local_98, (StrRange*)&local_88, (String*)&local_80, (String*)&local_78, (String*)&local_70, uVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   local_70 = 0;
   String::parse_latin1((String*)&local_70, "");
   local_68 = "/user/hand/right/input/b/touch";
   local_78 = 0;
   local_60 = 0x1e;
   String::parse_latin1((StrRange*)&local_78);
   local_68 = "/user/hand/right";
   local_80 = 0;
   local_60 = 0x10;
   String::parse_latin1((StrRange*)&local_80);
   local_68 = (char*)0x0;
   String::parse_latin1((String*)&local_68, "B touch");
   register_io_path(this, (String*)&local_98, (String*)&local_68, (String*)&local_80, (String*)&local_78, (String*)&local_70, uVar8 & 0xffffffff00000000);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   local_98 = 0;
   String::parse_latin1((String*)&local_98, "/interaction_profiles/valve/index_controller");
   local_68 = (char*)0x0;
   String::parse_latin1((String*)&local_68, "");
   local_70 = 0;
   String::parse_latin1((String*)&local_70, "Index controller");
   register_interaction_profile(this, (String*)&local_70, (String*)&local_98, (String*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   local_58 = puVar2;
   puStack_50 = puVar3;
   do {
      local_90 = 0;
      pcVar1 = *ppuVar6;
      sVar4 = 0;
      if (pcVar1 != (char*)0x0) {
         sVar4 = strlen(pcVar1);
      }
      local_68 = pcVar1;
      local_60 = sVar4;
      String::parse_latin1((StrRange*)&local_90);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/grip/pose";
      local_88 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Grip pose";
      local_78 = 0;
      local_60 = 9;
      String::parse_latin1((StrRange*)&local_78);
      uVar9 = 0;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, 3);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/aim/pose";
      local_88 = 0;
      local_60 = 0xf;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Aim pose";
      local_78 = 0;
      local_60 = 8;
      String::parse_latin1((StrRange*)&local_78);
      uVar7 = CONCAT44(uVar9, 3);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar7);
      uVar9 = ( undefined4 )((ulong)uVar7 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_palm_pose";
      local_70 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/palm_ext/pose";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Palm pose";
      local_78 = 0;
      local_60 = 9;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = CONCAT44(uVar9, 3);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/system/click";
      local_88 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "System click";
      local_78 = 0;
      local_60 = 0xc;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/a/click";
      local_88 = 0;
      local_60 = 0xe;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "A click";
      local_78 = 0;
      local_60 = 7;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/a/touch";
      local_88 = 0;
      local_60 = 0xe;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "A touch";
      local_78 = 0;
      local_60 = 7;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/b/click";
      local_88 = 0;
      local_60 = 0xe;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "B click";
      local_78 = 0;
      local_60 = 7;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/b/touch";
      local_88 = 0;
      local_60 = 0xe;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "B touch";
      local_78 = 0;
      local_60 = 7;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      uVar9 = ( undefined4 )(uVar8 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trigger/value";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trigger";
      local_78 = 0;
      local_60 = 7;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = CONCAT44(uVar9, 1);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trigger/click";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trigger click";
      local_78 = 0;
      local_60 = 0xd;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trigger/touch";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trigger touch";
      local_78 = 0;
      local_60 = 0xd;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      uVar9 = ( undefined4 )(uVar8 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/squeeze/value";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Squeeze";
      local_78 = 0;
      local_60 = 7;
      String::parse_latin1((StrRange*)&local_78);
      uVar7 = CONCAT44(uVar9, 1);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar7);
      uVar9 = ( undefined4 )((ulong)uVar7 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/squeeze/force";
      local_88 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Squeeze force";
      local_78 = 0;
      local_60 = 0xd;
      String::parse_latin1((StrRange*)&local_78);
      uVar7 = CONCAT44(uVar9, 1);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar7);
      uVar9 = ( undefined4 )((ulong)uVar7 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/thumbstick";
      local_88 = 0;
      local_60 = 0x11;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Thumbstick";
      local_78 = 0;
      local_60 = 10;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = CONCAT44(uVar9, 2);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/thumbstick/click";
      local_88 = 0;
      local_60 = 0x17;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Thumbstick click";
      local_78 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/thumbstick/touch";
      local_88 = 0;
      local_60 = 0x17;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Thumbstick touch";
      local_78 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/thumbstick/dpad_up";
      local_88 = 0;
      local_60 = 0x19;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Thumbstick Dpad Up";
      local_78 = 0;
      local_60 = 0x12;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/thumbstick/dpad_down";
      local_88 = 0;
      local_60 = 0x1b;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Thumbstick Dpad Down";
      local_78 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/thumbstick/dpad_left";
      local_88 = 0;
      local_60 = 0x1b;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Thumbstick Dpad Left";
      local_78 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/thumbstick/dpad_right";
      local_88 = 0;
      local_60 = 0x1c;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Thumbstick Dpad Right";
      local_78 = 0;
      local_60 = 0x15;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      uVar9 = ( undefined4 )(uVar8 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad";
      local_88 = 0;
      local_60 = 0xf;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad";
      local_78 = 0;
      local_60 = 8;
      String::parse_latin1((StrRange*)&local_78);
      uVar7 = CONCAT44(uVar9, 2);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar7);
      uVar9 = ( undefined4 )((ulong)uVar7 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad/force";
      local_88 = 0;
      local_60 = 0x15;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad force";
      local_78 = 0;
      local_60 = 0xe;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = CONCAT44(uVar9, 1);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad/touch";
      local_88 = 0;
      local_60 = 0x15;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad touch";
      local_78 = 0;
      local_60 = 0xe;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad/dpad_up";
      local_88 = 0;
      local_60 = 0x17;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad Dpad Up";
      local_78 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad/dpad_down";
      local_88 = 0;
      local_60 = 0x19;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad Dpad Down";
      local_78 = 0;
      local_60 = 0x12;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad/dpad_left";
      local_88 = 0;
      local_60 = 0x19;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad Dpad Left";
      local_78 = 0;
      local_60 = 0x12;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad/dpad_right";
      local_88 = 0;
      local_60 = 0x1a;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad Dpad Right";
      local_78 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "XR_EXT_dpad_binding";
      local_70 = 0;
      local_60 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/input/trackpad/dpad_center";
      local_88 = 0;
      local_60 = 0x1b;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Trackpad Dpad Center";
      local_78 = 0;
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_78);
      uVar8 = uVar8 & 0xffffffff00000000;
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, uVar8);
      uVar9 = ( undefined4 )(uVar8 >> 0x20);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "/output/haptic";
      local_88 = 0;
      local_60 = 0xe;
      String::parse_latin1((StrRange*)&local_88);
      String::operator +((String*)&local_80, (String*)&local_90);
      local_68 = "Haptic output";
      local_78 = 0;
      local_60 = 0xd;
      String::parse_latin1((StrRange*)&local_78);
      register_io_path(this, (String*)&local_98, (String*)&local_78, (StrRange*)&local_90, (String*)&local_80, (String*)&local_70, CONCAT44(uVar9, 4));
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      ppuVar6 = ppuVar6 + 1;
   } while ( &local_48 != ppuVar6 );
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* OpenXRInteractionProfileMetadata::OpenXRInteractionProfileMetadata() */void OpenXRInteractionProfileMetadata::OpenXRInteractionProfileMetadata(OpenXRInteractionProfileMetadata *this) {
   Object::Object((Object*)this);
   *(undefined8*)( this + 0x1a0 ) = 2;
   *(undefined***)this = &PTR__initialize_classv_0010ee90;
   *(undefined8*)( this + 0x1b0 ) = 0;
   *(undefined8*)( this + 0x1c0 ) = 0;
   *(undefined1(*) [16])( this + 0x180 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 400 ) = (undefined1[16])0x0;
   singleton = this;
   _register_core_metadata(this);
   OpenXRAPI::register_extension_metadata();
   return;
}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }
   return;
}/* Object::get_save_class() const */void Object::get_save_class(void) {
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
}/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}/* OpenXRInteractionProfileMetadata::is_class_ptr(void*) const */uint OpenXRInteractionProfileMetadata::is_class_ptr(OpenXRInteractionProfileMetadata *this, void *param_1) {
   return (uint)CONCAT71(0x10f1, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f1, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}/* OpenXRInteractionProfileMetadata::_getv(StringName const&, Variant&) const */undefined8 OpenXRInteractionProfileMetadata::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}/* OpenXRInteractionProfileMetadata::_setv(StringName const&, Variant const&) */undefined8 OpenXRInteractionProfileMetadata::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}/* OpenXRInteractionProfileMetadata::_validate_propertyv(PropertyInfo&) const */void OpenXRInteractionProfileMetadata::_validate_propertyv(PropertyInfo *param_1) {
   return;
}/* OpenXRInteractionProfileMetadata::_property_can_revertv(StringName const&) const */undefined8 OpenXRInteractionProfileMetadata::_property_can_revertv(StringName *param_1) {
   return 0;
}/* OpenXRInteractionProfileMetadata::_property_get_revertv(StringName const&, Variant&) const */undefined8 OpenXRInteractionProfileMetadata::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}/* OpenXRInteractionProfileMetadata::_notificationv(int, bool) */void OpenXRInteractionProfileMetadata::_notificationv(int param_1, bool param_2) {
   return;
}/* MethodBindT<String const&, String const&, String const&, String const&, String const&,
   OpenXRAction::ActionType>::get_argument_meta(int) const */undefined8 MethodBindT<String_const&,String_const&,String_const&,String_const&,String_const&,OpenXRAction::ActionType>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<String const&, String const&, String const&>::get_argument_meta(int) const */undefined8 MethodBindT<String_const&,String_const&,String_const&>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<String const&, String const&>::_gen_argument_type(int) const */long MethodBindT<String_const&,String_const&>::_gen_argument_type(MethodBindT<String_const&,String_const&> *this, int param_1) {
   return ( ulong )((uint)param_1 < 2) << 2;
}/* MethodBindT<String const&, String const&>::get_argument_meta(int) const */undefined8 MethodBindT<String_const&,String_const&>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<String const&, String const&, String const&, String const&, String const&,
   OpenXRAction::ActionType>::_gen_argument_type(int) const */char MethodBindT<String_const&,String_const&,String_const&,String_const&,String_const&,OpenXRAction::ActionType>::_gen_argument_type(MethodBindT<String_const&,String_const&,String_const&,String_const&,String_const&,OpenXRAction::ActionType> *this, int param_1) {
   char cVar1;
   cVar1 = '\0';
   if ((uint)param_1 < 6) {
      cVar1 = ( param_1 != 5 ) * '\x02' + '\x02';
   }
   return cVar1;
}/* MethodBindT<String const&, String const&>::~MethodBindT() */void MethodBindT<String_const&,String_const&>::~MethodBindT(MethodBindT<String_const&,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010eff0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<String const&, String const&>::~MethodBindT() */void MethodBindT<String_const&,String_const&>::~MethodBindT(MethodBindT<String_const&,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010eff0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<String const&, String const&, String const&>::~MethodBindT() */void MethodBindT<String_const&,String_const&,String_const&>::~MethodBindT(MethodBindT<String_const&,String_const&,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010f050;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<String const&, String const&, String const&>::~MethodBindT() */void MethodBindT<String_const&,String_const&,String_const&>::~MethodBindT(MethodBindT<String_const&,String_const&,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010f050;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<String const&, String const&, String const&, String const&, String const&,
   OpenXRAction::ActionType>::~MethodBindT() */void MethodBindT<String_const&,String_const&,String_const&,String_const&,String_const&,OpenXRAction::ActionType>::~MethodBindT(MethodBindT<String_const&,String_const&,String_const&,String_const&,String_const&,OpenXRAction::ActionType> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010f0b0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<String const&, String const&, String const&, String const&, String const&,
   OpenXRAction::ActionType>::~MethodBindT() */void MethodBindT<String_const&,String_const&,String_const&,String_const&,String_const&,OpenXRAction::ActionType>::~MethodBindT(MethodBindT<String_const&,String_const&,String_const&,String_const&,String_const&,OpenXRAction::ActionType> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010f0b0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<String const&, String const&, String const&>::_gen_argument_type(int) const */long MethodBindT<String_const&,String_const&,String_const&>::_gen_argument_type(MethodBindT<String_const&,String_const&,String_const&> *this, int param_1) {
   return ( ulong )((uint)param_1 < 3) << 2;
}/* OpenXRInteractionProfileMetadata::_get_class_namev() const */undefined8 *OpenXRInteractionProfileMetadata::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00109123:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00109123;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "OpenXRInteractionProfileMetadata");
         goto LAB_0010918e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "OpenXRInteractionProfileMetadata");
   LAB_0010918e:return &_get_class_namev();
}/* OpenXRInteractionProfileMetadata::get_class() const */void OpenXRInteractionProfileMetadata::get_class(void) {
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
   } else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      } else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }
         } else {
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
}/* OpenXRInteractionProfileMetadata::is_class(String const&) const */undefined8 OpenXRInteractionProfileMetadata::is_class(OpenXRInteractionProfileMetadata *this, String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char *pcVar4;
   long lVar5;
   char cVar6;
   long lVar7;
   undefined8 uVar8;
   long in_FS_OFFSET;
   bool bVar9;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar5 = *(long*)( lVar2 + 0x20 );
      if (lVar5 == 0) {
         local_60 = 0;
      } else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_0010931f;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }
                  UNLOCK();
               } while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }
            }
         } else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }
      }
      LAB_0010931f:cVar6 = String::operator ==(param_1, (String*)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }
      }
      if (cVar6 != '\0') goto LAB_001093d3;
   }
   cVar6 = String::operator ==(param_1, "OpenXRInteractionProfileMetadata");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         } else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
               }
            } else {
               local_50 = strlen(pcVar4);
               local_58 = pcVar4;
               String::parse_latin1((StrRange*)&local_60);
            }
         }
         cVar6 = String::operator ==(param_1, (String*)&local_60);
         lVar5 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }
         }
         if (cVar6 != '\0') goto LAB_001093d3;
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar8 = String::operator ==(param_1, "Object");
         return uVar8;
      }
   } else {
      LAB_001093d3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* OpenXRInteractionProfileMetadata::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */void OpenXRInteractionProfileMetadata::_get_property_listv(List *param_1, bool param_2) {
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
   local_78 = "OpenXRInteractionProfileMetadata";
   local_70 = 0x20;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "OpenXRInteractionProfileMetadata";
   local_98 = 0;
   local_70 = 0x20;
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
      LAB_00109678:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00109678;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00109696;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)pLVar6;
   joined_r0x00109696:if (lVar2 == 0) {
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
   StringName::StringName((StringName*)&local_78, "OpenXRInteractionProfileMetadata", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar6, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* String::parse_latin1(char const*) */void String::parse_latin1(String *this, char *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (char*)0x0) {
      strlen(param_1);
   }
   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this == 0) {
      return;
   }
   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) {
      *(undefined8*)this = 0;
      return;
   }
   lVar2 = *(long*)this;
   *(undefined8*)this = 0;
   Memory::free_static((void*)( lVar2 + -0x10 ), false);
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::operator[](String const&) */undefined1 * __thiscallHashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator [](HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>> * this, String * param_1) * puVar1 ;undefined8 *puVar2void *pvVar3void *__slong lVar4undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]undefined1(*pauVar37)[16];char cVar38uint uVar39uint uVar40ulong uVar41undefined8 uVar42void *__s_00undefined1(*pauVar43)[16];void *pvVar44int iVar45long lVar46long lVar47ulong uVar48undefined8 uVar49uint uVar50uint uVar51ulong uVar52long lVar53uint uVar54uint uVar55undefined1(*pauVar56)[16];long in_FS_OFFSETundefined8 local_70undefined1 local_68[16]long local_58undefined8 local_50[2]long local_40uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );if (*(long*)( this + 8 ) == 0) {
   LAB_0010ad3c:local_70 = 0;
   uVar48 = (ulong)uVar55;
   uVar41 = uVar48 * 4;
   uVar52 = uVar48 * 8;
   uVar42 = Memory::alloc_static(uVar41, false);
   *(undefined8*)( this + 0x10 ) = uVar42;
   pvVar44 = (void*)Memory::alloc_static(uVar52, false);
   *(void**)( this + 8 ) = pvVar44;
   if (uVar55 != 0) {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)pvVar44 + uVar52 ) ) && ( pvVar44 < (void*)( (long)pvVar3 + uVar41 ) )) {
         uVar41 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar41 * 4 ) = 0;
            *(undefined8*)( (long)pvVar44 + uVar41 * 8 ) = 0;
            uVar41 = uVar41 + 1;
         } while ( uVar48 != uVar41 );
      } else {
         memset(pvVar3, 0, uVar41);
         memset(pvVar44, 0, uVar52);
      }
      LAB_0010ac25:iVar45 = *(int*)( this + 0x2c );
      if (iVar45 != 0) {
         LAB_0010ac35:uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar51 = String::hash();
         uVar41 = CONCAT44(0, uVar39);
         lVar53 = *(long*)( this + 0x10 );
         uVar40 = 1;
         if (uVar51 != 0) {
            uVar40 = uVar51;
         }
         uVar54 = 0;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = (ulong)uVar40 * lVar4;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar41;
         lVar46 = SUB168(auVar17 * auVar33, 8);
         uVar51 = *(uint*)( lVar53 + lVar46 * 4 );
         uVar50 = SUB164(auVar17 * auVar33, 8);
         if (uVar51 != 0) {
            do {
               if (uVar40 == uVar51) {
                  cVar38 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar46 * 8 ) + 0x10 ), param_1);
                  if (cVar38 != '\0') {
                     pauVar43 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar50 * 8 );
                     if (*(long*)( pauVar43[1] + 8 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar43[1] + 8 ), (CowData*)&local_70);
                        pauVar43 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar50 * 8 );
                     }
                     goto LAB_0010aad3;
                  }
                  lVar53 = *(long*)( this + 0x10 );
               }
               uVar54 = uVar54 + 1;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = ( ulong )(uVar50 + 1) * lVar4;
               auVar34._8_8_ = 0;
               auVar34._0_8_ = uVar41;
               lVar46 = SUB168(auVar18 * auVar34, 8);
               uVar51 = *(uint*)( lVar53 + lVar46 * 4 );
               uVar50 = SUB164(auVar18 * auVar34, 8);
            } while ( ( uVar51 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar51 * lVar4,auVar35._8_8_ = 0,auVar35._0_8_ = uVar41,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar39 + uVar50 ) - SUB164(auVar19 * auVar35, 8)) * lVar4,auVar36._8_8_ = 0,auVar36._0_8_ = uVar41,uVar54 <= SUB164(auVar20 * auVar36, 8) );
         }
         iVar45 = *(int*)( this + 0x2c );
      }
      uVar48 = (ulong)uVar55;
      goto LAB_0010a6f7;
   }
   iVar45 = *(int*)( this + 0x2c );
   if (pvVar44 == (void*)0x0) goto LAB_0010a6f7;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_0010ac35;
   LAB_0010a71d:uVar55 = *(uint*)( this + 0x28 );
   if (uVar55 == 0x1c) {
      pauVar43 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0010aad3;
   }
   uVar41 = ( ulong )(uVar55 + 1);
   uVar39 = *(uint*)( hash_table_size_primes + (ulong)uVar55 * 4 );
   *(undefined4*)( this + 0x2c ) = 0;
   if (uVar55 + 1 < 2) {
      uVar41 = 2;
   }
   uVar55 = *(uint*)( hash_table_size_primes + uVar41 * 4 );
   *(int*)( this + 0x28 ) = (int)uVar41;
   pvVar44 = *(void**)( this + 8 );
   uVar48 = (ulong)uVar55;
   uVar41 = uVar48 * 4;
   pvVar3 = *(void**)( this + 0x10 );
   uVar52 = uVar48 * 8;
   uVar42 = Memory::alloc_static(uVar41, false);
   *(undefined8*)( this + 0x10 ) = uVar42;
   __s_00 = (void*)Memory::alloc_static(uVar52, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar55 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar52 ) ) && ( __s_00 < (void*)( (long)__s + uVar41 ) )) {
         uVar41 = 0;
         do {
            *(undefined4*)( (long)__s + uVar41 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar41 * 8 ) = 0;
            uVar41 = uVar41 + 1;
         } while ( uVar41 != uVar48 );
      } else {
         memset(__s, 0, uVar41);
         memset(__s_00, 0, uVar52);
      }
   }
   uVar41 = 0;
   if (uVar39 != 0) {
      do {
         uVar55 = *(uint*)( (long)pvVar3 + uVar41 * 4 );
         if (uVar55 != 0) {
            uVar50 = 0;
            lVar4 = *(long*)( this + 0x10 );
            uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar52 = CONCAT44(0, uVar40);
            lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar55 * lVar53;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar52;
            lVar46 = SUB168(auVar5 * auVar21, 8);
            puVar1 = (uint*)( lVar4 + lVar46 * 4 );
            iVar45 = SUB164(auVar5 * auVar21, 8);
            uVar51 = *puVar1;
            uVar42 = *(undefined8*)( (long)pvVar44 + uVar41 * 8 );
            while (uVar51 != 0) {
               auVar6._8_8_ = 0;
               auVar6._0_8_ = (ulong)uVar51 * lVar53;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar52;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(( uVar40 + iVar45 ) - SUB164(auVar6 * auVar22, 8)) * lVar53;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = uVar52;
               uVar54 = SUB164(auVar7 * auVar23, 8);
               uVar49 = uVar42;
               if (uVar54 < uVar50) {
                  *puVar1 = uVar55;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar46 * 8 );
                  uVar49 = *puVar2;
                  *puVar2 = uVar42;
                  uVar55 = uVar51;
                  uVar50 = uVar54;
               }
               uVar50 = uVar50 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar52;
               lVar46 = SUB168(auVar8 * auVar24, 8);
               puVar1 = (uint*)( lVar4 + lVar46 * 4 );
               iVar45 = SUB164(auVar8 * auVar24, 8);
               uVar42 = uVar49;
               uVar51 = *puVar1;
            };
            *(undefined8*)( (long)__s_00 + lVar46 * 8 ) = uVar42;
            *puVar1 = uVar55;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }
         uVar41 = uVar41 + 1;
      } while ( uVar39 != uVar41 );
      Memory::free_static(pvVar44, false);
      Memory::free_static(pvVar3, false);
   }
} else {
   if (*(int*)( this + 0x2c ) != 0) {
      uVar41 = CONCAT44(0, uVar55);
      lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar40 = String::hash();
      uVar39 = 1;
      if (uVar40 != 0) {
         uVar39 = uVar40;
      }
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar39 * lVar4;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar41;
      lVar46 = SUB168(auVar13 * auVar29, 8);
      lVar53 = *(long*)( this + 0x10 );
      uVar51 = SUB164(auVar13 * auVar29, 8);
      uVar40 = *(uint*)( lVar53 + lVar46 * 4 );
      if (uVar40 == 0) {
         lVar47 = *(long*)( this + 8 );
      } else {
         uVar50 = 0;
         lVar47 = *(long*)( this + 8 );
         do {
            if (uVar39 == uVar40) {
               cVar38 = String::operator ==((String*)( *(long*)( lVar47 + lVar46 * 8 ) + 0x10 ), param_1);
               if (cVar38 != '\0') {
                  pauVar43 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar51 * 8 );
                  goto LAB_0010aadf;
               }
               lVar53 = *(long*)( this + 0x10 );
               lVar47 = *(long*)( this + 8 );
            }
            uVar50 = uVar50 + 1;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = ( ulong )(uVar51 + 1) * lVar4;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar41;
            lVar46 = SUB168(auVar14 * auVar30, 8);
            uVar40 = *(uint*)( lVar53 + lVar46 * 4 );
            uVar51 = SUB164(auVar14 * auVar30, 8);
         } while ( ( uVar40 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar40 * lVar4,auVar31._8_8_ = 0,auVar31._0_8_ = uVar41,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar51 + uVar55 ) - SUB164(auVar15 * auVar31, 8)) * lVar4,auVar32._8_8_ = 0,auVar32._0_8_ = uVar41,uVar50 <= SUB164(auVar16 * auVar32, 8) );
      }
      local_70 = 0;
      uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar47 == 0) goto LAB_0010ad3c;
      goto LAB_0010ac25;
   }
   local_70 = 0;
   uVar48 = (ulong)uVar55;
   iVar45 = 0;
   LAB_0010a6f7:if ((float)uVar48 * __LC11 < (float)( iVar45 + 1 )) goto LAB_0010a71d;
}local_58 = 0;local_68 = (undefined1[16])0x0;if (*(long*)param_1 == 0) {
   local_50[0] = 0;
   pauVar43 = (undefined1(*) [16])operator_new(0x20, "");
   *(undefined8*)pauVar43[1] = 0;
   *pauVar43 = (undefined1[16])0x0;
} else {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)param_1);
   lVar4 = local_58;
   uVar42 = local_68._0_8_;
   uVar49 = local_68._8_8_;
   local_50[0] = 0;
   pauVar43 = (undefined1(*) [16])operator_new(0x20, "");
   *(undefined8*)pauVar43[1] = 0;
   *(undefined8*)*pauVar43 = uVar42;
   *(undefined8*)( *pauVar43 + 8 ) = uVar49;
   if (lVar4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar43 + 1 ), (CowData*)&local_58);
   }
}*(undefined8*)( pauVar43[1] + 8 ) = 0;CowData<char32_t>::_unref((CowData<char32_t>*)local_50);CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);puVar2 = *(undefined8**)( this + 0x20 );if (puVar2 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar43;
} else {
   *puVar2 = pauVar43;
   *(undefined8**)( *pauVar43 + 8 ) = puVar2;
}*(undefined1(**) [16])( this + 0x20 ) = pauVar43;uVar39 = String::hash();lVar4 = *(long*)( this + 0x10 );uVar55 = 1;if (uVar39 != 0) {
   uVar55 = uVar39;
}uVar51 = 0;uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar41 = CONCAT44(0, uVar39);lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar9._8_8_ = 0;auVar9._0_8_ = (ulong)uVar55 * lVar53;auVar25._8_8_ = 0;auVar25._0_8_ = uVar41;lVar47 = SUB168(auVar9 * auVar25, 8);lVar46 = *(long*)( this + 8 );puVar1 = (uint*)( lVar4 + lVar47 * 4 );iVar45 = SUB164(auVar9 * auVar25, 8);uVar40 = *puVar1;pauVar37 = pauVar43;while (uVar40 != 0) {
   auVar10._8_8_ = 0;
   auVar10._0_8_ = (ulong)uVar40 * lVar53;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar41;
   auVar11._8_8_ = 0;
   auVar11._0_8_ = ( ulong )(( uVar39 + iVar45 ) - SUB164(auVar10 * auVar26, 8)) * lVar53;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar41;
   uVar50 = SUB164(auVar11 * auVar27, 8);
   pauVar56 = pauVar37;
   if (uVar50 < uVar51) {
      *puVar1 = uVar55;
      puVar2 = (undefined8*)( lVar46 + lVar47 * 8 );
      pauVar56 = (undefined1(*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar51 = uVar50;
      uVar55 = uVar40;
   }
   uVar51 = uVar51 + 1;
   auVar12._8_8_ = 0;
   auVar12._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
   auVar28._8_8_ = 0;
   auVar28._0_8_ = uVar41;
   lVar47 = SUB168(auVar12 * auVar28, 8);
   puVar1 = (uint*)( lVar4 + lVar47 * 4 );
   iVar45 = SUB164(auVar12 * auVar28, 8);
   pauVar37 = pauVar56;
   uVar40 = *puVar1;
};*(undefined1(**) [16])( lVar46 + lVar47 * 8 ) = pauVar37;*puVar1 = uVar55;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0010aad3:CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);LAB_0010aadf:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return pauVar43[1] + 8;}/* MethodBind* create_method_bind<OpenXRInteractionProfileMetadata, String const&, String
   const&>(void (OpenXRInteractionProfileMetadata::*)(String const&, String const&)) */MethodBind *create_method_bind<OpenXRInteractionProfileMetadata,String_const&,String_const&>(_func_void_String_ptr_String_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_String_ptr_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010eff0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "OpenXRInteractionProfileMetadata";
   local_30 = 0x20;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }
   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBind* create_method_bind<OpenXRInteractionProfileMetadata, String const&, String const&,
   String const&>(void (OpenXRInteractionProfileMetadata::*)(String const&, String const&, String
   const&)) */MethodBind *create_method_bind<OpenXRInteractionProfileMetadata,String_const&,String_const&,String_const&>(_func_void_String_ptr_String_ptr_String_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_String_ptr_String_ptr_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010f050;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "OpenXRInteractionProfileMetadata";
   local_30 = 0x20;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }
   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBind* create_method_bind<OpenXRInteractionProfileMetadata, String const&, String const&,
   String const&, String const&, String const&, OpenXRAction::ActionType>(void
   (OpenXRInteractionProfileMetadata::*)(String const&, String const&, String const&, String const&,
   String const&, OpenXRAction::ActionType)) */MethodBind *create_method_bind<OpenXRInteractionProfileMetadata,String_const&,String_const&,String_const&,String_const&,String_const&,OpenXRAction::ActionType>(_func_void_String_ptr_String_ptr_String_ptr_String_ptr_String_ptr_ActionType *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_String_ptr_String_ptr_String_ptr_String_ptr_String_ptr_ActionType**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010f0b0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 6;
   local_40 = 0;
   local_38 = "OpenXRInteractionProfileMetadata";
   local_30 = 0x20;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }
   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* OpenXRInteractionProfileMetadata::_bind_methods() [clone .cold] */void OpenXRInteractionProfileMetadata::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<OpenXRInteractionProfileMetadata::TopLevelPath>::_copy_on_write() [clone .isra.0] [clone
   .cold] */void CowData<OpenXRInteractionProfileMetadata::TopLevelPath>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<OpenXRInteractionProfileMetadata::IOPath>::_copy_on_write() [clone .isra.0] [clone .cold]
    */void CowData<OpenXRInteractionProfileMetadata::IOPath>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<OpenXRInteractionProfileMetadata::InteractionProfile>::_copy_on_write() [clone .isra.0]
   [clone .cold] */void CowData<OpenXRInteractionProfileMetadata::InteractionProfile>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* OpenXRInteractionProfileMetadata::_initialize_classv() */void OpenXRInteractionProfileMetadata::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      Object::initialize_class();
      local_48 = 0;
      local_38 = "Object";
      local_30 = 6;
      String::parse_latin1((StrRange*)&local_48);
      StringName::StringName((StringName*)&local_40, (String*)&local_48, false);
      local_38 = "OpenXRInteractionProfileMetadata";
      local_50 = 0;
      local_30 = 0x20;
      String::parse_latin1((StrRange*)&local_50);
      StringName::StringName((StringName*)&local_38, (String*)&local_50, false);
      ClassDB::_add_class2((StringName*)&local_38, (StringName*)&local_40);
      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }
      lVar2 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
      if (( StringName::configured != '\0' ) && ( local_40 != 0 )) {
         StringName::unref();
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
            _bind_methods();
            initialize_class()::initialized = '\x01';
        goto LAB_0010b2d5
            ;;
         }
      }
      _bind_methods();
      initialize_class() {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* CowData<String>::_unref() */
   void CowData<String>::_unref(CowData<String> *this) {
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
                  plVar6 = plVar6 + 1;
               } while ( lVar3 != lVar7 );
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
   /* CowData<String>::_realloc(long) */
   undefined8 CowData<String>::_realloc(CowData<String> *this, long param_1) {
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
   /* Error CowData<String>::resize<false>(long) */
   undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
      long *plVar1;
      long *plVar2;
      code *pcVar3;
      undefined8 uVar4;
      undefined8 *puVar5;
      long lVar6;
      long lVar7;
      ulong uVar8;
      undefined8 *puVar9;
      long lVar10;
      if (param_1 < 0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
         return 0x1f;
      }
      if (*(long*)this == 0) {
         if (param_1 == 0) {
            return 0;
         }
         _copy_on_write(this);
         lVar6 = 0;
         lVar7 = 0;
      } else {
         lVar6 = *(long*)( *(long*)this + -8 );
         if (param_1 == lVar6) {
            return 0;
         }
         if (param_1 == 0) {
            _unref(this);
            return 0;
         }
         _copy_on_write(this);
         lVar7 = lVar6 * 8;
         if (lVar7 != 0) {
            uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
            uVar8 = uVar8 | uVar8 >> 2;
            uVar8 = uVar8 | uVar8 >> 4;
            uVar8 = uVar8 | uVar8 >> 8;
            uVar8 = uVar8 | uVar8 >> 0x10;
            lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
         }
      }
      if (param_1 * 8 == 0) {
         LAB_0010b8a0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
         return 6;
      }
      uVar8 = param_1 * 8 - 1;
      uVar8 = uVar8 >> 1 | uVar8;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      uVar8 = uVar8 | uVar8 >> 0x20;
      lVar10 = uVar8 + 1;
      if (lVar10 == 0) goto LAB_0010b8a0;
      if (param_1 <= lVar6) {
         lVar6 = *(long*)this;
         uVar8 = param_1;
         while (lVar6 != 0) {
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
               LAB_0010b779:if (lVar10 != lVar7) {
                  uVar4 = _realloc(this, lVar10);
                  if ((int)uVar4 != 0) {
                     return uVar4;
                  }
                  lVar6 = *(long*)this;
                  if (lVar6 == 0) {
                     _DAT_00000000 = 0;
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }
               }
               *(long*)( lVar6 + -8 ) = param_1;
               return 0;
            }
            while (true) {
               plVar2 = (long*)( lVar6 + uVar8 * 8 );
               if (*plVar2 != 0) break;
               uVar8 = uVar8 + 1;
               if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_0010b779;
            };
            LOCK();
            plVar1 = (long*)( *plVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar6 = *plVar2;
               *plVar2 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }
            uVar8 = uVar8 + 1;
            lVar6 = *(long*)this;
         };
         goto LAB_0010b8f6;
      }
      if (lVar10 == lVar7) {
         LAB_0010b81f:puVar9 = *(undefined8**)this;
         if (puVar9 == (undefined8*)0x0) {
            LAB_0010b8f6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar6 = puVar9[-1];
         if (param_1 <= lVar6) goto LAB_0010b80a;
      } else {
         if (lVar6 != 0) {
            uVar4 = _realloc(this, lVar10);
            if ((int)uVar4 != 0) {
               return uVar4;
            }
            goto LAB_0010b81f;
         }
         puVar5 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
         if (puVar5 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }
         puVar9 = puVar5 + 2;
         *puVar5 = 1;
         puVar5[1] = 0;
         *(undefined8**)this = puVar9;
         lVar6 = 0;
      }
      memset(puVar9 + lVar6, 0, ( param_1 - lVar6 ) * 8);
      LAB_0010b80a:puVar9[-1] = param_1;
      return 0;
   }
   /* CowData<OpenXRInteractionProfileMetadata::TopLevelPath>::_unref() */
   void CowData<OpenXRInteractionProfileMetadata::TopLevelPath>::_unref(CowData<OpenXRInteractionProfileMetadata::TopLevelPath> *this) {
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
                  if (plVar6[2] != 0) {
                     LOCK();
                     plVar2 = (long*)( plVar6[2] + -0x10 );
                     *plVar2 = *plVar2 + -1;
                     UNLOCK();
                     if (*plVar2 == 0) {
                        lVar4 = plVar6[2];
                        plVar6[2] = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }
                  }
                  if (plVar6[1] != 0) {
                     LOCK();
                     plVar2 = (long*)( plVar6[1] + -0x10 );
                     *plVar2 = *plVar2 + -1;
                     UNLOCK();
                     if (*plVar2 == 0) {
                        lVar4 = plVar6[1];
                        plVar6[1] = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }
                  }
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
                  plVar6 = plVar6 + 3;
               } while ( lVar3 != lVar7 );
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
   /* CowData<OpenXRInteractionProfileMetadata::IOPath>::_unref() */
   void CowData<OpenXRInteractionProfileMetadata::IOPath>::_unref(CowData<OpenXRInteractionProfileMetadata::IOPath> *this) {
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
                  for (int i = 0; i < 3; i++) {
                     if (plVar6[( 3 - i )] != 0) {
                        LOCK();
                        plVar2 = (long*)( plVar6[( 3 - i )] + -16 );
                        *plVar2 = *plVar2 + -1;
                        UNLOCK();
                        if (*plVar2 == 0) {
                           lVar4 = plVar6[( 3 - i )];
                           plVar6[( 3 - i )] = 0;
                           Memory::free_static((void*)( lVar4 + -16 ), false);
                        }
                     }
                  }
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
                  plVar6 = plVar6 + 5;
               } while ( lVar3 != lVar7 );
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
   /* CowData<OpenXRInteractionProfileMetadata::InteractionProfile>::_unref() */
   void CowData<OpenXRInteractionProfileMetadata::InteractionProfile>::_unref(CowData<OpenXRInteractionProfileMetadata::InteractionProfile> *this) {
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
                  CowData<OpenXRInteractionProfileMetadata::IOPath>::_unref((CowData<OpenXRInteractionProfileMetadata::IOPath>*)( plVar6 + 4 ));
                  if (plVar6[2] != 0) {
                     LOCK();
                     plVar2 = (long*)( plVar6[2] + -0x10 );
                     *plVar2 = *plVar2 + -1;
                     UNLOCK();
                     if (*plVar2 == 0) {
                        lVar4 = plVar6[2];
                        plVar6[2] = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }
                  }
                  if (plVar6[1] != 0) {
                     LOCK();
                     plVar2 = (long*)( plVar6[1] + -0x10 );
                     *plVar2 = *plVar2 + -1;
                     UNLOCK();
                     if (*plVar2 == 0) {
                        lVar4 = plVar6[1];
                        plVar6[1] = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }
                  }
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
                  plVar6 = plVar6 + 5;
               } while ( lVar3 != lVar7 );
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
   /* CowData<OpenXRInteractionProfileMetadata::TopLevelPath>::_realloc(long) */
   undefined8 CowData<OpenXRInteractionProfileMetadata::TopLevelPath>::_realloc(CowData<OpenXRInteractionProfileMetadata::TopLevelPath> *this, long param_1) {
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
   /* Error CowData<OpenXRInteractionProfileMetadata::TopLevelPath>::resize<false>(long) */
   undefined8 CowData<OpenXRInteractionProfileMetadata::TopLevelPath>::resize<false>(CowData<OpenXRInteractionProfileMetadata::TopLevelPath> *this, long param_1) {
      long *plVar1;
      long *plVar2;
      code *pcVar3;
      undefined1(*pauVar4)[16];
      undefined8 *puVar5;
      undefined1(*pauVar6)[16];
      undefined8 uVar7;
      long lVar8;
      undefined8 *puVar9;
      long lVar10;
      ulong uVar11;
      ulong uVar12;
      long lVar13;
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
      } else {
         lVar8 = *(long*)( *(long*)this + -8 );
         if (param_1 == lVar8) {
            return 0;
         }
         if (param_1 == 0) {
            _unref(this);
            return 0;
         }
         _copy_on_write(this);
         lVar10 = lVar8 * 0x18;
         if (lVar10 != 0) {
            uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
            uVar11 = uVar11 | uVar11 >> 2;
            uVar11 = uVar11 | uVar11 >> 4;
            uVar11 = uVar11 | uVar11 >> 8;
            uVar11 = uVar11 | uVar11 >> 0x10;
            lVar10 = ( uVar11 | uVar11 >> 0x20 ) + 1;
         }
      }
      if (param_1 * 0x18 == 0) {
         LAB_0010bfe0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
         return 6;
      }
      uVar11 = param_1 * 0x18 - 1;
      uVar11 = uVar11 >> 1 | uVar11;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      uVar11 = uVar11 | uVar11 >> 0x20;
      lVar13 = uVar11 + 1;
      if (lVar13 == 0) goto LAB_0010bfe0;
      uVar12 = param_1;
      if (param_1 <= lVar8) {
         while (lVar8 = *(long*)this,lVar8 != 0) {
            if (*(ulong*)( lVar8 + -8 ) <= uVar12) {
               if (lVar13 != lVar10) {
                  uVar7 = _realloc(this, lVar13);
                  if ((int)uVar7 != 0) {
                     return uVar7;
                  }
                  lVar8 = *(long*)this;
                  if (lVar8 == 0) {
                     _DAT_00000000 = 0;
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }
               }
               *(long*)( lVar8 + -8 ) = param_1;
               return 0;
            }
            plVar2 = (long*)( lVar8 + uVar12 * 0x18 );
            if (plVar2[2] != 0) {
               LOCK();
               plVar1 = (long*)( plVar2[2] + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar8 = plVar2[2];
                  plVar2[2] = 0;
                  Memory::free_static((void*)( lVar8 + -0x10 ), false);
               }
            }
            if (plVar2[1] != 0) {
               LOCK();
               plVar1 = (long*)( plVar2[1] + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar8 = plVar2[1];
                  plVar2[1] = 0;
                  Memory::free_static((void*)( lVar8 + -0x10 ), false);
               }
            }
            if (*plVar2 != 0) {
               LOCK();
               plVar1 = (long*)( *plVar2 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar8 = *plVar2;
                  *plVar2 = 0;
                  Memory::free_static((void*)( lVar8 + -0x10 ), false);
               }
            }
            uVar12 = uVar12 + 1;
         };
         goto LAB_0010c036;
      }
      if (lVar13 == lVar10) {
         LAB_0010bf4b:puVar9 = *(undefined8**)this;
         if (puVar9 == (undefined8*)0x0) {
            LAB_0010c036:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar8 = puVar9[-1];
         if (param_1 <= lVar8) goto LAB_0010be3d;
      } else {
         if (lVar8 != 0) {
            uVar7 = _realloc(this, lVar13);
            if ((int)uVar7 != 0) {
               return uVar7;
            }
            goto LAB_0010bf4b;
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
      pauVar6 = (undefined1(*) [16])( puVar9 + lVar8 * 3 );
      do {
         *(undefined8*)pauVar6[1] = 0;
         pauVar4 = pauVar6 + 1;
         *pauVar6 = (undefined1[16])0x0;
         pauVar6 = (undefined1(*) [16])( *pauVar4 + 8 );
      } while ( (undefined1(*) [16])( *pauVar4 + 8 ) != (undefined1(*) [16])( puVar9 + param_1 * 3 ) );
      LAB_0010be3d:puVar9[-1] = param_1;
      return 0;
   }
   /* CowData<OpenXRInteractionProfileMetadata::InteractionProfile>::_realloc(long) */
   undefined8 CowData<OpenXRInteractionProfileMetadata::InteractionProfile>::_realloc(CowData<OpenXRInteractionProfileMetadata::InteractionProfile> *this, long param_1) {
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
   /* Error CowData<OpenXRInteractionProfileMetadata::InteractionProfile>::resize<false>(long) */
   undefined8 CowData<OpenXRInteractionProfileMetadata::InteractionProfile>::resize<false>(CowData<OpenXRInteractionProfileMetadata::InteractionProfile> *this, long param_1) {
      long *plVar1;
      long *plVar2;
      code *pcVar3;
      undefined1(*pauVar4)[16];
      undefined8 *puVar5;
      undefined1(*pauVar6)[16];
      undefined8 uVar7;
      long lVar8;
      undefined8 *puVar9;
      long lVar10;
      ulong uVar11;
      ulong uVar12;
      long lVar13;
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
      } else {
         lVar8 = *(long*)( *(long*)this + -8 );
         if (param_1 == lVar8) {
            return 0;
         }
         if (param_1 == 0) {
            _unref(this);
            return 0;
         }
         _copy_on_write(this);
         lVar10 = lVar8 * 0x28;
         if (lVar10 != 0) {
            uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
            uVar11 = uVar11 | uVar11 >> 2;
            uVar11 = uVar11 | uVar11 >> 4;
            uVar11 = uVar11 | uVar11 >> 8;
            uVar11 = uVar11 | uVar11 >> 0x10;
            lVar10 = ( uVar11 | uVar11 >> 0x20 ) + 1;
         }
      }
      if (param_1 * 0x28 == 0) {
         LAB_0010c3c0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
         return 6;
      }
      uVar11 = param_1 * 0x28 - 1;
      uVar11 = uVar11 >> 1 | uVar11;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      uVar11 = uVar11 | uVar11 >> 0x20;
      lVar13 = uVar11 + 1;
      if (lVar13 == 0) goto LAB_0010c3c0;
      uVar12 = param_1;
      if (param_1 <= lVar8) {
         while (lVar8 = *(long*)this,lVar8 != 0) {
            if (*(ulong*)( lVar8 + -8 ) <= uVar12) {
               if (lVar13 != lVar10) {
                  uVar7 = _realloc(this, lVar13);
                  if ((int)uVar7 != 0) {
                     return uVar7;
                  }
                  lVar8 = *(long*)this;
                  if (lVar8 == 0) {
                     _DAT_00000000 = 0;
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }
               }
               *(long*)( lVar8 + -8 ) = param_1;
               return 0;
            }
            plVar2 = (long*)( lVar8 + uVar12 * 0x28 );
            CowData<OpenXRInteractionProfileMetadata::IOPath>::_unref((CowData<OpenXRInteractionProfileMetadata::IOPath>*)( plVar2 + 4 ));
            if (plVar2[2] != 0) {
               LOCK();
               plVar1 = (long*)( plVar2[2] + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar8 = plVar2[2];
                  plVar2[2] = 0;
                  Memory::free_static((void*)( lVar8 + -0x10 ), false);
               }
            }
            if (plVar2[1] != 0) {
               LOCK();
               plVar1 = (long*)( plVar2[1] + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar8 = plVar2[1];
                  plVar2[1] = 0;
                  Memory::free_static((void*)( lVar8 + -0x10 ), false);
               }
            }
            if (*plVar2 != 0) {
               LOCK();
               plVar1 = (long*)( *plVar2 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar8 = *plVar2;
                  *plVar2 = 0;
                  Memory::free_static((void*)( lVar8 + -0x10 ), false);
               }
            }
            uVar12 = uVar12 + 1;
         };
         goto LAB_0010c416;
      }
      if (lVar13 == lVar10) {
         LAB_0010c333:puVar9 = *(undefined8**)this;
         if (puVar9 == (undefined8*)0x0) {
            LAB_0010c416:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar8 = puVar9[-1];
         if (param_1 <= lVar8) goto LAB_0010c215;
      } else {
         if (lVar8 != 0) {
            uVar7 = _realloc(this, lVar13);
            if ((int)uVar7 != 0) {
               return uVar7;
            }
            goto LAB_0010c333;
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
      pauVar6 = (undefined1(*) [16])( puVar9 + lVar8 * 5 );
      do {
         *(undefined8*)pauVar6[1] = 0;
         pauVar4 = pauVar6 + 2;
         *pauVar6 = (undefined1[16])0x0;
         *(undefined8*)pauVar6[2] = 0;
         pauVar6 = (undefined1(*) [16])( *pauVar4 + 8 );
      } while ( (undefined1(*) [16])( *pauVar4 + 8 ) != (undefined1(*) [16])( puVar9 + param_1 * 5 ) );
      LAB_0010c215:puVar9[-1] = param_1;
      return 0;
   }
   /* CowData<OpenXRInteractionProfileMetadata::IOPath>::_realloc(long) */
   undefined8 CowData<OpenXRInteractionProfileMetadata::IOPath>::_realloc(CowData<OpenXRInteractionProfileMetadata::IOPath> *this, long param_1) {
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
   /* Error CowData<OpenXRInteractionProfileMetadata::IOPath>::resize<false>(long) */
   undefined8 CowData<OpenXRInteractionProfileMetadata::IOPath>::resize<false>(CowData<OpenXRInteractionProfileMetadata::IOPath> *this, long param_1) {
      long *plVar1;
      long *plVar2;
      code *pcVar3;
      undefined1(*pauVar4)[16];
      undefined8 *puVar5;
      undefined1(*pauVar6)[16];
      undefined8 uVar7;
      long lVar8;
      undefined8 *puVar9;
      long lVar10;
      ulong uVar11;
      ulong uVar12;
      long lVar13;
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
      } else {
         lVar8 = *(long*)( *(long*)this + -8 );
         if (param_1 == lVar8) {
            return 0;
         }
         if (param_1 == 0) {
            _unref(this);
            return 0;
         }
         _copy_on_write(this);
         lVar10 = lVar8 * 0x28;
         if (lVar10 != 0) {
            uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
            uVar11 = uVar11 | uVar11 >> 2;
            uVar11 = uVar11 | uVar11 >> 4;
            uVar11 = uVar11 | uVar11 >> 8;
            uVar11 = uVar11 | uVar11 >> 0x10;
            lVar10 = ( uVar11 | uVar11 >> 0x20 ) + 1;
         }
      }
      if (param_1 * 0x28 == 0) {
         LAB_0010c7a0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
         return 6;
      }
      uVar11 = param_1 * 0x28 - 1;
      uVar11 = uVar11 >> 1 | uVar11;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      uVar11 = uVar11 | uVar11 >> 0x20;
      lVar13 = uVar11 + 1;
      if (lVar13 == 0) goto LAB_0010c7a0;
      uVar12 = param_1;
      if (param_1 <= lVar8) {
         while (lVar8 = *(long*)this,lVar8 != 0) {
            if (*(ulong*)( lVar8 + -8 ) <= uVar12) {
               if (lVar13 != lVar10) {
                  uVar7 = _realloc(this, lVar13);
                  if ((int)uVar7 != 0) {
                     return uVar7;
                  }
                  lVar8 = *(long*)this;
                  if (lVar8 == 0) {
                     _DAT_00000000 = 0;
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }
               }
               *(long*)( lVar8 + -8 ) = param_1;
               return 0;
            }
            plVar2 = (long*)( lVar8 + uVar12 * 0x28 );
            for (int i = 0; i < 3; i++) {
               if (plVar2[( 3 - i )] != 0) {
                  LOCK();
                  plVar1 = (long*)( plVar2[( 3 - i )] + -16 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar8 = plVar2[( 3 - i )];
                     plVar2[( 3 - i )] = 0;
                     Memory::free_static((void*)( lVar8 + -16 ), false);
                  }
               }
            }
            if (*plVar2 != 0) {
               LOCK();
               plVar1 = (long*)( *plVar2 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar8 = *plVar2;
                  *plVar2 = 0;
                  Memory::free_static((void*)( lVar8 + -0x10 ), false);
               }
            }
            uVar12 = uVar12 + 1;
         };
         goto LAB_0010c7f6;
      }
      if (lVar13 == lVar10) {
         LAB_0010c713:puVar9 = *(undefined8**)this;
         if (puVar9 == (undefined8*)0x0) {
            LAB_0010c7f6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar8 = puVar9[-1];
         if (param_1 <= lVar8) goto LAB_0010c5e0;
      } else {
         if (lVar8 != 0) {
            uVar7 = _realloc(this, lVar13);
            if ((int)uVar7 != 0) {
               return uVar7;
            }
            goto LAB_0010c713;
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
      pauVar6 = (undefined1(*) [16])( puVar9 + lVar8 * 5 );
      do {
         *pauVar6 = (undefined1[16])0x0;
         pauVar4 = pauVar6 + 2;
         pauVar6[1] = (undefined1[16])0x0;
         pauVar6 = (undefined1(*) [16])( *pauVar4 + 8 );
      } while ( (undefined1(*) [16])( *pauVar4 + 8 ) != (undefined1(*) [16])( puVar9 + param_1 * 5 ) );
      LAB_0010c5e0:puVar9[-1] = param_1;
      return 0;
   }
   for (int i = 0; i < 4; i++) {
      /* WARNING: Removing unreachable block (ram,0x0010c998) */
   }
   undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
      Variant *this;
      int iVar1;
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
      iVar1 = (int)local_c8;
      Array::resize(iVar1);
      this(Variant * Array::operator [](iVar1));
      Variant::operator =(this, (Variant*)local_78);
      String::sprintf((Array*)local_c0, param_2);
      *param_1 = local_c0[0];
      Array::~Array(local_c8);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
         Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }
      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return param_1;
   }
   /* MethodBindT<String const&, String const&, String const&, String const&, String const&,
   OpenXRAction::ActionType>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<String_const&,String_const&,String_const&,String_const&,String_const&,OpenXRAction::ActionType>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
      code *pcVar1;
      Variant *pVVar2;
      long in_FS_OFFSET;
      long local_58;
      undefined8 local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
         if (param_2[1] == (Variant*)0x0) {
            pVVar2 = param_2[0x23];
            if (pVVar2 == (Variant*)0x0) {
               pVVar2 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
            }
         } else {
            pVVar2 = param_2[1] + 0x20;
         }
         if (local_48 == *(char**)pVVar2) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_0010cce6;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar1 = *(code**)( param_1 + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         pcVar1 = *(code**)( pcVar1 + *(long*)( *(long*)( param_1 + 0x60 ) + (long)param_2 ) + -1 );
      }
      ( *pcVar1 )((long*)( *(long*)( param_1 + 0x60 ) + (long)param_2 ), *(long*)param_3 + 8, *(long*)( param_3 + 8 ) + 8, *(long*)( param_3 + 0x10 ) + 8, *(long*)( param_3 + 0x18 ) + 8, *(long*)( param_3 + 0x20 ) + 8, *(undefined8*)( *(long*)( param_3 + 0x28 ) + 8 ));
      LAB_0010cce6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindT<String const&, String const&, String const&, String const&, String const&,
   OpenXRAction::ActionType>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<String_const&,String_const&,String_const&,String_const&,String_const&,OpenXRAction::ActionType>::ptrcall(Object *param_1, void **param_2, void *param_3) {
      code *pcVar1;
      long *plVar2;
      long in_FS_OFFSET;
      long local_58;
      undefined8 local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
         if (param_2[1] == (void*)0x0) {
            plVar2 = (long*)param_2[0x23];
            if (plVar2 == (long*)0x0) {
               plVar2 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
            }
         } else {
            plVar2 = (long*)( (long)param_2[1] + 0x20 );
         }
         if (local_48 == (char*)*plVar2) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_0010cec1;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar1 = *(code**)( param_1 + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         pcVar1 = *(code**)( pcVar1 + *(long*)( *(long*)( param_1 + 0x60 ) + (long)param_2 ) + -1 );
      }
      /* WARNING: Load size is inaccurate */
      ( *pcVar1 )((long*)( *(long*)( param_1 + 0x60 ) + (long)param_2 ), *param_3, *(undefined8*)( (long)param_3 + 8 ), *(undefined8*)( (long)param_3 + 0x10 ), *(undefined8*)( (long)param_3 + 0x18 ), *(undefined8*)( (long)param_3 + 0x20 ), **(undefined8**)( (long)param_3 + 0x28 ));
      LAB_0010cec1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindT<String const&, String const&, String const&>::validated_call(Object*, Variant
   const**, Variant*) const */
   void MethodBindT<String_const&,String_const&,String_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
      code *UNRECOVERED_JUMPTABLE;
      Variant *pVVar1;
      long in_FS_OFFSET;
      long local_58;
      undefined8 local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
         if (param_2[1] == (Variant*)0x0) {
            pVVar1 = param_2[0x23];
            if (pVVar1 == (Variant*)0x0) {
               pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
            }
         } else {
            pVVar1 = param_2[1] + 0x20;
         }
         if (local_48 == *(char**)pVVar1) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }
            goto LAB_0010d1f7;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
      if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
         UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
      }
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x0010d0a3. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8, *(long*)( param_3 + 8 ) + 8, *(long*)( param_3 + 0x10 ) + 8);
         return;
      }
      LAB_0010d1f7:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }
   /* MethodBindT<String const&, String const&, String const&>::ptrcall(Object*, void const**, void*)
   const */
   void MethodBindT<String_const&,String_const&,String_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
      code *UNRECOVERED_JUMPTABLE;
      long *plVar1;
      long in_FS_OFFSET;
      long local_58;
      undefined8 local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
         if (param_2[1] == (void*)0x0) {
            plVar1 = (long*)param_2[0x23];
            if (plVar1 == (long*)0x0) {
               plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
            }
         } else {
            plVar1 = (long*)( (long)param_2[1] + 0x20 );
         }
         if (local_48 == (char*)*plVar1) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }
            goto LAB_0010d3e1;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
      if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
         UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
      }
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         for (int i = 0; i < 3; i++) {
            /* WARNING: Load size is inaccurate */
         }
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3, *(undefined8*)( (long)param_3 + 8 ), *(undefined8*)( (long)param_3 + 0x10 ));
         return;
      }
      LAB_0010d3e1:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }
   /* MethodBindT<String const&, String const&>::validated_call(Object*, Variant const**, Variant*)
   const */
   void MethodBindT<String_const&,String_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
      code *UNRECOVERED_JUMPTABLE;
      Variant *pVVar1;
      long in_FS_OFFSET;
      long local_58;
      undefined8 local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
         if (param_2[1] == (Variant*)0x0) {
            pVVar1 = param_2[0x23];
            if (pVVar1 == (Variant*)0x0) {
               pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
            }
         } else {
            pVVar1 = param_2[1] + 0x20;
         }
         if (local_48 == *(char**)pVVar1) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }
            goto LAB_0010d5af;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
      if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
         UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
      }
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x0010d45a. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8, *(long*)( param_3 + 8 ) + 8);
         return;
      }
      LAB_0010d5af:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }
   /* MethodBindT<String const&, String const&>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<String_const&,String_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
      code *UNRECOVERED_JUMPTABLE;
      long *plVar1;
      long in_FS_OFFSET;
      long local_58;
      undefined8 local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
         if (param_2[1] == (void*)0x0) {
            plVar1 = (long*)param_2[0x23];
            if (plVar1 == (long*)0x0) {
               plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
            }
         } else {
            plVar1 = (long*)( (long)param_2[1] + 0x20 );
         }
         if (local_48 == (char*)*plVar1) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }
            goto LAB_0010d799;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
      if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
         UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
      }
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         for (int i = 0; i < 3; i++) {
            /* WARNING: Load size is inaccurate */
         }
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3, *(undefined8*)( (long)param_3 + 8 ));
         return;
      }
      LAB_0010d799:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }
   /* MethodBindT<String const&, String const&, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */
   Object *MethodBindT<String_const&,String_const&,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      Variant *pVVar2;
      code *pcVar3;
      undefined8 uVar4;
      char cVar5;
      undefined4 uVar6;
      long lVar7;
      long *plVar8;
      uint uVar9;
      int iVar10;
      undefined4 in_register_00000014;
      long *plVar11;
      Variant *pVVar12;
      long lVar13;
      uint in_R8D;
      undefined4 *in_R9;
      Variant *pVVar14;
      long in_FS_OFFSET;
      long local_78;
      undefined8 local_70;
      char *local_68;
      undefined8 local_60;
      undefined4 *local_58[3];
      long local_40;
      plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
         if (plVar11[1] == 0) {
            plVar8 = (long*)plVar11[0x23];
            if (plVar8 == (long*)0x0) {
               plVar8 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
            }
         } else {
            plVar8 = (long*)( plVar11[1] + 0x20 );
         }
         if (local_68 == (char*)*plVar8) {
            if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_70 = 0;
            local_60 = 0x35;
            String::parse_latin1((StrRange*)&local_70);
            vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
            _err_print_error(&_LC176, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }
            goto LAB_0010d9f2;
         }
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pVVar14 = param_2[0xb];
      pVVar1 = param_2[0xc];
      uVar6 = 3;
      if (in_R8D < 4) {
         pVVar2 = param_2[5];
         if (pVVar2 == (Variant*)0x0) {
            iVar10 = 0;
            lVar13 = 0;
         } else {
            lVar13 = *(long*)( pVVar2 + -8 );
            iVar10 = (int)lVar13;
         }
         if ((int)( 3 - in_R8D ) <= iVar10) {
            lVar7 = 0;
            do {
               if ((int)lVar7 < (int)in_R8D) {
                  pVVar12 = *(Variant**)( param_4 + lVar7 * 8 );
               } else {
                  uVar9 = iVar10 + -3 + (int)lVar7;
                  if (lVar13 <= (int)uVar9) {
                     _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar9, lVar13, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }
                  pVVar12 = pVVar2 + (ulong)uVar9 * 0x18;
               }
               local_58[lVar7] = (undefined4*)pVVar12;
               lVar7 = lVar7 + 1;
            } while ( lVar7 != 3 );
            *in_R9 = 0;
            if (( (ulong)pVVar14 & 1 ) != 0) {
               pVVar14 = *(Variant**)( pVVar14 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
            }
            cVar5 = Variant::can_convert_strict(*local_58[2], 4);
            uVar4 = _LC177;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }
            Variant::operator_cast_to_String((Variant*)&local_78);
            cVar5 = Variant::can_convert_strict(*local_58[1], 4);
            uVar4 = _LC178;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }
            Variant::operator_cast_to_String((Variant*)&local_70);
            cVar5 = Variant::can_convert_strict(*local_58[0], 4);
            uVar4 = _LC179;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }
            Variant::operator_cast_to_String((Variant*)&local_68);
            ( *(code*)pVVar14 )((Variant*)( (long)plVar11 + (long)pVVar1 ), (Variant*)&local_68, (Variant*)&local_70, (Variant*)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            goto LAB_0010d9f2;
         }
         uVar6 = 4;
      }
      *in_R9 = uVar6;
      in_R9[2] = 3;
      LAB_0010d9f2:*(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindT<String const&, String const&, String const&, String const&, String const&,
   OpenXRAction::ActionType>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindT<String_const&,String_const&,String_const&,String_const&,String_const&,OpenXRAction::ActionType>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      Variant *pVVar2;
      code *pcVar3;
      undefined8 uVar4;
      char *pcVar5;
      char cVar6;
      undefined4 uVar7;
      long lVar8;
      ulong uVar9;
      long *plVar10;
      int iVar11;
      uint uVar12;
      undefined4 in_register_00000014;
      long *plVar13;
      long lVar14;
      uint in_R8D;
      undefined4 *in_R9;
      Variant *pVVar15;
      long in_FS_OFFSET;
      long local_a8;
      long local_a0;
      long local_98;
      long local_90;
      char *local_88;
      undefined8 local_80;
      Variant *local_78[7];
      long local_40;
      plVar13 = (long*)CONCAT44(in_register_00000014, param_3);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( plVar13 != (long*)0x0 ) && ( plVar13[1] != 0 ) ) && ( *(char*)( plVar13[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_88, (StringName*)( param_2 + 3 ));
         if (plVar13[1] == 0) {
            plVar10 = (long*)plVar13[0x23];
            if (plVar10 == (long*)0x0) {
               plVar10 = (long*)( **(code**)( *plVar13 + 0x40 ) )();
            }
         } else {
            plVar10 = (long*)( plVar13[1] + 0x20 );
         }
         if (local_88 == (char*)*plVar10) {
            if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_90 = 0;
            local_80 = 0x35;
            String::parse_latin1((StrRange*)&local_90);
            vformat<StringName>((StringName*)&local_88, (StrRange*)&local_90, &local_98);
            _err_print_error(&_LC176, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_88, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
               StringName::unref();
            }
            goto LAB_0010df70;
         }
         if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pVVar15 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D < 7) {
         pVVar2 = param_2[5];
         if (pVVar2 == (Variant*)0x0) {
            iVar11 = 0;
            lVar14 = 0;
         } else {
            lVar14 = *(long*)( pVVar2 + -8 );
            iVar11 = (int)lVar14;
         }
         if ((int)( 6 - in_R8D ) <= iVar11) {
            lVar8 = 0;
            do {
               while ((int)in_R8D <= (int)lVar8) {
                  uVar12 = iVar11 + -6 + (int)lVar8;
                  if (lVar14 <= (int)uVar12) {
                     _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar12, lVar14, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }
                  local_78[lVar8] = pVVar2 + (ulong)uVar12 * 0x18;
                  lVar8 = lVar8 + 1;
                  if (lVar8 == 6) goto LAB_0010dcd0;
               };
               local_78[lVar8] = *(Variant**)( param_4 + lVar8 * 8 );
               lVar8 = lVar8 + 1;
            } while ( lVar8 != 6 );
            LAB_0010dcd0:*in_R9 = 0;
            if (( (ulong)pVVar15 & 1 ) != 0) {
               pVVar15 = *(Variant**)( pVVar15 + *(long*)( (long)plVar13 + (long)pVVar1 ) + -1 );
            }
            cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[5], 2);
            uVar4 = _LC181;
            if (cVar6 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }
            uVar9 = Variant::operator_cast_to_long(local_78[5]);
            cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[4], 4);
            uVar4 = _LC182;
            if (cVar6 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }
            Variant::operator_cast_to_String((Variant*)&local_a8);
            cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[3], 4);
            uVar4 = _LC183;
            if (cVar6 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }
            Variant::operator_cast_to_String((Variant*)&local_a0);
            cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[2], 4);
            uVar4 = _LC177;
            if (cVar6 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }
            Variant::operator_cast_to_String((Variant*)&local_98);
            cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[1], 4);
            uVar4 = _LC178;
            if (cVar6 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }
            Variant::operator_cast_to_String((Variant*)&local_90);
            cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[0], 4);
            uVar4 = _LC179;
            if (cVar6 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }
            Variant::operator_cast_to_String((Variant*)&local_88);
            ( *(code*)pVVar15 )((Variant*)( (long)plVar13 + (long)pVVar1 ), (Variant*)&local_88, (Variant*)&local_90, (Variant*)&local_98, (Variant*)&local_a0, (Variant*)&local_a8, uVar9 & 0xffffffff);
            pcVar5 = local_88;
            if (local_88 != (char*)0x0) {
               LOCK();
               plVar13 = (long*)( local_88 + -0x10 );
               *plVar13 = *plVar13 + -1;
               UNLOCK();
               if (*plVar13 == 0) {
                  local_88 = (char*)0x0;
                  Memory::free_static(pcVar5 + -0x10, false);
               }
            }
            lVar14 = local_90;
            if (local_90 != 0) {
               LOCK();
               plVar13 = (long*)( local_90 + -0x10 );
               *plVar13 = *plVar13 + -1;
               UNLOCK();
               if (*plVar13 == 0) {
                  local_90 = 0;
                  Memory::free_static((void*)( lVar14 + -0x10 ), false);
               }
            }
            lVar14 = local_98;
            if (local_98 != 0) {
               LOCK();
               plVar13 = (long*)( local_98 + -0x10 );
               *plVar13 = *plVar13 + -1;
               UNLOCK();
               if (*plVar13 == 0) {
                  local_98 = 0;
                  Memory::free_static((void*)( lVar14 + -0x10 ), false);
               }
            }
            lVar14 = local_a0;
            if (local_a0 != 0) {
               LOCK();
               plVar13 = (long*)( local_a0 + -0x10 );
               *plVar13 = *plVar13 + -1;
               UNLOCK();
               if (*plVar13 == 0) {
                  local_a0 = 0;
                  Memory::free_static((void*)( lVar14 + -0x10 ), false);
               }
            }
            lVar14 = local_a8;
            if (local_a8 != 0) {
               LOCK();
               plVar13 = (long*)( local_a8 + -0x10 );
               *plVar13 = *plVar13 + -1;
               UNLOCK();
               if (*plVar13 == 0) {
                  local_a8 = 0;
                  Memory::free_static((void*)( lVar14 + -0x10 ), false);
               }
            }
            goto LAB_0010df70;
         }
         uVar7 = 4;
      } else {
         uVar7 = 3;
      }
      *in_R9 = uVar7;
      in_R9[2] = 6;
      LAB_0010df70:*(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* void call_with_variant_args_dv<__UnexistingClass, String const&, String
   const&>(__UnexistingClass*, void (__UnexistingClass::*)(String const&, String const&), Variant
   const**, int, Callable::CallError&, Vector<Variant> const&) */
   void call_with_variant_args_dv<__UnexistingClass,String_const&,String_const&>(__UnexistingClass *param_1, _func_void_String_ptr_String_ptr *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
      long lVar1;
      long lVar2;
      code *pcVar3;
      undefined8 uVar4;
      char cVar5;
      int iVar6;
      undefined4 uVar7;
      undefined4 in_register_0000000c;
      long *plVar8;
      long lVar9;
      undefined4 *puVar10;
      uint uVar11;
      int iVar12;
      undefined4 *puVar13;
      long in_FS_OFFSET;
      long in_stack_00000008;
      Variant local_50[8];
      Variant local_48[8];
      long local_40;
      plVar8 = (long*)CONCAT44(in_register_0000000c, param_4);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar11 = (uint)param_5;
      if (uVar11 < 3) {
         lVar1 = *(long*)( in_stack_00000008 + 8 );
         iVar6 = 2 - uVar11;
         if (lVar1 == 0) {
            if (iVar6 != 0) goto LAB_0010e2c8;
            puVar10 = (undefined4*)*plVar8;
            LAB_0010e31d:puVar13 = (undefined4*)plVar8[1];
         } else {
            lVar2 = *(long*)( lVar1 + -8 );
            iVar12 = (int)lVar2;
            if (iVar12 < iVar6) {
               LAB_0010e2c8:uVar7 = 4;
               goto LAB_0010e2cd;
            }
            if (uVar11 == 0) {
               lVar9 = (long)( iVar12 + -2 );
               if (lVar2 <= lVar9) goto LAB_0010e338;
               puVar10 = (undefined4*)( lVar1 + lVar9 * 0x18 );
            } else {
               puVar10 = (undefined4*)*plVar8;
               if (uVar11 == 2) goto LAB_0010e31d;
            }
            lVar9 = (long)(int)( ( uVar11 ^ 1 ) + ( iVar12 - iVar6 ) );
            if (lVar2 <= lVar9) {
               LAB_0010e338:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }
            puVar13 = (undefined4*)( lVar1 + lVar9 * 0x18 );
         }
         *(undefined4*)param_6 = 0;
         if (( (ulong)param_2 & 1 ) != 0) {
            param_2 = *(_func_void_String_ptr_String_ptr**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
         }
         cVar5 = Variant::can_convert_strict(*puVar13, 4);
         uVar4 = _LC178;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }
         Variant::operator_cast_to_String(local_50);
         cVar5 = Variant::can_convert_strict(*puVar10, 4);
         uVar4 = _LC179;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }
         Variant::operator_cast_to_String(local_48);
         ( *param_2 )((String*)( param_1 + (long)param_3 ), (String*)local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
      } else {
         uVar7 = 3;
         LAB_0010e2cd:*(undefined4*)param_6 = uVar7;
         *(undefined4*)( param_6 + 8 ) = 2;
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindT<String const&, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */
   Object *MethodBindT<String_const&,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      long lVar1;
      long *plVar2;
      undefined4 in_register_00000014;
      __UnexistingClass *p_Var3;
      CallError *in_R8;
      Vector *in_R9;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      p_Var3 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( p_Var3 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var3 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var3 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
         if (*(long*)( p_Var3 + 8 ) == 0) {
            plVar2 = *(long**)( p_Var3 + 0x118 );
            if (plVar2 == (long*)0x0) {
               plVar2 = (long*)( **(code**)( *(long*)p_Var3 + 0x40 ) )(p_Var3);
            }
         } else {
            plVar2 = (long*)( *(long*)( p_Var3 + 8 ) + 0x20 );
         }
         in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
         if (local_48 == (char*)*plVar2) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error(&_LC176, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar2 = (long*)( local_50 + -0x10 );
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               if (*plVar2 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            *(undefined4*)param_1 = 0;
            *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
            goto LAB_0010e3d6;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      call_with_variant_args_dv<__UnexistingClass,String_const&,String_const&>(p_Var3, (_func_void_String_ptr_String_ptr*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      LAB_0010e3d6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */
   void call_get_argument_type_info_helper<String_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
      undefined1 auVar1[16];
      undefined1 auVar2[16];
      undefined8 uVar3;
      long lVar4;
      int iVar5;
      long in_FS_OFFSET;
      undefined8 local_88;
      long local_80;
      long local_78;
      long local_70;
      undefined *local_68;
      undefined1 local_60[16];
      int local_50;
      long local_48;
      undefined4 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      iVar5 = *param_2;
      if (iVar5 != param_1) goto LAB_0010e5f7;
      local_78 = 0;
      local_68 = &_LC8;
      local_80 = 0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      String::parse_latin1((StrRange*)&local_80);
      local_88 = 0;
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 4);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1[16])0x0;
      if (local_80 == 0) {
         LAB_0010e6f5:local_40 = 6;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
         local_40 = 6;
         if (local_50 != 0x11) goto LAB_0010e6f5;
         StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
         if (local_60._8_8_ == local_70) {
            if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            local_60._8_8_ = local_70;
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
         StringName::unref();
      }
      *(undefined4*)param_3 = local_68._0_4_;
      if (*(long*)( param_3 + 8 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
         uVar3 = local_60._0_8_;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_60._8_8_;
         local_60 = auVar2 << 0x40;
         *(undefined8*)( param_3 + 8 ) = uVar3;
      }
      if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
         StringName::unref();
         uVar3 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( param_3 + 0x10 ) = uVar3;
      }
      *(int*)( param_3 + 0x18 ) = local_50;
      if (*(long*)( param_3 + 0x20 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
         lVar4 = local_48;
         local_48 = 0;
         *(long*)( param_3 + 0x20 ) = lVar4;
      }
      *(undefined4*)( param_3 + 0x28 ) = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      iVar5 = *param_2;
      LAB_0010e5f7:*param_2 = iVar5 + 1;
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return;
   }
   /* MethodBindT<String const&, String const&>::_gen_argument_type_info(int) const */
   PropertyInfo *MethodBindT<String_const&,String_const&>::_gen_argument_type_info(int param_1) {
      int in_EDX;
      undefined4 in_register_0000003c;
      PropertyInfo *pPVar1;
      long in_FS_OFFSET;
      int local_24;
      long local_20;
      pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
      local_20 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)pPVar1 = 0;
      *(undefined4*)( pPVar1 + 0x18 ) = 0;
      *(undefined8*)( pPVar1 + 0x20 ) = 0;
      *(undefined4*)( pPVar1 + 0x28 ) = 6;
      *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
      local_24 = 0;
      call_get_argument_type_info_helper<String_const&>(in_EDX, &local_24, pPVar1);
      call_get_argument_type_info_helper<String_const&>(in_EDX, &local_24, pPVar1);
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return pPVar1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindT<String const&, String const&, String const&>::_gen_argument_type_info(int) const */
   PropertyInfo *MethodBindT<String_const&,String_const&,String_const&>::_gen_argument_type_info(int param_1) {
      int in_EDX;
      undefined4 in_register_0000003c;
      PropertyInfo *pPVar1;
      long in_FS_OFFSET;
      int local_24;
      long local_20;
      pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
      local_20 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)pPVar1 = 0;
      *(undefined4*)( pPVar1 + 0x18 ) = 0;
      *(undefined8*)( pPVar1 + 0x20 ) = 0;
      *(undefined4*)( pPVar1 + 0x28 ) = 6;
      *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
      local_24 = 0;
      for (int i = 0; i < 3; i++) {
         call_get_argument_type_info_helper<String_const&>(in_EDX, &local_24, pPVar1);
      }
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return pPVar1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* void call_get_argument_type_info<String const&, String const&, String const&, String const&,
   String const&, OpenXRAction::ActionType>(int, PropertyInfo&) */
   void call_get_argument_type_info<String_const&,String_const&,String_const&,String_const&,String_const&,OpenXRAction::ActionType>(int param_1, PropertyInfo *param_2) {
      code *pcVar1;
      undefined1 auVar2[16];
      undefined8 uVar3;
      long lVar4;
      long lVar5;
      long in_FS_OFFSET;
      int local_ac;
      undefined8 local_a8;
      undefined8 local_a0;
      Vector local_98[8];
      undefined8 local_90;
      long local_88;
      long local_80;
      char *local_78;
      undefined1 local_70[16];
      undefined8 local_60;
      long local_58;
      undefined4 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      local_ac = 0;
      for (int i = 0; i < 5; i++) {
         call_get_argument_type_info_helper<String_const&>(param_1, &local_ac, param_2);
      }
      if (param_1 == local_ac) {
         local_a0 = 0;
         local_78 = "OpenXRAction::ActionType";
         local_70._0_8_ = 0x18;
         String::parse_latin1((StrRange*)&local_a0);
         String::split((char*)&local_88, SUB81((StrRange*)&local_a0, 0), 0x10e963);
         if (( local_80 == 0 ) || ( *(long*)( local_80 + -8 ) < 3 )) {
            local_90 = 0;
            local_78 = ".";
            local_70._0_8_ = 1;
            String::parse_latin1((StrRange*)&local_90);
            String::join(local_98);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         } else {
            local_90 = 0;
            local_78 = ".";
            local_70._0_8_ = 1;
            String::parse_latin1((StrRange*)&local_90);
            if (local_80 == 0) {
               lVar4 = -2;
               lVar5 = 0;
               LAB_0010ecc2:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar4, lVar5, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }
            lVar5 = *(long*)( local_80 + -8 );
            lVar4 = lVar5 + -2;
            if (lVar4 < 0) goto LAB_0010ecc2;
            String::operator +((String*)&local_78, (String*)( local_80 + lVar4 * 8 ));
            String::operator +((String*)local_98, (String*)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         }
         CowData<String>::_unref((CowData<String>*)&local_80);
         StringName::StringName((StringName*)&local_88, (String*)local_98, false);
         local_70 = (undefined1[16])0x0;
         local_90 = 0;
         local_a8 = 0;
         local_78 = (char*)0x2;
         local_60 = 0;
         local_58 = 0;
         local_50 = 0x10006;
         StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }
         CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         *(undefined4*)param_2 = local_78._0_4_;
         if (*(long*)( param_2 + 8 ) != local_70._0_8_) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 8 ));
            uVar3 = local_70._0_8_;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = local_70._8_8_;
            local_70 = auVar2 << 0x40;
            *(undefined8*)( param_2 + 8 ) = uVar3;
         }
         if (*(long*)( param_2 + 0x10 ) != local_70._8_8_) {
            StringName::unref();
            uVar3 = local_70._8_8_;
            local_70._8_8_ = 0;
            *(undefined8*)( param_2 + 0x10 ) = uVar3;
         }
         *(undefined4*)( param_2 + 0x18 ) = (undefined4)local_60;
         if (*(long*)( param_2 + 0x20 ) != local_58) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 0x20 ));
            lVar5 = local_58;
            local_58 = 0;
            *(long*)( param_2 + 0x20 ) = lVar5;
         }
         *(undefined4*)( param_2 + 0x28 ) = local_50;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if (( StringName::configured != '\0' ) && ( local_70._8_8_ != 0 )) {
            StringName::unref();
         }
         CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindT<String const&, String const&, String const&, String const&, String const&,
   OpenXRAction::ActionType>::_gen_argument_type_info(int) const */
   PropertyInfo *MethodBindT<String_const&,String_const&,String_const&,String_const&,String_const&,OpenXRAction::ActionType>::_gen_argument_type_info(int param_1) {
      int in_EDX;
      undefined4 in_register_0000003c;
      PropertyInfo *pPVar1;
      pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
      *(undefined4*)pPVar1 = 0;
      *(undefined4*)( pPVar1 + 0x18 ) = 0;
      *(undefined8*)( pPVar1 + 0x20 ) = 0;
      *(undefined4*)( pPVar1 + 0x28 ) = 6;
      *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
      call_get_argument_type_info<String_const&,String_const&,String_const&,String_const&,String_const&,OpenXRAction::ActionType>(in_EDX, pPVar1);
      return pPVar1;
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<String const&, String const&, String const&, String const&, String const&,
   OpenXRAction::ActionType>::~MethodBindT() */
   void MethodBindT<String_const&,String_const&,String_const&,String_const&,String_const&,OpenXRAction::ActionType>::~MethodBindT(MethodBindT<String_const&,String_const&,String_const&,String_const&,String_const&,OpenXRAction::ActionType> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<String const&, String const&, String const&>::~MethodBindT() */
   void MethodBindT<String_const&,String_const&,String_const&>::~MethodBindT(MethodBindT<String_const&,String_const&,String_const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<String const&, String const&>::~MethodBindT() */
   void MethodBindT<String_const&,String_const&>::~MethodBindT(MethodBindT<String_const&,String_const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* StringName::~StringName() */
   void StringName::~StringName(StringName *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
}
