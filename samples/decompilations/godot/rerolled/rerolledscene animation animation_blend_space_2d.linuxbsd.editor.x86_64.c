/* AnimationNodeBlendSpace2D::get_blend_point_count() const */undefined4 AnimationNodeBlendSpace2D::get_blend_point_count(AnimationNodeBlendSpace2D *this) {
   return *(undefined4*)( this + 0x9a0 );
}
/* AnimationNodeBlendSpace2D::get_triangle_count() const */undefined4 AnimationNodeBlendSpace2D::get_triangle_count(AnimationNodeBlendSpace2D *this) {
   if (*(long*)( this + 0x9b0 ) != 0) {
      return *(undefined4*)( *(long*)( this + 0x9b0 ) + -8 );
   }

   return 0;
}
/* AnimationNodeBlendSpace2D::set_min_space(Vector2 const&) */void AnimationNodeBlendSpace2D::set_min_space(AnimationNodeBlendSpace2D *this, Vector2 *param_1) {
   *(undefined8*)( this + 0x9d0 ) = *(undefined8*)param_1;
   if (*(float*)( this + 0x9c8 ) <= *(float*)( this + 0x9d0 )) {
      *(float*)( this + 0x9d0 ) = *(float*)( this + 0x9c8 ) - (float)_LC0;
   }

   if (*(float*)( this + 0x9cc ) <= *(float*)( this + 0x9d4 )) {
      *(float*)( this + 0x9d4 ) = *(float*)( this + 0x9cc ) - (float)_LC0;
   }

   return;
}
/* AnimationNodeBlendSpace2D::get_min_space() const */undefined8 AnimationNodeBlendSpace2D::get_min_space(AnimationNodeBlendSpace2D *this) {
   return *(undefined8*)( this + 0x9d0 );
}
/* AnimationNodeBlendSpace2D::set_max_space(Vector2 const&) */void AnimationNodeBlendSpace2D::set_max_space(AnimationNodeBlendSpace2D *this, Vector2 *param_1) {
   *(undefined8*)( this + 0x9c8 ) = *(undefined8*)param_1;
   if (*(float*)( this + 0x9c8 ) <= *(float*)( this + 0x9d0 )) {
      *(float*)( this + 0x9c8 ) = *(float*)( this + 0x9d0 ) + (float)_LC0;
   }

   if (*(float*)( this + 0x9cc ) <= *(float*)( this + 0x9d4 )) {
      *(float*)( this + 0x9cc ) = *(float*)( this + 0x9d4 ) + (float)_LC0;
   }

   return;
}
/* AnimationNodeBlendSpace2D::get_max_space() const */undefined8 AnimationNodeBlendSpace2D::get_max_space(AnimationNodeBlendSpace2D *this) {
   return *(undefined8*)( this + 0x9c8 );
}
/* AnimationNodeBlendSpace2D::set_snap(Vector2 const&) */void AnimationNodeBlendSpace2D::set_snap(AnimationNodeBlendSpace2D *this, Vector2 *param_1) {
   *(undefined8*)( this + 0x9d8 ) = *(undefined8*)param_1;
   return;
}
/* AnimationNodeBlendSpace2D::get_snap() const */undefined8 AnimationNodeBlendSpace2D::get_snap(AnimationNodeBlendSpace2D *this) {
   return *(undefined8*)( this + 0x9d8 );
}
/* AnimationNodeBlendSpace2D::get_auto_triangles() const */AnimationNodeBlendSpace2D AnimationNodeBlendSpace2D::get_auto_triangles(AnimationNodeBlendSpace2D *this) {
   return this[0x9f4];
}
/* AnimationNodeBlendSpace2D::set_blend_mode(AnimationNodeBlendSpace2D::BlendMode) */void AnimationNodeBlendSpace2D::set_blend_mode(AnimationNodeBlendSpace2D *this, undefined4 param_2) {
   *(undefined4*)( this + 0x9f0 ) = param_2;
   return;
}
/* AnimationNodeBlendSpace2D::get_blend_mode() const */undefined4 AnimationNodeBlendSpace2D::get_blend_mode(AnimationNodeBlendSpace2D *this) {
   return *(undefined4*)( this + 0x9f0 );
}
/* AnimationNodeBlendSpace2D::set_use_sync(bool) */void AnimationNodeBlendSpace2D::set_use_sync(AnimationNodeBlendSpace2D *this, bool param_1) {
   this[0x9f6] = (AnimationNodeBlendSpace2D)param_1;
   return;
}
/* AnimationNodeBlendSpace2D::is_using_sync() const */AnimationNodeBlendSpace2D AnimationNodeBlendSpace2D::is_using_sync(AnimationNodeBlendSpace2D *this) {
   return this[0x9f6];
}
/* AnimationNodeBlendSpace2D::get_parameter_default_value(StringName const&) const */StringName *AnimationNodeBlendSpace2D::get_parameter_default_value(StringName *param_1) {
   char cVar1;
   long *in_RDX;
   long in_RSI;
   long in_FS_OFFSET;
   int local_78[2];
   undefined8 local_70;
   undefined8 uStack_68;
   int local_58[2];
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   AnimationNode::get_parameter_default_value((StringName*)local_78);
   local_58[0] = 0;
   local_58[1] = 0;
   local_50 = (undefined1[16])0x0;
   cVar1 = Variant::operator !=((Variant*)local_78, (Variant*)local_58);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (cVar1 == '\0') {
      if (*in_RDX == *(long*)( in_RSI + 0x9c0 )) {
         Variant::Variant((Variant*)param_1, -1);
      }
 else {
         local_58[0] = 0;
         local_58[1] = 0;
         Variant::Variant((Variant*)param_1, (Vector2*)local_58);
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }
 else {
      *(int*)param_1 = local_78[0];
      *(undefined8*)( param_1 + 8 ) = local_70;
      *(undefined8*)( param_1 + 0x10 ) = uStack_68;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationNodeBlendSpace2D::_tree_changed() */void AnimationNodeBlendSpace2D::_tree_changed(void) {
   AnimationRootNode::_tree_changed();
   return;
}
/* AnimationNodeBlendSpace2D::_animation_node_renamed(ObjectID const&, String const&, String const&)
    */void AnimationNodeBlendSpace2D::_animation_node_renamed(ObjectID *param_1, String *param_2, String *param_3) {
   AnimationRootNode::_animation_node_renamed(param_1, param_2, param_3);
   return;
}
/* AnimationNodeBlendSpace2D::_animation_node_removed(ObjectID const&, StringName const&) */void AnimationNodeBlendSpace2D::_animation_node_removed(ObjectID *param_1, StringName *param_2) {
   AnimationRootNode::_animation_node_removed(param_1, param_2);
   return;
}
/* AnimationNodeBlendSpace2D::get_blend_point_position(int) const */undefined8 AnimationNodeBlendSpace2D::get_blend_point_position(AnimationNodeBlendSpace2D *this, int param_1) {
   if ((uint)param_1 < 0x40) {
      return *(undefined8*)( this + (long)param_1 * 0x18 + 0x3b0 );
   }

   _err_print_index_error("get_blend_point_position", "scene/animation/animation_blend_space_2d.cpp", 0x78, (long)param_1, 0x40, "p_point", "MAX_BLEND_POINTS", "", false, false);
   return 0;
}
/* CowData<AnimationNodeBlendSpace2D::BlendTriangle>::_copy_on_write() [clone .isra.0] */void CowData<AnimationNodeBlendSpace2D::BlendTriangle>::_copy_on_write(CowData<AnimationNodeBlendSpace2D::BlendTriangle> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   size_t __n;
   ulong uVar5;
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
   __n = lVar2 * 0xc;
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
/* void Ref<AnimationNode>::TEMPNAMEPLACEHOLDERVALUE(Ref<AnimationRootNode> const&) [clone .isra.0]
    */void Ref<AnimationNode>::operator =(Ref<AnimationNode> *this, Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   Object *pOVar3;
   pOVar1 = *(Object**)this;
   if (param_1 == (Ref*)0x0) {
      if (pOVar1 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
   }
 else {
      pOVar3 = (Object*)__dynamic_cast(param_1, &Object::typeinfo, &AnimationNode::typeinfo, 0);
      if (pOVar3 == pOVar1) {
         return;
      }

      *(Object**)this = pOVar3;
      if (( pOVar3 != (Object*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
         *(undefined8*)this = 0;
      }

      if (pOVar1 == (Object*)0x0) {
         return;
      }

   }

   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
      return;
   }

   return;
}
/* SortArray<int, _DefaultComparator<int>, true>::introsort(long, long, int*, long) const [clone
   .isra.0] */void SortArray<int,_DefaultComparator<int>,true>::introsort(long param_1, long param_2, int *param_3, long param_4) {
   int iVar1;
   long lVar2;
   int *piVar3;
   int *piVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   int iVar9;
   long lVar10;
   int *piVar11;
   int iVar12;
   long lVar13;
   long local_58;
   lVar10 = param_2 - param_1;
   if (lVar10 < 0x11) {
      return;
   }

   if (param_4 == 0) {
      LAB_001006fc:lVar6 = lVar10 + -2 >> 1;
      lVar13 = lVar6 * 2 + 2;
      piVar4 = param_3 + param_1 + lVar6;
      iVar12 = *piVar4;
      lVar5 = lVar6;
      lVar8 = lVar13;
      if (lVar10 <= lVar13) goto LAB_001007ec;
      LAB_0010073b:do {
         iVar9 = param_3[param_1 + lVar13 + -1];
         iVar1 = param_3[param_1 + lVar13];
         lVar2 = lVar13 + -1;
         lVar7 = lVar13;
         piVar3 = param_3 + param_1 + lVar13 + -1;
         if (iVar9 <= iVar1) {
            lVar7 = lVar13 + 1;
            lVar2 = lVar13;
            piVar3 = param_3 + param_1 + lVar13;
            iVar9 = iVar1;
         }

         lVar13 = lVar7 * 2;
         param_3[lVar5 + param_1] = iVar9;
         lVar5 = lVar2;
      }
 while ( lVar10 != lVar13 && SBORROW8(lVar10, lVar13) == lVar10 + lVar7 * -2 < 0 );
      piVar11 = piVar3;
      if (lVar10 == lVar13) goto LAB_001007f2;
      do {
         lVar13 = lVar8;
         lVar5 = lVar2 + -1;
         if (lVar2 <= lVar6) goto LAB_00100918;
         do {
            lVar8 = lVar5 >> 1;
            iVar9 = param_3[param_1 + lVar8];
            if (iVar12 <= iVar9) {
               param_3[lVar2 + param_1] = iVar12;
               goto joined_r0x001007cc;
            }

            param_3[lVar2 + param_1] = iVar9;
            lVar5 = ( lVar8 + -1 ) - ( lVar8 + -1 >> 0x3f );
            lVar2 = lVar8;
         }
 while ( lVar6 < lVar8 );
         param_3[param_1 + lVar8] = iVar12;
         joined_r0x001007cc:if (lVar6 == 0) {
            piVar4 = param_3 + param_1;
            lVar10 = ( param_2 + -1 ) - param_1;
            goto LAB_00100828;
         }

         while (true) {
            piVar4 = piVar4 + -1;
            lVar13 = lVar13 + -2;
            lVar6 = lVar6 + -1;
            iVar12 = *piVar4;
            lVar5 = lVar6;
            lVar8 = lVar13;
            if (lVar13 < lVar10) goto LAB_0010073b;
            LAB_001007ec:piVar11 = piVar4;
            piVar3 = piVar4;
            lVar8 = lVar13;
            if (lVar13 == lVar10) break;
            LAB_00100918:*piVar3 = iVar12;
         }
;
         LAB_001007f2:lVar2 = lVar13 + -1;
         piVar3 = param_3 + param_1 + lVar2;
         *piVar11 = *piVar3;
      }
 while ( true );
   }

   lVar13 = param_2;
   local_58 = param_4;
   LAB_00100567:local_58 = local_58 + -1;
   iVar12 = param_3[lVar13 + -1];
   iVar9 = param_3[param_1];
   iVar1 = param_3[( lVar10 >> 1 ) + param_1];
   if (iVar9 < iVar1) {
      if (iVar9 < iVar12) {
         iVar9 = iVar12;
      }

      if (iVar1 < iVar12) {
         iVar9 = iVar1;
      }

   }
 else {
      if (iVar1 < iVar12) {
         iVar1 = iVar12;
      }

      if (iVar12 <= iVar9) {
         iVar9 = iVar1;
      }

   }

   lVar10 = lVar13;
   param_2 = param_1;
   do {
      if (param_3[param_2] < iVar9) {
         if (lVar13 + -1 == param_2) {
            _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
            goto LAB_001005d0;
         }

      }
 else {
         LAB_001005d0:lVar5 = lVar10 + -1;
         piVar4 = param_3 + lVar5;
         if (iVar9 < *piVar4) {
            piVar3 = param_3 + lVar10 + -2;
            while (param_1 != lVar5) {
               lVar5 = lVar5 + -1;
               piVar4 = piVar3;
               if (*piVar3 <= iVar9) goto LAB_00100632;
               piVar3 = piVar3 + -1;
            }
;
            _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
         }

         LAB_00100632:if (lVar5 <= param_2) break;
         iVar12 = param_3[param_2];
         param_3[param_2] = *piVar4;
         *piVar4 = iVar12;
         lVar10 = lVar5;
      }

      param_2 = param_2 + 1;
   }
 while ( true );
   introsort(param_2, lVar13, param_3, local_58);
   lVar10 = param_2 - param_1;
   if (lVar10 < 0x11) {
      return;
   }

   lVar13 = param_2;
   if (local_58 == 0) goto LAB_001006fc;
   goto LAB_00100567;
   LAB_00100828:iVar12 = piVar4[lVar10];
   piVar4[lVar10] = *piVar4;
   if (lVar10 < 3) {
      if (lVar10 != 2) {
         *piVar4 = iVar12;
         return;
      }

      lVar13 = param_1 + 1;
      lVar5 = 0;
      lVar10 = 1;
      *piVar4 = param_3[lVar13];
      LAB_001008d5:while (true) {
         piVar3 = param_3 + lVar13;
         iVar9 = param_3[param_1 + lVar5];
         if (iVar12 <= iVar9) break;
         *piVar3 = iVar9;
         if (lVar5 == 0) {
            param_3[param_1 + lVar5] = iVar12;
            goto LAB_00100828;
         }

         lVar13 = param_1 + lVar5;
         lVar5 = ( lVar5 + -1 ) / 2;
      }
;
   }
 else {
      lVar13 = 2;
      lVar5 = 0;
      do {
         iVar9 = param_3[param_1 + lVar13 + -1];
         iVar1 = param_3[param_1 + lVar13];
         lVar8 = lVar13 + -1;
         piVar3 = param_3 + param_1 + lVar13 + -1;
         lVar6 = lVar13;
         if (iVar9 <= iVar1) {
            lVar6 = lVar13 + 1;
            lVar8 = lVar13;
            piVar3 = param_3 + param_1 + lVar13;
            iVar9 = iVar1;
         }

         lVar13 = lVar6 * 2;
         param_3[lVar5 + param_1] = iVar9;
         lVar5 = lVar8;
      }
 while ( lVar10 != lVar13 && SBORROW8(lVar10, lVar13) == lVar10 + lVar6 * -2 < 0 );
      if (lVar10 == lVar13) {
         lVar13 = param_1 + lVar10 + -1;
         lVar5 = lVar10 + -2 >> 1;
         *piVar3 = param_3[lVar13];
         lVar10 = lVar10 + -1;
         goto LAB_001008d5;
      }

      lVar13 = param_1 + lVar8;
      lVar10 = lVar10 + -1;
      lVar5 = ( lVar8 + -1 ) / 2;
      if (0 < lVar8) goto LAB_001008d5;
   }

   *piVar3 = iVar12;
   goto LAB_00100828;
}
/* AnimationNodeBlendSpace2D::get_caption() const */AnimationNodeBlendSpace2D * __thiscall
AnimationNodeBlendSpace2D::get_caption(AnimationNodeBlendSpace2D *this){
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
/* AnimationNodeBlendSpace2D::get_blend_point_node(int) const */long *AnimationNodeBlendSpace2D::get_blend_point_node(int param_1) {
   long lVar1;
   char cVar2;
   uint in_EDX;
   long in_RSI;
   undefined4 in_register_0000003c;
   long *plVar3;
   plVar3 = (long*)CONCAT44(in_register_0000003c, param_1);
   if (in_EDX < 0x40) {
      *plVar3 = 0;
      lVar1 = *(long*)( in_RSI + 0x3a8 + (long)(int)in_EDX * 0x18 );
      if (lVar1 != 0) {
         *plVar3 = lVar1;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *plVar3 = 0;
         }

      }

      return plVar3;
   }

   _err_print_index_error("get_blend_point_node", "scene/animation/animation_blend_space_2d.cpp", 0x7d, (long)(int)in_EDX, 0x40, "p_point", "MAX_BLEND_POINTS", "", false, false);
   *plVar3 = 0;
   return plVar3;
}
/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */void CowData<int>::_ref(CowData<int> *this, CowData *param_1) {
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
/* CowData<float>::_ref(CowData<float> const&) [clone .part.0] */void CowData<float>::_ref(CowData<float> *this, CowData *param_1) {
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
/* CowData<Delaunay2D::Edge>::_copy_on_write() [clone .isra.0] */void CowData<Delaunay2D::Edge>::_copy_on_write(CowData<Delaunay2D::Edge> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   size_t __n;
   ulong uVar5;
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
   __n = lVar2 * 0xc;
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
/* CowData<Delaunay2D::Triangle>::_copy_on_write() [clone .isra.0] */void CowData<Delaunay2D::Triangle>::_copy_on_write(CowData<Delaunay2D::Triangle> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   size_t __n;
   ulong uVar5;
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
   __n = lVar2 * 0x18;
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
/* AnimationNodeBlendSpace2D::get_child_nodes(List<AnimationNode::ChildNode, DefaultAllocator>*) */void AnimationNodeBlendSpace2D::get_child_nodes(AnimationNodeBlendSpace2D *this, List *param_1) {
   long *plVar1;
   long lVar2;
   undefined8 uVar3;
   char cVar4;
   Object *pOVar5;
   StringName *this_00;
   undefined1(*pauVar6)[16];
   int iVar7;
   AnimationNodeBlendSpace2D *pAVar8;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   undefined1 local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0 < *(int*)( this + 0x9a0 )) {
      iVar7 = 0;
      pAVar8 = this + 0x3a8;
      do if (( StringName::configured != '\0' ) && ( local_58._0_8_ != 0 )) pAVar8 = pAVar8 + 0x18; while ( iVar7 < *(int*)( this + 0x9a0 ) );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */void CowData<Vector2>::_copy_on_write(CowData<Vector2> *this) {
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
/* AnimationNodeBlendSpace2D::set_x_label(String const&) */void AnimationNodeBlendSpace2D::set_x_label(AnimationNodeBlendSpace2D *this, String *param_1) {
   if (*(long*)( this + 0x9e0 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x9e0 ), (CowData*)param_1);
      return;
   }

   return;
}
/* AnimationNodeBlendSpace2D::set_y_label(String const&) */void AnimationNodeBlendSpace2D::set_y_label(AnimationNodeBlendSpace2D *this, String *param_1) {
   if (*(long*)( this + 0x9e8 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x9e8 ), (CowData*)param_1);
      return;
   }

   return;
}
/* AnimationNodeBlendSpace2D::get_x_label() const */void AnimationNodeBlendSpace2D::get_x_label(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x9e0 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x9e0 ));
   }

   return;
}
/* AnimationNodeBlendSpace2D::get_y_label() const */void AnimationNodeBlendSpace2D::get_y_label(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x9e8 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x9e8 ));
   }

   return;
}
/* AnimationNodeBlendSpace2D::get_child_by_name(StringName const&) const */StringName *AnimationNodeBlendSpace2D::get_child_by_name(StringName *param_1) {
   long *plVar1;
   Object *pOVar2;
   long lVar3;
   char cVar4;
   long lVar5;
   long lVar6;
   long *in_RDX;
   int iVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_50;
   Object *local_48;
   size_t local_40;
   long local_30;
   lVar5 = *in_RDX;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar5 != 0) {
      pOVar2 = *(Object**)( lVar5 + 8 );
      local_50 = 0;
      if (pOVar2 != (Object*)0x0) {
         local_40 = strlen((char*)pOVar2);
         iVar7 = (int)&local_48;
         local_48 = pOVar2;
         String::parse_latin1((StrRange*)&local_50);
         goto LAB_001013bd;
      }

      plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
      if (*(long*)( lVar5 + 0x10 ) != 0) {
         do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_001014c9;
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
            local_50 = *(long*)( lVar5 + 0x10 );
            iVar7 = (int)&local_48;
            goto LAB_001013bd;
         }

      }

   }

   LAB_001014c9:local_50 = 0;
   iVar7 = (int)&local_48;
   LAB_001013bd:String::to_int();
   get_blend_point_node(iVar7);
   pOVar2 = local_48;
   *(undefined8*)param_1 = 0;
   if (local_48 != (Object*)0x0) {
      lVar5 = __dynamic_cast(local_48, &Object::typeinfo, &AnimationNode::typeinfo, 0);
      if (lVar5 != 0) {
         *(long*)param_1 = lVar5;
         cVar4 = RefCounted::reference();
         if (cVar4 == '\0') {
            *(undefined8*)param_1 = 0;
         }

      }

      cVar4 = RefCounted::unreference();
      if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
         ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
         Memory::free_static(pOVar2, false);
      }

   }

   lVar5 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* CowData<int>::_copy_on_write() [clone .isra.0] */void CowData<int>::_copy_on_write(CowData<int> *this) {
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
   __n = lVar2 * 4;
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
/* AnimationNodeBlendSpace2D::has_triangle(int, int, int) const */undefined8 AnimationNodeBlendSpace2D::has_triangle(AnimationNodeBlendSpace2D *this, int param_1, int param_2, int param_3) {
   long *plVar1;
   int iVar2;
   int iVar3;
   int *piVar4;
   undefined8 uVar5;
   long lVar6;
   long in_FS_OFFSET;
   int local_20;
   int iStack_1c;
   int local_18;
   long local_10;
   iVar2 = *(int*)( this + 0x9a0 );
   lVar6 = (long)iVar2;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 < 0 ) || ( iVar2 <= param_1 )) {
      _err_print_index_error("has_triangle", "scene/animation/animation_blend_space_2d.cpp", 0xa8, (long)param_1, lVar6, "p_x", "blend_points_used", "", false, false);
   }
 else {
      if (( iVar2 <= param_2 ) || ( param_2 < 0 )) {
         _err_print_index_error("has_triangle", "scene/animation/animation_blend_space_2d.cpp", 0xa9, (long)param_2, lVar6, "p_y", "blend_points_used", "", false, false);
         uVar5 = 0;
         goto LAB_00101735;
      }

      if (( iVar2 <= param_3 ) || ( param_3 < 0 )) {
         _err_print_index_error("has_triangle", "scene/animation/animation_blend_space_2d.cpp", 0xaa, (long)param_3, lVar6, "p_z", "blend_points_used", "", false, false);
         uVar5 = 0;
         goto LAB_00101735;
      }

      local_20 = param_1;
      iStack_1c = param_2;
      local_18 = param_3;
      SortArray<int,_DefaultComparator<int>,true>::introsort(0, 3, &local_20, 2);
      iVar2 = local_20;
      if (iStack_1c < local_20) {
         local_20 = iStack_1c;
         iStack_1c = iVar2;
      }

      iVar3 = iStack_1c;
      iVar2 = local_20;
      if (local_18 < local_20) {
         local_20 = local_18;
         iStack_1c = iVar2;
         local_18 = iVar3;
      }
 else {
         iVar2 = iStack_1c;
         if (local_18 < iStack_1c) {
            iStack_1c = local_18;
            local_18 = iVar2;
         }

      }

      piVar4 = *(int**)( this + 0x9b0 );
      if (piVar4 != (int*)0x0) {
         plVar1 = (long*)( piVar4 + -2 );
         for (lVar6 = 0; lVar6 < *plVar1; lVar6 = lVar6 + 1) {
            if (( ( *piVar4 == local_20 ) && ( iStack_1c == piVar4[1] ) ) && ( piVar4[2] == local_18 )) {
               uVar5 = 1;
               goto LAB_00101735;
            }

            piVar4 = piVar4 + 3;
         }

      }

   }

   uVar5 = 0;
   LAB_00101735:if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
/* AnimationNodeBlendSpace2D::_blend_triangle(Vector2 const&, Vector2 const*, float*) */void AnimationNodeBlendSpace2D::_blend_triangle(AnimationNodeBlendSpace2D *this, Vector2 *param_1, Vector2 *param_2, float *param_3) {
   char cVar1;
   long in_FS_OFFSET;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   undefined8 local_48;
   undefined8 local_40;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar1 = Vector2::is_equal_approx(param_1);
   if (cVar1 == '\0') {
      cVar1 = Vector2::is_equal_approx(param_1);
      if (cVar1 == '\0') {
         cVar1 = Vector2::is_equal_approx(param_1);
         if (cVar1 == '\0') {
            fVar7 = (float)*(undefined8*)param_2;
            fVar2 = (float)( ( ulong ) * (undefined8*)param_2 >> 0x20 );
            local_48 = CONCAT44((float)( ( ulong ) * (undefined8*)( param_2 + 8 ) >> 0x20 ) - fVar2, (float)*(undefined8*)( param_2 + 8 ) - fVar7);
            local_40 = CONCAT44((float)( ( ulong ) * (undefined8*)( param_2 + 0x10 ) >> 0x20 ) - fVar2, (float)*(undefined8*)( param_2 + 0x10 ) - fVar7);
            local_38 = CONCAT44((float)( ( ulong ) * (undefined8*)param_1 >> 0x20 ) - fVar2, (float)*(undefined8*)param_1 - fVar7);
            fVar2 = (float)Vector2::dot((Vector2*)&local_48);
            fVar3 = (float)Vector2::dot((Vector2*)&local_48);
            fVar4 = (float)Vector2::dot((Vector2*)&local_40);
            fVar5 = (float)Vector2::dot((Vector2*)&local_38);
            fVar6 = (float)Vector2::dot((Vector2*)&local_38);
            fVar7 = fVar2 * fVar4 - fVar3 * fVar3;
            if (fVar7 != 0.0) {
               fVar4 = ( fVar4 * fVar5 - fVar3 * fVar6 ) / fVar7;
               fVar7 = ( fVar2 * fVar6 - fVar3 * fVar5 ) / fVar7;
               *(ulong*)param_3 = CONCAT44(fVar4, ( (float)_LC0 - fVar4 ) - fVar7);
               goto LAB_001018ae;
            }

            goto LAB_00101896;
         }

         fVar3 = 0.0;
         fVar7 = (float)_LC0;
         fVar2 = 0.0;
      }
 else {
         fVar3 = 0.0;
         fVar7 = 0.0;
         fVar2 = (float)_LC0;
      }

   }
 else {
      LAB_00101896:fVar7 = 0.0;
      fVar2 = 0.0;
      fVar3 = (float)_LC0;
   }

   *param_3 = fVar3;
   param_3[1] = fVar2;
   LAB_001018ae:param_3[2] = fVar7;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationNodeBlendSpace2D::AnimationNodeBlendSpace2D() */void AnimationNodeBlendSpace2D::AnimationNodeBlendSpace2D(AnimationNodeBlendSpace2D *this) {
   long *plVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined *puVar4;
   AnimationNodeBlendSpace2D *pAVar5;
   AnimationNodeBlendSpace2D *pAVar6;
   AnimationNodeBlendSpace2D *pAVar7;
   long lVar8;
   long in_FS_OFFSET;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   pAVar7 = this + 0x3a0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   AnimationNode::AnimationNode((AnimationNode*)this);
   *(undefined***)this = &PTR__initialize_classv_0011db08;
   pAVar5 = pAVar7;
   do {
      *(undefined8*)( pAVar5 + 0x10 ) = 0;
      pAVar6 = pAVar5 + 0x18;
      *(undefined1(*) [16])pAVar5 = (undefined1[16])0x0;
      pAVar5 = pAVar6;
   }
 while ( pAVar6 != this + 0x9a0 );
   *(undefined4*)( this + 0x9a0 ) = 0;
   *(undefined8*)( this + 0x9b0 ) = 0;
   StringName::StringName((StringName*)( this + 0x9b8 ), "blend_position", false);
   StringName::StringName((StringName*)( this + 0x9c0 ), "closest", false);
   uVar3 = _UNK_0011e7b8;
   uVar2 = _LC0;
   local_40 = 1;
   *(undefined8*)( this + 0x9d8 ) = _LC43;
   *(undefined8*)( this + 0x9e0 ) = 0;
   *(undefined8*)( this + 0x9c8 ) = uVar2;
   *(undefined8*)( this + 0x9d0 ) = uVar3;
   local_48 = &_LC44;
   String::parse_latin1((StrRange*)( this + 0x9e0 ));
   *(undefined8*)( this + 0x9e8 ) = 0;
   local_48 = &_LC45;
   local_40 = 1;
   String::parse_latin1((StrRange*)( this + 0x9e8 ));
   *(undefined4*)( this + 0x9f0 ) = 0;
   *(undefined2*)( this + 0x9f4 ) = 1;
   this[0x9f6] = (AnimationNodeBlendSpace2D)0x0;
   lVar8 = 0;
   do {
      itos((long)&local_48);
      StringName::StringName((StringName*)&local_50, (String*)&local_48, false);
      if (*(long*)pAVar7 == local_50) {
         if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(long*)pAVar7 = local_50;
      }

      puVar4 = local_48;
      if (local_48 != (undefined*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (undefined*)0x0;
            Memory::free_static(puVar4 + -0x10, false);
         }

      }

      lVar8 = lVar8 + 1;
      pAVar7 = pAVar7 + 0x18;
   }
 while ( lVar8 != 0x40 );
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationNodeBlendSpace2D::_queue_auto_triangles() [clone .part.0] */void AnimationNodeBlendSpace2D::_queue_auto_triangles(AnimationNodeBlendSpace2D *this) {
   long in_FS_OFFSET;
   AnimationNodeBlendSpace2D aAStack_48[16];
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0x9f5] = (AnimationNodeBlendSpace2D)0x1;
   create_custom_callable_function_pointer<AnimationNodeBlendSpace2D>(aAStack_48, (char*)this, (_func_void*)"&AnimationNodeBlendSpace2D::_update_triangles");
   Variant::Variant((Variant*)local_38, 0);
   Callable::call_deferredp((Variant**)aAStack_48, 0);
   if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
   }

   Callable::~Callable((Callable*)aAStack_48);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationNodeBlendSpace2D::_queue_auto_triangles() */void AnimationNodeBlendSpace2D::_queue_auto_triangles(AnimationNodeBlendSpace2D *this) {
   if (( this[0x9f4] != (AnimationNodeBlendSpace2D)0x0 ) && ( this[0x9f5] == (AnimationNodeBlendSpace2D)0x0 )) {
      _queue_auto_triangles(this);
      return;
   }

   return;
}
/* AnimationNodeBlendSpace2D::set_auto_triangles(bool) */void AnimationNodeBlendSpace2D::set_auto_triangles(AnimationNodeBlendSpace2D *this, bool param_1) {
   if (( ( this[0x9f4] != (AnimationNodeBlendSpace2D)param_1 ) && ( this[0x9f4] = (AnimationNodeBlendSpace2D)param_1 ),param_1 )) {
      _queue_auto_triangles(this);
      return;
   }

   return;
}
/* AnimationNodeBlendSpace2D::set_blend_point_position(int, Vector2 const&) */void AnimationNodeBlendSpace2D::set_blend_point_position(AnimationNodeBlendSpace2D *this, int param_1, Vector2 *param_2) {
   AnimationNodeBlendSpace2D AVar1;
   if (( param_1 < 0 ) || ( *(int*)( this + 0x9a0 ) <= param_1 )) {
      _err_print_index_error("set_blend_point_position", "scene/animation/animation_blend_space_2d.cpp", 0x61, (long)param_1, (long)*(int*)( this + 0x9a0 ), "p_point", "blend_points_used", "", false, false);
      return;
   }

   AVar1 = this[0x9f4];
   *(undefined8*)( this + (long)param_1 * 0x18 + 0x3b0 ) = *(undefined8*)param_2;
   if (( AVar1 != (AnimationNodeBlendSpace2D)0x0 ) && ( this[0x9f5] == (AnimationNodeBlendSpace2D)0x0 )) {
      _queue_auto_triangles(this);
      return;
   }

   return;
}
/* AnimationNodeBlendSpace2D::set_blend_point_node(int, Ref<AnimationRootNode> const&) */void AnimationNodeBlendSpace2D::set_blend_point_node(AnimationNodeBlendSpace2D *this, int param_1, Ref *param_2) {
   long *plVar1;
   code *pcVar2;
   Object *pOVar3;
   char cVar4;
   int iVar5;
   long lVar6;
   Object *pOVar7;
   long in_FS_OFFSET;
   long local_70;
   AnimationNodeBlendSpace2D local_68[16];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 < 0 ) || ( *(int*)( this + 0x9a0 ) <= param_1 )) {
      _err_print_index_error("set_blend_point_node", "scene/animation/animation_blend_space_2d.cpp", 0x67, (long)param_1, (long)*(int*)( this + 0x9a0 ), "p_point", "blend_points_used", "", false, false);
   }
 else {
      if (*(long*)param_2 == 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _err_print_error("set_blend_point_node", "scene/animation/animation_blend_space_2d.cpp", 0x68, "Condition \"p_node.is_null()\" is true.", 0, 0);
            return;
         }

         goto LAB_0010238f;
      }

      lVar6 = (long)param_1;
      plVar1 = *(long**)( this + lVar6 * 0x18 + 0x3a8 );
      if (plVar1 == (long*)0x0) {
         *(long*)( this + lVar6 * 0x18 + 0x3a8 ) = *(long*)param_2;
         cVar4 = RefCounted::reference();
         pOVar7 = (Object*)0x0;
         if (cVar4 == '\0') {
            LAB_00102246:*(undefined8*)( this + lVar6 * 0x18 + 0x3a8 ) = 0;
            goto LAB_00101ff4;
         }

         LAB_00102009:pOVar7 = *(Object**)( this + lVar6 * 0x18 + 0x3a8 );
      }
 else {
         pcVar2 = *(code**)( *plVar1 + 0x110 );
         create_custom_callable_function_pointer<AnimationNodeBlendSpace2D>(local_68, (char*)this, (_func_void*)"&AnimationNodeBlendSpace2D::_tree_changed");
         StringName::StringName((StringName*)&local_70, "tree_changed", false);
         ( *pcVar2 )(plVar1, (StringName*)&local_70, local_68);
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

         Callable::~Callable((Callable*)local_68);
         plVar1 = *(long**)( this + lVar6 * 0x18 + 0x3a8 );
         pcVar2 = *(code**)( *plVar1 + 0x110 );
         create_custom_callable_function_pointer<AnimationNodeBlendSpace2D,ObjectID_const&,String_const&,String_const&>(local_68, (char*)this, (_func_void_ObjectID_ptr_String_ptr_String_ptr*)"&AnimationNodeBlendSpace2D::_animation_node_renamed");
         StringName::StringName((StringName*)&local_70, "animation_node_renamed", false);
         ( *pcVar2 )(plVar1, (StringName*)&local_70, local_68);
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

         Callable::~Callable((Callable*)local_68);
         plVar1 = *(long**)( this + lVar6 * 0x18 + 0x3a8 );
         pcVar2 = *(code**)( *plVar1 + 0x110 );
         create_custom_callable_function_pointer<AnimationNodeBlendSpace2D,ObjectID_const&,StringName_const&>(local_68, (char*)this, (_func_void_ObjectID_ptr_StringName_ptr*)"&AnimationNodeBlendSpace2D::_animation_node_removed");
         StringName::StringName((StringName*)&local_70, "animation_node_removed", false);
         ( *pcVar2 )(plVar1, (StringName*)&local_70, local_68);
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

         Callable::~Callable((Callable*)local_68);
         pOVar3 = *(Object**)param_2;
         pOVar7 = *(Object**)( this + lVar6 * 0x18 + 0x3a8 );
         if (pOVar3 != pOVar7) {
            *(Object**)( this + lVar6 * 0x18 + 0x3a8 ) = pOVar3;
            if (( pOVar3 != (Object*)0x0 ) && ( cVar4 = cVar4 == '\0' )) goto LAB_00102246;
            LAB_00101ff4:if (( ( pOVar7 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar7 + 0x140 ))(pOVar7);
            Memory::free_static(pOVar7, false);
         }

         goto LAB_00102009;
      }

   }

   pcVar2 = *(code**)( *(long*)pOVar7 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeBlendSpace2D>(local_68, (char*)this, (_func_void*)"&AnimationNodeBlendSpace2D::_tree_changed");
   StringName::StringName((StringName*)&local_70, "tree_changed", false);
   ( *pcVar2 )(pOVar7, (StringName*)&local_70, local_68, 8);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_68);
   plVar1 = *(long**)( this + lVar6 * 0x18 + 0x3a8 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeBlendSpace2D,ObjectID_const&,String_const&,String_const&>(local_68, (char*)this, (_func_void_ObjectID_ptr_String_ptr_String_ptr*)"&AnimationNodeBlendSpace2D::_animation_node_renamed");
   StringName::StringName((StringName*)&local_70, "animation_node_renamed", false);
   ( *pcVar2 )(plVar1, (StringName*)&local_70, local_68, 8);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_68);
   plVar1 = *(long**)( this + lVar6 * 0x18 + 0x3a8 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<AnimationNodeBlendSpace2D,ObjectID_const&,StringName_const&>(local_68, (char*)this, (_func_void_ObjectID_ptr_StringName_ptr*)"&AnimationNodeBlendSpace2D::_animation_node_removed");
   StringName::StringName((StringName*)&local_70, "animation_node_removed", false);
   ( *pcVar2 )(plVar1, (StringName*)&local_70, local_68, 8);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_68);
   if ((set_blend_point_node(int,Ref<AnimationRootNode>const&)::{lambda()
   #1
   == '\0') &&
       (iVar5 = __cxa_guard_acquire(&set_blend_point_node(int,Ref<AnimationRootNode>const&)::
                                     {lambda()
   #1
   _scs_create((char*)&set_blend_point_node, (int, Ref < AnimationRootNode > const & sname, true);
   __cxa_atexit(StringName::~StringName, &set_blend_point_node, (int, Ref < AnimationRootNode > const & sname, &__dso_handle);
   __cxa_guard_release (&set_blend_point_node(int,Ref<AnimationRootNode>const&)::{lambda()#1}::
                           operator()()::sname);
}
local_58 = 0;local_50 = (undefined1[16])0x0;( **(code**)( *(long*)this + 0xd0 ) )(this, &set_blend_point_node, (int, Ref < AnimationRootNode > const & sname, 0, 0);if (Variant::needs_deinit[(int)local_58] != '\0') {
   Variant::_clear_internal();
}
}if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
LAB_0010238f:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* AnimationNodeBlendSpace2D::add_blend_point(Ref<AnimationRootNode> const&, Vector2 const&, int) */void AnimationNodeBlendSpace2D::add_blend_point(AnimationNodeBlendSpace2D *this, Ref *param_1, Vector2 *param_2, int param_3) {
   int *piVar1;
   code *pcVar2;
   long *plVar3;
   char cVar4;
   char *pcVar5;
   long lVar6;
   undefined8 uVar7;
   int iVar8;
   StringName *this_00;
   StringName *pSVar9;
   Object *pOVar10;
   long lVar11;
   long lVar12;
   long lVar13;
   Object *pOVar14;
   long lVar15;
   long in_FS_OFFSET;
   long local_70;
   AnimationNodeBlendSpace2D local_68[16];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar8 = *(int*)( this + 0x9a0 );
   if (0x3f < iVar8) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = 0x41;
         pcVar5 = "Condition \"blend_points_used >= MAX_BLEND_POINTS\" is true.";
         LAB_001028ce:_err_print_error("add_blend_point", "scene/animation/animation_blend_space_2d.cpp", uVar7, pcVar5, 0, 0);
         return;
      }

      goto LAB_001029af;
   }

   lVar11 = (long)param_3;
   pOVar10 = *(Object**)param_1;
   if (pOVar10 == (Object*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = 0x42;
         pcVar5 = "Condition \"p_node.is_null()\" is true.";
         goto LAB_001028ce;
      }

      goto LAB_001029af;
   }

   if (( iVar8 < param_3 ) || ( param_3 < -1 )) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = 0x43;
         pcVar5 = "Condition \"p_at_index < -1 || p_at_index > blend_points_used\" is true.";
         goto LAB_001028ce;
      }

      goto LAB_001029af;
   }

   if (( param_3 == -1 ) || ( iVar8 == param_3 )) {
      lVar11 = (long)iVar8;
      pOVar14 = *(Object**)( this + lVar11 * 0x18 + 0x3a8 );
      if (pOVar14 != pOVar10) {
         *(Object**)( this + lVar11 * 0x18 + 0x3a8 ) = pOVar10;
         LAB_001027e3:cVar4 = RefCounted::reference();
         if (cVar4 == '\0') {
            *(undefined8*)( this + lVar11 * 0x18 + 0x3a8 ) = 0;
         }

         goto LAB_0010256e;
      }

   }
 else {
      if (param_3 < iVar8 + -1) {
         lVar6 = (long)( iVar8 + -1 ) * 0x18;
         this_00 = (StringName*)( this + lVar6 + 0x3a0 );
         do {
            while (true) {
               pSVar9 = this_00 + -0x18;
               StringName::operator =(this_00, pSVar9);
               pOVar10 = *(Object**)( this_00 + -0x10 );
               pOVar14 = *(Object**)( this_00 + 8 );
               if (pOVar10 != pOVar14) break;
               LAB_00102458:*(undefined8*)( this_00 + 0x10 ) = *(undefined8*)( this_00 + -8 );
               this_00 = pSVar9;
               if (pSVar9 == (StringName*)( this + ( ulong )(( iVar8 - param_3 ) - 2) * -0x18 + lVar6 + 0x388 )) goto LAB_001024e0;
            }
;
            *(Object**)( this_00 + 8 ) = pOVar10;
            if (( pOVar10 != (Object*)0x0 ) && ( cVar4 = cVar4 == '\0' )) {
               *(undefined8*)( this_00 + 8 ) = 0;
            }

            if (( ( pOVar14 == (Object*)0x0 ) || ( cVar4 = RefCounted::unreference() ),cVar4 == '\0' )) goto LAB_00102458;
            ( **(code**)( *(long*)pOVar14 + 0x140 ) )(pOVar14);
            Memory::free_static(pOVar14, false);
            *(undefined8*)( this_00 + 0x10 ) = *(undefined8*)( this_00 + -8 );
            this_00 = pSVar9;
         }
 while ( pSVar9 != (StringName*)( this + ( ulong )(( iVar8 - param_3 ) - 2) * -0x18 + lVar6 + 0x388 ) );
      }

      LAB_001024e0:lVar6 = *(long*)( this + 0x9b0 );
      if (lVar6 != 0) {
         lVar15 = 0;
         do {
            if (*(long*)( lVar6 + -8 ) <= lVar15) break;
            iVar8 = 0;
            do {
               if (lVar6 == 0) {
                  lVar13 = 0;
                  LAB_00102854:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar15, lVar13, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               lVar13 = *(long*)( lVar6 + -8 );
               while (true) {
                  if (lVar13 <= lVar15) goto LAB_00102854;
                  lVar12 = (long)iVar8;
                  if (param_3 <= *(int*)( lVar6 + lVar12 * 4 + lVar15 * 0xc )) break;
                  iVar8 = iVar8 + 1;
                  if (iVar8 == 3) goto LAB_00102539;
               }
;
               iVar8 = iVar8 + 1;
               CowData<AnimationNodeBlendSpace2D::BlendTriangle>::_copy_on_write((CowData<AnimationNodeBlendSpace2D::BlendTriangle>*)( this + 0x9b0 ));
               lVar6 = *(long*)( this + 0x9b0 );
               piVar1 = (int*)( lVar6 + lVar15 * 0xc + lVar12 * 4 );
               *piVar1 = *piVar1 + 1;
            }
 while ( iVar8 != 3 );
            LAB_00102539:lVar15 = lVar15 + 1;
         }
 while ( lVar6 != 0 );
      }

      pOVar10 = *(Object**)param_1;
      pOVar14 = *(Object**)( this + lVar11 * 0x18 + 0x3a8 );
      if (pOVar14 != pOVar10) {
         *(Object**)( this + lVar11 * 0x18 + 0x3a8 ) = pOVar10;
         if (pOVar10 != (Object*)0x0) goto LAB_001027e3;
         LAB_0010256e:if (( ( pOVar14 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar14 + 0x140 ))(pOVar14);
         Memory::free_static(pOVar14, false);
      }

      pOVar10 = *(Object**)( this + lVar11 * 0x18 + 0x3a8 );
   }

}
*(undefined8*)( this + lVar11 * 0x18 + 0x3b0 ) = *(undefined8*)param_2;pcVar2 = *(code**)( *(long*)pOVar10 + 0x108 );create_custom_callable_function_pointer<AnimationNodeBlendSpace2D>(local_68, (char*)this, (_func_void*)"&AnimationNodeBlendSpace2D::_tree_changed");StringName::StringName((StringName*)&local_70, "tree_changed", false);( *pcVar2 )(pOVar10, (StringName*)&local_70, local_68, 8);if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
   StringName::unref();
}
Callable::~Callable((Callable*)local_68);plVar3 = *(long**)( this + lVar11 * 0x18 + 0x3a8 );pcVar2 = *(code**)( *plVar3 + 0x108 );create_custom_callable_function_pointer<AnimationNodeBlendSpace2D,ObjectID_const&,String_const&,String_const&>(local_68, (char*)this, (_func_void_ObjectID_ptr_String_ptr_String_ptr*)"&AnimationNodeBlendSpace2D::_animation_node_renamed");StringName::StringName((StringName*)&local_70, "animation_node_renamed", false);( *pcVar2 )(plVar3, (StringName*)&local_70, local_68, 8);if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
   StringName::unref();
}
Callable::~Callable((Callable*)local_68);plVar3 = *(long**)( this + lVar11 * 0x18 + 0x3a8 );pcVar2 = *(code**)( *plVar3 + 0x108 );create_custom_callable_function_pointer<AnimationNodeBlendSpace2D,ObjectID_const&,StringName_const&>(local_68, (char*)this, (_func_void_ObjectID_ptr_StringName_ptr*)"&AnimationNodeBlendSpace2D::_animation_node_removed");StringName::StringName((StringName*)&local_70, "animation_node_removed", false);( *pcVar2 )(plVar3, (StringName*)&local_70, local_68, 8);if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
   StringName::unref();
}
Callable::~Callable((Callable*)local_68);*(int*)( this + 0x9a0 ) = *(int*)( this + 0x9a0 ) + 1;if (( this[0x9f4] != (AnimationNodeBlendSpace2D)0x0 ) && ( this[0x9f5] == (AnimationNodeBlendSpace2D)0x0 )) {
   _queue_auto_triangles(this);
}
if ((add_blend_point(Ref<AnimationRootNode>const&,Vector2_const&,int)::{lambda()#1::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&add_blend_point(Ref<AnimationRootNode>const&,Vector2_const&,int)
                                   ::{lambda()#1_scs_create((char *)&add_blend_point(Ref<AnimationRootNode>const&,Vector2_const&,int)::
                         {lambda()#1__cxa_atexit(StringName::~StringName, &add_blend_point(Ref < AnimationRootNode > const & Vector2_const & sname, &__dso_handle));__cxa_guard_release(&add_blend_point(Ref<AnimationRootNode>const&,Vector2_const&,int)::
                         {lambda()#1}local_58 = 0;local_50 = (undefined1[16])0x0;( **(code**)( *(long*)this + 0xd0 ) )(this, &add_blend_point(Ref < AnimationRootNode > const & Vector2_const & sname, 0, 0));if (Variant::needs_deinit[(int)local_58] != '\0') {
   Variant::_clear_internal();
}
if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
LAB_001029af:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* AnimationNodeBlendSpace2D::_add_blend_point(int, Ref<AnimationRootNode> const&) */void AnimationNodeBlendSpace2D::_add_blend_point(AnimationNodeBlendSpace2D *this, int param_1, Ref *param_2) {
   long in_FS_OFFSET;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x9a0 ) == param_1) {
      local_18 = 0;
      add_blend_point(this, param_2, (Vector2*)&local_18, -1);
      if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      set_blend_point_node(this, param_1, param_2);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationNodeBlendSpace2D::_validate_property(PropertyInfo&) const */void AnimationNodeBlendSpace2D::_validate_property(AnimationNodeBlendSpace2D *this, PropertyInfo *param_1) {
   String *this_00;
   long *plVar1;
   int iVar2;
   long lVar3;
   char cVar4;
   int iVar5;
   wchar32 wVar6;
   long in_FS_OFFSET;
   CowData<char32_t> local_40[8];
   long local_38;
   long local_30;
   this_00 = (String*)( param_1 + 8 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( this[0x9f4] != (AnimationNodeBlendSpace2D)0x0 ) && ( cVar4 = String::operator ==(this_00, "triangles") ),cVar4 != '\0') {
      *(undefined4*)( param_1 + 0x28 ) = 0;
   }

   cVar4 = String::begins_with((char*)this_00);
   if (cVar4 == '\0') goto LAB_00102a84;
   wVar6 = (wchar32)local_40;
   String::get_slicec(wVar6, (int)this_00);
   String::get_slicec(( wchar32 ) & local_38, wVar6);
   iVar5 = String::to_int();
   lVar3 = local_38;
   if (local_38 == 0) {
      LAB_00102b16:iVar2 = *(int*)( this + 0x9a0 );
   }
 else {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00102b16;
      local_38 = 0;
      Memory::free_static((void*)( lVar3 + -0x10 ), false);
      iVar2 = *(int*)( this + 0x9a0 );
   }

   if (iVar2 <= iVar5) {
      *(undefined4*)( param_1 + 0x28 ) = 0;
   }

   CowData<char32_t>::_unref(local_40);
   LAB_00102a84:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationNodeBlendSpace2D::get_parameter_list(List<PropertyInfo, DefaultAllocator>*) const */void AnimationNodeBlendSpace2D::get_parameter_list(AnimationNodeBlendSpace2D *this, List *param_1) {
   long lVar1;
   char *pcVar2;
   long *plVar3;
   undefined4 *puVar4;
   undefined1(*pauVar5)[16];
   long in_FS_OFFSET;
   CowData *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   size_t local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   AnimationNode::get_parameter_list((List*)this);
   local_88 = 0;
   local_90 = 0;
   local_78 = "";
   local_70 = 0;
   String::parse_latin1((StrRange*)&local_90);
   lVar1 = *(long*)( this + 0x9b8 );
   if (lVar1 == 0) {
      LAB_001030b1:local_98 = 0;
      local_78 = (char*)CONCAT44(local_78._4_4_, 5);
      local_70 = 0;
   }
 else {
      pcVar2 = *(char**)( lVar1 + 8 );
      local_98 = 0;
      if (pcVar2 == (char*)0x0) {
         if (*(long*)( lVar1 + 0x10 ) == 0) goto LAB_001030b1;
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_98, (CowData*)( lVar1 + 0x10 ));
      }
 else {
         local_70 = strlen(pcVar2);
         local_78 = pcVar2;
         String::parse_latin1((StrRange*)&local_98);
      }

      local_b0 = (CowData*)&local_98;
      local_78 = (char*)CONCAT44(local_78._4_4_, 5);
      local_70 = 0;
      if (local_98 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, local_b0);
      }

   }

   local_b0 = (CowData*)&local_98;
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_0010313d:local_50 = 6;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      lVar1 = *(long*)param_1;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_0010313d;
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

      lVar1 = *(long*)param_1;
   }

   if (lVar1 == 0) {
      pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar5;
      *(undefined4*)pauVar5[1] = 0;
      *pauVar5 = (undefined1[16])0x0;
   }

   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_68);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar3 = *(long**)param_1;
   lVar1 = plVar3[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar3;
   *(long*)( puVar4 + 0xe ) = lVar1;
   if (lVar1 != 0) {
      *(undefined4**)( lVar1 + 0x30 ) = puVar4;
   }

   plVar3[1] = (long)puVar4;
   if (*plVar3 == 0) {
      *plVar3 = (long)puVar4;
   }

   *(int*)( plVar3 + 2 ) = (int)plVar3[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   local_88 = 0;
   local_78 = "";
   local_90 = 0;
   local_70 = 0;
   String::parse_latin1((StrRange*)&local_90);
   lVar1 = *(long*)( this + 0x9c0 );
   if (lVar1 == 0) {
      LAB_00103199:local_98 = 0;
      local_78 = (char*)CONCAT44(local_78._4_4_, 2);
      local_70 = 0;
   }
 else {
      pcVar2 = *(char**)( lVar1 + 8 );
      local_98 = 0;
      if (pcVar2 == (char*)0x0) {
         if (*(long*)( lVar1 + 0x10 ) == 0) goto LAB_00103199;
         CowData<char32_t>::_ref((CowData<char32_t>*)local_b0, (CowData*)( lVar1 + 0x10 ));
      }
 else {
         local_70 = strlen(pcVar2);
         local_78 = pcVar2;
         String::parse_latin1((StrRange*)local_b0);
      }

      local_78 = (char*)CONCAT44(local_78._4_4_, 2);
      local_70 = 0;
      if (local_98 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, local_b0);
      }

   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0;
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

         lVar1 = *(long*)param_1;
         goto joined_r0x001030f9;
      }

   }

   local_50 = 0;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   lVar1 = *(long*)param_1;
   joined_r0x001030f9:if (lVar1 == 0) {
      pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar5;
      *(undefined4*)pauVar5[1] = 0;
      *pauVar5 = (undefined1[16])0x0;
   }

   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_68);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar3 = *(long**)param_1;
   lVar1 = plVar3[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar3;
   *(long*)( puVar4 + 0xe ) = lVar1;
   if (lVar1 != 0) {
      *(undefined4**)( lVar1 + 0x30 ) = puVar4;
   }

   plVar3[1] = (long)puVar4;
   if (*plVar3 == 0) {
      *plVar3 = (long)puVar4;
   }

   *(int*)( plVar3 + 2 ) = (int)plVar3[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationNodeBlendSpace2D::~AnimationNodeBlendSpace2D() */void AnimationNodeBlendSpace2D::~AnimationNodeBlendSpace2D(AnimationNodeBlendSpace2D *this) {
   long *plVar1;
   Object *pOVar2;
   long lVar3;
   char cVar4;
   AnimationNodeBlendSpace2D *pAVar5;
   *(undefined***)this = &PTR__initialize_classv_0011db08;
   if (*(long*)( this + 0x9e8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x9e8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x9e8 );
         *(undefined8*)( this + 0x9e8 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x9e0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x9e0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x9e0 );
         *(undefined8*)( this + 0x9e0 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (StringName::configured != '\0') {
      if (*(long*)( this + 0x9c0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001032b9;
      }

      if (*(long*)( this + 0x9b8 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001032b9:if (*(long*)( this + 0x9b0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x9b0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x9b0 );
         *(undefined8*)( this + 0x9b0 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   pAVar5 = this + 0x988;
   do {
      if (*(long*)( pAVar5 + 8 ) != 0) {
         cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            pOVar2 = *(Object**)( pAVar5 + 8 );
            cVar4 = predelete_handler(pOVar2);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

      }

      if (( StringName::configured != '\0' ) && ( *(long*)pAVar5 != 0 )) {
         StringName::unref();
      }

      pAVar5 = pAVar5 + -0x18;
   }
 while ( pAVar5 != this + 0x388 );
   *(code**)this = ClassDB::bind_methodfi;
   AnimationNode::~AnimationNode((AnimationNode*)this);
   return;
}
/* AnimationNodeBlendSpace2D::~AnimationNodeBlendSpace2D() */void AnimationNodeBlendSpace2D::~AnimationNodeBlendSpace2D(AnimationNodeBlendSpace2D *this) {
   ~AnimationNodeBlendSpace2D(this)
   ;;
   operator_delete(this, 0x9f8);
   return;
}
/* AnimationNodeBlendSpace2D::_bind_methods() */void AnimationNodeBlendSpace2D::_bind_methods(void) {
   long *plVar1;
   code *pcVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   int *piVar6;
   MethodBind *pMVar7;
   uint uVar8;
   long lVar9;
   int *piVar10;
   long lVar11;
   long in_FS_OFFSET;
   long local_210;
   long local_208;
   long local_200;
   long local_1f8;
   long local_1f0;
   long local_1e8;
   long local_1e0;
   long local_1d8;
   long local_1d0;
   char *local_1c8;
   undefined8 local_1c0;
   char *local_1b8;
   long local_1b0;
   undefined1 local_1a8[16];
   long local_198;
   undefined8 local_190;
   undefined8 local_188;
   undefined8 local_180;
   undefined8 local_178[2];
   int *local_168;
   undefined8 local_160;
   long local_150;
   char *local_148;
   undefined *puStack_140;
   undefined8 local_138;
   char *local_128;
   char *pcStack_120;
   undefined8 local_118;
   char *local_108;
   undefined *puStack_100;
   undefined8 local_f8;
   char *local_e8;
   undefined *puStack_e0;
   undefined8 local_d8;
   Variant *local_c8;
   undefined *puStack_c0;
   char *local_b8;
   undefined8 local_b0;
   Variant *local_a8;
   undefined *puStack_a0;
   undefined *local_98;
   char *pcStack_90;
   undefined8 local_88;
   Variant **local_78;
   undefined1 auStack_70[16];
   char **ppcStack_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_b0 = 0;
   local_b8 = "at_index";
   local_c8 = (Variant*)&_LC88;
   puStack_c0 = &_LC94;
   auStack_70._8_8_ = &local_b8;
   auStack_70._0_8_ = &puStack_c0;
   uVar8 = (uint)(Variant*)&local_78;
   local_78 = &local_c8;
   D_METHODP((char*)&local_1b8, (char***)"add_blend_point", uVar8);
   Variant::Variant((Variant*)&local_78, -1);
   local_58 = (undefined1[16])0x0;
   ppcStack_60 = (char**)0x0;
   local_c8 = (Variant*)&local_78;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,Ref<AnimationRootNode>const&,Vector2_const&,int>(add_blend_point);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, &local_c8, 1);
   if (Variant::needs_deinit[(int)ppcStack_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1b8);
   local_d8 = 0;
   local_e8 = "point";
   puStack_e0 = &_LC94;
   auStack_70._0_8_ = &puStack_e0;
   local_78 = (Variant**)&local_e8;
   D_METHODP((char*)&local_1b8, (char***)"set_blend_point_position", uVar8);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,int,Vector2_const&>(set_blend_point_position);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   CowData<StringName>::_unref((CowData<StringName>*)local_1a8);
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }

   puStack_c0 = (undefined*)0x0;
   local_c8 = (Variant*)0x10a59c;
   local_78 = &local_c8;
   D_METHODP((char*)&local_1b8, (char***)"get_blend_point_position", uVar8);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,Vector2,int>(get_blend_point_position);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   CowData<StringName>::_unref((CowData<StringName>*)local_1a8);
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_f8 = 0;
   local_108 = "point";
   puStack_100 = &_LC88;
   auStack_70._0_8_ = &puStack_100;
   local_78 = (Variant**)&local_108;
   D_METHODP((char*)&local_1b8, (char***)"set_blend_point_node", uVar8);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,int,Ref<AnimationRootNode>const&>(set_blend_point_node);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1b8);
   local_c8 = (Variant*)0x10a59c;
   puStack_c0 = (undefined*)0x0;
   local_78 = &local_c8;
   D_METHODP((char*)&local_1b8, (char***)"get_blend_point_node", uVar8);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,Ref<AnimationRootNode>,int>(get_blend_point_node);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1b8);
   local_c8 = (Variant*)0x10a59c;
   puStack_c0 = (undefined*)0x0;
   local_78 = &local_c8;
   D_METHODP((char*)&local_1b8, (char***)"remove_blend_point", uVar8);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,int>(remove_blend_point);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   CowData<StringName>::_unref((CowData<StringName>*)local_1a8);
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_1b8, (char***)"get_blend_point_count", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,int>(get_blend_point_count);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1b8);
   local_a8 = (Variant*)&_LC44;
   puStack_a0 = &_LC45;
   local_98 = &_LC92;
   pcStack_90 = "at_index";
   auStack_70._8_8_ = &local_98;
   auStack_70._0_8_ = &puStack_a0;
   local_88 = 0;
   local_78 = &local_a8;
   ppcStack_60 = &pcStack_90;
   D_METHODP((char*)&local_1b8, (char***)"add_triangle", uVar8);
   Variant::Variant((Variant*)&local_78, -1);
   local_58 = (undefined1[16])0x0;
   ppcStack_60 = (char**)0x0;
   local_a8 = (Variant*)&local_78;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,int,int,int,int>(add_triangle);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, &local_a8, 1);
   if (Variant::needs_deinit[(int)ppcStack_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   CowData<StringName>::_unref((CowData<StringName>*)local_1a8);
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_118 = 0;
   local_128 = "triangle";
   pcStack_120 = "point";
   auStack_70._0_8_ = &pcStack_120;
   local_78 = (Variant**)&local_128;
   D_METHODP((char*)&local_1b8, (char***)"get_triangle_point", uVar8);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,int,int,int>(get_triangle_point);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1b8);
   local_a8 = (Variant*)0x10a5a2;
   puStack_a0 = (undefined*)0x0;
   local_78 = &local_a8;
   D_METHODP((char*)&local_1b8, (char***)"remove_triangle", uVar8);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,int>(remove_triangle);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   CowData<StringName>::_unref((CowData<StringName>*)local_1a8);
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_1b8, (char***)"get_triangle_count", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,int>(get_triangle_count);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   CowData<StringName>::_unref((CowData<StringName>*)local_1a8);
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_a8 = (Variant*)0x10a626;
   puStack_a0 = (undefined*)0x0;
   local_78 = &local_a8;
   D_METHODP((char*)&local_1b8, (char***)"set_min_space", uVar8);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,Vector2_const&>(set_min_space);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1b8);
   D_METHODP((char*)&local_1b8, (char***)"get_min_space", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,Vector2>(get_min_space);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   CowData<StringName>::_unref((CowData<StringName>*)local_1a8);
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_a8 = (Variant*)0x10a64c;
   puStack_a0 = (undefined*)0x0;
   local_78 = &local_a8;
   D_METHODP((char*)&local_1b8, (char***)"set_max_space", uVar8);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,Vector2_const&>(set_max_space);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1b8);
   D_METHODP((char*)&local_1b8, (char***)"get_max_space", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,Vector2>(get_max_space);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   CowData<StringName>::_unref((CowData<StringName>*)local_1a8);
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_a8 = (Variant*)&_LC107;
   puStack_a0 = (undefined*)0x0;
   local_78 = &local_a8;
   D_METHODP((char*)&local_1b8, (char***)"set_snap", uVar8);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,Vector2_const&>(set_snap);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1b8);
   D_METHODP((char*)&local_1b8, (char***)"get_snap", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,Vector2>(get_snap);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1b8);
   local_a8 = (Variant*)&_LC110;
   puStack_a0 = (undefined*)0x0;
   local_78 = &local_a8;
   D_METHODP((char*)&local_1b8, (char***)"set_x_label", uVar8);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,String_const&>(set_x_label);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1b8);
   D_METHODP((char*)&local_1b8, (char***)"get_x_label", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,String>(get_x_label);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1b8);
   local_a8 = (Variant*)&_LC110;
   puStack_a0 = (undefined*)0x0;
   local_78 = &local_a8;
   D_METHODP((char*)&local_1b8, (char***)"set_y_label", uVar8);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,String_const&>(set_y_label);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   CowData<StringName>::_unref((CowData<StringName>*)local_1a8);
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_1b8, (char***)"get_y_label", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,String>(get_y_label);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1b8);
   local_138 = 0;
   local_148 = "index";
   puStack_140 = &_LC88;
   auStack_70._0_8_ = &puStack_140;
   local_78 = (Variant**)&local_148;
   D_METHODP((char*)&local_1b8, (char***)"_add_blend_point", uVar8);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,int,Ref<AnimationRootNode>const&>(_add_blend_point);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   CowData<StringName>::_unref((CowData<StringName>*)local_1a8);
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_a8 = (Variant*)0x10a57a;
   puStack_a0 = (undefined*)0x0;
   local_78 = &local_a8;
   D_METHODP((char*)&local_1b8, (char***)"_set_triangles", uVar8);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,Vector<int>const&>(_set_triangles);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1b8);
   D_METHODP((char*)&local_1b8, (char***)"_get_triangles", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,Vector<int>>(_get_triangles);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1b8);
   local_a8 = (Variant*)0x10a6ed;
   puStack_a0 = (undefined*)0x0;
   local_78 = &local_a8;
   D_METHODP((char*)&local_1b8, (char***)"set_auto_triangles", uVar8);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,bool>(set_auto_triangles);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1b8);
   D_METHODP((char*)&local_1b8, (char***)"get_auto_triangles", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,bool>(get_auto_triangles);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   CowData<StringName>::_unref((CowData<StringName>*)local_1a8);
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_a8 = (Variant*)&_LC121;
   puStack_a0 = (undefined*)0x0;
   local_78 = &local_a8;
   D_METHODP((char*)&local_1b8, (char***)"set_blend_mode", uVar8);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,AnimationNodeBlendSpace2D::BlendMode>(set_blend_mode);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1b8);
   D_METHODP((char*)&local_1b8, (char***)"get_blend_mode", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,AnimationNodeBlendSpace2D::BlendMode>(get_blend_mode);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1b8);
   local_a8 = (Variant*)0x10a6ed;
   puStack_a0 = (undefined*)0x0;
   local_78 = &local_a8;
   D_METHODP((char*)&local_1b8, (char***)"set_use_sync", uVar8);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,bool>(set_use_sync);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1b8);
   D_METHODP((char*)&local_1b8, (char***)"is_using_sync", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar7 = create_method_bind<AnimationNodeBlendSpace2D,bool>(is_using_sync);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_1b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1b8);
   _scs_create((char*)&local_1d0, true);
   _scs_create((char*)&local_1d8, true);
   local_1e0 = 0;
   local_1b8 = "";
   local_1e8 = 0;
   local_1b0 = 0;
   String::parse_latin1((StrRange*)&local_1e8);
   local_1f0 = 0;
   local_1b8 = "auto_triangles";
   local_1b0 = 0xe;
   String::parse_latin1((StrRange*)&local_1f0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_1b8, 1, (StrRange*)&local_1f0, 0, (StrRange*)&local_1e8, 2, (StringName*)&local_1e0);
   local_1c8 = "AnimationNodeBlendSpace2D";
   local_1f8 = 0;
   local_1c0 = 0x19;
   String::parse_latin1((StrRange*)&local_1f8);
   StringName::StringName((StringName*)&local_1c8, (String*)&local_1f8, false);
   ClassDB::add_property((StringName*)&local_1c8, (PropertyInfo*)&local_1b8, (StringName*)&local_1d8, (StringName*)&local_1d0, -1);
   if (( StringName::configured != '\0' ) && ( local_1c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_1e0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1d8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1d0 != 0 )) {
      StringName::unref();
   }

   lVar9 = 0;
   do {
      _scs_create((char*)&local_1d0, true);
      _scs_create((char*)&local_1d8, true);
      local_1b8 = "AnimationRootNode";
      local_1e0 = 0;
      local_1e8 = 0;
      local_1b0 = 0x11;
      String::parse_latin1((StrRange*)&local_1e8);
      local_1b8 = "/node";
      local_1f8 = 0;
      local_1b0 = 5;
      String::parse_latin1((StrRange*)&local_1f8);
      itos((long)&local_208);
      operator+((char *)&
      local_200,(String*)"blend_point_";
      String::operator +((String*)&local_1f0, (String*)&local_200);
      local_1b8 = (char*)CONCAT44(local_1b8._4_4_, 0x18);
      local_1b0 = 0;
      if (local_1f0 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_1b0, (CowData*)&local_1f0);
      }

      local_1a8._0_12_ = ZEXT412(0x11) << 0x40;
      local_198 = 0;
      if (local_1e8 == 0) {
         local_190 = CONCAT44(local_190._4_4_, 10);
         LAB_0010526b:StringName::StringName((StringName*)&local_1c8, (String*)&local_198, false);
         if ((char*)local_1a8._0_8_ == local_1c8) {
            if (( StringName::configured != '\0' ) && ( local_1c8 != (char*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_1a8._0_8_ = local_1c8;
         }

      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_198, (CowData*)&local_1e8);
         local_190 = CONCAT44(local_190._4_4_, 10);
         if (local_1a8._8_4_ == 0x11) goto LAB_0010526b;
         StringName::operator =((StringName*)local_1a8, (StringName*)&local_1e0);
      }

      local_210 = 0;
      local_1c8 = "AnimationNodeBlendSpace2D";
      local_1c0 = 0x19;
      String::parse_latin1((StrRange*)&local_210);
      StringName::StringName((StringName*)&local_1c8, (String*)&local_210, false);
      ClassDB::add_property((StringName*)&local_1c8, (PropertyInfo*)&local_1b8, (StringName*)&local_1d8, (StringName*)&local_1d0, (int)lVar9);
      if (( StringName::configured != '\0' ) && ( local_1c8 != (char*)0x0 )) {
         StringName::unref();
      }

      lVar11 = local_210;
      if (local_210 != 0) {
         LOCK();
         plVar1 = (long*)( local_210 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_210 = 0;
            Memory::free_static((void*)( lVar11 + -0x10 ), false);
         }

      }

      lVar11 = local_198;
      if (local_198 != 0) {
         LOCK();
         plVar1 = (long*)( local_198 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_198 = 0;
            Memory::free_static((void*)( lVar11 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_1a8._0_8_ != 0 )) {
         StringName::unref();
      }

      lVar11 = local_1b0;
      if (local_1b0 != 0) {
         LOCK();
         plVar1 = (long*)( local_1b0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_1b0 = 0;
            Memory::free_static((void*)( lVar11 + -0x10 ), false);
         }

      }

      lVar11 = local_1f0;
      if (local_1f0 != 0) {
         LOCK();
         plVar1 = (long*)( local_1f0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_1f0 = 0;
            Memory::free_static((void*)( lVar11 + -0x10 ), false);
         }

      }

      lVar11 = local_200;
      if (local_200 != 0) {
         LOCK();
         plVar1 = (long*)( local_200 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_200 = 0;
            Memory::free_static((void*)( lVar11 + -0x10 ), false);
         }

      }

      lVar11 = local_208;
      if (local_208 != 0) {
         LOCK();
         plVar1 = (long*)( local_208 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_208 = 0;
            Memory::free_static((void*)( lVar11 + -0x10 ), false);
         }

      }

      lVar11 = local_1f8;
      if (local_1f8 != 0) {
         LOCK();
         plVar1 = (long*)( local_1f8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_1f8 = 0;
            Memory::free_static((void*)( lVar11 + -0x10 ), false);
         }

      }

      lVar11 = local_1e8;
      if (local_1e8 != 0) {
         LOCK();
         plVar1 = (long*)( local_1e8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_1e8 = 0;
            Memory::free_static((void*)( lVar11 + -0x10 ), false);
         }

      }

      if (( ( ( StringName::configured != '\0' ) && ( ( local_1e0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1d8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1d0 != 0 )) {
         StringName::unref();
      }

      _scs_create((char*)&local_1d0, true);
      _scs_create((char*)&local_1d8, true);
      local_1b8 = "";
      local_1e0 = 0;
      local_1e8 = 0;
      local_1b0 = 0;
      String::parse_latin1((StrRange*)&local_1e8);
      local_1b8 = "/pos";
      local_1f8 = 0;
      local_1b0 = 4;
      String::parse_latin1((StrRange*)&local_1f8);
      itos((long)&local_208);
      operator+((char *)&
      local_200,(String*)"blend_point_";
      String::operator +((String*)&local_1f0, (String*)&local_200);
      local_1b8 = (char*)CONCAT44(local_1b8._4_4_, 5);
      local_1b0 = 0;
      if (local_1f0 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_1b0, (CowData*)&local_1f0);
      }

      local_1a8._0_12_ = ZEXT812(0);
      local_198 = 0;
      if (local_1e8 == 0) {
         local_190 = CONCAT44(local_190._4_4_, 10);
         LAB_00105246:StringName::operator =((StringName*)local_1a8, (StringName*)&local_1e0);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_198, (CowData*)&local_1e8);
         local_190 = CONCAT44(local_190._4_4_, 10);
         if (local_1a8._8_4_ != 0x11) goto LAB_00105246;
         StringName::StringName((StringName*)&local_1c8, (String*)&local_198, false);
         if ((char*)local_1a8._0_8_ == local_1c8) {
            if (( StringName::configured != '\0' ) && ( local_1c8 != (char*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_1a8._0_8_ = local_1c8;
         }

      }

      local_210 = 0;
      local_1c8 = "AnimationNodeBlendSpace2D";
      local_1c0 = 0x19;
      String::parse_latin1((StrRange*)&local_210);
      StringName::StringName((StringName*)&local_1c8, (String*)&local_210, false);
      ClassDB::add_property((StringName*)&local_1c8, (PropertyInfo*)&local_1b8, (StringName*)&local_1d8, (StringName*)&local_1d0, (int)lVar9);
      if (( StringName::configured != '\0' ) && ( local_1c8 != (char*)0x0 )) {
         StringName::unref();
      }

      lVar11 = local_210;
      if (local_210 != 0) {
         LOCK();
         plVar1 = (long*)( local_210 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_210 = 0;
            Memory::free_static((void*)( lVar11 + -0x10 ), false);
         }

      }

      lVar11 = local_198;
      if (local_198 != 0) {
         LOCK();
         plVar1 = (long*)( local_198 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_198 = 0;
            Memory::free_static((void*)( lVar11 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_1a8._0_8_ != 0 )) {
         StringName::unref();
      }

      lVar11 = local_1b0;
      if (local_1b0 != 0) {
         LOCK();
         plVar1 = (long*)( local_1b0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_1b0 = 0;
            Memory::free_static((void*)( lVar11 + -0x10 ), false);
         }

      }

      lVar11 = local_1f0;
      if (local_1f0 != 0) {
         LOCK();
         plVar1 = (long*)( local_1f0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_1f0 = 0;
            Memory::free_static((void*)( lVar11 + -0x10 ), false);
         }

      }

      lVar11 = local_200;
      if (local_200 != 0) {
         LOCK();
         plVar1 = (long*)( local_200 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_200 = 0;
            Memory::free_static((void*)( lVar11 + -0x10 ), false);
         }

      }

      lVar11 = local_208;
      if (local_208 != 0) {
         LOCK();
         plVar1 = (long*)( local_208 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_208 = 0;
            Memory::free_static((void*)( lVar11 + -0x10 ), false);
         }

      }

      lVar11 = local_1f8;
      if (local_1f8 != 0) {
         LOCK();
         plVar1 = (long*)( local_1f8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_1f8 = 0;
            Memory::free_static((void*)( lVar11 + -0x10 ), false);
         }

      }

      lVar11 = local_1e8;
      if (local_1e8 != 0) {
         LOCK();
         plVar1 = (long*)( local_1e8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_1e8 = 0;
            Memory::free_static((void*)( lVar11 + -0x10 ), false);
         }

      }

      if (( ( ( StringName::configured != '\0' ) && ( ( local_1e0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1d8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1d0 != 0 )) {
         StringName::unref();
      }

      lVar9 = lVar9 + 1;
      if (lVar9 == 0x40) {
         _scs_create((char*)&local_1d0, true);
         _scs_create((char*)&local_1d8, true);
         local_1b8 = "";
         local_1e0 = 0;
         local_1e8 = 0;
         local_1b0 = 0;
         String::parse_latin1((StrRange*)&local_1e8);
         local_1b8 = "triangles";
         local_1f0 = 0;
         local_1b0 = 9;
         String::parse_latin1((StrRange*)&local_1f0);
         PropertyInfo::PropertyInfo((PropertyInfo*)&local_1b8, 0x1e, (StrRange*)&local_1f0, 0, (StrRange*)&local_1e8, 10, (StringName*)&local_1e0);
         local_1c8 = "AnimationNodeBlendSpace2D";
         local_1f8 = 0;
         local_1c0 = 0x19;
         String::parse_latin1((StrRange*)&local_1f8);
         StringName::StringName((StringName*)&local_1c8, (String*)&local_1f8, false);
         ClassDB::add_property((StringName*)&local_1c8, (PropertyInfo*)&local_1b8, (StringName*)&local_1d8, (StringName*)&local_1d0, -1);
         if (( StringName::configured != '\0' ) && ( local_1c8 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
         if (( ( StringName::configured != '\0' ) && ( ( local_1e0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_1d8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_1d0 != 0 ) ) )) {
            StringName::unref();
         }

         _scs_create((char*)&local_1d0, true);
         _scs_create((char*)&local_1d8, true);
         local_1b8 = "";
         local_1e0 = 0;
         local_1e8 = 0;
         local_1b0 = 0;
         String::parse_latin1((StrRange*)&local_1e8);
         local_1b8 = "min_space";
         local_1f0 = 0;
         local_1b0 = 9;
         String::parse_latin1((StrRange*)&local_1f0);
         PropertyInfo::PropertyInfo((PropertyInfo*)&local_1b8, 5, (StrRange*)&local_1f0, 0, (StrRange*)&local_1e8, 2, (StringName*)&local_1e0);
         local_1c8 = "AnimationNodeBlendSpace2D";
         local_1f8 = 0;
         local_1c0 = 0x19;
         String::parse_latin1((StrRange*)&local_1f8);
         StringName::StringName((StringName*)&local_1c8, (String*)&local_1f8, false);
         ClassDB::add_property((StringName*)&local_1c8, (PropertyInfo*)&local_1b8, (StringName*)&local_1d8, (StringName*)&local_1d0, -1);
         if (( StringName::configured != '\0' ) && ( local_1c8 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
         if (( ( ( StringName::configured != '\0' ) && ( ( local_1e0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1d8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1d0 != 0 )) {
            StringName::unref();
         }

         _scs_create((char*)&local_1d0, true);
         _scs_create((char*)&local_1d8, true);
         local_1b8 = "";
         local_1e0 = 0;
         local_1e8 = 0;
         local_1b0 = 0;
         String::parse_latin1((StrRange*)&local_1e8);
         local_1b8 = "max_space";
         local_1f0 = 0;
         local_1b0 = 9;
         String::parse_latin1((StrRange*)&local_1f0);
         PropertyInfo::PropertyInfo((PropertyInfo*)&local_1b8, 5, (StrRange*)&local_1f0, 0, (StrRange*)&local_1e8, 2, (StringName*)&local_1e0);
         local_1c8 = "AnimationNodeBlendSpace2D";
         local_1f8 = 0;
         local_1c0 = 0x19;
         String::parse_latin1((StrRange*)&local_1f8);
         StringName::StringName((StringName*)&local_1c8, (String*)&local_1f8, false);
         ClassDB::add_property((StringName*)&local_1c8, (PropertyInfo*)&local_1b8, (StringName*)&local_1d8, (StringName*)&local_1d0, -1);
         if (( StringName::configured != '\0' ) && ( local_1c8 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
         if (( ( ( StringName::configured != '\0' ) && ( ( local_1e0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1d8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1d0 != 0 )) {
            StringName::unref();
         }

         _scs_create((char*)&local_1d0, true);
         _scs_create((char*)&local_1d8, true);
         local_1b8 = "";
         local_1e0 = 0;
         local_1e8 = 0;
         local_1b0 = 0;
         String::parse_latin1((StrRange*)&local_1e8);
         local_1b8 = "snap";
         local_1f0 = 0;
         local_1b0 = 4;
         String::parse_latin1((StrRange*)&local_1f0);
         PropertyInfo::PropertyInfo((PropertyInfo*)&local_1b8, 5, (StrRange*)&local_1f0, 0, (StrRange*)&local_1e8, 2, (StringName*)&local_1e0);
         local_1c8 = "AnimationNodeBlendSpace2D";
         local_1f8 = 0;
         local_1c0 = 0x19;
         String::parse_latin1((StrRange*)&local_1f8);
         StringName::StringName((StringName*)&local_1c8, (String*)&local_1f8, false);
         ClassDB::add_property((StringName*)&local_1c8, (PropertyInfo*)&local_1b8, (StringName*)&local_1d8, (StringName*)&local_1d0, -1);
         if (( StringName::configured != '\0' ) && ( local_1c8 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
         if (( ( ( StringName::configured != '\0' ) && ( ( local_1e0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1d8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1d0 != 0 )) {
            StringName::unref();
         }

         _scs_create((char*)&local_1d0, true);
         _scs_create((char*)&local_1d8, true);
         local_1b8 = "";
         local_1e0 = 0;
         local_1e8 = 0;
         local_1b0 = 0;
         String::parse_latin1((StrRange*)&local_1e8);
         local_1b8 = "x_label";
         local_1f0 = 0;
         local_1b0 = 7;
         String::parse_latin1((StrRange*)&local_1f0);
         PropertyInfo::PropertyInfo((PropertyInfo*)&local_1b8, 4, (StrRange*)&local_1f0, 0, (StrRange*)&local_1e8, 2, (StringName*)&local_1e0);
         local_1c8 = "AnimationNodeBlendSpace2D";
         local_1f8 = 0;
         local_1c0 = 0x19;
         String::parse_latin1((StrRange*)&local_1f8);
         StringName::StringName((StringName*)&local_1c8, (String*)&local_1f8, false);
         ClassDB::add_property((StringName*)&local_1c8, (PropertyInfo*)&local_1b8, (StringName*)&local_1d8, (StringName*)&local_1d0, -1);
         if (( StringName::configured != '\0' ) && ( local_1c8 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
         if (( ( StringName::configured != '\0' ) && ( ( local_1e0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_1d8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_1d0 != 0 ) ) )) {
            StringName::unref();
         }

         _scs_create((char*)&local_1d0, true);
         _scs_create((char*)&local_1d8, true);
         local_1b8 = "";
         local_1e0 = 0;
         local_1e8 = 0;
         local_1b0 = 0;
         String::parse_latin1((StrRange*)&local_1e8);
         local_1b8 = "y_label";
         local_1f0 = 0;
         local_1b0 = 7;
         String::parse_latin1((StrRange*)&local_1f0);
         PropertyInfo::PropertyInfo((PropertyInfo*)&local_1b8, 4, (StrRange*)&local_1f0, 0, (StrRange*)&local_1e8, 2, (StringName*)&local_1e0);
         local_1c8 = "AnimationNodeBlendSpace2D";
         local_1f8 = 0;
         local_1c0 = 0x19;
         String::parse_latin1((StrRange*)&local_1f8);
         StringName::StringName((StringName*)&local_1c8, (String*)&local_1f8, false);
         ClassDB::add_property((StringName*)&local_1c8, (PropertyInfo*)&local_1b8, (StringName*)&local_1d8, (StringName*)&local_1d0, -1);
         if (( StringName::configured != '\0' ) && ( local_1c8 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
         if (( ( ( StringName::configured != '\0' ) && ( ( local_1e0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1d8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1d0 != 0 )) {
            StringName::unref();
         }

         _scs_create((char*)&local_1d0, true);
         _scs_create((char*)&local_1d8, true);
         local_1b8 = "Interpolated,Discrete,Carry";
         local_1e0 = 0;
         local_1e8 = 0;
         local_1b0 = 0x1b;
         String::parse_latin1((StrRange*)&local_1e8);
         local_1b8 = "blend_mode";
         local_1f0 = 0;
         local_1b0 = 10;
         String::parse_latin1((StrRange*)&local_1f0);
         PropertyInfo::PropertyInfo((PropertyInfo*)&local_1b8, 2, (StrRange*)&local_1f0, 2, (StrRange*)&local_1e8, 2, (StringName*)&local_1e0);
         local_1c8 = "AnimationNodeBlendSpace2D";
         local_1f8 = 0;
         local_1c0 = 0x19;
         String::parse_latin1((StrRange*)&local_1f8);
         StringName::StringName((StringName*)&local_1c8, (String*)&local_1f8, false);
         ClassDB::add_property((StringName*)&local_1c8, (PropertyInfo*)&local_1b8, (StringName*)&local_1d8, (StringName*)&local_1d0, -1);
         if (( StringName::configured != '\0' ) && ( local_1c8 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
         if (( ( StringName::configured != '\0' ) && ( ( local_1e0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_1d8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_1d0 != 0 ) ) )) {
            StringName::unref();
         }

         _scs_create((char*)&local_1d0, true);
         _scs_create((char*)&local_1d8, true);
         local_1b8 = "";
         local_1e0 = 0;
         local_1e8 = 0;
         local_1b0 = 0;
         String::parse_latin1((StrRange*)&local_1e8);
         local_1b8 = "sync";
         local_1f0 = 0;
         local_1b0 = 4;
         String::parse_latin1((StrRange*)&local_1f0);
         PropertyInfo::PropertyInfo((PropertyInfo*)&local_1b8, 1, (StrRange*)&local_1f0, 0, (StrRange*)&local_1e8, 2, (StringName*)&local_1e0);
         local_1c8 = "AnimationNodeBlendSpace2D";
         local_1f8 = 0;
         local_1c0 = 0x19;
         String::parse_latin1((StrRange*)&local_1f8);
         StringName::StringName((StringName*)&local_1c8, (String*)&local_1f8, false);
         ClassDB::add_property((StringName*)&local_1c8, (PropertyInfo*)&local_1b8, (StringName*)&local_1d8, (StringName*)&local_1d0, -1);
         if (( StringName::configured != '\0' ) && ( local_1c8 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
         if (( ( ( StringName::configured != '\0' ) && ( ( local_1e0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1d8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1d0 != 0 )) {
            StringName::unref();
         }

         local_1d0 = 0;
         local_1b8 = "triangles_updated";
         local_1b0 = 0x11;
         String::parse_latin1((StrRange*)&local_1d0);
         local_1b8 = (char*)0x0;
         local_1b0 = 0;
         local_198 = 0;
         local_190 = 0;
         local_188 = 6;
         local_180 = 1;
         local_178[0] = 0;
         local_168 = (int*)0x0;
         local_160 = 0;
         local_150 = 0;
         local_1a8 = (undefined1[16])0x0;
         if (local_1d0 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_1b8, (CowData*)&local_1d0);
         }

         local_1d8 = 0;
         local_1c8 = "AnimationNodeBlendSpace2D";
         local_1c0 = 0x19;
         String::parse_latin1((StrRange*)&local_1d8);
         StringName::StringName((StringName*)&local_1c8, (String*)&local_1d8, false);
         ClassDB::add_signal((StringName*)&local_1c8, (MethodInfo*)&local_1b8);
         if (( StringName::configured != '\0' ) && ( local_1c8 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d8);
         lVar9 = local_150;
         if (local_150 != 0) {
            LOCK();
            plVar1 = (long*)( local_150 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_150 = 0;
               Memory::free_static((void*)( lVar9 + -0x10 ), false);
            }

         }

         piVar6 = local_168;
         if (local_168 != (int*)0x0) {
            LOCK();
            plVar1 = (long*)( local_168 + -4 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               if (local_168 == (int*)0x0) {
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               lVar9 = *(long*)( local_168 + -2 );
               lVar11 = 0;
               local_168 = (int*)0x0;
               piVar10 = piVar6;
               if (lVar9 != 0) {
                  do {
                     if (Variant::needs_deinit[*piVar10] != '\0') {
                        Variant::_clear_internal();
                     }

                     lVar11 = lVar11 + 1;
                     piVar10 = piVar10 + 6;
                  }
 while ( lVar9 != lVar11 );
               }

               Memory::free_static(piVar6 + -4, false);
            }

         }

         List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_178);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1b0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d0);
         StringName::StringName((StringName*)&local_1c8, "BLEND_MODE_INTERPOLATED", false);
         local_1b8 = "BLEND_MODE_INTERPOLATED";
         local_1d8 = 0;
         local_1b0 = 0x17;
         String::parse_latin1((StrRange*)&local_1d8);
         GetTypeInfo<AnimationNodeBlendSpace2D::BlendMode,void>::get_class_info((GetTypeInfo<AnimationNodeBlendSpace2D::BlendMode,void>*)&local_1b8);
         local_1d0 = local_1a8._0_8_;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_1a8._8_8_;
         local_1a8 = auVar3 << 0x40;
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1b8);
         local_1b8 = "AnimationNodeBlendSpace2D";
         local_1e0 = 0;
         local_1b0 = 0x19;
         String::parse_latin1((StrRange*)&local_1e0);
         StringName::StringName((StringName*)&local_1b8, (String*)&local_1e0, false);
         ClassDB::bind_integer_constant((StringName*)&local_1b8, (StringName*)&local_1d0, (StringName*)&local_1c8, 0, false);
         if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e0);
         if (( StringName::configured != '\0' ) && ( local_1d0 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d8);
         if (( StringName::configured != '\0' ) && ( local_1c8 != (char*)0x0 )) {
            StringName::unref();
         }

         StringName::StringName((StringName*)&local_1c8, "BLEND_MODE_DISCRETE", false);
         local_1b8 = "BLEND_MODE_DISCRETE";
         local_1d8 = 0;
         local_1b0 = 0x13;
         String::parse_latin1((StrRange*)&local_1d8);
         GetTypeInfo<AnimationNodeBlendSpace2D::BlendMode,void>::get_class_info((GetTypeInfo<AnimationNodeBlendSpace2D::BlendMode,void>*)&local_1b8);
         local_1d0 = local_1a8._0_8_;
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_1a8._8_8_;
         local_1a8 = auVar4 << 0x40;
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1b8);
         local_1b8 = "AnimationNodeBlendSpace2D";
         local_1e0 = 0;
         local_1b0 = 0x19;
         String::parse_latin1((StrRange*)&local_1e0);
         StringName::StringName((StringName*)&local_1b8, (String*)&local_1e0, false);
         ClassDB::bind_integer_constant((StringName*)&local_1b8, (StringName*)&local_1d0, (StringName*)&local_1c8, 1, false);
         if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e0);
         if (( StringName::configured != '\0' ) && ( local_1d0 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d8);
         if (( StringName::configured != '\0' ) && ( local_1c8 != (char*)0x0 )) {
            StringName::unref();
         }

         StringName::StringName((StringName*)&local_1c8, "BLEND_MODE_DISCRETE_CARRY", false);
         local_1b8 = "BLEND_MODE_DISCRETE_CARRY";
         local_1d8 = 0;
         local_1b0 = 0x19;
         String::parse_latin1((StrRange*)&local_1d8);
         GetTypeInfo<AnimationNodeBlendSpace2D::BlendMode,void>::get_class_info((GetTypeInfo<AnimationNodeBlendSpace2D::BlendMode,void>*)&local_1b8);
         local_1d0 = local_1a8._0_8_;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = local_1a8._8_8_;
         local_1a8 = auVar5 << 0x40;
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1b8);
         local_1b8 = "AnimationNodeBlendSpace2D";
         local_1e0 = 0;
         local_1b0 = 0x19;
         String::parse_latin1((StrRange*)&local_1e0);
         StringName::StringName((StringName*)&local_1b8, (String*)&local_1e0, false);
         ClassDB::bind_integer_constant((StringName*)&local_1b8, (StringName*)&local_1d0, (StringName*)&local_1c8, 2, false);
         if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e0);
         if (( StringName::configured != '\0' ) && ( local_1d0 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d8);
         if (( StringName::configured != '\0' ) && ( local_1c8 != (char*)0x0 )) {
            StringName::unref();
         }

         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

   }
 while ( true );
}
/* AnimationNodeBlendSpace2D::_get_triangles() const */void AnimationNodeBlendSpace2D::_get_triangles(void) {
   CowData<int> *this;
   long lVar1;
   char cVar2;
   undefined4 uVar3;
   code *pcVar4;
   undefined8 *puVar5;
   long lVar6;
   long lVar7;
   long in_RSI;
   long in_RDI;
   ulong uVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   cVar2 = *(char*)( in_RSI + 0x9f4 );
   *(undefined8*)( in_RDI + 8 ) = 0;
   if (( ( cVar2 == '\0' ) || ( *(char*)( in_RSI + 0x9f5 ) == '\0' ) ) && ( *(long*)( in_RSI + 0x9b0 ) != 0 )) {
      lVar6 = *(long*)( *(long*)( in_RSI + 0x9b0 ) + -8 );
      this(CowData<int> * )(in_RDI + 8);
      if (lVar6 * 3 < 0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
         lVar6 = *(long*)( in_RSI + 0x9b0 );
      }
 else {
         if (lVar6 == 0) {
            return;
         }

         CowData<int>::_copy_on_write(this);
         if (( lVar6 * 0xc == 0 ) || ( uVar8 = lVar6 * 0xc - 1 ),uVar8 = uVar8 | uVar8 >> 1,uVar8 = uVar8 | uVar8 >> 2,uVar8 = uVar8 | uVar8 >> 4,uVar8 = uVar8 | uVar8 >> 8,uVar8 = uVar8 | uVar8 >> 0x10,uVar8 = uVar8 | uVar8 >> 0x20,uVar8 == 0xffffffffffffffff) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
            lVar6 = *(long*)( in_RSI + 0x9b0 );
         }
 else {
            puVar5 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               lVar6 = *(long*)( in_RSI + 0x9b0 );
            }
 else {
               *puVar5 = 1;
               *(undefined8**)( in_RDI + 8 ) = puVar5 + 2;
               puVar5[1] = lVar6 * 3;
               lVar6 = *(long*)( in_RSI + 0x9b0 );
            }

         }

      }

      if (lVar6 != 0) {
         lVar7 = 0;
         lVar11 = 0;
         do {
            if (*(long*)( lVar6 + -8 ) <= lVar11) {
               return;
            }

            uVar3 = *(undefined4*)( lVar6 + lVar7 * 4 );
            lVar1 = lVar7 * 4;
            lVar6 = lVar7;
            if (*(long*)( in_RDI + 8 ) == 0) {
               lVar10 = 0;
               goto LAB_00106a96;
            }

            lVar10 = *(long*)( *(long*)( in_RDI + 8 ) + -8 );
            if (lVar10 <= lVar7) goto LAB_00106a96;
            CowData<int>::_copy_on_write(this);
            lVar10 = *(long*)( in_RDI + 8 );
            lVar6 = *(long*)( in_RSI + 0x9b0 );
            *(undefined4*)( lVar10 + lVar1 ) = uVar3;
            if (lVar6 == 0) {
               LAB_00106a30:lVar9 = 0;
               LAB_00106a33:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar11, lVar9, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

            lVar9 = *(long*)( lVar6 + -8 );
            if (lVar9 <= lVar11) goto LAB_00106a33;
            uVar3 = *(undefined4*)( lVar6 + 4 + lVar1 );
            lVar6 = lVar7 + 1;
            if (lVar10 == 0) {
               LAB_00106a78:lVar10 = 0;
               LAB_00106a96:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar6, lVar10, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

            lVar10 = *(long*)( lVar10 + -8 );
            if (lVar10 <= lVar6) goto LAB_00106a96;
            CowData<int>::_copy_on_write(this);
            lVar10 = *(long*)( in_RDI + 8 );
            *(undefined4*)( lVar10 + 4 + lVar1 ) = uVar3;
            lVar6 = *(long*)( in_RSI + 0x9b0 );
            if (lVar6 == 0) goto LAB_00106a30;
            lVar9 = *(long*)( lVar6 + -8 );
            if (lVar9 <= lVar11) goto LAB_00106a33;
            uVar3 = *(undefined4*)( lVar6 + 8 + lVar1 );
            lVar6 = lVar7 + 2;
            if (lVar10 == 0) goto LAB_00106a78;
            lVar10 = *(long*)( lVar10 + -8 );
            if (lVar10 <= lVar6) goto LAB_00106a96;
            lVar11 = lVar11 + 1;
            lVar7 = lVar7 + 3;
            CowData<int>::_copy_on_write(this);
            *(undefined4*)( *(long*)( in_RDI + 8 ) + 8 + lVar1 ) = uVar3;
            lVar6 = *(long*)( in_RSI + 0x9b0 );
         }
 while ( lVar6 != 0 );
      }

   }

   return;
}
/* AnimationNodeBlendSpace2D::remove_blend_point(int) */void __thiscall
AnimationNodeBlendSpace2D::remove_blend_point(AnimationNodeBlendSpace2D *this,int param_1)

{
  Variant *pVVar1;
  int *piVar2;
  int iVar3;
  long *plVar4;
  code *pcVar5;
  Object *pOVar6;
  Object *pOVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  Variant *pVVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  AnimationNodeBlendSpace2D *this_00;
  long in_FS_OFFSET;
  long local_c0;
  undefined8 local_b8 [2];
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [2];
  undefined1 local_80 [16];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x9a0))) {
    lVar17 = (long)param_1;
    plVar4 = *(long **)(this + lVar17 * 0x18 + 0x3a8);
    if (plVar4 != (long *)0x0) {
      pcVar5 = *(code **)(*plVar4 + 0x110);
      create_custom_callable_function_pointer<AnimationNodeBlendSpace2D>
                ((AnimationNodeBlendSpace2D *)local_b8,(char *)this,
                 (_func_void *)"&AnimationNodeBlendSpace2D::_tree_changed");
      StringName::StringName((StringName *)&local_c0,"tree_changed",false);
      (*pcVar5)(plVar4,(StringName *)&local_c0,(AnimationNodeBlendSpace2D *)local_b8);
      if ((StringName::configured != '\0') && (local_c0 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_b8);
      plVar4 = *(long **)(this + lVar17 * 0x18 + 0x3a8);
      pcVar5 = *(code **)(*plVar4 + 0x110);
      create_custom_callable_function_pointer<AnimationNodeBlendSpace2D,ObjectID_const&,String_const&,String_const&>
                ((AnimationNodeBlendSpace2D *)local_b8,(char *)this,
                 (_func_void_ObjectID_ptr_String_ptr_String_ptr *)
                 "&AnimationNodeBlendSpace2D::_animation_node_renamed");
      StringName::StringName((StringName *)&local_c0,"animation_node_renamed",false);
      (*pcVar5)(plVar4,(StringName *)&local_c0,(AnimationNodeBlendSpace2D *)local_b8);
      if ((StringName::configured != '\0') && (local_c0 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_b8);
      plVar4 = *(long **)(this + lVar17 * 0x18 + 0x3a8);
      pcVar5 = *(code **)(*plVar4 + 0x110);
      create_custom_callable_function_pointer<AnimationNodeBlendSpace2D,ObjectID_const&,StringName_const&>
                ((AnimationNodeBlendSpace2D *)local_b8,(char *)this,
                 (_func_void_ObjectID_ptr_StringName_ptr *)
                 "&AnimationNodeBlendSpace2D::_animation_node_removed");
      StringName::StringName((StringName *)&local_c0,"animation_node_removed",false);
      (*pcVar5)(plVar4,(StringName *)&local_c0,(AnimationNodeBlendSpace2D *)local_b8);
      if ((StringName::configured != '\0') && (local_c0 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_b8);
      lVar12 = 0;
      iVar10 = 0;
      lVar11 = *(long *)(this + 0x9b0);
joined_r0x00106d83:
      do {
        if ((lVar11 == 0) || (*(long *)(lVar11 + -8) <= lVar12)) goto LAB_00106de8;
        lVar16 = *(long *)(lVar11 + -8);
        iVar18 = 0;
        lVar13 = lVar12 * 0xc;
LAB_00106da6:
        do {
          if (lVar16 <= lVar12) {
LAB_00107210:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar16,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          lVar14 = (long)iVar18;
          iVar3 = *(int *)(lVar11 + lVar14 * 4 + lVar13);
          if (iVar3 == param_1) {
            CowData<AnimationNodeBlendSpace2D::BlendTriangle>::_copy_on_write
                      ((CowData<AnimationNodeBlendSpace2D::BlendTriangle> *)(this + 0x9b0));
            lVar11 = *(long *)(this + 0x9b0);
            if (lVar11 == 0) {
              lVar16 = -1;
            }
            else {
              lVar16 = *(long *)(lVar11 + -8) + -1;
              if (lVar12 < lVar16) {
                memmove((void *)(lVar11 + lVar13),(void *)(lVar11 + 0xc + lVar13),
                        (*(long *)(lVar11 + -8) - lVar12) * 0xc - 0xc);
              }
            }
            CowData<AnimationNodeBlendSpace2D::BlendTriangle>::resize<false>
                      ((CowData<AnimationNodeBlendSpace2D::BlendTriangle> *)(this + 0x9b0),lVar16);
            lVar11 = *(long *)(this + 0x9b0);
            goto joined_r0x00106d83;
          }
          if (iVar3 != param_1 && param_1 <= iVar3) {
            iVar18 = iVar18 + 1;
            CowData<AnimationNodeBlendSpace2D::BlendTriangle>::_copy_on_write
                      ((CowData<AnimationNodeBlendSpace2D::BlendTriangle> *)(this + 0x9b0));
            lVar11 = *(long *)(this + 0x9b0);
            piVar2 = (int *)(lVar11 + lVar13 + lVar14 * 4);
            *piVar2 = *piVar2 + -1;
            if (iVar18 == 3) break;
            if (lVar11 == 0) {
              lVar16 = 0;
              goto LAB_00107210;
            }
            lVar16 = *(long *)(lVar11 + -8);
            goto LAB_00106da6;
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 != 3);
        iVar10 = iVar10 + 1;
        lVar12 = (long)iVar10;
      } while( true );
    }
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("remove_blend_point","scene/animation/animation_blend_space_2d.cpp",0x84,
                       "Condition \"blend_points[p_point].node.is_null()\" is true.",0,0);
      return;
    }
    goto LAB_0010726c;
  }
  _err_print_index_error
            ("remove_blend_point","scene/animation/animation_blend_space_2d.cpp",0x82,(long)param_1,
             (long)*(int *)(this + 0x9a0),"p_point","blend_points_used","",false,false);
  goto LAB_00106f42;
LAB_00106de8:
  iVar10 = *(int *)(this + 0x9a0) + -1;
  if (param_1 < iVar10) {
    this_00 = this + lVar17 * 0x18 + 0x3a0;
    do {
      param_1 = param_1 + 1;
      StringName::operator=((StringName *)this_00,(StringName *)this_00 + 0x18);
      pOVar6 = *(Object **)((StringName *)this_00 + 0x20);
      pOVar7 = *(Object **)((StringName *)this_00 + 8);
      if (pOVar6 != pOVar7) {
        *(Object **)((StringName *)this_00 + 8) = pOVar6;
        if ((pOVar6 != (Object *)0x0) && (cVar9 = RefCounted::reference(), cVar9 == '\0')) {
          *(undefined8 *)((StringName *)this_00 + 8) = 0;
        }
        if (((pOVar7 != (Object *)0x0) && (cVar9 = RefCounted::unreference(), cVar9 != '\0')) &&
           (cVar9 = predelete_handler(pOVar7), cVar9 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
      }
      *(undefined8 *)((StringName *)this_00 + 0x10) = *(undefined8 *)((StringName *)this_00 + 0x28);
      iVar10 = *(int *)(this + 0x9a0) + -1;
      this_00 = (AnimationNodeBlendSpace2D *)((StringName *)this_00 + 0x18);
    } while (param_1 < iVar10);
  }
  *(int *)(this + 0x9a0) = iVar10;
  itos((long)&local_c0);
  uVar8 = *(undefined8 *)(this + 0x60);
  if ((remove_blend_point(int)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar10 = __cxa_guard_acquire(&remove_blend_point(int)::{lambda()#1}::operator()()::sname),
     iVar10 != 0)) {
    _scs_create((char *)&remove_blend_point(int)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&remove_blend_point(int)::{lambda()#1}::operator()()::sname
                 ,&__dso_handle);
    __cxa_guard_release(&remove_blend_point(int)::{lambda()#1}::operator()()::sname);
  }
  local_b8[0] = uVar8;
  Variant::Variant((Variant *)local_88,(ObjectID *)local_b8);
  Variant::Variant(local_70,(String *)&local_c0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pVVar15 = (Variant *)local_40;
  local_a8 = (Variant *)local_88;
  pVStack_a0 = local_70;
  (**(code **)(*(long *)this + 0xd0))
            (this,&remove_blend_point(int)::{lambda()#1}::operator()()::sname,&local_a8,2);
  do {
    pVVar1 = pVVar15 + -0x18;
    pVVar15 = pVVar15 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar15 != (Variant *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((remove_blend_point(int)::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar10 = __cxa_guard_acquire(&remove_blend_point(int)::{lambda()#2}::operator()()::sname),
     iVar10 != 0)) {
    _scs_create((char *)&remove_blend_point(int)::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&remove_blend_point(int)::{lambda()#2}::operator()()::sname
                 ,&__dso_handle);
    __cxa_guard_release(&remove_blend_point(int)::{lambda()#2}::operator()()::sname);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  local_80 = (undefined1  [16])0x0;
  (**(code **)(*(long *)this + 0xd0))
            (this,&remove_blend_point(int)::{lambda()#2}::operator()()::sname,0,0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_00106f42:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010726c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace2D::add_triangle(int, int, int, int) */

void __thiscall
AnimationNodeBlendSpace2D::add_triangle
          (AnimationNodeBlendSpace2D *this,int param_1,int param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  int iVar9;
  undefined8 uVar10;
  undefined8 local_50;
  int local_48 [2];
  long local_40;
  
  lVar8 = (long)param_4;
  iVar3 = *(int *)(this + 0x9a0);
  lVar7 = (long)iVar3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < 0) || (iVar3 <= param_1)) {
    _err_print_index_error
              ("add_triangle","scene/animation/animation_blend_space_2d.cpp",0xc5,(long)param_1,
               lVar7,"p_x","blend_points_used","",false,false);
  }
  else if ((param_2 < iVar3) && (-1 < param_2)) {
    if ((param_3 < 0) || (iVar3 <= param_3)) {
      _err_print_index_error
                ("add_triangle","scene/animation/animation_blend_space_2d.cpp",199,(long)param_3,
                 lVar7,"p_z","blend_points_used","",false,false);
    }
    else {
      _update_triangles(this);
      local_50 = CONCAT44(param_2,param_1);
      local_48[0] = param_3;
      SortArray<int,_DefaultComparator<int>,true>::introsort(0,3,(int *)&local_50,2);
      iVar3 = local_48[0];
      iVar2 = (int)local_50;
      iVar9 = local_50._4_4_;
      if (local_50._4_4_ < (int)local_50) {
        iVar2 = local_50._4_4_;
        iVar9 = (int)local_50;
        local_50 = CONCAT44((int)local_50,local_50._4_4_);
      }
      if (local_48[0] < iVar2) {
        local_50 = CONCAT44((int)local_50,local_48[0]);
        local_48[0] = iVar9;
      }
      else {
        if (local_48[0] < iVar9) {
          piVar4 = (int *)((long)&local_50 + 4);
          local_48[0] = iVar9;
        }
        else {
          piVar4 = local_48;
        }
        *piVar4 = iVar3;
        iVar3 = (int)local_50;
      }
      iVar2 = local_48[0];
      piVar4 = *(int **)(this + 0x9b0);
      if (piVar4 == (int *)0x0) {
        lVar7 = 1;
        lVar6 = 0;
      }
      else {
        lVar6 = *(long *)(piVar4 + -2);
        for (lVar7 = 0; lVar7 < lVar6; lVar7 = lVar7 + 1) {
          if (((*piVar4 == (int)local_50) && (local_50._4_4_ == piVar4[1])) &&
             (piVar4[2] == local_48[0])) {
            _err_print_error("add_triangle","scene/animation/animation_blend_space_2d.cpp",0xdb,
                             "Condition \"all_equal\" is true.",0,0);
            goto LAB_001073bd;
          }
          piVar4 = piVar4 + 3;
        }
        lVar7 = lVar6 + 1;
      }
      uVar10 = CONCAT44(local_50._4_4_,iVar3);
      if ((param_4 == -1) || (lVar8 == lVar6)) {
        iVar3 = CowData<AnimationNodeBlendSpace2D::BlendTriangle>::resize<false>
                          ((CowData<AnimationNodeBlendSpace2D::BlendTriangle> *)(this + 0x9b0),lVar7
                          );
        if (iVar3 == 0) {
          if (*(long *)(this + 0x9b0) == 0) {
            lVar8 = -1;
            lVar7 = 0;
          }
          else {
            lVar7 = *(long *)(*(long *)(this + 0x9b0) + -8);
            lVar8 = lVar7 + -1;
            if (-1 < lVar8) {
              CowData<AnimationNodeBlendSpace2D::BlendTriangle>::_copy_on_write
                        ((CowData<AnimationNodeBlendSpace2D::BlendTriangle> *)(this + 0x9b0));
              puVar1 = (undefined8 *)(*(long *)(this + 0x9b0) + lVar8 * 0xc);
              *puVar1 = uVar10;
              *(int *)(puVar1 + 1) = iVar2;
              goto LAB_001073bd;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar7,"p_index","size()","",false
                     ,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
        }
      }
      else if ((lVar8 < 0) || (lVar7 <= lVar8)) {
        _err_print_index_error
                  ("insert","./core/templates/cowdata.h",0xf0,lVar8,lVar7,"p_pos","new_size","",
                   false,false);
      }
      else {
        iVar3 = CowData<AnimationNodeBlendSpace2D::BlendTriangle>::resize<false>
                          ((CowData<AnimationNodeBlendSpace2D::BlendTriangle> *)(this + 0x9b0),lVar7
                          );
        if (iVar3 == 0) {
          CowData<AnimationNodeBlendSpace2D::BlendTriangle>::_copy_on_write
                    ((CowData<AnimationNodeBlendSpace2D::BlendTriangle> *)(this + 0x9b0));
          lVar7 = *(long *)(this + 0x9b0);
          if (lVar8 < lVar6) {
            lVar5 = (lVar8 * 3 + 3) * 4;
            memmove((void *)(lVar7 + lVar5),(void *)(lVar7 + -0xc + lVar5),(lVar6 - lVar8) * 0xc);
          }
          puVar1 = (undefined8 *)(lVar7 + lVar8 * 0xc);
          *puVar1 = uVar10;
          *(int *)(puVar1 + 1) = iVar2;
        }
        else {
          _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                           "Condition \"err\" is true. Returning: err",0,0);
        }
      }
    }
  }
  else {
    _err_print_index_error
              ("add_triangle","scene/animation/animation_blend_space_2d.cpp",0xc6,(long)param_2,
               lVar7,"p_y","blend_points_used","",false,false);
  }
LAB_001073bd:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AnimationNodeBlendSpace2D::_set_triangles(Vector<int> const&) */

void __thiscall
AnimationNodeBlendSpace2D::_set_triangles(AnimationNodeBlendSpace2D *this,Vector *param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (this[0x9f4] != (AnimationNodeBlendSpace2D)0x0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    lVar5 = *(long *)(lVar3 + -8);
    if (0x5555555555555554 < lVar5 * -0x5555555555555555 + 0x2aaaaaaaaaaaaaaaU) {
      _err_print_error("_set_triangles","scene/animation/animation_blend_space_2d.cpp",0x137,
                       "Condition \"p_triangles.size() % 3 != 0\" is true.",0,0);
      return;
    }
    lVar4 = 1;
    if (0 < lVar5) {
      do {
        if (lVar5 <= lVar4 + 1) {
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar4 + 1,lVar5,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (lVar5 <= lVar4) {
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        add_triangle(this,*(int *)(lVar3 + -4 + lVar4 * 4),*(int *)(lVar3 + lVar4 * 4),
                     *(int *)(lVar3 + 4 + lVar4 * 4),-1);
        lVar3 = *(long *)(param_1 + 8);
      } while ((lVar3 != 0) &&
              (lVar5 = *(long *)(lVar3 + -8), lVar1 = lVar4 + 2, lVar4 = lVar4 + 3, lVar1 < lVar5));
    }
  }
  return;
}



/* AnimationNodeBlendSpace2D::_update_triangles() */

void __thiscall AnimationNodeBlendSpace2D::_update_triangles(AnimationNodeBlendSpace2D *this)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  AnimationNodeBlendSpace2D *pAVar10;
  long in_FS_OFFSET;
  Vector aVStack_68 [8];
  long local_60;
  Delaunay2D local_58 [8];
  int *local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[0x9f4] != (AnimationNodeBlendSpace2D)0x0) &&
     (this[0x9f5] != (AnimationNodeBlendSpace2D)0x0)) {
    this[0x9f5] = (AnimationNodeBlendSpace2D)0x0;
    CowData<AnimationNodeBlendSpace2D::BlendTriangle>::resize<false>
              ((CowData<AnimationNodeBlendSpace2D::BlendTriangle> *)(this + 0x9b0),0);
    if (*(int *)(this + 0x9a0) < 3) {
      if (_update_triangles()::{lambda()#1}::operator()()::sname == '\0') {
        iVar6 = __cxa_guard_acquire(&_update_triangles()::{lambda()#1}::operator()()::sname);
        if (iVar6 != 0) {
          _scs_create((char *)&_update_triangles()::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_update_triangles()::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_update_triangles()::{lambda()#1}::operator()()::sname);
        }
      }
      local_48 = 0;
      local_40 = (undefined1  [16])0x0;
      (**(code **)(*(long *)this + 0xd0))
                (this,&_update_triangles()::{lambda()#1}::operator()()::sname,0,0);
      if (Variant::needs_deinit[(int)local_48] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      local_60 = 0;
      CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_60,(long)*(int *)(this + 0x9a0));
      if (0 < *(int *)(this + 0x9a0)) {
        lVar7 = 0;
        pAVar10 = this + 0x3b0;
        do {
          if (local_60 == 0) {
            lVar9 = 0;
LAB_00107953:
            _err_print_index_error
                      ("operator[]","./core/templates/vector.h",0x38,lVar7,lVar9,"p_index",
                       "((Vector<T> *)(this))->_cowdata.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          lVar9 = *(long *)(local_60 + -8);
          if (lVar9 <= lVar7) goto LAB_00107953;
          CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_60);
          *(undefined8 *)(local_60 + lVar7 * 8) = *(undefined8 *)pAVar10;
          lVar7 = lVar7 + 1;
          pAVar10 = pAVar10 + 0x18;
        } while ((int)lVar7 < *(int *)(this + 0x9a0));
      }
      Delaunay2D::triangulate(local_58,aVStack_68);
      piVar5 = local_50;
      if ((local_50 != (int *)0x0) && (lVar7 = 0, piVar8 = local_50, 0 < *(long *)(local_50 + -2)))
      {
        do {
          piVar1 = piVar8 + 2;
          piVar2 = piVar8 + 1;
          iVar6 = *piVar8;
          lVar7 = lVar7 + 1;
          piVar8 = piVar8 + 6;
          add_triangle(this,iVar6,*piVar2,*piVar1,-1);
        } while (lVar7 < *(long *)(piVar5 + -2));
      }
      if (_update_triangles()::{lambda()#2}::operator()()::sname == '\0') {
        iVar6 = __cxa_guard_acquire(&_update_triangles()::{lambda()#2}::operator()()::sname);
        if (iVar6 != 0) {
          _scs_create((char *)&_update_triangles()::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_update_triangles()::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_update_triangles()::{lambda()#2}::operator()()::sname);
        }
      }
      local_48 = 0;
      local_40 = (undefined1  [16])0x0;
      (**(code **)(*(long *)this + 0xd0))
                (this,&_update_triangles()::{lambda()#2}::operator()()::sname,0,0);
      if (Variant::needs_deinit[(int)local_48] != '\0') {
        Variant::_clear_internal();
      }
      if (local_50 != (int *)0x0) {
        LOCK();
        plVar3 = (long *)(local_50 + -4);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          Memory::free_static(local_50 + -4,false);
        }
      }
      if (local_60 != 0) {
        LOCK();
        plVar3 = (long *)(local_60 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static((void *)(local_60 + -0x10),false);
            return;
          }
          goto LAB_00107bd4;
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00107bd4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace2D::get_triangle_point(int, int) */

undefined4 __thiscall
AnimationNodeBlendSpace2D::get_triangle_point
          (AnimationNodeBlendSpace2D *this,int param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _update_triangles(this);
  if (2 < (uint)param_2) {
    _err_print_index_error
              ("get_triangle_point","scene/animation/animation_blend_space_2d.cpp",0xe8,
               (long)param_2,3,"p_point","3","",false,false);
    return 0xffffffff;
  }
  lVar1 = *(long *)(this + 0x9b0);
  lVar2 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_00107c3d;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined4 *)(lVar1 + lVar2 * 0xc + (long)param_2 * 4);
    }
    goto LAB_00107c3d;
  }
  lVar3 = 0;
LAB_00107c3d:
  _err_print_index_error
            ("get_triangle_point","scene/animation/animation_blend_space_2d.cpp",0xe9,lVar2,lVar3,
             "p_triangle","triangles.size()","",false,false);
  return 0xffffffff;
}



/* AnimationNodeBlendSpace2D::_process(AnimationMixer::PlaybackInfo, bool) [clone .part.0] */

undefined1 (*) [16]
AnimationNodeBlendSpace2D::_process
          (undefined1 (*param_1) [16],AnimationNodeBlendSpace2D *param_2,undefined1 (*param_3) [16],
          undefined1 param_4)

{
  long *plVar1;
  AnimationNodeBlendSpace2D AVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  Object *pOVar14;
  undefined8 uVar15;
  long lVar16;
  Vector2 *pVVar17;
  int iVar18;
  ulong uVar19;
  int iVar20;
  AnimationNodeBlendSpace2D *pAVar21;
  long in_FS_OFFSET;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 local_220;
  Object *local_218;
  undefined8 uStack_210;
  CowData<float> *local_1f8;
  Object **local_1e8;
  long local_1e0;
  undefined8 *local_1d8;
  Object **local_1c8;
  Object *local_198;
  Object *local_180;
  undefined1 local_168 [40];
  Object *local_140;
  Object *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined2 local_120;
  undefined1 local_11e;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined2 local_f8;
  undefined1 local_f6;
  float local_f4;
  long local_e8 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  float local_b4;
  long local_a8 [2];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  AnimationNode::get_parameter((StringName *)&local_58);
  local_98 = Variant::operator_cast_to_Vector2((Variant *)&local_58);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  AnimationNode::get_parameter((StringName *)&local_58);
  iVar11 = Variant::operator_cast_to_int((Variant *)&local_58);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_f8 = *(ushort *)param_3[2];
  local_118 = *param_3;
  local_e8[0] = 0;
  local_108 = *(undefined8 *)param_3[1];
  uStack_100 = *(undefined8 *)(param_3[1] + 8);
  local_f4 = *(float *)(param_3[2] + 4);
  local_f6 = param_3[2][2];
  local_1e0 = *(long *)param_3[3];
  if (local_1e0 != 0) {
    CowData<float>::_ref((CowData<float> *)local_e8,(CowData *)(param_3 + 3));
    local_1e0 = local_e8[0];
  }
  if (*(int *)(param_2 + 0x9f0) == 0) {
    lVar16 = *(long *)(param_2 + 0x9b0);
    if (lVar16 == 0) {
LAB_00108b60:
      *(undefined8 *)param_1[1] = 0;
      param_1[1][8] = 0;
      *(undefined2 *)(param_1[1] + 9) = 0;
      *param_1 = (undefined1  [16])0x0;
      goto LAB_0010898c;
    }
    local_1f8 = (CowData<float> *)0x0;
    bVar4 = true;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_1d8 = (undefined8 *)0xffffffff;
    do {
      if (*(long *)(lVar16 + -8) <= (long)local_1f8) break;
      local_58 = 0;
      lVar16 = 0;
      local_50 = 0;
      local_48 = 0;
      do {
        uVar12 = get_triangle_point(param_2,(int)local_1f8,(int)lVar16);
        if (uVar12 < 0x40) {
          uVar15 = *(undefined8 *)(param_2 + (long)(int)uVar12 * 0x18 + 0x3b0);
        }
        else {
          _err_print_index_error
                    ("get_blend_point_position","scene/animation/animation_blend_space_2d.cpp",0x78,
                     (long)(int)uVar12,0x40,"p_point","MAX_BLEND_POINTS","",false,false);
          uVar15 = 0;
        }
        *(undefined8 *)((StringName *)&local_58 + lVar16 * 8) = uVar15;
        lVar16 = lVar16 + 1;
      } while (lVar16 != 3);
      fVar23 = (float)local_98;
      fVar22 = (float)((ulong)local_98 >> 0x20);
      local_88 = CONCAT44((float)((ulong)local_50 >> 0x20) - fVar22,(float)local_50 - fVar23);
      local_90 = CONCAT44((float)((ulong)local_58 >> 0x20) - fVar22,(float)local_58 - fVar23);
      local_68 = CONCAT44((float)((ulong)local_48 >> 0x20) - fVar22,(float)local_48 - fVar23);
      fVar23 = (float)Vector2::cross((Vector2 *)&local_90);
      fVar22 = (float)Vector2::cross((Vector2 *)&local_88);
      if ((0.0 < fVar23 == 0.0 < fVar22) &&
         (fVar22 = (float)Vector2::cross((Vector2 *)&local_68), 0.0 < fVar23 == 0.0 < fVar22)) {
        _blend_triangle(param_2,(Vector2 *)&local_98,(Vector2 *)&local_58,(float *)&local_78);
        local_1d8._0_4_ = (int)local_1f8;
        goto LAB_00108543;
      }
      uVar19 = 1;
      do {
        local_68 = (&local_60)[uVar19];
        local_88._4_4_ = (float)((ulong)local_68 >> 0x20);
        local_90 = CONCAT44((float)((ulong)local_98 >> 0x20) - local_88._4_4_,
                            (float)local_98 - (float)local_68);
        lVar16 = (long)((int)uVar19 + (int)((uVar19 & 0xffffffff) / 3) * -3);
        local_60 = (&local_58)[lVar16];
        local_88._0_4_ = (float)local_60 - (float)local_68;
        local_88._4_4_ = (float)((ulong)local_60 >> 0x20) - local_88._4_4_;
        fVar23 = (float)Vector2::length_squared();
        uVar15 = local_68;
        if (_LC159 <= fVar23) {
          fVar22 = (float)Vector2::dot((Vector2 *)&local_88);
          fVar22 = fVar22 / fVar23;
          uVar15 = local_68;
          if ((0.0 < fVar22) && (uVar15 = local_60, fVar22 < (float)_LC0)) {
            uVar15 = CONCAT44(fVar22 * local_88._4_4_ + (float)((ulong)local_68 >> 0x20),
                              fVar22 * (float)local_88 + (float)local_68);
          }
        }
        local_88 = uVar15;
        if (bVar4) {
LAB_0010848b:
          local_80 = local_88;
          fVar22 = (float)Vector2::distance_to((Vector2 *)&local_68);
          fVar24 = 0.0;
          fVar23 = (float)_LC0;
          if (fVar22 != 0.0) {
            fVar24 = (float)Vector2::distance_to((Vector2 *)&local_68);
            fVar24 = fVar24 / fVar22;
            fVar23 = (float)_LC0 - fVar24;
          }
          *(float *)((long)&local_80 + uVar19 * 4 + 4) = fVar23;
          *(float *)((long)&local_78 + lVar16 * 4) = fVar24;
          local_1d8 = (undefined8 *)((ulong)local_1f8 & 0xffffffff);
          *(undefined4 *)((long)&local_78 + (long)(int)(((int)uVar19 + 1U) % 3) * 4) = 0;
        }
        else {
          fVar23 = (float)Vector2::distance_to((Vector2 *)&local_88);
          fVar22 = (float)Vector2::distance_to((Vector2 *)&local_80);
          if (fVar23 < fVar22) goto LAB_0010848b;
        }
        uVar19 = uVar19 + 1;
        bVar4 = false;
      } while (uVar19 != 4);
      lVar16 = *(long *)(param_2 + 0x9b0);
      local_1f8 = (CowData<float> *)((long)local_1f8 + 1);
    } while (lVar16 != 0);
    if ((int)local_1d8 == -1) {
      _err_print_error("_process","scene/animation/animation_blend_space_2d.cpp",0x1fd,
                       "Condition \"blend_triangle == -1\" is true. Returning: NodeTimeInfo()",0,0);
      goto LAB_00108b60;
    }
LAB_00108543:
    lVar16 = 0;
    do {
      uVar13 = get_triangle_point(param_2,(int)local_1d8,(int)lVar16);
      *(undefined4 *)((StringName *)&local_58 + lVar16 * 4) = uVar13;
      lVar16 = lVar16 + 1;
    } while (lVar16 != 3);
    if (*(int *)(param_2 + 0x9a0) < 1) {
      uVar6 = 0;
      uVar5 = 0;
      local_220 = 0;
      local_218 = (Object *)0x0;
      uStack_210 = 0;
    }
    else {
      iVar20 = 0;
      uVar5 = 0;
      iVar18 = (int)local_58;
      pAVar21 = param_2 + 0x3a0;
      uVar6 = 0;
      local_220 = 0;
      fVar23 = 0.0;
      bVar4 = true;
      local_218 = (Object *)0x0;
      uStack_210 = 0;
      do {
        while( true ) {
          if (iVar18 != iVar20) break;
          lVar16 = 0;
LAB_00108f1a:
          fVar22 = *(float *)((long)&local_78 + lVar16 * 4);
          local_a8[0] = 0;
          local_b8 = local_f8;
          local_b6 = local_f6;
          local_d8 = local_118._0_8_;
          uStack_d0 = local_118._8_8_;
          local_c8 = local_108;
          uStack_c0 = uStack_100;
          local_f4 = fVar22;
          local_b4 = fVar22;
          if (local_1e0 != 0) {
            CowData<float>::_ref((CowData<float> *)local_a8,(CowData *)local_e8);
          }
          local_140 = (Object *)0x0;
          if (((*(long *)(pAVar21 + 8) != 0) &&
              (pOVar14 = (Object *)
                         __dynamic_cast(*(long *)(pAVar21 + 8),&Object::typeinfo,
                                        &AnimationNode::typeinfo,0), pOVar14 != (Object *)0x0)) &&
             (local_140 = pOVar14, cVar10 = RefCounted::reference(), cVar10 == '\0')) {
            local_140 = (Object *)0x0;
          }
          AnimationNode::blend_node(&local_138,param_2,&local_140,pAVar21,&local_d8,0,1,param_4);
          if (((local_140 != (Object *)0x0) &&
              (cVar10 = RefCounted::unreference(), pOVar14 = local_140, cVar10 != '\0')) &&
             (cVar10 = predelete_handler(local_140), cVar10 != '\0')) {
            (**(code **)(*(long *)pOVar14 + 0x140))();
            Memory::free_static(pOVar14,false);
          }
          CowData<float>::_unref((CowData<float> *)local_a8);
          if ((bVar4) || (fVar23 < fVar22)) {
            local_218 = local_138;
            uStack_210 = uStack_130;
            local_220 = local_128;
            fVar23 = fVar22;
            uVar5 = local_120;
            uVar6 = local_11e;
          }
          bVar4 = false;
LAB_001085d0:
          iVar20 = iVar20 + 1;
          pAVar21 = pAVar21 + 0x18;
          if (*(int *)(param_2 + 0x9a0) <= iVar20) goto LAB_00108930;
        }
        if (local_58._4_4_ == iVar20) {
          lVar16 = 1;
          goto LAB_00108f1a;
        }
        if ((int)local_50 == iVar20) {
          lVar16 = 2;
          goto LAB_00108f1a;
        }
        if (param_2[0x9f6] == (AnimationNodeBlendSpace2D)0x0) goto LAB_001085d0;
        local_f4 = 0.0;
        local_b4 = 0.0;
        local_b8 = local_f8;
        local_a8[0] = 0;
        local_b6 = local_f6;
        local_d8 = local_118._0_8_;
        uStack_d0 = local_118._8_8_;
        local_c8 = local_108;
        uStack_c0 = uStack_100;
        if (local_1e0 != 0) {
          CowData<float>::_ref((CowData<float> *)local_a8,(CowData *)local_e8);
        }
        local_138 = (Object *)0x0;
        if (((*(long *)(pAVar21 + 8) != 0) &&
            (pOVar14 = (Object *)
                       __dynamic_cast(*(long *)(pAVar21 + 8),&Object::typeinfo,
                                      &AnimationNode::typeinfo,0), pOVar14 != (Object *)0x0)) &&
           (local_138 = pOVar14, cVar10 = RefCounted::reference(), cVar10 == '\0')) {
          local_138 = (Object *)0x0;
        }
        AnimationNode::blend_node(local_168,param_2,&local_138,pAVar21,&local_d8,0,1,param_4);
        if (((local_138 != (Object *)0x0) &&
            (cVar10 = RefCounted::unreference(), pOVar14 = local_138, cVar10 != '\0')) &&
           (cVar10 = predelete_handler(local_138), cVar10 != '\0')) {
          (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
          Memory::free_static(pOVar14,false);
        }
        iVar20 = iVar20 + 1;
        pAVar21 = pAVar21 + 0x18;
        CowData<float>::_unref((CowData<float> *)local_a8);
      } while (iVar20 < *(int *)(param_2 + 0x9a0));
    }
  }
  else {
    if (*(int *)(param_2 + 0x9a0) < 1) {
LAB_00108b9e:
      local_a8[0] = 0;
      local_b8 = local_f8;
      local_f4 = (float)_LC0;
      local_b4 = (float)_LC0;
      local_d8 = local_118._0_8_;
      uStack_d0 = local_118._8_8_;
      local_c8 = local_108;
      uStack_c0 = uStack_100;
      local_b6 = local_f6;
      if (local_1e0 != 0) {
        CowData<float>::_ref((CowData<float> *)local_a8,(CowData *)local_e8);
      }
      local_140 = (Object *)0x0;
      Ref<AnimationNode>::operator=
                ((Ref<AnimationNode> *)&local_140,*(Ref **)(param_2 + (long)iVar11 * 0x18 + 0x3a8));
      AnimationNode::blend_node
                (&local_138,param_2,(Ref<AnimationNode> *)&local_140,
                 param_2 + (long)iVar11 * 0x18 + 0x3a0,&local_d8,0,1,param_4);
      local_218 = local_138;
      if (((local_140 != (Object *)0x0) &&
          (cVar10 = RefCounted::unreference(), pOVar14 = local_140, cVar10 != '\0')) &&
         (cVar10 = predelete_handler(local_140), cVar10 != '\0')) {
        (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
        Memory::free_static(pOVar14,false);
      }
      local_1f8 = (CowData<float> *)local_a8;
      CowData<float>::_unref(local_1f8);
      AVar2 = param_2[0x9f6];
      local_220 = local_128;
      uStack_210 = uStack_130;
      uVar5 = local_120;
      uVar6 = local_11e;
    }
    else {
      iVar20 = 0;
      pVVar17 = (Vector2 *)(param_2 + 0x3b0);
      iVar18 = -1;
      fVar23 = _LC158;
      do {
        fVar22 = (float)Vector2::distance_squared_to(pVVar17);
        uVar6 = local_f6;
        uVar8 = uStack_100;
        uVar15 = local_108;
        if (fVar22 < fVar23) {
          iVar18 = iVar20;
          fVar23 = fVar22;
        }
        iVar20 = iVar20 + 1;
        pVVar17 = pVVar17 + 0x18;
      } while (iVar20 < *(int *)(param_2 + 0x9a0));
      bVar9 = local_f8._1_1_;
      uVar7 = local_118._8_8_;
      uVar25 = local_118._0_8_;
      if ((iVar11 == iVar18) || (iVar18 == -1)) goto LAB_00108b9e;
      pAVar21 = param_2 + (long)iVar18 * 0x18 + 0x3a8;
      if ((*(int *)(param_2 + 0x9f0) == 2) && (iVar11 != -1)) {
        lVar16 = *(long *)(param_2 + (long)iVar11 * 0x18 + 0x3a8);
        if ((lVar16 == 0) ||
           (pOVar14 = (Object *)
                      __dynamic_cast(lVar16,&Object::typeinfo,&AnimationNodeAnimation::typeinfo,0),
           pOVar14 == (Object *)0x0)) {
          local_198 = (Object *)0x0;
          local_180 = *(Object **)pAVar21;
          if (local_180 != (Object *)0x0) goto LAB_00108002;
LAB_001091e3:
          local_180 = (Object *)0x0;
          local_198 = (Object *)0x0;
        }
        else {
          cVar10 = RefCounted::reference();
          local_198 = (Object *)0x0;
          if (cVar10 != '\0') {
            local_198 = pOVar14;
          }
          local_180 = *(Object **)pAVar21;
          if (local_180 != (Object *)0x0) {
LAB_00108002:
            local_180 = (Object *)
                        __dynamic_cast(local_180,&Object::typeinfo,&AnimationNodeAnimation::typeinfo
                                       ,0);
            if ((local_180 == (Object *)0x0) || (cVar10 = RefCounted::reference(), cVar10 == '\0'))
            {
              local_180 = (Object *)0x0;
            }
            else if (local_198 != (Object *)0x0) {
              uVar3 = *(undefined8 *)(param_2 + 0x2a8);
              *(undefined8 *)(local_180 + 0x2a8) = uVar3;
              *(undefined8 *)(local_198 + 0x2a8) = uVar3;
              AnimationNodeAnimation::is_backward();
              AnimationNodeAnimation::set_backward(SUB81(local_180,0));
              cVar10 = RefCounted::unreference();
              if ((cVar10 != '\0') && (cVar10 = predelete_handler(local_180), cVar10 != '\0')) {
                (**(code **)(*(long *)local_180 + 0x140))(local_180);
                Memory::free_static(local_180,false);
              }
              cVar10 = RefCounted::unreference();
              if ((cVar10 != '\0') && (cVar10 = predelete_handler(local_198), cVar10 != '\0')) {
                (**(code **)(*(long *)local_198 + 0x140))(local_198);
                Memory::free_static(local_198,false);
              }
              goto LAB_001091e3;
            }
          }
        }
        local_f8 = local_f8 & 0xff00;
        local_f4 = 0.0;
        local_b8 = (ushort)bVar9 << 8;
        local_b6 = uVar6;
        local_b4 = 0.0;
        local_a8[0] = 0;
        local_d8 = uVar25;
        uStack_d0 = uVar7;
        local_c8 = uVar15;
        uStack_c0 = uVar8;
        if (local_1e0 != 0) {
          CowData<float>::_ref((CowData<float> *)local_a8,(CowData *)local_e8);
        }
        local_140 = (Object *)0x0;
        Ref<AnimationNode>::operator=
                  ((Ref<AnimationNode> *)&local_140,*(Ref **)(param_2 + (long)iVar11 * 0x18 + 0x3a8)
                  );
        AnimationNode::blend_node
                  (&local_138,param_2,(Ref<AnimationNode> *)&local_140,
                   param_2 + (long)iVar11 * 0x18 + 0x3a0,&local_d8,0,1,1);
        uVar25 = uStack_130;
        if (((local_140 != (Object *)0x0) &&
            (cVar10 = RefCounted::unreference(), pOVar14 = local_140, cVar10 != '\0')) &&
           (cVar10 = predelete_handler(local_140), cVar10 != '\0')) {
          (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
          Memory::free_static(pOVar14,false);
        }
        local_1f8 = (CowData<float> *)local_a8;
        CowData<float>::_unref(local_1f8);
        local_118._0_8_ = uVar25;
        if (((local_180 != (Object *)0x0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0'))
           && (cVar10 = predelete_handler(local_180), cVar10 != '\0')) {
          (**(code **)(*(long *)local_180 + 0x140))(local_180);
          Memory::free_static(local_180,false);
        }
        if (((local_198 != (Object *)0x0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0'))
           && (cVar10 = predelete_handler(local_198), cVar10 != '\0')) {
          (**(code **)(*(long *)local_198 + 0x140))(local_198);
          Memory::free_static(local_198,false);
        }
      }
      local_1c8 = &local_140;
      local_1d8 = &local_d8;
      local_1e8 = &local_138;
      local_1f8 = (CowData<float> *)local_a8;
      local_f8 = CONCAT11(local_f8._1_1_,1);
      local_b8 = CONCAT11(bVar9,1);
      local_b6 = uVar6;
      local_a8[0] = 0;
      local_f4 = (float)_LC0;
      uStack_d0 = uVar7;
      local_c8 = uVar15;
      uStack_c0 = uVar8;
      local_b4 = (float)_LC0;
      local_d8 = uVar25;
      if (local_1e0 != 0) {
        CowData<float>::_ref(local_1f8,(CowData *)local_e8);
      }
      local_140 = (Object *)0x0;
      if (((*(long *)pAVar21 != 0) &&
          (pOVar14 = (Object *)
                     __dynamic_cast(*(long *)pAVar21,&Object::typeinfo,&AnimationNode::typeinfo,0),
          pOVar14 != (Object *)0x0)) &&
         (local_140 = pOVar14, cVar10 = RefCounted::reference(), cVar10 == '\0')) {
        local_140 = (Object *)0x0;
      }
      AnimationNode::blend_node
                (local_1e8,param_2,local_1c8,param_2 + (long)iVar18 * 0x18 + 0x3a0,local_1d8,0,1,
                 param_4);
      local_218 = local_138;
      if (((local_140 != (Object *)0x0) &&
          (cVar10 = RefCounted::unreference(), pOVar14 = local_140, cVar10 != '\0')) &&
         (cVar10 = predelete_handler(local_140), cVar10 != '\0')) {
        (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
        Memory::free_static(pOVar14,false);
      }
      CowData<float>::_unref(local_1f8);
      AVar2 = param_2[0x9f6];
      iVar11 = iVar18;
      local_220 = local_128;
      uStack_210 = uStack_130;
      uVar5 = local_120;
      uVar6 = local_11e;
    }
    if (AVar2 != (AnimationNodeBlendSpace2D)0x0) {
      local_1d8 = &local_d8;
      local_1e8 = &local_138;
      local_1f8 = (CowData<float> *)local_a8;
      local_f8 = *(ushort *)param_3[2];
      local_118 = *param_3;
      local_108 = *(undefined8 *)param_3[1];
      uStack_100 = *(undefined8 *)(param_3[1] + 8);
      local_f4 = *(float *)(param_3[2] + 4);
      local_f6 = param_3[2][2];
      if (local_1e0 != *(long *)param_3[3]) {
        CowData<float>::_ref((CowData<float> *)local_e8,(CowData *)(param_3 + 3));
        local_1e0 = local_e8[0];
      }
      local_f4 = 0.0;
      if (0 < *(int *)(param_2 + 0x9a0)) {
        pAVar21 = param_2 + 0x3a0;
        iVar18 = 0;
        do {
          if (iVar11 != iVar18) {
            local_a8[0] = 0;
            local_b8 = local_f8;
            local_d8 = local_118._0_8_;
            uStack_d0 = local_118._8_8_;
            local_b6 = local_f6;
            local_c8 = local_108;
            uStack_c0 = uStack_100;
            local_b4 = local_f4;
            if (local_1e0 != 0) {
              CowData<float>::_ref(local_1f8,(CowData *)local_e8);
            }
            local_138 = (Object *)0x0;
            if (((*(long *)(pAVar21 + 8) != 0) &&
                (pOVar14 = (Object *)
                           __dynamic_cast(*(long *)(pAVar21 + 8),&Object::typeinfo,
                                          &AnimationNode::typeinfo,0), pOVar14 != (Object *)0x0)) &&
               (local_138 = pOVar14, cVar10 = RefCounted::reference(), cVar10 == '\0')) {
              local_138 = (Object *)0x0;
            }
            AnimationNode::blend_node(local_168,param_2,local_1e8,pAVar21,local_1d8,0,1,param_4);
            if (((local_138 != (Object *)0x0) &&
                (cVar10 = RefCounted::unreference(), pOVar14 = local_138, cVar10 != '\0')) &&
               (cVar10 = predelete_handler(local_138), cVar10 != '\0')) {
              (**(code **)(*(long *)pOVar14 + 0x140))();
              Memory::free_static(pOVar14,false);
            }
            lVar16 = local_a8[0];
            if (local_a8[0] != 0) {
              LOCK();
              plVar1 = (long *)(local_a8[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              local_1e0 = local_e8[0];
              if (*plVar1 == 0) {
                local_a8[0] = 0;
                Memory::free_static((void *)(lVar16 + -0x10),false);
                local_1e0 = local_e8[0];
              }
            }
          }
          iVar18 = iVar18 + 1;
          pAVar21 = pAVar21 + 0x18;
        } while (iVar18 < *(int *)(param_2 + 0x9a0));
      }
    }
  }
LAB_00108930:
  Variant::Variant((Variant *)&local_58,iVar11);
  AnimationNode::set_parameter((StringName *)param_2,(Variant *)(param_2 + 0x9c0));
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined2 *)(param_1[1] + 8) = uVar5;
  *(Object **)*param_1 = local_218;
  *(undefined8 *)(*param_1 + 8) = uStack_210;
  param_1[1][10] = uVar6;
  *(undefined8 *)param_1[1] = local_220;
LAB_0010898c:
  if (local_1e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_1e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_e8[0] + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Type propagation algorithm not settling */
/* AnimationNodeBlendSpace2D::get_closest_point(Vector2 const&) */

undefined8 __thiscall
AnimationNodeBlendSpace2D::get_closest_point(AnimationNodeBlendSpace2D *this,Vector2 *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  _update_triangles(this);
  if ((*(long *)(this + 0x9b0) == 0) ||
     (lVar6 = *(long *)(*(long *)(this + 0x9b0) + -8), lVar6 == 0)) {
    uVar4 = 0;
  }
  else {
    local_60 = 0;
    bVar2 = true;
    local_88 = 0;
    while (uVar4 = local_60, local_88 < lVar6) {
      local_58[0] = 0;
      lVar6 = 0;
      puVar5 = local_58;
      local_58[1] = 0;
      local_58[2] = 0;
      do {
        uVar3 = get_triangle_point(this,(int)local_88,(int)lVar6);
        if (uVar3 < 0x40) {
          uVar4 = *(undefined8 *)(this + (long)(int)uVar3 * 0x18 + 0x3b0);
        }
        else {
          _err_print_index_error
                    ("get_blend_point_position","scene/animation/animation_blend_space_2d.cpp",0x78,
                     (long)(int)uVar3,0x40,"p_point","MAX_BLEND_POINTS","",false,false);
          uVar4 = 0;
        }
        puVar5[lVar6] = uVar4;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 3);
      fVar7 = (float)*(undefined8 *)param_1;
      fVar8 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
      local_70 = CONCAT44((float)((ulong)local_58[1] >> 0x20) - fVar8,(float)local_58[1] - fVar7);
      local_78 = CONCAT44((float)((ulong)local_58[0] >> 0x20) - fVar8,(float)local_58[0] - fVar7);
      local_68 = CONCAT44((float)((ulong)local_58[2] >> 0x20) - fVar8,(float)local_58[2] - fVar7);
      fVar7 = (float)Vector2::cross((Vector2 *)&local_78);
      fVar8 = (float)Vector2::cross((Vector2 *)&local_70);
      if ((0.0 < fVar7 == 0.0 < fVar8) &&
         (fVar8 = (float)Vector2::cross((Vector2 *)&local_68), 0.0 < fVar7 == 0.0 < fVar8)) {
        uVar4 = *(undefined8 *)param_1;
        break;
      }
      uVar3 = 0;
      do {
        uVar3 = uVar3 + 1;
        uVar4 = *puVar5;
        fVar8 = (float)uVar4;
        fVar10 = (float)((ulong)uVar4 >> 0x20);
        local_70 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) - fVar10,
                            (float)*(undefined8 *)param_1 - fVar8);
        uVar1 = *(undefined8 *)((long)local_58 + (long)(int)(uVar3 % 3) * 8);
        local_68._0_4_ = (float)uVar1 - fVar8;
        local_68._4_4_ = (float)((ulong)uVar1 >> 0x20) - fVar10;
        fVar7 = (float)Vector2::length_squared();
        if (_LC159 <= fVar7) {
          fVar9 = (float)Vector2::dot((Vector2 *)&local_68);
          fVar9 = fVar9 / fVar7;
          if ((0.0 < fVar9) && (uVar4 = uVar1, fVar9 < (float)_LC0)) {
            uVar4 = CONCAT44(fVar10 + fVar9 * local_68._4_4_,fVar8 + fVar9 * (float)local_68);
          }
        }
        local_68 = uVar4;
        if (bVar2) {
LAB_001095e9:
          local_60 = local_68;
        }
        else {
          fVar7 = (float)Vector2::distance_to((Vector2 *)&local_68);
          fVar8 = (float)Vector2::distance_to((Vector2 *)&local_60);
          if (fVar7 < fVar8) goto LAB_001095e9;
        }
        puVar5 = puVar5 + 1;
        bVar2 = false;
      } while (uVar3 != 3);
      local_88 = local_88 + 1;
      uVar4 = local_60;
      if (*(long *)(this + 0x9b0) == 0) break;
      lVar6 = *(long *)(*(long *)(this + 0x9b0) + -8);
    }
  }
  if (local_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* AnimationNodeBlendSpace2D::_process(AnimationMixer::PlaybackInfo, bool) */

undefined1 (*) [16]
AnimationNodeBlendSpace2D::_process
          (undefined1 (*param_1) [16],AnimationNodeBlendSpace2D *param_2,undefined8 param_3,
          undefined1 param_4)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  _update_triangles(param_2);
  if (*(int *)(param_2 + 0x9a0) == 0) {
    *(undefined8 *)param_1[1] = 0;
    param_1[1][8] = 0;
    *(undefined2 *)(param_1[1] + 9) = 0;
    *param_1 = (undefined1  [16])0x0;
  }
  else {
    _process(param_1,param_2,param_3,param_4);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace2D::remove_triangle(int) */

void __thiscall
AnimationNodeBlendSpace2D::remove_triangle(AnimationNodeBlendSpace2D *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)param_1;
  lVar3 = *(long *)(this + 0x9b0);
  if (param_1 < 0) {
    if (lVar3 != 0) {
      lVar3 = *(long *)(lVar3 + -8);
      goto LAB_001098b9;
    }
  }
  else if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + -8);
    if (lVar2 < lVar3) {
      CowData<AnimationNodeBlendSpace2D::BlendTriangle>::_copy_on_write
                ((CowData<AnimationNodeBlendSpace2D::BlendTriangle> *)(this + 0x9b0));
      lVar3 = *(long *)(this + 0x9b0);
      if (lVar3 == 0) {
        lVar1 = -1;
      }
      else {
        lVar1 = *(long *)(lVar3 + -8) + -1;
        if (lVar2 < lVar1) {
          memmove((void *)(lVar3 + lVar2 * 0xc),(void *)(lVar3 + 0xc + lVar2 * 0xc),
                  (*(long *)(lVar3 + -8) - lVar2) * 0xc - 0xc);
        }
      }
      CowData<AnimationNodeBlendSpace2D::BlendTriangle>::resize<false>
                ((CowData<AnimationNodeBlendSpace2D::BlendTriangle> *)(this + 0x9b0),lVar1);
      return;
    }
    goto LAB_001098b9;
  }
  lVar3 = 0;
LAB_001098b9:
  _err_print_index_error
            ("remove_triangle","scene/animation/animation_blend_space_2d.cpp",0xee,lVar2,lVar3,
             "p_triangle","triangles.size()","",false,false);
  return;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* Object::get_save_class() const */

void Object::get_save_class(void)

{
  long lVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RSI + 0x48))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind::is_valid() const */

undefined8 MethodBind::is_valid(void)

{
  return 1;
}



/* MethodBind::is_vararg() const */

undefined8 MethodBind::is_vararg(void)

{
  return 0;
}



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* AnimationNodeBlendSpace2D::is_class_ptr(void*) const */

uint AnimationNodeBlendSpace2D::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x11e6,in_RSI == &AnimationRootNode::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11e6,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11e6,in_RSI == &AnimationNode::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11e6,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11e6,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* AnimationNodeBlendSpace2D::_getv(StringName const&, Variant&) const */

undefined8 AnimationNodeBlendSpace2D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AnimationNodeBlendSpace2D::_setv(StringName const&, Variant const&) */

undefined8 AnimationNodeBlendSpace2D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AnimationNodeBlendSpace2D::_property_can_revertv(StringName const&) const */

undefined8 AnimationNodeBlendSpace2D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AnimationNodeBlendSpace2D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AnimationNodeBlendSpace2D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AnimationNodeBlendSpace2D::_notificationv(int, bool) */

void AnimationNodeBlendSpace2D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2D, void, ObjectID const&, StringName
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,StringName_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,StringName_const&>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2D, void, ObjectID const&, String const&,
   String const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,String_const&,String_const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,String_const&,String_const&>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void> *this)

{
  return;
}



/* MethodBindTRC<AnimationNodeBlendSpace2D::BlendMode>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<AnimationNodeBlendSpace2D::BlendMode>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<AnimationNodeBlendSpace2D::BlendMode>::get_argument_meta(int) const */

undefined8 MethodBindTRC<AnimationNodeBlendSpace2D::BlendMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<AnimationNodeBlendSpace2D::BlendMode>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<AnimationNodeBlendSpace2D::BlendMode>::_gen_argument_type
          (MethodBindT<AnimationNodeBlendSpace2D::BlendMode> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<AnimationNodeBlendSpace2D::BlendMode>::get_argument_meta(int) const */

undefined8 MethodBindT<AnimationNodeBlendSpace2D::BlendMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTRC<bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<bool>::_gen_argument_type(int) const */

bool __thiscall MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this,int param_1)

{
  return param_1 == 0;
}



/* MethodBindT<bool>::get_argument_meta(int) const */

undefined8 MethodBindT<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector<int>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector<int>>::_gen_argument_type(int param_1)

{
  return 0x1e;
}



/* MethodBindTRC<Vector<int>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector<int>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector<int> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Vector<int>const&>::_gen_argument_type(MethodBindT<Vector<int>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x1e;
}



/* MethodBindT<Vector<int> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector<int>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<String>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTRC<String>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindT<String const&>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector2>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector2>::_gen_argument_type(int param_1)

{
  return 5;
}



/* MethodBindTRC<Vector2>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector2>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector2 const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Vector2_const&>::_gen_argument_type(MethodBindT<Vector2_const&> *this,int param_1)

{
  return -(param_1 == 0) & 5;
}



/* MethodBindT<Vector2 const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector2_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<int, int, int>::_gen_argument_type(int) const */

undefined8 MethodBindTR<int,int,int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTR<int, int, int>::get_argument_meta(int) const */

char __thiscall
MethodBindTR<int,int,int>::get_argument_meta(MethodBindTR<int,int,int> *this,int param_1)

{
  return (param_1 < 2) * '\x03';
}



/* MethodBindT<int, int, int, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,int,int,int>::get_argument_meta(MethodBindT<int,int,int,int> *this,int param_1)

{
  return -((uint)param_1 < 4) & 3;
}



/* MethodBindTRC<int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindT<int>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<int>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int>::get_argument_meta(MethodBindT<int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<Ref<AnimationRootNode>, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Ref<AnimationRootNode>,int>::_gen_argument_type
          (MethodBindTRC<Ref<AnimationRootNode>,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
}



/* MethodBindTRC<Ref<AnimationRootNode>, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Ref<AnimationRootNode>,int>::get_argument_meta
          (MethodBindTRC<Ref<AnimationRootNode>,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, Ref<AnimationRootNode> const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<int,Ref<AnimationRootNode>const&>::_gen_argument_type
          (MethodBindT<int,Ref<AnimationRootNode>const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
  }
  return iVar1;
}



/* MethodBindT<int, Ref<AnimationRootNode> const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,Ref<AnimationRootNode>const&>::get_argument_meta
          (MethodBindT<int,Ref<AnimationRootNode>const&> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<Vector2, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Vector2,int>::_gen_argument_type(MethodBindTRC<Vector2,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffffd) + 5;
}



/* MethodBindTRC<Vector2, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Vector2,int>::get_argument_meta(MethodBindTRC<Vector2,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, Vector2 const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<int,Vector2_const&>::_gen_argument_type
          (MethodBindT<int,Vector2_const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xfffffffd) + 5;
  }
  return iVar1;
}



/* MethodBindT<int, Vector2 const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,Vector2_const&>::get_argument_meta
          (MethodBindT<int,Vector2_const&> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<Ref<AnimationRootNode> const&, Vector2 const&, int>::get_argument_meta(int) const */

char __thiscall
MethodBindT<Ref<AnimationRootNode>const&,Vector2_const&,int>::get_argument_meta
          (MethodBindT<Ref<AnimationRootNode>const&,Vector2_const&,int> *this,int param_1)

{
  return (param_1 == 2) * '\x03';
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2D, void, ObjectID const&, StringName
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,StringName_const&>::
get_argument_count(CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,StringName_const&>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2D, void, ObjectID const&, String const&,
   String const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,String_const&,String_const&>
::get_argument_count
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,String_const&,String_const&>
           *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2D, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void>::get_argument_count
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2D, void, ObjectID const&, String const&,
   String const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,String_const&,String_const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,String_const&,String_const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2D, void, ObjectID const&, StringName
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,StringName_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,StringName_const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* MethodBindT<Ref<AnimationRootNode> const&, Vector2 const&, int>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<AnimationRootNode>const&,Vector2_const&,int>::~MethodBindT
          (MethodBindT<Ref<AnimationRootNode>const&,Vector2_const&,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011df18;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<AnimationRootNode> const&, Vector2 const&, int>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<AnimationRootNode>const&,Vector2_const&,int>::~MethodBindT
          (MethodBindT<Ref<AnimationRootNode>const&,Vector2_const&,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011df18;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Vector2_const&>::~MethodBindT(MethodBindT<int,Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011df78;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Vector2_const&>::~MethodBindT(MethodBindT<int,Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011df78;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector2, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2,int>::~MethodBindTRC(MethodBindTRC<Vector2,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011dfd8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector2, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2,int>::~MethodBindTRC(MethodBindTRC<Vector2,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011dfd8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<AnimationRootNode>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<AnimationRootNode>,int>::~MethodBindTRC
          (MethodBindTRC<Ref<AnimationRootNode>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e098;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<AnimationRootNode>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<AnimationRootNode>,int>::~MethodBindTRC
          (MethodBindTRC<Ref<AnimationRootNode>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e098;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, int, int, int>::~MethodBindT() */

void __thiscall MethodBindT<int,int,int,int>::~MethodBindT(MethodBindT<int,int,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e1b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, int, int, int>::~MethodBindT() */

void __thiscall MethodBindT<int,int,int,int>::~MethodBindT(MethodBindT<int,int,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e1b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<int, int, int>::~MethodBindTR() */

void __thiscall MethodBindTR<int,int,int>::~MethodBindTR(MethodBindTR<int,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e218;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<int, int, int>::~MethodBindTR() */

void __thiscall MethodBindTR<int,int,int>::~MethodBindTR(MethodBindTR<int,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e218;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e0f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e0f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e158;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e158;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e278;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e278;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e2d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e2d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e338;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e338;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e398;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e398;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, Ref<AnimationRootNode> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,Ref<AnimationRootNode>const&>::~MethodBindT
          (MethodBindT<int,Ref<AnimationRootNode>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e038;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, Ref<AnimationRootNode> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,Ref<AnimationRootNode>const&>::~MethodBindT
          (MethodBindT<int,Ref<AnimationRootNode>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e038;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector<int> const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector<int>const&>::~MethodBindT(MethodBindT<Vector<int>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e3f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector<int> const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector<int>const&>::~MethodBindT(MethodBindT<Vector<int>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e3f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector<int>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<int>>::~MethodBindTRC(MethodBindTRC<Vector<int>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e458;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector<int>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<int>>::~MethodBindTRC(MethodBindTRC<Vector<int>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e458;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<AnimationNodeBlendSpace2D::BlendMode>::~MethodBindT() */

void __thiscall
MethodBindT<AnimationNodeBlendSpace2D::BlendMode>::~MethodBindT
          (MethodBindT<AnimationNodeBlendSpace2D::BlendMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e578;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<AnimationNodeBlendSpace2D::BlendMode>::~MethodBindT() */

void __thiscall
MethodBindT<AnimationNodeBlendSpace2D::BlendMode>::~MethodBindT
          (MethodBindT<AnimationNodeBlendSpace2D::BlendMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e578;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<AnimationNodeBlendSpace2D::BlendMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AnimationNodeBlendSpace2D::BlendMode>::~MethodBindTRC
          (MethodBindTRC<AnimationNodeBlendSpace2D::BlendMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e5d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<AnimationNodeBlendSpace2D::BlendMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AnimationNodeBlendSpace2D::BlendMode>::~MethodBindTRC
          (MethodBindTRC<AnimationNodeBlendSpace2D::BlendMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e5d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e4b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e4b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e518;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e518;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, int, int, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<int,int,int,int>::_gen_argument_type(MethodBindT<int,int,int,int> *this,int param_1)

{
  return ((uint)param_1 < 4) * '\x02';
}



/* MethodBindT<Ref<AnimationRootNode> const&, Vector2 const&, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Ref<AnimationRootNode>const&,Vector2_const&,int>::_gen_argument_type
          (MethodBindT<Ref<AnimationRootNode>const&,Vector2_const&,int> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (((uint)param_1 < 3) && (cVar1 = '\x18', param_1 != 0)) {
    cVar1 = (param_1 == 1) * '\x03' + '\x02';
  }
  return cVar1;
}



/* CowData<AnimationNodeBlendSpace2D::BlendTriangle>::_copy_on_write() [clone .isra.0] [clone .cold]
    */

void CowData<AnimationNodeBlendSpace2D::BlendTriangle>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Delaunay2D::Edge>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Delaunay2D::Edge>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Delaunay2D::Triangle>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Delaunay2D::Triangle>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AnimationNodeBlendSpace2D::_bind_methods() [clone .cold] */

void AnimationNodeBlendSpace2D::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2D, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void>::get_object
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010accd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010accd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010accd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2D, void, ObjectID const&, String const&,
   String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,String_const&,String_const&>
::get_object(CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,String_const&,String_const&>
             *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010adcd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010adcd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010adcd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2D, void, ObjectID const&, StringName
   const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,StringName_const&>::
get_object(CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,StringName_const&>
           *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010aecd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010aecd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010aecd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointerBase::get_as_text() const */

void CallableCustomMethodPointerBase::get_as_text(void)

{
  char *__s;
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  __s = *(char **)(in_RSI + 0x20);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (__s != (char *)0x0) {
    strlen(__s);
  }
  String::parse_latin1(in_RDI);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace2D::_get_class_namev() const */

undefined8 * AnimationNodeBlendSpace2D::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_0010b073:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010b073;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AnimationNodeBlendSpace2D");
      goto LAB_0010b0de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AnimationNodeBlendSpace2D");
LAB_0010b0de:
  return &_get_class_namev()::_class_name_static;
}



/* String::~String() */

void __thiscall String::~String(String *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* AnimationNodeBlendSpace2D::get_class() const */

void AnimationNodeBlendSpace2D::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 4;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010b35c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010b35c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector2>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 5;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010b4dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010b4dc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<int>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector<int>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x1e;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010b65c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010b65c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010b7dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010b7dc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010b95c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010b95c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x18);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            if (*(long *)((long)pvVar5 + 0x38) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x38) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x38);
                *(undefined8 *)((long)pvVar5 + 0x38) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x28) != 0)) {
              StringName::unref();
            }
            if (*(long *)((long)pvVar5 + 0x20) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x20) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x20);
                *(undefined8 *)((long)pvVar5 + 0x20) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar5 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x10);
                *(undefined8 *)((long)pvVar5 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010baf4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010baf4:
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
  }
  return;
}



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,int param_4,CowData *param_5,
          undefined4 param_6,StringName *param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  lVar1 = *(long *)param_3;
  *(undefined4 *)this = param_2;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  }
  *(undefined8 *)(this + 0x20) = 0;
  lVar1 = *(long *)param_5;
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)(this + 0x18) = param_4;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
    param_4 = *(int *)(this + 0x18);
  }
  *(undefined4 *)(this + 0x28) = param_6;
  if (param_4 == 0x11) {
    StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_48) {
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_48;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    StringName::operator=((StringName *)(this + 0x10),param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_0010bdaf;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010bdaf:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010be63;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_0010bf13;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_0010bf13:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_0010be63;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010be63:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010c03f;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010c03f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_0010c0f3;
  }
  cVar5 = String::operator==(param_1,"Resource");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010c0f3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationRootNode::is_class(String const&) const */

undefined8 __thiscall AnimationRootNode::is_class(AnimationRootNode *this,String *param_1)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_0010c1df;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010c1df:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010c293;
  }
  cVar6 = String::operator==(param_1,"AnimationRootNode");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_0010c353;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_0010c353:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_0010c293;
    }
    cVar6 = String::operator==(param_1,"AnimationNode");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Resource::is_class((Resource *)this,param_1);
        return uVar7;
      }
      goto LAB_0010c3fc;
    }
  }
LAB_0010c293:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c3fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace2D::is_class(String const&) const */

undefined8 __thiscall
AnimationNodeBlendSpace2D::is_class(AnimationNodeBlendSpace2D *this,String *param_1)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010c47f;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010c47f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_0010c533;
  }
  cVar5 = String::operator==(param_1,"AnimationNodeBlendSpace2D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = AnimationRootNode::is_class((AnimationRootNode *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010c533:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Delaunay2D::create_triangle(Vector<Vector2> const&, int, int, int) */

Delaunay2D * __thiscall
Delaunay2D::create_triangle(Delaunay2D *this,Vector *param_1,int param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  undefined1 auVar12 [16];
  
  lVar6 = (long)param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(int *)this = param_2;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined8 *)(this + 0xc) = 0;
  *(int *)(this + 4) = param_3;
  *(int *)(this + 8) = param_4;
  lVar5 = lVar6;
  if (lVar6 < 0) {
    if (lVar3 != 0) {
      lVar7 = *(long *)(lVar3 + -8);
      goto LAB_0010c76b;
    }
  }
  else if (lVar3 != 0) {
    lVar7 = *(long *)(lVar3 + -8);
    if (lVar7 <= lVar6) goto LAB_0010c76b;
    lVar5 = (long)param_3;
    puVar1 = (undefined8 *)(lVar3 + lVar6 * 8);
    if ((lVar7 <= lVar5) || (lVar5 < 0)) goto LAB_0010c76b;
    uVar10 = *(undefined8 *)(lVar3 + lVar5 * 8);
    uVar2 = *puVar1;
    lVar5 = (long)param_4;
    local_48 = CONCAT44((float)((ulong)uVar10 >> 0x20) - (float)((ulong)uVar2 >> 0x20),
                        (float)uVar10 - (float)uVar2);
    if ((lVar5 < 0) || (lVar7 <= lVar5)) goto LAB_0010c76b;
    uVar10 = *puVar1;
    uVar2 = *(undefined8 *)(lVar3 + lVar5 * 8);
    local_40 = CONCAT44((float)((ulong)uVar2 >> 0x20) - (float)((ulong)uVar10 >> 0x20),
                        (float)uVar2 - (float)uVar10);
    fVar8 = (float)Vector2::cross((Vector2 *)&local_48);
    auVar13._0_4_ = fVar8 + fVar8;
    auVar13._4_4_ = auVar13._0_4_;
    fVar8 = (float)Vector2::length_squared();
    fVar14 = local_48._4_4_ * fVar8;
    fVar8 = fVar8 * (float)local_48;
    uVar10 = Vector2::length_squared();
    auVar11._0_4_ = local_40._4_4_ * (float)uVar10 - fVar14;
    auVar12._4_8_ = 0;
    auVar12._0_4_ = auVar11._0_4_;
    auVar12._12_4_ = (uint)((ulong)uVar10 >> 0x20) ^ _UNK_0011e7a4;
    auVar11._8_8_ = auVar12._8_8_;
    auVar11._4_4_ = (uint)((float)uVar10 * (float)local_40 - fVar8) ^ __LC32;
    auVar13._8_8_ = _LC0;
    auVar13 = divps(auVar11,auVar13);
    local_38 = auVar13._0_8_;
    uVar9 = Vector2::length_squared();
    lVar3 = *(long *)(param_1 + 8);
    *(undefined4 *)(this + 0x14) = uVar9;
    if (lVar3 != 0) {
      lVar7 = *(long *)(lVar3 + -8);
      lVar5 = lVar6;
      if (lVar6 < lVar7) {
        uVar10 = *(undefined8 *)(lVar3 + lVar6 * 8);
        *(ulong *)(this + 0xc) =
             CONCAT44((float)((ulong)uVar10 >> 0x20) + (float)((ulong)local_38 >> 0x20),
                      (float)uVar10 + (float)local_38);
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return this;
      }
      goto LAB_0010c76b;
    }
  }
  lVar7 = 0;
  lVar5 = lVar6;
LAB_0010c76b:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar7,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*plVar5;
    if (pvVar2 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar2 + 0x40) == plVar5) {
      lVar4 = *(long *)((long)pvVar2 + 0x30);
      lVar3 = *(long *)((long)pvVar2 + 0x38);
      *plVar5 = lVar4;
      if (pvVar2 == (void *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 0x30);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x38) = lVar3;
      }
      if (*(long *)((long)pvVar2 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 0x20);
          *(undefined8 *)((long)pvVar2 + 0x20) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
        StringName::unref();
      }
      if (*(long *)((long)pvVar2 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 8);
          *(undefined8 *)((long)pvVar2 + 8) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(pvVar2,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* Callable
   create_custom_callable_function_pointer<AnimationNodeBlendSpace2D>(AnimationNodeBlendSpace2D*,
   char const*, void (AnimationNodeBlendSpace2D::*)()) */

AnimationNodeBlendSpace2D *
create_custom_callable_function_pointer<AnimationNodeBlendSpace2D>
          (AnimationNodeBlendSpace2D *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC4;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011dd68;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<AnimationNodeBlendSpace2D, ObjectID const&,
   String const&, String const&>(AnimationNodeBlendSpace2D*, char const*, void
   (AnimationNodeBlendSpace2D::*)(ObjectID const&, String const&, String const&)) */

AnimationNodeBlendSpace2D *
create_custom_callable_function_pointer<AnimationNodeBlendSpace2D,ObjectID_const&,String_const&,String_const&>
          (AnimationNodeBlendSpace2D *param_1,char *param_2,
          _func_void_ObjectID_ptr_String_ptr_String_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC4;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011ddf8;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_ObjectID_ptr_String_ptr_String_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<AnimationNodeBlendSpace2D, ObjectID const&,
   StringName const&>(AnimationNodeBlendSpace2D*, char const*, void
   (AnimationNodeBlendSpace2D::*)(ObjectID const&, StringName const&)) */

AnimationNodeBlendSpace2D *
create_custom_callable_function_pointer<AnimationNodeBlendSpace2D,ObjectID_const&,StringName_const&>
          (AnimationNodeBlendSpace2D *param_1,char *param_2,
          _func_void_ObjectID_ptr_StringName_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC4;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011de88;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_ObjectID_ptr_StringName_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* AnimationNodeBlendSpace2D::_validate_propertyv(PropertyInfo&) const */

void __thiscall
AnimationNodeBlendSpace2D::_validate_propertyv
          (AnimationNodeBlendSpace2D *this,PropertyInfo *param_1)

{
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_validate_property) {
    AnimationNode::_validate_property((PropertyInfo *)this);
  }
  _validate_property(this,param_1);
  return;
}



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x10cc96);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC69;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar7 = 0;
      lVar6 = -2;
    }
    else {
      lVar7 = local_50[-1];
      lVar6 = lVar7 + -2;
      if (-1 < lVar6) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar6));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_0010cd5d;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_60 = 0;
  local_48 = &_LC69;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  lVar7 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
LAB_0010cd5d:
  plVar1 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar5 = local_50 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar7 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar7 != 0) {
        lVar6 = 0;
        plVar5 = plVar1;
        do {
          if (*plVar5 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar5 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar3 = *plVar5;
              *plVar5 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar7 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<AnimationNodeBlendSpace2D::BlendMode, void>::get_class_info() */

GetTypeInfo<AnimationNodeBlendSpace2D::BlendMode,void> * __thiscall
GetTypeInfo<AnimationNodeBlendSpace2D::BlendMode,void>::get_class_info
          (GetTypeInfo<AnimationNodeBlendSpace2D::BlendMode,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "AnimationNodeBlendSpace2D::BlendMode";
  local_40 = 0x24;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AnimationNodeBlendSpace2D::BlendMode>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<AnimationNodeBlendSpace2D::BlendMode>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 0x24;
  local_38 = "AnimationNodeBlendSpace2D::BlendMode";
  String::parse_latin1((StrRange *)&local_40);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_38,(String *)&local_40);
  StringName::StringName((StringName *)&local_48,(String *)&local_38,false);
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 0x10006;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  pcVar3 = local_38;
  if (local_38 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2D, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void>::call
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010d36f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010d36f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010d348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010d431;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010d36f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC75,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010d431:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2D, void, ObjectID const&, StringName
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,StringName_const&>::call
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,StringName_const&>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar8 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 3) {
          if (param_2 == 2) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x15);
            uVar4 = _LC76;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_StringName((Variant *)&local_60);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
            uVar4 = _LC77;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            local_58 = (char *)Variant::operator_cast_to_ObjectID(*param_1);
            (*pcVar8)((long *)(lVar1 + lVar2),(String *)&local_58,(Variant *)&local_60);
            if ((StringName::configured != '\0') && (local_60 != 0)) {
              StringName::unref();
            }
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 2;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
        }
        goto LAB_0010d505;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  local_60 = 0;
  local_58 = "\', can\'t call method.";
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  uitos((ulong)local_70);
  operator+((char *)local_68,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_58,(String *)local_68);
  _err_print_error(&_LC75,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0010d505:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2D, void, ObjectID const&, String const&,
   String const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,String_const&,String_const&>
::call(CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,String_const&,String_const&>
       *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_70 [8];
  Variant local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar8 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 4) {
          if (param_2 == 3) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],4);
            uVar4 = _LC78;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String(local_68);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],4);
            uVar4 = _LC79;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_60);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
            uVar4 = _LC77;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            local_58 = (char *)Variant::operator_cast_to_ObjectID(*param_1);
            (*pcVar8)((long *)(lVar1 + lVar2),(String *)&local_58,(Variant *)&local_60,local_68);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 3;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
        }
        goto LAB_0010d7d4;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  local_60 = 0;
  local_58 = "\', can\'t call method.";
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  uitos((ulong)local_70);
  operator+((char *)local_68,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_58,(String *)local_68);
  _err_print_error(&_LC75,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0010d7d4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0010da5b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC4;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010db50:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010db50;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0010da5b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0010dc9b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC4;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010dd90:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010dd90;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0010dc9b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Vector<int> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Vector<int>const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0010dedb;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC4;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1e);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010dfd0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010dfd0;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0010dedb:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
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
LAB_0010e24d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010e24d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0010e26e;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0010e26e:
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
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
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
  if (local_90 == 0) {
LAB_0010e615:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010e615;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010e637;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010e637:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
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
  plVar1 = *(long **)param_1;
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
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
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



/* AnimationNode::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall AnimationNode::_get_property_listv(AnimationNode *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AnimationNode";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AnimationNode";
  local_98 = 0;
  local_70 = 0xd;
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
LAB_0010ea05:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010ea05;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010ea27;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010ea27:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
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
  plVar1 = *(long **)param_1;
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
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AnimationNode",false);
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



/* AnimationRootNode::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
AnimationRootNode::_get_property_listv(AnimationRootNode *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    AnimationNode::_get_property_listv((AnimationNode *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AnimationRootNode";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AnimationRootNode";
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
LAB_0010edf5:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010edf5;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010ee17;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010ee17:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
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
  plVar1 = *(long **)param_1;
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
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AnimationRootNode",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AnimationNode::_get_property_listv((AnimationNode *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
AnimationNodeBlendSpace2D::_get_property_listv
          (AnimationNodeBlendSpace2D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a0;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    AnimationRootNode::_get_property_listv((AnimationRootNode *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AnimationNodeBlendSpace2D";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AnimationNodeBlendSpace2D";
  local_98 = 0;
  local_70 = 0x19;
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
LAB_0010f1ed:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010f1ed;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010f20f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010f20f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar4 + 4),local_a0);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
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
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AnimationNodeBlendSpace2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AnimationRootNode::_get_property_listv((AnimationRootNode *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<AnimationNodeBlendSpace2D::BlendMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<AnimationNodeBlendSpace2D::BlendMode>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_90;
  details local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x24;
    local_68 = "AnimationNodeBlendSpace2D::BlendMode";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_88,(String *)&local_80);
    StringName::StringName((StringName *)&local_90,(String *)local_88,false);
    local_60 = (undefined1  [16])0x0;
    local_78 = 0;
    local_70 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar4 = local_68._0_4_;
    if (*(long *)(puVar4 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8 *)(puVar4 + 2) = uVar2;
    }
    if (*(long *)(puVar4 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar4 + 4) = uVar2;
    }
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AnimationNodeBlendSpace2D, Ref<AnimationRootNode> const&, Vector2
   const&, int>(void (AnimationNodeBlendSpace2D::*)(Ref<AnimationRootNode> const&, Vector2 const&,
   int)) */

MethodBind *
create_method_bind<AnimationNodeBlendSpace2D,Ref<AnimationRootNode>const&,Vector2_const&,int>
          (_func_void_Ref_ptr_Vector2_ptr_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Ref_ptr_Vector2_ptr_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011df18;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "AnimationNodeBlendSpace2D";
  local_30 = 0x19;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AnimationNodeBlendSpace2D, int, Vector2 const&>(void
   (AnimationNodeBlendSpace2D::*)(int, Vector2 const&)) */

MethodBind *
create_method_bind<AnimationNodeBlendSpace2D,int,Vector2_const&>
          (_func_void_int_Vector2_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_int_Vector2_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011df78;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AnimationNodeBlendSpace2D";
  local_30 = 0x19;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AnimationNodeBlendSpace2D, Vector2, int>(Vector2
   (AnimationNodeBlendSpace2D::*)(int) const) */

MethodBind * create_method_bind<AnimationNodeBlendSpace2D,Vector2,int>(_func_Vector2_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Vector2_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011dfd8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AnimationNodeBlendSpace2D";
  local_30 = 0x19;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AnimationNodeBlendSpace2D, int, Ref<AnimationRootNode>
   const&>(void (AnimationNodeBlendSpace2D::*)(int, Ref<AnimationRootNode> const&)) */

MethodBind *
create_method_bind<AnimationNodeBlendSpace2D,int,Ref<AnimationRootNode>const&>
          (_func_void_int_Ref_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_int_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e038;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AnimationNodeBlendSpace2D";
  local_30 = 0x19;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AnimationNodeBlendSpace2D, Ref<AnimationRootNode>,
   int>(Ref<AnimationRootNode> (AnimationNodeBlendSpace2D::*)(int) const) */

MethodBind *
create_method_bind<AnimationNodeBlendSpace2D,Ref<AnimationRootNode>,int>(_func_Ref_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e098;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AnimationNodeBlendSpace2D";
  local_30 = 0x19;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AnimationNodeBlendSpace2D, int>(void
   (AnimationNodeBlendSpace2D::*)(int)) */

MethodBind * create_method_bind<AnimationNodeBlendSpace2D,int>(_func_void_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e0f8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AnimationNodeBlendSpace2D";
  local_30 = 0x19;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AnimationNodeBlendSpace2D, int>(int
   (AnimationNodeBlendSpace2D::*)() const) */

MethodBind * create_method_bind<AnimationNodeBlendSpace2D,int>(_func_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e158;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AnimationNodeBlendSpace2D";
  local_30 = 0x19;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AnimationNodeBlendSpace2D, int, int, int, int>(void
   (AnimationNodeBlendSpace2D::*)(int, int, int, int)) */

MethodBind *
create_method_bind<AnimationNodeBlendSpace2D,int,int,int,int>(_func_void_int_int_int_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_int_int_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e1b8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "AnimationNodeBlendSpace2D";
  local_30 = 0x19;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AnimationNodeBlendSpace2D, int, int, int>(int
   (AnimationNodeBlendSpace2D::*)(int, int)) */

MethodBind * create_method_bind<AnimationNodeBlendSpace2D,int,int,int>(_func_int_int_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_int_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e218;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AnimationNodeBlendSpace2D";
  local_30 = 0x19;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AnimationNodeBlendSpace2D, Vector2 const&>(void
   (AnimationNodeBlendSpace2D::*)(Vector2 const&)) */

MethodBind *
create_method_bind<AnimationNodeBlendSpace2D,Vector2_const&>(_func_void_Vector2_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Vector2_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e278;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AnimationNodeBlendSpace2D";
  local_30 = 0x19;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AnimationNodeBlendSpace2D, Vector2>(Vector2
   (AnimationNodeBlendSpace2D::*)() const) */

MethodBind * create_method_bind<AnimationNodeBlendSpace2D,Vector2>(_func_Vector2 *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Vector2 **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e2d8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AnimationNodeBlendSpace2D";
  local_30 = 0x19;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AnimationNodeBlendSpace2D, String const&>(void
   (AnimationNodeBlendSpace2D::*)(String const&)) */

MethodBind *
create_method_bind<AnimationNodeBlendSpace2D,String_const&>(_func_void_String_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e338;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AnimationNodeBlendSpace2D";
  local_30 = 0x19;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AnimationNodeBlendSpace2D, String>(String
   (AnimationNodeBlendSpace2D::*)() const) */

MethodBind * create_method_bind<AnimationNodeBlendSpace2D,String>(_func_String *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e398;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AnimationNodeBlendSpace2D";
  local_30 = 0x19;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AnimationNodeBlendSpace2D, Vector<int> const&>(void
   (AnimationNodeBlendSpace2D::*)(Vector<int> const&)) */

MethodBind *
create_method_bind<AnimationNodeBlendSpace2D,Vector<int>const&>(_func_void_Vector_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Vector_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e3f8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AnimationNodeBlendSpace2D";
  local_30 = 0x19;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AnimationNodeBlendSpace2D, Vector<int>>(Vector<int>
   (AnimationNodeBlendSpace2D::*)() const) */

MethodBind * create_method_bind<AnimationNodeBlendSpace2D,Vector<int>>(_func_Vector *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Vector **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e458;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AnimationNodeBlendSpace2D";
  local_30 = 0x19;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AnimationNodeBlendSpace2D, bool>(void
   (AnimationNodeBlendSpace2D::*)(bool)) */

MethodBind * create_method_bind<AnimationNodeBlendSpace2D,bool>(_func_void_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e4b8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AnimationNodeBlendSpace2D";
  local_30 = 0x19;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AnimationNodeBlendSpace2D, bool>(bool
   (AnimationNodeBlendSpace2D::*)() const) */

MethodBind * create_method_bind<AnimationNodeBlendSpace2D,bool>(_func_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e518;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AnimationNodeBlendSpace2D";
  local_30 = 0x19;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AnimationNodeBlendSpace2D,
   AnimationNodeBlendSpace2D::BlendMode>(void
   (AnimationNodeBlendSpace2D::*)(AnimationNodeBlendSpace2D::BlendMode)) */

MethodBind *
create_method_bind<AnimationNodeBlendSpace2D,AnimationNodeBlendSpace2D::BlendMode>
          (_func_void_BlendMode *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_BlendMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e578;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AnimationNodeBlendSpace2D";
  local_30 = 0x19;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<AnimationNodeBlendSpace2D,
   AnimationNodeBlendSpace2D::BlendMode>(AnimationNodeBlendSpace2D::BlendMode
   (AnimationNodeBlendSpace2D::*)() const) */

MethodBind *
create_method_bind<AnimationNodeBlendSpace2D,AnimationNodeBlendSpace2D::BlendMode>
          (_func_BlendMode *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_BlendMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e5d8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AnimationNodeBlendSpace2D";
  local_30 = 0x19;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector2>::_realloc(long) */

undefined8 __thiscall CowData<Vector2>::_realloc(CowData<Vector2> *this,long param_1)

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
/* Error CowData<Vector2>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
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
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
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
    lVar3 = lVar8 * 8;
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
LAB_00110fb0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_00110fb0;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
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
  if (lVar7 == lVar3) {
LAB_00110f1c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00110eb1;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_00110f1c;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_00110eb1:
  puVar9[-1] = param_1;
  return 0;
}



/* Vector<Vector2>::push_back(Vector2) [clone .isra.0] */

void __thiscall Vector<Vector2>::push_back(undefined8 param_1,Vector<Vector2> *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(this + 8));
        *(undefined8 *)(*(long *)(this + 8) + lVar3 * 8) = param_1;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* CowData<float>::_unref() */

void __thiscall CowData<float>::_unref(CowData<float> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* CowData<StringName>::_unref() */

void __thiscall CowData<StringName>::_unref(CowData<StringName> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
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
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
  CowData<StringName>::_unref((CowData<StringName> *)(this + 0x10));
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* AnimationNode::~AnimationNode() */

void __thiscall AnimationNode::~AnimationNode(AnimationNode *this)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  bVar6 = StringName::configured != '\0';
  *(code **)this = Resource::~Resource;
  if (bVar6) {
    if (*(long *)(this + 0x388) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111428;
    }
    if (*(long *)(this + 0x370) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111428;
    }
    if (*(long *)(this + 0x358) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111428;
    }
    if (*(long *)(this + 0x340) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111428;
    }
    if (*(long *)(this + 0x328) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111428;
    }
    if (*(long *)(this + 0x310) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111428;
    }
    if (*(long *)(this + 0x2f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111428;
    }
    if (*(long *)(this + 0x2e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111428;
    }
    if (*(long *)(this + 0x2d8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111428;
    }
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111428;
    }
    if (*(long *)(this + 0x2c8) != 0) {
      StringName::unref();
    }
  }
LAB_00111428:
  pvVar3 = *(void **)(this + 0x2b0);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x2c4) != 0) {
      lVar4 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)(lVar4 * 0x10 + (long)pvVar3) != 0)) {
          StringName::unref();
          pvVar3 = *(void **)(this + 0x2b0);
        }
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < *(uint *)(this + 0x2c4));
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x2b8),false);
  }
  if (*(void **)(this + 0x2a0) != (void *)0x0) {
    if (*(int *)(this + 0x298) != 0) {
      *(undefined4 *)(this + 0x298) = 0;
    }
    Memory::free_static(*(void **)(this + 0x2a0),false);
  }
  CowData<StringName>::_unref((CowData<StringName> *)(this + 0x290));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x278) != 0)) {
    StringName::unref();
  }
  pvVar3 = *(void **)(this + 600);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x26c) != 0) {
      lVar4 = 0;
      do {
        lVar5 = lVar4 + 1;
        NodePath::~NodePath((NodePath *)((long)pvVar3 + lVar4 * 0x10));
        pvVar3 = *(void **)(this + 600);
        lVar4 = lVar5;
      } while ((uint)lVar5 < *(uint *)(this + 0x26c));
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x260),false);
  }
  pvVar3 = *(void **)(this + 0x250);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x248) != 0) {
      lVar4 = 0;
      do {
        plVar2 = (long *)((long)pvVar3 + lVar4 * 8);
        if (*plVar2 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar5 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
          pvVar3 = *(void **)(this + 0x250);
        }
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < *(uint *)(this + 0x248));
      *(undefined4 *)(this + 0x248) = 0;
      if (pvVar3 == (void *)0x0) goto LAB_0011158b;
    }
    Memory::free_static(pvVar3,false);
    Resource::~Resource((Resource *)this);
    return;
  }
LAB_0011158b:
  Resource::~Resource((Resource *)this);
  return;
}



/* AnimationNode::~AnimationNode() */

void __thiscall AnimationNode::~AnimationNode(AnimationNode *this)

{
  ~AnimationNode(this);
  operator_delete(this,0x3a0);
  return;
}



/* AnimationNodeBlendSpace2D::_initialize_classv() */

void AnimationNodeBlendSpace2D::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (AnimationRootNode::initialize_class()::initialized == '\0') {
      if (AnimationNode::initialize_class()::initialized == '\0') {
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
            if ((code *)PTR__bind_methods_00124010 != RefCounted::_bind_methods) {
              RefCounted::_bind_methods();
            }
            RefCounted::initialize_class()::initialized = '\x01';
          }
          local_68 = 0;
          local_58 = "RefCounted";
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
          lVar2 = local_70;
          if (local_70 != 0) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          lVar2 = local_68;
          if (local_68 != 0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          Resource::_bind_methods();
          Resource::initialize_class()::initialized = '\x01';
        }
        local_58 = "Resource";
        local_68 = 0;
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "AnimationNode";
        local_70 = 0;
        local_50 = 0xd;
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
        if ((code *)PTR__bind_methods_00124008 != Resource::_bind_methods) {
          AnimationNode::_bind_methods();
        }
        AnimationNode::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "AnimationNode";
      local_50 = 0xd;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "AnimationRootNode";
      local_70 = 0;
      local_50 = 0x11;
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
      AnimationRootNode::initialize_class()::initialized = '\x01';
    }
    local_58 = "AnimationRootNode";
    local_68 = 0;
    local_50 = 0x11;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "AnimationNodeBlendSpace2D";
    local_70 = 0;
    local_50 = 0x19;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

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



/* CowData<Delaunay2D::Triangle>::_realloc(long) */

undefined8 __thiscall
CowData<Delaunay2D::Triangle>::_realloc(CowData<Delaunay2D::Triangle> *this,long param_1)

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
/* Error CowData<Delaunay2D::Triangle>::resize<false>(long) */

undefined8 __thiscall
CowData<Delaunay2D::Triangle>::resize<false>(CowData<Delaunay2D::Triangle> *this,long param_1)

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
  undefined8 *puVar11;
  
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
    lVar10 = 0;
    lVar3 = 0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
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
    lVar3 = lVar10 * 0x18;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 == 0) {
LAB_00111ec0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 0x18 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar9 = uVar4 + 1;
  if (lVar9 == 0) goto LAB_00111ec0;
  if (param_1 <= lVar10) {
    if ((lVar9 != lVar3) && (uVar7 = _realloc(this,lVar9), (int)uVar7 != 0)) {
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
  if (lVar9 == lVar3) {
LAB_00111e2c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar8[-1];
    if (param_1 <= lVar3) goto LAB_00111db9;
  }
  else {
    if (lVar10 != 0) {
      uVar7 = _realloc(this,lVar9);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_00111e2c;
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
  puVar11 = puVar8 + param_1 * 3;
  puVar5 = puVar8 + lVar3 * 3;
  if (((int)puVar11 - (int)puVar5 & 8U) != 0) {
    *(undefined8 *)((long)puVar5 + 0xc) = 0;
    puVar5 = puVar5 + 3;
    if (puVar5 == puVar11) goto LAB_00111db9;
  }
  do {
    *(undefined8 *)((long)puVar5 + 0xc) = 0;
    puVar6 = puVar5 + 6;
    *(undefined8 *)((long)puVar5 + 0x24) = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar11);
LAB_00111db9:
  puVar8[-1] = param_1;
  return 0;
}



/* Vector<Delaunay2D::Triangle>::push_back(Delaunay2D::Triangle) [clone .isra.0] */

void Vector<Delaunay2D::Triangle>::push_back(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (*(long *)(param_1 + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 8) + -8) + 1;
  }
  iVar2 = CowData<Delaunay2D::Triangle>::resize<false>
                    ((CowData<Delaunay2D::Triangle> *)(param_1 + 8),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<Delaunay2D::Triangle>::_copy_on_write
                  ((CowData<Delaunay2D::Triangle> *)(param_1 + 8));
        puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar4 * 0x18);
        *puVar1 = in_stack_00000008;
        puVar1[1] = in_stack_00000010;
        puVar1[2] = in_stack_00000018;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* CowData<Delaunay2D::Edge>::_realloc(long) */

undefined8 __thiscall
CowData<Delaunay2D::Edge>::_realloc(CowData<Delaunay2D::Edge> *this,long param_1)

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
/* Error CowData<Delaunay2D::Edge>::resize<false>(long) */

undefined8 __thiscall
CowData<Delaunay2D::Edge>::resize<false>(CowData<Delaunay2D::Edge> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
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
    lVar6 = 0;
    lVar3 = 0;
  }
  else {
    lVar6 = *(long *)(lVar3 + -8);
    if (param_1 == lVar6) {
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
    lVar3 = lVar6 * 0xc;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  lVar10 = param_1 * 0xc;
  if (lVar10 == 0) {
LAB_00112310:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = lVar10 - 1U >> 1 | lVar10 - 1U;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar9 = uVar4 + 1;
  if (lVar9 == 0) goto LAB_00112310;
  if (param_1 <= lVar6) {
    if ((lVar9 != lVar3) && (uVar7 = _realloc(this,lVar9), (int)uVar7 != 0)) {
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
  if (lVar9 == lVar3) {
LAB_0011227c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar8[-1];
    if (param_1 <= lVar3) goto LAB_00112209;
  }
  else {
    if (lVar6 != 0) {
      uVar7 = _realloc(this,lVar9);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_0011227c;
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
  lVar10 = lVar10 + (long)puVar8;
  lVar3 = (long)puVar8 + lVar3 * 0xc;
  lVar6 = lVar3;
  if (((int)lVar10 - (int)lVar3 & 4U) != 0) {
    *(undefined1 *)(lVar3 + 8) = 0;
    lVar6 = lVar3 + 0xc;
    if (lVar3 + 0xc == lVar10) goto LAB_00112209;
  }
  do {
    *(undefined1 *)(lVar6 + 8) = 0;
    lVar3 = lVar6 + 0x18;
    *(undefined1 *)(lVar6 + 0x14) = 0;
    lVar6 = lVar3;
  } while (lVar3 != lVar10);
LAB_00112209:
  puVar8[-1] = param_1;
  return 0;
}



/* Vector<Delaunay2D::Edge>::push_back(Delaunay2D::Edge) [clone .isra.0] */

void Vector<Delaunay2D::Edge>::push_back(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 8) + -8) + 1;
  }
  iVar2 = CowData<Delaunay2D::Edge>::resize<false>((CowData<Delaunay2D::Edge> *)(param_1 + 8),lVar3)
  ;
  if (iVar2 == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<Delaunay2D::Edge>::_copy_on_write((CowData<Delaunay2D::Edge> *)(param_1 + 8));
        puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar4 * 0xc);
        *puVar1 = param_2;
        *(undefined1 *)(puVar1 + 1) = param_3;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* Delaunay2D::triangulate(Vector<Vector2> const&) */

Delaunay2D * __thiscall Delaunay2D::triangulate(Delaunay2D *this,Vector *param_1)

{
  long *plVar1;
  int *piVar2;
  Vector2 *pVVar3;
  float fVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long in_FS_OFFSET;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  ulong local_e8;
  Vector local_a8 [8];
  float *local_a0;
  undefined1 local_98 [8];
  long local_90;
  undefined8 local_88;
  undefined1 local_80;
  Delaunay2D local_78 [32];
  Delaunay2D local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = (float *)0x0;
  if (*(long *)(param_1 + 8) == 0) {
    *(undefined8 *)(this + 8) = 0;
    goto LAB_00112766;
  }
  plVar1 = (long *)(*(long *)(param_1 + 8) + -0x10);
  do {
    lVar16 = *plVar1;
    if (lVar16 == 0) {
      pfVar14 = *(float **)(param_1 + 8);
      goto LAB_0011258e;
    }
    LOCK();
    lVar18 = *plVar1;
    bVar24 = lVar16 == lVar18;
    if (bVar24) {
      *plVar1 = lVar16 + 1;
      lVar18 = lVar16;
    }
    UNLOCK();
  } while (!bVar24);
  pfVar14 = *(float **)(param_1 + 8);
  if (lVar18 != -1) {
    local_a0 = pfVar14;
  }
LAB_0011258e:
  *(undefined8 *)(this + 8) = 0;
  if (pfVar14 != (float *)0x0) {
    uVar5 = *(ulong *)(pfVar14 + -2);
    iVar15 = (int)uVar5;
    if (2 < iVar15) {
      if ((long)uVar5 < 1) {
        uVar21 = 0;
        uVar19 = uVar5;
      }
      else {
        fVar27 = 0.0;
        fVar30 = *pfVar14;
        fVar28 = pfVar14[1];
        fVar25 = 0.0;
        uVar21 = 1;
        while (pfVar14 != (float *)0x0) {
          uVar19 = *(ulong *)(pfVar14 + -2);
          if ((long)uVar19 <= (long)uVar21) goto LAB_001127c9;
          lVar16 = uVar21 * 2;
          if ((fVar25 < 0.0) || (fVar27 < 0.0)) {
            _err_print_error("expand_to","./core/math/rect2.h",0x100,
                             "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                             ,0,0);
          }
          fVar29 = pfVar14[lVar16];
          fVar25 = fVar25 + fVar30;
          uVar21 = uVar21 + 1;
          fVar4 = (pfVar14 + lVar16)[1];
          fVar26 = fVar29;
          if (fVar30 <= fVar29) {
            fVar26 = fVar30;
          }
          fVar30 = fVar26;
          if (fVar29 <= fVar25) {
            fVar29 = fVar25;
          }
          fVar26 = fVar4;
          if (fVar4 <= fVar27 + fVar28) {
            fVar26 = fVar27 + fVar28;
          }
          if (fVar28 <= fVar4) {
            fVar4 = fVar28;
          }
          fVar28 = fVar4;
          fVar25 = fVar29 - fVar30;
          fVar27 = fVar26 - fVar28;
          if (uVar21 == (ulong)(iVar15 - 2) + 2) {
            fVar29 = fVar25;
            if (fVar25 <= fVar27) {
              fVar29 = fVar27;
            }
            fVar28 = fVar28 + fVar27 * _LC144;
            fVar30 = fVar25 * _LC144 + fVar30;
            fVar27 = fVar28 - fVar29;
            fVar29 = _LC145 * fVar29;
            Vector<Vector2>::push_back((Vector<Vector2> *)CONCAT44(fVar27,fVar30 - fVar29),local_a8)
            ;
            Vector<Vector2>::push_back((Vector<Vector2> *)CONCAT44(fVar29 + fVar28,fVar30),local_a8)
            ;
            Vector<Vector2>::push_back((Vector<Vector2> *)CONCAT44(fVar27,fVar29 + fVar30),local_a8)
            ;
            create_triangle(local_78,local_a8,iVar15,iVar15 + 1,iVar15 + 2);
            Vector<Delaunay2D::Triangle>::push_back(this);
            local_e8 = 0;
            goto LAB_00112938;
          }
          pfVar14 = *(float **)(param_1 + 8);
        }
        uVar19 = 0;
      }
      goto LAB_001127c9;
    }
  }
  goto LAB_00112750;
LAB_00112cc0:
  uVar19 = 0;
LAB_001127c9:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar21,uVar19,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
LAB_00112938:
  do {
    pfVar14 = local_a0;
    local_90 = 0;
    if ((*(long *)(this + 8) != 0) &&
       (uVar20 = (int)*(undefined8 *)(*(long *)(this + 8) + -8) - 1, -1 < (int)uVar20)) {
      if (local_a0 == (float *)0x0) {
        uVar19 = 0;
        uVar21 = local_e8;
        goto LAB_001127c9;
      }
      uVar22 = (ulong)uVar20;
      pVVar3 = (Vector2 *)(local_a0 + local_e8 * 2);
      lVar16 = uVar22 * 0x18;
      do {
        uVar19 = *(ulong *)(pfVar14 + -2);
        uVar21 = local_e8;
        if ((long)uVar19 <= (long)local_e8) goto LAB_001127c9;
        uVar21 = uVar22;
        if (*(long *)(this + 8) == 0) goto LAB_00112cc0;
        uVar19 = *(ulong *)(*(long *)(this + 8) + -8);
        if ((long)uVar19 <= (long)uVar22) goto LAB_001127c9;
        fVar30 = (float)Vector2::distance_squared_to(pVVar3);
        lVar18 = *(long *)(this + 8);
        if (lVar18 == 0) goto LAB_00112cc0;
        uVar19 = *(ulong *)(lVar18 + -8);
        if ((long)uVar19 <= (long)uVar22) goto LAB_001127c9;
        piVar10 = (int *)(lVar18 + lVar16);
        if (fVar30 < (float)piVar10[5]) {
          iVar11 = piVar10[1];
          iVar8 = *piVar10;
          local_80 = 0;
          iVar13 = iVar11;
          if (iVar11 < iVar8) {
            iVar13 = iVar8;
            iVar8 = iVar11;
          }
          local_88 = CONCAT44(iVar13,iVar8);
          Vector<Delaunay2D::Edge>::push_back(local_98,local_88,0);
          lVar18 = *(long *)(this + 8);
          if (lVar18 == 0) goto LAB_00112cc0;
          uVar19 = *(ulong *)(lVar18 + -8);
          if ((long)uVar19 <= (long)uVar22) goto LAB_001127c9;
          local_80 = 0;
          iVar11 = *(int *)(lVar18 + lVar16 + 8);
          iVar8 = *(int *)(lVar18 + lVar16 + 4);
          iVar13 = iVar11;
          if (iVar11 < iVar8) {
            iVar13 = iVar8;
            iVar8 = iVar11;
          }
          local_88 = CONCAT44(iVar13,iVar8);
          Vector<Delaunay2D::Edge>::push_back(local_98,local_88,0);
          lVar18 = *(long *)(this + 8);
          if (lVar18 == 0) goto LAB_00112cc0;
          uVar19 = *(ulong *)(lVar18 + -8);
          if ((long)uVar19 <= (long)uVar22) goto LAB_001127c9;
          local_80 = 0;
          iVar11 = ((int *)(lVar18 + lVar16))[2];
          iVar8 = *(int *)(lVar18 + lVar16);
          local_88 = CONCAT44(iVar11,iVar8);
          if (iVar11 <= iVar8) {
            local_88 = CONCAT44(iVar8,iVar11);
          }
          Vector<Delaunay2D::Edge>::push_back(local_98,local_88,0);
          if (*(long *)(this + 8) == 0) {
            lVar18 = 0;
          }
          else {
            lVar18 = *(long *)(*(long *)(this + 8) + -8);
            if ((long)uVar22 < lVar18) {
              CowData<Delaunay2D::Triangle>::_copy_on_write
                        ((CowData<Delaunay2D::Triangle> *)(this + 8));
              lVar18 = *(long *)(this + 8);
              if (lVar18 == 0) {
                lVar12 = -1;
              }
              else {
                lVar12 = *(long *)(lVar18 + -8) + -1;
                if ((long)uVar22 < lVar12) {
                  memmove((void *)(lVar18 + lVar16),(void *)(lVar18 + 0x18 + lVar16),
                          (*(long *)(lVar18 + -8) - uVar22) * 0x18 - 0x18);
                }
              }
              CowData<Delaunay2D::Triangle>::resize<false>
                        ((CowData<Delaunay2D::Triangle> *)(this + 8),lVar12);
              goto LAB_00112b40;
            }
          }
          _err_print_index_error
                    ("remove_at","./core/templates/cowdata.h",0xe4,uVar22,lVar18,"p_index","size()",
                     "",false,false);
        }
LAB_00112b40:
        uVar20 = uVar20 - 1;
        lVar16 = lVar16 + -0x18;
        uVar22 = uVar22 - 1;
      } while (uVar20 != 0xffffffff);
      if (local_90 != 0) {
        lVar16 = local_90;
        uVar21 = 0;
        do {
          while( true ) {
            lVar18 = *(long *)(lVar16 + -8);
            if (lVar18 <= (long)uVar21) {
              LOCK();
              plVar1 = (long *)(lVar16 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_90 + -0x10),false);
              }
              goto LAB_001126bb;
            }
            uVar22 = uVar21 + 1;
            lVar12 = uVar21 * 0xc;
            piVar10 = (int *)(lVar16 + lVar12);
            if ((char)piVar10[2] != '\0') break;
            if ((long)uVar22 < lVar18) {
              lVar23 = (long)(int)uVar22;
              lVar17 = lVar23 * 0xc;
              do {
                if ((*(int *)(lVar16 + lVar17) == *piVar10) &&
                   (*(int *)(lVar16 + 4 + lVar17) == piVar10[1])) {
                  CowData<Delaunay2D::Edge>::_copy_on_write((CowData<Delaunay2D::Edge> *)&local_90);
                  *(undefined1 *)(local_90 + 8 + lVar12) = 1;
                  if (local_90 == 0) {
                    lVar16 = 0;
                  }
                  else {
                    lVar16 = *(long *)(local_90 + -8);
                    if (lVar23 < lVar16) {
                      CowData<Delaunay2D::Edge>::_copy_on_write
                                ((CowData<Delaunay2D::Edge> *)&local_90);
                      *(undefined1 *)(local_90 + 8 + lVar17) = 1;
                      break;
                    }
                  }
                  _err_print_index_error
                            ("operator[]","./core/templates/vector.h",0x38,lVar23,lVar16,"p_index",
                             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar6 = (code *)invalidInstructionException();
                  (*pcVar6)();
                }
                lVar23 = lVar23 + 1;
                lVar17 = lVar17 + 0xc;
              } while (lVar18 != lVar23);
            }
            lVar16 = local_90;
            if (local_90 == 0) goto LAB_00112cc0;
            uVar19 = *(ulong *)(local_90 + -8);
            if ((long)uVar19 <= (long)uVar21) goto LAB_001127c9;
            piVar10 = (int *)(local_90 + lVar12);
            uVar21 = uVar22;
            if ((char)piVar10[2] == '\0') {
              create_triangle(local_58,local_a8,*piVar10,piVar10[1],(int)local_e8);
              Vector<Delaunay2D::Triangle>::push_back(this);
            }
          }
          lVar16 = local_90;
          uVar21 = uVar22;
        } while (local_90 != 0);
      }
    }
LAB_001126bb:
    local_e8 = local_e8 + 1;
  } while (local_e8 != (uVar5 & 0xffffffff));
  CowData<Delaunay2D::Triangle>::_copy_on_write((CowData<Delaunay2D::Triangle> *)(this + 8));
  piVar10 = *(int **)(this + 8);
  if ((piVar10 == (int *)0x0) || (lVar16 = *(long *)(piVar10 + -2), lVar16 < 1)) {
    iVar11 = 0;
  }
  else {
    iVar11 = 0;
    piVar9 = piVar10;
    do {
      if (((*piVar9 < iVar15) && (piVar9[1] < iVar15)) && (piVar9[2] < iVar15)) {
        lVar18 = (long)iVar11;
        uVar7 = *(undefined8 *)(piVar9 + 2);
        iVar11 = iVar11 + 1;
        piVar2 = piVar10 + lVar18 * 6;
        *(undefined8 *)piVar2 = *(undefined8 *)piVar9;
        *(undefined8 *)(piVar2 + 2) = uVar7;
        *(undefined8 *)(piVar2 + 4) = *(undefined8 *)(piVar9 + 4);
      }
      piVar9 = piVar9 + 6;
    } while (piVar10 + lVar16 * 6 != piVar9);
  }
  CowData<Delaunay2D::Triangle>::resize<false>
            ((CowData<Delaunay2D::Triangle> *)(this + 8),(long)iVar11);
LAB_00112750:
  if (local_a0 != (float *)0x0) {
    LOCK();
    pfVar14 = local_a0 + -4;
    *(long *)pfVar14 = *(long *)pfVar14 + -1;
    UNLOCK();
    if (*(long *)pfVar14 == 0) {
      Memory::free_static(local_a0 + -4,false);
    }
  }
LAB_00112766:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* CowData<AnimationNodeBlendSpace2D::BlendTriangle>::_realloc(long) */

undefined8 __thiscall
CowData<AnimationNodeBlendSpace2D::BlendTriangle>::_realloc
          (CowData<AnimationNodeBlendSpace2D::BlendTriangle> *this,long param_1)

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
/* Error CowData<AnimationNodeBlendSpace2D::BlendTriangle>::resize<false>(long) */

undefined8 __thiscall
CowData<AnimationNodeBlendSpace2D::BlendTriangle>::resize<false>
          (CowData<AnimationNodeBlendSpace2D::BlendTriangle> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
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
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
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
    lVar3 = lVar8 * 0xc;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0xc == 0) {
LAB_00113130:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 0xc - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_00113130;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
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
  if (lVar7 == lVar3) {
LAB_0011309c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_0011302b;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0011309c;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset((void *)((long)puVar9 + lVar3 * 0xc),0,(param_1 - lVar3) * 0xc);
LAB_0011302b:
  puVar9[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00113328) */
/* WARNING: Removing unreachable block (ram,0x001134bd) */
/* WARNING: Removing unreachable block (ram,0x001134c9) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  Variant *this;
  int iVar1;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<AnimationNodeBlendSpace2D::BlendMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<AnimationNodeBlendSpace2D::BlendMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001136c0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_001136c0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AnimationNodeBlendSpace2D::BlendMode>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<AnimationNodeBlendSpace2D::BlendMode>::validated_call
          (MethodBindTRC<AnimationNodeBlendSpace2D::BlendMode> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00113964;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_00113964:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AnimationNodeBlendSpace2D::BlendMode>::ptrcall(Object*, void const**, void*) const
    */

void __thiscall
MethodBindTRC<AnimationNodeBlendSpace2D::BlendMode>::ptrcall
          (MethodBindTRC<AnimationNodeBlendSpace2D::BlendMode> *this,Object *param_1,void **param_2,
          void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00113b23;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_00113b23:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<AnimationNodeBlendSpace2D::BlendMode>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<AnimationNodeBlendSpace2D::BlendMode>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00113e61;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00113cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00113e61:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<AnimationNodeBlendSpace2D::BlendMode>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<AnimationNodeBlendSpace2D::BlendMode>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00114041;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00113ecb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00114041:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  bool bVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00114110;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      bVar2 = (bool)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,bVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_00114110:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool>::validated_call
          (MethodBindTRC<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00114322;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_00114322:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001144d1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar1;
LAB_001144d1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00114811;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011469d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00114811:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001149f9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00114882. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_001149f9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<int>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector<int>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  Variant *pVVar3;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  long local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00114b00;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar3)((Vector *)&local_58);
      Variant::Variant((Variant *)local_48,(Vector *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      lVar2 = local_50;
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
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
LAB_00114b00:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<int>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector<int>>::validated_call
          (MethodBindTRC<Vector<int>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x113518;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00114d6b;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<int>::_ref((CowData<int> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_00114d6b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<int>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector<int>>::ptrcall
          (MethodBindTRC<Vector<int>> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x113518;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00114f67;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<int>::_ref((CowData<int> *)((long)param_3 + 8),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_00114f67:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<int> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector<int>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001152a9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00115131. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(long *)(*(long *)param_3 + 8) + 0x10);
    return;
  }
LAB_001152a9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<int> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector<int>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00115481;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00115309. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00115481:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00115560;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)((CowData<char32_t> *)&local_58);
      Variant::Variant((Variant *)local_48,(String *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
LAB_00115560:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String>::validated_call
          (MethodBindTRC<String> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant **ppVVar1;
  Variant **ppVVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x113518;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001157c1;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  ppVVar2 = local_48;
  if (local_48 != (Variant **)0x0) {
    LOCK();
    ppVVar1 = local_48 + -2;
    *ppVVar1 = *ppVVar1 + -1;
    UNLOCK();
    if (*ppVVar1 == (Variant *)0x0) {
      local_48 = (Variant **)0x0;
      Memory::free_static(ppVVar2 + -2,false);
    }
  }
LAB_001157c1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String>::ptrcall
          (MethodBindTRC<String> *this,Object *param_1,void **param_2,void *param_3)

{
  void **ppvVar1;
  void **ppvVar2;
  code *pcVar3;
  long *plVar4;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x113518;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001159ae;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  ppvVar2 = local_48;
  if (local_48 != (void **)0x0) {
    LOCK();
    ppvVar1 = local_48 + -2;
    *ppvVar1 = (void *)((long)*ppvVar1 + -1);
    UNLOCK();
    if (*ppvVar1 == (void *)0x0) {
      local_48 = (void **)0x0;
      Memory::free_static(ppvVar2 + -2,false);
    }
  }
LAB_001159ae:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00115ce1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00115b6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00115ce1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00115ec1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00115d49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00115ec1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector2>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_68 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00115fa0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      local_50 = (*(code *)pVVar2)();
      Variant::Variant((Variant *)local_48,(Vector2 *)&local_50);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_00115fa0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector2>::validated_call
          (MethodBindTRC<Vector2> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001161b4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_001161b4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector2>::ptrcall
          (MethodBindTRC<Vector2> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00116363;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar3;
LAB_00116363:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2 const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector2_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001166a1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011652d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_001166a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2 const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector2_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00116881;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116709. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00116881:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int, int, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<int,int,int>::validated_call
          (MethodBindTR<int,int,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001168e1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8),
                    *(undefined4 *)(param_2[1] + 8));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_001168e1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int, int, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<int,int,int>::ptrcall
          (MethodBindTR<int,int,int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00116abe;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2,*param_2[1]);
  *(long *)param_3 = (long)iVar1;
LAB_00116abe:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int, int, int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,int,int,int>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00116e20;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(param_1 + 0x60) + (long)param_2) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116cc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)(*(long *)(param_1 + 0x60) + (long)param_2),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined4 *)(*(long *)(param_3 + 8) + 8),
               *(undefined4 *)(*(long *)(param_3 + 0x10) + 8),
               *(undefined4 *)(*(long *)(param_3 + 0x18) + 8));
    return;
  }
LAB_00116e20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int, int, int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,int,int,int>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00116ff8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(param_1 + 0x60) + (long)param_2) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00116ea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)(*(long *)(param_1 + 0x60) + (long)param_2),**param_3,
               **(undefined4 **)((long)param_3 + 8),**(undefined4 **)((long)param_3 + 0x10),
               **(undefined4 **)((long)param_3 + 0x18));
    return;
  }
LAB_00116ff8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001170c0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_001170c0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int>::validated_call
          (MethodBindTRC<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001172d4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_001172d4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00117483;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar1;
LAB_00117483:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001177c1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011764c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001177c1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001179a1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011782b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_001179a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector2,int>::validated_call
          (MethodBindTRC<Vector2,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001179fa;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_001179fa:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector2,int>::ptrcall
          (MethodBindTRC<Vector2,int> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00117bd9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined8 *)param_3 = uVar3;
LAB_00117bd9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Vector2 const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,Vector2_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00117f2f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00117dd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8);
    return;
  }
LAB_00117f2f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Vector2 const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,Vector2_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00118119;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00117fa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_00118119:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<AnimationRootNode>, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<AnimationRootNode>,int>::ptrcall
          (MethodBindTRC<Ref<AnimationRootNode>,int> *this,Object *param_1,void **param_2,
          void *param_3)

{
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x113518;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001181d9;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_001181d9;
    *(undefined8 *)param_3 = 0;
    goto LAB_00118221;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00118221;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00118221:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_001181d9;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_001181d9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<AnimationRootNode> const&, Vector2 const&, int>::validated_call(Object*, Variant
   const**, Variant*) const */

void MethodBindT<Ref<AnimationRootNode>const&,Vector2_const&,int>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  Object *pOVar6;
  Variant *pVVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar7 = param_2[0x23];
      if (pVVar7 == (Variant *)0x0) {
        pVVar7 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar7 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar7) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x113518;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011851b;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar8 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar8 & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *(long *)((long)param_2 + lVar2) + -1);
  }
  uVar1 = *(undefined4 *)(*(long *)(param_3 + 0x10) + 8);
  lVar3 = *(long *)(param_3 + 8);
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)param_3 + 0x10));
  local_68 = (Object *)0x0;
  pOVar6 = (Object *)Variant::get_validated_object();
  pOVar4 = local_68;
  if (pOVar6 != local_68) {
    if (pOVar6 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_001184d1:
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          cVar5 = predelete_handler(pOVar4);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
    }
    else {
      pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&AnimationRootNode::typeinfo,0);
      if (pOVar4 != pOVar6) {
        local_68 = pOVar6;
        if (pOVar6 != (Object *)0x0) {
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar4 != (Object *)0x0) goto LAB_001184d1;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar8)((long *)((long)param_2 + lVar2),(StringName *)&local_68,lVar3 + 8,uVar1);
  if (local_68 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_68;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_68);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
LAB_0011851b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Ref<AnimationRootNode> const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<int,Ref<AnimationRootNode>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
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
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x113518;
      local_60 = 0x35;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00118859;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)(param_3 + 8) + 0x10));
  local_68 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_68;
  if (pOVar4 != local_68) {
    if (pOVar4 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_00118810:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&AnimationRootNode::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_68 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00118810;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1),*(undefined4 *)(*(long *)param_3 + 8),
            (StringName *)&local_68);
  if (local_68 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_68;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_68);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_00118859:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<AnimationRootNode> const&, Vector2 const&, int>::ptrcall(Object*, void const**,
   void*) const */

void MethodBindT<Ref<AnimationRootNode>const&,Vector2_const&,int>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  Object *pOVar4;
  char cVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar6 = (long *)param_2[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar6 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x113518;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00118b13;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar2) + -1);
  }
  uVar3 = *(undefined8 *)((long)param_3 + 8);
  uVar1 = **(undefined4 **)((long)param_3 + 0x10);
                    /* WARNING: Load size is inaccurate */
  if ((*param_3 == (long *)0x0) || (local_58 = (Object *)**param_3, local_58 == (Object *)0x0)) {
LAB_00118ae8:
    local_58 = (Object *)0x0;
  }
  else {
    cVar5 = RefCounted::init_ref();
    if (cVar5 == '\0') goto LAB_00118ae8;
  }
  (*pcVar7)((long *)((long)param_2 + lVar2),(StringName *)&local_58,uVar3,uVar1);
  if (local_58 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_58;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_58);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
LAB_00118b13:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Ref<AnimationRootNode> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,Ref<AnimationRootNode>const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x113518;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118d68;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*(long **)((long)param_3 + 8) == (long *)0x0) ||
     (local_48 = (Object *)**(long **)((long)param_3 + 8), local_48 == (Object *)0x0)) {
LAB_00118d3d:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00118d3d;
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar5)((long *)((long)param_2 + lVar1),**param_3,(StringName *)&local_48);
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_00118d68:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<int> const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Vector<int>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  long local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001190c0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00119110;
LAB_00119100:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00119110:
        uVar6 = 4;
        goto LAB_001190b5;
      }
      if (in_R8D == 1) goto LAB_00119100;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x1e);
    uVar4 = _LC175;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Vector((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1));
    lVar2 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar9 = (long *)(local_40 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    uVar6 = 3;
LAB_001190b5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001190c0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119410;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00119460;
LAB_00119450:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00119460:
        uVar6 = 4;
        goto LAB_00119405;
      }
      if (in_R8D == 1) goto LAB_00119450;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,4);
    uVar4 = _LC177;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_00119405:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00119410:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2 const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Vector2_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  undefined8 local_38;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119730;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00119780;
LAB_00119770:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00119780:
        uVar6 = 4;
        goto LAB_00119725;
      }
      if (in_R8D == 1) goto LAB_00119770;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,5);
    uVar4 = _LC178;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_38 = Variant::operator_cast_to_Vector2(pVVar10);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),&local_38);
  }
  else {
    uVar6 = 3;
LAB_00119725:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00119730:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector2,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
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
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00119a80;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00119ac0;
LAB_00119ab0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00119ac0:
        uVar7 = 4;
        goto LAB_00119a75;
      }
      if (in_R8D == 1) goto LAB_00119ab0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC77;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    local_50 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,(Vector2 *)&local_50);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_00119a75:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00119a80:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<AnimationRootNode>, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Ref<AnimationRootNode>,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x113518;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00119e40;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00119e80;
LAB_00119e70:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00119e80:
        uVar8 = 4;
        goto LAB_00119e35;
      }
      if (in_R8D == 1) goto LAB_00119e70;
      lVar10 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar10) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar12 = pVVar12 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC77;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar7 = Variant::operator_cast_to_int(pVVar12);
    (*(code *)pVVar13)(&local_58,(Variant *)((long)plVar11 + (long)pVVar1),iVar7);
    Variant::Variant((Variant *)local_48,local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
    if (local_58 != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_58;
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(local_58);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
  }
  else {
    uVar8 = 3;
LAB_00119e35:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_00119e40:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int, int, int>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<int,int,int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  undefined4 in_register_00000014;
  long *plVar14;
  Variant *pVVar15;
  long lVar16;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar17;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  Variant *local_68 [5];
  long local_40;
  
  plVar14 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar14 != (long *)0x0) && (plVar14[1] != 0)) && (*(char *)(plVar14[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar14[1] == 0) {
      plVar12 = (long *)plVar14[0x23];
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)(**(code **)(*plVar14 + 0x40))(plVar14);
      }
    }
    else {
      plVar12 = (long *)(plVar14[1] + 0x20);
    }
    if (local_78 == (char *)*plVar12) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a260;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar17 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar6 = 0;
      lVar16 = 0;
    }
    else {
      lVar16 = *(long *)(pVVar2 + -8);
      iVar6 = (int)lVar16;
    }
    if ((int)(4 - in_R8D) <= iVar6) {
      lVar11 = 0;
      do {
        if ((int)lVar11 < (int)in_R8D) {
          pVVar15 = *(Variant **)(param_4 + lVar11 * 8);
        }
        else {
          uVar13 = iVar6 + -4 + (int)lVar11;
          if (lVar16 <= (int)uVar13) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar13,lVar16,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar15 = pVVar2 + (ulong)uVar13 * 0x18;
        }
        local_68[lVar11] = pVVar15;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 4);
      *in_R9 = 0;
      if (((ulong)pVVar17 & 1) != 0) {
        pVVar17 = *(Variant **)(pVVar17 + *(long *)((long)plVar14 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[3],2);
      uVar4 = _LC179;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(local_68[3]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[2],2);
      uVar4 = _LC180;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar7 = Variant::operator_cast_to_int(local_68[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[1],2);
      uVar4 = _LC181;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_68[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[0],2);
      uVar4 = _LC77;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar9 = Variant::operator_cast_to_int(local_68[0]);
      (*(code *)pVVar17)((Variant *)((long)plVar14 + (long)pVVar1),iVar9,iVar8,iVar7,iVar6);
      goto LAB_0011a260;
    }
    uVar10 = 4;
  }
  else {
    uVar10 = 3;
  }
  *in_R9 = uVar10;
  in_R9[2] = 4;
LAB_0011a260:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<AnimationRootNode> const&, Vector2 const&, int>::call(Object*, Variant const**,
   int, Callable::CallError&) const */

Object * MethodBindT<Ref<AnimationRootNode>const&,Vector2_const&,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  Object *pOVar10;
  long *plVar11;
  uint uVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *pVVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  Object *local_78;
  undefined8 local_70;
  undefined8 local_60;
  Variant *local_58 [3];
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar11 = (long *)plVar13[0x23];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar11 = (long *)(plVar13[1] + 0x20);
    }
    if (local_78 == (Object *)*plVar11) {
      if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = (Object *)0x113518;
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a682;
    }
    if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar7 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar8 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar8 = (int)lVar15;
    }
    if ((int)(3 - in_R8D) <= iVar8) {
      lVar9 = 0;
      do {
        if ((int)lVar9 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar9 * 8);
        }
        else {
          uVar12 = iVar8 + -3 + (int)lVar9;
          if (lVar15 <= (int)uVar12) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar12,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar14 = pVVar2 + (ulong)uVar12 * 0x18;
        }
        local_58[lVar9] = pVVar14;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_58[2],2);
      uVar4 = _LC180;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_58[2]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_58[1],5);
      uVar4 = _LC182;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_60 = Variant::operator_cast_to_Vector2(local_58[1]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_58[0]);
      uVar4 = _LC183;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_78 = (Object *)0x0;
      pOVar10 = (Object *)Variant::get_validated_object();
      pOVar5 = local_78;
      if (pOVar10 != local_78) {
        if (pOVar10 == (Object *)0x0) {
          if (local_78 != (Object *)0x0) {
            local_78 = (Object *)0x0;
LAB_0011a606:
            cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
              cVar6 = predelete_handler(pOVar5);
              if (cVar6 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
        }
        else {
          pOVar10 = (Object *)
                    __dynamic_cast(pOVar10,&Object::typeinfo,&AnimationRootNode::typeinfo,0);
          if (pOVar5 != pOVar10) {
            local_78 = pOVar10;
            if (pOVar10 != (Object *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_78 = (Object *)0x0;
              }
            }
            if (pOVar5 != (Object *)0x0) goto LAB_0011a606;
          }
        }
      }
      (*(code *)pVVar16)((Variant *)((long)plVar13 + (long)pVVar1),&local_78,&local_60,iVar8);
      if (local_78 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_78;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_78);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      goto LAB_0011a682;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_0011a682:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Ref<AnimationRootNode> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<int,Ref<AnimationRootNode>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  Object *pOVar9;
  long *plVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *this;
  int iVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar10) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x113518;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011aae0;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (2 < in_R8D) {
    uVar8 = 3;
LAB_0011aad5:
    *in_R9 = uVar8;
    in_R9[2] = 2;
    goto LAB_0011aae0;
  }
  pVVar15 = param_2[5];
  iVar7 = 2 - in_R8D;
  if (pVVar15 == (Variant *)0x0) {
    if (iVar7 != 0) goto LAB_0011ab18;
    this = *(Variant **)param_4;
LAB_0011ab2d:
    pVVar15 = *(Variant **)(param_4 + 8);
  }
  else {
    lVar2 = *(long *)(pVVar15 + -8);
    iVar13 = (int)lVar2;
    if (iVar13 < iVar7) {
LAB_0011ab18:
      uVar8 = 4;
      goto LAB_0011aad5;
    }
    if (in_R8D == 0) {
      lVar11 = (long)(iVar13 + -2);
      if (lVar2 <= lVar11) goto LAB_0011ac50;
      this = pVVar15 + lVar11 * 0x18;
    }
    else {
      this = *(Variant **)param_4;
      if (in_R8D == 2) goto LAB_0011ab2d;
    }
    lVar11 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar7));
    if (lVar2 <= lVar11) {
LAB_0011ac50:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar15 = pVVar15 + lVar11 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar14 & 1) != 0) {
    pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar15);
  uVar4 = _LC184;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_58 = (Object *)0x0;
  pOVar9 = (Object *)Variant::get_validated_object();
  pOVar5 = local_58;
  if (pOVar9 != local_58) {
    if (pOVar9 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_0011aa49:
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(pOVar5);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
    }
    else {
      pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&AnimationRootNode::typeinfo,0);
      if (pOVar5 != pOVar9) {
        local_58 = pOVar9;
        if (pOVar9 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0011aa49;
      }
    }
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC77;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  iVar7 = Variant::operator_cast_to_int(this);
  (*(code *)pVVar14)((Variant *)((long)plVar12 + (long)pVVar1),iVar7,&local_58);
  if (local_58 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_58;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_58);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_0011aae0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<AnimationRootNode>, int>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<Ref<AnimationRootNode>,int>::validated_call
          (MethodBindTRC<Ref<AnimationRootNode>,int> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ae0c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0011ae0c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   AnimationNodeBlendSpace2D::BlendMode>(__UnexistingClass*, void
   (__UnexistingClass::*)(AnimationNodeBlendSpace2D::BlendMode), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,AnimationNodeBlendSpace2D::BlendMode>
               (__UnexistingClass *param_1,_func_void_BlendMode *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0011b0cd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011b130;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011b130:
      uVar6 = 4;
LAB_0011b0cd:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0011b04b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011b04b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_BlendMode **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC77;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0011b0a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<AnimationNodeBlendSpace2D::BlendMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<AnimationNodeBlendSpace2D::BlendMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011b196;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,AnimationNodeBlendSpace2D::BlendMode>
            (p_Var2,(_func_void_BlendMode *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8
             ,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011b196:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,bool>
               (__UnexistingClass *param_1,_func_void_bool *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0011b45d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011b4c0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011b4c0:
      uVar6 = 4;
LAB_0011b45d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0011b3db;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011b3db:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC185;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x0011b437. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011b526;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var2,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011b526:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_ret_dv<__UnexistingClass, int, int, int>(__UnexistingClass*, int
   (__UnexistingClass::*)(int, int), Variant const**, int, Variant&, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_ret_dv<__UnexistingClass,int,int,int>
               (__UnexistingClass *param_1,_func_int_int_int *param_2,Variant **param_3,int param_4,
               Variant *param_5,CallError *param_6,Vector *param_7)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long *plVar7;
  long lVar8;
  Variant *this;
  uint uVar9;
  int iVar10;
  int iVar11;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000010;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar7 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)param_5;
  if (uVar9 < 3) {
    lVar1 = *(long *)(in_stack_00000010 + 8);
    iVar10 = 2 - uVar9;
    if (lVar1 == 0) {
      if (iVar10 != 0) goto LAB_0011b868;
      this = (Variant *)*plVar7;
LAB_0011b8bd:
      this_00 = (Variant *)plVar7[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar10) {
LAB_0011b868:
        uVar6 = 4;
        goto LAB_0011b86d;
      }
      if (uVar9 == 0) {
        lVar8 = (long)(iVar11 + -2);
        if (lVar2 <= lVar8) goto LAB_0011b8d8;
        this = (Variant *)(lVar1 + lVar8 * 0x18);
      }
      else {
        this = (Variant *)*plVar7;
        if (uVar9 == 2) goto LAB_0011b8bd;
      }
      lVar8 = (long)(int)((iVar11 - iVar10) + (uVar9 ^ 1));
      if (lVar2 <= lVar8) {
LAB_0011b8d8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar8 * 0x18);
    }
    *(undefined4 *)param_7 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_int_int_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
    uVar4 = _LC181;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    Variant::operator_cast_to_int(this_00);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC77;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    iVar10 = Variant::operator_cast_to_int(this);
    iVar10 = (*param_2)((int)(param_1 + (long)param_3),iVar10);
    Variant::Variant((Variant *)local_58,iVar10);
    if (Variant::needs_deinit[*(int *)param_6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_6 = local_58[0];
    *(undefined8 *)(param_6 + 8) = local_50;
    *(undefined8 *)(param_6 + 0x10) = uStack_48;
  }
  else {
    uVar6 = 3;
LAB_0011b86d:
    *(undefined4 *)param_7 = uVar6;
    *(undefined4 *)(param_7 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int, int, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<int,int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  Variant *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (Variant *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b996;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_ret_dv<__UnexistingClass,int,int,int>
            (p_Var2,(_func_int_int_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             (CallError *)param_1,in_R9);
LAB_0011b996:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,int>
               (__UnexistingClass *param_1,_func_void_int *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0011bc4d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011bcb0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011bcb0:
      uVar6 = 4;
LAB_0011bc4d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0011bbcb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011bbcb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC77;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0011bc26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011bd16;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var2,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011bd16:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, Vector2 const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, Vector2 const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,int,Vector2_const&>
               (__UnexistingClass *param_1,_func_void_int_Vector2_ptr *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 in_register_0000000c;
  long *plVar9;
  long lVar10;
  Variant *this;
  uint uVar11;
  int iVar12;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000008;
  
  plVar9 = (long *)CONCAT44(in_register_0000000c,param_4);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar2 = *(long *)(in_stack_00000008 + 8);
    iVar7 = 2 - uVar11;
    if (lVar2 == 0) {
      if (iVar7 != 0) goto LAB_0011c018;
      this = (Variant *)*plVar9;
LAB_0011c06d:
      this_00 = (Variant *)plVar9[1];
    }
    else {
      lVar3 = *(long *)(lVar2 + -8);
      iVar12 = (int)lVar3;
      if (iVar12 < iVar7) {
LAB_0011c018:
        uVar8 = 4;
        goto LAB_0011c01d;
      }
      if (uVar11 == 0) {
        lVar10 = (long)(iVar12 + -2);
        if (lVar3 <= lVar10) goto LAB_0011c088;
        this = (Variant *)(lVar2 + lVar10 * 0x18);
      }
      else {
        this = (Variant *)*plVar9;
        if (uVar11 == 2) goto LAB_0011c06d;
      }
      lVar10 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar7));
      if (lVar3 <= lVar10) {
LAB_0011c088:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      this_00 = (Variant *)(lVar2 + lVar10 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_int_Vector2_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this_00,5);
    uVar5 = _LC182;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    Variant::operator_cast_to_Vector2(this_00);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar5 = _LC77;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    iVar7 = Variant::operator_cast_to_int(this);
    (*param_2)((int)(param_1 + (long)param_3),(Vector2 *)iVar7);
  }
  else {
    uVar8 = 3;
LAB_0011c01d:
    *(undefined4 *)param_6 = uVar8;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Vector2 const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<int,Vector2_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC75,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011c126;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,Vector2_const&>
            (p_Var2,(_func_void_int_Vector2_ptr *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4
             ,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011c126:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Vector2 const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Vector2_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_0011c329;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC4;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,5);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_0011c428:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_0011c428;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_78._0_4_;
  if (*(long *)(param_3 + 8) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_70._8_8_) {
    StringName::unref();
    uVar3 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_60;
  if (*(long *)(param_3 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_58;
    local_58 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  iVar5 = *param_2;
LAB_0011c329:
  *param_2 = iVar5 + 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Vector2 const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Vector2_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<Vector2_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_0011c5d9;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC4;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_0011c6d8:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_0011c6d8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_78._0_4_;
  if (*(long *)(param_3 + 8) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_70._8_8_) {
    StringName::unref();
    uVar3 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_60;
  if (*(long *)(param_3 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_58;
    local_58 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  iVar5 = *param_2;
LAB_0011c5d9:
  *param_2 = iVar5 + 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<int, Vector2 const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,Vector2_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<Vector2_const&>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector2,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_0011c918;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC4;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 5;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_0011c9ff:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0011c9ff;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0011c918:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<AnimationRootNode>, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<AnimationRootNode>,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
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
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_0011cb18;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = "AnimationRootNode";
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 0x11;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0011cc17:
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_0011cc17;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0011cb18:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int, int, int>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,int,int,int>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<int>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<int>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<int>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int, int, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<int,int,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_0011cf24;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC4;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 2;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_0011cf4f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0011cf4f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0011cf24:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Ref<AnimationRootNode> const&>(int, int&, PropertyInfo&)
    */

void call_get_argument_type_info_helper<Ref<AnimationRootNode>const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = *param_2;
  if (iVar4 != param_1) goto LAB_0011cfd9;
  local_88 = 0;
  local_90 = 0;
  local_78 = "AnimationRootNode";
  local_70._0_8_ = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (char *)CONCAT44(local_78._4_4_,0x18);
  local_60 = 0x11;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_0011d17d:
    local_50 = 6;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 == 0x11) goto LAB_0011d17d;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_78._0_4_;
  if (*(long *)(param_3 + 8) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar2 = local_70._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_70._8_8_;
    local_70 = auVar1 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar2;
  }
  if (*(long *)(param_3 + 0x10) != local_70._8_8_) {
    StringName::unref();
    uVar2 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar2;
  }
  *(int *)(param_3 + 0x18) = local_60;
  if (*(long *)(param_3 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar3 = local_58;
    local_58 = 0;
    *(long *)(param_3 + 0x20) = lVar3;
  }
  *(undefined4 *)(param_3 + 0x28) = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  iVar4 = *param_2;
LAB_0011cfd9:
  *param_2 = iVar4 + 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Ref<AnimationRootNode> const&, Vector2 const&, int>::_gen_argument_type_info(int)
   const */

PropertyInfo *
MethodBindT<Ref<AnimationRootNode>const&,Vector2_const&,int>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<Ref<AnimationRootNode>const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<Vector2_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<int>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Ref<AnimationRootNode> const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,Ref<AnimationRootNode>const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<Ref<AnimationRootNode>const&>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace2D::get_parameter_list(List<PropertyInfo, DefaultAllocator>*) const */

void AnimationNodeBlendSpace2D::_GLOBAL__sub_I_get_parameter_list(void)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (Animation::PARAMETERS_BASE_PATH == '\0') {
    Animation::PARAMETERS_BASE_PATH = 0;
    Animation::PARAMETERS_BASE_PATH = '\x01';
    String::parse_latin1((StrRange *)&Animation::PARAMETERS_BASE_PATH);
    __cxa_atexit(String::~String,&Animation::PARAMETERS_BASE_PATH,&__dso_handle);
  }
  if (AudioStreamRandomizer::base_property_helper == '\0') {
    AudioStreamRandomizer::base_property_helper = '\x01';
    AudioStreamRandomizer::base_property_helper._56_8_ = 2;
    AudioStreamRandomizer::base_property_helper._64_8_ = 0;
    AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1  [16])0x0;
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      __cxa_atexit(PropertyListHelper::~PropertyListHelper,
                   AudioStreamRandomizer::base_property_helper,&__dso_handle);
      return;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* AnimationNode::~AnimationNode() */

void __thiscall AnimationNode::~AnimationNode(AnimationNode *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<AnimationNodeBlendSpace2D::BlendMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AnimationNodeBlendSpace2D::BlendMode>::~MethodBindTRC
          (MethodBindTRC<AnimationNodeBlendSpace2D::BlendMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<AnimationNodeBlendSpace2D::BlendMode>::~MethodBindT() */

void __thiscall
MethodBindT<AnimationNodeBlendSpace2D::BlendMode>::~MethodBindT
          (MethodBindT<AnimationNodeBlendSpace2D::BlendMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector<int>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<int>>::~MethodBindTRC(MethodBindTRC<Vector<int>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector<int> const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector<int>const&>::~MethodBindT(MethodBindT<Vector<int>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, Ref<AnimationRootNode> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,Ref<AnimationRootNode>const&>::~MethodBindT
          (MethodBindT<int,Ref<AnimationRootNode>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<int, int, int>::~MethodBindTR() */

void __thiscall MethodBindTR<int,int,int>::~MethodBindTR(MethodBindTR<int,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, int, int, int>::~MethodBindT() */

void __thiscall MethodBindT<int,int,int,int>::~MethodBindT(MethodBindT<int,int,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<AnimationRootNode>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<AnimationRootNode>,int>::~MethodBindTRC
          (MethodBindTRC<Ref<AnimationRootNode>,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector2, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2,int>::~MethodBindTRC(MethodBindTRC<Vector2,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Vector2_const&>::~MethodBindT(MethodBindT<int,Vector2_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<AnimationRootNode> const&, Vector2 const&, int>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<AnimationRootNode>const&,Vector2_const&,int>::~MethodBindT
          (MethodBindT<Ref<AnimationRootNode>const&,Vector2_const&,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendSpace2D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendSpace2D, void, ObjectID const&, String const&,
   String const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,String_const&,String_const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,String_const&,String_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendSpace2D, void, ObjectID const&, StringName
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,StringName_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2D,void,ObjectID_const&,StringName_const&>
           *this)

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
