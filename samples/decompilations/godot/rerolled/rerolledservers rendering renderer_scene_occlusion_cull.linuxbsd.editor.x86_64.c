/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this) {
   long *plVar1;
   size_t __n;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   __n = *(size_t*)( *(long*)this + -8 );
   uVar5 = 0x10;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = __n;
      memcpy(puVar4 + 2, *(void**)this, __n);
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

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* RendererSceneOcclusionCull::HZBuffer::is_empty() const */undefined4 RendererSceneOcclusionCull::HZBuffer::is_empty(HZBuffer *this) {
   return CONCAT31(( int3 )(( uint ) * (int*)( this + 0x18 ) >> 8), *(int*)( this + 0x18 ) == 0);
}
/* RendererSceneOcclusionCull::HZBuffer::update_mips() */void RendererSceneOcclusionCull::HZBuffer::update_mips(HZBuffer *this) {
   int iVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int *piVar5;
   float fVar6;
   uint uVar7;
   uint uVar8;
   int iVar9;
   int iVar10;
   uint uVar11;
   uint uVar12;
   long lVar13;
   long lVar14;
   long lVar15;
   code *pcVar16;
   undefined8 uVar17;
   int iVar18;
   int iVar19;
   int iVar20;
   int iVar21;
   int iVar22;
   int iVar23;
   uint *puVar24;
   long lVar25;
   uint uVar26;
   int iVar27;
   int iVar28;
   bool bVar29;
   float fVar30;
   long local_70;
   Engine::get_singleton();
   uVar17 = Engine::get_frames_drawn();
   uVar7 = *(uint*)( this + 0x18 );
   *(undefined8*)( this + 0x60 ) = uVar17;
   if (uVar7 != 0) {
      uVar8 = *(uint*)( this + 0x28 );
      uVar26 = 1;
      local_70 = 8;
      if (1 < uVar8) {
         do {
            if (uVar26 == uVar7) {
               _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)uVar26, (ulong)uVar26, "p_index", "count", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar16 = (code*)invalidInstructionException();
               ( *pcVar16 )();
            }

            piVar5 = (int*)( *(long*)( this + 0x20 ) + local_70 );
            iVar9 = piVar5[1];
            if (0 < iVar9) {
               iVar10 = *piVar5;
               iVar19 = 0;
               iVar21 = 0;
               LAB_0010018d:if (iVar10 < 1) goto LAB_001003b6;
               lVar13 = *(long*)( this + 0x30 );
               puVar24 = (uint*)( local_70 + -8 + *(long*)( this + 0x20 ) );
               uVar11 = *puVar24;
               uVar12 = puVar24[1];
               iVar1 = uVar12 - 1;
               iVar2 = uVar11 - 1;
               do {
                  iVar28 = iVar21 + 1;
                  if (iVar1 < iVar21 + 1) {
                     iVar28 = iVar1;
                  }

                  lVar14 = *(long*)( lVar13 + local_70 + -8 );
                  iVar3 = iVar21 + 2;
                  lVar15 = *(long*)( lVar13 + local_70 );
                  iVar28 = iVar28 * uVar11;
                  iVar23 = iVar21;
                  if (iVar1 <= iVar21) {
                     iVar23 = iVar1;
                  }

                  iVar22 = iVar1;
                  if (iVar3 <= iVar1) {
                     iVar22 = iVar3;
                  }

                  iVar22 = iVar22 * uVar11;
                  lVar25 = 1;
                  do {
                     iVar20 = (int)lVar25 * 2;
                     fVar30 = *(float*)( lVar14 + (long)(int)( iVar21 * uVar11 ) * 4 + -8 + lVar25 * 8 );
                     iVar18 = iVar20 + -2;
                     if (iVar2 < iVar20 + -2) {
                        iVar18 = iVar2;
                     }

                     fVar6 = *(float*)( lVar14 + (long)( iVar28 + iVar18 ) * 4 );
                     if (fVar30 <= fVar6) {
                        fVar30 = fVar6;
                     }

                     iVar4 = iVar20 + -1;
                     if (iVar2 < iVar20 + -1) {
                        iVar4 = iVar2;
                     }

                     fVar6 = *(float*)( lVar14 + (long)(int)( iVar23 * uVar11 + iVar4 ) * 4 );
                     if (fVar30 <= fVar6) {
                        fVar30 = fVar6;
                     }

                     fVar6 = *(float*)( lVar14 + (long)( iVar28 + iVar4 ) * 4 );
                     if (fVar30 <= fVar6) {
                        fVar30 = fVar6;
                     }

                     if (( uVar11 & 1 ) != 0) {
                        iVar27 = iVar2;
                        if (iVar20 <= iVar2) {
                           iVar27 = iVar20;
                        }

                        fVar6 = *(float*)( lVar14 + (long)(int)( iVar23 * uVar11 + iVar27 ) * 4 );
                        if (fVar30 <= fVar6) {
                           fVar30 = fVar6;
                        }

                        fVar6 = *(float*)( lVar14 + (long)( iVar27 + iVar28 ) * 4 );
                        if (fVar30 <= fVar6) {
                           fVar30 = fVar6;
                        }

                     }

                     if (( uVar12 & 1 ) != 0) {
                        fVar6 = *(float*)( lVar14 + (long)( iVar18 + iVar22 ) * 4 );
                        if (fVar30 <= fVar6) {
                           fVar30 = fVar6;
                        }

                        fVar6 = *(float*)( lVar14 + (long)( iVar4 + iVar22 ) * 4 );
                        if (fVar30 <= fVar6) {
                           fVar30 = fVar6;
                        }

                        if (( uVar11 & 1 ) != 0) {
                           if (iVar2 < iVar20) {
                              iVar20 = iVar2;
                           }

                           fVar6 = *(float*)( lVar14 + (long)( iVar20 + iVar22 ) * 4 );
                           if (fVar30 <= fVar6) {
                              fVar30 = fVar6;
                           }

                        }

                     }

                     *(float*)( lVar15 + (long)( iVar10 * iVar19 ) * 4 + -4 + lVar25 * 4 ) = fVar30;
                     bVar29 = lVar25 != iVar10;
                     lVar25 = lVar25 + 1;
                  }
 while ( bVar29 );
                  iVar19 = iVar19 + 1;
                  iVar21 = iVar3;
               }
 while ( iVar9 != iVar19 );
            }

            LAB_00100350:uVar26 = uVar26 + 1;
            local_70 = local_70 + 8;
         }
 while ( uVar26 != uVar8 );
      }

   }

   return;
   LAB_001003b6:iVar19 = iVar19 + 1;
   iVar21 = iVar21 + 2;
   if (iVar9 == iVar19) goto LAB_00100350;
   goto LAB_0010018d;
}
/* RendererSceneOcclusionCull::HZBuffer::get_debug_texture() */undefined8 RendererSceneOcclusionCull::HZBuffer::get_debug_texture(HZBuffer *this) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   double dVar4;
   float fVar5;
   char cVar6;
   long lVar7;
   long *plVar8;
   undefined8 uVar9;
   undefined1 uVar10;
   long in_FS_OFFSET;
   float fVar11;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x18 ) != 0) {
      local_18 = 0;
      cVar6 = Vector2i::operator ==(*(Vector2i**)( this + 0x20 ), (Vector2i*)&local_18);
      if (cVar6 == '\0') {
         if (*(long*)( this + 0x40 ) == 0) {
            Ref<Image>::instantiate<>((Ref<Image>*)( this + 0x40 ));
         }

         CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( this + 0x50 ));
         fVar5 = _LC9;
         dVar4 = _LC10;
         lVar1 = *(long*)( this + 0x50 );
         lVar2 = lVar1;
         for (lVar7 = 0; ( lVar2 != 0 && ( lVar7 < *(long*)( lVar2 + -8 ) ) ); lVar7 = lVar7 + 1) {
            if (*(int*)( this + 0x28 ) == 0) goto LAB_001004ac;
            fVar11 = *(float*)( **(long**)( this + 0x30 ) + lVar7 * 4 ) / *(float*)( this + 0x58 );
            uVar10 = 0xff;
            if (fVar11 < fVar5) {
               uVar10 = (undefined1)(int)( (double)fVar11 * dVar4 );
            }

            *(undefined1*)( lVar1 + lVar7 ) = uVar10;
            lVar2 = *(long*)( this + 0x50 );
         }

         if (*(int*)( this + 0x18 ) == 0) {
            LAB_001004ac:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, 0, 0, "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         Image::set_data(*(undefined8*)( this + 0x40 ), **(undefined4**)( this + 0x20 ), ( *(undefined4**)( this + 0x20 ) )[1], 0, 0, this + 0x48);
         if (*(long*)( this + 0x38 ) == 0) {
            plVar8 = (long*)RenderingServer::get_singleton();
            uVar9 = ( **(code**)( *plVar8 + 0x158 ) )(plVar8, this + 0x40);
            *(undefined8*)( this + 0x38 ) = uVar9;
         }
 else {
            plVar8 = (long*)RenderingServer::get_singleton();
            ( **(code**)( *plVar8 + 0x188 ) )(plVar8, *(undefined8*)( this + 0x38 ), this + 0x40, 0);
         }

         uVar9 = *(undefined8*)( this + 0x38 );
         goto LAB_001003f2;
      }

   }

   uVar9 = 0;
   LAB_001003f2:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */void CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this, long param_1) {
   CowData<unsigned_char> *pCVar1;
   long *plVar2;
   long lVar3;
   int iVar4;
   ulong uVar5;
   CowData<unsigned_char> *pCVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   CowData<unsigned_char> *pCVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      LAB_00100736:lVar10 = 0;
      pCVar6 = (CowData<unsigned_char>*)0x0;
   }
 else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar2 = (long*)( lVar3 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      if (lVar10 == 0) goto LAB_00100736;
      uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar6 = (CowData<unsigned_char>*)( ( uVar5 | uVar5 >> 0x20 ) + 1 );
   }

   uVar5 = param_1 - 1U | param_1 - 1U >> 1;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   pCVar9 = (CowData<unsigned_char>*)( uVar5 | uVar5 >> 0x20 );
   pCVar1 = pCVar9 + 1;
   if (param_1 <= lVar10) {
      if (( pCVar1 != pCVar6 ) && ( iVar4 = iVar4 != 0 )) {
         return;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return;
      }

      FUN_00100dda();
      return;
   }

   if (pCVar1 != pCVar6) {
      if (lVar10 == 0) {
         puVar7 = (undefined8*)Memory::alloc_static(( ulong )(pCVar9 + 0x11), false);
         if (puVar7 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            return;
         }

         puVar8 = puVar7 + 2;
         *puVar7 = 1;
         puVar7[1] = 0;
         *(undefined8**)this = puVar8;
         goto LAB_0010068c;
      }

      pCVar9 = this;
      iVar4 = _realloc(this, (long)pCVar1);
      if (iVar4 != 0) {
         return;
      }

   }

   puVar8 = *(undefined8**)this;
   if (puVar8 == (undefined8*)0x0) {
      resize<false>((long)pCVar9);
      return;
   }

   LAB_0010068c:puVar8[-1] = param_1;
   return;
}
/* RendererSceneOcclusionCull::HZBuffer::resize(Vector2i const&) */void RendererSceneOcclusionCull::HZBuffer::resize(HZBuffer *this, Vector2i *param_1) {
   int *piVar1;
   code *pcVar2;
   undefined4 uVar3;
   char cVar4;
   int iVar5;
   int iVar6;
   long *plVar7;
   long lVar8;
   ulong uVar9;
   int iVar10;
   int iVar11;
   int iVar12;
   int iVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   ulong uVar17;
   uint uVar18;
   uint uVar19;
   long in_FS_OFFSET;
   bool bVar20;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   *(undefined8*)( this + 0x68 ) = *(undefined8*)param_1;
   cVar4 = Vector2i::operator ==(param_1, (Vector2i*)&local_48);
   if (cVar4 != '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x00100aab. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *(code*)**(undefined8**)this )(this);
         return;
      }

      goto LAB_00100bf8;
   }

   if (( *(int*)( this + 0x18 ) == 0 ) || ( cVar4 = Vector2i::operator ==(param_1, *(Vector2i**)( this + 0x20 )) ),cVar4 == '\0') {
      iVar10 = *(int*)param_1;
      iVar12 = *(int*)( param_1 + 4 );
      uVar17 = 0;
      iVar6 = 0;
      do {
         iVar13 = iVar6;
         iVar11 = iVar10 >> 1;
         uVar16 = (int)uVar17 + iVar10 * iVar12;
         uVar17 = (ulong)uVar16;
         iVar10 = 1;
         if (0 < iVar11) {
            iVar10 = iVar11;
         }

         iVar5 = iVar12 >> 1;
         iVar12 = 1;
         if (0 < iVar5) {
            iVar12 = iVar5;
         }

         iVar6 = iVar13 + 1;
      }
 while ( ( 1 < iVar11 ) || ( 1 < iVar5 ) );
      uVar18 = uVar16 + 1;
      uVar19 = iVar13 + 2;
      if (uVar18 < *(uint*)( this + 8 )) {
         LAB_00100841:*(uint*)( this + 8 ) = uVar18;
      }
 else if (*(uint*)( this + 8 ) < uVar18) {
         if (*(uint*)( this + 0xc ) < uVar18) {
            uVar16 = uVar16 >> 1 | uVar16;
            uVar16 = uVar16 | uVar16 >> 2;
            uVar16 = uVar16 | uVar16 >> 4;
            uVar16 = uVar16 | uVar16 >> 8;
            uVar16 = ( uVar16 | uVar16 >> 0x10 ) + 1;
            *(uint*)( this + 0xc ) = uVar16;
            lVar8 = Memory::realloc_static(*(void**)( this + 0x10 ), (ulong)uVar16 * 4, false);
            *(long*)( this + 0x10 ) = lVar8;
            if (lVar8 == 0) goto LAB_001009f5;
         }

         goto LAB_00100841;
      }

      if (uVar19 < *(uint*)( this + 0x28 )) {
         LAB_00100a76:*(uint*)( this + 0x28 ) = uVar19;
      }
 else if (*(uint*)( this + 0x28 ) < uVar19) {
         if (*(uint*)( this + 0x2c ) < uVar19) {
            uVar16 = iVar13 + 1U >> 1 | iVar13 + 1U;
            uVar16 = uVar16 | uVar16 >> 2;
            uVar16 = uVar16 | uVar16 >> 4;
            uVar16 = uVar16 | uVar16 >> 8;
            uVar16 = ( uVar16 | uVar16 >> 0x10 ) + 1;
            *(uint*)( this + 0x2c ) = uVar16;
            lVar8 = Memory::realloc_static(*(void**)( this + 0x30 ), (ulong)uVar16 * 8, false);
            *(long*)( this + 0x30 ) = lVar8;
            if (lVar8 == 0) goto LAB_001009f5;
         }

         goto LAB_00100a76;
      }

      uVar16 = *(uint*)( this + 0x18 );
      if (uVar19 < uVar16) {
         LAB_001008a0:iVar10 = *(int*)param_1;
         iVar12 = *(int*)( param_1 + 4 );
         *(uint*)( this + 0x18 ) = uVar19;
         lVar8 = *(long*)( this + 0x10 );
         uVar16 = uVar19;
      }
 else {
         if (uVar16 < uVar19) {
            uVar14 = iVar13 + 1;
            if (*(uint*)( this + 0x1c ) < uVar19) {
               uVar16 = uVar14 >> 1 | uVar14;
               uVar16 = uVar16 | uVar16 >> 2;
               uVar16 = uVar16 | uVar16 >> 4;
               uVar16 = uVar16 | uVar16 >> 8;
               uVar16 = ( uVar16 | uVar16 >> 0x10 ) + 1;
               *(uint*)( this + 0x1c ) = uVar16;
               lVar8 = Memory::realloc_static(*(void**)( this + 0x20 ), (ulong)uVar16 * 8, false);
               *(long*)( this + 0x20 ) = lVar8;
               if (lVar8 == 0) {
                  LAB_001009f5:_err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               uVar16 = *(uint*)( this + 0x18 );
               if (uVar19 <= uVar16) goto LAB_001008a0;
            }

            memset((void*)( *(long*)( this + 0x20 ) + (ulong)uVar16 * 8 ), 0, ( ulong )(uVar14 - uVar16) * 8 + 8);
            goto LAB_001008a0;
         }

         iVar10 = *(int*)param_1;
         iVar12 = *(int*)( param_1 + 4 );
         lVar8 = *(long*)( this + 0x10 );
      }

      uVar9 = 0;
      do {
         uVar15 = uVar9;
         if (uVar9 == uVar16) goto LAB_0010096e;
         piVar1 = *(int**)( this + 0x20 );
         uVar19 = *(uint*)( this + 0x28 );
         piVar1[uVar9 * 2] = iVar10;
         ( piVar1 + uVar9 * 2 )[1] = iVar12;
         uVar15 = (ulong)uVar19;
         if (uVar19 <= (uint)uVar9) goto LAB_0010096e;
         *(long*)( *(long*)( this + 0x30 ) + uVar9 * 8 ) = lVar8;
         uVar3 = _LC17;
         iVar6 = iVar10 >> 1;
         lVar8 = lVar8 + (long)( iVar10 * iVar12 ) * 4;
         iVar10 = iVar6;
         if (iVar6 < 1) {
            iVar10 = 1;
         }

         iVar12 = iVar12 >> 1;
         if (iVar12 < 1) {
            iVar12 = 1;
         }

         uVar9 = uVar9 + 1;
      }
 while ( (long)iVar13 + 2U != uVar9 );
      if (0 < (int)uVar18) {
         uVar16 = *(uint*)( this + 8 );
         uVar9 = 0;
         do {
            uVar15 = uVar9;
            if (uVar9 == uVar16) {
               LAB_0010096e:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar9, uVar15, "p_index", "count", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            *(undefined4*)( *(long*)( this + 0x10 ) + uVar9 * 4 ) = uVar3;
            bVar20 = uVar17 != uVar9;
            uVar9 = uVar9 + 1;
         }
 while ( bVar20 );
      }

      CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( this + 0x50 ), (long)( *piVar1 * piVar1[1] ));
      if (*(long*)( this + 0x38 ) != 0) {
         plVar7 = (long*)RenderingServer::get_singleton();
         ( **(code**)( *plVar7 + 0x11b0 ) )(plVar7, *(undefined8*)( this + 0x38 ));
         *(undefined8*)( this + 0x38 ) = 0;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00100bf8:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RendererSceneOcclusionCull::HZBuffer::clear() */void RendererSceneOcclusionCull::HZBuffer::clear(HZBuffer *this) {
   char cVar1;
   long lVar2;
   long *plVar3;
   if (*(int*)( this + 0x18 ) == 0) {
      return;
   }

   if (*(int*)( this + 8 ) != 0) {
      *(undefined4*)( this + 8 ) = 0;
   }

   *(undefined4*)( this + 0x18 ) = 0;
   if (*(int*)( this + 0x28 ) != 0) {
      *(undefined4*)( this + 0x28 ) = 0;
   }

   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( this + 0x50 ), 0);
   if (*(long*)( this + 0x40 ) != 0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         memdelete<Image>(*(Image**)( this + 0x40 ));
      }

      *(undefined8*)( this + 0x40 ) = 0;
   }

   lVar2 = RenderingServer::get_singleton();
   if (lVar2 != 0) {
      plVar3 = (long*)RenderingServer::get_singleton();
      /* WARNING: Could not recover jumptable at 0x00100c7d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *plVar3 + 0x11b0 ) )(plVar3, *(undefined8*)( this + 0x38 ));
      return;
   }

   _err_print_error("clear", "servers/rendering/renderer_scene_occlusion_cull.cpp", 0x42, "Parameter \"RenderingServer::get_singleton()\" is null.", 0, 0);
   return;
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_00100dda(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* Image::~Image() */void Image::~Image(Image *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = operator_delete;
   if (*(long*)( this + 0x250 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x250 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x250 );
         *(undefined8*)( this + 0x250 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         Resource::~Resource((Resource*)this);
         return;
      }

   }

   Resource::~Resource((Resource*)this);
   return;
}
/* Image::~Image() */void Image::~Image(Image *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = operator_delete;
   if (*(long*)( this + 0x250 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x250 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x250 );
         *(undefined8*)( this + 0x250 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x268);
   return;
}
/* void memdelete<Image>(Image*) */void memdelete<Image>(Image *param_1) {
   long *plVar1;
   long lVar2;
   char cVar3;
   cVar3 = predelete_handler((Object*)param_1);
   if (cVar3 == '\0') {
      return;
   }

   if (*(code**)( *(long*)param_1 + 0x140 ) == Image::~Image) {
      *(code**)param_1 = operator_delete;
      if (*(long*)( param_1 + 0x250 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( param_1 + 0x250 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( param_1 + 0x250 );
            *(undefined8*)( param_1 + 0x250 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      Resource::~Resource((Resource*)param_1);
      Memory::free_static(param_1, false);
      return;
   }

   ( **(code**)( *(long*)param_1 + 0x140 ) )(param_1);
   Memory::free_static(param_1, false);
   return;
}
/* RendererSceneOcclusionCull::HZBuffer::~HZBuffer() */void RendererSceneOcclusionCull::HZBuffer::~HZBuffer(HZBuffer *this) {
   long *plVar1;
   long lVar2;
   char cVar3;
   *(undefined***)this = &PTR_clear_00101488;
   if (*(long*)( this + 0x50 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x50 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x50 );
         *(undefined8*)( this + 0x50 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x40 ) != 0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
         memdelete<Image>(*(Image**)( this + 0x40 ));
      }

   }

   if (*(void**)( this + 0x30 ) != (void*)0x0) {
      if (*(int*)( this + 0x28 ) != 0) {
         *(undefined4*)( this + 0x28 ) = 0;
      }

      Memory::free_static(*(void**)( this + 0x30 ), false);
   }

   if (*(void**)( this + 0x20 ) != (void*)0x0) {
      if (*(int*)( this + 0x18 ) != 0) {
         *(undefined4*)( this + 0x18 ) = 0;
      }

      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   if (*(void**)( this + 0x10 ) != (void*)0x0) {
      if (*(int*)( this + 8 ) != 0) {
         *(undefined4*)( this + 8 ) = 0;
      }

      Memory::free_static(*(void**)( this + 0x10 ), false);
      return;
   }

   return;
}
/* void Ref<Image>::instantiate<>() */void Ref<Image>::instantiate<>(Ref<Image> *this) {
   Image *pIVar1;
   char cVar2;
   Resource *this_00;
   long lVar3;
   Resource *pRVar4;
   Image *pIVar5;
   byte bVar6;
   bVar6 = 0;
   this_00 = (Resource*)operator_new(0x268, "");
   pRVar4 = this_00;
   for (lVar3 = 0x4d; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined8*)pRVar4 = 0;
      pRVar4 = pRVar4 + (ulong)bVar6 * -0x10 + 8;
   }

   Resource::Resource(this_00);
   this_00[0x260] = (Resource)0x0;
   *(code**)this_00 = operator_delete;
   *(undefined4*)( this_00 + 0x240 ) = 0;
   *(undefined8*)( this_00 + 0x250 ) = 0;
   *(undefined8*)( this_00 + 600 ) = 0;
   postinitialize_handler((Object*)this_00);
   cVar2 = RefCounted::init_ref();
   if (cVar2 == '\0') {
      pIVar1 = *(Image**)this;
      if (pIVar1 == (Image*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
      cVar2 = RefCounted::unreference();
      if (cVar2 == '\0') {
         return;
      }

      memdelete<Image>(pIVar1);
      return;
   }

   pIVar1 = *(Image**)this;
   pIVar5 = pIVar1;
   if (this_00 != (Resource*)pIVar1) {
      *(Resource**)this = this_00;
      cVar2 = RefCounted::reference();
      pIVar5 = (Image*)this_00;
      if (cVar2 == '\0') {
         *(undefined8*)this = 0;
         if (pIVar1 == (Image*)0x0) goto LAB_00101218;
         cVar2 = RefCounted::unreference();
      }
 else {
         if (pIVar1 == (Image*)0x0) goto LAB_00101218;
         cVar2 = RefCounted::unreference();
      }

      if (cVar2 != '\0') {
         memdelete<Image>(pIVar1);
      }

   }

   LAB_00101218:cVar2 = RefCounted::unreference();
   if (cVar2 == '\0') {
      return;
   }

   memdelete<Image>(pIVar5);
   return;
}
/* RendererSceneOcclusionCull::HZBuffer::~HZBuffer() */void RendererSceneOcclusionCull::HZBuffer::~HZBuffer(HZBuffer *this) {
   long *plVar1;
   long lVar2;
   char cVar3;
   *(undefined***)this = &PTR_clear_00101488;
   if (*(long*)( this + 0x50 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x50 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x50 );
         *(undefined8*)( this + 0x50 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x40 ) != 0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
         memdelete<Image>(*(Image**)( this + 0x40 ));
      }

   }

   for (int i = 0; i < 3; i++) {
      if (*(void**)( this + ( -16*i + 48 ) ) != (void*)0) {
         if (*(int*)( this + ( -16*i + 40 ) ) != 0) {
            *(undefined4*)( this + ( -16*i + 40 ) ) = 0;
         }

         Memory::free_static(*(void**)( this + ( -16*i + 48 ) ), false);
      }

   }

   operator_delete(this, 0x70);
   return;
}
/* CowData<unsigned char>::_realloc(long) */undefined8 CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererSceneOcclusionCull::singleton */void RendererSceneOcclusionCull::_GLOBAL__sub_I_singleton(void) {
   HZBuffer::corners._0_16_ = (undefined1[16])0x0;
   HZBuffer::corners._16_8_ = __LC21;
   HZBuffer::corners._24_8_ = _UNK_001014c8;
   HZBuffer::corners._32_8_ = __LC22;
   HZBuffer::corners._40_8_ = _UNK_001014d8;
   HZBuffer::corners._48_8_ = __LC23;
   HZBuffer::corners._56_8_ = _UNK_001014e8;
   HZBuffer::corners._64_8_ = __LC24;
   HZBuffer::corners._72_8_ = _UNK_001014f8;
   HZBuffer::corners._80_8_ = __LC24;
   HZBuffer::corners._88_8_ = _UNK_001014f8;
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* RendererSceneOcclusionCull::HZBuffer::~HZBuffer() */void RendererSceneOcclusionCull::HZBuffer::~HZBuffer(HZBuffer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Image::~Image() */void Image::~Image(Image *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

