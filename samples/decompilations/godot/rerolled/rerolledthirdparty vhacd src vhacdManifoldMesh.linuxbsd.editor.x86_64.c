/* VHACD::TMMesh::~TMMesh() */void VHACD::TMMesh::~TMMesh(TMMesh *this) {
   void *pvVar1;
   long lVar2;
   long lVar3;
   *(undefined***)this = &PTR__TMMesh_00100ff0;
   while (true) {
      while (true) {
         if (*(ulong*)( this + 0x30 ) < 2) break;
         pvVar1 = *(void**)( this + 0x28 );
         lVar3 = *(long*)( (long)pvVar1 + 0x40 );
         lVar2 = *(long*)( (long)pvVar1 + 0x48 );
         operator_delete(pvVar1, 0x50);
         *(long*)( this + 0x30 ) = *(long*)( this + 0x30 ) + -1;
         *(long*)( this + 0x28 ) = lVar3;
         *(long*)( lVar3 + 0x48 ) = lVar2;
         *(long*)( lVar2 + 0x40 ) = lVar3;
      }
;
      if (*(ulong*)( this + 0x30 ) != 1) break;
      lVar3 = 1;
      if (*(void**)( this + 0x28 ) != (void*)0x0) {
         operator_delete(*(void**)( this + 0x28 ), 0x50);
         lVar3 = *(long*)( this + 0x30 );
      }

      *(undefined8*)( this + 0x28 ) = 0;
      *(long*)( this + 0x30 ) = lVar3 + -1;
   }
;
   while (true) {
      while (true) {
         if (*(ulong*)( this + 0x20 ) < 2) break;
         pvVar1 = *(void**)( this + 0x18 );
         lVar3 = *(long*)( (long)pvVar1 + 0x30 );
         lVar2 = *(long*)( (long)pvVar1 + 0x38 );
         operator_delete(pvVar1, 0x40);
         *(long*)( this + 0x20 ) = *(long*)( this + 0x20 ) + -1;
         *(long*)( this + 0x18 ) = lVar3;
         *(long*)( lVar3 + 0x38 ) = lVar2;
         *(long*)( lVar2 + 0x30 ) = lVar3;
      }
;
      if (*(ulong*)( this + 0x20 ) != 1) break;
      lVar3 = 1;
      if (*(void**)( this + 0x18 ) != (void*)0x0) {
         operator_delete(*(void**)( this + 0x18 ), 0x40);
         lVar3 = *(long*)( this + 0x20 );
      }

      *(undefined8*)( this + 0x18 ) = 0;
      *(long*)( this + 0x20 ) = lVar3 + -1;
   }
;
   while (true) {
      while (true) {
         if (*(ulong*)( this + 0x10 ) < 2) break;
         pvVar1 = *(void**)( this + 8 );
         lVar3 = *(long*)( (long)pvVar1 + 0x38 );
         lVar2 = *(long*)( (long)pvVar1 + 0x40 );
         operator_delete(pvVar1, 0x48);
         *(long*)( this + 0x10 ) = *(long*)( this + 0x10 ) + -1;
         *(long*)( this + 8 ) = lVar3;
         *(long*)( lVar3 + 0x40 ) = lVar2;
         *(long*)( lVar2 + 0x38 ) = lVar3;
      }
;
      if (*(ulong*)( this + 0x10 ) != 1) break;
      lVar3 = 1;
      if (*(void**)( this + 8 ) != (void*)0x0) {
         operator_delete(*(void**)( this + 8 ), 0x48);
         lVar3 = *(long*)( this + 0x10 );
      }

      *(undefined8*)( this + 8 ) = 0;
      *(long*)( this + 0x10 ) = lVar3 + -1;
   }
;
   return;
}
/* VHACD::TMMesh::~TMMesh() */void VHACD::TMMesh::~TMMesh(TMMesh *this) {
   ~TMMesh(this)
   ;;
   operator_delete(this, 0x38);
   return;
}
/* VHACD::TMMVertex::TMMVertex() */void VHACD::TMMVertex::TMMVertex(TMMVertex *this) {
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined2*)( this + 0x30 ) = 0;
   return;
}
/* VHACD::TMMVertex::Initialize() */void VHACD::TMMVertex::Initialize(TMMVertex *this) {
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined2*)( this + 0x30 ) = 0;
   return;
}
/* VHACD::TMMVertex::~TMMVertex() */void VHACD::TMMVertex::~TMMVertex(TMMVertex *this) {
   return;
}
/* VHACD::TMMEdge::TMMEdge() */void VHACD::TMMEdge::TMMEdge(TMMEdge *this) {
   *(undefined8*)this = 0;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
   return;
}
/* VHACD::TMMEdge::Initialize() */void VHACD::TMMEdge::Initialize(TMMEdge *this) {
   *(undefined8*)this = 0;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
   return;
}
/* VHACD::TMMEdge::~TMMEdge() */void VHACD::TMMEdge::~TMMEdge(TMMEdge *this) {
   return;
}
/* VHACD::TMMTriangle::Initialize() */void VHACD::TMMTriangle::Initialize(TMMTriangle *this) {
   *(undefined8*)this = 0;
   this[0x38] = (TMMTriangle)0x0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
   return;
}
/* VHACD::TMMTriangle::TMMTriangle() */void VHACD::TMMTriangle::TMMTriangle(TMMTriangle *this) {
   *(undefined8*)this = 0;
   this[0x38] = (TMMTriangle)0x0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
   return;
}
/* VHACD::TMMTriangle::~TMMTriangle() */void VHACD::TMMTriangle::~TMMTriangle(TMMTriangle *this) {
   return;
}
/* VHACD::TMMesh::TMMesh() */void VHACD::TMMesh::TMMesh(TMMesh *this) {
   *(undefined8*)( this + 8 ) = 0;
   *(undefined***)this = &PTR__TMMesh_00100ff0;
   for (int i = 0; i < 5; i++) {
      *(undefined8*)( this + ( 8*i + 16 ) ) = 0;
   }

   return;
}
/* VHACD::TMMesh::GetIFS(VHACD::Vec3<double>*, VHACD::Vec3<int>*) */void VHACD::TMMesh::GetIFS(TMMesh *this, Vec3 *param_1, Vec3 *param_2) {
   long *plVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
   long lVar5;
   long lVar6;
   Vec3 *pVVar7;
   Vec3 *pVVar8;
   lVar5 = *(long*)( this + 0x10 );
   lVar2 = *(long*)( this + 0x30 );
   if (lVar5 != 0) {
      puVar4 = *(undefined8**)( this + 8 );
      lVar6 = 0;
      do {
         uVar3 = puVar4[1];
         *(undefined8*)param_1 = *puVar4;
         *(undefined8*)( param_1 + 8 ) = uVar3;
         *(undefined8*)( param_1 + 0x10 ) = puVar4[2];
         puVar4[4] = lVar6;
         puVar4 = (undefined8*)puVar4[7];
         lVar6 = lVar6 + 1;
         *(undefined8**)( this + 8 ) = puVar4;
         param_1 = param_1 + 0x18;
      }
 while ( lVar5 != lVar6 );
   }

   if (lVar2 != 0) {
      lVar5 = *(long*)( this + 0x28 );
      pVVar7 = param_2;
      do {
         pVVar8 = pVVar7 + 0xc;
         *(int*)pVVar7 = (int)*(undefined8*)( *(long*)( lVar5 + 0x20 ) + 0x20 );
         *(int*)( pVVar7 + 4 ) = (int)*(undefined8*)( *(long*)( lVar5 + 0x28 ) + 0x20 );
         plVar1 = (long*)( lVar5 + 0x30 );
         lVar5 = *(long*)( lVar5 + 0x40 );
         *(int*)( pVVar7 + 8 ) = (int)*(undefined8*)( *plVar1 + 0x20 );
         *(long*)( this + 0x28 ) = lVar5;
         pVVar7 = pVVar8;
      }
 while ( pVVar8 != param_2 + lVar2 * 0xc );
      return;
   }

   return;
}
/* VHACD::TMMesh::Clear() */void VHACD::TMMesh::Clear(TMMesh *this) {
   void *pvVar1;
   long lVar2;
   long lVar3;
   while (true) {
      while (true) {
         if (*(ulong*)( this + 0x10 ) < 2) break;
         pvVar1 = *(void**)( this + 8 );
         lVar3 = *(long*)( (long)pvVar1 + 0x38 );
         lVar2 = *(long*)( (long)pvVar1 + 0x40 );
         operator_delete(pvVar1, 0x48);
         *(long*)( this + 0x10 ) = *(long*)( this + 0x10 ) + -1;
         *(long*)( this + 8 ) = lVar3;
         *(long*)( lVar3 + 0x40 ) = lVar2;
         *(long*)( lVar2 + 0x38 ) = lVar3;
      }
;
      if (*(ulong*)( this + 0x10 ) != 1) break;
      lVar3 = 1;
      if (*(void**)( this + 8 ) != (void*)0x0) {
         operator_delete(*(void**)( this + 8 ), 0x48);
         lVar3 = *(long*)( this + 0x10 );
      }

      *(undefined8*)( this + 8 ) = 0;
      *(long*)( this + 0x10 ) = lVar3 + -1;
   }
;
   while (true) {
      while (true) {
         if (*(ulong*)( this + 0x20 ) < 2) break;
         pvVar1 = *(void**)( this + 0x18 );
         lVar3 = *(long*)( (long)pvVar1 + 0x30 );
         lVar2 = *(long*)( (long)pvVar1 + 0x38 );
         operator_delete(pvVar1, 0x40);
         *(long*)( this + 0x20 ) = *(long*)( this + 0x20 ) + -1;
         *(long*)( this + 0x18 ) = lVar3;
         *(long*)( lVar3 + 0x38 ) = lVar2;
         *(long*)( lVar2 + 0x30 ) = lVar3;
      }
;
      if (*(ulong*)( this + 0x20 ) != 1) break;
      lVar3 = 1;
      if (*(void**)( this + 0x18 ) != (void*)0x0) {
         operator_delete(*(void**)( this + 0x18 ), 0x40);
         lVar3 = *(long*)( this + 0x20 );
      }

      *(undefined8*)( this + 0x18 ) = 0;
      *(long*)( this + 0x20 ) = lVar3 + -1;
   }
;
   while (true) {
      while (true) {
         if (*(ulong*)( this + 0x30 ) < 2) break;
         pvVar1 = *(void**)( this + 0x28 );
         lVar3 = *(long*)( (long)pvVar1 + 0x40 );
         lVar2 = *(long*)( (long)pvVar1 + 0x48 );
         operator_delete(pvVar1, 0x50);
         *(long*)( this + 0x30 ) = *(long*)( this + 0x30 ) + -1;
         *(long*)( this + 0x28 ) = lVar3;
         *(long*)( lVar3 + 0x48 ) = lVar2;
         *(long*)( lVar2 + 0x40 ) = lVar3;
      }
;
      if (*(ulong*)( this + 0x30 ) != 1) break;
      lVar3 = 1;
      if (*(void**)( this + 0x28 ) != (void*)0x0) {
         operator_delete(*(void**)( this + 0x28 ), 0x50);
         lVar3 = *(long*)( this + 0x30 );
      }

      *(undefined8*)( this + 0x28 ) = 0;
      *(long*)( this + 0x30 ) = lVar3 + -1;
   }
;
   return;
}
/* VHACD::TMMesh::Copy(VHACD::TMMesh&) */void VHACD::TMMesh::Copy(TMMesh *this, TMMesh *param_1) {
   undefined8 uVar1;
   undefined2 uVar2;
   undefined4 uVar3;
   ulong uVar4;
   ulong uVar5;
   undefined8 uVar6;
   long lVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   ulong uVar13;
   undefined8 *puVar14;
   long *plVar15;
   void *pvVar16;
   long *plVar17;
   long *plVar18;
   long *plVar19;
   ulong *puVar20;
   ulong uVar21;
   long lVar22;
   undefined8 *puVar23;
   Clear(this);
   uVar21 = *(ulong*)( param_1 + 0x10 );
   uVar4 = *(ulong*)( param_1 + 0x20 );
   uVar5 = *(ulong*)( param_1 + 0x30 );
   if (uVar21 != 0) {
      lVar22 = *(long*)( param_1 + 8 );
      uVar13 = 0;
      do {
         *(ulong*)( lVar22 + 0x20 ) = uVar13;
         lVar22 = *(long*)( lVar22 + 0x38 );
         uVar13 = uVar13 + 1;
         *(long*)( param_1 + 8 ) = lVar22;
      }
 while ( uVar21 != uVar13 );
   }

   if (uVar4 != 0) {
      puVar20 = *(ulong**)( param_1 + 0x18 );
      uVar13 = 0;
      do {
         *puVar20 = uVar13;
         puVar20 = (ulong*)puVar20[6];
         uVar13 = uVar13 + 1;
         *(ulong**)( param_1 + 0x18 ) = puVar20;
      }
 while ( uVar4 != uVar13 );
   }

   if (uVar5 != 0) {
      puVar20 = *(ulong**)( param_1 + 0x28 );
      uVar13 = 0;
      do {
         *puVar20 = uVar13;
         puVar20 = (ulong*)puVar20[8];
         uVar13 = uVar13 + 1;
         *(ulong**)( param_1 + 0x28 ) = puVar20;
      }
 while ( uVar5 != uVar13 );
   }

   if (param_1 + 8 != this + 8) {
      uVar13 = *(ulong*)( this + 0x10 );
      while (true) {
         while (1 < uVar13) {
            pvVar16 = *(void**)( this + 8 );
            lVar22 = *(long*)( (long)pvVar16 + 0x40 );
            lVar7 = *(long*)( (long)pvVar16 + 0x38 );
            operator_delete(pvVar16, 0x48);
            *(long*)( this + 8 ) = lVar7;
            uVar13 = *(long*)( this + 0x10 ) - 1;
            *(ulong*)( this + 0x10 ) = uVar13;
            *(long*)( lVar7 + 0x40 ) = lVar22;
            *(long*)( lVar22 + 0x38 ) = lVar7;
         }
;
         if (uVar13 != 1) goto LAB_001005a9;
         if (*(void**)( this + 8 ) == (void*)0x0) break;
         operator_delete(*(void**)( this + 8 ), 0x48);
         *(undefined8*)( this + 8 ) = 0;
         uVar13 = *(long*)( this + 0x10 ) - 1;
         *(ulong*)( this + 0x10 ) = uVar13;
      }
;
      *(undefined8*)( this + 0x10 ) = 0;
      LAB_001005a9:if (*(long*)( param_1 + 0x10 ) != 0) {
         puVar23 = *(undefined8**)( *(long*)( param_1 + 8 ) + 0x38 );
         do {
            if (puVar23 == (undefined8*)0x0) {
               puVar14 = (undefined8*)operator_new(0x48);
               *(undefined4*)( puVar14 + 3 ) = 0;
               puVar14[4] = 0;
               puVar14[5] = 0;
               *(undefined2*)( puVar14 + 6 ) = 0;
            }
 else {
               puVar14 = (undefined8*)operator_new(0x48);
               uVar8 = *puVar23;
               uVar9 = puVar23[1];
               uVar1 = puVar23[2];
               *(undefined4*)( puVar14 + 3 ) = 0;
               uVar3 = *(undefined4*)( puVar23 + 3 );
               puVar14[4] = 0;
               *(undefined4*)( puVar14 + 3 ) = uVar3;
               uVar6 = puVar23[4];
               puVar14[5] = 0;
               puVar14[4] = uVar6;
               uVar6 = puVar23[5];
               *(undefined2*)( puVar14 + 6 ) = 0;
               puVar14[5] = uVar6;
               uVar2 = *(undefined2*)( puVar23 + 6 );
               *puVar14 = uVar8;
               puVar14[1] = uVar9;
               *(undefined2*)( puVar14 + 6 ) = uVar2;
               puVar14[2] = uVar1;
            }

            *(undefined8**)( this + 8 ) = puVar14;
            puVar14[7] = puVar14;
            puVar14[8] = puVar14;
            while (true) {
               lVar22 = *(long*)( this + 0x10 );
               *(long*)( this + 0x10 ) = lVar22 + 1;
               if (puVar23 == *(undefined8**)( param_1 + 8 )) goto LAB_00100710;
               puVar23 = (undefined8*)puVar23[7];
               if (lVar22 + 1 == 0) break;
               lVar22 = *(long*)( this + 8 );
               lVar7 = *(long*)( lVar22 + 0x38 );
               if (puVar23 == (undefined8*)0x0) {
                  puVar14 = (undefined8*)operator_new(0x48);
                  *(undefined2*)( puVar14 + 6 ) = 0;
                  *(undefined4*)( puVar14 + 3 ) = 0;
                  puVar14[4] = 0;
                  puVar14[5] = 0;
               }
 else {
                  puVar14 = (undefined8*)operator_new(0x48);
                  uVar8 = *puVar23;
                  uVar9 = puVar23[1];
                  uVar1 = puVar23[2];
                  *(undefined4*)( puVar14 + 3 ) = 0;
                  uVar3 = *(undefined4*)( puVar23 + 3 );
                  puVar14[4] = 0;
                  *(undefined4*)( puVar14 + 3 ) = uVar3;
                  uVar6 = puVar23[4];
                  puVar14[5] = 0;
                  puVar14[4] = uVar6;
                  uVar6 = puVar23[5];
                  *(undefined2*)( puVar14 + 6 ) = 0;
                  puVar14[5] = uVar6;
                  uVar2 = *(undefined2*)( puVar23 + 6 );
                  *puVar14 = uVar8;
                  puVar14[1] = uVar9;
                  *(undefined2*)( puVar14 + 6 ) = uVar2;
                  puVar14[2] = uVar1;
               }

               *(undefined8**)( this + 8 ) = puVar14;
               puVar14[7] = lVar7;
               *(long*)( *(long*)( this + 8 ) + 0x40 ) = lVar22;
               uVar1 = *(undefined8*)( this + 8 );
               *(undefined8*)( lVar22 + 0x38 ) = uVar1;
               *(undefined8*)( lVar7 + 0x40 ) = uVar1;
            }
;
         }
 while ( true );
      }

   }

   LAB_00100710:if (param_1 + 0x18 != this + 0x18) {
      uVar13 = *(ulong*)( this + 0x20 );
      while (true) {
         while (1 < uVar13) {
            pvVar16 = *(void**)( this + 0x18 );
            lVar22 = *(long*)( (long)pvVar16 + 0x38 );
            lVar7 = *(long*)( (long)pvVar16 + 0x30 );
            operator_delete(pvVar16, 0x40);
            *(long*)( this + 0x18 ) = lVar7;
            uVar13 = *(long*)( this + 0x20 ) - 1;
            *(ulong*)( this + 0x20 ) = uVar13;
            *(long*)( lVar7 + 0x38 ) = lVar22;
            *(long*)( lVar22 + 0x30 ) = lVar7;
         }
;
         if (uVar13 != 1) goto LAB_00100735;
         if (*(void**)( this + 0x18 ) == (void*)0x0) break;
         operator_delete(*(void**)( this + 0x18 ), 0x40);
         *(undefined8*)( this + 0x18 ) = 0;
         uVar13 = *(long*)( this + 0x20 ) - 1;
         *(ulong*)( this + 0x20 ) = uVar13;
      }
;
      *(undefined8*)( this + 0x20 ) = 0;
      LAB_00100735:if (*(long*)( param_1 + 0x20 ) != 0) {
         puVar23 = *(undefined8**)( *(long*)( param_1 + 0x18 ) + 0x30 );
         do {
            if (puVar23 == (undefined8*)0x0) {
               puVar14 = (undefined8*)operator_new(0x40);
               *puVar14 = 0;
               puVar14[5] = 0;
               *(undefined1(*) [16])( puVar14 + 1 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( puVar14 + 3 ) = (undefined1[16])0x0;
            }
 else {
               puVar14 = (undefined8*)operator_new(0x40);
               uVar1 = puVar23[1];
               uVar6 = puVar23[2];
               uVar8 = puVar23[3];
               uVar9 = puVar23[4];
               uVar10 = puVar23[5];
               *puVar14 = *puVar23;
               puVar14[1] = uVar1;
               puVar14[2] = uVar6;
               puVar14[3] = uVar8;
               puVar14[4] = uVar9;
               puVar14[5] = uVar10;
            }

            *(undefined8**)( this + 0x18 ) = puVar14;
            puVar14[6] = puVar14;
            puVar14[7] = puVar14;
            while (true) {
               lVar22 = *(long*)( this + 0x20 );
               *(long*)( this + 0x20 ) = lVar22 + 1;
               if (puVar23 == *(undefined8**)( param_1 + 0x18 )) goto LAB_00100820;
               puVar23 = (undefined8*)puVar23[6];
               if (lVar22 + 1 == 0) break;
               lVar22 = *(long*)( this + 0x18 );
               lVar7 = *(long*)( lVar22 + 0x30 );
               if (puVar23 == (undefined8*)0x0) {
                  puVar14 = (undefined8*)operator_new(0x40);
                  *puVar14 = 0;
                  puVar14[5] = 0;
                  *(undefined1(*) [16])( puVar14 + 1 ) = (undefined1[16])0x0;
                  *(undefined1(*) [16])( puVar14 + 3 ) = (undefined1[16])0x0;
               }
 else {
                  puVar14 = (undefined8*)operator_new(0x40);
                  uVar1 = puVar23[1];
                  uVar6 = puVar23[2];
                  uVar8 = puVar23[3];
                  uVar9 = puVar23[4];
                  uVar10 = puVar23[5];
                  *puVar14 = *puVar23;
                  puVar14[1] = uVar1;
                  puVar14[2] = uVar6;
                  puVar14[3] = uVar8;
                  puVar14[4] = uVar9;
                  puVar14[5] = uVar10;
               }

               *(undefined8**)( this + 0x18 ) = puVar14;
               puVar14[6] = lVar7;
               *(long*)( *(long*)( this + 0x18 ) + 0x38 ) = lVar22;
               uVar1 = *(undefined8*)( this + 0x18 );
               *(undefined8*)( lVar22 + 0x30 ) = uVar1;
               *(undefined8*)( lVar7 + 0x38 ) = uVar1;
            }
;
         }
 while ( true );
      }

   }

   LAB_00100820:if (param_1 + 0x28 != this + 0x28) {
      uVar13 = *(ulong*)( this + 0x30 );
      while (true) {
         while (1 < uVar13) {
            pvVar16 = *(void**)( this + 0x28 );
            lVar22 = *(long*)( (long)pvVar16 + 0x48 );
            lVar7 = *(long*)( (long)pvVar16 + 0x40 );
            operator_delete(pvVar16, 0x50);
            *(long*)( this + 0x28 ) = lVar7;
            uVar13 = *(long*)( this + 0x30 ) - 1;
            *(ulong*)( this + 0x30 ) = uVar13;
            *(long*)( lVar7 + 0x48 ) = lVar22;
            *(long*)( lVar22 + 0x40 ) = lVar7;
         }
;
         if (uVar13 != 1) goto LAB_00100845;
         if (*(void**)( this + 0x28 ) == (void*)0x0) break;
         operator_delete(*(void**)( this + 0x28 ), 0x50);
         *(undefined8*)( this + 0x28 ) = 0;
         uVar13 = *(long*)( this + 0x30 ) - 1;
         *(ulong*)( this + 0x30 ) = uVar13;
      }
;
      *(undefined8*)( this + 0x30 ) = 0;
      LAB_00100845:if (*(long*)( param_1 + 0x30 ) != 0) {
         puVar23 = *(undefined8**)( *(long*)( param_1 + 0x28 ) + 0x40 );
         do {
            if (puVar23 == (undefined8*)0x0) {
               puVar14 = (undefined8*)operator_new(0x50);
               *puVar14 = 0;
               *(undefined1*)( puVar14 + 7 ) = 0;
               *(undefined1(*) [16])( puVar14 + 1 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( puVar14 + 3 ) = (undefined1[16])0x0;
            }
 else {
               puVar14 = (undefined8*)operator_new(0x50);
               *(undefined1(*) [16])( puVar14 + 1 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( puVar14 + 3 ) = (undefined1[16])0x0;
               *puVar14 = 0;
               *(undefined1*)( puVar14 + 7 ) = 0;
               uVar1 = puVar23[1];
               uVar6 = puVar23[2];
               uVar8 = puVar23[3];
               uVar9 = puVar23[4];
               uVar10 = puVar23[5];
               uVar11 = *(undefined8*)( (long)puVar23 + 0x29 );
               uVar12 = *(undefined8*)( (long)puVar23 + 0x31 );
               *puVar14 = *puVar23;
               puVar14[1] = uVar1;
               puVar14[4] = uVar9;
               puVar14[5] = uVar10;
               puVar14[2] = uVar6;
               puVar14[3] = uVar8;
               *(undefined8*)( (long)puVar14 + 0x29 ) = uVar11;
               *(undefined8*)( (long)puVar14 + 0x31 ) = uVar12;
            }

            *(undefined8**)( this + 0x28 ) = puVar14;
            puVar14[8] = puVar14;
            puVar14[9] = puVar14;
            while (true) {
               lVar22 = *(long*)( this + 0x30 );
               *(long*)( this + 0x30 ) = lVar22 + 1;
               if (puVar23 == *(undefined8**)( param_1 + 0x28 )) goto LAB_00100978;
               puVar23 = (undefined8*)puVar23[8];
               if (lVar22 + 1 == 0) break;
               lVar22 = *(long*)( this + 0x28 );
               lVar7 = *(long*)( lVar22 + 0x40 );
               if (puVar23 == (undefined8*)0x0) {
                  puVar14 = (undefined8*)operator_new(0x50);
                  *(undefined1(*) [16])( puVar14 + 1 ) = (undefined1[16])0x0;
                  *(undefined1(*) [16])( puVar14 + 3 ) = (undefined1[16])0x0;
                  *puVar14 = 0;
                  *(undefined1*)( puVar14 + 7 ) = 0;
               }
 else {
                  puVar14 = (undefined8*)operator_new(0x50);
                  *(undefined1(*) [16])( puVar14 + 1 ) = (undefined1[16])0x0;
                  *(undefined1(*) [16])( puVar14 + 3 ) = (undefined1[16])0x0;
                  *puVar14 = 0;
                  *(undefined1*)( puVar14 + 7 ) = 0;
                  uVar1 = puVar23[1];
                  uVar6 = puVar23[2];
                  uVar8 = puVar23[3];
                  uVar9 = puVar23[4];
                  uVar10 = puVar23[5];
                  uVar11 = *(undefined8*)( (long)puVar23 + 0x29 );
                  uVar12 = *(undefined8*)( (long)puVar23 + 0x31 );
                  *puVar14 = *puVar23;
                  puVar14[1] = uVar1;
                  puVar14[4] = uVar9;
                  puVar14[5] = uVar10;
                  puVar14[2] = uVar6;
                  puVar14[3] = uVar8;
                  *(undefined8*)( (long)puVar14 + 0x29 ) = uVar11;
                  *(undefined8*)( (long)puVar14 + 0x31 ) = uVar12;
               }

               *(undefined8**)( this + 0x28 ) = puVar14;
               puVar14[8] = lVar7;
               *(long*)( *(long*)( this + 0x28 ) + 0x48 ) = lVar22;
               uVar1 = *(undefined8*)( this + 0x28 );
               *(undefined8*)( lVar22 + 0x40 ) = uVar1;
               *(undefined8*)( lVar7 + 0x48 ) = uVar1;
            }
;
         }
 while ( true );
      }

   }

   LAB_00100978:uVar13 = 0xffffffffffffffff;
   if (uVar21 < 0x1000000000000000) {
      uVar13 = uVar21 * 8;
   }

   plVar15 = (long*)operator_new__(uVar13);
   uVar13 = uVar4 * 8;
   if (0xfffffffffffffff < uVar4) {
      uVar13 = 0xffffffffffffffff;
   }

   pvVar16 = operator_new__(uVar13);
   uVar13 = uVar5 * 8;
   if (0xfffffffffffffff < uVar5) {
      uVar13 = 0xffffffffffffffff;
   }

   plVar17 = (long*)operator_new__(uVar13);
   if (uVar21 != 0) {
      lVar22 = *(long*)( this + 8 );
      lVar7 = *(long*)( this + 0x10 );
      plVar18 = plVar15;
      do {
         *plVar18 = lVar22;
         if (lVar7 != 0) goto LAB_00100b3b;
         plVar18 = plVar18 + 1;
      }
 while ( plVar15 + uVar21 != plVar18 );
      goto LAB_00100a18;
   }

   if (uVar4 != 0) goto LAB_00100a21;
   if (uVar5 == 0) goto LAB_00100be5;
   LAB_00100a4d:lVar22 = *(long*)( this + 0x28 );
   lVar7 = *(long*)( this + 0x30 );
   uVar13 = 0;
   do {
      plVar17[uVar13] = lVar22;
      if (lVar7 != 0) goto LAB_00100b7d;
      uVar13 = uVar13 + 1;
   }
 while ( uVar13 < uVar5 );
   joined_r0x00100b91:if (uVar21 == 0) {
      if (uVar4 != 0) {
         LAB_00100aaa:uVar21 = 0;
         do {
            lVar22 = *(long*)( (long)pvVar16 + uVar21 * 8 );
            if (*(long**)( lVar22 + 0x28 ) != (long*)0x0) {
               *(long*)( lVar22 + 0x28 ) = plVar17[**(long**)( lVar22 + 0x28 )];
            }

            if (uVar5 != 0) {
               if (*(long**)( lVar22 + 8 ) != (long*)0x0) {
                  *(long*)( lVar22 + 8 ) = plVar17[**(long**)( lVar22 + 8 )];
               }

               if (*(long**)( lVar22 + 0x10 ) != (long*)0x0) {
                  *(long*)( lVar22 + 0x10 ) = plVar17[**(long**)( lVar22 + 0x10 )];
               }

            }

            if (*(long*)( lVar22 + 0x18 ) != 0) {
               *(long*)( lVar22 + 0x18 ) = plVar15[*(long*)( *(long*)( lVar22 + 0x18 ) + 0x20 )];
            }

            if (*(long*)( lVar22 + 0x20 ) != 0) {
               *(long*)( lVar22 + 0x20 ) = plVar15[*(long*)( *(long*)( lVar22 + 0x20 ) + 0x20 )];
            }

            uVar21 = uVar21 + 1;
         }
 while ( uVar21 < uVar4 );
         goto LAB_00100ba0;
      }

   }
 else {
      LAB_00100a7a:uVar13 = 0;
      do {
         plVar18 = *(long**)( plVar15[uVar13] + 0x28 );
         if (plVar18 != (long*)0x0) {
            *(undefined8*)( plVar15[uVar13] + 0x28 ) = *(undefined8*)( (long)pvVar16 + *plVar18 * 8 );
         }

         uVar13 = uVar13 + 1;
      }
 while ( uVar13 < uVar21 );
      if (uVar4 != 0) goto LAB_00100aaa;
      LAB_00100ba0:if (uVar5 == 0) goto LAB_00100be5;
   }

   plVar18 = plVar17;
   do {
      lVar22 = *plVar18;
      if (uVar4 != 0) {
         plVar19 = (long*)( lVar22 + 8 );
         do {
            if ((long*)*plVar19 != (long*)0x0) {
               *plVar19 = *(long*)( (long)pvVar16 + *(long*)*plVar19 * 8 );
            }

            plVar19 = plVar19 + 1;
         }
 while ( plVar19 != (long*)( lVar22 + 0x20 ) );
      }

      plVar19 = (long*)( lVar22 + 0x20 );
      do {
         if (*plVar19 != 0) {
            *plVar19 = plVar15[*(long*)( *plVar19 + 0x20 )];
         }

         plVar19 = plVar19 + 1;
      }
 while ( plVar19 != (long*)( lVar22 + 0x38 ) );
      plVar18 = plVar18 + 1;
   }
 while ( plVar17 + uVar5 != plVar18 );
   LAB_00100be5:operator_delete__(plVar15);
   operator_delete__(pvVar16);
   operator_delete__(plVar17);
   return;
   LAB_00100b3b:while (true) {
      lVar22 = *(long*)( lVar22 + 0x38 );
      plVar18 = plVar18 + 1;
      *(long*)( this + 8 ) = lVar22;
      if (plVar15 + uVar21 == plVar18) break;
      *plVar18 = lVar22;
   }
;
   LAB_00100a18:if (uVar4 != 0) {
      LAB_00100a21:lVar22 = *(long*)( this + 0x18 );
      lVar7 = *(long*)( this + 0x20 );
      uVar13 = 0;
      do {
         *(long*)( (long)pvVar16 + uVar13 * 8 ) = lVar22;
         if (lVar7 != 0) goto LAB_00100b5c;
         uVar13 = uVar13 + 1;
      }
 while ( uVar13 < uVar4 );
      goto LAB_00100a44;
   }

   if (uVar5 != 0) goto LAB_00100a4d;
   goto LAB_00100a7a;
   LAB_00100b5c:while (true) {
      lVar22 = *(long*)( lVar22 + 0x30 );
      uVar13 = uVar13 + 1;
      *(long*)( this + 0x18 ) = lVar22;
      if (uVar4 <= uVar13) break;
      *(long*)( (long)pvVar16 + uVar13 * 8 ) = lVar22;
   }
;
   LAB_00100a44:if (uVar5 != 0) goto LAB_00100a4d;
   if (uVar21 != 0) goto LAB_00100a7a;
   goto LAB_00100aaa;
   LAB_00100b7d:while (true) {
      lVar22 = *(long*)( lVar22 + 0x40 );
      uVar13 = uVar13 + 1;
      *(long*)( this + 0x28 ) = lVar22;
      if (uVar5 <= uVar13) break;
      plVar17[uVar13] = lVar22;
   }
;
   goto joined_r0x00100b91;
}
/* VHACD::TMMesh::CheckConsistancy() */undefined8 VHACD::TMMesh::CheckConsistancy(TMMesh *this) {
   long lVar1;
   long lVar2;
   long *plVar3;
   long lVar4;
   if (*(long*)( this + 0x20 ) != 0) {
      lVar2 = *(long*)( this + 0x18 );
      lVar4 = 0;
      do {
         if (( *(long*)( lVar2 + 8 ) == 0 ) || ( *(long*)( lVar2 + 0x10 ) == 0 )) {
            return 0;
         }

         lVar2 = *(long*)( lVar2 + 0x30 );
         lVar4 = lVar4 + 1;
         *(long*)( this + 0x18 ) = lVar2;
      }
 while ( *(long*)( this + 0x20 ) != lVar4 );
   }

   if (*(long*)( this + 0x30 ) != 0) {
      lVar2 = *(long*)( this + 0x28 );
      lVar4 = 0;
      do {
         plVar3 = (long*)( lVar2 + 8 );
         do {
            lVar1 = *(long*)( *plVar3 + 0x10 );
            if (lVar2 == *(long*)( *plVar3 + 8 )) {
               if (lVar1 == lVar2) {
                  return 0;
               }

            }
 else if (lVar1 != lVar2) {
               return 0;
            }

            plVar3 = plVar3 + 1;
         }
 while ( plVar3 != (long*)( lVar2 + 0x20 ) );
         lVar2 = *(long*)( lVar2 + 0x40 );
         lVar4 = lVar4 + 1;
         *(long*)( this + 0x28 ) = lVar2;
      }
 while ( lVar4 != *(long*)( this + 0x30 ) );
   }

   return 1;
}

