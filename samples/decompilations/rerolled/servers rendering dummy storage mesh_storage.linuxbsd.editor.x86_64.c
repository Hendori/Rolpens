/* CowData<AABB>::_ref(CowData<AABB> const&) [clone .part.0] */void CowData<AABB>::_ref(CowData<AABB> *this, CowData *param_1) {
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
/* CowData<float>::_copy_on_write() [clone .isra.0] */void CowData<float>::_copy_on_write(CowData<float> *this) {
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
/* RendererDummy::MeshStorage::_multimesh_get_buffer(RID) const */long RendererDummy::MeshStorage::_multimesh_get_buffer(long param_1, long param_2, ulong param_3) {
   long lVar1;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0xbc ) )) {
      lVar1 = *(long*)( *(long*)( param_2 + 0xa8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0xb8 ) ) * 8 ) + ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0xb8 ) ) * 0x18;
      if (*(int*)( lVar1 + 0x10 ) == (int)( param_3 >> 0x20 )) {
         *(undefined8*)( param_1 + 8 ) = 0;
         if (*(long*)( lVar1 + 8 ) != 0) {
            CowData<float>::_ref((CowData<float>*)( param_1 + 8 ), (CowData*)( lVar1 + 8 ));
         }

         return param_1;
      }

      if (*(int*)( lVar1 + 0x10 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("_multimesh_get_buffer", "servers/rendering/dummy/storage/mesh_storage.cpp", 99, "Parameter \"multimesh\" is null.", 0, 0);
   *(undefined8*)( param_1 + 8 ) = 0;
   return param_1;
}
/* CowData<unsigned char>::_ref(CowData<unsigned char> const&) [clone .part.0] */void CowData<unsigned_char>::_ref(CowData<unsigned_char> *this, CowData *param_1) {
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
/* RendererDummy::MeshStorage::_multimesh_initialize(RID) */void RendererDummy::MeshStorage::_multimesh_initialize(MeshStorage *this, ulong param_2) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   char *pcVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xbc ) )) {
      lVar1 = *(long*)( *(long*)( this + 0xa8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xb8 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xb8 ) ) * 0x18;
      if ((int)*(uint*)( lVar1 + 0x10 ) < 0) {
         uVar3 = ( uint )(param_2 >> 0x20);
         if (uVar3 == ( *(uint*)( lVar1 + 0x10 ) & 0x7fffffff )) {
            *(uint*)( lVar1 + 0x10 ) = uVar3;
            *(undefined8*)( lVar1 + 8 ) = 0;
            return;
         }

         pcVar4 = "Attempting to initialize the wrong RID";
         uVar2 = 0xfc;
      }
 else {
         pcVar4 = "Initializing already initialized RID";
         uVar2 = 0xf8;
      }

      _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar2, "Method/function failed. Returning: nullptr", pcVar4, 0, 0);
   }

   _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
   return;
}
/* RendererDummy::MeshStorage::_multimesh_free(RID) */undefined1[16];RendererDummy::MeshStorage::_multimesh_free (MeshStorage *this,ulong param_2) {
   long *plVar1;
   int iVar2;
   long lVar3;
   ulong uVar4;
   uint uVar5;
   long lVar6;
   long lVar7;
   undefined1 auVar8[16];
   ulong uStack_30;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0xbc )) {
         uVar4 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xb8 );
         lVar7 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xb8 ) ) * 0x18;
         lVar6 = *(long*)( *(long*)( this + 0xa8 ) + uVar4 * 8 ) + lVar7;
         iVar2 = *(int*)( lVar6 + 0x10 );
         if (iVar2 == (int)( param_2 >> 0x20 )) {
            if (iVar2 < 0) {
               lVar6 = 0;
               _err_print_error(&_LC23, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0);
            }
 else {
               if (*(long*)( lVar6 + 8 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 8 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( lVar6 + 8 );
                     *(undefined8*)( lVar6 + 8 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     lVar6 = lVar7 + *(long*)( *(long*)( this + 0xa8 ) + uVar4 * 8 );
                  }
 else {
                     lVar6 = lVar7 + *(long*)( *(long*)( this + 0xa8 ) + uVar4 * 8 );
                  }

               }

               *(undefined4*)( lVar6 + 0x10 ) = 0xffffffff;
               uVar5 = *(int*)( this + 0xc0 ) - 1;
               *(uint*)( this + 0xc0 ) = uVar5;
               uStack_30 = (ulong)uVar5 % ( ulong ) * (uint*)( this + 0xb8 );
               lVar6 = *(long*)( *(long*)( this + 0xb0 ) + ( (ulong)uVar5 / ( ulong ) * (uint*)( this + 0xb8 ) ) * 8 );
               *(uint*)( lVar6 + uStack_30 * 4 ) = (uint)param_2;
            }

            auVar8._8_8_ = uStack_30;
            auVar8._0_8_ = lVar6;
            return auVar8;
         }

         if (iVar2 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   auVar8 = _err_print_error("_multimesh_free", "servers/rendering/dummy/storage/mesh_storage.cpp", 0x54, "Parameter \"multimesh\" is null.", 0, 0);
   return auVar8;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererDummy::MeshStorage::MeshStorage() */void RendererDummy::MeshStorage::MeshStorage(MeshStorage *this) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   uVar2 = _UNK_00105258;
   uVar1 = __LC24;
   *(undefined8*)( this + 8 ) = 0;
   *(MeshStorage**)( this + 0x38 ) = this + 0x18;
   *(MeshStorage**)( this + 0x40 ) = this + 0x28;
   *(undefined1(*) [16])( this + 0x88 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xe0 ) = (undefined1[16])0x0;
   *(undefined***)this = &PTR__MeshStorage_00104d60;
   *(undefined1(*) [16])( this + 0x78 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xd0 ) = (undefined1[16])0x0;
   uVar4 = _UNK_00105268;
   uVar3 = __LC25;
   *(undefined***)( this + 0x48 ) = &PTR__RID_Alloc_00104d20;
   *(undefined8*)( this + 0x10 ) = 0;
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined8*)( this + 0x30 ) = 0;
   *(undefined8*)( this + 0x50 ) = 0;
   *(undefined8*)( this + 0x58 ) = 0;
   *(undefined8*)( this + 0x70 ) = 0;
   *(undefined8*)( this + 0x98 ) = 0;
   *(undefined4*)( this + 0x88 ) = 1;
   *(undefined***)( this + 0xa0 ) = &PTR__RID_Alloc_00104d40;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 168 ) ) = 0;
   }

   *(undefined4*)( this + 0xe0 ) = 1;
   singleton = this;
   *(undefined8*)( this + 0x60 ) = uVar1;
   *(undefined8*)( this + 0x68 ) = uVar2;
   *(undefined8*)( this + 0xb8 ) = uVar3;
   *(undefined8*)( this + 0xc0 ) = uVar4;
   return;
}
/* RendererDummy::MeshStorage::mesh_allocate() */void RendererDummy::MeshStorage::mesh_allocate(MeshStorage *this) {
   RID_Alloc<RendererDummy::DummyMesh,false>::allocate_rid((RID_Alloc<RendererDummy::DummyMesh,false>*)( this + 0x48 ));
   return;
}
/* RendererDummy::MeshStorage::_multimesh_allocate() */void RendererDummy::MeshStorage::_multimesh_allocate(MeshStorage *this) {
   RID_Alloc<RendererDummy::MeshStorage::DummyMultiMesh,false>::allocate_rid((RID_Alloc<RendererDummy::MeshStorage::DummyMultiMesh,false>*)( this + 0xa0 ));
   return;
}
/* CowData<RenderingServer::SurfaceData::LOD>::_ref(CowData<RenderingServer::SurfaceData::LOD>
   const&) [clone .part.0] */void CowData<RenderingServer::SurfaceData::LOD>::_ref(CowData<RenderingServer::SurfaceData::LOD> *this, CowData *param_1) {
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
/* RendererDummy::MeshStorage::mesh_free(RID) */long RendererDummy::MeshStorage::mesh_free(MeshStorage *this, ulong param_2) {
   long *plVar1;
   int iVar2;
   long lVar3;
   ulong uVar4;
   uint uVar5;
   int iVar6;
   uint uVar7;
   long lVar8;
   long lVar9;
   if (( param_2 != 0 ) && ( uVar7 = (uint)param_2 ),uVar7 < *(uint*)( this + 100 )) {
      lVar8 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x60 ) ) * 0x60 + *(long*)( *(long*)( this + 0x50 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x60 ) ) * 8 );
      iVar2 = *(int*)( lVar8 + 0x58 );
      iVar6 = (int)( param_2 >> 0x20 );
      if (iVar2 == iVar6) {
         Dependency::deleted_notify((RID*)( lVar8 + 0x28 ));
         if (uVar7 < *(uint*)( this + 100 )) {
            uVar4 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x60 );
            lVar9 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x60 ) ) * 0x60;
            lVar8 = *(long*)( *(long*)( this + 0x50 ) + uVar4 * 8 ) + lVar9;
            if (*(int*)( lVar8 + 0x58 ) < 0) {
               lVar8 = 0;
               _err_print_error(&_LC23, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0);
            }
 else if (iVar6 == *(int*)( lVar8 + 0x58 )) {
               Dependency::~Dependency((Dependency*)( lVar8 + 0x28 ));
               if (*(long*)( lVar8 + 0x20 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar8 + 0x20 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( lVar8 + 0x20 );
                     *(undefined8*)( lVar8 + 0x20 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               CowData<RenderingServer::SurfaceData>::_unref((CowData<RenderingServer::SurfaceData>*)( lVar8 + 8 ));
               lVar8 = *(long*)( this + 0x58 );
               *(undefined4*)( *(long*)( *(long*)( this + 0x50 ) + uVar4 * 8 ) + 0x58 + lVar9 ) = 0xffffffff;
               uVar5 = *(int*)( this + 0x68 ) - 1;
               *(uint*)( this + 0x68 ) = uVar5;
               lVar8 = *(long*)( lVar8 + ( (ulong)uVar5 / ( ulong ) * (uint*)( this + 0x60 ) ) * 8 );
               *(uint*)( lVar8 + ( (ulong)uVar5 % ( ulong ) * (uint*)( this + 0x60 ) ) * 4 ) = uVar7;
            }
 else {
               lVar8 = _err_print_error(&_LC23, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
            }

         }
 else {
            lVar8 = _err_print_error(&_LC23, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
         }

         return lVar8;
      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   lVar8 = _err_print_error("mesh_free", "servers/rendering/dummy/storage/mesh_storage.cpp", 0x37, "Parameter \"mesh\" is null.", 0, 0);
   return lVar8;
}
/* CowData<RenderingServer::SurfaceData>::_copy_on_write() [clone .isra.0] */void CowData<RenderingServer::SurfaceData>::_copy_on_write(CowData<RenderingServer::SurfaceData> *this) {
   undefined4 uVar1;
   long lVar2;
   undefined8 uVar3;
   long lVar4;
   code *pcVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 *puVar11;
   CowData<unsigned_char> *pCVar12;
   CowData<unsigned_char> *this_00;
   ulong uVar13;
   long lVar14;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar13 = 0x10;
   if (lVar2 * 0xf0 != 0) {
      uVar13 = lVar2 * 0xf0 - 1;
      uVar13 = uVar13 | uVar13 >> 1;
      uVar13 = uVar13 | uVar13 >> 2;
      uVar13 = uVar13 | uVar13 >> 4;
      uVar13 = uVar13 | uVar13 >> 8;
      uVar13 = uVar13 | uVar13 >> 0x10;
      uVar13 = ( uVar13 | uVar13 >> 0x20 ) + 0x11;
   }

   puVar11 = (undefined8*)Memory::alloc_static(uVar13, false);
   if (puVar11 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   this_00 = (CowData<unsigned_char>*)( puVar11 + 0x1c );
   lVar14 = 0;
   *puVar11 = 1;
   puVar11[1] = lVar2;
   if (lVar2 != 0) {
      do {
         pCVar12 = this_00 + *(long*)this + ( -0xe0 - (long)puVar11 );
         *(undefined4*)( this_00 + -0xd0 ) = *(undefined4*)pCVar12;
         uVar3 = *(undefined8*)( pCVar12 + 8 );
         *(undefined8*)( this_00 + -0xb8 ) = 0;
         lVar4 = *(long*)( pCVar12 + 0x18 );
         *(undefined8*)( this_00 + -200 ) = uVar3;
         if (lVar4 != 0) {
            CowData<unsigned_char>::_ref(this_00 + -0xb8, (CowData*)( pCVar12 + 0x18 ));
         }

         *(undefined8*)( this_00 + -0xa8 ) = 0;
         if (*(long*)( pCVar12 + 0x28 ) != 0) {
            CowData<unsigned_char>::_ref(this_00 + -0xa8, (CowData*)( pCVar12 + 0x28 ));
         }

         *(undefined8*)( this_00 + -0x98 ) = 0;
         if (*(long*)( pCVar12 + 0x38 ) != 0) {
            CowData<unsigned_char>::_ref(this_00 + -0x98, (CowData*)( pCVar12 + 0x38 ));
         }

         uVar1 = *(undefined4*)( pCVar12 + 0x40 );
         *(undefined8*)( this_00 + -0x80 ) = 0;
         lVar4 = *(long*)( pCVar12 + 0x50 );
         *(undefined4*)( this_00 + -0x90 ) = uVar1;
         if (lVar4 != 0) {
            CowData<unsigned_char>::_ref(this_00 + -0x80, (CowData*)( pCVar12 + 0x50 ));
         }

         uVar6 = *(undefined8*)( pCVar12 + 0x5c );
         uVar7 = *(undefined8*)( pCVar12 + 100 );
         *(undefined4*)( this_00 + -0x78 ) = *(undefined4*)( pCVar12 + 0x58 );
         uVar3 = *(undefined8*)( pCVar12 + 0x6c );
         *(undefined8*)( this_00 + -0x50 ) = 0;
         lVar4 = *(long*)( pCVar12 + 0x80 );
         *(undefined8*)( this_00 + -100 ) = uVar3;
         *(undefined8*)( this_00 + -0x74 ) = uVar6;
         *(undefined8*)( this_00 + -0x6c ) = uVar7;
         if (lVar4 != 0) {
            CowData<RenderingServer::SurfaceData::LOD>::_ref((CowData<RenderingServer::SurfaceData::LOD>*)( this_00 + -0x50 ), (CowData*)( pCVar12 + 0x80 ));
         }

         *(undefined8*)( this_00 + -0x40 ) = 0;
         if (*(long*)( pCVar12 + 0x90 ) != 0) {
            CowData<AABB>::_ref((CowData<AABB>*)( this_00 + -0x40 ), (CowData*)( pCVar12 + 0x90 ));
         }

         uVar3 = *(undefined8*)( pCVar12 + 0x98 );
         uVar6 = *(undefined8*)( pCVar12 + 0xa0 );
         uVar7 = *(undefined8*)( pCVar12 + 0xa8 );
         uVar8 = *(undefined8*)( pCVar12 + 0xb0 );
         uVar9 = *(undefined8*)( pCVar12 + 0xb8 );
         uVar10 = *(undefined8*)( pCVar12 + 0xc0 );
         *(undefined8*)this_00 = 0;
         lVar4 = *(long*)( pCVar12 + 0xd0 );
         *(undefined8*)( this_00 + -0x38 ) = uVar3;
         *(undefined8*)( this_00 + -0x30 ) = uVar6;
         *(undefined8*)( this_00 + -0x28 ) = uVar7;
         *(undefined8*)( this_00 + -0x20 ) = uVar8;
         *(undefined8*)( this_00 + -0x18 ) = uVar9;
         *(undefined8*)( this_00 + -0x10 ) = uVar10;
         if (lVar4 != 0) {
            CowData<unsigned_char>::_ref(this_00, (CowData*)( pCVar12 + 0xd0 ));
         }

         uVar6 = *(undefined8*)( pCVar12 + 0xe0 );
         uVar3 = *(undefined8*)( pCVar12 + 0xe8 );
         lVar14 = lVar14 + 1;
         *(undefined8*)( this_00 + 8 ) = *(undefined8*)( pCVar12 + 0xd8 );
         *(undefined8*)( this_00 + 0x10 ) = uVar6;
         *(undefined8*)( this_00 + 0x18 ) = uVar3;
         this_00 = this_00 + 0xf0;
      }
 while ( lVar2 != lVar14 );
   }

   _unref(this);
   *(undefined8**)this = puVar11 + 2;
   return;
}
/* RendererDummy::MeshStorage::~MeshStorage() */void RendererDummy::MeshStorage::~MeshStorage(MeshStorage *this) {
   *(undefined***)this = &PTR__MeshStorage_00104d60;
   singleton = 0;
   RID_Alloc<RendererDummy::MeshStorage::DummyMultiMesh,false>::~RID_Alloc((RID_Alloc<RendererDummy::MeshStorage::DummyMultiMesh,false>*)( this + 0xa0 ));
   RID_Alloc<RendererDummy::DummyMesh,false>::~RID_Alloc((RID_Alloc<RendererDummy::DummyMesh,false>*)( this + 0x48 ));
   *(code**)this = operator_new;
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
/* RendererDummy::MeshStorage::~MeshStorage() */void RendererDummy::MeshStorage::~MeshStorage(MeshStorage *this) {
   ~MeshStorage(this)
   ;;
   operator_delete(this, 0xf8);
   return;
}
/* RendererDummy::MeshStorage::mesh_clear(RID) */void RendererDummy::MeshStorage::mesh_clear(MeshStorage *this, ulong param_2) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 100 ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x60 ) ) * 0x60 + *(long*)( *(long*)( this + 0x50 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x60 ) ) * 8 );
      if (*(int*)( lVar1 + 0x58 ) == (int)( param_2 >> 0x20 )) {
         if (( *(long*)( lVar1 + 8 ) != 0 ) && ( *(long*)( *(long*)( lVar1 + 8 ) + -8 ) != 0 )) {
            CowData<RenderingServer::SurfaceData>::_unref((CowData<RenderingServer::SurfaceData>*)( lVar1 + 8 ));
            return;
         }

         return;
      }

      if (*(int*)( lVar1 + 0x58 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("mesh_clear", "servers/rendering/dummy/storage/mesh_storage.cpp", 0x45, "Parameter \"m\" is null.", 0, 0);
   return;
}
/* RendererDummy::MeshStorage::_multimesh_set_buffer(RID, Vector<float> const&) */void RendererDummy::MeshStorage::_multimesh_set_buffer(MeshStorage *this, ulong param_2, long param_3) {
   CowData<float> *this_00;
   long *plVar1;
   long lVar2;
   long lVar3;
   void *__src;
   int iVar4;
   long lVar5;
   ulong uVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   size_t __n;
   long lVar9;
   long lVar10;
   if (( param_2 == 0 ) || ( *(uint*)( this + 0xbc ) <= (uint)param_2 )) {
      LAB_00101098:_err_print_error("_multimesh_set_buffer", "servers/rendering/dummy/storage/mesh_storage.cpp", 0x5b, "Parameter \"multimesh\" is null.", 0, 0);
      return;
   }

   lVar2 = *(long*)( *(long*)( this + 0xa8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xb8 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xb8 ) ) * 0x18;
   if (*(int*)( lVar2 + 0x10 ) != (int)( param_2 >> 0x20 )) {
      if (*(int*)( lVar2 + 0x10 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_00101098;
   }

   if (*(long*)( param_3 + 8 ) == 0) {
      lVar5 = *(long*)( lVar2 + 8 );
      if (( lVar5 == 0 ) || ( *(long*)( lVar5 + -8 ) == 0 )) goto LAB_00100fd0;
      LAB_00101044:LOCK();
      plVar1 = (long*)( lVar5 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar5 = *(long*)( lVar2 + 8 );
         *(undefined8*)( lVar2 + 8 ) = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }
 else {
         *(undefined8*)( lVar2 + 8 ) = 0;
      }

      goto LAB_00100fd0;
   }

   lVar3 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
   this_00 = (CowData<float>*)( lVar2 + 8 );
   if (lVar3 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      goto LAB_00100fd0;
   }

   lVar5 = *(long*)( lVar2 + 8 );
   if (lVar5 == 0) {
      if (lVar3 == 0) goto LAB_00100fd0;
      lVar10 = 0;
      CowData<float>::_copy_on_write(this_00);
      lVar5 = 0;
   }
 else {
      lVar10 = *(long*)( lVar5 + -8 );
      if (lVar3 == lVar10) goto LAB_00100fd0;
      if (lVar3 == 0) goto LAB_00101044;
      CowData<float>::_copy_on_write(this_00);
      lVar5 = lVar10 * 4;
      if (lVar5 != 0) {
         uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
         uVar6 = uVar6 | uVar6 >> 2;
         uVar6 = uVar6 | uVar6 >> 4;
         uVar6 = uVar6 | uVar6 >> 8;
         uVar6 = uVar6 | uVar6 >> 0x10;
         lVar5 = ( uVar6 | uVar6 >> 0x20 ) + 1;
      }

   }

   if (lVar3 * 4 != 0) {
      uVar6 = lVar3 * 4 - 1;
      uVar6 = uVar6 | uVar6 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = uVar6 | uVar6 >> 0x20;
      lVar9 = uVar6 + 1;
      if (lVar9 != 0) {
         if (lVar3 <= lVar10) {
            if (lVar9 != lVar5) {
               iVar4 = CowData<float>::_realloc(this_00, lVar9);
               if (iVar4 != 0) goto LAB_00100fd0;
            }

            if (*(long*)( lVar2 + 8 ) == 0) {
               _multimesh_set_buffer();
               return;
            }

            *(long*)( *(long*)( lVar2 + 8 ) + -8 ) = lVar3;
            goto LAB_00100fd0;
         }

         if (lVar9 == lVar5) {
            LAB_00101070:puVar8 = *(undefined8**)( lVar2 + 8 );
            if (puVar8 == (undefined8*)0x0) {
               _multimesh_set_buffer();
               return;
            }

         }
 else {
            if (lVar10 != 0) {
               iVar4 = CowData<float>::_realloc(this_00, lVar9);
               if (iVar4 != 0) goto LAB_00100fd0;
               goto LAB_00101070;
            }

            puVar7 = (undefined8*)Memory::alloc_static(uVar6 + 0x11, false);
            if (puVar7 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               goto LAB_00100fd0;
            }

            puVar8 = puVar7 + 2;
            *puVar7 = 1;
            puVar7[1] = 0;
            *(undefined8**)( lVar2 + 8 ) = puVar8;
         }

         puVar8[-1] = lVar3;
         goto LAB_00100fd0;
      }

   }

   _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
   LAB_00100fd0:CowData<float>::_copy_on_write((CowData<float>*)( lVar2 + 8 ));
   __src = *(void**)( param_3 + 8 );
   if (__src == (void*)0x0) {
      __n = 0;
   }
 else {
      __n = *(long*)( (long)__src + -8 ) * 4;
   }

   memcpy(*(void**)( lVar2 + 8 ), __src, __n);
   return;
}
/* RendererDummy::MeshStorage::mesh_surface_remove(RID, int) */void RendererDummy::MeshStorage::mesh_surface_remove(MeshStorage *this, ulong param_2, int param_3) {
   Vector<RenderingServer::SurfaceData> *this_00;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 100 ) )) {
      this_00 = (Vector<RenderingServer::SurfaceData>*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x60 ) ) * 0x60 + *(long*)( *(long*)( this + 0x50 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x60 ) ) * 8 ) );
      if (*(int*)( this_00 + 0x58 ) == (int)( param_2 >> 0x20 )) {
         Dependency::changed_notify(this_00 + 0x28, 2);
         Vector<RenderingServer::SurfaceData>::remove_at(this_00, (long)param_3);
         return;
      }

      if (*(int*)( this_00 + 0x58 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("mesh_surface_remove", "servers/rendering/dummy/storage/mesh_storage.cpp", 0x3e, "Parameter \"m\" is null.", 0, 0);
   return;
}
/* RendererDummy::MeshStorage::mesh_initialize(RID) */void RendererDummy::MeshStorage::mesh_initialize(MeshStorage *this, ulong param_2) {
   long lVar1;
   undefined8 uVar2;
   long *plVar3;
   long lVar4;
   uint uVar5;
   char *pcVar6;
   long in_FS_OFFSET;
   DependencyTracker *local_80[2];
   undefined8 local_70;
   undefined8 local_68;
   long local_58;
   Dependency local_50[8];
   undefined1 local_48[16];
   undefined1 local_38[16];
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (undefined1[16])0x0;
   local_68 = 0;
   local_70 = 0;
   local_58 = 0;
   local_28 = 2;
   local_38 = (undefined1[16])0x0;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 100 ) )) {
      lVar4 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x60 ) ) * 0x60 + *(long*)( *(long*)( this + 0x50 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x60 ) ) * 8 );
      if ((int)*(uint*)( lVar4 + 0x58 ) < 0) {
         uVar5 = ( uint )(param_2 >> 0x20);
         if (uVar5 == ( *(uint*)( lVar4 + 0x58 ) & 0x7fffffff )) {
            *(uint*)( lVar4 + 0x58 ) = uVar5;
            lVar1 = 1;
            *(undefined8*)( lVar4 + 8 ) = 0;
            *(undefined8*)( lVar4 + 0x10 ) = 0;
            *(undefined8*)( lVar4 + 0x20 ) = 0;
            *(undefined8*)( lVar4 + 0x50 ) = 0;
            *(undefined1(*) [16])( lVar4 + 0x30 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( lVar4 + 0x40 ) = (undefined1[16])0x0;
            do {
               if (0x16 < *(uint*)( hash_table_size_primes + lVar1 * 4 )) {
                  *(int*)( lVar4 + 0x50 ) = (int)lVar1;
                  goto LAB_001013d1;
               }

               lVar1 = lVar1 + 1;
            }
 while ( lVar1 != 0x1d );
            _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
            LAB_001013d1:if (( local_28._4_4_ != 0 ) && ( (long*)local_38._0_8_ != (long*)0x0 )) {
               plVar3 = (long*)local_38._0_8_;
               do {
                  HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::insert(local_80, (uint*)( lVar4 + 0x28 ), (bool)( (char)plVar3 + '\x10' ));
                  plVar3 = (long*)*plVar3;
               }
 while ( plVar3 != (long*)0x0 );
            }

            goto LAB_0010140e;
         }

         pcVar6 = "Attempting to initialize the wrong RID";
         uVar2 = 0xfc;
      }
 else {
         pcVar6 = "Initializing already initialized RID";
         uVar2 = 0xf8;
      }

      _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar2, "Method/function failed. Returning: nullptr", pcVar6, 0, 0);
   }

   _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
   LAB_0010140e:Dependency::~Dependency(local_50);
   lVar4 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar3 = (long*)( local_58 + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   CowData<RenderingServer::SurfaceData>::_unref((CowData<RenderingServer::SurfaceData>*)&local_70);
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* RendererDummy::MeshStorage::mesh_set_blend_shape_count(RID, int) */void RendererDummy::MeshStorage::mesh_set_blend_shape_count(void) {
   return;
}
/* RendererDummy::MeshStorage::mesh_needs_instance(RID, bool) */undefined8 RendererDummy::MeshStorage::mesh_needs_instance(void) {
   return 0;
}
/* RendererDummy::MeshStorage::mesh_get_blend_shape_count(RID) const */undefined8 RendererDummy::MeshStorage::mesh_get_blend_shape_count(void) {
   return 0;
}
/* RendererDummy::MeshStorage::mesh_set_blend_shape_mode(RID, RenderingServer::BlendShapeMode) */void RendererDummy::MeshStorage::mesh_set_blend_shape_mode(void) {
   return;
}
/* RendererDummy::MeshStorage::mesh_get_blend_shape_mode(RID) const */undefined8 RendererDummy::MeshStorage::mesh_get_blend_shape_mode(void) {
   return 0;
}
/* RendererDummy::MeshStorage::mesh_surface_update_vertex_region(RID, int, int, Vector<unsigned
   char> const&) */void RendererDummy::MeshStorage::mesh_surface_update_vertex_region(void) {
   return;
}
/* RendererDummy::MeshStorage::mesh_surface_update_attribute_region(RID, int, int, Vector<unsigned
   char> const&) */void RendererDummy::MeshStorage::mesh_surface_update_attribute_region(void) {
   return;
}
/* RendererDummy::MeshStorage::mesh_surface_update_skin_region(RID, int, int, Vector<unsigned char>
   const&) */void RendererDummy::MeshStorage::mesh_surface_update_skin_region(void) {
   return;
}
/* RendererDummy::MeshStorage::mesh_surface_set_material(RID, int, RID) */void RendererDummy::MeshStorage::mesh_surface_set_material(void) {
   return;
}
/* RendererDummy::MeshStorage::mesh_surface_get_material(RID, int) const */undefined8 RendererDummy::MeshStorage::mesh_surface_get_material(void) {
   return 0;
}
/* RendererDummy::MeshStorage::mesh_set_custom_aabb(RID, AABB const&) */void RendererDummy::MeshStorage::mesh_set_custom_aabb(void) {
   return;
}
/* RendererDummy::MeshStorage::mesh_get_custom_aabb(RID) const */undefined8 *RendererDummy::MeshStorage::mesh_get_custom_aabb(undefined8 *param_1) {
   *param_1 = 0;
   *(undefined4*)( param_1 + 1 ) = 0;
   *(undefined8*)( (long)param_1 + 0xc ) = 0;
   *(undefined4*)( (long)param_1 + 0x14 ) = 0;
   return param_1;
}
/* RendererDummy::MeshStorage::mesh_get_aabb(RID, RID) */undefined8 *RendererDummy::MeshStorage::mesh_get_aabb(undefined8 *param_1) {
   *param_1 = 0;
   *(undefined4*)( param_1 + 1 ) = 0;
   *(undefined8*)( (long)param_1 + 0xc ) = 0;
   *(undefined4*)( (long)param_1 + 0x14 ) = 0;
   return param_1;
}
/* RendererDummy::MeshStorage::mesh_set_path(RID, String const&) */void RendererDummy::MeshStorage::mesh_set_path(void) {
   return;
}
/* RendererDummy::MeshStorage::mesh_get_path(RID) const */undefined8 *RendererDummy::MeshStorage::mesh_get_path(undefined8 *param_1) {
   *param_1 = 0;
   return param_1;
}
/* RendererDummy::MeshStorage::mesh_set_shadow_mesh(RID, RID) */void RendererDummy::MeshStorage::mesh_set_shadow_mesh(void) {
   return;
}
/* RendererDummy::MeshStorage::mesh_instance_create(RID) */undefined8 RendererDummy::MeshStorage::mesh_instance_create(void) {
   return 0;
}
/* RendererDummy::MeshStorage::mesh_instance_free(RID) */void RendererDummy::MeshStorage::mesh_instance_free(void) {
   return;
}
/* RendererDummy::MeshStorage::mesh_instance_set_skeleton(RID, RID) */void RendererDummy::MeshStorage::mesh_instance_set_skeleton(void) {
   return;
}
/* RendererDummy::MeshStorage::mesh_instance_set_blend_shape_weight(RID, int, float) */void RendererDummy::MeshStorage::mesh_instance_set_blend_shape_weight(void) {
   return;
}
/* RendererDummy::MeshStorage::mesh_instance_check_for_update(RID) */void RendererDummy::MeshStorage::mesh_instance_check_for_update(void) {
   return;
}
/* RendererDummy::MeshStorage::mesh_instance_set_canvas_item_transform(RID, Transform2D const&) */void RendererDummy::MeshStorage::mesh_instance_set_canvas_item_transform(void) {
   return;
}
/* RendererDummy::MeshStorage::update_mesh_instances() */void RendererDummy::MeshStorage::update_mesh_instances(void) {
   return;
}
/* RendererDummy::MeshStorage::_multimesh_allocate_data(RID, int,
   RenderingServer::MultimeshTransformFormat, bool, bool, bool) */void RendererDummy::MeshStorage::_multimesh_allocate_data(void) {
   return;
}
/* RendererDummy::MeshStorage::_multimesh_get_instance_count(RID) const */undefined8 RendererDummy::MeshStorage::_multimesh_get_instance_count(void) {
   return 0;
}
/* RendererDummy::MeshStorage::_multimesh_set_mesh(RID, RID) */void RendererDummy::MeshStorage::_multimesh_set_mesh(void) {
   return;
}
/* RendererDummy::MeshStorage::_multimesh_instance_set_transform(RID, int, Transform3D const&) */void RendererDummy::MeshStorage::_multimesh_instance_set_transform(void) {
   return;
}
/* RendererDummy::MeshStorage::_multimesh_instance_set_transform_2d(RID, int, Transform2D const&) */void RendererDummy::MeshStorage::_multimesh_instance_set_transform_2d(void) {
   return;
}
/* RendererDummy::MeshStorage::_multimesh_instance_set_color(RID, int, Color const&) */void RendererDummy::MeshStorage::_multimesh_instance_set_color(void) {
   return;
}
/* RendererDummy::MeshStorage::_multimesh_instance_set_custom_data(RID, int, Color const&) */void RendererDummy::MeshStorage::_multimesh_instance_set_custom_data(void) {
   return;
}
/* RendererDummy::MeshStorage::_multimesh_set_custom_aabb(RID, AABB const&) */void RendererDummy::MeshStorage::_multimesh_set_custom_aabb(void) {
   return;
}
/* RendererDummy::MeshStorage::_multimesh_get_custom_aabb(RID) const */undefined8 *RendererDummy::MeshStorage::_multimesh_get_custom_aabb(undefined8 *param_1) {
   *param_1 = 0;
   *(undefined4*)( param_1 + 1 ) = 0;
   *(undefined8*)( (long)param_1 + 0xc ) = 0;
   *(undefined4*)( (long)param_1 + 0x14 ) = 0;
   return param_1;
}
/* RendererDummy::MeshStorage::_multimesh_get_mesh(RID) const */undefined8 RendererDummy::MeshStorage::_multimesh_get_mesh(void) {
   return 0;
}
/* RendererDummy::MeshStorage::_multimesh_get_aabb(RID) */undefined8 *RendererDummy::MeshStorage::_multimesh_get_aabb(undefined8 *param_1) {
   *param_1 = 0;
   *(undefined4*)( param_1 + 1 ) = 0;
   *(undefined8*)( (long)param_1 + 0xc ) = 0;
   *(undefined4*)( (long)param_1 + 0x14 ) = 0;
   return param_1;
}
/* RendererDummy::MeshStorage::_multimesh_instance_get_transform(RID, int) const */undefined1(*)[16];RendererDummy::MeshStorage::_multimesh_instance_get_transform(undefined1 (*param_1)[16]) {
   uint uVar1;
   uVar1 = _LC1;
   *(undefined4*)param_1[2] = 0x3f800000;
   *(undefined8*)( param_1[2] + 4 ) = 0;
   *(undefined4*)( param_1[2] + 0xc ) = 0;
   *param_1 = ZEXT416(uVar1);
   param_1[1] = ZEXT416(uVar1);
   return param_1;
}
/* RendererDummy::MeshStorage::_multimesh_instance_get_transform_2d(RID, int) const */undefined8 *RendererDummy::MeshStorage::_multimesh_instance_get_transform_2d(undefined8 *param_1) {
   *param_1 = 0x3f800000;
   param_1[1] = 0x3f80000000000000;
   param_1[2] = 0;
   return param_1;
}
/* RendererDummy::MeshStorage::_multimesh_instance_get_color(RID, int) const */undefined1[16];RendererDummy::MeshStorage::_multimesh_instance_get_color(void) {
   return ZEXT816(0x3f80000000000000) << 0x40;
}
/* RendererDummy::MeshStorage::_multimesh_instance_get_custom_data(RID, int) const */undefined1[16];RendererDummy::MeshStorage::_multimesh_instance_get_custom_data(void) {
   return ZEXT816(0x3f80000000000000) << 0x40;
}
/* RendererDummy::MeshStorage::_multimesh_get_command_buffer_rd_rid(RID) const */undefined8 RendererDummy::MeshStorage::_multimesh_get_command_buffer_rd_rid(void) {
   return 0;
}
/* RendererDummy::MeshStorage::_multimesh_get_buffer_rd_rid(RID) const */undefined8 RendererDummy::MeshStorage::_multimesh_get_buffer_rd_rid(void) {
   return 0;
}
/* RendererDummy::MeshStorage::_multimesh_set_visible_instances(RID, int) */void RendererDummy::MeshStorage::_multimesh_set_visible_instances(void) {
   return;
}
/* RendererDummy::MeshStorage::_multimesh_get_visible_instances(RID) const */undefined8 RendererDummy::MeshStorage::_multimesh_get_visible_instances(void) {
   return 0;
}
/* RendererDummy::MeshStorage::_multimesh_get_interpolator(RID) const */undefined8 RendererDummy::MeshStorage::_multimesh_get_interpolator(void) {
   return 0;
}
/* RendererDummy::MeshStorage::skeleton_allocate() */undefined8 RendererDummy::MeshStorage::skeleton_allocate(void) {
   return 0;
}
/* RendererDummy::MeshStorage::skeleton_initialize(RID) */void RendererDummy::MeshStorage::skeleton_initialize(void) {
   return;
}
/* RendererDummy::MeshStorage::skeleton_free(RID) */void RendererDummy::MeshStorage::skeleton_free(void) {
   return;
}
/* RendererDummy::MeshStorage::skeleton_allocate_data(RID, int, bool) */void RendererDummy::MeshStorage::skeleton_allocate_data(void) {
   return;
}
/* RendererDummy::MeshStorage::skeleton_set_base_transform_2d(RID, Transform2D const&) */void RendererDummy::MeshStorage::skeleton_set_base_transform_2d(void) {
   return;
}
/* RendererDummy::MeshStorage::skeleton_get_bone_count(RID) const */undefined8 RendererDummy::MeshStorage::skeleton_get_bone_count(void) {
   return 0;
}
/* RendererDummy::MeshStorage::skeleton_bone_set_transform(RID, int, Transform3D const&) */void RendererDummy::MeshStorage::skeleton_bone_set_transform(void) {
   return;
}
/* RendererDummy::MeshStorage::skeleton_bone_get_transform(RID, int) const */undefined1(*)[16];RendererDummy::MeshStorage::skeleton_bone_get_transform(undefined1 (*param_1)[16]) {
   uint uVar1;
   uVar1 = _LC1;
   *(undefined4*)param_1[2] = 0x3f800000;
   *(undefined8*)( param_1[2] + 4 ) = 0;
   *(undefined4*)( param_1[2] + 0xc ) = 0;
   *param_1 = ZEXT416(uVar1);
   param_1[1] = ZEXT416(uVar1);
   return param_1;
}
/* RendererDummy::MeshStorage::skeleton_bone_set_transform_2d(RID, int, Transform2D const&) */void RendererDummy::MeshStorage::skeleton_bone_set_transform_2d(void) {
   return;
}
/* RendererDummy::MeshStorage::skeleton_bone_get_transform_2d(RID, int) const */undefined8 *RendererDummy::MeshStorage::skeleton_bone_get_transform_2d(undefined8 *param_1) {
   *param_1 = 0x3f800000;
   param_1[1] = 0x3f80000000000000;
   param_1[2] = 0;
   return param_1;
}
/* RendererDummy::MeshStorage::skeleton_update_dependency(RID, DependencyTracker*) */void RendererDummy::MeshStorage::skeleton_update_dependency(void) {
   return;
}
/* RendererDummy::MeshStorage::mesh_get_surface_count(RID) const */undefined4 RendererDummy::MeshStorage::mesh_get_surface_count(MeshStorage *this, ulong param_2) {
   int iVar1;
   undefined4 uVar2;
   long lVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 100 ) )) {
      lVar3 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x60 ) ) * 0x60 + *(long*)( *(long*)( this + 0x50 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x60 ) ) * 8 );
      iVar1 = *(int*)( lVar3 + 0x58 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar3 = *(long*)( lVar3 + 8 );
         if (lVar3 == 0) {
            uVar2 = 0;
         }
 else {
            uVar2 = *(undefined4*)( lVar3 + -8 );
         }

         return uVar2;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("mesh_get_surface_count", "servers/rendering/dummy/storage/mesh_storage.h", 0x79, "Parameter \"m\" is null.", 0, 0);
   return 0;
}
/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<float>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<RenderingServer::SurfaceData>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<RenderingServer::SurfaceData>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererDummy::MeshStorage::_multimesh_set_buffer(RID, Vector<float> const&) [clone .cold] */void RendererDummy::MeshStorage::_multimesh_set_buffer(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Removing unreachable block (ram,0x00102020) *//* WARNING: Removing unreachable block (ram,0x00102150) *//* WARNING: Removing unreachable block (ram,0x001022c9) *//* WARNING: Removing unreachable block (ram,0x0010215c) *//* WARNING: Removing unreachable block (ram,0x00102166) *//* WARNING: Removing unreachable block (ram,0x001022ab) *//* WARNING: Removing unreachable block (ram,0x00102172) *//* WARNING: Removing unreachable block (ram,0x0010217c) *//* WARNING: Removing unreachable block (ram,0x0010228d) *//* WARNING: Removing unreachable block (ram,0x00102188) *//* WARNING: Removing unreachable block (ram,0x00102192) *//* WARNING: Removing unreachable block (ram,0x0010226f) *//* WARNING: Removing unreachable block (ram,0x0010219e) *//* WARNING: Removing unreachable block (ram,0x001021a8) *//* WARNING: Removing unreachable block (ram,0x00102251) *//* WARNING: Removing unreachable block (ram,0x001021b4) *//* WARNING: Removing unreachable block (ram,0x001021be) *//* WARNING: Removing unreachable block (ram,0x00102233) *//* WARNING: Removing unreachable block (ram,0x001021c6) *//* WARNING: Removing unreachable block (ram,0x001021d0) *//* WARNING: Removing unreachable block (ram,0x00102218) *//* WARNING: Removing unreachable block (ram,0x001021d8) *//* WARNING: Removing unreachable block (ram,0x001021ee) *//* WARNING: Removing unreachable block (ram,0x001021fa) *//* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
    */String *vformat<unsigned_int,char_const*>(String *param_1, uint param_2, char *param_3) {
   Variant *pVVar1;
   Variant *pVVar2;
   char *in_RCX;
   undefined4 in_register_00000034;
   int iVar3;
   long in_FS_OFFSET;
   Array local_d8[8];
   undefined8 local_d0[9];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_88, (uint)param_3);
   Variant::Variant(local_70, in_RCX);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, (bool*)CONCAT44(in_register_00000034, param_2));
   *(undefined8*)param_1 = local_d0[0];
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* RID_Alloc<RendererDummy::MeshStorage::DummyMultiMesh, false>::~RID_Alloc() */void RID_Alloc<RendererDummy::MeshStorage::DummyMultiMesh,false>::~RID_Alloc(RID_Alloc<RendererDummy::MeshStorage::DummyMultiMesh,false> *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   char *pcVar4;
   ulong uVar5;
   ulong uVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   uVar2 = *(uint*)( this + 0x20 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_00104d40;
   if (uVar2 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      LAB_00102472:if ((uint)uVar5 < (uint)uVar8) goto LAB_001024b3;
      lVar7 = 0;
      while (true) {
         Memory::free_static((void*)puVar9[lVar7], false);
         lVar3 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar3 ), false);
         if (( uint )(uVar5 / uVar8) <= (uint)lVar7) break;
         puVar9 = *(undefined8**)( this + 8 );
      }
;
   }
 else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar2);
      print_error((String*)&local_48);
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

      lVar7 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar6 = 0;
         do {
            lVar7 = puVar9[uVar6 / uVar8] + ( uVar6 % uVar8 ) * 0x18;
            if (( -1 < *(int*)( lVar7 + 0x10 ) ) && ( *(long*)( lVar7 + 8 ) != 0 )) {
               LOCK();
               plVar1 = (long*)( *(long*)( lVar7 + 8 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( lVar7 + 8 );
                  *(undefined8*)( lVar7 + 8 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

               uVar8 = ( ulong ) * (uint*)( this + 0x18 );
               puVar9 = *(undefined8**)( this + 8 );
            }

            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar6 = uVar6 + 1;
         }
 while ( uVar6 < uVar5 );
         goto LAB_00102472;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_001024b3;
      Memory::free_static((void*)*puVar9, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar9 = *(undefined8**)( this + 8 );
   LAB_001024b3:if (puVar9 == (undefined8*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      Memory::free_static(puVar9, false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<RendererDummy::MeshStorage::DummyMultiMesh, false>::~RID_Alloc() */void RID_Alloc<RendererDummy::MeshStorage::DummyMultiMesh,false>::~RID_Alloc(RID_Alloc<RendererDummy::MeshStorage::DummyMultiMesh,false> *this) {
   ~RID_Alloc(this)
   ;;
   operator_delete(this, 0x58);
   return;
}
/* RID_Alloc<RendererDummy::DummyMesh, false>::allocate_rid() */ulong RID_Alloc<RendererDummy::DummyMesh,false>::allocate_rid(RID_Alloc<RendererDummy::DummyMesh,false> *this) {
   void *pvVar1;
   code *pcVar2;
   uint uVar3;
   long lVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   uint uVar9;
   uint uVar10;
   undefined4 *puVar11;
   long lVar12;
   ulong uVar13;
   uVar3 = *(uint*)( this + 0x20 );
   if (uVar3 == *(uint*)( this + 0x1c )) {
      if (uVar3 == 0) {
         lVar12 = 0;
         uVar13 = 8;
      }
 else {
         uVar13 = ( ulong )((int)( (ulong)uVar3 / ( ulong ) * (uint*)( this + 0x18 ) ) + 1) << 3;
         lVar12 = ( (ulong)uVar3 / ( ulong ) * (uint*)( this + 0x18 ) ) * 8;
      }

      lVar4 = Memory::realloc_static(*(void**)( this + 8 ), uVar13, false);
      *(long*)( this + 8 ) = lVar4;
      uVar5 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0x60, false);
      pvVar1 = *(void**)( this + 0x10 );
      *(undefined8*)( lVar4 + lVar12 ) = uVar5;
      lVar6 = Memory::realloc_static(pvVar1, uVar13, false);
      *(long*)( this + 0x10 ) = lVar6;
      uVar5 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 2, false);
      uVar8 = *(uint*)( this + 0x18 );
      lVar4 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar6 + lVar12 ) = uVar5;
      if (uVar8 != 0) {
         lVar6 = *(long*)( lVar4 + lVar12 );
         lVar7 = 0;
         puVar11 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + lVar12 ) + 0x58 );
         do {
            *puVar11 = 0xffffffff;
            puVar11 = puVar11 + 0x18;
            *(int*)( lVar6 + lVar7 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar7;
            uVar8 = *(uint*)( this + 0x18 );
            lVar7 = lVar7 + 1;
         }
 while ( (uint)lVar7 < uVar8 );
      }

      *(uint*)( this + 0x1c ) = *(int*)( this + 0x1c ) + uVar8;
      uVar3 = *(uint*)( this + 0x20 );
   }
 else {
      lVar4 = *(long*)( this + 0x10 );
      uVar8 = *(uint*)( this + 0x18 );
   }

   uVar3 = *(uint*)( *(long*)( lVar4 + ( (ulong)uVar3 / (ulong)uVar8 ) * 8 ) + ( (ulong)uVar3 % (ulong)uVar8 ) * 4 );
   LOCK();
   UNLOCK();
   uVar9 = (int)RID_AllocBase::base_id + 1;
   uVar10 = uVar9 & 0x7fffffff;
   if (uVar10 != 0x7fffffff) {
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      *(uint*)( ( (ulong)uVar3 % (ulong)uVar8 ) * 0x60 + *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar3 / (ulong)uVar8 ) * 8 ) + 0x58 ) = uVar10 | 0x80000000;
      *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
      return CONCAT44(uVar9, uVar3) & 0x7fffffffffffffff;
   }

   RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
   _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* RID_Alloc<RendererDummy::MeshStorage::DummyMultiMesh, false>::allocate_rid() */ulong RID_Alloc<RendererDummy::MeshStorage::DummyMultiMesh,false>::allocate_rid(RID_Alloc<RendererDummy::MeshStorage::DummyMultiMesh,false> *this) {
   void *pvVar1;
   code *pcVar2;
   uint uVar3;
   long lVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   uint uVar9;
   uint uVar10;
   undefined4 *puVar11;
   long lVar12;
   ulong uVar13;
   uVar3 = *(uint*)( this + 0x20 );
   if (uVar3 == *(uint*)( this + 0x1c )) {
      if (uVar3 == 0) {
         lVar12 = 0;
         uVar13 = 8;
      }
 else {
         uVar13 = ( ulong )((int)( (ulong)uVar3 / ( ulong ) * (uint*)( this + 0x18 ) ) + 1) << 3;
         lVar12 = ( (ulong)uVar3 / ( ulong ) * (uint*)( this + 0x18 ) ) * 8;
      }

      lVar4 = Memory::realloc_static(*(void**)( this + 8 ), uVar13, false);
      *(long*)( this + 8 ) = lVar4;
      uVar5 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0x18, false);
      pvVar1 = *(void**)( this + 0x10 );
      *(undefined8*)( lVar4 + lVar12 ) = uVar5;
      lVar6 = Memory::realloc_static(pvVar1, uVar13, false);
      *(long*)( this + 0x10 ) = lVar6;
      uVar5 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 2, false);
      uVar8 = *(uint*)( this + 0x18 );
      lVar4 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar6 + lVar12 ) = uVar5;
      if (uVar8 != 0) {
         lVar6 = *(long*)( lVar4 + lVar12 );
         lVar7 = 0;
         puVar11 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + lVar12 ) + 0x10 );
         do {
            *puVar11 = 0xffffffff;
            puVar11 = puVar11 + 6;
            *(int*)( lVar6 + lVar7 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar7;
            uVar8 = *(uint*)( this + 0x18 );
            lVar7 = lVar7 + 1;
         }
 while ( (uint)lVar7 < uVar8 );
      }

      *(uint*)( this + 0x1c ) = *(int*)( this + 0x1c ) + uVar8;
      uVar3 = *(uint*)( this + 0x20 );
   }
 else {
      lVar4 = *(long*)( this + 0x10 );
      uVar8 = *(uint*)( this + 0x18 );
   }

   uVar3 = *(uint*)( *(long*)( lVar4 + ( (ulong)uVar3 / (ulong)uVar8 ) * 8 ) + ( (ulong)uVar3 % (ulong)uVar8 ) * 4 );
   LOCK();
   UNLOCK();
   uVar9 = (int)RID_AllocBase::base_id + 1;
   uVar10 = uVar9 & 0x7fffffff;
   if (uVar10 != 0x7fffffff) {
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      *(uint*)( *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar3 / (ulong)uVar8 ) * 8 ) + ( (ulong)uVar3 % (ulong)uVar8 ) * 0x18 + 0x10 ) = uVar10 | 0x80000000;
      *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
      return CONCAT44(uVar9, uVar3) & 0x7fffffffffffffff;
   }

   RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
   _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* HashMap<DependencyTracker*, unsigned int, HashMapHasherDefault,
   HashMapComparatorDefault<DependencyTracker*>,
   DefaultTypedAllocator<HashMapElement<DependencyTracker*, unsigned int> >
   >::_resize_and_rehash(unsigned int) */void HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::_resize_and_rehash(HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>> *this, uint param_1) {
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
/* CowData<RenderingServer::SurfaceData::LOD>::_unref() */void CowData<RenderingServer::SurfaceData::LOD>::_unref(CowData<RenderingServer::SurfaceData::LOD> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long lVar6;
   long lVar7;
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
            lVar7 = 0;
            lVar6 = lVar2;
            do {
               if (*(long*)( lVar6 + 0x10 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0x10 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 0x10 );
                     *(undefined8*)( lVar6 + 0x10 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               lVar6 = lVar6 + 0x18;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* RendererDummy::MeshStorage::mesh_get_surface(RID, int) const */undefined8 *RendererDummy::MeshStorage::mesh_get_surface(undefined8 *param_1, long param_2, ulong param_3, int param_4) {
   long *plVar1;
   int iVar2;
   undefined4 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   undefined4 *puVar7;
   long lVar8;
   undefined8 *puVar9;
   long lVar10;
   long in_FS_OFFSET;
   byte bVar11;
   long local_100[2];
   long local_f0[2];
   long local_e0;
   undefined4 local_d8;
   long local_c8;
   undefined4 local_c0;
   undefined8 local_bc;
   undefined8 uStack_b4;
   undefined8 local_ac;
   undefined8 local_98[2];
   undefined8 local_88;
   undefined8 local_80;
   undefined8 uStack_78;
   undefined8 local_70;
   undefined8 uStack_68;
   undefined8 local_60;
   undefined8 uStack_58;
   long local_48;
   undefined8 local_40;
   undefined8 uStack_38;
   undefined8 local_30;
   long local_20;
   bVar11 = 0;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 100 ) )) {
      lVar6 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x60 ) ) * 0x60 + *(long*)( *(long*)( param_2 + 0x50 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x60 ) ) * 8 );
      iVar2 = *(int*)( lVar6 + 0x58 );
      if (iVar2 == (int)( param_3 >> 0x20 )) {
         lVar6 = *(long*)( lVar6 + 8 );
         lVar8 = (long)param_4;
         if (param_4 < 0) {
            if (lVar6 == 0) goto LAB_00103160;
            lVar10 = *(long*)( lVar6 + -8 );
         }
 else if (lVar6 == 0) {
            LAB_00103160:lVar10 = 0;
         }
 else {
            lVar10 = *(long*)( lVar6 + -8 );
            if (lVar8 < lVar10) {
               local_100[0] = 0;
               puVar7 = (undefined4*)( lVar6 + lVar8 * 0xf0 );
               uVar3 = *puVar7;
               uVar4 = *(undefined8*)( puVar7 + 2 );
               if (*(long*)( puVar7 + 6 ) != 0) {
                  CowData<unsigned_char>::_ref((CowData<unsigned_char>*)local_100, (CowData*)( puVar7 + 6 ));
               }

               local_f0[0] = 0;
               if (*(long*)( puVar7 + 10 ) != 0) {
                  CowData<unsigned_char>::_ref((CowData<unsigned_char>*)local_f0, (CowData*)( puVar7 + 10 ));
               }

               local_e0 = 0;
               if (*(long*)( puVar7 + 0xe ) != 0) {
                  CowData<unsigned_char>::_ref((CowData<unsigned_char>*)&local_e0, (CowData*)( puVar7 + 0xe ));
               }

               local_d8 = puVar7[0x10];
               local_c8 = 0;
               if (*(long*)( puVar7 + 0x14 ) != 0) {
                  CowData<unsigned_char>::_ref((CowData<unsigned_char>*)&local_c8, (CowData*)( puVar7 + 0x14 ));
               }

               local_c0 = puVar7[0x16];
               local_bc = *(undefined8*)( puVar7 + 0x17 );
               uStack_b4 = *(undefined8*)( puVar7 + 0x19 );
               local_98[0] = 0;
               local_ac = *(undefined8*)( puVar7 + 0x1b );
               if (*(long*)( puVar7 + 0x20 ) != 0) {
                  CowData<RenderingServer::SurfaceData::LOD>::_ref((CowData<RenderingServer::SurfaceData::LOD>*)local_98, (CowData*)( puVar7 + 0x20 ));
               }

               local_88 = 0;
               if (*(long*)( puVar7 + 0x24 ) != 0) {
                  CowData<AABB>::_ref((CowData<AABB>*)&local_88, (CowData*)( puVar7 + 0x24 ));
               }

               local_80 = *(undefined8*)( puVar7 + 0x26 );
               uStack_78 = *(undefined8*)( puVar7 + 0x28 );
               local_70 = *(undefined8*)( puVar7 + 0x2a );
               uStack_68 = *(undefined8*)( puVar7 + 0x2c );
               local_48 = 0;
               local_60 = *(undefined8*)( puVar7 + 0x2e );
               uStack_58 = *(undefined8*)( puVar7 + 0x30 );
               lVar6 = *(long*)( puVar7 + 0x34 );
               if (*(long*)( puVar7 + 0x34 ) != 0) {
                  CowData<unsigned_char>::_ref((CowData<unsigned_char>*)&local_48, (CowData*)( puVar7 + 0x34 ));
                  lVar6 = local_48;
               }

               uVar5 = local_98[0];
               local_30 = *(undefined8*)( puVar7 + 0x3a );
               local_40 = *(undefined8*)( puVar7 + 0x36 );
               uStack_38 = *(undefined8*)( puVar7 + 0x38 );
               *(undefined4*)param_1 = uVar3;
               param_1[1] = uVar4;
               param_1[3] = local_100[0];
               *(undefined8*)( (long)param_1 + 0x5c ) = local_bc;
               *(undefined8*)( (long)param_1 + 100 ) = uStack_b4;
               param_1[5] = local_f0[0];
               local_100[0] = 0;
               param_1[7] = local_e0;
               local_f0[0] = 0;
               *(undefined4*)( param_1 + 8 ) = local_d8;
               local_e0 = 0;
               param_1[10] = local_c8;
               local_c8 = 0;
               *(undefined4*)( param_1 + 0xb ) = local_c0;
               *(undefined8*)( (long)param_1 + 0x6c ) = local_ac;
               local_98[0] = 0;
               param_1[0x10] = uVar5;
               param_1[0x12] = local_88;
               param_1[0x1a] = lVar6;
               param_1[0x1d] = local_30;
               param_1[0x13] = local_80;
               param_1[0x14] = uStack_78;
               param_1[0x15] = local_70;
               param_1[0x16] = uStack_68;
               param_1[0x17] = local_60;
               param_1[0x18] = uStack_58;
               param_1[0x1b] = local_40;
               param_1[0x1c] = uStack_38;
               CowData<RenderingServer::SurfaceData::LOD>::_unref((CowData<RenderingServer::SurfaceData::LOD>*)local_98);
               if (local_c8 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_c8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_c8 + -0x10 ), false);
                  }

               }

               if (local_e0 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_e0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_e0 + -0x10 ), false);
                  }

               }

               if (local_f0[0] != 0) {
                  LOCK();
                  plVar1 = (long*)( local_f0[0] + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_f0[0] + -0x10 ), false);
                  }

               }

               if (local_100[0] != 0) {
                  LOCK();
                  plVar1 = (long*)( local_100[0] + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_100[0] + -0x10 ), false);
                  }

               }

               goto LAB_00102fc7;
            }

         }

         _err_print_index_error("mesh_get_surface", "servers/rendering/dummy/storage/mesh_storage.h", 0x72, lVar8, lVar10, "p_surface", "m->surfaces.size()", "", false, false);
         puVar9 = param_1;
         for (lVar6 = 0x1e; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
         }

         *(undefined1*)( (long)param_1 + 0xc ) = 8;
         *(undefined4*)param_1 = 5;
         for (int i = 0; i < 3; i++) {
            *(undefined2*)( (long)param_1 + ( 16*i + 154 ) ) = 16256;
         }

         goto LAB_00102fc7;
      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("mesh_get_surface", "servers/rendering/dummy/storage/mesh_storage.h", 0x71, "Parameter \"m\" is null.", 0, 0);
   puVar9 = param_1;
   for (lVar6 = 0x1e; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
   }

   *(undefined4*)param_1 = 5;
   *(undefined1*)( (long)param_1 + 0xc ) = 8;
   for (int i = 0; i < 3; i++) {
      *(undefined2*)( (long)param_1 + ( 16*i + 154 ) ) = 16256;
   }

   LAB_00102fc7:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* CowData<RenderingServer::SurfaceData>::_unref() */void CowData<RenderingServer::SurfaceData>::_unref(CowData<RenderingServer::SurfaceData> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long lVar6;
   long lVar7;
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
            lVar7 = 0;
            lVar6 = lVar2;
            do {
               if (*(long*)( lVar6 + 0xd0 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0xd0 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 0xd0 );
                     *(undefined8*)( lVar6 + 0xd0 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               if (*(long*)( lVar6 + 0x90 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0x90 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 0x90 );
                     *(undefined8*)( lVar6 + 0x90 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               CowData<RenderingServer::SurfaceData::LOD>::_unref((CowData<RenderingServer::SurfaceData::LOD>*)( lVar6 + 0x80 ));
               if (*(long*)( lVar6 + 0x50 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0x50 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 0x50 );
                     *(undefined8*)( lVar6 + 0x50 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               if (*(long*)( lVar6 + 0x38 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0x38 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 0x38 );
                     *(undefined8*)( lVar6 + 0x38 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               if (*(long*)( lVar6 + 0x28 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0x28 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 0x28 );
                     *(undefined8*)( lVar6 + 0x28 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               if (*(long*)( lVar6 + 0x18 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0x18 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 0x18 );
                     *(undefined8*)( lVar6 + 0x18 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               lVar6 = lVar6 + 0xf0;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* RID_Alloc<RendererDummy::DummyMesh, false>::~RID_Alloc() */void RID_Alloc<RendererDummy::DummyMesh,false>::~RID_Alloc(RID_Alloc<RendererDummy::DummyMesh,false> *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   char *pcVar4;
   ulong uVar5;
   long lVar6;
   ulong uVar7;
   undefined8 *puVar8;
   ulong uVar9;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   uVar2 = *(uint*)( this + 0x20 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_00104d20;
   if (uVar2 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar7 = ( ulong ) * (uint*)( this + 0x18 );
      puVar8 = *(undefined8**)( this + 8 );
      LAB_001034ba:if ((uint)uVar5 < (uint)uVar7) goto LAB_001034fb;
      lVar6 = 0;
      while (true) {
         Memory::free_static((void*)puVar8[lVar6], false);
         lVar3 = lVar6 * 8;
         lVar6 = lVar6 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar3 ), false);
         if (( uint )(uVar5 / uVar7) <= (uint)lVar6) break;
         puVar8 = *(undefined8**)( this + 8 );
      }
;
   }
 else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar2);
      print_error((String*)&local_48);
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

      lVar6 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

      uVar7 = ( ulong ) * (uint*)( this + 0x18 );
      puVar8 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar9 = 0;
         do {
            lVar6 = ( uVar9 % uVar7 ) * 0x60 + puVar8[uVar9 / uVar7];
            if (-1 < *(int*)( lVar6 + 0x58 )) {
               Dependency::~Dependency((Dependency*)( lVar6 + 0x28 ));
               if (*(long*)( lVar6 + 0x20 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0x20 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( lVar6 + 0x20 );
                     *(undefined8*)( lVar6 + 0x20 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               CowData<RenderingServer::SurfaceData>::_unref((CowData<RenderingServer::SurfaceData>*)( lVar6 + 8 ));
               uVar7 = ( ulong ) * (uint*)( this + 0x18 );
               puVar8 = *(undefined8**)( this + 8 );
            }

            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar9 = uVar9 + 1;
         }
 while ( uVar9 < uVar5 );
         goto LAB_001034ba;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_001034fb;
      Memory::free_static((void*)*puVar8, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar8 = *(undefined8**)( this + 8 );
   LAB_001034fb:if (puVar8 == (undefined8*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      Memory::free_static(puVar8, false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<RendererDummy::DummyMesh, false>::~RID_Alloc() */void RID_Alloc<RendererDummy::DummyMesh,false>::~RID_Alloc(RID_Alloc<RendererDummy::DummyMesh,false> *this) {
   ~RID_Alloc(this)
   ;;
   operator_delete(this, 0x58);
   return;
}
/* CowData<float>::_realloc(long) */undefined8 CowData<float>::_realloc(CowData<float> *this, long param_1) {
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
/* CowData<RenderingServer::SurfaceData>::_realloc(long) */undefined8 CowData<RenderingServer::SurfaceData>::_realloc(CowData<RenderingServer::SurfaceData> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<RenderingServer::SurfaceData>::resize<false>(long) */undefined8 CowData<RenderingServer::SurfaceData>::resize<false>(CowData<RenderingServer::SurfaceData> *this, long param_1) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   uint uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   undefined8 uVar7;
   undefined8 *puVar8;
   long lVar9;
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
      lVar9 = 0;
      lVar10 = 0;
   }
 else {
      lVar9 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar9) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar10 = lVar9 * 0xf0;
      if (lVar10 != 0) {
         uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
         uVar11 = uVar11 | uVar11 >> 2;
         uVar11 = uVar11 | uVar11 >> 4;
         uVar11 = uVar11 | uVar11 >> 8;
         uVar11 = uVar11 | uVar11 >> 0x10;
         lVar10 = ( uVar11 | uVar11 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0xf0 == 0) {
      LAB_00103b60:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar11 = param_1 * 0xf0 - 1;
   uVar11 = uVar11 >> 1 | uVar11;
   uVar11 = uVar11 | uVar11 >> 2;
   uVar11 = uVar11 | uVar11 >> 4;
   uVar11 = uVar11 | uVar11 >> 8;
   uVar11 = uVar11 | uVar11 >> 0x10;
   uVar11 = uVar11 | uVar11 >> 0x20;
   lVar13 = uVar11 + 1;
   if (lVar13 == 0) goto LAB_00103b60;
   uVar12 = param_1;
   if (param_1 <= lVar9) {
      while (lVar9 = *(long*)this,lVar9 != 0) {
         if (*(ulong*)( lVar9 + -8 ) <= uVar12) {
            if (lVar13 != lVar10) {
               uVar7 = _realloc(this, lVar13);
               if ((int)uVar7 != 0) {
                  return uVar7;
               }

               lVar9 = *(long*)this;
               if (lVar9 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

            }

            *(long*)( lVar9 + -8 ) = param_1;
            return 0;
         }

         lVar9 = lVar9 + uVar12 * 0xf0;
         if (*(long*)( lVar9 + 0xd0 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( lVar9 + 0xd0 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( lVar9 + 0xd0 );
               *(undefined8*)( lVar9 + 0xd0 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (*(long*)( lVar9 + 0x90 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( lVar9 + 0x90 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( lVar9 + 0x90 );
               *(undefined8*)( lVar9 + 0x90 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         CowData<RenderingServer::SurfaceData::LOD>::_unref((CowData<RenderingServer::SurfaceData::LOD>*)( lVar9 + 0x80 ));
         if (*(long*)( lVar9 + 0x50 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( lVar9 + 0x50 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( lVar9 + 0x50 );
               *(undefined8*)( lVar9 + 0x50 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (*(long*)( lVar9 + 0x38 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( lVar9 + 0x38 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( lVar9 + 0x38 );
               *(undefined8*)( lVar9 + 0x38 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (*(long*)( lVar9 + 0x28 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( lVar9 + 0x28 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( lVar9 + 0x28 );
               *(undefined8*)( lVar9 + 0x28 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (*(long*)( lVar9 + 0x18 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( lVar9 + 0x18 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( lVar9 + 0x18 );
               *(undefined8*)( lVar9 + 0x18 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         uVar12 = uVar12 + 1;
      }
;
      goto LAB_00103bb6;
   }

   if (lVar13 == lVar10) {
      LAB_00103acb:puVar8 = *(undefined8**)this;
      if (puVar8 == (undefined8*)0x0) {
         LAB_00103bb6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar9 = puVar8[-1];
      if (param_1 <= lVar9) goto LAB_0010391b;
   }
 else {
      if (lVar9 != 0) {
         uVar7 = _realloc(this, lVar13);
         if ((int)uVar7 != 0) {
            return uVar7;
         }

         goto LAB_00103acb;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar11 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar8 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar8;
      lVar9 = 0;
   }

   uVar4 = _LC1;
   puVar5 = puVar8 + lVar9 * 0x1e;
   do {
      *(undefined4*)puVar5 = 5;
      puVar6 = puVar5 + 0x1e;
      puVar5[1] = 0x800000000;
      puVar5[3] = 0;
      puVar5[5] = 0;
      puVar5[7] = 0;
      *(undefined4*)( puVar5 + 8 ) = 0;
      puVar5[10] = 0;
      *(undefined4*)( puVar5 + 0xb ) = 0;
      *(undefined8*)( (long)puVar5 + 0x5c ) = 0;
      *(undefined4*)( (long)puVar5 + 100 ) = 0;
      puVar5[0xd] = 0;
      *(undefined4*)( puVar5 + 0xe ) = 0;
      puVar5[0x10] = 0;
      puVar5[0x12] = 0;
      *(undefined1(*) [16])( puVar5 + 0x13 ) = ZEXT416(uVar4);
      *(undefined1(*) [16])( puVar5 + 0x15 ) = ZEXT416(uVar4);
      *(uint*)( puVar5 + 0x17 ) = uVar4;
      *(undefined8*)( (long)puVar5 + 0xbc ) = 0;
      *(undefined4*)( (long)puVar5 + 0xc4 ) = 0;
      puVar5[0x1a] = 0;
      *(undefined1(*) [16])( puVar5 + 0x1b ) = (undefined1[16])0x0;
      puVar5[0x1d] = 0;
      puVar5 = puVar6;
   }
 while ( puVar6 != puVar8 + param_1 * 0x1e );
   LAB_0010391b:puVar8[-1] = param_1;
   return 0;
}
/* Vector<RenderingServer::SurfaceData>::remove_at(long) */void Vector<RenderingServer::SurfaceData>::remove_at(Vector<RenderingServer::SurfaceData> *this, long param_1) {
   long *plVar1;
   undefined8 uVar2;
   long lVar3;
   long lVar4;
   CowData<RenderingServer::SurfaceData::LOD> *this_00;
   long lVar5;
   lVar3 = *(long*)( this + 8 );
   if (param_1 < 0) {
      if (lVar3 != 0) {
         lVar3 = *(long*)( lVar3 + -8 );
         goto LAB_00103ef9;
      }

   }
 else if (lVar3 != 0) {
      lVar3 = *(long*)( lVar3 + -8 );
      if (param_1 < lVar3) {
         CowData<RenderingServer::SurfaceData>::_copy_on_write((CowData<RenderingServer::SurfaceData>*)( this + 8 ));
         lVar3 = *(long*)( this + 8 );
         if (lVar3 == 0) {
            lVar5 = -1;
         }
 else {
            lVar5 = *(long*)( lVar3 + -8 ) + -1;
            if (param_1 < lVar5) {
               this_00 = (CowData<RenderingServer::SurfaceData::LOD>*)( lVar3 + 0x80 + param_1 * 0xf0 );
               do {
                  lVar3 = *(long*)( this_00 + 0x88 );
                  *(undefined4*)( this_00 + -0x80 ) = *(undefined4*)( this_00 + 0x70 );
                  *(undefined8*)( this_00 + -0x78 ) = *(undefined8*)( this_00 + 0x78 );
                  lVar4 = *(long*)( this_00 + -0x68 );
                  if (lVar4 != lVar3) {
                     if (lVar4 != 0) {
                        LOCK();
                        plVar1 = (long*)( lVar4 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           lVar3 = *(long*)( this_00 + -0x68 );
                           *(undefined8*)( this_00 + -0x68 ) = 0;
                           Memory::free_static((void*)( lVar3 + -0x10 ), false);
                        }

                        lVar3 = *(long*)( this_00 + 0x88 );
                     }

                     *(long*)( this_00 + -0x68 ) = lVar3;
                     *(undefined8*)( this_00 + 0x88 ) = 0;
                  }

                  lVar3 = *(long*)( this_00 + -0x58 );
                  lVar4 = *(long*)( this_00 + 0x98 );
                  if (lVar3 != lVar4) {
                     if (lVar3 != 0) {
                        LOCK();
                        plVar1 = (long*)( lVar3 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           lVar3 = *(long*)( this_00 + -0x58 );
                           *(undefined8*)( this_00 + -0x58 ) = 0;
                           Memory::free_static((void*)( lVar3 + -0x10 ), false);
                        }

                        lVar4 = *(long*)( this_00 + 0x98 );
                     }

                     *(long*)( this_00 + -0x58 ) = lVar4;
                     *(undefined8*)( this_00 + 0x98 ) = 0;
                  }

                  lVar3 = *(long*)( this_00 + -0x48 );
                  lVar4 = *(long*)( this_00 + 0xa8 );
                  if (lVar3 != lVar4) {
                     if (lVar3 != 0) {
                        LOCK();
                        plVar1 = (long*)( lVar3 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           lVar3 = *(long*)( this_00 + -0x48 );
                           *(undefined8*)( this_00 + -0x48 ) = 0;
                           Memory::free_static((void*)( lVar3 + -0x10 ), false);
                        }

                        lVar4 = *(long*)( this_00 + 0xa8 );
                     }

                     *(long*)( this_00 + -0x48 ) = lVar4;
                     *(undefined8*)( this_00 + 0xa8 ) = 0;
                  }

                  lVar3 = *(long*)( this_00 + 0xc0 );
                  *(undefined4*)( this_00 + -0x40 ) = *(undefined4*)( this_00 + 0xb0 );
                  lVar4 = *(long*)( this_00 + -0x30 );
                  if (lVar4 != lVar3) {
                     if (lVar4 != 0) {
                        LOCK();
                        plVar1 = (long*)( lVar4 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           lVar3 = *(long*)( this_00 + -0x30 );
                           *(undefined8*)( this_00 + -0x30 ) = 0;
                           Memory::free_static((void*)( lVar3 + -0x10 ), false);
                        }

                        lVar3 = *(long*)( this_00 + 0xc0 );
                     }

                     *(long*)( this_00 + -0x30 ) = lVar3;
                     *(undefined8*)( this_00 + 0xc0 ) = 0;
                  }

                  *(undefined4*)( this_00 + -0x28 ) = *(undefined4*)( this_00 + 200 );
                  for (int i = 0; i < 3; i++) {
                     *(undefined8*)( this_00 + ( 8*i + -36 ) ) = *(undefined8*)( this_00 + ( 8*i + 204 ) );
                  }

                  if (*(long*)this_00 != *(long*)( this_00 + 0xf0 )) {
                     CowData<RenderingServer::SurfaceData::LOD>::_unref(this_00);
                     uVar2 = *(undefined8*)( this_00 + 0xf0 );
                     *(undefined8*)( this_00 + 0xf0 ) = 0;
                     *(undefined8*)this_00 = uVar2;
                  }

                  lVar3 = *(long*)( this_00 + 0x10 );
                  lVar4 = *(long*)( this_00 + 0x100 );
                  if (lVar3 != lVar4) {
                     if (lVar3 != 0) {
                        LOCK();
                        plVar1 = (long*)( lVar3 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           lVar3 = *(long*)( this_00 + 0x10 );
                           *(undefined8*)( this_00 + 0x10 ) = 0;
                           Memory::free_static((void*)( lVar3 + -0x10 ), false);
                        }

                        lVar4 = *(long*)( this_00 + 0x100 );
                     }

                     *(long*)( this_00 + 0x10 ) = lVar4;
                     *(undefined8*)( this_00 + 0x100 ) = 0;
                  }

                  lVar3 = *(long*)( this_00 + 0x50 );
                  lVar4 = *(long*)( this_00 + 0x140 );
                  for (int i = 0; i < 6; i++) {
                     *(undefined8*)( this_00 + ( 8*i + 24 ) ) = *(undefined8*)( this_00 + ( 8*i + 264 ) );
                  }

                  if (lVar3 != lVar4) {
                     if (lVar3 != 0) {
                        LOCK();
                        plVar1 = (long*)( lVar3 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           lVar3 = *(long*)( this_00 + 0x50 );
                           *(undefined8*)( this_00 + 0x50 ) = 0;
                           Memory::free_static((void*)( lVar3 + -0x10 ), false);
                        }

                        lVar4 = *(long*)( this_00 + 0x140 );
                     }

                     *(long*)( this_00 + 0x50 ) = lVar4;
                     *(undefined8*)( this_00 + 0x140 ) = 0;
                  }

                  param_1 = param_1 + 1;
                  for (int i = 0; i < 3; i++) {
                     *(undefined8*)( this_00 + ( 8*i + 88 ) ) = *(undefined8*)( this_00 + ( 8*i + 328 ) );
                  }

                  this_00 = this_00 + 0xf0;
               }
 while ( lVar5 != param_1 );
            }

         }

         CowData<RenderingServer::SurfaceData>::resize<false>((CowData<RenderingServer::SurfaceData>*)( this + 8 ), lVar5);
         return;
      }

      goto LAB_00103ef9;
   }

   lVar3 = 0;
   LAB_00103ef9:_err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, param_1, lVar3, "p_index", "size()", "", false, false);
   return;
}
/* RendererDummy::MeshStorage::mesh_add_surface(RID, RenderingServer::SurfaceData const&) */void RendererDummy::MeshStorage::mesh_add_surface(MeshStorage *this, ulong param_2, undefined4 *param_3) {
   CowData<RenderingServer::SurfaceData> *this_00;
   long *plVar1;
   code *pcVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   int iVar5;
   long lVar6;
   undefined4 *puVar7;
   long lVar8;
   undefined8 *puVar9;
   long lVar10;
   long in_FS_OFFSET;
   undefined8 local_128[3];
   long local_110[2];
   long local_100[2];
   long local_f0[3];
   long local_d8;
   undefined8 local_cc;
   undefined8 uStack_c4;
   undefined8 local_bc;
   undefined8 local_a8[2];
   undefined8 local_98;
   undefined1 local_90[16];
   undefined1 local_80[16];
   undefined4 local_70;
   undefined4 uStack_6c;
   undefined4 uStack_68;
   undefined4 uStack_64;
   undefined8 local_58;
   undefined1 local_50[16];
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 100 ) )) {
      lVar8 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x60 ) ) * 0x60 + *(long*)( *(long*)( this + 0x50 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x60 ) ) * 8 );
      if (*(int*)( lVar8 + 0x58 ) == (int)( param_2 >> 0x20 )) {
         local_a8[0] = 0;
         puVar9 = local_128;
         for (lVar6 = 0xf; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
         }

         local_90 = ZEXT416(_LC1);
         local_128[0]._0_4_ = 5;
         local_128[1] = 0x800000000;
         local_98 = 0;
         local_70 = 0x3f800000;
         uStack_6c = 0;
         uStack_68 = 0;
         uStack_64 = 0;
         local_58 = 0;
         local_40 = 0;
         local_50 = (undefined1[16])0x0;
         if (*(long*)( lVar8 + 8 ) == 0) {
            lVar6 = 1;
         }
 else {
            lVar6 = *(long*)( *(long*)( lVar8 + 8 ) + -8 ) + 1;
         }

         this_00 = (CowData<RenderingServer::SurfaceData>*)( lVar8 + 8 );
         local_80 = local_90;
         iVar5 = CowData<RenderingServer::SurfaceData>::resize<false>(this_00, lVar6);
         if (iVar5 == 0) {
            if (*(long*)( lVar8 + 8 ) == 0) {
               lVar10 = -1;
               lVar6 = 0;
            }
 else {
               lVar6 = *(long*)( *(long*)( lVar8 + 8 ) + -8 );
               lVar10 = lVar6 + -1;
               if (-1 < lVar10) {
                  CowData<RenderingServer::SurfaceData>::_copy_on_write(this_00);
                  puVar7 = (undefined4*)( lVar10 * 0xf0 + *(long*)( lVar8 + 8 ) );
                  *puVar7 = 5;
                  *(undefined8*)( puVar7 + 2 ) = 0x800000000;
                  if (*(long*)( puVar7 + 6 ) != 0) {
                     CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( puVar7 + 6 ), (CowData*)local_110);
                  }

                  if (*(long*)( puVar7 + 10 ) != 0) {
                     CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( puVar7 + 10 ), (CowData*)local_100);
                  }

                  if (*(long*)( puVar7 + 0xe ) != 0) {
                     CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( puVar7 + 0xe ), (CowData*)local_f0);
                  }

                  puVar7[0x10] = 0;
                  if (*(long*)( puVar7 + 0x14 ) != 0) {
                     CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( puVar7 + 0x14 ), (CowData*)&local_d8);
                  }

                  puVar7[0x16] = 0;
                  *(undefined8*)( puVar7 + 0x1b ) = local_bc;
                  *(undefined8*)( puVar7 + 0x17 ) = local_cc;
                  *(undefined8*)( puVar7 + 0x19 ) = uStack_c4;
                  if (*(long*)( puVar7 + 0x20 ) != 0) {
                     CowData<RenderingServer::SurfaceData::LOD>::_ref((CowData<RenderingServer::SurfaceData::LOD>*)( puVar7 + 0x20 ), (CowData*)local_a8);
                  }

                  if (*(long*)( puVar7 + 0x24 ) != 0) {
                     CowData<AABB>::_ref((CowData<AABB>*)( puVar7 + 0x24 ), (CowData*)&local_98);
                  }

                  *(undefined8*)( puVar7 + 0x26 ) = local_90._0_8_;
                  *(undefined8*)( puVar7 + 0x28 ) = local_90._8_8_;
                  *(undefined8*)( puVar7 + 0x2a ) = local_80._0_8_;
                  *(undefined8*)( puVar7 + 0x2c ) = local_80._8_8_;
                  *(ulong*)( puVar7 + 0x2e ) = CONCAT44(uStack_6c, local_70);
                  *(ulong*)( puVar7 + 0x30 ) = CONCAT44(uStack_64, uStack_68);
                  if (*(long*)( puVar7 + 0x34 ) != 0) {
                     CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( puVar7 + 0x34 ), (CowData*)&local_58);
                  }

                  *(undefined8*)( puVar7 + 0x3a ) = local_40;
                  *(undefined8*)( puVar7 + 0x36 ) = local_50._0_8_;
                  *(undefined8*)( puVar7 + 0x38 ) = local_50._8_8_;
                  goto LAB_00104288;
               }

            }

            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar10, lVar6, "p_index", "size()", "", false, false);
         }
 else {
            _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
         }

         LAB_00104288:CowData<RenderingServer::SurfaceData::LOD>::_unref((CowData<RenderingServer::SurfaceData::LOD>*)local_a8);
         if (local_d8 != 0) {
            LOCK();
            plVar1 = (long*)( local_d8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_d8 + -0x10 ), false);
            }

         }

         if (local_f0[0] != 0) {
            LOCK();
            plVar1 = (long*)( local_f0[0] + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_f0[0] + -0x10 ), false);
            }

         }

         if (local_100[0] != 0) {
            LOCK();
            plVar1 = (long*)( local_100[0] + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_100[0] + -0x10 ), false);
            }

         }

         if (local_110[0] != 0) {
            LOCK();
            plVar1 = (long*)( local_110[0] + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_110[0] + -0x10 ), false);
            }

         }

         if (*(long*)( lVar8 + 8 ) == 0) {
            lVar6 = 0;
            lVar10 = -1;
            LAB_001045b2:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar10, lVar6, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar6 = *(long*)( *(long*)( lVar8 + 8 ) + -8 );
         lVar10 = lVar6 + -1;
         if (lVar10 < 0) goto LAB_001045b2;
         CowData<RenderingServer::SurfaceData>::_copy_on_write(this_00);
         puVar7 = (undefined4*)( lVar10 * 0xf0 + *(long*)( lVar8 + 8 ) );
         *(undefined8*)( puVar7 + 2 ) = *(undefined8*)( param_3 + 2 );
         *puVar7 = *param_3;
         if (*(long*)( puVar7 + 6 ) != *(long*)( param_3 + 6 )) {
            CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( puVar7 + 6 ), (CowData*)( param_3 + 6 ));
         }

         if (*(long*)( puVar7 + 10 ) != *(long*)( param_3 + 10 )) {
            CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( puVar7 + 10 ), (CowData*)( param_3 + 10 ));
         }

         puVar7[0x10] = param_3[0x10];
         if (*(long*)( puVar7 + 0x14 ) != *(long*)( param_3 + 0x14 )) {
            CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( puVar7 + 0x14 ), (CowData*)( param_3 + 0x14 ));
         }

         uVar3 = *(undefined8*)( param_3 + 0x17 );
         uVar4 = *(undefined8*)( param_3 + 0x19 );
         puVar7[0x16] = param_3[0x16];
         *(undefined8*)( puVar7 + 0x17 ) = uVar3;
         *(undefined8*)( puVar7 + 0x19 ) = uVar4;
         *(undefined8*)( puVar7 + 0x1b ) = *(undefined8*)( param_3 + 0x1b );
         if (*(long*)( puVar7 + 0xe ) != *(long*)( param_3 + 0xe )) {
            CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( puVar7 + 0xe ), (CowData*)( param_3 + 0xe ));
         }

         if (*(long*)( puVar7 + 0x20 ) != *(long*)( param_3 + 0x20 )) {
            CowData<RenderingServer::SurfaceData::LOD>::_ref((CowData<RenderingServer::SurfaceData::LOD>*)( puVar7 + 0x20 ), (CowData*)( param_3 + 0x20 ));
         }

         if (*(long*)( puVar7 + 0x24 ) != *(long*)( param_3 + 0x24 )) {
            CowData<AABB>::_ref((CowData<AABB>*)( puVar7 + 0x24 ), (CowData*)( param_3 + 0x24 ));
         }

         uVar3 = *(undefined8*)( param_3 + 0x28 );
         lVar6 = *(long*)( param_3 + 0x34 );
         *(undefined8*)( puVar7 + 0x26 ) = *(undefined8*)( param_3 + 0x26 );
         *(undefined8*)( puVar7 + 0x28 ) = uVar3;
         uVar3 = *(undefined8*)( param_3 + 0x2c );
         *(undefined8*)( puVar7 + 0x2a ) = *(undefined8*)( param_3 + 0x2a );
         *(undefined8*)( puVar7 + 0x2c ) = uVar3;
         uVar3 = *(undefined8*)( param_3 + 0x30 );
         *(undefined8*)( puVar7 + 0x2e ) = *(undefined8*)( param_3 + 0x2e );
         *(undefined8*)( puVar7 + 0x30 ) = uVar3;
         if (*(long*)( puVar7 + 0x34 ) != lVar6) {
            CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( puVar7 + 0x34 ), (CowData*)( param_3 + 0x34 ));
         }

         uVar3 = *(undefined8*)( param_3 + 0x36 );
         uVar4 = *(undefined8*)( param_3 + 0x38 );
         *(undefined8*)( puVar7 + 0x3a ) = *(undefined8*)( param_3 + 0x3a );
         *(undefined8*)( puVar7 + 0x36 ) = uVar3;
         *(undefined8*)( puVar7 + 0x38 ) = uVar4;
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Dependency::changed_notify(lVar8 + 0x28, 2);
            return;
         }

         goto LAB_00104696;
      }

      if (*(int*)( lVar8 + 0x58 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("mesh_add_surface", "servers/rendering/dummy/storage/mesh_storage.h", 0x4e, "Parameter \"m\" is null.", 0, 0);
      return;
   }

   LAB_00104696:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<DependencyTracker*, unsigned int, HashMapHasherDefault,
   HashMapComparatorDefault<DependencyTracker*>,
   DefaultTypedAllocator<HashMapElement<DependencyTracker*, unsigned int> >
   >::insert(DependencyTracker* const&, unsigned int const&, bool) */void HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::insert(DependencyTracker **param_1, uint *param_2, bool param_3) {
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
   DependencyTracker *pDVar22;
   uint uVar23;
   ulong uVar24;
   DependencyTracker *pDVar25;
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
   uint uVar33;
   ulong uVar34;
   uint uVar35;
   long lVar36;
   DependencyTracker *pDVar37;
   plVar28 = (long*)CONCAT71(in_register_00000011, param_3);
   __s_00 = *(void**)( param_2 + 2 );
   uVar2 = *(uint*)( hash_table_size_primes + (ulong)param_2[10] * 4 );
   if (__s_00 == (void*)0x0) {
      uVar34 = (ulong)uVar2;
      uVar24 = uVar34 * 4;
      uVar31 = uVar34 * 8;
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
 while ( uVar34 != uVar24 );
            goto LAB_001047a6;
         }

         memset(__s, 0, uVar24);
         memset(__s_00, 0, uVar31);
         uVar32 = param_2[0xb];
         lVar36 = *plVar28;
         goto LAB_001047b1;
      }

      uVar32 = param_2[0xb];
      lVar36 = *plVar28;
      if (__s_00 != (void*)0x0) goto LAB_001047b1;
   }
 else {
      LAB_001047a6:uVar32 = param_2[0xb];
      lVar36 = *plVar28;
      LAB_001047b1:if (uVar32 != 0) {
         uVar34 = CONCAT44(0, *(uint*)( hash_table_size_primes + (ulong)param_2[10] * 4 ));
         lVar4 = *(long*)( hash_table_size_primes_inv + (ulong)param_2[10] * 8 );
         uVar24 = lVar36 * 0x3ffff - 1;
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
         auVar14._0_8_ = uVar34;
         lVar29 = SUB168(auVar6 * auVar14, 8);
         uVar23 = *(uint*)( *(long*)( param_2 + 4 ) + lVar29 * 4 );
         uVar33 = SUB164(auVar6 * auVar14, 8);
         if (uVar23 != 0) {
            uVar35 = 0;
            do {
               if (( (uint)uVar31 == uVar23 ) && ( *(long*)( *(long*)( (long)__s_00 + lVar29 * 8 ) + 0x10 ) == lVar36 )) {
                  pDVar25 = *(DependencyTracker**)( (long)__s_00 + (ulong)uVar33 * 8 );
                  *(undefined4*)( pDVar25 + 0x18 ) = *in_RCX;
                  goto LAB_00104a78;
               }

               uVar35 = uVar35 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(uVar33 + 1) * lVar4;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar34;
               lVar29 = SUB168(auVar7 * auVar15, 8);
               uVar23 = *(uint*)( *(long*)( param_2 + 4 ) + lVar29 * 4 );
               uVar33 = SUB164(auVar7 * auVar15, 8);
            }
 while ( ( uVar23 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar23 * lVar4,auVar16._8_8_ = 0,auVar16._0_8_ = uVar34,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + (ulong)param_2[10] * 4 ) + uVar33 ) - SUB164(auVar8 * auVar16, 8)) * lVar4,auVar17._8_8_ = 0,auVar17._0_8_ = uVar34,uVar35 <= SUB164(auVar9 * auVar17, 8) );
         }

      }

   }

   if ((float)uVar2 * __LC63 < (float)( uVar32 + 1 )) {
      if (param_2[10] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         pDVar25 = (DependencyTracker*)0x0;
         goto LAB_00104a78;
      }

      _resize_and_rehash((HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>*)param_2, param_2[10] + 1);
   }

   lVar36 = *plVar28;
   uVar3 = *in_RCX;
   pDVar25 = (DependencyTracker*)operator_new(0x20, "");
   *(long*)( pDVar25 + 0x10 ) = lVar36;
   *(undefined4*)( pDVar25 + 0x18 ) = uVar3;
   *(undefined1(*) [16])pDVar25 = (undefined1[16])0x0;
   puVar5 = *(undefined8**)( param_2 + 8 );
   if (puVar5 == (undefined8*)0x0) {
      *(DependencyTracker**)( param_2 + 6 ) = pDVar25;
      *(DependencyTracker**)( param_2 + 8 ) = pDVar25;
   }
 else if (in_R8B == '\0') {
      *puVar5 = pDVar25;
      *(undefined8**)( pDVar25 + 8 ) = puVar5;
      *(DependencyTracker**)( param_2 + 8 ) = pDVar25;
   }
 else {
      lVar36 = *(long*)( param_2 + 6 );
      *(DependencyTracker**)( lVar36 + 8 ) = pDVar25;
      *(long*)pDVar25 = lVar36;
      *(DependencyTracker**)( param_2 + 6 ) = pDVar25;
   }

   lVar36 = *(long*)( param_2 + 4 );
   uVar24 = *plVar28 * 0x3ffff - 1;
   uVar24 = ( uVar24 ^ uVar24 >> 0x1f ) * 0x15;
   uVar24 = ( uVar24 ^ uVar24 >> 0xb ) * 0x41;
   uVar24 = uVar24 >> 0x16 ^ uVar24;
   uVar31 = uVar24 & 0xffffffff;
   if ((int)uVar24 == 0) {
      uVar31 = 1;
   }

   uVar33 = 0;
   lVar4 = *(long*)( hash_table_size_primes_inv + (ulong)param_2[10] * 8 );
   uVar23 = (uint)uVar31;
   uVar2 = *(uint*)( hash_table_size_primes + (ulong)param_2[10] * 4 );
   uVar24 = CONCAT44(0, uVar2);
   auVar10._8_8_ = 0;
   auVar10._0_8_ = uVar31 * lVar4;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = uVar24;
   lVar30 = SUB168(auVar10 * auVar18, 8);
   lVar29 = *(long*)( param_2 + 2 );
   puVar1 = (uint*)( lVar36 + lVar30 * 4 );
   iVar27 = SUB164(auVar10 * auVar18, 8);
   uVar32 = *puVar1;
   pDVar22 = pDVar25;
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
      pDVar37 = pDVar22;
      if (uVar23 < uVar33) {
         *puVar1 = (uint)uVar31;
         uVar31 = (ulong)uVar32;
         puVar5 = (undefined8*)( lVar29 + lVar30 * 8 );
         pDVar37 = (DependencyTracker*)*puVar5;
         *puVar5 = pDVar22;
         uVar33 = uVar23;
      }

      uVar23 = (uint)uVar31;
      uVar33 = uVar33 + 1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = ( ulong )(iVar27 + 1) * lVar4;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar24;
      lVar30 = SUB168(auVar13 * auVar21, 8);
      puVar1 = (uint*)( lVar36 + lVar30 * 4 );
      iVar27 = SUB164(auVar13 * auVar21, 8);
      pDVar22 = pDVar37;
      uVar32 = *puVar1;
   }
;
   *(DependencyTracker**)( lVar29 + lVar30 * 8 ) = pDVar22;
   *puVar1 = uVar23;
   param_2[0xb] = param_2[0xb] + 1;
   LAB_00104a78:*param_1 = pDVar25;
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<RendererDummy::DummyMesh, false>::~RID_Alloc() */void RID_Alloc<RendererDummy::DummyMesh,false>::~RID_Alloc(RID_Alloc<RendererDummy::DummyMesh,false> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<RendererDummy::MeshStorage::DummyMultiMesh, false>::~RID_Alloc() */void RID_Alloc<RendererDummy::MeshStorage::DummyMultiMesh,false>::~RID_Alloc(RID_Alloc<RendererDummy::MeshStorage::DummyMultiMesh,false> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

