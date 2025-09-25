/* embree::StringStream::StringStream(embree::Ref<embree::Stream<int> > const&, std::__cxx11::string
   const&, std::__cxx11::string const&, bool) */void embree::StringStream::StringStream(StringStream *this, Ref *param_1, string *param_2, string *param_3, bool param_4) {
   byte bVar1;
   StringStream *__src;
   long *plVar2;
   long *plVar3;
   long *plVar4;
   byte *pbVar5;
   StringStream *__dest;
   ulong uVar6;
   byte *pbVar7;
   undefined8 *puVar8;
   long in_FS_OFFSET;
   byte bVar9;
   ulong local_48;
   long local_40;
   bVar9 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 8 ) = 0;
   *(undefined**)this = &DAT_00103d40;
   for (int i = 0; i < 6; i++) {
      *(undefined8*)( this + ( 8*i + 16 ) ) = 0;
   }

   plVar2 = (long*)operator_new(0x10000);
   *(long**)( this + 0x28 ) = plVar2;
   *(long**)( this + 0x38 ) = plVar2 + 0x2000;
   plVar3 = plVar2;
   do {
      *(undefined1*)( plVar3 + 2 ) = 0;
      plVar4 = plVar3 + 8;
      *plVar3 = (long)( plVar3 + 2 );
      plVar3[1] = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[6] = -1;
      plVar3[7] = -1;
      plVar3 = plVar4;
   }
 while ( plVar4 != plVar2 + 0x2000 );
   *(long**)( this + 0x30 ) = plVar4;
   *(undefined***)this = &PTR__StringStream_00103d80;
   plVar3 = *(long**)param_1;
   *(long**)( this + 0x40 ) = plVar3;
   if (plVar3 != (long*)0x0) {
      if (*(code**)( *plVar3 + 0x10 ) == RefCount::refInc) {
         LOCK();
         plVar3[1] = plVar3[1] + 1;
         UNLOCK();
      }
 else {
         ( **(code**)( *plVar3 + 0x10 ) )();
      }

   }

   __dest = this + 600;
   *(StringStream**)( this + 0x248 ) = __dest;
   uVar6 = *(ulong*)( param_3 + 8 );
   __src = *(StringStream**)param_3;
   local_48 = uVar6;
   if (uVar6 < 0x10) {
      if (uVar6 == 1) {
         this[600] = *__src;
         goto LAB_00100143;
      }

      if (uVar6 == 0) goto LAB_00100143;
   }
 else {
      __dest = (StringStream*)std::__cxx11::string::_M_create((ulong*)( this + 0x248 ), ( ulong ) & local_48);
      *(StringStream**)( this + 0x248 ) = __dest;
      *(ulong*)( this + 600 ) = local_48;
   }

   memcpy(__dest, __src, uVar6);
   __dest = *(StringStream**)( this + 0x248 );
   LAB_00100143:*(ulong*)( this + 0x250 ) = local_48;
   __dest[local_48] = (StringStream)0x0;
   *(undefined8*)( this + 0x48 ) = 0;
   this[0x268] = (StringStream)param_4;
   *(undefined8*)( this + 0x140 ) = 0;
   puVar8 = (undefined8*)( ( ulong )(this + 0x50) & 0xfffffffffffffff8 );
   for (uVar6 = ( ulong )(( (int)( this + 0x48 ) - (int)(undefined8*)( ( ulong )(this + 0x50) & 0xfffffffffffffff8 ) ) + 0x100U >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + (ulong)bVar9 * -2 + 1;
   }

   if (*(long*)( param_2 + 8 ) != 0) {
      pbVar5 = *(byte**)param_2;
      pbVar7 = pbVar5 + *(long*)( param_2 + 8 );
      do {
         bVar1 = *pbVar5;
         pbVar5 = pbVar5 + 1;
         ( this + 0x48 )[bVar1] = (StringStream)0x1;
      }
 while ( pbVar5 != pbVar7 );
   }

   *(undefined8*)( this + 0x148 ) = 0;
   *(undefined8*)( this + 0x240 ) = 0;
   puVar8 = (undefined8*)( ( ulong )(this + 0x150) & 0xfffffffffffffff8 );
   for (uVar6 = ( ulong )(( (int)( this + 0x148 ) - (int)(undefined8*)( ( ulong )(this + 0x150) & 0xfffffffffffffff8 ) ) + 0x100U >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + (ulong)bVar9 * -2 + 1;
   }

   pbVar5 = stringChars + DAT_00103268;
   pbVar7 = stringChars;
   if (DAT_00103268 != 0) {
      do {
         bVar9 = *pbVar7;
         pbVar7 = pbVar7 + 1;
         ( this + 0x148 )[bVar9] = (StringStream)0x1;
      }
 while ( pbVar5 != pbVar7 );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* embree::StringStream::next[abi:cxx11]() */void embree::StringStream::next_abi_cxx11_(void) {
   _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
   long *plVar2;
   long *plVar3;
   undefined4 *puVar4;
   ulong uVar5;
   undefined1 *__src;
   char *__src_00;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined4 uVar8;
   int iVar9;
   long lVar10;
   size_t __n;
   ulong *puVar11;
   long lVar12;
   uint uVar13;
   long *plVar14;
   long *plVar15;
   long in_RSI;
   ulong *in_RDI;
   _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var16;
   _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var17;
   long in_FS_OFFSET;
   char *local_88;
   char *local_80;
   char *local_78;
   ulong local_68;
   _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
   undefined8 local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   LAB_001002bb:plVar15 = *(long**)( in_RSI + 0x40 );
   if (plVar15[4] == 0) {
      ( **(code**)( *plVar15 + 0x28 ) )(&local_68, plVar15);
      uVar8 = ( **(code**)( *plVar15 + 0x20 ) )(plVar15);
      uVar7 = local_50;
      uVar6 = local_58;
      p_Var17 = local_60;
      uVar5 = local_68;
      if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
         if (__libc_single_threaded == '\0') {
            LOCK();
            *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
            UNLOCK();
         }
 else {
            *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
         }

         if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
            p_Var16 = local_60 + 8;
            if (*(long*)( local_60 + 8 ) == 0x100000001) {
               *(undefined8*)( local_60 + 8 ) = 0;
               ( **(code**)( *(long*)local_60 + 0x10 ) )(local_60);
               ( **(code**)( *(long*)p_Var17 + 0x18 ) )(p_Var17);
            }
 else {
               if (__libc_single_threaded == '\0') {
                  LOCK();
                  iVar9 = *(int*)p_Var16;
                  *(int*)p_Var16 = *(int*)p_Var16 + -1;
                  UNLOCK();
               }
 else {
                  iVar9 = *(int*)( local_60 + 8 );
                  *(int*)( local_60 + 8 ) = iVar9 + -1;
               }

               if (iVar9 == 1) {
                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
               }

            }

         }

      }

      lVar10 = plVar15[3];
      lVar12 = plVar15[4];
      if (lVar10 + lVar12 == 0x400) {
         if (lVar10 == 0) goto LAB_00103b82;
         lVar10 = lVar10 + -1;
         plVar15[3] = lVar10;
         uVar13 = (int)plVar15[2] + 1U & 0x3ff;
         plVar15[2] = (ulong)uVar13;
      }
 else {
         uVar13 = (uint)plVar15[2];
      }

      plVar15[4] = lVar12 + 1;
      puVar4 = (undefined4*)( plVar15[5] + ( ulong )((int)lVar10 + uVar13 + (int)lVar12 & 0x3ff) * 0x28 );
      *puVar4 = uVar8;
      p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
      *(ulong*)( puVar4 + 2 ) = uVar5;
      if (p_Var17 == p_Var16) {
         LAB_0010040f:*(undefined8*)( puVar4 + 6 ) = uVar6;
         *(undefined8*)( puVar4 + 8 ) = uVar7;
         if (p_Var17 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_00100420;
      }
 else {
         if (p_Var17 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
            if (p_Var16 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
               *(undefined8*)( puVar4 + 6 ) = uVar6;
               *(undefined8*)( puVar4 + 8 ) = uVar7;
               goto LAB_00100420;
            }

            LAB_001003cf:p_Var1 = p_Var16 + 8;
            if (*(long*)( p_Var16 + 8 ) == 0x100000001) {
               *(undefined8*)( p_Var16 + 8 ) = 0;
               ( **(code**)( *(long*)p_Var16 + 0x10 ) )(p_Var16);
               ( **(code**)( *(long*)p_Var16 + 0x18 ) )(p_Var16);
            }
 else {
               if (__libc_single_threaded == '\0') {
                  LOCK();
                  iVar9 = *(int*)p_Var1;
                  *(int*)p_Var1 = *(int*)p_Var1 + -1;
                  UNLOCK();
               }
 else {
                  iVar9 = *(int*)( p_Var16 + 8 );
                  *(int*)( p_Var16 + 8 ) = iVar9 + -1;
               }

               if (iVar9 == 1) {
                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var16);
               }

            }

            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
            goto LAB_0010040f;
         }

         if (__libc_single_threaded == '\0') {
            LOCK();
            *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
            UNLOCK();
            p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
         }
 else {
            *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
            p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
         }

         if (p_Var16 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_001003cf;
         *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
         *(undefined8*)( puVar4 + 6 ) = uVar6;
         *(undefined8*)( puVar4 + 8 ) = uVar7;
      }

      p_Var16 = p_Var17 + 8;
      if (*(long*)( p_Var17 + 8 ) == 0x100000001) {
         *(undefined8*)( p_Var17 + 8 ) = 0;
         ( **(code**)( *(long*)p_Var17 + 0x10 ) )(p_Var17);
         ( **(code**)( *(long*)p_Var17 + 0x18 ) )(p_Var17);
      }
 else {
         if (__libc_single_threaded == '\0') {
            LOCK();
            iVar9 = *(int*)p_Var16;
            *(int*)p_Var16 = *(int*)p_Var16 + -1;
            UNLOCK();
         }
 else {
            iVar9 = *(int*)( p_Var17 + 8 );
            *(int*)( p_Var17 + 8 ) = iVar9 + -1;
         }

         if (iVar9 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var17);
         }

      }

   }

   LAB_00100420:if (*(int*)( plVar15[5] + ( ulong )((int)plVar15[3] + (int)plVar15[2] & 0x3ff) * 0x28 ) != -1) {
      plVar15 = *(long**)( in_RSI + 0x40 );
      lVar10 = plVar15[4];
      plVar14 = plVar15;
      if (*(long*)( in_RSI + 0x250 ) != 0) {
         if (lVar10 == 0) {
            ( **(code**)( *plVar15 + 0x28 ) )(&local_68, plVar15);
            uVar8 = ( **(code**)( *plVar15 + 0x20 ) )(plVar15);
            uVar7 = local_50;
            uVar6 = local_58;
            p_Var17 = local_60;
            uVar5 = local_68;
            if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
               if (__libc_single_threaded == '\0') {
                  LOCK();
                  *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
                  UNLOCK();
               }
 else {
                  *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
               }

               if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                  p_Var16 = local_60 + 8;
                  if (*(long*)( local_60 + 8 ) == 0x100000001) {
                     *(undefined8*)( local_60 + 8 ) = 0;
                     ( **(code**)( *(long*)local_60 + 0x10 ) )(local_60);
                     ( **(code**)( *(long*)p_Var17 + 0x18 ) )(p_Var17);
                  }
 else {
                     if (__libc_single_threaded == '\0') {
                        LOCK();
                        iVar9 = *(int*)p_Var16;
                        *(int*)p_Var16 = *(int*)p_Var16 + -1;
                        UNLOCK();
                     }
 else {
                        iVar9 = *(int*)( local_60 + 8 );
                        *(int*)( local_60 + 8 ) = iVar9 + -1;
                     }

                     if (iVar9 == 1) {
                        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
                     }

                  }

               }

            }

            lVar10 = plVar15[3];
            lVar12 = plVar15[4];
            if (lVar10 + lVar12 == 0x400) {
               if (lVar10 == 0) goto LAB_00103b82;
               lVar10 = lVar10 + -1;
               plVar15[3] = lVar10;
               uVar13 = (int)plVar15[2] + 1U & 0x3ff;
               plVar15[2] = (ulong)uVar13;
            }
 else {
               uVar13 = (uint)plVar15[2];
            }

            plVar15[4] = lVar12 + 1;
            puVar4 = (undefined4*)( plVar15[5] + ( ulong )(uVar13 + (int)lVar10 + (int)lVar12 & 0x3ff) * 0x28 );
            *puVar4 = uVar8;
            p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
            *(ulong*)( puVar4 + 2 ) = uVar5;
            if (p_Var17 == p_Var16) {
               LAB_001005a5:*(undefined8*)( puVar4 + 6 ) = uVar6;
               *(undefined8*)( puVar4 + 8 ) = uVar7;
               if (p_Var17 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_00101e54;
            }
 else {
               if (p_Var17 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                  if (p_Var16 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                     *(undefined8*)( puVar4 + 6 ) = uVar6;
                     *(undefined8*)( puVar4 + 8 ) = uVar7;
                     lVar10 = ( *(long**)( in_RSI + 0x40 ) )[4];
                     plVar14 = *(long**)( in_RSI + 0x40 );
                     goto LAB_001005cb;
                  }

                  LAB_00100565:p_Var1 = p_Var16 + 8;
                  if (*(long*)( p_Var16 + 8 ) == 0x100000001) {
                     *(undefined8*)( p_Var16 + 8 ) = 0;
                     ( **(code**)( *(long*)p_Var16 + 0x10 ) )(p_Var16);
                     ( **(code**)( *(long*)p_Var16 + 0x18 ) )(p_Var16);
                  }
 else {
                     if (__libc_single_threaded == '\0') {
                        LOCK();
                        iVar9 = *(int*)p_Var1;
                        *(int*)p_Var1 = *(int*)p_Var1 + -1;
                        UNLOCK();
                     }
 else {
                        iVar9 = *(int*)( p_Var16 + 8 );
                        *(int*)( p_Var16 + 8 ) = iVar9 + -1;
                     }

                     if (iVar9 == 1) {
                        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var16);
                     }

                  }

                  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
                  goto LAB_001005a5;
               }

               if (__libc_single_threaded == '\0') {
                  LOCK();
                  *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
                  UNLOCK();
                  p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
               }
 else {
                  *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
                  p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
               }

               if (p_Var16 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_00100565;
               *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
               *(undefined8*)( puVar4 + 6 ) = uVar6;
               *(undefined8*)( puVar4 + 8 ) = uVar7;
               LAB_00101e54:p_Var16 = p_Var17 + 8;
               if (*(long*)( p_Var17 + 8 ) == 0x100000001) {
                  *(undefined8*)( p_Var17 + 8 ) = 0;
                  ( **(code**)( *(long*)p_Var17 + 0x10 ) )(p_Var17);
                  ( **(code**)( *(long*)p_Var17 + 0x18 ) )(p_Var17);
               }
 else {
                  if (__libc_single_threaded == '\0') {
                     LOCK();
                     iVar9 = *(int*)p_Var16;
                     *(int*)p_Var16 = *(int*)p_Var16 + -1;
                     UNLOCK();
                  }
 else {
                     iVar9 = *(int*)( p_Var17 + 8 );
                     *(int*)( p_Var17 + 8 ) = iVar9 + -1;
                  }

                  if (iVar9 == 1) {
                     std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var17);
                  }

               }

            }

            lVar10 = ( *(long**)( in_RSI + 0x40 ) )[4];
            plVar14 = *(long**)( in_RSI + 0x40 );
         }

         LAB_001005cb:if (*(int*)( plVar15[5] + ( ulong )((int)plVar15[3] + (int)plVar15[2] & 0x3ff) * 0x28 ) == 10) {
            if (lVar10 == 0) {
               ( **(code**)( *plVar14 + 0x28 ) )(&local_68, plVar14);
               uVar8 = ( **(code**)( *plVar14 + 0x20 ) )(plVar14);
               uVar5 = local_68;
               if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                  if (__libc_single_threaded == '\0') {
                     LOCK();
                     *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
                     UNLOCK();
                  }
 else {
                     *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
                  }

                  if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                     p_Var17 = local_60 + 8;
                     if (*(long*)( local_60 + 8 ) == 0x100000001) {
                        *(undefined8*)( local_60 + 8 ) = 0;
                        ( **(code**)( *(long*)local_60 + 0x10 ) )();
                        ( **(code**)( *(long*)local_60 + 0x18 ) )();
                     }
 else {
                        if (__libc_single_threaded == '\0') {
                           LOCK();
                           iVar9 = *(int*)p_Var17;
                           *(int*)p_Var17 = *(int*)p_Var17 + -1;
                           UNLOCK();
                        }
 else {
                           iVar9 = *(int*)( local_60 + 8 );
                           *(int*)( local_60 + 8 ) = iVar9 + -1;
                        }

                        if (iVar9 == 1) {
                           std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
                        }

                     }

                  }

               }

               lVar10 = plVar14[3];
               lVar12 = plVar14[4];
               if (lVar10 + lVar12 == 0x400) {
                  if (lVar10 == 0) {
                     LAB_00103b82:/* WARNING: Subroutine does not return */abort();
                  }

                  lVar10 = lVar10 + -1;
                  plVar14[3] = lVar10;
                  uVar13 = (int)plVar14[2] + 1U & 0x3ff;
                  plVar14[2] = (ulong)uVar13;
               }
 else {
                  uVar13 = (uint)plVar14[2];
               }

               plVar14[4] = lVar12 + 1;
               puVar4 = (undefined4*)( plVar14[5] + ( ulong )(uVar13 + (int)lVar10 + (int)lVar12 & 0x3ff) * 0x28 );
               *puVar4 = uVar8;
               p_Var17 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
               *(ulong*)( puVar4 + 2 ) = uVar5;
               if (local_60 == p_Var17) {
                  LAB_00102a54:*(undefined8*)( puVar4 + 8 ) = local_50;
                  *(undefined8*)( puVar4 + 6 ) = local_58;
                  if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_00102f1e;
               }
 else {
                  if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                     if (p_Var17 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                        *(undefined8*)( puVar4 + 8 ) = local_50;
                        *(undefined8*)( puVar4 + 6 ) = local_58;
                        lVar10 = plVar14[4];
                        goto LAB_00102a6f;
                     }

                     LAB_00102a14:p_Var16 = p_Var17 + 8;
                     if (*(long*)( p_Var17 + 8 ) == 0x100000001) {
                        *(undefined8*)( p_Var17 + 8 ) = 0;
                        ( **(code**)( *(long*)p_Var17 + 0x10 ) )(p_Var17);
                        ( **(code**)( *(long*)p_Var17 + 0x18 ) )(p_Var17);
                     }
 else {
                        if (__libc_single_threaded == '\0') {
                           LOCK();
                           iVar9 = *(int*)p_Var16;
                           *(int*)p_Var16 = *(int*)p_Var16 + -1;
                           UNLOCK();
                        }
 else {
                           iVar9 = *(int*)( p_Var17 + 8 );
                           *(int*)( p_Var17 + 8 ) = iVar9 + -1;
                        }

                        if (iVar9 == 1) {
                           std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var17);
                        }

                     }

                     *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = local_60;
                     goto LAB_00102a54;
                  }

                  if (__libc_single_threaded == '\0') {
                     LOCK();
                     *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
                     UNLOCK();
                     p_Var17 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
                  }
 else {
                     *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
                     p_Var17 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
                  }

                  if (p_Var17 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_00102a14;
                  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = local_60;
                  *(undefined8*)( puVar4 + 8 ) = local_50;
                  *(undefined8*)( puVar4 + 6 ) = local_58;
                  LAB_00102f1e:p_Var17 = local_60 + 8;
                  if (*(long*)( local_60 + 8 ) == 0x100000001) {
                     *(undefined8*)( local_60 + 8 ) = 0;
                     ( **(code**)( *(long*)local_60 + 0x10 ) )(local_60);
                     ( **(code**)( *(long*)local_60 + 0x18 ) )(local_60);
                     lVar10 = plVar14[4];
                     goto LAB_00102a6f;
                  }

                  if (__libc_single_threaded == '\0') {
                     LOCK();
                     iVar9 = *(int*)p_Var17;
                     *(int*)p_Var17 = *(int*)p_Var17 + -1;
                     UNLOCK();
                  }
 else {
                     iVar9 = *(int*)( local_60 + 8 );
                     *(int*)( local_60 + 8 ) = iVar9 + -1;
                  }

                  if (iVar9 == 1) {
                     std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
                  }

               }

               lVar10 = plVar14[4];
            }

            LAB_00102a6f:puVar11 = in_RDI + 2;
            plVar14[3] = plVar14[3] + 1;
            plVar14[4] = lVar10 + -1;
            *in_RDI = (ulong)puVar11;
            uVar5 = *(ulong*)( in_RSI + 0x250 );
            __src = *(undefined1**)( in_RSI + 0x248 );
            local_68 = uVar5;
            if (uVar5 < 0x10) {
               if (uVar5 == 1) {
                  *(undefined1*)( in_RDI + 2 ) = *__src;
                  goto LAB_00102ab6;
               }

               if (uVar5 == 0) goto LAB_00102ab6;
            }
 else {
               puVar11 = (ulong*)std::__cxx11::string::_M_create(in_RDI, ( ulong ) & local_68);
               *in_RDI = (ulong)puVar11;
               in_RDI[2] = local_68;
            }

            memcpy(puVar11, __src, uVar5);
            puVar11 = (ulong*)*in_RDI;
            LAB_00102ab6:in_RDI[1] = local_68;
            *(undefined1*)( (long)puVar11 + local_68 ) = 0;
            LAB_0010116d:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            LAB_0010324e:/* WARNING: Subroutine does not return */__stack_chk_fail();
         }

      }

      if (*(char*)( in_RSI + 0x268 ) == '\0') {
         LAB_00100788:if (lVar10 == 0) {
            ( **(code**)( *plVar14 + 0x28 ) )(&local_68, plVar14);
            uVar8 = ( **(code**)( *plVar14 + 0x20 ) )(plVar14);
            uVar7 = local_50;
            uVar6 = local_58;
            p_Var17 = local_60;
            uVar5 = local_68;
            if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
               if (__libc_single_threaded == '\0') {
                  LOCK();
                  *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
                  UNLOCK();
               }
 else {
                  *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
               }

               if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                  p_Var16 = local_60 + 8;
                  if (*(long*)( local_60 + 8 ) == 0x100000001) {
                     *(undefined8*)( local_60 + 8 ) = 0;
                     ( **(code**)( *(long*)local_60 + 0x10 ) )(local_60);
                     ( **(code**)( *(long*)p_Var17 + 0x18 ) )(p_Var17);
                  }
 else {
                     if (__libc_single_threaded == '\0') {
                        LOCK();
                        iVar9 = *(int*)p_Var16;
                        *(int*)p_Var16 = *(int*)p_Var16 + -1;
                        UNLOCK();
                     }
 else {
                        iVar9 = *(int*)( local_60 + 8 );
                        *(int*)( local_60 + 8 ) = iVar9 + -1;
                     }

                     if (iVar9 == 1) {
                        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
                     }

                  }

               }

            }

            lVar10 = plVar14[3];
            lVar12 = plVar14[4];
            if (lVar10 + lVar12 == 0x400) {
               if (lVar10 == 0) goto LAB_00103b82;
               lVar10 = lVar10 + -1;
               plVar14[3] = lVar10;
               uVar13 = (int)plVar14[2] + 1U & 0x3ff;
               plVar14[2] = (ulong)uVar13;
            }
 else {
               uVar13 = (uint)plVar14[2];
            }

            plVar14[4] = lVar12 + 1;
            puVar4 = (undefined4*)( plVar14[5] + ( ulong )((int)lVar10 + uVar13 + (int)lVar12 & 0x3ff) * 0x28 );
            *puVar4 = uVar8;
            p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
            *(ulong*)( puVar4 + 2 ) = uVar5;
            if (p_Var17 == p_Var16) {
               LAB_001008d6:*(undefined8*)( puVar4 + 6 ) = uVar6;
               *(undefined8*)( puVar4 + 8 ) = uVar7;
               if (p_Var17 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_001008f0;
            }
 else {
               if (p_Var17 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                  if (p_Var16 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                     *(undefined8*)( puVar4 + 6 ) = uVar6;
                     *(undefined8*)( puVar4 + 8 ) = uVar7;
                     goto LAB_001008f0;
                  }

                  LAB_00100896:p_Var1 = p_Var16 + 8;
                  if (*(long*)( p_Var16 + 8 ) == 0x100000001) {
                     *(undefined8*)( p_Var16 + 8 ) = 0;
                     ( **(code**)( *(long*)p_Var16 + 0x10 ) )(p_Var16);
                     ( **(code**)( *(long*)p_Var16 + 0x18 ) )(p_Var16);
                  }
 else {
                     if (__libc_single_threaded == '\0') {
                        LOCK();
                        iVar9 = *(int*)p_Var1;
                        *(int*)p_Var1 = *(int*)p_Var1 + -1;
                        UNLOCK();
                     }
 else {
                        iVar9 = *(int*)( p_Var16 + 8 );
                        *(int*)( p_Var16 + 8 ) = iVar9 + -1;
                     }

                     if (iVar9 == 1) {
                        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var16);
                     }

                  }

                  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
                  goto LAB_001008d6;
               }

               if (__libc_single_threaded == '\0') {
                  LOCK();
                  *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
                  UNLOCK();
                  p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
               }
 else {
                  *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
                  p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
               }

               if (p_Var16 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_00100896;
               *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
               *(undefined8*)( puVar4 + 6 ) = uVar6;
               *(undefined8*)( puVar4 + 8 ) = uVar7;
            }

            p_Var16 = p_Var17 + 8;
            if (*(long*)( p_Var17 + 8 ) == 0x100000001) {
               *(undefined8*)( p_Var17 + 8 ) = 0;
               ( **(code**)( *(long*)p_Var17 + 0x10 ) )(p_Var17);
               ( **(code**)( *(long*)p_Var17 + 0x18 ) )(p_Var17);
            }
 else {
               if (__libc_single_threaded == '\0') {
                  LOCK();
                  iVar9 = *(int*)p_Var16;
                  *(int*)p_Var16 = *(int*)p_Var16 + -1;
                  UNLOCK();
               }
 else {
                  iVar9 = *(int*)( p_Var17 + 8 );
                  *(int*)( p_Var17 + 8 ) = iVar9 + -1;
               }

               if (iVar9 == 1) {
                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var17);
               }

            }

         }

         LAB_001008f0:uVar13 = *(uint*)( plVar14[5] + ( ulong )((int)plVar14[3] + (int)plVar14[2] & 0x3ff) * 0x28 );
         if (( 0xff < uVar13 ) || ( *(char*)( in_RSI + 0x48 + (ulong)uVar13 ) == '\0' )) goto LAB_00100916;
         plVar15 = *(long**)( in_RSI + 0x40 );
         lVar10 = plVar15[4];
         if (lVar10 == 0) {
            ( **(code**)( *plVar15 + 0x28 ) )(&local_68, plVar15);
            uVar8 = ( **(code**)( *plVar15 + 0x20 ) )(plVar15);
            uVar7 = local_50;
            uVar6 = local_58;
            p_Var17 = local_60;
            uVar5 = local_68;
            if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
               if (__libc_single_threaded == '\0') {
                  LOCK();
                  *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
                  UNLOCK();
               }
 else {
                  *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
               }

               if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                  p_Var16 = local_60 + 8;
                  if (*(long*)( local_60 + 8 ) == 0x100000001) {
                     *(undefined8*)( local_60 + 8 ) = 0;
                     ( **(code**)( *(long*)local_60 + 0x10 ) )(local_60);
                     ( **(code**)( *(long*)p_Var17 + 0x18 ) )(p_Var17);
                  }
 else {
                     if (__libc_single_threaded == '\0') {
                        LOCK();
                        iVar9 = *(int*)p_Var16;
                        *(int*)p_Var16 = *(int*)p_Var16 + -1;
                        UNLOCK();
                     }
 else {
                        iVar9 = *(int*)( local_60 + 8 );
                        *(int*)( local_60 + 8 ) = iVar9 + -1;
                     }

                     if (iVar9 == 1) {
                        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
                     }

                  }

               }

            }

            lVar10 = plVar15[3];
            lVar12 = plVar15[4];
            if (lVar10 + lVar12 == 0x400) {
               if (lVar10 == 0) goto LAB_00103b82;
               lVar10 = lVar10 + -1;
               plVar15[3] = lVar10;
               uVar13 = (int)plVar15[2] + 1U & 0x3ff;
               plVar15[2] = (ulong)uVar13;
            }
 else {
               uVar13 = (uint)plVar15[2];
            }

            plVar15[4] = lVar12 + 1;
            puVar4 = (undefined4*)( plVar15[5] + ( ulong )((int)lVar10 + uVar13 + (int)lVar12 & 0x3ff) * 0x28 );
            *puVar4 = uVar8;
            p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
            *(ulong*)( puVar4 + 2 ) = uVar5;
            if (p_Var17 == p_Var16) {
               LAB_00101301:*(undefined8*)( puVar4 + 6 ) = uVar6;
               *(undefined8*)( puVar4 + 8 ) = uVar7;
               if (p_Var17 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_00101b10;
            }
 else {
               if (p_Var17 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                  if (p_Var16 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                     *(undefined8*)( puVar4 + 6 ) = uVar6;
                     *(undefined8*)( puVar4 + 8 ) = uVar7;
                     lVar10 = plVar15[4];
                     goto LAB_00101316;
                  }

                  LAB_001012c1:p_Var1 = p_Var16 + 8;
                  if (*(long*)( p_Var16 + 8 ) == 0x100000001) {
                     *(undefined8*)( p_Var16 + 8 ) = 0;
                     ( **(code**)( *(long*)p_Var16 + 0x10 ) )(p_Var16);
                     ( **(code**)( *(long*)p_Var16 + 0x18 ) )(p_Var16);
                  }
 else {
                     if (__libc_single_threaded == '\0') {
                        LOCK();
                        iVar9 = *(int*)p_Var1;
                        *(int*)p_Var1 = *(int*)p_Var1 + -1;
                        UNLOCK();
                     }
 else {
                        iVar9 = *(int*)( p_Var16 + 8 );
                        *(int*)( p_Var16 + 8 ) = iVar9 + -1;
                     }

                     if (iVar9 == 1) {
                        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var16);
                     }

                  }

                  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
                  goto LAB_00101301;
               }

               if (__libc_single_threaded == '\0') {
                  LOCK();
                  *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
                  UNLOCK();
                  p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
               }
 else {
                  *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
                  p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
               }

               if (p_Var16 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_001012c1;
               *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
               *(undefined8*)( puVar4 + 6 ) = uVar6;
               *(undefined8*)( puVar4 + 8 ) = uVar7;
               LAB_00101b10:p_Var16 = p_Var17 + 8;
               if (*(long*)( p_Var17 + 8 ) == 0x100000001) {
                  *(undefined8*)( p_Var17 + 8 ) = 0;
                  ( **(code**)( *(long*)p_Var17 + 0x10 ) )(p_Var17);
                  ( **(code**)( *(long*)p_Var17 + 0x18 ) )(p_Var17);
                  lVar10 = plVar15[4];
                  goto LAB_00101316;
               }

               if (__libc_single_threaded == '\0') {
                  LOCK();
                  iVar9 = *(int*)p_Var16;
                  *(int*)p_Var16 = *(int*)p_Var16 + -1;
                  UNLOCK();
               }
 else {
                  iVar9 = *(int*)( p_Var17 + 8 );
                  *(int*)( p_Var17 + 8 ) = iVar9 + -1;
               }

               if (iVar9 == 1) {
                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var17);
               }

            }

            lVar10 = plVar15[4];
         }

         LAB_00101316:plVar15[3] = plVar15[3] + 1;
         plVar15[4] = lVar10 + -1;
      }
 else {
         if (lVar10 != 0) {
            lVar12 = plVar14[3];
            if (*(int*)( plVar14[5] + ( ulong )((int)plVar14[2] + (int)lVar12 & 0x3ff) * 0x28 ) == 0x5c) goto LAB_00101666;
            goto LAB_001008f0;
         }

         ( **(code**)( *plVar14 + 0x28 ) )(&local_68, plVar14);
         uVar8 = ( **(code**)( *plVar14 + 0x20 ) )(plVar14);
         uVar7 = local_50;
         uVar6 = local_58;
         p_Var17 = local_60;
         uVar5 = local_68;
         if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
            if (__libc_single_threaded == '\0') {
               LOCK();
               *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
               UNLOCK();
            }
 else {
               *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
            }

            if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
               p_Var16 = local_60 + 8;
               if (*(long*)( local_60 + 8 ) == 0x100000001) {
                  *(undefined8*)( local_60 + 8 ) = 0;
                  ( **(code**)( *(long*)local_60 + 0x10 ) )();
                  ( **(code**)( *(long*)p_Var17 + 0x18 ) )();
               }
 else {
                  if (__libc_single_threaded == '\0') {
                     LOCK();
                     iVar9 = *(int*)p_Var16;
                     *(int*)p_Var16 = *(int*)p_Var16 + -1;
                     UNLOCK();
                  }
 else {
                     iVar9 = *(int*)( local_60 + 8 );
                     *(int*)( local_60 + 8 ) = iVar9 + -1;
                  }

                  if (iVar9 == 1) {
                     std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
                  }

               }

            }

         }

         lVar10 = plVar14[3];
         lVar12 = plVar14[4];
         if (lVar10 + lVar12 == 0x400) {
            if (lVar10 == 0) goto LAB_00103b82;
            lVar10 = lVar10 + -1;
            plVar14[3] = lVar10;
            uVar13 = (int)plVar14[2] + 1U & 0x3ff;
            plVar14[2] = (ulong)uVar13;
         }
 else {
            uVar13 = (uint)plVar14[2];
         }

         plVar14[4] = lVar12 + 1;
         puVar4 = (undefined4*)( plVar14[5] + ( ulong )((int)lVar10 + uVar13 + (int)lVar12 & 0x3ff) * 0x28 );
         *puVar4 = uVar8;
         p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
         *(ulong*)( puVar4 + 2 ) = uVar5;
         if (p_Var17 == p_Var16) {
            LAB_0010074d:*(undefined8*)( puVar4 + 6 ) = uVar6;
            *(undefined8*)( puVar4 + 8 ) = uVar7;
            if (p_Var17 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
               LAB_00101aa3:p_Var16 = p_Var17 + 8;
               if (*(long*)( p_Var17 + 8 ) == 0x100000001) {
                  *(undefined8*)( p_Var17 + 8 ) = 0;
                  ( **(code**)( *(long*)p_Var17 + 0x10 ) )(p_Var17);
                  ( **(code**)( *(long*)p_Var17 + 0x18 ) )(p_Var17);
               }
 else {
                  if (__libc_single_threaded == '\0') {
                     LOCK();
                     iVar9 = *(int*)p_Var16;
                     *(int*)p_Var16 = *(int*)p_Var16 + -1;
                     UNLOCK();
                  }
 else {
                     iVar9 = *(int*)( p_Var17 + 8 );
                     *(int*)( p_Var17 + 8 ) = iVar9 + -1;
                  }

                  if (iVar9 == 1) {
                     std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var17);
                  }

               }

            }

         }
 else {
            if (p_Var17 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
               if (__libc_single_threaded == '\0') {
                  LOCK();
                  *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
                  UNLOCK();
                  p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
                  if (p_Var16 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_00101a97;
                  LAB_0010070d:p_Var1 = p_Var16 + 8;
                  if (*(long*)( p_Var16 + 8 ) == 0x100000001) {
                     *(undefined8*)( p_Var16 + 8 ) = 0;
                     ( **(code**)( *(long*)p_Var16 + 0x10 ) )(p_Var16);
                     ( **(code**)( *(long*)p_Var16 + 0x18 ) )(p_Var16);
                  }
 else {
                     if (__libc_single_threaded == '\0') {
                        LOCK();
                        iVar9 = *(int*)p_Var1;
                        *(int*)p_Var1 = *(int*)p_Var1 + -1;
                        UNLOCK();
                     }
 else {
                        iVar9 = *(int*)( p_Var16 + 8 );
                        *(int*)( p_Var16 + 8 ) = iVar9 + -1;
                     }

                     if (iVar9 == 1) {
                        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var16);
                     }

                  }

                  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
                  goto LAB_0010074d;
               }

               *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
               p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
               if (p_Var16 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_0010070d;
               LAB_00101a97:*(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
               *(undefined8*)( puVar4 + 6 ) = uVar6;
               *(undefined8*)( puVar4 + 8 ) = uVar7;
               goto LAB_00101aa3;
            }

            if (p_Var16 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_0010070d;
            *(undefined8*)( puVar4 + 6 ) = uVar6;
            *(undefined8*)( puVar4 + 8 ) = uVar7;
         }

         plVar15 = plVar14 + 3;
         plVar2 = plVar14 + 2;
         plVar3 = plVar14 + 5;
         plVar14 = *(long**)( in_RSI + 0x40 );
         lVar10 = plVar14[4];
         if (*(int*)( *plVar3 + ( ulong )((int)*plVar15 + (int)*plVar2 & 0x3ff) * 0x28 ) != 0x5c) goto LAB_00100788;
         if (lVar10 != 0) {
            lVar12 = plVar14[3];
            goto LAB_00101666;
         }

         ( **(code**)( *plVar14 + 0x28 ) )(&local_68, plVar14);
         uVar8 = ( **(code**)( *plVar14 + 0x20 ) )(plVar14);
         uVar7 = local_50;
         uVar6 = local_58;
         p_Var17 = local_60;
         uVar5 = local_68;
         if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
            if (__libc_single_threaded == '\0') {
               LOCK();
               *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
               UNLOCK();
            }
 else {
               *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
            }

            if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
               p_Var16 = local_60 + 8;
               if (*(long*)( local_60 + 8 ) == 0x100000001) {
                  *(undefined8*)( local_60 + 8 ) = 0;
                  ( **(code**)( *(long*)local_60 + 0x10 ) )(local_60);
                  ( **(code**)( *(long*)p_Var17 + 0x18 ) )(p_Var17);
               }
 else {
                  if (__libc_single_threaded == '\0') {
                     LOCK();
                     iVar9 = *(int*)p_Var16;
                     *(int*)p_Var16 = *(int*)p_Var16 + -1;
                     UNLOCK();
                  }
 else {
                     iVar9 = *(int*)( local_60 + 8 );
                     *(int*)( local_60 + 8 ) = iVar9 + -1;
                  }

                  if (iVar9 == 1) {
                     std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
                  }

               }

            }

         }

         lVar10 = plVar14[3];
         lVar12 = plVar14[4];
         if (lVar10 + lVar12 == 0x400) {
            if (lVar10 == 0) goto LAB_00103b82;
            lVar10 = lVar10 + -1;
            plVar14[3] = lVar10;
            uVar13 = (int)plVar14[2] + 1U & 0x3ff;
            plVar14[2] = (ulong)uVar13;
         }
 else {
            uVar13 = (uint)plVar14[2];
         }

         plVar14[4] = lVar12 + 1;
         puVar4 = (undefined4*)( plVar14[5] + ( ulong )(uVar13 + (int)lVar10 + (int)lVar12 & 0x3ff) * 0x28 );
         *puVar4 = uVar8;
         p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
         *(ulong*)( puVar4 + 2 ) = uVar5;
         if (p_Var17 == p_Var16) {
            LAB_00101d4f:*(undefined8*)( puVar4 + 6 ) = uVar6;
            *(undefined8*)( puVar4 + 8 ) = uVar7;
            if (p_Var17 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_00102438;
         }
 else {
            if (p_Var17 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
               if (p_Var16 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                  *(undefined8*)( puVar4 + 6 ) = uVar6;
                  *(undefined8*)( puVar4 + 8 ) = uVar7;
                  lVar12 = plVar14[3];
                  lVar10 = plVar14[4];
                  goto LAB_00101666;
               }

               LAB_00101d0f:p_Var1 = p_Var16 + 8;
               if (*(long*)( p_Var16 + 8 ) == 0x100000001) {
                  *(undefined8*)( p_Var16 + 8 ) = 0;
                  ( **(code**)( *(long*)p_Var16 + 0x10 ) )(p_Var16);
                  ( **(code**)( *(long*)p_Var16 + 0x18 ) )(p_Var16);
               }
 else {
                  if (__libc_single_threaded == '\0') {
                     LOCK();
                     iVar9 = *(int*)p_Var1;
                     *(int*)p_Var1 = *(int*)p_Var1 + -1;
                     UNLOCK();
                  }
 else {
                     iVar9 = *(int*)( p_Var16 + 8 );
                     *(int*)( p_Var16 + 8 ) = iVar9 + -1;
                  }

                  if (iVar9 == 1) {
                     std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var16);
                  }

               }

               *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
               goto LAB_00101d4f;
            }

            if (__libc_single_threaded == '\0') {
               LOCK();
               *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
               UNLOCK();
               p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
            }
 else {
               *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
               p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
            }

            if (p_Var16 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_00101d0f;
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
            *(undefined8*)( puVar4 + 6 ) = uVar6;
            *(undefined8*)( puVar4 + 8 ) = uVar7;
            LAB_00102438:p_Var16 = p_Var17 + 8;
            if (*(long*)( p_Var17 + 8 ) == 0x100000001) {
               *(undefined8*)( p_Var17 + 8 ) = 0;
               ( **(code**)( *(long*)p_Var17 + 0x10 ) )(p_Var17);
               ( **(code**)( *(long*)p_Var17 + 0x18 ) )(p_Var17);
               lVar12 = plVar14[3];
               lVar10 = plVar14[4];
               goto LAB_00101666;
            }

            if (__libc_single_threaded == '\0') {
               LOCK();
               iVar9 = *(int*)p_Var16;
               *(int*)p_Var16 = *(int*)p_Var16 + -1;
               UNLOCK();
            }
 else {
               iVar9 = *(int*)( p_Var17 + 8 );
               *(int*)( p_Var17 + 8 ) = iVar9 + -1;
            }

            if (iVar9 == 1) {
               std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var17);
            }

         }

         lVar12 = plVar14[3];
         lVar10 = plVar14[4];
         LAB_00101666:plVar14[3] = lVar12 + 1;
         plVar14[4] = lVar10 + -1;
         plVar15 = *(long**)( in_RSI + 0x40 );
         lVar10 = plVar15[4];
         if (lVar10 == 0) {
            ( **(code**)( *plVar15 + 0x28 ) )(&local_68, plVar15);
            uVar8 = ( **(code**)( *plVar15 + 0x20 ) )(plVar15);
            uVar7 = local_50;
            uVar6 = local_58;
            p_Var17 = local_60;
            uVar5 = local_68;
            if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
               if (__libc_single_threaded == '\0') {
                  LOCK();
                  *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
                  UNLOCK();
               }
 else {
                  *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
               }

               if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                  p_Var16 = local_60 + 8;
                  if (*(long*)( local_60 + 8 ) == 0x100000001) {
                     *(undefined8*)( local_60 + 8 ) = 0;
                     ( **(code**)( *(long*)local_60 + 0x10 ) )();
                     ( **(code**)( *(long*)p_Var17 + 0x18 ) )();
                  }
 else {
                     if (__libc_single_threaded == '\0') {
                        LOCK();
                        iVar9 = *(int*)p_Var16;
                        *(int*)p_Var16 = *(int*)p_Var16 + -1;
                        UNLOCK();
                     }
 else {
                        iVar9 = *(int*)( local_60 + 8 );
                        *(int*)( local_60 + 8 ) = iVar9 + -1;
                     }

                     if (iVar9 == 1) {
                        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
                     }

                  }

               }

            }

            lVar10 = plVar15[3];
            lVar12 = plVar15[4];
            if (lVar10 + lVar12 == 0x400) {
               if (lVar10 == 0) goto LAB_00103b82;
               lVar10 = lVar10 + -1;
               plVar15[3] = lVar10;
               uVar13 = (int)plVar15[2] + 1U & 0x3ff;
               plVar15[2] = (ulong)uVar13;
            }
 else {
               uVar13 = (uint)plVar15[2];
            }

            plVar15[4] = lVar12 + 1;
            puVar4 = (undefined4*)( plVar15[5] + ( ulong )(uVar13 + (int)lVar10 + (int)lVar12 & 0x3ff) * 0x28 );
            *puVar4 = uVar8;
            p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
            *(ulong*)( puVar4 + 2 ) = uVar5;
            if (p_Var17 == p_Var16) {
               LAB_001017cf:*(undefined8*)( puVar4 + 6 ) = uVar6;
               *(undefined8*)( puVar4 + 8 ) = uVar7;
               if (p_Var17 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                  LAB_001023d1:p_Var16 = p_Var17 + 8;
                  if (*(long*)( p_Var17 + 8 ) == 0x100000001) {
                     *(undefined8*)( p_Var17 + 8 ) = 0;
                     ( **(code**)( *(long*)p_Var17 + 0x10 ) )(p_Var17);
                     ( **(code**)( *(long*)p_Var17 + 0x18 ) )(p_Var17);
                  }
 else {
                     if (__libc_single_threaded == '\0') {
                        LOCK();
                        iVar9 = *(int*)p_Var16;
                        *(int*)p_Var16 = *(int*)p_Var16 + -1;
                        UNLOCK();
                     }
 else {
                        iVar9 = *(int*)( p_Var17 + 8 );
                        *(int*)( p_Var17 + 8 ) = iVar9 + -1;
                     }

                     if (iVar9 == 1) {
                        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var17);
                     }

                  }

               }

            }
 else {
               if (p_Var17 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                  if (__libc_single_threaded == '\0') {
                     LOCK();
                     *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
                     UNLOCK();
                     p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
                     if (p_Var16 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_001023c5;
                     LAB_0010178a:p_Var1 = p_Var16 + 8;
                     if (*(long*)( p_Var16 + 8 ) == 0x100000001) {
                        *(undefined8*)( p_Var16 + 8 ) = 0;
                        ( **(code**)( *(long*)p_Var16 + 0x10 ) )(p_Var16);
                        ( **(code**)( *(long*)p_Var16 + 0x18 ) )(p_Var16);
                     }
 else {
                        if (__libc_single_threaded == '\0') {
                           LOCK();
                           iVar9 = *(int*)p_Var1;
                           *(int*)p_Var1 = *(int*)p_Var1 + -1;
                           UNLOCK();
                        }
 else {
                           iVar9 = *(int*)( p_Var16 + 8 );
                           *(int*)( p_Var16 + 8 ) = iVar9 + -1;
                        }

                        if (iVar9 == 1) {
                           std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var16);
                        }

                     }

                     *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
                     goto LAB_001017cf;
                  }

                  *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
                  p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
                  if (p_Var16 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_0010178a;
                  LAB_001023c5:*(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
                  *(undefined8*)( puVar4 + 6 ) = uVar6;
                  *(undefined8*)( puVar4 + 8 ) = uVar7;
                  goto LAB_001023d1;
               }

               if (p_Var16 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_0010178a;
               *(undefined8*)( puVar4 + 6 ) = uVar6;
               *(undefined8*)( puVar4 + 8 ) = uVar7;
            }

            plVar14 = plVar15 + 3;
            plVar2 = plVar15 + 2;
            plVar3 = plVar15 + 5;
            plVar15 = *(long**)( in_RSI + 0x40 );
            if (*(int*)( *plVar3 + ( ulong )((int)*plVar14 + (int)*plVar2 & 0x3ff) * 0x28 ) != 10) {
               lVar12 = plVar15[3];
               LAB_00102040:if (lVar12 == 0) goto LAB_00103b82;
               plVar14 = plVar15 + 4;
               *plVar14 = *plVar14 + 1;
               plVar15[3] = lVar12 + -1;
               if (*plVar14 == 0) {
                  ( **(code**)( *plVar15 + 0x28 ) )(&local_68, plVar15);
                  uVar8 = ( **(code**)( *plVar15 + 0x20 ) )(plVar15);
                  uVar7 = local_50;
                  uVar6 = local_58;
                  p_Var17 = local_60;
                  uVar5 = local_68;
                  if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                     if (__libc_single_threaded == '\0') {
                        LOCK();
                        *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
                        UNLOCK();
                     }
 else {
                        *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
                     }

                     if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                        p_Var16 = local_60 + 8;
                        if (*(long*)( local_60 + 8 ) == 0x100000001) {
                           *(undefined8*)( local_60 + 8 ) = 0;
                           ( **(code**)( *(long*)local_60 + 0x10 ) )(local_60);
                           ( **(code**)( *(long*)p_Var17 + 0x18 ) )(p_Var17);
                        }
 else {
                           if (__libc_single_threaded == '\0') {
                              LOCK();
                              iVar9 = *(int*)p_Var16;
                              *(int*)p_Var16 = *(int*)p_Var16 + -1;
                              UNLOCK();
                           }
 else {
                              iVar9 = *(int*)( local_60 + 8 );
                              *(int*)( local_60 + 8 ) = iVar9 + -1;
                           }

                           if (iVar9 == 1) {
                              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
                           }

                        }

                     }

                  }

                  lVar10 = plVar15[3];
                  lVar12 = plVar15[4];
                  if (lVar10 + lVar12 == 0x400) {
                     if (lVar10 == 0) goto LAB_00103b82;
                     lVar10 = lVar10 + -1;
                     plVar15[3] = lVar10;
                     uVar13 = (int)plVar15[2] + 1U & 0x3ff;
                     plVar15[2] = (ulong)uVar13;
                  }
 else {
                     uVar13 = (uint)plVar15[2];
                  }

                  plVar15[4] = lVar12 + 1;
                  puVar4 = (undefined4*)( plVar15[5] + ( ulong )(uVar13 + (int)lVar10 + (int)lVar12 & 0x3ff) * 0x28 );
                  *puVar4 = uVar8;
                  p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
                  *(ulong*)( puVar4 + 2 ) = uVar5;
                  if (p_Var17 == p_Var16) {
                     LAB_001021a5:*(undefined8*)( puVar4 + 6 ) = uVar6;
                     *(undefined8*)( puVar4 + 8 ) = uVar7;
                     if (p_Var17 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_001021f8;
                  }
 else {
                     if (p_Var17 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                        if (p_Var16 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                           *(undefined8*)( puVar4 + 6 ) = uVar6;
                           *(undefined8*)( puVar4 + 8 ) = uVar7;
                           plVar14 = *(long**)( in_RSI + 0x40 );
                           lVar10 = plVar14[4];
                           goto LAB_00100788;
                        }

                        LAB_00102164:p_Var1 = p_Var16 + 8;
                        if (*(long*)( p_Var16 + 8 ) == 0x100000001) {
                           *(undefined8*)( p_Var16 + 8 ) = 0;
                           ( **(code**)( *(long*)p_Var16 + 0x10 ) )(p_Var16);
                           ( **(code**)( *(long*)p_Var16 + 0x18 ) )(p_Var16);
                        }
 else {
                           if (__libc_single_threaded == '\0') {
                              LOCK();
                              iVar9 = *(int*)p_Var1;
                              *(int*)p_Var1 = *(int*)p_Var1 + -1;
                              UNLOCK();
                           }
 else {
                              iVar9 = *(int*)( p_Var16 + 8 );
                              *(int*)( p_Var16 + 8 ) = iVar9 + -1;
                           }

                           if (iVar9 == 1) {
                              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var16);
                           }

                        }

                        *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
                        goto LAB_001021a5;
                     }

                     if (__libc_single_threaded == '\0') {
                        LOCK();
                        *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
                        UNLOCK();
                        p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
                     }
 else {
                        *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
                        p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
                     }

                     if (p_Var16 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_00102164;
                     *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
                     *(undefined8*)( puVar4 + 6 ) = uVar6;
                     *(undefined8*)( puVar4 + 8 ) = uVar7;
                  }

                  p_Var16 = p_Var17 + 8;
                  if (*(long*)( p_Var17 + 8 ) == 0x100000001) {
                     *(undefined8*)( p_Var17 + 8 ) = 0;
                     ( **(code**)( *(long*)p_Var17 + 0x10 ) )(p_Var17);
                     ( **(code**)( *(long*)p_Var17 + 0x18 ) )(p_Var17);
                     plVar14 = *(long**)( in_RSI + 0x40 );
                     lVar10 = plVar14[4];
                     goto LAB_00100788;
                  }

                  if (__libc_single_threaded == '\0') {
                     LOCK();
                     iVar9 = *(int*)p_Var16;
                     *(int*)p_Var16 = *(int*)p_Var16 + -1;
                     UNLOCK();
                  }
 else {
                     iVar9 = *(int*)( p_Var17 + 8 );
                     *(int*)( p_Var17 + 8 ) = iVar9 + -1;
                  }

                  if (iVar9 == 1) {
                     std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var17);
                  }

               }

               LAB_001021f8:plVar14 = *(long**)( in_RSI + 0x40 );
               lVar10 = plVar14[4];
               goto LAB_00100788;
            }

            lVar10 = plVar15[4];
            if (lVar10 != 0) {
               lVar12 = plVar15[3];
               goto LAB_001026dd;
            }

            ( **(code**)( *plVar15 + 0x28 ) )(&local_68, plVar15);
            uVar8 = ( **(code**)( *plVar15 + 0x20 ) )(plVar15);
            uVar7 = local_50;
            uVar6 = local_58;
            p_Var17 = local_60;
            uVar5 = local_68;
            if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
               if (__libc_single_threaded == '\0') {
                  LOCK();
                  *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
                  UNLOCK();
               }
 else {
                  *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
               }

               if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                  p_Var16 = local_60 + 8;
                  if (*(long*)( local_60 + 8 ) == 0x100000001) {
                     *(undefined8*)( local_60 + 8 ) = 0;
                     ( **(code**)( *(long*)local_60 + 0x10 ) )();
                     ( **(code**)( *(long*)p_Var17 + 0x18 ) )();
                  }
 else {
                     if (__libc_single_threaded == '\0') {
                        LOCK();
                        iVar9 = *(int*)p_Var16;
                        *(int*)p_Var16 = *(int*)p_Var16 + -1;
                        UNLOCK();
                     }
 else {
                        iVar9 = *(int*)( local_60 + 8 );
                        *(int*)( local_60 + 8 ) = iVar9 + -1;
                     }

                     if (iVar9 == 1) {
                        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
                     }

                  }

               }

            }

            lVar10 = plVar15[3];
            lVar12 = plVar15[4];
            if (lVar10 + lVar12 == 0x400) {
               if (lVar10 == 0) goto LAB_00103b82;
               lVar10 = lVar10 + -1;
               plVar15[3] = lVar10;
               uVar13 = (int)plVar15[2] + 1U & 0x3ff;
               plVar15[2] = (ulong)uVar13;
            }
 else {
               uVar13 = (uint)plVar15[2];
            }

            plVar15[4] = lVar12 + 1;
            puVar4 = (undefined4*)( plVar15[5] + ( ulong )(uVar13 + (int)lVar10 + (int)lVar12 & 0x3ff) * 0x28 );
            *puVar4 = uVar8;
            p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
            *(ulong*)( puVar4 + 2 ) = uVar5;
            if (p_Var17 == p_Var16) {
               LAB_001026bf:*(undefined8*)( puVar4 + 6 ) = uVar6;
               *(undefined8*)( puVar4 + 8 ) = uVar7;
               if (p_Var17 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_00102c9a;
            }
 else {
               if (p_Var17 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                  if (p_Var16 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
                     *(undefined8*)( puVar4 + 6 ) = uVar6;
                     *(undefined8*)( puVar4 + 8 ) = uVar7;
                     lVar12 = plVar15[3];
                     lVar10 = plVar15[4];
                     goto LAB_001026dd;
                  }

                  LAB_0010267f:p_Var1 = p_Var16 + 8;
                  if (*(long*)( p_Var16 + 8 ) == 0x100000001) {
                     *(undefined8*)( p_Var16 + 8 ) = 0;
                     ( **(code**)( *(long*)p_Var16 + 0x10 ) )(p_Var16);
                     ( **(code**)( *(long*)p_Var16 + 0x18 ) )(p_Var16);
                  }
 else {
                     if (__libc_single_threaded == '\0') {
                        LOCK();
                        iVar9 = *(int*)p_Var1;
                        *(int*)p_Var1 = *(int*)p_Var1 + -1;
                        UNLOCK();
                     }
 else {
                        iVar9 = *(int*)( p_Var16 + 8 );
                        *(int*)( p_Var16 + 8 ) = iVar9 + -1;
                     }

                     if (iVar9 == 1) {
                        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var16);
                     }

                  }

                  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
                  goto LAB_001026bf;
               }

               if (__libc_single_threaded == '\0') {
                  LOCK();
                  *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
                  UNLOCK();
                  p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
               }
 else {
                  *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
                  p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
               }

               if (p_Var16 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_0010267f;
               *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
               *(undefined8*)( puVar4 + 6 ) = uVar6;
               *(undefined8*)( puVar4 + 8 ) = uVar7;
               LAB_00102c9a:p_Var16 = p_Var17 + 8;
               if (*(long*)( p_Var17 + 8 ) == 0x100000001) {
                  *(undefined8*)( p_Var17 + 8 ) = 0;
                  ( **(code**)( *(long*)p_Var17 + 0x10 ) )(p_Var17);
                  ( **(code**)( *(long*)p_Var17 + 0x18 ) )(p_Var17);
                  lVar12 = plVar15[3];
                  lVar10 = plVar15[4];
                  goto LAB_001026dd;
               }

               if (__libc_single_threaded == '\0') {
                  LOCK();
                  iVar9 = *(int*)p_Var16;
                  *(int*)p_Var16 = *(int*)p_Var16 + -1;
                  UNLOCK();
               }
 else {
                  iVar9 = *(int*)( p_Var17 + 8 );
                  *(int*)( p_Var17 + 8 ) = iVar9 + -1;
               }

               if (iVar9 == 1) {
                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var17);
               }

            }

            lVar12 = plVar15[3];
            lVar10 = plVar15[4];
         }
 else {
            lVar12 = plVar15[3];
            if (*(int*)( plVar15[5] + ( ulong )((int)plVar15[2] + (int)lVar12 & 0x3ff) * 0x28 ) != 10) goto LAB_00102040;
         }

         LAB_001026dd:plVar15[3] = lVar12 + 1;
         plVar15[4] = lVar10 + -1;
      }

      goto LAB_001002bb;
   }

   LAB_00100916:local_88 = (char*)operator_new(0x40);
   local_78 = local_88 + 0x40;
   local_80 = local_88;
   LAB_0010093d:plVar15 = *(long**)( in_RSI + 0x40 );
   lVar10 = plVar15[4];
   do {
      if (lVar10 == 0) {
         ( **(code**)( *plVar15 + 0x28 ) )(&local_68, plVar15);
         uVar8 = ( **(code**)( *plVar15 + 0x20 ) )(plVar15);
         uVar7 = local_50;
         uVar6 = local_58;
         p_Var17 = local_60;
         uVar5 = local_68;
         if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
            if (__libc_single_threaded == '\0') {
               LOCK();
               *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
               UNLOCK();
            }
 else {
               *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
            }

            if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
               p_Var16 = local_60 + 8;
               if (*(long*)( local_60 + 8 ) == 0x100000001) {
                  *(undefined8*)( local_60 + 8 ) = 0;
                  ( **(code**)( *(long*)local_60 + 0x10 ) )();
                  ( **(code**)( *(long*)p_Var17 + 0x18 ) )();
               }
 else {
                  if (__libc_single_threaded == '\0') {
                     LOCK();
                     iVar9 = *(int*)p_Var16;
                     *(int*)p_Var16 = *(int*)p_Var16 + -1;
                     UNLOCK();
                  }
 else {
                     iVar9 = *(int*)( local_60 + 8 );
                     *(int*)( local_60 + 8 ) = iVar9 + -1;
                  }

                  if (iVar9 == 1) {
                     std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
                  }

               }

            }

         }

         lVar10 = plVar15[3];
         lVar12 = plVar15[4];
         if (lVar10 + lVar12 == 0x400) {
            if (lVar10 == 0) goto LAB_00103b82;
            lVar10 = lVar10 + -1;
            plVar15[3] = lVar10;
            uVar13 = (int)plVar15[2] + 1U & 0x3ff;
            plVar15[2] = (ulong)uVar13;
         }
 else {
            uVar13 = (uint)plVar15[2];
         }

         plVar15[4] = lVar12 + 1;
         puVar4 = (undefined4*)( plVar15[5] + ( ulong )((int)lVar10 + uVar13 + (int)lVar12 & 0x3ff) * 0x28 );
         *puVar4 = uVar8;
         p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
         *(ulong*)( puVar4 + 2 ) = uVar5;
         if (p_Var17 == p_Var16) {
            LAB_00100a79:*(undefined8*)( puVar4 + 6 ) = uVar6;
            *(undefined8*)( puVar4 + 8 ) = uVar7;
            if (p_Var17 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_00100a90;
         }
 else {
            if (p_Var17 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
               if (p_Var16 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_00100a43;
               *(undefined8*)( puVar4 + 6 ) = uVar6;
               *(undefined8*)( puVar4 + 8 ) = uVar7;
               goto LAB_00100a90;
            }

            if (__libc_single_threaded == '\0') {
               LOCK();
               *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
               UNLOCK();
               p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
               if (p_Var16 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_00100e73;
               LAB_00100a43:p_Var1 = p_Var16 + 8;
               if (*(long*)( p_Var16 + 8 ) == 0x100000001) {
                  *(undefined8*)( p_Var16 + 8 ) = 0;
                  ( **(code**)( *(long*)p_Var16 + 0x10 ) )(p_Var16);
                  ( **(code**)( *(long*)p_Var16 + 0x18 ) )(p_Var16);
               }
 else {
                  if (__libc_single_threaded == '\0') {
                     LOCK();
                     iVar9 = *(int*)p_Var1;
                     *(int*)p_Var1 = *(int*)p_Var1 + -1;
                     UNLOCK();
                  }
 else {
                     iVar9 = *(int*)( p_Var16 + 8 );
                     *(int*)( p_Var16 + 8 ) = iVar9 + -1;
                  }

                  if (iVar9 == 1) {
                     std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var16);
                  }

               }

               *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
               goto LAB_00100a79;
            }

            *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
            p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
            if (p_Var16 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_00100a43;
            LAB_00100e73:*(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
            *(undefined8*)( puVar4 + 6 ) = uVar6;
            *(undefined8*)( puVar4 + 8 ) = uVar7;
         }

         p_Var16 = p_Var17 + 8;
         if (*(long*)( p_Var17 + 8 ) == 0x100000001) {
            *(undefined8*)( p_Var17 + 8 ) = 0;
            ( **(code**)( *(long*)p_Var17 + 0x10 ) )(p_Var17);
            ( **(code**)( *(long*)p_Var17 + 0x18 ) )(p_Var17);
         }
 else {
            if (__libc_single_threaded == '\0') {
               LOCK();
               iVar9 = *(int*)p_Var16;
               *(int*)p_Var16 = *(int*)p_Var16 + -1;
               UNLOCK();
            }
 else {
               iVar9 = *(int*)( p_Var17 + 8 );
               *(int*)( p_Var17 + 8 ) = iVar9 + -1;
            }

            if (iVar9 == 1) {
               std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var17);
            }

         }

      }

      LAB_00100a90:if (*(int*)( plVar15[5] + ( ulong )((int)plVar15[3] + (int)plVar15[2] & 0x3ff) * 0x28 ) == -1) {
         LAB_001010f0:local_68 = local_68 & 0xffffffffffffff00;
         if (local_80 == local_78) {
            std::vector<char,std::allocator<char>>::_M_realloc_insert<char>((vector<char,std::allocator<char>>*)&local_88, local_80, &local_68);
         }
 else {
            *local_80 = '\0';
            local_80 = local_80 + 1;
         }

         __src_00 = local_88;
         puVar11 = in_RDI + 2;
         *in_RDI = (ulong)puVar11;
         if (local_88 == (char*)0x0) {
            std::__throw_logic_error("basic_string: construction from null is not valid");
            goto LAB_0010324e;
         }

         __n = strlen(local_88);
         local_68 = __n;
         if (__n < 0x10) {
            if (__n == 1) {
               *(char*)( in_RDI + 2 ) = *__src_00;
            }
 else if (__n != 0) goto LAB_00101a67;
         }
 else {
            puVar11 = (ulong*)std::__cxx11::string::_M_create(in_RDI, ( ulong ) & local_68);
            *in_RDI = (ulong)puVar11;
            in_RDI[2] = local_68;
            LAB_00101a67:memcpy(puVar11, __src_00, __n);
            puVar11 = (ulong*)*in_RDI;
         }

         in_RDI[1] = local_68;
         *(undefined1*)( (long)puVar11 + local_68 ) = 0;
         operator_delete(__src_00, (long)local_78 - (long)__src_00);
         goto LAB_0010116d;
      }

      plVar15 = *(long**)( in_RSI + 0x40 );
      lVar10 = plVar15[4];
      if (lVar10 == 0) {
         ( **(code**)( *plVar15 + 0x28 ) )(&local_68, plVar15);
         uVar8 = ( **(code**)( *plVar15 + 0x20 ) )(plVar15);
         uVar7 = local_50;
         uVar6 = local_58;
         p_Var17 = local_60;
         uVar5 = local_68;
         if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
            if (__libc_single_threaded == '\0') {
               LOCK();
               *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
               UNLOCK();
            }
 else {
               *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
            }

            if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
               p_Var16 = local_60 + 8;
               if (*(long*)( local_60 + 8 ) == 0x100000001) {
                  *(undefined8*)( local_60 + 8 ) = 0;
                  ( **(code**)( *(long*)local_60 + 0x10 ) )();
                  ( **(code**)( *(long*)p_Var17 + 0x18 ) )();
               }
 else {
                  if (__libc_single_threaded == '\0') {
                     LOCK();
                     iVar9 = *(int*)p_Var16;
                     *(int*)p_Var16 = *(int*)p_Var16 + -1;
                     UNLOCK();
                  }
 else {
                     iVar9 = *(int*)( local_60 + 8 );
                     *(int*)( local_60 + 8 ) = iVar9 + -1;
                  }

                  if (iVar9 == 1) {
                     std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
                  }

               }

            }

         }

         lVar10 = plVar15[3];
         lVar12 = plVar15[4];
         if (lVar10 + lVar12 == 0x400) {
            if (lVar10 == 0) goto LAB_00103b82;
            lVar10 = lVar10 + -1;
            plVar15[3] = lVar10;
            uVar13 = (int)plVar15[2] + 1U & 0x3ff;
            plVar15[2] = (ulong)uVar13;
         }
 else {
            uVar13 = (uint)plVar15[2];
         }

         plVar15[4] = lVar12 + 1;
         puVar4 = (undefined4*)( plVar15[5] + ( ulong )((int)lVar10 + uVar13 + (int)lVar12 & 0x3ff) * 0x28 );
         p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
         *puVar4 = uVar8;
         *(ulong*)( puVar4 + 2 ) = uVar5;
         if (p_Var17 == p_Var16) {
            LAB_00100bef:*(undefined8*)( puVar4 + 6 ) = uVar6;
            *(undefined8*)( puVar4 + 8 ) = uVar7;
            if (p_Var17 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
               LAB_00100f0f:p_Var16 = p_Var17 + 8;
               if (*(long*)( p_Var17 + 8 ) == 0x100000001) {
                  *(undefined8*)( p_Var17 + 8 ) = 0;
                  ( **(code**)( *(long*)p_Var17 + 0x10 ) )(p_Var17);
                  ( **(code**)( *(long*)p_Var17 + 0x18 ) )(p_Var17);
               }
 else {
                  if (__libc_single_threaded == '\0') {
                     LOCK();
                     iVar9 = *(int*)p_Var16;
                     *(int*)p_Var16 = *(int*)p_Var16 + -1;
                     UNLOCK();
                  }
 else {
                     iVar9 = *(int*)( p_Var17 + 8 );
                     *(int*)( p_Var17 + 8 ) = iVar9 + -1;
                  }

                  if (iVar9 == 1) {
                     std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var17);
                  }

               }

            }

         }
 else {
            if (p_Var17 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
               if (__libc_single_threaded == '\0') {
                  LOCK();
                  *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
                  UNLOCK();
                  p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
                  if (p_Var16 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_00100f03;
                  LAB_00100bbb:p_Var1 = p_Var16 + 8;
                  if (*(long*)( p_Var16 + 8 ) == 0x100000001) {
                     *(undefined8*)( p_Var16 + 8 ) = 0;
                     ( **(code**)( *(long*)p_Var16 + 0x10 ) )();
                     ( **(code**)( *(long*)p_Var16 + 0x18 ) )();
                  }
 else {
                     if (__libc_single_threaded == '\0') {
                        LOCK();
                        iVar9 = *(int*)p_Var1;
                        *(int*)p_Var1 = *(int*)p_Var1 + -1;
                        UNLOCK();
                     }
 else {
                        iVar9 = *(int*)( p_Var16 + 8 );
                        *(int*)( p_Var16 + 8 ) = iVar9 + -1;
                     }

                     if (iVar9 == 1) {
                        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var16);
                     }

                  }

                  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
                  goto LAB_00100bef;
               }

               *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
               p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
               if (p_Var16 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_00100bbb;
               LAB_00100f03:*(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
               *(undefined8*)( puVar4 + 6 ) = uVar6;
               *(undefined8*)( puVar4 + 8 ) = uVar7;
               goto LAB_00100f0f;
            }

            if (p_Var16 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_00100bbb;
            *(undefined8*)( puVar4 + 6 ) = uVar6;
            *(undefined8*)( puVar4 + 8 ) = uVar7;
         }

         uVar13 = *(uint*)( plVar15[5] + ( ulong )((int)plVar15[3] + (int)plVar15[2] & 0x3ff) * 0x28 );
         if (( uVar13 < 0x100 ) && ( *(char*)( in_RSI + 0x48 + (ulong)uVar13 ) != '\0' )) goto LAB_001010f0;
         plVar15 = *(long**)( in_RSI + 0x40 );
         lVar10 = plVar15[4];
         if (lVar10 != 0) goto LAB_00100e36;
         ( **(code**)( *plVar15 + 0x28 ) )(&local_68, plVar15);
         uVar8 = ( **(code**)( *plVar15 + 0x20 ) )(plVar15);
         uVar7 = local_50;
         uVar6 = local_58;
         p_Var17 = local_60;
         uVar5 = local_68;
         if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
            if (__libc_single_threaded == '\0') {
               LOCK();
               *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
               UNLOCK();
            }
 else {
               *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
            }

            if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
               p_Var16 = local_60 + 8;
               if (*(long*)( local_60 + 8 ) == 0x100000001) {
                  *(undefined8*)( local_60 + 8 ) = 0;
                  ( **(code**)( *(long*)local_60 + 0x10 ) )();
                  ( **(code**)( *(long*)p_Var17 + 0x18 ) )();
               }
 else {
                  if (__libc_single_threaded == '\0') {
                     LOCK();
                     iVar9 = *(int*)p_Var16;
                     *(int*)p_Var16 = *(int*)p_Var16 + -1;
                     UNLOCK();
                  }
 else {
                     iVar9 = *(int*)( local_60 + 8 );
                     *(int*)( local_60 + 8 ) = iVar9 + -1;
                  }

                  if (iVar9 == 1) {
                     std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
                  }

               }

            }

         }

         lVar10 = plVar15[3];
         lVar12 = plVar15[4];
         if (lVar10 + lVar12 == 0x400) {
            if (lVar10 == 0) goto LAB_00103b82;
            lVar10 = lVar10 + -1;
            plVar15[3] = lVar10;
            uVar13 = (int)plVar15[2] + 1U & 0x3ff;
            plVar15[2] = (ulong)uVar13;
         }
 else {
            uVar13 = (uint)plVar15[2];
         }

         plVar15[4] = lVar12 + 1;
         puVar4 = (undefined4*)( plVar15[5] + ( ulong )((int)lVar10 + uVar13 + (int)lVar12 & 0x3ff) * 0x28 );
         *puVar4 = uVar8;
         p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
         *(ulong*)( puVar4 + 2 ) = uVar5;
         if (p_Var17 == p_Var16) {
            LAB_00100d69:*(undefined8*)( puVar4 + 6 ) = uVar6;
            *(undefined8*)( puVar4 + 8 ) = uVar7;
            if (p_Var17 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
               LAB_00100f6f:p_Var16 = p_Var17 + 8;
               if (*(long*)( p_Var17 + 8 ) == 0x100000001) {
                  *(undefined8*)( p_Var17 + 8 ) = 0;
                  ( **(code**)( *(long*)p_Var17 + 0x10 ) )(p_Var17);
                  ( **(code**)( *(long*)p_Var17 + 0x18 ) )(p_Var17);
               }
 else {
                  if (__libc_single_threaded == '\0') {
                     LOCK();
                     iVar9 = *(int*)p_Var16;
                     *(int*)p_Var16 = *(int*)p_Var16 + -1;
                     UNLOCK();
                  }
 else {
                     iVar9 = *(int*)( p_Var17 + 8 );
                     *(int*)( p_Var17 + 8 ) = iVar9 + -1;
                  }

                  if (iVar9 == 1) {
                     std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var17);
                  }

               }

            }

         }
 else {
            if (p_Var17 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
               if (__libc_single_threaded == '\0') {
                  LOCK();
                  *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
                  UNLOCK();
                  p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
                  if (p_Var16 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_00100f63;
                  LAB_00100d33:p_Var1 = p_Var16 + 8;
                  if (*(long*)( p_Var16 + 8 ) == 0x100000001) {
                     *(undefined8*)( p_Var16 + 8 ) = 0;
                     ( **(code**)( *(long*)p_Var16 + 0x10 ) )(p_Var16);
                     ( **(code**)( *(long*)p_Var16 + 0x18 ) )(p_Var16);
                  }
 else {
                     if (__libc_single_threaded == '\0') {
                        LOCK();
                        iVar9 = *(int*)p_Var1;
                        *(int*)p_Var1 = *(int*)p_Var1 + -1;
                        UNLOCK();
                     }
 else {
                        iVar9 = *(int*)( p_Var16 + 8 );
                        *(int*)( p_Var16 + 8 ) = iVar9 + -1;
                     }

                     if (iVar9 == 1) {
                        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var16);
                     }

                  }

                  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
                  goto LAB_00100d69;
               }

               *(int*)( p_Var17 + 8 ) = *(int*)( p_Var17 + 8 ) + 1;
               p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 );
               if (p_Var16 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_00100d33;
               LAB_00100f63:*(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar4 + 4 ) = p_Var17;
               *(undefined8*)( puVar4 + 6 ) = uVar6;
               *(undefined8*)( puVar4 + 8 ) = uVar7;
               goto LAB_00100f6f;
            }

            if (p_Var16 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_00100d33;
            *(undefined8*)( puVar4 + 6 ) = uVar6;
            *(undefined8*)( puVar4 + 8 ) = uVar7;
         }

         lVar12 = plVar15[3];
         uVar13 = *(uint*)( plVar15[5] + ( ulong )((int)plVar15[2] + (int)lVar12 & 0x3ff) * 0x28 );
         lVar10 = plVar15[4];
      }
 else {
         uVar13 = *(uint*)( plVar15[5] + ( ulong )((int)plVar15[2] + (int)plVar15[3] & 0x3ff) * 0x28 );
         if (0xff < uVar13) {
            plVar15[3] = plVar15[3] + 1;
            plVar15[4] = lVar10 + -1;
            goto LAB_00103b82;
         }

         if (*(char*)( in_RSI + 0x48 + (ulong)uVar13 ) != '\0') goto LAB_001010f0;
         LAB_00100e36:lVar12 = plVar15[3];
         uVar13 = *(uint*)( plVar15[5] + ( ulong )((int)plVar15[2] + (int)lVar12 & 0x3ff) * 0x28 );
      }

      plVar15[3] = lVar12 + 1;
      plVar15[4] = lVar10 + -1;
      if (( 0xff < uVar13 ) || ( *(char*)( in_RSI + 0x148 + (ulong)uVar13 ) == '\0' )) goto LAB_00103b82;
      local_68 = CONCAT71(local_68._1_7_, (char)uVar13);
      if (local_80 == local_78) break;
      *local_80 = (char)uVar13;
      plVar15 = *(long**)( in_RSI + 0x40 );
      local_80 = local_80 + 1;
      lVar10 = plVar15[4];
   }
 while ( true );
   std::vector<char,std::allocator<char>>::_M_realloc_insert<char>((vector<char,std::allocator<char>>*)&local_88, local_80, &local_68);
   goto LAB_0010093d;
}
/* embree::RefCount::refInc() */RefCount * __thiscall embree::RefCount::refInc(RefCount *this){
   LOCK();
   *(long*)( this + 8 ) = *(long*)( this + 8 ) + 1;
   UNLOCK();
   return this;
}
/* embree::RefCount::refDec() */void embree::RefCount::refDec(RefCount *this) {
   RefCount *pRVar1;
   LOCK();
   pRVar1 = this + 8;
   *(long*)pRVar1 = *(long*)pRVar1 + -1;
   UNLOCK();
   if (( this != (RefCount*)0x0 ) && ( *(long*)pRVar1 == 0 )) {
      /* WARNING: Could not recover jumptable at 0x001032a9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *(long*)this + 8 ) )();
      return;
   }

   return;
}
/* std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold() */void std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this) {
   _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
   int iVar2;
   ( **(code**)( *(long*)this + 0x10 ) )();
   if (__libc_single_threaded == '\0') {
      LOCK();
      p_Var1 = this + 0xc;
      iVar2 = *(int*)p_Var1;
      *(int*)p_Var1 = *(int*)p_Var1 + -1;
      UNLOCK();
   }
 else {
      iVar2 = *(int*)( this + 0xc );
      *(int*)( this + 0xc ) = iVar2 + -1;
   }

   if (iVar2 != 1) {
      return;
   }

   /* WARNING: Could not recover jumptable at 0x001032fb. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)this + 0x18 ) )(this);
   return;
}
/* embree::StringStream::~StringStream() */void embree::StringStream::~StringStream(StringStream *this) {
   long *plVar1;
   _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
   int iVar3;
   long *plVar4;
   undefined8 *puVar5;
   _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
   undefined8 *puVar6;
   undefined8 *puVar7;
   *(undefined***)this = &PTR__StringStream_00103d80;
   if (*(StringStream**)( this + 0x248 ) != this + 600) {
      operator_delete(*(StringStream**)( this + 0x248 ), *(long*)( this + 600 ) + 1);
   }

   plVar4 = *(long**)( this + 0x40 );
   if (plVar4 != (long*)0x0) {
      if (*(code**)( *plVar4 + 0x18 ) == RefCount::refDec) {
         LOCK();
         plVar1 = plVar4 + 1;
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            ( **(code**)( *plVar4 + 8 ) )();
         }

      }
 else {
         ( **(code**)( *plVar4 + 0x18 ) )();
      }

   }

   puVar5 = *(undefined8**)( this + 0x30 );
   puVar7 = *(undefined8**)( this + 0x28 );
   *(undefined**)this = &DAT_00103d40;
   if (puVar5 != puVar7) {
      do {
         while (true) {
            this_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)puVar7[5];
            if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
               p_Var2 = this_00 + 8;
               if (*(long*)( this_00 + 8 ) == 0x100000001) {
                  *(undefined8*)( this_00 + 8 ) = 0;
                  ( **(code**)( *(long*)this_00 + 0x10 ) )(this_00);
                  ( **(code**)( *(long*)this_00 + 0x18 ) )(this_00);
               }
 else {
                  if (__libc_single_threaded == '\0') {
                     LOCK();
                     iVar3 = *(int*)p_Var2;
                     *(int*)p_Var2 = *(int*)p_Var2 + -1;
                     UNLOCK();
                  }
 else {
                     iVar3 = *(int*)( this_00 + 8 );
                     *(int*)( this_00 + 8 ) = iVar3 + -1;
                  }

                  if (iVar3 == 1) {
                     std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
                  }

               }

            }

            puVar6 = (undefined8*)*puVar7;
            if (puVar6 != puVar7 + 2) break;
            puVar7 = puVar7 + 8;
            if (puVar5 == puVar7) goto LAB_001033f3;
         }
;
         plVar4 = puVar7 + 2;
         puVar7 = puVar7 + 8;
         operator_delete(puVar6, *plVar4 + 1);
      }
 while ( puVar5 != puVar7 );
      LAB_001033f3:puVar7 = *(undefined8**)( this + 0x28 );
   }

   if (puVar7 != (undefined8*)0x0) {
      operator_delete(puVar7, *(long*)( this + 0x38 ) - (long)puVar7);
      return;
   }

   return;
}
/* embree::StringStream::~StringStream() */void embree::StringStream::~StringStream(StringStream *this) {
   long *plVar1;
   _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
   int iVar3;
   long *plVar4;
   undefined8 *puVar5;
   _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
   undefined8 *puVar6;
   undefined8 *puVar7;
   *(undefined***)this = &PTR__StringStream_00103d80;
   if (*(StringStream**)( this + 0x248 ) != this + 600) {
      operator_delete(*(StringStream**)( this + 0x248 ), *(long*)( this + 600 ) + 1);
   }

   plVar4 = *(long**)( this + 0x40 );
   if (plVar4 != (long*)0x0) {
      if (*(code**)( *plVar4 + 0x18 ) == RefCount::refDec) {
         LOCK();
         plVar1 = plVar4 + 1;
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            ( **(code**)( *plVar4 + 8 ) )();
         }

      }
 else {
         ( **(code**)( *plVar4 + 0x18 ) )();
      }

   }

   puVar5 = *(undefined8**)( this + 0x30 );
   puVar7 = *(undefined8**)( this + 0x28 );
   *(undefined**)this = &DAT_00103d40;
   if (puVar5 != puVar7) {
      do {
         while (true) {
            this_00 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)puVar7[5];
            if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
               p_Var2 = this_00 + 8;
               if (*(long*)( this_00 + 8 ) == 0x100000001) {
                  *(undefined8*)( this_00 + 8 ) = 0;
                  ( **(code**)( *(long*)this_00 + 0x10 ) )(this_00);
                  ( **(code**)( *(long*)this_00 + 0x18 ) )(this_00);
               }
 else {
                  if (__libc_single_threaded == '\0') {
                     LOCK();
                     iVar3 = *(int*)p_Var2;
                     *(int*)p_Var2 = *(int*)p_Var2 + -1;
                     UNLOCK();
                  }
 else {
                     iVar3 = *(int*)( this_00 + 8 );
                     *(int*)( this_00 + 8 ) = iVar3 + -1;
                  }

                  if (iVar3 == 1) {
                     std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
                  }

               }

            }

            puVar6 = (undefined8*)*puVar7;
            if (puVar6 != puVar7 + 2) break;
            puVar7 = puVar7 + 8;
            if (puVar5 == puVar7) goto LAB_00103583;
         }
;
         plVar4 = puVar7 + 2;
         puVar7 = puVar7 + 8;
         operator_delete(puVar6, *plVar4 + 1);
      }
 while ( puVar5 != puVar7 );
      LAB_00103583:puVar7 = *(undefined8**)( this + 0x28 );
   }

   if (puVar7 != (undefined8*)0x0) {
      operator_delete(puVar7, *(long*)( this + 0x38 ) - (long)puVar7);
   }

   operator_delete(this, 0x270);
   return;
}
/* embree::StringStream::location() */void embree::StringStream::location(void) {
   _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
   undefined4 *puVar2;
   long *plVar3;
   long lVar4;
   undefined8 uVar5;
   undefined4 uVar6;
   int iVar7;
   long lVar8;
   uint uVar9;
   long in_RSI;
   undefined8 *in_RDI;
   _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var10;
   long in_FS_OFFSET;
   undefined8 local_68;
   _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
   undefined8 local_58;
   undefined8 local_50;
   long local_40;
   plVar3 = *(long**)( in_RSI + 0x40 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar3[4] != 0) goto LAB_001037c0;
   ( **(code**)( *plVar3 + 0x28 ) )(&local_68, plVar3);
   uVar6 = ( **(code**)( *plVar3 + 0x20 ) )(plVar3);
   if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
      if (__libc_single_threaded == '\0') {
         LOCK();
         *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
         UNLOCK();
      }
 else {
         *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
      }

      if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
         p_Var10 = local_60 + 8;
         if (*(long*)( local_60 + 8 ) == 0x100000001) {
            *(undefined8*)( local_60 + 8 ) = 0;
            ( **(code**)( *(long*)local_60 + 0x10 ) )(local_60);
            ( **(code**)( *(long*)local_60 + 0x18 ) )(local_60);
         }
 else {
            if (__libc_single_threaded == '\0') {
               LOCK();
               iVar7 = *(int*)p_Var10;
               *(int*)p_Var10 = *(int*)p_Var10 + -1;
               UNLOCK();
            }
 else {
               iVar7 = *(int*)( local_60 + 8 );
               *(int*)( local_60 + 8 ) = iVar7 + -1;
            }

            if (iVar7 == 1) {
               std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
            }

         }

      }

   }

   lVar8 = plVar3[3];
   lVar4 = plVar3[4];
   if (lVar8 + lVar4 == 0x400) {
      if (lVar8 == 0) {
         /* WARNING: Subroutine does not return */
         abort();
      }

      lVar8 = lVar8 + -1;
      plVar3[3] = lVar8;
      uVar9 = (int)plVar3[2] + 1U & 0x3ff;
      plVar3[2] = (ulong)uVar9;
   }
 else {
      uVar9 = (uint)plVar3[2];
   }

   plVar3[4] = lVar4 + 1;
   puVar2 = (undefined4*)( plVar3[5] + ( ulong )((int)lVar8 + uVar9 + (int)lVar4 & 0x3ff) * 0x28 );
   *puVar2 = uVar6;
   p_Var10 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar2 + 4 );
   *(undefined8*)( puVar2 + 2 ) = local_68;
   if (local_60 == p_Var10) {
      LAB_001037aa:*(undefined8*)( puVar2 + 6 ) = local_58;
      *(undefined8*)( puVar2 + 8 ) = local_50;
      if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_001037c0;
   }
 else {
      if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
         if (p_Var10 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) {
            *(undefined8*)( puVar2 + 6 ) = local_58;
            *(undefined8*)( puVar2 + 8 ) = local_50;
            goto LAB_001037c0;
         }

         LAB_0010376a:p_Var1 = p_Var10 + 8;
         if (*(long*)( p_Var10 + 8 ) == 0x100000001) {
            *(undefined8*)( p_Var10 + 8 ) = 0;
            ( **(code**)( *(long*)p_Var10 + 0x10 ) )(p_Var10);
            ( **(code**)( *(long*)p_Var10 + 0x18 ) )(p_Var10);
         }
 else {
            if (__libc_single_threaded == '\0') {
               LOCK();
               iVar7 = *(int*)p_Var1;
               *(int*)p_Var1 = *(int*)p_Var1 + -1;
               UNLOCK();
            }
 else {
               iVar7 = *(int*)( p_Var10 + 8 );
               *(int*)( p_Var10 + 8 ) = iVar7 + -1;
            }

            if (iVar7 == 1) {
               std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var10);
            }

         }

         *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar2 + 4 ) = local_60;
         goto LAB_001037aa;
      }

      if (__libc_single_threaded == '\0') {
         LOCK();
         *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
         UNLOCK();
         p_Var10 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar2 + 4 );
      }
 else {
         *(int*)( local_60 + 8 ) = *(int*)( local_60 + 8 ) + 1;
         p_Var10 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar2 + 4 );
      }

      if (p_Var10 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>*)0x0) goto LAB_0010376a;
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>**)( puVar2 + 4 ) = local_60;
      *(undefined8*)( puVar2 + 6 ) = local_58;
      *(undefined8*)( puVar2 + 8 ) = local_50;
   }

   p_Var10 = local_60 + 8;
   if (*(long*)( local_60 + 8 ) == 0x100000001) {
      *(undefined8*)( local_60 + 8 ) = 0;
      ( **(code**)( *(long*)local_60 + 0x10 ) )(local_60);
      ( **(code**)( *(long*)local_60 + 0x18 ) )(local_60);
   }
 else {
      if (__libc_single_threaded == '\0') {
         LOCK();
         iVar7 = *(int*)p_Var10;
         *(int*)p_Var10 = *(int*)p_Var10 + -1;
         UNLOCK();
      }
 else {
         iVar7 = *(int*)( local_60 + 8 );
         *(int*)( local_60 + 8 ) = iVar7 + -1;
      }

      if (iVar7 == 1) {
         std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
      }

   }

   LAB_001037c0:lVar8 = plVar3[5] + ( ulong )((int)plVar3[3] + (int)plVar3[2] & 0x3ff) * 0x28;
   *in_RDI = *(undefined8*)( lVar8 + 8 );
   lVar4 = *(long*)( lVar8 + 0x10 );
   in_RDI[1] = lVar4;
   if (lVar4 != 0) {
      if (__libc_single_threaded == '\0') {
         LOCK();
         *(int*)( lVar4 + 8 ) = *(int*)( lVar4 + 8 ) + 1;
         UNLOCK();
      }
 else {
         *(int*)( lVar4 + 8 ) = *(int*)( lVar4 + 8 ) + 1;
      }

   }

   uVar5 = *(undefined8*)( lVar8 + 0x20 );
   in_RDI[2] = *(undefined8*)( lVar8 + 0x18 );
   in_RDI[3] = uVar5;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* void std::vector<char, std::allocator<char>
   >::_M_realloc_insert<char>(__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, char&&) */void std::vector<char,std::allocator<char>>::_M_realloc_insert<char>(vector<char,std::allocator<char>> *this, void *param_2, undefined1 *param_3) {
   long lVar1;
   void *__src;
   ulong uVar2;
   ulong uVar3;
   void *__dest;
   void *__dest_00;
   size_t __n;
   ulong uVar4;
   size_t __n_00;
   lVar1 = *(long*)( this + 8 );
   __src = *(void**)this;
   uVar3 = lVar1 - (long)__src;
   if (uVar3 != 0x7fffffffffffffff) {
      __n = (long)param_2 - (long)__src;
      uVar4 = 1;
      if (uVar3 != 0) {
         uVar2 = uVar3 * 2;
         uVar4 = 0x7fffffffffffffff;
         if (uVar2 < 0x8000000000000000) {
            uVar4 = uVar2;
         }

         if (uVar2 < uVar3) {
            uVar4 = 0x7fffffffffffffff;
         }

      }

      __dest = operator_new(uVar4);
      *(undefined1*)( (long)__dest + __n ) = *param_3;
      if (0 < (long)__n) {
         memmove(__dest, __src, __n);
      }

      __n_00 = lVar1 - (long)param_2;
      __dest_00 = (void*)( (long)__dest + __n + 1 );
      if (0 < (long)__n_00) {
         __dest_00 = memcpy(__dest_00, param_2, __n_00);
      }

      if (__src != (void*)0x0) {
         operator_delete(__src, *(long*)( this + 0x10 ) - (long)__src);
      }

      *(void**)this = __dest;
      *(size_t*)( this + 8 ) = __n_00 + (long)__dest_00;
      *(ulong*)( this + 0x10 ) = (long)__dest + uVar4;
      return;
   }

   std::__throw_length_error("vector::_M_realloc_insert");
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* embree::StringStream::next[abi:cxx11]() [clone .cold] */void embree::StringStream::next_abi_cxx11_(void) {
   long in_RAX;
   long in_RCX;
   long unaff_RBX;
   *(long*)( unaff_RBX + 0x18 ) = in_RCX + 1;
   *(long*)( unaff_RBX + 0x20 ) = in_RAX + -1;
   /* WARNING: Subroutine does not return */
   abort();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* embree::StringStream::StringStream(embree::Ref<embree::Stream<int> > const&,
   std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&,
   std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool) */void embree::StringStream::_GLOBAL__sub_I_StringStream(void) {
   undefined8 uVar1;
   undefined8 *puVar2;
   long in_FS_OFFSET;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = 0x49;
   stringChars = (undefined8*)&DAT_00103270;
   puVar2 = (undefined8*)std::__cxx11::string::_M_create((ulong*)&stringChars, ( ulong ) & local_18);
   uVar1 = _UNK_00103db8;
   _DAT_00103270 = local_18;
   stringChars = puVar2;
   *puVar2 = __LC3;
   puVar2[1] = uVar1;
   uVar1 = _UNK_00103dc8;
   DAT_00103268 = local_18;
   puVar2[2] = __LC4;
   puVar2[3] = uVar1;
   uVar1 = _UNK_00103dd8;
   puVar2[4] = __LC5;
   puVar2[5] = uVar1;
   uVar1 = _UNK_00103de8;
   puVar2[6] = __LC6;
   puVar2[7] = uVar1;
   uVar1 = _UNK_00103df8;
   *(undefined8*)( (long)puVar2 + 0x39 ) = __LC7;
   *(undefined8*)( (long)puVar2 + 0x41 ) = uVar1;
   *(undefined1*)( (long)stringChars + local_18 ) = 0;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      __cxa_atexit(std::__cxx11::string::~string, &stringChars, &__dso_handle);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* embree::StringStream::~StringStream() */void embree::StringStream::~StringStream(StringStream *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

