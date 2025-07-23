/* (anonymous namespace)::isSpecialTypeCodepoints(std::basic_string_view<char,
   std::char_traits<char> >) */ulong isSpecialTypeCodepoints(_anonymous_namespace_ *this, _anonymous_namespace_ *param_2) {
   uint uVar1;
   ulong uVar2;
   int iVar3;
   bool bVar4;
   this =
   this + (long)param_2;
   if (param_2 == this) {
      return 0;
   }

   iVar3 = 0;
   do {
      while (true) {
         uVar2 = 0;
         if (*param_2 != (_anonymous_namespace_)0x2d) break;
         if (2 < iVar3 - 4U) {
            return 0;
         }

         param_2 = param_2 + 1;
         iVar3 = 0;
         if (this == param_2) goto LAB_00100058;
      }
;
      uVar1 = ( byte ) * param_2 - 0x30;
      if (0x36 < (byte)uVar1) {
         return 0;
      }

      bVar4 = ( 0x7e0000007e03ffU >> ( (ulong)uVar1 & 0x3f ) & 1 ) != 0;
      uVar2 = (ulong)CONCAT31(( int3 )(uVar1 >> 8), bVar4);
      if (!bVar4) {
         return uVar2;
      }

      param_2 = param_2 + 1;
      iVar3 = iVar3 + 1;
   }
 while ( this != param_2 );
   LAB_00100058:return CONCAT71(( int7 )(uVar2 >> 8), iVar3 - 4U < 3);
}
undefined8 uloc_key_type_cleanup(undefined8 param_1, void *param_2) {
   UMemory *pUVar1;
   UMemory *pUVar2;
   long lVar3;
   if (gLocExtKeyMap != 0) {
      uhash_close_76_godot();
      gLocExtKeyMap = 0;
   }

   pUVar2 = gLocExtKeyDataEntries;
   if (gLocExtKeyDataEntries != (UMemory*)0x0) {
      param_2 = (void*)( ulong ) * (uint*)gLocExtKeyDataEntries;
      if (0 < (int)*(uint*)gLocExtKeyDataEntries) {
         lVar3 = 0;
         do {
            pUVar1 = *(UMemory**)( *(long*)( pUVar2 + 8 ) + lVar3 * 8 );
            if (pUVar1 != (UMemory*)0x0) {
               if (*(long*)( pUVar1 + 0x20 ) != 0) {
                  uhash_close_76_godot();
               }

               icu_76_godot::UMemory::operator_delete(pUVar1, param_2);
            }

            lVar3 = lVar3 + 1;
         }
 while ( (int)lVar3 < *(int*)pUVar2 );
      }

      if (pUVar2[0x14] != (UMemory)0x0) {
         uprv_free_76_godot(*(undefined8*)( pUVar2 + 8 ));
      }

      icu_76_godot::UMemory::operator_delete(pUVar2, param_2);
   }

   pUVar2 = gLocExtTypeEntries;
   gLocExtKeyDataEntries = (UMemory*)0x0;
   if (gLocExtTypeEntries != (UMemory*)0x0) {
      if (0 < *(int*)gLocExtTypeEntries) {
         lVar3 = 0;
         do {
            pUVar1 = *(UMemory**)( *(long*)( pUVar2 + 8 ) + lVar3 * 8 );
            if (pUVar1 != (UMemory*)0x0) {
               icu_76_godot::UMemory::operator_delete(pUVar1, param_2);
            }

            lVar3 = lVar3 + 1;
         }
 while ( (int)lVar3 < *(int*)pUVar2 );
      }

      if (pUVar2[0x14] != (UMemory)0x0) {
         uprv_free_76_godot(*(undefined8*)( pUVar2 + 8 ));
      }

      icu_76_godot::UMemory::operator_delete(pUVar2, param_2);
   }

   pUVar2 = gTypeAliasEntries;
   gLocExtTypeEntries = (UMemory*)0x0;
   if (gTypeAliasEntries != (UMemory*)0x0) {
      if (0 < *(int*)gTypeAliasEntries) {
         lVar3 = 0;
         do {
            pUVar1 = *(UMemory**)( *(long*)( pUVar2 + 8 ) + lVar3 * 8 );
            if (pUVar1 != (UMemory*)0x0) {
               icu_76_godot::UMemory::operator_delete(pUVar1, param_2);
            }

            lVar3 = lVar3 + 1;
         }
 while ( (int)lVar3 < *(int*)pUVar2 );
      }

      if (pUVar2[0x14] != (UMemory)0x0) {
         uprv_free_76_godot(*(undefined8*)( pUVar2 + 8 ));
      }

      icu_76_godot::UMemory::operator_delete(pUVar2, param_2);
   }

   pUVar2 = gKeyTypeStringPool;
   gTypeAliasEntries = (UMemory*)0x0;
   if (gKeyTypeStringPool != (UMemory*)0x0) {
      if (0 < *(int*)gKeyTypeStringPool) {
         lVar3 = 0;
         do {
            pUVar1 = *(UMemory**)( *(long*)( pUVar2 + 8 ) + lVar3 * 8 );
            if (pUVar1 != (UMemory*)0x0) {
               if (pUVar1[0xc] != (UMemory)0x0) {
                  uprv_free_76_godot(*(undefined8*)pUVar1);
               }

               icu_76_godot::UMemory::operator_delete(pUVar1, param_2);
            }

            lVar3 = lVar3 + 1;
         }
 while ( (int)lVar3 < *(int*)pUVar2 );
      }

      if (pUVar2[0x14] != (UMemory)0x0) {
         uprv_free_76_godot(*(undefined8*)( pUVar2 + 8 ));
      }

      icu_76_godot::UMemory::operator_delete(pUVar2, param_2);
   }

   gKeyTypeStringPool = (UMemory*)0x0;
   LOCK();
   gLocExtKeyMapInitOnce = 0;
   UNLOCK();
   return 1;
}
/* (anonymous namespace)::isSpecialTypeReorderCode(std::basic_string_view<char,
   std::char_traits<char> >) */bool isSpecialTypeReorderCode(_anonymous_namespace_ *this, char *param_2) {
   char *pcVar1;
   char cVar2;
   int iVar3;
   pcVar1 = param_2 + (long)this;
   if (param_2 == pcVar1) {
      return false;
   }

   iVar3 = 0;
   do {
      while (*param_2 == '-') {
         if (5 < iVar3 - 3U) {
            return false;
         }

         param_2 = param_2 + 1;
         iVar3 = 0;
         if (pcVar1 == param_2) goto LAB_001002b9;
      }
;
      cVar2 = uprv_isASCIILetter_76_godot();
      if (cVar2 == '\0') {
         return false;
      }

      param_2 = param_2 + 1;
      iVar3 = iVar3 + 1;
   }
 while ( pcVar1 != param_2 );
   LAB_001002b9:return iVar3 - 3U < 6;
}
/* (anonymous namespace)::isSpecialTypeRgKeyValue(std::basic_string_view<char,
   std::char_traits<char> >) */bool isSpecialTypeRgKeyValue(_anonymous_namespace_ *this, byte *param_2) {
   byte *pbVar1;
   char cVar2;
   int iVar3;
   pbVar1 = param_2 + (long)this;
   if (param_2 == pbVar1) {
      return false;
   }

   iVar3 = 0;
   do {
      if (iVar3 < 2) {
         cVar2 = uprv_isASCIILetter_76_godot();
         if (cVar2 == '\0') {
            return false;
         }

      }
 else if (( *param_2 & 0xdf ) != 0x5a) {
         return false;
      }

      param_2 = param_2 + 1;
      iVar3 = iVar3 + 1;
   }
 while ( pbVar1 != param_2 );
   return iVar3 == 6;
}
/* (anonymous namespace)::initFromResourceBundle(UErrorCode&) */void (anonymous_namespace)::initFromResourceBundle(UErrorCode *param_1) {
   char cVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   ulong uVar9;
   size_t sVar10;
   UnicodeString *pUVar11;
   long lVar12;
   char *pcVar13;
   char *pcVar14;
   undefined8 uVar15;
   size_t sVar16;
   long lVar17;
   size_t *psVar18;
   size_t *psVar19;
   size_t sVar20;
   long *plVar21;
   long lVar22;
   long lVar23;
   long lVar24;
   long lVar25;
   long lVar26;
   char *pcVar27;
   UErrorCode *pUVar28;
   int *piVar29;
   int iVar30;
   long lVar31;
   long in_FS_OFFSET;
   long local_198;
   uint local_174;
   UErrorCode *local_160;
   char *local_158;
   long local_150;
   UErrorCode *local_148;
   int local_e0;
   undefined4 local_dc;
   ulong local_d8;
   uint local_d0;
   code *local_c8;
   ushort local_c0;
   code *local_88;
   ushort local_80;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ucln_common_registerCleanup_76_godot(5, uloc_key_type_cleanup);
   gLocExtKeyMap = uhash_open_76_godot(&uhash_hashIStringView_76_godot, &uhash_compareIStringView_76_godot, 0, param_1);
   lVar4 = ures_openDirect_76_godot(0, "keyTypeData", param_1);
   lVar5 = ures_getByKey_76_godot(lVar4, "keyMap", 0, param_1);
   lVar6 = ures_getByKey_76_godot(lVar4, "typeMap", 0, param_1);
   if (0 < *(int*)param_1) goto LAB_001003e8;
   local_e0 = 0;
   lVar7 = ures_getByKey_76_godot(lVar4, "typeAlias", 0, &local_e0);
   pcVar27 = "bcpTypeAlias";
   local_e0 = 0;
   lVar8 = ures_getByKey_76_godot(lVar4, "bcpTypeAlias", 0, &local_e0);
   gKeyTypeStringPool = (int*)icu_76_godot::UMemory::operator_new((UMemory*)0x58, (ulong)pcVar27);
   if (gKeyTypeStringPool == (int*)0x0) {
      gKeyTypeStringPool = (int*)0x0;
   }
 else {
      *gKeyTypeStringPool = 0;
      *(int**)( gKeyTypeStringPool + 2 ) = gKeyTypeStringPool + 6;
      gKeyTypeStringPool[4] = 8;
      *(undefined1*)( gKeyTypeStringPool + 5 ) = 0;
      gLocExtKeyDataEntries = (int*)icu_76_godot::UMemory::operator_new((UMemory*)0x58, (ulong)pcVar27);
      if (gLocExtKeyDataEntries == (int*)0x0) {
         gLocExtKeyDataEntries = (int*)0x0;
      }
 else {
         *gLocExtKeyDataEntries = 0;
         *(int**)( gLocExtKeyDataEntries + 2 ) = gLocExtKeyDataEntries + 6;
         gLocExtKeyDataEntries[4] = 8;
         *(undefined1*)( gLocExtKeyDataEntries + 5 ) = 0;
         gLocExtTypeEntries = (int*)icu_76_godot::UMemory::operator_new((UMemory*)0x58, (ulong)pcVar27);
         if (gLocExtTypeEntries == (int*)0x0) {
            gLocExtTypeEntries = (int*)0x0;
         }
 else {
            *gLocExtTypeEntries = 0;
            *(int**)( gLocExtTypeEntries + 2 ) = gLocExtTypeEntries + 6;
            gLocExtTypeEntries[4] = 8;
            *(undefined1*)( gLocExtTypeEntries + 5 ) = 0;
            gTypeAliasEntries = (int*)icu_76_godot::UMemory::operator_new((UMemory*)0x58, (ulong)pcVar27);
            if (gTypeAliasEntries != (int*)0x0) {
               *gTypeAliasEntries = 0;
               *(int**)( gTypeAliasEntries + 2 ) = gTypeAliasEntries + 6;
               gTypeAliasEntries[4] = 8;
               *(undefined1*)( gTypeAliasEntries + 5 ) = 0;
               local_150 = 0;
               LAB_00100580:cVar1 = ures_hasNext_76_godot(lVar5);
               if (( cVar1 != '\0' ) && ( local_150 = ures_getNextResource_76_godot(lVar5, local_150, param_1) * (int*)param_1 < 1 )) {
                  pcVar27 = (char*)ures_getKey_76_godot(local_150);
                  local_dc = 0;
                  local_c8 = icu_76_godot::UnicodeString::setToBogus;
                  local_c0 = 2;
                  pUVar28 = (UErrorCode*)&local_dc;
                  uVar9 = ures_getString_76_godot(local_150, (UErrorCode*)&local_dc, param_1);
                  if (*(int*)param_1 < 1) {
                     pUVar28 = (UErrorCode*)0x1;
                     local_d8 = uVar9;
                     icu_76_godot::UnicodeString::setTo(&local_c8, 1, &local_d8, local_dc);
                  }
 else {
                     icu_76_godot::UnicodeString::setToBogus();
                  }

                  piVar29 = gKeyTypeStringPool;
                  local_160 = (UErrorCode*)&local_c8;
                  if (*(int*)param_1 < 1) {
                     local_158 = pcVar27;
                     if (local_c0 >> 5 != 0) {
                        iVar2 = gKeyTypeStringPool[4];
                        if (iVar2 == *gKeyTypeStringPool) {
                           if (iVar2 == 8) {
                              lVar22 = uprv_malloc_76_godot(0x100);
                              if (lVar22 != 0) {
                                 iVar3 = 0x20;
                                 lVar25 = 0x100;
                                 LAB_00100821:pUVar28 = *(UErrorCode**)( piVar29 + 2 );
                                 if (piVar29[4] < iVar2) {
                                    iVar2 = piVar29[4];
                                 }

                                 if (iVar3 < iVar2) {
                                    iVar2 = iVar3;
                                 }

                                 __memcpy_chk(lVar22, pUVar28, (long)iVar2 << 3, lVar25);
                                 cVar1 = (char)piVar29[5];
                                 joined_r0x00100847:if (cVar1 != '\0') {
                                    uprv_free_76_godot(*(undefined8*)( piVar29 + 2 ));
                                 }

                                 *(long*)( piVar29 + 2 ) = lVar22;
                                 piVar29[4] = iVar3;
                                 *(undefined1*)( piVar29 + 5 ) = 1;
                                 goto LAB_00100859;
                              }

                           }
 else {
                              iVar3 = iVar2 * 2;
                              if (0 < iVar3) {
                                 lVar25 = (long)iVar3 << 3;
                                 lVar22 = uprv_malloc_76_godot(lVar25);
                                 if (lVar22 != 0) {
                                    if (iVar2 != 0) goto LAB_00100821;
                                    cVar1 = (char)piVar29[5];
                                    goto joined_r0x00100847;
                                 }

                              }

                           }

                        }
 else {
                           LAB_00100859:pUVar11 = (UnicodeString*)icu_76_godot::UMemory::operator_new((UMemory*)0x40, (ulong)pUVar28);
                           if (pUVar11 != (UnicodeString*)0x0) {
                              *(undefined4*)( pUVar11 + 8 ) = 0x28;
                              *(UnicodeString**)pUVar11 = pUVar11 + 0xd;
                              *(undefined2*)( pUVar11 + 0xc ) = 0;
                              *(undefined4*)( pUVar11 + 0x38 ) = 0;
                              iVar2 = *piVar29;
                              *piVar29 = iVar2 + 1;
                              *(UnicodeString**)( *(long*)( piVar29 + 2 ) + (long)iVar2 * 8 ) = pUVar11;
                              icu_76_godot::CharString::appendInvariantChars(pUVar11, local_160);
                              if (0 < *(int*)param_1) goto LAB_00100680;
                              local_158 = *(char**)pUVar11;
                              goto LAB_001006d5;
                           }

                           iVar2 = *piVar29;
                           *piVar29 = iVar2 + 1;
                           *(undefined8*)( *(long*)( piVar29 + 2 ) + (long)iVar2 * 8 ) = 0;
                        }

                        *(undefined4*)param_1 = 7;
                        goto LAB_00100680;
                     }

                     LAB_001006d5:iVar2 = strcmp(pcVar27, "timezone");
                     sVar10 = uhash_open_76_godot(&uhash_hashIStringView_76_godot, &uhash_compareIStringView_76_godot, 0, param_1);
                     if (0 < *(int*)param_1) goto LAB_00100680;
                     if (lVar7 == 0) {
                        LAB_0010074c:lVar22 = 0;
                     }
 else {
                        local_e0 = 0;
                        lVar22 = ures_getByKey_76_godot(lVar7, pcVar27, 0, &local_e0);
                        if (0 < local_e0) goto LAB_0010074c;
                     }

                     if (lVar8 == 0) {
                        LAB_0010078b:local_198 = 0;
                     }
 else {
                        local_e0 = 0;
                        local_198 = ures_getByKey_76_godot(lVar8, local_158, 0, &local_e0);
                        if (0 < local_e0) goto LAB_0010078b;
                     }

                     lVar25 = ures_getByKey_76_godot(lVar6, pcVar27, 0);
                     if (*(int*)param_1 < 1) {
                        local_174 = 0;
                        lVar12 = 0;
                        do {
                           while (true) {
                              while (true) {
                                 cVar1 = ures_hasNext_76_godot(lVar25);
                                 while (true) {
                                    if (( cVar1 == '\0' ) || ( lVar12 = ures_getNextResource_76_godot(lVar25, lVar12, param_1) ),0 < *(int*)param_1) goto LAB_00100eb2;
                                    pcVar13 = (char*)ures_getKey_76_godot(lVar12);
                                    iVar3 = strcmp(pcVar13, "CODEPOINTS");
                                    if (iVar3 != 0) break;
                                    local_174 = local_174 | 1;
                                    cVar1 = ures_hasNext_76_godot(lVar25);
                                 }
;
                                 iVar3 = strcmp(pcVar13, "REORDER_CODE");
                                 if (iVar3 != 0) break;
                                 local_174 = local_174 | 2;
                              }
;
                              iVar3 = strcmp(pcVar13, "RG_KEY_VALUE");
                              if (iVar3 != 0) break;
                              local_174 = local_174 | 4;
                           }
;
                           if (iVar2 == 0) {
                              uVar9 = 0x3a;
                              pcVar14 = strchr(pcVar13, 0x3a);
                              piVar29 = gKeyTypeStringPool;
                              if (pcVar14 != (char*)0x0) {
                                 iVar3 = gKeyTypeStringPool[4];
                                 if (iVar3 == *gKeyTypeStringPool) {
                                    if (iVar3 == 8) {
                                       lVar23 = uprv_malloc_76_godot(0x100);
                                       if (lVar23 != 0) {
                                          iVar30 = 0x20;
                                          LAB_001015a1:uVar9 = *(ulong*)( piVar29 + 2 );
                                          if (piVar29[4] < iVar3) {
                                             iVar3 = piVar29[4];
                                          }

                                          if (iVar30 < iVar3) {
                                             iVar3 = iVar30;
                                          }

                                          lVar23 = __memcpy_chk(lVar23, uVar9, (long)iVar3 << 3);
                                          goto LAB_001015d3;
                                       }

                                    }
 else {
                                       iVar30 = iVar3 * 2;
                                       if (( 0 < iVar30 ) && ( lVar23 = lVar23 != 0 )) {
                                          if (iVar3 != 0) goto LAB_001015a1;
                                          LAB_001015d3:if ((char)piVar29[5] != '\0') {
                                             uprv_free_76_godot(*(undefined8*)( piVar29 + 2 ));
                                          }

                                          *(long*)( piVar29 + 2 ) = lVar23;
                                          piVar29[4] = iVar30;
                                          *(undefined1*)( piVar29 + 5 ) = 1;
                                          goto LAB_001015ef;
                                       }

                                    }

                                 }
 else {
                                    LAB_001015ef:plVar21 = (long*)icu_76_godot::UMemory::operator_new((UMemory*)0x40, uVar9);
                                    if (plVar21 != (long*)0x0) {
                                       icu_76_godot::StringPiece::StringPiece((StringPiece*)&local_d8, pcVar13);
                                       *(undefined2*)( (long)plVar21 + 0xc ) = 0;
                                       *plVar21 = (long)plVar21 + 0xd;
                                       *(undefined4*)( plVar21 + 1 ) = 0x28;
                                       *(undefined4*)( plVar21 + 7 ) = 0;
                                       icu_76_godot::CharString::append((char*)plVar21, (int)local_d8, (UErrorCode*)(ulong)local_d0);
                                       iVar3 = *piVar29;
                                       iVar30 = *(int*)param_1;
                                       *piVar29 = iVar3 + 1;
                                       *(long**)( *(long*)( piVar29 + 2 ) + (long)iVar3 * 8 ) = plVar21;
                                       if (iVar30 < 1) {
                                          pcVar13 = (char*)*plVar21;
                                          pcVar14 = pcVar13 + (int)plVar21[7];
                                          if (pcVar14 != pcVar13) {
                                             do {
                                                if (*pcVar13 == ':') {
                                                   *pcVar13 = '/';
                                                }

                                                pcVar13 = pcVar13 + 1;
                                             }
 while ( pcVar14 != pcVar13 );
                                             pcVar13 = (char*)*plVar21;
                                          }

                                          goto LAB_001009c4;
                                       }

                                       goto LAB_00100eb2;
                                    }

                                    iVar2 = *piVar29;
                                    *piVar29 = iVar2 + 1;
                                    *(undefined8*)( *(long*)( piVar29 + 2 ) + (long)iVar2 * 8 ) = 0;
                                 }

                                 *(undefined4*)param_1 = 7;
                                 goto LAB_00100eb2;
                              }

                           }

                           LAB_001009c4:local_88 = icu_76_godot::UnicodeString::setToBogus;
                           local_80 = 2;
                           local_dc = 0;
                           pUVar28 = (UErrorCode*)&local_dc;
                           uVar9 = ures_getString_76_godot(lVar12, (UErrorCode*)&local_dc, param_1);
                           if (*(int*)param_1 < 1) {
                              pUVar28 = (UErrorCode*)0x1;
                              local_d8 = uVar9;
                              icu_76_godot::UnicodeString::setTo(&local_88, 1, (StringPiece*)&local_d8);
                           }
 else {
                              icu_76_godot::UnicodeString::setToBogus();
                           }

                           piVar29 = gKeyTypeStringPool;
                           local_148 = (UErrorCode*)&local_88;
                           if (0 < *(int*)param_1) goto LAB_00100ea8;
                           pcVar14 = pcVar13;
                           if (local_80 >> 5 != 0) {
                              iVar3 = gKeyTypeStringPool[4];
                              if (iVar3 == *gKeyTypeStringPool) {
                                 if (iVar3 == 8) {
                                    lVar23 = uprv_malloc_76_godot(0x100);
                                    if (lVar23 != 0) {
                                       iVar30 = 0x20;
                                       LAB_00100c49:pUVar28 = *(UErrorCode**)( piVar29 + 2 );
                                       if (piVar29[4] < iVar3) {
                                          iVar3 = piVar29[4];
                                       }

                                       if (iVar30 < iVar3) {
                                          iVar3 = iVar30;
                                       }

                                       lVar23 = __memcpy_chk(lVar23, pUVar28, (long)iVar3 << 3);
                                       cVar1 = (char)piVar29[5];
                                       goto joined_r0x00100c81;
                                    }

                                 }
 else {
                                    iVar30 = iVar3 * 2;
                                    if (( 0 < iVar30 ) && ( lVar23 = lVar23 != 0 )) {
                                       if (iVar3 != 0) goto LAB_00100c49;
                                       cVar1 = (char)piVar29[5];
                                       joined_r0x00100c81:if (cVar1 != '\0') {
                                          uprv_free_76_godot(*(undefined8*)( piVar29 + 2 ));
                                       }

                                       *(long*)( piVar29 + 2 ) = lVar23;
                                       piVar29[4] = iVar30;
                                       *(undefined1*)( piVar29 + 5 ) = 1;
                                       goto LAB_00100c97;
                                    }

                                 }

                                 goto LAB_00100a6c;
                              }

                              LAB_00100c97:pUVar11 = (UnicodeString*)icu_76_godot::UMemory::operator_new((UMemory*)0x40, (ulong)pUVar28);
                              if (pUVar11 == (UnicodeString*)0x0) {
                                 LAB_00101a27:iVar2 = *piVar29;
                                 *piVar29 = iVar2 + 1;
                                 *(undefined8*)( *(long*)( piVar29 + 2 ) + (long)iVar2 * 8 ) = 0;
                                 LAB_00100a6c:*(undefined4*)param_1 = 7;
                              }
 else {
                                 *(undefined2*)( pUVar11 + 0xc ) = 0;
                                 *(UnicodeString**)pUVar11 = pUVar11 + 0xd;
                                 *(undefined4*)( pUVar11 + 8 ) = 0x28;
                                 *(undefined4*)( pUVar11 + 0x38 ) = 0;
                                 iVar3 = *piVar29;
                                 *piVar29 = iVar3 + 1;
                                 *(UnicodeString**)( *(long*)( piVar29 + 2 ) + (long)iVar3 * 8 ) = pUVar11;
                                 pUVar28 = local_148;
                                 icu_76_godot::CharString::appendInvariantChars(pUVar11, local_148);
                                 if (*(int*)param_1 < 1) {
                                    pcVar14 = *(char**)pUVar11;
                                    goto LAB_00100ad3;
                                 }

                              }

                              goto LAB_00100ea8;
                           }

                           LAB_00100ad3:piVar29 = gLocExtTypeEntries;
                           iVar3 = gLocExtTypeEntries[4];
                           if (iVar3 == *gLocExtTypeEntries) {
                              if (iVar3 == 8) {
                                 lVar23 = uprv_malloc_76_godot(0x100);
                                 if (lVar23 != 0) {
                                    iVar30 = 0x20;
                                    LAB_001017bb:pUVar28 = *(UErrorCode**)( piVar29 + 2 );
                                    if (piVar29[4] < iVar3) {
                                       iVar3 = piVar29[4];
                                    }

                                    if (iVar30 < iVar3) {
                                       iVar3 = iVar30;
                                    }

                                    lVar23 = __memcpy_chk(lVar23, pUVar28, (long)iVar3 << 3);
                                    cVar1 = (char)piVar29[5];
                                    goto joined_r0x001017fa;
                                 }

                              }
 else {
                                 iVar30 = iVar3 * 2;
                                 if (( 0 < iVar30 ) && ( lVar23 = lVar23 != 0 )) {
                                    if (iVar3 != 0) goto LAB_001017bb;
                                    cVar1 = (char)piVar29[5];
                                    joined_r0x001017fa:if (cVar1 != '\0') {
                                       uprv_free_76_godot(*(undefined8*)( piVar29 + 2 ));
                                    }

                                    *(long*)( piVar29 + 2 ) = lVar23;
                                    piVar29[4] = iVar30;
                                    *(undefined1*)( piVar29 + 5 ) = 1;
                                    goto LAB_00100b58;
                                 }

                              }

                              goto LAB_00100a6c;
                           }

                           LAB_00100b58:psVar19 = (size_t*)icu_76_godot::UMemory::operator_new((UMemory*)0x20, (ulong)pUVar28);
                           if (psVar19 == (size_t*)0x0) goto LAB_00101a27;
                           *psVar19 = 0;
                           for (int i = 0; i < 3; i++) {
                              psVar19[( i + 1 )] = 0;
                           }

                           iVar3 = *piVar29;
                           *piVar29 = iVar3 + 1;
                           *(size_t**)( *(long*)( piVar29 + 2 ) + (long)iVar3 * 8 ) = psVar19;
                           sVar20 = strlen(pcVar14);
                           psVar19[3] = (size_t)pcVar14;
                           psVar19[2] = sVar20;
                           sVar20 = strlen(pcVar13);
                           psVar19[1] = (size_t)pcVar13;
                           *psVar19 = sVar20;
                           uhash_put_76_godot(sVar10, psVar19, psVar19);
                           if (pcVar14 != pcVar13) {
                              uhash_put_76_godot(sVar10, psVar19 + 2, psVar19);
                           }

                           if (0 < *(int*)param_1) goto LAB_00100ea8;
                           if (lVar22 != 0) {
                              lVar23 = 0;
                              ures_resetIterator_76_godot(lVar22);
                              do {
                                 cVar1 = ures_hasNext_76_godot(lVar22);
                                 while (true) {
                                    if (cVar1 == '\0') {
                                       if (0 < *(int*)param_1) goto LAB_00100e98;
                                       if (lVar23 != 0) {
                                          ures_close_76_godot(lVar23);
                                       }

                                       goto LAB_00100c08;
                                    }

                                    if (0 < *(int*)param_1) goto LAB_00100e98;
                                    lVar23 = ures_getNextResource_76_godot(lVar22, lVar23, param_1);
                                    ures_getString_76_godot(lVar23, (UErrorCode*)&local_dc, param_1);
                                    if (0 < *(int*)param_1) goto LAB_00100e98;
                                    sVar20 = psVar19[1];
                                    iVar3 = uprv_compareInvAscii_76_godot(0, sVar20, (int)*psVar19);
                                    if (iVar3 != 0) break;
                                    pcVar13 = (char*)ures_getKey_76_godot(lVar23);
                                    piVar29 = gTypeAliasEntries;
                                    sVar16 = strlen(pcVar13);
                                    iVar3 = piVar29[4];
                                    if (iVar3 == *piVar29) {
                                       if (iVar3 == 8) {
                                          lVar17 = uprv_malloc_76_godot(0x100);
                                          if (lVar17 != 0) {
                                             lVar24 = 0x20;
                                             LAB_00101238:sVar20 = *(size_t*)( piVar29 + 2 );
                                             iVar30 = (int)lVar24;
                                             if (piVar29[4] < iVar3) {
                                                iVar3 = piVar29[4];
                                             }

                                             lVar31 = (long)iVar3;
                                             if (iVar30 < iVar3) {
                                                lVar31 = lVar24;
                                             }

                                             lVar17 = __memcpy_chk(lVar17, sVar20, lVar31 << 3);
                                             cVar1 = (char)piVar29[5];
                                             goto joined_r0x00101274;
                                          }

                                       }
 else {
                                          iVar30 = iVar3 * 2;
                                          if (( 0 < iVar30 ) && ( lVar17 = lVar17 != 0 )) {
                                             lVar24 = (long)iVar30;
                                             if (iVar3 != 0) goto LAB_00101238;
                                             cVar1 = (char)piVar29[5];
                                             joined_r0x00101274:if (cVar1 != '\0') {
                                                uprv_free_76_godot(*(undefined8*)( piVar29 + 2 ));
                                             }

                                             *(long*)( piVar29 + 2 ) = lVar17;
                                             piVar29[4] = iVar30;
                                             *(undefined1*)( piVar29 + 5 ) = 1;
                                             goto LAB_0010128a;
                                          }

                                       }

                                       psVar18 = (size_t*)0x0;
                                    }
 else {
                                       LAB_0010128a:psVar18 = (size_t*)icu_76_godot::UMemory::operator_new((UMemory*)0x10, sVar20);
                                       if (psVar18 != (size_t*)0x0) {
                                          *psVar18 = sVar16;
                                          psVar18[1] = (size_t)pcVar13;
                                       }

                                       iVar3 = *piVar29;
                                       *piVar29 = iVar3 + 1;
                                       *(size_t**)( *(long*)( piVar29 + 2 ) + (long)iVar3 * 8 ) = psVar18;
                                    }

                                    if (iVar2 == 0) {
                                       uVar9 = 0x3a;
                                       pcVar14 = strchr(pcVar13, 0x3a);
                                       piVar29 = gKeyTypeStringPool;
                                       if (pcVar14 != (char*)0x0) {
                                          iVar3 = gKeyTypeStringPool[4];
                                          if (iVar3 == *gKeyTypeStringPool) {
                                             if (iVar3 == 8) {
                                                lVar17 = uprv_malloc_76_godot(0x100);
                                                if (lVar17 != 0) {
                                                   lVar24 = 0x20;
                                                   LAB_00101351:uVar9 = *(ulong*)( piVar29 + 2 );
                                                   iVar30 = (int)lVar24;
                                                   if (piVar29[4] < iVar3) {
                                                      iVar3 = piVar29[4];
                                                   }

                                                   lVar31 = (long)iVar3;
                                                   if (iVar30 < iVar3) {
                                                      lVar31 = lVar24;
                                                   }

                                                   __memcpy_chk(lVar17, uVar9, lVar31 << 3);
                                                   goto LAB_0010139c;
                                                }

                                             }
 else {
                                                iVar30 = iVar3 * 2;
                                                if (( 0 < iVar30 ) && ( lVar17 = lVar17 != 0 )) {
                                                   lVar24 = (long)iVar30;
                                                   if (iVar3 != 0) goto LAB_00101351;
                                                   LAB_0010139c:if ((char)piVar29[5] != '\0') {
                                                      uprv_free_76_godot(*(undefined8*)( piVar29 + 2 ));
                                                   }

                                                   *(long*)( piVar29 + 2 ) = lVar17;
                                                   piVar29[4] = iVar30;
                                                   *(undefined1*)( piVar29 + 5 ) = 1;
                                                   goto LAB_001013b4;
                                                }

                                             }

                                          }
 else {
                                             LAB_001013b4:plVar21 = (long*)icu_76_godot::UMemory::operator_new((UMemory*)0x40, uVar9);
                                             if (plVar21 != (long*)0x0) {
                                                icu_76_godot::StringPiece::StringPiece((StringPiece*)&local_d8, pcVar13);
                                                *(undefined2*)( (long)plVar21 + 0xc ) = 0;
                                                *plVar21 = (long)plVar21 + 0xd;
                                                *(undefined4*)( plVar21 + 1 ) = 0x28;
                                                *(undefined4*)( plVar21 + 7 ) = 0;
                                                icu_76_godot::CharString::append((char*)plVar21, (int)local_d8, (UErrorCode*)(ulong)local_d0);
                                                iVar3 = *(int*)param_1;
                                                iVar30 = *piVar29;
                                                *piVar29 = iVar30 + 1;
                                                *(long**)( *(long*)( piVar29 + 2 ) + (long)iVar30 * 8 ) = plVar21;
                                                if (iVar3 < 1) {
                                                   pcVar13 = (char*)*plVar21;
                                                   pcVar14 = pcVar13 + (int)plVar21[7];
                                                   if (pcVar14 == pcVar13) {
                                                      sVar20 = 0;
                                                   }
 else {
                                                      do {
                                                         if (*pcVar13 == ':') {
                                                            *pcVar13 = '/';
                                                         }

                                                         pcVar13 = pcVar13 + 1;
                                                      }
 while ( pcVar14 != pcVar13 );
                                                      sVar20 = (size_t)(int)plVar21[7];
                                                      pcVar13 = (char*)*plVar21;
                                                   }

                                                   *psVar18 = sVar20;
                                                   psVar18[1] = (size_t)pcVar13;
                                                   goto LAB_001011bd;
                                                }

                                                goto LAB_00100e98;
                                             }

                                             iVar2 = *piVar29;
                                             *piVar29 = iVar2 + 1;
                                             *(undefined8*)( *(long*)( piVar29 + 2 ) + (long)iVar2 * 8 ) = 0;
                                          }

                                          *(undefined4*)param_1 = 7;
                                          goto LAB_00100e98;
                                       }

                                    }

                                    LAB_001011bd:uhash_put_76_godot(sVar10, psVar18, psVar19);
                                    cVar1 = ures_hasNext_76_godot(lVar22);
                                 }
;
                              }
 while ( true );
                           }

                           LAB_00100c08:if (local_198 != 0) {
                              lVar23 = 0;
                              ures_resetIterator_76_godot(local_198);
                              while (cVar1 = ures_hasNext_76_godot(local_198),cVar1 != '\0') {
                                 if (0 < *(int*)param_1) goto LAB_00100e98;
                                 lVar23 = ures_getNextResource_76_godot(local_198, lVar23, param_1);
                                 uVar15 = ures_getString_76_godot(lVar23, (StringPiece*)&local_d8, param_1);
                                 if (0 < *(int*)param_1) goto LAB_00100e98;
                                 sVar20 = psVar19[3];
                                 iVar3 = uprv_compareInvAscii_76_godot(0, sVar20, (int)psVar19[2], uVar15, local_d8 & 0xffffffff);
                                 if (iVar3 == 0) {
                                    pcVar13 = (char*)ures_getKey_76_godot(lVar23);
                                    piVar29 = gTypeAliasEntries;
                                    sVar16 = strlen(pcVar13);
                                    iVar3 = piVar29[4];
                                    if (iVar3 == *piVar29) {
                                       if (iVar3 == 8) {
                                          lVar17 = uprv_malloc_76_godot(0x100);
                                          if (lVar17 != 0) {
                                             lVar31 = 0x20;
                                             lVar24 = 0x100;
                                             LAB_001014d0:sVar20 = *(size_t*)( piVar29 + 2 );
                                             iVar30 = (int)lVar31;
                                             if (piVar29[4] < iVar3) {
                                                iVar3 = piVar29[4];
                                             }

                                             lVar26 = (long)iVar3;
                                             if (iVar30 < iVar3) {
                                                lVar26 = lVar31;
                                             }

                                             lVar17 = __memcpy_chk(lVar17, sVar20, lVar26 << 3, lVar24);
                                             cVar1 = (char)piVar29[5];
                                             joined_r0x0010150c:if (cVar1 != '\0') {
                                                uprv_free_76_godot(*(undefined8*)( piVar29 + 2 ));
                                             }

                                             *(long*)( piVar29 + 2 ) = lVar17;
                                             piVar29[4] = iVar30;
                                             *(undefined1*)( piVar29 + 5 ) = 1;
                                             goto LAB_00100e4a;
                                          }

                                       }
 else {
                                          iVar30 = iVar3 * 2;
                                          if (0 < iVar30) {
                                             lVar24 = (long)iVar30 << 3;
                                             lVar17 = uprv_malloc_76_godot(lVar24);
                                             if (lVar17 != 0) {
                                                lVar31 = (long)iVar30;
                                                if (iVar3 != 0) goto LAB_001014d0;
                                                cVar1 = (char)piVar29[5];
                                                goto joined_r0x0010150c;
                                             }

                                          }

                                       }

                                       psVar18 = (size_t*)0x0;
                                    }
 else {
                                       LAB_00100e4a:psVar18 = (size_t*)icu_76_godot::UMemory::operator_new((UMemory*)0x10, sVar20);
                                       if (psVar18 != (size_t*)0x0) {
                                          *psVar18 = sVar16;
                                          psVar18[1] = (size_t)pcVar13;
                                       }

                                       iVar3 = *piVar29;
                                       *piVar29 = iVar3 + 1;
                                       *(size_t**)( *(long*)( piVar29 + 2 ) + (long)iVar3 * 8 ) = psVar18;
                                    }

                                    uhash_put_76_godot(sVar10, psVar18, psVar19);
                                 }

                              }
;
                              if (0 < *(int*)param_1) goto LAB_00100e98;
                              if (lVar23 != 0) {
                                 ures_close_76_godot(lVar23);
                              }

                           }

                           icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)local_148);
                        }
 while ( true );
                     }

                     goto LAB_001007c7;
                  }

                  goto LAB_00100680;
               }

               goto LAB_0010068a;
            }

            gTypeAliasEntries = (int*)0x0;
         }

      }

   }

   *(undefined4*)param_1 = 7;
   goto LAB_0010069c;
   LAB_00100e98:if (lVar23 != 0) {
      ures_close_76_godot(lVar23);
   }

   LAB_00100ea8:icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)local_148);
   LAB_00100eb2:if (lVar12 != 0) {
      ures_close_76_godot(lVar12);
   }

   piVar29 = gLocExtKeyDataEntries;
   uVar9 = ( ulong ) * (uint*)param_1;
   if ((int)*(uint*)param_1 < 1) {
      iVar2 = gLocExtKeyDataEntries[4];
      if (iVar2 == *gLocExtKeyDataEntries) {
         if (iVar2 == 8) {
            lVar12 = uprv_malloc_76_godot(0x100);
            if (lVar12 != 0) {
               iVar3 = 0x20;
               LAB_00100f2d:uVar9 = *(ulong*)( piVar29 + 2 );
               if (piVar29[4] < iVar2) {
                  iVar2 = piVar29[4];
               }

               if (iVar3 < iVar2) {
                  iVar2 = iVar3;
               }

               __memcpy_chk(lVar12, uVar9, (long)iVar2 << 3);
               cVar1 = (char)piVar29[5];
               goto joined_r0x00100f5d;
            }

         }
 else {
            iVar3 = iVar2 * 2;
            if (( 0 < iVar3 ) && ( lVar12 = lVar12 != 0 )) {
               if (iVar2 != 0) goto LAB_00100f2d;
               cVar1 = (char)piVar29[5];
               joined_r0x00100f5d:if (cVar1 != '\0') {
                  uprv_free_76_godot(*(undefined8*)( piVar29 + 2 ));
               }

               *(long*)( piVar29 + 2 ) = lVar12;
               piVar29[4] = iVar3;
               *(undefined1*)( piVar29 + 5 ) = 1;
               goto LAB_00100f6f;
            }

         }

      }
 else {
         LAB_00100f6f:psVar19 = (size_t*)icu_76_godot::UMemory::operator_new((UMemory*)0x30, uVar9);
         if (psVar19 != (size_t*)0x0) {
            *(undefined4*)( psVar19 + 5 ) = 0;
            *(undefined1(*) [16])( psVar19 + 3 ) = (undefined1[16])0x0;
            *psVar19 = 0;
            psVar19[1] = 0;
            psVar19[2] = 0;
            iVar2 = *piVar29;
            *piVar29 = iVar2 + 1;
            *(size_t**)( *(long*)( piVar29 + 2 ) + (long)iVar2 * 8 ) = psVar19;
            sVar20 = strlen(local_158);
            psVar19[3] = (size_t)local_158;
            psVar19[2] = sVar20;
            sVar20 = strlen(pcVar27);
            psVar19[1] = (size_t)pcVar27;
            *psVar19 = sVar20;
            uVar15 = gLocExtKeyMap;
            *(uint*)( psVar19 + 5 ) = local_174;
            psVar19[4] = sVar10;
            uhash_put_76_godot(uVar15, psVar19, psVar19, param_1);
            if (local_158 != pcVar27) {
               uhash_put_76_godot(gLocExtKeyMap, psVar19 + 2, psVar19, param_1);
            }

            if (*(int*)param_1 < 1) {
               if (lVar25 != 0) {
                  ures_close_76_godot(lVar25);
               }

               if (local_198 != 0) {
                  ures_close_76_godot(local_198);
               }

               if (lVar22 != 0) {
                  ures_close_76_godot(lVar22);
               }

               icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)local_160);
               goto LAB_00100580;
            }

            goto LAB_001007c7;
         }

         iVar2 = *piVar29;
         *piVar29 = iVar2 + 1;
         *(undefined8*)( *(long*)( piVar29 + 2 ) + (long)iVar2 * 8 ) = 0;
      }

      *(undefined4*)param_1 = 7;
   }

   LAB_001007c7:if (lVar25 != 0) {
      ures_close_76_godot(lVar25);
   }

   if (local_198 != 0) {
      ures_close_76_godot(local_198);
   }

   if (lVar22 != 0) {
      ures_close_76_godot(lVar22);
   }

   LAB_00100680:icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)local_160);
   LAB_0010068a:if (local_150 != 0) {
      ures_close_76_godot(local_150);
   }

   LAB_0010069c:if (lVar8 != 0) {
      ures_close_76_godot(lVar8);
   }

   if (lVar7 != 0) {
      ures_close_76_godot(lVar7);
   }

   LAB_001003e8:if (lVar6 != 0) {
      ures_close_76_godot(lVar6);
   }

   if (lVar5 != 0) {
      ures_close_76_godot(lVar5);
   }

   if (lVar4 != 0) {
      ures_close_76_godot(lVar4);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ulocimp_toBcpKey_76_godot(std::basic_string_view<char, std::char_traits<char> >) */undefined8 *ulocimp_toBcpKey_76_godot(undefined8 *param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   char cVar3;
   long lVar4;
   long in_FS_OFFSET;
   undefined8 local_38;
   undefined8 local_30;
   int local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_24 = 0;
   local_38 = param_2;
   local_30 = param_3;
   if (gLocExtKeyMapInitOnce == 2) {
      LAB_00101b59:if (DAT_00101fbc < 1) goto LAB_00101bb7;
   }
 else {
      cVar3 = icu_76_godot::umtx_initImplPreInit((UInitOnce*)&gLocExtKeyMapInitOnce);
      if (cVar3 == '\0') goto LAB_00101b59;
      (anonymous_namespace)::initFromResourceBundle((UErrorCode*)&local_24);
      DAT_00101fbc = local_24;
      icu_76_godot::umtx_initImplPostInit((UInitOnce*)&gLocExtKeyMapInitOnce);
      LAB_00101bb7:if (local_24 < 1) {
         lVar4 = uhash_get_76_godot(gLocExtKeyMap, &local_38);
         if (lVar4 != 0) {
            uVar1 = *(undefined8*)( lVar4 + 0x10 );
            uVar2 = *(undefined8*)( lVar4 + 0x18 );
            *(undefined1*)( param_1 + 2 ) = 1;
            *param_1 = uVar1;
            param_1[1] = uVar2;
            goto LAB_00101b67;
         }

      }

   }

   *(undefined1*)( param_1 + 2 ) = 0;
   LAB_00101b67:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ulocimp_toLegacyKey_76_godot(std::basic_string_view<char, std::char_traits<char> >) */undefined8 *ulocimp_toLegacyKey_76_godot(undefined8 *param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   char cVar3;
   undefined8 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_38;
   undefined8 local_30;
   int local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_24 = 0;
   local_38 = param_2;
   local_30 = param_3;
   if (gLocExtKeyMapInitOnce == 2) {
      LAB_00101c29:if (DAT_00101fbc < 1) goto LAB_00101c87;
   }
 else {
      cVar3 = icu_76_godot::umtx_initImplPreInit((UInitOnce*)&gLocExtKeyMapInitOnce);
      if (cVar3 == '\0') goto LAB_00101c29;
      (anonymous_namespace)::initFromResourceBundle((UErrorCode*)&local_24);
      DAT_00101fbc = local_24;
      icu_76_godot::umtx_initImplPostInit((UInitOnce*)&gLocExtKeyMapInitOnce);
      LAB_00101c87:if (local_24 < 1) {
         puVar4 = (undefined8*)uhash_get_76_godot(gLocExtKeyMap, &local_38);
         if (puVar4 != (undefined8*)0x0) {
            uVar1 = *puVar4;
            uVar2 = puVar4[1];
            *(undefined1*)( param_1 + 2 ) = 1;
            *param_1 = uVar1;
            param_1[1] = uVar2;
            goto LAB_00101c37;
         }

      }

   }

   *(undefined1*)( param_1 + 2 ) = 0;
   LAB_00101c37:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ulocimp_toBcpType_76_godot(std::basic_string_view<char, std::char_traits<char> >,
   std::basic_string_view<char, std::char_traits<char> >) */undefined8 *ulocimp_toBcpType_76_godot(undefined8 *param_1, undefined8 param_2, undefined8 param_3, _anonymous_namespace_ *param_4, undefined8 param_5) {
   undefined8 uVar1;
   undefined8 uVar2;
   char cVar3;
   long lVar4;
   long lVar5;
   uint uVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   _anonymous_namespace_ *local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   undefined8 local_30;
   int local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_24 = 0;
   local_48 = param_4;
   uStack_40 = param_5;
   local_38 = param_2;
   local_30 = param_3;
   if (( gLocExtKeyMapInitOnce == 2 ) || ( cVar3 = icu_76_godot::umtx_initImplPreInit((UInitOnce*)&gLocExtKeyMapInitOnce) ),cVar3 == '\0') {
      if (DAT_00101fbc < 1) goto LAB_00101d5f;
   }
 else {
      (anonymous_namespace)::initFromResourceBundle((UErrorCode*)&local_24);
      DAT_00101fbc = local_24;
      icu_76_godot::umtx_initImplPostInit((UInitOnce*)&gLocExtKeyMapInitOnce);
      LAB_00101d5f:if (( local_24 < 1 ) && ( lVar4 = uhash_get_76_godot(gLocExtKeyMap, &local_38) ),lVar4 != 0) {
         lVar5 = uhash_get_76_godot(*(undefined8*)( lVar4 + 0x20 ), &local_48);
         if (lVar5 != 0) {
            uVar1 = *(undefined8*)( lVar5 + 0x10 );
            uVar2 = *(undefined8*)( lVar5 + 0x18 );
            *(undefined1*)( param_1 + 2 ) = 1;
            *param_1 = uVar1;
            param_1[1] = uVar2;
            goto LAB_00101d11;
         }

         uVar6 = *(uint*)( lVar4 + 0x28 );
         uVar7 = (ulong)uVar6;
         if (uVar6 != 0) {
            if (( ( uVar6 & 1 ) == 0 ) || ( cVar3 = (anonymous_namespace)::isSpecialTypeCodepoints(local_48, uStack_40) ),cVar3 == '\0') {
               uVar6 = (uint)uVar7;
               if (( uVar7 & 2 ) != 0) {
                  cVar3 = (anonymous_namespace)::isSpecialTypeReorderCode(local_48, uStack_40);
                  if (cVar3 != '\0') goto LAB_00101dcd;
                  uVar6 = *(uint*)( lVar4 + 0x28 );
               }

               if (( ( uVar6 & 4 ) == 0 ) || ( cVar3 = (anonymous_namespace)::isSpecialTypeRgKeyValue(local_48, uStack_40) ),cVar3 == '\0') goto LAB_00101d0d;
            }

            LAB_00101dcd:*(undefined1*)( param_1 + 2 ) = 1;
            *param_1 = local_48;
            param_1[1] = uStack_40;
            goto LAB_00101d11;
         }

      }

   }

   LAB_00101d0d:*(undefined1*)( param_1 + 2 ) = 0;
   LAB_00101d11:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* ulocimp_toLegacyType_76_godot(std::basic_string_view<char, std::char_traits<char> >,
   std::basic_string_view<char, std::char_traits<char> >) */undefined8 *ulocimp_toLegacyType_76_godot(undefined8 *param_1, undefined8 param_2, undefined8 param_3, _anonymous_namespace_ *param_4, undefined8 param_5) {
   undefined8 uVar1;
   undefined8 uVar2;
   char cVar3;
   long lVar4;
   undefined8 *puVar5;
   uint uVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   _anonymous_namespace_ *local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   undefined8 local_30;
   int local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_24 = 0;
   local_48 = param_4;
   uStack_40 = param_5;
   local_38 = param_2;
   local_30 = param_3;
   if (( gLocExtKeyMapInitOnce == 2 ) || ( cVar3 = icu_76_godot::umtx_initImplPreInit((UInitOnce*)&gLocExtKeyMapInitOnce) ),cVar3 == '\0') {
      if (DAT_00101fbc < 1) goto LAB_00101ecf;
   }
 else {
      (anonymous_namespace)::initFromResourceBundle((UErrorCode*)&local_24);
      DAT_00101fbc = local_24;
      icu_76_godot::umtx_initImplPostInit((UInitOnce*)&gLocExtKeyMapInitOnce);
      LAB_00101ecf:if (( local_24 < 1 ) && ( lVar4 = uhash_get_76_godot(gLocExtKeyMap, &local_38) ),lVar4 != 0) {
         puVar5 = (undefined8*)uhash_get_76_godot(*(undefined8*)( lVar4 + 0x20 ), &local_48);
         if (puVar5 != (undefined8*)0x0) {
            uVar1 = *puVar5;
            uVar2 = puVar5[1];
            *(undefined1*)( param_1 + 2 ) = 1;
            *param_1 = uVar1;
            param_1[1] = uVar2;
            goto LAB_00101e81;
         }

         uVar6 = *(uint*)( lVar4 + 0x28 );
         uVar7 = (ulong)uVar6;
         if (uVar6 != 0) {
            if (( ( uVar6 & 1 ) == 0 ) || ( cVar3 = (anonymous_namespace)::isSpecialTypeCodepoints(local_48, uStack_40) ),cVar3 == '\0') {
               uVar6 = (uint)uVar7;
               if (( uVar7 & 2 ) != 0) {
                  cVar3 = (anonymous_namespace)::isSpecialTypeReorderCode(local_48, uStack_40);
                  if (cVar3 != '\0') goto LAB_00101f3d;
                  uVar6 = *(uint*)( lVar4 + 0x28 );
               }

               if (( ( uVar6 & 4 ) == 0 ) || ( cVar3 = (anonymous_namespace)::isSpecialTypeRgKeyValue(local_48, uStack_40) ),cVar3 == '\0') goto LAB_00101e7d;
            }

            LAB_00101f3d:*(undefined1*)( param_1 + 2 ) = 1;
            *param_1 = local_48;
            param_1[1] = uStack_40;
            goto LAB_00101e81;
         }

      }

   }

   LAB_00101e7d:*(undefined1*)( param_1 + 2 ) = 0;
   LAB_00101e81:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
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
      LAB_0010230f:*param_2 = param_1;
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
         goto LAB_0010230f;
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

