/* void std::__cxx11::string::_M_construct<char*>(char*, char*, std::forward_iterator_tag) [clone
   .isra.0] */void std::__cxx11::string::_M_construct<char*>(ulong *param_1, undefined1 *param_2, long param_3) {
   undefined1 *__dest;
   ulong __n;
   long in_FS_OFFSET;
   ulong local_28;
   long local_20;
   __n = param_3 - (long)param_2;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = __n;
   if (__n < 0x10) {
      __dest = (undefined1*)*param_1;
      if (__n == 1) {
         *__dest = *param_2;
         __dest = (undefined1*)*param_1;
         goto LAB_00100044;
      }

      if (__n == 0) goto LAB_00100044;
   }
 else {
      __dest = (undefined1*)std::__cxx11::string::_M_create(param_1, ( ulong ) & local_28);
      *param_1 = (ulong)__dest;
      param_1[2] = local_28;
   }

   memcpy(__dest, param_2, __n);
   __dest = (undefined1*)*param_1;
   LAB_00100044:param_1[1] = local_28;
   __dest[local_28] = 0;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void vector_remove_if_and_erase<XrSdkLogObjectInfo, std::allocator<XrSdkLogObjectInfo>,
   ObjectInfoCollection::RemoveObject(unsigned long, XrObjectType)::{lambda(XrSdkLogObjectInfo
   const&)#1}>(std::vector<XrSdkLogObjectInfo, std::allocator<XrSdkLogObjectInfo> >&,
   ObjectInfoCollection::RemoveObject(unsigned long, XrObjectType)::{lambda(XrSdkLogObjectInfo
   const&)#1}&&) */void vector_remove_if_and_erase<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>,ObjectInfoCollection::RemoveObject(unsigned_long,XrObjectType)::_lambda(XrSdkLogObjectInfo_const&)_1_>(vector *param_1, _lambda_XrSdkLogObjectInfo_const___1_ *param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   long lVar4;
   long *plVar5;
   long *plVar6;
   uint uVar7;
   ulong uVar8;
   long *plVar9;
   long *plVar10;
   uint uVar11;
   ulong uVar12;
   long lVar13;
   long *plVar14;
   plVar6 = *(long**)( param_1 + 8 );
   plVar14 = *(long**)param_1;
   iVar1 = *(int*)( param_2 + 8 );
   lVar13 = *(long*)param_2;
   lVar4 = ( (long)plVar6 - (long)plVar14 >> 4 ) * -0x5555555555555555;
   if (0 < lVar4 >> 2) {
      plVar5 = plVar14 + ( lVar4 >> 2 ) * 0x18;
      do {
         if (( lVar13 == *plVar14 ) && ( iVar1 == (int)plVar14[1] )) goto LAB_0010017e;
         if (( lVar13 == plVar14[6] ) && ( iVar1 == (int)plVar14[7] )) {
            plVar14 = plVar14 + 6;
            goto LAB_0010017e;
         }

         if (( lVar13 == plVar14[0xc] ) && ( iVar1 == (int)plVar14[0xd] )) {
            plVar14 = plVar14 + 0xc;
            goto LAB_0010017e;
         }

         if (( lVar13 == plVar14[0x12] ) && ( iVar1 == (int)plVar14[0x13] )) {
            plVar14 = plVar14 + 0x12;
            goto LAB_0010017e;
         }

         plVar14 = plVar14 + 0x18;
      }
 while ( plVar14 != plVar5 );
      lVar4 = ( (long)plVar6 - (long)plVar14 >> 4 ) * -0x5555555555555555;
   }

   if (lVar4 == 2) {
      LAB_001005a8:if (( lVar13 == *plVar14 ) && ( iVar1 == (int)plVar14[1] )) goto LAB_0010017e;
      plVar14 = plVar14 + 6;
   }
 else {
      if (lVar4 == 3) {
         if (( lVar13 == *plVar14 ) && ( iVar1 == (int)plVar14[1] )) goto LAB_0010017e;
         plVar14 = plVar14 + 6;
         goto LAB_001005a8;
      }

      if (lVar4 != 1) {
         return;
      }

   }

   if (lVar13 != *plVar14) {
      return;
   }

   if (iVar1 != (int)plVar14[1]) {
      return;
   }

   LAB_0010017e:if (plVar6 != plVar14) {
      if (plVar6 != plVar14 + 6) {
         plVar5 = plVar14 + 10;
         plVar3 = (long*)( (long)plVar14 + ( ( ulong )((long)plVar6 + ( -0x60 - (long)plVar14 )) & 0xfffffffffffffff0 ) + 0x80 );
         do {
            lVar4 = plVar5[-3];
            if (lVar13 == plVar5[-4]) {
               if (iVar1 != (int)lVar4) {
                  *plVar14 = lVar13;
                  goto LAB_001001b3;
               }

            }
 else {
               *plVar14 = plVar5[-4];
               LAB_001001b3:plVar9 = (long*)plVar14[2];
               uVar12 = plVar5[-1];
               *(int*)( plVar14 + 1 ) = (int)lVar4;
               plVar10 = (long*)plVar5[-2];
               if (plVar9 == plVar14 + 4) {
                  if (plVar10 == plVar5) goto LAB_00100248;
                  plVar14[2] = (long)plVar10;
                  plVar14[3] = uVar12;
                  plVar14[4] = *plVar5;
                  LAB_0010023c:plVar5[-2] = (long)plVar5;
                  plVar10 = plVar5;
               }
 else if (plVar10 == plVar5) {
                  LAB_00100248:if (plVar14 != plVar5 + -4) {
                     if (uVar12 != 0) {
                        if (uVar12 == 1) {
                           *(char*)plVar9 = (char)*plVar5;
                           lVar4 = plVar5[-1];
                           plVar14[3] = lVar4;
                           *(undefined1*)( plVar14[2] + lVar4 ) = 0;
                           plVar10 = (long*)plVar5[-2];
                           goto LAB_001001f2;
                        }

                        uVar7 = (uint)uVar12;
                        uVar8 = uVar12 & 0xffffffff;
                        if (uVar7 < 8) {
                           if (( uVar12 & 4 ) == 0) {
                              if (uVar7 != 0) {
                                 *(char*)plVar9 = (char)*plVar5;
                                 if (( uVar12 & 2 ) == 0) goto LAB_00100293;
                                 *(undefined2*)( (long)plVar9 + ( uVar8 - 2 ) ) = *(undefined2*)( (long)plVar5 + ( uVar8 - 2 ) );
                                 plVar9 = (long*)plVar14[2];
                                 uVar12 = plVar5[-1];
                              }

                           }
 else {
                              *(int*)plVar9 = (int)*plVar5;
                              *(undefined4*)( (long)plVar9 + ( uVar8 - 4 ) ) = *(undefined4*)( (long)plVar5 + ( uVar8 - 4 ) );
                              plVar9 = (long*)plVar14[2];
                              uVar12 = plVar5[-1];
                           }

                        }
 else {
                           *plVar9 = *plVar5;
                           *(undefined8*)( (long)plVar9 + ( ( uVar12 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)plVar5 + ( ( uVar12 & 0xffffffff ) - 8 ) );
                           lVar4 = (long)plVar9 - ( ( ulong )(plVar9 + 1) & 0xfffffffffffffff8 );
                           uVar7 = (int)lVar4 + uVar7 & 0xfffffff8;
                           if (7 < uVar7) {
                              uVar11 = 0;
                              do {
                                 uVar12 = (ulong)uVar11;
                                 uVar11 = uVar11 + 8;
                                 *(undefined8*)( ( ( ulong )(plVar9 + 1) & 0xfffffffffffffff8 ) + uVar12 ) = *(undefined8*)( (long)plVar5 + ( uVar12 - lVar4 ) );
                              }
 while ( uVar11 < uVar7 );
                           }

                           LAB_00100293:plVar9 = (long*)plVar14[2];
                           uVar12 = plVar5[-1];
                        }

                     }

                     plVar14[3] = uVar12;
                     *(undefined1*)( (long)plVar9 + uVar12 ) = 0;
                     plVar10 = (long*)plVar5[-2];
                  }

               }
 else {
                  plVar14[2] = (long)plVar10;
                  lVar4 = plVar14[4];
                  plVar14[3] = uVar12;
                  plVar14[4] = *plVar5;
                  if (plVar9 == (long*)0x0) goto LAB_0010023c;
                  plVar5[-2] = (long)plVar9;
                  *plVar5 = lVar4;
                  plVar10 = plVar9;
               }

               LAB_001001f2:plVar5[-1] = 0;
               plVar14 = plVar14 + 6;
               *(undefined1*)plVar10 = 0;
            }

            plVar5 = plVar5 + 6;
         }
 while ( plVar5 != plVar3 );
         if (plVar6 == plVar14) {
            return;
         }

      }

      plVar5 = *(long**)( param_1 + 8 );
      lVar13 = (long)plVar5 - (long)plVar6;
      if (( plVar6 != plVar5 ) && ( 0 < lVar13 )) {
         plVar5 = plVar6 + 4;
         plVar3 = plVar14;
         do {
            plVar9 = (long*)plVar5[-2];
            *plVar3 = plVar5[-4];
            *(int*)( plVar3 + 1 ) = (int)plVar5[-3];
            plVar10 = (long*)plVar3[2];
            if (plVar10 == plVar3 + 4) {
               if (plVar5 == plVar9) {
                  LAB_00100420:uVar12 = plVar5[-1];
                  if (plVar3 != plVar5 + -4) {
                     if (uVar12 != 0) {
                        if (uVar12 == 1) {
                           *(char*)plVar10 = (char)*plVar9;
                           uVar12 = plVar5[-1];
                           plVar10 = (long*)plVar3[2];
                        }
 else {
                           uVar7 = (uint)uVar12;
                           uVar8 = uVar12 & 0xffffffff;
                           if (uVar7 < 8) {
                              if (( uVar12 & 4 ) == 0) {
                                 if (uVar7 != 0) {
                                    *(char*)plVar10 = (char)*plVar9;
                                    if (( uVar12 & 2 ) == 0) goto LAB_0010058a;
                                    *(undefined2*)( (long)plVar10 + ( uVar8 - 2 ) ) = *(undefined2*)( (long)plVar9 + ( uVar8 - 2 ) );
                                    plVar10 = (long*)plVar3[2];
                                    uVar12 = plVar5[-1];
                                 }

                              }
 else {
                                 *(int*)plVar10 = (int)*plVar9;
                                 *(undefined4*)( (long)plVar10 + ( uVar8 - 4 ) ) = *(undefined4*)( (long)plVar9 + ( uVar8 - 4 ) );
                                 plVar10 = (long*)plVar3[2];
                                 uVar12 = plVar5[-1];
                              }

                           }
 else {
                              *plVar10 = *plVar9;
                              *(undefined8*)( (long)plVar10 + ( ( uVar12 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)plVar9 + ( ( uVar12 & 0xffffffff ) - 8 ) );
                              lVar4 = (long)plVar10 - ( ( ulong )(plVar10 + 1) & 0xfffffffffffffff8 );
                              uVar7 = (int)lVar4 + uVar7 & 0xfffffff8;
                              if (7 < uVar7) {
                                 uVar11 = 0;
                                 do {
                                    uVar12 = (ulong)uVar11;
                                    uVar11 = uVar11 + 8;
                                    *(undefined8*)( ( ( ulong )(plVar10 + 1) & 0xfffffffffffffff8 ) + uVar12 ) = *(undefined8*)( (long)plVar9 + ( uVar12 - lVar4 ) );
                                 }
 while ( uVar11 < uVar7 );
                              }

                              LAB_0010058a:plVar10 = (long*)plVar3[2];
                              uVar12 = plVar5[-1];
                           }

                        }

                     }

                     plVar3[3] = uVar12;
                     *(undefined1*)( (long)plVar10 + uVar12 ) = 0;
                     plVar9 = (long*)plVar5[-2];
                  }

               }
 else {
                  lVar4 = plVar5[-1];
                  plVar3[2] = (long)plVar9;
                  plVar3[3] = lVar4;
                  plVar3[4] = *plVar5;
                  LAB_00100389:plVar5[-2] = (long)plVar5;
                  plVar9 = plVar5;
               }

            }
 else {
               if (plVar5 == plVar9) goto LAB_00100420;
               lVar4 = plVar5[-1];
               lVar2 = plVar3[4];
               plVar3[2] = (long)plVar9;
               plVar3[3] = lVar4;
               plVar3[4] = *plVar5;
               if (plVar10 == (long*)0x0) goto LAB_00100389;
               plVar5[-2] = (long)plVar10;
               *plVar5 = lVar2;
               plVar9 = plVar10;
            }

            plVar3 = plVar3 + 6;
            plVar5[-1] = 0;
            plVar5 = plVar5 + 6;
            *(undefined1*)plVar9 = 0;
         }
 while ( plVar3 != (long*)( lVar13 + (long)plVar14 ) );
         plVar5 = *(long**)( param_1 + 8 );
         lVar13 = (long)plVar5 - (long)plVar6;
      }

      plVar14 = (long*)( lVar13 + (long)plVar14 );
      plVar6 = plVar14;
      if (plVar14 != plVar5) {
         do {
            if ((long*)plVar6[2] != plVar6 + 4) {
               operator_delete((long*)plVar6[2], plVar6[4] + 1);
            }

            plVar6 = plVar6 + 6;
         }
 while ( plVar5 != plVar6 );
         *(long**)( param_1 + 8 ) = plVar14;
         return;
      }

   }

   return;
}
/* std::_Hashtable<XrSession_T*, std::pair<XrSession_T* const,
   std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> >, std::allocator<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> > > >,
   std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> >, std::allocator<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> > > > > > >, std::allocator<std::pair<XrSession_T* const,
   std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> >, std::allocator<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> > > >,
   std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> >, std::allocator<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> > > > > > > >, std::__detail::_Select1st,
   std::equal_to<XrSession_T*>, std::hash<XrSession_T*>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true> >::_M_erase(std::integral_constant<bool,
   true>, XrSession_T* const&) [clone .isra.0] */void std::_Hashtable<XrSession_T*,std::pair<XrSession_T*const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>,std::allocator<std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>>long lVar2long *plVar3undefined8 *puVar4long lVar5ulong uVar6ulong uVar7undefined8 *puVar8long *plVar9long *plVar10if (param_1[3] == 0) {
   plVar10 = (long*)param_1[2];
   plVar9 = param_1 + 2;
   while (plVar3 = plVar10,plVar3 != (long*)0x0) {
      if (param_2 == plVar3[1]) {
         plVar10 = (long*)*plVar9;
         uVar6 = (ulong)plVar10[1] % (ulong)param_1[1];
         LAB_001006f1:lVar2 = *param_1;
         lVar5 = *plVar10;
         puVar1 = (undefined8*)( lVar2 + uVar6 * 8 );
         plVar3 = (long*)*puVar1;
         if (plVar9 == plVar3) {
            if (lVar5 != 0) {
               uVar7 = *(ulong*)( lVar5 + 8 ) % (ulong)param_1[1];
               if (uVar6 == uVar7) goto LAB_00100724;
               *(long**)( lVar2 + uVar7 * 8 ) = plVar9;
            }

            if (plVar3 == param_1 + 2) {
               param_1[2] = lVar5;
            }

            *puVar1 = 0;
            lVar5 = *plVar10;
         }
 else if (( lVar5 != 0 ) && ( uVar7 = uVar6 != uVar7 )) {
            *(long**)( lVar2 + uVar7 * 8 ) = plVar9;
            lVar5 = *plVar10;
         }

         LAB_00100724:plVar3 = (long*)plVar10[2];
         *plVar9 = lVar5;
         if (plVar3 != (long*)0x0) {
            puVar1 = (undefined8*)plVar3[1];
            puVar8 = (undefined8*)*plVar3;
            if (puVar1 != puVar8) {
               do {
                  puVar4 = (undefined8*)*puVar8;
                  if (puVar4 != (undefined8*)0x0) {
                     if ((undefined8*)*puVar4 != puVar4 + 2) {
                        operator_delete((undefined8*)*puVar4, puVar4[2] + 1);
                     }

                     operator_delete(puVar4, 0x40);
                  }

                  puVar8 = puVar8 + 1;
               }
 while ( puVar1 != puVar8 );
               puVar8 = (undefined8*)*plVar3;
            }

            if (puVar8 != (undefined8*)0x0) {
               operator_delete(puVar8, plVar3[2] - (long)puVar8);
            }

            operator_delete(plVar3, 0x18);
         }

         operator_delete(plVar10, 0x18);
         param_1[3] = param_1[3] + -1;
         return;
      }

      plVar9 = plVar3;
      plVar10 = (long*)*plVar3;
   }
;
}
 else {
   uVar6 = param_2 % (ulong)param_1[1];
   plVar9 = *(long**)( *param_1 + uVar6 * 8 );
   if (plVar9 != (long*)0x0) {
      uVar7 = ( (long*)*plVar9 )[1];
      plVar10 = (long*)*plVar9;
      do {
         if (param_2 == uVar7) {
            plVar10 = (long*)*plVar9;
            goto LAB_001006f1;
         }

         plVar3 = (long*)*plVar10;
      }
 while ( ( plVar3 != (long*)0x0 ) && ( uVar7 = plVar3[1] ),plVar9 = plVar10,plVar10 = plVar3,uVar6 == uVar7 % (ulong)param_1[1] );
   }

}
return;}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* XrSdkLogObjectInfo::ToString[abi:cxx11]() const */void XrSdkLogObjectInfo::ToString_abi_cxx11_(void) {
   byte bVar1;
   pointer_____offset_0x10___ puVar2;
   ostream *poVar3;
   undefined1 *puVar4;
   long **pplVar5;
   undefined8 *in_RSI;
   string *in_RDI;
   streambuf *psVar6;
   long in_FS_OFFSET;
   long *local_1e0;
   long *local_1d8;
   long local_1d0;
   long local_1c8[2];
   pointer_____offset_0x10___ local_1b8[2];
   undefined1 local_1a8[16];
   undefined1 local_198[16];
   undefined1 local_188[16];
   locale local_178[8];
   undefined4 local_170;
   undefined1 *local_168;
   undefined8 local_160;
   undefined1 local_158;
   undefined7 uStack_157;
   code *local_148[27];
   undefined8 local_70;
   undefined2 local_68;
   undefined1 local_60[16];
   undefined1 local_50[16];
   long local_40;
   puVar2 = PTR_vtable_00102d38;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   std::ios_base::ios_base((ios_base*)local_148);
   local_148[0] = std::ios::init;
   local_68 = 0;
   local_60 = (undefined1[16])0x0;
   local_50 = (undefined1[16])0x0;
   local_1b8[0] = _init;
   local_70 = 0;
   psVar6 = (streambuf*)( (ostream*)local_1b8 + *(long*)( _init + -0x18 ) );
   *(undefined8*)psVar6 = _locale;
   std::ios::init(psVar6);
   local_1b8[0] = &std::ios::vtable;
   local_1b8[1] = puVar2;
   local_1a8 = (undefined1[16])0x0;
   local_198 = (undefined1[16])0x0;
   local_188 = (undefined1[16])0x0;
   local_148[0] = std::__ostream_insert<char,std::char_traits<char>>;
   std::locale::locale(local_178);
   local_1b8[1] = &std::ios::vtable;
   local_158 = 0;
   local_170 = 0x10;
   local_160 = 0;
   local_168 = &local_158;
   std::ios::init((streambuf*)local_148);
   local_1e0 = (long*)*in_RSI;
   local_1d8 = local_1c8;
   std::__cxx11::string::_M_construct(( ulong ) & local_1d8, '\x12');
   *(undefined1*)local_1d8 = 0x30;
   *(undefined1*)( (long)local_1d8 + 1 ) = 0x78;
   pplVar5 = &local_1e0;
   puVar4 = (undefined1*)( (long)local_1d8 + local_1d0 + -2 );
   do {
      bVar1 = *(byte*)pplVar5;
      pplVar5 = (long**)( (long)pplVar5 + 1 );
      puVar4[1] = to_hex[abi:cxx11](unsigned_char_const * unsigned_long)::hex[bVar1 & 0xf];
      *puVar4 = to_hex[abi:cxx11](unsigned_char_const * unsigned_long)::hex[bVar1 >> 4];
      puVar4 = puVar4 + -2;
   }
 while ( &local_1d8 != pplVar5 );
   std::__ostream_insert<char,std::char_traits<char>>((ostream*)local_1b8, (char*)local_1d8, local_1d0);
   if (local_1d8 != local_1c8) {
      operator_delete(local_1d8, local_1c8[0] + 1);
   }

   if (in_RSI[3] != 0) {
      std::__ostream_insert<char,std::char_traits<char>>((ostream*)local_1b8, " (", 2);
      poVar3 = std::__ostream_insert<char,std::char_traits<char>>((ostream*)local_1b8, (char*)in_RSI[2], in_RSI[3]);
      std::__ostream_insert<char,std::char_traits<char>>(poVar3, ")", 1);
   }

   *(undefined8*)( in_RDI + 8 ) = 0;
   *(string**)in_RDI = in_RDI + 0x10;
   in_RDI[0x10] = (string)0x0;
   if (local_188._0_8_ == 0) {
      std::__cxx11::string::_M_assign(in_RDI);
   }
 else {
      std::__cxx11::string::_M_replace((ulong)in_RDI, 0, (char*)0x0, local_198._8_8_);
   }

   local_148[0] = std::__ostream_insert<char,std::char_traits<char>>;
   local_1b8[0] = &std::ios::vtable;
   local_1b8[1] = &std::ios::vtable;
   if (local_168 != &local_158) {
      operator_delete(local_168, CONCAT71(uStack_157, local_158) + 1);
   }

   local_1b8[1] = std::ios_base::~ios_base;
   std::locale::~locale(local_178);
   local_1b8[0] = _init;
   *(undefined8*)( (long)local_1b8 + *(long*)( _init + -0x18 ) ) = _locale;
   local_148[0] = std::ios::init;
   std::ios_base::~ios_base((ios_base*)local_148);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ObjectInfoCollection::RemoveObject(unsigned long, XrObjectType) */void ObjectInfoCollection::RemoveObject(ObjectInfoCollection *this, undefined8 param_1, undefined4 param_3) {
   long in_FS_OFFSET;
   undefined8 local_28;
   undefined4 local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = param_1;
   local_20 = param_3;
   vector_remove_if_and_erase<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>,ObjectInfoCollection::RemoveObject(unsigned_long,XrObjectType)::_lambda(XrSdkLogObjectInfo_const&)_1_>((vector*)this, (_lambda_XrSdkLogObjectInfo_const___1_*)&local_28);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ObjectInfoCollection::LookUpStoredObjectInfo(XrSdkLogObjectInfo const&) const */long *__thiscallObjectInfoCollection::LookUpStoredObjectInfo(ObjectInfoCollection *this, XrSdkLogObjectInfo *param_1) {
   long *plVar1;
   long lVar2;
   long *plVar3;
   long *plVar4;
   long lVar5;
   plVar1 = *(long**)( this + 8 );
   plVar3 = *(long**)this;
   lVar5 = ( (long)plVar1 - (long)plVar3 >> 4 ) * -0x5555555555555555;
   if (0 < lVar5 >> 2) {
      lVar2 = *(long*)param_1;
      plVar4 = plVar3 + ( lVar5 >> 2 ) * 0x18;
      do {
         if (( *plVar3 == lVar2 ) && ( (int)plVar3[1] == *(int*)( param_1 + 8 ) )) goto LAB_00100c88;
         if (( lVar2 == plVar3[6] ) && ( (int)plVar3[7] == *(int*)( param_1 + 8 ) )) {
            plVar4 = plVar3 + 6;
            if (plVar1 == plVar3 + 6) {
               plVar4 = (long*)0x0;
            }

            return plVar4;
         }

         if (( lVar2 == plVar3[0xc] ) && ( (int)plVar3[0xd] == *(int*)( param_1 + 8 ) )) {
            plVar4 = plVar3 + 0xc;
            if (plVar1 == plVar3 + 0xc) {
               plVar4 = (long*)0x0;
            }

            return plVar4;
         }

         if (( lVar2 == plVar3[0x12] ) && ( (int)plVar3[0x13] == *(int*)( param_1 + 8 ) )) {
            plVar4 = plVar3 + 0x12;
            if (plVar1 == plVar3 + 0x12) {
               plVar4 = (long*)0x0;
            }

            return plVar4;
         }

         plVar3 = plVar3 + 0x18;
      }
 while ( plVar3 != plVar4 );
      lVar5 = ( (long)plVar1 - (long)plVar3 >> 4 ) * -0x5555555555555555;
   }

   if (lVar5 == 2) {
      lVar5 = *(long*)param_1;
      LAB_00100cfa:if (( *plVar3 == lVar5 ) && ( (int)plVar3[1] == *(int*)( param_1 + 8 ) )) goto LAB_00100c88;
      plVar3 = plVar3 + 6;
   }
 else {
      if (lVar5 == 3) {
         lVar5 = *(long*)param_1;
         if (( *plVar3 == lVar5 ) && ( (int)plVar3[1] == *(int*)( param_1 + 8 ) )) goto LAB_00100c88;
         plVar3 = plVar3 + 6;
         goto LAB_00100cfa;
      }

      if (lVar5 != 1) {
         return (long*)0x0;
      }

      lVar5 = *(long*)param_1;
   }

   if (( *plVar3 != lVar5 ) || ( (int)plVar3[1] != *(int*)( param_1 + 8 ) )) {
      return (long*)0x0;
   }

   LAB_00100c88:if (plVar1 == plVar3) {
      plVar3 = (long*)0x0;
   }

   return plVar3;
}
/* ObjectInfoCollection::LookUpStoredObjectInfo(XrSdkLogObjectInfo const&) */long *__thiscallObjectInfoCollection::LookUpStoredObjectInfo(ObjectInfoCollection *this, XrSdkLogObjectInfo *param_1) {
   long *plVar1;
   long lVar2;
   long *plVar3;
   long *plVar4;
   long lVar5;
   plVar1 = *(long**)( this + 8 );
   plVar3 = *(long**)this;
   lVar5 = ( (long)plVar1 - (long)plVar3 >> 4 ) * -0x5555555555555555;
   if (0 < lVar5 >> 2) {
      lVar2 = *(long*)param_1;
      plVar4 = plVar3 + ( lVar5 >> 2 ) * 0x18;
      do {
         if (( *plVar3 == lVar2 ) && ( (int)plVar3[1] == *(int*)( param_1 + 8 ) )) goto LAB_00100e08;
         if (( lVar2 == plVar3[6] ) && ( (int)plVar3[7] == *(int*)( param_1 + 8 ) )) {
            plVar4 = plVar3 + 6;
            if (plVar1 == plVar3 + 6) {
               plVar4 = (long*)0x0;
            }

            return plVar4;
         }

         if (( lVar2 == plVar3[0xc] ) && ( (int)plVar3[0xd] == *(int*)( param_1 + 8 ) )) {
            plVar4 = plVar3 + 0xc;
            if (plVar1 == plVar3 + 0xc) {
               plVar4 = (long*)0x0;
            }

            return plVar4;
         }

         if (( lVar2 == plVar3[0x12] ) && ( (int)plVar3[0x13] == *(int*)( param_1 + 8 ) )) {
            plVar4 = plVar3 + 0x12;
            if (plVar1 == plVar3 + 0x12) {
               plVar4 = (long*)0x0;
            }

            return plVar4;
         }

         plVar3 = plVar3 + 0x18;
      }
 while ( plVar3 != plVar4 );
      lVar5 = ( (long)plVar1 - (long)plVar3 >> 4 ) * -0x5555555555555555;
   }

   if (lVar5 == 2) {
      lVar5 = *(long*)param_1;
      LAB_00100e7a:if (( *plVar3 == lVar5 ) && ( (int)plVar3[1] == *(int*)( param_1 + 8 ) )) goto LAB_00100e08;
      plVar3 = plVar3 + 6;
   }
 else {
      if (lVar5 == 3) {
         lVar5 = *(long*)param_1;
         if (( *plVar3 == lVar5 ) && ( (int)plVar3[1] == *(int*)( param_1 + 8 ) )) goto LAB_00100e08;
         plVar3 = plVar3 + 6;
         goto LAB_00100e7a;
      }

      if (lVar5 != 1) {
         return (long*)0x0;
      }

      lVar5 = *(long*)param_1;
   }

   if (( *plVar3 != lVar5 ) || ( (int)plVar3[1] != *(int*)( param_1 + 8 ) )) {
      return (long*)0x0;
   }

   LAB_00100e08:if (plVar1 == plVar3) {
      plVar3 = (long*)0x0;
   }

   return plVar3;
}
/* ObjectInfoCollection::LookUpObjectName(XrDebugUtilsObjectNameInfoEXT&) const */bool ObjectInfoCollection::LookUpObjectName(ObjectInfoCollection *this, XrDebugUtilsObjectNameInfoEXT *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   undefined8 local_48;
   undefined4 local_40;
   undefined8 local_30;
   undefined1 local_28;
   long local_10;
   local_48 = *(undefined8*)( param_1 + 0x18 );
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = *(undefined4*)( param_1 + 0x10 );
   local_28 = 0;
   local_30 = 0;
   lVar1 = LookUpStoredObjectInfo(this, (XrSdkLogObjectInfo*)&local_48);
   if (lVar1 != 0) {
      *(undefined8*)( param_1 + 0x20 ) = *(undefined8*)( lVar1 + 0x10 );
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar1 != 0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ObjectInfoCollection::LookUpObjectName(XrSdkLogObjectInfo&) const */bool ObjectInfoCollection::LookUpObjectName(ObjectInfoCollection *this, XrSdkLogObjectInfo *param_1) {
   long lVar1;
   lVar1 = LookUpStoredObjectInfo(this, param_1);
   if (lVar1 != 0) {
      std::__cxx11::string::_M_assign((string*)( param_1 + 0x10 ));
   }

   return lVar1 != 0;
}
/* NamesAndLabels::PopulateCallbackData(XrDebugUtilsMessengerCallbackDataEXT&) const */void NamesAndLabels::PopulateCallbackData(NamesAndLabels *this, XrDebugUtilsMessengerCallbackDataEXT *param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   lVar1 = *(long*)( this + 0x20 );
   lVar3 = *(long*)( this + 0x18 );
   lVar4 = 0;
   if (lVar3 != lVar1) {
      lVar4 = lVar3;
   }

   lVar2 = *(long*)( this + 0x30 );
   *(long*)( param_1 + 0x30 ) = lVar4;
   *(int*)( param_1 + 0x28 ) = (int)( lVar1 - lVar3 >> 3 ) * -0x33333333;
   lVar1 = *(long*)( this + 0x38 );
   lVar3 = 0;
   if (lVar2 != lVar1) {
      lVar3 = lVar2;
   }

   *(long*)( param_1 + 0x40 ) = lVar3;
   *(int*)( param_1 + 0x38 ) = (int)( lVar1 - lVar2 >> 3 ) * -0x55555555;
   return;
}
/* XrSdkSessionLabel::XrSdkSessionLabel(XrDebugUtilsLabelEXT const&, bool) */char *__thiscallXrSdkSessionLabel::XrSdkSessionLabel(XrSdkSessionLabel *this, XrDebugUtilsLabelEXT *param_1, bool param_2) {
   XrSdkSessionLabel *__s;
   undefined8 uVar1;
   undefined8 uVar2;
   size_t __n;
   XrSdkSessionLabel *pXVar3;
   bool extraout_DL;
   char *pcVar4;
   long in_FS_OFFSET;
   size_t local_48;
   long local_40;
   pXVar3 = this + 0x10;
   __s = *(XrSdkSessionLabel**)( param_1 + 0x10 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(XrSdkSessionLabel**)this = pXVar3;
   if (__s == (XrSdkSessionLabel*)0x0) {
      pcVar4 = "basic_string: construction from null is not valid";
      std::__throw_logic_error("basic_string: construction from null is not valid");
      pXVar3 = (XrSdkSessionLabel*)operator_new(0x40);
      XrSdkSessionLabel(pXVar3, param_1, extraout_DL);
      *(XrSdkSessionLabel**)pcVar4 = pXVar3;
      return pcVar4;
   }

   __n = strlen((char*)__s);
   local_48 = __n;
   if (__n < 0x10) {
      if (__n == 1) {
         this[0x10] = *__s;
         goto LAB_00101041;
      }

      if (__n == 0) goto LAB_00101041;
   }
 else {
      pXVar3 = (XrSdkSessionLabel*)std::__cxx11::string::_M_create((ulong*)this, ( ulong ) & local_48);
      *(XrSdkSessionLabel**)this = pXVar3;
      *(size_t*)( this + 0x10 ) = local_48;
   }

   memcpy(pXVar3, __s, __n);
   pXVar3 = *(XrSdkSessionLabel**)this;
   LAB_00101041:*(size_t*)( this + 8 ) = local_48;
   pXVar3[local_48] = (XrSdkSessionLabel)0x0;
   uVar1 = *(undefined8*)param_1;
   uVar2 = *(undefined8*)( param_1 + 8 );
   this[0x38] = (XrSdkSessionLabel)param_2;
   *(undefined8*)( this + 0x20 ) = uVar1;
   *(undefined8*)( this + 0x28 ) = uVar2;
   *(undefined8*)( this + 0x30 ) = *(undefined8*)this;
   *(undefined8*)( this + 0x28 ) = 0;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return (char*)0x0;
}
/* XrSdkSessionLabel::make(XrDebugUtilsLabelEXT const&, bool) */XrSdkSessionLabel * __thiscall
XrSdkSessionLabel::make(XrSdkSessionLabel *this,XrDebugUtilsLabelEXT *param_1,bool param_2){
   XrSdkSessionLabel *this_00;
   this_00 = (XrSdkSessionLabel*)operator_new(0x40);
   XrSdkSessionLabel(this_00, param_1, param_2);
   *(XrSdkSessionLabel**)this = this_00;
   return this;
}
/* DebugUtilsData::RemoveIndividualLabel(std::vector<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> >, std::allocator<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> > > >&) */void DebugUtilsData::RemoveIndividualLabel(DebugUtilsData *this, vector *param_1) {
   long lVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   lVar1 = *(long*)( param_1 + 8 );
   if (*(long*)param_1 == lVar1) {
      return;
   }

   puVar2 = *(undefined8**)( lVar1 + -8 );
   if (*(char*)( puVar2 + 7 ) == '\0') {
      return;
   }

   puVar3 = (undefined8*)*puVar2;
   *(long*)( param_1 + 8 ) = lVar1 + -8;
   if (puVar3 != puVar2 + 2) {
      operator_delete(puVar3, puVar2[2] + 1);
   }

   operator_delete(puVar2, 0x40);
   return;
}
/* DebugUtilsData::GetSessionLabelList(XrSession_T*) */undefined8 * __thiscall
DebugUtilsData::GetSessionLabelList(DebugUtilsData *this,XrSession_T *param_1){
   XrSession_T *pXVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long *plVar4;
   ulong uVar5;
   if (*(long*)( this + 0x18 ) == 0) {
      plVar4 = *(long**)( this + 0x10 );
      if (plVar4 == (long*)0x0) {
         plVar4 = (undefined8*)0x0;
      }
 else {
         do {
            if ((XrSession_T*)plVar4[1] == param_1) {
               LAB_001011ce:return (undefined8*)plVar4[2];
            }

            plVar4 = (long*)*plVar4;
         }
 while ( plVar4 != (long*)0x0 );
      }

   }
 else {
      uVar5 = (ulong)param_1 % *(ulong*)( this + 8 );
      plVar4 = *(long**)( *(long*)this + uVar5 * 8 );
      if (plVar4 != (undefined8*)0x0) {
         pXVar1 = (XrSession_T*)( (undefined8*)*plVar4 )[1];
         puVar3 = (undefined8*)*plVar4;
         do {
            if (pXVar1 == param_1) {
               plVar4 = (long*)*plVar4;
               if (plVar4 == (long*)0x0) {
                  return (undefined8*)0x0;
               }

               goto LAB_001011ce;
            }

            puVar2 = (undefined8*)*puVar3;
         }
 while ( ( puVar2 != (undefined8*)0x0 ) && ( pXVar1 = (XrSession_T*)puVar2[1] ),plVar4 = puVar3,puVar3 = puVar2,uVar5 == (ulong)pXVar1 % *(ulong*)( this + 8 ) );
         plVar4 = (undefined8*)0x0;
      }

   }

   return plVar4;
}
/* DebugUtilsData::EndLabelRegion(XrSession_T*) */void DebugUtilsData::EndLabelRegion(DebugUtilsData *this, XrSession_T *param_1) {
   char cVar1;
   long lVar2;
   long *plVar3;
   undefined8 *puVar4;
   plVar3 = (long*)GetSessionLabelList(this, param_1);
   if (( plVar3 != (long*)0x0 ) && ( lVar2 = lVar2 != *plVar3 )) {
      puVar4 = *(undefined8**)( lVar2 + -8 );
      cVar1 = *(char*)( puVar4 + 7 );
      plVar3[1] = lVar2 + -8;
      if (cVar1 == '\0') {
         LAB_00101272:if ((undefined8*)*puVar4 != puVar4 + 2) {
            operator_delete((undefined8*)*puVar4, puVar4[2] + 1);
         }

         operator_delete(puVar4, 0x40);
         return;
      }

      if ((undefined8*)*puVar4 != puVar4 + 2) {
         operator_delete((undefined8*)*puVar4, puVar4[2] + 1);
      }

      operator_delete(puVar4, 0x40);
      lVar2 = plVar3[1];
      if (lVar2 != *plVar3) {
         puVar4 = *(undefined8**)( lVar2 + -8 );
         plVar3[1] = lVar2 + -8;
         if (puVar4 != (undefined8*)0x0) goto LAB_00101272;
      }

   }

   return;
}
/* DebugUtilsData::DeleteObject(unsigned long, XrObjectType) */void DebugUtilsData::DeleteObject(DebugUtilsData *this, XrSession_T *param_1, int param_3) {
   long lVar1;
   long in_FS_OFFSET;
   XrSession_T *local_38;
   int local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = param_1;
   local_30 = param_3;
   vector_remove_if_and_erase<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>,ObjectInfoCollection::RemoveObject(unsigned_long,XrObjectType)::_lambda(XrSdkLogObjectInfo_const&)_1_>((vector*)( this + 0x38 ), (_lambda_XrSdkLogObjectInfo_const___1_*)&local_38);
   if (param_3 == 2) {
      lVar1 = GetSessionLabelList(this, param_1);
      if (lVar1 != 0) {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            std::_Hashtable<XrSession_T*,std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr < XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>,std::allocator<std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>> > std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> > ::_M_erase(this);
            return;
         }

         goto LAB_00101390;
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00101390:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* DebugUtilsData::DeleteSessionLabels(XrSession_T*) */void DebugUtilsData::DeleteSessionLabels(XrSession_T *param_1) {
   std::_Hashtable<XrSession_T*,std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr < XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>,std::allocator<std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>> > std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> > ::_M_erase();
   return;
}
/* ObjectInfoCollection::AddObjectName(unsigned long, XrObjectType, std::__cxx11::string const&) */void ObjectInfoCollection::AddObjectName(ObjectInfoCollection *this, undefined8 param_1, undefined4 param_3, long param_4) {
   undefined8 *puVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined4 local_60;
   undefined8 local_58;
   undefined4 local_50;
   undefined1 *local_48;
   long local_40;
   undefined1 local_38;
   undefined7 uStack_37;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( param_4 + 8 ) == 0) {
      local_68 = param_1;
      local_60 = param_3;
      vector_remove_if_and_erase<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>,ObjectInfoCollection::RemoveObject(unsigned_long,XrObjectType)::_lambda(XrSdkLogObjectInfo_const&)_1_>((vector*)this, (_lambda_XrSdkLogObjectInfo_const___1_*)&local_68);
   }
 else {
      local_40 = 0;
      local_38 = 0;
      local_58 = param_1;
      local_50 = param_3;
      local_48 = &local_38;
      lVar2 = LookUpStoredObjectInfo(this, (XrSdkLogObjectInfo*)&local_58);
      if (lVar2 == 0) {
         std::__cxx11::string::_M_assign((string*)&local_48);
         puVar1 = *(undefined8**)( this + 8 );
         if (puVar1 == *(undefined8**)( this + 0x10 )) {
            std::vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>>::_M_realloc_insert<XrSdkLogObjectInfo_const&>((vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>>*)this, puVar1, (XrSdkLogObjectInfo*)&local_58);
         }
 else {
            *puVar1 = local_58;
            *(undefined4*)( puVar1 + 1 ) = local_50;
            puVar1[2] = puVar1 + 4;
            std::__cxx11::string::_M_construct<char*>(puVar1 + 2, local_48, local_48 + local_40);
            *(long*)( this + 8 ) = *(long*)( this + 8 ) + 0x30;
         }

      }
 else {
         std::__cxx11::string::_M_assign((string*)( lVar2 + 0x10 ));
      }

      if (local_48 != &local_38) {
         operator_delete(local_48, CONCAT71(uStack_37, local_38) + 1);
      }

   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* DebugUtilsData::AddObjectName(unsigned long, XrObjectType, std::__cxx11::string const&) */void DebugUtilsData::AddObjectName(long param_1) {
   ObjectInfoCollection::AddObjectName((ObjectInfoCollection*)( param_1 + 0x38 ));
   return;
}
/* DebugUtilsData::GetOrCreateSessionLabelList(XrSession_T*) */undefined1 (*) [16] __thiscallDebugUtilsData::GetOrCreateSessionLabelList(DebugUtilsData *this, XrSession_T *param_1) {
   long *plVar1;
   undefined8 *puVar2;
   undefined1(*pauVar3)[16];
   undefined8 *puVar4;
   undefined8 *puVar5;
   XrSession_T *local_30;
   local_30 = param_1;
   pauVar3 = (undefined1(*) [16])GetSessionLabelList(this, param_1);
   if (pauVar3 == (undefined1(*) [16])0x0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18);
      *(undefined8*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
      puVar4 = (undefined8*)std::__detail::_Map_base<XrSession_T*,std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr < XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>,std::allocator<std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>> > std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true > ::operator [](( _Map_base<XrSession_T*,std::pair<XrSession_T*const,std::unique_ptr < std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>> >> std::allocator<std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>>> >> std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true > *)this,&local_30 ));
      plVar1 = (long*)*puVar4;
      *puVar4 = pauVar3;
      if (plVar1 != (long*)0x0) {
         puVar4 = (undefined8*)plVar1[1];
         puVar5 = (undefined8*)*plVar1;
         if (puVar4 != puVar5) {
            do {
               puVar2 = (undefined8*)*puVar5;
               if (puVar2 != (undefined8*)0x0) {
                  if ((undefined8*)*puVar2 != puVar2 + 2) {
                     operator_delete((undefined8*)*puVar2, puVar2[2] + 1);
                  }

                  operator_delete(puVar2, 0x40);
               }

               puVar5 = puVar5 + 1;
            }
 while ( puVar4 != puVar5 );
            puVar5 = (undefined8*)*plVar1;
         }

         if (puVar5 != (undefined8*)0x0) {
            operator_delete(puVar5, plVar1[2] - (long)puVar5);
         }

         operator_delete(plVar1, 0x18);
      }

   }

   return pauVar3;
}
/* DebugUtilsData::InsertLabel(XrSession_T*, XrDebugUtilsLabelEXT const&) */void DebugUtilsData::InsertLabel(DebugUtilsData *this, XrSession_T *param_1, XrDebugUtilsLabelEXT *param_2) {
   long lVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>> *pvVar4;
   XrSdkSessionLabel *pXVar5;
   long in_FS_OFFSET;
   XrSdkSessionLabel *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pvVar4 = (vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>*)GetOrCreateSessionLabelList(this, param_1);
   lVar1 = *(long*)( pvVar4 + 8 );
   if (( lVar1 != *(long*)pvVar4 ) && ( puVar2 = *(undefined8**)( lVar1 + -8 ) * (char*)( puVar2 + 7 ) != '\0' )) {
      puVar3 = (undefined8*)*puVar2;
      *(long*)( pvVar4 + 8 ) = lVar1 + -8;
      if (puVar3 != puVar2 + 2) {
         operator_delete(puVar3, puVar2[2] + 1);
      }

      operator_delete(puVar2, 0x40);
   }

   pXVar5 = (XrSdkSessionLabel*)operator_new(0x40);
   XrSdkSessionLabel::XrSdkSessionLabel(pXVar5, param_2, true);
   puVar2 = *(undefined8**)( pvVar4 + 8 );
   local_28 = pXVar5;
   if (puVar2 == *(undefined8**)( pvVar4 + 0x10 )) {
      std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>::_M_realloc_insert<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>(pvVar4, puVar2, &local_28);
      pXVar5 = local_28;
      if (local_28 != (XrSdkSessionLabel*)0x0) {
         if (*(XrSdkSessionLabel**)local_28 != local_28 + 0x10) {
            operator_delete(*(XrSdkSessionLabel**)local_28, *(long*)( local_28 + 0x10 ) + 1);
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            operator_delete(pXVar5, 0x40);
            return;
         }

         goto LAB_00101714;
      }

   }
 else {
      *puVar2 = pXVar5;
      *(undefined8**)( pvVar4 + 8 ) = puVar2 + 1;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00101714:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* DebugUtilsData::BeginLabelRegion(XrSession_T*, XrDebugUtilsLabelEXT const&) */void DebugUtilsData::BeginLabelRegion(DebugUtilsData *this, XrSession_T *param_1, XrDebugUtilsLabelEXT *param_2) {
   long lVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>> *pvVar4;
   XrSdkSessionLabel *pXVar5;
   long in_FS_OFFSET;
   XrSdkSessionLabel *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pvVar4 = (vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>*)GetOrCreateSessionLabelList(this, param_1);
   lVar1 = *(long*)( pvVar4 + 8 );
   if (( lVar1 != *(long*)pvVar4 ) && ( puVar2 = *(undefined8**)( lVar1 + -8 ) * (char*)( puVar2 + 7 ) != '\0' )) {
      puVar3 = (undefined8*)*puVar2;
      *(long*)( pvVar4 + 8 ) = lVar1 + -8;
      if (puVar3 != puVar2 + 2) {
         operator_delete(puVar3, puVar2[2] + 1);
      }

      operator_delete(puVar2, 0x40);
   }

   pXVar5 = (XrSdkSessionLabel*)operator_new(0x40);
   XrSdkSessionLabel::XrSdkSessionLabel(pXVar5, param_2, false);
   puVar2 = *(undefined8**)( pvVar4 + 8 );
   local_28 = pXVar5;
   if (puVar2 == *(undefined8**)( pvVar4 + 0x10 )) {
      std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>::_M_realloc_insert<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>(pvVar4, puVar2, &local_28);
      pXVar5 = local_28;
      if (local_28 != (XrSdkSessionLabel*)0x0) {
         if (*(XrSdkSessionLabel**)local_28 != local_28 + 0x10) {
            operator_delete(*(XrSdkSessionLabel**)local_28, *(long*)( local_28 + 0x10 ) + 1);
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            operator_delete(pXVar5, 0x40);
            return;
         }

         goto LAB_0010183c;
      }

   }
 else {
      *puVar2 = pXVar5;
      *(undefined8**)( pvVar4 + 8 ) = puVar2 + 1;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010183c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* NamesAndLabels::NamesAndLabels(std::vector<XrSdkLogObjectInfo, std::allocator<XrSdkLogObjectInfo>
   >, std::vector<XrDebugUtilsLabelEXT, std::allocator<XrDebugUtilsLabelEXT> >) */void NamesAndLabels::NamesAndLabels(NamesAndLabels *this, undefined1 (*param_2)[16], undefined1 (*param_3)[16]) {
   ulong uVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   void *__src;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   void *__dest;
   undefined8 *puVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long in_FS_OFFSET;
   undefined4 local_68;
   undefined4 uStack_64;
   undefined8 uStack_60;
   undefined4 local_58;
   undefined4 uStack_54;
   undefined8 uStack_50;
   undefined8 local_48;
   long local_40;
   uVar4 = *(undefined8*)( *param_2 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = *(undefined8*)param_2[1];
   *param_2 = (undefined1[16])0x0;
   *(undefined8*)this = *(undefined8*)*param_2;
   *(undefined8*)( this + 8 ) = uVar4;
   puVar9 = *(undefined8**)( this + 8 );
   puVar7 = *(undefined8**)this;
   *(undefined8*)( this + 0x10 ) = uVar2;
   *(undefined8*)param_2[1] = 0;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
   lVar6 = (long)puVar9 - (long)puVar7;
   if (lVar6 < 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::reserve");
   }

   if (lVar6 == 0) goto LAB_001018bf;
   uVar1 = ( lVar6 >> 4 ) * -0x5555555555555548;
   __dest = operator_new(uVar1);
   __src = *(void**)( this + 0x18 );
   if (*(long*)( this + 0x20 ) - (long)__src < 1) {
      if (__src != (void*)0x0) {
         uVar8 = *(long*)( this + 0x28 ) - (long)__src;
         goto LAB_00101a03;
      }

   }
 else {
      memmove(__dest, __src, *(long*)( this + 0x20 ) - (long)__src);
      uVar8 = *(long*)( this + 0x28 ) - (long)__src;
      LAB_00101a03:operator_delete(__src, uVar8);
   }

   puVar9 = *(undefined8**)( this + 8 );
   puVar7 = *(undefined8**)this;
   *(void**)( this + 0x18 ) = __dest;
   *(void**)( this + 0x20 ) = __dest;
   *(void**)( this + 0x28 ) = (void*)( (long)__dest + uVar1 );
   LAB_001018bf:for (; puVar9 != puVar7; puVar7 = puVar7 + 6) {
      while (true) {
         local_58 = *(undefined4*)( puVar7 + 1 );
         puVar3 = *(undefined8**)( this + 0x20 );
         local_68 = 0x3b9b1438;
         uStack_60 = 0;
         uStack_50 = *puVar7;
         local_48 = puVar7[2];
         if (puVar3 != *(undefined8**)( this + 0x28 )) break;
         puVar7 = puVar7 + 6;
         std::vector<XrDebugUtilsObjectNameInfoEXT,std::allocator<XrDebugUtilsObjectNameInfoEXT>>::_M_realloc_insert<XrDebugUtilsObjectNameInfoEXT>((vector<XrDebugUtilsObjectNameInfoEXT,std::allocator<XrDebugUtilsObjectNameInfoEXT>>*)( this + 0x18 ), puVar3, &local_68);
         if (puVar9 == puVar7) goto LAB_00101940;
      }
;
      puVar3[4] = local_48;
      *puVar3 = CONCAT44(uStack_64, 0x3b9b1438);
      puVar3[1] = 0;
      puVar3[2] = CONCAT44(uStack_54, local_58);
      puVar3[3] = uStack_50;
      *(undefined8**)( this + 0x20 ) = puVar3 + 5;
   }

   LAB_00101940:uVar2 = *(undefined8*)param_3[1];
   uVar4 = *(undefined8*)*param_3;
   uVar5 = *(undefined8*)( *param_3 + 8 );
   *(undefined8*)param_3[1] = 0;
   *param_3 = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = uVar2;
   *(undefined8*)( this + 0x30 ) = uVar4;
   *(undefined8*)( this + 0x38 ) = uVar5;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebugUtilsData::LookUpSessionLabels(XrSession_T*, std::vector<XrDebugUtilsLabelEXT,
   std::allocator<XrDebugUtilsLabelEXT> >&) const */void DebugUtilsData::LookUpSessionLabels(DebugUtilsData *this, XrSession_T *param_1, vector *param_2) {
   long lVar1;
   long lVar2;
   XrSession_T *pXVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   ulong uVar7;
   long lVar8;
   long in_FS_OFFSET;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x18 ) == 0) {
      for (puVar6 = *(undefined8**)( this + 0x10 ); puVar6 != (undefined8*)0x0; puVar6 = (undefined8*)*puVar6) {
         if ((XrSession_T*)puVar6[1] == param_1) goto LAB_00101a7e;
      }

   }
 else {
      uVar7 = (ulong)param_1 % *(ulong*)( this + 8 );
      puVar6 = *(undefined8**)( *(long*)this + uVar7 * 8 );
      if (puVar6 != (undefined8*)0x0) {
         pXVar3 = (XrSession_T*)( (undefined8*)*puVar6 )[1];
         puVar5 = (undefined8*)*puVar6;
         while (pXVar3 != param_1) {
            puVar4 = (undefined8*)*puVar5;
            if (( puVar4 == (undefined8*)0x0 ) || ( pXVar3 = (XrSession_T*)puVar4[1] ),puVar6 = puVar5,puVar5 = puVar4,uVar7 != (ulong)pXVar3 % *(ulong*)( this + 8 )) goto LAB_00101a98;
         }
;
         puVar6 = (undefined8*)*puVar6;
         if (puVar6 != (undefined8*)0x0) goto LAB_00101a7e;
      }

   }

   LAB_00101a98:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   LAB_00101a7e:lVar1 = *(long*)puVar6[2];
   for (lVar8 = ( (long*)puVar6[2] )[1]; lVar8 != lVar1; lVar8 = lVar8 + -8) {
      lVar2 = *(long*)( lVar8 + -8 );
      puVar6 = *(undefined8**)( param_2 + 8 );
      local_48 = *(undefined8*)( lVar2 + 0x20 );
      uStack_40 = *(undefined8*)( lVar2 + 0x28 );
      local_38 = *(undefined8*)( lVar2 + 0x30 );
      if (puVar6 == *(undefined8**)( param_2 + 0x10 )) {
         std::vector<XrDebugUtilsLabelEXT,std::allocator<XrDebugUtilsLabelEXT>>::_M_realloc_insert<XrDebugUtilsLabelEXT>((vector<XrDebugUtilsLabelEXT,std::allocator<XrDebugUtilsLabelEXT>>*)param_2, puVar6, &local_48);
      }
 else {
         puVar6[2] = local_38;
         *puVar6 = local_48;
         puVar6[1] = uStack_40;
         *(undefined8**)( param_2 + 8 ) = puVar6 + 3;
      }

   }

   goto LAB_00101a98;
}
/* DebugUtilsData::WrapCallbackData(AugmentedCallbackData*, XrDebugUtilsMessengerCallbackDataEXT
   const*) const */void DebugUtilsData::WrapCallbackData(DebugUtilsData *this, AugmentedCallbackData *param_1, XrDebugUtilsMessengerCallbackDataEXT *param_2) {
   undefined8 *__src;
   ulong __n;
   void *pvVar1;
   undefined8 uVar2;
   bool bVar3;
   long lVar4;
   ulong uVar5;
   undefined8 *puVar6;
   long lVar7;
   int iVar8;
   XrSession_T *pXVar9;
   undefined8 *puVar10;
   ulong __n_00;
   size_t __n_01;
   undefined8 *puVar11;
   long in_FS_OFFSET;
   XrSession_T *local_78;
   int local_70;
   undefined8 local_60;
   undefined1 local_58;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(XrDebugUtilsMessengerCallbackDataEXT**)( param_1 + 0x78 ) = param_2;
   if (( *(long*)( this + 0x38 ) == *(long*)( this + 0x40 ) ) || ( *(int*)( param_2 + 0x28 ) == 0 )) goto LAB_00101d88;
   lVar7 = 0;
   bVar3 = false;
   do {
      while (true) {
         local_60 = 0;
         lVar4 = *(long*)( param_2 + 0x30 ) + lVar7 * 0x28;
         local_58 = 0;
         iVar8 = *(int*)( lVar4 + 0x10 );
         pXVar9 = *(XrSession_T**)( lVar4 + 0x18 );
         local_78 = pXVar9;
         local_70 = iVar8;
         lVar4 = ObjectInfoCollection::LookUpStoredObjectInfo((ObjectInfoCollection*)( this + 0x38 ), (XrSdkLogObjectInfo*)&local_78);
         bVar3 = (bool)( bVar3 | lVar4 != 0 );
         if (iVar8 != 2) break;
         lVar7 = lVar7 + 1;
         LookUpSessionLabels(this, pXVar9, (vector*)param_1);
         if (*(uint*)( param_2 + 0x28 ) <= (uint)lVar7) goto LAB_00101c4a;
      }
;
      lVar7 = lVar7 + 1;
   }
 while ( (uint)lVar7 < *(uint*)( param_2 + 0x28 ) );
   LAB_00101c4a:if (( !bVar3 ) && ( *(long*)param_1 == *(long*)( param_1 + 8 ) )) goto LAB_00101d88;
   uVar2 = *(undefined8*)( param_2 + 8 );
   *(undefined8*)( param_1 + 0x30 ) = *(undefined8*)param_2;
   *(undefined8*)( param_1 + 0x38 ) = uVar2;
   for (int i = 0; i < 3; i++) {
      uVar2 = *(undefined8*)( param_2 + ( 16*i + 24 ) );
      *(undefined8*)( param_1 + ( 16*i + 64 ) ) = *(undefined8*)( param_2 + ( 16*i + 16 ) );
      *(undefined8*)( param_1 + ( 16*i + 72 ) ) = uVar2;
   }

   *(undefined8*)( param_1 + 0x70 ) = *(undefined8*)( param_2 + 0x40 );
   uVar5 = ( ulong ) * (uint*)( param_2 + 0x28 );
   puVar11 = *(undefined8**)( param_1 + 0x18 );
   puVar10 = *(undefined8**)( param_2 + 0x30 );
   __n = uVar5 * 0x28;
   if (( ulong )(*(long*)( param_1 + 0x28 ) - (long)puVar11) < __n) {
      puVar6 = (undefined8*)operator_new(__n);
      if (__n == 0x28) {
         uVar2 = puVar10[1];
         *puVar6 = *puVar10;
         puVar6[1] = uVar2;
         uVar2 = puVar10[3];
         puVar6[2] = puVar10[2];
         puVar6[3] = uVar2;
         puVar6[4] = puVar10[4];
      }
 else {
         memmove(puVar6, puVar10, __n);
      }

      pvVar1 = *(void**)( param_1 + 0x18 );
      if (pvVar1 != (void*)0x0) {
         operator_delete(pvVar1, *(long*)( param_1 + 0x28 ) - (long)pvVar1);
      }

      puVar11 = puVar6 + uVar5 * 5;
      *(undefined8**)( param_1 + 0x18 ) = puVar6;
      *(undefined8**)( param_1 + 0x20 ) = puVar11;
      *(undefined8**)( param_1 + 0x28 ) = puVar11;
      puVar10 = puVar6;
   }
 else {
      puVar6 = *(undefined8**)( param_1 + 0x20 );
      __n_00 = (long)puVar6 - (long)puVar11;
      if (__n_00 < __n) {
         __src = (undefined8*)( (long)puVar10 + __n_00 );
         if ((long)__n_00 < 0x29) {
            if (__n_00 == 0x28) {
               uVar2 = puVar10[1];
               *puVar11 = *puVar10;
               puVar11[1] = uVar2;
               uVar2 = puVar10[3];
               puVar11[2] = puVar10[2];
               puVar11[3] = uVar2;
               puVar11[4] = puVar10[4];
            }

         }
 else {
            memmove(puVar11, puVar10, __n_00);
            puVar6 = *(undefined8**)( param_1 + 0x20 );
         }

         __n_01 = __n - __n_00;
         if ((long)__n_01 < 0x29) {
            if (__n_01 == 0x28) {
               uVar2 = __src[1];
               *puVar6 = *__src;
               puVar6[1] = uVar2;
               uVar2 = __src[3];
               puVar6[2] = __src[2];
               puVar6[3] = uVar2;
               puVar6[4] = __src[4];
            }

         }
 else {
            puVar6 = (undefined8*)memmove(puVar6, __src, __n_01);
         }

         puVar11 = (undefined8*)( __n_01 + (long)puVar6 );
         LAB_00101e00:*(undefined8**)( param_1 + 0x20 ) = puVar11;
      }
 else {
         if (__n < 0x29) {
            if (__n == 0x28) {
               uVar2 = puVar10[1];
               *puVar11 = *puVar10;
               puVar11[1] = uVar2;
               uVar2 = puVar10[3];
               puVar11[2] = puVar10[2];
               puVar11[3] = uVar2;
               puVar11[4] = puVar10[4];
            }

         }
 else {
            puVar11 = (undefined8*)memmove(puVar11, puVar10, __n);
            puVar6 = *(undefined8**)( param_1 + 0x20 );
         }

         puVar11 = puVar11 + uVar5 * 5;
         if (puVar6 != puVar11) goto LAB_00101e00;
      }

      puVar6 = *(undefined8**)( param_1 + 0x18 );
      puVar10 = puVar6;
   }

   for (; puVar11 != puVar6; puVar6 = puVar6 + 5) {
      local_70 = *(int*)( puVar6 + 2 );
      local_78 = (XrSession_T*)puVar6[3];
      local_60 = 0;
      local_58 = 0;
      lVar7 = ObjectInfoCollection::LookUpStoredObjectInfo((ObjectInfoCollection*)( this + 0x38 ), (XrSdkLogObjectInfo*)&local_78);
      if (lVar7 != 0) {
         puVar6[4] = *(undefined8*)( lVar7 + 0x10 );
      }

   }

   lVar7 = *(long*)param_1;
   *(undefined8**)( param_1 + 0x60 ) = puVar10;
   *(AugmentedCallbackData**)( param_1 + 0x78 ) = param_1 + 0x30;
   *(int*)( param_1 + 0x68 ) = (int)( *(long*)( param_1 + 8 ) - lVar7 >> 3 ) * -0x55555555;
   if (*(long*)( param_1 + 8 ) == lVar7) {
      lVar7 = 0;
   }

   *(long*)( param_1 + 0x70 ) = lVar7;
   LAB_00101d88:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebugUtilsData::PopulateNamesAndLabels(std::vector<XrSdkLogObjectInfo,
   std::allocator<XrSdkLogObjectInfo> >) const */NamesAndLabels *DebugUtilsData::PopulateNamesAndLabels(NamesAndLabels *param_1, DebugUtilsData *param_2, long *param_3) {
   XrSdkLogObjectInfo *pXVar1;
   XrSession_T *pXVar2;
   undefined8 uVar3;
   undefined8 __src;
   undefined8 *puVar4;
   undefined8 *puVar5;
   long lVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   XrSdkLogObjectInfo *pXVar9;
   ulong uVar10;
   long in_FS_OFFSET;
   undefined8 *puVar11;
   undefined1 local_98[16];
   long local_88;
   undefined8 *local_78;
   undefined8 *puStack_70;
   long local_68;
   undefined8 *local_58;
   undefined1 local_50[16];
   long local_40;
   puVar11 = (undefined8*)0x0;
   pXVar9 = (XrSdkLogObjectInfo*)*param_3;
   pXVar1 = (XrSdkLogObjectInfo*)param_3[1];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = (undefined1[16])0x0;
   local_88 = 0;
   if (pXVar1 == pXVar9) goto LAB_00102148;
   do {
      while (true) {
         lVar6 = ObjectInfoCollection::LookUpStoredObjectInfo((ObjectInfoCollection*)( param_2 + 0x38 ), pXVar9);
         if (lVar6 != 0) {
            std::__cxx11::string::_M_assign((string*)( pXVar9 + 0x10 ));
         }

         if (*(int*)( pXVar9 + 8 ) != 2) break;
         pXVar2 = *(XrSession_T**)pXVar9;
         pXVar9 = pXVar9 + 0x30;
         LookUpSessionLabels(param_2, pXVar2, (vector*)local_98);
         if (pXVar1 == pXVar9) goto LAB_00101f66;
      }
;
      pXVar9 = pXVar9 + 0x30;
   }
 while ( pXVar1 != pXVar9 );
   LAB_00101f66:puVar11 = (undefined8*)param_3[1];
   puVar7 = (undefined8*)*param_3;
   uVar10 = (long)puVar11 - (long)puVar7;
   if (uVar10 == 0) {
      uVar10 = 0;
      local_78 = (undefined8*)0x0;
   }
 else {
      if (0x7fffffffffffffe0 < uVar10) goto LAB_00102140;
      local_78 = (undefined8*)operator_new(uVar10);
      puVar11 = (undefined8*)param_3[1];
      puVar7 = (undefined8*)*param_3;
   }

   local_68 = uVar10 + (long)local_78;
   puVar8 = local_78;
   puStack_70 = local_78;
   for (; puVar11 != puVar7; puVar7 = puVar7 + 6) {
      *puVar8 = *puVar7;
      lVar6 = puVar7[3];
      *(undefined4*)( puVar8 + 1 ) = *(undefined4*)( puVar7 + 1 );
      puVar8[2] = puVar8 + 4;
      std::__cxx11::string::_M_construct<char*>(puVar8 + 2, puVar7[2], lVar6 + puVar7[2]);
      puVar8 = puVar8 + 6;
   }

   do {
      __src = local_98._0_8_;
      local_50 = (undefined1[16])0x0;
      uVar10 = local_98._8_8_ - local_98._0_8_;
      puStack_70 = puVar8;
      if (uVar10 == 0) {
         local_58 = (undefined8*)0x0;
         lVar6 = 0;
         local_50._8_8_ = 0;
         LAB_00102058:local_50._0_8_ = lVar6;
         NamesAndLabels::NamesAndLabels(param_1, &local_78, &local_58);
         puVar11 = local_78;
         puVar7 = local_78;
         puVar8 = puStack_70;
         if (local_58 != (undefined8*)0x0) {
            operator_delete(local_58, local_50._8_8_ - (long)local_58);
            puVar11 = local_78;
            puVar7 = local_78;
            puVar8 = puStack_70;
         }

         for (; puVar5 = puStack_70,puVar4 = local_78,puStack_70 != puVar11; puVar11 = puVar11 + 6) {
            local_78 = puVar7;
            puStack_70 = puVar8;
            if ((undefined8*)puVar11[2] != puVar11 + 4) {
               operator_delete((undefined8*)puVar11[2], puVar11[4] + 1);
            }

            puVar7 = local_78;
            puVar8 = puStack_70;
            puStack_70 = puVar5;
            local_78 = puVar4;
         }

         puStack_70 = puVar8;
         if (local_78 != (undefined8*)0x0) {
            uVar10 = local_68 - (long)local_78;
            local_78 = puVar7;
            operator_delete(puVar4, uVar10);
            puVar7 = local_78;
         }

         local_78 = puVar7;
         if ((undefined8*)__src != (undefined8*)0x0) {
            operator_delete((void*)__src, local_88 - __src);
         }

         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return param_1;
      }

      if (uVar10 < 0x7ffffffffffffff9) {
         local_58 = (undefined8*)operator_new(uVar10);
         lVar6 = (long)local_58 + uVar10;
         local_50._8_8_ = lVar6;
         if ((long)uVar10 < 0x19) {
            if (uVar10 == 0x18) {
               uVar3 = *(undefined8*)( __src + 8 );
               *local_58 = *(undefined8*)__src;
               local_58[1] = uVar3;
               local_58[2] = *(undefined8*)( __src + 0x10 );
            }

         }
 else {
            memmove(local_58, (void*)__src, uVar10);
         }

         goto LAB_00102058;
      }

      LAB_00102140:puVar11 = (undefined8*)std::__throw_bad_array_new_length();
      LAB_00102148:local_68 = 0;
      puVar8 = (undefined8*)0x0;
      local_78 = puVar11;
   }
 while ( true );
}
/* void std::vector<XrSdkLogObjectInfo, std::allocator<XrSdkLogObjectInfo>
   >::_M_realloc_insert<XrSdkLogObjectInfo const&>(__gnu_cxx::__normal_iterator<XrSdkLogObjectInfo*,
   std::vector<XrSdkLogObjectInfo, std::allocator<XrSdkLogObjectInfo> > >, XrSdkLogObjectInfo
   const&) */void std::vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>>::_M_realloc_insert<XrSdkLogObjectInfo_const&>(vector<XrSdkLogObjectInfo,std::allocator<XrSdkLogObjectInfo>> *this, undefined8 *param_2, undefined8 *param_3) {
   undefined4 uVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   undefined8 *puVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   undefined8 *puVar10;
   undefined8 *puVar11;
   undefined8 *puVar12;
   uint uVar13;
   long lVar14;
   ulong uVar15;
   uint uVar16;
   long local_50;
   puVar2 = *(undefined8**)( this + 8 );
   puVar3 = *(undefined8**)this;
   lVar7 = (long)puVar2 - (long)puVar3 >> 4;
   uVar8 = lVar7 * -0x5555555555555555;
   if (uVar8 == 0x2aaaaaaaaaaaaaa) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   if (puVar3 == puVar2) {
      uVar15 = uVar8 + 1;
      if (0xfffffffffffffffe < uVar8) goto LAB_00102350;
      if (0x2aaaaaaaaaaaaaa < uVar15) {
         uVar15 = 0x2aaaaaaaaaaaaaa;
      }

      uVar15 = uVar15 * 0x30;
   }
 else {
      uVar15 = lVar7 * 0x5555555555555556;
      if (uVar15 < uVar8) {
         LAB_00102350:uVar15 = 0x7fffffffffffffe0;
      }
 else {
         if (uVar15 == 0) {
            local_50 = 0;
            puVar12 = (undefined8*)0x30;
            puVar9 = (undefined8*)0x0;
            goto LAB_00102280;
         }

         if (0x2aaaaaaaaaaaaaa < uVar15) {
            uVar15 = 0x2aaaaaaaaaaaaaa;
         }

         uVar15 = uVar15 * 0x30;
      }

   }

   puVar9 = (undefined8*)operator_new(uVar15);
   local_50 = (long)puVar9 + uVar15;
   puVar12 = puVar9 + 6;
   LAB_00102280:puVar10 = (undefined8*)( (long)puVar9 + ( (long)param_2 - (long)puVar3 ) );
   lVar7 = param_3[2];
   *puVar10 = *param_3;
   *(undefined4*)( puVar10 + 1 ) = *(undefined4*)( param_3 + 1 );
   puVar10[2] = puVar10 + 4;
   __cxx11::string::_M_construct<char*>(puVar10 + 2, lVar7, param_3[3] + lVar7);
   puVar10 = puVar3;
   puVar11 = puVar9;
   if (param_2 != puVar3) {
      do {
         puVar12 = puVar11 + 4;
         *puVar11 = *puVar10;
         uVar1 = *(undefined4*)( puVar10 + 1 );
         puVar11[2] = puVar12;
         *(undefined4*)( puVar11 + 1 ) = uVar1;
         puVar4 = (undefined8*)puVar10[2];
         if (puVar4 == puVar10 + 4) {
            lVar7 = puVar10[3];
            uVar8 = lVar7 + 1;
            uVar16 = (uint)uVar8;
            if (7 < uVar16) {
               *puVar12 = *puVar4;
               *(undefined8*)( (long)puVar11 + ( uVar8 & 0xffffffff ) + 0x18 ) = *(undefined8*)( (long)puVar4 + ( ( uVar8 & 0xffffffff ) - 8 ) );
               lVar7 = (long)puVar12 - ( ( ulong )(puVar11 + 5) & 0xfffffffffffffff8 );
               uVar16 = uVar16 + (int)lVar7 & 0xfffffff8;
               if (7 < uVar16) {
                  uVar13 = 0;
                  do {
                     uVar8 = (ulong)uVar13;
                     uVar13 = uVar13 + 8;
                     *(undefined8*)( ( ( ulong )(puVar11 + 5) & 0xfffffffffffffff8 ) + uVar8 ) = *(undefined8*)( (long)puVar4 + ( uVar8 - lVar7 ) );
                  }
 while ( uVar13 < uVar16 );
               }

               goto LAB_001022cc;
            }

            if (( uVar8 & 4 ) == 0) {
               if (uVar16 != 0) {
                  *(undefined1*)puVar12 = *(undefined1*)puVar4;
                  if (( uVar8 & 2 ) == 0) goto LAB_001022cc;
                  *(undefined2*)( (long)puVar11 + ( uVar8 & 0xffffffff ) + 0x1e ) = *(undefined2*)( (long)puVar4 + ( ( uVar8 & 0xffffffff ) - 2 ) );
                  lVar7 = puVar10[3];
               }

            }
 else {
               *(undefined4*)puVar12 = *(undefined4*)puVar4;
               *(undefined4*)( (long)puVar11 + ( uVar8 & 0xffffffff ) + 0x1c ) = *(undefined4*)( (long)puVar4 + ( ( uVar8 & 0xffffffff ) - 4 ) );
               lVar7 = puVar10[3];
            }

         }
 else {
            puVar11[2] = puVar4;
            puVar11[4] = puVar10[4];
            LAB_001022cc:lVar7 = puVar10[3];
         }

         puVar10 = puVar10 + 6;
         puVar11[3] = lVar7;
         puVar11 = puVar11 + 6;
      }
 while ( puVar10 != param_2 );
      puVar12 = (undefined8*)( (long)puVar9 + ( (long)param_2 + ( -0x30 - (long)puVar3 ) & 0xfffffffffffffff0U ) + 0x60 );
   }

   puVar10 = param_2;
   puVar11 = puVar12;
   if (param_2 != puVar2) {
      do {
         uVar5 = *puVar10;
         puVar4 = puVar11 + 4;
         lVar7 = puVar10[3];
         puVar11[2] = puVar4;
         *puVar11 = uVar5;
         *(undefined4*)( puVar11 + 1 ) = *(undefined4*)( puVar10 + 1 );
         puVar6 = (undefined8*)puVar10[2];
         if (puVar6 == puVar10 + 4) {
            uVar8 = lVar7 + 1;
            uVar16 = (uint)uVar8;
            if (uVar16 < 8) {
               if (( uVar8 & 4 ) == 0) {
                  if (( uVar16 != 0 ) && ( *(undefined1*)puVar4 = *(undefined1*)puVar6(uVar8 & 2) != 0 )) {
                     *(undefined2*)( (long)puVar11 + ( uVar8 & 0xffffffff ) + 0x1e ) = *(undefined2*)( (long)puVar6 + ( ( uVar8 & 0xffffffff ) - 2 ) );
                  }

               }
 else {
                  *(undefined4*)puVar4 = *(undefined4*)puVar6;
                  *(undefined4*)( (long)puVar11 + ( uVar8 & 0xffffffff ) + 0x1c ) = *(undefined4*)( (long)puVar6 + ( ( uVar8 & 0xffffffff ) - 4 ) );
               }

            }
 else {
               *puVar4 = *puVar6;
               *(undefined8*)( (long)puVar11 + ( uVar8 & 0xffffffff ) + 0x18 ) = *(undefined8*)( (long)puVar6 + ( ( uVar8 & 0xffffffff ) - 8 ) );
               lVar14 = (long)puVar4 - ( ( ulong )(puVar11 + 5) & 0xfffffffffffffff8 );
               uVar16 = uVar16 + (int)lVar14 & 0xfffffff8;
               if (7 < uVar16) {
                  uVar13 = 0;
                  do {
                     uVar8 = (ulong)uVar13;
                     uVar13 = uVar13 + 8;
                     *(undefined8*)( ( ( ulong )(puVar11 + 5) & 0xfffffffffffffff8 ) + uVar8 ) = *(undefined8*)( (long)puVar6 + ( uVar8 - lVar14 ) );
                  }
 while ( uVar13 < uVar16 );
               }

            }

         }
 else {
            puVar11[2] = puVar6;
            puVar11[4] = puVar10[4];
         }

         puVar10 = puVar10 + 6;
         puVar11[3] = lVar7;
         puVar11 = puVar11 + 6;
      }
 while ( puVar10 != puVar2 );
      puVar12 = puVar12 + ( ( ( ( ulong )((long)puVar10 + ( -0x30 - (long)param_2 )) >> 4 ) * 0xaaaaaaaaaaaaaab & 0xfffffffffffffff ) * 3 + 3 ) * 2;
   }

   if (puVar3 != (undefined8*)0x0) {
      operator_delete(puVar3, *(long*)( this + 0x10 ) - (long)puVar3);
   }

   *(undefined8**)this = puVar9;
   *(undefined8**)( this + 8 ) = puVar12;
   *(long*)( this + 0x10 ) = local_50;
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* std::__detail::_Map_base<XrSession_T*, std::pair<XrSession_T* const,
   std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> >, std::allocator<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> > > >,
   std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> >, std::allocator<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> > > > > > >, std::allocator<std::pair<XrSession_T* const,
   std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> >, std::allocator<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> > > >,
   std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> >, std::allocator<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> > > > > > > >, std::__detail::_Select1st,
   std::equal_to<XrSession_T*>, std::hash<XrSession_T*>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true>, true>::operator[](XrSession_T* const&) */long *__thiscallstd::__detail::_Map_base<XrSession_T*,std::pair<XrSession_T*const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator < std::unique_ptr < XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>{
   XrSession_T *pXVar1;
   XrSession_T *pXVar2;
   ulong uVar3;
   long lVar4;
   char cVar5;
   long *plVar6;
   _Map_base<XrSession_T*,std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr < XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>,std::allocator<std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>> > std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true > *__s;
   ulong uVar7;
   ulong extraout_RDX;
   long *plVar8;
   long *plVar9;
   ulong uVar10;
   _Map_base<XrSession_T*,std::pair<XrSession_T*const,std::unique_ptr < std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>> >> std::allocator<std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator < std::unique_ptr < XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>> >> std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true > *p_Var11;
   pXVar1 = *param_1;
   uVar7 = (ulong)pXVar1 % *(ulong*)( this + 8 );
   plVar6 = *(long**)( *(long*)this + uVar7 * 8 );
   if (plVar6 != (long*)0x0) {
      pXVar2 = (XrSession_T*)( (long*)*plVar6 )[1];
      plVar8 = (long*)*plVar6;
      while (pXVar2 != pXVar1) {
         plVar9 = (long*)*plVar8;
         if (( plVar9 == (long*)0x0 ) || ( pXVar2 = (XrSession_T*)plVar9[1] ),plVar6 = plVar8,plVar8 = plVar9,uVar7 != (ulong)pXVar2 % *(ulong*)( this + 8 )) goto LAB_00102660;
      }
;
      if (*plVar6 != 0) {
         return (long*)( *plVar6 + 0x10 );
      }

   }

   LAB_00102660:plVar6 = (long*)operator_new(0x18);
   uVar10 = *(ulong*)( this + 0x18 );
   uVar3 = *(ulong*)( this + 8 );
   *plVar6 = 0;
   pXVar2 = *param_1;
   plVar6[2] = 0;
   plVar6[1] = (long)pXVar2;
   cVar5 = std::__detail::_Prime_rehash_policy::_M_need_rehash(( ulong )(this + 0x20), uVar3, uVar10);
   if (cVar5 == '\0') {
      __s = *( _Map_base<XrSession_T*,std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr < XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>,std::allocator<std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>> > std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true > **)this );
      p_Var11 = __s + uVar7 * 8;
      plVar8 = *(long**)p_Var11;
   }
 else {
      if (extraout_RDX == 1) {
         __s = this + 0x30;
         *(undefined8*)( this + 0x30 ) = 0;
      }
 else {
         if (extraout_RDX >> 0x3c != 0) {
            if (extraout_RDX >> 0x3d != 0) {
               std::__throw_bad_array_new_length();
            }

            std::__throw_bad_alloc();
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

         __s = ( _Map_base<XrSession_T*,std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr < XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>,std::allocator<std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>> > std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true > *)operator_new(extraout_RDX * 8) );
         memset(__s, 0, extraout_RDX * 8);
      }

      plVar8 = *(long**)( this + 0x10 );
      *(undefined8*)( this + 0x10 ) = 0;
      uVar7 = 0;
      while (uVar10 = uVar7,plVar9 = plVar8,plVar8 != (long*)0x0) {
         while (true) {
            plVar8 = (long*)*plVar9;
            uVar7 = (ulong)plVar9[1] % extraout_RDX;
            p_Var11 = __s + uVar7 * 8;
            if (*(long**)p_Var11 == (long*)0x0) break;
            *plVar9 = **(long**)p_Var11;
            **(undefined8**)p_Var11 = plVar9;
            plVar9 = plVar8;
            if (plVar8 == (long*)0x0) goto LAB_00102763;
         }
;
         *plVar9 = *(long*)( this + 0x10 );
         *(long**)( this + 0x10 ) = plVar9;
         *( _Map_base<XrSession_T*,std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr < XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>,std::allocator<std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>> > std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true > **)p_Var11 = this + 0x10 );
         if (*plVar9 != 0) {
            *(long**)( __s + uVar10 * 8 ) = plVar9;
         }

      }
;
      LAB_00102763:if (*( _Map_base<XrSession_T*,std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr < XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>,std::allocator<std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>> > std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true > **)this != this + 0x30 ) {
         operator_delete(*( _Map_base<XrSession_T*,std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr < XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>,std::allocator<std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>> > std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true > **)this,*(long*)( this + 8 ) << 3 ));
      }

      *(ulong*)( this + 8 ) = extraout_RDX;
      *( _Map_base<XrSession_T*,std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr < XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>,std::allocator<std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>> > std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true > **)this = __s );
      p_Var11 = __s + ( (ulong)pXVar1 % extraout_RDX ) * 8;
      plVar8 = *(long**)p_Var11;
   }

   if (plVar8 == (long*)0x0) {
      lVar4 = *(long*)( this + 0x10 );
      *(long**)( this + 0x10 ) = plVar6;
      *plVar6 = lVar4;
      if (lVar4 != 0) {
         *(long**)( __s + ( *(ulong*)( lVar4 + 8 ) % *(ulong*)( this + 8 ) ) * 8 ) = plVar6;
      }

      *( _Map_base<XrSession_T*,std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr < XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>>,std::allocator<std::pair<XrSession_T * const,std::unique_ptr<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete < XrSdkSessionLabel>>>>,std::default_delete<std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>>>> > std::__detail::_Select1st,std::equal_to<XrSession_T*>,std::hash<XrSession_T*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true > **)p_Var11 = this + 0x10 );
   }
 else {
      *plVar6 = *plVar8;
      **(undefined8**)p_Var11 = plVar6;
   }

   *(long*)( this + 0x18 ) = *(long*)( this + 0x18 ) + 1;
   return plVar6 + 2;
}
/* void std::vector<std::unique_ptr<XrSdkSessionLabel, std::default_delete<XrSdkSessionLabel> >,
   std::allocator<std::unique_ptr<XrSdkSessionLabel, std::default_delete<XrSdkSessionLabel> > >
   >::_M_realloc_insert<std::unique_ptr<XrSdkSessionLabel, std::default_delete<XrSdkSessionLabel> >
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> >*, std::vector<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> >, std::allocator<std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> > > > >, std::unique_ptr<XrSdkSessionLabel,
   std::default_delete<XrSdkSessionLabel> >&&) */void std::vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>>::_M_realloc_insert<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>(vector<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>,std::allocator<std::unique_ptr<XrSdkSessionLabel,std::default_delete<XrSdkSessionLabel>>>> *this, undefined8 *param_2, undefined8 *param_3) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   ulong uVar8;
   long local_50;
   puVar1 = *(undefined8**)( this + 8 );
   puVar2 = *(undefined8**)this;
   uVar4 = (long)puVar1 - (long)puVar2 >> 3;
   if (uVar4 == 0xfffffffffffffff) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   if (puVar2 == puVar1) {
      if (0xfffffffffffffffe < uVar4) goto LAB_00102920;
      uVar8 = 0xfffffffffffffff;
      if (uVar4 + 1 < 0x1000000000000000) {
         uVar8 = uVar4 + 1;
      }

      uVar8 = uVar8 << 3;
      LAB_0010292a:puVar5 = (undefined8*)operator_new(uVar8);
      local_50 = (long)puVar5 + uVar8;
      uVar3 = *param_3;
      puVar6 = puVar5 + 1;
      *param_3 = 0;
      *(undefined8*)( (long)puVar5 + ( (long)param_2 - (long)puVar2 ) ) = uVar3;
      if (param_2 != puVar2) {
         LAB_001028a4:puVar6 = puVar2;
         puVar7 = puVar5;
         do {
            uVar3 = *puVar6;
            puVar6 = puVar6 + 1;
            *puVar7 = uVar3;
            puVar7 = puVar7 + 1;
         }
 while ( puVar6 != param_2 );
         puVar6 = (undefined8*)( (long)puVar5 + (long)param_2 + ( 8 - (long)puVar2 ) );
      }

      puVar7 = puVar6;
      if (param_2 == puVar1) goto LAB_001028e2;
   }
 else {
      uVar8 = uVar4 * 2;
      if (uVar8 < uVar4) {
         LAB_00102920:uVar8 = 0x7ffffffffffffff8;
         goto LAB_0010292a;
      }

      if (uVar8 != 0) {
         if (0xfffffffffffffff < uVar8) {
            uVar8 = 0xfffffffffffffff;
         }

         uVar8 = uVar8 * 8;
         goto LAB_0010292a;
      }

      uVar3 = *param_3;
      puVar5 = (undefined8*)0x0;
      *param_3 = 0;
      puVar6 = (undefined8*)0x8;
      local_50 = 0;
      *(undefined8*)( (long)param_2 - (long)puVar2 ) = uVar3;
      if (param_2 != puVar2) goto LAB_001028a4;
   }

   puVar7 = (undefined8*)( (long)puVar6 + ( (long)puVar1 - (long)param_2 ) );
   memcpy(puVar6, param_2, (long)puVar1 - (long)param_2);
   LAB_001028e2:if (puVar2 != (undefined8*)0x0) {
      operator_delete(puVar2, *(long*)( this + 0x10 ) - (long)puVar2);
   }

   *(undefined8**)this = puVar5;
   *(undefined8**)( this + 8 ) = puVar7;
   *(long*)( this + 0x10 ) = local_50;
   return;
}
/* void std::vector<XrDebugUtilsObjectNameInfoEXT, std::allocator<XrDebugUtilsObjectNameInfoEXT>
   >::_M_realloc_insert<XrDebugUtilsObjectNameInfoEXT>(__gnu_cxx::__normal_iterator<XrDebugUtilsObjectNameInfoEXT*,
   std::vector<XrDebugUtilsObjectNameInfoEXT, std::allocator<XrDebugUtilsObjectNameInfoEXT> > >,
   XrDebugUtilsObjectNameInfoEXT&&) */void std::vector<XrDebugUtilsObjectNameInfoEXT,std::allocator<XrDebugUtilsObjectNameInfoEXT>>::_M_realloc_insert<XrDebugUtilsObjectNameInfoEXT>(vector<XrDebugUtilsObjectNameInfoEXT,std::allocator<XrDebugUtilsObjectNameInfoEXT>> *this, void *param_2, undefined8 *param_3) {
   void *__dest;
   undefined8 *puVar1;
   void *pvVar2;
   void *__src;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   long lVar7;
   ulong uVar8;
   void *__dest_00;
   size_t __n;
   size_t __n_00;
   ulong uVar9;
   pvVar2 = *(void**)( this + 8 );
   __src = *(void**)this;
   lVar7 = (long)pvVar2 - (long)__src >> 3;
   uVar8 = lVar7 * -0x3333333333333333;
   if (uVar8 == 0x333333333333333) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   __n_00 = (long)param_2 - (long)__src;
   if (__src == pvVar2) {
      uVar9 = uVar8 + 1;
      if (0xfffffffffffffffe < uVar8) goto LAB_00102aa8;
      if (0x333333333333333 < uVar9) {
         uVar9 = 0x333333333333333;
      }

      uVar9 = uVar9 * 0x28;
      LAB_00102ab2:__dest_00 = operator_new(uVar9);
      lVar7 = uVar9 + (long)__dest_00;
   }
 else {
      uVar9 = lVar7 * -0x6666666666666666;
      if (uVar9 < uVar8) {
         LAB_00102aa8:uVar9 = 0x7ffffffffffffff8;
         goto LAB_00102ab2;
      }

      if (uVar9 != 0) {
         if (0x333333333333333 < uVar9) {
            uVar9 = 0x333333333333333;
         }

         uVar9 = uVar9 * 0x28;
         goto LAB_00102ab2;
      }

      lVar7 = 0;
      __dest_00 = (void*)0x0;
   }

   uVar4 = param_3[1];
   uVar5 = param_3[2];
   uVar6 = param_3[3];
   __dest = (void*)( (long)__dest_00 + __n_00 + 0x28 );
   uVar3 = param_3[4];
   __n = (long)pvVar2 - (long)param_2;
   *(undefined8*)( (long)__dest_00 + __n_00 ) = *param_3;
   ( (undefined8*)( (long)__dest_00 + __n_00 ) )[1] = uVar4;
   *(undefined8*)( (long)__dest_00 + __n_00 + 0x20 ) = uVar3;
   puVar1 = (undefined8*)( (long)__dest_00 + __n_00 + 0x10 );
   *puVar1 = uVar5;
   puVar1[1] = uVar6;
   if ((long)__n_00 < 1) {
      if (0 < (long)__n) {
         memcpy(__dest, param_2, __n);
      }

      if (__src == (void*)0x0) goto LAB_00102a8b;
   }
 else {
      memmove(__dest_00, __src, __n_00);
      if (0 < (long)__n) {
         memcpy(__dest, param_2, __n);
         operator_delete(__src, *(long*)( this + 0x10 ) - (long)__src);
         goto LAB_00102a8b;
      }

   }

   operator_delete(__src, *(long*)( this + 0x10 ) - (long)__src);
   LAB_00102a8b:*(void**)this = __dest_00;
   *(size_t*)( this + 8 ) = (long)__dest + __n;
   *(long*)( this + 0x10 ) = lVar7;
   return;
}
/* void std::vector<XrDebugUtilsLabelEXT, std::allocator<XrDebugUtilsLabelEXT>
   >::_M_realloc_insert<XrDebugUtilsLabelEXT>(__gnu_cxx::__normal_iterator<XrDebugUtilsLabelEXT*,
   std::vector<XrDebugUtilsLabelEXT, std::allocator<XrDebugUtilsLabelEXT> > >,
   XrDebugUtilsLabelEXT&&) */void std::vector<XrDebugUtilsLabelEXT,std::allocator<XrDebugUtilsLabelEXT>>::_M_realloc_insert<XrDebugUtilsLabelEXT>(vector<XrDebugUtilsLabelEXT,std::allocator<XrDebugUtilsLabelEXT>> *this, void *param_2, undefined8 *param_3) {
   void *__dest;
   void *pvVar1;
   void *__src;
   undefined8 uVar2;
   undefined8 uVar3;
   long lVar4;
   ulong uVar5;
   void *__dest_00;
   ulong uVar6;
   size_t __n;
   size_t __n_00;
   pvVar1 = *(void**)( this + 8 );
   __src = *(void**)this;
   lVar4 = (long)pvVar1 - (long)__src >> 3;
   uVar5 = lVar4 * -0x5555555555555555;
   if (uVar5 == 0x555555555555555) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   __n = (long)param_2 - (long)__src;
   if (__src == pvVar1) {
      uVar6 = uVar5 + 1;
      if (0xfffffffffffffffe < uVar5) goto LAB_00102c60;
      if (0x555555555555555 < uVar6) {
         uVar6 = 0x555555555555555;
      }

      uVar6 = uVar6 * 0x18;
      LAB_00102c6a:__dest_00 = operator_new(uVar6);
      lVar4 = uVar6 + (long)__dest_00;
   }
 else {
      uVar6 = lVar4 * 0x5555555555555556;
      if (uVar6 < uVar5) {
         LAB_00102c60:uVar6 = 0x7ffffffffffffff8;
         goto LAB_00102c6a;
      }

      if (uVar6 != 0) {
         if (0x555555555555555 < uVar6) {
            uVar6 = 0x555555555555555;
         }

         uVar6 = uVar6 * 0x18;
         goto LAB_00102c6a;
      }

      lVar4 = 0;
      __dest_00 = (void*)0x0;
   }

   uVar2 = *param_3;
   uVar3 = param_3[1];
   __dest = (void*)( (long)__dest_00 + __n + 0x18 );
   __n_00 = (long)pvVar1 - (long)param_2;
   *(undefined8*)( (long)__dest_00 + __n + 0x10 ) = param_3[2];
   *(undefined8*)( (long)__dest_00 + __n ) = uVar2;
   ( (undefined8*)( (long)__dest_00 + __n ) )[1] = uVar3;
   if ((long)__n < 1) {
      if (0 < (long)__n_00) {
         memcpy(__dest, param_2, __n_00);
      }

      if (__src == (void*)0x0) goto LAB_00102c46;
   }
 else {
      __dest_00 = memmove(__dest_00, __src, __n);
      if (0 < (long)__n_00) {
         memcpy(__dest, param_2, __n_00);
      }

   }

   operator_delete(__src, *(long*)( this + 0x10 ) - (long)__src);
   LAB_00102c46:*(void**)this = __dest_00;
   *(size_t*)( this + 8 ) = (long)__dest + __n_00;
   *(long*)( this + 0x10 ) = lVar4;
   return;
}

