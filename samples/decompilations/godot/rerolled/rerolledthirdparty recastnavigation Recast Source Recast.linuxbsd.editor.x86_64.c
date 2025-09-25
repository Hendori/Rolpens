/* rcContext::doResetLog() */void rcContext::doResetLog(void) {
   return;
}
/* calcTriNormal(float const*, float const*, float const*, float*) */void calcTriNormal(float *param_1, float *param_2, float *param_3, float *param_4) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   fVar1 = (float)*(undefined8*)( param_1 + 1 );
   fVar4 = (float)*(undefined8*)( param_2 + 1 ) - fVar1;
   fVar2 = (float)( ( ulong ) * (undefined8*)( param_1 + 1 ) >> 0x20 );
   fVar7 = *param_2 - *param_1;
   fVar1 = (float)*(undefined8*)( param_3 + 1 ) - fVar1;
   fVar3 = *param_3 - *param_1;
   fVar5 = fVar4 * ( param_3[2] - param_1[2] ) - fVar1 * ( param_2[2] - param_1[2] );
   fVar6 = ( (float)( ( ulong ) * (undefined8*)( param_2 + 1 ) >> 0x20 ) - fVar2 ) * fVar3 - ( (float)( ( ulong ) * (undefined8*)( param_3 + 1 ) >> 0x20 ) - fVar2 ) * fVar7;
   fVar1 = fVar1 * fVar7 - fVar3 * fVar4;
   fVar2 = _LC0 / SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar1 * fVar1);
   param_4[2] = fVar2 * fVar1;
   *(ulong*)param_4 = CONCAT44(fVar2 * fVar6, fVar2 * fVar5);
   return;
}
/* rcSqrt(float) */float rcSqrt(float param_1) {
   float fVar1;
   if (0.0 <= param_1) {
      return SQRT(param_1);
   }

   fVar1 = sqrtf(param_1);
   return fVar1;
}
/* rcContext::log(rcLogCategory, char const*, ...) */void rcContext::log(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long *param_9, undefined4 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, ...) {
   char in_AL;
   int iVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined4 local_300;
   undefined4 local_2fc;
   undefined1 *local_2f8;
   undefined1 *local_2f0;
   undefined1 local_2e8[511];
   undefined1 local_e9;
   long local_e0;
   undefined1 local_d8[24];
   undefined8 local_c0;
   undefined8 local_b8;
   undefined8 local_b0;
   undefined8 local_a8;
   undefined8 local_98;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_68;
   undefined8 local_58;
   undefined8 local_48;
   undefined8 local_38;
   if (in_AL != '\0') {
      local_a8 = param_1;
      local_98 = param_2;
      local_88 = param_3;
      local_78 = param_4;
      local_68 = param_5;
      local_58 = param_6;
      local_48 = param_7;
      local_38 = param_8;
   }

   local_e0 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c0 = param_12;
   local_b8 = param_13;
   local_b0 = param_14;
   if ((char)param_9[1] != '\0') {
      local_2f8 = &stack0x00000008;
      local_2f0 = local_d8;
      local_300 = 0x18;
      local_2fc = 0x30;
      iVar1 = __vsnprintf_chk(local_2e8, 0x200, 2, 0x200, param_11, &local_300);
      if (iVar1 < 0x200) {
         lVar2 = *param_9;
      }
 else {
         lVar2 = *param_9;
         local_e9 = 0;
         if (*(code**)( lVar2 + 0x18 ) != doLog) {
            ( **(code**)( lVar2 + 0x18 ) )(param_9, 3, "Log message was truncated", 0x19);
            lVar2 = *param_9;
         }

         iVar1 = 0x1ff;
      }

      if (*(code**)( lVar2 + 0x18 ) != doLog) {
         ( **(code**)( lVar2 + 0x18 ) )(param_9, param_10, local_2e8, iVar1);
      }

   }

   if (local_e0 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* rcAllocHeightfield() */void rcAllocHeightfield(void) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)rcAlloc(0x40, 0);
   *(undefined1(*) [16])( puVar1 + 1 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar1 + 3 ) = (undefined1[16])0x0;
   *puVar1 = 0;
   puVar1[7] = 0;
   *(undefined1(*) [16])( puVar1 + 5 ) = (undefined1[16])0x0;
   return;
}
/* rcFreeHeightField(rcHeightfield*) */void rcFreeHeightField(rcHeightfield *param_1) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   if (param_1 == (rcHeightfield*)0x0) {
      return;
   }

   rcFree(*(void**)( param_1 + 0x28 ));
   puVar2 = *(undefined8**)( param_1 + 0x30 );
   while (puVar2 != (undefined8*)0x0) {
      puVar1 = (undefined8*)*puVar2;
      rcFree(puVar2);
      *(undefined8**)( param_1 + 0x30 ) = puVar1;
      puVar2 = puVar1;
   }
;
   rcFree(param_1);
   return;
}
/* rcHeightfield::rcHeightfield() */void rcHeightfield::rcHeightfield(rcHeightfield *this) {
   *(undefined8*)this = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x38 ) = 0;
   *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
   return;
}
/* rcHeightfield::~rcHeightfield() */void rcHeightfield::~rcHeightfield(rcHeightfield *this) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   rcFree(*(void**)( this + 0x28 ));
   puVar2 = *(undefined8**)( this + 0x30 );
   while (puVar2 != (undefined8*)0x0) {
      puVar1 = (undefined8*)*puVar2;
      rcFree(puVar2);
      *(undefined8**)( this + 0x30 ) = puVar1;
      puVar2 = puVar1;
   }
;
   return;
}
/* rcFreeCompactHeightfield(rcCompactHeightfield*) */void rcFreeCompactHeightfield(rcCompactHeightfield *param_1) {
   if (param_1 != (rcCompactHeightfield*)0x0) {
      for (int i = 0; i < 4; i++) {
         rcFree(*(void**)( param_1 + ( 8*i + 64 ) ));
      }

      rcFree(param_1);
      return;
   }

   return;
}
/* rcCompactHeightfield::rcCompactHeightfield() */void rcCompactHeightfield::rcCompactHeightfield(rcCompactHeightfield *this) {
   *(undefined8*)( this + 0x10 ) = 0;
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1c ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2c ) = (undefined1[16])0x0;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined1(*) [16])( this + 0x40 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x50 ) = (undefined1[16])0x0;
   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* rcAllocCompactHeightfield() */void rcAllocCompactHeightfield(void) {
   rcCompactHeightfield *this;
   this(rcCompactHeightfield * rcAlloc(0x60, 0));
   rcCompactHeightfield::rcCompactHeightfield(this);
   return;
}
/* rcCompactHeightfield::~rcCompactHeightfield() */void rcCompactHeightfield::~rcCompactHeightfield(rcCompactHeightfield *this) {
   for (int i = 0; i < 4; i++) {
      rcFree(*(void**)( this + ( 8*i + 64 ) ));
   }

   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* rcAllocHeightfieldLayerSet() */void rcAllocHeightfieldLayerSet(void) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)rcAlloc(0x10, 0);
   *puVar1 = 0;
   *(undefined4*)( puVar1 + 1 ) = 0;
   return;
}
/* rcHeightfieldLayerSet::rcHeightfieldLayerSet() */void rcHeightfieldLayerSet::rcHeightfieldLayerSet(rcHeightfieldLayerSet *this) {
   *(undefined8*)this = 0;
   *(undefined4*)( this + 8 ) = 0;
   return;
}
/* rcHeightfieldLayerSet::~rcHeightfieldLayerSet() */void rcHeightfieldLayerSet::~rcHeightfieldLayerSet(rcHeightfieldLayerSet *this) {
   long lVar1;
   long lVar2;
   if (0 < *(int*)( this + 8 )) {
      lVar2 = 0;
      do {
         lVar1 = lVar2 + 1;
         lVar2 = lVar2 * 0x58;
         for (int i = 0; i < 3; i++) {
            rcFree(*(void**)( *(long*)this + ( 8*i + 64 ) + lVar2 ));
         }

         lVar2 = lVar1;
      }
 while ( (int)lVar1 < *(int*)( this + 8 ) );
   }

   rcFree(*(void**)this);
   return;
}
/* rcFreeHeightfieldLayerSet(rcHeightfieldLayerSet*) */void rcFreeHeightfieldLayerSet(rcHeightfieldLayerSet *param_1) {
   if (param_1 != (rcHeightfieldLayerSet*)0x0) {
      rcHeightfieldLayerSet::~rcHeightfieldLayerSet(param_1);
      rcFree(param_1);
      return;
   }

   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* rcAllocContourSet() */void rcAllocContourSet(void) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)rcAlloc(0x40, 0);
   *puVar1 = 0;
   *(undefined4*)( puVar1 + 1 ) = 0;
   *(undefined8*)( (long)puVar1 + 0x2c ) = 0;
   *(undefined4*)( (long)puVar1 + 0x34 ) = 0;
   *(undefined4*)( puVar1 + 7 ) = 0;
   *(undefined1(*) [16])( (long)puVar1 + 0xc ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( (long)puVar1 + 0x1c ) = (undefined1[16])0x0;
   return;
}
/* rcFreeContourSet(rcContourSet*) */void rcFreeContourSet(rcContourSet *param_1) {
   long lVar1;
   long lVar2;
   if (param_1 != (rcContourSet*)0x0) {
      if (0 < *(int*)( param_1 + 8 )) {
         lVar1 = 0;
         do {
            lVar2 = lVar1 + 1;
            rcFree(*(void**)( *(long*)param_1 + lVar1 * 0x20 ));
            rcFree(*(void**)( *(long*)param_1 + 0x10 + lVar1 * 0x20 ));
            lVar1 = lVar2;
         }
 while ( (int)lVar2 < *(int*)( param_1 + 8 ) );
      }

      rcFree(*(void**)param_1);
      rcFree(param_1);
      return;
   }

   return;
}
/* rcContourSet::rcContourSet() */void rcContourSet::rcContourSet(rcContourSet *this) {
   *(undefined8*)this = 0;
   *(undefined4*)( this + 8 ) = 0;
   *(undefined8*)( this + 0x2c ) = 0;
   *(undefined4*)( this + 0x34 ) = 0;
   *(undefined4*)( this + 0x38 ) = 0;
   *(undefined1(*) [16])( this + 0xc ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1c ) = (undefined1[16])0x0;
   return;
}
/* rcContourSet::~rcContourSet() */void rcContourSet::~rcContourSet(rcContourSet *this) {
   long lVar1;
   long lVar2;
   if (0 < *(int*)( this + 8 )) {
      lVar1 = 0;
      do {
         lVar2 = lVar1 + 1;
         rcFree(*(void**)( *(long*)this + lVar1 * 0x20 ));
         rcFree(*(void**)( *(long*)this + 0x10 + lVar1 * 0x20 ));
         lVar1 = lVar2;
      }
 while ( (int)lVar2 < *(int*)( this + 8 ) );
   }

   rcFree(*(void**)this);
   return;
}
/* rcFreePolyMesh(rcPolyMesh*) */void rcFreePolyMesh(rcPolyMesh *param_1) {
   if (param_1 != (rcPolyMesh*)0x0) {
      rcFree(*(void**)param_1);
      for (int i = 0; i < 4; i++) {
         rcFree(*(void**)( param_1 + ( 8*i + 8 ) ));
      }

      rcFree(param_1);
      return;
   }

   return;
}
/* rcPolyMesh::rcPolyMesh() */void rcPolyMesh::rcPolyMesh(rcPolyMesh *this) {
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x58 ) = 0;
   *(undefined1(*) [16])( this + 0x38 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x48 ) = (undefined1[16])0x0;
   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* rcAllocPolyMesh() */void rcAllocPolyMesh(void) {
   rcPolyMesh *this;
   this(rcPolyMesh * rcAlloc(0x60, 0));
   rcPolyMesh::rcPolyMesh(this);
   return;
}
/* rcPolyMesh::~rcPolyMesh() */void rcPolyMesh::~rcPolyMesh(rcPolyMesh *this) {
   rcFree(*(void**)this);
   for (int i = 0; i < 4; i++) {
      rcFree(*(void**)( this + ( 8*i + 8 ) ));
   }

   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* rcAllocPolyMeshDetail() */void rcAllocPolyMeshDetail(void) {
   undefined1(*pauVar1)[16];
   pauVar1 = (undefined1(*) [16])rcAlloc(0x28, 0);
   *(undefined8*)pauVar1[1] = 0;
   *(undefined8*)( pauVar1[1] + 8 ) = 0;
   *(undefined4*)pauVar1[2] = 0;
   *pauVar1 = (undefined1[16])0x0;
   return;
}
/* rcFreePolyMeshDetail(rcPolyMeshDetail*) */void rcFreePolyMeshDetail(rcPolyMeshDetail *param_1) {
   if (param_1 != (rcPolyMeshDetail*)0x0) {
      rcFree(*(void**)param_1);
      rcFree(*(void**)( param_1 + 8 ));
      rcFree(*(void**)( param_1 + 0x10 ));
      rcFree(param_1);
      return;
   }

   return;
}
/* rcPolyMeshDetail::rcPolyMeshDetail() */void rcPolyMeshDetail::rcPolyMeshDetail(rcPolyMeshDetail *this) {
   *(undefined8*)( this + 0x10 ) = 0;
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined4*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   return;
}
/* rcCalcBounds(float const*, int, float*, float*) */void rcCalcBounds(float *param_1, int param_2, float *param_3, float *param_4) {
   float *pfVar1;
   float *pfVar2;
   float fVar3;
   *param_3 = *param_1;
   param_3[1] = param_1[1];
   param_3[2] = param_1[2];
   *param_4 = *param_1;
   param_4[1] = param_1[1];
   param_4[2] = param_1[2];
   if (1 < param_2) {
      pfVar1 = param_1 + 3;
      do {
         fVar3 = *param_3;
         if (*pfVar1 <= *param_3) {
            fVar3 = *pfVar1;
         }

         pfVar2 = pfVar1 + 3;
         *param_3 = fVar3;
         fVar3 = param_3[1];
         if (pfVar1[1] <= param_3[1]) {
            fVar3 = pfVar1[1];
         }

         param_3[1] = fVar3;
         fVar3 = param_3[2];
         if (pfVar1[2] <= param_3[2]) {
            fVar3 = pfVar1[2];
         }

         param_3[2] = fVar3;
         fVar3 = *param_4;
         if (*param_4 <= *pfVar1) {
            fVar3 = *pfVar1;
         }

         *param_4 = fVar3;
         fVar3 = param_4[1];
         if (param_4[1] <= pfVar1[1]) {
            fVar3 = pfVar1[1];
         }

         param_4[1] = fVar3;
         fVar3 = param_4[2];
         if (param_4[2] <= pfVar1[2]) {
            fVar3 = pfVar1[2];
         }

         param_4[2] = fVar3;
         pfVar1 = pfVar2;
      }
 while ( pfVar2 != param_1 + ( ulong )(param_2 - 2) * 3 + 6 );
   }

   return;
}
/* rcCalcGridSize(float const*, float const*, float, int*, int*) */void rcCalcGridSize(float *param_1, float *param_2, float param_3, int *param_4, int *param_5) {
   float fVar1;
   float fVar2;
   float fVar3;
   fVar3 = _LC4;
   fVar1 = param_2[2];
   fVar2 = param_1[2];
   *param_4 = (int)( ( *param_2 - *param_1 ) / param_3 + _LC4 );
   *param_5 = (int)( ( fVar1 - fVar2 ) / param_3 + fVar3 );
   return;
}
/* rcCreateHeightfield(rcContext*, rcHeightfield&, int, int, float const*, float const*, float,
   float) */bool rcCreateHeightfield(rcContext *param_1, rcHeightfield *param_2, int param_3, int param_4, float *param_5, float *param_6, float param_7, float param_8) {
   float fVar1;
   void *__s;
   fVar1 = *param_5;
   *(int*)( param_2 + 4 ) = param_4;
   *(float*)( param_2 + 8 ) = fVar1;
   fVar1 = param_5[1];
   *(int*)param_2 = param_3;
   *(float*)( param_2 + 0xc ) = fVar1;
   *(float*)( param_2 + 0x10 ) = param_5[2];
   *(float*)( param_2 + 0x14 ) = *param_6;
   *(float*)( param_2 + 0x18 ) = param_6[1];
   fVar1 = param_6[2];
   *(float*)( param_2 + 0x20 ) = param_7;
   *(float*)( param_2 + 0x1c ) = fVar1;
   *(float*)( param_2 + 0x24 ) = param_8;
   __s = (void*)rcAlloc((long)param_3 * (long)param_4 * 8);
   *(void**)( param_2 + 0x28 ) = __s;
   if (__s != (void*)0x0) {
      memset(__s, 0, (long)*(int*)param_2 * (long)*(int*)( param_2 + 4 ) * 8);
   }

   return __s != (void*)0x0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* rcMarkWalkableTriangles(rcContext*, float, float const*, int, int const*, int, unsigned char*) */void rcMarkWalkableTriangles(rcContext *param_1, float param_2, float *param_3, int param_4, int *param_5, int param_6, uchar *param_7) {
   float *pfVar1;
   uchar *puVar2;
   long in_FS_OFFSET;
   float fVar3;
   float local_3c;
   float local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar3 = cosf(( param_2 / __LC5 ) * __LC6);
   if (0 < param_6) {
      pfVar1 = &local_3c;
      puVar2 = param_7 + param_6;
      do {
         calcTriNormal(param_3 + *param_5 * 3, param_3 + param_5[1] * 3, param_3 + param_5[2] * 3, pfVar1);
         if (fVar3 < local_38) {
            *param_7 = '?';
         }

         param_7 = param_7 + 1;
         param_5 = param_5 + 3;
      }
 while ( puVar2 != param_7 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* rcClearUnwalkableTriangles(rcContext*, float, float const*, int, int const*, int, unsigned char*)
    */void rcClearUnwalkableTriangles(rcContext *param_1, float param_2, float *param_3, int param_4, int *param_5, int param_6, uchar *param_7) {
   float *pfVar1;
   uchar *puVar2;
   long in_FS_OFFSET;
   float fVar3;
   float local_3c;
   float local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar3 = cosf(( param_2 / __LC5 ) * __LC6);
   if (0 < param_6) {
      pfVar1 = &local_3c;
      puVar2 = param_7 + param_6;
      do {
         calcTriNormal(param_3 + *param_5 * 3, param_3 + param_5[1] * 3, param_3 + param_5[2] * 3, pfVar1);
         if (local_38 <= fVar3) {
            *param_7 = '\0';
         }

         param_7 = param_7 + 1;
         param_5 = param_5 + 3;
      }
 while ( puVar2 != param_7 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* rcGetHeightFieldSpanCount(rcContext*, rcHeightfield const&) */int rcGetHeightFieldSpanCount(rcContext *param_1, rcHeightfield *param_2) {
   long *plVar1;
   long lVar2;
   long *plVar3;
   int iVar4;
   if (0 < *(int*)param_2 * *(int*)( param_2 + 4 )) {
      plVar3 = *(long**)( param_2 + 0x28 );
      iVar4 = 0;
      plVar1 = plVar3 + *(int*)param_2 * *(int*)( param_2 + 4 );
      do {
         for (lVar2 = *plVar3; lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            iVar4 = ( iVar4 + 1 ) - ( uint )(*(byte*)( lVar2 + 3 ) < 4);
         }

         plVar3 = plVar3 + 1;
      }
 while ( plVar1 != plVar3 );
      return iVar4;
   }

   return 0;
}
/* rcBuildCompactHeightfield(rcContext*, int, int, rcHeightfield const&, rcCompactHeightfield&) */undefined8 rcBuildCompactHeightfield(rcContext *param_1, int param_2, int param_3, rcHeightfield *param_4, rcCompactHeightfield *param_5) {
   long *plVar1;
   float fVar2;
   float fVar3;
   undefined4 uVar4;
   ushort uVar5;
   ushort uVar6;
   int iVar7;
   int iVar8;
   long lVar9;
   undefined1 uVar10;
   uint uVar11;
   uint uVar12;
   uint uVar13;
   uint uVar14;
   int iVar15;
   void *pvVar16;
   int iVar17;
   long *plVar18;
   uint *puVar19;
   ushort *puVar20;
   int iVar21;
   int *piVar22;
   undefined8 uVar23;
   size_t __n;
   size_t __n_00;
   int *piVar24;
   uint uVar25;
   uint uVar26;
   uint uVar27;
   uint uVar28;
   int iVar29;
   long lVar30;
   uint uVar31;
   long lVar32;
   ushort *puVar33;
   int iVar34;
   uint *puVar35;
   ulong uVar36;
   uint uVar37;
   int iVar38;
   int iVar39;
   int local_5c;
   if (( param_1[9] != (rcContext)0x0 ) && ( *(code**)( *(long*)param_1 + 0x28 ) != rcContext::doStartTimer )) {
      ( **(code**)( *(long*)param_1 + 0x28 ) )();
   }

   iVar7 = *(int*)param_4;
   iVar8 = *(int*)( param_4 + 4 );
   uVar23 = *(undefined8*)param_4;
   iVar21 = iVar7 * iVar8;
   if (iVar21 < 1) {
      iVar39 = 0;
   }
 else {
      plVar18 = *(long**)( param_4 + 0x28 );
      iVar39 = 0;
      plVar1 = plVar18 + iVar21;
      do {
         for (lVar32 = *plVar18; lVar32 != 0; lVar32 = *(long*)( lVar32 + 8 )) {
            iVar39 = ( iVar39 + 1 ) - ( uint )(*(byte*)( lVar32 + 3 ) < 4);
         }

         plVar18 = plVar18 + 1;
      }
 while ( plVar1 != plVar18 );
   }

   *(undefined2*)( param_5 + 0x1a ) = 0;
   *(int*)( param_5 + 0x10 ) = param_3;
   *(undefined8*)param_5 = uVar23;
   *(ulong*)( param_5 + 8 ) = CONCAT44(param_2, iVar39);
   __n = (long)iVar7 * (long)iVar8 * 4;
   for (int i = 0; i < 4; i++) {
      *(undefined4*)( param_5 + ( 4*i + 28 ) ) = *(undefined4*)( param_4 + ( 4*i + 8 ) );
   }

   fVar2 = *(float*)( param_4 + 0x18 );
   *(float*)( param_5 + 0x2c ) = fVar2;
   *(undefined4*)( param_5 + 0x30 ) = *(undefined4*)( param_4 + 0x1c );
   fVar3 = *(float*)( param_4 + 0x24 );
   *(float*)( param_5 + 0x2c ) = (float)param_2 * fVar3 + fVar2;
   uVar4 = *(undefined4*)( param_4 + 0x20 );
   *(float*)( param_5 + 0x38 ) = fVar3;
   *(undefined4*)( param_5 + 0x34 ) = uVar4;
   pvVar16 = (void*)rcAlloc(__n);
   *(void**)( param_5 + 0x40 ) = pvVar16;
   if (pvVar16 == (void*)0x0) {
      uVar23 = 0;
      rcContext::log(param_1, 3, "rcBuildCompactHeightfield: Out of memory \'chf.cells\' (%d)", iVar21);
   }
 else {
      __n_00 = (size_t)iVar39;
      memset(pvVar16, 0, __n);
      pvVar16 = (void*)rcAlloc(__n_00 * 8);
      *(void**)( param_5 + 0x48 ) = pvVar16;
      if (pvVar16 == (void*)0x0) {
         uVar23 = 0;
         rcContext::log(param_1, 3, "rcBuildCompactHeightfield: Out of memory \'chf.spans\' (%d)", iVar39);
      }
 else {
         memset(pvVar16, 0, __n_00 * 8);
         pvVar16 = (void*)rcAlloc(__n_00);
         *(void**)( param_5 + 0x58 ) = pvVar16;
         if (pvVar16 == (void*)0x0) {
            uVar23 = 0;
            rcContext::log(param_1, 3, "rcBuildCompactHeightfield: Out of memory \'chf.areas\' (%d)", iVar39);
         }
 else {
            memset(pvVar16, 0, __n_00);
            if (0 < iVar21) {
               lVar32 = 0;
               uVar25 = 0;
               do {
                  puVar19 = *(uint**)( *(long*)( param_4 + 0x28 ) + lVar32 * 2 );
                  if (puVar19 != (uint*)0x0) {
                     puVar35 = (uint*)( *(long*)( param_5 + 0x40 ) + lVar32 );
                     *puVar35 = *puVar35 & 0xff000000 | uVar25 & 0xffffff;
                     *(undefined1*)( (long)puVar35 + 3 ) = 0;
                     do {
                        if (3 < *(byte*)( (long)puVar19 + 3 )) {
                           uVar11 = 0xffff;
                           if (*(ushort**)( puVar19 + 2 ) != (ushort*)0x0) {
                              uVar11 = **(ushort**)( puVar19 + 2 ) & 0x1fff;
                           }

                           iVar39 = uVar11 - ( *puVar19 >> 0xd & 0x1fff );
                           lVar30 = (long)(int)uVar25;
                           if (0xff < iVar39) {
                              iVar39 = 0xff;
                           }

                           puVar20 = (ushort*)( *(long*)( param_5 + 0x48 ) + lVar30 * 8 );
                           *puVar20 = ( ushort )(*puVar19 >> 0xd) & 0x1fff;
                           uVar10 = (char)iVar39;
                           if (iVar39 < 0) {
                              uVar10 = 0;
                           }

                           lVar9 = *(long*)( param_5 + 0x58 );
                           uVar25 = uVar25 + 1;
                           *(undefined1*)( (long)puVar20 + 7 ) = uVar10;
                           *(byte*)( lVar9 + lVar30 ) = *(byte*)( (long)puVar19 + 3 ) >> 2;
                           *(char*)( (long)puVar35 + 3 ) = *(char*)( (long)puVar35 + 3 ) + '\x01';
                        }

                        puVar19 = *(uint**)( puVar19 + 2 );
                     }
 while ( puVar19 != (uint*)0x0 );
                  }

                  lVar32 = lVar32 + 4;
               }
 while ( (long)iVar21 * 4 - lVar32 != 0 );
            }

            if (0 < iVar8) {
               local_5c = 0;
               iVar39 = 0;
               iVar21 = 0;
               do {
                  if (0 < iVar7) {
                     lVar32 = *(long*)( param_5 + 0x40 );
                     puVar19 = (uint*)( lVar32 + (long)iVar39 * 4 );
                     iVar29 = 0;
                     do {
                        uVar11 = *puVar19 & 0xffffff;
                        uVar25 = *(byte*)( (long)puVar19 + 3 ) + uVar11;
                        if (uVar11 < uVar25) {
                           lVar30 = *(long*)( param_5 + 0x48 );
                           puVar20 = (ushort*)( lVar30 + (ulong)uVar11 * 8 );
                           do {
                              iVar17 = 0;
                              piVar24 = &rcGetDirOffsetX(int)::offset;, piVar22 = &rcGetDirOffsetY(int)::offset;
                    uVar26 = *(uint *)(puVar20 + 2) & 0xffffff;
                    do, {
                                       uVar12 = 0x3f << ( (byte)iVar17 & 0x1f );
                                       uVar31 = *piVar24 + iVar29;
                                       uVar27 = uVar26 & ~uVar12;
                                       uVar13 = *piVar22 + iVar21;
                                       uVar26 = uVar27 | uVar12 & 0xffffff;
                                       if (( ( -1 < (int)( uVar31 | uVar13 ) ) && ( (int)uVar31 < iVar7 ) ) && ( (int)uVar13 < iVar8 )) {
                                          puVar35 = (uint*)( lVar32 + (long)(int)( uVar13 * iVar7 + uVar31 ) * 4 );
                                          uVar13 = *puVar35 & 0xffffff;
                                          uVar31 = *(byte*)( (long)puVar35 + 3 ) + uVar13;
                                          if (uVar13 < uVar31) {
                                             uVar5 = *puVar20;
                                             uVar37 = ( uint ) * (byte*)( (long)puVar20 + 7 ) + (uint)uVar5;
                                             puVar33 = (ushort*)( lVar30 + (ulong)uVar13 * 8 );
                                             uVar36 = 0;
                                             do {
                                                uVar6 = *puVar33;
                                                uVar14 = ( uint ) * (byte*)( (long)puVar33 + 7 ) + (uint)uVar6;
                                                if (uVar37 < uVar14) {
                                                   uVar14 = uVar37;
                                                }

                                                uVar28 = (uint)uVar6;
                                                if (uVar6 < uVar5) {
                                                   uVar28 = (uint)uVar5;
                                                }

                                                iVar34 = local_5c;
                                                if (param_2 <= (int)( uVar14 - uVar28 )) {
                                                   iVar38 = (uint)uVar6 - (uint)uVar5;
                                                   iVar15 = -iVar38;
                                                   if (0 < iVar38) {
                                                      iVar15 = iVar38;
                                                   }

                                                   if (iVar15 <= param_3) {
                                                      iVar34 = (int)uVar36;
                                                      if (uVar36 < 0x3f) {
                                                         uVar26 = ( ~uVar12 & ( uVar27 | uVar12 ) | iVar34 << ( (byte)iVar17 & 0x1f ) ) & 0xffffff;
                                                         break;
                                                      }

                                                      if (iVar34 <= local_5c) {
                                                         iVar34 = local_5c;
                                                      }

                                                   }

                                                }

                                                local_5c = iVar34;
                                                uVar36 = uVar36 + 1;
                                                puVar33 = puVar33 + 4;
                                             }
 while ( uVar36 != uVar31 - uVar13 );
                                          }

                                       }

                                       iVar17 = iVar17 + 6;
                                       piVar24 = piVar24 + 1;
                                       piVar22 = piVar22 + 1;
                                    }
, while (iVar17 != 0x18));
                              puVar33 = puVar20 + 4;
                              *(uint*)( puVar20 + 2 ) = *(uint*)( puVar20 + 2 ) & 0xff000000 | uVar26;
                              puVar20 = puVar33;
                           }
 while ( puVar33 != (ushort*)( lVar30 + ( ( ulong )(uVar25 - uVar11) + (ulong)uVar11 ) * 8 ) );
                        }

                        iVar29 = iVar29 + 1;
                        puVar19 = puVar19 + 1;
                     }
 while ( iVar7 != iVar29 );
                  }

                  iVar21 = iVar21 + 1;
                  iVar39 = iVar39 + iVar7;
               }
 while ( iVar8 != iVar21 );
               if (0x3e < local_5c) {
                  rcContext::log(param_1, 3, "rcBuildCompactHeightfield: Heightfield has too many layers %d (max: %d)", local_5c, 0x3e);
               }

            }

            uVar23 = 1;
         }

      }

   }

   if (( param_1[9] != (rcContext)0x0 ) && ( *(code**)( *(long*)param_1 + 0x30 ) != rcContext::doStopTimer )) {
      ( **(code**)( *(long*)param_1 + 0x30 ) )(param_1, 3);
   }

   return uVar23;
}
/* rcContext::~rcContext() */void rcContext::~rcContext(rcContext *this) {
   return;
}
/* rcContext::doLog(rcLogCategory, char const*, int) */void rcContext::doLog(void) {
   return;
}
/* rcContext::doResetTimers() */void rcContext::doResetTimers(void) {
   return;
}
/* rcContext::doStartTimer(rcTimerLabel) */void rcContext::doStartTimer(void) {
   return;
}
/* rcContext::doStopTimer(rcTimerLabel) */void rcContext::doStopTimer(void) {
   return;
}
/* rcContext::doGetAccumulatedTime(rcTimerLabel) const */undefined8 rcContext::doGetAccumulatedTime(void) {
   return 0xffffffff;
}
/* rcContext::~rcContext() */void rcContext::~rcContext(rcContext *this) {
   operator_delete(this, 0x10);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* rcContext::~rcContext() */void rcContext::~rcContext(rcContext *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

