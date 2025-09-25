/* ResourcePreloader::has_resource(StringName const&) const */undefined8 ResourcePreloader::has_resource(ResourcePreloader *this, StringName *param_1) {
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
   uint uVar11;
   int iVar12;
   long lVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (*(long*)( this + 0x410 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x434 ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x430 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x430 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar15 = CONCAT44(0, uVar1);
      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x418 ) + lVar13 * 4 );
      iVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 0x410 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               return 1;
            }

            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x418 ) + lVar13 * 4 );
            iVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* ResourcePreloader::get_resource_list(List<StringName, DefaultAllocator>*) */void ResourcePreloader::get_resource_list(ResourcePreloader *this, List *param_1) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   StringName *this_00;
   undefined8 *puVar4;
   StringName *pSVar5;
   puVar4 = *(undefined8**)( this + 0x420 );
   if (puVar4 != (undefined8*)0x0) {
      pSVar5 = (StringName*)( puVar4 + 2 );
      if (*(long*)param_1 == 0) {
         pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])param_1 = pauVar3;
         *(undefined4*)pauVar3[1] = 0;
         *pauVar3 = (undefined1[16])0x0;
      }

      while (true) {
         this_00 = (StringName*)operator_new(0x20, DefaultAllocator::alloc);
         *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
         StringName::operator =(this_00, pSVar5);
         plVar1 = *(long**)param_1;
         lVar2 = plVar1[1];
         *(undefined8*)( this_00 + 8 ) = 0;
         *(long**)( this_00 + 0x18 ) = plVar1;
         *(long*)( this_00 + 0x10 ) = lVar2;
         if (lVar2 != 0) {
            *(StringName**)( lVar2 + 8 ) = this_00;
         }

         plVar1[1] = (long)this_00;
         if (*plVar1 == 0) {
            puVar4 = (undefined8*)*puVar4;
            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
            *plVar1 = (long)this_00;
         }
 else {
            puVar4 = (undefined8*)*puVar4;
            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
         }

         if (puVar4 == (undefined8*)0x0) break;
         pSVar5 = (StringName*)( puVar4 + 2 );
      }
;
   }

   return;
}
/* ResourcePreloader::ResourcePreloader() */void ResourcePreloader::ResourcePreloader(ResourcePreloader *this) {
   Node::Node((Node*)this);
   *(undefined8*)( this + 0x430 ) = 2;
   *(undefined***)this = &PTR__initialize_classv_0010b7d0;
   *(undefined1(*) [16])( this + 0x410 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x420 ) = (undefined1[16])0x0;
   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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
      }
 while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }

   }

   return;
}
/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */void List<PropertyInfo,DefaultAllocator>::push_back(List<PropertyInfo,DefaultAllocator> *this, PropertyInfo *param_1) {
   long *plVar1;
   long lVar2;
   undefined4 *puVar3;
   undefined1(*pauVar4)[16];
   if (*(long*)this == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])this = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar3 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   lVar2 = *(long*)( param_1 + 8 );
   *puVar3 = 0;
   puVar3[6] = 0;
   puVar3[10] = 6;
   *(undefined8*)( puVar3 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
   *puVar3 = *(undefined4*)param_1;
   if (lVar2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)( param_1 + 8 ));
   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)( param_1 + 0x10 ));
   puVar3[6] = *(undefined4*)( param_1 + 0x18 );
   if (*(long*)( puVar3 + 8 ) != *(long*)( param_1 + 0x20 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)( param_1 + 0x20 ));
   }

   puVar3[10] = *(undefined4*)( param_1 + 0x28 );
   plVar1 = *(long**)this;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar3 + 0xc ) = 0;
   *(long**)( puVar3 + 0x10 ) = plVar1;
   *(long*)( puVar3 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar3;
   }

   plVar1[1] = (long)puVar3;
   if (*plVar1 != 0) {
      *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      return;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   *plVar1 = (long)puVar3;
   return;
}
/* RBSet<String, Comparator<String>, DefaultAllocator>::_cleanup_tree(RBSet<String,
   Comparator<String>, DefaultAllocator>::Element*) [clone .part.0] */void RBSet<String,Comparator<String>,DefaultAllocator>::_cleanup_tree(RBSet<String,Comparator<String>,DefaultAllocator> *this, Element *param_1) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   Element *pEVar5;
   Element *pEVar6;
   pEVar1 = *(Element**)( param_1 + 0x10 );
   pEVar2 = *(Element**)( this + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (pEVar4 != *(Element**)( pEVar6 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar6 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
               Memory::free_static(pEVar2, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
            Memory::free_static(pEVar2, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
         Memory::free_static(pEVar2, false);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar1 + 0x30 ));
      Memory::free_static(pEVar1, false);
      pEVar2 = *(Element**)( this + 8 );
   }

   pEVar1 = *(Element**)( param_1 + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               if (*(Element**)( pEVar2 + 0x10 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 0x10 ));
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
               Memory::free_static(pEVar2, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
            Memory::free_static(pEVar2, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
         Memory::free_static(pEVar2, false);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar1 + 0x30 ));
      Memory::free_static(pEVar1, false);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x30 ));
   Memory::free_static(param_1, false);
   return;
}
/* ResourcePreloader::get_resource(StringName const&) const */StringName *ResourcePreloader::get_resource(StringName *param_1) {
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
   code *pcVar11;
   char cVar12;
   uint uVar13;
   int iVar14;
   StringName *in_RDX;
   long lVar15;
   long in_RSI;
   uint uVar16;
   uint uVar17;
   ulong uVar18;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( in_RSI + 0x410 ) != 0 ) && ( *(int*)( in_RSI + 0x434 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x430 ) * 4 );
      uVar18 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x430 ) * 8 );
      if (*(long*)in_RDX == 0) {
         uVar13 = StringName::get_empty_hash();
      }
 else {
         uVar13 = *(uint*)( *(long*)in_RDX + 0x20 );
      }

      if (uVar13 == 0) {
         uVar13 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar13 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar18;
      lVar15 = SUB168(auVar3 * auVar7, 8);
      uVar16 = *(uint*)( *(long*)( in_RSI + 0x418 ) + lVar15 * 4 );
      iVar14 = SUB164(auVar3 * auVar7, 8);
      if (uVar16 != 0) {
         uVar17 = 0;
         do {
            if (( uVar13 == uVar16 ) && ( *(long*)( *(long*)( *(long*)( in_RSI + 0x410 ) + lVar15 * 8 ) + 0x10 ) == *(long*)in_RDX )) {
               local_44 = 0;
               cVar12 = HashMap<StringName,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<Resource>>>>::_lookup_pos((HashMap<StringName,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<Resource>>>>*)( in_RSI + 0x408 ), in_RDX, &local_44);
               if (cVar12 == '\0') {
                  _err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar11 = (code*)invalidInstructionException();
                  ( *pcVar11 )();
               }

               lVar2 = *(long*)( *(long*)( in_RSI + 0x410 ) + (ulong)local_44 * 8 );
               *(undefined8*)param_1 = 0;
               lVar2 = *(long*)( lVar2 + 0x18 );
               if (lVar2 != 0) {
                  *(long*)param_1 = lVar2;
                  cVar12 = RefCounted::reference();
                  if (cVar12 == '\0') {
                     *(undefined8*)param_1 = 0;
                  }

               }

               goto LAB_00100d00;
            }

            uVar17 = uVar17 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar14 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar18;
            lVar15 = SUB168(auVar4 * auVar8, 8);
            uVar16 = *(uint*)( *(long*)( in_RSI + 0x418 ) + lVar15 * 4 );
            iVar14 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar16 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar16 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar18,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar14 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar18,uVar17 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   _err_print_error("get_resource", "scene/main/resource_preloader.cpp", 0x75, "Condition \"!resources.has(p_name)\" is true. Returning: Ref<Resource>()", 0, 0);
   *(undefined8*)param_1 = 0;
   LAB_00100d00:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourcePreloader::add_resource(StringName const&, Ref<Resource> const&) */void ResourcePreloader::add_resource(ResourcePreloader *this, StringName *param_1, Ref *param_2) {
   long lVar1;
   char *__s;
   Object *pOVar2;
   Object *pOVar3;
   char cVar4;
   HashMap<StringName,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<Resource>>>> *this_00;
   undefined8 *puVar5;
   long in_FS_OFFSET;
   char *local_88;
   undefined8 local_80;
   undefined8 local_78;
   String local_70[8];
   CowData<char32_t> local_68[8];
   String local_60[8];
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)param_2 == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("add_resource", "scene/main/resource_preloader.cpp", 0x4d, "Condition \"p_resource.is_null()\" is true.", 0, 0);
         return;
      }

   }
 else {
      local_58 = (char*)( (ulong)local_58 & 0xffffffff00000000 );
      this_00 = (HashMap<StringName,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<Resource>>>>*)( this + 0x408 );
      cVar4 = HashMap<StringName,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<Resource>>>>::_lookup_pos(this_00, param_1, (uint*)&local_58);
      if (cVar4 == '\0') {
         puVar5 = (undefined8*)HashMap<StringName,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<Resource>>>>::operator [](this_00, param_1);
         pOVar2 = (Object*)*puVar5;
         pOVar3 = *(Object**)param_2;
         if (pOVar3 != pOVar2) {
            *puVar5 = pOVar3;
            if (pOVar3 != (Object*)0x0) {
               cVar4 = RefCounted::reference();
               if (cVar4 == '\0') {
                  *puVar5 = 0;
               }

            }

            if (pOVar2 != (Object*)0x0) {
               cVar4 = RefCounted::unreference();
               if (cVar4 != '\0') {
                  cVar4 = predelete_handler(pOVar2);
                  if (cVar4 != '\0') {
                     ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                     if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        Memory::free_static(pOVar2, false);
                        return;
                     }

                     goto LAB_00101129;
                  }

               }

            }

         }

      }
 else {
         local_88 = (char*)0x0;
         do {
            itos((long)local_68);
            local_58 = " ";
            local_78 = 0;
            local_50 = 1;
            String::parse_latin1((StrRange*)&local_78);
            lVar1 = *(long*)param_1;
            if (lVar1 == 0) {
               local_80 = 0;
            }
 else {
               __s = *(char**)( lVar1 + 8 );
               local_80 = 0;
               if (__s == (char*)0x0) {
                  if (*(long*)( lVar1 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( lVar1 + 0x10 ));
                  }

               }
 else {
                  local_50 = strlen(__s);
                  local_58 = __s;
                  String::parse_latin1((StrRange*)&local_80);
               }

            }

            String::operator +(local_70, (String*)&local_80);
            String::operator +(local_60, local_70);
            StringName::StringName((StringName*)&local_58, local_60, false);
            if (local_88 == local_58) {
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_88 = local_58;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            CowData<char32_t>::_unref(local_68);
            local_58 = (char*)( (ulong)local_58 & 0xffffffff00000000 );
            cVar4 = HashMap<StringName,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<Resource>>>>::_lookup_pos(this_00, (StringName*)&local_88, (uint*)&local_58);
         }
 while ( cVar4 != '\0' );
         add_resource(this, (StringName*)&local_88, param_2);
         if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   LAB_00101129:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* HashMap<StringName, Ref<Resource>, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Ref<Resource> > > >::erase(StringName const&)
   [clone .isra.0] */void HashMap<StringName,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<Resource>>>>::erase(HashMap<StringName,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<Resource>>>> *this, StringName *param_1) {
   uint *puVar1;
   uint *puVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   long *plVar5;
   uint uVar6;
   uint uVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   undefined8 uVar11;
   long *plVar12;
   Object *pOVar13;
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
   uint uVar26;
   char cVar27;
   uint uVar28;
   int iVar29;
   long lVar30;
   ulong uVar31;
   long *plVar32;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_44 = 0;
   cVar27 = _lookup_pos(this, param_1, &local_44);
   if (cVar27 == '\0') goto LAB_001012f1;
   lVar8 = *(long*)( this + 0x10 );
   lVar9 = *(long*)( this + 8 );
   uVar6 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar31 = CONCAT44(0, uVar6);
   lVar10 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(local_44 + 1) * lVar10;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar31;
   lVar30 = SUB168(auVar14 * auVar20, 8);
   puVar1 = (uint*)( lVar8 + lVar30 * 4 );
   uVar28 = SUB164(auVar14 * auVar20, 8);
   uVar7 = *puVar1;
   if (uVar7 != 0) {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)uVar7 * lVar10;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar31;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = ( ulong )(( uVar6 + uVar28 ) - SUB164(auVar15 * auVar21, 8)) * lVar10;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar31;
      iVar29 = SUB164(auVar16 * auVar22, 8);
      while (uVar26 = uVar28,iVar29 != 0) {
         puVar2 = (uint*)( lVar8 + (ulong)local_44 * 4 );
         *puVar1 = *puVar2;
         puVar3 = (undefined8*)( lVar9 + lVar30 * 8 );
         *puVar2 = uVar7;
         puVar4 = (undefined8*)( lVar9 + (ulong)local_44 * 8 );
         uVar11 = *puVar3;
         *puVar3 = *puVar4;
         *puVar4 = uVar11;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = ( ulong )(uVar26 + 1) * lVar10;
         auVar25._8_8_ = 0;
         auVar25._0_8_ = uVar31;
         lVar30 = SUB168(auVar19 * auVar25, 8);
         puVar1 = (uint*)( lVar8 + lVar30 * 4 );
         uVar28 = SUB164(auVar19 * auVar25, 8);
         uVar7 = *puVar1;
         local_44 = uVar26;
         if (uVar7 == 0) break;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = (ulong)uVar7 * lVar10;
         auVar23._8_8_ = 0;
         auVar23._0_8_ = uVar31;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = ( ulong )(( uVar28 + uVar6 ) - SUB164(auVar17 * auVar23, 8)) * lVar10;
         auVar24._8_8_ = 0;
         auVar24._0_8_ = uVar31;
         iVar29 = SUB164(auVar18 * auVar24, 8);
      }
;
   }

   uVar31 = (ulong)local_44;
   plVar5 = (long*)( lVar9 + uVar31 * 8 );
   *(undefined4*)( lVar8 + uVar31 * 4 ) = 0;
   plVar32 = (long*)*plVar5;
   if (*(long**)( this + 0x18 ) == plVar32) {
      *(long*)( this + 0x18 ) = *plVar32;
      plVar32 = (long*)*plVar5;
      if (*(long**)( this + 0x20 ) != plVar32) goto LAB_00101282;
      LAB_00101318:*(long*)( this + 0x20 ) = plVar32[1];
      plVar32 = (long*)*plVar5;
      plVar12 = (long*)plVar32[1];
   }
 else {
      if (*(long**)( this + 0x20 ) == plVar32) goto LAB_00101318;
      LAB_00101282:plVar12 = (long*)plVar32[1];
   }

   if (plVar12 != (long*)0x0) {
      *plVar12 = *plVar32;
      plVar32 = (long*)*plVar5;
   }

   if (*plVar32 != 0) {
      *(long*)( *plVar32 + 8 ) = plVar32[1];
      plVar32 = (long*)*plVar5;
   }

   if (( plVar32[3] != 0 ) && ( cVar27 = cVar27 != '\0' )) {
      pOVar13 = (Object*)plVar32[3];
      cVar27 = predelete_handler(pOVar13);
      if (cVar27 != '\0') {
         ( **(code**)( *(long*)pOVar13 + 0x140 ) )(pOVar13);
         Memory::free_static(pOVar13, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( plVar32[2] != 0 )) {
      StringName::unref();
   }

   Memory::free_static(plVar32, false);
   *(undefined8*)( *(long*)( this + 8 ) + uVar31 * 8 ) = 0;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + -1;
   LAB_001012f1:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ResourcePreloader::rename_resource(StringName const&, StringName const&) */void ResourcePreloader::rename_resource(ResourcePreloader *this, StringName *param_1, StringName *param_2) {
   HashMap<StringName,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<Resource>>>> *this_00;
   Object *pOVar1;
   char cVar2;
   ulong *puVar3;
   long in_FS_OFFSET;
   Object *local_38;
   long local_30;
   this_00 = (HashMap<StringName,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<Resource>>>>*)( this + 0x408 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = (Object*)( (ulong)local_38 & 0xffffffff00000000 );
   cVar2 = HashMap<StringName,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<Resource>>>>::_lookup_pos(this_00, param_1, (uint*)&local_38);
   if (cVar2 == '\0') {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("rename_resource", "scene/main/resource_preloader.cpp", 0x68, "Condition \"!resources.has(p_from_name)\" is true.", 0, 0);
         return;
      }

   }
 else {
      puVar3 = (ulong*)HashMap<StringName,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<Resource>>>>::operator [](this_00, param_1);
      local_38 = (Object*)0x0;
      if ((Object*)*puVar3 != (Object*)0x0) {
         local_38 = (Object*)*puVar3;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            local_38 = (Object*)0x0;
         }

      }

      HashMap<StringName,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<Resource>>>>::erase(this_00, param_1);
      add_resource(this, param_2, (Ref*)&local_38);
      if (local_38 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         pOVar1 = local_38;
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(local_38);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourcePreloader::remove_resource(StringName const&) */void ResourcePreloader::remove_resource(ResourcePreloader *this, StringName *param_1) {
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
   uint uVar11;
   int iVar12;
   long lVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (( *(long*)( this + 0x410 ) != 0 ) && ( *(int*)( this + 0x434 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x430 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x430 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar15 = CONCAT44(0, uVar1);
      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x418 ) + lVar13 * 4 );
      iVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 0x410 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               HashMap<StringName,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<Resource>>>>::erase((HashMap<StringName,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<Resource>>>>*)( this + 0x408 ), param_1);
               return;
            }

            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x418 ) + lVar13 * 4 );
            iVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   _err_print_error("remove_resource", "scene/main/resource_preloader.cpp", 99, "Condition \"!resources.has(p_name)\" is true.", 0, 0);
   return;
}
/* ResourcePreloader::_bind_methods() */void ResourcePreloader::_bind_methods(void) {
   long lVar1;
   code *pcVar2;
   undefined *puVar3;
   long *plVar4;
   MethodBind *pMVar5;
   long *plVar6;
   uint uVar7;
   long lVar8;
   long in_FS_OFFSET;
   CowData<char32_t> *local_158;
   undefined8 local_118;
   long local_110;
   long local_108;
   long local_100;
   long local_f8;
   long local_f0;
   char *local_e8;
   undefined8 local_e0;
   char *local_d8;
   undefined8 local_d0;
   long *local_c8;
   int local_c0;
   undefined8 local_b8;
   undefined4 local_b0;
   char *local_a8;
   undefined8 local_a0;
   char *local_98;
   char *pcStack_90;
   undefined8 local_88;
   char *local_78;
   char *pcStack_70;
   undefined8 local_68;
   char **local_58;
   undefined1 auStack_50[16];
   long local_40;
   puVar3 = PTR__LC23_0010be80;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a0 = 0;
   local_a8 = "resources";
   local_58 = &local_a8;
   uVar7 = ( uint ) & local_58;
   D_METHODP((char*)&local_d8, (char***)"_set_resources", uVar7);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<ResourcePreloader,Array_const&>(_set_resources);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar4 = local_c8;
   if (local_c8 != (long*)0x0) {
      LOCK();
      plVar6 = local_c8 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_c8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_c8[-1];
         lVar8 = 0;
         local_c8 = (long*)0x0;
         plVar6 = plVar4;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar8 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_d8, (char***)"_get_resources", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<ResourcePreloader,Array>(_get_resources);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar4 = local_c8;
   if (local_c8 != (long*)0x0) {
      LOCK();
      plVar6 = local_c8 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_c8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_c8[-1];
         lVar8 = 0;
         local_c8 = (long*)0x0;
         plVar6 = plVar4;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar8 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_68 = 0;
   local_78 = puVar3;
   pcStack_70 = "resource";
   auStack_50._0_8_ = &pcStack_70;
   local_58 = &local_78;
   D_METHODP((char*)&local_d8, (char***)"add_resource", uVar7);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<ResourcePreloader,StringName_const&,Ref<Resource>const&>(add_resource);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar4 = local_c8;
   if (local_c8 != (long*)0x0) {
      LOCK();
      plVar6 = local_c8 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_c8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_c8[-1];
         lVar8 = 0;
         local_c8 = (long*)0x0;
         plVar6 = plVar4;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar8 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_78 = "name";
   pcStack_70 = (char*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)&local_d8, (char***)"remove_resource", uVar7);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<ResourcePreloader,StringName_const&>(remove_resource);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar4 = local_c8;
   if (local_c8 != (long*)0x0) {
      LOCK();
      plVar6 = local_c8 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_c8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_c8[-1];
         lVar8 = 0;
         local_c8 = (long*)0x0;
         plVar6 = plVar4;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar8 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_88 = 0;
   local_98 = puVar3;
   pcStack_90 = "newname";
   auStack_50._0_8_ = &pcStack_90;
   local_58 = &local_98;
   D_METHODP((char*)&local_d8, (char***)"rename_resource", uVar7);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<ResourcePreloader,StringName_const&,StringName_const&>(rename_resource);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar4 = local_c8;
   if (local_c8 != (long*)0x0) {
      LOCK();
      plVar6 = local_c8 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_c8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_c8[-1];
         lVar8 = 0;
         local_c8 = (long*)0x0;
         plVar6 = plVar4;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar8 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_78 = "name";
   pcStack_70 = (char*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)&local_d8, (char***)"has_resource", uVar7);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<ResourcePreloader,bool,StringName_const&>(has_resource);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar4 = local_c8;
   if (local_c8 != (long*)0x0) {
      LOCK();
      plVar6 = local_c8 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_c8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_c8[-1];
         lVar8 = 0;
         local_c8 = (long*)0x0;
         plVar6 = plVar4;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar8 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_78 = "name";
   pcStack_70 = (char*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)&local_d8, (char***)"get_resource", uVar7);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<ResourcePreloader,Ref<Resource>,StringName_const&>(get_resource);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar4 = local_c8;
   if (local_c8 != (long*)0x0) {
      LOCK();
      plVar6 = local_c8 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_c8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_c8[-1];
         lVar8 = 0;
         local_c8 = (long*)0x0;
         plVar6 = plVar4;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar8 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_d8, (char***)"get_resource_list", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<ResourcePreloader,Vector<String>>(_get_resource_list);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar4 = local_c8;
   if (local_c8 != (long*)0x0) {
      LOCK();
      plVar6 = local_c8 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_c8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_c8[-1];
         lVar8 = 0;
         local_c8 = (long*)0x0;
         plVar6 = plVar4;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar8 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_f0, true);
   _scs_create((char*)&local_f8, true);
   local_d8 = "";
   local_100 = 0;
   local_108 = 0;
   local_d0 = 0;
   String::parse_latin1((StrRange*)&local_108);
   local_d8 = "resources";
   local_110 = 0;
   local_d0 = 9;
   String::parse_latin1((StrRange*)&local_110);
   local_d8 = (char*)CONCAT44(local_d8._4_4_, 0x1c);
   local_d0 = 0;
   if (local_110 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d0, (CowData*)&local_110);
   }

   local_c8 = (long*)0x0;
   local_c0 = 0;
   local_b8 = 0;
   if (local_108 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_108);
      local_b0 = 10;
      if (local_c0 == 0x11) {
         StringName::StringName((StringName*)&local_e8, (String*)&local_b8, false);
         if (local_c8 == (long*)local_e8) {
            if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_c8 = (long*)local_e8;
         }

         goto LAB_001021d2;
      }

   }

   local_b0 = 10;
   StringName::operator =((StringName*)&local_c8, (StringName*)&local_100);
   LAB_001021d2:local_158 = (CowData<char32_t>*)&local_b8;
   local_118 = 0;
   local_e8 = "ResourcePreloader";
   local_e0 = 0x11;
   String::parse_latin1((StrRange*)&local_118);
   StringName::StringName((StringName*)&local_e8, (String*)&local_118, false);
   ClassDB::add_property((StringName*)&local_e8, (PropertyInfo*)&local_d8, (StringName*)&local_f8, (StringName*)&local_f0, -1);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref(local_158);
   if (( StringName::configured != '\0' ) && ( local_c8 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_100 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_f8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_f0 != 0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<String>::_ref(CowData<String> const&) [clone .part.0] */void CowData<String>::_ref(CowData<String> *this, CowData *param_1) {
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
      }
 while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }

   }

   return;
}
/* ResourcePreloader::_set_resources(Array const&) */void ResourcePreloader::_set_resources(ResourcePreloader *this, Array *param_1) {
   uint uVar1;
   void *pvVar2;
   Object *pOVar3;
   code *pcVar4;
   char cVar5;
   int iVar6;
   Object *pOVar7;
   undefined8 *puVar8;
   long lVar9;
   long lVar10;
   long in_FS_OFFSET;
   Variant local_68[8];
   long local_60;
   Variant local_58[8];
   long local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x410 ) != 0 ) && ( *(int*)( this + 0x434 ) != 0 )) {
      lVar9 = 0;
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x430 ) * 4 );
      if (uVar1 != 0) {
         do {
            if (*(int*)( *(long*)( this + 0x418 ) + lVar9 ) != 0) {
               *(int*)( *(long*)( this + 0x418 ) + lVar9 ) = 0;
               pvVar2 = *(void**)( *(long*)( this + 0x410 ) + lVar9 * 2 );
               if (*(long*)( (long)pvVar2 + 0x18 ) != 0) {
                  cVar5 = RefCounted::unreference();
                  if (cVar5 != '\0') {
                     pOVar7 = *(Object**)( (long)pvVar2 + 0x18 );
                     cVar5 = predelete_handler(pOVar7);
                     if (cVar5 != '\0') {
                        ( **(code**)( *(long*)pOVar7 + 0x140 ) )();
                        Memory::free_static(pOVar7, false);
                     }

                  }

               }

               if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar2 + 0x10 ) != 0 )) {
                  StringName::unref();
               }

               Memory::free_static(pvVar2, false);
               *(undefined8*)( *(long*)( this + 0x410 ) + lVar9 * 2 ) = 0;
            }

            lVar9 = lVar9 + 4;
         }
 while ( (ulong)uVar1 << 2 != lVar9 );
      }

      *(undefined4*)( this + 0x434 ) = 0;
      *(undefined1(*) [16])( this + 0x420 ) = (undefined1[16])0x0;
   }

   iVar6 = Array::size();
   if (iVar6 == 2) {
      Array::operator []((int)param_1);
      Variant::operator_cast_to_Vector(local_58);
      Array::operator []((int)param_1);
      Variant::operator_cast_to_Array(local_68);
      if (local_50[0] == 0) {
         lVar9 = 0;
      }
 else {
         lVar9 = *(long*)( local_50[0] + -8 );
      }

      lVar10 = 0;
      iVar6 = Array::size();
      if (iVar6 == lVar9) {
         while (true) {
            iVar6 = Array::size();
            if (iVar6 <= (int)lVar10) break;
            Array::operator []((int)local_68);
            lVar9 = Variant::get_validated_object();
            if (lVar9 == 0) {
               LAB_00102580:_err_print_error("_set_resources", "scene/main/resource_preloader.cpp", 0x2c, "Condition \"resource.is_null()\" is true. Continuing.", 0, 0);
            }
 else {
               pOVar7 = (Object*)__dynamic_cast(lVar9, &Object::typeinfo, &Resource::typeinfo, 0);
               if (pOVar7 == (Object*)0x0) goto LAB_00102580;
               cVar5 = RefCounted::reference();
               if (cVar5 == '\0') goto LAB_00102580;
               if (local_50[0] == 0) {
                  lVar9 = 0;
                  LAB_001026f3:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar9, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar4 = (code*)invalidInstructionException();
                  ( *pcVar4 )();
               }

               lVar9 = *(long*)( local_50[0] + -8 );
               if (lVar9 <= lVar10) goto LAB_001026f3;
               StringName::StringName((StringName*)&local_60, (String*)( local_50[0] + lVar10 * 8 ), false);
               puVar8 = (undefined8*)HashMap<StringName,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<Resource>>>>::operator []((HashMap<StringName,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<Resource>>>>*)( this + 0x408 ), (StringName*)&local_60);
               pOVar3 = (Object*)*puVar8;
               if (pOVar7 != pOVar3) {
                  *puVar8 = pOVar7;
                  cVar5 = RefCounted::reference();
                  if (cVar5 == '\0') {
                     *puVar8 = 0;
                  }

                  if (pOVar3 != (Object*)0x0) {
                     cVar5 = RefCounted::unreference();
                     if (cVar5 != '\0') {
                        cVar5 = predelete_handler(pOVar3);
                        if (cVar5 != '\0') {
                           ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                           Memory::free_static(pOVar3, false);
                        }

                     }

                  }

               }

               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               cVar5 = RefCounted::unreference();
               if (cVar5 != '\0') {
                  cVar5 = predelete_handler(pOVar7);
                  if (cVar5 != '\0') {
                     ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
                     Memory::free_static(pOVar7, false);
                  }

               }

            }

            lVar10 = lVar10 + 1;
         }
;
         Array::~Array((Array*)local_68);
         CowData<String>::_unref((CowData<String>*)local_50);
      }
 else {
         _err_print_error("_set_resources", "scene/main/resource_preloader.cpp", 0x28, "Condition \"names.size() != resdata.size()\" is true.", 0, 0);
         Array::~Array((Array*)local_68);
         CowData<String>::_unref((CowData<String>*)local_50);
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("_set_resources", "scene/main/resource_preloader.cpp", 0x24, "Condition \"p_data.size() != 2\" is true.", 0, 0);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
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
         }
 while ( lVar2 != lVar6 );
      }

      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar5 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<String>::resize<false>(long) [clone .isra.0] */void CowData<String>::resize<false>(CowData<String> *this, long param_1) {
   code *pcVar1;
   int iVar2;
   undefined8 *puVar3;
   long lVar4;
   char *pcVar5;
   undefined8 uVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long lVar10;
   ulong uVar11;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar4 = 0;
      lVar7 = 0;
   }
 else {
      lVar4 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar4) {
         return;
      }

      if (param_1 == 0) {
         _unref(this);
         return;
      }

      _copy_on_write(this);
      lVar7 = lVar4 * 8;
      if (lVar7 != 0) {
         uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
         uVar8 = uVar8 | uVar8 >> 2;
         uVar8 = uVar8 | uVar8 >> 4;
         uVar8 = uVar8 | uVar8 >> 8;
         uVar8 = uVar8 | uVar8 >> 0x10;
         lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 != 0) {
      uVar8 = param_1 * 8 - 1;
      uVar8 = uVar8 | uVar8 >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      uVar8 = uVar8 | uVar8 >> 0x20;
      lVar10 = uVar8 + 1;
      if (lVar10 != 0) {
         uVar11 = param_1;
         if (param_1 <= lVar4) {
            while (true) {
               lVar4 = *(long*)this;
               if (lVar4 == 0) {
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

               if (*(ulong*)( lVar4 + -8 ) <= uVar11) break;
               CowData<char32_t>::_unref((CowData<char32_t>*)( lVar4 + uVar11 * 8 ));
               uVar11 = uVar11 + 1;
            }
;
            if (lVar10 != lVar7) {
               iVar2 = _realloc(this, lVar10);
               if (iVar2 != 0) {
                  return;
               }

               lVar4 = *(long*)this;
               if (lVar4 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

            }

            *(long*)( lVar4 + -8 ) = param_1;
            return;
         }

         if (lVar10 == lVar7) {
            LAB_00102b33:puVar9 = *(undefined8**)this;
            if (puVar9 == (undefined8*)0x0) {
               FUN_0010622a();
               return;
            }

            lVar4 = puVar9[-1];
            if (param_1 <= lVar4) goto LAB_00102a9b;
         }
 else {
            if (lVar4 != 0) {
               iVar2 = _realloc(this, lVar10);
               if (iVar2 != 0) {
                  return;
               }

               goto LAB_00102b33;
            }

            puVar3 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
            if (puVar3 == (undefined8*)0x0) {
               uVar6 = 0x171;
               pcVar5 = "Parameter \"mem_new\" is null.";
               goto LAB_00102bb2;
            }

            puVar9 = puVar3 + 2;
            *puVar3 = 1;
            puVar3[1] = 0;
            *(undefined8**)this = puVar9;
            lVar4 = 0;
         }

         memset(puVar9 + lVar4, 0, ( param_1 - lVar4 ) * 8);
         LAB_00102a9b:puVar9[-1] = param_1;
         return;
      }

   }

   uVar6 = 0x16a;
   pcVar5 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_00102bb2:_err_print_error("resize", "./core/templates/cowdata.h", uVar6, pcVar5, 0, 0);
   return;
}
/* ResourcePreloader::_get_resource_list() const */void ResourcePreloader::_get_resource_list(void) {
   long *plVar1;
   CowData<char32_t> *this;
   uint uVar2;
   char *__s;
   long lVar3;
   long *plVar4;
   long lVar5;
   long in_RSI;
   long in_RDI;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   uVar2 = *(uint*)( in_RSI + 0x434 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( in_RDI + 8 ) = 0;
   CowData<String>::resize<false>((CowData<String>*)( in_RDI + 8 ), (ulong)uVar2);
   plVar4 = *(long**)( in_RSI + 0x420 );
   if (plVar4 != (long*)0x0) {
      lVar5 = 0;
      do {
         lVar3 = plVar4[2];
         if (lVar3 == 0) {
            local_60 = 0;
            lVar3 = *(long*)( in_RDI + 8 );
            if (lVar3 == 0) goto LAB_00102d22;
            LAB_00102c93:lVar3 = *(long*)( lVar3 + -8 );
            if (lVar3 <= lVar5) goto LAB_00102d25;
            CowData<String>::_copy_on_write((CowData<String>*)( in_RDI + 8 ));
            this(CowData<char32_t> * )(*(long*)( in_RDI + 8 ) + lVar5 * 8);
            if (*(long*)this != local_60) {
               CowData<char32_t>::_ref(this, (CowData*)&local_60);
            }

         }
 else {
            __s = *(char**)( lVar3 + 8 );
            local_60 = 0;
            if (__s == (char*)0x0) {
               if (*(long*)( lVar3 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(__s);
               local_58 = __s;
               String::parse_latin1((StrRange*)&local_60);
            }

            lVar3 = *(long*)( in_RDI + 8 );
            if (lVar3 != 0) goto LAB_00102c93;
            LAB_00102d22:lVar3 = 0;
            LAB_00102d25:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar5, lVar3, "p_index", "size()", "", false, false);
         }

         lVar3 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         plVar4 = (long*)*plVar4;
         lVar5 = lVar5 + 1;
      }
 while ( plVar4 != (long*)0x0 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourcePreloader::_get_resources() const */Array *ResourcePreloader::_get_resources(void) {
   CowData<char32_t> *this;
   uint uVar1;
   char *__s;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   code *pcVar10;
   char cVar11;
   uint uVar12;
   Element *pEVar13;
   Element *pEVar14;
   Variant *pVVar15;
   Element *pEVar16;
   uint uVar17;
   Element *pEVar18;
   long lVar19;
   long in_RSI;
   int iVar20;
   uint uVar21;
   Array *in_RDI;
   long lVar22;
   ulong uVar23;
   uint uVar24;
   long lVar25;
   long *plVar26;
   long in_FS_OFFSET;
   bool bVar27;
   Array local_a8[8];
   long local_a0;
   Vector local_98[8];
   long local_90;
   char *local_88;
   size_t local_80;
   Element *local_78;
   Element *local_70;
   int local_68;
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_90 = 0;
   Array::Array(local_a8);
   iVar20 = (int)local_a8;
   Array::resize(iVar20);
   CowData<String>::resize<false>((CowData<String>*)&local_90, ( ulong ) * (uint*)( in_RSI + 0x434 ));
   plVar26 = *(long**)( in_RSI + 0x420 );
   local_78 = (Element*)0x0;
   local_68 = 0;
   local_70 = (Element*)&_GlobalNilClass::_nil;
   if (plVar26 != (long*)0x0) {
      do {
         lVar25 = plVar26[2];
         if (lVar25 == 0) {
            local_a0 = 0;
            if (local_78 != (Element*)0x0) goto LAB_00102ec0;
            LAB_00103497:local_78 = (Element*)operator_new(0x38, DefaultAllocator::alloc);
            *(undefined1(*) [16])( local_78 + 0x20 ) = (undefined1[16])0x0;
            *(undefined8*)( local_78 + 0x30 ) = 0;
            *(undefined4*)local_78 = 1;
            for (int i = 0; i < 3; i++) {
               *(Element**)( local_78 + ( 8*i + 8 ) ) = local_70;
            }

            pEVar18 = local_78;
         }
 else {
            __s = *(char**)( lVar25 + 8 );
            local_a0 = 0;
            if (__s == (char*)0x0) {
               if (*(long*)( lVar25 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)( lVar25 + 0x10 ));
               }

            }
 else {
               local_80 = strlen(__s);
               local_88 = __s;
               String::parse_latin1((StrRange*)&local_a0);
            }

            if (local_78 == (Element*)0x0) goto LAB_00103497;
            LAB_00102ec0:pEVar18 = local_78;
            pEVar13 = *(Element**)( local_78 + 0x10 );
            if (*(Element**)( local_78 + 0x10 ) != local_70) {
               do {
                  while (true) {
                     cVar11 = String::operator <((String*)&local_a0, (String*)( pEVar13 + 0x30 ));
                     pEVar18 = pEVar13;
                     if (cVar11 != '\0') break;
                     cVar11 = String::operator <((String*)( pEVar13 + 0x30 ), (String*)&local_a0);
                     if (cVar11 == '\0') goto LAB_00102ffb;
                     pEVar16 = pEVar13 + 8;
                     pEVar13 = *(Element**)pEVar16;
                     if (*(Element**)pEVar16 == local_70) goto LAB_00102f12;
                  }
;
                  pEVar16 = pEVar13 + 0x10;
                  pEVar13 = *(Element**)pEVar16;
               }
 while ( *(Element**)pEVar16 != local_70 );
            }

         }

         LAB_00102f12:pEVar13 = (Element*)operator_new(0x38, DefaultAllocator::alloc);
         *(undefined1(*) [16])( pEVar13 + 0x20 ) = (undefined1[16])0x0;
         *(undefined4*)pEVar13 = 0;
         *(undefined8*)( pEVar13 + 0x30 ) = 0;
         *(Element**)( pEVar13 + 0x18 ) = pEVar18;
         *(Element**)( pEVar13 + 8 ) = local_70;
         *(Element**)( pEVar13 + 0x10 ) = local_70;
         if (local_a0 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( pEVar13 + 0x30 ), (CowData*)&local_a0);
         }

         if (( pEVar18 == local_78 ) || ( cVar11 = String::operator <((String*)&local_a0, (String*)( pEVar18 + 0x30 )) ),cVar11 != '\0') {
            *(Element**)( pEVar18 + 0x10 ) = pEVar13;
         }
 else {
            *(Element**)( pEVar18 + 8 ) = pEVar13;
         }

         pEVar18 = *(Element**)( pEVar13 + 8 );
         pEVar16 = pEVar13;
         if (local_70 == pEVar18) {
            do {
               pEVar14 = *(Element**)( pEVar16 + 0x18 );
               bVar27 = pEVar16 == *(Element**)( pEVar14 + 8 );
               pEVar16 = pEVar14;
            }
 while ( bVar27 );
            if (local_78 == pEVar14) {
               pEVar14 = (Element*)0x0;
            }

         }
 else {
            do {
               pEVar16 = pEVar18 + 0x10;
               pEVar14 = pEVar18;
               pEVar18 = *(Element**)pEVar16;
            }
 while ( local_70 != *(Element**)pEVar16 );
         }

         *(Element**)( pEVar13 + 0x20 ) = pEVar14;
         pEVar16 = *(Element**)( pEVar13 + 0x10 );
         pEVar18 = pEVar13;
         if (local_70 == *(Element**)( pEVar13 + 0x10 )) {
            do {
               pEVar16 = pEVar18;
               pEVar18 = *(Element**)( pEVar16 + 0x18 );
            }
 while ( pEVar16 == *(Element**)( pEVar18 + 0x10 ) );
            if (local_78 != pEVar16) goto LAB_00102fcc;
            *(undefined8*)( pEVar13 + 0x28 ) = 0;
            if (pEVar14 != (Element*)0x0) goto LAB_00102fd5;
         }
 else {
            do {
               pEVar18 = pEVar16;
               pEVar16 = *(Element**)( pEVar18 + 8 );
            }
 while ( local_70 != *(Element**)( pEVar18 + 8 ) );
            LAB_00102fcc:*(Element**)( pEVar13 + 0x28 ) = pEVar18;
            if (pEVar14 != (Element*)0x0) {
               LAB_00102fd5:*(Element**)( pEVar14 + 0x28 ) = pEVar13;
               pEVar18 = *(Element**)( pEVar13 + 0x28 );
               if (pEVar18 == (Element*)0x0) goto LAB_00102fe6;
            }

            *(Element**)( pEVar18 + 0x20 ) = pEVar13;
         }

         LAB_00102fe6:local_68 = local_68 + 1;
         RBSet<String,Comparator<String>,DefaultAllocator>::_insert_rb_fix((RBSet<String,Comparator<String>,DefaultAllocator>*)&local_78, pEVar13);
         LAB_00102ffb:CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         plVar26 = (long*)*plVar26;
      }
 while ( plVar26 != (long*)0x0 );
      if (( local_78 != (Element*)0x0 ) && ( pEVar18 = *(Element**)( local_78 + 0x10 ) * (Element**)( local_78 + 0x10 ) != local_70 )) {
         do {
            pEVar13 = pEVar18;
            pEVar18 = *(Element**)( pEVar13 + 0x10 );
         }
 while ( local_70 != *(Element**)( pEVar13 + 0x10 ) );
         lVar25 = 0;
         do {
            if (local_90 == 0) {
               lVar22 = 0;
               LAB_00103526:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar25, lVar22, "p_index", "size()", "", false, false);
            }
 else {
               lVar22 = *(long*)( local_90 + -8 );
               if (lVar22 <= lVar25) goto LAB_00103526;
               CowData<String>::_copy_on_write((CowData<String>*)&local_90);
               this(CowData<char32_t> * )(local_90 + lVar25 * 8);
               if (*(long*)this != *(long*)( pEVar13 + 0x30 )) {
                  CowData<char32_t>::_ref(this, (CowData*)( pEVar13 + 0x30 ));
               }

            }

            StringName::StringName((StringName*)&local_88, (String*)( pEVar13 + 0x30 ), false);
            if (( *(long*)( in_RSI + 0x410 ) == 0 ) || ( *(int*)( in_RSI + 0x434 ) == 0 )) {
               LAB_001033f0:_err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar10 = (code*)invalidInstructionException();
               ( *pcVar10 )();
            }

            uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x430 ) * 4 );
            lVar22 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x430 ) * 8 );
            if (local_88 == (char*)0x0) {
               uVar12 = StringName::get_empty_hash();
            }
 else {
               uVar12 = *(uint*)( local_88 + 0x20 );
            }

            uVar23 = CONCAT44(0, uVar1);
            if (uVar12 == 0) {
               uVar12 = 1;
            }

            auVar2._8_8_ = 0;
            auVar2._0_8_ = (ulong)uVar12 * lVar22;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar23;
            lVar19 = SUB168(auVar2 * auVar6, 8);
            uVar21 = *(uint*)( *(long*)( in_RSI + 0x418 ) + lVar19 * 4 );
            uVar17 = SUB164(auVar2 * auVar6, 8);
            if (uVar21 == 0) goto LAB_001033f0;
            uVar24 = 0;
            while (( uVar12 != uVar21 || ( *(char**)( *(long*)( *(long*)( in_RSI + 0x410 ) + lVar19 * 8 ) + 0x10 ) != local_88 ) )) {
               uVar24 = uVar24 + 1;
               auVar3._8_8_ = 0;
               auVar3._0_8_ = ( ulong )(uVar17 + 1) * lVar22;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = uVar23;
               lVar19 = SUB168(auVar3 * auVar7, 8);
               uVar21 = *(uint*)( *(long*)( in_RSI + 0x418 ) + lVar19 * 4 );
               uVar17 = SUB164(auVar3 * auVar7, 8);
               if (( uVar21 == 0 ) || ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar21 * lVar22,auVar8._8_8_ = 0,auVar8._0_8_ = uVar23,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( uVar1 + uVar17 ) - SUB164(auVar4 * auVar8, 8)) * lVar22,auVar9._8_8_ = 0,auVar9._0_8_ = uVar23,SUB164(auVar5 * auVar9, 8) < uVar24) goto LAB_001033f0;
            }
;
            Variant::Variant((Variant*)local_58, *(Object**)( *(long*)( *(long*)( in_RSI + 0x410 ) + (ulong)uVar17 * 8 ) + 0x18 ));
            pVVar15 = (Variant*)Array::operator [](iVar20);
            if (pVVar15 == (Variant*)local_58) {
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

            }
 else {
               if (Variant::needs_deinit[*(int*)pVVar15] != '\0') {
                  Variant::_clear_internal();
               }

               *(undefined4*)pVVar15 = 0;
               *(int*)pVVar15 = local_58[0];
               *(undefined8*)( pVVar15 + 8 ) = local_50;
               *(undefined8*)( pVVar15 + 0x10 ) = uStack_48;
            }

            if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
               StringName::unref();
            }

            pEVar13 = *(Element**)( pEVar13 + 0x20 );
            lVar25 = lVar25 + 1;
         }
 while ( pEVar13 != (Element*)0x0 );
      }

   }

   Array::Array(in_RDI);
   Variant::Variant((Variant*)local_58, local_98);
   Array::push_back((Variant*)in_RDI);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, local_a8);
   Array::push_back((Variant*)in_RDI);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_78 != (Element*)0x0) {
      pEVar18 = *(Element**)( local_78 + 0x10 );
      if (pEVar18 != local_70) {
         pEVar13 = *(Element**)( pEVar18 + 0x10 );
         if (local_70 != pEVar13) {
            pEVar16 = *(Element**)( pEVar13 + 0x10 );
            if (local_70 != pEVar16) {
               RBSet<String,Comparator<String>,DefaultAllocator>::_cleanup_tree((RBSet<String,Comparator<String>,DefaultAllocator>*)&local_78, pEVar16);
               pEVar16 = local_70;
            }

            if (pEVar16 != *(Element**)( pEVar13 + 8 )) {
               RBSet<String,Comparator<String>,DefaultAllocator>::_cleanup_tree((RBSet<String,Comparator<String>,DefaultAllocator>*)&local_78, *(Element**)( pEVar13 + 8 ));
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar13 + 0x30 ));
            Memory::free_static(pEVar13, false);
            pEVar13 = local_70;
         }

         pEVar16 = *(Element**)( pEVar18 + 8 );
         if (pEVar13 != pEVar16) {
            pEVar14 = *(Element**)( pEVar16 + 0x10 );
            if (pEVar13 != pEVar14) {
               RBSet<String,Comparator<String>,DefaultAllocator>::_cleanup_tree((RBSet<String,Comparator<String>,DefaultAllocator>*)&local_78, pEVar14);
               pEVar14 = local_70;
            }

            if (*(Element**)( pEVar16 + 8 ) != pEVar14) {
               RBSet<String,Comparator<String>,DefaultAllocator>::_cleanup_tree((RBSet<String,Comparator<String>,DefaultAllocator>*)&local_78, *(Element**)( pEVar16 + 8 ));
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar16 + 0x30 ));
            Memory::free_static(pEVar16, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar18 + 0x30 ));
         Memory::free_static(pEVar18, false);
      }

      pEVar18 = local_78;
      *(Element**)( local_78 + 0x10 ) = local_70;
      local_68 = 0;
      CowData<char32_t>::_unref((CowData<char32_t>*)( local_78 + 0x30 ));
      Memory::free_static(pEVar18, false);
   }

   Array::~Array(local_a8);
   CowData<String>::_unref((CowData<String>*)&local_90);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return in_RDI;
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
/* Object::_validate_property(PropertyInfo&) const */void Object::_validate_property(PropertyInfo *param_1) {
   return;
}
/* Object::_notification(int) */void Object::_notification(int param_1) {
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
/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}
/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}
/* ResourcePreloader::is_class_ptr(void*) const */uint ResourcePreloader::is_class_ptr(ResourcePreloader *this, void *param_1) {
   return (uint)CONCAT71(0x10bc, (undefined4*)param_1 == &Node::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10bc, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10bc, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* ResourcePreloader::_getv(StringName const&, Variant&) const */undefined8 ResourcePreloader::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ResourcePreloader::_setv(StringName const&, Variant const&) */undefined8 ResourcePreloader::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ResourcePreloader::_property_can_revertv(StringName const&) const */undefined8 ResourcePreloader::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* ResourcePreloader::_property_get_revertv(StringName const&, Variant&) const */undefined8 ResourcePreloader::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* MethodBindTRC<Vector<String>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector<String>>::_gen_argument_type(int param_1) {
   return 0x22;
}
/* MethodBindTRC<Vector<String>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector<String>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Ref<Resource>, StringName const&>::_gen_argument_type(int) const */int MethodBindTRC<Ref<Resource>,StringName_const&>::_gen_argument_type(MethodBindTRC<Ref<Resource>,StringName_const&> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xfffffffd ) + 0x18;
}
/* MethodBindTRC<Ref<Resource>, StringName const&>::get_argument_meta(int) const */undefined8 MethodBindTRC<Ref<Resource>,StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<bool, StringName const&>::_gen_argument_type(int) const */char MethodBindTRC<bool,StringName_const&>::_gen_argument_type(MethodBindTRC<bool,StringName_const&> *this, int param_1) {
   return ( -(param_1 == 0) & 0x14U ) + 1;
}
/* MethodBindTRC<bool, StringName const&>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool,StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<StringName const&, StringName const&>::_gen_argument_type(int) const */byte MethodBindT<StringName_const&,StringName_const&>::_gen_argument_type(MethodBindT<StringName_const&,StringName_const&> *this, int param_1) {
   return -((uint)param_1 < 2) & 0x15;
}
/* MethodBindT<StringName const&, StringName const&>::get_argument_meta(int) const */undefined8 MethodBindT<StringName_const&,StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<StringName const&>::_gen_argument_type(int) const */byte MethodBindT<StringName_const&>::_gen_argument_type(MethodBindT<StringName_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x15;
}
/* MethodBindT<StringName const&>::get_argument_meta(int) const */undefined8 MethodBindT<StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<StringName const&, Ref<Resource> const&>::_gen_argument_type(int) const */int MethodBindT<StringName_const&,Ref<Resource>const&>::_gen_argument_type(MethodBindT<StringName_const&,Ref<Resource>const&> *this, int param_1) {
   int iVar1;
   iVar1 = 0;
   if ((uint)param_1 < 2) {
      iVar1 = ( -(uint)(param_1 == 0) & 0xfffffffd ) + 0x18;
   }

   return iVar1;
}
/* MethodBindT<StringName const&, Ref<Resource> const&>::get_argument_meta(int) const */undefined8 MethodBindT<StringName_const&,Ref<Resource>const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Array>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Array>::_gen_argument_type(int param_1) {
   return 0x1c;
}
/* MethodBindTRC<Array>::get_argument_meta(int) const */undefined8 MethodBindTRC<Array>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Array const&>::_gen_argument_type(int) const */byte MethodBindT<Array_const&>::_gen_argument_type(MethodBindT<Array_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x1c;
}
/* MethodBindT<Array const&>::get_argument_meta(int) const */undefined8 MethodBindT<Array_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Array const&>::~MethodBindT() */void MethodBindT<Array_const&>::~MethodBindT(MethodBindT<Array_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010b998;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Array const&>::~MethodBindT() */void MethodBindT<Array_const&>::~MethodBindT(MethodBindT<Array_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010b998;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Array>::~MethodBindTRC() */void MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010b9f8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Array>::~MethodBindTRC() */void MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010b9f8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<StringName const&, Ref<Resource> const&>::~MethodBindT() */void MethodBindT<StringName_const&,Ref<Resource>const&>::~MethodBindT(MethodBindT<StringName_const&,Ref<Resource>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ba58;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<StringName const&, Ref<Resource> const&>::~MethodBindT() */void MethodBindT<StringName_const&,Ref<Resource>const&>::~MethodBindT(MethodBindT<StringName_const&,Ref<Resource>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ba58;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010bab8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010bab8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<StringName const&, StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&,StringName_const&>::~MethodBindT(MethodBindT<StringName_const&,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010bb18;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<StringName const&, StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&,StringName_const&>::~MethodBindT(MethodBindT<StringName_const&,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010bb18;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */void MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010bb78;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */void MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010bb78;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<Resource>, StringName const&>::~MethodBindTRC() */void MethodBindTRC<Ref<Resource>,StringName_const&>::~MethodBindTRC(MethodBindTRC<Ref<Resource>,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010bbd8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<Resource>, StringName const&>::~MethodBindTRC() */void MethodBindTRC<Ref<Resource>,StringName_const&>::~MethodBindTRC(MethodBindTRC<Ref<Resource>,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010bbd8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */void MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010bc38;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */void MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010bc38;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* ResourcePreloader::_validate_propertyv(PropertyInfo&) const */void ResourcePreloader::_validate_propertyv(PropertyInfo *param_1) {
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_validate_property) {
      Node::_validate_property(param_1);
      return;
   }

   return;
}
/* ResourcePreloader::_notificationv(int, bool) */void ResourcePreloader::_notificationv(ResourcePreloader *this, int param_1, bool param_2) {
   if (param_2) {
      if ((code*)PTR__notification_0010f008 == Object::_notification) {
         return;
      }

   }
 else if ((code*)PTR__notification_0010f008 == Object::_notification) {
      return;
   }

   Node::_notification((int)this);
   return;
}
/* ResourcePreloader::~ResourcePreloader() */void ResourcePreloader::~ResourcePreloader(ResourcePreloader *this) {
   uint uVar1;
   Object *pOVar2;
   char cVar3;
   long lVar4;
   void *pvVar5;
   *(undefined***)this = &PTR__initialize_classv_0010b7d0;
   pvVar5 = *(void**)( this + 0x410 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x434 ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x430 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x434 ) = 0;
            *(undefined1(*) [16])( this + 0x420 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x418 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x418 ) + lVar4 ) = 0;
                  if (*(long*)( (long)pvVar5 + 0x18 ) != 0) {
                     cVar3 = RefCounted::unreference();
                     if (cVar3 != '\0') {
                        pOVar2 = *(Object**)( (long)pvVar5 + 0x18 );
                        cVar3 = predelete_handler(pOVar2);
                        if (cVar3 != '\0') {
                           ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                           Memory::free_static(pOVar2, false);
                        }

                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( this + 0x410 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x434 ) = 0;
            *(undefined1(*) [16])( this + 0x420 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_00103bfc;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x418 ), false);
   }

   LAB_00103bfc:Node::~Node((Node*)this);
   return;
}
/* ResourcePreloader::~ResourcePreloader() */void ResourcePreloader::~ResourcePreloader(ResourcePreloader *this) {
   uint uVar1;
   Object *pOVar2;
   char cVar3;
   long lVar4;
   void *pvVar5;
   *(undefined***)this = &PTR__initialize_classv_0010b7d0;
   pvVar5 = *(void**)( this + 0x410 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x434 ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x430 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x434 ) = 0;
            *(undefined1(*) [16])( this + 0x420 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x418 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x418 ) + lVar4 ) = 0;
                  if (*(long*)( (long)pvVar5 + 0x18 ) != 0) {
                     cVar3 = RefCounted::unreference();
                     if (cVar3 != '\0') {
                        pOVar2 = *(Object**)( (long)pvVar5 + 0x18 );
                        cVar3 = predelete_handler(pOVar2);
                        if (cVar3 != '\0') {
                           ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                           Memory::free_static(pOVar2, false);
                        }

                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( this + 0x410 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x434 ) = 0;
            *(undefined1(*) [16])( this + 0x420 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_00103d6c;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x418 ), false);
   }

   LAB_00103d6c:Node::~Node((Node*)this);
   operator_delete(this, 0x438);
   return;
}
/* ResourcePreloader::_get_class_namev() const */undefined8 *ResourcePreloader::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103e43:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103e43;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourcePreloader");
         goto LAB_00103eae;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourcePreloader");
   LAB_00103eae:return &_get_class_namev();
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
/* ResourcePreloader::get_class() const */void ResourcePreloader::get_class(void) {
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
/* MethodBindTRC<Vector<String>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Vector<String>>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC3;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar1 = 0x22;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar1[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_58);
      puVar1[10] = 6;
      if (puVar1[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar1 + 8 ), false);
         if (*(undefined**)( puVar1 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar1 + 4 ) = local_48;
         }

         goto LAB_00104155;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_00104155:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Array>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Array>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC3;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar1 = 0x1c;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar1[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_58);
      puVar1[10] = 6;
      if (puVar1[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar1 + 8 ), false);
         if (*(undefined**)( puVar1 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar1 + 4 ) = local_48;
         }

         goto LAB_001042b5;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_001042b5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourcePreloader::is_class(String const&) const */undefined8 ResourcePreloader::is_class(ResourcePreloader *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   char cVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010442b;
   }

   cVar5 = String::operator ==(param_1, "ResourcePreloader");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_0010442b;
      }

      cVar5 = String::operator ==(param_1, "Node");
      if (cVar5 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar4 = *(long*)( lVar2 + 0x20 );
            if (lVar4 == 0) {
               local_60 = 0;
            }
 else {
               pcVar3 = *(char**)( lVar4 + 8 );
               local_60 = 0;
               if (pcVar3 == (char*)0x0) {
                  if (*(long*)( lVar4 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
                  }

               }
 else {
                  local_50 = strlen(pcVar3);
                  local_58 = pcVar3;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            cVar5 = String::operator ==(param_1, (String*)&local_60);
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

            if (cVar5 != '\0') goto LAB_0010442b;
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = String::operator ==(param_1, "Object");
            return uVar6;
         }

         goto LAB_00104610;
      }

   }

   LAB_0010442b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00104610:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node::_get_property_listv(List *param_1, bool param_2) {
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   undefined *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = &_LC4;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC4;
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
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0010477c;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010477c:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Node", false);
   ClassDB::get_property_list((StringName*)&local_78, (List*)CONCAT71(in_register_00000031, param_2), true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ResourcePreloader::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ResourcePreloader::_get_property_listv(ResourcePreloader *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Node::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "ResourcePreloader";
   local_70 = 0x11;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "ResourcePreloader";
   local_98 = 0;
   local_70 = 0x11;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_001049e1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001049e1:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "ResourcePreloader", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Node::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Array const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Array_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
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
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00104b69;
   local_78 = 0;
   local_68 = &_LC3;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x1c);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00104c65:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00104c65;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   LAB_00104b69:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* HashMap<StringName, Ref<Resource>, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Ref<Resource> > > >::_lookup_pos(StringName
   const&, unsigned int&) const */undefined8 HashMap<StringName,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<Resource>>>>::_lookup_pos(HashMap<StringName,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<Resource>>>> *this, StringName *param_1, uint *param_2) {
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
   uint uVar11;
   uint uVar12;
   long lVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (*(long*)( this + 8 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar15 = CONCAT44(0, uVar1);
      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
      uVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               *param_2 = uVar12;
               return 1;
            }

            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
            uVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, Ref<Resource>, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Ref<Resource> > > >::operator[](StringName
   const&) */undefined8 * __thiscallHashMap<StringName,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<Resource>>>>::operator [](HashMap<StringName,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<Resource>>>> * this, StringName * param_1) * puVar1 ;undefined8 *puVar2uint uVar3uint uVar4void *pvVar5void *__slong lVar6undefined8 *puVar7Object *pOVar8undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]char cVar25uint uVar26uint uVar27ulong uVar28undefined8 uVar29void *__s_00undefined8 *puVar30long lVar31void *pvVar32int iVar33long lVar34long lVar35ulong uVar36undefined8 uVar37uint uVar38uint uVar39ulong uVar40undefined8 *puVar41long in_FS_OFFSETuint local_70uint local_6cundefined1 local_68[16]long local_58Object *local_50long local_40local_40 = *(long*)( in_FS_OFFSET + 0x28 );local_70 = 0;cVar25 = _lookup_pos(this, param_1, &local_70);if (cVar25 != '\0') {
   puVar30 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)local_70 * 8 );
   goto LAB_0010575b;
}
uVar27 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );if (*(long*)( this + 8 ) == 0) {
   uVar36 = (ulong)uVar27;
   uVar28 = uVar36 * 4;
   uVar40 = uVar36 * 8;
   uVar29 = Memory::alloc_static(uVar28, false);
   *(undefined8*)( this + 0x10 ) = uVar29;
   pvVar32 = (void*)Memory::alloc_static(uVar40, false);
   *(void**)( this + 8 ) = pvVar32;
   if (uVar27 != 0) {
      pvVar5 = *(void**)( this + 0x10 );
      if (( pvVar5 < (void*)( (long)pvVar32 + uVar40 ) ) && ( pvVar32 < (void*)( (long)pvVar5 + uVar28 ) )) {
         uVar28 = 0;
         do {
            *(undefined4*)( (long)pvVar5 + uVar28 * 4 ) = 0;
            *(undefined8*)( (long)pvVar32 + uVar28 * 8 ) = 0;
            uVar28 = uVar28 + 1;
         }
 while ( uVar36 != uVar28 );
      }
 else {
         memset(pvVar5, 0, uVar28);
         memset(pvVar32, 0, uVar40);
      }

   }

}
local_6c = 0;cVar25 = _lookup_pos(this, param_1, &local_6c);if (cVar25 != '\0') {
   uVar28 = (ulong)local_6c;
   puVar30 = *(undefined8**)( *(long*)( this + 8 ) + uVar28 * 8 );
   pOVar8 = (Object*)puVar30[3];
   if (pOVar8 != (Object*)0x0) {
      puVar30[3] = 0;
      cVar25 = RefCounted::unreference();
      if (( cVar25 != '\0' ) && ( cVar25 = cVar25 != '\0' )) {
         ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
         Memory::free_static(pOVar8, false);
      }

      puVar30 = *(undefined8**)( *(long*)( this + 8 ) + uVar28 * 8 );
   }

   goto LAB_0010575b;
}
if ((float)uVar27 * __LC12 < (float)( *(int*)( this + 0x2c ) + 1 )) {
   uVar27 = *(uint*)( this + 0x28 );
   if (uVar27 == 0x1c) {
      puVar30 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0010575b;
   }

   uVar28 = ( ulong )(uVar27 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar3 = *(uint*)( hash_table_size_primes + (ulong)uVar27 * 4 );
   if (uVar27 + 1 < 2) {
      uVar28 = 2;
   }

   uVar27 = *(uint*)( hash_table_size_primes + uVar28 * 4 );
   uVar36 = (ulong)uVar27;
   *(int*)( this + 0x28 ) = (int)uVar28;
   pvVar32 = *(void**)( this + 8 );
   uVar28 = uVar36 * 4;
   uVar40 = uVar36 * 8;
   pvVar5 = *(void**)( this + 0x10 );
   uVar29 = Memory::alloc_static(uVar28, false);
   *(undefined8*)( this + 0x10 ) = uVar29;
   __s_00 = (void*)Memory::alloc_static(uVar40, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar27 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar40 ) ) && ( __s_00 < (void*)( (long)__s + uVar28 ) )) {
         uVar28 = 0;
         do {
            *(undefined4*)( (long)__s + uVar28 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar28 * 8 ) = 0;
            uVar28 = uVar28 + 1;
         }
 while ( uVar28 != uVar36 );
      }
 else {
         memset(__s, 0, uVar28);
         memset(__s_00, 0, uVar40);
      }

   }

   if (uVar3 != 0) {
      uVar28 = 0;
      do {
         uVar27 = *(uint*)( (long)pvVar5 + uVar28 * 4 );
         if (uVar27 != 0) {
            lVar31 = *(long*)( this + 0x10 );
            uVar38 = 0;
            uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar40 = CONCAT44(0, uVar4);
            lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar27 * lVar6;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar40;
            lVar34 = SUB168(auVar9 * auVar17, 8);
            puVar1 = (uint*)( lVar31 + lVar34 * 4 );
            iVar33 = SUB164(auVar9 * auVar17, 8);
            uVar39 = *puVar1;
            uVar29 = *(undefined8*)( (long)pvVar32 + uVar28 * 8 );
            while (uVar39 != 0) {
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar39 * lVar6;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = uVar40;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(( uVar4 + iVar33 ) - SUB164(auVar10 * auVar18, 8)) * lVar6;
               auVar19._8_8_ = 0;
               auVar19._0_8_ = uVar40;
               uVar26 = SUB164(auVar11 * auVar19, 8);
               uVar37 = uVar29;
               if (uVar26 < uVar38) {
                  *puVar1 = uVar27;
                  puVar30 = (undefined8*)( (long)__s_00 + lVar34 * 8 );
                  uVar37 = *puVar30;
                  *puVar30 = uVar29;
                  uVar27 = uVar39;
                  uVar38 = uVar26;
               }

               uVar38 = uVar38 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(iVar33 + 1) * lVar6;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = uVar40;
               lVar34 = SUB168(auVar12 * auVar20, 8);
               puVar1 = (uint*)( lVar31 + lVar34 * 4 );
               iVar33 = SUB164(auVar12 * auVar20, 8);
               uVar29 = uVar37;
               uVar39 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar34 * 8 ) = uVar29;
            *puVar1 = uVar27;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar28 = uVar28 + 1;
      }
 while ( uVar3 != uVar28 );
      Memory::free_static(pvVar32, false);
      Memory::free_static(pvVar5, false);
   }

}
local_68 = (undefined1[16])0x0;StringName::StringName((StringName*)&local_58, param_1);local_50 = (Object*)0x0;puVar30 = (undefined8*)operator_new(0x20, "");*puVar30 = local_68._0_8_;puVar30[1] = local_68._8_8_;StringName::StringName((StringName*)( puVar30 + 2 ), (StringName*)&local_58);puVar30[3] = 0;if (local_50 != (Object*)0x0) {
   puVar30[3] = local_50;
   cVar25 = RefCounted::reference();
   if (cVar25 == '\0') {
      puVar30[3] = 0;
   }

   if (( ( local_50 != (Object*)0x0 ) && ( cVar25 = RefCounted::unreference() ),pOVar8 = local_50,cVar25 != '\0' )) &&( cVar25 = cVar25 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);
   Memory::free_static(pOVar8, false);
}
}if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
   StringName::unref();
}
puVar7 = *(undefined8**)( this + 0x20 );if (puVar7 == (undefined8*)0x0) {
   lVar31 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar30;
   *(undefined8**)( this + 0x20 ) = puVar30;
   if (lVar31 == 0) goto LAB_0010580d;
   LAB_00105668:uVar27 = *(uint*)( lVar31 + 0x20 );
}
 else {
   *puVar7 = puVar30;
   puVar30[1] = puVar7;
   lVar31 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar30;
   if (lVar31 != 0) goto LAB_00105668;
   LAB_0010580d:uVar27 = StringName::get_empty_hash();
}
if (uVar27 == 0) {
   uVar27 = 1;
}
uVar28 = (ulong)uVar27;lVar31 = *(long*)( this + 0x10 );uVar39 = 0;lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar3);auVar13._8_8_ = 0;auVar13._0_8_ = uVar28 * lVar6;auVar21._8_8_ = 0;auVar21._0_8_ = uVar40;lVar35 = SUB168(auVar13 * auVar21, 8);lVar34 = *(long*)( this + 8 );puVar1 = (uint*)( lVar31 + lVar35 * 4 );iVar33 = SUB164(auVar13 * auVar21, 8);uVar4 = *puVar1;puVar7 = puVar30;while (uVar4 != 0) {
   auVar14._8_8_ = 0;
   auVar14._0_8_ = (ulong)uVar4 * lVar6;
   auVar22._8_8_ = 0;
   auVar22._0_8_ = uVar40;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(( iVar33 + uVar3 ) - SUB164(auVar14 * auVar22, 8)) * lVar6;
   auVar23._8_8_ = 0;
   auVar23._0_8_ = uVar40;
   uVar27 = SUB164(auVar15 * auVar23, 8);
   puVar41 = puVar7;
   if (uVar27 < uVar39) {
      *puVar1 = (uint)uVar28;
      uVar28 = (ulong)uVar4;
      puVar2 = (undefined8*)( lVar34 + lVar35 * 8 );
      puVar41 = (undefined8*)*puVar2;
      *puVar2 = puVar7;
      uVar39 = uVar27;
   }

   uVar27 = (uint)uVar28;
   uVar39 = uVar39 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(iVar33 + 1) * lVar6;
   auVar24._8_8_ = 0;
   auVar24._0_8_ = uVar40;
   lVar35 = SUB168(auVar16 * auVar24, 8);
   puVar1 = (uint*)( lVar31 + lVar35 * 4 );
   iVar33 = SUB164(auVar16 * auVar24, 8);
   puVar7 = puVar41;
   uVar4 = *puVar1;
}
;*(undefined8**)( lVar34 + lVar35 * 8 ) = puVar7;*puVar1 = uVar27;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0010575b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return puVar30 + 3;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* MethodBind* create_method_bind<ResourcePreloader, Array const&>(void (ResourcePreloader::*)(Array
   const&)) */MethodBind *create_method_bind<ResourcePreloader,Array_const&>(_func_void_Array_ptr *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_Array_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010b998;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "ResourcePreloader";
   local_30 = 0x11;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<ResourcePreloader, Array>(Array (ResourcePreloader::*)() const) */MethodBind *create_method_bind<ResourcePreloader,Array>(_func_Array *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Array**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010b9f8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "ResourcePreloader";
   local_30 = 0x11;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<ResourcePreloader, StringName const&, Ref<Resource> const&>(void
   (ResourcePreloader::*)(StringName const&, Ref<Resource> const&)) */MethodBind *create_method_bind<ResourcePreloader,StringName_const&,Ref<Resource>const&>(_func_void_StringName_ptr_Ref_ptr *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_StringName_ptr_Ref_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010ba58;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "ResourcePreloader";
   local_30 = 0x11;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<ResourcePreloader, StringName const&>(void
   (ResourcePreloader::*)(StringName const&)) */MethodBind *create_method_bind<ResourcePreloader,StringName_const&>(_func_void_StringName_ptr *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010bab8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "ResourcePreloader";
   local_30 = 0x11;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<ResourcePreloader, StringName const&, StringName const&>(void
   (ResourcePreloader::*)(StringName const&, StringName const&)) */MethodBind *create_method_bind<ResourcePreloader,StringName_const&,StringName_const&>(_func_void_StringName_ptr_StringName_ptr *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_StringName_ptr_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010bb18;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "ResourcePreloader";
   local_30 = 0x11;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<ResourcePreloader, bool, StringName const&>(bool
   (ResourcePreloader::*)(StringName const&) const) */MethodBind *create_method_bind<ResourcePreloader,bool,StringName_const&>(_func_bool_StringName_ptr *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_bool_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010bb78;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "ResourcePreloader";
   local_30 = 0x11;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<ResourcePreloader, Ref<Resource>, StringName const&>(Ref<Resource>
   (ResourcePreloader::*)(StringName const&) const) */MethodBind *create_method_bind<ResourcePreloader,Ref<Resource>,StringName_const&>(_func_Ref_StringName_ptr *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Ref_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010bbd8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "ResourcePreloader";
   local_30 = 0x11;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<ResourcePreloader, Vector<String>>(Vector<String>
   (ResourcePreloader::*)() const) */MethodBind *create_method_bind<ResourcePreloader,Vector<String>>(_func_Vector *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Vector**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010bc38;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "ResourcePreloader";
   local_30 = 0x11;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourcePreloader::_bind_methods() [clone .cold] */void ResourcePreloader::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<String>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<String>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
void FUN_0010622a(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* ResourcePreloader::_initialize_classv() */void ResourcePreloader::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (Node::initialize_class() == '\0') {
         Object::initialize_class();
         local_58 = 0;
         local_40 = 6;
         local_48 = "Object";
         String::parse_latin1((StrRange*)&local_58);
         StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
         local_48 = "Node";
         local_60 = 0;
         local_40 = 4;
         String::parse_latin1((StrRange*)&local_60);
         StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
         ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if ((code*)PTR__bind_methods_0010f010 != Object::_bind_methods) {
            Node::_bind_methods();
         }

         Node::initialize_class()::initialized =
         '\x01';
      }

      local_48 = "Node";
      local_58 = 0;
      local_40 = 4;
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "ResourcePreloader";
      local_60 = 0;
      local_40 = 0x11;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      _bind_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<String>::_unref() */void CowData<String>::_unref(CowData<String> *this) {
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
            }
 while ( lVar3 != lVar7 );
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
/* CowData<String>::_realloc(long) */undefined8 CowData<String>::_realloc(CowData<String> *this, long param_1) {
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
/* RBSet<String, Comparator<String>, DefaultAllocator>::_insert_rb_fix(RBSet<String,
   Comparator<String>, DefaultAllocator>::Element*) */void RBSet<String,Comparator<String>,DefaultAllocator>::_insert_rb_fix(RBSet<String,Comparator<String>,DefaultAllocator> *this, Element *param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   iVar1 = *(int*)*(Element**)( param_1 + 0x18 );
   pEVar7 = *(Element**)( param_1 + 0x18 );
   do {
      while (true) {
         pEVar8 = pEVar7;
         if (iVar1 != 0) {
            **(undefined4**)( *(long*)this + 0x10 ) = 1;
            return;
         }

         pEVar5 = *(Element**)( pEVar8 + 0x18 );
         pEVar6 = *(Element**)( pEVar5 + 0x10 );
         pEVar7 = pEVar8;
         if (pEVar6 == pEVar8) break;
         if (*(int*)pEVar6 == 0) goto LAB_0010669d;
         if (*(Element**)( pEVar8 + 0x10 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 8 );
            *(long*)( pEVar8 + 0x10 ) = lVar3;
            pEVar7 = pEVar5;
            if (lVar2 != lVar3) {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
            }

            *(Element**)( param_1 + 0x18 ) = pEVar7;
            if (pEVar8 == *(Element**)( pEVar7 + 8 )) {
               *(Element**)( pEVar7 + 8 ) = param_1;
            }
 else {
               *(Element**)( pEVar7 + 0x10 ) = param_1;
            }

            *(Element**)( param_1 + 8 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_001067c0;
            LAB_00106646:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_00106646;
            LAB_001067c0:_err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }

         lVar2 = *(long*)( pEVar5 + 8 );
         lVar3 = *(long*)( this + 8 );
         lVar4 = *(long*)( lVar2 + 0x10 );
         *(long*)( pEVar5 + 8 ) = lVar4;
         if (lVar3 != lVar4) {
            *(Element**)( lVar4 + 0x18 ) = pEVar5;
         }

         lVar3 = *(long*)( pEVar5 + 0x18 );
         *(long*)( lVar2 + 0x18 ) = lVar3;
         if (pEVar5 == *(Element**)( lVar3 + 0x10 )) {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }
 else {
            *(long*)( lVar3 + 8 ) = lVar2;
         }

         *(Element**)( lVar2 + 0x10 ) = pEVar5;
         *(long*)( pEVar5 + 0x18 ) = lVar2;
         LAB_00106683:iVar1 = *(int*)pEVar7;
         param_1 = pEVar8;
      }
;
      pEVar6 = *(Element**)( pEVar5 + 8 );
      if (*(int*)pEVar6 != 0) {
         if (*(Element**)( pEVar8 + 8 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 0x10 );
            *(long*)( pEVar8 + 8 ) = lVar3;
            if (lVar2 == lVar3) {
               *(Element**)( param_1 + 0x18 ) = pEVar5;
               pEVar7 = pEVar5;
               LAB_001068b2:*(Element**)( pEVar7 + 0x10 ) = param_1;
            }
 else {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
               *(Element**)( param_1 + 0x18 ) = pEVar7;
               if (pEVar8 == *(Element**)( pEVar7 + 0x10 )) goto LAB_001068b2;
               *(Element**)( pEVar7 + 8 ) = param_1;
            }

            *(Element**)( param_1 + 0x10 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_00106880;
            LAB_00106710:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_00106710;
            LAB_00106880:_err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }

         lVar2 = *(long*)( pEVar5 + 0x10 );
         lVar3 = *(long*)( this + 8 );
         lVar4 = *(long*)( lVar2 + 8 );
         *(long*)( pEVar5 + 0x10 ) = lVar4;
         if (lVar3 != lVar4) {
            *(Element**)( lVar4 + 0x18 ) = pEVar5;
         }

         lVar3 = *(long*)( pEVar5 + 0x18 );
         *(long*)( lVar2 + 0x18 ) = lVar3;
         if (pEVar5 == *(Element**)( lVar3 + 8 )) {
            *(long*)( lVar3 + 8 ) = lVar2;
         }
 else {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }

         *(Element**)( lVar2 + 8 ) = pEVar5;
         *(long*)( pEVar5 + 0x18 ) = lVar2;
         goto LAB_00106683;
      }

      LAB_0010669d:pEVar7 = *(Element**)( this + 8 );
      *(int*)pEVar8 = 1;
      *(int*)pEVar6 = 1;
      if (pEVar5 == pEVar7) {
         _err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
      }
 else {
         *(int*)pEVar5 = 0;
      }

      iVar1 = *(int*)*(Element**)( pEVar5 + 0x18 );
      pEVar7 = *(Element**)( pEVar5 + 0x18 );
      param_1 = pEVar5;
   }
 while ( true );
}
/* WARNING: Removing unreachable block (ram,0x00106a68) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c0[8];
   undefined8 local_b8[8];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c0);
   iVar2 = (int)local_c0;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_b8, param_2);
   *param_1 = local_b8[0];
   local_b8[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   Array::~Array(local_c0);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<Vector<String>>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Vector<String>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   long *plVar4;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }

      }
 else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC61, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00106da0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar2 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar2 & 1 ) != 0) {
            pVVar2 = *(Variant**)( pVVar2 + *(long*)( (long)plVar4 + (long)pVVar1 ) + -1 );
         }

         ( *(code*)pVVar2 )(&local_58);
         Variant::Variant((Variant*)local_48, (Vector*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         CowData<String>::_unref((CowData<String>*)&local_50);
      }
 else {
         *in_R9 = 4;
         in_R9[2] = 0;
      }

   }
 else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }

   LAB_00106da0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector<String>>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Vector<String>>::validated_call(MethodBindTRC<Vector<String>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Variant **local_48;
   long local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Variant**)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Variant**)0x106be8;
         local_40[0] = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00107077;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
   }

   ( *pcVar1 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (*(long*)( *(long*)( param_3 + 8 ) + 0x18 ) != local_40[0]) {
      CowData<String>::_ref((CowData<String>*)( *(long*)( param_3 + 8 ) + 0x18 ), (CowData*)local_40);
   }

   CowData<String>::_unref((CowData<String>*)local_40);
   LAB_00107077:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector<String>>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Vector<String>>::ptrcall(MethodBindTRC<Vector<String>> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   void **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   void **local_48;
   long local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (void**)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (void**)0x106be8;
         local_40[0] = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00107253;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
   }

   ( *pcVar1 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (*(long*)( (long)param_3 + 8 ) != local_40[0]) {
      CowData<String>::_ref((CowData<String>*)( (long)param_3 + 8 ), (CowData*)local_40);
   }

   CowData<String>::_unref((CowData<String>*)local_40);
   LAB_00107253:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, StringName const&>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindTRC<bool,StringName_const&>::validated_call(MethodBindTRC<bool,StringName_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Variant VVar1;
   code *pcVar2;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001073f9;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   VVar1 = ( Variant )(*pcVar2)(param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
   param_3[8] = VVar1;
   LAB_001073f9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, StringName const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<bool,StringName_const&>::ptrcall(MethodBindTRC<bool,StringName_const&> *this, Object *param_1, void **param_2, void *param_3) {
   undefined1 uVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001075d5;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2);
   *(undefined1*)param_3 = uVar1;
   LAB_001075d5:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<StringName const&, StringName const&>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindT<StringName_const&,StringName_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

      }
 else {
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

         goto LAB_0010791f;
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
      /* WARNING: Could not recover jumptable at 0x001077ca. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8, *(long*)( param_3 + 8 ) + 8);
      return;
   }

   LAB_0010791f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<StringName const&, StringName const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<StringName_const&,StringName_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

      }
 else {
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

         goto LAB_00107b09;
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
      /* WARNING: Load size is inaccurate */
      /* WARNING: Could not recover jumptable at 0x00107990. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3, *(undefined8*)( (long)param_3 + 8 ));
      return;
   }

   LAB_00107b09:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<StringName const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<StringName_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
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

         goto LAB_00107ce1;
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
      /* WARNING: Could not recover jumptable at 0x00107b6d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_00107ce1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<StringName const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<StringName_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

      }
 else {
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

         goto LAB_00107ec1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00107d49. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_00107ec1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<Array>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Array>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   long *plVar4;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }

      }
 else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC61, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00107fa0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar2 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar2 & 1 ) != 0) {
            pVVar2 = *(Variant**)( pVVar2 + *(long*)( (long)plVar4 + (long)pVVar1 ) + -1 );
         }

         ( *(code*)pVVar2 )((Array*)&local_58);
         Variant::Variant((Variant*)local_48, (Array*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         Array::~Array((Array*)&local_58);
      }
 else {
         *in_R9 = 4;
         in_R9[2] = 0;
      }

   }
 else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }

   LAB_00107fa0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Array>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Array>::validated_call(MethodBindTRC<Array> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Variant **local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Variant**)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Variant**)0x106be8;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001081c9;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
   }

   ( *pcVar1 )((Array*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   Array::operator =((Array*)( param_3 + 8 ), (Array*)&local_48);
   Array::~Array((Array*)&local_48);
   LAB_001081c9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Array>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Array>::ptrcall(MethodBindTRC<Array> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   void **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   void **local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (void**)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (void**)0x106be8;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010839a;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
   }

   ( *pcVar1 )((Array*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   Array::operator =((Array*)param_3, (Array*)&local_48);
   Array::~Array((Array*)&local_48);
   LAB_0010839a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Array const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Array_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
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

         goto LAB_001086e1;
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
      /* WARNING: Could not recover jumptable at 0x0010856d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_001086e1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Array const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Array_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

      }
 else {
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

         goto LAB_001088c1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00108749. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_001088c1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<Ref<Resource>, StringName const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Ref<Resource>,StringName_const&>::ptrcall(MethodBindTRC<Ref<Resource>,StringName_const&> *this, Object *param_1, void **param_2, void *param_3) {
   char cVar1;
   code *pcVar2;
   Object *pOVar3;
   long *plVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x106be8;
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00108987;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2);
   if (local_48 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 == (Object*)0x0) goto LAB_00108987;
      *(undefined8*)param_3 = 0;
      goto LAB_001089d1;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_001089d1;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_001089d1:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Object*)0x0) goto LAB_00108987;
      }

   }

   cVar1 = RefCounted::unreference();
   pOVar5 = local_48;
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_48);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
         Memory::free_static(pOVar5, false);
      }

   }

   LAB_00108987:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<StringName const&, Ref<Resource> const&>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindT<StringName_const&,Ref<Resource>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   Object *pOVar4;
   Variant *pVVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   Object *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar5 = param_2[0x23];
         if (pVVar5 == (Variant*)0x0) {
            pVVar5 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar5 = param_2[1] + 0x20;
      }

      if (local_68 == (Object*)*(long*)pVVar5) {
         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = (Object*)0x106be8;
         local_60 = 0x35;
         local_70 = 0;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00108cba;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar6 = *(code**)( param_1 + 0x58 );
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar6 & 1 ) != 0) {
      pcVar6 = *(code**)( pcVar6 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   Variant::Variant((Variant*)local_58, *(Object**)( *(long*)( param_3 + 8 ) + 0x10 ));
   local_68 = (Object*)0x0;
   pOVar4 = (Object*)Variant::get_validated_object();
   pOVar2 = local_68;
   if (pOVar4 != local_68) {
      if (pOVar4 == (Object*)0x0) {
         if (local_68 != (Object*)0x0) {
            local_68 = (Object*)0x0;
            LAB_00108c70:cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

      }
 else {
         pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &Resource::typeinfo, 0);
         if (pOVar2 != pOVar4) {
            local_68 = pOVar4;
            if (pOVar4 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_68 = (Object*)0x0;
               }

            }

            if (pOVar2 != (Object*)0x0) goto LAB_00108c70;
         }

      }

   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   ( *pcVar6 )((long*)( (long)param_2 + lVar1 ), *(long*)param_3 + 8, (StringName*)&local_68);
   if (local_68 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_68;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_68);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_00108cba:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<StringName const&, Ref<Resource> const&>::ptrcall(Object*, void const**, void*) const
    */void MethodBindT<StringName_const&,Ref<Resource>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar4 = (long*)param_2[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar4 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x106be8;
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

         goto LAB_00108f66;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar5 = *(code**)( param_1 + 0x58 );
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar5 & 1 ) != 0) {
      pcVar5 = *(code**)( pcVar5 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   if (( *(long**)( (long)param_3 + 8 ) == (long*)0x0 ) || ( local_48 = (Object*)**(long**)( (long)param_3 + 8 ) ),local_48 == (Object*)0x0) {
      LAB_00108f3e:local_48 = (Object*)0x0;
   }
 else {
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') goto LAB_00108f3e;
   }

   /* WARNING: Load size is inaccurate */
   ( *pcVar5 )((long*)( (long)param_2 + lVar1 ), *param_3, (StringName*)&local_48);
   if (local_48 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_48;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_48);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_00108f66:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<StringName const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindT<StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   long *plVar7;
   long lVar8;
   undefined4 in_register_00000014;
   long *plVar9;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar10;
   Variant *pVVar11;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar9 != (long*)0x0 ) && ( plVar9[1] != 0 ) ) && ( *(char*)( plVar9[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar9[1] == 0) {
         plVar7 = (long*)plVar9[0x23];
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *plVar9 + 0x40 ) )(plVar9);
         }

      }
 else {
         plVar7 = (long*)( plVar9[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC61, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001092b0;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar11 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar10 = param_2[5];
      if (pVVar10 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00109300;
         LAB_001092f0:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00109300:uVar6 = 4;
            goto LAB_001092a5;
         }

         if (in_R8D == 1) goto LAB_001092f0;
         lVar8 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar8) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar10 = pVVar10 + lVar8 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar11 & 1 ) != 0) {
         pVVar11 = *(Variant**)( pVVar11 + *(long*)( (long)plVar9 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x15);
      uVar4 = _LC66;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_48);
      ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      uVar6 = 3;
      LAB_001092a5:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_001092b0:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<StringName const&, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<StringName_const&,StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   long *plVar8;
   long lVar9;
   Variant *pVVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   Variant *pVVar12;
   int iVar13;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar14;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar8 = (long*)plVar11[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar8 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC61, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109670;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar14 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 3) {
      pVVar10 = param_2[5];
      iVar6 = 2 - in_R8D;
      if (pVVar10 == (Variant*)0x0) {
         if (iVar6 != 0) goto LAB_001096c0;
         pVVar12 = *(Variant**)param_4;
         LAB_001096dd:pVVar10 = *(Variant**)( param_4 + 8 );
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         iVar13 = (int)lVar2;
         if (iVar13 < iVar6) {
            LAB_001096c0:uVar7 = 4;
            goto LAB_001096ad;
         }

         if (in_R8D == 0) {
            lVar9 = (long)( iVar13 + -2 );
            if (lVar2 <= lVar9) goto LAB_001097a0;
            pVVar12 = pVVar10 + lVar9 * 0x18;
         }
 else {
            pVVar12 = *(Variant**)param_4;
            if (in_R8D == 2) goto LAB_001096dd;
         }

         lVar9 = (long)(int)( ( in_R8D ^ 1 ) + ( iVar13 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_001097a0:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar10 = pVVar10 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar14 & 1 ) != 0) {
         pVVar14 = *(Variant**)( pVVar14 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x15);
      uVar4 = _LC68;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_60);
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar12, 0x15);
      uVar4 = _LC66;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_58);
      ( *(code*)pVVar14 )((Variant*)( (long)plVar11 + (long)pVVar1 ), (Variant*)&local_58, (Variant*)&local_60);
      if (StringName::configured != '\0') {
         if (local_58 != (char*)0x0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00109670;
         }

         if (local_60 != 0) {
            StringName::unref();
         }

      }

   }
 else {
      uVar7 = 3;
      LAB_001096ad:*in_R9 = uVar7;
      in_R9[2] = 2;
   }

   LAB_00109670:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, StringName const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<bool,StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   bool bVar6;
   undefined4 uVar7;
   long *plVar8;
   long lVar9;
   undefined4 in_register_00000014;
   long *plVar10;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
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
         _err_print_error(&_LC61, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109a30;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00109a80;
         LAB_00109a70:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00109a80:uVar7 = 4;
            goto LAB_00109a25;
         }

         if (in_R8D == 1) goto LAB_00109a70;
         lVar9 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar9) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar11 = pVVar11 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar12 & 1 ) != 0) {
         pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 0x15);
      uVar4 = _LC66;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_68);
      bVar6 = (bool)( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68);
      Variant::Variant((Variant*)local_58, bVar6);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      bVar6 = StringName::configured != '\0';
      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      if (( bVar6 ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      uVar7 = 3;
      LAB_00109a25:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_00109a30:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<Ref<Resource>, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<Ref<Resource>,StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   undefined4 uVar7;
   long *plVar8;
   long lVar9;
   undefined4 in_register_00000014;
   long *plVar10;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   long local_78;
   Object *local_70;
   char *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = (Object*)0x0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC61, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109e20;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00109e70;
         LAB_00109e60:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00109e70:uVar7 = 4;
            goto LAB_00109e15;
         }

         if (in_R8D == 1) goto LAB_00109e60;
         lVar9 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar9) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar11 = pVVar11 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar12 & 1 ) != 0) {
         pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar11, 0x15);
      uVar4 = _LC66;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_68);
      ( *(code*)pVVar12 )(&local_70, (Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68);
      Variant::Variant((Variant*)local_58, local_70);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      if (( ( local_70 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar5 = local_70,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
      Memory::free_static(pOVar5, false);
   }

   if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
      StringName::unref();
   }

}
else{uVar7 = 3;LAB_00109e15:*in_R9 = uVar7;in_R9[2] = 1;}LAB_00109e20:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* MethodBindT<Array const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Array_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   long *plVar7;
   long lVar8;
   undefined4 in_register_00000014;
   long *plVar9;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar10;
   Variant *pVVar11;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar9 != (long*)0x0 ) && ( plVar9[1] != 0 ) ) && ( *(char*)( plVar9[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar9[1] == 0) {
         plVar7 = (long*)plVar9[0x23];
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *plVar9 + 0x40 ) )(plVar9);
         }

      }
 else {
         plVar7 = (long*)( plVar9[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC61, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010a190;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar11 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar10 = param_2[5];
      if (pVVar10 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010a1e0;
         LAB_0010a1d0:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010a1e0:uVar6 = 4;
            goto LAB_0010a185;
         }

         if (in_R8D == 1) goto LAB_0010a1d0;
         lVar8 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar8) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar10 = pVVar10 + lVar8 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar11 & 1 ) != 0) {
         pVVar11 = *(Variant**)( pVVar11 + *(long*)( (long)plVar9 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x1c);
      uVar4 = _LC69;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_Array((Variant*)&local_48);
      ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_48);
      Array::~Array((Array*)&local_48);
   }
 else {
      uVar6 = 3;
      LAB_0010a185:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_0010a190:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Resource>, StringName const&>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTRC<Ref<Resource>,StringName_const&>::validated_call(MethodBindTRC<Ref<Resource>,StringName_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Object *pOVar1;
   char cVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   long local_58;
   Object *local_50;
   char *local_48;
   Object *local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = (Object*)0x0;
         local_40 = (Object*)0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010a42d;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar3 )(&local_50, param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
   if (local_50 == (Object*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_48 = *(char**)( local_50 + 0x60 );
      local_40 = local_50;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }

   if (local_50 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_50;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_50);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   LAB_0010a42d:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x0010a849) *//* WARNING: Removing unreachable block (ram,0x0010a852) *//* WARNING: Removing unreachable block (ram,0x0010a862) *//* WARNING: Removing unreachable block (ram,0x0010a872) *//* void call_with_variant_args_dv<__UnexistingClass, StringName const&, Ref<Resource>
   const&>(__UnexistingClass*, void (__UnexistingClass::*)(StringName const&, Ref<Resource> const&),
   Variant const**, int, Callable::CallError&, Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,StringName_const&,Ref<Resource>const&>(__UnexistingClass *param_1, _func_void_StringName_ptr_Ref_ptr *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   code *pcVar2;
   undefined8 uVar3;
   char cVar4;
   int iVar5;
   undefined4 uVar6;
   long lVar7;
   Object *pOVar8;
   undefined4 in_register_0000000c;
   long *plVar9;
   long lVar10;
   uint uVar11;
   int iVar12;
   undefined4 *puVar13;
   undefined4 *puVar14;
   long in_FS_OFFSET;
   long in_stack_00000008;
   Object *local_40;
   long local_38;
   long local_30;
   plVar9 = (long*)CONCAT44(in_register_0000000c, param_4);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar11 = (uint)param_5;
   if (uVar11 < 3) {
      lVar7 = *(long*)( in_stack_00000008 + 8 );
      iVar5 = 2 - uVar11;
      if (lVar7 == 0) {
         if (iVar5 != 0) goto LAB_0010a7e0;
         puVar13 = (undefined4*)*plVar9;
         LAB_0010a82d:puVar14 = (undefined4*)plVar9[1];
      }
 else {
         lVar1 = *(long*)( lVar7 + -8 );
         iVar12 = (int)lVar1;
         if (iVar12 < iVar5) {
            LAB_0010a7e0:uVar6 = 4;
            goto LAB_0010a7e5;
         }

         if (uVar11 == 0) {
            lVar10 = (long)( iVar12 + -2 );
            if (lVar1 <= lVar10) goto LAB_0010a898;
            puVar13 = (undefined4*)( lVar7 + lVar10 * 0x18 );
         }
 else {
            puVar13 = (undefined4*)*plVar9;
            if (uVar11 == 2) goto LAB_0010a82d;
         }

         lVar10 = (long)(int)( ( uVar11 ^ 1 ) + ( iVar12 - iVar5 ) );
         if (lVar1 <= lVar10) {
            LAB_0010a898:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar1, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         puVar14 = (undefined4*)( lVar7 + lVar10 * 0x18 );
      }

      *(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_StringName_ptr_Ref_ptr**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar4 = Variant::can_convert_strict(*puVar14);
      uVar3 = _LC70;
      if (cVar4 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar3;
      }

      local_40 = (Object*)0x0;
      lVar7 = Variant::get_validated_object();
      if (( ( ( lVar7 != 0 ) && ( lVar7 != 0 ) ) && ( pOVar8 = (Object*)__dynamic_cast(lVar7, &Object::typeinfo, &Resource::typeinfo, 0) ),pOVar8 != (Object*)0x0 )) {
         local_40 = (Object*)0x0;
      }

      cVar4 = Variant::can_convert_strict(*puVar13, 0x15);
      uVar3 = _LC66;
      if (cVar4 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar3;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_38);
      ( *param_2 )((StringName*)( param_1 + (long)param_3 ), (Ref*)&local_38);
      if (( StringName::configured != '\0' ) && ( local_38 != 0 )) {
         StringName::unref();
      }

      if (( ( local_40 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)local_40 + 0x140 ))(local_40);
      Memory::free_static(local_40, false);
   }

}
else{uVar6 = 3;LAB_0010a7e5:*(undefined4*)param_6 = uVar6;*(undefined4*)( param_6 + 8 ) = 2;}if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* MethodBindT<StringName const&, Ref<Resource> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<StringName_const&,Ref<Resource>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long *plVar1;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var2;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
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
         _err_print_error(&_LC61, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0010a936;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,StringName_const&,Ref<Resource>const&>(p_Var2, (_func_void_StringName_ptr_Ref_ptr*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0010a936:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<StringName const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<StringName_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
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
   if (iVar5 != param_1) goto LAB_0010ab37;
   local_78 = 0;
   local_68 = &_LC3;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x15);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010ac35:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010ac35;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
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
   LAB_0010ab37:*param_2 = iVar5 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindT<StringName const&>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<StringName_const&>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar1;
   long in_FS_OFFSET;
   int local_14;
   long local_10;
   pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar1 = 0;
   *(undefined4*)( pPVar1 + 0x18 ) = 0;
   *(undefined8*)( pPVar1 + 0x20 ) = 0;
   *(undefined4*)( pPVar1 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
   local_14 = 0;
   call_get_argument_type_info_helper<StringName_const&>(in_EDX, &local_14, pPVar1);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, StringName const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool,StringName_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   undefined8 uVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_80;
   long local_78;
   ulong local_70;
   undefined *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<StringName_const&>(0, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar3 = local_60._0_8_;
      uVar4 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar5 = local_68._0_4_;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
      *(undefined8*)( puVar5 + 4 ) = uVar4;
      puVar5[6] = (undefined4)local_50;
      *(undefined8*)( puVar5 + 8 ) = local_48;
      puVar5[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_0010ae88;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = &_LC3;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar5 = 1;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_0010af6f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_0010af6f;
      StringName::StringName((StringName*)&local_68, (String*)( puVar5 + 8 ), false);
      if (*(undefined**)( puVar5 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar5 + 4 ) = local_68;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_0010ae88:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Resource>, StringName const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<Resource>,StringName_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_80;
   long local_78;
   ulong local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_68 = (char*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<StringName_const&>(0, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar2 = local_60._0_8_;
      uVar3 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar4 = local_68._0_4_;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_50;
      *(undefined8*)( puVar4 + 8 ) = local_48;
      puVar4[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_0010b098;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = "Resource";
   local_60._8_8_ = local_60._0_8_;
   local_60._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar4 = 0x18;
   puVar4[6] = 0x11;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar4[10] = 6;
      LAB_0010b197:StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
      if (*(char**)( puVar4 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(char**)( puVar4 + 4 ) = local_68;
      }

   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_78);
      puVar4[10] = 6;
      if (puVar4[6] == 0x11) goto LAB_0010b197;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_70);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_0010b098:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<StringName const&, StringName const&>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<StringName_const&,StringName_const&>::_gen_argument_type_info(int param_1) {
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
   call_get_argument_type_info_helper<StringName_const&>(in_EDX, &local_24, pPVar1);
   call_get_argument_type_info_helper<StringName_const&>(in_EDX, &local_24, pPVar1);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<StringName const&, Ref<Resource> const&>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<StringName_const&,Ref<Resource>const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   long lVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar4;
   long in_FS_OFFSET;
   int local_8c;
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   char *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   pPVar4 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar4 = 0;
   *(undefined4*)( pPVar4 + 0x18 ) = 0;
   *(undefined8*)( pPVar4 + 0x20 ) = 0;
   *(undefined4*)( pPVar4 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar4 + 8 ) = (undefined1[16])0x0;
   local_8c = 0;
   call_get_argument_type_info_helper<StringName_const&>(in_EDX, &local_8c, pPVar4);
   if (in_EDX != local_8c) goto LAB_0010b2e4;
   local_78 = 0;
   local_68 = "Resource";
   local_80 = 0;
   local_60._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (char*)CONCAT44(local_68._4_4_, 0x18);
   local_50 = 0x11;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010b4ad:local_40 = 6;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 == 0x11) goto LAB_0010b4ad;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *(undefined4*)pPVar4 = local_68._0_4_;
   if (*(long*)( pPVar4 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar4 + 8 ));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8*)( pPVar4 + 8 ) = uVar2;
   }

   if (*(long*)( pPVar4 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( pPVar4 + 0x10 ) = uVar2;
   }

   *(int*)( pPVar4 + 0x18 ) = local_50;
   if (*(long*)( pPVar4 + 0x20 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar4 + 0x20 ));
      lVar3 = local_48;
      local_48 = 0;
      *(long*)( pPVar4 + 0x20 ) = lVar3;
   }

   *(undefined4*)( pPVar4 + 0x28 ) = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   LAB_0010b2e4:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pPVar4;
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Vector<String>>::~MethodBindTRC() */void MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Ref<Resource>, StringName const&>::~MethodBindTRC() */void MethodBindTRC<Ref<Resource>,StringName_const&>::~MethodBindTRC(MethodBindTRC<Ref<Resource>,StringName_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */void MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<StringName const&, StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&,StringName_const&>::~MethodBindT(MethodBindT<StringName_const&,StringName_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<StringName const&, Ref<Resource> const&>::~MethodBindT() */void MethodBindT<StringName_const&,Ref<Resource>const&>::~MethodBindT(MethodBindT<StringName_const&,Ref<Resource>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Array>::~MethodBindTRC() */void MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Array const&>::~MethodBindT() */void MethodBindT<Array_const&>::~MethodBindT(MethodBindT<Array_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ResourcePreloader::~ResourcePreloader() */void ResourcePreloader::~ResourcePreloader(ResourcePreloader *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

