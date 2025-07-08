/* RuntimeNodeSelect::_update_input_state() */void RuntimeNodeSelect::_update_input_state(void) {
   long lVar1;
   bool bVar2;
   lVar1 = SceneTree::singleton;
   if (( *(byte*)( *(long*)( SceneTree::singleton + 0x368 ) + 0x2fa ) & 0x40 ) == 0) {
      return;
   }

   SceneTree::is_suspended();
   bVar2 = (bool)Input::get_singleton();
   Input::set_disable_input(bVar2);
   bVar2 = (bool)Input::get_singleton();
   Input::set_mouse_mode_override_enabled(bVar2);
   Viewport::set_disable_input_override(SUB81(*(undefined8*)( lVar1 + 0x368 ), 0));
   return;
}
/* RuntimeNodeSelect::_close_selection_list() */void RuntimeNodeSelect::_close_selection_list(RuntimeNodeSelect *this) {
   Node::queue_free();
   *(undefined8*)( this + 0x180 ) = 0;
   return;
}
/* CowData<Node*>::_copy_on_write() [clone .isra.0] */void CowData<Node*>::_copy_on_write(CowData<Node*> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 8;
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
      puVar4[1] = lVar2;
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
/* SortArray<RuntimeNodeSelect::SelectResult, _DefaultComparator<RuntimeNodeSelect::SelectResult>,
   true>::introsort(long, long, RuntimeNodeSelect::SelectResult*, long) const [clone .isra.0] */void SortArray<RuntimeNodeSelect::SelectResult,_DefaultComparator<RuntimeNodeSelect::SelectResult>,true>::introsort(long param_1, long param_2, SelectResult *param_3, long param_4) {
   float fVar1;
   float fVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long lVar5;
   long lVar6;
   SelectResult *pSVar7;
   SelectResult *pSVar8;
   SelectResult *pSVar9;
   SelectResult *pSVar10;
   long lVar11;
   float fVar12;
   long lVar13;
   long lVar14;
   long lVar15;
   long lVar16;
   bool bVar17;
   float fVar18;
   long local_b0;
   undefined4 uStack_70;
   lVar14 = param_2 - param_1;
   if (lVar14 < 0x11) {
      return;
   }

   if (param_4 != 0) {
      lVar11 = param_2;
      local_b0 = param_4;
      LAB_0010021d:local_b0 = local_b0 + -1;
      fVar12 = *(float*)( param_3 + param_1 * 0x10 + 8 );
      fVar1 = *(float*)( param_3 + lVar11 * 0x10 + -8 );
      fVar2 = *(float*)( param_3 + ( ( lVar14 >> 1 ) + param_1 ) * 0x10 + 8 );
      if (fVar12 <= fVar2) {
         fVar18 = fVar12;
         if (( fVar12 <= fVar1 ) && ( fVar18 = fVar2 <= fVar1 )) {
            fVar18 = fVar2;
         }

      }
 else {
         fVar18 = fVar2;
         if (( fVar2 <= fVar1 ) && ( fVar18 = fVar12 <= fVar1 )) {
            fVar18 = fVar12;
         }

      }

      lVar14 = lVar11;
      pSVar10 = param_3 + param_1 * 0x10;
      param_2 = param_1;
      do {
         if (fVar18 < *(float*)( pSVar10 + 8 )) {
            if (lVar11 + -1 == param_2) {
               _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
               goto LAB_001002a8;
            }

         }
 else {
            LAB_001002a8:lVar14 = lVar14 + -1;
            pSVar7 = param_3 + lVar14 * 0x10;
            if (*(float*)( pSVar7 + 8 ) <= fVar18 && fVar18 != *(float*)( pSVar7 + 8 )) {
               pSVar9 = param_3 + lVar14 * 0x10 + -0x10;
               while (param_1 != lVar14) {
                  lVar14 = lVar14 + -1;
                  pSVar7 = pSVar9;
                  if (fVar18 < *(float*)( pSVar9 + 8 ) || fVar18 == *(float*)( pSVar9 + 8 )) goto LAB_00100321;
                  pSVar9 = pSVar9 + -0x10;
               }
;
               _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
            }

            LAB_00100321:if (lVar14 <= param_2) goto LAB_00100350;
            uVar4 = *(undefined8*)pSVar10;
            uVar3 = *(undefined8*)( pSVar10 + 8 );
            *(undefined8*)pSVar10 = *(undefined8*)pSVar7;
            *(undefined4*)( pSVar10 + 8 ) = *(undefined4*)( pSVar7 + 8 );
            *(undefined8*)pSVar7 = uVar4;
            uStack_70 = (undefined4)uVar3;
            *(undefined4*)( pSVar7 + 8 ) = uStack_70;
         }

         pSVar10 = pSVar10 + 0x10;
         param_2 = param_2 + 1;
      }
 while ( true );
   }

   LAB_00100573:lVar13 = lVar14 + -2 >> 1;
   lVar11 = lVar13 * 2 + 2;
   pSVar10 = param_3 + ( param_1 + lVar13 ) * 0x10;
   do {
      uVar4 = *(undefined8*)pSVar10;
      fVar12 = (float)*(undefined8*)( pSVar10 + 8 );
      lVar16 = lVar13;
      lVar5 = lVar11;
      if (lVar11 < lVar14) {
         do {
            pSVar7 = param_3 + ( param_1 + lVar5 + -1 ) * 0x10;
            fVar1 = *(float*)( param_3 + ( param_1 + lVar5 ) * 0x10 + 8 );
            lVar6 = lVar5 + -1;
            lVar15 = lVar5;
            if (fVar1 < *(float*)( pSVar7 + 8 ) || fVar1 == *(float*)( pSVar7 + 8 )) {
               lVar15 = lVar5 + 1;
               lVar6 = lVar5;
               pSVar7 = param_3 + ( param_1 + lVar5 ) * 0x10;
            }

            lVar5 = lVar15 * 2;
            *(undefined8*)( param_3 + ( lVar16 + param_1 ) * 0x10 ) = *(undefined8*)pSVar7;
            *(undefined4*)( param_3 + ( lVar16 + param_1 ) * 0x10 + 8 ) = *(undefined4*)( pSVar7 + 8 );
            lVar16 = lVar6;
         }
 while ( lVar14 != lVar5 && SBORROW8(lVar14, lVar5) == lVar14 + lVar15 * -2 < 0 );
         pSVar9 = pSVar7;
         if (lVar14 == lVar5) {
            LAB_001006be:lVar6 = lVar5 + -1;
            pSVar7 = param_3 + ( param_1 + lVar6 ) * 0x10;
            *(undefined8*)pSVar9 = *(undefined8*)pSVar7;
            *(undefined4*)( pSVar9 + 8 ) = *(undefined4*)( pSVar7 + 8 );
         }

         lVar5 = lVar6 + -1;
         if (lVar6 <= lVar13) goto LAB_00100725;
         do {
            lVar16 = lVar5 >> 1;
            pSVar9 = param_3 + ( param_1 + lVar16 ) * 0x10;
            pSVar7 = param_3 + ( lVar6 + param_1 ) * 0x10;
            if (*(float*)( pSVar9 + 8 ) <= fVar12) break;
            *(undefined8*)pSVar7 = *(undefined8*)pSVar9;
            *(undefined4*)( pSVar7 + 8 ) = *(undefined4*)( pSVar9 + 8 );
            lVar5 = ( lVar16 + -1 ) - ( lVar16 + -1 >> 0x3f );
            pSVar7 = pSVar9;
            lVar6 = lVar16;
         }
 while ( lVar13 < lVar16 );
         *(undefined8*)pSVar7 = uVar4;
         *(float*)( pSVar7 + 8 ) = fVar12;
         if (lVar13 == 0) goto LAB_001003ea;
      }
 else {
         pSVar9 = pSVar10;
         pSVar7 = pSVar10;
         if (lVar11 == lVar14) goto LAB_001006be;
         LAB_00100725:*(undefined8*)pSVar7 = uVar4;
         *(float*)( pSVar7 + 8 ) = fVar12;
      }

      lVar13 = lVar13 + -1;
      pSVar10 = pSVar10 + -0x10;
      lVar11 = lVar11 + -2;
   }
 while ( true );
   LAB_00100350:introsort(param_2, lVar11, param_3, local_b0);
   lVar14 = param_2 - param_1;
   if (lVar14 < 0x11) {
      return;
   }

   lVar11 = param_2;
   if (local_b0 == 0) goto LAB_00100573;
   goto LAB_0010021d;
   LAB_001003ea:pSVar10 = param_3 + param_1 * 0x10;
   pSVar7 = param_3 + ( param_2 + -2 ) * 0x10;
   lVar14 = ( param_2 + -1 ) - param_1;
   LAB_00100418:do {
      uVar4 = *(undefined8*)( pSVar7 + 0x10 );
      uVar3 = *(undefined8*)( pSVar7 + 0x18 );
      *(undefined8*)( pSVar7 + 0x10 ) = *(undefined8*)pSVar10;
      *(undefined4*)( pSVar7 + 0x18 ) = *(undefined4*)( pSVar10 + 8 );
      fVar12 = (float)uVar3;
      if (lVar14 < 3) {
         pSVar9 = pSVar10;
         if (lVar14 != 2) {
            *(undefined8*)pSVar10 = uVar4;
            *(float*)( pSVar10 + 8 ) = fVar12;
            return;
         }

         LAB_001006f2:*(undefined8*)pSVar9 = *(undefined8*)pSVar7;
         *(undefined4*)( pSVar9 + 8 ) = *(undefined4*)( pSVar7 + 8 );
         lVar5 = lVar14 + -1;
         lVar11 = lVar14 + -2 >> 1;
      }
 else {
         lVar11 = 2;
         lVar13 = 0;
         do {
            pSVar9 = param_3 + ( param_1 + lVar11 + -1 ) * 0x10;
            fVar1 = *(float*)( param_3 + ( param_1 + lVar11 ) * 0x10 + 8 );
            lVar5 = lVar11 + -1;
            lVar16 = lVar11;
            if (fVar1 < *(float*)( pSVar9 + 8 ) || fVar1 == *(float*)( pSVar9 + 8 )) {
               lVar16 = lVar11 + 1;
               lVar5 = lVar11;
               pSVar9 = param_3 + ( param_1 + lVar11 ) * 0x10;
            }

            lVar11 = lVar16 * 2;
            *(undefined8*)( param_3 + ( lVar13 + param_1 ) * 0x10 ) = *(undefined8*)pSVar9;
            *(undefined4*)( param_3 + ( lVar13 + param_1 ) * 0x10 + 8 ) = *(undefined4*)( pSVar9 + 8 );
            lVar13 = lVar5;
         }
 while ( lVar11 < lVar14 );
         if (lVar11 == lVar14) goto LAB_001006f2;
         lVar11 = ( lVar5 + -1 ) / 2;
         if (lVar5 == 0) {
            lVar14 = lVar14 + -1;
            pSVar7 = pSVar7 + -0x10;
            *(undefined8*)pSVar9 = uVar4;
            *(float*)( pSVar9 + 8 ) = fVar12;
            goto LAB_00100418;
         }

      }

      do {
         pSVar8 = param_3 + ( param_1 + lVar11 ) * 0x10;
         pSVar9 = param_3 + ( lVar5 + param_1 ) * 0x10;
         if (*(float*)( pSVar8 + 8 ) <= fVar12) break;
         *(undefined8*)pSVar9 = *(undefined8*)pSVar8;
         *(undefined4*)( pSVar9 + 8 ) = *(undefined4*)( pSVar8 + 8 );
         bVar17 = lVar11 != 0;
         pSVar9 = pSVar8;
         lVar5 = lVar11;
         lVar11 = ( lVar11 + -1 ) / 2;
      }
 while ( bVar17 );
      pSVar7 = pSVar7 + -0x10;
      *(undefined8*)pSVar9 = uVar4;
      *(float*)( pSVar9 + 8 ) = fVar12;
      bVar17 = lVar14 < 2;
      lVar14 = lVar14 + -1;
      if (bVar17) {
         return;
      }

   }
 while ( true );
}
/* RuntimeNodeSelect::~RuntimeNodeSelect() */void RuntimeNodeSelect::~RuntimeNodeSelect(RuntimeNodeSelect *this) {
   Object *pOVar1;
   char cVar2;
   long *plVar3;
   *(undefined***)this = &PTR__initialize_classv_00121c90;
   if (*(long*)( this + 0x180 ) != 0) {
      cVar2 = Window::is_visible();
      if (cVar2 == '\0') {
         pOVar1 = *(Object**)( this + 0x180 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0x1b0 ) != 0) {
      plVar3 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar3 + 0x11b0 ) )(plVar3, *(undefined8*)( this + 0x1b0 ));
      plVar3 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar3 + 0x11b0 ) )(plVar3);
   }

   if (*(long*)( this + 600 ) != 0) {
      plVar3 = (long*)RenderingServer::get_singleton();
      for (int i = 0; i < 3; i++) {
         ( **(code**)( *plVar3 + 4528 ) )(plVar3, *(undefined8*)( this + ( 8*i + 600 ) ));
         plVar3 = (long*)RenderingServer::get_singleton();
      }

      ( **(code**)( *plVar3 + 0x11b0 ) )(plVar3);
   }

   if (*(long*)( this + 0x250 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x250 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0x248 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x248 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0x198 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x198 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            Object::~Object((Object*)this);
            return;
         }

      }

   }

   Object::~Object((Object*)this);
   return;
}
/* RuntimeNodeSelect::~RuntimeNodeSelect() */void RuntimeNodeSelect::~RuntimeNodeSelect(RuntimeNodeSelect *this) {
   ~RuntimeNodeSelect(this)
   ;;
   operator_delete(this, 0x2d8);
   return;
}
/* CowData<ObjectID>::_copy_on_write() [clone .isra.0] */void CowData<ObjectID>::_copy_on_write(CowData<ObjectID> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 8;
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
      puVar4[1] = lVar2;
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
/* CowData<RuntimeNodeSelect::SelectResult>::_copy_on_write() [clone .isra.0] */void CowData<RuntimeNodeSelect::SelectResult>::_copy_on_write(CowData<RuntimeNodeSelect::SelectResult> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 0x10;
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
      puVar4[1] = lVar2;
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
/* HashMap<Node*, HashMap<ObjectID, Node*, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, Node*> > >, HashMapHasherDefault,
   HashMapComparatorDefault<Node*>, DefaultTypedAllocator<HashMapElement<Node*, HashMap<ObjectID,
   Node*, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, Node*> > > > > >::erase(Node* const&) [clone
   .isra.0] */void HashMap<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator < HashMapElement<ObjectID,Node*>>>>>>::erase(HashMap<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault < ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>>> > *this, Node **param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long *plVar4;
   uint uVar5;
   long lVar6;
   long lVar7;
   undefined8 uVar8;
   long *plVar9;
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
   ulong uVar28;
   uint uVar29;
   ulong uVar30;
   ulong uVar31;
   long lVar32;
   ulong uVar33;
   void *pvVar34;
   ulong uVar35;
   uint uVar36;
   long *plVar37;
   uint uVar38;
   uint *puVar39;
   lVar32 = *(long*)( this + 8 );
   if (( lVar32 != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
      lVar6 = *(long*)( this + 0x10 );
      uVar5 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
      uVar35 = CONCAT44(0, uVar5);
      lVar7 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar28 = (long)*param_1 * 0x3ffff - 1;
      uVar28 = ( uVar28 ^ uVar28 >> 0x1f ) * 0x15;
      uVar28 = ( uVar28 ^ uVar28 >> 0xb ) * 0x41;
      uVar28 = uVar28 >> 0x16 ^ uVar28;
      uVar31 = uVar28 & 0xffffffff;
      if ((int)uVar28 == 0) {
         uVar31 = 1;
      }

      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar31 * lVar7;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar35;
      uVar28 = SUB168(auVar10 * auVar19, 8);
      uVar38 = *(uint*)( lVar6 + uVar28 * 4 );
      uVar33 = (ulong)SUB164(auVar10 * auVar19, 8);
      if (uVar38 != 0) {
         uVar36 = 0;
         do {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = ( ulong )((int)uVar33 + 1) * lVar7;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar35;
            uVar30 = SUB168(auVar13 * auVar22, 8);
            uVar29 = SUB164(auVar13 * auVar22, 8);
            if (( (uint)uVar31 == uVar38 ) && ( *param_1 == *(Node**)( *(long*)( lVar32 + uVar28 * 8 ) + 0x10 ) )) {
               puVar39 = (uint*)( lVar6 + uVar30 * 4 );
               uVar38 = *puVar39;
               if (( uVar38 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar38 * lVar7,auVar23._8_8_ = 0,auVar23._0_8_ = uVar35,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar29 + uVar5 ) - SUB164(auVar14 * auVar23, 8)) * lVar7,auVar24._8_8_ = 0,auVar24._0_8_ = uVar35,uVar28 = (ulong)uVar29,uVar31 = uVar33,SUB164(auVar15 * auVar24, 8) != 0) {
                  while (true) {
                     uVar33 = uVar28;
                     puVar1 = (uint*)( lVar6 + uVar31 * 4 );
                     *puVar39 = *puVar1;
                     puVar2 = (undefined8*)( lVar32 + uVar30 * 8 );
                     *puVar1 = uVar38;
                     puVar3 = (undefined8*)( lVar32 + uVar31 * 8 );
                     uVar8 = *puVar2;
                     *puVar2 = *puVar3;
                     *puVar3 = uVar8;
                     auVar18._8_8_ = 0;
                     auVar18._0_8_ = ( ulong )((int)uVar33 + 1) * lVar7;
                     auVar27._8_8_ = 0;
                     auVar27._0_8_ = uVar35;
                     uVar30 = SUB168(auVar18 * auVar27, 8);
                     puVar39 = (uint*)( lVar6 + uVar30 * 4 );
                     uVar38 = *puVar39;
                     if (( uVar38 == 0 ) || ( auVar16._8_8_ = 0 ),auVar16._0_8_ = (ulong)uVar38 * lVar7,auVar25._8_8_ = 0,auVar25._0_8_ = uVar35,auVar17._8_8_ = 0,auVar17._0_8_ = ( ulong )(( SUB164(auVar18 * auVar27, 8) + uVar5 ) - SUB164(auVar16 * auVar25, 8)) * lVar7,auVar26._8_8_ = 0,auVar26._0_8_ = uVar35,SUB164(auVar17 * auVar26, 8) == 0) break;
                     uVar28 = uVar30 & 0xffffffff;
                     uVar31 = uVar33;
                  }
;
               }

               plVar4 = (long*)( lVar32 + uVar33 * 8 );
               *(undefined4*)( lVar6 + uVar33 * 4 ) = 0;
               plVar37 = (long*)*plVar4;
               if (*(long**)( this + 0x18 ) == plVar37) {
                  *(long*)( this + 0x18 ) = *plVar37;
                  plVar37 = (long*)*plVar4;
                  if (*(long**)( this + 0x20 ) != plVar37) goto LAB_00100dfd;
                  LAB_00100f20:*(long*)( this + 0x20 ) = plVar37[1];
                  plVar37 = (long*)*plVar4;
                  plVar9 = (long*)plVar37[1];
               }
 else {
                  if (*(long**)( this + 0x20 ) == plVar37) goto LAB_00100f20;
                  LAB_00100dfd:plVar9 = (long*)plVar37[1];
               }

               if (plVar9 != (long*)0x0) {
                  *plVar9 = *plVar37;
                  plVar37 = (long*)*plVar4;
               }

               if (*plVar37 != 0) {
                  *(long*)( *plVar37 + 8 ) = plVar37[1];
                  plVar37 = (long*)*plVar4;
               }

               pvVar34 = (void*)plVar37[4];
               if (pvVar34 != (void*)0x0) {
                  if (*(int*)( (long)plVar37 + 0x44 ) != 0) {
                     uVar5 = ( &hash_table_size_primes )[*(uint*)( plVar37 + 8 )];
                     if (uVar5 == 0) {
                        *(undefined4*)( (long)plVar37 + 0x44 ) = 0;
                        *(undefined1(*) [16])( plVar37 + 6 ) = (undefined1[16])0x0;
                     }
 else {
                        lVar32 = 0;
                        do {
                           if (*(int*)( plVar37[5] + lVar32 ) != 0) {
                              *(int*)( plVar37[5] + lVar32 ) = 0;
                              Memory::free_static(*(void**)( (long)pvVar34 + lVar32 * 2 ), false);
                              pvVar34 = (void*)plVar37[4];
                              *(undefined8*)( (long)pvVar34 + lVar32 * 2 ) = 0;
                           }

                           lVar32 = lVar32 + 4;
                        }
 while ( lVar32 != (ulong)uVar5 << 2 );
                        *(undefined4*)( (long)plVar37 + 0x44 ) = 0;
                        *(undefined1(*) [16])( plVar37 + 6 ) = (undefined1[16])0x0;
                        if (pvVar34 == (void*)0x0) goto LAB_00100eb8;
                     }

                  }

                  Memory::free_static(pvVar34, false);
                  Memory::free_static((void*)plVar37[5], false);
               }

               LAB_00100eb8:Memory::free_static(plVar37, false);
               *(undefined8*)( *(long*)( this + 8 ) + uVar33 * 8 ) = 0;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + -1;
               return;
            }

            uVar38 = *(uint*)( lVar6 + uVar30 * 4 );
            uVar33 = uVar30 & 0xffffffff;
            uVar36 = uVar36 + 1;
         }
 while ( ( uVar38 != 0 ) && ( auVar11._8_8_ = 0 ),auVar11._0_8_ = (ulong)uVar38 * lVar7,auVar20._8_8_ = 0,auVar20._0_8_ = uVar35,auVar12._8_8_ = 0,auVar12._0_8_ = ( ulong )(( uVar5 + uVar29 ) - SUB164(auVar11 * auVar20, 8)) * lVar7,auVar21._8_8_ = 0,auVar21._0_8_ = uVar35,uVar28 = uVar30,uVar36 <= SUB164(auVar12 * auVar21, 8) );
      }

   }

   return;
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
/* List<Pair<PropertyInfo, Variant>, DefaultAllocator>::push_back(Pair<PropertyInfo, Variant>
   const&) [clone .isra.0] */void List<Pair<PropertyInfo,Variant>,DefaultAllocator>::push_back(List<Pair<PropertyInfo,Variant>,DefaultAllocator> *this, Pair *param_1) {
   undefined8 uVar1;
   long *plVar2;
   long lVar3;
   undefined4 *puVar4;
   undefined1(*pauVar5)[16];
   if (*(long*)this == 0) {
      pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])this = pauVar5;
      *(undefined4*)pauVar5[1] = 0;
      *pauVar5 = (undefined1[16])0x0;
   }

   puVar4 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar4 + 0xe ) = (undefined1[16])0x0;
   lVar3 = *(long*)( param_1 + 8 );
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   puVar4[0xc] = 0;
   *(undefined8*)( puVar4 + 0x16 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0x12 ) = (undefined1[16])0x0;
   *puVar4 = *(undefined4*)param_1;
   if (lVar3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)( param_1 + 8 ));
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)( param_1 + 0x10 ));
   puVar4[6] = *(undefined4*)( param_1 + 0x18 );
   if (*(long*)( puVar4 + 8 ) != *(long*)( param_1 + 0x20 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)( param_1 + 0x20 ));
   }

   puVar4[10] = *(undefined4*)( param_1 + 0x28 );
   Variant::operator =((Variant*)( puVar4 + 0xc ), (Variant*)( param_1 + 0x30 ));
   uVar1 = *(undefined8*)( *(long*)this + 8 );
   *(long*)( puVar4 + 0x16 ) = *(long*)this;
   plVar2 = *(long**)this;
   *(undefined8*)( puVar4 + 0x12 ) = 0;
   *(undefined8*)( puVar4 + 0x14 ) = uVar1;
   if (plVar2[1] != 0) {
      *(undefined4**)( plVar2[1] + 0x48 ) = puVar4;
   }

   plVar2[1] = (long)puVar4;
   if (*plVar2 != 0) {
      *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
      return;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   *plVar2 = (long)puVar4;
   return;
}
/* SceneDebugger::_set_node_owner_recursive(Node*, Node*) */void SceneDebugger::_set_node_owner_recursive(Node *param_1, Node *param_2) {
   long lVar1;
   Node *pNVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   lVar1 = Node::get_owner();
   if (lVar1 == 0) {
      Node::set_owner(param_1);
   }

   iVar3 = Node::get_child_count(SUB81(param_1, 0));
   iVar4 = 0;
   if (0 < iVar3) {
      do {
         iVar5 = iVar4 + 1;
         pNVar2 = (Node*)Node::get_child((int)param_1, SUB41(iVar4, 0));
         _set_node_owner_recursive(pNVar2, param_2);
         iVar3 = Node::get_child_count(SUB81(param_1, 0));
         iVar4 = iVar5;
      }
 while ( iVar5 < iVar3 );
   }

   return;
}
/* SceneDebugger::_save_node(ObjectID, String const&) */void SceneDebugger::_save_node(ulong param_1, String *param_2) {
   ulong uVar1;
   char cVar2;
   int iVar3;
   HashMap *pHVar4;
   Object *pOVar5;
   Node *pNVar6;
   PackedScene *this;
   Object *pOVar7;
   uint uVar8;
   ulong *puVar9;
   int iVar10;
   long lVar11;
   void *pvVar12;
   long in_FS_OFFSET;
   bool bVar13;
   Object *local_70;
   undefined1 local_68;
   undefined1 local_60[16];
   undefined1 local_50[16];
   undefined8 local_40;
   long local_30;
   uVar8 = (uint)param_1 & 0xffffff;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (uVar8 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_68 = 0;
         LOCK();
         bVar13 = (char)ObjectDB::spin_lock == '\0';
         if (bVar13) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar13) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar9 = (ulong*)( (ulong)uVar8 * 0x10 + ObjectDB::object_slots );
      if (( param_1 >> 0x18 & 0x7fffffffff ) == ( *puVar9 & 0x7fffffffff )) {
         uVar1 = puVar9[1];
         ObjectDB::spin_lock._0_1_ = '\0';
         if (( uVar1 != 0 ) && ( pHVar4 = (HashMap*)__dynamic_cast(uVar1, &Object::typeinfo, &Node::typeinfo, 0) ),pHVar4 != (HashMap*)0x0) {
            local_40 = 2;
            local_60 = (undefined1[16])0x0;
            local_50 = (undefined1[16])0x0;
            pOVar5 = (Object*)Node::duplicate_from_editor(pHVar4);
            iVar10 = 0;
            while (true) {
               iVar3 = Node::get_child_count(SUB81(pOVar5, 0));
               if (iVar3 <= iVar10) break;
               pNVar6 = (Node*)Node::get_child((int)pOVar5, SUB41(iVar10, 0));
               _set_node_owner_recursive(pNVar6, (Node*)pOVar5);
               iVar10 = iVar10 + 1;
            }
;
            Node::set_unique_name_in_owner(SUB81(pOVar5, 0));
            this(PackedScene * operator_new(0x248, ""));
            PackedScene::PackedScene(this);
            postinitialize_handler((Object*)this);
            cVar2 = RefCounted::init_ref();
            if (cVar2 == '\0') {
               this(PackedScene * 0x0);
            }

            PackedScene::pack((Node*)this);
            local_70 = (Object*)0x0;
            pOVar7 = (Object*)__dynamic_cast(this, &Object::typeinfo, &Resource::typeinfo, 0);
            if (( pOVar7 != (Object*)0x0 ) && ( local_70 = pOVar7 ),cVar2 = RefCounted::reference(),cVar2 == '\0') {
               local_70 = (Object*)0x0;
            }

            ResourceSaver::save((Ref*)&local_70, param_2, 0);
            if (( ( local_70 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar7 = local_70,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar7 + 0x140 ))(pOVar7);
            Memory::free_static(pOVar7, false);
         }

         cVar2 = predelete_handler(pOVar5);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

         cVar2 = RefCounted::unreference();
         if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler((Object*)this) ),cVar2 != '\0') {
            ( **(code**)( *(long*)this + 0x140 ) )(this);
            Memory::free_static(this, false);
         }

         if ((void*)local_60._0_8_ != (void*)0x0) {
            pvVar12 = (void*)local_60._0_8_;
            if (local_40._4_4_ != 0) {
               uVar8 = ( &hash_table_size_primes )[local_40 & 0xffffffff];
               if (uVar8 == 0) {
                  local_40 = local_40 & 0xffffffff;
                  local_50 = (undefined1[16])0x0;
               }
 else {
                  lVar11 = 0;
                  do {
                     if (*(int*)( local_60._8_8_ + lVar11 ) != 0) {
                        *(int*)( local_60._8_8_ + lVar11 ) = 0;
                        Memory::free_static(*(void**)( (long)pvVar12 + lVar11 * 2 ), false);
                        *(undefined8*)( local_60._0_8_ + lVar11 * 2 ) = 0;
                        pvVar12 = (void*)local_60._0_8_;
                     }

                     lVar11 = lVar11 + 4;
                  }
 while ( lVar11 != (ulong)uVar8 * 4 );
                  local_40 = local_40 & 0xffffffff;
                  local_50 = (undefined1[16])0x0;
                  if (pvVar12 == (void*)0x0) goto LAB_0010151b;
               }

            }

            Memory::free_static(pvVar12, false);
            Memory::free_static((void*)local_60._8_8_, false);
         }

         LAB_0010151b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00101649;
      }

   }
 else {
      ObjectDB::spin_lock._0_1_ = '\0';
   }

}
else{_err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);};if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   _err_print_error("_save_node", "scene/debugger/scene_debugger.cpp", 0x142, "Parameter \"node\" is null.", 0, 0);
   return;
}
LAB_00101649:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* SceneDebugger::_next_frame() */void SceneDebugger::_next_frame(void) {
   code *pcVar1;
   undefined8 uVar2;
   long lVar3;
   char cVar4;
   long *plVar5;
   CallableCustom *this;
   long in_FS_OFFSET;
   long local_b0;
   Callable local_a8[16];
   Callable local_98[16];
   Variant *local_88;
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   lVar3 = SceneTree::singleton;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar4 = SceneTree::is_suspended();
   if (cVar4 != '\0') {
      SceneTree::set_suspend(SUB81(lVar3, 0));
      plVar5 = (long*)RenderingServer::get_singleton();
      pcVar1 = *(code**)( *plVar5 + 0x108 );
      this(CallableCustom * operator_new(0x48, ""));
      CallableCustom::CallableCustom(this);
      *(undefined**)( this + 0x20 ) = &_LC26;
      *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
      *(undefined***)this = &PTR_hash_00121e80;
      *(undefined8*)( this + 0x40 ) = 0;
      uVar2 = *(undefined8*)( lVar3 + 0x60 );
      *(long*)( this + 0x28 ) = lVar3;
      *(undefined8*)( this + 0x30 ) = uVar2;
      *(undefined8*)( this + 0x10 ) = 0;
      *(code**)( this + 0x38 ) = SceneTree::set_suspend;
      CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
      *(char**)( this + 0x20 ) = "SceneTree::set_suspend";
      Callable::Callable(local_a8, this);
      Variant::Variant((Variant*)local_78, true);
      local_60 = 0;
      local_58 = (undefined1[16])0x0;
      local_88 = (Variant*)local_78;
      Callable::bindp((Variant**)local_98, (int)local_a8);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      StringName::StringName((StringName*)&local_b0, "frame_post_draw", false);
      ( *pcVar1 )(plVar5, (StringName*)&local_b0, local_98, 4);
      if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
         StringName::unref();
      }

      Callable::~Callable(local_98);
      Callable::~Callable(local_a8);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SceneDebugger::reload_cached_files(Vector<String> const&) */void SceneDebugger::reload_cached_files(Vector *param_1) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   long lVar4;
   long in_FS_OFFSET;
   Object *local_38;
   long local_30;
   lVar4 = *(long*)( param_1 + 8 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar4 != 0) {
      lVar1 = lVar4 + *(long*)( lVar4 + -8 ) * 8;
      for (; lVar1 != lVar4; lVar4 = lVar4 + 8) {
         while (( ( ( ResourceCache::get_ref((String*)&local_38),local_38 == (Object*)0x0 || ( ( **(code**)( *(long*)local_38 + 0x180 ) )(),local_38 == (Object*)0x0 ) ) || ( cVar3 = RefCounted::unreference() ),pOVar2 = local_38,cVar3 == '\0' ) ) || ( cVar3 = predelete_handler(local_38) ),cVar3 == '\0') {
            lVar4 = lVar4 + 8;
            if (lVar1 == lVar4) goto LAB_001018e0;
         }
;
         ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
         Memory::free_static(pOVar2, false);
      }

   }

   LAB_001018e0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SceneDebuggerObject::serialize(Array&, int) */void SceneDebuggerObject::serialize(SceneDebuggerObject *this, Array *param_1, int param_2) {
   long *plVar1;
   undefined8 uVar2;
   long lVar3;
   undefined *puVar4;
   char cVar5;
   Object *pOVar6;
   long lVar7;
   int iVar8;
   int *piVar9;
   long in_FS_OFFSET;
   bool bVar10;
   int local_84;
   Array local_80[8];
   Variant local_78[8];
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[2];
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(local_80);
   if (( *(undefined8**)( this + 0x10 ) != (undefined8*)0x0 ) && ( piVar9 = (int*)**(undefined8**)( this + 0x10 ) ),piVar9 != (int*)0x0) {
      LAB_00101b63:do {
         pOVar6 = (Object*)Variant::get_validated_object();
         if (( ( pOVar6 != (Object*)0x0 ) && ( pOVar6 = (Object*)__dynamic_cast(pOVar6, &Object::typeinfo, &Resource::typeinfo) ),pOVar6 != (Object*)0x0 )) {
            pOVar6 = (Object*)0x0;
         }

         Array::Array((Array*)local_78);
         Variant::Variant((Variant*)local_58, (String*)( piVar9 + 2 ));
         Array::push_back(local_78);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, *piVar9);
         Array::push_back(local_78);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         local_70 = 0;
         iVar8 = piVar9[6];
         plVar1 = (long*)( *(long*)( piVar9 + 8 ) + -0x10 );
         if (*(long*)( piVar9 + 8 ) != 0) {
            do {
               lVar3 = *plVar1;
               if (lVar3 == 0) goto LAB_00101c41;
               LOCK();
               lVar7 = *plVar1;
               bVar10 = lVar3 == lVar7;
               if (bVar10) {
                  *plVar1 = lVar3 + 1;
                  lVar7 = lVar3;
               }

               UNLOCK();
            }
 while ( !bVar10 );
            if (lVar7 != -1) {
               local_70 = *(long*)( piVar9 + 8 );
            }

         }

         LAB_00101c41:if (pOVar6 == (Object*)0x0) {
            LAB_00101c4a:local_84 = 0;
            encode_variant((Variant*)( piVar9 + 0xc ), (uchar*)0x0, &local_84, false, 0);
            if (param_2 < local_84) {
               local_60 = 0;
               local_68 = &_LC26;
               String::parse_latin1((StrRange*)&local_70);
               local_50 = (undefined1[16])0x0;
               if (Variant::needs_deinit[piVar9[0xc]] != '\0') {
                  Variant::_clear_internal();
               }

               piVar9[0xc] = 0;
               iVar8 = 0x19;
               *(undefined8*)( piVar9 + 0xe ) = local_50._0_8_;
               *(undefined8*)( piVar9 + 0x10 ) = local_50._8_8_;
            }

         }
 else {
            Resource::get_path();
            puVar4 = local_68;
            if (local_68 == (undefined*)0x0) goto LAB_00101c4a;
            uVar2 = *(undefined8*)( local_68 + -8 );
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = (undefined*)0x0;
               Memory::free_static(puVar4 + -0x10, false);
            }

            if ((uint)uVar2 < 2) goto LAB_00101c4a;
            Resource::get_path();
            Variant::Variant((Variant*)local_58, (String*)&local_68);
            if ((Variant*)( piVar9 + 0xc ) == (Variant*)local_58) {
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

            }
 else {
               if (Variant::needs_deinit[piVar9[0xc]] != '\0') {
                  Variant::_clear_internal();
               }

               piVar9[0xc] = local_58[0];
               *(undefined8*)( piVar9 + 0xe ) = local_50._0_8_;
               *(undefined8*)( piVar9 + 0x10 ) = local_50._8_8_;
            }

            puVar4 = local_68;
            if (local_68 != (undefined*)0x0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = (undefined*)0x0;
                  Memory::free_static(puVar4 + -0x10, false);
               }

            }

         }

         Variant::Variant((Variant*)local_58, iVar8);
         Array::push_back(local_78);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, (String*)&local_70);
         Array::push_back(local_78);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, piVar9[10]);
         Array::push_back(local_78);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Array::push_back(local_78);
         Variant::Variant((Variant*)local_58, (Array*)local_78);
         Array::push_back((Variant*)local_80);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         lVar3 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar1 = (long*)( local_70 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         Array::~Array((Array*)local_78);
         if (( ( pOVar6 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
         Memory::free_static(pOVar6, false);
         piVar9 = *(int**)( piVar9 + 0x12 );
         if (piVar9 == (int*)0x0) break;
         goto LAB_00101b63;
      }
 while ( piVar9 != (int*)0x0 );
   }

   Variant::Variant((Variant*)local_58, *(ulong*)this);
   Array::push_back((Variant*)param_1);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, (String*)( this + 8 ));
   Array::push_back((Variant*)param_1);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, local_80);
   Array::push_back((Variant*)param_1);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Array::~Array(local_80);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* SceneDebuggerTree::serialize(Array&) */void SceneDebuggerTree::serialize(SceneDebuggerTree *this, Array *param_1) {
   int *piVar1;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(undefined8**)this != (undefined8*)0x0) {
      for (piVar1 = (int*)**(undefined8**)this; piVar1 != (int*)0x0; piVar1 = *(int**)( piVar1 + 0xc )) {
         Variant::Variant((Variant*)local_48, *piVar1);
         Array::push_back((Variant*)param_1);
         if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_48, (String*)( piVar1 + 2 ));
         Array::push_back((Variant*)param_1);
         if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_48, (String*)( piVar1 + 4 ));
         Array::push_back((Variant*)param_1);
         if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_48, (ObjectID*)( piVar1 + 6 ));
         Array::push_back((Variant*)param_1);
         if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_48, (String*)( piVar1 + 8 ));
         Array::push_back((Variant*)param_1);
         if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_48, (uchar)piVar1[10]);
         Array::push_back((Variant*)param_1);
         if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
         }

      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* LiveEditor::get_singleton() */undefined8 LiveEditor::get_singleton(void) {
   return singleton;
}
/* LiveEditor::_root_func(NodePath const&, String const&) */void LiveEditor::_root_func(LiveEditor *this, NodePath *param_1, String *param_2) {
   NodePath::operator =((NodePath*)( this + 0x60 ), param_1);
   if (*(long*)( this + 0x68 ) != *(long*)param_2) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x68 ), (CowData*)param_2);
      return;
   }

   return;
}
/* LiveEditor::_create_node_func(NodePath const&, String const&, String const&) */void LiveEditor::_create_node_func(NodePath *param_1, String *param_2, String *param_3) {
   uint uVar1;
   int iVar2;
   undefined8 *puVar3;
   NodePath *pNVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   ulong uVar13;
   char cVar14;
   uint uVar15;
   Node *pNVar16;
   undefined8 uVar17;
   long lVar18;
   String *pSVar19;
   uint uVar20;
   uint uVar21;
   long lVar22;
   long lVar23;
   uint uVar24;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   lVar23 = SceneTree::singleton;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (SceneTree::singleton != 0) {
      pNVar16 = (Node*)0x0;
      cVar14 = Node::has_node(*(NodePath**)( SceneTree::singleton + 0x368 ));
      if (cVar14 != '\0') {
         pNVar16 = (Node*)Node::get_node(*(NodePath**)( lVar23 + 0x368 ));
      }

      if (( *(long*)( param_1 + 0x78 ) != 0 ) && ( *(int*)( param_1 + 0x9c ) != 0 )) {
         uVar1 = ( &hash_table_size_primes )[*(uint*)( param_1 + 0x98 )];
         lVar23 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x98 ) * 8 );
         uVar15 = String::hash();
         uVar13 = CONCAT44(0, uVar1);
         lVar18 = *(long*)( param_1 + 0x80 );
         uVar20 = 1;
         if (uVar15 != 0) {
            uVar20 = uVar15;
         }

         auVar5._8_8_ = 0;
         auVar5._0_8_ = (ulong)uVar20 * lVar23;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = uVar13;
         lVar22 = SUB168(auVar5 * auVar9, 8);
         uVar15 = *(uint*)( lVar18 + lVar22 * 4 );
         uVar21 = SUB164(auVar5 * auVar9, 8);
         if (uVar15 != 0) {
            uVar24 = 0;
            do {
               if (uVar20 == uVar15) {
                  cVar14 = String::operator ==((String*)( *(long*)( *(long*)( param_1 + 0x78 ) + lVar22 * 8 ) + 0x10 ), (String*)( param_1 + 0x68 ));
                  if (cVar14 != '\0') {
                     lVar23 = *(long*)( *(long*)( param_1 + 0x78 ) + (ulong)uVar21 * 8 );
                     if (( lVar23 != 0 ) && ( iVar2 = iVar2 != 0 )) {
                        puVar3 = *(undefined8**)( lVar23 + 0x18 );
                        lVar23 = 0;
                        pNVar4 = (NodePath*)*puVar3;
                        while (true) {
                           if (( ( pNVar16 == (Node*)0x0 ) || ( cVar14 = Node::is_ancestor_of(pNVar16) ),cVar14 != '\0' )) {
                              uVar17 = Node::get_node(pNVar4);
                              StringName::StringName((StringName*)&local_48, param_3, false);
                              lVar18 = ClassDB::instantiate((StringName*)&local_48);
                              if (lVar18 == 0) {
                                 if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                    StringName::unref();
                                 }

                              }
 else {
                                 pSVar19 = (String*)__dynamic_cast(lVar18, &Object::typeinfo, &Node::typeinfo, 0);
                                 if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                    StringName::unref();
                                 }

                                 if (pSVar19 != (String*)0x0) {
                                    Node::set_name(pSVar19);
                                    Node::add_child(uVar17, pSVar19, 0);
                                 }

                              }

                           }

                           if (iVar2 <= (int)lVar23 + 1) break;
                           lVar23 = lVar23 + 1;
                           pNVar4 = (NodePath*)puVar3[lVar23];
                        }
;
                     }

                     break;
                  }

                  lVar18 = *(long*)( param_1 + 0x80 );
               }

               uVar24 = uVar24 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(uVar21 + 1) * lVar23;
               auVar10._8_8_ = 0;
               auVar10._0_8_ = uVar13;
               lVar22 = SUB168(auVar6 * auVar10, 8);
               uVar15 = *(uint*)( lVar18 + lVar22 * 4 );
               uVar21 = SUB164(auVar6 * auVar10, 8);
               if (( uVar15 == 0 ) || ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar15 * lVar23,auVar11._8_8_ = 0,auVar11._0_8_ = uVar13,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar1 + uVar21 ) - SUB164(auVar7 * auVar11, 8)) * lVar23,auVar12._8_8_ = 0,auVar12._0_8_ = uVar13,SUB164(auVar8 * auVar12, 8) < uVar24) break;
            }
 while ( true );
         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* LiveEditor::_duplicate_node_func(NodePath const&, String const&) */void LiveEditor::_duplicate_node_func(NodePath *param_1, String *param_2) {
   uint uVar1;
   int iVar2;
   undefined8 *puVar3;
   NodePath *pNVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   ulong uVar13;
   char cVar14;
   uint uVar15;
   int iVar16;
   Node *pNVar17;
   String *pSVar18;
   undefined8 uVar19;
   uint uVar20;
   uint uVar21;
   long lVar22;
   long lVar23;
   long lVar24;
   uint uVar25;
   lVar23 = SceneTree::singleton;
   if (SceneTree::singleton != 0) {
      pNVar17 = (Node*)0x0;
      cVar14 = Node::has_node(*(NodePath**)( SceneTree::singleton + 0x368 ));
      if (cVar14 != '\0') {
         pNVar17 = (Node*)Node::get_node(*(NodePath**)( lVar23 + 0x368 ));
      }

      if (( *(long*)( param_1 + 0x78 ) != 0 ) && ( *(int*)( param_1 + 0x9c ) != 0 )) {
         uVar1 = ( &hash_table_size_primes )[*(uint*)( param_1 + 0x98 )];
         lVar23 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x98 ) * 8 );
         uVar15 = String::hash();
         uVar13 = CONCAT44(0, uVar1);
         uVar20 = 1;
         if (uVar15 != 0) {
            uVar20 = uVar15;
         }

         lVar24 = *(long*)( param_1 + 0x80 );
         auVar5._8_8_ = 0;
         auVar5._0_8_ = (ulong)uVar20 * lVar23;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = uVar13;
         lVar22 = SUB168(auVar5 * auVar9, 8);
         uVar15 = *(uint*)( lVar24 + lVar22 * 4 );
         uVar21 = SUB164(auVar5 * auVar9, 8);
         if (uVar15 != 0) {
            uVar25 = 0;
            do {
               if (uVar20 == uVar15) {
                  cVar14 = String::operator ==((String*)( *(long*)( *(long*)( param_1 + 0x78 ) + lVar22 * 8 ) + 0x10 ), (String*)( param_1 + 0x68 ));
                  if (cVar14 != '\0') {
                     lVar23 = *(long*)( *(long*)( param_1 + 0x78 ) + (ulong)uVar21 * 8 );
                     if (lVar23 == 0) {
                        return;
                     }

                     iVar2 = *(int*)( lVar23 + 0x3c );
                     if (iVar2 == 0) {
                        return;
                     }

                     puVar3 = *(undefined8**)( lVar23 + 0x18 );
                     lVar23 = 0;
                     pNVar4 = (NodePath*)*puVar3;
                     while (true) {
                        if (( ( pNVar17 == (Node*)0x0 ) || ( cVar14 = Node::is_ancestor_of(pNVar17) ),cVar14 != '\0' )) {
                           iVar16 = Node::get_node(pNVar4);
                           pSVar18 = (String*)Node::duplicate(iVar16);
                           if (pSVar18 != (String*)0x0) {
                              Node::set_name(pSVar18);
                              uVar19 = Node::get_parent();
                              Node::add_child(uVar19, pSVar18, 0, 0);
                           }

                        }

                        if (iVar2 <= (int)lVar23 + 1) break;
                        lVar23 = lVar23 + 1;
                        pNVar4 = (NodePath*)puVar3[lVar23];
                     }
;
                     return;
                  }

                  lVar24 = *(long*)( param_1 + 0x80 );
               }

               uVar25 = uVar25 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(uVar21 + 1) * lVar23;
               auVar10._8_8_ = 0;
               auVar10._0_8_ = uVar13;
               lVar22 = SUB168(auVar6 * auVar10, 8);
               uVar15 = *(uint*)( lVar24 + lVar22 * 4 );
               uVar21 = SUB164(auVar6 * auVar10, 8);
               if (uVar15 == 0) {
                  return;
               }

               auVar7._8_8_ = 0;
               auVar7._0_8_ = (ulong)uVar15 * lVar23;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = uVar13;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(( uVar1 + uVar21 ) - SUB164(auVar7 * auVar11, 8)) * lVar23;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = uVar13;
            }
 while ( uVar25 <= SUB164(auVar8 * auVar12, 8) );
            return;
         }

      }

   }

   return;
}
/* LiveEditor::_reparent_node_func(NodePath const&, NodePath const&, String const&, int) */void LiveEditor::_reparent_node_func(NodePath *param_1, NodePath *param_2, String *param_3, int param_4) {
   uint uVar1;
   int iVar2;
   undefined8 *puVar3;
   NodePath *pNVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   ulong uVar13;
   char cVar14;
   uint uVar15;
   Node *pNVar16;
   String *pSVar17;
   Node *pNVar18;
   Node *pNVar19;
   uint uVar20;
   uint uVar21;
   long lVar22;
   uint uVar23;
   long lVar24;
   int in_R8D;
   long lVar25;
   lVar24 = SceneTree::singleton;
   if (SceneTree::singleton != 0) {
      pNVar16 = (Node*)0x0;
      cVar14 = Node::has_node(*(NodePath**)( SceneTree::singleton + 0x368 ));
      if (cVar14 != '\0') {
         pNVar16 = (Node*)Node::get_node(*(NodePath**)( lVar24 + 0x368 ));
      }

      if (( *(long*)( param_1 + 0x78 ) != 0 ) && ( *(int*)( param_1 + 0x9c ) != 0 )) {
         uVar1 = ( &hash_table_size_primes )[*(uint*)( param_1 + 0x98 )];
         lVar24 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x98 ) * 8 );
         uVar15 = String::hash();
         uVar13 = CONCAT44(0, uVar1);
         lVar25 = *(long*)( param_1 + 0x80 );
         uVar20 = 1;
         if (uVar15 != 0) {
            uVar20 = uVar15;
         }

         auVar5._8_8_ = 0;
         auVar5._0_8_ = (ulong)uVar20 * lVar24;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = uVar13;
         lVar22 = SUB168(auVar5 * auVar9, 8);
         uVar15 = *(uint*)( lVar25 + lVar22 * 4 );
         uVar21 = SUB164(auVar5 * auVar9, 8);
         if (uVar15 != 0) {
            uVar23 = 0;
            do {
               if (uVar20 == uVar15) {
                  cVar14 = String::operator ==((String*)( *(long*)( *(long*)( param_1 + 0x78 ) + lVar22 * 8 ) + 0x10 ), (String*)( param_1 + 0x68 ));
                  if (cVar14 != '\0') {
                     lVar24 = *(long*)( *(long*)( param_1 + 0x78 ) + (ulong)uVar21 * 8 );
                     if (lVar24 == 0) {
                        return;
                     }

                     iVar2 = *(int*)( lVar24 + 0x3c );
                     if (iVar2 == 0) {
                        return;
                     }

                     puVar3 = *(undefined8**)( lVar24 + 0x18 );
                     lVar24 = 0;
                     pNVar4 = (NodePath*)*puVar3;
                     while (true) {
                        if (( ( pNVar16 == (Node*)0x0 ) || ( cVar14 = Node::is_ancestor_of(pNVar16) ),cVar14 != '\0' )) {
                           pSVar17 = (String*)Node::get_node(pNVar4);
                           cVar14 = Node::has_node(pNVar4);
                           if (cVar14 != '\0') {
                              pNVar18 = (Node*)Node::get_node(pNVar4);
                              pNVar19 = (Node*)Node::get_parent();
                              Node::remove_child(pNVar19);
                              Node::set_name(pSVar17);
                              Node::add_child(pNVar18, pSVar17, 0, 0);
                              if (-1 < in_R8D) {
                                 Node::move_child(pNVar18, (int)pSVar17);
                              }

                           }

                        }

                        if (iVar2 <= (int)lVar24 + 1) break;
                        lVar24 = lVar24 + 1;
                        pNVar4 = (NodePath*)puVar3[lVar24];
                     }
;
                     return;
                  }

                  lVar25 = *(long*)( param_1 + 0x80 );
               }

               uVar23 = uVar23 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(uVar21 + 1) * lVar24;
               auVar10._8_8_ = 0;
               auVar10._0_8_ = uVar13;
               lVar22 = SUB168(auVar6 * auVar10, 8);
               uVar15 = *(uint*)( lVar25 + lVar22 * 4 );
               uVar21 = SUB164(auVar6 * auVar10, 8);
               if (uVar15 == 0) {
                  return;
               }

               auVar7._8_8_ = 0;
               auVar7._0_8_ = (ulong)uVar15 * lVar24;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = uVar13;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(( uVar1 + uVar21 ) - SUB164(auVar7 * auVar11, 8)) * lVar24;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = uVar13;
            }
 while ( uVar23 <= SUB164(auVar8 * auVar12, 8) );
            return;
         }

      }

   }

   return;
}
/* RuntimeNodeSelect::get_singleton() */undefined8 RuntimeNodeSelect::get_singleton(void) {
   return singleton;
}
/* RuntimeNodeSelect::_node_set_type(RuntimeNodeSelect::NodeType) */void RuntimeNodeSelect::_node_set_type(RuntimeNodeSelect *this, undefined4 param_2) {
   *(undefined4*)( this + 0x2cc ) = param_2;
   _update_input_state();
   return;
}
/* RuntimeNodeSelect::_select_set_mode(RuntimeNodeSelect::SelectMode) */void RuntimeNodeSelect::_select_set_mode(RuntimeNodeSelect *this, undefined4 param_2) {
   *(undefined4*)( this + 0x2d0 ) = param_2;
   return;
}
/* RuntimeNodeSelect::_clear_selection() */void RuntimeNodeSelect::_clear_selection(RuntimeNodeSelect *this) {
   long lVar1;
   long *plVar2;
   *(undefined8*)( this + 0x178 ) = 0;
   this[0x171] = (RuntimeNodeSelect)0x0;
   if (*(long*)( this + 0x1b0 ) == 0) {
      lVar1 = *(long*)( this + 600 );
   }
 else {
      plVar2 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar2 + 0xfb8 ) )(plVar2, *(undefined8*)( this + 0x1b8 ));
      lVar1 = *(long*)( this + 600 );
   }

   if (lVar1 == 0) {
      return;
   }

   plVar2 = (long*)RenderingServer::get_singleton();
   for (int i = 0; i < 3; i++) {
      ( **(code**)( *plVar2 + 4528 ) )(plVar2, *(undefined8*)( this + ( 8*i + 600 ) ));
      plVar2 = (long*)RenderingServer::get_singleton();
   }

   /* WARNING: Could not recover jumptable at 0x001029b4. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar2 + 0x11b0 ) )(plVar2, *(undefined8*)( this + 0x270 ));
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RuntimeNodeSelect::_update_selection() */void RuntimeNodeSelect::_update_selection(RuntimeNodeSelect *this) {
   undefined8 *puVar1;
   code *pcVar2;
   int iVar3;
   char cVar4;
   long *plVar5;
   long *plVar6;
   long lVar7;
   Transform3D *this_00;
   long lVar8;
   long in_FS_OFFSET;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float fVar20;
   float fVar21;
   float fVar22;
   float fVar23;
   float fVar24;
   undefined1 auVar25[16];
   float local_1c8;
   float fStack_1c4;
   float fStack_1c0;
   float fStack_1bc;
   undefined8 local_198[4];
   undefined8 local_178;
   undefined8 uStack_170;
   undefined8 local_168;
   Object *local_158;
   Object *local_150;
   undefined8 local_148;
   float local_140;
   undefined8 local_138;
   float local_130;
   undefined8 local_128;
   float fStack_120;
   float fStack_11c;
   float fStack_118;
   float fStack_114;
   Transform3D local_108[36];
   float local_e4[3];
   undefined1 local_d8[8];
   undefined8 uStack_d0;
   float local_c8;
   float fStack_c4;
   float fStack_c0;
   float fStack_bc;
   float local_b8;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   float fStack_90;
   float fStack_8c;
   float local_88;
   undefined4 uStack_84;
   undefined8 uStack_80;
   undefined8 local_78;
   float fStack_70;
   float fStack_6c;
   float fStack_68;
   float fStack_64;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   lVar8 = *(long*)( this + 0x178 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x171] == (RuntimeNodeSelect)0x0) {
      if (lVar8 != 0) goto LAB_00102a17;
      fStack_118 = (float)_LC35;
      fStack_114 = (float)( (ulong)_LC35 >> 0x20 );
      local_128 = __LC34;
      fStack_120 = (float)_UNK_001225d8;
      fStack_11c = (float)( (ulong)_UNK_001225d8 >> 0x20 );
      LAB_00102c77:__LC34 = local_128;
      LAB_00102fb7:plVar5 = (long*)RenderingServer::get_singleton();
      this_00 = local_108;
      ( **(code**)( *plVar5 + 0xd70 ) )(plVar5, *(undefined8*)( this + 600 ), this[0x188]);
      for (int i = 0; i < 3; i++) {
         plVar5 = (long*)RenderingServer::get_singleton();
         ( **(code**)( *plVar5 + 3440 ) )(plVar5, *(undefined8*)( this + ( 8*i + 608 ) ), this[392]);
      }

      Node3D::get_global_transform();
      Node3D::get_global_transform();
      Transform3D::affine_inverse();
      Transform3D::operator *(this_00, (Transform3D*)&local_a8);
      lVar8 = 0;
      local_138 = 0;
      local_a8 = local_128;
      local_130 = 0.0;
      uStack_a0 = CONCAT44(uStack_a0._4_4_, fStack_120);
      _local_d8 = ZEXT812(0);
      local_148 = CONCAT44(fStack_118 + (float)( (ulong)local_128 >> 0x20 ), fStack_11c + (float)local_128);
      local_140 = fStack_120 + fStack_114;
      do {
         fVar19 = *(float*)( (long)local_e4 + lVar8 );
         lVar7 = 0;
         fVar13 = fVar19;
         do {
            fVar18 = *(float*)( (Transform3D*)&local_a8 + lVar7 ) * *(float*)( this_00 + lVar7 );
            fVar9 = *(float*)( this_00 + lVar7 ) * *(float*)( (long)&local_148 + lVar7 );
            fVar11 = fVar18;
            if (fVar18 < fVar9) {
               fVar11 = fVar9;
               fVar9 = fVar18;
            }

            fVar13 = fVar13 + fVar9;
            fVar19 = fVar19 + fVar11;
            lVar7 = lVar7 + 4;
         }
 while ( lVar7 != 0xc );
         *(float*)( (Vector3*)local_d8 + lVar8 ) = fVar19;
         this_00 = this_00 + 0xc;
         *(float*)( (long)&local_138 + lVar8 ) = fVar13;
         lVar8 = lVar8 + 4;
      }
 while ( lVar8 != 0xc );
      fStack_114 = (float)uStack_d0 - local_130;
      fStack_11c = SUB164(_local_d8, 0) - (float)local_138;
      fStack_118 = SUB164(_local_d8, 4) - (float)( (ulong)local_138 >> 0x20 );
      local_78 = local_138;
      fStack_70 = local_130;
      local_128 = local_138;
      fStack_120 = local_130;
      fStack_6c = fStack_11c;
      fStack_68 = fStack_118;
      fStack_64 = fStack_114;
      Node3D::get_global_transform();
      cVar4 = Transform3D::operator ==((Transform3D*)&local_a8, (Transform3D*)( this + 0x278 ));
      if (( cVar4 == '\0' ) || ( cVar4 = AABB::operator ==((AABB*)&local_128, (AABB*)( this + 0x2a8 )) ),cVar4 == '\0') {
         local_c8 = _LC36;
         local_58 = CONCAT44(uStack_84, local_88);
         _local_d8 = ZEXT416((uint)_LC36);
         uStack_60 = CONCAT44(fStack_8c, fStack_90);
         local_b8 = 1.0;
         *(undefined8*)( this + 0x278 ) = local_a8;
         *(undefined8*)( this + 0x280 ) = uStack_a0;
         *(undefined8*)( this + 0x298 ) = local_58;
         *(undefined8*)( this + 0x2a0 ) = uStack_80;
         fVar13 = _UNK_001224f4;
         fVar19 = _LC38;
         local_78 = local_a8;
         fStack_70 = (float)uStack_a0;
         fStack_6c = (float)( (ulong)uStack_a0 >> 0x20 );
         uStack_50 = uStack_80;
         *(ulong*)( this + 0x2b8 ) = CONCAT44(fStack_114, fStack_118);
         local_138 = CONCAT44(fStack_118 + fVar13, fStack_11c + fVar19);
         *(undefined8*)( this + 0x288 ) = local_98;
         *(undefined8*)( this + 0x290 ) = uStack_60;
         fStack_68 = (float)local_98;
         fStack_64 = (float)( (ulong)local_98 >> 0x20 );
         local_130 = _LC38 + fStack_114;
         *(undefined8*)( this + 0x2a8 ) = local_128;
         *(ulong*)( this + 0x2b0 ) = CONCAT44(fStack_11c, fStack_120);
         fStack_c4 = 0.0;
         fStack_c0 = 0.0;
         fStack_bc = 0.0;
         Basis::scale((Vector3*)local_d8);
         local_130 = fStack_120 - __LC40;
         local_138 = CONCAT44((float)( (ulong)local_128 >> 0x20 ) + _LC41._4_4_, (float)local_128 + (float)_LC41);
         Transform3D::translate_local((Vector3*)&local_a8);
         fVar11 = local_b8;
         fVar13 = fStack_c4;
         fVar19 = local_c8;
         fVar14 = fStack_c4 * fStack_8c;
         fVar9 = (float)uStack_d0 * fStack_90;
         local_b8 = 1.0;
         fVar24 = (float)uStack_d0 * (float)local_a8;
         fVar22 = local_c8 * local_a8._4_4_;
         fVar23 = fStack_c4 * local_a8._4_4_;
         fVar18 = (float)uStack_a0 * fStack_c0;
         fVar10 = (float)uStack_a0 * fStack_bc;
         fVar12 = local_98._4_4_ * fStack_c0;
         fVar15 = fStack_bc * local_98._4_4_;
         fVar16 = fStack_c0 * local_88;
         fVar17 = fStack_bc * local_88;
         fVar20 = uStack_a0._4_4_ * (float)local_d8._4_4_;
         uStack_d0._0_4_ = uStack_a0._4_4_ * (float)uStack_d0;
         fVar21 = fStack_90 * (float)local_d8._4_4_;
         local_c8 = _LC36;
         fStack_c4 = 0.0;
         fStack_c0 = 0.0;
         fStack_bc = 0.0;
         local_a8 = CONCAT44(fVar22 + (float)local_d8._4_4_ * (float)local_a8 + fVar10, uStack_d0._4_4_ * local_a8._4_4_ + (float)local_d8._0_4_ * (float)local_a8 + fVar18);
         uStack_a0 = CONCAT44(uStack_d0._4_4_ * (float)local_98 + (float)local_d8._0_4_ * uStack_a0._4_4_ + fVar12, fVar23 + fVar24 + (float)uStack_a0 * fVar11);
         fStack_90 = uStack_d0._4_4_ * fStack_8c + fStack_90 * (float)local_d8._0_4_ + fVar16;
         fStack_8c = fVar19 * fStack_8c + fVar21 + fVar17;
         local_138 = CONCAT44(fStack_118 + _LC43._4_4_, fStack_11c + (float)_LC43);
         local_98 = CONCAT44(fVar13 * (float)local_98 + (float)uStack_d0 + fVar11 * local_98._4_4_, fVar19 * (float)local_98 + fVar20 + fVar15);
         local_130 = _LC42 + fStack_114;
         _local_d8 = ZEXT416((uint)_LC36);
         local_88 = fVar9 + fVar14 + fVar11 * local_88;
         Basis::scale((Vector3*)local_d8);
         local_130 = fStack_120 - _LC38;
         local_138 = CONCAT44((float)( (ulong)local_128 >> 0x20 ) + _LC44._4_4_, (float)local_128 + (float)_LC44);
         Transform3D::translate_local((Vector3*)&local_78);
         fVar19 = (float)local_58;
         fVar18 = uStack_d0._4_4_ * fStack_68;
         local_58 = CONCAT44(local_58._4_4_, (float)uStack_d0 * (float)uStack_60 + fStack_c4 * uStack_60._4_4_ + local_b8 * (float)local_58);
         fVar13 = fStack_70 * fStack_c0;
         fVar11 = fStack_70 * fStack_bc;
         fVar9 = fStack_64 * fStack_c0;
         fStack_70 = fStack_70 * local_b8 + (float)uStack_d0 * (float)local_78 + fStack_c4 * local_78._4_4_;
         local_78 = CONCAT44(fVar11 + (float)local_d8._4_4_ * (float)local_78 + local_c8 * local_78._4_4_, fVar13 + (float)local_d8._0_4_ * (float)local_78 + uStack_d0._4_4_ * local_78._4_4_);
         fVar13 = fStack_c4 * fStack_68;
         fStack_68 = local_c8 * fStack_68 + fStack_6c * (float)local_d8._4_4_ + fStack_bc * fStack_64;
         fStack_64 = fVar13 + fStack_6c * (float)uStack_d0 + local_b8 * fStack_64;
         uStack_60 = CONCAT44(local_c8 * uStack_60._4_4_ + (float)uStack_60 * (float)local_d8._4_4_ + fStack_bc * fVar19, uStack_d0._4_4_ * uStack_60._4_4_ + (float)uStack_60 * (float)local_d8._0_4_ + fStack_c0 * fVar19);
         fStack_6c = fVar9 + (float)local_d8._0_4_ * fStack_6c + fVar18;
         plVar5 = (long*)RenderingServer::get_singleton();
         ( **(code**)( *plVar5 + 0xd40 ) )(plVar5, *(undefined8*)( this + 600 ), (Transform3D*)&local_a8);
         plVar5 = (long*)RenderingServer::get_singleton();
         ( **(code**)( *plVar5 + 0xd40 ) )(plVar5, *(undefined8*)( this + 0x260 ), (Vector3*)&local_78);
         plVar5 = (long*)RenderingServer::get_singleton();
         ( **(code**)( *plVar5 + 0xd40 ) )(plVar5, *(undefined8*)( this + 0x268 ), (Transform3D*)&local_a8);
         plVar5 = (long*)RenderingServer::get_singleton();
         ( **(code**)( *plVar5 + 0xd40 ) )(plVar5, *(undefined8*)( this + 0x270 ), (Vector3*)&local_78);
      }

   }
 else {
      if (( lVar8 == 0 ) || ( ( *(byte*)( lVar8 + 0x2fa ) & 0x40 ) == 0 )) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _clear_selection(this);
            return;
         }

         goto LAB_00103871;
      }

      LAB_00102a17:plVar5 = (long*)__dynamic_cast(lVar8, &Object::typeinfo, &CanvasItem::typeinfo, 0);
      if (plVar5 == (long*)0x0) {
         lVar8 = __dynamic_cast(lVar8, &Object::typeinfo, &Node3D::typeinfo, 0);
         local_128 = __LC34;
         fStack_120 = (float)_UNK_001225d8;
         fStack_11c = (float)( (ulong)_UNK_001225d8 >> 0x20 );
         fStack_118 = (float)_LC35;
         fStack_114 = (float)( (ulong)_LC35 >> 0x20 );
         if (lVar8 == 0) goto LAB_00102c77;
         plVar5 = (long*)__dynamic_cast(lVar8, &Object::typeinfo, &VisualInstance3D::typeinfo, 0);
         if (plVar5 == (long*)0x0) {
            lVar8 = __dynamic_cast(lVar8, &Object::typeinfo, &CollisionShape3D::typeinfo, 0);
            if (( lVar8 != 0 ) && ( CollisionShape3D::get_shape(),local_158 != (Object*)0x0 )) {
               Shape3D::get_debug_mesh();
               ( **(code**)( *(long*)local_150 + 0x230 ) )(local_198);
               fStack_118 = (float)local_198[2];
               fStack_114 = (float)( (ulong)local_198[2] >> 0x20 );
               local_128 = local_198[0];
               fStack_120 = (float)local_198[1];
               fStack_11c = (float)( (ulong)local_198[1] >> 0x20 );
               if (( local_150 != (Object*)0x0 ) && ( ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' && ( cVar4 = predelete_handler(local_150) ),cVar4 != '\0' )) {
                  ( **(code**)( *(long*)local_150 + 0x140 ) )(local_150);
                  Memory::free_static(local_150, false);
               }

               if (( ( local_158 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)local_158 + 0x140 ))(local_158);
               Memory::free_static(local_158, false);
            }

         }

      }
 else {
         ( **(code**)( *plVar5 + 0x1d8 ) )(local_198, plVar5);
         fStack_118 = (float)local_198[2];
         fStack_114 = (float)( (ulong)local_198[2] >> 0x20 );
         local_128 = local_198[0];
         fStack_120 = (float)local_198[1];
         fStack_11c = (float)( (ulong)local_198[1] >> 0x20 );
      }

      goto LAB_00102fb7;
   }

   local_a8 = 0x3f800000;
   uStack_a0 = 0x3f80000000000000;
   local_98 = 0;
   cVar4 = Viewport::is_canvas_transform_override_enabled();
   if (( cVar4 == '\0' ) || ( lVar8 = lVar8 != 0 )) {
      plVar6 = (long*)RenderingServer::get_singleton();
      fStack_70 = 0.0;
      fStack_6c = 1.0;
      local_78 = 0x3f800000;
      fStack_68 = 0.0;
      fStack_64 = 0.0;
      ( **(code**)( *plVar6 + 0xeb0 ) )(plVar6, *(undefined8*)( this + 0x1b8 ), &local_78);
      ( **(code**)( *plVar5 + 0x2a8 ) )(&local_178, plVar5);
      local_98 = local_168;
      local_a8 = local_178;
      uStack_a0 = uStack_170;
   }
 else {
      plVar6 = (long*)RenderingServer::get_singleton();
      pcVar2 = *(code**)( *plVar6 + 0xeb0 );
      Viewport::get_canvas_transform_override();
      ( *pcVar2 )(plVar6, *(undefined8*)( this + 0x1b8 ), &local_78);
      ( **(code**)( *plVar5 + 0x298 ) )(&local_178, plVar5);
      local_a8 = local_178;
      uStack_a0 = uStack_170;
      local_98 = local_168;
   }

   cVar4 = ( **(code**)( *plVar5 + 600 ) )(plVar5);
   if (cVar4 == '\0') {
      lVar8 = __dynamic_cast(plVar5, &Object::typeinfo, &CollisionShape2D::typeinfo, 0);
      if (lVar8 == 0) {
         fStack_1c4 = 0.0;
         local_1c8 = 0.0;
         fVar19 = __LC31;
         fVar13 = _UNK_001225b4;
         fStack_1c0 = _UNK_001225b8;
         fStack_1bc = _UNK_001225bc;
      }
 else {
         CollisionShape2D::get_shape();
         if (local_150 == (Object*)0x0) {
            local_1c8 = 0.0;
            fStack_1c4 = 0.0;
            fVar19 = __LC31;
            fVar13 = _UNK_001225b4;
            fStack_1c0 = _UNK_001225b8;
            fStack_1bc = _UNK_001225bc;
         }
 else {
            if (*(code**)( *(long*)local_150 + 0x1d8 ) == Shape2D::get_rect) {
               local_1c8 = 0.0;
               fStack_1c4 = 0.0;
               fStack_1c0 = 0.0;
               fStack_1bc = 0.0;
            }
 else {
               auVar25 = ( **(code**)( *(long*)local_150 + 0x1d8 ) )();
               local_1c8 = auVar25._0_4_;
               fStack_1c4 = auVar25._4_4_;
               fStack_1c0 = auVar25._8_4_;
               fStack_1bc = auVar25._12_4_;
               fVar19 = local_1c8;
               fVar13 = fStack_1c4;
               if (local_150 == (Object*)0x0) goto LAB_00102b4a;
            }

            cVar4 = RefCounted::unreference();
            fVar19 = local_1c8;
            fVar13 = fStack_1c4;
            if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler(local_150) ),cVar4 != '\0') {
               ( **(code**)( *(long*)local_150 + 0x140 ) )(local_150);
               Memory::free_static(local_150, false);
            }

         }

      }

   }
 else {
      auVar25 = ( **(code**)( *plVar5 + 0x260 ) )(plVar5);
      local_1c8 = auVar25._0_4_;
      fStack_1c4 = auVar25._4_4_;
      fStack_1c0 = auVar25._8_4_;
      fStack_1bc = auVar25._12_4_;
      fVar19 = local_1c8;
      fVar13 = fStack_1c4;
   }

   LAB_00102b4a:plVar5 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar5 + 0xe98 ) )(plVar5, *(undefined8*)( this + 0x1b8 ), this[0x188]);
   cVar4 = Transform2D::operator ==((Transform2D*)&local_a8, (Transform2D*)( this + 0x1c0 ));
   if (( ( ( cVar4 == '\0' ) || ( fVar19 != *(float*)( this + 0x1d8 ) ) ) || ( fVar13 != *(float*)( this + 0x1dc ) ) ) || ( ( fStack_1c0 != *(float*)( this + 0x1e0 ) || ( fStack_1bc != *(float*)( this + 0x1e4 ) ) ) )) {
      *(ulong*)( this + 0x1d8 ) = CONCAT44(fVar13, fVar19);
      *(ulong*)( this + 0x1e0 ) = CONCAT44(fStack_1bc, fStack_1c0);
      *(undefined8*)( this + 0x1d0 ) = local_98;
      *(undefined8*)( this + 0x1c0 ) = local_a8;
      *(undefined8*)( this + 0x1c8 ) = uStack_a0;
      plVar5 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar5 + 0xfb8 ) )(plVar5, *(undefined8*)( this + 0x1b8 ));
      fStack_1bc = fVar13 + fStack_1bc;
      fStack_1c0 = fStack_1c0 + fVar19;
      lVar8 = 0;
      fStack_70 = (float)local_a8 * fStack_1c0 + ( fVar13 + 0.0 ) * (float)uStack_a0 + (float)local_98;
      fStack_6c = local_a8._4_4_ * fStack_1c0 + ( fVar13 + 0.0 ) * uStack_a0._4_4_ + local_98._4_4_;
      local_78 = CONCAT44(local_a8._4_4_ * local_1c8 + fStack_1c4 * uStack_a0._4_4_ + local_98._4_4_, (float)local_a8 * local_1c8 + fStack_1c4 * (float)uStack_a0 + (float)local_98);
      fStack_68 = fStack_1c0 * (float)local_a8 + (float)uStack_a0 * fStack_1bc + (float)local_98;
      fStack_64 = fStack_1c0 * local_a8._4_4_ + uStack_a0._4_4_ * fStack_1bc + local_98._4_4_;
      uStack_60 = CONCAT44(fStack_1bc * uStack_a0._4_4_ + local_a8._4_4_ * ( fVar19 + 0.0 ) + local_98._4_4_, fStack_1bc * (float)uStack_a0 + (float)local_a8 * ( fVar19 + 0.0 ) + (float)local_98);
      uStack_d0 = _UNK_001225c8;
      local_d8 = (undefined1[8])__LC37;
      do {
         plVar5 = (long*)RenderingServer::get_singleton();
         puVar1 = &local_78 + lVar8;
         iVar3 = (int)lVar8;
         lVar8 = lVar8 + 1;
         ( **(code**)( *plVar5 + 0xef8 ) )(plVar5, *(undefined8*)( this + 0x1b8 ), puVar1, &local_78 + ( iVar3 + 1U & 3 ), local_d8, 0);
      }
 while ( lVar8 != 4 );
   }

}
if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
LAB_00103871:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* RuntimeNodeSelect::_queue_selection_update() */void RuntimeNodeSelect::_queue_selection_update(RuntimeNodeSelect *this) {
   char cVar1;
   if (this[0x171] == (RuntimeNodeSelect)0x0) {
      return;
   }

   if (this[0x188] == (RuntimeNodeSelect)0x0) {
      return;
   }

   cVar1 = SceneTree::is_suspended();
   if (cVar1 == '\0') {
      this[0x189] = (RuntimeNodeSelect)0x1;
      return;
   }

   _update_selection(this);
   return;
}
/* RuntimeNodeSelect::_select_node(Node*) [clone .part.0] */void RuntimeNodeSelect::_select_node(RuntimeNodeSelect *this, Node *param_1) {
   long lVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   long *plVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   Object *local_48;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   _clear_selection(this);
   if (param_1 == (Node*)0x0) goto LAB_00103c86;
   lVar4 = __dynamic_cast(param_1, &Object::typeinfo, &CanvasItem::typeinfo, 0);
   if (lVar4 == 0) {
      lVar4 = __dynamic_cast(param_1, &Object::typeinfo, &Node3D::typeinfo, 0);
      if (lVar4 == 0) {
         LAB_00103c86:this[0x171] = ( RuntimeNodeSelect )(*(long*)( this + 0x178 ) != 0);
         if (*(long*)( this + 0x178 ) != 0) goto LAB_00103940;
      }
 else if (( *(byte*)( lVar4 + 0x4d8 ) & 2 ) != 0) {
         *(Node**)( this + 0x178 ) = param_1;
         if (*(long*)( this + 0x248 ) != 0) {
            plVar5 = (long*)RenderingServer::get_singleton();
            pcVar2 = *(code**)( *plVar5 + 0xd10 );
            Node3D::get_world_3d();
            uVar6 = World3D::get_scenario();
            uVar7 = ( **(code**)( **(long**)( this + 0x248 ) + 0x1c0 ) )();
            uVar6 = ( *pcVar2 )(plVar5, uVar7, uVar6);
            *(undefined8*)( this + 600 ) = uVar6;
            if (( ( local_48 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)local_48 + 0x140 ))(local_48);
            Memory::free_static(local_48, false);
         }

         plVar5 = (long*)RenderingServer::get_singleton();
         pcVar2 = *(code**)( *plVar5 + 0xd10 );
         Node3D::get_world_3d();
         uVar6 = World3D::get_scenario();
         uVar7 = ( **(code**)( **(long**)( this + 0x248 ) + 0x1c0 ) )();
         uVar6 = ( *pcVar2 )(plVar5, uVar7, uVar6);
         *(undefined8*)( this + 0x260 ) = uVar6;
         if (( ( local_48 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)local_48 + 0x140 ))(local_48);
         Memory::free_static(local_48, false);
      }

      plVar5 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar5 + 0xdc0 ) )(plVar5, *(undefined8*)( this + 600 ), 0);
      plVar5 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar5 + 0xdc0 ) )(plVar5, *(undefined8*)( this + 0x260 ), 0);
      plVar5 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar5 + 0xdb8 ) )(plVar5, *(undefined8*)( this + 600 ), 3, 1);
      plVar5 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar5 + 0xdb8 ) )(plVar5, *(undefined8*)( this + 600 ), 0, 0);
      plVar5 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar5 + 0xdb8 ) )(plVar5, *(undefined8*)( this + 0x260 ), 3, 1);
      plVar5 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar5 + 0xdb8 ) )(plVar5, *(undefined8*)( this + 0x260 ), 0, 0);
   }

   if (*(long*)( this + 0x250 ) != 0) {
      plVar5 = (long*)RenderingServer::get_singleton();
      pcVar2 = *(code**)( *plVar5 + 0xd10 );
      Node3D::get_world_3d();
      uVar6 = World3D::get_scenario();
      uVar7 = ( **(code**)( **(long**)( this + 0x250 ) + 0x1c0 ) )();
      uVar6 = ( *pcVar2 )(plVar5, uVar7, uVar6);
      *(undefined8*)( this + 0x268 ) = uVar6;
      if (( ( local_48 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)local_48 + 0x140 ))(local_48);
      Memory::free_static(local_48, false);
   }

   plVar5 = (long*)RenderingServer::get_singleton();
   pcVar2 = *(code**)( *plVar5 + 0xd10 );
   Node3D::get_world_3d();
   uVar6 = World3D::get_scenario();
   uVar7 = ( **(code**)( **(long**)( this + 0x250 ) + 0x1c0 ) )();
   uVar6 = ( *pcVar2 )(plVar5, uVar7, uVar6);
   *(undefined8*)( this + 0x270 ) = uVar6;
   if (( ( local_48 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)local_48 + 0x140 ))(local_48);
   Memory::free_static(local_48, false);
}
plVar5 = (long*)RenderingServer::get_singleton();( **(code**)( *plVar5 + 0xdc0 ) )(plVar5, *(undefined8*)( this + 0x268 ), 0);plVar5 = (long*)RenderingServer::get_singleton();( **(code**)( *plVar5 + 0xdc0 ) )(plVar5, *(undefined8*)( this + 0x270 ), 0);plVar5 = (long*)RenderingServer::get_singleton();( **(code**)( *plVar5 + 0xdb8 ) )(plVar5, *(undefined8*)( this + 0x268 ), 3, 1);plVar5 = (long*)RenderingServer::get_singleton();( **(code**)( *plVar5 + 0xdb8 ) )(plVar5, *(undefined8*)( this + 0x268 ), 0, 0);plVar5 = (long*)RenderingServer::get_singleton();( **(code**)( *plVar5 + 0xdb8 ) )(plVar5, *(undefined8*)( this + 0x270 ), 3, 1);plVar5 = (long*)RenderingServer::get_singleton();( **(code**)( *plVar5 + 0xdb8 ) )(plVar5, *(undefined8*)( this + 0x270 ), 0, 0);}goto LAB_00103c86;}
  }
  else{
   *(Node**)( this + 0x178 ) = param_1;
   this[0x171] = (RuntimeNodeSelect)0x1;
   LAB_00103940:if (this[0x188] != (RuntimeNodeSelect)0x0) {
      cVar3 = SceneTree::is_suspended();
      if (cVar3 != '\0') {
         if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _update_selection(this);
            return;
         }

         goto LAB_00103ded;
      }

      this[0x189] = (RuntimeNodeSelect)0x1;
   }

}
if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
LAB_00103ded:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* RuntimeNodeSelect::_select_node(Node*) */void RuntimeNodeSelect::_select_node(RuntimeNodeSelect *this, Node *param_1) {
   if (*(Node**)( this + 0x178 ) != param_1) {
      _select_node(this, param_1);
      return;
   }

   return;
}
/* RuntimeNodeSelect::_set_selection_visible(bool) */void RuntimeNodeSelect::_set_selection_visible(RuntimeNodeSelect *this, bool param_1) {
   this[0x188] = (RuntimeNodeSelect)param_1;
   if (this[0x171] == (RuntimeNodeSelect)0x0) {
      return;
   }

   _update_selection(this);
   return;
}
/* RuntimeNodeSelect::_update_view_2d() */void RuntimeNodeSelect::_update_view_2d(RuntimeNodeSelect *this) {
   char cVar1;
   long in_FS_OFFSET;
   undefined8 local_38;
   undefined8 local_30;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = 0x3f80000000000000;
   local_38 = 0x3f800000;
   local_28 = 0;
   Transform2D::scale_basis((Vector2*)&local_38);
   local_28 = CONCAT44((float)( ( uint )(( ulong ) * (undefined8*)( this + 0x1a0 ) >> 0x20) ^ _LC45._4_4_ ) * *(float*)( this + 0x1a8 ), (float)( ( uint ) * (undefined8*)( this + 0x1a0 ) ^ (uint)_LC45 ) * *(float*)( this + 0x1a8 ));
   Viewport::set_canvas_transform_override(*(Transform2D**)( SceneTree::singleton + 0x368 ));
   if (( this[0x171] != (RuntimeNodeSelect)0x0 ) && ( this[0x188] != (RuntimeNodeSelect)0x0 )) {
      cVar1 = SceneTree::is_suspended();
      if (cVar1 == '\0') {
         this[0x189] = (RuntimeNodeSelect)0x1;
      }
 else {
         _update_selection(this);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RuntimeNodeSelect::_pan_callback(Vector2, Ref<InputEvent>) */void RuntimeNodeSelect::_pan_callback(undefined8 param_1, RuntimeNodeSelect *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   undefined1 auVar2[16];
   float fVar4;
   undefined1 auVar3[16];
   undefined8 local_38;
   undefined8 local_30;
   undefined8 local_28;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   Viewport::get_screen_transform();
   Transform2D::affine_inverse();
   fVar4 = (float)( (ulong)param_1 >> 0x20 );
   auVar2._0_4_ = (float)param_1 * (float)local_38 + fVar4 * (float)local_30 + (float)local_28;
   auVar2._4_4_ = (float)param_1 * (float)( (ulong)local_38 >> 0x20 ) + fVar4 * (float)( (ulong)local_30 >> 0x20 ) + (float)( (ulong)local_28 >> 0x20 );
   auVar2._8_8_ = 0;
   auVar3._4_4_ = *(undefined4*)( param_2 + 0x1a8 );
   auVar3._0_4_ = *(undefined4*)( param_2 + 0x1a8 );
   auVar3._8_8_ = _LC35;
   auVar2 = divps(auVar2, auVar3);
   *(ulong*)( param_2 + 0x1a0 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( param_2 + 0x1a0 ) >> 0x20 ) - auVar2._4_4_, (float)*(undefined8*)( param_2 + 0x1a0 ) - auVar2._0_4_);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _update_view_2d(param_2);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RuntimeNodeSelect::_zoom_callback(float, Vector2, Ref<InputEvent>) */void RuntimeNodeSelect::_zoom_callback(float param_1, undefined8 param_2, RuntimeNodeSelect *param_3) {
   long lVar1;
   long in_FS_OFFSET;
   undefined8 uVar2;
   undefined8 uVar3;
   float fVar6;
   undefined1 auVar4[16];
   undefined8 extraout_XMM0_Qb;
   undefined1 auVar5[16];
   float fVar10;
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar11[16];
   undefined8 local_38;
   undefined8 local_30;
   undefined8 local_28;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar10 = (float)( ( ulong ) * (undefined8*)( param_3 + 0x1a4 ) >> 0x20 );
   param_1 = fVar10 * param_1;
   auVar4._4_4_ = fVar10;
   auVar4._0_4_ = fVar10;
   fVar10 = *(float*)( param_3 + 0x18c );
   if (( *(float*)( param_3 + 0x18c ) <= param_1 ) && ( fVar10 = *(float*)( param_3 + 400 ) ),param_1 <= *(float*)( param_3 + 400 )) {
      fVar10 = param_1;
   }

   *(float*)( param_3 + 0x1a8 ) = fVar10;
   Viewport::get_screen_transform();
   Transform2D::affine_inverse();
   fVar6 = (float)( (ulong)param_2 >> 0x20 );
   auVar4._8_8_ = _LC35;
   fVar10 = *(float*)( param_3 + 0x1a8 );
   auVar7._0_8_ = CONCAT44((float)param_2 * (float)( (ulong)local_38 >> 0x20 ) + fVar6 * (float)( (ulong)local_30 >> 0x20 ) + (float)( (ulong)local_28 >> 0x20 ), (float)param_2 * (float)local_38 + fVar6 * (float)local_30 + (float)local_28);
   auVar7._8_8_ = 0;
   auVar8._8_8_ = 0;
   auVar8._0_8_ = auVar7._0_8_;
   auVar4 = divps(auVar8, auVar4);
   auVar11._4_4_ = fVar10;
   auVar11._0_4_ = fVar10;
   auVar11._8_8_ = _LC35;
   auVar8 = divps(auVar7, auVar11);
   *(ulong*)( param_3 + 0x1a0 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( param_3 + 0x1a0 ) >> 0x20 ) + ( auVar4._4_4_ - auVar8._4_4_ ), (float)*(undefined8*)( param_3 + 0x1a0 ) + ( auVar4._0_4_ - auVar8._0_4_ ));
   auVar5._0_4_ = roundf(fVar10);
   if (ABS(fVar10 - auVar5._0_4_) < _LC46) {
      auVar5._4_4_ = auVar5._0_4_;
      uVar2 = Vector2::floor();
      uVar3 = Vector2::round();
      auVar9._8_4_ = (int)extraout_XMM0_Qb;
      auVar9._0_8_ = uVar3;
      auVar9._12_4_ = (int)( (ulong)extraout_XMM0_Qb >> 0x20 );
      auVar5._8_8_ = _LC35;
      auVar4 = divps(auVar9, auVar5);
      *(ulong*)( param_3 + 0x1a0 ) = CONCAT44(auVar4._4_4_ + (float)( (ulong)uVar2 >> 0x20 ), auVar4._0_4_ + (float)uVar2);
   }

   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   _update_view_2d(param_3);
   return;
}
/* RuntimeNodeSelect::_reset_camera_2d() */void RuntimeNodeSelect::_reset_camera_2d(RuntimeNodeSelect *this) {
   long lVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_18;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   Viewport::get_canvas_transform();
   uVar2 = _LC45;
   *(undefined4*)( this + 0x1a8 ) = 0x3f800000;
   *(ulong*)( this + 0x1a0 ) = CONCAT44(( uint )((ulong)local_18 >> 0x20) ^ ( uint )((ulong)uVar2 >> 0x20), (uint)local_18 ^ (uint)uVar2);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _update_view_2d(this);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RuntimeNodeSelect::_scale_freelook_speed(float) */void RuntimeNodeSelect::_scale_freelook_speed(RuntimeNodeSelect *this, float param_1) {
   float fVar1;
   float fVar2;
   float fVar3;
   fVar2 = _LC47 * *(float*)( this + 0x218 );
   if (_LC47 * *(float*)( this + 0x218 ) <= *(float*)( this + 0x210 )) {
      fVar2 = *(float*)( this + 0x210 );
   }

   fVar3 = _LC48 * *(float*)( this + 0x21c );
   if (*(float*)( this + 0x214 ) <= _LC48 * *(float*)( this + 0x21c )) {
      fVar3 = *(float*)( this + 0x214 );
   }

   if (fVar2 <= fVar3) {
      fVar1 = param_1 * *(float*)( this + 0x238 );
      if (fVar1 < fVar2) {
         *(float*)( this + 0x238 ) = fVar2;
         return;
      }

      if (fVar1 <= fVar3) {
         fVar3 = fVar1;
      }

      *(float*)( this + 0x238 ) = fVar3;
      return;
   }

   *(float*)( this + 0x238 ) = ( fVar2 + fVar3 ) * __LC65;
   return;
}
/* RuntimeNodeSelect::_get_cursor_transform() */void RuntimeNodeSelect::_get_cursor_transform(void) {
   long lVar1;
   uint uVar2;
   long in_RSI;
   Vector3 *in_RDI;
   long in_FS_OFFSET;
   uVar2 = _LC36;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)( in_RDI + 0x20 ) = 0x3f800000;
   *(undefined1(*) [16])in_RDI = ZEXT416(uVar2);
   *(undefined1(*) [16])( in_RDI + 0x10 ) = ZEXT416(uVar2);
   *(undefined8*)( in_RDI + 0x24 ) = 0;
   *(undefined4*)( in_RDI + 0x2c ) = 0;
   Transform3D::translate_local(in_RDI);
   Basis::rotate(in_RDI, (float)( *(uint*)( in_RSI + 500 ) ^ _LC50 ));
   Basis::rotate(in_RDI, (float)( *(uint*)( in_RSI + 0x1f8 ) ^ _LC50 ));
   Transform3D::translate_local(0.0, 0.0, *(float*)( in_RSI + 0x1fc ));
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RuntimeNodeSelect::_set_camera_freelook_enabled(bool) */void RuntimeNodeSelect::_set_camera_freelook_enabled(RuntimeNodeSelect *this, bool param_1) {
   long lVar1;
   Vector2 *pVVar2;
   long in_FS_OFFSET;
   undefined8 uVar3;
   float fVar4;
   float local_48;
   float fStack_44;
   undefined8 local_40;
   float local_38;
   float fStack_34;
   float local_30;
   float local_2c;
   float local_28;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0x235] = (RuntimeNodeSelect)param_1;
   if (param_1) {
      _get_cursor_transform();
      fVar4 = (float)( ( ulong ) * (undefined8*)( this + 0x1f8 ) >> 0x20 );
      *(float*)( this + 0x20c ) = *(float*)( this + 0x1f0 ) - *(float*)( this + 0x1fc ) * ( ( local_30 * 0.0 + local_2c * 0.0 ) - local_28 );
      *(ulong*)( this + 0x204 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x1e8 ) >> 0x20 ) - ( ( (float)( (ulong)local_40 >> 0x20 ) * 0.0 + local_38 * 0.0 ) - fStack_34 ) * fVar4, (float)*(undefined8*)( this + 0x1e8 ) - ( ( local_48 * 0.0 + fStack_44 * 0.0 ) - (float)local_40 ) * fVar4);
      uVar3 = Viewport::get_mouse_position();
      *(undefined8*)( this + 0x23c ) = uVar3;
      pVVar2 = (Vector2*)Input::get_singleton();
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Input::set_mouse_mode_override(pVVar2, 2);
         return;
      }

   }
 else {
      uVar3 = Input::get_singleton();
      Input::set_mouse_mode_override(uVar3, 0);
      pVVar2 = (Vector2*)Input::get_singleton();
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Input::warp_mouse(pVVar2);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail(pVVar2);
}
/* RuntimeNodeSelect::_cursor_scale_distance(float) */void RuntimeNodeSelect::_cursor_scale_distance(RuntimeNodeSelect *this, float param_1) {
   long lVar1;
   Transform3D *pTVar2;
   long lVar3;
   long in_FS_OFFSET;
   float fVar4;
   float fVar5;
   float fVar6;
   lVar3 = SceneTree::singleton;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar4 = param_1 * *(float*)( this + 0x1fc );
   fVar5 = _LC47 * *(float*)( this + 0x218 );
   if (_LC47 * *(float*)( this + 0x218 ) <= *(float*)( this + 0x210 )) {
      fVar5 = *(float*)( this + 0x210 );
   }

   fVar6 = _LC48 * *(float*)( this + 0x21c );
   if (*(float*)( this + 0x214 ) <= _LC48 * *(float*)( this + 0x21c )) {
      fVar6 = *(float*)( this + 0x214 );
   }

   if (( fVar5 <= fVar4 ) && ( fVar5 = fVar4 <= fVar6 )) {
      fVar5 = fVar4;
   }

   *(float*)( this + 0x1fc ) = fVar5;
   pTVar2 = *(Transform3D**)( lVar3 + 0x368 );
   _get_cursor_transform();
   Viewport::set_camera_3d_override_transform(pTVar2);
   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RuntimeNodeSelect::_process_frame() */void RuntimeNodeSelect::_process_frame(RuntimeNodeSelect *this) {
   RuntimeNodeSelect RVar1;
   long lVar2;
   Transform3D *pTVar3;
   char cVar4;
   char cVar5;
   undefined8 uVar6;
   long *plVar7;
   long in_FS_OFFSET;
   double dVar8;
   float fVar9;
   float fVar11;
   double dVar10;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float local_c0;
   float fStack_bc;
   float local_b8;
   float local_b4;
   float local_a8;
   float fStack_a4;
   undefined8 local_a0;
   float local_98;
   float fStack_94;
   float local_90;
   float local_8c;
   float local_88;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x235] == (RuntimeNodeSelect)0x0) {
      LAB_00104624:if (this[0x189] != (RuntimeNodeSelect)0x0) goto LAB_00104631;
      LAB_00104a57:cVar5 = SceneTree::is_suspended();
      if (cVar5 == '\0') {
         RVar1 = this[0x171];
         this[0x189] = (RuntimeNodeSelect)0x0;
         goto joined_r0x0010463f;
      }

   }
 else {
      _get_cursor_transform();
      fVar9 = (float)( (ulong)local_a0 >> 0x20 );
      fVar13 = fVar9 * 0.0;
      fVar15 = (float)local_a0 * 0.0;
      fVar16 = fStack_a4 + local_a8 * 0.0 + fVar15;
      fVar18 = local_98 + fVar13 + fStack_94 * 0.0;
      fVar15 = local_a8 + fStack_a4 * 0.0 + fVar15;
      fVar11 = fVar9 + local_98 * 0.0 + fStack_94 * 0.0;
      fVar12 = ( local_a8 * 0.0 + fStack_a4 * 0.0 ) - (float)local_a0;
      fVar14 = ( fVar13 + local_98 * 0.0 ) - fStack_94;
      fVar17 = ( local_90 * 0.0 + local_8c * 0.0 ) - local_88;
      fVar13 = local_90 + local_8c * 0.0 + local_88 * 0.0;
      fVar9 = local_8c + local_90 * 0.0 + local_88 * 0.0;
      uVar6 = Input::get_singleton();
      cVar5 = Input::is_input_disabled();
      if (cVar5 != '\0') {
         Input::set_disable_input(SUB81(uVar6, 0));
      }

      cVar4 = Input::is_physical_key_pressed(uVar6, 0x41);
      if (cVar4 == '\0') {
         local_c0 = 0.0;
         fStack_bc = 0.0;
         local_b8 = 0.0;
      }
 else {
         local_c0 = 0.0 - fVar15;
         fStack_bc = 0.0 - fVar11;
         local_b8 = 0.0 - fVar13;
      }

      cVar4 = Input::is_physical_key_pressed(uVar6, 0x44);
      if (cVar4 != '\0') {
         local_b8 = local_b8 + fVar13;
         local_c0 = local_c0 + fVar15;
         fStack_bc = fStack_bc + fVar11;
      }

      cVar4 = Input::is_physical_key_pressed(uVar6, 0x57);
      if (cVar4 != '\0') {
         local_b8 = local_b8 + fVar17;
         local_c0 = local_c0 + fVar12;
         fStack_bc = fStack_bc + fVar14;
      }

      cVar4 = Input::is_physical_key_pressed(uVar6, 0x53);
      if (cVar4 != '\0') {
         local_b8 = local_b8 - fVar17;
         local_c0 = local_c0 - fVar12;
         fStack_bc = fStack_bc - fVar14;
      }

      cVar4 = Input::is_physical_key_pressed(uVar6, 0x45);
      if (cVar4 != '\0') {
         local_b8 = local_b8 + fVar9;
         local_c0 = local_c0 + fVar16;
         fStack_bc = fStack_bc + fVar18;
      }

      cVar4 = Input::is_physical_key_pressed(uVar6, 0x51);
      if (cVar4 != '\0') {
         local_b8 = local_b8 - fVar9;
         local_c0 = local_c0 - fVar16;
         fStack_bc = fStack_bc - fVar18;
      }

      local_b4 = *(float*)( this + 0x238 );
      cVar4 = Input::is_physical_key_pressed(uVar6, 0x400015);
      if (cVar4 != '\0') {
         local_b4 = local_b4 * __LC53;
      }

      cVar4 = Input::is_physical_key_pressed(uVar6, 0x400018);
      if (cVar4 != '\0') {
         local_b4 = (float)( (double)local_b4 * __LC54 );
      }

      if (cVar5 != '\0') {
         Input::set_disable_input(SUB81(uVar6, 0));
      }

      if (( fStack_bc == 0.0 && local_c0 == 0.0 ) && ( local_b8 == 0.0 )) goto LAB_00104624;
      plVar7 = (long*)Engine::get_singleton();
      if (*(code**)( *plVar7 + 0x40 ) == Engine::get_frames_per_second) {
         dVar10 = (double)plVar7[7];
      }
 else {
         dVar10 = (double)( **(code**)( *plVar7 + 0x40 ) )();
      }

      dVar10 = _LC55 / dVar10;
      Engine::get_singleton();
      dVar8 = (double)Engine::get_unfrozen_time_scale();
      pTVar3 = *(Transform3D**)( SceneTree::singleton + 0x368 );
      fVar9 = (float)( dVar8 * dVar10 );
      fVar15 = fVar9 * local_b4 * local_c0;
      fVar11 = fVar9 * local_b4 * fStack_bc;
      fVar9 = local_b4 * local_b8 * fVar9;
      *(ulong*)( this + 0x1e8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x1e8 ) >> 0x20 ) + fVar11, (float)*(undefined8*)( this + 0x1e8 ) + fVar15);
      *(float*)( this + 0x1f0 ) = *(float*)( this + 0x1f0 ) + fVar9;
      *(float*)( this + 0x20c ) = fVar9 + *(float*)( this + 0x20c );
      *(ulong*)( this + 0x204 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x204 ) >> 0x20 ) + fVar11, (float)*(undefined8*)( this + 0x204 ) + fVar15);
      _get_cursor_transform();
      Viewport::set_camera_3d_override_transform(pTVar3);
      if (this[0x189] == (RuntimeNodeSelect)0x0) goto LAB_00104a57;
      LAB_00104631:RVar1 = this[0x171];
      this[0x189] = (RuntimeNodeSelect)0x0;
      joined_r0x0010463f:if (RVar1 != (RuntimeNodeSelect)0x0) {
         if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _update_selection(this);
            return;
         }

         goto LAB_00104b0f;
      }

   }

   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00104b0f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RuntimeNodeSelect::_cursor_look(Ref<InputEventWithModifiers>) */void RuntimeNodeSelect::_cursor_look(RuntimeNodeSelect *this, long *param_2) {
   Transform3D *pTVar1;
   char cVar2;
   Ref *pRVar3;
   Object *pOVar4;
   long in_FS_OFFSET;
   float fVar5;
   float fVar6;
   undefined8 uVar7;
   double dVar8;
   Object *local_d0;
   float local_c8;
   float fStack_c4;
   undefined8 local_c0;
   float local_b8;
   float fStack_b4;
   float local_b0;
   float local_ac;
   float local_a8;
   undefined8 local_a4;
   float local_9c;
   undefined8 local_98;
   undefined8 local_90;
   float local_88;
   float fStack_84;
   float local_80;
   float local_7c;
   float local_78;
   undefined8 local_74;
   float local_6c;
   undefined8 local_68;
   undefined8 local_60;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pRVar3 = (Ref*)Input::get_singleton();
   local_98 = Window::get_size();
   local_60 = Vector2i::operator_cast_to_Vector2((Vector2i*)&local_98);
   local_68 = 0;
   local_d0 = (Object*)0x0;
   if (( ( *param_2 != 0 ) && ( pOVar4 = (Object*)__dynamic_cast(*param_2, &Object::typeinfo, &InputEventMouseMotion::typeinfo, 0) ),pOVar4 != (Object*)0x0 )) {
      local_d0 = (Object*)0x0;
   }

   uVar7 = Input::warp_mouse_motion(pRVar3, (Rect2*)&local_d0);
   if (( ( local_d0 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar4 = local_d0,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
   Memory::free_static(pOVar4, false);
}
_get_cursor_transform();fVar5 = (float)( (ulong)uVar7 >> 0x20 ) * *(float*)( this + 0x230 ) + *(float*)( this + 500 );dVar8 = (double)fVar5;fVar6 = _LC56;if (( _LC58 <= dVar8 ) && ( fVar6 = __LC59 < dVar8 )) {
   fVar6 = _LC57;
}
*(ulong*)( this + 500 ) = CONCAT44(*(float*)( this + 0x230 ) * (float)uVar7 + *(float*)( this + 0x1f8 ), fVar6);_get_cursor_transform();pTVar1 = *(Transform3D**)( SceneTree::singleton + 0x368 );*(float*)( this + 0x1f0 ) = ( ( local_a8 * 0.0 + local_b0 * 0.0 + local_ac * 0.0 + local_9c ) - ( local_78 * 0.0 + local_80 * 0.0 + local_7c * 0.0 + local_6c ) ) + *(float*)( this + 0x1f0 );*(ulong*)( this + 0x1e8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x1e8 ) >> 0x20 ) + ( ( (float)( (ulong)local_c0 >> 0x20 ) * 0.0 + local_b8 * 0.0 + fStack_b4 * 0.0 + (float)( (ulong)local_a4 >> 0x20 ) ) - ( (float)( (ulong)local_90 >> 0x20 ) * 0.0 + local_88 * 0.0 + fStack_84 * 0.0 + (float)( (ulong)local_74 >> 0x20 ) ) ), (float)*(undefined8*)( this + 0x1e8 ) + ( ( local_c8 * 0.0 + fStack_c4 * 0.0 + (float)local_c0 * 0.0 + (float)local_a4 ) - ( (float)local_98 * 0.0 + local_98._4_4_ * 0.0 + (float)local_90 * 0.0 + (float)local_74 ) ));_get_cursor_transform();Viewport::set_camera_3d_override_transform(pTVar1);if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RuntimeNodeSelect::_cursor_pan(Ref<InputEventWithModifiers>) */void RuntimeNodeSelect::_cursor_pan(RuntimeNodeSelect *this, long *param_2) {
   Transform3D *pTVar1;
   char cVar2;
   Ref *pRVar3;
   Object *pOVar4;
   long in_FS_OFFSET;
   undefined8 uVar5;
   Object *local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8;
   float local_b0;
   undefined1 local_a8[16];
   undefined1 local_98[16];
   undefined4 local_88;
   undefined8 local_84;
   undefined4 local_7c;
   undefined8 local_78;
   ulong local_70;
   long local_40;
   local_a8._8_8_ = local_a8._0_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pRVar3 = (Ref*)Input::get_singleton();
   local_c8 = __LC33;
   local_b8 = Vector2::operator_cast_to_Vector2i((Vector2*)&local_c8);
   local_c0 = Window::get_size();
   local_a8._0_8_ = Vector2i::operator -((Vector2i*)&local_c0, (Vector2i*)&local_b8);
   local_70 = Vector2i::operator_cast_to_Vector2((Vector2i*)local_a8);
   local_d0 = (Object*)0x0;
   local_78 = _LC35;
   if (*param_2 != 0) {
      pOVar4 = (Object*)__dynamic_cast(*param_2, &Object::typeinfo, &InputEventMouseMotion::typeinfo, 0);
      if (pOVar4 != (Object*)0x0) {
         local_d0 = pOVar4;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            local_d0 = (Object*)0x0;
         }

      }

   }

   uVar5 = Input::warp_mouse_motion(pRVar3, (Rect2*)&local_d0);
   if (local_d0 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar4 = local_d0;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_d0);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            Memory::free_static(pOVar4, false);
         }

      }

   }

   local_a8 = ZEXT416(_LC36);
   local_88 = 0x3f800000;
   local_84 = 0;
   local_7c = 0;
   local_98 = local_a8;
   Transform3D::translate_local((Vector3*)local_a8);
   local_70 = local_70 & 0xffffffff00000000;
   local_78 = 0x3f800000;
   Basis::rotate((Vector3*)local_a8, (float)( *(uint*)( this + 500 ) ^ _LC50 ));
   local_70 = local_70 & 0xffffffff00000000;
   local_78 = _LC52;
   Basis::rotate((Vector3*)local_a8, (float)( *(uint*)( this + 0x1f8 ) ^ _LC50 ));
   local_b0 = _LC48 * *(float*)( this + 0x1fc );
   local_b8 = CONCAT44((float)( (ulong)uVar5 >> 0x20 ) * _LC61._4_4_ * local_b0, (float)( (uint)uVar5 ^ _LC50 ) * (float)_LC61 * local_b0);
   local_b0 = local_b0 * 0.0;
   Transform3D::translate_local((Vector3*)local_a8);
   *(undefined8*)( this + 0x1e8 ) = local_84;
   *(undefined4*)( this + 0x1f0 ) = local_7c;
   pTVar1 = *(Transform3D**)( SceneTree::singleton + 0x368 );
   _get_cursor_transform();
   Viewport::set_camera_3d_override_transform(pTVar1);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RuntimeNodeSelect::_cursor_orbit(Ref<InputEventWithModifiers>) */void RuntimeNodeSelect::_cursor_orbit(RuntimeNodeSelect *this, long *param_2) {
   Transform3D *pTVar1;
   char cVar2;
   Ref *pRVar3;
   Object *pOVar4;
   long in_FS_OFFSET;
   float fVar5;
   float fVar6;
   undefined8 uVar7;
   double dVar8;
   Object *local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pRVar3 = (Ref*)Input::get_singleton();
   local_88 = __LC33;
   local_78 = Vector2::operator_cast_to_Vector2i((Vector2*)&local_88);
   local_80 = Window::get_size();
   local_70 = Vector2i::operator -((Vector2i*)&local_80, (Vector2i*)&local_78);
   local_60 = Vector2i::operator_cast_to_Vector2((Vector2i*)&local_70);
   local_90 = (Object*)0x0;
   local_68 = _LC35;
   if (( ( *param_2 != 0 ) && ( pOVar4 = (Object*)__dynamic_cast(*param_2, &Object::typeinfo, &InputEventMouseMotion::typeinfo, 0) ),pOVar4 != (Object*)0x0 )) {
      local_90 = (Object*)0x0;
   }

   uVar7 = Input::warp_mouse_motion(pRVar3, (Rect2*)&local_90);
   if (( ( local_90 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar4 = local_90,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
   Memory::free_static(pOVar4, false);
}
fVar5 = (float)( (ulong)uVar7 >> 0x20 ) * *(float*)( this + 0x230 ) + *(float*)( this + 500 );dVar8 = (double)fVar5;fVar6 = _LC56;if (( _LC58 <= dVar8 ) && ( fVar6 = __LC59 < dVar8 )) {
   fVar6 = _LC57;
}
pTVar1 = *(Transform3D**)( SceneTree::singleton + 0x368 );*(ulong*)( this + 500 ) = CONCAT44(*(float*)( this + 0x230 ) * (float)uVar7 + *(float*)( this + 0x1f8 ), fVar6);_get_cursor_transform();Viewport::set_camera_3d_override_transform(pTVar1);if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RuntimeNodeSelect::_handle_3d_input(Ref<InputEvent> const&) */undefined4 RuntimeNodeSelect::_handle_3d_input(RuntimeNodeSelect *this, Ref *param_1) {
   long lVar1;
   char cVar2;
   bool bVar3;
   undefined4 uVar4;
   int iVar5;
   Object *pOVar6;
   Object *pOVar7;
   Object *pOVar8;
   ulong uVar9;
   long in_FS_OFFSET;
   float fVar10;
   double dVar11;
   float fVar12;
   pOVar8 = *(Object**)param_1;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   pOVar6 = pOVar8;
   if (pOVar8 == (Object*)0x0) {
      LAB_00105830:uVar4 = 0;
      LAB_00105598:if (pOVar6 == (Object*)0x0) goto LAB_001054b8;
   }
 else {
      pOVar6 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &InputEventMouseButton::typeinfo, 0);
      if (pOVar6 == (Object*)0x0) {
         LAB_00105378:pOVar7 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &InputEventMouseMotion::typeinfo, 0);
         if (pOVar7 != (Object*)0x0) {
            uVar4 = RefCounted::reference();
            if ((char)uVar4 != '\0') {
               if (this[0x235] == (RuntimeNodeSelect)0x0) {
                  uVar9 = InputEventMouse::get_button_mask();
                  if (( uVar9 & 4 ) != 0) {
                     cVar2 = InputEventWithModifiers::is_shift_pressed();
                     if (cVar2 == '\0') {
                        pOVar8 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &InputEventWithModifiers::typeinfo, 0);
                        if (pOVar8 == (Object*)0x0) {
                           _cursor_orbit(this);
                        }
 else {
                           cVar2 = RefCounted::reference();
                           if (cVar2 != '\0') {
                              _cursor_orbit(this);
                              cVar2 = RefCounted::unreference();
                              goto joined_r0x00105857;
                           }

                           _cursor_orbit(this);
                        }

                     }
 else {
                        pOVar8 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &InputEventWithModifiers::typeinfo, 0);
                        if (pOVar8 == (Object*)0x0) {
                           _cursor_pan(this);
                        }
 else {
                           cVar2 = RefCounted::reference();
                           if (cVar2 == '\0') {
                              _cursor_pan(this);
                           }
 else {
                              _cursor_pan(this);
                              cVar2 = RefCounted::unreference();
                              joined_r0x00105857:if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar8) ),cVar2 != '\0') {
                                 ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
                                 Memory::free_static(pOVar8, false);
                              }

                           }

                        }

                     }

                  }

               }
 else {
                  pOVar8 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &InputEventWithModifiers::typeinfo, 0);
                  if (( pOVar8 != (Object*)0x0 ) && ( cVar2 = RefCounted::reference() ),cVar2 != '\0') {
                     _cursor_look(this);
                     cVar2 = RefCounted::unreference();
                     goto joined_r0x00105857;
                  }

                  _cursor_look(this);
               }

               cVar2 = RefCounted::unreference();
               if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar7) ),cVar2 != '\0') {
                  ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
                  Memory::free_static(pOVar7, false);
               }

               goto LAB_00105598;
            }

            pOVar8 = *(Object**)param_1;
            if (pOVar8 == (Object*)0x0) goto LAB_00105830;
         }

         pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &InputEventKey::typeinfo, 0);
         if (( pOVar8 == (Object*)0x0 ) || ( uVar4 = RefCounted::reference() ),(char)uVar4 == '\0') {
            uVar4 = 0;
         }
 else {
            iVar5 = InputEventKey::get_physical_keycode();
            if (iVar5 == 0x400001) {
               _set_camera_freelook_enabled(this, false);
            }
 else {
               cVar2 = InputEventWithModifiers::is_ctrl_pressed();
               if (cVar2 == '\0') {
                  LAB_00105408:uVar4 = 0;
               }
 else {
                  iVar5 = InputEventKey::get_physical_keycode();
                  if (iVar5 == 0x30) {
                     *(undefined4*)( this + 0x200 ) = 0x3f800000;
                     fVar10 = *(float*)( this + 0x220 );
                  }
 else {
                     if (iVar5 == 0x3d) {
                        fVar10 = *(float*)( this + 0x224 );
                        fVar12 = *(float*)( this + 0x228 );
                        dVar11 = (double)*(float*)( this + 0x200 ) - __LC63;
                        if ((double)fVar10 <= dVar11) {
                           LAB_001057d8:fVar10 = fVar12;
                           if (dVar11 <= (double)fVar12) {
                              fVar10 = (float)dVar11;
                           }

                        }

                     }
 else {
                        if (iVar5 != 0x2d) goto LAB_00105408;
                        fVar12 = *(float*)( this + 0x228 );
                        dVar11 = (double)*(float*)( this + 0x200 ) + __LC63;
                        fVar10 = *(float*)( this + 0x224 );
                        if ((double)*(float*)( this + 0x224 ) <= dVar11) goto LAB_001057d8;
                     }

                     *(float*)( this + 0x200 ) = fVar10;
                     fVar10 = fVar10 * *(float*)( this + 0x220 );
                  }

                  Viewport::set_camera_3d_override_perspective(fVar10, *(float*)( this + 0x218 ), *(float*)( this + 0x21c ));
               }

            }

            cVar2 = RefCounted::unreference();
            if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar8) ),cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
               Memory::free_static(pOVar8, false);
            }

         }

         goto LAB_00105598;
      }

      uVar4 = RefCounted::reference();
      if ((char)uVar4 == '\0') {
         pOVar8 = *(Object**)param_1;
         pOVar6 = (Object*)0x0;
         LAB_0010536f:if (pOVar8 == (Object*)0x0) goto LAB_00105830;
         goto LAB_00105378;
      }

      fVar10 = (float)InputEventMouseButton::get_factor();
      fVar10 = (float)( (double)fVar10 * __LC62 );
      iVar5 = InputEventMouseButton::get_button_index();
      if (iVar5 == 4) {
         if (this[0x235] == (RuntimeNodeSelect)0x0) {
            _cursor_scale_distance(this, _LC37 / fVar10);
         }
 else {
            _scale_freelook_speed(this, fVar10);
         }

      }
 else if (iVar5 == 5) {
         if (this[0x235] == (RuntimeNodeSelect)0x0) {
            _cursor_scale_distance(this, fVar10);
         }
 else {
            _scale_freelook_speed(this, _LC37 / fVar10);
         }

      }
 else {
         if (iVar5 != 2) {
            pOVar8 = *(Object**)param_1;
            goto LAB_0010536f;
         }

         bVar3 = (bool)InputEvent::is_pressed();
         _set_camera_freelook_enabled(this, bVar3);
      }

   }

   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar6) ),cVar2 != '\0') {
      ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
      Memory::free_static(pOVar6, false);
   }

   LAB_001054b8:if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RuntimeNodeSelect::_root_window_input(Ref<InputEvent> const&) */void RuntimeNodeSelect::_root_window_input(RuntimeNodeSelect *this, Ref *param_1) {
   long lVar1;
   char cVar2;
   int iVar3;
   Object *pOVar4;
   CallableCustom *this_00;
   long lVar5;
   long in_FS_OFFSET;
   undefined8 uVar6;
   Callable aCStack_88[16];
   Variant *local_78[2];
   int local_68[6];
   int local_50[8];
   long local_30;
   lVar5 = *(long*)( this + 0x180 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = *(long*)( SceneTree::singleton + 0x368 );
   if (*(int*)( this + 0x2cc ) == 0) {
      LAB_00105a37:if (( ( lVar5 != 0 ) && ( cVar2 = Window::is_visible() ),cVar2 != '\0' )) {
         Viewport::set_disable_input_override(SUB81(lVar1, 0));
         Viewport::push_input(*(Ref**)( this + 0x180 ), SUB81(param_1, 0));
         lVar5 = *(long*)( lVar1 + 600 );
         this_00 = (CallableCustom*)operator_new(0x48, "");
         CallableCustom::CallableCustom(this_00);
         *(undefined**)( this_00 + 0x20 ) = &_LC26;
         *(undefined1(*) [16])( this_00 + 0x30 ) = (undefined1[16])0x0;
         *(undefined***)this_00 = &PTR_hash_00122150;
         *(undefined8*)( this_00 + 0x40 ) = 0;
         uVar6 = *(undefined8*)( lVar5 + 0x60 );
         *(long*)( this_00 + 0x28 ) = lVar5;
         *(undefined8*)( this_00 + 0x30 ) = uVar6;
         *(undefined8*)( this_00 + 0x10 ) = 0;
         *(code**)( this_00 + 0x38 ) = Viewport::set_disable_input_override;
         CallableCustomMethodPointerBase::_setup((uint*)this_00, (int)this_00 + 0x28);
         *(char**)( this_00 + 0x20 ) = "Viewport::set_disable_input_override";
         Callable::Callable(aCStack_88, this_00);
         Variant::Variant((Variant*)local_68, true);
         Variant::Variant((Variant*)local_50, 0);
         local_78[0] = (Variant*)local_68;
         Callable::call_deferredp((Variant**)aCStack_88, (int)local_78);
         if (Variant::needs_deinit[local_50[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_68[0]] != '\0') {
            Variant::_clear_internal();
         }

         Callable::~Callable(aCStack_88);
      }

   }
 else {
      if (( lVar5 != 0 ) && ( cVar2 = Window::is_visible() ),cVar2 != '\0') {
         lVar5 = *(long*)( this + 0x180 );
         goto LAB_00105a37;
      }

      if (this[0x18b] == (RuntimeNodeSelect)0x0) {
         LAB_00105998:if (( ( *(long*)param_1 != 0 ) && ( pOVar4 = (Object*)__dynamic_cast(*(long*)param_1, &Object::typeinfo, &InputEventMouseButton::typeinfo, 0) ),pOVar4 != (Object*)0x0 )) {
            cVar2 = InputEvent::is_pressed();
            if (cVar2 == '\0') {
               LAB_001059fc:cVar2 = RefCounted::unreference();
            }
 else {
               if (( ( *(int*)( this + 0x2d0 ) == 0 ) && ( iVar3 = InputEventMouseButton::get_button_index() ),iVar3 == 2 )) {
                  this[0x2c8] = (RuntimeNodeSelect)0x1;
               }
 else {
                  this[0x2c8] = (RuntimeNodeSelect)0x0;
                  iVar3 = InputEventMouseButton::get_button_index();
                  if (iVar3 != 1) goto LAB_001059fc;
               }

               uVar6 = InputEventMouse::get_position();
               *(undefined8*)( this + 0x2c0 ) = uVar6;
               cVar2 = RefCounted::unreference();
            }

            if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar4) ),cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
               if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  Memory::free_static(pOVar4, false);
                  return;
               }

               goto LAB_00105c6a;
            }

         }

      }
 else {
         if (*(int*)( this + 0x2cc ) == 1) {
            uVar6 = *(undefined8*)( this + 0x198 );
            Viewport::get_visible_rect();
            cVar2 = ViewPanner::gui_input(0, uVar6, param_1);
         }
 else {
            if (*(int*)( this + 0x2cc ) != 2) goto LAB_00105998;
            cVar2 = _handle_3d_input(this, param_1);
         }

         if (cVar2 == '\0') goto LAB_00105998;
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00105c6a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RuntimeNodeSelect::_reset_camera_3d() */void RuntimeNodeSelect::_reset_camera_3d(RuntimeNodeSelect *this) {
   float fVar1;
   float fVar2;
   long lVar3;
   Transform3D *pTVar4;
   ulong uVar5;
   long lVar6;
   long in_FS_OFFSET;
   uint uVar7;
   float fVar8;
   uint extraout_XMM0_Db;
   undefined4 uStack_48;
   undefined4 uStack_44;
   uint uStack_30;
   undefined4 local_2c;
   lVar6 = __LC65;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   uStack_48 = ( undefined4 )((ulong)__LC65 >> 0x20);
   uStack_44 = (undefined4)__LC47;
   uVar5 = __LC47 >> 0x20;
   *(undefined8*)( this + 0x208 ) = 0;
   this[0x234] = (RuntimeNodeSelect)0x1;
   *(undefined8*)( this + 0x1e8 ) = 0;
   *(long*)( this + 0x1f0 ) = lVar6 << 0x20;
   *(ulong*)( this + 0x1f8 ) = CONCAT44(uStack_44, uStack_48);
   *(ulong*)( this + 0x200 ) = uVar5;
   lVar6 = Viewport::get_camera_3d();
   if (lVar6 == 0) {
      *(undefined4*)( this + 0x200 ) = 0x3f800000;
   }
 else {
      Node3D::get_global_transform();
      Transform3D::translate_local(0.0, 0.0, (float)( *(uint*)( this + 0x1fc ) ^ _LC50 ));
      *(ulong*)( this + 0x1e8 ) = (ulong)uStack_30 << 0x20;
      *(undefined4*)( this + 0x1f0 ) = local_2c;
      uVar7 = Node3D::get_global_rotation();
      *(uint*)( this + 500 ) = uVar7 ^ _LC50;
      Node3D::get_global_rotation();
      fVar1 = *(float*)( this + 0x228 );
      fVar2 = *(float*)( this + 0x224 );
      *(uint*)( this + 0x1f8 ) = extraout_XMM0_Db ^ _LC50;
      fVar8 = (float)Camera3D::get_fov();
      fVar8 = fVar8 / *(float*)( this + 0x220 );
      if (( fVar2 <= fVar8 ) && ( fVar2 = fVar8 <= fVar1 )) {
         fVar2 = fVar8;
      }

      *(float*)( this + 0x200 ) = fVar2;
   }

   pTVar4 = *(Transform3D**)( SceneTree::singleton + 0x368 );
   _get_cursor_transform();
   Viewport::set_camera_3d_override_transform(pTVar4);
   if (lVar3 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   Viewport::set_camera_3d_override_perspective(*(float*)( this + 0x220 ) * *(float*)( this + 0x200 ), *(float*)( this + 0x218 ), *(float*)( this + 0x21c ));
   return;
}
/* RuntimeNodeSelect::_set_camera_override_enabled(bool) */void RuntimeNodeSelect::_set_camera_override_enabled(RuntimeNodeSelect *this, bool param_1) {
   long lVar1;
   Transform3D *pTVar2;
   uint uVar3;
   uint uVar4;
   long in_FS_OFFSET;
   undefined8 local_48;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0x18b] = (RuntimeNodeSelect)param_1;
   if (param_1) {
      _update_view_2d(this);
      if (this[0x234] == (RuntimeNodeSelect)0x0) {
         _update_view_2d(this);
         pTVar2 = *(Transform3D**)( SceneTree::singleton + 0x368 );
         _get_cursor_transform();
         Viewport::set_camera_3d_override_transform(pTVar2);
         if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Viewport::set_camera_3d_override_perspective(*(float*)( this + 0x220 ) * *(float*)( this + 0x200 ), *(float*)( this + 0x218 ), *(float*)( this + 0x21c ));
            return;
         }

         goto LAB_00105fb8;
      }

      LAB_00105ed8:Viewport::get_canvas_transform();
      uVar4 = _LC45._4_4_;
      uVar3 = (uint)_LC45;
      *(undefined4*)( this + 0x1a8 ) = 0x3f800000;
      *(ulong*)( this + 0x1a0 ) = CONCAT44(( uint )((ulong)local_48 >> 0x20) ^ uVar4, (uint)local_48 ^ uVar3);
      _update_view_2d(this);
      _reset_camera_3d(this);
      this[0x234] = (RuntimeNodeSelect)0x0;
   }
 else if (this[0x234] != (RuntimeNodeSelect)0x0) goto LAB_00105ed8;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00105fb8:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* LiveEditor::_node_path_func(NodePath const&, int) */void LiveEditor::_node_path_func(LiveEditor *this, NodePath *param_1, int param_2) {
   NodePath *this_00;
   int local_c;
   local_c = param_2;
   this_00 = (NodePath*)HashMap<int,NodePath,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,NodePath>>>::operator []((HashMap<int,NodePath,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,NodePath>>>*)this, &local_c);
   NodePath::operator =(this_00, param_1);
   return;
}
/* RuntimeNodeSelect::_open_selection_list(Vector<RuntimeNodeSelect::SelectResult> const&, Vector2
   const&) */void RuntimeNodeSelect::_open_selection_list(RuntimeNodeSelect *this, Vector *param_1, Vector2 *param_2) {
   long *plVar1;
   code *pcVar2;
   undefined8 uVar3;
   Vector2i *pVVar4;
   StringName *pSVar5;
   long lVar6;
   char cVar7;
   int iVar8;
   PopupMenu *this_00;
   CallableCustom *this_01;
   undefined8 uVar9;
   undefined8 *puVar10;
   undefined8 *puVar11;
   Object *pOVar12;
   long in_FS_OFFSET;
   long local_d0;
   long local_c8[2];
   Object *local_b8;
   size_t local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   Variant *local_88[2];
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar9 = *(undefined8*)( SceneTree::singleton + 0x368 );
   this_00 = (PopupMenu*)operator_new(0xfe0, "");
   PopupMenu::PopupMenu(this_00);
   postinitialize_handler((Object*)this_00);
   *(PopupMenu**)( this + 0x180 ) = this_00;
   ThemeDB::get_singleton();
   ThemeDB::get_default_theme();
   Window::set_theme(this_00);
   if (( ( local_b8 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),pOVar12 = local_b8,cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar12 + 0x140 ))(pOVar12);
   Memory::free_static(pOVar12, false);
}
Node::set_auto_translate_mode(*(undefined8*)( this + 0x180 ), 2);Window::set_force_native(SUB81(*(undefined8*)( this + 0x180 ), 0));plVar1 = *(long**)( this + 0x180 );pcVar2 = *(code**)( *plVar1 + 0x108 );this_01 = (CallableCustom*)operator_new(0x48, "");CallableCustom::CallableCustom(this_01);*(undefined**)( this_01 + 0x20 ) = &_LC26;*(RuntimeNodeSelect**)( this_01 + 0x28 ) = this;*(undefined1(*) [16])( this_01 + 0x30 ) = (undefined1[16])0x0;*(undefined***)this_01 = &PTR_hash_001221e0;*(undefined8*)( this_01 + 0x40 ) = 0;uVar3 = *(undefined8*)( this + 0x60 );*(undefined8*)( this_01 + 0x10 ) = 0;*(undefined8*)( this_01 + 0x30 ) = uVar3;*(code**)( this_01 + 0x38 ) = _items_popup_index_pressed;CallableCustomMethodPointerBase::_setup((uint*)this_01, (int)this_01 + 0x28);*(char**)( this_01 + 0x20 ) = "RuntimeNodeSelect::_items_popup_index_pressed";Callable::Callable((Callable*)local_c8, this_01);Variant::Variant((Variant*)&local_78, *(Object**)( this + 0x180 ));local_60 = 0;local_58 = (undefined1[16])0x0;local_88[0] = (Variant*)&local_78;Callable::bindp((Variant**)&local_b8, (int)(Callable*)local_c8);if (Variant::needs_deinit[(int)local_60] != '\0') {
   Variant::_clear_internal();
}
if (Variant::needs_deinit[(int)local_78] != '\0') {
   Variant::_clear_internal();
}
StringName::StringName((StringName*)&local_d0, "index_pressed", false);( *pcVar2 )(plVar1, (StringName*)&local_d0, (Callable*)&local_b8, 0);if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
   StringName::unref();
}
Callable::~Callable((Callable*)&local_b8);Callable::~Callable((Callable*)local_c8);plVar1 = *(long**)( this + 0x180 );pcVar2 = *(code**)( *plVar1 + 0x108 );create_custom_callable_function_pointer<RuntimeNodeSelect>((RuntimeNodeSelect*)&local_b8, (char*)this, (_func_void*)"&RuntimeNodeSelect::_close_selection_list");StringName::StringName((StringName*)local_c8, "popup_hide", false);( *pcVar2 )(plVar1, (Callable*)local_c8, (Callable*)&local_b8, 0);if (( StringName::configured != '\0' ) && ( local_c8[0] != 0 )) {
   StringName::unref();
}
Callable::~Callable((Callable*)&local_b8);Node::add_child(uVar9, *(undefined8*)( this + 0x180 ), 0, 0);puVar11 = *(undefined8**)( param_1 + 8 );if (puVar11 != (undefined8*)0x0) {
   puVar10 = puVar11 + puVar11[-1] * 2;
   for (; puVar10 != puVar11; puVar11 = puVar11 + 2) {
      uVar9 = *(undefined8*)( this + 0x180 );
      Node::get_name();
      if (local_d0 == 0) {
         local_c8[0] = 0;
      }
 else {
         pOVar12 = *(Object**)( local_d0 + 8 );
         local_c8[0] = 0;
         if (pOVar12 == (Object*)0x0) {
            if (*(long*)( local_d0 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)local_c8, (CowData*)( local_d0 + 0x10 ));
            }

         }
 else {
            local_b0 = strlen((char*)pOVar12);
            local_b8 = pOVar12;
            String::parse_latin1((StrRange*)local_c8);
         }

      }

      PopupMenu::add_item(uVar9, (Callable*)local_c8, 0xffffffff, 0);
      lVar6 = local_c8[0];
      if (local_c8[0] != 0) {
         LOCK();
         plVar1 = (long*)( local_c8[0] + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_c8[0] = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
         StringName::unref();
      }

      uVar9 = *(undefined8*)( this + 0x180 );
      Variant::Variant((Variant*)&local_78, (Object*)*puVar11);
      PopupMenu::set_item_metadata((int)uVar9, (Variant*)0xffffffff);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

   }

}
pVVar4 = *(Vector2i**)( this + 0x180 );cVar7 = Window::is_embedded();if (cVar7 == '\0') {
   local_88[0] = (Variant*)Window::get_position();
   uVar9 = Vector2i::operator_cast_to_Vector2((Vector2i*)local_88);
   local_90 = CONCAT44((float)( (ulong)uVar9 >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( this + 0x2c0 ) >> 0x20 ), (float)uVar9 + (float)*(undefined8*)( this + 0x2c0 ));
}
 else {
   local_90 = *(undefined8*)param_2;
}
local_78 = Vector2::operator_cast_to_Vector2i((Vector2*)&local_90);Window::set_position(pVVar4);Window::reset_size();local_78 = 0;local_70 = 0;( **(code**)( **(long**)( this + 0x180 ) + 0x240 ) )(*(long**)( this + 0x180 ), (Variant*)&local_78);pSVar5 = *(StringName**)( this + 0x180 );local_a8 = 0x3f800000;local_98 = Vector2::operator_cast_to_Vector2i((Vector2*)&local_a8);local_a0 = Window::get_position();uVar9 = Vector2i::operator +((Vector2i*)&local_a0, (Vector2i*)&local_98);if ((_open_selection_list(Vector<RuntimeNodeSelect::SelectResult>const&,Vector2_const&)::
       {lambda()#1(iVar8 = __cxa_guard_acquire(&_open_selection_list(Vector<RuntimeNodeSelect::SelectResult>const&,Vector2_const&)
                                   ::{lambda()#1_scs_create((char *)&_open_selection_list(Vector<RuntimeNodeSelect::SelectResult>const&,Vector2_const&)
                         ::{lambda()#1__cxa_atexit(StringName::~StringName,
                 &_open_selection_list(Vector<RuntimeNodeSelect::SelectResult>const&,Vector2_const&)
                  ::{lambda()#1__cxa_guard_release (&_open_selection_list(Vector<RuntimeNodeSelect::SelectResult>const&,Vector2_const&)
                         ::{lambda()#1}if (_GLOBAL_OFFSET_TABLE_ != (undefined*)0x0) {
   MessageQueue::thread_singleton();
}
pOVar12 = MessageQueue::main_singleton;if (( *(Object**)( in_FS_OFFSET + lRam00000000001064fc ) != (Object*)0x0 ) && ( pOVar12 = *(Object**)( in_FS_OFFSET + lRam00000000001064fc ) ),_GLOBAL_OFFSET_TABLE_ != (undefined*)0x0) {
   MessageQueue::thread_singleton();
   pOVar12 = *(Object**)( in_FS_OFFSET + lRam000000000010651f );
}
local_90 = uVar9;Variant::Variant((Variant*)&local_78, (Vector2i*)&local_90);local_60 = 0;local_58 = (undefined1[16])0x0;local_88[0] = (Variant*)&local_78;CallQueue::push_callp
            (pOVar12,pSVar5,
             (Variant **)
             &_open_selection_list(Vector<RuntimeNodeSelect::SelectResult>const&,Vector2_const&)::
              {lambda()#1if (Variant::needs_deinit[(int)local_60] != '\0') {
   Variant::_clear_internal();
}
if (Variant::needs_deinit[(int)local_78] != '\0') {
   Variant::_clear_internal();
}
if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RuntimeNodeSelect::_setup(Dictionary const&) */void RuntimeNodeSelect::_setup(Dictionary *param_1) {
   long *plVar1;
   code *pcVar2;
   Viewport *pVVar3;
   long lVar4;
   char cVar5;
   bool bVar6;
   int iVar7;
   ViewPanner *this;
   CallableCustom *pCVar8;
   long *plVar9;
   undefined8 uVar10;
   SurfaceTool *this_00;
   SurfaceTool *this_01;
   BaseMaterial3D *this_02;
   Object *pOVar11;
   Object *pOVar12;
   Variant *in_RSI;
   uint uVar13;
   Vector3 *pVVar14;
   long in_FS_OFFSET;
   float fVar15;
   Object *local_120;
   Color *local_100;
   Variant local_e0[8];
   Object *local_d8[2];
   Object *local_c8[2];
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   ulong uStack_a0;
   undefined8 local_88;
   ulong local_80;
   undefined8 local_68;
   undefined4 uStack_60;
   undefined4 uStack_5c;
   undefined4 uStack_58;
   undefined4 uStack_54;
   uint uStack_50;
   undefined4 local_4c;
   undefined4 uStack_48;
   undefined4 local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar1 = (long*)SceneTree::singleton[0x6d];
   pcVar2 = *(code**)( *plVar1 + 0x118 );
   create_custom_callable_function_pointer<RuntimeNodeSelect,Ref<InputEvent>const&>((RuntimeNodeSelect*)local_c8, (char*)param_1, (_func_void_Ref_ptr*)"&RuntimeNodeSelect::_root_window_input");
   cVar5 = ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x30, (RuntimeNodeSelect*)local_c8);
   Callable::~Callable((Callable*)local_c8);
   if (cVar5 != '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("_setup", "scene/debugger/scene_debugger.cpp", 0x4d6, "Condition \"root->is_connected(SceneStringNames::get_singleton()->window_input, create_custom_callable_function_pointer(this, \"&RuntimeNodeSelect::_root_window_input\", &RuntimeNodeSelect::_root_window_input))\" is true.", 0, 0);
         return;
      }

      goto LAB_00107ac6;
   }

   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<RuntimeNodeSelect,Ref<InputEvent>const&>((RuntimeNodeSelect*)local_c8, (char*)param_1, (_func_void_Ref_ptr*)"&RuntimeNodeSelect::_root_window_input");
   ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x30, (RuntimeNodeSelect*)local_c8, 0);
   Callable::~Callable((Callable*)local_c8);
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<RuntimeNodeSelect>((RuntimeNodeSelect*)local_c8, (char*)param_1, (_func_void*)"&RuntimeNodeSelect::_queue_selection_update");
   StringName::StringName((StringName*)local_d8, "size_changed", false);
   ( *pcVar2 )(plVar1, (StringName*)local_d8, (RuntimeNodeSelect*)local_c8, 1);
   if (( StringName::configured != '\0' ) && ( local_d8[0] != (Object*)0x0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_c8);
   this(ViewPanner * operator_new(0x1c8, ""));
   ViewPanner::ViewPanner(this);
   postinitialize_handler((Object*)this);
   cVar5 = RefCounted::init_ref();
   if (cVar5 == '\0') {
      pOVar11 = *(Object**)( param_1 + 0x198 );
      if (pOVar11 != (Object*)0x0) {
         *(undefined8*)( param_1 + 0x198 ) = 0;
         cVar5 = RefCounted::unreference();
         if (cVar5 != '\0') {
            this(ViewPanner * 0x0);
            cVar5 = predelete_handler(pOVar11);
            if (cVar5 != '\0') goto LAB_00107943;
         }

         goto LAB_001068b8;
      }

   }
 else {
      pOVar11 = *(Object**)( param_1 + 0x198 );
      pOVar12 = pOVar11;
      if (this != (ViewPanner*)pOVar11) {
         *(ViewPanner**)( param_1 + 0x198 ) = this;
         cVar5 = RefCounted::reference();
         if (cVar5 == '\0') {
            *(undefined8*)( param_1 + 0x198 ) = 0;
         }

         pOVar12 = (Object*)this;
         if (( ( pOVar11 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) {
            LAB_00107943:( **(code**)( *(long*)pOVar11 + 0x140 ) )(pOVar11);
            Memory::free_static(pOVar11, false);
            pOVar12 = (Object*)this;
            if (this == (ViewPanner*)0x0) goto LAB_001068b8;
         }

      }

      cVar5 = RefCounted::unreference();
      if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(pOVar12) ),cVar5 != '\0') {
         ( **(code**)( *(long*)pOVar12 + 0x140 ) )(pOVar12);
         Memory::free_static(pOVar12, false);
      }

      LAB_001068b8:pOVar11 = *(Object**)( param_1 + 0x198 );
   }

   pCVar8 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar8);
   *(undefined**)( pCVar8 + 0x20 ) = &_LC26;
   *(undefined1(*) [16])( pCVar8 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar8 = &PTR_hash_001220c0;
   *(undefined8*)( pCVar8 + 0x40 ) = 0;
   uVar10 = *(undefined8*)( param_1 + 0x60 );
   *(undefined8*)( pCVar8 + 0x10 ) = 0;
   *(undefined8*)( pCVar8 + 0x30 ) = uVar10;
   *(code**)( pCVar8 + 0x38 ) = _zoom_callback;
   *(Dictionary**)( pCVar8 + 0x28 ) = param_1;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar8, (int)pCVar8 + 0x28);
   *(char**)( pCVar8 + 0x20 ) = "RuntimeNodeSelect::_zoom_callback";
   Callable::Callable((Callable*)local_c8, pCVar8);
   pCVar8 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar8);
   *(undefined**)( pCVar8 + 0x20 ) = &_LC26;
   *(undefined1(*) [16])( pCVar8 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar8 = &PTR_hash_00122030;
   *(undefined8*)( pCVar8 + 0x40 ) = 0;
   uVar10 = *(undefined8*)( param_1 + 0x60 );
   *(undefined8*)( pCVar8 + 0x10 ) = 0;
   *(undefined8*)( pCVar8 + 0x30 ) = uVar10;
   *(code**)( pCVar8 + 0x38 ) = _pan_callback;
   *(Dictionary**)( pCVar8 + 0x28 ) = param_1;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar8, (int)pCVar8 + 0x28);
   *(char**)( pCVar8 + 0x20 ) = "RuntimeNodeSelect::_pan_callback";
   Callable::Callable((Callable*)local_d8, pCVar8);
   ViewPanner::set_callbacks(pOVar11, (StringName*)local_d8, (RuntimeNodeSelect*)local_c8);
   Callable::~Callable((Callable*)local_d8);
   Callable::~Callable((Callable*)local_c8);
   Variant::Variant((Variant*)&local_88, 0);
   Variant::Variant((Variant*)&local_a8, "editors/panning/2d_editor_panning_scheme");
   Dictionary::get((Variant*)&local_68, in_RSI);
   iVar7 = Variant::operator_cast_to_int((Variant*)&local_68);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)&local_88, false);
   Variant::Variant((Variant*)&local_a8, "editors/panning/simple_panning");
   Dictionary::get((Variant*)&local_68, in_RSI);
   bVar6 = Variant::operator_cast_to_bool((Variant*)&local_68);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)&local_88, 0x14);
   Variant::Variant((Variant*)&local_a8, "editors/panning/2d_editor_pan_speed");
   Dictionary::get((Variant*)&local_68, in_RSI);
   Variant::operator_cast_to_int((Variant*)&local_68);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   Array::Array((Array*)local_c8);
   Variant::Variant((Variant*)&local_88, (Array*)local_c8);
   Variant::Variant((Variant*)&local_a8, "canvas_item_editor/pan_view");
   Dictionary::get((Variant*)&local_68, in_RSI);
   Variant::operator_cast_to_Array(local_e0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   Array::~Array((Array*)local_c8);
   uVar10 = *(undefined8*)( param_1 + 0x198 );
   DebuggerMarshalls::deserialize_key_shortcut((Array*)local_c8);
   ViewPanner::setup(uVar10, iVar7, (RuntimeNodeSelect*)local_c8, bVar6);
   if (( ( local_c8[0] != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_c8[0] + 0x140 ))(local_c8[0]);
   Memory::free_static(local_c8[0], false);
}
pVVar3 = *(Viewport**)( param_1 + 0x198 );Variant::Variant((Variant*)&local_88, true);Variant::Variant((Variant*)&local_a8, "editors/panning/warped_mouse_panning");Dictionary::get((Variant*)&local_68, in_RSI);Variant::operator_cast_to_bool((Variant*)&local_68);ViewPanner::setup_warped_panning(pVVar3, SUB81(plVar1, 0));if (Variant::needs_deinit[(int)local_68] != '\0') {
   Variant::_clear_internal();
}
if (Variant::needs_deinit[(int)local_a8] != '\0') {
   Variant::_clear_internal();
}
if (Variant::needs_deinit[(int)local_88] != '\0') {
   Variant::_clear_internal();
}
ViewPanner::set_scroll_speed((int)*(undefined8*)( param_1 + 0x198 ));plVar9 = (long*)RenderingServer::get_singleton();uVar10 = ( **(code**)( *plVar9 + 0xe20 ) )(plVar9);*(undefined8*)( param_1 + 0x1b0 ) = uVar10;plVar9 = (long*)RenderingServer::get_singleton();uVar10 = ( **(code**)( *plVar9 + 0xe78 ) )(plVar9);*(undefined8*)( param_1 + 0x1b8 ) = uVar10;plVar9 = (long*)RenderingServer::get_singleton();pcVar2 = *(code**)( *plVar9 + 0xa48 );uVar10 = Viewport::get_viewport_rid();( *pcVar2 )(plVar9, uVar10, *(undefined8*)( param_1 + 0x1b0 ));plVar9 = (long*)RenderingServer::get_singleton();( **(code**)( *plVar9 + 0xe80 ) )(plVar9, *(undefined8*)( param_1 + 0x1b8 ), *(undefined8*)( param_1 + 0x1b0 ));lVar4 = __LC65;local_4c = 0;uStack_48 = 0;local_44 = 0;uStack_5c = (undefined4)__LC65;uStack_58 = ( undefined4 )((ulong)__LC65 >> 0x20);uStack_54 = (undefined4)__LC47;uStack_50 = ( uint )((ulong)__LC47 >> 0x20);*(undefined8*)( param_1 + 0x208 ) = 0;local_68 = 0;uStack_60 = 0;*(ulong*)( param_1 + 0x1f8 ) = CONCAT44(uStack_54, uStack_58);*(ulong*)( param_1 + 0x200 ) = (ulong)uStack_50;*(undefined8*)( param_1 + 0x1e8 ) = 0;*(long*)( param_1 + 0x1f0 ) = lVar4 << 0x20;Variant::Variant((Variant*)&local_88, *(float*)( param_1 + 0x22c ));Variant::Variant((Variant*)&local_a8, "editors/3d/freelook/freelook_base_speed");Dictionary::get((Variant*)&local_68, in_RSI);fVar15 = Variant::operator_cast_to_float((Variant*)&local_68);*(float*)( param_1 + 0x238 ) = fVar15;if (Variant::needs_deinit[(int)local_68] != '\0') {
   Variant::_clear_internal();
}
if (Variant::needs_deinit[(int)local_a8] != '\0') {
   Variant::_clear_internal();
}
if (Variant::needs_deinit[(int)local_88] != '\0') {
   Variant::_clear_internal();
}
pVVar14 = (Vector3*)0x0;local_68 = __LC97;uStack_60 = (undefined4)_LC52;uStack_5c = ( undefined4 )((ulong)_LC52 >> 0x20);uStack_58 = (undefined4)_LC35;uStack_54 = ( undefined4 )((ulong)_LC35 >> 0x20);this_00 = (SurfaceTool*)operator_new(0x270, "");SurfaceTool::SurfaceTool(this_00);postinitialize_handler((Object*)this_00);cVar5 = RefCounted::init_ref();if (cVar5 == '\0') {
   this_00 = (SurfaceTool*)pVVar14;
}
this_01 = (SurfaceTool*)operator_new(0x270, "");SurfaceTool::SurfaceTool(this_01);postinitialize_handler((Object*)this_01);cVar5 = RefCounted::init_ref();if (cVar5 == '\0') {
   this_01 = (SurfaceTool*)pVVar14;
}
SurfaceTool::begin(this_00, 1);SurfaceTool::begin(this_01, 1);do {
   local_a8 = 0;
   uVar13 = (int)pVVar14 + 1;
   uStack_a0 = uStack_a0 & 0xffffffff00000000;
   local_88 = 0;
   local_80 = local_80 & 0xffffffff00000000;
   AABB::get_edge((int)(Variant*)&local_68, pVVar14, (Vector3*)&local_a8);
   SurfaceTool::add_vertex((Vector3*)this_00);
   SurfaceTool::add_vertex((Vector3*)this_00);
   SurfaceTool::add_vertex((Vector3*)this_01);
   SurfaceTool::add_vertex((Vector3*)this_01);
   pVVar14 = (Vector3*)(ulong)uVar13;
}
 while ( uVar13 != 0xc );local_120 = (Object*)operator_new(0x558, "");BaseMaterial3D::BaseMaterial3D((BaseMaterial3D*)local_120, false);*(undefined***)local_120 = &PTR__initialize_classv_00121a90;postinitialize_handler(local_120);cVar5 = RefCounted::init_ref();if (cVar5 == '\0') {
   BaseMaterial3D::set_shading_mode(0, 0);
   BaseMaterial3D::set_flag(0, 0x15, 1);
   local_b8 = __LC98;
   uStack_b0 = _UNK_00122628;
   BaseMaterial3D::set_albedo((Color*)0x0);
   BaseMaterial3D::set_transparency(0, 1);
   local_c8[0] = (Object*)0x0;
   local_120 = (Object*)0x0;
}
 else {
   BaseMaterial3D::set_shading_mode(local_120, 0);
   BaseMaterial3D::set_flag(local_120, 0x15, 1);
   local_b8 = __LC98;
   uStack_b0 = _UNK_00122628;
   BaseMaterial3D::set_albedo((Color*)local_120);
   BaseMaterial3D::set_transparency(local_120, 1);
   local_c8[0] = (Object*)0x0;
   pOVar11 = (Object*)__dynamic_cast(local_120, &Object::typeinfo, &Material::typeinfo, 0);
   if (( pOVar11 != (Object*)0x0 ) && ( local_c8[0] = pOVar11 ),cVar5 = RefCounted::reference(),cVar5 == '\0') {
      local_c8[0] = (Object*)0x0;
   }

}
local_100 = (Color*)&local_b8;SurfaceTool::set_material(this_00);if (( ( local_c8[0] != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar11 = local_c8[0],cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);Memory::free_static(pOVar11, false);}local_d8[0] = (Object*)0x0;SurfaceTool::commit((RuntimeNodeSelect*)local_c8, (ulong)this_00);pOVar11 = *(Object**)( param_1 + 0x248 );pOVar12 = pOVar11;if (local_c8[0] == pOVar11) {
   LAB_001070d9:if (( ( pOVar12 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar11 = local_c8[0],cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);
   Memory::free_static(pOVar11, false);
}
 else {
   *(Object**)( param_1 + 0x248 ) = local_c8[0];
   if (local_c8[0] != (Object*)0x0) {
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
         *(undefined8*)( param_1 + 0x248 ) = 0;
      }

      pOVar12 = local_c8[0];
      if (pOVar11 != (Object*)0x0) {
         cVar5 = RefCounted::unreference();
         goto joined_r0x00107683;
      }

      goto LAB_001070d9;
   }

   if (pOVar11 != (Object*)0x0) {
      cVar5 = RefCounted::unreference();
      joined_r0x00107683:pOVar12 = local_c8[0];
      if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(pOVar11) ),pOVar12 = local_c8[0],cVar5 != '\0') {
         ( **(code**)( *(long*)pOVar11 + 0x140 ) )(pOVar11);
         Memory::free_static(pOVar11, false);
         pOVar12 = local_c8[0];
      }

      goto LAB_001070d9;
   }

}
if (( ( local_d8[0] != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar11 = local_d8[0],cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);Memory::free_static(pOVar11, false);}this_02 = (BaseMaterial3D*)operator_new(0x558, "");BaseMaterial3D::BaseMaterial3D(this_02, false);*(undefined***)this_02 = &PTR__initialize_classv_00121a90;postinitialize_handler((Object*)this_02);cVar5 = RefCounted::init_ref();if (cVar5 == '\0') {
   this_02 = (BaseMaterial3D*)0x0;
   BaseMaterial3D::set_shading_mode(0, 0);
   BaseMaterial3D::set_flag(0, 0x15, 1);
   BaseMaterial3D::set_flag(0, 0, 1);
   local_a8 = _LC35;
   uStack_a0 = _UNK_00122638;
   local_88 = Color::operator *(local_100, (Color*)&local_a8);
   BaseMaterial3D::set_albedo((Color*)0x0);
   BaseMaterial3D::set_transparency(0, 1);
   local_c8[0] = (Object*)0x0;
}
 else {
   BaseMaterial3D::set_shading_mode(this_02, 0);
   BaseMaterial3D::set_flag(this_02, 0x15, 1);
   BaseMaterial3D::set_flag(this_02, 0, 1);
   local_a8 = _LC35;
   uStack_a0 = _UNK_00122638;
   local_88 = Color::operator *(local_100, (Color*)&local_a8);
   BaseMaterial3D::set_albedo((Color*)this_02);
   BaseMaterial3D::set_transparency(this_02, 1);
   local_c8[0] = (Object*)0x0;
   pOVar11 = (Object*)__dynamic_cast(this_02, &Object::typeinfo, &Material::typeinfo, 0);
   if (( pOVar11 != (Object*)0x0 ) && ( local_c8[0] = pOVar11 ),cVar5 = RefCounted::reference(),cVar5 == '\0') {
      local_c8[0] = (Object*)0x0;
   }

}
SurfaceTool::set_material(this_01);if (( ( local_c8[0] != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar11 = local_c8[0],cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);Memory::free_static(pOVar11, false);}local_d8[0] = (Object*)0x0;SurfaceTool::commit((RuntimeNodeSelect*)local_c8, (ulong)this_01);pOVar11 = *(Object**)( param_1 + 0x250 );pOVar12 = pOVar11;if (local_c8[0] == pOVar11) {
   LAB_00107259:if (( ( pOVar12 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar11 = local_c8[0],cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);
   Memory::free_static(pOVar11, false);
}
 else {
   *(Object**)( param_1 + 0x250 ) = local_c8[0];
   if (local_c8[0] != (Object*)0x0) {
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
         *(undefined8*)( param_1 + 0x250 ) = 0;
      }

      pOVar12 = local_c8[0];
      if (pOVar11 != (Object*)0x0) {
         cVar5 = RefCounted::unreference();
         goto joined_r0x0010724e;
      }

      goto LAB_00107259;
   }

   if (pOVar11 != (Object*)0x0) {
      cVar5 = RefCounted::unreference();
      joined_r0x0010724e:pOVar12 = local_c8[0];
      if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(pOVar11) ),pOVar12 = local_c8[0],cVar5 != '\0') {
         ( **(code**)( *(long*)pOVar11 + 0x140 ) )(pOVar11);
         Memory::free_static(pOVar11, false);
         pOVar12 = local_c8[0];
      }

      goto LAB_00107259;
   }

}
if (( ( local_d8[0] != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar11 = local_d8[0],cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);Memory::free_static(pOVar11, false);}plVar9 = SceneTree::singleton;pcVar2 = *(code**)( *SceneTree::singleton + 0x108 );create_custom_callable_function_pointer<RuntimeNodeSelect>((RuntimeNodeSelect*)local_c8, (char*)param_1, (_func_void*)"&RuntimeNodeSelect::_process_frame");StringName::StringName((StringName*)local_d8, "process_frame", false);( *pcVar2 )(plVar9, (StringName*)local_d8, (RuntimeNodeSelect*)local_c8, 0);if (( StringName::configured != '\0' ) && ( local_d8[0] != (Object*)0x0 )) {
   StringName::unref();
}
Callable::~Callable((Callable*)local_c8);plVar9 = SceneTree::singleton;pcVar2 = *(code**)( *SceneTree::singleton + 0x108 );create_custom_callable_function_pointer<RuntimeNodeSelect>((RuntimeNodeSelect*)local_c8, (char*)param_1, (_func_void*)"&RuntimeNodeSelect::_physics_frame");StringName::StringName((StringName*)local_d8, "physics_frame", false);( *pcVar2 )(plVar9, (StringName*)local_d8, (RuntimeNodeSelect*)local_c8, 0);if (( StringName::configured != '\0' ) && ( local_d8[0] != (Object*)0x0 )) {
   StringName::unref();
}
Callable::~Callable((Callable*)local_c8);pcVar2 = *(code**)( *plVar1 + 0x108 );create_custom_callable_function_pointer<RuntimeNodeSelect>((RuntimeNodeSelect*)local_c8, (char*)param_1, (_func_void*)"&RuntimeNodeSelect::_update_input_state");( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x38, (RuntimeNodeSelect*)local_c8, 4);Callable::~Callable((Callable*)local_c8);if (( ( this_02 != (BaseMaterial3D*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)this_02 + 0x140 ))(this_02);Memory::free_static(this_02, false);}if (( ( local_120 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_120 + 0x140 ))(local_120);Memory::free_static(local_120, false);}cVar5 = RefCounted::unreference();if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler((Object*)this_01) ),cVar5 != '\0') {
   ( **(code**)( *(long*)this_01 + 0x140 ) )(this_01);
   Memory::free_static(this_01, false);
}
cVar5 = RefCounted::unreference();if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler((Object*)this_00) ),cVar5 != '\0') {
   ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
   Memory::free_static(this_00, false);
}
Array::~Array((Array*)local_e0);if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
LAB_00107ac6:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* RuntimeNodeSelect::_items_popup_index_pressed(int, PopupMenu*) */void RuntimeNodeSelect::_items_popup_index_pressed(int param_1, PopupMenu *param_2) {
   code *pcVar1;
   long *plVar2;
   long lVar3;
   long in_FS_OFFSET;
   Array aAStack_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   PopupMenu::get_item_metadata((int)(Variant*)local_48);
   lVar3 = Variant::get_validated_object();
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (lVar3 != 0) {
      Array::Array(aAStack_68);
      local_58 = *(char**)( lVar3 + 0x60 );
      Variant::Variant((Variant*)local_48, (ObjectID*)&local_58);
      Array::push_back((Variant*)aAStack_68);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      plVar2 = EngineDebugger::singleton;
      local_60 = 0;
      pcVar1 = *(code**)( *EngineDebugger::singleton + 8 );
      local_50 = 0x13;
      local_58 = "remote_node_clicked";
      String::parse_latin1((StrRange*)&local_60);
      ( *pcVar1 )(plVar2, (StrRange*)&local_60, aAStack_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      Array::~Array(aAStack_68);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* SceneDebugger::SceneDebugger() */void SceneDebugger::SceneDebugger(SceneDebugger *this) {
   undefined8 uVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   void *pvVar5;
   Object *this_00;
   long in_FS_OFFSET;
   undefined1 auVar6[16];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   singleton = this;
   pvVar5 = operator_new(0xd0, "");
   *(undefined1(*) [16])( (long)pvVar5 + 8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( (long)pvVar5 + 0x18 ) = (undefined1[16])0x0;
   uVar1 = _LC25;
   *(undefined1(*) [16])( (long)pvVar5 + 0x38 ) = (undefined1[16])0x0;
   *(undefined8*)( (long)pvVar5 + 0x28 ) = uVar1;
   *(undefined8*)( (long)pvVar5 + 0x58 ) = uVar1;
   *(undefined8*)( (long)pvVar5 + 0x98 ) = uVar1;
   *(undefined8*)( (long)pvVar5 + 200 ) = uVar1;
   *(undefined1(*) [16])( (long)pvVar5 + 0x48 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( (long)pvVar5 + 0x60 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( (long)pvVar5 + 0x78 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( (long)pvVar5 + 0x88 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( (long)pvVar5 + 0xa8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( (long)pvVar5 + 0xb8 ) = (undefined1[16])0x0;
   local_48 = "/root";
   local_50 = 0;
   local_40 = 5;
   LiveEditor::singleton = pvVar5;
   String::parse_latin1((StrRange*)&local_50);
   NodePath::NodePath((NodePath*)&local_48, (String*)&local_50);
   NodePath::operator =((NodePath*)( (long)pvVar5 + 0x60 ), (NodePath*)&local_48);
   NodePath::~NodePath((NodePath*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LiveEditor::singleton = pvVar5;
   this_00 = (Object*)operator_new(0x2d8, "");
   Object::Object(this_00);
   uVar4 = __LC47;
   uVar3 = __LC65;
   uVar2 = _LC37;
   *(undefined1(*) [16])( this_00 + 0x178 ) = (undefined1[16])0x0;
   *(undefined***)this_00 = &PTR__initialize_classv_00121c90;
   uVar1 = _LC108;
   *(undefined8*)( this_00 + 500 ) = uVar3;
   *(undefined8*)( this_00 + 0x1fc ) = uVar4;
   uVar4 = _UNK_00122648;
   uVar3 = __LC42;
   *(undefined8*)( this_00 + 0x18c ) = uVar1;
   *(undefined8*)( this_00 + 0x210 ) = uVar3;
   *(undefined8*)( this_00 + 0x218 ) = uVar4;
   uVar3 = _UNK_00122658;
   uVar1 = __LC110;
   *(undefined8*)( this_00 + 0x1c8 ) = 0x3f80000000000000;
   *(undefined4*)( this_00 + 0x1a8 ) = uVar2;
   *(undefined8*)( this_00 + 0x220 ) = uVar1;
   *(undefined8*)( this_00 + 0x228 ) = uVar3;
   *(undefined2*)( this_00 + 0x234 ) = 1;
   *(undefined1(*) [16])( this_00 + 0x1b0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x248 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 600 ) = (undefined1[16])0x0;
   this_00[0x171] = (Object)0x0;
   *(undefined4*)( this_00 + 0x188 ) = 1;
   *(undefined8*)( this_00 + 0x198 ) = 0;
   *(undefined8*)( this_00 + 0x1a0 ) = 0;
   *(undefined8*)( this_00 + 0x1c0 ) = 0x3f800000;
   *(undefined8*)( this_00 + 0x1d0 ) = 0;
   *(undefined8*)( this_00 + 0x1d8 ) = 0;
   *(undefined8*)( this_00 + 0x1e0 ) = 0;
   *(undefined8*)( this_00 + 0x1e8 ) = 0;
   *(undefined4*)( this_00 + 0x1f0 ) = 0;
   *(undefined8*)( this_00 + 0x204 ) = 0;
   *(undefined4*)( this_00 + 0x20c ) = 0;
   *(undefined4*)( this_00 + 0x230 ) = 0x3b83126f;
   *(undefined4*)( this_00 + 0x238 ) = 0x40800000;
   *(undefined8*)( this_00 + 0x23c ) = 0;
   *(undefined1(*) [16])( this_00 + 0x268 ) = (undefined1[16])0x0;
   uVar1 = _LC113;
   auVar6 = ZEXT416(_LC36);
   *(undefined8*)( this_00 + 0x29c ) = 0;
   *(undefined8*)( this_00 + 0x2c0 ) = uVar1;
   *(undefined4*)( this_00 + 0x2a4 ) = 0;
   *(undefined8*)( this_00 + 0x2a8 ) = 0;
   *(undefined4*)( this_00 + 0x2b0 ) = 0;
   *(undefined8*)( this_00 + 0x2b4 ) = 0;
   *(undefined4*)( this_00 + 700 ) = 0;
   this_00[0x2c8] = (Object)0x0;
   *(undefined8*)( this_00 + 0x2cc ) = 1;
   *(undefined1(*) [16])( this_00 + 0x278 ) = auVar6;
   *(undefined1(*) [16])( this_00 + 0x288 ) = auVar6;
   *(undefined4*)( this_00 + 0x298 ) = uVar2;
   RuntimeNodeSelect::singleton = this_00;
   postinitialize_handler(this_00);
   RuntimeNodeSelect::singleton = this_00;
   StringName::StringName((StringName*)&local_48, "scene", false);
   EngineDebugger::register_message_capture((NodePath*)&local_48, parse_message, 0);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SceneDebugger::initialize() */void SceneDebugger::initialize(void) {
   SceneDebugger *this;
   if (( EngineDebugger::singleton != 0 ) && ( EngineDebugger::script_debugger != 0 )) {
      this(SceneDebugger * operator_new(1, ""));
      SceneDebugger(this);
      return;
   }

   return;
}
/* SceneDebuggerTree::deserialize(Array const&) */void SceneDebuggerTree::deserialize(SceneDebuggerTree *this, Array *param_1) {
   CowData<char32_t> *this_00;
   long *plVar1;
   int iVar2;
   int iVar3;
   int *piVar4;
   Variant *pVVar5;
   undefined8 uVar6;
   long lVar7;
   undefined1(*pauVar8)[16];
   char *pcVar9;
   long lVar10;
   int iVar11;
   undefined1 uVar12;
   long in_FS_OFFSET;
   long local_90;
   long local_88;
   long local_80;
   int local_78;
   undefined1 local_70[16];
   undefined8 local_60;
   long local_58;
   undefined1 local_50;
   long local_40;
   iVar11 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = Array::size();
   if (0 < iVar2) {
      do {
         iVar2 = Array::size();
         if (iVar2 < 6) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar6 = 0x2b2;
               pcVar9 = "Condition \"p_arr.size() < 6\" is true.";
               LAB_00108339:_err_print_error("deserialize", "scene/debugger/scene_debugger.cpp", uVar6, pcVar9, 0, 0);
               return;
            }

            goto LAB_001084aa;
         }

         iVar2 = (int)param_1;
         piVar4 = (int*)Array::operator [](iVar2);
         if (*piVar4 != 2) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar6 = 0x2b3;
               pcVar9 = "Condition \"p_arr[idx].get_type() != Variant::INT\" is true.";
               goto LAB_00108339;
            }

            goto LAB_001084aa;
         }

         piVar4 = (int*)Array::operator [](iVar2);
         if (*piVar4 != 4) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar6 = 0x2b4;
               pcVar9 = "Condition \"p_arr[idx + 1].get_type() != Variant::STRING\" is true.";
               goto LAB_00108339;
            }

            goto LAB_001084aa;
         }

         piVar4 = (int*)Array::operator [](iVar2);
         if (*piVar4 != 4) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar6 = 0x2b5;
               pcVar9 = "Condition \"p_arr[idx + 2].get_type() != Variant::STRING\" is true.";
               goto LAB_00108339;
            }

            goto LAB_001084aa;
         }

         piVar4 = (int*)Array::operator [](iVar2);
         if (*piVar4 != 2) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar6 = 0x2b6;
               pcVar9 = "Condition \"p_arr[idx + 3].get_type() != Variant::INT\" is true.";
               goto LAB_00108339;
            }

            goto LAB_001084aa;
         }

         piVar4 = (int*)Array::operator [](iVar2);
         if (*piVar4 != 4) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar6 = 0x2b7;
               pcVar9 = "Condition \"p_arr[idx + 4].get_type() != Variant::STRING\" is true.";
               goto LAB_00108339;
            }

            goto LAB_001084aa;
         }

         piVar4 = (int*)Array::operator [](iVar2);
         if (*piVar4 != 2) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar6 = 0x2b8;
               pcVar9 = "Condition \"p_arr[idx + 5].get_type() != Variant::INT\" is true.";
               goto LAB_00108339;
            }

            goto LAB_001084aa;
         }

         pVVar5 = (Variant*)Array::operator [](iVar2);
         iVar3 = Variant::operator_cast_to_int(pVVar5);
         Array::operator [](iVar2);
         Variant::operator_cast_to_String((Variant*)&local_80);
         pVVar5 = (Variant*)Array::operator [](iVar2);
         uVar6 = Variant::operator_cast_to_ObjectID(pVVar5);
         Array::operator [](iVar2);
         Variant::operator_cast_to_String((Variant*)&local_88);
         Array::operator [](iVar2);
         Variant::operator_cast_to_String((Variant*)&local_90);
         pVVar5 = (Variant*)Array::operator [](iVar2);
         local_78 = Variant::operator_cast_to_int(pVVar5);
         local_60 = 0;
         local_58 = 0;
         local_50 = 0;
         local_70 = (undefined1[16])0x0;
         lVar7 = local_90;
         if (local_90 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)local_70, (CowData*)&local_90);
            lVar7 = local_70._8_8_;
         }

         this_00 = (CowData<char32_t>*)( local_70 + 8 );
         if (lVar7 != local_88) {
            CowData<char32_t>::_ref(this_00, (CowData*)&local_88);
         }

         lVar7 = local_80;
         local_60 = uVar6;
         if (local_58 != local_80) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_80);
            lVar7 = local_58;
         }

         uVar12 = (undefined1)iVar3;
         local_50 = uVar12;
         if (*(long*)this == 0) {
            pauVar8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])this = pauVar8;
            *(undefined4*)pauVar8[1] = 0;
            *pauVar8 = (undefined1[16])0x0;
         }

         piVar4 = (int*)operator_new(0x48, DefaultAllocator::alloc);
         piVar4[6] = 0;
         piVar4[7] = 0;
         *piVar4 = local_78;
         piVar4[8] = 0;
         piVar4[9] = 0;
         *(undefined1*)( piVar4 + 10 ) = 0;
         piVar4[0x10] = 0;
         piVar4[0x11] = 0;
         *(undefined1(*) [16])( piVar4 + 2 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( piVar4 + 0xc ) = (undefined1[16])0x0;
         lVar10 = local_70._0_8_;
         if (local_70._0_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( piVar4 + 2 ), (CowData*)local_70);
            lVar10 = *(long*)( piVar4 + 4 );
         }

         if (lVar10 != local_70._8_8_) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( piVar4 + 4 ), (CowData*)this_00);
         }

         *(undefined8*)( piVar4 + 6 ) = local_60;
         if (lVar7 != *(long*)( piVar4 + 8 )) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( piVar4 + 8 ), (CowData*)&local_58);
         }

         *(undefined1*)( piVar4 + 10 ) = uVar12;
         plVar1 = *(long**)this;
         lVar7 = plVar1[1];
         piVar4[0xc] = 0;
         piVar4[0xd] = 0;
         *(long**)( piVar4 + 0x10 ) = plVar1;
         *(long*)( piVar4 + 0xe ) = lVar7;
         if (lVar7 != 0) {
            *(int**)( lVar7 + 0x30 ) = piVar4;
         }

         plVar1[1] = (long)piVar4;
         if (*plVar1 == 0) {
            *plVar1 = (long)piVar4;
         }

         *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
         iVar11 = iVar11 + 6;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref(this_00);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         iVar2 = Array::size();
      }
 while ( iVar11 < iVar2 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001084aa:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* SceneDebugger::_handle_input(Ref<InputEvent> const&, Ref<Shortcut> const&) */void SceneDebugger::_handle_input(Ref *param_1, Ref *param_2) {
   Ref *pRVar1;
   code *pcVar2;
   long *plVar3;
   char cVar4;
   char cVar5;
   Object *pOVar6;
   Object *pOVar7;
   long in_FS_OFFSET;
   Array aAStack_68[8];
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)param_1 != 0) {
      pOVar6 = (Object*)__dynamic_cast(*(long*)param_1, &Object::typeinfo, &InputEventKey::typeinfo, 0);
      if (pOVar6 != (Object*)0x0) {
         cVar4 = RefCounted::reference();
         if (cVar4 != '\0') {
            if (*(long*)param_2 != 0) {
               cVar4 = InputEvent::is_pressed();
               if (cVar4 != '\0') {
                  cVar4 = ( **(code**)( *(long*)pOVar6 + 0x1c8 ) )(pOVar6);
                  if (cVar4 == '\0') {
                     local_58 = (Object*)0x0;
                     pRVar1 = *(Ref**)param_2;
                     pOVar7 = (Object*)__dynamic_cast(pOVar6, &Object::typeinfo, &InputEvent::typeinfo, 0);
                     if (pOVar7 != (Object*)0x0) {
                        local_58 = pOVar7;
                        cVar4 = RefCounted::reference();
                        if (cVar4 == '\0') {
                           local_58 = (Object*)0x0;
                        }

                     }

                     cVar4 = Shortcut::matches_event(pRVar1);
                     if (local_58 != (Object*)0x0) {
                        cVar5 = RefCounted::unreference();
                        pOVar7 = local_58;
                        if (cVar5 != '\0') {
                           cVar5 = predelete_handler(local_58);
                           if (cVar5 != '\0') {
                              ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
                              Memory::free_static(pOVar7, false);
                           }

                        }

                     }

                     plVar3 = EngineDebugger::singleton;
                     if (cVar4 != '\0') {
                        pcVar2 = *(code**)( *EngineDebugger::singleton + 8 );
                        Array::Array(aAStack_68);
                        local_58 = (Object*)0x114510;
                        local_60 = 0;
                        local_50 = 0xc;
                        String::parse_latin1((StrRange*)&local_60);
                        ( *pcVar2 )(plVar3, (StrRange*)&local_60, aAStack_68);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                        Array::~Array(aAStack_68);
                     }

                  }

               }

            }

            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
               cVar4 = predelete_handler(pOVar6);
               if (cVar4 != '\0') {
                  ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     Memory::free_static(pOVar6, false);
                     return;
                  }

                  goto LAB_001086ad;
               }

            }

         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001086ad:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* SceneDebugger::remove_from_cache(String const&, Node*) */void SceneDebugger::remove_from_cache(String *param_1, Node *param_2) {
   uint *puVar1;
   undefined4 *puVar2;
   undefined4 *puVar3;
   undefined8 *puVar4;
   long *plVar5;
   undefined4 uVar6;
   long lVar7;
   undefined8 *puVar8;
   Object *pOVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   undefined8 uVar13;
   void *pvVar14;
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
   undefined1 auVar35[16];
   undefined1 auVar36[16];
   undefined1 auVar37[16];
   undefined1 auVar38[16];
   undefined1 auVar39[16];
   undefined1 auVar40[16];
   undefined1 auVar41[16];
   undefined1 auVar42[16];
   undefined1 auVar43[16];
   undefined1 auVar44[16];
   undefined1 auVar45[16];
   undefined1 auVar46[16];
   undefined1 auVar47[16];
   undefined1 auVar48[16];
   undefined1 auVar49[16];
   undefined1 auVar50[16];
   undefined1 auVar51[16];
   undefined1 auVar52[16];
   undefined1 auVar53[16];
   undefined1 auVar54[16];
   undefined1 auVar55[16];
   undefined1 auVar56[16];
   undefined1 auVar57[16];
   undefined1 auVar58[16];
   undefined1 auVar59[16];
   undefined1 auVar60[16];
   undefined1 auVar61[16];
   undefined1 auVar62[16];
   undefined1 auVar63[16];
   undefined1 auVar64[16];
   undefined1 auVar65[16];
   undefined1 auVar66[16];
   undefined1 auVar67[16];
   undefined1 auVar68[16];
   undefined1 auVar69[16];
   undefined1 auVar70[16];
   long lVar71;
   char cVar72;
   uint uVar73;
   ulong uVar74;
   uint *puVar75;
   uint uVar76;
   uint uVar77;
   int iVar78;
   long lVar79;
   long lVar80;
   ulong uVar81;
   long lVar82;
   ulong uVar83;
   uint *puVar84;
   long *plVar85;
   uint *puVar86;
   ulong uVar87;
   long lVar88;
   uint uVar89;
   ulong uVar90;
   uint *puVar91;
   uint uVar92;
   lVar71 = LiveEditor::singleton;
   if (LiveEditor::singleton == 0) {
      return;
   }

   if (( *(long*)( LiveEditor::singleton + 0x78 ) != 0 ) && ( *(int*)( LiveEditor::singleton + 0x9c ) != 0 )) {
      uVar73 = ( &hash_table_size_primes )[*(uint*)( LiveEditor::singleton + 0x98 )];
      lVar7 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( LiveEditor::singleton + 0x98 ) * 8 );
      uVar89 = String::hash();
      uVar74 = CONCAT44(0, uVar73);
      lVar88 = *(long*)( lVar71 + 0x80 );
      uVar76 = 1;
      if (uVar89 != 0) {
         uVar76 = uVar89;
      }

      auVar19._8_8_ = 0;
      auVar19._0_8_ = (ulong)uVar76 * lVar7;
      auVar47._8_8_ = 0;
      auVar47._0_8_ = uVar74;
      lVar79 = SUB168(auVar19 * auVar47, 8);
      uVar89 = *(uint*)( lVar88 + lVar79 * 4 );
      uVar77 = SUB164(auVar19 * auVar47, 8);
      if (uVar89 != 0) {
         uVar92 = 0;
         do {
            if (uVar76 == uVar89) {
               cVar72 = String::operator ==((String*)( *(long*)( *(long*)( lVar71 + 0x78 ) + lVar79 * 8 ) + 0x10 ), param_1);
               if (cVar72 != '\0') {
                  lVar7 = *(long*)( lVar71 + 0x78 );
                  lVar88 = *(long*)( lVar7 + (ulong)uVar77 * 8 );
                  if (lVar88 != 0) {
                     lVar79 = *(long*)( lVar88 + 0x18 );
                     uVar73 = *(uint*)( lVar88 + 0x3c );
                     if (lVar79 == 0) goto LAB_00108c02;
                     if (uVar73 == 0) goto LAB_00108c10;
                     lVar82 = *(long*)( lVar88 + 0x30 );
                     uVar73 = ( &hash_table_size_primes )[*(uint*)( lVar88 + 0x38 )];
                     lVar10 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar88 + 0x38 ) * 8 );
                     uVar87 = CONCAT44(0, uVar73);
                     uVar74 = (long)param_2 * 0x3ffff - 1;
                     uVar74 = ( uVar74 ^ uVar74 >> 0x1f ) * 0x15;
                     uVar74 = ( uVar74 ^ uVar74 >> 0xb ) * 0x41;
                     uVar74 = uVar74 >> 0x16 ^ uVar74;
                     uVar83 = uVar74 & 0xffffffff;
                     if ((int)uVar74 == 0) {
                        uVar83 = 1;
                     }

                     auVar23._8_8_ = 0;
                     auVar23._0_8_ = uVar83 * lVar10;
                     auVar51._8_8_ = 0;
                     auVar51._0_8_ = uVar87;
                     lVar80 = SUB168(auVar23 * auVar51, 8);
                     uVar76 = *(uint*)( lVar82 + lVar80 * 4 );
                     iVar78 = SUB164(auVar23 * auVar51, 8);
                     if (uVar76 != 0) {
                        uVar89 = 0;
                        goto LAB_00108aa4;
                     }

                  }

                  break;
               }

               lVar88 = *(long*)( lVar71 + 0x80 );
            }

            uVar92 = uVar92 + 1;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = ( ulong )(uVar77 + 1) * lVar7;
            auVar48._8_8_ = 0;
            auVar48._0_8_ = uVar74;
            lVar79 = SUB168(auVar20 * auVar48, 8);
            uVar89 = *(uint*)( lVar88 + lVar79 * 4 );
            uVar77 = SUB164(auVar20 * auVar48, 8);
            if (( uVar89 == 0 ) || ( auVar21._8_8_ = 0 ),auVar21._0_8_ = (ulong)uVar89 * lVar7,auVar49._8_8_ = 0,auVar49._0_8_ = uVar74,auVar22._8_8_ = 0,auVar22._0_8_ = ( ulong )(( uVar73 + uVar77 ) - SUB164(auVar21 * auVar49, 8)) * lVar7,auVar50._8_8_ = 0,auVar50._0_8_ = uVar74,SUB164(auVar22 * auVar50, 8) < uVar92) break;
         }
 while ( true );
      }

   }

   LAB_001086fb:lVar7 = *(long*)( lVar71 + 0xa8 );
   if (( lVar7 != 0 ) && ( *(int*)( lVar71 + 0xcc ) != 0 )) {
      uVar87 = CONCAT44(0, ( &hash_table_size_primes )[*(uint*)( lVar71 + 200 )]);
      lVar88 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar71 + 200 ) * 8 );
      uVar74 = (long)param_2 * 0x3ffff - 1;
      uVar74 = ( uVar74 ^ uVar74 >> 0x1f ) * 0x15;
      uVar74 = ( uVar74 ^ uVar74 >> 0xb ) * 0x41;
      uVar74 = uVar74 >> 0x16 ^ uVar74;
      uVar83 = uVar74 & 0xffffffff;
      if ((int)uVar74 == 0) {
         uVar83 = 1;
      }

      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar83 * lVar88;
      auVar43._8_8_ = 0;
      auVar43._0_8_ = uVar87;
      lVar79 = SUB168(auVar15 * auVar43, 8);
      uVar73 = *(uint*)( *(long*)( lVar71 + 0xb0 ) + lVar79 * 4 );
      uVar76 = SUB164(auVar15 * auVar43, 8);
      if (uVar73 != 0) {
         uVar89 = 0;
         while (( (uint)uVar83 != uVar73 || ( *(Node**)( *(long*)( lVar7 + lVar79 * 8 ) + 0x10 ) != param_2 ) )) {
            uVar89 = uVar89 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = ( ulong )(uVar76 + 1) * lVar88;
            auVar44._8_8_ = 0;
            auVar44._0_8_ = uVar87;
            lVar79 = SUB168(auVar16 * auVar44, 8);
            uVar73 = *(uint*)( *(long*)( lVar71 + 0xb0 ) + lVar79 * 4 );
            uVar76 = SUB164(auVar16 * auVar44, 8);
            if (uVar73 == 0) {
               return;
            }

            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)uVar73 * lVar88;
            auVar45._8_8_ = 0;
            auVar45._0_8_ = uVar87;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = ( ulong )(( ( &hash_table_size_primes )[*(uint*)( lVar71 + 200 )] + uVar76 ) - SUB164(auVar17 * auVar45, 8)) * lVar88;
            auVar46._8_8_ = 0;
            auVar46._0_8_ = uVar87;
            if (SUB164(auVar18 * auVar46, 8) < uVar89) {
               return;
            }

         }
;
         lVar7 = *(long*)( lVar7 + (ulong)uVar76 * 8 );
         if (lVar7 != 0) {
            for (puVar8 = *(undefined8**)( lVar7 + 0x30 ); puVar8 != (undefined8*)0x0; puVar8 = (undefined8*)*puVar8) {
               pOVar9 = (Object*)puVar8[3];
               cVar72 = predelete_handler(pOVar9);
               if (cVar72 != '\0') {
                  ( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
                  Memory::free_static(pOVar9, false);
               }

            }

            HashMap<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator < HashMapElement < ObjectID,Node*>>>> >> ::erase(( HashMap<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator < HashMapElement < ObjectID,Node*>>>> >> * )(lVar71 + 0xa0), (Node**)( lVar7 + 0x10 ));
            return;
         }

      }

   }

   return;
   LAB_00108aa4:if ((uint)uVar83 == uVar76) {
      lVar11 = *(long*)( lVar88 + 0x20 );
      uVar76 = *(uint*)( lVar11 + lVar80 * 4 );
      uVar74 = (ulong)uVar76;
      if (*(Node**)( lVar79 + uVar74 * 8 ) == param_2) {
         lVar12 = *(long*)( lVar88 + 0x28 );
         puVar91 = (uint*)( lVar12 + uVar74 * 4 );
         uVar89 = *puVar91;
         uVar83 = (ulong)uVar89;
         auVar27._8_8_ = 0;
         auVar27._0_8_ = ( ulong )(uVar89 + 1) * lVar10;
         auVar55._8_8_ = 0;
         auVar55._0_8_ = uVar87;
         lVar80 = SUB168(auVar27 * auVar55, 8) * 4;
         uVar77 = SUB164(auVar27 * auVar55, 8);
         uVar90 = (ulong)uVar77;
         puVar84 = (uint*)( lVar82 + lVar80 );
         if (( *puVar84 == 0 ) || ( auVar28._8_8_ = 0 ),auVar28._0_8_ = ( ulong ) * puVar84 * lVar10,auVar56._8_8_ = 0,auVar56._0_8_ = uVar87,auVar29._8_8_ = 0,auVar29._0_8_ = ( ulong )(( uVar73 + uVar77 ) - SUB164(auVar28 * auVar56, 8)) * lVar10,auVar57._8_8_ = 0,auVar57._0_8_ = uVar87,SUB164(auVar29 * auVar57, 8) == 0) {
            uVar90 = (ulong)uVar89;
         }
 else {
            while (true) {
               puVar75 = (uint*)( lVar80 + lVar11 );
               puVar1 = (uint*)( lVar11 + uVar83 * 4 );
               puVar86 = (uint*)( uVar83 * 4 + lVar82 );
               puVar2 = (undefined4*)( lVar12 + ( ulong ) * puVar75 * 4 );
               puVar3 = (undefined4*)( lVar12 + ( ulong ) * puVar1 * 4 );
               uVar6 = *puVar3;
               *puVar3 = *puVar2;
               *puVar2 = uVar6;
               uVar89 = *puVar84;
               *puVar84 = *puVar86;
               *puVar86 = uVar89;
               uVar89 = *puVar75;
               *puVar75 = *puVar1;
               *puVar1 = uVar89;
               auVar32._8_8_ = 0;
               auVar32._0_8_ = ( ulong )((int)uVar90 + 1) * lVar10;
               auVar60._8_8_ = 0;
               auVar60._0_8_ = uVar87;
               uVar81 = SUB168(auVar32 * auVar60, 8);
               lVar80 = uVar81 * 4;
               puVar84 = (uint*)( lVar82 + lVar80 );
               if (( *puVar84 == 0 ) || ( auVar30._8_8_ = 0 ),auVar30._0_8_ = ( ulong ) * puVar84 * lVar10,auVar58._8_8_ = 0,auVar58._0_8_ = uVar87,auVar31._8_8_ = 0,auVar31._0_8_ = ( ulong )(( SUB164(auVar32 * auVar60, 8) + uVar73 ) - SUB164(auVar30 * auVar58, 8)) * lVar10,auVar59._8_8_ = 0,auVar59._0_8_ = uVar87,SUB164(auVar31 * auVar59, 8) == 0) break;
               uVar83 = uVar90;
               uVar90 = uVar81 & 0xffffffff;
            }
;
         }

         *(undefined4*)( lVar82 + uVar90 * 4 ) = 0;
         uVar73 = *(int*)( lVar88 + 0x3c ) - 1;
         *(uint*)( lVar88 + 0x3c ) = uVar73;
         if (uVar76 < uVar73) {
            uVar89 = *(uint*)( lVar12 + (ulong)uVar73 * 4 );
            *(undefined8*)( lVar79 + uVar74 * 8 ) = *(undefined8*)( lVar79 + (ulong)uVar73 * 8 );
            *puVar91 = uVar89;
            *(uint*)( lVar11 + ( ulong ) * (uint*)( lVar12 + ( ulong ) * (uint*)( lVar88 + 0x3c ) * 4 ) * 4 ) = uVar76;
            uVar73 = *(uint*)( lVar88 + 0x3c );
         }

         LAB_00108c02:if (uVar73 != 0) goto LAB_001086fb;
         LAB_00108c10:if (( lVar7 != 0 ) && ( *(int*)( lVar71 + 0x9c ) != 0 )) {
            uVar73 = ( &hash_table_size_primes )[*(uint*)( lVar71 + 0x98 )];
            lVar7 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar71 + 0x98 ) * 8 );
            uVar89 = String::hash();
            uVar74 = CONCAT44(0, uVar73);
            lVar79 = *(long*)( lVar71 + 0x80 );
            uVar76 = 1;
            if (uVar89 != 0) {
               uVar76 = uVar89;
            }

            auVar33._8_8_ = 0;
            auVar33._0_8_ = (ulong)uVar76 * lVar7;
            auVar61._8_8_ = 0;
            auVar61._0_8_ = uVar74;
            lVar82 = SUB168(auVar33 * auVar61, 8);
            uVar89 = *(uint*)( lVar79 + lVar82 * 4 );
            uVar77 = SUB164(auVar33 * auVar61, 8);
            if (uVar89 != 0) {
               uVar92 = 0;
               do {
                  if (uVar76 == uVar89) {
                     cVar72 = String::operator ==((String*)( *(long*)( *(long*)( lVar71 + 0x78 ) + lVar82 * 8 ) + 0x10 ), (String*)( lVar88 + 0x10 ));
                     if (cVar72 != '\0') {
                        lVar7 = *(long*)( lVar71 + 0x80 );
                        lVar88 = *(long*)( lVar71 + 0x78 );
                        uVar73 = ( &hash_table_size_primes )[*(uint*)( lVar71 + 0x98 )];
                        uVar74 = CONCAT44(0, uVar73);
                        lVar79 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar71 + 0x98 ) * 8 );
                        auVar37._8_8_ = 0;
                        auVar37._0_8_ = ( ulong )(uVar77 + 1) * lVar79;
                        auVar65._8_8_ = 0;
                        auVar65._0_8_ = uVar74;
                        lVar82 = SUB168(auVar37 * auVar65, 8);
                        puVar91 = (uint*)( lVar7 + lVar82 * 4 );
                        uVar89 = SUB164(auVar37 * auVar65, 8);
                        uVar76 = *puVar91;
                        if (( uVar76 == 0 ) || ( auVar38._8_8_ = 0 ),auVar38._0_8_ = (ulong)uVar76 * lVar79,auVar66._8_8_ = 0,auVar66._0_8_ = uVar74,auVar39._8_8_ = 0,auVar39._0_8_ = ( ulong )(( uVar73 + uVar89 ) - SUB164(auVar38 * auVar66, 8)) * lVar79,auVar67._8_8_ = 0,auVar67._0_8_ = uVar74,uVar92 = uVar77,SUB164(auVar39 * auVar67, 8) == 0) goto LAB_00108e0b;
                        goto LAB_00108dc4;
                     }

                     lVar79 = *(long*)( lVar71 + 0x80 );
                  }

                  uVar92 = uVar92 + 1;
                  auVar34._8_8_ = 0;
                  auVar34._0_8_ = ( ulong )(uVar77 + 1) * lVar7;
                  auVar62._8_8_ = 0;
                  auVar62._0_8_ = uVar74;
                  lVar82 = SUB168(auVar34 * auVar62, 8);
                  uVar89 = *(uint*)( lVar79 + lVar82 * 4 );
                  uVar77 = SUB164(auVar34 * auVar62, 8);
               }
 while ( ( uVar89 != 0 ) && ( auVar35._8_8_ = 0 ),auVar35._0_8_ = (ulong)uVar89 * lVar7,auVar63._8_8_ = 0,auVar63._0_8_ = uVar74,auVar36._8_8_ = 0,auVar36._0_8_ = ( ulong )(( uVar73 + uVar77 ) - SUB164(auVar35 * auVar63, 8)) * lVar7,auVar64._8_8_ = 0,auVar64._0_8_ = uVar74,uVar92 <= SUB164(auVar36 * auVar64, 8) );
            }

         }

         goto LAB_001086fb;
      }

   }

   uVar89 = uVar89 + 1;
   auVar24._8_8_ = 0;
   auVar24._0_8_ = ( ulong )(iVar78 + 1) * lVar10;
   auVar52._8_8_ = 0;
   auVar52._0_8_ = uVar87;
   lVar80 = SUB168(auVar24 * auVar52, 8);
   uVar76 = *(uint*)( lVar82 + lVar80 * 4 );
   iVar78 = SUB164(auVar24 * auVar52, 8);
   if (( uVar76 == 0 ) || ( auVar25._8_8_ = 0 ),auVar25._0_8_ = (ulong)uVar76 * lVar10,auVar53._8_8_ = 0,auVar53._0_8_ = uVar87,auVar26._8_8_ = 0,auVar26._0_8_ = ( ulong )(( uVar73 + iVar78 ) - SUB164(auVar25 * auVar53, 8)) * lVar10,auVar54._8_8_ = 0,auVar54._0_8_ = uVar87,SUB164(auVar26 * auVar54, 8) < uVar89) goto LAB_001086fb;
   goto LAB_00108aa4;
   while (auVar40._8_8_ = 0,auVar40._0_8_ = (ulong)uVar76 * lVar79,auVar68._8_8_ = 0,auVar68._0_8_ = uVar74,auVar41._8_8_ = 0,auVar41._0_8_ = ( ulong )(( uVar89 + uVar73 ) - SUB164(auVar40 * auVar68, 8)) * lVar79,auVar69._8_8_ = 0,auVar69._0_8_ = uVar74,uVar92 = uVar77,SUB164(auVar41 * auVar69, 8) != 0) {
      LAB_00108dc4:uVar77 = uVar89;
      puVar84 = (uint*)( lVar7 + (ulong)uVar92 * 4 );
      *puVar91 = *puVar84;
      puVar8 = (undefined8*)( lVar88 + lVar82 * 8 );
      *puVar84 = uVar76;
      puVar4 = (undefined8*)( lVar88 + (ulong)uVar92 * 8 );
      uVar13 = *puVar8;
      *puVar8 = *puVar4;
      *puVar4 = uVar13;
      auVar42._8_8_ = 0;
      auVar42._0_8_ = ( ulong )(uVar77 + 1) * lVar79;
      auVar70._8_8_ = 0;
      auVar70._0_8_ = uVar74;
      lVar82 = SUB168(auVar42 * auVar70, 8);
      puVar91 = (uint*)( lVar7 + lVar82 * 4 );
      uVar89 = SUB164(auVar42 * auVar70, 8);
      uVar76 = *puVar91;
      if (uVar76 == 0) break;
   }
;
   LAB_00108e0b:uVar74 = (ulong)uVar77;
   plVar5 = (long*)( lVar88 + uVar74 * 8 );
   *(undefined4*)( lVar7 + uVar74 * 4 ) = 0;
   plVar85 = (long*)*plVar5;
   if (*(long**)( lVar71 + 0x88 ) == plVar85) {
      *(long*)( lVar71 + 0x88 ) = *plVar85;
      plVar85 = (long*)*plVar5;
   }

   if (*(long**)( lVar71 + 0x90 ) == plVar85) {
      *(long*)( lVar71 + 0x90 ) = plVar85[1];
      plVar85 = (long*)*plVar5;
   }

   if ((long*)plVar85[1] != (long*)0x0) {
      *(long*)plVar85[1] = *plVar85;
      plVar85 = (long*)*plVar5;
   }

   if (*plVar85 != 0) {
      *(long*)( *plVar85 + 8 ) = plVar85[1];
      plVar85 = (long*)*plVar5;
   }

   pvVar14 = (void*)plVar85[3];
   if (pvVar14 != (void*)0x0) {
      if (*(int*)( (long)plVar85 + 0x3c ) != 0) {
         if (( &hash_table_size_primes )[*(uint*)( plVar85 + 7 )] != 0) {
            memset((void*)plVar85[6], 0, ( ulong )(uint)(&hash_table_size_primes)[*(uint*)( plVar85 + 7 )] * 4);
         }

         *(undefined4*)( (long)plVar85 + 0x3c ) = 0;
      }

      Memory::free_static(pvVar14, false);
      Memory::free_static((void*)plVar85[5], false);
      Memory::free_static((void*)plVar85[4], false);
      Memory::free_static((void*)plVar85[6], false);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( plVar85 + 2 ));
   Memory::free_static(plVar85, false);
   *(undefined8*)( *(long*)( lVar71 + 0x78 ) + uVar74 * 8 ) = 0;
   *(int*)( lVar71 + 0x9c ) = *(int*)( lVar71 + 0x9c ) + -1;
   goto LAB_001086fb;
}
/* LiveEditor::_res_path_func(String const&, int) */void LiveEditor::_res_path_func(LiveEditor *this, String *param_1, int param_2) {
   CowData<char32_t> *this_00;
   int local_c;
   local_c = param_2;
   this_00 = (CowData<char32_t>*)HashMap<int,String,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,String>>>::operator []((HashMap<int,String,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,String>>>*)( this + 0x30 ), &local_c);
   if (*(long*)this_00 != *(long*)param_1) {
      CowData<char32_t>::_ref(this_00, (CowData*)param_1);
   }

   return;
}
/* SceneDebuggerObject::deserialize(Array const&) */void SceneDebuggerObject::deserialize(SceneDebuggerObject *this, Array *param_1) {
   code *pcVar1;
   long lVar2;
   char cVar3;
   int iVar4;
   int iVar5;
   int *piVar6;
   Variant *pVVar7;
   ulong uVar8;
   Object *pOVar9;
   char *pcVar10;
   undefined8 uVar11;
   int iVar12;
   long in_FS_OFFSET;
   Pair *local_138;
   Variant local_118[8];
   Variant local_110[8];
   int local_108[2];
   undefined1 local_100[16];
   undefined8 local_f0;
   long local_e8;
   int local_e0;
   long local_d8;
   long local_d0;
   StringName local_c8[8];
   undefined4 local_c0;
   long local_b8;
   int local_b0;
   int local_a8[2];
   undefined8 local_a0;
   undefined8 uStack_98;
   int local_88[2];
   undefined8 local_80;
   undefined8 uStack_78;
   undefined4 local_70;
   undefined8 local_68;
   int local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = Array::size();
   if (iVar4 < 3) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar11 = 0x244;
         pcVar10 = "Condition \"p_arr.size() < 3\" is true.";
         LAB_001094e9:_err_print_error("deserialize", "scene/debugger/scene_debugger.cpp", uVar11, pcVar10, 0, 0);
         return;
      }

   }
 else {
      iVar4 = (int)param_1;
      piVar6 = (int*)Array::operator [](iVar4);
      if (*piVar6 == 2) {
         piVar6 = (int*)Array::operator [](iVar4);
         if (*piVar6 == 4) {
            piVar6 = (int*)Array::operator [](iVar4);
            if (*piVar6 == 0x1c) {
               pVVar7 = (Variant*)Array::operator [](iVar4);
               uVar8 = Variant::operator_cast_to_unsigned_long(pVVar7);
               *(ulong*)this = uVar8;
               Array::operator [](iVar4);
               Variant::operator_cast_to_String((Variant*)&local_d8);
               if (*(long*)( this + 8 ) != local_d8) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
                  lVar2 = local_d8;
                  local_d8 = 0;
                  *(long*)( this + 8 ) = lVar2;
               }

               iVar12 = 0;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
               Array::operator [](iVar4);
               Variant::operator_cast_to_Array(local_118);
               while (true) {
                  iVar4 = Array::size();
                  if (iVar4 <= iVar12) break;
                  iVar4 = (int)local_118;
                  piVar6 = (int*)Array::operator [](iVar4);
                  if (*piVar6 != 0x1c) {
                     _err_print_error("deserialize", "scene/debugger/scene_debugger.cpp", 0x24e, "Condition \"props[i].get_type() != Variant::ARRAY\" is true.", 0, 0);
                     break;
                  }

                  Array::operator [](iVar4);
                  Variant::operator_cast_to_Array(local_110);
                  iVar4 = Array::size();
                  if (iVar4 != 6) {
                     _err_print_error("deserialize", "scene/debugger/scene_debugger.cpp", 0x251, "Condition \"prop.size() != 6\" is true.", 0, 0);
                     LAB_0010941d:Array::~Array((Array*)local_110);
                     break;
                  }

                  iVar4 = (int)local_110;
                  piVar6 = (int*)Array::operator [](iVar4);
                  if (*piVar6 != 4) {
                     _err_print_error("deserialize", "scene/debugger/scene_debugger.cpp", 0x252, "Condition \"prop[0].get_type() != Variant::STRING\" is true.", 0, 0);
                     goto LAB_0010941d;
                  }

                  piVar6 = (int*)Array::operator [](iVar4);
                  if (*piVar6 != 2) {
                     _err_print_error("deserialize", "scene/debugger/scene_debugger.cpp", 0x253, "Condition \"prop[1].get_type() != Variant::INT\" is true.", 0, 0);
                     goto LAB_0010941d;
                  }

                  piVar6 = (int*)Array::operator [](iVar4);
                  if (*piVar6 != 2) {
                     _err_print_error("deserialize", "scene/debugger/scene_debugger.cpp", 0x254, "Condition \"prop[2].get_type() != Variant::INT\" is true.", 0, 0);
                     goto LAB_0010941d;
                  }

                  piVar6 = (int*)Array::operator [](iVar4);
                  if (*piVar6 != 4) {
                     _err_print_error("deserialize", "scene/debugger/scene_debugger.cpp", 0x255, "Condition \"prop[3].get_type() != Variant::STRING\" is true.", 0, 0);
                     goto LAB_0010941d;
                  }

                  piVar6 = (int*)Array::operator [](iVar4);
                  if (*piVar6 != 2) {
                     _err_print_error("deserialize", "scene/debugger/scene_debugger.cpp", 0x256, "Condition \"prop[4].get_type() != Variant::INT\" is true.", 0, 0);
                     goto LAB_0010941d;
                  }

                  local_108[0] = 0;
                  local_108[1] = 0;
                  local_100 = (undefined1[16])0x0;
                  local_f0 = 0;
                  local_e8 = 0;
                  local_e0 = 6;
                  Array::operator [](iVar4);
                  Variant::operator_cast_to_String((Variant*)&local_d8);
                  if (local_100._0_8_ != local_d8) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_100);
                     lVar2 = local_d8;
                     local_d8 = 0;
                     local_100._0_8_ = lVar2;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
                  pVVar7 = (Variant*)Array::operator [](iVar4);
                  iVar5 = Variant::operator_cast_to_int(pVVar7);
                  local_108[0] = iVar5;
                  pVVar7 = (Variant*)Array::operator [](iVar4);
                  iVar5 = Variant::operator_cast_to_int(pVVar7);
                  local_f0 = CONCAT44(local_f0._4_4_, iVar5);
                  Array::operator [](iVar4);
                  Variant::operator_cast_to_String((Variant*)&local_d8);
                  if (local_e8 != local_d8) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
                     local_e8 = local_d8;
                     local_d8 = 0;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
                  pVVar7 = (Variant*)Array::operator [](iVar4);
                  local_e0 = Variant::operator_cast_to_int(pVVar7);
                  pVVar7 = (Variant*)Array::operator [](iVar4);
                  Variant::Variant((Variant*)local_a8, pVVar7);
                  if (local_108[0] == 0x18) {
                     cVar3 = Variant::is_zero();
                     if (cVar3 == '\0') {
                        if (local_a8[0] == 0x18) {
                           pOVar9 = Variant::operator_cast_to_Object_((Variant*)local_a8);
                           pcVar1 = *(code**)( *(long*)pOVar9 + 0x58 );
                           local_d8 = 0;
                           String::parse_latin1((String*)&local_d8, "EncodedObjectAsID");
                           cVar3 = ( *pcVar1 )(pOVar9, (Variant*)&local_d8);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
                           if (cVar3 != '\0') {
                              pOVar9 = Variant::operator_cast_to_Object_((Variant*)local_a8);
                              if (pOVar9 != (Object*)0x0) {
                                 __dynamic_cast(pOVar9, &Object::typeinfo, &EncodedObjectAsID::typeinfo, 0);
                              }

                              local_d8 = EncodedObjectAsID::get_object_id();
                              Variant::Variant((Variant*)local_88, (Variant*)&local_d8);
                              if (Variant::needs_deinit[local_a8[0]] != '\0') {
                                 Variant::_clear_internal();
                              }

                              local_f0 = CONCAT44(local_f0._4_4_, 0x16);
                              local_a8[0] = local_88[0];
                              local_108[0] = local_88[0];
                              local_a0 = local_80;
                              uStack_98 = uStack_78;
                              String::parse_latin1((String*)&local_e8, "Object");
                           }

                        }

                     }
 else {
                        Variant::Variant((Variant*)local_88, (Object*)0x0);
                        if (Variant::needs_deinit[local_a8[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        local_a0 = local_80;
                        uStack_98 = uStack_78;
                        local_a8[0] = local_88[0];
                     }

                  }

                  local_138 = (Pair*)local_88;
                  local_d8 = CONCAT44(local_d8._4_4_, local_108[0]);
                  local_d0 = 0;
                  if (local_100._0_8_ != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_d0, (CowData*)local_100);
                  }

                  StringName::StringName(local_c8, (StringName*)( local_100 + 8 ));
                  local_b8 = 0;
                  local_c0 = (undefined4)local_f0;
                  if (local_e8 != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_e8);
                  }

                  local_80 = 0;
                  local_b0 = local_e0;
                  local_88[0] = (int)local_d8;
                  if (local_d0 != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&local_d0);
                  }

                  StringName::StringName((StringName*)&uStack_78, local_c8);
                  local_68 = 0;
                  local_70 = local_c0;
                  if (local_b8 != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_b8);
                  }

                  local_60 = local_b0;
                  Variant::Variant((Variant*)local_58, (Variant*)local_a8);
                  List<Pair<PropertyInfo,Variant>,DefaultAllocator>::push_back((List<Pair<PropertyInfo,Variant>,DefaultAllocator>*)( this + 0x10 ), local_138);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  PropertyInfo::~PropertyInfo((PropertyInfo*)local_138);
                  PropertyInfo::~PropertyInfo((PropertyInfo*)&local_d8);
                  if (Variant::needs_deinit[local_a8[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  iVar12 = iVar12 + 1;
                  PropertyInfo::~PropertyInfo((PropertyInfo*)local_108);
                  Array::~Array((Array*)local_110);
               }
;
               Array::~Array((Array*)local_118);
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

            }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar11 = 0x247;
               pcVar10 = "Condition \"p_arr[2].get_type() != Variant::ARRAY\" is true.";
               goto LAB_001094e9;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar11 = 0x246;
            pcVar10 = "Condition \"p_arr[1].get_type() != Variant::STRING\" is true.";
            goto LAB_001094e9;
         }

      }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar11 = 0x245;
         pcVar10 = "Condition \"p_arr[0].get_type() != Variant::INT\" is true.";
         goto LAB_001094e9;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SceneDebugger::~SceneDebugger() */void SceneDebugger::~SceneDebugger(SceneDebugger *this) {
   Object *pOVar1;
   char cVar2;
   long in_FS_OFFSET;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (LiveEditor::singleton != (LiveEditor*)0x0) {
      StringName::StringName((StringName*)&local_18, "scene", false);
      EngineDebugger::unregister_message_capture((StringName*)&local_18);
      if (( StringName::configured != '\0' ) && ( local_18 != 0 )) {
         StringName::unref();
      }

      memdelete<LiveEditor>(LiveEditor::singleton);
      LiveEditor::singleton = (LiveEditor*)0x0;
   }

   pOVar1 = RuntimeNodeSelect::singleton;
   if (RuntimeNodeSelect::singleton != (Object*)0x0) {
      cVar2 = predelete_handler(RuntimeNodeSelect::singleton);
      if (cVar2 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

      RuntimeNodeSelect::singleton = (Object*)0x0;
   }

   singleton = 0;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SceneDebugger::deinitialize() */void SceneDebugger::deinitialize(void) {
   SceneDebugger *pSVar1;
   pSVar1 = singleton;
   if (singleton != (SceneDebugger*)0x0) {
      ~SceneDebugger(singleton)
      ;;
      Memory::free_static(pSVar1, false);
      return;
   }

   return;
}
/* SceneDebuggerTree::SceneDebuggerTree(Node*) */void SceneDebuggerTree::SceneDebuggerTree(SceneDebuggerTree *this, Node *param_1) {
   CowData<char32_t> *this_00;
   StringName *pSVar1;
   long *plVar2;
   void *pvVar3;
   bool bVar4;
   Object *pOVar5;
   char cVar6;
   uchar uVar7;
   int iVar8;
   undefined1(*pauVar9)[16];
   undefined8 *puVar10;
   size_t sVar11;
   undefined4 *puVar12;
   long lVar13;
   char *pcVar14;
   undefined1(*pauVar15)[16];
   long lVar16;
   int iVar17;
   undefined8 uVar18;
   long in_FS_OFFSET;
   bool bVar19;
   CowData *local_118;
   byte local_110;
   CowData *local_f8;
   CowData *local_e8;
   CowData<char32_t> *local_e0;
   char *local_d0;
   long local_c8;
   Object *local_c0;
   char *local_b8;
   long local_b0;
   char *local_a8;
   undefined1 local_a0[16];
   undefined8 local_90;
   long local_88;
   byte local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   pauVar9 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
   *(undefined4*)pauVar9[1] = 0;
   *pauVar9 = (undefined1[16])0x0;
   puVar10 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);
   lVar16 = *(long*)( *pauVar9 + 8 );
   puVar10[1] = 0;
   *puVar10 = param_1;
   puVar10[2] = lVar16;
   puVar10[3] = pauVar9;
   if (lVar16 != 0) {
      *(undefined8**)( lVar16 + 8 ) = puVar10;
   }

   lVar16 = *(long*)*pauVar9;
   *(undefined8**)( *pauVar9 + 8 ) = puVar10;
   if (lVar16 == 0) {
      *(undefined8**)*pauVar9 = puVar10;
   }

   *(int*)pauVar9[1] = *(int*)pauVar9[1] + 1;
   if ((SceneDebuggerTree(Node*)::{lambda()
   #1
   ( iVar8 = __cxa_guard_acquire(&SceneDebuggerTree(Node * ::sname), iVar8 != 0) );
   {
      _scs_create((char *)&SceneDebuggerTree(Node*)::{lambda()
      #1
      __cxa_atexit(StringName::~StringName,
                 &SceneDebuggerTree(Node*)::{lambda()
      #1
      __cxa_guard_release(&SceneDebuggerTree(Node*)::{lambda()
      #1
   }

   if ((SceneDebuggerTree(Node*)::{lambda()
   #2
   ( iVar8 = __cxa_guard_acquire(&SceneDebuggerTree(Node * ::sname), iVar8 != 0) );
   {
      _scs_create((char *)&SceneDebuggerTree(Node*)::{lambda()
      #2
      __cxa_atexit(StringName::~StringName,
                 &SceneDebuggerTree(Node*)::{lambda()
      #2
      __cxa_guard_release(&SceneDebuggerTree(Node*)::{lambda()
      #2
   }

   bVar4 = true;
   do {
      if (*(int*)pauVar9[1] == 0) goto LAB_0010a2a0;
      puVar10 = *(undefined8**)*pauVar9;
      pSVar1 = (StringName*)*puVar10;
      if ((undefined1(*) [16])puVar10[3] == pauVar9) {
         lVar16 = puVar10[1];
         lVar13 = puVar10[2];
         *(long*)*pauVar9 = lVar16;
         if (puVar10 == *(undefined8**)( *pauVar9 + 8 )) {
            *(long*)( *pauVar9 + 8 ) = lVar13;
         }

         if (lVar13 != 0) {
            *(long*)( lVar13 + 8 ) = lVar16;
            lVar16 = puVar10[1];
         }

         if (lVar16 != 0) {
            *(long*)( lVar16 + 0x10 ) = lVar13;
         }

         Memory::free_static(puVar10, false);
         iVar8 = *(int*)pauVar9[1] + -1;
         *(int*)pauVar9[1] = iVar8;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         iVar8 = *(int*)pauVar9[1];
      }

      if (iVar8 == 0) {
         Memory::free_static(pauVar9, false);
         iVar8 = Node::get_child_count(SUB81(pSVar1, 0));
         if (0 < iVar8) {
            iVar17 = iVar8 + -1;
            local_118 = (CowData*)Node::get_child((int)pSVar1, SUB41(iVar17, 0));
            pauVar9 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined4*)pauVar9[1] = 0;
            *pauVar9 = (undefined1[16])0x0;
            goto LAB_00109a7d;
         }

         pauVar9 = (undefined1(*) [16])0x0;
      }
 else {
         iVar8 = Node::get_child_count(SUB81(pSVar1, 0));
         if (0 < iVar8) {
            iVar17 = iVar8 + -1;
            do {
               while (true) {
                  local_118 = (CowData*)Node::get_child((int)pSVar1, SUB41(iVar17, 0));
                  LAB_00109a7d:puVar10 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);
                  lVar16 = *(long*)*pauVar9;
                  puVar10[2] = 0;
                  puVar10[3] = pauVar9;
                  *puVar10 = local_118;
                  puVar10[1] = lVar16;
                  if (lVar16 != 0) {
                     *(undefined8**)( lVar16 + 0x10 ) = puVar10;
                  }

                  lVar16 = *(long*)( *pauVar9 + 8 );
                  *(undefined8**)*pauVar9 = puVar10;
                  if (lVar16 != 0) break;
                  *(int*)pauVar9[1] = *(int*)pauVar9[1] + 1;
                  *(undefined8**)( *pauVar9 + 8 ) = puVar10;
                  bVar19 = iVar17 == 0;
                  iVar17 = iVar17 + -1;
                  if (bVar19) goto LAB_00109acb;
               }
;
               *(int*)pauVar9[1] = *(int*)pauVar9[1] + 1;
               bVar19 = iVar17 != 0;
               iVar17 = iVar17 + -1;
            }
 while ( bVar19 );
         }

      }

      LAB_00109acb:if (( bVar4 ) || ( cVar6 = Object::has_method(pSVar1) ),cVar6 == '\0') {
         local_110 = 0;
      }
 else {
         local_110 = 0;
         Object::call<>((StringName*)local_78);
         if (local_78[0] == 1) {
            uVar7 = Variant::operator_cast_to_unsigned_char((Variant*)local_78);
            local_110 = uVar7 * '\x04' + 2;
         }

         cVar6 = Object::has_method(pSVar1);
         if (cVar6 != '\0') {
            Object::call<>((StringName*)local_58);
            if (local_58[0] == 1) {
               uVar7 = Variant::operator_cast_to_unsigned_char((Variant*)local_58);
               local_110 = local_110 | uVar7 << 3;
            }

            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

      }

      local_d0 = (char*)0x0;
      plVar2 = *(long**)( pSVar1 + 0x98 );
      if (plVar2 == (long*)0x0) {
         Node::get_scene_file_path();
         uVar18 = *(undefined8*)( pSVar1 + 0x60 );
         LAB_00109b60:( **(code**)( *(long*)pSVar1 + 0x48 ) )(&local_b8, pSVar1);
      }
 else {
         if (*(code**)( *plVar2 + 0x90 ) == PlaceHolderScriptInstance::get_script) {
            if (( (Object*)plVar2[0x10] != (Object*)0x0 ) && ( local_c0 = (Object*)plVar2[0x10] ),cVar6 = RefCounted::reference(),cVar6 != '\0') goto LAB_00109ebf;
            LAB_00109b38:Node::get_scene_file_path();
            uVar18 = *(undefined8*)( pSVar1 + 0x60 );
            goto LAB_00109b60;
         }

         ( **(code**)( *plVar2 + 0x90 ) )(&local_c0);
         LAB_00109ebf:if (local_c0 == (Object*)0x0) goto LAB_00109b38;
         ( **(code**)( *(long*)local_c0 + 0x1e0 ) )(&local_b0);
         if (local_b0 == 0) {
            LAB_0010a1c9:local_b8 = (char*)0x0;
            LAB_0010a1ce:CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
            if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
               StringName::unref();
            }

            LAB_0010a1fa:pcVar14 = (char*)0x0;
            LAB_00109f8d:local_e0 = (CowData<char32_t>*)&local_d0;
            Resource::get_path();
            if (pcVar14 != local_a8) {
               CowData<char32_t>::_unref(local_e0);
               local_d0 = local_a8;
               local_a8 = (char*)0x0;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
         }
 else {
            pcVar14 = *(char**)( local_b0 + 8 );
            local_b8 = (char*)0x0;
            if (pcVar14 == (char*)0x0) {
               if (*(long*)( local_b0 + 0x10 ) == 0) goto LAB_0010a1c9;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)( local_b0 + 0x10 ));
            }
 else {
               sVar11 = strlen(pcVar14);
               local_a0._0_8_ = sVar11;
               local_a8 = pcVar14;
               String::parse_latin1((StrRange*)&local_b8);
            }

            if (local_b8 == (char*)0x0) goto LAB_0010a1ce;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
            pcVar14 = local_b8;
            local_b8 = (char*)0x0;
            local_d0 = pcVar14;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
            if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
               StringName::unref();
            }

            if (pcVar14 == (char*)0x0) goto LAB_0010a1fa;
            if (*(uint*)( pcVar14 + -8 ) < 2) goto LAB_00109f8d;
         }

         local_e0 = (CowData<char32_t>*)&local_d0;
         pcVar14 = local_d0;
         if (( ( local_c0 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar5 = local_c0,pcVar14 = local_d0,cVar6 != '\0' )) {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

         Node::get_scene_file_path();
         uVar18 = *(undefined8*)( pSVar1 + 0x60 );
         if (( pcVar14 == (char*)0x0 ) || ( *(uint*)( pcVar14 + -8 ) < 2 )) goto LAB_00109b60;
         local_b8 = (char*)0x0;
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)local_e0);
      }

      local_e0 = (CowData<char32_t>*)&local_d0;
      local_118 = (CowData*)&local_b0;
      Node::get_name();
      if (local_c0 == (Object*)0x0) {
         LAB_0010a119:local_c8 = 0;
         local_a8 = (char*)CONCAT44(local_a8._4_4_, iVar8);
         LAB_0010a151:local_80 = 0;
         local_88 = 0;
         local_90 = 0;
         local_a0 = (undefined1[16])0x0;
         local_a0._8_8_ = (char*)0x0;
      }
 else {
         pcVar14 = *(char**)( local_c0 + 8 );
         local_c8 = 0;
         if (pcVar14 == (char*)0x0) {
            if (*(long*)( local_c0 + 0x10 ) == 0) goto LAB_0010a119;
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)( local_c0 + 0x10 ));
         }
 else {
            sVar11 = strlen(pcVar14);
            local_a0._0_8_ = sVar11;
            local_a8 = pcVar14;
            String::parse_latin1((StrRange*)&local_c8);
         }

         local_f8 = (CowData*)&local_c8;
         local_80 = 0;
         local_90 = 0;
         local_88 = 0;
         local_a8 = (char*)CONCAT44(local_a8._4_4_, iVar8);
         local_a0 = (undefined1[16])0x0;
         if (local_c8 == 0) goto LAB_0010a151;
         CowData<char32_t>::_ref((CowData<char32_t>*)local_a0, local_f8);
      }

      local_e8 = (CowData*)local_a0;
      local_f8 = (CowData*)&local_c8;
      this_00 = (CowData<char32_t>*)( local_a0 + 8 );
      if (local_b8 != (char*)local_a0._8_8_) {
         CowData<char32_t>::_ref(this_00, (CowData*)&local_b8);
      }

      lVar16 = local_b0;
      local_90 = uVar18;
      if (local_88 != local_b0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, local_118);
         lVar16 = local_88;
      }

      local_80 = local_110;
      if (*(long*)this == 0) {
         pauVar15 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined4*)pauVar15[1] = 0;
         *(undefined1(**) [16])this = pauVar15;
         *pauVar15 = (undefined1[16])0x0;
      }

      puVar12 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
      *(undefined8*)( puVar12 + 8 ) = 0;
      *(undefined1*)( puVar12 + 10 ) = 0;
      *(undefined1(*) [16])( puVar12 + 2 ) = (undefined1[16])0x0;
      *(undefined8*)( puVar12 + 6 ) = 0;
      *(undefined8*)( puVar12 + 0x10 ) = 0;
      *(undefined1(*) [16])( puVar12 + 0xc ) = (undefined1[16])0x0;
      *puVar12 = local_a8._0_4_;
      lVar13 = local_a0._0_8_;
      if (local_a0._0_8_ != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar12 + 2 ), local_e8);
         lVar13 = *(long*)( puVar12 + 4 );
      }

      if (lVar13 != local_a0._8_8_) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar12 + 4 ), (CowData*)this_00);
      }

      *(undefined8*)( puVar12 + 6 ) = local_90;
      if (*(long*)( puVar12 + 8 ) != lVar16) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar12 + 8 ), (CowData*)&local_88);
      }

      *(byte*)( puVar12 + 10 ) = local_110;
      plVar2 = *(long**)this;
      lVar16 = plVar2[1];
      *(undefined8*)( puVar12 + 0xc ) = 0;
      *(long**)( puVar12 + 0x10 ) = plVar2;
      *(long*)( puVar12 + 0xe ) = lVar16;
      if (lVar16 != 0) {
         *(undefined4**)( lVar16 + 0x30 ) = puVar12;
      }

      plVar2[1] = (long)puVar12;
      if (*plVar2 == 0) {
         *plVar2 = (long)puVar12;
      }

      *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref(this_00);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_e8);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_f8);
      if (( StringName::configured != '\0' ) && ( local_c0 != (Object*)0x0 )) {
         StringName::unref();
      }

      bVar4 = false;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
      CowData<char32_t>::_unref(local_e0);
   }
 while ( pauVar9 != (undefined1(*) [16])0x0 );
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   goto LAB_0010a4e1;
   while (true) {
      if (*(undefined1(**) [16])( (long)pvVar3 + 0x18 ) == pauVar9) {
         lVar16 = *(long*)( (long)pvVar3 + 8 );
         lVar13 = *(long*)( (long)pvVar3 + 0x10 );
         *(long*)*pauVar9 = lVar16;
         if (pvVar3 == *(void**)( *pauVar9 + 8 )) {
            *(long*)( *pauVar9 + 8 ) = lVar13;
         }

         if (lVar13 != 0) {
            *(long*)( lVar13 + 8 ) = lVar16;
            lVar16 = *(long*)( (long)pvVar3 + 8 );
         }

         if (lVar16 != 0) {
            *(long*)( lVar16 + 0x10 ) = lVar13;
         }

         Memory::free_static(pvVar3, false);
         pauVar15 = pauVar9 + 1;
         *(int*)*pauVar15 = *(int*)*pauVar15 + -1;
         iVar8 = *(int*)*pauVar15;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         iVar8 = *(int*)pauVar9[1];
      }

      if (iVar8 == 0) break;
      LAB_0010a2a0:pvVar3 = *(void**)*pauVar9;
      if (pvVar3 == (void*)0x0) {
         if (*(int*)pauVar9[1] != 0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               return;
            }

            goto LAB_0010a4e1;
         }

         break;
      }

   }
;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Memory::free_static(pauVar9, false);
      return;
   }

   LAB_0010a4e1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* LiveEditor::_send_tree() */void LiveEditor::_send_tree(void) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   long in_FS_OFFSET;
   Array local_60[8];
   SceneDebuggerTree local_58[8];
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   lVar3 = SceneTree::singleton;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (SceneTree::singleton != 0) {
      Array::Array(local_60);
      SceneDebuggerTree::SceneDebuggerTree(local_58, *(Node**)( lVar3 + 0x368 ));
      SceneDebuggerTree::serialize(local_58, local_60);
      plVar1 = EngineDebugger::singleton;
      local_50 = 0;
      pcVar2 = *(code**)( *EngineDebugger::singleton + 8 );
      local_40 = 0x10;
      local_48 = "scene:scene_tree";
      String::parse_latin1((StrRange*)&local_50);
      ( *pcVar2 )(plVar1, (StrRange*)&local_50, local_60);
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

      List<SceneDebuggerTree::RemoteNode,DefaultAllocator>::~List((List<SceneDebuggerTree::RemoteNode,DefaultAllocator>*)local_58);
      Array::~Array(local_60);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* LiveEditor::_res_set_func(int, StringName const&, Variant const&) */void LiveEditor::_res_set_func(LiveEditor *this, int param_1, StringName *param_2, Variant *param_3) {
   ulong uVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   char cVar10;
   uint uVar11;
   CowData *pCVar12;
   int iVar13;
   ulong uVar14;
   long lVar15;
   uint uVar16;
   uint uVar17;
   ulong uVar18;
   long in_FS_OFFSET;
   int local_5c[3];
   undefined8 local_50;
   StringName *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_5c[0] = param_1;
   if (( *(long*)( this + 0x38 ) != 0 ) && ( *(int*)( this + 0x5c ) != 0 )) {
      uVar1 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x58 ) * 8 );
      uVar11 = ( (uint)param_1 >> 0x10 ^ param_1 ) * -0x7a143595;
      uVar11 = ( uVar11 ^ uVar11 >> 0xd ) * -0x3d4d51cb;
      uVar16 = uVar11 ^ uVar11 >> 0x10;
      if (uVar11 == uVar11 >> 0x10) {
         uVar16 = 1;
         uVar14 = uVar1;
      }
 else {
         uVar14 = uVar16 * uVar1;
      }

      uVar18 = CONCAT44(0, ( &hash_table_size_primes )[*(uint*)( this + 0x58 )]);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar18;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar14;
      lVar15 = SUB168(auVar2 * auVar6, 8);
      uVar11 = *(uint*)( *(long*)( this + 0x40 ) + lVar15 * 4 );
      iVar13 = SUB164(auVar2 * auVar6, 8);
      if (uVar11 != 0) {
         uVar17 = 0;
         while (( uVar16 != uVar11 || ( param_1 != *(int*)( *(long*)( *(long*)( this + 0x38 ) + lVar15 * 8 ) + 0x10 ) ) )) {
            uVar17 = uVar17 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( iVar13 + 1 ) * uVar1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar18;
            lVar15 = SUB168(auVar3 * auVar7, 8);
            uVar11 = *(uint*)( *(long*)( this + 0x40 ) + lVar15 * 4 );
            iVar13 = SUB164(auVar3 * auVar7, 8);
            if (( uVar11 == 0 ) || ( auVar4._8_8_ = 0 ),auVar4._0_8_ = uVar11 * uVar1,auVar8._8_8_ = 0,auVar8._0_8_ = uVar18,auVar5._8_8_ = 0,auVar5._0_8_ = ( uint )(( ( &hash_table_size_primes )[*(uint*)( this + 0x58 )] + iVar13 ) - SUB164(auVar4 * auVar8, 8)) * uVar1,auVar9._8_8_ = 0,auVar9._0_8_ = uVar18,SUB164(auVar5 * auVar9, 8) < uVar17) goto LAB_0010a798;
         }
;
         pCVar12 = (CowData*)HashMap<int,String,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,String>>>::operator []((HashMap<int,String,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,String>>>*)( this + 0x30 ), local_5c);
         local_50 = 0;
         if (*(long*)pCVar12 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, pCVar12);
         }

         cVar10 = ResourceCache::has((String*)&local_50);
         if (cVar10 != '\0') {
            ResourceCache::get_ref((String*)&local_48);
            if (local_48 == (StringName*)0x0) {
               Ref<Resource>::unref((Ref<Resource>*)&local_48);
            }
 else {
               Object::set(local_48, (Variant*)param_2, (bool*)param_3);
               if (local_48 != (StringName*)0x0) {
                  cVar10 = RefCounted::unreference();
                  if (cVar10 != '\0') {
                     cVar10 = predelete_handler((Object*)local_48);
                     if (cVar10 != '\0') {
                        ( **(code**)( *(long*)local_48 + 0x140 ) )(local_48);
                        Memory::free_static(local_48, false);
                     }

                  }

               }

            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      }

   }

   LAB_0010a798:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* LiveEditor::_res_set_res_func(int, StringName const&, String const&) */void LiveEditor::_res_set_res_func(LiveEditor *this, int param_1, StringName *param_2, String *param_3) {
   Object *pOVar1;
   char cVar2;
   long in_FS_OFFSET;
   undefined8 local_70;
   Object *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   local_60 = 0;
   local_68 = (Object*)&_LC26;
   String::parse_latin1((StrRange*)&local_70);
   ResourceLoader::load(&local_68, param_3, (StrRange*)&local_70, 1, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (local_68 != (Object*)0x0) {
      Variant::Variant((Variant*)local_58, local_68);
      _res_set_func(this, param_1, param_2, (Variant*)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_68 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         pOVar1 = local_68;
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(local_68);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* LiveEditor::_res_call_func(int, StringName const&, Variant const**, int) */void LiveEditor::_res_call_func(LiveEditor *this, int param_1, StringName *param_2, Variant **param_3, int param_4) {
   ulong uVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   char cVar10;
   uint uVar11;
   CowData *pCVar12;
   int iVar13;
   ulong uVar14;
   long lVar15;
   uint uVar16;
   ulong uVar17;
   uint uVar18;
   long in_FS_OFFSET;
   int local_7c;
   undefined8 local_78;
   Object *local_70;
   undefined4 local_68;
   undefined8 local_64;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_7c = param_1;
   if (( *(long*)( this + 0x38 ) != 0 ) && ( *(int*)( this + 0x5c ) != 0 )) {
      uVar1 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x58 ) * 8 );
      uVar11 = ( (uint)param_1 >> 0x10 ^ param_1 ) * -0x7a143595;
      uVar11 = ( uVar11 ^ uVar11 >> 0xd ) * -0x3d4d51cb;
      uVar18 = uVar11 ^ uVar11 >> 0x10;
      if (uVar11 == uVar11 >> 0x10) {
         uVar18 = 1;
         uVar14 = uVar1;
      }
 else {
         uVar14 = uVar18 * uVar1;
      }

      uVar17 = CONCAT44(0, ( &hash_table_size_primes )[*(uint*)( this + 0x58 )]);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar17;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar14;
      lVar15 = SUB168(auVar2 * auVar6, 8);
      uVar11 = *(uint*)( *(long*)( this + 0x40 ) + lVar15 * 4 );
      iVar13 = SUB164(auVar2 * auVar6, 8);
      if (uVar11 != 0) {
         uVar16 = 0;
         while (( uVar18 != uVar11 || ( param_1 != *(int*)( *(long*)( *(long*)( this + 0x38 ) + lVar15 * 8 ) + 0x10 ) ) )) {
            uVar16 = uVar16 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( iVar13 + 1 ) * uVar1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar17;
            lVar15 = SUB168(auVar3 * auVar7, 8);
            uVar11 = *(uint*)( *(long*)( this + 0x40 ) + lVar15 * 4 );
            iVar13 = SUB164(auVar3 * auVar7, 8);
            if (( uVar11 == 0 ) || ( auVar4._8_8_ = 0 ),auVar4._0_8_ = uVar11 * uVar1,auVar8._8_8_ = 0,auVar8._0_8_ = uVar17,auVar5._8_8_ = 0,auVar5._0_8_ = ( uint )(( ( &hash_table_size_primes )[*(uint*)( this + 0x58 )] + iVar13 ) - SUB164(auVar4 * auVar8, 8)) * uVar1,auVar9._8_8_ = 0,auVar9._0_8_ = uVar17,SUB164(auVar5 * auVar9, 8) < uVar16) goto LAB_0010ab08;
         }
;
         pCVar12 = (CowData*)HashMap<int,String,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,String>>>::operator []((HashMap<int,String,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,String>>>*)( this + 0x30 ), &local_7c);
         local_78 = 0;
         if (*(long*)pCVar12 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, pCVar12);
         }

         cVar10 = ResourceCache::has((String*)&local_78);
         if (cVar10 != '\0') {
            ResourceCache::get_ref((String*)&local_70);
            if (local_70 == (Object*)0x0) {
               Ref<Resource>::unref((Ref<Resource>*)&local_70);
            }
 else {
               local_68 = 0;
               local_64 = 0;
               ( **(code**)( *(long*)local_70 + 0x68 ) )(local_58, local_70, param_2, param_3, param_4, &local_68);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (local_70 != (Object*)0x0) {
                  cVar10 = RefCounted::unreference();
                  if (cVar10 != '\0') {
                     cVar10 = predelete_handler(local_70);
                     if (cVar10 != '\0') {
                        ( **(code**)( *(long*)local_70 + 0x140 ) )(local_70);
                        Memory::free_static(local_70, false);
                     }

                  }

               }

            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      }

   }

   LAB_0010ab08:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* LiveEditor::_restore_node_func(ObjectID, NodePath const&, int) */void LiveEditor::_restore_node_func(long param_1, long param_2) {
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long *plVar4;
   long lVar5;
   NodePath *pNVar6;
   long lVar7;
   long lVar8;
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
   undefined1 auVar35[16];
   undefined1 auVar36[16];
   undefined1 auVar37[16];
   undefined1 auVar38[16];
   undefined1 auVar39[16];
   undefined1 auVar40[16];
   undefined1 auVar41[16];
   undefined1 auVar42[16];
   undefined1 auVar43[16];
   undefined1 auVar44[16];
   ulong uVar45;
   char cVar46;
   int iVar47;
   ulong uVar48;
   undefined8 uVar49;
   ulong uVar50;
   uint uVar51;
   long lVar52;
   long lVar53;
   long lVar54;
   ulong uVar55;
   int iVar56;
   uint uVar57;
   ulong uVar58;
   long *plVar59;
   uint uVar60;
   uint uVar61;
   ulong uVar62;
   uint *puVar63;
   long in_FS_OFFSET;
   long local_a8;
   long local_a0;
   int local_90;
   int local_8c;
   Node *local_88;
   uint local_44;
   long local_40;
   lVar5 = SceneTree::singleton;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (SceneTree::singleton != 0) {
      cVar46 = Node::has_node(*(NodePath**)( SceneTree::singleton + 0x368 ));
      local_88 = (Node*)0x0;
      if (cVar46 != '\0') {
         local_88 = (Node*)Node::get_node(*(NodePath**)( lVar5 + 0x368 ));
      }

      local_44 = 0;
      cVar46 = HashMap<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>>>>::_lookup_pos((HashMap<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>>>>*)( param_1 + 0x70 ), (String*)( param_1 + 0x68 ), &local_44);
      if (( ( ( cVar46 != '\0' ) && ( lVar5 = *(long*)( *(long*)( param_1 + 0x78 ) + (ulong)local_44 * 8 ) ),lVar5 != 0 ) ) && ( *(int*)( lVar5 + 0x3c ) != 0 )) {
         uVar48 = param_2 * 0x3ffff - 1;
         iVar56 = 0;
         iVar47 = *(int*)( lVar5 + 0x3c );
         do {
            local_90 = iVar56 + 1;
            if (local_90 < iVar47) {
               local_a8 = local_a0;
               local_8c = iVar47;
            }
 else {
               local_90 = -1;
               local_8c = 0;
               local_a8 = 0;
            }

            pNVar6 = *(NodePath**)( local_a0 + (long)iVar56 * 8 );
            if (( ( local_88 == (Node*)0x0 ) || ( cVar46 = Node::is_ancestor_of(local_88) ),cVar46 != '\0' )) {
               uVar49 = Node::get_node(pNVar6);
               lVar5 = *(long*)( param_1 + 0xa8 );
               if (( lVar5 != 0 ) && ( *(int*)( param_1 + 0xcc ) != 0 )) {
                  uVar55 = CONCAT44(0, ( &hash_table_size_primes )[*(uint*)( param_1 + 200 )]);
                  lVar7 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 200 ) * 8 );
                  uVar50 = (long)pNVar6 * 0x3ffff - 1;
                  uVar50 = ( uVar50 ^ uVar50 >> 0x1f ) * 0x15;
                  uVar50 = ( uVar50 ^ uVar50 >> 0xb ) * 0x41;
                  uVar50 = uVar50 >> 0x16 ^ uVar50;
                  uVar62 = uVar50 & 0xffffffff;
                  if ((int)uVar50 == 0) {
                     uVar62 = 1;
                  }

                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = uVar62 * lVar7;
                  auVar27._8_8_ = 0;
                  auVar27._0_8_ = uVar55;
                  lVar52 = SUB168(auVar9 * auVar27, 8);
                  uVar57 = *(uint*)( *(long*)( param_1 + 0xb0 ) + lVar52 * 4 );
                  uVar51 = SUB164(auVar9 * auVar27, 8);
                  if (uVar57 != 0) {
                     uVar61 = 0;
                     while (( (uint)uVar62 != uVar57 || ( pNVar6 != *(NodePath**)( *(long*)( lVar5 + lVar52 * 8 ) + 0x10 ) ) )) {
                        uVar61 = uVar61 + 1;
                        auVar10._8_8_ = 0;
                        auVar10._0_8_ = ( ulong )(uVar51 + 1) * lVar7;
                        auVar28._8_8_ = 0;
                        auVar28._0_8_ = uVar55;
                        lVar52 = SUB168(auVar10 * auVar28, 8);
                        uVar57 = *(uint*)( *(long*)( param_1 + 0xb0 ) + lVar52 * 4 );
                        uVar51 = SUB164(auVar10 * auVar28, 8);
                        if (( uVar57 == 0 ) || ( auVar11._8_8_ = 0 ),auVar11._0_8_ = (ulong)uVar57 * lVar7,auVar29._8_8_ = 0,auVar29._0_8_ = uVar55,auVar12._8_8_ = 0,auVar12._0_8_ = ( ulong )(( ( &hash_table_size_primes )[*(uint*)( param_1 + 200 )] + uVar51 ) - SUB164(auVar11 * auVar29, 8)) * lVar7,auVar30._8_8_ = 0,auVar30._0_8_ = uVar55,SUB164(auVar12 * auVar30, 8) < uVar61) goto LAB_0010acb3;
                     }
;
                     lVar5 = *(long*)( lVar5 + (ulong)uVar51 * 8 );
                     if (( ( lVar5 != 0 ) && ( lVar7 = *(long*)( lVar5 + 0x20 ) ),lVar7 != 0 )) {
                        uVar62 = CONCAT44(0, ( &hash_table_size_primes )[*(uint*)( lVar5 + 0x40 )]);
                        lVar52 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar5 + 0x40 ) * 8 );
                        uVar50 = ( uVar48 ^ uVar48 >> 0x1f ) * 0x15;
                        uVar50 = ( uVar50 ^ uVar50 >> 0xb ) * 0x41;
                        uVar50 = uVar50 >> 0x16 ^ uVar50;
                        uVar55 = uVar50 & 0xffffffff;
                        if ((int)uVar50 == 0) {
                           uVar55 = 1;
                        }

                        auVar13._8_8_ = 0;
                        auVar13._0_8_ = uVar55 * lVar52;
                        auVar31._8_8_ = 0;
                        auVar31._0_8_ = uVar62;
                        lVar53 = SUB168(auVar13 * auVar31, 8);
                        uVar57 = *(uint*)( *(long*)( lVar5 + 0x28 ) + lVar53 * 4 );
                        uVar51 = SUB164(auVar13 * auVar31, 8);
                        if (uVar57 != 0) {
                           uVar61 = 0;
                           goto LAB_0010af41;
                        }

                     }

                  }

               }

            }

            LAB_0010acb3:local_a8 = local_a0;
            local_90 = iVar56;
            local_8c = iVar47;
            LAB_0010acd0:local_a0 = local_a8;
            iVar56 = local_90;
            iVar47 = local_8c;
         }
 while ( true );
      }

   }

   LAB_0010b1bf:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   LAB_0010af41:if (( (uint)uVar55 == uVar57 ) && ( param_2 == *(long*)( *(long*)( lVar7 + lVar53 * 8 ) + 0x10 ) )) {
      lVar7 = *(long*)( lVar7 + (ulong)uVar51 * 8 );
      if (lVar7 != 0) {
         Node::add_child(uVar49, *(undefined8*)( lVar7 + 0x18 ), 0, 0);
         lVar52 = *(long*)( lVar5 + 0x20 );
         if (lVar52 == 0) {
            iVar47 = *(int*)( lVar5 + 0x44 );
            goto LAB_0010b1b0;
         }

         if (*(int*)( lVar5 + 0x44 ) == 0) goto LAB_0010b208;
         lVar53 = *(long*)( lVar5 + 0x28 );
         uVar57 = ( &hash_table_size_primes )[*(uint*)( lVar5 + 0x40 )];
         lVar8 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar5 + 0x40 ) * 8 );
         uVar55 = CONCAT44(0, uVar57);
         uVar50 = *(long*)( lVar7 + 0x10 ) * 0x3ffff - 1;
         uVar50 = ( uVar50 ^ uVar50 >> 0x1f ) * 0x15;
         uVar50 = ( uVar50 ^ uVar50 >> 0xb ) * 0x41;
         uVar50 = uVar50 >> 0x16 ^ uVar50;
         uVar62 = uVar50 & 0xffffffff;
         if ((int)uVar50 == 0) {
            uVar62 = 1;
         }

         auVar17._8_8_ = 0;
         auVar17._0_8_ = uVar62 * lVar8;
         auVar35._8_8_ = 0;
         auVar35._0_8_ = uVar55;
         lVar54 = SUB168(auVar17 * auVar35, 8);
         uVar51 = *(uint*)( lVar53 + lVar54 * 4 );
         uVar61 = SUB164(auVar17 * auVar35, 8);
         if (uVar51 == 0) goto LAB_0010b1b4;
         uVar60 = 0;
         goto LAB_0010b078;
      }

      goto LAB_0010acb3;
   }

   uVar61 = uVar61 + 1;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(uVar51 + 1) * lVar52;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar62;
   lVar53 = SUB168(auVar14 * auVar32, 8);
   uVar57 = *(uint*)( *(long*)( lVar5 + 0x28 ) + lVar53 * 4 );
   uVar51 = SUB164(auVar14 * auVar32, 8);
   if (( uVar57 == 0 ) || ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar57 * lVar52,auVar33._8_8_ = 0,auVar33._0_8_ = uVar62,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( ( &hash_table_size_primes )[*(uint*)( lVar5 + 0x40 )] + uVar51 ) - SUB164(auVar15 * auVar33, 8)) * lVar52,auVar34._8_8_ = 0,auVar34._0_8_ = uVar62,SUB164(auVar16 * auVar34, 8) < uVar61) goto LAB_0010acb3;
   goto LAB_0010af41;
   LAB_0010b078:uVar50 = (ulong)uVar61;
   if (( (uint)uVar62 != uVar51 ) || ( *(long*)( lVar7 + 0x10 ) != *(long*)( *(long*)( lVar52 + lVar54 * 8 ) + 0x10 ) )) goto LAB_0010b030;
   auVar21._8_8_ = 0;
   auVar21._0_8_ = ( ulong )(uVar61 + 1) * lVar8;
   auVar39._8_8_ = 0;
   auVar39._0_8_ = uVar55;
   uVar62 = SUB168(auVar21 * auVar39, 8);
   puVar63 = (uint*)( lVar53 + uVar62 * 4 );
   uVar61 = SUB164(auVar21 * auVar39, 8);
   uVar51 = *puVar63;
   if (( uVar51 != 0 ) && ( auVar22._8_8_ = 0 ),auVar22._0_8_ = (ulong)uVar51 * lVar8,auVar40._8_8_ = 0,auVar40._0_8_ = uVar55,auVar23._8_8_ = 0,auVar23._0_8_ = ( ulong )(( uVar61 + uVar57 ) - SUB164(auVar22 * auVar40, 8)) * lVar8,auVar41._8_8_ = 0,auVar41._0_8_ = uVar55,uVar45 = (ulong)uVar61,uVar58 = uVar50,SUB164(auVar23 * auVar41, 8) != 0) {
      while (true) {
         uVar50 = uVar45;
         puVar1 = (uint*)( lVar53 + uVar58 * 4 );
         *puVar63 = *puVar1;
         puVar2 = (undefined8*)( lVar52 + uVar62 * 8 );
         *puVar1 = uVar51;
         puVar3 = (undefined8*)( lVar52 + uVar58 * 8 );
         uVar49 = *puVar2;
         *puVar2 = *puVar3;
         *puVar3 = uVar49;
         auVar26._8_8_ = 0;
         auVar26._0_8_ = ( ulong )((int)uVar50 + 1) * lVar8;
         auVar44._8_8_ = 0;
         auVar44._0_8_ = uVar55;
         uVar62 = SUB168(auVar26 * auVar44, 8);
         puVar63 = (uint*)( lVar53 + uVar62 * 4 );
         uVar51 = *puVar63;
         if (( uVar51 == 0 ) || ( auVar24._8_8_ = 0 ),auVar24._0_8_ = (ulong)uVar51 * lVar8,auVar42._8_8_ = 0,auVar42._0_8_ = uVar55,auVar25._8_8_ = 0,auVar25._0_8_ = ( ulong )(( SUB164(auVar26 * auVar44, 8) + uVar57 ) - SUB164(auVar24 * auVar42, 8)) * lVar8,auVar43._8_8_ = 0,auVar43._0_8_ = uVar55,SUB164(auVar25 * auVar43, 8) == 0) break;
         uVar45 = uVar62 & 0xffffffff;
         uVar58 = uVar50;
      }
;
   }

   plVar4 = (long*)( lVar52 + uVar50 * 8 );
   *(undefined4*)( lVar53 + uVar50 * 4 ) = 0;
   plVar59 = (long*)*plVar4;
   if (*(long**)( lVar5 + 0x30 ) == plVar59) {
      *(long*)( lVar5 + 0x30 ) = *plVar59;
      plVar59 = (long*)*plVar4;
      if (*(long**)( lVar5 + 0x38 ) == plVar59) goto LAB_0010b234;
   }
 else if (*(long**)( lVar5 + 0x38 ) == plVar59) {
      LAB_0010b234:*(long*)( lVar5 + 0x38 ) = plVar59[1];
      plVar59 = (long*)*plVar4;
   }

   if ((long*)plVar59[1] != (long*)0x0) {
      *(long*)plVar59[1] = *plVar59;
      plVar59 = (long*)*plVar4;
   }

   if (*plVar59 != 0) {
      *(long*)( *plVar59 + 8 ) = plVar59[1];
      plVar59 = (long*)*plVar4;
   }

   Memory::free_static(plVar59, false);
   *(undefined8*)( *(long*)( lVar5 + 0x20 ) + uVar50 * 8 ) = 0;
   iVar47 = *(int*)( lVar5 + 0x44 ) + -1;
   *(int*)( lVar5 + 0x44 ) = iVar47;
   LAB_0010b1b0:if (iVar47 == 0) {
      LAB_0010b208:HashMap<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator < HashMapElement < ObjectID,Node*>>>> >> ::erase(( HashMap<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator < HashMapElement < ObjectID,Node*>>>> >> * )(param_1 + 0xa0), (Node**)( lVar5 + 0x10 ));
   }

   LAB_0010b1b4:if (local_a8 == 0) goto LAB_0010b1bf;
   goto LAB_0010acd0;
   LAB_0010b030:uVar60 = uVar60 + 1;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = ( ulong )(uVar61 + 1) * lVar8;
   auVar36._8_8_ = 0;
   auVar36._0_8_ = uVar55;
   lVar54 = SUB168(auVar18 * auVar36, 8);
   uVar51 = *(uint*)( lVar53 + lVar54 * 4 );
   uVar61 = SUB164(auVar18 * auVar36, 8);
   if (( uVar51 == 0 ) || ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar51 * lVar8,auVar37._8_8_ = 0,auVar37._0_8_ = uVar55,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar57 + uVar61 ) - SUB164(auVar19 * auVar37, 8)) * lVar8,auVar38._8_8_ = 0,auVar38._0_8_ = uVar55,SUB164(auVar20 * auVar38, 8) < uVar60) goto LAB_0010b1b4;
   goto LAB_0010b078;
}
/* LiveEditor::_instance_node_func(NodePath const&, String const&, String const&) */void LiveEditor::_instance_node_func(NodePath *param_1, String *param_2, String *param_3) {
   int iVar1;
   undefined8 *puVar2;
   NodePath *pNVar3;
   Object *pOVar4;
   char cVar5;
   Object *pOVar6;
   undefined8 uVar7;
   String *pSVar8;
   Node *pNVar9;
   long lVar10;
   long in_FS_OFFSET;
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   long local_40;
   lVar10 = SceneTree::singleton;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (SceneTree::singleton != 0) {
      local_58 = (Object*)&_LC26;
      local_60 = 0;
      local_50 = 0;
      String::parse_latin1((StrRange*)&local_60);
      ResourceLoader::load(&local_58, param_3, (StrRange*)&local_60, 1, 0);
      if (local_58 == (Object*)0x0) {
         LAB_0010b528:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      }
 else {
         pOVar6 = (Object*)__dynamic_cast(local_58, &Object::typeinfo, &PackedScene::typeinfo, 0);
         if (pOVar6 == (Object*)0x0) {
            LAB_0010b33c:cVar5 = RefCounted::unreference();
            pOVar6 = (Object*)0x0;
            if (cVar5 == '\0') goto LAB_0010b528;
            LAB_0010b34c:pOVar4 = local_58;
            cVar5 = predelete_handler(local_58);
            if (cVar5 != '\0') {
               ( **(code**)( *(long*)pOVar4 + 0x140 ) )();
               Memory::free_static(pOVar4, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (pOVar6 == (Object*)0x0) goto LAB_0010b390;
         }
 else {
            cVar5 = RefCounted::reference();
            if (cVar5 == '\0') {
               if (local_58 == (Object*)0x0) goto LAB_0010b528;
               goto LAB_0010b33c;
            }

            if (( local_58 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0') goto LAB_0010b34c;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         }

         pNVar9 = (Node*)0x0;
         cVar5 = Node::has_node(*(NodePath**)( lVar10 + 0x368 ));
         if (cVar5 != '\0') {
            pNVar9 = (Node*)Node::get_node(*(NodePath**)( lVar10 + 0x368 ));
         }

         local_58 = (Object*)( (ulong)local_58 & 0xffffffff00000000 );
         cVar5 = HashMap<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>>>>::_lookup_pos((HashMap<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>>>>*)( param_1 + 0x70 ), (String*)( param_1 + 0x68 ), (uint*)&local_58);
         if (( ( cVar5 != '\0' ) && ( lVar10 = *(long*)( *(long*)( param_1 + 0x78 ) + ( (ulong)local_58 & 0xffffffff ) * 8 ) ),lVar10 != 0 )) {
            puVar2 = *(undefined8**)( lVar10 + 0x18 );
            lVar10 = 0;
            pNVar3 = (NodePath*)*puVar2;
            while (true) {
               if (( ( pNVar9 == (Node*)0x0 ) || ( cVar5 = Node::is_ancestor_of(pNVar9) ),cVar5 != '\0' )) {
                  uVar7 = Node::get_node(pNVar3);
                  pSVar8 = (String*)PackedScene::instantiate(pOVar6);
                  if (pSVar8 != (String*)0x0) {
                     Node::set_name(pSVar8);
                     Node::add_child(uVar7, pSVar8, 0, 0);
                  }

               }

               if (iVar1 <= (int)lVar10 + 1) break;
               lVar10 = lVar10 + 1;
               pNVar3 = (NodePath*)puVar2[lVar10];
            }
;
         }

         cVar5 = RefCounted::unreference();
         if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(pOVar6) ),cVar5 != '\0') {
            ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Memory::free_static(pOVar6, false);
               return;
            }

            goto LAB_0010b54c;
         }

      }

   }

   LAB_0010b390:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010b54c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* SceneDebugger::add_to_cache(String const&, Node*) */void SceneDebugger::add_to_cache(String *param_1, Node *param_2) {
   long in_FS_OFFSET;
   Node *local_28[3];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( ( LiveEditor::singleton != 0 ) && ( EngineDebugger::script_debugger != 0 ) ) && ( *(long*)param_1 != 0 ) ) && ( 1 < *(uint*)( *(long*)param_1 + -8 ) )) {
      HashMap<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>>>>::operator []((HashMap<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>>>>*)( LiveEditor::singleton + 0x70 ), param_1);
      HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>::insert(local_28);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* LiveEditor::_node_set_func(int, StringName const&, Variant const&) */void LiveEditor::_node_set_func(LiveEditor *this, int param_1, StringName *param_2, Variant *param_3) {
   ulong uVar1;
   undefined8 *puVar2;
   code *pcVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   long lVar12;
   char cVar13;
   uint uVar14;
   NodePath *pNVar15;
   StringName *pSVar16;
   long lVar17;
   Node *pNVar18;
   int iVar19;
   ulong uVar20;
   long lVar21;
   uint uVar22;
   char *pcVar23;
   ulong uVar24;
   uint uVar25;
   long in_FS_OFFSET;
   int *local_e8;
   int local_dc;
   NodePath local_d8[8];
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8;
   undefined1 local_b0[16];
   int local_98[8];
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   lVar12 = SceneTree::singleton;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_dc = param_1;
   if (( ( SceneTree::singleton != 0 ) && ( *(long*)( this + 8 ) != 0 ) ) && ( *(int*)( this + 0x2c ) != 0 )) {
      uVar1 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar14 = ( (uint)param_1 >> 0x10 ^ param_1 ) * -0x7a143595;
      uVar14 = ( uVar14 ^ uVar14 >> 0xd ) * -0x3d4d51cb;
      uVar22 = uVar14 ^ uVar14 >> 0x10;
      if (uVar14 == uVar14 >> 0x10) {
         uVar22 = 1;
         uVar20 = uVar1;
      }
 else {
         uVar20 = uVar22 * uVar1;
      }

      uVar24 = CONCAT44(0, ( &hash_table_size_primes )[*(uint*)( this + 0x28 )]);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar24;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar20;
      lVar21 = SUB168(auVar4 * auVar8, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar21 * 4 );
      iVar19 = SUB164(auVar4 * auVar8, 8);
      if (uVar14 != 0) {
         uVar25 = 0;
         do {
            if (( uVar14 == uVar22 ) && ( param_1 == *(int*)( *(long*)( *(long*)( this + 8 ) + lVar21 * 8 ) + 0x10 ) )) {
               pNVar18 = (Node*)0x0;
               pNVar15 = (NodePath*)HashMap<int,NodePath,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,NodePath>>>::operator []((HashMap<int,NodePath,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,NodePath>>>*)this, &local_dc);
               NodePath::NodePath(local_d8, pNVar15);
               cVar13 = Node::has_node(*(NodePath**)( lVar12 + 0x368 ));
               if (cVar13 != '\0') {
                  pNVar18 = (Node*)Node::get_node(*(NodePath**)( lVar12 + 0x368 ));
               }

               local_c8 = (char*)( (ulong)local_c8._4_4_ << 0x20 );
               cVar13 = HashMap<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>>>>::_lookup_pos((HashMap<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>>>>*)( this + 0x70 ), (String*)( this + 0x68 ), (uint*)&local_c8);
               if (( ( cVar13 == '\0' ) || ( lVar21 = *(long*)( *(long*)( this + 0x78 ) + ( (ulong)local_c8 & 0xffffffff ) * 8 ) ),lVar21 == 0 )) goto LAB_0010b860;
               puVar2 = *(undefined8**)( lVar21 + 0x18 );
               lVar21 = 0;
               pNVar15 = (NodePath*)*puVar2;
               goto joined_r0x0010b7b3;
            }

            uVar25 = uVar25 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( iVar19 + 1 ) * uVar1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar24;
            lVar21 = SUB168(auVar5 * auVar9, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar21 * 4 );
            iVar19 = SUB164(auVar5 * auVar9, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar14 * uVar1,auVar10._8_8_ = 0,auVar10._0_8_ = uVar24,auVar7._8_8_ = 0,auVar7._0_8_ = ( uint )(( ( &hash_table_size_primes )[*(uint*)( this + 0x28 )] + iVar19 ) - SUB164(auVar6 * auVar10, 8)) * uVar1,auVar11._8_8_ = 0,auVar11._0_8_ = uVar24,uVar25 <= SUB164(auVar7 * auVar11, 8) );
      }

   }

   LAB_0010b868:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   joined_r0x0010b7b3:if (( ( pNVar18 == (Node*)0x0 ) || ( cVar13 = Node::is_ancestor_of(pNVar18) ),cVar13 != '\0' )) {
      pSVar16 = (StringName*)Node::get_node(pNVar15);
      if (pNVar15 == (NodePath*)pSVar16) {
         lVar17 = Node::get_parent();
         local_b8 = 0;
         local_b0 = (undefined1[16])0x0;
         if (*(long*)( lVar12 + 0x368 ) == lVar17) goto LAB_0010b7ff;
         pcVar3 = *(code**)( *(long*)pSVar16 + 0x58 );
         local_d0 = 0;
         local_c0 = 6;
         local_c8 = "Node3D";
         String::parse_latin1((StrRange*)&local_d0);
         cVar13 = ( *pcVar3 )(pSVar16, (StrRange*)&local_d0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
         if (cVar13 == '\0') {
            pcVar3 = *(code**)( *(long*)pSVar16 + 0x58 );
            local_c8 = (char*)0x0;
            String::parse_latin1((String*)&local_c8, "CanvasItem");
            cVar13 = ( *pcVar3 )(pSVar16, (StringName*)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
            if (cVar13 != '\0') {
               StringName::StringName((StringName*)&local_c8, "_edit_get_state", false);
               Object::call<>((StringName*)local_58);
               if (Variant::needs_deinit[(int)local_b8] != '\0') {
                  Variant::_clear_internal();
               }

               local_b8 = CONCAT44(local_b8._4_4_, local_58[0]);
               local_b0._8_8_ = uStack_48;
               local_b0._0_8_ = local_50;
               goto joined_r0x0010bd22;
            }

            Object::set(pSVar16, (Variant*)param_2, (bool*)param_3);
         }
 else {
            StringName::StringName((StringName*)&local_c8, "get_transform", false);
            Object::call<>((StringName*)local_58);
            if (Variant::needs_deinit[(int)local_b8] != '\0') {
               Variant::_clear_internal();
            }

            local_b8 = CONCAT44(local_b8._4_4_, local_58[0]);
            local_b0._8_8_ = uStack_48;
            local_b0._0_8_ = local_50;
            joined_r0x0010bd22:if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
               StringName::unref();
            }

            Object::set(pSVar16, (Variant*)param_2, (bool*)param_3);
         }

         pcVar3 = *(code**)( *(long*)pSVar16 + 0x58 );
         local_d0 = 0;
         local_c0 = 6;
         local_c8 = "Node3D";
         String::parse_latin1((StrRange*)&local_d0);
         cVar13 = ( *pcVar3 )(pSVar16, (StrRange*)&local_d0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
         if (cVar13 == '\0') {
            pcVar3 = *(code**)( *(long*)pSVar16 + 0x58 );
            local_c8 = (char*)0x0;
            String::parse_latin1((String*)&local_c8, "CanvasItem");
            cVar13 = ( *pcVar3 )(pSVar16, (StringName*)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
            if (cVar13 != '\0') {
               StringName::StringName((StringName*)&local_c8, "_edit_get_state", false);
               Object::call<>((StringName*)local_98);
               if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
                  StringName::unref();
               }

               cVar13 = Variant::operator !=((Variant*)local_98, (Variant*)&local_b8);
               if (cVar13 != '\0') {
                  Variant::Variant((Variant*)local_78, (Variant*)&local_b8);
                  pcVar23 = "_edit_set_state";
                  goto LAB_0010bc41;
               }

               goto LAB_0010ba78;
            }

         }
 else {
            StringName::StringName((StringName*)&local_c8, "get_transform", false);
            Object::call<>((StringName*)local_98);
            if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
               StringName::unref();
            }

            cVar13 = Variant::operator !=((Variant*)local_98, (Variant*)&local_b8);
            if (cVar13 != '\0') {
               Variant::Variant((Variant*)local_78, (Variant*)&local_b8);
               pcVar23 = "set_transform";
               LAB_0010bc41:local_e8 = local_78;
               StringName::StringName((StringName*)&local_c8, pcVar23, false);
               Object::call<Variant>(local_58, pSVar16, (StringName*)&local_c8, local_e8);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
                  StringName::unref();
               }

               if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }

            }

            LAB_0010ba78:if (Variant::needs_deinit[local_98[0]] != '\0') {
               Variant::_clear_internal();
            }

         }

      }
 else {
         LAB_0010b7ff:local_b0 = (undefined1[16])0x0;
         local_b8 = 0;
         Object::set(pSVar16, (Variant*)param_2, (bool*)param_3);
      }

      if (Variant::needs_deinit[(int)local_b8] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (iVar19 <= (int)lVar21 + 1) goto LAB_0010b860;
   lVar21 = lVar21 + 1;
   pNVar15 = (NodePath*)puVar2[lVar21];
   goto joined_r0x0010b7b3;
   LAB_0010b860:NodePath::~NodePath(local_d8);
   goto LAB_0010b868;
}
/* LiveEditor::_node_set_res_func(int, StringName const&, String const&) */void LiveEditor::_node_set_res_func(LiveEditor *this, int param_1, StringName *param_2, String *param_3) {
   Object *pOVar1;
   char cVar2;
   long in_FS_OFFSET;
   undefined8 local_70;
   Object *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   local_60 = 0;
   local_68 = (Object*)&_LC26;
   String::parse_latin1((StrRange*)&local_70);
   ResourceLoader::load(&local_68, param_3, (StrRange*)&local_70, 1, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (local_68 != (Object*)0x0) {
      Variant::Variant((Variant*)local_58, local_68);
      _node_set_func(this, param_1, param_2, (Variant*)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_68 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         pOVar1 = local_68;
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(local_68);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* LiveEditor::_node_call_func(int, StringName const&, Variant const**, int) */void LiveEditor::_node_call_func(LiveEditor *this, int param_1, StringName *param_2, Variant **param_3, int param_4) {
   ulong uVar1;
   undefined8 *puVar2;
   code *pcVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   long lVar12;
   char cVar13;
   uint uVar14;
   NodePath *pNVar15;
   NodePath *pNVar16;
   long lVar17;
   Node *pNVar18;
   ulong uVar19;
   int iVar20;
   long lVar21;
   uint uVar22;
   char *pcVar23;
   ulong uVar24;
   uint uVar25;
   long in_FS_OFFSET;
   int *local_100;
   int *local_f8;
   int local_ec;
   NodePath local_e8[8];
   undefined8 local_e0;
   undefined4 local_d8;
   undefined4 uStack_d4;
   undefined4 uStack_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8;
   undefined1 local_b0[16];
   int local_98[8];
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   lVar12 = SceneTree::singleton;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_ec = param_1;
   if (( ( SceneTree::singleton != 0 ) && ( *(long*)( this + 8 ) != 0 ) ) && ( *(int*)( this + 0x2c ) != 0 )) {
      uVar1 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar14 = ( (uint)param_1 >> 0x10 ^ param_1 ) * -0x7a143595;
      uVar14 = ( uVar14 ^ uVar14 >> 0xd ) * -0x3d4d51cb;
      uVar22 = uVar14 ^ uVar14 >> 0x10;
      if (uVar14 == uVar14 >> 0x10) {
         uVar22 = 1;
         uVar19 = uVar1;
      }
 else {
         uVar19 = uVar22 * uVar1;
      }

      uVar24 = CONCAT44(0, ( &hash_table_size_primes )[*(uint*)( this + 0x28 )]);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar24;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar19;
      lVar21 = SUB168(auVar4 * auVar8, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar21 * 4 );
      iVar20 = SUB164(auVar4 * auVar8, 8);
      if (uVar14 != 0) {
         uVar25 = 0;
         do {
            if (( uVar14 == uVar22 ) && ( param_1 == *(int*)( *(long*)( *(long*)( this + 8 ) + lVar21 * 8 ) + 0x10 ) )) {
               pNVar18 = (Node*)0x0;
               pNVar15 = (NodePath*)HashMap<int,NodePath,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,NodePath>>>::operator []((HashMap<int,NodePath,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,NodePath>>>*)this, &local_ec);
               NodePath::NodePath(local_e8, pNVar15);
               cVar13 = Node::has_node(*(NodePath**)( lVar12 + 0x368 ));
               if (cVar13 != '\0') {
                  pNVar18 = (Node*)Node::get_node(*(NodePath**)( lVar12 + 0x368 ));
               }

               local_c8 = (char*)( (ulong)local_c8._4_4_ << 0x20 );
               cVar13 = HashMap<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>>>>::_lookup_pos((HashMap<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>>>>*)( this + 0x70 ), (String*)( this + 0x68 ), (uint*)&local_c8);
               if (( ( cVar13 == '\0' ) || ( lVar21 = *(long*)( *(long*)( this + 0x78 ) + ( (ulong)local_c8 & 0xffffffff ) * 8 ) ),lVar21 == 0 )) goto LAB_0010c170;
               puVar2 = *(undefined8**)( lVar21 + 0x18 );
               lVar21 = 0;
               pNVar15 = (NodePath*)*puVar2;
               goto joined_r0x0010c07c;
            }

            uVar25 = uVar25 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( iVar20 + 1 ) * uVar1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar24;
            lVar21 = SUB168(auVar5 * auVar9, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar21 * 4 );
            iVar20 = SUB164(auVar5 * auVar9, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar14 * uVar1,auVar10._8_8_ = 0,auVar10._0_8_ = uVar24,auVar7._8_8_ = 0,auVar7._0_8_ = ( uint )(( ( &hash_table_size_primes )[*(uint*)( this + 0x28 )] + iVar20 ) - SUB164(auVar6 * auVar10, 8)) * uVar1,auVar11._8_8_ = 0,auVar11._0_8_ = uVar24,uVar25 <= SUB164(auVar7 * auVar11, 8) );
      }

   }

   LAB_0010c178:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   joined_r0x0010c07c:if (( ( pNVar18 == (Node*)0x0 ) || ( cVar13 = Node::is_ancestor_of(pNVar18) ),cVar13 != '\0' )) {
      pNVar16 = (NodePath*)Node::get_node(pNVar15);
      if (pNVar15 == pNVar16) {
         lVar17 = Node::get_parent();
         local_b8 = 0;
         local_b0 = (undefined1[16])0x0;
         if (*(long*)( lVar12 + 0x368 ) == lVar17) goto LAB_0010c0d5;
         pcVar3 = *(code**)( *(long*)pNVar16 + 0x58 );
         local_d8 = 0;
         uStack_d4 = 0;
         local_c8 = "Node3D";
         local_c0 = 6;
         String::parse_latin1((StrRange*)&local_d8);
         cVar13 = ( *pcVar3 )(pNVar16, (StrRange*)&local_d8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
         if (cVar13 == '\0') {
            pcVar3 = *(code**)( *(long*)pNVar16 + 0x58 );
            local_c8 = (char*)0x0;
            String::parse_latin1((String*)&local_c8, "CanvasItem");
            cVar13 = ( *pcVar3 )(pNVar16, (StringName*)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
            if (cVar13 != '\0') {
               StringName::StringName((StringName*)&local_c8, "_edit_get_state", false);
               Object::call<>((StringName*)local_58);
               if (Variant::needs_deinit[(int)local_b8] != '\0') {
                  Variant::_clear_internal();
               }

               local_b8 = CONCAT44(local_b8._4_4_, local_58[0]);
               local_b0._8_8_ = uStack_48;
               local_b0._0_8_ = local_50;
               goto joined_r0x0010c579;
            }

         }
 else {
            StringName::StringName((StringName*)&local_c8, "get_transform", false);
            Object::call<>((StringName*)local_58);
            if (Variant::needs_deinit[(int)local_b8] != '\0') {
               Variant::_clear_internal();
            }

            local_b8 = CONCAT44(local_b8._4_4_, local_58[0]);
            local_b0._8_8_ = uStack_48;
            local_b0._0_8_ = local_50;
            joined_r0x0010c579:if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
               StringName::unref();
            }

         }

         local_100 = local_58;
         local_d8 = 0;
         uStack_d4 = 0;
         uStack_d0 = 0;
         ( **(code**)( *(long*)pNVar16 + 0x68 ) )(local_100, pNVar16, param_2, param_3, param_4, (StrRange*)&local_d8);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         local_e0 = 0;
         pcVar3 = *(code**)( *(long*)pNVar16 + 0x58 );
         local_c0 = 6;
         local_c8 = "Node3D";
         String::parse_latin1((StrRange*)&local_e0);
         cVar13 = ( *pcVar3 )(pNVar16, (StrRange*)&local_e0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
         if (cVar13 == '\0') {
            pcVar3 = *(code**)( *(long*)pNVar16 + 0x58 );
            local_c8 = (char*)0x0;
            String::parse_latin1((String*)&local_c8, "CanvasItem");
            cVar13 = ( *pcVar3 )(pNVar16, (StringName*)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
            if (cVar13 != '\0') {
               StringName::StringName((StringName*)&local_c8, "_edit_get_state", false);
               Object::call<>((StringName*)local_98);
               if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
                  StringName::unref();
               }

               cVar13 = Variant::operator !=((Variant*)local_98, (Variant*)&local_b8);
               if (cVar13 != '\0') {
                  Variant::Variant((Variant*)local_78, (Variant*)&local_b8);
                  pcVar23 = "_edit_set_state";
                  goto LAB_0010c5ee;
               }

               goto LAB_0010c3c1;
            }

         }
 else {
            StringName::StringName((StringName*)&local_c8, "get_transform", false);
            Object::call<>((StringName*)local_98);
            if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
               StringName::unref();
            }

            cVar13 = Variant::operator !=((Variant*)local_98, (Variant*)&local_b8);
            if (cVar13 != '\0') {
               Variant::Variant((Variant*)local_78, (Variant*)&local_b8);
               pcVar23 = "set_transform";
               LAB_0010c5ee:local_f8 = local_78;
               StringName::StringName((StringName*)&local_c8, pcVar23, false);
               Object::call<Variant>(local_100, pNVar16, (StringName*)&local_c8, local_f8);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
                  StringName::unref();
               }

               if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }

            }

            LAB_0010c3c1:if (Variant::needs_deinit[local_98[0]] != '\0') {
               Variant::_clear_internal();
            }

         }

      }
 else {
         LAB_0010c0d5:local_b0 = (undefined1[16])0x0;
         local_b8 = 0;
         local_d8 = 0;
         uStack_d4 = 0;
         uStack_d0 = 0;
         ( **(code**)( *(long*)pNVar16 + 0x68 ) )(local_58, pNVar16, param_2, param_3, param_4, &local_d8);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

      }

      if (Variant::needs_deinit[(int)local_b8] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (iVar20 <= (int)lVar21 + 1) goto LAB_0010c170;
   lVar21 = lVar21 + 1;
   pNVar15 = (NodePath*)puVar2[lVar21];
   goto joined_r0x0010c07c;
   LAB_0010c170:NodePath::~NodePath(local_e8);
   goto LAB_0010c178;
}
/* SceneDebugger::_set_object_property(ObjectID, String const&, Variant const&) */void SceneDebugger::_set_object_property(ulong param_1, CowData *param_2, bool *param_3) {
   CowData *pCVar1;
   StringName *pSVar2;
   code *pcVar3;
   char cVar4;
   uint uVar5;
   ulong *puVar6;
   long lVar7;
   long lVar8;
   long in_FS_OFFSET;
   bool bVar9;
   long local_50;
   StringName local_48;
   undefined7 uStack_47;
   long local_40[2];
   long local_30;
   uVar5 = (uint)param_1 & 0xffffff;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (uVar5 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_48 = (StringName)0x0;
         LOCK();
         bVar9 = (char)ObjectDB::spin_lock == '\0';
         if (bVar9) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar9) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar6 = (ulong*)( (ulong)uVar5 * 0x10 + ObjectDB::object_slots );
      if (( param_1 >> 0x18 & 0x7fffffffff ) == ( *puVar6 & 0x7fffffffff )) {
         pSVar2 = (StringName*)puVar6[1];
         ObjectDB::spin_lock._0_1_ = '\0';
         if (pSVar2 != (StringName*)0x0) {
            local_50 = 0;
            if (*(long*)param_2 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, param_2);
            }

            cVar4 = String::begins_with((char*)param_2);
            if (cVar4 != '\0') {
               String::split((char*)&local_48, SUB81(param_2, 0), 0x1145b5);
               if (local_40[0] == 0) {
                  lVar8 = 0;
                  lVar7 = -1;
                  LAB_0010c8b5:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar8, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               lVar8 = *(long*)( local_40[0] + -8 );
               lVar7 = lVar8 + -1;
               if (lVar7 < 0) goto LAB_0010c8b5;
               pCVar1 = (CowData*)( local_40[0] + lVar7 * 8 );
               if (local_50 != *(long*)pCVar1) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, pCVar1);
               }

               CowData<String>::_unref((CowData<String>*)local_40);
            }

            StringName::StringName(&local_48, (String*)&local_50, false);
            Object::set(pSVar2, (Variant*)&local_48, param_3);
            if (( StringName::configured != '\0' ) && ( CONCAT71(uStack_47, local_48) != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SceneDebuggerObject::_parse_script_properties(Script*, ScriptInstance*) */void SceneDebuggerObject::_parse_script_properties(SceneDebuggerObject *this, Script *param_1, ScriptInstance *param_2) {
   long *plVar1;
   ulong uVar2;
   int *piVar3;
   uint uVar4;
   uint uVar5;
   code *pcVar6;
   Script *pSVar7;
   long lVar8;
   char *pcVar9;
   undefined8 uVar10;
   size_t sVar11;
   char cVar12;
   int iVar13;
   HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this_00;
   undefined8 uVar14;
   HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>> *pHVar15;
   undefined1(*pauVar16)[16];
   void *pvVar17;
   StringName *pSVar18;
   void *pvVar19;
   void *pvVar20;
   ulong uVar21;
   undefined4 *puVar22;
   Object *pOVar23;
   int *piVar24;
   int *piVar25;
   long *plVar26;
   long lVar27;
   undefined8 *puVar28;
   Object *pOVar29;
   ulong uVar30;
   StringName *pSVar31;
   long in_FS_OFFSET;
   bool bVar32;
   StringName *local_240;
   Script *local_1b0[2];
   Object *local_1a0;
   long local_198;
   long local_190;
   long local_188;
   long local_180;
   long local_178;
   long local_170;
   HashMap<Script_const*,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<Script_const*>,DefaultTypedAllocator<HashMapElement<Script_const*,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault < StringName>>>> > local_168[8];
   undefined1 local_160[16];
   undefined1 local_150[16];
   undefined8 local_140;
   HashMap<Script_const*,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<Script_const*>,DefaultTypedAllocator<HashMapElement<Script_const*,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault < StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>>> > local_138[8];
   undefined1 local_130[16];
   undefined1 local_120[16];
   undefined8 local_110;
   Script *local_108;
   long local_100;
   long local_f8;
   int local_f0;
   long local_e8;
   undefined4 local_e0;
   undefined4 local_d8;
   undefined4 uStack_d4;
   size_t sStack_d0;
   long local_c8;
   int iStack_c0;
   undefined4 uStack_bc;
   ulong local_b8;
   ulong local_b0;
   undefined8 local_a8;
   undefined1 local_a0[16];
   undefined4 local_88;
   long local_80;
   long local_78;
   int local_70;
   long local_68;
   undefined4 local_60;
   int local_58[6];
   long local_40;
   uVar2 = _LC25;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_140 = _LC25;
   local_160 = (undefined1[16])0x0;
   local_150 = (undefined1[16])0x0;
   local_1b0[0] = param_1;
   if (param_2 != (ScriptInstance*)0x0) {
      local_d8 = 0;
      uStack_d4 = 0;
      sStack_d0 = 0;
      local_c8 = 0;
      iStack_c0 = 0;
      uStack_bc = 0;
      local_b8 = _LC25;
      this_00 = (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)HashMap<Script_const*,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<Script_const*>,DefaultTypedAllocator<HashMapElement<Script_const*,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault < StringName>>>> > ::operator [](local_168, local_1b0);
      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::operator =(this_00, (HashSet*)&local_d8);
      pcVar6 = *(code**)( *(long*)param_1 + 0x2d0 );
      uVar14 = HashMap<Script_const*,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<Script_const*>,DefaultTypedAllocator<HashMapElement<Script_const*,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault < StringName>>>> > ::operator [](local_168, local_1b0);
      if (pcVar6 != Script::get_members) {
         ( *pcVar6 )(param_1, uVar14);
      }

   }

   local_110 = uVar2;
   local_130 = (undefined1[16])0x0;
   local_120 = (undefined1[16])0x0;
   sStack_d0 = 0;
   local_c8 = 0;
   iStack_c0 = 0;
   uStack_bc = 0;
   local_b8 = 0;
   local_b0 = uVar2;
   pHVar15 = (HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)HashMap<Script_const*,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<Script_const*>,DefaultTypedAllocator<HashMapElement<Script_const*,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault < StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>>> > ::operator [](local_138, local_1b0);
   HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator =(pHVar15, (HashMap*)&local_d8);
   pcVar6 = *(code**)( *(long*)param_1 + 0x2c8 );
   uVar14 = HashMap<Script_const*,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<Script_const*>,DefaultTypedAllocator<HashMapElement<Script_const*,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault < StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>>> > ::operator [](local_138, local_1b0);
   if (pcVar6 != Script::get_constants) {
      ( *pcVar6 )(param_1, uVar14);
   }

   ( **(code**)( *(long*)param_1 + 0x1d8 ) )(&local_1a0);
   while (local_1a0 != (Object*)0x0) {
      if (param_2 != (ScriptInstance*)0x0) {
         local_d8 = SUB84(local_1a0, 0);
         uStack_d4 = ( undefined4 )((ulong)local_1a0 >> 0x20);
         pauVar16 = (undefined1(*) [16])HashMap<Script_const*,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<Script_const*>,DefaultTypedAllocator<HashMapElement<Script_const*,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault < StringName>>>> > ::operator [](local_168, (Script**)&local_d8);
         pvVar17 = *(void**)*pauVar16;
         if (pvVar17 != (void*)0x0) {
            if (( *(int*)( pauVar16[2] + 4 ) != 0 ) && ( ( ( &hash_table_size_primes )[*(uint*)pauVar16[2]] == 0 || ( memset(*(void**)( pauVar16[1] + 8 ), 0, ( ulong )(uint)(&hash_table_size_primes)[*(uint*)pauVar16[2]] * 4),*(int*)( pauVar16[2] + 4 ) != 0 ) ) )) {
               lVar27 = 0;
               do {
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar17 + lVar27 * 8 ) != 0 )) {
                     StringName::unref();
                     pvVar17 = *(void**)*pauVar16;
                  }

                  lVar27 = lVar27 + 1;
               }
 while ( (uint)lVar27 < *(uint*)( pauVar16[2] + 4 ) );
               *(undefined4*)( pauVar16[2] + 4 ) = 0;
               if (pvVar17 == (void*)0x0) goto LAB_0010cb7c;
            }

            Memory::free_static(pvVar17, false);
            Memory::free_static(*(void**)pauVar16[1], false);
            Memory::free_static(*(void**)( *pauVar16 + 8 ), false);
            Memory::free_static(*(void**)( pauVar16[1] + 8 ), false);
            *pauVar16 = (undefined1[16])0x0;
            pauVar16[1] = (undefined1[16])0x0;
         }

         LAB_0010cb7c:pOVar23 = local_1a0;
         *(ulong*)pauVar16[2] = uVar2;
         pcVar6 = *(code**)( *(long*)local_1a0 + 0x2d0 );
         local_d8 = SUB84(local_1a0, 0);
         uStack_d4 = ( undefined4 )((ulong)local_1a0 >> 0x20);
         uVar14 = HashMap<Script_const*,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<Script_const*>,DefaultTypedAllocator<HashMapElement<Script_const*,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault < StringName>>>> > ::operator [](local_168, (Script**)&local_d8);
         if (pcVar6 != Script::get_members) {
            ( *pcVar6 )(pOVar23, uVar14);
         }

      }

      sStack_d0 = 0;
      local_c8 = 0;
      iStack_c0 = 0;
      uStack_bc = 0;
      local_b8 = 0;
      local_b0 = uVar2;
      local_108 = (Script*)local_1a0;
      pHVar15 = (HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)HashMap<Script_const*,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<Script_const*>,DefaultTypedAllocator<HashMapElement<Script_const*,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault < StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>>> > ::operator [](local_138, &local_108);
      HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator =(pHVar15, (HashMap*)&local_d8);
      pOVar23 = local_1a0;
      pcVar6 = *(code**)( *(long*)local_1a0 + 0x2c8 );
      local_d8 = SUB84(local_1a0, 0);
      uStack_d4 = ( undefined4 )((ulong)local_1a0 >> 0x20);
      uVar14 = HashMap<Script_const*,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<Script_const*>,DefaultTypedAllocator<HashMapElement<Script_const*,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault < StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>>> > ::operator [](local_138, (Script**)&local_d8);
      if (pcVar6 != Script::get_constants) {
         ( *pcVar6 )(pOVar23, uVar14);
      }

      ( **(code**)( *(long*)local_1a0 + 0x1d8 ) )((HashMap*)&local_d8);
      pOVar29 = local_1a0;
      pOVar23 = (Object*)CONCAT44(uStack_d4, local_d8);
      if (pOVar23 != local_1a0) {
         if (pOVar23 == (Object*)0x0) {
            bVar32 = local_1a0 == (Object*)0x0;
            local_1a0 = pOVar23;
            if (bVar32) break;
            cVar12 = RefCounted::unreference();
            joined_r0x0010eb73:if (( cVar12 != '\0' ) && ( cVar12 = predelete_handler(pOVar29) ),cVar12 != '\0') {
               ( **(code**)( *(long*)pOVar29 + 0x140 ) )(pOVar29);
               Memory::free_static(pOVar29, false);
            }

         }
 else {
            local_1a0 = pOVar23;
            cVar12 = RefCounted::reference();
            if (cVar12 == '\0') {
               local_1a0 = (Object*)0x0;
            }

            if (pOVar29 != (Object*)0x0) {
               cVar12 = RefCounted::unreference();
               goto joined_r0x0010eb73;
            }

         }

         pOVar29 = (Object*)CONCAT44(uStack_d4, local_d8);
      }

      if (( pOVar29 != (Object*)0x0 ) && ( cVar12 = RefCounted::unreference() ),cVar12 != '\0') {
         pOVar23 = (Object*)CONCAT44(uStack_d4, local_d8);
         cVar12 = predelete_handler(pOVar23);
         if (cVar12 != '\0') {
            ( **(code**)( *(long*)pOVar23 + 0x140 ) )(pOVar23);
            Memory::free_static(pOVar23, false);
         }

      }

   }
;
   plVar26 = (long*)local_150._0_8_;
   if ((long*)local_150._0_8_ != (long*)0x0) {
      LAB_0010cce8:pSVar7 = (Script*)plVar26[2];
      uVar4 = *(uint*)( (long)plVar26 + 0x3c );
      if (uVar4 != 0) {
         lVar27 = 0;
         uVar5 = ( &hash_table_size_primes )[*(uint*)( plVar26 + 7 )];
         uVar30 = (ulong)uVar5;
         uVar2 = uVar30 * 4;
         pvVar17 = (void*)Memory::alloc_static(uVar2, false);
         pSVar18 = (StringName*)Memory::alloc_static(uVar30 * 8, false);
         pvVar19 = (void*)Memory::alloc_static(uVar2, false);
         pvVar20 = (void*)Memory::alloc_static(uVar2, false);
         pSVar31 = pSVar18;
         do {
            StringName::StringName(pSVar31, (StringName*)( plVar26[3] + lVar27 * 2 ));
            *(undefined4*)( (long)pvVar19 + lVar27 ) = *(undefined4*)( plVar26[5] + lVar27 );
            lVar27 = lVar27 + 4;
            pSVar31 = pSVar31 + 8;
         }
 while ( (ulong)uVar4 * 4 - lVar27 != 0 );
         if (uVar5 != 0) {
            lVar27 = plVar26[6];
            lVar8 = plVar26[4];
            uVar21 = 0;
            do {
               *(undefined4*)( (long)pvVar17 + uVar21 ) = *(undefined4*)( lVar27 + uVar21 );
               *(undefined4*)( (long)pvVar20 + uVar21 ) = *(undefined4*)( lVar8 + uVar21 );
               uVar21 = uVar21 + 4;
            }
 while ( uVar21 != uVar2 );
         }

         iVar13 = 1;
         local_240 = pSVar18;
         do {
            local_a0 = (undefined1[16])0x0;
            local_a8 = 0;
            cVar12 = ( **(code**)( *(long*)param_2 + 8 ) )(param_2, local_240, (Variant*)&local_a8);
            if (cVar12 != '\0') {
               if (pSVar7 == param_1) {
                  local_198 = 0;
                  local_d8 = 0x114449;
                  uStack_d4 = 0;
                  sStack_d0 = 0;
                  String::parse_latin1((StrRange*)&local_198);
               }
 else {
                  local_108 = (Script*)0x0;
                  local_d8 = 0x1145b5;
                  uStack_d4 = 0;
                  sStack_d0 = 1;
                  String::parse_latin1((StrRange*)&local_108);
                  Resource::get_path();
                  String::get_file();
                  String::operator +((String*)&local_198, (String*)&local_d8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
               }

               local_170 = 0;
               local_d8 = 0x114449;
               uStack_d4 = 0;
               local_178 = 0;
               sStack_d0 = 0;
               String::parse_latin1((StrRange*)&local_178);
               lVar27 = *(long*)local_240;
               if (lVar27 == 0) {
                  local_188 = 0;
               }
 else {
                  pcVar9 = *(char**)( lVar27 + 8 );
                  local_188 = 0;
                  if (pcVar9 == (char*)0x0) {
                     if (*(long*)( lVar27 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_188, (CowData*)( lVar27 + 0x10 ));
                     }

                  }
 else {
                     sStack_d0 = strlen(pcVar9);
                     local_d8 = SUB84(pcVar9, 0);
                     uStack_d4 = ( undefined4 )((ulong)pcVar9 >> 0x20);
                     String::parse_latin1((StrRange*)&local_188);
                  }

               }

               operator+((char *)&
               local_190,(String*)"Members/";
               String::operator +((String*)&local_180, (String*)&local_190);
               local_100 = 0;
               local_108 = (Script*)CONCAT44(local_108._4_4_, (int)local_a8);
               if (local_180 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_100, (CowData*)&local_180);
               }

               local_f8 = 0;
               local_f0 = 0;
               local_e8 = 0;
               if (local_178 == 0) {
                  LAB_0010e5fb:local_e0 = 6;
                  StringName::operator =((StringName*)&local_f8, (StringName*)&local_170);
               }
 else {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)&local_178);
                  local_e0 = 6;
                  if (local_f0 != 0x11) goto LAB_0010e5fb;
                  StringName::StringName((StringName*)&local_d8, (String*)&local_e8, false);
                  if (local_f8 == CONCAT44(uStack_d4, local_d8)) {
                     if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_d4, local_d8) != 0 )) {
                        StringName::unref();
                     }

                  }
 else {
                     StringName::unref();
                     local_f8 = CONCAT44(uStack_d4, local_d8);
                  }

               }

               lVar27 = local_180;
               if (local_180 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_180 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_180 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

               lVar27 = local_190;
               if (local_190 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_190 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_190 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

               lVar27 = local_188;
               if (local_188 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_188 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_188 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

               lVar27 = local_178;
               if (local_178 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_178 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_178 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( local_170 != 0 )) {
                  StringName::unref();
               }

               sStack_d0 = 0;
               local_d8 = local_108._0_4_;
               if (local_100 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&sStack_d0, (CowData*)&local_100);
               }

               StringName::StringName((StringName*)&local_c8, (StringName*)&local_f8);
               local_b8 = 0;
               iStack_c0 = local_f0;
               if (local_e8 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_e8);
               }

               local_80 = 0;
               local_b0 = CONCAT44(local_b0._4_4_, local_e0);
               local_88 = local_d8;
               if (sStack_d0 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&sStack_d0);
               }

               StringName::StringName((StringName*)&local_78, (StringName*)&local_c8);
               local_68 = 0;
               local_70 = iStack_c0;
               if (local_b8 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_b8);
               }

               local_60 = (undefined4)local_b0;
               Variant::Variant((Variant*)local_58, (Variant*)&local_a8);
               if (*(long*)( this + 0x10 ) == 0) {
                  pauVar16 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])( this + 0x10 ) = pauVar16;
                  *(undefined4*)pauVar16[1] = 0;
                  *pauVar16 = (undefined1[16])0x0;
               }

               puVar22 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
               *(undefined8*)( puVar22 + 8 ) = 0;
               *(undefined1(*) [16])( puVar22 + 2 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( puVar22 + 0xe ) = (undefined1[16])0x0;
               *puVar22 = 0;
               puVar22[6] = 0;
               puVar22[10] = 6;
               puVar22[0xc] = 0;
               *(undefined8*)( puVar22 + 0x16 ) = 0;
               *(undefined1(*) [16])( puVar22 + 0x12 ) = (undefined1[16])0x0;
               *puVar22 = local_88;
               if (local_80 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( puVar22 + 2 ), (CowData*)&local_80);
               }

               StringName::operator =((StringName*)( puVar22 + 4 ), (StringName*)&local_78);
               puVar22[6] = local_70;
               if (*(long*)( puVar22 + 8 ) != local_68) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( puVar22 + 8 ), (CowData*)&local_68);
               }

               puVar22[10] = local_60;
               Variant::operator =((Variant*)( puVar22 + 0xc ), (Variant*)local_58);
               uVar14 = *(undefined8*)( *(long*)( this + 0x10 ) + 8 );
               *(long*)( puVar22 + 0x16 ) = *(long*)( this + 0x10 );
               plVar1 = *(long**)( this + 0x10 );
               *(undefined8*)( puVar22 + 0x12 ) = 0;
               *(undefined8*)( puVar22 + 0x14 ) = uVar14;
               if (plVar1[1] != 0) {
                  *(undefined4**)( plVar1[1] + 0x48 ) = puVar22;
               }

               plVar1[1] = (long)puVar22;
               if (*plVar1 == 0) {
                  *plVar1 = (long)puVar22;
               }

               *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               lVar27 = local_68;
               if (local_68 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_68 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_68 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
                  StringName::unref();
               }

               lVar27 = local_80;
               if (local_80 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_80 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_80 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

               uVar2 = local_b8;
               if (local_b8 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_b8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_b8 = 0;
                     Memory::free_static((void*)( uVar2 + -0x10 ), false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
                  StringName::unref();
               }

               sVar11 = sStack_d0;
               if (sStack_d0 != 0) {
                  LOCK();
                  plVar1 = (long*)( sStack_d0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     sStack_d0 = 0;
                     Memory::free_static((void*)( sVar11 + -0x10 ), false);
                  }

               }

               lVar27 = local_e8;
               if (local_e8 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_e8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_e8 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( local_f8 != 0 )) {
                  StringName::unref();
               }

               lVar27 = local_100;
               if (local_100 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_100 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_100 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

               lVar27 = local_198;
               if (local_198 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_198 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_198 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

            }

            if (Variant::needs_deinit[(int)local_a8] != '\0') {
               Variant::_clear_internal();
            }

            if ((int)uVar4 <= iVar13) goto code_r0x0010d611;
            iVar13 = iVar13 + 1;
            local_240 = local_240 + 8;
         }
 while ( true );
      }

      goto LAB_0010d6cd;
   }

   LAB_0010d6d9:for (puVar28 = (undefined8*)local_120._0_8_; puVar28 != (undefined8*)0x0; puVar28 = (undefined8*)*puVar28) {
      plVar26 = (long*)puVar28[6];
      if (plVar26 != (long*)0x0) {
         do {
            if ((Script*)puVar28[2] == param_1) {
               local_198 = 0;
               local_d8 = 0x114449;
               uStack_d4 = 0;
               sStack_d0 = 0;
               String::parse_latin1((StrRange*)&local_198);
            }
 else {
               local_d8 = 0x1145b5;
               uStack_d4 = 0;
               local_108 = (Script*)0x0;
               sStack_d0 = 1;
               String::parse_latin1((StrRange*)&local_108);
               Resource::get_path();
               String::get_file();
               String::operator +((String*)&local_198, (String*)&local_d8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            }

            if ((int)plVar26[3] == 0x18) {
               pOVar23 = Variant::operator_cast_to_Object_((Variant*)( plVar26 + 3 ));
               local_d8 = ( undefined4 ) * (undefined8*)( pOVar23 + 0x60 );
               uStack_d4 = ( undefined4 )(( ulong ) * (undefined8*)( pOVar23 + 0x60 ) >> 0x20);
               Variant::Variant((Variant*)&local_a8, (HashMap*)&local_d8);
               local_170 = 0;
               local_178 = 0;
               local_d8 = 0x11648a;
               uStack_d4 = 0;
               sStack_d0 = 6;
               String::parse_latin1((StrRange*)&local_178);
               lVar27 = plVar26[2];
               if (lVar27 == 0) {
                  local_188 = 0;
               }
 else {
                  pcVar9 = *(char**)( lVar27 + 8 );
                  local_188 = 0;
                  if (pcVar9 == (char*)0x0) {
                     if (*(long*)( lVar27 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_188, (CowData*)( lVar27 + 0x10 ));
                     }

                  }
 else {
                     sStack_d0 = strlen(pcVar9);
                     local_d8 = SUB84(pcVar9, 0);
                     uStack_d4 = ( undefined4 )((ulong)pcVar9 >> 0x20);
                     String::parse_latin1((StrRange*)&local_188);
                  }

               }

               operator+((char *)&
               local_180,(String*)"Constants/";
               local_100 = 0;
               local_108 = (Script*)CONCAT44(local_108._4_4_, (int)local_a8);
               if (local_180 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_100, (CowData*)&local_180);
               }

               local_f8 = 0;
               local_f0 = 0x16;
               local_e8 = 0;
               if (local_178 == 0) {
                  LAB_0010e62b:local_e0 = 6;
                  StringName::operator =((StringName*)&local_f8, (StringName*)&local_170);
               }
 else {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)&local_178);
                  local_e0 = 6;
                  if (local_f0 != 0x11) goto LAB_0010e62b;
                  StringName::StringName((StringName*)&local_d8, (String*)&local_e8, false);
                  if (local_f8 == CONCAT44(uStack_d4, local_d8)) {
                     if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_d4, local_d8) != 0 )) {
                        StringName::unref();
                     }

                  }
 else {
                     StringName::unref();
                     local_f8 = CONCAT44(uStack_d4, local_d8);
                  }

               }

               lVar27 = local_180;
               if (local_180 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_180 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_180 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

               lVar27 = local_188;
               if (local_188 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_188 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_188 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

               lVar27 = local_178;
               if (local_178 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_178 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_178 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( local_170 != 0 )) {
                  StringName::unref();
               }

               sStack_d0 = 0;
               local_d8 = local_108._0_4_;
               if (local_100 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&sStack_d0, (CowData*)&local_100);
               }

               StringName::StringName((StringName*)&local_c8, (StringName*)&local_f8);
               local_b8 = 0;
               iStack_c0 = local_f0;
               if (local_e8 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_e8);
               }

               local_80 = 0;
               local_b0 = CONCAT44(local_b0._4_4_, local_e0);
               local_88 = local_d8;
               if (sStack_d0 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&sStack_d0);
               }

               StringName::StringName((StringName*)&local_78, (StringName*)&local_c8);
               local_68 = 0;
               local_70 = iStack_c0;
               if (local_b8 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_b8);
               }

               local_60 = (undefined4)local_b0;
               Variant::Variant((Variant*)local_58, (Variant*)&local_a8);
               if (*(long*)( this + 0x10 ) == 0) {
                  pauVar16 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])( this + 0x10 ) = pauVar16;
                  *(undefined4*)pauVar16[1] = 0;
                  *pauVar16 = (undefined1[16])0x0;
               }

               puVar22 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
               *(undefined8*)( puVar22 + 8 ) = 0;
               *(undefined1(*) [16])( puVar22 + 2 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( puVar22 + 0xe ) = (undefined1[16])0x0;
               *puVar22 = 0;
               puVar22[6] = 0;
               puVar22[10] = 6;
               puVar22[0xc] = 0;
               *(undefined8*)( puVar22 + 0x16 ) = 0;
               *(undefined1(*) [16])( puVar22 + 0x12 ) = (undefined1[16])0x0;
               *puVar22 = local_88;
               if (local_80 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( puVar22 + 2 ), (CowData*)&local_80);
               }

               StringName::operator =((StringName*)( puVar22 + 4 ), (StringName*)&local_78);
               puVar22[6] = local_70;
               if (*(long*)( puVar22 + 8 ) != local_68) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( puVar22 + 8 ), (CowData*)&local_68);
               }

               puVar22[10] = local_60;
               Variant::operator =((Variant*)( puVar22 + 0xc ), (Variant*)local_58);
               uVar14 = *(undefined8*)( *(long*)( this + 0x10 ) + 8 );
               *(long*)( puVar22 + 0x16 ) = *(long*)( this + 0x10 );
               plVar1 = *(long**)( this + 0x10 );
               *(undefined8*)( puVar22 + 0x12 ) = 0;
               *(undefined8*)( puVar22 + 0x14 ) = uVar14;
               if (plVar1[1] != 0) {
                  *(undefined4**)( plVar1[1] + 0x48 ) = puVar22;
               }

               plVar1[1] = (long)puVar22;
               if (*plVar1 == 0) {
                  *plVar1 = (long)puVar22;
               }

               *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               lVar27 = local_68;
               if (local_68 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_68 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_68 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
                  StringName::unref();
               }

               lVar27 = local_80;
               if (local_80 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_80 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_80 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

               uVar2 = local_b8;
               if (local_b8 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_b8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_b8 = 0;
                     Memory::free_static((void*)( uVar2 + -0x10 ), false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
                  StringName::unref();
               }

               sVar11 = sStack_d0;
               if (sStack_d0 != 0) {
                  LOCK();
                  plVar1 = (long*)( sStack_d0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     sStack_d0 = 0;
                     Memory::free_static((void*)( sVar11 + -0x10 ), false);
                  }

               }

               lVar27 = local_e8;
               if (local_e8 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_e8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_e8 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( local_f8 != 0 )) {
                  StringName::unref();
               }

               lVar27 = local_100;
               if (local_100 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_100 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_100 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

               if (Variant::needs_deinit[(int)local_a8] != '\0') {
                  Variant::_clear_internal();
               }

            }
 else {
               local_170 = 0;
               local_178 = 0;
               local_d8 = 0x114449;
               uStack_d4 = 0;
               sStack_d0 = 0;
               String::parse_latin1((StrRange*)&local_178);
               lVar27 = plVar26[2];
               if (lVar27 == 0) {
                  local_188 = 0;
               }
 else {
                  pcVar9 = *(char**)( lVar27 + 8 );
                  local_188 = 0;
                  if (pcVar9 == (char*)0x0) {
                     if (*(long*)( lVar27 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_188, (CowData*)( lVar27 + 0x10 ));
                     }

                  }
 else {
                     sStack_d0 = strlen(pcVar9);
                     local_d8 = SUB84(pcVar9, 0);
                     uStack_d4 = ( undefined4 )((ulong)pcVar9 >> 0x20);
                     String::parse_latin1((StrRange*)&local_188);
                  }

               }

               operator+((char *)&
               local_190,(String*)"Constants/";
               String::operator +((String*)&local_180, (String*)&local_190);
               local_100 = 0;
               local_108 = (Script*)CONCAT44(local_108._4_4_, (int)plVar26[3]);
               if (local_180 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_100, (CowData*)&local_180);
               }

               local_f8 = 0;
               local_f0 = 0;
               local_e8 = 0;
               if (local_178 == 0) {
                  LAB_0010e593:local_e0 = 6;
                  StringName::operator =((StringName*)&local_f8, (StringName*)&local_170);
               }
 else {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)&local_178);
                  local_e0 = 6;
                  if (local_f0 != 0x11) goto LAB_0010e593;
                  StringName::StringName((StringName*)&local_d8, (String*)&local_e8, false);
                  if (local_f8 == CONCAT44(uStack_d4, local_d8)) {
                     if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_d4, local_d8) != 0 )) {
                        StringName::unref();
                     }

                  }
 else {
                     StringName::unref();
                     local_f8 = CONCAT44(uStack_d4, local_d8);
                  }

               }

               lVar27 = local_180;
               if (local_180 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_180 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_180 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

               lVar27 = local_190;
               if (local_190 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_190 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_190 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

               lVar27 = local_188;
               if (local_188 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_188 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_188 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

               lVar27 = local_178;
               if (local_178 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_178 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_178 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( local_170 != 0 )) {
                  StringName::unref();
               }

               sStack_d0 = 0;
               local_d8 = local_108._0_4_;
               if (local_100 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&sStack_d0, (CowData*)&local_100);
               }

               StringName::StringName((StringName*)&local_c8, (StringName*)&local_f8);
               local_b8 = 0;
               iStack_c0 = local_f0;
               if (local_e8 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_e8);
               }

               local_80 = 0;
               local_b0 = CONCAT44(local_b0._4_4_, local_e0);
               local_88 = local_d8;
               if (sStack_d0 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&sStack_d0);
               }

               StringName::StringName((StringName*)&local_78, (StringName*)&local_c8);
               local_68 = 0;
               local_70 = iStack_c0;
               if (local_b8 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_b8);
               }

               local_60 = (undefined4)local_b0;
               Variant::Variant((Variant*)local_58, (Variant*)( plVar26 + 3 ));
               if (*(long*)( this + 0x10 ) == 0) {
                  pauVar16 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])( this + 0x10 ) = pauVar16;
                  *(undefined4*)pauVar16[1] = 0;
                  *pauVar16 = (undefined1[16])0x0;
               }

               puVar22 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
               *(undefined8*)( puVar22 + 8 ) = 0;
               *(undefined1(*) [16])( puVar22 + 2 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( puVar22 + 0xe ) = (undefined1[16])0x0;
               *puVar22 = 0;
               puVar22[6] = 0;
               puVar22[10] = 6;
               puVar22[0xc] = 0;
               *(undefined8*)( puVar22 + 0x16 ) = 0;
               *(undefined1(*) [16])( puVar22 + 0x12 ) = (undefined1[16])0x0;
               *puVar22 = local_88;
               if (local_80 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( puVar22 + 2 ), (CowData*)&local_80);
               }

               StringName::operator =((StringName*)( puVar22 + 4 ), (StringName*)&local_78);
               puVar22[6] = local_70;
               if (*(long*)( puVar22 + 8 ) != local_68) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( puVar22 + 8 ), (CowData*)&local_68);
               }

               puVar22[10] = local_60;
               Variant::operator =((Variant*)( puVar22 + 0xc ), (Variant*)local_58);
               uVar14 = *(undefined8*)( *(long*)( this + 0x10 ) + 8 );
               *(long*)( puVar22 + 0x16 ) = *(long*)( this + 0x10 );
               plVar1 = *(long**)( this + 0x10 );
               *(undefined8*)( puVar22 + 0x12 ) = 0;
               *(undefined8*)( puVar22 + 0x14 ) = uVar14;
               if (plVar1[1] != 0) {
                  *(undefined4**)( plVar1[1] + 0x48 ) = puVar22;
               }

               plVar1[1] = (long)puVar22;
               if (*plVar1 == 0) {
                  *plVar1 = (long)puVar22;
               }

               *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               lVar27 = local_68;
               if (local_68 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_68 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_68 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
                  StringName::unref();
               }

               lVar27 = local_80;
               if (local_80 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_80 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_80 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

               uVar2 = local_b8;
               if (local_b8 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_b8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_b8 = 0;
                     Memory::free_static((void*)( uVar2 + -0x10 ), false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
                  StringName::unref();
               }

               sVar11 = sStack_d0;
               if (sStack_d0 != 0) {
                  LOCK();
                  plVar1 = (long*)( sStack_d0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     sStack_d0 = 0;
                     Memory::free_static((void*)( sVar11 + -0x10 ), false);
                  }

               }

               lVar27 = local_e8;
               if (local_e8 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_e8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_e8 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( local_f8 != 0 )) {
                  StringName::unref();
               }

               lVar27 = local_100;
               if (local_100 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_100 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_100 = 0;
                     Memory::free_static((void*)( lVar27 + -0x10 ), false);
                  }

               }

            }

            lVar27 = local_198;
            if (local_198 != 0) {
               LOCK();
               plVar1 = (long*)( local_198 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_198 = 0;
                  Memory::free_static((void*)( lVar27 + -0x10 ), false);
               }

            }

            plVar26 = (long*)*plVar26;
         }
 while ( plVar26 != (long*)0x0 );
      }

   }

   if (( ( local_1a0 != (Object*)0x0 ) && ( cVar12 = RefCounted::unreference() ),pOVar23 = local_1a0,cVar12 != '\0' )) &&( cVar12 = cVar12 != '\0' )(**(code**)( *(long*)pOVar23 + 0x140 ))(pOVar23);
   Memory::free_static(pOVar23, false);
}
uVar14 = local_130._0_8_;if ((undefined8*)local_130._0_8_ != (undefined8*)0x0) {
   uVar10 = local_130._8_8_;
   if (( local_110._4_4_ != 0 ) && ( ( &hash_table_size_primes )[local_110 & 0xffffffff] != 0 )) {
      piVar3 = (int*)( local_130._8_8_ + ( ulong )(uint)(&hash_table_size_primes)[local_110 & 0xffffffff] * 4 );
      piVar25 = (int*)local_130._8_8_;
      puVar28 = (undefined8*)local_130._0_8_;
      do {
         if (*piVar25 != 0) {
            pvVar17 = (void*)*puVar28;
            *piVar25 = 0;
            pvVar19 = *(void**)( (long)pvVar17 + 0x20 );
            if (pvVar19 != (void*)0x0) {
               if (*(int*)( (long)pvVar17 + 0x44 ) != 0) {
                  uVar4 = ( &hash_table_size_primes )[*(uint*)( (long)pvVar17 + 0x40 )];
                  if (uVar4 == 0) {
                     *(undefined4*)( (long)pvVar17 + 0x44 ) = 0;
                     *(undefined1(*) [16])( (long)pvVar17 + 0x30 ) = (undefined1[16])0x0;
                  }
 else {
                     lVar27 = 0;
                     do {
                        piVar24 = (int*)( *(long*)( (long)pvVar17 + 0x28 ) + lVar27 );
                        if (*piVar24 != 0) {
                           *piVar24 = 0;
                           pvVar19 = *(void**)( (long)pvVar19 + lVar27 * 2 );
                           if (Variant::needs_deinit[*(int*)( (long)pvVar19 + 0x18 )] != '\0') {
                              Variant::_clear_internal();
                           }

                           if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar19 + 0x10 ) != 0 )) {
                              StringName::unref();
                           }

                           Memory::free_static(pvVar19, false);
                           pvVar19 = *(void**)( (long)pvVar17 + 0x20 );
                           *(undefined8*)( (long)pvVar19 + lVar27 * 2 ) = 0;
                        }

                        lVar27 = lVar27 + 4;
                     }
 while ( (ulong)uVar4 * 4 - lVar27 != 0 );
                     *(undefined4*)( (long)pvVar17 + 0x44 ) = 0;
                     *(undefined1(*) [16])( (long)pvVar17 + 0x30 ) = (undefined1[16])0x0;
                     if (pvVar19 == (void*)0x0) goto LAB_0010e81e;
                  }

               }

               Memory::free_static(pvVar19, false);
               Memory::free_static(*(void**)( (long)pvVar17 + 0x28 ), false);
            }

            LAB_0010e81e:Memory::free_static(pvVar17, false);
            *puVar28 = 0;
         }

         piVar25 = piVar25 + 1;
         puVar28 = puVar28 + 1;
      }
 while ( piVar3 != piVar25 );
   }

   Memory::free_static((void*)uVar14, false);
   Memory::free_static((void*)uVar10, false);
}
uVar14 = local_160._0_8_;if ((undefined8*)local_160._0_8_ != (undefined8*)0x0) {
   uVar10 = local_160._8_8_;
   if (( local_140._4_4_ != 0 ) && ( ( &hash_table_size_primes )[local_140 & 0xffffffff] != 0 )) {
      piVar3 = (int*)( local_160._8_8_ + ( ulong )(uint)(&hash_table_size_primes)[local_140 & 0xffffffff] * 4 );
      piVar25 = (int*)local_160._8_8_;
      puVar28 = (undefined8*)local_160._0_8_;
      do {
         if (*piVar25 != 0) {
            pvVar17 = (void*)*puVar28;
            *piVar25 = 0;
            pvVar19 = *(void**)( (long)pvVar17 + 0x18 );
            if (pvVar19 != (void*)0x0) {
               if (( *(int*)( (long)pvVar17 + 0x3c ) != 0 ) && ( ( ( &hash_table_size_primes )[*(uint*)( (long)pvVar17 + 0x38 )] == 0 || ( memset(*(void**)( (long)pvVar17 + 0x30 ), 0, ( ulong )(uint)(&hash_table_size_primes)[*(uint*)( (long)pvVar17 + 0x38 )] * 4),*(int*)( (long)pvVar17 + 0x3c ) != 0 ) ) )) {
                  lVar27 = 0;
                  do {
                     if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar19 + lVar27 * 8 ) != 0 )) {
                        StringName::unref();
                        pvVar19 = *(void**)( (long)pvVar17 + 0x18 );
                     }

                     lVar27 = lVar27 + 1;
                  }
 while ( (uint)lVar27 < *(uint*)( (long)pvVar17 + 0x3c ) );
                  *(undefined4*)( (long)pvVar17 + 0x3c ) = 0;
                  if (pvVar19 == (void*)0x0) goto LAB_0010e957;
               }

               Memory::free_static(pvVar19, false);
               Memory::free_static(*(void**)( (long)pvVar17 + 0x28 ), false);
               Memory::free_static(*(void**)( (long)pvVar17 + 0x20 ), false);
               Memory::free_static(*(void**)( (long)pvVar17 + 0x30 ), false);
            }

            LAB_0010e957:Memory::free_static(pvVar17, false);
            *puVar28 = 0;
         }

         piVar25 = piVar25 + 1;
         puVar28 = puVar28 + 1;
      }
 while ( piVar25 != piVar3 );
   }

   Memory::free_static((void*)uVar14, false);
   Memory::free_static((void*)uVar10, false);
}
if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();code_r0x0010d611:if (pSVar18 != (StringName*)0x0) {
   if (uVar5 != 0) {
      memset(pvVar17, 0, uVar30 << 2);
   }

   pSVar31 = pSVar18;
   do {
      if (( StringName::configured != '\0' ) && ( *(long*)pSVar31 != 0 )) {
         StringName::unref();
      }

      pSVar31 = pSVar31 + 8;
   }
 while ( pSVar31 != pSVar18 + (ulong)uVar4 * 8 );
   Memory::free_static(pSVar18, false);
   Memory::free_static(pvVar19, false);
   Memory::free_static(pvVar20, false);
   Memory::free_static(pvVar17, false);
}
LAB_0010d6cd:plVar26 = (long*)*plVar26;if (plVar26 == (long*)0x0) goto LAB_0010d6d9;goto LAB_0010cce8;}/* SceneDebuggerObject::SceneDebuggerObject(ObjectID) */void SceneDebuggerObject::SceneDebuggerObject(SceneDebuggerObject *this, ulong param_2) {
   List<Pair<PropertyInfo,Variant>,DefaultAllocator> *this_00;
   List *pLVar1;
   ScriptInstance *pSVar2;
   ulong uVar3;
   Script *pSVar4;
   char cVar5;
   int iVar6;
   long lVar7;
   Script *pSVar8;
   uint uVar9;
   ulong *puVar10;
   undefined4 *puVar11;
   long in_FS_OFFSET;
   bool bVar12;
   undefined8 local_120;
   undefined8 local_118;
   undefined8 *local_110;
   undefined4 local_108;
   undefined4 uStack_104;
   long local_100;
   StringName local_f8[8];
   undefined4 local_f0;
   long local_e8;
   undefined4 local_e0;
   Script *local_d8;
   long local_d0;
   long local_c8;
   undefined4 local_c0;
   long local_b8;
   undefined4 local_b0;
   int local_a8[8];
   undefined4 local_88[2];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   undefined8 local_68;
   undefined4 local_60;
   int local_58[6];
   long local_40;
   uVar9 = (uint)param_2 & 0xffffff;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   bVar12 = (uint)ObjectDB::slot_max <= uVar9;
   *(undefined8*)this = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (bVar12) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         return;
      }

      goto LAB_0010f928;
   }

   while (true) {
      uVar3 = (ulong)local_d8 >> 8;
      local_d8 = (Script*)( uVar3 << 8 );
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
         ObjectDB::spin_lock._0_1_ = '\x01';
      }

      UNLOCK();
      if (bVar12) break;
      local_d8 = (Script*)( uVar3 << 8 );
      do {} while ( (char)ObjectDB::spin_lock != '\0' );
   }
;
   puVar10 = (ulong*)( (ulong)uVar9 * 0x10 + ObjectDB::object_slots );
   if (( param_2 >> 0x18 & 0x7fffffffff ) == ( *puVar10 & 0x7fffffffff )) {
      pLVar1 = (List*)puVar10[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if (pLVar1 != (List*)0x0) {
         lVar7 = *(long*)pLVar1;
         *(ulong*)this = param_2;
         ( **(code**)( lVar7 + 0x48 ) )((CowData<char32_t>*)&local_d8);
         if (*(Script**)( this + 8 ) != local_d8) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
            pSVar8 = local_d8;
            local_d8 = (Script*)0x0;
            *(Script**)( this + 8 ) = pSVar8;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
         pSVar2 = *(ScriptInstance**)( pLVar1 + 0x98 );
         if (pSVar2 != (ScriptInstance*)0x0) {
            if (*(code**)( *(long*)pSVar2 + 0x90 ) == PlaceHolderScriptInstance::get_script) {
               if (( *(Script**)( pSVar2 + 0x80 ) == (Script*)0x0 ) || ( local_d8 = *(Script**)( pSVar2 + 0x80 ) ),cVar5 = RefCounted::reference(),cVar5 == '\0') goto LAB_0010eed5;
            }
 else {
               ( **(code**)( *(long*)pSVar2 + 0x90 ) )((CowData<char32_t>*)&local_d8);
            }

            if (local_d8 != (Script*)0x0) {
               cVar5 = RefCounted::unreference();
               pSVar8 = local_d8;
               if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler((Object*)local_d8) ),cVar5 != '\0') {
                  ( **(code**)( *(long*)pSVar8 + 0x140 ) )(pSVar8);
                  Memory::free_static(pSVar8, false);
               }

               if (*(code**)( *(long*)pSVar2 + 0x90 ) == PlaceHolderScriptInstance::get_script) {
                  if (( *(Script**)( pSVar2 + 0x80 ) != (Script*)0x0 ) && ( local_d8 = *(Script**)( pSVar2 + 0x80 ) ),cVar5 = RefCounted::reference(),cVar5 != '\0') goto LAB_0010f696;
                  pSVar8 = (Script*)0x0;
               }
 else {
                  ( **(code**)( *(long*)pSVar2 + 0x90 ) )((CowData<char32_t>*)&local_d8);
                  LAB_0010f696:pSVar8 = local_d8;
                  if (( local_d8 != (Script*)0x0 ) && ( ( cVar5 = RefCounted::unreference() ),pSVar4 = local_d8,cVar5 != '\0' && ( cVar5 = predelete_handler((Object*)local_d8) ),cVar5 != '\0' )) {
                     ( **(code**)( *(long*)pSVar4 + 0x140 ) )(pSVar4);
                     Memory::free_static(pSVar4, false);
                  }

               }

               _parse_script_properties(this, pSVar8, pSVar2);
            }

         }

         LAB_0010eed5:lVar7 = __dynamic_cast(pLVar1, &Object::typeinfo, &Node::typeinfo, 0);
         if (lVar7 == 0) {
            pSVar8 = (Script*)__dynamic_cast(pLVar1, &Object::typeinfo, &Script::typeinfo, 0);
            if (pSVar8 != (Script*)0x0) {
               _parse_script_properties(this, pSVar8, (ScriptInstance*)0x0);
            }

         }
 else {
            local_110 = (undefined8*)0x0;
            local_d8 = (Script*)&_LC26;
            local_118 = 0;
            local_d0 = 0;
            String::parse_latin1((StrRange*)&local_118);
            local_d8 = (Script*)0x1145d5;
            local_120 = 0;
            local_d0 = 0x1a;
            String::parse_latin1((StrRange*)&local_120);
            PropertyInfo::PropertyInfo((PropertyInfo*)&local_108, 2, (StrRange*)&local_120, 0, (StrRange*)&local_118, 0x10000006, (String*)&local_110);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
            if (( StringName::configured != '\0' ) && ( local_110 != (undefined8*)0x0 )) {
               StringName::unref();
            }

            this_00 = (List<Pair<PropertyInfo,Variant>,DefaultAllocator>*)( this + 0x10 );
            iVar6 = Node::get_multiplayer_authority();
            Variant::Variant((Variant*)local_a8, iVar6);
            local_d0 = 0;
            local_d8 = (Script*)CONCAT44(local_d8._4_4_, local_108);
            if (local_100 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_d0, (CowData*)&local_100);
            }

            StringName::StringName((StringName*)&local_c8, local_f8);
            local_b8 = 0;
            local_c0 = local_f0;
            if (local_e8 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_e8);
            }

            local_80 = 0;
            local_b0 = local_e0;
            local_88[0] = local_d8._0_4_;
            if (local_d0 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&local_d0);
            }

            StringName::StringName((StringName*)&local_78, (StringName*)&local_c8);
            local_68 = 0;
            local_70 = local_c0;
            if (local_b8 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_b8);
            }

            local_60 = local_b0;
            Variant::Variant((Variant*)local_58, (Variant*)local_a8);
            List<Pair<PropertyInfo,Variant>,DefaultAllocator>::push_back(this_00, (Pair*)local_88);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            PropertyInfo::~PropertyInfo((PropertyInfo*)&local_d8);
            if (Variant::needs_deinit[local_a8[0]] != '\0') {
               Variant::_clear_internal();
            }

            PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
            local_d8 = (Script*)0x0;
            local_110 = (undefined8*)0x0;
            if (( *(byte*)( lVar7 + 0x2fa ) & 0x40 ) == 0) {
               String::parse_latin1((String*)&local_110, "");
               local_118 = 0;
               String::parse_latin1((String*)&local_118, "Node/path");
               PropertyInfo::PropertyInfo((PropertyInfo*)&local_108, 4, (StrRange*)&local_118, 0, (String*)&local_110, 6, (CowData<char32_t>*)&local_d8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
               if (( StringName::configured != '\0' ) && ( local_d8 != (Script*)0x0 )) {
                  StringName::unref();
               }

               Variant::Variant((Variant*)local_a8, "[Orphan]");
               PropertyInfo::PropertyInfo((PropertyInfo*)&local_d8, (PropertyInfo*)&local_108);
               PropertyInfo::PropertyInfo((PropertyInfo*)local_88, (PropertyInfo*)&local_d8);
               Variant::Variant((Variant*)local_58, (Variant*)local_a8);
               List<Pair<PropertyInfo,Variant>,DefaultAllocator>::push_back(this_00, (Pair*)local_88);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
               PropertyInfo::~PropertyInfo((PropertyInfo*)&local_d8);
               if (Variant::needs_deinit[local_a8[0]] != '\0') {
                  Variant::_clear_internal();
               }

               PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
            }
 else {
               String::parse_latin1((String*)&local_110, "");
               local_118 = 0;
               String::parse_latin1((String*)&local_118, "Node/path");
               PropertyInfo::PropertyInfo((PropertyInfo*)&local_108, 0x16, (StrRange*)&local_118, 0, (String*)&local_110, 6, (CowData<char32_t>*)&local_d8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
               if (( StringName::configured != '\0' ) && ( local_d8 != (Script*)0x0 )) {
                  StringName::unref();
               }

               Node::get_path();
               Variant::Variant((Variant*)local_a8, (NodePath*)&local_110);
               PropertyInfo::PropertyInfo((PropertyInfo*)&local_d8, (PropertyInfo*)&local_108);
               PropertyInfo::PropertyInfo((PropertyInfo*)local_88, (PropertyInfo*)&local_d8);
               Variant::Variant((Variant*)local_58, (Variant*)local_a8);
               List<Pair<PropertyInfo,Variant>,DefaultAllocator>::push_back(this_00, (Pair*)local_88);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
               PropertyInfo::~PropertyInfo((PropertyInfo*)&local_d8);
               if (Variant::needs_deinit[local_a8[0]] != '\0') {
                  Variant::_clear_internal();
               }

               NodePath::~NodePath((NodePath*)&local_110);
               PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
            }

         }

         local_110 = (undefined8*)0x0;
         Object::get_property_list(pLVar1, SUB81((List<PropertyInfo,DefaultAllocator>*)&local_110, 0));
         if (local_110 != (undefined8*)0x0) {
            puVar11 = (undefined4*)*local_110;
            joined_r0x0010f374:if (puVar11 != (undefined4*)0x0) {
               do {
                  if (( *(byte*)( puVar11 + 10 ) & 0x84 ) != 0) {
                     StringName::StringName((StringName*)&local_108, (String*)( puVar11 + 2 ), false);
                     Object::get((StringName*)local_a8, (bool*)pLVar1);
                     local_d0 = 0;
                     local_d8 = (Script*)CONCAT44(local_d8._4_4_, *puVar11);
                     if (*(long*)( puVar11 + 2 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_d0, (CowData*)( puVar11 + 2 ));
                     }

                     StringName::StringName((StringName*)&local_c8, (StringName*)( puVar11 + 4 ));
                     local_c0 = puVar11[6];
                     local_b8 = 0;
                     if (*(long*)( puVar11 + 8 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)( puVar11 + 8 ));
                     }

                     local_b0 = puVar11[10];
                     local_80 = 0;
                     local_88[0] = local_d8._0_4_;
                     if (local_d0 != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&local_d0);
                     }

                     StringName::StringName((StringName*)&local_78, (StringName*)&local_c8);
                     local_68 = 0;
                     local_70 = local_c0;
                     if (local_b8 != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_b8);
                     }

                     local_60 = local_b0;
                     Variant::Variant((Variant*)local_58, (Variant*)local_a8);
                     List<Pair<PropertyInfo,Variant>,DefaultAllocator>::push_back((List<Pair<PropertyInfo,Variant>,DefaultAllocator>*)( this + 0x10 ), (Pair*)local_88);
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                     if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                     if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
                     if (Variant::needs_deinit[local_a8[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_104, local_108) != 0 )) goto code_r0x0010f5ea;
                  }

                  puVar11 = *(undefined4**)( puVar11 + 0xc );
                  if (puVar11 == (undefined4*)0x0) break;
               }
 while ( true );
            }

         }

         List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)&local_110);
      }

   }
 else {
      ObjectDB::spin_lock._0_1_ = '\0';
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010f928:/* WARNING: Subroutine does not return */__stack_chk_fail();
   code_r0x0010f5ea:StringName::unref();
   puVar11 = *(undefined4**)( puVar11 + 0xc );
   goto joined_r0x0010f374;
}
/* SceneDebugger::_send_object_id(ObjectID, int) */void SceneDebugger::_send_object_id(ulong param_1) {
   ulong uVar1;
   code *pcVar2;
   long *plVar3;
   Node *pNVar4;
   uint uVar5;
   ulong *puVar6;
   long in_FS_OFFSET;
   bool bVar7;
   Array aAStack_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_48;
   CowData<char32_t> local_40[8];
   List<Pair<PropertyInfo,Variant>,DefaultAllocator> local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   SceneDebuggerObject::SceneDebuggerObject((SceneDebuggerObject*)&local_48);
   if (local_48 == 0) goto LAB_0010fa82;
   uVar5 = (uint)param_1 & 0xffffff;
   if (uVar5 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar1 = (ulong)local_58 >> 8;
         local_58 = (char*)( uVar1 << 8 );
         LOCK();
         bVar7 = (char)ObjectDB::spin_lock == '\0';
         if (bVar7) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar7) break;
         local_58 = (char*)( uVar1 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar6 = (ulong*)( (ulong)uVar5 * 0x10 + ObjectDB::object_slots );
      if (( param_1 >> 0x18 & 0x7fffffffff ) == ( *puVar6 & 0x7fffffffff )) {
         uVar1 = puVar6[1];
         ObjectDB::spin_lock._0_1_ = '\0';
         if (uVar1 == 0) goto LAB_0010faf7;
         pNVar4 = (Node*)__dynamic_cast(uVar1, &Object::typeinfo, &Node::typeinfo, 0);
      }
 else {
         pNVar4 = (Node*)0x0;
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010faf7:pNVar4 = (Node*)0x0;
   }

   if (*(Node**)( RuntimeNodeSelect::singleton + 0x178 ) != pNVar4) {
      RuntimeNodeSelect::_select_node(RuntimeNodeSelect::singleton, pNVar4);
   }

   Array::Array(aAStack_68);
   SceneDebuggerObject::serialize((SceneDebuggerObject*)&local_48, aAStack_68, 0x100000);
   plVar3 = EngineDebugger::singleton;
   local_60 = 0;
   pcVar2 = *(code**)( *EngineDebugger::singleton + 8 );
   local_50 = 0x14;
   local_58 = "scene:inspect_object";
   String::parse_latin1((StrRange*)&local_60);
   ( *pcVar2 )(plVar3, (StrRange*)&local_60, aAStack_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   Array::~Array(aAStack_68);
   LAB_0010fa82:List<Pair<PropertyInfo,Variant>,DefaultAllocator>::~List(local_38);
   CowData<char32_t>::_unref(local_40);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Vector<Node*>::push_back(Node*) [clone .isra.0] */void Vector<Node*>::push_back(Vector<Node*> *this, Node *param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<Node*>::resize<false>((CowData<Node*>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<Node*>::_copy_on_write((CowData<Node*>*)( this + 8 ));
            *(Node**)( *(long*)( this + 8 ) + lVar3 * 8 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* LiveEditor::_remove_node_func(NodePath const&) */void LiveEditor::_remove_node_func(NodePath *param_1) {
   long *plVar1;
   uint uVar2;
   int iVar3;
   long lVar4;
   Object *pOVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   ulong uVar14;
   char cVar15;
   uint uVar16;
   Node *pNVar17;
   Node *pNVar18;
   uint uVar19;
   uint uVar20;
   long lVar21;
   long lVar22;
   NodePath *pNVar23;
   uint uVar24;
   long in_FS_OFFSET;
   Vector<Node*> local_58[8];
   long local_50;
   long local_40;
   lVar4 = SceneTree::singleton;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (SceneTree::singleton != 0) {
      pNVar17 = (Node*)0x0;
      cVar15 = Node::has_node(*(NodePath**)( SceneTree::singleton + 0x368 ));
      if (cVar15 != '\0') {
         pNVar17 = (Node*)Node::get_node(*(NodePath**)( lVar4 + 0x368 ));
      }

      if (( *(long*)( param_1 + 0x78 ) != 0 ) && ( *(int*)( param_1 + 0x9c ) != 0 )) {
         uVar2 = ( &hash_table_size_primes )[*(uint*)( param_1 + 0x98 )];
         lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x98 ) * 8 );
         uVar16 = String::hash();
         uVar14 = CONCAT44(0, uVar2);
         uVar19 = 1;
         if (uVar16 != 0) {
            uVar19 = uVar16;
         }

         lVar22 = *(long*)( param_1 + 0x80 );
         auVar6._8_8_ = 0;
         auVar6._0_8_ = (ulong)uVar19 * lVar4;
         auVar10._8_8_ = 0;
         auVar10._0_8_ = uVar14;
         lVar21 = SUB168(auVar6 * auVar10, 8);
         uVar16 = *(uint*)( lVar22 + lVar21 * 4 );
         uVar20 = SUB164(auVar6 * auVar10, 8);
         if (uVar16 != 0) {
            uVar24 = 0;
            LAB_0010fd88:if (uVar19 != uVar16) goto LAB_0010fd40;
            cVar15 = String::operator ==((String*)( *(long*)( *(long*)( param_1 + 0x78 ) + lVar21 * 8 ) + 0x10 ), (String*)( param_1 + 0x68 ));
            if (cVar15 == '\0') {
               lVar22 = *(long*)( param_1 + 0x80 );
               goto LAB_0010fd40;
            }

            lVar4 = *(long*)( *(long*)( param_1 + 0x78 ) + (ulong)uVar20 * 8 );
            if (lVar4 != 0) {
               local_50 = 0;
               iVar3 = *(int*)( lVar4 + 0x3c );
               if (( iVar3 != 0 ) && ( lVar4 = lVar4 != 0 )) {
                  lVar22 = 0;
                  do {
                     pNVar23 = *(NodePath**)( lVar4 + lVar22 * 8 );
                     if (pNVar17 != (Node*)0x0) {
                        while (true) {
                           cVar15 = Node::is_ancestor_of(pNVar17);
                           if (cVar15 != '\0') break;
                           lVar22 = lVar22 + 1;
                           if (iVar3 <= (int)lVar22) goto LAB_0010fe73;
                           pNVar23 = *(NodePath**)( lVar4 + lVar22 * 8 );
                        }
;
                     }

                     cVar15 = Node::has_node(pNVar23);
                     if (cVar15 != '\0') {
                        pNVar18 = (Node*)Node::get_node(pNVar23);
                        Vector<Node*>::push_back(local_58, pNVar18);
                     }

                     lVar22 = lVar22 + 1;
                  }
 while ( (int)lVar22 < iVar3 );
                  LAB_0010fe73:lVar4 = local_50;
                  if (local_50 != 0) {
                     lVar22 = 0;
                     if (0 < *(long*)( local_50 + -8 )) {
                        do {
                           pOVar5 = *(Object**)( lVar4 + lVar22 * 8 );
                           cVar15 = predelete_handler(pOVar5);
                           if (cVar15 != '\0') {
                              ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                              Memory::free_static(pOVar5, false);
                           }

                           lVar22 = lVar22 + 1;
                        }
 while ( lVar22 < *(long*)( lVar4 + -8 ) );
                     }

                     LOCK();
                     plVar1 = (long*)( lVar4 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                           Memory::free_static((void*)( local_50 + -0x10 ), false);
                           return;
                        }

                        goto LAB_0010ff16;
                     }

                  }

               }

            }

         }

      }

   }

   LAB_0010fc90:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010ff16:/* WARNING: Subroutine does not return */__stack_chk_fail();
   LAB_0010fd40:uVar24 = uVar24 + 1;
   auVar7._8_8_ = 0;
   auVar7._0_8_ = ( ulong )(uVar20 + 1) * lVar4;
   auVar11._8_8_ = 0;
   auVar11._0_8_ = uVar14;
   lVar21 = SUB168(auVar7 * auVar11, 8);
   uVar16 = *(uint*)( lVar22 + lVar21 * 4 );
   uVar20 = SUB164(auVar7 * auVar11, 8);
   if (( uVar16 == 0 ) || ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar16 * lVar4,auVar12._8_8_ = 0,auVar12._0_8_ = uVar14,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar2 + uVar20 ) - SUB164(auVar8 * auVar12, 8)) * lVar4,auVar13._8_8_ = 0,auVar13._0_8_ = uVar14,SUB164(auVar9 * auVar13, 8) < uVar24) goto LAB_0010fc90;
   goto LAB_0010fd88;
}
/* LiveEditor::_remove_and_keep_node_func(NodePath const&, ObjectID) */void LiveEditor::_remove_and_keep_node_func(LiveEditor *this, undefined8 param_2, undefined8 param_3) {
   long *plVar1;
   uint uVar2;
   int iVar3;
   long lVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   ulong uVar13;
   char cVar14;
   uint uVar15;
   undefined8 uVar16;
   Node *pNVar17;
   HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>> *this_00;
   undefined8 *puVar18;
   uint uVar19;
   uint uVar20;
   long lVar21;
   long lVar22;
   NodePath *pNVar23;
   uint uVar24;
   long in_FS_OFFSET;
   undefined8 local_70[2];
   NodePath *local_60;
   Vector<Node*> local_58[8];
   long local_50;
   long local_40;
   lVar4 = SceneTree::singleton;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70[0] = param_3;
   if (SceneTree::singleton != 0) {
      pNVar17 = (Node*)0x0;
      cVar14 = Node::has_node(*(NodePath**)( SceneTree::singleton + 0x368 ));
      if (cVar14 != '\0') {
         pNVar17 = (Node*)Node::get_node(*(NodePath**)( lVar4 + 0x368 ));
      }

      if (( *(long*)( this + 0x78 ) != 0 ) && ( *(int*)( this + 0x9c ) != 0 )) {
         uVar2 = ( &hash_table_size_primes )[*(uint*)( this + 0x98 )];
         lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x98 ) * 8 );
         uVar15 = String::hash();
         uVar13 = CONCAT44(0, uVar2);
         uVar19 = 1;
         if (uVar15 != 0) {
            uVar19 = uVar15;
         }

         lVar22 = *(long*)( this + 0x80 );
         auVar5._8_8_ = 0;
         auVar5._0_8_ = (ulong)uVar19 * lVar4;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = uVar13;
         lVar21 = SUB168(auVar5 * auVar9, 8);
         uVar15 = *(uint*)( lVar22 + lVar21 * 4 );
         uVar20 = SUB164(auVar5 * auVar9, 8);
         if (uVar15 != 0) {
            uVar24 = 0;
            do {
               if (uVar19 == uVar15) {
                  cVar14 = String::operator ==((String*)( *(long*)( *(long*)( this + 0x78 ) + lVar21 * 8 ) + 0x10 ), (String*)( this + 0x68 ));
                  if (cVar14 != '\0') {
                     lVar4 = *(long*)( *(long*)( this + 0x78 ) + (ulong)uVar20 * 8 );
                     if (lVar4 != 0) {
                        local_50 = 0;
                        iVar3 = *(int*)( lVar4 + 0x3c );
                        if (( iVar3 != 0 ) && ( lVar4 = lVar4 != 0 )) {
                           lVar22 = 0;
                           do {
                              pNVar23 = *(NodePath**)( lVar4 + lVar22 * 8 );
                              if (pNVar17 != (Node*)0x0) {
                                 while (cVar14 = Node::is_ancestor_of(pNVar17),cVar14 == '\0') {
                                    lVar22 = lVar22 + 1;
                                    if (iVar3 <= (int)lVar22) goto LAB_00110171;
                                    pNVar23 = *(NodePath**)( lVar4 + lVar22 * 8 );
                                 }
;
                              }

                              cVar14 = Node::has_node(pNVar23);
                              if (cVar14 != '\0') {
                                 Vector<Node*>::push_back(local_58, (Node*)pNVar23);
                              }

                              lVar22 = lVar22 + 1;
                           }
 while ( (int)lVar22 < iVar3 );
                           LAB_00110171:lVar4 = local_50;
                           if (local_50 != 0) {
                              if (0 < *(long*)( local_50 + -8 )) {
                                 lVar22 = 0;
                                 do {
                                    local_60 = *(NodePath**)( lVar4 + lVar22 * 8 );
                                    lVar22 = lVar22 + 1;
                                    uVar16 = Node::get_node(local_60);
                                    pNVar17 = (Node*)Node::get_parent();
                                    Node::remove_child(pNVar17);
                                    this_00 = (HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>*)HashMap<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator < HashMapElement < ObjectID,Node*>>>> >> ::operator [](( HashMap<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator < HashMapElement < ObjectID,Node*>>>> >> * )(this + 0xa0), (Node**)&local_60);
                                    puVar18 = (undefined8*)HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>::operator [](this_00, (ObjectID*)local_70);
                                    *puVar18 = uVar16;
                                 }
 while ( lVar22 < *(long*)( lVar4 + -8 ) );
                              }

                              LOCK();
                              plVar1 = (long*)( lVar4 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 Memory::free_static((void*)( local_50 + -0x10 ), false);
                              }

                           }

                        }

                     }

                     break;
                  }

                  lVar22 = *(long*)( this + 0x80 );
               }

               uVar24 = uVar24 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(uVar20 + 1) * lVar4;
               auVar10._8_8_ = 0;
               auVar10._0_8_ = uVar13;
               lVar21 = SUB168(auVar6 * auVar10, 8);
               uVar15 = *(uint*)( lVar22 + lVar21 * 4 );
               uVar20 = SUB164(auVar6 * auVar10, 8);
               if (( uVar15 == 0 ) || ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar15 * lVar4,auVar11._8_8_ = 0,auVar11._0_8_ = uVar13,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar2 + uVar20 ) - SUB164(auVar7 * auVar11, 8)) * lVar4,auVar12._8_8_ = 0,auVar12._0_8_ = uVar13,SUB164(auVar8 * auVar12, 8) < uVar24) break;
            }
 while ( true );
         }

      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* SceneDebugger::parse_message(void*, String const&, Array const&, bool&) */undefined8 SceneDebugger::parse_message(void *param_1, String *param_2, Array *param_3, bool *param_4) {
   uint uVar1;
   long *plVar2;
   code *pcVar3;
   void *pvVar4;
   Variant **ppVVar5;
   RuntimeNodeSelect *this;
   LiveEditor *this_00;
   uint uVar6;
   char cVar7;
   bool bVar8;
   bool bVar9;
   RuntimeNodeSelect RVar10;
   int iVar11;
   int iVar12;
   CallableCustom *this_01;
   Variant *pVVar13;
   undefined8 uVar14;
   undefined8 uVar15;
   int *piVar16;
   Variant *pVVar17;
   Variant **ppVVar18;
   long lVar19;
   long in_FS_OFFSET;
   float fVar20;
   float fVar21;
   float fVar22;
   Object *local_b0;
   long local_a8;
   void *local_a0;
   long local_98;
   Variant **local_90;
   Variant *local_88;
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   lVar19 = SceneTree::singleton;
   this_00 = LiveEditor::singleton;
   this =
   RuntimeNodeSelect::singleton
   ;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( SceneTree::singleton == 0 ) || ( LiveEditor::singleton == (LiveEditor*)0x0 ) ) || ( RuntimeNodeSelect::singleton == (RuntimeNodeSelect*)0x0 )) {
      uVar14 = 3;
      goto LAB_00110515;
   }

   *param_4 = true;
   cVar7 = String::operator ==(param_2, "setup_scene");
   if (cVar7 != '\0') {
      plVar2 = *(long**)( SceneTree::singleton + 0x368 );
      pcVar3 = *(code**)( *plVar2 + 0x108 );
      this_01 = (CallableCustom*)operator_new(0x30, "");
      CallableCustom::CallableCustom(this_01);
      *(undefined**)( this_01 + 0x20 ) = &_LC26;
      *(undefined8*)( this_01 + 0x10 ) = 0;
      *(undefined***)this_01 = &PTR_hash_00121df0;
      *(code**)( this_01 + 0x28 ) = _handle_input;
      CallableCustomMethodPointerBase::_setup((uint*)this_01, (int)this_01 + 0x28);
      *(char**)( this_01 + 0x20 ) = "ceneDebugger::_handle_input";
      Callable::Callable((Callable*)&local_a8, this_01);
      DebuggerMarshalls::deserialize_key_shortcut((Array*)&local_b0);
      Variant::Variant((Variant*)local_78, local_b0);
      local_60 = 0;
      local_58 = (undefined1[16])0x0;
      local_88 = (Variant*)local_78;
      Callable::bindp((Variant**)&local_98, (int)(Callable*)&local_a8);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      ( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x30, (Callable*)&local_98, 0);
      Callable::~Callable((Callable*)&local_98);
      if (( ( local_b0 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)local_b0 + 0x140 ))(local_b0);
      Memory::free_static(local_b0, false);
   }

   Callable::~Callable((Callable*)&local_a8);
   goto LAB_00110418;
}
cVar7 = String::operator ==(param_2, "request_scene_tree");if (cVar7 != '\0') {
   LiveEditor::_send_tree();
   uVar14 = 0;
   goto LAB_00110515;
}
cVar7 = String::operator ==(param_2, "save_node");iVar12 = (int)param_3;if (cVar7 == '\0') {
   cVar7 = String::operator ==(param_2, "inspect_object");
   if (cVar7 == '\0') {
      cVar7 = String::operator ==(param_2, "suspend_changed");
      if (cVar7 == '\0') {
         cVar7 = String::operator ==(param_2, "next_frame");
         if (cVar7 != '\0') {
            _next_frame();
            uVar14 = 0;
            goto LAB_00110515;
         }

         cVar7 = String::operator ==(param_2, "override_cameras");
         if (cVar7 == '\0') {
            cVar7 = String::operator ==(param_2, "transform_camera_2d");
            if (cVar7 == '\0') {
               cVar7 = String::operator ==(param_2, "transform_camera_3d");
               if (cVar7 == '\0') {
                  cVar7 = String::operator ==(param_2, "set_object_property");
                  if (cVar7 == '\0') {
                     cVar7 = String::operator ==(param_2, "reload_cached_files");
                     if (cVar7 == '\0') {
                        cVar7 = String::begins_with((char*)param_2);
                        if (cVar7 == '\0') {
                           cVar7 = String::begins_with((char*)param_2);
                           if (cVar7 == '\0') {
                              *param_4 = false;
                              uVar14 = 0;
                              goto LAB_00110515;
                           }

                           cVar7 = String::operator ==(param_2, "runtime_node_select_setup");
                           if (cVar7 == '\0') {
                              cVar7 = String::operator ==(param_2, "runtime_node_select_set_type");
                              if (cVar7 == '\0') {
                                 cVar7 = String::operator ==(param_2, "runtime_node_select_set_mode");
                                 if (cVar7 == '\0') {
                                    cVar7 = String::operator ==(param_2, "runtime_node_select_set_visible");
                                    if (cVar7 == '\0') {
                                       cVar7 = String::operator ==(param_2, "runtime_node_select_reset_camera_2d");
                                       if (cVar7 != '\0') {
                                          RuntimeNodeSelect::_reset_camera_2d(this);
                                          uVar14 = 0;
                                          goto LAB_00110515;
                                       }

                                       cVar7 = String::operator ==(param_2, "runtime_node_select_reset_camera_3d");
                                       if (cVar7 != '\0') {
                                          RuntimeNodeSelect::_reset_camera_3d(this);
                                          uVar14 = 0;
                                          goto LAB_00110515;
                                       }

                                       LAB_0011130c:uVar14 = 0x2d;
                                       goto LAB_00110515;
                                    }

                                    cVar7 = Array::is_empty();
                                    if (cVar7 == '\0') {
                                       pVVar13 = (Variant*)Array::operator [](iVar12);
                                       RVar10 = (RuntimeNodeSelect)Variant::operator_cast_to_bool(pVVar13);
                                       this[0x188] = RVar10;
                                       if (this[0x171] != (RuntimeNodeSelect)0x0) {
                                          RuntimeNodeSelect::_update_selection(this);
                                          uVar14 = 0;
                                          goto LAB_00110515;
                                       }

                                       goto LAB_00110418;
                                    }

                                    _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0x129, "Condition \"p_args.is_empty()\" is true. Returning: ERR_INVALID_DATA", 0, 0);
                                 }
 else {
                                    cVar7 = Array::is_empty();
                                    if (cVar7 == '\0') {
                                       pVVar13 = (Variant*)Array::operator [](iVar12);
                                       iVar12 = Variant::operator_cast_to_int(pVVar13);
                                       *(int*)( this + 0x2d0 ) = iVar12;
                                       uVar14 = 0;
                                       goto LAB_00110515;
                                    }

                                    _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0x124, "Condition \"p_args.is_empty()\" is true. Returning: ERR_INVALID_DATA", 0, 0);
                                 }

                              }
 else {
                                 cVar7 = Array::is_empty();
                                 if (cVar7 == '\0') {
                                    pVVar13 = (Variant*)Array::operator [](iVar12);
                                    iVar12 = Variant::operator_cast_to_int(pVVar13);
                                    *(int*)( this + 0x2cc ) = iVar12;
                                    RuntimeNodeSelect::_update_input_state();
                                    uVar14 = 0;
                                    goto LAB_00110515;
                                 }

                                 _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0x11f, "Condition \"p_args.is_empty()\" is true. Returning: ERR_INVALID_DATA", 0, 0);
                              }

                           }
 else {
                              cVar7 = Array::is_empty();
                              if (( cVar7 == '\0' ) && ( piVar16 = (int*)Array::operator [](iVar12) * piVar16 == 0x1b )) {
                                 Array::operator [](iVar12);
                                 Variant::operator_cast_to_Dictionary((Variant*)&local_98);
                                 RuntimeNodeSelect::_setup((Dictionary*)this);
                                 Dictionary::~Dictionary((Dictionary*)&local_98);
                                 uVar14 = 0;
                                 goto LAB_00110515;
                              }

                              _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0x11b, "Condition \"p_args.is_empty() || p_args[0].get_type() != Variant::DICTIONARY\" is true. Returning: ERR_INVALID_DATA", 0, 0);
                           }

                        }
 else {
                           cVar7 = String::operator ==(param_2, "live_set_root");
                           if (cVar7 == '\0') {
                              cVar7 = String::operator ==(param_2, "live_node_path");
                              if (cVar7 == '\0') {
                                 cVar7 = String::operator ==(param_2, "live_res_path");
                                 if (cVar7 == '\0') {
                                    cVar7 = String::operator ==(param_2, "live_node_prop_res");
                                    if (cVar7 == '\0') {
                                       cVar7 = String::operator ==(param_2, "live_node_prop");
                                       if (cVar7 == '\0') {
                                          cVar7 = String::operator ==(param_2, "live_res_prop_res");
                                          if (cVar7 == '\0') {
                                             cVar7 = String::operator ==(param_2, "live_res_prop");
                                             if (cVar7 == '\0') {
                                                cVar7 = String::operator ==(param_2, "live_node_call");
                                                if (cVar7 == '\0') {
                                                   cVar7 = String::operator ==(param_2, "live_res_call");
                                                   if (cVar7 == '\0') {
                                                      cVar7 = String::operator ==(param_2, "live_create_node");
                                                      if (cVar7 == '\0') {
                                                         cVar7 = String::operator ==(param_2, "live_instantiate_node");
                                                         if (cVar7 == '\0') {
                                                            cVar7 = String::operator ==(param_2, "live_remove_node");
                                                            if (cVar7 == '\0') {
                                                               cVar7 = String::operator ==(param_2, "live_remove_and_keep_node");
                                                               if (cVar7 == '\0') {
                                                                  cVar7 = String::operator ==(param_2, "live_restore_node");
                                                                  if (cVar7 == '\0') {
                                                                     cVar7 = String::operator ==(param_2, "live_duplicate_node");
                                                                     if (cVar7 == '\0') {
                                                                        cVar7 = String::operator ==(param_2, "live_reparent_node");
                                                                        if (cVar7 == '\0') goto LAB_0011130c;
                                                                        iVar11 = Array::size();
                                                                        if (3 < iVar11) {
                                                                           pVVar13 = (Variant*)Array::operator [](iVar12);
                                                                           Variant::operator_cast_to_int(pVVar13);
                                                                           Array::operator [](iVar12);
                                                                           Variant::operator_cast_to_String((Variant*)&local_98);
                                                                           Array::operator [](iVar12);
                                                                           Variant::operator_cast_to_NodePath((Variant*)&local_a8);
                                                                           Array::operator [](iVar12);
                                                                           Variant::operator_cast_to_NodePath((Variant*)&local_b0);
                                                                           LiveEditor::_reparent_node_func((NodePath*)this_00, (NodePath*)&local_b0, (String*)&local_a8, (int)(Variant*)&local_98);
                                                                           NodePath::~NodePath((NodePath*)&local_b0);
                                                                           goto LAB_00110a70;
                                                                        }

                                                                        _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0x112, "Condition \"p_args.size() < 4\" is true. Returning: ERR_INVALID_DATA", 0, 0);
                                                                     }
 else {
                                                                        iVar11 = Array::size();
                                                                        if (1 < iVar11) {
                                                                           Array::operator [](iVar12);
                                                                           Variant::operator_cast_to_String((Variant*)&local_98);
                                                                           Array::operator [](iVar12);
                                                                           Variant::operator_cast_to_NodePath((Variant*)&local_a8);
                                                                           LiveEditor::_duplicate_node_func((NodePath*)this_00, (String*)&local_a8);
                                                                           NodePath::~NodePath((NodePath*)&local_a8);
                                                                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                                                                           uVar14 = 0;
                                                                           goto LAB_00110515;
                                                                        }

                                                                        _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0x10e, "Condition \"p_args.size() < 2\" is true. Returning: ERR_INVALID_DATA", 0, 0);
                                                                     }

                                                                  }
 else {
                                                                     iVar11 = Array::size();
                                                                     if (2 < iVar11) {
                                                                        pVVar13 = (Variant*)Array::operator [](iVar12);
                                                                        iVar11 = Variant::operator_cast_to_int(pVVar13);
                                                                        Array::operator [](iVar12);
                                                                        Variant::operator_cast_to_NodePath((Variant*)&local_98);
                                                                        pVVar13 = (Variant*)Array::operator [](iVar12);
                                                                        uVar14 = Variant::operator_cast_to_ObjectID(pVVar13);
                                                                        LiveEditor::_restore_node_func(this_00, uVar14, (Variant*)&local_98, iVar11);
                                                                        NodePath::~NodePath((NodePath*)&local_98);
                                                                        uVar14 = 0;
                                                                        goto LAB_00110515;
                                                                     }

                                                                     _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0x10a, "Condition \"p_args.size() < 3\" is true. Returning: ERR_INVALID_DATA", 0, 0);
                                                                  }

                                                               }
 else {
                                                                  iVar11 = Array::size();
                                                                  if (1 < iVar11) {
                                                                     pVVar13 = (Variant*)Array::operator [](iVar12);
                                                                     uVar14 = Variant::operator_cast_to_ObjectID(pVVar13);
                                                                     Array::operator [](iVar12);
                                                                     Variant::operator_cast_to_NodePath((Variant*)&local_98);
                                                                     LiveEditor::_remove_and_keep_node_func(this_00, (Variant*)&local_98, uVar14);
                                                                     NodePath::~NodePath((NodePath*)&local_98);
                                                                     if (this[0x171] != (RuntimeNodeSelect)0x0) {
                                                                        uVar14 = 0;
                                                                        goto LAB_00110515;
                                                                     }

                                                                     goto LAB_00111741;
                                                                  }

                                                                  _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0x102, "Condition \"p_args.size() < 2\" is true. Returning: ERR_INVALID_DATA", 0, 0);
                                                               }

                                                            }
 else {
                                                               cVar7 = Array::is_empty();
                                                               if (cVar7 == '\0') {
                                                                  Array::operator [](iVar12);
                                                                  Variant::operator_cast_to_NodePath((Variant*)&local_98);
                                                                  LiveEditor::_remove_node_func((NodePath*)this_00);
                                                                  NodePath::~NodePath((NodePath*)&local_98);
                                                                  if (this[0x171] != (RuntimeNodeSelect)0x0) goto LAB_00110418;
                                                                  LAB_00111741:RuntimeNodeSelect::_clear_selection(this);
                                                                  uVar14 = 0;
                                                                  goto LAB_00110515;
                                                               }

                                                               _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0xfa, "Condition \"p_args.is_empty()\" is true. Returning: ERR_INVALID_DATA", 0, 0);
                                                            }

                                                         }
 else {
                                                            iVar11 = Array::size();
                                                            if (2 < iVar11) {
                                                               Array::operator [](iVar12);
                                                               Variant::operator_cast_to_String((Variant*)&local_98);
                                                               Array::operator [](iVar12);
                                                               Variant::operator_cast_to_String((Variant*)&local_a8);
                                                               Array::operator [](iVar12);
                                                               Variant::operator_cast_to_NodePath((Variant*)&local_b0);
                                                               LiveEditor::_instance_node_func((NodePath*)this_00, (String*)&local_b0, (String*)&local_a8);
                                                               goto LAB_0011156f;
                                                            }

                                                            _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0xf6, "Condition \"p_args.size() < 3\" is true. Returning: ERR_INVALID_DATA", 0, 0);
                                                         }

                                                      }
 else {
                                                         iVar11 = Array::size();
                                                         if (2 < iVar11) {
                                                            Array::operator [](iVar12);
                                                            Variant::operator_cast_to_String((Variant*)&local_98);
                                                            Array::operator [](iVar12);
                                                            Variant::operator_cast_to_String((Variant*)&local_a8);
                                                            Array::operator [](iVar12);
                                                            Variant::operator_cast_to_NodePath((Variant*)&local_b0);
                                                            LiveEditor::_create_node_func((NodePath*)this_00, (String*)&local_b0, (String*)&local_a8);
                                                            LAB_0011156f:NodePath::~NodePath((NodePath*)&local_b0);
                                                            CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                                                            CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                                                            uVar14 = 0;
                                                            goto LAB_00110515;
                                                         }

                                                         _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0xf2, "Condition \"p_args.size() < 3\" is true. Returning: ERR_INVALID_DATA", 0, 0);
                                                      }

                                                   }
 else {
                                                      iVar11 = Array::size();
                                                      if (1 < iVar11) {
                                                         lVar19 = 0;
                                                         local_a8 = 0;
                                                         local_a0 = (void*)0x0;
                                                         local_98 = 0;
                                                         local_90 = (Variant**)0x0;
                                                         iVar11 = Array::size();
                                                         LocalVector<Variant,unsigned_int,false,false>::resize((LocalVector<Variant,unsigned_int,false,false>*)&local_a8, iVar11 - 2);
                                                         uVar6 = (uint)local_a8;
                                                         LocalVector<Variant*,unsigned_int,false,false>::resize((LocalVector<Variant*,unsigned_int,false,false>*)&local_98, (uint)local_a8);
                                                         while (true) {
                                                            ppVVar5 = local_90;
                                                            pvVar4 = local_a0;
                                                            uVar1 = (uint)local_98;
                                                            if (uVar6 <= (uint)lVar19) break;
                                                            pVVar13 = (Variant*)Array::operator [](iVar12);
                                                            pVVar17 = (Variant*)( (long)pvVar4 + lVar19 * 0x18 );
                                                            Variant::operator =(pVVar17, pVVar13);
                                                            if (uVar1 <= (uint)lVar19) goto LAB_001112cb;
                                                            local_90[lVar19] = pVVar17;
                                                            lVar19 = lVar19 + 1;
                                                         }
;
                                                         ppVVar18 = (Variant**)0x0;
                                                         if ((uint)local_98 != 0) {
                                                            ppVVar18 = local_90;
                                                         }

                                                         Array::operator [](iVar12);
                                                         Variant::operator_cast_to_StringName((Variant*)&local_b0);
                                                         pVVar13 = (Variant*)Array::operator [](iVar12);
                                                         iVar12 = Variant::operator_cast_to_int(pVVar13);
                                                         LiveEditor::_res_call_func(this_00, iVar12, (StringName*)&local_b0, ppVVar18, uVar1);
                                                         goto joined_r0x001115f6;
                                                      }

                                                      _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0xe6, "Condition \"p_args.size() < 2\" is true. Returning: ERR_INVALID_DATA", 0, 0);
                                                   }

                                                }
 else {
                                                   iVar11 = Array::size();
                                                   if (1 < iVar11) {
                                                      lVar19 = 0;
                                                      local_a8 = 0;
                                                      local_a0 = (void*)0x0;
                                                      local_98 = 0;
                                                      local_90 = (Variant**)0x0;
                                                      iVar11 = Array::size();
                                                      LocalVector<Variant,unsigned_int,false,false>::resize((LocalVector<Variant,unsigned_int,false,false>*)&local_a8, iVar11 - 2);
                                                      uVar6 = (uint)local_a8;
                                                      LocalVector<Variant*,unsigned_int,false,false>::resize((LocalVector<Variant*,unsigned_int,false,false>*)&local_98, (uint)local_a8);
                                                      while (true) {
                                                         ppVVar5 = local_90;
                                                         pvVar4 = local_a0;
                                                         uVar1 = (uint)local_98;
                                                         if (uVar6 <= (uint)lVar19) break;
                                                         pVVar13 = (Variant*)Array::operator [](iVar12);
                                                         pVVar17 = (Variant*)( (long)pvVar4 + lVar19 * 0x18 );
                                                         Variant::operator =(pVVar17, pVVar13);
                                                         if (uVar1 <= (uint)lVar19) {
                                                            LAB_001112cb:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, lVar19, (ulong)uVar1, "p_index", "count", "", false, true);
                                                            _err_flush_stdout();
                                                            /* WARNING: Does not return */
                                                            pcVar3 = (code*)invalidInstructionException();
                                                            ( *pcVar3 )();
                                                         }

                                                         local_90[lVar19] = pVVar17;
                                                         lVar19 = lVar19 + 1;
                                                      }
;
                                                      ppVVar18 = (Variant**)0x0;
                                                      if ((uint)local_98 != 0) {
                                                         ppVVar18 = local_90;
                                                      }

                                                      Array::operator [](iVar12);
                                                      Variant::operator_cast_to_StringName((Variant*)&local_b0);
                                                      pVVar13 = (Variant*)Array::operator [](iVar12);
                                                      iVar12 = Variant::operator_cast_to_int(pVVar13);
                                                      LiveEditor::_node_call_func(this_00, iVar12, (StringName*)&local_b0, ppVVar18, uVar1);
                                                      joined_r0x001115f6:if (( StringName::configured != '\0' ) && ( local_b0 != (Object*)0x0 )) {
                                                         StringName::unref();
                                                      }

                                                      if (( ppVVar5 != (Variant**)0x0 ) && ( LocalVector<Variant*,unsigned_int,false,false>::resize((LocalVector<Variant*,unsigned_int,false,false>*)&local_98, 0),local_90 != (Variant**)0x0 )) {
                                                         Memory::free_static(local_90, false);
                                                      }

                                                      if (( pvVar4 != (void*)0x0 ) && ( LocalVector<Variant,unsigned_int,false,false>::resize((LocalVector<Variant,unsigned_int,false,false>*)&local_a8, 0),local_a0 != (void*)0x0 )) {
                                                         Memory::free_static(local_a0, false);
                                                         uVar14 = 0;
                                                         goto LAB_00110515;
                                                      }

                                                      goto LAB_00110418;
                                                   }

                                                   _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0xda, "Condition \"p_args.size() < 2\" is true. Returning: ERR_INVALID_DATA", 0, 0);
                                                }

                                             }
 else {
                                                iVar11 = Array::size();
                                                if (2 < iVar11) {
                                                   pVVar13 = (Variant*)Array::operator [](iVar12);
                                                   Array::operator [](iVar12);
                                                   Variant::operator_cast_to_StringName((Variant*)&local_98);
                                                   pVVar17 = (Variant*)Array::operator [](iVar12);
                                                   iVar12 = Variant::operator_cast_to_int(pVVar17);
                                                   LiveEditor::_res_set_func(this_00, iVar12, (StringName*)&local_98, pVVar13);
                                                   if (StringName::configured == '\0') {
                                                      uVar14 = 0;
                                                      goto LAB_00110515;
                                                   }

                                                   goto LAB_00110f43;
                                                }

                                                _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0xd6, "Condition \"p_args.size() < 3\" is true. Returning: ERR_INVALID_DATA", 0, 0);
                                             }

                                          }
 else {
                                             iVar11 = Array::size();
                                             if (2 < iVar11) {
                                                Array::operator [](iVar12);
                                                Variant::operator_cast_to_String((Variant*)&local_98);
                                                Array::operator [](iVar12);
                                                Variant::operator_cast_to_StringName((Variant*)&local_a8);
                                                pVVar13 = (Variant*)Array::operator [](iVar12);
                                                iVar12 = Variant::operator_cast_to_int(pVVar13);
                                                LiveEditor::_res_set_res_func(this_00, iVar12, (StringName*)&local_a8, (String*)&local_98);
                                                goto joined_r0x0011109a;
                                             }

                                             _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0xd2, "Condition \"p_args.size() < 3\" is true. Returning: ERR_INVALID_DATA", 0, 0);
                                          }

                                       }
 else {
                                          iVar11 = Array::size();
                                          if (2 < iVar11) {
                                             pVVar13 = (Variant*)Array::operator [](iVar12);
                                             Array::operator [](iVar12);
                                             Variant::operator_cast_to_StringName((Variant*)&local_98);
                                             pVVar17 = (Variant*)Array::operator [](iVar12);
                                             iVar12 = Variant::operator_cast_to_int(pVVar17);
                                             LiveEditor::_node_set_func(this_00, iVar12, (StringName*)&local_98, pVVar13);
                                             if (StringName::configured != '\0') {
                                                LAB_00110f43:if (local_98 != 0) {
                                                   StringName::unref();
                                                   uVar14 = 0;
                                                   goto LAB_00110515;
                                                }

                                             }

                                             LAB_00110418:uVar14 = 0;
                                             goto LAB_00110515;
                                          }

                                          _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0xce, "Condition \"p_args.size() < 3\" is true. Returning: ERR_INVALID_DATA", 0, 0);
                                       }

                                    }
 else {
                                       iVar11 = Array::size();
                                       if (2 < iVar11) {
                                          Array::operator [](iVar12);
                                          Variant::operator_cast_to_String((Variant*)&local_98);
                                          Array::operator [](iVar12);
                                          Variant::operator_cast_to_StringName((Variant*)&local_a8);
                                          pVVar13 = (Variant*)Array::operator [](iVar12);
                                          iVar12 = Variant::operator_cast_to_int(pVVar13);
                                          LiveEditor::_node_set_res_func(this_00, iVar12, (StringName*)&local_a8, (String*)&local_98);
                                          joined_r0x0011109a:if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
                                             StringName::unref();
                                          }

                                          goto LAB_00110a78;
                                       }

                                       _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0xca, "Condition \"p_args.size() < 3\" is true. Returning: ERR_INVALID_DATA", 0, 0);
                                    }

                                 }
 else {
                                    iVar11 = Array::size();
                                    if (1 < iVar11) {
                                       pVVar13 = (Variant*)Array::operator [](iVar12);
                                       iVar11 = Variant::operator_cast_to_int(pVVar13);
                                       Array::operator [](iVar12);
                                       Variant::operator_cast_to_String((Variant*)&local_98);
                                       LiveEditor::_res_path_func(this_00, (String*)&local_98, iVar11);
                                       CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                                       uVar14 = 0;
                                       goto LAB_00110515;
                                    }

                                    _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0xc6, "Condition \"p_args.size() < 2\" is true. Returning: ERR_INVALID_DATA", 0, 0);
                                 }

                              }
 else {
                                 iVar11 = Array::size();
                                 if (1 < iVar11) {
                                    pVVar13 = (Variant*)Array::operator [](iVar12);
                                    iVar11 = Variant::operator_cast_to_int(pVVar13);
                                    Array::operator [](iVar12);
                                    Variant::operator_cast_to_NodePath((Variant*)&local_98);
                                    LiveEditor::_node_path_func(this_00, (NodePath*)&local_98, iVar11);
                                    NodePath::~NodePath((NodePath*)&local_98);
                                    uVar14 = 0;
                                    goto LAB_00110515;
                                 }

                                 _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0xc2, "Condition \"p_args.size() < 2\" is true. Returning: ERR_INVALID_DATA", 0, 0);
                              }

                           }
 else {
                              iVar11 = Array::size();
                              if (1 < iVar11) {
                                 Array::operator [](iVar12);
                                 Variant::operator_cast_to_String((Variant*)&local_98);
                                 Array::operator [](iVar12);
                                 Variant::operator_cast_to_NodePath((Variant*)&local_a8);
                                 NodePath::operator =((NodePath*)( this_00 + 0x60 ), (NodePath*)&local_a8);
                                 if (*(long*)( this_00 + 0x68 ) != local_98) {
                                    CowData<char32_t>::_ref((CowData<char32_t>*)( this_00 + 0x68 ), (CowData*)&local_98);
                                 }

                                 LAB_00110a70:NodePath::~NodePath((NodePath*)&local_a8);
                                 LAB_00110a78:CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                                 uVar14 = 0;
                                 goto LAB_00110515;
                              }

                              _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0xbe, "Condition \"p_args.size() < 2\" is true. Returning: ERR_INVALID_DATA", 0, 0);
                           }

                        }

                     }
 else {
                        cVar7 = Array::is_empty();
                        if (cVar7 == '\0') {
                           Array::operator [](iVar12);
                           Variant::operator_cast_to_Vector((Variant*)&local_98);
                           reload_cached_files((Vector*)&local_98);
                           CowData<String>::_unref((CowData<String>*)&local_90);
                           uVar14 = 0;
                           goto LAB_00110515;
                        }

                        _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0xb8, "Condition \"p_args.is_empty()\" is true. Returning: ERR_INVALID_DATA", 0, 0);
                     }

                  }
 else {
                     iVar11 = Array::size();
                     if (2 < iVar11) {
                        uVar14 = Array::operator [](iVar12);
                        Array::operator [](iVar12);
                        Variant::operator_cast_to_String((Variant*)&local_98);
                        pVVar13 = (Variant*)Array::operator [](iVar12);
                        uVar15 = Variant::operator_cast_to_ObjectID(pVVar13);
                        _set_object_property(uVar15, (Variant*)&local_98, uVar14);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                        RuntimeNodeSelect::_queue_selection_update(this);
                        uVar14 = 0;
                        goto LAB_00110515;
                     }

                     _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0xb3, "Condition \"p_args.size() < 3\" is true. Returning: ERR_INVALID_DATA", 0, 0);
                  }

               }
 else {
                  iVar11 = Array::size();
                  if (4 < iVar11) {
                     Array::operator [](iVar12);
                     Variant::operator_cast_to_Transform3D((Variant*)local_78);
                     pVVar13 = (Variant*)Array::operator [](iVar12);
                     bVar8 = Variant::operator_cast_to_bool(pVVar13);
                     pVVar13 = (Variant*)Array::operator [](iVar12);
                     fVar20 = Variant::operator_cast_to_float(pVVar13);
                     pVVar13 = (Variant*)Array::operator [](iVar12);
                     fVar21 = Variant::operator_cast_to_float(pVVar13);
                     pVVar13 = (Variant*)Array::operator [](iVar12);
                     fVar22 = Variant::operator_cast_to_float(pVVar13);
                     if (bVar8) {
                        Viewport::set_camera_3d_override_perspective(fVar20, fVar21, fVar22);
                     }
 else {
                        Viewport::set_camera_3d_override_orthogonal(fVar20, fVar21, fVar22);
                     }

                     Viewport::set_camera_3d_override_transform(*(Transform3D**)( lVar19 + 0x368 ));
                     RuntimeNodeSelect::_queue_selection_update(this);
                     uVar14 = 0;
                     goto LAB_00110515;
                  }

                  _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0xa3, "Condition \"p_args.size() < 5\" is true. Returning: ERR_INVALID_DATA", 0, 0);
               }

            }
 else {
               cVar7 = Array::is_empty();
               if (cVar7 == '\0') {
                  Array::operator [](iVar12);
                  Variant::operator_cast_to_Transform2D((Variant*)local_78);
                  Viewport::set_canvas_transform_override(*(Transform2D**)( lVar19 + 0x368 ));
                  RuntimeNodeSelect::_queue_selection_update(this);
                  uVar14 = 0;
                  goto LAB_00110515;
               }

               _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0x9c, "Condition \"p_args.is_empty()\" is true. Returning: ERR_INVALID_DATA", 0, 0);
            }

         }
 else {
            cVar7 = Array::is_empty();
            if (cVar7 == '\0') {
               pVVar13 = (Variant*)Array::operator [](iVar12);
               bVar8 = Variant::operator_cast_to_bool(pVVar13);
               pVVar13 = (Variant*)Array::operator [](iVar12);
               bVar9 = Variant::operator_cast_to_bool(pVVar13);
               Viewport::enable_canvas_transform_override(SUB81(*(undefined8*)( lVar19 + 0x368 ), 0));
               Viewport::enable_camera_3d_override(SUB81(*(undefined8*)( lVar19 + 0x368 ), 0));
               RuntimeNodeSelect::_set_camera_override_enabled(this, !bVar9 && bVar8);
               uVar14 = 0;
               goto LAB_00110515;
            }

            _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0x92, "Condition \"p_args.is_empty()\" is true. Returning: ERR_INVALID_DATA", 0, 0);
         }

      }
 else {
         cVar7 = Array::is_empty();
         if (cVar7 == '\0') {
            pVVar13 = (Variant*)Array::operator [](iVar12);
            Variant::operator_cast_to_bool(pVVar13);
            SceneTree::set_suspend(SUB81(lVar19, 0));
            RuntimeNodeSelect::_update_input_state();
            uVar14 = 0;
            goto LAB_00110515;
         }

         _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0x89, "Condition \"p_args.is_empty()\" is true. Returning: ERR_INVALID_DATA", 0, 0);
      }

   }
 else {
      cVar7 = Array::is_empty();
      if (cVar7 == '\0') {
         pVVar13 = (Variant*)Array::operator [](iVar12);
         uVar14 = Variant::operator_cast_to_ObjectID(pVVar13);
         _send_object_id(uVar14, 0x100000);
         uVar14 = 0;
         goto LAB_00110515;
      }

      _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0x84, "Condition \"p_args.is_empty()\" is true. Returning: ERR_INVALID_DATA", 0, 0);
   }

}
 else {
   iVar11 = Array::size();
   if (1 < iVar11) {
      Array::operator [](iVar12);
      Variant::operator_cast_to_String((Variant*)&local_98);
      pVVar13 = (Variant*)Array::operator [](iVar12);
      uVar14 = Variant::operator_cast_to_ObjectID(pVVar13);
      _save_node(uVar14, (Variant*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      Array::Array((Array*)&local_a8);
      Array::operator [](iVar12);
      Array::push_back((Variant*)&local_a8);
      plVar2 = EngineDebugger::singleton;
      pcVar3 = *(code**)( *EngineDebugger::singleton + 8 );
      local_98 = 0;
      String::parse_latin1((String*)&local_98, "filesystem:update_file");
      ( *pcVar3 )(plVar2, (Variant*)&local_98, (Array*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      Array::~Array((Array*)&local_a8);
      uVar14 = 0;
      goto LAB_00110515;
   }

   _err_print_error("parse_message", "scene/debugger/scene_debugger.cpp", 0x7d, "Condition \"p_args.size() < 2\" is true. Returning: ERR_INVALID_DATA", 0, 0);
}
uVar14 = 0x1e;LAB_00110515:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return uVar14;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* Vector<RuntimeNodeSelect::SelectResult>::push_back(RuntimeNodeSelect::SelectResult) [clone
   .isra.0] */void Vector<RuntimeNodeSelect::SelectResult>::push_back(undefined4 param_1, long param_2, undefined8 param_3) {
   int iVar1;
   undefined8 *puVar2;
   long lVar3;
   long lVar4;
   if (*(long*)( param_2 + 8 ) == 0) {
      lVar4 = 1;
   }
 else {
      lVar4 = *(long*)( *(long*)( param_2 + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<RuntimeNodeSelect::SelectResult>::resize<false>((CowData<RuntimeNodeSelect::SelectResult>*)( param_2 + 8 ), lVar4);
   if (iVar1 == 0) {
      if (*(long*)( param_2 + 8 ) == 0) {
         lVar3 = -1;
         lVar4 = 0;
      }
 else {
         lVar4 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
         lVar3 = lVar4 + -1;
         if (-1 < lVar3) {
            CowData<RuntimeNodeSelect::SelectResult>::_copy_on_write((CowData<RuntimeNodeSelect::SelectResult>*)( param_2 + 8 ));
            puVar2 = (undefined8*)( lVar3 * 0x10 + *(long*)( param_2 + 8 ) );
            *puVar2 = param_3;
            *(undefined4*)( puVar2 + 1 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar4, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* RuntimeNodeSelect::_find_canvas_items_at_pos(Vector2 const&, Node*,
   Vector<RuntimeNodeSelect::SelectResult>&, Transform2D const&, Transform2D const&) [clone .part.0]
    */void RuntimeNodeSelect::_find_canvas_items_at_pos(RuntimeNodeSelect *this, Vector2 *param_1, Node *param_2, Vector *param_3, Transform2D *param_4, Transform2D *param_5) {
   char cVar1;
   int iVar2;
   int iVar3;
   long *plVar4;
   Node *pNVar5;
   long lVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   bool bVar8;
   float fVar9;
   float fVar10;
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   float fVar13;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == (Node*)0x0) {
      iVar2 = Node::get_child_count(false);
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) goto LAB_00111ccf;
      LAB_00111f5e:do {
         lVar6 = __dynamic_cast(param_2, &Object::typeinfo, &CanvasLayer::typeinfo, 0);
         if (lVar6 == 0) {
            local_58 = *(undefined8*)param_5;
            uStack_50 = *(undefined8*)( param_5 + 8 );
            local_48 = *(undefined8*)( param_5 + 0x10 );
         }
 else {
            CanvasLayer::get_transform();
         }

         local_70 = 0x3f80000000000000;
         local_78 = 0x3f800000;
         local_68 = 0;
         pNVar5 = (Node*)Node::get_child((int)param_2, SUB41(iVar2, 0));
         if (( pNVar5 != (Node*)0x0 ) && ( lVar6 = __dynamic_cast(pNVar5, &Object::typeinfo, &Viewport::typeinfo, 0) ),lVar6 == 0) {
            _find_canvas_items_at_pos(this, param_1, pNVar5, param_3, (Transform2D*)&local_78, (Transform2D*)&local_58);
         }

         bVar8 = iVar2 != 0;
         iVar2 = iVar2 + -1;
      }
 while ( bVar8 );
   }
 else {
      plVar4 = (long*)__dynamic_cast(param_2, &Object::typeinfo, &CanvasItem::typeinfo, 0);
      iVar2 = Node::get_child_count(SUB81(param_2, 0));
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
         LAB_00111cca:if (plVar4 == (long*)0x0) goto LAB_00111ccf;
      }
 else {
         if (plVar4 == (long*)0x0) goto LAB_00111f5e;
         do {
            while (true) {
               cVar1 = CanvasItem::is_set_as_top_level();
               if (cVar1 == '\0') {
                  ( **(code**)( *plVar4 + 0x290 ) )(&local_78, plVar4);
                  Transform2D::operator *((Transform2D*)&local_58, param_4);
               }
 else {
                  ( **(code**)( *plVar4 + 0x290 ) )((Transform2D*)&local_58, plVar4);
               }

               pNVar5 = (Node*)Node::get_child((int)param_2, SUB41(iVar2, 0));
               if (pNVar5 == (Node*)0x0) break;
               lVar6 = __dynamic_cast(pNVar5, &Object::typeinfo, &Viewport::typeinfo, 0);
               if (lVar6 == 0) {
                  _find_canvas_items_at_pos(this, param_1, pNVar5, param_3, (Transform2D*)&local_58, param_5);
               }

               bVar8 = iVar2 == 0;
               iVar2 = iVar2 + -1;
               if (bVar8) goto LAB_00111cca;
            }
;
            bVar8 = iVar2 != 0;
            iVar2 = iVar2 + -1;
         }
 while ( bVar8 );
      }

      cVar1 = CanvasItem::is_visible_in_tree();
      if (cVar1 != '\0') {
         local_98 = *(undefined8*)param_5;
         uStack_90 = *(undefined8*)( param_5 + 8 );
         local_88 = *(undefined8*)( param_5 + 0x10 );
         cVar1 = CanvasItem::is_set_as_top_level();
         if (cVar1 == '\0') {
            Transform2D::operator *=((Transform2D*)&local_98, param_4);
         }

         lVar6 = CanvasItem::get_canvas_layer_node();
         if (lVar6 == 0) {
            cVar1 = Viewport::is_canvas_transform_override_enabled();
            if (cVar1 == '\0') {
               Viewport::get_canvas_transform();
            }
 else {
               Viewport::get_canvas_transform_override();
            }

            Transform2D::affine_inverse();
            fVar13 = uStack_50._4_4_ * *(float*)( param_1 + 4 ) + local_58._4_4_ * *(float*)param_1 + local_48._4_4_;
            fVar10 = *(float*)param_1 * (float)local_58 + *(float*)( param_1 + 4 ) * (float)uStack_50 + (float)local_48;
         }
 else {
            fVar10 = (float)*(undefined8*)param_1;
            fVar13 = (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 );
         }

         ( **(code**)( *plVar4 + 0x290 ) )(&local_78, plVar4);
         Transform2D::operator *((Transform2D*)&local_58, (Transform2D*)&local_98);
         Transform2D::affine_inverse();
         local_88 = local_a8;
         local_98 = local_b8;
         uStack_90 = uStack_b0;
         local_58 = CONCAT44((float)( (ulong)uStack_b0 >> 0x20 ) * 0.0 + (float)( (ulong)local_b8 >> 0x20 ) * _LC227._4_4_, (float)uStack_b0 * 0.0 + (float)local_b8 * (float)_LC227);
         fVar9 = (float)Vector2::length();
         local_58 = CONCAT44(fVar10 * (float)( (ulong)local_98 >> 0x20 ) + fVar13 * (float)( (ulong)uStack_90 >> 0x20 ) + (float)( (ulong)local_88 >> 0x20 ), fVar10 * (float)local_98 + fVar13 * (float)uStack_90 + (float)local_88);
         cVar1 = ( **(code**)( *plVar4 + 0x250 ) )((double)( fVar9 / *(float*)( this + 0x1a8 ) ), plVar4, (Transform2D*)&local_58);
         if (cVar1 != '\0') {
            iVar2 = CanvasItem::get_effective_z_index();
            iVar3 = CanvasItem::get_canvas_layer();
            auVar11._4_12_ = SUB1612((undefined1[16])0x0, 4);
            auVar11._0_4_ = (float)( iVar2 + iVar3 );
            Vector<RuntimeNodeSelect::SelectResult>::push_back(auVar11._0_8_, param_3, plVar4);
            lVar6 = __dynamic_cast(plVar4, &Object::typeinfo, &CollisionShape2D::typeinfo, 0);
            if (( ( ( lVar6 != 0 ) || ( lVar6 = __dynamic_cast(plVar4, &Object::typeinfo, &CollisionPolygon2D::typeinfo, 0) ),lVar6 != 0 ) ) && ( lVar6 = lVar6 != 0 )) {
               uVar7 = Node::get_parent();
               iVar2 = CanvasItem::get_z_index();
               iVar3 = CanvasItem::get_canvas_layer();
               auVar12._4_12_ = SUB1612((undefined1[16])0x0, 4);
               auVar12._0_4_ = (float)( iVar2 + iVar3 );
               Vector<RuntimeNodeSelect::SelectResult>::push_back(auVar12._0_8_, param_3, uVar7);
            }

         }

      }

   }

   LAB_00111ccf:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* RuntimeNodeSelect::_find_canvas_items_at_pos(Vector2 const&, Node*,
   Vector<RuntimeNodeSelect::SelectResult>&, Transform2D const&, Transform2D const&) */void RuntimeNodeSelect::_find_canvas_items_at_pos(RuntimeNodeSelect *this, Vector2 *param_1, Node *param_2, Vector *param_3, Transform2D *param_4, Transform2D *param_5) {
   long lVar1;
   if (param_2 == (Node*)0x0) {
      return;
   }

   lVar1 = __dynamic_cast(param_2, &Object::typeinfo, &Viewport::typeinfo, 0);
   if (lVar1 != 0) {
      return;
   }

   _find_canvas_items_at_pos(this, param_1, param_2, param_3, param_4, param_5);
   return;
}
/* RuntimeNodeSelect::_find_3d_items_at_pos(Vector2 const&,
   Vector<RuntimeNodeSelect::SelectResult>&) */void RuntimeNodeSelect::_find_3d_items_at_pos(RuntimeNodeSelect *this, Vector2 *param_1, Vector *param_2) {
   Vector *pVVar1;
   int iVar2;
   Vector2 *pVVar3;
   code *pcVar4;
   ulong uVar5;
   Object *pOVar6;
   long *plVar7;
   undefined8 *puVar8;
   undefined4 uVar9;
   undefined4 uVar10;
   char cVar11;
   int iVar12;
   float *pfVar13;
   long *plVar14;
   undefined8 uVar15;
   long lVar16;
   List *pLVar17;
   Vector *pVVar18;
   ulong uVar19;
   undefined8 *puVar20;
   uint uVar21;
   ulong *puVar22;
   Vector *pVVar23;
   void *pvVar24;
   Vector *pVVar25;
   CowData<ObjectID> *pCVar26;
   CowData<ObjectID> *this_00;
   long lVar27;
   ulong uVar28;
   long in_FS_OFFSET;
   bool bVar29;
   float fVar30;
   float fVar31;
   undefined1 auVar32[16];
   float fVar33;
   undefined1 auVar34[16];
   undefined8 local_250;
   RID *local_248;
   float local_224;
   float local_220;
   float local_21c;
   undefined1 local_1f0;
   undefined7 uStack_1ef;
   long *local_1e8;
   undefined8 *local_1e0;
   undefined1 local_1d8[16];
   void *local_1c8;
   void *pvStack_1c0;
   uint uStack_1b8;
   int iStack_1b4;
   uint local_1b0;
   int local_1ac;
   undefined1 local_1a0[8];
   undefined4 local_198;
   undefined1 local_190[8];
   undefined4 local_188;
   undefined8 local_180;
   float local_178;
   undefined8 local_170;
   float local_168;
   undefined8 local_160;
   float local_158;
   undefined8 local_150;
   undefined4 local_148;
   undefined8 local_144;
   undefined4 local_13c;
   float local_108;
   float fStack_104;
   undefined8 local_100;
   float local_f8;
   float fStack_f4;
   float local_f0;
   float local_ec;
   float local_e8;
   undefined8 local_e4;
   float local_dc;
   undefined8 local_d8;
   undefined4 local_d0;
   undefined8 local_cc;
   undefined4 local_c4;
   undefined1 local_c0[16];
   long local_b0;
   undefined8 local_a8;
   undefined1 local_98[12];
   undefined8 local_8c;
   float local_84;
   undefined1 local_80[16];
   undefined1 local_70[16];
   undefined8 local_60;
   undefined4 local_58;
   undefined1 local_54;
   undefined1 local_53;
   undefined2 local_52;
   undefined1 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_190 = (undefined1[8])0x0;
   local_188 = 0.0;
   local_180 = 0;
   local_178 = 0.0;
   lVar27 = *(long*)( SceneTree::singleton + 0x368 );
   cVar11 = Viewport::is_camera_3d_override_enabled();
   if (cVar11 == '\0') {
      plVar14 = (long*)Viewport::get_camera_3d();
      if (plVar14 == (long*)0x0) goto LAB_00113002;
      _local_1a0 = ( **(code**)( *plVar14 + 0x200 ) )(plVar14, param_1);
      local_224 = SUB124(_local_1a0, 8);
      uVar9 = local_1a0._0_4_;
      uVar10 = local_1a0._4_4_;
      local_21c = (float)local_1a0._0_4_;
      local_220 = (float)local_1a0._4_4_;
      _local_190 = ( **(code**)( *plVar14 + 0x208 ) )(plVar14, param_1);
      fVar30 = (float)Camera3D::get_far();
      local_178 = local_188 + local_224 * fVar30;
      local_180 = CONCAT44(fVar30 * (float)uVar10 + SUB124(_local_190, 4), fVar30 * (float)uVar9 + SUB124(_local_190, 0));
   }
 else {
      pVVar3 = *(Vector2**)( lVar27 + 600 );
      _local_1a0 = Viewport::camera_3d_override_project_ray_normal(pVVar3);
      local_224 = SUB124(_local_1a0, 8);
      uVar9 = local_1a0._0_4_;
      local_21c = (float)local_1a0._0_4_;
      uVar10 = local_1a0._4_4_;
      local_220 = (float)local_1a0._4_4_;
      _local_190 = Viewport::camera_3d_override_project_ray_origin(pVVar3);
      Viewport::get_camera_3d_override_properties();
      StringName::StringName((StringName*)&local_1e8, "z_far", false);
      pfVar13 = (float*)HashMap<StringName,float,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,float>>>::operator []((HashMap<StringName,float,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,float>>>*)local_1d8, (StringName*)&local_1e8);
      fVar30 = *pfVar13;
      local_178 = local_188 + local_224 * fVar30;
      local_180 = CONCAT44(fVar30 * (float)uVar10 + SUB124(_local_190, 4), fVar30 * (float)uVar9 + SUB124(_local_190, 0));
      if (( StringName::configured != '\0' ) && ( local_1e8 != (long*)0x0 )) {
         StringName::unref();
      }

      if ((void*)local_1d8._8_8_ != (void*)0x0) {
         if (local_1ac != 0) {
            uVar21 = ( &hash_table_size_primes )[local_1b0];
            if (uVar21 == 0) {
               local_1ac = 0;
               pvStack_1c0 = (void*)0x0;
               uStack_1b8 = 0;
               iStack_1b4 = 0;
            }
 else {
               lVar27 = 0;
               pvVar24 = (void*)local_1d8._8_8_;
               do {
                  if (*(int*)( (long)local_1c8 + lVar27 ) != 0) {
                     bVar29 = StringName::configured != '\0';
                     *(int*)( (long)local_1c8 + lVar27 ) = 0;
                     pvVar24 = *(void**)( (long)pvVar24 + lVar27 * 2 );
                     if (( bVar29 ) && ( *(long*)( (long)pvVar24 + 0x10 ) != 0 )) {
                        StringName::unref();
                     }

                     Memory::free_static(pvVar24, false);
                     *(undefined8*)( local_1d8._8_8_ + lVar27 * 2 ) = 0;
                     pvVar24 = (void*)local_1d8._8_8_;
                  }

                  lVar27 = lVar27 + 4;
               }
 while ( lVar27 != (ulong)uVar21 * 4 );
               local_1ac = 0;
               pvStack_1c0 = (void*)0x0;
               uStack_1b8 = 0;
               iStack_1b4 = 0;
               local_1d8._8_8_ = pvVar24;
               if (pvVar24 == (void*)0x0) goto LAB_00112421;
            }

         }

         Memory::free_static((void*)local_1d8._8_8_, false);
         Memory::free_static(local_1c8, false);
      }

   }

   LAB_00112421:local_248 = (RID*)&local_1e8;
   Viewport::get_world_3d();
   plVar14 = (long*)World3D::get_direct_space_state();
   if ((Object*)local_1d8._0_8_ != (Object*)0x0) {
      cVar11 = RefCounted::unreference();
      if (cVar11 != '\0') {
         cVar11 = predelete_handler((Object*)local_1d8._0_8_);
         if (cVar11 != '\0') {
            ( **(code**)( *(long*)local_1d8._0_8_ + 0x140 ) )(local_1d8._0_8_);
            Memory::free_static((void*)local_1d8._0_8_, false);
         }

      }

   }

   local_d8 = 0;
   local_a8 = _LC229;
   local_d0 = 0;
   local_cc = 0;
   local_c4 = 0;
   local_8c = local_180;
   local_b0 = 0;
   local_84 = local_178;
   local_58 = 0xffffffff;
   local_54 = 1;
   local_52 = 0x100;
   local_50 = 0;
   local_53 = 1;
   local_c0 = (undefined1[16])0x0;
   local_1d8 = (undefined1[16])0x0;
   local_1c8 = (void*)0x0;
   pvStack_1c0 = (void*)0x0;
   uStack_1b8 = (uint)_LC25;
   iStack_1b4 = (int)( _LC25 >> 0x20 );
   local_80 = (undefined1[16])0x0;
   local_70 = (undefined1[16])0x0;
   local_60 = _LC25;
   pvVar24 = (void*)0x0;
   uVar28 = _LC25;
   local_98 = _local_190;
   while (true) {
      if (pvVar24 != (void*)0x0) {
         if (local_60._4_4_ != 0) {
            if (( &hash_table_size_primes )[local_60 & 0xffffffff] != 0) {
               memset((void*)local_70._8_8_, 0, ( ulong )(uint)(&hash_table_size_primes)[local_60 & 0xffffffff] * 4);
            }

            local_60 = local_60 & 0xffffffff;
         }

         Memory::free_static(pvVar24, false);
         Memory::free_static((void*)local_70._0_8_, false);
         Memory::free_static((void*)local_80._8_8_, false);
         Memory::free_static((void*)local_70._8_8_, false);
         local_80 = (undefined1[16])0x0;
         local_70 = (undefined1[16])0x0;
      }

      local_60 = uVar28;
      if ((int)( uVar28 >> 0x20 ) != 0) {
         uVar21 = ( &hash_table_size_primes )[uVar28 & 0xffffffff];
         uVar28 = (ulong)uVar21 * 4;
         uVar15 = Memory::alloc_static(uVar28, false);
         local_70._8_8_ = uVar15;
         uVar15 = Memory::alloc_static((ulong)uVar21 * 8, false);
         local_80._0_8_ = uVar15;
         local_70._0_8_ = Memory::alloc_static(uVar28, false);
         lVar27 = Memory::alloc_static(uVar28, false);
         local_80._8_8_ = lVar27;
         if (local_60._4_4_ != 0) {
            lVar16 = 0;
            do {
               *(undefined8*)( local_80._0_8_ + lVar16 * 8 ) = *(undefined8*)( local_1d8._0_8_ + lVar16 * 8 );
               *(undefined4*)( local_70._0_8_ + lVar16 * 4 ) = *(undefined4*)( (long)local_1c8 + lVar16 * 4 );
               lVar16 = lVar16 + 1;
            }
 while ( (uint)lVar16 < local_60._4_4_ );
         }

         if (uVar21 != 0) {
            lVar16 = 0;
            do {
               *(undefined4*)( local_70._8_8_ + lVar16 ) = *(undefined4*)( (long)pvStack_1c0 + lVar16 );
               *(undefined4*)( lVar27 + lVar16 ) = *(undefined4*)( local_1d8._8_8_ + lVar16 );
               lVar16 = lVar16 + 4;
            }
 while ( uVar28 - lVar16 != 0 );
         }

      }

      cVar11 = ( **(code**)( *plVar14 + 0x150 ) )(plVar14, local_98, &local_d8);
      lVar27 = local_b0;
      if (cVar11 == '\0') break;
      if (local_b0 == 0) {
         local_250 = 0;
      }
 else {
         local_250 = __dynamic_cast(local_b0, &Object::typeinfo, &Node::typeinfo, 0);
         pLVar17 = (List*)__dynamic_cast(lVar27, &Object::typeinfo, &CollisionObject3D::typeinfo, 0);
         if (pLVar17 != (List*)0x0) {
            local_1e8 = (long*)0x0;
            CollisionObject3D::get_shape_owners(pLVar17);
            if (local_1e8 != (long*)0x0) {
               for (lVar27 = *local_1e8; lVar27 != 0; lVar27 = *(long*)( lVar27 + 8 )) {
                  lVar16 = CollisionObject3D::shape_owner_get_owner((uint)pLVar17);
                  if (lVar16 != 0) {
                     __dynamic_cast(lVar16, &Object::typeinfo, &Node::typeinfo, 0);
                  }

                  Vector<RuntimeNodeSelect::SelectResult>::push_back(param_2);
               }

               if (local_1e8 != (long*)0x0) {
                  do {
                     plVar7 = local_1e8;
                     pvVar24 = (void*)*local_1e8;
                     if (pvVar24 == (void*)0x0) {
                        if ((int)local_1e8[2] != 0) {
                           _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                           goto LAB_00112835;
                        }

                        break;
                     }

                     if (local_1e8 == *(long**)( (long)pvVar24 + 0x18 )) {
                        lVar27 = *(long*)( (long)pvVar24 + 8 );
                        lVar16 = *(long*)( (long)pvVar24 + 0x10 );
                        *local_1e8 = lVar27;
                        if (pvVar24 == (void*)local_1e8[1]) {
                           local_1e8[1] = lVar16;
                        }

                        if (lVar16 != 0) {
                           *(long*)( lVar16 + 8 ) = lVar27;
                           lVar27 = *(long*)( (long)pvVar24 + 8 );
                        }

                        if (lVar27 != 0) {
                           *(long*)( lVar27 + 0x10 ) = lVar16;
                        }

                        Memory::free_static(pvVar24, false);
                        *(int*)( plVar7 + 2 ) = (int)plVar7[2] + -1;
                     }
 else {
                        _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                     }

                  }
 while ( (int)local_1e8[2] != 0 );
                  Memory::free_static(local_1e8, false);
               }

            }

         }

      }

      LAB_00112835:Vector<RuntimeNodeSelect::SelectResult>::push_back(param_2, local_250);
      HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::insert(local_248);
      uVar28 = CONCAT44(iStack_1b4, uStack_1b8);
      pvVar24 = (void*)local_80._0_8_;
   }
;
   plVar14 = (long*)RenderingServer::get_singleton();
   pcVar4 = *(code**)( *plVar14 + 0xda8 );
   Viewport::get_world_3d();
   World3D::get_scenario();
   ( *pcVar4 )(local_248, plVar14, local_190, &local_180);
   if (CONCAT71(uStack_1ef, local_1f0) != 0) {
      cVar11 = RefCounted::unreference();
      if (cVar11 != '\0') {
         pOVar6 = (Object*)CONCAT71(uStack_1ef, local_1f0);
         cVar11 = predelete_handler(pOVar6);
         if (cVar11 != '\0') {
            ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
            Memory::free_static(pOVar6, false);
         }

      }

   }

   uVar28 = 0;
   iVar2 = 0;
   puVar20 = local_1e0;
   joined_r0x00112a4e:local_1e0 = puVar20;
   if (puVar20 != (undefined8*)0x0) {
      LAB_00112a60:uVar19 = uVar28;
      if ((long)uVar28 < (long)puVar20[-1]) {
         do {
            uVar28 = (ulong)iVar2;
            uVar21 = (uint)puVar20[uVar28] & 0xffffff;
            if (uVar21 < (uint)ObjectDB::slot_max) {
               while (true) {
                  local_1f0 = 0;
                  LOCK();
                  bVar29 = (char)ObjectDB::spin_lock == '\0';
                  if (bVar29) {
                     ObjectDB::spin_lock._0_1_ = '\x01';
                  }

                  UNLOCK();
                  if (bVar29) break;
                  do {} while ( (char)ObjectDB::spin_lock != '\0' );
               }
;
               puVar22 = (ulong*)( (ulong)uVar21 * 0x10 + ObjectDB::object_slots );
               if (( (ulong)puVar20[uVar28] >> 0x18 & 0x7fffffffff ) == ( *puVar22 & 0x7fffffffff )) {
                  uVar5 = puVar22[1];
                  ObjectDB::spin_lock._0_1_ = '\0';
                  if (uVar5 != 0) {
                     plVar14 = (long*)__dynamic_cast(uVar5, &Object::typeinfo, &GeometryInstance3D::typeinfo, 0);
                     if (plVar14 != (long*)0x0) {
                        ( **(code**)( *plVar14 + 0x1e0 ) )(&local_1f0, plVar14);
                        if (CONCAT71(uStack_1ef, local_1f0) != 0) {
                           Node3D::get_global_transform();
                           Transform3D::affine_inverse();
                           local_150 = 0;
                           local_148 = 0;
                           local_144 = 0;
                           fVar31 = (float)( (ulong)local_100 >> 0x20 );
                           local_13c = 0;
                           auVar32._0_4_ = local_220 * fStack_104 + local_21c * local_108 + local_224 * (float)local_100;
                           auVar32._4_4_ = local_220 * local_f8 + local_21c * fVar31 + local_224 * fStack_f4;
                           auVar32._8_8_ = 0;
                           fVar33 = local_21c * local_f0 + local_220 * local_ec + local_224 * local_e8;
                           fVar30 = auVar32._0_4_ * auVar32._0_4_ + auVar32._4_4_ * auVar32._4_4_ + fVar33 * fVar33;
                           local_158 = 0.0;
                           local_160 = 0;
                           if (fVar30 != 0.0) {
                              fVar30 = SQRT(fVar30);
                              auVar34._4_4_ = fVar30;
                              auVar34._0_4_ = fVar30;
                              auVar34._8_8_ = _LC35;
                              auVar32 = divps(auVar32, auVar34);
                              local_158 = fVar33 / fVar30;
                              local_160 = auVar32._0_8_;
                           }

                           fVar30 = SUB124(_local_190, 0);
                           fVar33 = SUB124(_local_190, 4);
                           local_168 = fVar30 * local_f0 + fVar33 * local_ec + local_e8 * local_188 + local_dc;
                           local_170 = CONCAT44(fVar33 * local_f8 + fVar30 * fVar31 + local_188 * fStack_f4 + (float)( (ulong)local_e4 >> 0x20 ), fVar33 * fStack_104 + fVar30 * local_108 + local_188 * (float)local_100 + (float)local_e4);
                           cVar11 = TriangleMesh::intersect_ray((Vector3*)CONCAT71(uStack_1ef, local_1f0), (Vector3*)&local_170, (Vector3*)&local_160, (Vector3*)&local_150, (int*)&local_144);
                           if (cVar11 != '\0') {
                              __dynamic_cast(uVar5, &Object::typeinfo, &Node::typeinfo, 0);
                              Vector<RuntimeNodeSelect::SelectResult>::push_back(param_2);
                              if (CONCAT71(uStack_1ef, local_1f0) != 0) {
                                 cVar11 = RefCounted::unreference();
                                 if (cVar11 != '\0') {
                                    pOVar6 = (Object*)CONCAT71(uStack_1ef, local_1f0);
                                    cVar11 = predelete_handler(pOVar6);
                                    if (cVar11 != '\0') {
                                       ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                                       Memory::free_static(pOVar6, false);
                                    }

                                 }

                              }

                              iVar2 = iVar2 + 1;
                              uVar28 = (ulong)iVar2;
                              puVar20 = local_1e0;
                              goto joined_r0x00112a4e;
                           }

                           if (CONCAT71(uStack_1ef, local_1f0) != 0) {
                              cVar11 = RefCounted::unreference();
                              if (cVar11 != '\0') {
                                 pOVar6 = (Object*)CONCAT71(uStack_1ef, local_1f0);
                                 cVar11 = predelete_handler(pOVar6);
                                 if (cVar11 != '\0') {
                                    ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                                    Memory::free_static(pOVar6, false);
                                 }

                              }

                           }

                        }

                     }

                  }

               }
 else {
                  ObjectDB::spin_lock._0_1_ = '\0';
               }

            }
 else {
               _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
            }

            if (local_1e0 == (undefined8*)0x0) {
               lVar27 = 0;
               LAB_00113073:_err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, uVar19, lVar27, "p_index", "size()", "", false, false);
               puVar20 = local_1e0;
               goto joined_r0x00112a4e;
            }

            lVar27 = local_1e0[-1];
            if (lVar27 <= (long)uVar19) goto LAB_00113073;
            this_00 = (CowData<ObjectID>*)&local_1e0;
            CowData<ObjectID>::_copy_on_write(this_00);
            puVar20 = local_1e0;
            if (local_1e0 == (undefined8*)0x0) {
               if ((long)uVar19 < -1) {
                  memmove((void*)( uVar19 * 8 ), (void*)( (long)( uVar19 * 8 ) + 8 ), ~uVar19 << 3);
               }

               LAB_00113459:_err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
               puVar20 = local_1e0;
               goto joined_r0x00112a4e;
            }

            pVVar25 = (Vector*)local_1e0[-1];
            pVVar1 = pVVar25 + -1;
            if ((long)uVar19 < (long)pVVar1) {
               memmove(local_1e0 + uVar19, local_1e0 + uVar19 + 1, ( (long)pVVar1 - uVar19 ) * 8);
               if ((long)pVVar1 < 0) goto LAB_00113459;
               pVVar25 = (Vector*)puVar20[-1];
               if (pVVar25 == pVVar1) goto LAB_00112a60;
            }
 else if ((long)pVVar1 < 0) goto LAB_00113459;
            puVar8 = local_1e0;
            if (pVVar1 == (Vector*)0x0) {
               LOCK();
               plVar14 = puVar20 + -2;
               *plVar14 = *plVar14 + -1;
               UNLOCK();
               if (*plVar14 != 0) goto LAB_00112f03;
               local_1e0 = (undefined8*)0x0;
               Memory::free_static(puVar8 + -2, false);
               puVar20 = local_1e0;
               goto joined_r0x00112a4e;
            }

            pCVar26 = this_00;
            CowData<ObjectID>::_copy_on_write(this_00);
            pVVar18 = (Vector*)( (long)pVVar25 * 8 );
            if (pVVar18 != (Vector*)0x0) {
               uVar19 = ( ulong )(pVVar18 + -1) | ( ulong )(pVVar18 + -1) >> 1;
               uVar19 = uVar19 | uVar19 >> 2;
               uVar19 = uVar19 | uVar19 >> 4;
               uVar19 = uVar19 | uVar19 >> 8;
               uVar19 = uVar19 | uVar19 >> 0x10;
               pVVar18 = (Vector*)( ( uVar19 | uVar19 >> 0x20 ) + 1 );
            }

            if ((long)pVVar1 * 8 == 0) {
               LAB_0011351f:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
               puVar20 = local_1e0;
               goto joined_r0x00112a4e;
            }

            uVar19 = (long)pVVar1 * 8 - 1;
            uVar19 = uVar19 | uVar19 >> 1;
            uVar19 = uVar19 | uVar19 >> 2;
            uVar19 = uVar19 | uVar19 >> 4;
            uVar19 = uVar19 | uVar19 >> 8;
            uVar19 = uVar19 | uVar19 >> 0x10;
            uVar19 = uVar19 | uVar19 >> 0x20;
            pVVar23 = (Vector*)( uVar19 + 1 );
            if (pVVar23 == (Vector*)0x0) goto LAB_0011351f;
            if ((long)pVVar25 < (long)pVVar1) {
               if (pVVar23 == pVVar18) {
                  LAB_001133ee:if (local_1e0 == (undefined8*)0x0) {
                     /* WARNING: Does not return */
                     pcVar4 = (code*)invalidInstructionException();
                     ( *pcVar4 )();
                  }

                  lVar27 = local_1e0[-1];
                  puVar20 = local_1e0;
                  if ((long)pVVar1 <= lVar27) goto LAB_00112ee6;
               }
 else {
                  if (pVVar25 != (Vector*)0x0) {
                     iVar12 = CowData<ObjectID>::_realloc(this_00, (long)pVVar23);
                     puVar20 = local_1e0;
                     if (iVar12 == 0) goto LAB_001133ee;
                     goto joined_r0x00112a4e;
                  }

                  puVar20 = (undefined8*)Memory::alloc_static(uVar19 + 0x11, false);
                  if (puVar20 == (undefined8*)0x0) {
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                     puVar20 = local_1e0;
                     goto joined_r0x00112a4e;
                  }

                  local_1e0 = puVar20 + 2;
                  *puVar20 = 1;
                  puVar20[1] = 0;
                  lVar27 = 0;
               }

               puVar20 = local_1e0;
               memset(local_1e0 + lVar27, 0, ( (long)pVVar1 - lVar27 ) * 8);
            }
 else {
               if (pVVar23 != pVVar18) {
                  iVar12 = CowData<ObjectID>::_realloc(this_00, (long)pVVar23);
                  pVVar25 = pVVar23;
                  pCVar26 = this_00;
                  puVar20 = local_1e0;
                  if (iVar12 != 0) goto joined_r0x00112a4e;
               }

               puVar20 = local_1e0;
               if (local_1e0 == (undefined8*)0x0) {
                  _find_3d_items_at_pos(pCVar26, pVVar25);
                  return;
               }

            }

            LAB_00112ee6:puVar20[-1] = pVVar1;
            uVar19 = uVar28;
            if ((long)puVar20[-1] <= (long)uVar28) break;
         }
 while ( true );
      }

      puVar8 = local_1e0;
      LOCK();
      plVar14 = puVar20 + -2;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (*plVar14 == 0) {
         local_1e0 = (undefined8*)0x0;
         Memory::free_static(puVar8 + -2, false);
      }

   }

   LAB_00112f03:uVar15 = local_80._0_8_;
   if ((void*)local_80._0_8_ != (void*)0x0) {
      if (local_60._4_4_ != 0) {
         if (( &hash_table_size_primes )[local_60 & 0xffffffff] != 0) {
            memset((void*)local_70._8_8_, 0, ( ulong )(uint)(&hash_table_size_primes)[local_60 & 0xffffffff] * 4);
         }

         local_60 = local_60 & 0xffffffff;
      }

      Memory::free_static((void*)uVar15, false);
      Memory::free_static((void*)local_70._0_8_, false);
      Memory::free_static((void*)local_80._8_8_, false);
      Memory::free_static((void*)local_70._8_8_, false);
   }

   pvVar24 = pvStack_1c0;
   uVar15 = local_1d8._0_8_;
   if ((void*)local_1d8._0_8_ != (void*)0x0) {
      if (( iStack_1b4 != 0 ) && ( ( &hash_table_size_primes )[uStack_1b8] != 0 )) {
         memset(pvStack_1c0, 0, ( ulong )(uint)(&hash_table_size_primes)[uStack_1b8] * 4);
      }

      Memory::free_static((void*)uVar15, false);
      Memory::free_static(local_1c8, false);
      Memory::free_static((void*)local_1d8._8_8_, false);
      Memory::free_static(pvVar24, false);
   }

   LAB_00113002:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* RuntimeNodeSelect::_click_point() */void RuntimeNodeSelect::_click_point(RuntimeNodeSelect *this) {
   undefined8 uVar1;
   code *pcVar2;
   undefined8 uVar3;
   long *plVar4;
   int iVar5;
   Node *pNVar6;
   long lVar7;
   ulong uVar8;
   SelectResult *pSVar9;
   long lVar10;
   long lVar11;
   SelectResult *pSVar12;
   ulong uVar13;
   long lVar14;
   long lVar15;
   int iVar16;
   uint uVar17;
   SelectResult *pSVar18;
   SelectResult *pSVar19;
   ulong uVar20;
   SelectResult *pSVar21;
   long lVar22;
   long in_FS_OFFSET;
   bool bVar23;
   float fVar24;
   float fVar25;
   undefined4 uStack_f0;
   undefined4 uStack_e0;
   undefined4 uStack_c0;
   Array local_b8[8];
   undefined8 local_b0;
   Vector local_a8[8];
   SelectResult *local_a0;
   char *local_98;
   undefined8 local_90;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = *(undefined8*)( SceneTree::singleton + 0x368 );
   Viewport::get_screen_transform();
   Transform2D::affine_inverse();
   local_a0 = (SelectResult*)0x0;
   fVar24 = (float)*(undefined8*)( this + 0x2c0 );
   fVar25 = (float)( ( ulong ) * (undefined8*)( this + 0x2c0 ) >> 0x20 );
   local_80 = CONCAT44(SUB84(local_58._0_8_, 4) * fVar24 + SUB84(local_58._8_8_, 4) * fVar25 + SUB84(local_58._16_8_, 4), (float)local_58._8_8_ * fVar25 + (float)local_58._0_8_ * fVar24 + (float)local_58._16_8_);
   if (*(int*)( this + 0x2cc ) == 1) {
      for (iVar16 = 0; iVar5 = Node::get_child_count(SUB81(uVar1, 0)),iVar16 < iVar5; iVar16 = iVar16 + 1) {
         local_58[0] = 0x3f800000;
         local_58[1] = 0;
         local_58[2] = 0;
         local_58[3] = 0x3f800000;
         local_58[4] = 0;
         local_58[5] = 0;
         local_78 = 0x3f800000;
         local_70 = 0x3f80000000000000;
         local_68 = 0;
         pNVar6 = (Node*)Node::get_child((int)uVar1, SUB41(iVar16, 0));
         if (( pNVar6 != (Node*)0x0 ) && ( lVar7 = __dynamic_cast(pNVar6, &Object::typeinfo, &Viewport::typeinfo) ),lVar7 == 0) {
            _find_canvas_items_at_pos(this, (Vector2*)&local_80, pNVar6, local_a8, (Transform2D*)&local_78, (Transform2D*)local_58);
         }

      }

      if (local_a0 != (SelectResult*)0x0) {
         uVar17 = 0;
         lVar7 = 0;
         pSVar12 = local_a0;
         do {
            uVar20 = *(ulong*)( pSVar12 + -8 );
            if ((long)uVar20 <= lVar7) goto LAB_00113870;
            if ((int)uVar17 < 1) {
               LAB_00113d8b:uVar17 = uVar17 + 1;
               lVar7 = (long)(int)uVar17;
            }
 else {
               if ((long)uVar20 < 1) {
                  uVar13 = 0;
                  goto LAB_0011382d;
               }

               uVar8 = 1;
               while (*(long*)( pSVar12 + uVar8 * 0x10 + -0x10 ) != *(long*)( pSVar12 + (long)(int)uVar17 * 0x10 )) {
                  if (uVar8 == uVar17) goto LAB_00113d8b;
                  bVar23 = uVar20 == uVar8;
                  uVar8 = uVar8 + 1;
                  uVar13 = uVar20;
                  if (bVar23) goto LAB_0011382d;
               }
;
               CowData<RuntimeNodeSelect::SelectResult>::_copy_on_write((CowData<RuntimeNodeSelect::SelectResult>*)&local_a0);
               if (local_a0 == (SelectResult*)0x0) {
                  lVar22 = -1;
               }
 else {
                  lVar22 = *(long*)( local_a0 + -8 ) + -1;
               }

               if (lVar7 < lVar22) {
                  pSVar12 = local_a0 + lVar7 * 0x10;
                  do {
                     pSVar21 = pSVar12 + 0x10;
                     *(undefined8*)pSVar12 = *(undefined8*)( pSVar12 + 0x10 );
                     *(undefined4*)( pSVar12 + 8 ) = *(undefined4*)( pSVar12 + 0x18 );
                     pSVar12 = pSVar21;
                  }
 while ( pSVar21 != local_a0 + lVar22 * 0x10 );
               }

               CowData<RuntimeNodeSelect::SelectResult>::resize<false>((CowData<RuntimeNodeSelect::SelectResult>*)&local_a0, lVar22);
               pSVar12 = local_a0;
               lVar7 = (long)(int)uVar17;
            }

         }
 while ( pSVar12 != (SelectResult*)0x0 );
      }

      goto LAB_0011368d;
   }

   if (*(int*)( this + 0x2cc ) != 2) goto LAB_0011368d;
   _find_3d_items_at_pos(this, (Vector2*)&local_80, local_a8);
   pSVar12 = local_a0;
   LAB_00113870:if (pSVar12 == (SelectResult*)0x0) goto LAB_0011368d;
   lVar7 = *(long*)( pSVar12 + -8 );
   if (lVar7 == 0) {
      if (this[0x2c8] == (RuntimeNodeSelect)0x0) goto LAB_00113b72;
      LAB_00113ba8:if (*(long*)( this + 0x180 ) == 0) {
         LAB_00113bb6:_open_selection_list(this, local_a8, (Vector2*)&local_80);
         goto LAB_00113b20;
      }

   }
 else {
      CowData<RuntimeNodeSelect::SelectResult>::_copy_on_write((CowData<RuntimeNodeSelect::SelectResult>*)&local_a0);
      pSVar12 = local_a0;
      if (lVar7 == 1) {
         SortArray<RuntimeNodeSelect::SelectResult,_DefaultComparator<RuntimeNodeSelect::SelectResult>,true>::introsort(0, 1, local_a0, 0);
      }
 else {
         lVar14 = 0;
         lVar22 = lVar7;
         do {
            lVar22 = lVar22 >> 1;
            lVar14 = lVar14 + 1;
         }
 while ( lVar22 != 1 );
         SortArray<RuntimeNodeSelect::SelectResult,_DefaultComparator<RuntimeNodeSelect::SelectResult>,true>::introsort(0, lVar7, local_a0, lVar14 * 2);
         if (lVar7 < 0x11) {
            lVar22 = 1;
            pSVar21 = pSVar12 + 0x10;
            do {
               fVar24 = *(float*)( pSVar21 + 8 );
               uVar1 = *(undefined8*)pSVar21;
               uStack_f0 = ( undefined4 ) * (undefined8*)( pSVar21 + 8 );
               pSVar18 = pSVar21;
               if (fVar24 < *(float*)( pSVar12 + 8 ) || fVar24 == *(float*)( pSVar12 + 8 )) {
                  if (*(float*)( pSVar21 + -8 ) <= fVar24 && fVar24 != *(float*)( pSVar21 + -8 )) {
                     if (lVar22 + -1 != 0) {
                        lVar11 = lVar22 << 4;
                        lVar14 = lVar22 + -1;
                        do {
                           *(undefined8*)( pSVar12 + lVar11 ) = *(undefined8*)( pSVar12 + lVar11 + -0x10 );
                           *(undefined4*)( pSVar12 + lVar11 + 8 ) = *(undefined4*)( pSVar12 + lVar11 + -8 );
                           lVar10 = lVar14 + -1;
                           if (fVar24 < *(float*)( pSVar12 + lVar11 + -0x18 ) || fVar24 == *(float*)( pSVar12 + lVar11 + -0x18 )) {
                              pSVar18 = pSVar12 + lVar14 * 0x10;
                              goto LAB_00113d76;
                           }

                           lVar11 = lVar11 + -0x10;
                           lVar14 = lVar10;
                        }
 while ( lVar10 != 0 );
                     }

                     _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                     pSVar18 = pSVar12 + 0x10;
                  }

                  LAB_00113d76:*(undefined8*)pSVar18 = uVar1;
                  *(undefined4*)( pSVar18 + 8 ) = uStack_f0;
               }
 else {
                  do {
                     pSVar19 = pSVar18 + -0x10;
                     *(undefined8*)pSVar18 = *(undefined8*)( pSVar18 + -0x10 );
                     *(undefined4*)( pSVar18 + 8 ) = *(undefined4*)( pSVar18 + -8 );
                     pSVar18 = pSVar19;
                  }
 while ( pSVar19 != pSVar12 );
                  *(undefined8*)pSVar12 = uVar1;
                  *(undefined4*)( pSVar12 + 8 ) = uStack_f0;
               }

               lVar22 = lVar22 + 1;
               pSVar21 = pSVar21 + 0x10;
            }
 while ( lVar7 != lVar22 );
         }
 else {
            pSVar21 = pSVar12 + 0x10;
            lVar22 = 1;
            pSVar18 = pSVar21;
            do {
               fVar24 = *(float*)( pSVar18 + 8 );
               uVar1 = *(undefined8*)pSVar18;
               uStack_c0 = ( undefined4 ) * (undefined8*)( pSVar18 + 8 );
               pSVar19 = pSVar18;
               if (fVar24 < *(float*)( pSVar12 + 8 ) || fVar24 == *(float*)( pSVar12 + 8 )) {
                  if (*(float*)( pSVar18 + -8 ) <= fVar24 && fVar24 != *(float*)( pSVar18 + -8 )) {
                     if (lVar22 + -1 != 0) {
                        lVar11 = lVar22 << 4;
                        lVar14 = lVar22 + -1;
                        do {
                           *(undefined8*)( pSVar12 + lVar11 ) = *(undefined8*)( pSVar12 + lVar11 + -0x10 );
                           *(undefined4*)( pSVar12 + lVar11 + 8 ) = *(undefined4*)( pSVar12 + lVar11 + -8 );
                           lVar10 = lVar14 + -1;
                           if (fVar24 < *(float*)( pSVar12 + lVar11 + -0x18 ) || fVar24 == *(float*)( pSVar12 + lVar11 + -0x18 )) {
                              pSVar19 = pSVar12 + lVar14 * 0x10;
                              goto LAB_00113cd4;
                           }

                           lVar11 = lVar11 + -0x10;
                           lVar14 = lVar10;
                        }
 while ( lVar10 != 0 );
                     }

                     _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                     pSVar19 = pSVar21;
                  }

                  LAB_00113cd4:*(undefined8*)pSVar19 = uVar1;
                  *(undefined4*)( pSVar19 + 8 ) = uStack_c0;
               }
 else {
                  do {
                     pSVar9 = pSVar19 + -0x10;
                     *(undefined8*)pSVar19 = *(undefined8*)( pSVar19 + -0x10 );
                     *(undefined4*)( pSVar19 + 8 ) = *(undefined4*)( pSVar19 + -8 );
                     pSVar19 = pSVar9;
                  }
 while ( pSVar12 != pSVar9 );
                  *(undefined8*)pSVar12 = uVar1;
                  *(undefined4*)( pSVar12 + 8 ) = uStack_c0;
               }

               lVar22 = lVar22 + 1;
               pSVar18 = pSVar18 + 0x10;
            }
 while ( lVar22 != 0x10 );
            pSVar18 = pSVar12 + 0x100;
            lVar14 = -0x100;
            lVar22 = 0x10;
            do {
               fVar24 = *(float*)( pSVar18 + 8 );
               lVar10 = lVar22 << 4;
               uVar1 = *(undefined8*)pSVar18;
               uVar3 = *(undefined8*)( pSVar18 + 8 );
               lVar11 = lVar22 + -1;
               pSVar19 = pSVar18;
               if (*(float*)( pSVar18 + -8 ) <= fVar24 && fVar24 != *(float*)( pSVar18 + -8 )) {
                  do {
                     *(undefined8*)( pSVar12 + lVar10 ) = *(undefined8*)( pSVar18 + lVar10 + lVar14 + -0x10 );
                     *(undefined4*)( pSVar12 + lVar10 + 8 ) = *(undefined4*)( pSVar18 + lVar10 + lVar14 + -8 );
                     lVar15 = lVar11 + -1;
                     if (fVar24 < *(float*)( pSVar12 + lVar10 + -0x18 ) || fVar24 == *(float*)( pSVar12 + lVar10 + -0x18 )) {
                        pSVar19 = pSVar12 + lVar11 * 0x10;
                        goto LAB_001139ee;
                     }

                     lVar10 = lVar10 + -0x10;
                     lVar11 = lVar15;
                  }
 while ( lVar15 != 0 );
                  _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                  pSVar19 = pSVar21;
               }

               LAB_001139ee:lVar22 = lVar22 + 1;
               pSVar18 = pSVar18 + 0x10;
               lVar14 = lVar14 + -0x10;
               *(undefined8*)pSVar19 = uVar1;
               uStack_e0 = (undefined4)uVar3;
               *(undefined4*)( pSVar19 + 8 ) = uStack_e0;
            }
 while ( lVar7 != lVar22 );
         }

      }

      if (this[0x2c8] == (RuntimeNodeSelect)0x0) {
         LAB_00113b72:iVar16 = *(int*)( this + 0x2d0 );
         if (iVar16 != 0) {
            if (local_a0 == (SelectResult*)0x0) {
               if (iVar16 != 1) goto LAB_0011368d;
               goto LAB_00113e83;
            }

            if (*(long*)( local_a0 + -8 ) != 1) {
               pSVar12 = local_a0;
               if (iVar16 == 1) goto LAB_00113ba8;
               goto LAB_00113b31;
            }

         }

      }
 else {
         if (local_a0 == (SelectResult*)0x0) {
            LAB_00113e83:if (*(long*)( this + 0x180 ) != 0) goto LAB_0011368d;
            goto LAB_00113bb6;
         }

         pSVar12 = local_a0;
         if (*(long*)( local_a0 + -8 ) != 1) goto LAB_00113ba8;
      }

      Array::Array(local_b8);
      if (local_a0 == (SelectResult*)0x0) {
         uVar20 = 0;
         LAB_00113e49:uVar13 = 0;
         LAB_0011382d:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar13, uVar20, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      uVar20 = *(ulong*)( local_a0 + -8 );
      if ((long)uVar20 < 1) goto LAB_00113e49;
      local_98 = *(char**)( *(long*)local_a0 + 0x60 );
      Variant::Variant((Variant*)local_58, (ObjectID*)&local_98);
      Array::push_back((Variant*)local_b8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      plVar4 = EngineDebugger::singleton;
      local_b0 = 0;
      pcVar2 = *(code**)( *EngineDebugger::singleton + 8 );
      local_90 = 0x13;
      local_98 = "remote_node_clicked";
      String::parse_latin1((StrRange*)&local_b0);
      ( *pcVar2 )(plVar4, (StrRange*)&local_b0, local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
      Array::~Array(local_b8);
      LAB_00113b20:pSVar12 = local_a0;
      if (local_a0 == (SelectResult*)0x0) goto LAB_0011368d;
   }

   LAB_00113b31:pSVar21 = local_a0;
   LOCK();
   pSVar12 = pSVar12 + -0x10;
   *(long*)pSVar12 = *(long*)pSVar12 + -1;
   UNLOCK();
   if (*(long*)pSVar12 == 0) {
      local_a0 = (SelectResult*)0x0;
      Memory::free_static(pSVar21 + -0x10, false);
   }

   LAB_0011368d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RuntimeNodeSelect::_physics_frame() */void RuntimeNodeSelect::_physics_frame(RuntimeNodeSelect *this) {
   if (( (float)( *(uint*)( this + 0x2c0 ) & _LC234 ) <= __LC235 ) || ( (float)( *(uint*)( this + 0x2c4 ) & _LC234 ) <= __LC235 )) {
      _click_point(this);
      *(undefined8*)( this + 0x2c0 ) = _LC113;
   }

   return;
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
/* Object::_set(StringName const&, Variant const&) */undefined8 Object::_set(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_validate_property(PropertyInfo&) const */void Object::_validate_property(PropertyInfo *param_1) {
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
/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}
/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}
/* Engine::get_frames_per_second() const */undefined8 Engine::get_frames_per_second(Engine *this) {
   return *(undefined8*)( this + 0x38 );
}
/* BaseMaterial3D::_can_do_next_pass() const */undefined8 BaseMaterial3D::_can_do_next_pass(void) {
   return 1;
}
/* BaseMaterial3D::_can_use_render_priority() const */undefined8 BaseMaterial3D::_can_use_render_priority(void) {
   return 1;
}
/* StandardMaterial3D::is_class_ptr(void*) const */uint StandardMaterial3D::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x1222, in_RSI == &BaseMaterial3D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1222, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1223, in_RSI == &Material::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1223, in_RSI == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1223, in_RSI == &RefCounted::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* StandardMaterial3D::_getv(StringName const&, Variant&) const */undefined8 StandardMaterial3D::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* StandardMaterial3D::_property_can_revertv(StringName const&) const */undefined8 StandardMaterial3D::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* StandardMaterial3D::_property_get_revertv(StringName const&, Variant&) const */undefined8 StandardMaterial3D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* StandardMaterial3D::_notificationv(int, bool) */void StandardMaterial3D::_notificationv(int param_1, bool param_2) {
   return;
}
/* RuntimeNodeSelect::is_class_ptr(void*) const */uint RuntimeNodeSelect::is_class_ptr(RuntimeNodeSelect *this, void *param_1) {
   return (uint)CONCAT71(0x1223, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1222, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* RuntimeNodeSelect::_getv(StringName const&, Variant&) const */undefined8 RuntimeNodeSelect::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RuntimeNodeSelect::_setv(StringName const&, Variant const&) */undefined8 RuntimeNodeSelect::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RuntimeNodeSelect::_validate_propertyv(PropertyInfo&) const */void RuntimeNodeSelect::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* RuntimeNodeSelect::_property_can_revertv(StringName const&) const */undefined8 RuntimeNodeSelect::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* RuntimeNodeSelect::_property_get_revertv(StringName const&, Variant&) const */undefined8 RuntimeNodeSelect::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RuntimeNodeSelect::_notificationv(int, bool) */void RuntimeNodeSelect::_notificationv(int param_1, bool param_2) {
   return;
}
/* Script::get_constants(HashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName, Variant> >
   >*) */void Script::get_constants(HashMap *param_1) {
   return;
}
/* Script::get_members(HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >*) */void Script::get_members(HashSet *param_1) {
   return;
}
/* Shape2D::get_rect() const */undefined1[16];Shape2D::get_rect(void) {
   return ZEXT816(0);
}
/* CallableCustomMethodPointer<RuntimeNodeSelect, void, int,
   PopupMenu*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RuntimeNodeSelect,void,int,PopupMenu*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RuntimeNodeSelect,void,int,PopupMenu*> *this) {
   return;
}
/* CallableCustomMethodPointer<Viewport, void, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Viewport,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Viewport,void,bool> *this) {
   return;
}
/* CallableCustomMethodPointer<RuntimeNodeSelect, void, float, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RuntimeNodeSelect,void,float,Vector2,Ref<InputEvent>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RuntimeNodeSelect,void,float,Vector2,Ref<InputEvent>> *this) {
   return;
}
/* CallableCustomMethodPointer<RuntimeNodeSelect, void, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RuntimeNodeSelect,void,Vector2,Ref<InputEvent>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RuntimeNodeSelect,void,Vector2,Ref<InputEvent>> *this) {
   return;
}
/* CallableCustomMethodPointer<RuntimeNodeSelect, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RuntimeNodeSelect,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RuntimeNodeSelect,void> *this) {
   return;
}
/* CallableCustomMethodPointer<RuntimeNodeSelect, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RuntimeNodeSelect,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RuntimeNodeSelect,void,Ref<InputEvent>const&> *this) {
   return;
}
/* CallableCustomMethodPointer<SceneTree, void, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SceneTree,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SceneTree,void,bool> *this) {
   return;
}
/* CallableCustomStaticMethodPointer<void, Ref<InputEvent> const&, Ref<Shortcut>
   const&>::~CallableCustomStaticMethodPointer() */void CallableCustomStaticMethodPointer<void,Ref<InputEvent>const&,Ref<Shortcut>const&>::~CallableCustomStaticMethodPointer(CallableCustomStaticMethodPointer<void,Ref<InputEvent>const&,Ref<Shortcut>const&> *this) {
   return;
}
/* CallableCustomMethodPointer<RuntimeNodeSelect, void, int, PopupMenu*>::get_argument_count(bool&)
   const */undefined8 CallableCustomMethodPointer<RuntimeNodeSelect,void,int,PopupMenu*>::get_argument_count(CallableCustomMethodPointer<RuntimeNodeSelect,void,int,PopupMenu*> *this, bool *param_1) {
   *param_1 = true;
   return 2;
}
/* CallableCustomMethodPointer<Viewport, void, bool>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<Viewport,void,bool>::get_argument_count(CallableCustomMethodPointer<Viewport,void,bool> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<RuntimeNodeSelect, void, float, Vector2, Ref<InputEvent>
   >::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<RuntimeNodeSelect,void,float,Vector2,Ref<InputEvent>>::get_argument_count(CallableCustomMethodPointer<RuntimeNodeSelect,void,float,Vector2,Ref<InputEvent>> *this, bool *param_1) {
   *param_1 = true;
   return 3;
}
/* CallableCustomMethodPointer<RuntimeNodeSelect, void, Vector2, Ref<InputEvent>
   >::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<RuntimeNodeSelect,void,Vector2,Ref<InputEvent>>::get_argument_count(CallableCustomMethodPointer<RuntimeNodeSelect,void,Vector2,Ref<InputEvent>> *this, bool *param_1) {
   *param_1 = true;
   return 2;
}
/* CallableCustomMethodPointer<RuntimeNodeSelect, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<RuntimeNodeSelect,void>::get_argument_count(CallableCustomMethodPointer<RuntimeNodeSelect,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointer<RuntimeNodeSelect, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<RuntimeNodeSelect,void,Ref<InputEvent>const&>::get_argument_count(CallableCustomMethodPointer<RuntimeNodeSelect,void,Ref<InputEvent>const&> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<SceneTree, void, bool>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<SceneTree,void,bool>::get_argument_count(CallableCustomMethodPointer<SceneTree,void,bool> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomStaticMethodPointer<void, Ref<InputEvent> const&, Ref<Shortcut> const&>::is_valid()
   const */undefined8 CallableCustomStaticMethodPointer<void,Ref<InputEvent>const&,Ref<Shortcut>const&>::is_valid(void) {
   return 1;
}
/* CallableCustomStaticMethodPointer<void, Ref<InputEvent> const&, Ref<Shortcut>
   const&>::get_object() const */undefined8 CallableCustomStaticMethodPointer<void,Ref<InputEvent>const&,Ref<Shortcut>const&>::get_object(void) {
   return 0;
}
/* CallableCustomStaticMethodPointer<void, Ref<InputEvent> const&, Ref<Shortcut>
   const&>::get_argument_count(bool&) const */undefined8 CallableCustomStaticMethodPointer<void,Ref<InputEvent>const&,Ref<Shortcut>const&>::get_argument_count(CallableCustomStaticMethodPointer<void,Ref<InputEvent>const&,Ref<Shortcut>const&> *this, bool *param_1) {
   *param_1 = true;
   return 2;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* CallableCustomStaticMethodPointer<void, Ref<InputEvent> const&, Ref<Shortcut>
   const&>::~CallableCustomStaticMethodPointer() */void CallableCustomStaticMethodPointer<void,Ref<InputEvent>const&,Ref<Shortcut>const&>::~CallableCustomStaticMethodPointer(CallableCustomStaticMethodPointer<void,Ref<InputEvent>const&,Ref<Shortcut>const&> *this) {
   operator_delete(this, 0x30);
   return;
}
/* CallableCustomMethodPointer<SceneTree, void, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SceneTree,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SceneTree,void,bool> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<RuntimeNodeSelect, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RuntimeNodeSelect,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RuntimeNodeSelect,void,Ref<InputEvent>const&> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<RuntimeNodeSelect, void, float, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RuntimeNodeSelect,void,float,Vector2,Ref<InputEvent>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RuntimeNodeSelect,void,float,Vector2,Ref<InputEvent>> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<RuntimeNodeSelect, void, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RuntimeNodeSelect,void,Vector2,Ref<InputEvent>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RuntimeNodeSelect,void,Vector2,Ref<InputEvent>> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<RuntimeNodeSelect, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RuntimeNodeSelect,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RuntimeNodeSelect,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<Viewport, void, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Viewport,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Viewport,void,bool> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<RuntimeNodeSelect, void, int,
   PopupMenu*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RuntimeNodeSelect,void,int,PopupMenu*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RuntimeNodeSelect,void,int,PopupMenu*> *this) {
   operator_delete(this, 0x48);
   return;
}
/* StandardMaterial3D::~StandardMaterial3D() */void StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this) {
   *(undefined***)this = &PTR__initialize_classv_00121a90;
   BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D*)this);
   return;
}
/* StandardMaterial3D::~StandardMaterial3D() */void StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this) {
   *(undefined***)this = &PTR__initialize_classv_00121a90;
   BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D*)this);
   operator_delete(this, 0x558);
   return;
}
/* StandardMaterial3D::_setv(StringName const&, Variant const&) */undefined8 StandardMaterial3D::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__set_00127008 != Object::_set) {
      uVar1 = StandardMaterial3D::_set(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* CowData<Node*>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Node*>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<ObjectID>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<ObjectID>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<RuntimeNodeSelect::SelectResult>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<RuntimeNodeSelect::SelectResult>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RuntimeNodeSelect::_find_3d_items_at_pos(Vector2 const&,
   Vector<RuntimeNodeSelect::SelectResult>&) [clone .cold] */void RuntimeNodeSelect::_find_3d_items_at_pos(Vector2 *param_1, Vector *param_2) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* HashMap<Node*, HashMap<ObjectID, Node*, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, Node*> > >, HashMapHasherDefault,
   HashMapComparatorDefault<Node*>, DefaultTypedAllocator<HashMapElement<Node*, HashMap<ObjectID,
   Node*, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, Node*> > > > > >::_lookup_pos(Node* const&,
   unsigned int&) const [clone .isra.0] */undefined8 HashMap<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator < HashMapElement<ObjectID,Node*>>>>>>::_lookup_pos(HashMap<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault < ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>>> > *this, Node **param_1, uint *param_2) {
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
      uVar15 = CONCAT44(0, ( &hash_table_size_primes )[*(uint*)( this + 0x28 )]);
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
            if (( (uint)uVar13 == uVar14 ) && ( *(Node***)( *(long*)( *(long*)( this + 8 ) + lVar12 * 8 ) + 0x10 ) == param_1 )) {
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
            auVar5._0_8_ = ( ulong )(( ( &hash_table_size_primes )[*(uint*)( this + 0x28 )] + uVar11 ) - SUB164(auVar4 * auVar8, 8)) * lVar1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar15;
         }
 while ( uVar16 <= SUB164(auVar5 * auVar9, 8) );
         return 0;
      }

   }

   return 0;
}
/* CallableCustomMethodPointer<RuntimeNodeSelect, void, float, Vector2, Ref<InputEvent>
   >::get_object() const */undefined8 CallableCustomMethodPointer<RuntimeNodeSelect,void,float,Vector2,Ref<InputEvent>>::get_object(CallableCustomMethodPointer<RuntimeNodeSelect,void,float,Vector2,Ref<InputEvent>> *this) {
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
         goto LAB_00114b4d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00114b4d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00114b4d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<RuntimeNodeSelect, void, int, PopupMenu*>::get_object() const */undefined8 CallableCustomMethodPointer<RuntimeNodeSelect,void,int,PopupMenu*>::get_object(CallableCustomMethodPointer<RuntimeNodeSelect,void,int,PopupMenu*> *this) {
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
         goto LAB_00114c4d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00114c4d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00114c4d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<RuntimeNodeSelect, void, Ref<InputEvent> const&>::get_object() const
    */undefined8 CallableCustomMethodPointer<RuntimeNodeSelect,void,Ref<InputEvent>const&>::get_object(CallableCustomMethodPointer<RuntimeNodeSelect,void,Ref<InputEvent>const&> *this) {
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
         goto LAB_00114d4d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00114d4d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00114d4d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<RuntimeNodeSelect, void>::get_object() const */undefined8 CallableCustomMethodPointer<RuntimeNodeSelect,void>::get_object(CallableCustomMethodPointer<RuntimeNodeSelect,void> *this) {
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
         goto LAB_00114e4d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00114e4d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00114e4d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<SceneTree, void, bool>::get_object() const */undefined8 CallableCustomMethodPointer<SceneTree,void,bool>::get_object(CallableCustomMethodPointer<SceneTree,void,bool> *this) {
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
         goto LAB_00114f4d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00114f4d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00114f4d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<RuntimeNodeSelect, void, Vector2, Ref<InputEvent> >::get_object()
   const */undefined8 CallableCustomMethodPointer<RuntimeNodeSelect,void,Vector2,Ref<InputEvent>>::get_object(CallableCustomMethodPointer<RuntimeNodeSelect,void,Vector2,Ref<InputEvent>> *this) {
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
         goto LAB_0011504d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0011504d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0011504d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<Viewport, void, bool>::get_object() const */undefined8 CallableCustomMethodPointer<Viewport,void,bool>::get_object(CallableCustomMethodPointer<Viewport,void,bool> *this) {
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
         goto LAB_0011514d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0011514d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0011514d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* StandardMaterial3D::_validate_propertyv(PropertyInfo&) const */void StandardMaterial3D::_validate_propertyv(PropertyInfo *param_1) {
   Material::_validate_property(param_1);
   if ((code*)PTR__validate_property_00127010 == Material::_validate_property) {
      return;
   }

   BaseMaterial3D::_validate_property(param_1);
   return;
}
/* PlaceHolderScriptInstance::get_script() const */void PlaceHolderScriptInstance::get_script(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x80 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x80 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }

   }

   return;
}
/* Material::get_save_class() const */Material * __thiscall Material::get_save_class(Material *this){
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
/* Material::get_base_extension() const */Material * __thiscall Material::get_base_extension(Material *this){
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
/* WARNING: Removing unreachable block (ram,0x00116069) *//* WARNING: Removing unreachable block (ram,0x00115e78) *//* WARNING: Removing unreachable block (ram,0x00116030) *//* WARNING: Removing unreachable block (ram,0x00116040) *//* CallableCustomStaticMethodPointer<void, Ref<InputEvent> const&, Ref<Shortcut>
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */void CallableCustomStaticMethodPointer<void,Ref<InputEvent>const&,Ref<Shortcut>const&>::call(CallableCustomStaticMethodPointer<void,Ref<InputEvent>const&,Ref<Shortcut>const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   code *pcVar1;
   Variant *pVVar2;
   undefined8 uVar3;
   char cVar4;
   long lVar5;
   Object *pOVar6;
   Object *pOVar7;
   long in_FS_OFFSET;
   Object *local_40;
   Object *local_38;
   long local_30;
   pcVar1 = *(code**)( this + 0x28 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (2 < (uint)param_2) {
      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 2;
      goto LAB_00115dc3;
   }

   if (param_2 != 2) {
      *(undefined4*)param_4 = 4;
      *(undefined4*)( param_4 + 8 ) = 2;
      goto LAB_00115dc3;
   }

   pVVar2 = param_1[1];
   *(undefined4*)param_4 = 0;
   cVar4 = Variant::can_convert_strict(*(undefined4*)pVVar2);
   uVar3 = _LC12;
   if (cVar4 == '\0') {
      *(undefined4*)param_4 = 2;
      *(undefined8*)( param_4 + 4 ) = uVar3;
   }

   local_40 = (Object*)0x0;
   lVar5 = Variant::get_validated_object();
   if (( ( ( lVar5 != 0 ) && ( lVar5 != 0 ) ) && ( pOVar6 = (Object*)__dynamic_cast(lVar5, &Object::typeinfo, &Shortcut::typeinfo, 0) ),pOVar6 != (Object*)0x0 )) {
      local_40 = (Object*)0x0;
   }

   cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1);
   uVar3 = _LC13;
   if (cVar4 == '\0') {
      *(undefined4*)param_4 = 2;
      *(undefined8*)( param_4 + 4 ) = uVar3;
   }

   local_38 = (Object*)0x0;
   pOVar7 = (Object*)Variant::get_validated_object();
   pOVar6 = local_38;
   if (pOVar7 != local_38) {
      if (pOVar7 == (Object*)0x0) {
         if (local_38 != (Object*)0x0) {
            local_38 = (Object*)0x0;
            LAB_00115f0e:cVar4 = RefCounted::unreference();
            if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler(pOVar6) ),cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
               Memory::free_static(pOVar6, false);
            }

         }

      }
 else {
         pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &InputEvent::typeinfo, 0);
         if (pOVar6 != pOVar7) {
            local_38 = pOVar7;
            if (( pOVar7 != (Object*)0x0 ) && ( cVar4 = RefCounted::reference() ),cVar4 == '\0') {
               local_38 = (Object*)0x0;
            }

            if (pOVar6 != (Object*)0x0) goto LAB_00115f0e;
         }

      }

   }

   ( *pcVar1 )(&local_38);
   if (( ( local_38 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar6 = local_38,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
   Memory::free_static(pOVar6, false);
}
if (( ( local_40 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)local_40 + 0x140 ))(local_40);Memory::free_static(local_40, false);}LAB_00115dc3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CallableCustomMethodPointerBase::get_as_text() const */void CallableCustomMethodPointerBase::get_as_text(void) {
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
/* RuntimeNodeSelect::_get_class_namev() const */undefined8 *RuntimeNodeSelect::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00116153:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00116153;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RuntimeNodeSelect");
         goto LAB_001161be;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RuntimeNodeSelect");
   LAB_001161be:return &_get_class_namev();
}
/* StandardMaterial3D::_get_class_namev() const */undefined8 *StandardMaterial3D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00116243:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00116243;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "StandardMaterial3D");
         goto LAB_001162ae;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "StandardMaterial3D");
   LAB_001162ae:return &_get_class_namev();
}
/* RuntimeNodeSelect::get_class() const */void RuntimeNodeSelect::get_class(void) {
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
/* StandardMaterial3D::get_class() const */void StandardMaterial3D::get_class(void) {
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
/* RuntimeNodeSelect::is_class(String const&) const */undefined8 RuntimeNodeSelect::is_class(RuntimeNodeSelect *this, String *param_1) {
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
      }
 else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_0011650f;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0011650f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_001165c3;
   }

   cVar6 = String::operator ==(param_1, "RuntimeNodeSelect");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         }
 else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
               }

            }
 else {
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

         if (cVar6 != '\0') goto LAB_001165c3;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar8 = String::operator ==(param_1, "Object");
         return uVar8;
      }

   }
 else {
      LAB_001165c3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

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
/* PropertyInfo::PropertyInfo(PropertyInfo const&) */void PropertyInfo::PropertyInfo(PropertyInfo *this, PropertyInfo *param_1) {
   undefined4 uVar1;
   long lVar2;
   uVar1 = *(undefined4*)param_1;
   *(undefined8*)( this + 8 ) = 0;
   lVar2 = *(long*)( param_1 + 8 );
   *(undefined4*)this = uVar1;
   if (lVar2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 8 ), (CowData*)( param_1 + 8 ));
   }

   StringName::StringName((StringName*)( this + 0x10 ), (StringName*)( param_1 + 0x10 ));
   uVar1 = *(undefined4*)( param_1 + 0x18 );
   *(undefined8*)( this + 0x20 ) = 0;
   lVar2 = *(long*)( param_1 + 0x20 );
   *(undefined4*)( this + 0x18 ) = uVar1;
   if (lVar2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)( param_1 + 0x20 ));
   }

   *(undefined4*)( this + 0x28 ) = *(undefined4*)( param_1 + 0x28 );
   return;
}
/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)( this + 0x20 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x20 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x20 );
         *(undefined8*)( this + 0x20 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x10 ) != 0 )) {
      StringName::unref();
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
         return;
      }

   }

   return;
}
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(PropertyInfo *this, undefined4 param_2, CowData *param_3, int param_4, CowData *param_5, undefined4 param_6, StringName *param_7) {
   long lVar1;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 8 ) = 0;
   lVar1 = *(long*)param_3;
   *(undefined4*)this = param_2;
   if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 8 ), param_3);
   }

   *(undefined8*)( this + 0x20 ) = 0;
   lVar1 = *(long*)param_5;
   *(undefined8*)( this + 0x10 ) = 0;
   *(int*)( this + 0x18 ) = param_4;
   if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), param_5);
      param_4 = *(int*)( this + 0x18 );
   }

   *(undefined4*)( this + 0x28 ) = param_6;
   if (param_4 == 0x11) {
      StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
      if (*(long*)( this + 0x10 ) == local_48) {
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(long*)( this + 0x10 ) = local_48;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      StringName::operator =((StringName*)( this + 0x10 ), param_7);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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
      }
 else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_001169ef;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_001169ef:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00116aa3;
   }

   cVar6 = String::operator ==(param_1, "RefCounted");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         }
 else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
               }

            }
 else {
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

         if (cVar6 != '\0') goto LAB_00116aa3;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar8 = String::operator ==(param_1, "Object");
         return uVar8;
      }

   }
 else {
      LAB_00116aa3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Resource::is_class(String const&) const */undefined8 Resource::is_class(Resource *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   long lVar4;
   char cVar5;
   long lVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar3 = *(long*)( lVar2 + 0x20 );
      if (lVar3 == 0) {
         local_60 = 0;
      }
 else {
         __s = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_00116c5f;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar8 = lVar4 == lVar6;
                  if (bVar8) {
                     *plVar1 = lVar4 + 1;
                     lVar6 = lVar4;
                  }

                  UNLOCK();
               }
 while ( !bVar8 );
               if (lVar6 != -1) {
                  local_60 = *(long*)( lVar3 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_00116c5f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00116d13;
   }

   cVar5 = String::operator ==(param_1, "Resource");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00116d13:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* BaseMaterial3D::is_class(String const&) const */undefined8 BaseMaterial3D::is_class(BaseMaterial3D *this, String *param_1) {
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
      }
 else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_00116def;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_00116def:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00116ea3;
   }

   cVar6 = String::operator ==(param_1, "BaseMaterial3D");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         }
 else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
               }

            }
 else {
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

         if (cVar6 != '\0') goto LAB_00116ea3;
      }

      cVar6 = String::operator ==(param_1, "Material");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar8 = Resource::is_class((Resource*)this, param_1);
            return uVar8;
         }

         goto LAB_00116fe8;
      }

   }

   LAB_00116ea3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00116fe8:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* StandardMaterial3D::is_class(String const&) const */undefined8 StandardMaterial3D::is_class(StandardMaterial3D *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   long lVar4;
   char cVar5;
   long lVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar3 = *(long*)( lVar2 + 0x20 );
      if (lVar3 == 0) {
         local_60 = 0;
      }
 else {
         __s = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_0011705f;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar8 = lVar4 == lVar6;
                  if (bVar8) {
                     *plVar1 = lVar4 + 1;
                     lVar6 = lVar4;
                  }

                  UNLOCK();
               }
 while ( !bVar8 );
               if (lVar6 != -1) {
                  local_60 = *(long*)( lVar3 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0011705f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00117113;
   }

   cVar5 = String::operator ==(param_1, "StandardMaterial3D");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = BaseMaterial3D::is_class((BaseMaterial3D*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00117113:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* LocalVector<Variant, unsigned int, false, false>::resize(unsigned int) */void LocalVector<Variant,unsigned_int,false,false>::resize(LocalVector<Variant,unsigned_int,false,false> *this, uint param_1) {
   code *pcVar1;
   undefined4 *puVar2;
   uint uVar3;
   long lVar4;
   uint uVar5;
   uVar5 = *(uint*)this;
   if (param_1 < uVar5) {
      lVar4 = (ulong)param_1 * 0x18;
      uVar5 = param_1;
      do {
         if (Variant::needs_deinit[*(int*)( *(long*)( this + 8 ) + lVar4 )] != '\0') {
            Variant::_clear_internal();
         }

         uVar5 = uVar5 + 1;
         lVar4 = lVar4 + 0x18;
      }
 while ( uVar5 < *(uint*)this );
   }
 else {
      if (param_1 <= uVar5) {
         return;
      }

      uVar3 = param_1 - 1;
      if (*(uint*)( this + 4 ) < param_1) {
         uVar5 = uVar3 >> 1 | uVar3;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = ( uVar5 | uVar5 >> 0x10 ) + 1;
         *(uint*)( this + 4 ) = uVar5;
         lVar4 = Memory::realloc_static(*(void**)( this + 8 ), (ulong)uVar5 * 0x18, false);
         *(long*)( this + 8 ) = lVar4;
         if (lVar4 == 0) {
            _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         uVar5 = *(uint*)this;
         if (param_1 <= uVar5) goto LAB_0011721e;
      }

      lVar4 = (ulong)uVar5 * 0x18;
      do {
         puVar2 = (undefined4*)( *(long*)( this + 8 ) + lVar4 );
         lVar4 = lVar4 + 0x18;
         *puVar2 = 0;
         *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
      }
 while ( ( (ulong)uVar5 + 1 + ( ulong )(uVar3 - uVar5) ) * 0x18 != lVar4 );
   }

   LAB_0011721e:*(uint*)this = param_1;
   return;
}
/* LocalVector<Variant*, unsigned int, false, false>::resize(unsigned int) */void LocalVector<Variant*,unsigned_int,false,false>::resize(LocalVector<Variant*,unsigned_int,false,false> *this, uint param_1) {
   code *pcVar1;
   uint uVar2;
   long lVar3;
   if (*(uint*)this <= param_1) {
      if (param_1 <= *(uint*)this) {
         return;
      }

      if (*(uint*)( this + 4 ) < param_1) {
         uVar2 = param_1 - 1 | param_1 - 1 >> 1;
         uVar2 = uVar2 | uVar2 >> 2;
         uVar2 = uVar2 | uVar2 >> 4;
         uVar2 = uVar2 | uVar2 >> 8;
         uVar2 = ( uVar2 | uVar2 >> 0x10 ) + 1;
         *(uint*)( this + 4 ) = uVar2;
         lVar3 = Memory::realloc_static(*(void**)( this + 8 ), (ulong)uVar2 * 8, false);
         *(long*)( this + 8 ) = lVar3;
         if (lVar3 == 0) {
            _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

      }

   }

   *(uint*)this = param_1;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<Node*, HashMapHasherDefault, HashMapComparatorDefault<Node*> >::insert(Node* const&) */undefined1[16];HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>::insert(Node **param_1) {
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
   Node *local_88;
   ulong local_70;
   uVar32 = *(uint*)( in_RSI + 4 );
   uVar31 = ( &hash_table_size_primes )[uVar32];
   local_88 = (Node*)*in_RSI;
   if (local_88 == (Node*)0x0) {
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
      uVar32 = *(uint*)( in_RSI + 4 );
      lVar34 = *in_RDX;
      local_88 = (Node*)*in_RSI;
      if (local_88 != (Node*)0x0) goto LAB_001174df;
   }
 else {
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      lVar34 = *in_RDX;
      LAB_001174df:if (uVar44 != 0) {
         uVar43 = CONCAT44(0, ( &hash_table_size_primes )[uVar32]);
         lVar3 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
         uVar33 = lVar34 * 0x3ffff - 1;
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
                  if (*(long*)( local_88 + uStack_98 * 8 ) == lVar34) goto LAB_00117981;
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
 while ( ( uVar37 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = uVar33 * lVar3,auVar21._8_8_ = 0,auVar21._0_8_ = uVar43,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(uint)(( ( &hash_table_size_primes )[uVar32] + iVar35 ) - SUB164(auVar9 * auVar21, 8)) * lVar3,auVar22._8_8_ = 0,auVar22._0_8_ = uVar43,uVar39 <= SUB164(auVar10 * auVar22, 8) );
         }

      }

   }

   if ((float)uVar31 * __LC70 < (float)( uVar44 + 1 )) {
      if (uVar32 == 0x1c) {
         uStack_98 = 0;
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
         uVar44 = *(uint*)( (long)in_RSI + 0x24 );
         uVar37 = 0xffffffff;
         local_88 = (Node*)*in_RSI;
         goto LAB_00117981;
      }

      uVar33 = ( ulong )(uVar32 + 1);
      if (uVar32 + 1 < 2) {
         uVar33 = 2;
      }

      uVar31 = ( &hash_table_size_primes )[uVar33];
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
            uVar32 = ( &hash_table_size_primes )[*(uint*)( in_RSI + 4 )];
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
      local_88 = (Node*)*in_RSI;
      lVar34 = *in_RDX;
   }

   uVar42 = (ulong)uVar44;
   lVar3 = in_RSI[3];
   *(long*)( local_88 + uVar42 * 8 ) = lVar34;
   uVar33 = lVar34 * 0x3ffff - 1;
   uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
   uVar33 = ( uVar33 ^ uVar33 >> 0xb ) * 0x41;
   uVar33 = uVar33 >> 0x16 ^ uVar33;
   uVar43 = uVar33 & 0xffffffff;
   if ((int)uVar33 == 0) {
      uVar43 = 1;
   }

   uVar37 = 0;
   uVar31 = ( &hash_table_size_primes )[uVar32];
   uVar40 = CONCAT44(0, uVar31);
   uVar39 = (uint)uVar43;
   lVar36 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
   auVar15._8_8_ = 0;
   auVar15._0_8_ = uVar43 * lVar36;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar40;
   lVar34 = SUB168(auVar15 * auVar27, 8) * 4;
   iVar35 = SUB164(auVar15 * auVar27, 8);
   lVar2 = in_RSI[2];
   puVar1 = (uint*)( lVar3 + lVar34 );
   uVar33 = in_RSI[1];
   uVar32 = *puVar1;
   uStack_98 = uVar33;
   uVar38 = uVar42;
   while (uVar32 != 0) {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)uVar32 * lVar36;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar40;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ( ulong )(( uVar31 + iVar35 ) - SUB164(auVar16 * auVar28, 8)) * lVar36;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      uVar32 = SUB164(auVar17 * auVar29, 8);
      if (uVar32 < uVar37) {
         *(int*)( lVar2 + uVar42 * 4 ) = iVar35;
         uVar44 = *puVar1;
         *puVar1 = (uint)uVar43;
         uVar39 = *(uint*)( lVar34 + uVar33 );
         uVar43 = (ulong)uVar44;
         *(uint*)( lVar34 + uVar33 ) = (uint)uVar38;
         uVar42 = (ulong)uVar39;
         uVar38 = uVar42;
         uVar37 = uVar32;
      }

      uVar44 = (uint)uVar38;
      uVar39 = (uint)uVar43;
      uVar37 = uVar37 + 1;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = ( ulong )(iVar35 + 1) * lVar36;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar40;
      uStack_98 = SUB168(auVar18 * auVar30, 8);
      lVar34 = uStack_98 * 4;
      iVar35 = SUB164(auVar18 * auVar30, 8);
      puVar1 = (uint*)( lVar3 + lVar34 );
      uVar32 = *puVar1;
   }
;
   *puVar1 = uVar39;
   *(int*)( lVar2 + uVar42 * 4 ) = iVar35;
   *(uint*)( uVar33 + lVar34 ) = uVar44;
   uVar37 = *(uint*)( (long)in_RSI + 0x24 );
   uVar44 = uVar37 + 1;
   *(uint*)( (long)in_RSI + 0x24 ) = uVar44;
   LAB_00117981:*(uint*)( (long)param_1 + 0xc ) = uVar37;
   *param_1 = local_88;
   *(uint*)( param_1 + 1 ) = uVar44;
   auVar45._8_8_ = uStack_98;
   auVar45._0_8_ = param_1;
   return auVar45;
}
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::TEMPNAMEPLACEHOLDERVALUE(HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> > const&) */void HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::operator =(HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this, HashSet *param_1) {
   ulong uVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   undefined8 uVar6;
   ulong uVar7;
   long lVar8;
   void *pvVar9;
   if (this == (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)param_1) {
      return;
   }

   pvVar9 = *(void**)this;
   if (pvVar9 != (void*)0x0) {
      if (( *(int*)( this + 0x24 ) != 0 ) && ( ( ( &hash_table_size_primes )[*(uint*)( this + 0x20 )] == 0 || ( memset(*(void**)( this + 0x18 ), 0, ( ulong )(uint)(&hash_table_size_primes)[*(uint*)( this + 0x20 )] << 2),*(int*)( this + 0x24 ) != 0 ) ) )) {
         lVar8 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + lVar8 * 8 ) != 0 )) {
               StringName::unref();
               pvVar9 = *(void**)this;
            }

            lVar8 = lVar8 + 1;
         }
 while ( (uint)lVar8 < *(uint*)( this + 0x24 ) );
         *(undefined4*)( this + 0x24 ) = 0;
         if (pvVar9 == (void*)0x0) goto LAB_00117b44;
      }

      Memory::free_static(pvVar9, false);
      Memory::free_static(*(void**)( this + 0x10 ), false);
      Memory::free_static(*(void**)( this + 8 ), false);
      Memory::free_static(*(void**)( this + 0x18 ), false);
      *(undefined1(*) [16])this = (undefined1[16])0x0;
      *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   }

   LAB_00117b44:uVar1 = *(ulong*)( param_1 + 0x20 );
   *(ulong*)( this + 0x20 ) = uVar1;
   if ((int)( uVar1 >> 0x20 ) != 0) {
      uVar2 = ( &hash_table_size_primes )[uVar1 & 0xffffffff];
      uVar1 = (ulong)uVar2 * 4;
      uVar6 = Memory::alloc_static(uVar1, false);
      lVar8 = 0;
      *(undefined8*)( this + 0x18 ) = uVar6;
      uVar6 = Memory::alloc_static((ulong)uVar2 * 8, false);
      *(undefined8*)this = uVar6;
      uVar6 = Memory::alloc_static(uVar1, false);
      *(undefined8*)( this + 0x10 ) = uVar6;
      uVar6 = Memory::alloc_static(uVar1, false);
      *(undefined8*)( this + 8 ) = uVar6;
      if (*(int*)( this + 0x24 ) != 0) {
         do {
            StringName::StringName((StringName*)( lVar8 * 8 + *(long*)this ), (StringName*)( *(long*)param_1 + lVar8 * 8 ));
            *(undefined4*)( *(long*)( this + 0x10 ) + lVar8 * 4 ) = *(undefined4*)( *(long*)( param_1 + 0x10 ) + lVar8 * 4 );
            lVar8 = lVar8 + 1;
         }
 while ( (uint)lVar8 < *(uint*)( this + 0x24 ) );
      }

      if (uVar2 != 0) {
         lVar8 = *(long*)( param_1 + 0x18 );
         lVar3 = *(long*)( this + 0x18 );
         uVar7 = 0;
         lVar4 = *(long*)( param_1 + 8 );
         lVar5 = *(long*)( this + 8 );
         do {
            *(undefined4*)( lVar3 + uVar7 ) = *(undefined4*)( lVar8 + uVar7 );
            *(undefined4*)( lVar5 + uVar7 ) = *(undefined4*)( lVar4 + uVar7 );
            uVar7 = uVar7 + 4;
         }
 while ( uVar7 != uVar1 );
         return;
      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<Script const*, HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >, HashMapHasherDefault, HashMapComparatorDefault<Script
   const*>, DefaultTypedAllocator<HashMapElement<Script const*, HashSet<StringName,
   HashMapHasherDefault, HashMapComparatorDefault<StringName> > > > >::operator[](Script const*
   const&) */undefined1 * __thiscallHashMap<Script_const*,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<Script_const*>,DefaultTypedAllocator<HashMapElement<Script_const*,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>::operator [](HashMap<Script_const*,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<Script_const*>,DefaultTypedAllocator<HashMapElement<Script_const*,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault < StringName>>>> > *this, Script * *param_1) * puVar1 ;undefined8 *puVar2long lVar3void *pvVar4void *__sundefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]undefined1(*pauVar37)[16];undefined8 uVar38uint uVar39ulong uVar40ulong uVar41undefined8 uVar42void *__s_00undefined1(*pauVar43)[16];uint uVar44int iVar45long lVar46long lVar47undefined8 uVar48uint uVar49uint uVar50uint uVar51ulong uVar52uint uVar53ulong uVar54long lVar55ulong uVar56Script *pSVar57undefined1(*pauVar58)[16];long in_FS_OFFSETvoid *local_a8HashSet local_68[16]undefined1 local_58[16]undefined8 local_48long local_40uVar38 = _LC25;local_a8 = *(void**)( this + 8 );pSVar57 = *param_1;local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar41 = ( ulong ) * (uint*)( this + 0x28 );uVar49 = ( &hash_table_size_primes )[uVar41];uVar56 = CONCAT44(0, uVar49);if (local_a8 == (void*)0x0) {
   uVar41 = uVar56 * 4;
   for (int i = 0; i < 16; i++) {
      local_68[i] = (HashSet)0;
   }

   uVar40 = uVar56 * 8;
   local_58 = (undefined1[16])0x0;
   local_48 = _LC25;
   uVar42 = Memory::alloc_static(uVar41, false);
   *(undefined8*)( this + 0x10 ) = uVar42;
   local_a8 = (void*)Memory::alloc_static(uVar40, false);
   *(void**)( this + 8 ) = local_a8;
   if (uVar49 == 0) {
      iVar45 = *(int*)( this + 0x2c );
      pSVar57 = *param_1;
      if (local_a8 == (void*)0x0) goto LAB_00117fab;
   }
 else {
      pvVar4 = *(void**)( this + 0x10 );
      if (( pvVar4 < (void*)( (long)local_a8 + uVar40 ) ) && ( local_a8 < (void*)( (long)pvVar4 + uVar41 ) )) {
         uVar41 = 0;
         do {
            *(undefined4*)( (long)pvVar4 + uVar41 * 4 ) = 0;
            *(undefined8*)( (long)local_a8 + uVar41 * 8 ) = 0;
            uVar41 = uVar41 + 1;
         }
 while ( uVar56 != uVar41 );
         iVar45 = *(int*)( this + 0x2c );
         pSVar57 = *param_1;
      }
 else {
         memset(pvVar4, 0, uVar41);
         memset(local_a8, 0, uVar40);
         iVar45 = *(int*)( this + 0x2c );
         pSVar57 = *param_1;
      }

   }

   if (iVar45 != 0) {
      uVar41 = ( ulong ) * (uint*)( this + 0x28 );
      lVar55 = *(long*)( this + 0x10 );
      goto LAB_00117e9a;
   }

}
 else {
   iVar45 = *(int*)( this + 0x2c );
   if (iVar45 == 0) {
      local_48 = _LC25;
      for (int i = 0; i < 16; i++) {
         local_68[i] = (HashSet)0;
      }

      local_58 = (undefined1[16])0x0;
   }
 else {
      lVar55 = *(long*)( this + 0x10 );
      lVar3 = *(long*)( hash_table_size_primes_inv + uVar41 * 8 );
      uVar40 = (long)pSVar57 * 0x3ffff - 1;
      uVar40 = ( uVar40 ^ uVar40 >> 0x1f ) * 0x15;
      uVar40 = ( uVar40 ^ uVar40 >> 0xb ) * 0x41;
      uVar40 = uVar40 >> 0x16 ^ uVar40;
      uVar54 = uVar40 & 0xffffffff;
      if ((int)uVar40 == 0) {
         uVar54 = 1;
      }

      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar54 * lVar3;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar56;
      lVar46 = SUB168(auVar5 * auVar21, 8);
      uVar44 = *(uint*)( lVar55 + lVar46 * 4 );
      uVar53 = SUB164(auVar5 * auVar21, 8);
      if (uVar44 != 0) {
         uVar51 = 0;
         do {
            if (( (uint)uVar54 == uVar44 ) && ( pSVar57 == *(Script**)( *(long*)( (long)local_a8 + lVar46 * 8 ) + 0x10 ) )) {
               pauVar43 = *(undefined1(**) [16])( (long)local_a8 + (ulong)uVar53 * 8 );
               goto LAB_00117e4b;
            }

            uVar51 = uVar51 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(uVar53 + 1) * lVar3;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar56;
            lVar46 = SUB168(auVar6 * auVar22, 8);
            uVar44 = *(uint*)( lVar55 + lVar46 * 4 );
            uVar53 = SUB164(auVar6 * auVar22, 8);
         }
 while ( ( uVar44 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar44 * lVar3,auVar23._8_8_ = 0,auVar23._0_8_ = uVar56,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar49 + uVar53 ) - SUB164(auVar7 * auVar23, 8)) * lVar3,auVar24._8_8_ = 0,auVar24._0_8_ = uVar56,uVar51 <= SUB164(auVar8 * auVar24, 8) );
      }

      for (int i = 0; i < 16; i++) {
         local_68[i] = (HashSet)0;
      }

      local_48 = _LC25;
      local_58 = (undefined1[16])0x0;
      LAB_00117e9a:uVar52 = CONCAT44(0, ( &hash_table_size_primes )[uVar41]);
      lVar3 = *(long*)( hash_table_size_primes_inv + uVar41 * 8 );
      uVar40 = (long)pSVar57 * 0x3ffff - 1;
      uVar40 = ( uVar40 ^ uVar40 >> 0x1f ) * 0x15;
      uVar40 = ( uVar40 ^ uVar40 >> 0xb ) * 0x41;
      uVar40 = uVar40 >> 0x16 ^ uVar40;
      uVar54 = uVar40 & 0xffffffff;
      if ((int)uVar40 == 0) {
         uVar54 = 1;
      }

      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar54 * lVar3;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar52;
      lVar46 = SUB168(auVar9 * auVar25, 8);
      uVar49 = *(uint*)( lVar55 + lVar46 * 4 );
      uVar44 = SUB164(auVar9 * auVar25, 8);
      if (uVar49 != 0) {
         uVar53 = 0;
         do {
            if (( uVar49 == (uint)uVar54 ) && ( *(Script**)( *(long*)( (long)local_a8 + lVar46 * 8 ) + 0x10 ) == pSVar57 )) {
               HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::operator =((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( *(long*)( (long)local_a8 + (ulong)uVar44 * 8 ) + 0x18 ), local_68);
               pauVar43 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar44 * 8 );
               goto LAB_00117e4b;
            }

            uVar53 = uVar53 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = ( ulong )(uVar44 + 1) * lVar3;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar52;
            lVar46 = SUB168(auVar10 * auVar26, 8);
            uVar49 = *(uint*)( lVar55 + lVar46 * 4 );
            uVar44 = SUB164(auVar10 * auVar26, 8);
         }
 while ( ( uVar49 != 0 ) && ( auVar11._8_8_ = 0 ),auVar11._0_8_ = (ulong)uVar49 * lVar3,auVar27._8_8_ = 0,auVar27._0_8_ = uVar52,auVar12._8_8_ = 0,auVar12._0_8_ = ( ulong )(( ( &hash_table_size_primes )[uVar41] + uVar44 ) - SUB164(auVar11 * auVar27, 8)) * lVar3,auVar28._8_8_ = 0,auVar28._0_8_ = uVar52,uVar53 <= SUB164(auVar12 * auVar28, 8) );
      }

   }

}
LAB_00117fab:if ((float)uVar56 * __LC70 < (float)( iVar45 + 1 )) {
   uVar49 = *(uint*)( this + 0x28 );
   if (uVar49 == 0x1c) {
      pauVar43 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_00117e4b;
   }

   uVar41 = ( ulong )(uVar49 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar44 = ( &hash_table_size_primes )[uVar49];
   if (uVar49 + 1 < 2) {
      uVar41 = 2;
   }

   uVar49 = ( &hash_table_size_primes )[uVar41];
   uVar40 = (ulong)uVar49;
   *(int*)( this + 0x28 ) = (int)uVar41;
   pvVar4 = *(void**)( this + 0x10 );
   uVar41 = uVar40 * 4;
   uVar56 = uVar40 * 8;
   uVar42 = Memory::alloc_static(uVar41, false);
   *(undefined8*)( this + 0x10 ) = uVar42;
   __s_00 = (void*)Memory::alloc_static(uVar56, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar49 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar56 ) ) && ( __s_00 < (void*)( (long)__s + uVar41 ) )) {
         uVar41 = 0;
         do {
            *(undefined4*)( (long)__s + uVar41 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar41 * 8 ) = 0;
            uVar41 = uVar41 + 1;
         }
 while ( uVar40 != uVar41 );
      }
 else {
         memset(__s, 0, uVar41);
         memset(__s_00, 0, uVar56);
      }

   }

   if (uVar44 != 0) {
      uVar41 = 0;
      do {
         uVar49 = *(uint*)( (long)pvVar4 + uVar41 * 4 );
         if (uVar49 != 0) {
            lVar55 = *(long*)( this + 0x10 );
            uVar50 = 0;
            uVar53 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
            uVar56 = CONCAT44(0, uVar53);
            lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar49 * lVar3;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar56;
            lVar46 = SUB168(auVar13 * auVar29, 8);
            puVar1 = (uint*)( lVar55 + lVar46 * 4 );
            iVar45 = SUB164(auVar13 * auVar29, 8);
            uVar51 = *puVar1;
            uVar42 = *(undefined8*)( (long)local_a8 + uVar41 * 8 );
            while (uVar51 != 0) {
               auVar14._8_8_ = 0;
               auVar14._0_8_ = (ulong)uVar51 * lVar3;
               auVar30._8_8_ = 0;
               auVar30._0_8_ = uVar56;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = ( ulong )(( uVar53 + iVar45 ) - SUB164(auVar14 * auVar30, 8)) * lVar3;
               auVar31._8_8_ = 0;
               auVar31._0_8_ = uVar56;
               uVar39 = SUB164(auVar15 * auVar31, 8);
               uVar48 = uVar42;
               if (uVar39 < uVar50) {
                  *puVar1 = uVar49;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar46 * 8 );
                  uVar48 = *puVar2;
                  *puVar2 = uVar42;
                  uVar49 = uVar51;
                  uVar50 = uVar39;
               }

               uVar50 = uVar50 + 1;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = ( ulong )(iVar45 + 1) * lVar3;
               auVar32._8_8_ = 0;
               auVar32._0_8_ = uVar56;
               lVar46 = SUB168(auVar16 * auVar32, 8);
               puVar1 = (uint*)( lVar55 + lVar46 * 4 );
               iVar45 = SUB164(auVar16 * auVar32, 8);
               uVar42 = uVar48;
               uVar51 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar46 * 8 ) = uVar42;
            *puVar1 = uVar49;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar41 = uVar41 + 1;
      }
 while ( uVar41 != uVar44 );
      Memory::free_static(local_a8, false);
      Memory::free_static(pvVar4, false);
   }

}
pSVar57 = *param_1;pauVar43 = (undefined1(*) [16])operator_new(0x40, "");*pauVar43 = (undefined1[16])0x0;*(Script**)pauVar43[1] = pSVar57;*(undefined8*)( pauVar43[1] + 8 ) = 0;*(undefined8*)pauVar43[2] = 0;*(undefined8*)( pauVar43[2] + 8 ) = 0;*(undefined8*)pauVar43[3] = 0;*(undefined8*)( pauVar43[3] + 8 ) = uVar38;puVar2 = *(undefined8**)( this + 0x20 );if (puVar2 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar43;
}
 else {
   *puVar2 = pauVar43;
   *(undefined8**)( *pauVar43 + 8 ) = puVar2;
}
lVar55 = *(long*)( this + 0x10 );*(undefined1(**) [16])( this + 0x20 ) = pauVar43;uVar41 = (long)*param_1 * 0x3ffff - 1;uVar41 = ( uVar41 ^ uVar41 >> 0x1f ) * 0x15;uVar41 = ( uVar41 ^ uVar41 >> 0xb ) * 0x41;uVar41 = uVar41 >> 0x16 ^ uVar41;uVar56 = uVar41 & 0xffffffff;if ((int)uVar41 == 0) {
   uVar56 = 1;
}
uVar51 = 0;lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar53 = (uint)uVar56;uVar49 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];uVar41 = CONCAT44(0, uVar49);auVar17._8_8_ = 0;auVar17._0_8_ = uVar56 * lVar3;auVar33._8_8_ = 0;auVar33._0_8_ = uVar41;lVar47 = SUB168(auVar17 * auVar33, 8);lVar46 = *(long*)( this + 8 );puVar1 = (uint*)( lVar55 + lVar47 * 4 );iVar45 = SUB164(auVar17 * auVar33, 8);uVar44 = *puVar1;pauVar37 = pauVar43;while (uVar44 != 0) {
   auVar18._8_8_ = 0;
   auVar18._0_8_ = (ulong)uVar44 * lVar3;
   auVar34._8_8_ = 0;
   auVar34._0_8_ = uVar41;
   auVar19._8_8_ = 0;
   auVar19._0_8_ = ( ulong )(( iVar45 + uVar49 ) - SUB164(auVar18 * auVar34, 8)) * lVar3;
   auVar35._8_8_ = 0;
   auVar35._0_8_ = uVar41;
   uVar53 = SUB164(auVar19 * auVar35, 8);
   pauVar58 = pauVar37;
   if (uVar53 < uVar51) {
      *puVar1 = (uint)uVar56;
      uVar56 = (ulong)uVar44;
      puVar2 = (undefined8*)( lVar46 + lVar47 * 8 );
      pauVar58 = (undefined1(*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar51 = uVar53;
   }

   uVar53 = (uint)uVar56;
   uVar51 = uVar51 + 1;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = ( ulong )(iVar45 + 1) * lVar3;
   auVar36._8_8_ = 0;
   auVar36._0_8_ = uVar41;
   lVar47 = SUB168(auVar20 * auVar36, 8);
   puVar1 = (uint*)( lVar55 + lVar47 * 4 );
   iVar45 = SUB164(auVar20 * auVar36, 8);
   pauVar37 = pauVar58;
   uVar44 = *puVar1;
}
;*(undefined1(**) [16])( lVar46 + lVar47 * 8 ) = pauVar37;*puVar1 = uVar53;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00117e4b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pauVar43[1] + 8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* Variant Object::call<>(StringName const&) */StringName *Object::call<>(StringName *param_1) {
   undefined8 in_RDX;
   long *in_RSI;
   long in_FS_OFFSET;
   int local_68[4];
   undefined8 local_58;
   undefined1 local_50[16];
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   for (int i = 0; i < 3; i++) {
      local_68[i] = 0;
   }

   ( **(code**)( *in_RSI + 0x68 ) )((Variant*)local_38, in_RSI, in_RDX, 0, 0, local_68);
   if (local_68[0] == 0) {
      Variant::Variant((Variant*)param_1, (Variant*)local_38);
   }
 else {
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   }

   if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<int, NodePath, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, NodePath> > >::operator[](int const&) */NodePath * __thiscallHashMap<int,NodePath,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,NodePath>>>::operator [](HashMap<int,NodePath,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,NodePath>>> * this, int, *param_1) * puVar1 ;undefined8 *puVar2void *pvVar3void *__sundefined1 auVar4[16]undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]uint uVar36uint uVar37uint uVar38ulong uVar39undefined8 uVar40void *__s_00undefined8 *puVar41ulong uVar42int iVar43ulong uVar44long lVar45long lVar46long lVar47ulong uVar48undefined8 uVar49uint uVar50ulong uVar51uint uVar52uint uVar53long lVar54undefined8 *puVar55long in_FS_OFFSETvoid *local_b0NodePath *local_a8NodePath *local_98undefined8 local_70undefined1 local_68[16]int local_58NodePath local_50[16]long local_40local_b0 = *(void**)( this + 8 );uVar38 = *param_1;local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar39 = ( ulong ) * (uint*)( this + 0x28 );uVar37 = ( &hash_table_size_primes )[uVar39];uVar51 = CONCAT44(0, uVar37);if (local_b0 == (void*)0x0) {
   local_70 = 0;
   uVar39 = uVar51 * 4;
   uVar48 = uVar51 * 8;
   uVar40 = Memory::alloc_static(uVar39, false);
   *(undefined8*)( this + 0x10 ) = uVar40;
   local_b0 = (void*)Memory::alloc_static(uVar48, false);
   *(void**)( this + 8 ) = local_b0;
   if (uVar37 == 0) {
      iVar43 = *(int*)( this + 0x2c );
      uVar38 = *param_1;
      if (local_b0 == (void*)0x0) goto LAB_00118893;
   }
 else {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)local_b0 + uVar48 ) ) && ( local_b0 < (void*)( (long)pvVar3 + uVar39 ) )) {
         uVar39 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar39 * 4 ) = 0;
            *(undefined8*)( (long)local_b0 + uVar39 * 8 ) = 0;
            uVar39 = uVar39 + 1;
         }
 while ( uVar51 != uVar39 );
         iVar43 = *(int*)( this + 0x2c );
         uVar38 = *param_1;
      }
 else {
         memset(pvVar3, 0, uVar39);
         memset(local_b0, 0, uVar48);
         iVar43 = *(int*)( this + 0x2c );
         uVar38 = *param_1;
      }

   }

   if (iVar43 != 0) {
      uVar39 = ( ulong ) * (uint*)( this + 0x28 );
      lVar54 = *(long*)( this + 0x10 );
      goto LAB_0011878c;
   }

}
 else {
   iVar43 = *(int*)( this + 0x2c );
   if (iVar43 == 0) {
      local_70 = 0;
   }
 else {
      uVar48 = *(ulong*)( hash_table_size_primes_inv + uVar39 * 8 );
      uVar36 = ( uVar38 >> 0x10 ^ uVar38 ) * -0x7a143595;
      uVar36 = ( uVar36 ^ uVar36 >> 0xd ) * -0x3d4d51cb;
      uVar52 = uVar36 ^ uVar36 >> 0x10;
      if (uVar36 == uVar36 >> 0x10) {
         uVar52 = 1;
         uVar44 = uVar48;
      }
 else {
         uVar44 = uVar52 * uVar48;
      }

      lVar54 = *(long*)( this + 0x10 );
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar51;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar44;
      lVar45 = SUB168(auVar4 * auVar20, 8);
      uVar36 = *(uint*)( lVar54 + lVar45 * 4 );
      uVar53 = SUB164(auVar4 * auVar20, 8);
      if (uVar36 != 0) {
         uVar50 = 0;
         do {
            if (( uVar52 == uVar36 ) && ( uVar38 == *(uint*)( *(long*)( (long)local_b0 + lVar45 * 8 ) + 0x10 ) )) {
               local_a8 = (NodePath*)( *(long*)( (long)local_b0 + (ulong)uVar53 * 8 ) + 0x18 );
               goto LAB_00118752;
            }

            uVar50 = uVar50 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( uVar53 + 1 ) * uVar48;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar51;
            lVar45 = SUB168(auVar5 * auVar21, 8);
            uVar36 = *(uint*)( lVar54 + lVar45 * 4 );
            uVar53 = SUB164(auVar5 * auVar21, 8);
         }
 while ( ( uVar36 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar36 * uVar48,auVar22._8_8_ = 0,auVar22._0_8_ = uVar51,auVar7._8_8_ = 0,auVar7._0_8_ = ( ( uVar53 + uVar37 ) - SUB164(auVar6 * auVar22, 8) ) * uVar48,auVar23._8_8_ = 0,auVar23._0_8_ = uVar51,uVar50 <= SUB164(auVar7 * auVar23, 8) );
      }

      local_70 = 0;
      LAB_0011878c:uVar44 = CONCAT44(0, ( &hash_table_size_primes )[uVar39]);
      uVar48 = *(ulong*)( hash_table_size_primes_inv + uVar39 * 8 );
      uVar37 = ( uVar38 >> 0x10 ^ uVar38 ) * -0x7a143595;
      uVar37 = ( uVar37 ^ uVar37 >> 0xd ) * -0x3d4d51cb;
      uVar36 = uVar37 ^ uVar37 >> 0x10;
      if (uVar37 == uVar37 >> 0x10) {
         uVar36 = 1;
         uVar42 = uVar48;
      }
 else {
         uVar42 = uVar36 * uVar48;
      }

      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar44;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar42;
      lVar45 = SUB168(auVar8 * auVar24, 8);
      uVar37 = *(uint*)( lVar54 + lVar45 * 4 );
      uVar52 = SUB164(auVar8 * auVar24, 8);
      if (uVar37 != 0) {
         uVar53 = 0;
         do {
            if (( uVar36 == uVar37 ) && ( *(uint*)( *(long*)( (long)local_b0 + lVar45 * 8 ) + 0x10 ) == uVar38 )) {
               NodePath::operator =((NodePath*)( *(long*)( (long)local_b0 + (ulong)uVar52 * 8 ) + 0x18 ), (NodePath*)&local_70);
               local_a8 = (NodePath*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar52 * 8 ) + 0x18 );
               goto LAB_00118c1b;
            }

            uVar53 = uVar53 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = ( uVar52 + 1 ) * uVar48;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar44;
            lVar45 = SUB168(auVar9 * auVar25, 8);
            uVar37 = *(uint*)( lVar54 + lVar45 * 4 );
            uVar52 = SUB164(auVar9 * auVar25, 8);
         }
 while ( ( uVar37 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = uVar37 * uVar48,auVar26._8_8_ = 0,auVar26._0_8_ = uVar44,auVar11._8_8_ = 0,auVar11._0_8_ = ( ( ( &hash_table_size_primes )[uVar39] + uVar52 ) - SUB164(auVar10 * auVar26, 8) ) * uVar48,auVar27._8_8_ = 0,auVar27._0_8_ = uVar44,uVar53 <= SUB164(auVar11 * auVar27, 8) );
      }

   }

}
LAB_00118893:if ((float)uVar51 * __LC70 < (float)( iVar43 + 1 )) {
   uVar38 = *(uint*)( this + 0x28 );
   if (uVar38 == 0x1c) {
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      local_a8 = (NodePath*)0x18;
      goto LAB_00118c1b;
   }

   uVar39 = ( ulong )(uVar38 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar37 = ( &hash_table_size_primes )[uVar38];
   if (uVar38 + 1 < 2) {
      uVar39 = 2;
   }

   uVar38 = ( &hash_table_size_primes )[uVar39];
   uVar48 = (ulong)uVar38;
   *(int*)( this + 0x28 ) = (int)uVar39;
   pvVar3 = *(void**)( this + 0x10 );
   uVar39 = uVar48 * 4;
   uVar51 = uVar48 * 8;
   uVar40 = Memory::alloc_static(uVar39, false);
   *(undefined8*)( this + 0x10 ) = uVar40;
   __s_00 = (void*)Memory::alloc_static(uVar51, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar38 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar51 ) ) && ( __s_00 < (void*)( (long)__s + uVar39 ) )) {
         uVar39 = 0;
         do {
            *(undefined4*)( (long)__s + uVar39 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar39 * 8 ) = 0;
            uVar39 = uVar39 + 1;
         }
 while ( uVar39 != uVar48 );
      }
 else {
         memset(__s, 0, uVar39);
         memset(__s_00, 0, uVar51);
      }

   }

   if (uVar37 != 0) {
      uVar39 = 0;
      do {
         uVar38 = *(uint*)( (long)pvVar3 + uVar39 * 4 );
         if (uVar38 != 0) {
            lVar54 = *(long*)( this + 0x10 );
            uVar53 = 0;
            uVar36 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
            uVar51 = CONCAT44(0, uVar36);
            lVar45 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)uVar38 * lVar45;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar51;
            lVar46 = SUB168(auVar12 * auVar28, 8);
            puVar1 = (uint*)( lVar54 + lVar46 * 4 );
            iVar43 = SUB164(auVar12 * auVar28, 8);
            uVar52 = *puVar1;
            uVar40 = *(undefined8*)( (long)local_b0 + uVar39 * 8 );
            while (uVar52 != 0) {
               auVar13._8_8_ = 0;
               auVar13._0_8_ = (ulong)uVar52 * lVar45;
               auVar29._8_8_ = 0;
               auVar29._0_8_ = uVar51;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = ( ulong )(( uVar36 + iVar43 ) - SUB164(auVar13 * auVar29, 8)) * lVar45;
               auVar30._8_8_ = 0;
               auVar30._0_8_ = uVar51;
               uVar50 = SUB164(auVar14 * auVar30, 8);
               uVar49 = uVar40;
               if (uVar50 < uVar53) {
                  *puVar1 = uVar38;
                  puVar55 = (undefined8*)( (long)__s_00 + lVar46 * 8 );
                  uVar49 = *puVar55;
                  *puVar55 = uVar40;
                  uVar38 = uVar52;
                  uVar53 = uVar50;
               }

               uVar53 = uVar53 + 1;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = ( ulong )(iVar43 + 1) * lVar45;
               auVar31._8_8_ = 0;
               auVar31._0_8_ = uVar51;
               lVar46 = SUB168(auVar15 * auVar31, 8);
               puVar1 = (uint*)( lVar54 + lVar46 * 4 );
               iVar43 = SUB164(auVar15 * auVar31, 8);
               uVar40 = uVar49;
               uVar52 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar46 * 8 ) = uVar40;
            *puVar1 = uVar38;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar39 = uVar39 + 1;
      }
 while ( uVar37 != uVar39 );
      Memory::free_static(local_b0, false);
      Memory::free_static(pvVar3, false);
   }

}
local_68 = (undefined1[16])0x0;local_58 = *param_1;NodePath::NodePath(local_50, (NodePath*)&local_70);puVar41 = (undefined8*)operator_new(0x20, "");*puVar41 = local_68._0_8_;puVar41[1] = local_68._8_8_;*(int*)( puVar41 + 2 ) = local_58;local_a8 = (NodePath*)( puVar41 + 3 );NodePath::NodePath(local_a8, local_50);NodePath::~NodePath(local_50);puVar55 = *(undefined8**)( this + 0x20 );if (puVar55 == (undefined8*)0x0) {
   *(undefined8**)( this + 0x18 ) = puVar41;
}
 else {
   *puVar55 = puVar41;
   puVar41[1] = puVar55;
}
*(undefined8**)( this + 0x20 ) = puVar41;uVar38 = ( ( uint ) * param_1 >> 0x10 ^ *param_1 ) * -0x7a143595;uVar37 = ( uVar38 ^ uVar38 >> 0xd ) * -0x3d4d51cb;uVar38 = uVar37 ^ uVar37 >> 0x10;if (uVar37 == uVar37 >> 0x10) {
   uVar39 = 1;
   uVar38 = 1;
}
 else {
   uVar39 = (ulong)uVar38;
}
lVar54 = *(long*)( this + 0x10 );uVar52 = 0;uVar37 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];uVar51 = CONCAT44(0, uVar37);lVar45 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar16._8_8_ = 0;auVar16._0_8_ = uVar39 * lVar45;auVar32._8_8_ = 0;auVar32._0_8_ = uVar51;lVar47 = SUB168(auVar16 * auVar32, 8);lVar46 = *(long*)( this + 8 );puVar1 = (uint*)( lVar54 + lVar47 * 4 );iVar43 = SUB164(auVar16 * auVar32, 8);uVar36 = *puVar1;while (uVar36 != 0) {
   auVar17._8_8_ = 0;
   auVar17._0_8_ = (ulong)uVar36 * lVar45;
   auVar33._8_8_ = 0;
   auVar33._0_8_ = uVar51;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = ( ulong )(( uVar37 + iVar43 ) - SUB164(auVar17 * auVar33, 8)) * lVar45;
   auVar34._8_8_ = 0;
   auVar34._0_8_ = uVar51;
   uVar53 = SUB164(auVar18 * auVar34, 8);
   puVar55 = puVar41;
   if (uVar53 < uVar52) {
      *puVar1 = uVar38;
      puVar2 = (undefined8*)( lVar46 + lVar47 * 8 );
      puVar55 = (undefined8*)*puVar2;
      *puVar2 = puVar41;
      uVar38 = uVar36;
      uVar52 = uVar53;
   }

   uVar52 = uVar52 + 1;
   auVar19._8_8_ = 0;
   auVar19._0_8_ = ( ulong )(iVar43 + 1) * lVar45;
   auVar35._8_8_ = 0;
   auVar35._0_8_ = uVar51;
   lVar47 = SUB168(auVar19 * auVar35, 8);
   puVar1 = (uint*)( lVar54 + lVar47 * 4 );
   iVar43 = SUB164(auVar19 * auVar35, 8);
   puVar41 = puVar55;
   uVar36 = *puVar1;
}
;*(undefined8**)( lVar46 + lVar47 * 8 ) = puVar41;*puVar1 = uVar38;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00118c1b:local_98 = (NodePath*)&local_70;NodePath::~NodePath(local_98);LAB_00118752:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return local_a8;}/* Variant Object::call<Variant>(StringName const&, Variant) */Variant *Object::call<Variant>(Variant *param_1, long *param_2, undefined8 param_3, Variant *param_4) {
   char cVar1;
   long in_FS_OFFSET;
   int local_a8;
   undefined8 local_a4;
   Variant *local_98[2];
   int local_88[8];
   int local_68[6];
   undefined8 local_50;
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_68, param_4);
   local_a8 = 0;
   local_50 = 0;
   local_a4 = 0;
   local_48 = (undefined1[16])0x0;
   local_98[0] = (Variant*)local_68;
   ( **(code**)( *param_2 + 0x68 ) )((Variant*)local_88, param_2, param_3, local_98, 1, &local_a8);
   if (local_a8 == 0) {
      Variant::Variant(param_1, (Variant*)local_88);
   }
 else {
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   }

   if (Variant::needs_deinit[local_88[0]] == '\0') {
      cVar1 = Variant::needs_deinit[(int)local_50];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[(int)local_50];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* Callable create_custom_callable_function_pointer<RuntimeNodeSelect, Ref<InputEvent>
   const&>(RuntimeNodeSelect*, char const*, void (RuntimeNodeSelect::*)(Ref<InputEvent> const&)) */RuntimeNodeSelect *create_custom_callable_function_pointer<RuntimeNodeSelect,Ref<InputEvent>const&>(RuntimeNodeSelect *param_1, char *param_2, _func_void_Ref_ptr *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC26;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_00121f10;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void_Ref_ptr**)( this + 0x20 ) = param_3 + 1;
   Callable::Callable((Callable*)param_1, this);
   return param_1;
}
/* Callable create_custom_callable_function_pointer<RuntimeNodeSelect>(RuntimeNodeSelect*, char
   const*, void (RuntimeNodeSelect::*)()) */RuntimeNodeSelect *create_custom_callable_function_pointer<RuntimeNodeSelect>(RuntimeNodeSelect *param_1, char *param_2, _func_void *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC26;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_00121fa0;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, float, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, float> > >::operator[](StringName const&) */undefined8 * __thiscallHashMap<StringName,float,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,float>>>::operator [](HashMap<StringName,float,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,float>>> * this, StringName * param_1) * puVar1 ;undefined8 *puVar2void *pvVar3void *__sundefined8 *puVar4undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]uint uVar37uint uVar38uint uVar39ulong uVar40undefined8 uVar41void *__s_00undefined8 *puVar42long lVar43void *pvVar44ulong uVar45int iVar46long lVar47long lVar48long lVar49ulong uVar50undefined8 uVar51uint uVar52uint uVar53uint uVar54undefined8 *puVar55long in_FS_OFFSETbool bVar56long local_58undefined4 local_50long local_40lVar43 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar38 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];uVar40 = CONCAT44(0, uVar38);if (lVar43 == 0) {
   LAB_00119718:uVar45 = uVar40 * 4;
   uVar50 = uVar40 * 8;
   uVar41 = Memory::alloc_static(uVar45, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   pvVar44 = (void*)Memory::alloc_static(uVar50, false);
   *(void**)( this + 8 ) = pvVar44;
   if ((int)uVar40 != 0) {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)pvVar44 + uVar50 ) ) && ( pvVar44 < (void*)( (long)pvVar3 + uVar45 ) )) {
         uVar45 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar45 * 4 ) = 0;
            *(undefined8*)( (long)pvVar44 + uVar45 * 8 ) = 0;
            uVar45 = uVar45 + 1;
         }
 while ( uVar40 != uVar45 );
         goto LAB_001195c8;
      }

      memset(pvVar3, 0, uVar45);
      memset(pvVar44, 0, uVar50);
      iVar46 = *(int*)( this + 0x2c );
      LAB_001195cc:if (iVar46 != 0) {
         LAB_001195d4:uVar38 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
         uVar45 = CONCAT44(0, uVar38);
         lVar43 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar39 = StringName::get_empty_hash();
         }
 else {
            uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar39 == 0) {
            uVar39 = 1;
         }

         uVar54 = 0;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = (ulong)uVar39 * lVar43;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar45;
         lVar49 = SUB168(auVar17 * auVar33, 8);
         uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
         uVar53 = SUB164(auVar17 * auVar33, 8);
         if (uVar52 != 0) {
            do {
               if (( uVar39 == uVar52 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar49 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  puVar42 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar53 * 8 );
                  *(undefined4*)( puVar42 + 3 ) = 0;
                  goto LAB_001191cc;
               }

               uVar54 = uVar54 + 1;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = ( ulong )(uVar53 + 1) * lVar43;
               auVar34._8_8_ = 0;
               auVar34._0_8_ = uVar45;
               lVar49 = SUB168(auVar18 * auVar34, 8);
               uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
               uVar53 = SUB164(auVar18 * auVar34, 8);
            }
 while ( ( uVar52 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar52 * lVar43,auVar35._8_8_ = 0,auVar35._0_8_ = uVar45,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar38 + uVar53 ) - SUB164(auVar19 * auVar35, 8)) * lVar43,auVar36._8_8_ = 0,auVar36._0_8_ = uVar45,uVar54 <= SUB164(auVar20 * auVar36, 8) );
         }

         iVar46 = *(int*)( this + 0x2c );
      }

      goto LAB_00119203;
   }

   iVar46 = *(int*)( this + 0x2c );
   if (pvVar44 == (void*)0x0) goto LAB_00119203;
   if (iVar46 != 0) goto LAB_001195d4;
   LAB_00119229:uVar38 = *(uint*)( this + 0x28 );
   if (uVar38 == 0x1c) {
      puVar42 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_001191cc;
   }

   uVar40 = ( ulong )(uVar38 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar39 = ( &hash_table_size_primes )[uVar38];
   if (uVar38 + 1 < 2) {
      uVar40 = 2;
   }

   uVar38 = ( &hash_table_size_primes )[uVar40];
   uVar50 = (ulong)uVar38;
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar44 = *(void**)( this + 8 );
   uVar40 = uVar50 * 4;
   uVar45 = uVar50 * 8;
   pvVar3 = *(void**)( this + 0x10 );
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   __s_00 = (void*)Memory::alloc_static(uVar45, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar38 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar45 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar40 != uVar50 );
      }
 else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar45);
      }

   }

   if (uVar39 != 0) {
      uVar40 = 0;
      do {
         uVar38 = *(uint*)( (long)pvVar3 + uVar40 * 4 );
         if (uVar38 != 0) {
            lVar43 = *(long*)( this + 0x10 );
            uVar54 = 0;
            uVar52 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
            uVar45 = CONCAT44(0, uVar52);
            lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar38 * lVar49;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar45;
            lVar47 = SUB168(auVar9 * auVar25, 8);
            puVar1 = (uint*)( lVar43 + lVar47 * 4 );
            iVar46 = SUB164(auVar9 * auVar25, 8);
            uVar53 = *puVar1;
            uVar41 = *(undefined8*)( (long)pvVar44 + uVar40 * 8 );
            while (uVar53 != 0) {
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar53 * lVar49;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar45;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(( uVar52 + iVar46 ) - SUB164(auVar10 * auVar26, 8)) * lVar49;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar45;
               uVar37 = SUB164(auVar11 * auVar27, 8);
               uVar51 = uVar41;
               if (uVar37 < uVar54) {
                  *puVar1 = uVar38;
                  puVar42 = (undefined8*)( (long)__s_00 + lVar47 * 8 );
                  uVar51 = *puVar42;
                  *puVar42 = uVar41;
                  uVar38 = uVar53;
                  uVar54 = uVar37;
               }

               uVar54 = uVar54 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(iVar46 + 1) * lVar49;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar45;
               lVar47 = SUB168(auVar12 * auVar28, 8);
               puVar1 = (uint*)( lVar43 + lVar47 * 4 );
               iVar46 = SUB164(auVar12 * auVar28, 8);
               uVar41 = uVar51;
               uVar53 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar47 * 8 ) = uVar41;
            *puVar1 = uVar38;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar40 = uVar40 + 1;
      }
 while ( uVar39 != uVar40 );
      Memory::free_static(pvVar44, false);
      Memory::free_static(pvVar3, false);
   }

}
 else {
   iVar46 = *(int*)( this + 0x2c );
   if (iVar46 != 0) {
      lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar39 = StringName::get_empty_hash();
         lVar43 = *(long*)( this + 8 );
      }
 else {
         uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar39 == 0) {
         uVar39 = 1;
      }

      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21, 8);
      uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
      uVar53 = SUB164(auVar5 * auVar21, 8);
      if (uVar52 != 0) {
         uVar54 = 0;
         do {
            if (( uVar39 == uVar52 ) && ( *(long*)( *(long*)( lVar43 + lVar47 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               puVar42 = *(undefined8**)( lVar43 + (ulong)uVar53 * 8 );
               goto LAB_001191cc;
            }

            uVar54 = uVar54 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(uVar53 + 1) * lVar49;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar40;
            lVar47 = SUB168(auVar6 * auVar22, 8);
            uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
            uVar53 = SUB164(auVar6 * auVar22, 8);
         }
 while ( ( uVar52 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar52 * lVar49,auVar23._8_8_ = 0,auVar23._0_8_ = uVar40,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar53 + uVar38 ) - SUB164(auVar7 * auVar23, 8)) * lVar49,auVar24._8_8_ = 0,auVar24._0_8_ = uVar40,uVar54 <= SUB164(auVar8 * auVar24, 8) );
      }

      uVar40 = ( ulong )(uint)(&hash_table_size_primes)[*(uint*)( this + 0x28 )];
      if (lVar43 == 0) goto LAB_00119718;
      LAB_001195c8:iVar46 = *(int*)( this + 0x2c );
      goto LAB_001195cc;
   }

   LAB_00119203:if ((float)uVar40 * __LC70 < (float)( iVar46 + 1 )) goto LAB_00119229;
}
StringName::StringName((StringName*)&local_58, param_1);local_50 = 0;puVar42 = (undefined8*)operator_new(0x20, "");*puVar42 = 0;puVar42[1] = 0;StringName::StringName((StringName*)( puVar42 + 2 ), (StringName*)&local_58);bVar56 = StringName::configured != '\0';*(undefined4*)( puVar42 + 3 ) = local_50;if (( bVar56 ) && ( local_58 != 0 )) {
   StringName::unref();
}
puVar4 = *(undefined8**)( this + 0x20 );if (puVar4 == (undefined8*)0x0) {
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar42;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 == 0) goto LAB_001196dd;
   LAB_001194b8:uVar38 = *(uint*)( lVar43 + 0x20 );
}
 else {
   *puVar4 = puVar42;
   puVar42[1] = puVar4;
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 != 0) goto LAB_001194b8;
   LAB_001196dd:uVar38 = StringName::get_empty_hash();
}
if (uVar38 == 0) {
   uVar38 = 1;
}
uVar40 = (ulong)uVar38;lVar43 = *(long*)( this + 0x10 );uVar53 = 0;lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar39 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];uVar45 = CONCAT44(0, uVar39);auVar13._8_8_ = 0;auVar13._0_8_ = uVar40 * lVar49;auVar29._8_8_ = 0;auVar29._0_8_ = uVar45;lVar48 = SUB168(auVar13 * auVar29, 8);lVar47 = *(long*)( this + 8 );puVar1 = (uint*)( lVar43 + lVar48 * 4 );iVar46 = SUB164(auVar13 * auVar29, 8);uVar52 = *puVar1;puVar4 = puVar42;while (uVar52 != 0) {
   auVar14._8_8_ = 0;
   auVar14._0_8_ = (ulong)uVar52 * lVar49;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar45;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(( uVar39 + iVar46 ) - SUB164(auVar14 * auVar30, 8)) * lVar49;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar45;
   uVar38 = SUB164(auVar15 * auVar31, 8);
   puVar55 = puVar4;
   if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8*)( lVar47 + lVar48 * 8 );
      puVar55 = (undefined8*)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
   }

   uVar38 = (uint)uVar40;
   uVar53 = uVar53 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(iVar46 + 1) * lVar49;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar45;
   lVar48 = SUB168(auVar16 * auVar32, 8);
   puVar1 = (uint*)( lVar43 + lVar48 * 4 );
   iVar46 = SUB164(auVar16 * auVar32, 8);
   puVar4 = puVar55;
   uVar52 = *puVar1;
}
;*(undefined8**)( lVar47 + lVar48 * 8 ) = puVar4;*puVar1 = uVar38;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_001191cc:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return puVar42 + 3;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<RID, HashMapHasherDefault, HashMapComparatorDefault<RID> >::insert(RID const&) */undefined1[16];HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::insert(RID *param_1) {
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
   uVar31 = ( &hash_table_size_primes )[uVar32];
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
      if (lVar34 != 0) goto LAB_0011987f;
   }
 else {
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      local_70 = *in_RDX;
      LAB_0011987f:if (uVar44 != 0) {
         uVar43 = CONCAT44(0, ( &hash_table_size_primes )[uVar32]);
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
                  if (*(long*)( lVar34 + uStack_98 * 8 ) == local_70) goto LAB_00119d31;
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
 while ( ( uVar37 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = uVar33 * lVar3,auVar21._8_8_ = 0,auVar21._0_8_ = uVar43,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(uint)(( ( &hash_table_size_primes )[uVar32] + iVar35 ) - SUB164(auVar9 * auVar21, 8)) * lVar3,auVar22._8_8_ = 0,auVar22._0_8_ = uVar43,uVar39 <= SUB164(auVar10 * auVar22, 8) );
         }

      }

   }

   if ((float)uVar31 * __LC70 < (float)( uVar44 + 1 )) {
      if (uVar32 == 0x1c) {
         uStack_98 = 0;
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
         uVar44 = *(uint*)( (long)in_RSI + 0x24 );
         uVar37 = 0xffffffff;
         lVar34 = *in_RSI;
         goto LAB_00119d31;
      }

      uVar33 = ( ulong )(uVar32 + 1);
      if (uVar32 + 1 < 2) {
         uVar33 = 2;
      }

      uVar31 = ( &hash_table_size_primes )[uVar33];
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
            uVar32 = ( &hash_table_size_primes )[*(uint*)( in_RSI + 4 )];
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
   uVar31 = ( &hash_table_size_primes )[uVar32];
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
   LAB_00119d31:*(uint*)( param_1 + 0xc ) = uVar37;
   *(long*)param_1 = lVar34;
   *(uint*)( param_1 + 8 ) = uVar44;
   auVar45._8_8_ = uStack_98;
   auVar45._0_8_ = param_1;
   return auVar45;
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
/* RuntimeNodeSelect::_initialize_classv() */void RuntimeNodeSelect::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "RuntimeNodeSelect";
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
      initialize_class()::initialized = '\x01'
      ;;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
         uVar2 = ( &hash_table_size_primes )[*(uint*)( this + 0x38 )];
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
            if (pvVar5 == (void*)0x0) goto LAB_0011a134;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_0011a134:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<int, String, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, String> > >::operator[](int const&) */undefined1 * __thiscall
HashMap<int,String,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,String>>>
::operator[](HashMap<int,String,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,String>>>
             *this,int *param_1){
   uint *puVar1;
   undefined8 *puVar2;
   void *pvVar3;
   void *__s;
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
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   undefined1 auVar35[16];
   undefined1(*pauVar36)[16];
   uint uVar37;
   uint uVar38;
   uint uVar39;
   ulong uVar40;
   undefined8 uVar41;
   void *__s_00;
   undefined1(*pauVar42)[16];
   ulong uVar43;
   int iVar44;
   ulong uVar45;
   long lVar46;
   long lVar47;
   long lVar48;
   ulong uVar49;
   undefined8 uVar50;
   uint uVar51;
   ulong uVar52;
   uint uVar53;
   uint uVar54;
   long lVar55;
   undefined1(*pauVar56)[16];
   long in_FS_OFFSET;
   void *local_a8;
   undefined8 local_70;
   undefined1 local_68[16];
   int local_58;
   undefined8 local_50[2];
   long local_40;
   local_a8 = *(void**)( this + 8 );
   uVar38 = *param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar40 = ( ulong ) * (uint*)( this + 0x28 );
   uVar39 = ( &hash_table_size_primes )[uVar40];
   uVar52 = CONCAT44(0, uVar39);
   if (local_a8 == (void*)0x0) {
      local_70 = 0;
      uVar40 = uVar52 * 4;
      uVar49 = uVar52 * 8;
      uVar41 = Memory::alloc_static(uVar40, false);
      *(undefined8*)( this + 0x10 ) = uVar41;
      local_a8 = (void*)Memory::alloc_static(uVar49, false);
      *(void**)( this + 8 ) = local_a8;
      if (uVar39 == 0) {
         uVar38 = *param_1;
         iVar44 = *(int*)( this + 0x2c );
         if (local_a8 == (void*)0x0) goto LAB_0011a31c;
      }
 else {
         pvVar3 = *(void**)( this + 0x10 );
         if (( pvVar3 < (void*)( (long)local_a8 + uVar49 ) ) && ( local_a8 < (void*)( (long)pvVar3 + uVar40 ) )) {
            uVar40 = 0;
            do {
               *(undefined4*)( (long)pvVar3 + uVar40 * 4 ) = 0;
               *(undefined8*)( (long)local_a8 + uVar40 * 8 ) = 0;
               uVar40 = uVar40 + 1;
            }
 while ( uVar52 != uVar40 );
            uVar38 = *param_1;
            iVar44 = *(int*)( this + 0x2c );
         }
 else {
            memset(pvVar3, 0, uVar40);
            memset(local_a8, 0, uVar49);
            uVar38 = *param_1;
            iVar44 = *(int*)( this + 0x2c );
         }

      }

      if (iVar44 != 0) {
         uVar40 = ( ulong ) * (uint*)( this + 0x28 );
         lVar55 = *(long*)( this + 0x10 );
         goto LAB_0011a6d9;
      }

   }
 else {
      iVar44 = *(int*)( this + 0x2c );
      if (iVar44 == 0) {
         local_70 = 0;
      }
 else {
         uVar49 = *(ulong*)( hash_table_size_primes_inv + uVar40 * 8 );
         uVar37 = ( uVar38 >> 0x10 ^ uVar38 ) * -0x7a143595;
         uVar37 = ( uVar37 ^ uVar37 >> 0xd ) * -0x3d4d51cb;
         uVar53 = uVar37 ^ uVar37 >> 0x10;
         if (uVar37 == uVar37 >> 0x10) {
            uVar53 = 1;
            uVar45 = uVar49;
         }
 else {
            uVar45 = uVar53 * uVar49;
         }

         auVar4._8_8_ = 0;
         auVar4._0_8_ = uVar52;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = uVar45;
         lVar46 = SUB168(auVar4 * auVar20, 8);
         lVar55 = *(long*)( this + 0x10 );
         uVar54 = SUB164(auVar4 * auVar20, 8);
         uVar37 = *(uint*)( lVar55 + lVar46 * 4 );
         if (uVar37 != 0) {
            uVar51 = 0;
            do {
               if (( uVar37 == uVar53 ) && ( uVar38 == *(uint*)( *(long*)( (long)local_a8 + lVar46 * 8 ) + 0x10 ) )) {
                  pauVar42 = *(undefined1(**) [16])( (long)local_a8 + (ulong)uVar54 * 8 );
                  goto LAB_0011a2da;
               }

               uVar51 = uVar51 + 1;
               auVar5._8_8_ = 0;
               auVar5._0_8_ = ( uVar54 + 1 ) * uVar49;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar52;
               lVar46 = SUB168(auVar5 * auVar21, 8);
               uVar37 = *(uint*)( lVar55 + lVar46 * 4 );
               uVar54 = SUB164(auVar5 * auVar21, 8);
            }
 while ( ( uVar37 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar37 * uVar49,auVar22._8_8_ = 0,auVar22._0_8_ = uVar52,auVar7._8_8_ = 0,auVar7._0_8_ = ( ( uVar54 + uVar39 ) - SUB164(auVar6 * auVar22, 8) ) * uVar49,auVar23._8_8_ = 0,auVar23._0_8_ = uVar52,uVar51 <= SUB164(auVar7 * auVar23, 8) );
         }

         local_70 = 0;
         LAB_0011a6d9:uVar45 = CONCAT44(0, ( &hash_table_size_primes )[uVar40]);
         uVar49 = *(ulong*)( hash_table_size_primes_inv + uVar40 * 8 );
         uVar39 = ( uVar38 >> 0x10 ^ uVar38 ) * -0x7a143595;
         uVar39 = ( uVar39 ^ uVar39 >> 0xd ) * -0x3d4d51cb;
         uVar37 = uVar39 ^ uVar39 >> 0x10;
         if (uVar39 == uVar39 >> 0x10) {
            uVar37 = 1;
            uVar43 = uVar49;
         }
 else {
            uVar43 = uVar37 * uVar49;
         }

         auVar16._8_8_ = 0;
         auVar16._0_8_ = uVar45;
         auVar32._8_8_ = 0;
         auVar32._0_8_ = uVar43;
         lVar46 = SUB168(auVar16 * auVar32, 8);
         uVar39 = *(uint*)( lVar55 + lVar46 * 4 );
         uVar53 = SUB164(auVar16 * auVar32, 8);
         if (uVar39 != 0) {
            uVar54 = 0;
            do {
               if (( uVar37 == uVar39 ) && ( *(uint*)( *(long*)( (long)local_a8 + lVar46 * 8 ) + 0x10 ) == uVar38 )) {
                  lVar55 = *(long*)( (long)local_a8 + (ulong)uVar53 * 8 );
                  if (*(long*)( lVar55 + 0x18 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( lVar55 + 0x18 ), (CowData*)&local_70);
                  }

                  pauVar42 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar53 * 8 );
                  goto LAB_0011a6b5;
               }

               uVar54 = uVar54 + 1;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = ( uVar53 + 1 ) * uVar49;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = uVar45;
               lVar46 = SUB168(auVar17 * auVar33, 8);
               uVar39 = *(uint*)( lVar55 + lVar46 * 4 );
               uVar53 = SUB164(auVar17 * auVar33, 8);
            }
 while ( ( uVar39 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = uVar39 * uVar49,auVar34._8_8_ = 0,auVar34._0_8_ = uVar45,auVar19._8_8_ = 0,auVar19._0_8_ = ( ( ( &hash_table_size_primes )[uVar40] + uVar53 ) - SUB164(auVar18 * auVar34, 8) ) * uVar49,auVar35._8_8_ = 0,auVar35._0_8_ = uVar45,uVar54 <= SUB164(auVar19 * auVar35, 8) );
         }

      }

   }

   LAB_0011a31c:if ((float)uVar52 * __LC70 < (float)( iVar44 + 1 )) {
      uVar38 = *(uint*)( this + 0x28 );
      if (uVar38 == 0x1c) {
         pauVar42 = (undefined1(*) [16])0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0011a6b5;
      }

      uVar40 = ( ulong )(uVar38 + 1);
      uVar39 = ( &hash_table_size_primes )[uVar38];
      *(undefined4*)( this + 0x2c ) = 0;
      if (uVar38 + 1 < 2) {
         uVar40 = 2;
      }

      uVar38 = ( &hash_table_size_primes )[uVar40];
      *(int*)( this + 0x28 ) = (int)uVar40;
      pvVar3 = *(void**)( this + 0x10 );
      uVar49 = (ulong)uVar38;
      uVar40 = uVar49 * 4;
      uVar52 = uVar49 * 8;
      uVar41 = Memory::alloc_static(uVar40, false);
      *(undefined8*)( this + 0x10 ) = uVar41;
      __s_00 = (void*)Memory::alloc_static(uVar52, false);
      *(void**)( this + 8 ) = __s_00;
      if (uVar38 != 0) {
         __s = *(void**)( this + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar52 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
            uVar40 = 0;
            do {
               *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
               uVar40 = uVar40 + 1;
            }
 while ( uVar40 != uVar49 );
         }
 else {
            memset(__s, 0, uVar40);
            memset(__s_00, 0, uVar52);
         }

      }

      uVar40 = 0;
      if (uVar39 != 0) {
         do {
            uVar38 = *(uint*)( (long)pvVar3 + uVar40 * 4 );
            if (uVar38 != 0) {
               uVar54 = 0;
               lVar55 = *(long*)( this + 0x10 );
               uVar37 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
               uVar52 = CONCAT44(0, uVar37);
               lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               auVar8._8_8_ = 0;
               auVar8._0_8_ = (ulong)uVar38 * lVar46;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar52;
               lVar47 = SUB168(auVar8 * auVar24, 8);
               puVar1 = (uint*)( lVar55 + lVar47 * 4 );
               iVar44 = SUB164(auVar8 * auVar24, 8);
               uVar53 = *puVar1;
               uVar41 = *(undefined8*)( (long)local_a8 + uVar40 * 8 );
               while (uVar53 != 0) {
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = (ulong)uVar53 * lVar46;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ = uVar52;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = ( ulong )(( uVar37 + iVar44 ) - SUB164(auVar9 * auVar25, 8)) * lVar46;
                  auVar26._8_8_ = 0;
                  auVar26._0_8_ = uVar52;
                  uVar51 = SUB164(auVar10 * auVar26, 8);
                  uVar50 = uVar41;
                  if (uVar51 < uVar54) {
                     *puVar1 = uVar38;
                     puVar2 = (undefined8*)( (long)__s_00 + lVar47 * 8 );
                     uVar50 = *puVar2;
                     *puVar2 = uVar41;
                     uVar38 = uVar53;
                     uVar54 = uVar51;
                  }

                  uVar54 = uVar54 + 1;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( ulong )(iVar44 + 1) * lVar46;
                  auVar27._8_8_ = 0;
                  auVar27._0_8_ = uVar52;
                  lVar47 = SUB168(auVar11 * auVar27, 8);
                  puVar1 = (uint*)( lVar55 + lVar47 * 4 );
                  iVar44 = SUB164(auVar11 * auVar27, 8);
                  uVar41 = uVar50;
                  uVar53 = *puVar1;
               }
;
               *(undefined8*)( (long)__s_00 + lVar47 * 8 ) = uVar41;
               *puVar1 = uVar38;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
            }

            uVar40 = uVar40 + 1;
         }
 while ( uVar39 != uVar40 );
         Memory::free_static(local_a8, false);
         Memory::free_static(pvVar3, false);
      }

   }

   local_68 = (undefined1[16])0x0;
   local_50[0] = 0;
   iVar44 = *param_1;
   local_58 = iVar44;
   pauVar42 = (undefined1(*) [16])operator_new(0x20, "");
   *(int*)pauVar42[1] = iVar44;
   *(undefined8*)( pauVar42[1] + 8 ) = 0;
   *pauVar42 = (undefined1[16])0x0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
   puVar2 = *(undefined8**)( this + 0x20 );
   if (puVar2 == (undefined8*)0x0) {
      *(undefined1(**) [16])( this + 0x18 ) = pauVar42;
   }
 else {
      *puVar2 = pauVar42;
      *(undefined8**)( *pauVar42 + 8 ) = puVar2;
   }

   *(undefined1(**) [16])( this + 0x20 ) = pauVar42;
   uVar38 = ( ( uint ) * param_1 >> 0x10 ^ *param_1 ) * -0x7a143595;
   uVar39 = ( uVar38 ^ uVar38 >> 0xd ) * -0x3d4d51cb;
   uVar38 = uVar39 ^ uVar39 >> 0x10;
   if (uVar39 == uVar39 >> 0x10) {
      uVar40 = 1;
      uVar38 = 1;
   }
 else {
      uVar40 = (ulong)uVar38;
   }

   uVar53 = 0;
   lVar55 = *(long*)( this + 0x10 );
   uVar39 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
   uVar52 = CONCAT44(0, uVar39);
   lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   auVar12._8_8_ = 0;
   auVar12._0_8_ = uVar40 * lVar46;
   auVar28._8_8_ = 0;
   auVar28._0_8_ = uVar52;
   lVar48 = SUB168(auVar12 * auVar28, 8);
   lVar47 = *(long*)( this + 8 );
   puVar1 = (uint*)( lVar55 + lVar48 * 4 );
   iVar44 = SUB164(auVar12 * auVar28, 8);
   uVar37 = *puVar1;
   pauVar36 = pauVar42;
   while (uVar37 != 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar37 * lVar46;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar52;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = ( ulong )(( uVar39 + iVar44 ) - SUB164(auVar13 * auVar29, 8)) * lVar46;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar52;
      uVar54 = SUB164(auVar14 * auVar30, 8);
      pauVar56 = pauVar36;
      if (uVar54 < uVar53) {
         *puVar1 = uVar38;
         puVar2 = (undefined8*)( lVar47 + lVar48 * 8 );
         pauVar56 = (undefined1(*) [16])*puVar2;
         *puVar2 = pauVar36;
         uVar38 = uVar37;
         uVar53 = uVar54;
      }

      uVar53 = uVar53 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(iVar44 + 1) * lVar46;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar52;
      lVar48 = SUB168(auVar15 * auVar31, 8);
      puVar1 = (uint*)( lVar55 + lVar48 * 4 );
      iVar44 = SUB164(auVar15 * auVar31, 8);
      pauVar36 = pauVar56;
      uVar37 = *puVar1;
   }
;
   *(undefined1(**) [16])( lVar47 + lVar48 * 8 ) = pauVar36;
   *puVar1 = uVar38;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
   LAB_0011a6b5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   LAB_0011a2da:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pauVar42[1] + 8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CallableCustomMethodPointer<RuntimeNodeSelect, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<RuntimeNodeSelect,void>::call(CallableCustomMethodPointer<RuntimeNodeSelect,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   uint uVar3;
   ulong *puVar4;
   code *UNRECOVERED_JUMPTABLE;
   ulong uVar5;
   long in_FS_OFFSET;
   bool bVar6;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar5 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar5 << 8 );
         LOCK();
         bVar6 = (char)ObjectDB::spin_lock == '\0';
         if (bVar6) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar6) break;
         local_48 = (char*)( uVar5 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      uVar5 = *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff;
      if (uVar5 != ( *puVar4 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0011abaf;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_0011abaf;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0011ab88. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_0011ac71;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0011abaf:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC129, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0011ac71:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<RuntimeNodeSelect, void, int, PopupMenu*>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<RuntimeNodeSelect,void,int,PopupMenu*>::call(CallableCustomMethodPointer<RuntimeNodeSelect,void,int,PopupMenu*> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   Variant *this_00;
   ulong uVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   Object *pOVar7;
   Object *pOVar8;
   long lVar9;
   uint uVar10;
   ulong *puVar11;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar12;
   CowData<char32_t> local_70[8];
   CowData<char32_t> local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar10 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar10 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_58 >> 8;
         local_58 = (char*)( uVar3 << 8 );
         LOCK();
         bVar12 = (char)ObjectDB::spin_lock == '\0';
         if (bVar12) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar12) break;
         local_58 = (char*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar11 = (ulong*)( (ulong)uVar10 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar11 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0011ae93;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar11[1] == 0) goto LAB_0011ae93;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 3) {
         if (param_2 == 2) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)param_1[1], 0x18);
            if (cVar5 == '\0') {
               LAB_0011adcf:uVar4 = _LC12;
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }
 else {
               this_00 = param_1[1];
               pOVar7 = Variant::operator_cast_to_Object_(this_00);
               pOVar8 = Variant::operator_cast_to_Object_(this_00);
               if (( ( pOVar8 == (Object*)0x0 ) || ( lVar9 = __dynamic_cast(pOVar8, &Object::typeinfo, &PopupMenu::typeinfo, 0) ),lVar9 == 0 )) goto LAB_0011adcf;
            }

            pOVar7 = Variant::operator_cast_to_Object_(param_1[1]);
            if (pOVar7 != (Object*)0x0) {
               pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &PopupMenu::typeinfo, 0);
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
            uVar4 = _LC130;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            iVar6 = Variant::operator_cast_to_int(*param_1);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0011ae6c. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), iVar6, pOVar7);
               return;
            }

            goto LAB_0011afa1;
         }

         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 2;
      }
 else {
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 2;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0011ae93:local_60 = 0;
      local_58 = "\', can\'t call method.";
      local_50 = 0x15;
      String::parse_latin1((StrRange*)&local_60);
      uitos((ulong)local_70);
      operator+((char *)
      local_68,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_58, (String*)local_68);
      _err_print_error(&_LC129, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_58, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref(local_68);
      CowData<char32_t>::_unref(local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0011afa1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<SceneTree, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<SceneTree,void,bool>::call(CallableCustomMethodPointer<SceneTree,void,bool> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   undefined8 uVar4;
   char cVar5;
   uint uVar6;
   ulong *puVar7;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar8;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar6 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar3 << 8 );
         LOCK();
         bVar8 = (char)ObjectDB::spin_lock == '\0';
         if (bVar8) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar8) break;
         local_48 = (char*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar7 = (ulong*)( (ulong)uVar6 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar7 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0011b169;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] == 0) goto LAB_0011b169;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 1);
            uVar4 = _LC131;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            bVar8 = Variant::operator_cast_to_bool(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0011b118. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), bVar8);
               return;
            }

            goto LAB_0011b22b;
         }

         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 1;
      }
 else {
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 1;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0011b169:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC129, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0011b22b:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<Viewport, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<Viewport,void,bool>::call(CallableCustomMethodPointer<Viewport,void,bool> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   undefined8 uVar4;
   char cVar5;
   uint uVar6;
   ulong *puVar7;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar8;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar6 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar3 << 8 );
         LOCK();
         bVar8 = (char)ObjectDB::spin_lock == '\0';
         if (bVar8) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar8) break;
         local_48 = (char*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar7 = (ulong*)( (ulong)uVar6 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar7 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0011b3e9;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] == 0) goto LAB_0011b3e9;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 1);
            uVar4 = _LC131;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            bVar8 = Variant::operator_cast_to_bool(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0011b398. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), bVar8);
               return;
            }

            goto LAB_0011b4ab;
         }

         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 1;
      }
 else {
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 1;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0011b3e9:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC129, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0011b4ab:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<RuntimeNodeSelect, void, Ref<InputEvent> const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<RuntimeNodeSelect,void,Ref<InputEvent>const&>::call(CallableCustomMethodPointer<RuntimeNodeSelect,void,Ref<InputEvent>const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   Object *pOVar7;
   uint uVar8;
   ulong *puVar9;
   code *pcVar10;
   long in_FS_OFFSET;
   bool bVar11;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar8 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar8 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_48 >> 8;
         local_48 = (Object*)( uVar3 << 8 );
         LOCK();
         bVar11 = (char)ObjectDB::spin_lock == '\0';
         if (bVar11) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar11) break;
         local_48 = (Object*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar9 = (ulong*)( (ulong)uVar8 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar9 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar9[1] != 0) {
            lVar1 = *(long*)( this + 0x28 );
            pcVar10 = *(code**)( this + 0x38 );
            lVar2 = *(long*)( this + 0x40 );
            if (1 < (uint)param_2) {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 1;
               goto LAB_0011b57e;
            }

            if (param_2 == 0) {
               *(undefined4*)param_4 = 4;
               *(undefined4*)( param_4 + 8 ) = 1;
               goto LAB_0011b57e;
            }

            *(undefined4*)param_4 = 0;
            if (( (ulong)pcVar10 & 1 ) != 0) {
               pcVar10 = *(code**)( pcVar10 + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar6 = Variant::can_convert_strict(*(undefined4*)*param_1);
            uVar4 = _LC13;
            if (cVar6 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            local_48 = (Object*)0x0;
            pOVar7 = (Object*)Variant::get_validated_object();
            pOVar5 = local_48;
            if (pOVar7 != local_48) {
               if (pOVar7 == (Object*)0x0) {
                  if (local_48 != (Object*)0x0) {
                     local_48 = (Object*)0x0;
                     LAB_0011b64d:cVar6 = RefCounted::unreference();
                     if (( cVar6 != '\0' ) && ( cVar6 = predelete_handler(pOVar5) ),cVar6 != '\0') {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                  }

               }
 else {
                  pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &InputEvent::typeinfo, 0);
                  if (pOVar5 != pOVar7) {
                     local_48 = pOVar7;
                     if (( pOVar7 != (Object*)0x0 ) && ( cVar6 = RefCounted::reference() ),cVar6 == '\0') {
                        local_48 = (Object*)0x0;
                     }

                     if (pOVar5 != (Object*)0x0) goto LAB_0011b64d;
                  }

               }

            }

            ( *pcVar10 )((long*)( lVar1 + lVar2 ));
            if (( ( local_48 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar5 = local_48,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
            Memory::free_static(pOVar5, false);
         }

         goto LAB_0011b57e;
      }

   }
 else {
      ObjectDB::spin_lock._0_1_ = '\0';
   }

}
else{_err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);};local_50 = 0;local_48 = (Object*)0x11a9b2;local_40 = 0x15;String::parse_latin1((StrRange*)&local_50);uitos((ulong)local_60);operator+((char *)local_58,(String *)"Invalid Object id \'");String::operator +((String*)&local_48, (String*)local_58);_err_print_error(&_LC129, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);CowData<char32_t>::_unref(local_58);CowData<char32_t>::_unref(local_60);CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);LAB_0011b57e:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* CallableCustomMethodPointer<RuntimeNodeSelect, void, float, Vector2, Ref<InputEvent>
   >::call(Variant const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<RuntimeNodeSelect,void,float,Vector2,Ref<InputEvent>>::call(CallableCustomMethodPointer<RuntimeNodeSelect,void,float,Vector2,Ref<InputEvent>> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   ulong uVar4;
   undefined8 uVar5;
   Object *pOVar6;
   char cVar7;
   Object *pOVar8;
   uint uVar9;
   ulong *puVar10;
   code *pcVar11;
   long in_FS_OFFSET;
   bool bVar12;
   float fVar13;
   CowData<char32_t> local_70[8];
   CowData<char32_t> local_68[8];
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar9 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar9 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar4 = (ulong)local_58 >> 8;
         local_58 = (Object*)( uVar4 << 8 );
         LOCK();
         bVar12 = (char)ObjectDB::spin_lock == '\0';
         if (bVar12) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar12) break;
         local_58 = (Object*)( uVar4 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar10 = (ulong*)( (ulong)uVar9 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar10 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar10[1] != 0) {
            lVar1 = *(long*)( this + 0x28 );
            pcVar11 = *(code**)( this + 0x38 );
            lVar2 = *(long*)( this + 0x40 );
            if (3 < (uint)param_2) {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 3;
               goto LAB_0011b8f5;
            }

            if (param_2 != 3) {
               *(undefined4*)param_4 = 4;
               *(undefined4*)( param_4 + 8 ) = 3;
               goto LAB_0011b8f5;
            }

            *(undefined4*)param_4 = 0;
            if (( (ulong)pcVar11 & 1 ) != 0) {
               pcVar11 = *(code**)( pcVar11 + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar7 = Variant::can_convert_strict(*(undefined4*)param_1[2]);
            uVar3 = _LC132;
            if (cVar7 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            local_58 = (Object*)0x0;
            pOVar8 = (Object*)Variant::get_validated_object();
            pOVar6 = local_58;
            if (pOVar8 != local_58) {
               if (pOVar8 == (Object*)0x0) {
                  if (local_58 != (Object*)0x0) {
                     local_58 = (Object*)0x0;
                     LAB_0011b9f0:cVar7 = RefCounted::unreference();
                     if (( cVar7 != '\0' ) && ( cVar7 = predelete_handler(pOVar6) ),cVar7 != '\0') {
                        ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                        Memory::free_static(pOVar6, false);
                     }

                  }

               }
 else {
                  pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &InputEvent::typeinfo, 0);
                  if (pOVar6 != pOVar8) {
                     local_58 = pOVar8;
                     if (( pOVar8 != (Object*)0x0 ) && ( cVar7 = RefCounted::reference() ),cVar7 == '\0') {
                        local_58 = (Object*)0x0;
                     }

                     if (pOVar6 != (Object*)0x0) goto LAB_0011b9f0;
                  }

               }

            }

            cVar7 = Variant::can_convert_strict(*(undefined4*)param_1[1], 5);
            uVar3 = _LC133;
            if (cVar7 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            uVar3 = Variant::operator_cast_to_Vector2(param_1[1]);
            cVar7 = Variant::can_convert_strict(*(undefined4*)*param_1, 3);
            uVar5 = _LC134;
            if (cVar7 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar5;
            }

            fVar13 = Variant::operator_cast_to_float(*param_1);
            ( *pcVar11 )(fVar13, uVar3, (long*)( lVar1 + lVar2 ));
            if (( ( local_58 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),pOVar6 = local_58,cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
            Memory::free_static(pOVar6, false);
         }

         goto LAB_0011b8f5;
      }

   }
 else {
      ObjectDB::spin_lock._0_1_ = '\0';
   }

}
else{_err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);};local_60 = 0;local_58 = (Object*)0x11a9b2;local_50 = 0x15;String::parse_latin1((StrRange*)&local_60);uitos((ulong)local_70);operator+((char *)local_68,(String *)"Invalid Object id \'");String::operator +((String*)&local_58, (String*)local_68);_err_print_error(&_LC129, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_58, 0, 0);CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);CowData<char32_t>::_unref(local_68);CowData<char32_t>::_unref(local_70);CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);LAB_0011b8f5:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* CallableCustomMethodPointer<RuntimeNodeSelect, void, Vector2, Ref<InputEvent> >::call(Variant
   const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<RuntimeNodeSelect,void,Vector2,Ref<InputEvent>>::call(CallableCustomMethodPointer<RuntimeNodeSelect,void,Vector2,Ref<InputEvent>> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   Object *pOVar7;
   uint uVar8;
   ulong *puVar9;
   code *pcVar10;
   long in_FS_OFFSET;
   bool bVar11;
   CowData<char32_t> local_70[8];
   CowData<char32_t> local_68[8];
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar8 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar8 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_58 >> 8;
         local_58 = (Object*)( uVar3 << 8 );
         LOCK();
         bVar11 = (char)ObjectDB::spin_lock == '\0';
         if (bVar11) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar11) break;
         local_58 = (Object*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar9 = (ulong*)( (ulong)uVar8 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar9 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar9[1] != 0) {
            lVar1 = *(long*)( this + 0x28 );
            pcVar10 = *(code**)( this + 0x38 );
            lVar2 = *(long*)( this + 0x40 );
            if (2 < (uint)param_2) {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 2;
               goto LAB_0011bcc5;
            }

            if (param_2 != 2) {
               *(undefined4*)param_4 = 4;
               *(undefined4*)( param_4 + 8 ) = 2;
               goto LAB_0011bcc5;
            }

            *(undefined4*)param_4 = 0;
            if (( (ulong)pcVar10 & 1 ) != 0) {
               pcVar10 = *(code**)( pcVar10 + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar6 = Variant::can_convert_strict(*(undefined4*)param_1[1]);
            uVar4 = _LC12;
            if (cVar6 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            local_58 = (Object*)0x0;
            pOVar7 = (Object*)Variant::get_validated_object();
            pOVar5 = local_58;
            if (pOVar7 != local_58) {
               if (pOVar7 == (Object*)0x0) {
                  if (local_58 != (Object*)0x0) {
                     local_58 = (Object*)0x0;
                     LAB_0011bdc0:cVar6 = RefCounted::unreference();
                     if (( cVar6 != '\0' ) && ( cVar6 = predelete_handler(pOVar5) ),cVar6 != '\0') {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                  }

               }
 else {
                  pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &InputEvent::typeinfo, 0);
                  if (pOVar5 != pOVar7) {
                     local_58 = pOVar7;
                     if (( pOVar7 != (Object*)0x0 ) && ( cVar6 = RefCounted::reference() ),cVar6 == '\0') {
                        local_58 = (Object*)0x0;
                     }

                     if (pOVar5 != (Object*)0x0) goto LAB_0011bdc0;
                  }

               }

            }

            cVar6 = Variant::can_convert_strict(*(undefined4*)*param_1, 5);
            uVar4 = _LC135;
            if (cVar6 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            Variant::operator_cast_to_Vector2(*param_1);
            ( *pcVar10 )((long*)( lVar1 + lVar2 ));
            if (( ( local_58 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar5 = local_58,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
            Memory::free_static(pOVar5, false);
         }

         goto LAB_0011bcc5;
      }

   }
 else {
      ObjectDB::spin_lock._0_1_ = '\0';
   }

}
else{_err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);};local_60 = 0;local_58 = (Object*)0x11a9b2;local_50 = 0x15;String::parse_latin1((StrRange*)&local_60);uitos((ulong)local_70);operator+((char *)local_68,(String *)"Invalid Object id \'");String::operator +((String*)&local_58, (String*)local_68);_err_print_error(&_LC129, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_58, 0, 0);CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);CowData<char32_t>::_unref(local_68);CowData<char32_t>::_unref(local_70);CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);LAB_0011bcc5:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* List<SceneDebuggerTree::RemoteNode, DefaultAllocator>::~List() */void List<SceneDebuggerTree::RemoteNode,DefaultAllocator>::~List(List<SceneDebuggerTree::RemoteNode,DefaultAllocator> *this) {
   void *pvVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   plVar4 = *(long**)this;
   if (plVar4 == (long*)0x0) {
      return;
   }

   do {
      pvVar1 = (void*)*plVar4;
      if (pvVar1 == (void*)0x0) {
         if ((int)plVar4[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( (long)pvVar1 + 0x40 ) == plVar4) {
         lVar3 = *(long*)( (long)pvVar1 + 0x30 );
         lVar2 = *(long*)( (long)pvVar1 + 0x38 );
         *plVar4 = lVar3;
         if (pvVar1 == (void*)plVar4[1]) {
            plVar4[1] = lVar2;
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x30 ) = lVar3;
            lVar3 = *(long*)( (long)pvVar1 + 0x30 );
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x38 ) = lVar2;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 0x20 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 0x10 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 8 ));
         Memory::free_static(pvVar1, false);
         *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar4 = *(long**)this;
   }
 while ( (int)plVar4[2] != 0 );
   Memory::free_static(plVar4, false);
   return;
}
/* void memdelete<LiveEditor>(LiveEditor*) */void memdelete<LiveEditor>(LiveEditor *param_1) {
   uint uVar1;
   uint uVar2;
   int *piVar3;
   long lVar4;
   void *pvVar5;
   void *pvVar6;
   long lVar7;
   pvVar6 = *(void**)( param_1 + 0xa8 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( param_1 + 0xcc ) != 0) {
         uVar1 = ( &hash_table_size_primes )[*(uint*)( param_1 + 200 )];
         if (uVar1 == 0) {
            *(undefined4*)( param_1 + 0xcc ) = 0;
            *(undefined1(*) [16])( param_1 + 0xb8 ) = (undefined1[16])0x0;
         }
 else {
            lVar7 = 0;
            do {
               if (*(int*)( *(long*)( param_1 + 0xb0 ) + lVar7 ) != 0) {
                  pvVar6 = *(void**)( (long)pvVar6 + lVar7 * 2 );
                  *(int*)( *(long*)( param_1 + 0xb0 ) + lVar7 ) = 0;
                  pvVar5 = *(void**)( (long)pvVar6 + 0x20 );
                  if (pvVar5 != (void*)0x0) {
                     if (*(int*)( (long)pvVar6 + 0x44 ) != 0) {
                        uVar2 = ( &hash_table_size_primes )[*(uint*)( (long)pvVar6 + 0x40 )];
                        if (uVar2 == 0) {
                           *(undefined4*)( (long)pvVar6 + 0x44 ) = 0;
                           *(undefined1(*) [16])( (long)pvVar6 + 0x30 ) = (undefined1[16])0x0;
                        }
 else {
                           lVar4 = 0;
                           do {
                              piVar3 = (int*)( *(long*)( (long)pvVar6 + 0x28 ) + lVar4 );
                              if (*piVar3 != 0) {
                                 *piVar3 = 0;
                                 Memory::free_static(*(void**)( (long)pvVar5 + lVar4 * 2 ), false);
                                 pvVar5 = *(void**)( (long)pvVar6 + 0x20 );
                                 *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
                              }

                              lVar4 = lVar4 + 4;
                           }
 while ( (ulong)uVar2 << 2 != lVar4 );
                           *(undefined4*)( (long)pvVar6 + 0x44 ) = 0;
                           *(undefined1(*) [16])( (long)pvVar6 + 0x30 ) = (undefined1[16])0x0;
                           if (pvVar5 == (void*)0x0) goto LAB_0011c235;
                        }

                     }

                     Memory::free_static(pvVar5, false);
                     Memory::free_static(*(void**)( (long)pvVar6 + 0x28 ), false);
                  }

                  LAB_0011c235:Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( param_1 + 0xa8 );
                  *(undefined8*)( (long)pvVar6 + lVar7 * 2 ) = 0;
               }

               lVar7 = lVar7 + 4;
            }
 while ( (ulong)uVar1 * 4 != lVar7 );
            *(undefined4*)( param_1 + 0xcc ) = 0;
            *(undefined1(*) [16])( param_1 + 0xb8 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_0011c27f;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( param_1 + 0xb0 ), false);
   }

   LAB_0011c27f:pvVar6 = *(void**)( param_1 + 0x78 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( param_1 + 0x9c ) != 0) {
         uVar1 = ( &hash_table_size_primes )[*(uint*)( param_1 + 0x98 )];
         if (uVar1 == 0) {
            *(undefined4*)( param_1 + 0x9c ) = 0;
            *(undefined1(*) [16])( param_1 + 0x88 ) = (undefined1[16])0x0;
         }
 else {
            lVar7 = 0;
            do {
               if (*(int*)( *(long*)( param_1 + 0x80 ) + lVar7 ) != 0) {
                  pvVar6 = *(void**)( (long)pvVar6 + lVar7 * 2 );
                  *(int*)( *(long*)( param_1 + 0x80 ) + lVar7 ) = 0;
                  pvVar5 = *(void**)( (long)pvVar6 + 0x18 );
                  if (pvVar5 != (void*)0x0) {
                     if (*(int*)( (long)pvVar6 + 0x3c ) != 0) {
                        if (( &hash_table_size_primes )[*(uint*)( (long)pvVar6 + 0x38 )] != 0) {
                           memset(*(void**)( (long)pvVar6 + 0x30 ), 0, ( ulong )(uint)(&hash_table_size_primes)[*(uint*)( (long)pvVar6 + 0x38 )] << 2);
                        }

                        *(undefined4*)( (long)pvVar6 + 0x3c ) = 0;
                     }

                     Memory::free_static(pvVar5, false);
                     Memory::free_static(*(void**)( (long)pvVar6 + 0x28 ), false);
                     Memory::free_static(*(void**)( (long)pvVar6 + 0x20 ), false);
                     Memory::free_static(*(void**)( (long)pvVar6 + 0x30 ), false);
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar6 + 0x10 ));
                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( param_1 + 0x78 );
                  *(undefined8*)( (long)pvVar6 + lVar7 * 2 ) = 0;
               }

               lVar7 = lVar7 + 4;
            }
 while ( (ulong)uVar1 << 2 != lVar7 );
            *(undefined4*)( param_1 + 0x9c ) = 0;
            *(undefined1(*) [16])( param_1 + 0x88 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_0011c39f;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( param_1 + 0x80 ), false);
   }

   LAB_0011c39f:CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x68 ));
   NodePath::~NodePath((NodePath*)( param_1 + 0x60 ));
   pvVar6 = *(void**)( param_1 + 0x38 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( param_1 + 0x5c ) != 0) {
         uVar1 = ( &hash_table_size_primes )[*(uint*)( param_1 + 0x58 )];
         if (uVar1 == 0) {
            *(undefined4*)( param_1 + 0x5c ) = 0;
            *(undefined1(*) [16])( param_1 + 0x48 ) = (undefined1[16])0x0;
         }
 else {
            lVar7 = 0;
            do {
               if (*(int*)( *(long*)( param_1 + 0x40 ) + lVar7 ) != 0) {
                  pvVar6 = *(void**)( (long)pvVar6 + lVar7 * 2 );
                  *(int*)( *(long*)( param_1 + 0x40 ) + lVar7 ) = 0;
                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar6 + 0x18 ));
                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( param_1 + 0x38 );
                  *(undefined8*)( (long)pvVar6 + lVar7 * 2 ) = 0;
               }

               lVar7 = lVar7 + 4;
            }
 while ( lVar7 != (ulong)uVar1 << 2 );
            *(undefined4*)( param_1 + 0x5c ) = 0;
            *(undefined1(*) [16])( param_1 + 0x48 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_0011c447;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( param_1 + 0x40 ), false);
   }

   LAB_0011c447:pvVar6 = *(void**)( param_1 + 8 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( param_1 + 0x2c ) != 0) {
         uVar1 = ( &hash_table_size_primes )[*(uint*)( param_1 + 0x28 )];
         if (uVar1 == 0) {
            *(undefined4*)( param_1 + 0x2c ) = 0;
            *(undefined1(*) [16])( param_1 + 0x18 ) = (undefined1[16])0x0;
         }
 else {
            lVar7 = 0;
            do {
               if (*(int*)( *(long*)( param_1 + 0x10 ) + lVar7 ) != 0) {
                  pvVar6 = *(void**)( (long)pvVar6 + lVar7 * 2 );
                  *(int*)( *(long*)( param_1 + 0x10 ) + lVar7 ) = 0;
                  NodePath::~NodePath((NodePath*)( (long)pvVar6 + 0x18 ));
                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( param_1 + 8 );
                  *(undefined8*)( (long)pvVar6 + lVar7 * 2 ) = 0;
               }

               lVar7 = lVar7 + 4;
            }
 while ( lVar7 != (ulong)uVar1 << 2 );
            *(undefined4*)( param_1 + 0x2c ) = 0;
            *(undefined1(*) [16])( param_1 + 0x18 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_0011c4d7;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( param_1 + 0x10 ), false);
   }

   LAB_0011c4d7:Memory::free_static(param_1, false);
   return;
}
/* StandardMaterial3D::_initialize_classv() */void StandardMaterial3D::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BaseMaterial3D::initialize_class()::initialized == '\0') {
      if (Material::initialize_class()::initialized == '\0') {
        if (Resource::initialize_class()::initialized == '\0') {
          if (RefCounted::initialize_class()::initialized == '\0') {
            Object::initialize_class();
            local_68 = 0;
            local_50 = 6;
            local_58 = "Object";
            String::parse_latin1((StrRange *)&local_68);
            StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
            local_58 = "RefCounted";
            local_70 = 0;
            local_50 = 10;
            String::parse_latin1((StrRange *)&local_70);
            StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if ((StringName::configured != '\0') && (local_60 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            if ((code *)PTR__bind_methods_00127020 != RefCounted::_bind_methods) {
              RefCounted::_bind_methods();
            }
            RefCounted::initialize_class()::initialized = '\x01';
          }
          local_58 = "RefCounted";
          local_68 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Resource";
          local_70 = 0;
          local_50 = 8;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          Resource::_bind_methods();
          Resource::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Resource";
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Material";
        local_70 = 0;
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        Material::_bind_methods();
        Material::initialize_class()::initialized = '\x01';
      }
      local_58 = "Material";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "BaseMaterial3D";
      local_70 = 0;
      local_50 = 0xe;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00127018 != Material::_bind_methods) {
        BaseMaterial3D::_bind_methods();
      }
      BaseMaterial3D::initialize_class()::initialized = '\x01';
    }
    local_58 = "BaseMaterial3D";
    local_68 = 0;
    local_50 = 0xe;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "StandardMaterial3D";
    local_70 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined7 in_register_00000031;
  List *pLVar5;
  long in_FS_OFFSET;
  StringName *local_a8;
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
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_0011cccd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011cccd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0011ccef;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0011ccef:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RuntimeNodeSelect::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RuntimeNodeSelect::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined7 in_register_00000031;
  List *pLVar5;
  long in_FS_OFFSET;
  StringName *local_a8;
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
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "RuntimeNodeSelect";
  local_88 = 0;
  local_90 = 0;
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RuntimeNodeSelect";
  local_98 = 0;
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_0011d03d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011d03d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0011d05f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0011d05f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RuntimeNodeSelect",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011d391;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d391:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Resource",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Material::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Material::_get_property_listv(Material *this,List *param_1,bool param_2)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Material";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Material";
  local_98 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011d641;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d641:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Material",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BaseMaterial3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BaseMaterial3D::_get_property_listv(BaseMaterial3D *this,List *param_1,bool param_2)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Material::_get_property_listv((Material *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BaseMaterial3D";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BaseMaterial3D";
  local_98 = 0;
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011d8f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d8f1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"BaseMaterial3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Material::_get_property_listv((Material *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StandardMaterial3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
StandardMaterial3D::_get_property_listv(StandardMaterial3D *this,List *param_1,bool param_2)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    BaseMaterial3D::_get_property_listv((BaseMaterial3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "StandardMaterial3D";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "StandardMaterial3D";
  local_98 = 0;
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011dba1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011dba1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"StandardMaterial3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BaseMaterial3D::_get_property_listv((BaseMaterial3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*plVar4;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x40) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x30);
      lVar2 = *(long *)((long)pvVar1 + 0x38);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x30) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x30);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x38) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
      Memory::free_static(pvVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* List<Pair<PropertyInfo, Variant>, DefaultAllocator>::~List() */

void __thiscall
List<Pair<PropertyInfo,Variant>,DefaultAllocator>::~List
          (List<Pair<PropertyInfo,Variant>,DefaultAllocator> *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*puVar2;
    if (pvVar1 == (void *)0x0) {
      if (*(int *)(puVar2 + 2) != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(undefined8 **)((long)pvVar1 + 0x58) == puVar2) {
      *puVar2 = *(undefined8 *)((long)pvVar1 + 0x48);
      if (pvVar1 == (void *)puVar2[1]) {
        puVar2[1] = *(undefined8 *)((long)pvVar1 + 0x50);
      }
      if (*(long *)((long)pvVar1 + 0x50) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar1 + 0x50) + 0x48) =
             *(undefined8 *)((long)pvVar1 + 0x48);
      }
      if (*(long *)((long)pvVar1 + 0x48) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar1 + 0x48) + 0x50) =
             *(undefined8 *)((long)pvVar1 + 0x50);
      }
      if (Variant::needs_deinit[*(int *)((long)pvVar1 + 0x30)] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
      Memory::free_static(pvVar1,false);
      *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar2 = *(undefined8 **)this;
  } while (*(int *)(puVar2 + 2) != 0);
  Memory::free_static(puVar2,false);
  return;
}



/* Ref<Resource>::unref() */

void __thiscall Ref<Resource>::unref(Ref<Resource> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* HashMap<String, HashSet<Node*, HashMapHasherDefault, HashMapComparatorDefault<Node*> >,
   HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, HashSet<Node*, HashMapHasherDefault,
   HashMapComparatorDefault<Node*> > > > >::_lookup_pos(String const&, unsigned int&) const */

undefined8 __thiscall
HashMap<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>>>>
::_lookup_pos(HashMap<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>>>>
              *this,String *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar1 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar11 = String::hash();
    uVar13 = 1;
    if (uVar11 != 0) {
      uVar13 = uVar11;
    }
    lVar17 = *(long *)(this + 0x10);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(lVar17 + lVar15 * 4);
    uVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        if (uVar13 == uVar11) {
          uVar12 = String::operator==((String *)(*(long *)(*(long *)(this + 8) + lVar15 * 8) + 0x10)
                                      ,param_1);
          if ((char)uVar12 != '\0') {
            *param_2 = uVar14;
            return uVar12;
          }
          lVar17 = *(long *)(this + 0x10);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(lVar17 + lVar15 * 4);
        uVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar11 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, HashSet<Node*, HashMapHasherDefault, HashMapComparatorDefault<Node*> >,
   HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, HashSet<Node*, HashMapHasherDefault,
   HashMapComparatorDefault<Node*> > > > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>>>>
::operator[](HashMap<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>>>>
             *this,String *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *__s;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  char cVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  undefined8 uVar26;
  void *__s_00;
  undefined1 (*pauVar27) [16];
  void *pvVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  uint uVar32;
  ulong uVar33;
  undefined8 uVar34;
  uint *puVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined1 (*pauVar40) [16];
  undefined1 (*pauVar41) [16];
  long in_FS_OFFSET;
  uint local_90;
  uint local_8c;
  undefined1 local_88 [16];
  long local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 0;
  cVar22 = _lookup_pos(this,param_1,&local_90);
  if (cVar22 == '\0') {
    uVar32 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
    if (*(long *)(this + 8) == 0) {
      uVar33 = (ulong)uVar32;
      uVar25 = uVar33 * 4;
      uVar39 = uVar33 * 8;
      uVar26 = Memory::alloc_static(uVar25,false);
      *(undefined8 *)(this + 0x10) = uVar26;
      pvVar28 = (void *)Memory::alloc_static(uVar39,false);
      *(void **)(this + 8) = pvVar28;
      if (uVar32 != 0) {
        pvVar2 = *(void **)(this + 0x10);
        if ((pvVar2 < (void *)((long)pvVar28 + uVar39)) &&
           (pvVar28 < (void *)((long)pvVar2 + uVar25))) {
          uVar25 = 0;
          do {
            *(undefined4 *)((long)pvVar2 + uVar25 * 4) = 0;
            *(undefined8 *)((long)pvVar28 + uVar25 * 8) = 0;
            uVar25 = uVar25 + 1;
          } while (uVar33 != uVar25);
        }
        else {
          memset(pvVar2,0,uVar25);
          memset(pvVar28,0,uVar39);
        }
      }
    }
    local_8c = 0;
    cVar22 = _lookup_pos(this,param_1,&local_8c);
    if (cVar22 == '\0') {
      if ((float)uVar32 * __LC70 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar32 = *(uint *)(this + 0x28);
        if (uVar32 == 0x1c) {
          pauVar27 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_0011e56b;
        }
        uVar25 = (ulong)(uVar32 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar24 = (&hash_table_size_primes)[uVar32];
        if (uVar32 + 1 < 2) {
          uVar25 = 2;
        }
        uVar32 = (&hash_table_size_primes)[uVar25];
        uVar33 = (ulong)uVar32;
        *(int *)(this + 0x28) = (int)uVar25;
        pvVar28 = *(void **)(this + 8);
        uVar25 = uVar33 * 4;
        uVar39 = uVar33 * 8;
        pvVar2 = *(void **)(this + 0x10);
        uVar26 = Memory::alloc_static(uVar25,false);
        *(undefined8 *)(this + 0x10) = uVar26;
        __s_00 = (void *)Memory::alloc_static(uVar39,false);
        *(void **)(this + 8) = __s_00;
        if (uVar32 != 0) {
          __s = *(void **)(this + 0x10);
          if ((__s < (void *)((long)__s_00 + uVar39)) && (__s_00 < (void *)((long)__s + uVar25))) {
            uVar25 = 0;
            do {
              *(undefined4 *)((long)__s + uVar25 * 4) = 0;
              *(undefined8 *)((long)__s_00 + uVar25 * 8) = 0;
              uVar25 = uVar25 + 1;
            } while (uVar33 != uVar25);
          }
          else {
            memset(__s,0,uVar25);
            memset(__s_00,0,uVar39);
          }
        }
        if (uVar24 != 0) {
          uVar25 = 0;
          do {
            uVar32 = *(uint *)((long)pvVar2 + uVar25 * 4);
            if (uVar32 != 0) {
              lVar3 = *(long *)(this + 0x10);
              uVar37 = 0;
              uVar36 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
              uVar39 = CONCAT44(0,uVar36);
              lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (ulong)uVar32 * lVar4;
              auVar13._8_8_ = 0;
              auVar13._0_8_ = uVar39;
              lVar30 = SUB168(auVar5 * auVar13,8);
              puVar35 = (uint *)(lVar3 + lVar30 * 4);
              iVar29 = SUB164(auVar5 * auVar13,8);
              uVar38 = *puVar35;
              uVar26 = *(undefined8 *)((long)pvVar28 + uVar25 * 8);
              while (uVar38 != 0) {
                auVar6._8_8_ = 0;
                auVar6._0_8_ = (ulong)uVar38 * lVar4;
                auVar14._8_8_ = 0;
                auVar14._0_8_ = uVar39;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = (ulong)((uVar36 + iVar29) - SUB164(auVar6 * auVar14,8)) * lVar4;
                auVar15._8_8_ = 0;
                auVar15._0_8_ = uVar39;
                uVar23 = SUB164(auVar7 * auVar15,8);
                uVar34 = uVar26;
                if (uVar23 < uVar37) {
                  *puVar35 = uVar32;
                  puVar1 = (undefined8 *)((long)__s_00 + lVar30 * 8);
                  uVar34 = *puVar1;
                  *puVar1 = uVar26;
                  uVar32 = uVar38;
                  uVar37 = uVar23;
                }
                uVar37 = uVar37 + 1;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)(iVar29 + 1) * lVar4;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar39;
                lVar30 = SUB168(auVar8 * auVar16,8);
                puVar35 = (uint *)(lVar3 + lVar30 * 4);
                iVar29 = SUB164(auVar8 * auVar16,8);
                uVar26 = uVar34;
                uVar38 = *puVar35;
              }
              *(undefined8 *)((long)__s_00 + lVar30 * 8) = uVar26;
              *puVar35 = uVar32;
              *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
            }
            uVar25 = uVar25 + 1;
          } while (uVar24 != uVar25);
          Memory::free_static(pvVar28,false);
          Memory::free_static(pvVar2,false);
        }
      }
      local_78 = 0;
      local_88 = (undefined1  [16])0x0;
      if (*(long *)param_1 == 0) {
        pauVar27 = (undefined1 (*) [16])operator_new(0x40,"");
        uVar26 = _LC25;
        *(undefined8 *)pauVar27[1] = 0;
        *pauVar27 = (undefined1  [16])0x0;
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)param_1);
        lVar3 = local_78;
        uVar26 = _LC25;
        uVar34 = local_88._0_8_;
        uVar21 = local_88._8_8_;
        local_70 = (undefined1  [16])0x0;
        local_50 = _LC25;
        local_60 = (undefined1  [16])0x0;
        pauVar27 = (undefined1 (*) [16])operator_new(0x40,"");
        *(undefined8 *)pauVar27[1] = 0;
        *(undefined8 *)*pauVar27 = uVar34;
        *(undefined8 *)(*pauVar27 + 8) = uVar21;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar27 + 1),(CowData *)&local_78);
        }
      }
      *(undefined8 *)(pauVar27[3] + 8) = uVar26;
      *(undefined1 (*) [16])(pauVar27[1] + 8) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pauVar27[2] + 8) = (undefined1  [16])0x0;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      puVar1 = *(undefined8 **)(this + 0x20);
      if (puVar1 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar27;
      }
      else {
        *puVar1 = pauVar27;
        *(undefined8 **)(*pauVar27 + 8) = puVar1;
      }
      *(undefined1 (**) [16])(this + 0x20) = pauVar27;
      uVar24 = String::hash();
      lVar3 = *(long *)(this + 0x10);
      uVar32 = 1;
      if (uVar24 != 0) {
        uVar32 = uVar24;
      }
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar24 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
      uVar25 = CONCAT44(0,uVar24);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar32 * lVar4;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar25;
      lVar31 = SUB168(auVar9 * auVar17,8);
      lVar30 = *(long *)(this + 8);
      puVar35 = (uint *)(lVar3 + lVar31 * 4);
      iVar29 = SUB164(auVar9 * auVar17,8);
      uVar36 = *puVar35;
      pauVar41 = pauVar27;
      if (uVar36 != 0) {
        uVar38 = 0;
        pauVar40 = pauVar27;
        do {
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)uVar36 * lVar4;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar25;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)((iVar29 + uVar24) - SUB164(auVar10 * auVar18,8)) * lVar4;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar25;
          uVar37 = SUB164(auVar11 * auVar19,8);
          pauVar41 = pauVar40;
          if (uVar37 < uVar38) {
            *puVar35 = uVar32;
            puVar1 = (undefined8 *)(lVar30 + lVar31 * 8);
            pauVar41 = (undefined1 (*) [16])*puVar1;
            *puVar1 = pauVar40;
            uVar38 = uVar37;
            uVar32 = uVar36;
          }
          uVar38 = uVar38 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(iVar29 + 1) * lVar4;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar25;
          lVar31 = SUB168(auVar12 * auVar20,8);
          puVar35 = (uint *)(lVar3 + lVar31 * 4);
          iVar29 = SUB164(auVar12 * auVar20,8);
          uVar36 = *puVar35;
          pauVar40 = pauVar41;
        } while (uVar36 != 0);
      }
      *(undefined1 (**) [16])(lVar30 + lVar31 * 8) = pauVar41;
      *puVar35 = uVar32;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      uVar25 = (ulong)local_8c;
      pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + uVar25 * 8);
      pvVar28 = *(void **)(pauVar41[1] + 8);
      pauVar27 = pauVar41;
      if (pvVar28 != (void *)0x0) {
        if (*(int *)(pauVar41[3] + 0xc) != 0) {
          if ((&hash_table_size_primes)[*(uint *)(pauVar41[3] + 8)] != 0) {
            memset(*(void **)pauVar41[3],0,
                   (ulong)(uint)(&hash_table_size_primes)[*(uint *)(pauVar41[3] + 8)] * 4);
          }
          *(undefined4 *)(pauVar41[3] + 0xc) = 0;
        }
        Memory::free_static(pvVar28,false);
        Memory::free_static(*(void **)(pauVar41[2] + 8),false);
        Memory::free_static(*(void **)pauVar41[2],false);
        Memory::free_static(*(void **)pauVar41[3],false);
        *(undefined1 (*) [16])(pauVar41[1] + 8) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pauVar41[2] + 8) = (undefined1  [16])0x0;
        pauVar27 = *(undefined1 (**) [16])(*(long *)(this + 8) + uVar25 * 8);
      }
      *(undefined8 *)(pauVar41[3] + 8) = 2;
    }
  }
  else {
    pauVar27 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_90 * 8);
  }
LAB_0011e56b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar27[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::_resize_and_rehash(unsigned int)
    */

void __thiscall
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::_resize_and_rehash
          (HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           *this,uint param_1)

{
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
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = (&hash_table_size_primes)[param_1];
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::insert(StringName const&, Variant
   const&, bool) */

StringName *
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::insert(StringName *param_1,Variant *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  void *__s;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulong uVar21;
  undefined8 *puVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  undefined8 uVar26;
  void *__s_00;
  Variant *in_RCX;
  uint uVar27;
  int iVar28;
  undefined7 in_register_00000011;
  StringName *pSVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  char in_R8B;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  undefined8 *puVar36;
  long in_FS_OFFSET;
  undefined8 *local_90;
  long local_68;
  int local_60 [8];
  long local_40;
  
  pSVar29 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
  if (*(long *)(param_2 + 8) == 0) {
    uVar21 = (ulong)uVar23;
    uVar32 = uVar21 * 4;
    uVar34 = uVar21 * 8;
    uVar26 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar26;
    __s_00 = (void *)Memory::alloc_static(uVar34,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar23 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar34)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar21 != uVar32);
      }
      else {
        memset(__s,0,uVar32);
        memset(__s_00,0,uVar34);
      }
      goto LAB_0011eaf2;
    }
    iVar28 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0011ebe9;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_0011eafe;
LAB_0011ec0b:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_90 = (undefined8 *)0x0;
      goto LAB_0011edc3;
    }
    _resize_and_rehash((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_0011eaf2:
    iVar28 = *(int *)(param_2 + 0x2c);
    if (iVar28 != 0) {
LAB_0011eafe:
      uVar3 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
      uVar32 = CONCAT44(0,uVar3);
      lVar25 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar29 == 0) {
        uVar24 = StringName::get_empty_hash();
      }
      else {
        uVar24 = *(uint *)(*(long *)pSVar29 + 0x20);
      }
      if (uVar24 == 0) {
        uVar24 = 1;
      }
      uVar35 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar24 * lVar25;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar32;
      lVar30 = SUB168(auVar5 * auVar13,8);
      uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
      uVar27 = SUB164(auVar5 * auVar13,8);
      if (uVar33 != 0) {
        do {
          if ((uVar33 == uVar24) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar30 * 8) + 0x10) == *(long *)pSVar29))
          {
            Variant::operator=((Variant *)
                               (*(long *)(*(long *)(param_2 + 8) + (ulong)uVar27 * 8) + 0x18),in_RCX
                              );
            local_90 = *(undefined8 **)(*(long *)(param_2 + 8) + (ulong)uVar27 * 8);
            goto LAB_0011edc3;
          }
          uVar35 = uVar35 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar27 + 1) * lVar25;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar32;
          lVar30 = SUB168(auVar6 * auVar14,8);
          uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
          uVar27 = SUB164(auVar6 * auVar14,8);
        } while ((uVar33 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar33 * lVar25, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar32, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar3 + uVar27) - SUB164(auVar7 * auVar15,8)) * lVar25,
                auVar16._8_8_ = 0, auVar16._0_8_ = uVar32, uVar35 <= SUB164(auVar8 * auVar16,8)));
      }
      iVar28 = *(int *)(param_2 + 0x2c);
    }
LAB_0011ebe9:
    if ((float)uVar23 * __LC70 < (float)(iVar28 + 1)) goto LAB_0011ec0b;
  }
  StringName::StringName((StringName *)&local_68,pSVar29);
  Variant::Variant((Variant *)local_60,in_RCX);
  local_90 = (undefined8 *)operator_new(0x30,"");
  *local_90 = 0;
  local_90[1] = 0;
  StringName::StringName((StringName *)(local_90 + 2),(StringName *)&local_68);
  Variant::Variant((Variant *)(local_90 + 3),(Variant *)local_60);
  if (Variant::needs_deinit[local_60[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  if (*(undefined8 **)(param_2 + 0x20) == (undefined8 *)0x0) {
    *(undefined8 **)(param_2 + 0x18) = local_90;
    *(undefined8 **)(param_2 + 0x20) = local_90;
LAB_0011ece2:
    lVar25 = *(long *)pSVar29;
    if (lVar25 != 0) goto LAB_0011ecef;
LAB_0011ee25:
    uVar23 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      **(undefined8 **)(param_2 + 0x20) = local_90;
      local_90[1] = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 **)(param_2 + 0x20) = local_90;
      goto LAB_0011ece2;
    }
    *(undefined8 **)(*(long *)(param_2 + 0x18) + 8) = local_90;
    *local_90 = *(undefined8 *)(param_2 + 0x18);
    lVar25 = *(long *)pSVar29;
    *(undefined8 **)(param_2 + 0x18) = local_90;
    if (lVar25 == 0) goto LAB_0011ee25;
LAB_0011ecef:
    uVar23 = *(uint *)(lVar25 + 0x20);
  }
  lVar25 = *(long *)(param_2 + 0x10);
  if (uVar23 == 0) {
    uVar23 = 1;
  }
  uVar32 = (ulong)uVar23;
  uVar33 = 0;
  lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar3 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
  uVar34 = CONCAT44(0,uVar3);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar32 * lVar30;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar34;
  lVar31 = SUB168(auVar9 * auVar17,8);
  lVar4 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar25 + lVar31 * 4);
  iVar28 = SUB164(auVar9 * auVar17,8);
  uVar24 = *puVar1;
  puVar22 = local_90;
  while (uVar24 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar24 * lVar30;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar34;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((iVar28 + uVar3) - SUB164(auVar10 * auVar18,8)) * lVar30;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar34;
    uVar23 = SUB164(auVar11 * auVar19,8);
    puVar36 = puVar22;
    if (uVar23 < uVar33) {
      *puVar1 = (uint)uVar32;
      uVar32 = (ulong)uVar24;
      puVar2 = (undefined8 *)(lVar4 + lVar31 * 8);
      puVar36 = (undefined8 *)*puVar2;
      *puVar2 = puVar22;
      uVar33 = uVar23;
    }
    uVar23 = (uint)uVar32;
    uVar33 = uVar33 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar28 + 1) * lVar30;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar34;
    lVar31 = SUB168(auVar12 * auVar20,8);
    puVar1 = (uint *)(lVar25 + lVar31 * 4);
    iVar28 = SUB164(auVar12 * auVar20,8);
    puVar22 = puVar36;
    uVar24 = *puVar1;
  }
  *(undefined8 **)(lVar4 + lVar31 * 8) = puVar22;
  *puVar1 = uVar23;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0011edc3:
  *(undefined8 **)param_1 = local_90;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> >
   >::TEMPNAMEPLACEHOLDERVALUE(HashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName, Variant> >
   > const&) */

void __thiscall
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::operator=(HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            *this,HashMap *param_1)

{
  void *pvVar1;
  uint uVar2;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  StringName local_48 [8];
  long local_40;
  ulong uVar3;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this != (HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
               *)param_1) {
    uVar4 = *(uint *)(this + 0x28);
    uVar2 = (&hash_table_size_primes)[uVar4];
    if ((*(int *)(this + 0x2c) != 0) && (*(long *)(this + 8) != 0)) {
      if (uVar2 != 0) {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x10) + lVar6) != 0) {
            *(int *)(*(long *)(this + 0x10) + lVar6) = 0;
            pvVar1 = *(void **)(*(long *)(this + 8) + lVar6 * 2);
            if (Variant::needs_deinit[*(int *)((long)pvVar1 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar1,false);
            *(undefined8 *)(*(long *)(this + 8) + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar2 << 2);
        uVar4 = *(uint *)(this + 0x28);
        uVar2 = (&hash_table_size_primes)[uVar4];
      }
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    if (uVar2 < (uint)(&hash_table_size_primes)[*(uint *)(param_1 + 0x28)]) {
      if (uVar4 != 0x1c) {
        uVar3 = (ulong)uVar4;
        do {
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulong)uVar2;
          if ((uint)(&hash_table_size_primes)[*(uint *)(param_1 + 0x28)] <=
              (uint)(&hash_table_size_primes)[uVar3]) {
            if (uVar2 != uVar4) {
              if (*(long *)(this + 8) == 0) {
                *(uint *)(this + 0x28) = uVar2;
              }
              else {
                _resize_and_rehash(this,uVar2);
              }
            }
            goto LAB_0011f079;
          }
        } while (uVar2 != 0x1c);
      }
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
    }
LAB_0011f079:
    if ((*(long *)(param_1 + 8) != 0) &&
       (plVar5 = *(long **)(param_1 + 0x18), plVar5 != (long *)0x0)) {
      do {
        insert(local_48,(Variant *)this,(bool)((char)plVar5 + '\x10'));
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Script const*, HashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName, Variant> >
   >, HashMapHasherDefault, HashMapComparatorDefault<Script const*>,
   DefaultTypedAllocator<HashMapElement<Script const*, HashMap<StringName, Variant,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > > > >::operator[](Script const*
   const&) */

undefined1 * __thiscall
HashMap<Script_const*,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<Script_const*>,DefaultTypedAllocator<HashMapElement<Script_const*,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>>>>
::operator[](HashMap<Script_const*,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>,HashMapHasherDefault,HashMapComparatorDefault<Script_const*>,DefaultTypedAllocator<HashMapElement<Script_const*,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>>>>
             *this,Script **param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *__s;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 (*pauVar37) [16];
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  long lVar43;
  uint uVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  undefined8 uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  ulong uVar52;
  uint uVar53;
  ulong uVar54;
  ulong uVar55;
  Script *pSVar56;
  undefined1 (*pauVar57) [16];
  long in_FS_OFFSET;
  void *local_b0;
  HashMap local_78 [8];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_b0 = *(void **)(this + 8);
  pSVar56 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  uVar49 = (&hash_table_size_primes)[uVar40];
  uVar55 = CONCAT44(0,uVar49);
  if (local_b0 == (void *)0x0) {
    local_50 = 2;
    uVar40 = uVar55 * 4;
    local_70 = (undefined1  [16])0x0;
    uVar39 = uVar55 * 8;
    local_60 = (undefined1  [16])0x0;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    local_b0 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = local_b0;
    if (uVar49 == 0) {
      iVar45 = *(int *)(this + 0x2c);
      pSVar56 = *param_1;
      if (local_b0 == (void *)0x0) goto LAB_0011f48b;
    }
    else {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_b0 + uVar39)) &&
         (local_b0 < (void *)((long)pvVar4 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_b0 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar55 != uVar40);
        iVar45 = *(int *)(this + 0x2c);
        pSVar56 = *param_1;
      }
      else {
        memset(pvVar4,0,uVar40);
        memset(local_b0,0,uVar39);
        iVar45 = *(int *)(this + 0x2c);
        pSVar56 = *param_1;
      }
    }
    if (iVar45 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar43 = *(long *)(this + 0x10);
      goto LAB_0011f37a;
    }
  }
  else {
    iVar45 = *(int *)(this + 0x2c);
    if (iVar45 == 0) {
      local_50 = 2;
      local_70 = (undefined1  [16])0x0;
      local_60 = (undefined1  [16])0x0;
    }
    else {
      lVar43 = *(long *)(this + 0x10);
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (long)pSVar56 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar54 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar54 * lVar3;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar55;
      lVar46 = SUB168(auVar5 * auVar21,8);
      uVar44 = *(uint *)(lVar43 + lVar46 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar44 != 0) {
        uVar51 = 0;
        do {
          if ((uVar44 == (uint)uVar54) &&
             (pSVar56 == *(Script **)(*(long *)((long)local_b0 + lVar46 * 8) + 0x10))) {
            pauVar42 = *(undefined1 (**) [16])((long)local_b0 + (ulong)uVar53 * 8);
            goto LAB_0011f333;
          }
          uVar51 = uVar51 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar3;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar55;
          lVar46 = SUB168(auVar6 * auVar22,8);
          uVar44 = *(uint *)(lVar43 + lVar46 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar44 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar44 * lVar3, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar55, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar49) - SUB164(auVar7 * auVar23,8)) * lVar3,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar55, uVar51 <= SUB164(auVar8 * auVar24,8)));
      }
      local_50 = 2;
      local_70 = (undefined1  [16])0x0;
      local_60 = (undefined1  [16])0x0;
LAB_0011f37a:
      uVar52 = CONCAT44(0,(&hash_table_size_primes)[uVar40]);
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (long)pSVar56 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar54 = 1;
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar54 * lVar3;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar52;
      lVar46 = SUB168(auVar9 * auVar25,8);
      uVar49 = *(uint *)(lVar43 + lVar46 * 4);
      uVar44 = SUB164(auVar9 * auVar25,8);
      if (uVar49 != 0) {
        uVar53 = 0;
        do {
          if ((uVar49 == (uint)uVar54) &&
             (*(Script **)(*(long *)((long)local_b0 + lVar46 * 8) + 0x10) == pSVar56)) {
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator=((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                         *)(*(long *)((long)local_b0 + (ulong)uVar44 * 8) + 0x18),local_78);
            pauVar42 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar44 * 8);
            goto LAB_0011f333;
          }
          uVar53 = uVar53 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)(uVar44 + 1) * lVar3;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar52;
          lVar46 = SUB168(auVar10 * auVar26,8);
          uVar49 = *(uint *)(lVar43 + lVar46 * 4);
          uVar44 = SUB164(auVar10 * auVar26,8);
        } while ((uVar49 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar49 * lVar3, auVar27._8_8_ = 0,
                auVar27._0_8_ = uVar52, auVar12._8_8_ = 0,
                auVar12._0_8_ =
                     (ulong)(((&hash_table_size_primes)[uVar40] + uVar44) -
                            SUB164(auVar11 * auVar27,8)) * lVar3, auVar28._8_8_ = 0,
                auVar28._0_8_ = uVar52, uVar53 <= SUB164(auVar12 * auVar28,8)));
      }
    }
  }
LAB_0011f48b:
  if ((float)uVar55 * __LC70 < (float)(iVar45 + 1)) {
    uVar49 = *(uint *)(this + 0x28);
    if (uVar49 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011f333;
    }
    uVar40 = (ulong)(uVar49 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar44 = (&hash_table_size_primes)[uVar49];
    if (uVar49 + 1 < 2) {
      uVar40 = 2;
    }
    uVar49 = (&hash_table_size_primes)[uVar40];
    uVar39 = (ulong)uVar49;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar4 = *(void **)(this + 0x10);
    uVar40 = uVar39 * 4;
    uVar55 = uVar39 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar55,false);
    *(void **)(this + 8) = __s_00;
    if (uVar49 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar55)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar39 != uVar40);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar55);
      }
    }
    if (uVar44 != 0) {
      uVar40 = 0;
      do {
        uVar49 = *(uint *)((long)pvVar4 + uVar40 * 4);
        if (uVar49 != 0) {
          lVar43 = *(long *)(this + 0x10);
          uVar50 = 0;
          uVar53 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
          uVar55 = CONCAT44(0,uVar53);
          lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)uVar49 * lVar3;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar55;
          lVar46 = SUB168(auVar13 * auVar29,8);
          puVar1 = (uint *)(lVar43 + lVar46 * 4);
          iVar45 = SUB164(auVar13 * auVar29,8);
          uVar51 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_b0 + uVar40 * 8);
          while (uVar51 != 0) {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)uVar51 * lVar3;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar55;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)((uVar53 + iVar45) - SUB164(auVar14 * auVar30,8)) * lVar3;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar55;
            uVar38 = SUB164(auVar15 * auVar31,8);
            uVar48 = uVar41;
            if (uVar38 < uVar50) {
              *puVar1 = uVar49;
              puVar2 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar48 = *puVar2;
              *puVar2 = uVar41;
              uVar49 = uVar51;
              uVar50 = uVar38;
            }
            uVar50 = uVar50 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(iVar45 + 1) * lVar3;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar55;
            lVar46 = SUB168(auVar16 * auVar32,8);
            puVar1 = (uint *)(lVar43 + lVar46 * 4);
            iVar45 = SUB164(auVar16 * auVar32,8);
            uVar41 = uVar48;
            uVar51 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar41;
          *puVar1 = uVar49;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar40 != uVar44);
      Memory::free_static(local_b0,false);
      Memory::free_static(pvVar4,false);
    }
  }
  uVar40 = 1;
  pSVar56 = *param_1;
  do {
    if (0x16 < (uint)(&hash_table_size_primes)[uVar40]) goto LAB_0011f6f6;
    uVar40 = uVar40 + 1;
  } while (uVar40 != 0x1d);
  uVar40 = 0;
  _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                   "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
LAB_0011f6f6:
  pauVar42 = (undefined1 (*) [16])operator_new(0x48,"");
  *(Script **)pauVar42[1] = pSVar56;
  *(undefined8 *)pauVar42[4] = 0;
  *pauVar42 = (undefined1  [16])0x0;
  pauVar42[2] = (undefined1  [16])0x0;
  pauVar42[3] = (undefined1  [16])0x0;
  lVar43 = 1;
  if (5 < (uint)(&hash_table_size_primes)[uVar40 & 0xffffffff]) {
    do {
      if ((uint)(&hash_table_size_primes)[uVar40 & 0xffffffff] <=
          (uint)(&hash_table_size_primes)[lVar43]) {
        *(int *)pauVar42[4] = (int)lVar43;
        puVar2 = *(undefined8 **)(this + 0x20);
        goto joined_r0x0011f90a;
      }
      lVar43 = lVar43 + 1;
    } while (lVar43 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
  puVar2 = *(undefined8 **)(this + 0x20);
joined_r0x0011f90a:
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  lVar43 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar40 = (long)*param_1 * 0x3ffff - 1;
  uVar40 = (uVar40 ^ uVar40 >> 0x1f) * 0x15;
  uVar40 = (uVar40 ^ uVar40 >> 0xb) * 0x41;
  uVar40 = uVar40 >> 0x16 ^ uVar40;
  uVar55 = uVar40 & 0xffffffff;
  if ((int)uVar40 == 0) {
    uVar55 = 1;
  }
  uVar51 = 0;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar53 = (uint)uVar55;
  uVar49 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar40 = CONCAT44(0,uVar49);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar55 * lVar3;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar40;
  lVar47 = SUB168(auVar17 * auVar33,8);
  lVar46 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar43 + lVar47 * 4);
  iVar45 = SUB164(auVar17 * auVar33,8);
  uVar44 = *puVar1;
  pauVar37 = pauVar42;
  while (uVar44 != 0) {
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)uVar44 * lVar3;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar40;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)((uVar49 + iVar45) - SUB164(auVar18 * auVar34,8)) * lVar3;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar40;
    uVar53 = SUB164(auVar19 * auVar35,8);
    pauVar57 = pauVar37;
    if (uVar53 < uVar51) {
      *puVar1 = (uint)uVar55;
      uVar55 = (ulong)uVar44;
      puVar2 = (undefined8 *)(lVar46 + lVar47 * 8);
      pauVar57 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar51 = uVar53;
    }
    uVar53 = (uint)uVar55;
    uVar51 = uVar51 + 1;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)(iVar45 + 1) * lVar3;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar40;
    lVar47 = SUB168(auVar20 * auVar36,8);
    puVar1 = (uint *)(lVar43 + lVar47 * 4);
    iVar45 = SUB164(auVar20 * auVar36,8);
    pauVar37 = pauVar57;
    uVar44 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar46 + lVar47 * 8) = pauVar37;
  *puVar1 = uVar53;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011f333:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar42[1] + 8;
}



/* HashMap<ObjectID, Node*, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, Node*> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>
::_resize_and_rehash
          (HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>
           *this,uint param_1)

{
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
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = (&hash_table_size_primes)[param_1];
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<ObjectID, Node*, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, Node*> > >::operator[](ObjectID const&) */

undefined1  [16] __thiscall
HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>
::operator[](HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>
             *this,ObjectID *param_1)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 (*pauVar28) [16];
  ulong uVar29;
  undefined1 (*pauVar30) [16];
  ulong uVar31;
  undefined8 uVar32;
  void *__s_00;
  uint uVar33;
  long lVar34;
  long lVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  uint uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  undefined1 (*pauVar44) [16];
  long lVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  long lStack_90;
  uint local_88;
  
  uVar31 = (ulong)*(uint *)(this + 0x28);
  __s_00 = *(void **)(this + 8);
  lVar45 = *(long *)param_1;
  uVar37 = (&hash_table_size_primes)[uVar31];
  uVar43 = CONCAT44(0,uVar37);
  if (__s_00 == (void *)0x0) {
    uVar31 = uVar43 * 4;
    uVar29 = uVar43 * 8;
    uVar32 = Memory::alloc_static(uVar31,false);
    *(undefined8 *)(this + 0x10) = uVar32;
    lStack_90 = 0x120150;
    __s_00 = (void *)Memory::alloc_static(uVar29,false);
    *(void **)(this + 8) = __s_00;
    if (uVar37 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar29)) && (__s_00 < (void *)((long)__s + uVar31))) {
        uVar31 = 0;
        do {
          *(undefined4 *)((long)__s + uVar31 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar31 * 8) = 0;
          uVar31 = uVar31 + 1;
        } while (uVar43 != uVar31);
        lVar45 = *(long *)param_1;
        iVar36 = *(int *)(this + 0x2c);
      }
      else {
        memset(__s,0,uVar31);
        lStack_90 = 0x12019a;
        memset(__s_00,0,uVar29);
        lVar45 = *(long *)param_1;
        iVar36 = *(int *)(this + 0x2c);
      }
LAB_001201a9:
      if (iVar36 == 0) goto LAB_00120240;
      uVar31 = (ulong)*(uint *)(this + 0x28);
      lVar39 = *(long *)(this + 0x10);
      goto LAB_0011fe44;
    }
    lVar45 = *(long *)param_1;
    iVar36 = *(int *)(this + 0x2c);
    if (__s_00 != (void *)0x0) goto LAB_001201a9;
  }
  else {
    iVar36 = *(int *)(this + 0x2c);
    if (iVar36 == 0) {
LAB_00120240:
      iVar36 = 0;
    }
    else {
      lVar2 = *(long *)(hash_table_size_primes_inv + uVar31 * 8);
      uVar29 = lVar45 * 0x3ffff - 1;
      uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
      uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
      uVar29 = uVar29 >> 0x16 ^ uVar29;
      uVar41 = uVar29 & 0xffffffff;
      if ((int)uVar29 == 0) {
        uVar41 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar41 * lVar2;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar43;
      lVar34 = SUB168(auVar4 * auVar16,8);
      lVar39 = *(long *)(this + 0x10);
      uVar40 = SUB164(auVar4 * auVar16,8);
      uVar33 = *(uint *)(lVar39 + lVar34 * 4);
      if (uVar33 != 0) {
        uVar38 = 0;
        lVar35 = lVar34;
        do {
          if (((uint)uVar41 == uVar33) &&
             (lVar45 == *(long *)(*(long *)((long)__s_00 + lVar34 * 8) + 0x10))) {
            auVar46._0_8_ = *(long *)((long)__s_00 + (ulong)uVar40 * 8) + 0x18;
            auVar46._8_8_ = lVar35;
            return auVar46;
          }
          uVar38 = uVar38 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar40 + 1) * lVar2;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar43;
          lVar34 = SUB168(auVar5 * auVar17,8);
          uVar33 = *(uint *)(lVar39 + lVar34 * 4);
          uVar40 = SUB164(auVar5 * auVar17,8);
        } while ((uVar33 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar33 * lVar2, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar43, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar40 + uVar37) - SUB164(auVar6 * auVar18,8)) * lVar2,
                auVar19._8_8_ = 0, auVar19._0_8_ = uVar43, lVar35 = SUB168(auVar7 * auVar19,8),
                uVar38 <= SUB164(auVar7 * auVar19,8)));
      }
LAB_0011fe44:
      uVar41 = CONCAT44(0,(&hash_table_size_primes)[uVar31]);
      lVar2 = *(long *)(hash_table_size_primes_inv + uVar31 * 8);
      uVar29 = lVar45 * 0x3ffff - 1;
      uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
      uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
      uVar29 = uVar29 >> 0x16 ^ uVar29;
      uVar42 = uVar29 & 0xffffffff;
      if ((int)uVar29 == 0) {
        uVar42 = 1;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar42 * lVar2;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar41;
      lVar34 = SUB168(auVar8 * auVar20,8);
      uVar37 = *(uint *)(lVar39 + lVar34 * 4);
      uVar33 = SUB164(auVar8 * auVar20,8);
      if (uVar37 != 0) {
        uVar40 = 0;
        lVar35 = lVar34;
        do {
          if (((uint)uVar42 == uVar37) &&
             (*(long *)(*(long *)((long)__s_00 + lVar34 * 8) + 0x10) == lVar45)) {
            pauVar30 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar33 * 8);
            *(undefined8 *)(pauVar30[1] + 8) = 0;
            lStack_90 = lVar35;
            goto LAB_0011ff2f;
          }
          uVar40 = uVar40 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)(uVar33 + 1) * lVar2;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar41;
          lVar34 = SUB168(auVar9 * auVar21,8);
          uVar37 = *(uint *)(lVar39 + lVar34 * 4);
          uVar33 = SUB164(auVar9 * auVar21,8);
        } while ((uVar37 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar37 * lVar2, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar41, auVar11._8_8_ = 0,
                auVar11._0_8_ =
                     (ulong)(((&hash_table_size_primes)[uVar31] + uVar33) -
                            SUB164(auVar10 * auVar22,8)) * lVar2, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar41, lVar35 = SUB168(auVar11 * auVar23,8),
                uVar40 <= SUB164(auVar11 * auVar23,8)));
      }
    }
  }
  if ((float)uVar43 * __LC70 < (float)(iVar36 + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      pauVar30 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011ff2f;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  uVar32 = *(undefined8 *)param_1;
  pauVar30 = (undefined1 (*) [16])operator_new(0x20,"");
  *pauVar30 = (undefined1  [16])0x0;
  *(undefined8 *)(pauVar30[1] + 8) = 0;
  *(undefined8 *)pauVar30[1] = uVar32;
  puVar3 = *(undefined8 **)(this + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar30;
  }
  else {
    *puVar3 = pauVar30;
    *(undefined8 **)(*pauVar30 + 8) = puVar3;
  }
  lVar45 = *(long *)param_1;
  lVar39 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar30;
  uVar31 = lVar45 * 0x3ffff - 1;
  uVar31 = (uVar31 ^ uVar31 >> 0x1f) * 0x15;
  uVar31 = (uVar31 ^ uVar31 >> 0xb) * 0x41;
  uVar31 = uVar31 >> 0x16 ^ uVar31;
  uVar43 = uVar31 & 0xffffffff;
  if ((int)uVar31 == 0) {
    uVar43 = 1;
  }
  uVar38 = 0;
  lVar45 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar40 = (uint)uVar43;
  uVar37 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar31 = CONCAT44(0,uVar37);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar43 * lVar45;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar31;
  lStack_90 = SUB168(auVar12 * auVar24,8);
  lVar2 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar39 + lStack_90 * 4);
  iVar36 = SUB164(auVar12 * auVar24,8);
  uVar33 = *puVar1;
  pauVar28 = pauVar30;
  while (uVar33 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar33 * lVar45;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar31;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar37 + iVar36) - SUB164(auVar13 * auVar25,8)) * lVar45;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar31;
    local_88 = SUB164(auVar14 * auVar26,8);
    pauVar44 = pauVar28;
    if (local_88 < uVar38) {
      *puVar1 = (uint)uVar43;
      uVar43 = (ulong)uVar33;
      puVar3 = (undefined8 *)(lVar2 + lStack_90 * 8);
      pauVar44 = (undefined1 (*) [16])*puVar3;
      *puVar3 = pauVar28;
      uVar38 = local_88;
    }
    uVar40 = (uint)uVar43;
    uVar38 = uVar38 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar36 + 1) * lVar45;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar31;
    lStack_90 = SUB168(auVar15 * auVar27,8);
    puVar1 = (uint *)(lVar39 + lStack_90 * 4);
    iVar36 = SUB164(auVar15 * auVar27,8);
    pauVar28 = pauVar44;
    uVar33 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar2 + lStack_90 * 8) = pauVar28;
  *puVar1 = uVar40;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011ff2f:
  auVar47._8_8_ = lStack_90;
  auVar47._0_8_ = pauVar30[1] + 8;
  return auVar47;
}



/* CowData<Node*>::_realloc(long) */

undefined8 __thiscall CowData<Node*>::_realloc(CowData<Node*> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Node*>::resize<false>(long) */

undefined8 __thiscall CowData<Node*>::resize<false>(CowData<Node*> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar9 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_001205a0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_001205a0;
  if (lVar9 < param_1) {
    if (lVar8 != lVar3) {
      if (lVar9 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        goto LAB_001204b1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_001204b1:
      puVar7[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<ObjectID, Node*, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, Node*> > >::insert(ObjectID const&, Node* const&,
   bool) */

void HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>
     ::insert(ObjectID *param_1,Node **param_2,bool param_3)

{
  Node *pNVar1;
  uint uVar2;
  undefined8 uVar3;
  Node *pNVar4;
  Node *pNVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  Node *pNVar22;
  uint uVar23;
  ulong uVar24;
  Node *pNVar25;
  undefined8 *in_RCX;
  int iVar26;
  undefined7 in_register_00000011;
  long *plVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  char in_R8B;
  ulong uVar32;
  uint uVar33;
  long lVar34;
  Node *pNVar35;
  
  plVar27 = (long *)CONCAT71(in_register_00000011,param_3);
  pNVar25 = param_2[1];
  uVar2 = (&hash_table_size_primes)[*(uint *)(param_2 + 5)];
  if (pNVar25 == (Node *)0x0) {
    uVar32 = (ulong)uVar2;
    uVar24 = uVar32 * 4;
    uVar30 = uVar32 * 8;
    pNVar25 = (Node *)Memory::alloc_static(uVar24,false);
    param_2[2] = pNVar25;
    pNVar25 = (Node *)Memory::alloc_static(uVar30,false);
    param_2[1] = pNVar25;
    if (uVar2 != 0) {
      pNVar4 = param_2[2];
      if ((pNVar4 < pNVar25 + uVar30) && (pNVar25 < pNVar4 + uVar24)) {
        uVar24 = 0;
        do {
          *(undefined4 *)(pNVar4 + uVar24 * 4) = 0;
          *(undefined8 *)(pNVar25 + uVar24 * 8) = 0;
          uVar24 = uVar24 + 1;
        } while (uVar32 != uVar24);
        goto LAB_00120646;
      }
      memset(pNVar4,0,uVar24);
      memset(pNVar25,0,uVar30);
      iVar26 = *(int *)((long)param_2 + 0x2c);
      lVar34 = *plVar27;
      goto LAB_00120651;
    }
    iVar26 = *(int *)((long)param_2 + 0x2c);
    lVar34 = *plVar27;
    if (pNVar25 != (Node *)0x0) goto LAB_00120651;
  }
  else {
LAB_00120646:
    iVar26 = *(int *)((long)param_2 + 0x2c);
    lVar34 = *plVar27;
LAB_00120651:
    if (iVar26 != 0) {
      uVar32 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(param_2 + 5)]);
      lVar29 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
      uVar24 = lVar34 * 0x3ffff - 1;
      uVar24 = (uVar24 ^ uVar24 >> 0x1f) * 0x15;
      uVar24 = (uVar24 ^ uVar24 >> 0xb) * 0x41;
      uVar24 = uVar24 >> 0x16 ^ uVar24;
      uVar30 = uVar24 & 0xffffffff;
      if ((int)uVar24 == 0) {
        uVar30 = 1;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar30 * lVar29;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar32;
      lVar28 = SUB168(auVar6 * auVar14,8);
      uVar31 = *(uint *)(param_2[2] + lVar28 * 4);
      uVar23 = SUB164(auVar6 * auVar14,8);
      if (uVar31 != 0) {
        uVar33 = 0;
        do {
          if (((uint)uVar30 == uVar31) &&
             (*(long *)(*(long *)(pNVar25 + lVar28 * 8) + 0x10) == lVar34)) {
            pNVar25 = *(Node **)(pNVar25 + (ulong)uVar23 * 8);
            *(undefined8 *)(pNVar25 + 0x18) = *in_RCX;
            goto LAB_00120930;
          }
          uVar33 = uVar33 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar23 + 1) * lVar29;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar32;
          lVar28 = SUB168(auVar7 * auVar15,8);
          uVar31 = *(uint *)(param_2[2] + lVar28 * 4);
          uVar23 = SUB164(auVar7 * auVar15,8);
        } while ((uVar31 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar31 * lVar29, auVar16._8_8_ = 0,
                auVar16._0_8_ = uVar32, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)(((&hash_table_size_primes)[*(uint *)(param_2 + 5)] + uVar23)
                                      - SUB164(auVar8 * auVar16,8)) * lVar29, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar32, uVar33 <= SUB164(auVar9 * auVar17,8)));
      }
    }
  }
  if ((float)uVar2 * __LC70 < (float)(iVar26 + 1)) {
    if (*(int *)(param_2 + 5) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      pNVar25 = (Node *)0x0;
      goto LAB_00120930;
    }
    _resize_and_rehash((HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>
                        *)param_2,*(int *)(param_2 + 5) + 1);
  }
  lVar34 = *plVar27;
  uVar3 = *in_RCX;
  pNVar25 = (Node *)operator_new(0x20,"");
  *(undefined1 (*) [16])pNVar25 = (undefined1  [16])0x0;
  *(undefined8 *)(pNVar25 + 0x18) = uVar3;
  *(long *)(pNVar25 + 0x10) = lVar34;
  pNVar4 = param_2[4];
  if (pNVar4 == (Node *)0x0) {
    param_2[3] = pNVar25;
    param_2[4] = pNVar25;
  }
  else if (in_R8B == '\0') {
    *(Node **)pNVar4 = pNVar25;
    *(Node **)(pNVar25 + 8) = pNVar4;
    param_2[4] = pNVar25;
  }
  else {
    pNVar4 = param_2[3];
    *(Node **)(pNVar4 + 8) = pNVar25;
    *(Node **)pNVar25 = pNVar4;
    param_2[3] = pNVar25;
  }
  pNVar4 = param_2[2];
  uVar24 = *plVar27 * 0x3ffff - 1;
  uVar24 = (uVar24 ^ uVar24 >> 0x1f) * 0x15;
  uVar24 = (uVar24 ^ uVar24 >> 0xb) * 0x41;
  uVar24 = uVar24 >> 0x16 ^ uVar24;
  uVar30 = uVar24 & 0xffffffff;
  if ((int)uVar24 == 0) {
    uVar30 = 1;
  }
  uVar33 = 0;
  lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
  uVar23 = (uint)uVar30;
  uVar2 = (&hash_table_size_primes)[*(uint *)(param_2 + 5)];
  uVar24 = CONCAT44(0,uVar2);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar30 * lVar34;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar24;
  lVar29 = SUB168(auVar10 * auVar18,8);
  pNVar5 = param_2[1];
  pNVar1 = pNVar4 + lVar29 * 4;
  iVar26 = SUB164(auVar10 * auVar18,8);
  uVar31 = *(uint *)pNVar1;
  pNVar22 = pNVar25;
  while (uVar31 != 0) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)uVar31 * lVar34;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar24;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)((uVar2 + iVar26) - SUB164(auVar11 * auVar19,8)) * lVar34;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar24;
    uVar23 = SUB164(auVar12 * auVar20,8);
    pNVar35 = pNVar22;
    if (uVar23 < uVar33) {
      *(uint *)pNVar1 = (uint)uVar30;
      uVar30 = (ulong)uVar31;
      pNVar1 = pNVar5 + lVar29 * 8;
      pNVar35 = *(Node **)pNVar1;
      *(Node **)pNVar1 = pNVar22;
      uVar33 = uVar23;
    }
    uVar23 = (uint)uVar30;
    uVar33 = uVar33 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(iVar26 + 1) * lVar34;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar24;
    lVar29 = SUB168(auVar13 * auVar21,8);
    pNVar1 = pNVar4 + lVar29 * 4;
    iVar26 = SUB164(auVar13 * auVar21,8);
    pNVar22 = pNVar35;
    uVar31 = *(uint *)pNVar1;
  }
  *(Node **)(pNVar5 + lVar29 * 8) = pNVar22;
  *(uint *)pNVar1 = uVar23;
  *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
LAB_00120930:
  *(Node **)param_1 = pNVar25;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Node*, HashMap<ObjectID, Node*, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, Node*> > >, HashMapHasherDefault,
   HashMapComparatorDefault<Node*>, DefaultTypedAllocator<HashMapElement<Node*, HashMap<ObjectID,
   Node*, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, Node*> > > > > >::operator[](Node* const&) */

undefined1 * __thiscall
HashMap<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>>>>
::operator[](HashMap<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>>>>
             *this,Node **param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 (*pauVar20) [16];
  char cVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  undefined8 uVar26;
  void *__s_00;
  undefined1 (*pauVar27) [16];
  long lVar28;
  void *pvVar29;
  int *piVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  uint uVar34;
  ulong uVar35;
  undefined8 uVar36;
  long lVar37;
  uint uVar38;
  uint uVar39;
  Node *pNVar40;
  ulong uVar41;
  undefined1 (*pauVar42) [16];
  long in_FS_OFFSET;
  uint local_48;
  uint local_44;
  long local_40;
  
  pNVar40 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  cVar21 = _lookup_pos(this,(Node **)pNVar40,&local_48);
  if (cVar21 != '\0') {
    pauVar27 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_48 * 8);
    goto LAB_00120f3b;
  }
  uVar34 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  if (*(long *)(this + 8) == 0) {
    uVar35 = (ulong)uVar34;
    uVar25 = uVar35 * 4;
    uVar41 = uVar35 * 8;
    uVar26 = Memory::alloc_static(uVar25,false);
    *(undefined8 *)(this + 0x10) = uVar26;
    pvVar29 = (void *)Memory::alloc_static(uVar41,false);
    *(void **)(this + 8) = pvVar29;
    if (uVar34 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar29 + uVar41)) && (pvVar29 < (void *)((long)pvVar3 + uVar25))
         ) {
        uVar25 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar25 * 4) = 0;
          *(undefined8 *)((long)pvVar29 + uVar25 * 8) = 0;
          uVar25 = uVar25 + 1;
        } while (uVar35 != uVar25);
      }
      else {
        memset(pvVar3,0,uVar25);
        memset(pvVar29,0,uVar41);
      }
    }
    pNVar40 = *param_1;
  }
  local_44 = 0;
  cVar21 = _lookup_pos(this,(Node **)pNVar40,&local_44);
  if (cVar21 == '\0') {
    if ((float)uVar34 * __LC70 < (float)(*(int *)(this + 0x2c) + 1)) {
      uVar34 = *(uint *)(this + 0x28);
      if (uVar34 == 0x1c) {
        pauVar27 = (undefined1 (*) [16])0x0;
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        goto LAB_00120f3b;
      }
      uVar25 = (ulong)(uVar34 + 1);
      *(undefined4 *)(this + 0x2c) = 0;
      uVar24 = (&hash_table_size_primes)[uVar34];
      if (uVar34 + 1 < 2) {
        uVar25 = 2;
      }
      uVar34 = (&hash_table_size_primes)[uVar25];
      uVar35 = (ulong)uVar34;
      *(int *)(this + 0x28) = (int)uVar25;
      pvVar29 = *(void **)(this + 8);
      uVar25 = uVar35 * 4;
      uVar41 = uVar35 * 8;
      pvVar3 = *(void **)(this + 0x10);
      uVar26 = Memory::alloc_static(uVar25,false);
      *(undefined8 *)(this + 0x10) = uVar26;
      __s_00 = (void *)Memory::alloc_static(uVar41,false);
      *(void **)(this + 8) = __s_00;
      if (uVar34 != 0) {
        __s = *(void **)(this + 0x10);
        if ((__s < (void *)((long)__s_00 + uVar41)) && (__s_00 < (void *)((long)__s + uVar25))) {
          uVar25 = 0;
          do {
            *(undefined4 *)((long)__s + uVar25 * 4) = 0;
            *(undefined8 *)((long)__s_00 + uVar25 * 8) = 0;
            uVar25 = uVar25 + 1;
          } while (uVar35 != uVar25);
        }
        else {
          memset(__s,0,uVar25);
          memset(__s_00,0,uVar41);
        }
      }
      if (uVar24 == 0) {
        pNVar40 = *param_1;
      }
      else {
        uVar25 = 0;
        do {
          uVar34 = *(uint *)((long)pvVar3 + uVar25 * 4);
          if (uVar34 != 0) {
            lVar28 = *(long *)(this + 0x10);
            uVar38 = 0;
            uVar23 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
            uVar41 = CONCAT44(0,uVar23);
            lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar34 * lVar37;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = uVar41;
            lVar32 = SUB168(auVar4 * auVar12,8);
            puVar1 = (uint *)(lVar28 + lVar32 * 4);
            iVar31 = SUB164(auVar4 * auVar12,8);
            uVar39 = *puVar1;
            uVar26 = *(undefined8 *)((long)pvVar29 + uVar25 * 8);
            while (uVar39 != 0) {
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (ulong)uVar39 * lVar37;
              auVar13._8_8_ = 0;
              auVar13._0_8_ = uVar41;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = (ulong)((uVar23 + iVar31) - SUB164(auVar5 * auVar13,8)) * lVar37;
              auVar14._8_8_ = 0;
              auVar14._0_8_ = uVar41;
              uVar22 = SUB164(auVar6 * auVar14,8);
              uVar36 = uVar26;
              if (uVar22 < uVar38) {
                *puVar1 = uVar34;
                puVar2 = (undefined8 *)((long)__s_00 + lVar32 * 8);
                uVar36 = *puVar2;
                *puVar2 = uVar26;
                uVar34 = uVar39;
                uVar38 = uVar22;
              }
              uVar38 = uVar38 + 1;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)(iVar31 + 1) * lVar37;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar41;
              lVar32 = SUB168(auVar7 * auVar15,8);
              puVar1 = (uint *)(lVar28 + lVar32 * 4);
              iVar31 = SUB164(auVar7 * auVar15,8);
              uVar26 = uVar36;
              uVar39 = *puVar1;
            }
            *(undefined8 *)((long)__s_00 + lVar32 * 8) = uVar26;
            *puVar1 = uVar34;
            *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
          }
          uVar25 = uVar25 + 1;
        } while (uVar24 != uVar25);
        Memory::free_static(pvVar29,false);
        Memory::free_static(pvVar3,false);
        pNVar40 = *param_1;
      }
    }
    uVar25 = 1;
    do {
      if (0x16 < (uint)(&hash_table_size_primes)[uVar25]) goto LAB_00120d66;
      uVar25 = uVar25 + 1;
    } while (uVar25 != 0x1d);
    uVar25 = 0;
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
LAB_00120d66:
    pauVar27 = (undefined1 (*) [16])operator_new(0x48,"");
    *(Node **)pauVar27[1] = pNVar40;
    *(undefined8 *)pauVar27[4] = 0;
    *pauVar27 = (undefined1  [16])0x0;
    pauVar27[2] = (undefined1  [16])0x0;
    pauVar27[3] = (undefined1  [16])0x0;
    lVar28 = 1;
    if (5 < (uint)(&hash_table_size_primes)[uVar25 & 0xffffffff]) {
      do {
        if ((uint)(&hash_table_size_primes)[uVar25 & 0xffffffff] <=
            (uint)(&hash_table_size_primes)[lVar28]) {
          *(int *)pauVar27[4] = (int)lVar28;
          puVar2 = *(undefined8 **)(this + 0x20);
          goto joined_r0x00120f9a;
        }
        lVar28 = lVar28 + 1;
      } while (lVar28 != 0x1d);
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
    }
    puVar2 = *(undefined8 **)(this + 0x20);
joined_r0x00120f9a:
    if (puVar2 == (undefined8 *)0x0) {
      *(undefined1 (**) [16])(this + 0x18) = pauVar27;
    }
    else {
      *puVar2 = pauVar27;
      *(undefined8 **)(*pauVar27 + 8) = puVar2;
    }
    pNVar40 = *param_1;
    *(undefined1 (**) [16])(this + 0x20) = pauVar27;
    lVar28 = *(long *)(this + 0x10);
    uVar25 = (long)pNVar40 * 0x3ffff - 1;
    uVar25 = (uVar25 ^ uVar25 >> 0x1f) * 0x15;
    uVar25 = (uVar25 ^ uVar25 >> 0xb) * 0x41;
    uVar25 = uVar25 >> 0x16 ^ uVar25;
    uVar41 = uVar25 & 0xffffffff;
    if ((int)uVar25 == 0) {
      uVar41 = 1;
    }
    uVar39 = 0;
    lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar23 = (uint)uVar41;
    uVar34 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
    uVar25 = CONCAT44(0,uVar34);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar41 * lVar37;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar25;
    lVar33 = SUB168(auVar8 * auVar16,8);
    lVar32 = *(long *)(this + 8);
    puVar1 = (uint *)(lVar28 + lVar33 * 4);
    iVar31 = SUB164(auVar8 * auVar16,8);
    uVar24 = *puVar1;
    pauVar20 = pauVar27;
    while (uVar24 != 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar24 * lVar37;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar25;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)((uVar34 + iVar31) - SUB164(auVar9 * auVar17,8)) * lVar37;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar25;
      uVar23 = SUB164(auVar10 * auVar18,8);
      pauVar42 = pauVar20;
      if (uVar23 < uVar39) {
        *puVar1 = (uint)uVar41;
        uVar41 = (ulong)uVar24;
        puVar2 = (undefined8 *)(lVar32 + lVar33 * 8);
        pauVar42 = (undefined1 (*) [16])*puVar2;
        *puVar2 = pauVar20;
        uVar39 = uVar23;
      }
      uVar23 = (uint)uVar41;
      uVar39 = uVar39 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar31 + 1) * lVar37;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar25;
      lVar33 = SUB168(auVar11 * auVar19,8);
      puVar1 = (uint *)(lVar28 + lVar33 * 4);
      iVar31 = SUB164(auVar11 * auVar19,8);
      pauVar20 = pauVar42;
      uVar24 = *puVar1;
    }
    *(undefined1 (**) [16])(lVar32 + lVar33 * 8) = pauVar20;
    *puVar1 = uVar23;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    goto LAB_00120f3b;
  }
  uVar25 = (ulong)local_44;
  lVar28 = *(long *)(*(long *)(this + 8) + uVar25 * 8);
  uVar34 = *(uint *)(lVar28 + 0x40);
  uVar24 = (&hash_table_size_primes)[uVar34];
  if ((*(int *)(lVar28 + 0x44) == 0) || (*(long *)(lVar28 + 0x20) == 0)) {
LAB_00120fd8:
    if (uVar24 < 0x17) goto LAB_00120fdd;
  }
  else {
    lVar37 = 0;
    if (uVar24 != 0) {
      do {
        piVar30 = (int *)(*(long *)(lVar28 + 0x28) + lVar37);
        if (*piVar30 != 0) {
          *piVar30 = 0;
          Memory::free_static(*(void **)(*(long *)(lVar28 + 0x20) + lVar37 * 2),false);
          *(undefined8 *)(*(long *)(lVar28 + 0x20) + lVar37 * 2) = 0;
        }
        lVar37 = lVar37 + 4;
      } while ((ulong)uVar24 << 2 != lVar37);
      uVar34 = *(uint *)(lVar28 + 0x40);
      *(undefined4 *)(lVar28 + 0x44) = 0;
      *(undefined1 (*) [16])(lVar28 + 0x30) = (undefined1  [16])0x0;
      uVar24 = (&hash_table_size_primes)[uVar34];
      goto LAB_00120fd8;
    }
    *(undefined4 *)(lVar28 + 0x44) = 0;
    *(undefined1 (*) [16])(lVar28 + 0x30) = (undefined1  [16])0x0;
LAB_00120fdd:
    if (uVar34 != 0x1c) {
      uVar41 = (ulong)uVar34;
      do {
        uVar24 = (int)uVar41 + 1;
        uVar41 = (ulong)uVar24;
        if (0x16 < (uint)(&hash_table_size_primes)[uVar41]) {
          if (uVar24 != uVar34) {
            if (*(long *)(lVar28 + 0x20) == 0) {
              *(uint *)(lVar28 + 0x40) = uVar24;
            }
            else {
              HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>
              ::_resize_and_rehash
                        ((HashMap<ObjectID,Node*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Node*>>>
                          *)(lVar28 + 0x18),uVar24);
            }
          }
          goto LAB_00121033;
        }
      } while (uVar24 != 0x1c);
    }
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_00121033:
  pauVar27 = *(undefined1 (**) [16])(*(long *)(this + 8) + uVar25 * 8);
LAB_00120f3b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar27[1] + 8;
}



/* CowData<RuntimeNodeSelect::SelectResult>::_realloc(long) */

undefined8 __thiscall
CowData<RuntimeNodeSelect::SelectResult>::_realloc
          (CowData<RuntimeNodeSelect::SelectResult> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<RuntimeNodeSelect::SelectResult>::resize<false>(long) */

undefined8 __thiscall
CowData<RuntimeNodeSelect::SelectResult>::resize<false>
          (CowData<RuntimeNodeSelect::SelectResult> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar9 * 0x10;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_001214c0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 0x10 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar10 = uVar4 + 1;
  if (lVar10 == 0) goto LAB_001214c0;
  if (param_1 <= lVar9) {
    if ((lVar10 != lVar3) && (uVar7 = _realloc(this,lVar10), (int)uVar7 != 0)) {
      return uVar7;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar10 == lVar3) {
LAB_0012142c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar8[-1];
    if (param_1 <= lVar3) goto LAB_001213b7;
  }
  else {
    if (lVar9 != 0) {
      uVar7 = _realloc(this,lVar10);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_0012142c;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar3 = 0;
  }
  puVar5 = puVar8 + lVar3 * 2;
  do {
    *puVar5 = 0;
    puVar6 = puVar5 + 2;
    *(undefined4 *)(puVar5 + 1) = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar8 + param_1 * 2);
LAB_001213b7:
  puVar8[-1] = param_1;
  return 0;
}



/* CowData<ObjectID>::_realloc(long) */

undefined8 __thiscall CowData<ObjectID>::_realloc(CowData<ObjectID> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* SceneDebugger::SceneDebugger() */

void SceneDebugger::_GLOBAL__sub_I_SceneDebugger(void)

{
  if (PopupMenu::base_property_helper != '\0') {
    return;
  }
  PopupMenu::base_property_helper = 1;
  PopupMenu::base_property_helper._56_8_ = 2;
  PopupMenu::base_property_helper._64_8_ = 0;
  PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,&__dso_handle
              );
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::PropertyInfo(PropertyInfo const&) */

void __thiscall PropertyInfo::PropertyInfo(PropertyInfo *this,PropertyInfo *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomStaticMethodPointer<void, Ref<InputEvent> const&, Ref<Shortcut>
   const&>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void,Ref<InputEvent>const&,Ref<Shortcut>const&>::
~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void,Ref<InputEvent>const&,Ref<Shortcut>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SceneTree, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTree,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTree,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<RuntimeNodeSelect, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<RuntimeNodeSelect,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<RuntimeNodeSelect,void,Ref<InputEvent>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<RuntimeNodeSelect, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<RuntimeNodeSelect,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<RuntimeNodeSelect,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<RuntimeNodeSelect, void, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<RuntimeNodeSelect,void,Vector2,Ref<InputEvent>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<RuntimeNodeSelect,void,Vector2,Ref<InputEvent>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<RuntimeNodeSelect, void, float, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<RuntimeNodeSelect,void,float,Vector2,Ref<InputEvent>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<RuntimeNodeSelect,void,float,Vector2,Ref<InputEvent>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Viewport, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Viewport,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Viewport,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<RuntimeNodeSelect, void, int,
   PopupMenu*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<RuntimeNodeSelect,void,int,PopupMenu*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<RuntimeNodeSelect,void,int,PopupMenu*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Pair<PropertyInfo, Variant>, DefaultAllocator>::~List() */

void __thiscall
List<Pair<PropertyInfo,Variant>,DefaultAllocator>::~List
          (List<Pair<PropertyInfo,Variant>,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<SceneDebuggerTree::RemoteNode, DefaultAllocator>::~List() */

void __thiscall
List<SceneDebuggerTree::RemoteNode,DefaultAllocator>::~List
          (List<SceneDebuggerTree::RemoteNode,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
