/* JPH::MeshShape::GetMassProperties() const */MeshShape * __thiscall JPH::MeshShape::GetMassProperties(MeshShape *this){
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   for (int i = 0; i < 4; i++) {
      *(undefined1(*) [16])( this + ( 16 * i + 16 ) ) = (undefined1[16])0;
   }

   return this;
}
/* JPH::MeshShapeSettings::sCreateRTTI(JPH::RTTI&) */void JPH::MeshShapeSettings::sCreateRTTI(RTTI *param_1) {
   int iVar1;
   iVar1 = JPH::GetRTTIOfType((ShapeSettings*)0x0);
   JPH::RTTI::AddBaseClass(param_1, iVar1);
   return;
}
/* JPH::MeshShape::CollidePoint(JPH::Vec3, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::CollidePointResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) const */void JPH::MeshShape::CollidePoint(void) {
   JPH::Shape::sCollidePointUsingRayCast();
   return;
}
/* JPH::MeshShape::SaveBinaryState(JPH::StreamOut&) const */void JPH::MeshShape::SaveBinaryState(MeshShape *this, StreamOut *param_1) {
   char cVar1;
   long in_FS_OFFSET;
   undefined4 local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   JPH::Shape::SaveBinaryState((StreamOut*)this);
   local_24 = ( undefined4 ) * (undefined8*)( this + 0x38 );
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_24, 4);
   cVar1 = ( **(code**)( *(long*)param_1 + 0x18 ) )(param_1);
   if (cVar1 == '\0') {
      ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, *(undefined8*)( this + 0x48 ), local_24);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::MeshShape::GetTrianglesStart(JPH::Shape::GetTrianglesContext&, JPH::AABox const&, JPH::Vec3,
   JPH::Quat, JPH::Vec3) const */void JPH::MeshShape::GetTrianglesStart(undefined8 param_1_00, float param_2_00, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, long param_1, undefined4 *param_2, float *param_9) {
   float *pfVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   float fVar5;
   undefined4 uVar6;
   long lVar7;
   long in_FS_OFFSET;
   float fVar8;
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
   float fVar25;
   undefined1 auVar26[16];
   float fVar27;
   float fVar28;
   float fVar29;
   float local_98;
   float fStack_94;
   float local_58[4];
   undefined1 local_48[16];
   undefined1 local_38[16];
   undefined8 local_28;
   undefined8 uStack_20;
   long local_10;
   fVar20 = (float)( (ulong)param_5 >> 0x20 );
   fVar18 = (float)( (ulong)param_4 >> 0x20 );
   fVar15 = (float)param_4;
   fVar14 = (float)( (ulong)param_3 >> 0x20 );
   fVar13 = (float)param_3;
   fVar8 = (float)( (uint)fVar13 ^ __LC1 );
   fVar10 = (float)( (uint)fVar14 ^ _UNK_00112464 );
   fVar11 = (float)( (uint)fVar15 ^ _UNK_00112468 );
   fVar12 = (float)( (uint)fVar18 ^ _UNK_0011246c );
   fVar25 = fVar10 + fVar10;
   fVar16 = fVar8 + fVar8;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar7 = *(long*)( param_1 + 0x48 );
   param_2[0x80] = 0;
   fVar27 = ( fVar11 + fVar11 ) * fVar11;
   uVar6 = *(undefined4*)( lVar7 + 0x18 );
   *(long*)( param_2 + 0x82 ) = param_1;
   fVar5 = _LC2;
   *param_2 = uVar6;
   fVar9 = fVar12 * ( fVar11 + fVar11 );
   fVar28 = fVar11 * fVar25 - fVar16 * fVar12;
   fVar19 = fVar16 * fVar11 + fVar25 * fVar12;
   fVar24 = fVar16 * fVar11 - fVar25 * fVar12;
   fVar11 = fVar11 * fVar25 + fVar16 * fVar12;
   fVar17 = ( fVar5 - fVar8 * fVar16 ) - fVar25 * fVar10;
   fVar29 = fVar10 * fVar16 - fVar9;
   fVar9 = fVar10 * fVar16 + fVar9;
   fVar16 = ( fVar5 - fVar27 ) - fVar8 * fVar16;
   local_98 = (float)param_1_00;
   fVar27 = ( fVar5 - fVar25 * fVar10 ) - fVar27;
   fStack_94 = (float)( (ulong)param_1_00 >> 0x20 );
   fVar8 = ( *param_9 + param_9[4] ) * _LC4;
   fVar10 = ( param_9[1] + param_9[5] ) * _LC4;
   fVar12 = ( param_9[2] + param_9[6] ) * _LC4;
   fVar25 = ( param_9[4] - *param_9 ) * _LC4;
   fVar21 = ( param_9[5] - param_9[1] ) * _LC4;
   fVar22 = ( param_9[6] - param_9[2] ) * _LC4;
   fVar23 = ( param_9[7] - param_9[3] ) * _LC4;
   auVar2._4_4_ = fVar9;
   auVar2._0_4_ = fVar27;
   auVar2._8_4_ = fVar24;
   auVar2._12_4_ = 0;
   *(undefined1(*) [16])( param_2 + 0x84 ) = auVar2;
   param_2[0x94] = fVar25;
   param_2[0x95] = fVar21;
   param_2[0x96] = fVar22;
   param_2[0x97] = fVar23;
   *(undefined8*)( param_2 + 0x98 ) = param_5;
   *(undefined8*)( param_2 + 0x9a ) = param_6;
   *(ulong*)( param_2 + 0x90 ) = CONCAT44(fVar8 * fVar9 + fVar10 * fVar16 + fVar12 * fVar28 + ( 0.0 - ( local_98 * fVar9 + fStack_94 * fVar16 + param_2_00 * fVar28 ) ), fVar8 * fVar27 + fVar10 * fVar29 + fVar12 * fVar19 + ( 0.0 - ( local_98 * fVar27 + fStack_94 * fVar29 + param_2_00 * fVar19 ) ));
   fVar9 = fVar13 + fVar13;
   param_2[0x92] = fVar8 * fVar24 + fVar10 * fVar11 + fVar12 * fVar17 + ( 0.0 - ( local_98 * fVar24 + fStack_94 * fVar11 + param_2_00 * fVar17 ) );
   local_38 = ZEXT416((uint)(float)param_6) << 0x40;
   local_58[0] = (float)param_5;
   for (int i = 0; i < 3; i++) {
      local_58[( i + 1 )] = 0;
   }

   local_28 = __LC5;
   uStack_20 = CONCAT44(_LC2, _UNK_00112478);
   auVar3._4_4_ = fVar28;
   auVar3._0_4_ = fVar19;
   auVar3._8_4_ = fVar17;
   auVar3._12_4_ = 0;
   *(undefined1(*) [16])( param_2 + 0x8c ) = auVar3;
   auVar4._4_4_ = fVar16;
   auVar4._0_4_ = fVar29;
   auVar4._8_4_ = fVar11;
   auVar4._12_4_ = 0;
   *(undefined1(*) [16])( param_2 + 0x88 ) = auVar4;
   local_48 = ZEXT416((uint)fVar20) << 0x20;
   fVar10 = fVar14 + fVar14;
   param_2[0x93] = fVar5;
   fVar11 = fVar15 * ( fVar15 + fVar15 );
   lVar7 = 0;
   fVar8 = fVar18 * ( fVar15 + fVar15 );
   do {
      fVar12 = *(float*)( (long)local_58 + lVar7 );
      fVar16 = *(float*)( (long)local_58 + lVar7 + 4 );
      fVar17 = *(float*)( (long)local_58 + lVar7 + 8 );
      fVar27 = *(float*)( local_48 + lVar7 + -4 );
      pfVar1 = (float*)( (long)param_2 + lVar7 + 0x270 );
      *pfVar1 = fVar27 * local_98 + fVar12 * ( ( fVar5 - fVar14 * fVar10 ) - fVar11 ) + fVar16 * ( fVar14 * fVar9 - fVar8 ) + fVar17 * ( fVar15 * fVar9 + fVar10 * fVar18 );
      pfVar1[1] = fVar27 * fStack_94 + fVar12 * ( fVar14 * fVar9 + fVar8 ) + fVar16 * ( ( fVar5 - fVar11 ) - fVar13 * fVar9 ) + fVar17 * ( fVar15 * fVar10 - fVar9 * fVar18 );
      pfVar1[2] = fVar27 * param_2_00 + fVar12 * ( fVar15 * fVar9 - fVar10 * fVar18 ) + fVar16 * ( fVar9 * fVar18 + fVar15 * fVar10 ) + fVar17 * ( ( fVar5 - fVar13 * fVar9 ) - fVar14 * fVar10 );
      pfVar1[3] = fVar27 * 1.0 + fVar12 * 0.0 + fVar16 * 0.0 + fVar17 * 0.0;
      lVar7 = lVar7 + 0x10;
   }
 while ( lVar7 != 0x40 );
   auVar26._4_4_ = -(uint)(fVar20 < 0.0);
   auVar26._0_4_ = -(uint)((float)param_5 < 0.0);
   auVar26._8_4_ = -(uint)((float)param_6 < 0.0);
   auVar26._12_4_ = -(uint)((float)((ulong)param_6 >> 0x20) < 0.0);
   uVar6 = movmskps(0x40, auVar26);
   *(bool*)( (long)param_2 + 0x2d1 ) = ( POPCOUNT((byte)uVar6 & 7) & 1U ) != 0;
   *(byte*)( (long)param_2 + 0x2d1 ) = *(byte*)( (long)param_2 + 0x2d1 ) & 1;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* _FUN() */void JPH::MeshShape::sRegister()::{lambda()#1}::_FUN(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*Allocate)(0x60);
  *(undefined2 *)(puVar1 + 3) = 0xc03;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR__MeshShape_00112310;
  puVar1[6] = 0;
  *(undefined2 *)(puVar1 + 0xb) = 0;
  *(undefined1 (*) [16])(puVar1 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 7) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 9) = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HashTable<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings const&,
   JPH::Array<JPH::IndexedTriangle, JPH::STLAllocator<JPH::IndexedTriangle> >&)::Edge,
   std::pair<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings const&,
   JPH::Array<JPH::IndexedTriangle, JPH::STLAllocator<JPH::IndexedTriangle> >&)::Edge,
   JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings const&, JPH::Array<JPH::IndexedTriangle,
   JPH::STLAllocator<JPH::IndexedTriangle> >&)::TriangleIndices>,
   JPH::UnorderedMapDetail<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings const&,
   JPH::Array<JPH::IndexedTriangle, JPH::STLAllocator<JPH::IndexedTriangle> >&)::Edge,
   JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings const&, JPH::Array<JPH::IndexedTriangle,
   JPH::STLAllocator<JPH::IndexedTriangle> >&)::TriangleIndices>,
   JPH::Hash<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings const&,
   JPH::Array<JPH::IndexedTriangle, JPH::STLAllocator<JPH::IndexedTriangle> >&)::Edge>,
   std::equal_to<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings const&,
   JPH::Array<JPH::IndexedTriangle, JPH::STLAllocator<JPH::IndexedTriangle> >&)::Edge>
   >::rehash(unsigned int) [clone .constprop.0] */

void JPH::
     HashTable<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,std::pair<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::TriangleIndices>,JPH::UnorderedMapDetail<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::TriangleIndices>,JPH::Hash<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge>,std::equal_to<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge>>
     ::rehash(uint param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  undefined4 in_register_0000003c;
  long *plVar18;
  undefined1 *puVar19;
  long lVar20;
  uint uVar21;
  char cVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  byte *pbVar26;
  undefined1 auVar27 [16];
  
  plVar18 = (long *)CONCAT44(in_register_0000003c,param_1);
  puVar19 = (undefined1 *)plVar18[1];
  uVar13 = (ulong)*(uint *)((long)plVar18 + 0x14);
  if (*(uint *)((long)plVar18 + 0x14) != 0) {
    lVar11 = 0;
    do {
      while( true ) {
        pcVar1 = puVar19 + lVar11;
        if (*pcVar1 != '\0') break;
LAB_001005aa:
        lVar11 = lVar11 + 1;
        if ((uint)uVar13 <= (uint)lVar11) goto LAB_001005d4;
      }
      if (*pcVar1 == '\x7f') {
        *pcVar1 = '\0';
        puVar19 = (undefined1 *)plVar18[1];
        uVar13 = (ulong)*(uint *)((long)plVar18 + 0x14);
        goto LAB_001005aa;
      }
      *pcVar1 = '\x7f';
      uVar13 = (ulong)*(uint *)((long)plVar18 + 0x14);
      lVar11 = lVar11 + 1;
      puVar19 = (undefined1 *)plVar18[1];
    } while ((uint)lVar11 < *(uint *)((long)plVar18 + 0x14));
  }
LAB_001005d4:
  puVar19[uVar13] = *puVar19;
  lVar11 = 1;
  do {
    iVar14 = (int)lVar11;
    puVar19 = (undefined1 *)(plVar18[1] + lVar11);
    lVar11 = lVar11 + 1;
    *(undefined1 *)(plVar18[1] + (ulong)(uint)(iVar14 + *(int *)((long)plVar18 + 0x14))) = *puVar19;
    auVar9 = __LC8;
  } while (lVar11 != 0xf);
  uVar21 = *(uint *)((long)plVar18 + 0x14);
  uVar13 = (ulong)uVar21;
  uVar17 = uVar21 - 1;
  if (uVar21 != 0) {
    lVar20 = 0;
    uVar21 = 0xfffffff1;
    lVar11 = 0;
    do {
      lVar15 = plVar18[1];
      if (*(char *)(lVar15 + lVar11) == '\x7f') {
        pbVar12 = (byte *)(*plVar18 + lVar20);
        pbVar26 = pbVar12 + 8;
        if (pbVar26 <= pbVar12) goto LAB_0010078c;
        do {
          uVar24 = 0xcbf29ce484222325;
          do {
            bVar3 = *pbVar12;
            pbVar12 = pbVar12 + 1;
            uVar24 = (bVar3 ^ uVar24) * 0x100000001b3;
          } while (pbVar12 != pbVar26);
          uVar23 = (uint)uVar24 | 0xffffff80;
          uVar24 = uVar24 >> 7;
          while( true ) {
            uVar25 = (int)uVar13 - 1U & (uint)uVar24;
            auVar27 = *(undefined1 (*) [16])(lVar15 + (ulong)uVar25) & auVar9;
            uVar8 = (ushort)(SUB161(auVar27 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar27[0xf] >> 7) << 0xf;
            uVar10 = uVar25;
            while (uVar8 == 0xffff) {
              uVar10 = uVar10 + 0x10 & uVar17;
              auVar27 = *(undefined1 (*) [16])(lVar15 + (ulong)uVar10) & auVar9;
              uVar8 = (ushort)(SUB161(auVar27 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar27[0xf] >> 7) << 0xf;
            }
            iVar14 = 0;
            for (uVar16 = uVar8 ^ 0xffff; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
              iVar14 = iVar14 + 1;
            }
            uVar10 = iVar14 + uVar10 & uVar17;
            cVar22 = (char)uVar23;
            if (((uVar10 - uVar25 ^ (int)lVar11 - uVar25) & uVar17 & 0xfffffff0) == 0) {
              *(char *)(lVar15 + lVar11) = cVar22;
              *(char *)(plVar18[1] + (ulong)((*(int *)((long)plVar18 + 0x14) - 1U & uVar21) + 0xf))
                   = cVar22;
              uVar13 = (ulong)*(uint *)((long)plVar18 + 0x14);
              goto LAB_00100648;
            }
            uVar13 = (ulong)uVar10;
            cVar4 = *(char *)(lVar15 + uVar13);
            *(char *)(lVar15 + uVar13) = cVar22;
            if (cVar4 == '\0') {
              *(char *)(plVar18[1] +
                       (ulong)((uVar10 - 0xf & *(int *)((long)plVar18 + 0x14) - 1U) + 0xf)) = cVar22
              ;
              *(undefined1 *)(plVar18[1] + lVar11) = 0;
              *(undefined1 *)
               (plVar18[1] + (ulong)((*(int *)((long)plVar18 + 0x14) - 1U & uVar21) + 0xf)) = 0;
              lVar15 = *plVar18;
              uVar6 = ((undefined8 *)(lVar15 + lVar20))[1];
              puVar2 = (undefined8 *)(lVar15 + uVar13 * 0x14);
              *puVar2 = *(undefined8 *)(lVar15 + lVar20);
              puVar2[1] = uVar6;
              *(undefined4 *)(lVar15 + 0x10 + uVar13 * 0x14) =
                   *(undefined4 *)(lVar15 + 0x10 + lVar20);
              uVar13 = (ulong)*(uint *)((long)plVar18 + 0x14);
              goto LAB_00100648;
            }
            *(char *)(plVar18[1] +
                     (ulong)((*(int *)((long)plVar18 + 0x14) - 1U & uVar10 - 0xf) + 0xf)) = cVar22;
            puVar2 = (undefined8 *)(*plVar18 + uVar13 * 0x14);
            pbVar12 = (byte *)(*plVar18 + lVar20);
            uVar6 = *(undefined8 *)pbVar12;
            pbVar26 = pbVar12 + 8;
            uVar7 = puVar2[1];
            *(undefined8 *)pbVar12 = *puVar2;
            *puVar2 = uVar6;
            uVar5 = *(undefined4 *)(pbVar12 + 0x10);
            uVar6 = *(undefined8 *)(pbVar12 + 8);
            *(undefined8 *)(pbVar12 + 8) = uVar7;
            *(undefined4 *)(pbVar12 + 0x10) = *(undefined4 *)(puVar2 + 2);
            puVar2[1] = uVar6;
            uVar13 = (ulong)*(uint *)((long)plVar18 + 0x14);
            *(undefined4 *)(puVar2 + 2) = uVar5;
            lVar15 = plVar18[1];
            if (pbVar12 < pbVar26) break;
LAB_0010078c:
            uVar23 = 0xffffffa5;
            uVar24 = 0xc9084446;
          }
        } while( true );
      }
LAB_00100648:
      lVar11 = lVar11 + 1;
      uVar21 = uVar21 + 1;
      lVar20 = lVar20 + 0x14;
    } while ((uint)lVar11 < (uint)uVar13);
  }
  *(int *)(plVar18 + 3) = (int)(uVar13 * 7 >> 3) - (int)plVar18[2];
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::MeshShapeSettings*)::{lambda()#1}::_FUN(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*Allocate)(0x98);
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  *puVar1 = &PTR_GetRTTI_001122d8;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0x3f7f06a300000008;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 (*) [16])(puVar1 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0xb) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0xe) = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HashTable<JPH::IndexedTriangle, JPH::IndexedTriangle,
   JPH::UnorderedSetDetail<JPH::IndexedTriangle>, JPH::Hash<JPH::IndexedTriangle>,
   std::equal_to<JPH::IndexedTriangle> >::rehash(unsigned int) [clone .isra.0] */

void JPH::
     HashTable<JPH::IndexedTriangle,JPH::IndexedTriangle,JPH::UnorderedSetDetail<JPH::IndexedTriangle>,JPH::Hash<JPH::IndexedTriangle>,std::equal_to<JPH::IndexedTriangle>>
     ::rehash(uint param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  undefined4 uVar4;
  long lVar5;
  ushort uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  uint uVar11;
  long lVar12;
  byte *pbVar13;
  uint uVar14;
  undefined8 *puVar15;
  int iVar16;
  uint uVar17;
  undefined4 in_register_0000003c;
  long *plVar18;
  ulong uVar19;
  undefined1 *puVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  byte bVar25;
  ulong uVar26;
  undefined1 auVar27 [16];
  
  plVar18 = (long *)CONCAT44(in_register_0000003c,param_1);
  puVar20 = (undefined1 *)plVar18[1];
  uVar19 = (ulong)*(uint *)((long)plVar18 + 0x14);
  if (*(uint *)((long)plVar18 + 0x14) != 0) {
    lVar12 = 0;
    do {
      while( true ) {
        pcVar2 = puVar20 + lVar12;
        if (*pcVar2 != '\0') break;
LAB_001008da:
        lVar12 = lVar12 + 1;
        if ((uint)uVar19 <= (uint)lVar12) goto LAB_00100904;
      }
      if (*pcVar2 == '\x7f') {
        *pcVar2 = '\0';
        puVar20 = (undefined1 *)plVar18[1];
        uVar19 = (ulong)*(uint *)((long)plVar18 + 0x14);
        goto LAB_001008da;
      }
      *pcVar2 = '\x7f';
      uVar19 = (ulong)*(uint *)((long)plVar18 + 0x14);
      lVar12 = lVar12 + 1;
      puVar20 = (undefined1 *)plVar18[1];
    } while ((uint)lVar12 < *(uint *)((long)plVar18 + 0x14));
  }
LAB_00100904:
  puVar20[uVar19] = *puVar20;
  lVar12 = 1;
  do {
    iVar16 = (int)lVar12;
    puVar20 = (undefined1 *)(plVar18[1] + lVar12);
    lVar12 = lVar12 + 1;
    *(undefined1 *)(plVar18[1] + (ulong)(uint)(iVar16 + *(int *)((long)plVar18 + 0x14))) = *puVar20;
    auVar10 = __LC8;
  } while (lVar12 != 0xf);
  uVar22 = *(uint *)((long)plVar18 + 0x14);
  uVar19 = (ulong)uVar22;
  uVar17 = uVar22 - 1;
  if (uVar22 != 0) {
    lVar21 = 0;
    uVar22 = 0xfffffff1;
    lVar12 = 0;
    do {
      lVar23 = plVar18[1];
      if (*(char *)(lVar23 + lVar12) == '\x7f') {
        pbVar13 = (byte *)(*plVar18 + lVar21);
        while( true ) {
          pbVar1 = pbVar13 + 0x14;
          uVar26 = 0xcbf29ce484222325;
          do {
            bVar25 = *pbVar13;
            pbVar13 = pbVar13 + 1;
            uVar26 = (bVar25 ^ uVar26) * 0x100000001b3;
          } while (pbVar13 != pbVar1);
          bVar25 = (byte)uVar26 | 0x80;
          uVar24 = (int)uVar19 - 1U & (uint)(uVar26 >> 7);
          auVar27 = *(undefined1 (*) [16])(lVar23 + (ulong)uVar24) & auVar10;
          uVar6 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar27[0xf] >> 7) << 0xf;
          uVar11 = uVar24;
          while (uVar6 == 0xffff) {
            uVar11 = uVar11 + 0x10 & uVar17;
            auVar27 = *(undefined1 (*) [16])(lVar23 + (ulong)uVar11) & auVar10;
            uVar6 = (ushort)(SUB161(auVar27 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar27[0xf] >> 7) << 0xf;
          }
          iVar16 = 0;
          for (uVar14 = uVar6 ^ 0xffff; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
            iVar16 = iVar16 + 1;
          }
          uVar11 = iVar16 + uVar11 & uVar17;
          if (((uVar11 - uVar24 ^ (int)lVar12 - uVar24) & uVar17 & 0xfffffff0) == 0) {
            *(byte *)(lVar23 + lVar12) = bVar25;
            *(byte *)(plVar18[1] + (ulong)((*(int *)((long)plVar18 + 0x14) - 1U & uVar22) + 0xf)) =
                 bVar25;
            uVar19 = (ulong)*(uint *)((long)plVar18 + 0x14);
            goto LAB_00100978;
          }
          pbVar13 = (byte *)(lVar23 + (ulong)uVar11);
          bVar3 = *pbVar13;
          lVar23 = (ulong)uVar11 * 0x14;
          *pbVar13 = bVar25;
          if (bVar3 == 0) break;
          *(byte *)(plVar18[1] + (ulong)((*(int *)((long)plVar18 + 0x14) - 1U & uVar11 - 0xf) + 0xf)
                   ) = bVar25;
          puVar15 = (undefined8 *)(*plVar18 + lVar23);
          pbVar13 = (byte *)(*plVar18 + lVar21);
          uVar7 = puVar15[1];
          uVar4 = *(undefined4 *)(pbVar13 + 0x10);
          uVar8 = *(undefined8 *)pbVar13;
          uVar9 = *(undefined8 *)(pbVar13 + 8);
          *(undefined8 *)pbVar13 = *puVar15;
          *(undefined8 *)(pbVar13 + 8) = uVar7;
          *(undefined4 *)(pbVar13 + 0x10) = *(undefined4 *)(puVar15 + 2);
          *(undefined4 *)(puVar15 + 2) = uVar4;
          lVar23 = plVar18[1];
          *puVar15 = uVar8;
          puVar15[1] = uVar9;
          uVar19 = (ulong)*(uint *)((long)plVar18 + 0x14);
        }
        *(byte *)(plVar18[1] + (ulong)((*(int *)((long)plVar18 + 0x14) - 1U & uVar11 - 0xf) + 0xf))
             = bVar25;
        *(undefined1 *)(plVar18[1] + lVar12) = 0;
        *(undefined1 *)(plVar18[1] + (ulong)((*(int *)((long)plVar18 + 0x14) - 1U & uVar22) + 0xf))
             = 0;
        lVar5 = *plVar18;
        puVar15 = (undefined8 *)(lVar23 + lVar5);
        if (puVar15 != (undefined8 *)0x0) {
          uVar7 = ((undefined8 *)(lVar5 + lVar21))[1];
          *puVar15 = *(undefined8 *)(lVar5 + lVar21);
          puVar15[1] = uVar7;
          *(undefined4 *)(puVar15 + 2) = *(undefined4 *)(lVar5 + 0x10 + lVar21);
        }
        uVar19 = (ulong)*(uint *)((long)plVar18 + 0x14);
      }
LAB_00100978:
      lVar12 = lVar12 + 1;
      uVar22 = uVar22 + 1;
      lVar21 = lVar21 + 0x14;
    } while ((uint)lVar12 < (uint)uVar19);
  }
  *(int *)(plVar18 + 3) = (int)(uVar19 * 7 >> 3) - (int)plVar18[2];
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MeshShape::GetSupportingFace(JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3, JPH::Mat44
   const&, JPH::StaticArray<JPH::Vec3, 32u>&) const */

void JPH::MeshShape::GetSupportingFace
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_1,uint *param_6,float *param_7,undefined4 *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
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
  undefined8 uVar24;
  undefined8 uVar25;
  undefined4 uVar26;
  long lVar27;
  float *pfVar28;
  float *pfVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  uint uVar33;
  ulong uVar34;
  uint *puVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar42;
  undefined1 auVar41 [16];
  undefined1 auVar43 [12];
  undefined1 auVar44 [16];
  undefined1 auVar45 [12];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  lVar27 = *(long *)(param_1 + 0x48);
  uVar8 = *param_6;
  bVar7 = *(byte *)(lVar27 + 0x1c);
  fVar1 = *(float *)(lVar27 + 0x30);
  fVar2 = *(float *)(lVar27 + 0x20);
  fVar3 = *(float *)(lVar27 + 0x24);
  fVar4 = *(float *)(lVar27 + 0x28);
  fVar5 = *(float *)(lVar27 + 0x2c);
  fVar6 = *(float *)(lVar27 + 0x34);
  *param_8 = 3;
  uVar33 = (uint)(0xffffffffL << (0x20 - bVar7 & 0x3f)) | uVar8 >> (bVar7 & 0x3f);
  lVar30 = (ulong)(uVar33 >> 2 & 1) * 0x10;
  puVar35 = (uint *)((ulong)(((int)(1L << (bVar7 & 0x3f)) - 1U & uVar8) * 4) + lVar27);
  uVar31 = (ulong)(uVar33 & 3);
  uVar34 = (ulong)*(byte *)((long)puVar35 + uVar31 + lVar30 + 4);
  lVar27 = (ulong)((*puVar35 & 0x1fffffff) << 2) + (long)puVar35;
  uVar32 = (ulong)*(byte *)((long)puVar35 + uVar31 + lVar30 + 0xc);
  uVar8 = *(uint *)(lVar27 + uVar34 * 8);
  puVar35 = (uint *)(lVar27 + (ulong)*(byte *)((long)puVar35 + uVar31 + lVar30 + 8) * 8);
  uVar33 = *(uint *)(lVar27 + uVar32 * 8);
  uVar9 = *(uint *)(lVar27 + 4 + uVar32 * 8);
  uVar10 = *puVar35;
  uVar42 = puVar35[1];
  uVar40 = *(uint *)(lVar27 + 4 + uVar34 * 8);
  uVar38 = uVar8 & __LC9;
  uVar39 = uVar10 & _UNK_00112494;
  auVar43._0_4_ = uVar8 >> 0x15;
  auVar43._4_4_ = uVar10 >> 0x15;
  auVar43._8_4_ = uVar33 >> 0x15;
  auVar45._0_4_ = (uVar40 >> 0x15) << 0xb;
  auVar45._4_4_ = (uVar42 >> 0x15) << 0xb;
  auVar45._8_4_ = (uVar9 >> 0x15) << 0xb;
  uVar40 = uVar40 & __LC9;
  uVar42 = uVar42 & _UNK_00112494;
  auVar43 = auVar43 | auVar45;
  auVar36._4_4_ = fVar1 * (float)auVar43._8_4_ + fVar3;
  auVar36._0_4_ = fVar5 * (float)(int)(uVar33 & _UNK_00112498) + fVar2;
  auVar36._8_4_ = fVar6 * (float)(int)(uVar9 & _UNK_00112498) + fVar4;
  auVar36._12_4_ = 0;
  *(undefined1 (*) [16])(param_8 + 0xc) = auVar36;
  auVar41._4_4_ = fVar1 * (float)auVar43._4_4_ + fVar3;
  auVar41._0_4_ = fVar5 * (float)(int)uVar39 + fVar2;
  auVar41._8_4_ = fVar6 * (float)(int)uVar42 + fVar4;
  auVar41._12_4_ = 0;
  auVar44._4_4_ = fVar1 * (float)auVar43._0_4_ + fVar3;
  auVar44._0_4_ = fVar5 * (float)(int)uVar38 + fVar2;
  auVar44._8_4_ = fVar6 * (float)(int)uVar40 + fVar4;
  auVar44._12_4_ = 0;
  *(undefined1 (*) [16])(param_8 + 4) = auVar44;
  local_18 = (float)param_3;
  fStack_14 = (float)((ulong)param_3 >> 0x20);
  fStack_10 = (float)param_4;
  fStack_c = (float)((ulong)param_4 >> 0x20);
  *(undefined1 (*) [16])(param_8 + 8) = auVar41;
  auVar37._4_4_ = -(uint)(fStack_14 < 0.0);
  auVar37._0_4_ = -(uint)(local_18 < 0.0);
  auVar37._8_4_ = -(uint)(fStack_10 < 0.0);
  auVar37._12_4_ = -(uint)(fStack_c < 0.0);
  uVar26 = movmskps((int)lVar27,auVar37);
  if ((POPCOUNT((byte)uVar26 & 7) & 1U) != 0) {
    uVar24 = *(undefined8 *)(param_8 + 0xc);
    uVar25 = *(undefined8 *)(param_8 + 0xe);
    *(undefined8 *)(param_8 + 0xc) = *(undefined8 *)(param_8 + 8);
    *(undefined8 *)(param_8 + 0xe) = *(undefined8 *)(param_8 + 10);
    *(undefined8 *)(param_8 + 8) = uVar24;
    *(undefined8 *)(param_8 + 10) = uVar25;
  }
  fVar1 = *param_7;
  fVar2 = param_7[1];
  fVar3 = param_7[2];
  fVar4 = param_7[3];
  fVar5 = param_7[0xc];
  fVar6 = param_7[0xd];
  fVar11 = param_7[0xe];
  fVar12 = param_7[0xf];
  fVar13 = param_7[8];
  fVar14 = param_7[9];
  fVar15 = param_7[10];
  fVar16 = param_7[0xb];
  fVar17 = param_7[4];
  fVar18 = param_7[5];
  fVar19 = param_7[6];
  fVar20 = param_7[7];
  pfVar28 = (float *)(param_8 + 4);
  do {
    fVar21 = *pfVar28;
    fVar22 = pfVar28[1];
    fVar23 = pfVar28[2];
    pfVar29 = pfVar28 + 4;
    *pfVar28 = fVar23 * fStack_10 * fVar13 + fVar21 * local_18 * fVar1 + fVar22 * fStack_14 * fVar17
               + fVar5;
    pfVar28[1] = fVar23 * fStack_10 * fVar14 +
                 fVar21 * local_18 * fVar2 + fVar22 * fStack_14 * fVar18 + fVar6;
    pfVar28[2] = fVar23 * fStack_10 * fVar15 +
                 fVar21 * local_18 * fVar3 + fVar22 * fStack_14 * fVar19 + fVar11;
    pfVar28[3] = fVar23 * fStack_10 * fVar16 +
                 fVar21 * local_18 * fVar4 + fVar22 * fStack_14 * fVar20 + fVar12;
    pfVar28 = pfVar29;
  } while ((float *)(param_8 + 0x10) != pfVar29);
  return;
}



/* JPH::MeshShape::GetLocalBounds() const */

void JPH::MeshShape::GetLocalBounds(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_RSI;
  undefined8 *in_RDI;
  
  puVar1 = *(undefined8 **)(in_RSI + 0x48);
  uVar2 = *(undefined8 *)((long)puVar1 + 0x14);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  in_RDI[2] = *(undefined8 *)((long)puVar1 + 0xc);
  in_RDI[3] = uVar2;
  *in_RDI = uVar3;
  in_RDI[1] = uVar4;
  return;
}



/* JPH::MeshShape::GetSubShapeIDBitsRecursive() const */

int __thiscall JPH::MeshShape::GetSubShapeIDBitsRecursive(MeshShape *this)

{
  return *(byte *)(*(long *)(this + 0x48) + 0x1c) + 3;
}



/* JPH::HashTable<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings const&,
   JPH::Array<JPH::IndexedTriangle, JPH::STLAllocator<JPH::IndexedTriangle> >&)::Edge,
   std::pair<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings const&,
   JPH::Array<JPH::IndexedTriangle, JPH::STLAllocator<JPH::IndexedTriangle> >&)::Edge,
   JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings const&, JPH::Array<JPH::IndexedTriangle,
   JPH::STLAllocator<JPH::IndexedTriangle> >&)::TriangleIndices>,
   JPH::UnorderedMapDetail<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings const&,
   JPH::Array<JPH::IndexedTriangle, JPH::STLAllocator<JPH::IndexedTriangle> >&)::Edge,
   JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings const&, JPH::Array<JPH::IndexedTriangle,
   JPH::STLAllocator<JPH::IndexedTriangle> >&)::TriangleIndices>,
   JPH::Hash<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings const&,
   JPH::Array<JPH::IndexedTriangle, JPH::STLAllocator<JPH::IndexedTriangle> >&)::Edge>,
   std::equal_to<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings const&,
   JPH::Array<JPH::IndexedTriangle, JPH::STLAllocator<JPH::IndexedTriangle> >&)::Edge>
   >::GrowTable() */

void __thiscall
JPH::
HashTable<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,std::pair<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::TriangleIndices>,JPH::UnorderedMapDetail<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::TriangleIndices>,JPH::Hash<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge>,std::equal_to<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge>>
::GrowTable(HashTable<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,std::pair<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::TriangleIndices>,JPH::UnorderedMapDetail<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::TriangleIndices>,JPH::Hash<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge>,std::equal_to<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge>>
            *this)

{
  void *__s;
  char *pcVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  uint uVar12;
  byte bVar13;
  char *pcVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  char *pcVar18;
  undefined1 auVar19 [16];
  
  uVar8 = *(uint *)(this + 0x14);
  uVar9 = (ulong)(uVar8 * 2);
  if (uVar8 * 2 < 0x10) {
    uVar9 = 0x10;
  }
  if (uVar8 <= (uint)uVar9) {
    pbVar3 = *(byte **)this;
    pcVar14 = *(char **)(this + 8);
    *(undefined4 *)(this + 0x10) = 0;
    *(uint *)(this + 0x14) = (uint)uVar9;
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    *(int *)(this + 0x18) = (int)(uVar9 * 7 >> 3);
    lVar10 = (*Allocate)(uVar9 * 0x15 + 0xf);
    *(long *)this = lVar10;
    __s = (void *)(lVar10 + (ulong)*(uint *)(this + 0x14) * 0x14);
    *(void **)(this + 8) = __s;
    memset(__s,0,(ulong)(*(uint *)(this + 0x14) + 0xf));
    if (pbVar3 != (byte *)0x0) {
      if (uVar8 != 0) {
        pbVar16 = pbVar3 + 8;
        pcVar18 = pcVar14 + uVar8;
        pbVar17 = pbVar3;
        do {
          if (*pcVar14 < '\0') {
            iVar15 = *(int *)(this + 0x18);
            if (iVar15 == 0) {
              if ((ulong)*(uint *)(this + 0x14) <
                  (ulong)(uint)((int)((ulong)*(uint *)(this + 0x14) * 7 >> 3) -
                               *(int *)(this + 0x10)) << 3) {
                rehash((uint)this);
                iVar15 = *(int *)(this + 0x18);
              }
              else {
                GrowTable(this);
                iVar15 = *(int *)(this + 0x18);
              }
            }
            if (pbVar17 < pbVar16) {
              uVar9 = 0xcbf29ce484222325;
              pbVar11 = pbVar17;
              do {
                bVar13 = *pbVar11;
                pbVar11 = pbVar11 + 1;
                uVar9 = (uVar9 ^ bVar13) * 0x100000001b3;
              } while (pbVar11 != pbVar16);
              bVar13 = (byte)uVar9 | 0x80;
              uVar8 = (uint)(uVar9 >> 7);
            }
            else {
              bVar13 = 0xa5;
              uVar8 = 0xc9084446;
            }
            while( true ) {
              uVar8 = uVar8 & *(int *)(this + 0x14) - 1U;
              pcVar1 = (char *)(*(long *)(this + 8) + (ulong)uVar8);
              auVar19[0] = -(*pcVar1 == '\0');
              auVar19[1] = -(pcVar1[1] == '\0');
              auVar19[2] = -(pcVar1[2] == '\0');
              auVar19[3] = -(pcVar1[3] == '\0');
              auVar19[4] = -(pcVar1[4] == '\0');
              auVar19[5] = -(pcVar1[5] == '\0');
              auVar19[6] = -(pcVar1[6] == '\0');
              auVar19[7] = -(pcVar1[7] == '\0');
              auVar19[8] = -(pcVar1[8] == '\0');
              auVar19[9] = -(pcVar1[9] == '\0');
              auVar19[10] = -(pcVar1[10] == '\0');
              auVar19[0xb] = -(pcVar1[0xb] == '\0');
              auVar19[0xc] = -(pcVar1[0xc] == '\0');
              auVar19[0xd] = -(pcVar1[0xd] == '\0');
              auVar19[0xe] = -(pcVar1[0xe] == '\0');
              auVar19[0xf] = -(pcVar1[0xf] == '\0');
              uVar4 = (ushort)(SUB161(auVar19 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar19[0xf] >> 7) << 0xf;
              if (uVar4 != 0) break;
              uVar8 = uVar8 + 0x10;
            }
            iVar5 = 0;
            for (uVar12 = (uint)uVar4; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
              iVar5 = iVar5 + 1;
            }
            *(int *)(this + 0x18) = iVar15 + -1;
            uVar8 = iVar5 + uVar8 & *(int *)(this + 0x14) - 1U;
            *(byte *)(*(long *)(this + 8) + (ulong)uVar8) = bVar13;
            *(byte *)(*(long *)(this + 8) +
                     (ulong)((*(int *)(this + 0x14) - 1U & uVar8 - 0xf) + 0xf)) = bVar13;
            uVar6 = *(undefined8 *)pbVar17;
            uVar7 = *(undefined8 *)(pbVar17 + 8);
            *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
            puVar2 = (undefined8 *)(*(long *)this + (ulong)uVar8 * 0x14);
            *puVar2 = uVar6;
            puVar2[1] = uVar7;
            *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(pbVar17 + 0x10);
          }
          pcVar14 = pcVar14 + 1;
          pbVar17 = pbVar17 + 0x14;
          pbVar16 = pbVar16 + 0x14;
        } while (pcVar18 != pcVar14);
      }
                    /* WARNING: Could not recover jumptable at 0x00100f91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(pbVar3);
      return;
    }
  }
  return;
}



/* JPH::MeshShapeSettings::GetRTTI() const */

undefined1 * JPH::MeshShapeSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::MeshShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::MeshShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::MeshShapeSettings*)::rtti,"MeshShapeSettings",0x98,
                      GetRTTIOfType(JPH::MeshShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::MeshShapeSettings*)::{lambda(void*)#1}::_FUN,sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::MeshShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::MeshShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::MeshShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::MeshShapeSettings*)::rtti;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MeshShape::GetSurfaceNormal(JPH::SubShapeID const&, JPH::Vec3) const */

undefined1  [16] JPH::MeshShape::GetSurfaceNormal(long param_1,uint *param_2)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar29;
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [12];
  
  lVar10 = *(long *)(param_1 + 0x48);
  bVar5 = *(byte *)(lVar10 + 0x1c);
  uVar13 = (uint)(0xffffffffL << (0x20 - bVar5 & 0x3f)) | *param_2 >> (bVar5 & 0x3f);
  uVar14 = (ulong)(uVar13 & 3);
  lVar12 = (ulong)(uVar13 >> 2 & 1) * 0x10;
  puVar16 = (uint *)((ulong)(((int)(1L << (bVar5 & 0x3f)) - 1U & *param_2) * 4) + lVar10);
  uVar11 = (*puVar16 & 0x1fffffff) << 2;
  uVar17 = (ulong)*(byte *)((long)puVar16 + uVar14 + lVar12 + 4);
  uVar15 = (ulong)*(byte *)((long)puVar16 + uVar14 + lVar12 + 0xc);
  puVar1 = (uint *)((long)puVar16 +
                   (ulong)*(byte *)((long)puVar16 + uVar14 + lVar12 + 8) * 8 + (ulong)uVar11);
  uVar13 = *(uint *)((long)puVar16 + uVar17 * 8 + (ulong)uVar11);
  uVar6 = *puVar1;
  uVar7 = *(uint *)((long)puVar16 + uVar15 * 8 + (ulong)uVar11);
  uVar8 = puVar1[1];
  uVar9 = *(uint *)((long)puVar16 + uVar17 * 8 + (ulong)uVar11 + 4);
  uVar11 = *(uint *)((long)puVar16 + uVar15 * 8 + (ulong)uVar11 + 4);
  fVar18 = *(float *)(lVar10 + 0x2c);
  auVar26._0_4_ = uVar13 >> 0x15;
  auVar26._4_4_ = uVar6 >> 0x15;
  auVar26._8_4_ = uVar7 >> 0x15;
  fVar20 = *(float *)(lVar10 + 0x20);
  auVar30._0_4_ = (uVar9 >> 0x15) << 0xb;
  auVar30._4_4_ = (uVar8 >> 0x15) << 0xb;
  auVar30._8_4_ = (uVar11 >> 0x15) << 0xb;
  fVar22 = fVar18 * (float)(int)(uVar6 & _UNK_00112494) + fVar20;
  fVar21 = *(float *)(lVar10 + 0x30);
  auVar26 = auVar26 | auVar30;
  fVar2 = *(float *)(lVar10 + 0x24);
  fVar29 = fVar21 * (float)auVar26._4_4_ + fVar2;
  fVar3 = *(float *)(lVar10 + 0x34);
  fVar4 = *(float *)(lVar10 + 0x28);
  fVar19 = fVar3 * (float)(int)(uVar8 & _UNK_00112494) + fVar4;
  fVar23 = (fVar18 * (float)(int)(uVar13 & __LC9) + fVar20) - fVar22;
  fVar24 = (fVar21 * (float)auVar26._0_4_ + fVar2) - fVar29;
  fVar25 = (fVar3 * (float)(int)(uVar9 & __LC9) + fVar4) - fVar19;
  fVar22 = (fVar18 * (float)(int)(uVar7 & _UNK_00112498) + fVar20) - fVar22;
  fVar29 = (fVar21 * (float)auVar26._8_4_ + fVar2) - fVar29;
  fVar19 = (fVar3 * (float)(int)(uVar11 & _UNK_00112498) + fVar4) - fVar19;
  fVar18 = fVar24 * fVar22 - fVar29 * fVar23;
  fVar20 = fVar25 * fVar29 - fVar19 * fVar24;
  fVar21 = fVar23 * fVar19 - fVar22 * fVar25;
  auVar27._4_4_ = fVar21;
  auVar27._0_4_ = fVar20;
  auVar27._8_4_ = fVar18;
  auVar27._12_4_ = fVar18;
  auVar28._0_4_ = SQRT(fVar18 * fVar18 + fVar21 * fVar21 + fVar20 * fVar20 + 0.0);
  auVar28._4_4_ = auVar28._0_4_;
  auVar28._8_4_ = auVar28._0_4_;
  auVar28._12_4_ = auVar28._0_4_;
  auVar28 = divps(auVar27,auVar28);
  return auVar28;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::MeshShapeSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  plVar4 = *(long **)((long)param_1 + 0x80);
  *(undefined ***)param_1 = &PTR_GetRTTI_001122d8;
  if (plVar4 != (long *)0x0) {
    if ((*(long *)((long)param_1 + 0x70) != 0) &&
       (plVar2 = plVar4 + *(long *)((long)param_1 + 0x70), plVar4 < plVar2)) {
      do {
        while (plVar3 = (long *)*plVar4, plVar3 == (long *)0x0) {
LAB_00101280:
          plVar4 = plVar4 + 1;
          if (plVar2 <= plVar4) goto LAB_001012c0;
        }
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) goto LAB_00101280;
        if (*(code **)(*plVar3 + 0x18) != PhysicsMaterial::~PhysicsMaterial) {
          (**(code **)(*plVar3 + 0x18))();
          goto LAB_00101280;
        }
        (*Free)();
        plVar4 = plVar4 + 1;
      } while (plVar4 < plVar2);
LAB_001012c0:
      plVar4 = *(long **)((long)param_1 + 0x80);
    }
    *(undefined8 *)((long)param_1 + 0x70) = 0;
    (*Free)(plVar4);
  }
  if (*(long *)((long)param_1 + 0x68) != 0) {
    *(undefined8 *)((long)param_1 + 0x58) = 0;
    (*Free)();
  }
  if (*(long *)((long)param_1 + 0x50) != 0) {
    *(undefined8 *)((long)param_1 + 0x40) = 0;
    (*Free)();
  }
  *(code **)param_1 = JPH::CollideConvexVsTriangles::CollideConvexVsTriangles;
  if (*(char *)((long)param_1 + 0x38) == '\x01') {
    plVar4 = *(long **)((long)param_1 + 0x18);
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  else if ((*(char *)((long)param_1 + 0x38) == '\x02') &&
          (*(long *)((long)param_1 + 0x18) != (long)param_1 + 0x28)) {
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x00101330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MeshShape::GetStats() const */

long __thiscall JPH::MeshShape::GetStats(MeshShape *this)

{
  long lVar1;
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 (*pauVar25) [16];
  long lVar26;
  undefined4 uVar27;
  long in_FS_OFFSET;
  undefined1 auVar28 [16];
  int iVar29;
  int iVar37;
  undefined1 auVar30 [12];
  int iVar36;
  undefined1 auVar31 [16];
  int iVar38;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar39;
  int iVar40;
  int iVar47;
  int iVar49;
  undefined1 auVar41 [12];
  uint uVar46;
  uint uVar48;
  uint uVar50;
  undefined1 auVar42 [16];
  int iVar51;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  uint uVar52;
  uint uVar53;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  undefined1 auVar54 [12];
  uint uVar57;
  undefined1 auVar55 [16];
  uint uVar61;
  uint uVar62;
  undefined1 auVar56 [16];
  uint uVar63;
  uint uVar64;
  int iVar65;
  uint uVar67;
  uint uVar68;
  int iVar69;
  uint uVar70;
  uint uVar71;
  int iVar72;
  uint uVar73;
  uint uVar74;
  int iVar75;
  undefined1 auVar66 [16];
  uint uVar76;
  uint uVar78;
  uint uVar82;
  uint uVar85;
  uint uVar88;
  undefined1 auVar79 [16];
  uint uVar77;
  uint uVar83;
  uint uVar86;
  uint uVar89;
  undefined1 auVar80 [16];
  uint uVar84;
  uint uVar87;
  uint uVar90;
  undefined1 auVar81 [16];
  undefined1 auVar91 [16];
  uint uVar92;
  uint uVar95;
  uint uVar96;
  uint uVar97;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  uint uVar105;
  undefined8 local_248;
  undefined8 uStack_240;
  uint local_238 [2];
  undefined8 auStack_230 [63];
  int local_38;
  long local_30;
  
  uVar27 = SUB84(this,0);
  lVar1 = *(long *)(this + 0x48);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  uVar53 = *(uint *)(lVar1 + 0x18);
  local_238[0] = uVar53;
  auVar35 = __LC19;
  while( true ) {
    if (uVar53 >> 0x1c == 0) {
      auVar55._4_4_ = _UNK_001124c4;
      auVar55._0_4_ = __LC14;
      auVar55._8_4_ = _UNK_001124c8;
      auVar55._12_4_ = _UNK_001124cc;
      pauVar25 = (undefined1 (*) [16])((ulong)(uVar53 * 4) + lVar1);
      lVar26 = (long)local_38;
      auVar31 = *pauVar25;
      auVar42 = *pauVar25;
      auVar80 = pauVar25[1];
      auVar7._10_2_ = 0;
      auVar7._0_10_ = auVar31._0_10_;
      auVar7._12_2_ = auVar31._6_2_;
      auVar13._8_2_ = auVar31._4_2_;
      auVar13._0_8_ = auVar31._0_8_;
      auVar13._10_4_ = auVar7._10_4_;
      auVar19._6_8_ = 0;
      auVar19._0_6_ = auVar13._8_6_;
      auVar28._6_8_ = SUB148(auVar19 << 0x40,6);
      auVar28._4_2_ = auVar31._2_2_;
      auVar28._0_2_ = auVar31._0_2_;
      auVar28._2_2_ = 0;
      auVar28._14_2_ = 0;
      auVar55 = auVar55 & auVar28;
      auVar31 = __LC11 & auVar28;
      auVar2._10_2_ = 0;
      auVar2._0_10_ = auVar80._0_10_;
      auVar2._12_2_ = auVar80._6_2_;
      auVar8._8_2_ = auVar80._4_2_;
      auVar8._0_8_ = auVar80._0_8_;
      auVar8._10_4_ = auVar2._10_4_;
      auVar20._6_8_ = 0;
      auVar20._0_6_ = auVar8._8_6_;
      auVar14._4_2_ = auVar80._2_2_;
      auVar14._0_4_ = auVar80._0_4_;
      auVar14._6_8_ = SUB148(auVar20 << 0x40,6);
      auVar98._0_4_ = auVar80._0_4_ & 0xffff;
      auVar98._4_10_ = auVar14._4_10_;
      auVar98._14_2_ = 0;
      iVar29 = auVar31._0_4_ * 0x2000;
      iVar36 = auVar31._4_4_ * 0x2000;
      iVar37 = auVar31._8_4_ * 0x2000;
      iVar38 = auVar31._12_4_ * 0x2000;
      auVar28 = auVar28 & auVar35;
      uVar63 = __LC12 + iVar29;
      uVar67 = _UNK_001124b4 + iVar36;
      uVar70 = _UNK_001124b8 + iVar37;
      uVar73 = _UNK_001124bc + iVar38;
      uVar52 = (int)-(uint)(auVar55._0_4_ == 0) >> 0x1f;
      uVar57 = (int)-(uint)(auVar55._4_4_ == 0) >> 0x1f;
      uVar59 = (int)-(uint)(auVar55._8_4_ == 0) >> 0x1f;
      uVar61 = (int)-(uint)(auVar55._12_4_ == 0) >> 0x1f;
      uVar39 = (int)-(uint)(auVar55._0_4_ == __LC14) >> 0x1f;
      uVar46 = (int)-(uint)(auVar55._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar48 = (int)-(uint)(auVar55._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar50 = (int)-(uint)(auVar55._12_4_ == _UNK_001124cc) >> 0x1f;
      auVar31._4_4_ = _UNK_001124c4;
      auVar31._0_4_ = __LC14;
      auVar31._8_4_ = _UNK_001124c8;
      auVar31._12_4_ = _UNK_001124cc;
      auVar30._0_8_ = auVar42._8_8_;
      auVar30._8_4_ = auVar42._8_4_;
      auVar3._10_2_ = 0;
      auVar3._0_10_ = auVar30._0_10_;
      auVar3._12_2_ = auVar42._14_2_;
      auVar9._8_2_ = auVar42._12_2_;
      auVar9._0_8_ = auVar30._0_8_;
      auVar9._10_4_ = auVar3._10_4_;
      auVar21._6_8_ = 0;
      auVar21._0_6_ = auVar9._8_6_;
      auVar15._4_2_ = auVar42._10_2_;
      auVar15._0_4_ = auVar42._8_4_;
      auVar15._6_8_ = SUB148(auVar21 << 0x40,6);
      auVar32._0_2_ = auVar42._8_2_;
      auVar32._2_2_ = 0;
      auVar32._4_10_ = auVar15._4_10_;
      auVar32._14_2_ = 0;
      auVar31 = auVar31 & auVar32;
      auVar42 = __LC11 & auVar32;
      auVar32 = auVar32 & auVar35;
      iVar40 = auVar42._0_4_ * 0x2000;
      iVar47 = auVar42._4_4_ * 0x2000;
      iVar49 = auVar42._8_4_ * 0x2000;
      iVar51 = auVar42._12_4_ * 0x2000;
      auVar33._0_4_ = auVar32._0_4_ << 0x10;
      auVar33._4_4_ = auVar32._4_4_ << 0x10;
      auVar33._8_4_ = auVar32._8_4_ << 0x10;
      auVar33._12_4_ = auVar32._12_4_ << 0x10;
      uVar76 = __LC12 + iVar40;
      uVar82 = _UNK_001124b4 + iVar47;
      uVar85 = _UNK_001124b8 + iVar49;
      uVar88 = _UNK_001124bc + iVar51;
      uVar53 = (int)-(uint)(auVar31._0_4_ == __LC14) >> 0x1f;
      uVar58 = (int)-(uint)(auVar31._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar60 = (int)-(uint)(auVar31._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar62 = (int)-(uint)(auVar31._12_4_ == _UNK_001124cc) >> 0x1f;
      uVar64 = (int)-(uint)(auVar31._0_4_ == 0) >> 0x1f;
      uVar68 = (int)-(uint)(auVar31._4_4_ == 0) >> 0x1f;
      uVar71 = (int)-(uint)(auVar31._8_4_ == 0) >> 0x1f;
      uVar74 = (int)-(uint)(auVar31._12_4_ == 0) >> 0x1f;
      auVar79._0_4_ = ~uVar64 & (uVar53 & (uVar76 | __LC15) | ~uVar53 & uVar76);
      auVar79._4_4_ = ~uVar68 & (uVar58 & (uVar82 | _UNK_001124d4) | ~uVar58 & uVar82);
      auVar79._8_4_ = ~uVar71 & (uVar60 & (uVar85 | _UNK_001124d8) | ~uVar60 & uVar85);
      auVar79._12_4_ = ~uVar74 & (uVar62 & (uVar88 | _UNK_001124dc) | ~uVar62 & uVar88);
      auVar31 = __LC11 & auVar98;
      auVar91._0_4_ = (uint)((float)(__LC16 + iVar40) + _LC18) & uVar64;
      auVar91._4_4_ = (uint)((float)(_UNK_001124e4 + iVar47) + _UNK_001124f4) & uVar68;
      auVar91._8_4_ = (uint)((float)(_UNK_001124e8 + iVar49) + _UNK_001124f8) & uVar71;
      auVar91._12_4_ = (uint)((float)(_UNK_001124ec + iVar51) + _UNK_001124fc) & uVar74;
      auVar42._4_4_ = _UNK_001124c4;
      auVar42._0_4_ = __LC14;
      auVar42._8_4_ = _UNK_001124c8;
      auVar42._12_4_ = _UNK_001124cc;
      iVar40 = auVar31._0_4_ * 0x2000;
      iVar47 = auVar31._4_4_ * 0x2000;
      iVar49 = auVar31._8_4_ * 0x2000;
      iVar51 = auVar31._12_4_ * 0x2000;
      auVar42 = auVar42 & auVar98;
      auVar98 = auVar98 & auVar35;
      auVar33 = auVar33 | auVar91 | auVar79;
      uVar77 = __LC12 + iVar40;
      uVar83 = _UNK_001124b4 + iVar47;
      uVar86 = _UNK_001124b8 + iVar49;
      uVar89 = _UNK_001124bc + iVar51;
      uVar58 = (int)-(uint)(auVar42._0_4_ == __LC14) >> 0x1f;
      uVar60 = (int)-(uint)(auVar42._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar64 = (int)-(uint)(auVar42._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar71 = (int)-(uint)(auVar42._12_4_ == _UNK_001124cc) >> 0x1f;
      uVar76 = (int)-(uint)(auVar42._0_4_ == 0) >> 0x1f;
      uVar82 = (int)-(uint)(auVar42._4_4_ == 0) >> 0x1f;
      uVar85 = (int)-(uint)(auVar42._8_4_ == 0) >> 0x1f;
      uVar88 = (int)-(uint)(auVar42._12_4_ == 0) >> 0x1f;
      auVar31 = pauVar25[1];
      uVar53 = auVar31._8_4_;
      auVar41._0_8_ = auVar31._8_8_;
      auVar41._8_4_ = uVar53;
      auVar80._4_4_ = _UNK_001124c4;
      auVar80._0_4_ = __LC14;
      auVar80._8_4_ = _UNK_001124c8;
      auVar80._12_4_ = _UNK_001124cc;
      auVar4._10_2_ = 0;
      auVar4._0_10_ = auVar41._0_10_;
      auVar4._12_2_ = auVar31._14_2_;
      auVar10._8_2_ = auVar31._12_2_;
      auVar10._0_8_ = auVar41._0_8_;
      auVar10._10_4_ = auVar4._10_4_;
      auVar22._6_8_ = 0;
      auVar22._0_6_ = auVar10._8_6_;
      auVar16._4_2_ = auVar31._10_2_;
      auVar16._0_4_ = uVar53;
      auVar16._6_8_ = SUB148(auVar22 << 0x40,6);
      auVar43._0_4_ = uVar53 & 0xffff;
      auVar43._4_10_ = auVar16._4_10_;
      auVar43._14_2_ = 0;
      auVar31 = __LC11 & auVar43;
      auVar80 = auVar80 & auVar43;
      iVar65 = auVar31._0_4_ * 0x2000;
      iVar69 = auVar31._4_4_ * 0x2000;
      iVar72 = auVar31._8_4_ * 0x2000;
      iVar75 = auVar31._12_4_ * 0x2000;
      auVar43 = auVar43 & auVar35;
      uVar92 = __LC12 + iVar65;
      uVar95 = _UNK_001124b4 + iVar69;
      uVar96 = _UNK_001124b8 + iVar72;
      uVar97 = _UNK_001124bc + iVar75;
      auVar44._0_4_ = auVar43._0_4_ << 0x10;
      auVar44._4_4_ = auVar43._4_4_ << 0x10;
      auVar44._8_4_ = auVar43._8_4_ << 0x10;
      auVar44._12_4_ = auVar43._12_4_ << 0x10;
      uVar78 = (int)-(uint)(auVar80._0_4_ == 0) >> 0x1f;
      uVar84 = (int)-(uint)(auVar80._4_4_ == 0) >> 0x1f;
      uVar87 = (int)-(uint)(auVar80._8_4_ == 0) >> 0x1f;
      uVar90 = (int)-(uint)(auVar80._12_4_ == 0) >> 0x1f;
      uVar53 = (int)-(uint)(auVar80._0_4_ == __LC14) >> 0x1f;
      uVar62 = (int)-(uint)(auVar80._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar68 = (int)-(uint)(auVar80._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar74 = (int)-(uint)(auVar80._12_4_ == _UNK_001124cc) >> 0x1f;
      auVar103._4_4_ = _UNK_001124c4;
      auVar103._0_4_ = __LC14;
      auVar103._8_4_ = _UNK_001124c8;
      auVar103._12_4_ = _UNK_001124cc;
      auVar31 = pauVar25[2];
      auVar66._0_4_ = (uint)((float)(iVar65 + __LC16) + _LC18) & uVar78;
      auVar66._4_4_ = (uint)((float)(iVar69 + _UNK_001124e4) + _UNK_001124f4) & uVar84;
      auVar66._8_4_ = (uint)((float)(iVar72 + _UNK_001124e8) + _UNK_001124f8) & uVar87;
      auVar66._12_4_ = (uint)((float)(iVar75 + _UNK_001124ec) + _UNK_001124fc) & uVar90;
      auVar93._0_4_ = ~uVar78 & (uVar53 & (uVar92 | __LC15) | ~uVar53 & uVar92);
      auVar93._4_4_ = ~uVar84 & (uVar62 & (uVar95 | _UNK_001124d4) | ~uVar62 & uVar95);
      auVar93._8_4_ = ~uVar87 & (uVar68 & (uVar96 | _UNK_001124d8) | ~uVar68 & uVar96);
      auVar93._12_4_ = ~uVar90 & (uVar74 & (uVar97 | _UNK_001124dc) | ~uVar74 & uVar97);
      auVar5._10_2_ = 0;
      auVar5._0_10_ = auVar31._0_10_;
      auVar5._12_2_ = auVar31._6_2_;
      auVar11._8_2_ = auVar31._4_2_;
      auVar11._0_8_ = auVar31._0_8_;
      auVar11._10_4_ = auVar5._10_4_;
      auVar23._6_8_ = 0;
      auVar23._0_6_ = auVar11._8_6_;
      auVar17._4_2_ = auVar31._2_2_;
      auVar17._0_4_ = auVar31._0_4_;
      auVar17._6_8_ = SUB148(auVar23 << 0x40,6);
      auVar101._0_4_ = auVar31._0_4_ & 0xffff;
      auVar101._4_10_ = auVar17._4_10_;
      auVar101._14_2_ = 0;
      auVar103 = auVar103 & auVar101;
      auVar31 = __LC11 & auVar101;
      auVar101 = auVar101 & auVar35;
      iVar65 = auVar31._0_4_ * 0x2000;
      iVar69 = auVar31._4_4_ * 0x2000;
      iVar72 = auVar31._8_4_ * 0x2000;
      iVar75 = auVar31._12_4_ * 0x2000;
      auVar44 = auVar44 | auVar66 | auVar93;
      auVar102._0_4_ = auVar101._0_4_ << 0x10;
      auVar102._4_4_ = auVar101._4_4_ << 0x10;
      auVar102._8_4_ = auVar101._8_4_ << 0x10;
      auVar102._12_4_ = auVar101._12_4_ << 0x10;
      uVar78 = __LC12 + iVar65;
      uVar84 = _UNK_001124b4 + iVar69;
      uVar87 = _UNK_001124b8 + iVar72;
      uVar90 = _UNK_001124bc + iVar75;
      uVar92 = (int)-(uint)(auVar103._0_4_ == 0) >> 0x1f;
      uVar95 = (int)-(uint)(auVar103._4_4_ == 0) >> 0x1f;
      uVar96 = (int)-(uint)(auVar103._8_4_ == 0) >> 0x1f;
      uVar97 = (int)-(uint)(auVar103._12_4_ == 0) >> 0x1f;
      uVar53 = (int)-(uint)(auVar103._0_4_ == __LC14) >> 0x1f;
      uVar62 = (int)-(uint)(auVar103._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar68 = (int)-(uint)(auVar103._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar74 = (int)-(uint)(auVar103._12_4_ == _UNK_001124cc) >> 0x1f;
      auVar81._0_4_ = (uint)((float)(iVar65 + __LC16) + _LC18) & uVar92;
      auVar81._4_4_ = (uint)((float)(iVar69 + _UNK_001124e4) + _UNK_001124f4) & uVar95;
      auVar81._8_4_ = (uint)((float)(iVar72 + _UNK_001124e8) + _UNK_001124f8) & uVar96;
      auVar81._12_4_ = (uint)((float)(iVar75 + _UNK_001124ec) + _UNK_001124fc) & uVar97;
      auVar94._0_4_ = ~uVar92 & (uVar53 & (uVar78 | __LC15) | ~uVar53 & uVar78);
      auVar94._4_4_ = ~uVar95 & (uVar62 & (uVar84 | _UNK_001124d4) | ~uVar62 & uVar84);
      auVar94._8_4_ = ~uVar96 & (uVar68 & (uVar87 | _UNK_001124d8) | ~uVar68 & uVar87);
      auVar94._12_4_ = ~uVar97 & (uVar74 & (uVar90 | _UNK_001124dc) | ~uVar74 & uVar90);
      auVar31 = pauVar25[2];
      auVar102 = auVar102 | auVar81 | auVar94;
      uVar53 = auVar31._8_4_;
      auVar54._0_8_ = auVar31._8_8_;
      auVar54._8_4_ = uVar53;
      auVar34._4_4_ = -(uint)(auVar33._4_4_ < auVar102._4_4_);
      auVar34._0_4_ = -(uint)(auVar33._0_4_ < auVar102._0_4_);
      auVar34._8_4_ = -(uint)(auVar33._8_4_ < auVar102._8_4_);
      auVar34._12_4_ = -(uint)(auVar33._12_4_ < auVar102._12_4_);
      auVar6._10_2_ = 0;
      auVar6._0_10_ = auVar54._0_10_;
      auVar6._12_2_ = auVar31._14_2_;
      auVar12._8_2_ = auVar31._12_2_;
      auVar12._0_8_ = auVar54._0_8_;
      auVar12._10_4_ = auVar6._10_4_;
      auVar24._6_8_ = 0;
      auVar24._0_6_ = auVar12._8_6_;
      auVar18._4_2_ = auVar31._10_2_;
      auVar18._0_4_ = uVar53;
      auVar18._6_8_ = SUB148(auVar24 << 0x40,6);
      auVar56._0_4_ = uVar53 & 0xffff;
      auVar56._4_10_ = auVar18._4_10_;
      auVar56._14_2_ = 0;
      auVar31 = __LC11 & auVar56;
      iVar65 = auVar31._0_4_ * 0x2000;
      iVar69 = auVar31._4_4_ * 0x2000;
      iVar72 = auVar31._8_4_ * 0x2000;
      iVar75 = auVar31._12_4_ * 0x2000;
      uVar84 = __LC12 + iVar65;
      uVar90 = _UNK_001124b4 + iVar69;
      uVar95 = _UNK_001124b8 + iVar72;
      uVar97 = _UNK_001124bc + iVar75;
      auVar104._4_4_ = _UNK_001124c4;
      auVar104._0_4_ = __LC14;
      auVar104._8_4_ = _UNK_001124c8;
      auVar104._12_4_ = _UNK_001124cc;
      auVar104 = auVar104 & auVar56;
      auVar56 = auVar56 & auVar35;
      uVar62 = (int)-(uint)(auVar104._0_4_ == __LC14) >> 0x1f;
      uVar68 = (int)-(uint)(auVar104._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar74 = (int)-(uint)(auVar104._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar78 = (int)-(uint)(auVar104._12_4_ == _UNK_001124cc) >> 0x1f;
      uVar87 = (int)-(uint)(auVar104._0_4_ == 0) >> 0x1f;
      uVar92 = (int)-(uint)(auVar104._4_4_ == 0) >> 0x1f;
      uVar96 = (int)-(uint)(auVar104._8_4_ == 0) >> 0x1f;
      uVar105 = (int)-(uint)(auVar104._12_4_ == 0) >> 0x1f;
      uVar53 = *(uint *)(pauVar25[3] + 0xc);
      auVar100._4_4_ =
           -(uint)((float)(auVar98._4_4_ << 0x10 |
                          (uint)((float)(iVar47 + _UNK_001124e4) + _UNK_001124f4) & uVar82 |
                          ~uVar82 & (uVar60 & (uVar83 | _UNK_001124d4) | ~uVar60 & uVar83)) <
                  (float)(auVar56._4_4_ << 0x10 |
                         (uint)((float)(iVar69 + _UNK_001124e4) + _UNK_001124f4) & uVar92 |
                         ~uVar92 & (uVar68 & (uVar90 | _UNK_001124d4) | ~uVar68 & uVar90)));
      auVar100._0_4_ =
           -(uint)((float)(auVar98._0_4_ << 0x10 |
                          (uint)((float)(iVar40 + __LC16) + _LC18) & uVar76 |
                          ~uVar76 & (uVar58 & (uVar77 | __LC15) | ~uVar58 & uVar77)) <
                  (float)(auVar56._0_4_ << 0x10 |
                         (uint)((float)(iVar65 + __LC16) + _LC18) & uVar87 |
                         ~uVar87 & (uVar62 & (uVar84 | __LC15) | ~uVar62 & uVar84)));
      auVar100._8_4_ =
           -(uint)((float)(auVar98._8_4_ << 0x10 |
                          (uint)((float)(iVar49 + _UNK_001124e8) + _UNK_001124f8) & uVar85 |
                          ~uVar85 & (uVar64 & (uVar86 | _UNK_001124d8) | ~uVar64 & uVar86)) <
                  (float)(auVar56._8_4_ << 0x10 |
                         (uint)((float)(iVar72 + _UNK_001124e8) + _UNK_001124f8) & uVar96 |
                         ~uVar96 & (uVar74 & (uVar95 | _UNK_001124d8) | ~uVar74 & uVar95)));
      auVar100._12_4_ =
           -(uint)((float)(auVar98._12_4_ << 0x10 |
                          (uint)((float)(iVar51 + _UNK_001124ec) + _UNK_001124fc) & uVar88 |
                          ~uVar88 & (uVar71 & (uVar89 | _UNK_001124dc) | ~uVar71 & uVar89)) <
                  (float)(auVar56._12_4_ << 0x10 |
                         (uint)((float)(iVar75 + _UNK_001124ec) + _UNK_001124fc) & uVar105 |
                         ~uVar105 & (uVar78 & (uVar97 | _UNK_001124dc) | ~uVar78 & uVar97)));
      auVar99._4_4_ =
           -(uint)((float)((uint)((float)(iVar36 + _UNK_001124e4) + _UNK_001124f4) & uVar57 |
                           ~uVar57 & (uVar46 & (uVar67 | _UNK_001124d4) | ~uVar46 & uVar67) |
                          auVar28._4_4_ << 0x10) < auVar44._4_4_);
      auVar99._0_4_ =
           -(uint)((float)((uint)((float)(iVar29 + __LC16) + _LC18) & uVar52 |
                           ~uVar52 & (uVar39 & (uVar63 | __LC15) | ~uVar39 & uVar63) |
                          auVar28._0_4_ << 0x10) < auVar44._0_4_);
      auVar99._8_4_ =
           -(uint)((float)((uint)((float)(iVar37 + _UNK_001124e8) + _UNK_001124f8) & uVar59 |
                           ~uVar59 & (uVar48 & (uVar70 | _UNK_001124d8) | ~uVar48 & uVar70) |
                          auVar28._8_4_ << 0x10) < auVar44._8_4_);
      auVar99._12_4_ =
           -(uint)((float)((uint)((float)(iVar38 + _UNK_001124ec) + _UNK_001124fc) & uVar61 |
                           ~uVar61 & (uVar50 & (uVar73 | _UNK_001124dc) | ~uVar50 & uVar73) |
                          auVar28._12_4_ << 0x10) < auVar44._12_4_);
      auVar100 = auVar99 | auVar34 | auVar100;
      uVar27 = movmskps(uVar27,auVar100);
      uVar39 = auVar100._8_4_ >> 0x1f;
      uVar50 = uVar39 & *(uint *)(pauVar25[3] + 8) | ~uVar39 & uVar53;
      uVar39 = auVar100._4_4_ >> 0x1f;
      uVar46 = auVar100._0_4_ >> 0x1f;
      uVar48 = *(uint *)(pauVar25[3] + 4) & uVar39 | ~uVar39 & uVar50;
      uVar39 = uVar50 & uVar39 | ~uVar39 & uVar53;
      auVar45._0_4_ = *(uint *)pauVar25[3] & uVar46;
      auVar45._4_4_ = uVar48 & uVar46;
      auVar45._8_4_ = uVar39 & uVar46;
      auVar45._12_4_ = uVar53 & uVar46;
      auVar35._0_4_ = ~uVar46 & uVar48;
      auVar35._4_4_ = ~uVar46 & uVar39;
      auVar35._8_4_ = ~uVar46 & uVar53;
      auVar35._12_4_ = ~uVar46 & uVar53;
      iVar29 = __popcountdi2(uVar27);
      local_248 = SUB168(auVar45 | auVar35,0);
      uStack_240 = SUB168(auVar45 | auVar35,8);
      *(undefined8 *)(local_238 + lVar26) = local_248;
      *(undefined8 *)((long)auStack_230 + lVar26 * 4) = uStack_240;
      local_38 = iVar29 + local_38 + -1;
      auVar35 = __LC19;
    }
    else {
      local_38 = local_38 + -1;
    }
    if (local_38 < 0) break;
    uVar53 = local_238[local_38];
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *(long *)(this + 0x38) + 0x60 + *(long *)(this + 0x20) * 8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MeshShape::sCollideConvexVsMesh(JPH::Shape const*, JPH::Shape const*, JPH::Vec3, JPH::Vec3,
   JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator
   const&, JPH::CollideShapeSettings const&, JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::ShapeFilter const&) */

void JPH::MeshShape::sCollideConvexVsMesh(undefined8 param_1,long param_2)

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [14];
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [14];
  undefined1 auVar33 [14];
  undefined1 auVar34 [14];
  undefined1 auVar35 [14];
  undefined1 auVar36 [14];
  undefined1 auVar37 [14];
  undefined1 (*pauVar38) [16];
  uint *puVar39;
  undefined1 (*pauVar40) [16];
  undefined1 (*pauVar41) [16];
  byte bVar42;
  byte bVar43;
  long lVar44;
  ulong uVar45;
  uint *puVar46;
  ulong uVar47;
  long lVar48;
  undefined4 uVar49;
  int *piVar50;
  ulong uVar51;
  uint uVar52;
  ulong uVar53;
  uint *in_R9;
  uint *puVar54;
  byte *pbVar55;
  ulong uVar56;
  long in_FS_OFFSET;
  uint uVar57;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar78;
  undefined1 auVar68 [12];
  int iVar74;
  undefined1 auVar70 [16];
  int iVar82;
  undefined1 auVar71 [16];
  int iVar75;
  int iVar79;
  undefined1 auVar69 [12];
  int iVar83;
  undefined1 auVar72 [16];
  int iVar76;
  int iVar77;
  int iVar80;
  int iVar81;
  int iVar84;
  int iVar85;
  undefined1 auVar73 [16];
  uint uVar86;
  int iVar87;
  int iVar88;
  uint uVar89;
  int iVar95;
  uint uVar96;
  int iVar97;
  uint uVar98;
  uint uVar99;
  int iVar100;
  uint uVar101;
  int iVar102;
  uint uVar103;
  undefined1 auVar90 [12];
  uint uVar94;
  undefined1 auVar91 [16];
  uint uVar104;
  int iVar105;
  uint uVar106;
  int iVar107;
  uint uVar108;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  uint uVar109;
  uint uVar112;
  uint uVar113;
  uint uVar114;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  uint uVar117;
  uint uVar121;
  uint uVar127;
  uint uVar132;
  undefined1 auVar122 [16];
  uint uVar137;
  undefined1 auVar123 [16];
  uint uVar118;
  uint uVar119;
  uint uVar120;
  uint uVar128;
  uint uVar129;
  uint uVar130;
  uint uVar133;
  uint uVar134;
  uint uVar135;
  uint uVar138;
  uint uVar139;
  uint uVar140;
  undefined1 auVar124 [16];
  uint uVar131;
  uint uVar136;
  uint uVar141;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  uint uVar142;
  uint uVar143;
  uint uVar144;
  uint uVar149;
  uint uVar151;
  uint uVar152;
  uint uVar154;
  undefined1 auVar145 [16];
  uint uVar155;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  uint uVar150;
  uint uVar153;
  uint uVar156;
  undefined1 auVar148 [16];
  uint uVar157;
  uint uVar158;
  uint uVar159;
  uint uVar160;
  uint uVar161;
  uint uVar162;
  uint uVar165;
  uint uVar166;
  uint uVar167;
  uint uVar168;
  uint uVar169;
  uint uVar170;
  uint uVar171;
  uint uVar172;
  uint uVar173;
  uint uVar174;
  uint uVar175;
  uint uVar176;
  uint uVar177;
  uint uVar178;
  uint uVar179;
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined8 local_2708;
  undefined8 uStack_2700;
  uint local_263c;
  undefined1 local_2638 [16];
  undefined1 local_2628 [16];
  float local_2618;
  float fStack_2614;
  float fStack_2610;
  undefined4 uStack_260c;
  undefined1 local_2608 [16];
  undefined1 local_25f8 [16];
  undefined1 local_25e8 [16];
  undefined1 local_25d8 [16];
  undefined1 local_25c8 [16];
  undefined1 local_25b8 [16];
  undefined1 local_25a8 [16];
  undefined1 local_2598 [16];
  undefined1 local_2588 [16];
  undefined1 local_2578 [384];
  uint local_23f8 [2];
  undefined8 auStack_23f0 [63];
  int local_21f8;
  CollideConvexVsTriangles local_21e8 [8];
  long local_21e0;
  float local_21b8;
  float fStack_21b4;
  float fStack_21b0;
  float local_2108;
  float fStack_2104;
  float fStack_2100;
  float local_20f8;
  float fStack_20f4;
  float fStack_20f0;
  byte local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::CollideConvexVsTriangles::CollideConvexVsTriangles(local_21e8,param_1);
  lVar11 = *(long *)(param_2 + 0x48);
  local_21f8 = 0;
  fVar2 = *(float *)(lVar11 + 0x20);
  bVar9 = *(byte *)(lVar11 + 0x1c);
  uVar57 = *(uint *)(lVar11 + 0x18);
  fVar3 = *(float *)(lVar11 + 0x30);
  fVar4 = *(float *)(lVar11 + 0x24);
  fVar5 = *(float *)(lVar11 + 0x34);
  local_23f8[0] = uVar57;
  fVar6 = *(float *)(lVar11 + 0x28);
  fVar7 = *(float *)(lVar11 + 0x2c);
  bVar42 = (byte)in_R9[1];
  uVar10 = *in_R9;
  bVar43 = bVar42 + bVar9;
  uVar61 = __LC9;
  uVar62 = _UNK_00112494;
  uVar63 = _UNK_00112498;
  uVar86 = _UNK_0011249c;
  do {
    uVar52 = uVar57 >> 0x1c;
    if (uVar52 == 0) {
      auVar91._4_4_ = _UNK_001124c4;
      auVar91._0_4_ = __LC14;
      auVar91._8_4_ = _UNK_001124c8;
      auVar91._12_4_ = _UNK_001124cc;
      lVar44 = (long)local_21f8;
      pauVar38 = (undefined1 (*) [16])((ulong)(uVar57 * 4) + lVar11);
      auVar70 = *pauVar38;
      auVar17._10_2_ = 0;
      auVar17._0_10_ = auVar70._0_10_;
      auVar17._12_2_ = auVar70._6_2_;
      auVar23._8_2_ = auVar70._4_2_;
      auVar23._0_8_ = auVar70._0_8_;
      auVar23._10_4_ = auVar17._10_4_;
      auVar32._6_8_ = 0;
      auVar32._0_6_ = auVar23._8_6_;
      auVar122._6_8_ = SUB148(auVar32 << 0x40,6);
      auVar122._4_2_ = auVar70._2_2_;
      auVar122._0_2_ = auVar70._0_2_;
      auVar122._2_2_ = 0;
      auVar122._14_2_ = 0;
      auVar91 = auVar91 & auVar122;
      auVar70 = __LC11 & auVar122;
      auVar122 = auVar122 & __LC19;
      iVar64 = auVar70._0_4_ * 0x2000;
      iVar74 = auVar70._4_4_ * 0x2000;
      iVar78 = auVar70._8_4_ * 0x2000;
      iVar82 = auVar70._12_4_ * 0x2000;
      uVar158 = __LC12 + iVar64;
      uVar165 = _UNK_001124b4 + iVar74;
      uVar170 = _UNK_001124b8 + iVar78;
      uVar175 = _UNK_001124bc + iVar82;
      uVar109 = (int)-(uint)(auVar91._0_4_ == __LC14) >> 0x1f;
      uVar112 = (int)-(uint)(auVar91._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar113 = (int)-(uint)(auVar91._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar114 = (int)-(uint)(auVar91._12_4_ == _UNK_001124cc) >> 0x1f;
      uVar86 = (int)-(uint)(auVar91._0_4_ == 0) >> 0x1f;
      uVar94 = (int)-(uint)(auVar91._4_4_ == 0) >> 0x1f;
      uVar99 = (int)-(uint)(auVar91._8_4_ == 0) >> 0x1f;
      uVar104 = (int)-(uint)(auVar91._12_4_ == 0) >> 0x1f;
      auVar70 = *pauVar38;
      uVar57 = auVar70._8_4_;
      auVar68._0_8_ = auVar70._8_8_;
      auVar68._8_4_ = uVar57;
      auVar145._4_4_ = _UNK_001124c4;
      auVar145._0_4_ = __LC14;
      auVar145._8_4_ = _UNK_001124c8;
      auVar145._12_4_ = _UNK_001124cc;
      auVar12._10_2_ = 0;
      auVar12._0_10_ = auVar68._0_10_;
      auVar12._12_2_ = auVar70._14_2_;
      auVar18._8_2_ = auVar70._12_2_;
      auVar18._0_8_ = auVar68._0_8_;
      auVar18._10_4_ = auVar12._10_4_;
      auVar33._6_8_ = 0;
      auVar33._0_6_ = auVar18._8_6_;
      auVar24._4_2_ = auVar70._10_2_;
      auVar24._0_4_ = uVar57;
      auVar24._6_8_ = SUB148(auVar33 << 0x40,6);
      auVar71._0_4_ = uVar57 & 0xffff;
      auVar71._4_10_ = auVar24._4_10_;
      auVar71._14_2_ = 0;
      auVar145 = auVar145 & auVar71;
      auVar70 = __LC11 & auVar71;
      auVar71 = auVar71 & __LC19;
      iVar87 = auVar70._0_4_ * 0x2000;
      iVar95 = auVar70._4_4_ * 0x2000;
      iVar100 = auVar70._8_4_ * 0x2000;
      iVar105 = auVar70._12_4_ * 0x2000;
      uVar159 = __LC12 + iVar87;
      uVar166 = _UNK_001124b4 + iVar95;
      uVar171 = _UNK_001124b8 + iVar100;
      uVar176 = _UNK_001124bc + iVar105;
      uVar117 = (int)-(uint)(auVar145._0_4_ == __LC14) >> 0x1f;
      uVar127 = (int)-(uint)(auVar145._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar132 = (int)-(uint)(auVar145._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar137 = (int)-(uint)(auVar145._12_4_ == _UNK_001124cc) >> 0x1f;
      uVar142 = (int)-(uint)(auVar145._0_4_ == 0) >> 0x1f;
      uVar149 = (int)-(uint)(auVar145._4_4_ == 0) >> 0x1f;
      uVar152 = (int)-(uint)(auVar145._8_4_ == 0) >> 0x1f;
      uVar155 = (int)-(uint)(auVar145._12_4_ == 0) >> 0x1f;
      auVar70 = pauVar38[1];
      auVar123._4_4_ = _UNK_001124c4;
      auVar123._0_4_ = __LC14;
      auVar123._8_4_ = _UNK_001124c8;
      auVar123._12_4_ = _UNK_001124cc;
      auVar13._10_2_ = 0;
      auVar13._0_10_ = auVar70._0_10_;
      auVar13._12_2_ = auVar70._6_2_;
      auVar19._8_2_ = auVar70._4_2_;
      auVar19._0_8_ = auVar70._0_8_;
      auVar19._10_4_ = auVar13._10_4_;
      auVar34._6_8_ = 0;
      auVar34._0_6_ = auVar19._8_6_;
      auVar146._6_8_ = SUB148(auVar34 << 0x40,6);
      auVar146._4_2_ = auVar70._2_2_;
      auVar146._0_2_ = auVar70._0_2_;
      auVar146._2_2_ = 0;
      auVar146._14_2_ = 0;
      auVar70 = __LC11 & auVar146;
      auVar123 = auVar123 & auVar146;
      auVar146 = auVar146 & __LC19;
      iVar65 = auVar70._0_4_ * 0x2000;
      iVar75 = auVar70._4_4_ * 0x2000;
      iVar79 = auVar70._8_4_ * 0x2000;
      iVar83 = auVar70._12_4_ * 0x2000;
      uVar160 = __LC12 + iVar65;
      uVar167 = _UNK_001124b4 + iVar75;
      uVar172 = _UNK_001124b8 + iVar79;
      uVar177 = _UNK_001124bc + iVar83;
      uVar52 = (int)-(uint)(auVar123._0_4_ == __LC14) >> 0x1f;
      uVar96 = (int)-(uint)(auVar123._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar101 = (int)-(uint)(auVar123._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar106 = (int)-(uint)(auVar123._12_4_ == _UNK_001124cc) >> 0x1f;
      uVar118 = (int)-(uint)(auVar123._0_4_ == 0) >> 0x1f;
      uVar128 = (int)-(uint)(auVar123._4_4_ == 0) >> 0x1f;
      uVar133 = (int)-(uint)(auVar123._8_4_ == 0) >> 0x1f;
      uVar138 = (int)-(uint)(auVar123._12_4_ == 0) >> 0x1f;
      auVar70 = pauVar38[1];
      uVar57 = auVar70._8_4_;
      auVar69._0_8_ = auVar70._8_8_;
      auVar69._8_4_ = uVar57;
      auVar147._4_4_ = _UNK_001124c4;
      auVar147._0_4_ = __LC14;
      auVar147._8_4_ = _UNK_001124c8;
      auVar147._12_4_ = _UNK_001124cc;
      auVar14._10_2_ = 0;
      auVar14._0_10_ = auVar69._0_10_;
      auVar14._12_2_ = auVar70._14_2_;
      auVar20._8_2_ = auVar70._12_2_;
      auVar20._0_8_ = auVar69._0_8_;
      auVar20._10_4_ = auVar14._10_4_;
      auVar35._6_8_ = 0;
      auVar35._0_6_ = auVar20._8_6_;
      auVar25._4_2_ = auVar70._10_2_;
      auVar25._0_4_ = uVar57;
      auVar25._6_8_ = SUB148(auVar35 << 0x40,6);
      auVar72._0_4_ = uVar57 & 0xffff;
      auVar72._4_10_ = auVar25._4_10_;
      auVar72._14_2_ = 0;
      auVar147 = auVar147 & auVar72;
      auVar70 = __LC11 & auVar72;
      auVar72 = auVar72 & __LC19;
      iVar88 = auVar70._0_4_ * 0x2000;
      iVar97 = auVar70._4_4_ * 0x2000;
      iVar102 = auVar70._8_4_ * 0x2000;
      iVar107 = auVar70._12_4_ * 0x2000;
      uVar161 = __LC12 + iVar88;
      uVar168 = _UNK_001124b4 + iVar97;
      uVar173 = _UNK_001124b8 + iVar102;
      uVar178 = _UNK_001124bc + iVar107;
      uVar119 = (int)-(uint)(auVar147._0_4_ == __LC14) >> 0x1f;
      uVar129 = (int)-(uint)(auVar147._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar134 = (int)-(uint)(auVar147._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar139 = (int)-(uint)(auVar147._12_4_ == _UNK_001124cc) >> 0x1f;
      uVar143 = (int)-(uint)(auVar147._0_4_ == 0) >> 0x1f;
      uVar150 = (int)-(uint)(auVar147._4_4_ == 0) >> 0x1f;
      uVar153 = (int)-(uint)(auVar147._8_4_ == 0) >> 0x1f;
      uVar156 = (int)-(uint)(auVar147._12_4_ == 0) >> 0x1f;
      auVar70 = pauVar38[2];
      auVar15._10_2_ = 0;
      auVar15._0_10_ = auVar70._0_10_;
      auVar15._12_2_ = auVar70._6_2_;
      auVar21._8_2_ = auVar70._4_2_;
      auVar21._0_8_ = auVar70._0_8_;
      auVar21._10_4_ = auVar15._10_4_;
      auVar36._6_8_ = 0;
      auVar36._0_6_ = auVar21._8_6_;
      auVar26._4_2_ = auVar70._2_2_;
      auVar26._0_4_ = auVar70._0_4_;
      auVar26._6_8_ = SUB148(auVar36 << 0x40,6);
      auVar148._0_4_ = auVar70._0_4_ & 0xffff;
      auVar148._4_10_ = auVar26._4_10_;
      auVar148._14_2_ = 0;
      auVar70._4_4_ = _UNK_001124c4;
      auVar70._0_4_ = __LC14;
      auVar70._8_4_ = _UNK_001124c8;
      auVar70._12_4_ = _UNK_001124cc;
      auVar70 = auVar70 & auVar148;
      auVar91 = __LC11 & auVar148;
      auVar148 = auVar148 & __LC19;
      iVar66 = auVar91._0_4_ * 0x2000;
      iVar76 = auVar91._4_4_ * 0x2000;
      iVar80 = auVar91._8_4_ * 0x2000;
      iVar84 = auVar91._12_4_ * 0x2000;
      uVar162 = __LC12 + iVar66;
      uVar169 = _UNK_001124b4 + iVar76;
      uVar174 = _UNK_001124b8 + iVar80;
      uVar179 = _UNK_001124bc + iVar84;
      uVar89 = (int)-(uint)(auVar70._0_4_ == __LC14) >> 0x1f;
      uVar98 = (int)-(uint)(auVar70._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar103 = (int)-(uint)(auVar70._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar108 = (int)-(uint)(auVar70._12_4_ == _UNK_001124cc) >> 0x1f;
      uVar120 = (int)-(uint)(auVar70._0_4_ == 0) >> 0x1f;
      uVar130 = (int)-(uint)(auVar70._4_4_ == 0) >> 0x1f;
      uVar135 = (int)-(uint)(auVar70._8_4_ == 0) >> 0x1f;
      uVar140 = (int)-(uint)(auVar70._12_4_ == 0) >> 0x1f;
      auVar124._4_4_ = _UNK_001124c4;
      auVar124._0_4_ = __LC14;
      auVar124._8_4_ = _UNK_001124c8;
      auVar124._12_4_ = _UNK_001124cc;
      auVar70 = pauVar38[2];
      uVar57 = auVar70._8_4_;
      auVar90._0_8_ = auVar70._8_8_;
      auVar90._8_4_ = uVar57;
      auVar16._10_2_ = 0;
      auVar16._0_10_ = auVar90._0_10_;
      auVar16._12_2_ = auVar70._14_2_;
      auVar22._8_2_ = auVar70._12_2_;
      auVar22._0_8_ = auVar90._0_8_;
      auVar22._10_4_ = auVar16._10_4_;
      auVar37._6_8_ = 0;
      auVar37._0_6_ = auVar22._8_6_;
      auVar27._4_2_ = auVar70._10_2_;
      auVar27._0_4_ = uVar57;
      auVar27._6_8_ = SUB148(auVar37 << 0x40,6);
      auVar115._0_4_ = uVar57 & 0xffff;
      auVar115._4_10_ = auVar27._4_10_;
      auVar115._14_2_ = 0;
      auVar124 = auVar124 & auVar115;
      auVar70 = __LC11 & auVar115;
      auVar115 = __LC19 & auVar115;
      iVar67 = auVar70._0_4_ * 0x2000;
      iVar77 = auVar70._4_4_ * 0x2000;
      iVar81 = auVar70._8_4_ * 0x2000;
      iVar85 = auVar70._12_4_ * 0x2000;
      uVar144 = __LC12 + iVar67;
      uVar151 = _UNK_001124b4 + iVar77;
      uVar154 = _UNK_001124b8 + iVar81;
      uVar157 = _UNK_001124bc + iVar85;
      uVar57 = (int)-(uint)(__LC14 == auVar124._0_4_) >> 0x1f;
      uVar61 = (int)-(uint)(_UNK_001124c4 == auVar124._4_4_) >> 0x1f;
      uVar62 = (int)-(uint)(_UNK_001124c8 == auVar124._8_4_) >> 0x1f;
      uVar63 = (int)-(uint)(_UNK_001124cc == auVar124._12_4_) >> 0x1f;
      uVar121 = (int)-(uint)(auVar124._0_4_ == 0) >> 0x1f;
      uVar131 = (int)-(uint)(auVar124._4_4_ == 0) >> 0x1f;
      uVar136 = (int)-(uint)(auVar124._8_4_ == 0) >> 0x1f;
      uVar141 = (int)-(uint)(auVar124._12_4_ == 0) >> 0x1f;
      auVar70 = pauVar38[3];
      auVar92._0_8_ =
           CONCAT44((float)(auVar122._4_4_ << 0x10 |
                           (uint)((float)(iVar74 + _UNK_001124e4) + _LC18) & uVar94 |
                           ~uVar94 & (uVar112 & (uVar165 | _UNK_001124d4) | ~uVar112 & uVar165)) *
                    local_21b8,
                    (float)(auVar122._0_4_ << 0x10 |
                           (uint)((float)(iVar64 + __LC16) + _LC18) & uVar86 |
                           ~uVar86 & (uVar109 & (uVar158 | __LC15) | ~uVar109 & uVar158)) *
                    local_21b8);
      auVar92._8_4_ =
           (float)(auVar122._8_4_ << 0x10 |
                  (uint)((float)(iVar78 + _UNK_001124e8) + _LC18) & uVar99 |
                  ~uVar99 & (uVar113 & (uVar170 | _UNK_001124d8) | ~uVar113 & uVar170)) * local_21b8
      ;
      auVar92._12_4_ =
           (float)(auVar122._12_4_ << 0x10 |
                  (uint)((float)(iVar82 + _UNK_001124ec) + _LC18) & uVar104 |
                  ~uVar104 & (uVar114 & (uVar175 | _UNK_001124dc) | ~uVar114 & uVar175)) *
           local_21b8;
      auVar58._0_4_ =
           local_21b8 *
           (float)(auVar72._0_4_ << 0x10 |
                  (uint)((float)(iVar88 + __LC16) + _LC18) & uVar143 |
                  ~uVar143 & (uVar119 & (uVar161 | __LC15) | ~uVar119 & uVar161));
      auVar58._4_4_ =
           local_21b8 *
           (float)(auVar72._4_4_ << 0x10 |
                  (uint)((float)(iVar97 + _UNK_001124e4) + _LC18) & uVar150 |
                  ~uVar150 & (uVar129 & (uVar168 | _UNK_001124d4) | ~uVar129 & uVar168));
      auVar58._8_4_ =
           local_21b8 *
           (float)(auVar72._8_4_ << 0x10 |
                  (uint)((float)(iVar102 + _UNK_001124e8) + _LC18) & uVar153 |
                  ~uVar153 & (uVar134 & (uVar173 | _UNK_001124d8) | ~uVar134 & uVar173));
      auVar58._12_4_ =
           local_21b8 *
           (float)(auVar72._12_4_ << 0x10 |
                  (uint)((float)(iVar107 + _UNK_001124ec) + _LC18) & uVar156 |
                  ~uVar156 & (uVar139 & (uVar178 | _UNK_001124dc) | ~uVar139 & uVar178));
      auVar180._0_4_ =
           (float)(auVar148._0_4_ << 0x10 |
                  ~uVar120 & (uVar89 & (uVar162 | __LC15) | ~uVar89 & uVar162) |
                  (uint)((float)(iVar66 + __LC16) + _LC18) & uVar120) * fStack_21b4;
      auVar180._4_4_ =
           (float)(auVar148._4_4_ << 0x10 |
                  ~uVar130 & (uVar98 & (uVar169 | _UNK_001124d4) | ~uVar98 & uVar169) |
                  (uint)((float)(iVar76 + _UNK_001124e4) + _LC18) & uVar130) * fStack_21b4;
      auVar180._8_4_ =
           (float)(auVar148._8_4_ << 0x10 |
                  ~uVar135 & (uVar103 & (uVar174 | _UNK_001124d8) | ~uVar103 & uVar174) |
                  (uint)((float)(iVar80 + _UNK_001124e8) + _LC18) & uVar135) * fStack_21b4;
      auVar180._12_4_ =
           (float)(auVar148._12_4_ << 0x10 |
                  ~uVar140 & (uVar108 & (uVar179 | _UNK_001124dc) | ~uVar108 & uVar179) |
                  (uint)((float)(iVar84 + _UNK_001124ec) + _LC18) & uVar140) * fStack_21b4;
      auVar116._0_4_ =
           (float)(auVar115._0_4_ << 0x10 |
                  ~uVar121 & (uVar57 & (uVar144 | __LC15) | ~uVar57 & uVar144) |
                  (uint)((float)(iVar67 + __LC16) + _LC18) & uVar121) * fStack_21b0;
      auVar116._4_4_ =
           (float)(auVar115._4_4_ << 0x10 |
                  ~uVar131 & (uVar61 & (uVar151 | _UNK_001124d4) | ~uVar61 & uVar151) |
                  (uint)((float)(iVar77 + _UNK_001124e4) + _LC18) & uVar131) * fStack_21b0;
      auVar116._8_4_ =
           (float)(auVar115._8_4_ << 0x10 |
                  ~uVar136 & (uVar62 & (uVar154 | _UNK_001124d8) | ~uVar62 & uVar154) |
                  (uint)((float)(iVar81 + _UNK_001124e8) + _LC18) & uVar136) * fStack_21b0;
      auVar116._12_4_ =
           (float)(auVar115._12_4_ << 0x10 |
                  ~uVar141 & (uVar63 & (uVar157 | _UNK_001124dc) | ~uVar63 & uVar157) |
                  (uint)((float)(iVar85 + _UNK_001124ec) + _LC18) & uVar141) * fStack_21b0;
      auVar183._8_4_ = auVar92._8_4_;
      auVar183._0_8_ = auVar92._0_8_;
      auVar183._12_4_ = auVar92._12_4_;
      auVar184 = minps(auVar183,auVar58);
      auVar145 = maxps(auVar92,auVar58);
      auVar59._0_8_ =
           CONCAT44((float)(auVar71._4_4_ << 0x10 |
                           (uint)((float)(iVar95 + _UNK_001124e4) + _LC18) & uVar149 |
                           ~uVar149 & (uVar127 & (uVar166 | _UNK_001124d4) | ~uVar127 & uVar166)) *
                    fStack_21b4,
                    (float)(auVar71._0_4_ << 0x10 |
                           (uint)((float)(iVar87 + __LC16) + _LC18) & uVar142 |
                           ~uVar142 & (uVar117 & (uVar159 | __LC15) | ~uVar117 & uVar159)) *
                    fStack_21b4);
      auVar59._8_4_ =
           (float)(auVar71._8_4_ << 0x10 |
                  (uint)((float)(iVar100 + _UNK_001124e8) + _LC18) & uVar152 |
                  ~uVar152 & (uVar132 & (uVar171 | _UNK_001124d8) | ~uVar132 & uVar171)) *
           fStack_21b4;
      auVar59._12_4_ =
           (float)(auVar71._12_4_ << 0x10 |
                  (uint)((float)(iVar105 + _UNK_001124ec) + _LC18) & uVar155 |
                  ~uVar155 & (uVar137 & (uVar176 | _UNK_001124dc) | ~uVar137 & uVar176)) *
           fStack_21b4;
      auVar125._0_8_ =
           CONCAT44((float)(auVar146._4_4_ << 0x10 |
                           (uint)((float)(iVar75 + _UNK_001124e4) + _LC18) & uVar128 |
                           ~uVar128 & (uVar96 & (uVar167 | _UNK_001124d4) | ~uVar96 & uVar167)) *
                    fStack_21b0,
                    (float)(auVar146._0_4_ << 0x10 |
                           (uint)((float)(iVar65 + __LC16) + _LC18) & uVar118 |
                           ~uVar118 & (uVar52 & (uVar160 | __LC15) | ~uVar52 & uVar160)) *
                    fStack_21b0);
      auVar125._8_4_ =
           (float)(auVar146._8_4_ << 0x10 |
                  (uint)((float)(iVar79 + _UNK_001124e8) + _LC18) & uVar133 |
                  ~uVar133 & (uVar101 & (uVar172 | _UNK_001124d8) | ~uVar101 & uVar172)) *
           fStack_21b0;
      auVar125._12_4_ =
           (float)(auVar146._12_4_ << 0x10 |
                  (uint)((float)(iVar83 + _UNK_001124ec) + _LC18) & uVar138 |
                  ~uVar138 & (uVar106 & (uVar177 | _UNK_001124dc) | ~uVar106 & uVar177)) *
           fStack_21b0;
      auVar181._8_4_ = auVar59._8_4_;
      auVar181._0_8_ = auVar59._0_8_;
      auVar181._12_4_ = auVar59._12_4_;
      auVar91 = maxps(auVar59,auVar180);
      auVar124 = minps(auVar181,auVar180);
      auVar163._8_4_ = auVar125._8_4_;
      auVar163._0_8_ = auVar125._0_8_;
      auVar163._12_4_ = auVar125._12_4_;
      auVar123 = maxps(auVar125,auVar116);
      auVar147 = minps(auVar163,auVar116);
      auVar182._4_4_ = -(uint)(local_20f8 < auVar184._4_4_);
      auVar182._0_4_ = -(uint)(local_20f8 < auVar184._0_4_);
      auVar73._4_4_ = -(uint)(auVar91._4_4_ < fStack_2104);
      auVar73._0_4_ = -(uint)(auVar91._0_4_ < fStack_2104);
      auVar182._8_4_ = -(uint)(local_20f8 < auVar184._8_4_);
      auVar182._12_4_ = -(uint)(local_20f8 < auVar184._12_4_);
      auVar93._4_4_ = -(uint)(auVar145._4_4_ < local_2108);
      auVar93._0_4_ = -(uint)(auVar145._0_4_ < local_2108);
      auVar93._8_4_ = -(uint)(auVar145._8_4_ < local_2108);
      auVar93._12_4_ = -(uint)(auVar145._12_4_ < local_2108);
      auVar126._4_4_ = -(uint)(fStack_20f4 < auVar124._4_4_);
      auVar126._0_4_ = -(uint)(fStack_20f4 < auVar124._0_4_);
      auVar126._8_4_ = -(uint)(fStack_20f4 < auVar124._8_4_);
      auVar126._12_4_ = -(uint)(fStack_20f4 < auVar124._12_4_);
      auVar110._4_4_ = -(uint)(fStack_20f0 < auVar147._4_4_);
      auVar110._0_4_ = -(uint)(fStack_20f0 < auVar147._0_4_);
      auVar110._8_4_ = -(uint)(fStack_20f0 < auVar147._8_4_);
      auVar110._12_4_ = -(uint)(fStack_20f0 < auVar147._12_4_);
      auVar73._8_4_ = -(uint)(auVar91._8_4_ < fStack_2104);
      auVar73._12_4_ = -(uint)(auVar91._12_4_ < fStack_2104);
      auVar184._8_4_ = 0xffffffff;
      auVar184._0_8_ = 0xffffffffffffffff;
      auVar184._12_4_ = 0xffffffff;
      auVar164._4_4_ = -(uint)(auVar123._4_4_ < fStack_2100);
      auVar164._0_4_ = -(uint)(auVar123._0_4_ < fStack_2100);
      auVar164._8_4_ = -(uint)(auVar123._8_4_ < fStack_2100);
      auVar164._12_4_ = -(uint)(auVar123._12_4_ < fStack_2100);
      uVar86 = auVar70._12_4_;
      auVar184 = (auVar73 | auVar126 | auVar93 | auVar182 | auVar164 | auVar110) ^ auVar184;
      uVar49 = movmskps((int)lVar11,auVar184);
      uVar57 = auVar184._8_4_ >> 0x1f;
      uVar61 = uVar57 & auVar70._8_4_ | ~uVar57 & uVar86;
      uVar62 = auVar184._4_4_ >> 0x1f;
      uVar63 = auVar184._0_4_ >> 0x1f;
      uVar57 = auVar70._4_4_ & uVar62 | ~uVar62 & uVar61;
      uVar61 = uVar61 & uVar62 | ~uVar62 & uVar86;
      auVar60._0_4_ = auVar70._0_4_ & uVar63;
      auVar60._4_4_ = uVar57 & uVar63;
      auVar60._8_4_ = uVar61 & uVar63;
      auVar60._12_4_ = uVar86 & uVar63;
      auVar111._0_4_ = ~uVar63 & uVar57;
      auVar111._4_4_ = ~uVar63 & uVar61;
      auVar111._8_4_ = ~uVar63 & uVar86;
      auVar111._12_4_ = ~uVar63 & uVar86;
      iVar64 = __popcountdi2(CONCAT44((int)((ulong)lVar11 >> 0x20),uVar49));
      local_2708 = SUB168(auVar60 | auVar111,0);
      uStack_2700 = SUB168(auVar60 | auVar111,8);
      *(undefined8 *)(local_23f8 + lVar44) = local_2708;
      *(undefined8 *)((long)auStack_23f0 + lVar44 * 4) = uStack_2700;
      local_21f8 = local_21f8 + iVar64;
      uVar61 = __LC9;
      uVar62 = _UNK_00112494;
      uVar63 = _UNK_00112498;
      uVar86 = _UNK_0011249c;
      if (*(float *)(local_21e0 + 8) <= _LC20) goto LAB_00101f80;
    }
    else {
      if (uVar52 == 0xf) {
LAB_00101a02:
        fVar8 = *(float *)(local_21e0 + 8);
      }
      else {
        pauVar38 = (undefined1 (*) [16])local_2578;
        piVar50 = (int *)((ulong)((uVar57 & 0xfffffff) * 4) + lVar11);
        puVar54 = (uint *)(piVar50 + 1);
        uVar94 = *piVar50 * 4 & 0x7ffffffc;
        puVar39 = puVar54 + (ulong)(uVar52 + 3 >> 2) * 4;
        lVar44 = (ulong)uVar94 + 4;
        pauVar41 = pauVar38;
        puVar46 = puVar54;
        uVar89 = uVar52;
        do {
          uVar96 = *puVar46;
          uVar98 = puVar46[1];
          uVar99 = puVar46[2];
          uVar53 = (ulong)(uVar96 >> 0xd & 0x7f8);
          uVar45 = (ulong)((uVar96 >> 0x18) << 3);
          uVar101 = *(uint *)((long)piVar50 + uVar53 + uVar94);
          uVar103 = *(uint *)((long)piVar50 + uVar45 + uVar94);
          uVar47 = (ulong)((uVar96 >> 8 & 0xff) << 3);
          uVar51 = (ulong)(uVar96 * 8 & 0x7f8);
          uVar96 = *(uint *)((long)piVar50 + uVar45 + lVar44);
          uVar104 = *(uint *)((long)piVar50 + uVar51 + uVar94);
          uVar106 = *(uint *)((long)piVar50 + uVar47 + uVar94);
          uVar108 = *(uint *)((long)piVar50 + uVar51 + lVar44);
          uVar45 = (ulong)((uVar98 >> 0x18) << 3);
          uVar56 = (ulong)(uVar98 >> 0xd & 0x7f8);
          uVar109 = *(uint *)((long)piVar50 + uVar45 + lVar44);
          uVar112 = *(uint *)((long)piVar50 + uVar45 + uVar94);
          uVar113 = *(uint *)((long)piVar50 + uVar53 + lVar44);
          uVar45 = (ulong)(uVar99 >> 0xd & 0x7f8);
          uVar51 = (ulong)((uVar99 >> 0x18) << 3);
          uVar114 = *(uint *)((long)piVar50 + uVar47 + lVar44);
          uVar47 = (ulong)((uVar98 >> 8 & 0xff) * 8);
          uVar53 = (ulong)(uVar98 * 8 & 0x7f8);
          uVar98 = *(uint *)((long)piVar50 + uVar47 + uVar94);
          uVar117 = *(uint *)((long)piVar50 + uVar53 + uVar94);
          uVar118 = *(uint *)((long)piVar50 + uVar53 + lVar44);
          uVar119 = *(uint *)((long)piVar50 + uVar56 + uVar94);
          uVar120 = *(uint *)((long)piVar50 + uVar56 + lVar44);
          uVar121 = *(uint *)((long)piVar50 + uVar47 + lVar44);
          uVar127 = *(uint *)((long)piVar50 + uVar45 + uVar94);
          uVar53 = (ulong)(uVar99 * 8 & 0x7f8);
          uVar47 = (ulong)((uVar99 >> 8 & 0xff) << 3);
          uVar99 = *(uint *)((long)piVar50 + uVar47 + lVar44);
          uVar128 = *(uint *)((long)piVar50 + uVar53 + uVar94);
          uVar129 = *(uint *)((long)piVar50 + uVar51 + uVar94);
          uVar130 = *(uint *)((long)piVar50 + uVar47 + uVar94);
          uVar131 = *(uint *)((long)piVar50 + uVar45 + lVar44);
          uVar132 = *(uint *)((long)piVar50 + uVar51 + lVar44);
          uVar133 = *(uint *)((long)piVar50 + uVar53 + lVar44);
          local_2628._4_4_ = (float)(uVar106 >> 0x15 | (uVar114 >> 0x15) << 0xb) * fVar3 + fVar4;
          local_2628._0_4_ = (float)(int)(uVar106 & uVar62) * fVar7 + fVar2;
          local_2628._8_4_ = (float)(int)(uVar114 & uVar62) * fVar5 + fVar6;
          local_2628._12_4_ = 0;
          local_2638._4_4_ = (float)(uVar104 >> 0x15 | (uVar108 >> 0x15) << 0xb) * fVar3 + fVar4;
          local_2638._0_4_ = (float)(int)(uVar104 & uVar61) * fVar7 + fVar2;
          local_2638._8_4_ = (float)(int)(uVar108 & uVar61) * fVar5 + fVar6;
          local_2638._12_4_ = 0;
          local_2608._4_4_ = (float)(uVar103 >> 0x15 | (uVar96 >> 0x15) << 0xb) * fVar3 + fVar4;
          local_2608._0_4_ = (float)(int)(uVar103 & uVar86) * fVar7 + fVar2;
          local_2608._8_4_ = (float)(int)(uVar96 & uVar86) * fVar5 + fVar6;
          local_2608._12_4_ = 0;
          local_2618 = (float)(int)(uVar101 & uVar63) * fVar7 + fVar2;
          fStack_2614 = (float)(uVar101 >> 0x15 | (uVar113 >> 0x15) << 0xb) * fVar3 + fVar4;
          fStack_2610 = (float)(int)(uVar113 & uVar63) * fVar5 + fVar6;
          uStack_260c = 0;
          local_25e8._4_4_ = (float)(uVar98 >> 0x15 | (uVar121 >> 0x15) << 0xb) * fVar3 + fVar4;
          local_25e8._0_4_ = (float)(int)(uVar98 & uVar62) * fVar7 + fVar2;
          local_25e8._8_4_ = (float)(int)(uVar121 & uVar62) * fVar5 + fVar6;
          local_25e8._12_4_ = 0;
          local_25c8._4_4_ = (float)(uVar112 >> 0x15 | (uVar109 >> 0x15) << 0xb) * fVar3 + fVar4;
          local_25c8._0_4_ = (float)(int)(uVar112 & uVar86) * fVar7 + fVar2;
          local_25c8._8_4_ = (float)(int)(uVar109 & uVar86) * fVar5 + fVar6;
          local_25c8._12_4_ = 0;
          local_25d8._4_4_ = (float)(uVar119 >> 0x15 | (uVar120 >> 0x15) << 0xb) * fVar3 + fVar4;
          local_25d8._0_4_ = (float)(int)(uVar119 & uVar63) * fVar7 + fVar2;
          local_25d8._8_4_ = (float)(int)(uVar120 & uVar63) * fVar5 + fVar6;
          local_25d8._12_4_ = 0;
          local_25a8._4_4_ = (float)(uVar130 >> 0x15 | (uVar99 >> 0x15) << 0xb) * fVar3 + fVar4;
          local_25a8._0_4_ = (float)(int)(uVar130 & uVar62) * fVar7 + fVar2;
          local_25a8._8_4_ = (float)(int)(uVar99 & uVar62) * fVar5 + fVar6;
          local_25a8._12_4_ = 0;
          local_25f8._4_4_ = (float)(uVar117 >> 0x15 | (uVar118 >> 0x15) << 0xb) * fVar3 + fVar4;
          local_25f8._0_4_ = (float)(int)(uVar117 & uVar61) * fVar7 + fVar2;
          local_25f8._8_4_ = (float)(int)(uVar118 & uVar61) * fVar5 + fVar6;
          local_25f8._12_4_ = 0;
          local_25b8._4_4_ = (float)(uVar128 >> 0x15 | (uVar133 >> 0x15) << 0xb) * fVar3 + fVar4;
          local_25b8._0_4_ = (float)(int)(uVar128 & uVar61) * fVar7 + fVar2;
          local_25b8._8_4_ = (float)(int)(uVar133 & uVar61) * fVar5 + fVar6;
          local_25b8._12_4_ = 0;
          local_2588._4_4_ = (float)(uVar129 >> 0x15 | (uVar132 >> 0x15) << 0xb) * fVar3 + fVar4;
          local_2588._0_4_ = (float)(int)(uVar129 & uVar86) * fVar7 + fVar2;
          local_2588._8_4_ = (float)(int)(uVar132 & uVar86) * fVar5 + fVar6;
          local_2588._12_4_ = 0;
          local_2598._4_4_ = (float)(uVar127 >> 0x15 | (uVar131 >> 0x15) << 0xb) * fVar3 + fVar4;
          local_2598._0_4_ = (float)(int)(uVar127 & uVar63) * fVar7 + fVar2;
          local_2598._8_4_ = (float)(int)(uVar131 & uVar63) * fVar5 + fVar6;
          local_2598._12_4_ = 0;
          uVar96 = uVar89;
          if (0 < (int)uVar89) {
            lVar48 = 0;
            pauVar40 = pauVar41;
            do {
              pauVar1 = (undefined1 (*) [16])(local_2638 + lVar48);
              uVar28 = *(undefined8 *)(local_25f8 + lVar48);
              uVar29 = *(undefined8 *)(local_25f8 + lVar48 + 8);
              uVar96 = uVar96 - 1;
              uVar30 = *(undefined8 *)(local_25b8 + lVar48);
              uVar31 = *(undefined8 *)(local_25b8 + lVar48 + 8);
              pauVar41 = pauVar40 + 3;
              lVar48 = lVar48 + 0x10;
              *pauVar40 = *pauVar1;
              *(undefined8 *)pauVar40[1] = uVar28;
              *(undefined8 *)(pauVar40[1] + 8) = uVar29;
              *(undefined8 *)pauVar40[2] = uVar30;
              *(undefined8 *)(pauVar40[2] + 8) = uVar31;
              if (3 < (int)(uVar89 - uVar96)) break;
              pauVar40 = pauVar41;
            } while (0 < (int)uVar96);
          }
          uVar89 = uVar96;
          puVar46 = puVar46 + 4;
        } while (puVar46 < puVar39);
        pbVar55 = local_48;
        uVar89 = uVar52;
        do {
          if (0 < (int)uVar89) {
            lVar44 = 1;
            do {
              lVar48 = lVar44;
              uVar89 = uVar89 - 1;
              pbVar55[lVar48 + -1] = *(byte *)((long)puVar54 + lVar48 + 0xb);
              lVar44 = lVar48 + 1;
            } while ((int)lVar48 < 4 && 0 < (int)uVar89);
            pbVar55 = pbVar55 + lVar48;
          }
          puVar54 = puVar54 + 4;
        } while (puVar54 < puVar39);
        pauVar41 = pauVar38 + (int)(uVar52 * 3);
        if (pauVar41 <= pauVar38) goto LAB_00101a02;
        lVar44 = 0;
        do {
          local_263c = (int)lVar44 << (bVar43 & 0x1f) |
                       ~(7 << (bVar43 & 0x1f)) &
                       (~((int)(1L << (bVar9 & 0x3f)) + -1 << (bVar42 & 0x1f)) & uVar10 |
                       (uVar57 & 0xfffffff) << (bVar42 & 0x1f));
          JPH::CollideConvexVsTriangles::Collide
                    (*(undefined8 *)*pauVar38,*(undefined8 *)(*pauVar38 + 8),
                     *(undefined8 *)pauVar38[1],*(undefined8 *)(pauVar38[1] + 8),
                     *(undefined8 *)pauVar38[2],*(undefined8 *)(pauVar38[2] + 8),local_21e8,
                     local_48[lVar44] >> 5,&local_263c);
          fVar8 = *(float *)(local_21e0 + 8);
          if (fVar8 <= _LC20) goto LAB_00101f80;
          pauVar38 = pauVar38 + 3;
          lVar44 = lVar44 + 1;
          uVar61 = __LC9;
          uVar62 = _UNK_00112494;
          uVar63 = _UNK_00112498;
          uVar86 = _UNK_0011249c;
        } while (pauVar38 < pauVar41);
      }
      if (fVar8 <= _LC20) {
LAB_00101f80:
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
    local_21f8 = local_21f8 + -1;
    if (local_21f8 < 0) goto LAB_00101f80;
    uVar57 = local_23f8[local_21f8];
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MeshShape::sCollideSphereVsMesh(JPH::Shape const*, JPH::Shape const*, JPH::Vec3, JPH::Vec3,
   JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator
   const&, JPH::CollideShapeSettings const&, JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::ShapeFilter const&) */

void JPH::MeshShape::sCollideSphereVsMesh(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  uint uVar9;
  long lVar10;
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auVar30 [14];
  undefined1 auVar31 [14];
  undefined1 auVar32 [14];
  undefined1 auVar33 [14];
  undefined1 auVar34 [14];
  undefined1 auVar35 [14];
  undefined1 (*pauVar36) [16];
  uint *puVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  byte bVar40;
  byte bVar41;
  long lVar42;
  ulong uVar43;
  uint *puVar44;
  ulong uVar45;
  long lVar46;
  undefined4 uVar47;
  int *piVar48;
  ulong uVar49;
  uint uVar50;
  ulong uVar51;
  uint *in_R9;
  uint *puVar52;
  byte *pbVar53;
  ulong uVar54;
  undefined8 *puVar55;
  long in_FS_OFFSET;
  uint uVar56;
  float fVar57;
  uint uVar60;
  uint uVar62;
  uint uVar64;
  undefined1 auVar58 [16];
  float fVar61;
  float fVar63;
  float fVar65;
  undefined1 auVar59 [16];
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar81;
  undefined1 auVar70 [12];
  int iVar77;
  undefined1 auVar72 [16];
  int iVar85;
  undefined1 auVar73 [16];
  int iVar78;
  int iVar82;
  undefined1 auVar71 [12];
  int iVar86;
  undefined1 auVar74 [16];
  int iVar79;
  int iVar80;
  int iVar83;
  int iVar84;
  int iVar87;
  int iVar88;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  int iVar89;
  uint uVar90;
  int iVar91;
  uint uVar92;
  float fVar93;
  int iVar99;
  uint uVar100;
  int iVar101;
  uint uVar102;
  uint uVar104;
  int iVar105;
  uint uVar106;
  int iVar107;
  uint uVar108;
  undefined1 auVar94 [12];
  uint uVar98;
  float fVar103;
  float fVar109;
  undefined1 auVar95 [16];
  uint uVar110;
  int iVar111;
  uint uVar112;
  int iVar113;
  uint uVar114;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar115;
  uint uVar116;
  uint uVar121;
  uint uVar122;
  uint uVar123;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  uint uVar124;
  uint uVar128;
  uint uVar133;
  uint uVar138;
  undefined1 auVar129 [16];
  uint uVar139;
  uint uVar144;
  undefined1 auVar130 [16];
  uint uVar125;
  uint uVar126;
  uint uVar127;
  uint uVar134;
  uint uVar135;
  uint uVar136;
  uint uVar140;
  uint uVar141;
  uint uVar142;
  uint uVar145;
  uint uVar146;
  uint uVar147;
  undefined1 auVar131 [16];
  uint uVar137;
  uint uVar143;
  uint uVar148;
  undefined1 auVar132 [16];
  uint uVar149;
  uint uVar150;
  uint uVar151;
  uint uVar156;
  uint uVar158;
  uint uVar159;
  uint uVar161;
  undefined1 auVar152 [16];
  uint uVar162;
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  uint uVar157;
  uint uVar160;
  uint uVar163;
  undefined1 auVar155 [16];
  uint uVar164;
  uint uVar165;
  uint uVar166;
  uint uVar167;
  uint uVar168;
  uint uVar169;
  float fVar170;
  uint uVar172;
  uint uVar173;
  uint uVar174;
  uint uVar175;
  uint uVar176;
  float fVar177;
  uint uVar178;
  uint uVar179;
  uint uVar180;
  uint uVar181;
  uint uVar182;
  float fVar183;
  uint uVar184;
  uint uVar185;
  uint uVar186;
  uint uVar187;
  uint uVar188;
  undefined1 auVar171 [16];
  float fVar189;
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  uint local_52c;
  undefined1 local_528 [16];
  undefined1 local_518 [16];
  undefined1 local_508 [16];
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [16];
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [16];
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  CollideSphereVsTriangles local_468 [8];
  long local_460;
  float local_448;
  float fStack_444;
  float fStack_440;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float local_3dc;
  undefined8 local_3d8 [48];
  uint local_258 [2];
  undefined8 auStack_250 [63];
  int local_58;
  byte local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::CollideSphereVsTriangles::CollideSphereVsTriangles(local_468,param_1);
  lVar10 = *(long *)(param_2 + 0x48);
  local_58 = 0;
  fVar2 = *(float *)(lVar10 + 0x20);
  bVar8 = *(byte *)(lVar10 + 0x1c);
  uVar138 = *(uint *)(lVar10 + 0x18);
  fVar3 = *(float *)(lVar10 + 0x30);
  fVar4 = *(float *)(lVar10 + 0x24);
  fVar5 = *(float *)(lVar10 + 0x34);
  local_258[0] = uVar138;
  fVar6 = *(float *)(lVar10 + 0x28);
  fVar7 = *(float *)(lVar10 + 0x2c);
  bVar40 = (byte)in_R9[1];
  uVar9 = *in_R9;
  bVar41 = bVar40 + bVar8;
  uVar56 = __LC9;
  uVar60 = _UNK_00112494;
  uVar62 = _UNK_00112498;
  uVar64 = _UNK_0011249c;
  do {
    uVar50 = uVar138 >> 0x1c;
    if (uVar50 == 0) {
      auVar95._4_4_ = _UNK_001124c4;
      auVar95._0_4_ = __LC14;
      auVar95._8_4_ = _UNK_001124c8;
      auVar95._12_4_ = _UNK_001124cc;
      lVar42 = (long)local_58;
      pauVar36 = (undefined1 (*) [16])((ulong)(uVar138 * 4) + lVar10);
      auVar72 = *pauVar36;
      auVar16._10_2_ = 0;
      auVar16._0_10_ = auVar72._0_10_;
      auVar16._12_2_ = auVar72._6_2_;
      auVar22._8_2_ = auVar72._4_2_;
      auVar22._0_8_ = auVar72._0_8_;
      auVar22._10_4_ = auVar16._10_4_;
      auVar30._6_8_ = 0;
      auVar30._0_6_ = auVar22._8_6_;
      auVar129._6_8_ = SUB148(auVar30 << 0x40,6);
      auVar129._4_2_ = auVar72._2_2_;
      auVar129._0_2_ = auVar72._0_2_;
      auVar129._2_2_ = 0;
      auVar129._14_2_ = 0;
      auVar95 = auVar95 & auVar129;
      auVar72 = __LC11 & auVar129;
      auVar129 = auVar129 & __LC19;
      iVar66 = auVar72._0_4_ * 0x2000;
      iVar77 = auVar72._4_4_ * 0x2000;
      iVar81 = auVar72._8_4_ * 0x2000;
      iVar85 = auVar72._12_4_ * 0x2000;
      uVar165 = __LC12 + iVar66;
      uVar172 = _UNK_001124b4 + iVar77;
      uVar178 = _UNK_001124b8 + iVar81;
      uVar184 = _UNK_001124bc + iVar85;
      auVar72 = *pauVar36;
      uVar116 = (int)-(uint)(auVar95._0_4_ == __LC14) >> 0x1f;
      uVar121 = (int)-(uint)(auVar95._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar122 = (int)-(uint)(auVar95._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar123 = (int)-(uint)(auVar95._12_4_ == _UNK_001124cc) >> 0x1f;
      uVar50 = (int)-(uint)(auVar95._0_4_ == 0) >> 0x1f;
      uVar98 = (int)-(uint)(auVar95._4_4_ == 0) >> 0x1f;
      uVar104 = (int)-(uint)(auVar95._8_4_ == 0) >> 0x1f;
      uVar110 = (int)-(uint)(auVar95._12_4_ == 0) >> 0x1f;
      auVar152._4_4_ = _UNK_001124c4;
      auVar152._0_4_ = __LC14;
      auVar152._8_4_ = _UNK_001124c8;
      auVar152._12_4_ = _UNK_001124cc;
      uVar138 = auVar72._8_4_;
      auVar70._0_8_ = auVar72._8_8_;
      auVar70._8_4_ = uVar138;
      auVar11._10_2_ = 0;
      auVar11._0_10_ = auVar70._0_10_;
      auVar11._12_2_ = auVar72._14_2_;
      auVar17._8_2_ = auVar72._12_2_;
      auVar17._0_8_ = auVar70._0_8_;
      auVar17._10_4_ = auVar11._10_4_;
      auVar31._6_8_ = 0;
      auVar31._0_6_ = auVar17._8_6_;
      auVar23._4_2_ = auVar72._10_2_;
      auVar23._0_4_ = uVar138;
      auVar23._6_8_ = SUB148(auVar31 << 0x40,6);
      auVar73._0_4_ = uVar138 & 0xffff;
      auVar73._4_10_ = auVar23._4_10_;
      auVar73._14_2_ = 0;
      auVar152 = auVar152 & auVar73;
      auVar72 = __LC11 & auVar73;
      auVar73 = auVar73 & __LC19;
      iVar89 = auVar72._0_4_ * 0x2000;
      iVar99 = auVar72._4_4_ * 0x2000;
      iVar105 = auVar72._8_4_ * 0x2000;
      iVar111 = auVar72._12_4_ * 0x2000;
      uVar166 = __LC12 + iVar89;
      uVar173 = _UNK_001124b4 + iVar99;
      uVar179 = _UNK_001124b8 + iVar105;
      uVar185 = _UNK_001124bc + iVar111;
      uVar124 = (int)-(uint)(auVar152._0_4_ == __LC14) >> 0x1f;
      uVar133 = (int)-(uint)(auVar152._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar139 = (int)-(uint)(auVar152._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar144 = (int)-(uint)(auVar152._12_4_ == _UNK_001124cc) >> 0x1f;
      uVar149 = (int)-(uint)(auVar152._0_4_ == 0) >> 0x1f;
      uVar156 = (int)-(uint)(auVar152._4_4_ == 0) >> 0x1f;
      uVar159 = (int)-(uint)(auVar152._8_4_ == 0) >> 0x1f;
      uVar162 = (int)-(uint)(auVar152._12_4_ == 0) >> 0x1f;
      auVar72 = pauVar36[1];
      auVar130._4_4_ = _UNK_001124c4;
      auVar130._0_4_ = __LC14;
      auVar130._8_4_ = _UNK_001124c8;
      auVar130._12_4_ = _UNK_001124cc;
      auVar12._10_2_ = 0;
      auVar12._0_10_ = auVar72._0_10_;
      auVar12._12_2_ = auVar72._6_2_;
      auVar18._8_2_ = auVar72._4_2_;
      auVar18._0_8_ = auVar72._0_8_;
      auVar18._10_4_ = auVar12._10_4_;
      auVar32._6_8_ = 0;
      auVar32._0_6_ = auVar18._8_6_;
      auVar153._6_8_ = SUB148(auVar32 << 0x40,6);
      auVar153._4_2_ = auVar72._2_2_;
      auVar153._0_2_ = auVar72._0_2_;
      auVar153._2_2_ = 0;
      auVar153._14_2_ = 0;
      auVar72 = __LC11 & auVar153;
      auVar130 = auVar130 & auVar153;
      auVar153 = auVar153 & __LC19;
      iVar67 = auVar72._0_4_ * 0x2000;
      iVar78 = auVar72._4_4_ * 0x2000;
      iVar82 = auVar72._8_4_ * 0x2000;
      iVar86 = auVar72._12_4_ * 0x2000;
      uVar167 = __LC12 + iVar67;
      uVar174 = _UNK_001124b4 + iVar78;
      uVar180 = _UNK_001124b8 + iVar82;
      uVar186 = _UNK_001124bc + iVar86;
      uVar90 = (int)-(uint)(auVar130._0_4_ == __LC14) >> 0x1f;
      uVar100 = (int)-(uint)(auVar130._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar106 = (int)-(uint)(auVar130._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar112 = (int)-(uint)(auVar130._12_4_ == _UNK_001124cc) >> 0x1f;
      uVar125 = (int)-(uint)(auVar130._0_4_ == 0) >> 0x1f;
      uVar134 = (int)-(uint)(auVar130._4_4_ == 0) >> 0x1f;
      uVar140 = (int)-(uint)(auVar130._8_4_ == 0) >> 0x1f;
      uVar145 = (int)-(uint)(auVar130._12_4_ == 0) >> 0x1f;
      auVar154._4_4_ = _UNK_001124c4;
      auVar154._0_4_ = __LC14;
      auVar154._8_4_ = _UNK_001124c8;
      auVar154._12_4_ = _UNK_001124cc;
      auVar72 = pauVar36[1];
      uVar138 = auVar72._8_4_;
      auVar71._0_8_ = auVar72._8_8_;
      auVar71._8_4_ = uVar138;
      auVar13._10_2_ = 0;
      auVar13._0_10_ = auVar71._0_10_;
      auVar13._12_2_ = auVar72._14_2_;
      auVar19._8_2_ = auVar72._12_2_;
      auVar19._0_8_ = auVar71._0_8_;
      auVar19._10_4_ = auVar13._10_4_;
      auVar33._6_8_ = 0;
      auVar33._0_6_ = auVar19._8_6_;
      auVar24._4_2_ = auVar72._10_2_;
      auVar24._0_4_ = uVar138;
      auVar24._6_8_ = SUB148(auVar33 << 0x40,6);
      auVar74._0_4_ = uVar138 & 0xffff;
      auVar74._4_10_ = auVar24._4_10_;
      auVar74._14_2_ = 0;
      auVar154 = auVar154 & auVar74;
      auVar72 = __LC11 & auVar74;
      auVar74 = auVar74 & __LC19;
      iVar91 = auVar72._0_4_ * 0x2000;
      iVar101 = auVar72._4_4_ * 0x2000;
      iVar107 = auVar72._8_4_ * 0x2000;
      iVar113 = auVar72._12_4_ * 0x2000;
      uVar168 = __LC12 + iVar91;
      uVar175 = _UNK_001124b4 + iVar101;
      uVar181 = _UNK_001124b8 + iVar107;
      uVar187 = _UNK_001124bc + iVar113;
      uVar126 = (int)-(uint)(auVar154._0_4_ == __LC14) >> 0x1f;
      uVar135 = (int)-(uint)(auVar154._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar141 = (int)-(uint)(auVar154._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar146 = (int)-(uint)(auVar154._12_4_ == _UNK_001124cc) >> 0x1f;
      uVar150 = (int)-(uint)(auVar154._0_4_ == 0) >> 0x1f;
      uVar157 = (int)-(uint)(auVar154._4_4_ == 0) >> 0x1f;
      uVar160 = (int)-(uint)(auVar154._8_4_ == 0) >> 0x1f;
      uVar163 = (int)-(uint)(auVar154._12_4_ == 0) >> 0x1f;
      auVar72 = pauVar36[2];
      auVar14._10_2_ = 0;
      auVar14._0_10_ = auVar72._0_10_;
      auVar14._12_2_ = auVar72._6_2_;
      auVar20._8_2_ = auVar72._4_2_;
      auVar20._0_8_ = auVar72._0_8_;
      auVar20._10_4_ = auVar14._10_4_;
      auVar34._6_8_ = 0;
      auVar34._0_6_ = auVar20._8_6_;
      auVar25._4_2_ = auVar72._2_2_;
      auVar25._0_4_ = auVar72._0_4_;
      auVar25._6_8_ = SUB148(auVar34 << 0x40,6);
      auVar155._0_4_ = auVar72._0_4_ & 0xffff;
      auVar155._4_10_ = auVar25._4_10_;
      auVar155._14_2_ = 0;
      auVar72._4_4_ = _UNK_001124c4;
      auVar72._0_4_ = __LC14;
      auVar72._8_4_ = _UNK_001124c8;
      auVar72._12_4_ = _UNK_001124cc;
      auVar72 = auVar72 & auVar155;
      auVar95 = __LC11 & auVar155;
      auVar155 = auVar155 & __LC19;
      iVar68 = auVar95._0_4_ * 0x2000;
      iVar79 = auVar95._4_4_ * 0x2000;
      iVar83 = auVar95._8_4_ * 0x2000;
      iVar87 = auVar95._12_4_ * 0x2000;
      uVar169 = __LC12 + iVar68;
      uVar176 = _UNK_001124b4 + iVar79;
      uVar182 = _UNK_001124b8 + iVar83;
      uVar188 = _UNK_001124bc + iVar87;
      uVar92 = (int)-(uint)(auVar72._0_4_ == __LC14) >> 0x1f;
      uVar102 = (int)-(uint)(auVar72._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar108 = (int)-(uint)(auVar72._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar114 = (int)-(uint)(auVar72._12_4_ == _UNK_001124cc) >> 0x1f;
      uVar127 = (int)-(uint)(auVar72._0_4_ == 0) >> 0x1f;
      uVar136 = (int)-(uint)(auVar72._4_4_ == 0) >> 0x1f;
      uVar142 = (int)-(uint)(auVar72._8_4_ == 0) >> 0x1f;
      uVar147 = (int)-(uint)(auVar72._12_4_ == 0) >> 0x1f;
      auVar131._4_4_ = _UNK_001124c4;
      auVar131._0_4_ = __LC14;
      auVar131._8_4_ = _UNK_001124c8;
      auVar131._12_4_ = _UNK_001124cc;
      auVar72 = pauVar36[2];
      uVar138 = auVar72._8_4_;
      auVar94._0_8_ = auVar72._8_8_;
      auVar94._8_4_ = uVar138;
      auVar15._10_2_ = 0;
      auVar15._0_10_ = auVar94._0_10_;
      auVar15._12_2_ = auVar72._14_2_;
      auVar21._8_2_ = auVar72._12_2_;
      auVar21._0_8_ = auVar94._0_8_;
      auVar21._10_4_ = auVar15._10_4_;
      auVar35._6_8_ = 0;
      auVar35._0_6_ = auVar21._8_6_;
      auVar26._4_2_ = auVar72._10_2_;
      auVar26._0_4_ = uVar138;
      auVar26._6_8_ = SUB148(auVar35 << 0x40,6);
      auVar96._0_4_ = uVar138 & 0xffff;
      auVar96._4_10_ = auVar26._4_10_;
      auVar96._14_2_ = 0;
      auVar131 = auVar131 & auVar96;
      auVar72 = __LC11 & auVar96;
      auVar96 = auVar96 & __LC19;
      iVar69 = auVar72._0_4_ * 0x2000;
      iVar80 = auVar72._4_4_ * 0x2000;
      iVar84 = auVar72._8_4_ * 0x2000;
      iVar88 = auVar72._12_4_ * 0x2000;
      uVar151 = __LC12 + iVar69;
      uVar158 = _UNK_001124b4 + iVar80;
      uVar161 = _UNK_001124b8 + iVar84;
      uVar164 = _UNK_001124bc + iVar88;
      uVar56 = (int)-(uint)(__LC14 == auVar131._0_4_) >> 0x1f;
      uVar60 = (int)-(uint)(_UNK_001124c4 == auVar131._4_4_) >> 0x1f;
      uVar62 = (int)-(uint)(_UNK_001124c8 == auVar131._8_4_) >> 0x1f;
      uVar64 = (int)-(uint)(_UNK_001124cc == auVar131._12_4_) >> 0x1f;
      uVar128 = (int)-(uint)(auVar131._0_4_ == 0) >> 0x1f;
      uVar137 = (int)-(uint)(auVar131._4_4_ == 0) >> 0x1f;
      uVar143 = (int)-(uint)(auVar131._8_4_ == 0) >> 0x1f;
      uVar148 = (int)-(uint)(auVar131._12_4_ == 0) >> 0x1f;
      uVar138 = *(uint *)(pauVar36[3] + 0xc);
      auVar117._0_8_ =
           CONCAT44((float)(auVar129._4_4_ << 0x10 |
                           (uint)((float)(iVar77 + _UNK_001124e4) + _LC18) & uVar98 |
                           ~uVar98 & (uVar121 & (uVar172 | _UNK_001124d4) | ~uVar121 & uVar172)) *
                    local_448,
                    (float)(auVar129._0_4_ << 0x10 |
                           (uint)((float)(iVar66 + __LC16) + _LC18) & uVar50 |
                           ~uVar50 & (uVar116 & (uVar165 | __LC15) | ~uVar116 & uVar165)) *
                    local_448);
      auVar117._8_4_ =
           (float)(auVar129._8_4_ << 0x10 |
                  (uint)((float)(iVar81 + _UNK_001124e8) + _LC18) & uVar104 |
                  ~uVar104 & (uVar122 & (uVar178 | _UNK_001124d8) | ~uVar122 & uVar178)) * local_448
      ;
      auVar117._12_4_ =
           (float)(auVar129._12_4_ << 0x10 |
                  (uint)((float)(iVar85 + _UNK_001124ec) + _LC18) & uVar110 |
                  ~uVar110 & (uVar123 & (uVar184 | _UNK_001124dc) | ~uVar123 & uVar184)) * local_448
      ;
      auVar132._0_4_ =
           local_448 *
           (float)(auVar74._0_4_ << 0x10 |
                  (uint)((float)(iVar91 + __LC16) + _LC18) & uVar150 |
                  ~uVar150 & (uVar126 & (uVar168 | __LC15) | ~uVar126 & uVar168));
      auVar132._4_4_ =
           local_448 *
           (float)(auVar74._4_4_ << 0x10 |
                  (uint)((float)(iVar101 + _UNK_001124e4) + _LC18) & uVar157 |
                  ~uVar157 & (uVar135 & (uVar175 | _UNK_001124d4) | ~uVar135 & uVar175));
      auVar132._8_4_ =
           local_448 *
           (float)(auVar74._8_4_ << 0x10 |
                  (uint)((float)(iVar107 + _UNK_001124e8) + _LC18) & uVar160 |
                  ~uVar160 & (uVar141 & (uVar181 | _UNK_001124d8) | ~uVar141 & uVar181));
      auVar132._12_4_ =
           local_448 *
           (float)(auVar74._12_4_ << 0x10 |
                  (uint)((float)(iVar113 + _UNK_001124ec) + _LC18) & uVar163 |
                  ~uVar163 & (uVar146 & (uVar187 | _UNK_001124dc) | ~uVar146 & uVar187));
      auVar192._8_4_ = auVar117._8_4_;
      auVar192._0_8_ = auVar117._0_8_;
      auVar192._12_4_ = auVar117._12_4_;
      auVar152 = maxps(auVar117,auVar132);
      auVar95 = minps(auVar192,auVar132);
      auVar190._0_4_ =
           (float)(auVar155._0_4_ << 0x10 |
                  ~uVar127 & (uVar92 & (uVar169 | __LC15) | ~uVar92 & uVar169) |
                  (uint)((float)(iVar68 + __LC16) + _LC18) & uVar127) * fStack_444;
      auVar190._4_4_ =
           (float)(auVar155._4_4_ << 0x10 |
                  ~uVar136 & (uVar102 & (uVar176 | _UNK_001124d4) | ~uVar102 & uVar176) |
                  (uint)((float)(iVar79 + _UNK_001124e4) + _LC18) & uVar136) * fStack_444;
      auVar190._8_4_ =
           (float)(auVar155._8_4_ << 0x10 |
                  ~uVar142 & (uVar108 & (uVar182 | _UNK_001124d8) | ~uVar108 & uVar182) |
                  (uint)((float)(iVar83 + _UNK_001124e8) + _LC18) & uVar142) * fStack_444;
      auVar190._12_4_ =
           (float)(auVar155._12_4_ << 0x10 |
                  ~uVar147 & (uVar114 & (uVar188 | _UNK_001124dc) | ~uVar114 & uVar188) |
                  (uint)((float)(iVar87 + _UNK_001124ec) + _LC18) & uVar147) * fStack_444;
      auVar118._0_8_ =
           CONCAT44((float)(auVar73._4_4_ << 0x10 |
                           (uint)((float)(iVar99 + _UNK_001124e4) + _LC18) & uVar156 |
                           ~uVar156 & (uVar133 & (uVar173 | _UNK_001124d4) | ~uVar133 & uVar173)) *
                    fStack_444,
                    (float)(auVar73._0_4_ << 0x10 |
                           (uint)((float)(iVar89 + __LC16) + _LC18) & uVar149 |
                           ~uVar149 & (uVar124 & (uVar166 | __LC15) | ~uVar124 & uVar166)) *
                    fStack_444);
      auVar118._8_4_ =
           (float)(auVar73._8_4_ << 0x10 |
                  (uint)((float)(iVar105 + _UNK_001124e8) + _LC18) & uVar159 |
                  ~uVar159 & (uVar139 & (uVar179 | _UNK_001124d8) | ~uVar139 & uVar179)) *
           fStack_444;
      auVar118._12_4_ =
           (float)(auVar73._12_4_ << 0x10 |
                  (uint)((float)(iVar111 + _UNK_001124ec) + _LC18) & uVar162 |
                  ~uVar162 & (uVar144 & (uVar185 | _UNK_001124dc) | ~uVar144 & uVar185)) *
           fStack_444;
      auVar193._8_4_ = auVar118._8_4_;
      auVar193._0_8_ = auVar118._0_8_;
      auVar193._12_4_ = auVar118._12_4_;
      auVar130 = maxps(auVar118,auVar190);
      auVar72 = minps(auVar193,auVar190);
      auVar119._0_8_ =
           CONCAT44((float)(auVar153._4_4_ << 0x10 |
                           (uint)((float)(iVar78 + _UNK_001124e4) + _LC18) & uVar134 |
                           ~uVar134 & (uVar100 & (uVar174 | _UNK_001124d4) | ~uVar100 & uVar174)) *
                    fStack_440,
                    (float)(auVar153._0_4_ << 0x10 |
                           (uint)((float)(iVar67 + __LC16) + _LC18) & uVar125 |
                           ~uVar125 & (uVar90 & (uVar167 | __LC15) | ~uVar90 & uVar167)) *
                    fStack_440);
      auVar119._8_4_ =
           (float)(auVar153._8_4_ << 0x10 |
                  (uint)((float)(iVar82 + _UNK_001124e8) + _LC18) & uVar140 |
                  ~uVar140 & (uVar106 & (uVar180 | _UNK_001124d8) | ~uVar106 & uVar180)) *
           fStack_440;
      auVar119._12_4_ =
           (float)(auVar153._12_4_ << 0x10 |
                  (uint)((float)(iVar86 + _UNK_001124ec) + _LC18) & uVar145 |
                  ~uVar145 & (uVar112 & (uVar186 | _UNK_001124dc) | ~uVar112 & uVar186)) *
           fStack_440;
      auVar75._0_4_ =
           fStack_440 *
           (float)(auVar96._0_4_ << 0x10 |
                  (uint)((float)(iVar69 + __LC16) + _LC18) & uVar128 |
                  ~uVar128 & (uVar56 & (uVar151 | __LC15) | ~uVar56 & uVar151));
      auVar75._4_4_ =
           fStack_440 *
           (float)(auVar96._4_4_ << 0x10 |
                  (uint)((float)(iVar80 + _UNK_001124e4) + _LC18) & uVar137 |
                  ~uVar137 & (uVar60 & (uVar158 | _UNK_001124d4) | ~uVar60 & uVar158));
      auVar75._8_4_ =
           fStack_440 *
           (float)(auVar96._8_4_ << 0x10 |
                  (uint)((float)(iVar84 + _UNK_001124e8) + _LC18) & uVar143 |
                  ~uVar143 & (uVar62 & (uVar161 | _UNK_001124d8) | ~uVar62 & uVar161));
      auVar75._12_4_ =
           fStack_440 *
           (float)(auVar96._12_4_ << 0x10 |
                  (uint)((float)(iVar88 + _UNK_001124ec) + _LC18) & uVar148 |
                  ~uVar148 & (uVar64 & (uVar164 | _UNK_001124dc) | ~uVar64 & uVar164));
      auVar171._8_4_ = auVar119._8_4_;
      auVar171._0_8_ = auVar119._0_8_;
      auVar171._12_4_ = auVar119._12_4_;
      auVar131 = minps(auVar171,auVar75);
      auVar154 = maxps(auVar119,auVar75);
      auVar58._4_4_ = fStack_3f4;
      auVar58._0_4_ = fStack_3f4;
      auVar58._8_4_ = fStack_3f4;
      auVar58._12_4_ = fStack_3f4;
      auVar191._4_4_ = fStack_3f0;
      auVar191._0_4_ = fStack_3f0;
      auVar97._4_4_ = local_3f8;
      auVar97._0_4_ = local_3f8;
      auVar72 = maxps(auVar58,auVar72);
      auVar97._8_4_ = local_3f8;
      auVar97._12_4_ = local_3f8;
      auVar191._8_4_ = fStack_3f0;
      auVar191._12_4_ = fStack_3f0;
      auVar95 = maxps(auVar97,auVar95);
      auVar131 = maxps(auVar191,auVar131);
      auVar72 = minps(auVar72,auVar130);
      auVar95 = minps(auVar95,auVar152);
      auVar152 = minps(auVar131,auVar154);
      fVar57 = auVar72._0_4_ - fStack_3f4;
      fVar61 = auVar72._4_4_ - fStack_3f4;
      fVar63 = auVar72._8_4_ - fStack_3f4;
      fVar65 = auVar72._12_4_ - fStack_3f4;
      fVar93 = auVar95._0_4_ - local_3f8;
      fVar103 = auVar95._4_4_ - local_3f8;
      fVar109 = auVar95._8_4_ - local_3f8;
      fVar115 = auVar95._12_4_ - local_3f8;
      fVar170 = auVar152._0_4_ - fStack_3f0;
      fVar177 = auVar152._4_4_ - fStack_3f0;
      fVar183 = auVar152._8_4_ - fStack_3f0;
      fVar189 = auVar152._12_4_ - fStack_3f0;
      iVar66 = -(uint)(fVar57 * fVar57 + fVar93 * fVar93 + fVar170 * fVar170 <= local_3dc);
      iVar67 = -(uint)(fVar61 * fVar61 + fVar103 * fVar103 + fVar177 * fVar177 <= local_3dc);
      iVar68 = -(uint)(fVar63 * fVar63 + fVar109 * fVar109 + fVar183 * fVar183 <= local_3dc);
      auVar76._4_4_ = iVar67;
      auVar76._0_4_ = iVar66;
      auVar76._8_4_ = iVar68;
      auVar76._12_4_ = -(uint)(fVar65 * fVar65 + fVar115 * fVar115 + fVar189 * fVar189 <= local_3dc)
      ;
      uVar47 = movmskps((int)lVar10,auVar76);
      uVar56 = iVar68 >> 0x1f;
      uVar60 = uVar56 & *(uint *)(pauVar36[3] + 8) | ~uVar56 & uVar138;
      uVar62 = iVar67 >> 0x1f;
      uVar64 = iVar66 >> 0x1f;
      uVar56 = *(uint *)(pauVar36[3] + 4) & uVar62 | ~uVar62 & uVar60;
      uVar60 = uVar60 & uVar62 | ~uVar62 & uVar138;
      auVar59._0_4_ = *(uint *)pauVar36[3] & uVar64;
      auVar59._4_4_ = uVar56 & uVar64;
      auVar59._8_4_ = uVar60 & uVar64;
      auVar59._12_4_ = uVar138 & uVar64;
      auVar120._0_4_ = ~uVar64 & uVar56;
      auVar120._4_4_ = ~uVar64 & uVar60;
      auVar120._8_4_ = ~uVar64 & uVar138;
      auVar120._12_4_ = ~uVar64 & uVar138;
      iVar66 = __popcountdi2(CONCAT44((int)((ulong)lVar10 >> 0x20),uVar47));
      local_5f8 = SUB168(auVar59 | auVar120,0);
      uStack_5f0 = SUB168(auVar59 | auVar120,8);
      *(undefined8 *)(local_258 + lVar42) = local_5f8;
      *(undefined8 *)((long)auStack_250 + lVar42 * 4) = uStack_5f0;
      local_58 = local_58 + iVar66;
      uVar56 = __LC9;
      uVar60 = _UNK_00112494;
      uVar62 = _UNK_00112498;
      uVar64 = _UNK_0011249c;
      if (*(float *)(local_460 + 8) <= _LC20) goto LAB_00102c28;
    }
    else {
      if (uVar50 == 0xf) {
LAB_001026aa:
        fVar57 = *(float *)(local_460 + 8);
      }
      else {
        puVar55 = local_3d8;
        piVar48 = (int *)((ulong)((uVar138 & 0xfffffff) * 4) + lVar10);
        puVar52 = (uint *)(piVar48 + 1);
        uVar92 = *piVar48 * 4 & 0x7ffffffc;
        puVar37 = puVar52 + (ulong)(uVar50 + 3 >> 2) * 4;
        lVar42 = (ulong)uVar92 + 4;
        puVar39 = puVar55;
        puVar44 = puVar52;
        uVar90 = uVar50;
        do {
          uVar98 = *puVar44;
          uVar100 = puVar44[1];
          uVar102 = puVar44[2];
          uVar51 = (ulong)(uVar98 >> 0xd & 0x7f8);
          uVar43 = (ulong)((uVar98 >> 0x18) << 3);
          uVar104 = *(uint *)((long)piVar48 + uVar51 + uVar92);
          uVar106 = *(uint *)((long)piVar48 + uVar43 + uVar92);
          uVar45 = (ulong)((uVar98 >> 8 & 0xff) << 3);
          uVar49 = (ulong)(uVar98 * 8 & 0x7f8);
          uVar98 = *(uint *)((long)piVar48 + uVar43 + lVar42);
          uVar108 = *(uint *)((long)piVar48 + uVar49 + uVar92);
          uVar110 = *(uint *)((long)piVar48 + uVar45 + uVar92);
          uVar112 = *(uint *)((long)piVar48 + uVar49 + lVar42);
          uVar43 = (ulong)((uVar100 >> 0x18) << 3);
          uVar54 = (ulong)(uVar100 >> 0xd & 0x7f8);
          uVar114 = *(uint *)((long)piVar48 + uVar43 + lVar42);
          uVar116 = *(uint *)((long)piVar48 + uVar43 + uVar92);
          uVar121 = *(uint *)((long)piVar48 + uVar51 + lVar42);
          uVar43 = (ulong)(uVar102 >> 0xd & 0x7f8);
          uVar49 = (ulong)((uVar102 >> 0x18) << 3);
          uVar122 = *(uint *)((long)piVar48 + uVar45 + lVar42);
          uVar45 = (ulong)((uVar100 >> 8 & 0xff) * 8);
          uVar51 = (ulong)(uVar100 * 8 & 0x7f8);
          uVar100 = *(uint *)((long)piVar48 + uVar45 + uVar92);
          uVar123 = *(uint *)((long)piVar48 + uVar51 + uVar92);
          uVar124 = *(uint *)((long)piVar48 + uVar51 + lVar42);
          uVar125 = *(uint *)((long)piVar48 + uVar54 + uVar92);
          uVar126 = *(uint *)((long)piVar48 + uVar54 + lVar42);
          uVar127 = *(uint *)((long)piVar48 + uVar45 + lVar42);
          uVar128 = *(uint *)((long)piVar48 + uVar43 + uVar92);
          uVar51 = (ulong)(uVar102 * 8 & 0x7f8);
          uVar45 = (ulong)((uVar102 >> 8 & 0xff) << 3);
          uVar102 = *(uint *)((long)piVar48 + uVar45 + lVar42);
          uVar133 = *(uint *)((long)piVar48 + uVar51 + uVar92);
          uVar134 = *(uint *)((long)piVar48 + uVar49 + uVar92);
          uVar135 = *(uint *)((long)piVar48 + uVar45 + uVar92);
          uVar136 = *(uint *)((long)piVar48 + uVar43 + lVar42);
          uVar137 = *(uint *)((long)piVar48 + uVar49 + lVar42);
          uVar139 = *(uint *)((long)piVar48 + uVar51 + lVar42);
          local_518._4_4_ = (float)(uVar110 >> 0x15 | (uVar122 >> 0x15) << 0xb) * fVar3 + fVar4;
          local_518._0_4_ = (float)(int)(uVar110 & uVar60) * fVar7 + fVar2;
          local_518._8_4_ = (float)(int)(uVar122 & uVar60) * fVar5 + fVar6;
          local_518._12_4_ = 0;
          local_528._4_4_ = (float)(uVar108 >> 0x15 | (uVar112 >> 0x15) << 0xb) * fVar3 + fVar4;
          local_528._0_4_ = (float)(int)(uVar108 & uVar56) * fVar7 + fVar2;
          local_528._8_4_ = (float)(int)(uVar112 & uVar56) * fVar5 + fVar6;
          local_528._12_4_ = 0;
          local_4f8._4_4_ = (float)(uVar106 >> 0x15 | (uVar98 >> 0x15) << 0xb) * fVar3 + fVar4;
          local_4f8._0_4_ = (float)(int)(uVar106 & uVar64) * fVar7 + fVar2;
          local_4f8._8_4_ = (float)(int)(uVar98 & uVar64) * fVar5 + fVar6;
          local_4f8._12_4_ = 0;
          local_508._4_4_ = (float)(uVar104 >> 0x15 | (uVar121 >> 0x15) << 0xb) * fVar3 + fVar4;
          local_508._0_4_ = (float)(int)(uVar104 & uVar62) * fVar7 + fVar2;
          local_508._8_4_ = (float)(int)(uVar121 & uVar62) * fVar5 + fVar6;
          local_508._12_4_ = 0;
          local_4d8._4_4_ = (float)(uVar100 >> 0x15 | (uVar127 >> 0x15) << 0xb) * fVar3 + fVar4;
          local_4d8._0_4_ = (float)(int)(uVar100 & uVar60) * fVar7 + fVar2;
          local_4d8._8_4_ = (float)(int)(uVar127 & uVar60) * fVar5 + fVar6;
          local_4d8._12_4_ = 0;
          local_4b8._4_4_ = (float)(uVar116 >> 0x15 | (uVar114 >> 0x15) << 0xb) * fVar3 + fVar4;
          local_4b8._0_4_ = (float)(int)(uVar116 & uVar64) * fVar7 + fVar2;
          local_4b8._8_4_ = (float)(int)(uVar114 & uVar64) * fVar5 + fVar6;
          local_4b8._12_4_ = 0;
          local_4c8._4_4_ = (float)(uVar125 >> 0x15 | (uVar126 >> 0x15) << 0xb) * fVar3 + fVar4;
          local_4c8._0_4_ = (float)(int)(uVar125 & uVar62) * fVar7 + fVar2;
          local_4c8._8_4_ = (float)(int)(uVar126 & uVar62) * fVar5 + fVar6;
          local_4c8._12_4_ = 0;
          local_498._4_4_ = (float)(uVar135 >> 0x15 | (uVar102 >> 0x15) << 0xb) * fVar3 + fVar4;
          local_498._0_4_ = (float)(int)(uVar135 & uVar60) * fVar7 + fVar2;
          local_498._8_4_ = (float)(int)(uVar102 & uVar60) * fVar5 + fVar6;
          local_498._12_4_ = 0;
          local_4e8._4_4_ = (float)(uVar123 >> 0x15 | (uVar124 >> 0x15) << 0xb) * fVar3 + fVar4;
          local_4e8._0_4_ = (float)(int)(uVar123 & uVar56) * fVar7 + fVar2;
          local_4e8._8_4_ = (float)(int)(uVar124 & uVar56) * fVar5 + fVar6;
          local_4e8._12_4_ = 0;
          local_4a8._4_4_ = (float)(uVar133 >> 0x15 | (uVar139 >> 0x15) << 0xb) * fVar3 + fVar4;
          local_4a8._0_4_ = (float)(int)(uVar133 & uVar56) * fVar7 + fVar2;
          local_4a8._8_4_ = (float)(int)(uVar139 & uVar56) * fVar5 + fVar6;
          local_4a8._12_4_ = 0;
          local_478._4_4_ = (float)(uVar134 >> 0x15 | (uVar137 >> 0x15) << 0xb) * fVar3 + fVar4;
          local_478._0_4_ = (float)(int)(uVar134 & uVar64) * fVar7 + fVar2;
          local_478._8_4_ = (float)(int)(uVar137 & uVar64) * fVar5 + fVar6;
          local_478._12_4_ = 0;
          local_488._4_4_ = (float)(uVar128 >> 0x15 | (uVar136 >> 0x15) << 0xb) * fVar3 + fVar4;
          local_488._0_4_ = (float)(int)(uVar128 & uVar62) * fVar7 + fVar2;
          local_488._8_4_ = (float)(int)(uVar136 & uVar62) * fVar5 + fVar6;
          local_488._12_4_ = 0;
          uVar98 = uVar90;
          if (0 < (int)uVar90) {
            lVar46 = 0;
            puVar38 = puVar39;
            do {
              puVar1 = (undefined8 *)(local_528 + lVar46);
              uVar27 = *(undefined8 *)(local_528 + lVar46 + 8);
              auVar72 = *(undefined1 (*) [16])(local_4e8 + lVar46);
              uVar98 = uVar98 - 1;
              uVar28 = *(undefined8 *)(local_4a8 + lVar46);
              uVar29 = *(undefined8 *)(local_4a8 + lVar46 + 8);
              puVar39 = puVar38 + 6;
              lVar46 = lVar46 + 0x10;
              *puVar38 = *puVar1;
              puVar38[1] = uVar27;
              *(undefined1 (*) [16])(puVar38 + 2) = auVar72;
              puVar38[4] = uVar28;
              puVar38[5] = uVar29;
              if (3 < (int)(uVar90 - uVar98)) break;
              puVar38 = puVar39;
            } while (0 < (int)uVar98);
          }
          uVar90 = uVar98;
          puVar44 = puVar44 + 4;
        } while (puVar44 < puVar37);
        pbVar53 = local_48;
        uVar90 = uVar50;
        do {
          if (0 < (int)uVar90) {
            lVar42 = 1;
            do {
              lVar46 = lVar42;
              uVar90 = uVar90 - 1;
              pbVar53[lVar46 + -1] = *(byte *)((long)puVar52 + lVar46 + 0xb);
              lVar42 = lVar46 + 1;
            } while ((int)lVar46 < 4 && 0 < (int)uVar90);
            pbVar53 = pbVar53 + lVar46;
          }
          puVar52 = puVar52 + 4;
        } while (puVar52 < puVar37);
        puVar39 = puVar55 + (long)(int)(uVar50 * 3) * 2;
        if (puVar39 <= puVar55) goto LAB_001026aa;
        lVar42 = 0;
        do {
          local_52c = (int)lVar42 << (bVar41 & 0x1f) |
                      ~(7 << (bVar41 & 0x1f)) &
                      (~((int)(1L << (bVar8 & 0x3f)) + -1 << (bVar40 & 0x1f)) & uVar9 |
                      (uVar138 & 0xfffffff) << (bVar40 & 0x1f));
          JPH::CollideSphereVsTriangles::Collide
                    (*puVar55,puVar55[1],puVar55[2],puVar55[3],puVar55[4],puVar55[5],local_468,
                     local_48[lVar42] >> 5,&local_52c);
          fVar57 = *(float *)(local_460 + 8);
          if (fVar57 <= _LC20) goto LAB_00102c28;
          puVar55 = puVar55 + 6;
          lVar42 = lVar42 + 1;
          uVar56 = __LC9;
          uVar60 = _UNK_00112494;
          uVar62 = _UNK_00112498;
          uVar64 = _UNK_0011249c;
        } while (puVar55 < puVar39);
      }
      if (fVar57 <= _LC20) {
LAB_00102c28:
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
    local_58 = local_58 + -1;
    if (local_58 < 0) goto LAB_00102c28;
    uVar138 = local_258[local_58];
  } while( true );
}



/* JPH::MeshShape::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall JPH::MeshShape::RestoreBinaryState(MeshShape *this,StreamIn *param_1)

{
  long lVar1;
  char cVar2;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::Shape::RestoreBinaryState((StreamIn *)this);
  local_34 = (uint)*(undefined8 *)(this + 0x38);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_34,4);
  cVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
    if (cVar2 == '\0') {
      uVar4 = (ulong)local_34;
      if (*(ulong *)(this + 0x40) < uVar4) {
        __dest = (void *)(*AlignedAllocate)(uVar4,0x40);
        if (*(void **)(this + 0x48) != (void *)0x0) {
          memmove(__dest,*(void **)(this + 0x48),*(size_t *)(this + 0x38));
          (*AlignedFree)(*(undefined8 *)(this + 0x48));
        }
        *(void **)(this + 0x48) = __dest;
        uVar3 = (ulong)local_34;
        *(ulong *)(this + 0x40) = uVar4;
      }
      else {
        __dest = *(void **)(this + 0x48);
        uVar3 = uVar4;
      }
      lVar1 = *(long *)param_1;
      *(ulong *)(this + 0x38) = uVar4;
      (**(code **)(lVar1 + 0x10))(param_1,__dest,uVar3);
      goto LAB_00103286;
    }
  }
  *(undefined8 *)(this + 0x38) = 0;
LAB_00103286:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MeshShape::sCastSphereVsMesh(JPH::ShapeCast const&, JPH::ShapeCastSettings const&,
   JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44 const&, JPH::SubShapeIDCreator
   const&, JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::ShapeCastResult,
   JPH::CollisionCollectorTraitsCastShape>&) */

void JPH::MeshShape::sCastSphereVsMesh
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,uint *param_7,undefined8 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  long lVar8;
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [16];
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [14];
  undefined1 auVar33 [14];
  undefined1 auVar34 [14];
  undefined1 auVar35 [14];
  undefined1 auVar36 [14];
  undefined1 auVar37 [14];
  uint uVar38;
  long lVar39;
  undefined1 (*pauVar40) [16];
  ulong uVar41;
  CastSphereVsTriangles *pCVar42;
  undefined1 (*pauVar43) [16];
  undefined1 (*pauVar44) [16];
  byte bVar45;
  byte bVar46;
  ulong uVar47;
  CastSphereVsTriangles *pCVar48;
  undefined8 *puVar49;
  long lVar50;
  int *piVar51;
  ulong uVar52;
  uint uVar53;
  long lVar54;
  ulong uVar55;
  CastSphereVsTriangles *pCVar56;
  byte *pbVar57;
  ulong uVar58;
  long in_FS_OFFSET;
  byte bVar59;
  uint uVar60;
  uint uVar61;
  float fVar62;
  uint uVar68;
  uint uVar70;
  undefined1 auVar63 [16];
  float fVar69;
  float fVar71;
  uint uVar72;
  float fVar73;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  int iVar74;
  int iVar76;
  int iVar77;
  float fVar78;
  int iVar89;
  int iVar94;
  undefined1 auVar80 [12];
  undefined8 uVar79;
  undefined1 auVar82 [16];
  int iVar100;
  undefined1 auVar83 [16];
  int iVar75;
  int iVar90;
  int iVar95;
  undefined1 auVar81 [12];
  int iVar101;
  undefined1 auVar84 [16];
  int iVar91;
  int iVar92;
  int iVar96;
  int iVar97;
  int iVar102;
  int iVar103;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar93;
  float fVar98;
  float fVar104;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined8 uVar99;
  uint uVar105;
  float fVar109;
  int iVar116;
  uint uVar117;
  int iVar118;
  uint uVar119;
  uint uVar121;
  int iVar122;
  uint uVar123;
  int iVar124;
  uint uVar125;
  undefined1 auVar110 [12];
  uint uVar115;
  undefined1 auVar111 [16];
  int iVar106;
  int iVar107;
  uint uVar108;
  uint uVar127;
  int iVar128;
  uint uVar129;
  int iVar130;
  uint uVar131;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar120;
  float fVar126;
  float fVar132;
  undefined1 auVar114 [16];
  uint uVar133;
  uint uVar136;
  uint uVar137;
  uint uVar138;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  float fVar139;
  float fVar143;
  float fVar144;
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  float fVar145;
  undefined1 auVar142 [16];
  uint uVar146;
  float fVar151;
  uint uVar159;
  uint uVar165;
  undefined1 auVar152 [16];
  uint uVar171;
  undefined1 auVar153 [16];
  uint uVar147;
  uint uVar148;
  uint uVar149;
  uint uVar160;
  uint uVar161;
  uint uVar162;
  uint uVar166;
  uint uVar167;
  uint uVar168;
  uint uVar172;
  uint uVar173;
  uint uVar174;
  undefined1 auVar154 [16];
  uint uVar150;
  uint uVar163;
  uint uVar169;
  uint uVar175;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  float fVar164;
  float fVar170;
  float fVar176;
  undefined1 auVar158 [16];
  uint uVar177;
  uint uVar178;
  uint uVar179;
  float fVar180;
  uint uVar186;
  uint uVar190;
  undefined1 auVar181 [16];
  uint uVar194;
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  uint uVar187;
  uint uVar191;
  uint uVar195;
  undefined1 auVar184 [16];
  uint uVar188;
  float fVar189;
  uint uVar192;
  float fVar193;
  uint uVar196;
  float fVar197;
  undefined1 auVar185 [16];
  uint uVar198;
  uint uVar199;
  uint uVar200;
  uint uVar201;
  uint uVar202;
  float fVar203;
  uint uVar208;
  uint uVar209;
  uint uVar210;
  uint uVar211;
  uint uVar212;
  uint uVar214;
  uint uVar215;
  uint uVar216;
  uint uVar217;
  uint uVar218;
  uint uVar220;
  uint uVar221;
  uint uVar222;
  uint uVar223;
  uint uVar224;
  undefined1 auVar204 [16];
  float fVar213;
  float fVar219;
  float fVar225;
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  uint local_7a8;
  uint uStack_7a4;
  uint uStack_7a0;
  uint uStack_79c;
  uint local_72c;
  undefined1 local_728 [16];
  undefined1 local_718 [16];
  float local_708;
  float fStack_704;
  float fStack_700;
  undefined4 uStack_6fc;
  undefined1 local_6f8 [16];
  undefined1 local_6e8 [16];
  undefined1 local_6d8 [16];
  undefined1 local_6c8 [16];
  undefined1 local_6b8 [16];
  undefined1 local_6a8 [16];
  undefined1 local_698 [16];
  undefined1 local_688 [16];
  undefined1 local_678 [16];
  CastSphereVsTriangles local_668 [384];
  uint local_4e8 [2];
  undefined8 auStack_4e0 [63];
  int local_2e8;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float local_2b8;
  float local_298;
  float fStack_294;
  float fStack_290;
  long local_280;
  undefined1 local_268 [8];
  float fStack_260;
  uint local_258;
  uint uStack_254;
  uint uStack_250;
  int iStack_24c;
  CastSphereVsTriangles local_248 [8];
  undefined8 auStack_240 [63];
  byte local_48 [8];
  long local_40;
  
  bVar59 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::CastSphereVsTriangles::CastSphereVsTriangles
            ((CastSphereVsTriangles *)&local_2d8,param_1,param_2,param_5,param_6,param_8);
  auVar82 = *(undefined1 (*) [16])(param_1 + 0x60);
  uVar38 = param_7[1];
  pCVar42 = (CastSphereVsTriangles *)(ulong)uVar38;
  lVar8 = *(long *)(param_3 + 0x48);
  local_2e8 = 0;
  auVar63._0_4_ = 0.0 - auVar82._0_4_;
  auVar63._4_4_ = 0.0 - auVar82._4_4_;
  auVar63._8_4_ = 0.0 - auVar82._8_4_;
  auVar63._12_4_ = 0.0 - auVar82._12_4_;
  fVar1 = *(float *)(lVar8 + 0x20);
  fVar2 = *(float *)(lVar8 + 0x28);
  fVar3 = *(float *)(lVar8 + 0x2c);
  fVar4 = *(float *)(lVar8 + 0x30);
  auVar63 = maxps(auVar63,auVar82);
  fVar5 = *(float *)(lVar8 + 0x34);
  fVar6 = *(float *)(lVar8 + 0x24);
  local_258 = -(uint)(auVar63._0_4_ <= _LC23);
  uStack_254 = -(uint)(auVar63._4_4_ <= _LC23);
  uStack_250 = -(uint)(auVar63._8_4_ <= _LC23);
  iStack_24c = -(uint)(auVar63._12_4_ <= _LC23);
  uVar60 = (int)local_258 >> 0x1f;
  uVar68 = (int)uStack_254 >> 0x1f;
  uVar70 = (int)uStack_250 >> 0x1f;
  uVar72 = iStack_24c >> 0x1f;
  uVar61 = *(uint *)(lVar8 + 0x18);
  auVar157._0_4_ = ~uVar60 & (uint)auVar82._0_4_;
  auVar157._4_4_ = ~uVar68 & (uint)auVar82._4_4_;
  auVar157._8_4_ = ~uVar70 & (uint)auVar82._8_4_;
  auVar157._12_4_ = ~uVar72 & (uint)auVar82._12_4_;
  local_4e8[0] = uVar61;
  auVar140._4_4_ = _LC2;
  auVar140._0_4_ = _LC2;
  auVar140._8_4_ = _LC2;
  auVar140._12_4_ = _LC2;
  auVar82._0_4_ = uVar60 & _LC2;
  auVar82._4_4_ = uVar68 & _LC2;
  auVar82._8_4_ = uVar70 & _LC2;
  auVar82._12_4_ = uVar72 & _LC2;
  _local_268 = divps(auVar140,auVar82 | auVar157);
  bVar7 = *(byte *)(lVar8 + 0x1c);
  bVar45 = (byte)uVar38;
  bVar46 = bVar45 + bVar7;
  uVar60 = *param_7;
  lVar39 = 0;
  uVar53 = uVar61 >> 0x1c;
  uVar68 = __LC9;
  uVar70 = _UNK_00112494;
  uVar72 = _UNK_00112498;
  uVar105 = _UNK_0011249c;
  if (uVar53 == 0) goto LAB_00103552;
LAB_001034a0:
  if (uVar53 != 0xf) {
    pauVar40 = (undefined1 (*) [16])local_668;
    piVar51 = (int *)((ulong)((uVar61 & 0xfffffff) * 4) + lVar8);
    pCVar56 = (CastSphereVsTriangles *)(piVar51 + 1);
    uVar108 = *piVar51 * 4 & 0x7ffffffc;
    pCVar42 = pCVar56 + (ulong)(uVar53 + 3 >> 2) * 0x10;
    lVar39 = (ulong)uVar108 + 4;
    pauVar44 = pauVar40;
    pCVar48 = pCVar56;
    uVar38 = uVar53;
    do {
      uVar115 = *(uint *)pCVar48;
      uVar117 = *(uint *)(pCVar48 + 4);
      uVar119 = *(uint *)(pCVar48 + 8);
      uVar41 = (ulong)((uVar115 >> 0x18) << 3);
      uVar47 = (ulong)((uVar115 >> 8 & 0xff) << 3);
      uVar58 = (ulong)(uVar115 >> 0xd & 0x7f8);
      uVar52 = (ulong)(uVar115 * 8 & 0x7f8);
      uVar115 = *(uint *)((long)piVar51 + uVar47 + uVar108);
      uVar121 = *(uint *)((long)piVar51 + uVar58 + uVar108);
      uVar123 = *(uint *)((long)piVar51 + uVar41 + uVar108);
      uVar125 = *(uint *)((long)piVar51 + uVar52 + uVar108);
      uVar55 = (ulong)(uVar117 >> 0xd & 0x7f8);
      uVar127 = *(uint *)((long)piVar51 + uVar41 + lVar39);
      uVar41 = (ulong)((uVar117 >> 0x18) << 3);
      uVar129 = *(uint *)((long)piVar51 + uVar52 + lVar39);
      uVar131 = *(uint *)((long)piVar51 + uVar58 + lVar39);
      uVar133 = *(uint *)((long)piVar51 + uVar41 + uVar108);
      uVar136 = *(uint *)((long)piVar51 + uVar41 + lVar39);
      uVar137 = *(uint *)((long)piVar51 + uVar47 + lVar39);
      uVar47 = (ulong)((uVar117 >> 8 & 0xff) * 8);
      uVar41 = (ulong)(uVar117 * 8 & 0x7f8);
      uVar117 = *(uint *)((long)piVar51 + uVar41 + uVar108);
      uVar138 = *(uint *)((long)piVar51 + uVar41 + lVar39);
      uVar52 = (ulong)((uVar119 >> 0x18) << 3);
      uVar41 = (ulong)(uVar119 >> 0xd & 0x7f8);
      uVar146 = *(uint *)((long)piVar51 + uVar55 + uVar108);
      uVar147 = *(uint *)((long)piVar51 + uVar47 + uVar108);
      uVar148 = *(uint *)((long)piVar51 + uVar55 + lVar39);
      uVar149 = *(uint *)((long)piVar51 + uVar47 + lVar39);
      uVar150 = *(uint *)((long)piVar51 + uVar41 + uVar108);
      uVar55 = (ulong)(uVar119 * 8 & 0x7f8);
      uVar47 = (ulong)((uVar119 >> 8 & 0xff) << 3);
      uVar119 = *(uint *)((long)piVar51 + uVar47 + lVar39);
      uVar159 = *(uint *)((long)piVar51 + uVar55 + uVar108);
      uVar160 = *(uint *)((long)piVar51 + uVar52 + uVar108);
      uVar161 = *(uint *)((long)piVar51 + uVar47 + uVar108);
      uVar162 = *(uint *)((long)piVar51 + uVar41 + lVar39);
      uVar163 = *(uint *)((long)piVar51 + uVar52 + lVar39);
      uVar165 = *(uint *)((long)piVar51 + uVar55 + lVar39);
      local_718._4_4_ = (float)(uVar115 >> 0x15 | (uVar137 >> 0x15) << 0xb) * fVar4 + fVar6;
      local_718._0_4_ = (float)(int)(uVar115 & uVar70) * fVar3 + fVar1;
      local_718._8_4_ = (float)(int)(uVar137 & uVar70) * fVar5 + fVar2;
      local_718._12_4_ = 0;
      local_728._4_4_ = (float)(uVar125 >> 0x15 | (uVar129 >> 0x15) << 0xb) * fVar4 + fVar6;
      local_728._0_4_ = (float)(int)(uVar125 & uVar68) * fVar3 + fVar1;
      local_728._8_4_ = (float)(int)(uVar129 & uVar68) * fVar5 + fVar2;
      local_728._12_4_ = 0;
      local_6f8._4_4_ = (float)(uVar123 >> 0x15 | (uVar127 >> 0x15) << 0xb) * fVar4 + fVar6;
      local_6f8._0_4_ = (float)(int)(uVar123 & uVar105) * fVar3 + fVar1;
      local_6f8._8_4_ = (float)(int)(uVar127 & uVar105) * fVar5 + fVar2;
      local_6f8._12_4_ = 0;
      local_708 = (float)(int)(uVar121 & uVar72) * fVar3 + fVar1;
      fStack_704 = (float)(uVar121 >> 0x15 | (uVar131 >> 0x15) << 0xb) * fVar4 + fVar6;
      fStack_700 = (float)(int)(uVar131 & uVar72) * fVar5 + fVar2;
      uStack_6fc = 0;
      local_6d8._4_4_ = (float)(uVar147 >> 0x15 | (uVar149 >> 0x15) << 0xb) * fVar4 + fVar6;
      local_6d8._0_4_ = (float)(int)(uVar147 & uVar70) * fVar3 + fVar1;
      local_6d8._8_4_ = (float)(int)(uVar149 & uVar70) * fVar5 + fVar2;
      local_6d8._12_4_ = 0;
      local_6b8._4_4_ = (float)(uVar133 >> 0x15 | (uVar136 >> 0x15) << 0xb) * fVar4 + fVar6;
      local_6b8._0_4_ = (float)(int)(uVar133 & uVar105) * fVar3 + fVar1;
      local_6b8._8_4_ = (float)(int)(uVar136 & uVar105) * fVar5 + fVar2;
      local_6b8._12_4_ = 0;
      local_6c8._4_4_ = (float)(uVar146 >> 0x15 | (uVar148 >> 0x15) << 0xb) * fVar4 + fVar6;
      local_6c8._0_4_ = (float)(int)(uVar146 & uVar72) * fVar3 + fVar1;
      local_6c8._8_4_ = (float)(int)(uVar148 & uVar72) * fVar5 + fVar2;
      local_6c8._12_4_ = 0;
      local_698._4_4_ = (float)(uVar161 >> 0x15 | (uVar119 >> 0x15) << 0xb) * fVar4 + fVar6;
      local_698._0_4_ = (float)(int)(uVar161 & uVar70) * fVar3 + fVar1;
      local_698._8_4_ = (float)(int)(uVar119 & uVar70) * fVar5 + fVar2;
      local_698._12_4_ = 0;
      local_6e8._4_4_ = (float)(uVar117 >> 0x15 | (uVar138 >> 0x15) << 0xb) * fVar4 + fVar6;
      local_6e8._0_4_ = (float)(int)(uVar117 & uVar68) * fVar3 + fVar1;
      local_6e8._8_4_ = (float)(int)(uVar138 & uVar68) * fVar5 + fVar2;
      local_6e8._12_4_ = 0;
      local_6a8._4_4_ = (float)(uVar159 >> 0x15 | (uVar165 >> 0x15) << 0xb) * fVar4 + fVar6;
      local_6a8._0_4_ = (float)(int)(uVar159 & uVar68) * fVar3 + fVar1;
      local_6a8._8_4_ = (float)(int)(uVar165 & uVar68) * fVar5 + fVar2;
      local_6a8._12_4_ = 0;
      local_678._4_4_ = (float)(uVar160 >> 0x15 | (uVar163 >> 0x15) << 0xb) * fVar4 + fVar6;
      local_678._0_4_ = (float)(int)(uVar160 & uVar105) * fVar3 + fVar1;
      local_678._8_4_ = (float)(int)(uVar163 & uVar105) * fVar5 + fVar2;
      local_678._12_4_ = 0;
      local_688._4_4_ = (float)(uVar150 >> 0x15 | (uVar162 >> 0x15) << 0xb) * fVar4 + fVar6;
      local_688._0_4_ = (float)(int)(uVar150 & uVar72) * fVar3 + fVar1;
      local_688._8_4_ = (float)(int)(uVar162 & uVar72) * fVar5 + fVar2;
      local_688._12_4_ = 0;
      uVar115 = uVar38;
      if (0 < (int)uVar38) {
        lVar50 = 0;
        pauVar43 = pauVar44;
        do {
          puVar49 = (undefined8 *)(local_728 + lVar50);
          uVar79 = *(undefined8 *)(local_728 + lVar50 + 8);
          auVar82 = *(undefined1 (*) [16])(local_6e8 + lVar50);
          uVar115 = uVar115 - 1;
          uVar99 = *(undefined8 *)(local_6a8 + lVar50);
          uVar27 = *(undefined8 *)(local_6a8 + lVar50 + 8);
          pauVar44 = pauVar43 + 3;
          lVar50 = lVar50 + 0x10;
          *(undefined8 *)*pauVar43 = *puVar49;
          *(undefined8 *)((long)*pauVar43 + 8) = uVar79;
          pauVar43[1] = auVar82;
          *(undefined8 *)pauVar43[2] = uVar99;
          *(undefined8 *)((long)(pauVar43 + 2) + 8) = uVar27;
          if (3 < (int)(uVar38 - uVar115)) break;
          pauVar43 = pauVar44;
        } while (0 < (int)uVar115);
      }
      uVar38 = uVar115;
      pCVar48 = pCVar48 + 0x10;
    } while (pCVar48 < pCVar42);
    pbVar57 = local_48;
    uVar38 = uVar53;
    do {
      if (0 < (int)uVar38) {
        lVar39 = 1;
        do {
          lVar50 = lVar39;
          uVar38 = uVar38 - 1;
          *(CastSphereVsTriangles *)(pbVar57 + lVar50 + -1) = pCVar56[lVar50 + 0xb];
          lVar39 = lVar50 + 1;
        } while ((int)lVar50 < 4 && 0 < (int)uVar38);
        pbVar57 = pbVar57 + lVar50;
      }
      pCVar56 = pCVar56 + 0x10;
    } while (pCVar56 < pCVar42);
    pauVar44 = pauVar40 + (int)(uVar53 * 3);
    if (pauVar40 < pauVar44) {
      lVar39 = 0;
      do {
        local_72c = (int)lVar39 << (bVar46 & 0x1f) |
                    ~(7 << (bVar46 & 0x1f)) &
                    (~((int)(1L << (bVar7 & 0x3f)) + -1 << (bVar45 & 0x1f)) & uVar60 |
                    (uVar61 & 0xfffffff) << (bVar45 & 0x1f));
        pCVar42 = (CastSphereVsTriangles *)&local_2d8;
        JPH::CastSphereVsTriangles::Cast
                  (*(undefined8 *)*pauVar40,*(undefined8 *)((long)*pauVar40 + 8),
                   *(undefined8 *)pauVar40[1],*(undefined8 *)((long)(pauVar40 + 1) + 8),
                   *(undefined8 *)pauVar40[2],*(undefined8 *)((long)(pauVar40 + 2) + 8),
                   (CastSphereVsTriangles *)&local_2d8,local_48[lVar39] >> 5,&local_72c);
        fVar62 = *(float *)(local_280 + 8);
        if (fVar62 <= _LC20) goto LAB_001034ed;
        pauVar40 = pauVar40 + 3;
        lVar39 = lVar39 + 1;
        uVar68 = __LC9;
        uVar70 = _UNK_00112494;
        uVar72 = _UNK_00112498;
        uVar105 = _UNK_0011249c;
      } while (pauVar40 < pauVar44);
      goto LAB_001034b7;
    }
  }
  fVar62 = *(float *)(local_280 + 8);
LAB_001034b7:
  do {
    uVar38 = (uint)pCVar42;
    if (fVar62 <= _LC20) {
LAB_001034ed:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar39 = (long)(local_2e8 + -1);
    fVar62 = (float)((uint)fVar62 & -(uint)(_LC21 < fVar62) | ~-(uint)(_LC21 < fVar62) & (uint)_LC21
                    );
    do {
      iVar74 = (int)lVar39;
      if (iVar74 < 0) goto LAB_001034ed;
      lVar50 = lVar39 * 4;
      lVar39 = lVar39 + -1;
    } while (fVar62 < *(float *)(local_248 + lVar50) || fVar62 == *(float *)(local_248 + lVar50));
    local_2e8 = iVar74;
    lVar39 = (long)iVar74;
    uVar61 = local_4e8[iVar74];
    uVar53 = uVar61 >> 0x1c;
    if (uVar53 != 0) goto LAB_001034a0;
LAB_00103552:
    auVar111._4_4_ = _UNK_001124c4;
    auVar111._0_4_ = __LC14;
    auVar111._8_4_ = _UNK_001124c8;
    auVar111._12_4_ = _UNK_001124cc;
    lVar50 = lVar39 * 4;
    pauVar40 = (undefined1 (*) [16])((ulong)(uVar61 * 4) + lVar8);
    auVar82 = *pauVar40;
    auVar12._10_2_ = 0;
    auVar12._0_10_ = auVar82._0_10_;
    auVar12._12_2_ = auVar82._6_2_;
    auVar18._8_2_ = auVar82._4_2_;
    auVar18._0_8_ = auVar82._0_8_;
    auVar18._10_4_ = auVar12._10_4_;
    auVar32._6_8_ = 0;
    auVar32._0_6_ = auVar18._8_6_;
    auVar152._6_8_ = SUB148(auVar32 << 0x40,6);
    auVar152._4_2_ = auVar82._2_2_;
    auVar152._0_2_ = auVar82._0_2_;
    auVar152._2_2_ = 0;
    auVar152._14_2_ = 0;
    auVar111 = auVar111 & auVar152;
    auVar82 = __LC11 & auVar152;
    auVar152 = auVar152 & __LC19;
    iVar74 = auVar82._0_4_ * 0x2000;
    iVar89 = auVar82._4_4_ * 0x2000;
    iVar94 = auVar82._8_4_ * 0x2000;
    iVar100 = auVar82._12_4_ * 0x2000;
    uVar198 = __LC12 + iVar74;
    uVar208 = _UNK_001124b4 + iVar89;
    uVar214 = _UNK_001124b8 + iVar94;
    uVar220 = _UNK_001124bc + iVar100;
    uVar133 = (int)-(uint)(auVar111._0_4_ == __LC14) >> 0x1f;
    uVar136 = (int)-(uint)(auVar111._4_4_ == _UNK_001124c4) >> 0x1f;
    uVar137 = (int)-(uint)(auVar111._8_4_ == _UNK_001124c8) >> 0x1f;
    uVar138 = (int)-(uint)(auVar111._12_4_ == _UNK_001124cc) >> 0x1f;
    uVar105 = (int)-(uint)(auVar111._0_4_ == 0) >> 0x1f;
    uVar115 = (int)-(uint)(auVar111._4_4_ == 0) >> 0x1f;
    uVar121 = (int)-(uint)(auVar111._8_4_ == 0) >> 0x1f;
    uVar127 = (int)-(uint)(auVar111._12_4_ == 0) >> 0x1f;
    auVar82 = *pauVar40;
    auVar181._4_4_ = _UNK_001124c4;
    auVar181._0_4_ = __LC14;
    auVar181._8_4_ = _UNK_001124c8;
    auVar181._12_4_ = _UNK_001124cc;
    uVar61 = auVar82._8_4_;
    auVar80._0_8_ = auVar82._8_8_;
    auVar80._8_4_ = uVar61;
    auVar9._10_2_ = 0;
    auVar9._0_10_ = auVar80._0_10_;
    auVar9._12_2_ = auVar82._14_2_;
    auVar13._8_2_ = auVar82._12_2_;
    auVar13._0_8_ = auVar80._0_8_;
    auVar13._10_4_ = auVar9._10_4_;
    auVar33._6_8_ = 0;
    auVar33._0_6_ = auVar13._8_6_;
    auVar21._4_2_ = auVar82._10_2_;
    auVar21._0_4_ = uVar61;
    auVar21._6_8_ = SUB148(auVar33 << 0x40,6);
    auVar83._0_4_ = uVar61 & 0xffff;
    auVar83._4_10_ = auVar21._4_10_;
    auVar83._14_2_ = 0;
    auVar181 = auVar181 & auVar83;
    auVar82 = __LC11 & auVar83;
    auVar83 = auVar83 & __LC19;
    iVar106 = auVar82._0_4_ * 0x2000;
    iVar116 = auVar82._4_4_ * 0x2000;
    iVar122 = auVar82._8_4_ * 0x2000;
    iVar128 = auVar82._12_4_ * 0x2000;
    uVar199 = __LC12 + iVar106;
    uVar209 = _UNK_001124b4 + iVar116;
    uVar215 = _UNK_001124b8 + iVar122;
    uVar221 = _UNK_001124bc + iVar128;
    uVar146 = (int)-(uint)(auVar181._0_4_ == __LC14) >> 0x1f;
    uVar159 = (int)-(uint)(auVar181._4_4_ == _UNK_001124c4) >> 0x1f;
    uVar165 = (int)-(uint)(auVar181._8_4_ == _UNK_001124c8) >> 0x1f;
    uVar171 = (int)-(uint)(auVar181._12_4_ == _UNK_001124cc) >> 0x1f;
    uVar177 = (int)-(uint)(auVar181._0_4_ == 0) >> 0x1f;
    uVar186 = (int)-(uint)(auVar181._4_4_ == 0) >> 0x1f;
    uVar190 = (int)-(uint)(auVar181._8_4_ == 0) >> 0x1f;
    uVar194 = (int)-(uint)(auVar181._12_4_ == 0) >> 0x1f;
    auVar82 = pauVar40[1];
    auVar153._4_4_ = _UNK_001124c4;
    auVar153._0_4_ = __LC14;
    auVar153._8_4_ = _UNK_001124c8;
    auVar153._12_4_ = _UNK_001124cc;
    auVar10._10_2_ = 0;
    auVar10._0_10_ = auVar82._0_10_;
    auVar10._12_2_ = auVar82._6_2_;
    auVar14._8_2_ = auVar82._4_2_;
    auVar14._0_8_ = auVar82._0_8_;
    auVar14._10_4_ = auVar10._10_4_;
    auVar34._6_8_ = 0;
    auVar34._0_6_ = auVar14._8_6_;
    auVar22._4_2_ = auVar82._2_2_;
    auVar22._0_4_ = auVar82._0_4_;
    auVar22._6_8_ = SUB148(auVar34 << 0x40,6);
    auVar182._0_4_ = auVar82._0_4_ & 0xffff;
    auVar182._4_10_ = auVar22._4_10_;
    auVar182._14_2_ = 0;
    auVar82 = pauVar40[1];
    auVar153 = auVar153 & auVar182;
    auVar63 = __LC11 & auVar182;
    iVar75 = auVar63._0_4_ * 0x2000;
    iVar90 = auVar63._4_4_ * 0x2000;
    iVar95 = auVar63._8_4_ * 0x2000;
    iVar101 = auVar63._12_4_ * 0x2000;
    auVar182 = auVar182 & __LC19;
    uVar200 = __LC12 + iVar75;
    uVar210 = _UNK_001124b4 + iVar90;
    uVar216 = _UNK_001124b8 + iVar95;
    uVar222 = _UNK_001124bc + iVar101;
    auVar183._4_4_ = _UNK_001124c4;
    auVar183._0_4_ = __LC14;
    auVar183._8_4_ = _UNK_001124c8;
    auVar183._12_4_ = _UNK_001124cc;
    uVar53 = (int)-(uint)(auVar153._0_4_ == __LC14) >> 0x1f;
    uVar117 = (int)-(uint)(auVar153._4_4_ == _UNK_001124c4) >> 0x1f;
    uVar123 = (int)-(uint)(auVar153._8_4_ == _UNK_001124c8) >> 0x1f;
    uVar129 = (int)-(uint)(auVar153._12_4_ == _UNK_001124cc) >> 0x1f;
    uVar147 = (int)-(uint)(auVar153._0_4_ == 0) >> 0x1f;
    uVar160 = (int)-(uint)(auVar153._4_4_ == 0) >> 0x1f;
    uVar166 = (int)-(uint)(auVar153._8_4_ == 0) >> 0x1f;
    uVar172 = (int)-(uint)(auVar153._12_4_ == 0) >> 0x1f;
    auVar81._0_8_ = auVar82._8_8_;
    auVar81._8_4_ = auVar82._8_4_;
    auVar15._10_2_ = 0;
    auVar15._0_10_ = auVar81._0_10_;
    auVar15._12_2_ = auVar82._14_2_;
    auVar19._8_2_ = auVar82._12_2_;
    auVar19._0_8_ = auVar81._0_8_;
    auVar19._10_4_ = auVar15._10_4_;
    auVar35._6_8_ = 0;
    auVar35._0_6_ = auVar19._8_6_;
    auVar24._4_2_ = auVar82._10_2_;
    auVar24._0_4_ = auVar82._8_4_;
    auVar24._6_8_ = SUB148(auVar35 << 0x40,6);
    auVar84._0_2_ = auVar82._8_2_;
    auVar84._2_2_ = 0;
    auVar84._4_10_ = auVar24._4_10_;
    auVar84._14_2_ = 0;
    auVar183 = auVar183 & auVar84;
    auVar82 = __LC11 & auVar84;
    auVar84 = auVar84 & __LC19;
    iVar107 = auVar82._0_4_ * 0x2000;
    iVar118 = auVar82._4_4_ * 0x2000;
    iVar124 = auVar82._8_4_ * 0x2000;
    iVar130 = auVar82._12_4_ * 0x2000;
    uVar201 = __LC12 + iVar107;
    uVar211 = _UNK_001124b4 + iVar118;
    uVar217 = _UNK_001124b8 + iVar124;
    uVar223 = _UNK_001124bc + iVar130;
    uVar148 = (int)-(uint)(auVar183._0_4_ == __LC14) >> 0x1f;
    uVar161 = (int)-(uint)(auVar183._4_4_ == _UNK_001124c4) >> 0x1f;
    uVar167 = (int)-(uint)(auVar183._8_4_ == _UNK_001124c8) >> 0x1f;
    uVar173 = (int)-(uint)(auVar183._12_4_ == _UNK_001124cc) >> 0x1f;
    uVar178 = (int)-(uint)(auVar183._0_4_ == 0) >> 0x1f;
    uVar187 = (int)-(uint)(auVar183._4_4_ == 0) >> 0x1f;
    uVar191 = (int)-(uint)(auVar183._8_4_ == 0) >> 0x1f;
    uVar195 = (int)-(uint)(auVar183._12_4_ == 0) >> 0x1f;
    auVar82 = pauVar40[2];
    auVar226._4_4_ = _UNK_001124c4;
    auVar226._0_4_ = __LC14;
    auVar226._8_4_ = _UNK_001124c8;
    auVar226._12_4_ = _UNK_001124cc;
    auVar11._10_2_ = 0;
    auVar11._0_10_ = auVar82._0_10_;
    auVar11._12_2_ = auVar82._6_2_;
    auVar16._8_2_ = auVar82._4_2_;
    auVar16._0_8_ = auVar82._0_8_;
    auVar16._10_4_ = auVar11._10_4_;
    auVar36._6_8_ = 0;
    auVar36._0_6_ = auVar16._8_6_;
    auVar23._4_2_ = auVar82._2_2_;
    auVar23._0_4_ = auVar82._0_4_;
    auVar23._6_8_ = SUB148(auVar36 << 0x40,6);
    auVar184._0_4_ = auVar82._0_4_ & 0xffff;
    auVar184._4_10_ = auVar23._4_10_;
    auVar184._14_2_ = 0;
    auVar82 = pauVar40[2];
    auVar226 = auVar226 & auVar184;
    auVar63 = __LC11 & auVar184;
    auVar184 = auVar184 & __LC19;
    iVar76 = auVar63._0_4_ * 0x2000;
    iVar91 = auVar63._4_4_ * 0x2000;
    iVar96 = auVar63._8_4_ * 0x2000;
    iVar102 = auVar63._12_4_ * 0x2000;
    uVar202 = __LC12 + iVar76;
    uVar212 = _UNK_001124b4 + iVar91;
    uVar218 = _UNK_001124b8 + iVar96;
    uVar224 = _UNK_001124bc + iVar102;
    uVar108 = (int)-(uint)(auVar226._0_4_ == __LC14) >> 0x1f;
    uVar119 = (int)-(uint)(auVar226._4_4_ == _UNK_001124c4) >> 0x1f;
    uVar125 = (int)-(uint)(auVar226._8_4_ == _UNK_001124c8) >> 0x1f;
    uVar131 = (int)-(uint)(auVar226._12_4_ == _UNK_001124cc) >> 0x1f;
    uVar149 = (int)-(uint)(auVar226._0_4_ == 0) >> 0x1f;
    uVar162 = (int)-(uint)(auVar226._4_4_ == 0) >> 0x1f;
    uVar168 = (int)-(uint)(auVar226._8_4_ == 0) >> 0x1f;
    uVar174 = (int)-(uint)(auVar226._12_4_ == 0) >> 0x1f;
    auVar110._0_8_ = auVar82._8_8_;
    auVar110._8_4_ = auVar82._8_4_;
    auVar17._10_2_ = 0;
    auVar17._0_10_ = auVar110._0_10_;
    auVar17._12_2_ = auVar82._14_2_;
    auVar20._8_2_ = auVar82._12_2_;
    auVar20._0_8_ = auVar110._0_8_;
    auVar20._10_4_ = auVar17._10_4_;
    auVar37._6_8_ = 0;
    auVar37._0_6_ = auVar20._8_6_;
    auVar25._4_2_ = auVar82._10_2_;
    auVar25._0_4_ = auVar82._8_4_;
    auVar25._6_8_ = SUB148(auVar37 << 0x40,6);
    auVar112._0_2_ = auVar82._8_2_;
    auVar112._2_2_ = 0;
    auVar112._4_10_ = auVar25._4_10_;
    auVar112._14_2_ = 0;
    auVar154._4_4_ = _UNK_001124c4;
    auVar154._0_4_ = __LC14;
    auVar154._8_4_ = _UNK_001124c8;
    auVar154._12_4_ = _UNK_001124cc;
    auVar82 = __LC11 & auVar112;
    auVar140 = __LC19 & auVar112;
    auVar154 = auVar154 & auVar112;
    iVar77 = auVar82._0_4_ * 0x2000;
    iVar92 = auVar82._4_4_ * 0x2000;
    iVar97 = auVar82._8_4_ * 0x2000;
    iVar103 = auVar82._12_4_ * 0x2000;
    uVar179 = __LC12 + iVar77;
    uVar188 = _UNK_001124b4 + iVar92;
    uVar192 = _UNK_001124b8 + iVar97;
    uVar196 = _UNK_001124bc + iVar103;
    uVar61 = (int)-(uint)(__LC14 == auVar154._0_4_) >> 0x1f;
    uVar68 = (int)-(uint)(_UNK_001124c4 == auVar154._4_4_) >> 0x1f;
    uVar70 = (int)-(uint)(_UNK_001124c8 == auVar154._8_4_) >> 0x1f;
    uVar72 = (int)-(uint)(_UNK_001124cc == auVar154._12_4_) >> 0x1f;
    uVar150 = (int)-(uint)(auVar154._0_4_ == 0) >> 0x1f;
    uVar163 = (int)-(uint)(auVar154._4_4_ == 0) >> 0x1f;
    uVar169 = (int)-(uint)(auVar154._8_4_ == 0) >> 0x1f;
    uVar175 = (int)-(uint)(auVar154._12_4_ == 0) >> 0x1f;
    auVar113._0_8_ =
         CONCAT44((float)(auVar152._4_4_ << 0x10 |
                         (uint)((float)(iVar89 + _UNK_001124e4) + _LC18) & uVar115 |
                         ~uVar115 & (uVar136 & (uVar208 | _UNK_001124d4) | ~uVar136 & uVar208)) *
                  local_298,
                  (float)(auVar152._0_4_ << 0x10 |
                         (uint)((float)(iVar74 + __LC16) + _LC18) & uVar105 |
                         ~uVar105 & (uVar133 & (uVar198 | __LC15) | ~uVar133 & uVar198)) * local_298
                 );
    auVar113._8_4_ =
         (float)(auVar152._8_4_ << 0x10 |
                (uint)((float)(iVar94 + _UNK_001124e8) + _LC18) & uVar121 |
                ~uVar121 & (uVar137 & (uVar214 | _UNK_001124d8) | ~uVar137 & uVar214)) * local_298;
    auVar113._12_4_ =
         (float)(auVar152._12_4_ << 0x10 |
                (uint)((float)(iVar100 + _UNK_001124ec) + _LC18) & uVar127 |
                ~uVar127 & (uVar138 & (uVar220 | _UNK_001124dc) | ~uVar138 & uVar220)) * local_298;
    auVar85._0_4_ =
         local_298 *
         (float)(auVar84._0_4_ << 0x10 |
                (uint)((float)(iVar107 + __LC16) + _LC18) & uVar178 |
                ~uVar178 & (uVar148 & (uVar201 | __LC15) | ~uVar148 & uVar201));
    auVar85._4_4_ =
         local_298 *
         (float)(auVar84._4_4_ << 0x10 |
                (uint)((float)(iVar118 + _UNK_001124e4) + _LC18) & uVar187 |
                ~uVar187 & (uVar161 & (uVar211 | _UNK_001124d4) | ~uVar161 & uVar211));
    auVar85._8_4_ =
         local_298 *
         (float)(auVar84._8_4_ << 0x10 |
                (uint)((float)(iVar124 + _UNK_001124e8) + _LC18) & uVar191 |
                ~uVar191 & (uVar167 & (uVar217 | _UNK_001124d8) | ~uVar167 & uVar217));
    auVar85._12_4_ =
         local_298 *
         (float)(auVar84._12_4_ << 0x10 |
                (uint)((float)(iVar130 + _UNK_001124ec) + _LC18) & uVar195 |
                ~uVar195 & (uVar173 & (uVar223 | _UNK_001124dc) | ~uVar173 & uVar223));
    auVar155._8_4_ = auVar113._8_4_;
    auVar155._0_8_ = auVar113._0_8_;
    auVar155._12_4_ = auVar113._12_4_;
    auVar82 = minps(auVar155,auVar85);
    auVar63 = maxps(auVar113,auVar85);
    auVar86._0_8_ =
         CONCAT44((float)(auVar83._4_4_ << 0x10 |
                         (uint)((float)(iVar116 + _UNK_001124e4) + _LC18) & uVar186 |
                         ~uVar186 & (uVar159 & (uVar209 | _UNK_001124d4) | ~uVar159 & uVar209)) *
                  fStack_294,
                  (float)(auVar83._0_4_ << 0x10 |
                         (uint)((float)(iVar106 + __LC16) + _LC18) & uVar177 |
                         ~uVar177 & (uVar146 & (uVar199 | __LC15) | ~uVar146 & uVar199)) *
                  fStack_294);
    auVar86._8_4_ =
         (float)(auVar83._8_4_ << 0x10 |
                (uint)((float)(iVar122 + _UNK_001124e8) + _LC18) & uVar190 |
                ~uVar190 & (uVar165 & (uVar215 | _UNK_001124d8) | ~uVar165 & uVar215)) * fStack_294;
    auVar86._12_4_ =
         (float)(auVar83._12_4_ << 0x10 |
                (uint)((float)(iVar128 + _UNK_001124ec) + _LC18) & uVar194 |
                ~uVar194 & (uVar171 & (uVar221 | _UNK_001124dc) | ~uVar171 & uVar221)) * fStack_294;
    fVar180 = auVar82._0_4_ - local_2b8;
    fVar189 = auVar82._4_4_ - local_2b8;
    fVar193 = auVar82._8_4_ - local_2b8;
    fVar197 = auVar82._12_4_ - local_2b8;
    auVar227._0_4_ =
         (float)(auVar184._0_4_ << 0x10 |
                ~uVar149 & (uVar108 & (uVar202 | __LC15) | ~uVar108 & uVar202) |
                (uint)((float)(iVar76 + __LC16) + _LC18) & uVar149) * fStack_294;
    auVar227._4_4_ =
         (float)(auVar184._4_4_ << 0x10 |
                ~uVar162 & (uVar119 & (uVar212 | _UNK_001124d4) | ~uVar119 & uVar212) |
                (uint)((float)(iVar91 + _UNK_001124e4) + _LC18) & uVar162) * fStack_294;
    auVar227._8_4_ =
         (float)(auVar184._8_4_ << 0x10 |
                ~uVar168 & (uVar125 & (uVar218 | _UNK_001124d8) | ~uVar125 & uVar218) |
                (uint)((float)(iVar96 + _UNK_001124e8) + _LC18) & uVar168) * fStack_294;
    auVar227._12_4_ =
         (float)(auVar184._12_4_ << 0x10 |
                ~uVar174 & (uVar131 & (uVar224 | _UNK_001124dc) | ~uVar131 & uVar224) |
                (uint)((float)(iVar102 + _UNK_001124ec) + _LC18) & uVar174) * fStack_294;
    auVar156._8_4_ = auVar86._8_4_;
    auVar156._0_8_ = auVar86._0_8_;
    auVar156._12_4_ = auVar86._12_4_;
    auVar157 = minps(auVar156,auVar227);
    auVar82 = maxps(auVar86,auVar227);
    fVar151 = auVar157._0_4_ - local_2b8;
    fVar164 = auVar157._4_4_ - local_2b8;
    fVar170 = auVar157._8_4_ - local_2b8;
    fVar176 = auVar157._12_4_ - local_2b8;
    fVar78 = auVar82._0_4_ + local_2b8;
    fVar93 = auVar82._4_4_ + local_2b8;
    fVar98 = auVar82._8_4_ + local_2b8;
    fVar104 = auVar82._12_4_ + local_2b8;
    auVar204._0_8_ =
         CONCAT44((float)(auVar182._4_4_ << 0x10 |
                         (uint)((float)(iVar90 + _UNK_001124e4) + _LC18) & uVar160 |
                         ~uVar160 & (uVar117 & (uVar210 | _UNK_001124d4) | ~uVar117 & uVar210)) *
                  fStack_290,
                  (float)(auVar182._0_4_ << 0x10 |
                         (uint)((float)(iVar75 + __LC16) + _LC18) & uVar147 |
                         ~uVar147 & (uVar53 & (uVar200 | __LC15) | ~uVar53 & uVar200)) * fStack_290)
    ;
    auVar204._8_4_ =
         (float)(auVar182._8_4_ << 0x10 |
                (uint)((float)(iVar95 + _UNK_001124e8) + _LC18) & uVar166 |
                ~uVar166 & (uVar123 & (uVar216 | _UNK_001124d8) | ~uVar123 & uVar216)) * fStack_290;
    auVar204._12_4_ =
         (float)(auVar182._12_4_ << 0x10 |
                (uint)((float)(iVar101 + _UNK_001124ec) + _LC18) & uVar172 |
                ~uVar172 & (uVar129 & (uVar222 | _UNK_001124dc) | ~uVar129 & uVar222)) * fStack_290;
    auVar228._0_4_ =
         fStack_290 *
         (float)(auVar140._0_4_ << 0x10 |
                ~uVar150 & (uVar61 & (uVar179 | __LC15) | ~uVar61 & uVar179) |
                (uint)((float)(iVar77 + __LC16) + _LC18) & uVar150);
    auVar228._4_4_ =
         fStack_290 *
         (float)(auVar140._4_4_ << 0x10 |
                ~uVar163 & (uVar68 & (uVar188 | _UNK_001124d4) | ~uVar68 & uVar188) |
                (uint)((float)(iVar92 + _UNK_001124e4) + _LC18) & uVar163);
    auVar228._8_4_ =
         fStack_290 *
         (float)(auVar140._8_4_ << 0x10 |
                ~uVar169 & (uVar70 & (uVar192 | _UNK_001124d8) | ~uVar70 & uVar192) |
                (uint)((float)(iVar97 + _UNK_001124e8) + _LC18) & uVar169);
    auVar228._12_4_ =
         fStack_290 *
         (float)(auVar140._12_4_ << 0x10 |
                ~uVar175 & (uVar72 & (uVar196 | _UNK_001124dc) | ~uVar72 & uVar196) |
                (uint)((float)(iVar103 + _UNK_001124ec) + _LC18) & uVar175);
    auVar141._8_4_ = auVar204._8_4_;
    auVar141._0_8_ = auVar204._0_8_;
    auVar141._12_4_ = auVar204._12_4_;
    auVar140 = maxps(auVar204,auVar228);
    auVar82 = minps(auVar141,auVar228);
    fVar139 = auVar82._0_4_ - local_2b8;
    fVar143 = auVar82._4_4_ - local_2b8;
    fVar144 = auVar82._8_4_ - local_2b8;
    fVar145 = auVar82._12_4_ - local_2b8;
    fVar62 = auVar140._0_4_ + local_2b8;
    fVar69 = auVar140._4_4_ + local_2b8;
    fVar71 = auVar140._8_4_ + local_2b8;
    fVar73 = auVar140._12_4_ + local_2b8;
    fVar203 = auVar63._0_4_ + local_2b8;
    fVar213 = auVar63._4_4_ + local_2b8;
    fVar219 = auVar63._8_4_ + local_2b8;
    fVar225 = auVar63._12_4_ + local_2b8;
    auVar185._0_8_ =
         CONCAT44((fVar189 - local_2d8) * (float)local_268._0_4_,
                  (fVar180 - local_2d8) * (float)local_268._0_4_);
    auVar185._8_4_ = (fVar193 - local_2d8) * (float)local_268._0_4_;
    auVar185._12_4_ = (fVar197 - local_2d8) * (float)local_268._0_4_;
    auVar158._0_8_ =
         CONCAT44((fVar164 - fStack_2d4) * (float)local_268._4_4_,
                  (fVar151 - fStack_2d4) * (float)local_268._4_4_);
    auVar158._8_4_ = (fVar170 - fStack_2d4) * (float)local_268._4_4_;
    auVar158._12_4_ = (fVar176 - fStack_2d4) * (float)local_268._4_4_;
    auVar205._0_4_ = (fVar203 - local_2d8) * (float)local_268._0_4_;
    auVar205._4_4_ = (fVar213 - local_2d8) * (float)local_268._0_4_;
    auVar205._8_4_ = (fVar219 - local_2d8) * (float)local_268._0_4_;
    auVar205._12_4_ = (fVar225 - local_2d8) * (float)local_268._0_4_;
    auVar142._0_8_ =
         CONCAT44((fVar143 - fStack_2d0) * fStack_260,(fVar139 - fStack_2d0) * fStack_260);
    auVar142._8_4_ = (fVar144 - fStack_2d0) * fStack_260;
    auVar142._12_4_ = (fVar145 - fStack_2d0) * fStack_260;
    fVar109 = (fVar78 - fStack_2d4) * (float)local_268._4_4_;
    fVar120 = (fVar93 - fStack_2d4) * (float)local_268._4_4_;
    fVar126 = (fVar98 - fStack_2d4) * (float)local_268._4_4_;
    fVar132 = (fVar104 - fStack_2d4) * (float)local_268._4_4_;
    auVar229._4_4_ = (fVar69 - fStack_2d0) * fStack_260;
    auVar229._0_4_ = (fVar62 - fStack_2d0) * fStack_260;
    auVar64._8_4_ = auVar185._8_4_;
    auVar64._0_8_ = auVar185._0_8_;
    auVar64._12_4_ = auVar185._12_4_;
    auVar157 = maxps(auVar185,auVar205);
    auVar82 = minps(auVar64,auVar205);
    auVar206._8_4_ = auVar158._8_4_;
    auVar206._0_8_ = auVar158._0_8_;
    auVar206._12_4_ = auVar158._12_4_;
    auVar28._4_4_ = fVar120;
    auVar28._0_4_ = fVar109;
    auVar28._8_4_ = fVar126;
    auVar28._12_4_ = fVar132;
    auVar111 = minps(auVar206,auVar28);
    auVar29._4_4_ = fVar120;
    auVar29._0_4_ = fVar109;
    auVar29._8_4_ = fVar126;
    auVar29._12_4_ = fVar132;
    auVar63 = maxps(auVar158,auVar29);
    auVar229._8_4_ = (fVar71 - fStack_2d0) * fStack_260;
    auVar229._12_4_ = (fVar73 - fStack_2d0) * fStack_260;
    uVar61 = (int)local_258 >> 0x1f;
    uVar70 = (int)uStack_254 >> 0x1f;
    auVar207._8_4_ = auVar142._8_4_;
    auVar207._0_8_ = auVar142._0_8_;
    auVar207._12_4_ = auVar142._12_4_;
    auVar140 = maxps(auVar142,auVar229);
    auVar181 = minps(auVar207,auVar229);
    uVar68 = (int)uStack_250 >> 0x1f;
    auVar134._0_4_ = (uint)_LC20 & uVar68;
    auVar134._4_4_ = (uint)_LC20 & uVar68;
    auVar134._8_4_ = (uint)_LC20 & uVar68;
    auVar134._12_4_ = (uint)_LC20 & uVar68;
    auVar230._0_4_ = ~uVar68 & auVar181._0_4_;
    auVar230._4_4_ = ~uVar68 & auVar181._4_4_;
    auVar230._8_4_ = ~uVar68 & auVar181._8_4_;
    auVar230._12_4_ = ~uVar68 & auVar181._12_4_;
    auVar231._0_4_ = ~uVar61 & auVar157._0_4_;
    auVar231._4_4_ = ~uVar61 & auVar157._4_4_;
    auVar231._8_4_ = ~uVar61 & auVar157._8_4_;
    auVar231._12_4_ = ~uVar61 & auVar157._12_4_;
    auVar65._0_4_ = uVar61 & _LC27;
    auVar65._4_4_ = uVar61 & _LC27;
    auVar65._8_4_ = uVar61 & _LC27;
    auVar65._12_4_ = uVar61 & _LC27;
    auVar114._0_4_ = uVar70 & _LC27;
    auVar114._4_4_ = uVar70 & _LC27;
    auVar114._8_4_ = uVar70 & _LC27;
    auVar114._12_4_ = uVar70 & _LC27;
    auVar232._0_4_ = ~uVar70 & auVar63._0_4_;
    auVar232._4_4_ = ~uVar70 & auVar63._4_4_;
    auVar232._8_4_ = ~uVar70 & auVar63._8_4_;
    auVar232._12_4_ = ~uVar70 & auVar63._12_4_;
    auVar87._0_4_ = uVar68 & _LC27;
    auVar87._4_4_ = uVar68 & _LC27;
    auVar87._8_4_ = uVar68 & _LC27;
    auVar87._12_4_ = uVar68 & _LC27;
    auVar63 = minps(auVar65 | auVar231,auVar114 | auVar232);
    auVar233._0_4_ = ~uVar68 & auVar140._0_4_;
    auVar233._4_4_ = ~uVar68 & auVar140._4_4_;
    auVar233._8_4_ = ~uVar68 & auVar140._8_4_;
    auVar233._12_4_ = ~uVar68 & auVar140._12_4_;
    auVar30._4_4_ = (uint)_LC20 & uVar61 | ~uVar61 & auVar82._4_4_;
    auVar30._0_4_ = (uint)_LC20 & uVar61 | ~uVar61 & auVar82._0_4_;
    auVar30._8_4_ = (uint)_LC20 & uVar61 | ~uVar61 & auVar82._8_4_;
    auVar30._12_4_ = (uint)_LC20 & uVar61 | ~uVar61 & auVar82._12_4_;
    auVar31._4_4_ = (uint)_LC20 & uVar70 | ~uVar70 & auVar111._4_4_;
    auVar31._0_4_ = (uint)_LC20 & uVar70 | ~uVar70 & auVar111._0_4_;
    auVar31._8_4_ = (uint)_LC20 & uVar70 | ~uVar70 & auVar111._8_4_;
    auVar31._12_4_ = (uint)_LC20 & uVar70 | ~uVar70 & auVar111._12_4_;
    auVar140 = maxps(auVar30,auVar31);
    auVar82 = minps(auVar63,auVar87 | auVar233);
    auVar63 = maxps(auVar140,auVar134 | auVar230);
    uVar61 = (int)(-(uint)((fVar203 < fVar180 || fVar78 < fVar151) ||
                          (auVar82._0_4_ < 0.0 || auVar82._0_4_ < auVar63._0_4_)) |
                   -(uint)(local_2d8 < fVar180 || fVar203 < local_2d8) & local_258 |
                   -(uint)(fStack_2d4 < fVar151 || fVar78 < fStack_2d4) & uStack_254 |
                  -(uint)(fStack_2d0 < fVar139 || fVar62 < fStack_2d0) & uStack_250 |
                  -(uint)(fVar62 < fVar139)) >> 0x1f;
    uVar68 = (int)(-(uint)((fVar213 < fVar189 || fVar93 < fVar164) ||
                          (auVar82._4_4_ < 0.0 || auVar82._4_4_ < auVar63._4_4_)) |
                   -(uint)(local_2d8 < fVar189 || fVar213 < local_2d8) & local_258 |
                   -(uint)(fStack_2d4 < fVar164 || fVar93 < fStack_2d4) & uStack_254 |
                  -(uint)(fStack_2d0 < fVar143 || fVar69 < fStack_2d0) & uStack_250 |
                  -(uint)(fVar69 < fVar143)) >> 0x1f;
    uVar70 = (int)(-(uint)((fVar219 < fVar193 || fVar98 < fVar170) ||
                          (auVar82._8_4_ < 0.0 || auVar82._8_4_ < auVar63._8_4_)) |
                   -(uint)(local_2d8 < fVar193 || fVar219 < local_2d8) & local_258 |
                   -(uint)(fStack_2d4 < fVar170 || fVar98 < fStack_2d4) & uStack_254 |
                  -(uint)(fStack_2d0 < fVar144 || fVar71 < fStack_2d0) & uStack_250 |
                  -(uint)(fVar71 < fVar144)) >> 0x1f;
    uVar72 = (int)(-(uint)((fVar225 < fVar197 || fVar104 < fVar176) ||
                          (auVar82._12_4_ < 0.0 || auVar82._12_4_ < auVar63._12_4_)) |
                   -(uint)(local_2d8 < fVar197 || fVar225 < local_2d8) & local_258 |
                   -(uint)(fStack_2d4 < fVar176 || fVar104 < fStack_2d4) & uStack_254 |
                  -(uint)(fStack_2d0 < fVar145 || fVar73 < fStack_2d0) & uStack_250 |
                  -(uint)(fVar73 < fVar145)) >> 0x1f;
    fVar69 = (float)(_LC27 & uVar61 | ~uVar61 & (uint)auVar63._0_4_);
    fVar71 = (float)(_LC27 & uVar68 | ~uVar68 & (uint)auVar63._4_4_);
    fVar73 = (float)(_LC27 & uVar70 | ~uVar70 & (uint)auVar63._8_4_);
    fVar78 = (float)(_LC27 & uVar72 | ~uVar72 & (uint)auVar63._12_4_);
    fVar62 = *(float *)(local_280 + 8);
    if (*(float *)(local_280 + 8) <= _LC21) {
      fVar62 = _LC21;
    }
    local_7a8 = (uint)*(undefined8 *)pauVar40[3];
    uStack_7a4 = (uint)((ulong)*(undefined8 *)pauVar40[3] >> 0x20);
    uStack_7a0 = (uint)*(undefined8 *)(pauVar40[3] + 8);
    uStack_79c = (uint)((ulong)*(undefined8 *)(pauVar40[3] + 8) >> 0x20);
    uVar61 = (int)-(uint)(fVar69 < fVar73) >> 0x1f;
    uVar68 = (int)-(uint)(fVar71 < fVar78) >> 0x1f;
    fVar93 = (float)(~uVar61 & (uint)fVar69 | (uint)fVar73 & uVar61);
    fVar98 = (float)(~uVar68 & (uint)fVar71 | (uint)fVar78 & uVar68);
    fVar73 = (float)(~uVar61 & (uint)fVar73 | (uint)fVar69 & uVar61);
    fVar78 = (float)(~uVar68 & (uint)fVar78 | (uint)fVar71 & uVar68);
    uVar72 = uVar61 & uStack_7a0 | ~uVar61 & local_7a8;
    uVar105 = uVar68 & uStack_79c | ~uVar68 & uStack_7a4;
    uVar61 = uVar61 & local_7a8 | ~uVar61 & uStack_7a0;
    uVar53 = uVar68 & uStack_7a4 | ~uVar68 & uStack_79c;
    uVar68 = (int)-(uint)(fVar93 < fVar98) >> 0x1f;
    uVar70 = (int)-(uint)(fVar73 < fVar78) >> 0x1f;
    auVar66._0_4_ = uVar68 & uVar105;
    auVar66._4_4_ = uVar68 & uVar72;
    auVar66._8_4_ = uVar70 & uVar53;
    auVar66._12_4_ = uVar70 & uVar61;
    fVar69 = (float)((uint)fVar93 & uVar68 | ~uVar68 & (uint)fVar98);
    fVar71 = (float)((uint)fVar78 & uVar70 | ~uVar70 & (uint)fVar73);
    auVar88._0_4_ = ~uVar68 & uVar72;
    auVar88._4_4_ = ~uVar68 & uVar105;
    auVar88._8_4_ = ~uVar70 & uVar61;
    auVar88._12_4_ = ~uVar70 & uVar53;
    auVar88 = auVar88 | auVar66;
    uVar61 = (int)-(uint)(fVar69 < fVar71) >> 0x1f;
    auVar26._4_4_ = (uint)fVar69 & uVar61;
    auVar26._0_4_ = (uint)fVar71 & uVar61;
    auVar26._8_8_ = 0;
    auVar135._4_4_ = ~uVar61 & (uint)fVar69;
    auVar135._0_4_ = (uint)fVar98 & uVar68 | ~uVar68 & (uint)fVar93;
    auVar135._8_4_ = ~uVar61 & (uint)fVar71;
    auVar135._12_4_ = (uint)fVar73 & uVar70 | ~uVar70 & (uint)fVar78;
    auVar135 = auVar26 << 0x20 | auVar135;
    local_6e8._4_4_ = uVar61 & auVar88._8_4_ | ~uVar61 & auVar88._4_4_;
    local_6e8._0_4_ = auVar88._0_4_;
    local_6e8._8_4_ = uVar61 & auVar88._4_4_ | ~uVar61 & auVar88._8_4_;
    local_6e8._12_4_ = auVar88._12_4_;
    auVar67._4_4_ = -(uint)(auVar135._4_4_ < fVar62);
    auVar67._0_4_ = -(uint)(auVar135._0_4_ < fVar62);
    auVar67._8_4_ = -(uint)(auVar135._8_4_ < fVar62);
    auVar67._12_4_ = -(uint)(auVar135._12_4_ < fVar62);
    uVar61 = movmskps(uVar38,auVar67);
    pCVar42 = (CastSphereVsTriangles *)(ulong)uVar61;
    uVar38 = __popcountdi2();
    local_668[0] = (CastSphereVsTriangles)auVar135[0];
    local_668[1] = (CastSphereVsTriangles)auVar135[1];
    local_668[2] = (CastSphereVsTriangles)auVar135[2];
    local_668[3] = (CastSphereVsTriangles)auVar135[3];
    local_668[4] = (CastSphereVsTriangles)auVar135[4];
    local_668[5] = (CastSphereVsTriangles)auVar135[5];
    local_668[6] = (CastSphereVsTriangles)auVar135[6];
    local_668[7] = (CastSphereVsTriangles)auVar135[7];
    local_668[8] = (CastSphereVsTriangles)auVar135[8];
    local_668[9] = (CastSphereVsTriangles)auVar135[9];
    local_668[10] = (CastSphereVsTriangles)auVar135[10];
    local_668[0xb] = (CastSphereVsTriangles)auVar135[0xb];
    local_668[0xc] = (CastSphereVsTriangles)auVar135[0xc];
    local_668[0xd] = (CastSphereVsTriangles)auVar135[0xd];
    local_668[0xe] = (CastSphereVsTriangles)auVar135[0xe];
    local_668[0xf] = (CastSphereVsTriangles)auVar135[0xf];
    if (uVar61 == 0) {
      local_668[0] = (CastSphereVsTriangles)0x0;
      local_668[1] = (CastSphereVsTriangles)0x0;
      local_668[2] = (CastSphereVsTriangles)0x0;
      local_668[3] = (CastSphereVsTriangles)0x0;
      local_668[4] = (CastSphereVsTriangles)0x0;
      local_668[5] = (CastSphereVsTriangles)0x0;
      local_668[6] = (CastSphereVsTriangles)0x0;
      local_668[7] = (CastSphereVsTriangles)0x0;
      local_668[8] = (CastSphereVsTriangles)0x0;
      local_668[9] = (CastSphereVsTriangles)0x0;
      local_668[10] = (CastSphereVsTriangles)0x0;
      local_668[0xb] = (CastSphereVsTriangles)0x0;
      local_668[0xc] = (CastSphereVsTriangles)0x0;
      local_668[0xd] = (CastSphereVsTriangles)0x0;
      local_668[0xe] = (CastSphereVsTriangles)0x0;
      local_668[0xf] = (CastSphereVsTriangles)0x0;
      uVar79 = 0;
      uVar99 = 0;
    }
    else {
      local_6a8 = (undefined1  [16])0x0;
      uVar41 = (ulong)uVar38 << 2;
      pCVar42 = (CastSphereVsTriangles *)local_6a8;
      lVar54 = (4 - (long)(int)uVar38) * 4;
      pCVar56 = local_668 + lVar54;
      if (7 < (uint)uVar41) {
        for (uVar47 = uVar41 >> 3 & 0x1fffffff; uVar47 != 0; uVar47 = uVar47 - 1) {
          *(undefined8 *)pCVar42 = *(undefined8 *)pCVar56;
          pCVar56 = pCVar56 + (ulong)bVar59 * -0x10 + 8;
          pCVar42 = pCVar42 + (ulong)bVar59 * -0x10 + 8;
        }
      }
      if ((uVar41 & 4) != 0) {
        *(undefined4 *)pCVar42 = *(undefined4 *)pCVar56;
      }
      puVar49 = (undefined8 *)(local_6e8 + lVar54);
      local_668[0] = (CastSphereVsTriangles)0x0;
      local_668[1] = (CastSphereVsTriangles)0x0;
      local_668[2] = (CastSphereVsTriangles)0x0;
      local_668[3] = (CastSphereVsTriangles)0x0;
      local_668[4] = (CastSphereVsTriangles)0x0;
      local_668[5] = (CastSphereVsTriangles)0x0;
      local_668[6] = (CastSphereVsTriangles)0x0;
      local_668[7] = (CastSphereVsTriangles)0x0;
      local_668[8] = (CastSphereVsTriangles)0x0;
      local_668[9] = (CastSphereVsTriangles)0x0;
      local_668[10] = (CastSphereVsTriangles)0x0;
      local_668[0xb] = (CastSphereVsTriangles)0x0;
      local_668[0xc] = (CastSphereVsTriangles)0x0;
      local_668[0xd] = (CastSphereVsTriangles)0x0;
      local_668[0xe] = (CastSphereVsTriangles)0x0;
      local_668[0xf] = (CastSphereVsTriangles)0x0;
      pCVar56 = local_668;
      if (7 < (uint)uVar41) {
        pCVar42 = local_668;
        for (uVar47 = uVar41 >> 3 & 0x1fffffff; pCVar56 = pCVar42, uVar47 != 0; uVar47 = uVar47 - 1)
        {
          *(undefined8 *)pCVar42 = *puVar49;
          puVar49 = puVar49 + (ulong)bVar59 * -2 + 1;
          pCVar42 = pCVar42 + (ulong)bVar59 * -0x10 + 8;
        }
      }
      uVar79 = local_6a8._0_8_;
      uVar99 = local_6a8._8_8_;
      if ((uVar41 & 4) != 0) {
        *(undefined4 *)pCVar56 = *(undefined4 *)puVar49;
      }
    }
    *(undefined8 *)((CastSphereVsTriangles *)&local_2d8 + lVar50 + 0x90) = uVar79;
    *(undefined8 *)((long)auStack_240 + lVar50) = uVar99;
    lVar54 = local_280;
    *(undefined8 *)(local_4e8 + lVar39) = local_668._0_8_;
    *(undefined8 *)((long)auStack_4e0 + lVar50) = local_668._8_8_;
    local_6e8[0] = local_668[0];
    local_6e8[1] = local_668[1];
    local_6e8[2] = local_668[2];
    local_6e8[3] = local_668[3];
    local_6e8[4] = local_668[4];
    local_6e8[5] = local_668[5];
    local_6e8[6] = local_668[6];
    local_6e8[7] = local_668[7];
    local_6e8[8] = local_668[8];
    local_6e8[9] = local_668[9];
    local_6e8[10] = local_668[10];
    local_6e8[0xb] = local_668[0xb];
    local_6e8[0xc] = local_668[0xc];
    local_6e8[0xd] = local_668[0xd];
    local_6e8[0xe] = local_668[0xe];
    local_6e8[0xf] = local_668[0xf];
    fVar62 = *(float *)(lVar54 + 8);
    local_2e8 = local_2e8 + uVar38;
    uVar68 = __LC9;
    uVar70 = _UNK_00112494;
    uVar72 = _UNK_00112498;
    uVar105 = _UNK_0011249c;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MeshShape::CastRay(JPH::RayCast const&, JPH::SubShapeIDCreator const&, JPH::RayCastResult&)
   const */

undefined1 __thiscall
JPH::MeshShape::CastRay
          (MeshShape *this,RayCast *param_1,SubShapeIDCreator *param_2,RayCastResult *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  byte bVar17;
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [14];
  undefined1 auVar28 [14];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [14];
  undefined1 auVar34 [14];
  undefined1 auVar35 [14];
  undefined1 auVar36 [14];
  undefined1 auVar37 [14];
  undefined1 auVar38 [14];
  undefined8 uVar39;
  undefined8 uVar40;
  long lVar41;
  long lVar42;
  undefined1 (*pauVar43) [16];
  byte bVar44;
  uint *puVar45;
  uint *puVar46;
  uint *puVar47;
  ulong uVar48;
  MeshShape *pMVar49;
  MeshShape *pMVar50;
  undefined8 *puVar51;
  ulong uVar52;
  ulong uVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  long in_FS_OFFSET;
  byte bVar58;
  uint uVar59;
  int iVar61;
  int iVar74;
  int iVar77;
  undefined1 auVar62 [12];
  uint uVar72;
  undefined1 auVar63 [16];
  float fVar60;
  float fVar73;
  uint uVar75;
  float fVar76;
  uint uVar78;
  float fVar79;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  int iVar80;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar81;
  float fVar82;
  undefined1 auVar83 [12];
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar84 [12];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  MeshShape aMVar90 [16];
  float fVar97;
  float fVar102;
  float fVar103;
  float fVar104;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  float fVar113;
  float fVar118;
  float fVar119;
  uint uVar120;
  float fVar121;
  uint uVar122;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  float fVar123;
  float fVar126;
  float fVar127;
  float fVar128;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  float fVar129;
  float fVar132;
  float fVar133;
  float fVar134;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  float fVar135;
  float fVar136;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  uint uVar145;
  float fVar146;
  float fVar147;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  float fVar148;
  float fVar152;
  float fVar153;
  float fVar154;
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  uint uVar158;
  uint uVar159;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  float fVar160;
  float fVar163;
  float fVar164;
  float fVar165;
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  float fVar166;
  float fVar168;
  float fVar169;
  float fVar170;
  undefined1 auVar167 [16];
  float fVar171;
  float fVar173;
  float fVar174;
  float fVar175;
  undefined1 auVar172 [16];
  uint uVar176;
  uint uVar177;
  uint uVar178;
  uint uVar179;
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  float local_5f8;
  float fStack_5f4;
  float fStack_5f0;
  float fStack_5ec;
  undefined1 local_5e8 [16];
  undefined1 local_5d8 [16];
  uint uStack_59c;
  float local_500;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  MeshShape local_4d8 [16];
  undefined1 local_4c8 [16];
  uint local_4b8 [2];
  undefined8 auStack_4b0 [63];
  int local_2b8;
  RayCastResult *local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278 [8];
  float fStack_270;
  int local_268;
  int iStack_264;
  int iStack_260;
  int iStack_25c;
  uint local_258;
  undefined8 local_254;
  undefined1 local_24c;
  float local_248 [130];
  long local_40;
  
  bVar58 = 0;
  auVar65 = *(undefined1 (*) [16])(param_1 + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar11 = *(long *)(this + 0x48);
  local_2a8 = param_3;
  auVar63._0_4_ = 0.0 - auVar65._0_4_;
  auVar63._4_4_ = 0.0 - auVar65._4_4_;
  auVar63._8_4_ = 0.0 - auVar65._8_4_;
  auVar63._12_4_ = 0.0 - auVar65._12_4_;
  local_298 = *(undefined8 *)param_1;
  uStack_290 = *(undefined8 *)(param_1 + 8);
  local_24c = 0;
  local_288 = *(undefined8 *)(param_1 + 0x10);
  uStack_280 = *(undefined8 *)(param_1 + 0x18);
  auVar63 = maxps(auVar63,auVar65);
  local_258 = (uint)*(byte *)(lVar11 + 0x1c);
  auVar150._4_4_ = _LC2;
  auVar150._0_4_ = _LC2;
  local_268 = -(uint)(auVar63._0_4_ <= _LC23);
  iStack_264 = -(uint)(auVar63._4_4_ <= _LC23);
  iStack_260 = -(uint)(auVar63._8_4_ <= _LC23);
  iStack_25c = -(uint)(auVar63._12_4_ <= _LC23);
  uVar59 = local_268 >> 0x1f;
  uVar72 = iStack_264 >> 0x1f;
  uVar75 = iStack_260 >> 0x1f;
  uVar78 = iStack_25c >> 0x1f;
  auVar138._0_4_ = uVar59 & __LC24;
  auVar138._4_4_ = uVar72 & _UNK_00112514;
  auVar138._8_4_ = uVar75 & _UNK_00112518;
  auVar138._12_4_ = uVar78 & _UNK_0011251c;
  auVar183._0_4_ = ~uVar59 & (uint)auVar65._0_4_;
  auVar183._4_4_ = ~uVar72 & (uint)auVar65._4_4_;
  auVar183._8_4_ = ~uVar75 & (uint)auVar65._8_4_;
  auVar183._12_4_ = ~uVar78 & (uint)auVar65._12_4_;
  auVar150._8_4_ = _LC2;
  auVar150._12_4_ = _LC2;
  _local_278 = divps(auVar150,auVar138 | auVar183);
  local_254 = *(undefined8 *)param_2;
  fVar2 = *(float *)(lVar11 + 0x24);
  fVar3 = *(float *)(lVar11 + 0x20);
  uVar59 = *(uint *)(lVar11 + 0x18);
  local_2b8 = 0;
  fVar4 = *(float *)(lVar11 + 0x2c);
  fVar5 = *(float *)(lVar11 + 0x28);
  fVar6 = *(float *)(lVar11 + 0x34);
  fVar7 = *(float *)(lVar11 + 0x30);
  local_500 = *(float *)(param_3 + 4);
  lVar41 = 0;
  local_4b8[0] = uVar59;
  while( true ) {
    uVar72 = uVar59 >> 0x1c;
    if (uVar72 == 0) {
      auVar105._4_4_ = _UNK_001124c4;
      auVar105._0_4_ = __LC14;
      auVar105._8_4_ = _UNK_001124c8;
      auVar105._12_4_ = _UNK_001124cc;
      pauVar43 = (undefined1 (*) [16])((ulong)(uVar59 * 4) + lVar11);
      auVar65 = *pauVar43;
      auVar63 = *pauVar43;
      auVar18._10_2_ = 0;
      auVar18._0_10_ = auVar65._0_10_;
      auVar18._12_2_ = auVar65._6_2_;
      auVar24._8_2_ = auVar65._4_2_;
      auVar24._0_8_ = auVar65._0_8_;
      auVar24._10_4_ = auVar18._10_4_;
      auVar33._6_8_ = 0;
      auVar33._0_6_ = auVar24._8_6_;
      auVar85._6_8_ = SUB148(auVar33 << 0x40,6);
      auVar85._4_2_ = auVar65._2_2_;
      auVar85._0_2_ = auVar65._0_2_;
      auVar85._2_2_ = 0;
      auVar85._14_2_ = 0;
      auVar105 = auVar105 & auVar85;
      auVar65 = __LC11 & auVar85;
      auVar85 = auVar85 & __LC19;
      iVar61 = auVar65._0_4_ * 0x2000;
      iVar74 = auVar65._4_4_ * 0x2000;
      iVar77 = auVar65._8_4_ * 0x2000;
      iVar80 = auVar65._12_4_ * 0x2000;
      uVar178 = __LC12 + iVar61;
      uVar179 = _UNK_001124b4 + iVar74;
      uVar120 = _UNK_001124b8 + iVar77;
      uVar122 = _UNK_001124bc + iVar80;
      uVar145 = auVar63._8_4_;
      auVar83._0_8_ = auVar63._8_8_;
      auVar83._8_4_ = uVar145;
      uVar59 = (int)-(uint)(auVar105._0_4_ == __LC14) >> 0x1f;
      uVar72 = (int)-(uint)(auVar105._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar75 = (int)-(uint)(auVar105._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar78 = (int)-(uint)(auVar105._12_4_ == _UNK_001124cc) >> 0x1f;
      uVar158 = (int)-(uint)(auVar105._0_4_ == 0) >> 0x1f;
      uVar159 = (int)-(uint)(auVar105._4_4_ == 0) >> 0x1f;
      uVar176 = (int)-(uint)(auVar105._8_4_ == 0) >> 0x1f;
      uVar177 = (int)-(uint)(auVar105._12_4_ == 0) >> 0x1f;
      auVar12._10_2_ = 0;
      auVar12._0_10_ = auVar83._0_10_;
      auVar12._12_2_ = auVar63._14_2_;
      auVar19._8_2_ = auVar63._12_2_;
      auVar19._0_8_ = auVar83._0_8_;
      auVar19._10_4_ = auVar12._10_4_;
      auVar34._6_8_ = 0;
      auVar34._0_6_ = auVar19._8_6_;
      auVar25._4_2_ = auVar63._10_2_;
      auVar25._0_4_ = uVar145;
      auVar25._6_8_ = SUB148(auVar34 << 0x40,6);
      auVar86._0_4_ = uVar145 & 0xffff;
      auVar86._4_10_ = auVar25._4_10_;
      auVar86._14_2_ = 0;
      auVar106._4_4_ = _UNK_001124c4;
      auVar106._0_4_ = __LC14;
      auVar106._8_4_ = _UNK_001124c8;
      auVar106._12_4_ = _UNK_001124cc;
      auVar106 = auVar106 & auVar86;
      fVar123 = (float)(auVar85._0_4_ << 0x10 |
                       (uint)((float)(iVar61 + __LC16) + _LC18) & uVar158 |
                       ~uVar158 & (uVar59 & (uVar178 | __LC15) | ~uVar59 & uVar178));
      fVar126 = (float)(auVar85._4_4_ << 0x10 |
                       (uint)((float)(iVar74 + _UNK_001124e4) + _LC18) & uVar159 |
                       ~uVar159 & (uVar72 & (uVar179 | _UNK_001124d4) | ~uVar72 & uVar179));
      fVar127 = (float)(auVar85._8_4_ << 0x10 |
                       (uint)((float)(iVar77 + _UNK_001124e8) + _LC18) & uVar176 |
                       ~uVar176 & (uVar75 & (uVar120 | _UNK_001124d8) | ~uVar75 & uVar120));
      fVar128 = (float)(auVar85._12_4_ << 0x10 |
                       (uint)((float)(iVar80 + _UNK_001124ec) + _LC18) & uVar177 |
                       ~uVar177 & (uVar78 & (uVar122 | _UNK_001124dc) | ~uVar78 & uVar122));
      auVar65 = __LC11 & auVar86;
      auVar86 = auVar86 & __LC19;
      iVar61 = auVar65._0_4_ * 0x2000;
      iVar74 = auVar65._4_4_ * 0x2000;
      iVar77 = auVar65._8_4_ * 0x2000;
      iVar80 = auVar65._12_4_ * 0x2000;
      uVar158 = (int)-(uint)(auVar106._0_4_ == 0) >> 0x1f;
      uVar159 = (int)-(uint)(auVar106._4_4_ == 0) >> 0x1f;
      uVar176 = (int)-(uint)(auVar106._8_4_ == 0) >> 0x1f;
      uVar177 = (int)-(uint)(auVar106._12_4_ == 0) >> 0x1f;
      uVar178 = __LC12 + iVar61;
      uVar179 = _UNK_001124b4 + iVar74;
      uVar120 = _UNK_001124b8 + iVar77;
      uVar122 = _UNK_001124bc + iVar80;
      uVar59 = (int)-(uint)(auVar106._0_4_ == __LC14) >> 0x1f;
      uVar72 = (int)-(uint)(auVar106._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar75 = (int)-(uint)(auVar106._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar78 = (int)-(uint)(auVar106._12_4_ == _UNK_001124cc) >> 0x1f;
      auVar107._4_4_ = _UNK_001124c4;
      auVar107._0_4_ = __LC14;
      auVar107._8_4_ = _UNK_001124c8;
      auVar107._12_4_ = _UNK_001124cc;
      auVar65 = pauVar43[1];
      auVar13._10_2_ = 0;
      auVar13._0_10_ = auVar65._0_10_;
      auVar13._12_2_ = auVar65._6_2_;
      auVar20._8_2_ = auVar65._4_2_;
      auVar20._0_8_ = auVar65._0_8_;
      auVar20._10_4_ = auVar13._10_4_;
      auVar35._6_8_ = 0;
      auVar35._0_6_ = auVar20._8_6_;
      auVar98._6_8_ = SUB148(auVar35 << 0x40,6);
      auVar98._4_2_ = auVar65._2_2_;
      auVar98._0_2_ = auVar65._0_2_;
      auVar98._2_2_ = 0;
      auVar98._14_2_ = 0;
      fVar113 = (float)(auVar86._0_4_ << 0x10 |
                       (uint)((float)(iVar61 + __LC16) + _LC18) & uVar158 |
                       ~uVar158 & (uVar59 & (uVar178 | __LC15) | ~uVar59 & uVar178));
      fVar118 = (float)(auVar86._4_4_ << 0x10 |
                       (uint)((float)(iVar74 + _UNK_001124e4) + _LC18) & uVar159 |
                       ~uVar159 & (uVar72 & (uVar179 | _UNK_001124d4) | ~uVar72 & uVar179));
      fVar119 = (float)(auVar86._8_4_ << 0x10 |
                       (uint)((float)(iVar77 + _UNK_001124e8) + _LC18) & uVar176 |
                       ~uVar176 & (uVar75 & (uVar120 | _UNK_001124d8) | ~uVar75 & uVar120));
      fVar121 = (float)(auVar86._12_4_ << 0x10 |
                       (uint)((float)(iVar80 + _UNK_001124ec) + _LC18) & uVar177 |
                       ~uVar177 & (uVar78 & (uVar122 | _UNK_001124dc) | ~uVar78 & uVar122));
      auVar107 = auVar107 & auVar98;
      auVar65 = __LC11 & auVar98;
      iVar61 = auVar65._0_4_ * 0x2000;
      iVar74 = auVar65._4_4_ * 0x2000;
      iVar77 = auVar65._8_4_ * 0x2000;
      iVar80 = auVar65._12_4_ * 0x2000;
      auVar98 = auVar98 & __LC19;
      uVar178 = __LC12 + iVar61;
      uVar179 = _UNK_001124b4 + iVar74;
      uVar120 = _UNK_001124b8 + iVar77;
      uVar122 = _UNK_001124bc + iVar80;
      uVar158 = (int)-(uint)(auVar107._0_4_ == 0) >> 0x1f;
      uVar159 = (int)-(uint)(auVar107._4_4_ == 0) >> 0x1f;
      uVar176 = (int)-(uint)(auVar107._8_4_ == 0) >> 0x1f;
      uVar177 = (int)-(uint)(auVar107._12_4_ == 0) >> 0x1f;
      uVar59 = (int)-(uint)(auVar107._0_4_ == __LC14) >> 0x1f;
      uVar72 = (int)-(uint)(auVar107._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar75 = (int)-(uint)(auVar107._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar78 = (int)-(uint)(auVar107._12_4_ == _UNK_001124cc) >> 0x1f;
      auVar108._4_4_ = _UNK_001124c4;
      auVar108._0_4_ = __LC14;
      auVar108._8_4_ = _UNK_001124c8;
      auVar108._12_4_ = _UNK_001124cc;
      auVar65 = pauVar43[1];
      uVar145 = auVar65._8_4_;
      auVar84._0_8_ = auVar65._8_8_;
      auVar84._8_4_ = uVar145;
      auVar14._10_2_ = 0;
      auVar14._0_10_ = auVar84._0_10_;
      auVar14._12_2_ = auVar65._14_2_;
      auVar21._8_2_ = auVar65._12_2_;
      auVar21._0_8_ = auVar84._0_8_;
      auVar21._10_4_ = auVar14._10_4_;
      auVar36._6_8_ = 0;
      auVar36._0_6_ = auVar21._8_6_;
      auVar26._4_2_ = auVar65._10_2_;
      auVar26._0_4_ = uVar145;
      auVar26._6_8_ = SUB148(auVar36 << 0x40,6);
      auVar87._0_4_ = uVar145 & 0xffff;
      auVar87._4_10_ = auVar26._4_10_;
      auVar87._14_2_ = 0;
      fVar97 = (float)(auVar98._0_4_ << 0x10 |
                      (uint)((float)(iVar61 + __LC16) + _LC18) & uVar158 |
                      ~uVar158 & (uVar59 & (uVar178 | __LC15) | ~uVar59 & uVar178));
      fVar102 = (float)(auVar98._4_4_ << 0x10 |
                       (uint)((float)(iVar74 + _UNK_001124e4) + _LC18) & uVar159 |
                       ~uVar159 & (uVar72 & (uVar179 | _UNK_001124d4) | ~uVar72 & uVar179));
      fVar103 = (float)(auVar98._8_4_ << 0x10 |
                       (uint)((float)(iVar77 + _UNK_001124e8) + _LC18) & uVar176 |
                       ~uVar176 & (uVar75 & (uVar120 | _UNK_001124d8) | ~uVar75 & uVar120));
      fVar104 = (float)(auVar98._12_4_ << 0x10 |
                       (uint)((float)(iVar80 + _UNK_001124ec) + _LC18) & uVar177 |
                       ~uVar177 & (uVar78 & (uVar122 | _UNK_001124dc) | ~uVar78 & uVar122));
      auVar108 = auVar108 & auVar87;
      auVar65 = __LC11 & auVar87;
      iVar61 = auVar65._0_4_ * 0x2000;
      iVar74 = auVar65._4_4_ * 0x2000;
      iVar77 = auVar65._8_4_ * 0x2000;
      iVar80 = auVar65._12_4_ * 0x2000;
      uVar178 = __LC12 + iVar61;
      uVar179 = _UNK_001124b4 + iVar74;
      uVar120 = _UNK_001124b8 + iVar77;
      uVar122 = _UNK_001124bc + iVar80;
      uVar158 = (int)-(uint)(auVar108._0_4_ == 0) >> 0x1f;
      uVar159 = (int)-(uint)(auVar108._4_4_ == 0) >> 0x1f;
      uVar176 = (int)-(uint)(auVar108._8_4_ == 0) >> 0x1f;
      uVar177 = (int)-(uint)(auVar108._12_4_ == 0) >> 0x1f;
      uVar59 = (int)-(uint)(auVar108._0_4_ == __LC14) >> 0x1f;
      uVar72 = (int)-(uint)(auVar108._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar75 = (int)-(uint)(auVar108._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar78 = (int)-(uint)(auVar108._12_4_ == _UNK_001124cc) >> 0x1f;
      auVar87 = auVar87 & __LC19;
      auVar109._4_4_ = _UNK_001124c4;
      auVar109._0_4_ = __LC14;
      auVar109._8_4_ = _UNK_001124c8;
      auVar109._12_4_ = _UNK_001124cc;
      auVar65 = pauVar43[2];
      auVar15._10_2_ = 0;
      auVar15._0_10_ = auVar65._0_10_;
      auVar15._12_2_ = auVar65._6_2_;
      auVar22._8_2_ = auVar65._4_2_;
      auVar22._0_8_ = auVar65._0_8_;
      auVar22._10_4_ = auVar15._10_4_;
      auVar37._6_8_ = 0;
      auVar37._0_6_ = auVar22._8_6_;
      auVar27._4_2_ = auVar65._2_2_;
      auVar27._0_4_ = auVar65._0_4_;
      auVar27._6_8_ = SUB148(auVar37 << 0x40,6);
      auVar99._0_4_ = auVar65._0_4_ & 0xffff;
      auVar99._4_10_ = auVar27._4_10_;
      auVar99._14_2_ = 0;
      fVar93 = (float)(auVar87._0_4_ << 0x10 |
                      (uint)((float)(iVar61 + __LC16) + _LC18) & uVar158 |
                      ~uVar158 & (uVar59 & (uVar178 | __LC15) | ~uVar59 & uVar178));
      fVar94 = (float)(auVar87._4_4_ << 0x10 |
                      (uint)((float)(iVar74 + _UNK_001124e4) + _LC18) & uVar159 |
                      ~uVar159 & (uVar72 & (uVar179 | _UNK_001124d4) | ~uVar72 & uVar179));
      fVar95 = (float)(auVar87._8_4_ << 0x10 |
                      (uint)((float)(iVar77 + _UNK_001124e8) + _LC18) & uVar176 |
                      ~uVar176 & (uVar75 & (uVar120 | _UNK_001124d8) | ~uVar75 & uVar120));
      fVar96 = (float)(auVar87._12_4_ << 0x10 |
                      (uint)((float)(iVar80 + _UNK_001124ec) + _LC18) & uVar177 |
                      ~uVar177 & (uVar78 & (uVar122 | _UNK_001124dc) | ~uVar78 & uVar122));
      auVar109 = auVar109 & auVar99;
      auVar65 = __LC11 & auVar99;
      iVar61 = auVar65._0_4_ * 0x2000;
      iVar74 = auVar65._4_4_ * 0x2000;
      iVar77 = auVar65._8_4_ * 0x2000;
      iVar80 = auVar65._12_4_ * 0x2000;
      auVar99 = auVar99 & __LC19;
      uVar178 = __LC12 + iVar61;
      uVar179 = _UNK_001124b4 + iVar74;
      uVar120 = _UNK_001124b8 + iVar77;
      uVar122 = _UNK_001124bc + iVar80;
      uVar158 = (int)-(uint)(auVar109._0_4_ == 0) >> 0x1f;
      uVar159 = (int)-(uint)(auVar109._4_4_ == 0) >> 0x1f;
      uVar176 = (int)-(uint)(auVar109._8_4_ == 0) >> 0x1f;
      uVar177 = (int)-(uint)(auVar109._12_4_ == 0) >> 0x1f;
      uVar59 = (int)-(uint)(auVar109._0_4_ == __LC14) >> 0x1f;
      uVar72 = (int)-(uint)(auVar109._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar75 = (int)-(uint)(auVar109._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar78 = (int)-(uint)(auVar109._12_4_ == _UNK_001124cc) >> 0x1f;
      auVar65 = pauVar43[2];
      auVar114._4_4_ = _UNK_001124c4;
      auVar114._0_4_ = __LC14;
      auVar114._8_4_ = _UNK_001124c8;
      auVar114._12_4_ = _UNK_001124cc;
      fVar60 = (float)(auVar99._0_4_ << 0x10 |
                      (uint)((float)(iVar61 + __LC16) + _LC18) & uVar158 |
                      ~uVar158 & (uVar59 & (uVar178 | __LC15) | ~uVar59 & uVar178));
      fVar73 = (float)(auVar99._4_4_ << 0x10 |
                      (uint)((float)(iVar74 + _UNK_001124e4) + _LC18) & uVar159 |
                      ~uVar159 & (uVar72 & (uVar179 | _UNK_001124d4) | ~uVar72 & uVar179));
      fVar76 = (float)(auVar99._8_4_ << 0x10 |
                      (uint)((float)(iVar77 + _UNK_001124e8) + _LC18) & uVar176 |
                      ~uVar176 & (uVar75 & (uVar120 | _UNK_001124d8) | ~uVar75 & uVar120));
      fVar79 = (float)(auVar99._12_4_ << 0x10 |
                      (uint)((float)(iVar80 + _UNK_001124ec) + _LC18) & uVar177 |
                      ~uVar177 & (uVar78 & (uVar122 | _UNK_001124dc) | ~uVar78 & uVar122));
      uVar59 = auVar65._8_4_;
      auVar62._0_8_ = auVar65._8_8_;
      auVar62._8_4_ = uVar59;
      auVar16._10_2_ = 0;
      auVar16._0_10_ = auVar62._0_10_;
      auVar16._12_2_ = auVar65._14_2_;
      auVar23._8_2_ = auVar65._12_2_;
      auVar23._0_8_ = auVar62._0_8_;
      auVar23._10_4_ = auVar16._10_4_;
      auVar38._6_8_ = 0;
      auVar38._0_6_ = auVar23._8_6_;
      auVar28._4_2_ = auVar65._10_2_;
      auVar28._0_4_ = uVar59;
      auVar28._6_8_ = SUB148(auVar38 << 0x40,6);
      auVar66._0_4_ = uVar59 & 0xffff;
      auVar66._4_10_ = auVar28._4_10_;
      auVar66._14_2_ = 0;
      auVar114 = auVar114 & auVar66;
      auVar65 = __LC11 & auVar66;
      auVar66 = auVar66 & __LC19;
      iVar61 = auVar65._0_4_ * 0x2000;
      iVar74 = auVar65._4_4_ * 0x2000;
      iVar77 = auVar65._8_4_ * 0x2000;
      iVar80 = auVar65._12_4_ * 0x2000;
      uVar178 = __LC12 + iVar61;
      uVar179 = _UNK_001124b4 + iVar74;
      uVar120 = _UNK_001124b8 + iVar77;
      uVar122 = _UNK_001124bc + iVar80;
      uVar59 = (int)-(uint)(auVar114._0_4_ == __LC14) >> 0x1f;
      uVar72 = (int)-(uint)(auVar114._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar75 = (int)-(uint)(auVar114._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar78 = (int)-(uint)(auVar114._12_4_ == _UNK_001124cc) >> 0x1f;
      uVar158 = (int)-(uint)(auVar114._0_4_ == 0) >> 0x1f;
      uVar159 = (int)-(uint)(auVar114._4_4_ == 0) >> 0x1f;
      uVar176 = (int)-(uint)(auVar114._8_4_ == 0) >> 0x1f;
      uVar177 = (int)-(uint)(auVar114._12_4_ == 0) >> 0x1f;
      fVar81 = (float)(auVar66._0_4_ << 0x10 |
                      (uint)((float)(iVar61 + __LC16) + _LC18) & uVar158 |
                      ~uVar158 & (uVar59 & (uVar178 | __LC15) | ~uVar59 & uVar178));
      fVar82 = (float)(auVar66._4_4_ << 0x10 |
                      (uint)((float)(iVar74 + _UNK_001124e4) + _LC18) & uVar159 |
                      ~uVar159 & (uVar72 & (uVar179 | _UNK_001124d4) | ~uVar72 & uVar179));
      fVar91 = (float)(auVar66._8_4_ << 0x10 |
                      (uint)((float)(iVar77 + _UNK_001124e8) + _LC18) & uVar176 |
                      ~uVar176 & (uVar75 & (uVar120 | _UNK_001124d8) | ~uVar75 & uVar120));
      fVar92 = (float)(auVar66._12_4_ << 0x10 |
                      (uint)((float)(iVar80 + _UNK_001124ec) + _LC18) & uVar177 |
                      ~uVar177 & (uVar78 & (uVar122 | _UNK_001124dc) | ~uVar78 & uVar122));
      auVar62 = *(undefined1 (*) [12])pauVar43[3];
      uStack_59c = (uint)((ulong)*(undefined8 *)(pauVar43[3] + 8) >> 0x20);
      auVar130._0_8_ =
           CONCAT44((fVar102 - (float)uStack_290) * fStack_270,
                    (fVar97 - (float)uStack_290) * fStack_270);
      auVar130._8_4_ = (fVar103 - (float)uStack_290) * fStack_270;
      auVar130._12_4_ = (fVar104 - (float)uStack_290) * fStack_270;
      auVar167._0_4_ = (fVar93 - (float)local_298) * (float)local_278._0_4_;
      auVar167._4_4_ = (fVar94 - (float)local_298) * (float)local_278._0_4_;
      auVar167._8_4_ = (fVar95 - (float)local_298) * (float)local_278._0_4_;
      auVar167._12_4_ = (fVar96 - (float)local_298) * (float)local_278._0_4_;
      auVar149._0_8_ =
           CONCAT44((fVar126 - (float)local_298) * (float)local_278._0_4_,
                    (fVar123 - (float)local_298) * (float)local_278._0_4_);
      auVar149._8_4_ = (fVar127 - (float)local_298) * (float)local_278._0_4_;
      auVar149._12_4_ = (fVar128 - (float)local_298) * (float)local_278._0_4_;
      auVar156._0_4_ = (fVar81 - (float)uStack_290) * fStack_270;
      auVar156._4_4_ = (fVar82 - (float)uStack_290) * fStack_270;
      auVar156._8_4_ = (fVar91 - (float)uStack_290) * fStack_270;
      auVar156._12_4_ = (fVar92 - (float)uStack_290) * fStack_270;
      auVar161._0_4_ = (fVar60 - local_298._4_4_) * (float)local_278._4_4_;
      auVar161._4_4_ = (fVar73 - local_298._4_4_) * (float)local_278._4_4_;
      auVar161._8_4_ = (fVar76 - local_298._4_4_) * (float)local_278._4_4_;
      auVar161._12_4_ = (fVar79 - local_298._4_4_) * (float)local_278._4_4_;
      auVar137._0_8_ =
           CONCAT44((fVar118 - local_298._4_4_) * (float)local_278._4_4_,
                    (fVar113 - local_298._4_4_) * (float)local_278._4_4_);
      auVar137._8_4_ = (fVar119 - local_298._4_4_) * (float)local_278._4_4_;
      auVar137._12_4_ = (fVar121 - local_298._4_4_) * (float)local_278._4_4_;
      uVar59 = local_268 >> 0x1f;
      auVar115._8_4_ = auVar149._8_4_;
      auVar115._0_8_ = auVar149._0_8_;
      auVar115._12_4_ = auVar149._12_4_;
      auVar150 = maxps(auVar149,auVar167);
      auVar65 = minps(auVar115,auVar167);
      auVar181._8_4_ = auVar137._8_4_;
      auVar181._0_8_ = auVar137._0_8_;
      auVar181._12_4_ = auVar137._12_4_;
      auVar138 = maxps(auVar137,auVar161);
      auVar63 = minps(auVar181,auVar161);
      uVar75 = iStack_264 >> 0x1f;
      auVar110._0_4_ = ~uVar75 & auVar63._0_4_;
      auVar110._4_4_ = ~uVar75 & auVar63._4_4_;
      auVar110._8_4_ = ~uVar75 & auVar63._8_4_;
      auVar110._12_4_ = ~uVar75 & auVar63._12_4_;
      auVar172._4_4_ = _LC20 & uVar75;
      auVar172._0_4_ = _LC20 & uVar75;
      auVar172._8_4_ = _LC20 & uVar75;
      auVar172._12_4_ = _LC20 & uVar75;
      auVar182._8_4_ = auVar130._8_4_;
      auVar182._0_8_ = auVar130._0_8_;
      auVar182._12_4_ = auVar130._12_4_;
      auVar63 = maxps(auVar130,auVar156);
      auVar183 = minps(auVar182,auVar156);
      uVar72 = iStack_260 >> 0x1f;
      auVar124._0_4_ = _LC20 & uVar72;
      auVar124._4_4_ = _LC20 & uVar72;
      auVar124._8_4_ = _LC20 & uVar72;
      auVar124._12_4_ = _LC20 & uVar72;
      auVar67._0_4_ = ~uVar72 & auVar183._0_4_;
      auVar67._4_4_ = ~uVar72 & auVar183._4_4_;
      auVar67._8_4_ = ~uVar72 & auVar183._8_4_;
      auVar67._12_4_ = ~uVar72 & auVar183._12_4_;
      auVar68._0_4_ = ~uVar59 & auVar150._0_4_;
      auVar68._4_4_ = ~uVar59 & auVar150._4_4_;
      auVar68._8_4_ = ~uVar59 & auVar150._8_4_;
      auVar68._12_4_ = ~uVar59 & auVar150._12_4_;
      auVar88._0_4_ = uVar59 & _LC27;
      auVar88._4_4_ = uVar59 & _LC27;
      auVar88._8_4_ = uVar59 & _LC27;
      auVar88._12_4_ = uVar59 & _LC27;
      auVar32._4_4_ = _LC20 & uVar59 | ~uVar59 & auVar65._4_4_;
      auVar32._0_4_ = _LC20 & uVar59 | ~uVar59 & auVar65._0_4_;
      auVar32._8_4_ = _LC20 & uVar59 | ~uVar59 & auVar65._8_4_;
      auVar32._12_4_ = _LC20 & uVar59 | ~uVar59 & auVar65._12_4_;
      auVar116._0_4_ = uVar75 & _LC27;
      auVar116._4_4_ = uVar75 & _LC27;
      auVar116._8_4_ = uVar75 & _LC27;
      auVar116._12_4_ = uVar75 & _LC27;
      auVar69._0_4_ = ~uVar75 & auVar138._0_4_;
      auVar69._4_4_ = ~uVar75 & auVar138._4_4_;
      auVar69._8_4_ = ~uVar75 & auVar138._8_4_;
      auVar69._12_4_ = ~uVar75 & auVar138._12_4_;
      auVar65 = maxps(auVar32,auVar172 | auVar110);
      auVar139._0_4_ = ~uVar72 & auVar63._0_4_;
      auVar139._4_4_ = ~uVar72 & auVar63._4_4_;
      auVar139._8_4_ = ~uVar72 & auVar63._8_4_;
      auVar139._12_4_ = ~uVar72 & auVar63._12_4_;
      auVar111._0_4_ = uVar72 & _LC27;
      auVar111._4_4_ = uVar72 & _LC27;
      auVar111._8_4_ = uVar72 & _LC27;
      auVar111._12_4_ = uVar72 & _LC27;
      auVar63 = minps(auVar88 | auVar68,auVar116 | auVar69);
      auVar65 = maxps(auVar65,auVar124 | auVar67);
      auVar63 = minps(auVar63,auVar111 | auVar139);
      auVar151._4_4_ = -(uint)(fVar82 < fVar102);
      auVar151._0_4_ = -(uint)(fVar81 < fVar97);
      auVar151._8_4_ = -(uint)(fVar91 < fVar103);
      auVar151._12_4_ = -(uint)(fVar92 < fVar104);
      auVar89._4_4_ = -(uint)(auVar63._4_4_ < 0.0);
      auVar89._0_4_ = -(uint)(auVar63._0_4_ < 0.0);
      auVar89._8_4_ = -(uint)(auVar63._8_4_ < 0.0);
      auVar89._12_4_ = -(uint)(auVar63._12_4_ < 0.0);
      auVar140._4_4_ = -(uint)(auVar63._4_4_ < auVar65._4_4_);
      auVar140._0_4_ = -(uint)(auVar63._0_4_ < auVar65._0_4_);
      auVar140._8_4_ = -(uint)(auVar63._8_4_ < auVar65._8_4_);
      auVar140._12_4_ = -(uint)(auVar63._12_4_ < auVar65._12_4_);
      auVar157._4_4_ = -(uint)(fVar73 < fVar118);
      auVar157._0_4_ = -(uint)(fVar60 < fVar113);
      auVar100._4_4_ = -(uint)(fVar73 < local_298._4_4_);
      auVar100._0_4_ = -(uint)(fVar60 < local_298._4_4_);
      auVar100._8_4_ = -(uint)(fVar76 < local_298._4_4_);
      auVar100._12_4_ = -(uint)(fVar79 < local_298._4_4_);
      auVar157._8_4_ = -(uint)(fVar76 < fVar119);
      auVar157._12_4_ = -(uint)(fVar79 < fVar121);
      auVar112._4_4_ = -(uint)(fVar94 < fVar126);
      auVar112._0_4_ = -(uint)(fVar93 < fVar123);
      auVar162._4_4_ = -(uint)(fVar94 < (float)local_298);
      auVar162._0_4_ = -(uint)(fVar93 < (float)local_298);
      auVar162._8_4_ = -(uint)(fVar95 < (float)local_298);
      auVar162._12_4_ = -(uint)(fVar96 < (float)local_298);
      auVar125._4_4_ = -(uint)((float)local_298 < fVar126);
      auVar125._0_4_ = -(uint)((float)local_298 < fVar123);
      auVar125._8_4_ = -(uint)((float)local_298 < fVar127);
      auVar125._12_4_ = -(uint)((float)local_298 < fVar128);
      auVar131._4_4_ = -(uint)(local_298._4_4_ < fVar118);
      auVar131._0_4_ = -(uint)(local_298._4_4_ < fVar113);
      auVar131._8_4_ = -(uint)(local_298._4_4_ < fVar119);
      auVar131._12_4_ = -(uint)(local_298._4_4_ < fVar121);
      auVar30._4_4_ = iStack_264;
      auVar30._0_4_ = iStack_264;
      auVar30._8_4_ = iStack_264;
      auVar30._12_4_ = iStack_264;
      auVar112._8_4_ = -(uint)(fVar95 < fVar127);
      auVar112._12_4_ = -(uint)(fVar96 < fVar128);
      auVar29._4_4_ = local_268;
      auVar29._0_4_ = local_268;
      auVar29._8_4_ = local_268;
      auVar29._12_4_ = local_268;
      auVar70._4_4_ = -(uint)(fVar82 < (float)uStack_290);
      auVar70._0_4_ = -(uint)(fVar81 < (float)uStack_290);
      auVar70._8_4_ = -(uint)(fVar91 < (float)uStack_290);
      auVar70._12_4_ = -(uint)(fVar92 < (float)uStack_290);
      auVar117._4_4_ = -(uint)((float)uStack_290 < fVar102);
      auVar117._0_4_ = -(uint)((float)uStack_290 < fVar97);
      auVar117._8_4_ = -(uint)((float)uStack_290 < fVar103);
      auVar117._12_4_ = -(uint)((float)uStack_290 < fVar104);
      auVar31._4_4_ = iStack_260;
      auVar31._0_4_ = iStack_260;
      auVar31._8_4_ = iStack_260;
      auVar31._12_4_ = iStack_260;
      auVar63 = auVar112 | auVar157 | auVar140 | auVar89 |
                (auVar125 | auVar162) & auVar29 | (auVar131 | auVar100) & auVar30 |
                (auVar117 | auVar70) & auVar31 | auVar151;
      uVar59 = auVar63._0_4_ >> 0x1f;
      uVar72 = auVar63._4_4_ >> 0x1f;
      uVar75 = auVar63._8_4_ >> 0x1f;
      uVar78 = auVar63._12_4_ >> 0x1f;
      fVar60 = (float)(uVar59 & _LC27 | ~uVar59 & (uint)auVar65._0_4_);
      fVar73 = (float)(uVar72 & _LC27 | ~uVar72 & (uint)auVar65._4_4_);
      fVar76 = (float)(uVar75 & _LC27 | ~uVar75 & (uint)auVar65._8_4_);
      fVar79 = (float)(uVar78 & _LC27 | ~uVar78 & (uint)auVar65._12_4_);
      uVar59 = (int)-(uint)(fVar60 < fVar76) >> 0x1f;
      uVar72 = (int)-(uint)(fVar73 < fVar79) >> 0x1f;
      fVar81 = (float)(~uVar59 & (uint)fVar60 | (uint)fVar76 & uVar59);
      fVar82 = (float)(~uVar72 & (uint)fVar73 | (uint)fVar79 & uVar72);
      fVar76 = (float)(~uVar59 & (uint)fVar76 | (uint)fVar60 & uVar59);
      fVar79 = (float)(~uVar72 & (uint)fVar79 | (uint)fVar73 & uVar72);
      uVar78 = uVar59 & auVar62._8_4_ | ~uVar59 & auVar62._0_4_;
      uVar158 = uVar72 & uStack_59c | ~uVar72 & auVar62._4_4_;
      uVar176 = uVar59 & auVar62._0_4_ | ~uVar59 & auVar62._8_4_;
      uVar178 = uVar72 & auVar62._4_4_ | ~uVar72 & uStack_59c;
      uVar59 = (int)-(uint)(fVar81 < fVar82) >> 0x1f;
      uVar75 = (int)-(uint)(fVar76 < fVar79) >> 0x1f;
      fVar60 = (float)((uint)fVar81 & uVar59 | ~uVar59 & (uint)fVar82);
      fVar73 = (float)((uint)fVar79 & uVar75 | ~uVar75 & (uint)fVar76);
      uVar159 = uVar59 & uVar78 | ~uVar59 & uVar158;
      uVar177 = uVar75 & uVar178 | ~uVar75 & uVar176;
      uVar72 = (int)-(uint)(fVar60 < fVar73) >> 0x1f;
      auVar65._4_4_ = (uint)fVar60 & uVar72;
      auVar65._0_4_ = (uint)fVar73 & uVar72;
      auVar65._8_8_ = 0;
      auVar101._4_4_ = ~uVar72 & (uint)fVar60;
      auVar101._0_4_ = (uint)fVar82 & uVar59 | ~uVar59 & (uint)fVar81;
      auVar101._8_4_ = ~uVar72 & (uint)fVar73;
      auVar101._12_4_ = (uint)fVar76 & uVar75 | ~uVar75 & (uint)fVar79;
      auVar101 = auVar65 << 0x20 | auVar101;
      local_4e8 = CONCAT44(uVar72 & uVar177 | ~uVar72 & uVar159,uVar59 & uVar158 | ~uVar59 & uVar78)
      ;
      uStack_4e0 = CONCAT44(uVar75 & uVar176 | ~uVar75 & uVar178,
                            uVar72 & uVar159 | ~uVar72 & uVar177);
      auVar71._4_4_ = -(uint)(auVar101._4_4_ < local_500);
      auVar71._0_4_ = -(uint)(auVar101._0_4_ < local_500);
      auVar71._8_4_ = -(uint)(auVar101._8_4_ < local_500);
      auVar71._12_4_ = -(uint)(auVar101._12_4_ < local_500);
      uVar72 = movmskps((int)this,auVar71);
      this = (MeshShape *)(ulong)uVar72;
      uVar59 = __popcountdi2();
      local_4c8 = auVar101;
      if (uVar72 == 0) {
        local_4c8 = (undefined1  [16])0x0;
        aMVar90 = (MeshShape  [16])0x0;
      }
      else {
        local_4d8[0] = (MeshShape)0x0;
        local_4d8[1] = (MeshShape)0x0;
        local_4d8[2] = (MeshShape)0x0;
        local_4d8[3] = (MeshShape)0x0;
        local_4d8[4] = (MeshShape)0x0;
        local_4d8[5] = (MeshShape)0x0;
        local_4d8[6] = (MeshShape)0x0;
        local_4d8[7] = (MeshShape)0x0;
        local_4d8[8] = (MeshShape)0x0;
        local_4d8[9] = (MeshShape)0x0;
        local_4d8[10] = (MeshShape)0x0;
        local_4d8[0xb] = (MeshShape)0x0;
        local_4d8[0xc] = (MeshShape)0x0;
        local_4d8[0xd] = (MeshShape)0x0;
        local_4d8[0xe] = (MeshShape)0x0;
        local_4d8[0xf] = (MeshShape)0x0;
        uVar53 = (ulong)uVar59 << 2;
        pMVar49 = (MeshShape *)local_4c8;
        this = local_4d8;
        lVar42 = (4 - (long)(int)uVar59) * 4;
        pMVar50 = pMVar49 + lVar42;
        if (7 < (uint)uVar53) {
          for (uVar48 = uVar53 >> 3 & 0x1fffffff; uVar48 != 0; uVar48 = uVar48 - 1) {
            *(undefined8 *)this = *(undefined8 *)pMVar50;
            pMVar50 = pMVar50 + (ulong)bVar58 * -0x10 + 8;
            this = this + (ulong)bVar58 * -0x10 + 8;
          }
        }
        if ((uVar53 & 4) != 0) {
          *(undefined4 *)this = *(undefined4 *)pMVar50;
        }
        puVar51 = (undefined8 *)((long)&local_4e8 + lVar42);
        local_4c8 = (undefined1  [16])0x0;
        if (7 < (uint)uVar53) {
          for (uVar48 = uVar53 >> 3 & 0x1fffffff; this = pMVar49, uVar48 != 0; uVar48 = uVar48 - 1)
          {
            *(undefined8 *)pMVar49 = *puVar51;
            puVar51 = puVar51 + (ulong)bVar58 * -2 + 1;
            pMVar49 = pMVar49 + (ulong)bVar58 * -0x10 + 8;
          }
        }
        aMVar90 = local_4d8;
        if ((uVar53 & 4) != 0) {
          *(undefined4 *)pMVar49 = *(undefined4 *)puVar51;
        }
      }
      uVar39 = local_4c8._0_8_;
      uVar40 = local_4c8._8_8_;
      *(MeshShape (*) [16])(local_248 + lVar41) = aMVar90;
      param_3 = local_2a8;
      *(undefined8 *)(local_4b8 + lVar41) = local_4c8._0_8_;
      *(undefined8 *)((long)auStack_4b0 + lVar41 * 4) = uVar40;
      local_500 = *(float *)(param_3 + 4);
      local_2b8 = local_2b8 + uVar59;
      local_4e8 = uVar39;
      uStack_4e0 = uVar40;
    }
    else if (uVar72 != 0xf) {
      puVar45 = (uint *)((ulong)((uVar59 & 0xfffffff) * 4) + lVar11);
      local_5e8 = (undefined1  [16])0x0;
      local_5d8 = (undefined1  [16])0x0;
      lVar42 = (ulong)((*puVar45 & 0x1fffffff) << 2) + (long)puVar45;
      lVar41 = lVar42 + 4;
      local_5f8 = local_500;
      fStack_5f4 = local_500;
      fStack_5f0 = local_500;
      fStack_5ec = local_500;
      puVar46 = puVar45 + 1;
      do {
        uVar75 = *puVar46;
        uVar78 = puVar46[1];
        puVar47 = puVar46 + 4;
        uVar158 = puVar46[2];
        uVar52 = (ulong)(uVar75 >> 0xd & 0x7f8);
        uVar53 = (ulong)((uVar75 >> 8 & 0xff) << 3);
        uVar48 = (ulong)((uVar75 >> 0x18) << 3);
        uVar159 = *(uint *)(lVar42 + uVar52);
        uVar176 = *(uint *)(lVar42 + uVar53);
        uVar177 = *(uint *)(lVar42 + uVar48);
        uVar57 = (ulong)(uVar75 * 8 & 0x7f8);
        uVar75 = *(uint *)(lVar42 + uVar57);
        uVar178 = *(uint *)(lVar41 + uVar52);
        uVar179 = *(uint *)(lVar41 + uVar53);
        uVar52 = (ulong)((uVar78 >> 8 & 0xff) << 3);
        uVar54 = (ulong)((uVar78 >> 0x18) << 3);
        uVar120 = *(uint *)(lVar42 + uVar52);
        uVar122 = *(uint *)(lVar41 + uVar48);
        uVar55 = (ulong)(uVar78 * 8 & 0x7f8);
        uVar56 = (ulong)(uVar78 >> 0xd & 0x7f8);
        uVar78 = *(uint *)(lVar42 + uVar54);
        this = (MeshShape *)(ulong)((uVar158 >> 0x18) << 3);
        uVar145 = *(uint *)(lVar41 + uVar57);
        uVar48 = (ulong)((uVar158 >> 8 & 0xff) << 3);
        uVar53 = (ulong)(uVar158 >> 0xd & 0x7f8);
        uVar8 = *(uint *)(lVar42 + uVar55);
        uVar9 = *(uint *)(lVar41 + uVar55);
        uVar10 = *(uint *)(lVar42 + uVar56);
        fVar135 = (float)(int)(uVar145 & __LC9) * fVar6 + fVar5;
        fVar141 = (float)(int)(uVar179 & _UNK_00112494) * fVar6 + fVar5;
        fVar143 = (float)(int)(uVar178 & _UNK_00112498) * fVar6 + fVar5;
        fVar146 = (float)(int)(uVar122 & _UNK_0011249c) * fVar6 + fVar5;
        fVar129 = (float)(int)(uVar75 & __LC9) * fVar4 + fVar3;
        fVar132 = (float)(int)(uVar176 & _UNK_00112494) * fVar4 + fVar3;
        fVar133 = (float)(int)(uVar159 & _UNK_00112498) * fVar4 + fVar3;
        fVar134 = (float)(int)(uVar177 & _UNK_0011249c) * fVar4 + fVar3;
        fVar81 = (float)(uVar75 >> 0x15 | (uVar145 >> 0x15) << 0xb) * fVar7 + fVar2;
        fVar91 = (float)(uVar176 >> 0x15 | (uVar179 >> 0x15) << 0xb) * fVar7 + fVar2;
        fVar93 = (float)(uVar159 >> 0x15 | (uVar178 >> 0x15) << 0xb) * fVar7 + fVar2;
        fVar95 = (float)(uVar177 >> 0x15 | (uVar122 >> 0x15) << 0xb) * fVar7 + fVar2;
        uVar75 = *(uint *)(lVar41 + uVar54);
        uVar159 = *(uint *)(lVar41 + uVar56);
        uVar176 = *(uint *)(lVar41 + uVar52);
        uVar52 = (ulong)(uVar158 * 8 & 0x7f8);
        uVar158 = *(uint *)(lVar42 + uVar52);
        uVar177 = *(uint *)(lVar42 + uVar53);
        fVar97 = ((float)(int)(uVar8 & __LC9) * fVar4 + fVar3) - fVar129;
        fVar102 = ((float)(int)(uVar120 & _UNK_00112494) * fVar4 + fVar3) - fVar132;
        fVar103 = ((float)(int)(uVar10 & _UNK_00112498) * fVar4 + fVar3) - fVar133;
        fVar104 = ((float)(int)(uVar78 & _UNK_0011249c) * fVar4 + fVar3) - fVar134;
        uVar178 = *(uint *)(lVar42 + uVar48);
        uVar179 = *(uint *)(lVar41 + uVar52);
        uVar122 = *(uint *)(lVar41 + uVar53);
        uVar145 = *(uint *)(lVar41 + uVar48);
        fVar123 = ((float)(int)(uVar9 & __LC9) * fVar6 + fVar5) - fVar135;
        fVar126 = ((float)(int)(uVar176 & _UNK_00112494) * fVar6 + fVar5) - fVar141;
        fVar127 = ((float)(int)(uVar159 & _UNK_00112498) * fVar6 + fVar5) - fVar143;
        fVar128 = ((float)(int)(uVar75 & _UNK_0011249c) * fVar6 + fVar5) - fVar146;
        fVar148 = ((float)(uVar8 >> 0x15 | (uVar9 >> 0x15) << 0xb) * fVar7 + fVar2) - fVar81;
        fVar152 = ((float)(uVar120 >> 0x15 | (uVar176 >> 0x15) << 0xb) * fVar7 + fVar2) - fVar91;
        fVar153 = ((float)(uVar10 >> 0x15 | (uVar159 >> 0x15) << 0xb) * fVar7 + fVar2) - fVar93;
        fVar154 = ((float)(uVar78 >> 0x15 | (uVar75 >> 0x15) << 0xb) * fVar7 + fVar2) - fVar95;
        fVar113 = ((float)(int)(uVar179 & __LC9) * fVar6 + fVar5) - fVar135;
        fVar118 = ((float)(int)(uVar145 & _UNK_00112494) * fVar6 + fVar5) - fVar141;
        fVar119 = ((float)(int)(uVar122 & _UNK_00112498) * fVar6 + fVar5) - fVar143;
        fVar121 = ((float)(int)(*(uint *)(this + lVar41) & _UNK_0011249c) * fVar6 + fVar5) - fVar146
        ;
        fVar60 = ((float)(uVar158 >> 0x15 | (uVar179 >> 0x15) << 0xb) * fVar7 + fVar2) - fVar81;
        fVar73 = ((float)(uVar178 >> 0x15 | (uVar145 >> 0x15) << 0xb) * fVar7 + fVar2) - fVar91;
        fVar76 = ((float)(uVar177 >> 0x15 | (uVar122 >> 0x15) << 0xb) * fVar7 + fVar2) - fVar93;
        fVar79 = ((float)(*(uint *)(this + lVar42) >> 0x15 |
                         (*(uint *)(this + lVar41) >> 0x15) << 0xb) * fVar7 + fVar2) - fVar95;
        fVar82 = ((float)(int)(uVar158 & __LC9) * fVar4 + fVar3) - fVar129;
        fVar92 = ((float)(int)(uVar178 & _UNK_00112494) * fVar4 + fVar3) - fVar132;
        fVar94 = ((float)(int)(uVar177 & _UNK_00112498) * fVar4 + fVar3) - fVar133;
        fVar96 = ((float)(int)(*(uint *)(this + lVar42) & _UNK_0011249c) * fVar4 + fVar3) - fVar134;
        fVar136 = local_288._4_4_ * fVar113 - (float)uStack_280 * fVar60;
        fVar142 = local_288._4_4_ * fVar118 - (float)uStack_280 * fVar73;
        fVar144 = local_288._4_4_ * fVar119 - (float)uStack_280 * fVar76;
        fVar147 = local_288._4_4_ * fVar121 - (float)uStack_280 * fVar79;
        fVar171 = (float)uStack_280 * fVar82 - (float)local_288 * fVar113;
        fVar173 = (float)uStack_280 * fVar92 - (float)local_288 * fVar118;
        fVar174 = (float)uStack_280 * fVar94 - (float)local_288 * fVar119;
        fVar175 = (float)uStack_280 * fVar96 - (float)local_288 * fVar121;
        fVar166 = (float)local_288 * fVar60 - local_288._4_4_ * fVar82;
        fVar168 = (float)local_288 * fVar73 - local_288._4_4_ * fVar92;
        fVar169 = (float)local_288 * fVar76 - local_288._4_4_ * fVar94;
        fVar170 = (float)local_288 * fVar79 - local_288._4_4_ * fVar96;
        fVar160 = fVar123 * fVar166 + fVar97 * fVar136 + fVar148 * fVar171;
        fVar163 = fVar126 * fVar168 + fVar102 * fVar142 + fVar152 * fVar173;
        fVar164 = fVar127 * fVar169 + fVar103 * fVar144 + fVar153 * fVar174;
        fVar165 = fVar128 * fVar170 + fVar104 * fVar147 + fVar154 * fVar175;
        uVar176 = __LC28 & (uint)fVar160;
        uVar177 = _UNK_00112524 & (uint)fVar163;
        uVar178 = _UNK_00112528 & (uint)fVar164;
        uVar179 = _UNK_0011252c & (uint)fVar165;
        fVar160 = (float)((uint)fVar160 ^ uVar176);
        fVar163 = (float)((uint)fVar163 ^ uVar177);
        fVar164 = (float)((uint)fVar164 ^ uVar178);
        fVar165 = (float)((uint)fVar165 ^ uVar179);
        uVar75 = (int)-(uint)(fVar160 < _LC31) >> 0x1f;
        uVar78 = (int)-(uint)(fVar163 < _UNK_00112534) >> 0x1f;
        uVar158 = (int)-(uint)(fVar164 < _UNK_00112538) >> 0x1f;
        uVar159 = (int)-(uint)(fVar165 < _UNK_0011253c) >> 0x1f;
        auVar155._0_4_ = uVar75 & __LC24;
        auVar155._4_4_ = uVar78 & _UNK_00112514;
        auVar155._8_4_ = uVar158 & _UNK_00112518;
        auVar155._12_4_ = uVar159 & _UNK_0011251c;
        auVar180._0_4_ = ~uVar75 & (uint)fVar160;
        auVar180._4_4_ = ~uVar78 & (uint)fVar163;
        auVar180._8_4_ = ~uVar158 & (uint)fVar164;
        auVar180._12_4_ = ~uVar159 & (uint)fVar165;
        auVar155 = auVar155 | auVar180;
        fVar135 = (float)uStack_290 - fVar135;
        fVar141 = (float)uStack_290 - fVar141;
        fVar143 = (float)uStack_290 - fVar143;
        fVar146 = (float)uStack_290 - fVar146;
        fVar129 = (float)local_298 - fVar129;
        fVar132 = (float)local_298 - fVar132;
        fVar133 = (float)local_298 - fVar133;
        fVar134 = (float)local_298 - fVar134;
        fVar81 = local_298._4_4_ - fVar81;
        fVar91 = local_298._4_4_ - fVar91;
        fVar93 = local_298._4_4_ - fVar93;
        fVar95 = local_298._4_4_ - fVar95;
        fVar136 = (float)((uint)(fVar136 * fVar129 + fVar171 * fVar81 + fVar166 * fVar135) ^ uVar176
                         );
        fVar142 = (float)((uint)(fVar142 * fVar132 + fVar173 * fVar91 + fVar168 * fVar141) ^ uVar177
                         );
        fVar144 = (float)((uint)(fVar144 * fVar133 + fVar174 * fVar93 + fVar169 * fVar143) ^ uVar178
                         );
        fVar147 = (float)((uint)(fVar147 * fVar134 + fVar175 * fVar95 + fVar170 * fVar146) ^ uVar179
                         );
        fVar166 = fVar123 * fVar81 - fVar148 * fVar135;
        fVar168 = fVar126 * fVar91 - fVar152 * fVar141;
        fVar169 = fVar127 * fVar93 - fVar153 * fVar143;
        fVar170 = fVar128 * fVar95 - fVar154 * fVar146;
        fVar123 = fVar135 * fVar97 - fVar123 * fVar129;
        fVar126 = fVar141 * fVar102 - fVar126 * fVar132;
        fVar127 = fVar143 * fVar103 - fVar127 * fVar133;
        fVar128 = fVar146 * fVar104 - fVar128 * fVar134;
        fVar81 = fVar129 * fVar148 - fVar97 * fVar81;
        fVar91 = fVar132 * fVar152 - fVar102 * fVar91;
        fVar93 = fVar133 * fVar153 - fVar103 * fVar93;
        fVar95 = fVar134 * fVar154 - fVar104 * fVar95;
        auVar64._0_4_ =
             (float)((uint)(fVar60 * fVar123 + fVar82 * fVar166 + fVar113 * fVar81) ^ uVar176);
        auVar64._4_4_ =
             (float)((uint)(fVar73 * fVar126 + fVar92 * fVar168 + fVar118 * fVar91) ^ uVar177);
        auVar64._8_4_ =
             (float)((uint)(fVar76 * fVar127 + fVar94 * fVar169 + fVar119 * fVar93) ^ uVar178);
        auVar64._12_4_ =
             (float)((uint)(fVar79 * fVar128 + fVar96 * fVar170 + fVar121 * fVar95) ^ uVar179);
        auVar65 = divps(auVar64,auVar155);
        fVar60 = (float)((uint)((float)local_288 * fVar166 + local_288._4_4_ * fVar123 +
                               (float)uStack_280 * fVar81) ^ uVar176);
        fVar73 = (float)((uint)((float)local_288 * fVar168 + local_288._4_4_ * fVar126 +
                               (float)uStack_280 * fVar91) ^ uVar177);
        fVar76 = (float)((uint)((float)local_288 * fVar169 + local_288._4_4_ * fVar127 +
                               (float)uStack_280 * fVar93) ^ uVar178);
        fVar79 = (float)((uint)((float)local_288 * fVar170 + local_288._4_4_ * fVar128 +
                               (float)uStack_280 * fVar95) ^ uVar179);
        uVar75 = (int)-(uint)(((fVar136 < 0.0 || fVar160 < _LC31) ||
                              (fVar60 < 0.0 || auVar155._0_4_ < fVar136 + fVar60)) ||
                             auVar64._0_4_ < 0.0) >> 0x1f;
        uVar78 = (int)-(uint)(((fVar142 < 0.0 || fVar163 < _UNK_00112534) ||
                              (fVar73 < 0.0 || auVar155._4_4_ < fVar142 + fVar73)) ||
                             auVar64._4_4_ < 0.0) >> 0x1f;
        uVar158 = (int)-(uint)(((fVar144 < 0.0 || fVar164 < _UNK_00112538) ||
                               (fVar76 < 0.0 || auVar155._8_4_ < fVar144 + fVar76)) ||
                              auVar64._8_4_ < 0.0) >> 0x1f;
        uVar159 = (int)-(uint)(((fVar147 < 0.0 || fVar165 < _UNK_0011253c) ||
                               (fVar79 < 0.0 || auVar155._12_4_ < fVar147 + fVar79)) ||
                              auVar64._12_4_ < 0.0) >> 0x1f;
        uVar176 = __LC32 + local_5e8._0_4_;
        uVar177 = _UNK_00112544 + local_5e8._4_4_;
        uVar178 = _UNK_00112548 + local_5e8._8_4_;
        uVar179 = _UNK_0011254c + local_5e8._12_4_;
        local_5e8._4_4_ = local_5e8._4_4_ + _UNK_00112554;
        local_5e8._0_4_ = local_5e8._0_4_ + __LC33;
        local_5e8._8_4_ = local_5e8._8_4_ + _UNK_00112558;
        local_5e8._12_4_ = local_5e8._12_4_ + _UNK_0011255c;
        fVar60 = (float)(uVar75 & _LC27 | ~uVar75 & auVar65._0_4_);
        fVar73 = (float)(uVar78 & _LC27 | ~uVar78 & auVar65._4_4_);
        fVar76 = (float)(uVar158 & _LC27 | ~uVar158 & auVar65._8_4_);
        fVar79 = (float)(uVar159 & _LC27 | ~uVar159 & auVar65._12_4_);
        uVar75 = (int)-(uint)(fVar60 < local_5f8) >> 0x1f;
        uVar78 = (int)-(uint)(fVar73 < fStack_5f4) >> 0x1f;
        uVar158 = (int)-(uint)(fVar76 < fStack_5f0) >> 0x1f;
        uVar159 = (int)-(uint)(fVar79 < fStack_5ec) >> 0x1f;
        local_5f8 = (float)((uint)fVar60 & uVar75 | ~uVar75 & (uint)local_5f8);
        fStack_5f4 = (float)((uint)fVar73 & uVar78 | ~uVar78 & (uint)fStack_5f4);
        fStack_5f0 = (float)((uint)fVar76 & uVar158 | ~uVar158 & (uint)fStack_5f0);
        fStack_5ec = (float)((uint)fVar79 & uVar159 | ~uVar159 & (uint)fStack_5ec);
        local_5d8._0_4_ = uVar75 & uVar176 | ~uVar75 & local_5d8._0_4_;
        local_5d8._4_4_ = uVar78 & uVar177 | ~uVar78 & local_5d8._4_4_;
        local_5d8._8_4_ = uVar158 & uVar178 | ~uVar158 & local_5d8._8_4_;
        local_5d8._12_4_ = uVar159 & uVar179 | ~uVar159 & local_5d8._12_4_;
        puVar46 = puVar47;
      } while (puVar47 < puVar45 + 1 + (ulong)(uVar72 + 3 >> 2) * 4);
      uVar72 = (int)-(uint)(fStack_5f0 < local_5f8) >> 0x1f;
      uVar75 = (int)-(uint)(fStack_5ec < fStack_5f4) >> 0x1f;
      fVar60 = (float)((uint)fStack_5f0 & uVar72 | ~uVar72 & (uint)local_5f8);
      fVar73 = (float)((uint)fStack_5ec & uVar75 | ~uVar75 & (uint)fStack_5f4);
      uVar78 = (int)-(uint)(fVar73 < fVar60) >> 0x1f;
      fVar60 = (float)((uint)fVar73 & uVar78 | ~uVar78 & (uint)fVar60);
      if (fVar60 < local_500) {
        local_24c = 1;
        bVar17 = (byte)((ulong)local_254 >> 0x20);
        bVar44 = (byte)local_258 + bVar17;
        uVar158 = ~(7 << (bVar44 & 0x1f));
        this = (MeshShape *)(ulong)uVar158;
        *(float *)(param_3 + 4) = fVar60;
        *(uint *)(param_3 + 8) =
             (~((int)(1L << ((byte)local_258 & 0x3f)) + -1 << (bVar17 & 0x1f)) & (uint)local_254 |
             (uVar59 & 0xfffffff) << (bVar17 & 0x1f)) & uVar158 |
             ((local_5d8._12_4_ & uVar75 | ~uVar75 & local_5d8._4_4_) & uVar78 |
             ~uVar78 & (local_5d8._8_4_ & uVar72 | ~uVar72 & local_5d8._0_4_)) << (bVar44 & 0x1f);
        local_500 = fVar60;
      }
    }
    if (local_500 <= 0.0) break;
    lVar41 = (long)(local_2b8 + -1);
    do {
      iVar61 = (int)lVar41;
      if (iVar61 < 0) goto LAB_00104619;
      pfVar1 = local_248 + lVar41;
      lVar41 = lVar41 + -1;
    } while (local_500 < *pfVar1 || local_500 == *pfVar1);
    local_2b8 = iVar61;
    lVar41 = (long)iVar61;
    uVar59 = local_4b8[iVar61];
  }
LAB_00104619:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_24c;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MeshShape::sCastConvexVsMesh(JPH::ShapeCast const&, JPH::ShapeCastSettings const&,
   JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44 const&, JPH::SubShapeIDCreator
   const&, JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::ShapeCastResult,
   JPH::CollisionCollectorTraitsCastShape>&) */

void JPH::MeshShape::sCastConvexVsMesh
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,uint *param_7,undefined8 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  uint uVar8;
  long lVar9;
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [16];
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [14];
  undefined1 auVar34 [14];
  undefined1 auVar35 [14];
  undefined1 auVar36 [14];
  undefined1 auVar37 [14];
  undefined1 auVar38 [14];
  uint uVar39;
  long lVar40;
  undefined1 (*pauVar41) [16];
  ulong uVar42;
  CastConvexVsTriangles *pCVar43;
  undefined1 (*pauVar44) [16];
  undefined1 (*pauVar45) [16];
  byte bVar46;
  byte bVar47;
  ulong uVar48;
  CastConvexVsTriangles *pCVar49;
  undefined8 *puVar50;
  long lVar51;
  int *piVar52;
  ulong uVar53;
  uint uVar54;
  long lVar55;
  ulong uVar56;
  CastConvexVsTriangles *pCVar57;
  byte *pbVar58;
  ulong uVar59;
  long in_FS_OFFSET;
  byte bVar60;
  uint uVar61;
  uint uVar67;
  uint uVar68;
  undefined1 auVar62 [16];
  uint uVar69;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  int iVar70;
  int iVar72;
  int iVar73;
  float fVar74;
  int iVar84;
  int iVar89;
  undefined1 auVar76 [12];
  undefined8 uVar75;
  undefined1 auVar78 [16];
  int iVar95;
  undefined1 auVar79 [16];
  int iVar71;
  int iVar85;
  int iVar90;
  undefined1 auVar77 [12];
  int iVar96;
  undefined1 auVar80 [16];
  int iVar86;
  int iVar87;
  float fVar88;
  int iVar91;
  int iVar92;
  float fVar93;
  int iVar97;
  int iVar98;
  float fVar99;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined8 uVar94;
  uint uVar100;
  float fVar104;
  float fVar105;
  int iVar113;
  uint uVar114;
  int iVar115;
  uint uVar116;
  uint uVar119;
  int iVar120;
  uint uVar121;
  int iVar122;
  uint uVar123;
  undefined1 auVar106 [12];
  uint uVar112;
  undefined1 auVar107 [16];
  int iVar101;
  int iVar102;
  uint uVar103;
  uint uVar126;
  int iVar127;
  uint uVar128;
  int iVar129;
  uint uVar130;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  float fVar117;
  float fVar118;
  float fVar124;
  float fVar125;
  float fVar131;
  float fVar132;
  undefined1 auVar111 [16];
  uint uVar133;
  float fVar134;
  uint uVar138;
  uint uVar140;
  uint uVar142;
  undefined1 auVar135 [16];
  float fVar139;
  float fVar141;
  float fVar143;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  float fVar144;
  float fVar148;
  float fVar149;
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  float fVar150;
  undefined1 auVar147 [16];
  uint uVar151;
  float fVar156;
  uint uVar164;
  uint uVar170;
  undefined1 auVar157 [16];
  uint uVar176;
  undefined1 auVar158 [16];
  uint uVar152;
  uint uVar153;
  uint uVar154;
  uint uVar165;
  uint uVar166;
  uint uVar167;
  uint uVar171;
  uint uVar172;
  uint uVar173;
  uint uVar177;
  uint uVar178;
  uint uVar179;
  undefined1 auVar159 [16];
  uint uVar155;
  uint uVar168;
  uint uVar174;
  uint uVar180;
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  float fVar169;
  float fVar175;
  float fVar181;
  undefined1 auVar163 [16];
  uint uVar182;
  uint uVar183;
  uint uVar184;
  float fVar185;
  uint uVar191;
  uint uVar195;
  undefined1 auVar186 [16];
  uint uVar199;
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  uint uVar192;
  uint uVar196;
  uint uVar200;
  undefined1 auVar189 [16];
  uint uVar193;
  float fVar194;
  uint uVar197;
  float fVar198;
  uint uVar201;
  float fVar202;
  undefined1 auVar190 [16];
  uint uVar203;
  uint uVar204;
  uint uVar205;
  uint uVar206;
  uint uVar207;
  uint uVar211;
  uint uVar212;
  uint uVar213;
  uint uVar214;
  uint uVar215;
  uint uVar216;
  uint uVar217;
  uint uVar218;
  uint uVar219;
  uint uVar220;
  uint uVar221;
  uint uVar222;
  uint uVar223;
  uint uVar224;
  uint uVar225;
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  uint local_17e8;
  uint uStack_17e4;
  uint uStack_17e0;
  uint uStack_17dc;
  uint local_176c;
  undefined1 local_1768 [16];
  undefined1 local_1758 [16];
  float local_1748;
  float fStack_1744;
  float fStack_1740;
  undefined4 uStack_173c;
  undefined1 local_1738 [16];
  undefined1 local_1728 [16];
  undefined1 local_1718 [16];
  undefined1 local_1708 [16];
  undefined1 local_16f8 [16];
  undefined1 local_16e8 [16];
  undefined1 local_16d8 [16];
  undefined1 local_16c8 [16];
  undefined1 local_16b8 [16];
  CastConvexVsTriangles local_16a8 [384];
  uint local_1528 [2];
  undefined8 auStack_1520 [63];
  int local_1328;
  CastConvexVsTriangles local_1318 [32];
  float local_12f8;
  float fStack_12f4;
  float fStack_12f0;
  long local_12e0;
  undefined1 local_288 [8];
  float fStack_280;
  uint local_278;
  uint uStack_274;
  uint uStack_270;
  int iStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  CastConvexVsTriangles local_248 [8];
  undefined8 auStack_240 [63];
  byte local_48 [8];
  long local_40;
  
  bVar60 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::CastConvexVsTriangles::CastConvexVsTriangles
            (local_1318,param_1,param_2,param_5,param_6,param_8);
  auVar78 = *(undefined1 (*) [16])(param_1 + 0x60);
  uVar39 = param_7[1];
  pCVar43 = (CastConvexVsTriangles *)(ulong)uVar39;
  lVar9 = *(long *)(param_3 + 0x48);
  local_1328 = 0;
  auVar62._0_4_ = 0.0 - auVar78._0_4_;
  auVar62._4_4_ = 0.0 - auVar78._4_4_;
  auVar62._8_4_ = 0.0 - auVar78._8_4_;
  auVar62._12_4_ = 0.0 - auVar78._12_4_;
  auVar62 = maxps(auVar62,auVar78);
  local_278 = -(uint)(auVar62._0_4_ <= _LC23);
  uStack_274 = -(uint)(auVar62._4_4_ <= _LC23);
  uStack_270 = -(uint)(auVar62._8_4_ <= _LC23);
  iStack_26c = -(uint)(auVar62._12_4_ <= _LC23);
  uVar61 = *(uint *)(lVar9 + 0x18);
  auVar161._0_4_ = ~((int)local_278 >> 0x1f) & (uint)auVar78._0_4_;
  auVar161._4_4_ = ~((int)uStack_274 >> 0x1f) & (uint)auVar78._4_4_;
  auVar161._8_4_ = ~((int)uStack_270 >> 0x1f) & (uint)auVar78._8_4_;
  auVar161._12_4_ = ~(iStack_26c >> 0x1f) & (uint)auVar78._12_4_;
  local_1528[0] = uVar61;
  auVar145._4_4_ = _LC2;
  auVar145._0_4_ = _LC2;
  auVar145._8_4_ = _LC2;
  auVar145._12_4_ = _LC2;
  auVar78._0_4_ = (int)local_278 >> 0x1f & _LC2;
  auVar78._4_4_ = (int)uStack_274 >> 0x1f & _LC2;
  auVar78._8_4_ = (int)uStack_270 >> 0x1f & _LC2;
  auVar78._12_4_ = iStack_26c >> 0x1f & _LC2;
  _local_288 = divps(auVar145,auVar78 | auVar161);
  local_258 = (*(float *)(param_1 + 0x80) - *(float *)(param_1 + 0x70)) * _LC4;
  fStack_254 = (*(float *)(param_1 + 0x84) - *(float *)(param_1 + 0x74)) * _LC4;
  fStack_250 = (*(float *)(param_1 + 0x88) - *(float *)(param_1 + 0x78)) * _LC4;
  fStack_24c = (*(float *)(param_1 + 0x8c) - *(float *)(param_1 + 0x7c)) * _LC4;
  local_268 = (*(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x70)) * _LC4;
  fStack_264 = (*(float *)(param_1 + 0x84) + *(float *)(param_1 + 0x74)) * _LC4;
  fStack_260 = (*(float *)(param_1 + 0x88) + *(float *)(param_1 + 0x78)) * _LC4;
  fStack_25c = (*(float *)(param_1 + 0x8c) + *(float *)(param_1 + 0x7c)) * _LC4;
  bVar7 = *(byte *)(lVar9 + 0x1c);
  fVar1 = *(float *)(lVar9 + 0x20);
  fVar2 = *(float *)(lVar9 + 0x28);
  fVar3 = *(float *)(lVar9 + 0x2c);
  fVar4 = *(float *)(lVar9 + 0x30);
  fVar5 = *(float *)(lVar9 + 0x34);
  fVar6 = *(float *)(lVar9 + 0x24);
  bVar46 = (byte)uVar39;
  bVar47 = bVar46 + bVar7;
  uVar8 = *param_7;
  lVar40 = 0;
  uVar54 = uVar61 >> 0x1c;
  uVar67 = __LC9;
  uVar68 = _UNK_00112494;
  uVar69 = _UNK_00112498;
  uVar100 = _UNK_0011249c;
  if (uVar54 == 0) goto LAB_00105782;
LAB_001056d0:
  if (uVar54 != 0xf) {
    pauVar41 = (undefined1 (*) [16])local_16a8;
    piVar52 = (int *)((ulong)((uVar61 & 0xfffffff) * 4) + lVar9);
    pCVar57 = (CastConvexVsTriangles *)(piVar52 + 1);
    uVar103 = *piVar52 * 4 & 0x7ffffffc;
    pCVar43 = pCVar57 + (ulong)(uVar54 + 3 >> 2) * 0x10;
    lVar40 = (ulong)uVar103 + 4;
    pauVar45 = pauVar41;
    pCVar49 = pCVar57;
    uVar39 = uVar54;
    do {
      uVar112 = *(uint *)pCVar49;
      uVar114 = *(uint *)(pCVar49 + 4);
      uVar116 = *(uint *)(pCVar49 + 8);
      uVar42 = (ulong)((uVar112 >> 0x18) << 3);
      uVar48 = (ulong)((uVar112 >> 8 & 0xff) << 3);
      uVar59 = (ulong)(uVar112 >> 0xd & 0x7f8);
      uVar53 = (ulong)(uVar112 * 8 & 0x7f8);
      uVar112 = *(uint *)((long)piVar52 + uVar48 + uVar103);
      uVar119 = *(uint *)((long)piVar52 + uVar59 + uVar103);
      uVar121 = *(uint *)((long)piVar52 + uVar42 + uVar103);
      uVar123 = *(uint *)((long)piVar52 + uVar53 + uVar103);
      uVar56 = (ulong)(uVar114 >> 0xd & 0x7f8);
      uVar126 = *(uint *)((long)piVar52 + uVar42 + lVar40);
      uVar42 = (ulong)((uVar114 >> 0x18) << 3);
      uVar128 = *(uint *)((long)piVar52 + uVar53 + lVar40);
      uVar130 = *(uint *)((long)piVar52 + uVar59 + lVar40);
      uVar133 = *(uint *)((long)piVar52 + uVar42 + uVar103);
      uVar138 = *(uint *)((long)piVar52 + uVar42 + lVar40);
      uVar140 = *(uint *)((long)piVar52 + uVar48 + lVar40);
      uVar48 = (ulong)((uVar114 >> 8 & 0xff) * 8);
      uVar42 = (ulong)(uVar114 * 8 & 0x7f8);
      uVar114 = *(uint *)((long)piVar52 + uVar42 + uVar103);
      uVar142 = *(uint *)((long)piVar52 + uVar42 + lVar40);
      uVar53 = (ulong)((uVar116 >> 0x18) << 3);
      uVar42 = (ulong)(uVar116 >> 0xd & 0x7f8);
      uVar151 = *(uint *)((long)piVar52 + uVar56 + uVar103);
      uVar152 = *(uint *)((long)piVar52 + uVar48 + uVar103);
      uVar153 = *(uint *)((long)piVar52 + uVar56 + lVar40);
      uVar154 = *(uint *)((long)piVar52 + uVar48 + lVar40);
      uVar155 = *(uint *)((long)piVar52 + uVar42 + uVar103);
      uVar56 = (ulong)(uVar116 * 8 & 0x7f8);
      uVar48 = (ulong)((uVar116 >> 8 & 0xff) << 3);
      uVar116 = *(uint *)((long)piVar52 + uVar48 + lVar40);
      uVar164 = *(uint *)((long)piVar52 + uVar56 + uVar103);
      uVar165 = *(uint *)((long)piVar52 + uVar53 + uVar103);
      uVar166 = *(uint *)((long)piVar52 + uVar48 + uVar103);
      uVar167 = *(uint *)((long)piVar52 + uVar42 + lVar40);
      uVar168 = *(uint *)((long)piVar52 + uVar53 + lVar40);
      uVar170 = *(uint *)((long)piVar52 + uVar56 + lVar40);
      local_1758._4_4_ = (float)(uVar112 >> 0x15 | (uVar140 >> 0x15) << 0xb) * fVar4 + fVar6;
      local_1758._0_4_ = (float)(int)(uVar112 & uVar68) * fVar3 + fVar1;
      local_1758._8_4_ = (float)(int)(uVar140 & uVar68) * fVar5 + fVar2;
      local_1758._12_4_ = 0;
      local_1768._4_4_ = (float)(uVar123 >> 0x15 | (uVar128 >> 0x15) << 0xb) * fVar4 + fVar6;
      local_1768._0_4_ = (float)(int)(uVar123 & uVar67) * fVar3 + fVar1;
      local_1768._8_4_ = (float)(int)(uVar128 & uVar67) * fVar5 + fVar2;
      local_1768._12_4_ = 0;
      local_1738._4_4_ = (float)(uVar121 >> 0x15 | (uVar126 >> 0x15) << 0xb) * fVar4 + fVar6;
      local_1738._0_4_ = (float)(int)(uVar121 & uVar100) * fVar3 + fVar1;
      local_1738._8_4_ = (float)(int)(uVar126 & uVar100) * fVar5 + fVar2;
      local_1738._12_4_ = 0;
      local_1748 = (float)(int)(uVar119 & uVar69) * fVar3 + fVar1;
      fStack_1744 = (float)(uVar119 >> 0x15 | (uVar130 >> 0x15) << 0xb) * fVar4 + fVar6;
      fStack_1740 = (float)(int)(uVar130 & uVar69) * fVar5 + fVar2;
      uStack_173c = 0;
      local_1718._4_4_ = (float)(uVar152 >> 0x15 | (uVar154 >> 0x15) << 0xb) * fVar4 + fVar6;
      local_1718._0_4_ = (float)(int)(uVar152 & uVar68) * fVar3 + fVar1;
      local_1718._8_4_ = (float)(int)(uVar154 & uVar68) * fVar5 + fVar2;
      local_1718._12_4_ = 0;
      local_16f8._4_4_ = (float)(uVar133 >> 0x15 | (uVar138 >> 0x15) << 0xb) * fVar4 + fVar6;
      local_16f8._0_4_ = (float)(int)(uVar133 & uVar100) * fVar3 + fVar1;
      local_16f8._8_4_ = (float)(int)(uVar138 & uVar100) * fVar5 + fVar2;
      local_16f8._12_4_ = 0;
      local_1708._4_4_ = (float)(uVar151 >> 0x15 | (uVar153 >> 0x15) << 0xb) * fVar4 + fVar6;
      local_1708._0_4_ = (float)(int)(uVar151 & uVar69) * fVar3 + fVar1;
      local_1708._8_4_ = (float)(int)(uVar153 & uVar69) * fVar5 + fVar2;
      local_1708._12_4_ = 0;
      local_16d8._4_4_ = (float)(uVar166 >> 0x15 | (uVar116 >> 0x15) << 0xb) * fVar4 + fVar6;
      local_16d8._0_4_ = (float)(int)(uVar166 & uVar68) * fVar3 + fVar1;
      local_16d8._8_4_ = (float)(int)(uVar116 & uVar68) * fVar5 + fVar2;
      local_16d8._12_4_ = 0;
      local_1728._4_4_ = (float)(uVar114 >> 0x15 | (uVar142 >> 0x15) << 0xb) * fVar4 + fVar6;
      local_1728._0_4_ = (float)(int)(uVar114 & uVar67) * fVar3 + fVar1;
      local_1728._8_4_ = (float)(int)(uVar142 & uVar67) * fVar5 + fVar2;
      local_1728._12_4_ = 0;
      local_16e8._4_4_ = (float)(uVar164 >> 0x15 | (uVar170 >> 0x15) << 0xb) * fVar4 + fVar6;
      local_16e8._0_4_ = (float)(int)(uVar164 & uVar67) * fVar3 + fVar1;
      local_16e8._8_4_ = (float)(int)(uVar170 & uVar67) * fVar5 + fVar2;
      local_16e8._12_4_ = 0;
      local_16b8._4_4_ = (float)(uVar165 >> 0x15 | (uVar168 >> 0x15) << 0xb) * fVar4 + fVar6;
      local_16b8._0_4_ = (float)(int)(uVar165 & uVar100) * fVar3 + fVar1;
      local_16b8._8_4_ = (float)(int)(uVar168 & uVar100) * fVar5 + fVar2;
      local_16b8._12_4_ = 0;
      local_16c8._4_4_ = (float)(uVar155 >> 0x15 | (uVar167 >> 0x15) << 0xb) * fVar4 + fVar6;
      local_16c8._0_4_ = (float)(int)(uVar155 & uVar69) * fVar3 + fVar1;
      local_16c8._8_4_ = (float)(int)(uVar167 & uVar69) * fVar5 + fVar2;
      local_16c8._12_4_ = 0;
      uVar112 = uVar39;
      if (0 < (int)uVar39) {
        lVar51 = 0;
        pauVar44 = pauVar45;
        do {
          puVar50 = (undefined8 *)(local_1768 + lVar51);
          uVar75 = *(undefined8 *)(local_1768 + lVar51 + 8);
          auVar78 = *(undefined1 (*) [16])(local_1728 + lVar51);
          uVar112 = uVar112 - 1;
          uVar94 = *(undefined8 *)(local_16e8 + lVar51);
          uVar28 = *(undefined8 *)(local_16e8 + lVar51 + 8);
          pauVar45 = pauVar44 + 3;
          lVar51 = lVar51 + 0x10;
          *(undefined8 *)*pauVar44 = *puVar50;
          *(undefined8 *)((long)*pauVar44 + 8) = uVar75;
          pauVar44[1] = auVar78;
          *(undefined8 *)pauVar44[2] = uVar94;
          *(undefined8 *)((long)(pauVar44 + 2) + 8) = uVar28;
          if (3 < (int)(uVar39 - uVar112)) break;
          pauVar44 = pauVar45;
        } while (0 < (int)uVar112);
      }
      uVar39 = uVar112;
      pCVar49 = pCVar49 + 0x10;
    } while (pCVar49 < pCVar43);
    pbVar58 = local_48;
    uVar39 = uVar54;
    do {
      if (0 < (int)uVar39) {
        lVar40 = 1;
        do {
          lVar51 = lVar40;
          uVar39 = uVar39 - 1;
          *(CastConvexVsTriangles *)(pbVar58 + lVar51 + -1) = pCVar57[lVar51 + 0xb];
          lVar40 = lVar51 + 1;
        } while ((int)lVar51 < 4 && 0 < (int)uVar39);
        pbVar58 = pbVar58 + lVar51;
      }
      pCVar57 = pCVar57 + 0x10;
    } while (pCVar57 < pCVar43);
    pauVar45 = pauVar41 + (int)(uVar54 * 3);
    if (pauVar41 < pauVar45) {
      lVar40 = 0;
      do {
        local_176c = (int)lVar40 << (bVar47 & 0x1f) |
                     ~(7 << (bVar47 & 0x1f)) &
                     (~((int)(1L << (bVar7 & 0x3f)) + -1 << (bVar46 & 0x1f)) & uVar8 |
                     (uVar61 & 0xfffffff) << (bVar46 & 0x1f));
        pCVar43 = local_1318;
        JPH::CastConvexVsTriangles::Cast
                  (*(undefined8 *)*pauVar41,*(undefined8 *)((long)*pauVar41 + 8),
                   *(undefined8 *)pauVar41[1],*(undefined8 *)((long)(pauVar41 + 1) + 8),
                   *(undefined8 *)pauVar41[2],*(undefined8 *)((long)(pauVar41 + 2) + 8),local_1318,
                   local_48[lVar40] >> 5,&local_176c);
        fVar74 = *(float *)(local_12e0 + 8);
        if (fVar74 <= _LC20) goto LAB_0010571d;
        pauVar41 = pauVar41 + 3;
        lVar40 = lVar40 + 1;
        uVar67 = __LC9;
        uVar68 = _UNK_00112494;
        uVar69 = _UNK_00112498;
        uVar100 = _UNK_0011249c;
      } while (pauVar41 < pauVar45);
      goto LAB_001056e7;
    }
  }
  fVar74 = *(float *)(local_12e0 + 8);
LAB_001056e7:
  do {
    uVar39 = (uint)pCVar43;
    if (fVar74 <= _LC20) {
LAB_0010571d:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar40 = (long)(local_1328 + -1);
    fVar74 = (float)((uint)fVar74 & -(uint)(_LC21 < fVar74) | ~-(uint)(_LC21 < fVar74) & (uint)_LC21
                    );
    do {
      iVar70 = (int)lVar40;
      if (iVar70 < 0) goto LAB_0010571d;
      lVar51 = lVar40 * 4;
      lVar40 = lVar40 + -1;
    } while (fVar74 < *(float *)(local_248 + lVar51) || fVar74 == *(float *)(local_248 + lVar51));
    local_1328 = iVar70;
    lVar40 = (long)iVar70;
    uVar61 = local_1528[iVar70];
    uVar54 = uVar61 >> 0x1c;
    if (uVar54 != 0) goto LAB_001056d0;
LAB_00105782:
    auVar107._4_4_ = _UNK_001124c4;
    auVar107._0_4_ = __LC14;
    auVar107._8_4_ = _UNK_001124c8;
    auVar107._12_4_ = _UNK_001124cc;
    lVar51 = lVar40 * 4;
    pauVar41 = (undefined1 (*) [16])((ulong)(uVar61 * 4) + lVar9);
    auVar78 = *pauVar41;
    auVar13._10_2_ = 0;
    auVar13._0_10_ = auVar78._0_10_;
    auVar13._12_2_ = auVar78._6_2_;
    auVar19._8_2_ = auVar78._4_2_;
    auVar19._0_8_ = auVar78._0_8_;
    auVar19._10_4_ = auVar13._10_4_;
    auVar33._6_8_ = 0;
    auVar33._0_6_ = auVar19._8_6_;
    auVar157._6_8_ = SUB148(auVar33 << 0x40,6);
    auVar157._4_2_ = auVar78._2_2_;
    auVar157._0_2_ = auVar78._0_2_;
    auVar157._2_2_ = 0;
    auVar157._14_2_ = 0;
    auVar107 = auVar107 & auVar157;
    auVar78 = __LC11 & auVar157;
    auVar157 = auVar157 & __LC19;
    iVar70 = auVar78._0_4_ * 0x2000;
    iVar84 = auVar78._4_4_ * 0x2000;
    iVar89 = auVar78._8_4_ * 0x2000;
    iVar95 = auVar78._12_4_ * 0x2000;
    uVar203 = __LC12 + iVar70;
    uVar211 = _UNK_001124b4 + iVar84;
    uVar216 = _UNK_001124b8 + iVar89;
    uVar221 = _UNK_001124bc + iVar95;
    uVar133 = (int)-(uint)(auVar107._0_4_ == __LC14) >> 0x1f;
    uVar138 = (int)-(uint)(auVar107._4_4_ == _UNK_001124c4) >> 0x1f;
    uVar140 = (int)-(uint)(auVar107._8_4_ == _UNK_001124c8) >> 0x1f;
    uVar142 = (int)-(uint)(auVar107._12_4_ == _UNK_001124cc) >> 0x1f;
    uVar100 = (int)-(uint)(auVar107._0_4_ == 0) >> 0x1f;
    uVar112 = (int)-(uint)(auVar107._4_4_ == 0) >> 0x1f;
    uVar119 = (int)-(uint)(auVar107._8_4_ == 0) >> 0x1f;
    uVar126 = (int)-(uint)(auVar107._12_4_ == 0) >> 0x1f;
    auVar78 = *pauVar41;
    auVar186._4_4_ = _UNK_001124c4;
    auVar186._0_4_ = __LC14;
    auVar186._8_4_ = _UNK_001124c8;
    auVar186._12_4_ = _UNK_001124cc;
    uVar61 = auVar78._8_4_;
    auVar76._0_8_ = auVar78._8_8_;
    auVar76._8_4_ = uVar61;
    auVar10._10_2_ = 0;
    auVar10._0_10_ = auVar76._0_10_;
    auVar10._12_2_ = auVar78._14_2_;
    auVar14._8_2_ = auVar78._12_2_;
    auVar14._0_8_ = auVar76._0_8_;
    auVar14._10_4_ = auVar10._10_4_;
    auVar34._6_8_ = 0;
    auVar34._0_6_ = auVar14._8_6_;
    auVar22._4_2_ = auVar78._10_2_;
    auVar22._0_4_ = uVar61;
    auVar22._6_8_ = SUB148(auVar34 << 0x40,6);
    auVar79._0_4_ = uVar61 & 0xffff;
    auVar79._4_10_ = auVar22._4_10_;
    auVar79._14_2_ = 0;
    auVar186 = auVar186 & auVar79;
    auVar78 = __LC11 & auVar79;
    auVar79 = auVar79 & __LC19;
    iVar101 = auVar78._0_4_ * 0x2000;
    iVar113 = auVar78._4_4_ * 0x2000;
    iVar120 = auVar78._8_4_ * 0x2000;
    iVar127 = auVar78._12_4_ * 0x2000;
    uVar204 = __LC12 + iVar101;
    uVar212 = _UNK_001124b4 + iVar113;
    uVar217 = _UNK_001124b8 + iVar120;
    uVar222 = _UNK_001124bc + iVar127;
    uVar151 = (int)-(uint)(auVar186._0_4_ == __LC14) >> 0x1f;
    uVar164 = (int)-(uint)(auVar186._4_4_ == _UNK_001124c4) >> 0x1f;
    uVar170 = (int)-(uint)(auVar186._8_4_ == _UNK_001124c8) >> 0x1f;
    uVar176 = (int)-(uint)(auVar186._12_4_ == _UNK_001124cc) >> 0x1f;
    uVar182 = (int)-(uint)(auVar186._0_4_ == 0) >> 0x1f;
    uVar191 = (int)-(uint)(auVar186._4_4_ == 0) >> 0x1f;
    uVar195 = (int)-(uint)(auVar186._8_4_ == 0) >> 0x1f;
    uVar199 = (int)-(uint)(auVar186._12_4_ == 0) >> 0x1f;
    auVar78 = pauVar41[1];
    auVar158._4_4_ = _UNK_001124c4;
    auVar158._0_4_ = __LC14;
    auVar158._8_4_ = _UNK_001124c8;
    auVar158._12_4_ = _UNK_001124cc;
    auVar11._10_2_ = 0;
    auVar11._0_10_ = auVar78._0_10_;
    auVar11._12_2_ = auVar78._6_2_;
    auVar15._8_2_ = auVar78._4_2_;
    auVar15._0_8_ = auVar78._0_8_;
    auVar15._10_4_ = auVar11._10_4_;
    auVar35._6_8_ = 0;
    auVar35._0_6_ = auVar15._8_6_;
    auVar23._4_2_ = auVar78._2_2_;
    auVar23._0_4_ = auVar78._0_4_;
    auVar23._6_8_ = SUB148(auVar35 << 0x40,6);
    auVar187._0_4_ = auVar78._0_4_ & 0xffff;
    auVar187._4_10_ = auVar23._4_10_;
    auVar187._14_2_ = 0;
    auVar78 = pauVar41[1];
    auVar158 = auVar158 & auVar187;
    auVar62 = __LC11 & auVar187;
    iVar71 = auVar62._0_4_ * 0x2000;
    iVar85 = auVar62._4_4_ * 0x2000;
    iVar90 = auVar62._8_4_ * 0x2000;
    iVar96 = auVar62._12_4_ * 0x2000;
    auVar187 = auVar187 & __LC19;
    uVar205 = __LC12 + iVar71;
    uVar213 = _UNK_001124b4 + iVar85;
    uVar218 = _UNK_001124b8 + iVar90;
    uVar223 = _UNK_001124bc + iVar96;
    auVar188._4_4_ = _UNK_001124c4;
    auVar188._0_4_ = __LC14;
    auVar188._8_4_ = _UNK_001124c8;
    auVar188._12_4_ = _UNK_001124cc;
    uVar54 = (int)-(uint)(auVar158._0_4_ == __LC14) >> 0x1f;
    uVar114 = (int)-(uint)(auVar158._4_4_ == _UNK_001124c4) >> 0x1f;
    uVar121 = (int)-(uint)(auVar158._8_4_ == _UNK_001124c8) >> 0x1f;
    uVar128 = (int)-(uint)(auVar158._12_4_ == _UNK_001124cc) >> 0x1f;
    uVar152 = (int)-(uint)(auVar158._0_4_ == 0) >> 0x1f;
    uVar165 = (int)-(uint)(auVar158._4_4_ == 0) >> 0x1f;
    uVar171 = (int)-(uint)(auVar158._8_4_ == 0) >> 0x1f;
    uVar177 = (int)-(uint)(auVar158._12_4_ == 0) >> 0x1f;
    auVar77._0_8_ = auVar78._8_8_;
    auVar77._8_4_ = auVar78._8_4_;
    auVar16._10_2_ = 0;
    auVar16._0_10_ = auVar77._0_10_;
    auVar16._12_2_ = auVar78._14_2_;
    auVar20._8_2_ = auVar78._12_2_;
    auVar20._0_8_ = auVar77._0_8_;
    auVar20._10_4_ = auVar16._10_4_;
    auVar36._6_8_ = 0;
    auVar36._0_6_ = auVar20._8_6_;
    auVar25._4_2_ = auVar78._10_2_;
    auVar25._0_4_ = auVar78._8_4_;
    auVar25._6_8_ = SUB148(auVar36 << 0x40,6);
    auVar80._0_2_ = auVar78._8_2_;
    auVar80._2_2_ = 0;
    auVar80._4_10_ = auVar25._4_10_;
    auVar80._14_2_ = 0;
    auVar188 = auVar188 & auVar80;
    auVar78 = __LC11 & auVar80;
    auVar80 = auVar80 & __LC19;
    iVar102 = auVar78._0_4_ * 0x2000;
    iVar115 = auVar78._4_4_ * 0x2000;
    iVar122 = auVar78._8_4_ * 0x2000;
    iVar129 = auVar78._12_4_ * 0x2000;
    uVar206 = __LC12 + iVar102;
    uVar214 = _UNK_001124b4 + iVar115;
    uVar219 = _UNK_001124b8 + iVar122;
    uVar224 = _UNK_001124bc + iVar129;
    uVar153 = (int)-(uint)(auVar188._0_4_ == __LC14) >> 0x1f;
    uVar166 = (int)-(uint)(auVar188._4_4_ == _UNK_001124c4) >> 0x1f;
    uVar172 = (int)-(uint)(auVar188._8_4_ == _UNK_001124c8) >> 0x1f;
    uVar178 = (int)-(uint)(auVar188._12_4_ == _UNK_001124cc) >> 0x1f;
    uVar183 = (int)-(uint)(auVar188._0_4_ == 0) >> 0x1f;
    uVar192 = (int)-(uint)(auVar188._4_4_ == 0) >> 0x1f;
    uVar196 = (int)-(uint)(auVar188._8_4_ == 0) >> 0x1f;
    uVar200 = (int)-(uint)(auVar188._12_4_ == 0) >> 0x1f;
    auVar78 = pauVar41[2];
    auVar226._4_4_ = _UNK_001124c4;
    auVar226._0_4_ = __LC14;
    auVar226._8_4_ = _UNK_001124c8;
    auVar226._12_4_ = _UNK_001124cc;
    auVar12._10_2_ = 0;
    auVar12._0_10_ = auVar78._0_10_;
    auVar12._12_2_ = auVar78._6_2_;
    auVar17._8_2_ = auVar78._4_2_;
    auVar17._0_8_ = auVar78._0_8_;
    auVar17._10_4_ = auVar12._10_4_;
    auVar37._6_8_ = 0;
    auVar37._0_6_ = auVar17._8_6_;
    auVar24._4_2_ = auVar78._2_2_;
    auVar24._0_4_ = auVar78._0_4_;
    auVar24._6_8_ = SUB148(auVar37 << 0x40,6);
    auVar189._0_4_ = auVar78._0_4_ & 0xffff;
    auVar189._4_10_ = auVar24._4_10_;
    auVar189._14_2_ = 0;
    auVar78 = pauVar41[2];
    auVar226 = auVar226 & auVar189;
    auVar62 = __LC11 & auVar189;
    auVar189 = auVar189 & __LC19;
    iVar72 = auVar62._0_4_ * 0x2000;
    iVar86 = auVar62._4_4_ * 0x2000;
    iVar91 = auVar62._8_4_ * 0x2000;
    iVar97 = auVar62._12_4_ * 0x2000;
    uVar207 = __LC12 + iVar72;
    uVar215 = _UNK_001124b4 + iVar86;
    uVar220 = _UNK_001124b8 + iVar91;
    uVar225 = _UNK_001124bc + iVar97;
    uVar103 = (int)-(uint)(auVar226._0_4_ == __LC14) >> 0x1f;
    uVar116 = (int)-(uint)(auVar226._4_4_ == _UNK_001124c4) >> 0x1f;
    uVar123 = (int)-(uint)(auVar226._8_4_ == _UNK_001124c8) >> 0x1f;
    uVar130 = (int)-(uint)(auVar226._12_4_ == _UNK_001124cc) >> 0x1f;
    uVar154 = (int)-(uint)(auVar226._0_4_ == 0) >> 0x1f;
    uVar167 = (int)-(uint)(auVar226._4_4_ == 0) >> 0x1f;
    uVar173 = (int)-(uint)(auVar226._8_4_ == 0) >> 0x1f;
    uVar179 = (int)-(uint)(auVar226._12_4_ == 0) >> 0x1f;
    auVar106._0_8_ = auVar78._8_8_;
    auVar106._8_4_ = auVar78._8_4_;
    auVar18._10_2_ = 0;
    auVar18._0_10_ = auVar106._0_10_;
    auVar18._12_2_ = auVar78._14_2_;
    auVar21._8_2_ = auVar78._12_2_;
    auVar21._0_8_ = auVar106._0_8_;
    auVar21._10_4_ = auVar18._10_4_;
    auVar38._6_8_ = 0;
    auVar38._0_6_ = auVar21._8_6_;
    auVar26._4_2_ = auVar78._10_2_;
    auVar26._0_4_ = auVar78._8_4_;
    auVar26._6_8_ = SUB148(auVar38 << 0x40,6);
    auVar108._0_2_ = auVar78._8_2_;
    auVar108._2_2_ = 0;
    auVar108._4_10_ = auVar26._4_10_;
    auVar108._14_2_ = 0;
    auVar159._4_4_ = _UNK_001124c4;
    auVar159._0_4_ = __LC14;
    auVar159._8_4_ = _UNK_001124c8;
    auVar159._12_4_ = _UNK_001124cc;
    auVar78 = __LC11 & auVar108;
    auVar145 = __LC19 & auVar108;
    auVar159 = auVar159 & auVar108;
    iVar73 = auVar78._0_4_ * 0x2000;
    iVar87 = auVar78._4_4_ * 0x2000;
    iVar92 = auVar78._8_4_ * 0x2000;
    iVar98 = auVar78._12_4_ * 0x2000;
    uVar184 = __LC12 + iVar73;
    uVar193 = _UNK_001124b4 + iVar87;
    uVar197 = _UNK_001124b8 + iVar92;
    uVar201 = _UNK_001124bc + iVar98;
    uVar61 = (int)-(uint)(__LC14 == auVar159._0_4_) >> 0x1f;
    uVar67 = (int)-(uint)(_UNK_001124c4 == auVar159._4_4_) >> 0x1f;
    uVar68 = (int)-(uint)(_UNK_001124c8 == auVar159._8_4_) >> 0x1f;
    uVar69 = (int)-(uint)(_UNK_001124cc == auVar159._12_4_) >> 0x1f;
    uVar155 = (int)-(uint)(auVar159._0_4_ == 0) >> 0x1f;
    uVar168 = (int)-(uint)(auVar159._4_4_ == 0) >> 0x1f;
    uVar174 = (int)-(uint)(auVar159._8_4_ == 0) >> 0x1f;
    uVar180 = (int)-(uint)(auVar159._12_4_ == 0) >> 0x1f;
    auVar135._0_8_ =
         CONCAT44((float)(auVar157._4_4_ << 0x10 |
                         (uint)((float)(iVar84 + _UNK_001124e4) + _LC18) & uVar112 |
                         ~uVar112 & (uVar138 & (uVar211 | _UNK_001124d4) | ~uVar138 & uVar211)) *
                  local_12f8,
                  (float)(auVar157._0_4_ << 0x10 |
                         (uint)((float)(iVar70 + __LC16) + _LC18) & uVar100 |
                         ~uVar100 & (uVar133 & (uVar203 | __LC15) | ~uVar133 & uVar203)) *
                  local_12f8);
    auVar135._8_4_ =
         (float)(auVar157._8_4_ << 0x10 |
                (uint)((float)(iVar89 + _UNK_001124e8) + _LC18) & uVar119 |
                ~uVar119 & (uVar140 & (uVar216 | _UNK_001124d8) | ~uVar140 & uVar216)) * local_12f8;
    auVar135._12_4_ =
         (float)(auVar157._12_4_ << 0x10 |
                (uint)((float)(iVar95 + _UNK_001124ec) + _LC18) & uVar126 |
                ~uVar126 & (uVar142 & (uVar221 | _UNK_001124dc) | ~uVar142 & uVar221)) * local_12f8;
    auVar109._0_4_ =
         local_12f8 *
         (float)(auVar80._0_4_ << 0x10 |
                (uint)((float)(iVar102 + __LC16) + _LC18) & uVar183 |
                ~uVar183 & (uVar153 & (uVar206 | __LC15) | ~uVar153 & uVar206));
    auVar109._4_4_ =
         local_12f8 *
         (float)(auVar80._4_4_ << 0x10 |
                (uint)((float)(iVar115 + _UNK_001124e4) + _LC18) & uVar192 |
                ~uVar192 & (uVar166 & (uVar214 | _UNK_001124d4) | ~uVar166 & uVar214));
    auVar109._8_4_ =
         local_12f8 *
         (float)(auVar80._8_4_ << 0x10 |
                (uint)((float)(iVar122 + _UNK_001124e8) + _LC18) & uVar196 |
                ~uVar196 & (uVar172 & (uVar219 | _UNK_001124d8) | ~uVar172 & uVar219));
    auVar109._12_4_ =
         local_12f8 *
         (float)(auVar80._12_4_ << 0x10 |
                (uint)((float)(iVar129 + _UNK_001124ec) + _LC18) & uVar200 |
                ~uVar200 & (uVar178 & (uVar224 | _UNK_001124dc) | ~uVar178 & uVar224));
    auVar160._8_4_ = auVar135._8_4_;
    auVar160._0_8_ = auVar135._0_8_;
    auVar160._12_4_ = auVar135._12_4_;
    auVar161 = minps(auVar160,auVar109);
    auVar62 = maxps(auVar135,auVar109);
    auVar110._0_8_ =
         CONCAT44((float)(auVar79._4_4_ << 0x10 |
                         (uint)((float)(iVar113 + _UNK_001124e4) + _LC18) & uVar191 |
                         ~uVar191 & (uVar164 & (uVar212 | _UNK_001124d4) | ~uVar164 & uVar212)) *
                  fStack_12f4,
                  (float)(auVar79._0_4_ << 0x10 |
                         (uint)((float)(iVar101 + __LC16) + _LC18) & uVar182 |
                         ~uVar182 & (uVar151 & (uVar204 | __LC15) | ~uVar151 & uVar204)) *
                  fStack_12f4);
    auVar110._8_4_ =
         (float)(auVar79._8_4_ << 0x10 |
                (uint)((float)(iVar120 + _UNK_001124e8) + _LC18) & uVar195 |
                ~uVar195 & (uVar170 & (uVar217 | _UNK_001124d8) | ~uVar170 & uVar217)) * fStack_12f4
    ;
    auVar110._12_4_ =
         (float)(auVar79._12_4_ << 0x10 |
                (uint)((float)(iVar127 + _UNK_001124ec) + _LC18) & uVar199 |
                ~uVar199 & (uVar176 & (uVar222 | _UNK_001124dc) | ~uVar176 & uVar222)) * fStack_12f4
    ;
    auVar227._0_4_ =
         (float)(auVar189._0_4_ << 0x10 |
                ~uVar154 & (uVar103 & (uVar207 | __LC15) | ~uVar103 & uVar207) |
                (uint)((float)(iVar72 + __LC16) + _LC18) & uVar154) * fStack_12f4;
    auVar227._4_4_ =
         (float)(auVar189._4_4_ << 0x10 |
                ~uVar167 & (uVar116 & (uVar215 | _UNK_001124d4) | ~uVar116 & uVar215) |
                (uint)((float)(iVar86 + _UNK_001124e4) + _LC18) & uVar167) * fStack_12f4;
    auVar227._8_4_ =
         (float)(auVar189._8_4_ << 0x10 |
                ~uVar173 & (uVar123 & (uVar220 | _UNK_001124d8) | ~uVar123 & uVar220) |
                (uint)((float)(iVar91 + _UNK_001124e8) + _LC18) & uVar173) * fStack_12f4;
    auVar227._12_4_ =
         (float)(auVar189._12_4_ << 0x10 |
                ~uVar179 & (uVar130 & (uVar225 | _UNK_001124dc) | ~uVar130 & uVar225) |
                (uint)((float)(iVar97 + _UNK_001124ec) + _LC18) & uVar179) * fStack_12f4;
    auVar162._8_4_ = auVar110._8_4_;
    auVar162._0_8_ = auVar110._0_8_;
    auVar162._12_4_ = auVar110._12_4_;
    auVar107 = minps(auVar162,auVar227);
    auVar78 = maxps(auVar110,auVar227);
    auVar208._0_8_ =
         CONCAT44((float)(auVar187._4_4_ << 0x10 |
                         (uint)((float)(iVar85 + _UNK_001124e4) + _LC18) & uVar165 |
                         ~uVar165 & (uVar114 & (uVar213 | _UNK_001124d4) | ~uVar114 & uVar213)) *
                  fStack_12f0,
                  (float)(auVar187._0_4_ << 0x10 |
                         (uint)((float)(iVar71 + __LC16) + _LC18) & uVar152 |
                         ~uVar152 & (uVar54 & (uVar205 | __LC15) | ~uVar54 & uVar205)) * fStack_12f0
                 );
    auVar208._8_4_ =
         (float)(auVar187._8_4_ << 0x10 |
                (uint)((float)(iVar90 + _UNK_001124e8) + _LC18) & uVar171 |
                ~uVar171 & (uVar121 & (uVar218 | _UNK_001124d8) | ~uVar121 & uVar218)) * fStack_12f0
    ;
    auVar208._12_4_ =
         (float)(auVar187._12_4_ << 0x10 |
                (uint)((float)(iVar96 + _UNK_001124ec) + _LC18) & uVar177 |
                ~uVar177 & (uVar128 & (uVar223 | _UNK_001124dc) | ~uVar128 & uVar223)) * fStack_12f0
    ;
    auVar228._0_4_ =
         fStack_12f0 *
         (float)(auVar145._0_4_ << 0x10 |
                (uint)((float)(iVar73 + __LC16) + _LC18) & uVar155 |
                ~uVar155 & (uVar61 & (uVar184 | __LC15) | ~uVar61 & uVar184));
    auVar228._4_4_ =
         fStack_12f0 *
         (float)(auVar145._4_4_ << 0x10 |
                (uint)((float)(iVar87 + _UNK_001124e4) + _LC18) & uVar168 |
                ~uVar168 & (uVar67 & (uVar193 | _UNK_001124d4) | ~uVar67 & uVar193));
    auVar228._8_4_ =
         fStack_12f0 *
         (float)(auVar145._8_4_ << 0x10 |
                (uint)((float)(iVar92 + _UNK_001124e8) + _LC18) & uVar174 |
                ~uVar174 & (uVar68 & (uVar197 | _UNK_001124d8) | ~uVar68 & uVar197));
    auVar228._12_4_ =
         fStack_12f0 *
         (float)(auVar145._12_4_ << 0x10 |
                (uint)((float)(iVar98 + _UNK_001124ec) + _LC18) & uVar180 |
                ~uVar180 & (uVar69 & (uVar201 | _UNK_001124dc) | ~uVar69 & uVar201));
    auVar146._8_4_ = auVar208._8_4_;
    auVar146._0_8_ = auVar208._0_8_;
    auVar146._12_4_ = auVar208._12_4_;
    auVar186 = maxps(auVar208,auVar228);
    auVar145 = minps(auVar146,auVar228);
    fVar134 = auVar62._0_4_ + local_258;
    fVar139 = auVar62._4_4_ + local_258;
    fVar141 = auVar62._8_4_ + local_258;
    fVar143 = auVar62._12_4_ + local_258;
    fVar185 = auVar161._0_4_ - local_258;
    fVar194 = auVar161._4_4_ - local_258;
    fVar198 = auVar161._8_4_ - local_258;
    fVar202 = auVar161._12_4_ - local_258;
    fVar144 = auVar145._0_4_ - fStack_250;
    fVar148 = auVar145._4_4_ - fStack_250;
    fVar149 = auVar145._8_4_ - fStack_250;
    fVar150 = auVar145._12_4_ - fStack_250;
    fVar74 = auVar186._0_4_ + fStack_250;
    fVar88 = auVar186._4_4_ + fStack_250;
    fVar93 = auVar186._8_4_ + fStack_250;
    fVar99 = auVar186._12_4_ + fStack_250;
    fVar156 = auVar107._0_4_ - fStack_254;
    fVar169 = auVar107._4_4_ - fStack_254;
    fVar175 = auVar107._8_4_ - fStack_254;
    fVar181 = auVar107._12_4_ - fStack_254;
    fVar104 = auVar78._0_4_ + fStack_254;
    fVar117 = auVar78._4_4_ + fStack_254;
    fVar124 = auVar78._8_4_ + fStack_254;
    fVar131 = auVar78._12_4_ + fStack_254;
    auVar209._0_4_ = (fVar134 - local_268) * (float)local_288._0_4_;
    auVar209._4_4_ = (fVar139 - local_268) * (float)local_288._0_4_;
    auVar209._8_4_ = (fVar141 - local_268) * (float)local_288._0_4_;
    auVar209._12_4_ = (fVar143 - local_268) * (float)local_288._0_4_;
    auVar190._0_8_ =
         CONCAT44((fVar194 - local_268) * (float)local_288._0_4_,
                  (fVar185 - local_268) * (float)local_288._0_4_);
    auVar190._8_4_ = (fVar198 - local_268) * (float)local_288._0_4_;
    auVar190._12_4_ = (fVar202 - local_268) * (float)local_288._0_4_;
    auVar163._0_8_ =
         CONCAT44((fVar169 - fStack_264) * (float)local_288._4_4_,
                  (fVar156 - fStack_264) * (float)local_288._4_4_);
    auVar163._8_4_ = (fVar175 - fStack_264) * (float)local_288._4_4_;
    auVar163._12_4_ = (fVar181 - fStack_264) * (float)local_288._4_4_;
    auVar147._0_8_ =
         CONCAT44((fVar148 - fStack_260) * fStack_280,(fVar144 - fStack_260) * fStack_280);
    auVar147._8_4_ = (fVar149 - fStack_260) * fStack_280;
    auVar147._12_4_ = (fVar150 - fStack_260) * fStack_280;
    fVar105 = (fVar104 - fStack_264) * (float)local_288._4_4_;
    fVar118 = (fVar117 - fStack_264) * (float)local_288._4_4_;
    fVar125 = (fVar124 - fStack_264) * (float)local_288._4_4_;
    fVar132 = (fVar131 - fStack_264) * (float)local_288._4_4_;
    auVar229._4_4_ = (fVar88 - fStack_260) * fStack_280;
    auVar229._0_4_ = (fVar74 - fStack_260) * fStack_280;
    auVar63._8_4_ = auVar190._8_4_;
    auVar63._0_8_ = auVar190._0_8_;
    auVar63._12_4_ = auVar190._12_4_;
    auVar107 = maxps(auVar190,auVar209);
    auVar78 = minps(auVar63,auVar209);
    auVar229._8_4_ = (fVar93 - fStack_260) * fStack_280;
    auVar229._12_4_ = (fVar99 - fStack_260) * fStack_280;
    uVar61 = (int)local_278 >> 0x1f;
    auVar81._8_4_ = auVar163._8_4_;
    auVar81._0_8_ = auVar163._0_8_;
    auVar81._12_4_ = auVar163._12_4_;
    auVar29._4_4_ = fVar118;
    auVar29._0_4_ = fVar105;
    auVar29._8_4_ = fVar125;
    auVar29._12_4_ = fVar132;
    auVar145 = minps(auVar81,auVar29);
    auVar30._4_4_ = fVar118;
    auVar30._0_4_ = fVar105;
    auVar30._8_4_ = fVar125;
    auVar30._12_4_ = fVar132;
    auVar62 = maxps(auVar163,auVar30);
    uVar68 = (int)uStack_274 >> 0x1f;
    auVar210._8_4_ = auVar147._8_4_;
    auVar210._0_8_ = auVar147._0_8_;
    auVar210._12_4_ = auVar147._12_4_;
    auVar161 = maxps(auVar147,auVar229);
    auVar186 = minps(auVar210,auVar229);
    uVar67 = (int)uStack_270 >> 0x1f;
    auVar136._0_4_ = (uint)_LC20 & uVar67;
    auVar136._4_4_ = (uint)_LC20 & uVar67;
    auVar136._8_4_ = (uint)_LC20 & uVar67;
    auVar136._12_4_ = (uint)_LC20 & uVar67;
    auVar230._0_4_ = ~uVar67 & auVar186._0_4_;
    auVar230._4_4_ = ~uVar67 & auVar186._4_4_;
    auVar230._8_4_ = ~uVar67 & auVar186._8_4_;
    auVar230._12_4_ = ~uVar67 & auVar186._12_4_;
    auVar231._0_4_ = ~uVar61 & auVar107._0_4_;
    auVar231._4_4_ = ~uVar61 & auVar107._4_4_;
    auVar231._8_4_ = ~uVar61 & auVar107._8_4_;
    auVar231._12_4_ = ~uVar61 & auVar107._12_4_;
    auVar64._0_4_ = uVar61 & _LC27;
    auVar64._4_4_ = uVar61 & _LC27;
    auVar64._8_4_ = uVar61 & _LC27;
    auVar64._12_4_ = uVar61 & _LC27;
    auVar111._0_4_ = uVar68 & _LC27;
    auVar111._4_4_ = uVar68 & _LC27;
    auVar111._8_4_ = uVar68 & _LC27;
    auVar111._12_4_ = uVar68 & _LC27;
    auVar232._0_4_ = ~uVar68 & auVar62._0_4_;
    auVar232._4_4_ = ~uVar68 & auVar62._4_4_;
    auVar232._8_4_ = ~uVar68 & auVar62._8_4_;
    auVar232._12_4_ = ~uVar68 & auVar62._12_4_;
    auVar82._0_4_ = uVar67 & _LC27;
    auVar82._4_4_ = uVar67 & _LC27;
    auVar82._8_4_ = uVar67 & _LC27;
    auVar82._12_4_ = uVar67 & _LC27;
    auVar62 = minps(auVar64 | auVar231,auVar111 | auVar232);
    auVar233._0_4_ = ~uVar67 & auVar161._0_4_;
    auVar233._4_4_ = ~uVar67 & auVar161._4_4_;
    auVar233._8_4_ = ~uVar67 & auVar161._8_4_;
    auVar233._12_4_ = ~uVar67 & auVar161._12_4_;
    auVar31._4_4_ = (uint)_LC20 & uVar61 | ~uVar61 & auVar78._4_4_;
    auVar31._0_4_ = (uint)_LC20 & uVar61 | ~uVar61 & auVar78._0_4_;
    auVar31._8_4_ = (uint)_LC20 & uVar61 | ~uVar61 & auVar78._8_4_;
    auVar31._12_4_ = (uint)_LC20 & uVar61 | ~uVar61 & auVar78._12_4_;
    auVar32._4_4_ = (uint)_LC20 & uVar68 | ~uVar68 & auVar145._4_4_;
    auVar32._0_4_ = (uint)_LC20 & uVar68 | ~uVar68 & auVar145._0_4_;
    auVar32._8_4_ = (uint)_LC20 & uVar68 | ~uVar68 & auVar145._8_4_;
    auVar32._12_4_ = (uint)_LC20 & uVar68 | ~uVar68 & auVar145._12_4_;
    auVar145 = maxps(auVar31,auVar32);
    auVar78 = minps(auVar62,auVar82 | auVar233);
    auVar62 = maxps(auVar145,auVar136 | auVar230);
    uVar61 = (int)(-(uint)((fVar134 < fVar185 || fVar104 < fVar156) ||
                          (auVar78._0_4_ < 0.0 || auVar78._0_4_ < auVar62._0_4_)) |
                   -(uint)(local_268 < fVar185 || fVar134 < local_268) & local_278 |
                   -(uint)(fStack_264 < fVar156 || fVar104 < fStack_264) & uStack_274 |
                  -(uint)(fStack_260 < fVar144 || fVar74 < fStack_260) & uStack_270 |
                  -(uint)(fVar74 < fVar144)) >> 0x1f;
    uVar67 = (int)(-(uint)((fVar139 < fVar194 || fVar117 < fVar169) ||
                          (auVar78._4_4_ < 0.0 || auVar78._4_4_ < auVar62._4_4_)) |
                   -(uint)(local_268 < fVar194 || fVar139 < local_268) & local_278 |
                   -(uint)(fStack_264 < fVar169 || fVar117 < fStack_264) & uStack_274 |
                  -(uint)(fStack_260 < fVar148 || fVar88 < fStack_260) & uStack_270 |
                  -(uint)(fVar88 < fVar148)) >> 0x1f;
    uVar68 = (int)(-(uint)((fVar141 < fVar198 || fVar124 < fVar175) ||
                          (auVar78._8_4_ < 0.0 || auVar78._8_4_ < auVar62._8_4_)) |
                   -(uint)(local_268 < fVar198 || fVar141 < local_268) & local_278 |
                   -(uint)(fStack_264 < fVar175 || fVar124 < fStack_264) & uStack_274 |
                  -(uint)(fStack_260 < fVar149 || fVar93 < fStack_260) & uStack_270 |
                  -(uint)(fVar93 < fVar149)) >> 0x1f;
    uVar69 = (int)(-(uint)((fVar143 < fVar202 || fVar131 < fVar181) ||
                          (auVar78._12_4_ < 0.0 || auVar78._12_4_ < auVar62._12_4_)) |
                   -(uint)(local_268 < fVar202 || fVar143 < local_268) & local_278 |
                   -(uint)(fStack_264 < fVar181 || fVar131 < fStack_264) & uStack_274 |
                  -(uint)(fStack_260 < fVar150 || fVar99 < fStack_260) & uStack_270 |
                  -(uint)(fVar99 < fVar150)) >> 0x1f;
    fVar88 = (float)(_LC27 & uVar61 | ~uVar61 & (uint)auVar62._0_4_);
    fVar93 = (float)(_LC27 & uVar67 | ~uVar67 & (uint)auVar62._4_4_);
    fVar99 = (float)(_LC27 & uVar68 | ~uVar68 & (uint)auVar62._8_4_);
    fVar104 = (float)(_LC27 & uVar69 | ~uVar69 & (uint)auVar62._12_4_);
    fVar74 = *(float *)(local_12e0 + 8);
    if (*(float *)(local_12e0 + 8) <= _LC21) {
      fVar74 = _LC21;
    }
    local_17e8 = (uint)*(undefined8 *)pauVar41[3];
    uStack_17e4 = (uint)((ulong)*(undefined8 *)pauVar41[3] >> 0x20);
    uStack_17e0 = (uint)*(undefined8 *)(pauVar41[3] + 8);
    uStack_17dc = (uint)((ulong)*(undefined8 *)(pauVar41[3] + 8) >> 0x20);
    uVar61 = (int)-(uint)(fVar88 < fVar99) >> 0x1f;
    uVar67 = (int)-(uint)(fVar93 < fVar104) >> 0x1f;
    fVar105 = (float)(~uVar61 & (uint)fVar88 | (uint)fVar99 & uVar61);
    fVar117 = (float)(~uVar67 & (uint)fVar93 | (uint)fVar104 & uVar67);
    fVar99 = (float)(~uVar61 & (uint)fVar99 | (uint)fVar88 & uVar61);
    fVar104 = (float)(~uVar67 & (uint)fVar104 | (uint)fVar93 & uVar67);
    uVar69 = uVar61 & uStack_17e0 | ~uVar61 & local_17e8;
    uVar100 = uVar67 & uStack_17dc | ~uVar67 & uStack_17e4;
    uVar61 = uVar61 & local_17e8 | ~uVar61 & uStack_17e0;
    uVar54 = uVar67 & uStack_17e4 | ~uVar67 & uStack_17dc;
    uVar67 = (int)-(uint)(fVar105 < fVar117) >> 0x1f;
    uVar68 = (int)-(uint)(fVar99 < fVar104) >> 0x1f;
    auVar65._0_4_ = uVar67 & uVar100;
    auVar65._4_4_ = uVar67 & uVar69;
    auVar65._8_4_ = uVar68 & uVar54;
    auVar65._12_4_ = uVar68 & uVar61;
    fVar88 = (float)((uint)fVar105 & uVar67 | ~uVar67 & (uint)fVar117);
    fVar93 = (float)((uint)fVar104 & uVar68 | ~uVar68 & (uint)fVar99);
    auVar83._0_4_ = ~uVar67 & uVar69;
    auVar83._4_4_ = ~uVar67 & uVar100;
    auVar83._8_4_ = ~uVar68 & uVar61;
    auVar83._12_4_ = ~uVar68 & uVar54;
    auVar83 = auVar83 | auVar65;
    uVar61 = (int)-(uint)(fVar88 < fVar93) >> 0x1f;
    auVar27._4_4_ = (uint)fVar88 & uVar61;
    auVar27._0_4_ = (uint)fVar93 & uVar61;
    auVar27._8_8_ = 0;
    auVar137._4_4_ = ~uVar61 & (uint)fVar88;
    auVar137._0_4_ = (uint)fVar117 & uVar67 | ~uVar67 & (uint)fVar105;
    auVar137._8_4_ = ~uVar61 & (uint)fVar93;
    auVar137._12_4_ = (uint)fVar99 & uVar68 | ~uVar68 & (uint)fVar104;
    auVar137 = auVar27 << 0x20 | auVar137;
    local_1728._4_4_ = uVar61 & auVar83._8_4_ | ~uVar61 & auVar83._4_4_;
    local_1728._0_4_ = auVar83._0_4_;
    local_1728._8_4_ = uVar61 & auVar83._4_4_ | ~uVar61 & auVar83._8_4_;
    local_1728._12_4_ = auVar83._12_4_;
    auVar66._4_4_ = -(uint)(auVar137._4_4_ < fVar74);
    auVar66._0_4_ = -(uint)(auVar137._0_4_ < fVar74);
    auVar66._8_4_ = -(uint)(auVar137._8_4_ < fVar74);
    auVar66._12_4_ = -(uint)(auVar137._12_4_ < fVar74);
    uVar61 = movmskps(uVar39,auVar66);
    pCVar43 = (CastConvexVsTriangles *)(ulong)uVar61;
    uVar39 = __popcountdi2();
    local_16a8[0] = (CastConvexVsTriangles)auVar137[0];
    local_16a8[1] = (CastConvexVsTriangles)auVar137[1];
    local_16a8[2] = (CastConvexVsTriangles)auVar137[2];
    local_16a8[3] = (CastConvexVsTriangles)auVar137[3];
    local_16a8[4] = (CastConvexVsTriangles)auVar137[4];
    local_16a8[5] = (CastConvexVsTriangles)auVar137[5];
    local_16a8[6] = (CastConvexVsTriangles)auVar137[6];
    local_16a8[7] = (CastConvexVsTriangles)auVar137[7];
    local_16a8[8] = (CastConvexVsTriangles)auVar137[8];
    local_16a8[9] = (CastConvexVsTriangles)auVar137[9];
    local_16a8[10] = (CastConvexVsTriangles)auVar137[10];
    local_16a8[0xb] = (CastConvexVsTriangles)auVar137[0xb];
    local_16a8[0xc] = (CastConvexVsTriangles)auVar137[0xc];
    local_16a8[0xd] = (CastConvexVsTriangles)auVar137[0xd];
    local_16a8[0xe] = (CastConvexVsTriangles)auVar137[0xe];
    local_16a8[0xf] = (CastConvexVsTriangles)auVar137[0xf];
    if (uVar61 == 0) {
      local_16a8[0] = (CastConvexVsTriangles)0x0;
      local_16a8[1] = (CastConvexVsTriangles)0x0;
      local_16a8[2] = (CastConvexVsTriangles)0x0;
      local_16a8[3] = (CastConvexVsTriangles)0x0;
      local_16a8[4] = (CastConvexVsTriangles)0x0;
      local_16a8[5] = (CastConvexVsTriangles)0x0;
      local_16a8[6] = (CastConvexVsTriangles)0x0;
      local_16a8[7] = (CastConvexVsTriangles)0x0;
      local_16a8[8] = (CastConvexVsTriangles)0x0;
      local_16a8[9] = (CastConvexVsTriangles)0x0;
      local_16a8[10] = (CastConvexVsTriangles)0x0;
      local_16a8[0xb] = (CastConvexVsTriangles)0x0;
      local_16a8[0xc] = (CastConvexVsTriangles)0x0;
      local_16a8[0xd] = (CastConvexVsTriangles)0x0;
      local_16a8[0xe] = (CastConvexVsTriangles)0x0;
      local_16a8[0xf] = (CastConvexVsTriangles)0x0;
      uVar75 = 0;
      uVar94 = 0;
    }
    else {
      local_16e8 = (undefined1  [16])0x0;
      uVar42 = (ulong)uVar39 << 2;
      pCVar43 = (CastConvexVsTriangles *)local_16e8;
      lVar55 = (4 - (long)(int)uVar39) * 4;
      pCVar57 = local_16a8 + lVar55;
      if (7 < (uint)uVar42) {
        for (uVar48 = uVar42 >> 3 & 0x1fffffff; uVar48 != 0; uVar48 = uVar48 - 1) {
          *(undefined8 *)pCVar43 = *(undefined8 *)pCVar57;
          pCVar57 = pCVar57 + (ulong)bVar60 * -0x10 + 8;
          pCVar43 = pCVar43 + (ulong)bVar60 * -0x10 + 8;
        }
      }
      if ((uVar42 & 4) != 0) {
        *(undefined4 *)pCVar43 = *(undefined4 *)pCVar57;
      }
      puVar50 = (undefined8 *)(local_1728 + lVar55);
      local_16a8[0] = (CastConvexVsTriangles)0x0;
      local_16a8[1] = (CastConvexVsTriangles)0x0;
      local_16a8[2] = (CastConvexVsTriangles)0x0;
      local_16a8[3] = (CastConvexVsTriangles)0x0;
      local_16a8[4] = (CastConvexVsTriangles)0x0;
      local_16a8[5] = (CastConvexVsTriangles)0x0;
      local_16a8[6] = (CastConvexVsTriangles)0x0;
      local_16a8[7] = (CastConvexVsTriangles)0x0;
      local_16a8[8] = (CastConvexVsTriangles)0x0;
      local_16a8[9] = (CastConvexVsTriangles)0x0;
      local_16a8[10] = (CastConvexVsTriangles)0x0;
      local_16a8[0xb] = (CastConvexVsTriangles)0x0;
      local_16a8[0xc] = (CastConvexVsTriangles)0x0;
      local_16a8[0xd] = (CastConvexVsTriangles)0x0;
      local_16a8[0xe] = (CastConvexVsTriangles)0x0;
      local_16a8[0xf] = (CastConvexVsTriangles)0x0;
      pCVar57 = local_16a8;
      if (7 < (uint)uVar42) {
        pCVar43 = local_16a8;
        for (uVar48 = uVar42 >> 3 & 0x1fffffff; pCVar57 = pCVar43, uVar48 != 0; uVar48 = uVar48 - 1)
        {
          *(undefined8 *)pCVar43 = *puVar50;
          puVar50 = puVar50 + (ulong)bVar60 * -2 + 1;
          pCVar43 = pCVar43 + (ulong)bVar60 * -0x10 + 8;
        }
      }
      uVar75 = local_16e8._0_8_;
      uVar94 = local_16e8._8_8_;
      if ((uVar42 & 4) != 0) {
        *(undefined4 *)pCVar57 = *(undefined4 *)puVar50;
      }
    }
    auVar78 = local_16a8._0_16_;
    uVar28 = local_16a8._8_8_;
    *(undefined8 *)(local_1318 + lVar51 + 0x10d0) = uVar75;
    *(undefined8 *)((long)auStack_240 + lVar51) = uVar94;
    *(undefined8 *)(local_1528 + lVar40) = local_16a8._0_8_;
    *(undefined8 *)((long)auStack_1520 + lVar51) = uVar28;
    auVar62 = local_16a8._0_16_;
    local_16a8[0] = auVar78[0];
    local_16a8[1] = auVar78[1];
    local_16a8[2] = auVar78[2];
    local_16a8[3] = auVar78[3];
    local_16a8[4] = auVar78[4];
    local_16a8[5] = auVar78[5];
    local_16a8[6] = auVar78[6];
    local_16a8[7] = auVar78[7];
    local_16a8[8] = auVar78[8];
    local_16a8[9] = auVar78[9];
    local_16a8[10] = auVar78[10];
    local_16a8[0xb] = auVar78[0xb];
    local_16a8[0xc] = auVar78[0xc];
    local_16a8[0xd] = auVar78[0xd];
    local_16a8[0xe] = auVar78[0xe];
    local_16a8[0xf] = auVar78[0xf];
    local_1728[0] = local_16a8[0];
    local_1728[1] = local_16a8[1];
    local_1728[2] = local_16a8[2];
    local_1728[3] = local_16a8[3];
    local_1728[4] = local_16a8[4];
    local_1728[5] = local_16a8[5];
    local_1728[6] = local_16a8[6];
    local_1728[7] = local_16a8[7];
    local_1728[8] = local_16a8[8];
    local_1728[9] = local_16a8[9];
    local_1728[10] = local_16a8[10];
    local_1728[0xb] = local_16a8[0xb];
    local_1728[0xc] = local_16a8[0xc];
    local_1728[0xd] = local_16a8[0xd];
    local_1728[0xe] = local_16a8[0xe];
    local_1728[0xf] = local_16a8[0xf];
    fVar74 = *(float *)(local_12e0 + 8);
    local_1328 = local_1328 + uVar39;
    uVar67 = __LC9;
    uVar68 = _UNK_00112494;
    uVar69 = _UNK_00112498;
    uVar100 = _UNK_0011249c;
    local_16a8._0_16_ = auVar62;
  } while( true );
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MeshShape::CastRay(JPH::RayCast const&, JPH::RayCastSettings const&, JPH::SubShapeIDCreator
   const&, JPH::CollisionCollector<JPH::RayCastResult, JPH::CollisionCollectorTraitsCastRay>&,
   JPH::ShapeFilter const&) const [clone .part.0] [clone .isra.0] */

void JPH::MeshShape::CastRay
               (RayCast *param_1,RayCastSettings *param_2,SubShapeIDCreator *param_3,
               CollisionCollector *param_4,ShapeFilter *param_5)

{
  undefined1 (*pauVar1) [16];
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  bool bVar29;
  undefined1 auVar30 [14];
  undefined1 auVar31 [14];
  undefined1 auVar32 [14];
  undefined1 auVar33 [14];
  undefined1 auVar34 [14];
  undefined1 auVar35 [14];
  undefined1 auVar36 [14];
  undefined1 auVar37 [14];
  undefined1 auVar38 [14];
  undefined1 auVar39 [14];
  undefined1 auVar40 [14];
  undefined1 auVar41 [14];
  undefined1 auVar42 [14];
  undefined1 auVar43 [14];
  undefined1 auVar44 [14];
  undefined1 auVar45 [14];
  undefined1 auVar46 [14];
  undefined1 auVar47 [16];
  undefined8 uVar48;
  undefined8 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [14];
  undefined1 auVar60 [14];
  undefined1 auVar61 [14];
  undefined1 auVar62 [14];
  undefined1 auVar63 [14];
  undefined1 auVar64 [14];
  byte bVar65;
  char cVar66;
  long lVar67;
  undefined1 (*pauVar68) [16];
  ulong uVar69;
  undefined1 (*pauVar70) [16];
  undefined1 (*pauVar71) [16];
  byte bVar72;
  ulong uVar73;
  uint *puVar74;
  int *piVar75;
  uint uVar76;
  long lVar77;
  ulong uVar78;
  ulong uVar79;
  CollisionCollector *pCVar80;
  ulong uVar81;
  undefined1 *puVar82;
  ulong uVar83;
  CollisionCollector *pCVar84;
  ulong uVar85;
  long in_FS_OFFSET;
  byte bVar86;
  uint uVar87;
  uint uVar94;
  float fVar95;
  uint uVar96;
  float fVar97;
  undefined1 auVar88 [16];
  uint uVar98;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  int iVar99;
  float fVar100;
  float fVar101;
  undefined8 uVar102;
  int iVar110;
  undefined1 auVar103 [16];
  int iVar108;
  int iVar113;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar109;
  float fVar111;
  undefined8 uVar112;
  undefined1 auVar107 [16];
  float fVar114;
  undefined1 auVar115 [12];
  float fVar127;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar116 [12];
  undefined1 auVar121 [16];
  undefined1 auVar117 [12];
  float fVar128;
  float fVar129;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  uint uVar142;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  uint uVar143;
  uint uVar152;
  uint uVar153;
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  uint uVar154;
  uint uVar160;
  float fVar161;
  uint uVar162;
  float fVar163;
  uint uVar164;
  uint uVar165;
  float fVar166;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  float fVar167;
  float fVar168;
  float fVar169;
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  float fVar174;
  float fVar175;
  float fVar176;
  float fVar177;
  float fVar178;
  float fVar179;
  float fVar180;
  float fVar181;
  float fVar182;
  float fVar183;
  float fVar184;
  float fVar185;
  float fVar186;
  undefined1 local_838 [8];
  float fStack_830;
  float fStack_82c;
  uint local_828;
  undefined4 local_704;
  float local_700;
  uint local_6fc;
  undefined1 local_6f8 [16];
  undefined1 local_6e8 [16];
  float local_6d8;
  float fStack_6d4;
  float fStack_6d0;
  undefined4 uStack_6cc;
  undefined1 local_6c8 [16];
  undefined1 local_6b8 [16];
  undefined1 local_6a8 [16];
  undefined1 local_698 [16];
  undefined1 local_688 [16];
  undefined1 local_678 [16];
  undefined1 local_668 [16];
  undefined1 local_658 [16];
  undefined1 local_648 [16];
  CollisionCollector local_638 [384];
  uint local_4b8 [2];
  undefined8 auStack_4b0 [63];
  int local_2b8;
  CollisionCollector *local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278 [8];
  float fStack_270;
  int local_268;
  int iStack_264;
  int iStack_260;
  int iStack_25c;
  char local_258;
  float local_254 [2];
  undefined8 auStack_24c [64];
  undefined1 local_48 [8];
  long local_40;
  
  bVar86 = 0;
  auVar103 = *(undefined1 (*) [16])(param_2 + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar28 = *(long *)(param_1 + 0x48);
  local_258 = (char)param_3;
  auVar88._0_4_ = 0.0 - auVar103._0_4_;
  auVar88._4_4_ = 0.0 - auVar103._4_4_;
  auVar88._8_4_ = 0.0 - auVar103._8_4_;
  auVar88._12_4_ = 0.0 - auVar103._12_4_;
  local_298 = *(undefined8 *)param_2;
  uStack_290 = *(undefined8 *)(param_2 + 8);
  bVar9 = *(byte *)(lVar28 + 0x1c);
  local_2a8 = (CollisionCollector *)param_5;
  local_288 = *(undefined8 *)(param_2 + 0x10);
  uStack_280 = *(undefined8 *)(param_2 + 0x18);
  auVar88 = maxps(auVar88,auVar103);
  bVar65 = (byte)*(undefined4 *)(param_4 + 4);
  bVar72 = bVar9 + bVar65;
  auVar157._4_4_ = _LC2;
  auVar157._0_4_ = _LC2;
  local_268 = -(uint)(auVar88._0_4_ <= _LC23);
  iStack_264 = -(uint)(auVar88._4_4_ <= _LC23);
  iStack_260 = -(uint)(auVar88._8_4_ <= _LC23);
  iStack_25c = -(uint)(auVar88._12_4_ <= _LC23);
  uVar87 = local_268 >> 0x1f;
  uVar94 = iStack_264 >> 0x1f;
  uVar96 = iStack_260 >> 0x1f;
  uVar98 = iStack_25c >> 0x1f;
  auVar156._0_4_ = uVar87 & __LC24;
  auVar156._4_4_ = uVar94 & _UNK_00112514;
  auVar156._8_4_ = uVar96 & _UNK_00112518;
  auVar156._12_4_ = uVar98 & _UNK_0011251c;
  auVar118._0_4_ = ~uVar87 & (uint)auVar103._0_4_;
  auVar118._4_4_ = ~uVar94 & (uint)auVar103._4_4_;
  auVar118._8_4_ = ~uVar96 & (uint)auVar103._8_4_;
  auVar118._12_4_ = ~uVar98 & (uint)auVar103._12_4_;
  auVar157._8_4_ = _LC2;
  auVar157._12_4_ = _LC2;
  _local_278 = divps(auVar157,auVar156 | auVar118);
  local_2b8 = 0;
  uVar87 = *(uint *)param_4;
  fVar3 = *(float *)(lVar28 + 0x20);
  uVar94 = *(uint *)(lVar28 + 0x18);
  fVar4 = *(float *)(lVar28 + 0x2c);
  fVar5 = *(float *)(lVar28 + 0x30);
  fVar6 = *(float *)(lVar28 + 0x24);
  fVar178 = *(float *)(param_5 + 8);
  lVar67 = 0;
  fVar7 = *(float *)(lVar28 + 0x28);
  uVar76 = uVar94 >> 0x1c;
  local_4b8[0] = uVar94;
  fVar8 = *(float *)(lVar28 + 0x34);
  uVar96 = __LC9;
  uVar98 = _UNK_00112494;
  uVar142 = _UNK_00112498;
  uVar143 = _UNK_0011249c;
  if (uVar76 == 0) goto LAB_001068b8;
LAB_00106830:
  cVar66 = local_258;
  if (uVar76 != 0xf) {
    pauVar68 = (undefined1 (*) [16])local_638;
    piVar75 = (int *)((ulong)((uVar94 & 0xfffffff) * 4) + lVar28);
    pCVar80 = (CollisionCollector *)(piVar75 + 1);
    uVar152 = *piVar75 * 4 & 0x7ffffffc;
    param_4 = pCVar80 + (ulong)(uVar76 + 3 >> 2) * 0x10;
    lVar67 = (ulong)uVar152 + 4;
    pCVar84 = pCVar80;
    local_828 = uVar76;
    pauVar71 = pauVar68;
    do {
      uVar153 = *(uint *)pCVar84;
      uVar154 = *(uint *)(pCVar84 + 4);
      uVar160 = *(uint *)(pCVar84 + 8);
      uVar85 = (ulong)(uVar153 >> 0xd & 0x7f8);
      uVar69 = (ulong)((uVar153 >> 0x18) << 3);
      uVar162 = *(uint *)((long)piVar75 + uVar69 + uVar152);
      uVar78 = (ulong)((uVar153 >> 8 & 0xff) << 3);
      uVar164 = *(uint *)((long)piVar75 + uVar85 + uVar152);
      uVar73 = (ulong)((uVar154 >> 0x18) << 3);
      uVar165 = *(uint *)((long)piVar75 + uVar69 + lVar67);
      uVar69 = (ulong)((uVar154 >> 8 & 0xff) << 3);
      uVar10 = *(uint *)((long)piVar75 + uVar73 + uVar152);
      uVar11 = *(uint *)((long)piVar75 + uVar78 + uVar152);
      uVar81 = (ulong)(uVar154 >> 0xd & 0x7f8);
      uVar12 = *(uint *)((long)piVar75 + uVar73 + lVar67);
      uVar83 = (ulong)(uVar153 * 8 & 0x7f8);
      uVar79 = (ulong)(uVar160 >> 0xd & 0x7f8);
      uVar73 = (ulong)((uVar160 >> 8 & 0xff) * 8);
      uVar153 = *(uint *)((long)piVar75 + uVar83 + uVar152);
      uVar13 = *(uint *)((long)piVar75 + uVar73 + lVar67);
      uVar14 = *(uint *)((long)piVar75 + uVar83 + lVar67);
      uVar15 = *(uint *)((long)piVar75 + uVar85 + lVar67);
      uVar16 = *(uint *)((long)piVar75 + uVar78 + lVar67);
      uVar78 = (ulong)(uVar154 * 8 & 0x7f8);
      uVar154 = *(uint *)((long)piVar75 + uVar78 + uVar152);
      uVar17 = *(uint *)((long)piVar75 + uVar81 + uVar152);
      uVar18 = *(uint *)((long)piVar75 + uVar69 + uVar152);
      uVar19 = *(uint *)((long)piVar75 + uVar78 + lVar67);
      uVar78 = (ulong)((uVar160 >> 0x18) * 8);
      uVar20 = *(uint *)((long)piVar75 + uVar81 + lVar67);
      uVar21 = *(uint *)((long)piVar75 + uVar69 + lVar67);
      uVar22 = *(uint *)((long)piVar75 + uVar79 + uVar152);
      uVar69 = (ulong)(uVar160 * 8 & 0x7f8);
      uVar160 = *(uint *)((long)piVar75 + uVar78 + uVar152);
      uVar23 = *(uint *)((long)piVar75 + uVar69 + uVar152);
      uVar24 = *(uint *)((long)piVar75 + uVar73 + uVar152);
      uVar25 = *(uint *)((long)piVar75 + uVar78 + lVar67);
      uVar26 = *(uint *)((long)piVar75 + uVar79 + lVar67);
      uVar27 = *(uint *)((long)piVar75 + uVar69 + lVar67);
      local_6e8._4_4_ = (float)(uVar11 >> 0x15 | (uVar16 >> 0x15) << 0xb) * fVar5 + fVar6;
      local_6e8._0_4_ = (float)(int)(uVar11 & uVar98) * fVar4 + fVar3;
      local_6e8._8_4_ = (float)(int)(uVar16 & uVar98) * fVar8 + fVar7;
      local_6e8._12_4_ = 0;
      local_6f8._4_4_ = (float)(uVar153 >> 0x15 | (uVar14 >> 0x15) << 0xb) * fVar5 + fVar6;
      local_6f8._0_4_ = (float)(int)(uVar153 & uVar96) * fVar4 + fVar3;
      local_6f8._8_4_ = (float)(int)(uVar14 & uVar96) * fVar8 + fVar7;
      local_6f8._12_4_ = 0;
      local_6c8._4_4_ = (float)(uVar162 >> 0x15 | (uVar165 >> 0x15) << 0xb) * fVar5 + fVar6;
      local_6c8._0_4_ = (float)(int)(uVar162 & uVar143) * fVar4 + fVar3;
      local_6c8._8_4_ = (float)(int)(uVar165 & uVar143) * fVar8 + fVar7;
      local_6c8._12_4_ = 0;
      local_6d8 = (float)(int)(uVar164 & uVar142) * fVar4 + fVar3;
      fStack_6d4 = (float)(uVar164 >> 0x15 | (uVar15 >> 0x15) << 0xb) * fVar5 + fVar6;
      fStack_6d0 = (float)(int)(uVar15 & uVar142) * fVar8 + fVar7;
      uStack_6cc = 0;
      local_6a8._4_4_ = (float)(uVar18 >> 0x15 | (uVar21 >> 0x15) << 0xb) * fVar5 + fVar6;
      local_6a8._0_4_ = (float)(int)(uVar18 & uVar98) * fVar4 + fVar3;
      local_6a8._8_4_ = (float)(int)(uVar21 & uVar98) * fVar8 + fVar7;
      local_6a8._12_4_ = 0;
      local_688._4_4_ = (float)(uVar10 >> 0x15 | (uVar12 >> 0x15) << 0xb) * fVar5 + fVar6;
      local_688._0_4_ = (float)(int)(uVar10 & uVar143) * fVar4 + fVar3;
      local_688._8_4_ = (float)(int)(uVar12 & uVar143) * fVar8 + fVar7;
      local_688._12_4_ = 0;
      local_698._4_4_ = (float)(uVar17 >> 0x15 | (uVar20 >> 0x15) << 0xb) * fVar5 + fVar6;
      local_698._0_4_ = (float)(int)(uVar17 & uVar142) * fVar4 + fVar3;
      local_698._8_4_ = (float)(int)(uVar20 & uVar142) * fVar8 + fVar7;
      local_698._12_4_ = 0;
      local_6b8._4_4_ = (float)(uVar154 >> 0x15 | (uVar19 >> 0x15) << 0xb) * fVar5 + fVar6;
      local_6b8._0_4_ = (float)(int)(uVar154 & uVar96) * fVar4 + fVar3;
      local_6b8._8_4_ = (float)(int)(uVar19 & uVar96) * fVar8 + fVar7;
      local_6b8._12_4_ = 0;
      local_668._4_4_ = (float)(uVar24 >> 0x15 | (uVar13 >> 0x15) << 0xb) * fVar5 + fVar6;
      local_668._0_4_ = (float)(int)(uVar24 & uVar98) * fVar4 + fVar3;
      local_668._8_4_ = (float)(int)(uVar13 & uVar98) * fVar8 + fVar7;
      local_668._12_4_ = 0;
      local_678._4_4_ = (float)(uVar23 >> 0x15 | (uVar27 >> 0x15) << 0xb) * fVar5 + fVar6;
      local_678._0_4_ = (float)(int)(uVar23 & uVar96) * fVar4 + fVar3;
      local_678._8_4_ = (float)(int)(uVar27 & uVar96) * fVar8 + fVar7;
      local_678._12_4_ = 0;
      local_648._4_4_ = (float)(uVar160 >> 0x15 | (uVar25 >> 0x15) << 0xb) * fVar5 + fVar6;
      local_648._0_4_ = (float)(int)(uVar160 & uVar143) * fVar4 + fVar3;
      local_648._8_4_ = (float)(int)(uVar25 & uVar143) * fVar8 + fVar7;
      local_648._12_4_ = 0;
      local_658._4_4_ = (float)(uVar22 >> 0x15 | (uVar26 >> 0x15) << 0xb) * fVar5 + fVar6;
      local_658._0_4_ = (float)(int)(uVar22 & uVar142) * fVar4 + fVar3;
      local_658._8_4_ = (float)(int)(uVar26 & uVar142) * fVar8 + fVar7;
      local_658._12_4_ = 0;
      uVar153 = local_828;
      if (0 < (int)local_828) {
        lVar77 = 0;
        pauVar70 = pauVar71;
        do {
          pauVar1 = (undefined1 (*) [16])(local_6f8 + lVar77);
          uVar102 = *(undefined8 *)(local_6b8 + lVar77);
          uVar112 = *(undefined8 *)(local_6b8 + lVar77 + 8);
          uVar153 = uVar153 - 1;
          uVar48 = *(undefined8 *)(local_678 + lVar77);
          uVar49 = *(undefined8 *)(local_678 + lVar77 + 8);
          pauVar71 = pauVar70 + 3;
          lVar77 = lVar77 + 0x10;
          *pauVar70 = *pauVar1;
          *(undefined8 *)pauVar70[1] = uVar102;
          *(undefined8 *)((long)(pauVar70 + 1) + 8) = uVar112;
          *(undefined8 *)pauVar70[2] = uVar48;
          *(undefined8 *)((long)(pauVar70 + 2) + 8) = uVar49;
          if (3 < (int)(local_828 - uVar153)) break;
          pauVar70 = pauVar71;
        } while (0 < (int)uVar153);
      }
      local_828 = uVar153;
      pCVar84 = pCVar84 + 0x10;
    } while (pCVar84 < param_4);
    puVar82 = local_48;
    uVar152 = uVar76;
    do {
      if (0 < (int)uVar152) {
        lVar67 = 1;
        do {
          lVar77 = lVar67;
          uVar152 = uVar152 - 1;
          *(CollisionCollector *)(puVar82 + lVar77 + -1) = pCVar80[lVar77 + 0xb];
          lVar67 = lVar77 + 1;
        } while ((int)lVar77 < 4 && 0 < (int)uVar152);
        puVar82 = puVar82 + lVar77;
      }
      pCVar80 = pCVar80 + 0x10;
    } while (pCVar80 < param_4);
    pauVar71 = pauVar68 + (int)(uVar76 * 3);
    if (pauVar68 < pauVar71) {
      iVar99 = 0;
      do {
        fVar114 = *(float *)*pauVar68;
        fVar127 = *(float *)((long)*pauVar68 + 4);
        fVar128 = *(float *)((long)*pauVar68 + 8);
        fVar129 = *(float *)pauVar68[2] - fVar114;
        fVar95 = *(float *)((long)(pauVar68 + 2) + 4) - fVar127;
        fVar97 = *(float *)((long)(pauVar68 + 2) + 8) - fVar128;
        fVar167 = *(float *)pauVar68[1] - fVar114;
        fVar168 = *(float *)((long)(pauVar68 + 1) + 4) - fVar127;
        fVar169 = *(float *)((long)(pauVar68 + 1) + 8) - fVar128;
        if ((cVar66 != '\0') ||
           (0.0 <= (fVar129 * fVar168 - fVar167 * fVar95) * (float)uStack_280 +
                   (fVar97 * fVar167 - fVar169 * fVar129) * local_288._4_4_ +
                   (fVar95 * fVar169 - fVar168 * fVar97) * (float)local_288 + 0.0)) {
          fVar100 = fVar95 * (float)local_288 - local_288._4_4_ * fVar129;
          fVar109 = fVar97 * local_288._4_4_ - (float)uStack_280 * fVar95;
          fVar111 = fVar129 * (float)uStack_280 - (float)local_288 * fVar97;
          fVar101 = fVar169 * fVar100 + fVar168 * fVar111 + fVar167 * fVar109 + 0.0;
          auVar126._0_4_ = 0.0 - fVar101;
          auVar173._4_4_ = fVar101;
          auVar173._0_4_ = fVar101;
          auVar173._8_4_ = fVar101;
          auVar173._12_4_ = fVar101;
          auVar126._4_4_ = auVar126._0_4_;
          auVar126._8_4_ = auVar126._0_4_;
          auVar126._12_4_ = auVar126._0_4_;
          auVar103 = maxps(auVar126,auVar173);
          bVar29 = auVar103._0_4_ < _LC31;
          uVar76 = (int)-(uint)bVar29 >> 0x1f;
          uVar152 = (int)-(uint)(auVar103._4_4_ < _LC31) >> 0x1f;
          uVar153 = (int)-(uint)(auVar103._8_4_ < _LC31) >> 0x1f;
          uVar154 = (int)-(uint)(auVar103._12_4_ < _LC31) >> 0x1f;
          auVar141._0_4_ = uVar76 & __LC24;
          auVar141._4_4_ = uVar152 & _UNK_00112514;
          auVar141._8_4_ = uVar153 & _UNK_00112518;
          auVar141._12_4_ = uVar154 & _UNK_0011251c;
          auVar107._0_4_ = ~uVar76 & (uint)fVar101;
          auVar107._4_4_ = ~uVar152 & (uint)fVar101;
          auVar107._8_4_ = ~uVar153 & (uint)fVar101;
          auVar107._12_4_ = ~uVar154 & (uint)fVar101;
          auVar141 = auVar141 | auVar107;
          fVar114 = (float)local_298 - fVar114;
          fVar127 = local_298._4_4_ - fVar127;
          fVar128 = (float)uStack_290 - fVar128;
          fVar101 = fVar168 * fVar114 - fVar127 * fVar167;
          fVar168 = fVar169 * fVar127 - fVar128 * fVar168;
          fVar167 = fVar167 * fVar128 - fVar114 * fVar169;
          auVar135._0_4_ = fVar128 * fVar100 + fVar127 * fVar111 + fVar114 * fVar109 + 0.0;
          auVar135._4_4_ = auVar135._0_4_;
          auVar135._8_4_ = auVar135._0_4_;
          auVar135._12_4_ = auVar135._0_4_;
          auVar156 = divps(auVar135,auVar141);
          auVar133._0_4_ =
               (float)uStack_280 * fVar101 +
               local_288._4_4_ * fVar167 + (float)local_288 * fVar168 + 0.0;
          auVar133._4_4_ = auVar133._0_4_;
          auVar133._8_4_ = auVar133._0_4_;
          auVar133._12_4_ = auVar133._0_4_;
          auVar88 = divps(auVar133,auVar141);
          auVar103._0_4_ = fVar97 * fVar101 + fVar95 * fVar167 + fVar129 * fVar168 + 0.0;
          auVar103._4_4_ = auVar103._0_4_;
          auVar103._8_4_ = auVar103._0_4_;
          auVar103._12_4_ = auVar103._0_4_;
          auVar103 = divps(auVar103,auVar141);
          uVar76 = (int)-(uint)(((auVar88._0_4_ < 0.0 || _LC2 < auVar156._0_4_ + auVar88._0_4_) ||
                                (auVar156._0_4_ < 0.0 || bVar29)) || auVar103._0_4_ < 0.0) >> 0x1f;
          fVar114 = (float)(_LC27 & uVar76 | ~uVar76 & (uint)auVar103._0_4_);
          if (fVar114 < fVar178) {
            local_704 = 0xffffffff;
            if (*(long *)((CollisionCollector *)param_5 + 0x10) != 0) {
              local_704 = *(undefined4 *)(*(long *)((CollisionCollector *)param_5 + 0x10) + 0x34);
            }
            local_6fc = iVar99 << (bVar72 & 0x1f) |
                        ~(7 << (bVar72 & 0x1f)) &
                        (~((int)(1L << (bVar9 & 0x3f)) + -1 << (bVar65 & 0x1f)) & uVar87 |
                        (uVar94 & 0xfffffff) << (bVar65 & 0x1f));
            param_4 = (CollisionCollector *)param_5;
            local_700 = fVar114;
            (**(code **)(*(long *)param_5 + 0x28))(param_5,&local_704);
            fVar178 = *(float *)((CollisionCollector *)param_5 + 8);
            uVar96 = __LC9;
            uVar98 = _UNK_00112494;
            uVar142 = _UNK_00112498;
            uVar143 = _UNK_0011249c;
          }
        }
        if (fVar178 <= 0.0) break;
        pauVar68 = pauVar68 + 3;
        iVar99 = iVar99 + 1;
      } while (pauVar68 < pauVar71);
      fVar178 = *(float *)((CollisionCollector *)param_5 + 8);
    }
  }
  do {
    if (fVar178 <= 0.0) {
LAB_0010685c:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar67 = (long)(local_2b8 + -1);
    do {
      iVar99 = (int)lVar67;
      if (iVar99 < 0) goto LAB_0010685c;
      pfVar2 = local_254 + lVar67;
      lVar67 = lVar67 + -1;
    } while (fVar178 < *pfVar2 || fVar178 == *pfVar2);
    local_2b8 = iVar99;
    lVar67 = (long)iVar99;
    uVar94 = local_4b8[iVar99];
    uVar76 = uVar94 >> 0x1c;
    if (uVar76 != 0) goto LAB_00106830;
LAB_001068b8:
    auVar136._4_4_ = _UNK_001124c4;
    auVar136._0_4_ = __LC14;
    auVar136._8_4_ = _UNK_001124c8;
    auVar136._12_4_ = _UNK_001124cc;
    pauVar68 = (undefined1 (*) [16])((ulong)(uVar94 * 4) + lVar28);
    auVar103 = *pauVar68;
    auVar35._10_2_ = 0;
    auVar35._0_10_ = auVar103._0_10_;
    auVar35._12_2_ = auVar103._6_2_;
    auVar41._8_2_ = auVar103._4_2_;
    auVar41._0_8_ = auVar103._0_8_;
    auVar41._10_4_ = auVar35._10_4_;
    auVar59._6_8_ = 0;
    auVar59._0_6_ = auVar41._8_6_;
    auVar119._6_8_ = SUB148(auVar59 << 0x40,6);
    auVar119._4_2_ = auVar103._2_2_;
    auVar119._0_2_ = auVar103._0_2_;
    auVar119._2_2_ = 0;
    auVar119._14_2_ = 0;
    auVar136 = auVar136 & auVar119;
    auVar103 = __LC11 & auVar119;
    auVar119 = auVar119 & __LC19;
    iVar99 = auVar103._0_4_ * 0x2000;
    iVar108 = auVar103._4_4_ * 0x2000;
    iVar110 = auVar103._8_4_ * 0x2000;
    iVar113 = auVar103._12_4_ * 0x2000;
    uVar154 = __LC12 + iVar99;
    uVar160 = _UNK_001124b4 + iVar108;
    uVar162 = _UNK_001124b8 + iVar110;
    uVar164 = _UNK_001124bc + iVar113;
    uVar143 = (int)-(uint)(auVar136._0_4_ == __LC14) >> 0x1f;
    uVar76 = (int)-(uint)(auVar136._4_4_ == _UNK_001124c4) >> 0x1f;
    uVar152 = (int)-(uint)(auVar136._8_4_ == _UNK_001124c8) >> 0x1f;
    uVar153 = (int)-(uint)(auVar136._12_4_ == _UNK_001124cc) >> 0x1f;
    uVar94 = (int)-(uint)(auVar136._0_4_ == 0) >> 0x1f;
    uVar96 = (int)-(uint)(auVar136._4_4_ == 0) >> 0x1f;
    uVar98 = (int)-(uint)(auVar136._8_4_ == 0) >> 0x1f;
    uVar142 = (int)-(uint)(auVar136._12_4_ == 0) >> 0x1f;
    auVar103 = *pauVar68;
    fVar183 = (float)(auVar119._0_4_ << 0x10 |
                     (uint)((float)(iVar99 + __LC16) + _LC18) & uVar94 |
                     ~uVar94 & (uVar143 & (uVar154 | __LC15) | ~uVar143 & uVar154));
    fVar184 = (float)(auVar119._4_4_ << 0x10 |
                     (uint)((float)(iVar108 + _UNK_001124e4) + _LC18) & uVar96 |
                     ~uVar96 & (uVar76 & (uVar160 | _UNK_001124d4) | ~uVar76 & uVar160));
    fVar185 = (float)(auVar119._8_4_ << 0x10 |
                     (uint)((float)(iVar110 + _UNK_001124e8) + _LC18) & uVar98 |
                     ~uVar98 & (uVar152 & (uVar162 | _UNK_001124d8) | ~uVar152 & uVar162));
    fVar186 = (float)(auVar119._12_4_ << 0x10 |
                     (uint)((float)(iVar113 + _UNK_001124ec) + _LC18) & uVar142 |
                     ~uVar142 & (uVar153 & (uVar164 | _UNK_001124dc) | ~uVar153 & uVar164));
    uVar94 = auVar103._8_4_;
    auVar115._0_8_ = auVar103._8_8_;
    auVar115._8_4_ = uVar94;
    auVar144._4_4_ = _UNK_001124c4;
    auVar144._0_4_ = __LC14;
    auVar144._8_4_ = _UNK_001124c8;
    auVar144._12_4_ = _UNK_001124cc;
    auVar30._10_2_ = 0;
    auVar30._0_10_ = auVar115._0_10_;
    auVar30._12_2_ = auVar103._14_2_;
    auVar36._8_2_ = auVar103._12_2_;
    auVar36._0_8_ = auVar115._0_8_;
    auVar36._10_4_ = auVar30._10_4_;
    auVar60._6_8_ = 0;
    auVar60._0_6_ = auVar36._8_6_;
    auVar42._4_2_ = auVar103._10_2_;
    auVar42._0_4_ = uVar94;
    auVar42._6_8_ = SUB148(auVar60 << 0x40,6);
    auVar120._0_4_ = uVar94 & 0xffff;
    auVar120._4_10_ = auVar42._4_10_;
    auVar120._14_2_ = 0;
    auVar144 = auVar144 & auVar120;
    auVar103 = __LC11 & auVar120;
    auVar120 = auVar120 & __LC19;
    iVar99 = auVar103._0_4_ * 0x2000;
    iVar108 = auVar103._4_4_ * 0x2000;
    iVar110 = auVar103._8_4_ * 0x2000;
    iVar113 = auVar103._12_4_ * 0x2000;
    uVar154 = __LC12 + iVar99;
    uVar160 = _UNK_001124b4 + iVar108;
    uVar162 = _UNK_001124b8 + iVar110;
    uVar164 = _UNK_001124bc + iVar113;
    uVar94 = (int)-(uint)(auVar144._0_4_ == __LC14) >> 0x1f;
    uVar96 = (int)-(uint)(auVar144._4_4_ == _UNK_001124c4) >> 0x1f;
    uVar98 = (int)-(uint)(auVar144._8_4_ == _UNK_001124c8) >> 0x1f;
    uVar142 = (int)-(uint)(auVar144._12_4_ == _UNK_001124cc) >> 0x1f;
    uVar143 = (int)-(uint)(auVar144._0_4_ == 0) >> 0x1f;
    uVar76 = (int)-(uint)(auVar144._4_4_ == 0) >> 0x1f;
    uVar152 = (int)-(uint)(auVar144._8_4_ == 0) >> 0x1f;
    uVar153 = (int)-(uint)(auVar144._12_4_ == 0) >> 0x1f;
    auVar145._4_4_ = _UNK_001124c4;
    auVar145._0_4_ = __LC14;
    auVar145._8_4_ = _UNK_001124c8;
    auVar145._12_4_ = _UNK_001124cc;
    auVar103 = pauVar68[1];
    auVar31._10_2_ = 0;
    auVar31._0_10_ = auVar103._0_10_;
    auVar31._12_2_ = auVar103._6_2_;
    auVar37._8_2_ = auVar103._4_2_;
    auVar37._0_8_ = auVar103._0_8_;
    auVar37._10_4_ = auVar31._10_4_;
    auVar61._6_8_ = 0;
    auVar61._0_6_ = auVar37._8_6_;
    auVar43._4_2_ = auVar103._2_2_;
    auVar43._0_4_ = auVar103._0_4_;
    auVar43._6_8_ = SUB148(auVar61 << 0x40,6);
    auVar137._0_4_ = auVar103._0_4_ & 0xffff;
    auVar137._4_10_ = auVar43._4_10_;
    auVar137._14_2_ = 0;
    fVar179 = (float)(auVar120._0_4_ << 0x10 |
                     (uint)((float)(iVar99 + __LC16) + _LC18) & uVar143 |
                     ~uVar143 & (uVar94 & (uVar154 | __LC15) | ~uVar94 & uVar154));
    fVar180 = (float)(auVar120._4_4_ << 0x10 |
                     (uint)((float)(iVar108 + _UNK_001124e4) + _LC18) & uVar76 |
                     ~uVar76 & (uVar96 & (uVar160 | _UNK_001124d4) | ~uVar96 & uVar160));
    fVar181 = (float)(auVar120._8_4_ << 0x10 |
                     (uint)((float)(iVar110 + _UNK_001124e8) + _LC18) & uVar152 |
                     ~uVar152 & (uVar98 & (uVar162 | _UNK_001124d8) | ~uVar98 & uVar162));
    fVar182 = (float)(auVar120._12_4_ << 0x10 |
                     (uint)((float)(iVar113 + _UNK_001124ec) + _LC18) & uVar153 |
                     ~uVar153 & (uVar142 & (uVar164 | _UNK_001124dc) | ~uVar142 & uVar164));
    auVar145 = auVar145 & auVar137;
    auVar103 = __LC11 & auVar137;
    iVar99 = auVar103._0_4_ * 0x2000;
    iVar108 = auVar103._4_4_ * 0x2000;
    iVar110 = auVar103._8_4_ * 0x2000;
    iVar113 = auVar103._12_4_ * 0x2000;
    auVar137 = auVar137 & __LC19;
    uVar160 = __LC12 + iVar99;
    uVar162 = _UNK_001124b4 + iVar108;
    uVar164 = _UNK_001124b8 + iVar110;
    uVar165 = _UNK_001124bc + iVar113;
    uVar143 = (int)-(uint)(auVar145._0_4_ == 0) >> 0x1f;
    uVar76 = (int)-(uint)(auVar145._4_4_ == 0) >> 0x1f;
    uVar152 = (int)-(uint)(auVar145._8_4_ == 0) >> 0x1f;
    uVar154 = (int)-(uint)(auVar145._12_4_ == 0) >> 0x1f;
    uVar94 = (int)-(uint)(auVar145._0_4_ == __LC14) >> 0x1f;
    uVar96 = (int)-(uint)(auVar145._4_4_ == _UNK_001124c4) >> 0x1f;
    uVar98 = (int)-(uint)(auVar145._8_4_ == _UNK_001124c8) >> 0x1f;
    uVar142 = (int)-(uint)(auVar145._12_4_ == _UNK_001124cc) >> 0x1f;
    auVar103 = pauVar68[1];
    uVar153 = auVar103._8_4_;
    auVar116._0_8_ = auVar103._8_8_;
    auVar116._8_4_ = uVar153;
    auVar146._4_4_ = _UNK_001124c4;
    auVar146._0_4_ = __LC14;
    auVar146._8_4_ = _UNK_001124c8;
    auVar146._12_4_ = _UNK_001124cc;
    auVar32._10_2_ = 0;
    auVar32._0_10_ = auVar116._0_10_;
    auVar32._12_2_ = auVar103._14_2_;
    auVar38._8_2_ = auVar103._12_2_;
    auVar38._0_8_ = auVar116._0_8_;
    auVar38._10_4_ = auVar32._10_4_;
    auVar62._6_8_ = 0;
    auVar62._0_6_ = auVar38._8_6_;
    auVar44._4_2_ = auVar103._10_2_;
    auVar44._0_4_ = uVar153;
    auVar44._6_8_ = SUB148(auVar62 << 0x40,6);
    auVar121._0_4_ = uVar153 & 0xffff;
    auVar121._4_10_ = auVar44._4_10_;
    auVar121._14_2_ = 0;
    auVar146 = auVar146 & auVar121;
    fVar174 = (float)(auVar137._0_4_ << 0x10 |
                     (uint)((float)(iVar99 + __LC16) + _LC18) & uVar143 |
                     ~uVar143 & (uVar94 & (uVar160 | __LC15) | ~uVar94 & uVar160));
    fVar175 = (float)(auVar137._4_4_ << 0x10 |
                     (uint)((float)(iVar108 + _UNK_001124e4) + _LC18) & uVar76 |
                     ~uVar76 & (uVar96 & (uVar162 | _UNK_001124d4) | ~uVar96 & uVar162));
    fVar176 = (float)(auVar137._8_4_ << 0x10 |
                     (uint)((float)(iVar110 + _UNK_001124e8) + _LC18) & uVar152 |
                     ~uVar152 & (uVar98 & (uVar164 | _UNK_001124d8) | ~uVar98 & uVar164));
    fVar177 = (float)(auVar137._12_4_ << 0x10 |
                     (uint)((float)(iVar113 + _UNK_001124ec) + _LC18) & uVar154 |
                     ~uVar154 & (uVar142 & (uVar165 | _UNK_001124dc) | ~uVar142 & uVar165));
    auVar103 = __LC11 & auVar121;
    auVar121 = auVar121 & __LC19;
    iVar99 = auVar103._0_4_ * 0x2000;
    iVar108 = auVar103._4_4_ * 0x2000;
    iVar110 = auVar103._8_4_ * 0x2000;
    iVar113 = auVar103._12_4_ * 0x2000;
    uVar143 = (int)-(uint)(auVar146._0_4_ == 0) >> 0x1f;
    uVar76 = (int)-(uint)(auVar146._4_4_ == 0) >> 0x1f;
    uVar152 = (int)-(uint)(auVar146._8_4_ == 0) >> 0x1f;
    uVar153 = (int)-(uint)(auVar146._12_4_ == 0) >> 0x1f;
    uVar154 = __LC12 + iVar99;
    uVar160 = _UNK_001124b4 + iVar108;
    uVar162 = _UNK_001124b8 + iVar110;
    uVar164 = _UNK_001124bc + iVar113;
    uVar94 = (int)-(uint)(auVar146._0_4_ == __LC14) >> 0x1f;
    uVar96 = (int)-(uint)(auVar146._4_4_ == _UNK_001124c4) >> 0x1f;
    uVar98 = (int)-(uint)(auVar146._8_4_ == _UNK_001124c8) >> 0x1f;
    uVar142 = (int)-(uint)(auVar146._12_4_ == _UNK_001124cc) >> 0x1f;
    auVar103 = pauVar68[2];
    fVar169 = (float)(auVar121._0_4_ << 0x10 |
                     (uint)((float)(iVar99 + __LC16) + _LC18) & uVar143 |
                     ~uVar143 & (uVar94 & (uVar154 | __LC15) | ~uVar94 & uVar154));
    fVar100 = (float)(auVar121._4_4_ << 0x10 |
                     (uint)((float)(iVar108 + _UNK_001124e4) + _LC18) & uVar76 |
                     ~uVar76 & (uVar96 & (uVar160 | _UNK_001124d4) | ~uVar96 & uVar160));
    fVar101 = (float)(auVar121._8_4_ << 0x10 |
                     (uint)((float)(iVar110 + _UNK_001124e8) + _LC18) & uVar152 |
                     ~uVar152 & (uVar98 & (uVar162 | _UNK_001124d8) | ~uVar98 & uVar162));
    fVar109 = (float)(auVar121._12_4_ << 0x10 |
                     (uint)((float)(iVar113 + _UNK_001124ec) + _LC18) & uVar153 |
                     ~uVar153 & (uVar142 & (uVar164 | _UNK_001124dc) | ~uVar142 & uVar164));
    auVar33._10_2_ = 0;
    auVar33._0_10_ = auVar103._0_10_;
    auVar33._12_2_ = auVar103._6_2_;
    auVar39._8_2_ = auVar103._4_2_;
    auVar39._0_8_ = auVar103._0_8_;
    auVar39._10_4_ = auVar33._10_4_;
    auVar63._6_8_ = 0;
    auVar63._0_6_ = auVar39._8_6_;
    auVar45._4_2_ = auVar103._2_2_;
    auVar45._0_4_ = auVar103._0_4_;
    auVar45._6_8_ = SUB148(auVar63 << 0x40,6);
    auVar138._0_4_ = auVar103._0_4_ & 0xffff;
    auVar138._4_10_ = auVar45._4_10_;
    auVar138._14_2_ = 0;
    auVar147._4_4_ = _UNK_001124c4;
    auVar147._0_4_ = __LC14;
    auVar147._8_4_ = _UNK_001124c8;
    auVar147._12_4_ = _UNK_001124cc;
    auVar103 = __LC11 & auVar138;
    auVar147 = auVar147 & auVar138;
    iVar99 = auVar103._0_4_ * 0x2000;
    iVar108 = auVar103._4_4_ * 0x2000;
    iVar110 = auVar103._8_4_ * 0x2000;
    iVar113 = auVar103._12_4_ * 0x2000;
    auVar138 = auVar138 & __LC19;
    uVar154 = __LC12 + iVar99;
    uVar160 = _UNK_001124b4 + iVar108;
    uVar162 = _UNK_001124b8 + iVar110;
    uVar164 = _UNK_001124bc + iVar113;
    uVar143 = (int)-(uint)(auVar147._0_4_ == 0) >> 0x1f;
    uVar76 = (int)-(uint)(auVar147._4_4_ == 0) >> 0x1f;
    uVar152 = (int)-(uint)(auVar147._8_4_ == 0) >> 0x1f;
    uVar153 = (int)-(uint)(auVar147._12_4_ == 0) >> 0x1f;
    uVar94 = (int)-(uint)(auVar147._0_4_ == __LC14) >> 0x1f;
    uVar96 = (int)-(uint)(auVar147._4_4_ == _UNK_001124c4) >> 0x1f;
    uVar98 = (int)-(uint)(auVar147._8_4_ == _UNK_001124c8) >> 0x1f;
    uVar142 = (int)-(uint)(auVar147._12_4_ == _UNK_001124cc) >> 0x1f;
    auVar103 = pauVar68[2];
    fVar111 = (float)(auVar138._0_4_ << 0x10 |
                     (uint)((float)(iVar99 + __LC16) + _LC18) & uVar143 |
                     ~uVar143 & (uVar94 & (uVar154 | __LC15) | ~uVar94 & uVar154));
    fVar161 = (float)(auVar138._4_4_ << 0x10 |
                     (uint)((float)(iVar108 + _UNK_001124e4) + _LC18) & uVar76 |
                     ~uVar76 & (uVar96 & (uVar160 | _UNK_001124d4) | ~uVar96 & uVar160));
    fVar163 = (float)(auVar138._8_4_ << 0x10 |
                     (uint)((float)(iVar110 + _UNK_001124e8) + _LC18) & uVar152 |
                     ~uVar152 & (uVar98 & (uVar162 | _UNK_001124d8) | ~uVar98 & uVar162));
    fVar166 = (float)(auVar138._12_4_ << 0x10 |
                     (uint)((float)(iVar113 + _UNK_001124ec) + _LC18) & uVar153 |
                     ~uVar153 & (uVar142 & (uVar164 | _UNK_001124dc) | ~uVar142 & uVar164));
    uVar94 = auVar103._8_4_;
    auVar117._0_8_ = auVar103._8_8_;
    auVar117._8_4_ = uVar94;
    auVar139._4_4_ = _UNK_001124c4;
    auVar139._0_4_ = __LC14;
    auVar139._8_4_ = _UNK_001124c8;
    auVar139._12_4_ = _UNK_001124cc;
    auVar34._10_2_ = 0;
    auVar34._0_10_ = auVar117._0_10_;
    auVar34._12_2_ = auVar103._14_2_;
    auVar40._8_2_ = auVar103._12_2_;
    auVar40._0_8_ = auVar117._0_8_;
    auVar40._10_4_ = auVar34._10_4_;
    auVar64._6_8_ = 0;
    auVar64._0_6_ = auVar40._8_6_;
    auVar46._4_2_ = auVar103._10_2_;
    auVar46._0_4_ = uVar94;
    auVar46._6_8_ = SUB148(auVar64 << 0x40,6);
    auVar89._0_4_ = uVar94 & 0xffff;
    auVar89._4_10_ = auVar46._4_10_;
    auVar89._14_2_ = 0;
    auVar139 = auVar139 & auVar89;
    auVar103 = __LC11 & auVar89;
    iVar99 = auVar103._0_4_ * 0x2000;
    iVar108 = auVar103._4_4_ * 0x2000;
    iVar110 = auVar103._8_4_ * 0x2000;
    iVar113 = auVar103._12_4_ * 0x2000;
    uVar154 = __LC12 + iVar99;
    uVar160 = _UNK_001124b4 + iVar108;
    uVar162 = _UNK_001124b8 + iVar110;
    uVar164 = _UNK_001124bc + iVar113;
    uVar94 = (int)-(uint)(__LC14 == auVar139._0_4_) >> 0x1f;
    uVar96 = (int)-(uint)(_UNK_001124c4 == auVar139._4_4_) >> 0x1f;
    uVar98 = (int)-(uint)(_UNK_001124c8 == auVar139._8_4_) >> 0x1f;
    uVar142 = (int)-(uint)(_UNK_001124cc == auVar139._12_4_) >> 0x1f;
    uVar143 = (int)-(uint)(auVar139._0_4_ == 0) >> 0x1f;
    uVar76 = (int)-(uint)(auVar139._4_4_ == 0) >> 0x1f;
    uVar152 = (int)-(uint)(auVar139._8_4_ == 0) >> 0x1f;
    uVar153 = (int)-(uint)(auVar139._12_4_ == 0) >> 0x1f;
    auVar89 = __LC19 & auVar89;
    fVar95 = (float)(auVar89._0_4_ << 0x10 |
                    (uint)((float)(iVar99 + __LC16) + _LC18) & uVar143 |
                    ~uVar143 & (uVar94 & (uVar154 | __LC15) | ~uVar94 & uVar154));
    fVar97 = (float)(auVar89._4_4_ << 0x10 |
                    (uint)((float)(iVar108 + _UNK_001124e4) + _LC18) & uVar76 |
                    ~uVar76 & (uVar96 & (uVar160 | _UNK_001124d4) | ~uVar96 & uVar160));
    fVar167 = (float)(auVar89._8_4_ << 0x10 |
                     (uint)((float)(iVar110 + _UNK_001124e8) + _LC18) & uVar152 |
                     ~uVar152 & (uVar98 & (uVar162 | _UNK_001124d8) | ~uVar98 & uVar162));
    fVar168 = (float)(auVar89._12_4_ << 0x10 |
                     (uint)((float)(iVar113 + _UNK_001124ec) + _LC18) & uVar153 |
                     ~uVar153 & (uVar142 & (uVar164 | _UNK_001124dc) | ~uVar142 & uVar164));
    auVar148._0_4_ = (fVar169 - (float)local_298) * (float)local_278._0_4_;
    auVar148._4_4_ = (fVar100 - (float)local_298) * (float)local_278._0_4_;
    auVar148._8_4_ = (fVar101 - (float)local_298) * (float)local_278._0_4_;
    auVar148._12_4_ = (fVar109 - (float)local_298) * (float)local_278._0_4_;
    auVar140._0_8_ =
         CONCAT44((fVar184 - (float)local_298) * (float)local_278._0_4_,
                  (fVar183 - (float)local_298) * (float)local_278._0_4_);
    auVar140._8_4_ = (fVar185 - (float)local_298) * (float)local_278._0_4_;
    auVar140._12_4_ = (fVar186 - (float)local_298) * (float)local_278._0_4_;
    auVar130._0_8_ =
         CONCAT44((fVar180 - local_298._4_4_) * (float)local_278._4_4_,
                  (fVar179 - local_298._4_4_) * (float)local_278._4_4_);
    auVar130._8_4_ = (fVar181 - local_298._4_4_) * (float)local_278._4_4_;
    auVar130._12_4_ = (fVar182 - local_298._4_4_) * (float)local_278._4_4_;
    fVar114 = (fVar111 - local_298._4_4_) * (float)local_278._4_4_;
    fVar127 = (fVar161 - local_298._4_4_) * (float)local_278._4_4_;
    fVar128 = (fVar163 - local_298._4_4_) * (float)local_278._4_4_;
    fVar129 = (fVar166 - local_298._4_4_) * (float)local_278._4_4_;
    auVar155._8_4_ = auVar130._8_4_;
    auVar155._0_8_ = auVar130._0_8_;
    auVar155._12_4_ = auVar130._12_4_;
    local_838._4_4_ = (fVar175 - (float)uStack_290) * fStack_270;
    local_838._0_4_ = (fVar174 - (float)uStack_290) * fStack_270;
    fStack_830 = (fVar176 - (float)uStack_290) * fStack_270;
    fStack_82c = (fVar177 - (float)uStack_290) * fStack_270;
    auVar170._4_4_ = (fVar97 - (float)uStack_290) * fStack_270;
    auVar170._0_4_ = (fVar95 - (float)uStack_290) * fStack_270;
    auVar122._8_4_ = auVar140._8_4_;
    auVar122._0_8_ = auVar140._0_8_;
    auVar122._12_4_ = auVar140._12_4_;
    auVar50._4_4_ = fVar127;
    auVar50._0_4_ = fVar114;
    auVar50._8_4_ = fVar128;
    auVar50._12_4_ = fVar129;
    auVar156 = minps(auVar155,auVar50);
    auVar103 = maxps(auVar140,auVar148);
    auVar88 = minps(auVar122,auVar148);
    uVar98 = local_268 >> 0x1f;
    auVar170._8_4_ = (fVar167 - (float)uStack_290) * fStack_270;
    auVar170._12_4_ = (fVar168 - (float)uStack_290) * fStack_270;
    uVar96 = iStack_264 >> 0x1f;
    uVar94 = iStack_260 >> 0x1f;
    auVar157 = minps(_local_838,auVar170);
    auVar149._0_4_ = _LC20 & uVar94;
    auVar149._4_4_ = _LC20 & uVar94;
    auVar149._8_4_ = _LC20 & uVar94;
    auVar149._12_4_ = _LC20 & uVar94;
    auVar158._4_4_ = ~uVar94 & auVar157._4_4_;
    auVar158._0_4_ = ~uVar94 & auVar157._0_4_;
    auVar158._8_4_ = ~uVar94 & auVar157._8_4_;
    auVar158._12_4_ = ~uVar94 & auVar157._12_4_;
    auVar150._0_4_ = ~uVar98 & auVar103._0_4_;
    auVar150._4_4_ = ~uVar98 & auVar103._4_4_;
    auVar150._8_4_ = ~uVar98 & auVar103._8_4_;
    auVar150._12_4_ = ~uVar98 & auVar103._12_4_;
    auVar51._4_4_ = fVar127;
    auVar51._0_4_ = fVar114;
    auVar51._8_4_ = fVar128;
    auVar51._12_4_ = fVar129;
    auVar103 = maxps(auVar130,auVar51);
    auVar157 = maxps(_local_838,auVar170);
    auVar90._0_4_ = uVar98 & _LC27;
    auVar90._4_4_ = uVar98 & _LC27;
    auVar90._8_4_ = uVar98 & _LC27;
    auVar90._12_4_ = uVar98 & _LC27;
    auVar123._0_4_ = uVar96 & _LC27;
    auVar123._4_4_ = uVar96 & _LC27;
    auVar123._8_4_ = uVar96 & _LC27;
    auVar123._12_4_ = uVar96 & _LC27;
    auVar151._0_4_ = ~uVar96 & auVar103._0_4_;
    auVar151._4_4_ = ~uVar96 & auVar103._4_4_;
    auVar151._8_4_ = ~uVar96 & auVar103._8_4_;
    auVar151._12_4_ = ~uVar96 & auVar103._12_4_;
    auVar104._0_4_ = uVar94 & _LC27;
    auVar104._4_4_ = uVar94 & _LC27;
    auVar104._8_4_ = uVar94 & _LC27;
    auVar104._12_4_ = uVar94 & _LC27;
    auVar131._0_4_ = ~uVar94 & auVar157._0_4_;
    auVar131._4_4_ = ~uVar94 & auVar157._4_4_;
    auVar131._8_4_ = ~uVar94 & auVar157._8_4_;
    auVar131._12_4_ = ~uVar94 & auVar157._12_4_;
    auVar103 = minps(auVar90 | auVar150,auVar123 | auVar151);
    auVar57._4_4_ = _LC20 & uVar98 | ~uVar98 & auVar88._4_4_;
    auVar57._0_4_ = _LC20 & uVar98 | ~uVar98 & auVar88._0_4_;
    auVar57._8_4_ = _LC20 & uVar98 | ~uVar98 & auVar88._8_4_;
    auVar57._12_4_ = _LC20 & uVar98 | ~uVar98 & auVar88._12_4_;
    auVar58._4_4_ = _LC20 & uVar96 | ~uVar96 & auVar156._4_4_;
    auVar58._0_4_ = _LC20 & uVar96 | ~uVar96 & auVar156._0_4_;
    auVar58._8_4_ = _LC20 & uVar96 | ~uVar96 & auVar156._8_4_;
    auVar58._12_4_ = _LC20 & uVar96 | ~uVar96 & auVar156._12_4_;
    auVar88 = maxps(auVar57,auVar58);
    auVar103 = minps(auVar103,auVar104 | auVar131);
    auVar88 = maxps(auVar88,auVar158 | auVar149);
    auVar171._4_4_ = -(uint)(auVar103._4_4_ < auVar88._4_4_);
    auVar171._0_4_ = -(uint)(auVar103._0_4_ < auVar88._0_4_);
    auVar171._8_4_ = -(uint)(auVar103._8_4_ < auVar88._8_4_);
    auVar171._12_4_ = -(uint)(auVar103._12_4_ < auVar88._12_4_);
    auVar159._4_4_ = -(uint)(fVar161 < local_298._4_4_);
    auVar159._0_4_ = -(uint)(fVar111 < local_298._4_4_);
    auVar159._8_4_ = -(uint)(fVar163 < local_298._4_4_);
    auVar159._12_4_ = -(uint)(fVar166 < local_298._4_4_);
    auVar124._4_4_ = -(uint)(local_298._4_4_ < fVar180);
    auVar124._0_4_ = -(uint)(local_298._4_4_ < fVar179);
    local_838._4_4_ = -(uint)(auVar103._4_4_ < 0.0);
    local_838._0_4_ = -(uint)(auVar103._0_4_ < 0.0);
    fStack_830 = (float)-(uint)(auVar103._8_4_ < 0.0);
    fStack_82c = (float)-(uint)(auVar103._12_4_ < 0.0);
    auVar134._4_4_ = -(uint)(fVar100 < (float)local_298);
    auVar134._0_4_ = -(uint)(fVar169 < (float)local_298);
    auVar134._8_4_ = -(uint)(fVar101 < (float)local_298);
    auVar134._12_4_ = -(uint)(fVar109 < (float)local_298);
    auVar105._4_4_ = -(uint)((float)local_298 < fVar184);
    auVar105._0_4_ = -(uint)((float)local_298 < fVar183);
    auVar132._4_4_ = -(uint)(fVar100 < fVar184);
    auVar132._0_4_ = -(uint)(fVar169 < fVar183);
    auVar132._8_4_ = -(uint)(fVar101 < fVar185);
    auVar132._12_4_ = -(uint)(fVar109 < fVar186);
    auVar53._4_4_ = -(uint)(fVar161 < fVar180);
    auVar53._0_4_ = -(uint)(fVar111 < fVar179);
    auVar53._8_4_ = -(uint)(fVar163 < fVar181);
    auVar53._12_4_ = -(uint)(fVar166 < fVar182);
    auVar124._8_4_ = -(uint)(local_298._4_4_ < fVar181);
    auVar124._12_4_ = -(uint)(local_298._4_4_ < fVar182);
    auVar55._4_4_ = iStack_264;
    auVar55._0_4_ = iStack_264;
    auVar55._8_4_ = iStack_264;
    auVar55._12_4_ = iStack_264;
    auVar105._8_4_ = -(uint)((float)local_298 < fVar185);
    auVar105._12_4_ = -(uint)((float)local_298 < fVar186);
    auVar172._4_4_ = -(uint)(fVar97 < (float)uStack_290);
    auVar172._0_4_ = -(uint)(fVar95 < (float)uStack_290);
    auVar172._8_4_ = -(uint)(fVar167 < (float)uStack_290);
    auVar172._12_4_ = -(uint)(fVar168 < (float)uStack_290);
    auVar91._4_4_ = -(uint)((float)uStack_290 < fVar175);
    auVar91._0_4_ = -(uint)((float)uStack_290 < fVar174);
    auVar54._4_4_ = local_268;
    auVar54._0_4_ = local_268;
    auVar54._8_4_ = local_268;
    auVar54._12_4_ = local_268;
    auVar91._8_4_ = -(uint)((float)uStack_290 < fVar176);
    auVar91._12_4_ = -(uint)((float)uStack_290 < fVar177);
    uVar98 = (uint)*(undefined8 *)pauVar68[3];
    uVar142 = (uint)((ulong)*(undefined8 *)pauVar68[3] >> 0x20);
    uVar143 = (uint)*(undefined8 *)(pauVar68[3] + 8);
    uVar76 = (uint)((ulong)*(undefined8 *)(pauVar68[3] + 8) >> 0x20);
    auVar56._4_4_ = iStack_260;
    auVar56._0_4_ = iStack_260;
    auVar56._8_4_ = iStack_260;
    auVar56._12_4_ = iStack_260;
    auVar52._4_4_ = -(uint)(fVar97 < fVar175);
    auVar52._0_4_ = -(uint)(fVar95 < fVar174);
    auVar52._8_4_ = -(uint)(fVar167 < fVar176);
    auVar52._12_4_ = -(uint)(fVar168 < fVar177);
    auVar103 = auVar171 | _local_838 | auVar132 | auVar53 |
               (auVar105 | auVar134) & auVar54 | (auVar124 | auVar159) & auVar55 |
               (auVar91 | auVar172) & auVar56 | auVar52;
    uVar94 = auVar103._0_4_ >> 0x1f;
    uVar96 = auVar103._4_4_ >> 0x1f;
    uVar152 = auVar103._8_4_ >> 0x1f;
    uVar153 = auVar103._12_4_ >> 0x1f;
    fVar128 = (float)(_LC27 & uVar94 | ~uVar94 & (uint)auVar88._0_4_);
    fVar95 = (float)(_LC27 & uVar96 | ~uVar96 & (uint)auVar88._4_4_);
    fVar129 = (float)(_LC27 & uVar152 | ~uVar152 & (uint)auVar88._8_4_);
    fVar97 = (float)(_LC27 & uVar153 | ~uVar153 & (uint)auVar88._12_4_);
    uVar94 = (int)-(uint)(fVar128 < fVar129) >> 0x1f;
    uVar96 = (int)-(uint)(fVar95 < fVar97) >> 0x1f;
    fVar114 = (float)(~uVar94 & (uint)fVar128 | (uint)fVar129 & uVar94);
    fVar127 = (float)(~uVar96 & (uint)fVar95 | (uint)fVar97 & uVar96);
    fVar129 = (float)(~uVar94 & (uint)fVar129 | (uint)fVar128 & uVar94);
    fVar97 = (float)(~uVar96 & (uint)fVar97 | (uint)fVar95 & uVar96);
    uVar152 = uVar94 & uVar143 | ~uVar94 & uVar98;
    uVar153 = uVar96 & uVar76 | ~uVar96 & uVar142;
    uVar94 = uVar94 & uVar98 | ~uVar94 & uVar143;
    uVar142 = uVar96 & uVar142 | ~uVar96 & uVar76;
    uVar96 = (int)-(uint)(fVar114 < fVar127) >> 0x1f;
    uVar98 = (int)-(uint)(fVar129 < fVar97) >> 0x1f;
    auVar92._0_4_ = uVar96 & uVar153;
    auVar92._4_4_ = uVar96 & uVar152;
    auVar92._8_4_ = uVar98 & uVar142;
    auVar92._12_4_ = uVar98 & uVar94;
    fVar128 = (float)((uint)fVar114 & uVar96 | ~uVar96 & (uint)fVar127);
    fVar95 = (float)((uint)fVar97 & uVar98 | ~uVar98 & (uint)fVar129);
    auVar106._0_4_ = ~uVar96 & uVar152;
    auVar106._4_4_ = ~uVar96 & uVar153;
    auVar106._8_4_ = ~uVar98 & uVar94;
    auVar106._12_4_ = ~uVar98 & uVar142;
    auVar106 = auVar106 | auVar92;
    uVar94 = (int)-(uint)(fVar128 < fVar95) >> 0x1f;
    auVar47._4_4_ = (uint)fVar128 & uVar94;
    auVar47._0_4_ = (uint)fVar95 & uVar94;
    auVar47._8_8_ = 0;
    auVar125._4_4_ = ~uVar94 & (uint)fVar128;
    auVar125._0_4_ = (uint)fVar127 & uVar96 | ~uVar96 & (uint)fVar114;
    auVar125._8_4_ = ~uVar94 & (uint)fVar95;
    auVar125._12_4_ = (uint)fVar129 & uVar98 | ~uVar98 & (uint)fVar97;
    auVar125 = auVar47 << 0x20 | auVar125;
    local_6b8._4_4_ = uVar94 & auVar106._8_4_ | ~uVar94 & auVar106._4_4_;
    local_6b8._0_4_ = auVar106._0_4_;
    local_6b8._8_4_ = uVar94 & auVar106._4_4_ | ~uVar94 & auVar106._8_4_;
    local_6b8._12_4_ = auVar106._12_4_;
    auVar93._4_4_ = -(uint)(auVar125._4_4_ < fVar178);
    auVar93._0_4_ = -(uint)(auVar125._0_4_ < fVar178);
    auVar93._8_4_ = -(uint)(auVar125._8_4_ < fVar178);
    auVar93._12_4_ = -(uint)(auVar125._12_4_ < fVar178);
    uVar96 = movmskps((int)param_4,auVar93);
    param_4 = (CollisionCollector *)(ulong)uVar96;
    uVar94 = __popcountdi2();
    local_638[0] = (CollisionCollector)auVar125[0];
    local_638[1] = (CollisionCollector)auVar125[1];
    local_638[2] = (CollisionCollector)auVar125[2];
    local_638[3] = (CollisionCollector)auVar125[3];
    local_638[4] = (CollisionCollector)auVar125[4];
    local_638[5] = (CollisionCollector)auVar125[5];
    local_638[6] = (CollisionCollector)auVar125[6];
    local_638[7] = (CollisionCollector)auVar125[7];
    local_638[8] = (CollisionCollector)auVar125[8];
    local_638[9] = (CollisionCollector)auVar125[9];
    local_638[10] = (CollisionCollector)auVar125[10];
    local_638[0xb] = (CollisionCollector)auVar125[0xb];
    local_638[0xc] = (CollisionCollector)auVar125[0xc];
    local_638[0xd] = (CollisionCollector)auVar125[0xd];
    local_638[0xe] = (CollisionCollector)auVar125[0xe];
    local_638[0xf] = (CollisionCollector)auVar125[0xf];
    if (uVar96 == 0) {
      local_638[0] = (CollisionCollector)0x0;
      local_638[1] = (CollisionCollector)0x0;
      local_638[2] = (CollisionCollector)0x0;
      local_638[3] = (CollisionCollector)0x0;
      local_638[4] = (CollisionCollector)0x0;
      local_638[5] = (CollisionCollector)0x0;
      local_638[6] = (CollisionCollector)0x0;
      local_638[7] = (CollisionCollector)0x0;
      local_638[8] = (CollisionCollector)0x0;
      local_638[9] = (CollisionCollector)0x0;
      local_638[10] = (CollisionCollector)0x0;
      local_638[0xb] = (CollisionCollector)0x0;
      local_638[0xc] = (CollisionCollector)0x0;
      local_638[0xd] = (CollisionCollector)0x0;
      local_638[0xe] = (CollisionCollector)0x0;
      local_638[0xf] = (CollisionCollector)0x0;
      uVar102 = 0;
      uVar112 = 0;
    }
    else {
      local_678 = (undefined1  [16])0x0;
      uVar69 = (ulong)uVar94 << 2;
      param_4 = (CollisionCollector *)local_678;
      lVar77 = (4 - (long)(int)uVar94) * 4;
      pCVar80 = local_638 + lVar77;
      if (7 < (uint)uVar69) {
        for (uVar73 = uVar69 >> 3 & 0x1fffffff; uVar73 != 0; uVar73 = uVar73 - 1) {
          *(undefined8 *)param_4 = *(undefined8 *)pCVar80;
          pCVar80 = pCVar80 + (ulong)bVar86 * -0x10 + 8;
          param_4 = param_4 + (ulong)bVar86 * -0x10 + 8;
        }
      }
      if ((uVar69 & 4) != 0) {
        *(uint *)param_4 = *(uint *)pCVar80;
      }
      puVar74 = (uint *)(local_6b8 + lVar77);
      local_638[0] = (CollisionCollector)0x0;
      local_638[1] = (CollisionCollector)0x0;
      local_638[2] = (CollisionCollector)0x0;
      local_638[3] = (CollisionCollector)0x0;
      local_638[4] = (CollisionCollector)0x0;
      local_638[5] = (CollisionCollector)0x0;
      local_638[6] = (CollisionCollector)0x0;
      local_638[7] = (CollisionCollector)0x0;
      local_638[8] = (CollisionCollector)0x0;
      local_638[9] = (CollisionCollector)0x0;
      local_638[10] = (CollisionCollector)0x0;
      local_638[0xb] = (CollisionCollector)0x0;
      local_638[0xc] = (CollisionCollector)0x0;
      local_638[0xd] = (CollisionCollector)0x0;
      local_638[0xe] = (CollisionCollector)0x0;
      local_638[0xf] = (CollisionCollector)0x0;
      pCVar80 = local_638;
      if (7 < (uint)uVar69) {
        param_4 = local_638;
        for (uVar73 = uVar69 >> 3 & 0x1fffffff; pCVar80 = param_4, uVar73 != 0; uVar73 = uVar73 - 1)
        {
          *(undefined8 *)param_4 = *(undefined8 *)puVar74;
          puVar74 = puVar74 + (ulong)bVar86 * -4 + 2;
          param_4 = param_4 + (ulong)bVar86 * -0x10 + 8;
        }
      }
      uVar102 = local_678._0_8_;
      uVar112 = local_678._8_8_;
      if ((uVar69 & 4) != 0) {
        *(uint *)pCVar80 = *puVar74;
      }
    }
    *(undefined8 *)(local_254 + lVar67) = uVar102;
    *(undefined8 *)((long)auStack_24c + lVar67 * 4) = uVar112;
    *(undefined8 *)(local_4b8 + lVar67) = local_638._0_8_;
    *(undefined8 *)((long)auStack_4b0 + lVar67 * 4) = local_638._8_8_;
    local_2b8 = local_2b8 + uVar94;
    fVar178 = *(float *)(local_2a8 + 8);
    local_6b8[0] = local_638[0];
    local_6b8[1] = local_638[1];
    local_6b8[2] = local_638[2];
    local_6b8[3] = local_638[3];
    local_6b8[4] = local_638[4];
    local_6b8[5] = local_638[5];
    local_6b8[6] = local_638[6];
    local_6b8[7] = local_638[7];
    local_6b8[8] = local_638[8];
    local_6b8[9] = local_638[9];
    local_6b8[10] = local_638[10];
    local_6b8[0xb] = local_638[0xb];
    local_6b8[0xc] = local_638[0xc];
    local_6b8[0xd] = local_638[0xd];
    local_6b8[0xe] = local_638[0xe];
    local_6b8[0xf] = local_638[0xf];
    param_5 = (ShapeFilter *)local_2a8;
    uVar96 = __LC9;
    uVar98 = _UNK_00112494;
    uVar142 = _UNK_00112498;
    uVar143 = _UNK_0011249c;
  } while( true );
}



/* JPH::MeshShape::CastRay(JPH::RayCast const&, JPH::RayCastSettings const&, JPH::SubShapeIDCreator
   const&, JPH::CollisionCollector<JPH::RayCastResult, JPH::CollisionCollectorTraitsCastRay>&,
   JPH::ShapeFilter const&) const */

void __thiscall
JPH::MeshShape::CastRay
          (MeshShape *this,RayCast *param_1,RayCastSettings *param_2,SubShapeIDCreator *param_3,
          CollisionCollector *param_4,ShapeFilter *param_5)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_5 + 0x10))(param_5,this,param_3);
  if (cVar1 != '\0') {
    CastRay((RayCast *)this,(RayCastSettings *)param_1,(SubShapeIDCreator *)(ulong)(byte)*param_2,
            (CollisionCollector *)param_3,(ShapeFilter *)param_4);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MeshShape::GetTrianglesNext(JPH::Shape::GetTrianglesContext&, int, JPH::Float3*,
   JPH::PhysicsMaterial const**) const */

int __thiscall
JPH::MeshShape::GetTrianglesNext
          (MeshShape *this,GetTrianglesContext *param_1,int param_2,Float3 *param_3,
          PhysicsMaterial **param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [14];
  undefined1 auVar28 [14];
  undefined1 auVar29 [14];
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [14];
  undefined1 auVar35 [14];
  undefined1 auVar36 [14];
  undefined1 auVar37 [14];
  undefined1 auVar38 [14];
  undefined1 auVar39 [14];
  long lVar40;
  int iVar41;
  int *piVar42;
  uint *puVar43;
  float *pfVar44;
  float *pfVar45;
  long lVar46;
  float *pfVar47;
  undefined1 (*pauVar48) [16];
  long lVar49;
  uint uVar50;
  float *pfVar51;
  float *pfVar52;
  undefined8 *puVar53;
  GetTrianglesContext *pGVar54;
  ulong uVar55;
  long lVar56;
  float fVar57;
  undefined4 uVar58;
  ulong uVar59;
  ulong uVar60;
  byte *pbVar61;
  ulong uVar62;
  uint *puVar63;
  uint *puVar64;
  uint uVar65;
  ulong uVar66;
  ulong uVar67;
  long in_FS_OFFSET;
  float fVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  float fVar86;
  undefined8 uVar72;
  int iVar87;
  int iVar90;
  undefined1 auVar73 [12];
  undefined1 auVar76 [16];
  int iVar93;
  undefined1 auVar77 [16];
  int iVar88;
  int iVar91;
  undefined1 auVar74 [12];
  int iVar94;
  undefined1 auVar78 [16];
  int iVar89;
  int iVar92;
  undefined1 auVar75 [12];
  int iVar95;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  uint uVar96;
  int iVar97;
  uint uVar98;
  int iVar99;
  uint uVar100;
  int iVar101;
  uint uVar107;
  int iVar108;
  int iVar109;
  int iVar110;
  uint uVar111;
  int iVar112;
  uint uVar113;
  int iVar114;
  uint uVar115;
  int iVar116;
  uint uVar117;
  int iVar118;
  uint uVar119;
  int iVar120;
  uint uVar121;
  int iVar122;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  uint uVar123;
  uint uVar131;
  uint uVar134;
  undefined1 auVar126 [16];
  uint uVar137;
  undefined1 auVar127 [16];
  uint uVar124;
  uint uVar125;
  uint uVar132;
  uint uVar133;
  uint uVar135;
  uint uVar136;
  uint uVar138;
  uint uVar139;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  uint uVar140;
  uint uVar143;
  uint uVar144;
  uint uVar151;
  uint uVar156;
  uint uVar161;
  undefined1 auVar145 [16];
  uint uVar141;
  uint uVar152;
  uint uVar157;
  uint uVar162;
  undefined1 auVar146 [16];
  uint uVar142;
  uint uVar153;
  uint uVar158;
  uint uVar163;
  undefined1 auVar147 [16];
  uint uVar154;
  uint uVar155;
  uint uVar159;
  uint uVar160;
  uint uVar164;
  uint uVar165;
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  uint uVar166;
  uint uVar171;
  uint uVar176;
  uint uVar182;
  undefined1 auVar172 [16];
  uint uVar167;
  uint uVar168;
  uint uVar169;
  uint uVar170;
  uint uVar177;
  uint uVar178;
  uint uVar179;
  uint uVar180;
  uint uVar183;
  uint uVar184;
  uint uVar185;
  uint uVar186;
  uint uVar188;
  uint uVar189;
  uint uVar190;
  uint uVar191;
  uint uVar192;
  undefined1 auVar173 [16];
  uint uVar181;
  uint uVar187;
  uint uVar193;
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  uint uVar213;
  uint uVar214;
  uint uVar215;
  uint uVar216;
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined8 local_418;
  undefined8 uStack_410;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float *local_3f8;
  undefined1 local_288 [8];
  float afStack_280 [2];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  float local_248 [4];
  undefined1 local_238 [8];
  float fStack_230;
  float fStack_22c;
  undefined1 local_228 [8];
  float fStack_220;
  float fStack_21c;
  undefined1 local_218 [16];
  undefined1 local_208 [4];
  float fStack_204;
  undefined8 uStack_200;
  undefined1 local_1f8 [8];
  float fStack_1f0;
  float fStack_1ec;
  undefined1 local_1e8 [8];
  float fStack_1e0;
  float fStack_1dc;
  undefined1 local_1d8 [16];
  float local_1c8 [96];
  byte local_48 [8];
  long local_40;
  
  iVar69 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar41 = *(int *)(param_1 + 0x200);
  if (-1 < iVar41) {
    lVar13 = *(long *)(this + 0x48);
    *(int *)(param_1 + 0x2b0) = param_2;
    *(Float3 **)(param_1 + 0x2b8) = param_3;
    uVar107 = _UNK_0011249c;
    uVar100 = _UNK_00112498;
    uVar98 = _UNK_00112494;
    uVar96 = __LC9;
    fVar1 = *(float *)(lVar13 + 0x20);
    fVar2 = *(float *)(lVar13 + 0x28);
    *(PhysicsMaterial ***)(param_1 + 0x2c8) = param_4;
    param_1[0x2d0] = (GetTrianglesContext)0x0;
    fVar3 = *(float *)(lVar13 + 0x2c);
    fVar4 = *(float *)(lVar13 + 0x24);
    *(undefined4 *)(param_1 + 0x2c0) = 0;
    fVar5 = *(float *)(lVar13 + 0x30);
    fVar6 = *(float *)(lVar13 + 0x34);
    do {
      uVar50 = *(uint *)(param_1 + (long)iVar41 * 4);
      uVar65 = uVar50 >> 0x1c;
      if (uVar65 == 0) {
        auVar172._4_4_ = _UNK_001124c4;
        auVar172._0_4_ = __LC14;
        auVar172._8_4_ = _UNK_001124c8;
        auVar172._12_4_ = _UNK_001124cc;
        pauVar48 = (undefined1 (*) [16])((ulong)(uVar50 * 4) + lVar13);
        lVar46 = 0;
        auVar76 = *pauVar48;
        auVar18._10_2_ = 0;
        auVar18._0_10_ = auVar76._0_10_;
        auVar18._12_2_ = auVar76._6_2_;
        auVar24._8_2_ = auVar76._4_2_;
        auVar24._0_8_ = auVar76._0_8_;
        auVar24._10_4_ = auVar18._10_4_;
        auVar34._6_8_ = 0;
        auVar34._0_6_ = auVar24._8_6_;
        auVar126._6_8_ = SUB148(auVar34 << 0x40,6);
        auVar126._4_2_ = auVar76._2_2_;
        auVar126._0_2_ = auVar76._0_2_;
        auVar126._2_2_ = 0;
        auVar126._14_2_ = 0;
        auVar172 = auVar172 & auVar126;
        auVar76 = __LC11 & auVar126;
        auVar126 = auVar126 & __LC19;
        iVar69 = auVar76._0_4_ * 0x2000;
        iVar87 = auVar76._4_4_ * 0x2000;
        iVar90 = auVar76._8_4_ * 0x2000;
        iVar93 = auVar76._12_4_ * 0x2000;
        uVar140 = __LC12 + iVar69;
        uVar151 = _UNK_001124b4 + iVar87;
        uVar156 = _UNK_001124b8 + iVar90;
        uVar161 = _UNK_001124bc + iVar93;
        uVar96 = (int)-(uint)(auVar172._0_4_ == __LC14) >> 0x1f;
        uVar107 = (int)-(uint)(auVar172._4_4_ == _UNK_001124c4) >> 0x1f;
        uVar111 = (int)-(uint)(auVar172._8_4_ == _UNK_001124c8) >> 0x1f;
        uVar117 = (int)-(uint)(auVar172._12_4_ == _UNK_001124cc) >> 0x1f;
        uVar166 = (int)-(uint)(auVar172._0_4_ == 0) >> 0x1f;
        uVar176 = (int)-(uint)(auVar172._4_4_ == 0) >> 0x1f;
        uVar182 = (int)-(uint)(auVar172._8_4_ == 0) >> 0x1f;
        uVar188 = (int)-(uint)(auVar172._12_4_ == 0) >> 0x1f;
        auVar76 = *pauVar48;
        uVar98 = auVar76._8_4_;
        auVar73._0_8_ = auVar76._8_8_;
        auVar73._8_4_ = uVar98;
        auVar145._4_4_ = _UNK_001124c4;
        auVar145._0_4_ = __LC14;
        auVar145._8_4_ = _UNK_001124c8;
        auVar145._12_4_ = _UNK_001124cc;
        auVar15._10_2_ = 0;
        auVar15._0_10_ = auVar73._0_10_;
        auVar15._12_2_ = auVar76._14_2_;
        auVar19._8_2_ = auVar76._12_2_;
        auVar19._0_8_ = auVar73._0_8_;
        auVar19._10_4_ = auVar15._10_4_;
        auVar35._6_8_ = 0;
        auVar35._0_6_ = auVar19._8_6_;
        auVar27._4_2_ = auVar76._10_2_;
        auVar27._0_4_ = uVar98;
        auVar27._6_8_ = SUB148(auVar35 << 0x40,6);
        auVar77._0_4_ = uVar98 & 0xffff;
        auVar77._4_10_ = auVar27._4_10_;
        auVar77._14_2_ = 0;
        auVar145 = auVar145 & auVar77;
        auVar76 = __LC11 & auVar77;
        auVar77 = auVar77 & __LC19;
        iVar97 = auVar76._0_4_ * 0x2000;
        iVar108 = auVar76._4_4_ * 0x2000;
        iVar112 = auVar76._8_4_ * 0x2000;
        iVar118 = auVar76._12_4_ * 0x2000;
        uVar167 = __LC12 + iVar97;
        uVar177 = _UNK_001124b4 + iVar108;
        uVar183 = _UNK_001124b8 + iVar112;
        uVar189 = _UNK_001124bc + iVar118;
        uVar123 = (int)-(uint)(auVar145._0_4_ == __LC14) >> 0x1f;
        uVar131 = (int)-(uint)(auVar145._4_4_ == _UNK_001124c4) >> 0x1f;
        uVar134 = (int)-(uint)(auVar145._8_4_ == _UNK_001124c8) >> 0x1f;
        uVar137 = (int)-(uint)(auVar145._12_4_ == _UNK_001124cc) >> 0x1f;
        uVar141 = (int)-(uint)(auVar145._0_4_ == 0) >> 0x1f;
        uVar152 = (int)-(uint)(auVar145._4_4_ == 0) >> 0x1f;
        uVar157 = (int)-(uint)(auVar145._8_4_ == 0) >> 0x1f;
        uVar162 = (int)-(uint)(auVar145._12_4_ == 0) >> 0x1f;
        auVar76 = pauVar48[1];
        auVar127._4_4_ = _UNK_001124c4;
        auVar127._0_4_ = __LC14;
        auVar127._8_4_ = _UNK_001124c8;
        auVar127._12_4_ = _UNK_001124cc;
        auVar20._10_2_ = 0;
        auVar20._0_10_ = auVar76._0_10_;
        auVar20._12_2_ = auVar76._6_2_;
        auVar25._8_2_ = auVar76._4_2_;
        auVar25._0_8_ = auVar76._0_8_;
        auVar25._10_4_ = auVar20._10_4_;
        auVar36._6_8_ = 0;
        auVar36._0_6_ = auVar25._8_6_;
        auVar146._6_8_ = SUB148(auVar36 << 0x40,6);
        auVar146._4_2_ = auVar76._2_2_;
        auVar146._0_2_ = auVar76._0_2_;
        auVar146._2_2_ = 0;
        auVar146._14_2_ = 0;
        auVar127 = auVar127 & auVar146;
        auVar76 = __LC11 & auVar146;
        auVar146 = auVar146 & __LC19;
        iVar70 = auVar76._0_4_ * 0x2000;
        iVar88 = auVar76._4_4_ * 0x2000;
        iVar91 = auVar76._8_4_ * 0x2000;
        iVar94 = auVar76._12_4_ * 0x2000;
        uVar168 = __LC12 + iVar70;
        uVar178 = _UNK_001124b4 + iVar88;
        uVar184 = _UNK_001124b8 + iVar91;
        uVar190 = _UNK_001124bc + iVar94;
        uVar124 = (int)-(uint)(auVar127._0_4_ == 0) >> 0x1f;
        uVar132 = (int)-(uint)(auVar127._4_4_ == 0) >> 0x1f;
        uVar135 = (int)-(uint)(auVar127._8_4_ == 0) >> 0x1f;
        uVar138 = (int)-(uint)(auVar127._12_4_ == 0) >> 0x1f;
        uVar98 = (int)-(uint)(auVar127._0_4_ == __LC14) >> 0x1f;
        uVar50 = (int)-(uint)(auVar127._4_4_ == _UNK_001124c4) >> 0x1f;
        uVar113 = (int)-(uint)(auVar127._8_4_ == _UNK_001124c8) >> 0x1f;
        uVar119 = (int)-(uint)(auVar127._12_4_ == _UNK_001124cc) >> 0x1f;
        auVar76 = pauVar48[1];
        uVar100 = auVar76._8_4_;
        auVar74._0_8_ = auVar76._8_8_;
        auVar74._8_4_ = uVar100;
        auVar16._10_2_ = 0;
        auVar16._0_10_ = auVar74._0_10_;
        auVar16._12_2_ = auVar76._14_2_;
        auVar21._8_2_ = auVar76._12_2_;
        auVar21._0_8_ = auVar74._0_8_;
        auVar21._10_4_ = auVar16._10_4_;
        auVar37._6_8_ = 0;
        auVar37._0_6_ = auVar21._8_6_;
        auVar28._4_2_ = auVar76._10_2_;
        auVar28._0_4_ = uVar100;
        auVar28._6_8_ = SUB148(auVar37 << 0x40,6);
        auVar78._0_4_ = uVar100 & 0xffff;
        auVar78._4_10_ = auVar28._4_10_;
        auVar78._14_2_ = 0;
        auVar172 = __LC11 & auVar78;
        auVar76._4_4_ = _UNK_001124c4;
        auVar76._0_4_ = __LC14;
        auVar76._8_4_ = _UNK_001124c8;
        auVar76._12_4_ = _UNK_001124cc;
        iVar99 = auVar172._0_4_ * 0x2000;
        iVar109 = auVar172._4_4_ * 0x2000;
        iVar114 = auVar172._8_4_ * 0x2000;
        iVar120 = auVar172._12_4_ * 0x2000;
        auVar76 = auVar76 & auVar78;
        uVar169 = __LC12 + iVar99;
        uVar179 = _UNK_001124b4 + iVar109;
        uVar185 = _UNK_001124b8 + iVar114;
        uVar191 = _UNK_001124bc + iVar120;
        auVar78 = auVar78 & __LC19;
        uVar142 = (int)-(uint)(auVar76._0_4_ == 0) >> 0x1f;
        uVar153 = (int)-(uint)(auVar76._4_4_ == 0) >> 0x1f;
        uVar158 = (int)-(uint)(auVar76._8_4_ == 0) >> 0x1f;
        uVar163 = (int)-(uint)(auVar76._12_4_ == 0) >> 0x1f;
        uVar125 = (int)-(uint)(auVar76._0_4_ == __LC14) >> 0x1f;
        uVar133 = (int)-(uint)(auVar76._4_4_ == _UNK_001124c4) >> 0x1f;
        uVar136 = (int)-(uint)(auVar76._8_4_ == _UNK_001124c8) >> 0x1f;
        uVar139 = (int)-(uint)(auVar76._12_4_ == _UNK_001124cc) >> 0x1f;
        auVar147._4_4_ = _UNK_001124c4;
        auVar147._0_4_ = __LC14;
        auVar147._8_4_ = _UNK_001124c8;
        auVar147._12_4_ = _UNK_001124cc;
        auVar76 = pauVar48[2];
        auVar22._10_2_ = 0;
        auVar22._0_10_ = auVar76._0_10_;
        auVar22._12_2_ = auVar76._6_2_;
        auVar26._8_2_ = auVar76._4_2_;
        auVar26._0_8_ = auVar76._0_8_;
        auVar26._10_4_ = auVar22._10_4_;
        auVar38._6_8_ = 0;
        auVar38._0_6_ = auVar26._8_6_;
        auVar128._6_8_ = SUB148(auVar38 << 0x40,6);
        auVar128._4_2_ = auVar76._2_2_;
        auVar128._0_2_ = auVar76._0_2_;
        auVar128._2_2_ = 0;
        auVar128._14_2_ = 0;
        auVar147 = auVar147 & auVar128;
        auVar76 = __LC11 & auVar128;
        auVar128 = auVar128 & __LC19;
        iVar71 = auVar76._0_4_ * 0x2000;
        iVar89 = auVar76._4_4_ * 0x2000;
        iVar92 = auVar76._8_4_ * 0x2000;
        iVar95 = auVar76._12_4_ * 0x2000;
        uVar170 = __LC12 + iVar71;
        uVar180 = _UNK_001124b4 + iVar89;
        uVar186 = _UNK_001124b8 + iVar92;
        uVar192 = _UNK_001124bc + iVar95;
        uVar100 = (int)-(uint)(auVar147._0_4_ == __LC14) >> 0x1f;
        uVar65 = (int)-(uint)(auVar147._4_4_ == _UNK_001124c4) >> 0x1f;
        uVar115 = (int)-(uint)(auVar147._8_4_ == _UNK_001124c8) >> 0x1f;
        uVar121 = (int)-(uint)(auVar147._12_4_ == _UNK_001124cc) >> 0x1f;
        uVar143 = (int)-(uint)(auVar147._0_4_ == 0) >> 0x1f;
        uVar154 = (int)-(uint)(auVar147._4_4_ == 0) >> 0x1f;
        uVar159 = (int)-(uint)(auVar147._8_4_ == 0) >> 0x1f;
        uVar164 = (int)-(uint)(auVar147._12_4_ == 0) >> 0x1f;
        auVar76 = pauVar48[2];
        auVar173._4_4_ = _UNK_001124c4;
        auVar173._0_4_ = __LC14;
        auVar173._8_4_ = _UNK_001124c8;
        auVar173._12_4_ = _UNK_001124cc;
        uVar144 = auVar76._8_4_;
        auVar75._0_8_ = auVar76._8_8_;
        auVar75._8_4_ = uVar144;
        auVar17._10_2_ = 0;
        auVar17._0_10_ = auVar75._0_10_;
        auVar17._12_2_ = auVar76._14_2_;
        auVar23._8_2_ = auVar76._12_2_;
        auVar23._0_8_ = auVar75._0_8_;
        auVar23._10_4_ = auVar17._10_4_;
        auVar39._6_8_ = 0;
        auVar39._0_6_ = auVar23._8_6_;
        auVar29._4_2_ = auVar76._10_2_;
        auVar29._0_4_ = uVar144;
        auVar29._6_8_ = SUB148(auVar39 << 0x40,6);
        auVar79._0_4_ = uVar144 & 0xffff;
        auVar79._4_10_ = auVar29._4_10_;
        auVar79._14_2_ = 0;
        auVar173 = auVar173 & auVar79;
        auVar76 = __LC11 & auVar79;
        auVar79 = auVar79 & __LC19;
        iVar101 = auVar76._0_4_ * 0x2000;
        iVar110 = auVar76._4_4_ * 0x2000;
        iVar116 = auVar76._8_4_ * 0x2000;
        iVar122 = auVar76._12_4_ * 0x2000;
        uVar213 = __LC12 + iVar101;
        uVar214 = _UNK_001124b4 + iVar110;
        uVar215 = _UNK_001124b8 + iVar116;
        uVar216 = _UNK_001124bc + iVar122;
        uVar144 = (int)-(uint)(auVar173._0_4_ == __LC14) >> 0x1f;
        uVar155 = (int)-(uint)(auVar173._4_4_ == _UNK_001124c4) >> 0x1f;
        uVar160 = (int)-(uint)(auVar173._8_4_ == _UNK_001124c8) >> 0x1f;
        uVar165 = (int)-(uint)(auVar173._12_4_ == _UNK_001124cc) >> 0x1f;
        uVar171 = (int)-(uint)(auVar173._0_4_ == 0) >> 0x1f;
        uVar181 = (int)-(uint)(auVar173._4_4_ == 0) >> 0x1f;
        uVar187 = (int)-(uint)(auVar173._8_4_ == 0) >> 0x1f;
        uVar193 = (int)-(uint)(auVar173._12_4_ == 0) >> 0x1f;
        fVar57 = *(float *)(param_1 + 0x260);
        fVar68 = *(float *)(param_1 + 0x264);
        fVar7 = *(float *)(param_1 + 0x268);
        auVar194._0_8_ =
             CONCAT44((float)(auVar126._4_4_ << 0x10 |
                             (uint)((float)(iVar87 + _UNK_001124e4) + _LC18) & uVar176 |
                             ~uVar176 & (uVar107 & (uVar151 | _UNK_001124d4) | ~uVar107 & uVar151))
                      * fVar57,(float)(auVar126._0_4_ << 0x10 |
                                      (uint)((float)(iVar69 + __LC16) + _LC18) & uVar166 |
                                      ~uVar166 & (uVar96 & (uVar140 | __LC15) | ~uVar96 & uVar140))
                               * fVar57);
        auVar194._8_4_ =
             (float)(auVar126._8_4_ << 0x10 |
                    (uint)((float)(iVar90 + _UNK_001124e8) + _LC18) & uVar182 |
                    ~uVar182 & (uVar111 & (uVar156 | _UNK_001124d8) | ~uVar111 & uVar156)) * fVar57;
        auVar194._12_4_ =
             (float)(auVar126._12_4_ << 0x10 |
                    (uint)((float)(iVar93 + _UNK_001124ec) + _LC18) & uVar188 |
                    ~uVar188 & (uVar117 & (uVar161 | _UNK_001124dc) | ~uVar117 & uVar161)) * fVar57;
        auVar174._0_4_ =
             fVar57 * (float)(auVar78._0_4_ << 0x10 |
                             (uint)((float)(iVar99 + __LC16) + _LC18) & uVar142 |
                             ~uVar142 & (uVar125 & (uVar169 | __LC15) | ~uVar125 & uVar169));
        auVar174._4_4_ =
             fVar57 * (float)(auVar78._4_4_ << 0x10 |
                             (uint)((float)(iVar109 + _UNK_001124e4) + _LC18) & uVar153 |
                             ~uVar153 & (uVar133 & (uVar179 | _UNK_001124d4) | ~uVar133 & uVar179));
        auVar174._8_4_ =
             fVar57 * (float)(auVar78._8_4_ << 0x10 |
                             (uint)((float)(iVar114 + _UNK_001124e8) + _LC18) & uVar158 |
                             ~uVar158 & (uVar136 & (uVar185 | _UNK_001124d8) | ~uVar136 & uVar185));
        auVar174._12_4_ =
             fVar57 * (float)(auVar78._12_4_ << 0x10 |
                             (uint)((float)(iVar120 + _UNK_001124ec) + _LC18) & uVar163 |
                             ~uVar163 & (uVar139 & (uVar191 | _UNK_001124dc) | ~uVar139 & uVar191));
        auVar219._8_4_ = auVar194._8_4_;
        auVar219._0_8_ = auVar194._0_8_;
        auVar219._12_4_ = auVar194._12_4_;
        auVar76 = maxps(auVar194,auVar174);
        auVar147 = minps(auVar219,auVar174);
        auVar129._0_4_ =
             (float)(auVar128._0_4_ << 0x10 |
                    (uint)((float)(iVar71 + __LC16) + _LC18) & uVar143 |
                    ~uVar143 & (uVar100 & (uVar170 | __LC15) | ~uVar100 & uVar170)) * fVar68;
        auVar129._4_4_ =
             (float)(auVar128._4_4_ << 0x10 |
                    (uint)((float)(iVar89 + _UNK_001124e4) + _LC18) & uVar154 |
                    ~uVar154 & (uVar65 & (uVar180 | _UNK_001124d4) | ~uVar65 & uVar180)) * fVar68;
        auVar129._8_4_ =
             (float)(auVar128._8_4_ << 0x10 |
                    (uint)((float)(iVar92 + _UNK_001124e8) + _LC18) & uVar159 |
                    ~uVar159 & (uVar115 & (uVar186 | _UNK_001124d8) | ~uVar115 & uVar186)) * fVar68;
        auVar129._12_4_ =
             (float)(auVar128._12_4_ << 0x10 |
                    (uint)((float)(iVar95 + _UNK_001124ec) + _LC18) & uVar164 |
                    ~uVar164 & (uVar121 & (uVar192 | _UNK_001124dc) | ~uVar121 & uVar192)) * fVar68;
        auVar175._0_8_ =
             CONCAT44((float)(auVar77._4_4_ << 0x10 |
                             (uint)((float)(iVar108 + _UNK_001124e4) + _LC18) & uVar152 |
                             ~uVar152 & (uVar131 & (uVar177 | _UNK_001124d4) | ~uVar131 & uVar177))
                      * fVar68,(float)(auVar77._0_4_ << 0x10 |
                                      (uint)((float)(iVar97 + __LC16) + _LC18) & uVar141 |
                                      ~uVar141 & (uVar123 & (uVar167 | __LC15) | ~uVar123 & uVar167)
                                      ) * fVar68);
        auVar175._8_4_ =
             (float)(auVar77._8_4_ << 0x10 |
                    (uint)((float)(iVar112 + _UNK_001124e8) + _LC18) & uVar157 |
                    ~uVar157 & (uVar134 & (uVar183 | _UNK_001124d8) | ~uVar134 & uVar183)) * fVar68;
        auVar175._12_4_ =
             (float)(auVar77._12_4_ << 0x10 |
                    (uint)((float)(iVar118 + _UNK_001124ec) + _LC18) & uVar162 |
                    ~uVar162 & (uVar137 & (uVar189 | _UNK_001124dc) | ~uVar137 & uVar189)) * fVar68;
        auVar195._8_4_ = auVar175._8_4_;
        auVar195._0_8_ = auVar175._0_8_;
        auVar195._12_4_ = auVar175._12_4_;
        auVar145 = maxps(auVar175,auVar129);
        auVar127 = minps(auVar195,auVar129);
        fStack_404 = *(float *)(param_1 + 0x250);
        fVar57 = *(float *)(param_1 + 0x254);
        fVar68 = *(float *)(param_1 + 600);
        auVar130._0_8_ =
             CONCAT44((float)(auVar146._4_4_ << 0x10 |
                             (uint)((float)(iVar88 + _UNK_001124e4) + _LC18) & uVar132 |
                             ~uVar132 & (uVar50 & (uVar178 | _UNK_001124d4) | ~uVar50 & uVar178)) *
                      fVar7,(float)(auVar146._0_4_ << 0x10 |
                                   (uint)((float)(iVar70 + __LC16) + _LC18) & uVar124 |
                                   ~uVar124 & (uVar98 & (uVar168 | __LC15) | ~uVar98 & uVar168)) *
                            fVar7);
        auVar130._8_4_ =
             (float)(auVar146._8_4_ << 0x10 |
                    (uint)((float)(iVar91 + _UNK_001124e8) + _LC18) & uVar135 |
                    ~uVar135 & (uVar113 & (uVar184 | _UNK_001124d8) | ~uVar113 & uVar184)) * fVar7;
        auVar130._12_4_ =
             (float)(auVar146._12_4_ << 0x10 |
                    (uint)((float)(iVar94 + _UNK_001124ec) + _LC18) & uVar138 |
                    ~uVar138 & (uVar119 & (uVar190 | _UNK_001124dc) | ~uVar119 & uVar190)) * fVar7;
        auVar102._0_4_ =
             fVar7 * (float)(auVar79._0_4_ << 0x10 |
                            (uint)((float)(iVar101 + __LC16) + _LC18) & uVar171 |
                            ~uVar171 & (uVar144 & (uVar213 | __LC15) | ~uVar144 & uVar213));
        auVar102._4_4_ =
             fVar7 * (float)(auVar79._4_4_ << 0x10 |
                            (uint)((float)(iVar110 + _UNK_001124e4) + _LC18) & uVar181 |
                            ~uVar181 & (uVar155 & (uVar214 | _UNK_001124d4) | ~uVar155 & uVar214));
        auVar102._8_4_ =
             fVar7 * (float)(auVar79._8_4_ << 0x10 |
                            (uint)((float)(iVar116 + _UNK_001124e8) + _LC18) & uVar187 |
                            ~uVar187 & (uVar160 & (uVar215 | _UNK_001124d8) | ~uVar160 & uVar215));
        auVar102._12_4_ =
             fVar7 * (float)(auVar79._12_4_ << 0x10 |
                            (uint)((float)(iVar122 + _UNK_001124ec) + _LC18) & uVar193 |
                            ~uVar193 & (uVar165 & (uVar216 | _UNK_001124dc) | ~uVar165 & uVar216));
        _local_288 = *(undefined1 (*) [16])(param_1 + 0x250);
        auVar217._8_4_ = auVar130._8_4_;
        auVar217._0_8_ = auVar130._0_8_;
        auVar217._12_4_ = auVar130._12_4_;
        auVar172 = maxps(auVar130,auVar102);
        auVar173 = minps(auVar217,auVar102);
        local_248[3] = *(float *)(param_1 + 0x240);
        fStack_22c = *(float *)(param_1 + 0x244);
        fStack_21c = *(float *)(param_1 + 0x248);
        local_1c8[0] = (auVar76._0_4_ - auVar147._0_4_) * _LC4;
        local_1c8[1] = (auVar76._4_4_ - auVar147._4_4_) * _LC4;
        local_1c8[2] = (auVar76._8_4_ - auVar147._8_4_) * _LC4;
        local_1c8[3] = (auVar76._12_4_ - auVar147._12_4_) * _LC4;
        local_248[0] = local_248[3] - (auVar147._0_4_ + auVar76._0_4_) * _LC4;
        local_248[1] = local_248[3] - (auVar147._4_4_ + auVar76._4_4_) * _LC4;
        local_248[2] = local_248[3] - (auVar147._8_4_ + auVar76._8_4_) * _LC4;
        local_248[3] = local_248[3] - (auVar147._12_4_ + auVar76._12_4_) * _LC4;
        local_238._0_4_ = fStack_22c - (auVar127._0_4_ + auVar145._0_4_) * _LC4;
        local_238._4_4_ = fStack_22c - (auVar127._4_4_ + auVar145._4_4_) * _LC4;
        fStack_230 = fStack_22c - (auVar127._8_4_ + auVar145._8_4_) * _LC4;
        fStack_22c = fStack_22c - (auVar127._12_4_ + auVar145._12_4_) * _LC4;
        local_228._0_4_ = fStack_21c - (auVar173._0_4_ + auVar172._0_4_) * _LC4;
        local_228._4_4_ = fStack_21c - (auVar173._4_4_ + auVar172._4_4_) * _LC4;
        fStack_220 = fStack_21c - (auVar173._8_4_ + auVar172._8_4_) * _LC4;
        fStack_21c = fStack_21c - (auVar173._12_4_ + auVar172._12_4_) * _LC4;
        auVar196._0_4_ = 0.0 - *(float *)(param_1 + 0x210);
        auVar196._4_4_ = 0.0 - *(float *)(param_1 + 0x214);
        auVar196._8_4_ = 0.0 - *(float *)(param_1 + 0x218);
        auVar196._12_4_ = 0.0 - *(float *)(param_1 + 0x21c);
        auVar76 = maxps(auVar196,*(undefined1 (*) [16])(param_1 + 0x210));
        local_208 = (undefined1  [4])(auVar76._0_4_ + _LC35);
        fStack_204 = auVar76._4_4_ + _LC35;
        uStack_200._0_4_ = auVar76._8_4_ + _LC35;
        uStack_200._4_4_ = auVar76._12_4_ + _LC35;
        auVar80._0_4_ = 0.0 - *(float *)(param_1 + 0x230);
        auVar80._4_4_ = 0.0 - *(float *)(param_1 + 0x234);
        auVar80._8_4_ = 0.0 - *(float *)(param_1 + 0x238);
        auVar80._12_4_ = 0.0 - *(float *)(param_1 + 0x23c);
        auVar76 = maxps(auVar80,*(undefined1 (*) [16])(param_1 + 0x230));
        auVar197._0_4_ = 0.0 - *(float *)(param_1 + 0x220);
        auVar197._4_4_ = 0.0 - *(float *)(param_1 + 0x224);
        auVar197._8_4_ = 0.0 - *(float *)(param_1 + 0x228);
        auVar197._12_4_ = 0.0 - *(float *)(param_1 + 0x22c);
        auVar147 = maxps(auVar197,*(undefined1 (*) [16])(param_1 + 0x220));
        local_1e8._0_4_ = auVar76._0_4_ + _LC35;
        local_1e8._4_4_ = auVar76._4_4_ + _LC35;
        fStack_1e0 = auVar76._8_4_ + _LC35;
        local_1f8._0_4_ = auVar147._0_4_ + _LC35;
        local_1f8._4_4_ = auVar147._4_4_ + _LC35;
        fStack_1f0 = auVar147._8_4_ + _LC35;
        local_1c8[4] = (auVar145._0_4_ - auVar127._0_4_) * _LC4;
        local_1c8[5] = (auVar145._4_4_ - auVar127._4_4_) * _LC4;
        local_1c8[6] = (auVar145._8_4_ - auVar127._8_4_) * _LC4;
        local_1c8[7] = (auVar145._12_4_ - auVar127._12_4_) * _LC4;
        fStack_1dc = auVar76._12_4_ + _LC35;
        fStack_1ec = auVar147._12_4_ + _LC35;
        local_408 = fStack_404;
        fStack_400 = fStack_404;
        fStack_3fc = fStack_404;
        local_1c8[8] = (auVar172._0_4_ - auVar173._0_4_) * _LC4;
        local_1c8[9] = (auVar172._4_4_ - auVar173._4_4_) * _LC4;
        local_1c8[10] = (auVar172._8_4_ - auVar173._8_4_) * _LC4;
        local_1c8[0xb] = (auVar172._12_4_ - auVar173._12_4_) * _LC4;
        uVar107 = 0xffffffff;
        uVar96 = 0xffffffff;
        uVar98 = 0xffffffff;
        uVar100 = 0xffffffff;
        pfVar44 = (float *)local_208;
        do {
          fVar7 = pfVar44[4];
          fVar86 = *pfVar44;
          auVar198._0_4_ = 0.0 - *(float *)((long)local_248 + lVar46);
          auVar198._4_4_ = 0.0 - *(float *)((long)local_248 + lVar46 + 4);
          auVar198._8_4_ = 0.0 - *(float *)((long)local_248 + lVar46 + 8);
          auVar198._12_4_ = 0.0 - *(float *)(local_238 + lVar46 + -4);
          auVar76 = maxps(auVar198,*(undefined1 (*) [16])((long)local_248 + lVar46));
          fVar8 = pfVar44[8];
          pfVar47 = (float *)((long)local_1c8 + lVar46);
          lVar56 = lVar46 + 4;
          lVar49 = lVar46 + 8;
          lVar40 = lVar46 + 0xc;
          lVar46 = lVar46 + 0x10;
          uVar96 = uVar96 & -(uint)(auVar76._0_4_ <=
                                   fVar7 * fVar57 + fVar86 * fStack_404 + fVar8 * fVar68 + *pfVar47)
          ;
          uVar98 = uVar98 & -(uint)(auVar76._4_4_ <=
                                   fVar7 * fVar57 + fVar86 * fStack_404 + fVar8 * fVar68 +
                                   *(float *)((long)local_1c8 + lVar56));
          uVar100 = uVar100 & -(uint)(auVar76._8_4_ <=
                                     fVar7 * fVar57 + fVar86 * fStack_404 + fVar8 * fVar68 +
                                     *(float *)((long)local_1c8 + lVar49));
          uVar107 = uVar107 & -(uint)(auVar76._12_4_ <=
                                     fVar7 * fVar57 + fVar86 * fStack_404 + fVar8 * fVar68 +
                                     *(float *)((long)local_1c8 + lVar40));
          pfVar44 = pfVar44 + 1;
        } while (lVar46 != 0x30);
        pfVar44 = (float *)local_208;
        pfVar47 = (float *)local_288;
        pGVar54 = param_1 + 0x210;
        do {
          fVar7 = *(float *)pGVar54;
          pfVar51 = pfVar44 + 4;
          fVar86 = *(float *)(pGVar54 + 4);
          fVar8 = pfVar44[1];
          fVar9 = *(float *)(pGVar54 + 8);
          auVar206._0_4_ =
               fVar9 * (float)local_228._0_4_ +
               fVar86 * (float)local_238._0_4_ + fVar7 * local_248[0];
          auVar206._4_4_ =
               fVar9 * (float)local_228._4_4_ +
               fVar86 * (float)local_238._4_4_ + fVar7 * local_248[1];
          auVar206._8_4_ = fVar9 * fStack_220 + fVar86 * fStack_230 + fVar7 * local_248[2];
          auVar206._12_4_ = fVar9 * fStack_21c + fVar86 * fStack_22c + fVar7 * local_248[3];
          auVar199._0_4_ = 0.0 - auVar206._0_4_;
          auVar199._4_4_ = 0.0 - auVar206._4_4_;
          auVar199._8_4_ = 0.0 - auVar206._8_4_;
          auVar199._12_4_ = 0.0 - auVar206._12_4_;
          auVar76 = maxps(auVar199,auVar206);
          fVar7 = *pfVar44;
          fVar86 = pfVar44[2];
          fVar9 = *pfVar47;
          uVar96 = uVar96 & -(uint)(auVar76._0_4_ <=
                                   fVar9 + fVar86 * local_1c8[8] +
                                           fVar8 * local_1c8[4] + fVar7 * local_1c8[0]);
          uVar98 = uVar98 & -(uint)(auVar76._4_4_ <=
                                   fVar9 + fVar86 * local_1c8[9] +
                                           fVar8 * local_1c8[5] + fVar7 * local_1c8[1]);
          uVar100 = uVar100 & -(uint)(auVar76._8_4_ <=
                                     fVar9 + fVar86 * local_1c8[10] +
                                             fVar8 * local_1c8[6] + fVar7 * local_1c8[2]);
          uVar107 = uVar107 & -(uint)(auVar76._12_4_ <=
                                     fVar9 + fVar86 * local_1c8[0xb] +
                                             fVar8 * local_1c8[7] + fVar7 * local_1c8[3]);
          pfVar44 = pfVar51;
          pfVar47 = pfVar47 + 1;
          pGVar54 = pGVar54 + 0x10;
        } while ((float *)local_1d8 != pfVar51);
        fVar7 = *(float *)(param_1 + 0x218);
        fVar86 = *(float *)(param_1 + 0x214);
        auVar200._0_4_ = fVar86 * (float)local_228._0_4_ - (float)local_238._0_4_ * fVar7;
        auVar200._4_4_ = fVar86 * (float)local_228._4_4_ - (float)local_238._4_4_ * fVar7;
        auVar200._8_4_ = fVar86 * fStack_220 - fStack_230 * fVar7;
        auVar200._12_4_ = fVar86 * fStack_21c - fStack_22c * fVar7;
        auVar207._0_4_ = 0.0 - auVar200._0_4_;
        auVar207._4_4_ = 0.0 - auVar200._4_4_;
        auVar207._8_4_ = 0.0 - auVar200._8_4_;
        auVar207._12_4_ = 0.0 - auVar200._12_4_;
        auVar145 = maxps(auVar207,auVar200);
        fVar8 = *(float *)(param_1 + 0x228);
        fVar9 = *(float *)(param_1 + 0x224);
        auVar201._0_4_ = fVar9 * (float)local_228._0_4_ - (float)local_238._0_4_ * fVar8;
        auVar201._4_4_ = fVar9 * (float)local_228._4_4_ - (float)local_238._4_4_ * fVar8;
        auVar201._8_4_ = fVar9 * fStack_220 - fStack_230 * fVar8;
        auVar201._12_4_ = fVar9 * fStack_21c - fStack_22c * fVar8;
        auVar208._0_4_ = 0.0 - auVar201._0_4_;
        auVar208._4_4_ = 0.0 - auVar201._4_4_;
        auVar208._8_4_ = 0.0 - auVar201._8_4_;
        auVar208._12_4_ = 0.0 - auVar201._12_4_;
        auVar127 = maxps(auVar208,auVar201);
        fVar10 = *(float *)(param_1 + 0x238);
        fVar11 = *(float *)(param_1 + 0x234);
        auVar202._0_4_ = fVar11 * (float)local_228._0_4_ - (float)local_238._0_4_ * fVar10;
        auVar202._4_4_ = fVar11 * (float)local_228._4_4_ - (float)local_238._4_4_ * fVar10;
        auVar202._8_4_ = fVar11 * fStack_220 - fStack_230 * fVar10;
        auVar202._12_4_ = fVar11 * fStack_21c - fStack_22c * fVar10;
        auVar209._0_4_ = 0.0 - auVar202._0_4_;
        auVar209._4_4_ = 0.0 - auVar202._4_4_;
        auVar209._8_4_ = 0.0 - auVar202._8_4_;
        auVar209._12_4_ = 0.0 - auVar202._12_4_;
        auVar147 = maxps(auVar209,auVar202);
        fVar12 = *(float *)(param_1 + 0x210);
        auVar203._0_4_ = fVar7 * local_248[0] - fVar12 * (float)local_228._0_4_;
        auVar203._4_4_ = fVar7 * local_248[1] - fVar12 * (float)local_228._4_4_;
        auVar203._8_4_ = fVar7 * local_248[2] - fVar12 * fStack_220;
        auVar203._12_4_ = fVar7 * local_248[3] - fVar12 * fStack_21c;
        auVar210._4_4_ = 0.0 - auVar203._4_4_;
        auVar210._0_4_ = 0.0 - auVar203._0_4_;
        auVar210._8_4_ = 0.0 - auVar203._8_4_;
        auVar210._12_4_ = 0.0 - auVar203._12_4_;
        auVar173 = maxps(auVar210,auVar203);
        fVar7 = *(float *)(param_1 + 0x220);
        auVar204._0_4_ = fVar8 * local_248[0] - fVar7 * (float)local_228._0_4_;
        auVar204._4_4_ = fVar8 * local_248[1] - fVar7 * (float)local_228._4_4_;
        auVar204._8_4_ = fVar8 * local_248[2] - fVar7 * fStack_220;
        auVar204._12_4_ = fVar8 * local_248[3] - fVar7 * fStack_21c;
        auVar211._4_4_ = 0.0 - auVar204._4_4_;
        auVar211._0_4_ = 0.0 - auVar204._0_4_;
        auVar211._8_4_ = 0.0 - auVar204._8_4_;
        auVar211._12_4_ = 0.0 - auVar204._12_4_;
        auVar77 = maxps(auVar211,auVar204);
        fVar8 = *(float *)(param_1 + 0x230);
        auVar205._0_4_ = fVar10 * local_248[0] - (float)local_228._0_4_ * fVar8;
        auVar205._4_4_ = fVar10 * local_248[1] - (float)local_228._4_4_ * fVar8;
        auVar205._8_4_ = fVar10 * local_248[2] - fStack_220 * fVar8;
        auVar205._12_4_ = fVar10 * local_248[3] - fStack_21c * fVar8;
        auVar103._0_4_ = 0.0 - auVar205._0_4_;
        auVar103._4_4_ = 0.0 - auVar205._4_4_;
        auVar103._8_4_ = 0.0 - auVar205._8_4_;
        auVar103._12_4_ = 0.0 - auVar205._12_4_;
        auVar76 = maxps(auVar103,auVar205);
        auVar81._0_4_ = fVar12 * (float)local_238._0_4_ - fVar86 * local_248[0];
        auVar81._4_4_ = fVar12 * (float)local_238._4_4_ - fVar86 * local_248[1];
        auVar81._8_4_ = fVar12 * fStack_230 - fVar86 * local_248[2];
        auVar81._12_4_ = fVar12 * fStack_22c - fVar86 * local_248[3];
        auVar104._0_4_ = 0.0 - auVar81._0_4_;
        auVar104._4_4_ = 0.0 - auVar81._4_4_;
        auVar104._8_4_ = 0.0 - auVar81._8_4_;
        auVar104._12_4_ = 0.0 - auVar81._12_4_;
        auVar172 = maxps(auVar104,auVar81);
        auVar218._0_4_ =
             -(uint)(auVar77._0_4_ <=
                     (float)local_1f8._0_4_ * local_1c8[8] + fStack_1f0 * local_1c8[0] +
                     fStack_204 * fVar68 + fStack_404 * (float)local_1e8._4_4_ &&
                    auVar76._0_4_ <=
                    local_1c8[8] * (float)local_1e8._0_4_ + fStack_1e0 * local_1c8[0] +
                    fVar57 * fStack_204 + fStack_404 * (float)local_1f8._4_4_);
        auVar218._4_4_ =
             -(uint)(auVar77._4_4_ <=
                     (float)local_1f8._0_4_ * local_1c8[9] + fStack_1f0 * local_1c8[1] +
                     fStack_204 * fVar68 + fStack_404 * (float)local_1e8._4_4_ &&
                    auVar76._4_4_ <=
                    local_1c8[9] * (float)local_1e8._0_4_ + fStack_1e0 * local_1c8[1] +
                    fVar57 * fStack_204 + fStack_404 * (float)local_1f8._4_4_);
        auVar218._8_4_ =
             -(uint)(auVar77._8_4_ <=
                     (float)local_1f8._0_4_ * local_1c8[10] + fStack_1f0 * local_1c8[2] +
                     fStack_204 * fVar68 + fStack_404 * (float)local_1e8._4_4_ &&
                    auVar76._8_4_ <=
                    local_1c8[10] * (float)local_1e8._0_4_ + fStack_1e0 * local_1c8[2] +
                    fVar57 * fStack_204 + fStack_404 * (float)local_1f8._4_4_);
        auVar218._12_4_ =
             -(uint)(auVar77._12_4_ <=
                     (float)local_1f8._0_4_ * local_1c8[0xb] + fStack_1f0 * local_1c8[3] +
                     fStack_204 * fVar68 + fStack_404 * (float)local_1e8._4_4_ &&
                    auVar76._12_4_ <=
                    local_1c8[0xb] * (float)local_1e8._0_4_ + fStack_1e0 * local_1c8[3] +
                    fVar57 * fStack_204 + fStack_404 * (float)local_1f8._4_4_);
        auVar82._0_4_ = fVar7 * (float)local_238._0_4_ - fVar9 * local_248[0];
        auVar82._4_4_ = fVar7 * (float)local_238._4_4_ - fVar9 * local_248[1];
        auVar82._8_4_ = fVar7 * fStack_230 - fVar9 * local_248[2];
        auVar82._12_4_ = fVar7 * fStack_22c - fVar9 * local_248[3];
        auVar105._0_4_ = 0.0 - auVar82._0_4_;
        auVar105._4_4_ = 0.0 - auVar82._4_4_;
        auVar105._8_4_ = 0.0 - auVar82._8_4_;
        auVar105._12_4_ = 0.0 - auVar82._12_4_;
        auVar76 = maxps(auVar105,auVar82);
        auVar33._4_4_ = uVar98;
        auVar33._0_4_ = uVar96;
        auVar33._8_4_ = uVar100;
        auVar33._12_4_ = uVar107;
        auVar83._0_4_ = (float)local_238._0_4_ * fVar8 - local_248[0] * fVar11;
        auVar83._4_4_ = (float)local_238._4_4_ * fVar8 - local_248[1] * fVar11;
        auVar83._8_4_ = fStack_230 * fVar8 - local_248[2] * fVar11;
        auVar83._12_4_ = fStack_22c * fVar8 - local_248[3] * fVar11;
        auVar212._0_4_ =
             -(uint)(auVar172._0_4_ <=
                     (float)local_208 * local_1c8[4] + fStack_204 * local_1c8[0] +
                     fStack_1f0 * fVar68 + fStack_1e0 * fVar57 &&
                    auVar76._0_4_ <=
                    (float)local_1f8._0_4_ * local_1c8[4] + (float)local_1f8._4_4_ * local_1c8[0] +
                    fVar68 * (float)uStack_200 + fStack_1e0 * fStack_404);
        auVar212._4_4_ =
             -(uint)(auVar172._4_4_ <=
                     (float)local_208 * local_1c8[5] + fStack_204 * local_1c8[1] +
                     fStack_1f0 * fVar68 + fStack_1e0 * fVar57 &&
                    auVar76._4_4_ <=
                    (float)local_1f8._0_4_ * local_1c8[5] + (float)local_1f8._4_4_ * local_1c8[1] +
                    fVar68 * (float)uStack_200 + fStack_1e0 * fStack_404);
        auVar212._8_4_ =
             -(uint)(auVar172._8_4_ <=
                     (float)local_208 * local_1c8[6] + fStack_204 * local_1c8[2] +
                     fStack_1f0 * fVar68 + fStack_1e0 * fVar57 &&
                    auVar76._8_4_ <=
                    (float)local_1f8._0_4_ * local_1c8[6] + (float)local_1f8._4_4_ * local_1c8[2] +
                    fVar68 * (float)uStack_200 + fStack_1e0 * fStack_404);
        auVar212._12_4_ =
             -(uint)(auVar172._12_4_ <=
                     (float)local_208 * local_1c8[7] + fStack_204 * local_1c8[3] +
                     fStack_1f0 * fVar68 + fStack_1e0 * fVar57 &&
                    auVar76._12_4_ <=
                    (float)local_1f8._0_4_ * local_1c8[7] + (float)local_1f8._4_4_ * local_1c8[3] +
                    fVar68 * (float)uStack_200 + fStack_1e0 * fStack_404);
        auVar148._0_4_ = 0.0 - auVar83._0_4_;
        auVar148._4_4_ = 0.0 - auVar83._4_4_;
        auVar148._8_4_ = 0.0 - auVar83._8_4_;
        auVar148._12_4_ = 0.0 - auVar83._12_4_;
        auVar76 = maxps(auVar148,auVar83);
        auVar106._0_4_ =
             -(uint)(auVar147._0_4_ <=
                     (float)local_1e8._4_4_ * local_1c8[8] + fStack_1e0 * local_1c8[4] +
                     fVar57 * (float)local_208 + fStack_404 * (float)local_1f8._0_4_ &&
                    auVar173._0_4_ <=
                    (float)local_208 * local_1c8[8] + (float)uStack_200 * local_1c8[0] +
                    (float)local_1f8._4_4_ * fVar68 + fVar57 * (float)local_1e8._4_4_);
        auVar106._4_4_ =
             -(uint)(auVar147._4_4_ <=
                     (float)local_1e8._4_4_ * local_1c8[9] + fStack_1e0 * local_1c8[5] +
                     fVar57 * (float)local_208 + fStack_404 * (float)local_1f8._0_4_ &&
                    auVar173._4_4_ <=
                    (float)local_208 * local_1c8[9] + (float)uStack_200 * local_1c8[1] +
                    (float)local_1f8._4_4_ * fVar68 + fVar57 * (float)local_1e8._4_4_);
        auVar106._8_4_ =
             -(uint)(auVar147._8_4_ <=
                     (float)local_1e8._4_4_ * local_1c8[10] + fStack_1e0 * local_1c8[6] +
                     fVar57 * (float)local_208 + fStack_404 * (float)local_1f8._0_4_ &&
                    auVar173._8_4_ <=
                    (float)local_208 * local_1c8[10] + (float)uStack_200 * local_1c8[2] +
                    (float)local_1f8._4_4_ * fVar68 + fVar57 * (float)local_1e8._4_4_);
        auVar106._12_4_ =
             -(uint)(auVar147._12_4_ <=
                     (float)local_1e8._4_4_ * local_1c8[0xb] + fStack_1e0 * local_1c8[7] +
                     fVar57 * (float)local_208 + fStack_404 * (float)local_1f8._0_4_ &&
                    auVar173._12_4_ <=
                    (float)local_208 * local_1c8[0xb] + (float)uStack_200 * local_1c8[3] +
                    (float)local_1f8._4_4_ * fVar68 + fVar57 * (float)local_1e8._4_4_);
        auVar149._4_4_ =
             -(uint)(auVar76._4_4_ <=
                    fVar57 * (float)uStack_200 + fStack_404 * fStack_1f0 +
                    local_1c8[5] * (float)local_1e8._0_4_ + local_1c8[1] * (float)local_1e8._4_4_);
        auVar149._0_4_ =
             -(uint)(auVar76._0_4_ <=
                    fVar57 * (float)uStack_200 + fStack_404 * fStack_1f0 +
                    local_1c8[4] * (float)local_1e8._0_4_ + local_1c8[0] * (float)local_1e8._4_4_);
        auVar149._8_4_ =
             -(uint)(auVar76._8_4_ <=
                    fVar57 * (float)uStack_200 + fStack_404 * fStack_1f0 +
                    local_1c8[6] * (float)local_1e8._0_4_ + local_1c8[2] * (float)local_1e8._4_4_);
        auVar149._12_4_ =
             -(uint)(auVar76._12_4_ <=
                    fVar57 * (float)uStack_200 + fStack_404 * fStack_1f0 +
                    local_1c8[7] * (float)local_1e8._0_4_ + local_1c8[3] * (float)local_1e8._4_4_);
        auVar84._0_4_ =
             -(uint)(auVar145._0_4_ <=
                     fStack_204 * local_1c8[8] + (float)uStack_200 * local_1c8[4] +
                     (float)local_1f8._0_4_ * fVar68 + fVar57 * (float)local_1e8._0_4_ &&
                    auVar127._0_4_ <=
                    (float)local_1f8._4_4_ * local_1c8[8] + fStack_1f0 * local_1c8[4] +
                    (float)local_208 * fVar68 + fStack_404 * (float)local_1e8._0_4_);
        auVar84._4_4_ =
             -(uint)(auVar145._4_4_ <=
                     fStack_204 * local_1c8[9] + (float)uStack_200 * local_1c8[5] +
                     (float)local_1f8._0_4_ * fVar68 + fVar57 * (float)local_1e8._0_4_ &&
                    auVar127._4_4_ <=
                    (float)local_1f8._4_4_ * local_1c8[9] + fStack_1f0 * local_1c8[5] +
                    (float)local_208 * fVar68 + fStack_404 * (float)local_1e8._0_4_);
        auVar84._8_4_ =
             -(uint)(auVar145._8_4_ <=
                     fStack_204 * local_1c8[10] + (float)uStack_200 * local_1c8[6] +
                     (float)local_1f8._0_4_ * fVar68 + fVar57 * (float)local_1e8._0_4_ &&
                    auVar127._8_4_ <=
                    (float)local_1f8._4_4_ * local_1c8[10] + fStack_1f0 * local_1c8[6] +
                    (float)local_208 * fVar68 + fStack_404 * (float)local_1e8._0_4_);
        auVar84._12_4_ =
             -(uint)(auVar145._12_4_ <=
                     fStack_204 * local_1c8[0xb] + (float)uStack_200 * local_1c8[7] +
                     (float)local_1f8._0_4_ * fVar68 + fVar57 * (float)local_1e8._0_4_ &&
                    auVar127._12_4_ <=
                    (float)local_1f8._4_4_ * local_1c8[0xb] + fStack_1f0 * local_1c8[7] +
                    (float)local_208 * fVar68 + fStack_404 * (float)local_1e8._0_4_);
        uVar50 = (uint)((ulong)*(undefined8 *)(pauVar48[3] + 8) >> 0x20);
        auVar76 = auVar106 & auVar84 & auVar33 & auVar218 & auVar212 & auVar149;
        uVar58 = movmskps((int)local_248,auVar76);
        uVar96 = auVar76._8_4_ >> 0x1f;
        uVar98 = uVar96 & (uint)*(undefined8 *)(pauVar48[3] + 8) | ~uVar96 & uVar50;
        uVar100 = auVar76._4_4_ >> 0x1f;
        uVar107 = auVar76._0_4_ >> 0x1f;
        uVar96 = (uint)((ulong)*(undefined8 *)pauVar48[3] >> 0x20) & uVar100 | ~uVar100 & uVar98;
        uVar98 = uVar98 & uVar100 | ~uVar100 & uVar50;
        auVar85._0_4_ = (uint)*(undefined8 *)pauVar48[3] & uVar107;
        auVar85._4_4_ = uVar96 & uVar107;
        auVar85._8_4_ = uVar98 & uVar107;
        auVar85._12_4_ = uVar50 & uVar107;
        auVar150._0_4_ = ~uVar107 & uVar96;
        auVar150._4_4_ = ~uVar107 & uVar98;
        auVar150._8_4_ = ~uVar107 & uVar50;
        auVar150._12_4_ = ~uVar107 & uVar50;
        iVar69 = __popcountdi2(CONCAT44((int)((ulong)local_248 >> 0x20),uVar58));
        local_418 = SUB168(auVar85 | auVar150,0);
        uStack_410 = SUB168(auVar85 | auVar150,8);
        *(undefined8 *)(param_1 + (long)iVar41 * 4) = local_418;
        *(undefined8 *)(param_1 + (long)iVar41 * 4 + 8) = uStack_410;
        uVar107 = _UNK_0011249c;
        uVar100 = _UNK_00112498;
        uVar98 = _UNK_00112494;
        uVar96 = __LC9;
        *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + iVar69;
      }
      else if (uVar65 != 0xf) {
        iVar69 = *(int *)(param_1 + 0x2c0);
        if (*(int *)(param_1 + 0x2b0) < (int)(uVar65 + iVar69)) {
          param_1[0x2d0] = (GetTrianglesContext)0x1;
          goto LAB_001080f7;
        }
        piVar42 = (int *)((ulong)((uVar50 & 0xfffffff) << 2) + lVar13);
        puVar63 = (uint *)(piVar42 + 1);
        local_408 = (float)uVar65;
        uVar50 = *piVar42 * 4 & 0x7ffffffc;
        lVar46 = (ulong)uVar50 + 4;
        puVar43 = puVar63 + (ulong)(uVar65 + 3 >> 2) * 4;
        puVar64 = puVar63;
        local_3f8 = local_1c8;
        do {
          uVar111 = *puVar64;
          uVar113 = puVar64[1];
          uVar115 = puVar64[2];
          uVar62 = (ulong)((uVar111 >> 8 & 0xff) << 3);
          uVar60 = (ulong)((uVar111 >> 0x18) << 3);
          uVar66 = (ulong)(uVar111 * 8 & 0x7f8);
          uVar67 = (ulong)(uVar111 >> 0xd & 0x7f8);
          uVar111 = *(uint *)((long)piVar42 + uVar62 + uVar50);
          uVar117 = *(uint *)((long)piVar42 + uVar60 + uVar50);
          uVar119 = *(uint *)((long)piVar42 + uVar67 + uVar50);
          uVar55 = (ulong)((uVar113 >> 8 & 0xff) << 3);
          uVar121 = *(uint *)((long)piVar42 + uVar66 + uVar50);
          uVar59 = (ulong)((uVar113 >> 0x18) << 3);
          uVar123 = *(uint *)((long)piVar42 + uVar60 + lVar46);
          uVar60 = (ulong)(uVar113 >> 0xd & 0x7f8);
          uVar124 = *(uint *)((long)piVar42 + uVar59 + uVar50);
          uVar125 = *(uint *)((long)piVar42 + uVar66 + lVar46);
          uVar131 = *(uint *)((long)piVar42 + uVar59 + lVar46);
          uVar132 = *(uint *)((long)piVar42 + uVar67 + lVar46);
          uVar66 = (ulong)(uVar115 >> 0xd & 0x7f8);
          uVar59 = (ulong)((uVar115 >> 8 & 0xff) * 8);
          uVar133 = *(uint *)((long)piVar42 + uVar59 + lVar46);
          uVar134 = *(uint *)((long)piVar42 + uVar62 + lVar46);
          uVar62 = (ulong)(uVar113 * 8 & 0x7f8);
          uVar113 = *(uint *)((long)piVar42 + uVar62 + uVar50);
          uVar135 = *(uint *)((long)piVar42 + uVar62 + lVar46);
          uVar62 = (ulong)((uVar115 >> 0x18) * 8);
          uVar136 = *(uint *)((long)piVar42 + uVar60 + uVar50);
          uVar137 = *(uint *)((long)piVar42 + uVar55 + uVar50);
          uVar138 = *(uint *)((long)piVar42 + uVar60 + lVar46);
          uVar139 = *(uint *)((long)piVar42 + uVar55 + lVar46);
          uVar140 = *(uint *)((long)piVar42 + uVar66 + uVar50);
          uVar60 = (ulong)(uVar115 * 8 & 0x7f8);
          uVar115 = *(uint *)((long)piVar42 + uVar60 + uVar50);
          uVar141 = *(uint *)((long)piVar42 + uVar62 + uVar50);
          uVar142 = *(uint *)((long)piVar42 + uVar59 + uVar50);
          uVar143 = *(uint *)((long)piVar42 + uVar66 + lVar46);
          uVar144 = *(uint *)((long)piVar42 + uVar62 + lVar46);
          uVar151 = *(uint *)((long)piVar42 + uVar60 + lVar46);
          local_278._4_4_ = (float)(uVar111 >> 0x15 | (uVar134 >> 0x15) << 0xb) * fVar5 + fVar4;
          local_278._0_4_ = (float)(int)(uVar111 & uVar98) * fVar3 + fVar1;
          local_278._8_4_ = (float)(int)(uVar134 & uVar98) * fVar6 + fVar2;
          local_278._12_4_ = 0;
          local_288._4_4_ = (float)(uVar121 >> 0x15 | (uVar125 >> 0x15) << 0xb) * fVar5 + fVar4;
          local_288._0_4_ = (float)(int)(uVar121 & uVar96) * fVar3 + fVar1;
          register0x00001248 = (float)(int)(uVar125 & uVar96) * fVar6 + fVar2;
          register0x0000124c = 0;
          local_258._4_4_ = (float)(uVar117 >> 0x15 | (uVar123 >> 0x15) << 0xb) * fVar5 + fVar4;
          local_258._0_4_ = (float)(int)(uVar117 & uVar107) * fVar3 + fVar1;
          local_258._8_4_ = (float)(int)(uVar123 & uVar107) * fVar6 + fVar2;
          local_258._12_4_ = 0;
          local_268._4_4_ = (float)(uVar119 >> 0x15 | (uVar132 >> 0x15) << 0xb) * fVar5 + fVar4;
          local_268._0_4_ = (float)(int)(uVar119 & uVar100) * fVar3 + fVar1;
          local_268._8_4_ = (float)(int)(uVar132 & uVar100) * fVar6 + fVar2;
          local_268._12_4_ = 0;
          local_238._4_4_ = (float)(uVar137 >> 0x15 | (uVar139 >> 0x15) << 0xb) * fVar5 + fVar4;
          local_238._0_4_ = (float)(int)(uVar137 & uVar98) * fVar3 + fVar1;
          fStack_230 = (float)(int)(uVar139 & uVar98) * fVar6 + fVar2;
          fStack_22c = 0.0;
          local_218._4_4_ = (float)(uVar124 >> 0x15 | (uVar131 >> 0x15) << 0xb) * fVar5 + fVar4;
          local_218._0_4_ = (float)(int)(uVar124 & uVar107) * fVar3 + fVar1;
          local_218._8_4_ = (float)(int)(uVar131 & uVar107) * fVar6 + fVar2;
          local_218._12_4_ = 0;
          local_228._4_4_ = (float)(uVar136 >> 0x15 | (uVar138 >> 0x15) << 0xb) * fVar5 + fVar4;
          local_228._0_4_ = (float)(int)(uVar136 & uVar100) * fVar3 + fVar1;
          fStack_220 = (float)(int)(uVar138 & uVar100) * fVar6 + fVar2;
          fStack_21c = 0.0;
          local_1f8._4_4_ = (float)(uVar142 >> 0x15 | (uVar133 >> 0x15) << 0xb) * fVar5 + fVar4;
          local_1f8._0_4_ = (float)(int)(uVar142 & uVar98) * fVar3 + fVar1;
          fStack_1f0 = (float)(int)(uVar133 & uVar98) * fVar6 + fVar2;
          fStack_1ec = 0.0;
          fStack_204 = (float)(uVar115 >> 0x15 | (uVar151 >> 0x15) << 0xb) * fVar5 + fVar4;
          local_208 = (undefined1  [4])((float)(int)(uVar115 & uVar96) * fVar3 + fVar1);
          uStack_200._0_4_ = (float)(int)(uVar151 & uVar96) * fVar6 + fVar2;
          uStack_200._4_4_ = 0;
          local_1d8._4_4_ = (float)(uVar141 >> 0x15 | (uVar144 >> 0x15) << 0xb) * fVar5 + fVar4;
          local_1d8._0_4_ = (float)(int)(uVar141 & uVar107) * fVar3 + fVar1;
          local_1d8._8_4_ = (float)(int)(uVar144 & uVar107) * fVar6 + fVar2;
          local_1d8._12_4_ = 0;
          local_1e8._4_4_ = (float)(uVar140 >> 0x15 | (uVar143 >> 0x15) << 0xb) * fVar5 + fVar4;
          local_1e8._0_4_ = (float)(int)(uVar140 & uVar100) * fVar3 + fVar1;
          fStack_1e0 = (float)(int)(uVar143 & uVar100) * fVar6 + fVar2;
          fStack_1dc = 0.0;
          local_248[0] = (float)(int)(uVar113 & uVar96) * fVar3 + fVar1;
          local_248[1] = (float)(uVar113 >> 0x15 | (uVar135 >> 0x15) << 0xb) * fVar5 + fVar4;
          local_248[2] = (float)(int)(uVar135 & uVar96) * fVar6 + fVar2;
          local_248[3] = 0.0;
          if (0 < (int)local_408) {
            lVar56 = 0;
            pfVar44 = local_3f8;
            fVar57 = local_408;
            do {
              pfVar47 = (float *)(local_288 + lVar56);
              fVar68 = *(float *)(local_288 + lVar56 + 4);
              fVar7 = *(float *)(local_288 + lVar56 + 8);
              fVar86 = *(float *)(local_288 + lVar56 + 0xc);
              auVar76 = *(undefined1 (*) [16])((long)local_248 + lVar56);
              fVar57 = (float)((int)fVar57 + -1);
              uVar72 = *(undefined8 *)(local_208 + lVar56);
              uVar32 = *(undefined8 *)(local_208 + lVar56 + 8);
              local_3f8 = pfVar44 + 0xc;
              lVar56 = lVar56 + 0x10;
              *pfVar44 = *pfVar47;
              pfVar44[1] = fVar68;
              pfVar44[2] = fVar7;
              pfVar44[3] = fVar86;
              *(undefined1 (*) [16])(pfVar44 + 4) = auVar76;
              *(undefined8 *)(pfVar44 + 8) = uVar72;
              *(undefined8 *)(pfVar44 + 10) = uVar32;
              if (3 < (int)local_408 - (int)fVar57) break;
              pfVar44 = local_3f8;
            } while (0 < (int)fVar57);
            local_408 = fVar57;
          }
          puVar64 = puVar64 + 4;
        } while (puVar64 < puVar43);
        pfVar44 = local_1c8 + (long)(int)(uVar65 * 3) * 4;
        if (param_1[0x2d1] == (GetTrianglesContext)0x0) {
          if (local_1c8 < pfVar44) {
            puVar14 = *(undefined8 **)(param_1 + 0x2b8);
            pfVar47 = local_1c8;
            puVar53 = puVar14;
            do {
              fVar57 = *pfVar47;
              fVar68 = pfVar47[1];
              fVar7 = pfVar47[2];
              pfVar47 = pfVar47 + 4;
              uVar72 = CONCAT44(fVar57 * *(float *)(param_1 + 0x274) +
                                fVar68 * *(float *)(param_1 + 0x284) +
                                fVar7 * *(float *)(param_1 + 0x294) + *(float *)(param_1 + 0x2a4),
                                fVar57 * *(float *)(param_1 + 0x270) +
                                fVar68 * *(float *)(param_1 + 0x280) +
                                fVar7 * *(float *)(param_1 + 0x290) + *(float *)(param_1 + 0x2a0));
              fVar57 = fVar57 * *(float *)(param_1 + 0x278) + fVar68 * *(float *)(param_1 + 0x288) +
                       fVar7 * *(float *)(param_1 + 0x298) + *(float *)(param_1 + 0x2a8);
              *puVar53 = uVar72;
              *(float *)(puVar53 + 1) = fVar57;
              puVar53 = (undefined8 *)((long)puVar53 + 0xc);
            } while (pfVar47 < pfVar44);
            uVar60 = (long)(int)(uVar65 * 3) * 0x10 - 1U >> 4;
            puVar53 = (undefined8 *)((long)puVar14 + uVar60 * 0xc);
            *(ulong *)(param_1 + 0x2b8) = (long)puVar14 + (uVar60 * 3 + 3) * 4;
            *puVar53 = uVar72;
            *(float *)(puVar53 + 1) = fVar57;
          }
        }
        else if (local_1c8 < pfVar44) {
          pfVar47 = *(float **)(param_1 + 0x2b8);
          pfVar51 = local_1c8;
          do {
            pfVar45 = pfVar47;
            fVar57 = *pfVar51;
            fVar68 = pfVar51[1];
            fVar7 = pfVar51[2];
            pfVar52 = pfVar51 + 0xc;
            fVar86 = *(float *)(param_1 + 0x274);
            fVar8 = *(float *)(param_1 + 0x278);
            fVar9 = *(float *)(param_1 + 0x284);
            fVar10 = *(float *)(param_1 + 0x288);
            fVar11 = *(float *)(param_1 + 0x294);
            fVar12 = *(float *)(param_1 + 0x298);
            fVar30 = *(float *)(param_1 + 0x2a4);
            fVar31 = *(float *)(param_1 + 0x2a8);
            *pfVar45 = fVar57 * *(float *)(param_1 + 0x270) + fVar68 * *(float *)(param_1 + 0x280) +
                       fVar7 * *(float *)(param_1 + 0x290) + *(float *)(param_1 + 0x2a0);
            pfVar45[1] = fVar57 * fVar86 + fVar68 * fVar9 + fVar7 * fVar11 + fVar30;
            fVar86 = pfVar51[8];
            fVar9 = pfVar51[9];
            fVar11 = pfVar51[10];
            pfVar45[2] = fVar57 * fVar8 + fVar68 * fVar10 + fVar7 * fVar12 + fVar31;
            fVar57 = *(float *)(param_1 + 0x274);
            fVar68 = *(float *)(param_1 + 0x278);
            fVar7 = *(float *)(param_1 + 0x284);
            fVar8 = *(float *)(param_1 + 0x288);
            fVar10 = *(float *)(param_1 + 0x294);
            fVar12 = *(float *)(param_1 + 0x298);
            fVar30 = *(float *)(param_1 + 0x2a4);
            fVar31 = *(float *)(param_1 + 0x2a8);
            pfVar45[3] = fVar86 * *(float *)(param_1 + 0x270) + fVar9 * *(float *)(param_1 + 0x280)
                         + fVar11 * *(float *)(param_1 + 0x290) + *(float *)(param_1 + 0x2a0);
            pfVar45[4] = fVar86 * fVar57 + fVar9 * fVar7 + fVar11 * fVar10 + fVar30;
            fVar57 = pfVar51[4];
            fVar7 = pfVar51[5];
            fVar10 = pfVar51[6];
            pfVar45[5] = fVar86 * fVar68 + fVar9 * fVar8 + fVar11 * fVar12 + fVar31;
            fVar68 = fVar57 * *(float *)(param_1 + 0x270) + fVar7 * *(float *)(param_1 + 0x280) +
                     fVar10 * *(float *)(param_1 + 0x290) + *(float *)(param_1 + 0x2a0);
            fVar86 = fVar57 * *(float *)(param_1 + 0x274) + fVar7 * *(float *)(param_1 + 0x284) +
                     fVar10 * *(float *)(param_1 + 0x294) + *(float *)(param_1 + 0x2a4);
            fVar57 = fVar57 * *(float *)(param_1 + 0x278) + fVar7 * *(float *)(param_1 + 0x288) +
                     fVar10 * *(float *)(param_1 + 0x298) + *(float *)(param_1 + 0x2a8);
            pfVar45[6] = fVar68;
            pfVar45[7] = fVar86;
            pfVar45[8] = fVar57;
            pfVar47 = pfVar45 + 9;
            pfVar51 = pfVar52;
          } while (pfVar52 < pfVar44);
          *(float **)(param_1 + 0x2b8) = pfVar45 + 9;
          *(ulong *)(pfVar45 + 6) = CONCAT44(fVar86,fVar68);
          pfVar45[8] = fVar57;
        }
        uVar72 = PhysicsMaterial::sDefault;
        puVar14 = *(undefined8 **)(param_1 + 0x2c8);
        if (puVar14 != (undefined8 *)0x0) {
          lVar46 = *(long *)(param_1 + 0x208);
          if (*(long *)(lVar46 + 0x20) == 0) {
            *puVar14 = PhysicsMaterial::sDefault;
            lVar46 = 1;
            if (1 < uVar65) {
              if ((uVar65 - 1 & 1) != 0) {
                puVar14[1] = uVar72;
                lVar46 = 2;
                if (uVar65 < 3) goto LAB_001080aa;
              }
              do {
                puVar14[lVar46] = uVar72;
                puVar14[lVar46 + 1] = uVar72;
                lVar46 = lVar46 + 2;
              } while ((int)lVar46 < (int)uVar65);
            }
LAB_001080aa:
            *(undefined8 **)(param_1 + 0x2c8) = puVar14 + uVar65;
            puVar14[uVar65 - 1] = uVar72;
          }
          else {
            pbVar61 = local_48;
            uVar50 = uVar65;
            do {
              if (0 < (int)uVar50) {
                lVar56 = 1;
                do {
                  lVar49 = lVar56;
                  uVar50 = uVar50 - 1;
                  pbVar61[lVar49 + -1] = *(byte *)((long)puVar63 + lVar49 + 0xb);
                  lVar56 = lVar49 + 1;
                } while ((int)lVar49 < 4 && 0 < (int)uVar50);
                pbVar61 = pbVar61 + lVar49;
              }
              puVar63 = puVar63 + 4;
            } while (puVar63 < puVar43);
            uVar60 = (ulong)uVar65;
            if (local_48 < local_48 + uVar60) {
              lVar46 = *(long *)(lVar46 + 0x30);
              uVar55 = 0;
              do {
                uVar59 = uVar55;
                uVar72 = *(undefined8 *)(lVar46 + (ulong)(local_48[uVar59] & 0x1f) * 8);
                puVar14[uVar59] = uVar72;
                uVar55 = uVar59 + 1;
              } while (uVar60 != uVar59 + 1);
              *(undefined8 **)(param_1 + 0x2c8) = puVar14 + uVar60;
              puVar14[uVar59] = uVar72;
            }
          }
        }
        *(uint *)(param_1 + 0x2c0) = uVar65 + iVar69;
      }
      if (param_1[0x2d0] != (GetTrianglesContext)0x0) break;
      iVar41 = *(int *)(param_1 + 0x200) + -1;
      *(int *)(param_1 + 0x200) = iVar41;
    } while (-1 < iVar41);
    iVar69 = *(int *)(param_1 + 0x2c0);
  }
LAB_001080f7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar69;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MeshShape::Draw(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3, JPH::Color, bool, bool)
   const */

void __thiscall
JPH::MeshShape::Draw
          (undefined8 param_1_00,undefined8 param_2_00,MeshShape *this,long *param_1,float *param_2,
          undefined4 param_6,MeshShape param_7)

{
  undefined1 (*pauVar1) [16];
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  MeshShape MVar11;
  MeshShape MVar12;
  byte bVar13;
  undefined8 *puVar14;
  Geometry *pGVar15;
  Triangle *pTVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  code *pcVar20;
  bool bVar21;
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [14];
  undefined1 auVar28 [14];
  undefined1 auVar29 [14];
  undefined1 auVar30 [14];
  undefined1 auVar31 [14];
  undefined1 auVar32 [14];
  undefined1 auVar33 [14];
  undefined1 auVar34 [14];
  undefined1 auVar35 [14];
  undefined1 auVar36 [14];
  undefined1 auVar37 [14];
  undefined1 auVar38 [14];
  undefined1 auVar39 [14];
  undefined1 auVar40 [14];
  undefined1 auVar41 [14];
  undefined1 auVar42 [14];
  undefined1 auVar43 [14];
  undefined1 auVar44 [14];
  undefined1 auVar45 [14];
  undefined1 auVar46 [14];
  undefined1 auVar47 [14];
  undefined1 auVar48 [14];
  undefined1 auVar49 [14];
  undefined1 auVar50 [14];
  undefined1 auVar51 [14];
  undefined1 auVar52 [14];
  undefined1 auVar53 [14];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [14];
  undefined1 auVar71 [14];
  undefined1 auVar72 [14];
  undefined1 auVar73 [14];
  undefined1 auVar74 [14];
  undefined1 auVar75 [14];
  undefined1 auVar76 [14];
  undefined1 auVar77 [14];
  undefined1 auVar78 [14];
  undefined1 auVar79 [14];
  undefined1 auVar80 [14];
  undefined1 auVar81 [14];
  int iVar82;
  undefined4 uVar83;
  undefined1 (*pauVar84) [16];
  Geometry *this_00;
  MeshShape *pMVar85;
  long lVar86;
  uint *puVar87;
  float *pfVar88;
  float *pfVar89;
  uint *puVar90;
  int *piVar91;
  undefined1 (*pauVar92) [16];
  long *plVar93;
  uint *puVar94;
  long lVar95;
  long *plVar96;
  ulong uVar97;
  ulong uVar98;
  ulong uVar99;
  ulong uVar100;
  long lVar101;
  long lVar102;
  uint *puVar103;
  ulong uVar104;
  uint *puVar105;
  ulong uVar106;
  byte *pbVar107;
  ulong uVar108;
  byte *pbVar109;
  uint uVar110;
  long in_FS_OFFSET;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  int iVar116;
  int iVar117;
  int iVar118;
  int iVar132;
  int iVar135;
  undefined1 auVar119 [12];
  undefined1 auVar123 [16];
  int iVar138;
  undefined1 auVar124 [16];
  int iVar133;
  int iVar136;
  undefined1 auVar120 [12];
  int iVar139;
  undefined1 auVar125 [16];
  int iVar134;
  int iVar137;
  int iVar140;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar121 [12];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar122 [12];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  int iVar141;
  int iVar151;
  uint uVar152;
  int iVar153;
  uint uVar154;
  uint uVar155;
  int iVar156;
  uint uVar157;
  int iVar158;
  uint uVar159;
  undefined1 auVar145 [12];
  uint uVar150;
  undefined1 auVar146 [16];
  uint uVar142;
  int iVar143;
  uint uVar144;
  uint uVar160;
  int iVar161;
  uint uVar162;
  int iVar163;
  uint uVar164;
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  uint uVar165;
  uint uVar170;
  uint uVar171;
  uint uVar172;
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  int iVar173;
  int iVar174;
  int iVar175;
  int iVar176;
  undefined1 auVar169 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  uint uVar181;
  undefined1 auVar185 [12];
  uint uVar195;
  undefined1 auVar186 [16];
  uint uVar199;
  uint uVar203;
  undefined1 auVar187 [16];
  uint uVar182;
  uint uVar183;
  uint uVar196;
  uint uVar197;
  uint uVar200;
  uint uVar201;
  uint uVar204;
  uint uVar205;
  undefined1 auVar188 [16];
  uint uVar184;
  uint uVar198;
  uint uVar202;
  uint uVar206;
  undefined1 auVar189 [16];
  uint uVar207;
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  uint uVar208;
  uint uVar222;
  uint uVar230;
  undefined1 auVar215 [16];
  uint uVar238;
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  uint uVar209;
  uint uVar223;
  uint uVar231;
  uint uVar239;
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  uint uVar210;
  uint uVar211;
  uint uVar212;
  uint uVar213;
  uint uVar214;
  uint uVar224;
  uint uVar225;
  uint uVar226;
  uint uVar227;
  uint uVar228;
  uint uVar229;
  uint uVar232;
  uint uVar233;
  uint uVar234;
  uint uVar235;
  uint uVar236;
  uint uVar237;
  uint uVar240;
  uint uVar241;
  uint uVar242;
  uint uVar243;
  uint uVar244;
  uint uVar245;
  undefined1 auVar221 [16];
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 local_648 [8];
  undefined8 uStack_640;
  undefined8 local_638;
  float local_608;
  float fStack_604;
  float fStack_600;
  float fStack_5fc;
  undefined1 (*local_5d8) [16];
  ulong local_598;
  float local_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  uint local_4fc;
  long *local_4d0;
  undefined1 local_4c8 [16];
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  undefined1 local_488 [8];
  float afStack_480 [2];
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [8];
  undefined8 uStack_440;
  undefined1 local_438 [8];
  undefined8 uStack_430;
  undefined1 local_428 [16];
  undefined1 local_418 [8];
  undefined8 uStack_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined1 local_3f8 [12];
  undefined4 uStack_3ec;
  undefined1 auStack_3e8 [12];
  float local_3d8 [4];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  int local_58;
  byte local_48 [8];
  long local_40;
  
  piVar91 = *(int **)(this + 0x50);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[0x58] == sDrawTriangleGroups) && (this[0x59] == param_7)) {
    pMVar85 = (MeshShape *)local_3d8;
    if (piVar91 != (int *)0x0) {
LAB_0010959c:
      local_5d8 = (undefined1 (*) [16])local_3d8;
      local_608 = (float)param_1_00;
      fStack_604 = (float)((ulong)param_1_00 >> 0x20);
      fStack_600 = (float)param_2_00;
      fStack_5fc = (float)((ulong)param_2_00 >> 0x20);
      fVar3 = *param_2;
      fVar4 = param_2[1];
      fVar5 = param_2[2];
      fVar6 = param_2[3];
      fVar7 = param_2[4];
      fVar8 = param_2[5];
      fVar54 = param_2[6];
      fVar55 = param_2[7];
      fVar56 = param_2[8];
      fVar57 = param_2[9];
      fVar58 = param_2[10];
      fVar59 = param_2[0xb];
      auVar253._4_4_ = -(uint)(fStack_604 < 0.0);
      auVar253._0_4_ = -(uint)(local_608 < 0.0);
      auVar253._8_4_ = -(uint)(fStack_600 < 0.0);
      auVar253._12_4_ = -(uint)(fStack_5fc < 0.0);
      fVar60 = param_2[0xc];
      fVar61 = param_2[0xd];
      fVar62 = param_2[0xe];
      fVar63 = param_2[0xf];
      local_3d8[0] = local_608;
      local_3d8[1] = 0.0;
      local_3d8[2] = 0.0;
      local_3d8[3] = 0.0;
      uVar83 = movmskps((int)pMVar85,auVar253);
      lVar86 = 0;
      local_3c8 = ZEXT416((uint)fStack_604) << 0x20;
      local_3b8 = ZEXT416((uint)fStack_600) << 0x40;
      local_3a8 = __LC5;
      uStack_3a0 = _UNK_00112478;
      do {
        fVar64 = *(float *)(*local_5d8 + lVar86);
        fVar65 = *(float *)((long)local_3d8 + lVar86 + 4);
        fVar66 = *(float *)((long)local_3d8 + lVar86 + 8);
        fVar67 = *(float *)(local_3c8 + lVar86 + -4);
        *(float *)((long)&local_258 + lVar86) =
             fVar67 * fVar60 + fVar64 * fVar3 + fVar65 * fVar7 + fVar66 * fVar56;
        *(float *)((long)&local_258 + lVar86 + 4) =
             fVar67 * fVar61 + fVar64 * fVar4 + fVar65 * fVar8 + fVar66 * fVar57;
        *(float *)((long)&uStack_250 + lVar86) =
             fVar67 * fVar62 + fVar64 * fVar5 + fVar65 * fVar54 + fVar66 * fVar58;
        *(float *)((long)&uStack_250 + lVar86 + 4) =
             fVar67 * fVar63 + fVar64 * fVar6 + fVar65 * fVar55 + fVar66 * fVar59;
        lVar86 = lVar86 + 0x10;
      } while (lVar86 != 0x40);
      lVar86 = 0;
      local_438._0_4_ = local_228;
      local_438._4_4_ = fStack_224;
      uStack_430._0_4_ = fStack_220;
      uStack_430._4_4_ = fStack_21c;
      do {
        fVar3 = *(float *)((long)piVar91 + lVar86 + 0x20);
        fVar4 = *(float *)((long)piVar91 + lVar86 + 0x30);
        lVar101 = lVar86 * 4;
        auVar255._0_8_ =
             CONCAT44(fVar3 * *(float *)((long)&local_258 + lVar101 + 4),
                      fVar3 * *(float *)((long)&local_258 + lVar101));
        auVar255._8_4_ = fVar3 * *(float *)((long)&uStack_250 + lVar101);
        auVar255._12_4_ = fVar3 * *(float *)((long)&uStack_250 + lVar101 + 4);
        lVar101 = lVar86 * 4;
        auVar177._0_4_ = fVar4 * *(float *)((long)&local_258 + lVar101);
        auVar177._4_4_ = fVar4 * *(float *)((long)&local_258 + lVar101 + 4);
        auVar177._8_4_ = fVar4 * *(float *)((long)&uStack_250 + lVar101);
        auVar177._12_4_ = fVar4 * *(float *)((long)&uStack_250 + lVar101 + 4);
        lVar86 = lVar86 + 4;
        auVar190._8_4_ = auVar255._8_4_;
        auVar190._0_8_ = auVar255._0_8_;
        auVar190._12_4_ = auVar255._12_4_;
        auVar247 = minps(auVar190,auVar177);
        auVar123 = maxps(auVar255,auVar177);
        local_228 = local_228 + auVar247._0_4_;
        fStack_224 = fStack_224 + auVar247._4_4_;
        fStack_220 = fStack_220 + auVar247._8_4_;
        fStack_21c = fStack_21c + auVar247._12_4_;
        local_438._0_4_ = (float)local_438._0_4_ + auVar123._0_4_;
        local_438._4_4_ = (float)local_438._4_4_ + auVar123._4_4_;
        uStack_430._0_4_ = (float)uStack_430 + auVar123._8_4_;
        uStack_430._4_4_ = uStack_430._4_4_ + auVar123._12_4_;
      } while (lVar86 != 0xc);
      local_448._4_4_ = fStack_224;
      local_448._0_4_ = local_228;
      uStack_440._0_4_ = fStack_220;
      uStack_440._4_4_ = fStack_21c;
      plVar96 = param_1;
      (**(code **)(*param_1 + 0x30))
                (param_1,&local_258,local_448,param_6,this + 0x50,
                 (POPCOUNT((byte)uVar83 & 7) & 1U) != 0,0);
      if (sDrawTriangleOutlines == '\0') {
LAB_00109d40:
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      local_58 = 0;
      fVar54 = param_2[8];
      fVar55 = param_2[9];
      fVar56 = param_2[10];
      fVar57 = param_2[0xb];
      uVar9 = *(undefined8 *)(param_2 + 0xc);
      uVar10 = *(undefined8 *)(param_2 + 0xe);
      lVar86 = *(long *)(this + 0x48);
      fVar58 = param_2[4];
      fVar59 = param_2[5];
      fVar60 = param_2[6];
      fVar61 = param_2[7];
      uVar144 = *(uint *)(lVar86 + 0x18);
      fVar3 = *(float *)(lVar86 + 0x20);
      fVar4 = *(float *)(lVar86 + 0x24);
      fVar5 = *(float *)(lVar86 + 0x28);
      fVar6 = *(float *)(lVar86 + 0x2c);
      fVar7 = *(float *)(lVar86 + 0x30);
      local_258 = CONCAT44(local_258._4_4_,uVar144);
      fVar8 = *(float *)(lVar86 + 0x34);
      fVar62 = *param_2;
      fVar63 = param_2[1];
      fVar64 = param_2[2];
      fVar65 = param_2[3];
      do {
        iVar82 = local_58;
        uVar154 = uVar144 >> 0x1c;
        if (uVar154 == 0) {
          auVar147._4_4_ = _UNK_001124c4;
          auVar147._0_4_ = __LC14;
          auVar147._8_4_ = _UNK_001124c8;
          auVar147._12_4_ = _UNK_001124cc;
          pauVar84 = (undefined1 (*) [16])((ulong)(uVar144 * 4) + lVar86);
          auVar123 = *pauVar84;
          auVar38._10_2_ = 0;
          auVar38._0_10_ = auVar123._0_10_;
          auVar38._12_2_ = auVar123._6_2_;
          auVar45._8_2_ = auVar123._4_2_;
          auVar45._0_8_ = auVar123._0_8_;
          auVar45._10_4_ = auVar38._10_4_;
          auVar76._6_8_ = 0;
          auVar76._0_6_ = auVar45._8_6_;
          auVar168._6_8_ = SUB148(auVar76 << 0x40,6);
          auVar168._4_2_ = auVar123._2_2_;
          auVar168._0_2_ = auVar123._0_2_;
          auVar168._2_2_ = 0;
          auVar168._14_2_ = 0;
          auVar147 = auVar147 & auVar168;
          auVar123 = __LC11 & auVar168;
          iVar116 = auVar123._0_4_ * 0x2000;
          iVar118 = auVar123._4_4_ * 0x2000;
          iVar133 = auVar123._8_4_ * 0x2000;
          iVar135 = auVar123._12_4_ * 0x2000;
          uVar239 = __LC12 + iVar116;
          uVar224 = _UNK_001124b4 + iVar118;
          uVar232 = _UNK_001124b8 + iVar133;
          uVar240 = _UNK_001124bc + iVar135;
          uVar181 = (int)-(uint)(auVar147._0_4_ == __LC14) >> 0x1f;
          uVar198 = (int)-(uint)(auVar147._4_4_ == _UNK_001124c4) >> 0x1f;
          uVar197 = (int)-(uint)(auVar147._8_4_ == _UNK_001124c8) >> 0x1f;
          uVar200 = (int)-(uint)(auVar147._12_4_ == _UNK_001124cc) >> 0x1f;
          uVar155 = (int)-(uint)(auVar147._0_4_ == 0) >> 0x1f;
          uVar157 = (int)-(uint)(auVar147._4_4_ == 0) >> 0x1f;
          uVar160 = (int)-(uint)(auVar147._8_4_ == 0) >> 0x1f;
          uVar162 = (int)-(uint)(auVar147._12_4_ == 0) >> 0x1f;
          auVar123 = *pauVar84;
          auVar168 = auVar168 & __LC19;
          uVar144 = auVar123._8_4_;
          auVar121._0_8_ = auVar123._8_8_;
          auVar121._8_4_ = uVar144;
          auVar191._4_4_ = _UNK_001124c4;
          auVar191._0_4_ = __LC14;
          auVar191._8_4_ = _UNK_001124c8;
          auVar191._12_4_ = _UNK_001124cc;
          auVar27._10_2_ = 0;
          auVar27._0_10_ = auVar121._0_10_;
          auVar27._12_2_ = auVar123._14_2_;
          auVar39._8_2_ = auVar123._12_2_;
          auVar39._0_8_ = auVar121._0_8_;
          auVar39._10_4_ = auVar27._10_4_;
          auVar77._6_8_ = 0;
          auVar77._0_6_ = auVar39._8_6_;
          auVar50._4_2_ = auVar123._10_2_;
          auVar50._0_4_ = uVar144;
          auVar50._6_8_ = SUB148(auVar77 << 0x40,6);
          auVar129._0_4_ = uVar144 & 0xffff;
          auVar129._4_10_ = auVar50._4_10_;
          auVar129._14_2_ = 0;
          auVar191 = auVar191 & auVar129;
          auVar123 = __LC11 & auVar129;
          iVar137 = auVar123._0_4_ * 0x2000;
          iVar141 = auVar123._4_4_ * 0x2000;
          iVar156 = auVar123._8_4_ * 0x2000;
          iVar173 = auVar123._12_4_ * 0x2000;
          auVar129 = auVar129 & __LC19;
          uVar210 = __LC12 + iVar137;
          uVar225 = _UNK_001124b4 + iVar141;
          uVar233 = _UNK_001124b8 + iVar156;
          uVar241 = _UNK_001124bc + iVar173;
          uVar203 = (int)-(uint)(auVar191._0_4_ == 0) >> 0x1f;
          uVar205 = (int)-(uint)(auVar191._4_4_ == 0) >> 0x1f;
          uVar209 = (int)-(uint)(auVar191._8_4_ == 0) >> 0x1f;
          uVar230 = (int)-(uint)(auVar191._12_4_ == 0) >> 0x1f;
          uVar182 = (int)-(uint)(auVar191._0_4_ == __LC14) >> 0x1f;
          uVar195 = (int)-(uint)(auVar191._4_4_ == _UNK_001124c4) >> 0x1f;
          uVar202 = (int)-(uint)(auVar191._8_4_ == _UNK_001124c8) >> 0x1f;
          uVar201 = (int)-(uint)(auVar191._12_4_ == _UNK_001124cc) >> 0x1f;
          auVar123 = pauVar84[1];
          auVar178._4_4_ = _UNK_001124c4;
          auVar178._0_4_ = __LC14;
          auVar178._8_4_ = _UNK_001124c8;
          auVar178._12_4_ = _UNK_001124cc;
          auVar28._10_2_ = 0;
          auVar28._0_10_ = auVar123._0_10_;
          auVar28._12_2_ = auVar123._6_2_;
          auVar40._8_2_ = auVar123._4_2_;
          auVar40._0_8_ = auVar123._0_8_;
          auVar40._10_4_ = auVar28._10_4_;
          auVar78._6_8_ = 0;
          auVar78._0_6_ = auVar40._8_6_;
          auVar192._6_8_ = SUB148(auVar78 << 0x40,6);
          auVar192._4_2_ = auVar123._2_2_;
          auVar192._0_2_ = auVar123._0_2_;
          auVar192._2_2_ = 0;
          auVar192._14_2_ = 0;
          auVar123 = __LC11 & auVar192;
          auVar178 = auVar178 & auVar192;
          auVar192 = auVar192 & __LC19;
          iVar117 = auVar123._0_4_ * 0x2000;
          iVar132 = auVar123._4_4_ * 0x2000;
          iVar134 = auVar123._8_4_ * 0x2000;
          iVar136 = auVar123._12_4_ * 0x2000;
          uVar211 = __LC12 + iVar117;
          uVar226 = _UNK_001124b4 + iVar132;
          uVar234 = _UNK_001124b8 + iVar134;
          uVar242 = _UNK_001124bc + iVar136;
          uVar183 = (int)-(uint)(auVar178._0_4_ == 0) >> 0x1f;
          uVar196 = (int)-(uint)(auVar178._4_4_ == 0) >> 0x1f;
          uVar199 = (int)-(uint)(auVar178._8_4_ == 0) >> 0x1f;
          uVar206 = (int)-(uint)(auVar178._12_4_ == 0) >> 0x1f;
          uVar165 = (int)-(uint)(auVar178._0_4_ == __LC14) >> 0x1f;
          uVar170 = (int)-(uint)(auVar178._4_4_ == _UNK_001124c4) >> 0x1f;
          uVar171 = (int)-(uint)(auVar178._8_4_ == _UNK_001124c8) >> 0x1f;
          uVar172 = (int)-(uint)(auVar178._12_4_ == _UNK_001124cc) >> 0x1f;
          auVar123 = pauVar84[1];
          uVar144 = auVar123._8_4_;
          auVar122._0_8_ = auVar123._8_8_;
          auVar122._8_4_ = uVar144;
          auVar179._4_4_ = _UNK_001124c4;
          auVar179._0_4_ = __LC14;
          auVar179._8_4_ = _UNK_001124c8;
          auVar179._12_4_ = _UNK_001124cc;
          auVar29._10_2_ = 0;
          auVar29._0_10_ = auVar122._0_10_;
          auVar29._12_2_ = auVar123._14_2_;
          auVar41._8_2_ = auVar123._12_2_;
          auVar41._0_8_ = auVar122._0_8_;
          auVar41._10_4_ = auVar29._10_4_;
          auVar79._6_8_ = 0;
          auVar79._0_6_ = auVar41._8_6_;
          auVar51._4_2_ = auVar123._10_2_;
          auVar51._0_4_ = uVar144;
          auVar51._6_8_ = SUB148(auVar79 << 0x40,6);
          auVar130._0_4_ = uVar144 & 0xffff;
          auVar130._4_10_ = auVar51._4_10_;
          auVar130._14_2_ = 0;
          auVar179 = auVar179 & auVar130;
          auVar123 = __LC11 & auVar130;
          auVar130 = auVar130 & __LC19;
          iVar138 = auVar123._0_4_ * 0x2000;
          iVar143 = auVar123._4_4_ * 0x2000;
          iVar158 = auVar123._8_4_ * 0x2000;
          iVar174 = auVar123._12_4_ * 0x2000;
          uVar212 = __LC12 + iVar138;
          uVar227 = _UNK_001124b4 + iVar143;
          uVar235 = _UNK_001124b8 + iVar158;
          uVar243 = _UNK_001124bc + iVar174;
          uVar144 = (int)-(uint)(auVar179._0_4_ == __LC14) >> 0x1f;
          uVar154 = (int)-(uint)(auVar179._4_4_ == _UNK_001124c4) >> 0x1f;
          uVar159 = (int)-(uint)(auVar179._8_4_ == _UNK_001124c8) >> 0x1f;
          uVar164 = (int)-(uint)(auVar179._12_4_ == _UNK_001124cc) >> 0x1f;
          uVar184 = (int)-(uint)(auVar179._0_4_ == 0) >> 0x1f;
          uVar207 = (int)-(uint)(auVar179._4_4_ == 0) >> 0x1f;
          uVar222 = (int)-(uint)(auVar179._8_4_ == 0) >> 0x1f;
          uVar231 = (int)-(uint)(auVar179._12_4_ == 0) >> 0x1f;
          auVar123 = pauVar84[2];
          auVar193._4_4_ = _UNK_001124c4;
          auVar193._0_4_ = __LC14;
          auVar193._8_4_ = _UNK_001124c8;
          auVar193._12_4_ = _UNK_001124cc;
          auVar30._10_2_ = 0;
          auVar30._0_10_ = auVar123._0_10_;
          auVar30._12_2_ = auVar123._6_2_;
          auVar42._8_2_ = auVar123._4_2_;
          auVar42._0_8_ = auVar123._0_8_;
          auVar42._10_4_ = auVar30._10_4_;
          auVar80._6_8_ = 0;
          auVar80._0_6_ = auVar42._8_6_;
          auVar52._4_2_ = auVar123._2_2_;
          auVar52._0_4_ = auVar123._0_4_;
          auVar52._6_8_ = SUB148(auVar80 << 0x40,6);
          auVar180._0_4_ = auVar123._0_4_ & 0xffff;
          auVar180._4_10_ = auVar52._4_10_;
          auVar180._14_2_ = 0;
          auVar193 = auVar193 & auVar180;
          auVar123 = __LC11 & auVar180;
          auVar180 = auVar180 & __LC19;
          iVar139 = auVar123._0_4_ * 0x2000;
          iVar151 = auVar123._4_4_ * 0x2000;
          iVar161 = auVar123._8_4_ * 0x2000;
          iVar175 = auVar123._12_4_ * 0x2000;
          uVar213 = __LC12 + iVar139;
          uVar228 = _UNK_001124b4 + iVar151;
          uVar236 = _UNK_001124b8 + iVar161;
          uVar244 = _UNK_001124bc + iVar175;
          uVar110 = (int)-(uint)(auVar193._0_4_ == __LC14) >> 0x1f;
          uVar142 = (int)-(uint)(auVar193._4_4_ == _UNK_001124c4) >> 0x1f;
          uVar150 = (int)-(uint)(auVar193._8_4_ == _UNK_001124c8) >> 0x1f;
          uVar152 = (int)-(uint)(auVar193._12_4_ == _UNK_001124cc) >> 0x1f;
          uVar204 = (int)-(uint)(auVar193._0_4_ == 0) >> 0x1f;
          uVar208 = (int)-(uint)(auVar193._4_4_ == 0) >> 0x1f;
          uVar223 = (int)-(uint)(auVar193._8_4_ == 0) >> 0x1f;
          uVar238 = (int)-(uint)(auVar193._12_4_ == 0) >> 0x1f;
          auVar123 = pauVar84[2];
          uVar214 = auVar123._8_4_;
          auVar185._0_8_ = auVar123._8_8_;
          auVar185._8_4_ = uVar214;
          auVar31._10_2_ = 0;
          auVar31._0_10_ = auVar185._0_10_;
          auVar31._12_2_ = auVar123._14_2_;
          auVar43._8_2_ = auVar123._12_2_;
          auVar43._0_8_ = auVar185._0_8_;
          auVar43._10_4_ = auVar31._10_4_;
          auVar81._6_8_ = 0;
          auVar81._0_6_ = auVar43._8_6_;
          auVar53._4_2_ = auVar123._10_2_;
          auVar53._0_4_ = uVar214;
          auVar53._6_8_ = SUB148(auVar81 << 0x40,6);
          auVar194._0_4_ = uVar214 & 0xffff;
          auVar194._4_10_ = auVar53._4_10_;
          auVar194._14_2_ = 0;
          auVar247 = __LC11 & auVar194;
          auVar123 = __LC19 & auVar194;
          iVar140 = auVar247._0_4_ * 0x2000;
          iVar153 = auVar247._4_4_ * 0x2000;
          iVar163 = auVar247._8_4_ * 0x2000;
          iVar176 = auVar247._12_4_ * 0x2000;
          uVar214 = __LC12 + iVar140;
          uVar229 = _UNK_001124b4 + iVar153;
          uVar237 = _UNK_001124b8 + iVar163;
          uVar245 = _UNK_001124bc + iVar176;
          auVar221._4_4_ = _UNK_001124c4;
          auVar221._0_4_ = __LC14;
          auVar221._8_4_ = _UNK_001124c8;
          auVar221._12_4_ = _UNK_001124cc;
          auVar257._4_4_ = auVar130._4_4_ << 0x10;
          auVar257._0_4_ = auVar130._0_4_ << 0x10;
          auVar257._8_4_ = auVar130._8_4_ << 0x10;
          auVar257._12_4_ = auVar130._12_4_ << 0x10;
          auVar69._4_4_ =
               (uint)((float)(iVar143 + _UNK_001124e4) + _LC18) & uVar207 |
               ~uVar207 & (uVar154 & (uVar227 | _UNK_001124d4) | ~uVar154 & uVar227);
          auVar69._0_4_ =
               (uint)((float)(iVar138 + __LC16) + _LC18) & uVar184 |
               ~uVar184 & (uVar144 & (uVar212 | __LC15) | ~uVar144 & uVar212);
          auVar69._8_4_ =
               (uint)((float)(iVar158 + _UNK_001124e8) + _LC18) & uVar222 |
               ~uVar222 & (uVar159 & (uVar235 | _UNK_001124d8) | ~uVar159 & uVar235);
          auVar69._12_4_ =
               (uint)((float)(iVar174 + _UNK_001124ec) + _LC18) & uVar231 |
               ~uVar231 & (uVar164 & (uVar243 | _UNK_001124dc) | ~uVar164 & uVar243);
          auVar257 = auVar257 | auVar69;
          auVar221 = auVar221 & auVar194;
          uVar207 = (int)-(uint)(auVar221._0_4_ == 0) >> 0x1f;
          uVar222 = (int)-(uint)(auVar221._4_4_ == 0) >> 0x1f;
          uVar231 = (int)-(uint)(auVar221._8_4_ == 0) >> 0x1f;
          uVar212 = (int)-(uint)(auVar221._12_4_ == 0) >> 0x1f;
          uVar154 = (int)-(uint)(auVar221._0_4_ == __LC14) >> 0x1f;
          uVar159 = (int)-(uint)(auVar221._4_4_ == _UNK_001124c4) >> 0x1f;
          uVar164 = (int)-(uint)(auVar221._8_4_ == _UNK_001124c8) >> 0x1f;
          uVar184 = (int)-(uint)(auVar221._12_4_ == _UNK_001124cc) >> 0x1f;
          uVar144 = *(uint *)(pauVar84[3] + 0xc);
          auVar149._4_4_ =
               -(uint)((float)(auVar192._4_4_ << 0x10 |
                              (uint)((float)(iVar132 + _UNK_001124e4) + _LC18) & uVar196 |
                              ~uVar196 & (uVar170 & (uVar226 | _UNK_001124d4) | ~uVar170 & uVar226))
                      < (float)(auVar123._4_4_ << 0x10 |
                               (uint)((float)(iVar153 + _UNK_001124e4) + _LC18) & uVar222 |
                               ~uVar222 & (uVar159 & (uVar229 | _UNK_001124d4) | ~uVar159 & uVar229)
                               ));
          auVar149._0_4_ =
               -(uint)((float)(auVar192._0_4_ << 0x10 |
                              (uint)((float)(iVar117 + __LC16) + _LC18) & uVar183 |
                              ~uVar183 & (uVar165 & (uVar211 | __LC15) | ~uVar165 & uVar211)) <
                      (float)(auVar123._0_4_ << 0x10 |
                             (uint)((float)(iVar140 + __LC16) + _LC18) & uVar207 |
                             ~uVar207 & (uVar154 & (uVar214 | __LC15) | ~uVar154 & uVar214)));
          auVar149._8_4_ =
               -(uint)((float)(auVar192._8_4_ << 0x10 |
                              (uint)((float)(iVar134 + _UNK_001124e8) + _LC18) & uVar199 |
                              ~uVar199 & (uVar171 & (uVar234 | _UNK_001124d8) | ~uVar171 & uVar234))
                      < (float)(auVar123._8_4_ << 0x10 |
                               (uint)((float)(iVar163 + _UNK_001124e8) + _LC18) & uVar231 |
                               ~uVar231 & (uVar164 & (uVar237 | _UNK_001124d8) | ~uVar164 & uVar237)
                               ));
          auVar149._12_4_ =
               -(uint)((float)(auVar192._12_4_ << 0x10 |
                              (uint)((float)(iVar136 + _UNK_001124ec) + _LC18) & uVar206 |
                              ~uVar206 & (uVar172 & (uVar242 | _UNK_001124dc) | ~uVar172 & uVar242))
                      < (float)(auVar123._12_4_ << 0x10 |
                               (uint)((float)(iVar176 + _UNK_001124ec) + _LC18) & uVar212 |
                               ~uVar212 & (uVar184 & (uVar245 | _UNK_001124dc) | ~uVar184 & uVar245)
                               ));
          auVar131._4_4_ =
               -(uint)((float)(auVar129._4_4_ << 0x10 |
                              (uint)((float)(iVar141 + _UNK_001124e4) + _LC18) & uVar205 |
                              ~uVar205 & (uVar195 & (uVar225 | _UNK_001124d4) | ~uVar195 & uVar225))
                      < (float)(auVar180._4_4_ << 0x10 |
                               (uint)((float)(iVar151 + _UNK_001124e4) + _LC18) & uVar208 |
                               ~uVar208 & (uVar142 & (uVar228 | _UNK_001124d4) | ~uVar142 & uVar228)
                               ));
          auVar131._0_4_ =
               -(uint)((float)(auVar129._0_4_ << 0x10 |
                              (uint)((float)(iVar137 + __LC16) + _LC18) & uVar203 |
                              ~uVar203 & (uVar182 & (uVar210 | __LC15) | ~uVar182 & uVar210)) <
                      (float)(auVar180._0_4_ << 0x10 |
                             (uint)((float)(iVar139 + __LC16) + _LC18) & uVar204 |
                             ~uVar204 & (uVar110 & (uVar213 | __LC15) | ~uVar110 & uVar213)));
          auVar131._8_4_ =
               -(uint)((float)(auVar129._8_4_ << 0x10 |
                              (uint)((float)(iVar156 + _UNK_001124e8) + _LC18) & uVar209 |
                              ~uVar209 & (uVar202 & (uVar233 | _UNK_001124d8) | ~uVar202 & uVar233))
                      < (float)(auVar180._8_4_ << 0x10 |
                               (uint)((float)(iVar161 + _UNK_001124e8) + _LC18) & uVar223 |
                               ~uVar223 & (uVar150 & (uVar236 | _UNK_001124d8) | ~uVar150 & uVar236)
                               ));
          auVar131._12_4_ =
               -(uint)((float)(auVar129._12_4_ << 0x10 |
                              (uint)((float)(iVar173 + _UNK_001124ec) + _LC18) & uVar230 |
                              ~uVar230 & (uVar201 & (uVar241 | _UNK_001124dc) | ~uVar201 & uVar241))
                      < (float)(auVar180._12_4_ << 0x10 |
                               (uint)((float)(iVar175 + _UNK_001124ec) + _LC18) & uVar238 |
                               ~uVar238 & (uVar152 & (uVar244 | _UNK_001124dc) | ~uVar152 & uVar244)
                               ));
          auVar148._4_4_ =
               -(uint)((float)(auVar168._4_4_ << 0x10 |
                              (uint)((float)(iVar118 + _UNK_001124e4) + _LC18) & uVar157 |
                              ~uVar157 & (~uVar198 & uVar224 | uVar198 & (uVar224 | _UNK_001124d4)))
                      < auVar257._4_4_);
          auVar148._0_4_ =
               -(uint)((float)(auVar168._0_4_ << 0x10 |
                              (uint)((float)(iVar116 + __LC16) + _LC18) & uVar155 |
                              ~uVar155 & (~uVar181 & uVar239 | uVar181 & (uVar239 | __LC15))) <
                      auVar257._0_4_);
          auVar148._8_4_ =
               -(uint)((float)(auVar168._8_4_ << 0x10 |
                              (uint)((float)(iVar133 + _UNK_001124e8) + _LC18) & uVar160 |
                              ~uVar160 & (~uVar197 & uVar232 | uVar197 & (uVar232 | _UNK_001124d8)))
                      < auVar257._8_4_);
          auVar148._12_4_ =
               -(uint)((float)(auVar168._12_4_ << 0x10 |
                              (uint)((float)(iVar135 + _UNK_001124ec) + _LC18) & uVar162 |
                              ~uVar162 & (~uVar200 & uVar240 | uVar200 & (uVar240 | _UNK_001124dc)))
                      < auVar257._12_4_);
          auVar149 = auVar148 | auVar131 | auVar149;
          uVar154 = movmskps((int)plVar96,auVar149);
          plVar96 = (long *)(ulong)uVar154;
          uVar154 = auVar149._8_4_ >> 0x1f;
          uVar164 = auVar149._4_4_ >> 0x1f;
          uVar159 = *(uint *)(pauVar84[3] + 8) & uVar154 | ~uVar154 & uVar144;
          uVar184 = auVar149._0_4_ >> 0x1f;
          uVar154 = *(uint *)(pauVar84[3] + 4) & uVar164 | ~uVar164 & uVar159;
          uVar159 = uVar159 & uVar164 | ~uVar164 & uVar144;
          auVar115._0_4_ = *(uint *)pauVar84[3] & uVar184;
          auVar115._4_4_ = uVar154 & uVar184;
          auVar115._8_4_ = uVar159 & uVar184;
          auVar115._12_4_ = uVar144 & uVar184;
          auVar169._0_4_ = ~uVar184 & uVar154;
          auVar169._4_4_ = ~uVar184 & uVar159;
          auVar169._8_4_ = ~uVar184 & uVar144;
          auVar169._12_4_ = ~uVar184 & uVar144;
          auVar115 = auVar115 | auVar169;
          iVar116 = __popcountdi2(plVar96);
          local_648._0_4_ = auVar115._0_4_;
          local_648._4_4_ = auVar115._4_4_;
          uStack_640._0_4_ = auVar115._8_4_;
          uStack_640._4_4_ = auVar115._12_4_;
          lVar101 = (long)iVar82 * 4;
          *(undefined4 *)((long)&local_258 + lVar101) = local_648._0_4_;
          *(undefined4 *)((long)&local_258 + lVar101 + 4) = local_648._4_4_;
          *(undefined4 *)((long)&uStack_250 + lVar101) = (undefined4)uStack_640;
          *(undefined4 *)((long)&uStack_250 + lVar101 + 4) = uStack_640._4_4_;
          local_58 = iVar116 + local_58 + -1;
        }
        else {
          if (uVar154 != 0xf) {
            piVar91 = (int *)((ulong)((uVar144 & 0xfffffff) << 2) + lVar86);
            puVar94 = (uint *)(piVar91 + 1);
            lVar95 = (ulong)(*piVar91 * 4 & 0x7ffffffc) + (long)piVar91;
            lVar101 = lVar95 + 4;
            puVar90 = puVar94 + (ulong)(uVar154 + 3 >> 2) * 4;
            pauVar84 = local_5d8;
            puVar105 = puVar94;
            uVar144 = uVar154;
            do {
              uVar159 = *puVar105;
              uVar164 = puVar105[2];
              uVar184 = puVar105[1];
              uVar98 = (ulong)((uVar159 >> 0x18) << 3);
              uVar106 = (ulong)(uVar159 >> 0xd & 0x7f8);
              uVar110 = *(uint *)(lVar95 + uVar98);
              uVar97 = (ulong)((uVar159 >> 8 & 0xff) << 3);
              uVar142 = *(uint *)(lVar95 + uVar106);
              uVar150 = *(uint *)(lVar101 + uVar98);
              uVar99 = (ulong)((uVar184 >> 0x18) << 3);
              uVar100 = (ulong)(uVar184 >> 0xd & 0x7f8);
              uVar98 = (ulong)((uVar184 >> 8 & 0xff) << 3);
              uVar152 = *(uint *)(lVar95 + uVar97);
              uVar155 = *(uint *)(lVar95 + uVar99);
              uVar104 = (ulong)(uVar159 * 8 & 0x7f8);
              uVar159 = *(uint *)(lVar101 + uVar99);
              uVar157 = *(uint *)(lVar95 + uVar104);
              uVar160 = *(uint *)(lVar101 + uVar104);
              uVar162 = *(uint *)(lVar101 + uVar106);
              uVar165 = *(uint *)(lVar101 + uVar97);
              uVar99 = (ulong)(uVar184 * 8 & 0x7f8);
              uVar184 = *(uint *)(lVar95 + uVar99);
              uVar170 = *(uint *)(lVar101 + uVar99);
              uVar97 = (ulong)((uVar164 >> 0x18) * 8);
              uVar99 = (ulong)(uVar164 >> 0xd & 0x7f8);
              uVar171 = *(uint *)(lVar95 + uVar100);
              uVar172 = *(uint *)(lVar95 + uVar98);
              uVar181 = *(uint *)(lVar101 + uVar100);
              uVar182 = *(uint *)(lVar101 + uVar98);
              uVar98 = (ulong)(uVar164 * 8 & 0x7f8);
              plVar96 = (long *)(ulong)((uVar164 >> 8 & 0xff) << 3);
              uVar164 = *(uint *)(lVar95 + uVar99);
              uVar183 = *(uint *)(lVar95 + uVar97);
              uVar198 = *(uint *)(lVar95 + uVar98);
              uVar195 = *(uint *)(lVar101 + uVar99);
              uVar196 = *(uint *)(lVar101 + uVar97);
              uVar197 = *(uint *)(lVar101 + uVar98);
              local_4b8._4_4_ = (float)(uVar152 >> 0x15 | (uVar165 >> 0x15) << 0xb) * fVar7 + fVar4;
              local_4b8._0_4_ = (float)(int)(uVar152 & _UNK_00112494) * fVar6 + fVar3;
              local_4b8._8_4_ = (float)(int)(uVar165 & _UNK_00112494) * fVar8 + fVar5;
              local_4b8._12_4_ = 0;
              local_498._4_4_ = (float)(uVar110 >> 0x15 | (uVar150 >> 0x15) << 0xb) * fVar7 + fVar4;
              local_498._0_4_ = (float)(int)(uVar110 & _UNK_0011249c) * fVar6 + fVar3;
              local_498._8_4_ = (float)(int)(uVar150 & _UNK_0011249c) * fVar8 + fVar5;
              local_498._12_4_ = 0;
              local_4c8._4_4_ = (float)(uVar157 >> 0x15 | (uVar160 >> 0x15) << 0xb) * fVar7 + fVar4;
              local_4c8._0_4_ = (float)(int)(uVar157 & __LC9) * fVar6 + fVar3;
              local_4c8._8_4_ = (float)(int)(uVar160 & __LC9) * fVar8 + fVar5;
              local_4c8._12_4_ = 0;
              local_4a8._4_4_ = (float)(uVar142 >> 0x15 | (uVar162 >> 0x15) << 0xb) * fVar7 + fVar4;
              local_4a8._0_4_ = (float)(int)(uVar142 & _UNK_00112498) * fVar6 + fVar3;
              local_4a8._8_4_ = (float)(int)(uVar162 & _UNK_00112498) * fVar8 + fVar5;
              local_4a8._12_4_ = 0;
              local_478._4_4_ = (float)(uVar172 >> 0x15 | (uVar182 >> 0x15) << 0xb) * fVar7 + fVar4;
              local_478._0_4_ = (float)(int)(uVar172 & _UNK_00112494) * fVar6 + fVar3;
              local_478._8_4_ = (float)(int)(uVar182 & _UNK_00112494) * fVar8 + fVar5;
              local_478._12_4_ = 0;
              local_488._4_4_ = (float)(uVar184 >> 0x15 | (uVar170 >> 0x15) << 0xb) * fVar7 + fVar4;
              local_488._0_4_ = (float)(int)(uVar184 & __LC9) * fVar6 + fVar3;
              register0x000013c8 = (float)(int)(uVar170 & __LC9) * fVar8 + fVar5;
              register0x000013cc = 0;
              local_458._4_4_ = (float)(uVar155 >> 0x15 | (uVar159 >> 0x15) << 0xb) * fVar7 + fVar4;
              local_458._0_4_ = (float)(int)(uVar155 & _UNK_0011249c) * fVar6 + fVar3;
              local_458._8_4_ = (float)(int)(uVar159 & _UNK_0011249c) * fVar8 + fVar5;
              local_458._12_4_ = 0;
              local_468._4_4_ = (float)(uVar171 >> 0x15 | (uVar181 >> 0x15) << 0xb) * fVar7 + fVar4;
              local_468._0_4_ = (float)(int)(uVar171 & _UNK_00112498) * fVar6 + fVar3;
              local_468._8_4_ = (float)(int)(uVar181 & _UNK_00112498) * fVar8 + fVar5;
              local_468._12_4_ = 0;
              local_438._4_4_ =
                   (float)(*(uint *)(lVar95 + (long)plVar96) >> 0x15 |
                          (*(uint *)(lVar101 + (long)plVar96) >> 0x15) << 0xb) * fVar7 + fVar4;
              local_438._0_4_ =
                   (float)(int)(*(uint *)(lVar95 + (long)plVar96) & _UNK_00112494) * fVar6 + fVar3;
              uStack_430._0_4_ =
                   (float)(int)(*(uint *)(lVar101 + (long)plVar96) & _UNK_00112494) * fVar8 + fVar5;
              uStack_430._4_4_ = 0.0;
              local_448._4_4_ = (float)(uVar198 >> 0x15 | (uVar197 >> 0x15) << 0xb) * fVar7 + fVar4;
              local_448._0_4_ = (float)(int)(uVar198 & __LC9) * fVar6 + fVar3;
              uStack_440._0_4_ = (float)(int)(uVar197 & __LC9) * fVar8 + fVar5;
              uStack_440._4_4_ = 0;
              local_428._4_4_ = (float)(uVar164 >> 0x15 | (uVar195 >> 0x15) << 0xb) * fVar7 + fVar4;
              local_428._0_4_ = (float)(int)(uVar164 & _UNK_00112498) * fVar6 + fVar3;
              local_428._8_4_ = (float)(int)(uVar195 & _UNK_00112498) * fVar8 + fVar5;
              local_428._12_4_ = 0;
              local_418._4_4_ = (float)(uVar183 >> 0x15 | (uVar196 >> 0x15) << 0xb) * fVar7 + fVar4;
              local_418._0_4_ = (float)(int)(uVar183 & _UNK_0011249c) * fVar6 + fVar3;
              uStack_410._0_4_ = (float)(int)(uVar196 & _UNK_0011249c) * fVar8 + fVar5;
              uStack_410._4_4_ = 0;
              uVar159 = uVar144;
              if (0 < (int)uVar144) {
                plVar96 = (long *)(ulong)uVar144;
                lVar102 = 0;
                pauVar92 = pauVar84;
                do {
                  pauVar1 = (undefined1 (*) [16])(local_4c8 + lVar102);
                  auVar123 = *(undefined1 (*) [16])(local_488 + lVar102);
                  uVar159 = (int)plVar96 - 1;
                  plVar96 = (long *)(ulong)uVar159;
                  uVar17 = *(undefined8 *)(local_448 + lVar102);
                  uVar18 = *(undefined8 *)(local_448 + lVar102 + 8);
                  pauVar84 = pauVar92 + 3;
                  lVar102 = lVar102 + 0x10;
                  *pauVar92 = *pauVar1;
                  pauVar92[1] = auVar123;
                  *(undefined8 *)pauVar92[2] = uVar17;
                  *(undefined8 *)(pauVar92[2] + 8) = uVar18;
                  if (3 < (int)(uVar144 - uVar159)) break;
                  pauVar92 = pauVar84;
                } while (0 < (int)uVar159);
              }
              uVar144 = uVar159;
              puVar105 = puVar105 + 4;
            } while (puVar105 < puVar90);
            pbVar109 = local_48;
            pbVar107 = pbVar109;
            uVar144 = uVar154;
            do {
              if (0 < (int)uVar144) {
                lVar101 = 1;
                do {
                  lVar95 = lVar101;
                  uVar144 = uVar144 - 1;
                  bVar21 = (int)lVar95 < 4;
                  plVar96 = (long *)CONCAT71((int7)((ulong)plVar96 >> 8),bVar21);
                  pbVar107[lVar95 + -1] = *(byte *)((long)puVar94 + lVar95 + 0xb);
                  lVar101 = lVar95 + 1;
                } while (bVar21 && 0 < (int)uVar144);
                pbVar107 = pbVar107 + lVar95;
              }
              puVar94 = puVar94 + 4;
            } while (puVar94 < puVar90);
            if (local_5d8 < local_5d8 + (int)(uVar154 * 3)) {
              local_558 = (float)uVar9;
              fStack_554 = (float)((ulong)uVar9 >> 0x20);
              fStack_550 = (float)uVar10;
              fStack_54c = (float)((ulong)uVar10 >> 0x20);
              pauVar84 = local_5d8;
              do {
                bVar13 = *pbVar109;
                uVar98 = 1;
                do {
                  pauVar92 = pauVar84 + (uVar98 - 1);
                  fVar66 = *(float *)*pauVar92;
                  fVar67 = *(float *)(*pauVar92 + 4);
                  fVar68 = *(float *)(*pauVar92 + 8);
                  local_648._4_4_ =
                       fVar68 * fStack_600 * fVar55 +
                       fVar66 * local_608 * fVar63 + fVar67 * fStack_604 * fVar59 + fStack_554;
                  local_648._0_4_ =
                       fVar68 * fStack_600 * fVar54 +
                       fVar66 * local_608 * fVar62 + fVar67 * fStack_604 * fVar58 + local_558;
                  uStack_640._0_4_ =
                       fVar68 * fStack_600 * fVar56 +
                       fVar66 * local_608 * fVar64 + fVar67 * fStack_604 * fVar60 + fStack_550;
                  uStack_640._4_4_ =
                       fVar68 * fStack_600 * fVar57 +
                       fVar66 * local_608 * fVar65 + fVar67 * fStack_604 * fVar61 + fStack_54c;
                  pauVar92 = pauVar84 + (uint)((int)uVar98 + (int)((uVar98 & 0xffffffff) / 3) * -3);
                  fVar66 = *(float *)*pauVar92;
                  fVar67 = *(float *)(*pauVar92 + 4);
                  fVar68 = *(float *)(*pauVar92 + 8);
                  local_638 = CONCAT44(fVar68 * fStack_600 * fVar55 +
                                       fVar66 * local_608 * fVar63 + fVar67 * fStack_604 * fVar59 +
                                       fStack_554,
                                       fVar68 * fStack_600 * fVar54 +
                                       fVar66 * local_608 * fVar62 + fVar67 * fStack_604 * fVar58 +
                                       local_558);
                  if ((bVar13 >> ((int)uVar98 + 4U & 0x1f) & 1) == 0) {
                    plVar96 = param_1;
                    (**(code **)(*param_1 + 0x10))
                              (local_648,uStack_640,local_638,
                               CONCAT44(fVar68 * fStack_600 * fVar57 +
                                        fVar66 * local_608 * fVar65 + fVar67 * fStack_604 * fVar61 +
                                        fStack_54c,
                                        fVar68 * fStack_600 * fVar56 +
                                        fVar66 * local_608 * fVar64 + fVar67 * fStack_604 * fVar60 +
                                        fStack_550),param_1,(undefined4)Color::sGrey);
                  }
                  else {
                    plVar96 = param_1;
                    JPH::DebugRenderer::DrawArrow
                              (local_648,uStack_640,local_638,param_1,(undefined4)Color::sGreen);
                  }
                  uVar98 = uVar98 + 1;
                } while (uVar98 != 4);
                pauVar84 = pauVar84 + 3;
                pbVar109 = pbVar109 + 1;
              } while (pauVar84 < local_5d8 + (int)(uVar154 * 3));
            }
          }
          local_58 = iVar82 + -1;
        }
        if (local_58 < 0) goto LAB_00109d40;
        uVar144 = *(uint *)((long)&local_258 + (long)local_58 * 4);
      } while( true );
    }
  }
  else if (piVar91 == (int *)0x0) {
    this[0x58] = sDrawTriangleGroups;
    this[0x59] = param_7;
  }
  else {
    LOCK();
    *piVar91 = *piVar91 + -1;
    UNLOCK();
    if (*piVar91 == 0) {
      plVar96 = *(long **)(piVar91 + 6);
      if (plVar96 != (long *)0x0) {
        if ((*(long *)(piVar91 + 2) != 0) &&
           (plVar93 = plVar96 + *(long *)(piVar91 + 2) * 2, plVar96 < plVar93)) {
          do {
            if ((long *)*plVar96 != (long *)0x0) {
              (**(code **)(*(long *)*plVar96 + 0x18))();
            }
            plVar96 = plVar96 + 2;
          } while (plVar96 < plVar93);
          plVar96 = *(long **)(piVar91 + 6);
        }
        piVar91[2] = 0;
        piVar91[3] = 0;
        (*Free)(plVar96);
      }
      local_648 = (undefined1  [8])param_2;
      (*Free)(piVar91);
    }
    MVar11 = sDrawTriangleGroups;
    *(undefined8 *)(this + 0x50) = 0;
    this[0x58] = MVar11;
    this[0x59] = param_7;
  }
  uVar98 = 0;
  puVar90 = (uint *)0x0;
  puVar94 = *(uint **)(this + 0x48);
  MVar11 = this[0x59];
  local_58 = 0;
  fVar3 = (float)puVar94[8];
  MVar12 = this[0x58];
  fVar4 = (float)puVar94[9];
  local_598 = 0;
  uVar144 = puVar94[6];
  fVar5 = (float)puVar94[0xc];
  fVar6 = (float)puVar94[10];
  fVar7 = (float)puVar94[0xd];
  fVar8 = (float)puVar94[0xb];
  uVar110 = uVar144 >> 0x1c;
  local_258 = CONCAT44(local_258._4_4_,uVar144);
  local_4fc = 0;
  puVar105 = puVar94;
  uVar154 = __LC9;
  uVar159 = _UNK_00112494;
  uVar164 = _UNK_00112498;
  uVar184 = _UNK_0011249c;
  if (uVar110 == 0) goto LAB_0010903f;
  do {
    iVar82 = local_58;
    uVar99 = uVar98;
    if (uVar110 != 0xf) {
      piVar91 = (int *)((ulong)((uVar144 & 0xfffffff) << 2) + (long)puVar94);
      puVar103 = (uint *)(piVar91 + 1);
      local_648 = (undefined1  [8])puVar103;
      uVar142 = *piVar91 * 4 & 0x7ffffffc;
      lVar86 = (ulong)uVar142 + 4;
      puVar87 = puVar103 + (ulong)(uVar110 + 3 >> 2) * 4;
      pfVar89 = local_3d8;
      uVar144 = uVar110;
      do {
        uVar150 = *(uint *)local_648;
        uVar152 = *(uint *)((long)local_648 + 4);
        uVar155 = *(uint *)((long)local_648 + 8);
        uVar106 = (ulong)(uVar150 >> 0xd & 0x7f8);
        uVar97 = (ulong)((uVar150 >> 0x18) << 3);
        uVar157 = *(uint *)((long)piVar91 + uVar97 + uVar142);
        uVar100 = (ulong)((uVar150 >> 8 & 0xff) << 3);
        uVar160 = *(uint *)((long)piVar91 + uVar106 + uVar142);
        uVar162 = *(uint *)((long)piVar91 + uVar97 + lVar86);
        uVar104 = (ulong)(uVar150 * 8 & 0x7f8);
        uVar97 = (ulong)((uVar152 >> 0x18) << 3);
        uVar150 = *(uint *)((long)piVar91 + uVar104 + uVar142);
        uVar165 = *(uint *)((long)piVar91 + uVar100 + uVar142);
        uVar108 = (ulong)(uVar152 >> 0xd & 0x7f8);
        uVar170 = *(uint *)((long)piVar91 + uVar97 + uVar142);
        uVar171 = *(uint *)((long)piVar91 + uVar97 + lVar86);
        uVar172 = *(uint *)((long)piVar91 + uVar104 + lVar86);
        uVar181 = *(uint *)((long)piVar91 + uVar106 + lVar86);
        uVar97 = (ulong)(uVar155 >> 0xd & 0x7f8);
        uVar182 = *(uint *)((long)piVar91 + uVar100 + lVar86);
        uVar104 = (ulong)((uVar155 >> 0x18) << 3);
        uVar100 = (ulong)((uVar152 >> 8 & 0xff) * 8);
        uVar106 = (ulong)(uVar152 * 8 & 0x7f8);
        uVar152 = *(uint *)((long)piVar91 + uVar106 + uVar142);
        uVar183 = *(uint *)((long)piVar91 + uVar108 + uVar142);
        uVar198 = *(uint *)((long)piVar91 + uVar100 + uVar142);
        uVar195 = *(uint *)((long)piVar91 + uVar106 + lVar86);
        uVar196 = *(uint *)((long)piVar91 + uVar108 + lVar86);
        uVar197 = *(uint *)((long)piVar91 + uVar100 + lVar86);
        uVar202 = *(uint *)((long)piVar91 + uVar97 + uVar142);
        uVar106 = (ulong)(uVar155 * 8 & 0x7f8);
        uVar100 = (ulong)((uVar155 >> 8 & 0xff) << 3);
        uVar155 = *(uint *)((long)piVar91 + uVar106 + uVar142);
        uVar199 = *(uint *)((long)piVar91 + uVar104 + uVar142);
        uVar200 = *(uint *)((long)piVar91 + uVar100 + uVar142);
        uVar201 = *(uint *)((long)piVar91 + uVar97 + lVar86);
        uVar206 = *(uint *)((long)piVar91 + uVar104 + lVar86);
        uVar203 = *(uint *)((long)piVar91 + uVar100 + lVar86);
        uVar204 = *(uint *)((long)piVar91 + uVar106 + lVar86);
        local_4b8._4_4_ = (float)(uVar165 >> 0x15 | (uVar182 >> 0x15) << 0xb) * fVar5 + fVar4;
        local_4b8._0_4_ = (float)(int)(uVar165 & uVar159) * fVar8 + fVar3;
        local_4b8._8_4_ = (float)(int)(uVar182 & uVar159) * fVar7 + fVar6;
        local_4b8._12_4_ = 0;
        local_4c8._4_4_ = (float)(uVar150 >> 0x15 | (uVar172 >> 0x15) << 0xb) * fVar5 + fVar4;
        local_4c8._0_4_ = (float)(int)(uVar150 & uVar154) * fVar8 + fVar3;
        local_4c8._8_4_ = (float)(int)(uVar172 & uVar154) * fVar7 + fVar6;
        local_4c8._12_4_ = 0;
        local_498._4_4_ = (float)(uVar157 >> 0x15 | (uVar162 >> 0x15) << 0xb) * fVar5 + fVar4;
        local_498._0_4_ = (float)(int)(uVar157 & uVar184) * fVar8 + fVar3;
        local_498._8_4_ = (float)(int)(uVar162 & uVar184) * fVar7 + fVar6;
        local_498._12_4_ = 0;
        local_4a8._4_4_ = (float)(uVar160 >> 0x15 | (uVar181 >> 0x15) << 0xb) * fVar5 + fVar4;
        local_4a8._0_4_ = (float)(int)(uVar160 & uVar164) * fVar8 + fVar3;
        local_4a8._8_4_ = (float)(int)(uVar181 & uVar164) * fVar7 + fVar6;
        local_4a8._12_4_ = 0;
        local_478._4_4_ = (float)(uVar198 >> 0x15 | (uVar197 >> 0x15) << 0xb) * fVar5 + fVar4;
        local_478._0_4_ = (float)(int)(uVar198 & uVar159) * fVar8 + fVar3;
        local_478._8_4_ = (float)(int)(uVar197 & uVar159) * fVar7 + fVar6;
        local_478._12_4_ = 0;
        local_458._4_4_ = (float)(uVar170 >> 0x15 | (uVar171 >> 0x15) << 0xb) * fVar5 + fVar4;
        local_458._0_4_ = (float)(int)(uVar170 & uVar184) * fVar8 + fVar3;
        local_458._8_4_ = (float)(int)(uVar171 & uVar184) * fVar7 + fVar6;
        local_458._12_4_ = 0;
        local_468._4_4_ = (float)(uVar183 >> 0x15 | (uVar196 >> 0x15) << 0xb) * fVar5 + fVar4;
        local_468._0_4_ = (float)(int)(uVar183 & uVar164) * fVar8 + fVar3;
        local_468._8_4_ = (float)(int)(uVar196 & uVar164) * fVar7 + fVar6;
        local_468._12_4_ = 0;
        local_438._4_4_ = (float)(uVar200 >> 0x15 | (uVar203 >> 0x15) << 0xb) * fVar5 + fVar4;
        local_438._0_4_ = (float)(int)(uVar200 & uVar159) * fVar8 + fVar3;
        uStack_430._0_4_ = (float)(int)(uVar203 & uVar159) * fVar7 + fVar6;
        uStack_430._4_4_ = 0.0;
        local_488._4_4_ = (float)(uVar152 >> 0x15 | (uVar195 >> 0x15) << 0xb) * fVar5 + fVar4;
        local_488._0_4_ = (float)(int)(uVar152 & uVar154) * fVar8 + fVar3;
        register0x000013c8 = (float)(int)(uVar195 & uVar154) * fVar7 + fVar6;
        register0x000013cc = 0;
        local_448._4_4_ = (float)(uVar155 >> 0x15 | (uVar204 >> 0x15) << 0xb) * fVar5 + fVar4;
        local_448._0_4_ = (float)(int)(uVar155 & uVar154) * fVar8 + fVar3;
        uStack_440._0_4_ = (float)(int)(uVar204 & uVar154) * fVar7 + fVar6;
        uStack_440._4_4_ = 0;
        local_418._4_4_ = (float)(uVar199 >> 0x15 | (uVar206 >> 0x15) << 0xb) * fVar5 + fVar4;
        local_418._0_4_ = (float)(int)(uVar199 & uVar184) * fVar8 + fVar3;
        uStack_410._0_4_ = (float)(int)(uVar206 & uVar184) * fVar7 + fVar6;
        uStack_410._4_4_ = 0;
        local_428._4_4_ = (float)(uVar202 >> 0x15 | (uVar201 >> 0x15) << 0xb) * fVar5 + fVar4;
        local_428._0_4_ = (float)(int)(uVar202 & uVar164) * fVar8 + fVar3;
        local_428._8_4_ = (float)(int)(uVar201 & uVar164) * fVar7 + fVar6;
        local_428._12_4_ = 0;
        uVar150 = uVar144;
        if (0 < (int)uVar144) {
          lVar101 = 0;
          pfVar88 = pfVar89;
          do {
            uVar9 = *(undefined8 *)(local_4c8 + lVar101 + 8);
            fVar54 = *(float *)(local_488 + lVar101);
            fVar55 = *(float *)(local_488 + lVar101 + 4);
            fVar56 = *(float *)(local_488 + lVar101 + 8);
            fVar57 = *(float *)(local_488 + lVar101 + 0xc);
            uVar150 = uVar150 - 1;
            pfVar89 = pfVar88 + 0xc;
            *(undefined8 *)pfVar88 = *(undefined8 *)(local_4c8 + lVar101);
            *(undefined8 *)(pfVar88 + 2) = uVar9;
            auVar123 = *(undefined1 (*) [16])((long)local_448 + lVar101);
            lVar101 = lVar101 + 0x10;
            pfVar88[4] = fVar54;
            pfVar88[5] = fVar55;
            pfVar88[6] = fVar56;
            pfVar88[7] = fVar57;
            *(undefined1 (*) [16])(pfVar88 + 8) = auVar123;
            if (3 < (int)(uVar144 - uVar150)) break;
            pfVar88 = pfVar89;
          } while (0 < (int)uVar150);
        }
        uVar144 = uVar150;
        puVar105 = (uint *)((long)local_648 + 0x10);
        local_648 = (undefined1  [8])puVar105;
      } while (puVar105 < puVar87);
      if (MVar12 == (MeshShape)0x0) {
        puVar105 = puVar87;
        uVar83 = (undefined4)Color::sWhite;
        if (MVar11 != (MeshShape)0x0) {
          if (*(long *)(this + 0x20) != 0) {
            pbVar109 = local_48;
            uVar144 = uVar110;
            do {
              if (0 < (int)uVar144) {
                lVar86 = 1;
                do {
                  lVar101 = lVar86;
                  uVar144 = uVar144 - 1;
                  pbVar109[lVar101 + -1] = *(byte *)((long)puVar103 + lVar101 + 0xb);
                  puVar105 = (uint *)(ulong)(0 < (int)uVar144);
                  lVar86 = lVar101 + 1;
                } while ((int)lVar101 < 4 && 0 < (int)uVar144);
                pbVar109 = pbVar109 + lVar101;
              }
              puVar103 = puVar103 + 4;
            } while (puVar103 < puVar87);
            pfVar89 = local_3d8 + (long)(int)(uVar110 * 3) * 4;
            if (local_3d8 < pfVar89) {
              local_648 = (undefined1  [8])local_448;
              lVar86 = uVar98 * 0x6c;
              uVar97 = local_598;
              pfVar88 = local_3d8;
              puVar103 = puVar90;
              do {
                pTVar16 = *(Triangle **)pfVar88;
                uVar17 = *(undefined8 *)(pfVar88 + 2);
                uVar9 = *(undefined8 *)(pfVar88 + 4);
                uVar18 = *(undefined8 *)(pfVar88 + 6);
                uVar10 = *(undefined8 *)(pfVar88 + 8);
                uVar19 = *(undefined8 *)(pfVar88 + 10);
                pcVar20 = *(code **)(**(long **)(*(long *)(this + 0x30) +
                                                (ulong)(local_48[uVar99 - uVar98] & 0x1f) * 8) +
                                    0x28);
                uVar83 = (undefined4)Color::sGrey;
                if (pcVar20 != PhysicsMaterial::GetDebugColor) {
                  uVar83 = (*pcVar20)();
                }
                uVar99 = uVar99 + 1;
                puVar105 = (uint *)local_448;
                JPH::DebugRenderer::Triangle::Triangle
                          (pTVar16,uVar17,uVar9,uVar18,uVar10,uVar19,local_448,uVar83);
                local_598 = uVar97;
                puVar90 = puVar103;
                if (uVar97 < uVar99) {
                  local_598 = uVar99;
                  if (uVar99 <= uVar97 * 2) {
                    local_598 = uVar97 * 2;
                  }
                  puVar90 = (uint *)(*Reallocate)(puVar103,uVar97 * 0x6c,local_598 * 0x6c);
                  puVar105 = puVar103;
                }
                uVar184 = _UNK_0011249c;
                uVar164 = _UNK_00112498;
                uVar159 = _UNK_00112494;
                uVar154 = __LC9;
                pfVar88 = pfVar88 + 0xc;
                *(undefined8 *)((long)puVar90 + lVar86) = local_448;
                ((undefined8 *)((long)puVar90 + lVar86))[1] = uStack_440;
                puVar14 = (undefined8 *)((long)puVar90 + lVar86 + 0x10);
                *puVar14 = local_438;
                puVar14[1] = uStack_430;
                puVar14 = (undefined8 *)((long)puVar90 + lVar86 + 0x20);
                *puVar14 = local_428._0_8_;
                puVar14[1] = local_428._8_8_;
                puVar14 = (undefined8 *)((long)puVar90 + lVar86 + 0x30);
                *puVar14 = local_418;
                puVar14[1] = uStack_410;
                puVar2 = (undefined4 *)((long)puVar90 + lVar86 + 0x40);
                *puVar2 = local_408;
                puVar2[1] = uStack_404;
                puVar2[2] = uStack_400;
                puVar2[3] = uStack_3fc;
                auVar123._12_4_ = uStack_3ec;
                auVar123._0_12_ = local_3f8;
                *(undefined1 (*) [16])((long)puVar90 + lVar86 + 0x50) = auVar123;
                auVar247._4_12_ = auStack_3e8;
                auVar247._0_4_ = uStack_3ec;
                *(undefined1 (*) [16])((long)puVar90 + lVar86 + 0x5c) = auVar247;
                lVar86 = lVar86 + 0x6c;
                uVar97 = local_598;
                puVar103 = puVar90;
              } while (pfVar88 < pfVar89);
            }
            goto LAB_0010901a;
          }
          puVar105 = PhysicsMaterial::sDefault;
          uVar83 = (undefined4)Color::sGrey;
          if (*(code **)(*(long *)PhysicsMaterial::sDefault + 0x28) !=
              PhysicsMaterial::GetDebugColor) {
            local_648 = (undefined1  [8])uVar98;
            uVar83 = (**(code **)(*(long *)PhysicsMaterial::sDefault + 0x28))();
            uVar154 = __LC9;
            uVar159 = _UNK_00112494;
            uVar164 = _UNK_00112498;
            uVar184 = _UNK_0011249c;
          }
        }
      }
      else {
        puVar105 = (uint *)(ulong)local_4fc;
        local_648 = (undefined1  [8])uVar98;
        uVar83 = JPH::Color::sGetDistinctColor(local_4fc);
        uVar154 = __LC9;
        uVar159 = _UNK_00112494;
        uVar164 = _UNK_00112498;
        uVar184 = _UNK_0011249c;
        local_4fc = local_4fc + 1;
      }
      pfVar89 = local_3d8 + (long)(int)(uVar110 * 3) * 4;
      if (local_3d8 < pfVar89) {
        local_648 = (undefined1  [8])local_448;
        lVar86 = uVar98 * 0x6c;
        puVar103 = puVar90;
        uVar98 = local_598;
        pfVar88 = local_3d8;
        do {
          uVar99 = uVar99 + 1;
          puVar105 = (uint *)local_448;
          JPH::DebugRenderer::Triangle::Triangle
                    (*(Triangle **)pfVar88,*(undefined8 *)(pfVar88 + 2),*(undefined8 *)(pfVar88 + 4)
                     ,*(undefined8 *)(pfVar88 + 6),*(undefined8 *)(pfVar88 + 8),
                     *(undefined8 *)(pfVar88 + 10),local_448,uVar83);
          puVar90 = puVar103;
          local_598 = uVar98;
          if (uVar98 < uVar99) {
            local_598 = uVar99;
            if (uVar99 <= uVar98 * 2) {
              local_598 = uVar98 * 2;
            }
            puVar90 = (uint *)(*Reallocate)(puVar103,uVar98 * 0x6c,local_598 * 0x6c);
            puVar105 = puVar103;
          }
          uVar184 = _UNK_0011249c;
          uVar164 = _UNK_00112498;
          uVar159 = _UNK_00112494;
          uVar154 = __LC9;
          pfVar88 = pfVar88 + 0xc;
          *(undefined8 *)((long)puVar90 + lVar86) = local_448;
          ((undefined8 *)((long)puVar90 + lVar86))[1] = uStack_440;
          puVar14 = (undefined8 *)((long)puVar90 + lVar86 + 0x10);
          *puVar14 = local_438;
          puVar14[1] = uStack_430;
          puVar14 = (undefined8 *)((long)puVar90 + lVar86 + 0x20);
          *puVar14 = local_428._0_8_;
          puVar14[1] = local_428._8_8_;
          puVar14 = (undefined8 *)((long)puVar90 + lVar86 + 0x30);
          *puVar14 = local_418;
          puVar14[1] = uStack_410;
          puVar2 = (undefined4 *)((long)puVar90 + lVar86 + 0x40);
          *puVar2 = local_408;
          puVar2[1] = uStack_404;
          puVar2[2] = uStack_400;
          puVar2[3] = uStack_3fc;
          auVar249._12_4_ = uStack_3ec;
          auVar249._0_12_ = local_3f8;
          *(undefined1 (*) [16])((long)puVar90 + lVar86 + 0x50) = auVar249;
          auVar251._4_12_ = auStack_3e8;
          auVar251._0_4_ = uStack_3ec;
          *(undefined1 (*) [16])((long)puVar90 + lVar86 + 0x5c) = auVar251;
          lVar86 = lVar86 + 0x6c;
          puVar103 = puVar90;
          uVar98 = local_598;
        } while (pfVar88 < pfVar89);
      }
    }
LAB_0010901a:
    local_58 = iVar82 + -1;
    uVar98 = uVar99;
    while( true ) {
      if (local_58 < 0) {
        this_00 = (Geometry *)(*Allocate)(0x40);
        puVar94 = (uint *)0x0;
        if (uVar98 != 0) {
          puVar94 = puVar90;
        }
        puVar14 = *(undefined8 **)(this + 0x48);
        local_248 = *(undefined8 *)((long)puVar14 + 0xc);
        uStack_240 = *(undefined8 *)((long)puVar14 + 0x14);
        local_258 = *puVar14;
        uStack_250 = puVar14[1];
        (**(code **)(*param_1 + 0x20))((Ref *)&local_4d0,param_1,puVar94,uVar98 & 0xffffffff);
        DebugRenderer::Geometry::Geometry(this_00,(Ref *)&local_4d0,(AABox *)&local_258);
        pGVar15 = *(Geometry **)(this + 0x50);
        if (this_00 != pGVar15) {
          if (pGVar15 != (Geometry *)0x0) {
            LOCK();
            *(int *)pGVar15 = *(int *)pGVar15 + -1;
            UNLOCK();
            if (*(int *)pGVar15 == 0) {
              plVar96 = *(long **)(pGVar15 + 0x18);
              if (plVar96 != (long *)0x0) {
                if ((*(long *)(pGVar15 + 8) != 0) &&
                   (plVar93 = plVar96 + *(long *)(pGVar15 + 8) * 2, plVar96 < plVar93)) {
                  do {
                    if ((long *)*plVar96 != (long *)0x0) {
                      (**(code **)(*(long *)*plVar96 + 0x18))();
                    }
                    plVar96 = plVar96 + 2;
                  } while (plVar96 < plVar93);
                  plVar96 = *(long **)(pGVar15 + 0x18);
                }
                *(undefined8 *)(pGVar15 + 8) = 0;
                (*Free)(plVar96);
              }
              (*Free)(pGVar15);
            }
          }
          *(Geometry **)(this + 0x50) = this_00;
          LOCK();
          *(int *)this_00 = *(int *)this_00 + 1;
          UNLOCK();
        }
        if (local_4d0 != (long *)0x0) {
          (**(code **)(*local_4d0 + 0x18))();
        }
        if (puVar90 != (uint *)0x0) {
          (*Free)(puVar90);
        }
        piVar91 = *(int **)(this + 0x50);
        pMVar85 = this;
        goto LAB_0010959c;
      }
      uVar144 = *(uint *)((long)&local_258 + (long)local_58 * 4);
      uVar110 = uVar144 >> 0x1c;
      if (uVar110 != 0) break;
LAB_0010903f:
      iVar82 = local_58;
      auVar146._4_4_ = _UNK_001124c4;
      auVar146._0_4_ = __LC14;
      auVar146._8_4_ = _UNK_001124c8;
      auVar146._12_4_ = _UNK_001124cc;
      pauVar84 = (undefined1 (*) [16])((ulong)(uVar144 * 4) + (long)puVar94);
      auVar220._4_4_ = _UNK_001124d4;
      auVar220._0_4_ = __LC15;
      auVar220._8_4_ = _UNK_001124d8;
      auVar220._12_4_ = _UNK_001124dc;
      auVar123 = *pauVar84;
      auVar32._10_2_ = 0;
      auVar32._0_10_ = auVar123._0_10_;
      auVar32._12_2_ = auVar123._6_2_;
      auVar44._8_2_ = auVar123._4_2_;
      auVar44._0_8_ = auVar123._0_8_;
      auVar44._10_4_ = auVar32._10_4_;
      auVar70._6_8_ = 0;
      auVar70._0_6_ = auVar44._8_6_;
      auVar186._6_8_ = SUB148(auVar70 << 0x40,6);
      auVar186._4_2_ = auVar123._2_2_;
      auVar186._0_2_ = auVar123._0_2_;
      auVar186._2_2_ = 0;
      auVar186._14_2_ = 0;
      auVar146 = auVar146 & auVar186;
      auVar123 = __LC11 & auVar186;
      auVar186 = auVar186 & __LC19;
      iVar116 = auVar123._0_4_ * 0x2000;
      iVar132 = auVar123._4_4_ * 0x2000;
      iVar135 = auVar123._8_4_ * 0x2000;
      iVar138 = auVar123._12_4_ * 0x2000;
      auVar246._0_4_ = __LC12 + iVar116;
      auVar246._4_4_ = _UNK_001124b4 + iVar132;
      auVar246._8_4_ = _UNK_001124b8 + iVar135;
      auVar246._12_4_ = _UNK_001124bc + iVar138;
      uVar165 = (int)-(uint)(auVar146._0_4_ == __LC14) >> 0x1f;
      uVar170 = (int)-(uint)(auVar146._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar171 = (int)-(uint)(auVar146._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar172 = (int)-(uint)(auVar146._12_4_ == _UNK_001124cc) >> 0x1f;
      auVar247 = auVar246 | auVar220;
      uVar110 = (int)-(uint)(auVar146._0_4_ == 0) >> 0x1f;
      uVar150 = (int)-(uint)(auVar146._4_4_ == 0) >> 0x1f;
      uVar155 = (int)-(uint)(auVar146._8_4_ == 0) >> 0x1f;
      uVar160 = (int)-(uint)(auVar146._12_4_ == 0) >> 0x1f;
      auVar123 = *pauVar84;
      auVar215._4_4_ = _UNK_001124c4;
      auVar215._0_4_ = __LC14;
      auVar215._8_4_ = _UNK_001124c8;
      auVar215._12_4_ = _UNK_001124cc;
      uVar144 = auVar123._8_4_;
      auVar119._0_8_ = auVar123._8_8_;
      auVar119._8_4_ = uVar144;
      auVar22._10_2_ = 0;
      auVar22._0_10_ = auVar119._0_10_;
      auVar22._12_2_ = auVar123._14_2_;
      auVar33._8_2_ = auVar123._12_2_;
      auVar33._0_8_ = auVar119._0_8_;
      auVar33._10_4_ = auVar22._10_4_;
      auVar71._6_8_ = 0;
      auVar71._0_6_ = auVar33._8_6_;
      auVar46._4_2_ = auVar123._10_2_;
      auVar46._0_4_ = uVar144;
      auVar46._6_8_ = SUB148(auVar71 << 0x40,6);
      auVar124._0_4_ = uVar144 & 0xffff;
      auVar124._4_10_ = auVar46._4_10_;
      auVar124._14_2_ = 0;
      auVar215 = auVar215 & auVar124;
      auVar123 = __LC11 & auVar124;
      auVar124 = auVar124 & __LC19;
      iVar141 = auVar123._0_4_ * 0x2000;
      iVar151 = auVar123._4_4_ * 0x2000;
      iVar156 = auVar123._8_4_ * 0x2000;
      iVar161 = auVar123._12_4_ * 0x2000;
      auVar248._0_4_ = __LC12 + iVar141;
      auVar248._4_4_ = _UNK_001124b4 + iVar151;
      auVar248._8_4_ = _UNK_001124b8 + iVar156;
      auVar248._12_4_ = _UNK_001124bc + iVar161;
      uVar181 = (int)-(uint)(auVar215._0_4_ == __LC14) >> 0x1f;
      uVar195 = (int)-(uint)(auVar215._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar199 = (int)-(uint)(auVar215._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar203 = (int)-(uint)(auVar215._12_4_ == _UNK_001124cc) >> 0x1f;
      uVar208 = (int)-(uint)(auVar215._0_4_ == 0) >> 0x1f;
      uVar222 = (int)-(uint)(auVar215._4_4_ == 0) >> 0x1f;
      uVar230 = (int)-(uint)(auVar215._8_4_ == 0) >> 0x1f;
      uVar238 = (int)-(uint)(auVar215._12_4_ == 0) >> 0x1f;
      auVar249 = auVar248 | auVar220;
      auVar123 = pauVar84[1];
      auVar187._4_4_ = _UNK_001124c4;
      auVar187._0_4_ = __LC14;
      auVar187._8_4_ = _UNK_001124c8;
      auVar187._12_4_ = _UNK_001124cc;
      auVar23._10_2_ = 0;
      auVar23._0_10_ = auVar123._0_10_;
      auVar23._12_2_ = auVar123._6_2_;
      auVar34._8_2_ = auVar123._4_2_;
      auVar34._0_8_ = auVar123._0_8_;
      auVar34._10_4_ = auVar23._10_4_;
      auVar72._6_8_ = 0;
      auVar72._0_6_ = auVar34._8_6_;
      auVar216._6_8_ = SUB148(auVar72 << 0x40,6);
      auVar216._4_2_ = auVar123._2_2_;
      auVar216._0_2_ = auVar123._0_2_;
      auVar216._2_2_ = 0;
      auVar216._14_2_ = 0;
      auVar123 = __LC11 & auVar216;
      auVar187 = auVar187 & auVar216;
      auVar216 = auVar216 & __LC19;
      iVar117 = auVar123._0_4_ * 0x2000;
      iVar133 = auVar123._4_4_ * 0x2000;
      iVar136 = auVar123._8_4_ * 0x2000;
      iVar139 = auVar123._12_4_ * 0x2000;
      auVar250._0_4_ = __LC12 + iVar117;
      auVar250._4_4_ = _UNK_001124b4 + iVar133;
      auVar250._8_4_ = _UNK_001124b8 + iVar136;
      auVar250._12_4_ = _UNK_001124bc + iVar139;
      uVar142 = (int)-(uint)(auVar187._0_4_ == __LC14) >> 0x1f;
      uVar152 = (int)-(uint)(auVar187._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar157 = (int)-(uint)(auVar187._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar162 = (int)-(uint)(auVar187._12_4_ == _UNK_001124cc) >> 0x1f;
      uVar182 = (int)-(uint)(auVar187._0_4_ == 0) >> 0x1f;
      uVar196 = (int)-(uint)(auVar187._4_4_ == 0) >> 0x1f;
      uVar200 = (int)-(uint)(auVar187._8_4_ == 0) >> 0x1f;
      uVar204 = (int)-(uint)(auVar187._12_4_ == 0) >> 0x1f;
      auVar251 = auVar250 | auVar220;
      auVar123 = pauVar84[1];
      auVar217._4_4_ = _UNK_001124c4;
      auVar217._0_4_ = __LC14;
      auVar217._8_4_ = _UNK_001124c8;
      auVar217._12_4_ = _UNK_001124cc;
      uVar144 = auVar123._8_4_;
      auVar120._0_8_ = auVar123._8_8_;
      auVar120._8_4_ = uVar144;
      auVar24._10_2_ = 0;
      auVar24._0_10_ = auVar120._0_10_;
      auVar24._12_2_ = auVar123._14_2_;
      auVar35._8_2_ = auVar123._12_2_;
      auVar35._0_8_ = auVar120._0_8_;
      auVar35._10_4_ = auVar24._10_4_;
      auVar73._6_8_ = 0;
      auVar73._0_6_ = auVar35._8_6_;
      auVar47._4_2_ = auVar123._10_2_;
      auVar47._0_4_ = uVar144;
      auVar47._6_8_ = SUB148(auVar73 << 0x40,6);
      auVar125._0_4_ = uVar144 & 0xffff;
      auVar125._4_10_ = auVar47._4_10_;
      auVar125._14_2_ = 0;
      auVar217 = auVar217 & auVar125;
      auVar123 = __LC11 & auVar125;
      auVar125 = auVar125 & __LC19;
      iVar143 = auVar123._0_4_ * 0x2000;
      iVar153 = auVar123._4_4_ * 0x2000;
      iVar158 = auVar123._8_4_ * 0x2000;
      iVar163 = auVar123._12_4_ * 0x2000;
      auVar252._0_4_ = __LC12 + iVar143;
      auVar252._4_4_ = _UNK_001124b4 + iVar153;
      auVar252._8_4_ = _UNK_001124b8 + iVar158;
      auVar252._12_4_ = _UNK_001124bc + iVar163;
      uVar183 = (int)-(uint)(auVar217._0_4_ == __LC14) >> 0x1f;
      uVar197 = (int)-(uint)(auVar217._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar201 = (int)-(uint)(auVar217._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar205 = (int)-(uint)(auVar217._12_4_ == _UNK_001124cc) >> 0x1f;
      uVar209 = (int)-(uint)(auVar217._0_4_ == 0) >> 0x1f;
      uVar223 = (int)-(uint)(auVar217._4_4_ == 0) >> 0x1f;
      uVar231 = (int)-(uint)(auVar217._8_4_ == 0) >> 0x1f;
      uVar239 = (int)-(uint)(auVar217._12_4_ == 0) >> 0x1f;
      auVar253 = auVar252 | auVar220;
      auVar123 = pauVar84[2];
      auVar25._10_2_ = 0;
      auVar25._0_10_ = auVar123._0_10_;
      auVar25._12_2_ = auVar123._6_2_;
      auVar36._8_2_ = auVar123._4_2_;
      auVar36._0_8_ = auVar123._0_8_;
      auVar36._10_4_ = auVar25._10_4_;
      auVar74._6_8_ = 0;
      auVar74._0_6_ = auVar36._8_6_;
      auVar48._4_2_ = auVar123._2_2_;
      auVar48._0_4_ = auVar123._0_4_;
      auVar48._6_8_ = SUB148(auVar74 << 0x40,6);
      auVar218._0_4_ = auVar123._0_4_ & 0xffff;
      auVar218._4_10_ = auVar48._4_10_;
      auVar218._14_2_ = 0;
      auVar123 = __LC11 & auVar218;
      iVar118 = auVar123._0_4_ * 0x2000;
      iVar134 = auVar123._4_4_ * 0x2000;
      iVar137 = auVar123._8_4_ * 0x2000;
      iVar140 = auVar123._12_4_ * 0x2000;
      auVar188._4_4_ = _UNK_001124c4;
      auVar188._0_4_ = __LC14;
      auVar188._8_4_ = _UNK_001124c8;
      auVar188._12_4_ = _UNK_001124cc;
      auVar188 = auVar188 & auVar218;
      auVar254._0_4_ = __LC12 + iVar118;
      auVar254._4_4_ = _UNK_001124b4 + iVar134;
      auVar254._8_4_ = _UNK_001124b8 + iVar137;
      auVar254._12_4_ = _UNK_001124bc + iVar140;
      auVar218 = auVar218 & __LC19;
      uVar184 = (int)-(uint)(auVar188._0_4_ == 0) >> 0x1f;
      uVar198 = (int)-(uint)(auVar188._4_4_ == 0) >> 0x1f;
      uVar202 = (int)-(uint)(auVar188._8_4_ == 0) >> 0x1f;
      uVar206 = (int)-(uint)(auVar188._12_4_ == 0) >> 0x1f;
      uVar144 = (int)-(uint)(auVar188._0_4_ == __LC14) >> 0x1f;
      uVar154 = (int)-(uint)(auVar188._4_4_ == _UNK_001124c4) >> 0x1f;
      uVar159 = (int)-(uint)(auVar188._8_4_ == _UNK_001124c8) >> 0x1f;
      uVar164 = (int)-(uint)(auVar188._12_4_ == _UNK_001124cc) >> 0x1f;
      auVar126._0_4_ = (uint)((float)(iVar118 + __LC16) + _LC18) & uVar184;
      auVar126._4_4_ = (uint)((float)(iVar134 + _UNK_001124e4) + _LC18) & uVar198;
      auVar126._8_4_ = (uint)((float)(iVar137 + _UNK_001124e8) + _LC18) & uVar202;
      auVar126._12_4_ = (uint)((float)(iVar140 + _UNK_001124ec) + _LC18) & uVar206;
      auVar255 = auVar254 | auVar220;
      auVar189._4_4_ = _UNK_001124c4;
      auVar189._0_4_ = __LC14;
      auVar189._8_4_ = _UNK_001124c8;
      auVar189._12_4_ = _UNK_001124cc;
      auVar123 = pauVar84[2];
      auVar256._0_4_ = ~uVar184 & (uVar144 & auVar255._0_4_ | ~uVar144 & auVar254._0_4_);
      auVar256._4_4_ = ~uVar198 & (uVar154 & auVar255._4_4_ | ~uVar154 & auVar254._4_4_);
      auVar256._8_4_ = ~uVar202 & (uVar159 & auVar255._8_4_ | ~uVar159 & auVar254._8_4_);
      auVar256._12_4_ = ~uVar206 & (uVar164 & auVar255._12_4_ | ~uVar164 & auVar254._12_4_);
      auVar258._0_4_ = auVar218._0_4_ << 0x10;
      auVar258._4_4_ = auVar218._4_4_ << 0x10;
      auVar258._8_4_ = auVar218._8_4_ << 0x10;
      auVar258._12_4_ = auVar218._12_4_ << 0x10;
      uVar144 = auVar123._8_4_;
      auVar145._0_8_ = auVar123._8_8_;
      auVar145._8_4_ = uVar144;
      auVar26._10_2_ = 0;
      auVar26._0_10_ = auVar145._0_10_;
      auVar26._12_2_ = auVar123._14_2_;
      auVar37._8_2_ = auVar123._12_2_;
      auVar37._0_8_ = auVar145._0_8_;
      auVar37._10_4_ = auVar26._10_4_;
      auVar75._6_8_ = 0;
      auVar75._0_6_ = auVar37._8_6_;
      auVar49._4_2_ = auVar123._10_2_;
      auVar49._0_4_ = uVar144;
      auVar49._6_8_ = SUB148(auVar75 << 0x40,6);
      auVar111._0_4_ = uVar144 & 0xffff;
      auVar111._4_10_ = auVar49._4_10_;
      auVar111._14_2_ = 0;
      auVar258 = auVar258 | auVar256 | auVar126;
      auVar189 = auVar189 & auVar111;
      auVar123 = __LC11 & auVar111;
      iVar118 = auVar123._0_4_ * 0x2000;
      iVar134 = auVar123._4_4_ * 0x2000;
      iVar137 = auVar123._8_4_ * 0x2000;
      iVar140 = auVar123._12_4_ * 0x2000;
      auVar219._0_4_ = __LC12 + iVar118;
      auVar219._4_4_ = _UNK_001124b4 + iVar134;
      auVar219._8_4_ = _UNK_001124b8 + iVar137;
      auVar219._12_4_ = _UNK_001124bc + iVar140;
      uVar154 = (int)-(uint)(__LC14 == auVar189._0_4_) >> 0x1f;
      uVar159 = (int)-(uint)(_UNK_001124c4 == auVar189._4_4_) >> 0x1f;
      uVar164 = (int)-(uint)(_UNK_001124c8 == auVar189._8_4_) >> 0x1f;
      uVar184 = (int)-(uint)(_UNK_001124cc == auVar189._12_4_) >> 0x1f;
      uVar198 = (int)-(uint)(auVar189._0_4_ == 0) >> 0x1f;
      uVar202 = (int)-(uint)(auVar189._4_4_ == 0) >> 0x1f;
      uVar206 = (int)-(uint)(auVar189._8_4_ == 0) >> 0x1f;
      uVar207 = (int)-(uint)(auVar189._12_4_ == 0) >> 0x1f;
      auVar220 = auVar219 | auVar220;
      auVar111 = __LC19 & auVar111;
      uVar144 = *(uint *)(pauVar84[3] + 0xc);
      auVar128._4_4_ =
           -(uint)((float)(auVar216._4_4_ << 0x10 |
                          (uint)((float)(iVar133 + _UNK_001124e4) + _LC18) & uVar196 |
                          ~uVar196 & (uVar152 & auVar251._4_4_ | ~uVar152 & auVar250._4_4_)) <
                  (float)(auVar111._4_4_ << 0x10 |
                         (uint)((float)(iVar134 + _UNK_001124e4) + _LC18) & uVar202 |
                         ~uVar202 & (uVar159 & auVar220._4_4_ | ~uVar159 & auVar219._4_4_)));
      auVar128._0_4_ =
           -(uint)((float)(auVar216._0_4_ << 0x10 |
                          (uint)((float)(iVar117 + __LC16) + _LC18) & uVar182 |
                          ~uVar182 & (uVar142 & auVar251._0_4_ | ~uVar142 & auVar250._0_4_)) <
                  (float)(auVar111._0_4_ << 0x10 |
                         (uint)((float)(iVar118 + __LC16) + _LC18) & uVar198 |
                         ~uVar198 & (uVar154 & auVar220._0_4_ | ~uVar154 & auVar219._0_4_)));
      auVar128._8_4_ =
           -(uint)((float)(auVar216._8_4_ << 0x10 |
                          (uint)((float)(iVar136 + _UNK_001124e8) + _LC18) & uVar200 |
                          ~uVar200 & (uVar157 & auVar251._8_4_ | ~uVar157 & auVar250._8_4_)) <
                  (float)(auVar111._8_4_ << 0x10 |
                         (uint)((float)(iVar137 + _UNK_001124e8) + _LC18) & uVar206 |
                         ~uVar206 & (uVar164 & auVar220._8_4_ | ~uVar164 & auVar219._8_4_)));
      auVar128._12_4_ =
           -(uint)((float)(auVar216._12_4_ << 0x10 |
                          (uint)((float)(iVar139 + _UNK_001124ec) + _LC18) & uVar204 |
                          ~uVar204 & (uVar162 & auVar251._12_4_ | ~uVar162 & auVar250._12_4_)) <
                  (float)(auVar111._12_4_ << 0x10 |
                         (uint)((float)(iVar140 + _UNK_001124ec) + _LC18) & uVar207 |
                         ~uVar207 & (uVar184 & auVar220._12_4_ | ~uVar184 & auVar219._12_4_)));
      auVar127._4_4_ =
           -(uint)((float)(auVar186._4_4_ << 0x10 |
                          (uint)((float)(iVar132 + _UNK_001124e4) + _LC18) & uVar150 |
                          ~uVar150 & (uVar170 & auVar247._4_4_ | ~uVar170 & auVar246._4_4_)) <
                  (float)(auVar125._4_4_ << 0x10 |
                         (uint)((float)(iVar153 + _UNK_001124e4) + _LC18) & uVar223 |
                         ~uVar223 & (uVar197 & auVar253._4_4_ | ~uVar197 & auVar252._4_4_)));
      auVar127._0_4_ =
           -(uint)((float)(auVar186._0_4_ << 0x10 |
                          (uint)((float)(iVar116 + __LC16) + _LC18) & uVar110 |
                          ~uVar110 & (uVar165 & auVar247._0_4_ | ~uVar165 & auVar246._0_4_)) <
                  (float)(auVar125._0_4_ << 0x10 |
                         (uint)((float)(iVar143 + __LC16) + _LC18) & uVar209 |
                         ~uVar209 & (uVar183 & auVar253._0_4_ | ~uVar183 & auVar252._0_4_)));
      auVar127._8_4_ =
           -(uint)((float)(auVar186._8_4_ << 0x10 |
                          (uint)((float)(iVar135 + _UNK_001124e8) + _LC18) & uVar155 |
                          ~uVar155 & (uVar171 & auVar247._8_4_ | ~uVar171 & auVar246._8_4_)) <
                  (float)(auVar125._8_4_ << 0x10 |
                         (uint)((float)(iVar158 + _UNK_001124e8) + _LC18) & uVar231 |
                         ~uVar231 & (uVar201 & auVar253._8_4_ | ~uVar201 & auVar252._8_4_)));
      auVar127._12_4_ =
           -(uint)((float)(auVar186._12_4_ << 0x10 |
                          (uint)((float)(iVar138 + _UNK_001124ec) + _LC18) & uVar160 |
                          ~uVar160 & (uVar172 & auVar247._12_4_ | ~uVar172 & auVar246._12_4_)) <
                  (float)(auVar125._12_4_ << 0x10 |
                         (uint)((float)(iVar163 + _UNK_001124ec) + _LC18) & uVar239 |
                         ~uVar239 & (uVar205 & auVar253._12_4_ | ~uVar205 & auVar252._12_4_)));
      auVar112._4_4_ =
           -(uint)((float)(auVar124._4_4_ << 0x10 |
                          (uint)((float)(iVar151 + _UNK_001124e4) + _LC18) & uVar222 |
                          ~uVar222 & (uVar195 & auVar249._4_4_ | ~uVar195 & auVar248._4_4_)) <
                  auVar258._4_4_);
      auVar112._0_4_ =
           -(uint)((float)(auVar124._0_4_ << 0x10 |
                          (uint)((float)(iVar141 + __LC16) + _LC18) & uVar208 |
                          ~uVar208 & (uVar181 & auVar249._0_4_ | ~uVar181 & auVar248._0_4_)) <
                  auVar258._0_4_);
      auVar112._8_4_ =
           -(uint)((float)(auVar124._8_4_ << 0x10 |
                          (uint)((float)(iVar156 + _UNK_001124e8) + _LC18) & uVar230 |
                          ~uVar230 & (uVar199 & auVar249._8_4_ | ~uVar199 & auVar248._8_4_)) <
                  auVar258._8_4_);
      auVar112._12_4_ =
           -(uint)((float)(auVar124._12_4_ << 0x10 |
                          (uint)((float)(iVar161 + _UNK_001124ec) + _LC18) & uVar238 |
                          ~uVar238 & (uVar203 & auVar249._12_4_ | ~uVar203 & auVar248._12_4_)) <
                  auVar258._12_4_);
      auVar128 = auVar127 | auVar112 | auVar128;
      uVar154 = movmskps((int)puVar105,auVar128);
      puVar105 = (uint *)(ulong)uVar154;
      uVar154 = auVar128._8_4_ >> 0x1f;
      uVar159 = auVar128._4_4_ >> 0x1f;
      uVar154 = uVar154 & *(uint *)(pauVar84[3] + 8) | ~uVar154 & uVar144;
      auVar113._0_4_ = *(uint *)pauVar84[3] & uVar159;
      auVar113._4_4_ = *(uint *)(pauVar84[3] + 4) & uVar159;
      auVar113._8_4_ = uVar154 & uVar159;
      auVar113._12_4_ = uVar144 & uVar159;
      auVar166._0_4_ = ~uVar159 & *(uint *)pauVar84[3];
      auVar166._4_4_ = ~uVar159 & uVar154;
      auVar166._8_4_ = ~uVar159 & uVar144;
      auVar166._12_4_ = ~uVar159 & uVar144;
      uVar154 = auVar128._0_4_ >> 0x1f;
      auVar113 = auVar113 | auVar166;
      uVar144 = auVar113._12_4_;
      auVar114._0_4_ = auVar113._0_4_ & uVar154;
      auVar114._4_4_ = auVar113._4_4_ & uVar154;
      auVar114._8_4_ = auVar113._8_4_ & uVar154;
      auVar114._12_4_ = uVar144 & uVar154;
      auVar167._0_4_ = ~uVar154 & auVar113._4_4_;
      auVar167._4_4_ = ~uVar154 & auVar113._8_4_;
      auVar167._8_4_ = ~uVar154 & uVar144;
      auVar167._12_4_ = ~uVar154 & uVar144;
      _local_648 = auVar114 | auVar167;
      iVar116 = __popcountdi2(puVar105);
      *(undefined1 (*) [8])((long)&local_258 + (long)iVar82 * 4) = local_648;
      *(undefined8 *)((long)&uStack_250 + (long)iVar82 * 4) = uStack_640;
      local_58 = iVar116 + local_58 + -1;
      uVar154 = __LC9;
      uVar159 = _UNK_00112494;
      uVar164 = _UNK_00112498;
      uVar184 = _UNK_0011249c;
    }
  } while( true );
}



/* JPH::GetRTTIOfType(JPH::MeshShapeSettings*) */

undefined1 * JPH::GetRTTIOfType(MeshShapeSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::MeshShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::MeshShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::MeshShapeSettings*)::rtti,"MeshShapeSettings",0x98,
                      GetRTTIOfType(JPH::MeshShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::MeshShapeSettings*)::{lambda(void*)#1}::_FUN,
                      MeshShapeSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::MeshShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::MeshShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::MeshShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::MeshShapeSettings*)::rtti;
}



/* JPH::MeshShapeSettings::CastTo(JPH::RTTI const*) const */

void JPH::MeshShapeSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((MeshShapeSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings const&, JPH::Array<JPH::IndexedTriangle,
   JPH::STLAllocator<JPH::IndexedTriangle> >&) */

void JPH::MeshShape::sFindActiveEdges(MeshShapeSettings *param_1,Array *param_2)

{
  long lVar1;
  uint *puVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  HashTable<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,std::pair<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::TriangleIndices>,JPH::UnorderedMapDetail<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::TriangleIndices>,JPH::Hash<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge>,std::equal_to<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge>>
  HVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  ushort uVar12;
  undefined1 auVar13 [16];
  byte bVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  HashTable<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,std::pair<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::TriangleIndices>,JPH::UnorderedMapDetail<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::TriangleIndices>,JPH::Hash<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge>,std::equal_to<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge>>
  *pHVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  char *pcVar24;
  int iVar25;
  byte bVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  int *piVar32;
  ulong uVar33;
  int iVar34;
  long in_FS_OFFSET;
  float fVar35;
  float fVar36;
  float fVar37;
  byte bVar38;
  float fVar39;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar58;
  float fVar62;
  float fVar63;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  uint uStack_90;
  uint uStack_8c;
  int iStack_70;
  int iStack_6c;
  undefined1 local_68 [16];
  int local_58;
  uint uStack_54;
  int iStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_58 = 0;
  uVar21 = (uint)(((ulong)(uint)((int)*(undefined8 *)param_2 * 3) << 3) / 7);
  uVar28 = 0x10;
  if (0xf < uVar21) {
    uVar28 = uVar21;
  }
  iVar11 = 0x1f;
  if (uVar28 - 1 != 0) {
    for (; uVar28 - 1 >> iVar11 == 0; iVar11 = iVar11 + -1) {
    }
  }
  uStack_54 = 1 << ((char)iVar11 + 1U & 0x1f);
  iStack_50 = (int)((ulong)uStack_54 * 7 >> 3);
  local_68._0_8_ = (*Allocate)((ulong)uStack_54 * 0x15 + 0xf);
  local_68._8_8_ = local_68._0_8_ + (ulong)uStack_54 * 0x14;
  memset((void *)local_68._8_8_,0,(ulong)(uStack_54 + 0xf));
  if (*(long *)param_2 == 0) {
    uVar21 = uStack_54;
  }
  else {
    uStack_90 = 0;
    uVar33 = 0;
    uVar31 = (ulong)uStack_54;
    do {
      lVar1 = *(long *)(param_2 + 0x10) + uVar33 * 0x14;
      uVar33 = 1;
      do {
        iVar11 = *(int *)(lVar1 + -4 + uVar33 * 4);
        iVar10 = *(int *)(lVar1 + (ulong)(uint)((int)uVar33 + (int)((uVar33 & 0xffffffff) / 3) * -3)
                                  * 4);
        iVar25 = iVar10;
        iVar34 = iVar11;
        if ((iVar11 <= iVar10) && (iVar25 = iVar11, iVar34 = iVar10, iVar10 < iVar11)) {
          iVar34 = iVar11;
        }
        iStack_70 = iVar25;
        iStack_6c = iVar34;
        if (iStack_50 == 0) {
          if (uVar31 < (ulong)(uint)((int)(uVar31 * 7 >> 3) - local_58) << 3) {
            HashTable<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,std::pair<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::TriangleIndices>,JPH::UnorderedMapDetail<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::TriangleIndices>,JPH::Hash<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge>,std::equal_to<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge>>
            ::rehash((uint)(HashTable<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,std::pair<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::TriangleIndices>,JPH::UnorderedMapDetail<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::TriangleIndices>,JPH::Hash<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge>,std::equal_to<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge>>
                            *)local_68);
            uVar31 = (ulong)uStack_54;
          }
          else {
            HashTable<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,std::pair<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::TriangleIndices>,JPH::UnorderedMapDetail<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::TriangleIndices>,JPH::Hash<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge>,std::equal_to<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge>>
            ::GrowTable((HashTable<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,std::pair<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::TriangleIndices>,JPH::UnorderedMapDetail<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::TriangleIndices>,JPH::Hash<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge>,std::equal_to<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge>>
                         *)local_68);
            uVar31 = (ulong)uStack_54;
          }
        }
        uVar23 = 0xcbf29ce484222325;
        pHVar18 = (HashTable<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,std::pair<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::TriangleIndices>,JPH::UnorderedMapDetail<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::TriangleIndices>,JPH::Hash<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge>,std::equal_to<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge>>
                   *)&iStack_70;
        do {
          HVar8 = *pHVar18;
          pHVar18 = pHVar18 + 1;
          uVar23 = (uVar23 ^ (byte)HVar8) * 0x100000001b3;
        } while (pHVar18 !=
                 (HashTable<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,std::pair<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::TriangleIndices>,JPH::UnorderedMapDetail<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge,JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::TriangleIndices>,JPH::Hash<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge>,std::equal_to<JPH::MeshShape::sFindActiveEdges(JPH::MeshShapeSettings_const&,JPH::Array<JPH::IndexedTriangle,JPH::STLAllocator<JPH::IndexedTriangle>>&)::Edge>>
                  *)local_68);
        bVar26 = (byte)uVar23 | 0x80;
        uVar21 = 0xffffffff;
        uVar30 = (int)uVar31 - 1;
        bVar14 = (byte)uVar23 | 0x80;
        uVar28 = (uint)(uVar23 >> 7);
        while( true ) {
          uVar28 = uVar28 & uVar30;
          uVar23 = (ulong)uVar28;
          auVar61 = *(undefined1 (*) [16])(local_68._8_8_ + uVar23);
          bVar38 = auVar61[0];
          auVar59[0] = -(bVar26 == bVar38);
          bVar43 = auVar61[1];
          auVar59[1] = -(bVar26 == bVar43);
          bVar44 = auVar61[2];
          auVar59[2] = -(bVar26 == bVar44);
          bVar45 = auVar61[3];
          auVar59[3] = -(bVar26 == bVar45);
          bVar46 = auVar61[4];
          auVar59[4] = -(bVar26 == bVar46);
          bVar47 = auVar61[5];
          auVar59[5] = -(bVar26 == bVar47);
          bVar48 = auVar61[6];
          auVar59[6] = -(bVar26 == bVar48);
          bVar49 = auVar61[7];
          auVar59[7] = -(bVar26 == bVar49);
          bVar50 = auVar61[8];
          auVar59[8] = -(bVar26 == bVar50);
          bVar51 = auVar61[9];
          auVar59[9] = -(bVar26 == bVar51);
          bVar52 = auVar61[10];
          auVar59[10] = -(bVar26 == bVar52);
          bVar53 = auVar61[0xb];
          auVar59[0xb] = -(bVar26 == bVar53);
          bVar54 = auVar61[0xc];
          auVar59[0xc] = -(bVar26 == bVar54);
          bVar55 = auVar61[0xd];
          auVar59[0xd] = -(bVar26 == bVar55);
          bVar56 = auVar61[0xe];
          auVar59[0xe] = -(bVar26 == bVar56);
          bVar57 = auVar61[0xf];
          auVar59[0xf] = -(bVar26 == bVar57);
          uVar12 = (ushort)(SUB161(auVar59 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar59[0xf] >> 7) << 0xf;
          uVar27 = (uint)uVar12;
          if (uVar12 != 0) {
            do {
              iVar11 = 0;
              for (uVar20 = uVar27; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
                iVar11 = iVar11 + 1;
              }
              uVar20 = (int)uVar23 + iVar11 & uVar30;
              piVar32 = (int *)(local_68._0_8_ + (ulong)uVar20 * 0x14);
              if ((*piVar32 == iVar25) && (iVar34 == piVar32[1])) {
                uVar21 = piVar32[2];
                if (uVar21 < 2) goto LAB_0010b471;
                *(uint *)(lVar1 + 0xc) = *(uint *)(lVar1 + 0xc) | 1 << ((char)uVar33 + 4U & 0x1f);
                goto LAB_0010b21f;
              }
              uVar23 = (ulong)(uVar20 + 1);
              uVar27 = uVar27 >> ((char)iVar11 + 1U & 0x1f);
            } while (uVar27 != 0);
          }
          if (uVar21 == 0xffffffff) {
            auVar61[0] = -(bVar38 == _LC43);
            auVar61[1] = -(bVar43 == UNK_00112571);
            auVar61[2] = -(bVar44 == UNK_00112572);
            auVar61[3] = -(bVar45 == UNK_00112573);
            auVar61[4] = -(bVar46 == UNK_00112574);
            auVar61[5] = -(bVar47 == UNK_00112575);
            auVar61[6] = -(bVar48 == UNK_00112576);
            auVar61[7] = -(bVar49 == UNK_00112577);
            auVar61[8] = -(bVar50 == UNK_00112578);
            auVar61[9] = -(bVar51 == UNK_00112579);
            auVar61[10] = -(bVar52 == UNK_0011257a);
            auVar61[0xb] = -(bVar53 == UNK_0011257b);
            auVar61[0xc] = -(bVar54 == UNK_0011257c);
            auVar61[0xd] = -(bVar55 == UNK_0011257d);
            auVar61[0xe] = -(bVar56 == UNK_0011257e);
            auVar61[0xf] = -(bVar57 == UNK_0011257f);
            iVar11 = 0;
            uVar27 = (uint)(ushort)((ushort)(SUB161(auVar61 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(auVar61[0xf] >> 7) << 0xf);
            for (uVar21 = uVar27; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x80000000) {
              iVar11 = iVar11 + 1;
            }
            uVar21 = iVar11 + uVar28;
            if (uVar27 == 0) {
              uVar21 = 0xffffffff;
            }
          }
          auVar40[0] = -(bVar38 == 0);
          auVar40[1] = -(bVar43 == 0);
          auVar40[2] = -(bVar44 == 0);
          auVar40[3] = -(bVar45 == 0);
          auVar40[4] = -(bVar46 == 0);
          auVar40[5] = -(bVar47 == 0);
          auVar40[6] = -(bVar48 == 0);
          auVar40[7] = -(bVar49 == 0);
          auVar40[8] = -(bVar50 == 0);
          auVar40[9] = -(bVar51 == 0);
          auVar40[10] = -(bVar52 == 0);
          auVar40[0xb] = -(bVar53 == 0);
          auVar40[0xc] = -(bVar54 == 0);
          auVar40[0xd] = -(bVar55 == 0);
          auVar40[0xe] = -(bVar56 == 0);
          auVar40[0xf] = -(bVar57 == 0);
          uVar12 = (ushort)(SUB161(auVar40 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar40[0xf] >> 7) << 0xf;
          if (uVar12 != 0) break;
          uVar28 = uVar28 + 0x10;
        }
        if (uVar21 == 0xffffffff) {
          iVar11 = 0;
          for (uVar21 = (uint)uVar12; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x80000000) {
            iVar11 = iVar11 + 1;
          }
          iStack_50 = iStack_50 + -1;
          uVar21 = iVar11 + uVar28;
        }
        uVar30 = uVar30 & uVar21;
        *(byte *)(local_68._8_8_ + (ulong)uVar30) = bVar14;
        *(byte *)(local_68._8_8_ + (ulong)((uStack_54 - 1 & uVar30 - 0xf) + 0xf)) = bVar14;
        local_58 = local_58 + 1;
        piVar32 = (int *)(local_68._0_8_ + (ulong)uVar30 * 0x14);
        piVar32[4] = 0;
        piVar32[2] = 0;
        piVar32[3] = 0;
        uVar31 = (ulong)uStack_54;
        *(ulong *)piVar32 = CONCAT44(iStack_6c,iStack_70);
        uVar21 = 0;
LAB_0010b471:
        piVar32[(ulong)uVar21 + 3] = uStack_90;
        piVar32[2] = uVar21 + 1;
LAB_0010b21f:
        uVar33 = uVar33 + 1;
      } while (uVar33 != 4);
      uStack_90 = uStack_90 + 1;
      uVar33 = (ulong)uStack_90;
    } while (uVar33 < *(ulong *)param_2);
    uVar21 = (uint)uVar31;
  }
  if (uVar21 != 0) {
    uVar33 = 0;
    do {
      uVar31 = uVar33;
      uVar33 = uVar31 & 0xffffffff;
      if (*(char *)(local_68._8_8_ + uVar31) < '\0') goto LAB_0010b277;
      uVar33 = uVar31 + 1;
    } while (uVar31 + 1 != (ulong)uVar21);
    uVar33 = (ulong)((int)uVar31 + 1);
LAB_0010b277:
    if ((uint)uVar33 != uVar21) {
      lVar1 = *(long *)(param_2 + 0x10);
LAB_0010b290:
      do {
        puVar2 = (uint *)(local_68._0_8_ + uVar33 * 0x14);
        uVar28 = puVar2[2];
        uVar31 = (ulong)uVar28;
        uVar30 = *puVar2;
        uVar27 = puVar2[1];
        if (uVar28 == 1) goto LAB_0010b2c2;
        if (uVar28 != 2) {
LAB_0010b2bc:
          uVar31 = 2;
LAB_0010b2c2:
          lVar17 = 0;
          do {
            lVar5 = lVar1 + (ulong)puVar2[lVar17 + 3] * 0x14;
            lVar15 = 0;
            do {
              lVar16 = lVar15;
              if (lVar16 == 3) {
                *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) | 0x10;
                goto joined_r0x0010b35b;
              }
              uVar28 = *(uint *)(lVar5 + lVar16 * 4);
              uVar20 = *(uint *)(lVar5 + (ulong)(((int)lVar16 + 1U) % 3) * 4);
              uVar22 = uVar28;
              uVar29 = uVar20;
              if (((int)uVar28 <= (int)uVar20) &&
                 (uVar22 = uVar20, uVar29 = uVar28, (int)uVar20 < (int)uVar28)) {
                uVar22 = uVar28;
              }
              lVar15 = lVar16 + 1;
            } while ((uVar22 != uVar27) || (uVar29 != uVar30));
            *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) | 1 << ((char)lVar16 + 5U & 0x1f);
joined_r0x0010b35b:
            if (lVar17 + 1U == uVar31) goto LAB_0010b35d;
            lVar17 = lVar17 + 1;
            uVar30 = *puVar2;
            uVar27 = puVar2[1];
          } while( true );
        }
        puVar6 = (uint *)(lVar1 + (ulong)puVar2[3] * 0x14);
        puVar7 = (uint *)(lVar1 + (ulong)puVar2[4] * 0x14);
        lVar17 = 0;
        do {
          if (lVar17 == 3) {
            uStack_8c = 1;
            uVar20 = *puVar6;
            uVar28 = puVar6[0xffffffff];
            goto LAB_0010b536;
          }
          iVar11 = (int)lVar17;
          uVar20 = puVar6[(iVar11 + 1U) % 3];
          uVar28 = puVar6[lVar17];
          uVar29 = uVar20;
          uVar22 = uVar28;
          if (((int)uVar28 <= (int)uVar20) && (uVar29 = uVar28, (int)uVar28 <= (int)uVar20)) {
            uVar22 = uVar20;
          }
          lVar17 = lVar17 + 1;
        } while ((uVar22 != uVar27) || (uVar29 != uVar30));
        uStack_8c = (iVar11 + 2U) % 3;
LAB_0010b536:
        uVar23 = (ulong)uVar20;
        lVar17 = 0;
        do {
          if (lVar17 == 3) {
            uVar22 = 1;
            uVar29 = puVar7[0xffffffff];
            uVar20 = *puVar7;
            goto LAB_0010b5ea;
          }
          iVar11 = (int)lVar17;
          uVar20 = puVar7[(iVar11 + 1U) % 3];
          uVar29 = puVar7[lVar17];
          uVar22 = uVar29;
          uStack_90 = uVar20;
          if (((int)uVar29 <= (int)uVar20) && (uStack_90 = uVar29, (int)uVar29 <= (int)uVar20)) {
            uVar22 = uVar20;
          }
          lVar17 = lVar17 + 1;
        } while ((uVar22 != uVar27) || (uStack_90 != uVar30));
        uVar22 = (iVar11 + 2U) % 3;
LAB_0010b5ea:
        lVar17 = *(long *)(param_1 + 0x50);
        pfVar3 = (float *)(lVar17 + (ulong)uVar28 * 0xc);
        pfVar4 = (float *)(lVar17 + (ulong)uVar29 * 0xc);
        uVar19 = (ulong)puVar6[uStack_8c];
        fVar35 = *(float *)(lVar17 + uVar23 * 0xc) - *pfVar3;
        fVar36 = *(float *)(lVar17 + 4 + uVar23 * 0xc) - pfVar3[1];
        fVar37 = *(float *)(lVar17 + 8 + uVar23 * 0xc) - pfVar3[2];
        fVar58 = *(float *)(lVar17 + uVar19 * 0xc) - *pfVar3;
        fVar62 = *(float *)(lVar17 + 4 + uVar19 * 0xc) - pfVar3[1];
        fVar63 = *(float *)(lVar17 + 8 + uVar19 * 0xc) - pfVar3[2];
        fVar39 = fVar62 * fVar35 - fVar58 * fVar36;
        fVar62 = fVar63 * fVar36 - fVar62 * fVar37;
        fVar58 = fVar58 * fVar37 - fVar63 * fVar35;
        auVar60._4_4_ = fVar58;
        auVar60._0_4_ = fVar62;
        auVar60._8_4_ = fVar39;
        auVar60._12_4_ = fVar39;
        auVar41._0_4_ = SQRT(fVar39 * fVar39 + fVar58 * fVar58 + fVar62 * fVar62 + 0.0);
        auVar41._4_4_ = auVar41._0_4_;
        auVar41._8_4_ = auVar41._0_4_;
        auVar41._12_4_ = auVar41._0_4_;
        auVar61 = divps(auVar60,auVar41);
        uVar23 = (ulong)uVar20;
        uVar19 = (ulong)puVar7[uVar22];
        fVar39 = *(float *)(lVar17 + uVar23 * 0xc) - *pfVar4;
        fVar62 = *(float *)(lVar17 + 4 + uVar23 * 0xc) - pfVar4[1];
        fVar58 = *(float *)(lVar17 + 8 + uVar23 * 0xc) - pfVar4[2];
        fVar63 = *(float *)(lVar17 + uVar19 * 0xc) - *pfVar4;
        fVar65 = *(float *)(lVar17 + 4 + uVar19 * 0xc) - pfVar4[1];
        fVar66 = *(float *)(lVar17 + 8 + uVar19 * 0xc) - pfVar4[2];
        fVar64 = fVar65 * fVar39 - fVar62 * fVar63;
        fVar62 = fVar66 * fVar62 - fVar58 * fVar65;
        fVar39 = fVar63 * fVar58 - fVar39 * fVar66;
        fVar63 = auVar61._0_4_;
        fVar65 = auVar61._4_4_;
        fVar66 = auVar61._8_4_;
        auVar42._4_4_ = fVar39;
        auVar42._0_4_ = fVar62;
        auVar42._8_4_ = fVar64;
        auVar42._12_4_ = fVar64;
        fVar39 = SQRT(fVar64 * fVar64 + fVar39 * fVar39 + fVar62 * fVar62 + 0.0);
        auVar13._4_4_ = fVar39;
        auVar13._0_4_ = fVar39;
        auVar13._8_4_ = fVar39;
        auVar13._12_4_ = fVar39;
        auVar61 = divps(auVar42,auVar13);
        fVar39 = auVar61._0_4_;
        fVar62 = auVar61._4_4_;
        fVar58 = auVar61._8_4_;
        fVar64 = fVar39 * fVar63 + 0.0 + fVar62 * fVar65 + fVar58 * fVar66;
        if (fVar64 < _LC44) goto LAB_0010b2bc;
        if ((0.0 <= fVar37 * (fVar63 * fVar62 - fVar39 * fVar65) +
                    fVar36 * (fVar66 * fVar39 - fVar58 * fVar63) +
                    fVar35 * (fVar65 * fVar58 - fVar62 * fVar66) + 0.0) &&
           (fVar64 < *(float *)(param_1 + 0x8c))) goto LAB_0010b2c2;
LAB_0010b35d:
        uVar33 = (ulong)((int)uVar33 + 1);
        pcVar24 = (char *)(uVar33 + local_68._8_8_);
        while (uVar28 = (uint)uVar33, uVar28 < uVar21) {
          cVar9 = *pcVar24;
          pcVar24 = pcVar24 + 1;
          if (cVar9 < '\0') goto LAB_0010b290;
          uVar33 = (ulong)(uVar28 + 1);
        }
      } while (uVar28 != uVar21);
    }
  }
  if (local_68._0_8_ != 0) {
    (*Free)(local_68._0_8_);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::MeshShape::GetMaterialIndex(JPH::SubShapeID const&) const */

byte __thiscall JPH::MeshShape::GetMaterialIndex(MeshShape *this,SubShapeID *param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(*(long *)(this + 0x48) + 0x1c);
  uVar2 = (uint)(0xffffffffL << (0x20 - bVar1 & 0x3f)) | *(uint *)param_1 >> (bVar1 & 0x3f);
  return *(byte *)((ulong)(((int)(1L << (bVar1 & 0x3f)) - 1U & *(uint *)param_1) * 4) +
                   *(long *)(this + 0x48) + (ulong)((int)uVar2 >> 2 & 1) * 0x10 + 0x10 +
                  (ulong)(uVar2 & 3)) & 0x1f;
}



/* JPH::MeshShape::GetMaterial(JPH::SubShapeID const&) const */

undefined8 __thiscall JPH::MeshShape::GetMaterial(MeshShape *this,SubShapeID *param_1)

{
  uint uVar1;
  
  if (*(long *)(this + 0x20) == 0) {
    return PhysicsMaterial::sDefault;
  }
  uVar1 = GetMaterialIndex(this,param_1);
  return *(undefined8 *)(*(long *)(this + 0x30) + (ulong)uVar1 * 8);
}



/* JPH::MeshShape::GetTriangleUserData(JPH::SubShapeID const&) const */

uint __thiscall JPH::MeshShape::GetTriangleUserData(MeshShape *this,SubShapeID *param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = *(byte *)(*(long *)(this + 0x48) + 0x1c);
  puVar1 = (uint *)(*(long *)(this + 0x48) +
                   (ulong)(((int)(1L << (bVar2 & 0x3f)) - 1U & *(uint *)param_1) * 4));
  uVar3 = *puVar1 >> 0x1d;
  if (uVar3 != 0) {
    uVar3 = puVar1[(ulong)(((uint)(0xffffffffL << (0x20 - bVar2 & 0x3f)) |
                           *(uint *)param_1 >> (bVar2 & 0x3f)) & 7) + (ulong)uVar3 * 4 + 1];
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MeshShape::sRegister() */

void JPH::MeshShape::sRegister(void)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  
  pbVar3 = &sConvexSubShapeTypes;
  _TransformShape = sRegister()::{lambda()#1}::_FUN;
  _GetStatsRecursive = (undefined4)Color::sRed;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    lVar2 = (ulong)bVar1 + 0x198;
    lVar4 = (ulong)bVar1 * 0x110;
    *(code **)(std::__throw_length_error + lVar4) = sCollideConvexVsMesh;
    *(code **)(&__cxxabiv1::__class_type_info::vtable + lVar4) = sCastConvexVsMesh;
    (&CollisionDispatch::sCollideShape)[lVar2] = JPH::CollisionDispatch::sReversedCollideShape;
    (&CollisionDispatch::sCastShape)[lVar2] = JPH::CollisionDispatch::sReversedCastShape;
  } while (pbVar3 != (byte *)&DVec3::cTrue);
  ___throw_length_error = sCollideSphereVsMesh;
  _vtable = sCastSphereVsMesh;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MeshShape::CollideSoftBodyVertices(JPH::Mat44 const&, JPH::Vec3,
   JPH::CollideSoftBodyVertexIterator const&, unsigned int, int) const */

void JPH::MeshShape::CollideSoftBodyVertices
               (long param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined4 param_5)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [14];
  undefined1 auVar29 [14];
  undefined1 auVar30 [14];
  undefined1 auVar31 [14];
  undefined1 auVar32 [14];
  undefined1 auVar33 [14];
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 *puVar36;
  uint *puVar37;
  undefined1 (*pauVar38) [16];
  undefined1 (*pauVar39) [16];
  undefined1 (*pauVar40) [16];
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  int iVar44;
  undefined1 (*pauVar45) [16];
  undefined1 (*pauVar46) [16];
  long lVar47;
  int iVar48;
  ulong uVar49;
  undefined1 (*pauVar50) [16];
  uint uVar51;
  ulong uVar52;
  undefined1 *puVar53;
  undefined1 (*pauVar54) [16];
  ulong uVar55;
  undefined1 (*pauVar56) [16];
  ulong uVar57;
  float *pfVar58;
  ulong uVar59;
  long in_FS_OFFSET;
  byte bVar60;
  float fVar61;
  float fVar68;
  float fVar69;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  uint uVar62;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar70;
  undefined4 uVar71;
  float fVar80;
  undefined1 auVar72 [12];
  int iVar81;
  undefined4 uVar82;
  float fVar83;
  int iVar84;
  undefined4 uVar87;
  int iVar88;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  int iVar85;
  undefined1 auVar73 [12];
  int iVar89;
  undefined1 auVar77 [16];
  int iVar86;
  undefined1 auVar74 [12];
  int iVar90;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined4 uVar91;
  float fVar92;
  float fVar99;
  float fVar102;
  uint uVar105;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  uint uVar93;
  uint uVar100;
  uint uVar103;
  uint uVar106;
  undefined1 auVar97 [16];
  int iVar94;
  int iVar101;
  int iVar104;
  uint uVar107;
  int iVar108;
  uint uVar109;
  undefined1 auVar98 [16];
  uint uVar110;
  float fVar111;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  uint uVar115;
  uint uVar126;
  uint uVar130;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  uint uVar116;
  uint uVar127;
  uint uVar131;
  uint uVar134;
  uint uVar135;
  undefined1 auVar121 [16];
  uint uVar117;
  int iVar118;
  uint uVar128;
  int iVar129;
  uint uVar132;
  int iVar133;
  uint uVar136;
  int iVar137;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  float fVar138;
  float fVar139;
  uint uVar140;
  uint uVar141;
  float fVar148;
  float fVar151;
  undefined1 auVar142 [16];
  uint uVar152;
  uint uVar155;
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  uint uVar149;
  uint uVar153;
  uint uVar156;
  undefined1 auVar146 [16];
  uint uVar150;
  uint uVar154;
  uint uVar157;
  undefined1 auVar147 [16];
  float fVar158;
  uint uVar159;
  uint uVar160;
  uint uVar161;
  uint uVar162;
  float fVar164;
  uint uVar165;
  uint uVar166;
  uint uVar167;
  uint uVar168;
  float fVar169;
  uint uVar170;
  uint uVar171;
  uint uVar172;
  uint uVar173;
  uint uVar174;
  undefined1 auVar163 [16];
  uint uVar175;
  uint uVar176;
  uint uVar177;
  float fVar178;
  float fVar179;
  float fVar180;
  float fVar181;
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined8 local_8e8;
  undefined1 local_8c8 [8];
  undefined8 uStack_8c0;
  undefined1 local_8a8 [16];
  float local_898;
  undefined1 (*local_7e8) [16];
  undefined4 *local_7e0;
  float fStack_79c;
  int local_77c;
  undefined1 local_778 [16];
  undefined1 local_768 [16];
  undefined1 local_758 [16];
  undefined1 local_748 [16];
  undefined1 local_738 [16];
  undefined1 local_728 [16];
  undefined1 local_718 [16];
  undefined1 local_708 [16];
  undefined1 local_6f8 [16];
  undefined1 local_6e8 [16];
  float local_6d8;
  float fStack_6d4;
  float fStack_6d0;
  undefined4 uStack_6cc;
  undefined1 local_6c8 [16];
  undefined1 local_6b8 [24] [16];
  uint local_538 [128];
  int local_338;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  undefined1 local_318 [16];
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  undefined1 local_2a8 [8];
  float fStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [8];
  float fStack_280;
  undefined1 local_278 [8];
  float fStack_270;
  undefined1 local_268 [8];
  undefined8 uStack_260;
  float local_258;
  float local_254;
  int local_250;
  CollideSoftBodyVerticesVsTriangles local_24c [4];
  undefined4 auStack_248 [128];
  undefined1 local_48 [8];
  long local_40;
  
  bVar60 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  CollideSoftBodyVerticesVsTriangles::CollideSoftBodyVerticesVsTriangles
            ((CollideSoftBodyVerticesVsTriangles *)&local_328);
  pauVar56 = (undefined1 (*) [16])*param_3;
  pauVar45 = (undefined1 (*) [16])param_3[2];
  iVar2 = *(int *)(param_3 + 3);
  local_7e8 = (undefined1 (*) [16])param_3[4];
  iVar3 = *(int *)(param_3 + 5);
  pfVar58 = (float *)param_3[6];
  iVar4 = *(int *)(param_3 + 7);
  local_7e0 = (undefined4 *)param_3[8];
  iVar5 = *(int *)(param_3 + 9);
  iVar6 = *(int *)(param_3 + 1);
  puVar36 = *pauVar56;
  if (pauVar56 != (undefined1 (*) [16])(puVar36 + param_4 * iVar6)) {
    pauVar50 = pauVar45;
    uVar93 = __LC9;
    uVar100 = _UNK_00112494;
    uVar103 = _UNK_00112498;
    uVar106 = _UNK_0011249c;
    do {
      if (0.0 < *(float *)*pauVar45) {
        auVar63 = *pauVar56;
        fVar139 = auVar63._0_4_;
        fVar148 = auVar63._4_4_;
        fVar151 = auVar63._8_4_;
        local_254 = 3.4028235e+38;
        local_338 = 0;
        uVar42 = 0;
        lVar7 = *(long *)(param_1 + 0x48);
        fVar61 = *(float *)(lVar7 + 0x20);
        uVar62 = *(uint *)(lVar7 + 0x18);
        fVar68 = *(float *)(lVar7 + 0x24);
        fVar69 = *(float *)(lVar7 + 0x28);
        fVar70 = *(float *)(lVar7 + 0x2c);
        fVar80 = *(float *)(lVar7 + 0x30);
        fVar83 = *(float *)(lVar7 + 0x34);
        local_538[0] = uVar62;
        local_2a8._0_4_ =
             fVar139 * local_2e8 + fVar148 * local_2d8 + fVar151 * local_2c8 + local_2b8;
        local_2a8._4_4_ =
             fVar139 * fStack_2e4 + fVar148 * fStack_2d4 + fVar151 * fStack_2c4 + fStack_2b4;
        fStack_2a0 = fVar139 * fStack_2e0 + fVar148 * fStack_2d0 + fVar151 * fStack_2c0 + fStack_2b0
        ;
        register0x0000120c =
             fVar139 * fStack_2dc + fVar148 * fStack_2cc + fVar151 * fStack_2bc + fStack_2ac;
        local_898 = _LC27;
        do {
          auVar67 = _local_2a8;
          uVar51 = uVar62 >> 0x1c;
          iVar44 = (int)uVar42;
          uVar71 = local_2a8._0_4_;
          uVar82 = local_2a8._4_4_;
          fVar92 = fStack_2a0;
          if (uVar51 == 0) {
            auVar96._4_4_ = _UNK_001124c4;
            auVar96._0_4_ = __LC14;
            auVar96._8_4_ = _UNK_001124c8;
            auVar96._12_4_ = _UNK_001124cc;
            pauVar40 = (undefined1 (*) [16])((ulong)(uVar62 * 4) + lVar7);
            auVar67 = *pauVar40;
            auVar13._10_2_ = 0;
            auVar13._0_10_ = auVar67._0_10_;
            auVar13._12_2_ = auVar67._6_2_;
            auVar19._8_2_ = auVar67._4_2_;
            auVar19._0_8_ = auVar67._0_8_;
            auVar19._10_4_ = auVar13._10_4_;
            auVar28._6_8_ = 0;
            auVar28._0_6_ = auVar19._8_6_;
            auVar119._6_8_ = SUB148(auVar28 << 0x40,6);
            auVar119._4_2_ = auVar67._2_2_;
            auVar119._0_2_ = auVar67._0_2_;
            auVar119._2_2_ = 0;
            auVar119._14_2_ = 0;
            auVar96 = auVar96 & auVar119;
            auVar67 = __LC11 & auVar119;
            auVar119 = auVar119 & __LC19;
            iVar48 = auVar67._0_4_ * 0x2000;
            iVar81 = auVar67._4_4_ * 0x2000;
            iVar84 = auVar67._8_4_ * 0x2000;
            iVar88 = auVar67._12_4_ * 0x2000;
            uVar159 = __LC12 + iVar48;
            uVar165 = _UNK_001124b4 + iVar81;
            uVar170 = _UNK_001124b8 + iVar84;
            uVar174 = _UNK_001124bc + iVar88;
            auVar182._0_4_ = auVar119._0_4_ << 0x10;
            auVar182._4_4_ = auVar119._4_4_ << 0x10;
            auVar182._8_4_ = auVar119._8_4_ << 0x10;
            auVar182._12_4_ = auVar119._12_4_ << 0x10;
            uVar62 = (int)-(uint)(auVar96._0_4_ == __LC14) >> 0x1f;
            uVar51 = (int)-(uint)(auVar96._4_4_ == _UNK_001124c4) >> 0x1f;
            uVar152 = (int)-(uint)(auVar96._8_4_ == _UNK_001124c8) >> 0x1f;
            uVar155 = (int)-(uint)(auVar96._12_4_ == _UNK_001124cc) >> 0x1f;
            uVar93 = (int)-(uint)(auVar96._0_4_ == 0) >> 0x1f;
            uVar100 = (int)-(uint)(auVar96._4_4_ == 0) >> 0x1f;
            uVar103 = (int)-(uint)(auVar96._8_4_ == 0) >> 0x1f;
            uVar106 = (int)-(uint)(auVar96._12_4_ == 0) >> 0x1f;
            auVar75._0_4_ = (uint)((float)(iVar48 + __LC16) + _LC18) & uVar93;
            auVar75._4_4_ = (uint)((float)(iVar81 + _UNK_001124e4) + _UNK_001124f4) & uVar100;
            auVar75._8_4_ = (uint)((float)(iVar84 + _UNK_001124e8) + _UNK_001124f8) & uVar103;
            auVar75._12_4_ = (uint)((float)(iVar88 + _UNK_001124ec) + _UNK_001124fc) & uVar106;
            auVar67 = *pauVar40;
            auVar143._0_4_ = ~uVar93 & (uVar62 & (uVar159 | __LC15) | ~uVar62 & uVar159);
            auVar143._4_4_ = ~uVar100 & (uVar51 & (uVar165 | _UNK_001124d4) | ~uVar51 & uVar165);
            auVar143._8_4_ = ~uVar103 & (uVar152 & (uVar170 | _UNK_001124d8) | ~uVar152 & uVar170);
            auVar143._12_4_ = ~uVar106 & (uVar155 & (uVar174 | _UNK_001124dc) | ~uVar155 & uVar174);
            auVar184._4_4_ = _UNK_001124c4;
            auVar184._0_4_ = __LC14;
            auVar184._8_4_ = _UNK_001124c8;
            auVar184._12_4_ = _UNK_001124cc;
            uVar93 = auVar67._8_4_;
            auVar72._0_8_ = auVar67._8_8_;
            auVar72._8_4_ = uVar93;
            auVar8._10_2_ = 0;
            auVar8._0_10_ = auVar72._0_10_;
            auVar8._12_2_ = auVar67._14_2_;
            auVar14._8_2_ = auVar67._12_2_;
            auVar14._0_8_ = auVar72._0_8_;
            auVar14._10_4_ = auVar8._10_4_;
            auVar29._6_8_ = 0;
            auVar29._0_6_ = auVar14._8_6_;
            auVar20._4_2_ = auVar67._10_2_;
            auVar20._0_4_ = uVar93;
            auVar20._6_8_ = SUB148(auVar29 << 0x40,6);
            auVar76._0_4_ = uVar93 & 0xffff;
            auVar76._4_10_ = auVar20._4_10_;
            auVar76._14_2_ = 0;
            auVar184 = auVar184 & auVar76;
            auVar67 = __LC11 & auVar76;
            auVar76 = auVar76 & __LC19;
            iVar48 = auVar67._0_4_ * 0x2000;
            iVar81 = auVar67._4_4_ * 0x2000;
            iVar84 = auVar67._8_4_ * 0x2000;
            iVar88 = auVar67._12_4_ * 0x2000;
            uVar159 = __LC12 + iVar48;
            uVar165 = _UNK_001124b4 + iVar81;
            uVar170 = _UNK_001124b8 + iVar84;
            uVar174 = _UNK_001124bc + iVar88;
            auVar183._0_4_ = auVar76._0_4_ << 0x10;
            auVar183._4_4_ = auVar76._4_4_ << 0x10;
            auVar183._8_4_ = auVar76._8_4_ << 0x10;
            auVar183._12_4_ = auVar76._12_4_ << 0x10;
            uVar93 = (int)-(uint)(auVar184._0_4_ == __LC14) >> 0x1f;
            uVar100 = (int)-(uint)(auVar184._4_4_ == _UNK_001124c4) >> 0x1f;
            uVar103 = (int)-(uint)(auVar184._8_4_ == _UNK_001124c8) >> 0x1f;
            uVar106 = (int)-(uint)(auVar184._12_4_ == _UNK_001124cc) >> 0x1f;
            uVar62 = (int)-(uint)(auVar184._0_4_ == 0) >> 0x1f;
            uVar51 = (int)-(uint)(auVar184._4_4_ == 0) >> 0x1f;
            uVar152 = (int)-(uint)(auVar184._8_4_ == 0) >> 0x1f;
            uVar155 = (int)-(uint)(auVar184._12_4_ == 0) >> 0x1f;
            auVar97._0_4_ = (uint)((float)(iVar48 + __LC16) + _LC18) & uVar62;
            auVar97._4_4_ = (uint)((float)(iVar81 + _UNK_001124e4) + _UNK_001124f4) & uVar51;
            auVar97._8_4_ = (uint)((float)(iVar84 + _UNK_001124e8) + _UNK_001124f8) & uVar152;
            auVar97._12_4_ = (uint)((float)(iVar88 + _UNK_001124ec) + _UNK_001124fc) & uVar155;
            auVar67 = pauVar40[1];
            auVar163._0_4_ = ~uVar62 & (uVar93 & (uVar159 | __LC15) | ~uVar93 & uVar159);
            auVar163._4_4_ = ~uVar51 & (uVar100 & (uVar165 | _UNK_001124d4) | ~uVar100 & uVar165);
            auVar163._8_4_ = ~uVar152 & (uVar103 & (uVar170 | _UNK_001124d8) | ~uVar103 & uVar170);
            auVar163._12_4_ = ~uVar155 & (uVar106 & (uVar174 | _UNK_001124dc) | ~uVar106 & uVar174);
            auVar120._4_4_ = _UNK_001124c4;
            auVar120._0_4_ = __LC14;
            auVar120._8_4_ = _UNK_001124c8;
            auVar120._12_4_ = _UNK_001124cc;
            auVar9._10_2_ = 0;
            auVar9._0_10_ = auVar67._0_10_;
            auVar9._12_2_ = auVar67._6_2_;
            auVar15._8_2_ = auVar67._4_2_;
            auVar15._0_8_ = auVar67._0_8_;
            auVar15._10_4_ = auVar9._10_4_;
            auVar30._6_8_ = 0;
            auVar30._0_6_ = auVar15._8_6_;
            auVar144._6_8_ = SUB148(auVar30 << 0x40,6);
            auVar144._4_2_ = auVar67._2_2_;
            auVar144._0_2_ = auVar67._0_2_;
            auVar144._2_2_ = 0;
            auVar144._14_2_ = 0;
            auVar67 = __LC11 & auVar144;
            auVar120 = auVar120 & auVar144;
            auVar144 = auVar144 & __LC19;
            iVar48 = auVar67._0_4_ * 0x2000;
            iVar84 = auVar67._4_4_ * 0x2000;
            iVar85 = auVar67._8_4_ * 0x2000;
            iVar89 = auVar67._12_4_ * 0x2000;
            uVar160 = __LC12 + iVar48;
            uVar166 = _UNK_001124b4 + iVar84;
            uVar171 = _UNK_001124b8 + iVar85;
            uVar175 = _UNK_001124bc + iVar89;
            uVar62 = (int)-(uint)(auVar120._0_4_ == __LC14) >> 0x1f;
            uVar155 = (int)-(uint)(auVar120._4_4_ == _UNK_001124c4) >> 0x1f;
            uVar170 = (int)-(uint)(auVar120._8_4_ == _UNK_001124c8) >> 0x1f;
            uVar107 = (int)-(uint)(auVar120._12_4_ == _UNK_001124cc) >> 0x1f;
            uVar115 = (int)-(uint)(auVar120._0_4_ == 0) >> 0x1f;
            uVar126 = (int)-(uint)(auVar120._4_4_ == 0) >> 0x1f;
            uVar130 = (int)-(uint)(auVar120._8_4_ == 0) >> 0x1f;
            uVar134 = (int)-(uint)(auVar120._12_4_ == 0) >> 0x1f;
            auVar67 = pauVar40[1];
            local_8c8._4_4_ = auVar144._4_4_ << 0x10;
            local_8c8._0_4_ = auVar144._0_4_ << 0x10;
            uStack_8c0._0_4_ = auVar144._8_4_ << 0x10;
            uStack_8c0._4_4_ = auVar144._12_4_ << 0x10;
            uVar93 = auVar67._8_4_;
            auVar73._0_8_ = auVar67._8_8_;
            auVar73._8_4_ = uVar93;
            auVar145._4_4_ = _UNK_001124c4;
            auVar145._0_4_ = __LC14;
            auVar145._8_4_ = _UNK_001124c8;
            auVar145._12_4_ = _UNK_001124cc;
            auVar10._10_2_ = 0;
            auVar10._0_10_ = auVar73._0_10_;
            auVar10._12_2_ = auVar67._14_2_;
            auVar16._8_2_ = auVar67._12_2_;
            auVar16._0_8_ = auVar73._0_8_;
            auVar16._10_4_ = auVar10._10_4_;
            auVar31._6_8_ = 0;
            auVar31._0_6_ = auVar16._8_6_;
            auVar21._4_2_ = auVar67._10_2_;
            auVar21._0_4_ = uVar93;
            auVar21._6_8_ = SUB148(auVar31 << 0x40,6);
            auVar77._0_4_ = uVar93 & 0xffff;
            auVar77._4_10_ = auVar21._4_10_;
            auVar77._14_2_ = 0;
            auVar145 = auVar145 & auVar77;
            auVar67 = __LC11 & auVar77;
            iVar94 = auVar67._0_4_ * 0x2000;
            iVar101 = auVar67._4_4_ * 0x2000;
            iVar104 = auVar67._8_4_ * 0x2000;
            iVar108 = auVar67._12_4_ * 0x2000;
            uVar161 = __LC12 + iVar94;
            uVar167 = _UNK_001124b4 + iVar101;
            uVar172 = _UNK_001124b8 + iVar104;
            uVar176 = _UNK_001124bc + iVar108;
            auVar77 = auVar77 & __LC19;
            uVar116 = (int)-(uint)(auVar145._0_4_ == __LC14) >> 0x1f;
            uVar127 = (int)-(uint)(auVar145._4_4_ == _UNK_001124c4) >> 0x1f;
            uVar131 = (int)-(uint)(auVar145._8_4_ == _UNK_001124c8) >> 0x1f;
            uVar135 = (int)-(uint)(auVar145._12_4_ == _UNK_001124cc) >> 0x1f;
            uVar140 = (int)-(uint)(auVar145._0_4_ == 0) >> 0x1f;
            uVar149 = (int)-(uint)(auVar145._4_4_ == 0) >> 0x1f;
            uVar153 = (int)-(uint)(auVar145._8_4_ == 0) >> 0x1f;
            uVar156 = (int)-(uint)(auVar145._12_4_ == 0) >> 0x1f;
            local_8a8._4_4_ = auVar77._4_4_ << 0x10;
            local_8a8._0_4_ = auVar77._0_4_ << 0x10;
            local_8a8._8_4_ = auVar77._8_4_ << 0x10;
            local_8a8._12_4_ = auVar77._12_4_ << 0x10;
            auVar67 = pauVar40[2];
            auVar11._10_2_ = 0;
            auVar11._0_10_ = auVar67._0_10_;
            auVar11._12_2_ = auVar67._6_2_;
            auVar17._8_2_ = auVar67._4_2_;
            auVar17._0_8_ = auVar67._0_8_;
            auVar17._10_4_ = auVar11._10_4_;
            auVar32._6_8_ = 0;
            auVar32._0_6_ = auVar17._8_6_;
            auVar22._4_2_ = auVar67._2_2_;
            auVar22._0_4_ = auVar67._0_4_;
            auVar22._6_8_ = SUB148(auVar32 << 0x40,6);
            auVar146._0_4_ = auVar67._0_4_ & 0xffff;
            auVar146._4_10_ = auVar22._4_10_;
            auVar146._14_2_ = 0;
            auVar67 = __LC11 & auVar146;
            auVar121._4_4_ = _UNK_001124c4;
            auVar121._0_4_ = __LC14;
            auVar121._8_4_ = _UNK_001124c8;
            auVar121._12_4_ = _UNK_001124cc;
            iVar81 = auVar67._0_4_ * 0x2000;
            iVar88 = auVar67._4_4_ * 0x2000;
            iVar86 = auVar67._8_4_ * 0x2000;
            iVar90 = auVar67._12_4_ * 0x2000;
            auVar121 = auVar121 & auVar146;
            uVar162 = __LC12 + iVar81;
            uVar168 = _UNK_001124b4 + iVar88;
            uVar173 = _UNK_001124b8 + iVar86;
            uVar177 = _UNK_001124bc + iVar90;
            auVar146 = auVar146 & __LC19;
            uVar117 = (int)-(uint)(auVar121._0_4_ == 0) >> 0x1f;
            uVar128 = (int)-(uint)(auVar121._4_4_ == 0) >> 0x1f;
            uVar132 = (int)-(uint)(auVar121._8_4_ == 0) >> 0x1f;
            uVar136 = (int)-(uint)(auVar121._12_4_ == 0) >> 0x1f;
            uVar51 = (int)-(uint)(auVar121._0_4_ == __LC14) >> 0x1f;
            uVar159 = (int)-(uint)(auVar121._4_4_ == _UNK_001124c4) >> 0x1f;
            uVar174 = (int)-(uint)(auVar121._8_4_ == _UNK_001124c8) >> 0x1f;
            uVar109 = (int)-(uint)(auVar121._12_4_ == _UNK_001124cc) >> 0x1f;
            auVar67 = pauVar40[2];
            auVar98._4_4_ = _UNK_001124c4;
            auVar98._0_4_ = __LC14;
            auVar98._8_4_ = _UNK_001124c8;
            auVar98._12_4_ = _UNK_001124cc;
            uVar93 = auVar67._8_4_;
            auVar74._0_8_ = auVar67._8_8_;
            auVar74._8_4_ = uVar93;
            auVar12._10_2_ = 0;
            auVar12._0_10_ = auVar74._0_10_;
            auVar12._12_2_ = auVar67._14_2_;
            auVar18._8_2_ = auVar67._12_2_;
            auVar18._0_8_ = auVar74._0_8_;
            auVar18._10_4_ = auVar12._10_4_;
            auVar33._6_8_ = 0;
            auVar33._0_6_ = auVar18._8_6_;
            auVar23._4_2_ = auVar67._10_2_;
            auVar23._0_4_ = uVar93;
            auVar23._6_8_ = SUB148(auVar33 << 0x40,6);
            auVar78._0_4_ = uVar93 & 0xffff;
            auVar78._4_10_ = auVar23._4_10_;
            auVar78._14_2_ = 0;
            auVar98 = auVar98 & auVar78;
            auVar67 = __LC11 & auVar78;
            iVar118 = auVar67._0_4_ * 0x2000;
            iVar129 = auVar67._4_4_ * 0x2000;
            iVar133 = auVar67._8_4_ * 0x2000;
            iVar137 = auVar67._12_4_ * 0x2000;
            auVar78 = auVar78 & __LC19;
            uVar141 = __LC12 + iVar118;
            uVar150 = _UNK_001124b4 + iVar129;
            uVar154 = _UNK_001124b8 + iVar133;
            uVar157 = _UNK_001124bc + iVar137;
            uVar93 = (int)-(uint)(__LC14 == auVar98._0_4_) >> 0x1f;
            uVar100 = (int)-(uint)(_UNK_001124c4 == auVar98._4_4_) >> 0x1f;
            uVar103 = (int)-(uint)(_UNK_001124c8 == auVar98._8_4_) >> 0x1f;
            uVar106 = (int)-(uint)(_UNK_001124cc == auVar98._12_4_) >> 0x1f;
            uVar152 = (int)-(uint)(auVar98._0_4_ == 0) >> 0x1f;
            uVar165 = (int)-(uint)(auVar98._4_4_ == 0) >> 0x1f;
            uVar105 = (int)-(uint)(auVar98._8_4_ == 0) >> 0x1f;
            uVar110 = (int)-(uint)(auVar98._12_4_ == 0) >> 0x1f;
            auVar79._0_4_ = auVar78._0_4_ << 0x10;
            auVar79._4_4_ = auVar78._4_4_ << 0x10;
            auVar79._8_4_ = auVar78._8_4_ << 0x10;
            auVar79._12_4_ = auVar78._12_4_ << 0x10;
            auVar122._0_4_ = (uint)((float)(iVar118 + __LC16) + _LC18) & uVar152;
            auVar122._4_4_ = (uint)((float)(iVar129 + _UNK_001124e4) + _UNK_001124f4) & uVar165;
            auVar122._8_4_ = (uint)((float)(iVar133 + _UNK_001124e8) + _UNK_001124f8) & uVar105;
            auVar122._12_4_ = (uint)((float)(iVar137 + _UNK_001124ec) + _UNK_001124fc) & uVar110;
            auVar67 = pauVar40[3];
            lVar41 = (long)iVar44;
            auVar112._0_4_ = ~uVar152 & (uVar93 & (uVar141 | __LC15) | ~uVar93 & uVar141);
            auVar112._4_4_ = ~uVar165 & (uVar100 & (uVar150 | _UNK_001124d4) | ~uVar100 & uVar150);
            auVar112._8_4_ = ~uVar105 & (uVar103 & (uVar154 | _UNK_001124d8) | ~uVar103 & uVar154);
            auVar112._12_4_ = ~uVar110 & (uVar106 & (uVar157 | _UNK_001124dc) | ~uVar106 & uVar157);
            auVar125._4_4_ = fStack_2a0;
            auVar125._0_4_ = fStack_2a0;
            auVar64._4_4_ = local_2a8._4_4_;
            auVar64._0_4_ = local_2a8._4_4_;
            auVar123._4_4_ = local_2a8._0_4_;
            auVar123._0_4_ = local_2a8._0_4_;
            auVar123._8_4_ = local_2a8._0_4_;
            auVar123._12_4_ = local_2a8._0_4_;
            auVar124 = maxps(auVar123,auVar182 | auVar75 | auVar143);
            auVar25._4_4_ =
                 (uint)((float)(iVar101 + _UNK_001124e4) + _UNK_001124f4) & uVar149 |
                 ~uVar149 & (uVar127 & (uVar167 | _UNK_001124d4) | ~uVar127 & uVar167);
            auVar25._0_4_ =
                 (uint)((float)(iVar94 + __LC16) + _LC18) & uVar140 |
                 ~uVar140 & (uVar116 & (uVar161 | __LC15) | ~uVar116 & uVar161);
            auVar25._8_4_ =
                 (uint)((float)(iVar104 + _UNK_001124e8) + _UNK_001124f8) & uVar153 |
                 ~uVar153 & (uVar131 & (uVar172 | _UNK_001124d8) | ~uVar131 & uVar172);
            auVar25._12_4_ =
                 (uint)((float)(iVar108 + _UNK_001124ec) + _UNK_001124fc) & uVar156 |
                 ~uVar156 & (uVar135 & (uVar176 | _UNK_001124dc) | ~uVar135 & uVar176);
            auVar125._8_4_ = fStack_2a0;
            auVar125._12_4_ = fStack_2a0;
            auVar96 = minps(auVar124,local_8a8 | auVar25);
            auVar64._8_4_ = local_2a8._4_4_;
            auVar64._12_4_ = local_2a8._4_4_;
            auVar124 = maxps(auVar64,auVar183 | auVar97 | auVar163);
            auVar27._4_4_ = auVar146._4_4_ << 0x10;
            auVar27._0_4_ = auVar146._0_4_ << 0x10;
            auVar27._8_4_ = auVar146._8_4_ << 0x10;
            auVar27._12_4_ = auVar146._12_4_ << 0x10;
            auVar26._4_4_ =
                 (uint)((float)(iVar88 + _UNK_001124e4) + _UNK_001124f4) & uVar128 |
                 ~uVar128 & (uVar159 & (uVar168 | _UNK_001124d4) | ~uVar159 & uVar168);
            auVar26._0_4_ =
                 (uint)((float)(iVar81 + __LC16) + _LC18) & uVar117 |
                 ~uVar117 & (uVar51 & (uVar162 | __LC15) | ~uVar51 & uVar162);
            auVar26._8_4_ =
                 (uint)((float)(iVar86 + _UNK_001124e8) + _UNK_001124f8) & uVar132 |
                 ~uVar132 & (uVar174 & (uVar173 | _UNK_001124d8) | ~uVar174 & uVar173);
            auVar26._12_4_ =
                 (uint)((float)(iVar90 + _UNK_001124ec) + _UNK_001124fc) & uVar136 |
                 ~uVar136 & (uVar109 & (uVar177 | _UNK_001124dc) | ~uVar109 & uVar177);
            fVar178 = auVar96._0_4_ - (float)local_2a8._0_4_;
            fVar179 = auVar96._4_4_ - (float)local_2a8._0_4_;
            fVar180 = auVar96._8_4_ - (float)local_2a8._0_4_;
            fVar181 = auVar96._12_4_ - (float)local_2a8._0_4_;
            auVar124 = minps(auVar124,auVar27 | auVar26);
            auVar24._4_4_ =
                 (uint)((float)(iVar84 + _UNK_001124e4) + _UNK_001124f4) & uVar126 |
                 ~uVar126 & (uVar155 & (uVar166 | _UNK_001124d4) | ~uVar155 & uVar166);
            auVar24._0_4_ =
                 (uint)((float)(iVar48 + __LC16) + _LC18) & uVar115 |
                 ~uVar115 & (uVar62 & (uVar160 | __LC15) | ~uVar62 & uVar160);
            auVar24._8_4_ =
                 (uint)((float)(iVar85 + _UNK_001124e8) + _UNK_001124f8) & uVar130 |
                 ~uVar130 & (uVar170 & (uVar171 | _UNK_001124d8) | ~uVar170 & uVar171);
            auVar24._12_4_ =
                 (uint)((float)(iVar89 + _UNK_001124ec) + _UNK_001124fc) & uVar134 |
                 ~uVar134 & (uVar107 & (uVar175 | _UNK_001124dc) | ~uVar107 & uVar175);
            auVar96 = maxps(auVar125,_local_8c8 | auVar24);
            fVar92 = auVar124._0_4_ - (float)local_2a8._4_4_;
            fVar99 = auVar124._4_4_ - (float)local_2a8._4_4_;
            fVar102 = auVar124._8_4_ - (float)local_2a8._4_4_;
            fVar111 = auVar124._12_4_ - (float)local_2a8._4_4_;
            auVar124 = minps(auVar96,auVar79 | auVar122 | auVar112);
            fVar158 = auVar124._0_4_ - fStack_2a0;
            fVar164 = auVar124._4_4_ - fStack_2a0;
            fVar169 = auVar124._8_4_ - fStack_2a0;
            fVar138 = auVar124._12_4_ - fStack_2a0;
            fVar92 = fVar92 * fVar92 + fVar178 * fVar178 + fVar158 * fVar158;
            fVar99 = fVar99 * fVar99 + fVar179 * fVar179 + fVar164 * fVar164;
            fVar102 = fVar102 * fVar102 + fVar180 * fVar180 + fVar169 * fVar169;
            fVar111 = fVar111 * fVar111 + fVar181 * fVar181 + fVar138 * fVar138;
            uVar93 = (int)-(uint)(fVar92 < fVar102) >> 0x1f;
            uVar100 = (int)-(uint)(fVar99 < fVar111) >> 0x1f;
            fVar158 = (float)(~uVar93 & (uint)fVar92 | (uint)fVar102 & uVar93);
            fVar164 = (float)(~uVar100 & (uint)fVar99 | (uint)fVar111 & uVar100);
            fVar102 = (float)(~uVar93 & (uint)fVar102 | (uint)fVar92 & uVar93);
            fVar111 = (float)(~uVar100 & (uint)fVar111 | (uint)fVar99 & uVar100);
            uVar106 = uVar93 & auVar67._8_4_ | ~uVar93 & auVar67._0_4_;
            uVar62 = uVar100 & auVar67._12_4_ | ~uVar100 & auVar67._4_4_;
            uVar152 = uVar93 & auVar67._0_4_ | ~uVar93 & auVar67._8_4_;
            uVar159 = uVar100 & auVar67._4_4_ | ~uVar100 & auVar67._12_4_;
            uVar93 = (int)-(uint)(fVar158 < fVar164) >> 0x1f;
            uVar103 = (int)-(uint)(fVar102 < fVar111) >> 0x1f;
            fVar92 = (float)((uint)fVar158 & uVar93 | ~uVar93 & (uint)fVar164);
            fVar99 = (float)((uint)fVar111 & uVar103 | ~uVar103 & (uint)fVar102);
            uVar51 = uVar93 & uVar106 | ~uVar93 & uVar62;
            uVar155 = uVar103 & uVar159 | ~uVar103 & uVar152;
            uVar100 = (int)-(uint)(fVar92 < fVar99) >> 0x1f;
            auVar124._4_4_ = (uint)fVar92 & uVar100;
            auVar124._0_4_ = (uint)fVar99 & uVar100;
            auVar124._8_8_ = 0;
            auVar147._4_4_ = ~uVar100 & (uint)fVar92;
            auVar147._0_4_ = (uint)fVar164 & uVar93 | ~uVar93 & (uint)fVar158;
            auVar147._8_4_ = ~uVar100 & (uint)fVar99;
            auVar147._12_4_ = (uint)fVar102 & uVar103 | ~uVar103 & (uint)fVar111;
            auVar67._4_4_ = uVar100 & uVar51;
            auVar67._0_4_ = uVar100 & uVar155;
            auVar67._8_8_ = 0;
            auVar113._4_4_ = ~uVar100 & uVar51;
            auVar113._0_4_ = uVar93 & uVar62 | ~uVar93 & uVar106;
            auVar113._8_4_ = ~uVar100 & uVar155;
            auVar113._12_4_ = uVar103 & uVar152 | ~uVar103 & uVar159;
            _local_8c8 = auVar124 << 0x20 | auVar147;
            local_738 = auVar67 << 0x20 | auVar113;
            auVar65._4_4_ = -(uint)(SUB164(_local_8c8,4) < local_898);
            auVar65._0_4_ = -(uint)(SUB164(_local_8c8,0) < local_898);
            auVar65._8_4_ = -(uint)(SUB164(_local_8c8,8) < local_898);
            auVar65._12_4_ = -(uint)(SUB164(_local_8c8,0xc) < local_898);
            uVar100 = movmskps((int)pauVar50,auVar65);
            pauVar50 = (undefined1 (*) [16])(ulong)uVar100;
            uVar93 = __popcountdi2();
            local_6b8[0] = _local_8c8;
            if (uVar100 == 0) {
              local_6b8[0] = (undefined1  [16])0x0;
              uVar71 = 0;
              uVar82 = 0;
              uVar87 = 0;
              uVar91 = 0;
            }
            else {
              local_6f8 = (undefined1  [16])0x0;
              uVar42 = (ulong)uVar93 << 2;
              pauVar50 = &local_6f8;
              lVar47 = (4 - (long)(int)uVar93) * 4;
              puVar37 = (uint *)((long)local_6b8 + lVar47);
              if (7 < (uint)uVar42) {
                for (uVar43 = uVar42 >> 3 & 0x1fffffff; uVar43 != 0; uVar43 = uVar43 - 1) {
                  *(undefined8 *)*pauVar50 = *(undefined8 *)puVar37;
                  puVar37 = puVar37 + (ulong)bVar60 * -4 + 2;
                  pauVar50 = (undefined1 (*) [16])((long)pauVar50[-(ulong)bVar60] + 8);
                }
              }
              if ((uVar42 & 4) != 0) {
                *(uint *)*pauVar50 = *puVar37;
              }
              puVar37 = (uint *)(local_738 + lVar47);
              local_6b8[0] = (undefined1  [16])0x0;
              pauVar40 = local_6b8;
              if (7 < (uint)uVar42) {
                pauVar50 = local_6b8;
                for (uVar43 = uVar42 >> 3 & 0x1fffffff; pauVar40 = pauVar50, uVar43 != 0;
                    uVar43 = uVar43 - 1) {
                  *(undefined8 *)*pauVar50 = *(undefined8 *)puVar37;
                  puVar37 = puVar37 + (ulong)bVar60 * -4 + 2;
                  pauVar50 = (undefined1 (*) [16])((long)pauVar50[-(ulong)bVar60] + 8);
                }
              }
              uVar71 = local_6f8._0_4_;
              uVar82 = local_6f8._4_4_;
              uVar87 = local_6f8._8_4_;
              uVar91 = local_6f8._12_4_;
              if ((uVar42 & 4) != 0) {
                *(uint *)*pauVar40 = *puVar37;
              }
            }
            *(undefined4 *)((CollideSoftBodyVerticesVsTriangles *)&local_328 + lVar41 * 4 + 0xdc) =
                 uVar71;
            auStack_248[lVar41] = uVar82;
            auStack_248[lVar41 + 1] = uVar87;
            auStack_248[lVar41 + 2] = uVar91;
            local_898 = local_254;
            *(undefined1 (*) [16])(local_538 + lVar41) = local_6b8[0];
            iVar44 = uVar93 + local_338;
            local_738 = local_6b8[0];
            uVar93 = __LC9;
            uVar100 = _UNK_00112494;
            uVar103 = _UNK_00112498;
            uVar106 = _UNK_0011249c;
          }
          else if (uVar51 != 0xf) {
            local_8c8._0_4_ = uVar51;
            pauVar46 = local_6b8;
            puVar37 = (uint *)((ulong)((uVar62 & 0xfffffff) << 2) + lVar7);
            pauVar40 = (undefined1 (*) [16])(puVar37 + 1);
            uVar62 = (*puVar37 & 0x1fffffff) << 2;
            lVar41 = (ulong)uVar62 + 4;
            pauVar50 = pauVar40 + (uVar51 + 3 >> 2);
            pauVar54 = pauVar40;
            pauVar39 = pauVar46;
            do {
              uVar152 = *(uint *)*pauVar54;
              uVar155 = *(uint *)((long)*pauVar54 + 4);
              uVar159 = *(uint *)((long)*pauVar54 + 8);
              uVar59 = (ulong)(uVar152 >> 0xd & 0x7f8);
              uVar42 = (ulong)((uVar152 >> 0x18) << 3);
              uVar165 = *(uint *)((long)puVar37 + uVar59 + uVar62);
              uVar170 = *(uint *)((long)puVar37 + uVar42 + uVar62);
              uVar52 = (ulong)((uVar152 >> 8 & 0xff) << 3);
              uVar43 = (ulong)((uVar155 >> 8 & 0xff) << 3);
              uVar174 = *(uint *)((long)puVar37 + uVar42 + lVar41);
              uVar49 = (ulong)((uVar155 >> 0x18) << 3);
              uVar105 = *(uint *)((long)puVar37 + uVar49 + uVar62);
              uVar107 = *(uint *)((long)puVar37 + uVar52 + uVar62);
              uVar42 = (ulong)(uVar155 >> 0xd & 0x7f8);
              uVar109 = *(uint *)((long)puVar37 + uVar43 + uVar62);
              uVar57 = (ulong)(uVar152 * 8 & 0x7f8);
              uVar55 = (ulong)(uVar159 >> 0xd & 0x7f8);
              uVar152 = *(uint *)((long)puVar37 + uVar57 + uVar62);
              uVar110 = *(uint *)((long)puVar37 + uVar57 + lVar41);
              uVar115 = *(uint *)((long)puVar37 + uVar59 + lVar41);
              uVar116 = *(uint *)((long)puVar37 + uVar52 + lVar41);
              uVar52 = (ulong)(uVar155 * 8 & 0x7f8);
              uVar155 = *(uint *)((long)puVar37 + uVar52 + uVar62);
              uVar117 = *(uint *)((long)puVar37 + uVar52 + lVar41);
              uVar52 = (ulong)((uVar159 >> 0x18) * 8);
              uVar126 = *(uint *)((long)puVar37 + uVar49 + lVar41);
              uVar49 = (ulong)((uVar159 >> 8 & 0xff) * 8);
              uVar127 = *(uint *)((long)puVar37 + uVar49 + lVar41);
              uVar128 = *(uint *)((long)puVar37 + uVar42 + uVar62);
              uVar130 = *(uint *)((long)puVar37 + uVar42 + lVar41);
              uVar131 = *(uint *)((long)puVar37 + uVar43 + lVar41);
              uVar132 = *(uint *)((long)puVar37 + uVar55 + uVar62);
              uVar42 = (ulong)(uVar159 * 8 & 0x7f8);
              uVar159 = *(uint *)((long)puVar37 + uVar42 + uVar62);
              uVar134 = *(uint *)((long)puVar37 + uVar52 + uVar62);
              uVar135 = *(uint *)((long)puVar37 + uVar49 + uVar62);
              uVar136 = *(uint *)((long)puVar37 + uVar55 + lVar41);
              uVar140 = *(uint *)((long)puVar37 + uVar52 + lVar41);
              uVar141 = *(uint *)((long)puVar37 + uVar42 + lVar41);
              local_768._4_4_ =
                   (float)(uVar107 >> 0x15 | (uVar116 >> 0x15) << 0xb) * fVar80 + fVar68;
              local_768._0_4_ = (float)(int)(uVar107 & uVar100) * fVar70 + fVar61;
              local_768._8_4_ = (float)(int)(uVar116 & uVar100) * fVar83 + fVar69;
              local_768._12_4_ = 0;
              local_778._4_4_ =
                   (float)(uVar152 >> 0x15 | (uVar110 >> 0x15) << 0xb) * fVar80 + fVar68;
              local_778._0_4_ = (float)(int)(uVar152 & uVar93) * fVar70 + fVar61;
              local_778._8_4_ = (float)(int)(uVar110 & uVar93) * fVar83 + fVar69;
              local_778._12_4_ = 0;
              local_748._4_4_ =
                   (float)(uVar170 >> 0x15 | (uVar174 >> 0x15) << 0xb) * fVar80 + fVar68;
              local_748._0_4_ = (float)(int)(uVar170 & uVar106) * fVar70 + fVar61;
              local_748._8_4_ = (float)(int)(uVar174 & uVar106) * fVar83 + fVar69;
              local_748._12_4_ = 0;
              local_758._4_4_ =
                   (float)(uVar165 >> 0x15 | (uVar115 >> 0x15) << 0xb) * fVar80 + fVar68;
              local_758._0_4_ = (float)(int)(uVar165 & uVar103) * fVar70 + fVar61;
              local_758._8_4_ = (float)(int)(uVar115 & uVar103) * fVar83 + fVar69;
              local_758._12_4_ = 0;
              local_728._4_4_ =
                   (float)(uVar109 >> 0x15 | (uVar131 >> 0x15) << 0xb) * fVar80 + fVar68;
              local_728._0_4_ = (float)(int)(uVar109 & uVar100) * fVar70 + fVar61;
              local_728._8_4_ = (float)(int)(uVar131 & uVar100) * fVar83 + fVar69;
              local_728._12_4_ = 0;
              local_708._4_4_ =
                   (float)(uVar105 >> 0x15 | (uVar126 >> 0x15) << 0xb) * fVar80 + fVar68;
              local_708._0_4_ = (float)(int)(uVar105 & uVar106) * fVar70 + fVar61;
              local_708._8_4_ = (float)(int)(uVar126 & uVar106) * fVar83 + fVar69;
              local_708._12_4_ = 0;
              local_718._4_4_ =
                   (float)(uVar128 >> 0x15 | (uVar130 >> 0x15) << 0xb) * fVar80 + fVar68;
              local_718._0_4_ = (float)(int)(uVar128 & uVar103) * fVar70 + fVar61;
              local_718._8_4_ = (float)(int)(uVar130 & uVar103) * fVar83 + fVar69;
              local_718._12_4_ = 0;
              local_6e8._4_4_ =
                   (float)(uVar135 >> 0x15 | (uVar127 >> 0x15) << 0xb) * fVar80 + fVar68;
              local_6e8._0_4_ = (float)(int)(uVar135 & uVar100) * fVar70 + fVar61;
              local_6e8._8_4_ = (float)(int)(uVar127 & uVar100) * fVar83 + fVar69;
              local_6e8._12_4_ = 0;
              local_738._4_4_ =
                   (float)(uVar155 >> 0x15 | (uVar117 >> 0x15) << 0xb) * fVar80 + fVar68;
              local_738._0_4_ = (float)(int)(uVar155 & uVar93) * fVar70 + fVar61;
              local_738._8_4_ = (float)(int)(uVar117 & uVar93) * fVar83 + fVar69;
              local_738._12_4_ = 0;
              local_6f8._4_4_ =
                   (float)(uVar159 >> 0x15 | (uVar141 >> 0x15) << 0xb) * fVar80 + fVar68;
              local_6f8._0_4_ = (float)(int)(uVar159 & uVar93) * fVar70 + fVar61;
              local_6f8._8_4_ = (float)(int)(uVar141 & uVar93) * fVar83 + fVar69;
              local_6f8._12_4_ = 0;
              local_6c8._4_4_ =
                   (float)(uVar134 >> 0x15 | (uVar140 >> 0x15) << 0xb) * fVar80 + fVar68;
              local_6c8._0_4_ = (float)(int)(uVar134 & uVar106) * fVar70 + fVar61;
              local_6c8._8_4_ = (float)(int)(uVar140 & uVar106) * fVar83 + fVar69;
              local_6c8._12_4_ = 0;
              local_6d8 = (float)(int)(uVar132 & uVar103) * fVar70 + fVar61;
              fStack_6d4 = (float)(uVar132 >> 0x15 | (uVar136 >> 0x15) << 0xb) * fVar80 + fVar68;
              fStack_6d0 = (float)(int)(uVar136 & uVar103) * fVar83 + fVar69;
              uStack_6cc = 0;
              if (0 < (int)local_8c8._0_4_) {
                lVar47 = 0;
                pauVar38 = pauVar39;
                iVar48 = local_8c8._0_4_;
                do {
                  pauVar1 = (undefined1 (*) [16])(local_778 + lVar47);
                  auVar124 = *(undefined1 (*) [16])(local_738 + lVar47);
                  iVar48 = iVar48 + -1;
                  auVar96 = *(undefined1 (*) [16])(local_6f8 + lVar47);
                  pauVar39 = pauVar38 + 3;
                  lVar47 = lVar47 + 0x10;
                  *pauVar38 = *pauVar1;
                  pauVar38[1] = auVar124;
                  pauVar38[2] = auVar96;
                  if (3 < local_8c8._0_4_ - iVar48) break;
                  pauVar38 = pauVar39;
                } while (0 < iVar48);
                local_8c8._0_4_ = iVar48;
              }
              pauVar54 = pauVar54 + 1;
            } while (pauVar54 < pauVar50);
            puVar53 = local_48;
            uVar62 = uVar51;
            do {
              if (0 < (int)uVar62) {
                lVar41 = 1;
                do {
                  lVar47 = lVar41;
                  uVar62 = uVar62 - 1;
                  puVar53[lVar47 + -1] = *(undefined1 *)((long)*pauVar40 + lVar47 + 0xb);
                  lVar41 = lVar47 + 1;
                } while ((int)lVar47 < 4 && 0 < (int)uVar62);
                puVar53 = puVar53 + lVar47;
              }
              pauVar40 = pauVar40 + 1;
            } while (pauVar40 < pauVar50);
            pauVar40 = pauVar46 + (int)(uVar51 * 3);
            if (pauVar46 < pauVar40) {
              do {
                auVar96 = pauVar46[2];
                uVar34 = *(undefined8 *)*pauVar46;
                uVar35 = *(undefined8 *)(*pauVar46 + 8);
                auVar124 = pauVar46[1];
                fVar99 = auVar67._12_4_;
                local_8c8._4_4_ = auVar124._4_4_ - (float)uVar82;
                local_8c8._0_4_ = auVar124._0_4_ - (float)uVar71;
                uStack_8c0._0_4_ = auVar124._8_4_ - fVar92;
                uStack_8c0._4_4_ = auVar124._12_4_ - fVar99;
                pauVar50 = (undefined1 (*) [16])&local_77c;
                auVar184 = ClosestPoint::GetClosestPointOnTriangle<false>
                                     (CONCAT44(*(float *)(*pauVar46 + 4) - (float)uVar82,
                                               *(float *)*pauVar46 - (float)uVar71),
                                      CONCAT44(*(float *)(*pauVar46 + 0xc) - fVar99,
                                               *(float *)(*pauVar46 + 8) - fVar92),local_8c8,
                                      uStack_8c0,
                                      CONCAT44(*(float *)(pauVar46[2] + 4) - (float)uVar82,
                                               *(float *)pauVar46[2] - (float)uVar71),
                                      CONCAT44(*(float *)(pauVar46[2] + 0xc) - fVar99,
                                               *(float *)(pauVar46[2] + 8) - fVar92));
                fVar99 = auVar184._4_4_ * auVar184._4_4_ + auVar184._0_4_ * auVar184._0_4_ + 0.0 +
                         auVar184._8_4_ * auVar184._8_4_;
                if (fVar99 < local_898) {
                  _local_268 = auVar184;
                  local_250 = local_77c;
                  local_298 = uVar34;
                  uStack_290 = uVar35;
                  _local_288 = auVar124;
                  _local_278 = auVar96;
                  local_254 = fVar99;
                  local_898 = fVar99;
                }
                pauVar46 = pauVar46 + 3;
                uVar93 = __LC9;
                uVar100 = _UNK_00112494;
                uVar103 = _UNK_00112498;
                uVar106 = _UNK_0011249c;
              } while (pauVar46 < pauVar40);
            }
          }
          uVar62 = _LC45;
          uVar43 = (long)(iVar44 + -1);
          do {
            uVar42 = uVar43;
            iVar44 = (int)uVar42;
            if (iVar44 < 0) {
              if (local_898 < _LC27) {
                fVar158 = local_318._0_4_;
                fVar164 = local_318._4_4_;
                fVar169 = local_318._8_4_;
                fVar92 = (float)local_298 * local_328 + local_298._4_4_ * fVar158 +
                         (float)uStack_290 * local_308 + local_2f8;
                fVar99 = (float)local_298 * fStack_324 + local_298._4_4_ * fVar164 +
                         (float)uStack_290 * fStack_304 + fStack_2f4;
                fVar102 = (float)local_298 * fStack_320 + local_298._4_4_ * fVar169 +
                          (float)uStack_290 * fStack_300 + fStack_2f0;
                fVar61 = (fStack_280 * local_308 +
                          (float)local_288._0_4_ * local_328 + (float)local_288._4_4_ * fVar158 +
                         local_2f8) - fVar92;
                fVar68 = (fStack_280 * fStack_304 +
                          (float)local_288._0_4_ * fStack_324 + (float)local_288._4_4_ * fVar164 +
                         fStack_2f4) - fVar99;
                fVar69 = (fStack_280 * fStack_300 +
                          (float)local_288._0_4_ * fStack_320 + (float)local_288._4_4_ * fVar169 +
                         fStack_2f0) - fVar102;
                fVar70 = ((float)local_278._0_4_ * local_328 + (float)local_278._4_4_ * fVar158 +
                          fStack_270 * local_308 + local_2f8) - fVar92;
                fVar80 = ((float)local_278._0_4_ * fStack_324 + (float)local_278._4_4_ * fVar164 +
                          fStack_270 * fStack_304 + fStack_2f4) - fVar99;
                fVar83 = ((float)local_278._0_4_ * fStack_320 + (float)local_278._4_4_ * fVar169 +
                          fStack_270 * fStack_300 + fStack_2f0) - fVar102;
                fVar111 = fVar80 * fVar61 - fVar68 * fVar70;
                fVar68 = fVar83 * fVar68 - fVar69 * fVar80;
                fVar69 = fVar70 * fVar69 - fVar61 * fVar83;
                fVar61 = fVar111 * fVar111 + fVar69 * fVar69 + fVar68 * fVar68 + 0.0;
                auVar72 = __LC49;
                if (_LC21 < fVar61) {
                  auVar114._0_4_ = SQRT(fVar61);
                  auVar66._4_4_ = fVar69;
                  auVar66._0_4_ = fVar68;
                  auVar66._8_4_ = fVar111;
                  auVar66._12_4_ = fVar111;
                  auVar114._4_4_ = auVar114._0_4_;
                  auVar114._8_4_ = auVar114._0_4_;
                  auVar114._12_4_ = auVar114._0_4_;
                  auVar67 = divps(auVar66,auVar114);
                  auVar72 = auVar67._0_12_;
                }
                fVar68 = local_258 * auVar72._0_4_;
                fVar69 = local_258 * auVar72._4_4_;
                local_8e8 = CONCAT44(fVar69,fVar68);
                fVar61 = local_258 * auVar72._8_4_;
                if (local_250 == 7) {
                  fVar70 = (fVar102 - fVar151) * fVar61 +
                           (fVar99 - fVar148) * fVar69 + (fVar92 - fVar139) * fVar68 + 0.0;
                  if (_LC50 < fVar70) {
                    fVar70 = _LC50;
                  }
                  if (*pfVar58 < fVar70) {
                    *pfVar58 = fVar70;
                    uVar62 = (uint)(fVar102 * fVar61 + fVar99 * fVar69 + fVar92 * fVar68 + 0.0) ^
                             _LC45;
                    *(float *)*local_7e8 = fVar68;
                    *(float *)(*local_7e8 + 4) = fVar69;
                    *(float *)(*local_7e8 + 8) = fVar61;
                    *(uint *)(*local_7e8 + 0xc) = uVar62;
                    *local_7e0 = param_5;
                  }
                }
                else {
                  fVar70 = (float)local_268._0_4_ + (float)local_2a8._0_4_;
                  fVar80 = (float)local_268._4_4_ + (float)local_2a8._4_4_;
                  fVar83 = (float)uStack_260 + fStack_2a0;
                  fStack_79c = auVar63._12_4_;
                  fVar92 = fVar70 * local_328 + fVar80 * fVar158 + fVar83 * local_308 + local_2f8;
                  fVar99 = fVar70 * fStack_324 + fVar80 * fVar164 + fVar83 * fStack_304 + fStack_2f4
                  ;
                  fVar102 = fVar70 * fStack_320 + fVar80 * fVar169 + fVar83 * fStack_300 +
                            fStack_2f0;
                  auVar63._0_4_ = fVar139 - fVar92;
                  auVar63._4_4_ = fVar148 - fVar99;
                  auVar63._8_4_ = fVar151 - fVar102;
                  auVar63._12_4_ =
                       fStack_79c -
                       (fVar70 * fStack_31c + fVar80 * local_318._12_4_ + fVar83 * fStack_2fc +
                       fStack_2ec);
                  if (0.0 < fVar61 * auVar63._8_4_ +
                            fVar69 * auVar63._4_4_ + fVar68 * auVar63._0_4_ + 0.0) {
                    auVar95._0_4_ =
                         SQRT(auVar63._8_4_ * auVar63._8_4_ +
                              auVar63._4_4_ * auVar63._4_4_ + auVar63._0_4_ * auVar63._0_4_ + 0.0);
                    if (*pfVar58 < (float)((uint)auVar95._0_4_ ^ _LC45)) {
                      *pfVar58 = (float)((uint)auVar95._0_4_ ^ _LC45);
                      if (0.0 < auVar95._0_4_) {
                        auVar95._4_4_ = auVar95._0_4_;
                        auVar95._8_4_ = auVar95._0_4_;
                        auVar95._12_4_ = auVar95._0_4_;
                        auVar63 = divps(auVar63,auVar95);
                        local_8e8 = auVar63._0_8_;
                        fVar61 = auVar63._8_4_;
                      }
                      auVar142._12_4_ =
                           (uint)(fVar102 * fVar61 +
                                 fVar99 * (float)((ulong)local_8e8 >> 0x20) +
                                 fVar92 * (float)local_8e8 + 0.0) ^ uVar62;
                      auVar142._8_4_ = fVar61;
                      auVar142._0_8_ = local_8e8;
                      *local_7e8 = auVar142;
                      *local_7e0 = param_5;
                    }
                  }
                }
              }
              goto LAB_0010bb80;
            }
            uVar43 = uVar42 - 1;
          } while (local_898 < *(float *)(local_24c + uVar42 * 4) ||
                   local_898 == *(float *)(local_24c + uVar42 * 4));
          local_338 = iVar44;
          uVar42 = uVar42 & 0xffffffff;
          uVar62 = local_538[iVar44];
        } while( true );
      }
LAB_0010bb80:
      local_7e0 = (undefined4 *)((long)local_7e0 + (long)iVar5);
      pauVar45 = (undefined1 (*) [16])((long)*pauVar45 + (long)iVar2);
      local_7e8 = (undefined1 (*) [16])(*local_7e8 + iVar3);
      pfVar58 = (float *)((long)pfVar58 + (long)iVar4);
      pauVar56 = (undefined1 (*) [16])(*pauVar56 + iVar6);
    } while ((undefined1 (*) [16])(puVar36 + param_4 * iVar6) != pauVar56);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::MeshShape::RestoreMaterialState(JPH::RefConst<JPH::PhysicsMaterial> const*, unsigned int) */

void __thiscall JPH::MeshShape::RestoreMaterialState(MeshShape *this,RefConst *param_1,uint param_2)

{
  Array<JPH::RefConst<JPH::PhysicsMaterial>,JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial>>>
  ::assign<JPH::RefConst<JPH::PhysicsMaterial>const*>
            ((Array<JPH::RefConst<JPH::PhysicsMaterial>,JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial>>>
              *)(this + 0x20),param_1,param_1 + (ulong)param_2 * 8);
  return;
}



/* JPH::MeshShape::MeshShape(JPH::MeshShapeSettings const&, JPH::Result<JPH::Ref<JPH::Shape> >&) */

void __thiscall
JPH::MeshShape::MeshShape(MeshShape *this,MeshShapeSettings *param_1,Result *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  char cVar18;
  int iVar19;
  ulong uVar20;
  uint *puVar21;
  long lVar22;
  Node *pNVar23;
  undefined8 *puVar24;
  uint uVar25;
  long lVar26;
  uint *puVar27;
  char *pcVar28;
  uint *puVar29;
  uint *puVar30;
  uint *puVar31;
  uint uVar32;
  undefined8 *puVar33;
  long in_FS_OFFSET;
  float fVar34;
  int iVar35;
  int iVar38;
  int iVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar48;
  int iVar49;
  undefined1 auVar46 [16];
  int iVar50;
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar54 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  char *local_1a0;
  undefined1 local_198 [16];
  long local_188;
  undefined1 local_178 [16];
  long local_168;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  AABBTreeBuilder local_118 [16];
  undefined8 local_108 [2];
  long local_f8;
  undefined8 local_f0 [2];
  long local_e0;
  code *local_d8 [3];
  undefined8 local_c0;
  long local_b0;
  undefined8 local_a8;
  long local_98;
  undefined8 local_80;
  long local_70;
  Result *local_68;
  long local_60;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  *(undefined2 *)(this + 0x18) = 0xc03;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  lVar26 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x10) = uVar13;
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__MeshShape_00112310;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined2 *)(this + 0x58) = 0;
  if (lVar26 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar28 = "Need triangles to create a mesh shape!";
      goto LAB_0010d26e;
    }
    goto LAB_0010da6c;
  }
  puVar31 = *(uint **)(param_1 + 0x68);
  puVar30 = puVar31 + lVar26 * 5;
  if (puVar31 == puVar30) {
    auVar52._4_4_ = _LC20;
    auVar52._0_4_ = _LC20;
    auVar52._8_4_ = _LC20;
    auVar52._12_4_ = _LC20;
    auVar51._4_4_ = _LC27;
    auVar51._0_4_ = _LC27;
    auVar51._8_4_ = _LC27;
    auVar51._12_4_ = _LC27;
  }
  else {
    lVar22 = *(long *)(param_1 + 0x50);
    puVar27 = puVar31 + 3;
    auVar52._4_4_ = _LC20;
    auVar52._0_4_ = _LC20;
    auVar52._8_4_ = _LC20;
    auVar52._12_4_ = _LC20;
    auVar51._4_4_ = _LC27;
    auVar51._0_4_ = _LC27;
    auVar51._8_4_ = _LC27;
    auVar51._12_4_ = _LC27;
    puVar21 = puVar31;
    puVar29 = puVar31;
    do {
      do {
        uVar20 = (ulong)*puVar21;
        puVar21 = puVar21 + 1;
        uVar3 = *(undefined4 *)(lVar22 + 8 + uVar20 * 0xc);
        auVar37._4_4_ = *(undefined4 *)(lVar22 + 4 + uVar20 * 0xc);
        auVar37._0_4_ = *(undefined4 *)(lVar22 + uVar20 * 0xc);
        auVar37._8_4_ = uVar3;
        auVar37._12_4_ = uVar3;
        auVar51 = minps(auVar51,auVar37);
        auVar52 = maxps(auVar52,auVar37);
      } while (puVar27 != puVar21);
      puVar21 = puVar29 + 5;
      puVar27 = puVar27 + 5;
      puVar29 = puVar21;
    } while (puVar30 != puVar21);
  }
  uVar32 = (int)lVar26 - 1;
  if (-1 < (int)uVar32) {
    lVar26 = *(long *)(param_1 + 0x50);
    puVar27 = puVar31 + (long)(int)uVar32 * 5;
LAB_0010cf2b:
    uVar20 = (ulong)*puVar27;
    fVar4 = *(float *)(lVar26 + 4 + uVar20 * 0xc);
    fVar5 = *(float *)(lVar26 + uVar20 * 0xc);
    fVar6 = *(float *)(lVar26 + 8 + uVar20 * 0xc);
    uVar20 = (ulong)puVar27[1];
    fVar7 = *(float *)(lVar26 + 4 + uVar20 * 0xc);
    fVar8 = *(float *)(lVar26 + uVar20 * 0xc);
    fVar9 = *(float *)(lVar26 + 8 + uVar20 * 0xc);
    uVar20 = (ulong)puVar27[2];
    fVar53 = fVar8 - fVar5;
    fVar55 = fVar7 - fVar4;
    fVar10 = *(float *)(lVar26 + 4 + uVar20 * 0xc);
    fVar11 = *(float *)(lVar26 + uVar20 * 0xc);
    fVar12 = *(float *)(lVar26 + 8 + uVar20 * 0xc);
    fVar59 = fVar11 - fVar5;
    fVar60 = fVar10 - fVar4;
    fVar34 = fVar60 * fVar53 - fVar55 * fVar59;
    fVar55 = (fVar12 - fVar6) * fVar55 - (fVar9 - fVar6) * fVar60;
    fVar53 = fVar59 * (fVar9 - fVar6) - fVar53 * (fVar12 - fVar6);
    if (_LC31 < fVar34 * fVar34 + fVar53 * fVar53 + fVar55 * fVar55 + 0.0) {
      auVar54._4_4_ = _LC58;
      auVar54._0_4_ = _LC58;
      auVar54._8_4_ = _LC58;
      auVar54._12_4_ = _LC58;
      fVar34 = auVar51._0_4_;
      fVar55 = auVar51._4_4_;
      fVar53 = auVar51._8_4_;
      fVar59 = auVar51._12_4_;
      auVar36._0_4_ = auVar52._0_4_ - fVar34;
      auVar36._4_4_ = auVar52._4_4_ - fVar55;
      auVar36._8_4_ = auVar52._8_4_ - fVar53;
      auVar36._12_4_ = auVar52._12_4_ - fVar59;
      auVar16._4_4_ = _LC23;
      auVar16._0_4_ = _LC23;
      auVar16._8_4_ = _LC23;
      auVar16._12_4_ = _LC23;
      auVar37 = maxps(auVar36,auVar16);
      auVar37 = divps(auVar54,auVar37);
      fVar60 = auVar37._0_4_;
      fVar56 = auVar37._4_4_;
      fVar57 = auVar37._8_4_;
      fVar58 = auVar37._12_4_;
      iVar41 = (int)((fVar8 - fVar34) * fVar60 + _LC4);
      iVar42 = (int)((fVar7 - fVar55) * fVar56 + _LC4);
      iVar43 = (int)((fVar9 - fVar53) * fVar57 + _LC4);
      iVar44 = (int)((fVar9 - fVar59) * fVar58 + _LC4);
      iVar35 = (int)((fVar5 - fVar34) * fVar60 + _LC4);
      iVar38 = (int)((fVar4 - fVar55) * fVar56 + _LC4);
      iVar39 = (int)((fVar6 - fVar53) * fVar57 + _LC4);
      iVar40 = (int)((fVar6 - fVar59) * fVar58 + _LC4);
      auVar46._0_4_ = -(uint)(iVar41 == iVar35);
      auVar46._4_4_ = -(uint)(iVar42 == iVar38);
      auVar46._8_4_ = -(uint)(iVar43 == iVar39);
      auVar46._12_4_ = -(uint)(iVar44 == iVar40);
      iVar19 = movmskps(puVar27[2] * 3,auVar46);
      if (iVar19 != 0xf) {
        iVar45 = (int)((fVar11 - fVar34) * fVar60 + _LC4);
        iVar48 = (int)((fVar10 - fVar55) * fVar56 + _LC4);
        iVar49 = (int)((fVar12 - fVar53) * fVar57 + _LC4);
        iVar50 = (int)((fVar12 - fVar59) * fVar58 + _LC4);
        auVar15._4_4_ = -(uint)(iVar42 == iVar48);
        auVar15._0_4_ = -(uint)(iVar41 == iVar45);
        auVar15._8_4_ = -(uint)(iVar43 == iVar49);
        auVar15._12_4_ = -(uint)(iVar44 == iVar50);
        iVar19 = movmskps(iVar19,auVar15);
        if ((iVar19 != 0xf) &&
           (auVar47._0_4_ = -(uint)(iVar45 == iVar35), auVar47._4_4_ = -(uint)(iVar48 == iVar38),
           auVar47._8_4_ = -(uint)(iVar49 == iVar39), auVar47._12_4_ = -(uint)(iVar50 == iVar40),
           iVar19 = movmskps(iVar19,auVar47), iVar19 != 0xf)) {
          puVar21 = puVar27;
LAB_0010d06e:
          if ((ulong)*puVar21 < *(ulong *)(param_1 + 0x40)) goto code_r0x0010d07a;
          JPH::StringFormat_abi_cxx11_
                    ((char *)&local_68,"Vertex index %u is beyond vertex list (size: %u)",
                     (ulong)*puVar21);
          if (param_2[0x20] == (Result)0x1) {
            plVar14 = *(long **)param_2;
            if (plVar14 != (long *)0x0) {
              LOCK();
              plVar1 = plVar14 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)(*plVar14 + 8))();
              }
            }
          }
          else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
            (*Free)();
          }
          *(Result **)param_2 = param_2 + 0x10;
          param_2[0x20] = (Result)0x0;
          if (local_68 == (Result *)local_58) {
            uVar20 = local_60 + 1;
            uVar32 = (uint)uVar20;
            if (uVar32 < 8) {
              if ((uVar20 & 4) == 0) {
                if ((uVar32 != 0) && (param_2[0x10] = *local_68, (uVar20 & 2) != 0)) {
                  *(undefined2 *)(param_2 + (uVar20 & 0xffffffff) + 0xe) =
                       *(undefined2 *)(local_68 + ((uVar20 & 0xffffffff) - 2));
                }
              }
              else {
                *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)local_68;
                *(undefined4 *)(param_2 + (uVar20 & 0xffffffff) + 0xc) =
                     *(undefined4 *)(local_68 + ((uVar20 & 0xffffffff) - 4));
              }
            }
            else {
              *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)local_68;
              *(undefined8 *)(param_2 + (uVar20 & 0xffffffff) + 8) =
                   *(undefined8 *)(local_68 + ((uVar20 & 0xffffffff) - 8));
              lVar26 = (long)(param_2 + 0x10) - ((ulong)(param_2 + 0x18) & 0xfffffffffffffff8);
              uVar32 = uVar32 + (int)lVar26 & 0xfffffff8;
              if (7 < uVar32) {
                uVar25 = 0;
                do {
                  uVar20 = (ulong)uVar25;
                  uVar25 = uVar25 + 8;
                  *(undefined8 *)(((ulong)(param_2 + 0x18) & 0xfffffffffffffff8) + uVar20) =
                       *(undefined8 *)(local_68 + (uVar20 - lVar26));
                } while (uVar25 < uVar32);
              }
            }
          }
          else {
            *(Result **)param_2 = local_68;
            *(undefined8 *)(param_2 + 0x10) = local_58[0];
          }
          *(long *)(param_2 + 8) = local_60;
          param_2[0x20] = (Result)0x2;
          goto LAB_0010d21e;
        }
      }
    }
    JPH::StringFormat_abi_cxx11_((char *)&local_68,"Triangle %d is degenerate!",(ulong)uVar32);
    if (param_2[0x20] == (Result)0x1) {
      plVar14 = *(long **)param_2;
      if (plVar14 != (long *)0x0) {
        LOCK();
        plVar1 = plVar14 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar14 + 8))();
        }
      }
    }
    else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
      (*Free)();
    }
    *(Result **)param_2 = param_2 + 0x10;
    param_2[0x20] = (Result)0x0;
    if (local_68 == (Result *)local_58) {
      uVar20 = local_60 + 1;
      uVar32 = (uint)uVar20;
      if (uVar32 < 8) {
        if ((uVar20 & 4) == 0) {
          if ((uVar32 != 0) && (param_2[0x10] = *local_68, (uVar20 & 2) != 0)) {
            *(undefined2 *)(param_2 + (uVar20 & 0xffffffff) + 0xe) =
                 *(undefined2 *)(local_68 + ((uVar20 & 0xffffffff) - 2));
          }
        }
        else {
          *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)local_68;
          *(undefined4 *)(param_2 + (uVar20 & 0xffffffff) + 0xc) =
               *(undefined4 *)(local_68 + ((uVar20 & 0xffffffff) - 4));
        }
      }
      else {
        *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)local_68;
        *(undefined8 *)(param_2 + (uVar20 & 0xffffffff) + 8) =
             *(undefined8 *)(local_68 + ((uVar20 & 0xffffffff) - 8));
        lVar26 = (long)(param_2 + 0x10) - ((ulong)(param_2 + 0x18) & 0xfffffffffffffff8);
        uVar32 = uVar32 + (int)lVar26 & 0xfffffff8;
        if (7 < uVar32) {
          uVar25 = 0;
          do {
            uVar20 = (ulong)uVar25;
            uVar25 = uVar25 + 8;
            *(undefined8 *)(((ulong)(param_2 + 0x18) & 0xfffffffffffffff8) + uVar20) =
                 *(undefined8 *)(local_68 + (uVar20 - lVar26));
          } while (uVar25 < uVar32);
        }
      }
    }
    else {
      *(Result **)param_2 = local_68;
      *(undefined8 *)(param_2 + 0x10) = local_58[0];
    }
    *(long *)(param_2 + 8) = local_60;
    param_2[0x20] = (Result)0x2;
    goto LAB_0010d21e;
  }
LAB_0010d095:
  if ((Array<JPH::RefConst<JPH::PhysicsMaterial>,JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial>>>
       *)(this + 0x20) ==
      (Array<JPH::RefConst<JPH::PhysicsMaterial>,JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial>>>
       *)(param_1 + 0x70)) {
joined_r0x0010d3f0:
    for (; puVar31 != puVar30; puVar31 = puVar31 + 5) {
      if (puVar31[3] != 0) {
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010da6c;
        pcVar28 = "No materials present, all triangles should have material index 0";
        goto LAB_0010d26e;
      }
    }
LAB_0010d49f:
    if (7 < *(int *)(param_1 + 0x88) - 1U) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        pcVar28 = "Invalid max triangles per leaf";
LAB_0010d26e:
        Result<JPH::Ref<JPH::Shape>>::SetError((Result<JPH::Ref<JPH::Shape>> *)param_2,pcVar28);
        return;
      }
      goto LAB_0010da6c;
    }
    puVar33 = *(undefined8 **)(param_1 + 0x68);
    local_188 = 0;
    local_198 = (undefined1  [16])0x0;
    lVar26 = *(long *)(param_1 + 0x58) * 0x14;
    puVar2 = (undefined8 *)((long)puVar33 + lVar26);
    if (lVar26 != 0) {
      local_188 = (*Reallocate)(0,0);
      local_198._8_8_ = (lVar26 >> 2) * -0x3333333333333333;
      if (puVar33 != puVar2) {
        puVar24 = (undefined8 *)(local_188 + local_198._0_8_ * 0x14);
        lVar26 = local_198._0_8_;
        do {
          lVar26 = lVar26 + 1;
          local_198._0_8_ = lVar26;
          if (puVar24 != (undefined8 *)0x0) {
            uVar13 = puVar33[1];
            *puVar24 = *puVar33;
            puVar24[1] = uVar13;
            *(undefined4 *)(puVar24 + 2) = *(undefined4 *)(puVar33 + 2);
          }
          puVar33 = (undefined8 *)((long)puVar33 + 0x14);
          puVar24 = (undefined8 *)((long)puVar24 + 0x14);
        } while (puVar2 != puVar33);
      }
    }
    sFindActiveEdges(param_1,(Array *)local_198);
    JPH::TriangleSplitterBinning::TriangleSplitterBinning
              ((TriangleSplitterBinning *)local_d8,(Array *)(param_1 + 0x40),(Array *)local_198,8,
               0x80,6);
    JPH::AABBTreeBuilder::AABBTreeBuilder
              (local_118,(TriangleSplitter *)local_d8,*(uint *)(param_1 + 0x88));
    local_158 = (undefined1  [16])0x0;
    local_148 = (undefined1  [16])0x0;
    local_138 = (undefined1  [16])0x0;
    local_128 = 0;
    pNVar23 = (Node *)JPH::AABBTreeBuilder::Build((AABBTreeBuilderStats *)local_118);
    local_178 = (undefined1  [16])0x0;
    local_168 = 0;
    local_1a0 = (char *)0x0;
    cVar18 = AABBTreeToBuffer<JPH::TriangleCodecIndexed8BitPackSOA4Flags,JPH::NodeCodecQuadTreeHalfFloat>
             ::Convert((AABBTreeToBuffer<JPH::TriangleCodecIndexed8BitPackSOA4Flags,JPH::NodeCodecQuadTreeHalfFloat>
                        *)local_178,(Array *)local_f0,(Array *)local_108,(Array *)(param_1 + 0x40),
                       pNVar23,(bool)param_1[0x90],&local_1a0);
    if (cVar18 == '\0') {
      Result<JPH::Ref<JPH::Shape>>::SetError((Result<JPH::Ref<JPH::Shape>> *)param_2,local_1a0);
      lVar26 = local_168;
    }
    else {
      auVar51 = *(undefined1 (*) [16])(this + 0x38);
      lVar26 = *(long *)(this + 0x48);
      *(undefined8 *)(this + 0x38) = local_178._0_8_;
      *(undefined8 *)(this + 0x40) = local_178._8_8_;
      *(long *)(this + 0x48) = local_168;
      local_178 = auVar51;
      if (*(byte *)(local_168 + 0x1c) + 3 < 0x21) {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
        if (param_2[0x20] == (Result)0x1) {
          plVar14 = *(long **)param_2;
          local_168 = lVar26;
          if (plVar14 != (long *)0x0) {
            LOCK();
            plVar1 = plVar14 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar14 + 8))();
            }
          }
        }
        else {
          local_168 = lVar26;
          if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
            (*Free)();
          }
        }
        *(MeshShape **)param_2 = this;
        param_2[0x20] = (Result)0x1;
        lVar26 = local_168;
      }
      else {
        local_168 = lVar26;
        Result<JPH::Ref<JPH::Shape>>::SetError
                  ((Result<JPH::Ref<JPH::Shape>> *)param_2,
                   "Mesh is too big and exceeds the amount of available sub shape ID bits");
      }
    }
    if (lVar26 != 0) {
      (*AlignedFree)(lVar26);
    }
    if (local_e0 != 0) {
      local_f0[0] = 0;
      (*Free)();
    }
    if (local_f8 != 0) {
      local_108[0] = 0;
      (*Free)();
    }
    local_d8[0] = JPH::Indexify;
    if (local_70 != 0) {
      local_80 = 0;
      (*Free)();
    }
    local_d8[0] = (code *)&DAT_001122a8;
    if (local_98 != 0) {
      local_a8 = 0;
      (*Free)();
    }
    if (local_b0 != 0) {
      local_c0 = 0;
      (*Free)();
    }
    if (local_188 != 0) {
      auVar17._8_8_ = 0;
      auVar17._0_8_ = local_198._8_8_;
      local_198 = auVar17 << 0x40;
      (*Free)();
    }
  }
  else {
    Array<JPH::RefConst<JPH::PhysicsMaterial>,JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial>>>
    ::assign<JPH::RefConst<JPH::PhysicsMaterial>const*>
              ((Array<JPH::RefConst<JPH::PhysicsMaterial>,JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial>>>
                *)(this + 0x20),*(RefConst **)(param_1 + 0x80),
               *(RefConst **)(param_1 + 0x80) + *(long *)(param_1 + 0x70) * 8);
    uVar20 = *(ulong *)(this + 0x20);
    if (uVar20 == 0) {
      puVar31 = *(uint **)(param_1 + 0x68);
      puVar30 = puVar31 + *(long *)(param_1 + 0x58) * 5;
      goto joined_r0x0010d3f0;
    }
    if (uVar20 < 0x21) {
      lVar22 = *(long *)(param_1 + 0x68);
      lVar26 = lVar22 + *(long *)(param_1 + 0x58) * 0x14;
      for (; lVar22 != lVar26; lVar22 = lVar22 + 0x14) {
        if (uVar20 <= *(uint *)(lVar22 + 0xc)) {
          JPH::StringFormat_abi_cxx11_
                    ((char *)&local_68,"Triangle material %u is beyond material list (size: %u)",
                     (ulong)*(uint *)(lVar22 + 0xc),uVar20 & 0xffffffff);
          if (param_2[0x20] == (Result)0x1) {
            plVar14 = *(long **)param_2;
            if (plVar14 != (long *)0x0) {
              LOCK();
              plVar1 = plVar14 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)(*plVar14 + 8))();
              }
            }
          }
          else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
            (*Free)();
          }
          *(Result **)param_2 = param_2 + 0x10;
          param_2[0x20] = (Result)0x0;
          if (local_68 != (Result *)local_58) goto LAB_0010d175;
          uVar20 = local_60 + 1;
          if ((uint)uVar20 < 8) goto LAB_0010da3f;
          *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)local_68;
          *(undefined8 *)(param_2 + (uVar20 & 0xffffffff) + 8) =
               *(undefined8 *)(local_68 + ((uVar20 & 0xffffffff) - 8));
          lVar26 = (long)(param_2 + 0x10) - ((ulong)(param_2 + 0x18) & 0xfffffffffffffff8);
          uVar32 = (uint)uVar20 + (int)lVar26 & 0xfffffff8;
          if (7 < uVar32) {
            uVar25 = 0;
            do {
              uVar20 = (ulong)uVar25;
              uVar25 = uVar25 + 8;
              *(undefined8 *)(((ulong)(param_2 + 0x18) & 0xfffffffffffffff8) + uVar20) =
                   *(undefined8 *)(local_68 + (uVar20 - lVar26));
            } while (uVar25 < uVar32);
          }
          goto LAB_0010d186;
        }
      }
      goto LAB_0010d49f;
    }
    JPH::StringFormat_abi_cxx11_((char *)&local_68,"Supporting max %d materials per mesh",0x20);
    if (param_2[0x20] == (Result)0x1) {
      plVar14 = *(long **)param_2;
      if (plVar14 != (long *)0x0) {
        LOCK();
        plVar1 = plVar14 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar14 + 8))();
        }
      }
    }
    else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
      (*Free)();
    }
    *(Result **)param_2 = param_2 + 0x10;
    param_2[0x20] = (Result)0x0;
    if (local_68 == (Result *)local_58) {
      uVar20 = local_60 + 1;
      if ((uint)uVar20 < 8) {
LAB_0010da3f:
        if ((uVar20 & 4) == 0) {
          if (((int)uVar20 != 0) && (param_2[0x10] = *local_68, (uVar20 & 2) != 0)) {
            *(undefined2 *)(param_2 + (uVar20 & 0xffffffff) + 0xe) =
                 *(undefined2 *)(local_68 + ((uVar20 & 0xffffffff) - 2));
          }
        }
        else {
          *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)local_68;
          *(undefined4 *)(param_2 + (uVar20 & 0xffffffff) + 0xc) =
               *(undefined4 *)(local_68 + ((uVar20 & 0xffffffff) - 4));
        }
      }
      else {
        *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)local_68;
        *(undefined8 *)(param_2 + (uVar20 & 0xffffffff) + 8) =
             *(undefined8 *)(local_68 + ((uVar20 & 0xffffffff) - 8));
        lVar26 = (long)(param_2 + 0x10) - ((ulong)(param_2 + 0x18) & 0xfffffffffffffff8);
        uVar32 = (uint)uVar20 + (int)lVar26 & 0xfffffff8;
        if (7 < uVar32) {
          uVar25 = 0;
          do {
            uVar20 = (ulong)uVar25;
            uVar25 = uVar25 + 8;
            *(undefined8 *)(((ulong)(param_2 + 0x18) & 0xfffffffffffffff8) + uVar20) =
                 *(undefined8 *)(local_68 + (uVar20 - lVar26));
          } while (uVar25 < uVar32);
        }
      }
    }
    else {
LAB_0010d175:
      *(Result **)param_2 = local_68;
      *(undefined8 *)(param_2 + 0x10) = local_58[0];
    }
LAB_0010d186:
    *(long *)(param_2 + 8) = local_60;
    param_2[0x20] = (Result)0x2;
  }
LAB_0010d21e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010da6c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0010d07a:
  puVar21 = puVar21 + 1;
  if (puVar27 + 3 == puVar21) goto code_r0x0010d083;
  goto LAB_0010d06e;
code_r0x0010d083:
  uVar32 = uVar32 - 1;
  puVar27 = puVar27 + -5;
  if (uVar32 == 0xffffffff) goto LAB_0010d095;
  goto LAB_0010cf2b;
}



/* JPH::MeshShapeSettings::Create() const */

void JPH::MeshShapeSettings::Create(void)

{
  MeshShape *pMVar1;
  undefined1 *__src;
  ulong __n;
  long lVar2;
  MeshShapeSettings MVar3;
  MeshShape *this;
  long *__dest;
  MeshShapeSettings *in_RSI;
  MeshShapeSettings *this_00;
  long *in_RDI;
  char *pcVar4;
  
  MVar3 = in_RSI[0x38];
  this_00 = in_RSI;
  if (MVar3 == (MeshShapeSettings)0x0) {
    this = (MeshShape *)(*Allocate)(0x60);
    MeshShape::MeshShape(this,in_RSI,(Result *)(in_RSI + 0x18));
    pMVar1 = this + 8;
    LOCK();
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)pMVar1 = *(int *)pMVar1 + -1;
    UNLOCK();
    if (*(int *)pMVar1 == 0) {
      (**(code **)(*(long *)this + 8))(this);
    }
    MVar3 = in_RSI[0x38];
  }
  *(MeshShapeSettings *)(in_RDI + 4) = MVar3;
  if (MVar3 == (MeshShapeSettings)0x1) {
    lVar2 = *(long *)(in_RSI + 0x18);
    *in_RDI = lVar2;
    if (lVar2 == 0) {
      return;
    }
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    return;
  }
  if (MVar3 != (MeshShapeSettings)0x2) {
    return;
  }
  __dest = in_RDI + 2;
  *in_RDI = (long)__dest;
  __src = *(undefined1 **)(in_RSI + 0x18);
  __n = *(ulong *)(in_RSI + 0x20);
  if (__n < 0x10) {
    if (__n == 1) {
      *(undefined1 *)(in_RDI + 2) = *__src;
      goto LAB_0010db07;
    }
    if (__n == 0) goto LAB_0010db07;
  }
  else {
    if ((long)__n < 0) {
      pcVar4 = "basic_string::_M_create";
      std::__throw_length_error("basic_string::_M_create");
      if (this_00 != (MeshShapeSettings *)(pcVar4 + 0x20)) {
        Array<JPH::RefConst<JPH::PhysicsMaterial>,JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial>>>
        ::assign<JPH::RefConst<JPH::PhysicsMaterial>const*>
                  ((Array<JPH::RefConst<JPH::PhysicsMaterial>,JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial>>>
                    *)this_00,*(RefConst **)(pcVar4 + 0x30),
                   *(RefConst **)(pcVar4 + 0x30) + *(long *)(pcVar4 + 0x20) * 8);
        return;
      }
      return;
    }
    __dest = (long *)(*Allocate)(__n + 1);
    in_RDI[2] = __n;
    *in_RDI = (long)__dest;
  }
  memcpy(__dest,__src,__n);
  __dest = (long *)*in_RDI;
LAB_0010db07:
  in_RDI[1] = __n;
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}



/* JPH::MeshShape::SaveMaterialState(JPH::Array<JPH::RefConst<JPH::PhysicsMaterial>,
   JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial> > >&) const */

void __thiscall JPH::MeshShape::SaveMaterialState(MeshShape *this,Array *param_1)

{
  if (param_1 != (Array *)(this + 0x20)) {
    Array<JPH::RefConst<JPH::PhysicsMaterial>,JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial>>>
    ::assign<JPH::RefConst<JPH::PhysicsMaterial>const*>
              ((Array<JPH::RefConst<JPH::PhysicsMaterial>,JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial>>>
                *)param_1,*(RefConst **)(this + 0x30),
               *(RefConst **)(this + 0x30) + *(long *)(this + 0x20) * 8);
    return;
  }
  return;
}



/* JPH::MeshShapeSettings::Sanitize() */

void __thiscall JPH::MeshShapeSettings::Sanitize(MeshShapeSettings *this)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  ulong uVar22;
  uint *puVar23;
  long lVar24;
  uint *puVar25;
  uint *puVar26;
  int iVar27;
  long in_FS_OFFSET;
  float fVar28;
  int iVar29;
  int iVar32;
  int iVar33;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  int iVar34;
  int iVar35;
  int iVar37;
  int iVar38;
  int iVar39;
  undefined1 auVar36 [16];
  int iVar40;
  int iVar43;
  int iVar44;
  undefined1 auVar41 [16];
  int iVar45;
  undefined1 auVar42 [16];
  float fVar46;
  float fVar49;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar51;
  float fVar52;
  undefined1 auVar50 [16];
  float fVar53;
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  uint uStack_5c;
  undefined1 local_58 [16];
  undefined4 local_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  uint uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_48 = 0;
  uVar19 = (uint)(((ulong)*(uint *)(this + 0x58) << 3) / 7);
  uVar18 = 0x10;
  if (0xf < uVar19) {
    uVar18 = uVar19;
  }
  iVar27 = 0x1f;
  if (uVar18 - 1 != 0) {
    for (; uVar18 - 1 >> iVar27 == 0; iVar27 = iVar27 + -1) {
    }
  }
  uStack_44 = 1 << ((char)iVar27 + 1U & 0x1f);
  uStack_40 = (undefined4)((ulong)uStack_44 * 7 >> 3);
  local_58._0_8_ = (*Allocate)((ulong)uStack_44 * 0x15 + 0xf);
  local_58._8_8_ = local_58._0_8_ + (ulong)uStack_44 * 0x14;
  memset((void *)local_58._8_8_,0,(ulong)(uStack_44 + 0xf));
  puVar26 = *(uint **)(this + 0x68);
  if (puVar26 == puVar26 + *(long *)(this + 0x58) * 5) {
    auVar54._4_4_ = _LC20;
    auVar54._0_4_ = _LC20;
    auVar54._8_4_ = _LC20;
    auVar54._12_4_ = _LC20;
    auVar50._4_4_ = _LC27;
    auVar50._0_4_ = _LC27;
    auVar50._8_4_ = _LC27;
    auVar50._12_4_ = _LC27;
  }
  else {
    lVar24 = *(long *)(this + 0x50);
    puVar23 = puVar26 + 3;
    auVar54._4_4_ = _LC20;
    auVar54._0_4_ = _LC20;
    auVar54._8_4_ = _LC20;
    auVar54._12_4_ = _LC20;
    auVar50._4_4_ = _LC27;
    auVar50._0_4_ = _LC27;
    auVar50._8_4_ = _LC27;
    auVar50._12_4_ = _LC27;
    puVar21 = puVar26;
    puVar25 = puVar26;
    do {
      do {
        uVar22 = (ulong)*puVar21;
        puVar21 = puVar21 + 1;
        uVar2 = *(undefined4 *)(lVar24 + 8 + uVar22 * 0xc);
        auVar31._4_4_ = *(undefined4 *)(lVar24 + 4 + uVar22 * 0xc);
        auVar31._0_4_ = *(undefined4 *)(lVar24 + uVar22 * 0xc);
        auVar31._8_4_ = uVar2;
        auVar31._12_4_ = uVar2;
        auVar50 = minps(auVar50,auVar31);
        auVar54 = maxps(auVar54,auVar31);
      } while (puVar21 != puVar23);
      puVar21 = puVar25 + 5;
      puVar23 = puVar23 + 5;
      puVar25 = puVar21;
    } while (puVar26 + *(long *)(this + 0x58) * 5 != puVar21);
  }
  iVar27 = (int)*(long *)(this + 0x58);
  uVar19 = iVar27 - 1;
  if ((int)uVar19 < 0) {
LAB_0010df8b:
    if (local_58._0_8_ != 0) {
      (*Free)();
    }
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar24 = (long)(int)uVar19 * 0x14;
  fVar55 = _LC31;
  do {
    puVar23 = (uint *)((long)puVar26 + lVar24);
    lVar15 = *(long *)(this + 0x50);
    uVar18 = *puVar23;
    uVar22 = (ulong)uVar18;
    uVar12 = puVar23[1];
    uVar13 = puVar23[2];
    fVar3 = *(float *)(lVar15 + 4 + uVar22 * 0xc);
    fVar4 = *(float *)(lVar15 + uVar22 * 0xc);
    fVar5 = *(float *)(lVar15 + 8 + uVar22 * 0xc);
    uVar22 = (ulong)uVar12;
    fVar6 = *(float *)(lVar15 + uVar22 * 0xc);
    fVar7 = *(float *)(lVar15 + 4 + uVar22 * 0xc);
    fVar8 = *(float *)(lVar15 + 8 + uVar22 * 0xc);
    uVar22 = (ulong)uVar13;
    fVar9 = *(float *)(lVar15 + 4 + uVar22 * 0xc);
    fVar10 = *(float *)(lVar15 + uVar22 * 0xc);
    fVar46 = fVar6 - fVar4;
    fVar49 = fVar7 - fVar3;
    fVar11 = *(float *)(lVar15 + 8 + uVar22 * 0xc);
    fVar56 = fVar10 - fVar4;
    fVar57 = fVar9 - fVar3;
    fVar28 = fVar57 * fVar46 - fVar49 * fVar56;
    fVar49 = (fVar11 - fVar5) * fVar49 - (fVar8 - fVar5) * fVar57;
    fVar46 = fVar56 * (fVar8 - fVar5) - fVar46 * (fVar11 - fVar5);
    if (fVar28 * fVar28 + fVar46 * fVar46 + fVar49 * fVar49 + 0.0 <= fVar55) {
LAB_0010df60:
      lVar15 = *(long *)(this + 0x58);
      uVar16 = *(undefined8 *)(puVar26 + lVar15 * 5 + -3);
      *(undefined8 *)puVar23 = *(undefined8 *)(puVar26 + lVar15 * 5 + -5);
      *(undefined8 *)(puVar23 + 2) = uVar16;
      puVar23[4] = puVar26[lVar15 * 5 + -1];
      *(long *)(this + 0x58) = lVar15 + -1;
    }
    else {
      fVar57 = auVar50._0_4_;
      fVar51 = auVar50._4_4_;
      fVar52 = auVar50._8_4_;
      fVar53 = auVar50._12_4_;
      auVar30._0_4_ = auVar54._0_4_ - fVar57;
      auVar30._4_4_ = auVar54._4_4_ - fVar51;
      auVar30._8_4_ = auVar54._8_4_ - fVar52;
      auVar30._12_4_ = auVar54._12_4_ - fVar53;
      auVar47._4_4_ = _LC23;
      auVar47._0_4_ = _LC23;
      auVar47._8_4_ = _LC23;
      auVar47._12_4_ = _LC23;
      auVar31 = maxps(auVar30,auVar47);
      auVar48._4_4_ = _LC58;
      auVar48._0_4_ = _LC58;
      auVar48._8_4_ = _LC58;
      auVar48._12_4_ = _LC58;
      auVar31 = divps(auVar48,auVar31);
      fVar28 = auVar31._0_4_;
      fVar49 = auVar31._4_4_;
      fVar46 = auVar31._8_4_;
      fVar56 = auVar31._12_4_;
      iVar35 = (int)((fVar6 - fVar57) * fVar28 + _LC4);
      iVar37 = (int)((fVar7 - fVar51) * fVar49 + _LC4);
      iVar38 = (int)((fVar8 - fVar52) * fVar46 + _LC4);
      iVar39 = (int)((fVar8 - fVar53) * fVar56 + _LC4);
      iVar29 = (int)((fVar4 - fVar57) * fVar28 + _LC4);
      iVar32 = (int)((fVar3 - fVar51) * fVar49 + _LC4);
      iVar33 = (int)((fVar5 - fVar52) * fVar46 + _LC4);
      iVar34 = (int)((fVar5 - fVar53) * fVar56 + _LC4);
      auVar41._0_4_ = -(uint)(iVar35 == iVar29);
      auVar41._4_4_ = -(uint)(iVar37 == iVar32);
      auVar41._8_4_ = -(uint)(iVar38 == iVar33);
      auVar41._12_4_ = -(uint)(iVar39 == iVar34);
      iVar20 = movmskps((int)lVar15,auVar41);
      if (iVar20 == 0xf) goto LAB_0010df60;
      iVar40 = (int)((fVar10 - fVar57) * fVar28 + _LC4);
      iVar43 = (int)((fVar9 - fVar51) * fVar49 + _LC4);
      iVar44 = (int)((fVar11 - fVar52) * fVar46 + _LC4);
      iVar45 = (int)((fVar11 - fVar53) * fVar56 + _LC4);
      auVar36._0_4_ = -(uint)(iVar35 == iVar40);
      auVar36._4_4_ = -(uint)(iVar37 == iVar43);
      auVar36._8_4_ = -(uint)(iVar38 == iVar44);
      auVar36._12_4_ = -(uint)(iVar39 == iVar45);
      iVar20 = movmskps(iVar20,auVar36);
      if ((iVar20 == 0xf) ||
         (auVar42._0_4_ = -(uint)(iVar40 == iVar29), auVar42._4_4_ = -(uint)(iVar43 == iVar32),
         auVar42._8_4_ = -(uint)(iVar44 == iVar33), auVar42._12_4_ = -(uint)(iVar45 == iVar34),
         iVar20 = movmskps(iVar20,auVar42), iVar20 == 0xf)) goto LAB_0010df60;
      uVar14 = puVar23[3];
      uStack_28 = puVar23[4];
      uStack_30 = CONCAT44(uVar14,uVar12);
      uStack_38 = CONCAT44(uVar18,uVar13);
      if (uVar18 < uVar12) {
        if (uVar18 < uVar13) {
          uStack_30 = CONCAT44(uVar14,uVar13);
          uStack_38 = *(undefined8 *)puVar23;
        }
      }
      else if (uVar12 < uVar13) {
        uStack_30 = CONCAT44(uVar14,uVar18);
        uStack_38 = *(undefined8 *)(puVar23 + 1);
      }
      bVar17 = HashTable<JPH::IndexedTriangle,JPH::IndexedTriangle,JPH::UnorderedSetDetail<JPH::IndexedTriangle>,JPH::Hash<JPH::IndexedTriangle>,std::equal_to<JPH::IndexedTriangle>>
               ::InsertKey<false>((HashTable<JPH::IndexedTriangle,JPH::IndexedTriangle,JPH::UnorderedSetDetail<JPH::IndexedTriangle>,JPH::Hash<JPH::IndexedTriangle>,std::equal_to<JPH::IndexedTriangle>>
                                   *)local_58,(IndexedTriangle *)&uStack_38,&uStack_5c);
      fVar55 = _LC31;
      if (!bVar17) {
        puVar26 = *(uint **)(this + 0x68);
        puVar23 = (uint *)((long)puVar26 + lVar24);
        goto LAB_0010df60;
      }
      puVar1 = (undefined8 *)(local_58._0_8_ + (ulong)uStack_5c * 0x14);
      if (puVar1 != (undefined8 *)0x0) {
        *(uint *)(puVar1 + 2) = uStack_28;
        *puVar1 = uStack_38;
        puVar1[1] = uStack_30;
      }
    }
    if (lVar24 + -0x14 == ((long)iVar27 - (ulong)uVar19) * 0x14 + -0x28) goto LAB_0010df8b;
    lVar24 = lVar24 + -0x14;
    puVar26 = *(uint **)(this + 0x68);
  } while( true );
}



/* JPH::MeshShapeSettings::MeshShapeSettings(JPH::Array<JPH::Triangle,
   JPH::STLAllocator<JPH::Triangle> > const&, JPH::Array<JPH::RefConst<JPH::PhysicsMaterial>,
   JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial> > >) */

void __thiscall
JPH::MeshShapeSettings::MeshShapeSettings
          (MeshShapeSettings *this,Array *param_1,undefined1 (*param_3) [16])

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  
  *(undefined ***)this = &PTR_GetRTTI_001122d8;
  uVar1 = *(undefined8 *)param_3[1];
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x80) = uVar1;
  *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar1 = *(undefined8 *)*param_3;
  uVar2 = *(undefined8 *)(*param_3 + 8);
  *(undefined4 *)(this + 8) = 0;
  this[0x38] = (MeshShapeSettings)0x0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *param_3 = (undefined1  [16])0x0;
  fVar3 = _LC70;
  *(undefined8 *)param_3[1] = 0;
  *(undefined8 *)(this + 0x88) = 0x3f7f06a300000008;
  this[0x90] = (MeshShapeSettings)0x0;
  *(undefined8 *)(this + 0x70) = uVar1;
  *(undefined8 *)(this + 0x78) = uVar2;
  JPH::Indexify(param_1,(Array *)(this + 0x40),(Array *)(this + 0x58),fVar3);
  Sanitize(this);
  return;
}



/* JPH::MeshShapeSettings::MeshShapeSettings(JPH::Array<JPH::Float3, JPH::STLAllocator<JPH::Float3>
   >, JPH::Array<JPH::IndexedTriangle, JPH::STLAllocator<JPH::IndexedTriangle> >,
   JPH::Array<JPH::RefConst<JPH::PhysicsMaterial>,
   JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial> > >) */

void __thiscall
JPH::MeshShapeSettings::MeshShapeSettings
          (MeshShapeSettings *this,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
          undefined1 (*param_4) [16])

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  this[0x38] = (MeshShapeSettings)0x0;
  *(undefined ***)this = &PTR_GetRTTI_001122d8;
  uVar1 = *(undefined8 *)param_2[1];
  *(undefined8 *)(this + 0x10) = 0;
  uVar2 = *(undefined8 *)*param_2;
  uVar3 = *(undefined8 *)(*param_2 + 8);
  *(undefined8 *)(this + 0x50) = uVar1;
  uVar1 = *(undefined8 *)param_3[1];
  *(undefined4 *)(this + 8) = 0;
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  *(undefined8 *)(this + 0x68) = uVar1;
  uVar1 = *(undefined8 *)param_4[1];
  *(undefined8 *)(this + 0x40) = uVar2;
  *(undefined8 *)(this + 0x48) = uVar3;
  uVar2 = *(undefined8 *)*param_3;
  uVar3 = *(undefined8 *)(*param_3 + 8);
  *(undefined8 *)param_3[1] = 0;
  *param_3 = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x80) = uVar1;
  *(undefined8 *)(this + 0x58) = uVar2;
  *(undefined8 *)(this + 0x60) = uVar3;
  uVar1 = *(undefined8 *)*param_4;
  uVar2 = *(undefined8 *)(*param_4 + 8);
  *(undefined8 *)param_4[1] = 0;
  *param_4 = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x88) = 0x3f7f06a300000008;
  this[0x90] = (MeshShapeSettings)0x0;
  *(undefined8 *)(this + 0x70) = uVar1;
  *(undefined8 *)(this + 0x78) = uVar2;
  Sanitize(this);
  return;
}



/* JPH::Shape::GetCenterOfMass() const */

undefined1  [16] JPH::Shape::GetCenterOfMass(void)

{
  return ZEXT816(0);
}



/* JPH::Shape::GetSubShapeUserData(JPH::SubShapeID const&) const */

undefined8 JPH::Shape::GetSubShapeUserData(SubShapeID *param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* JPH::Shape::DrawGetSupportFunction(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3, JPH::Color,
   bool) const */

void JPH::Shape::DrawGetSupportFunction(void)

{
  return;
}



/* JPH::Shape::DrawGetSupportingFace(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3) const */

void JPH::Shape::DrawGetSupportingFace(void)

{
  return;
}



/* JPH::Shape::SaveSubShapeState(JPH::Array<JPH::RefConst<JPH::Shape>,
   JPH::STLAllocator<JPH::RefConst<JPH::Shape> > >&) const */

void JPH::Shape::SaveSubShapeState(Array *param_1)

{
  return;
}



/* JPH::Shape::RestoreSubShapeState(JPH::RefConst<JPH::Shape> const*, unsigned int) */

void JPH::Shape::RestoreSubShapeState(RefConst *param_1,uint param_2)

{
  return;
}



/* JPH::PhysicsMaterial::GetDebugColor() const */

undefined4 JPH::PhysicsMaterial::GetDebugColor(void)

{
  return (undefined4)Color::sGrey;
}



/* JPH::MeshShape::MustBeStatic() const */

undefined8 JPH::MeshShape::MustBeStatic(void)

{
  return 1;
}



/* JPH::MeshShape::GetInnerRadius() const */

undefined8 JPH::MeshShape::GetInnerRadius(void)

{
  return 0;
}



/* JPH::MeshShape::GetSubmergedVolume(JPH::Mat44 const&, JPH::Vec3, JPH::Plane const&, float&,
   float&, JPH::Vec3&, JPH::Vec3) const */

void JPH::MeshShape::GetSubmergedVolume(void)

{
  return;
}



/* JPH::MeshShape::GetVolume() const */

undefined8 JPH::MeshShape::GetVolume(void)

{
  return 0;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x0010e2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::Shape::GetWorldSpaceBounds(JPH::Mat44 const&, JPH::Vec3) const */

float * JPH::Shape::GetWorldSpaceBounds
                  (undefined8 param_1_00,undefined8 param_2,float *param_1,long *param_4,
                  long param_5)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float local_78;
  float fStack_74;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  fVar15 = (float)((ulong)param_2 >> 0x20);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*param_4 + 0x20) == MeshShape::GetLocalBounds) {
    pfVar3 = (float *)param_4[9];
    local_58 = pfVar3[3];
    fStack_54 = pfVar3[4];
    fStack_50 = pfVar3[5];
    fStack_4c = pfVar3[6];
    local_68 = *pfVar3;
    fStack_64 = pfVar3[1];
    fStack_60 = pfVar3[2];
    fStack_5c = pfVar3[3];
  }
  else {
    (**(code **)(*param_4 + 0x20))(&local_68);
  }
  local_78 = (float)param_1_00;
  fStack_74 = (float)((ulong)param_1_00 >> 0x20);
  auVar7._0_8_ = CONCAT44(fStack_64 * fStack_74,local_68 * local_78);
  auVar7._8_4_ = fStack_60 * (float)param_2;
  auVar7._12_4_ = fStack_5c * fVar15;
  lVar6 = 0;
  fStack_50 = fStack_50 * (float)param_2;
  fStack_4c = fStack_4c * fVar15;
  auVar11._8_4_ = auVar7._8_4_;
  auVar11._0_8_ = auVar7._0_8_;
  auVar11._12_4_ = auVar7._12_4_;
  auVar9._4_4_ = fStack_54 * fStack_74;
  auVar9._0_4_ = local_58 * local_78;
  auVar9._8_4_ = fStack_50;
  auVar9._12_4_ = fStack_4c;
  local_38 = maxps(auVar11,auVar9);
  auVar20._4_4_ = fStack_54 * fStack_74;
  auVar20._0_4_ = local_58 * local_78;
  auVar20._8_4_ = fStack_50;
  auVar20._12_4_ = fStack_4c;
  local_48 = minps(auVar7,auVar20);
  fVar15 = *(float *)(param_5 + 0x30);
  fVar16 = *(float *)(param_5 + 0x34);
  fVar17 = *(float *)(param_5 + 0x38);
  fVar18 = *(float *)(param_5 + 0x3c);
  fVar10 = fVar15;
  fVar12 = fVar16;
  fVar13 = fVar17;
  fVar14 = fVar18;
  do {
    fVar1 = *(float *)(local_48 + lVar6);
    fVar2 = *(float *)(local_38 + lVar6);
    pfVar3 = (float *)(param_5 + lVar6 * 4);
    auVar8._0_8_ = CONCAT44(fVar1 * pfVar3[1],fVar1 * *pfVar3);
    auVar8._8_4_ = fVar1 * pfVar3[2];
    auVar8._12_4_ = fVar1 * pfVar3[3];
    pfVar3 = (float *)(param_5 + lVar6 * 4);
    lVar6 = lVar6 + 4;
    auVar19._8_4_ = auVar8._8_4_;
    auVar19._0_8_ = auVar8._0_8_;
    auVar19._12_4_ = auVar8._12_4_;
    auVar4._4_4_ = fVar2 * pfVar3[1];
    auVar4._0_4_ = fVar2 * *pfVar3;
    auVar4._8_4_ = fVar2 * pfVar3[2];
    auVar4._12_4_ = fVar2 * pfVar3[3];
    auVar20 = minps(auVar19,auVar4);
    auVar5._4_4_ = fVar2 * pfVar3[1];
    auVar5._0_4_ = fVar2 * *pfVar3;
    auVar5._8_4_ = fVar2 * pfVar3[2];
    auVar5._12_4_ = fVar2 * pfVar3[3];
    auVar9 = maxps(auVar8,auVar5);
    fVar10 = fVar10 + auVar20._0_4_;
    fVar12 = fVar12 + auVar20._4_4_;
    fVar13 = fVar13 + auVar20._8_4_;
    fVar14 = fVar14 + auVar20._12_4_;
    fVar15 = fVar15 + auVar9._0_4_;
    fVar16 = fVar16 + auVar9._4_4_;
    fVar17 = fVar17 + auVar9._8_4_;
    fVar18 = fVar18 + auVar9._12_4_;
  } while (lVar6 != 0xc);
  *param_1 = fVar10;
  param_1[1] = fVar12;
  param_1[2] = fVar13;
  param_1[3] = fVar14;
  param_1[4] = fVar15;
  param_1[5] = fVar16;
  param_1[6] = fVar17;
  param_1[7] = fVar18;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::MeshShape::~MeshShape() */

void __thiscall JPH::MeshShape::~MeshShape(MeshShape *this)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  piVar2 = *(int **)(this + 0x50);
  *(undefined ***)this = &PTR__MeshShape_00112310;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      plVar4 = *(long **)(piVar2 + 6);
      if (plVar4 != (long *)0x0) {
        if ((*(long *)(piVar2 + 2) != 0) &&
           (plVar5 = plVar4 + *(long *)(piVar2 + 2) * 2, plVar4 < plVar5)) {
          do {
            if ((long *)*plVar4 != (long *)0x0) {
              (**(code **)(*(long *)*plVar4 + 0x18))();
            }
            plVar4 = plVar4 + 2;
          } while (plVar4 < plVar5);
          plVar4 = *(long **)(piVar2 + 6);
        }
        piVar2[2] = 0;
        piVar2[3] = 0;
        (*Free)(plVar4);
      }
      (*Free)(piVar2);
    }
  }
  if (*(long *)(this + 0x48) != 0) {
    *(undefined8 *)(this + 0x38) = 0;
    (*AlignedFree)();
  }
  plVar4 = *(long **)(this + 0x30);
  if (plVar4 == (long *)0x0) {
    return;
  }
  if ((*(long *)(this + 0x20) != 0) && (plVar5 = plVar4 + *(long *)(this + 0x20), plVar4 < plVar5))
  {
    do {
      while (plVar3 = (long *)*plVar4, plVar3 == (long *)0x0) {
LAB_0010e440:
        plVar4 = plVar4 + 1;
        if (plVar5 <= plVar4) goto LAB_0010e480;
      }
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) goto LAB_0010e440;
      if (*(code **)(*plVar3 + 0x18) != PhysicsMaterial::~PhysicsMaterial) {
        (**(code **)(*plVar3 + 0x18))();
        goto LAB_0010e440;
      }
      (*Free)();
      plVar4 = plVar4 + 1;
    } while (plVar4 < plVar5);
LAB_0010e480:
    plVar4 = *(long **)(this + 0x30);
  }
  *(undefined8 *)(this + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x0010e499. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(plVar4);
  return;
}



/* JPH::MeshShape::~MeshShape() */

void __thiscall JPH::MeshShape::~MeshShape(MeshShape *this)

{
  ~MeshShape(this);
                    /* WARNING: Could not recover jumptable at 0x0010e531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::MeshShapeSettings::~MeshShapeSettings() */

void __thiscall JPH::MeshShapeSettings::~MeshShapeSettings(MeshShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0x80);
  *(undefined ***)this = &PTR_GetRTTI_001122d8;
  if (plVar4 != (long *)0x0) {
    if ((*(long *)(this + 0x70) != 0) && (plVar2 = plVar4 + *(long *)(this + 0x70), plVar4 < plVar2)
       ) {
      do {
        while (plVar3 = (long *)*plVar4, plVar3 == (long *)0x0) {
LAB_0010e660:
          plVar4 = plVar4 + 1;
          if (plVar2 <= plVar4) goto LAB_0010e698;
        }
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) goto LAB_0010e660;
        if (*(code **)(*plVar3 + 0x18) != PhysicsMaterial::~PhysicsMaterial) {
          (**(code **)(*plVar3 + 0x18))();
          goto LAB_0010e660;
        }
        (*Free)();
        plVar4 = plVar4 + 1;
      } while (plVar4 < plVar2);
LAB_0010e698:
      plVar4 = *(long **)(this + 0x80);
    }
    *(undefined8 *)(this + 0x70) = 0;
    (*Free)(plVar4);
  }
  if (*(long *)(this + 0x68) != 0) {
    *(undefined8 *)(this + 0x58) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x50) != 0) {
    *(undefined8 *)(this + 0x40) = 0;
    (*Free)();
  }
  *(code **)this = JPH::CollideConvexVsTriangles::CollideConvexVsTriangles;
  if (this[0x38] == (MeshShapeSettings)0x1) {
    plVar4 = *(long **)(this + 0x18);
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0010e6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 8))();
        return;
      }
    }
  }
  else if ((this[0x38] == (MeshShapeSettings)0x2) &&
          (*(MeshShapeSettings **)(this + 0x18) != this + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::MeshShapeSettings::~MeshShapeSettings() */

void __thiscall JPH::MeshShapeSettings::~MeshShapeSettings(MeshShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0x80);
  *(undefined ***)this = &PTR_GetRTTI_001122d8;
  if (plVar4 != (long *)0x0) {
    if ((*(long *)(this + 0x70) != 0) && (plVar2 = plVar4 + *(long *)(this + 0x70), plVar4 < plVar2)
       ) {
      do {
        while (plVar3 = (long *)*plVar4, plVar3 == (long *)0x0) {
LAB_0010e7b0:
          plVar4 = plVar4 + 1;
          if (plVar2 <= plVar4) goto LAB_0010e7e8;
        }
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) goto LAB_0010e7b0;
        if (*(code **)(*plVar3 + 0x18) != PhysicsMaterial::~PhysicsMaterial) {
          (**(code **)(*plVar3 + 0x18))();
          goto LAB_0010e7b0;
        }
        (*Free)();
        plVar4 = plVar4 + 1;
      } while (plVar4 < plVar2);
LAB_0010e7e8:
      plVar4 = *(long **)(this + 0x80);
    }
    *(undefined8 *)(this + 0x70) = 0;
    (*Free)(plVar4);
  }
  if (*(long *)(this + 0x68) != 0) {
    *(undefined8 *)(this + 0x58) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x50) != 0) {
    *(undefined8 *)(this + 0x40) = 0;
    (*Free)();
  }
  *(code **)this = JPH::CollideConvexVsTriangles::CollideConvexVsTriangles;
  if (this[0x38] == (MeshShapeSettings)0x1) {
    plVar4 = *(long **)(this + 0x18);
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  else if ((this[0x38] == (MeshShapeSettings)0x2) &&
          (*(MeshShapeSettings **)(this + 0x18) != this + 0x28)) {
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x0010e771. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::DebugRenderer::Geometry::Geometry(JPH::Ref<JPH::RefTargetVirtual> const&, JPH::AABox const&)
    */

void __thiscall JPH::DebugRenderer::Geometry::Geometry(Geometry *this,Ref *param_1,AABox *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  
  uVar3 = *(undefined8 *)param_2;
  uVar5 = *(undefined8 *)(param_2 + 8);
  plVar2 = *(long **)param_1;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = uVar3;
  *(undefined8 *)(this + 0x28) = uVar5;
  *(undefined8 *)(this + 0x30) = uVar6;
  *(undefined8 *)(this + 0x38) = uVar7;
  if (plVar2 == (long *)0x0) {
    lVar12 = 0x10;
    uVar13 = 1;
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar12 = *(long *)(this + 8);
    uVar13 = lVar12 + 1;
    if (uVar13 <= *(ulong *)(this + 0x10)) {
      puVar8 = *(undefined8 **)(this + 0x18);
      goto LAB_0010e8a3;
    }
    uVar4 = *(ulong *)(this + 0x10) * 2;
    if (uVar13 <= uVar4) {
      uVar13 = uVar4;
    }
    lVar12 = uVar13 << 4;
  }
  puVar8 = (undefined8 *)(*Allocate)(lVar12);
  puVar11 = *(undefined8 **)(this + 0x18);
  if (puVar11 != (undefined8 *)0x0) {
    lVar12 = *(long *)(this + 8);
    if (puVar8 < puVar11) {
      for (puVar9 = puVar8; puVar9 < puVar8 + lVar12 * 2; puVar9 = puVar9 + 2) {
        uVar3 = *puVar11;
        uVar1 = *(undefined4 *)(puVar11 + 1);
        puVar11 = puVar11 + 2;
        *puVar9 = uVar3;
        *(undefined4 *)(puVar9 + 1) = uVar1;
      }
    }
    else {
      puVar11 = puVar11 + lVar12 * 2 + -2;
      puVar9 = puVar8 + lVar12 * 2 + -2;
      if (!CARRY8(lVar12 * 0x10 - 0x10,(ulong)puVar8)) {
        do {
          uVar3 = *puVar11;
          uVar1 = *(undefined4 *)(puVar11 + 1);
          puVar10 = puVar9 + -2;
          puVar11 = puVar11 + -2;
          *puVar9 = uVar3;
          *(undefined4 *)(puVar9 + 1) = uVar1;
          puVar9 = puVar10;
        } while (puVar8 <= puVar10);
      }
    }
    (*Free)();
  }
  lVar12 = *(long *)(this + 8);
  *(undefined8 **)(this + 0x18) = puVar8;
  *(ulong *)(this + 0x10) = uVar13;
  uVar13 = lVar12 + 1;
LAB_0010e8a3:
  *(ulong *)(this + 8) = uVar13;
  puVar8[lVar12 * 2] = plVar2;
  *(undefined4 *)(puVar8 + lVar12 * 2 + 1) = 0x7f7fffff;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CollideSoftBodyVerticesVsTriangles::CollideSoftBodyVerticesVsTriangles(JPH::Mat44 const&,
   JPH::Vec3) */

void __thiscall
JPH::CollideSoftBodyVerticesVsTriangles::CollideSoftBodyVerticesVsTriangles
          (undefined8 param_1_00,undefined8 param_2,CollideSoftBodyVerticesVsTriangles *this,
          float *param_1)

{
  CollideSoftBodyVerticesVsTriangles *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  long lVar17;
  long in_FS_OFFSET;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float local_68;
  float fStack_64;
  float fStack_5c;
  float local_58 [4];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar5 = param_1[3];
  fVar7 = param_1[4];
  fVar8 = param_1[5];
  fVar9 = param_1[6];
  fVar10 = param_1[7];
  fVar11 = param_1[8];
  fVar12 = param_1[9];
  fVar13 = param_1[10];
  fVar14 = param_1[0xb];
  fVar18 = param_1[0xc];
  fVar19 = param_1[0xd];
  fVar20 = param_1[0xe];
  fVar21 = param_1[0xf];
  local_68 = (float)param_1_00;
  fStack_64 = (float)((ulong)param_1_00 >> 0x20);
  fStack_5c = (float)((ulong)param_2 >> 0x20);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = ZEXT416((uint)(float)param_2) << 0x40;
  lVar17 = 0;
  local_58[0] = local_68;
  local_58[1] = 0.0;
  local_58[2] = 0.0;
  local_58[3] = 0.0;
  local_48 = ZEXT416((uint)fStack_64) << 0x20;
  local_28 = __LC5;
  uStack_20 = CONCAT44(_LC2,_UNK_00112478);
  do {
    fVar22 = *(float *)((long)local_58 + lVar17);
    fVar23 = *(float *)((long)local_58 + lVar17 + 4);
    fVar24 = *(float *)((long)local_58 + lVar17 + 8);
    fVar25 = *(float *)(local_48 + lVar17 + -4);
    pCVar1 = this + lVar17;
    *(float *)pCVar1 = fVar25 * fVar18 + fVar22 * fVar2 + fVar23 * fVar7 + fVar24 * fVar11;
    *(float *)(pCVar1 + 4) = fVar25 * fVar19 + fVar22 * fVar3 + fVar23 * fVar8 + fVar24 * fVar12;
    *(float *)(pCVar1 + 8) = fVar25 * fVar20 + fVar22 * fVar4 + fVar23 * fVar9 + fVar24 * fVar13;
    *(float *)(pCVar1 + 0xc) = fVar25 * fVar21 + fVar22 * fVar5 + fVar23 * fVar10 + fVar24 * fVar14;
    lVar17 = lVar17 + 0x10;
  } while (lVar17 != 0x40);
  fVar7 = *(float *)(this + 8);
  fVar8 = *(float *)(this + 0xc);
  fVar2 = *(float *)(this + 0x14);
  fVar4 = *(float *)(this + 0x18);
  fVar9 = *(float *)(this + 0x28);
  fVar10 = *(float *)(this + 0x2c);
  fVar3 = *(float *)(this + 0x34);
  fVar5 = *(float *)(this + 0x38);
  fVar11 = *(float *)this;
  fVar12 = *(float *)(this + 4);
  fVar13 = *(float *)(this + 0x20);
  fVar14 = *(float *)(this + 0x24);
  fVar24 = fVar7 * fVar10;
  fVar26 = fVar4 * fVar3;
  fVar28 = fVar9 * fVar8;
  fVar30 = fVar5 * fVar2;
  fVar20 = (float)*(undefined8 *)(this + 0x10);
  fVar22 = (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20);
  fVar32 = (float)*(undefined8 *)(this + 0x30);
  fVar33 = (float)((ulong)*(undefined8 *)(this + 0x30) >> 0x20);
  fVar35 = fVar7 * fVar14;
  fVar37 = fVar4 * fVar33;
  fVar39 = fVar9 * fVar12;
  fVar41 = fVar5 * fVar22;
  fVar18 = fVar12 * fVar10;
  fVar19 = fVar22 * fVar3;
  fVar21 = fVar14 * fVar8;
  fVar23 = fVar33 * fVar2;
  fVar47 = fVar11 * fVar10;
  fVar48 = fVar20 * fVar3;
  fVar49 = fVar13 * fVar8;
  fVar50 = fVar32 * fVar2;
  fVar43 = fVar11 * fVar14;
  fVar44 = fVar20 * fVar33;
  fVar45 = fVar13 * fVar12;
  fVar46 = fVar32 * fVar22;
  fVar25 = ((((fVar30 * fVar14 - fVar26 * fVar14) + fVar37 * fVar10) - fVar41 * fVar10) +
           fVar19 * fVar9) - fVar9 * fVar23;
  fVar27 = ((((fVar28 * fVar33 - fVar24 * fVar33) + fVar35 * fVar3) - fVar39 * fVar3) +
           fVar18 * fVar5) - fVar5 * fVar21;
  fVar29 = ((((fVar26 * fVar12 - fVar30 * fVar12) + fVar41 * fVar8) - fVar37 * fVar8) +
           fVar23 * fVar7) - fVar7 * fVar19;
  fVar31 = ((((fVar24 * fVar22 - fVar28 * fVar22) + fVar39 * fVar2) - fVar35 * fVar2) +
           fVar21 * fVar4) - fVar4 * fVar18;
  fVar36 = fVar11 * fVar9;
  fVar38 = fVar20 * fVar5;
  fVar40 = fVar13 * fVar7;
  fVar42 = fVar32 * fVar4;
  fVar34 = _LC38 / (fVar13 * fVar29 + fVar32 * fVar31 + fVar11 * fVar25 + fVar20 * fVar27);
  *(float *)(this + 0x40) = fVar25 * fVar34;
  *(float *)(this + 0x44) = fVar27 * fVar34;
  *(float *)(this + 0x48) = fVar29 * fVar34;
  *(float *)(this + 0x4c) = fVar31 * fVar34;
  *(float *)(this + 0x50) =
       ((((fVar13 * fVar26 - fVar13 * fVar30) - fVar9 * fVar48) + fVar9 * fVar50 + fVar10 * fVar38)
       - fVar10 * fVar42) * fVar34;
  *(float *)(this + 0x54) =
       ((((fVar32 * fVar24 - fVar32 * fVar28) - fVar5 * fVar47) + fVar5 * fVar49 + fVar3 * fVar36) -
       fVar3 * fVar40) * fVar34;
  *(float *)(this + 0x58) =
       ((((fVar11 * fVar30 - fVar11 * fVar26) - fVar7 * fVar50) + fVar7 * fVar48 + fVar8 * fVar42) -
       fVar8 * fVar38) * fVar34;
  *(float *)(this + 0x5c) =
       ((((fVar20 * fVar28 - fVar20 * fVar24) - fVar4 * fVar49) + fVar4 * fVar47 + fVar2 * fVar40) -
       fVar2 * fVar36) * fVar34;
  *(float *)(this + 0x60) =
       ((fVar48 * fVar14 +
        (fVar10 * fVar46 - ((fVar19 * fVar13 - fVar23 * fVar13) + fVar10 * fVar44))) -
       fVar50 * fVar14) * fVar34;
  *(float *)(this + 100) =
       ((fVar47 * fVar33 + (fVar3 * fVar45 - ((fVar18 * fVar32 - fVar21 * fVar32) + fVar3 * fVar43))
        ) - fVar49 * fVar33) * fVar34;
  *(float *)(this + 0x68) =
       ((fVar50 * fVar12 + (fVar8 * fVar44 - ((fVar23 * fVar11 - fVar19 * fVar11) + fVar8 * fVar46))
        ) - fVar48 * fVar12) * fVar34;
  *(float *)(this + 0x6c) =
       ((fVar49 * fVar22 + (fVar2 * fVar43 - ((fVar21 * fVar20 - fVar18 * fVar20) + fVar2 * fVar45))
        ) - fVar47 * fVar22) * fVar34;
  *(float *)(this + 0x70) =
       ((((fVar44 * fVar9 - (fVar13 * fVar37 - fVar13 * fVar41)) - fVar9 * fVar46) - fVar38 * fVar14
        ) + fVar14 * fVar42) * fVar34;
  *(float *)(this + 0x74) =
       ((((fVar43 * fVar5 - (fVar32 * fVar35 - fVar32 * fVar39)) - fVar5 * fVar45) - fVar36 * fVar33
        ) + fVar33 * fVar40) * fVar34;
  *(float *)(this + 0x78) =
       ((((fVar46 * fVar7 - (fVar11 * fVar41 - fVar11 * fVar37)) - fVar7 * fVar44) - fVar42 * fVar12
        ) + fVar12 * fVar38) * fVar34;
  *(float *)(this + 0x7c) =
       ((((fVar45 * fVar4 - (fVar20 * fVar39 - fVar20 * fVar35)) - fVar4 * fVar43) - fVar40 * fVar22
        ) + fVar22 * fVar36) * fVar34;
  auVar6._4_4_ = -(uint)(fStack_64 < 0.0);
  auVar6._0_4_ = -(uint)(local_68 < 0.0);
  auVar6._8_4_ = -(uint)((float)param_2 < 0.0);
  auVar6._12_4_ = -(uint)(fStack_5c < 0.0);
  uVar15 = movmskps(0x40,auVar6);
  uVar16 = _LC2;
  if ((POPCOUNT((byte)uVar15 & 7) & 1U) != 0) {
    uVar16 = _LC37;
  }
  *(undefined4 *)(this + 0xd0) = uVar16;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::TriangleCodecIndexed8BitPackSOA4Flags::EncodingContext::Pack(JPH::IndexedTriangle const*,
   unsigned int, bool, JPH::ByteBuffer&, char const*&) */

long __thiscall
JPH::TriangleCodecIndexed8BitPackSOA4Flags::EncodingContext::Pack
          (EncodingContext *this,IndexedTriangle *param_1,uint param_2,bool param_3,
          ByteBuffer *param_4,char **param_5)

{
  uint *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 *puVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  IndexedTriangle *pIVar24;
  IndexedTriangle *pIVar25;
  IndexedTriangle *local_70;
  
  lVar4 = *(long *)param_4;
  uVar14 = lVar4 + 4;
  if (*(ulong *)(param_4 + 8) < uVar14) {
    pvVar9 = (void *)(*AlignedAllocate)(uVar14,0x40);
    if (*(void **)(param_4 + 0x10) != (void *)0x0) {
      memmove(pvVar9,*(void **)(param_4 + 0x10),*(size_t *)param_4);
      (*AlignedFree)(*(undefined8 *)(param_4 + 0x10));
    }
    *(void **)(param_4 + 0x10) = pvVar9;
    *(ulong *)(param_4 + 8) = uVar14;
  }
  else {
    pvVar9 = *(void **)(param_4 + 0x10);
  }
  uVar5 = *(undefined8 *)(this + 0x10);
  *(ulong *)param_4 = uVar14;
  uVar21 = (uint)uVar5;
  uVar16 = param_2 * 3 + -0x100 + uVar21;
  if ((int)uVar16 < 0) {
    uVar16 = 0;
  }
  if ((int)uVar16 <= (int)uVar21) {
    uVar21 = uVar16;
  }
  uVar18 = (ulong)uVar21;
  uVar19 = (*(long *)(this + 8) - lVar4) + uVar18 * 8;
  if ((*(long *)(this + 8) - lVar4 & 3U) == 0) {
    if (uVar19 < 0x80000000) {
      uVar17 = param_2 + 3 & 0xfffffffc;
      uVar16 = (uint)(uVar19 >> 2);
      *(uint *)((long)pvVar9 + lVar4) = uVar16;
      if (param_3) {
        *(uint *)((long)pvVar9 + lVar4) = uVar16 | uVar17 << 0x1b;
        if (uVar17 == 0) {
LAB_0010f019:
          uVar19 = (ulong)param_2 * 4 + uVar14;
          if (*(ulong *)(param_4 + 8) < uVar19) {
            pvVar9 = (void *)(*AlignedAllocate)(uVar19,0x40);
            if (*(void **)(param_4 + 0x10) != (void *)0x0) {
              memmove(pvVar9,*(void **)(param_4 + 0x10),*(size_t *)param_4);
              (*AlignedFree)(*(undefined8 *)(param_4 + 0x10));
            }
            *(void **)(param_4 + 0x10) = pvVar9;
            *(ulong *)(param_4 + 8) = uVar19;
          }
          else {
            pvVar9 = *(void **)(param_4 + 0x10);
          }
          *(ulong *)param_4 = uVar19;
          if (param_2 == 0) {
            return lVar4;
          }
          pIVar25 = param_1 + 0x10;
          pIVar24 = pIVar25 + (ulong)param_2 * 0x14;
          puVar10 = (undefined4 *)((long)pvVar9 + uVar14);
          do {
            uVar3 = *(undefined4 *)pIVar25;
            pIVar25 = pIVar25 + 0x14;
            *puVar10 = uVar3;
            puVar10 = puVar10 + 1;
          } while (pIVar24 != pIVar25);
          return lVar4;
        }
      }
      else if (uVar17 == 0) {
        return lVar4;
      }
      uVar19 = lVar4 + 0x14;
      uVar16 = 0;
      local_70 = param_1;
      if (*(ulong *)(param_4 + 8) < uVar19) goto LAB_0010efa8;
      do {
        pvVar9 = *(void **)(param_4 + 0x10);
        while( true ) {
          lVar23 = 0;
          puVar2 = (undefined1 *)((long)pvVar9 + uVar14 + 0xc);
          *(ulong *)param_4 = uVar19;
          puVar20 = puVar2;
          pIVar24 = local_70;
          uVar22 = uVar16;
          do {
            if (uVar22 < param_2) {
              uVar8 = *(uint *)(pIVar24 + lVar23 * 4);
            }
            else {
              uVar8 = *(uint *)(param_1 + (ulong)(param_2 - 1) * 0x14);
            }
            puVar1 = (uint *)(*(long *)(this + 0x38) + (ulong)uVar8 * 4);
            uVar7 = *puVar1;
            uVar21 = (uint)uVar18;
            if ((uVar7 < uVar21) || (uVar7 == 0xffffffff)) {
              lVar12 = *(long *)(this + 0x10);
              uVar6 = *(ulong *)(this + 0x18);
              lVar11 = *(long *)(this + 0x20);
              uVar19 = lVar12 + 1;
              *puVar1 = (uint)lVar12;
              if (uVar6 < uVar19) {
                uVar15 = uVar6 * 2;
                if (uVar6 * 2 < uVar19) {
                  uVar15 = uVar19;
                }
                lVar11 = (*Reallocate)(lVar11,uVar6 << 2,uVar15 * 4);
                *(long *)(this + 0x20) = lVar11;
                lVar12 = *(long *)(this + 0x10);
                *(ulong *)(this + 0x18) = uVar15;
                uVar19 = lVar12 + 1;
              }
              *(ulong *)(this + 0x10) = uVar19;
              *(uint *)(lVar11 + lVar12 * 4) = uVar8;
              uVar7 = *puVar1 - uVar21;
            }
            else {
              uVar7 = uVar7 - uVar21;
            }
            if (0xff < uVar7) {
              pcVar13 = "TriangleCodecIndexed8BitPackSOA4Flags: Offset doesn\'t fit in 8 bit";
              goto LAB_0010f124;
            }
            puVar20[lVar23 * 4 + -0xc] = (char)uVar7;
            if (uVar22 < param_2) {
              uVar8 = *(uint *)(pIVar24 + 0xc);
              if (0xff < uVar8) {
                pcVar13 = 
                "TriangleCodecIndexed8BitPackSOA4Flags: Material index doesn\'t fit in 8 bit";
                goto LAB_0010f124;
              }
            }
            else {
              uVar8 = 0;
            }
            *puVar20 = (char)uVar8;
            puVar20 = puVar20 + 1;
            pIVar24 = pIVar24 + 0x14;
            uVar22 = uVar22 + 1;
          } while (((undefined1 *)((long)pvVar9 + uVar14 + 0x10) != puVar20) ||
                  (lVar23 = lVar23 + 1, puVar20 = puVar2, pIVar24 = local_70, uVar22 = uVar16,
                  lVar23 != 3));
          local_70 = local_70 + 0x50;
          uVar16 = uVar16 + 4;
          if (uVar17 <= uVar16) {
            if (!param_3) {
              return lVar4;
            }
            uVar14 = *(ulong *)param_4;
            goto LAB_0010f019;
          }
          uVar14 = *(ulong *)param_4;
          uVar19 = uVar14 + 0x10;
          if (uVar19 <= *(ulong *)(param_4 + 8)) break;
LAB_0010efa8:
          pvVar9 = (void *)(*AlignedAllocate)(uVar19,0x40);
          if (*(void **)(param_4 + 0x10) != (void *)0x0) {
            memmove(pvVar9,*(void **)(param_4 + 0x10),*(size_t *)param_4);
            (*AlignedFree)(*(undefined8 *)(param_4 + 0x10));
          }
          uVar18 = (ulong)uVar21;
          *(void **)(param_4 + 0x10) = pvVar9;
          *(ulong *)(param_4 + 8) = uVar19;
        }
      } while( true );
    }
    pcVar13 = 
    "TriangleCodecIndexed8BitPackSOA4Flags: Offset to vertices doesn\'t fit. Too much data.";
  }
  else {
    pcVar13 = 
    "TriangleCodecIndexed8BitPackSOA4Flags: Internal Error: Offset has non-significant bits set";
  }
LAB_0010f124:
  *param_5 = pcVar13;
  return -1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Vec3 JPH::ClosestPoint::GetClosestPointOnTriangle<false>(JPH::Vec3, JPH::Vec3, JPH::Vec3,
   unsigned int&) */

undefined1  [16]
JPH::ClosestPoint::GetClosestPointOnTriangle<false>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,int *param_7)

{
  int iVar1;
  float fVar2;
  float fVar4;
  undefined1 auVar3 [16];
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
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
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar23 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  float local_78;
  float fStack_74;
  
  fVar19 = (float)((ulong)param_6 >> 0x20);
  uStack_90._0_4_ = (float)param_6;
  fVar15 = (float)((ulong)param_4 >> 0x20);
  fVar11 = (float)param_4;
  fVar6 = (float)((ulong)param_2 >> 0x20);
  fVar4 = (float)param_2;
  local_98._0_4_ = (undefined4)param_5;
  local_98._4_4_ = (undefined4)((ulong)param_5 >> 0x20);
  local_88 = (float)param_1;
  fStack_84 = (float)((ulong)param_1 >> 0x20);
  local_78 = (float)param_3;
  fStack_74 = (float)((ulong)param_3 >> 0x20);
  fVar14 = (float)local_98._0_4_ - local_78;
  fVar16 = (float)local_98._4_4_ - fStack_74;
  fVar17 = (float)uStack_90 - fVar11;
  fVar2 = ((float)uStack_90 - fVar4) * ((float)uStack_90 - fVar4) +
          ((float)local_98._0_4_ - local_88) * ((float)local_98._0_4_ - local_88) + 0.0 +
          ((float)local_98._4_4_ - fStack_84) * ((float)local_98._4_4_ - fStack_84);
  fVar18 = fVar17 * fVar17 + fVar16 * fVar16 + fVar14 * fVar14 + 0.0;
  iVar1 = -(uint)(fVar18 < fVar2);
  uVar7 = iVar1 >> 0x1f;
  uVar8 = (int)-(uint)(fVar18 < fVar2) >> 0x1f;
  uVar9 = (int)-(uint)(fVar18 < fVar2) >> 0x1f;
  uVar12 = (int)-(uint)(fVar18 < fVar2) >> 0x1f;
  fVar2 = (float)(local_98._0_4_ & uVar7 | ~uVar7 & (uint)local_88);
  fVar32 = (float)(local_98._4_4_ & uVar8 | ~uVar8 & (uint)fStack_84);
  fVar33 = (float)((uint)(float)uStack_90 & uVar9 | ~uVar9 & (uint)fVar4);
  fVar5 = (float)((uint)fVar19 & uVar12 | ~uVar12 & (uint)fVar6);
  fVar28 = local_78 - fVar2;
  fVar30 = fStack_74 - fVar32;
  fVar31 = fVar11 - fVar33;
  fVar29 = (float)(uVar7 & (uint)local_88 | ~uVar7 & local_98._0_4_);
  fVar22 = (float)(uVar8 & (uint)fStack_84 | ~uVar8 & local_98._4_4_);
  fVar10 = (float)(uVar9 & (uint)fVar4 | ~uVar9 & (uint)(float)uStack_90);
  fVar13 = (float)(uVar12 & (uint)fVar6 | ~uVar12 & (uint)fVar19);
  fVar20 = fVar29 - fVar2;
  fVar24 = fVar22 - fVar32;
  fVar26 = fVar10 - fVar33;
  fVar21 = fVar24 * fVar28 - fVar30 * fVar20;
  fVar25 = fVar26 * fVar30 - fVar31 * fVar24;
  fVar27 = fVar20 * fVar31 - fVar28 * fVar26;
  fVar34 = fVar21 * fVar21 + fVar27 * fVar27 + fVar25 * fVar25 + 0.0;
  if (fVar34 < _LC46) {
    fVar22 = (float)local_98._4_4_ * (float)local_98._4_4_ +
             (float)local_98._0_4_ * (float)local_98._0_4_ + 0.0 +
             (float)uStack_90 * (float)uStack_90;
    fVar29 = fVar4 * fVar4 + fStack_84 * fStack_84 + local_88 * local_88 + 0.0;
    if (fVar29 < fVar22) {
      iVar1 = 1;
      local_98._0_4_ = local_88;
      local_98._4_4_ = fStack_84;
      uStack_90._0_4_ = fVar4;
      uStack_90._4_4_ = fVar6;
    }
    else {
      iVar1 = 4;
      uStack_90._4_4_ = fVar19;
      fVar29 = fVar22;
    }
    fVar22 = fVar11 * fVar11 + fStack_74 * fStack_74 + local_78 * local_78 + 0.0;
    if (fVar22 < fVar29) {
      iVar1 = 2;
      local_98._0_4_ = local_78;
      local_98._4_4_ = fStack_74;
      uStack_90._0_4_ = fVar11;
      uStack_90._4_4_ = fVar15;
      fVar29 = fVar22;
    }
    fVar22 = fVar26 * fVar26 + fVar24 * fVar24 + fVar20 * fVar20 + 0.0;
    if (__LC47 < fVar22) {
      fVar22 = (float)((uint)(fVar33 * fVar26 + fVar32 * fVar24 + fVar20 * fVar2 + 0.0) ^ _LC45) /
               fVar22;
      if (fVar22 < 0.0) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = _LC2;
        if (fVar22 <= _LC2) {
          fVar10 = fVar22;
        }
      }
      fVar2 = fVar10 * fVar20 + fVar2;
      fVar32 = fVar10 * fVar24 + fVar32;
      fVar33 = fVar10 * fVar26 + fVar33;
      fVar22 = fVar33 * fVar33 + fVar32 * fVar32 + fVar2 * fVar2 + 0.0;
      if (fVar22 < fVar29) {
        iVar1 = 5;
        local_98._0_4_ = fVar2;
        local_98._4_4_ = fVar32;
        uStack_90._0_4_ = fVar33;
        uStack_90._4_4_ = fVar10 * (fVar13 - fVar5) + fVar5;
        fVar29 = fVar22;
      }
    }
    if (__LC47 < fVar18) {
      fVar18 = (float)((uint)(fVar17 * fVar11 + fVar16 * fStack_74 + fVar14 * local_78 + 0.0) ^
                      _LC45) / fVar18;
      if (fVar18 < 0.0) {
        fVar2 = 0.0;
      }
      else {
        fVar2 = _LC2;
        if (fVar18 <= _LC2) {
          fVar2 = fVar18;
        }
      }
      fVar18 = fVar2 * fVar14 + local_78;
      fVar32 = fVar2 * fVar16 + fStack_74;
      fVar33 = fVar2 * fVar17 + fVar11;
      fVar5 = fVar33 * fVar33 + fVar18 * fVar18 + 0.0 + fVar32 * fVar32;
      if (fVar5 < fVar29) {
        iVar1 = 6;
        local_98._0_4_ = fVar18;
        local_98._4_4_ = fVar32;
        uStack_90._0_4_ = fVar33;
        uStack_90._4_4_ = fVar2 * (fVar19 - fVar15) + fVar15;
        fVar29 = fVar5;
      }
    }
    local_78 = local_78 - local_88;
    fStack_74 = fStack_74 - fStack_84;
    fVar11 = fVar11 - fVar4;
    fVar2 = fVar11 * fVar11 + fStack_74 * fStack_74 + local_78 * local_78 + 0.0;
    if (__LC47 < fVar2) {
      fVar2 = (float)((uint)(fVar11 * fVar4 + fStack_74 * fStack_84 + local_78 * local_88 + 0.0) ^
                     _LC45) / fVar2;
      if (fVar2 < 0.0) {
        fVar18 = 0.0;
      }
      else {
        fVar18 = _LC2;
        if (fVar2 <= _LC2) {
          fVar18 = fVar2;
        }
      }
      local_88 = fVar18 * local_78 + local_88;
      fStack_84 = fVar18 * fStack_74 + fStack_84;
      fVar4 = fVar18 * fVar11 + fVar4;
      if (fVar4 * fVar4 + local_88 * local_88 + 0.0 + fStack_84 * fStack_84 < fVar29) {
        iVar1 = 3;
        local_98._0_4_ = local_88;
        local_98._4_4_ = fStack_84;
        uStack_90._0_4_ = fVar4;
        uStack_90._4_4_ = fVar18 * (fVar15 - fVar6) + fVar6;
      }
    }
    *param_7 = iVar1;
    return _local_98;
  }
  fVar4 = (0.0 - fVar33) * fVar31 + fVar30 * (0.0 - fVar32) + (0.0 - fVar2) * fVar28 + 0.0;
  fVar18 = (0.0 - fVar33) * fVar26 + (0.0 - fVar32) * fVar24 + (0.0 - fVar2) * fVar20 + 0.0;
  if ((fVar4 <= 0.0) && (fVar18 <= 0.0)) {
    local_98._4_4_ = fVar32;
    local_98._0_4_ = fVar2;
    uStack_90._0_4_ = fVar33;
    uStack_90._4_4_ = fVar5;
    *param_7 = (-(uint)(iVar1 == 0) & 0xfffffffd) + 4;
    return _local_98;
  }
  fVar14 = (0.0 - fVar11) * fVar31 + fVar30 * (0.0 - fStack_74) + (0.0 - local_78) * fVar28 + 0.0;
  fVar6 = (0.0 - fVar11) * fVar26 + (0.0 - fStack_74) * fVar24 + (0.0 - local_78) * fVar20 + 0.0;
  if (fVar14 < 0.0) {
    if ((fVar4 * fVar6 <= fVar18 * fVar14) && (0.0 <= fVar4)) goto LAB_0010fa5c;
  }
  else {
    if (fVar6 <= fVar14) {
      *param_7 = 2;
      uStack_90 = param_4;
      local_98 = (undefined1  [8])param_3;
      return _local_98;
    }
    if (((fVar4 * fVar6 <= fVar18 * fVar14) && (0.0 <= fVar4)) && (fVar14 == 0.0)) {
LAB_0010fa5c:
      *param_7 = (-(uint)(iVar1 == 0) & 0xfffffffd) + 6;
      fVar4 = fVar4 / (fVar4 - fVar14);
      local_98._4_4_ = fVar4 * fVar30 + fVar32;
      local_98._0_4_ = fVar4 * fVar28 + fVar2;
      uStack_90._0_4_ = fVar4 * fVar31 + fVar33;
      uStack_90._4_4_ = fVar4 * (fVar15 - fVar5) + fVar5;
      return _local_98;
    }
  }
  fVar17 = fVar31 * (0.0 - fVar10) + fVar30 * (0.0 - fVar22) + fVar28 * (0.0 - fVar29) + 0.0;
  fVar16 = (0.0 - fVar10) * fVar26 + (0.0 - fVar22) * fVar24 + fVar20 * (0.0 - fVar29) + 0.0;
  if (fVar16 < 0.0) {
    if ((fVar18 * fVar17 <= fVar4 * fVar16) && (0.0 <= fVar18)) goto LAB_0010fc1a;
  }
  else {
    if (fVar17 <= fVar16) {
      local_98._4_4_ = fVar22;
      local_98._0_4_ = fVar29;
      uStack_90._4_4_ = fVar13;
      uStack_90._0_4_ = fVar10;
      *param_7 = (-(uint)(iVar1 == 0) & 3) + 1;
      return _local_98;
    }
    if (((fVar18 * fVar17 <= fVar4 * fVar16) && (0.0 <= fVar18)) && (fVar16 == 0.0)) {
LAB_0010fc1a:
      *param_7 = 5;
      fVar18 = fVar18 / (fVar18 - fVar16);
      local_98._4_4_ = fVar18 * fVar24 + fVar32;
      local_98._0_4_ = fVar18 * fVar20 + fVar2;
      uStack_90._0_4_ = fVar18 * fVar26 + fVar33;
      uStack_90._4_4_ = fVar18 * (fVar13 - fVar5) + fVar5;
      return _local_98;
    }
  }
  if (((fVar6 * fVar17 < fVar14 * fVar16) || (fVar6 = fVar6 - fVar14, fVar6 < 0.0)) ||
     (fVar17 - fVar16 < 0.0)) {
    *param_7 = 7;
    fVar34 = fVar34 * __LC48;
    fVar2 = (fVar33 + fVar11 + fVar10) * fVar21 +
            fVar27 * (fVar32 + fStack_74 + fVar22) + fVar25 * (fVar2 + local_78 + fVar29) + 0.0;
    auVar23._0_4_ = fVar25 * fVar2;
    auVar23._4_4_ = fVar27 * fVar2;
    auVar23._8_4_ = fVar21 * fVar2;
    auVar23._12_4_ = fVar21 * fVar2;
    auVar3._4_4_ = fVar34;
    auVar3._0_4_ = fVar34;
    auVar3._8_4_ = fVar34;
    auVar3._12_4_ = fVar34;
    _local_98 = divps(auVar23,auVar3);
  }
  else {
    fVar6 = fVar6 / ((fVar17 - fVar16) + fVar6);
    *param_7 = (-(uint)(iVar1 == 0) & 3) + 3;
    local_98._4_4_ = (fVar22 - fStack_74) * fVar6 + fStack_74;
    local_98._0_4_ = (fVar29 - local_78) * fVar6 + local_78;
    uStack_90._0_4_ = (fVar10 - fVar11) * fVar6 + fVar11;
    uStack_90._4_4_ = (fVar13 - fVar15) * fVar6 + fVar15;
  }
  return _local_98;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::Result<JPH::Ref<JPH::Shape> >::SetError(char const*) */

void __thiscall
JPH::Result<JPH::Ref<JPH::Shape>>::SetError(Result<JPH::Ref<JPH::Shape>> *this,char *param_1)

{
  long *plVar1;
  long *plVar2;
  size_t __n;
  Result<JPH::Ref<JPH::Shape>> *__dest;
  
  if (this[0x20] == (Result<JPH::Ref<JPH::Shape>>)0x1) {
    plVar2 = *(long **)this;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
  }
  else if ((this[0x20] == (Result<JPH::Ref<JPH::Shape>>)0x2) &&
          (*(Result<JPH::Ref<JPH::Shape>> **)this != this + 0x10)) {
    (*Free)();
  }
  __dest = this + 0x10;
  this[0x20] = (Result<JPH::Ref<JPH::Shape>>)0x0;
  *(Result<JPH::Ref<JPH::Shape>> **)this = __dest;
  if (param_1 == (char *)0x0) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = strlen(param_1);
  if (__n < 0x10) {
    if (__n == 1) {
      this[0x10] = (Result<JPH::Ref<JPH::Shape>>)*param_1;
      goto LAB_0010fcd4;
    }
    if (__n == 0) goto LAB_0010fcd4;
  }
  else {
    __dest = (Result<JPH::Ref<JPH::Shape>> *)(*Allocate)(__n + 1);
    *(size_t *)(this + 0x10) = __n;
    *(Result<JPH::Ref<JPH::Shape>> **)this = __dest;
  }
  memcpy(__dest,param_1,__n);
  __dest = *(Result<JPH::Ref<JPH::Shape>> **)this;
LAB_0010fcd4:
  *(size_t *)(this + 8) = __n;
  __dest[__n] = (Result<JPH::Ref<JPH::Shape>>)0x0;
  this[0x20] = (Result<JPH::Ref<JPH::Shape>>)0x2;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00110ac2) */
/* WARNING: Removing unreachable block (ram,0x0011159e) */
/* WARNING: Removing unreachable block (ram,0x00110afd) */
/* WARNING: Removing unreachable block (ram,0x00111193) */
/* WARNING: Removing unreachable block (ram,0x00110b09) */
/* WARNING: Removing unreachable block (ram,0x00111724) */
/* WARNING: Removing unreachable block (ram,0x00111730) */
/* WARNING: Removing unreachable block (ram,0x00110b12) */
/* WARNING: Removing unreachable block (ram,0x001115db) */
/* WARNING: Removing unreachable block (ram,0x00110b1a) */
/* WARNING: Removing unreachable block (ram,0x00110b2f) */
/* WARNING: Removing unreachable block (ram,0x00110b48) */
/* WARNING: Removing unreachable block (ram,0x001111a4) */
/* WARNING: Removing unreachable block (ram,0x00111583) */
/* WARNING: Removing unreachable block (ram,0x001111df) */
/* WARNING: Removing unreachable block (ram,0x00111233) */
/* WARNING: Removing unreachable block (ram,0x001111e7) */
/* WARNING: Removing unreachable block (ram,0x001116c3) */
/* WARNING: Removing unreachable block (ram,0x001116cf) */
/* WARNING: Removing unreachable block (ram,0x001111f0) */
/* WARNING: Removing unreachable block (ram,0x001115b9) */
/* WARNING: Removing unreachable block (ram,0x001111f8) */
/* WARNING: Removing unreachable block (ram,0x0011120d) */
/* WARNING: Removing unreachable block (ram,0x00111222) */
/* WARNING: Removing unreachable block (ram,0x00111244) */
/* WARNING: Removing unreachable block (ram,0x00111568) */
/* WARNING: Removing unreachable block (ram,0x00111280) */
/* WARNING: Removing unreachable block (ram,0x001112d4) */
/* WARNING: Removing unreachable block (ram,0x00111288) */
/* WARNING: Removing unreachable block (ram,0x00111703) */
/* WARNING: Removing unreachable block (ram,0x0011170f) */
/* WARNING: Removing unreachable block (ram,0x00111291) */
/* WARNING: Removing unreachable block (ram,0x0011161f) */
/* WARNING: Removing unreachable block (ram,0x00111299) */
/* WARNING: Removing unreachable block (ram,0x001112ae) */
/* WARNING: Removing unreachable block (ram,0x001112c3) */
/* WARNING: Removing unreachable block (ram,0x001112e5) */
/* WARNING: Removing unreachable block (ram,0x0011154d) */
/* WARNING: Removing unreachable block (ram,0x00111321) */
/* WARNING: Removing unreachable block (ram,0x00111377) */
/* WARNING: Removing unreachable block (ram,0x00111329) */
/* WARNING: Removing unreachable block (ram,0x001116e4) */
/* WARNING: Removing unreachable block (ram,0x001116f3) */
/* WARNING: Removing unreachable block (ram,0x00111332) */
/* WARNING: Removing unreachable block (ram,0x001115fd) */
/* WARNING: Removing unreachable block (ram,0x0011133a) */
/* WARNING: Removing unreachable block (ram,0x0011134f) */
/* WARNING: Removing unreachable block (ram,0x00111364) */
/* WARNING: Removing unreachable block (ram,0x0011138a) */
/* WARNING: Removing unreachable block (ram,0x00111532) */
/* WARNING: Removing unreachable block (ram,0x001113c6) */
/* WARNING: Removing unreachable block (ram,0x0011141c) */
/* WARNING: Removing unreachable block (ram,0x001113ce) */
/* WARNING: Removing unreachable block (ram,0x001116a4) */
/* WARNING: Removing unreachable block (ram,0x001116b3) */
/* WARNING: Removing unreachable block (ram,0x001113d7) */
/* WARNING: Removing unreachable block (ram,0x00111663) */
/* WARNING: Removing unreachable block (ram,0x001113df) */
/* WARNING: Removing unreachable block (ram,0x001113f4) */
/* WARNING: Removing unreachable block (ram,0x00111409) */
/* WARNING: Removing unreachable block (ram,0x0011142f) */
/* WARNING: Removing unreachable block (ram,0x0011151a) */
/* WARNING: Removing unreachable block (ram,0x0011146b) */
/* WARNING: Removing unreachable block (ram,0x001114c1) */
/* WARNING: Removing unreachable block (ram,0x00111473) */
/* WARNING: Removing unreachable block (ram,0x00111685) */
/* WARNING: Removing unreachable block (ram,0x00111694) */
/* WARNING: Removing unreachable block (ram,0x0011147c) */
/* WARNING: Removing unreachable block (ram,0x00111641) */
/* WARNING: Removing unreachable block (ram,0x00111484) */
/* WARNING: Removing unreachable block (ram,0x00111499) */
/* WARNING: Removing unreachable block (ram,0x001114ae) */
/* WARNING: Removing unreachable block (ram,0x001114d4) */
/* WARNING: Removing unreachable block (ram,0x001114f2) */
/* WARNING: Removing unreachable block (ram,0x001104d2) */
/* WARNING: Removing unreachable block (ram,0x0011010a) */
/* WARNING: Removing unreachable block (ram,0x001101a5) */
/* WARNING: Removing unreachable block (ram,0x00110148) */
/* WARNING: Removing unreachable block (ram,0x00110151) */
/* WARNING: Removing unreachable block (ram,0x00110168) */
/* WARNING: Removing unreachable block (ram,0x0011016c) */
/* WARNING: Removing unreachable block (ram,0x0011018a) */
/* WARNING: Removing unreachable block (ram,0x00110194) */
/* WARNING: Removing unreachable block (ram,0x00110198) */
/* WARNING: Removing unreachable block (ram,0x001101b8) */
/* WARNING: Removing unreachable block (ram,0x001101cb) */
/* WARNING: Removing unreachable block (ram,0x001101e9) */
/* WARNING: Removing unreachable block (ram,0x001101ed) */
/* WARNING: Removing unreachable block (ram,0x00110217) */
/* WARNING: Removing unreachable block (ram,0x00110232) */
/* WARNING: Removing unreachable block (ram,0x00110236) */
/* WARNING: Removing unreachable block (ram,0x00110248) */
/* WARNING: Removing unreachable block (ram,0x001106d0) */
/* WARNING: Removing unreachable block (ram,0x00110802) */
/* WARNING: Removing unreachable block (ram,0x00110864) */
/* WARNING: Removing unreachable block (ram,0x001108a1) */
/* WARNING: Removing unreachable block (ram,0x001108bb) */
/* WARNING: Removing unreachable block (ram,0x001108bf) */
/* WARNING: Removing unreachable block (ram,0x001108f3) */
/* WARNING: Removing unreachable block (ram,0x00110a31) */
/* WARNING: Removing unreachable block (ram,0x00110a44) */
/* WARNING: Removing unreachable block (ram,0x00110a65) */
/* WARNING: Removing unreachable block (ram,0x00110a69) */
/* WARNING: Removing unreachable block (ram,0x00110aaa) */
/* WARNING: Removing unreachable block (ram,0x001109bc) */
/* WARNING: Removing unreachable block (ram,0x001109c5) */
/* WARNING: Removing unreachable block (ram,0x001109e1) */
/* WARNING: Removing unreachable block (ram,0x001109e5) */
/* WARNING: Removing unreachable block (ram,0x00110a08) */
/* WARNING: Removing unreachable block (ram,0x00110a0f) */
/* WARNING: Removing unreachable block (ram,0x00110b5c) */
/* WARNING: Removing unreachable block (ram,0x00110a24) */
/* WARNING: Removing unreachable block (ram,0x001105be) */
/* WARNING: Removing unreachable block (ram,0x00110071) */
/* WARNING: Removing unreachable block (ram,0x00111856) */
/* WARNING: Removing unreachable block (ram,0x001118ea) */
/* WARNING: Removing unreachable block (ram,0x001103bf) */
/* JPH::AABBTreeToBuffer<JPH::TriangleCodecIndexed8BitPackSOA4Flags,
   JPH::NodeCodecQuadTreeHalfFloat>::Convert(JPH::Array<JPH::IndexedTriangle,
   JPH::STLAllocator<JPH::IndexedTriangle> > const&, JPH::Array<JPH::AABBTreeBuilder::Node,
   JPH::STLAllocator<JPH::AABBTreeBuilder::Node> > const&, JPH::Array<JPH::Float3,
   JPH::STLAllocator<JPH::Float3> > const&, JPH::AABBTreeBuilder::Node const*, bool, char const*&)
    */

undefined8 __thiscall
JPH::AABBTreeToBuffer<JPH::TriangleCodecIndexed8BitPackSOA4Flags,JPH::NodeCodecQuadTreeHalfFloat>::
Convert(AABBTreeToBuffer<JPH::TriangleCodecIndexed8BitPackSOA4Flags,JPH::NodeCodecQuadTreeHalfFloat>
        *this,Array *param_1,Array *param_2,Array *param_3,Node *param_4,bool param_5,char **param_6
       )

{
  uint *puVar1;
  ulong uVar2;
  size_t __n;
  undefined4 uVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  Array *pAVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined2 *puVar16;
  ulong uVar17;
  char *pcVar18;
  uint *puVar19;
  void *pvVar20;
  long *plVar21;
  undefined8 *puVar22;
  int iVar23;
  undefined1 (*pauVar24) [16];
  char cVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined1 (*pauVar28) [16];
  ulong uVar29;
  uint *puVar30;
  uint uVar31;
  long *plVar32;
  uint uVar33;
  uint uVar34;
  long lVar35;
  uint *puVar36;
  long lVar37;
  undefined4 *puVar38;
  undefined8 *puVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long in_FS_OFFSET;
  bool bVar43;
  bool bVar44;
  uint uVar47;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined4 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  uint local_2e0;
  void *local_2b0;
  uint local_248 [2];
  undefined1 local_240 [16];
  ulong local_230;
  uint *local_228;
  long local_220;
  long lStack_218;
  void *local_210;
  undefined1 local_208 [64];
  long local_1c8 [8];
  Node *local_188;
  long lStack_180;
  long local_178;
  long lStack_170;
  long local_168;
  long lStack_160;
  undefined1 local_158 [16];
  long local_148;
  long lStack_140;
  long local_138;
  long lStack_130;
  long local_128;
  long lStack_120;
  long local_118;
  long lStack_110;
  undefined1 local_108 [16];
  undefined4 local_f8;
  uint uStack_f4;
  long lStack_f0;
  long local_40;
  
  pvVar20 = (void *)0x0;
  lVar40 = *(long *)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_248[0] = 0;
  local_248[1] = 0;
  local_230 = 0;
  local_228 = (uint *)0x0;
  local_210 = (void *)0x0;
  local_2b0 = (void *)0x0;
  local_240 = (undefined1  [16])0x0;
  local_220 = 0;
  lStack_218 = 0;
  lVar12 = lStack_218;
  lStack_218 = 0;
  if (lVar40 != 0) {
    __n = lVar40 * 4;
    lStack_218 = lVar12;
    local_2b0 = (void *)(*Reallocate)(0,0,__n);
    pvVar20 = (void *)((long)local_2b0 + __n);
    local_210 = local_2b0;
    lStack_218 = lVar40;
    if (local_2b0 < pvVar20) {
      memset(local_2b0,0xff,__n);
    }
  }
  local_220 = lVar40;
  lVar12 = (*Reallocate)(0,0,0x20);
  puVar13 = (undefined8 *)(*Reallocate)(0,0,8);
  local_2e0 = 0;
  *puVar13 = param_4;
  lVar40 = 0x38;
  lVar37 = 1;
  while (lVar37 != 0) {
    pAVar7 = (Array *)puVar13[lVar37 + -1];
    lVar37 = lVar37 + -1;
    if (*(long *)(pAVar7 + 0x28) == -1) {
      uVar47 = *(uint *)(pAVar7 + 0x24);
      lVar40 = lVar40 + 4;
      lVar41 = *(long *)(param_1 + 0x10) + (ulong)*(uint *)(pAVar7 + 0x20) * 0x14;
      uVar34 = (local_2e0 - 0x100) + uVar47 * 3;
      if ((int)uVar34 < 0) {
        uVar34 = 0;
      }
      if ((int)local_2e0 < (int)uVar34) {
        uVar34 = local_2e0;
      }
      if ((uVar47 + 3 & 0xfffffffc) != 0) {
        bVar44 = false;
        puVar36 = (uint *)(lVar41 + 0xc);
        uVar31 = local_2e0;
        uVar33 = 4;
        do {
          lVar40 = lVar40 + 0x10;
          puVar30 = puVar36 + -3;
          uVar26 = uVar33 - 4;
          puVar19 = puVar30;
          do {
            if (uVar26 < uVar47) {
              uVar5 = *puVar30;
            }
            else {
              uVar5 = *(uint *)(lVar41 + (ulong)(uVar47 - 1) * 0x14);
            }
            puVar1 = (uint *)((long)local_2b0 + (ulong)uVar5 * 4);
            uVar5 = *puVar1;
            if (uVar5 == 0xffffffff || uVar5 < uVar34) {
              *puVar1 = uVar31;
              uVar31 = uVar31 + 1;
              bVar44 = uVar5 == 0xffffffff || uVar5 < uVar34;
            }
            uVar26 = uVar26 + 1;
            puVar30 = puVar30 + 5;
          } while ((uVar33 != uVar26) ||
                  (puVar30 = puVar19 + 1, uVar26 = uVar33 - 4, puVar19 = puVar30, puVar36 != puVar30
                  ));
          puVar36 = puVar36 + 0x14;
          bVar43 = uVar33 < (uVar47 + 3 & 0xfffffffc);
          uVar33 = uVar33 + 4;
        } while (bVar43);
        if (bVar44) {
          local_248[0] = uVar31;
          local_2e0 = uVar31;
        }
      }
      if (param_5) {
        lVar40 = lVar40 + (ulong)uVar47 * 4;
      }
    }
    else {
      lVar40 = lVar40 + 0x40;
      JPH::AABBTreeBuilder::Node::GetNChildren(pAVar7,(uint)param_2,(Array *)0x4);
    }
  }
  if (puVar13 != (undefined8 *)0x0) {
    (*Free)(puVar13);
  }
  uVar14 = (ulong)local_2e0;
  local_240._0_8_ = lVar40;
  uVar2 = lVar40 + uVar14 * 8;
  if (uVar14 != 0) {
    local_228 = (uint *)(*Reallocate)(0,0,uVar14 * 4);
    local_230 = uVar14;
  }
  if (pvVar20 != local_2b0) {
    memset(local_2b0,0xff,(long)pvVar20 - (long)local_2b0);
  }
  uVar14 = *(ulong *)(this + 8);
  if (*(ulong *)(this + 8) < uVar2) {
    pvVar20 = (void *)(*AlignedAllocate)(uVar2,0x40);
    if (*(void **)(this + 0x10) != (void *)0x0) {
      memmove(pvVar20,*(void **)(this + 0x10),*(size_t *)this);
      (*AlignedFree)(*(undefined8 *)(this + 0x10));
    }
    *(void **)(this + 0x10) = pvVar20;
    *(ulong *)(this + 8) = uVar2;
    uVar14 = uVar2;
  }
  lVar40 = *(long *)this;
  uVar17 = lVar40 + 0x20;
  if (uVar14 < uVar17) {
    pvVar20 = (void *)(*AlignedAllocate)(uVar17,0x40);
    if (*(void **)(this + 0x10) != (void *)0x0) {
      memmove(pvVar20,*(void **)(this + 0x10),*(size_t *)this);
      (*AlignedFree)(*(undefined8 *)(this + 0x10));
    }
    *(void **)(this + 0x10) = pvVar20;
    *(ulong *)(this + 8) = uVar17;
  }
  else {
    pvVar20 = *(void **)(this + 0x10);
  }
  puVar38 = (undefined4 *)(lVar40 + (long)pvVar20);
  *(ulong *)this = uVar17;
  *(undefined2 *)((long)puVar38 + 0x1d) = 0;
  *(undefined1 *)((long)puVar38 + 0x1f) = 0;
  lVar40 = *(long *)this;
  uVar14 = lVar40 + 0x18;
  if (*(ulong *)(this + 8) < uVar14) {
    local_2b0 = (void *)(*AlignedAllocate)(uVar14,0x40);
    if (*(void **)(this + 0x10) != (void *)0x0) {
      memmove(local_2b0,*(void **)(this + 0x10),*(size_t *)this);
      (*AlignedFree)(*(undefined8 *)(this + 0x10));
    }
    *(ulong *)(this + 8) = uVar14;
    *(void **)(this + 0x10) = local_2b0;
  }
  else {
    local_2b0 = *(void **)(this + 0x10);
  }
  *(ulong *)this = uVar14;
  puVar22 = (undefined8 *)(*Reallocate)(0,0,8);
  plVar21 = (long *)(*Reallocate)(0,0,0xa0);
  local_178 = *(long *)param_4;
  lStack_170 = *(long *)(param_4 + 8);
  local_168 = *(long *)(param_4 + 0x10);
  lStack_160 = *(long *)(param_4 + 0x18);
  local_158._8_4_ = 0xffffffff;
  local_158._0_8_ = 0xffffffffffffffff;
  local_158._12_4_ = 0xffffffff;
  plVar21[2] = local_178;
  plVar21[3] = lStack_170;
  *plVar21 = (long)param_4;
  plVar21[1] = lStack_180;
  plVar21[4] = local_168;
  plVar21[5] = lStack_160;
  plVar21[8] = local_148;
  plVar21[9] = lStack_140;
  plVar21[10] = local_138;
  plVar21[0xb] = lStack_130;
  *(undefined1 (*) [16])(plVar21 + 6) = local_158;
  plVar21[0xc] = local_128;
  plVar21[0xd] = lStack_120;
  plVar21[0xe] = local_118;
  plVar21[0xf] = lStack_110;
  *(undefined1 (*) [16])(plVar21 + 0x10) = (undefined1  [16])0x0;
  plVar21[0x12] = (ulong)uStack_f4 << 0x20;
  plVar21[0x13] = lStack_f0;
  local_f8 = 0;
  local_108 = (undefined1  [16])0x0;
  *puVar22 = plVar21;
  lVar37 = 1;
  puVar13 = (undefined8 *)0x0;
  lVar41 = 0;
  local_188 = param_4;
  do {
    while (puVar39 = puVar22, puVar22 = puVar13, lVar15 = lVar37, puVar36 = local_228, lVar15 != 0)
    {
      plVar32 = (long *)puVar39[lVar15 + -1];
      JPH::AABBTreeBuilder::Node::GetNChildren((Array *)*plVar32,(uint)param_2,(Array *)0x4);
      lVar37 = 0;
      *(undefined4 *)(plVar32 + 0x12) = 0;
      pauVar24 = (undefined1 (*) [16])local_1c8;
      pauVar28 = (undefined1 (*) [16])local_208;
      do {
        *pauVar28 = (undefined1  [16])0x0;
        *pauVar24 = (undefined1  [16])0x0;
        lVar37 = lVar37 + 1;
        pauVar28 = pauVar28 + 1;
        pauVar24 = pauVar24 + 1;
      } while (lVar37 != 4);
      auVar49 = *(undefined1 (*) [16])(plVar32 + 2);
      lVar42 = plVar32[4];
      lVar8 = plVar32[5];
      lVar37 = *(long *)this;
      if (*(long *)(*plVar32 + 0x28) != -1) {
        uVar14 = lVar37 + 0x40;
        if (*(ulong *)(this + 8) < uVar14) {
          pvVar20 = (void *)(*AlignedAllocate)(uVar14,0x40);
          if (*(void **)(this + 0x10) != (void *)0x0) {
            memmove(pvVar20,*(void **)(this + 0x10),*(size_t *)this);
            (*AlignedFree)(*(undefined8 *)(this + 0x10));
          }
          *(void **)(this + 0x10) = pvVar20;
          *(ulong *)(this + 8) = uVar14;
        }
        else {
          pvVar20 = *(void **)(this + 0x10);
        }
        lVar35 = 0;
        *(ulong *)this = uVar14;
        puVar16 = (undefined2 *)((long)pvVar20 + lVar37);
        do {
          *(undefined4 *)((undefined2 *)((long)pvVar20 + lVar37) + lVar35 * 2 + 0x18) = 0xf0000000;
          *puVar16 = 0x7bff;
          puVar16[4] = 0x7bff;
          puVar16[8] = 0x7bff;
          puVar16[0xc] = 0x7bff;
          puVar16[0x10] = 0x7bff;
          puVar16[0x14] = 0x7bff;
          lVar35 = lVar35 + 1;
          puVar16 = puVar16 + 1;
        } while (lVar35 != 4);
        lVar35 = 0;
        do {
          *(undefined1 (*) [16])(*(undefined1 (*) [16])local_208 + lVar35) = auVar49;
          *(long *)(*(undefined1 (*) [16])local_1c8 + lVar35) = lVar42;
          *(long *)((long)local_1c8 + lVar35 + 8) = lVar8;
          lVar35 = lVar35 + 0x10;
        } while (lVar35 != 0x40);
      }
      plVar32[6] = lVar37;
      puVar36 = local_228;
      if (lVar37 == -1) goto LAB_00110d67;
      lVar37 = *plVar32;
      if (*(long *)(lVar37 + 0x28) == -1) {
        lVar37 = TriangleCodecIndexed8BitPackSOA4Flags::EncodingContext::Pack
                           ((EncodingContext *)local_248,
                            (IndexedTriangle *)
                            (*(long *)(param_1 + 0x10) + (ulong)*(uint *)(lVar37 + 0x20) * 0x14),
                            *(uint *)(lVar37 + 0x24),param_5,(ByteBuffer *)this,param_6);
        plVar32[7] = lVar37;
        puVar36 = local_228;
        if (lVar37 == -1) goto LAB_00110d67;
      }
      lVar37 = lVar15 + -1;
      puVar13 = puVar22;
      puVar22 = puVar39;
      if ((long *)plVar32[0x10] != (long *)0x0) {
        *(long *)plVar32[0x10] = plVar32[6];
        *(long *)plVar32[0x11] = plVar32[7];
      }
    }
    bVar44 = lVar41 != 0;
    lVar37 = lVar41;
    puVar13 = puVar39;
    lVar41 = lVar15;
  } while (bVar44);
  uVar14 = 0;
  for (plVar32 = plVar21; plVar21 + 0x14 != plVar32; plVar32 = plVar32 + 0x14) {
    uVar47 = *(uint *)(plVar32 + 0x12);
    lVar37 = plVar32[6];
    if ((*(long *)(*plVar32 + 0x28) != -1) && (lVar41 = *(long *)(this + 0x10), uVar47 != 0)) {
      uVar17 = 0;
      do {
        uVar34 = *(uint *)(lVar37 + lVar41 + 0x30 + uVar17 * 4);
        if (uVar34 != 0) {
          uVar29 = plVar32[uVar17 + 0xc];
          if (uVar14 < uVar29) {
            uVar14 = uVar29;
          }
          if ((uVar29 & 3) == 0) goto LAB_00110d12;
LAB_00110d4d:
          pcVar18 = 
          "NodeCodecQuadTreeHalfFloat: Internal Error: Offset has non-significant bits set";
LAB_00110d54:
          *param_6 = pcVar18;
          goto LAB_00110d67;
        }
        uVar29 = plVar32[uVar17 + 8];
        if ((uVar29 & 3) != 0) goto LAB_00110d4d;
LAB_00110d12:
        if (0x3fffffff < uVar29) {
          pcVar18 = "NodeCodecQuadTreeHalfFloat: Offset too large. Too much data.";
          goto LAB_00110d54;
        }
        *(uint *)(lVar37 + lVar41 + 0x30 + uVar17 * 4) = uVar34 | (uint)(uVar29 >> 2);
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar47);
    }
  }
  if (local_240._8_8_ != 0) {
    lVar37 = local_240._8_8_ * 4;
    puVar30 = local_228 + local_240._8_8_;
    if (puVar30 == local_228) {
      auVar49._4_4_ = _LC20;
      auVar49._0_4_ = _LC20;
      auVar49._8_4_ = _LC20;
      auVar49._12_4_ = _LC20;
      auVar51._4_4_ = _LC27;
      auVar51._0_4_ = _LC27;
      auVar51._8_4_ = _LC27;
      auVar51._12_4_ = _LC27;
      uVar3 = _LC27;
      uVar9 = _LC27;
      uVar52 = _LC27;
    }
    else {
      lVar41 = *(long *)(param_3 + 0x10);
      auVar49._4_4_ = _LC20;
      auVar49._0_4_ = _LC20;
      auVar49._8_4_ = _LC20;
      auVar49._12_4_ = _LC20;
      auVar51._4_4_ = _LC27;
      auVar51._0_4_ = _LC27;
      auVar51._8_4_ = _LC27;
      auVar51._12_4_ = _LC27;
      puVar19 = local_228;
      do {
        uVar17 = (ulong)*puVar19;
        puVar19 = puVar19 + 1;
        uVar3 = *(undefined4 *)(lVar41 + 8 + uVar17 * 0xc);
        auVar45._4_4_ = *(undefined4 *)(lVar41 + 4 + uVar17 * 0xc);
        auVar45._0_4_ = *(undefined4 *)(lVar41 + uVar17 * 0xc);
        auVar45._8_4_ = uVar3;
        auVar45._12_4_ = uVar3;
        auVar51 = minps(auVar51,auVar45);
        auVar49 = maxps(auVar49,auVar45);
      } while (puVar19 != puVar30);
      uVar3 = auVar51._0_4_;
      uVar9 = auVar51._4_4_;
      uVar52 = auVar51._8_4_;
    }
    lVar41 = *(long *)this;
    uVar17 = lVar41 + local_240._8_8_ * 8;
    if (*(ulong *)(this + 8) < uVar17) {
      pvVar20 = (void *)(*AlignedAllocate)(uVar17,0x40);
      if (*(void **)(this + 0x10) != (void *)0x0) {
        memmove(pvVar20,*(void **)(this + 0x10),*(size_t *)this);
        (*AlignedFree)(*(undefined8 *)(this + 0x10));
      }
      *(void **)(this + 0x10) = pvVar20;
      *(ulong *)(this + 8) = uVar17;
    }
    else {
      pvVar20 = *(void **)(this + 0x10);
    }
    uVar11 = _LC58;
    auVar50._0_8_ = CONCAT44(auVar49._4_4_ - auVar51._4_4_,auVar49._0_4_ - auVar51._0_4_);
    auVar50._8_4_ = auVar49._8_4_ - auVar51._8_4_;
    auVar50._12_4_ = auVar49._12_4_ - auVar51._12_4_;
    auVar48._4_4_ = _LC23;
    auVar48._0_4_ = _LC23;
    auVar48._8_4_ = _LC23;
    auVar48._12_4_ = _LC23;
    *(ulong *)this = uVar17;
    fVar10 = _LC4;
    auVar46._8_4_ = auVar50._8_4_;
    auVar46._0_8_ = auVar50._0_8_;
    auVar46._12_4_ = auVar50._12_4_;
    auVar54._0_8_ = CONCAT44(uVar11,uVar11);
    auVar54._8_4_ = uVar11;
    auVar54._12_4_ = uVar11;
    auVar53._8_4_ = uVar11;
    auVar53._0_8_ = auVar54._0_8_;
    auVar53._12_4_ = uVar11;
    auVar49 = maxps(auVar46,auVar48);
    auVar49 = divps(auVar53,auVar49);
    if (puVar30 != puVar36) {
      lVar15 = *(long *)(param_3 + 0x10);
      lVar42 = 0;
      do {
        uVar17 = (ulong)*(uint *)((long)puVar36 + lVar42);
        fVar4 = *(float *)(lVar15 + 8 + uVar17 * 0xc);
        uVar47 = (uint)((*(float *)(lVar15 + 4 + uVar17 * 0xc) - auVar51._4_4_) * auVar49._4_4_ +
                       fVar10);
        *(uint *)((long)pvVar20 + lVar42 * 2 + lVar41) =
             uVar47 * 0x200000 +
             (int)((*(float *)(lVar15 + uVar17 * 0xc) - auVar51._0_4_) * auVar49._0_4_ + fVar10);
        *(uint *)((long)pvVar20 + lVar42 * 2 + lVar41 + 4) =
             (int)((fVar4 - auVar51._8_4_) * auVar49._8_4_ + fVar10) + (uVar47 >> 0xb) * 0x200000;
        lVar42 = lVar42 + 4;
      } while (lVar37 != lVar42);
    }
    auVar49 = divps(auVar50,auVar54);
    puVar13 = (undefined8 *)((long)local_2b0 + lVar40);
    puVar13[2] = auVar49._4_8_;
    *puVar13 = CONCAT44(uVar9,uVar3);
    puVar13[1] = CONCAT44(auVar49._0_4_,uVar52);
  }
  if (*(ulong *)this == uVar2) {
    uVar2 = plVar21[7];
    uVar17 = plVar21[6];
    if (*(long *)(param_4 + 0x28) == -1) {
      if ((uVar2 & 3) != 0) goto LAB_00111a3d;
      iVar23 = (int)(uVar2 >> 2);
      if (0x3fffffff < uVar2) goto LAB_00111a31;
LAB_00111a29:
      uVar14 = uVar2;
LAB_00111055:
      cVar25 = '\0';
      *puVar38 = *(undefined4 *)param_4;
      *(undefined8 *)(puVar38 + 1) = *(undefined8 *)(param_4 + 4);
      iVar6 = *(int *)(param_4 + 0x24);
      puVar38[3] = *(undefined4 *)(param_4 + 0x10);
      uVar27 = *(undefined8 *)(param_4 + 0x14);
      puVar38[6] = iVar6 * 0x10000000 + iVar23;
      *(undefined8 *)(puVar38 + 4) = uVar27;
      uVar47 = (uint)(uVar14 >> 2);
      if (uVar47 != 0) {
        iVar23 = 0x1f;
        if (uVar47 != 0) {
          for (; uVar47 >> iVar23 == 0; iVar23 = iVar23 + -1) {
          }
        }
        cVar25 = ' ' - ((byte)iVar23 ^ 0x1f);
      }
      *(char *)(puVar38 + 7) = cVar25;
      uVar27 = 1;
      if (0xe < *(uint *)(param_4 + 0x24)) {
        pcVar18 = "NodeCodecQuadTreeHalfFloat: Too many triangles";
        goto LAB_001110cd;
      }
    }
    else if ((uVar17 & 3) == 0) {
      iVar23 = (int)(uVar17 >> 2);
      if (uVar17 < 0x40000000) {
        if (uVar2 != 0xffffffffffffffff) goto LAB_00111a29;
        goto LAB_00111055;
      }
LAB_00111a31:
      pcVar18 = "NodeCodecQuadTreeHalfFloat: Offset too large. Too much data.";
LAB_001110cd:
      uVar27 = 0;
      *param_6 = pcVar18;
    }
    else {
LAB_00111a3d:
      uVar27 = 0;
      *param_6 = "NodeCodecQuadTreeHalfFloat: Internal Error: Offset has non-significant bits set";
    }
  }
  else {
    *param_6 = "Internal Error: Tree memory estimate was incorrect, memory corruption!";
LAB_00110d67:
    uVar27 = 0;
    if (plVar21 == (long *)0x0) goto LAB_00110d8e;
  }
  (*Free)(plVar21);
LAB_00110d8e:
  if (puVar22 != (undefined8 *)0x0) {
    (*Free)(puVar22);
  }
  if (puVar39 != (undefined8 *)0x0) {
    (*Free)(puVar39);
  }
  if (lVar12 != 0) {
    (*Free)();
  }
  if (local_210 != (void *)0x0) {
    (*Free)();
  }
  if (puVar36 != (uint *)0x0) {
    (*Free)(puVar36);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar27;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void JPH::Array<JPH::RefConst<JPH::PhysicsMaterial>,
   JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial> >
   >::assign<JPH::RefConst<JPH::PhysicsMaterial> const*>(JPH::RefConst<JPH::PhysicsMaterial> const*,
   JPH::RefConst<JPH::PhysicsMaterial> const*) */

void __thiscall
JPH::
Array<JPH::RefConst<JPH::PhysicsMaterial>,JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial>>>::
assign<JPH::RefConst<JPH::PhysicsMaterial>const*>
          (Array<JPH::RefConst<JPH::PhysicsMaterial>,JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial>>>
           *this,RefConst *param_1,RefConst *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  
  if (*(long *)this != 0) {
    plVar11 = *(long **)(this + 0x10);
    plVar2 = plVar11 + *(long *)this;
    for (; plVar11 < plVar2; plVar11 = plVar11 + 1) {
      while (plVar3 = (long *)*plVar11, plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) break;
        if (*(code **)(*plVar3 + 0x18) != PhysicsMaterial::~PhysicsMaterial) {
          (**(code **)(*plVar3 + 0x18))();
          break;
        }
        (*Free)();
        plVar11 = plVar11 + 1;
        if (plVar2 <= plVar11) goto LAB_00111b10;
      }
    }
  }
LAB_00111b10:
  *(undefined8 *)this = 0;
  uVar12 = (long)param_2 - (long)param_1 >> 3;
  if (*(ulong *)(this + 8) < uVar12) {
    puVar7 = (undefined8 *)(*Allocate)();
    puVar10 = *(undefined8 **)(this + 0x10);
    if (puVar10 != (undefined8 *)0x0) {
      lVar4 = *(long *)this;
      if (puVar7 < puVar10) {
        for (puVar8 = puVar7; puVar8 < puVar7 + lVar4; puVar8 = puVar8 + 1) {
          uVar6 = *puVar10;
          puVar10 = puVar10 + 1;
          *puVar8 = uVar6;
        }
      }
      else {
        puVar10 = puVar10 + lVar4 + -1;
        puVar8 = puVar7 + lVar4 + -1;
        if (!CARRY8(lVar4 * 8 - 8,(ulong)puVar7)) {
          do {
            uVar6 = *puVar10;
            puVar9 = puVar8 + -1;
            puVar10 = puVar10 + -1;
            *puVar8 = uVar6;
            puVar8 = puVar9;
          } while (puVar7 <= puVar9);
        }
      }
      (*Free)();
    }
    *(undefined8 **)(this + 0x10) = puVar7;
    *(ulong *)(this + 8) = uVar12;
  }
  if (param_1 != param_2) {
    do {
      lVar4 = *(long *)this;
      *(long *)this = lVar4 + 1;
      lVar5 = *(long *)param_1;
      *(long *)(*(long *)(this + 0x10) + lVar4 * 8) = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      param_1 = param_1 + 8;
    } while (param_2 != param_1);
  }
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* JPH::HashTable<JPH::IndexedTriangle, JPH::IndexedTriangle,
   JPH::UnorderedSetDetail<JPH::IndexedTriangle>, JPH::Hash<JPH::IndexedTriangle>,
   std::equal_to<JPH::IndexedTriangle> >::GrowTable() */

void __thiscall
JPH::
HashTable<JPH::IndexedTriangle,JPH::IndexedTriangle,JPH::UnorderedSetDetail<JPH::IndexedTriangle>,JPH::Hash<JPH::IndexedTriangle>,std::equal_to<JPH::IndexedTriangle>>
::GrowTable(HashTable<JPH::IndexedTriangle,JPH::IndexedTriangle,JPH::UnorderedSetDetail<JPH::IndexedTriangle>,JPH::Hash<JPH::IndexedTriangle>,std::equal_to<JPH::IndexedTriangle>>
            *this)

{
  void *__s;
  byte *pbVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  byte bVar12;
  byte *pbVar13;
  int iVar14;
  byte *pbVar15;
  char *pcVar16;
  undefined1 auVar17 [16];
  
  uVar8 = *(uint *)(this + 0x14);
  uVar9 = (ulong)(uVar8 * 2);
  if (uVar8 * 2 < 0x10) {
    uVar9 = 0x10;
  }
  if (uVar8 <= (uint)uVar9) {
    lVar4 = *(long *)this;
    pcVar16 = *(char **)(this + 8);
    *(undefined4 *)(this + 0x10) = 0;
    *(uint *)(this + 0x14) = (uint)uVar9;
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    *(int *)(this + 0x18) = (int)(uVar9 * 7 >> 3);
    lVar10 = (*Allocate)(uVar9 * 0x15 + 0xf);
    *(long *)this = lVar10;
    __s = (void *)(lVar10 + (ulong)*(uint *)(this + 0x14) * 0x14);
    *(void **)(this + 8) = __s;
    memset(__s,0,(ulong)(*(uint *)(this + 0x14) + 0xf));
    if (lVar4 != 0) {
      if (uVar8 != 0) {
        pbVar1 = (byte *)(lVar4 + 0x14) + (ulong)uVar8 * 0x14;
        pbVar15 = (byte *)(lVar4 + 0x14);
LAB_00111e61:
        do {
          if (*pcVar16 < '\0') {
            iVar14 = *(int *)(this + 0x18);
            pbVar13 = pbVar15 + -0x14;
            if (iVar14 == 0) {
              if ((ulong)*(uint *)(this + 0x14) <
                  (ulong)(uint)((int)((ulong)*(uint *)(this + 0x14) * 7 >> 3) -
                               *(int *)(this + 0x10)) << 3) {
                rehash((uint)this);
                iVar14 = *(int *)(this + 0x18);
              }
              else {
                GrowTable(this);
                iVar14 = *(int *)(this + 0x18);
              }
            }
            uVar9 = 0xcbf29ce484222325;
            do {
              bVar12 = *pbVar13;
              pbVar13 = pbVar13 + 1;
              uVar9 = (uVar9 ^ bVar12) * 0x100000001b3;
            } while (pbVar13 != pbVar15);
            bVar12 = (byte)uVar9 | 0x80;
            uVar8 = (uint)(uVar9 >> 7);
            while( true ) {
              uVar8 = uVar8 & *(int *)(this + 0x14) - 1U;
              pcVar2 = (char *)(*(long *)(this + 8) + (ulong)uVar8);
              auVar17[0] = -(*pcVar2 == '\0');
              auVar17[1] = -(pcVar2[1] == '\0');
              auVar17[2] = -(pcVar2[2] == '\0');
              auVar17[3] = -(pcVar2[3] == '\0');
              auVar17[4] = -(pcVar2[4] == '\0');
              auVar17[5] = -(pcVar2[5] == '\0');
              auVar17[6] = -(pcVar2[6] == '\0');
              auVar17[7] = -(pcVar2[7] == '\0');
              auVar17[8] = -(pcVar2[8] == '\0');
              auVar17[9] = -(pcVar2[9] == '\0');
              auVar17[10] = -(pcVar2[10] == '\0');
              auVar17[0xb] = -(pcVar2[0xb] == '\0');
              auVar17[0xc] = -(pcVar2[0xc] == '\0');
              auVar17[0xd] = -(pcVar2[0xd] == '\0');
              auVar17[0xe] = -(pcVar2[0xe] == '\0');
              auVar17[0xf] = -(pcVar2[0xf] == '\0');
              uVar5 = (ushort)(SUB161(auVar17 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar17[0xf] >> 7) << 0xf;
              if (uVar5 != 0) break;
              uVar8 = uVar8 + 0x10;
            }
            iVar6 = 0;
            for (uVar11 = (uint)uVar5; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
              iVar6 = iVar6 + 1;
            }
            *(int *)(this + 0x18) = iVar14 + -1;
            uVar8 = iVar6 + uVar8 & *(int *)(this + 0x14) - 1U;
            *(byte *)(*(long *)(this + 8) + (ulong)uVar8) = bVar12;
            *(byte *)(*(long *)(this + 8) +
                     (ulong)((*(int *)(this + 0x14) - 1U & uVar8 - 0xf) + 0xf)) = bVar12;
            *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
            puVar3 = (undefined8 *)(*(long *)this + (ulong)uVar8 * 0x14);
            if (puVar3 != (undefined8 *)0x0) {
              uVar7 = *(undefined8 *)(pbVar15 + -0xc);
              pbVar13 = pbVar15 + 0x14;
              pcVar16 = pcVar16 + 1;
              *puVar3 = *(undefined8 *)(pbVar15 + -0x14);
              puVar3[1] = uVar7;
              *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(pbVar15 + -4);
              pbVar15 = pbVar13;
              if (pbVar1 == pbVar13) break;
              goto LAB_00111e61;
            }
          }
          pbVar15 = pbVar15 + 0x14;
          pcVar16 = pcVar16 + 1;
        } while (pbVar1 != pbVar15);
      }
                    /* WARNING: Could not recover jumptable at 0x00111f83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(lVar4);
      return;
    }
  }
  return;
}



/* bool JPH::HashTable<JPH::IndexedTriangle, JPH::IndexedTriangle,
   JPH::UnorderedSetDetail<JPH::IndexedTriangle>, JPH::Hash<JPH::IndexedTriangle>,
   std::equal_to<JPH::IndexedTriangle> >::InsertKey<false>(JPH::IndexedTriangle const&, unsigned
   int&) */

bool __thiscall
JPH::
HashTable<JPH::IndexedTriangle,JPH::IndexedTriangle,JPH::UnorderedSetDetail<JPH::IndexedTriangle>,JPH::Hash<JPH::IndexedTriangle>,std::equal_to<JPH::IndexedTriangle>>
::InsertKey<false>(HashTable<JPH::IndexedTriangle,JPH::IndexedTriangle,JPH::UnorderedSetDetail<JPH::IndexedTriangle>,JPH::Hash<JPH::IndexedTriangle>,std::equal_to<JPH::IndexedTriangle>>
                   *this,IndexedTriangle *param_1,uint *param_2)

{
  uint uVar1;
  byte *pbVar2;
  int *piVar3;
  IndexedTriangle IVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  uint uVar25;
  uint uVar26;
  IndexedTriangle *pIVar27;
  bool bVar28;
  uint uVar29;
  ulong uVar30;
  uint uVar31;
  byte bVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  if (*(int *)(this + 0x18) == 0) {
    if ((ulong)*(uint *)(this + 0x14) <
        (ulong)(uint)((int)((ulong)*(uint *)(this + 0x14) * 7 >> 3) - *(int *)(this + 0x10)) << 3) {
      rehash((uint)this);
    }
    else {
      GrowTable(this);
    }
  }
  uVar30 = 0xcbf29ce484222325;
  pIVar27 = param_1;
  do {
    IVar4 = *pIVar27;
    pIVar27 = pIVar27 + 1;
    uVar30 = (uVar30 ^ (byte)IVar4) * 0x100000001b3;
  } while (pIVar27 != param_1 + 0x14);
  bVar32 = (byte)uVar30 | 0x80;
  uVar26 = 0xffffffff;
  uVar1 = *(int *)(this + 0x14) - 1;
  uVar31 = (uint)(uVar30 >> 7);
  while( true ) {
    uVar31 = uVar31 & uVar1;
    pbVar2 = (byte *)(*(long *)(this + 8) + (ulong)uVar31);
    bVar9 = *pbVar2;
    bVar10 = pbVar2[1];
    bVar11 = pbVar2[2];
    bVar12 = pbVar2[3];
    bVar13 = pbVar2[4];
    bVar14 = pbVar2[5];
    bVar15 = pbVar2[6];
    bVar16 = pbVar2[7];
    bVar17 = pbVar2[8];
    bVar18 = pbVar2[9];
    bVar19 = pbVar2[10];
    bVar20 = pbVar2[0xb];
    bVar21 = pbVar2[0xc];
    bVar22 = pbVar2[0xd];
    bVar23 = pbVar2[0xe];
    bVar24 = pbVar2[0xf];
    auVar34[0] = -(bVar32 == bVar9);
    auVar34[1] = -(bVar32 == bVar10);
    auVar34[2] = -(bVar32 == bVar11);
    auVar34[3] = -(bVar32 == bVar12);
    auVar34[4] = -(bVar32 == bVar13);
    auVar34[5] = -(bVar32 == bVar14);
    auVar34[6] = -(bVar32 == bVar15);
    auVar34[7] = -(bVar32 == bVar16);
    auVar34[8] = -(bVar32 == bVar17);
    auVar34[9] = -(bVar32 == bVar18);
    auVar34[10] = -(bVar32 == bVar19);
    auVar34[0xb] = -(bVar32 == bVar20);
    auVar34[0xc] = -(bVar32 == bVar21);
    auVar34[0xd] = -(bVar32 == bVar22);
    auVar34[0xe] = -(bVar32 == bVar23);
    auVar34[0xf] = -(bVar32 == bVar24);
    uVar6 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf;
    if (uVar6 != 0) {
      uVar29 = (uint)uVar6;
      uVar25 = uVar31;
      do {
        iVar7 = 0;
        for (uVar8 = uVar29; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          iVar7 = iVar7 + 1;
        }
        uVar25 = uVar25 + iVar7 & uVar1;
        piVar3 = (int *)(*(long *)this + (ulong)uVar25 * 0x14);
        if ((((piVar3[3] == *(int *)(param_1 + 0xc)) && (piVar3[4] == *(int *)(param_1 + 0x10))) &&
            (*piVar3 == *(int *)param_1)) &&
           ((piVar3[1] == *(int *)(param_1 + 4) && (piVar3[2] == *(int *)(param_1 + 8))))) {
          bVar28 = false;
          goto LAB_001120e7;
        }
        uVar25 = uVar25 + 1;
        bVar5 = (char)iVar7 + 1U & 0x1f;
        uVar8 = uVar29 >> bVar5;
        uVar29 = uVar29 >> bVar5;
      } while (uVar8 != 0);
    }
    if (uVar26 == 0xffffffff) {
      auVar35[0] = -(bVar9 == _LC43);
      auVar35[1] = -(bVar10 == UNK_00112571);
      auVar35[2] = -(bVar11 == UNK_00112572);
      auVar35[3] = -(bVar12 == UNK_00112573);
      auVar35[4] = -(bVar13 == UNK_00112574);
      auVar35[5] = -(bVar14 == UNK_00112575);
      auVar35[6] = -(bVar15 == UNK_00112576);
      auVar35[7] = -(bVar16 == UNK_00112577);
      auVar35[8] = -(bVar17 == UNK_00112578);
      auVar35[9] = -(bVar18 == UNK_00112579);
      auVar35[10] = -(bVar19 == UNK_0011257a);
      auVar35[0xb] = -(bVar20 == UNK_0011257b);
      auVar35[0xc] = -(bVar21 == UNK_0011257c);
      auVar35[0xd] = -(bVar22 == UNK_0011257d);
      auVar35[0xe] = -(bVar23 == UNK_0011257e);
      auVar35[0xf] = -(bVar24 == UNK_0011257f);
      iVar7 = 0;
      uVar29 = (uint)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar35[0xf] >> 7) << 0xf);
      for (uVar25 = uVar29; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x80000000) {
        iVar7 = iVar7 + 1;
      }
      if (uVar29 != 0) {
        uVar26 = iVar7 + uVar31;
      }
    }
    auVar33[0] = -(bVar9 == 0);
    auVar33[1] = -(bVar10 == 0);
    auVar33[2] = -(bVar11 == 0);
    auVar33[3] = -(bVar12 == 0);
    auVar33[4] = -(bVar13 == 0);
    auVar33[5] = -(bVar14 == 0);
    auVar33[6] = -(bVar15 == 0);
    auVar33[7] = -(bVar16 == 0);
    auVar33[8] = -(bVar17 == 0);
    auVar33[9] = -(bVar18 == 0);
    auVar33[10] = -(bVar19 == 0);
    auVar33[0xb] = -(bVar20 == 0);
    auVar33[0xc] = -(bVar21 == 0);
    auVar33[0xd] = -(bVar22 == 0);
    auVar33[0xe] = -(bVar23 == 0);
    auVar33[0xf] = -(bVar24 == 0);
    uVar6 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf;
    if (uVar6 != 0) break;
    uVar31 = uVar31 + 0x10;
  }
  if (uVar26 == 0xffffffff) {
    iVar7 = 0;
    for (uVar26 = (uint)uVar6; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x80000000) {
      iVar7 = iVar7 + 1;
    }
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
    uVar26 = iVar7 + uVar31;
  }
  uVar25 = uVar1 & uVar26;
  *(byte *)(*(long *)(this + 8) + (ulong)uVar25) = bVar32;
  *(byte *)(*(long *)(this + 8) + (ulong)((*(int *)(this + 0x14) - 1U & uVar25 - 0xf) + 0xf)) =
       bVar32;
  bVar28 = true;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
LAB_001120e7:
  *param_2 = uVar25;
  return bVar28;
}



/* JPH::MeshShape::sDrawTriangleGroups */

void JPH::MeshShape::_GLOBAL__sub_I_sDrawTriangleGroups(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC71;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::CollideSoftBodyVerticesVsTriangles::CollideSoftBodyVerticesVsTriangles(JPH::Mat44 const&,
   JPH::Vec3) */

void __thiscall JPH::CollideSoftBodyVerticesVsTriangles::CollideSoftBodyVerticesVsTriangles(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::DebugRenderer::Geometry::Geometry(JPH::Ref<JPH::RefTargetVirtual> const&, JPH::AABox const&)
    */

void __thiscall JPH::DebugRenderer::Geometry::Geometry(Geometry *this,Ref *param_1,AABox *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::MeshShapeSettings::~MeshShapeSettings() */

void __thiscall JPH::MeshShapeSettings::~MeshShapeSettings(MeshShapeSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::MeshShape::~MeshShape() */

void __thiscall JPH::MeshShape::~MeshShape(MeshShape *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
