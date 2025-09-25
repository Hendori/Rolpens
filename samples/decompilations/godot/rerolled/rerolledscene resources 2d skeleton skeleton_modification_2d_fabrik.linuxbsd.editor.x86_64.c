/* SkeletonModification2DFABRIK::get_fabrik_data_chain_length() */undefined4 SkeletonModification2DFABRIK::get_fabrik_data_chain_length(SkeletonModification2DFABRIK *this) {
   if (*(long*)( this + 0x2a8 ) != 0) {
      return *(undefined4*)( *(long*)( this + 0x2a8 ) + -8 );
   }

   return 0;
}
/* SkeletonModification2DFABRIK::get_target_node() const */void SkeletonModification2DFABRIK::get_target_node(void) {
   long in_RSI;
   NodePath *in_RDI;
   NodePath::NodePath(in_RDI, (NodePath*)( in_RSI + 0x2c0 ));
   return;
}
/* SkeletonModification2DFABRIK::get_fabrik_joint_bone2d_node(int) const */NodePath *SkeletonModification2DFABRIK::get_fabrik_joint_bone2d_node(int param_1) {
   long lVar1;
   long lVar2;
   int in_EDX;
   long in_RSI;
   undefined4 in_register_0000003c;
   NodePath *this;
   long lVar3;
   this(NodePath * CONCAT44(in_register_0000003c, param_1));
   lVar2 = (long)in_EDX;
   lVar1 = *(long*)( in_RSI + 0x2a8 );
   if (in_EDX < 0) {
      if (lVar1 != 0) {
         lVar3 = *(long*)( lVar1 + -8 );
         goto LAB_00100089;
      }

   }
 else if (lVar1 != 0) {
      lVar3 = *(long*)( lVar1 + -8 );
      if (lVar2 < lVar3) {
         NodePath::NodePath(this, (NodePath*)( lVar1 + 8 + lVar2 * 0x28 ));
         return this;
      }

      goto LAB_00100089;
   }

   lVar3 = 0;
   LAB_00100089:_err_print_index_error("get_fabrik_joint_bone2d_node", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x17b, lVar2, lVar3, "p_joint_idx", "fabrik_data_chain.size()", "FABRIK joint out of range!", false, false);
   *(undefined8*)this = 0;
   return this;
}
/* SkeletonModification2DFABRIK::get_fabrik_joint_bone_index(int) const */undefined4 SkeletonModification2DFABRIK::get_fabrik_joint_bone_index(SkeletonModification2DFABRIK *this, int param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   lVar1 = *(long*)( this + 0x2a8 );
   lVar2 = (long)param_1;
   if (param_1 < 0) {
      if (lVar1 != 0) {
         lVar3 = *(long*)( lVar1 + -8 );
         goto LAB_00100119;
      }

   }
 else if (lVar1 != 0) {
      lVar3 = *(long*)( lVar1 + -8 );
      if (lVar2 < lVar3) {
         return *(undefined4*)( lVar1 + lVar2 * 0x28 );
      }

      goto LAB_00100119;
   }

   lVar3 = 0;
   LAB_00100119:_err_print_index_error("get_fabrik_joint_bone_index", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x195, lVar2, lVar3, "p_joint_idx", "fabrik_data_chain.size()", "FABRIK joint out of range!", false, false);
   return 0xffffffff;
}
/* SkeletonModification2DFABRIK::get_fabrik_joint_magnet_position(int) const */undefined8 SkeletonModification2DFABRIK::get_fabrik_joint_magnet_position(SkeletonModification2DFABRIK *this, int param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   lVar1 = *(long*)( this + 0x2a8 );
   lVar2 = (long)param_1;
   if (param_1 < 0) {
      if (lVar1 != 0) {
         lVar3 = *(long*)( lVar1 + -8 );
         goto LAB_001001a9;
      }

   }
 else if (lVar1 != 0) {
      lVar3 = *(long*)( lVar1 + -8 );
      if (lVar2 < lVar3) {
         return *(undefined8*)( lVar1 + 0x18 + lVar2 * 0x28 );
      }

      goto LAB_001001a9;
   }

   lVar3 = 0;
   LAB_001001a9:_err_print_index_error("get_fabrik_joint_magnet_position", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x19f, lVar2, lVar3, "p_joint_idx", "fabrik_data_chain.size()", "FABRIK joint out of range!", false, false);
   return 0;
}
/* SkeletonModification2DFABRIK::get_fabrik_joint_use_target_rotation(int) const */undefined1 SkeletonModification2DFABRIK::get_fabrik_joint_use_target_rotation(SkeletonModification2DFABRIK *this, int param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   lVar1 = *(long*)( this + 0x2a8 );
   lVar2 = (long)param_1;
   if (param_1 < 0) {
      if (lVar1 != 0) {
         lVar3 = *(long*)( lVar1 + -8 );
         goto LAB_00100239;
      }

   }
 else if (lVar1 != 0) {
      lVar3 = *(long*)( lVar1 + -8 );
      if (lVar2 < lVar3) {
         return *(undefined1*)( lVar1 + 0x20 + lVar2 * 0x28 );
      }

      goto LAB_00100239;
   }

   lVar3 = 0;
   LAB_00100239:_err_print_index_error("get_fabrik_joint_use_target_rotation", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x1a9, lVar2, lVar3, "p_joint_idx", "fabrik_data_chain.size()", "FABRIK joint out of range!", false, false);
   return 0;
}
/* CowData<Transform2D>::_copy_on_write() [clone .isra.0] */void CowData<Transform2D>::_copy_on_write(CowData<Transform2D> *this) {
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
/* SkeletonModification2DFABRIK::chain_backwards() */void SkeletonModification2DFABRIK::chain_backwards(SkeletonModification2DFABRIK *this) {
   long lVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   ulong uVar4;
   code *pcVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   uint uVar9;
   ulong *puVar10;
   long lVar11;
   ulong uVar12;
   uint uVar13;
   long lVar14;
   long in_FS_OFFSET;
   bool bVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float extraout_XMM0_Db;
   float extraout_XMM0_Db_00;
   float local_d0;
   float local_cc;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined1 local_99;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar6 = *(long*)( this + 0x2a8 );
   if (lVar6 == 0) {
      lVar11 = 0;
      lVar8 = -1;
      goto LAB_001009f3;
   }

   lVar11 = *(long*)( lVar6 + -8 );
   uVar13 = (int)lVar11 - 1;
   lVar7 = (long)(int)uVar13;
   lVar8 = lVar7;
   if (( lVar11 <= lVar7 ) || ( lVar7 < 0 )) goto LAB_001009f3;
   uVar12 = (ulong)uVar13;
   lVar14 = uVar12 * 0x28;
   uVar4 = *(ulong*)( lVar6 + 0x10 + lVar14 );
   uVar9 = (uint)uVar4 & 0xffffff;
   if (uVar9 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_99 = 0;
         LOCK();
         bVar15 = (char)ObjectDB::spin_lock == '\0';
         if (bVar15) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar15) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar10 = (ulong*)( (ulong)uVar9 * 0x10 + ObjectDB::object_slots );
      if (( uVar4 >> 0x18 & 0x7fffffffff ) == ( *puVar10 & 0x7fffffffff )) {
         uVar4 = puVar10[1];
         ObjectDB::spin_lock._0_1_ = '\0';
         if (uVar4 != 0) {
            __dynamic_cast(uVar4, &Object::typeinfo, &Bone2D::typeinfo, 0);
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   lVar6 = *(long*)( this + 0x2b8 );
   if (lVar6 != 0) {
      lVar11 = *(long*)( lVar6 + -8 );
      if (lVar11 <= lVar7) goto LAB_001009f3;
      lVar1 = uVar12 * 0x18;
      local_98 = *(undefined8*)( lVar6 + lVar1 );
      uStack_90 = ( (undefined8*)( lVar6 + lVar1 ) )[1];
      local_88 = *(undefined8*)( lVar6 + 0x10 + lVar1 );
      if (uVar13 != 0) {
         lVar6 = *(long*)( this + 0x2a8 );
         if (lVar6 == 0) goto LAB_001009d2;
         lVar11 = *(long*)( lVar6 + -8 );
         if (lVar11 <= lVar7) goto LAB_001009f3;
         uVar3 = *(undefined8*)( lVar6 + 0x18 + lVar14 );
         local_88 = CONCAT44((float)( (ulong)local_88 >> 0x20 ) + (float)( (ulong)uVar3 >> 0x20 ), (float)local_88 + (float)uVar3);
      }

      Transform2D::looking_at((Vector2*)&local_c8);
      local_88 = local_b8;
      local_98 = local_c8;
      uStack_90 = uStack_c0;
      fVar16 = (float)Transform2D::get_rotation();
      lVar6 = *(long*)( this + 0x2a8 );
      if (lVar6 != 0) {
         lVar11 = *(long*)( lVar6 + -8 );
         if (lVar7 < lVar11) {
            if (*(char*)( lVar6 + 0x20 + lVar14 ) != '\0') {
               fVar16 = (float)Transform2D::get_rotation();
            }

            sincosf(fVar16, &local_cc, &local_d0);
            fVar17 = (float)Bone2D::get_length();
            Node2D::get_global_scale();
            fVar16 = (float)Node2D::get_global_scale();
            if (extraout_XMM0_Db <= fVar16) {
               fVar16 = extraout_XMM0_Db;
            }

            local_88 = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x2ec ) >> 0x20 ) - fVar17 * fVar16 * local_cc, (float)*(undefined8*)( this + 0x2ec ) - fVar17 * fVar16 * local_d0);
            if (*(long*)( this + 0x2b8 ) == 0) {
               LAB_00100a25:lVar6 = 0;
            }
 else {
               lVar6 = *(long*)( *(long*)( this + 0x2b8 ) + -8 );
               if (lVar7 < lVar6) {
                  CowData<Transform2D>::_copy_on_write((CowData<Transform2D>*)( this + 0x2b8 ));
                  lVar6 = *(long*)( this + 0x2b8 );
                  *(undefined8*)( lVar6 + lVar1 ) = local_98;
                  ( (undefined8*)( lVar6 + lVar1 ) )[1] = uStack_90;
                  *(undefined8*)( lVar6 + 0x10 + lVar1 ) = local_88;
                  if (uVar13 != 0) {
                     lVar14 = uVar12 * 0x18;
                     do {
                        lVar14 = lVar14 + -0x18;
                        lVar7 = lVar8 + -1;
                        if (lVar6 == 0) {
                           lVar11 = 0;
                           goto LAB_001009f3;
                        }

                        lVar11 = *(long*)( lVar6 + -8 );
                        if (lVar11 <= lVar8) goto LAB_001009f3;
                        puVar2 = (undefined8*)( lVar6 + 0x18 + lVar14 );
                        local_78 = *puVar2;
                        uStack_70 = puVar2[1];
                        uVar13 = uVar13 - 1;
                        local_68 = *(undefined8*)( lVar6 + 0x28 + lVar14 );
                        lVar6 = *(long*)( this + 0x2a8 );
                        lVar8 = lVar7;
                        if (lVar6 == 0) goto LAB_001009d2;
                        lVar11 = *(long*)( lVar6 + -8 );
                        if (lVar11 <= lVar7) goto LAB_001009f3;
                        uVar4 = *(ulong*)( lVar6 + 0x10 + lVar7 * 0x28 );
                        uVar9 = (uint)uVar4 & 0xffffff;
                        if (uVar9 < (uint)ObjectDB::slot_max) {
                           while (true) {
                              local_99 = 0;
                              LOCK();
                              bVar15 = (char)ObjectDB::spin_lock == '\0';
                              if (bVar15) {
                                 ObjectDB::spin_lock._0_1_ = '\x01';
                              }

                              UNLOCK();
                              if (bVar15) break;
                              do {} while ( (char)ObjectDB::spin_lock != '\0' );
                           }
;
                           puVar10 = (ulong*)( (ulong)uVar9 * 0x10 + ObjectDB::object_slots );
                           if (( uVar4 >> 0x18 & 0x7fffffffff ) == ( *puVar10 & 0x7fffffffff )) {
                              uVar4 = puVar10[1];
                              ObjectDB::spin_lock._0_1_ = '\0';
                              if (uVar4 != 0) {
                                 __dynamic_cast(uVar4, &Object::typeinfo, &Bone2D::typeinfo, 0);
                              }

                           }
 else {
                              ObjectDB::spin_lock._0_1_ = '\0';
                           }

                        }
 else {
                           _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                        }

                        lVar6 = *(long*)( this + 0x2b8 );
                        if (lVar6 == 0) goto LAB_001009d2;
                        lVar11 = *(long*)( lVar6 + -8 );
                        if (lVar11 <= lVar7) goto LAB_001009f3;
                        local_58 = *(undefined8*)( lVar6 + lVar14 );
                        uStack_50 = ( (undefined8*)( lVar6 + lVar14 ) )[1];
                        local_48 = *(undefined8*)( lVar6 + 0x10 + lVar14 );
                        if (uVar13 != 0) {
                           lVar6 = *(long*)( this + 0x2a8 );
                           if (lVar6 == 0) goto LAB_001009d2;
                           lVar11 = *(long*)( lVar6 + -8 );
                           if (lVar11 <= lVar7) goto LAB_001009f3;
                           uVar3 = *(undefined8*)( lVar6 + 0x18 + lVar7 * 0x28 );
                           local_48 = CONCAT44((float)( (ulong)local_48 >> 0x20 ) + (float)( (ulong)uVar3 >> 0x20 ), (float)local_48 + (float)uVar3);
                        }

                        fVar17 = (float)Bone2D::get_length();
                        Node2D::get_global_scale();
                        fVar16 = (float)Node2D::get_global_scale();
                        if (extraout_XMM0_Db_00 <= fVar16) {
                           fVar16 = extraout_XMM0_Db_00;
                        }

                        fVar18 = (float)Vector2::distance_to((Vector2*)&local_48);
                        fVar18 = ( fVar17 * fVar16 ) / fVar18;
                        fVar16 = (float)( (ulong)local_68 >> 0x20 );
                        local_48 = CONCAT44(( (float)( (ulong)local_48 >> 0x20 ) - fVar16 ) * fVar18 + fVar16, ( (float)local_48 - (float)local_68 ) * fVar18 + (float)local_68);
                        if (*(long*)( this + 0x2b8 ) == 0) goto LAB_00100a25;
                        lVar6 = *(long*)( *(long*)( this + 0x2b8 ) + -8 );
                        if (lVar6 <= lVar7) goto LAB_00100a28;
                        CowData<Transform2D>::_copy_on_write((CowData<Transform2D>*)( this + 0x2b8 ));
                        lVar6 = *(long*)( this + 0x2b8 );
                        *(undefined8*)( lVar6 + lVar14 ) = local_58;
                        ( (undefined8*)( lVar6 + lVar14 ) )[1] = uStack_50;
                        *(undefined8*)( lVar6 + 0x10 + lVar14 ) = local_48;
                     }
 while ( uVar13 != 0 );
                  }

                  if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return;
               }

            }

            LAB_00100a28:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar7, lVar6, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         goto LAB_001009f3;
      }

   }

   LAB_001009d2:lVar11 = 0;
   LAB_001009f3:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar11, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar5 = (code*)invalidInstructionException();
   ( *pcVar5 )();
}
/* SkeletonModification2DFABRIK::chain_forwards() */void SkeletonModification2DFABRIK::chain_forwards(SkeletonModification2DFABRIK *this) {
   undefined8 *puVar1;
   undefined8 uVar2;
   ulong uVar3;
   long lVar4;
   code *pcVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   uint uVar8;
   ulong *puVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   long in_FS_OFFSET;
   bool bVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float extraout_XMM0_Db;
   float fVar17;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar1 = *(undefined8**)( this + 0x2b8 );
   if (puVar1 == (undefined8*)0x0) {
      lVar10 = 0;
   }
 else {
      lVar10 = puVar1[-1];
      if (0 < lVar10) {
         uVar6 = *puVar1;
         uVar7 = puVar1[1];
         lVar11 = 0x18;
         lVar12 = 0;
         uVar2 = *(undefined8*)( this + 0x304 );
         CowData<Transform2D>::_copy_on_write((CowData<Transform2D>*)( this + 0x2b8 ));
         puVar1 = *(undefined8**)( this + 0x2b8 );
         puVar1[2] = uVar2;
         *puVar1 = uVar6;
         puVar1[1] = uVar7;
         lVar10 = *(long*)( this + 0x2a8 );
         while (true) {
            if (( lVar10 == 0 ) || ( *(long*)( lVar10 + -8 ) + -1 <= lVar12 )) {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            uVar3 = *(ulong*)( lVar10 + 0x10 + lVar12 * 0x28 );
            uVar8 = (uint)uVar3 & 0xffffff;
            if (uVar8 < (uint)ObjectDB::slot_max) {
               while (true) {
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
               if (( uVar3 >> 0x18 & 0x7fffffffff ) == ( *puVar9 & 0x7fffffffff )) {
                  uVar3 = puVar9[1];
                  ObjectDB::spin_lock._0_1_ = '\0';
                  if (uVar3 != 0) {
                     __dynamic_cast(uVar3, &Object::typeinfo, &Bone2D::typeinfo, 0);
                  }

               }
 else {
                  ObjectDB::spin_lock._0_1_ = '\0';
               }

            }
 else {
               _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
            }

            lVar4 = *(long*)( this + 0x2b8 );
            if (lVar4 == 0) break;
            lVar10 = *(long*)( lVar4 + -8 );
            if (lVar10 <= lVar12) goto LAB_00100e03;
            puVar1 = (undefined8*)( lVar4 + -0x18 + lVar11 );
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            lVar12 = lVar12 + 1;
            uVar2 = *(undefined8*)( lVar4 + -8 + lVar11 );
            if (lVar10 <= lVar12) goto LAB_00100e03;
            local_48 = *(undefined8*)( lVar4 + 0x10 + lVar11 );
            fVar14 = (float)Bone2D::get_length();
            Node2D::get_global_scale();
            fVar15 = (float)Node2D::get_global_scale();
            if (extraout_XMM0_Db <= fVar15) {
               fVar15 = extraout_XMM0_Db;
            }

            fVar16 = (float)Vector2::distance_to((Vector2*)&local_48);
            fVar16 = ( fVar14 * fVar15 ) / fVar16;
            fVar15 = (float)local_48;
            uVar3 = (ulong)local_48 >> 0x20;
            fVar14 = (float)uVar2;
            fVar17 = (float)( (ulong)uVar2 >> 0x20 );
            if (*(long*)( this + 0x2b8 ) == 0) {
               lVar10 = 0;
               LAB_00100e5f:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar12, lVar10, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar5 = (code*)invalidInstructionException();
               ( *pcVar5 )();
            }

            lVar10 = *(long*)( *(long*)( this + 0x2b8 ) + -8 );
            if (lVar10 <= lVar12) goto LAB_00100e5f;
            CowData<Transform2D>::_copy_on_write((CowData<Transform2D>*)( this + 0x2b8 ));
            lVar10 = *(long*)( this + 0x2b8 );
            puVar1 = (undefined8*)( lVar10 + lVar11 );
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            *(ulong*)( lVar10 + 0x10 + lVar11 ) = CONCAT44(( (float)uVar3 - fVar17 ) * fVar16 + fVar17, ( fVar15 - fVar14 ) * fVar16 + fVar14);
            lVar10 = *(long*)( this + 0x2a8 );
            lVar11 = lVar11 + 0x18;
         }
;
         lVar10 = 0;
         goto LAB_00100e03;
      }

   }

   lVar12 = 0;
   LAB_00100e03:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar12, lVar10, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar5 = (code*)invalidInstructionException();
   ( *pcVar5 )();
}
/* SkeletonModification2DFABRIK::update_target_cache() */long SkeletonModification2DFABRIK::update_target_cache(SkeletonModification2DFABRIK *this) {
   NodePath *pNVar1;
   long in_RAX;
   long lVar2;
   if (this[0x24d] != (SkeletonModification2DFABRIK)0x0) {
      lVar2 = *(long*)( this + 0x240 );
      if (lVar2 == 0) {
         if (update_target_cache() != '\0') {
            lVar2 = _err_print_error("update_target_cache", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x12d, "Cannot update target cache: modification is not properly setup!", 0, 0);
            update_target_cache()::first_print =
            '\0';
         }

      }
 else {
         *(undefined8*)( this + 0x2c8 ) = 0;
         pNVar1 = *(NodePath**)( lVar2 + 0x240 );
         if (( pNVar1 != (NodePath*)0x0 ) && ( ( (byte)pNVar1[0x2fa] & 0x40 ) != 0 )) {
            lVar2 = Node::has_node(pNVar1);
            if ((char)lVar2 != '\0') {
               lVar2 = Node::get_node(*(NodePath**)( *(long*)( this + 0x240 ) + 0x240 ));
               if (( lVar2 == 0 ) || ( *(long*)( *(long*)( this + 0x240 ) + 0x240 ) == lVar2 )) {
                  lVar2 = _err_print_error("update_target_cache", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x137, "Condition \"!node || stack->skeleton == node\" is true.", "Cannot update target cache: node is this modification\'s skeleton or cannot be found!", 0, 0);
               }
 else if (( *(byte*)( lVar2 + 0x2fa ) & 0x40 ) == 0) {
                  lVar2 = 0;
                  _err_print_error("update_target_cache", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x139, "Condition \"!node->is_inside_tree()\" is true.", "Cannot update target cache: node is not in scene tree!", 0);
               }
 else {
                  lVar2 = *(long*)( lVar2 + 0x60 );
                  *(long*)( this + 0x2c8 ) = lVar2;
               }

            }

         }

      }

      return lVar2;
   }

   return in_RAX;
}
/* SkeletonModification2DFABRIK::set_target_node(NodePath const&) */void SkeletonModification2DFABRIK::set_target_node(SkeletonModification2DFABRIK *this, NodePath *param_1) {
   NodePath::operator =((NodePath*)( this + 0x2c0 ), param_1);
   update_target_cache(this);
   return;
}
/* SkeletonModification2DFABRIK::SkeletonModification2DFABRIK() */void SkeletonModification2DFABRIK::SkeletonModification2DFABRIK(SkeletonModification2DFABRIK *this) {
   SkeletonModification2D::SkeletonModification2D((SkeletonModification2D*)this);
   *(undefined8*)( this + 0x2a8 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_00111e00;
   *(undefined8*)( this + 0x2d0 ) = 0xa3c23d70a;
   *(undefined8*)( this + 0x2d8 ) = 0x3f80000000000000;
   *(undefined8*)( this + 0x2f0 ) = 0x3f80000000000000;
   *(undefined8*)( this + 0x2c8 ) = 0;
   *(undefined8*)( this + 0x2e0 ) = 0;
   *(undefined8*)( this + 0x2e8 ) = 0x3f800000;
   *(undefined8*)( this + 0x2f8 ) = 0;
   *(undefined8*)( this + 0x300 ) = 0x3f800000;
   *(undefined4*)( this + 0x308 ) = 0;
   *(undefined8*)( this + 0x240 ) = 0;
   *(undefined2*)( this + 0x24c ) = 1;
   this[0x298] = (SkeletonModification2DFABRIK)0x0;
   *(undefined1(*) [16])( this + 0x2b8 ) = (undefined1[16])0x0;
   return;
}
/* SkeletonModification2DFABRIK::_get(StringName const&, Variant&) const */undefined4 SkeletonModification2DFABRIK::_get(SkeletonModification2DFABRIK *this, StringName *param_1, Variant *param_2) {
   long *plVar1;
   char *__s;
   long lVar2;
   char cVar3;
   bool bVar4;
   undefined4 uVar5;
   int iVar6;
   long lVar7;
   int iVar8;
   wchar32 wVar9;
   long lVar10;
   long in_FS_OFFSET;
   long local_88;
   String local_80[8];
   char *local_78;
   size_t local_70;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   lVar10 = *(long*)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar10 == 0) {
      LAB_00101329:local_88 = 0;
   }
 else {
      __s = *(char**)( lVar10 + 8 );
      local_88 = 0;
      if (__s == (char*)0x0) {
         plVar1 = (long*)( *(long*)( lVar10 + 0x10 ) + -0x10 );
         if (*(long*)( lVar10 + 0x10 ) == 0) goto LAB_00101329;
         do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_00101329;
            LOCK();
            lVar7 = *plVar1;
            bVar4 = lVar2 == lVar7;
            if (bVar4) {
               *plVar1 = lVar2 + 1;
               lVar7 = lVar2;
            }

            UNLOCK();
         }
 while ( !bVar4 );
         if (lVar7 != -1) {
            local_88 = *(long*)( lVar10 + 0x10 );
         }

      }
 else {
         local_70 = strlen(__s);
         local_78 = __s;
         String::parse_latin1((StrRange*)&local_88);
      }

   }

   uVar5 = String::begins_with((char*)&local_88);
   if ((char)uVar5 != '\0') {
      iVar8 = (int)&local_88;
      wVar9 = (wchar32)(CowData<char32_t>*)&local_78;
      String::get_slicec(wVar9, iVar8);
      iVar6 = String::to_int();
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      String::get_slicec((wchar32)local_80, iVar8);
      if (iVar6 < 0) {
         if (*(long*)( this + 0x2a8 ) == 0) goto LAB_001014b0;
         lVar10 = *(long*)( *(long*)( this + 0x2a8 ) + -8 );
         LAB_00101420:_err_print_index_error("_get", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x42, (long)iVar6, lVar10, "which", "fabrik_data_chain.size()", "", false, false);
      }
 else {
         if (*(long*)( this + 0x2a8 ) == 0) {
            LAB_001014b0:lVar10 = 0;
            goto LAB_00101420;
         }

         lVar10 = *(long*)( *(long*)( this + 0x2a8 ) + -8 );
         if (lVar10 <= iVar6) goto LAB_00101420;
         cVar3 = String::operator ==(local_80, "bone2d_node");
         if (cVar3 != '\0') {
            get_fabrik_joint_bone2d_node(wVar9);
            Variant::Variant((Variant*)local_58, (NodePath*)&local_78);
            if (Variant::needs_deinit[*(int*)param_2] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)param_2 = local_58[0];
            *(undefined8*)( param_2 + 8 ) = local_50;
            *(undefined8*)( param_2 + 0x10 ) = uStack_48;
            NodePath::~NodePath((NodePath*)&local_78);
            LAB_001012cd:CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
            goto LAB_00101195;
         }

         cVar3 = String::operator ==(local_80, "bone_index");
         if (cVar3 != '\0') {
            iVar6 = get_fabrik_joint_bone_index(this, iVar6);
            Variant::Variant((Variant*)local_58, iVar6);
            if (Variant::needs_deinit[*(int*)param_2] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)param_2 = local_58[0];
            *(undefined8*)( param_2 + 8 ) = local_50;
            *(undefined8*)( param_2 + 0x10 ) = uStack_48;
            goto LAB_001012cd;
         }

         cVar3 = String::operator ==(local_80, "magnet_position");
         if (cVar3 != '\0') {
            local_60 = get_fabrik_joint_magnet_position(this, iVar6);
            Variant::Variant((Variant*)local_58, (Vector2*)&local_60);
            if (Variant::needs_deinit[*(int*)param_2] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)param_2 = local_58[0];
            *(undefined8*)( param_2 + 8 ) = local_50;
            *(undefined8*)( param_2 + 0x10 ) = uStack_48;
            goto LAB_001012cd;
         }

         cVar3 = String::operator ==(local_80, "use_target_rotation");
         if (cVar3 != '\0') {
            bVar4 = (bool)get_fabrik_joint_use_target_rotation(this, iVar6);
            Variant::Variant((Variant*)local_58, bVar4);
            if (Variant::needs_deinit[*(int*)param_2] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)param_2 = local_58[0];
            *(undefined8*)( param_2 + 8 ) = local_50;
            *(undefined8*)( param_2 + 0x10 ) = uStack_48;
            goto LAB_001012cd;
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
   }

   uVar5 = 0;
   LAB_00101195:lVar10 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar10 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
/* SkeletonModification2DFABRIK::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */void SkeletonModification2DFABRIK::_get_property_list(SkeletonModification2DFABRIK *this, List *param_1) {
   long *plVar1;
   char *pcVar2;
   long lVar3;
   long lVar4;
   undefined4 *puVar5;
   undefined1(*pauVar6)[16];
   long lVar7;
   long in_FS_OFFSET;
   long local_a8;
   long local_a0;
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
   lVar4 = *(long*)( this + 0x2a8 );
   if (lVar4 != 0) {
      lVar7 = 0;
      do {
         if (*(long*)( lVar4 + -8 ) <= lVar7) break;
         local_80 = 0;
         local_70 = 1;
         local_78 = "/";
         String::parse_latin1((StrRange*)&local_80);
         itos((long)&local_88);
         operator+((char *)&
         local_78,(String*)"joint_data/";
         String::operator +((String*)&local_a8, (String*)&local_78);
         pcVar2 = local_78;
         if (local_78 != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_78 = (undefined*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar4 = local_88;
         if (local_88 != 0) {
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_88 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         lVar4 = local_80;
         if (local_80 != 0) {
            LOCK();
            plVar1 = (long*)( local_80 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_80 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         local_88 = 0;
         local_78 = "";
         local_90 = 0;
         local_70 = 0;
         String::parse_latin1((StrRange*)&local_90);
         local_a0 = 0;
         local_78 = "bone_index";
         local_70 = 10;
         String::parse_latin1((StrRange*)&local_a0);
         String::operator +((String*)&local_98, (String*)&local_a8);
         local_78 = (char*)CONCAT44(local_78._4_4_, 2);
         local_70 = 0;
         if (local_98 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
         }

         local_68 = 0;
         local_60 = 0;
         local_58 = 0;
         if (local_90 == 0) {
            LAB_0010204b:local_50 = 6;
            StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
            lVar4 = *(long*)param_1;
         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
            local_50 = 6;
            if (local_60 != 0x11) goto LAB_0010204b;
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

            lVar4 = *(long*)param_1;
         }

         if (lVar4 == 0) {
            pauVar6 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_1 = pauVar6;
            *(undefined4*)pauVar6[1] = 0;
            *pauVar6 = (undefined1[16])0x0;
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
         lVar4 = plVar1[1];
         *(undefined8*)( puVar5 + 0xc ) = 0;
         *(long**)( puVar5 + 0x10 ) = plVar1;
         *(long*)( puVar5 + 0xe ) = lVar4;
         if (lVar4 != 0) {
            *(undefined4**)( lVar4 + 0x30 ) = puVar5;
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

         lVar4 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar1 = (long*)( local_70 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         lVar4 = local_98;
         if (local_98 != 0) {
            LOCK();
            plVar1 = (long*)( local_98 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_98 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         lVar4 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar1 = (long*)( local_a0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         lVar4 = local_90;
         if (local_90 != 0) {
            LOCK();
            plVar1 = (long*)( local_90 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }

         local_88 = 0;
         local_78 = "Bone2D";
         local_90 = 0;
         local_70 = 6;
         String::parse_latin1((StrRange*)&local_90);
         local_78 = "bone2d_node";
         local_a0 = 0;
         local_70 = 0xb;
         String::parse_latin1((StrRange*)&local_a0);
         String::operator +((String*)&local_98, (String*)&local_a8);
         local_78 = (char*)CONCAT44(local_78._4_4_, 0x16);
         local_70 = 0;
         if (local_98 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
         }

         local_68 = 0;
         local_60 = 0x1a;
         local_58 = 0;
         if (local_90 == 0) {
            LAB_00101ffb:local_50 = 6;
            StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
            lVar4 = *(long*)param_1;
         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
            local_50 = 6;
            if (local_60 != 0x11) goto LAB_00101ffb;
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

            lVar4 = *(long*)param_1;
         }

         if (lVar4 == 0) {
            pauVar6 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_1 = pauVar6;
            *(undefined4*)pauVar6[1] = 0;
            *pauVar6 = (undefined1[16])0x0;
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
         lVar4 = plVar1[1];
         *(undefined8*)( puVar5 + 0xc ) = 0;
         *(long**)( puVar5 + 0x10 ) = plVar1;
         *(long*)( puVar5 + 0xe ) = lVar4;
         if (lVar4 != 0) {
            *(undefined4**)( lVar4 + 0x30 ) = puVar5;
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

         lVar4 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar1 = (long*)( local_70 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         lVar4 = local_98;
         if (local_98 != 0) {
            LOCK();
            plVar1 = (long*)( local_98 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_98 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         lVar4 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar1 = (long*)( local_a0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         lVar4 = local_90;
         if (local_90 != 0) {
            LOCK();
            plVar1 = (long*)( local_90 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }

         if (lVar7 != 0) {
            local_88 = 0;
            local_78 = "";
            local_90 = 0;
            local_70 = 0;
            String::parse_latin1((StrRange*)&local_90);
            local_78 = "magnet_position";
            local_a0 = 0;
            local_70 = 0xf;
            String::parse_latin1((StrRange*)&local_a0);
            String::operator +((String*)&local_98, (String*)&local_a8);
            local_78 = (char*)CONCAT44(local_78._4_4_, 5);
            local_70 = 0;
            if (local_98 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
            }

            local_68 = 0;
            local_60 = 0;
            local_58 = 0;
            if (local_90 == 0) {
               LAB_001020c3:local_50 = 6;
               StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
               lVar4 = *(long*)param_1;
            }
 else {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
               local_50 = 6;
               if (local_60 != 0x11) goto LAB_001020c3;
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

               lVar4 = *(long*)param_1;
            }

            if (lVar4 == 0) {
               pauVar6 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])param_1 = pauVar6;
               *(undefined4*)pauVar6[1] = 0;
               *pauVar6 = (undefined1[16])0x0;
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

            puVar5[10] = local_50;
            plVar1 = *(long**)param_1;
            lVar4 = plVar1[1];
            *(undefined8*)( puVar5 + 0xc ) = 0;
            *(long**)( puVar5 + 0x10 ) = plVar1;
            *(long*)( puVar5 + 0xe ) = lVar4;
            if (lVar4 != 0) {
               *(undefined4**)( lVar4 + 0x30 ) = puVar5;
            }

            plVar1[1] = (long)puVar5;
            if (*plVar1 == 0) {
               *plVar1 = (long)puVar5;
            }

            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
               StringName::unref();
            }

         }

         if (( *(long*)( this + 0x2a8 ) != 0 ) && ( *(long*)( *(long*)( this + 0x2a8 ) + -8 ) + -1 == lVar7 )) {
            local_88 = 0;
            local_78 = "";
            local_90 = 0;
            local_70 = 0;
            String::parse_latin1((StrRange*)&local_90);
            local_78 = "use_target_rotation";
            local_a0 = 0;
            local_70 = 0x13;
            String::parse_latin1((StrRange*)&local_a0);
            String::operator +((String*)&local_98, (String*)&local_a8);
            local_78 = (char*)CONCAT44(local_78._4_4_, 1);
            local_70 = 0;
            if (local_98 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
            }

            local_68 = 0;
            local_60 = 0;
            local_58 = 0;
            if (local_90 == 0) {
               LAB_00102273:local_50 = 6;
               StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
               LAB_00102280:lVar4 = *(long*)param_1;
            }
 else {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
               local_50 = 6;
               if (local_60 != 0x11) goto LAB_00102273;
               StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
               if (local_68 == local_80) {
                  if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                     StringName::unref();
                  }

                  goto LAB_00102280;
               }

               StringName::unref();
               lVar4 = *(long*)param_1;
               local_68 = local_80;
            }

            if (lVar4 == 0) {
               pauVar6 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])param_1 = pauVar6;
               *(undefined4*)pauVar6[1] = 0;
               *pauVar6 = (undefined1[16])0x0;
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

            puVar5[10] = local_50;
            plVar1 = *(long**)param_1;
            lVar4 = plVar1[1];
            *(undefined8*)( puVar5 + 0xc ) = 0;
            *(long**)( puVar5 + 0x10 ) = plVar1;
            *(long*)( puVar5 + 0xe ) = lVar4;
            if (lVar4 != 0) {
               *(undefined4**)( lVar4 + 0x30 ) = puVar5;
            }

            plVar1[1] = (long)puVar5;
            if (*plVar1 == 0) {
               *plVar1 = (long)puVar5;
            }

            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
               StringName::unref();
            }

         }

         lVar4 = local_a8;
         if (local_a8 != 0) {
            LOCK();
            plVar1 = (long*)( local_a8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a8 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         lVar7 = lVar7 + 1;
         lVar4 = *(long*)( this + 0x2a8 );
      }
 while ( lVar4 != 0 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SkeletonModification2DFABRIK::_bind_methods() */void SkeletonModification2DFABRIK::_bind_methods(void) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined *puVar4;
   MethodBind *pMVar5;
   uint uVar6;
   long *plVar7;
   long lVar8;
   long in_FS_OFFSET;
   undefined8 local_158;
   long local_150;
   long local_148;
   long local_140;
   long local_138;
   long local_130;
   char *local_128;
   undefined8 local_120;
   char *local_118;
   long local_110;
   long *local_108;
   int local_100;
   long local_f8;
   undefined4 local_f0;
   char *local_e8;
   undefined8 local_e0;
   char *local_d8;
   char *pcStack_d0;
   undefined8 local_c8;
   char *local_b8;
   char *pcStack_b0;
   undefined8 local_a8;
   char *local_98;
   char *pcStack_90;
   undefined8 local_88;
   char *local_78;
   char *pcStack_70;
   undefined8 local_68;
   char **local_58;
   undefined1 auStack_50[16];
   long local_40;
   puVar4 = PTR__LC45_001124c8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_e0 = 0;
   local_e8 = "target_nodepath";
   uVar6 = ( uint ) & local_58;
   local_58 = &local_e8;
   D_METHODP((char*)&local_118, (char***)"set_target_node", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<SkeletonModification2DFABRIK,NodePath_const&>(set_target_node);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_108;
   if (local_108 != (long*)0x0) {
      LOCK();
      plVar7 = local_108 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_108 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_108[-1];
         lVar8 = 0;
         local_108 = (long*)0x0;
         plVar7 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_118, (char***)"get_target_node", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<SkeletonModification2DFABRIK,NodePath>(get_target_node);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_108;
   if (local_108 != (long*)0x0) {
      LOCK();
      plVar7 = local_108 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_108 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_108[-1];
         lVar8 = 0;
         local_108 = (long*)0x0;
         plVar7 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   local_e8 = "length";
   local_e0 = 0;
   local_58 = &local_e8;
   D_METHODP((char*)&local_118, (char***)"set_fabrik_data_chain_length", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<SkeletonModification2DFABRIK,int>(set_fabrik_data_chain_length);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_108;
   if (local_108 != (long*)0x0) {
      LOCK();
      plVar7 = local_108 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_108 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_108[-1];
         lVar8 = 0;
         local_108 = (long*)0x0;
         plVar7 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_118, (char***)"get_fabrik_data_chain_length", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<SkeletonModification2DFABRIK,int>(get_fabrik_data_chain_length);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_108;
   if (local_108 != (long*)0x0) {
      LOCK();
      plVar7 = local_108 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_108 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_108[-1];
         lVar8 = 0;
         local_108 = (long*)0x0;
         plVar7 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   local_68 = 0;
   local_78 = puVar4;
   pcStack_70 = "bone2d_nodepath";
   auStack_50._0_8_ = &pcStack_70;
   local_58 = &local_78;
   D_METHODP((char*)&local_118, (char***)"set_fabrik_joint_bone2d_node", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<SkeletonModification2DFABRIK,int,NodePath_const&>(set_fabrik_joint_bone2d_node);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_108;
   if (local_108 != (long*)0x0) {
      LOCK();
      plVar7 = local_108 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_108 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_108[-1];
         lVar8 = 0;
         local_108 = (long*)0x0;
         plVar7 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   local_78 = "joint_idx";
   pcStack_70 = (char*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)&local_118, (char***)"get_fabrik_joint_bone2d_node", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<SkeletonModification2DFABRIK,NodePath,int>(get_fabrik_joint_bone2d_node);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_108;
   if (local_108 != (long*)0x0) {
      LOCK();
      plVar7 = local_108 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_108 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_108[-1];
         lVar8 = 0;
         local_108 = (long*)0x0;
         plVar7 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   local_88 = 0;
   local_98 = puVar4;
   pcStack_90 = "bone_idx";
   auStack_50._0_8_ = &pcStack_90;
   local_58 = &local_98;
   D_METHODP((char*)&local_118, (char***)"set_fabrik_joint_bone_index", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<SkeletonModification2DFABRIK,int,int>(set_fabrik_joint_bone_index);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_108;
   if (local_108 != (long*)0x0) {
      LOCK();
      plVar7 = local_108 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_108 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_108[-1];
         lVar8 = 0;
         local_108 = (long*)0x0;
         plVar7 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   local_78 = "joint_idx";
   pcStack_70 = (char*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)&local_118, (char***)"get_fabrik_joint_bone_index", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<SkeletonModification2DFABRIK,int,int>(get_fabrik_joint_bone_index);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_108;
   if (local_108 != (long*)0x0) {
      LOCK();
      plVar7 = local_108 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_108 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_108[-1];
         lVar8 = 0;
         local_108 = (long*)0x0;
         plVar7 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   local_a8 = 0;
   local_b8 = puVar4;
   pcStack_b0 = "magnet_position";
   auStack_50._0_8_ = &pcStack_b0;
   local_58 = &local_b8;
   D_METHODP((char*)&local_118, (char***)"set_fabrik_joint_magnet_position", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<SkeletonModification2DFABRIK,int,Vector2>(set_fabrik_joint_magnet_position);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_108;
   if (local_108 != (long*)0x0) {
      LOCK();
      plVar7 = local_108 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_108 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_108[-1];
         lVar8 = 0;
         local_108 = (long*)0x0;
         plVar7 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   local_78 = "joint_idx";
   pcStack_70 = (char*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)&local_118, (char***)"get_fabrik_joint_magnet_position", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<SkeletonModification2DFABRIK,Vector2,int>(get_fabrik_joint_magnet_position);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_108;
   if (local_108 != (long*)0x0) {
      LOCK();
      plVar7 = local_108 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_108 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_108[-1];
         lVar8 = 0;
         local_108 = (long*)0x0;
         plVar7 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   local_c8 = 0;
   local_d8 = puVar4;
   pcStack_d0 = "use_target_rotation";
   auStack_50._0_8_ = &pcStack_d0;
   local_58 = &local_d8;
   D_METHODP((char*)&local_118, (char***)"set_fabrik_joint_use_target_rotation", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<SkeletonModification2DFABRIK,int,bool>(set_fabrik_joint_use_target_rotation);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_108;
   if (local_108 != (long*)0x0) {
      LOCK();
      plVar7 = local_108 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_108 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_108[-1];
         lVar8 = 0;
         local_108 = (long*)0x0;
         plVar7 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   local_78 = "joint_idx";
   pcStack_70 = (char*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)&local_118, (char***)"get_fabrik_joint_use_target_rotation", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<SkeletonModification2DFABRIK,bool,int>(get_fabrik_joint_use_target_rotation);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_108;
   if (local_108 != (long*)0x0) {
      LOCK();
      plVar7 = local_108 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_108 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_108[-1];
         lVar8 = 0;
         local_108 = (long*)0x0;
         plVar7 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar7 = plVar7 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_130, true);
   _scs_create((char*)&local_138, true);
   local_140 = 0;
   local_118 = "Node2D";
   local_148 = 0;
   local_110 = 6;
   String::parse_latin1((StrRange*)&local_148);
   local_150 = 0;
   local_118 = "target_nodepath";
   local_110 = 0xf;
   String::parse_latin1((StrRange*)&local_150);
   local_118 = (char*)CONCAT44(local_118._4_4_, 0x16);
   local_110 = 0;
   if (local_150 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_110, (CowData*)&local_150);
   }

   local_108 = (long*)0x0;
   local_100 = 0x1a;
   local_f8 = 0;
   if (local_148 == 0) {
      LAB_0010363b:local_f0 = 6;
      StringName::operator =((StringName*)&local_108, (StringName*)&local_140);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_148);
      local_f0 = 6;
      if (local_100 != 0x11) goto LAB_0010363b;
      StringName::StringName((StringName*)&local_128, (String*)&local_f8, false);
      if (local_108 == (long*)local_128) {
         if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_108 = (long*)local_128;
      }

   }

   local_158 = 0;
   local_128 = "SkeletonModification2DFABRIK";
   local_120 = 0x1c;
   String::parse_latin1((StrRange*)&local_158);
   StringName::StringName((StringName*)&local_128, (String*)&local_158, false);
   ClassDB::add_property((StringName*)&local_128, (PropertyInfo*)&local_118, (StringName*)&local_138, (StringName*)&local_130, -1);
   if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   lVar2 = local_f8;
   if (local_f8 != 0) {
      LOCK();
      plVar1 = (long*)( local_f8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_f8 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_108 != (long*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_110;
   if (local_110 != 0) {
      LOCK();
      plVar1 = (long*)( local_110 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_110 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_138 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_130, true);
   _scs_create((char*)&local_138, true);
   local_118 = "0, 100, 1";
   local_140 = 0;
   local_148 = 0;
   local_110 = 9;
   String::parse_latin1((StrRange*)&local_148);
   local_150 = 0;
   local_118 = "fabrik_data_chain_length";
   local_110 = 0x18;
   String::parse_latin1((StrRange*)&local_150);
   local_118 = (char*)CONCAT44(local_118._4_4_, 2);
   local_110 = 0;
   if (local_150 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_110, (CowData*)&local_150);
   }

   local_108 = (long*)0x0;
   local_100 = 1;
   local_f8 = 0;
   if (local_148 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_148);
      local_f0 = 6;
      if (local_100 == 0x11) {
         StringName::StringName((StringName*)&local_128, (String*)&local_f8, false);
         if (local_108 == (long*)local_128) {
            if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_108 = (long*)local_128;
         }

         goto LAB_00103920;
      }

   }

   local_f0 = 6;
   StringName::operator =((StringName*)&local_108, (StringName*)&local_140);
   LAB_00103920:local_158 = 0;
   local_128 = "SkeletonModification2DFABRIK";
   local_120 = 0x1c;
   String::parse_latin1((StrRange*)&local_158);
   StringName::StringName((StringName*)&local_128, (String*)&local_158, false);
   ClassDB::add_property((StringName*)&local_128, (PropertyInfo*)&local_118, (StringName*)&local_138, (StringName*)&local_130, -1);
   if (( StringName::configured != '\0' ) && ( local_128 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   lVar2 = local_f8;
   if (local_f8 != 0) {
      LOCK();
      plVar1 = (long*)( local_f8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_f8 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_108 != (long*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_110;
   if (local_110 != 0) {
      LOCK();
      plVar1 = (long*)( local_110 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_110 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   if (( ( StringName::configured != '\0' ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_138 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_130 != 0 ) ) )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* SkeletonModification2DFABRIK::~SkeletonModification2DFABRIK() */void SkeletonModification2DFABRIK::~SkeletonModification2DFABRIK(SkeletonModification2DFABRIK *this) {
   long *plVar1;
   long lVar2;
   bool bVar3;
   *(undefined***)this = &PTR__initialize_classv_00111e00;
   NodePath::~NodePath((NodePath*)( this + 0x2c0 ));
   if (*(long*)( this + 0x2b8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2b8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x2b8 );
         *(undefined8*)( this + 0x2b8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_unref((CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>*)( this + 0x2a8 ));
   bVar3 = StringName::configured != '\0';
   *(code**)this = Skeleton2D::get_bone_count;
   if (bVar3) {
      if (*(long*)( this + 0x280 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103ced;
      }

      if (*(long*)( this + 0x268 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103ced;
      }

      if (*(long*)( this + 0x250 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00103ced:Resource::~Resource((Resource*)this);
   return;
}
/* CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_copy_on_write() [clone .isra.0] */void CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_copy_on_write(CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   ulong uVar5;
   undefined4 *puVar6;
   long lVar7;
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
      lVar7 = 0;
      *puVar3 = 1;
      puVar3[1] = lVar1;
      puVar4 = puVar3 + 2;
      if (lVar1 != 0) {
         do {
            puVar6 = (undefined4*)( (long)puVar4 + *(long*)this + ( -0x10 - (long)puVar3 ) );
            lVar7 = lVar7 + 1;
            *(undefined4*)puVar4 = *puVar6;
            NodePath::NodePath((NodePath*)( puVar4 + 1 ), (NodePath*)( puVar6 + 2 ));
            puVar4[2] = *(undefined8*)( puVar6 + 4 );
            puVar4[3] = *(undefined8*)( puVar6 + 6 );
            *(undefined2*)( puVar4 + 4 ) = *(undefined2*)( puVar6 + 8 );
            puVar4 = puVar4 + 5;
         }
 while ( lVar1 != lVar7 );
      }

      _unref(this);
      *(undefined8**)this = puVar3 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* SkeletonModification2DFABRIK::set_fabrik_joint_use_target_rotation(int, bool) */void SkeletonModification2DFABRIK::set_fabrik_joint_use_target_rotation(SkeletonModification2DFABRIK *this, int param_1, bool param_2) {
   long lVar1;
   long lVar2;
   lVar2 = (long)param_1;
   lVar1 = *(long*)( this + 0x2a8 );
   if (param_1 < 0) {
      if (lVar1 != 0) {
         lVar1 = *(long*)( lVar1 + -8 );
         goto LAB_00103ef1;
      }

   }
 else if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + -8 );
      if (lVar2 < lVar1) {
         CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_copy_on_write((CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>*)( this + 0x2a8 ));
         *(bool*)( *(long*)( this + 0x2a8 ) + lVar2 * 0x28 + 0x20 ) = param_2;
         return;
      }

      goto LAB_00103ef1;
   }

   lVar1 = 0;
   LAB_00103ef1:_err_print_index_error("set_fabrik_joint_use_target_rotation", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x1a4, lVar2, lVar1, "p_joint_idx", "fabrik_data_chain.size()", "FABRIK joint out of range!", false, false);
   return;
}
/* SkeletonModification2DFABRIK::set_fabrik_joint_magnet_position(int, Vector2) */void SkeletonModification2DFABRIK::set_fabrik_joint_magnet_position(undefined8 param_1_00, SkeletonModification2DFABRIK *this, int param_1) {
   long lVar1;
   long lVar2;
   lVar2 = (long)param_1;
   lVar1 = *(long*)( this + 0x2a8 );
   if (param_1 < 0) {
      if (lVar1 != 0) {
         lVar1 = *(long*)( lVar1 + -8 );
         goto LAB_00103fa1;
      }

   }
 else if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + -8 );
      if (lVar2 < lVar1) {
         CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_copy_on_write((CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>*)( this + 0x2a8 ));
         *(undefined8*)( *(long*)( this + 0x2a8 ) + lVar2 * 0x28 + 0x18 ) = param_1_00;
         return;
      }

      goto LAB_00103fa1;
   }

   lVar1 = 0;
   LAB_00103fa1:_err_print_index_error("set_fabrik_joint_magnet_position", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x19a, lVar2, lVar1, "p_joint_idx", "fabrik_data_chain.size()", "FABRIK joint out of range!", false, false);
   return;
}
/* SkeletonModification2DFABRIK::set_fabrik_joint_bone_index(int, int) */void SkeletonModification2DFABRIK::set_fabrik_joint_bone_index(SkeletonModification2DFABRIK *this, int param_1, int param_2) {
   CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D> *this_00;
   undefined8 uVar1;
   code *pcVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   CowData<char32_t> local_70[8];
   String local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   lVar6 = (long)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = *(long*)( this + 0x2a8 );
   if (param_1 < 0) {
      if (lVar4 == 0) goto LAB_00104390;
      lVar4 = *(long*)( lVar4 + -8 );
      LAB_001042a5:_err_print_index_error("set_fabrik_joint_bone_index", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x180, lVar6, lVar4, "p_joint_idx", "fabrik_data_chain.size()", "FABRIK joint out of range!", false, false);
   }
 else {
      if (lVar4 == 0) {
         LAB_00104390:lVar4 = 0;
         goto LAB_001042a5;
      }

      lVar4 = *(long*)( lVar4 + -8 );
      if (lVar4 <= lVar6) goto LAB_001042a5;
      if (-1 < param_2) {
         if (this[0x24d] == (SkeletonModification2DFABRIK)0x0) {
            LAB_00104272:CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_copy_on_write((CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>*)( this + 0x2a8 ));
            *(int*)( *(long*)( this + 0x2a8 ) + lVar6 * 0x28 ) = param_2;
         }
 else {
            if (*(long*)( *(long*)( this + 0x240 ) + 0x240 ) == 0) {
               local_60 = 0;
               local_58 = " bone index for this modification...";
               local_50 = 0x24;
               String::parse_latin1((StrRange*)&local_60);
               itos((long)local_70);
               operator+((char *)
               local_68,(String*)"Cannot verify the FABRIK joint ";
               String::operator +((String*)&local_58, local_68);
               _err_print_error("set_fabrik_joint_bone_index", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x18a, (String*)&local_58, 0, 1);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
               CowData<char32_t>::_unref(local_70);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (*(long*)( this + 0x2a8 ) == 0) goto LAB_00104308;
               lVar4 = *(long*)( *(long*)( this + 0x2a8 ) + -8 );
               if (lVar4 <= lVar6) goto LAB_0010430b;
               goto LAB_00104272;
            }

            iVar3 = Skeleton2D::get_bone_count();
            if (iVar3 <= param_2) {
               iVar3 = Skeleton2D::get_bone_count();
               _err_print_index_error("set_fabrik_joint_bone_index", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x185, (long)param_2, (long)iVar3, "p_bone_idx", "stack->skeleton->get_bone_count()", "Passed-in Bone index is out of range!", false, false);
               goto LAB_001042df;
            }

            if (*(long*)( this + 0x2a8 ) == 0) {
               LAB_00104308:lVar4 = 0;
               LAB_0010430b:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar6, lVar4, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar4 = *(long*)( *(long*)( this + 0x2a8 ) + -8 );
            if (lVar4 <= lVar6) goto LAB_0010430b;
            this_00 = (CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>*)( this + 0x2a8 );
            lVar5 = lVar6 * 0x28;
            CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_copy_on_write(this_00);
            *(int*)( *(long*)( this + 0x2a8 ) + lVar5 ) = param_2;
            lVar4 = Skeleton2D::get_bone((int)*(undefined8*)( *(long*)( this + 0x240 ) + 0x240 ));
            uVar1 = *(undefined8*)( lVar4 + 0x60 );
            if (*(long*)( this + 0x2a8 ) == 0) goto LAB_00104308;
            lVar4 = *(long*)( *(long*)( this + 0x2a8 ) + -8 );
            if (lVar4 <= lVar6) goto LAB_0010430b;
            CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_copy_on_write(this_00);
            *(undefined8*)( *(long*)( this + 0x2a8 ) + 0x10 + lVar5 ) = uVar1;
            uVar1 = *(undefined8*)( *(long*)( this + 0x240 ) + 0x240 );
            Skeleton2D::get_bone((int)uVar1);
            Node::get_path_to((Node*)&local_58, SUB81(uVar1, 0));
            if (*(long*)( this + 0x2a8 ) == 0) goto LAB_00104308;
            lVar4 = *(long*)( *(long*)( this + 0x2a8 ) + -8 );
            if (lVar4 <= lVar6) goto LAB_0010430b;
            CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_copy_on_write(this_00);
            NodePath::operator =((NodePath*)( lVar5 + *(long*)( this + 0x2a8 ) + 8 ), (NodePath*)&local_58);
            NodePath::~NodePath((NodePath*)&local_58);
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Object::notify_property_list_changed();
            return;
         }

         goto LAB_001043f5;
      }

      _err_print_error("set_fabrik_joint_bone_index", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x181, "Condition \"p_bone_idx < 0\" is true.", "Bone index is out of range: The index is too low!", 0, 0);
   }

   LAB_001042df:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001043f5:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* SkeletonModification2DFABRIK::fabrik_joint_update_bone2d_cache(int) */void SkeletonModification2DFABRIK::fabrik_joint_update_bone2d_cache(SkeletonModification2DFABRIK *this, int param_1) {
   CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D> *this_00;
   NodePath *pNVar1;
   code *pcVar2;
   char cVar3;
   undefined4 uVar4;
   long lVar5;
   char *pcVar6;
   undefined8 uVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long in_FS_OFFSET;
   CowData<char32_t> local_60[8];
   String local_58[8];
   undefined8 local_50;
   String local_48[8];
   long local_40;
   lVar8 = (long)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar5 = *(long*)( this + 0x2a8 );
   if (param_1 < 0) {
      if (lVar5 == 0) goto LAB_00104690;
      lVar5 = *(long*)( lVar5 + -8 );
   }
 else if (lVar5 == 0) {
      LAB_00104690:lVar5 = 0;
   }
 else {
      lVar5 = *(long*)( lVar5 + -8 );
      if (lVar8 < lVar5) {
         if (this[0x24d] == (SkeletonModification2DFABRIK)0x0) goto LAB_001045d8;
         if (*(long*)( this + 0x240 ) == 0) {
            if (fabrik_joint_update_bone2d_cache(int)::first_print !='\0') {
               _err_print_error("fabrik_joint_update_bone2d_cache", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x145, "Cannot update FABRIK Bone2D cache: modification is not properly setup!", 0, 0);
               fabrik_joint_update_bone2d_cache(int)::first_print =
               '\0';
            }

            goto LAB_001045d8;
         }

         this_00 = (CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>*)( this + 0x2a8 );
         lVar10 = lVar8 * 0x28;
         CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_copy_on_write(this_00);
         lVar5 = *(long*)( this + 0x2a8 );
         pNVar1 = *(NodePath**)( *(long*)( this + 0x240 ) + 0x240 );
         *(undefined8*)( lVar5 + lVar10 + 0x10 ) = 0;
         if (( pNVar1 == (NodePath*)0x0 ) || ( ( (byte)pNVar1[0x2fa] & 0x40 ) == 0 )) goto LAB_001045d8;
         if (lVar5 != 0) {
            lVar5 = *(long*)( lVar5 + -8 );
            if (lVar5 <= lVar8) goto LAB_0010469b;
            cVar3 = Node::has_node(pNVar1);
            if (cVar3 == '\0') goto LAB_001045d8;
            if (*(long*)( this + 0x2a8 ) != 0) {
               lVar5 = *(long*)( *(long*)( this + 0x2a8 ) + -8 );
               if (lVar5 <= lVar8) goto LAB_0010469b;
               lVar5 = Node::get_node(*(NodePath**)( *(long*)( this + 0x240 ) + 0x240 ));
               if (( lVar5 == 0 ) || ( *(long*)( *(long*)( this + 0x240 ) + 0x240 ) == lVar5 )) {
                  local_50 = 0;
                  String::parse_latin1((String*)&local_50, " Bone2D cache: node is this modification\'s skeleton or cannot be found!");
                  itos((long)local_60);
                  operator+((char *)
                  local_58,(String*)"Cannot update FABRIK joint ";
                  String::operator +(local_48, local_58);
                  pcVar6 = "Condition \"!node || stack->skeleton == node\" is true.";
                  uVar7 = 0x14f;
               }
 else {
                  if (( *(byte*)( lVar5 + 0x2fa ) & 0x40 ) != 0) {
                     uVar7 = *(undefined8*)( lVar5 + 0x60 );
                     if (*(long*)( this + 0x2a8 ) != 0) {
                        lVar9 = *(long*)( *(long*)( this + 0x2a8 ) + -8 );
                        if (lVar9 <= lVar8) goto LAB_00104788;
                        CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_copy_on_write(this_00);
                        *(undefined8*)( *(long*)( this + 0x2a8 ) + 0x10 + lVar10 ) = uVar7;
                        lVar5 = __dynamic_cast(lVar5, &Object::typeinfo, &Bone2D::typeinfo, 0);
                        if (lVar5 == 0) {
                           local_50 = 0;
                           String::parse_latin1((String*)&local_50, " Bone2D cache: Nodepath to Bone2D is not a Bone2D node!");
                           itos((long)local_60);
                           operator+((char *)
                           local_58,(String*)"FABRIK joint ";
                           String::operator +(local_48, local_58);
                           pcVar6 = "Method/function failed.";
                           uVar7 = 0x159;
                           goto LAB_0010474b;
                        }

                        uVar4 = Bone2D::get_index_in_skeleton();
                        if (*(long*)( this + 0x2a8 ) != 0) {
                           lVar9 = *(long*)( *(long*)( this + 0x2a8 ) + -8 );
                           if (lVar8 < lVar9) {
                              CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_copy_on_write(this_00);
                              *(undefined4*)( *(long*)( this + 0x2a8 ) + lVar10 ) = uVar4;
                              goto LAB_001045d8;
                           }

                           goto LAB_00104788;
                        }

                     }

                     lVar9 = 0;
                     LAB_00104788:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar8, lVar9, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar2 = (code*)invalidInstructionException();
                     ( *pcVar2 )();
                  }

                  local_50 = 0;
                  String::parse_latin1((String*)&local_50, " Bone2D cache: node is not in scene tree!");
                  itos((long)local_60);
                  operator+((char *)
                  local_58,(String*)"Cannot update FABRIK joint ";
                  String::operator +(local_48, local_58);
                  pcVar6 = "Condition \"!node->is_inside_tree()\" is true.";
                  uVar7 = 0x151;
               }

               LAB_0010474b:_err_print_error("fabrik_joint_update_bone2d_cache", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", uVar7, pcVar6, (CowData<char32_t>*)local_48, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_48);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               CowData<char32_t>::_unref(local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
               goto LAB_001045d8;
            }

         }

         lVar5 = 0;
         LAB_0010469b:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar5, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   _err_print_index_error("fabrik_joint_update_bone2d_cache", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x142, lVar8, lVar5, "p_joint_idx", "fabrik_data_chain.size()", "Cannot update bone2d cache: joint index out of range!", false, false);
   LAB_001045d8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SkeletonModification2DFABRIK::_setup_modification(SkeletonModificationStack2D*) */void SkeletonModification2DFABRIK::_setup_modification(SkeletonModification2DFABRIK *this, SkeletonModificationStack2D *param_1) {
   long lVar1;
   long lVar2;
   *(SkeletonModificationStack2D**)( this + 0x240 ) = param_1;
   if (param_1 == (SkeletonModificationStack2D*)0x0) {
      return;
   }

   lVar1 = *(long*)( param_1 + 0x240 );
   this[0x24d] = (SkeletonModification2DFABRIK)0x1;
   if (( lVar1 != 0 ) && ( lVar1 = lVar1 != 0 )) {
      lVar2 = 0;
      do {
         if (*(long*)( lVar1 + -8 ) <= lVar2) break;
         fabrik_joint_update_bone2d_cache(this, (int)lVar2);
         lVar1 = *(long*)( this + 0x2a8 );
         lVar2 = lVar2 + 1;
      }
 while ( lVar1 != 0 );
   }

   update_target_cache(this);
   return;
}
/* SkeletonModification2DFABRIK::set_fabrik_joint_bone2d_node(int, NodePath const&) */void SkeletonModification2DFABRIK::set_fabrik_joint_bone2d_node(SkeletonModification2DFABRIK *this, int param_1, NodePath *param_2) {
   long lVar1;
   long lVar2;
   lVar2 = (long)param_1;
   lVar1 = *(long*)( this + 0x2a8 );
   if (param_1 < 0) {
      if (lVar1 != 0) {
         lVar1 = *(long*)( lVar1 + -8 );
         goto LAB_001049c9;
      }

   }
 else if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + -8 );
      if (lVar2 < lVar1) {
         CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_copy_on_write((CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>*)( this + 0x2a8 ));
         NodePath::operator =((NodePath*)( *(long*)( this + 0x2a8 ) + 8 + lVar2 * 0x28 ), param_2);
         fabrik_joint_update_bone2d_cache(this, param_1);
         Object::notify_property_list_changed();
         return;
      }

      goto LAB_001049c9;
   }

   lVar1 = 0;
   LAB_001049c9:_err_print_index_error("set_fabrik_joint_bone2d_node", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x173, lVar2, lVar1, "p_joint_idx", "fabrik_data_chain.size()", "FABRIK joint out of range!", false, false);
   return;
}
/* SkeletonModification2DFABRIK::_set(StringName const&, Variant const&) */undefined4 SkeletonModification2DFABRIK::_set(SkeletonModification2DFABRIK *this, StringName *param_1, Variant *param_2) {
   long *plVar1;
   char *__s;
   long lVar2;
   char cVar3;
   bool bVar4;
   undefined4 uVar5;
   int iVar6;
   int iVar7;
   long lVar8;
   long lVar9;
   long in_FS_OFFSET;
   long local_68;
   String local_60[8];
   char *local_58;
   size_t local_50;
   long local_40;
   lVar9 = *(long*)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar9 == 0) {
      LAB_00104c11:local_68 = 0;
   }
 else {
      __s = *(char**)( lVar9 + 8 );
      local_68 = 0;
      if (__s == (char*)0x0) {
         plVar1 = (long*)( *(long*)( lVar9 + 0x10 ) + -0x10 );
         if (*(long*)( lVar9 + 0x10 ) == 0) goto LAB_00104c11;
         do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_00104c11;
            LOCK();
            lVar8 = *plVar1;
            bVar4 = lVar2 == lVar8;
            if (bVar4) {
               *plVar1 = lVar2 + 1;
               lVar8 = lVar2;
            }

            UNLOCK();
         }
 while ( !bVar4 );
         if (lVar8 != -1) {
            local_68 = *(long*)( lVar9 + 0x10 );
         }

      }
 else {
         local_50 = strlen(__s);
         local_58 = __s;
         String::parse_latin1((StrRange*)&local_68);
      }

   }

   uVar5 = String::begins_with((char*)&local_68);
   if ((char)uVar5 != '\0') {
      iVar7 = (int)&local_68;
      String::get_slicec((wchar32)(CowData<char32_t>*)&local_58, iVar7);
      iVar6 = String::to_int();
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      String::get_slicec((wchar32)local_60, iVar7);
      if (iVar6 < 0) {
         if (*(long*)( this + 0x2a8 ) == 0) goto LAB_00104d20;
         lVar9 = *(long*)( *(long*)( this + 0x2a8 ) + -8 );
         LAB_00104cb3:_err_print_index_error("_set", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x28, (long)iVar6, lVar9, "which", "fabrik_data_chain.size()", "", false, false);
      }
 else {
         if (*(long*)( this + 0x2a8 ) == 0) {
            LAB_00104d20:lVar9 = 0;
            goto LAB_00104cb3;
         }

         lVar9 = *(long*)( *(long*)( this + 0x2a8 ) + -8 );
         if (lVar9 <= iVar6) goto LAB_00104cb3;
         cVar3 = String::operator ==(local_60, "bone2d_node");
         if (cVar3 != '\0') {
            Variant::operator_cast_to_NodePath((Variant*)&local_58);
            set_fabrik_joint_bone2d_node(this, iVar6, (NodePath*)&local_58);
            NodePath::~NodePath((NodePath*)&local_58);
            LAB_00104bb4:CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
            goto LAB_00104aa5;
         }

         cVar3 = String::operator ==(local_60, "bone_index");
         if (cVar3 != '\0') {
            iVar7 = Variant::operator_cast_to_int(param_2);
            set_fabrik_joint_bone_index(this, iVar6, iVar7);
            goto LAB_00104bb4;
         }

         cVar3 = String::operator ==(local_60, "magnet_position");
         if (cVar3 != '\0') {
            Variant::operator_cast_to_Vector2(param_2);
            set_fabrik_joint_magnet_position(this);
            goto LAB_00104bb4;
         }

         cVar3 = String::operator ==(local_60, "use_target_rotation");
         if (cVar3 != '\0') {
            bVar4 = Variant::operator_cast_to_bool(param_2);
            set_fabrik_joint_use_target_rotation(this, iVar6, bVar4);
            goto LAB_00104bb4;
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   }

   uVar5 = 0;
   LAB_00104aa5:lVar9 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar9 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* SkeletonModification2DFABRIK::_execute(float) */void SkeletonModification2DFABRIK::_execute(float param_1) {
   CowData<Transform2D> *this;
   undefined4 uVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   char cVar5;
   int iVar6;
   long *plVar7;
   long lVar8;
   ulong uVar9;
   undefined8 *puVar10;
   undefined8 *puVar11;
   Transform2D *pTVar12;
   undefined8 *puVar13;
   long lVar14;
   uint uVar15;
   ulong *puVar16;
   long lVar17;
   SkeletonModification2DFABRIK *in_RDI;
   long lVar18;
   long in_FS_OFFSET;
   bool bVar19;
   float extraout_XMM0_Da;
   float fVar20;
   float fVar21;
   float fVar22;
   float extraout_XMM0_Db;
   undefined8 uVar23;
   float fVar24;
   long local_118;
   float local_f0;
   float local_ec;
   undefined8 local_e8;
   undefined8 uStack_e0;
   undefined8 local_d8;
   CowData<char32_t> local_c0[8];
   CowData<char32_t> local_b8[8];
   undefined8 local_b0;
   String local_a8[8];
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( *(long*)( in_RDI + 0x240 ) == 0 ) || ( in_RDI[0x24d] == (SkeletonModification2DFABRIK)0x0 ) ) || ( *(long*)( *(long*)( in_RDI + 0x240 ) + 0x240 ) == 0 )) {
      _err_print_error("_execute", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x66, "Condition \"!stack || !is_setup || stack->skeleton == nullptr\" is true.", "Modification is not setup and therefore cannot execute!", 0, 0);
   }
 else if (in_RDI[0x24c] != (SkeletonModification2DFABRIK)0x0) {
      uVar9 = *(ulong*)( in_RDI + 0x2c8 );
      if (uVar9 == 0) {
         if (_execute(float)::first_print !='\0') {
            _err_print_error("_execute", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x6d, "Target cache is out of date. Attempting to update...", 0, 1);
            _execute(float)::first_print =
            '\0';
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            update_target_cache(in_RDI);
            return;
         }

         goto LAB_00105fdd;
      }

      if (( *(long*)( in_RDI + 0x2a8 ) == 0 ) || ( *(long*)( *(long*)( in_RDI + 0x2a8 ) + -8 ) < 2 )) {
         if (_execute(float)::first_print !='\0') {
            _err_print_error("_execute", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x73, "FABRIK requires at least two joints to operate! Cannot execute modification!", 0, 0);
            _execute(float)::first_print =
            '\0';
         }

         goto LAB_00105311;
      }

      uVar15 = (uint)uVar9 & 0xffffff;
      if (uVar15 < (uint)ObjectDB::slot_max) {
         while (true) {
            local_a8[0] = (String)0x0;
            LOCK();
            bVar19 = (char)ObjectDB::spin_lock == '\0';
            if (bVar19) {
               ObjectDB::spin_lock._0_1_ = '\x01';
            }

            UNLOCK();
            if (bVar19) break;
            do {} while ( (char)ObjectDB::spin_lock != '\0' );
         }
;
         puVar16 = (ulong*)( (ulong)uVar15 * 0x10 + ObjectDB::object_slots );
         if (( *puVar16 & 0x7fffffffff ) == ( uVar9 >> 0x18 & 0x7fffffffff )) {
            uVar9 = puVar16[1];
            ObjectDB::spin_lock._0_1_ = '\0';
            if (( ( uVar9 != 0 ) && ( plVar7 = (long*)__dynamic_cast(uVar9, &Object::typeinfo, &Node2D::typeinfo) ),param_1 = extraout_XMM0_Da,plVar7 != (long*)0x0 )) &&( ( *(byte*)( (long)plVar7 + 0x2fa ) & 0x40 ) != 0 )(**(code**)( *plVar7 + 0x298 ))(&local_e8);
            *(undefined8*)( in_RDI + 0x2dc ) = local_e8;
            *(undefined8*)( in_RDI + 0x2e4 ) = uStack_e0;
            *(undefined8*)( in_RDI + 0x2ec ) = local_d8;
            lVar8 = *(long*)( in_RDI + 0x2a8 );
            if (lVar8 == 0) {
               LAB_001055f1:lVar14 = 0;
            }
 else {
               lVar14 = *(long*)( lVar8 + -8 );
               if (0 < lVar14) {
                  if (*(long*)( lVar8 + 0x10 ) == 0) {
                     cVar5 = NodePath::is_empty();
                     if (cVar5 == '\0') {
                        fabrik_joint_update_bone2d_cache(in_RDI, 0);
                        _err_print_error("_execute", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x80, "Bone2D cache for origin joint is out of date. Updating...", 0, 1);
                     }

                     lVar8 = *(long*)( in_RDI + 0x2a8 );
                     if (lVar8 == 0) goto LAB_001055f1;
                     lVar14 = *(long*)( lVar8 + -8 );
                     if (lVar14 < 1) goto LAB_001055cf;
                  }

                  uVar15 = ( uint ) * (ulong*)( lVar8 + 0x10 ) & 0xffffff;
                  if (uVar15 < (uint)ObjectDB::slot_max) {
                     while (true) {
                        local_a8[0] = (String)0x0;
                        LOCK();
                        bVar19 = (char)ObjectDB::spin_lock == '\0';
                        if (bVar19) {
                           ObjectDB::spin_lock._0_1_ = '\x01';
                        }

                        UNLOCK();
                        if (bVar19) break;
                        do {} while ( (char)ObjectDB::spin_lock != '\0' );
                     }
;
                     puVar16 = (ulong*)( (ulong)uVar15 * 0x10 + ObjectDB::object_slots );
                     if (( *(ulong*)( lVar8 + 0x10 ) >> 0x18 & 0x7fffffffff ) == ( *puVar16 & 0x7fffffffff )) {
                        uVar9 = puVar16[1];
                        ObjectDB::spin_lock._0_1_ = '\0';
                        if (( ( uVar9 != 0 ) && ( plVar7 = (long*)__dynamic_cast(uVar9, &Object::typeinfo, &Bone2D::typeinfo, 0) ),plVar7 != (long*)0x0 )) &&( ( *(byte*)( (long)plVar7 + 0x2fa ) & 0x40 ) != 0 )(**(code**)( *plVar7 + 0x298 ))(&local_e8);
                        lVar8 = *(long*)( in_RDI + 0x2b8 );
                        *(undefined8*)( in_RDI + 0x2f4 ) = local_e8;
                        *(undefined8*)( in_RDI + 0x2fc ) = uStack_e0;
                        *(undefined8*)( in_RDI + 0x304 ) = local_d8;
                        if (lVar8 == 0) {
                           lVar17 = *(long*)( in_RDI + 0x2a8 );
                           if (lVar17 != 0) {
                              lVar14 = *(long*)( lVar17 + -8 );
                              if (lVar14 == 0) goto LAB_00105140;
                              lVar18 = 0;
                              if (lVar14 < 0) goto LAB_001054c4;
                              LAB_00104fc6 = (CowData<Transform2D>*)( in_RDI + 0x2b8 );
                              CowData<Transform2D>::_copy_on_write(this);
                              lVar8 = lVar18 * 0x18;
                              if (lVar8 != 0) {
                                 uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
                                 uVar9 = uVar9 | uVar9 >> 2;
                                 uVar9 = uVar9 | uVar9 >> 4;
                                 uVar9 = uVar9 | uVar9 >> 8;
                                 uVar9 = uVar9 | uVar9 >> 0x10;
                                 lVar8 = ( uVar9 | uVar9 >> 0x20 ) + 1;
                              }

                              if (lVar14 * 0x18 != 0) {
                                 uVar9 = lVar14 * 0x18 - 1;
                                 uVar9 = uVar9 | uVar9 >> 1;
                                 uVar9 = uVar9 | uVar9 >> 2;
                                 uVar9 = uVar9 | uVar9 >> 4;
                                 uVar9 = uVar9 | uVar9 >> 8;
                                 uVar9 = uVar9 | uVar9 >> 0x10;
                                 uVar9 = uVar9 | uVar9 >> 0x20;
                                 lVar17 = uVar9 + 1;
                                 if (lVar17 == 0) goto LAB_00105f06;
                                 if (lVar18 < lVar14) {
                                    if (lVar17 == lVar8) {
                                       LAB_00105b8c:puVar13 = *(undefined8**)( in_RDI + 0x2b8 );
                                       if (puVar13 == (undefined8*)0x0) {
                                          /* WARNING: Does not return */
                                          pcVar4 = (code*)invalidInstructionException();
                                          ( *pcVar4 )();
                                       }

                                       lVar8 = puVar13[-1];
                                       if (lVar8 < lVar14) goto LAB_001050f0;
                                    }
 else {
                                       if (lVar18 != 0) {
                                          iVar6 = CowData<Transform2D>::_realloc(this, lVar17);
                                          if (iVar6 != 0) goto LAB_001058a1;
                                          goto LAB_00105b8c;
                                       }

                                       puVar10 = (undefined8*)Memory::alloc_static(uVar9 + 0x11, false);
                                       if (puVar10 == (undefined8*)0x0) {
                                          _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                                          lVar17 = *(long*)( in_RDI + 0x2a8 );
                                          goto LAB_00105137;
                                       }

                                       puVar13 = puVar10 + 2;
                                       *puVar10 = 1;
                                       puVar10[1] = 0;
                                       *(undefined8**)( in_RDI + 0x2b8 ) = puVar13;
                                       lVar8 = 0;
                                       LAB_001050f0:uVar1 = _LC93;
                                       puVar10 = puVar13 + lVar8 * 3;
                                       do {
                                          *puVar10 = 0;
                                          puVar11 = puVar10 + 3;
                                          puVar10[1] = 0;
                                          puVar10[2] = 0;
                                          *(undefined4*)puVar10 = uVar1;
                                          *(undefined4*)( (long)puVar10 + 0xc ) = uVar1;
                                          puVar10 = puVar11;
                                       }
 while ( puVar11 != puVar13 + lVar14 * 3 );
                                    }

                                    puVar13[-1] = lVar14;
                                    lVar17 = *(long*)( in_RDI + 0x2a8 );
                                    goto LAB_00105137;
                                 }

                                 if (( lVar17 == lVar8 ) || ( iVar6 = iVar6 == 0 )) {
                                    if (*(long*)( in_RDI + 0x2b8 ) == 0) {
                                       _DAT_00000000 = 0;
                                       /* WARNING: Does not return */
                                       pcVar4 = (code*)invalidInstructionException();
                                       ( *pcVar4 )();
                                    }

                                    *(long*)( *(long*)( in_RDI + 0x2b8 ) + -8 ) = lVar14;
                                    lVar17 = *(long*)( in_RDI + 0x2a8 );
                                    goto LAB_00105137;
                                 }

                                 goto LAB_001058a1;
                              }

                              LAB_00105f06:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
                              lVar17 = *(long*)( in_RDI + 0x2a8 );
                              goto LAB_00105137;
                           }

                           LAB_00105298:lVar8 = -1;
                           lVar14 = 0;
                           goto LAB_001052bd;
                        }

                        lVar17 = *(long*)( in_RDI + 0x2a8 );
                        lVar18 = *(long*)( lVar8 + -8 );
                        if (lVar17 == 0) {
                           if (lVar18 == 0) goto LAB_00105298;
                           LAB_0010588a:LOCK();
                           plVar7 = (long*)( lVar8 + -0x10 );
                           *plVar7 = *plVar7 + -1;
                           UNLOCK();
                           if (*plVar7 == 0) {
                              lVar8 = *(long*)( in_RDI + 0x2b8 );
                              *(undefined8*)( in_RDI + 0x2b8 ) = 0;
                              Memory::free_static((void*)( lVar8 + -0x10 ), false);
                              lVar17 = *(long*)( in_RDI + 0x2a8 );
                           }
 else {
                              *(undefined8*)( in_RDI + 0x2b8 ) = 0;
                              LAB_001058a1:lVar17 = *(long*)( in_RDI + 0x2a8 );
                           }

                           LAB_00105137:if (lVar17 == 0) goto LAB_00105298;
                        }
 else {
                           lVar14 = *(long*)( lVar17 + -8 );
                           if (lVar14 != lVar18) {
                              if (lVar14 < 0) {
                                 LAB_001054c4:_err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
                                 lVar17 = *(long*)( in_RDI + 0x2a8 );
                                 goto LAB_00105137;
                              }

                              if (lVar14 != 0) goto LAB_00104fc6;
                              goto LAB_0010588a;
                           }

                        }

                        LAB_00105140:lVar8 = 0;
                        while (lVar14 = *(long*)( lVar17 + -8 ),lVar8 < lVar14) {
                           if (*(long*)( lVar17 + lVar8 * 0x28 + 0x10 ) == 0) {
                              cVar5 = NodePath::is_empty();
                              if (cVar5 == '\0') {
                                 if (_execute(float)::first_print !='\0') {
                                    local_b0 = 0;
                                    String::parse_latin1((String*)&local_b0, " is out of date.. Attempting to update...");
                                    itos((long)local_c0);
                                    operator+((char *)
                                    local_b8,(String*)"Bone2D cache for joint ";
                                    String::operator +(local_a8, (String*)local_b8);
                                    _err_print_error("_execute", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x92, local_a8);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
                                    CowData<char32_t>::_unref(local_b8);
                                    CowData<char32_t>::_unref(local_c0);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
                                    _execute(float)::first_print =
                                    '\0';
                                 }

                                 fabrik_joint_update_bone2d_cache(in_RDI, (int)lVar8);
                              }

                              lVar17 = *(long*)( in_RDI + 0x2a8 );
                           }

                           if (lVar17 == 0) {
                              lVar14 = 0;
                              goto LAB_001052bd;
                           }

                           lVar14 = *(long*)( lVar17 + -8 );
                           if (*(long*)( lVar17 + -8 ) <= lVar8) goto LAB_001052bd;
                           uVar9 = *(ulong*)( lVar17 + 0x10 + lVar8 * 0x28 );
                           uVar15 = (uint)uVar9 & 0xffffff;
                           if ((uint)ObjectDB::slot_max <= uVar15) {
                              _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                              LAB_0010561e:
                        if (_execute(float)::first_print != '\0')
                              {
                                 local_b0 = 0;
                                 String::parse_latin1((String*)&local_b0, " does not have a Bone2D node set! Cannot execute modification!");
                                 itos((long)local_c0);
                                 operator+((char *)
                                 local_b8,(String*)"FABRIK Joint ";
                                 String::operator +(local_a8, (String*)local_b8);
                                 _err_print_error("_execute", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x97, local_a8, 0, 0);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
                                 CowData<char32_t>::_unref(local_b8);
                                 CowData<char32_t>::_unref(local_c0);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
                                 _execute(float)::first_print =
                                 '\0';
                              }

                              goto LAB_00105311;
                           }

                           while (true) {
                              local_a8[0] = (String)0x0;
                              LOCK();
                              bVar19 = (char)ObjectDB::spin_lock == '\0';
                              if (bVar19) {
                                 ObjectDB::spin_lock._0_1_ = '\x01';
                              }

                              UNLOCK();
                              if (bVar19) break;
                              do {} while ( (char)ObjectDB::spin_lock != '\0' );
                           }
;
                           puVar16 = (ulong*)( (ulong)uVar15 * 0x10 + ObjectDB::object_slots );
                           if (( uVar9 >> 0x18 & 0x7fffffffff ) != ( *puVar16 & 0x7fffffffff )) {
                              ObjectDB::spin_lock._0_1_ = '\0';
                              goto LAB_0010561e;
                           }

                           uVar9 = puVar16[1];
                           ObjectDB::spin_lock._0_1_ = '\0';
                           if (( uVar9 == 0 ) || ( plVar7 = (long*)__dynamic_cast(uVar9, &Object::typeinfo, &Bone2D::typeinfo, 0) ),plVar7 == (long*)0x0) goto LAB_0010561e;
                           ( **(code**)( *plVar7 + 0x298 ) )(&local_78, plVar7);
                           if (*(long*)( in_RDI + 0x2b8 ) == 0) {
                              lVar14 = 0;
                              LAB_00105708:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar8, lVar14, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
                              _err_flush_stdout();
                              /* WARNING: Does not return */
                              pcVar4 = (code*)invalidInstructionException();
                              ( *pcVar4 )();
                           }

                           lVar14 = *(long*)( *(long*)( in_RDI + 0x2b8 ) + -8 );
                           if (lVar14 <= lVar8) goto LAB_00105708;
                           CowData<Transform2D>::_copy_on_write((CowData<Transform2D>*)( in_RDI + 0x2b8 ));
                           puVar13 = (undefined8*)( *(long*)( in_RDI + 0x2b8 ) + lVar8 * 0x18 );
                           puVar13[2] = local_68;
                           *puVar13 = local_78;
                           puVar13[1] = uStack_70;
                           lVar17 = *(long*)( in_RDI + 0x2a8 );
                           lVar8 = lVar8 + 1;
                           if (lVar17 == 0) goto LAB_00105298;
                        }
;
                        lVar8 = lVar14 + -1;
                        if (lVar8 < 0) goto LAB_001052bd;
                        uVar9 = *(ulong*)( lVar17 + 0x10 + lVar8 * 0x28 );
                        uVar15 = (uint)uVar9 & 0xffffff;
                        if (uVar15 < (uint)ObjectDB::slot_max) {
                           while (true) {
                              local_a8[0] = (String)0x0;
                              LOCK();
                              bVar19 = (char)ObjectDB::spin_lock == '\0';
                              if (bVar19) {
                                 ObjectDB::spin_lock._0_1_ = '\x01';
                              }

                              UNLOCK();
                              if (bVar19) break;
                              do {} while ( (char)ObjectDB::spin_lock != '\0' );
                           }
;
                           puVar16 = (ulong*)( (ulong)uVar15 * 0x10 + ObjectDB::object_slots );
                           if (( uVar9 >> 0x18 & 0x7fffffffff ) == ( *puVar16 & 0x7fffffffff )) {
                              uVar9 = puVar16[1];
                              ObjectDB::spin_lock._0_1_ = '\0';
                              if (uVar9 != 0) {
                                 __dynamic_cast(uVar9, &Object::typeinfo, &Bone2D::typeinfo, 0);
                              }

                           }
 else {
                              ObjectDB::spin_lock._0_1_ = '\0';
                           }

                        }
 else {
                           _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                        }

                        fVar20 = (float)Node2D::get_global_rotation();
                        lVar17 = *(long*)( in_RDI + 0x2a8 );
                        if (lVar17 == 0) goto LAB_00105298;
                        lVar8 = *(long*)( lVar17 + -8 ) + -1;
                        lVar14 = *(long*)( lVar17 + -8 );
                        if (lVar8 < 0) goto LAB_001052bd;
                        if (*(char*)( lVar17 + 0x20 + lVar8 * 0x28 ) != '\0') {
                           fVar20 = (float)Transform2D::get_rotation();
                        }

                        sincosf(fVar20, &local_ec, &local_f0);
                        fVar24 = local_ec;
                        fVar20 = local_f0;
                        fVar21 = (float)Bone2D::get_length();
                        Node2D::get_global_scale();
                        fVar22 = (float)Node2D::get_global_scale();
                        if (extraout_XMM0_Db <= fVar22) {
                           fVar22 = extraout_XMM0_Db;
                        }

                        fVar21 = fVar21 * fVar22;
                        uVar23 = Node2D::get_global_position();
                        local_98 = CONCAT44(fVar24 * fVar21 + (float)( (ulong)uVar23 >> 0x20 ), fVar20 * fVar21 + (float)uVar23);
                        local_58[0] = Node2D::get_global_position();
                        fVar20 = (float)Vector2::distance_to((Vector2*)&local_98);
                        *(undefined4*)( in_RDI + 0x2d8 ) = 0;
                        do {
                           if (fVar20 < *(float*)( in_RDI + 0x2d0 ) || fVar20 == *(float*)( in_RDI + 0x2d0 )) break;
                           chain_backwards(in_RDI);
                           chain_forwards(in_RDI);
                           fVar20 = (float)Node2D::get_global_rotation();
                           lVar17 = *(long*)( in_RDI + 0x2a8 );
                           if (lVar17 == 0) goto LAB_00105298;
                           lVar8 = *(long*)( lVar17 + -8 ) + -1;
                           lVar14 = *(long*)( lVar17 + -8 );
                           if (lVar8 < 0) goto LAB_001052bd;
                           if (*(char*)( lVar17 + 0x20 + lVar8 * 0x28 ) != '\0') {
                              fVar20 = (float)Transform2D::get_rotation();
                           }

                           sincosf(fVar20, &local_ec, &local_f0);
                           fVar20 = local_f0 * fVar21;
                           fVar24 = local_ec * fVar21;
                           uVar23 = Node2D::get_global_position();
                           local_98 = CONCAT44(fVar24 + (float)( (ulong)uVar23 >> 0x20 ), fVar20 + (float)uVar23);
                           local_58[0] = Node2D::get_global_position();
                           fVar20 = (float)Vector2::distance_to((Vector2*)&local_98);
                           iVar6 = *(int*)( in_RDI + 0x2d8 );
                           *(int*)( in_RDI + 0x2d8 ) = iVar6 + 1;
                        }
 while ( iVar6 + 1 < *(int*)( in_RDI + 0x2d4 ) );
                        lVar8 = *(long*)( in_RDI + 0x2a8 );
                        if (lVar8 == 0) goto LAB_00105311;
                        local_118 = 0;
                        lVar17 = 0;
                        do {
                           if (*(long*)( lVar8 + -8 ) <= lVar17) break;
                           uVar9 = *(ulong*)( lVar8 + 0x10 + local_118 * 0x28 );
                           uVar15 = (uint)uVar9 & 0xffffff;
                           if (uVar15 < (uint)ObjectDB::slot_max) {
                              while (true) {
                                 local_a8[0] = (String)0x0;
                                 LOCK();
                                 bVar19 = (char)ObjectDB::spin_lock == '\0';
                                 if (bVar19) {
                                    ObjectDB::spin_lock._0_1_ = '\x01';
                                 }

                                 UNLOCK();
                                 if (bVar19) break;
                                 do {} while ( (char)ObjectDB::spin_lock != '\0' );
                              }
;
                              puVar16 = (ulong*)( (ulong)uVar15 * 0x10 + ObjectDB::object_slots );
                              if (( uVar9 >> 0x18 & 0x7fffffffff ) != ( *puVar16 & 0x7fffffffff )) {
                                 ObjectDB::spin_lock._0_1_ = '\0';
                                 goto LAB_00105eab;
                              }

                              uVar9 = puVar16[1];
                              ObjectDB::spin_lock._0_1_ = '\0';
                              if (( uVar9 == 0 ) || ( pTVar12 = (Transform2D*)__dynamic_cast(uVar9, &Object::typeinfo, &Bone2D::typeinfo, 0) ),pTVar12 == (Transform2D*)0x0) goto LAB_00105eab;
                              lVar18 = *(long*)( in_RDI + 0x2b8 );
                              lVar8 = lVar17;
                              if (lVar18 == 0) {
                                 LAB_00105f81:lVar14 = 0;
                                 lVar8 = lVar17;
                                 goto LAB_001052bd;
                              }

                              lVar14 = *(long*)( lVar18 + -8 );
                              if (lVar14 <= lVar17) goto LAB_001052bd;
                              lVar2 = *(long*)( in_RDI + 0x2a8 );
                              puVar13 = (undefined8*)( lVar18 + local_118 * 0x18 );
                              local_98 = *puVar13;
                              uStack_90 = puVar13[1];
                              local_88 = puVar13[2];
                              lVar18 = (long)( (int)local_118 + 1 );
                              if (lVar2 == 0) {
                                 lVar14 = 0;
                                 goto LAB_001052bd;
                              }

                              lVar3 = *(long*)( lVar2 + -8 );
                              if (lVar18 < lVar3) {
                                 lVar8 = lVar18;
                                 if (lVar14 <= lVar18) goto LAB_001052bd;
                                 Transform2D::looking_at((Vector2*)&local_e8);
                                 local_88 = local_d8;
                                 local_98 = local_e8;
                                 uStack_90 = uStack_e0;
                              }
 else {
                                 lVar14 = lVar3;
                                 if (lVar3 <= lVar17) goto LAB_001052bd;
                                 if (*(char*)( lVar2 + 0x20 + local_118 * 0x28 ) == '\0') {
                                    Transform2D::looking_at((Vector2*)&local_e8);
                                    local_98 = local_e8;
                                    uStack_90 = uStack_e0;
                                    local_88 = local_d8;
                                 }
 else {
                                    fVar20 = (float)Transform2D::get_rotation();
                                    Transform2D::set_rotation(fVar20);
                                 }

                              }

                              fVar20 = (float)Transform2D::get_rotation();
                              fVar24 = (float)Bone2D::get_bone_angle();
                              Transform2D::set_rotation(fVar20 - fVar24);
                              local_a0 = Node2D::get_global_scale();
                              Transform2D::set_scale((Vector2*)&local_98);
                              Node2D::set_global_transform(pTVar12);
                              uVar23 = *(undefined8*)( *(long*)( in_RDI + 0x240 ) + 0x240 );
                              uVar1 = *(undefined4*)( *(long*)( in_RDI + 0x240 ) + 0x24c );
                              ( **(code**)( *(long*)pTVar12 + 0x290 ) )(local_58, pTVar12);
                              lVar2 = *(long*)( in_RDI + 0x2a8 );
                              if (lVar2 == 0) goto LAB_00105f81;
                              lVar14 = *(long*)( lVar2 + -8 );
                              lVar8 = lVar17;
                              if (lVar14 <= lVar17) goto LAB_001052bd;
                              Skeleton2D::set_bone_local_pose_override(uVar1, uVar23, *(undefined4*)( lVar2 + local_118 * 0x28 ), 1);
                           }
 else {
                              _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                              LAB_00105eab:
                        if (_execute(float)::first_print != '\0')
                              {
                                 local_b0 = 0;
                                 String::parse_latin1((String*)&local_b0, " does not have a Bone2D node set!");
                                 itos((long)local_c0);
                                 operator+((char *)
                                 local_b8,(String*)"FABRIK Joint ";
                                 String::operator +(local_a8, (String*)local_b8);
                                 _err_print_error("_execute", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0xbc, local_a8, 0, 0);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
                                 CowData<char32_t>::_unref(local_b8);
                                 CowData<char32_t>::_unref(local_c0);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
                                 _execute(float)::first_print =
                                 '\0';
                              }

                              lVar18 = (long)( (int)local_118 + 1 );
                           }

                           lVar8 = *(long*)( in_RDI + 0x2a8 );
                           local_118 = local_118 + 1;
                           lVar17 = lVar18;
                        }
 while ( lVar8 != 0 );
                        goto LAB_00105311;
                     }

                  }
 else {
                     ObjectDB::spin_lock._0_1_ = '\0';
                  }

               }
 else {
                  _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
               }

               if (_execute(float)::first_print !='\0') {
                  _err_print_error("_execute", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x85, "Origin joint\'s Bone2D node is not in the scene tree. Cannot execute modification!", 0, 0);
                  _execute(float)::first_print =
                  '\0';
               }

               goto LAB_00105311;
            }

         }

         LAB_001055cf:lVar8 = 0;
         LAB_001052bd:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar14, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }

   }
 else {
      ObjectDB::spin_lock._0_1_ = '\0';
   }

}
else{param_1 = (float)_err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);};if (_execute(float)::first_print !='\0') {
   _err_print_error(param_1, "_execute", "scene/resources/2d/skeleton/skeleton_modification_2d_fabrik.cpp", 0x79, "Target node is not in the scene tree. Cannot execute modification!", 0, 0);
   _execute(float)::first_print =
   '\0';
}
}LAB_00105311:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
LAB_00105fdd:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* SkeletonModification2DFABRIK::~SkeletonModification2DFABRIK() */void SkeletonModification2DFABRIK::~SkeletonModification2DFABRIK(SkeletonModification2DFABRIK *this) {
   long *plVar1;
   long lVar2;
   bool bVar3;
   *(undefined***)this = &PTR__initialize_classv_00111e00;
   NodePath::~NodePath((NodePath*)( this + 0x2c0 ));
   if (*(long*)( this + 0x2b8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2b8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x2b8 );
         *(undefined8*)( this + 0x2b8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_unref((CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>*)( this + 0x2a8 ));
   bVar3 = StringName::configured != '\0';
   *(code**)this = Skeleton2D::get_bone_count;
   if (bVar3) {
      if (*(long*)( this + 0x280 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001061ad;
      }

      if (*(long*)( this + 0x268 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001061ad;
      }

      if (*(long*)( this + 0x250 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001061ad:Resource::~Resource((Resource*)this);
   operator_delete(this, 0x310);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* SkeletonModification2DFABRIK::set_fabrik_data_chain_length(int) */void SkeletonModification2DFABRIK::set_fabrik_data_chain_length(SkeletonModification2DFABRIK *this, int param_1) {
   CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D> *this_00;
   code *pcVar1;
   undefined2 uVar2;
   int iVar3;
   ulong uVar4;
   undefined8 *puVar5;
   long lVar6;
   undefined8 *puVar7;
   ulong uVar8;
   long lVar9;
   undefined8 *puVar10;
   ulong uVar11;
   ulong uVar12;
   long lVar13;
   ulong uVar14;
   uVar11 = (ulong)param_1;
   if ((long)uVar11 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      goto LAB_00106357;
   }

   this_00 = (CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>*)( this + 0x2a8 );
   uVar14 = uVar11;
   if (*(long*)( this + 0x2a8 ) == 0) {
      if (uVar11 == 0) goto LAB_00106357;
      uVar12 = 0;
      CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_copy_on_write(this_00);
      LAB_00106404:uVar8 = uVar11 * 0x28 - 1;
      uVar8 = uVar8 >> 1 | uVar8;
      uVar8 = uVar8 >> 2 | uVar8;
      uVar8 = uVar8 >> 4 | uVar8;
      uVar8 = uVar8 >> 8 | uVar8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar9 = ( uVar8 | uVar8 >> 0x20 ) + 1;
      if ((long)uVar12 < (long)uVar11) {
         LAB_00106460:if (uVar12 == 0) {
            puVar7 = (undefined8*)Memory::alloc_static(lVar9 + 0x10, false);
            if (puVar7 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               goto LAB_00106357;
            }

            puVar10 = puVar7 + 2;
            *puVar7 = 1;
            puVar7[1] = 0;
            *(undefined8**)( this + 0x2a8 ) = puVar10;
            lVar9 = 0;
         }
 else {
            iVar3 = CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_realloc(this_00, lVar9);
            if (iVar3 != 0) goto LAB_00106357;
            LAB_001062f1:puVar10 = *(undefined8**)( this + 0x2a8 );
            if (puVar10 == (undefined8*)0x0) {
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            lVar9 = puVar10[-1];
         }

         uVar2 = _LC100;
         if (lVar9 < (long)uVar11) {
            puVar7 = puVar10 + lVar9 * 5;
            do {
               *(undefined4*)puVar7 = 0xffffffff;
               puVar5 = puVar7 + 5;
               for (int i = 0; i < 3; i++) {
                  puVar7[( i + 1 )] = 0;
               }

               *(undefined2*)( puVar7 + 4 ) = uVar2;
               puVar7 = puVar5;
            }
 while ( puVar10 + uVar11 * 5 != puVar5 );
         }

         puVar10[-1] = uVar11;
         goto LAB_00106357;
      }

      lVar13 = 0;
   }
 else {
      uVar12 = *(ulong*)( *(long*)( this + 0x2a8 ) + -8 );
      if (uVar11 == uVar12) goto LAB_00106357;
      if (uVar11 == 0) {
         CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_unref(this_00);
         goto LAB_00106357;
      }

      CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_copy_on_write(this_00);
      uVar8 = uVar11 * 0x28 - 1;
      uVar8 = uVar8 >> 1 | uVar8;
      uVar8 = uVar8 >> 2 | uVar8;
      uVar8 = uVar8 >> 4 | uVar8;
      uVar8 = uVar8 >> 8 | uVar8;
      uVar8 = uVar8 >> 0x10 | uVar8;
      uVar8 = uVar8 >> 0x20 | uVar8;
      lVar9 = uVar8 + 1;
      if (uVar12 * 0x28 == 0) goto LAB_00106404;
      uVar4 = uVar12 * 0x28 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if ((long)uVar12 < (long)uVar11) {
         if (uVar4 != uVar8) goto LAB_00106460;
         goto LAB_001062f1;
      }

      lVar13 = uVar4 + 1;
   }

   while (true) {
      lVar6 = *(long*)( this + 0x2a8 );
      if (lVar6 == 0) {
         /* WARNING: Does not return */
         pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      if (*(ulong*)( lVar6 + -8 ) <= uVar14) break;
      NodePath::~NodePath((NodePath*)( lVar6 + 8 + uVar14 * 0x28 ));
      uVar14 = uVar14 + 1;
   }
;
   if (lVar9 != lVar13) {
      iVar3 = CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_realloc(this_00, lVar9);
      if (iVar3 != 0) goto LAB_00106357;
      lVar6 = *(long*)( this + 0x2a8 );
      if (lVar6 == 0) {
         _DAT_00000000 = 0;
         /* WARNING: Does not return */
         pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

   }

   *(ulong*)( lVar6 + -8 ) = uVar11;
   LAB_00106357:Object::notify_property_list_changed();
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
/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}
/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}
/* SkeletonModification2DFABRIK::is_class_ptr(void*) const */uint SkeletonModification2DFABRIK::is_class_ptr(SkeletonModification2DFABRIK *this, void *param_1) {
   return (uint)CONCAT71(0x1124, (undefined4*)param_1 == &SkeletonModification2D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1124, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1124, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1124, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1124, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* SkeletonModification2DFABRIK::_validate_propertyv(PropertyInfo&) const */void SkeletonModification2DFABRIK::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* SkeletonModification2DFABRIK::_property_can_revertv(StringName const&) const */undefined8 SkeletonModification2DFABRIK::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* SkeletonModification2DFABRIK::_property_get_revertv(StringName const&, Variant&) const */undefined8 SkeletonModification2DFABRIK::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* SkeletonModification2DFABRIK::_notificationv(int, bool) */void SkeletonModification2DFABRIK::_notificationv(int param_1, bool param_2) {
   return;
}
/* MethodBindTRC<bool, int>::_gen_argument_type(int) const */char MethodBindTRC<bool,int>::_gen_argument_type(MethodBindTRC<bool,int> *this, int param_1) {
   return ( param_1 == 0 ) + '\x01';
}
/* MethodBindTRC<bool, int>::get_argument_meta(int) const */byte MethodBindTRC<bool,int>::get_argument_meta(MethodBindTRC<bool,int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<int, bool>::_gen_argument_type(int) const */char MethodBindT<int,bool>::_gen_argument_type(MethodBindT<int,bool> *this, int param_1) {
   char cVar1;
   cVar1 = ( param_1 == 0 ) + '\x01';
   if (1 < (uint)param_1) {
      cVar1 = '\0';
   }

   return cVar1;
}
/* MethodBindT<int, bool>::get_argument_meta(int) const */byte MethodBindT<int,bool>::get_argument_meta(MethodBindT<int,bool> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTRC<Vector2, int>::_gen_argument_type(int) const */int MethodBindTRC<Vector2,int>::_gen_argument_type(MethodBindTRC<Vector2,int> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xfffffffd ) + 5;
}
/* MethodBindTRC<Vector2, int>::get_argument_meta(int) const */byte MethodBindTRC<Vector2,int>::get_argument_meta(MethodBindTRC<Vector2,int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<int, Vector2>::_gen_argument_type(int) const */int MethodBindT<int,Vector2>::_gen_argument_type(MethodBindT<int,Vector2> *this, int param_1) {
   int iVar1;
   iVar1 = 0;
   if ((uint)param_1 < 2) {
      iVar1 = ( -(uint)(param_1 == 0) & 0xfffffffd ) + 5;
   }

   return iVar1;
}
/* MethodBindT<int, Vector2>::get_argument_meta(int) const */byte MethodBindT<int,Vector2>::get_argument_meta(MethodBindT<int,Vector2> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTRC<int, int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<int,int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<int, int>::get_argument_meta(int) const */char MethodBindTRC<int,int>::get_argument_meta(MethodBindTRC<int,int> *this, int param_1) {
   return ( param_1 < 1 ) * '\x03';
}
/* MethodBindT<int, int>::_gen_argument_type(int) const */char MethodBindT<int,int>::_gen_argument_type(MethodBindT<int,int> *this, int param_1) {
   return ( (uint)param_1 < 2 ) * '\x02';
}
/* MethodBindT<int, int>::get_argument_meta(int) const */byte MethodBindT<int,int>::get_argument_meta(MethodBindT<int,int> *this, int param_1) {
   return -((uint)param_1 < 2) & 3;
}
/* MethodBindTRC<NodePath, int>::_gen_argument_type(int) const */int MethodBindTRC<NodePath,int>::_gen_argument_type(MethodBindTRC<NodePath,int> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffec ) + 0x16;
}
/* MethodBindTRC<NodePath, int>::get_argument_meta(int) const */byte MethodBindTRC<NodePath,int>::get_argument_meta(MethodBindTRC<NodePath,int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<int, NodePath const&>::_gen_argument_type(int) const */int MethodBindT<int,NodePath_const&>::_gen_argument_type(MethodBindT<int,NodePath_const&> *this, int param_1) {
   int iVar1;
   iVar1 = 0;
   if ((uint)param_1 < 2) {
      iVar1 = ( -(uint)(param_1 == 0) & 0xffffffec ) + 0x16;
   }

   return iVar1;
}
/* MethodBindT<int, NodePath const&>::get_argument_meta(int) const */byte MethodBindT<int,NodePath_const&>::get_argument_meta(MethodBindT<int,NodePath_const&> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTR<int>::_gen_argument_type(int) const */undefined8 MethodBindTR<int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTR<int>::get_argument_meta(int) const */uint MethodBindTR<int>::get_argument_meta(MethodBindTR<int> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}
/* MethodBindT<int>::_gen_argument_type(int) const */char MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<int>::get_argument_meta(int) const */byte MethodBindT<int>::get_argument_meta(MethodBindT<int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTRC<NodePath>::_gen_argument_type(int) const */undefined8 MethodBindTRC<NodePath>::_gen_argument_type(int param_1) {
   return 0x16;
}
/* MethodBindTRC<NodePath>::get_argument_meta(int) const */undefined8 MethodBindTRC<NodePath>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<NodePath const&>::_gen_argument_type(int) const */byte MethodBindT<NodePath_const&>::_gen_argument_type(MethodBindT<NodePath_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x16;
}
/* MethodBindT<NodePath const&>::get_argument_meta(int) const */undefined8 MethodBindT<NodePath_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<NodePath const&>::~MethodBindT() */void MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00111ff0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<NodePath const&>::~MethodBindT() */void MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00111ff0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<NodePath>::~MethodBindTRC() */void MethodBindTRC<NodePath>::~MethodBindTRC(MethodBindTRC<NodePath> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00112050;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<NodePath>::~MethodBindTRC() */void MethodBindTRC<NodePath>::~MethodBindTRC(MethodBindTRC<NodePath> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00112050;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001120b0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001120b0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<int>::~MethodBindTR() */void MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00112110;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<int>::~MethodBindTR() */void MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00112110;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int, NodePath const&>::~MethodBindT() */void MethodBindT<int,NodePath_const&>::~MethodBindT(MethodBindT<int,NodePath_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00112170;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int, NodePath const&>::~MethodBindT() */void MethodBindT<int,NodePath_const&>::~MethodBindT(MethodBindT<int,NodePath_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00112170;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<NodePath, int>::~MethodBindTRC() */void MethodBindTRC<NodePath,int>::~MethodBindTRC(MethodBindTRC<NodePath,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001121d0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<NodePath, int>::~MethodBindTRC() */void MethodBindTRC<NodePath,int>::~MethodBindTRC(MethodBindTRC<NodePath,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001121d0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int, int>::~MethodBindT() */void MethodBindT<int,int>::~MethodBindT(MethodBindT<int,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00112230;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int, int>::~MethodBindT() */void MethodBindT<int,int>::~MethodBindT(MethodBindT<int,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00112230;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int, int>::~MethodBindTRC() */void MethodBindTRC<int,int>::~MethodBindTRC(MethodBindTRC<int,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00112290;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int, int>::~MethodBindTRC() */void MethodBindTRC<int,int>::~MethodBindTRC(MethodBindTRC<int,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00112290;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int, Vector2>::~MethodBindT() */void MethodBindT<int,Vector2>::~MethodBindT(MethodBindT<int,Vector2> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001122f0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int, Vector2>::~MethodBindT() */void MethodBindT<int,Vector2>::~MethodBindT(MethodBindT<int,Vector2> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001122f0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector2, int>::~MethodBindTRC() */void MethodBindTRC<Vector2,int>::~MethodBindTRC(MethodBindTRC<Vector2,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00112350;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector2, int>::~MethodBindTRC() */void MethodBindTRC<Vector2,int>::~MethodBindTRC(MethodBindTRC<Vector2,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00112350;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int, bool>::~MethodBindT() */void MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001123b0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int, bool>::~MethodBindT() */void MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001123b0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool, int>::~MethodBindTRC() */void MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00112410;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool, int>::~MethodBindTRC() */void MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00112410;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* CowData<Transform2D>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Transform2D>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* SkeletonModification2DFABRIK::_bind_methods() [clone .cold] */void SkeletonModification2DFABRIK::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_copy_on_write() [clone .isra.0]
   [clone .cold] */void CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* SkeletonModification2DFABRIK::_execute(float) [clone .cold] */void SkeletonModification2DFABRIK::_execute(float param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* SkeletonModification2DFABRIK::set_fabrik_data_chain_length(int) [clone .cold] */void SkeletonModification2DFABRIK::set_fabrik_data_chain_length(int param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
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
/* SkeletonModification2DFABRIK::_get_class_namev() const */undefined8 *SkeletonModification2DFABRIK::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00107853:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00107853;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "SkeletonModification2DFABRIK");
         goto LAB_001078be;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "SkeletonModification2DFABRIK");
   LAB_001078be:return &_get_class_namev();
}
/* SkeletonModification2DFABRIK::get_class() const */void SkeletonModification2DFABRIK::get_class(void) {
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
/* MethodBindTRC<NodePath>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<NodePath>::_gen_argument_type_info(int param_1) {
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
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC14;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x16;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x00107b0c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00107b0c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<int>::_gen_argument_type_info(int param_1) {
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
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC14;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x00107c8c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00107c8c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
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
      LAB_00107ea8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00107ea8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00107ec6;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00107ec6:if (lVar2 == 0) {
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
      LAB_001082a8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001082a8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001082c5;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x001082c5:if (lVar2 == 0) {
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
/* SkeletonModification2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void SkeletonModification2D::_get_property_listv(SkeletonModification2D *this, List *param_1, bool param_2) {
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
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "SkeletonModification2D";
   local_70 = 0x16;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "SkeletonModification2D";
   local_98 = 0;
   local_70 = 0x16;
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
      LAB_00108708:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00108708;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00108725;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00108725:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "SkeletonModification2D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
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
/* SkeletonModification2DFABRIK::_getv(StringName const&, Variant&) const */void SkeletonModification2DFABRIK::_getv(SkeletonModification2DFABRIK *this, StringName *param_1, Variant *param_2) {
   _get(this, param_1, param_2);
   return;
}
/* SkeletonModification2D::is_class(String const&) const */undefined8 SkeletonModification2D::is_class(SkeletonModification2D *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
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
                  if (lVar5 == 0) goto LAB_00108a9f;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar5 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar7 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar7 != -1) {
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

      LAB_00108a9f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00108b53;
   }

   cVar6 = String::operator ==(param_1, "SkeletonModification2D");
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
                     if (lVar5 == 0) goto LAB_00108c9b;
                     LOCK();
                     lVar7 = *plVar1;
                     bVar9 = lVar5 == lVar7;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar7 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar7 != -1) {
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

         LAB_00108c9b:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00108b53;
      }

      cVar6 = String::operator ==(param_1, "Resource");
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

            cVar6 = String::operator ==(param_1, (String*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (cVar6 != '\0') goto LAB_00108b53;
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

               cVar6 = String::operator ==(param_1, (String*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (cVar6 != '\0') goto LAB_00108b53;
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar8 = String::operator ==(param_1, "Object");
               return uVar8;
            }

            goto LAB_00108e1e;
         }

      }

   }

   LAB_00108b53:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00108e1e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* SkeletonModification2DFABRIK::is_class(String const&) const */undefined8 SkeletonModification2DFABRIK::is_class(SkeletonModification2DFABRIK *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_00108e9f;
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

      LAB_00108e9f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00108f53;
   }

   cVar5 = String::operator ==(param_1, "SkeletonModification2DFABRIK");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = SkeletonModification2D::is_class((SkeletonModification2D*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00108f53:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SkeletonModification2DFABRIK::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */void SkeletonModification2DFABRIK::_get_property_listv(SkeletonModification2DFABRIK *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      SkeletonModification2D::_get_property_listv((SkeletonModification2D*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "SkeletonModification2DFABRIK";
   local_70 = 0x1c;
   String::parse_latin1((StrRange*)&local_90);
   local_98 = 0;
   local_78 = "SkeletonModification2DFABRIK";
   local_70 = 0x1c;
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
      LAB_00109138:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00109138;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010915a;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010915a:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   local_a0 = (StringName*)&local_68;
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

   StringName::operator =((StringName*)( puVar5 + 4 ), local_a0);
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

   StringName::StringName((StringName*)&local_78, "SkeletonModification2DFABRIK", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   _get_property_list(this, param_1);
   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         SkeletonModification2D::_get_property_listv((SkeletonModification2D*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<int>::_gen_argument_type_info(int param_1) {
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
   if (in_EDX != 0) goto LAB_00109469;
   local_78 = 0;
   local_68 = &_LC14;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00109565:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00109565;
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
   LAB_00109469:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBind* create_method_bind<SkeletonModification2DFABRIK, NodePath const&>(void
   (SkeletonModification2DFABRIK::*)(NodePath const&)) */MethodBind *create_method_bind<SkeletonModification2DFABRIK,NodePath_const&>(_func_void_NodePath_ptr *param_1) {
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
   *(_func_void_NodePath_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00111ff0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "SkeletonModification2DFABRIK";
   local_30 = 0x1c;
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
}
/* MethodBind* create_method_bind<SkeletonModification2DFABRIK, NodePath>(NodePath
   (SkeletonModification2DFABRIK::*)() const) */MethodBind *create_method_bind<SkeletonModification2DFABRIK,NodePath>(_func_NodePath *param_1) {
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
   *(_func_NodePath**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00112050;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "SkeletonModification2DFABRIK";
   local_30 = 0x1c;
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
}
/* MethodBind* create_method_bind<SkeletonModification2DFABRIK, int>(void
   (SkeletonModification2DFABRIK::*)(int)) */MethodBind *create_method_bind<SkeletonModification2DFABRIK,int>(_func_void_int *param_1) {
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
   *(_func_void_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001120b0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "SkeletonModification2DFABRIK";
   local_30 = 0x1c;
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
}
/* MethodBind* create_method_bind<SkeletonModification2DFABRIK, int>(int
   (SkeletonModification2DFABRIK::*)()) */MethodBind *create_method_bind<SkeletonModification2DFABRIK,int>(_func_int *param_1) {
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
   *(_func_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00112110;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "SkeletonModification2DFABRIK";
   local_30 = 0x1c;
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
}
/* MethodBind* create_method_bind<SkeletonModification2DFABRIK, int, NodePath const&>(void
   (SkeletonModification2DFABRIK::*)(int, NodePath const&)) */MethodBind *create_method_bind<SkeletonModification2DFABRIK,int,NodePath_const&>(_func_void_int_NodePath_ptr *param_1) {
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
   *(_func_void_int_NodePath_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00112170;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "SkeletonModification2DFABRIK";
   local_30 = 0x1c;
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
}
/* MethodBind* create_method_bind<SkeletonModification2DFABRIK, NodePath, int>(NodePath
   (SkeletonModification2DFABRIK::*)(int) const) */MethodBind *create_method_bind<SkeletonModification2DFABRIK,NodePath,int>(_func_NodePath_int *param_1) {
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
   *(_func_NodePath_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001121d0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "SkeletonModification2DFABRIK";
   local_30 = 0x1c;
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
}
/* MethodBind* create_method_bind<SkeletonModification2DFABRIK, int, int>(void
   (SkeletonModification2DFABRIK::*)(int, int)) */MethodBind *create_method_bind<SkeletonModification2DFABRIK,int,int>(_func_void_int_int *param_1) {
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
   *(_func_void_int_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00112230;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "SkeletonModification2DFABRIK";
   local_30 = 0x1c;
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
}
/* MethodBind* create_method_bind<SkeletonModification2DFABRIK, int, int>(int
   (SkeletonModification2DFABRIK::*)(int) const) */MethodBind *create_method_bind<SkeletonModification2DFABRIK,int,int>(_func_int_int *param_1) {
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
   *(_func_int_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00112290;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "SkeletonModification2DFABRIK";
   local_30 = 0x1c;
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
}
/* MethodBind* create_method_bind<SkeletonModification2DFABRIK, int, Vector2>(void
   (SkeletonModification2DFABRIK::*)(int, Vector2)) */MethodBind *create_method_bind<SkeletonModification2DFABRIK,int,Vector2>(_func_void_int_Vector2 *param_1) {
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
   *(_func_void_int_Vector2**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001122f0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "SkeletonModification2DFABRIK";
   local_30 = 0x1c;
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
}
/* MethodBind* create_method_bind<SkeletonModification2DFABRIK, Vector2, int>(Vector2
   (SkeletonModification2DFABRIK::*)(int) const) */MethodBind *create_method_bind<SkeletonModification2DFABRIK,Vector2,int>(_func_Vector2_int *param_1) {
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
   *(_func_Vector2_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00112350;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "SkeletonModification2DFABRIK";
   local_30 = 0x1c;
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
}
/* MethodBind* create_method_bind<SkeletonModification2DFABRIK, int, bool>(void
   (SkeletonModification2DFABRIK::*)(int, bool)) */MethodBind *create_method_bind<SkeletonModification2DFABRIK,int,bool>(_func_void_int_bool *param_1) {
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
   *(_func_void_int_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001123b0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "SkeletonModification2DFABRIK";
   local_30 = 0x1c;
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
}
/* MethodBind* create_method_bind<SkeletonModification2DFABRIK, bool, int>(bool
   (SkeletonModification2DFABRIK::*)(int) const) */MethodBind *create_method_bind<SkeletonModification2DFABRIK,bool,int>(_func_bool_int *param_1) {
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
   *(_func_bool_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00112410;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "SkeletonModification2DFABRIK";
   local_30 = 0x1c;
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
}
/* SkeletonModification2DFABRIK::_initialize_classv() */void SkeletonModification2DFABRIK::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (SkeletonModification2D::initialize_class() == '\0') {
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

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               if ((code*)PTR__bind_methods_00116008 != RefCounted::_bind_methods) {
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

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            Resource::_bind_methods();
            Resource::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Resource";
         local_68 = 0;
         local_50 = 8;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "SkeletonModification2D";
         local_70 = 0;
         local_50 = 0x16;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)_GLOBAL_OFFSET_TABLE_ != Resource::_bind_methods) {
            SkeletonModification2D::_bind_methods();
         }

         SkeletonModification2D::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "SkeletonModification2D";
      local_68 = 0;
      local_50 = 0x16;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "SkeletonModification2DFABRIK";
      local_70 = 0;
      local_50 = 0x1c;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      _bind_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<Transform2D>::_realloc(long) */undefined8 CowData<Transform2D>::_realloc(CowData<Transform2D> *this, long param_1) {
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
/* CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_unref() */void CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_unref(CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   long lVar5;
   NodePath *this_00;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      lVar2 = *(long*)this;
      if (lVar2 != 0) {
         lVar3 = *(long*)( lVar2 + -8 );
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar5 = 0;
            this_00 = (NodePath*)( lVar2 + 8 );
            do {
               lVar5 = lVar5 + 1;
               NodePath::~NodePath(this_00);
               this_00 = this_00 + 0x28;
            }
 while ( lVar3 != lVar5 );
         }

         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* SkeletonModification2DFABRIK::_setv(StringName const&, Variant const&) */void SkeletonModification2DFABRIK::_setv(SkeletonModification2DFABRIK *this, StringName *param_1, Variant *param_2) {
   _set(this, param_1, param_2);
   return;
}
/* CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_realloc(long) */undefined8 CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D>::_realloc(CowData<SkeletonModification2DFABRIK::FABRIK_Joint_Data2D> *this, long param_1) {
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
/* WARNING: Removing unreachable block (ram,0x0010ac08) *//* WARNING: Removing unreachable block (ram,0x0010ad9d) *//* WARNING: Removing unreachable block (ram,0x0010ada9) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* MethodBindTRC<bool, int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<bool,int>::validated_call(MethodBindTRC<bool,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0010af28;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   VVar1 = ( Variant )(*pcVar2)(param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
   param_3[8] = VVar1;
   LAB_0010af28:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<bool,int>::ptrcall(MethodBindTRC<bool,int> *this, Object *param_1, void **param_2, void *param_3) {
   undefined1 uVar1;
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
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010b107;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), **param_2);
   *(undefined1*)param_3 = uVar1;
   LAB_0010b107:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<int,bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0010b481;
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
      /* WARNING: Could not recover jumptable at 0x0010b306. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ), *(undefined1*)( *(long*)( param_3 + 8 ) + 8 ));
      return;
   }

   LAB_0010b481:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int, bool>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int,bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_0010b671;
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
      /* WARNING: Could not recover jumptable at 0x0010b4fa. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3, **(char**)( (long)param_3 + 8 ) != '\0');
      return;
   }

   LAB_0010b671:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<Vector2, int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Vector2,int>::validated_call(MethodBindTRC<Vector2,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined8 uVar3;
   long local_58;
   undefined8 local_50;
   char *local_48;
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010b6ca;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar3 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
   *(undefined8*)( param_3 + 8 ) = uVar3;
   LAB_0010b6ca:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector2, int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Vector2,int>::ptrcall(MethodBindTRC<Vector2,int> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined8 uVar3;
   long local_58;
   undefined8 local_50;
   char *local_48;
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
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010b8a9;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   uVar3 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), **param_2);
   *(undefined8*)param_3 = uVar3;
   LAB_0010b8a9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, Vector2>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<int,Vector2>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0010bc21;
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
      /* WARNING: Could not recover jumptable at 0x0010baa5. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( *(long*)( param_3 + 8 ) + 8 ), (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_0010bc21:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int, Vector2>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int,Vector2>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_0010be09;
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
      /* WARNING: Could not recover jumptable at 0x0010bc93. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(**(undefined8**)( (long)param_3 + 8 ), (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_0010be09:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<int, int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<int,int>::validated_call(MethodBindTRC<int,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   int iVar1;
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

         goto LAB_0010be5a;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
   *(long*)( param_3 + 8 ) = (long)iVar1;
   LAB_0010be5a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int, int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<int,int>::ptrcall(MethodBindTRC<int,int> *this, Object *param_1, void **param_2, void *param_3) {
   int iVar1;
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
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010c038;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), **param_2);
   *(long*)param_3 = (long)iVar1;
   LAB_0010c038:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<int,int>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0010c3a9;
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
      /* WARNING: Could not recover jumptable at 0x0010c233. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ), *(undefined4*)( *(long*)( param_3 + 8 ) + 8 ));
      return;
   }

   LAB_0010c3a9:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int, int>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int,int>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_0010c589;
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
      /* WARNING: Could not recover jumptable at 0x0010c411. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3, **(undefined4**)( (long)param_3 + 8 ));
      return;
   }

   LAB_0010c589:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<NodePath, int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<NodePath,int>::validated_call(MethodBindTRC<NodePath,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
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
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((NodePath*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (NodePath*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010c5ef;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((NodePath*)&local_48, param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
   NodePath::operator =((NodePath*)( param_3 + 8 ), (NodePath*)&local_48);
   NodePath::~NodePath((NodePath*)&local_48);
   LAB_0010c5ef:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<NodePath, int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<NodePath,int>::ptrcall(MethodBindTRC<NodePath,int> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
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
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((NodePath*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (NodePath*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010c7dd;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   ( *pcVar1 )((NodePath*)&local_48, param_1 + *(long*)( this + 0x60 ), **param_2);
   NodePath::operator =((NodePath*)param_3, (NodePath*)&local_48);
   NodePath::~NodePath((NodePath*)&local_48);
   LAB_0010c7dd:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, NodePath const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<int,NodePath_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0010cb2f;
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
      /* WARNING: Could not recover jumptable at 0x0010c9d9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ), *(long*)( param_3 + 8 ) + 8);
      return;
   }

   LAB_0010cb2f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int, NodePath const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int,NodePath_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_0010cd19;
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
      /* WARNING: Could not recover jumptable at 0x0010cba2. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3, *(undefined8*)( (long)param_3 + 8 ));
      return;
   }

   LAB_0010cd19:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTR<int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTR<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC114, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010ce70;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         iVar2 = ( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, iVar2);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
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

   LAB_0010ce70:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<int>::validated_call(MethodBindTR<int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   int iVar1;
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010d084;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)( param_3 + 8 ) = (long)iVar1;
   LAB_0010d084:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<int>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<int>::ptrcall(MethodBindTR<int> *this, Object *param_1, void **param_2, void *param_3) {
   int iVar1;
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010d233;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)param_3 = (long)iVar1;
   LAB_0010d233:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<int>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0010d571;
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
      /* WARNING: Could not recover jumptable at 0x0010d3fc. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_0010d571:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_0010d751;
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
      /* WARNING: Could not recover jumptable at 0x0010d5db. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_0010d751:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<NodePath>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<NodePath>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC114, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010d830;
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

         ( *(code*)pVVar2 )((NodePath*)&local_58);
         Variant::Variant((Variant*)local_48, (NodePath*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         NodePath::~NodePath((NodePath*)&local_58);
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

   LAB_0010d830:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<NodePath>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<NodePath>::validated_call(MethodBindTRC<NodePath> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_48 = (Variant**)0x10adf8;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((NodePath*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (NodePath*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010da59;
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

   ( *pcVar1 )((NodePath*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   NodePath::operator =((NodePath*)( param_3 + 8 ), (NodePath*)&local_48);
   NodePath::~NodePath((NodePath*)&local_48);
   LAB_0010da59:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<NodePath>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<NodePath>::ptrcall(MethodBindTRC<NodePath> *this, Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (void**)0x10adf8;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((NodePath*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (NodePath*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010dc2a;
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

   ( *pcVar1 )((NodePath*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   NodePath::operator =((NodePath*)param_3, (NodePath*)&local_48);
   NodePath::~NodePath((NodePath*)&local_48);
   LAB_0010dc2a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<NodePath const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<NodePath_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0010df71;
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
      /* WARNING: Could not recover jumptable at 0x0010ddfd. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_0010df71:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<NodePath const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<NodePath_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_0010e151;
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
      /* WARNING: Could not recover jumptable at 0x0010dfd9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_0010e151:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<NodePath, int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<NodePath,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC114, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010e2a0;
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
         if (in_R8D != 1) goto LAB_0010e2f0;
         LAB_0010e2e0:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010e2f0:uVar7 = 4;
            goto LAB_0010e295;
         }

         if (in_R8D == 1) goto LAB_0010e2e0;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 2);
      uVar4 = _LC115;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      iVar6 = Variant::operator_cast_to_int(pVVar11);
      ( *(code*)pVVar12 )((NodePath*)&local_68, (Variant*)( (long)plVar10 + (long)pVVar1 ), iVar6);
      Variant::Variant((Variant*)local_58, (NodePath*)&local_68);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      NodePath::~NodePath((NodePath*)&local_68);
   }
 else {
      uVar7 = 3;
      LAB_0010e295:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_0010e2a0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<int, int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<int,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
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
         _err_print_error(&_LC114, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010e630;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010e670;
         LAB_0010e660:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010e670:uVar7 = 4;
            goto LAB_0010e625;
         }

         if (in_R8D == 1) goto LAB_0010e660;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 2);
      uVar4 = _LC115;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      iVar6 = Variant::operator_cast_to_int(pVVar11);
      iVar6 = ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), iVar6);
      Variant::Variant((Variant*)local_48, iVar6);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   }
 else {
      uVar7 = 3;
      LAB_0010e625:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_0010e630:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector2, int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Vector2,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
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
         _err_print_error(&_LC114, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010e9b0;
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
         if (in_R8D != 1) goto LAB_0010e9f0;
         LAB_0010e9e0:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010e9f0:uVar7 = 4;
            goto LAB_0010e9a5;
         }

         if (in_R8D == 1) goto LAB_0010e9e0;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 2);
      uVar4 = _LC115;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      iVar6 = Variant::operator_cast_to_int(pVVar11);
      local_50 = ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), iVar6);
      Variant::Variant((Variant*)local_48, (Vector2*)&local_50);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   }
 else {
      uVar7 = 3;
      LAB_0010e9a5:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_0010e9b0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<bool,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   bool bVar6;
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
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC114, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010ed30;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar12 = param_2[5];
      if (pVVar12 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010ed70;
         LAB_0010ed60:pVVar12 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar12 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010ed70:uVar8 = 4;
            goto LAB_0010ed25;
         }

         if (in_R8D == 1) goto LAB_0010ed60;
         lVar10 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar10) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar12 = pVVar12 + lVar10 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar13 & 1 ) != 0) {
         pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar12, 2);
      uVar4 = _LC115;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      iVar7 = Variant::operator_cast_to_int(pVVar12);
      bVar6 = (bool)( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ), iVar7);
      Variant::Variant((Variant*)local_48, bVar6);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   }
 else {
      uVar8 = 3;
      LAB_0010ed25:*in_R9 = uVar8;
      in_R9[2] = 1;
   }

   LAB_0010ed30:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<NodePath const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<NodePath_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC114, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010f120;
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
         if (in_R8D != 1) goto LAB_0010f170;
         LAB_0010f160:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010f170:uVar6 = 4;
            goto LAB_0010f115;
         }

         if (in_R8D == 1) goto LAB_0010f160;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x16);
      uVar4 = _LC118;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_NodePath((Variant*)&local_48);
      ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_48);
      NodePath::~NodePath((NodePath*)&local_48);
   }
 else {
      uVar6 = 3;
      LAB_0010f115:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_0010f120:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, int, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, bool), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */void call_with_variant_args_dv<__UnexistingClass,int,bool>(__UnexistingClass *param_1, _func_void_int_bool *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
   Variant *this;
   uint uVar10;
   int iVar11;
   Variant *this_00;
   long in_stack_00000008;
   plVar8 = (long*)CONCAT44(in_register_0000000c, param_4);
   uVar10 = (uint)param_5;
   if (2 < uVar10) {
      uVar7 = 3;
      goto LAB_0010f45d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   iVar6 = 2 - uVar10;
   if (lVar1 == 0) {
      if (iVar6 == 0) {
         this(Variant * ) * plVar8;
         LAB_0010f48d:this_00 = (Variant*)plVar8[1];
         goto LAB_0010f3c5;
      }

   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      iVar11 = (int)lVar2;
      if (iVar6 <= iVar11) {
         if (uVar10 == 0) {
            lVar9 = (long)( iVar11 + -2 );
            if (lVar2 <= lVar9) goto LAB_0010f4a8;
            this(Variant * )(lVar1 + lVar9 * 0x18);
         }
 else {
            this(Variant * ) * plVar8;
            if (uVar10 == 2) goto LAB_0010f48d;
         }

         lVar9 = (long)(int)( ( uVar10 ^ 1 ) + ( iVar11 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_0010f4a8:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this_00 = (Variant*)( lVar1 + lVar9 * 0x18 );
         LAB_0010f3c5:*(undefined4*)param_6 = 0;
         if (( (ulong)param_2 & 1 ) != 0) {
            param_2 = *(_func_void_int_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*(undefined4*)this_00, 1);
         uVar4 = _LC119;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         Variant::operator_cast_to_bool(this_00);
         cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
         uVar4 = _LC115;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         iVar6 = Variant::operator_cast_to_int(this);
         /* WARNING: Could not recover jumptable at 0x0010f44c. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *param_2 )((int)( param_1 + (long)param_3 ), SUB41(iVar6, 0));
         return;
      }

   }

   uVar7 = 4;
   LAB_0010f45d:*(undefined4*)param_6 = uVar7;
   *(undefined4*)( param_6 + 8 ) = 2;
   return;
}
/* MethodBindT<int, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<int,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long lVar1;
   char *pcVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var4;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var4 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var4 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var4 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var4 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var4 + 8 ) == 0) {
         plVar3 = *(long**)( p_Var4 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)p_Var4 + 0x40 ) )(p_Var4);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( p_Var4 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
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
         _err_print_error(&_LC114, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar3 = (long*)( local_50 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0010f546;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int,bool>(p_Var4, (_func_void_int_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0010f546:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, int, Vector2>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, Vector2), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */void call_with_variant_args_dv<__UnexistingClass,int,Vector2>(__UnexistingClass *param_1, _func_void_int_Vector2 *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
   Variant *this;
   uint uVar10;
   int iVar11;
   Variant *this_00;
   long in_stack_00000008;
   plVar8 = (long*)CONCAT44(in_register_0000000c, param_4);
   uVar10 = (uint)param_5;
   if (2 < uVar10) {
      uVar7 = 3;
      goto LAB_0010f88d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   iVar6 = 2 - uVar10;
   if (lVar1 == 0) {
      if (iVar6 == 0) {
         this(Variant * ) * plVar8;
         LAB_0010f8bd:this_00 = (Variant*)plVar8[1];
         goto LAB_0010f7e9;
      }

   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      iVar11 = (int)lVar2;
      if (iVar6 <= iVar11) {
         if (uVar10 == 0) {
            lVar9 = (long)( iVar11 + -2 );
            if (lVar2 <= lVar9) goto LAB_0010f8d8;
            this(Variant * )(lVar1 + lVar9 * 0x18);
         }
 else {
            this(Variant * ) * plVar8;
            if (uVar10 == 2) goto LAB_0010f8bd;
         }

         lVar9 = (long)(int)( ( uVar10 ^ 1 ) + ( iVar11 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_0010f8d8:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this_00 = (Variant*)( lVar1 + lVar9 * 0x18 );
         LAB_0010f7e9:*(undefined4*)param_6 = 0;
         if (( (ulong)param_2 & 1 ) != 0) {
            param_2 = *(_func_void_int_Vector2**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*(undefined4*)this_00, 5);
         uVar4 = _LC120;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         Variant::operator_cast_to_Vector2(this_00);
         cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
         uVar4 = _LC115;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         iVar6 = Variant::operator_cast_to_int(this);
         /* WARNING: Could not recover jumptable at 0x0010f879. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *param_2 )((int)( param_1 + (long)param_3 ), (char)iVar6);
         return;
      }

   }

   uVar7 = 4;
   LAB_0010f88d:*(undefined4*)param_6 = uVar7;
   *(undefined4*)( param_6 + 8 ) = 2;
   return;
}
/* MethodBindT<int, Vector2>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<int,Vector2>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long lVar1;
   char *pcVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var4;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var4 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var4 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var4 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var4 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var4 + 8 ) == 0) {
         plVar3 = *(long**)( p_Var4 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)p_Var4 + 0x40 ) )(p_Var4);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( p_Var4 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
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
         _err_print_error(&_LC114, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar3 = (long*)( local_50 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0010f976;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int,Vector2>(p_Var4, (_func_void_int_Vector2*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0010f976:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, int, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, int), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */void call_with_variant_args_dv<__UnexistingClass,int,int>(__UnexistingClass *param_1, _func_void_int_int *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
   Variant *this;
   uint uVar10;
   int iVar11;
   Variant *this_00;
   long in_stack_00000008;
   plVar8 = (long*)CONCAT44(in_register_0000000c, param_4);
   uVar10 = (uint)param_5;
   if (2 < uVar10) {
      uVar7 = 3;
      goto LAB_0010fcad;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   iVar6 = 2 - uVar10;
   if (lVar1 == 0) {
      if (iVar6 == 0) {
         this(Variant * ) * plVar8;
         LAB_0010fcdd:this_00 = (Variant*)plVar8[1];
         goto LAB_0010fc15;
      }

   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      iVar11 = (int)lVar2;
      if (iVar6 <= iVar11) {
         if (uVar10 == 0) {
            lVar9 = (long)( iVar11 + -2 );
            if (lVar2 <= lVar9) goto LAB_0010fcf8;
            this(Variant * )(lVar1 + lVar9 * 0x18);
         }
 else {
            this(Variant * ) * plVar8;
            if (uVar10 == 2) goto LAB_0010fcdd;
         }

         lVar9 = (long)(int)( ( uVar10 ^ 1 ) + ( iVar11 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_0010fcf8:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this_00 = (Variant*)( lVar1 + lVar9 * 0x18 );
         LAB_0010fc15:*(undefined4*)param_6 = 0;
         if (( (ulong)param_2 & 1 ) != 0) {
            param_2 = *(_func_void_int_int**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*(undefined4*)this_00, 2);
         uVar4 = _LC121;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         Variant::operator_cast_to_int(this_00);
         cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
         uVar4 = _LC115;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         iVar6 = Variant::operator_cast_to_int(this);
         /* WARNING: Could not recover jumptable at 0x0010fc9b. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *param_2 )((int)( param_1 + (long)param_3 ), iVar6);
         return;
      }

   }

   uVar7 = 4;
   LAB_0010fcad:*(undefined4*)param_6 = uVar7;
   *(undefined4*)( param_6 + 8 ) = 2;
   return;
}
/* MethodBindT<int, int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<int,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long lVar1;
   char *pcVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var4;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var4 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var4 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var4 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var4 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var4 + 8 ) == 0) {
         plVar3 = *(long**)( p_Var4 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)p_Var4 + 0x40 ) )(p_Var4);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( p_Var4 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
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
         _err_print_error(&_LC114, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar3 = (long*)( local_50 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0010fd96;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int,int>(p_Var4, (_func_void_int_int*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0010fd96:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, int, NodePath const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, NodePath const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,int,NodePath_const&>(__UnexistingClass *param_1, _func_void_int_NodePath_ptr *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
   Variant *this;
   uint uVar10;
   int iVar11;
   undefined4 *puVar12;
   long in_FS_OFFSET;
   long in_stack_00000008;
   Variant aVStack_48[8];
   long local_40;
   plVar8 = (long*)CONCAT44(in_register_0000000c, param_4);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar10 = (uint)param_5;
   if (uVar10 < 3) {
      lVar1 = *(long*)( in_stack_00000008 + 8 );
      iVar6 = 2 - uVar10;
      if (lVar1 == 0) {
         if (iVar6 != 0) goto LAB_001100e0;
         this(Variant * ) * plVar8;
         LAB_0011012d:puVar12 = (undefined4*)plVar8[1];
      }
 else {
         lVar2 = *(long*)( lVar1 + -8 );
         iVar11 = (int)lVar2;
         if (iVar11 < iVar6) {
            LAB_001100e0:uVar7 = 4;
            goto LAB_001100e5;
         }

         if (uVar10 == 0) {
            lVar9 = (long)( iVar11 + -2 );
            if (lVar2 <= lVar9) goto LAB_00110148;
            this(Variant * )(lVar1 + lVar9 * 0x18);
         }
 else {
            this(Variant * ) * plVar8;
            if (uVar10 == 2) goto LAB_0011012d;
         }

         lVar9 = (long)(int)( ( uVar10 ^ 1 ) + ( iVar11 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_00110148:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         puVar12 = (undefined4*)( lVar1 + lVar9 * 0x18 );
      }

      *(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_int_NodePath_ptr**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*puVar12, 0x16);
      uVar4 = _LC122;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      Variant::operator_cast_to_NodePath(aVStack_48);
      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
      uVar4 = _LC115;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      iVar6 = Variant::operator_cast_to_int(this);
      ( *param_2 )((int)( param_1 + (long)param_3 ), (NodePath*)iVar6);
      NodePath::~NodePath((NodePath*)aVStack_48);
   }
 else {
      uVar7 = 3;
      LAB_001100e5:*(undefined4*)param_6 = uVar7;
      *(undefined4*)( param_6 + 8 ) = 2;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, NodePath const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindT<int,NodePath_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long lVar1;
   char *pcVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var4;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var4 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var4 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var4 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var4 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var4 + 8 ) == 0) {
         plVar3 = *(long**)( p_Var4 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)p_Var4 + 0x40 ) )(p_Var4);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( p_Var4 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
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
         _err_print_error(&_LC114, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar3 = (long*)( local_50 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_001101e6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int,NodePath_const&>(p_Var4, (_func_void_int_NodePath_ptr*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_001101e6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */void call_with_variant_args_dv<__UnexistingClass,int>(__UnexistingClass *param_1, _func_void_int *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_001104ed;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00110550;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_00110550:uVar6 = 4;
         LAB_001104ed:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }

      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_0011046b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011046b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_int**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC115;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_int(this);
   /* WARNING: Could not recover jumptable at 0x001104c6. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((int)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long lVar1;
   char *pcVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var4;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var4 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var4 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var4 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var4 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var4 + 8 ) == 0) {
         plVar3 = *(long**)( p_Var4 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)p_Var4 + 0x40 ) )(p_Var4);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( p_Var4 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
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
         _err_print_error(&_LC114, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar3 = (long*)( local_50 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_001105b6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int>(p_Var4, (_func_void_int*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_001105b6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<int>(int param_1, int *param_2, PropertyInfo *param_3) {
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
   if (iVar5 != param_1) goto LAB_001107f7;
   local_78 = 0;
   local_68 = &_LC14;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_001108f5:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001108f5;
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
   LAB_001107f7:*param_2 = iVar5 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTRC<NodePath, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<NodePath,int>::_gen_argument_type_info(int param_1) {
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
      call_get_argument_type_info_helper<int>(0, (int*)&local_70, (PropertyInfo*)&local_68);
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
      goto LAB_00110ac8;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = &_LC14;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar5 = 0x16;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_00110baf:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_00110baf;
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

   LAB_00110ac8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<int,int>::_gen_argument_type_info(int param_1) {
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
      call_get_argument_type_info_helper<int>(0, (int*)&local_70, (PropertyInfo*)&local_68);
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
      goto LAB_00110cc8;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = &_LC14;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar5 = 2;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_00110daf:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_00110daf;
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

   LAB_00110cc8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector2, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Vector2,int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   undefined8 uVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
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
      call_get_argument_type_info_helper<int>(0, (int*)&local_70, (PropertyInfo*)&local_68);
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
      goto LAB_00110ec8;
   }

   local_70 = 0;
   local_68 = &_LC14;
   local_78 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   *puVar5 = 5;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_00110f9f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_00110f9f;
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_00110ec8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool,int>::_gen_argument_type_info(int param_1) {
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
      call_get_argument_type_info_helper<int>(0, (int*)&local_70, (PropertyInfo*)&local_68);
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
      goto LAB_001110a8;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = &_LC14;
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
      LAB_0011118f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_0011118f;
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

   LAB_001110a8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, int>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<int,int>::_gen_argument_type_info(int param_1) {
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
   call_get_argument_type_info_helper<int>(in_EDX, &local_24, pPVar1);
   call_get_argument_type_info_helper<int>(in_EDX, &local_24, pPVar1);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, bool>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<int,bool>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar5;
   long in_FS_OFFSET;
   int local_8c;
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
   pPVar5 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar5 = 0;
   *(undefined4*)( pPVar5 + 0x18 ) = 0;
   *(undefined8*)( pPVar5 + 0x20 ) = 0;
   *(undefined4*)( pPVar5 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar5 + 8 ) = (undefined1[16])0x0;
   local_8c = 0;
   call_get_argument_type_info_helper<int>(in_EDX, &local_8c, pPVar5);
   if (in_EDX != local_8c) goto LAB_001112f4;
   local_78 = 0;
   local_68 = &_LC14;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 1);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_001113f5:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001113f5;
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

   *(undefined4*)pPVar5 = local_68._0_4_;
   if (*(long*)( pPVar5 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar5 + 8 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( pPVar5 + 8 ) = uVar3;
   }

   if (*(long*)( pPVar5 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( pPVar5 + 0x10 ) = uVar3;
   }

   *(int*)( pPVar5 + 0x18 ) = local_50;
   if (*(long*)( pPVar5 + 0x20 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar5 + 0x20 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( pPVar5 + 0x20 ) = lVar4;
   }

   *(undefined4*)( pPVar5 + 0x28 ) = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   LAB_001112f4:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pPVar5;
}
/* MethodBindT<int, Vector2>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<int,Vector2>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar5;
   long in_FS_OFFSET;
   int local_8c;
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
   pPVar5 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar5 = 0;
   *(undefined4*)( pPVar5 + 0x18 ) = 0;
   *(undefined8*)( pPVar5 + 0x20 ) = 0;
   *(undefined4*)( pPVar5 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar5 + 8 ) = (undefined1[16])0x0;
   local_8c = 0;
   call_get_argument_type_info_helper<int>(in_EDX, &local_8c, pPVar5);
   if (in_EDX != local_8c) goto LAB_00111584;
   local_78 = 0;
   local_68 = &_LC14;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 5);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00111685:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00111685;
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

   *(undefined4*)pPVar5 = local_68._0_4_;
   if (*(long*)( pPVar5 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar5 + 8 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( pPVar5 + 8 ) = uVar3;
   }

   if (*(long*)( pPVar5 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( pPVar5 + 0x10 ) = uVar3;
   }

   *(int*)( pPVar5 + 0x18 ) = local_50;
   if (*(long*)( pPVar5 + 0x20 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar5 + 0x20 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( pPVar5 + 0x20 ) = lVar4;
   }

   *(undefined4*)( pPVar5 + 0x28 ) = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   LAB_00111584:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pPVar5;
}
/* void call_get_argument_type_info_helper<NodePath const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<NodePath_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
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
   if (iVar5 != param_1) goto LAB_001117d7;
   local_78 = 0;
   local_68 = &_LC14;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x16);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_001118d5:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001118d5;
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
   LAB_001117d7:*param_2 = iVar5 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindT<NodePath const&>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<NodePath_const&>::_gen_argument_type_info(int param_1) {
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
   call_get_argument_type_info_helper<NodePath_const&>(in_EDX, &local_14, pPVar1);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, NodePath const&>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<int,NodePath_const&>::_gen_argument_type_info(int param_1) {
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
   call_get_argument_type_info_helper<int>(in_EDX, &local_24, pPVar1);
   call_get_argument_type_info_helper<NodePath_const&>(in_EDX, &local_24, pPVar1);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool, int>::~MethodBindTRC() */void MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int, bool>::~MethodBindT() */void MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Vector2, int>::~MethodBindTRC() */void MethodBindTRC<Vector2,int>::~MethodBindTRC(MethodBindTRC<Vector2,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int, Vector2>::~MethodBindT() */void MethodBindT<int,Vector2>::~MethodBindT(MethodBindT<int,Vector2> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<int, int>::~MethodBindTRC() */void MethodBindTRC<int,int>::~MethodBindTRC(MethodBindTRC<int,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int, int>::~MethodBindT() */void MethodBindT<int,int>::~MethodBindT(MethodBindT<int,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<NodePath, int>::~MethodBindTRC() */void MethodBindTRC<NodePath,int>::~MethodBindTRC(MethodBindTRC<NodePath,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int, NodePath const&>::~MethodBindT() */void MethodBindT<int,NodePath_const&>::~MethodBindT(MethodBindT<int,NodePath_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<int>::~MethodBindTR() */void MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<NodePath>::~MethodBindTRC() */void MethodBindTRC<NodePath>::~MethodBindTRC(MethodBindTRC<NodePath> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<NodePath const&>::~MethodBindT() */void MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

