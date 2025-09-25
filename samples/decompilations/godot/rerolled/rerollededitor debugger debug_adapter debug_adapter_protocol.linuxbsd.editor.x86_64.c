/* HashMap<ObjectID, int, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, int> > >::_lookup_pos(ObjectID const&, unsigned
   int&) const [clone .isra.0] */undefined8 HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>::_lookup_pos(HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>> *this, ObjectID *param_1, uint *param_2) {
   long lVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   ulong uVar10;
   uint uVar11;
   long lVar12;
   ulong uVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (*(long*)( this + 8 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar15 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 ));
      lVar1 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar10 = (long)param_1 * 0x3ffff - 1;
      uVar10 = ( uVar10 ^ uVar10 >> 0x1f ) * 0x15;
      uVar10 = ( uVar10 ^ uVar10 >> 0xb ) * 0x41;
      uVar10 = uVar10 >> 0x16 ^ uVar10;
      uVar13 = uVar10 & 0xffffffff;
      if ((int)uVar10 == 0) {
         uVar13 = 1;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar13 * lVar1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar15;
      lVar12 = SUB168(auVar2 * auVar6, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar12 * 4 );
      uVar11 = SUB164(auVar2 * auVar6, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( (uint)uVar13 == uVar14 ) && ( *(ObjectID**)( *(long*)( *(long*)( this + 8 ) + lVar12 * 8 ) + 0x10 ) == param_1 )) {
               *param_2 = uVar11;
               return 1;
            }

            uVar16 = uVar16 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(uVar11 + 1) * lVar1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar15;
            lVar12 = SUB168(auVar3 * auVar7, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar12 * 4 );
            uVar11 = SUB164(auVar3 * auVar7, 8);
            if (uVar14 == 0) {
               return 0;
            }

            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar14 * lVar1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 ) + uVar11 ) - SUB164(auVar4 * auVar8, 8)) * lVar1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar15;
         }
 while ( uVar16 <= SUB164(auVar5 * auVar9, 8) );
         return 0;
      }

   }

   return 0;
}
/* DebugAdapterProtocol::on_debug_output(String const&, int) */void DebugAdapterProtocol::on_debug_output(DebugAdapterProtocol *this, String *param_1, int param_2) {
   long lVar1;
   long *plVar2;
   Dictionary *this_00;
   undefined1(*pauVar3)[16];
   long *plVar4;
   long in_FS_OFFSET;
   Dictionary aDStack_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   DebugAdapterParser::ev_output(aDStack_38, *(undefined8*)( this + 0x178 ), param_1, param_2);
   if (*(undefined8**)( this + 0x180 ) != (undefined8*)0x0) {
      plVar4 = (long*)**(undefined8**)( this + 0x180 );
      while (plVar4 != (long*)0x0) {
         while (true) {
            lVar1 = *plVar4;
            if (*(long*)( lVar1 + 0x400198 ) == 0) {
               pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])( lVar1 + 0x400198 ) = pauVar3;
               *(undefined4*)pauVar3[1] = 0;
               *pauVar3 = (undefined1[16])0x0;
            }

            this_00 = (Dictionary*)operator_new(0x20, DefaultAllocator::alloc);
            Dictionary::Dictionary(this_00);
            *(undefined8*)( this_00 + 0x18 ) = 0;
            *(undefined1(*) [16])( this_00 + 8 ) = (undefined1[16])0x0;
            Dictionary::operator =(this_00, aDStack_38);
            plVar2 = *(long**)( lVar1 + 0x400198 );
            lVar1 = plVar2[1];
            *(undefined8*)( this_00 + 8 ) = 0;
            *(long**)( this_00 + 0x18 ) = plVar2;
            *(long*)( this_00 + 0x10 ) = lVar1;
            if (lVar1 != 0) {
               *(Dictionary**)( lVar1 + 8 ) = this_00;
            }

            plVar2[1] = (long)this_00;
            if (*plVar2 != 0) break;
            plVar4 = (long*)plVar4[1];
            *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
            *plVar2 = (long)this_00;
            if (plVar4 == (long*)0x0) goto LAB_0010022c;
         }
;
         plVar4 = (long*)plVar4[1];
         *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
      }
;
   }

   LAB_0010022c:Dictionary::~Dictionary(aDStack_38);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* DebugAdapterProtocol::~DebugAdapterProtocol() */void DebugAdapterProtocol::~DebugAdapterProtocol(DebugAdapterProtocol *this) {
   long *plVar1;
   uint uVar2;
   Object *pOVar3;
   void *pvVar4;
   long lVar5;
   char cVar6;
   long lVar7;
   long lVar8;
   long *plVar9;
   void *pvVar10;
   *(undefined***)this = &PTR__initialize_classv_0011e990;
   pOVar3 = *(Object**)( this + 0x178 );
   cVar6 = predelete_handler(pOVar3);
   if (cVar6 != '\0') {
      ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
      Memory::free_static(pOVar3, false);
   }

   pvVar10 = *(void**)( this + 0x2c0 );
   if (pvVar10 != (void*)0x0) {
      if (*(int*)( this + 0x2e4 ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x2e0 ) * 4 ) != 0) {
            memset(*(void**)( this + 0x2d8 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x2e0 ) * 4 ) * 4);
            if (*(int*)( this + 0x2e4 ) == 0) goto LAB_00100b10;
         }

         lVar8 = 0;
         do {
            plVar9 = (long*)( (long)pvVar10 + lVar8 * 8 );
            if (*plVar9 != 0) {
               LOCK();
               plVar1 = (long*)( *plVar9 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar7 = *plVar9;
                  *plVar9 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }

               pvVar10 = *(void**)( this + 0x2c0 );
            }

            lVar8 = lVar8 + 1;
         }
 while ( (uint)lVar8 < *(uint*)( this + 0x2e4 ) );
         *(undefined4*)( this + 0x2e4 ) = 0;
         if (pvVar10 == (void*)0x0) goto LAB_00100407;
      }

      LAB_00100b10:Memory::free_static(pvVar10, false);
      Memory::free_static(*(void**)( this + 0x2d0 ), false);
      Memory::free_static(*(void**)( this + 0x2c8 ), false);
      Memory::free_static(*(void**)( this + 0x2d8 ), false);
   }

   LAB_00100407:pvVar10 = *(void**)( this + 0x298 );
   if (pvVar10 != (void*)0x0) {
      if (*(int*)( this + 700 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x2b8 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 700 ) = 0;
            *(undefined1(*) [16])( this + 0x2a8 ) = (undefined1[16])0x0;
         }
 else {
            lVar8 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x2a0 ) + lVar8 ) != 0) {
                  pvVar10 = *(void**)( (long)pvVar10 + lVar8 * 2 );
                  *(int*)( *(long*)( this + 0x2a0 ) + lVar8 ) = 0;
                  for (int i = 0; i < 4; i++) {
                     if (*(long*)( (long)pvVar10 + ( -8*i + 40 ) ) != 0) {
                        LOCK();
                        plVar9 = (long*)( *(long*)( (long)pvVar10 + ( -8*i + 40 ) ) + -16 );
                        *plVar9 = *plVar9 + -1;
                        UNLOCK();
                        if (*plVar9 == 0) {
                           lVar7 = *(long*)( (long)pvVar10 + ( -8*i + 40 ) );
                           *(undefined8*)( (long)pvVar10 + ( -8*i + 40 ) ) = 0;
                           Memory::free_static((void*)( lVar7 + -16 ), false);
                        }

                     }

                  }

                  Memory::free_static(pvVar10, false);
                  pvVar10 = *(void**)( this + 0x298 );
                  *(undefined8*)( (long)pvVar10 + lVar8 * 2 ) = 0;
               }

               lVar8 = lVar8 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar8 );
            *(undefined4*)( this + 700 ) = 0;
            *(undefined1(*) [16])( this + 0x2a8 ) = (undefined1[16])0x0;
            if (pvVar10 == (void*)0x0) goto LAB_0010055b;
         }

      }

      Memory::free_static(pvVar10, false);
      Memory::free_static(*(void**)( this + 0x2a0 ), false);
   }

   LAB_0010055b:pvVar10 = *(void**)( this + 0x268 );
   if (pvVar10 != (void*)0x0) {
      if (*(int*)( this + 0x28c ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x288 ) * 4 ) != 0) {
            memset(*(void**)( this + 0x280 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x288 ) * 4 ) * 4);
         }

         *(undefined4*)( this + 0x28c ) = 0;
      }

      Memory::free_static(pvVar10, false);
      Memory::free_static(*(void**)( this + 0x278 ), false);
      Memory::free_static(*(void**)( this + 0x270 ), false);
      Memory::free_static(*(void**)( this + 0x280 ), false);
   }

   pvVar10 = *(void**)( this + 0x240 );
   if (pvVar10 != (void*)0x0) {
      if (*(int*)( this + 0x264 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x260 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x264 ) = 0;
            *(undefined1(*) [16])( this + 0x250 ) = (undefined1[16])0x0;
         }
 else {
            lVar8 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x248 ) + lVar8 ) != 0) {
                  *(int*)( *(long*)( this + 0x248 ) + lVar8 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar10 + lVar8 * 2 ), false);
                  pvVar10 = *(void**)( this + 0x240 );
                  *(undefined8*)( (long)pvVar10 + lVar8 * 2 ) = 0;
               }

               lVar8 = lVar8 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar8 );
            *(undefined4*)( this + 0x264 ) = 0;
            *(undefined1(*) [16])( this + 0x250 ) = (undefined1[16])0x0;
            if (pvVar10 == (void*)0x0) goto LAB_00100679;
         }

      }

      Memory::free_static(pvVar10, false);
      Memory::free_static(*(void**)( this + 0x248 ), false);
   }

   LAB_00100679:pvVar10 = *(void**)( this + 0x210 );
   if (pvVar10 != (void*)0x0) {
      if (*(int*)( this + 0x234 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x230 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x234 ) = 0;
            *(undefined1(*) [16])( this + 0x220 ) = (undefined1[16])0x0;
         }
 else {
            lVar8 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x218 ) + lVar8 ) != 0) {
                  pvVar10 = *(void**)( (long)pvVar10 + lVar8 * 2 );
                  *(int*)( *(long*)( this + 0x218 ) + lVar8 ) = 0;
                  Array::~Array((Array*)( (long)pvVar10 + 0x18 ));
                  Memory::free_static(pvVar10, false);
                  pvVar10 = *(void**)( this + 0x210 );
                  *(undefined8*)( (long)pvVar10 + lVar8 * 2 ) = 0;
               }

               lVar8 = lVar8 + 4;
            }
 while ( lVar8 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x234 ) = 0;
            *(undefined1(*) [16])( this + 0x220 ) = (undefined1[16])0x0;
            if (pvVar10 == (void*)0x0) goto LAB_00100725;
         }

      }

      Memory::free_static(pvVar10, false);
      Memory::free_static(*(void**)( this + 0x218 ), false);
   }

   LAB_00100725:pvVar10 = *(void**)( this + 0x1e0 );
   if (pvVar10 != (void*)0x0) {
      if (*(int*)( this + 0x204 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x200 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x204 ) = 0;
            *(undefined1(*) [16])( this + 0x1f0 ) = (undefined1[16])0x0;
         }
 else {
            lVar8 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x1e8 ) + lVar8 ) != 0) {
                  pvVar10 = *(void**)( (long)pvVar10 + lVar8 * 2 );
                  *(int*)( *(long*)( this + 0x1e8 ) + lVar8 ) = 0;
                  plVar9 = *(long**)( (long)pvVar10 + 0x40 );
                  if (plVar9 != (long*)0x0) {
                     do {
                        pvVar4 = (void*)*plVar9;
                        if (pvVar4 == (void*)0x0) {
                           if ((int)plVar9[2] != 0) {
                              _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                              goto LAB_00100802;
                           }

                           break;
                        }

                        if (plVar9 == *(long**)( (long)pvVar4 + 0x18 )) {
                           lVar7 = *(long*)( (long)pvVar4 + 8 );
                           lVar5 = *(long*)( (long)pvVar4 + 0x10 );
                           *plVar9 = lVar7;
                           if (pvVar4 == (void*)plVar9[1]) {
                              plVar9[1] = lVar5;
                           }

                           if (lVar5 != 0) {
                              *(long*)( lVar5 + 8 ) = lVar7;
                              lVar7 = *(long*)( (long)pvVar4 + 8 );
                           }

                           if (lVar7 != 0) {
                              *(long*)( lVar7 + 0x10 ) = lVar5;
                           }

                           Memory::free_static(pvVar4, false);
                           *(int*)( plVar9 + 2 ) = (int)plVar9[2] + -1;
                        }
 else {
                           _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                        }

                        plVar9 = *(long**)( (long)pvVar10 + 0x40 );
                     }
 while ( (int)plVar9[2] != 0 );
                     Memory::free_static(plVar9, false);
                  }

                  LAB_00100802:if (*(long*)( (long)pvVar10 + 0x30 ) != 0) {
                     LOCK();
                     plVar9 = (long*)( *(long*)( (long)pvVar10 + 0x30 ) + -0x10 );
                     *plVar9 = *plVar9 + -1;
                     UNLOCK();
                     if (*plVar9 == 0) {
                        lVar7 = *(long*)( (long)pvVar10 + 0x30 );
                        *(undefined8*)( (long)pvVar10 + 0x30 ) = 0;
                        Memory::free_static((void*)( lVar7 + -0x10 ), false);
                     }

                  }

                  if (*(long*)( (long)pvVar10 + 0x28 ) != 0) {
                     LOCK();
                     plVar9 = (long*)( *(long*)( (long)pvVar10 + 0x28 ) + -0x10 );
                     *plVar9 = *plVar9 + -1;
                     UNLOCK();
                     if (*plVar9 == 0) {
                        lVar7 = *(long*)( (long)pvVar10 + 0x28 );
                        *(undefined8*)( (long)pvVar10 + 0x28 ) = 0;
                        Memory::free_static((void*)( lVar7 + -0x10 ), false);
                     }

                  }

                  Array::~Array((Array*)( (long)pvVar10 + 0x20 ));
                  if (*(long*)( (long)pvVar10 + 0x18 ) != 0) {
                     LOCK();
                     plVar9 = (long*)( *(long*)( (long)pvVar10 + 0x18 ) + -0x10 );
                     *plVar9 = *plVar9 + -1;
                     UNLOCK();
                     if (*plVar9 == 0) {
                        lVar7 = *(long*)( (long)pvVar10 + 0x18 );
                        *(undefined8*)( (long)pvVar10 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar7 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar10, false);
                  pvVar10 = *(void**)( this + 0x1e0 );
                  *(undefined8*)( (long)pvVar10 + lVar8 * 2 ) = 0;
               }

               lVar8 = lVar8 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar8 );
            *(undefined4*)( this + 0x204 ) = 0;
            *(undefined1(*) [16])( this + 0x1f0 ) = (undefined1[16])0x0;
            if (pvVar10 == (void*)0x0) goto LAB_001008c7;
         }

      }

      Memory::free_static(pvVar10, false);
      Memory::free_static(*(void**)( this + 0x1e8 ), false);
   }

   LAB_001008c7:plVar9 = *(long**)( this + 0x1d0 );
   if (plVar9 != (long*)0x0) {
      do {
         pvVar10 = (void*)*plVar9;
         if (pvVar10 == (void*)0x0) {
            if ((int)plVar9[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_0010097c;
            }

            break;
         }

         if (*(long**)( (long)pvVar10 + 0x38 ) == plVar9) {
            lVar8 = *(long*)( (long)pvVar10 + 0x28 );
            lVar7 = *(long*)( (long)pvVar10 + 0x30 );
            *plVar9 = lVar8;
            if (pvVar10 == (void*)plVar9[1]) {
               plVar9[1] = lVar7;
            }

            if (lVar7 != 0) {
               *(long*)( lVar7 + 0x28 ) = lVar8;
               lVar8 = *(long*)( (long)pvVar10 + 0x28 );
            }

            if (lVar8 != 0) {
               *(long*)( lVar8 + 0x30 ) = lVar7;
            }

            if (*(long*)( (long)pvVar10 + 0x18 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( (long)pvVar10 + 0x18 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar8 = *(long*)( (long)pvVar10 + 0x18 );
                  *(undefined8*)( (long)pvVar10 + 0x18 ) = 0;
                  Memory::free_static((void*)( lVar8 + -0x10 ), false);
               }

            }

            if (*(long*)( (long)pvVar10 + 0x10 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( (long)pvVar10 + 0x10 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar8 = *(long*)( (long)pvVar10 + 0x10 );
                  *(undefined8*)( (long)pvVar10 + 0x10 ) = 0;
                  Memory::free_static((void*)( lVar8 + -0x10 ), false);
               }

            }

            Array::~Array((Array*)( (long)pvVar10 + 8 ));
            Memory::free_static(pvVar10, false);
            *(int*)( plVar9 + 2 ) = (int)plVar9[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar9 = *(long**)( this + 0x1d0 );
      }
 while ( (int)plVar9[2] != 0 );
      Memory::free_static(plVar9, false);
   }

   LAB_0010097c:if (*(long*)( this + 0x1b8 ) != 0) {
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
         pOVar3 = *(Object**)( this + 0x1b8 );
         cVar6 = predelete_handler(pOVar3);
         if (cVar6 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   if (*(long*)( this + 0x1b0 ) != 0) {
      LOCK();
      plVar9 = (long*)( *(long*)( this + 0x1b0 ) + -0x10 );
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
         lVar8 = *(long*)( this + 0x1b0 );
         *(undefined8*)( this + 0x1b0 ) = 0;
         Memory::free_static((void*)( lVar8 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x188 ) != 0) {
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
         pOVar3 = *(Object**)( this + 0x188 );
         cVar6 = predelete_handler(pOVar3);
         if (cVar6 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   plVar9 = *(long**)( this + 0x180 );
   if (plVar9 != (long*)0x0) {
      do {
         plVar1 = (long*)*plVar9;
         if (plVar1 == (long*)0x0) {
            if ((int)plVar9[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_00100a59;
            }

            break;
         }

         if ((long*)plVar1[3] == plVar9) {
            lVar8 = plVar1[1];
            lVar7 = plVar1[2];
            *plVar9 = lVar8;
            if (plVar1 == (long*)plVar9[1]) {
               plVar9[1] = lVar7;
            }

            if (lVar7 != 0) {
               *(long*)( lVar7 + 8 ) = lVar8;
               lVar8 = plVar1[1];
            }

            if (lVar8 != 0) {
               *(long*)( lVar8 + 0x10 ) = lVar7;
            }

            if (*plVar1 != 0) {
               cVar6 = RefCounted::unreference();
               if (cVar6 != '\0') {
                  pOVar3 = (Object*)*plVar1;
                  cVar6 = predelete_handler(pOVar3);
                  if (cVar6 != '\0') {
                     ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                     Memory::free_static(pOVar3, false);
                  }

               }

            }

            Memory::free_static(plVar1, false);
            *(int*)( plVar9 + 2 ) = (int)plVar9[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar9 = *(long**)( this + 0x180 );
      }
 while ( (int)plVar9[2] != 0 );
      Memory::free_static(plVar9, false);
   }

   LAB_00100a59:Object::~Object((Object*)this);
   return;
}
/* DebugAdapterProtocol::~DebugAdapterProtocol() */void DebugAdapterProtocol::~DebugAdapterProtocol(DebugAdapterProtocol *this) {
   ~DebugAdapterProtocol(this)
   ;;
   operator_delete(this, 0x2e8);
   return;
}
/* DAPeer::format_output(Dictionary const&) const */Dictionary *DAPeer::format_output(Dictionary *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   Dictionary *in_RDX;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_48, in_RDX);
   Variant::to_json_string();
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   local_68 = 0;
   local_50 = 0x10;
   local_58 = "Content-Length: ";
   String::parse_latin1((StrRange*)&local_68);
   String::utf8();
   itos((long)&local_58);
   String::operator +=((String*)&local_68, (String*)&local_58);
   pcVar3 = local_58;
   if (local_58 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = (char*)0x0;
         Memory::free_static(pcVar3 + -0x10, false);
      }

   }

   String::operator +=((String*)&local_68, "\r\n\r\n");
   String::operator +((String*)param_1, (String*)&local_68);
   lVar2 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

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

   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_70 + -0x10 ), false);
      }

   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* DAPeer::send_data() */int DAPeer::send_data(DAPeer *this) {
   undefined8 *puVar1;
   long lVar2;
   char cVar3;
   int iVar4;
   undefined8 uVar5;
   long lVar6;
   Variant *pVVar7;
   long *plVar8;
   int iVar9;
   Dictionary *this_00;
   code *pcVar10;
   long in_FS_OFFSET;
   Dictionary *pDVar11;
   int local_94;
   Dictionary local_90[8];
   long local_88;
   long local_80;
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar1 = *(undefined8**)( this + 0x400198 );
   joined_r0x00101022:if (( puVar1 == (undefined8*)0x0 ) || ( *(int*)( puVar1 + 2 ) == 0 )) {
      iVar4 = 0;
      LAB_00101250:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return iVar4;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   Dictionary::Dictionary(local_90, (Dictionary*)*puVar1);
   Variant::Variant((Variant*)local_58, "seq");
   cVar3 = Dictionary::has((Variant*)local_90);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (cVar3 == '\0') {
      iVar4 = *(int*)( this + 0x4001a0 );
      *(int*)( this + 0x4001a0 ) = iVar4 + 1;
      Variant::Variant((Variant*)local_58, iVar4 + 1);
      Variant::Variant((Variant*)local_78, "seq");
      pVVar7 = (Variant*)Dictionary::operator []((Variant*)local_90);
      if (pVVar7 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar7] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar7 = 0;
         *(int*)pVVar7 = local_58[0];
         *(undefined8*)( pVVar7 + 8 ) = local_50;
         *(undefined8*)( pVVar7 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   pDVar11 = (Dictionary*)&local_88;
   iVar9 = 0;
   format_output(pDVar11);
   do {
      if (local_88 == 0) {
         if (-1 < iVar9) {
            plVar8 = *(long**)( this + 0x400198 );
            if (( plVar8 == (long*)0x0 ) || ( this_00 = (Dictionary*)*plVar8 ),this_00 == (Dictionary*)0x0) goto LAB_001011e0;
            goto LAB_00101174;
         }

         plVar8 = *(long**)( this + 0x180 );
         iVar4 = 0;
         pcVar10 = *(code**)( *plVar8 + 0x158 );
      }
 else {
         iVar4 = (int)*(undefined8*)( local_88 + -8 );
         if (iVar4 == 0) {
            if (-1 < iVar9) break;
         }
 else if (iVar4 + -1 <= iVar9) break;
         plVar8 = *(long**)( this + 0x180 );
         pcVar10 = *(code**)( *plVar8 + 0x158 );
      }

      local_94 = 0;
      String::utf8();
      uVar5 = CharString::get_data();
      iVar4 = ( *pcVar10 )(plVar8, uVar5, ( iVar4 - iVar9 ) + -1, &local_94);
      lVar6 = local_80;
      if (local_80 != 0) {
         LOCK();
         plVar8 = (long*)( local_80 + -0x10 );
         *plVar8 = *plVar8 + -1;
         UNLOCK();
         if (*plVar8 == 0) {
            local_80 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

      lVar6 = local_88;
      if (iVar4 != 0) {
         if (local_88 != 0) {
            LOCK();
            plVar8 = (long*)( local_88 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_88 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

         Dictionary::~Dictionary(local_90);
         goto LAB_00101250;
      }

      iVar9 = iVar9 + local_94;
   }
 while ( true );
   plVar8 = *(long**)( this + 0x400198 );
   if (( plVar8 != (long*)0x0 ) && ( this_00 = (Dictionary*)*plVar8 ),this_00 != (Dictionary*)0x0) {
      LAB_00101174:if (plVar8 == *(long**)( this_00 + 0x18 )) {
         lVar6 = *(long*)( this_00 + 8 );
         lVar2 = *(long*)( this_00 + 0x10 );
         *plVar8 = lVar6;
         if ((Dictionary*)plVar8[1] == this_00) {
            plVar8[1] = lVar2;
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 8 ) = lVar6;
            lVar6 = *(long*)( this_00 + 8 );
         }

         if (lVar6 != 0) {
            *(long*)( lVar6 + 0x10 ) = lVar2;
         }

         Dictionary::~Dictionary(this_00);
         Memory::free_static(this_00, false);
         *(int*)( plVar8 + 2 ) = (int)plVar8[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0, pDVar11);
      }

      if (*(int*)( (long)*(void**)( this + 0x400198 ) + 0x10 ) == 0) {
         Memory::free_static(*(void**)( this + 0x400198 ), false);
         *(undefined8*)( this + 0x400198 ) = 0;
      }

      if (local_88 == 0) goto LAB_001011e0;
   }

   lVar6 = local_88;
   LOCK();
   plVar8 = (long*)( local_88 + -0x10 );
   *plVar8 = *plVar8 + -1;
   UNLOCK();
   if (*plVar8 == 0) {
      local_88 = 0;
      Memory::free_static((void*)( lVar6 + -0x10 ), false);
   }

   LAB_001011e0:Dictionary::~Dictionary(local_90);
   puVar1 = *(undefined8**)( this + 0x400198 );
   goto joined_r0x00101022;
}
/* DebugAdapterProtocol::on_client_connected() */undefined8 DebugAdapterProtocol::on_client_connected(DebugAdapterProtocol *this) {
   Object *pOVar1;
   long *plVar2;
   long lVar3;
   code *pcVar4;
   char cVar5;
   RefCounted *this_00;
   undefined8 *puVar6;
   bool *pbVar7;
   undefined1(*pauVar8)[16];
   undefined8 uVar9;
   long in_FS_OFFSET;
   Object *local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x180 ) != 0 ) && ( 7 < *(int*)( *(long*)( this + 0x180 ) + 0x10 ) )) {
      _err_print_error("on_client_connected", "editor/debugger/debug_adapter/debug_adapter_protocol.cpp", 0x95, "Condition \"clients.size() >= 8\" is true. Returning: FAILED", "Max client limits reached", 0, 0);
      uVar9 = 1;
      goto LAB_00101683;
   }

   TCPServer::take_connection();
   StreamPeerTCP::set_no_delay(SUB81(local_58, 0));
   this_00 = (RefCounted*)operator_new(0x4001c0, "");
   RefCounted::RefCounted(this_00);
   *(undefined8*)( this_00 + 0x180 ) = 0;
   *(undefined***)this_00 = &PTR__initialize_classv_0011e830;
   *(undefined2*)( this_00 + 0x4001b4 ) = 0;
   *(undefined4*)( this_00 + 0x400188 ) = 0;
   this_00[0x40018c] = (RefCounted)0x0;
   *(undefined4*)( this_00 + 0x400190 ) = 0;
   *(undefined8*)( this_00 + 0x400198 ) = 0;
   *(undefined4*)( this_00 + 0x4001a0 ) = 0;
   *(undefined8*)( this_00 + 0x4001a8 ) = 0;
   *(undefined4*)( this_00 + 0x4001b0 ) = 0;
   Dictionary::Dictionary((Dictionary*)( this_00 + 0x4001b8 ));
   postinitialize_handler((Object*)this_00);
   cVar5 = RefCounted::init_ref();
   if (cVar5 == '\0') {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   pOVar1 = *(Object**)( this_00 + 0x180 );
   if (local_58 != pOVar1) {
      *(Object**)( this_00 + 0x180 ) = local_58;
      if (( local_58 != (Object*)0x0 ) && ( cVar5 = cVar5 == '\0' )) {
         *(undefined8*)( this_00 + 0x180 ) = 0;
      }

      if (( ( pOVar1 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
      Memory::free_static(pOVar1, false);
   }

}
if (*(long*)( this + 0x180 ) == 0) {
   pauVar8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
   *(undefined1(**) [16])( this + 0x180 ) = pauVar8;
   *(undefined4*)pauVar8[1] = 0;
   *pauVar8 = (undefined1[16])0x0;
}
puVar6 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);puVar6[1] = 0;puVar6[2] = 0;puVar6[3] = 0;*puVar6 = this_00;cVar5 = RefCounted::reference();if (cVar5 == '\0') {
   *puVar6 = 0;
}
plVar2 = *(long**)( this + 0x180 );lVar3 = plVar2[1];puVar6[1] = 0;puVar6[3] = plVar2;puVar6[2] = lVar3;if (lVar3 != 0) {
   *(undefined8**)( lVar3 + 8 ) = puVar6;
}
plVar2[1] = (long)puVar6;if (*plVar2 == 0) {
   *plVar2 = (long)puVar6;
}
*(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;pbVar7 = (bool*)EditorDebuggerNode::get_default_debugger();local_48 = (char*)( (ulong)local_48 & 0xffffffffffffff00 );ScriptEditorDebugger::set_move_to_foreground(pbVar7);local_50 = 0;uVar9 = *(undefined8*)( EditorNode::singleton + 0x5d0 );local_40 = 0x16;local_48 = "[DAP] Connection Taken";String::parse_latin1((StrRange*)&local_50);EditorLog::add_message(uVar9, (StrRange*)&local_50, 4);lVar3 = local_50;if (local_50 == 0) {
   LAB_0010165f:cVar5 = RefCounted::unreference();
}
 else {
   LOCK();
   plVar2 = (long*)( local_50 + -0x10 );
   *plVar2 = *plVar2 + -1;
   UNLOCK();
   if (*plVar2 != 0) goto LAB_0010165f;
   local_50 = 0;
   Memory::free_static((void*)( lVar3 + -0x10 ), false);
   cVar5 = RefCounted::unreference();
}
if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler((Object*)this_00) ),cVar5 != '\0') {
   ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
   Memory::free_static(this_00, false);
}
if (( ( local_58 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_58 + 0x140 ))(local_58);Memory::free_static(local_58, false);}uVar9 = 0;LAB_00101683:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar9;}/* DebugAdapterProtocol::reset_current_info() */void DebugAdapterProtocol::reset_current_info(DebugAdapterProtocol *this) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   String::parse_latin1((StrRange*)( this + 0x1b0 ));
   if (*(long*)( this + 0x1b8 ) != 0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
         pOVar2 = *(Object**)( this + 0x1b8 );
         cVar3 = predelete_handler(pOVar2);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   *(undefined8*)( this + 0x1b8 ) = 0;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebugAdapterProtocol::reset_stack_info() */void DebugAdapterProtocol::reset_stack_info(DebugAdapterProtocol *this) {
   uint uVar1;
   void *pvVar2;
   void *pvVar3;
   long lVar4;
   long lVar5;
   long *plVar6;
   long lVar7;
   *(undefined8*)( this + 0x1c4 ) = _LC32;
   if (( *(long*)( this + 0x1e0 ) != 0 ) && ( *(int*)( this + 0x204 ) != 0 )) {
      lVar7 = 0;
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x200 ) * 4 );
      if (uVar1 != 0) {
         do {
            if (*(int*)( *(long*)( this + 0x1e8 ) + lVar7 ) != 0) {
               *(int*)( *(long*)( this + 0x1e8 ) + lVar7 ) = 0;
               pvVar2 = *(void**)( *(long*)( this + 0x1e0 ) + lVar7 * 2 );
               plVar6 = *(long**)( (long)pvVar2 + 0x40 );
               if (plVar6 != (long*)0x0) {
                  do {
                     pvVar3 = (void*)*plVar6;
                     if (pvVar3 == (void*)0x0) {
                        if ((int)plVar6[2] != 0) {
                           _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                           goto LAB_00101991;
                        }

                        break;
                     }

                     if (*(long**)( (long)pvVar3 + 0x18 ) == plVar6) {
                        lVar5 = *(long*)( (long)pvVar3 + 8 );
                        lVar4 = *(long*)( (long)pvVar3 + 0x10 );
                        *plVar6 = lVar5;
                        if (pvVar3 == (void*)plVar6[1]) {
                           plVar6[1] = lVar4;
                        }

                        if (lVar4 != 0) {
                           *(long*)( lVar4 + 8 ) = lVar5;
                           lVar5 = *(long*)( (long)pvVar3 + 8 );
                        }

                        if (lVar5 != 0) {
                           *(long*)( lVar5 + 0x10 ) = lVar4;
                        }

                        Memory::free_static(pvVar3, false);
                        *(int*)( plVar6 + 2 ) = (int)plVar6[2] + -1;
                     }
 else {
                        _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                     }

                     plVar6 = *(long**)( (long)pvVar2 + 0x40 );
                  }
 while ( (int)plVar6[2] != 0 );
                  Memory::free_static(plVar6, false);
               }

               LAB_00101991:if (*(long*)( (long)pvVar2 + 0x30 ) != 0) {
                  LOCK();
                  plVar6 = (long*)( *(long*)( (long)pvVar2 + 0x30 ) + -0x10 );
                  *plVar6 = *plVar6 + -1;
                  UNLOCK();
                  if (*plVar6 == 0) {
                     lVar5 = *(long*)( (long)pvVar2 + 0x30 );
                     *(undefined8*)( (long)pvVar2 + 0x30 ) = 0;
                     Memory::free_static((void*)( lVar5 + -0x10 ), false);
                  }

               }

               if (*(long*)( (long)pvVar2 + 0x28 ) != 0) {
                  LOCK();
                  plVar6 = (long*)( *(long*)( (long)pvVar2 + 0x28 ) + -0x10 );
                  *plVar6 = *plVar6 + -1;
                  UNLOCK();
                  if (*plVar6 == 0) {
                     lVar5 = *(long*)( (long)pvVar2 + 0x28 );
                     *(undefined8*)( (long)pvVar2 + 0x28 ) = 0;
                     Memory::free_static((void*)( lVar5 + -0x10 ), false);
                  }

               }

               Array::~Array((Array*)( (long)pvVar2 + 0x20 ));
               if (*(long*)( (long)pvVar2 + 0x18 ) != 0) {
                  LOCK();
                  plVar6 = (long*)( *(long*)( (long)pvVar2 + 0x18 ) + -0x10 );
                  *plVar6 = *plVar6 + -1;
                  UNLOCK();
                  if (*plVar6 == 0) {
                     lVar5 = *(long*)( (long)pvVar2 + 0x18 );
                     *(undefined8*)( (long)pvVar2 + 0x18 ) = 0;
                     Memory::free_static((void*)( lVar5 + -0x10 ), false);
                  }

               }

               Memory::free_static(pvVar2, false);
               *(undefined8*)( *(long*)( this + 0x1e0 ) + lVar7 * 2 ) = 0;
            }

            lVar7 = lVar7 + 4;
         }
 while ( (ulong)uVar1 << 2 != lVar7 );
      }

      *(undefined4*)( this + 0x204 ) = 0;
      *(undefined1(*) [16])( this + 0x1f0 ) = (undefined1[16])0x0;
   }

   if (( *(long*)( this + 0x210 ) != 0 ) && ( *(int*)( this + 0x234 ) != 0 )) {
      lVar7 = 0;
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x230 ) * 4 );
      if (uVar1 != 0) {
         do {
            if (*(int*)( *(long*)( this + 0x218 ) + lVar7 ) != 0) {
               *(int*)( *(long*)( this + 0x218 ) + lVar7 ) = 0;
               pvVar2 = *(void**)( *(long*)( this + 0x210 ) + lVar7 * 2 );
               Array::~Array((Array*)( (long)pvVar2 + 0x18 ));
               Memory::free_static(pvVar2, false);
               *(undefined8*)( *(long*)( this + 0x210 ) + lVar7 * 2 ) = 0;
            }

            lVar7 = lVar7 + 4;
         }
 while ( (ulong)uVar1 << 2 != lVar7 );
      }

      *(undefined4*)( this + 0x234 ) = 0;
      *(undefined1(*) [16])( this + 0x220 ) = (undefined1[16])0x0;
   }

   if (( *(long*)( this + 0x240 ) != 0 ) && ( *(int*)( this + 0x264 ) != 0 )) {
      lVar7 = 0;
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x260 ) * 4 );
      if (uVar1 != 0) {
         do {
            if (*(int*)( *(long*)( this + 0x248 ) + lVar7 ) != 0) {
               *(int*)( *(long*)( this + 0x248 ) + lVar7 ) = 0;
               Memory::free_static(*(void**)( *(long*)( this + 0x240 ) + lVar7 * 2 ), false);
               *(undefined8*)( *(long*)( this + 0x240 ) + lVar7 * 2 ) = 0;
            }

            lVar7 = lVar7 + 4;
         }
 while ( (ulong)uVar1 << 2 != lVar7 );
      }

      *(undefined4*)( this + 0x264 ) = 0;
      *(undefined1(*) [16])( this + 0x250 ) = (undefined1[16])0x0;
   }

   if (( *(long*)( this + 0x268 ) != 0 ) && ( *(int*)( this + 0x28c ) != 0 )) {
      if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x288 ) * 4 ) != 0) {
         memset(*(void**)( this + 0x280 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x288 ) * 4 ) * 4);
      }

      *(undefined4*)( this + 0x28c ) = 0;
   }

   return;
}
/* DebugAdapterProtocol::reset_ids() */void DebugAdapterProtocol::reset_ids(DebugAdapterProtocol *this) {
   long *plVar1;
   void *pvVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   plVar5 = *(long**)( this + 0x1d0 );
   *(undefined4*)( this + 0x1c0 ) = 0;
   if (plVar5 != (long*)0x0) {
      do {
         pvVar2 = (void*)*plVar5;
         if (pvVar2 == (void*)0x0) goto LAB_00101d2e;
         if (*(long**)( (long)pvVar2 + 0x38 ) == plVar5) {
            lVar4 = *(long*)( (long)pvVar2 + 0x28 );
            lVar3 = *(long*)( (long)pvVar2 + 0x30 );
            *plVar5 = lVar4;
            if (pvVar2 == (void*)plVar5[1]) {
               plVar5[1] = lVar3;
            }

            if (lVar3 != 0) {
               *(long*)( lVar3 + 0x28 ) = lVar4;
               lVar4 = *(long*)( (long)pvVar2 + 0x28 );
            }

            if (lVar4 != 0) {
               *(long*)( lVar4 + 0x30 ) = lVar3;
            }

            if (*(long*)( (long)pvVar2 + 0x18 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( (long)pvVar2 + 0x18 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar4 = *(long*)( (long)pvVar2 + 0x18 );
                  *(undefined8*)( (long)pvVar2 + 0x18 ) = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

            if (*(long*)( (long)pvVar2 + 0x10 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( (long)pvVar2 + 0x10 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar4 = *(long*)( (long)pvVar2 + 0x10 );
                  *(undefined8*)( (long)pvVar2 + 0x10 ) = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

            Array::~Array((Array*)( (long)pvVar2 + 8 ));
            Memory::free_static(pvVar2, false);
            *(int*)( plVar5 + 2 ) = (int)plVar5[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar5 = *(long**)( this + 0x1d0 );
      }
 while ( (int)plVar5[2] != 0 );
      Memory::free_static(plVar5, false);
      *(undefined8*)( this + 0x1d0 ) = 0;
   }

   LAB_00101d2e:reset_stack_info(this);
   return;
}
/* DebugAdapterProtocol::on_client_disconnected(Ref<DAPeer> const&) */void DebugAdapterProtocol::on_client_disconnected(DebugAdapterProtocol *this, Ref *param_1) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   undefined8 uVar5;
   Object *pOVar6;
   char cVar7;
   long lVar8;
   bool *pbVar9;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   plVar1 = *(long**)( this + 0x180 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar1 != (long*)0x0) {
      for (plVar2 = (long*)*plVar1; plVar2 != (long*)0x0; plVar2 = (long*)plVar2[1]) {
         lVar3 = *plVar2;
         if (*(long*)param_1 == lVar3) {
            if (plVar1 == (long*)plVar2[3]) {
               lVar8 = plVar2[1];
               if ((long*)*plVar1 == plVar2) {
                  *plVar1 = lVar8;
               }

               lVar4 = plVar2[2];
               if ((long*)plVar1[1] == plVar2) {
                  plVar1[1] = lVar4;
               }

               if (lVar4 != 0) {
                  *(long*)( lVar4 + 8 ) = lVar8;
                  lVar8 = plVar2[1];
               }

               if (lVar8 != 0) {
                  *(long*)( lVar8 + 0x10 ) = lVar4;
               }

               if (( lVar3 != 0 ) && ( cVar7 = cVar7 != '\0' )) {
                  pOVar6 = (Object*)*plVar2;
                  cVar7 = predelete_handler(pOVar6);
                  if (cVar7 != '\0') {
                     ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                     Memory::free_static(pOVar6, false);
                  }

               }

               Memory::free_static(plVar2, false);
               *(int*)( plVar1 + 2 ) = (int)plVar1[2] + -1;
            }
 else {
               _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
            }

            if (*(int*)( (long)*(void**)( this + 0x180 ) + 0x10 ) != 0) goto LAB_00101ec9;
            Memory::free_static(*(void**)( this + 0x180 ), false);
            *(undefined8*)( this + 0x180 ) = 0;
            goto LAB_00101ea0;
         }

      }

      if ((int)plVar1[2] != 0) goto LAB_00101ec9;
   }

   LAB_00101ea0:reset_ids(this);
   pbVar9 = (bool*)EditorDebuggerNode::get_default_debugger();
   local_48 = (char*)CONCAT71(local_48._1_7_, 1);
   ScriptEditorDebugger::set_move_to_foreground(pbVar9);
   LAB_00101ec9:local_50 = 0;
   uVar5 = *(undefined8*)( EditorNode::singleton + 0x5d0 );
   local_40 = 0x12;
   local_48 = "[DAP] Disconnected";
   String::parse_latin1((StrRange*)&local_50);
   EditorLog::add_message(uVar5, (StrRange*)&local_50, 4);
   lVar3 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebugAdapterProtocol::search_object_id(int) */undefined8 DebugAdapterProtocol::search_object_id(DebugAdapterProtocol *this, int param_1) {
   undefined8 *puVar1;
   puVar1 = *(undefined8**)( this + 0x250 );
   while (true) {
      if (puVar1 == (undefined8*)0x0) {
         return 0;
      }

      if (*(int*)( puVar1 + 3 ) == param_1) break;
      puVar1 = (undefined8*)*puVar1;
   }
;
   return puVar1[2];
}
/* DebugAdapterProtocol::notify_initialized() */void DebugAdapterProtocol::notify_initialized(DebugAdapterProtocol *this) {
   long lVar1;
   long *plVar2;
   Dictionary *this_00;
   undefined1(*pauVar3)[16];
   long in_FS_OFFSET;
   Dictionary aDStack_28[8];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   DebugAdapterParser::ev_initialized();
   lVar1 = *(long*)( this + 0x1b8 );
   if (*(long*)( lVar1 + 0x400198 ) == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])( lVar1 + 0x400198 ) = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   this_00 = (Dictionary*)operator_new(0x20, DefaultAllocator::alloc);
   Dictionary::Dictionary(this_00);
   *(undefined8*)( this_00 + 0x18 ) = 0;
   *(undefined1(*) [16])( this_00 + 8 ) = (undefined1[16])0x0;
   Dictionary::operator =(this_00, aDStack_28);
   plVar2 = *(long**)( lVar1 + 0x400198 );
   lVar1 = plVar2[1];
   *(undefined8*)( this_00 + 8 ) = 0;
   *(long**)( this_00 + 0x18 ) = plVar2;
   *(long*)( this_00 + 0x10 ) = lVar1;
   if (lVar1 != 0) {
      *(Dictionary**)( lVar1 + 8 ) = this_00;
   }

   plVar2[1] = (long)this_00;
   if (*plVar2 == 0) {
      *plVar2 = (long)this_00;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   Dictionary::~Dictionary(aDStack_28);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebugAdapterProtocol::notify_process() */void DebugAdapterProtocol::notify_process(DebugAdapterProtocol *this) {
   long lVar1;
   long *plVar2;
   Dictionary *this_00;
   undefined1(*pauVar3)[16];
   long *plVar4;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = "attach";
   local_50 = 0;
   if (*(char*)( *(long*)( this + 0x1b8 ) + 0x4001b5 ) == '\0') {
      local_48 = "launch";
   }

   local_40 = 6;
   String::parse_latin1((StrRange*)&local_50);
   DebugAdapterParser::ev_process((String*)&local_48);
   if (*(undefined8**)( this + 0x180 ) != (undefined8*)0x0) {
      plVar4 = (long*)**(undefined8**)( this + 0x180 );
      while (plVar4 != (long*)0x0) {
         while (true) {
            lVar1 = *plVar4;
            if (*(long*)( lVar1 + 0x400198 ) == 0) {
               pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])( lVar1 + 0x400198 ) = pauVar3;
               *(undefined4*)pauVar3[1] = 0;
               *pauVar3 = (undefined1[16])0x0;
            }

            this_00 = (Dictionary*)operator_new(0x20, DefaultAllocator::alloc);
            Dictionary::Dictionary(this_00);
            *(undefined8*)( this_00 + 0x18 ) = 0;
            *(undefined1(*) [16])( this_00 + 8 ) = (undefined1[16])0x0;
            Dictionary::operator =(this_00, (Dictionary*)&local_48);
            plVar2 = *(long**)( lVar1 + 0x400198 );
            lVar1 = plVar2[1];
            *(undefined8*)( this_00 + 8 ) = 0;
            *(long**)( this_00 + 0x18 ) = plVar2;
            *(long*)( this_00 + 0x10 ) = lVar1;
            if (lVar1 != 0) {
               *(Dictionary**)( lVar1 + 8 ) = this_00;
            }

            plVar2[1] = (long)this_00;
            if (*plVar2 != 0) break;
            plVar4 = (long*)plVar4[1];
            *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
            *plVar2 = (long)this_00;
            if (plVar4 == (long*)0x0) goto LAB_001022a4;
         }
;
         plVar4 = (long*)plVar4[1];
         *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
      }
;
   }

   LAB_001022a4:Dictionary::~Dictionary((Dictionary*)&local_48);
   lVar1 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar4 = (long*)( local_50 + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebugAdapterProtocol::notify_terminated() */void DebugAdapterProtocol::notify_terminated(DebugAdapterProtocol *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char cVar4;
   Dictionary *this_00;
   undefined1(*pauVar5)[16];
   long *plVar6;
   long in_FS_OFFSET;
   Dictionary aDStack_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   DebugAdapterParser::ev_terminated();
   if (( *(long**)( this + 0x180 ) != (long*)0x0 ) && ( plVar6 = (long*)**(long**)( this + 0x180 ) ),plVar6 != (long*)0x0) {
      do {
         cVar4 = String::operator ==((String*)( this + 0x1b0 ), "launch");
         if (( cVar4 == '\0' ) && ( cVar4 = String::operator ==((String*)( this + 0x1b0 ), "restart") ),cVar4 == '\0') {
            lVar2 = *plVar6;
            lVar3 = *(long*)( lVar2 + 0x400198 );
            joined_r0x001023a4:if (lVar3 == 0) {
               pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])( lVar2 + 0x400198 ) = pauVar5;
               *(undefined4*)pauVar5[1] = 0;
               *pauVar5 = (undefined1[16])0x0;
            }

            this_00 = (Dictionary*)operator_new(0x20, DefaultAllocator::alloc);
            Dictionary::Dictionary(this_00);
            *(undefined8*)( this_00 + 0x18 ) = 0;
            *(undefined1(*) [16])( this_00 + 8 ) = (undefined1[16])0x0;
            Dictionary::operator =(this_00, aDStack_48);
            plVar1 = *(long**)( lVar2 + 0x400198 );
            lVar2 = plVar1[1];
            *(undefined8*)( this_00 + 8 ) = 0;
            *(long**)( this_00 + 0x18 ) = plVar1;
            *(long*)( this_00 + 0x10 ) = lVar2;
            if (lVar2 != 0) {
               *(Dictionary**)( lVar2 + 8 ) = this_00;
            }

            plVar1[1] = (long)this_00;
            if (*plVar1 == 0) {
               *plVar1 = (long)this_00;
            }

            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
         }
 else {
            lVar2 = *plVar6;
            if (lVar2 != *(long*)( this + 0x1b8 )) {
               lVar3 = *(long*)( lVar2 + 0x400198 );
               goto joined_r0x001023a4;
            }

         }

         plVar6 = (long*)plVar6[1];
      }
 while ( plVar6 != (long*)0x0 );
   }

   Dictionary::~Dictionary(aDStack_48);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* DebugAdapterProtocol::notify_exited(int const&) */void DebugAdapterProtocol::notify_exited(int *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char cVar4;
   Dictionary *this;
   undefined1(*pauVar5)[16];
   long *plVar6;
   long in_FS_OFFSET;
   Dictionary aDStack_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   DebugAdapterParser::ev_exited((int*)aDStack_48);
   if (( *(long**)( param_1 + 0x60 ) != (long*)0x0 ) && ( plVar6 = (long*)**(long**)( param_1 + 0x60 ) ),plVar6 != (long*)0x0) {
      do {
         cVar4 = String::operator ==((String*)( param_1 + 0x6c ), "launch");
         if (( cVar4 == '\0' ) && ( cVar4 = String::operator ==((String*)( param_1 + 0x6c ), "restart") ),cVar4 == '\0') {
            lVar2 = *plVar6;
            lVar3 = *(long*)( lVar2 + 0x400198 );
            joined_r0x0010254c:if (lVar3 == 0) {
               pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])( lVar2 + 0x400198 ) = pauVar5;
               *(undefined4*)pauVar5[1] = 0;
               *pauVar5 = (undefined1[16])0x0;
            }

            this(Dictionary * operator_new(0x20, DefaultAllocator::alloc));
            Dictionary::Dictionary(this);
            *(undefined8*)( this + 0x18 ) = 0;
            *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
            Dictionary::operator =(this, aDStack_48);
            plVar1 = *(long**)( lVar2 + 0x400198 );
            lVar2 = plVar1[1];
            *(undefined8*)( this + 8 ) = 0;
            *(long**)( this + 0x18 ) = plVar1;
            *(long*)( this + 0x10 ) = lVar2;
            if (lVar2 != 0) {
               *(Dictionary**)( lVar2 + 8 ) = this;
            }

            plVar1[1] = (long)this;
            if (*plVar1 == 0) {
               *plVar1 = (long)this;
            }

            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
         }
 else {
            lVar2 = *plVar6;
            if (lVar2 != *(long*)( param_1 + 0x6e )) {
               lVar3 = *(long*)( lVar2 + 0x400198 );
               goto joined_r0x0010254c;
            }

         }

         plVar6 = (long*)plVar6[1];
      }
 while ( plVar6 != (long*)0x0 );
   }

   Dictionary::~Dictionary(aDStack_48);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* DebugAdapterProtocol::on_debug_stopped() */void DebugAdapterProtocol::on_debug_stopped(DebugAdapterProtocol *this) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   notify_exited((int*)this);
   notify_terminated(this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      reset_ids(this);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebugAdapterProtocol::notify_stopped_paused() */void DebugAdapterProtocol::notify_stopped_paused(DebugAdapterProtocol *this) {
   long lVar1;
   long *plVar2;
   Dictionary *this_00;
   undefined1(*pauVar3)[16];
   long *plVar4;
   long in_FS_OFFSET;
   Dictionary aDStack_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   DebugAdapterParser::ev_stopped_paused();
   if (*(undefined8**)( this + 0x180 ) != (undefined8*)0x0) {
      plVar4 = (long*)**(undefined8**)( this + 0x180 );
      while (plVar4 != (long*)0x0) {
         while (true) {
            lVar1 = *plVar4;
            if (*(long*)( lVar1 + 0x400198 ) == 0) {
               pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])( lVar1 + 0x400198 ) = pauVar3;
               *(undefined4*)pauVar3[1] = 0;
               *pauVar3 = (undefined1[16])0x0;
            }

            this_00 = (Dictionary*)operator_new(0x20, DefaultAllocator::alloc);
            Dictionary::Dictionary(this_00);
            *(undefined8*)( this_00 + 0x18 ) = 0;
            *(undefined1(*) [16])( this_00 + 8 ) = (undefined1[16])0x0;
            Dictionary::operator =(this_00, aDStack_38);
            plVar2 = *(long**)( lVar1 + 0x400198 );
            lVar1 = plVar2[1];
            *(undefined8*)( this_00 + 8 ) = 0;
            *(long**)( this_00 + 0x18 ) = plVar2;
            *(long*)( this_00 + 0x10 ) = lVar1;
            if (lVar1 != 0) {
               *(Dictionary**)( lVar1 + 8 ) = this_00;
            }

            plVar2[1] = (long)this_00;
            if (*plVar2 != 0) break;
            plVar4 = (long*)plVar4[1];
            *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
            *plVar2 = (long)this_00;
            if (plVar4 == (long*)0x0) goto LAB_001027dc;
         }
;
         plVar4 = (long*)plVar4[1];
         *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
      }
;
   }

   LAB_001027dc:Dictionary::~Dictionary(aDStack_38);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebugAdapterProtocol::notify_stopped_exception(String const&) */void DebugAdapterProtocol::notify_stopped_exception(String *param_1) {
   long lVar1;
   long *plVar2;
   Dictionary *this;
   undefined1(*pauVar3)[16];
   long *plVar4;
   long in_FS_OFFSET;
   String aSStack_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   DebugAdapterParser::ev_stopped_exception(aSStack_38);
   if (*(undefined8**)( param_1 + 0x180 ) != (undefined8*)0x0) {
      plVar4 = (long*)**(undefined8**)( param_1 + 0x180 );
      while (plVar4 != (long*)0x0) {
         while (true) {
            lVar1 = *plVar4;
            if (*(long*)( lVar1 + 0x400198 ) == 0) {
               pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])( lVar1 + 0x400198 ) = pauVar3;
               *(undefined4*)pauVar3[1] = 0;
               *pauVar3 = (undefined1[16])0x0;
            }

            this(Dictionary * operator_new(0x20, DefaultAllocator::alloc));
            Dictionary::Dictionary(this);
            *(undefined8*)( this + 0x18 ) = 0;
            *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
            Dictionary::operator =(this, (Dictionary*)aSStack_38);
            plVar2 = *(long**)( lVar1 + 0x400198 );
            lVar1 = plVar2[1];
            *(undefined8*)( this + 8 ) = 0;
            *(long**)( this + 0x18 ) = plVar2;
            *(long*)( this + 0x10 ) = lVar1;
            if (lVar1 != 0) {
               *(Dictionary**)( lVar1 + 8 ) = this;
            }

            plVar2[1] = (long)this;
            if (*plVar2 != 0) break;
            plVar4 = (long*)plVar4[1];
            *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
            *plVar2 = (long)this;
            if (plVar4 == (long*)0x0) goto LAB_0010293c;
         }
;
         plVar4 = (long*)plVar4[1];
         *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
      }
;
   }

   LAB_0010293c:Dictionary::~Dictionary((Dictionary*)aSStack_38);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebugAdapterProtocol::notify_stopped_breakpoint(int const&) */void DebugAdapterProtocol::notify_stopped_breakpoint(int *param_1) {
   long lVar1;
   long *plVar2;
   Dictionary *this;
   undefined1(*pauVar3)[16];
   long *plVar4;
   long in_FS_OFFSET;
   Dictionary aDStack_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   DebugAdapterParser::ev_stopped_breakpoint((int*)aDStack_38);
   if (*(undefined8**)( param_1 + 0x60 ) != (undefined8*)0x0) {
      plVar4 = (long*)**(undefined8**)( param_1 + 0x60 );
      while (plVar4 != (long*)0x0) {
         while (true) {
            lVar1 = *plVar4;
            if (*(long*)( lVar1 + 0x400198 ) == 0) {
               pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])( lVar1 + 0x400198 ) = pauVar3;
               *(undefined4*)pauVar3[1] = 0;
               *pauVar3 = (undefined1[16])0x0;
            }

            this(Dictionary * operator_new(0x20, DefaultAllocator::alloc));
            Dictionary::Dictionary(this);
            *(undefined8*)( this + 0x18 ) = 0;
            *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
            Dictionary::operator =(this, aDStack_38);
            plVar2 = *(long**)( lVar1 + 0x400198 );
            lVar1 = plVar2[1];
            *(undefined8*)( this + 8 ) = 0;
            *(long**)( this + 0x18 ) = plVar2;
            *(long*)( this + 0x10 ) = lVar1;
            if (lVar1 != 0) {
               *(Dictionary**)( lVar1 + 8 ) = this;
            }

            plVar2[1] = (long)this;
            if (*plVar2 != 0) break;
            plVar4 = (long*)plVar4[1];
            *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
            *plVar2 = (long)this;
            if (plVar4 == (long*)0x0) goto LAB_00102a9c;
         }
;
         plVar4 = (long*)plVar4[1];
         *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
      }
;
   }

   LAB_00102a9c:Dictionary::~Dictionary(aDStack_38);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebugAdapterProtocol::notify_stopped_step() */void DebugAdapterProtocol::notify_stopped_step(DebugAdapterProtocol *this) {
   long lVar1;
   long *plVar2;
   Dictionary *this_00;
   undefined1(*pauVar3)[16];
   long *plVar4;
   long in_FS_OFFSET;
   Dictionary aDStack_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   DebugAdapterParser::ev_stopped_step();
   if (*(undefined8**)( this + 0x180 ) != (undefined8*)0x0) {
      plVar4 = (long*)**(undefined8**)( this + 0x180 );
      while (plVar4 != (long*)0x0) {
         while (true) {
            lVar1 = *plVar4;
            if (*(long*)( lVar1 + 0x400198 ) == 0) {
               pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])( lVar1 + 0x400198 ) = pauVar3;
               *(undefined4*)pauVar3[1] = 0;
               *pauVar3 = (undefined1[16])0x0;
            }

            this_00 = (Dictionary*)operator_new(0x20, DefaultAllocator::alloc);
            Dictionary::Dictionary(this_00);
            *(undefined8*)( this_00 + 0x18 ) = 0;
            *(undefined1(*) [16])( this_00 + 8 ) = (undefined1[16])0x0;
            Dictionary::operator =(this_00, aDStack_38);
            plVar2 = *(long**)( lVar1 + 0x400198 );
            lVar1 = plVar2[1];
            *(undefined8*)( this_00 + 8 ) = 0;
            *(long**)( this_00 + 0x18 ) = plVar2;
            *(long*)( this_00 + 0x10 ) = lVar1;
            if (lVar1 != 0) {
               *(Dictionary**)( lVar1 + 8 ) = this_00;
            }

            plVar2[1] = (long)this_00;
            if (*plVar2 != 0) break;
            plVar4 = (long*)plVar4[1];
            *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
            *plVar2 = (long)this_00;
            if (plVar4 == (long*)0x0) goto LAB_00102bfc;
         }
;
         plVar4 = (long*)plVar4[1];
         *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
      }
;
   }

   LAB_00102bfc:Dictionary::~Dictionary(aDStack_38);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebugAdapterProtocol::notify_continued() */void DebugAdapterProtocol::notify_continued(DebugAdapterProtocol *this) {
   long lVar1;
   long *plVar2;
   char cVar3;
   Dictionary *this_00;
   undefined1(*pauVar4)[16];
   long *plVar5;
   long in_FS_OFFSET;
   Dictionary local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   DebugAdapterParser::ev_continued();
   if (( *(long**)( this + 0x180 ) != (long*)0x0 ) && ( plVar5 = (long*)**(long**)( this + 0x180 ) ),plVar5 != (long*)0x0) {
      do {
         cVar3 = String::operator ==((String*)( this + 0x1b0 ), "continue");
         lVar1 = *plVar5;
         if (( cVar3 == '\0' ) || ( *(long*)( this + 0x1b8 ) != lVar1 )) {
            if (*(long*)( lVar1 + 0x400198 ) == 0) {
               pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])( lVar1 + 0x400198 ) = pauVar4;
               *(undefined4*)pauVar4[1] = 0;
               *pauVar4 = (undefined1[16])0x0;
            }

            this_00 = (Dictionary*)operator_new(0x20, DefaultAllocator::alloc);
            Dictionary::Dictionary(this_00);
            *(undefined8*)( this_00 + 0x18 ) = 0;
            *(undefined1(*) [16])( this_00 + 8 ) = (undefined1[16])0x0;
            Dictionary::operator =(this_00, local_48);
            plVar2 = *(long**)( lVar1 + 0x400198 );
            lVar1 = plVar2[1];
            *(undefined8*)( this_00 + 8 ) = 0;
            *(long**)( this_00 + 0x18 ) = plVar2;
            *(long*)( this_00 + 0x10 ) = lVar1;
            if (lVar1 != 0) {
               *(Dictionary**)( lVar1 + 8 ) = this_00;
            }

            plVar2[1] = (long)this_00;
            if (*plVar2 == 0) {
               *plVar2 = (long)this_00;
            }

            *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
         }

         plVar5 = (long*)plVar5[1];
      }
 while ( plVar5 != (long*)0x0 );
   }

   reset_stack_info(this);
   Dictionary::~Dictionary(local_48);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebugAdapterProtocol::on_debug_paused() */void DebugAdapterProtocol::on_debug_paused(DebugAdapterProtocol *this) {
   long lVar1;
   long *plVar2;
   char cVar3;
   Dictionary *this_00;
   undefined1(*pauVar4)[16];
   long *plVar5;
   long in_FS_OFFSET;
   Dictionary aDStack_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar3 = BaseButton::is_pressed();
   if (cVar3 == '\0') {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         notify_continued(this);
         return;
      }

   }
 else {
      DebugAdapterParser::ev_stopped_paused();
      if (*(undefined8**)( this + 0x180 ) != (undefined8*)0x0) {
         plVar5 = (long*)**(undefined8**)( this + 0x180 );
         while (plVar5 != (long*)0x0) {
            while (true) {
               lVar1 = *plVar5;
               if (*(long*)( lVar1 + 0x400198 ) == 0) {
                  pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])( lVar1 + 0x400198 ) = pauVar4;
                  *(undefined4*)pauVar4[1] = 0;
                  *pauVar4 = (undefined1[16])0x0;
               }

               this_00 = (Dictionary*)operator_new(0x20, DefaultAllocator::alloc);
               Dictionary::Dictionary(this_00);
               *(undefined8*)( this_00 + 0x18 ) = 0;
               *(undefined1(*) [16])( this_00 + 8 ) = (undefined1[16])0x0;
               Dictionary::operator =(this_00, aDStack_38);
               plVar2 = *(long**)( lVar1 + 0x400198 );
               lVar1 = plVar2[1];
               *(undefined8*)( this_00 + 8 ) = 0;
               *(long**)( this_00 + 0x18 ) = plVar2;
               *(long*)( this_00 + 0x10 ) = lVar1;
               if (lVar1 != 0) {
                  *(Dictionary**)( lVar1 + 8 ) = this_00;
               }

               plVar2[1] = (long)this_00;
               if (*plVar2 != 0) break;
               plVar5 = (long*)plVar5[1];
               *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
               *plVar2 = (long)this_00;
               if (plVar5 == (long*)0x0) goto LAB_00102f04;
            }
;
            plVar5 = (long*)plVar5[1];
            *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
         }
;
      }

      LAB_00102f04:Dictionary::~Dictionary(aDStack_38);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebugAdapterProtocol::on_debug_breaked(bool const&, bool const&, String const&, bool const&) */void DebugAdapterProtocol::on_debug_breaked(DebugAdapterProtocol *this, bool *param_1, bool *param_2, String *param_3, bool *param_4) {
   long lVar1;
   long *plVar2;
   char cVar3;
   Dictionary *pDVar4;
   undefined1(*pauVar5)[16];
   long *plVar6;
   long in_FS_OFFSET;
   String local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_1 == false) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         notify_continued(this);
         return;
      }

   }
 else {
      cVar3 = String::operator ==(param_3, "Breakpoint");
      if (cVar3 == '\0') {
         DebugAdapterParser::ev_stopped_exception(local_48);
         if (*(undefined8**)( this + 0x180 ) != (undefined8*)0x0) {
            plVar6 = (long*)**(undefined8**)( this + 0x180 );
            while (plVar6 != (long*)0x0) {
               while (true) {
                  lVar1 = *plVar6;
                  if (*(long*)( lVar1 + 0x400198 ) == 0) {
                     pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                     *(undefined1(**) [16])( lVar1 + 0x400198 ) = pauVar5;
                     *(undefined4*)pauVar5[1] = 0;
                     *pauVar5 = (undefined1[16])0x0;
                  }

                  pDVar4 = (Dictionary*)operator_new(0x20, DefaultAllocator::alloc);
                  Dictionary::Dictionary(pDVar4);
                  *(undefined8*)( pDVar4 + 0x18 ) = 0;
                  *(undefined1(*) [16])( pDVar4 + 8 ) = (undefined1[16])0x0;
                  Dictionary::operator =(pDVar4, (Dictionary*)local_48);
                  plVar2 = *(long**)( lVar1 + 0x400198 );
                  lVar1 = plVar2[1];
                  *(undefined8*)( pDVar4 + 8 ) = 0;
                  *(long**)( pDVar4 + 0x18 ) = plVar2;
                  *(long*)( pDVar4 + 0x10 ) = lVar1;
                  if (lVar1 != 0) {
                     *(Dictionary**)( lVar1 + 8 ) = pDVar4;
                  }

                  plVar2[1] = (long)pDVar4;
                  if (*plVar2 != 0) break;
                  plVar6 = (long*)plVar6[1];
                  *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
                  *plVar2 = (long)pDVar4;
                  if (plVar6 == (long*)0x0) goto LAB_001030fb;
               }
;
               plVar6 = (long*)plVar6[1];
               *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
            }
;
         }

         LAB_001030fb:Dictionary::~Dictionary((Dictionary*)local_48);
      }
 else if (this[0x192] == (DebugAdapterProtocol)0x0) {
         this[0x191] = (DebugAdapterProtocol)0x1;
      }
 else {
         DebugAdapterParser::ev_stopped_step();
         if (*(undefined8**)( this + 0x180 ) != (undefined8*)0x0) {
            plVar6 = (long*)**(undefined8**)( this + 0x180 );
            while (plVar6 != (long*)0x0) {
               while (true) {
                  lVar1 = *plVar6;
                  if (*(long*)( lVar1 + 0x400198 ) == 0) {
                     pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                     *(undefined1(**) [16])( lVar1 + 0x400198 ) = pauVar5;
                     *(undefined4*)pauVar5[1] = 0;
                     *pauVar5 = (undefined1[16])0x0;
                  }

                  pDVar4 = (Dictionary*)operator_new(0x20, DefaultAllocator::alloc);
                  Dictionary::Dictionary(pDVar4);
                  *(undefined8*)( pDVar4 + 0x18 ) = 0;
                  *(undefined1(*) [16])( pDVar4 + 8 ) = (undefined1[16])0x0;
                  Dictionary::operator =(pDVar4, (Dictionary*)local_48);
                  plVar2 = *(long**)( lVar1 + 0x400198 );
                  lVar1 = plVar2[1];
                  *(undefined8*)( pDVar4 + 8 ) = 0;
                  *(long**)( pDVar4 + 0x18 ) = plVar2;
                  *(long*)( pDVar4 + 0x10 ) = lVar1;
                  if (lVar1 != 0) {
                     *(Dictionary**)( lVar1 + 8 ) = pDVar4;
                  }

                  plVar2[1] = (long)pDVar4;
                  if (*plVar2 != 0) break;
                  plVar6 = (long*)plVar6[1];
                  *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
                  *plVar2 = (long)pDVar4;
                  if (plVar6 == (long*)0x0) goto LAB_0010324b;
               }
;
               plVar6 = (long*)plVar6[1];
               *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
            }
;
         }

         LAB_0010324b:Dictionary::~Dictionary((Dictionary*)local_48);
         this[0x192] = (DebugAdapterProtocol)0x0;
      }

      this[0x193] = ( DebugAdapterProtocol ) * param_4;
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebugAdapterProtocol::notify_output(String const&, RemoteDebugger::MessageType) */void DebugAdapterProtocol::notify_output(DebugAdapterProtocol *this, undefined8 param_1, undefined4 param_3) {
   long lVar1;
   long *plVar2;
   Dictionary *this_00;
   undefined1(*pauVar3)[16];
   long *plVar4;
   long in_FS_OFFSET;
   Dictionary aDStack_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   DebugAdapterParser::ev_output(aDStack_38, *(undefined8*)( this + 0x178 ), param_1, param_3);
   if (*(undefined8**)( this + 0x180 ) != (undefined8*)0x0) {
      plVar4 = (long*)**(undefined8**)( this + 0x180 );
      while (plVar4 != (long*)0x0) {
         while (true) {
            lVar1 = *plVar4;
            if (*(long*)( lVar1 + 0x400198 ) == 0) {
               pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])( lVar1 + 0x400198 ) = pauVar3;
               *(undefined4*)pauVar3[1] = 0;
               *pauVar3 = (undefined1[16])0x0;
            }

            this_00 = (Dictionary*)operator_new(0x20, DefaultAllocator::alloc);
            Dictionary::Dictionary(this_00);
            *(undefined8*)( this_00 + 0x18 ) = 0;
            *(undefined1(*) [16])( this_00 + 8 ) = (undefined1[16])0x0;
            Dictionary::operator =(this_00, aDStack_38);
            plVar2 = *(long**)( lVar1 + 0x400198 );
            lVar1 = plVar2[1];
            *(undefined8*)( this_00 + 8 ) = 0;
            *(long**)( this_00 + 0x18 ) = plVar2;
            *(long*)( this_00 + 0x10 ) = lVar1;
            if (lVar1 != 0) {
               *(Dictionary**)( lVar1 + 8 ) = this_00;
            }

            plVar2[1] = (long)this_00;
            if (*plVar2 != 0) break;
            plVar4 = (long*)plVar4[1];
            *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
            *plVar2 = (long)this_00;
            if (plVar4 == (long*)0x0) goto LAB_0010338c;
         }
;
         plVar4 = (long*)plVar4[1];
         *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
      }
;
   }

   LAB_0010338c:Dictionary::~Dictionary(aDStack_38);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebugAdapterProtocol::notify_custom_data(String const&, Array const&) */void DebugAdapterProtocol::notify_custom_data(String *param_1, Array *param_2) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   char cVar4;
   Dictionary *this;
   undefined1(*pauVar5)[16];
   Object *pOVar6;
   long *plVar7;
   long in_FS_OFFSET;
   String local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   DebugAdapterParser::ev_custom_data(local_38, *(Array**)( param_1 + 0x178 ));
   if (*(undefined8**)( param_1 + 0x180 ) != (undefined8*)0x0) {
      for (plVar7 = (long*)**(undefined8**)( param_1 + 0x180 ); plVar7 != (long*)0x0; plVar7 = (long*)plVar7[1]) {
         while (true) {
            pOVar6 = (Object*)*plVar7;
            if (pOVar6 == (Object*)0x0) {
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               pOVar6 = (Object*)0x0;
            }

            if (pOVar6[0x4001b4] == (Object)0x0) {
               cVar4 = RefCounted::unreference();
            }
 else {
               if (*(long*)( pOVar6 + 0x400198 ) == 0) {
                  pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])( pOVar6 + 0x400198 ) = pauVar5;
                  *(undefined4*)pauVar5[1] = 0;
                  *pauVar5 = (undefined1[16])0x0;
               }

               this(Dictionary * operator_new(0x20, DefaultAllocator::alloc));
               Dictionary::Dictionary(this);
               *(undefined8*)( this + 0x18 ) = 0;
               *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
               Dictionary::operator =(this, (Dictionary*)local_38);
               plVar1 = *(long**)( pOVar6 + 0x400198 );
               lVar2 = plVar1[1];
               *(long**)( this + 0x18 ) = plVar1;
               *(undefined8*)( this + 8 ) = 0;
               *(long*)( this + 0x10 ) = lVar2;
               if (lVar2 != 0) {
                  *(Dictionary**)( lVar2 + 8 ) = this;
               }

               plVar1[1] = (long)this;
               if (*plVar1 == 0) {
                  *plVar1 = (long)this;
               }

               *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
               cVar4 = RefCounted::unreference();
            }

            if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) break;
            plVar7 = (long*)plVar7[1];
            if (plVar7 == (long*)0x0) goto LAB_00103560;
         }
;
         ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
         Memory::free_static(pOVar6, false);
      }

   }

   LAB_00103560:Dictionary::~Dictionary((Dictionary*)local_38);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* DebugAdapterProtocol::notify_breakpoint(DAP::Breakpoint const&, bool const&) */void DebugAdapterProtocol::notify_breakpoint(Breakpoint *param_1, bool *param_2) {
   long lVar1;
   long *plVar2;
   char cVar3;
   Dictionary *this;
   undefined1(*pauVar4)[16];
   long *plVar5;
   long in_FS_OFFSET;
   Breakpoint local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   DebugAdapterParser::ev_breakpoint(local_48, *(bool**)( param_1 + 0x178 ));
   if (( *(long**)( param_1 + 0x180 ) != (long*)0x0 ) && ( plVar5 = (long*)**(long**)( param_1 + 0x180 ) ),plVar5 != (long*)0x0) {
      do {
         cVar3 = String::operator ==((String*)( param_1 + 0x1b0 ), "setBreakpoints");
         lVar1 = *plVar5;
         if (( cVar3 == '\0' ) || ( *(long*)( param_1 + 0x1b8 ) != lVar1 )) {
            if (*(long*)( lVar1 + 0x400198 ) == 0) {
               pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])( lVar1 + 0x400198 ) = pauVar4;
               *(undefined4*)pauVar4[1] = 0;
               *pauVar4 = (undefined1[16])0x0;
            }

            this(Dictionary * operator_new(0x20, DefaultAllocator::alloc));
            Dictionary::Dictionary(this);
            *(undefined8*)( this + 0x18 ) = 0;
            *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
            Dictionary::operator =(this, (Dictionary*)local_48);
            plVar2 = *(long**)( lVar1 + 0x400198 );
            lVar1 = plVar2[1];
            *(undefined8*)( this + 8 ) = 0;
            *(long**)( this + 0x18 ) = plVar2;
            *(long*)( this + 0x10 ) = lVar1;
            if (lVar1 != 0) {
               *(Dictionary**)( lVar1 + 8 ) = this;
            }

            plVar2[1] = (long)this;
            if (*plVar2 == 0) {
               *plVar2 = (long)this;
            }

            *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
         }

         plVar5 = (long*)plVar5[1];
      }
 while ( plVar5 != (long*)0x0 );
   }

   Dictionary::~Dictionary((Dictionary*)local_48);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebugAdapterProtocol::update_breakpoints(String const&, Array const&) */String *DebugAdapterProtocol::update_breakpoints(String *param_1, Array *param_2) {
   long *plVar1;
   int *piVar2;
   code *pcVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined8 uVar8;
   ulong uVar9;
   char cVar10;
   int iVar11;
   String *pSVar12;
   Variant *pVVar13;
   Variant *in_RCX;
   CowData *in_RDX;
   long lVar14;
   undefined4 *puVar15;
   long in_FS_OFFSET;
   int local_104;
   Array local_c0[8];
   Dictionary local_b8[8];
   Dictionary local_b0[8];
   int local_a8;
   undefined1 local_a4;
   Array local_a0[8];
   undefined1 local_98[16];
   int local_88[4];
   int local_78[2];
   undefined8 local_70;
   undefined8 uStack_68;
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(local_c0);
   local_104 = 0;
   do {
      iVar11 = Array::size();
      if (iVar11 <= local_104) {
         if (( *(undefined8**)( param_2 + 0x1d0 ) != (undefined8*)0x0 ) && ( puVar15 = (undefined4*)**(undefined8**)( param_2 + 0x1d0 ) ),puVar15 != (undefined4*)0x0) {
            do {
               local_a8 = *puVar15;
               local_a4 = *(undefined1*)( puVar15 + 1 );
               Array::Array(local_a0, (Array*)( puVar15 + 2 ));
               auVar7._8_8_ = 0;
               auVar7._0_8_ = local_98._8_8_;
               local_98 = auVar7 << 0x40;
               uVar9 = 0;
               if (*(long*)( puVar15 + 4 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)local_98, (CowData*)( puVar15 + 4 ));
                  uVar9 = local_98._0_8_;
               }

               local_98._0_8_ = uVar9;
               local_98._8_8_ = 0;
               if (*(long*)( puVar15 + 6 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( local_98 + 8 ), (CowData*)( puVar15 + 6 ));
               }

               local_88[0] = puVar15[8];
               cVar10 = String::operator ==((String*)( local_98 + 8 ), (String*)in_RDX);
               if (cVar10 != '\0') {
                  Variant::Variant((Variant*)local_58, local_88[0]);
                  cVar10 = Array::has(in_RCX);
                  if (cVar10 == '\0') {
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     pSVar12 = (String*)EditorDebuggerNode::get_default_debugger();
                     local_b0[0] = (Dictionary)0x0;
                     ScriptEditorDebugger::_set_breakpoint(pSVar12, (int*)in_RDX, (bool*)local_88);
                  }
 else if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

               }

               uVar8 = local_98._8_8_;
               if (local_98._8_8_ != 0) {
                  LOCK();
                  plVar1 = (long*)( local_98._8_8_ + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_98._8_8_ = 0;
                     Memory::free_static((void*)( uVar8 + -0x10 ), false);
                  }

               }

               uVar8 = local_98._0_8_;
               if (local_98._0_8_ != 0) {
                  LOCK();
                  plVar1 = (long*)( local_98._0_8_ + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     auVar6._8_8_ = 0;
                     auVar6._0_8_ = local_98._8_8_;
                     local_98 = auVar6 << 0x40;
                     Memory::free_static((void*)( uVar8 + -0x10 ), false);
                  }

               }

               Array::~Array(local_a0);
               puVar15 = *(undefined4**)( puVar15 + 10 );
            }
 while ( puVar15 != (undefined4*)0x0 );
         }

         Array::Array((Array*)param_1, local_c0);
         LAB_00103e5e:Array::~Array(local_c0);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return param_1;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      pSVar12 = (String*)EditorDebuggerNode::get_default_debugger();
      local_b0[0] = (Dictionary)0x1;
      pVVar13 = (Variant*)Array::operator []((int)in_RCX);
      local_a8 = Variant::operator_cast_to_int(pVVar13);
      ScriptEditorDebugger::_set_breakpoint(pSVar12, (int*)in_RDX, (bool*)&local_a8);
      local_a4 = 0;
      local_a8 = 0;
      Array::Array(local_a0);
      local_98 = (undefined1[16])0x0;
      local_88[0] = 0;
      pVVar13 = (Variant*)Array::operator []((int)in_RCX);
      local_88[0] = Variant::operator_cast_to_int(pVVar13);
      if (local_98._8_8_ != *(long*)in_RDX) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( local_98 + 8 ), in_RDX);
      }

      if (( *(long**)( param_2 + 0x1d0 ) == (long*)0x0 ) || ( lVar14 = lVar14 == 0 )) {
         LAB_00103dd0:_err_print_error("update_breakpoints", "editor/debugger/debug_adapter/debug_adapter_protocol.cpp", 0x3f1, "Condition \"!breakpoint_list.find(breakpoint)\" is true. Returning: Array()", 0, 0);
         Array::Array((Array*)param_1);
         uVar8 = local_98._8_8_;
         if (local_98._8_8_ != 0) {
            LOCK();
            plVar1 = (long*)( local_98._8_8_ + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_98._8_8_ = 0;
               Memory::free_static((void*)( uVar8 + -0x10 ), false);
            }

         }

         if (local_98._0_8_ != 0) {
            LOCK();
            plVar1 = (long*)( local_98._0_8_ - 0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               uVar8 = local_98._0_8_;
               auVar5._8_8_ = 0;
               auVar5._0_8_ = local_98._8_8_;
               local_98 = auVar5 << 0x40;
               Memory::free_static((void*)( uVar8 + -0x10 ), false);
            }

         }

         Array::~Array(local_a0);
         goto LAB_00103e5e;
      }

      while (( cVar10 = String::operator ==((String*)( lVar14 + 0x18 ), (String*)( local_98 + 8 )) ),cVar10 == '\0' || ( *(int*)( lVar14 + 0x20 ) != local_88[0] )) {
         lVar14 = *(long*)( lVar14 + 0x28 );
         if (lVar14 == 0) goto LAB_00103dd0;
      }
;
      if (*(undefined8**)( param_2 + 0x1d0 ) == (undefined8*)0x0) {
         LAB_0010420e:Dictionary::Dictionary(local_b8);
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      piVar2 = (int*)**(undefined8**)( param_2 + 0x1d0 );
      while (true) {
         if (piVar2 == (int*)0x0) goto LAB_0010420e;
         cVar10 = String::operator ==((String*)( piVar2 + 6 ), (String*)( local_98 + 8 ));
         if (( cVar10 != '\0' ) && ( piVar2[8] == local_88[0] )) break;
         piVar2 = *(int**)( piVar2 + 10 );
      }
;
      Dictionary::Dictionary(local_b8);
      Variant::Variant((Variant*)local_58, *piVar2);
      Variant::Variant((Variant*)local_78, "id");
      pVVar13 = (Variant*)Dictionary::operator []((Variant*)local_b8);
      if (pVVar13 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar13] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar13 = 0;
         *(int*)pVVar13 = local_58[0];
         *(undefined8*)( pVVar13 + 8 ) = local_50;
         *(undefined8*)( pVVar13 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] == '\0') {
         cVar10 = Variant::needs_deinit[local_58[0]];
      }
 else {
         Variant::_clear_internal();
         cVar10 = Variant::needs_deinit[local_58[0]];
      }

      if (cVar10 != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, SUB41(piVar2[1], 0));
      Variant::Variant((Variant*)local_78, "verified");
      pVVar13 = (Variant*)Dictionary::operator []((Variant*)local_b8);
      if (pVVar13 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar13] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar13 = 0;
         *(int*)pVVar13 = local_58[0];
         *(undefined8*)( pVVar13 + 8 ) = local_50;
         *(undefined8*)( pVVar13 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Dictionary::Dictionary(local_b0);
      Variant::Variant((Variant*)local_78, (String*)( piVar2 + 4 ));
      Variant::Variant((Variant*)local_58, "name");
      pVVar13 = (Variant*)Dictionary::operator []((Variant*)local_b0);
      if (pVVar13 != (Variant*)local_78) {
         if (Variant::needs_deinit[*(int*)pVVar13] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar13 = 0;
         *(int*)pVVar13 = local_78[0];
         *(undefined8*)( pVVar13 + 8 ) = local_70;
         *(undefined8*)( pVVar13 + 0x10 ) = uStack_68;
         local_78[0] = 0;
      }

      if (Variant::needs_deinit[local_58[0]] == '\0') {
         cVar10 = Variant::needs_deinit[local_78[0]];
      }
 else {
         Variant::_clear_internal();
         cVar10 = Variant::needs_deinit[local_78[0]];
      }

      if (cVar10 != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_78, (String*)( piVar2 + 6 ));
      Variant::Variant((Variant*)local_58, "path");
      pVVar13 = (Variant*)Dictionary::operator []((Variant*)local_b0);
      if (pVVar13 != (Variant*)local_78) {
         if (Variant::needs_deinit[*(int*)pVVar13] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar13 = 0;
         *(int*)pVVar13 = local_78[0];
         *(undefined8*)( pVVar13 + 8 ) = local_70;
         *(undefined8*)( pVVar13 + 0x10 ) = uStack_68;
         local_78[0] = 0;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_78, (Array*)( piVar2 + 2 ));
      Variant::Variant((Variant*)local_58, "checksums");
      pVVar13 = (Variant*)Dictionary::operator []((Variant*)local_b0);
      if (pVVar13 != (Variant*)local_78) {
         if (Variant::needs_deinit[*(int*)pVVar13] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar13 = 0;
         *(int*)pVVar13 = local_78[0];
         *(undefined8*)( pVVar13 + 8 ) = local_70;
         *(undefined8*)( pVVar13 + 0x10 ) = uStack_68;
         local_78[0] = 0;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, local_b0);
      Variant::Variant((Variant*)local_78, "source");
      pVVar13 = (Variant*)Dictionary::operator []((Variant*)local_b8);
      if (pVVar13 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar13] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar13 = 0;
         *(int*)pVVar13 = local_58[0];
         *(undefined8*)( pVVar13 + 8 ) = local_50;
         *(undefined8*)( pVVar13 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Dictionary::~Dictionary(local_b0);
      Variant::Variant((Variant*)local_58, piVar2[8]);
      Variant::Variant((Variant*)local_78, "line");
      pVVar13 = (Variant*)Dictionary::operator []((Variant*)local_b8);
      if (pVVar13 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar13] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar13 = 0;
         *(int*)pVVar13 = local_58[0];
         *(undefined8*)( pVVar13 + 8 ) = local_50;
         *(undefined8*)( pVVar13 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, local_b8);
      Array::push_back((Variant*)local_c0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Dictionary::~Dictionary(local_b8);
      uVar8 = local_98._8_8_;
      if (local_98._8_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_98._8_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98._8_8_ = 0;
            Memory::free_static((void*)( uVar8 + -0x10 ), false);
         }

      }

      uVar8 = local_98._0_8_;
      if (local_98._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_98._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_98._8_8_;
            local_98 = auVar4 << 0x40;
            Memory::free_static((void*)( uVar8 + -0x10 ), false);
         }

      }

      Array::~Array(local_a0);
      local_104 = local_104 + 1;
   }
 while ( true );
}
/* DebugAdapterProtocol::start(int, IPAddress const&) */void DebugAdapterProtocol::start(int param_1, IPAddress *param_2) {
   long *plVar1;
   long lVar2;
   bool bVar3;
   ulong uVar4;
   undefined4 in_register_0000003c;
   long lVar5;
   long in_FS_OFFSET;
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   lVar5 = CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   local_68 = "network/debug_adapter/request_timeout";
   local_60 = 0x25;
   String::parse_latin1((StrRange*)&local_70);
   _EDITOR_GET((String*)local_58);
   uVar4 = Variant::operator_cast_to_unsigned_long((Variant*)local_58);
   *(ulong*)( lVar5 + 0x1a0 ) = uVar4;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
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

   local_70 = 0;
   local_68 = "network/debug_adapter/sync_breakpoints";
   local_60 = 0x26;
   String::parse_latin1((StrRange*)&local_70);
   _EDITOR_GET((String*)local_58);
   bVar3 = Variant::operator_cast_to_bool((Variant*)local_58);
   *(bool*)( lVar5 + 0x1a8 ) = bVar3;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
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

   *(undefined1*)( lVar5 + 400 ) = 1;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      TCPServer::listen(( ushort ) * (undefined8*)( lVar5 + 0x188 ), (IPAddress*)( (ulong)param_2 & 0xffff ));
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebugAdapterProtocol::stop() */void DebugAdapterProtocol::stop(DebugAdapterProtocol *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   long lVar5;
   long *plVar6;
   plVar6 = *(long**)( this + 0x180 );
   if (plVar6 != (long*)0x0) {
      lVar5 = *plVar6;
      if (lVar5 != 0) {
         do {
            StreamPeerTCP::disconnect_from_host();
            lVar5 = *(long*)( lVar5 + 8 );
         }
 while ( lVar5 != 0 );
         plVar6 = *(long**)( this + 0x180 );
      }

      if (plVar6 != (long*)0x0) {
         do {
            plVar1 = (long*)*plVar6;
            if (plVar1 == (long*)0x0) goto LAB_001044d0;
            if ((long*)plVar1[3] == plVar6) {
               lVar5 = plVar1[1];
               lVar2 = plVar1[2];
               *plVar6 = lVar5;
               if (plVar1 == (long*)plVar6[1]) {
                  plVar6[1] = lVar2;
               }

               if (lVar2 != 0) {
                  *(long*)( lVar2 + 8 ) = lVar5;
                  lVar5 = plVar1[1];
               }

               if (lVar5 != 0) {
                  *(long*)( lVar5 + 0x10 ) = lVar2;
               }

               if (( *plVar1 != 0 ) && ( cVar4 = cVar4 != '\0' )) {
                  pOVar3 = (Object*)*plVar1;
                  cVar4 = predelete_handler(pOVar3);
                  if (cVar4 != '\0') {
                     ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                     Memory::free_static(pOVar3, false);
                  }

               }

               Memory::free_static(plVar1, false);
               *(int*)( plVar6 + 2 ) = (int)plVar6[2] + -1;
            }
 else {
               _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
            }

            plVar6 = *(long**)( this + 0x180 );
         }
 while ( (int)plVar6[2] != 0 );
         Memory::free_static(plVar6, false);
         *(undefined8*)( this + 0x180 ) = 0;
      }

   }

   LAB_001044d0:TCPServer::stop();
   this[400] = (DebugAdapterProtocol)0x0;
   return;
}
/* DebugAdapterProtocol::request_remote_evaluate(String const&, int) */undefined8 DebugAdapterProtocol::request_remote_evaluate(String *param_1, int param_2) {
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
   char cVar11;
   uint uVar12;
   String *pSVar13;
   undefined8 uVar14;
   ulong uVar15;
   int iVar16;
   long lVar17;
   undefined4 in_register_00000034;
   long lVar18;
   ulong uVar19;
   uint uVar20;
   long in_FS_OFFSET;
   String local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( param_1 + 0x2c0 ) != 0 ) && ( *(int*)( param_1 + 0x2e4 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x2e0 ) * 4 );
      uVar19 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x2e0 ) * 8 );
      uVar12 = String::hash();
      lVar18 = *(long*)( param_1 + 0x2d8 );
      uVar15 = 1;
      if (uVar12 != 0) {
         uVar15 = (ulong)uVar12;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar15 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar19;
      lVar17 = SUB168(auVar3 * auVar7, 8);
      uVar12 = *(uint*)( lVar18 + lVar17 * 4 );
      iVar16 = SUB164(auVar3 * auVar7, 8);
      if (uVar12 != 0) {
         uVar20 = 0;
         do {
            if ((uint)uVar15 == uVar12) {
               cVar11 = String::operator ==((String*)( *(long*)( param_1 + 0x2c0 ) + ( ulong ) * (uint*)( *(long*)( param_1 + 0x2c8 ) + lVar17 * 4 ) * 8 ), (String*)CONCAT44(in_register_00000034, param_2));
               if (cVar11 != '\0') {
                  uVar14 = 0;
                  goto LAB_001045e4;
               }

               lVar18 = *(long*)( param_1 + 0x2d8 );
            }

            uVar20 = uVar20 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar16 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar19;
            lVar17 = SUB168(auVar4 * auVar8, 8);
            uVar12 = *(uint*)( lVar18 + lVar17 * 4 );
            iVar16 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar12 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar12 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar19,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar16 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar19,uVar20 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   pSVar13 = (String*)EditorDebuggerNode::get_default_debugger();
   ScriptEditorDebugger::request_remote_evaluate(pSVar13, param_2);
   HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert(local_58);
   uVar14 = 1;
   LAB_001045e4:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar14;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebugAdapterProtocol::request_remote_object(ObjectID const&) */undefined8 DebugAdapterProtocol::request_remote_object(DebugAdapterProtocol *this, ObjectID *param_1) {
   long lVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   ulong uVar10;
   undefined8 uVar11;
   int iVar12;
   long lVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   ulong uVar17;
   long in_FS_OFFSET;
   ObjectID local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x268 ) != 0 ) && ( *(int*)( this + 0x28c ) != 0 )) {
      uVar15 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x288 ) * 4 ));
      lVar1 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x288 ) * 8 );
      uVar10 = *(long*)param_1 * 0x3ffff - 1;
      uVar10 = ( uVar10 ^ uVar10 >> 0x1f ) * 0x15;
      uVar10 = ( uVar10 ^ uVar10 >> 0xb ) * 0x41;
      uVar10 = uVar10 >> 0x16 ^ uVar10;
      uVar17 = uVar10 & 0xffffffff;
      if ((int)uVar10 == 0) {
         uVar17 = 1;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar17 * lVar1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar15;
      lVar13 = SUB168(auVar2 * auVar6, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x280 ) + lVar13 * 4 );
      iVar12 = SUB164(auVar2 * auVar6, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( (uint)uVar17 == uVar14 ) && ( *(long*)param_1 == *(long*)( *(long*)( this + 0x268 ) + ( ulong ) * (uint*)( *(long*)( this + 0x270 ) + lVar13 * 4 ) * 8 ) )) {
               uVar11 = 0;
               goto LAB_001048b1;
            }

            uVar16 = uVar16 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(iVar12 + 1) * lVar1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar15;
            lVar13 = SUB168(auVar3 * auVar7, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x280 ) + lVar13 * 4 );
            iVar12 = SUB164(auVar3 * auVar7, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar14 * lVar1,auVar8._8_8_ = 0,auVar8._0_8_ = uVar15,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x288 ) * 4 ) + iVar12 ) - SUB164(auVar4 * auVar8, 8)) * lVar1,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,uVar16 <= SUB164(auVar5 * auVar9, 8) );
      }

   }

   uVar11 = EditorDebuggerNode::get_default_debugger();
   ScriptEditorDebugger::request_remote_object(uVar11, *(undefined8*)param_1);
   HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::insert(local_58);
   uVar11 = 1;
   LAB_001048b1:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar11;
}
/* DebugAdapterProtocol::DebugAdapterProtocol() */void DebugAdapterProtocol::DebugAdapterProtocol(DebugAdapterProtocol *this) {
   code *pcVar1;
   undefined8 uVar2;
   char cVar3;
   TCPServer *this_00;
   Object *pOVar4;
   CallableCustom *pCVar5;
   long *plVar6;
   Object *pOVar7;
   long in_FS_OFFSET;
   long local_60;
   DebugAdapterProtocol local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Object::Object((Object*)this);
   *(undefined***)this = &PTR__initialize_classv_0011e990;
   uVar2 = _LC60;
   *(undefined8*)( this + 0x188 ) = 0;
   *(undefined4*)( this + 400 ) = 0;
   *(undefined8*)( this + 0x194 ) = 0;
   *(undefined8*)( this + 0x1a0 ) = 5000;
   this[0x1a8] = (DebugAdapterProtocol)0x0;
   *(undefined8*)( this + 0x1c0 ) = 0;
   *(undefined4*)( this + 0x1c8 ) = 0;
   *(undefined8*)( this + 0x1d0 ) = 0;
   *(undefined8*)( this + 0x200 ) = uVar2;
   *(undefined8*)( this + 0x230 ) = uVar2;
   *(undefined8*)( this + 0x260 ) = uVar2;
   *(undefined8*)( this + 0x288 ) = uVar2;
   *(undefined8*)( this + 0x2b8 ) = uVar2;
   *(undefined8*)( this + 0x2e0 ) = uVar2;
   *(undefined1(*) [16])( this + 0x178 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1b0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1e0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1f0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x210 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x220 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x240 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x250 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x268 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x278 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x298 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2a8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2c0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2d0 ) = (undefined1[16])0x0;
   this_00 = (TCPServer*)operator_new(0x188, "");
   TCPServer::TCPServer(this_00);
   postinitialize_handler((Object*)this_00);
   cVar3 = RefCounted::init_ref();
   if (cVar3 == '\0') {
      pOVar4 = *(Object**)( this + 0x188 );
      if (pOVar4 == (Object*)0x0) goto LAB_00104a5b;
      *(undefined8*)( this + 0x188 ) = 0;
      cVar3 = RefCounted::unreference();
      if (cVar3 == '\0') goto LAB_00104a5b;
      this_00 = (TCPServer*)0x0;
      cVar3 = predelete_handler(pOVar4);
      if (cVar3 == '\0') goto LAB_00104a5b;
      LAB_0010515b:( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
      Memory::free_static(pOVar4, false);
      pOVar7 = (Object*)this_00;
      if (this_00 == (TCPServer*)0x0) goto LAB_00104a5b;
   }
 else {
      pOVar4 = *(Object**)( this + 0x188 );
      pOVar7 = pOVar4;
      if (this_00 != (TCPServer*)pOVar4) {
         *(TCPServer**)( this + 0x188 ) = this_00;
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( this + 0x188 ) = 0;
         }

         pOVar7 = (Object*)this_00;
         if (( ( pOVar4 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) goto LAB_0010515b;
      }

   }

   cVar3 = RefCounted::unreference();
   if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
      ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
      Memory::free_static(pOVar7, false);
   }

   LAB_00104a5b:singleton = this;
   pOVar4 = (Object*)operator_new(0x178, "");
   Object::Object(pOVar4);
   *(undefined***)pOVar4 = &PTR__initialize_classv_0011e6d0;
   postinitialize_handler(pOVar4);
   *(Object**)( this + 0x178 ) = pOVar4;
   reset_ids(this);
   plVar6 = *(long**)( EditorRunBar::singleton + 0xa58 );
   pcVar1 = *(code**)( *plVar6 + 0x108 );
   create_custom_callable_function_pointer<DebugAdapterProtocol>(local_58, (char*)this, (_func_void*)"&DebugAdapterProtocol::on_debug_paused");
   ( *pcVar1 )(plVar6, SceneStringNames::singleton + 0x238, local_58, 0);
   Callable::~Callable((Callable*)local_58);
   plVar6 = EditorDebuggerNode::singleton;
   pcVar1 = *(code**)( *EditorDebuggerNode::singleton + 0x108 );
   pCVar5 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar5);
   *(undefined**)( pCVar5 + 0x20 ) = &_LC29;
   *(undefined1(*) [16])( pCVar5 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar5 = &PTR_hash_0011eb80;
   *(undefined8*)( pCVar5 + 0x40 ) = 0;
   uVar2 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( pCVar5 + 0x10 ) = 0;
   *(undefined8*)( pCVar5 + 0x30 ) = uVar2;
   *(code**)( pCVar5 + 0x38 ) = on_debug_breakpoint_toggled;
   *(DebugAdapterProtocol**)( pCVar5 + 0x28 ) = this;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar5, (int)pCVar5 + 0x28);
   *(char**)( pCVar5 + 0x20 ) = "DebugAdapterProtocol::on_debug_breakpoint_toggled";
   Callable::Callable((Callable*)local_58, pCVar5);
   StringName::StringName((StringName*)&local_60, "breakpoint_toggled", false);
   ( *pcVar1 )(plVar6, (StringName*)&local_60, local_58, 0);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_58);
   plVar6 = (long*)EditorDebuggerNode::get_default_debugger();
   pcVar1 = *(code**)( *plVar6 + 0x108 );
   create_custom_callable_function_pointer<DebugAdapterProtocol>(local_58, (char*)this, (_func_void*)"&DebugAdapterProtocol::on_debug_stopped");
   StringName::StringName((StringName*)&local_60, "stopped", false);
   ( *pcVar1 )(plVar6, (StringName*)&local_60, local_58, 0);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_58);
   plVar6 = (long*)EditorDebuggerNode::get_default_debugger();
   pcVar1 = *(code**)( *plVar6 + 0x108 );
   pCVar5 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar5);
   *(undefined**)( pCVar5 + 0x20 ) = &_LC29;
   *(DebugAdapterProtocol**)( pCVar5 + 0x28 ) = this;
   *(undefined1(*) [16])( pCVar5 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar5 = &PTR_hash_0011ec10;
   *(undefined8*)( pCVar5 + 0x40 ) = 0;
   uVar2 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( pCVar5 + 0x10 ) = 0;
   *(undefined8*)( pCVar5 + 0x30 ) = uVar2;
   *(code**)( pCVar5 + 0x38 ) = on_debug_output;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar5, (int)pCVar5 + 0x28);
   *(char**)( pCVar5 + 0x20 ) = "DebugAdapterProtocol::on_debug_output";
   Callable::Callable((Callable*)local_58, pCVar5);
   ( *pcVar1 )(plVar6, SceneStringNames::singleton + 0x200, local_58, 0);
   Callable::~Callable((Callable*)local_58);
   plVar6 = (long*)EditorDebuggerNode::get_default_debugger();
   pcVar1 = *(code**)( *plVar6 + 0x108 );
   pCVar5 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar5);
   *(undefined**)( pCVar5 + 0x20 ) = &_LC29;
   *(DebugAdapterProtocol**)( pCVar5 + 0x28 ) = this;
   *(undefined1(*) [16])( pCVar5 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar5 = &PTR_hash_0011eca0;
   *(undefined8*)( pCVar5 + 0x40 ) = 0;
   uVar2 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( pCVar5 + 0x10 ) = 0;
   *(undefined8*)( pCVar5 + 0x30 ) = uVar2;
   *(code**)( pCVar5 + 0x38 ) = on_debug_breaked;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar5, (int)pCVar5 + 0x28);
   *(char**)( pCVar5 + 0x20 ) = "DebugAdapterProtocol::on_debug_breaked";
   Callable::Callable((Callable*)local_58, pCVar5);
   StringName::StringName((StringName*)&local_60, "breaked", false);
   ( *pcVar1 )(plVar6, (StringName*)&local_60, local_58, 0);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_58);
   plVar6 = (long*)EditorDebuggerNode::get_default_debugger();
   pcVar1 = *(code**)( *plVar6 + 0x108 );
   create_custom_callable_function_pointer<DebugAdapterProtocol,Array_const&>(local_58, (char*)this, (_func_void_Array_ptr*)"&DebugAdapterProtocol::on_debug_stack_dump");
   StringName::StringName((StringName*)&local_60, "stack_dump", false);
   ( *pcVar1 )(plVar6, (StringName*)&local_60, local_58, 0);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_58);
   plVar6 = (long*)EditorDebuggerNode::get_default_debugger();
   pcVar1 = *(code**)( *plVar6 + 0x108 );
   pCVar5 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar5);
   *(undefined**)( pCVar5 + 0x20 ) = &_LC29;
   *(DebugAdapterProtocol**)( pCVar5 + 0x28 ) = this;
   *(undefined1(*) [16])( pCVar5 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar5 = &PTR_hash_0011edc0;
   *(undefined8*)( pCVar5 + 0x40 ) = 0;
   uVar2 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( pCVar5 + 0x10 ) = 0;
   *(undefined8*)( pCVar5 + 0x30 ) = uVar2;
   *(code**)( pCVar5 + 0x38 ) = on_debug_stack_frame_vars;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar5, (int)pCVar5 + 0x28);
   *(char**)( pCVar5 + 0x20 ) = "DebugAdapterProtocol::on_debug_stack_frame_vars";
   Callable::Callable((Callable*)local_58, pCVar5);
   StringName::StringName((StringName*)&local_60, "stack_frame_vars", false);
   ( *pcVar1 )(plVar6, (StringName*)&local_60, local_58, 0);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_58);
   plVar6 = (long*)EditorDebuggerNode::get_default_debugger();
   pcVar1 = *(code**)( *plVar6 + 0x108 );
   create_custom_callable_function_pointer<DebugAdapterProtocol,Array_const&>(local_58, (char*)this, (_func_void_Array_ptr*)"&DebugAdapterProtocol::on_debug_stack_frame_var");
   StringName::StringName((StringName*)&local_60, "stack_frame_var", false);
   ( *pcVar1 )(plVar6, (StringName*)&local_60, local_58, 0);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_58);
   plVar6 = (long*)EditorDebuggerNode::get_default_debugger();
   pcVar1 = *(code**)( *plVar6 + 0x108 );
   pCVar5 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar5);
   *(undefined**)( pCVar5 + 0x20 ) = &_LC29;
   *(DebugAdapterProtocol**)( pCVar5 + 0x28 ) = this;
   *(undefined1(*) [16])( pCVar5 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar5 = &PTR_hash_0011ee50;
   *(undefined8*)( pCVar5 + 0x40 ) = 0;
   uVar2 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( pCVar5 + 0x10 ) = 0;
   *(undefined8*)( pCVar5 + 0x30 ) = uVar2;
   *(code**)( pCVar5 + 0x38 ) = on_debug_data;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar5, (int)pCVar5 + 0x28);
   *(char**)( pCVar5 + 0x20 ) = "DebugAdapterProtocol::on_debug_data";
   Callable::Callable((Callable*)local_58, pCVar5);
   StringName::StringName((StringName*)&local_60, "debug_data", false);
   ( *pcVar1 )(plVar6, (StringName*)&local_60, local_58, 0);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_58);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* DebugAdapterProtocol::process_message(String const&) */byte DebugAdapterProtocol::process_message(DebugAdapterProtocol *this, String *param_1) {
   long *plVar1;
   StringName *pSVar2;
   undefined8 uVar3;
   undefined *puVar4;
   Array *pAVar5;
   Object *pOVar6;
   byte bVar7;
   char cVar8;
   int iVar9;
   long lVar10;
   Dictionary *pDVar11;
   undefined1(*pauVar12)[16];
   long in_FS_OFFSET;
   Variant local_308[8];
   long local_300;
   Array local_2f8[8];
   Dictionary local_2f0[8];
   undefined *local_2e8;
   undefined8 local_2e0;
   int local_2d8[8];
   undefined **local_2b8[72];
   long local_78;
   int local_70[2];
   undefined1 local_68[16];
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Resource::Resource((Resource*)local_2b8);
   local_2b8[0] = &PTR__initialize_classv_0011e4f8;
   local_78 = 0;
   local_70[0] = 0;
   local_58 = 0;
   local_50 = 0;
   local_68 = (undefined1[16])0x0;
   iVar9 = JSON::parse((String*)local_2b8, SUB81(param_1, 0));
   if (iVar9 == 0) {
      Variant::Variant((Variant*)local_2d8, (Variant*)local_70);
      Variant::operator_cast_to_Dictionary(local_308);
      if (Variant::needs_deinit[local_2d8[0]] != '\0') {
         Variant::_clear_internal();
      }

      OS::get_singleton();
      lVar10 = OS::get_ticks_msec();
      if (*(ulong*)( this + 0x1a0 ) < ( ulong )(lVar10 - *(long*)( *(long*)( this + 0x1b8 ) + 0x4001a8 ))) {
         uVar3 = *(undefined8*)( this + 0x178 );
         Dictionary::Dictionary((Dictionary*)&local_2e8);
         DebugAdapterParser::prepare_error_response(local_2f0, uVar3, local_308, 3, (Dictionary*)&local_2e8);
         Dictionary::~Dictionary((Dictionary*)&local_2e8);
         lVar10 = *(long*)( this + 0x1b8 );
         if (*(long*)( lVar10 + 0x400198 ) == 0) {
            pauVar12 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])( lVar10 + 0x400198 ) = pauVar12;
            *(undefined4*)pauVar12[1] = 0;
            *pauVar12 = (undefined1[16])0x0;
         }

         pDVar11 = (Dictionary*)operator_new(0x20, DefaultAllocator::alloc);
         Dictionary::Dictionary(pDVar11);
         *(undefined8*)( pDVar11 + 0x18 ) = 0;
         *(undefined1(*) [16])( pDVar11 + 8 ) = (undefined1[16])0x0;
         Dictionary::operator =(pDVar11, local_2f0);
         plVar1 = *(long**)( lVar10 + 0x400198 );
         *(undefined8*)( pDVar11 + 0x10 ) = 0;
         lVar10 = *plVar1;
         *(long**)( pDVar11 + 0x18 ) = plVar1;
         *(long*)( pDVar11 + 8 ) = lVar10;
         if (lVar10 != 0) {
            *(Dictionary**)( lVar10 + 0x10 ) = pDVar11;
         }

         *plVar1 = (long)pDVar11;
         if (plVar1[1] == 0) {
            plVar1[1] = (long)pDVar11;
         }

         *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
         Dictionary::~Dictionary(local_2f0);
         bVar7 = 1;
      }
 else {
         Variant::Variant((Variant*)local_2d8, "command");
         Dictionary::operator [](local_308);
         Variant::operator_cast_to_String((Variant*)&local_2e8);
         operator+((char *)&
         local_300,(String*)&_LC82;
         puVar4 = local_2e8;
         if (local_2e8 != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( local_2e8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_2e8 = (undefined*)0x0;
               Memory::free_static(puVar4 + -0x10, false);
            }

         }

         if (Variant::needs_deinit[local_2d8[0]] != '\0') {
            Variant::_clear_internal();
         }

         pSVar2 = *(StringName**)( this + 0x178 );
         StringName::StringName((StringName*)&local_2e8, (String*)&local_300, false);
         bVar7 = Object::has_method(pSVar2);
         if (( StringName::configured != '\0' ) && ( local_2e8 != (undefined*)0x0 )) {
            StringName::unref();
         }

         if (bVar7 == 0) {
            bVar7 = 1;
         }
 else {
            Variant::Variant((Variant*)local_2d8, "command");
            Dictionary::operator [](local_308);
            Variant::operator_cast_to_String((Variant*)&local_2e8);
            puVar4 = *(undefined**)( this + 0x1b0 );
            if (puVar4 != local_2e8) {
               if (puVar4 != (undefined*)0x0) {
                  LOCK();
                  plVar1 = (long*)( puVar4 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar10 = *(long*)( this + 0x1b0 );
                     *(undefined8*)( this + 0x1b0 ) = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }

               }

               *(undefined**)( this + 0x1b0 ) = local_2e8;
               local_2e8 = (undefined*)0x0;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_2e8);
            if (Variant::needs_deinit[local_2d8[0]] != '\0') {
               Variant::_clear_internal();
            }

            Array::Array(local_2f8);
            Variant::Variant((Variant*)local_2d8, (Dictionary*)local_308);
            Array::push_back((Variant*)local_2f8);
            if (Variant::needs_deinit[local_2d8[0]] != '\0') {
               Variant::_clear_internal();
            }

            pAVar5 = *(Array**)( this + 0x178 );
            StringName::StringName((StringName*)&local_2e8, (String*)&local_300, false);
            Object::callv((StringName*)local_2d8, pAVar5);
            Variant::operator_cast_to_Dictionary((Variant*)local_2f0);
            if (Variant::needs_deinit[local_2d8[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (( StringName::configured != '\0' ) && ( local_2e8 != (undefined*)0x0 )) {
               StringName::unref();
            }

            cVar8 = Dictionary::is_empty();
            if (cVar8 == '\0') {
               lVar10 = *(long*)( this + 0x1b8 );
               if (*(long*)( lVar10 + 0x400198 ) == 0) {
                  pauVar12 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])( lVar10 + 0x400198 ) = pauVar12;
                  *(undefined4*)pauVar12[1] = 0;
                  *pauVar12 = (undefined1[16])0x0;
               }

               pDVar11 = (Dictionary*)operator_new(0x20, DefaultAllocator::alloc);
               Dictionary::Dictionary(pDVar11);
               *(undefined8*)( pDVar11 + 0x18 ) = 0;
               *(undefined1(*) [16])( pDVar11 + 8 ) = (undefined1[16])0x0;
               Dictionary::operator =(pDVar11, local_2f0);
               *(undefined8*)( pDVar11 + 0x10 ) = 0;
               plVar1 = *(long**)( lVar10 + 0x400198 );
               lVar10 = *plVar1;
               *(long**)( pDVar11 + 0x18 ) = plVar1;
               *(long*)( pDVar11 + 8 ) = lVar10;
               if (lVar10 != 0) {
                  *(Dictionary**)( lVar10 + 0x10 ) = pDVar11;
               }

               *plVar1 = (long)pDVar11;
               if (plVar1[1] == 0) {
                  plVar1[1] = (long)pDVar11;
               }

               *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
            }
 else {
               bVar7 = String::operator !=((String*)&local_300, "req_launch");
               bVar7 = bVar7 ^ 1;
            }

            Dictionary::~Dictionary(local_2f0);
            Array::~Array(local_2f8);
         }

         local_2e0 = 0;
         local_2e8 = &_LC29;
         String::parse_latin1((StrRange*)( this + 0x1b0 ));
         if (( *(long*)( this + 0x1b8 ) != 0 ) && ( cVar8 = cVar8 != '\0' )) {
            pOVar6 = *(Object**)( this + 0x1b8 );
            cVar8 = predelete_handler(pOVar6);
            if (cVar8 != '\0') {
               ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
               Memory::free_static(pOVar6, false);
            }

         }

         lVar10 = local_300;
         *(undefined8*)( this + 0x1b8 ) = 0;
         if (local_300 != 0) {
            LOCK();
            plVar1 = (long*)( local_300 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_300 = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }

         }

      }

      Dictionary::~Dictionary((Dictionary*)local_308);
   }
 else {
      _err_print_error("process_message", "editor/debugger/debug_adapter/debug_adapter_protocol.cpp", 0x362, "Condition \"json.parse(p_text) != OK\" is true. Returning: true", "Malformed message!", 0, 0);
      bVar7 = 1;
   }

   lVar10 = local_58;
   local_2b8[0] = &PTR__initialize_classv_0011e4f8;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar10 + -0x10 ), false);
      }

   }

   if (Variant::needs_deinit[local_70[0]] != '\0') {
      Variant::_clear_internal();
   }

   lVar10 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar10 + -0x10 ), false);
      }

   }

   Resource::~Resource((Resource*)local_2b8);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar7;
}
/* DAPeer::handle_data() */undefined8 DAPeer::handle_data(DAPeer *this) {
   char cVar1;
   int iVar2;
   undefined4 uVar3;
   undefined8 uVar4;
   int iVar5;
   long lVar6;
   long in_FS_OFFSET;
   int local_34;
   undefined8 local_30;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_34 = 0;
   if (this[0x40018c] == (DAPeer)0x0) {
      iVar2 = ( **(code**)( **(long**)( this + 0x180 ) + 0x170 ) )();
      if (iVar2 != 0) {
         iVar2 = *(int*)( this + 0x400188 );
         while (iVar2 < 0x400000) {
            while (true) {
               iVar2 = ( **(code**)( **(long**)( this + 0x180 ) + 0x168 ) )(*(long**)( this + 0x180 ), this + ( iVar2 + 0x188 ), 1, &local_34);
               if (iVar2 != 0) goto LAB_00105c60;
               if (local_34 != 1) goto LAB_00105c70;
               iVar2 = *(int*)( this + 0x400188 );
               if (3 < iVar2) break;
               iVar2 = iVar2 + 1;
               *(int*)( this + 0x400188 ) = iVar2;
            }
;
            if (( ( ( ( this + 0x188 )[iVar2] == (DAPeer)0xa ) && ( this[(long)iVar2 + 0x187] == (DAPeer)0xd ) ) && ( this[(long)iVar2 + 0x186] == (DAPeer)0xa ) ) && ( this[(long)iVar2 + 0x185] == (DAPeer)0xd )) {
               this[(long)iVar2 + 0x185] = (DAPeer)0x0;
               local_30 = 0;
               String::parse_utf8((char*)&local_30, (int)( this + 0x188 ), true);
               String::substr((int)(CowData<char32_t>*)&local_28, (int)(CowData<char32_t>*)&local_30);
               uVar3 = String::to_int();
               *(undefined4*)( this + 0x400190 ) = uVar3;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_28);
               this[0x40018c] = (DAPeer)0x1;
               *(undefined4*)( this + 0x400188 ) = 0;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_30);
               if (this[0x40018c] == (DAPeer)0x0) goto LAB_00105c50;
               goto LAB_00105b18;
            }

            iVar2 = iVar2 + 1;
            *(int*)( this + 0x400188 ) = iVar2;
         }
;
         *(undefined4*)( this + 0x400188 ) = 0;
         _err_print_error("handle_data", "editor/debugger/debug_adapter/debug_adapter_protocol.cpp", 0x37, "Method/function failed. Returning: ERR_OUT_OF_MEMORY", "Response header too big", 0, 0);
         uVar4 = 6;
         goto LAB_00105a50;
      }

   }
 else {
      LAB_00105b18:iVar2 = *(int*)( this + 0x400188 );
      iVar5 = *(int*)( this + 0x400190 );
      if (iVar2 < iVar5) {
         do {
            if (iVar5 < 0x400000) {
               iVar5 = iVar5 - *(int*)( this + 0x400188 );
               lVar6 = (long)*(int*)( this + 0x400188 ) + 0x188;
            }
 else {
               this[0x40018c] = (DAPeer)0x0;
               lVar6 = 0x188;
               *(undefined4*)( this + 0x400188 ) = 0;
            }

            iVar2 = ( **(code**)( **(long**)( this + 0x180 ) + 0x168 ) )(*(long**)( this + 0x180 ), this + lVar6, iVar5, &local_34);
            if (iVar2 != 0) goto LAB_00105c60;
            iVar5 = *(int*)( this + 0x400190 );
            if (local_34 < iVar5 - *(int*)( this + 0x400188 )) goto LAB_00105c70;
            iVar2 = *(int*)( this + 0x400188 ) + local_34;
            *(int*)( this + 0x400188 ) = iVar2;
         }
 while ( iVar2 < iVar5 );
      }

      local_28 = 0;
      String::parse_utf8((char*)&local_28, (int)this + 0x188, SUB41(iVar2, 0));
      if (*(long*)( this + 0x4001a8 ) == 0) {
         OS::get_singleton();
         uVar4 = OS::get_ticks_msec();
         *(undefined8*)( this + 0x4001a8 ) = uVar4;
      }

      cVar1 = DebugAdapterProtocol::process_message(DebugAdapterProtocol::singleton, (String*)&local_28);
      if (cVar1 != '\0') {
         *(undefined4*)( this + 0x400188 ) = 0;
         this[0x40018c] = (DAPeer)0x0;
         *(undefined8*)( this + 0x4001a8 ) = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_28);
   }

   LAB_00105c50:uVar4 = 0;
   goto LAB_00105a50;
   LAB_00105c60:uVar4 = 1;
   goto LAB_00105a50;
   LAB_00105c70:uVar4 = 0x2c;
   LAB_00105a50:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
/* DebugAdapterProtocol::poll() */void DebugAdapterProtocol::poll(DebugAdapterProtocol *this) {
   undefined1(*pauVar1)[16];
   Object *pOVar2;
   Ref *pRVar3;
   long lVar4;
   code *pcVar5;
   char cVar6;
   int iVar7;
   undefined8 *puVar8;
   long lVar9;
   undefined1(*pauVar10)[16];
   DAPeer *this_00;
   long *plVar11;
   cVar6 = TCPServer::is_connection_available();
   if (cVar6 == '\0') {
      plVar11 = *(long**)( this + 0x180 );
   }
 else {
      on_client_connected(this);
      plVar11 = *(long**)( this + 0x180 );
   }

   if (( plVar11 != (long*)0x0 ) && ( plVar11 = (long*)*plVar11 ),plVar11 != (long*)0x0) {
      pauVar10 = (undefined1(*) [16])0x0;
      do if (( cVar6 != '\0' ) && ( cVar6 = predelete_handler((Object*)this_00) ),cVar6 != '\0') plVar11 = (long*)plVar11[1]; while ( plVar11 != (long*)0x0 );
      if (pauVar10 != (undefined1(*) [16])0x0) {
         for (pRVar3 = *(Ref**)*pauVar10; pRVar3 != (Ref*)0x0; pRVar3 = *(Ref**)( pRVar3 + 8 )) {
            on_client_disconnected(this, pRVar3);
         }

         if (pauVar10 != (undefined1(*) [16])0x0) {
            do {
               while (true) {
                  plVar11 = *(long**)*pauVar10;
                  if (plVar11 == (long*)0x0) {
                     if (*(int*)pauVar10[1] != 0) {
                        _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                        return;
                     }

                     goto LAB_00105ee5;
                  }

                  if ((undefined1(*) [16])plVar11[3] == pauVar10) break;
                  _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                  iVar7 = *(int*)pauVar10[1];
                  joined_r0x00105ee3:if (iVar7 == 0) goto LAB_00105ee5;
               }
;
               lVar9 = plVar11[1];
               lVar4 = plVar11[2];
               *(long*)*pauVar10 = lVar9;
               if (plVar11 == *(long**)( *pauVar10 + 8 )) {
                  *(long*)( *pauVar10 + 8 ) = lVar4;
               }

               if (lVar4 != 0) {
                  *(long*)( lVar4 + 8 ) = lVar9;
                  lVar9 = plVar11[1];
               }

               if (lVar9 != 0) {
                  *(long*)( lVar9 + 0x10 ) = lVar4;
               }

               if (( *plVar11 == 0 ) || ( cVar6 = cVar6 == '\0' )) {
                  LAB_00105ed5:Memory::free_static(plVar11, false);
                  pauVar1 = pauVar10 + 1;
                  *(int*)*pauVar1 = *(int*)*pauVar1 + -1;
                  iVar7 = *(int*)*pauVar1;
                  goto joined_r0x00105ee3;
               }

               pOVar2 = (Object*)*plVar11;
               cVar6 = predelete_handler(pOVar2);
               if (cVar6 == '\0') goto LAB_00105ed5;
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
               Memory::free_static(plVar11, false);
               pauVar1 = pauVar10 + 1;
               *(int*)*pauVar1 = *(int*)*pauVar1 + -1;
            }
 while ( *(int*)*pauVar1 != 0 );
            LAB_00105ee5:Memory::free_static(pauVar10, false);
            return;
         }

      }

   }

   return;
}
/* DebugAdapterProtocol::on_debug_stack_dump(Array const&) */void DebugAdapterProtocol::on_debug_stack_dump(DebugAdapterProtocol *this, Array *param_1) {
   undefined1(*pauVar1)[16];
   int iVar2;
   uint uVar3;
   void *pvVar4;
   void *pvVar5;
   long lVar6;
   char cVar7;
   int iVar8;
   long lVar9;
   Variant *pVVar10;
   undefined1(*pauVar11)[16];
   int *piVar12;
   int iVar13;
   long *plVar14;
   long lVar15;
   long in_FS_OFFSET;
   Variant local_a0[8];
   undefined1(*local_98)[16];
   long local_90;
   int local_88;
   undefined1 local_84;
   long local_80;
   undefined8 local_78;
   long lStack_70;
   int iStack_68;
   undefined4 uStack_64;
   ulong local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( this[0x191] != (DebugAdapterProtocol)0x0 ) && ( cVar7 = cVar7 == '\0' )) {
      Array::operator []((int)param_1);
      Variant::operator_cast_to_Dictionary(local_a0);
      local_84 = 0;
      local_88 = 0;
      Array::Array((Array*)&local_80);
      iStack_68 = 0;
      local_78 = 0;
      lStack_70 = 0;
      ProjectSettings::get_singleton();
      Variant::Variant((Variant*)local_58, "file");
      Dictionary::operator [](local_a0);
      Variant::operator_cast_to_String((Variant*)&local_98);
      ProjectSettings::globalize_path((String*)&local_90);
      if (lStack_70 != local_90) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&lStack_70);
         lStack_70 = local_90;
         local_90 = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, "line");
      pVVar10 = (Variant*)Dictionary::operator [](local_a0);
      iStack_68 = Variant::operator_cast_to_int(pVVar10);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (*(long**)( this + 0x1d0 ) != (long*)0x0) {
         for (lVar15 = **(long**)( this + 0x1d0 ); lVar15 != 0; lVar15 = *(long*)( lVar15 + 0x28 )) {
            cVar7 = String::operator ==((String*)( lVar15 + 0x18 ), (String*)&lStack_70);
            if (( cVar7 != '\0' ) && ( *(int*)( lVar15 + 0x20 ) == iStack_68 )) {
               notify_stopped_breakpoint((int*)this);
               break;
            }

         }

      }

      this[0x191] = (DebugAdapterProtocol)0x0;
      CowData<char32_t>::_unref((CowData<char32_t>*)&lStack_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      Array::~Array((Array*)&local_80);
      Dictionary::~Dictionary((Dictionary*)local_a0);
   }

   *(undefined4*)( this + 0x1c4 ) = 0;
   if (( *(long*)( this + 0x1e0 ) != 0 ) && ( *(int*)( this + 0x204 ) != 0 )) {
      lVar15 = 0;
      uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x200 ) * 4 );
      if (uVar3 != 0) {
         do {
            if (*(int*)( *(long*)( this + 0x1e8 ) + lVar15 ) != 0) {
               *(int*)( *(long*)( this + 0x1e8 ) + lVar15 ) = 0;
               pvVar4 = *(void**)( *(long*)( this + 0x1e0 ) + lVar15 * 2 );
               plVar14 = *(long**)( (long)pvVar4 + 0x40 );
               if (plVar14 != (long*)0x0) {
                  do {
                     pvVar5 = (void*)*plVar14;
                     if (pvVar5 == (void*)0x0) {
                        if ((int)plVar14[2] != 0) {
                           _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                           goto LAB_001062b6;
                        }

                        break;
                     }

                     if (*(long**)( (long)pvVar5 + 0x18 ) == plVar14) {
                        lVar9 = *(long*)( (long)pvVar5 + 8 );
                        lVar6 = *(long*)( (long)pvVar5 + 0x10 );
                        *plVar14 = lVar9;
                        if (pvVar5 == (void*)plVar14[1]) {
                           plVar14[1] = lVar6;
                        }

                        if (lVar6 != 0) {
                           *(long*)( lVar6 + 8 ) = lVar9;
                           lVar9 = *(long*)( (long)pvVar5 + 8 );
                        }

                        if (lVar9 != 0) {
                           *(long*)( lVar9 + 0x10 ) = lVar6;
                        }

                        Memory::free_static(pvVar5, false);
                        *(int*)( plVar14 + 2 ) = (int)plVar14[2] + -1;
                     }
 else {
                        _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                     }

                     plVar14 = *(long**)( (long)pvVar4 + 0x40 );
                  }
 while ( (int)plVar14[2] != 0 );
                  Memory::free_static(plVar14, false);
               }

               LAB_001062b6:if (*(long*)( (long)pvVar4 + 0x30 ) != 0) {
                  LOCK();
                  plVar14 = (long*)( *(long*)( (long)pvVar4 + 0x30 ) + -0x10 );
                  *plVar14 = *plVar14 + -1;
                  UNLOCK();
                  if (*plVar14 == 0) {
                     lVar9 = *(long*)( (long)pvVar4 + 0x30 );
                     *(undefined8*)( (long)pvVar4 + 0x30 ) = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  }

               }

               if (*(long*)( (long)pvVar4 + 0x28 ) != 0) {
                  LOCK();
                  plVar14 = (long*)( *(long*)( (long)pvVar4 + 0x28 ) + -0x10 );
                  *plVar14 = *plVar14 + -1;
                  UNLOCK();
                  if (*plVar14 == 0) {
                     lVar9 = *(long*)( (long)pvVar4 + 0x28 );
                     *(undefined8*)( (long)pvVar4 + 0x28 ) = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  }

               }

               Array::~Array((Array*)( (long)pvVar4 + 0x20 ));
               if (*(long*)( (long)pvVar4 + 0x18 ) != 0) {
                  LOCK();
                  plVar14 = (long*)( *(long*)( (long)pvVar4 + 0x18 ) + -0x10 );
                  *plVar14 = *plVar14 + -1;
                  UNLOCK();
                  if (*plVar14 == 0) {
                     lVar9 = *(long*)( (long)pvVar4 + 0x18 );
                     *(undefined8*)( (long)pvVar4 + 0x18 ) = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  }

               }

               Memory::free_static(pvVar4, false);
               *(undefined8*)( *(long*)( this + 0x1e0 ) + lVar15 * 2 ) = 0;
            }

            lVar15 = lVar15 + 4;
         }
 while ( (ulong)uVar3 << 2 != lVar15 );
      }

      *(undefined4*)( this + 0x204 ) = 0;
      *(undefined1(*) [16])( this + 0x1f0 ) = (undefined1[16])0x0;
   }

   iVar2 = 0;
   do {
      iVar8 = Array::size();
      if (iVar8 <= iVar2) {
         *(undefined4*)( this + 0x198 ) = 0;
         this[0x193] = (DebugAdapterProtocol)0x0;
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      Array::operator []((int)param_1);
      Variant::operator_cast_to_Dictionary(local_a0);
      local_88 = 0;
      local_80 = 0;
      Array::Array((Array*)&local_78);
      local_88 = *(int*)( this + 0x1c4 );
      lStack_70 = 0;
      iStack_68 = 0;
      uStack_64 = 0;
      *(int*)( this + 0x1c4 ) = local_88 + 1;
      local_60 = 0;
      Variant::Variant((Variant*)local_58, "function");
      Dictionary::operator [](local_a0);
      Variant::operator_cast_to_String((Variant*)&local_90);
      lVar9 = local_80;
      lVar15 = local_90;
      if (local_80 == local_90) {
         if (local_80 != 0) {
            LOCK();
            plVar14 = (long*)( local_80 + -0x10 );
            *plVar14 = *plVar14 + -1;
            UNLOCK();
            if (*plVar14 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }

         }

      }
 else {
         if (local_80 != 0) {
            LOCK();
            plVar14 = (long*)( local_80 + -0x10 );
            *plVar14 = *plVar14 + -1;
            UNLOCK();
            if (*plVar14 == 0) {
               local_80 = 0;
               Memory::free_static((void*)( lVar9 + -0x10 ), false);
            }

         }

         local_80 = local_90;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, "line");
      pVVar10 = (Variant*)Dictionary::operator [](local_a0);
      iVar8 = Variant::operator_cast_to_int(pVVar10);
      local_60 = CONCAT44(local_60._4_4_, iVar8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      local_60 = local_60 & 0xffffffff;
      ProjectSettings::get_singleton();
      Variant::Variant((Variant*)local_58, "file");
      Dictionary::operator [](local_a0);
      Variant::operator_cast_to_String((Variant*)&local_98);
      ProjectSettings::globalize_path((String*)&local_90);
      lVar9 = local_90;
      lVar15 = CONCAT44(uStack_64, iStack_68);
      if (lVar15 == local_90) {
         if (lVar15 != 0) {
            LOCK();
            plVar14 = (long*)( lVar15 + -0x10 );
            *plVar14 = *plVar14 + -1;
            UNLOCK();
            if (*plVar14 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar9 + -0x10 ), false);
            }

         }

      }
 else {
         if (lVar15 != 0) {
            LOCK();
            plVar14 = (long*)( lVar15 + -0x10 );
            *plVar14 = *plVar14 + -1;
            UNLOCK();
            if (*plVar14 == 0) {
               lVar15 = CONCAT44(uStack_64, iStack_68);
               iStack_68 = 0;
               uStack_64 = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }

         }

         iStack_68 = (int)local_90;
         uStack_64 = ( undefined4 )((ulong)local_90 >> 0x20);
      }

      pauVar11 = local_98;
      if (local_98 != (undefined1(*) [16])0x0) {
         LOCK();
         pauVar1 = local_98 + -1;
         *(long*)*pauVar1 = *(long*)*pauVar1 + -1;
         UNLOCK();
         if (*(long*)*pauVar1 == 0) {
            local_98 = (undefined1(*) [16])0x0;
            Memory::free_static(pauVar11 + -1, false);
         }

      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      iVar13 = 3;
      DAP::Source::compute_checksums((Source*)&local_78);
      iVar8 = *(int*)( this + 0x1c8 );
      *(int*)( this + 0x1c8 ) = iVar8 + 1;
      pauVar11 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)pauVar11[1] = 0;
      *pauVar11 = (undefined1[16])0x0;
      local_98 = pauVar11;
      while (true) {
         piVar12 = (int*)operator_new(0x20, DefaultAllocator::alloc);
         lVar15 = *(long*)( *pauVar11 + 8 );
         piVar12[2] = 0;
         piVar12[3] = 0;
         *piVar12 = iVar8;
         *(long*)( piVar12 + 4 ) = lVar15;
         *(undefined1(**) [16])( piVar12 + 6 ) = pauVar11;
         if (lVar15 != 0) {
            *(int**)( lVar15 + 8 ) = piVar12;
         }

         lVar15 = *(long*)*pauVar11;
         *(int**)( *pauVar11 + 8 ) = piVar12;
         if (lVar15 == 0) {
            *(int**)*pauVar11 = piVar12;
         }

         *(int*)pauVar11[1] = *(int*)pauVar11[1] + 1;
         iVar13 = iVar13 + -1;
         if (iVar13 == 0) break;
         iVar8 = *(int*)( this + 0x1c8 );
         *(int*)( this + 0x1c8 ) = iVar8 + 1;
      }
;
      HashMap<DAP::StackFrame,List<int,DefaultAllocator>,DAP::StackFrame,HashMapComparatorDefault<DAP::StackFrame>,DefaultTypedAllocator<HashMapElement<DAP::StackFrame,List<int,DefaultAllocator>>>>::insert((StackFrame*)&local_90, (List*)( this + 0x1d8 ), SUB81(&local_88, 0));
      do {
         while (true) {
            pvVar4 = *(void**)*pauVar11;
            if (pvVar4 == (void*)0x0) {
               if (*(int*)pauVar11[1] != 0) {
                  _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                  goto LAB_001066cd;
               }

               goto LAB_001066c3;
            }

            if (pauVar11 != *(undefined1(**) [16])( (long)pvVar4 + 0x18 )) break;
            lVar15 = *(long*)( (long)pvVar4 + 8 );
            lVar9 = *(long*)( (long)pvVar4 + 0x10 );
            *(long*)*pauVar11 = lVar15;
            if (pvVar4 == *(void**)( *pauVar11 + 8 )) {
               *(long*)( *pauVar11 + 8 ) = lVar9;
            }

            if (lVar9 != 0) {
               *(long*)( lVar9 + 8 ) = lVar15;
               lVar15 = *(long*)( (long)pvVar4 + 8 );
            }

            if (lVar15 != 0) {
               *(long*)( lVar15 + 0x10 ) = lVar9;
            }

            Memory::free_static(pvVar4, false);
            pauVar1 = pauVar11 + 1;
            *(int*)*pauVar1 = *(int*)*pauVar1 + -1;
            if (*(int*)*pauVar1 == 0) goto LAB_001066c3;
         }
;
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }
 while ( *(int*)pauVar11[1] != 0 );
      LAB_001066c3:Memory::free_static(pauVar11, false);
      LAB_001066cd:if (CONCAT44(uStack_64, iStack_68) != 0) {
         LOCK();
         plVar14 = (long*)( CONCAT44(uStack_64, iStack_68) + -0x10 );
         *plVar14 = *plVar14 + -1;
         UNLOCK();
         if (*plVar14 == 0) {
            lVar15 = CONCAT44(uStack_64, iStack_68);
            iStack_68 = 0;
            uStack_64 = 0;
            Memory::free_static((void*)( lVar15 + -0x10 ), false);
         }

      }

      lVar15 = lStack_70;
      if (lStack_70 != 0) {
         LOCK();
         plVar14 = (long*)( lStack_70 + -0x10 );
         *plVar14 = *plVar14 + -1;
         UNLOCK();
         if (*plVar14 == 0) {
            lStack_70 = 0;
            Memory::free_static((void*)( lVar15 + -0x10 ), false);
         }

      }

      Array::~Array((Array*)&local_78);
      lVar15 = local_80;
      if (local_80 != 0) {
         LOCK();
         plVar14 = (long*)( local_80 + -0x10 );
         *plVar14 = *plVar14 + -1;
         UNLOCK();
         if (*plVar14 == 0) {
            local_80 = 0;
            Memory::free_static((void*)( lVar15 + -0x10 ), false);
         }

      }

      Dictionary::~Dictionary((Dictionary*)local_a0);
      iVar2 = iVar2 + 1;
   }
 while ( true );
}
/* DebugAdapterProtocol::on_debug_stack_frame_vars(int const&) */void DebugAdapterProtocol::on_debug_stack_frame_vars(DebugAdapterProtocol *this, int *param_1) {
   undefined1(*pauVar1)[16];
   long *plVar2;
   undefined4 uVar3;
   long lVar4;
   undefined8 *puVar5;
   void *pvVar6;
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
   code *pcVar35;
   undefined1 auVar36[16];
   undefined8 uVar37;
   uint uVar38;
   uint uVar39;
   undefined1(*pauVar40)[16];
   undefined4 *puVar41;
   long lVar42;
   int iVar43;
   int iVar44;
   long lVar45;
   long lVar46;
   long lVar47;
   uint uVar48;
   uint uVar49;
   ulong uVar50;
   ulong uVar51;
   ulong uVar52;
   uint uVar53;
   uint uVar54;
   undefined4 *puVar55;
   long in_FS_OFFSET;
   uint *local_e0;
   uint local_8c;
   Array local_88[8];
   int local_80[2];
   int local_78;
   long local_70;
   Array local_68[8];
   undefined1 local_60[16];
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = 0;
   local_70 = 0;
   *(int*)( this + 0x194 ) = *param_1;
   Array::Array(local_68);
   local_78 = *(int*)( this + 0x198 );
   lVar42 = *(long*)( this + 0x1e0 );
   local_50 = 0;
   local_60 = (undefined1[16])0x0;
   if (( lVar42 != 0 ) && ( *(int*)( this + 0x204 ) != 0 )) {
      lVar4 = *(long*)( this + 0x1e8 );
      uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x200 ) * 4 );
      uVar51 = CONCAT44(0, uVar39);
      lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x200 ) * 8 );
      uVar38 = ( local_78 * 0x16a88000 | ( uint )(local_78 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
      uVar38 = ( uVar38 << 0xd | uVar38 >> 0x13 ) * 5 + 0xe6546b64;
      uVar50 = (ulong)uVar38;
      if (uVar38 == 0) {
         uVar50 = 1;
      }

      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar50 * lVar47;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar51;
      lVar45 = SUB168(auVar7 * auVar21, 8);
      uVar38 = *(uint*)( lVar4 + lVar45 * 4 );
      uVar54 = SUB164(auVar7 * auVar21, 8);
      if (uVar38 != 0) {
         uVar48 = 0;
         lVar46 = lVar45;
         uVar49 = uVar38;
         uVar53 = uVar54;
         LAB_00106cc2:if (( (uint)uVar50 != uVar49 ) || ( local_78 != *(int*)( *(long*)( lVar42 + lVar46 * 8 ) + 0x10 ) )) goto LAB_00106c78;
         uVar52 = (ulong)uVar38;
         uVar38 = 0;
         while (( (uint)uVar50 != (uint)uVar52 || ( local_78 != *(int*)( *(long*)( lVar42 + lVar45 * 8 ) + 0x10 ) ) )) {
            uVar38 = uVar38 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = ( ulong )(uVar54 + 1) * lVar47;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar51;
            lVar45 = SUB168(auVar11 * auVar25, 8);
            uVar49 = *(uint*)( lVar4 + lVar45 * 4 );
            uVar52 = (ulong)uVar49;
            uVar54 = SUB164(auVar11 * auVar25, 8);
            if (( uVar49 == 0 ) || ( auVar12._8_8_ = 0 ),auVar12._0_8_ = uVar52 * lVar47,auVar26._8_8_ = 0,auVar26._0_8_ = uVar51,auVar13._8_8_ = 0,auVar13._0_8_ = ( ulong )(( uVar39 + uVar54 ) - SUB164(auVar12 * auVar26, 8)) * lVar47,auVar27._8_8_ = 0,auVar27._0_8_ = uVar51,SUB164(auVar13 * auVar27, 8) < uVar38) {
               /* WARNING: Does not return */
               pcVar35 = (code*)invalidInstructionException();
               ( *pcVar35 )();
            }

         }
;
         puVar5 = *(undefined8**)( *(long*)( lVar42 + (ulong)uVar54 * 8 ) + 0x40 );
         if (( puVar5 == (undefined8*)0x0 ) || ( puVar55 = (undefined4*)*puVar5 ),puVar55 == (undefined4*)0x0) goto LAB_0010703b;
         pauVar40 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined4*)pauVar40[1] = 0;
         *pauVar40 = (undefined1[16])0x0;
         do {
            while (true) {
               puVar41 = (undefined4*)operator_new(0x20, DefaultAllocator::alloc);
               uVar3 = *puVar55;
               *(undefined8*)( puVar41 + 2 ) = 0;
               *puVar41 = uVar3;
               lVar42 = *(long*)( *pauVar40 + 8 );
               *(undefined1(**) [16])( puVar41 + 6 ) = pauVar40;
               *(long*)( puVar41 + 4 ) = lVar42;
               if (lVar42 != 0) {
                  *(undefined4**)( lVar42 + 8 ) = puVar41;
               }

               lVar42 = *(long*)*pauVar40;
               *(undefined4**)( *pauVar40 + 8 ) = puVar41;
               if (lVar42 != 0) break;
               puVar55 = *(undefined4**)( puVar55 + 2 );
               *(int*)pauVar40[1] = *(int*)pauVar40[1] + 1;
               *(undefined4**)*pauVar40 = puVar41;
               if (puVar55 == (undefined4*)0x0) goto LAB_00106de9;
            }
;
            puVar55 = *(undefined4**)( puVar55 + 2 );
            *(int*)pauVar40[1] = *(int*)pauVar40[1] + 1;
         }
 while ( puVar55 != (undefined4*)0x0 );
         LAB_00106de9:local_e0 = *(uint**)*pauVar40;
         if (local_e0 == (uint*)0x0) goto LAB_00107026;
         LAB_00106e10:local_8c = *local_e0;
         lVar42 = *(long*)( this + 0x210 );
         if (( lVar42 != 0 ) && ( *(int*)( this + 0x234 ) != 0 )) {
            uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x230 ) * 4 );
            uVar51 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x230 ) * 8 );
            uVar39 = ( local_8c >> 0x10 ^ local_8c ) * -0x7a143595;
            uVar39 = ( uVar39 ^ uVar39 >> 0xd ) * -0x3d4d51cb;
            uVar54 = uVar39 ^ uVar39 >> 0x10;
            if (uVar39 == uVar39 >> 0x10) {
               uVar54 = 1;
               uVar50 = uVar51;
            }
 else {
               uVar50 = uVar54 * uVar51;
            }

            uVar52 = CONCAT44(0, uVar38);
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar52;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar50;
            lVar47 = SUB168(auVar14 * auVar28, 8);
            lVar4 = *(long*)( this + 0x218 );
            uVar39 = *(uint*)( lVar4 + lVar47 * 4 );
            iVar43 = SUB164(auVar14 * auVar28, 8);
            if (uVar39 != 0) {
               uVar53 = 0;
               lVar45 = lVar47;
               iVar44 = iVar43;
               uVar49 = uVar39;
               do {
                  if (( uVar49 == uVar54 ) && ( local_8c == *(uint*)( *(long*)( lVar42 + lVar45 * 8 ) + 0x10 ) )) {
                     uVar49 = 0;
                     goto LAB_00106f97;
                  }

                  uVar53 = uVar53 + 1;
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = ( iVar44 + 1 ) * uVar51;
                  auVar29._8_8_ = 0;
                  auVar29._0_8_ = uVar52;
                  lVar45 = SUB168(auVar15 * auVar29, 8);
                  uVar49 = *(uint*)( lVar4 + lVar45 * 4 );
                  iVar44 = SUB164(auVar15 * auVar29, 8);
               }
 while ( ( uVar49 != 0 ) && ( auVar16._8_8_ = 0 ),auVar16._0_8_ = uVar49 * uVar51,auVar30._8_8_ = 0,auVar30._0_8_ = uVar52,auVar17._8_8_ = 0,auVar17._0_8_ = ( ( uVar38 + iVar44 ) - SUB164(auVar16 * auVar30, 8) ) * uVar51,auVar31._8_8_ = 0,auVar31._0_8_ = uVar52,uVar53 <= SUB164(auVar17 * auVar31, 8) );
            }

         }

         Array::Array(local_88);
         HashMap<int,Array,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Array>>>::insert(local_80, (Array*)( this + 0x208 ), SUB81(&local_8c, 0));
         Array::~Array(local_88);
         goto LAB_00106fb8;
      }

   }

   LAB_001071a0:_err_print_error("on_debug_stack_frame_vars", "editor/debugger/debug_adapter/debug_adapter_protocol.cpp", 0x46c, "Condition \"!stackframe_list.has(frame)\" is true.", 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)( local_60 + 8 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   Array::~Array(local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   goto LAB_001070d8;
   LAB_00106c78:uVar48 = uVar48 + 1;
   auVar8._8_8_ = 0;
   auVar8._0_8_ = ( ulong )(uVar53 + 1) * lVar47;
   auVar22._8_8_ = 0;
   auVar22._0_8_ = uVar51;
   lVar46 = SUB168(auVar8 * auVar22, 8);
   uVar49 = *(uint*)( lVar4 + lVar46 * 4 );
   uVar53 = SUB164(auVar8 * auVar22, 8);
   if (( uVar49 == 0 ) || ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar49 * lVar47,auVar23._8_8_ = 0,auVar23._0_8_ = uVar51,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar39 + uVar53 ) - SUB164(auVar9 * auVar23, 8)) * lVar47,auVar24._8_8_ = 0,auVar24._0_8_ = uVar51,SUB164(auVar10 * auVar24, 8) < uVar48) goto LAB_001071a0;
   goto LAB_00106cc2;
   LAB_00106f97:if (( uVar39 == uVar54 ) && ( local_8c == *(uint*)( *(long*)( lVar42 + lVar47 * 8 ) + 0x10 ) )) goto LAB_00106faf;
   uVar49 = uVar49 + 1;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = ( iVar43 + 1 ) * uVar51;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar52;
   lVar47 = SUB168(auVar18 * auVar32, 8);
   uVar39 = *(uint*)( lVar4 + lVar47 * 4 );
   iVar43 = SUB164(auVar18 * auVar32, 8);
   if (( uVar39 == 0 ) || ( auVar19._8_8_ = 0 ),auVar19._0_8_ = uVar39 * uVar51,auVar33._8_8_ = 0,auVar33._0_8_ = uVar52,auVar20._8_8_ = 0,auVar20._0_8_ = ( ( uVar38 + iVar43 ) - SUB164(auVar19 * auVar33, 8) ) * uVar51,auVar34._8_8_ = 0,auVar34._0_8_ = uVar52,SUB164(auVar20 * auVar34, 8) < uVar49) goto LAB_00106faf;
   goto LAB_00106f97;
   LAB_00106faf:Array::clear();
   LAB_00106fb8:local_e0 = *(uint**)( local_e0 + 2 );
   if (local_e0 == (uint*)0x0) goto code_r0x00106fcf;
   goto LAB_00106e10;
   code_r0x00106fcf:pvVar6 = *(void**)*pauVar40;
   while (pvVar6 != (void*)0x0) {
      if (pauVar40 == *(undefined1(**) [16])( (long)pvVar6 + 0x18 )) {
         lVar42 = *(long*)( (long)pvVar6 + 8 );
         lVar4 = *(long*)( (long)pvVar6 + 0x10 );
         *(long*)*pauVar40 = lVar42;
         if (pvVar6 == *(void**)( *pauVar40 + 8 )) {
            *(long*)( *pauVar40 + 8 ) = lVar4;
         }

         if (lVar4 != 0) {
            *(long*)( lVar4 + 8 ) = lVar42;
            lVar42 = *(long*)( (long)pvVar6 + 8 );
         }

         if (lVar42 != 0) {
            *(long*)( lVar42 + 0x10 ) = lVar4;
         }

         Memory::free_static(pvVar6, false);
         pauVar1 = pauVar40 + 1;
         *(int*)*pauVar1 = *(int*)*pauVar1 + -1;
         iVar43 = *(int*)*pauVar1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         iVar43 = *(int*)pauVar40[1];
      }

      if (iVar43 == 0) goto LAB_00107031;
      pvVar6 = *(void**)*pauVar40;
   }
;
   LAB_00107026:if (*(int*)pauVar40[1] == 0) {
      LAB_00107031:Memory::free_static(pauVar40, false);
   }
 else {
      _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
   }

   LAB_0010703b:uVar37 = local_60._8_8_;
   if (local_60._8_8_ != 0) {
      LOCK();
      plVar2 = (long*)( local_60._8_8_ + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_60._8_8_ = 0;
         Memory::free_static((void*)( uVar37 + -0x10 ), false);
      }

   }

   uVar37 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar2 = (long*)( local_60._0_8_ + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         auVar36._8_8_ = 0;
         auVar36._0_8_ = local_60._8_8_;
         local_60 = auVar36 << 0x40;
         Memory::free_static((void*)( uVar37 + -0x10 ), false);
      }

   }

   Array::~Array(local_68);
   lVar42 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar2 = (long*)( local_70 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar42 + -0x10 ), false);
      }

   }

   LAB_001070d8:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* DebugAdapterProtocol::on_debug_breakpoint_toggled(String const&, int const&, bool const&) */void DebugAdapterProtocol::on_debug_breakpoint_toggled(DebugAdapterProtocol *this, String *param_1, int *param_2, bool *param_3) {
   long *plVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined8 uVar4;
   char cVar5;
   int *piVar6;
   long lVar7;
   undefined1(*pauVar8)[16];
   long in_FS_OFFSET;
   long local_70;
   int local_68;
   undefined1 local_64;
   Array local_60[8];
   undefined1 local_58[16];
   int local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = 0;
   local_64 = 0;
   Array::Array(local_60);
   local_64 = 1;
   local_58 = (undefined1[16])0x0;
   local_48 = 0;
   ProjectSettings::get_singleton();
   ProjectSettings::globalize_path((String*)&local_70);
   lVar7 = local_70;
   uVar4 = local_58._8_8_;
   if (local_58._8_8_ == local_70) {
      if (local_58._8_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_58._8_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

   }
 else {
      if (local_58._8_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_58._8_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58._8_8_ = 0;
            Memory::free_static((void*)( uVar4 + -0x10 ), false);
         }

      }

      local_58._8_8_ = local_70;
   }

   DAP::Source::compute_checksums((Source*)local_60);
   local_48 = *param_2;
   if (*param_3 == false) {
      if (( *(undefined8**)( this + 0x1d0 ) != (undefined8*)0x0 ) && ( piVar6 = (int*)**(undefined8**)( this + 0x1d0 ) ),piVar6 != (int*)0x0) {
         do {
            cVar5 = String::operator ==((String*)( piVar6 + 6 ), (String*)( local_58 + 8 ));
            if (( cVar5 != '\0' ) && ( piVar6[8] == local_48 )) {
               local_68 = *piVar6;
               plVar1 = *(long**)( this + 0x1d0 );
               if (plVar1 != (long*)0x0) {
                  if (plVar1 == *(long**)( piVar6 + 0xe )) {
                     lVar7 = *(long*)( piVar6 + 10 );
                     if ((int*)*plVar1 == piVar6) {
                        *plVar1 = lVar7;
                     }

                     lVar2 = *(long*)( piVar6 + 0xc );
                     if ((int*)plVar1[1] == piVar6) {
                        plVar1[1] = lVar2;
                     }

                     if (lVar2 != 0) {
                        *(long*)( lVar2 + 0x28 ) = lVar7;
                        lVar7 = *(long*)( piVar6 + 10 );
                     }

                     if (lVar7 != 0) {
                        *(long*)( lVar7 + 0x30 ) = lVar2;
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)( piVar6 + 6 ));
                     CowData<char32_t>::_unref((CowData<char32_t>*)( piVar6 + 4 ));
                     Array::~Array((Array*)( piVar6 + 2 ));
                     Memory::free_static(piVar6, false);
                     *(int*)( plVar1 + 2 ) = (int)plVar1[2] + -1;
                  }
 else {
                     _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                  }

                  if (*(int*)( (long)*(void**)( this + 0x1d0 ) + 0x10 ) == 0) {
                     Memory::free_static(*(void**)( this + 0x1d0 ), false);
                     *(undefined8*)( this + 0x1d0 ) = 0;
                  }

               }

               break;
            }

            piVar6 = *(int**)( piVar6 + 10 );
         }
 while ( piVar6 != (int*)0x0 );
      }

   }
 else {
      local_68 = *(int*)( this + 0x1c0 );
      *(int*)( this + 0x1c0 ) = local_68 + 1;
      if (*(long*)( this + 0x1d0 ) == 0) {
         pauVar8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])( this + 0x1d0 ) = pauVar8;
         *(undefined4*)pauVar8[1] = 0;
         *pauVar8 = (undefined1[16])0x0;
      }

      piVar6 = (int*)operator_new(0x40, DefaultAllocator::alloc);
      *piVar6 = 0;
      *(undefined1*)( piVar6 + 1 ) = 0;
      Array::Array((Array*)( piVar6 + 2 ));
      piVar6[8] = 0;
      *piVar6 = local_68;
      piVar6[0xe] = 0;
      piVar6[0xf] = 0;
      *(undefined1*)( piVar6 + 1 ) = local_64;
      *(undefined1(*) [16])( piVar6 + 4 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( piVar6 + 10 ) = (undefined1[16])0x0;
      Array::operator =((Array*)( piVar6 + 2 ), local_60);
      if (*(long*)( piVar6 + 4 ) != local_58._0_8_) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( piVar6 + 4 ), (CowData*)local_58);
      }

      if (*(long*)( piVar6 + 6 ) != local_58._8_8_) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( piVar6 + 6 ), (CowData*)( local_58 + 8 ));
      }

      piVar6[8] = local_48;
      plVar1 = *(long**)( this + 0x1d0 );
      lVar7 = plVar1[1];
      piVar6[10] = 0;
      piVar6[0xb] = 0;
      *(long**)( piVar6 + 0xe ) = plVar1;
      *(long*)( piVar6 + 0xc ) = lVar7;
      if (lVar7 != 0) {
         *(int**)( lVar7 + 0x28 ) = piVar6;
      }

      plVar1[1] = (long)piVar6;
      if (*plVar1 == 0) {
         *plVar1 = (long)piVar6;
      }

      *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   }

   notify_breakpoint((Breakpoint*)this, (bool*)&local_68);
   uVar4 = local_58._8_8_;
   if (local_58._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_58._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58._8_8_ = 0;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }

   }

   uVar4 = local_58._0_8_;
   if (local_58._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_58._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_58._8_8_;
         local_58 = auVar3 << 0x40;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }

   }

   Array::~Array(local_60);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* DebugAdapterProtocol::parse_variant(Variant const&) */int DebugAdapterProtocol::parse_variant(Variant *param_1) {
   long *plVar1;
   HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>> *this;
   code *pcVar2;
   char cVar3;
   int iVar4;
   int iVar5;
   Variant *pVVar6;
   Object *pOVar7;
   int *piVar8;
   undefined4 *puVar9;
   long lVar10;
   CowData<char32_t> *pCVar11;
   Variant *in_RSI;
   long lVar12;
   long in_FS_OFFSET;
   undefined8 uVar13;
   double dVar14;
   undefined8 in_XMM1_Qa;
   String *local_1d0;
   String *local_1c8;
   Variant *local_1b0;
   Variable *local_1a8;
   int local_19c;
   String *local_198;
   String *local_190;
   CowData<char32_t> *local_188;
   String *local_180;
   String *local_178;
   String *local_170;
   String *local_168;
   CowData<char32_t> *local_160;
   int local_154;
   int local_150[2];
   int local_148[2];
   int local_140[2];
   undefined1 local_138[16];
   undefined8 local_128;
   int local_120;
   undefined1 local_118[16];
   undefined8 local_108;
   int local_100;
   undefined1 local_f8[16];
   undefined8 local_e8;
   int local_e0;
   String local_d8[8];
   CowData<char32_t> aCStack_d0[8];
   undefined8 local_c8;
   int local_c0;
   undefined8 local_b8;
   undefined8 local_b0;
   Vector2 local_a8[16];
   int local_98[8];
   int local_78[3];
   Vector3 local_6c[12];
   Vector3 local_60[12];
   Vector3 local_54[20];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (*(undefined4*)in_RSI) {
      case 5:
      case 6:
    local_19c = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = local_19c + 1;
    local_148[0] = local_19c;
    uVar13 = Variant::operator_cast_to_Vector2(in_RSI);
    Variant::get_type_name((CowData *)local_140,(*(int *)in_RSI == 5) + '\x02');
    local_f8 = (undefined1  [16])0x0;
    _local_d8 = (undefined1  [16])0x0;
    local_e8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    String::parse_latin1((String *)local_f8,"x");
    String::parse_latin1(local_d8,"y");
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)local_140);
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)local_140);
    rtos((double)(float)uVar13);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_f8 + 8),(CowData *)local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
    rtos((double)(float)((ulong)uVar13 >> 0x20));
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_d8 + 8),(CowData *)local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
    Array::Array((Array *)local_138);
    Dictionary::Dictionary((Dictionary *)local_118);
    Variant::Variant((Variant *)local_78,(String *)local_f8);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_118);
    Variant::operator=(pVVar6,(Variant *)local_78);
    cVar3 = Variant::needs_deinit[local_98[0]];
    goto joined_r0x0010a59a;
      case 7:
      case 8:
    local_19c = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = local_19c + 1;
    local_154 = local_19c;
    uVar13 = Variant::operator_cast_to_Rect2(in_RSI);
    Variant::get_type_name((CowData *)local_150,(*(int *)in_RSI == 7) + '\x02');
    local_138 = (undefined1  [16])0x0;
    local_118 = (undefined1  [16])0x0;
    local_f8 = (undefined1  [16])0x0;
    _local_d8 = (undefined1  [16])0x0;
    local_128 = 0;
    local_120 = 0;
    local_108 = 0;
    local_100 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    String::parse_latin1((String *)local_138,"x");
    String::parse_latin1((String *)local_118,"y");
    String::parse_latin1((String *)local_f8,"w");
    String::parse_latin1(local_d8,"h");
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)local_150);
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)local_150);
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)local_150);
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)local_150);
    rtos((double)(float)uVar13);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_138 + 8),(CowData *)local_140);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
    rtos((double)(float)((ulong)uVar13 >> 0x20));
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_118 + 8),(CowData *)local_140);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
    rtos((double)(float)in_XMM1_Qa);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_f8 + 8),(CowData *)local_140);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
    dVar14 = (double)(float)((ulong)in_XMM1_Qa >> 0x20);
    goto LAB_001085ca;
      case 9:
      case 10:
    local_19c = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = local_19c + 1;
    local_150[0] = local_19c;
    local_b8 = Variant::operator_cast_to_Vector3(in_RSI);
    local_b0 = CONCAT44(local_b0._4_4_,(int)in_XMM1_Qa);
    Variant::get_type_name((CowData *)local_148,(*(int *)in_RSI == 9) + '\x02');
    local_118 = (undefined1  [16])0x0;
    local_f8 = (undefined1  [16])0x0;
    _local_d8 = (undefined1  [16])0x0;
    local_108 = 0;
    local_100 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    String::parse_latin1((String *)local_118,"x");
    String::parse_latin1((String *)local_f8,"y");
    String::parse_latin1(local_d8,"z");
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)local_148);
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)local_148);
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)local_148);
    rtos((double)(float)local_b8);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_118 + 8),(CowData *)local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
    rtos((double)local_b8._4_4_);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_f8 + 8),(CowData *)local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
    rtos((double)(float)local_b0);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_d8 + 8),(CowData *)local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
    Array::Array((Array *)local_140);
    Dictionary::Dictionary((Dictionary *)local_138);
    Variant::Variant((Variant *)local_78,(String *)local_118);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_78);
    cVar3 = Variant::needs_deinit[local_98[0]];
    goto joined_r0x00109be2;
      case 0xb:
    local_19c = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = local_19c + 1;
    local_150[0] = local_19c;
    Variant::operator_cast_to_Transform2D((Variant *)&local_b8);
    Variant::get_type_name((CowData *)local_148,5);
    local_118 = (undefined1  [16])0x0;
    local_f8 = (undefined1  [16])0x0;
    _local_d8 = (undefined1  [16])0x0;
    local_108 = 0;
    local_100 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    String::parse_latin1((String *)local_118,"x");
    String::parse_latin1((String *)local_f8,"y");
    String::parse_latin1(local_d8,"origin");
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)local_148);
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)local_148);
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)local_148);
    Vector2::operator_cast_to_String((Vector2 *)local_138);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_118 + 8),(CowData *)local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
    Vector2::operator_cast_to_String((Vector2 *)local_138);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_f8 + 8),(CowData *)local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
    Vector2::operator_cast_to_String((Vector2 *)local_138);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_d8 + 8),(CowData *)local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
    Variant::Variant((Variant *)local_78,(Variant *)&local_b8);
    local_100 = parse_variant(param_1);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_1b0 = (Variant *)local_118;
    Variant::Variant((Variant *)local_78,(Vector2 *)&local_b0);
    local_e0 = parse_variant(param_1);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_a8);
    local_c0 = parse_variant(param_1);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Array::Array((Array *)local_140);
    Dictionary::Dictionary((Dictionary *)local_138);
    Variant::Variant((Variant *)local_78,(String *)local_1b0);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_78);
    cVar3 = Variant::needs_deinit[local_98[0]];
joined_r0x00109be2:
    if (cVar3 != '\0') {
      Variant::_clear_internal();
    }
    local_168 = (String *)&local_108;
    local_170 = (String *)(local_118 + 8);
    local_178 = (String *)&local_c8;
    local_180 = local_d8 + 8;
    local_190 = (String *)&local_e8;
    local_198 = (String *)(local_f8 + 8);
    local_1a8 = (Variable *)local_f8;
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_170);
    Variant::Variant((Variant *)local_98,"value");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_168);
    Variant::Variant((Variant *)local_98,"type");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_100);
    Variant::Variant((Variant *)local_98,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(Dictionary *)local_138);
    Array::push_back((Variant *)local_140);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_138);
    Dictionary::Dictionary((Dictionary *)local_138);
    Variant::Variant((Variant *)local_78,(String *)local_1a8);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_198);
    Variant::Variant((Variant *)local_98,"value");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_190);
    Variant::Variant((Variant *)local_98,"type");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_e0);
    Variant::Variant((Variant *)local_98,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(Dictionary *)local_138);
    Array::push_back((Variant *)local_140);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_138);
    Dictionary::Dictionary((Dictionary *)local_138);
    Variant::Variant((Variant *)local_78,local_d8);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_180);
    Variant::Variant((Variant *)local_98,"value");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_178);
    Variant::Variant((Variant *)local_98,"type");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_c0);
    Variant::Variant((Variant *)local_98,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(Dictionary *)local_138);
    Array::push_back((Variant *)local_140);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
LAB_0010831a:
    local_188 = (CowData<char32_t> *)local_148;
    local_1a8 = (Variable *)local_f8;
    local_1b0 = (Variant *)local_118;
    Dictionary::~Dictionary((Dictionary *)local_138);
    HashMap<int,Array,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Array>>>
    ::insert((int *)local_138,(Array *)(param_1 + 0x208),SUB81(local_150,0));
    Array::~Array((Array *)local_140);
    DAP::Variable::~Variable((Variable *)local_d8);
    DAP::Variable::~Variable(local_1a8);
    DAP::Variable::~Variable((Variable *)local_1b0);
    CowData<char32_t>::_unref(local_188);
    break;
      default:
    goto switchD_001076a2_caseD_c;
      case 0xe:
    local_19c = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = local_19c + 1;
    local_140[0] = local_19c;
    local_b8 = Variant::operator_cast_to_Plane(in_RSI);
    local_e8 = 0;
    local_f8 = (undefined1  [16])0x0;
    _local_d8 = (undefined1  [16])0x0;
    local_e0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b0 = in_XMM1_Qa;
    String::parse_latin1((String *)local_f8,"d");
    String::parse_latin1(local_d8,"normal");
    Variant::get_type_name((CowData<char32_t> *)local_118,3);
    CowData<char32_t>::operator=((CowData<char32_t> *)&local_e8,(CowData *)local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
    Variant::get_type_name((CowData<char32_t> *)local_118,9);
    CowData<char32_t>::operator=((CowData<char32_t> *)&local_c8,(CowData *)local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
    rtos((double)local_b0._4_4_);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_f8 + 8),(CowData *)local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
    Vector3::operator_cast_to_String((Vector3 *)local_118);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_d8 + 8),(CowData *)local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
    Variant::Variant((Variant *)local_78,(Vector3 *)&local_b8);
    local_c0 = parse_variant(param_1);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Array::Array((Array *)local_138);
    Dictionary::Dictionary((Dictionary *)local_118);
    Variant::Variant((Variant *)local_78,(String *)local_f8);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_118);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)(local_f8 + 8));
    Variant::Variant((Variant *)local_98,"value");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_118);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)&local_e8);
    Variant::Variant((Variant *)local_98,"type");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_118);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_e0);
    Variant::Variant((Variant *)local_98,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_118);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(Dictionary *)local_118);
    Array::push_back((Variant *)local_138);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_118);
    Dictionary::Dictionary((Dictionary *)local_118);
    Variant::Variant((Variant *)local_78,local_d8);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_118);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_d8 + 8);
    Variant::Variant((Variant *)local_98,"value");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_118);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)&local_c8);
    Variant::Variant((Variant *)local_98,"type");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_118);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_c0);
    Variant::Variant((Variant *)local_98,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_118);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(Dictionary *)local_118);
    Array::push_back((Variant *)local_138);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    goto LAB_0010ad17;
      case 0xf:
    local_19c = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = local_19c + 1;
    local_154 = local_19c;
    Variant::operator_cast_to_Quaternion((Variant *)&local_b8);
    Variant::get_type_name((CowData *)local_150,3);
    local_138 = (undefined1  [16])0x0;
    local_118 = (undefined1  [16])0x0;
    local_f8 = (undefined1  [16])0x0;
    _local_d8 = (undefined1  [16])0x0;
    local_128 = 0;
    local_120 = 0;
    local_108 = 0;
    local_100 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    String::parse_latin1((String *)local_138,"x");
    String::parse_latin1((String *)local_118,"y");
    String::parse_latin1((String *)local_f8,"z");
    String::parse_latin1(local_d8,"w");
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)local_150);
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)local_150);
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)local_150);
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)local_150);
    rtos((double)(float)local_b8);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_138 + 8),(CowData *)local_140);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
    rtos((double)local_b8._4_4_);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_118 + 8),(CowData *)local_140);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
    rtos((double)(float)local_b0);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_f8 + 8),(CowData *)local_140);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
    dVar14 = (double)local_b0._4_4_;
    goto LAB_001085ca;
      case 0x10:
    local_19c = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = local_19c + 1;
    local_148[0] = local_19c;
    Variant::operator_cast_to_AABB((Variant *)&local_b8);
    Variant::get_type_name((CowData *)local_140,9);
    local_f8 = (undefined1  [16])0x0;
    _local_d8 = (undefined1  [16])0x0;
    local_e8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    String::parse_latin1((String *)local_f8,"position");
    String::parse_latin1(local_d8,"size");
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)local_140);
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)local_140);
    Vector3::operator_cast_to_String((Vector3 *)local_118);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_f8 + 8),(CowData *)local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
    Vector3::operator_cast_to_String((Vector3 *)local_118);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_d8 + 8),(CowData *)local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
    Variant::Variant((Variant *)local_78,(Variant *)&local_b8);
    local_e0 = parse_variant(param_1);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_1a8 = (Variable *)local_f8;
    local_1b0 = (Variant *)local_118;
    Variant::Variant((Variant *)local_78,(Vector3 *)((long)&local_b0 + 4));
    local_c0 = parse_variant(param_1);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Array::Array((Array *)local_138);
    Dictionary::Dictionary((Dictionary *)local_1b0);
    Variant::Variant((Variant *)local_78,(String *)local_1a8);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[](local_1b0);
    Variant::operator=(pVVar6,(Variant *)local_78);
    cVar3 = Variant::needs_deinit[local_98[0]];
joined_r0x0010a59a:
    if (cVar3 != '\0') {
      Variant::_clear_internal();
    }
    local_178 = (String *)&local_c8;
    local_180 = local_d8 + 8;
    local_190 = (String *)&local_e8;
    local_198 = (String *)(local_f8 + 8);
    local_1a8 = (Variable *)local_f8;
    local_1b0 = (Variant *)local_118;
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_198);
    Variant::Variant((Variant *)local_98,"value");
    pVVar6 = (Variant *)Dictionary::operator[](local_1b0);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_190);
    Variant::Variant((Variant *)local_98,"type");
    pVVar6 = (Variant *)Dictionary::operator[](local_1b0);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_e0);
    Variant::Variant((Variant *)local_98,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[](local_1b0);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(Dictionary *)local_1b0);
    Array::push_back((Variant *)local_138);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_1b0);
    Dictionary::Dictionary((Dictionary *)local_1b0);
    Variant::Variant((Variant *)local_78,local_d8);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[](local_1b0);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_180);
    Variant::Variant((Variant *)local_98,"value");
    pVVar6 = (Variant *)Dictionary::operator[](local_1b0);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_178);
    Variant::Variant((Variant *)local_98,"type");
    pVVar6 = (Variant *)Dictionary::operator[](local_1b0);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_c0);
    Variant::Variant((Variant *)local_98,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[](local_1b0);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(Dictionary *)local_1b0);
    Array::push_back((Variant *)local_138);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_1b0);
    HashMap<int,Array,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Array>>>
    ::insert((int *)local_1b0,(Array *)(param_1 + 0x208),SUB81(local_148,0));
    Array::~Array((Array *)local_138);
    DAP::Variable::~Variable((Variable *)local_d8);
    DAP::Variable::~Variable(local_1a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
    break;
      case 0x11:
    local_19c = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = local_19c + 1;
    local_150[0] = local_19c;
    Variant::operator_cast_to_Basis((Variant *)local_78);
    Variant::get_type_name((CowData *)local_148,9);
    local_118 = (undefined1  [16])0x0;
    local_f8 = (undefined1  [16])0x0;
    _local_d8 = (undefined1  [16])0x0;
    local_108 = 0;
    local_100 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    String::parse_latin1((String *)local_118,"x");
    String::parse_latin1((String *)local_f8,"y");
    String::parse_latin1(local_d8,"z");
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)local_148);
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)local_148);
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)local_148);
    Vector3::operator_cast_to_String((Vector3 *)local_138);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_118 + 8),(CowData *)local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
    Vector3::operator_cast_to_String((Vector3 *)local_138);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_f8 + 8),(CowData *)local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
    Vector3::operator_cast_to_String((Vector3 *)local_138);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_d8 + 8),(CowData *)local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
    Variant::Variant((Variant *)local_98,(Variant *)local_78);
    local_100 = parse_variant(param_1);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_1a8 = (Variable *)local_f8;
    local_1b0 = (Variant *)local_118;
    Variant::Variant((Variant *)local_98,local_6c);
    local_e0 = parse_variant(param_1);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_98,local_60);
    local_c0 = parse_variant(param_1);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Array::Array((Array *)local_140);
    Dictionary::Dictionary((Dictionary *)local_138);
    Variant::Variant((Variant *)local_98,(String *)local_1b0);
    Variant::Variant((Variant *)&local_b8,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_98);
    if (Variant::needs_deinit[(int)(float)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_98,(String *)(local_118 + 8));
    Variant::Variant((Variant *)&local_b8,"value");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_98);
    if (Variant::needs_deinit[(int)(float)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_98,(String *)&local_108);
    Variant::Variant((Variant *)&local_b8,"type");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_98);
    if (Variant::needs_deinit[(int)(float)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_98,local_100);
    Variant::Variant((Variant *)&local_b8,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_98);
    if (Variant::needs_deinit[(int)(float)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_98,(Dictionary *)local_138);
    Array::push_back((Variant *)local_140);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_138);
    Dictionary::Dictionary((Dictionary *)local_138);
    Variant::Variant((Variant *)local_98,(String *)local_1a8);
    Variant::Variant((Variant *)&local_b8,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_98);
    if (Variant::needs_deinit[(int)(float)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_98,(String *)(local_f8 + 8));
    Variant::Variant((Variant *)&local_b8,"value");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_98);
    if (Variant::needs_deinit[(int)(float)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_98,(String *)&local_e8);
    Variant::Variant((Variant *)&local_b8,"type");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_98);
    if (Variant::needs_deinit[(int)(float)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_98,local_e0);
    Variant::Variant((Variant *)&local_b8,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_98);
    if (Variant::needs_deinit[(int)(float)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_98,(Dictionary *)local_138);
    Array::push_back((Variant *)local_140);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_138);
    Dictionary::Dictionary((Dictionary *)local_138);
    Variant::Variant((Variant *)local_98,local_d8);
    Variant::Variant((Variant *)&local_b8,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_98);
    if (Variant::needs_deinit[(int)(float)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_98,local_d8 + 8);
    Variant::Variant((Variant *)&local_b8,"value");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_98);
    if (Variant::needs_deinit[(int)(float)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_98,(String *)&local_c8);
    Variant::Variant((Variant *)&local_b8,"type");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_98);
    if (Variant::needs_deinit[(int)(float)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_98,local_c0);
    Variant::Variant((Variant *)&local_b8,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
    Variant::operator=(pVVar6,(Variant *)local_98);
    if (Variant::needs_deinit[(int)(float)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_98,(Dictionary *)local_138);
    Array::push_back((Variant *)local_140);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    goto LAB_0010831a;
      case 0x12:
    local_19c = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = local_19c + 1;
    local_140[0] = local_19c;
    Variant::operator_cast_to_Transform3D((Variant *)local_78);
    local_f8 = (undefined1  [16])0x0;
    _local_d8 = (undefined1  [16])0x0;
    local_e8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    String::parse_latin1((String *)local_f8,"basis");
    String::parse_latin1(local_d8,"origin");
    Variant::get_type_name((CowData<char32_t> *)local_118,0x11);
    CowData<char32_t>::operator=((CowData<char32_t> *)&local_e8,(CowData *)local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
    Variant::get_type_name((CowData<char32_t> *)local_118,9);
    CowData<char32_t>::operator=((CowData<char32_t> *)&local_c8,(CowData *)local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
    Basis::operator_cast_to_String((Basis *)local_118);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_f8 + 8),(CowData *)local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
    Vector3::operator_cast_to_String((Vector3 *)local_118);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_d8 + 8),(CowData *)local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
    Variant::Variant((Variant *)local_98,(Variant *)local_78);
    local_e0 = parse_variant(param_1);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_1a8 = (Variable *)local_f8;
    local_1b0 = (Variant *)local_118;
    Variant::Variant((Variant *)local_98,local_54);
    local_c0 = parse_variant(param_1);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Array::Array((Array *)local_138);
    Dictionary::Dictionary((Dictionary *)local_1b0);
    Variant::Variant((Variant *)local_98,(String *)local_1a8);
    Variant::Variant((Variant *)&local_b8,"name");
    pVVar6 = (Variant *)Dictionary::operator[](local_1b0);
    Variant::operator=(pVVar6,(Variant *)local_98);
    if (Variant::needs_deinit[(int)(float)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_98,(String *)(local_f8 + 8));
    Variant::Variant((Variant *)&local_b8,"value");
    pVVar6 = (Variant *)Dictionary::operator[](local_1b0);
    Variant::operator=(pVVar6,(Variant *)local_98);
    if (Variant::needs_deinit[(int)(float)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_98,(String *)&local_e8);
    Variant::Variant((Variant *)&local_b8,"type");
    pVVar6 = (Variant *)Dictionary::operator[](local_1b0);
    Variant::operator=(pVVar6,(Variant *)local_98);
    if (Variant::needs_deinit[(int)(float)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_98,local_e0);
    Variant::Variant((Variant *)&local_b8,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[](local_1b0);
    Variant::operator=(pVVar6,(Variant *)local_98);
    if (Variant::needs_deinit[(int)(float)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_98,(Dictionary *)local_1b0);
    Array::push_back((Variant *)local_138);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_1b0);
    Dictionary::Dictionary((Dictionary *)local_1b0);
    Variant::Variant((Variant *)local_98,local_d8);
    Variant::Variant((Variant *)&local_b8,"name");
    pVVar6 = (Variant *)Dictionary::operator[](local_1b0);
    Variant::operator=(pVVar6,(Variant *)local_98);
    if (Variant::needs_deinit[(int)(float)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_98,local_d8 + 8);
    Variant::Variant((Variant *)&local_b8,"value");
    pVVar6 = (Variant *)Dictionary::operator[](local_1b0);
    Variant::operator=(pVVar6,(Variant *)local_98);
    if (Variant::needs_deinit[(int)(float)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_98,(String *)&local_c8);
    Variant::Variant((Variant *)&local_b8,"type");
    pVVar6 = (Variant *)Dictionary::operator[](local_1b0);
    Variant::operator=(pVVar6,(Variant *)local_98);
    if (Variant::needs_deinit[(int)(float)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_98,local_c0);
    Variant::Variant((Variant *)&local_b8,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[](local_1b0);
    Variant::operator=(pVVar6,(Variant *)local_98);
    if (Variant::needs_deinit[(int)(float)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_98,(Dictionary *)local_1b0);
    Array::push_back((Variant *)local_138);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
LAB_0010ad17:
    local_1a8 = (Variable *)local_f8;
    local_1b0 = (Variant *)local_118;
    Dictionary::~Dictionary((Dictionary *)local_1b0);
    HashMap<int,Array,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Array>>>
    ::insert((int *)local_1b0,(Array *)(param_1 + 0x208),SUB81(local_140,0));
    Array::~Array((Array *)local_138);
    DAP::Variable::~Variable((Variable *)local_d8);
    DAP::Variable::~Variable(local_1a8);
    break;
      case 0x14:
    local_19c = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = local_19c + 1;
    local_154 = local_19c;
    uVar13 = Variant::operator_cast_to_Color(in_RSI);
    Variant::get_type_name((CowData *)local_150,3);
    local_138 = (undefined1  [16])0x0;
    local_118 = (undefined1  [16])0x0;
    local_f8 = (undefined1  [16])0x0;
    _local_d8 = (undefined1  [16])0x0;
    local_128 = 0;
    local_120 = 0;
    local_108 = 0;
    local_100 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    String::parse_latin1((String *)local_138,"r");
    String::parse_latin1((String *)local_118,"g");
    String::parse_latin1((String *)local_f8,"b");
    String::parse_latin1(local_d8,"a");
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)local_150);
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)local_150);
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)local_150);
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)local_150);
    rtos((double)(float)uVar13);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_138 + 8),(CowData *)local_140);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
    rtos((double)(float)((ulong)uVar13 >> 0x20));
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_118 + 8),(CowData *)local_140);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
    rtos((double)(float)in_XMM1_Qa);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_f8 + 8),(CowData *)local_140);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
    dVar14 = (double)(float)((ulong)in_XMM1_Qa >> 0x20);
LAB_001085ca:
    local_160 = (CowData<char32_t> *)local_150;
    local_168 = (String *)&local_108;
    local_170 = (String *)(local_118 + 8);
    local_178 = (String *)&local_c8;
    local_190 = (String *)&local_e8;
    local_198 = (String *)(local_f8 + 8);
    local_1a8 = (Variable *)local_f8;
    local_1b0 = (Variant *)local_118;
    local_1c8 = (String *)&local_128;
    local_1d0 = (String *)(local_138 + 8);
    rtos(dVar14);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_d8 + 8),(CowData *)local_140);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
    Array::Array((Array *)local_148);
    Dictionary::Dictionary((Dictionary *)local_140);
    Variant::Variant((Variant *)local_78,(String *)local_138);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_140);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_1d0);
    Variant::Variant((Variant *)local_98,"value");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_140);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_1c8);
    Variant::Variant((Variant *)local_98,"type");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_140);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_120);
    Variant::Variant((Variant *)local_98,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_140);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(Dictionary *)local_140);
    Array::push_back((Variant *)local_148);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_140);
    Dictionary::Dictionary((Dictionary *)local_140);
    Variant::Variant((Variant *)local_78,(String *)local_1b0);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_140);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_170);
    Variant::Variant((Variant *)local_98,"value");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_140);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_168);
    Variant::Variant((Variant *)local_98,"type");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_140);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_100);
    Variant::Variant((Variant *)local_98,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_140);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(Dictionary *)local_140);
    Array::push_back((Variant *)local_148);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_140);
    Dictionary::Dictionary((Dictionary *)local_140);
    Variant::Variant((Variant *)local_78,(String *)local_1a8);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_140);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_198);
    Variant::Variant((Variant *)local_98,"value");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_140);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_190);
    Variant::Variant((Variant *)local_98,"type");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_140);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_e0);
    Variant::Variant((Variant *)local_98,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_140);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(Dictionary *)local_140);
    Array::push_back((Variant *)local_148);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_140);
    Dictionary::Dictionary((Dictionary *)local_140);
    Variant::Variant((Variant *)local_78,local_d8);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_140);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_d8 + 8);
    Variant::Variant((Variant *)local_98,"value");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_140);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_178);
    Variant::Variant((Variant *)local_98,"type");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_140);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_c0);
    Variant::Variant((Variant *)local_98,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_140);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(Dictionary *)local_140);
    Array::push_back((Variant *)local_148);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_140);
    HashMap<int,Array,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Array>>>
    ::insert(local_140,(Array *)(param_1 + 0x208),SUB81(&local_154,0));
    Array::~Array((Array *)local_148);
    DAP::Variable::~Variable((Variable *)local_d8);
    DAP::Variable::~Variable(local_1a8);
    DAP::Variable::~Variable((Variable *)local_1b0);
    DAP::Variable::~Variable((Variable *)local_138);
    CowData<char32_t>::_unref(local_160);
    break;
      case 0x18:
    pOVar7 = Variant::operator_cast_to_Object_(in_RSI);
    if (pOVar7 != (Object *)0x0) {
      lVar12 = __dynamic_cast(pOVar7,&Object::typeinfo,&EncodedObjectAsID::typeinfo,0);
      if (lVar12 != 0) {
        local_f8._0_8_ = EncodedObjectAsID::get_object_id();
        this = (HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>
                *)(param_1 + 0x238);
        cVar3 = HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>
                ::_lookup_pos(this,(ObjectID *)local_f8._0_8_,(uint *)local_d8);
        if (cVar3 == '\0') {
          local_19c = *(int *)(param_1 + 0x1c8);
          *(int *)(param_1 + 0x1c8) = local_19c + 1;
          local_118._0_4_ = local_19c;
          HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>
          ::insert((ObjectID *)local_d8,(int *)this,SUB81(local_f8,0));
        }
        else {
          piVar8 = (int *)HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>
                          ::operator[](this,(ObjectID *)local_f8);
          local_19c = *piVar8;
        }
        break;
      }
    }
    goto switchD_001076a2_caseD_c;
      case 0x1b:
    iVar4 = 0;
    local_19c = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = local_19c + 1;
    local_140[0] = local_19c;
    Variant::operator_cast_to_Dictionary((Variant *)local_138);
    Array::Array((Array *)local_118);
    iVar5 = Dictionary::size();
    if (0 < iVar5) {
      do {
        _local_d8 = (undefined1  [16])0x0;
        local_c8 = 0;
        local_c0 = 0;
        Dictionary::get_key_at_index((int)(Variant *)local_78);
        Variant::operator_cast_to_String((Variant *)local_f8);
        CowData<char32_t>::operator=((CowData<char32_t> *)local_d8,(CowData *)local_f8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::get_value_at_index((int)&local_b8);
        Variant::get_type_name((Variant *)local_f8,local_b8 & 0xffffffff);
        CowData<char32_t>::operator=((CowData<char32_t> *)&local_c8,(CowData *)local_f8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
        Variant::operator_cast_to_String((Variant *)local_f8);
        CowData<char32_t>::operator=((CowData<char32_t> *)(local_d8 + 8),(CowData *)local_f8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
        local_c0 = parse_variant(param_1);
        Dictionary::Dictionary((Dictionary *)local_f8);
        Variant::Variant((Variant *)local_78,local_d8);
        Variant::Variant((Variant *)local_98,"name");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_f8);
        Variant::operator=(pVVar6,(Variant *)local_78);
        if (Variant::needs_deinit[local_98[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_78,local_d8 + 8);
        Variant::Variant((Variant *)local_98,"value");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_f8);
        Variant::operator=(pVVar6,(Variant *)local_78);
        if (Variant::needs_deinit[local_98[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_78,(String *)&local_c8);
        Variant::Variant((Variant *)local_98,"type");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_f8);
        Variant::operator=(pVVar6,(Variant *)local_78);
        if (Variant::needs_deinit[local_98[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_78,local_c0);
        Variant::Variant((Variant *)local_98,"variablesReference");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_f8);
        Variant::operator=(pVVar6,(Variant *)local_78);
        if (Variant::needs_deinit[local_98[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_78,(Dictionary *)local_f8);
        Array::push_back((Variant *)local_118);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::~Dictionary((Dictionary *)local_f8);
        if (Variant::needs_deinit[(int)(float)local_b8] != '\0') {
          Variant::_clear_internal();
        }
        iVar4 = iVar4 + 1;
        DAP::Variable::~Variable((Variable *)local_d8);
        iVar5 = Dictionary::size();
      } while (iVar4 < iVar5);
    }
    HashMap<int,Array,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Array>>>
    ::insert((int *)local_d8,(Array *)(param_1 + 0x208),SUB81(local_140,0));
    Array::~Array((Array *)local_118);
    Dictionary::~Dictionary((Dictionary *)local_138);
    break;
      case 0x1c:
    local_19c = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = local_19c + 1;
    local_148[0] = local_19c;
    Variant::operator_cast_to_Array((Variant *)local_140);
    local_f8 = (undefined1  [16])0x0;
    local_e8 = 0;
    local_e0 = 0;
    String::parse_latin1((String *)local_f8,"size");
    Variant::get_type_name((CowData<char32_t> *)local_d8,2);
    CowData<char32_t>::operator=((CowData<char32_t> *)&local_e8,(CowData *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    Array::size();
    itos((long)local_d8);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_f8 + 8),(CowData *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    Array::Array((Array *)local_138);
    Dictionary::Dictionary((Dictionary *)local_d8);
    Variant::Variant((Variant *)local_78,(String *)local_f8);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)(local_f8 + 8));
    Variant::Variant((Variant *)local_98,"value");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)&local_e8);
    Variant::Variant((Variant *)local_98,"type");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_e0);
    Variant::Variant((Variant *)local_98,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(Dictionary *)local_d8);
    Array::push_back((Variant *)local_138);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_d8);
    for (iVar5 = 0; iVar4 = Array::size(), iVar5 < iVar4; iVar5 = iVar5 + 1) {
      local_c8 = 0;
      _local_d8 = (undefined1  [16])0x0;
      local_c0 = 0;
      itos((long)local_118);
      CowData<char32_t>::operator=((CowData<char32_t> *)local_d8,(CowData *)local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
      iVar4 = (int)(Variant *)local_140;
      puVar9 = (undefined4 *)Array::operator[](iVar4);
      Variant::get_type_name((CowData<char32_t> *)local_118,*puVar9);
      CowData<char32_t>::operator=((CowData<char32_t> *)&local_c8,(CowData *)local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
      Array::operator[](iVar4);
      Variant::operator_cast_to_String((Variant *)local_118);
      CowData<char32_t>::operator=((CowData<char32_t> *)(local_d8 + 8),(CowData *)local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
      Array::operator[](iVar4);
      local_c0 = parse_variant(param_1);
      Dictionary::Dictionary((Dictionary *)local_118);
      Variant::Variant((Variant *)local_78,local_d8);
      Variant::Variant((Variant *)local_98,"name");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_d8 + 8);
      Variant::Variant((Variant *)local_98,"value");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,(String *)&local_c8);
      Variant::Variant((Variant *)local_98,"type");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_c0);
      Variant::Variant((Variant *)local_98,"variablesReference");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,(Dictionary *)local_118);
      Array::push_back((Variant *)local_138);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)local_118);
      DAP::Variable::~Variable((Variable *)local_d8);
    }
    HashMap<int,Array,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Array>>>
    ::insert((int *)local_d8,(Array *)(param_1 + 0x208),SUB81(local_148,0));
    Array::~Array((Array *)local_138);
    DAP::Variable::~Variable((Variable *)local_f8);
    Array::~Array((Array *)local_140);
    break;
      case 0x1d:
    local_19c = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = local_19c + 1;
    local_148[0] = local_19c;
    Variant::operator_cast_to_Vector((Variant *)local_118);
    local_f8 = (undefined1  [16])0x0;
    local_e8 = 0;
    local_e0 = 0;
    String::parse_latin1((String *)local_f8,"size");
    Variant::get_type_name((CowData<char32_t> *)local_d8,2);
    CowData<char32_t>::operator=((CowData<char32_t> *)&local_e8,(CowData *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    itos((long)local_d8);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_f8 + 8),(CowData *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    Array::Array((Array *)local_140);
    Dictionary::Dictionary((Dictionary *)local_d8);
    Variant::Variant((Variant *)local_78,(String *)local_f8);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)(local_f8 + 8));
    Variant::Variant((Variant *)local_98,"value");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)&local_e8);
    Variant::Variant((Variant *)local_98,"type");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_e0);
    Variant::Variant((Variant *)local_98,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(Dictionary *)local_d8);
    Array::push_back((Variant *)local_140);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_d8);
    for (lVar12 = 0; (local_118._8_8_ != 0 && (lVar12 < *(long *)(local_118._8_8_ + -8)));
        lVar12 = lVar12 + 1) {
      local_c8 = 0;
      _local_d8 = (undefined1  [16])0x0;
      local_c0 = 0;
      itos((long)local_138);
      CowData<char32_t>::operator=((CowData<char32_t> *)local_d8,(CowData *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      String::parse_latin1((String *)&local_c8,"byte");
      if (local_118._8_8_ == 0) {
LAB_0010ea70:
        lVar10 = 0;
LAB_0010ea76:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar10,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar10 = *(long *)(local_118._8_8_ + -8);
      if (lVar10 <= lVar12) goto LAB_0010ea76;
      itos((long)local_138);
      CowData<char32_t>::operator=((CowData<char32_t> *)(local_d8 + 8),(CowData *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      Dictionary::Dictionary((Dictionary *)local_138);
      Variant::Variant((Variant *)local_78,local_d8);
      Variant::Variant((Variant *)local_98,"name");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_d8 + 8);
      Variant::Variant((Variant *)local_98,"value");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,(String *)&local_c8);
      Variant::Variant((Variant *)local_98,"type");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_c0);
      Variant::Variant((Variant *)local_98,"variablesReference");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,(Dictionary *)local_138);
      Array::push_back((Variant *)local_140);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)local_138);
      DAP::Variable::~Variable((Variable *)local_d8);
    }
    goto LAB_001092ca;
      case 0x1e:
    local_19c = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = local_19c + 1;
    local_148[0] = local_19c;
    Variant::operator_cast_to_Vector((Variant *)local_138);
    local_f8 = (undefined1  [16])0x0;
    local_e8 = 0;
    local_e0 = 0;
    String::parse_latin1((String *)local_f8,"size");
    Variant::get_type_name((CowData<char32_t> *)local_d8,2);
    CowData<char32_t>::operator=((CowData<char32_t> *)&local_e8,(CowData *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    itos((long)local_d8);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_f8 + 8),(CowData *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    Array::Array((Array *)local_140);
    Dictionary::Dictionary((Dictionary *)local_d8);
    Variant::Variant((Variant *)local_78,(String *)local_f8);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)(local_f8 + 8));
    Variant::Variant((Variant *)local_98,"value");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)&local_e8);
    Variant::Variant((Variant *)local_98,"type");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_e0);
    Variant::Variant((Variant *)local_98,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(Dictionary *)local_d8);
    Array::push_back((Variant *)local_140);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_d8);
    for (lVar12 = 0; (local_138._8_8_ != 0 && (lVar12 < *(long *)(local_138._8_8_ + -8)));
        lVar12 = lVar12 + 1) {
      local_c8 = 0;
      _local_d8 = (undefined1  [16])0x0;
      local_c0 = 0;
      itos((long)local_118);
      CowData<char32_t>::operator=((CowData<char32_t> *)local_d8,(CowData *)local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
      local_118._8_8_ = 3;
      local_118._0_8_ = &_LC129;
      String::parse_latin1((StrRange *)&local_c8);
      if (local_138._8_8_ == 0) goto LAB_0010ea70;
      lVar10 = *(long *)(local_138._8_8_ + -8);
      if (lVar10 <= lVar12) goto LAB_0010ea76;
      itos((long)local_118);
      CowData<char32_t>::operator=((CowData<char32_t> *)(local_d8 + 8),(CowData *)local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
      Dictionary::Dictionary((Dictionary *)local_118);
      Variant::Variant((Variant *)local_78,local_d8);
      Variant::Variant((Variant *)local_98,"name");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_d8 + 8);
      Variant::Variant((Variant *)local_98,"value");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,(String *)&local_c8);
      Variant::Variant((Variant *)local_98,"type");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_c0);
      Variant::Variant((Variant *)local_98,"variablesReference");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_118);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,(Dictionary *)local_118);
      Array::push_back((Variant *)local_140);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)local_118);
      DAP::Variable::~Variable((Variable *)local_d8);
    }
    HashMap<int,Array,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Array>>>
    ::insert((int *)local_d8,(Array *)(param_1 + 0x208),SUB81(local_148,0));
    Array::~Array((Array *)local_140);
    DAP::Variable::~Variable((Variable *)local_f8);
    uVar13 = local_138._8_8_;
    if (local_138._8_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_138._8_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_138._8_8_ = 0;
        Memory::free_static((void *)(uVar13 + -0x10),false);
      }
    }
    break;
      case 0x1f:
    local_19c = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = local_19c + 1;
    local_148[0] = local_19c;
    Variant::operator_cast_to_Vector((Variant *)local_118);
    local_f8 = (undefined1  [16])0x0;
    local_e8 = 0;
    local_e0 = 0;
    String::parse_latin1((String *)local_f8,"size");
    Variant::get_type_name((CowData<char32_t> *)local_d8,2);
    CowData<char32_t>::operator=((CowData<char32_t> *)&local_e8,(CowData *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    itos((long)local_d8);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_f8 + 8),(CowData *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    Array::Array((Array *)local_140);
    Dictionary::Dictionary((Dictionary *)local_d8);
    Variant::Variant((Variant *)local_78,(String *)local_f8);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)(local_f8 + 8));
    Variant::Variant((Variant *)local_98,"value");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)&local_e8);
    Variant::Variant((Variant *)local_98,"type");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_e0);
    Variant::Variant((Variant *)local_98,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(Dictionary *)local_d8);
    Array::push_back((Variant *)local_140);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_d8);
    for (lVar12 = 0; (local_118._8_8_ != 0 && (lVar12 < *(long *)(local_118._8_8_ + -8)));
        lVar12 = lVar12 + 1) {
      local_c8 = 0;
      _local_d8 = (undefined1  [16])0x0;
      local_c0 = 0;
      itos((long)local_138);
      CowData<char32_t>::operator=((CowData<char32_t> *)local_d8,(CowData *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      String::parse_latin1((String *)&local_c8,"long");
      if (local_118._8_8_ == 0) goto LAB_0010ea70;
      lVar10 = *(long *)(local_118._8_8_ + -8);
      if (lVar10 <= lVar12) goto LAB_0010ea76;
      itos((long)local_138);
      CowData<char32_t>::operator=((CowData<char32_t> *)(local_d8 + 8),(CowData *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      Dictionary::Dictionary((Dictionary *)local_138);
      Variant::Variant((Variant *)local_78,local_d8);
      Variant::Variant((Variant *)local_98,"name");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_d8 + 8);
      Variant::Variant((Variant *)local_98,"value");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,(String *)&local_c8);
      Variant::Variant((Variant *)local_98,"type");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_c0);
      Variant::Variant((Variant *)local_98,"variablesReference");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,(Dictionary *)local_138);
      Array::push_back((Variant *)local_140);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)local_138);
      DAP::Variable::~Variable((Variable *)local_d8);
    }
    goto LAB_001092ca;
      case 0x20:
    local_19c = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = local_19c + 1;
    local_148[0] = local_19c;
    Variant::operator_cast_to_Vector((Variant *)local_118);
    local_f8 = (undefined1  [16])0x0;
    local_e8 = 0;
    local_e0 = 0;
    String::parse_latin1((String *)local_f8,"size");
    Variant::get_type_name((CowData<char32_t> *)local_d8,2);
    CowData<char32_t>::operator=((CowData<char32_t> *)&local_e8,(CowData *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    itos((long)local_d8);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_f8 + 8),(CowData *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    Array::Array((Array *)local_140);
    Dictionary::Dictionary((Dictionary *)local_d8);
    Variant::Variant((Variant *)local_78,(String *)local_f8);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)(local_f8 + 8));
    Variant::Variant((Variant *)local_98,"value");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)&local_e8);
    Variant::Variant((Variant *)local_98,"type");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_e0);
    Variant::Variant((Variant *)local_98,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(Dictionary *)local_d8);
    Array::push_back((Variant *)local_140);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_d8);
    for (lVar12 = 0; (local_118._8_8_ != 0 && (lVar12 < *(long *)(local_118._8_8_ + -8)));
        lVar12 = lVar12 + 1) {
      local_c8 = 0;
      _local_d8 = (undefined1  [16])0x0;
      local_c0 = 0;
      itos((long)local_138);
      CowData<char32_t>::operator=((CowData<char32_t> *)local_d8,(CowData *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      String::parse_latin1((String *)&local_c8,"float");
      if (local_118._8_8_ == 0) goto LAB_0010ea70;
      lVar10 = *(long *)(local_118._8_8_ + -8);
      if (lVar10 <= lVar12) goto LAB_0010ea76;
      rtos((double)*(float *)(local_118._8_8_ + lVar12 * 4));
      CowData<char32_t>::operator=((CowData<char32_t> *)(local_d8 + 8),(CowData *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      Dictionary::Dictionary((Dictionary *)local_138);
      Variant::Variant((Variant *)local_78,local_d8);
      Variant::Variant((Variant *)local_98,"name");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_d8 + 8);
      Variant::Variant((Variant *)local_98,"value");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,(String *)&local_c8);
      Variant::Variant((Variant *)local_98,"type");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_c0);
      Variant::Variant((Variant *)local_98,"variablesReference");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,(Dictionary *)local_138);
      Array::push_back((Variant *)local_140);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)local_138);
      DAP::Variable::~Variable((Variable *)local_d8);
    }
    goto LAB_001092ca;
      case 0x21:
    local_19c = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = local_19c + 1;
    local_148[0] = local_19c;
    Variant::operator_cast_to_Vector((Variant *)local_118);
    local_f8 = (undefined1  [16])0x0;
    local_e8 = 0;
    local_e0 = 0;
    String::parse_latin1((String *)local_f8,"size");
    Variant::get_type_name((CowData<char32_t> *)local_d8,2);
    CowData<char32_t>::operator=((CowData<char32_t> *)&local_e8,(CowData *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    itos((long)local_d8);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_f8 + 8),(CowData *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    Array::Array((Array *)local_140);
    Dictionary::Dictionary((Dictionary *)local_d8);
    Variant::Variant((Variant *)local_78,(String *)local_f8);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)(local_f8 + 8));
    Variant::Variant((Variant *)local_98,"value");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)&local_e8);
    Variant::Variant((Variant *)local_98,"type");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_e0);
    Variant::Variant((Variant *)local_98,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(Dictionary *)local_d8);
    Array::push_back((Variant *)local_140);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_d8);
    for (lVar12 = 0; (local_118._8_8_ != 0 && (lVar12 < *(long *)(local_118._8_8_ + -8)));
        lVar12 = lVar12 + 1) {
      local_c8 = 0;
      _local_d8 = (undefined1  [16])0x0;
      local_c0 = 0;
      itos((long)local_138);
      CowData<char32_t>::operator=((CowData<char32_t> *)local_d8,(CowData *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      String::parse_latin1((String *)&local_c8,"double");
      if (local_118._8_8_ == 0) goto LAB_0010ea70;
      lVar10 = *(long *)(local_118._8_8_ + -8);
      if (lVar10 <= lVar12) goto LAB_0010ea76;
      rtos(*(double *)(local_118._8_8_ + lVar12 * 8));
      CowData<char32_t>::operator=((CowData<char32_t> *)(local_d8 + 8),(CowData *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      Dictionary::Dictionary((Dictionary *)local_138);
      Variant::Variant((Variant *)local_78,local_d8);
      Variant::Variant((Variant *)local_98,"name");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_d8 + 8);
      Variant::Variant((Variant *)local_98,"value");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,(String *)&local_c8);
      Variant::Variant((Variant *)local_98,"type");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_c0);
      Variant::Variant((Variant *)local_98,"variablesReference");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,(Dictionary *)local_138);
      Array::push_back((Variant *)local_140);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)local_138);
      DAP::Variable::~Variable((Variable *)local_d8);
    }
    goto LAB_001092ca;
      case 0x22:
    local_19c = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = local_19c + 1;
    local_148[0] = local_19c;
    Variant::operator_cast_to_Vector((Variant *)local_118);
    local_f8 = (undefined1  [16])0x0;
    local_e8 = 0;
    local_e0 = 0;
    String::parse_latin1((String *)local_f8,"size");
    Variant::get_type_name((CowData<char32_t> *)local_d8,2);
    CowData<char32_t>::operator=((CowData<char32_t> *)&local_e8,(CowData *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    itos((long)local_d8);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_f8 + 8),(CowData *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    Array::Array((Array *)local_140);
    Dictionary::Dictionary((Dictionary *)local_d8);
    Variant::Variant((Variant *)local_78,(String *)local_f8);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)(local_f8 + 8));
    Variant::Variant((Variant *)local_98,"value");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)&local_e8);
    Variant::Variant((Variant *)local_98,"type");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_e0);
    Variant::Variant((Variant *)local_98,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(Dictionary *)local_d8);
    Array::push_back((Variant *)local_140);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_d8);
    for (lVar12 = 0; (local_118._8_8_ != 0 && (lVar12 < *(long *)(local_118._8_8_ + -8)));
        lVar12 = lVar12 + 1) {
      local_c8 = 0;
      _local_d8 = (undefined1  [16])0x0;
      local_c0 = 0;
      itos((long)local_138);
      CowData<char32_t>::operator=((CowData<char32_t> *)local_d8,(CowData *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      Variant::get_type_name((Variant *)local_138,4);
      CowData<char32_t>::operator=((CowData<char32_t> *)&local_c8,(CowData *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      if (local_118._8_8_ == 0) goto LAB_0010ea70;
      lVar10 = *(long *)(local_118._8_8_ + -8);
      if (lVar10 <= lVar12) goto LAB_0010ea76;
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)(local_d8 + 8),(CowData *)(local_118._8_8_ + lVar12 * 8));
      Dictionary::Dictionary((Dictionary *)local_138);
      Variant::Variant((Variant *)local_78,local_d8);
      Variant::Variant((Variant *)local_98,"name");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_d8 + 8);
      Variant::Variant((Variant *)local_98,"value");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,(String *)&local_c8);
      Variant::Variant((Variant *)local_98,"type");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_c0);
      Variant::Variant((Variant *)local_98,"variablesReference");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,(Dictionary *)local_138);
      Array::push_back((Variant *)local_140);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)local_138);
      DAP::Variable::~Variable((Variable *)local_d8);
    }
    HashMap<int,Array,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Array>>>
    ::insert((int *)local_d8,(Array *)(param_1 + 0x208),SUB81(local_148,0));
    Array::~Array((Array *)local_140);
    DAP::Variable::~Variable((Variable *)local_f8);
    uVar13 = local_118._8_8_;
    if ((CowData<char32_t> *)local_118._8_8_ != (CowData<char32_t> *)0x0) {
      LOCK();
      pCVar11 = (CowData<char32_t> *)(local_118._8_8_ + -0x10);
      *(long *)pCVar11 = *(long *)pCVar11 + -1;
      UNLOCK();
      if (*(long *)pCVar11 == 0) {
        if ((CowData<char32_t> *)local_118._8_8_ == (CowData<char32_t> *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar12 = *(long *)(local_118._8_8_ + -8);
        local_118._8_8_ = 0;
        if (lVar12 != 0) {
          lVar10 = 0;
          pCVar11 = (CowData<char32_t> *)uVar13;
          do {
            lVar10 = lVar10 + 1;
            CowData<char32_t>::_unref(pCVar11);
            pCVar11 = pCVar11 + 8;
          } while (lVar12 != lVar10);
        }
        Memory::free_static((CowData<char32_t> *)(uVar13 + -0x10),false);
      }
    }
    break;
      case 0x23:
    local_19c = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = local_19c + 1;
    local_148[0] = local_19c;
    Variant::operator_cast_to_Vector((Variant *)local_118);
    local_f8 = (undefined1  [16])0x0;
    local_e8 = 0;
    local_e0 = 0;
    String::parse_latin1((String *)local_f8,"size");
    Variant::get_type_name((CowData<char32_t> *)local_d8,2);
    CowData<char32_t>::operator=((CowData<char32_t> *)&local_e8,(CowData *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    itos((long)local_d8);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_f8 + 8),(CowData *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    Array::Array((Array *)local_140);
    Dictionary::Dictionary((Dictionary *)local_d8);
    Variant::Variant((Variant *)local_78,(String *)local_f8);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)(local_f8 + 8));
    Variant::Variant((Variant *)local_98,"value");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)&local_e8);
    Variant::Variant((Variant *)local_98,"type");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_e0);
    Variant::Variant((Variant *)local_98,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(Dictionary *)local_d8);
    Array::push_back((Variant *)local_140);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_d8);
    for (lVar12 = 0;
        (local_118._8_8_ != 0 &&
        (local_1b0 = (Variant *)local_d8, lVar12 < *(long *)(local_118._8_8_ + -8)));
        lVar12 = lVar12 + 1) {
      local_c8 = 0;
      _local_d8 = (undefined1  [16])0x0;
      local_c0 = 0;
      itos((long)local_138);
      CowData<char32_t>::operator=((CowData<char32_t> *)local_1b0,(CowData *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      Variant::get_type_name((CowData<char32_t> *)local_138,5);
      CowData<char32_t>::operator=((CowData<char32_t> *)&local_c8,(CowData *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      if (local_118._8_8_ == 0) goto LAB_0010ea70;
      lVar10 = *(long *)(local_118._8_8_ + -8);
      if (lVar10 <= lVar12) goto LAB_0010ea76;
      Vector2::operator_cast_to_String((Vector2 *)local_138);
      CowData<char32_t>::operator=((CowData<char32_t> *)(local_d8 + 8),(CowData *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      if (local_118._8_8_ == 0) goto LAB_0010ea70;
      lVar10 = *(long *)(local_118._8_8_ + -8);
      if (lVar10 <= lVar12) goto LAB_0010ea76;
      Variant::Variant((Variant *)local_78,(Vector2 *)(local_118._8_8_ + lVar12 * 8));
      local_c0 = parse_variant(param_1);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_1b0 = (Variant *)local_d8;
      Dictionary::Dictionary((Dictionary *)local_138);
      Variant::Variant((Variant *)local_78,(String *)local_1b0);
      Variant::Variant((Variant *)local_98,"name");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_d8 + 8);
      Variant::Variant((Variant *)local_98,"value");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,(String *)&local_c8);
      Variant::Variant((Variant *)local_98,"type");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_c0);
      Variant::Variant((Variant *)local_98,"variablesReference");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_188 = (CowData<char32_t> *)local_140;
      Variant::Variant((Variant *)local_78,(Dictionary *)local_138);
      Array::push_back((Variant *)local_188);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_1b0 = (Variant *)local_d8;
      Dictionary::~Dictionary((Dictionary *)local_138);
      DAP::Variable::~Variable((Variable *)local_1b0);
    }
    goto LAB_001092ca;
      case 0x24:
    local_19c = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = local_19c + 1;
    local_148[0] = local_19c;
    Variant::operator_cast_to_Vector((Variant *)local_118);
    local_f8 = (undefined1  [16])0x0;
    local_e8 = 0;
    local_e0 = 0;
    String::parse_latin1((String *)local_f8,"size");
    Variant::get_type_name((CowData<char32_t> *)local_d8,2);
    CowData<char32_t>::operator=((CowData<char32_t> *)&local_e8,(CowData *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    itos((long)local_d8);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_f8 + 8),(CowData *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    Array::Array((Array *)local_140);
    Dictionary::Dictionary((Dictionary *)local_d8);
    Variant::Variant((Variant *)local_78,(String *)local_f8);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)(local_f8 + 8));
    Variant::Variant((Variant *)local_98,"value");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)&local_e8);
    Variant::Variant((Variant *)local_98,"type");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_e0);
    Variant::Variant((Variant *)local_98,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(Dictionary *)local_d8);
    Array::push_back((Variant *)local_140);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_d8);
    for (lVar12 = 0; (local_118._8_8_ != 0 && (lVar12 < *(long *)(local_118._8_8_ + -8)));
        lVar12 = lVar12 + 1) {
      local_c8 = 0;
      _local_d8 = (undefined1  [16])0x0;
      local_c0 = 0;
      itos((long)local_138);
      CowData<char32_t>::operator=((CowData<char32_t> *)local_d8,(CowData *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      Variant::get_type_name((CowData<char32_t> *)local_138,9);
      CowData<char32_t>::operator=((CowData<char32_t> *)&local_c8,(CowData *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      if (local_118._8_8_ == 0) goto LAB_0010ea70;
      lVar10 = *(long *)(local_118._8_8_ + -8);
      if (lVar10 <= lVar12) goto LAB_0010ea76;
      Vector3::operator_cast_to_String((Vector3 *)local_138);
      CowData<char32_t>::operator=((CowData<char32_t> *)(local_d8 + 8),(CowData *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      if (local_118._8_8_ == 0) goto LAB_0010ea70;
      lVar10 = *(long *)(local_118._8_8_ + -8);
      if (lVar10 <= lVar12) goto LAB_0010ea76;
      Variant::Variant((Variant *)local_78,(Vector3 *)(local_118._8_8_ + lVar12 * 0xc));
      local_c0 = parse_variant(param_1);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::Dictionary((Dictionary *)local_138);
      Variant::Variant((Variant *)local_78,local_d8);
      Variant::Variant((Variant *)local_98,"name");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_d8 + 8);
      Variant::Variant((Variant *)local_98,"value");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,(String *)&local_c8);
      Variant::Variant((Variant *)local_98,"type");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_c0);
      Variant::Variant((Variant *)local_98,"variablesReference");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,(Dictionary *)local_138);
      Array::push_back((Variant *)local_140);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)local_138);
      DAP::Variable::~Variable((Variable *)local_d8);
    }
    goto LAB_001092ca;
      case 0x25:
    local_19c = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = local_19c + 1;
    local_148[0] = local_19c;
    Variant::operator_cast_to_Vector((Variant *)local_118);
    local_f8 = (undefined1  [16])0x0;
    local_e8 = 0;
    local_e0 = 0;
    String::parse_latin1((String *)local_f8,"size");
    Variant::get_type_name((CowData<char32_t> *)local_d8,2);
    CowData<char32_t>::operator=((CowData<char32_t> *)&local_e8,(CowData *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    itos((long)local_d8);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_f8 + 8),(CowData *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    Array::Array((Array *)local_140);
    Dictionary::Dictionary((Dictionary *)local_d8);
    Variant::Variant((Variant *)local_78,(String *)local_f8);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)(local_f8 + 8));
    Variant::Variant((Variant *)local_98,"value");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)&local_e8);
    Variant::Variant((Variant *)local_98,"type");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_e0);
    Variant::Variant((Variant *)local_98,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(Dictionary *)local_d8);
    Array::push_back((Variant *)local_140);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_d8);
    for (lVar12 = 0;
        (local_118._8_8_ != 0 &&
        (local_1b0 = (Variant *)local_d8, lVar12 < *(long *)(local_118._8_8_ + -8)));
        lVar12 = lVar12 + 1) {
      local_c8 = 0;
      _local_d8 = (undefined1  [16])0x0;
      local_c0 = 0;
      itos((long)local_138);
      CowData<char32_t>::operator=((CowData<char32_t> *)local_1b0,(CowData *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      Variant::get_type_name((CowData<char32_t> *)local_138,0x14);
      CowData<char32_t>::operator=((CowData<char32_t> *)&local_c8,(CowData *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      if (local_118._8_8_ == 0) goto LAB_0010ea70;
      lVar10 = *(long *)(local_118._8_8_ + -8);
      if (lVar10 <= lVar12) goto LAB_0010ea76;
      Color::operator_cast_to_String((Color *)local_138);
      CowData<char32_t>::operator=((CowData<char32_t> *)(local_d8 + 8),(CowData *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      if (local_118._8_8_ == 0) goto LAB_0010ea70;
      lVar10 = *(long *)(local_118._8_8_ + -8);
      if (lVar10 <= lVar12) goto LAB_0010ea76;
      Variant::Variant((Variant *)local_78,(Color *)(local_118._8_8_ + lVar12 * 0x10));
      local_c0 = parse_variant(param_1);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_1b0 = (Variant *)local_d8;
      Dictionary::Dictionary((Dictionary *)local_138);
      Variant::Variant((Variant *)local_78,(String *)local_1b0);
      Variant::Variant((Variant *)local_98,"name");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_d8 + 8);
      Variant::Variant((Variant *)local_98,"value");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,(String *)&local_c8);
      Variant::Variant((Variant *)local_98,"type");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_c0);
      Variant::Variant((Variant *)local_98,"variablesReference");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_188 = (CowData<char32_t> *)local_140;
      Variant::Variant((Variant *)local_78,(Dictionary *)local_138);
      Array::push_back((Variant *)local_188);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_1b0 = (Variant *)local_d8;
      Dictionary::~Dictionary((Dictionary *)local_138);
      DAP::Variable::~Variable((Variable *)local_1b0);
    }
    goto LAB_001092ca;
      case 0x26:
    local_19c = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = local_19c + 1;
    local_148[0] = local_19c;
    Variant::operator_cast_to_Vector((Variant *)local_118);
    local_f8 = (undefined1  [16])0x0;
    local_e8 = 0;
    local_e0 = 0;
    String::parse_latin1((String *)local_f8,"size");
    Variant::get_type_name((CowData<char32_t> *)local_d8,2);
    CowData<char32_t>::operator=((CowData<char32_t> *)&local_e8,(CowData *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    itos((long)local_d8);
    CowData<char32_t>::operator=((CowData<char32_t> *)(local_f8 + 8),(CowData *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    Array::Array((Array *)local_140);
    Dictionary::Dictionary((Dictionary *)local_d8);
    Variant::Variant((Variant *)local_78,(String *)local_f8);
    Variant::Variant((Variant *)local_98,"name");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)(local_f8 + 8));
    Variant::Variant((Variant *)local_98,"value");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)&local_e8);
    Variant::Variant((Variant *)local_98,"type");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,local_e0);
    Variant::Variant((Variant *)local_98,"variablesReference");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_d8);
    Variant::operator=(pVVar6,(Variant *)local_78);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(Dictionary *)local_d8);
    Array::push_back((Variant *)local_140);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_d8);
    for (lVar12 = 0;
        (local_118._8_8_ != 0 &&
        (local_1b0 = (Variant *)local_d8, lVar12 < *(long *)(local_118._8_8_ + -8)));
        lVar12 = lVar12 + 1) {
      local_c8 = 0;
      _local_d8 = (undefined1  [16])0x0;
      local_c0 = 0;
      itos((long)local_138);
      CowData<char32_t>::operator=((CowData<char32_t> *)local_1b0,(CowData *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      Variant::get_type_name((CowData<char32_t> *)local_138,0xc);
      CowData<char32_t>::operator=((CowData<char32_t> *)&local_c8,(CowData *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      if (local_118._8_8_ == 0) goto LAB_0010ea70;
      lVar10 = *(long *)(local_118._8_8_ + -8);
      if (lVar10 <= lVar12) goto LAB_0010ea76;
      Vector4::operator_cast_to_String((Vector4 *)local_138);
      CowData<char32_t>::operator=((CowData<char32_t> *)(local_d8 + 8),(CowData *)local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      if (local_118._8_8_ == 0) goto LAB_0010ea70;
      lVar10 = *(long *)(local_118._8_8_ + -8);
      if (lVar10 <= lVar12) goto LAB_0010ea76;
      Variant::Variant((Variant *)local_78,(Vector4 *)(local_118._8_8_ + lVar12 * 0x10));
      local_c0 = parse_variant(param_1);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_1b0 = (Variant *)local_d8;
      Dictionary::Dictionary((Dictionary *)local_138);
      Variant::Variant((Variant *)local_78,(String *)local_1b0);
      Variant::Variant((Variant *)local_98,"name");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_d8 + 8);
      Variant::Variant((Variant *)local_98,"value");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,(String *)&local_c8);
      Variant::Variant((Variant *)local_98,"type");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,local_c0);
      Variant::Variant((Variant *)local_98,"variablesReference");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      Variant::operator=(pVVar6,(Variant *)local_78);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_188 = (CowData<char32_t> *)local_140;
      Variant::Variant((Variant *)local_78,(Dictionary *)local_138);
      Array::push_back((Variant *)local_188);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_1b0 = (Variant *)local_d8;
      Dictionary::~Dictionary((Dictionary *)local_138);
      DAP::Variable::~Variable((Variable *)local_1b0);
    }
LAB_001092ca:
    local_1a8 = (Variable *)local_f8;
    HashMap<int,Array,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Array>>>
    ::insert((int *)local_d8,(Array *)(param_1 + 0x208),SUB81(local_148,0));
    Array::~Array((Array *)local_140);
    DAP::Variable::~Variable(local_1a8);
    uVar13 = local_118._8_8_;
    if (local_118._8_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_118._8_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_118._8_8_ = 0;
        Memory::free_static((void *)(uVar13 + -0x10),false);
      }
    }
   }

   LAB_001076b0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_19c;
   switchD_001076a2_caseD_c:local_19c = 0;
   goto LAB_001076b0;
}
/* DebugAdapterProtocol::parse_object_variable(Pair<PropertyInfo, Variant> const&) */Pair *DebugAdapterProtocol::parse_object_variable(Pair *param_1) {
   long *plVar1;
   char cVar2;
   long lVar3;
   undefined1 auVar4[16];
   undefined8 uVar5;
   long lVar6;
   Variant *pVVar7;
   long in_RDX;
   Variant *in_RSI;
   long in_FS_OFFSET;
   bool bVar8;
   long local_a0;
   undefined1 local_98[16];
   long local_88;
   int local_80;
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_80 = 0;
   local_88 = 0;
   local_98 = (undefined1[16])0x0;
   if (*(long*)( in_RDX + 8 ) != 0) {
      plVar1 = (long*)( *(long*)( in_RDX + 8 ) + -0x10 );
      do {
         lVar3 = *plVar1;
         if (lVar3 == 0) goto LAB_00110145;
         LOCK();
         lVar6 = *plVar1;
         bVar8 = lVar3 == lVar6;
         if (bVar8) {
            *plVar1 = lVar3 + 1;
            lVar6 = lVar3;
         }

         UNLOCK();
      }
 while ( !bVar8 );
      if (lVar6 != -1) {
         local_98._8_8_ = 0;
         local_98._0_8_ = *(ulong*)( in_RDX + 8 );
      }

   }

   LAB_00110145:Variant::get_type_name((Variant*)&local_a0);
   lVar6 = local_88;
   lVar3 = local_a0;
   if (local_88 == local_a0) {
      if (local_88 != 0) {
         LOCK();
         plVar1 = (long*)( local_88 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

   }
 else {
      if (local_88 != 0) {
         LOCK();
         plVar1 = (long*)( local_88 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_88 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

      local_88 = local_a0;
   }

   Variant::operator_cast_to_String((Variant*)&local_a0);
   lVar3 = local_a0;
   uVar5 = local_98._8_8_;
   if (local_98._8_8_ == local_a0) {
      if (local_98._8_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_98._8_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

   }
 else {
      if (local_98._8_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_98._8_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98._8_8_ = 0;
            Memory::free_static((void*)( uVar5 + -0x10 ), false);
         }

      }

      local_98._8_8_ = local_a0;
   }

   local_80 = parse_variant(in_RSI);
   Dictionary::Dictionary((Dictionary*)&local_a0);
   Variant::Variant((Variant*)local_58, (String*)local_98);
   Variant::Variant((Variant*)local_78, "name");
   pVVar7 = (Variant*)Dictionary::operator []((Variant*)&local_a0);
   if (pVVar7 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar7] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar7 = 0;
      *(int*)pVVar7 = local_58[0];
      *(undefined8*)( pVVar7 + 8 ) = local_50;
      *(undefined8*)( pVVar7 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar2 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, (String*)( local_98 + 8 ));
   Variant::Variant((Variant*)local_78, "value");
   pVVar7 = (Variant*)Dictionary::operator []((Variant*)&local_a0);
   if (pVVar7 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar7] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar7 = 0;
      *(int*)pVVar7 = local_58[0];
      *(undefined8*)( pVVar7 + 8 ) = local_50;
      *(undefined8*)( pVVar7 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar2 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, (String*)&local_88);
   Variant::Variant((Variant*)local_78, "type");
   pVVar7 = (Variant*)Dictionary::operator []((Variant*)&local_a0);
   if (pVVar7 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar7] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar7 = 0;
      *(int*)pVVar7 = local_58[0];
      *(undefined8*)( pVVar7 + 8 ) = local_50;
      *(undefined8*)( pVVar7 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar2 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, local_80);
   Variant::Variant((Variant*)local_78, "variablesReference");
   pVVar7 = (Variant*)Dictionary::operator []((Variant*)&local_a0);
   if (pVVar7 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar7] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar7 = 0;
      *(int*)pVVar7 = local_58[0];
      *(undefined8*)( pVVar7 + 8 ) = local_50;
      *(undefined8*)( pVVar7 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)param_1, (Dictionary*)&local_a0);
   Dictionary::~Dictionary((Dictionary*)&local_a0);
   lVar3 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   uVar5 = local_98._8_8_;
   if (local_98._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_98._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98._8_8_ = 0;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }

   }

   uVar5 = local_98._0_8_;
   if (local_98._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_98._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_98._8_8_;
         local_98 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebugAdapterProtocol::parse_object(SceneDebuggerObject&) */void DebugAdapterProtocol::parse_object(DebugAdapterProtocol *this, SceneDebuggerObject *param_1) {
   CowData<char32_t> *this_00;
   long *plVar1;
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
   char *pcVar17;
   undefined8 uVar18;
   char cVar19;
   bool bVar20;
   ulong uVar21;
   Variant *pVVar22;
   int iVar23;
   long lVar24;
   ulong uVar25;
   int *piVar26;
   uint uVar27;
   Array *pAVar28;
   ulong uVar29;
   uint uVar30;
   long in_FS_OFFSET;
   StrRange *local_110;
   long local_f8;
   Array local_f0[8];
   Array local_e8[8];
   Array local_e0[8];
   Array local_d8[8];
   Array local_d0[8];
   char *local_c8;
   undefined8 local_c0;
   undefined1 local_b8[16];
   long local_a8;
   int local_a0[2];
   undefined1 local_98[16];
   undefined8 local_88;
   int local_80[2];
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_f8 = *(long*)param_1;
   cVar19 = HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::erase((HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>*)( this + 0x268 ), (ObjectID*)&local_f8);
   if (cVar19 != '\0') {
      Array::Array(local_f0);
      Array::Array(local_e8);
      Array::Array(local_e0);
      Array::Array(local_d8);
      local_a8 = 0;
      local_a0[0] = 0;
      local_b8 = (undefined1[16])0x0;
      Array::Array(local_d0);
      if (( *(undefined8**)( param_1 + 0x10 ) != (undefined8*)0x0 ) && ( piVar26 = (int*)**(undefined8**)( param_1 + 0x10 ) ),piVar26 != (int*)0x0) {
         do {
            while (true) {
               this_00 = (CowData<char32_t>*)( piVar26 + 2 );
               cVar19 = String::begins_with((char*)this_00);
               if (cVar19 != '\0') break;
               cVar19 = String::begins_with((char*)this_00);
               if (cVar19 == '\0') {
                  cVar19 = String::begins_with((char*)this_00);
                  if (cVar19 == '\0') {
                     if (*piVar26 == 0) {
                        cVar19 = Array::is_empty();
                        if (cVar19 == '\0') {
                           Array::size();
                           itos((long)local_98);
                           if (local_b8._8_8_ != local_98._0_8_) {
                              CowData<char32_t>::_unref((CowData<char32_t>*)( local_b8 + 8 ));
                              uVar18 = local_98._0_8_;
                              auVar16._8_8_ = 0;
                              auVar16._0_8_ = local_98._8_8_;
                              local_98 = auVar16 << 0x40;
                              local_b8._8_8_ = uVar18;
                           }

                           CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
                           Array::duplicate(SUB81((Array*)&local_c8, 0));
                           HashMap<int,Array,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Array>>>::insert((int*)local_98, (Array*)( this + 0x208 ), SUB81(local_a0, 0));
                           Array::~Array((Array*)&local_c8);
                           Dictionary::Dictionary((Dictionary*)local_98);
                           Variant::Variant((Variant*)local_58, (String*)local_b8);
                           Variant::Variant((Variant*)local_78, "name");
                           pVVar22 = (Variant*)Dictionary::operator []((Variant*)local_98);
                           if (pVVar22 != (Variant*)local_58) {
                              if (Variant::needs_deinit[*(int*)pVVar22] != '\0') {
                                 Variant::_clear_internal();
                              }

                              *(undefined4*)pVVar22 = 0;
                              *(int*)pVVar22 = local_58[0];
                              *(undefined8*)( pVVar22 + 8 ) = local_50;
                              *(undefined8*)( pVVar22 + 0x10 ) = uStack_48;
                              local_58[0] = 0;
                           }

                           if (Variant::needs_deinit[local_78[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           if (Variant::needs_deinit[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           Variant::Variant((Variant*)local_58, (String*)( local_b8 + 8 ));
                           Variant::Variant((Variant*)local_78, "value");
                           pVVar22 = (Variant*)Dictionary::operator []((Variant*)local_98);
                           if (pVVar22 != (Variant*)local_58) {
                              if (Variant::needs_deinit[*(int*)pVVar22] != '\0') {
                                 Variant::_clear_internal();
                              }

                              *(undefined4*)pVVar22 = 0;
                              *(int*)pVVar22 = local_58[0];
                              *(undefined8*)( pVVar22 + 8 ) = local_50;
                              *(undefined8*)( pVVar22 + 0x10 ) = uStack_48;
                              local_58[0] = 0;
                           }

                           if (Variant::needs_deinit[local_78[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           if (Variant::needs_deinit[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           Variant::Variant((Variant*)local_58, (String*)&local_a8);
                           Variant::Variant((Variant*)local_78, "type");
                           pVVar22 = (Variant*)Dictionary::operator []((Variant*)local_98);
                           if (pVVar22 != (Variant*)local_58) {
                              if (Variant::needs_deinit[*(int*)pVVar22] != '\0') {
                                 Variant::_clear_internal();
                              }

                              *(undefined4*)pVVar22 = 0;
                              *(int*)pVVar22 = local_58[0];
                              *(undefined8*)( pVVar22 + 8 ) = local_50;
                              *(undefined8*)( pVVar22 + 0x10 ) = uStack_48;
                              local_58[0] = 0;
                           }

                           if (Variant::needs_deinit[local_78[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           if (Variant::needs_deinit[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           Variant::Variant((Variant*)local_58, local_a0[0]);
                           Variant::Variant((Variant*)local_78, "variablesReference");
                           pVVar22 = (Variant*)Dictionary::operator []((Variant*)local_98);
                           if (pVVar22 != (Variant*)local_58) {
                              if (Variant::needs_deinit[*(int*)pVVar22] != '\0') {
                                 Variant::_clear_internal();
                              }

                              *(undefined4*)pVVar22 = 0;
                              *(int*)pVVar22 = local_58[0];
                              *(undefined8*)( pVVar22 + 8 ) = local_50;
                              *(undefined8*)( pVVar22 + 0x10 ) = uStack_48;
                              local_58[0] = 0;
                           }

                           if (Variant::needs_deinit[local_78[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           if (Variant::needs_deinit[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           Variant::Variant((Variant*)local_58, (Dictionary*)local_98);
                           Array::push_back((Variant*)local_f0);
                           if (Variant::needs_deinit[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           Dictionary::~Dictionary((Dictionary*)local_98);
                        }

                        local_110 = (StrRange*)&local_a8;
                        if (local_b8._0_8_ != *(long*)( piVar26 + 2 )) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)local_b8, (CowData*)this_00);
                        }

                        local_98._8_8_ = 8;
                        local_98._0_8_ = "Category";
                        String::parse_latin1(local_110);
                        local_a0[0] = *(int*)( this + 0x1c8 );
                        *(int*)( this + 0x1c8 ) = local_a0[0] + 1;
                        Array::clear();
                        goto LAB_00110818;
                     }

                     parse_object_variable((Pair*)local_58);
                     pAVar28 = local_d0;
                  }
 else {
                     String::trim_prefix((char*)local_98);
                     if (*(long*)( piVar26 + 2 ) != local_98._0_8_) {
                        CowData<char32_t>::_unref(this_00);
                        *(undefined8*)( piVar26 + 2 ) = local_98._0_8_;
                        auVar13._8_8_ = 0;
                        auVar13._0_8_ = local_98._8_8_;
                        local_98 = auVar13 << 0x40;
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
                     parse_object_variable((Pair*)local_58);
                     pAVar28 = local_d8;
                  }

                  Array::push_back((Variant*)pAVar28);
                  cVar19 = Variant::needs_deinit[local_58[0]];
                  goto joined_r0x00110c76;
               }

               String::trim_prefix(local_98);
               uVar18 = local_98._0_8_;
               if (*(long*)( piVar26 + 2 ) == local_98._0_8_) {
                  if (local_98._0_8_ != 0) {
                     LOCK();
                     plVar1 = (long*)( local_98._0_8_ + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        auVar12._8_8_ = 0;
                        auVar12._0_8_ = local_98._8_8_;
                        local_98 = auVar12 << 0x40;
                        Memory::free_static((void*)( uVar18 + -0x10 ), false);
                     }

                  }

               }
 else {
                  CowData<char32_t>::_unref(this_00);
                  *(undefined8*)( piVar26 + 2 ) = local_98._0_8_;
               }

               parse_object_variable((Pair*)local_58);
               Array::push_back((Variant*)local_e0);
               if (Variant::needs_deinit[local_58[0]] == '\0') goto LAB_00110818;
               LAB_001108c1:Variant::_clear_internal();
               piVar26 = *(int**)( piVar26 + 0x12 );
               if (piVar26 == (int*)0x0) goto LAB_001108e0;
            }
;
            String::trim_prefix(local_98);
            lVar2 = *(long*)( piVar26 + 2 );
            uVar18 = local_98._0_8_;
            if (lVar2 == local_98._0_8_) {
               if (lVar2 != 0) {
                  LOCK();
                  plVar1 = (long*)( lVar2 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     auVar11._8_8_ = 0;
                     auVar11._0_8_ = local_98._8_8_;
                     local_98 = auVar11 << 0x40;
                     Memory::free_static((void*)( uVar18 + -0x10 ), false);
                  }

               }

            }
 else {
               if (lVar2 != 0) {
                  LOCK();
                  plVar1 = (long*)( lVar2 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar2 = *(long*)( piVar26 + 2 );
                     piVar26[2] = 0;
                     piVar26[3] = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }

               }

               *(undefined8*)( piVar26 + 2 ) = local_98._0_8_;
            }

            parse_object_variable((Pair*)local_58);
            Array::push_back((Variant*)local_e8);
            cVar19 = Variant::needs_deinit[local_58[0]];
            joined_r0x00110c76:if (cVar19 != '\0') goto LAB_001108c1;
            LAB_00110818:piVar26 = *(int**)( piVar26 + 0x12 );
         }
 while ( piVar26 != (int*)0x0 );
      }

      LAB_001108e0:cVar19 = Array::is_empty();
      if (cVar19 == '\0') {
         Array::size();
         itos((long)local_98);
         if (local_b8._8_8_ != local_98._0_8_) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( local_b8 + 8 ));
            uVar18 = local_98._0_8_;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = local_98._8_8_;
            local_98 = auVar15 << 0x40;
            local_b8._8_8_ = uVar18;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
         Array::duplicate(SUB81((Array*)&local_c8, 0));
         HashMap<int,Array,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Array>>>::insert((int*)local_98, (Array*)( this + 0x208 ), SUB81(local_a0, 0));
         Array::~Array((Array*)&local_c8);
         Dictionary::Dictionary((Dictionary*)local_98);
         Variant::Variant((Variant*)local_58, (String*)local_b8);
         Variant::Variant((Variant*)local_78, "name");
         pVVar22 = (Variant*)Dictionary::operator []((Variant*)local_98);
         if (pVVar22 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar22] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar22 = 0;
            *(int*)pVVar22 = local_58[0];
            *(undefined8*)( pVVar22 + 8 ) = local_50;
            *(undefined8*)( pVVar22 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, (String*)( local_b8 + 8 ));
         Variant::Variant((Variant*)local_78, "value");
         pVVar22 = (Variant*)Dictionary::operator []((Variant*)local_98);
         if (pVVar22 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar22] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar22 = 0;
            *(int*)pVVar22 = local_58[0];
            *(undefined8*)( pVVar22 + 8 ) = local_50;
            *(undefined8*)( pVVar22 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, (String*)&local_a8);
         Variant::Variant((Variant*)local_78, "type");
         pVVar22 = (Variant*)Dictionary::operator []((Variant*)local_98);
         if (pVVar22 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar22] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar22 = 0;
            *(int*)pVVar22 = local_58[0];
            *(undefined8*)( pVVar22 + 8 ) = local_50;
            *(undefined8*)( pVVar22 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, local_a0[0]);
         Variant::Variant((Variant*)local_78, "variablesReference");
         pVVar22 = (Variant*)Dictionary::operator []((Variant*)local_98);
         if (pVVar22 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar22] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar22 = 0;
            *(int*)pVVar22 = local_58[0];
            *(undefined8*)( pVVar22 + 8 ) = local_50;
            *(undefined8*)( pVVar22 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, (Dictionary*)local_98);
         Array::push_back((Variant*)local_f0);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Dictionary::~Dictionary((Dictionary*)local_98);
      }

      cVar19 = Array::is_empty();
      if (cVar19 == '\0') {
         local_88 = 0;
         local_c8 = "Node";
         local_98 = (undefined1[16])0x0;
         local_80[0] = 0;
         local_c0 = 4;
         String::parse_latin1((StrRange*)local_98);
         local_c8 = "Category";
         local_c0 = 8;
         String::parse_latin1((StrRange*)&local_88);
         Array::size();
         itos((long)&local_c8);
         if ((char*)local_98._8_8_ != local_c8) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( local_98 + 8 ));
            pcVar17 = local_c8;
            local_c8 = (char*)0x0;
            local_98._8_8_ = pcVar17;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         local_80[0] = *(int*)( this + 0x1c8 );
         *(int*)( this + 0x1c8 ) = local_80[0] + 1;
         HashMap<int,Array,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Array>>>::insert((int*)&local_c8, (Array*)( this + 0x208 ), SUB81(local_80, 0));
         Dictionary::Dictionary((Dictionary*)&local_c8);
         Variant::Variant((Variant*)local_58, (String*)local_98);
         Variant::Variant((Variant*)local_78, "name");
         pVVar22 = (Variant*)Dictionary::operator []((Variant*)&local_c8);
         if (pVVar22 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar22] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar22 = 0;
            *(int*)pVVar22 = local_58[0];
            *(undefined8*)( pVVar22 + 8 ) = local_50;
            *(undefined8*)( pVVar22 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, (String*)( local_98 + 8 ));
         Variant::Variant((Variant*)local_78, "value");
         pVVar22 = (Variant*)Dictionary::operator []((Variant*)&local_c8);
         if (pVVar22 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar22] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar22 = 0;
            *(int*)pVVar22 = local_58[0];
            *(undefined8*)( pVVar22 + 8 ) = local_50;
            *(undefined8*)( pVVar22 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, (String*)&local_88);
         Variant::Variant((Variant*)local_78, "type");
         pVVar22 = (Variant*)Dictionary::operator []((Variant*)&local_c8);
         if (pVVar22 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar22] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar22 = 0;
            *(int*)pVVar22 = local_58[0];
            *(undefined8*)( pVVar22 + 8 ) = local_50;
            *(undefined8*)( pVVar22 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, local_80[0]);
         Variant::Variant((Variant*)local_78, "variablesReference");
         pVVar22 = (Variant*)Dictionary::operator []((Variant*)&local_c8);
         if (pVVar22 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar22] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar22 = 0;
            *(int*)pVVar22 = local_58[0];
            *(undefined8*)( pVVar22 + 8 ) = local_50;
            *(undefined8*)( pVVar22 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, (Dictionary*)&local_c8);
         Array::push_front((Variant*)local_f0);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Dictionary::~Dictionary((Dictionary*)&local_c8);
         DAP::Variable::~Variable((Variable*)local_98);
      }

      cVar19 = Array::is_empty();
      if (cVar19 == '\0') {
         local_88 = 0;
         local_c8 = "Constants";
         local_98 = (undefined1[16])0x0;
         local_80[0] = 0;
         local_c0 = 9;
         String::parse_latin1((StrRange*)local_98);
         local_c8 = "Category";
         local_c0 = 8;
         String::parse_latin1((StrRange*)&local_88);
         Array::size();
         itos((long)&local_c8);
         if ((char*)local_98._8_8_ != local_c8) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( local_98 + 8 ));
            pcVar17 = local_c8;
            local_c8 = (char*)0x0;
            local_98._8_8_ = pcVar17;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         local_80[0] = *(int*)( this + 0x1c8 );
         *(int*)( this + 0x1c8 ) = local_80[0] + 1;
         HashMap<int,Array,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Array>>>::insert((int*)&local_c8, (Array*)( this + 0x208 ), SUB81(local_80, 0));
         Dictionary::Dictionary((Dictionary*)&local_c8);
         Variant::Variant((Variant*)local_58, (String*)local_98);
         Variant::Variant((Variant*)local_78, "name");
         pVVar22 = (Variant*)Dictionary::operator []((Variant*)&local_c8);
         if (pVVar22 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar22] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar22 = 0;
            *(int*)pVVar22 = local_58[0];
            *(undefined8*)( pVVar22 + 8 ) = local_50;
            *(undefined8*)( pVVar22 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, (String*)( local_98 + 8 ));
         Variant::Variant((Variant*)local_78, "value");
         pVVar22 = (Variant*)Dictionary::operator []((Variant*)&local_c8);
         if (pVVar22 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar22] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar22 = 0;
            *(int*)pVVar22 = local_58[0];
            *(undefined8*)( pVVar22 + 8 ) = local_50;
            *(undefined8*)( pVVar22 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, (String*)&local_88);
         Variant::Variant((Variant*)local_78, "type");
         pVVar22 = (Variant*)Dictionary::operator []((Variant*)&local_c8);
         if (pVVar22 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar22] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar22 = 0;
            *(int*)pVVar22 = local_58[0];
            *(undefined8*)( pVVar22 + 8 ) = local_50;
            *(undefined8*)( pVVar22 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, local_80[0]);
         Variant::Variant((Variant*)local_78, "variablesReference");
         pVVar22 = (Variant*)Dictionary::operator []((Variant*)&local_c8);
         if (pVVar22 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar22] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar22 = 0;
            *(int*)pVVar22 = local_58[0];
            *(undefined8*)( pVVar22 + 8 ) = local_50;
            *(undefined8*)( pVVar22 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, (Dictionary*)&local_c8);
         Array::push_front((Variant*)local_f0);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Dictionary::~Dictionary((Dictionary*)&local_c8);
         DAP::Variable::~Variable((Variable*)local_98);
      }

      cVar19 = Array::is_empty();
      if (cVar19 == '\0') {
         local_88 = 0;
         local_c8 = "Members";
         local_98 = (undefined1[16])0x0;
         local_80[0] = 0;
         local_c0 = 7;
         String::parse_latin1((StrRange*)local_98);
         local_c8 = "Category";
         local_c0 = 8;
         String::parse_latin1((StrRange*)&local_88);
         Array::size();
         itos((long)&local_c8);
         if ((char*)local_98._8_8_ != local_c8) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( local_98 + 8 ));
            pcVar17 = local_c8;
            local_c8 = (char*)0x0;
            local_98._8_8_ = pcVar17;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         local_80[0] = *(int*)( this + 0x1c8 );
         *(int*)( this + 0x1c8 ) = local_80[0] + 1;
         HashMap<int,Array,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Array>>>::insert((int*)&local_c8, (Array*)( this + 0x208 ), SUB81(local_80, 0));
         Dictionary::Dictionary((Dictionary*)&local_c8);
         Variant::Variant((Variant*)local_58, (String*)local_98);
         Variant::Variant((Variant*)local_78, "name");
         pVVar22 = (Variant*)Dictionary::operator []((Variant*)&local_c8);
         if (pVVar22 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar22] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar22 = 0;
            *(int*)pVVar22 = local_58[0];
            *(undefined8*)( pVVar22 + 8 ) = local_50;
            *(undefined8*)( pVVar22 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, (String*)( local_98 + 8 ));
         Variant::Variant((Variant*)local_78, "value");
         pVVar22 = (Variant*)Dictionary::operator []((Variant*)&local_c8);
         if (pVVar22 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar22] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar22 = 0;
            *(int*)pVVar22 = local_58[0];
            *(undefined8*)( pVVar22 + 8 ) = local_50;
            *(undefined8*)( pVVar22 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, (String*)&local_88);
         Variant::Variant((Variant*)local_78, "type");
         pVVar22 = (Variant*)Dictionary::operator []((Variant*)&local_c8);
         if (pVVar22 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar22] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar22 = 0;
            *(int*)pVVar22 = local_58[0];
            *(undefined8*)( pVVar22 + 8 ) = local_50;
            *(undefined8*)( pVVar22 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, local_80[0]);
         Variant::Variant((Variant*)local_78, "variablesReference");
         pVVar22 = (Variant*)Dictionary::operator []((Variant*)&local_c8);
         if (pVVar22 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar22] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar22 = 0;
            *(int*)pVVar22 = local_58[0];
            *(undefined8*)( pVVar22 + 8 ) = local_50;
            *(undefined8*)( pVVar22 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, (Dictionary*)&local_c8);
         Array::push_front((Variant*)local_f0);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Dictionary::~Dictionary((Dictionary*)&local_c8);
         DAP::Variable::~Variable((Variable*)local_98);
      }

      if (( *(long*)( this + 0x240 ) != 0 ) && ( *(int*)( this + 0x264 ) != 0 )) {
         uVar29 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x260 ) * 4 ));
         lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x260 ) * 8 );
         uVar21 = local_f8 * 0x3ffff - 1;
         uVar21 = ( uVar21 ^ uVar21 >> 0x1f ) * 0x15;
         uVar21 = ( uVar21 ^ uVar21 >> 0xb ) * 0x41;
         uVar21 = uVar21 >> 0x16 ^ uVar21;
         uVar25 = uVar21 & 0xffffffff;
         if ((int)uVar21 == 0) {
            uVar25 = 1;
         }

         auVar3._8_8_ = 0;
         auVar3._0_8_ = uVar25 * lVar2;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar29;
         lVar24 = SUB168(auVar3 * auVar7, 8);
         uVar27 = *(uint*)( *(long*)( this + 0x248 ) + lVar24 * 4 );
         iVar23 = SUB164(auVar3 * auVar7, 8);
         if (uVar27 != 0) {
            uVar30 = 0;
            do {
               if (( (uint)uVar25 == uVar27 ) && ( local_f8 == *(long*)( *(long*)( *(long*)( this + 0x240 ) + lVar24 * 8 ) + 0x10 ) )) {
                  bVar20 = (bool)HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>::operator []((HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>*)( this + 0x238 ), (ObjectID*)&local_f8);
                  HashMap<int,Array,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Array>>>::insert((int*)local_98, (Array*)( this + 0x208 ), bVar20);
                  Array::~Array(local_d0);
                  lVar2 = local_a8;
                  if (local_a8 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_a8 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_a8 = 0;
                        Memory::free_static((void*)( lVar2 + -0x10 ), false);
                     }

                  }

                  uVar18 = local_b8._8_8_;
                  if (local_b8._8_8_ != 0) {
                     LOCK();
                     plVar1 = (long*)( local_b8._8_8_ + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_b8._8_8_ = 0;
                        Memory::free_static((void*)( uVar18 + -0x10 ), false);
                     }

                  }

                  uVar18 = local_b8._0_8_;
                  if (local_b8._0_8_ != 0) {
                     LOCK();
                     plVar1 = (long*)( local_b8._0_8_ + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        auVar14._8_8_ = 0;
                        auVar14._0_8_ = local_b8._8_8_;
                        local_b8 = auVar14 << 0x40;
                        Memory::free_static((void*)( uVar18 + -0x10 ), false);
                     }

                  }

                  goto LAB_00110acb;
               }

               uVar30 = uVar30 + 1;
               auVar4._8_8_ = 0;
               auVar4._0_8_ = ( ulong )(iVar23 + 1) * lVar2;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = uVar29;
               lVar24 = SUB168(auVar4 * auVar8, 8);
               uVar27 = *(uint*)( *(long*)( this + 0x248 ) + lVar24 * 4 );
               iVar23 = SUB164(auVar4 * auVar8, 8);
            }
 while ( ( uVar27 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar27 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar29,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x260 ) * 4 ) + iVar23 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar29,uVar30 <= SUB164(auVar6 * auVar10, 8) );
         }

      }

      _err_print_error("parse_object", "editor/debugger/debug_adapter/debug_adapter_protocol.cpp", 0x31e, "Condition \"!object_list.has(object_id)\" is true.", 0, 0);
      Array::~Array(local_d0);
      DAP::Variable::~Variable((Variable*)local_b8);
      LAB_00110acb:Array::~Array(local_d8);
      Array::~Array(local_e0);
      Array::~Array(local_e8);
      Array::~Array(local_f0);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebugAdapterProtocol::parse_evaluation(DebuggerMarshalls::ScriptStackVariable&) */void DebugAdapterProtocol::parse_evaluation(DebugAdapterProtocol *this, ScriptStackVariable *param_1) {
   long *plVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined8 uVar4;
   long lVar5;
   char cVar6;
   long lVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_68;
   long local_60;
   undefined1 local_58[16];
   long local_48;
   undefined4 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = 0;
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_00112459;
         LOCK();
         lVar7 = *plVar1;
         bVar8 = lVar2 == lVar7;
         if (bVar8) {
            *plVar1 = lVar2 + 1;
            lVar7 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar8 );
      if (lVar7 != -1) {
         local_68 = *(long*)param_1;
      }

   }

   LAB_00112459:cVar6 = HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::erase((HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>*)( this + 0x2c0 ), (String*)&local_68);
   if (cVar6 != '\0') {
      local_48 = 0;
      local_40 = 0;
      local_58 = (undefined1[16])0x0;
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
      if (*(long*)param_1 != 0) {
         do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_001124b9;
            LOCK();
            lVar7 = *plVar1;
            bVar8 = lVar2 == lVar7;
            if (bVar8) {
               *plVar1 = lVar2 + 1;
               lVar7 = lVar2;
            }

            UNLOCK();
         }
 while ( !bVar8 );
         if (lVar7 != -1) {
            local_58._8_8_ = 0;
            local_58._0_8_ = *(ulong*)param_1;
         }

      }

      LAB_001124b9:Variant::operator_cast_to_String((Variant*)&local_60);
      lVar2 = local_60;
      uVar4 = local_58._8_8_;
      if (local_58._8_8_ == local_60) {
         if (local_58._8_8_ != 0) {
            LOCK();
            plVar1 = (long*)( local_58._8_8_ + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

      }
 else {
         if (local_58._8_8_ != 0) {
            LOCK();
            plVar1 = (long*)( local_58._8_8_ + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58._8_8_ = 0;
               Memory::free_static((void*)( uVar4 + -0x10 ), false);
            }

         }

         local_58._8_8_ = local_60;
      }

      Variant::get_type_name((Variant*)&local_60);
      lVar7 = local_48;
      lVar2 = local_60;
      if (local_48 == local_60) {
         lVar5 = local_48;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
               lVar5 = local_48;
            }

         }

      }
 else {
         lVar5 = local_60;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            lVar5 = local_60;
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
               lVar5 = local_60;
            }

         }

      }

      local_48 = lVar5;
      local_40 = parse_variant((Variant*)this);
      HashMap<String,DAP::Variable,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DAP::Variable>>>::insert((String*)&local_60, (Variable*)( this + 0x290 ), SUB81(local_58, 0));
      lVar2 = local_48;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      uVar4 = local_58._8_8_;
      if (local_58._8_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_58._8_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58._8_8_ = 0;
            Memory::free_static((void*)( uVar4 + -0x10 ), false);
         }

      }

      uVar4 = local_58._0_8_;
      if (local_58._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_58._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_58._8_8_;
            local_58 = auVar3 << 0x40;
            Memory::free_static((void*)( uVar4 + -0x10 ), false);
         }

      }

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

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* DebugAdapterProtocol::on_debug_data(String const&, Array const&) */void DebugAdapterProtocol::on_debug_data(String *param_1, Array *param_2) {
   char cVar1;
   long in_FS_OFFSET;
   undefined8 local_78;
   CowData<char32_t> local_70[8];
   List<Pair<PropertyInfo,Variant>,DefaultAllocator> aLStack_68[16];
   undefined8 local_58;
   int local_50;
   undefined1 local_48[16];
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar1 = String::operator ==((String*)param_2, "debug_enter");
   if (cVar1 == '\0') {
      cVar1 = String::operator ==((String*)param_2, "debug_exit");
      if (cVar1 == '\0') {
         cVar1 = String::operator ==((String*)param_2, "stack_dump");
         if (cVar1 == '\0') {
            cVar1 = String::operator ==((String*)param_2, "stack_frame_vars");
            if (cVar1 == '\0') {
               cVar1 = String::operator ==((String*)param_2, "stack_frame_var");
               if (cVar1 == '\0') {
                  cVar1 = String::operator ==((String*)param_2, "output");
                  if (cVar1 == '\0') {
                     cVar1 = String::operator ==((String*)param_2, "request_quit");
                     if (cVar1 == '\0') {
                        cVar1 = String::operator ==((String*)param_2, "scene:inspect_object");
                        if (cVar1 == '\0') {
                           cVar1 = String::operator ==((String*)param_2, "evaluation_return");
                           if (cVar1 != '\0') {
                              local_58 = 0;
                              local_48 = (undefined1[16])0x0;
                              local_50 = 0;
                              local_38 = 0xffffffffffffffff;
                              DebuggerMarshalls::ScriptStackVariable::deserialize((Array*)&local_58);
                              parse_evaluation((DebugAdapterProtocol*)param_1, (ScriptStackVariable*)&local_58);
                              if (Variant::needs_deinit[local_50] != '\0') {
                                 Variant::_clear_internal();
                              }

                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                           }

                        }
 else {
                           local_78 = 0;
                           _local_70 = (undefined1[16])0x0;
                           SceneDebuggerObject::deserialize((Array*)&local_78);
                           parse_object((DebugAdapterProtocol*)param_1, (SceneDebuggerObject*)&local_78);
                           List<Pair<PropertyInfo,Variant>,DefaultAllocator>::~List((List<Pair<PropertyInfo,Variant>,DefaultAllocator>*)( local_70 + 8 ));
                           CowData<char32_t>::_unref(local_70);
                        }

                        if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                           notify_custom_data(param_1, param_2);
                           return;
                        }

                        goto LAB_001128e7;
                     }

                  }

               }

            }

         }

      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001128e7:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* DebugAdapterProtocol::on_debug_stack_frame_var(Array const&) */void DebugAdapterProtocol::on_debug_stack_frame_var(Array *param_1) {
   long *plVar1;
   undefined4 uVar2;
   void *pvVar3;
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
   code *pcVar20;
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined8 uVar23;
   uint uVar24;
   int iVar25;
   uint uVar26;
   undefined1(*pauVar27)[16];
   undefined4 *puVar28;
   uint *puVar29;
   Variant *pVVar30;
   long lVar31;
   uint uVar32;
   long lVar33;
   ulong uVar34;
   ulong uVar35;
   undefined1(*pauVar36)[16];
   long lVar37;
   uint uVar38;
   ulong uVar39;
   uint uVar40;
   long in_FS_OFFSET;
   bool bVar41;
   String *local_138;
   String *local_130;
   long local_100;
   undefined1 local_f8[16];
   long local_e8;
   int local_e0;
   int local_d8;
   long local_d0;
   Array local_c8[8];
   undefined1 local_c0[16];
   undefined8 local_b0;
   int local_a8[8];
   int local_88[2];
   undefined8 local_80;
   undefined8 uStack_78;
   ulong local_68;
   int local_60;
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = 0;
   local_60 = 0;
   local_48 = 0xffffffffffffffff;
   local_58 = (undefined1[16])0x0;
   DebuggerMarshalls::ScriptStackVariable::deserialize((Array*)&local_68);
   if (*(int*)( param_1 + 0x204 ) == 0) {
      _err_print_error("on_debug_stack_frame_var", "editor/debugger/debug_adapter/debug_adapter_protocol.cpp", 0x47c, "Condition \"stackframe_list.is_empty()\" is true.", 0, 0);
      LAB_001133a5:if (Variant::needs_deinit[local_60] != '\0') {
         Variant::_clear_internal();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      LAB_001131dd:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   local_d8 = 0;
   local_d0 = 0;
   Array::Array(local_c8);
   local_d8 = *(int*)( param_1 + 0x198 );
   lVar31 = *(long*)( param_1 + 0x1e0 );
   local_b0 = 0;
   local_c0 = (undefined1[16])0x0;
   if (( lVar31 != 0 ) && ( *(int*)( param_1 + 0x204 ) != 0 )) {
      uVar39 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x200 ) * 4 ));
      lVar37 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x200 ) * 8 );
      uVar24 = ( local_d8 * 0x16a88000 | ( uint )(local_d8 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
      uVar24 = ( uVar24 << 0xd | uVar24 >> 0x13 ) * 5 + 0xe6546b64;
      uVar35 = (ulong)uVar24;
      if (uVar24 == 0) {
         uVar35 = 1;
      }

      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar35 * lVar37;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar39;
      lVar33 = SUB168(auVar4 * auVar12, 8);
      uVar24 = *(uint*)( *(long*)( param_1 + 0x1e8 ) + lVar33 * 4 );
      uVar26 = SUB164(auVar4 * auVar12, 8);
      if (uVar24 != 0) {
         uVar38 = 0;
         LAB_00112aa9:if (( uVar24 != (uint)uVar35 ) || ( local_d8 != *(int*)( *(long*)( lVar31 + lVar33 * 8 ) + 0x10 ) )) goto LAB_00112a60;
         pauVar27 = *(undefined1(**) [16])( *(long*)( lVar31 + (ulong)uVar26 * 8 ) + 0x40 );
         if (( pauVar27 == (undefined1(*) [16])0x0 ) || ( pauVar36 = *(undefined1(**) [16])*pauVar27 ),pauVar27 = pauVar36,pauVar36 == (undefined1(*) [16])0x0) goto LAB_001133d0;
         pauVar27 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined4*)pauVar27[1] = 0;
         *pauVar27 = (undefined1[16])0x0;
         do {
            puVar28 = (undefined4*)operator_new(0x20, DefaultAllocator::alloc);
            uVar2 = *(undefined4*)*pauVar36;
            *(undefined8*)( puVar28 + 2 ) = 0;
            *puVar28 = uVar2;
            lVar31 = *(long*)( *pauVar27 + 8 );
            *(undefined1(**) [16])( puVar28 + 6 ) = pauVar27;
            *(long*)( puVar28 + 4 ) = lVar31;
            if (lVar31 != 0) {
               *(undefined4**)( lVar31 + 8 ) = puVar28;
            }

            lVar31 = *(long*)*pauVar27;
            *(undefined4**)( *pauVar27 + 8 ) = puVar28;
            if (lVar31 == 0) {
               *(undefined4**)*pauVar27 = puVar28;
            }

            pauVar36 = *(undefined1(**) [16])( *pauVar36 + 8 );
            iVar25 = *(int*)pauVar27[1] + 1;
            *(int*)pauVar27[1] = iVar25;
         }
 while ( pauVar36 != (undefined1(*) [16])0x0 );
         if (iVar25 != 3) goto LAB_001133d0;
         if ((uint)local_48 < 4) {
            if ((uint)local_48 == 3) {
               _err_print_index_error("get", "./core/templates/list.h", 0x21c, 3, 3, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar20 = (code*)invalidInstructionException();
               ( *pcVar20 )();
            }

            puVar29 = *(uint**)*pauVar27;
            if (( (uint)local_48 != 0 ) && ( puVar29 = *(uint**)( puVar29 + 2 ) ),(uint)local_48 == 2) {
               puVar29 = *(uint**)( puVar29 + 2 );
            }

            uVar24 = *puVar29;
            local_e0 = 0;
            local_e8 = 0;
            local_f8 = (undefined1[16])0x0;
            plVar1 = (long*)( local_68 - 0x10 );
            if (local_68 != 0) {
               do {
                  lVar31 = *plVar1;
                  if (lVar31 == 0) goto LAB_00112be2;
                  LOCK();
                  lVar37 = *plVar1;
                  bVar41 = lVar31 == lVar37;
                  if (bVar41) {
                     *plVar1 = lVar31 + 1;
                     lVar37 = lVar31;
                  }

                  UNLOCK();
               }
 while ( !bVar41 );
               if (lVar37 != -1) {
                  local_f8._8_8_ = 0;
                  local_f8._0_8_ = local_68;
               }

            }

            LAB_00112be2:Variant::operator_cast_to_String((Variant*)&local_100);
            lVar31 = local_100;
            if (local_f8._8_8_ == local_100) {
               if (local_100 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_100 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_100 = 0;
                     Memory::free_static((void*)( lVar31 + -0x10 ), false);
                  }

               }

            }
 else {
               CowData<char32_t>::_unref((CowData<char32_t>*)( local_f8 + 8 ));
               local_f8._8_8_ = local_100;
            }

            local_138 = (String*)( local_f8 + 8 );
            Variant::get_type_name((Variant*)&local_100);
            lVar31 = local_100;
            if (local_e8 == local_100) {
               if (local_100 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_100 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_100 = 0;
                     Memory::free_static((void*)( lVar31 + -0x10 ), false);
                  }

               }

            }
 else {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               local_e8 = local_100;
            }

            local_130 = (String*)&local_e8;
            local_e0 = parse_variant((Variant*)param_1);
            lVar31 = *(long*)( param_1 + 0x210 );
            if (lVar31 == 0) {
               lVar37 = 0;
            }
 else {
               lVar37 = 0;
               if (*(int*)( param_1 + 0x234 ) != 0) {
                  uVar39 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x230 ) * 4 ));
                  uVar35 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x230 ) * 8 );
                  uVar26 = ( uVar24 >> 0x10 ^ uVar24 ) * -0x7a143595;
                  uVar26 = ( uVar26 ^ uVar26 >> 0xd ) * -0x3d4d51cb;
                  uVar38 = uVar26 ^ uVar26 >> 0x10;
                  if (uVar26 == uVar26 >> 0x10) {
                     uVar38 = 1;
                     uVar34 = uVar35;
                  }
 else {
                     uVar34 = uVar38 * uVar35;
                  }

                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = uVar39;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = uVar34;
                  lVar33 = SUB168(auVar8 * auVar16, 8);
                  uVar26 = *(uint*)( *(long*)( param_1 + 0x218 ) + lVar33 * 4 );
                  uVar32 = SUB164(auVar8 * auVar16, 8);
                  if (uVar26 != 0) {
                     uVar40 = 0;
                     while (( uVar38 != uVar26 || ( uVar24 != *(uint*)( *(long*)( lVar31 + lVar33 * 8 ) + 0x10 ) ) )) {
                        uVar40 = uVar40 + 1;
                        auVar9._8_8_ = 0;
                        auVar9._0_8_ = ( uVar32 + 1 ) * uVar35;
                        auVar17._8_8_ = 0;
                        auVar17._0_8_ = uVar39;
                        lVar33 = SUB168(auVar9 * auVar17, 8);
                        uVar26 = *(uint*)( *(long*)( param_1 + 0x218 ) + lVar33 * 4 );
                        uVar32 = SUB164(auVar9 * auVar17, 8);
                        if (( uVar26 == 0 ) || ( auVar10._8_8_ = 0 ),auVar10._0_8_ = uVar26 * uVar35,auVar18._8_8_ = 0,auVar18._0_8_ = uVar39,auVar11._8_8_ = 0,auVar11._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x230 ) * 4 ) + uVar32 ) - SUB164(auVar10 * auVar18, 8) ) * uVar35,auVar19._8_8_ = 0,auVar19._0_8_ = uVar39,SUB164(auVar11 * auVar19, 8) < uVar40) goto LAB_00112d96;
                     }
;
                     lVar37 = *(long*)( lVar31 + (ulong)uVar32 * 8 );
                  }

               }

            }

            LAB_00112d96:Dictionary::Dictionary((Dictionary*)&local_100);
            Variant::Variant((Variant*)local_88, (String*)local_f8);
            Variant::Variant((Variant*)local_a8, "name");
            pVVar30 = (Variant*)Dictionary::operator []((Variant*)&local_100);
            if (pVVar30 != (Variant*)local_88) {
               if (Variant::needs_deinit[*(int*)pVVar30] != '\0') {
                  Variant::_clear_internal();
               }

               *(undefined4*)pVVar30 = 0;
               *(int*)pVVar30 = local_88[0];
               *(undefined8*)( pVVar30 + 8 ) = local_80;
               *(undefined8*)( pVVar30 + 0x10 ) = uStack_78;
               local_88[0] = 0;
            }

            if (Variant::needs_deinit[local_a8[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (Variant::needs_deinit[local_88[0]] != '\0') {
               Variant::_clear_internal();
            }

            Variant::Variant((Variant*)local_88, local_138);
            Variant::Variant((Variant*)local_a8, "value");
            pVVar30 = (Variant*)Dictionary::operator []((Variant*)&local_100);
            if (pVVar30 != (Variant*)local_88) {
               if (Variant::needs_deinit[*(int*)pVVar30] != '\0') {
                  Variant::_clear_internal();
               }

               *(undefined4*)pVVar30 = 0;
               *(int*)pVVar30 = local_88[0];
               *(undefined8*)( pVVar30 + 8 ) = local_80;
               *(undefined8*)( pVVar30 + 0x10 ) = uStack_78;
               local_88[0] = 0;
            }

            if (Variant::needs_deinit[local_a8[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (Variant::needs_deinit[local_88[0]] != '\0') {
               Variant::_clear_internal();
            }

            Variant::Variant((Variant*)local_88, local_130);
            Variant::Variant((Variant*)local_a8, "type");
            pVVar30 = (Variant*)Dictionary::operator []((Variant*)&local_100);
            if (pVVar30 != (Variant*)local_88) {
               if (Variant::needs_deinit[*(int*)pVVar30] != '\0') {
                  Variant::_clear_internal();
               }

               *(undefined4*)pVVar30 = 0;
               *(int*)pVVar30 = local_88[0];
               *(undefined8*)( pVVar30 + 8 ) = local_80;
               *(undefined8*)( pVVar30 + 0x10 ) = uStack_78;
               local_88[0] = 0;
            }

            if (Variant::needs_deinit[local_a8[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (Variant::needs_deinit[local_88[0]] != '\0') {
               Variant::_clear_internal();
            }

            Variant::Variant((Variant*)local_88, local_e0);
            Variant::Variant((Variant*)local_a8, "variablesReference");
            pVVar30 = (Variant*)Dictionary::operator []((Variant*)&local_100);
            if (pVVar30 != (Variant*)local_88) {
               if (Variant::needs_deinit[*(int*)pVVar30] != '\0') {
                  Variant::_clear_internal();
               }

               *(undefined4*)pVVar30 = 0;
               *(int*)pVVar30 = local_88[0];
               *(undefined8*)( pVVar30 + 8 ) = local_80;
               *(undefined8*)( pVVar30 + 0x10 ) = uStack_78;
               local_88[0] = 0;
            }

            if (Variant::needs_deinit[local_a8[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (Variant::needs_deinit[local_88[0]] != '\0') {
               Variant::_clear_internal();
            }

            Variant::Variant((Variant*)local_88, (Dictionary*)&local_100);
            Array::push_back((Variant*)( lVar37 + 0x18 ));
            if (Variant::needs_deinit[local_88[0]] != '\0') {
               Variant::_clear_internal();
            }

            Dictionary::~Dictionary((Dictionary*)&local_100);
            lVar31 = local_e8;
            *(int*)( param_1 + 0x194 ) = *(int*)( param_1 + 0x194 ) + -1;
            if (local_e8 != 0) {
               LOCK();
               plVar1 = (long*)( local_e8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_e8 = 0;
                  Memory::free_static((void*)( lVar31 + -0x10 ), false);
               }

            }

            uVar23 = local_f8._8_8_;
            if (local_f8._8_8_ != 0) {
               LOCK();
               plVar1 = (long*)( local_f8._8_8_ + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_f8._8_8_ = 0;
                  Memory::free_static((void*)( uVar23 + -0x10 ), false);
               }

            }

            uVar23 = local_f8._0_8_;
            if (local_f8._0_8_ != 0) {
               LOCK();
               plVar1 = (long*)( local_f8._0_8_ + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = local_f8._8_8_;
                  local_f8 = auVar21 << 0x40;
                  Memory::free_static((void*)( uVar23 + -0x10 ), false);
               }

            }

            do {
               while (true) {
                  pvVar3 = *(void**)*pauVar27;
                  if (pvVar3 == (void*)0x0) {
                     if (*(int*)pauVar27[1] == 0) goto LAB_001130ef;
                     _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                     goto LAB_001130f9;
                  }

                  if (pauVar27 != *(undefined1(**) [16])( (long)pvVar3 + 0x18 )) break;
                  lVar31 = *(long*)( (long)pvVar3 + 8 );
                  lVar37 = *(long*)( (long)pvVar3 + 0x10 );
                  *(long*)*pauVar27 = lVar31;
                  if (pvVar3 == *(void**)( *pauVar27 + 8 )) {
                     *(long*)( *pauVar27 + 8 ) = lVar37;
                  }

                  if (lVar37 != 0) {
                     *(long*)( lVar37 + 8 ) = lVar31;
                     lVar31 = *(long*)( (long)pvVar3 + 8 );
                  }

                  if (lVar31 != 0) {
                     *(long*)( lVar31 + 0x10 ) = lVar37;
                  }

                  Memory::free_static(pvVar3, false);
                  pauVar36 = pauVar27 + 1;
                  *(int*)*pauVar36 = *(int*)*pauVar36 + -1;
                  if (*(int*)*pauVar36 == 0) goto LAB_001130ef;
               }
;
               _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
            }
 while ( *(int*)pauVar27[1] != 0 );
            LAB_001130ef:Memory::free_static(pauVar27, false);
            LAB_001130f9:uVar23 = local_c0._8_8_;
            if (local_c0._8_8_ != 0) {
               LOCK();
               plVar1 = (long*)( local_c0._8_8_ + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_c0._8_8_ = 0;
                  Memory::free_static((void*)( uVar23 + -0x10 ), false);
               }

            }

            uVar23 = local_c0._0_8_;
            if (local_c0._0_8_ != 0) {
               LOCK();
               plVar1 = (long*)( local_c0._0_8_ + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = local_c0._8_8_;
                  local_c0 = auVar22 << 0x40;
                  Memory::free_static((void*)( uVar23 + -0x10 ), false);
               }

            }

            Array::~Array(local_c8);
            lVar31 = local_d0;
            if (local_d0 != 0) {
               LOCK();
               plVar1 = (long*)( local_d0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_d0 = 0;
                  Memory::free_static((void*)( lVar31 + -0x10 ), false);
               }

            }

            if (Variant::needs_deinit[local_60] != '\0') {
               Variant::_clear_internal();
            }

            uVar35 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 - 0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( uVar35 - 0x10 ), false);
               }

            }

            goto LAB_001131dd;
         }

         _err_print_index_error("on_debug_stack_frame_var", "editor/debugger/debug_adapter/debug_adapter_protocol.cpp", 0x482, (long)(int)(uint)local_48, 4, "stack_var.type", "4", "", false, false);
         goto LAB_001133f5;
      }

   }

   LAB_0011365e:/* WARNING: Does not return */pcVar20 = (code*)invalidInstructionException();
   ( *pcVar20 )();
   LAB_00112a60:uVar38 = uVar38 + 1;
   auVar5._8_8_ = 0;
   auVar5._0_8_ = ( ulong )(uVar26 + 1) * lVar37;
   auVar13._8_8_ = 0;
   auVar13._0_8_ = uVar39;
   lVar33 = SUB168(auVar5 * auVar13, 8);
   uVar24 = *(uint*)( *(long*)( param_1 + 0x1e8 ) + lVar33 * 4 );
   uVar26 = SUB164(auVar5 * auVar13, 8);
   if (( uVar24 == 0 ) || ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar24 * lVar37,auVar14._8_8_ = 0,auVar14._0_8_ = uVar39,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x200 ) * 4 ) + uVar26 ) - SUB164(auVar6 * auVar14, 8)) * lVar37,auVar15._8_8_ = 0,auVar15._0_8_ = uVar39,SUB164(auVar7 * auVar15, 8) < uVar38) goto LAB_0011365e;
   goto LAB_00112aa9;
   LAB_001133d0:_err_print_error("on_debug_stack_frame_var", "editor/debugger/debug_adapter/debug_adapter_protocol.cpp", 0x481, "Condition \"scope_ids.size() != 3\" is true.", 0, 0);
   LAB_001133f5:if (pauVar27 != (undefined1(*) [16])0x0) {
      do {
         while (true) {
            pvVar3 = *(void**)*pauVar27;
            if (pvVar3 == (void*)0x0) {
               if (*(int*)pauVar27[1] != 0) {
                  _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                  goto LAB_00113454;
               }

               goto LAB_0011344a;
            }

            if (*(undefined1(**) [16])( (long)pvVar3 + 0x18 ) != pauVar27) break;
            lVar31 = *(long*)( (long)pvVar3 + 8 );
            lVar37 = *(long*)( (long)pvVar3 + 0x10 );
            *(long*)*pauVar27 = lVar31;
            if (pvVar3 == *(void**)( *pauVar27 + 8 )) {
               *(long*)( *pauVar27 + 8 ) = lVar37;
            }

            if (lVar37 != 0) {
               *(long*)( lVar37 + 8 ) = lVar31;
               lVar31 = *(long*)( (long)pvVar3 + 8 );
            }

            if (lVar31 != 0) {
               *(long*)( lVar31 + 0x10 ) = lVar37;
            }

            Memory::free_static(pvVar3, false);
            pauVar36 = pauVar27 + 1;
            *(int*)*pauVar36 = *(int*)*pauVar36 + -1;
            if (*(int*)*pauVar36 == 0) goto LAB_0011344a;
         }
;
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }
 while ( *(int*)pauVar27[1] != 0 );
      LAB_0011344a:Memory::free_static(pauVar27, false);
   }

   LAB_00113454:CowData<char32_t>::_unref((CowData<char32_t>*)( local_c0 + 8 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)local_c0);
   Array::~Array(local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   goto LAB_001133a5;
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
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x11ef, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11ef, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* RefCounted::_getv(StringName const&, Variant&) const */undefined8 RefCounted::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_setv(StringName const&, Variant const&) */undefined8 RefCounted::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_validate_propertyv(PropertyInfo&) const */void RefCounted::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* RefCounted::_property_can_revertv(StringName const&) const */undefined8 RefCounted::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */undefined8 RefCounted::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_notificationv(int, bool) */void RefCounted::_notificationv(int param_1, bool param_2) {
   return;
}
/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}
/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}
/* JSON::is_class_ptr(void*) const */uint JSON::is_class_ptr(JSON *this, void *param_1) {
   return (uint)CONCAT71(0x11ef, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11ef, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11ef, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11ef, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* JSON::_getv(StringName const&, Variant&) const */undefined8 JSON::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* JSON::_setv(StringName const&, Variant const&) */undefined8 JSON::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* JSON::_validate_propertyv(PropertyInfo&) const */void JSON::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* JSON::_property_can_revertv(StringName const&) const */undefined8 JSON::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* JSON::_property_get_revertv(StringName const&, Variant&) const */undefined8 JSON::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* JSON::_notificationv(int, bool) */void JSON::_notificationv(int param_1, bool param_2) {
   return;
}
/* DebugAdapterParser::is_class_ptr(void*) const */uint DebugAdapterParser::is_class_ptr(DebugAdapterParser *this, void *param_1) {
   return (uint)CONCAT71(0x11ef, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11ef, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* DebugAdapterParser::_getv(StringName const&, Variant&) const */undefined8 DebugAdapterParser::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* DebugAdapterParser::_setv(StringName const&, Variant const&) */undefined8 DebugAdapterParser::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* DebugAdapterParser::_validate_propertyv(PropertyInfo&) const */void DebugAdapterParser::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* DebugAdapterParser::_property_can_revertv(StringName const&) const */undefined8 DebugAdapterParser::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* DebugAdapterParser::_property_get_revertv(StringName const&, Variant&) const */undefined8 DebugAdapterParser::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* DebugAdapterParser::_notificationv(int, bool) */void DebugAdapterParser::_notificationv(int param_1, bool param_2) {
   return;
}
/* DebugAdapterProtocol::is_class_ptr(void*) const */uint DebugAdapterProtocol::is_class_ptr(DebugAdapterProtocol *this, void *param_1) {
   return (uint)CONCAT71(0x11ef, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11ef, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* DebugAdapterProtocol::_getv(StringName const&, Variant&) const */undefined8 DebugAdapterProtocol::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* DebugAdapterProtocol::_setv(StringName const&, Variant const&) */undefined8 DebugAdapterProtocol::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* DebugAdapterProtocol::_validate_propertyv(PropertyInfo&) const */void DebugAdapterProtocol::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* DebugAdapterProtocol::_property_can_revertv(StringName const&) const */undefined8 DebugAdapterProtocol::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* DebugAdapterProtocol::_property_get_revertv(StringName const&, Variant&) const */undefined8 DebugAdapterProtocol::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* DebugAdapterProtocol::_notificationv(int, bool) */void DebugAdapterProtocol::_notificationv(int param_1, bool param_2) {
   return;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, String const&, Array
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,Array_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,Array_const&> *this) {
   return;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, int
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DebugAdapterProtocol,void,int_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DebugAdapterProtocol,void,int_const&> *this) {
   return;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, Array
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DebugAdapterProtocol,void,Array_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DebugAdapterProtocol,void,Array_const&> *this) {
   return;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, bool const&, bool const&, String const&,
   bool const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DebugAdapterProtocol,void,bool_const&,bool_const&,String_const&,bool_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DebugAdapterProtocol,void,bool_const&,bool_const&,String_const&,bool_const&> *this) {
   return;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, String const&,
   int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int> *this) {
   return;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, String const&, int const&, bool
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int_const&,bool_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int_const&,bool_const&> *this) {
   return;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DebugAdapterProtocol,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DebugAdapterProtocol,void> *this) {
   return;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, String const&, Array
   const&>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,Array_const&>::get_argument_count(CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,Array_const&> *this, bool *param_1) {
   *param_1 = true;
   return 2;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, int const&>::get_argument_count(bool&)
   const */undefined8 CallableCustomMethodPointer<DebugAdapterProtocol,void,int_const&>::get_argument_count(CallableCustomMethodPointer<DebugAdapterProtocol,void,int_const&> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, Array const&>::get_argument_count(bool&)
   const */undefined8 CallableCustomMethodPointer<DebugAdapterProtocol,void,Array_const&>::get_argument_count(CallableCustomMethodPointer<DebugAdapterProtocol,void,Array_const&> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, bool const&, bool const&, String const&,
   bool const&>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<DebugAdapterProtocol,void,bool_const&,bool_const&,String_const&,bool_const&>::get_argument_count(CallableCustomMethodPointer<DebugAdapterProtocol,void,bool_const&,bool_const&,String_const&,bool_const&> *this, bool *param_1) {
   *param_1 = true;
   return 4;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, String const&,
   int>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int>::get_argument_count(CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int> *this, bool *param_1) {
   *param_1 = true;
   return 2;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, String const&, int const&, bool
   const&>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int_const&,bool_const&>::get_argument_count(CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int_const&,bool_const&> *this, bool *param_1) {
   *param_1 = true;
   return 3;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<DebugAdapterProtocol,void>::get_argument_count(CallableCustomMethodPointer<DebugAdapterProtocol,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, String const&, int const&, bool
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int_const&,bool_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int_const&,bool_const&> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DebugAdapterProtocol,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DebugAdapterProtocol,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, String const&,
   int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, bool const&, bool const&, String const&,
   bool const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DebugAdapterProtocol,void,bool_const&,bool_const&,String_const&,bool_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DebugAdapterProtocol,void,bool_const&,bool_const&,String_const&,bool_const&> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, int
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DebugAdapterProtocol,void,int_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DebugAdapterProtocol,void,int_const&> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, Array
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DebugAdapterProtocol,void,Array_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DebugAdapterProtocol,void,Array_const&> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, String const&, Array
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,Array_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,Array_const&> *this) {
   operator_delete(this, 0x48);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0011e398;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0011e398;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* DebugAdapterParser::~DebugAdapterParser() */void DebugAdapterParser::~DebugAdapterParser(DebugAdapterParser *this) {
   *(undefined***)this = &PTR__initialize_classv_0011e6d0;
   Object::~Object((Object*)this);
   return;
}
/* DebugAdapterParser::~DebugAdapterParser() */void DebugAdapterParser::~DebugAdapterParser(DebugAdapterParser *this) {
   *(undefined***)this = &PTR__initialize_classv_0011e6d0;
   Object::~Object((Object*)this);
   operator_delete(this, 0x178);
   return;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* DebugAdapterParser::_get_class_namev() const */undefined8 *DebugAdapterParser::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00113bc3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00113bc3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "DebugAdapterParser");
         goto LAB_00113c2e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "DebugAdapterParser");
   LAB_00113c2e:return &_get_class_namev();
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, bool const&, bool const&, String const&,
   bool const&>::get_object() const */undefined8 CallableCustomMethodPointer<DebugAdapterProtocol,void,bool_const&,bool_const&,String_const&,bool_const&>::get_object(CallableCustomMethodPointer<DebugAdapterProtocol,void,bool_const&,bool_const&,String_const&,bool_const&> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00113d5d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00113d5d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00113d5d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, Array const&>::get_object() const */undefined8 CallableCustomMethodPointer<DebugAdapterProtocol,void,Array_const&>::get_object(CallableCustomMethodPointer<DebugAdapterProtocol,void,Array_const&> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00113e5d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00113e5d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00113e5d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, int const&>::get_object() const */undefined8 CallableCustomMethodPointer<DebugAdapterProtocol,void,int_const&>::get_object(CallableCustomMethodPointer<DebugAdapterProtocol,void,int_const&> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00113f5d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00113f5d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00113f5d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, String const&, int>::get_object() const
    */undefined8 CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int>::get_object(CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0011405d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0011405d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0011405d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, String const&, Array
   const&>::get_object() const */undefined8 CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,Array_const&>::get_object(CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,Array_const&> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0011415d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0011415d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0011415d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void>::get_object() const */undefined8 CallableCustomMethodPointer<DebugAdapterProtocol,void>::get_object(CallableCustomMethodPointer<DebugAdapterProtocol,void> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0011425d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0011425d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0011425d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, String const&, int const&, bool
   const&>::get_object() const */undefined8 CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int_const&,bool_const&>::get_object(CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int_const&,bool_const&> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0011435d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0011435d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0011435d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* DAPeer::~DAPeer() */void DAPeer::~DAPeer(DAPeer *this) {
   Dictionary *this_00;
   long lVar1;
   Object *pOVar2;
   char cVar3;
   long lVar4;
   long *plVar5;
   *(undefined***)this = &PTR__initialize_classv_0011e830;
   Dictionary::~Dictionary((Dictionary*)( this + 0x4001b8 ));
   plVar5 = *(long**)( this + 0x400198 );
   if (plVar5 != (long*)0x0) {
      do {
         this_00 = (Dictionary*)*plVar5;
         if (this_00 == (Dictionary*)0x0) {
            if ((int)plVar5[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_00114502;
            }

            break;
         }

         if (*(long**)( this_00 + 0x18 ) == plVar5) {
            lVar4 = *(long*)( this_00 + 8 );
            lVar1 = *(long*)( this_00 + 0x10 );
            *plVar5 = lVar4;
            if (this_00 == (Dictionary*)plVar5[1]) {
               plVar5[1] = lVar1;
            }

            if (lVar1 != 0) {
               *(long*)( lVar1 + 8 ) = lVar4;
               lVar4 = *(long*)( this_00 + 8 );
            }

            if (lVar4 != 0) {
               *(long*)( lVar4 + 0x10 ) = lVar1;
            }

            Dictionary::~Dictionary(this_00);
            Memory::free_static(this_00, false);
            *(int*)( plVar5 + 2 ) = (int)plVar5[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar5 = *(long**)( this + 0x400198 );
      }
 while ( (int)plVar5[2] != 0 );
      Memory::free_static(plVar5, false);
   }

   LAB_00114502:if (*(long*)( this + 0x180 ) != 0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
         pOVar2 = *(Object**)( this + 0x180 );
         cVar3 = predelete_handler(pOVar2);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   *(undefined***)this = &PTR__initialize_classv_0011e398;
   Object::~Object((Object*)this);
   return;
}
/* DAPeer::~DAPeer() */void DAPeer::~DAPeer(DAPeer *this) {
   ~DAPeer(this)
   ;;
   operator_delete(this, 0x4001c0);
   return;
}
/* DebugAdapterProtocol::_get_class_namev() const */undefined8 *DebugAdapterProtocol::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00114653:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00114653;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "DebugAdapterProtocol");
         goto LAB_001146be;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "DebugAdapterProtocol");
   LAB_001146be:return &_get_class_namev();
}
/* RefCounted::_get_class_namev() const */undefined8 *RefCounted::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00114733:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00114733;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0011479e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0011479e:return &_get_class_namev();
}
/* JSON::_get_class_namev() const */undefined8 *JSON::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00114813:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00114813;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "JSON");
         goto LAB_0011487e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "JSON");
   LAB_0011487e:return &_get_class_namev();
}
/* Resource::get_base_extension() const */Resource * __thiscall Resource::get_base_extension(Resource *this){
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
/* CallableCustomMethodPointerBase::get_as_text() const */void CallableCustomMethodPointerBase::get_as_text(void) {
   char *__s;
   long lVar1;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   __s = *(char**)( in_RSI + 0x20 );
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)in_RDI = 0;
   if (__s != (char*)0x0) {
      strlen(__s);
   }

   String::parse_latin1(in_RDI);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::~String() */void String::~String(String *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* JSON::get_class() const */void JSON::get_class(void) {
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
/* DebugAdapterParser::get_class() const */void DebugAdapterParser::get_class(void) {
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
/* DebugAdapterProtocol::get_class() const */void DebugAdapterProtocol::get_class(void) {
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
/* RefCounted::get_class() const */void RefCounted::get_class(void) {
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
/* JSON::~JSON() */void JSON::~JSON(JSON *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_0011e4f8;
   if (*(long*)( this + 0x260 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x260 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x260 );
         *(undefined8*)( this + 0x260 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (Variant::needs_deinit[*(int*)( this + 0x248 )] != '\0') {
      Variant::_clear_internal();
   }

   if (*(long*)( this + 0x240 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x240 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x240 );
         *(undefined8*)( this + 0x240 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         Resource::~Resource((Resource*)this);
         return;
      }

   }

   Resource::~Resource((Resource*)this);
   return;
}
/* JSON::~JSON() */void JSON::~JSON(JSON *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_0011e4f8;
   if (*(long*)( this + 0x260 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x260 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x260 );
         *(undefined8*)( this + 0x260 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (Variant::needs_deinit[*(int*)( this + 0x248 )] != '\0') {
      Variant::_clear_internal();
   }

   if (*(long*)( this + 0x240 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x240 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x240 );
         *(undefined8*)( this + 0x240 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x270);
   return;
}
/* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   pvVar5 = *(void**)( this + 0x18 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x3c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x38 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x20 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x20 ) + lVar4 ) = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar5 + 0x48 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (*(long*)( (long)pvVar5 + 0x38 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x38 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x38 );
                        *(undefined8*)( (long)pvVar5 + 0x38 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x28 ) != 0 )) {
                     StringName::unref();
                  }

                  if (*(long*)( (long)pvVar5 + 0x20 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x20 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x20 );
                        *(undefined8*)( (long)pvVar5 + 0x20 ) = 0;
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
                  pvVar5 = *(void**)( this + 0x18 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_00114ff4;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_00114ff4:if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* DebugAdapterProtocol::_initialize_classv() */void DebugAdapterProtocol::_initialize_classv(void) {
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
      local_38 = "DebugAdapterProtocol";
      local_50 = 0;
      local_30 = 0x14;
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
            initialize_class()::initialized =
            '\x01';
            goto LAB_001150b5;
         }

      }

      initialize_class()::initialized =
      '\x01';
   }

   LAB_001150b5:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebugAdapterParser::_initialize_classv() */void DebugAdapterParser::_initialize_classv(void) {
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
      local_38 = "DebugAdapterParser";
      local_50 = 0;
      local_30 = 0x12;
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
         }

      }

      if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
         DebugAdapterParser::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
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
      local_38 = "RefCounted";
      local_50 = 0;
      local_30 = 10;
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
         }

      }

      if ((code*)PTR__bind_methods_00123008 != Object::_bind_methods) {
         RefCounted::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
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
      LAB_001156c8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001156c8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x001156e6;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x001156e6:if (lVar2 == 0) {
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
/* DebugAdapterParser::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void DebugAdapterParser::_get_property_listv(List *param_1, bool param_2) {
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
   local_78 = "DebugAdapterParser";
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "DebugAdapterParser";
   local_98 = 0;
   local_70 = 0x12;
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
      LAB_00115ab8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00115ab8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00115ad6;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00115ad6:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "DebugAdapterParser", false);
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
/* DebugAdapterProtocol::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void DebugAdapterProtocol::_get_property_listv(List *param_1, bool param_2) {
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
   local_78 = "DebugAdapterProtocol";
   local_70 = 0x14;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "DebugAdapterProtocol";
   local_98 = 0;
   local_70 = 0x14;
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
      LAB_00115ea8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00115ea8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00115ec6;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00115ec6:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "DebugAdapterProtocol", false);
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
/* DebugAdapterProtocol::is_class(String const&) const */undefined8 DebugAdapterProtocol::is_class(DebugAdapterProtocol *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_0011619f;
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

      LAB_0011619f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00116253;
   }

   cVar6 = String::operator ==(param_1, "DebugAdapterProtocol");
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
                     if (lVar5 == 0) goto LAB_00116303;
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

         LAB_00116303:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00116253;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_00116253:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_0011642f;
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

      LAB_0011642f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_001164e3;
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
                     if (lVar5 == 0) goto LAB_00116593;
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

         LAB_00116593:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_001164e3;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_001164e3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebugAdapterParser::is_class(String const&) const */undefined8 DebugAdapterParser::is_class(DebugAdapterParser *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_001166bf;
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

      LAB_001166bf:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00116773;
   }

   cVar6 = String::operator ==(param_1, "DebugAdapterParser");
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
                     if (lVar5 == 0) goto LAB_00116823;
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

         LAB_00116823:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00116773;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_00116773:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JSON::is_class(String const&) const */undefined8 JSON::is_class(JSON *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_0011694f;
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

      LAB_0011694f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00116a03;
   }

   cVar6 = String::operator ==(param_1, "JSON");
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
                     if (lVar5 == 0) goto LAB_00116ac3;
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

         LAB_00116ac3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00116a03;
      }

      cVar6 = String::operator ==(param_1, "Resource");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar7;
         }

         goto LAB_00116b6c;
      }

   }

   LAB_00116a03:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00116b6c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* JSON::_initialize_classv() */void JSON::_initialize_classv(void) {
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
   if (initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
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

            if ((code*)PTR__bind_methods_00123018 != RefCounted::_bind_methods) {
               RefCounted::_bind_methods();
            }

            RefCounted::initialize_class()::initialized =
            '\x01';
         }

         local_68 = 0;
         local_58 = "RefCounted";
         local_50 = 10;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "Resource";
         local_70 = 0;
         local_50 = 8;
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

         Resource::_bind_methods();
         Resource::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "JSON";
      local_70 = 0;
      local_50 = 4;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (undefined*)0x0 )) {
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

      if ((code*)PTR__bind_methods_00123010 != Resource::_bind_methods) {
         JSON::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::parse_latin1(char const*) */void String::parse_latin1(String *this, char *param_1) {
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
}
/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */void Variant::operator =(Variant *this, Variant *param_1) {
   undefined8 uVar1;
   if (this != param_1) {
      if (needs_deinit[*(int*)this] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)this = 0;
      *(undefined4*)this = *(undefined4*)param_1;
      uVar1 = *(undefined8*)( param_1 + 0x10 );
      *(undefined8*)( this + 8 ) = *(undefined8*)( param_1 + 8 );
      *(undefined8*)( this + 0x10 ) = uVar1;
      *(undefined4*)param_1 = 0;
      return;
   }

   return;
}
/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Resource::_get_property_listv(Resource *this, List *param_1, bool param_2) {
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
   local_78 = "Resource";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Resource";
   local_98 = 0;
   local_70 = 8;
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
      LAB_00117218:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00117218;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00117235;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00117235:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "Resource", false);
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
/* JSON::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void JSON::_get_property_listv(JSON *this, List *param_1, bool param_2) {
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
   undefined *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = &_LC11;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC11;
   local_98 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (undefined*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_00117668:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00117668;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00117685;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00117685:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "JSON", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Resource::_get_property_listv((Resource*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DAP::Source::compute_checksums() */void DAP::Source::compute_checksums(Source *this) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   char *pcVar5;
   Variant *pVVar6;
   long in_FS_OFFSET;
   undefined1 local_a8[16];
   undefined1 local_98[16];
   char *local_88;
   undefined8 local_80;
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x10 ) == 0 ) || ( *(uint*)( *(long*)( this + 0x10 ) + -8 ) < 2 )) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("compute_checksums", "editor/debugger/debug_adapter/debug_adapter_types.h", 0x46, "Condition \"path.is_empty()\" is true.", 0, 0);
         return;
      }

   }
 else {
      local_80 = 3;
      local_a8 = (undefined1[16])0x0;
      local_88 = "MD5";
      String::parse_latin1((StrRange*)local_a8);
      FileAccess::get_md5((String*)&local_88);
      pcVar5 = local_88;
      uVar4 = local_a8._8_8_;
      if ((char*)local_a8._8_8_ == local_88) {
         if ((undefined*)local_a8._8_8_ != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( local_a8._8_8_ + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_88 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

      }
 else {
         if ((undefined*)local_a8._8_8_ != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( local_a8._8_8_ + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a8._8_8_ = 0;
               Memory::free_static((undefined*)( uVar4 + -0x10 ), false);
            }

         }

         local_a8._8_8_ = local_88;
      }

      local_80 = 6;
      local_88 = "SHA256";
      local_98 = (undefined1[16])0x0;
      String::parse_latin1((StrRange*)local_98);
      FileAccess::get_sha256((String*)&local_88);
      pcVar5 = local_88;
      uVar4 = local_98._8_8_;
      if ((char*)local_98._8_8_ == local_88) {
         if ((char*)local_98._8_8_ != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_98._8_8_ + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_88 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

      }
 else {
         if ((char*)local_98._8_8_ != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_98._8_8_ + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_98._8_8_ = 0;
               Memory::free_static((char*)( uVar4 + -0x10 ), false);
            }

         }

         local_98._8_8_ = local_88;
      }

      Dictionary::Dictionary((Dictionary*)&local_88);
      Variant::Variant((Variant*)local_58, (String*)local_a8);
      Variant::Variant((Variant*)local_78, "algorithm");
      pVVar6 = (Variant*)Dictionary::operator []((Variant*)&local_88);
      if (pVVar6 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar6] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar6 = 0;
         *(int*)pVVar6 = local_58[0];
         *(undefined8*)( pVVar6 + 8 ) = local_50;
         *(undefined8*)( pVVar6 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, (String*)( local_a8 + 8 ));
      Variant::Variant((Variant*)local_78, "checksum");
      pVVar6 = (Variant*)Dictionary::operator []((Variant*)&local_88);
      if (pVVar6 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar6] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar6 = 0;
         *(int*)pVVar6 = local_58[0];
         *(undefined8*)( pVVar6 + 8 ) = local_50;
         *(undefined8*)( pVVar6 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, (Dictionary*)&local_88);
      Array::push_back((Variant*)this);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Dictionary::~Dictionary((Dictionary*)&local_88);
      Dictionary::Dictionary((Dictionary*)&local_88);
      Variant::Variant((Variant*)local_58, (String*)local_98);
      Variant::Variant((Variant*)local_78, "algorithm");
      pVVar6 = (Variant*)Dictionary::operator []((Variant*)&local_88);
      if (pVVar6 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar6] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar6 = 0;
         *(int*)pVVar6 = local_58[0];
         *(undefined8*)( pVVar6 + 8 ) = local_50;
         *(undefined8*)( pVVar6 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, (String*)( local_98 + 8 ));
      Variant::Variant((Variant*)local_78, "checksum");
      pVVar6 = (Variant*)Dictionary::operator []((Variant*)&local_88);
      if (pVVar6 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar6] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar6 = 0;
         *(int*)pVVar6 = local_58[0];
         *(undefined8*)( pVVar6 + 8 ) = local_50;
         *(undefined8*)( pVVar6 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, (Dictionary*)&local_88);
      Array::push_back((Variant*)this);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Dictionary::~Dictionary((Dictionary*)&local_88);
      uVar4 = local_98._8_8_;
      if (local_98._8_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_98._8_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98._8_8_ = 0;
            Memory::free_static((void*)( uVar4 + -0x10 ), false);
         }

      }

      uVar4 = local_98._0_8_;
      if (local_98._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_98._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_98._8_8_;
            local_98 = auVar3 << 0x40;
            Memory::free_static((void*)( uVar4 + -0x10 ), false);
         }

      }

      uVar4 = local_a8._8_8_;
      if (local_a8._8_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_a8._8_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a8._8_8_ = 0;
            Memory::free_static((void*)( uVar4 + -0x10 ), false);
         }

      }

      uVar4 = local_a8._0_8_;
      if (local_a8._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_a8._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar2._8_8_ = 0;
            auVar2._0_8_ = local_a8._8_8_;
            local_a8 = auVar2 << 0x40;
            Memory::free_static((void*)( uVar4 + -0x10 ), false);
         }

      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebugAdapterProtocol::on_client_connected() [clone .cold] */void DebugAdapterProtocol::on_client_connected(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* DebugAdapterProtocol::notify_custom_data(String const&, Array const&) [clone .cold] */void DebugAdapterProtocol::notify_custom_data(String *param_1, Array *param_2) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* DebugAdapterProtocol::poll() [clone .cold] */void DebugAdapterProtocol::poll(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* DebugAdapterProtocol::parse_variant(Variant const&) [clone .cold] */void DebugAdapterProtocol::parse_variant(Variant *param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* DAP::Variable::~Variable() */void DAP::Variable::~Variable(Variable *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)( this + 0x10 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x10 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x10 );
         *(undefined8*)( this + 0x10 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 8 );
         *(undefined8*)( this + 8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* CowData<char32_t>::TEMPNAMEPLACEHOLDERVALUE(CowData<char32_t>&&) */void CowData<char32_t>::operator =(CowData<char32_t> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   lVar2 = *(long*)this;
   lVar3 = *(long*)param_1;
   if (lVar2 != lVar3) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            lVar3 = *(long*)param_1;
         }
 else {
            *(undefined8*)this = 0;
            lVar3 = *(long*)param_1;
         }

      }

      *(long*)this = lVar3;
      *(undefined8*)param_1 = 0;
      return;
   }

   return;
}
/* List<Pair<PropertyInfo, Variant>, DefaultAllocator>::~List() */void List<Pair<PropertyInfo,Variant>,DefaultAllocator>::~List(List<Pair<PropertyInfo,Variant>,DefaultAllocator> *this) {
   long *plVar1;
   void *pvVar2;
   long lVar3;
   undefined8 *puVar4;
   puVar4 = *(undefined8**)this;
   if (puVar4 == (undefined8*)0x0) {
      return;
   }

   do {
      pvVar2 = (void*)*puVar4;
      if (pvVar2 == (void*)0x0) {
         if (*(int*)( puVar4 + 2 ) != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(undefined8**)( (long)pvVar2 + 0x58 ) == puVar4) {
         *puVar4 = *(undefined8*)( (long)pvVar2 + 0x48 );
         if (pvVar2 == (void*)puVar4[1]) {
            puVar4[1] = *(undefined8*)( (long)pvVar2 + 0x50 );
         }

         if (*(long*)( (long)pvVar2 + 0x50 ) != 0) {
            *(undefined8*)( *(long*)( (long)pvVar2 + 0x50 ) + 0x48 ) = *(undefined8*)( (long)pvVar2 + 0x48 );
         }

         if (*(long*)( (long)pvVar2 + 0x48 ) != 0) {
            *(undefined8*)( *(long*)( (long)pvVar2 + 0x48 ) + 0x50 ) = *(undefined8*)( (long)pvVar2 + 0x50 );
         }

         if (Variant::needs_deinit[*(int*)( (long)pvVar2 + 0x30 )] != '\0') {
            Variant::_clear_internal();
         }

         if (*(long*)( (long)pvVar2 + 0x20 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)pvVar2 + 0x20 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( (long)pvVar2 + 0x20 );
               *(undefined8*)( (long)pvVar2 + 0x20 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar2 + 0x10 ) != 0 )) {
            StringName::unref();
         }

         if (*(long*)( (long)pvVar2 + 8 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)pvVar2 + 8 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( (long)pvVar2 + 8 );
               *(undefined8*)( (long)pvVar2 + 8 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         Memory::free_static(pvVar2, false);
         *(int*)( puVar4 + 2 ) = *(int*)( puVar4 + 2 ) + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      puVar4 = *(undefined8**)this;
   }
 while ( *(int*)( puVar4 + 2 ) != 0 );
   Memory::free_static(puVar4, false);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */String *HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert(String *param_1) {
   CowData<char32_t> *this;
   void *pvVar1;
   void *pvVar2;
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
   char cVar28;
   uint uVar29;
   uint uVar30;
   int iVar31;
   ulong uVar32;
   long lVar33;
   long lVar34;
   long lVar35;
   uint *puVar36;
   int iVar37;
   uint uVar38;
   String *in_RDX;
   ulong uVar39;
   long lVar40;
   long *in_RSI;
   long lVar41;
   ulong uVar42;
   ulong uVar43;
   undefined4 uVar44;
   uint uVar45;
   uint uVar46;
   uint local_88;
   uVar29 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   if (*in_RSI == 0) {
      uVar32 = (ulong)uVar29 * 4;
      lVar33 = Memory::alloc_static(uVar32, false);
      in_RSI[3] = lVar33;
      lVar33 = Memory::alloc_static((ulong)uVar29 * 8, false);
      *in_RSI = lVar33;
      lVar33 = Memory::alloc_static(uVar32, false);
      in_RSI[2] = lVar33;
      lVar33 = Memory::alloc_static(uVar32, false);
      in_RSI[1] = lVar33;
      if (uVar29 != 0) {
         memset((void*)in_RSI[3], 0, uVar32);
      }

      iVar37 = *(int*)( (long)in_RSI + 0x24 );
      if (*in_RSI != 0) goto LAB_00118b9c;
   }
 else {
      iVar37 = *(int*)( (long)in_RSI + 0x24 );
      LAB_00118b9c:if (iVar37 != 0) {
         uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
         lVar33 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
         uVar45 = String::hash();
         uVar32 = CONCAT44(0, uVar30);
         lVar41 = in_RSI[3];
         uVar38 = 1;
         if (uVar45 != 0) {
            uVar38 = uVar45;
         }

         uVar46 = 0;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = (ulong)uVar38 * lVar33;
         auVar24._8_8_ = 0;
         auVar24._0_8_ = uVar32;
         lVar40 = SUB168(auVar12 * auVar24, 8);
         uVar45 = *(uint*)( lVar41 + lVar40 * 4 );
         iVar37 = SUB164(auVar12 * auVar24, 8);
         if (uVar45 == 0) {
            iVar37 = *(int*)( (long)in_RSI + 0x24 );
         }
 else {
            do {
               if (uVar38 == uVar45) {
                  cVar28 = String::operator ==((String*)( *in_RSI + ( ulong ) * (uint*)( in_RSI[1] + lVar40 * 4 ) * 8 ), in_RDX);
                  if (cVar28 != '\0') {
                     iVar37 = *(int*)( (long)in_RSI + 0x24 );
                     lVar33 = *in_RSI;
                     iVar31 = *(int*)( in_RSI[1] + lVar40 * 4 );
                     goto LAB_00118f19;
                  }

                  lVar41 = in_RSI[3];
               }

               uVar46 = uVar46 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(iVar37 + 1) * lVar33;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar32;
               lVar40 = SUB168(auVar13 * auVar25, 8);
               uVar45 = *(uint*)( lVar41 + lVar40 * 4 );
               iVar37 = SUB164(auVar13 * auVar25, 8);
            }
 while ( ( uVar45 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar45 * lVar33,auVar26._8_8_ = 0,auVar26._0_8_ = uVar32,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar30 + iVar37 ) - SUB164(auVar14 * auVar26, 8)) * lVar33,auVar27._8_8_ = 0,auVar27._0_8_ = uVar32,uVar46 <= SUB164(auVar15 * auVar27, 8) );
            iVar37 = *(int*)( (long)in_RSI + 0x24 );
         }

      }

   }

   if ((float)uVar29 * __LC53 < (float)( iVar37 + 1 )) {
      if ((int)in_RSI[4] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         iVar37 = *(int*)( (long)in_RSI + 0x24 );
         lVar33 = *in_RSI;
         iVar31 = -1;
         goto LAB_00118f19;
      }

      uVar29 = (int)in_RSI[4] + 1;
      uVar32 = (ulong)uVar29;
      if (uVar29 < 2) {
         uVar32 = 2;
      }

      uVar29 = *(uint*)( hash_table_size_primes + uVar32 * 4 );
      *(int*)( in_RSI + 4 ) = (int)uVar32;
      pvVar1 = (void*)in_RSI[3];
      uVar32 = (ulong)uVar29 * 4;
      pvVar2 = (void*)in_RSI[2];
      lVar33 = Memory::alloc_static(uVar32, false);
      in_RSI[3] = lVar33;
      lVar33 = Memory::realloc_static((void*)*in_RSI, (ulong)uVar29 * 8, false);
      *in_RSI = lVar33;
      lVar33 = Memory::alloc_static(uVar32, false);
      in_RSI[2] = lVar33;
      lVar33 = Memory::realloc_static((void*)in_RSI[1], uVar32, false);
      in_RSI[1] = lVar33;
      if (uVar29 != 0) {
         memset((void*)in_RSI[3], 0, uVar32);
      }

      if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
         uVar32 = 0;
         lVar41 = in_RSI[3];
         lVar40 = in_RSI[2];
         do {
            uVar43 = uVar32 & 0xffffffff;
            uVar44 = (undefined4)uVar32;
            uVar45 = 0;
            uVar29 = *(uint*)( (long)pvVar1 + ( ulong ) * (uint*)( (long)pvVar2 + uVar32 * 4 ) * 4 );
            uVar39 = (ulong)uVar29;
            uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
            uVar42 = CONCAT44(0, uVar30);
            lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar39 * lVar34;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar42;
            lVar35 = SUB168(auVar4 * auVar16, 8) * 4;
            iVar37 = SUB164(auVar4 * auVar16, 8);
            puVar36 = (uint*)( lVar41 + lVar35 );
            uVar38 = *puVar36;
            if (uVar38 == 0) {
               lVar34 = uVar32 * 4;
            }
 else {
               do {
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (ulong)uVar38 * lVar34;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar42;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = ( ulong )(( uVar30 + iVar37 ) - SUB164(auVar5 * auVar17, 8)) * lVar34;
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = uVar42;
                  local_88 = SUB164(auVar6 * auVar18, 8);
                  if (local_88 < uVar45) {
                     *(int*)( lVar40 + uVar43 * 4 ) = iVar37;
                     uVar29 = *puVar36;
                     *puVar36 = (uint)uVar39;
                     uVar38 = *(uint*)( lVar35 + lVar33 );
                     uVar39 = (ulong)uVar29;
                     *(uint*)( lVar35 + lVar33 ) = (uint)uVar43;
                     uVar43 = (ulong)uVar38;
                     uVar45 = local_88;
                  }

                  uVar44 = (undefined4)uVar43;
                  uVar29 = (uint)uVar39;
                  uVar45 = uVar45 + 1;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = ( ulong )(iVar37 + 1) * lVar34;
                  auVar19._8_8_ = 0;
                  auVar19._0_8_ = uVar42;
                  lVar35 = SUB168(auVar7 * auVar19, 8) * 4;
                  iVar37 = SUB164(auVar7 * auVar19, 8);
                  puVar36 = (uint*)( lVar41 + lVar35 );
                  uVar38 = *puVar36;
               }
 while ( uVar38 != 0 );
               lVar34 = uVar43 << 2;
            }

            *puVar36 = uVar29;
            uVar32 = uVar32 + 1;
            *(int*)( lVar40 + lVar34 ) = iVar37;
            *(undefined4*)( lVar33 + lVar35 ) = uVar44;
         }
 while ( (uint)uVar32 < *(uint*)( (long)in_RSI + 0x24 ) );
      }

      Memory::free_static(pvVar1, false);
      Memory::free_static(pvVar2, false);
   }

   uVar30 = String::hash();
   uVar32 = ( ulong ) * (uint*)( (long)in_RSI + 0x24 );
   lVar33 = *in_RSI;
   uVar29 = 1;
   if (uVar30 != 0) {
      uVar29 = uVar30;
   }

   this(CowData<char32_t> * )(lVar33 + uVar32 * 8);
   uVar39 = (ulong)uVar29;
   *(undefined8*)this = 0;
   if (*(long*)in_RDX != 0) {
      CowData<char32_t>::_ref(this, (CowData*)in_RDX);
      uVar32 = ( ulong ) * (uint*)( (long)in_RSI + 0x24 );
      lVar33 = *in_RSI;
   }

   uVar44 = (undefined4)uVar32;
   uVar45 = 0;
   lVar40 = in_RSI[3];
   uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   uVar43 = CONCAT44(0, uVar30);
   lVar35 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
   auVar8._8_8_ = 0;
   auVar8._0_8_ = uVar39 * lVar35;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar43;
   lVar41 = SUB168(auVar8 * auVar20, 8) * 4;
   iVar37 = SUB164(auVar8 * auVar20, 8);
   lVar34 = in_RSI[2];
   lVar3 = in_RSI[1];
   puVar36 = (uint*)( lVar40 + lVar41 );
   uVar38 = *puVar36;
   uVar42 = uVar32;
   while (uVar38 != 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar38 * lVar35;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar43;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = ( ulong )(( uVar30 + iVar37 ) - SUB164(auVar9 * auVar21, 8)) * lVar35;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar43;
      local_88 = SUB164(auVar10 * auVar22, 8);
      if (local_88 < uVar45) {
         *(int*)( lVar34 + uVar42 * 4 ) = iVar37;
         uVar29 = *puVar36;
         *puVar36 = (uint)uVar39;
         puVar36 = (uint*)( lVar41 + lVar3 );
         uVar38 = *puVar36;
         uVar39 = (ulong)uVar29;
         *puVar36 = (uint)uVar32;
         uVar32 = (ulong)uVar38;
         uVar42 = uVar32;
         uVar45 = local_88;
      }

      uVar44 = (undefined4)uVar32;
      uVar29 = (uint)uVar39;
      uVar45 = uVar45 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(iVar37 + 1) * lVar35;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar43;
      lVar41 = SUB168(auVar11 * auVar23, 8) * 4;
      iVar37 = SUB164(auVar11 * auVar23, 8);
      puVar36 = (uint*)( lVar40 + lVar41 );
      uVar38 = *puVar36;
   }
;
   *puVar36 = uVar29;
   *(int*)( lVar34 + uVar42 * 4 ) = iVar37;
   *(undefined4*)( lVar3 + lVar41 ) = uVar44;
   iVar31 = *(int*)( (long)in_RSI + 0x24 );
   iVar37 = iVar31 + 1;
   *(int*)( (long)in_RSI + 0x24 ) = iVar37;
   LAB_00118f19:*(int*)( param_1 + 0xc ) = iVar31;
   *(long*)param_1 = lVar33;
   *(int*)( param_1 + 8 ) = iVar37;
   return param_1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<int, Array, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Array> > >::insert(int const&, Array const&, bool) */int *HashMap<int,Array,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Array>>>::insert(int *param_1, Array *param_2, bool param_3) {
   uint *puVar1;
   undefined8 *puVar2;
   void *pvVar3;
   void *__s;
   long lVar4;
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
   long *plVar29;
   uint uVar30;
   uint uVar31;
   uint uVar32;
   ulong uVar33;
   undefined8 uVar34;
   void *__s_00;
   long *plVar35;
   Array *in_RCX;
   int iVar36;
   undefined7 in_register_00000011;
   uint *puVar37;
   ulong uVar38;
   long lVar39;
   long lVar40;
   long lVar41;
   ulong uVar42;
   undefined8 uVar43;
   char in_R8B;
   uint uVar44;
   uint uVar45;
   uint uVar46;
   long *plVar47;
   long in_FS_OFFSET;
   void *local_a8;
   Array local_50[16];
   long local_40;
   puVar37 = (uint*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   local_a8 = *(void**)( param_2 + 8 );
   if (local_a8 == (void*)0x0) {
      uVar42 = (ulong)uVar31;
      uVar33 = uVar42 * 4;
      uVar38 = uVar42 * 8;
      uVar34 = Memory::alloc_static(uVar33, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar34;
      local_a8 = (void*)Memory::alloc_static(uVar38, false);
      *(void**)( param_2 + 8 ) = local_a8;
      if (uVar31 != 0) {
         pvVar3 = *(void**)( param_2 + 0x10 );
         if (( pvVar3 < (void*)( (long)local_a8 + uVar38 ) ) && ( local_a8 < (void*)( (long)pvVar3 + uVar33 ) )) {
            uVar33 = 0;
            do {
               *(undefined4*)( (long)pvVar3 + uVar33 * 4 ) = 0;
               *(undefined8*)( (long)local_a8 + uVar33 * 8 ) = 0;
               uVar33 = uVar33 + 1;
            }
 while ( uVar42 != uVar33 );
            goto LAB_00119291;
         }

         memset(pvVar3, 0, uVar33);
         memset(local_a8, 0, uVar38);
         uVar32 = *puVar37;
         iVar36 = *(int*)( param_2 + 0x2c );
         goto LAB_001192a1;
      }

      uVar32 = *puVar37;
      iVar36 = *(int*)( param_2 + 0x2c );
      if (local_a8 != (void*)0x0) goto LAB_001192a1;
   }
 else {
      LAB_00119291:uVar32 = *puVar37;
      iVar36 = *(int*)( param_2 + 0x2c );
      LAB_001192a1:if (iVar36 != 0) {
         uVar33 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         uVar30 = ( uVar32 >> 0x10 ^ uVar32 ) * -0x7a143595;
         uVar30 = ( uVar30 ^ uVar30 >> 0xd ) * -0x3d4d51cb;
         uVar46 = uVar30 ^ uVar30 >> 0x10;
         if (uVar30 == uVar30 >> 0x10) {
            uVar46 = 1;
            uVar38 = uVar33;
         }
 else {
            uVar38 = uVar46 * uVar33;
         }

         uVar42 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ));
         uVar45 = 0;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = uVar42;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = uVar38;
         lVar39 = SUB168(auVar5 * auVar17, 8);
         uVar44 = SUB164(auVar5 * auVar17, 8);
         uVar30 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar39 * 4 );
         if (uVar30 != 0) {
            do {
               if (( uVar46 == uVar30 ) && ( *(uint*)( *(long*)( (long)local_a8 + lVar39 * 8 ) + 0x10 ) == uVar32 )) {
                  Array::operator =((Array*)( *(long*)( (long)local_a8 + (ulong)uVar44 * 8 ) + 0x18 ), in_RCX);
                  plVar35 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar44 * 8 );
                  goto LAB_00119760;
               }

               uVar45 = uVar45 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( uVar44 + 1 ) * uVar33;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = uVar42;
               lVar39 = SUB168(auVar6 * auVar18, 8);
               uVar30 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar39 * 4 );
               uVar44 = SUB164(auVar6 * auVar18, 8);
            }
 while ( ( uVar30 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = uVar30 * uVar33,auVar19._8_8_ = 0,auVar19._0_8_ = uVar42,auVar8._8_8_ = 0,auVar8._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ) + uVar44 ) - SUB164(auVar7 * auVar19, 8) ) * uVar33,auVar20._8_8_ = 0,auVar20._0_8_ = uVar42,uVar45 <= SUB164(auVar8 * auVar20, 8) );
         }

      }

   }

   if ((float)uVar31 * __LC53 < (float)( iVar36 + 1 )) {
      uVar31 = *(uint*)( param_2 + 0x28 );
      if (uVar31 == 0x1c) {
         plVar35 = (long*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_00119760;
      }

      uVar33 = ( ulong )(uVar31 + 1);
      uVar32 = *(uint*)( hash_table_size_primes + (ulong)uVar31 * 4 );
      *(undefined4*)( param_2 + 0x2c ) = 0;
      if (uVar31 + 1 < 2) {
         uVar33 = 2;
      }

      uVar31 = *(uint*)( hash_table_size_primes + uVar33 * 4 );
      *(int*)( param_2 + 0x28 ) = (int)uVar33;
      pvVar3 = *(void**)( param_2 + 0x10 );
      uVar42 = (ulong)uVar31;
      uVar33 = uVar42 * 4;
      uVar38 = uVar42 * 8;
      uVar34 = Memory::alloc_static(uVar33, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar34;
      __s_00 = (void*)Memory::alloc_static(uVar38, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar31 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar38 ) ) && ( __s_00 < (void*)( (long)__s + uVar33 ) )) {
            uVar33 = 0;
            do {
               *(undefined4*)( (long)__s + uVar33 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar33 * 8 ) = 0;
               uVar33 = uVar33 + 1;
            }
 while ( uVar33 != uVar42 );
         }
 else {
            memset(__s, 0, uVar33);
            memset(__s_00, 0, uVar38);
         }

      }

      uVar33 = 0;
      if (uVar32 != 0) {
         do {
            uVar31 = *(uint*)( (long)pvVar3 + uVar33 * 4 );
            if (uVar31 != 0) {
               uVar44 = 0;
               lVar39 = *(long*)( param_2 + 0x10 );
               uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
               uVar38 = CONCAT44(0, uVar30);
               lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
               auVar9._8_8_ = 0;
               auVar9._0_8_ = (ulong)uVar31 * lVar4;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar38;
               lVar40 = SUB168(auVar9 * auVar21, 8);
               puVar1 = (uint*)( lVar39 + lVar40 * 4 );
               iVar36 = SUB164(auVar9 * auVar21, 8);
               uVar46 = *puVar1;
               uVar34 = *(undefined8*)( (long)local_a8 + uVar33 * 8 );
               while (uVar46 != 0) {
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = (ulong)uVar46 * lVar4;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar38;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( ulong )(( uVar30 + iVar36 ) - SUB164(auVar10 * auVar22, 8)) * lVar4;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar38;
                  uVar45 = SUB164(auVar11 * auVar23, 8);
                  uVar43 = uVar34;
                  if (uVar45 < uVar44) {
                     *puVar1 = uVar31;
                     puVar2 = (undefined8*)( (long)__s_00 + lVar40 * 8 );
                     uVar43 = *puVar2;
                     *puVar2 = uVar34;
                     uVar31 = uVar46;
                     uVar44 = uVar45;
                  }

                  uVar44 = uVar44 + 1;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(iVar36 + 1) * lVar4;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar38;
                  lVar40 = SUB168(auVar12 * auVar24, 8);
                  puVar1 = (uint*)( lVar39 + lVar40 * 4 );
                  iVar36 = SUB164(auVar12 * auVar24, 8);
                  uVar34 = uVar43;
                  uVar46 = *puVar1;
               }
;
               *(undefined8*)( (long)__s_00 + lVar40 * 8 ) = uVar34;
               *puVar1 = uVar31;
               *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
            }

            uVar33 = uVar33 + 1;
         }
 while ( uVar32 != uVar33 );
         Memory::free_static(local_a8, false);
         Memory::free_static(pvVar3, false);
      }

   }

   uVar31 = *puVar37;
   Array::Array(local_50, in_RCX);
   plVar35 = (long*)operator_new(0x20, "");
   *plVar35 = 0;
   plVar35[1] = 0;
   *(uint*)( plVar35 + 2 ) = uVar31;
   Array::Array((Array*)( plVar35 + 3 ), local_50);
   Array::~Array(local_50);
   puVar2 = *(undefined8**)( param_2 + 0x20 );
   if (puVar2 == (undefined8*)0x0) {
      *(long**)( param_2 + 0x18 ) = plVar35;
      *(long**)( param_2 + 0x20 ) = plVar35;
   }
 else if (in_R8B == '\0') {
      *puVar2 = plVar35;
      plVar35[1] = (long)puVar2;
      *(long**)( param_2 + 0x20 ) = plVar35;
   }
 else {
      lVar39 = *(long*)( param_2 + 0x18 );
      *(long**)( lVar39 + 8 ) = plVar35;
      *plVar35 = lVar39;
      *(long**)( param_2 + 0x18 ) = plVar35;
   }

   uVar31 = ( *puVar37 >> 0x10 ^ *puVar37 ) * -0x7a143595;
   uVar32 = ( uVar31 ^ uVar31 >> 0xd ) * -0x3d4d51cb;
   uVar31 = uVar32 ^ uVar32 >> 0x10;
   if (uVar32 == uVar32 >> 0x10) {
      uVar33 = 1;
      uVar31 = 1;
   }
 else {
      uVar33 = (ulong)uVar31;
   }

   uVar46 = 0;
   lVar39 = *(long*)( param_2 + 0x10 );
   uVar32 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar38 = CONCAT44(0, uVar32);
   lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   auVar13._8_8_ = 0;
   auVar13._0_8_ = uVar33 * lVar4;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar38;
   lVar41 = SUB168(auVar13 * auVar25, 8);
   lVar40 = *(long*)( param_2 + 8 );
   puVar37 = (uint*)( lVar39 + lVar41 * 4 );
   iVar36 = SUB164(auVar13 * auVar25, 8);
   uVar30 = *puVar37;
   plVar29 = plVar35;
   while (uVar30 != 0) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)uVar30 * lVar4;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar38;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(( uVar32 + iVar36 ) - SUB164(auVar14 * auVar26, 8)) * lVar4;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar38;
      uVar44 = SUB164(auVar15 * auVar27, 8);
      plVar47 = plVar29;
      if (uVar44 < uVar46) {
         *puVar37 = uVar31;
         puVar2 = (undefined8*)( lVar40 + lVar41 * 8 );
         plVar47 = (long*)*puVar2;
         *puVar2 = plVar29;
         uVar31 = uVar30;
         uVar46 = uVar44;
      }

      uVar46 = uVar46 + 1;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = ( ulong )(iVar36 + 1) * lVar4;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar38;
      lVar41 = SUB168(auVar16 * auVar28, 8);
      puVar37 = (uint*)( lVar39 + lVar41 * 4 );
      iVar36 = SUB164(auVar16 * auVar28, 8);
      plVar29 = plVar47;
      uVar30 = *puVar37;
   }
;
   *(long**)( lVar40 + lVar41 * 8 ) = plVar29;
   *puVar37 = uVar31;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_00119760:*(long**)param_1 = plVar35;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* HashSet<ObjectID, HashMapHasherDefault, HashMapComparatorDefault<ObjectID> >::erase(ObjectID
   const&) */undefined8 HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::erase(HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>> *this, ObjectID *param_1) {
   uint *puVar1;
   undefined4 *puVar2;
   undefined4 *puVar3;
   uint *puVar4;
   undefined4 uVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long lVar10;
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
   uint uVar31;
   ulong uVar32;
   uint uVar33;
   uint *puVar34;
   int iVar35;
   uint uVar36;
   long lVar37;
   ulong uVar38;
   uint *puVar39;
   ulong uVar40;
   uint *puVar41;
   ulong uVar42;
   ulong uVar43;
   uint uVar44;
   lVar6 = *(long*)this;
   if (lVar6 == 0) {
      return 0;
   }

   if (*(int*)( this + 0x24 ) != 0) {
      lVar7 = *(long*)( this + 0x18 );
      uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 );
      uVar42 = CONCAT44(0, uVar31);
      lVar8 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x20 ) * 8 );
      uVar32 = *(long*)param_1 * 0x3ffff - 1;
      uVar32 = ( uVar32 ^ uVar32 >> 0x1f ) * 0x15;
      uVar32 = ( uVar32 ^ uVar32 >> 0xb ) * 0x41;
      uVar32 = uVar32 >> 0x16 ^ uVar32;
      uVar40 = uVar32 & 0xffffffff;
      if ((int)uVar32 == 0) {
         uVar40 = 1;
      }

      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar40 * lVar8;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar42;
      lVar37 = SUB168(auVar11 * auVar21, 8);
      uVar44 = *(uint*)( lVar7 + lVar37 * 4 );
      iVar35 = SUB164(auVar11 * auVar21, 8);
      if (uVar44 != 0) {
         uVar33 = 0;
         while (true) {
            if ((uint)uVar40 == uVar44) {
               lVar9 = *(long*)( this + 8 );
               uVar44 = *(uint*)( lVar9 + lVar37 * 4 );
               uVar32 = (ulong)uVar44;
               if (*(long*)param_1 == *(long*)( lVar6 + uVar32 * 8 )) {
                  lVar10 = *(long*)( this + 0x10 );
                  puVar1 = (uint*)( lVar10 + uVar32 * 4 );
                  uVar33 = *puVar1;
                  uVar40 = (ulong)uVar33;
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = ( ulong )(uVar33 + 1) * lVar8;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ = uVar42;
                  lVar37 = SUB168(auVar15 * auVar25, 8) * 4;
                  uVar36 = SUB164(auVar15 * auVar25, 8);
                  uVar43 = (ulong)uVar36;
                  puVar39 = (uint*)( lVar7 + lVar37 );
                  if (( *puVar39 == 0 ) || ( auVar16._8_8_ = 0 ),auVar16._0_8_ = ( ulong ) * puVar39 * lVar8,auVar26._8_8_ = 0,auVar26._0_8_ = uVar42,auVar17._8_8_ = 0,auVar17._0_8_ = ( ulong )(( uVar36 + uVar31 ) - SUB164(auVar16 * auVar26, 8)) * lVar8,auVar27._8_8_ = 0,auVar27._0_8_ = uVar42,SUB164(auVar17 * auVar27, 8) == 0) {
                     uVar43 = (ulong)uVar33;
                  }
 else {
                     while (true) {
                        puVar34 = (uint*)( lVar37 + lVar9 );
                        puVar4 = (uint*)( lVar9 + uVar40 * 4 );
                        puVar41 = (uint*)( uVar40 * 4 + lVar7 );
                        puVar2 = (undefined4*)( lVar10 + ( ulong ) * puVar34 * 4 );
                        puVar3 = (undefined4*)( lVar10 + ( ulong ) * puVar4 * 4 );
                        uVar5 = *puVar3;
                        *puVar3 = *puVar2;
                        *puVar2 = uVar5;
                        uVar33 = *puVar39;
                        *puVar39 = *puVar41;
                        *puVar41 = uVar33;
                        uVar33 = *puVar34;
                        *puVar34 = *puVar4;
                        *puVar4 = uVar33;
                        auVar20._8_8_ = 0;
                        auVar20._0_8_ = ( ulong )((int)uVar43 + 1) * lVar8;
                        auVar30._8_8_ = 0;
                        auVar30._0_8_ = uVar42;
                        uVar38 = SUB168(auVar20 * auVar30, 8);
                        lVar37 = uVar38 * 4;
                        puVar39 = (uint*)( lVar7 + lVar37 );
                        if (( *puVar39 == 0 ) || ( auVar18._8_8_ = 0 ),auVar18._0_8_ = ( ulong ) * puVar39 * lVar8,auVar28._8_8_ = 0,auVar28._0_8_ = uVar42,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( SUB164(auVar20 * auVar30, 8) + uVar31 ) - SUB164(auVar18 * auVar28, 8)) * lVar8,auVar29._8_8_ = 0,auVar29._0_8_ = uVar42,SUB164(auVar19 * auVar29, 8) == 0) break;
                        uVar40 = uVar43;
                        uVar43 = uVar38 & 0xffffffff;
                     }
;
                  }

                  *(undefined4*)( lVar7 + uVar43 * 4 ) = 0;
                  uVar31 = *(int*)( this + 0x24 ) - 1;
                  *(uint*)( this + 0x24 ) = uVar31;
                  if (uVar44 < uVar31) {
                     uVar33 = *(uint*)( lVar10 + (ulong)uVar31 * 4 );
                     *(undefined8*)( lVar6 + uVar32 * 8 ) = *(undefined8*)( lVar6 + (ulong)uVar31 * 8 );
                     *puVar1 = uVar33;
                     *(uint*)( lVar9 + ( ulong ) * (uint*)( lVar10 + ( ulong ) * (uint*)( this + 0x24 ) * 4 ) * 4 ) = uVar44;
                  }

                  return 1;
               }

            }

            uVar33 = uVar33 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = ( ulong )(iVar35 + 1) * lVar8;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar42;
            lVar37 = SUB168(auVar12 * auVar22, 8);
            uVar44 = *(uint*)( lVar7 + lVar37 * 4 );
            iVar35 = SUB164(auVar12 * auVar22, 8);
            if (uVar44 == 0) break;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar44 * lVar8;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar42;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = ( ulong )(( uVar31 + iVar35 ) - SUB164(auVar13 * auVar23, 8)) * lVar8;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar42;
            if (SUB164(auVar14 * auVar24, 8) < uVar33) {
               return 0;
            }

         }
;
         return 0;
      }

   }

   return 0;
}
/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::erase(String const&) */uint HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::erase(HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *this, String *param_1) {
   long *plVar1;
   undefined4 *puVar2;
   undefined4 *puVar3;
   CowData<char32_t> *this_00;
   CowData *pCVar4;
   uint *puVar5;
   uint uVar6;
   undefined4 uVar7;
   long lVar8;
   long lVar9;
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
   uint uVar30;
   uint uVar31;
   long lVar33;
   uint *puVar34;
   int iVar35;
   uint uVar36;
   long lVar37;
   ulong uVar38;
   long *plVar39;
   uint *puVar40;
   uint *puVar41;
   ulong uVar42;
   ulong uVar43;
   long lVar44;
   uint uVar45;
   ulong uVar46;
   ulong uVar32;
   if (( *(long*)this != 0 ) && ( *(int*)( this + 0x24 ) != 0 )) {
      uVar6 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 );
      uVar32 = CONCAT44(0, uVar6);
      lVar33 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x20 ) * 8 );
      uVar30 = String::hash();
      lVar44 = *(long*)( this + 0x18 );
      uVar31 = 1;
      if (uVar30 != 0) {
         uVar31 = uVar30;
      }

      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar31 * lVar33;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar32;
      lVar37 = SUB168(auVar10 * auVar20, 8);
      uVar30 = *(uint*)( lVar44 + lVar37 * 4 );
      iVar35 = SUB164(auVar10 * auVar20, 8);
      if (uVar30 != 0) {
         uVar45 = 0;
         do {
            if (uVar31 == uVar30) {
               uVar30 = String::operator ==((String*)( *(long*)this + ( ulong ) * (uint*)( *(long*)( this + 8 ) + lVar37 * 4 ) * 8 ), param_1);
               if ((char)uVar30 != '\0') {
                  lVar44 = *(long*)( this + 8 );
                  lVar8 = *(long*)( this + 0x10 );
                  lVar9 = *(long*)( this + 0x18 );
                  uVar6 = *(uint*)( lVar44 + lVar37 * 4 );
                  uVar43 = (ulong)uVar6;
                  uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 );
                  uVar46 = CONCAT44(0, uVar31);
                  lVar37 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x20 ) * 8 );
                  uVar45 = *(uint*)( lVar8 + uVar43 * 4 );
                  uVar32 = (ulong)uVar45;
                  auVar14._8_8_ = 0;
                  auVar14._0_8_ = ( ulong )(uVar45 + 1) * lVar37;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar46;
                  lVar33 = SUB168(auVar14 * auVar24, 8) * 4;
                  uVar36 = SUB164(auVar14 * auVar24, 8);
                  uVar42 = (ulong)uVar36;
                  puVar41 = (uint*)( lVar9 + lVar33 );
                  if (( *puVar41 == 0 ) || ( auVar15._8_8_ = 0 ),auVar15._0_8_ = ( ulong ) * puVar41 * lVar37,auVar25._8_8_ = 0,auVar25._0_8_ = uVar46,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar31 + uVar36 ) - SUB164(auVar15 * auVar25, 8)) * lVar37,auVar26._8_8_ = 0,auVar26._0_8_ = uVar46,SUB164(auVar16 * auVar26, 8) == 0) {
                     uVar42 = (ulong)uVar45;
                  }
 else {
                     while (true) {
                        puVar34 = (uint*)( lVar33 + lVar44 );
                        puVar5 = (uint*)( lVar44 + uVar32 * 4 );
                        puVar40 = (uint*)( uVar32 * 4 + lVar9 );
                        puVar2 = (undefined4*)( lVar8 + ( ulong ) * puVar34 * 4 );
                        puVar3 = (undefined4*)( lVar8 + ( ulong ) * puVar5 * 4 );
                        uVar7 = *puVar3;
                        *puVar3 = *puVar2;
                        *puVar2 = uVar7;
                        uVar45 = *puVar41;
                        *puVar41 = *puVar40;
                        *puVar40 = uVar45;
                        uVar45 = *puVar34;
                        *puVar34 = *puVar5;
                        *puVar5 = uVar45;
                        auVar19._8_8_ = 0;
                        auVar19._0_8_ = ( ulong )((int)uVar42 + 1) * lVar37;
                        auVar29._8_8_ = 0;
                        auVar29._0_8_ = uVar46;
                        uVar38 = SUB168(auVar19 * auVar29, 8);
                        lVar33 = uVar38 * 4;
                        puVar41 = (uint*)( lVar9 + lVar33 );
                        if (( *puVar41 == 0 ) || ( auVar17._8_8_ = 0 ),auVar17._0_8_ = ( ulong ) * puVar41 * lVar37,auVar27._8_8_ = 0,auVar27._0_8_ = uVar46,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( SUB164(auVar19 * auVar29, 8) + uVar31 ) - SUB164(auVar17 * auVar27, 8)) * lVar37,auVar28._8_8_ = 0,auVar28._0_8_ = uVar46,SUB164(auVar18 * auVar28, 8) == 0) break;
                        uVar32 = uVar42;
                        uVar42 = uVar38 & 0xffffffff;
                     }
;
                     uVar30 = uVar30 & 0xff;
                  }

                  *(undefined4*)( lVar9 + uVar42 * 4 ) = 0;
                  plVar39 = (long*)( *(long*)this + uVar43 * 8 );
                  if (*plVar39 != 0) {
                     LOCK();
                     plVar1 = (long*)( *plVar39 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar33 = *plVar39;
                        *plVar39 = 0;
                        Memory::free_static((void*)( lVar33 + -0x10 ), false);
                        uVar30 = uVar30 & 0xff;
                     }

                  }

                  uVar31 = *(int*)( this + 0x24 ) - 1;
                  uVar32 = (ulong)uVar31;
                  *(uint*)( this + 0x24 ) = uVar31;
                  if (uVar31 <= uVar6) {
                     return uVar30;
                  }

                  this_00 = (CowData<char32_t>*)( *(long*)this + uVar43 * 8 );
                  pCVar4 = (CowData*)( *(long*)this + uVar32 * 8 );
                  *(undefined8*)this_00 = 0;
                  uVar31 = uVar30;
                  if (*(long*)pCVar4 != 0) {
                     CowData<char32_t>::_ref(this_00, pCVar4);
                     uVar32 = ( ulong ) * (uint*)( this + 0x24 );
                     uVar31 = uVar30 & 0xff;
                     plVar39 = (long*)( *(long*)this + uVar32 * 8 );
                     if (*plVar39 != 0) {
                        LOCK();
                        plVar1 = (long*)( *plVar39 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           lVar33 = *plVar39;
                           *plVar39 = 0;
                           Memory::free_static((void*)( lVar33 + -0x10 ), false);
                           uVar31 = uVar30 & 0xff;
                           uVar32 = ( ulong ) * (uint*)( this + 0x24 );
                        }
 else {
                           uVar32 = ( ulong ) * (uint*)( this + 0x24 );
                        }

                     }

                  }

                  lVar33 = *(long*)( this + 0x10 );
                  *(undefined4*)( lVar33 + uVar43 * 4 ) = *(undefined4*)( lVar33 + uVar32 * 4 );
                  *(uint*)( *(long*)( this + 8 ) + ( ulong ) * (uint*)( lVar33 + ( ulong ) * (uint*)( this + 0x24 ) * 4 ) * 4 ) = uVar6;
                  return uVar31;
               }

               lVar44 = *(long*)( this + 0x18 );
            }

            uVar45 = uVar45 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = ( ulong )(iVar35 + 1) * lVar33;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar32;
            lVar37 = SUB168(auVar11 * auVar21, 8);
            uVar30 = *(uint*)( lVar44 + lVar37 * 4 );
            iVar35 = SUB164(auVar11 * auVar21, 8);
         }
 while ( ( uVar30 != 0 ) && ( auVar12._8_8_ = 0 ),auVar12._0_8_ = (ulong)uVar30 * lVar33,auVar22._8_8_ = 0,auVar22._0_8_ = uVar32,auVar13._8_8_ = 0,auVar13._0_8_ = ( ulong )(( uVar6 + iVar35 ) - SUB164(auVar12 * auVar22, 8)) * lVar33,auVar23._8_8_ = 0,auVar23._0_8_ = uVar32,uVar45 <= SUB164(auVar13 * auVar23, 8) );
      }

   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, DAP::Variable, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, DAP::Variable> > >::insert(String const&,
   DAP::Variable const&, bool) */String * HashMap<String,DAP::Variable,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DAP::Variable>>>
         ::insert(String *param_1,Variable *param_2,bool param_3){
   uint *puVar1;
   long *plVar2;
   undefined4 uVar3;
   void *pvVar4;
   void *__s;
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
   char cVar29;
   uint uVar30;
   ulong uVar31;
   undefined8 uVar32;
   void *__s_00;
   long *plVar33;
   undefined8 *puVar34;
   void *pvVar35;
   CowData *in_RCX;
   int iVar36;
   uint uVar37;
   undefined7 in_register_00000011;
   String *pSVar38;
   long lVar39;
   long lVar40;
   uint uVar41;
   ulong uVar42;
   undefined8 uVar43;
   char in_R8B;
   uint uVar44;
   uint uVar45;
   ulong uVar46;
   long lVar47;
   long lVar48;
   uint uVar49;
   long *plVar50;
   long in_FS_OFFSET;
   uint local_d8;
   long local_68;
   long local_60;
   long local_58;
   long local_50;
   undefined4 local_48;
   long local_40;
   pSVar38 = (String*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar41 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar42 = (ulong)uVar41;
      uVar31 = uVar42 * 4;
      uVar46 = uVar42 * 8;
      uVar32 = Memory::alloc_static(uVar31, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar32;
      pvVar35 = (void*)Memory::alloc_static(uVar46, false);
      *(void**)( param_2 + 8 ) = pvVar35;
      if (uVar41 != 0) {
         pvVar4 = *(void**)( param_2 + 0x10 );
         if (( pvVar4 < (void*)( (long)pvVar35 + uVar46 ) ) && ( pvVar35 < (void*)( (long)pvVar4 + uVar31 ) )) {
            uVar31 = 0;
            do {
               *(undefined4*)( (long)pvVar4 + uVar31 * 4 ) = 0;
               *(undefined8*)( (long)pvVar35 + uVar31 * 8 ) = 0;
               uVar31 = uVar31 + 1;
            }
 while ( uVar42 != uVar31 );
         }
 else {
            memset(pvVar4, 0, uVar31);
            memset(pvVar35, 0, uVar46);
         }

         goto LAB_00119fe8;
      }

      iVar36 = *(int*)( param_2 + 0x2c );
      if (pvVar35 == (void*)0x0) goto LAB_00119ffb;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0011a550;
      LAB_0011a021:uVar41 = *(uint*)( param_2 + 0x28 );
      if (uVar41 == 0x1c) {
         plVar33 = (long*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0011a4f7;
      }

      uVar31 = ( ulong )(uVar41 + 1);
      uVar30 = *(uint*)( hash_table_size_primes + (ulong)uVar41 * 4 );
      *(undefined4*)( param_2 + 0x2c ) = 0;
      if (uVar41 + 1 < 2) {
         uVar31 = 2;
      }

      uVar41 = *(uint*)( hash_table_size_primes + uVar31 * 4 );
      *(int*)( param_2 + 0x28 ) = (int)uVar31;
      pvVar35 = *(void**)( param_2 + 8 );
      uVar42 = (ulong)uVar41;
      uVar31 = uVar42 * 4;
      pvVar4 = *(void**)( param_2 + 0x10 );
      uVar32 = Memory::alloc_static(uVar31, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar32;
      uVar46 = uVar42 * 8;
      __s_00 = (void*)Memory::alloc_static(uVar46, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar41 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar46 ) ) && ( __s_00 < (void*)( (long)__s + uVar31 ) )) {
            uVar31 = 0;
            do {
               *(undefined4*)( (long)__s + uVar31 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar31 * 8 ) = 0;
               uVar31 = uVar31 + 1;
            }
 while ( uVar31 != uVar42 );
         }
 else {
            memset(__s, 0, uVar31);
            memset(__s_00, 0, uVar46);
         }

      }

      if (uVar30 != 0) {
         uVar31 = 0;
         do {
            uVar41 = *(uint*)( (long)pvVar4 + uVar31 * 4 );
            if (uVar41 != 0) {
               uVar44 = 0;
               lVar48 = *(long*)( param_2 + 0x10 );
               uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
               uVar46 = CONCAT44(0, uVar37);
               lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
               auVar5._8_8_ = 0;
               auVar5._0_8_ = (ulong)uVar41 * lVar47;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar46;
               lVar39 = SUB168(auVar5 * auVar17, 8);
               puVar1 = (uint*)( lVar48 + lVar39 * 4 );
               iVar36 = SUB164(auVar5 * auVar17, 8);
               uVar45 = *puVar1;
               uVar32 = *(undefined8*)( (long)pvVar35 + uVar31 * 8 );
               while (uVar45 != 0) {
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = (ulong)uVar45 * lVar47;
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = uVar46;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = ( ulong )(( uVar37 + iVar36 ) - SUB164(auVar6 * auVar18, 8)) * lVar47;
                  auVar19._8_8_ = 0;
                  auVar19._0_8_ = uVar46;
                  local_d8 = SUB164(auVar7 * auVar19, 8);
                  uVar43 = uVar32;
                  if (local_d8 < uVar44) {
                     *puVar1 = uVar41;
                     puVar34 = (undefined8*)( (long)__s_00 + lVar39 * 8 );
                     uVar43 = *puVar34;
                     *puVar34 = uVar32;
                     uVar41 = uVar45;
                     uVar44 = local_d8;
                  }

                  uVar44 = uVar44 + 1;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = ( ulong )(iVar36 + 1) * lVar47;
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = uVar46;
                  lVar39 = SUB168(auVar8 * auVar20, 8);
                  puVar1 = (uint*)( lVar48 + lVar39 * 4 );
                  iVar36 = SUB164(auVar8 * auVar20, 8);
                  uVar32 = uVar43;
                  uVar45 = *puVar1;
               }
;
               *(undefined8*)( (long)__s_00 + lVar39 * 8 ) = uVar32;
               *puVar1 = uVar41;
               *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
            }

            uVar31 = uVar31 + 1;
         }
 while ( uVar30 != uVar31 );
         Memory::free_static(pvVar35, false);
         Memory::free_static(pvVar4, false);
      }

   }
 else {
      LAB_00119fe8:iVar36 = *(int*)( param_2 + 0x2c );
      if (iVar36 != 0) {
         LAB_0011a550:uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         lVar48 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         uVar45 = String::hash();
         uVar31 = CONCAT44(0, uVar30);
         lVar47 = *(long*)( param_2 + 0x10 );
         uVar37 = 1;
         if (uVar45 != 0) {
            uVar37 = uVar45;
         }

         uVar49 = 0;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = (ulong)uVar37 * lVar48;
         auVar25._8_8_ = 0;
         auVar25._0_8_ = uVar31;
         lVar39 = SUB168(auVar13 * auVar25, 8);
         uVar45 = *(uint*)( lVar47 + lVar39 * 4 );
         uVar44 = SUB164(auVar13 * auVar25, 8);
         if (uVar45 != 0) {
            do {
               if (uVar45 == uVar37) {
                  cVar29 = String::operator ==((String*)( *(long*)( *(long*)( param_2 + 8 ) + lVar39 * 8 ) + 0x10 ), pSVar38);
                  if (cVar29 != '\0') {
                     lVar48 = *(long*)( *(long*)( param_2 + 8 ) + (ulong)uVar44 * 8 );
                     if (*(long*)( lVar48 + 0x18 ) != *(long*)in_RCX) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)( lVar48 + 0x18 ), in_RCX);
                     }

                     if (*(long*)( lVar48 + 0x20 ) != *(long*)( in_RCX + 8 )) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)( lVar48 + 0x20 ), in_RCX + 8);
                     }

                     if (*(long*)( lVar48 + 0x28 ) != *(long*)( in_RCX + 0x10 )) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)( lVar48 + 0x28 ), in_RCX + 0x10);
                     }

                     *(undefined4*)( lVar48 + 0x30 ) = *(undefined4*)( in_RCX + 0x18 );
                     plVar33 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar44 * 8 );
                     goto LAB_0011a4f7;
                  }

                  lVar47 = *(long*)( param_2 + 0x10 );
               }

               uVar49 = uVar49 + 1;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = ( ulong )(uVar44 + 1) * lVar48;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar31;
               lVar39 = SUB168(auVar14 * auVar26, 8);
               uVar45 = *(uint*)( lVar47 + lVar39 * 4 );
               uVar44 = SUB164(auVar14 * auVar26, 8);
            }
 while ( ( uVar45 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar45 * lVar48,auVar27._8_8_ = 0,auVar27._0_8_ = uVar31,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar30 + uVar44 ) - SUB164(auVar15 * auVar27, 8)) * lVar48,auVar28._8_8_ = 0,auVar28._0_8_ = uVar31,uVar49 <= SUB164(auVar16 * auVar28, 8) );
         }

         iVar36 = *(int*)( param_2 + 0x2c );
      }

      LAB_00119ffb:if ((float)uVar41 * __LC53 < (float)( iVar36 + 1 )) goto LAB_0011a021;
   }

   local_68 = 0;
   if (*(long*)pSVar38 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)pSVar38);
   }

   local_60 = 0;
   if (*(long*)in_RCX != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, in_RCX);
   }

   local_58 = 0;
   if (*(long*)( in_RCX + 8 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, in_RCX + 8);
   }

   local_50 = 0;
   lVar48 = *(long*)( in_RCX + 0x10 );
   if (*(long*)( in_RCX + 0x10 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, in_RCX + 0x10);
      lVar48 = local_50;
   }

   uVar3 = *(undefined4*)( in_RCX + 0x18 );
   local_48 = uVar3;
   plVar33 = (long*)operator_new(0x38, "");
   plVar33[2] = 0;
   *plVar33 = 0;
   plVar33[1] = 0;
   if (local_68 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( plVar33 + 2 ), (CowData*)&local_68);
   }

   plVar33[3] = 0;
   if (local_60 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( plVar33 + 3 ), (CowData*)&local_60);
   }

   lVar47 = local_58;
   plVar33[4] = 0;
   if (local_58 == 0) {
      plVar33[5] = 0;
      if (lVar48 != 0) goto LAB_0011a371;
      *(undefined4*)( plVar33 + 6 ) = uVar3;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( plVar33 + 4 ), (CowData*)&local_58);
      plVar33[5] = 0;
      if (lVar48 == 0) {
         *(undefined4*)( plVar33 + 6 ) = uVar3;
      }
 else {
         LAB_0011a371:CowData<char32_t>::_ref((CowData<char32_t>*)( plVar33 + 5 ), (CowData*)&local_50);
         *(undefined4*)( plVar33 + 6 ) = uVar3;
         LOCK();
         plVar2 = (long*)( lVar48 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         lVar47 = local_58;
         if (*plVar2 == 0) {
            Memory::free_static((void*)( local_50 + -0x10 ), false);
            lVar47 = local_58;
         }

         local_58 = lVar47;
         if (lVar47 == 0) goto LAB_0011a3ab;
      }

      LOCK();
      plVar2 = (long*)( lVar47 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         Memory::free_static((void*)( local_58 + -0x10 ), false);
      }

   }

   LAB_0011a3ab:if (local_60 != 0) {
      LOCK();
      plVar2 = (long*)( local_60 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         Memory::free_static((void*)( local_60 + -0x10 ), false);
      }

   }

   if (local_68 == 0) {
      LAB_0011a3d7:puVar34 = *(undefined8**)( param_2 + 0x20 );
      if (puVar34 != (undefined8*)0x0) goto LAB_0011a3e9;
      LAB_0011a6c2:*(long**)( param_2 + 0x18 ) = plVar33;
      *(long**)( param_2 + 0x20 ) = plVar33;
   }
 else {
      LOCK();
      plVar2 = (long*)( local_68 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) goto LAB_0011a3d7;
      Memory::free_static((void*)( local_68 + -0x10 ), false);
      puVar34 = *(undefined8**)( param_2 + 0x20 );
      if (puVar34 == (undefined8*)0x0) goto LAB_0011a6c2;
      LAB_0011a3e9:if (in_R8B == '\0') {
         *puVar34 = plVar33;
         plVar33[1] = (long)puVar34;
         *(long**)( param_2 + 0x20 ) = plVar33;
      }
 else {
         lVar48 = *(long*)( param_2 + 0x18 );
         *(long**)( lVar48 + 8 ) = plVar33;
         *plVar33 = lVar48;
         *(long**)( param_2 + 0x18 ) = plVar33;
      }

   }

   uVar30 = String::hash();
   uVar41 = 1;
   if (uVar30 != 0) {
      uVar41 = uVar30;
   }

   lVar48 = *(long*)( param_2 + 0x10 );
   uVar45 = 0;
   uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar31 = CONCAT44(0, uVar30);
   lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   auVar9._8_8_ = 0;
   auVar9._0_8_ = (ulong)uVar41 * lVar47;
   auVar21._8_8_ = 0;
   auVar21._0_8_ = uVar31;
   lVar40 = SUB168(auVar9 * auVar21, 8);
   lVar39 = *(long*)( param_2 + 8 );
   puVar1 = (uint*)( lVar48 + lVar40 * 4 );
   iVar36 = SUB164(auVar9 * auVar21, 8);
   uVar37 = *puVar1;
   plVar2 = plVar33;
   while (uVar37 != 0) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar37 * lVar47;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar31;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(( iVar36 + uVar30 ) - SUB164(auVar10 * auVar22, 8)) * lVar47;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar31;
      local_d8 = SUB164(auVar11 * auVar23, 8);
      plVar50 = plVar2;
      if (local_d8 < uVar45) {
         *puVar1 = uVar41;
         puVar34 = (undefined8*)( lVar39 + lVar40 * 8 );
         plVar50 = (long*)*puVar34;
         *puVar34 = plVar2;
         uVar45 = local_d8;
         uVar41 = uVar37;
      }

      uVar45 = uVar45 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(iVar36 + 1) * lVar47;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar31;
      lVar40 = SUB168(auVar12 * auVar24, 8);
      puVar1 = (uint*)( lVar48 + lVar40 * 4 );
      iVar36 = SUB164(auVar12 * auVar24, 8);
      plVar2 = plVar50;
      uVar37 = *puVar1;
   }
;
   *(long**)( lVar39 + lVar40 * 8 ) = plVar2;
   *puVar1 = uVar41;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_0011a4f7:*(long**)param_1 = plVar33;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<ObjectID, HashMapHasherDefault, HashMapComparatorDefault<ObjectID> >::insert(ObjectID
   const&) */undefined1[16];HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::insert(ObjectID *param_1) {
   uint *puVar1;
   long lVar2;
   long lVar3;
   void *pvVar4;
   void *pvVar5;
   long lVar6;
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
   uint uVar31;
   uint uVar32;
   ulong uVar33;
   long lVar34;
   int iVar35;
   long *in_RDX;
   long lVar36;
   long *in_RSI;
   uint uVar37;
   ulong uVar38;
   uint uVar39;
   ulong uVar40;
   undefined4 uVar41;
   ulong uVar42;
   ulong uVar43;
   uint uVar44;
   undefined1 auVar45[16];
   ulong uStack_98;
   ulong local_70;
   uVar32 = *(uint*)( in_RSI + 4 );
   uVar31 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
   lVar34 = *in_RSI;
   if (lVar34 == 0) {
      uVar33 = (ulong)uVar31 * 4;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[3] = lVar34;
      lVar34 = Memory::alloc_static((ulong)uVar31 * 8, false);
      *in_RSI = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[2] = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[1] = lVar34;
      if (uVar31 != 0) {
         memset((void*)in_RSI[3], 0, uVar33);
      }

      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      lVar34 = *in_RSI;
      local_70 = *in_RDX;
      uVar32 = *(uint*)( in_RSI + 4 );
      if (lVar34 != 0) goto LAB_0011a94f;
   }
 else {
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      local_70 = *in_RDX;
      LAB_0011a94f:if (uVar44 != 0) {
         uVar43 = CONCAT44(0, *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 ));
         lVar3 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
         uVar33 = local_70 * 0x3ffff - 1;
         uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
         uVar33 = ( uVar33 ^ uVar33 >> 0xb ) * 0x41;
         uVar33 = uVar33 >> 0x16 ^ uVar33;
         uVar42 = uVar33 & 0xffffffff;
         if ((int)uVar33 == 0) {
            uVar42 = 1;
         }

         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar42 * lVar3;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = uVar43;
         lVar36 = SUB168(auVar7 * auVar19, 8);
         uVar39 = *(uint*)( in_RSI[3] + lVar36 * 4 );
         uVar33 = (ulong)uVar39;
         iVar35 = SUB164(auVar7 * auVar19, 8);
         if (uVar39 != 0) {
            uVar39 = 0;
            do {
               if ((int)uVar42 == (int)uVar33) {
                  uVar37 = *(uint*)( in_RSI[1] + lVar36 * 4 );
                  uStack_98 = (ulong)uVar37;
                  if (*(long*)( lVar34 + uStack_98 * 8 ) == local_70) goto LAB_0011ae01;
               }

               uVar39 = uVar39 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(iVar35 + 1) * lVar3;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = uVar43;
               lVar36 = SUB168(auVar8 * auVar20, 8);
               uVar37 = *(uint*)( in_RSI[3] + lVar36 * 4 );
               uVar33 = (ulong)uVar37;
               iVar35 = SUB164(auVar8 * auVar20, 8);
            }
 while ( ( uVar37 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = uVar33 * lVar3,auVar21._8_8_ = 0,auVar21._0_8_ = uVar43,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 ) + iVar35 ) - SUB164(auVar9 * auVar21, 8)) * lVar3,auVar22._8_8_ = 0,auVar22._0_8_ = uVar43,uVar39 <= SUB164(auVar10 * auVar22, 8) );
         }

      }

   }

   if ((float)uVar31 * __LC53 < (float)( uVar44 + 1 )) {
      if (uVar32 == 0x1c) {
         uStack_98 = 0;
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
         uVar44 = *(uint*)( (long)in_RSI + 0x24 );
         uVar37 = 0xffffffff;
         lVar34 = *in_RSI;
         goto LAB_0011ae01;
      }

      uVar33 = ( ulong )(uVar32 + 1);
      if (uVar32 + 1 < 2) {
         uVar33 = 2;
      }

      uVar31 = *(uint*)( hash_table_size_primes + uVar33 * 4 );
      *(int*)( in_RSI + 4 ) = (int)uVar33;
      pvVar4 = (void*)in_RSI[3];
      uVar33 = (ulong)uVar31 * 4;
      pvVar5 = (void*)in_RSI[2];
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[3] = lVar34;
      lVar34 = Memory::realloc_static((void*)*in_RSI, (ulong)uVar31 * 8, false);
      *in_RSI = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[2] = lVar34;
      lVar34 = Memory::realloc_static((void*)in_RSI[1], uVar33, false);
      in_RSI[1] = lVar34;
      if (uVar31 != 0) {
         memset((void*)in_RSI[3], 0, uVar33);
      }

      if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
         lVar3 = in_RSI[2];
         lVar36 = in_RSI[3];
         local_70 = 0;
         do {
            uVar39 = 0;
            uVar43 = local_70 & 0xffffffff;
            uVar41 = (undefined4)local_70;
            uVar31 = *(uint*)( (long)pvVar4 + ( ulong ) * (uint*)( (long)pvVar5 + local_70 * 4 ) * 4 );
            uVar33 = (ulong)uVar31;
            uVar32 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
            uVar38 = CONCAT44(0, uVar32);
            lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar33 * lVar6;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar38;
            lVar2 = SUB168(auVar11 * auVar23, 8) * 4;
            iVar35 = SUB164(auVar11 * auVar23, 8);
            puVar1 = (uint*)( lVar36 + lVar2 );
            uVar44 = *puVar1;
            uVar42 = local_70;
            while (uVar44 != 0) {
               auVar12._8_8_ = 0;
               auVar12._0_8_ = (ulong)uVar44 * lVar6;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar38;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(( uVar32 + iVar35 ) - SUB164(auVar12 * auVar24, 8)) * lVar6;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar38;
               uVar31 = SUB164(auVar13 * auVar25, 8);
               if (uVar31 < uVar39) {
                  *(int*)( lVar3 + uVar43 * 4 ) = iVar35;
                  uVar44 = *puVar1;
                  *puVar1 = (uint)uVar33;
                  uVar39 = *(uint*)( lVar2 + lVar34 );
                  uVar33 = (ulong)uVar44;
                  *(uint*)( lVar2 + lVar34 ) = (uint)uVar43;
                  uVar43 = (ulong)uVar39;
                  uVar39 = uVar31;
               }

               uVar41 = (undefined4)uVar43;
               uVar31 = (uint)uVar33;
               uVar39 = uVar39 + 1;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = ( ulong )(iVar35 + 1) * lVar6;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar38;
               lVar2 = SUB168(auVar14 * auVar26, 8) * 4;
               iVar35 = SUB164(auVar14 * auVar26, 8);
               puVar1 = (uint*)( lVar36 + lVar2 );
               uVar42 = uVar43;
               uVar44 = *puVar1;
            }
;
            *puVar1 = uVar31;
            *(int*)( lVar3 + uVar42 * 4 ) = iVar35;
            local_70 = local_70 + 1;
            *(undefined4*)( lVar34 + lVar2 ) = uVar41;
         }
 while ( (uint)local_70 < *(uint*)( (long)in_RSI + 0x24 ) );
      }

      Memory::free_static(pvVar4, false);
      Memory::free_static(pvVar5, false);
      uVar32 = *(uint*)( in_RSI + 4 );
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      lVar34 = *in_RSI;
   }

   uVar42 = (ulong)uVar44;
   lVar3 = in_RSI[3];
   lVar36 = *in_RDX;
   *(long*)( lVar34 + uVar42 * 8 ) = lVar36;
   uVar33 = lVar36 * 0x3ffff - 1;
   uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
   uVar33 = ( uVar33 ^ uVar33 >> 0xb ) * 0x41;
   uVar33 = uVar33 >> 0x16 ^ uVar33;
   uVar43 = uVar33 & 0xffffffff;
   if ((int)uVar33 == 0) {
      uVar43 = 1;
   }

   uVar37 = 0;
   uVar31 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
   uVar40 = CONCAT44(0, uVar31);
   uVar39 = (uint)uVar43;
   lVar2 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
   auVar15._8_8_ = 0;
   auVar15._0_8_ = uVar43 * lVar2;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar40;
   lVar36 = SUB168(auVar15 * auVar27, 8) * 4;
   iVar35 = SUB164(auVar15 * auVar27, 8);
   lVar6 = in_RSI[2];
   puVar1 = (uint*)( lVar3 + lVar36 );
   uVar33 = in_RSI[1];
   uVar32 = *puVar1;
   uStack_98 = uVar33;
   uVar38 = uVar42;
   while (uVar32 != 0) {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)uVar32 * lVar2;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar40;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ( ulong )(( uVar31 + iVar35 ) - SUB164(auVar16 * auVar28, 8)) * lVar2;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      uVar32 = SUB164(auVar17 * auVar29, 8);
      if (uVar32 < uVar37) {
         *(int*)( lVar6 + uVar42 * 4 ) = iVar35;
         uVar44 = *puVar1;
         *puVar1 = (uint)uVar43;
         uVar39 = *(uint*)( lVar36 + uVar33 );
         uVar43 = (ulong)uVar44;
         *(uint*)( lVar36 + uVar33 ) = (uint)uVar38;
         uVar42 = (ulong)uVar39;
         uVar38 = uVar42;
         uVar37 = uVar32;
      }

      uVar44 = (uint)uVar38;
      uVar39 = (uint)uVar43;
      uVar37 = uVar37 + 1;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = ( ulong )(iVar35 + 1) * lVar2;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar40;
      uStack_98 = SUB168(auVar18 * auVar30, 8);
      lVar36 = uStack_98 * 4;
      iVar35 = SUB164(auVar18 * auVar30, 8);
      puVar1 = (uint*)( lVar3 + lVar36 );
      uVar32 = *puVar1;
   }
;
   *puVar1 = uVar39;
   *(int*)( lVar6 + uVar42 * 4 ) = iVar35;
   *(uint*)( uVar33 + lVar36 ) = uVar44;
   uVar37 = *(uint*)( (long)in_RSI + 0x24 );
   uVar44 = uVar37 + 1;
   *(uint*)( (long)in_RSI + 0x24 ) = uVar44;
   LAB_0011ae01:*(uint*)( param_1 + 0xc ) = uVar37;
   *(long*)param_1 = lVar34;
   *(uint*)( param_1 + 8 ) = uVar44;
   auVar45._8_8_ = uStack_98;
   auVar45._0_8_ = param_1;
   return auVar45;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<DAP::StackFrame, List<int, DefaultAllocator>, DAP::StackFrame,
   HashMapComparatorDefault<DAP::StackFrame>, DefaultTypedAllocator<HashMapElement<DAP::StackFrame,
   List<int, DefaultAllocator> > > >::insert(DAP::StackFrame const&, List<int, DefaultAllocator>
   const&, bool) */StackFrame *
HashMap<DAP::StackFrame,List<int,DefaultAllocator>,DAP::StackFrame,HashMapComparatorDefault<DAP::StackFrame>,DefaultTypedAllocator<HashMapElement<DAP::StackFrame,List<int,DefaultAllocator>>>>
::insert(StackFrame *param_1,List *param_2,bool param_3){
   uint *puVar1;
   undefined4 uVar2;
   void *pvVar3;
   void *__s;
   long *plVar4;
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
   uint uVar29;
   uint uVar30;
   uint uVar31;
   uint uVar32;
   ulong uVar33;
   undefined8 uVar34;
   void *__s_00;
   undefined4 *puVar35;
   long *plVar36;
   undefined1(*pauVar37)[16];
   long lVar38;
   undefined8 *puVar39;
   undefined8 *in_RCX;
   int iVar40;
   undefined7 in_register_00000011;
   int *piVar41;
   long lVar42;
   long lVar43;
   long lVar44;
   ulong uVar45;
   undefined4 *puVar46;
   undefined8 uVar47;
   char in_R8B;
   uint uVar48;
   uint uVar49;
   ulong uVar50;
   long *plVar51;
   int iVar52;
   long in_FS_OFFSET;
   void *local_c8;
   long local_70;
   Array local_68[8];
   long local_60;
   long local_58;
   long local_50;
   undefined1(*local_48)[16];
   long local_40;
   piVar41 = (int*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   local_c8 = *(void**)( param_2 + 8 );
   if (local_c8 == (void*)0x0) {
      uVar45 = (ulong)uVar31;
      uVar33 = uVar45 * 4;
      uVar50 = uVar45 * 8;
      uVar34 = Memory::alloc_static(uVar33, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar34;
      local_c8 = (void*)Memory::alloc_static(uVar50, false);
      *(void**)( param_2 + 8 ) = local_c8;
      if (uVar31 != 0) {
         pvVar3 = *(void**)( param_2 + 0x10 );
         if (( pvVar3 < (void*)( (long)local_c8 + uVar50 ) ) && ( local_c8 < (void*)( (long)pvVar3 + uVar33 ) )) {
            uVar33 = 0;
            do {
               *(undefined4*)( (long)pvVar3 + uVar33 * 4 ) = 0;
               *(undefined8*)( (long)local_c8 + uVar33 * 8 ) = 0;
               uVar33 = uVar33 + 1;
            }
 while ( uVar45 != uVar33 );
            goto LAB_0011af94;
         }

         memset(pvVar3, 0, uVar33);
         memset(local_c8, 0, uVar50);
         iVar40 = *piVar41;
         iVar52 = *(int*)( param_2 + 0x2c );
         goto LAB_0011afa1;
      }

      iVar40 = *piVar41;
      iVar52 = *(int*)( param_2 + 0x2c );
      if (local_c8 != (void*)0x0) goto LAB_0011afa1;
   }
 else {
      LAB_0011af94:iVar40 = *piVar41;
      iVar52 = *(int*)( param_2 + 0x2c );
      LAB_0011afa1:if (iVar52 != 0) {
         uVar33 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ));
         lVar38 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         uVar29 = ( iVar40 * 0x16a88000 | ( uint )(iVar40 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
         uVar29 = ( uVar29 << 0xd | uVar29 >> 0x13 ) * 5 + 0xe6546b64;
         uVar50 = (ulong)uVar29;
         if (uVar29 == 0) {
            uVar50 = 1;
         }

         uVar49 = 0;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = uVar50 * lVar38;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = uVar33;
         lVar42 = SUB168(auVar5 * auVar17, 8);
         uVar29 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar42 * 4 );
         uVar32 = SUB164(auVar5 * auVar17, 8);
         if (uVar29 != 0) {
            do {
               if (( uVar29 == (uint)uVar50 ) && ( *(int*)( *(long*)( (long)local_c8 + lVar42 * 8 ) + 0x10 ) == iVar40 )) {
                  lVar38 = *(long*)( (long)local_c8 + (ulong)uVar32 * 8 );
                  plVar36 = *(long**)( lVar38 + 0x40 );
                  if (plVar36 != (long*)0x0) goto LAB_0011b092;
                  goto LAB_0011b0f9;
               }

               uVar49 = uVar49 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(uVar32 + 1) * lVar38;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = uVar33;
               lVar42 = SUB168(auVar6 * auVar18, 8);
               uVar29 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar42 * 4 );
               uVar32 = SUB164(auVar6 * auVar18, 8);
            }
 while ( ( uVar29 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar29 * lVar38,auVar19._8_8_ = 0,auVar19._0_8_ = uVar33,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ) + uVar32 ) - SUB164(auVar7 * auVar19, 8)) * lVar38,auVar20._8_8_ = 0,auVar20._0_8_ = uVar33,uVar49 <= SUB164(auVar8 * auVar20, 8) );
         }

      }

   }

   if ((float)uVar31 * __LC53 < (float)( iVar52 + 1 )) {
      uVar31 = *(uint*)( param_2 + 0x28 );
      if (uVar31 == 0x1c) {
         plVar36 = (long*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0011b886;
      }

      uVar33 = ( ulong )(uVar31 + 1);
      uVar29 = *(uint*)( hash_table_size_primes + (ulong)uVar31 * 4 );
      *(undefined4*)( param_2 + 0x2c ) = 0;
      if (uVar31 + 1 < 2) {
         uVar33 = 2;
      }

      uVar31 = *(uint*)( hash_table_size_primes + uVar33 * 4 );
      *(int*)( param_2 + 0x28 ) = (int)uVar33;
      pvVar3 = *(void**)( param_2 + 0x10 );
      uVar45 = (ulong)uVar31;
      uVar33 = uVar45 * 4;
      uVar34 = Memory::alloc_static(uVar33, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar34;
      uVar50 = uVar45 * 8;
      __s_00 = (void*)Memory::alloc_static(uVar50, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar31 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar50 ) ) && ( __s_00 < (void*)( (long)__s + uVar33 ) )) {
            uVar33 = 0;
            do {
               *(undefined4*)( (long)__s + uVar33 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar33 * 8 ) = 0;
               uVar33 = uVar33 + 1;
            }
 while ( uVar45 != uVar33 );
         }
 else {
            memset(__s, 0, uVar33);
            memset(__s_00, 0, uVar50);
         }

      }

      if (uVar29 != 0) {
         uVar33 = 0;
         do {
            uVar31 = *(uint*)( (long)pvVar3 + uVar33 * 4 );
            if (uVar31 != 0) {
               uVar48 = 0;
               lVar38 = *(long*)( param_2 + 0x10 );
               uVar32 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
               uVar50 = CONCAT44(0, uVar32);
               lVar42 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
               auVar9._8_8_ = 0;
               auVar9._0_8_ = (ulong)uVar31 * lVar42;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar50;
               lVar43 = SUB168(auVar9 * auVar21, 8);
               puVar1 = (uint*)( lVar38 + lVar43 * 4 );
               iVar40 = SUB164(auVar9 * auVar21, 8);
               uVar49 = *puVar1;
               uVar34 = *(undefined8*)( (long)local_c8 + uVar33 * 8 );
               while (uVar49 != 0) {
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = (ulong)uVar49 * lVar42;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar50;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( ulong )(( uVar32 + iVar40 ) - SUB164(auVar10 * auVar22, 8)) * lVar42;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar50;
                  uVar30 = SUB164(auVar11 * auVar23, 8);
                  uVar47 = uVar34;
                  if (uVar30 < uVar48) {
                     *puVar1 = uVar31;
                     puVar39 = (undefined8*)( (long)__s_00 + lVar43 * 8 );
                     uVar47 = *puVar39;
                     *puVar39 = uVar34;
                     uVar31 = uVar49;
                     uVar48 = uVar30;
                  }

                  uVar48 = uVar48 + 1;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(iVar40 + 1) * lVar42;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar50;
                  lVar43 = SUB168(auVar12 * auVar24, 8);
                  puVar1 = (uint*)( lVar38 + lVar43 * 4 );
                  iVar40 = SUB164(auVar12 * auVar24, 8);
                  uVar34 = uVar47;
                  uVar49 = *puVar1;
               }
;
               *(undefined8*)( (long)__s_00 + lVar43 * 8 ) = uVar34;
               *puVar1 = uVar31;
               *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
            }

            uVar33 = uVar33 + 1;
         }
 while ( uVar33 != uVar29 );
         Memory::free_static(local_c8, false);
         Memory::free_static(pvVar3, false);
      }

   }

   iVar40 = *piVar41;
   local_70 = 0;
   if (*(long*)( piVar41 + 2 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( piVar41 + 2 ));
   }

   Array::Array(local_68, (Array*)( piVar41 + 4 ));
   local_60 = 0;
   if (*(long*)( piVar41 + 6 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( piVar41 + 6 ));
   }

   local_58 = 0;
   if (*(long*)( piVar41 + 8 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( piVar41 + 8 ));
   }

   local_48 = (undefined1(*) [16])0x0;
   local_50 = *(long*)( piVar41 + 10 );
   if (( (undefined8*)*in_RCX != (undefined8*)0x0 ) && ( puVar46 = *(undefined4**)*in_RCX ),puVar46 != (undefined4*)0x0) {
      local_48 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)local_48[1] = 0;
      *local_48 = (undefined1[16])0x0;
      do {
         while (true) {
            puVar35 = (undefined4*)operator_new(0x20, DefaultAllocator::alloc);
            uVar2 = *puVar46;
            *(undefined8*)( puVar35 + 2 ) = 0;
            *puVar35 = uVar2;
            lVar38 = *(long*)( *local_48 + 8 );
            *(undefined1(**) [16])( puVar35 + 6 ) = local_48;
            *(long*)( puVar35 + 4 ) = lVar38;
            if (lVar38 != 0) {
               *(undefined4**)( lVar38 + 8 ) = puVar35;
            }

            lVar38 = *(long*)*local_48;
            *(undefined4**)( *local_48 + 8 ) = puVar35;
            if (lVar38 != 0) break;
            puVar46 = *(undefined4**)( puVar46 + 2 );
            *(int*)local_48[1] = *(int*)local_48[1] + 1;
            *(undefined4**)*local_48 = puVar35;
            if (puVar46 == (undefined4*)0x0) goto LAB_0011b53d;
         }
;
         puVar46 = *(undefined4**)( puVar46 + 2 );
         *(int*)local_48[1] = *(int*)local_48[1] + 1;
      }
 while ( puVar46 != (undefined4*)0x0 );
   }

   LAB_0011b53d:plVar36 = (long*)operator_new(0x48, "");
   *plVar36 = 0;
   plVar36[1] = 0;
   plVar36[3] = 0;
   *(int*)( plVar36 + 2 ) = iVar40;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( plVar36 + 3 ), (CowData*)&local_70);
   }

   Array::Array((Array*)( plVar36 + 4 ), local_68);
   plVar36[5] = 0;
   if (local_60 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( plVar36 + 5 ), (CowData*)&local_60);
   }

   plVar36[6] = 0;
   if (local_58 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( plVar36 + 6 ), (CowData*)&local_58);
   }

   plVar36[8] = 0;
   plVar36[7] = local_50;
   if (local_48 != (undefined1(*) [16])0x0) {
      puVar46 = *(undefined4**)*local_48;
      if (puVar46 != (undefined4*)0x0) {
         pauVar37 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         plVar36[8] = (long)pauVar37;
         *(undefined4*)pauVar37[1] = 0;
         *pauVar37 = (undefined1[16])0x0;
         do {
            while (true) {
               puVar35 = (undefined4*)operator_new(0x20, DefaultAllocator::alloc);
               uVar2 = *puVar46;
               *(undefined8*)( puVar35 + 2 ) = 0;
               *puVar35 = uVar2;
               plVar4 = (long*)plVar36[8];
               lVar38 = plVar4[1];
               *(long**)( puVar35 + 6 ) = plVar4;
               *(long*)( puVar35 + 4 ) = lVar38;
               if (lVar38 != 0) {
                  *(undefined4**)( lVar38 + 8 ) = puVar35;
               }

               plVar4[1] = (long)puVar35;
               if (*plVar4 != 0) break;
               puVar46 = *(undefined4**)( puVar46 + 2 );
               *(int*)( plVar4 + 2 ) = (int)plVar4[2] + 1;
               *plVar4 = (long)puVar35;
               if (puVar46 == (undefined4*)0x0) goto LAB_0011b692;
            }
;
            puVar46 = *(undefined4**)( puVar46 + 2 );
            *(int*)( plVar4 + 2 ) = (int)plVar4[2] + 1;
         }
 while ( puVar46 != (undefined4*)0x0 );
      }

      LAB_0011b692:if (local_48 != (undefined1(*) [16])0x0) {
         do {
            pauVar37 = local_48;
            pvVar3 = *(void**)*local_48;
            if (pvVar3 == (void*)0x0) {
               if (*(int*)local_48[1] != 0) {
                  _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                  goto LAB_0011b703;
               }

               break;
            }

            if (*(undefined1(**) [16])( (long)pvVar3 + 0x18 ) == local_48) {
               lVar38 = *(long*)( (long)pvVar3 + 8 );
               lVar42 = *(long*)( (long)pvVar3 + 0x10 );
               *(long*)*local_48 = lVar38;
               if (pvVar3 == *(void**)( *local_48 + 8 )) {
                  *(long*)( *local_48 + 8 ) = lVar42;
               }

               if (lVar42 != 0) {
                  *(long*)( lVar42 + 8 ) = lVar38;
                  lVar38 = *(long*)( (long)pvVar3 + 8 );
               }

               if (lVar38 != 0) {
                  *(long*)( lVar38 + 0x10 ) = lVar42;
               }

               Memory::free_static(pvVar3, false);
               *(int*)pauVar37[1] = *(int*)pauVar37[1] + -1;
            }
 else {
               _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
            }

         }
 while ( *(int*)local_48[1] != 0 );
         Memory::free_static(local_48, false);
      }

   }

   LAB_0011b703:lVar38 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar4 = (long*)( local_58 + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar38 + -0x10 ), false);
      }

   }

   lVar38 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar4 = (long*)( local_60 + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar38 + -0x10 ), false);
      }

   }

   Array::~Array(local_68);
   lVar38 = local_70;
   if (local_70 == 0) {
      LAB_0011b753:puVar39 = *(undefined8**)( param_2 + 0x20 );
      if (puVar39 != (undefined8*)0x0) goto LAB_0011b765;
      LAB_0011b94b:*(long**)( param_2 + 0x18 ) = plVar36;
      *(long**)( param_2 + 0x20 ) = plVar36;
   }
 else {
      LOCK();
      plVar4 = (long*)( local_70 + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 != 0) goto LAB_0011b753;
      local_70 = 0;
      Memory::free_static((void*)( lVar38 + -0x10 ), false);
      puVar39 = *(undefined8**)( param_2 + 0x20 );
      if (puVar39 == (undefined8*)0x0) goto LAB_0011b94b;
      LAB_0011b765:if (in_R8B == '\0') {
         *puVar39 = plVar36;
         plVar36[1] = (long)puVar39;
         *(long**)( param_2 + 0x20 ) = plVar36;
      }
 else {
         lVar38 = *(long*)( param_2 + 0x18 );
         *(long**)( lVar38 + 8 ) = plVar36;
         *plVar36 = lVar38;
         *(long**)( param_2 + 0x18 ) = plVar36;
      }

   }

   lVar38 = *(long*)( param_2 + 0x10 );
   uVar31 = ( *piVar41 * 0x16a88000 | ( uint )(*piVar41 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
   uVar31 = ( uVar31 << 0xd | uVar31 >> 0x13 ) * 5 + 0xe6546b64;
   uVar33 = (ulong)uVar31;
   if (uVar31 == 0) {
      uVar33 = 1;
   }

   uVar49 = 0;
   uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar50 = CONCAT44(0, uVar31);
   uVar32 = (uint)uVar33;
   lVar42 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   auVar13._8_8_ = 0;
   auVar13._0_8_ = uVar33 * lVar42;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar50;
   lVar44 = SUB168(auVar13 * auVar25, 8);
   lVar43 = *(long*)( param_2 + 8 );
   puVar1 = (uint*)( lVar38 + lVar44 * 4 );
   iVar40 = SUB164(auVar13 * auVar25, 8);
   uVar29 = *puVar1;
   plVar4 = plVar36;
   while (uVar29 != 0) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)uVar29 * lVar42;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar50;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(( iVar40 + uVar31 ) - SUB164(auVar14 * auVar26, 8)) * lVar42;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar50;
      uVar32 = SUB164(auVar15 * auVar27, 8);
      plVar51 = plVar4;
      if (uVar32 < uVar49) {
         *puVar1 = (uint)uVar33;
         uVar33 = (ulong)uVar29;
         puVar39 = (undefined8*)( lVar43 + lVar44 * 8 );
         plVar51 = (long*)*puVar39;
         *puVar39 = plVar4;
         uVar49 = uVar32;
      }

      uVar32 = (uint)uVar33;
      uVar49 = uVar49 + 1;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = ( ulong )(iVar40 + 1) * lVar42;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar50;
      lVar44 = SUB168(auVar16 * auVar28, 8);
      puVar1 = (uint*)( lVar38 + lVar44 * 4 );
      iVar40 = SUB164(auVar16 * auVar28, 8);
      plVar4 = plVar51;
      uVar29 = *puVar1;
   }
;
   *(long**)( lVar43 + lVar44 * 8 ) = plVar4;
   *puVar1 = uVar32;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_0011b886:*(long**)param_1 = plVar36;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   while (true) {
      if (*(long**)( (long)pvVar3 + 0x18 ) == plVar36) {
         lVar42 = *(long*)( (long)pvVar3 + 8 );
         lVar43 = *(long*)( (long)pvVar3 + 0x10 );
         *plVar36 = lVar42;
         if (pvVar3 == (void*)plVar36[1]) {
            plVar36[1] = lVar43;
         }

         if (lVar43 != 0) {
            *(long*)( lVar43 + 8 ) = lVar42;
            lVar42 = *(long*)( (long)pvVar3 + 8 );
         }

         if (lVar42 != 0) {
            *(long*)( lVar42 + 0x10 ) = lVar43;
         }

         Memory::free_static(pvVar3, false);
         *(int*)( plVar36 + 2 ) = (int)plVar36[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar36 = *(long**)( lVar38 + 0x40 );
      if ((int)plVar36[2] == 0) break;
      LAB_0011b092:pvVar3 = (void*)*plVar36;
      if (pvVar3 == (void*)0x0) goto LAB_0011b0fc;
   }
;
   Memory::free_static(plVar36, false);
   *(undefined8*)( lVar38 + 0x40 ) = 0;
   LAB_0011b0f9:plVar36 = (long*)0x0;
   LAB_0011b0fc:if (( (undefined8*)*in_RCX != (undefined8*)0x0 ) && ( puVar46 = *(undefined4**)*in_RCX ),puVar46 != (undefined4*)0x0) {
      if (plVar36 == (long*)0x0) {
         pauVar37 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])( lVar38 + 0x40 ) = pauVar37;
         *(undefined4*)pauVar37[1] = 0;
         *pauVar37 = (undefined1[16])0x0;
      }

      do {
         while (true) {
            puVar35 = (undefined4*)operator_new(0x20, DefaultAllocator::alloc);
            uVar2 = *puVar46;
            *(undefined8*)( puVar35 + 2 ) = 0;
            *puVar35 = uVar2;
            plVar36 = *(long**)( lVar38 + 0x40 );
            lVar42 = plVar36[1];
            *(long**)( puVar35 + 6 ) = plVar36;
            *(long*)( puVar35 + 4 ) = lVar42;
            if (lVar42 != 0) {
               *(undefined4**)( lVar42 + 8 ) = puVar35;
            }

            plVar36[1] = (long)puVar35;
            if (*plVar36 != 0) break;
            puVar46 = *(undefined4**)( puVar46 + 2 );
            *(int*)( plVar36 + 2 ) = (int)plVar36[2] + 1;
            *plVar36 = (long)puVar35;
            if (puVar46 == (undefined4*)0x0) goto LAB_0011b1ab;
         }
;
         puVar46 = *(undefined4**)( puVar46 + 2 );
         *(int*)( plVar36 + 2 ) = (int)plVar36[2] + 1;
      }
 while ( puVar46 != (undefined4*)0x0 );
   }

   LAB_0011b1ab:plVar36 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar32 * 8 );
   goto LAB_0011b886;
}
/* Callable create_custom_callable_function_pointer<DebugAdapterProtocol>(DebugAdapterProtocol*,
   char const*, void (DebugAdapterProtocol::*)()) */DebugAdapterProtocol *create_custom_callable_function_pointer<DebugAdapterProtocol>(DebugAdapterProtocol *param_1, char *param_2, _func_void *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC29;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0011eaf0;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void**)( this + 0x20 ) = param_3 + 1;
   Callable::Callable((Callable*)param_1, this);
   return param_1;
}
/* Callable create_custom_callable_function_pointer<DebugAdapterProtocol, Array
   const&>(DebugAdapterProtocol*, char const*, void (DebugAdapterProtocol::*)(Array const&)) */DebugAdapterProtocol *create_custom_callable_function_pointer<DebugAdapterProtocol,Array_const&>(DebugAdapterProtocol *param_1, char *param_2, _func_void_Array_ptr *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC29;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0011ed30;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void_Array_ptr**)( this + 0x20 ) = param_3 + 1;
   Callable::Callable((Callable*)param_1, this);
   return param_1;
}
/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
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
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<DebugAdapterProtocol,void>::call(CallableCustomMethodPointer<DebugAdapterProtocol,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char *pcVar4;
   uint uVar5;
   ulong *puVar6;
   code *UNRECOVERED_JUMPTABLE;
   ulong uVar7;
   long in_FS_OFFSET;
   bool bVar8;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar5 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar7 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar7 << 8 );
         LOCK();
         bVar8 = (char)ObjectDB::spin_lock == '\0';
         if (bVar8) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar8) break;
         local_48 = (char*)( uVar7 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar6 = (ulong*)( (ulong)uVar5 * 0x10 + ObjectDB::object_slots );
      uVar7 = *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff;
      if (uVar7 != ( *puVar6 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0011bf2f;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] == 0) goto LAB_0011bf2f;
      lVar2 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar3 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar2 + lVar3 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0011bf08. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar2 + lVar3 ), uVar7, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_0011c041;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0011bf2f:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC92, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      pcVar4 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }

      }

      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
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

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0011c041:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, Array const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<DebugAdapterProtocol,void,Array_const&>::call(CallableCustomMethodPointer<DebugAdapterProtocol,void,Array_const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long *plVar1;
   long lVar2;
   long lVar3;
   ulong uVar4;
   undefined8 uVar5;
   char cVar6;
   uint uVar7;
   ulong *puVar8;
   code *pcVar9;
   long in_FS_OFFSET;
   bool bVar10;
   CowData<char32_t> local_60[8];
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar7 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar7 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar4 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar4 << 8 );
         LOCK();
         bVar10 = (char)ObjectDB::spin_lock == '\0';
         if (bVar10) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar10) break;
         local_48 = (char*)( uVar4 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar8 = (ulong*)( (ulong)uVar7 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar8 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar8[1] != 0) {
            lVar2 = *(long*)( this + 0x28 );
            pcVar9 = *(code**)( this + 0x38 );
            lVar3 = *(long*)( this + 0x40 );
            if ((uint)param_2 < 2) {
               if (param_2 == 0) {
                  *(undefined4*)param_4 = 4;
                  *(undefined4*)( param_4 + 8 ) = 1;
               }
 else {
                  *(undefined4*)param_4 = 0;
                  if (( (ulong)pcVar9 & 1 ) != 0) {
                     pcVar9 = *(code**)( pcVar9 + *(long*)( lVar2 + lVar3 ) + -1 );
                  }

                  cVar6 = Variant::can_convert_strict(*(undefined4*)*param_1, 0x1c);
                  uVar5 = _LC93;
                  if (cVar6 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar5;
                  }

                  Variant::operator_cast_to_Array((Variant*)&local_48);
                  ( *pcVar9 )((long*)( lVar2 + lVar3 ), (Variant*)&local_48);
                  Array::~Array((Array*)&local_48);
               }

            }
 else {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 1;
            }

            goto LAB_0011c11e;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   local_50 = 0;
   local_48 = "\', can\'t call method.";
   local_40 = 0x15;
   String::parse_latin1((StrRange*)&local_50);
   uitos((ulong)local_60);
   operator+((char *)&
   local_58,(String*)"Invalid Object id \'";
   String::operator +((String*)&local_48, (String*)&local_58);
   _err_print_error(&_LC92, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (Variant*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   lVar2 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_0011c11e:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, String const&, Array
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,Array_const&>::call(CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,Array_const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long *plVar1;
   long lVar2;
   long lVar3;
   ulong uVar4;
   undefined8 uVar5;
   char *pcVar6;
   char cVar7;
   uint uVar8;
   ulong *puVar9;
   code *pcVar10;
   long in_FS_OFFSET;
   bool bVar11;
   CowData<char32_t> local_70[8];
   CowData<char32_t> local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar8 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar8 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar4 = (ulong)local_58 >> 8;
         local_58 = (char*)( uVar4 << 8 );
         LOCK();
         bVar11 = (char)ObjectDB::spin_lock == '\0';
         if (bVar11) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar11) break;
         local_58 = (char*)( uVar4 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar9 = (ulong*)( (ulong)uVar8 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar9 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar9[1] != 0) {
            lVar2 = *(long*)( this + 0x28 );
            pcVar10 = *(code**)( this + 0x38 );
            lVar3 = *(long*)( this + 0x40 );
            if ((uint)param_2 < 3) {
               if (param_2 == 2) {
                  *(undefined4*)param_4 = 0;
                  if (( (ulong)pcVar10 & 1 ) != 0) {
                     pcVar10 = *(code**)( pcVar10 + *(long*)( lVar2 + lVar3 ) + -1 );
                  }

                  cVar7 = Variant::can_convert_strict(*(undefined4*)param_1[1], 0x1c);
                  uVar5 = _LC94;
                  if (cVar7 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar5;
                  }

                  Variant::operator_cast_to_Array((Variant*)&local_60);
                  cVar7 = Variant::can_convert_strict(*(undefined4*)*param_1, 4);
                  uVar5 = _LC95;
                  if (cVar7 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar5;
                  }

                  Variant::operator_cast_to_String((Variant*)&local_58);
                  ( *pcVar10 )((long*)( lVar2 + lVar3 ), (Variant*)&local_58, (Variant*)&local_60);
                  pcVar6 = local_58;
                  if (local_58 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_58 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_58 = (char*)0x0;
                        Memory::free_static(pcVar6 + -0x10, false);
                     }

                  }

                  Array::~Array((Array*)&local_60);
               }
 else {
                  *(undefined4*)param_4 = 4;
                  *(undefined4*)( param_4 + 8 ) = 2;
               }

            }
 else {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 2;
            }

            goto LAB_0011c3b5;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   local_60 = 0;
   local_58 = "\', can\'t call method.";
   local_50 = 0x15;
   String::parse_latin1((StrRange*)&local_60);
   uitos((ulong)local_70);
   operator+((char *)
   local_68,(String*)"Invalid Object id \'";
   String::operator +((String*)&local_58, (String*)local_68);
   _err_print_error(&_LC92, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (Variant*)&local_58, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref(local_68);
   CowData<char32_t>::_unref(local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_0011c3b5:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, int const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<DebugAdapterProtocol,void,int_const&>::call(CallableCustomMethodPointer<DebugAdapterProtocol,void,int_const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long *plVar1;
   long lVar2;
   long lVar3;
   ulong uVar4;
   undefined8 uVar5;
   char *pcVar6;
   char cVar7;
   int iVar8;
   uint uVar9;
   ulong *puVar10;
   code *pcVar11;
   long in_FS_OFFSET;
   bool bVar12;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar9 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar9 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar4 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar4 << 8 );
         LOCK();
         bVar12 = (char)ObjectDB::spin_lock == '\0';
         if (bVar12) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar12) break;
         local_48 = (char*)( uVar4 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar10 = (ulong*)( (ulong)uVar9 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar10 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar10[1] != 0) {
            lVar2 = *(long*)( this + 0x28 );
            pcVar11 = *(code**)( this + 0x38 );
            lVar3 = *(long*)( this + 0x40 );
            if ((uint)param_2 < 2) {
               if (param_2 == 0) {
                  *(undefined4*)param_4 = 4;
                  *(undefined4*)( param_4 + 8 ) = 1;
               }
 else {
                  *(undefined4*)param_4 = 0;
                  if (( (ulong)pcVar11 & 1 ) != 0) {
                     pcVar11 = *(code**)( pcVar11 + *(long*)( lVar2 + lVar3 ) + -1 );
                  }

                  cVar7 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
                  uVar5 = _LC96;
                  if (cVar7 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar5;
                  }

                  iVar8 = Variant::operator_cast_to_int(*param_1);
                  local_48 = (char*)CONCAT44(local_48._4_4_, iVar8);
                  ( *pcVar11 )((long*)( lVar2 + lVar3 ), (String*)&local_48);
               }

            }
 else {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 1;
            }

            goto LAB_0011c69e;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   local_50 = 0;
   local_48 = "\', can\'t call method.";
   local_40 = 0x15;
   String::parse_latin1((StrRange*)&local_50);
   uitos((ulong)local_60);
   operator+((char *)
   local_58,(String*)"Invalid Object id \'";
   String::operator +((String*)&local_48, (String*)local_58);
   _err_print_error(&_LC92, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
   pcVar6 = local_48;
   if (local_48 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = (char*)0x0;
         Memory::free_static(pcVar6 + -0x10, false);
      }

   }

   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_0011c69e:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, String const&, int>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int>::call(CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long *plVar1;
   long lVar2;
   long lVar3;
   ulong uVar4;
   undefined8 uVar5;
   char *pcVar6;
   char cVar7;
   int iVar8;
   uint uVar9;
   ulong *puVar10;
   code *pcVar11;
   long in_FS_OFFSET;
   bool bVar12;
   CowData<char32_t> local_70[8];
   CowData<char32_t> local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar9 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar9 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar4 = (ulong)local_58 >> 8;
         local_58 = (char*)( uVar4 << 8 );
         LOCK();
         bVar12 = (char)ObjectDB::spin_lock == '\0';
         if (bVar12) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar12) break;
         local_58 = (char*)( uVar4 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar10 = (ulong*)( (ulong)uVar9 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar10 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar10[1] != 0) {
            lVar2 = *(long*)( this + 0x28 );
            pcVar11 = *(code**)( this + 0x38 );
            lVar3 = *(long*)( this + 0x40 );
            if ((uint)param_2 < 3) {
               if (param_2 == 2) {
                  *(undefined4*)param_4 = 0;
                  if (( (ulong)pcVar11 & 1 ) != 0) {
                     pcVar11 = *(code**)( pcVar11 + *(long*)( lVar2 + lVar3 ) + -1 );
                  }

                  cVar7 = Variant::can_convert_strict(*(undefined4*)param_1[1], 2);
                  uVar5 = _LC97;
                  if (cVar7 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar5;
                  }

                  iVar8 = Variant::operator_cast_to_int(param_1[1]);
                  cVar7 = Variant::can_convert_strict(*(undefined4*)*param_1, 4);
                  uVar5 = _LC95;
                  if (cVar7 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar5;
                  }

                  Variant::operator_cast_to_String((Variant*)&local_58);
                  ( *pcVar11 )((long*)( lVar2 + lVar3 ), (Variant*)&local_58, iVar8);
                  pcVar6 = local_58;
                  if (local_58 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_58 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_58 = (char*)0x0;
                        Memory::free_static(pcVar6 + -0x10, false);
                     }

                  }

               }
 else {
                  *(undefined4*)param_4 = 4;
                  *(undefined4*)( param_4 + 8 ) = 2;
               }

            }
 else {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 2;
            }

            goto LAB_0011c925;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   local_60 = 0;
   local_58 = "\', can\'t call method.";
   local_50 = 0x15;
   String::parse_latin1((StrRange*)&local_60);
   uitos((ulong)local_70);
   operator+((char *)
   local_68,(String*)"Invalid Object id \'";
   String::operator +((String*)&local_58, (String*)local_68);
   _err_print_error(&_LC92, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (Variant*)&local_58, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref(local_68);
   CowData<char32_t>::_unref(local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_0011c925:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, String const&, int const&, bool
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int_const&,bool_const&>::call(CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int_const&,bool_const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long *plVar1;
   long lVar2;
   long lVar3;
   ulong uVar4;
   undefined8 uVar5;
   char *pcVar6;
   char cVar7;
   uint uVar8;
   ulong *puVar9;
   code *pcVar10;
   long in_FS_OFFSET;
   bool bVar11;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   int local_50[2];
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar8 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar8 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar4 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar4 << 8 );
         LOCK();
         bVar11 = (char)ObjectDB::spin_lock == '\0';
         if (bVar11) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar11) break;
         local_48 = (char*)( uVar4 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar9 = (ulong*)( (ulong)uVar8 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar9 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar9[1] != 0) {
            lVar2 = *(long*)( this + 0x28 );
            pcVar10 = *(code**)( this + 0x38 );
            lVar3 = *(long*)( this + 0x40 );
            if ((uint)param_2 < 4) {
               if (param_2 == 3) {
                  *(undefined4*)param_4 = 0;
                  if (( (ulong)pcVar10 & 1 ) != 0) {
                     pcVar10 = *(code**)( pcVar10 + *(long*)( lVar2 + lVar3 ) + -1 );
                  }

                  cVar7 = Variant::can_convert_strict(*(undefined4*)param_1[2], 1);
                  uVar5 = _LC98;
                  if (cVar7 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar5;
                  }

                  local_58[0] = (CowData<char32_t>)Variant::operator_cast_to_bool(param_1[2]);
                  cVar7 = Variant::can_convert_strict(*(undefined4*)param_1[1], 2);
                  uVar5 = _LC97;
                  if (cVar7 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar5;
                  }

                  local_50[0] = Variant::operator_cast_to_int(param_1[1]);
                  cVar7 = Variant::can_convert_strict(*(undefined4*)*param_1, 4);
                  uVar5 = _LC95;
                  if (cVar7 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar5;
                  }

                  Variant::operator_cast_to_String((Variant*)&local_48);
                  ( *pcVar10 )((long*)( lVar2 + lVar3 ), (Variant*)&local_48, local_50, local_58);
                  pcVar6 = local_48;
                  if (local_48 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_48 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_48 = (char*)0x0;
                        Memory::free_static(pcVar6 + -0x10, false);
                     }

                  }

               }
 else {
                  *(undefined4*)param_4 = 4;
                  *(undefined4*)( param_4 + 8 ) = 3;
               }

            }
 else {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 3;
            }

            goto LAB_0011cbf5;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   local_50[0] = 0;
   local_50[1] = 0;
   local_48 = "\', can\'t call method.";
   local_40 = 0x15;
   String::parse_latin1((StrRange*)local_50);
   uitos((ulong)local_60);
   operator+((char *)
   local_58,(String*)"Invalid Object id \'";
   String::operator +((String*)&local_48, (String*)local_58);
   _err_print_error(&_LC92, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (Variant*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
   LAB_0011cbf5:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CallableCustomMethodPointer<DebugAdapterProtocol, void, bool const&, bool const&, String const&,
   bool const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<DebugAdapterProtocol,void,bool_const&,bool_const&,String_const&,bool_const&>::call(CallableCustomMethodPointer<DebugAdapterProtocol,void,bool_const&,bool_const&,String_const&,bool_const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long *plVar1;
   long lVar2;
   long lVar3;
   ulong uVar4;
   undefined8 uVar5;
   char *pcVar6;
   char cVar7;
   uint uVar8;
   ulong *puVar9;
   code *pcVar10;
   long in_FS_OFFSET;
   bool bVar11;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar8 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar8 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar4 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar4 << 8 );
         LOCK();
         bVar11 = (char)ObjectDB::spin_lock == '\0';
         if (bVar11) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar11) break;
         local_48 = (char*)( uVar4 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar9 = (ulong*)( (ulong)uVar8 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar9 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar9[1] != 0) {
            lVar2 = *(long*)( this + 0x28 );
            pcVar10 = *(code**)( this + 0x38 );
            lVar3 = *(long*)( this + 0x40 );
            if ((uint)param_2 < 5) {
               if (param_2 == 4) {
                  *(undefined4*)param_4 = 0;
                  if (( (ulong)pcVar10 & 1 ) != 0) {
                     pcVar10 = *(code**)( pcVar10 + *(long*)( lVar2 + lVar3 ) + -1 );
                  }

                  cVar7 = Variant::can_convert_strict(*(undefined4*)param_1[3], 1);
                  uVar5 = _LC99;
                  if (cVar7 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar5;
                  }

                  local_60[0] = (CowData<char32_t>)Variant::operator_cast_to_bool(param_1[3]);
                  cVar7 = Variant::can_convert_strict(*(undefined4*)param_1[2], 4);
                  uVar5 = _LC100;
                  if (cVar7 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar5;
                  }

                  Variant::operator_cast_to_String((Variant*)&local_48);
                  cVar7 = Variant::can_convert_strict(*(undefined4*)param_1[1], 1);
                  uVar5 = _LC101;
                  if (cVar7 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar5;
                  }

                  local_58[0] = (CowData<char32_t>)Variant::operator_cast_to_bool(param_1[1]);
                  cVar7 = Variant::can_convert_strict(*(undefined4*)*param_1, 1);
                  uVar5 = _LC32;
                  if (cVar7 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar5;
                  }

                  bVar11 = Variant::operator_cast_to_bool(*param_1);
                  local_50 = CONCAT71(local_50._1_7_, bVar11);
                  ( *pcVar10 )((long*)( lVar2 + lVar3 ), &local_50, local_58, (Variant*)&local_48, local_60);
                  pcVar6 = local_48;
                  if (local_48 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_48 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_48 = (char*)0x0;
                        Memory::free_static(pcVar6 + -0x10, false);
                     }

                  }

               }
 else {
                  *(undefined4*)param_4 = 4;
                  *(undefined4*)( param_4 + 8 ) = 4;
               }

            }
 else {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 4;
            }

            goto LAB_0011cf05;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   local_50 = 0;
   local_48 = "\', can\'t call method.";
   local_40 = 0x15;
   String::parse_latin1((StrRange*)&local_50);
   uitos((ulong)local_60);
   operator+((char *)
   local_58,(String*)"Invalid Object id \'";
   String::operator +((String*)&local_48, (String*)local_58);
   _err_print_error(&_LC92, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (Variant*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_0011cf05:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* HashMap<ObjectID, int, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, int> > >::_resize_and_rehash(unsigned int) */void HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>::_resize_and_rehash(HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>> *this, uint param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   void *pvVar6;
   void *pvVar7;
   void *__s;
   long lVar8;
   long lVar9;
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined8 uVar18;
   void *__s_00;
   int iVar19;
   long lVar20;
   uint uVar21;
   ulong uVar22;
   undefined8 uVar23;
   uint uVar24;
   ulong uVar25;
   ulong uVar26;
   uint local_78;
   *(undefined4*)( this + 0x2c ) = 0;
   uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   if (param_1 < 2) {
      param_1 = 2;
   }

   *(uint*)( this + 0x28 ) = param_1;
   uVar21 = *(uint*)( hash_table_size_primes + (ulong)param_1 * 4 );
   uVar22 = (ulong)uVar21;
   pvVar6 = *(void**)( this + 8 );
   pvVar7 = *(void**)( this + 0x10 );
   uVar26 = uVar22 * 4;
   uVar25 = uVar22 * 8;
   uVar18 = Memory::alloc_static(uVar26, false);
   *(undefined8*)( this + 0x10 ) = uVar18;
   __s_00 = (void*)Memory::alloc_static(uVar25, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar21 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar25 ) ) && ( __s_00 < (void*)( (long)__s + uVar26 ) )) {
         uVar26 = 0;
         do {
            *(undefined4*)( (long)__s + uVar26 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar26 * 8 ) = 0;
            uVar26 = uVar26 + 1;
         }
 while ( uVar22 != uVar26 );
      }
 else {
         memset(__s, 0, uVar26);
         memset(__s_00, 0, uVar25);
      }

   }

   if (uVar3 != 0) {
      uVar26 = 0;
      do {
         uVar21 = *(uint*)( (long)pvVar7 + uVar26 * 4 );
         if (uVar21 != 0) {
            uVar24 = 0;
            lVar8 = *(long*)( this + 0x10 );
            uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar25 = CONCAT44(0, uVar4);
            lVar9 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar21 * lVar9;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar25;
            lVar20 = SUB168(auVar10 * auVar14, 8);
            puVar1 = (uint*)( lVar8 + lVar20 * 4 );
            iVar19 = SUB164(auVar10 * auVar14, 8);
            uVar5 = *puVar1;
            uVar18 = *(undefined8*)( (long)pvVar6 + uVar26 * 8 );
            while (uVar5 != 0) {
               auVar11._8_8_ = 0;
               auVar11._0_8_ = (ulong)uVar5 * lVar9;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar25;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(( uVar4 + iVar19 ) - SUB164(auVar11 * auVar15, 8)) * lVar9;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar25;
               local_78 = SUB164(auVar12 * auVar16, 8);
               uVar23 = uVar18;
               if (local_78 < uVar24) {
                  *puVar1 = uVar21;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar20 * 8 );
                  uVar23 = *puVar2;
                  *puVar2 = uVar18;
                  uVar21 = uVar5;
                  uVar24 = local_78;
               }

               uVar24 = uVar24 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(iVar19 + 1) * lVar9;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar25;
               lVar20 = SUB168(auVar13 * auVar17, 8);
               puVar1 = (uint*)( lVar8 + lVar20 * 4 );
               iVar19 = SUB164(auVar13 * auVar17, 8);
               uVar18 = uVar23;
               uVar5 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar20 * 8 ) = uVar18;
            *puVar1 = uVar21;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar26 = uVar26 + 1;
      }
 while ( uVar26 != uVar3 );
      Memory::free_static(pvVar6, false);
      Memory::free_static(pvVar7, false);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<ObjectID, int, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, int> > >::operator[](ObjectID const&) */undefined1[16];HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>::operator [](HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>
             *this,ObjectID*param_1)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
  void *__s;
  undefined1 auVar4 [16];
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
  undefined1 auVar27[16](*, pauVar28)[16](*, pauVar30)[16](*, pauVar44)[16];
  long lVar45;
  undefined1 auVar46[16];
  undefined1 auVar47[16](ulong)(__s_00 = = (void*)0x0) {
   uVar31 = uVar43 * 4;
   uVar29 = uVar43 * 8;
   uVar32 = Memory::alloc_static(uVar31, false);
   *(undefined8*)( this + 0x10 ) = uVar32;
   lStack_90 = 0x11d820;
   __s_00 = (void*)Memory::alloc_static(uVar29, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar37 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar29 ) ) && ( __s_00 < (void*)( (long)__s + uVar31 ) )) {
         uVar31 = 0;
         do {
            *(undefined4*)( (long)__s + uVar31 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar31 * 8 ) = 0;
            uVar31 = uVar31 + 1;
         }
 while ( uVar43 != uVar31 );
         lVar45 = *(long*)param_1;
         iVar36 = *(int*)( this + 0x2c );
      }
 else {
         memset(__s, 0, uVar31);
         lStack_90 = 0x11d86a;
         memset(__s_00, 0, uVar29);
         lVar45 = *(long*)param_1;
         iVar36 = *(int*)( this + 0x2c );
      }

      LAB_0011d879:if (iVar36 == 0) goto LAB_0011d910;
      uVar31 = ( ulong ) * (uint*)( this + 0x28 );
      lVar39 = *(long*)( this + 0x10 );
      goto LAB_0011d524;
   }

   lVar45 = *(long*)param_1;
   iVar36 = *(int*)( this + 0x2c );
   if (__s_00 != (void*)0x0) goto LAB_0011d879;
}
else{iVar36 = *(int*)( this + 0x2c );if (iVar36 == 0) {
   LAB_0011d910:iVar36 = 0;
}
 else {
   lVar2 = *(long*)( hash_table_size_primes_inv + uVar31 * 8 );
   uVar29 = lVar45 * 0x3ffff - 1;
   uVar29 = ( uVar29 ^ uVar29 >> 0x1f ) * 0x15;
   uVar29 = ( uVar29 ^ uVar29 >> 0xb ) * 0x41;
   uVar29 = uVar29 >> 0x16 ^ uVar29;
   uVar41 = uVar29 & 0xffffffff;
   if ((int)uVar29 == 0) {
      uVar41 = 1;
   }

   auVar4._8_8_ = 0;
   auVar4._0_8_ = uVar41 * lVar2;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = uVar43;
   lVar34 = SUB168(auVar4 * auVar16, 8);
   lVar39 = *(long*)( this + 0x10 );
   uVar40 = SUB164(auVar4 * auVar16, 8);
   uVar33 = *(uint*)( lVar39 + lVar34 * 4 );
   if (uVar33 != 0) {
      uVar38 = 0;
      lVar35 = lVar34;
      do {
         if (( (uint)uVar41 == uVar33 ) && ( lVar45 == *(long*)( *(long*)( (long)__s_00 + lVar34 * 8 ) + 0x10 ) )) {
            auVar46._0_8_ = *(long*)( (long)__s_00 + (ulong)uVar40 * 8 ) + 0x18;
            auVar46._8_8_ = lVar35;
            return auVar46;
         }

         uVar38 = uVar38 + 1;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = ( ulong )(uVar40 + 1) * lVar2;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = uVar43;
         lVar34 = SUB168(auVar5 * auVar17, 8);
         uVar33 = *(uint*)( lVar39 + lVar34 * 4 );
         uVar40 = SUB164(auVar5 * auVar17, 8);
      }
 while ( ( uVar33 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar33 * lVar2,auVar18._8_8_ = 0,auVar18._0_8_ = uVar43,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar40 + uVar37 ) - SUB164(auVar6 * auVar18, 8)) * lVar2,auVar19._8_8_ = 0,auVar19._0_8_ = uVar43,lVar35 = SUB168(auVar7 * auVar19, 8),uVar38 <= SUB164(auVar7 * auVar19, 8) );
   }

   LAB_0011d524:uVar41 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar31 * 4 ));
   lVar2 = *(long*)( hash_table_size_primes_inv + uVar31 * 8 );
   uVar29 = lVar45 * 0x3ffff - 1;
   uVar29 = ( uVar29 ^ uVar29 >> 0x1f ) * 0x15;
   uVar29 = ( uVar29 ^ uVar29 >> 0xb ) * 0x41;
   uVar29 = uVar29 >> 0x16 ^ uVar29;
   uVar42 = uVar29 & 0xffffffff;
   if ((int)uVar29 == 0) {
      uVar42 = 1;
   }

   auVar8._8_8_ = 0;
   auVar8._0_8_ = uVar42 * lVar2;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar41;
   lVar34 = SUB168(auVar8 * auVar20, 8);
   uVar37 = *(uint*)( lVar39 + lVar34 * 4 );
   uVar33 = SUB164(auVar8 * auVar20, 8);
   if (uVar37 != 0) {
      uVar40 = 0;
      lVar35 = lVar34;
      do {
         if (( (uint)uVar42 == uVar37 ) && ( *(long*)( *(long*)( (long)__s_00 + lVar34 * 8 ) + 0x10 ) == lVar45 )) {
            pauVar30 = *(undefined1(**) [16])( (long)__s_00 + (ulong)uVar33 * 8 );
            *(undefined4*)( pauVar30[1] + 8 ) = 0;
            lStack_90 = lVar35;
            goto LAB_0011d60e;
         }

         uVar40 = uVar40 + 1;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = ( ulong )(uVar33 + 1) * lVar2;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar41;
         lVar34 = SUB168(auVar9 * auVar21, 8);
         uVar37 = *(uint*)( lVar39 + lVar34 * 4 );
         uVar33 = SUB164(auVar9 * auVar21, 8);
      }
 while ( ( uVar37 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar37 * lVar2,auVar22._8_8_ = 0,auVar22._0_8_ = uVar41,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + uVar31 * 4 ) + uVar33 ) - SUB164(auVar10 * auVar22, 8)) * lVar2,auVar23._8_8_ = 0,auVar23._0_8_ = uVar41,lVar35 = SUB168(auVar11 * auVar23, 8),uVar40 <= SUB164(auVar11 * auVar23, 8) );
   }

}
}if ((float)uVar43 * __LC53 < (float)( iVar36 + 1 )) {
   if (*(int*)( this + 0x28 ) == 0x1c) {
      pauVar30 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0011d60e;
   }

   _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
}
uVar32 = *(undefined8*)param_1;pauVar30 = (undefined1(*) [16])operator_new(0x20, "");*pauVar30 = (undefined1[16])0x0;*(undefined4*)( pauVar30[1] + 8 ) = 0;*(undefined8*)pauVar30[1] = uVar32;puVar3 = *(undefined8**)( this + 0x20 );if (puVar3 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar30;
}
 else {
   *puVar3 = pauVar30;
   *(undefined8**)( *pauVar30 + 8 ) = puVar3;
}
lVar45 = *(long*)param_1;lVar39 = *(long*)( this + 0x10 );*(undefined1(**) [16])( this + 0x20 ) = pauVar30;uVar31 = lVar45 * 0x3ffff - 1;uVar31 = ( uVar31 ^ uVar31 >> 0x1f ) * 0x15;uVar31 = ( uVar31 ^ uVar31 >> 0xb ) * 0x41;uVar31 = uVar31 >> 0x16 ^ uVar31;uVar43 = uVar31 & 0xffffffff;if ((int)uVar31 == 0) {
   uVar43 = 1;
}
uVar38 = 0;lVar45 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar40 = (uint)uVar43;uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar31 = CONCAT44(0, uVar37);auVar12._8_8_ = 0;auVar12._0_8_ = uVar43 * lVar45;auVar24._8_8_ = 0;auVar24._0_8_ = uVar31;lStack_90 = SUB168(auVar12 * auVar24, 8);lVar2 = *(long*)( this + 8 );puVar1 = (uint*)( lVar39 + lStack_90 * 4 );iVar36 = SUB164(auVar12 * auVar24, 8);uVar33 = *puVar1;pauVar28 = pauVar30;while (uVar33 != 0) {
   auVar13._8_8_ = 0;
   auVar13._0_8_ = (ulong)uVar33 * lVar45;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar31;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(( uVar37 + iVar36 ) - SUB164(auVar13 * auVar25, 8)) * lVar45;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar31;
   local_88 = SUB164(auVar14 * auVar26, 8);
   pauVar44 = pauVar28;
   if (local_88 < uVar38) {
      *puVar1 = (uint)uVar43;
      uVar43 = (ulong)uVar33;
      puVar3 = (undefined8*)( lVar2 + lStack_90 * 8 );
      pauVar44 = (undefined1(*) [16])*puVar3;
      *puVar3 = pauVar28;
      uVar38 = local_88;
   }

   uVar40 = (uint)uVar43;
   uVar38 = uVar38 + 1;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(iVar36 + 1) * lVar45;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar31;
   lStack_90 = SUB168(auVar15 * auVar27, 8);
   puVar1 = (uint*)( lVar39 + lStack_90 * 4 );
   iVar36 = SUB164(auVar15 * auVar27, 8);
   pauVar28 = pauVar44;
   uVar33 = *puVar1;
}
;*(undefined1(**) [16])( lVar2 + lStack_90 * 8 ) = pauVar28;*puVar1 = uVar40;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0011d60e:auVar47._8_8_ = lStack_90;auVar47._0_8_ = pauVar30[1] + 8;return auVar47;}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<ObjectID, int, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, int> > >::insert(ObjectID const&, int const&,
   bool) */void HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>::insert(ObjectID *param_1, int *param_2, bool param_3) {
   uint *puVar1;
   uint uVar2;
   undefined4 uVar3;
   long lVar4;
   undefined8 *puVar5;
   void *__s;
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
   undefined1(*pauVar22)[16];
   uint uVar23;
   ulong uVar24;
   undefined1(*pauVar25)[16];
   undefined8 uVar26;
   void *__s_00;
   undefined4 *in_RCX;
   int iVar27;
   undefined7 in_register_00000011;
   long *plVar28;
   long lVar29;
   long lVar30;
   ulong uVar31;
   uint uVar32;
   char in_R8B;
   ulong uVar33;
   uint uVar34;
   long lVar35;
   undefined1(*pauVar36)[16];
   plVar28 = (long*)CONCAT71(in_register_00000011, param_3);
   __s_00 = *(void**)( param_2 + 2 );
   uVar2 = *(uint*)( hash_table_size_primes + (ulong)(uint)param_2[10] * 4 );
   if (__s_00 == (void*)0x0) {
      uVar33 = (ulong)uVar2;
      uVar24 = uVar33 * 4;
      uVar31 = uVar33 * 8;
      uVar26 = Memory::alloc_static(uVar24, false);
      *(undefined8*)( param_2 + 4 ) = uVar26;
      __s_00 = (void*)Memory::alloc_static(uVar31, false);
      *(void**)( param_2 + 2 ) = __s_00;
      if (uVar2 != 0) {
         __s = *(void**)( param_2 + 4 );
         if (( __s < (void*)( (long)__s_00 + uVar31 ) ) && ( __s_00 < (void*)( (long)__s + uVar24 ) )) {
            uVar24 = 0;
            do {
               *(undefined4*)( (long)__s + uVar24 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar24 * 8 ) = 0;
               uVar24 = uVar24 + 1;
            }
 while ( uVar33 != uVar24 );
            goto LAB_0011d996;
         }

         memset(__s, 0, uVar24);
         memset(__s_00, 0, uVar31);
         iVar27 = param_2[0xb];
         lVar35 = *plVar28;
         goto LAB_0011d9a1;
      }

      iVar27 = param_2[0xb];
      lVar35 = *plVar28;
      if (__s_00 != (void*)0x0) goto LAB_0011d9a1;
   }
 else {
      LAB_0011d996:iVar27 = param_2[0xb];
      lVar35 = *plVar28;
      LAB_0011d9a1:if (iVar27 != 0) {
         uVar33 = CONCAT44(0, *(uint*)( hash_table_size_primes + (ulong)(uint)param_2[10] * 4 ));
         lVar4 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8 );
         uVar24 = lVar35 * 0x3ffff - 1;
         uVar24 = ( uVar24 ^ uVar24 >> 0x1f ) * 0x15;
         uVar24 = ( uVar24 ^ uVar24 >> 0xb ) * 0x41;
         uVar24 = uVar24 >> 0x16 ^ uVar24;
         uVar31 = uVar24 & 0xffffffff;
         if ((int)uVar24 == 0) {
            uVar31 = 1;
         }

         auVar6._8_8_ = 0;
         auVar6._0_8_ = uVar31 * lVar4;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = uVar33;
         lVar29 = SUB168(auVar6 * auVar14, 8);
         uVar32 = *(uint*)( *(long*)( param_2 + 4 ) + lVar29 * 4 );
         uVar23 = SUB164(auVar6 * auVar14, 8);
         if (uVar32 != 0) {
            uVar34 = 0;
            do {
               if (( (uint)uVar31 == uVar32 ) && ( *(long*)( *(long*)( (long)__s_00 + lVar29 * 8 ) + 0x10 ) == lVar35 )) {
                  pauVar25 = *(undefined1(**) [16])( (long)__s_00 + (ulong)uVar23 * 8 );
                  *(undefined4*)( pauVar25[1] + 8 ) = *in_RCX;
                  goto LAB_0011dc70;
               }

               uVar34 = uVar34 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(uVar23 + 1) * lVar4;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar33;
               lVar29 = SUB168(auVar7 * auVar15, 8);
               uVar32 = *(uint*)( *(long*)( param_2 + 4 ) + lVar29 * 4 );
               uVar23 = SUB164(auVar7 * auVar15, 8);
            }
 while ( ( uVar32 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar32 * lVar4,auVar16._8_8_ = 0,auVar16._0_8_ = uVar33,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + (ulong)(uint)param_2[10] * 4 ) + uVar23 ) - SUB164(auVar8 * auVar16, 8)) * lVar4,auVar17._8_8_ = 0,auVar17._0_8_ = uVar33,uVar34 <= SUB164(auVar9 * auVar17, 8) );
         }

      }

   }

   if ((float)uVar2 * __LC53 < (float)( iVar27 + 1 )) {
      if (param_2[10] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         pauVar25 = (undefined1(*) [16])0x0;
         goto LAB_0011dc70;
      }

      _resize_and_rehash((HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>*)param_2, param_2[10] + 1);
   }

   lVar35 = *plVar28;
   uVar3 = *in_RCX;
   pauVar25 = (undefined1(*) [16])operator_new(0x20, "");
   *pauVar25 = (undefined1[16])0x0;
   *(undefined4*)( pauVar25[1] + 8 ) = uVar3;
   *(long*)pauVar25[1] = lVar35;
   puVar5 = *(undefined8**)( param_2 + 8 );
   if (puVar5 == (undefined8*)0x0) {
      *(undefined1(**) [16])( param_2 + 6 ) = pauVar25;
      *(undefined1(**) [16])( param_2 + 8 ) = pauVar25;
   }
 else if (in_R8B == '\0') {
      *puVar5 = pauVar25;
      *(undefined8**)( *pauVar25 + 8 ) = puVar5;
      *(undefined1(**) [16])( param_2 + 8 ) = pauVar25;
   }
 else {
      lVar35 = *(long*)( param_2 + 6 );
      *(undefined1(**) [16])( lVar35 + 8 ) = pauVar25;
      *(long*)*pauVar25 = lVar35;
      *(undefined1(**) [16])( param_2 + 6 ) = pauVar25;
   }

   lVar35 = *(long*)( param_2 + 4 );
   uVar24 = *plVar28 * 0x3ffff - 1;
   uVar24 = ( uVar24 ^ uVar24 >> 0x1f ) * 0x15;
   uVar24 = ( uVar24 ^ uVar24 >> 0xb ) * 0x41;
   uVar24 = uVar24 >> 0x16 ^ uVar24;
   uVar31 = uVar24 & 0xffffffff;
   if ((int)uVar24 == 0) {
      uVar31 = 1;
   }

   uVar34 = 0;
   lVar4 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8 );
   uVar23 = (uint)uVar31;
   uVar2 = *(uint*)( hash_table_size_primes + (ulong)(uint)param_2[10] * 4 );
   uVar24 = CONCAT44(0, uVar2);
   auVar10._8_8_ = 0;
   auVar10._0_8_ = uVar31 * lVar4;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = uVar24;
   lVar30 = SUB168(auVar10 * auVar18, 8);
   lVar29 = *(long*)( param_2 + 2 );
   puVar1 = (uint*)( lVar35 + lVar30 * 4 );
   iVar27 = SUB164(auVar10 * auVar18, 8);
   uVar32 = *puVar1;
   pauVar22 = pauVar25;
   while (uVar32 != 0) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar32 * lVar4;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar24;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(( uVar2 + iVar27 ) - SUB164(auVar11 * auVar19, 8)) * lVar4;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar24;
      uVar23 = SUB164(auVar12 * auVar20, 8);
      pauVar36 = pauVar22;
      if (uVar23 < uVar34) {
         *puVar1 = (uint)uVar31;
         uVar31 = (ulong)uVar32;
         puVar5 = (undefined8*)( lVar29 + lVar30 * 8 );
         pauVar36 = (undefined1(*) [16])*puVar5;
         *puVar5 = pauVar22;
         uVar34 = uVar23;
      }

      uVar23 = (uint)uVar31;
      uVar34 = uVar34 + 1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = ( ulong )(iVar27 + 1) * lVar4;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar24;
      lVar30 = SUB168(auVar13 * auVar21, 8);
      puVar1 = (uint*)( lVar35 + lVar30 * 4 );
      iVar27 = SUB164(auVar13 * auVar21, 8);
      pauVar22 = pauVar36;
      uVar32 = *puVar1;
   }
;
   *(undefined1(**) [16])( lVar29 + lVar30 * 8 ) = pauVar22;
   *puVar1 = uVar23;
   param_2[0xb] = param_2[0xb] + 1;
   LAB_0011dc70:*(undefined1(**) [16])param_1 = pauVar25;
   return;
}
/* DebugAdapterProtocol::singleton */void DebugAdapterProtocol::_GLOBAL__sub_I_singleton(void) {
   undefined8 uStack_18;
   if (PopupMenu::base_property_helper == '\0') {
      PopupMenu::base_property_helper = '\x01';
      PopupMenu::base_property_helper._64_8_ = 0;
      PopupMenu::base_property_helper._0_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._24_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._40_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._56_8_ = 2;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, PopupMenu::base_property_helper, &__dso_handle);
   }

   if (OptionButton::base_property_helper == '\0') {
      OptionButton::base_property_helper = '\x01';
      OptionButton::base_property_helper._64_8_ = 0;
      OptionButton::base_property_helper._0_16_ = (undefined1[16])0x0;
      OptionButton::base_property_helper._24_16_ = (undefined1[16])0x0;
      OptionButton::base_property_helper._40_16_ = (undefined1[16])0x0;
      OptionButton::base_property_helper._56_8_ = 2;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, OptionButton::base_property_helper, &__dso_handle);
   }

   ENV_SCRIPT_ENCRYPTION_KEY = 0;
   String::parse_latin1((String*)&ENV_SCRIPT_ENCRYPTION_KEY, "GODOT_SCRIPT_ENCRYPTION_KEY");
   __cxa_atexit(String::~String, &ENV_SCRIPT_ENCRYPTION_KEY, &__dso_handle);
   if (EditorExport::_export_presets_updated == '\0') {
      EditorExport::_export_presets_updated = '\x01';
      EditorExport::_export_presets_updated = 0;
      __cxa_atexit(StringName::~StringName, &EditorExport::_export_presets_updated, &__dso_handle);
   }

   if (EditorExport::_export_presets_runnable_updated != '\0') {
      return;
   }

   EditorExport::_export_presets_runnable_updated = 1;
   EditorExport::_export_presets_runnable_updated = 0;
   __cxa_atexit(StringName::~StringName, &EditorExport::_export_presets_runnable_updated, &__dso_handle, uStack_18);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JSON::~JSON() */void JSON::~JSON(JSON *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* String::~String() */void String::~String(String *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* DAPeer::~DAPeer() */void DAPeer::~DAPeer(DAPeer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* DebugAdapterParser::~DebugAdapterParser() */void DebugAdapterParser::~DebugAdapterParser(DebugAdapterParser *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<DebugAdapterProtocol, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DebugAdapterProtocol,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DebugAdapterProtocol,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<DebugAdapterProtocol, void, String const&, int const&, bool
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int_const&,bool_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int_const&,bool_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<DebugAdapterProtocol, void, String const&,
   int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<DebugAdapterProtocol, void, bool const&, bool const&, String const&,
   bool const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DebugAdapterProtocol,void,bool_const&,bool_const&,String_const&,bool_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DebugAdapterProtocol,void,bool_const&,bool_const&,String_const&,bool_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<DebugAdapterProtocol, void, Array
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DebugAdapterProtocol,void,Array_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DebugAdapterProtocol,void,Array_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<DebugAdapterProtocol, void, int
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DebugAdapterProtocol,void,int_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DebugAdapterProtocol,void,int_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<DebugAdapterProtocol, void, String const&, Array
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,Array_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<DebugAdapterProtocol,void,String_const&,Array_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<Pair<PropertyInfo, Variant>, DefaultAllocator>::~List() */void List<Pair<PropertyInfo,Variant>,DefaultAllocator>::~List(List<Pair<PropertyInfo,Variant>,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* DAP::Variable::~Variable() */void DAP::Variable::~Variable(Variable *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

