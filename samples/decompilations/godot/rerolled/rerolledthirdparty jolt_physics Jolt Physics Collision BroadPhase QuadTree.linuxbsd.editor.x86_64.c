/* JPH::QuadTree::sPartition(JPH::QuadTree::NodeID*, JPH::Vec3*, int, int&) [clone .part.0] */void JPH::QuadTree::sPartition(NodeID *param_1, Vec3 *param_2, int param_3, int *param_4) {
   undefined4 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   int iVar4;
   Vec3 *pVVar5;
   long lVar6;
   Vec3 *pVVar7;
   int iVar8;
   ulong uVar9;
   long lVar10;
   long in_FS_OFFSET;
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   float fVar13;
   float fVar14;
   float fVar15;
   float local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 < param_2 + (long)param_3 * 0x10) {
      auVar12._4_4_ = _LC1;
      auVar12._0_4_ = _LC1;
      auVar12._8_4_ = _LC1;
      auVar12._12_4_ = _LC1;
      auVar11._4_4_ = _LC3;
      auVar11._0_4_ = _LC3;
      auVar11._8_4_ = _LC3;
      auVar11._12_4_ = _LC3;
      pVVar5 = param_2;
      do {
         auVar11 = minps(auVar11, *(undefined1(*) [16])pVVar5);
         auVar12 = maxps(auVar12, *(undefined1(*) [16])pVVar5);
         pVVar5 = pVVar5 + 0x10;
      }
 while ( pVVar5 < param_2 + (long)param_3 * 0x10 );
      fVar13 = auVar12._0_4_ - auVar11._0_4_;
      fVar14 = auVar12._4_4_ - auVar11._4_4_;
      fVar15 = auVar12._8_4_ - auVar11._8_4_;
      local_48[0] = auVar11._0_4_ + auVar12._0_4_;
      local_48[1] = auVar11._4_4_ + auVar12._4_4_;
      local_48[2] = auVar11._8_4_ + auVar12._8_4_;
      local_48[3] = auVar11._12_4_ + auVar12._12_4_;
      if (fVar13 <= fVar14) {
         uVar9 = 2;
         if (fVar15 <= fVar14) {
            uVar9 = 1;
         }

      }
 else {
         uVar9 = ( ulong )(( uint )(fVar13 < fVar15) * 2);
      }

   }
 else {
      for (int i = 0; i < 4; i++) {
         local_48[i] = 0;
      }

      uVar9 = 1;
   }

   fVar13 = _LC4 * local_48[uVar9];
   iVar4 = 0;
   iVar8 = param_3;
   LAB_001000b0:do {
      if (iVar8 <= iVar4) {
         LAB_00100153:if (( iVar4 < 1 ) || ( param_3 <= iVar4 )) {
            iVar4 = param_3 >> 1;
         }

         *param_4 = iVar4;
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      while (true) {
         pVVar5 = param_2 + ( uVar9 + (long)iVar4 * 4 ) * 4;
         while (*(float*)pVVar5 <= fVar13 && fVar13 != *(float*)pVVar5) {
            iVar4 = iVar4 + 1;
            pVVar5 = pVVar5 + 0x10;
            if (iVar8 == iVar4) goto LAB_001000b0;
         }
;
         if (iVar8 <= iVar4) goto LAB_00100153;
         pVVar5 = param_2 + ( uVar9 + (long)iVar8 * 4 ) * 4 + -0x10;
         while (true) {
            if (*(float*)pVVar5 < fVar13) break;
            iVar8 = iVar8 + -1;
            pVVar5 = pVVar5 + -0x10;
            if (iVar8 == iVar4) goto LAB_001000b0;
         }
;
         if (iVar8 <= iVar4) break;
         lVar10 = (long)iVar8;
         lVar6 = (long)iVar4;
         iVar8 = iVar8 + -1;
         iVar4 = iVar4 + 1;
         pVVar5 = param_2 + lVar10 * 0x10 + -0x10;
         pVVar7 = param_2 + lVar6 * 0x10;
         uVar1 = *(undefined4*)( param_1 + lVar6 * 4 );
         auVar11 = *(undefined1(*) [16])pVVar7;
         uVar2 = *(undefined8*)pVVar5;
         uVar3 = *(undefined8*)( pVVar5 + 8 );
         *(undefined4*)( param_1 + lVar6 * 4 ) = *(undefined4*)( param_1 + lVar10 * 4 + -4 );
         *(undefined4*)( param_1 + lVar10 * 4 + -4 ) = uVar1;
         *(undefined8*)pVVar7 = uVar2;
         *(undefined8*)( pVVar7 + 8 ) = uVar3;
         *(undefined1(*) [16])pVVar5 = auVar11;
         if (iVar8 <= iVar4) goto LAB_00100153;
      }
;
   }
 while ( true );
}
/* JPH::QuadTree::AllocateNode(bool) [clone .part.0] */void JPH::QuadTree::AllocateNode(bool param_1) {
   ( *Trace )("QuadTree: Out of nodes!");
   /* WARNING: Subroutine does not return */
   abort();
}
/* JPH::QuadTree::Node::Node(bool) */undefined4 JPH::QuadTree::Node::Node(Node *this, bool param_1) {
   undefined4 uVar1;
   uVar1 = _LC3;
   *(undefined4*)( this + 0x70 ) = 0xffffffff;
   *(uint*)( this + 0x74 ) = (uint)param_1;
   *(undefined4*)( this + 0x78 ) = 0;
   *(undefined4*)this = uVar1;
   for (int i = 0; i < 11; i++) {
      *(undefined4*)( this + ( 4*i + 4 ) ) = uVar1;
   }

   uVar1 = _LC1;
   *(undefined4*)( this + 0x30 ) = _LC1;
   for (int i = 0; i < 11; i++) {
      *(undefined4*)( this + ( 4*i + 52 ) ) = uVar1;
   }

   LOCK();
   for (int i = 0; i < 3; i++) {
      *(undefined4*)( this + ( 4*i + 96 ) ) = 4294967295;
      UNLOCK();
      LOCK();
   }

   uVar1 = *(undefined4*)( this + 0x6c );
   *(undefined4*)( this + 0x6c ) = 0xffffffff;
   UNLOCK();
   return uVar1;
}
/* JPH::QuadTree::Node::GetChildBounds(int, JPH::AABox&) const */void JPH::QuadTree::Node::GetChildBounds(Node *this, int param_1, AABox *param_2) {
   long lVar1;
   undefined4 uVar2;
   uVar2 = *(undefined4*)( this + ( (long)param_1 + 8 ) * 4 );
   lVar1 = ( (long)param_1 + 8 ) * 4;
   *(ulong*)param_2 = CONCAT44(*(undefined4*)( this + lVar1 + -0x10 ), *(undefined4*)( this + lVar1 + -0x20 ));
   *(ulong*)( param_2 + 8 ) = CONCAT44(uVar2, uVar2);
   uVar2 = *(undefined4*)( this + lVar1 + 0x30 );
   *(ulong*)( param_2 + 0x10 ) = CONCAT44(*(undefined4*)( this + lVar1 + 0x20 ), *(undefined4*)( this + lVar1 + 0x10 ));
   *(ulong*)( param_2 + 0x18 ) = CONCAT44(uVar2, uVar2);
   return;
}
/* JPH::QuadTree::Node::SetChildBounds(int, JPH::AABox const&) */void JPH::QuadTree::Node::SetChildBounds(Node *this, int param_1, AABox *param_2) {
   long lVar1;
   lVar1 = (long)param_1 * 4;
   LOCK();
   *(undefined4*)( this + lVar1 + 0x50 ) = *(undefined4*)( param_2 + 0x18 );
   UNLOCK();
   LOCK();
   *(undefined4*)( this + lVar1 + 0x40 ) = *(undefined4*)( param_2 + 0x14 );
   UNLOCK();
   LOCK();
   *(undefined4*)( this + lVar1 + 0x30 ) = *(undefined4*)( param_2 + 0x10 );
   UNLOCK();
   LOCK();
   *(undefined4*)( this + lVar1 + 0x20 ) = *(undefined4*)( param_2 + 8 );
   UNLOCK();
   LOCK();
   *(undefined4*)( this + lVar1 + 0x10 ) = *(undefined4*)( param_2 + 4 );
   UNLOCK();
   LOCK();
   *(undefined4*)( this + lVar1 ) = *(undefined4*)param_2;
   UNLOCK();
   return;
}
/* JPH::QuadTree::Node::InvalidateChildBounds(int) */undefined4 JPH::QuadTree::Node::InvalidateChildBounds(Node *this, int param_1) {
   undefined4 uVar1;
   long lVar2;
   lVar2 = (long)param_1 * 4;
   LOCK();
   *(undefined4*)( this + lVar2 ) = 0x7149f2ca;
   UNLOCK();
   LOCK();
   *(undefined4*)( this + lVar2 + 0x10 ) = 0x7149f2ca;
   UNLOCK();
   LOCK();
   *(undefined4*)( this + lVar2 + 0x20 ) = 0x7149f2ca;
   UNLOCK();
   LOCK();
   *(undefined4*)( this + lVar2 + 0x30 ) = 0xf149f2ca;
   UNLOCK();
   LOCK();
   *(undefined4*)( this + lVar2 + 0x40 ) = 0xf149f2ca;
   UNLOCK();
   LOCK();
   uVar1 = *(undefined4*)( this + lVar2 + 0x50 );
   *(undefined4*)( this + lVar2 + 0x50 ) = 0xf149f2ca;
   UNLOCK();
   return uVar1;
}
/* JPH::QuadTree::Node::GetNodeBounds(JPH::AABox&) const */void JPH::QuadTree::Node::GetNodeBounds(Node *this, AABox *param_1) {
   undefined1(*pauVar1)[16];
   int iVar2;
   ulong uVar3;
   AABox *pAVar4;
   long in_FS_OFFSET;
   undefined1 auVar5[16];
   AABox local_38[16];
   undefined1 local_28[16];
   long local_10;
   pAVar4 = local_38;
   uVar3 = 1;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   GetChildBounds(this, 0, param_1);
   do {
      iVar2 = (int)uVar3;
      uVar3 = ( ulong )(iVar2 + 1);
      pauVar1 = (undefined1(*) [16])GetChildBounds(this, iVar2, pAVar4);
      auVar5 = minps(*pauVar1, (undefined1[16])local_38);
      *pauVar1 = auVar5;
      auVar5 = maxps(pauVar1[1], local_28);
      pauVar1[1] = auVar5;
   }
 while ( (int)uVar3 != 4 );
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::QuadTree::Node::EncapsulateChildBounds(int, JPH::AABox const&) */ulong JPH::QuadTree::Node::EncapsulateChildBounds(int param_1, AABox *param_2) {
   float *pfVar1;
   float fVar2;
   long lVar3;
   float fVar4;
   float fVar5;
   ulong uVar6;
   float *in_RDX;
   ulong uVar7;
   undefined4 in_register_0000003c;
   long lVar8;
   uint in_R9D;
   long in_FS_OFFSET;
   bool bVar9;
   float local_14;
   lVar8 = CONCAT44(in_register_0000003c, param_1);
   fVar2 = *in_RDX;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar7 = (long)(int)param_2 * 4;
   pfVar1 = (float*)( lVar8 + uVar7 );
   fVar5 = *pfVar1;
   do {
      if (fVar5 <= fVar2) {
         uVar6 = 0;
         break;
      }

      LOCK();
      fVar4 = *pfVar1;
      bVar9 = fVar5 == fVar4;
      if (bVar9) {
         *pfVar1 = fVar2;
         fVar4 = fVar5;
      }

      UNLOCK();
      uVar6 = (ulong)CONCAT31(( int3 )((uint)fVar2 >> 8), bVar9);
      fVar5 = fVar4;
   }
 while ( !bVar9 );
   pfVar1 = (float*)( lVar8 + 0x10 + uVar7 );
   fVar2 = in_RDX[1];
   local_14 = *pfVar1;
   do {
      if (local_14 <= fVar2) goto LAB_00100420;
      LOCK();
      fVar5 = *pfVar1;
      bVar9 = local_14 == fVar5;
      if (bVar9) {
         *pfVar1 = fVar2;
         fVar5 = local_14;
      }

      UNLOCK();
      in_R9D = CONCAT31(( int3 )(in_R9D >> 8), bVar9);
      local_14 = fVar5;
   }
 while ( !bVar9 );
   uVar6 = (ulong)in_R9D;
   LAB_00100420:pfVar1 = (float*)( lVar8 + 0x20 + uVar7 );
   fVar2 = in_RDX[2];
   local_14 = *pfVar1;
   do {
      if (local_14 <= fVar2) goto LAB_00100458;
      LOCK();
      fVar5 = *pfVar1;
      bVar9 = local_14 == fVar5;
      if (bVar9) {
         *pfVar1 = fVar2;
         fVar5 = local_14;
      }

      UNLOCK();
      in_R9D = CONCAT31(( int3 )(in_R9D >> 8), bVar9);
      local_14 = fVar5;
   }
 while ( !bVar9 );
   uVar6 = (ulong)in_R9D;
   LAB_00100458:pfVar1 = (float*)( lVar8 + 0x30 + uVar7 );
   fVar2 = in_RDX[4];
   local_14 = *pfVar1;
   do {
      if (fVar2 <= local_14) goto LAB_00100490;
      LOCK();
      fVar5 = *pfVar1;
      bVar9 = local_14 == fVar5;
      if (bVar9) {
         *pfVar1 = fVar2;
         fVar5 = local_14;
      }

      UNLOCK();
      in_R9D = CONCAT31(( int3 )(in_R9D >> 8), bVar9);
      local_14 = fVar5;
   }
 while ( !bVar9 );
   uVar6 = (ulong)in_R9D;
   LAB_00100490:pfVar1 = (float*)( lVar8 + 0x40 + uVar7 );
   fVar2 = in_RDX[5];
   local_14 = *pfVar1;
   do {
      if (fVar2 <= local_14) goto LAB_001004c4;
      LOCK();
      fVar5 = *pfVar1;
      bVar9 = local_14 == fVar5;
      if (bVar9) {
         *pfVar1 = fVar2;
         fVar5 = local_14;
      }

      UNLOCK();
      in_R9D = CONCAT31(( int3 )(in_R9D >> 8), bVar9);
      local_14 = fVar5;
   }
 while ( !bVar9 );
   uVar6 = (ulong)in_R9D;
   LAB_001004c4:pfVar1 = (float*)( lVar8 + 0x50 + uVar7 );
   fVar2 = in_RDX[6];
   local_14 = *pfVar1;
   do {
      if (fVar2 <= local_14) goto LAB_001004f9;
      LOCK();
      fVar5 = *pfVar1;
      bVar9 = local_14 == fVar5;
      if (bVar9) {
         *pfVar1 = fVar2;
         fVar5 = local_14;
      }

      UNLOCK();
      uVar7 = CONCAT71(( int7 )(uVar7 >> 8), bVar9);
      local_14 = fVar5;
   }
 while ( !bVar9 );
   uVar6 = uVar7 & 0xffffffff;
   LAB_001004f9:if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::QuadTree::GetBodyLocation(JPH::Array<JPH::QuadTree::Tracking,
   JPH::STLAllocator<JPH::QuadTree::Tracking> > const&, JPH::BodyID, unsigned int&, unsigned int&)
   const */void JPH::QuadTree::GetBodyLocation(undefined8 param_1_00, long param_1, uint param_3, uint *param_4, uint *param_5) {
   uint uVar1;
   uVar1 = *(uint*)( *(long*)( param_1 + 0x10 ) + 4 + ( ulong )(param_3 & 0x7fffff) * 8 );
   *param_4 = uVar1 & 0x3fffffff;
   *param_5 = uVar1 >> 0x1e;
   return;
}
/* JPH::QuadTree::SetBodyLocation(JPH::Array<JPH::QuadTree::Tracking,
   JPH::STLAllocator<JPH::QuadTree::Tracking> >&, JPH::BodyID, unsigned int, unsigned int) const */void JPH::QuadTree::SetBodyLocation(undefined8 param_1_00, long param_1, uint param_3, int param_4, int param_5) {
   LOCK();
   *(int*)( *(long*)( param_1 + 0x10 ) + 4 + ( ulong )(param_3 & 0x7fffff) * 8 ) = param_5 * 0x40000000 + param_4;
   UNLOCK();
   return;
}
/* JPH::QuadTree::sInvalidateBodyLocation(JPH::Array<JPH::QuadTree::Tracking,
   JPH::STLAllocator<JPH::QuadTree::Tracking> >&, JPH::BodyID) */undefined4 JPH::QuadTree::sInvalidateBodyLocation(long param_1, uint param_2) {
   undefined4 *puVar1;
   undefined4 uVar2;
   LOCK();
   puVar1 = (undefined4*)( *(long*)( param_1 + 0x10 ) + 4 + ( ulong )(param_2 & 0x7fffff) * 8 );
   uVar2 = *puVar1;
   *puVar1 = 0xffffffff;
   UNLOCK();
   return uVar2;
}
/* JPH::QuadTree::DiscardOldTree() */QuadTree * __thiscall JPH::QuadTree::DiscardOldTree(QuadTree *this){
   undefined8 *puVar1;
   int *piVar2;
   int iVar3;
   uint uVar4;
   uint uVar5;
   undefined4 uVar6;
   long lVar7;
   long lVar8;
   QuadTree *pQVar9;
   QuadTree *pQVar10;
   bool bVar11;
   pQVar10 = this + ( ulong )(*(uint*)( this + 0x4c ) ^ 1) * 4 + 0x44;
   if (*(int*)pQVar10 != -1) {
      LOCK();
      *(int*)pQVar10 = -1;
      UNLOCK();
      if (*(int*)( this + 8 ) != -1) {
         lVar7 = *(long*)this;
         uVar4 = *(uint*)( this + 0xc );
         uVar5 = *(uint*)( lVar7 + 8 );
         lVar8 = *(long*)( *(long*)( lVar7 + 0x18 ) + ( ulong )(uVar4 >> ( ( byte ) * (undefined4*)( lVar7 + 4 ) & 0x1f )) * 8 );
         puVar1 = (undefined8*)( lVar7 + 0x70 );
         do {
            pQVar9 = (QuadTree*)*puVar1;
            *(int*)( ( ulong )(uVar4 & uVar5) * 0x80 + lVar8 + 0x7c ) = (int)pQVar9;
            uVar6 = *(undefined4*)( this + 8 );
            LOCK();
            piVar2 = (int*)( lVar7 + 0x68 );
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + 1;
            UNLOCK();
            LOCK();
            pQVar10 = (QuadTree*)*puVar1;
            bVar11 = pQVar9 == pQVar10;
            if (bVar11) {
               *puVar1 = CONCAT44(iVar3, uVar6);
               pQVar10 = pQVar9;
            }

            UNLOCK();
         }
 while ( !bVar11 );
      }

      *(undefined8*)( this + 8 ) = 0xffffffffffffffff;
      *(undefined4*)( this + 0x10 ) = 0;
      return pQVar10;
   }

   return pQVar10;
}
/* JPH::QuadTree::~QuadTree() */void JPH::QuadTree::~QuadTree(QuadTree *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   uint uVar4;
   uint uVar5;
   uint *puVar6;
   long lVar7;
   int iVar8;
   uint uVar9;
   ulong uVar10;
   long lVar11;
   long in_FS_OFFSET;
   uint local_218[130];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   DiscardOldTree(this);
   uVar10 = 0xffffffff;
   iVar8 = 0;
   uVar4 = *(uint*)( this + ( ( ulong ) * (uint*)( this + 0x4c ) + 0x11 ) * 4 ) | 0x800000;
   local_218[0] = uVar4;
   uVar9 = 0xffffffff;
   while (true) {
      uVar5 = uVar4 & 0xff7fffff;
      lVar7 = *(long*)this;
      lVar7 = ( ulong )(uVar5 & *(uint*)( lVar7 + 8 )) * 0x80 + *(long*)( *(long*)( lVar7 + 0x18 ) + ( ulong )(uVar5 >> ( ( byte ) * (undefined4*)( lVar7 + 4 ) & 0x1f )) * 8 );
      puVar6 = (uint*)( lVar7 + 0x60 );
      do {
         uVar4 = *puVar6;
         if (( uVar4 != 0xffffffff ) && ( ( uVar4 & 0x800000 ) != 0 )) {
            lVar11 = (long)iVar8;
            iVar8 = iVar8 + 1;
            local_218[lVar11] = uVar4;
         }

         puVar6 = puVar6 + 1;
      }
 while ( puVar6 != (uint*)( lVar7 + 0x70 ) );
      lVar7 = *(long*)this;
      *(undefined4*)( ( ulong )(uVar5 & *(uint*)( lVar7 + 8 )) * 0x80 + *(long*)( *(long*)( lVar7 + 0x18 ) + ( ulong )(uVar5 >> ( ( byte ) * (undefined4*)( lVar7 + 4 ) & 0x1f )) * 8 ) + 0x7c ) = 0xffffffff;
      if ((int)uVar10 == -1) {
         uVar10 = (ulong)uVar5;
      }
 else {
         *(uint*)( ( ulong )(uVar9 & *(uint*)( lVar7 + 8 )) * 0x80 + *(long*)( *(long*)( lVar7 + 0x18 ) + ( ulong )(uVar9 >> ( ( byte ) * (undefined4*)( lVar7 + 4 ) & 0x1f )) * 8 ) + 0x7c ) = uVar5;
      }

      if (iVar8 + -1 < 0) break;
      iVar8 = iVar8 + -1;
      uVar4 = local_218[iVar8];
      uVar9 = uVar5;
   }
;
   lVar7 = *(long*)this;
   uVar4 = *(uint*)( lVar7 + 8 );
   plVar1 = (long*)( lVar7 + 0x70 );
   lVar11 = *(long*)( *(long*)( lVar7 + 0x18 ) + ( ulong )(uVar5 >> ( ( byte ) * (undefined4*)( lVar7 + 4 ) & 0x1f )) * 8 );
   do {
      lVar3 = *plVar1;
      *(int*)( ( ulong )(uVar5 & uVar4) * 0x80 + lVar11 + 0x7c ) = (int)lVar3;
      LOCK();
      puVar6 = (uint*)( lVar7 + 0x68 );
      uVar9 = *puVar6;
      *puVar6 = *puVar6 + 1;
      UNLOCK();
      LOCK();
      lVar2 = *plVar1;
      if (lVar3 == lVar2) {
         *plVar1 = ( (ulong)uVar9 << 0x20 ) + uVar10;
      }

      UNLOCK();
   }
 while ( lVar3 != lVar2 );
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::QuadTree::GetBounds() const */AABox *JPH::QuadTree::GetBounds(void) {
   uint uVar1;
   long lVar2;
   int iVar3;
   long *in_RSI;
   AABox *in_RDI;
   Node *this;
   AABox *pAVar4;
   long in_FS_OFFSET;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   AABox local_38[16];
   undefined1 local_28[16];
   long local_10;
   pAVar4 = local_38;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = *(uint*)( (long)in_RSI + ( ( ulong ) * (uint*)( (long)in_RSI + 0x4c ) + 0x11 ) * 4 );
   lVar2 = *in_RSI;
   this(Node * )(( ulong )(uVar1 & *(uint*)( lVar2 + 8 )) * 0x80 + *(long*)( *(long*)( lVar2 + 0x18 ) + ( ulong )(uVar1 >> ( ( byte ) * (undefined4*)( lVar2 + 4 ) & 0x1f )) * 8 ));
   iVar3 = Node::GetChildBounds(this, 0, in_RDI);
   auVar6 = *(undefined1(*) [16])in_RDI;
   auVar5 = *(undefined1(*) [16])( in_RDI + 0x10 );
   do {
      iVar3 = Node::GetChildBounds(this, iVar3, pAVar4);
      auVar6 = minps(auVar6, (undefined1[16])local_38);
      auVar5 = maxps(auVar5, local_28);
      *(undefined1(*) [16])in_RDI = auVar6;
      *(undefined1(*) [16])( in_RDI + 0x10 ) = auVar5;
   }
 while ( iVar3 != 4 );
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return in_RDI;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::QuadTree::UpdateFinalize(JPH::Array<JPH::Body*, JPH::STLAllocator<JPH::Body*> > const&,
   JPH::Array<JPH::QuadTree::Tracking, JPH::STLAllocator<JPH::QuadTree::Tracking> > const&,
   JPH::QuadTree::UpdateState const&) */uint JPH::QuadTree::UpdateFinalize(QuadTree *this, Array *param_1, Array *param_2, UpdateState *param_3) {
   uint uVar1;
   uint uVar2;
   uVar2 = *(uint*)( this + 0x4c );
   LOCK();
   *(uint*)( this + ( ( ulong )(uVar2 ^ 1) + 0x11 ) * 4 ) = *(uint*)param_3 & 0xff7fffff;
   UNLOCK();
   LOCK();
   uVar1 = *(uint*)( this + 0x4c );
   *(uint*)( this + 0x4c ) = uVar2 ^ 1;
   UNLOCK();
   return uVar1;
}
/* JPH::QuadTree::sPartition(JPH::QuadTree::NodeID*, JPH::Vec3*, int, int&) */void JPH::QuadTree::sPartition(NodeID *param_1, Vec3 *param_2, int param_3, int *param_4) {
   if (4 < param_3) {
      sPartition(param_1, param_2, param_3, param_4);
      return;
   }

   *param_4 = param_3 / 2;
   return;
}
/* JPH::QuadTree::sPartition4(JPH::QuadTree::NodeID*, JPH::Vec3*, int, int, int*) */void JPH::QuadTree::sPartition4(NodeID *param_1, Vec3 *param_2, int param_3, int param_4, int *param_5) {
   NodeID *pNVar1;
   Vec3 *pVVar2;
   int iVar3;
   int iVar4;
   pNVar1 = param_1 + (long)param_3 * 4;
   iVar4 = param_4 - param_3;
   pVVar2 = param_2 + (long)param_3 * 0x10;
   if (iVar4 < 5) {
      iVar3 = iVar4 / 2;
      param_5[2] = iVar3;
   }
 else {
      sPartition(pNVar1, pVVar2, iVar4, param_5 + 2);
      iVar3 = param_5[2];
      if (4 < iVar3) {
         sPartition(pNVar1, pVVar2, iVar3, param_5 + 1);
         iVar3 = param_5[2];
         goto joined_r0x001009f2;
      }

   }

   param_5[1] = iVar3 / 2;
   joined_r0x001009f2:iVar4 = iVar4 - iVar3;
   if (iVar4 < 5) {
      iVar4 = iVar4 / 2;
   }
 else {
      sPartition(pNVar1 + (long)iVar3 * 4, pVVar2 + (long)iVar3 * 0x10, iVar4, param_5 + 3);
      iVar3 = param_5[2];
      iVar4 = param_5[3];
   }

   param_5[4] = param_4;
   *(ulong*)param_5 = CONCAT44(param_5[1] + param_3, param_3);
   *(ulong*)( param_5 + 2 ) = CONCAT44(iVar4 + iVar3 + param_3, iVar3 + param_3);
   return;
}
/* JPH::QuadTree::AddBodiesAbort(JPH::Array<JPH::QuadTree::Tracking,
   JPH::STLAllocator<JPH::QuadTree::Tracking> >&, JPH::QuadTree::AddState const&) */void JPH::QuadTree::AddBodiesAbort(QuadTree *this, Array *param_1, AddState *param_2) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   uint uVar5;
   long lVar6;
   uint *puVar7;
   long lVar8;
   int iVar9;
   uint uVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   uint local_228[130];
   long local_20;
   uVar11 = 0xffffffff;
   iVar9 = 0;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_228[0] = *(uint*)param_2;
   uVar10 = 0xffffffff;
   do {
      while (uVar5 = local_228[iVar9],( uVar5 & 0x800000 ) != 0) {
         lVar6 = *(long*)this;
         uVar5 = uVar5 & 0xff7fffff;
         lVar6 = ( ulong )(uVar5 & *(uint*)( lVar6 + 8 )) * 0x80 + *(long*)( *(long*)( lVar6 + 0x18 ) + ( ulong )(uVar5 >> ( ( byte ) * (undefined4*)( lVar6 + 4 ) & 0x1f )) * 8 );
         puVar7 = (uint*)( lVar6 + 0x60 );
         do {
            if (*puVar7 != 0xffffffff) {
               lVar8 = (long)iVar9;
               iVar9 = iVar9 + 1;
               local_228[lVar8] = *puVar7;
            }

            puVar7 = puVar7 + 1;
         }
 while ( (uint*)( lVar6 + 0x70 ) != puVar7 );
         lVar6 = *(long*)this;
         *(undefined4*)( ( ulong )(uVar5 & *(uint*)( lVar6 + 8 )) * 0x80 + *(long*)( *(long*)( lVar6 + 0x18 ) + ( ulong )(uVar5 >> ( ( byte ) * (undefined4*)( lVar6 + 4 ) & 0x1f )) * 8 ) + 0x7c ) = 0xffffffff;
         if ((int)uVar11 == -1) {
            uVar11 = (ulong)uVar5;
         }
 else {
            *(uint*)( ( ulong )(uVar10 & *(uint*)( lVar6 + 8 )) * 0x80 + *(long*)( *(long*)( lVar6 + 0x18 ) + ( ulong )(uVar10 >> ( ( byte ) * (undefined4*)( lVar6 + 4 ) & 0x1f )) * 8 ) + 0x7c ) = uVar5;
         }

         iVar9 = iVar9 + -1;
         uVar10 = uVar5;
         if (iVar9 < 0) goto LAB_00100b0a;
      }
;
      LOCK();
      *(undefined4*)( *(long*)( param_1 + 0x10 ) + 4 + ( ulong )(uVar5 & 0x7fffff) * 8 ) = 0xffffffff;
      UNLOCK();
      iVar9 = iVar9 + -1;
   }
 while ( -1 < iVar9 );
   LAB_00100b0a:if ((int)uVar11 != -1) {
      lVar6 = *(long*)this;
      uVar5 = *(uint*)( lVar6 + 8 );
      plVar1 = (long*)( lVar6 + 0x70 );
      lVar8 = *(long*)( *(long*)( lVar6 + 0x18 ) + ( ulong )(uVar10 >> ( ( byte ) * (undefined4*)( lVar6 + 4 ) & 0x1f )) * 8 );
      do {
         lVar4 = *plVar1;
         *(int*)( ( ulong )(uVar10 & uVar5) * 0x80 + lVar8 + 0x7c ) = (int)lVar4;
         LOCK();
         puVar7 = (uint*)( lVar6 + 0x68 );
         uVar2 = *puVar7;
         *puVar7 = *puVar7 + 1;
         UNLOCK();
         LOCK();
         lVar3 = *plVar1;
         if (lVar4 == lVar3) {
            *plVar1 = ( (ulong)uVar2 << 0x20 ) + uVar11;
         }

         UNLOCK();
      }
 while ( lVar4 != lVar3 );
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* JPH::QuadTree::RemoveBodies(JPH::Array<JPH::Body*, JPH::STLAllocator<JPH::Body*> > const&,
   JPH::Array<JPH::QuadTree::Tracking, JPH::STLAllocator<JPH::QuadTree::Tracking> >&, JPH::BodyID
   const*, int) */void JPH::QuadTree::RemoveBodies(QuadTree *this, Array *param_1, Array *param_2, BodyID *param_3, int param_4) {
   Node *this_00;
   uint *puVar1;
   uint uVar2;
   long lVar4;
   undefined8 uVar5;
   uint uVar6;
   ulong uVar3;
   LOCK();
   this[0x50] = (QuadTree)0x1;
   UNLOCK();
   puVar1 = (uint*)( param_3 + (long)param_4 * 4 );
   if (param_3 < puVar1) {
      uVar5 = 1;
      do {
         uVar2 = *(uint*)( *(long*)( param_2 + 0x10 ) + 4 + ( ulong )(*(uint*)param_3 & 0x7fffff) * 8 );
         uVar6 = uVar2 >> 0x1e;
         uVar2 = uVar2 & 0x3fffffff;
         uVar3 = (ulong)uVar2;
         LOCK();
         *(undefined4*)( *(long*)( param_2 + 0x10 ) + 4 + ( ulong )(*(uint*)param_3 & 0x7fffff) * 8 ) = 0xffffffff;
         UNLOCK();
         lVar4 = *(long*)this;
         this_00 = (Node*)( ( ulong )(uVar2 & *(uint*)( lVar4 + 8 )) * 0x80 + *(long*)( *(long*)( lVar4 + 0x18 ) + ( ulong )(uVar2 >> ( ( byte ) * (undefined4*)( lVar4 + 4 ) & 0x1f )) * 8 ) );
         Node::InvalidateChildBounds(this_00, uVar6);
         LOCK();
         *(undefined4*)( this_00 + ( ulong )(uVar6 + 0x18) * 4 ) = 0xffffffff;
         UNLOCK();
         do {
            lVar4 = *(long*)this;
            lVar4 = ( ulong )((uint)uVar3 & *(uint*)( lVar4 + 8 )) * 0x80 + *(long*)( *(long*)( lVar4 + 0x18 ) + ( ulong )((uint)uVar3 >> ( ( byte ) * (undefined4*)( lVar4 + 4 ) & 0x1f )) * 8 );
            if (*(int*)( lVar4 + 0x74 ) != 0) break;
            LOCK();
            *(int*)( lVar4 + 0x74 ) = (int)uVar5;
            UNLOCK();
            uVar3 = ( ulong ) * (uint*)( lVar4 + 0x70 );
         }
 while ( *(uint*)( lVar4 + 0x70 ) != 0xffffffff );
         param_3 = (BodyID*)( (long)param_3 + 4 );
      }
 while ( param_3 < puVar1 );
   }

   LOCK();
   *(int*)( this + 0x40 ) = *(int*)( this + 0x40 ) - param_4;
   UNLOCK();
   return;
}
/* JPH::QuadTree::NotifyBodiesAABBChanged(JPH::Array<JPH::Body*, JPH::STLAllocator<JPH::Body*> >
   const&, JPH::Array<JPH::QuadTree::Tracking, JPH::STLAllocator<JPH::QuadTree::Tracking> > const&,
   JPH::BodyID const*, int) */void JPH::QuadTree::NotifyBodiesAABBChanged(QuadTree *this, Array *param_1, Array *param_2, BodyID *param_3, int param_4) {
   uint *puVar1;
   char cVar2;
   long lVar3;
   uint *puVar4;
   uint uVar5;
   AABox *pAVar6;
   uint uVar7;
   uint uVar8;
   puVar1 = (uint*)( param_3 + (long)param_4 * 4 );
   if (param_3 < puVar1) {
      do {
         uVar8 = *(uint*)( *(long*)( param_2 + 0x10 ) + 4 + ( ulong )(*(uint*)param_3 & 0x7fffff) * 8 );
         uVar7 = uVar8 & 0x3fffffff;
         lVar3 = *(long*)this;
         cVar2 = Node::EncapsulateChildBounds(( uVar7 & *(uint*)( lVar3 + 8 ) ) * 0x80 + (int)*(undefined8*)( *(long*)( lVar3 + 0x18 ) + ( ulong )(uVar7 >> ( ( byte ) * (undefined4*)( lVar3 + 4 ) & 0x1f )) * 8 ), (AABox*)( ulong )(uVar8 >> 0x1e));
         if (cVar2 != '\0') {
            LOCK();
            this[0x50] = (QuadTree)0x1;
            UNLOCK();
            do {
               lVar3 = *(long*)this;
               lVar3 = ( ulong )(uVar7 & *(uint*)( lVar3 + 8 )) * 0x80 + *(long*)( *(long*)( lVar3 + 0x18 ) + ( ulong )(uVar7 >> ( ( byte ) * (undefined4*)( lVar3 + 4 ) & 0x1f )) * 8 );
               LOCK();
               *(undefined4*)( lVar3 + 0x74 ) = 1;
               UNLOCK();
               uVar8 = *(uint*)( lVar3 + 0x70 );
               if (uVar8 == 0xffffffff) goto joined_r0x00100e48;
               lVar3 = *(long*)this;
               lVar3 = ( ulong )(uVar8 & *(uint*)( lVar3 + 8 )) * 0x80 + *(long*)( *(long*)( lVar3 + 0x18 ) + ( ulong )(uVar8 >> ( ( byte ) * (undefined4*)( lVar3 + 4 ) & 0x1f )) * 8 );
               pAVar6 = (AABox*)0x0;
               puVar4 = (uint*)( lVar3 + 0x60 );
               do {
                  if (( uVar7 | 0x800000 ) == *puVar4) goto LAB_00100dda;
                  uVar5 = (int)pAVar6 + 1;
                  pAVar6 = (AABox*)(ulong)uVar5;
                  puVar4 = puVar4 + 1;
               }
 while ( uVar5 != 4 );
               pAVar6 = (AABox*)0xffffffff;
               LAB_00100dda:cVar2 = Node::EncapsulateChildBounds((int)lVar3, pAVar6);
               uVar7 = uVar8;
            }
 while ( cVar2 != '\0' );
            if (*(int*)( lVar3 + 0x74 ) == 0) {
               do {
                  lVar3 = *(long*)this;
                  lVar3 = ( ulong )(uVar8 & *(uint*)( lVar3 + 8 )) * 0x80 + *(long*)( *(long*)( lVar3 + 0x18 ) + ( ulong )(uVar8 >> ( ( byte ) * (undefined4*)( lVar3 + 4 ) & 0x1f )) * 8 );
                  if (*(int*)( lVar3 + 0x74 ) != 0) break;
                  LOCK();
                  *(undefined4*)( lVar3 + 0x74 ) = 1;
                  UNLOCK();
                  uVar8 = *(uint*)( lVar3 + 0x70 );
               }
 while ( uVar8 != 0xffffffff );
            }

         }

         joined_r0x00100e48:param_3 = (BodyID*)( (long)param_3 + 4 );
      }
 while ( param_3 < puVar1 );
   }

   return;
}
/* JPH::QuadTree::CastRay(JPH::RayCast const&, JPH::CollisionCollector<JPH::BroadPhaseCastResult,
   JPH::CollisionCollectorTraitsCastRay>&, JPH::ObjectLayerFilter const&,
   JPH::Array<JPH::QuadTree::Tracking, JPH::STLAllocator<JPH::QuadTree::Tracking> > const&) const */void JPH::QuadTree::CastRay(QuadTree *this, RayCast *param_1, CollisionCollector *param_2, ObjectLayerFilter *param_3, Array *param_4) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   float fVar6;
   float fVar7;
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
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined8 uVar29;
   char cVar30;
   long lVar31;
   float *pfVar32;
   ulong uVar33;
   ulong uVar34;
   ObjectLayerFilter *pOVar35;
   long *plVar36;
   ObjectLayerFilter *pOVar37;
   ObjectLayerFilter *pOVar38;
   long lVar39;
   int iVar40;
   long in_FS_OFFSET;
   byte bVar41;
   uint uVar42;
   uint uVar46;
   uint uVar47;
   undefined1 auVar43[16];
   uint uVar48;
   undefined1 auVar44[16];
   undefined1 auVar45[16];
   uint uVar49;
   uint uVar55;
   undefined1 auVar50[16];
   undefined1 auVar51[16];
   undefined1 auVar52[16];
   undefined1 auVar53[16];
   uint uVar56;
   ObjectLayerFilter aOVar54[16];
   undefined1 auVar57[16];
   undefined1 auVar58[16];
   undefined1 auVar59[16];
   undefined1 auVar60[16];
   undefined1 auVar61[16];
   float fVar62;
   float fVar64;
   undefined1 auVar63[16];
   undefined1 auVar65[16];
   undefined1 auVar66[16];
   undefined1 auVar67[16];
   undefined1 auVar68[16];
   undefined1 auVar69[16];
   undefined1 auVar70[16];
   undefined1 auVar71[16];
   undefined1 auVar72[16];
   uint uVar75;
   uint uVar76;
   undefined1 auVar73[16];
   undefined1 auVar74[16];
   uint uVar77;
   undefined1 auVar78[16];
   undefined1 auVar79[16];
   undefined1 auVar80[16];
   undefined1 auVar81[16];
   undefined1 auVar82[16];
   undefined1 auVar83[16];
   float fVar84;
   float fVar85;
   float fVar88;
   float fVar89;
   float fVar90;
   float fVar91;
   float fVar92;
   undefined1 auVar86[16];
   undefined1 auVar87[16];
   float fVar93;
   undefined1 auVar94[16];
   undefined1 auVar95[16];
   float fVar96;
   float fVar97;
   float fVar98;
   float fVar99;
   uint local_4c0;
   float local_4bc;
   undefined8 local_4b8;
   undefined8 uStack_4b0;
   ObjectLayerFilter local_4a8[16];
   undefined1 local_498[16];
   uint local_488[2];
   undefined8 auStack_480[63];
   undefined1 local_288[8];
   float fStack_280;
   undefined1 local_278[8];
   float fStack_270;
   int local_268;
   int iStack_264;
   int iStack_260;
   int iStack_25c;
   ObjectLayerFilter *local_258;
   float local_250[132];
   long local_40;
   bVar41 = 0;
   iVar40 = 0;
   auVar58 = *(undefined1(*) [16])( param_1 + 0x10 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   auVar43._0_4_ = 0.0 - auVar58._0_4_;
   auVar43._4_4_ = 0.0 - auVar58._4_4_;
   auVar43._8_4_ = 0.0 - auVar58._8_4_;
   auVar43._12_4_ = 0.0 - auVar58._12_4_;
   local_258 = (ObjectLayerFilter*)param_2;
   _local_288 = *(undefined1(*) [16])param_1;
   local_250[0] = -1.0;
   auVar43 = maxps(auVar43, auVar58);
   local_268 = -(uint)(auVar43._0_4_ <= _LC8);
   iStack_264 = -(uint)(auVar43._4_4_ <= _LC8);
   iStack_260 = -(uint)(auVar43._8_4_ <= _LC8);
   iStack_25c = -(uint)(auVar43._12_4_ <= _LC8);
   uVar42 = local_268 >> 0x1f;
   uVar46 = iStack_264 >> 0x1f;
   uVar47 = iStack_260 >> 0x1f;
   uVar48 = iStack_25c >> 0x1f;
   auVar57._0_4_ = ~uVar42 & (uint)auVar58._0_4_;
   auVar57._4_4_ = ~uVar46 & (uint)auVar58._4_4_;
   auVar57._8_4_ = ~uVar47 & (uint)auVar58._8_4_;
   auVar57._12_4_ = ~uVar48 & (uint)auVar58._12_4_;
   auVar81._4_4_ = _LC10;
   auVar81._0_4_ = _LC10;
   auVar81._8_4_ = _LC10;
   auVar81._12_4_ = _LC10;
   auVar58._0_4_ = uVar42 & _LC10;
   auVar58._4_4_ = uVar46 & _LC10;
   auVar58._8_4_ = uVar47 & _LC10;
   auVar58._12_4_ = uVar48 & _LC10;
   _local_278 = divps(auVar81, auVar58 | auVar57);
   uVar42 = *(uint*)( this + ( ( ulong ) * (uint*)( this + 0x4c ) + 0x11 ) * 4 ) | 0x800000;
   local_488[0] = uVar42;
   pOVar37 = (ObjectLayerFilter*)this;
   do {
      pOVar35 = local_258;
      if (( uVar42 != 0xffffffff ) && ( iVar40 < 0x7c )) {
         lVar31 = *(long*)this;
         pfVar32 = (float*)( ( ulong )(uVar42 & 0xff7fffff & *(uint*)( lVar31 + 8 )) * 0x80 + *(long*)( *(long*)( lVar31 + 0x18 ) + ( ulong )(( uVar42 & 0xff7fffff ) >> ( ( byte ) * (undefined4*)( lVar31 + 4 ) & 0x1f )) * 8 ) );
         fVar85 = *pfVar32;
         fVar89 = pfVar32[1];
         fVar62 = pfVar32[2];
         fVar64 = pfVar32[3];
         fVar91 = pfVar32[4];
         fVar93 = pfVar32[5];
         fVar6 = pfVar32[6];
         fVar7 = pfVar32[7];
         fVar8 = pfVar32[0xc];
         fVar9 = pfVar32[0xd];
         fVar10 = pfVar32[0xe];
         fVar11 = pfVar32[0xf];
         fVar12 = pfVar32[0x10];
         fVar13 = pfVar32[0x11];
         fVar14 = pfVar32[0x12];
         fVar15 = pfVar32[0x13];
         fVar16 = pfVar32[0x14];
         fVar17 = pfVar32[0x15];
         fVar18 = pfVar32[0x16];
         fVar19 = pfVar32[0x17];
         fVar20 = pfVar32[8];
         fVar21 = pfVar32[9];
         fVar22 = pfVar32[10];
         fVar23 = pfVar32[0xb];
         fVar84 = ( fVar85 - (float)local_288._0_4_ ) * (float)local_278._0_4_;
         fVar88 = ( fVar89 - (float)local_288._0_4_ ) * (float)local_278._0_4_;
         fVar90 = ( fVar62 - (float)local_288._0_4_ ) * (float)local_278._0_4_;
         fVar92 = ( fVar64 - (float)local_288._0_4_ ) * (float)local_278._0_4_;
         lVar31 = (long)iVar40;
         auVar80._0_8_ = CONCAT44(( fVar93 - (float)local_288._4_4_ ) * (float)local_278._4_4_, ( fVar91 - (float)local_288._4_4_ ) * (float)local_278._4_4_);
         auVar80._8_4_ = ( fVar6 - (float)local_288._4_4_ ) * (float)local_278._4_4_;
         auVar80._12_4_ = ( fVar7 - (float)local_288._4_4_ ) * (float)local_278._4_4_;
         fVar96 = ( fVar8 - (float)local_288._0_4_ ) * (float)local_278._0_4_;
         fVar97 = ( fVar9 - (float)local_288._0_4_ ) * (float)local_278._0_4_;
         fVar98 = ( fVar10 - (float)local_288._0_4_ ) * (float)local_278._0_4_;
         fVar99 = ( fVar11 - (float)local_288._0_4_ ) * (float)local_278._0_4_;
         auVar78._0_8_ = CONCAT44(( fVar21 - fStack_280 ) * fStack_270, ( fVar20 - fStack_280 ) * fStack_270);
         auVar78._8_4_ = ( fVar22 - fStack_280 ) * fStack_270;
         auVar78._12_4_ = ( fVar23 - fStack_280 ) * fStack_270;
         auVar70._0_4_ = ( fVar12 - (float)local_288._4_4_ ) * (float)local_278._4_4_;
         auVar70._4_4_ = ( fVar13 - (float)local_288._4_4_ ) * (float)local_278._4_4_;
         auVar70._8_4_ = ( fVar14 - (float)local_288._4_4_ ) * (float)local_278._4_4_;
         auVar70._12_4_ = ( fVar15 - (float)local_288._4_4_ ) * (float)local_278._4_4_;
         auVar86._4_4_ = ( fVar17 - fStack_280 ) * fStack_270;
         auVar86._0_4_ = ( fVar16 - fStack_280 ) * fStack_270;
         auVar24._4_4_ = fVar88;
         auVar24._0_4_ = fVar84;
         auVar24._8_4_ = fVar90;
         auVar24._12_4_ = fVar92;
         auVar3._4_4_ = fVar97;
         auVar3._0_4_ = fVar96;
         auVar3._8_4_ = fVar98;
         auVar3._12_4_ = fVar99;
         auVar58 = minps(auVar24, auVar3);
         auVar86._8_4_ = ( fVar18 - fStack_280 ) * fStack_270;
         auVar86._12_4_ = ( fVar19 - fStack_280 ) * fStack_270;
         uVar42 = local_268 >> 0x1f;
         auVar94._8_4_ = auVar80._8_4_;
         auVar94._0_8_ = auVar80._0_8_;
         auVar94._12_4_ = auVar80._12_4_;
         auVar43 = minps(auVar94, auVar70);
         auVar66._0_4_ = ~uVar42 & auVar58._0_4_;
         auVar66._4_4_ = ~uVar42 & auVar58._4_4_;
         auVar66._8_4_ = ~uVar42 & auVar58._8_4_;
         auVar66._12_4_ = ~uVar42 & auVar58._12_4_;
         auVar50._8_4_ = auVar78._8_4_;
         auVar50._0_8_ = auVar78._0_8_;
         auVar50._12_4_ = auVar78._12_4_;
         uVar47 = iStack_264 >> 0x1f;
         auVar65._0_4_ = _LC14 & uVar42;
         auVar65._4_4_ = _LC14 & uVar42;
         auVar65._8_4_ = _LC14 & uVar42;
         auVar65._12_4_ = _LC14 & uVar42;
         auVar58 = minps(auVar50, auVar86);
         auVar67._0_4_ = ~uVar47 & auVar43._0_4_;
         auVar67._4_4_ = ~uVar47 & auVar43._4_4_;
         auVar67._8_4_ = ~uVar47 & auVar43._8_4_;
         auVar67._12_4_ = ~uVar47 & auVar43._12_4_;
         auVar95._0_4_ = _LC14 & uVar47;
         auVar95._4_4_ = _LC14 & uVar47;
         auVar95._8_4_ = _LC14 & uVar47;
         auVar95._12_4_ = _LC14 & uVar47;
         auVar43 = maxps(auVar65 | auVar66, auVar95 | auVar67);
         uVar46 = iStack_260 >> 0x1f;
         auVar73._0_4_ = _LC14 & uVar46;
         auVar73._4_4_ = _LC14 & uVar46;
         auVar73._8_4_ = _LC14 & uVar46;
         auVar73._12_4_ = _LC14 & uVar46;
         auVar87._0_4_ = ~uVar46 & auVar58._0_4_;
         auVar87._4_4_ = ~uVar46 & auVar58._4_4_;
         auVar87._8_4_ = ~uVar46 & auVar58._8_4_;
         auVar87._12_4_ = ~uVar46 & auVar58._12_4_;
         auVar25._4_4_ = fVar88;
         auVar25._0_4_ = fVar84;
         auVar25._8_4_ = fVar90;
         auVar25._12_4_ = fVar92;
         auVar43 = maxps(auVar43, auVar73 | auVar87);
         auVar4._4_4_ = fVar97;
         auVar4._0_4_ = fVar96;
         auVar4._8_4_ = fVar98;
         auVar4._12_4_ = fVar99;
         auVar58 = maxps(auVar25, auVar4);
         auVar51._0_4_ = ~uVar42 & auVar58._0_4_;
         auVar51._4_4_ = ~uVar42 & auVar58._4_4_;
         auVar51._8_4_ = ~uVar42 & auVar58._8_4_;
         auVar51._12_4_ = ~uVar42 & auVar58._12_4_;
         auVar81 = maxps(auVar80, auVar70);
         auVar58 = maxps(auVar78, auVar86);
         auVar59._0_4_ = uVar42 & _LC16;
         auVar59._4_4_ = uVar42 & _LC16;
         auVar59._8_4_ = uVar42 & _LC16;
         auVar59._12_4_ = uVar42 & _LC16;
         auVar71._0_4_ = uVar47 & _LC16;
         auVar71._4_4_ = uVar47 & _LC16;
         auVar71._8_4_ = uVar47 & _LC16;
         auVar71._12_4_ = uVar47 & _LC16;
         auVar52._0_4_ = ~uVar47 & auVar81._0_4_;
         auVar52._4_4_ = ~uVar47 & auVar81._4_4_;
         auVar52._8_4_ = ~uVar47 & auVar81._8_4_;
         auVar52._12_4_ = ~uVar47 & auVar81._12_4_;
         auVar68._0_4_ = uVar46 & _LC16;
         auVar68._4_4_ = uVar46 & _LC16;
         auVar68._8_4_ = uVar46 & _LC16;
         auVar68._12_4_ = uVar46 & _LC16;
         auVar82._0_4_ = ~uVar46 & auVar58._0_4_;
         auVar82._4_4_ = ~uVar46 & auVar58._4_4_;
         auVar82._8_4_ = ~uVar46 & auVar58._8_4_;
         auVar82._12_4_ = ~uVar46 & auVar58._12_4_;
         auVar58 = minps(auVar59 | auVar51, auVar71 | auVar52);
         auVar58 = minps(auVar58, auVar68 | auVar82);
         auVar60._4_4_ = -(uint)(auVar58._4_4_ < 0.0);
         auVar60._0_4_ = -(uint)(auVar58._0_4_ < 0.0);
         auVar60._8_4_ = -(uint)(auVar58._8_4_ < 0.0);
         auVar60._12_4_ = -(uint)(auVar58._12_4_ < 0.0);
         auVar69._4_4_ = -(uint)(auVar58._4_4_ < auVar43._4_4_);
         auVar69._0_4_ = -(uint)(auVar58._0_4_ < auVar43._0_4_);
         auVar44._4_4_ = -(uint)((float)local_288._0_4_ < fVar89);
         auVar44._0_4_ = -(uint)((float)local_288._0_4_ < fVar85);
         auVar44._8_4_ = -(uint)((float)local_288._0_4_ < fVar62);
         auVar44._12_4_ = -(uint)((float)local_288._0_4_ < fVar64);
         auVar72._4_4_ = -(uint)(fVar9 < fVar89);
         auVar72._0_4_ = -(uint)(fVar8 < fVar85);
         auVar72._8_4_ = -(uint)(fVar10 < fVar62);
         auVar72._12_4_ = -(uint)(fVar11 < fVar64);
         auVar69._8_4_ = -(uint)(auVar58._8_4_ < auVar43._8_4_);
         auVar69._12_4_ = -(uint)(auVar58._12_4_ < auVar43._12_4_);
         auVar74._4_4_ = -(uint)(fVar17 < fVar21);
         auVar74._0_4_ = -(uint)(fVar16 < fVar20);
         auVar2._4_4_ = -(uint)(fVar9 < (float)local_288._0_4_);
         auVar2._0_4_ = -(uint)(fVar8 < (float)local_288._0_4_);
         auVar2._8_4_ = -(uint)(fVar10 < (float)local_288._0_4_);
         auVar2._12_4_ = -(uint)(fVar11 < (float)local_288._0_4_);
         auVar27._4_4_ = local_268;
         auVar27._0_4_ = local_268;
         auVar27._8_4_ = local_268;
         auVar27._12_4_ = local_268;
         auVar74._8_4_ = -(uint)(fVar18 < fVar22);
         auVar74._12_4_ = -(uint)(fVar19 < fVar23);
         auVar79._4_4_ = -(uint)(fVar13 < fVar93);
         auVar79._0_4_ = -(uint)(fVar12 < fVar91);
         auVar63._4_4_ = -(uint)((float)local_288._4_4_ < fVar93);
         auVar63._0_4_ = -(uint)((float)local_288._4_4_ < fVar91);
         auVar63._8_4_ = -(uint)((float)local_288._4_4_ < fVar6);
         auVar63._12_4_ = -(uint)((float)local_288._4_4_ < fVar7);
         auVar79._8_4_ = -(uint)(fVar14 < fVar6);
         auVar79._12_4_ = -(uint)(fVar15 < fVar7);
         auVar1._4_4_ = -(uint)(fVar13 < (float)local_288._4_4_);
         auVar1._0_4_ = -(uint)(fVar12 < (float)local_288._4_4_);
         auVar1._8_4_ = -(uint)(fVar14 < (float)local_288._4_4_);
         auVar1._12_4_ = -(uint)(fVar15 < (float)local_288._4_4_);
         auVar28._4_4_ = iStack_264;
         auVar28._0_4_ = iStack_264;
         auVar28._8_4_ = iStack_264;
         auVar28._12_4_ = iStack_264;
         auVar83._4_4_ = -(uint)(fVar17 < fStack_280);
         auVar83._0_4_ = -(uint)(fVar16 < fStack_280);
         auVar83._8_4_ = -(uint)(fVar18 < fStack_280);
         auVar83._12_4_ = -(uint)(fVar19 < fStack_280);
         auVar53._4_4_ = -(uint)(fStack_280 < fVar21);
         auVar53._0_4_ = -(uint)(fStack_280 < fVar20);
         auVar53._8_4_ = -(uint)(fStack_280 < fVar22);
         auVar53._12_4_ = -(uint)(fStack_280 < fVar23);
         auVar26._4_4_ = iStack_260;
         auVar26._0_4_ = iStack_260;
         auVar26._8_4_ = iStack_260;
         auVar26._12_4_ = iStack_260;
         auVar58 = ( auVar44 | auVar2 ) & auVar27 | ( auVar63 | auVar1 ) & auVar28 | auVar69 | auVar60 | auVar72 | auVar79 | ( auVar53 | auVar83 ) & auVar26 | auVar74;
         uVar42 = auVar58._0_4_ >> 0x1f;
         uVar46 = auVar58._4_4_ >> 0x1f;
         uVar47 = auVar58._8_4_ >> 0x1f;
         uVar48 = auVar58._12_4_ >> 0x1f;
         uVar56 = ( uint ) * (undefined8*)( pfVar32 + 0x18 );
         uVar75 = ( uint )(( ulong ) * (undefined8*)( pfVar32 + 0x18 ) >> 0x20);
         uVar76 = ( uint ) * (undefined8*)( pfVar32 + 0x1a );
         uVar77 = ( uint )(( ulong ) * (undefined8*)( pfVar32 + 0x1a ) >> 0x20);
         fVar85 = (float)( _LC16 & uVar42 | ~uVar42 & (uint)auVar43._0_4_ );
         fVar89 = (float)( _LC16 & uVar46 | ~uVar46 & (uint)auVar43._4_4_ );
         fVar91 = (float)( _LC16 & uVar47 | ~uVar47 & (uint)auVar43._8_4_ );
         fVar93 = (float)( _LC16 & uVar48 | ~uVar48 & (uint)auVar43._12_4_ );
         uVar42 = (int)-(uint)(fVar85 < fVar91) >> 0x1f;
         uVar46 = (int)-(uint)(fVar89 < fVar93) >> 0x1f;
         fVar62 = (float)( (uint)fVar91 & uVar42 | ~uVar42 & (uint)fVar85 );
         fVar64 = (float)( (uint)fVar93 & uVar46 | ~uVar46 & (uint)fVar89 );
         fVar91 = (float)( (uint)fVar85 & uVar42 | ~uVar42 & (uint)fVar91 );
         fVar93 = (float)( (uint)fVar89 & uVar46 | ~uVar46 & (uint)fVar93 );
         uVar49 = ~uVar42 & uVar56 | uVar42 & uVar76;
         uVar55 = ~uVar46 & uVar75 | uVar46 & uVar77;
         uVar76 = ~uVar42 & uVar76 | uVar42 & uVar56;
         uVar75 = ~uVar46 & uVar77 | uVar46 & uVar75;
         uVar42 = (int)-(uint)(fVar62 < fVar64) >> 0x1f;
         uVar47 = (int)-(uint)(fVar91 < fVar93) >> 0x1f;
         fVar85 = (float)( (uint)fVar62 & uVar42 | ~uVar42 & (uint)fVar64 );
         fVar89 = (float)( (uint)fVar93 & uVar47 | ~uVar47 & (uint)fVar91 );
         uVar46 = uVar42 & uVar49 | ~uVar42 & uVar55;
         uVar48 = uVar47 & uVar75 | ~uVar47 & uVar76;
         uVar56 = (int)-(uint)(fVar85 < fVar89) >> 0x1f;
         auVar61._4_4_ = ~uVar56 & (uint)fVar85;
         auVar61._0_4_ = (uint)fVar64 & uVar42 | ~uVar42 & (uint)fVar62;
         auVar61._8_4_ = ~uVar56 & (uint)fVar89;
         auVar61._12_4_ = (uint)fVar91 & uVar47 | ~uVar47 & (uint)fVar93;
         auVar5._4_4_ = (uint)fVar85 & uVar56;
         auVar5._0_4_ = (uint)fVar89 & uVar56;
         auVar5._8_8_ = 0;
         auVar61 = auVar5 << 0x20 | auVar61;
         local_4b8 = CONCAT44(uVar56 & uVar48 | ~uVar56 & uVar46, uVar42 & uVar55 | ~uVar42 & uVar49);
         uStack_4b0 = CONCAT44(uVar47 & uVar76 | ~uVar47 & uVar75, uVar56 & uVar46 | ~uVar56 & uVar48);
         fVar85 = *(float*)( local_258 + 8 );
         auVar45._4_4_ = -(uint)(auVar61._4_4_ < fVar85);
         auVar45._0_4_ = -(uint)(auVar61._0_4_ < fVar85);
         auVar45._8_4_ = -(uint)(auVar61._8_4_ < fVar85);
         auVar45._12_4_ = -(uint)(auVar61._12_4_ < fVar85);
         uVar46 = movmskps((int)pOVar37, auVar45);
         pOVar37 = (ObjectLayerFilter*)(ulong)uVar46;
         uVar42 = __popcountdi2();
         local_498 = auVar61;
         if (uVar46 == 0) {
            local_498 = (undefined1[16])0x0;
            aOVar54 = (ObjectLayerFilter[16])0x0;
         }
 else {
            for (int i = 0; i < 16; i++) {
               local_4a8[i] = (ObjectLayerFilter)0;
            }

            pOVar38 = (ObjectLayerFilter*)local_498;
            uVar33 = (ulong)uVar42 << 2;
            pOVar37 = local_4a8;
            lVar39 = ( 4 - (long)(int)uVar42 ) * 4;
            pOVar35 = pOVar38 + lVar39;
            if (7 < (uint)uVar33) {
               for (uVar34 = uVar33 >> 3 & 0x1fffffff; uVar34 != 0; uVar34 = uVar34 - 1) {
                  *(long*)pOVar37 = *(long*)pOVar35;
                  pOVar35 = pOVar35 + (ulong)bVar41 * -0x10 + 8;
                  pOVar37 = pOVar37 + (ulong)bVar41 * -0x10 + 8;
               }

            }

            if (( uVar33 & 4 ) != 0) {
               *(undefined4*)pOVar37 = *(undefined4*)pOVar35;
            }

            plVar36 = (long*)( (long)&local_4b8 + lVar39 );
            local_498 = (undefined1[16])0x0;
            if (7 < (uint)uVar33) {
               for (uVar34 = uVar33 >> 3 & 0x1fffffff; pOVar37 = pOVar38,uVar34 != 0; uVar34 = uVar34 - 1) {
                  *(long*)pOVar38 = *plVar36;
                  plVar36 = plVar36 + (ulong)bVar41 * -2 + 1;
                  pOVar38 = pOVar38 + (ulong)bVar41 * -0x10 + 8;
               }

            }

            aOVar54 = local_4a8;
            if (( uVar33 & 4 ) != 0) {
               *(int*)pOVar38 = (int)*plVar36;
            }

         }

         uVar29 = local_498._8_8_;
         *(ObjectLayerFilter(*) [16])( local_250 + lVar31 ) = aOVar54;
         iVar40 = iVar40 + uVar42;
         local_4b8 = local_498._0_8_;
         uStack_4b0 = local_498._8_8_;
         *(undefined8*)( local_488 + lVar31 ) = local_498._0_8_;
         *(undefined8*)( (long)auStack_480 + lVar31 * 4 ) = uVar29;
         pOVar35 = local_258;
      }

      while (true) {
         lVar31 = (long)( iVar40 + -1 );
         do {
            iVar40 = (int)lVar31;
            if (iVar40 == -1) goto LAB_00100f63;
            pfVar32 = local_250 + lVar31;
            lVar31 = lVar31 + -1;
         }
 while ( *(float*)( pOVar35 + 8 ) < *pfVar32 || *(float*)( pOVar35 + 8 ) == *pfVar32 );
         uVar42 = local_488[iVar40];
         if (( uVar42 & 0x800000 ) != 0) break;
         pOVar35 = local_258;
         if (( *(short*)( *(long*)( param_4 + 0x10 ) + 2 + ( ulong )(uVar42 & 0x7fffff) * 8 ) != -1 ) && ( pOVar37 = param_3 ),cVar30 = ( **(code**)( *(long*)param_3 + 0x10 ) )(),pOVar35 = local_258,cVar30 != '\0') {
            local_4bc = local_250[iVar40];
            pOVar37 = local_258;
            local_4c0 = uVar42;
            ( **(code**)( *(long*)local_258 + 0x28 ) )(local_258, &local_4c0);
            if (*(float*)( pOVar35 + 8 ) <= 0.0) {
               LAB_00100f63:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return;
            }

         }

      }
;
   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::QuadTree::CollideAABox(JPH::AABox const&, JPH::CollisionCollector<JPH::BodyID,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::ObjectLayerFilter const&,
   JPH::Array<JPH::QuadTree::Tracking, JPH::STLAllocator<JPH::QuadTree::Tracking> > const&) const */void JPH::QuadTree::CollideAABox(QuadTree *this, AABox *param_1, CollisionCollector *param_2, ObjectLayerFilter *param_3, Array *param_4) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   char cVar11;
   uint uVar12;
   int iVar13;
   float *pfVar14;
   long lVar15;
   uint uVar16;
   undefined4 uVar17;
   int iVar18;
   long in_FS_OFFSET;
   bool bVar19;
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   uint uVar25;
   undefined1 auVar26[16];
   undefined8 local_278;
   undefined8 uStack_270;
   uint local_24c;
   uint local_248[2];
   undefined8 auStack_240[64];
   long local_40;
   iVar18 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar12 = *(uint*)( this + ( ( ulong ) * (uint*)( this + 0x4c ) + 0x11 ) * 4 ) | 0x800000;
   local_248[0] = uVar12;
   do {
      if (( uVar12 & 0x800000 ) == 0) {
         local_24c = uVar12;
         if (( ( *(short*)( *(long*)( param_4 + 0x10 ) + 2 + ( ulong )(uVar12 & 0x7fffff) * 8 ) != -1 ) && ( cVar11 = ( **(code**)( *(long*)param_3 + 0x10 ) )(param_3) ),cVar11 != '\0' )) {
            LAB_001015b0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return;
         }

      }
 else if (( iVar18 < 0x7c ) && ( uVar12 != 0xffffffff )) {
         lVar15 = *(long*)this;
         fVar5 = *(float*)param_1;
         fVar6 = *(float*)( param_1 + 4 );
         fVar7 = *(float*)( param_1 + 8 );
         fVar8 = *(float*)( param_1 + 0x10 );
         fVar9 = *(float*)( param_1 + 0x14 );
         fVar10 = *(float*)( param_1 + 0x18 );
         uVar16 = ( uVar12 & 0xff7fffff ) >> ( ( byte ) * (undefined4*)( lVar15 + 4 ) & 0x1f );
         pfVar14 = (float*)( ( ulong )(uVar12 & 0xff7fffff & *(uint*)( lVar15 + 8 )) * 0x80 + *(long*)( *(long*)( lVar15 + 0x18 ) + (ulong)uVar16 * 8 ) );
         auVar20._4_4_ = -(uint)(fVar10 < pfVar14[9]);
         auVar20._0_4_ = -(uint)(fVar10 < pfVar14[8]);
         auVar20._8_4_ = -(uint)(fVar10 < pfVar14[10]);
         auVar20._12_4_ = -(uint)(fVar10 < pfVar14[0xb]);
         fVar10 = pfVar14[0x1b];
         auVar23._4_4_ = -(uint)(pfVar14[0xd] < fVar5);
         auVar23._0_4_ = -(uint)(pfVar14[0xc] < fVar5);
         auVar23._8_4_ = -(uint)(pfVar14[0xe] < fVar5);
         auVar23._12_4_ = -(uint)(pfVar14[0xf] < fVar5);
         auVar26._4_4_ = -(uint)(pfVar14[0x11] < fVar6);
         auVar26._0_4_ = -(uint)(pfVar14[0x10] < fVar6);
         auVar26._8_4_ = -(uint)(pfVar14[0x12] < fVar6);
         auVar26._12_4_ = -(uint)(pfVar14[0x13] < fVar6);
         auVar3._4_4_ = -(uint)(fVar8 < pfVar14[1]);
         auVar3._0_4_ = -(uint)(fVar8 < *pfVar14);
         auVar3._8_4_ = -(uint)(fVar8 < pfVar14[2]);
         auVar3._12_4_ = -(uint)(fVar8 < pfVar14[3]);
         auVar4._4_4_ = -(uint)(fVar9 < pfVar14[5]);
         auVar4._0_4_ = -(uint)(fVar9 < pfVar14[4]);
         auVar4._8_4_ = -(uint)(fVar9 < pfVar14[6]);
         auVar4._12_4_ = -(uint)(fVar9 < pfVar14[7]);
         auVar24._4_4_ = -(uint)(pfVar14[0x15] < fVar7);
         auVar24._0_4_ = -(uint)(pfVar14[0x14] < fVar7);
         auVar24._8_4_ = -(uint)(pfVar14[0x16] < fVar7);
         auVar24._12_4_ = -(uint)(pfVar14[0x17] < fVar7);
         auVar24 = ( auVar23 | auVar3 | auVar26 | auVar4 | auVar20 | auVar24 ) ^ __LC23;
         uVar17 = movmskps(uVar16, auVar24);
         uVar12 = auVar24._8_4_ >> 0x1f;
         uVar12 = uVar12 & (uint)pfVar14[0x1a] | ~uVar12 & (uint)fVar10;
         uVar16 = auVar24._4_4_ >> 0x1f;
         auVar21._0_4_ = (uint)pfVar14[0x18] & uVar16;
         auVar21._4_4_ = (uint)pfVar14[0x19] & uVar16;
         auVar21._8_4_ = uVar12 & uVar16;
         auVar21._12_4_ = (uint)fVar10 & uVar16;
         uVar25 = auVar24._0_4_ >> 0x1f;
         auVar1._4_4_ = ~uVar16 & uVar12;
         auVar1._0_4_ = ~uVar16 & (uint)pfVar14[0x18];
         auVar1._8_4_ = ~uVar16 & (uint)fVar10;
         auVar1._12_4_ = ~uVar16 & (uint)fVar10;
         auVar21 = auVar21 | auVar1;
         uVar12 = auVar21._12_4_;
         auVar22._0_4_ = auVar21._0_4_ & uVar25;
         auVar22._4_4_ = auVar21._4_4_ & uVar25;
         auVar22._8_4_ = auVar21._8_4_ & uVar25;
         auVar22._12_4_ = uVar12 & uVar25;
         auVar2._4_4_ = ~uVar25 & auVar21._8_4_;
         auVar2._0_4_ = ~uVar25 & auVar21._4_4_;
         auVar2._8_4_ = ~uVar25 & uVar12;
         auVar2._12_4_ = ~uVar25 & uVar12;
         iVar13 = __popcountdi2(uVar17);
         local_278 = SUB168(auVar22 | auVar2, 0);
         uStack_270 = SUB168(auVar22 | auVar2, 8);
         lVar15 = (long)iVar18;
         iVar18 = iVar18 + iVar13;
         *(undefined8*)( local_248 + lVar15 ) = local_278;
         *(undefined8*)( (long)auStack_240 + lVar15 * 4 ) = uStack_270;
      }

      bVar19 = iVar18 == 0;
      iVar18 = iVar18 + -1;
      if (bVar19) goto LAB_001015b0;
      uVar12 = local_248[iVar18];
   }
 while ( true );
}
/* JPH::QuadTree::CollideSphere(JPH::Vec3, float, JPH::CollisionCollector<JPH::BodyID,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::ObjectLayerFilter const&,
   JPH::Array<JPH::QuadTree::Tracking, JPH::STLAllocator<JPH::QuadTree::Tracking> > const&) const */void JPH::QuadTree::CollideSphere(undefined8 param_1, float param_2, float param_3, long *param_4, long *param_5, long *param_6, long param_7) {
   undefined1 auVar1[16];
   float fVar2;
   float fVar3;
   char cVar4;
   uint uVar5;
   undefined1(*pauVar6)[16];
   long lVar7;
   uint uVar8;
   int iVar10;
   long in_FS_OFFSET;
   bool bVar11;
   int iVar12;
   int iVar13;
   int iVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   uint uVar18;
   float fVar19;
   float fVar20;
   float fVar24;
   float fVar25;
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   float fVar26;
   undefined1 auVar23[16];
   float fVar27;
   uint uVar28;
   uint uVar29;
   float fVar31;
   float fVar32;
   undefined1 auVar30[16];
   float fVar33;
   undefined1 auVar34[16];
   undefined8 local_298;
   undefined8 uStack_290;
   uint local_23c;
   uint local_238[2];
   undefined8 auStack_230[64];
   long local_30;
   long *plVar9;
   param_3 = param_3 * param_3;
   iVar10 = 0;
   local_298._0_4_ = (float)param_1;
   fVar2 = (float)local_298;
   local_298._4_4_ = (float)( (ulong)param_1 >> 0x20 );
   fVar3 = local_298._4_4_;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = *(uint*)( (long)param_4 + ( ( ulong ) * (uint*)( (long)param_4 + 0x4c ) + 0x11 ) * 4 ) | 0x800000;
   local_238[0] = uVar5;
   plVar9 = param_4;
   do {
      if (( uVar5 & 0x800000 ) == 0) {
         local_23c = uVar5;
         if (( ( *(short*)( *(long*)( param_7 + 0x10 ) + 2 + ( ulong )(uVar5 & 0x7fffff) * 8 ) != -1 ) && ( plVar9 = param_6 ),cVar4 = ( **(code**)( *param_6 + 0x10 ) )(),cVar4 != '\0' )) {
            LAB_001017f0:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return;
         }

      }
 else if (( iVar10 < 0x7c ) && ( uVar5 != 0xffffffff )) {
         lVar7 = *param_4;
         auVar21._4_4_ = fVar2;
         auVar21._0_4_ = fVar2;
         auVar21._8_4_ = fVar2;
         auVar21._12_4_ = fVar2;
         auVar22._4_4_ = fVar3;
         auVar22._0_4_ = fVar3;
         auVar22._8_4_ = fVar3;
         auVar22._12_4_ = fVar3;
         auVar1._4_4_ = param_2;
         auVar1._0_4_ = param_2;
         auVar1._8_4_ = param_2;
         auVar1._12_4_ = param_2;
         pauVar6 = (undefined1(*) [16])( ( ulong )(uVar5 & 0xff7fffff & *(uint*)( lVar7 + 8 )) * 0x80 + *(long*)( *(long*)( lVar7 + 0x18 ) + ( ulong )(( uVar5 & 0xff7fffff ) >> ( ( byte ) * (undefined4*)( lVar7 + 4 ) & 0x1f )) * 8 ) );
         auVar30 = maxps(auVar21, *pauVar6);
         auVar21 = maxps(auVar22, pauVar6[1]);
         auVar30 = minps(auVar30, pauVar6[3]);
         auVar22 = minps(auVar21, pauVar6[4]);
         auVar21 = maxps(auVar1, pauVar6[2]);
         auVar21 = minps(auVar21, pauVar6[5]);
         uVar5 = *(uint*)( pauVar6[6] + 0xc );
         fVar20 = auVar22._0_4_ - fVar3;
         fVar24 = auVar22._4_4_ - fVar3;
         fVar25 = auVar22._8_4_ - fVar3;
         fVar26 = auVar22._12_4_ - fVar3;
         fVar27 = auVar30._0_4_ - fVar2;
         fVar31 = auVar30._4_4_ - fVar2;
         fVar32 = auVar30._8_4_ - fVar2;
         fVar33 = auVar30._12_4_ - fVar2;
         fVar15 = auVar21._0_4_ - param_2;
         fVar16 = auVar21._4_4_ - param_2;
         fVar17 = auVar21._8_4_ - param_2;
         fVar19 = auVar21._12_4_ - param_2;
         iVar12 = -(uint)(fVar20 * fVar20 + fVar27 * fVar27 + fVar15 * fVar15 <= param_3);
         iVar13 = -(uint)(fVar24 * fVar24 + fVar31 * fVar31 + fVar16 * fVar16 <= param_3);
         iVar14 = -(uint)(fVar25 * fVar25 + fVar32 * fVar32 + fVar17 * fVar17 <= param_3);
         auVar23._4_4_ = iVar13;
         auVar23._0_4_ = iVar12;
         auVar23._8_4_ = iVar14;
         auVar23._12_4_ = -(uint)(fVar26 * fVar26 + fVar33 * fVar33 + fVar19 * fVar19 <= param_3);
         uVar8 = movmskps((int)plVar9, auVar23);
         plVar9 = (long*)(ulong)uVar8;
         uVar8 = iVar14 >> 0x1f;
         uVar18 = uVar8 & *(uint*)( pauVar6[6] + 8 ) | ~uVar8 & uVar5;
         uVar28 = iVar13 >> 0x1f;
         uVar29 = iVar12 >> 0x1f;
         uVar8 = *(uint*)( pauVar6[6] + 4 ) & uVar28 | ~uVar28 & uVar18;
         uVar18 = uVar18 & uVar28 | ~uVar28 & uVar5;
         auVar30._0_4_ = *(uint*)pauVar6[6] & uVar29;
         auVar30._4_4_ = uVar8 & uVar29;
         auVar30._8_4_ = uVar18 & uVar29;
         auVar30._12_4_ = uVar5 & uVar29;
         auVar34._0_4_ = ~uVar29 & uVar8;
         auVar34._4_4_ = ~uVar29 & uVar18;
         auVar34._8_4_ = ~uVar29 & uVar5;
         auVar34._12_4_ = ~uVar29 & uVar5;
         iVar12 = __popcountdi2(plVar9);
         local_298 = SUB168(auVar30 | auVar34, 0);
         uStack_290 = SUB168(auVar30 | auVar34, 8);
         lVar7 = (long)iVar10;
         iVar10 = iVar10 + iVar12;
         *(undefined8*)( local_238 + lVar7 ) = local_298;
         *(undefined8*)( (long)auStack_230 + lVar7 * 4 ) = uStack_290;
      }

      bVar11 = iVar10 == 0;
      iVar10 = iVar10 + -1;
      if (bVar11) goto LAB_001017f0;
      uVar5 = local_238[iVar10];
   }
 while ( true );
}
/* JPH::QuadTree::CollidePoint(JPH::Vec3, JPH::CollisionCollector<JPH::BodyID,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::ObjectLayerFilter const&,
   JPH::Array<JPH::QuadTree::Tracking, JPH::STLAllocator<JPH::QuadTree::Tracking> > const&) const */void JPH::QuadTree::CollidePoint(undefined8 param_1, float param_2, long *param_3, long *param_4, long *param_5, long param_6) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   float fVar3;
   char cVar4;
   uint uVar5;
   int iVar6;
   float *pfVar7;
   long lVar8;
   long *plVar9;
   int iVar10;
   long in_FS_OFFSET;
   bool bVar11;
   uint uVar13;
   undefined1 auVar12[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   uint uVar16;
   uint uVar17;
   undefined8 local_268;
   undefined8 uStack_260;
   float local_258;
   float fStack_254;
   uint local_23c;
   uint local_238[2];
   undefined8 auStack_230[64];
   long local_30;
   iVar10 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = *(uint*)( (long)param_3 + ( ( ulong ) * (uint*)( (long)param_3 + 0x4c ) + 0x11 ) * 4 ) | 0x800000;
   local_238[0] = uVar5;
   plVar9 = param_3;
   do {
      if (( uVar5 & 0x800000 ) == 0) {
         local_23c = uVar5;
         if (( ( *(short*)( *(long*)( param_6 + 0x10 ) + 2 + ( ulong )(uVar5 & 0x7fffff) * 8 ) != -1 ) && ( plVar9 = param_5 ),cVar4 = ( **(code**)( *param_5 + 0x10 ) )(),cVar4 != '\0' )) {
            LAB_001019e0:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return;
         }

      }
 else if (( iVar10 < 0x7c ) && ( uVar5 != 0xffffffff )) {
         lVar8 = *param_3;
         local_258 = (float)param_1;
         fStack_254 = (float)( (ulong)param_1 >> 0x20 );
         pfVar7 = (float*)( ( ulong )(uVar5 & 0xff7fffff & *(uint*)( lVar8 + 8 )) * 0x80 + *(long*)( *(long*)( lVar8 + 0x18 ) + ( ulong )(( uVar5 & 0xff7fffff ) >> ( ( byte ) * (undefined4*)( lVar8 + 4 ) & 0x1f )) * 8 ) );
         fVar3 = pfVar7[0x1b];
         auVar14._0_4_ = -(uint)(*pfVar7 <= local_258 && local_258 <= pfVar7[0xc]);
         auVar14._4_4_ = -(uint)(local_258 <= pfVar7[0xd] && pfVar7[1] <= local_258);
         auVar14._8_4_ = -(uint)(local_258 <= pfVar7[0xe] && pfVar7[2] <= local_258);
         auVar14._12_4_ = -(uint)(local_258 <= pfVar7[0xf] && pfVar7[3] <= local_258);
         auVar15._0_4_ = -(uint)(pfVar7[8] <= param_2 && param_2 <= pfVar7[0x14]);
         auVar15._4_4_ = -(uint)(param_2 <= pfVar7[0x15] && pfVar7[9] <= param_2);
         auVar15._8_4_ = -(uint)(param_2 <= pfVar7[0x16] && pfVar7[10] <= param_2);
         auVar15._12_4_ = -(uint)(param_2 <= pfVar7[0x17] && pfVar7[0xb] <= param_2);
         auVar1._4_4_ = -(uint)(pfVar7[5] <= fStack_254 && fStack_254 <= pfVar7[0x11]);
         auVar1._0_4_ = -(uint)(pfVar7[4] <= fStack_254 && fStack_254 <= pfVar7[0x10]);
         auVar1._8_4_ = -(uint)(pfVar7[6] <= fStack_254 && fStack_254 <= pfVar7[0x12]);
         auVar1._12_4_ = -(uint)(pfVar7[7] <= fStack_254 && fStack_254 <= pfVar7[0x13]);
         auVar15 = auVar14 & auVar1 & auVar15;
         uVar5 = movmskps((int)plVar9, auVar15);
         plVar9 = (long*)(ulong)uVar5;
         uVar5 = auVar15._8_4_ >> 0x1f;
         uVar13 = uVar5 & (uint)pfVar7[0x1a] | ~uVar5 & (uint)fVar3;
         uVar16 = auVar15._4_4_ >> 0x1f;
         uVar17 = auVar15._0_4_ >> 0x1f;
         uVar5 = (uint)pfVar7[0x19] & uVar16 | ~uVar16 & uVar13;
         uVar13 = uVar13 & uVar16 | ~uVar16 & (uint)fVar3;
         auVar12._0_4_ = (uint)pfVar7[0x18] & uVar17;
         auVar12._4_4_ = uVar5 & uVar17;
         auVar12._8_4_ = uVar13 & uVar17;
         auVar12._12_4_ = (uint)fVar3 & uVar17;
         auVar2._4_4_ = ~uVar17 & uVar13;
         auVar2._0_4_ = ~uVar17 & uVar5;
         auVar2._8_4_ = ~uVar17 & (uint)fVar3;
         auVar2._12_4_ = ~uVar17 & (uint)fVar3;
         iVar6 = __popcountdi2(plVar9);
         local_268 = SUB168(auVar12 | auVar2, 0);
         uStack_260 = SUB168(auVar12 | auVar2, 8);
         lVar8 = (long)iVar10;
         iVar10 = iVar10 + iVar6;
         *(undefined8*)( local_238 + lVar8 ) = local_268;
         *(undefined8*)( (long)auStack_230 + lVar8 * 4 ) = uStack_260;
      }

      bVar11 = iVar10 == 0;
      iVar10 = iVar10 + -1;
      if (bVar11) goto LAB_001019e0;
      uVar5 = local_238[iVar10];
   }
 while ( true );
}
/* JPH::QuadTree::CollideOrientedBox(JPH::OrientedBox const&, JPH::CollisionCollector<JPH::BodyID,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::ObjectLayerFilter const&,
   JPH::Array<JPH::QuadTree::Tracking, JPH::STLAllocator<JPH::QuadTree::Tracking> > const&) const */void JPH::QuadTree::CollideOrientedBox(QuadTree *this, OrientedBox *param_1, CollisionCollector *param_2, ObjectLayerFilter *param_3, Array *param_4) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   short sVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   long lVar8;
   long lVar9;
   long lVar10;
   char cVar11;
   uint uVar12;
   int iVar13;
   float *pfVar14;
   float *pfVar15;
   float *pfVar16;
   float *pfVar17;
   long lVar18;
   float *pfVar19;
   long lVar20;
   int iVar21;
   undefined4 uVar22;
   long in_FS_OFFSET;
   bool bVar23;
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   uint uVar27;
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   undefined1 auVar35[16];
   uint uVar36;
   uint uVar37;
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
   undefined8 local_488;
   undefined8 uStack_480;
   uint local_33c;
   undefined8 local_338;
   undefined8 uStack_330;
   float local_328[42];
   float fStack_280;
   float fStack_27c;
   float local_278;
   float fStack_274;
   float fStack_270;
   float fStack_26c;
   undefined1 local_268[8];
   float fStack_260;
   undefined8 local_258;
   undefined8 uStack_250;
   uint local_238[2];
   undefined8 auStack_230[64];
   long local_30;
   iVar21 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_328[0x24] = (float)*(undefined8*)param_1;
   local_328[0x25] = (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 );
   local_328[0x26] = (float)*(undefined8*)( param_1 + 8 );
   local_328[0x27] = (float)( ( ulong ) * (undefined8*)( param_1 + 8 ) >> 0x20 );
   local_278 = (float)*(undefined8*)( param_1 + 0x20 );
   fStack_274 = (float)( ( ulong ) * (undefined8*)( param_1 + 0x20 ) >> 0x20 );
   fStack_270 = (float)*(undefined8*)( param_1 + 0x28 );
   fStack_26c = (float)( ( ulong ) * (undefined8*)( param_1 + 0x28 ) >> 0x20 );
   local_328[0x28] = (float)*(undefined8*)( param_1 + 0x10 );
   local_328[0x29] = (float)( ( ulong ) * (undefined8*)( param_1 + 0x10 ) >> 0x20 );
   fStack_280 = (float)*(undefined8*)( param_1 + 0x18 );
   fStack_27c = (float)( ( ulong ) * (undefined8*)( param_1 + 0x18 ) >> 0x20 );
   local_258 = *(undefined8*)( param_1 + 0x40 );
   uStack_250 = *(undefined8*)( param_1 + 0x48 );
   _local_268 = *(undefined1(*) [16])( param_1 + 0x30 );
   uVar12 = *(uint*)( this + ( ( ulong ) * (uint*)( this + 0x4c ) + 0x11 ) * 4 ) | 0x800000;
   local_238[0] = uVar12;
   do {
      if (( uVar12 & 0x800000 ) == 0) {
         sVar5 = *(short*)( *(long*)( param_4 + 0x10 ) + 2 + ( ulong )(uVar12 & 0x7fffff) * 8 );
         local_33c = uVar12;
         if (( ( sVar5 != -1 ) && ( cVar11 = ( **(code**)( *(long*)param_3 + 0x10 ) )(param_3, sVar5) ),cVar11 != '\0' )) {
            LAB_00101c18:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return;
         }

      }
 else if (( iVar21 < 0x7c ) && ( uVar12 != 0xffffffff )) {
         lVar20 = *(long*)this;
         lVar18 = 0;
         pfVar14 = (float*)( ( ulong )(uVar12 & 0xff7fffff & *(uint*)( lVar20 + 8 )) * 0x80 + *(long*)( *(long*)( lVar20 + 0x18 ) + ( ulong )(( uVar12 & 0xff7fffff ) >> ( ( byte ) * (undefined4*)( lVar20 + 4 ) & 0x1f )) * 8 ) );
         local_338 = local_258;
         uStack_330 = uStack_250;
         for (int i = 0; i < 4; i++) {
            local_328[( i + 28 )] = ( pfVar14[( i + 16 )] - pfVar14[( i + 4 )] ) * _LC4;
         }

         local_328[0x18] = ( pfVar14[0xc] - *pfVar14 ) * _LC4;
         for (int i = 0; i < 3; i++) {
            local_328[( i + 25 )] = ( pfVar14[( i + 13 )] - pfVar14[( i + 1 )] ) * _LC4;
         }

         local_328[0] = (float)local_268._0_4_ - ( *pfVar14 + pfVar14[0xc] ) * _LC4;
         for (int i = 0; i < 3; i++) {
            local_328[( i + 1 )] = (float)local_268._0_4_ - ( pfVar14[( i + 1 )] + pfVar14[( i + 13 )] ) * _LC4;
         }

         for (int i = 0; i < 4; i++) {
            local_328[( i + 4 )] = (float)local_268._4_4_ - ( pfVar14[( i + 4 )] + pfVar14[( i + 16 )] ) * _LC4;
         }

         for (int i = 0; i < 4; i++) {
            local_328[( i + 32 )] = ( pfVar14[( i + 20 )] - pfVar14[( i + 8 )] ) * _LC4;
         }

         for (int i = 0; i < 4; i++) {
            local_328[( i + 8 )] = fStack_260 - ( pfVar14[( i + 8 )] + pfVar14[( i + 20 )] ) * _LC4;
         }

         auVar43._0_4_ = 0.0 - local_328[0x24];
         auVar43._4_4_ = 0.0 - local_328[0x25];
         auVar43._8_4_ = 0.0 - local_328[0x26];
         auVar43._12_4_ = 0.0 - local_328[0x27];
         auVar57._0_4_ = 0.0 - local_328[0x28];
         auVar57._4_4_ = 0.0 - local_328[0x29];
         auVar57._8_4_ = 0.0 - fStack_280;
         auVar57._12_4_ = 0.0 - fStack_27c;
         auVar39._4_4_ = local_328[0x25];
         auVar39._0_4_ = local_328[0x24];
         auVar39._8_4_ = local_328[0x26];
         auVar39._12_4_ = local_328[0x27];
         auVar43 = maxps(auVar43, auVar39);
         auVar49._4_4_ = local_328[0x29];
         auVar49._0_4_ = local_328[0x28];
         auVar49._8_4_ = fStack_280;
         auVar49._12_4_ = fStack_27c;
         auVar49 = maxps(auVar57, auVar49);
         auVar46._0_4_ = 0.0 - local_278;
         auVar46._4_4_ = 0.0 - fStack_274;
         auVar46._8_4_ = 0.0 - fStack_270;
         auVar46._12_4_ = 0.0 - fStack_26c;
         auVar34._4_4_ = fStack_274;
         auVar34._0_4_ = local_278;
         auVar34._8_4_ = fStack_270;
         auVar34._12_4_ = fStack_26c;
         auVar39 = maxps(auVar46, auVar34);
         local_328[0xc] = auVar43._0_4_ + _LC21;
         local_328[0xd] = auVar43._4_4_ + _LC21;
         local_328[0xe] = auVar43._8_4_ + _LC21;
         local_328[0x10] = auVar49._0_4_ + _LC21;
         local_328[0x11] = auVar49._4_4_ + _LC21;
         local_328[0x12] = auVar49._8_4_ + _LC21;
         local_328[0x14] = auVar39._0_4_ + _LC21;
         local_328[0x15] = auVar39._4_4_ + _LC21;
         local_328[0x16] = auVar39._8_4_ + _LC21;
         local_328[0xf] = auVar43._12_4_ + _LC21;
         local_328[0x13] = auVar49._12_4_ + _LC21;
         local_328[0x17] = auVar39._12_4_ + _LC21;
         uVar37 = 0xffffffff;
         uVar12 = 0xffffffff;
         uVar27 = 0xffffffff;
         uVar36 = 0xffffffff;
         pfVar15 = local_328 + 0xc;
         do {
            fVar1 = pfVar15[4];
            fVar2 = *pfVar15;
            auVar59._0_4_ = 0.0 - *(float*)( (long)local_328 + lVar18 );
            auVar59._4_4_ = 0.0 - *(float*)( (long)local_328 + lVar18 + 4 );
            auVar59._8_4_ = 0.0 - *(float*)( (long)local_328 + lVar18 + 8 );
            auVar59._12_4_ = 0.0 - *(float*)( (long)local_328 + lVar18 + 0xc );
            auVar39 = maxps(auVar59, *(undefined1(*) [16])( (long)local_328 + lVar18 ));
            fVar3 = pfVar15[8];
            lVar20 = lVar18 + 0x60;
            lVar8 = lVar18 + 100;
            lVar9 = lVar18 + 0x68;
            lVar10 = lVar18 + 0x6c;
            lVar18 = lVar18 + 0x10;
            uVar12 = uVar12 & -(uint)(auVar39._0_4_ <=
                                 fVar1 * local_258._4_4_ + fVar2 * (float)local_258 +
                                 fVar3 * (float)uStack_250 + *(float *)((long)local_328 + lVar20));
            uVar27 = uVar27 & -(uint)(auVar39._4_4_ <=
                                 fVar1 * local_258._4_4_ + fVar2 * (float)local_258 +
                                 fVar3 * (float)uStack_250 + *(float *)((long)local_328 + lVar8));
            uVar36 = uVar36 & -(uint)(auVar39._8_4_ <=
                                 fVar1 * local_258._4_4_ + fVar2 * (float)local_258 +
                                 fVar3 * (float)uStack_250 + *(float *)((long)local_328 + lVar9));
            uVar37 = uVar37 & -(uint)(auVar39._12_4_ <=
                                 fVar1 * local_258._4_4_ + fVar2 * (float)local_258 +
                                 fVar3 * (float)uStack_250 + *(float *)((long)local_328 + lVar10));
            pfVar15 = pfVar15 + 1;
         }
 while ( lVar18 != 0x30 );
         pfVar15 = local_328 + 0xc;
         pfVar17 = (float*)&local_338;
         pfVar19 = local_328 + 0x24;
         do {
            fVar1 = pfVar19[1];
            pfVar16 = pfVar15 + 4;
            fVar2 = *pfVar19;
            fVar3 = *pfVar15;
            fVar4 = pfVar19[2];
            auVar52._0_4_ = fVar1 * local_328[4] + fVar2 * local_328[0] + fVar4 * local_328[8];
            auVar52._4_4_ = fVar1 * local_328[5] + fVar2 * local_328[1] + fVar4 * local_328[9];
            auVar52._8_4_ = fVar1 * local_328[6] + fVar2 * local_328[2] + fVar4 * local_328[10];
            auVar52._12_4_ = fVar1 * local_328[7] + fVar2 * local_328[3] + fVar4 * local_328[0xb];
            auVar55._0_4_ = 0.0 - auVar52._0_4_;
            auVar55._4_4_ = 0.0 - auVar52._4_4_;
            auVar55._8_4_ = 0.0 - auVar52._8_4_;
            auVar55._12_4_ = 0.0 - auVar52._12_4_;
            auVar39 = maxps(auVar55, auVar52);
            fVar1 = pfVar15[1];
            fVar2 = pfVar15[2];
            fVar4 = *pfVar17;
            uVar12 = uVar12 & -(uint)(auVar39._0_4_ <=
                                 fVar1 * local_328[0x1c] + fVar3 * local_328[0x18] +
                                 fVar2 * local_328[0x20] + fVar4);
            uVar27 = uVar27 & -(uint)(auVar39._4_4_ <=
                                 fVar1 * local_328[0x1d] + fVar3 * local_328[0x19] +
                                 fVar2 * local_328[0x21] + fVar4);
            uVar36 = uVar36 & -(uint)(auVar39._8_4_ <=
                                 fVar1 * local_328[0x1e] + fVar3 * local_328[0x1a] +
                                 fVar2 * local_328[0x22] + fVar4);
            uVar37 = uVar37 & -(uint)(auVar39._12_4_ <=
                                 fVar1 * local_328[0x1f] + fVar3 * local_328[0x1b] +
                                 fVar2 * local_328[0x23] + fVar4);
            pfVar15 = pfVar16;
            pfVar17 = pfVar17 + 1;
            pfVar19 = pfVar19 + 4;
         }
 while ( local_328 + 0x18 != pfVar16 );
         auVar53._0_4_ = local_328[0x25] * local_328[8] - local_328[0x26] * local_328[4];
         auVar53._4_4_ = local_328[0x25] * local_328[9] - local_328[0x26] * local_328[5];
         auVar53._8_4_ = local_328[0x25] * local_328[10] - local_328[0x26] * local_328[6];
         auVar53._12_4_ = local_328[0x25] * local_328[0xb] - local_328[0x26] * local_328[7];
         auVar56._0_4_ = 0.0 - auVar53._0_4_;
         auVar56._4_4_ = 0.0 - auVar53._4_4_;
         auVar56._8_4_ = 0.0 - auVar53._8_4_;
         auVar56._12_4_ = 0.0 - auVar53._12_4_;
         auVar57 = maxps(auVar56, auVar53);
         auVar44._0_4_ = local_328[0x29] * local_328[8] - local_328[4] * fStack_280;
         auVar44._4_4_ = local_328[0x29] * local_328[9] - local_328[5] * fStack_280;
         auVar44._8_4_ = local_328[0x29] * local_328[10] - local_328[6] * fStack_280;
         auVar44._12_4_ = local_328[0x29] * local_328[0xb] - local_328[7] * fStack_280;
         auVar50._0_4_ = 0.0 - auVar44._0_4_;
         auVar50._4_4_ = 0.0 - auVar44._4_4_;
         auVar50._8_4_ = 0.0 - auVar44._8_4_;
         auVar50._12_4_ = 0.0 - auVar44._12_4_;
         auVar43 = maxps(auVar50, auVar44);
         auVar40._0_4_ = fStack_274 * local_328[8] - local_328[4] * fStack_270;
         auVar40._4_4_ = fStack_274 * local_328[9] - local_328[5] * fStack_270;
         auVar40._8_4_ = fStack_274 * local_328[10] - local_328[6] * fStack_270;
         auVar40._12_4_ = fStack_274 * local_328[0xb] - local_328[7] * fStack_270;
         auVar45._0_4_ = 0.0 - auVar40._0_4_;
         auVar45._4_4_ = 0.0 - auVar40._4_4_;
         auVar45._8_4_ = 0.0 - auVar40._8_4_;
         auVar45._12_4_ = 0.0 - auVar40._12_4_;
         auVar46 = maxps(auVar45, auVar40);
         auVar41._0_4_ = local_328[0x26] * local_328[0] - local_328[8] * local_328[0x24];
         auVar41._4_4_ = local_328[0x26] * local_328[1] - local_328[9] * local_328[0x24];
         auVar41._8_4_ = local_328[0x26] * local_328[2] - local_328[10] * local_328[0x24];
         auVar41._12_4_ = local_328[0x26] * local_328[3] - local_328[0xb] * local_328[0x24];
         auVar58._4_4_ = 0.0 - auVar41._4_4_;
         auVar58._0_4_ = 0.0 - auVar41._0_4_;
         auVar58._8_4_ = 0.0 - auVar41._8_4_;
         auVar58._12_4_ = 0.0 - auVar41._12_4_;
         auVar59 = maxps(auVar58, auVar41);
         auVar54._0_4_ = fStack_280 * local_328[0] - local_328[8] * local_328[0x28];
         auVar54._4_4_ = fStack_280 * local_328[1] - local_328[9] * local_328[0x28];
         auVar54._8_4_ = fStack_280 * local_328[2] - local_328[10] * local_328[0x28];
         auVar54._12_4_ = fStack_280 * local_328[3] - local_328[0xb] * local_328[0x28];
         auVar60._4_4_ = 0.0 - auVar54._4_4_;
         auVar60._0_4_ = 0.0 - auVar54._0_4_;
         auVar60._8_4_ = 0.0 - auVar54._8_4_;
         auVar60._12_4_ = 0.0 - auVar54._12_4_;
         auVar49 = maxps(auVar60, auVar54);
         auVar51._0_4_ = fStack_270 * local_328[0] - local_328[8] * local_278;
         auVar51._4_4_ = fStack_270 * local_328[1] - local_328[9] * local_278;
         auVar51._8_4_ = fStack_270 * local_328[2] - local_328[10] * local_278;
         auVar51._12_4_ = fStack_270 * local_328[3] - local_328[0xb] * local_278;
         auVar31._0_4_ = 0.0 - auVar51._0_4_;
         auVar31._4_4_ = 0.0 - auVar51._4_4_;
         auVar31._8_4_ = 0.0 - auVar51._8_4_;
         auVar31._12_4_ = 0.0 - auVar51._12_4_;
         auVar39 = maxps(auVar31, auVar51);
         auVar61._0_4_ = -(uint)(auVar49._0_4_ <=
                   local_328[0x10] * local_328[0x20] + local_328[0x12] * local_328[0x18] +
                   local_328[0xd] * (float)uStack_250 + local_328[0x15] * (float)local_258 &&
                  auVar39._0_4_ <=
                  local_328[0x20] * local_328[0x14] + local_328[0x16] * local_328[0x18] +
                  local_258._4_4_ * local_328[0xd] + local_328[0x11] * (float)local_258);
         auVar61._4_4_ = -(uint)(auVar49._4_4_ <=
                   local_328[0x10] * local_328[0x21] + local_328[0x12] * local_328[0x19] +
                   local_328[0xd] * (float)uStack_250 + local_328[0x15] * (float)local_258 &&
                  auVar39._4_4_ <=
                  local_328[0x21] * local_328[0x14] + local_328[0x16] * local_328[0x19] +
                  local_258._4_4_ * local_328[0xd] + local_328[0x11] * (float)local_258);
         auVar61._8_4_ = -(uint)(auVar49._8_4_ <=
                   local_328[0x10] * local_328[0x22] + local_328[0x12] * local_328[0x1a] +
                   local_328[0xd] * (float)uStack_250 + local_328[0x15] * (float)local_258 &&
                  auVar39._8_4_ <=
                  local_328[0x22] * local_328[0x14] + local_328[0x16] * local_328[0x1a] +
                  local_258._4_4_ * local_328[0xd] + local_328[0x11] * (float)local_258);
         auVar61._12_4_ = -(uint)(auVar49._12_4_ <=
                   local_328[0x10] * local_328[0x23] + local_328[0x12] * local_328[0x1b] +
                   local_328[0xd] * (float)uStack_250 + local_328[0x15] * (float)local_258 &&
                  auVar39._12_4_ <=
                  local_328[0x23] * local_328[0x14] + local_328[0x16] * local_328[0x1b] +
                  local_258._4_4_ * local_328[0xd] + local_328[0x11] * (float)local_258);
         auVar47._0_4_ = local_328[0x24] * local_328[4] - local_328[0x25] * local_328[0];
         auVar47._4_4_ = local_328[0x24] * local_328[5] - local_328[0x25] * local_328[1];
         auVar47._8_4_ = local_328[0x24] * local_328[6] - local_328[0x25] * local_328[2];
         auVar47._12_4_ = local_328[0x24] * local_328[7] - local_328[0x25] * local_328[3];
         auVar32._0_4_ = 0.0 - auVar47._0_4_;
         auVar32._4_4_ = 0.0 - auVar47._4_4_;
         auVar32._8_4_ = 0.0 - auVar47._8_4_;
         auVar32._12_4_ = 0.0 - auVar47._12_4_;
         auVar49 = maxps(auVar32, auVar47);
         auVar42._0_4_ = local_328[0x28] * local_328[4] - local_328[0x29] * local_328[0];
         auVar42._4_4_ = local_328[0x28] * local_328[5] - local_328[0x29] * local_328[1];
         auVar42._8_4_ = local_328[0x28] * local_328[6] - local_328[0x29] * local_328[2];
         auVar42._12_4_ = local_328[0x28] * local_328[7] - local_328[0x29] * local_328[3];
         auVar38._0_4_ = local_328[4] * local_278 - local_328[0] * fStack_274;
         auVar38._4_4_ = local_328[5] * local_278 - local_328[1] * fStack_274;
         auVar38._8_4_ = local_328[6] * local_278 - local_328[2] * fStack_274;
         auVar38._12_4_ = local_328[7] * local_278 - local_328[3] * fStack_274;
         auVar28._0_4_ = 0.0 - auVar42._0_4_;
         auVar28._4_4_ = 0.0 - auVar42._4_4_;
         auVar28._8_4_ = 0.0 - auVar42._8_4_;
         auVar28._12_4_ = 0.0 - auVar42._12_4_;
         auVar33._0_4_ = 0.0 - auVar38._0_4_;
         auVar33._4_4_ = 0.0 - auVar38._4_4_;
         auVar33._8_4_ = 0.0 - auVar38._8_4_;
         auVar33._12_4_ = 0.0 - auVar38._12_4_;
         auVar39 = maxps(auVar28, auVar42);
         auVar34 = maxps(auVar33, auVar38);
         auVar7._4_4_ = uVar27;
         auVar7._0_4_ = uVar12;
         auVar7._8_4_ = uVar36;
         auVar7._12_4_ = uVar37;
         auVar48._0_4_ = -(uint)(auVar49._0_4_ <=
                   local_328[0xc] * local_328[0x1c] + local_328[0xd] * local_328[0x18] +
                   local_328[0x12] * (float)uStack_250 + local_258._4_4_ * local_328[0x16] &&
                  auVar39._0_4_ <=
                  (float)uStack_250 * local_328[0xe] + local_328[0x16] * (float)local_258 +
                  local_328[0x11] * local_328[0x18] + local_328[0x10] * local_328[0x1c]);
         auVar48._4_4_ = -(uint)(auVar49._4_4_ <=
                   local_328[0xc] * local_328[0x1d] + local_328[0xd] * local_328[0x19] +
                   local_328[0x12] * (float)uStack_250 + local_258._4_4_ * local_328[0x16] &&
                  auVar39._4_4_ <=
                  (float)uStack_250 * local_328[0xe] + local_328[0x16] * (float)local_258 +
                  local_328[0x11] * local_328[0x19] + local_328[0x10] * local_328[0x1d]);
         auVar48._8_4_ = -(uint)(auVar49._8_4_ <=
                   local_328[0xc] * local_328[0x1e] + local_328[0xd] * local_328[0x1a] +
                   local_328[0x12] * (float)uStack_250 + local_258._4_4_ * local_328[0x16] &&
                  auVar39._8_4_ <=
                  (float)uStack_250 * local_328[0xe] + local_328[0x16] * (float)local_258 +
                  local_328[0x11] * local_328[0x1a] + local_328[0x10] * local_328[0x1e]);
         auVar48._12_4_ = -(uint)(auVar49._12_4_ <=
                   local_328[0xc] * local_328[0x1f] + local_328[0xd] * local_328[0x1b] +
                   local_328[0x12] * (float)uStack_250 + local_258._4_4_ * local_328[0x16] &&
                  auVar39._12_4_ <=
                  (float)uStack_250 * local_328[0xe] + local_328[0x16] * (float)local_258 +
                  local_328[0x11] * local_328[0x1b] + local_328[0x10] * local_328[0x1f]);
         uVar36 = ( uint ) * (undefined8*)( pfVar14 + 0x18 );
         uVar37 = ( uint )(( ulong ) * (undefined8*)( pfVar14 + 0x1a ) >> 0x20);
         auVar24._0_4_ = -(uint)(auVar46._0_4_ <=
                   local_328[0x15] * local_328[0x20] + local_328[0x16] * local_328[0x1c] +
                   local_258._4_4_ * local_328[0xc] + local_328[0x10] * (float)local_258 &&
                  auVar59._0_4_ <=
                  local_328[0xc] * local_328[0x20] + local_328[0xe] * local_328[0x18] +
                  local_328[0x11] * (float)uStack_250 + local_258._4_4_ * local_328[0x15]);
         auVar24._4_4_ = -(uint)(auVar46._4_4_ <=
                   local_328[0x15] * local_328[0x21] + local_328[0x16] * local_328[0x1d] +
                   local_258._4_4_ * local_328[0xc] + local_328[0x10] * (float)local_258 &&
                  auVar59._4_4_ <=
                  local_328[0xc] * local_328[0x21] + local_328[0xe] * local_328[0x19] +
                  local_328[0x11] * (float)uStack_250 + local_258._4_4_ * local_328[0x15]);
         auVar24._8_4_ = -(uint)(auVar46._8_4_ <=
                   local_328[0x15] * local_328[0x22] + local_328[0x16] * local_328[0x1e] +
                   local_258._4_4_ * local_328[0xc] + local_328[0x10] * (float)local_258 &&
                  auVar59._8_4_ <=
                  local_328[0xc] * local_328[0x22] + local_328[0xe] * local_328[0x1a] +
                  local_328[0x11] * (float)uStack_250 + local_258._4_4_ * local_328[0x15]);
         auVar24._12_4_ = -(uint)(auVar46._12_4_ <=
                   local_328[0x15] * local_328[0x23] + local_328[0x16] * local_328[0x1f] +
                   local_258._4_4_ * local_328[0xc] + local_328[0x10] * (float)local_258 &&
                  auVar59._12_4_ <=
                  local_328[0xc] * local_328[0x23] + local_328[0xe] * local_328[0x1b] +
                  local_328[0x11] * (float)uStack_250 + local_258._4_4_ * local_328[0x15]);
         auVar35._4_4_ = -(uint)(auVar34._4_4_ <=
                  local_328[0x19] * local_328[0x15] + local_328[0x1d] * local_328[0x14] +
                  local_258._4_4_ * local_328[0xe] + local_328[0x12] * (float)local_258);
         auVar35._0_4_ = -(uint)(auVar34._0_4_ <=
                  local_328[0x18] * local_328[0x15] + local_328[0x1c] * local_328[0x14] +
                  local_258._4_4_ * local_328[0xe] + local_328[0x12] * (float)local_258);
         auVar35._8_4_ = -(uint)(auVar34._8_4_ <=
                  local_328[0x1a] * local_328[0x15] + local_328[0x1e] * local_328[0x14] +
                  local_258._4_4_ * local_328[0xe] + local_328[0x12] * (float)local_258);
         auVar35._12_4_ = -(uint)(auVar34._12_4_ <=
                  local_328[0x1b] * local_328[0x15] + local_328[0x1f] * local_328[0x14] +
                  local_258._4_4_ * local_328[0xe] + local_328[0x12] * (float)local_258);
         auVar6._4_4_ = -(uint)(auVar57._4_4_ <=
                             local_328[0xd] * local_328[0x21] + local_328[0xe] * local_328[0x1d] +
                             local_328[0x10] * (float)uStack_250 + local_258._4_4_ * local_328[0x14]
                            && auVar43._4_4_ <=
                               local_328[0x11] * local_328[0x21] + local_328[0x12] * local_328[0x1d]
                               + local_328[0xc] * (float)uStack_250 +
                                 local_328[0x14] * (float)local_258);
         auVar6._0_4_ = -(uint)(auVar57._0_4_ <=
                             local_328[0xd] * local_328[0x20] + local_328[0xe] * local_328[0x1c] +
                             local_328[0x10] * (float)uStack_250 + local_258._4_4_ * local_328[0x14]
                            && auVar43._0_4_ <=
                               local_328[0x11] * local_328[0x20] + local_328[0x12] * local_328[0x1c]
                               + local_328[0xc] * (float)uStack_250 +
                                 local_328[0x14] * (float)local_258);
         auVar6._8_4_ = -(uint)(auVar57._8_4_ <=
                             local_328[0xd] * local_328[0x22] + local_328[0xe] * local_328[0x1e] +
                             local_328[0x10] * (float)uStack_250 + local_258._4_4_ * local_328[0x14]
                            && auVar43._8_4_ <=
                               local_328[0x11] * local_328[0x22] + local_328[0x12] * local_328[0x1e]
                               + local_328[0xc] * (float)uStack_250 +
                                 local_328[0x14] * (float)local_258);
         auVar6._12_4_ = -(uint)(auVar57._12_4_ <=
                   local_328[0xd] * local_328[0x23] + local_328[0xe] * local_328[0x1f] +
                   local_328[0x10] * (float)uStack_250 + local_258._4_4_ * local_328[0x14] &&
                  auVar43._12_4_ <=
                  local_328[0x11] * local_328[0x23] + local_328[0x12] * local_328[0x1f] +
                  local_328[0xc] * (float)uStack_250 + local_328[0x14] * (float)local_258);
         auVar39 = auVar48 & auVar35 & auVar24 & auVar6 & auVar7 & auVar61;
         uVar22 = movmskps((int)local_328, auVar39);
         uVar12 = auVar39._8_4_ >> 0x1f;
         uVar12 = uVar12 & ( uint ) * (undefined8*)( pfVar14 + 0x1a ) | ~uVar12 & uVar37;
         uVar27 = auVar39._4_4_ >> 0x1f;
         auVar25._0_4_ = uVar36 & uVar27;
         auVar25._4_4_ = ( uint )(( ulong ) * (undefined8*)( pfVar14 + 0x18 ) >> 0x20) & uVar27;
         auVar25._8_4_ = uVar12 & uVar27;
         auVar25._12_4_ = uVar37 & uVar27;
         auVar29._0_4_ = ~uVar27 & uVar36;
         auVar29._4_4_ = ~uVar27 & uVar12;
         auVar29._8_4_ = ~uVar27 & uVar37;
         auVar29._12_4_ = ~uVar27 & uVar37;
         uVar27 = auVar39._0_4_ >> 0x1f;
         auVar25 = auVar25 | auVar29;
         uVar12 = auVar25._12_4_;
         auVar26._0_4_ = auVar25._0_4_ & uVar27;
         auVar26._4_4_ = auVar25._4_4_ & uVar27;
         auVar26._8_4_ = auVar25._8_4_ & uVar27;
         auVar26._12_4_ = uVar12 & uVar27;
         auVar30._0_4_ = ~uVar27 & auVar25._4_4_;
         auVar30._4_4_ = ~uVar27 & auVar25._8_4_;
         auVar30._8_4_ = ~uVar27 & uVar12;
         auVar30._12_4_ = ~uVar27 & uVar12;
         iVar13 = __popcountdi2(CONCAT44((int)( (ulong)local_328 >> 0x20 ), uVar22));
         local_488 = SUB168(auVar26 | auVar30, 0);
         uStack_480 = SUB168(auVar26 | auVar30, 8);
         lVar20 = (long)iVar21;
         iVar21 = iVar21 + iVar13;
         *(undefined8*)( local_238 + lVar20 ) = local_488;
         *(undefined8*)( (long)auStack_230 + lVar20 * 4 ) = uStack_480;
      }

      bVar23 = iVar21 == 0;
      iVar21 = iVar21 + -1;
      if (bVar23) goto LAB_00101c18;
      uVar12 = local_238[iVar21];
   }
 while ( true );
}
/* JPH::QuadTree::CastAABox(JPH::AABoxCast const&,
   JPH::CollisionCollector<JPH::BroadPhaseCastResult, JPH::CollisionCollectorTraitsCastShape>&,
   JPH::ObjectLayerFilter const&, JPH::Array<JPH::QuadTree::Tracking,
   JPH::STLAllocator<JPH::QuadTree::Tracking> > const&) const */void JPH::QuadTree::CastAABox(QuadTree *this, AABoxCast *param_1, CollisionCollector *param_2, ObjectLayerFilter *param_3, Array *param_4) {
   short sVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined8 uVar7;
   char cVar8;
   long lVar9;
   float *pfVar10;
   ulong uVar11;
   ulong uVar12;
   int iVar13;
   long *plVar14;
   ObjectLayerFilter *pOVar15;
   ObjectLayerFilter *pOVar16;
   ObjectLayerFilter *pOVar17;
   long lVar18;
   long in_FS_OFFSET;
   byte bVar19;
   uint uVar20;
   float fVar21;
   uint uVar24;
   uint uVar26;
   undefined1 auVar22[16];
   float fVar25;
   float fVar27;
   uint uVar28;
   float fVar29;
   undefined1 auVar23[16];
   float fVar30;
   uint uVar31;
   uint uVar38;
   uint uVar39;
   undefined8 uVar32;
   float fVar37;
   float fVar40;
   uint uVar41;
   float fVar43;
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   undefined1 auVar35[16];
   undefined1 auVar36[16];
   undefined8 uVar42;
   undefined1 auVar44[16];
   undefined1 auVar45[16];
   undefined1 auVar46[16];
   undefined1 auVar47[16];
   float fVar48;
   float fVar49;
   float fVar50;
   float fVar51;
   undefined1 auVar52[16];
   undefined1 auVar53[16];
   undefined1 auVar54[16];
   undefined1 auVar55[16];
   undefined1 auVar56[16];
   float fVar57;
   float fVar60;
   float fVar61;
   float fVar62;
   undefined1 auVar58[16];
   undefined1 auVar59[16];
   uint uVar63;
   undefined1 auVar64[16];
   undefined1 auVar65[16];
   float fVar66;
   float fVar69;
   float fVar70;
   float fVar71;
   undefined1 auVar67[16];
   undefined1 auVar68[16];
   undefined1 auVar72[16];
   undefined1 auVar73[16];
   float fVar74;
   float fVar77;
   float fVar78;
   float fVar79;
   undefined1 auVar75[16];
   undefined1 auVar76[16];
   float fVar80;
   float fVar81;
   float fVar82;
   float fVar83;
   uint local_4d0;
   float local_4cc;
   undefined1 local_4c8[16];
   undefined1 local_4b8[16];
   undefined1 local_4a8[16];
   uint local_498[2];
   undefined8 auStack_490[63];
   float local_298;
   float fStack_294;
   float fStack_290;
   float fStack_28c;
   float local_288;
   float fStack_284;
   float fStack_280;
   float fStack_27c;
   undefined1 local_278[8];
   float fStack_270;
   uint local_268;
   uint uStack_264;
   uint uStack_260;
   int iStack_25c;
   ObjectLayerFilter *local_258;
   float local_250[2];
   undefined8 auStack_248[65];
   long local_40;
   bVar19 = 0;
   iVar13 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_258 = (ObjectLayerFilter*)param_2;
   local_250[0] = -1.0;
   local_298 = ( *(float*)( param_1 + 0x10 ) + *(float*)param_1 ) * _LC4;
   fStack_294 = ( *(float*)( param_1 + 0x14 ) + *(float*)( param_1 + 4 ) ) * _LC4;
   fStack_290 = ( *(float*)( param_1 + 0x18 ) + *(float*)( param_1 + 8 ) ) * _LC4;
   fStack_28c = ( *(float*)( param_1 + 0x1c ) + *(float*)( param_1 + 0xc ) ) * _LC4;
   auVar45 = *(undefined1(*) [16])( param_1 + 0x20 );
   local_288 = ( *(float*)( param_1 + 0x10 ) - *(float*)param_1 ) * _LC4;
   fStack_284 = ( *(float*)( param_1 + 0x14 ) - *(float*)( param_1 + 4 ) ) * _LC4;
   fStack_280 = ( *(float*)( param_1 + 0x18 ) - *(float*)( param_1 + 8 ) ) * _LC4;
   fStack_27c = ( *(float*)( param_1 + 0x1c ) - *(float*)( param_1 + 0xc ) ) * _LC4;
   auVar22._0_4_ = 0.0 - auVar45._0_4_;
   auVar22._4_4_ = 0.0 - auVar45._4_4_;
   auVar22._8_4_ = 0.0 - auVar45._8_4_;
   auVar22._12_4_ = 0.0 - auVar45._12_4_;
   auVar22 = maxps(auVar22, auVar45);
   local_268 = -(uint)(auVar22._0_4_ <= _LC8);
   uStack_264 = -(uint)(auVar22._4_4_ <= _LC8);
   uStack_260 = -(uint)(auVar22._8_4_ <= _LC8);
   iStack_25c = -(uint)(auVar22._12_4_ <= _LC8);
   uVar20 = (int)local_268 >> 0x1f;
   uVar24 = (int)uStack_264 >> 0x1f;
   uVar26 = (int)uStack_260 >> 0x1f;
   uVar28 = iStack_25c >> 0x1f;
   auVar44._0_4_ = ~uVar20 & (uint)auVar45._0_4_;
   auVar44._4_4_ = ~uVar24 & (uint)auVar45._4_4_;
   auVar44._8_4_ = ~uVar26 & (uint)auVar45._8_4_;
   auVar44._12_4_ = ~uVar28 & (uint)auVar45._12_4_;
   auVar73._4_4_ = _LC10;
   auVar73._0_4_ = _LC10;
   auVar73._8_4_ = _LC10;
   auVar73._12_4_ = _LC10;
   auVar45._0_4_ = uVar20 & _LC10;
   auVar45._4_4_ = uVar24 & _LC10;
   auVar45._8_4_ = uVar26 & _LC10;
   auVar45._12_4_ = uVar28 & _LC10;
   _local_278 = divps(auVar73, auVar45 | auVar44);
   uVar20 = *(uint*)( this + ( ( ulong ) * (uint*)( this + 0x4c ) + 0x11 ) * 4 ) | 0x800000;
   local_498[0] = uVar20;
   pOVar16 = (ObjectLayerFilter*)this;
   fVar21 = _LC22;
   do {
      pOVar15 = local_258;
      if (( iVar13 < 0x7c ) && ( uVar20 != 0xffffffff )) {
         lVar9 = *(long*)this;
         pfVar10 = (float*)( ( ulong )(uVar20 & 0xff7fffff & *(uint*)( lVar9 + 8 )) * 0x80 + *(long*)( *(long*)( lVar9 + 0x18 ) + ( ulong )(( uVar20 & 0xff7fffff ) >> ( ( byte ) * (undefined4*)( lVar9 + 4 ) & 0x1f )) * 8 ) );
         fVar80 = pfVar10[4] - fStack_284;
         fVar81 = pfVar10[5] - fStack_284;
         fVar82 = pfVar10[6] - fStack_284;
         fVar83 = pfVar10[7] - fStack_284;
         fVar30 = fStack_284 + pfVar10[0x10];
         fVar37 = fStack_284 + pfVar10[0x11];
         fVar40 = fStack_284 + pfVar10[0x12];
         fVar43 = fStack_284 + pfVar10[0x13];
         fVar57 = *pfVar10 - local_288;
         fVar60 = pfVar10[1] - local_288;
         fVar61 = pfVar10[2] - local_288;
         fVar62 = pfVar10[3] - local_288;
         fVar74 = pfVar10[8] - fStack_280;
         fVar77 = pfVar10[9] - fStack_280;
         fVar78 = pfVar10[10] - fStack_280;
         fVar79 = pfVar10[0xb] - fStack_280;
         fVar48 = local_288 + pfVar10[0xc];
         fVar49 = local_288 + pfVar10[0xd];
         fVar50 = local_288 + pfVar10[0xe];
         fVar51 = local_288 + pfVar10[0xf];
         fVar21 = fStack_280 + pfVar10[0x14];
         fVar25 = fStack_280 + pfVar10[0x15];
         fVar27 = fStack_280 + pfVar10[0x16];
         fVar29 = fStack_280 + pfVar10[0x17];
         lVar9 = (long)iVar13;
         auVar58._0_8_ = CONCAT44(( fVar49 - local_298 ) * (float)local_278._0_4_, ( fVar48 - local_298 ) * (float)local_278._0_4_);
         auVar58._8_4_ = ( fVar50 - local_298 ) * (float)local_278._0_4_;
         auVar58._12_4_ = ( fVar51 - local_298 ) * (float)local_278._0_4_;
         fVar66 = ( fVar57 - local_298 ) * (float)local_278._0_4_;
         fVar69 = ( fVar60 - local_298 ) * (float)local_278._0_4_;
         fVar70 = ( fVar61 - local_298 ) * (float)local_278._0_4_;
         fVar71 = ( fVar62 - local_298 ) * (float)local_278._0_4_;
         auVar65._0_8_ = CONCAT44(( fVar81 - fStack_294 ) * (float)local_278._4_4_, ( fVar80 - fStack_294 ) * (float)local_278._4_4_);
         auVar65._8_4_ = ( fVar82 - fStack_294 ) * (float)local_278._4_4_;
         auVar65._12_4_ = ( fVar83 - fStack_294 ) * (float)local_278._4_4_;
         auVar64._0_8_ = CONCAT44(( fVar77 - fStack_290 ) * fStack_270, ( fVar74 - fStack_290 ) * fStack_270);
         auVar64._8_4_ = ( fVar78 - fStack_290 ) * fStack_270;
         auVar64._12_4_ = ( fVar79 - fStack_290 ) * fStack_270;
         auVar75._0_4_ = ( fVar30 - fStack_294 ) * (float)local_278._4_4_;
         auVar75._4_4_ = ( fVar37 - fStack_294 ) * (float)local_278._4_4_;
         auVar75._8_4_ = ( fVar40 - fStack_294 ) * (float)local_278._4_4_;
         auVar75._12_4_ = ( fVar43 - fStack_294 ) * (float)local_278._4_4_;
         auVar67._4_4_ = ( fVar25 - fStack_290 ) * fStack_270;
         auVar67._0_4_ = ( fVar21 - fStack_290 ) * fStack_270;
         auVar5._4_4_ = fVar69;
         auVar5._0_4_ = fVar66;
         auVar5._8_4_ = fVar70;
         auVar5._12_4_ = fVar71;
         auVar45 = minps(auVar5, auVar58);
         auVar67._8_4_ = ( fVar27 - fStack_290 ) * fStack_270;
         auVar67._12_4_ = ( fVar29 - fStack_290 ) * fStack_270;
         uVar20 = (int)local_268 >> 0x1f;
         auVar52._4_4_ = ~uVar20 & auVar45._4_4_;
         auVar52._0_4_ = ~uVar20 & auVar45._0_4_;
         auVar55._8_4_ = auVar65._8_4_;
         auVar55._0_8_ = auVar65._0_8_;
         auVar55._12_4_ = auVar65._12_4_;
         auVar22 = minps(auVar55, auVar75);
         auVar52._8_4_ = ~uVar20 & auVar45._8_4_;
         auVar52._12_4_ = ~uVar20 & auVar45._12_4_;
         auVar72._0_4_ = (uint)_LC14 & uVar20;
         auVar72._4_4_ = (uint)_LC14 & uVar20;
         auVar72._8_4_ = (uint)_LC14 & uVar20;
         auVar72._12_4_ = (uint)_LC14 & uVar20;
         auVar33._8_4_ = auVar64._8_4_;
         auVar33._0_8_ = auVar64._0_8_;
         auVar33._12_4_ = auVar64._12_4_;
         uVar26 = (int)uStack_264 >> 0x1f;
         auVar45 = minps(auVar33, auVar67);
         auVar53._0_4_ = ~uVar26 & auVar22._0_4_;
         auVar53._4_4_ = ~uVar26 & auVar22._4_4_;
         auVar53._8_4_ = ~uVar26 & auVar22._8_4_;
         auVar53._12_4_ = ~uVar26 & auVar22._12_4_;
         auVar76._0_4_ = (uint)_LC14 & uVar26;
         auVar76._4_4_ = (uint)_LC14 & uVar26;
         auVar76._8_4_ = (uint)_LC14 & uVar26;
         auVar76._12_4_ = (uint)_LC14 & uVar26;
         auVar73 = maxps(auVar72 | auVar52, auVar76 | auVar53);
         uVar24 = (int)uStack_260 >> 0x1f;
         auVar59._0_4_ = (uint)_LC14 & uVar24;
         auVar59._4_4_ = (uint)_LC14 & uVar24;
         auVar59._8_4_ = (uint)_LC14 & uVar24;
         auVar59._12_4_ = (uint)_LC14 & uVar24;
         auVar68._0_4_ = ~uVar24 & auVar45._0_4_;
         auVar68._4_4_ = ~uVar24 & auVar45._4_4_;
         auVar68._8_4_ = ~uVar24 & auVar45._8_4_;
         auVar68._12_4_ = ~uVar24 & auVar45._12_4_;
         auVar6._4_4_ = fVar69;
         auVar6._0_4_ = fVar66;
         auVar6._8_4_ = fVar70;
         auVar6._12_4_ = fVar71;
         auVar2._8_4_ = auVar58._8_4_;
         auVar2._0_8_ = auVar58._0_8_;
         auVar2._12_4_ = auVar58._12_4_;
         auVar45 = maxps(auVar6, auVar2);
         auVar34._0_4_ = ~uVar20 & auVar45._0_4_;
         auVar34._4_4_ = ~uVar20 & auVar45._4_4_;
         auVar34._8_4_ = ~uVar20 & auVar45._8_4_;
         auVar34._12_4_ = ~uVar20 & auVar45._12_4_;
         auVar22 = maxps(auVar65, auVar75);
         auVar45 = maxps(auVar64, auVar67);
         auVar46._0_4_ = uVar20 & _LC16;
         auVar46._4_4_ = uVar20 & _LC16;
         auVar46._8_4_ = uVar20 & _LC16;
         auVar46._12_4_ = uVar20 & _LC16;
         auVar56._0_4_ = uVar26 & _LC16;
         auVar56._4_4_ = uVar26 & _LC16;
         auVar56._8_4_ = uVar26 & _LC16;
         auVar56._12_4_ = uVar26 & _LC16;
         auVar35._0_4_ = ~uVar26 & auVar22._0_4_;
         auVar35._4_4_ = ~uVar26 & auVar22._4_4_;
         auVar35._8_4_ = ~uVar26 & auVar22._8_4_;
         auVar35._12_4_ = ~uVar26 & auVar22._12_4_;
         auVar54._0_4_ = uVar24 & _LC16;
         auVar54._4_4_ = uVar24 & _LC16;
         auVar54._8_4_ = uVar24 & _LC16;
         auVar54._12_4_ = uVar24 & _LC16;
         auVar22 = minps(auVar46 | auVar34, auVar56 | auVar35);
         auVar36._0_4_ = ~uVar24 & auVar45._0_4_;
         auVar36._4_4_ = ~uVar24 & auVar45._4_4_;
         auVar36._8_4_ = ~uVar24 & auVar45._8_4_;
         auVar36._12_4_ = ~uVar24 & auVar45._12_4_;
         auVar45 = maxps(auVar73, auVar59 | auVar68);
         auVar22 = minps(auVar22, auVar54 | auVar36);
         uVar20 = (int)( -(uint)(local_298 < fVar57 || fVar48 < local_298) & local_268 | -(uint)(fStack_294 < fVar80 || fVar30 < fStack_294) & uStack_264 | -(uint)((fVar48 < fVar57 || fVar30 < fVar80) ||
                            (auVar22._0_4_ < auVar45._0_4_ || auVar22._0_4_ < 0.0)) | -(uint)(fStack_290 < fVar74 || fVar21 < fStack_290) & uStack_260 | -(uint)(fVar21 < fVar74) ) >> 0x1f;
         uVar24 = (int)( -(uint)(local_298 < fVar60 || fVar49 < local_298) & local_268 | -(uint)(fStack_294 < fVar81 || fVar37 < fStack_294) & uStack_264 | -(uint)((fVar49 < fVar60 || fVar37 < fVar81) ||
                            (auVar22._4_4_ < auVar45._4_4_ || auVar22._4_4_ < 0.0)) | -(uint)(fStack_290 < fVar77 || fVar25 < fStack_290) & uStack_260 | -(uint)(fVar25 < fVar77) ) >> 0x1f;
         uVar26 = (int)( -(uint)(local_298 < fVar61 || fVar50 < local_298) & local_268 | -(uint)(fStack_294 < fVar82 || fVar40 < fStack_294) & uStack_264 | -(uint)((fVar50 < fVar61 || fVar40 < fVar82) ||
                            (auVar22._8_4_ < auVar45._8_4_ || auVar22._8_4_ < 0.0)) | -(uint)(fStack_290 < fVar78 || fVar27 < fStack_290) & uStack_260 | -(uint)(fVar27 < fVar78) ) >> 0x1f;
         uVar28 = (int)( -(uint)(local_298 < fVar62 || fVar51 < local_298) & local_268 | -(uint)(fStack_294 < fVar83 || fVar43 < fStack_294) & uStack_264 | -(uint)((fVar51 < fVar62 || fVar43 < fVar83) ||
                            (auVar22._12_4_ < auVar45._12_4_ || auVar22._12_4_ < 0.0)) | -(uint)(fStack_290 < fVar79 || fVar29 < fStack_290) & uStack_260 | -(uint)(fVar29 < fVar79) ) >> 0x1f;
         fVar25 = (float)( _LC16 & uVar20 | ~uVar20 & (uint)auVar45._0_4_ );
         fVar27 = (float)( _LC16 & uVar24 | ~uVar24 & (uint)auVar45._4_4_ );
         fVar29 = (float)( _LC16 & uVar26 | ~uVar26 & (uint)auVar45._8_4_ );
         fVar30 = (float)( _LC16 & uVar28 | ~uVar28 & (uint)auVar45._12_4_ );
         fVar21 = *(float*)( local_258 + 8 );
         if (*(float*)( local_258 + 8 ) <= _LC22) {
            fVar21 = _LC22;
         }

         uVar26 = ( uint ) * (undefined8*)( pfVar10 + 0x18 );
         uVar28 = ( uint )(( ulong ) * (undefined8*)( pfVar10 + 0x18 ) >> 0x20);
         uVar39 = ( uint ) * (undefined8*)( pfVar10 + 0x1a );
         uVar63 = ( uint )(( ulong ) * (undefined8*)( pfVar10 + 0x1a ) >> 0x20);
         uVar20 = (int)-(uint)(fVar25 < fVar29) >> 0x1f;
         uVar24 = (int)-(uint)(fVar27 < fVar30) >> 0x1f;
         fVar37 = (float)( (uint)fVar29 & uVar20 | ~uVar20 & (uint)fVar25 );
         fVar40 = (float)( (uint)fVar30 & uVar24 | ~uVar24 & (uint)fVar27 );
         fVar29 = (float)( (uint)fVar25 & uVar20 | ~uVar20 & (uint)fVar29 );
         fVar30 = (float)( (uint)fVar27 & uVar24 | ~uVar24 & (uint)fVar30 );
         uVar31 = ~uVar20 & uVar26 | uVar20 & uVar39;
         uVar38 = ~uVar24 & uVar28 | uVar24 & uVar63;
         uVar41 = ~uVar20 & uVar39 | uVar20 & uVar26;
         uVar63 = ~uVar24 & uVar63 | uVar24 & uVar28;
         uVar20 = (int)-(uint)(fVar37 < fVar40) >> 0x1f;
         uVar26 = (int)-(uint)(fVar29 < fVar30) >> 0x1f;
         fVar25 = (float)( (uint)fVar37 & uVar20 | ~uVar20 & (uint)fVar40 );
         fVar27 = (float)( (uint)fVar30 & uVar26 | ~uVar26 & (uint)fVar29 );
         uVar24 = uVar20 & uVar31 | ~uVar20 & uVar38;
         uVar28 = uVar26 & uVar63 | ~uVar26 & uVar41;
         uVar39 = (int)-(uint)(fVar25 < fVar27) >> 0x1f;
         auVar47._4_4_ = ~uVar39 & (uint)fVar25;
         auVar47._0_4_ = (uint)fVar40 & uVar20 | ~uVar20 & (uint)fVar37;
         auVar47._8_4_ = ~uVar39 & (uint)fVar27;
         auVar47._12_4_ = (uint)fVar29 & uVar26 | ~uVar26 & (uint)fVar30;
         auVar4._4_4_ = (uint)fVar25 & uVar39;
         auVar4._0_4_ = (uint)fVar27 & uVar39;
         auVar4._8_8_ = 0;
         auVar47 = auVar4 << 0x20 | auVar47;
         local_4c8._4_4_ = ~uVar39 & uVar24;
         local_4c8._0_4_ = uVar20 & uVar38 | ~uVar20 & uVar31;
         local_4c8._8_4_ = ~uVar39 & uVar28;
         local_4c8._12_4_ = uVar26 & uVar41 | ~uVar26 & uVar63;
         auVar3._4_4_ = uVar39 & uVar24;
         auVar3._0_4_ = uVar39 & uVar28;
         auVar3._8_8_ = 0;
         local_4c8 = auVar3 << 0x20 | local_4c8;
         auVar23._4_4_ = -(uint)(auVar47._4_4_ < fVar21);
         auVar23._0_4_ = -(uint)(auVar47._0_4_ < fVar21);
         auVar23._8_4_ = -(uint)(auVar47._8_4_ < fVar21);
         auVar23._12_4_ = -(uint)(auVar47._12_4_ < fVar21);
         uVar24 = movmskps((int)pOVar16, auVar23);
         pOVar16 = (ObjectLayerFilter*)(ulong)uVar24;
         uVar20 = __popcountdi2();
         fVar21 = _LC22;
         local_4a8 = auVar47;
         if (uVar24 == 0) {
            local_4a8 = (undefined1[16])0x0;
            uVar32 = 0;
            uVar42 = 0;
         }
 else {
            local_4b8 = (undefined1[16])0x0;
            pOVar17 = (ObjectLayerFilter*)local_4a8;
            uVar11 = (ulong)uVar20 << 2;
            pOVar16 = (ObjectLayerFilter*)local_4b8;
            lVar18 = ( 4 - (long)(int)uVar20 ) * 4;
            pOVar15 = pOVar17 + lVar18;
            if (7 < (uint)uVar11) {
               for (uVar12 = uVar11 >> 3 & 0x1fffffff; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(long*)pOVar16 = *(long*)pOVar15;
                  pOVar15 = pOVar15 + (ulong)bVar19 * -0x10 + 8;
                  pOVar16 = pOVar16 + (ulong)bVar19 * -0x10 + 8;
               }

            }

            if (( uVar11 & 4 ) != 0) {
               *(undefined4*)pOVar16 = *(undefined4*)pOVar15;
            }

            plVar14 = (long*)( local_4c8 + lVar18 );
            local_4a8 = (undefined1[16])0x0;
            if (7 < (uint)uVar11) {
               for (uVar12 = uVar11 >> 3 & 0x1fffffff; pOVar16 = pOVar17,uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(long*)pOVar17 = *plVar14;
                  plVar14 = plVar14 + (ulong)bVar19 * -2 + 1;
                  pOVar17 = pOVar17 + (ulong)bVar19 * -0x10 + 8;
               }

            }

            uVar32 = local_4b8._0_8_;
            uVar42 = local_4b8._8_8_;
            if (( uVar11 & 4 ) != 0) {
               *(int*)pOVar17 = (int)*plVar14;
            }

         }

         uVar7 = local_4a8._8_8_;
         *(undefined8*)( local_250 + lVar9 ) = uVar32;
         *(undefined8*)( (long)auStack_248 + lVar9 * 4 ) = uVar42;
         iVar13 = iVar13 + uVar20;
         local_4c8 = local_4a8;
         *(undefined8*)( local_498 + lVar9 ) = local_4a8._0_8_;
         *(undefined8*)( (long)auStack_490 + lVar9 * 4 ) = uVar7;
         pOVar15 = local_258;
      }

      while (true) {
         lVar9 = (long)( iVar13 + -1 );
         do {
            iVar13 = (int)lVar9;
            if (iVar13 == -1) goto LAB_00102569;
            pfVar10 = local_250 + lVar9;
            fVar25 = *(float*)( pOVar15 + 8 );
            if (*(float*)( pOVar15 + 8 ) <= _LC22) {
               fVar25 = fVar21;
            }

            lVar9 = lVar9 + -1;
         }
 while ( fVar25 <= *pfVar10 );
         uVar20 = local_498[iVar13];
         if (( uVar20 & 0x800000 ) != 0) break;
         sVar1 = *(short*)( *(long*)( param_4 + 0x10 ) + 2 + ( ulong )(uVar20 & 0x7fffff) * 8 );
         pOVar15 = local_258;
         if (( sVar1 != -1 ) && ( pOVar16 = param_3 ),cVar8 = ( **(code**)( *(long*)param_3 + 0x10 ) )(param_3, sVar1),pOVar15 = local_258,fVar21 = _LC22,cVar8 != '\0') {
            local_4cc = local_250[iVar13];
            pOVar16 = local_258;
            local_4d0 = uVar20;
            ( **(code**)( *(long*)local_258 + 0x28 ) )(local_258, &local_4d0);
            fVar21 = _LC22;
            if (*(float*)( pOVar15 + 8 ) <= _LC14) {
               LAB_00102569:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return;
            }

         }

      }
;
   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::QuadTree::FindCollidingPairs(JPH::Array<JPH::Body*, JPH::STLAllocator<JPH::Body*> > const&,
   JPH::BodyID const*, int, float, JPH::CollisionCollector<JPH::BodyPair,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::ObjectLayerPairFilter const&) const */void JPH::QuadTree::FindCollidingPairs(QuadTree *this, Array *param_1, BodyID *param_2, int param_3, float param_4, CollisionCollector *param_5, ObjectLayerPairFilter *param_6) {
   uint *puVar1;
   byte bVar2;
   uint uVar3;
   uint uVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   float fVar10;
   float fVar11;
   float fVar12;
   char cVar13;
   undefined4 uVar14;
   int iVar15;
   uint uVar16;
   float *pfVar17;
   int iVar18;
   code *pcVar19;
   long in_FS_OFFSET;
   bool bVar20;
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   uint uVar24;
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   uint uVar27;
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   float fVar30;
   float fVar31;
   float fVar32;
   float fVar33;
   float fVar34;
   float fVar35;
   uint uVar37;
   undefined1 auVar36[16];
   undefined8 local_250;
   uint local_248[130];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = *(uint*)( this + 0x4c );
   if (param_3 < 1) {
      LAB_00102e93:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   puVar1 = (uint*)( param_2 + (long)param_3 * 4 );
   LAB_00102c00:uVar4 = *(uint*)param_2;
   iVar18 = 0;
   lVar5 = *(long*)( *(long*)( param_1 + 0x10 ) + ( ulong )(uVar4 & 0x7fffff) * 8 );
   fVar10 = *(float*)( lVar5 + 0x2c );
   fVar30 = *(float*)( lVar5 + 0x20 ) - param_4;
   fVar31 = *(float*)( lVar5 + 0x24 ) - param_4;
   fVar32 = *(float*)( lVar5 + 0x28 ) - param_4;
   fVar11 = *(float*)( lVar5 + 0x3c );
   fVar33 = param_4 + *(float*)( lVar5 + 0x30 );
   fVar34 = param_4 + *(float*)( lVar5 + 0x34 );
   fVar35 = param_4 + *(float*)( lVar5 + 0x38 );
   uVar16 = *(uint*)( this + (ulong)uVar3 * 4 + 0x44 ) | 0x800000;
   pcVar19 = (code*)this;
   local_248[0] = uVar16;
   do {
      if (( uVar16 & 0x800000 ) == 0) {
         if (uVar4 == uVar16) goto LAB_00102da8;
         pcVar19 = ObjectLayerPairFilter::ShouldCollide;
         lVar7 = *(long*)( *(long*)( param_1 + 0x10 ) + ( ulong )(uVar16 & 0x7fffff) * 8 );
         if (*(code**)( *(long*)param_6 + 0x10 ) == ObjectLayerPairFilter::ShouldCollide) {
            bVar2 = *(byte*)( lVar5 + 0x79 );
         }
 else {
            pcVar19 = (code*)param_6;
            cVar13 = ( **(code**)( *(long*)param_6 + 0x10 ) )(param_6, *(undefined2*)( lVar5 + 0x74 ), *(undefined2*)( lVar7 + 0x74 ));
            if (cVar13 == '\0') goto LAB_00102da8;
            bVar2 = *(byte*)( lVar5 + 0x79 );
         }

         if (( ( ( ( ( bVar2 & 2 ) == 0 ) && ( ( *(byte*)( lVar7 + 0x79 ) & 2 ) == 0 ) ) && ( *(char*)( lVar5 + 0x78 ) != '\x02' ) ) && ( *(char*)( lVar7 + 0x78 ) != '\x02' ) ) && ( ( *(char*)( lVar5 + 0x78 ) != '\x01' || ( ( *(byte*)( lVar7 + 0x79 ) & 1 ) == 0 ) ) )) {
            if (( *(char*)( lVar7 + 0x78 ) != '\x01' ) || ( ( *(byte*)( lVar5 + 0x79 ) & 1 ) == 0 )) goto LAB_00102da8;
            lVar6 = *(long*)( lVar5 + 0x48 );
            cVar13 = *(char*)( lVar7 + 0x76 );
         }
 else {
            lVar6 = *(long*)( lVar5 + 0x48 );
            cVar13 = *(char*)( lVar7 + 0x76 );
         }

         if (lVar6 == 0) {
            if (cVar13 != '\x01') goto LAB_00102da8;
         }
 else if (cVar13 != '\x01') {
            if (*(long*)( lVar7 + 0x48 ) == 0) {
               uVar24 = 0xffffffff;
            }
 else {
               uVar24 = *(uint*)( *(long*)( lVar7 + 0x48 ) + 0x70 );
            }

            if (uVar24 <= *(uint*)( lVar6 + 0x70 )) goto LAB_00102da8;
         }

         uVar14 = (undefined4)lVar6;
         pcVar19 = *(code**)( lVar5 + 0x58 );
         if ((QuadTree*)pcVar19 == (QuadTree*)0x0) {
            pcVar19 = *(code**)( lVar7 + 0x58 );
            if ((QuadTree*)pcVar19 != (QuadTree*)0x0) {
               uVar14 = ( **(code**)( *(long*)pcVar19 + 0x20 ) )(pcVar19, lVar7 + 0x58, lVar5 + 0x58);
               goto LAB_00102d3b;
            }

         }
 else {
            uVar14 = ( **(code**)( *(long*)pcVar19 + 0x20 ) )(pcVar19, lVar5 + 0x58, lVar7 + 0x58);
            LAB_00102d3b:if ((char)uVar14 == '\0') goto LAB_00102da8;
         }

         auVar25._4_4_ = -(uint)(fVar34 < *(float *)(lVar7 + 0x24));
         auVar25._0_4_ = -(uint)(fVar33 < *(float *)(lVar7 + 0x20));
         auVar25._8_4_ = -(uint)(fVar35 < *(float *)(lVar7 + 0x28));
         auVar25._12_4_ = -(uint)(param_4 + fVar11 < *(float *)(lVar7 + 0x2c));
         auVar22._4_4_ = -(uint)(*(float *)(lVar7 + 0x34) < fVar31);
         auVar22._0_4_ = -(uint)(*(float *)(lVar7 + 0x30) < fVar30);
         auVar22._8_4_ = -(uint)(*(float *)(lVar7 + 0x38) < fVar32);
         auVar22._12_4_ = -(uint)(*(float *)(lVar7 + 0x3c) < fVar10 - param_4);
         uVar24 = movmskps(uVar14, auVar22 | auVar25);
         if (( uVar24 & 7 ) == 0) {
            local_250 = CONCAT44(uVar16, uVar4);
            pcVar19 = (code*)param_5;
            ( **(code**)( *(long*)param_5 + 0x28 ) )(param_5, &local_250);
         }

         LAB_00102da8:bVar20 = iVar18 == 0;
         iVar18 = iVar18 + -1;
         if (bVar20) break;
      }
 else {
         if (uVar16 == 0xffffffff) goto LAB_00102da8;
         lVar7 = *(long*)this;
         pfVar17 = (float*)( ( ulong )(uVar16 & 0xff7fffff & *(uint*)( lVar7 + 8 )) * 0x80 + *(long*)( *(long*)( lVar7 + 0x18 ) + ( ulong )(( uVar16 & 0xff7fffff ) >> ( ( byte ) * (undefined4*)( lVar7 + 4 ) & 0x1f )) * 8 ) );
         auVar36._4_4_ = -(uint)(fVar35 < pfVar17[9]);
         auVar36._0_4_ = -(uint)(fVar35 < pfVar17[8]);
         auVar36._8_4_ = -(uint)(fVar35 < pfVar17[10]);
         auVar36._12_4_ = -(uint)(fVar35 < pfVar17[0xb]);
         auVar21._4_4_ = -(uint)(pfVar17[0x11] < fVar31);
         auVar21._0_4_ = -(uint)(pfVar17[0x10] < fVar31);
         auVar21._8_4_ = -(uint)(pfVar17[0x12] < fVar31);
         auVar21._12_4_ = -(uint)(pfVar17[0x13] < fVar31);
         auVar28._4_4_ = -(uint)(pfVar17[0xd] < fVar30);
         auVar28._0_4_ = -(uint)(pfVar17[0xc] < fVar30);
         auVar28._8_4_ = -(uint)(pfVar17[0xe] < fVar30);
         auVar28._12_4_ = -(uint)(pfVar17[0xf] < fVar30);
         auVar26._4_4_ = -(uint)(pfVar17[0x15] < fVar32);
         auVar26._0_4_ = -(uint)(pfVar17[0x14] < fVar32);
         auVar26._8_4_ = -(uint)(pfVar17[0x16] < fVar32);
         auVar26._12_4_ = -(uint)(pfVar17[0x17] < fVar32);
         auVar9._4_4_ = -(uint)(fVar33 < pfVar17[1]);
         auVar9._0_4_ = -(uint)(fVar33 < *pfVar17);
         auVar9._8_4_ = -(uint)(fVar33 < pfVar17[2]);
         auVar9._12_4_ = -(uint)(fVar33 < pfVar17[3]);
         auVar8._4_4_ = -(uint)(fVar34 < pfVar17[5]);
         auVar8._0_4_ = -(uint)(fVar34 < pfVar17[4]);
         auVar8._8_4_ = -(uint)(fVar34 < pfVar17[6]);
         auVar8._12_4_ = -(uint)(fVar34 < pfVar17[7]);
         auVar22 = ( auVar21 | auVar8 | auVar28 | auVar9 | auVar26 | auVar36 ) ^ __LC23;
         uVar16 = movmskps((int)pcVar19, auVar22);
         pcVar19 = (code*)(ulong)uVar16;
         if (uVar16 == 0) goto LAB_00102da8;
         if (iVar18 < 0x7c) {
            fVar12 = pfVar17[0x1b];
            uVar24 = auVar22._8_4_ >> 0x1f;
            uVar27 = auVar22._4_4_ >> 0x1f;
            uVar16 = auVar22._0_4_ >> 0x1f;
            uVar37 = uVar24 & (uint)pfVar17[0x1a] | ~uVar24 & (uint)fVar12;
            uVar24 = (uint)pfVar17[0x19] & uVar27 | ~uVar27 & uVar37;
            uVar27 = uVar37 & uVar27 | ~uVar27 & (uint)fVar12;
            auVar29._0_4_ = (uint)pfVar17[0x18] & uVar16;
            auVar29._4_4_ = uVar24 & uVar16;
            auVar29._8_4_ = uVar27 & uVar16;
            auVar29._12_4_ = (uint)fVar12 & uVar16;
            auVar23._0_4_ = ~uVar16 & uVar24;
            auVar23._4_4_ = ~uVar16 & uVar27;
            auVar23._8_4_ = ~uVar16 & (uint)fVar12;
            auVar23._12_4_ = ~uVar16 & (uint)fVar12;
            *(undefined1(*) [16])( local_248 + iVar18 ) = auVar23 | auVar29;
            iVar15 = __popcountdi2();
            iVar18 = iVar18 + -1 + iVar15;
         }
 else {
            iVar18 = iVar18 + -1;
         }

      }

      uVar16 = local_248[iVar18];
   }
 while ( true );
   param_2 = (BodyID*)( (long)param_2 + 4 );
   if ((uint*)param_2 == puVar1) goto LAB_00102e93;
   goto LAB_00102c00;
}
/* JPH::QuadTree::GetMaxTreeDepth(JPH::QuadTree::NodeID const&) const */uint JPH::QuadTree::GetMaxTreeDepth(QuadTree *this, NodeID *param_1) {
   uint uVar1;
   uint uVar2;
   long lVar3;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined4 local_34;
   long local_30;
   uVar2 = *(uint*)param_1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = 0;
   if (( uVar2 != 0xffffffff ) && ( uVar1 = uVar1 != 0 )) {
      lVar3 = *(long*)this;
      uVar1 = 0;
      lVar3 = ( ulong )(uVar2 & 0xff7fffff & *(uint*)( lVar3 + 8 )) * 0x80 + *(long*)( *(long*)( lVar3 + 0x18 ) + ( ulong )(( uVar2 & 0xff7fffff ) >> ( ( byte ) * (undefined4*)( lVar3 + 4 ) & 0x1f )) * 8 );
      puVar4 = (undefined4*)( lVar3 + 0x60 );
      do {
         local_34 = *puVar4;
         uVar2 = GetMaxTreeDepth(this, (NodeID*)&local_34);
         if (uVar1 < uVar2) {
            uVar1 = uVar2;
         }

         puVar4 = puVar4 + 1;
      }
 while ( puVar4 != (undefined4*)( lVar3 + 0x70 ) );
      uVar1 = uVar1 + 1;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::QuadTree::Init(JPH::FixedSizeFreeList<JPH::QuadTree::Node>&) */void JPH::QuadTree::Init(QuadTree *this, FixedSizeFreeList *param_1) {
   uint uVar1;
   long in_FS_OFFSET;
   bool local_11;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *(FixedSizeFreeList**)this = param_1;
   local_11 = false;
   uVar1 = FixedSizeFreeList<JPH::QuadTree::Node>::ConstructObject<bool&>((FixedSizeFreeList<JPH::QuadTree::Node>*)param_1, &local_11);
   if (uVar1 == 0xffffffff) {
      /* WARNING: Subroutine does not return */
      AllocateNode(SUB81(param_1, 0));
   }

   LOCK();
   *(uint*)( this + ( ( ulong ) * (uint*)( this + 0x4c ) + 0x11 ) * 4 ) = uVar1;
   UNLOCK();
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::QuadTree::AddBodiesFinalize(JPH::Array<JPH::QuadTree::Tracking,
   JPH::STLAllocator<JPH::QuadTree::Tracking> >&, int, JPH::QuadTree::AddState const&) */void JPH::QuadTree::AddBodiesFinalize(QuadTree *this, Array *param_1, int param_2, AddState *param_3) {
   uint uVar1;
   long lVar2;
   char cVar3;
   long lVar4;
   uint *puVar5;
   int iVar6;
   uint uVar7;
   AABox *pAVar8;
   Node *this_00;
   Node *pNVar9;
   uint uVar10;
   uint uVar11;
   long in_FS_OFFSET;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   LOCK();
   this[0x50] = (QuadTree)0x1;
   UNLOCK();
   uVar11 = *(uint*)( this + 0x4c );
   do {
      uVar10 = *(uint*)( this + (ulong)uVar11 * 4 + 0x44 );
      uVar7 = *(uint*)param_3;
      if (( uVar7 & 0x800000 ) != 0) {
         lVar4 = *(long*)this;
         LOCK();
         *(uint*)( ( ulong )(uVar7 & 0xff7fffff & *(uint*)( lVar4 + 8 )) * 0x80 + *(long*)( *(long*)( lVar4 + 0x18 ) + ( ulong )(( uVar7 & 0xff7fffff ) >> ( ( byte ) * (undefined4*)( lVar4 + 4 ) & 0x1f )) * 8 ) + 0x70 ) = uVar10;
         UNLOCK();
      }

      lVar4 = *(long*)this;
      this_00 = (Node*)( ( ulong )(uVar10 & *(uint*)( lVar4 + 8 )) * 0x80 + *(long*)( *(long*)( lVar4 + 0x18 ) + ( ulong )(uVar10 >> ( ( byte ) * (undefined4*)( lVar4 + 4 ) & 0x1f )) * 8 ) );
      iVar6 = 0;
      pNVar9 = this_00 + 0x60;
      do {
         LOCK();
         uVar1 = *(uint*)pNVar9;
         if (uVar1 == 0xffffffff) {
            *(uint*)pNVar9 = uVar7;
         }

         UNLOCK();
         if (uVar1 == 0xffffffff) {
            if (( uVar7 & 0x800000 ) == 0) {
               LOCK();
               *(uint*)( *(long*)( param_1 + 0x10 ) + 4 + ( ulong )(uVar7 & 0x7fffff) * 8 ) = iVar6 * 0x40000000 + uVar10;
               UNLOCK();
            }

            Node::SetChildBounds(this_00, iVar6, (AABox*)( param_3 + 0x10 ));
            goto LAB_00103290;
         }

         iVar6 = iVar6 + 1;
         pNVar9 = pNVar9 + 4;
      }
 while ( iVar6 != 4 );
      cVar3 = TryCreateNewRoot(this, param_1, this + (ulong)uVar11 * 4 + 0x44, *(undefined4*)param_3, (AABox*)( param_3 + 0x10 ), param_2);
   }
 while ( cVar3 == '\0' );
   goto LAB_00103250;
   LAB_00103290:do {
      lVar4 = *(long*)this;
      lVar4 = ( ulong )(uVar10 & *(uint*)( lVar4 + 8 )) * 0x80 + *(long*)( *(long*)( lVar4 + 0x18 ) + ( ulong )(uVar10 >> ( ( byte ) * (undefined4*)( lVar4 + 4 ) & 0x1f )) * 8 );
      LOCK();
      *(undefined4*)( lVar4 + 0x74 ) = 1;
      UNLOCK();
      uVar11 = *(uint*)( lVar4 + 0x70 );
      if (uVar11 == 0xffffffff) goto LAB_00103324;
      lVar4 = *(long*)this;
      lVar4 = ( ulong )(uVar11 & *(uint*)( lVar4 + 8 )) * 0x80 + *(long*)( *(long*)( lVar4 + 0x18 ) + ( ulong )(uVar11 >> ( ( byte ) * (undefined4*)( lVar4 + 4 ) & 0x1f )) * 8 );
      pAVar8 = (AABox*)0x0;
      puVar5 = (uint*)( lVar4 + 0x60 );
      do {
         if (( uVar10 | 0x800000 ) == *puVar5) goto LAB_00103309;
         uVar7 = (int)pAVar8 + 1;
         pAVar8 = (AABox*)(ulong)uVar7;
         puVar5 = puVar5 + 1;
      }
 while ( uVar7 != 4 );
      pAVar8 = (AABox*)0xffffffff;
      LAB_00103309:cVar3 = Node::EncapsulateChildBounds((int)lVar4, pAVar8);
      uVar10 = uVar11;
   }
 while ( cVar3 != '\0' );
   if (*(int*)( lVar4 + 0x74 ) == 0) {
      do {
         lVar4 = *(long*)this;
         lVar4 = ( ulong )(uVar11 & *(uint*)( lVar4 + 8 )) * 0x80 + *(long*)( *(long*)( lVar4 + 0x18 ) + ( ulong )(uVar11 >> ( ( byte ) * (undefined4*)( lVar4 + 4 ) & 0x1f )) * 8 );
         if (*(int*)( lVar4 + 0x74 ) != 0) break;
         LOCK();
         *(undefined4*)( lVar4 + 0x74 ) = 1;
         UNLOCK();
         uVar11 = *(uint*)( lVar4 + 0x70 );
      }
 while ( uVar11 != 0xffffffff );
   }

   LAB_00103324:LOCK();
   *(int*)( this + 0x40 ) = *(int*)( this + 0x40 ) + param_2;
   UNLOCK();
   LAB_00103250:if (lVar2 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::QuadTree::BuildTree(JPH::Array<JPH::Body*, JPH::STLAllocator<JPH::Body*> > const&,
   JPH::Array<JPH::QuadTree::Tracking, JPH::STLAllocator<JPH::QuadTree::Tracking> >&,
   JPH::QuadTree::NodeID*, int, unsigned int, JPH::AABox&) [clone .part.0] */uint JPH::QuadTree::BuildTree(QuadTree *this, Array *param_1, Array *param_2, NodeID *param_3, int param_4, uint param_5, AABox *param_6) {
   undefined4 uVar1;
   int iVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   uint uVar5;
   int iVar6;
   int iVar7;
   Vec3 *pVVar8;
   AABox *pAVar9;
   ulong uVar10;
   int iVar11;
   undefined1 uVar12;
   uint uVar13;
   long lVar14;
   Node *pNVar15;
   NodeID *pNVar17;
   long lVar18;
   AABox *pAVar19;
   Vec3 *pVVar20;
   uint uVar21;
   long lVar22;
   NodeID *pNVar23;
   ulong uVar24;
   long in_FS_OFFSET;
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   float fVar28;
   float fVar29;
   float fVar30;
   float fVar31;
   bool local_88a;
   bool local_889;
   AABox local_888[16];
   undefined1 local_878[16];
   undefined1 local_868[16];
   undefined1 local_858[16];
   uint local_848[2];
   undefined8 uStack_840;
   undefined8 local_838;
   undefined4 uStack_830;
   uint uStack_82c;
   undefined8 local_828[2];
   undefined8 local_818[6];
   undefined1 auStack_7e8[16];
   undefined1 auStack_7d8[1944];
   long local_40;
   FixedSizeFreeList<JPH::QuadTree::Node> *pFVar16;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 != 1) {
      uVar10 = (ulong)param_4;
      lVar14 = uVar10 << 4;
      if (0x7ffffffffffffff < uVar10) {
         lVar14 = -1;
      }

      pVVar8 = (Vec3*)( *Allocate )(lVar14);
      pNVar23 = param_3 + uVar10 * 4;
      pAVar19 = (AABox*)local_868;
      pNVar17 = param_3;
      pVVar20 = pVVar8;
      fVar28 = _LC4;
      fVar29 = _LC4;
      fVar30 = _LC4;
      fVar31 = _LC4;
      if (param_3 < pNVar23) {
         do {
            uVar5 = *(uint*)pNVar17;
            if (( uVar5 & 0x800000 ) == 0) {
               lVar14 = *(long*)( *(long*)( param_1 + 0x10 ) + ( ulong )(uVar5 & 0x7fffff) * 8 );
               auVar27 = *(undefined1(*) [16])( lVar14 + 0x20 );
               auVar26 = *(undefined1(*) [16])( lVar14 + 0x30 );
            }
 else {
               lVar14 = *(long*)this;
               pNVar15 = (Node*)( ( ulong )(uVar5 & 0xff7fffff & *(uint*)( lVar14 + 8 )) * 0x80 + *(long*)( *(long*)( lVar14 + 0x18 ) + ( ulong )(( uVar5 & 0xff7fffff ) >> ( ( byte ) * (undefined4*)( lVar14 + 4 ) & 0x1f )) * 8 ) );
               pAVar9 = (AABox*)Node::GetChildBounds(pNVar15, 0, pAVar19);
               auVar26 = local_858;
               auVar27 = local_868;
               iVar7 = 1;
               do {
                  iVar11 = iVar7 + 1;
                  pAVar9 = (AABox*)Node::GetChildBounds(pNVar15, iVar7, pAVar9);
                  auVar3._4_4_ = local_848[1];
                  auVar3._0_4_ = local_848[0];
                  auVar3._8_8_ = uStack_840;
                  auVar27 = minps(auVar27, auVar3);
                  auVar4._8_4_ = uStack_830;
                  auVar4._0_8_ = local_838;
                  auVar4._12_4_ = uStack_82c;
                  auVar26 = maxps(auVar26, auVar4);
                  iVar7 = iVar11;
               }
 while ( iVar11 != 4 );
            }

            pNVar17 = pNVar17 + 4;
            auVar25._0_4_ = ( auVar26._0_4_ + auVar27._0_4_ ) * fVar28;
            auVar25._4_4_ = ( auVar26._4_4_ + auVar27._4_4_ ) * fVar29;
            auVar25._8_4_ = ( auVar26._8_4_ + auVar27._8_4_ ) * fVar30;
            auVar25._12_4_ = ( auVar26._12_4_ + auVar27._12_4_ ) * fVar31;
            *(undefined1(*) [16])pVVar20 = auVar25;
            pVVar20 = pVVar20 + 0x10;
         }
 while ( pNVar17 < pNVar23 );
      }

      pFVar16 = *(FixedSizeFreeList<JPH::QuadTree::Node>**)this;
      local_88a = param_5 != 0;
      uVar5 = FixedSizeFreeList<JPH::QuadTree::Node>::ConstructObject<bool&>(pFVar16, &local_88a);
      uVar12 = SUB81(pFVar16, 0);
      if (uVar5 != 0xffffffff) {
         local_848[1] = 0xffffffff;
         uStack_82c = 0;
         local_828[0] = __LC3;
         local_828[1] = _UNK_001042a8;
         local_818[0] = __LC1;
         local_818[1] = _UNK_00104298;
         local_848[0] = uVar5;
         sPartition4(param_3, pVVar8, 0, param_4, (int*)&uStack_840);
         uVar10 = 0;
         lVar14 = 0;
         uVar5 = 0xffffffff;
         while (true) {
            do {
               while (true) {
                  while (true) {
                     uVar13 = uVar5 + 1;
                     local_848[lVar14 * 0x10 + 1] = uVar13;
                     iVar7 = (int)uVar10;
                     if ((int)uVar13 < 4) break;
                     if (iVar7 < 1) {
                        if (pVVar8 != (Vec3*)0x0) {
                           ( *_Free )(pVVar8);
                        }

                        *(undefined8*)param_6 = local_828[0];
                        *(undefined8*)( param_6 + 8 ) = local_828[1];
                        uVar5 = local_848[0] | 0x800000;
                        *(undefined8*)( param_6 + 0x10 ) = local_818[0];
                        *(undefined8*)( param_6 + 0x18 ) = local_818[1];
                        goto LAB_00103933;
                     }

                     lVar22 = *(long*)this;
                     lVar18 = (long)(int)( iVar7 - 1U );
                     uVar1 = *(undefined4*)( lVar22 + 4 );
                     auVar27 = minps(*(undefined1(*) [16])( local_828 + lVar18 * 8 ), *(undefined1(*) [16])( auStack_7e8 + lVar18 * 0x40 ));
                     *(undefined1(*) [16])( local_828 + lVar18 * 8 ) = auVar27;
                     auVar27 = maxps(*(undefined1(*) [16])( local_818 + lVar18 * 8 ), *(undefined1(*) [16])( auStack_7d8 + lVar18 * 0x40 ));
                     *(undefined1(*) [16])( local_818 + lVar18 * 8 ) = auVar27;
                     LOCK();
                     *(uint*)( ( ulong )(local_848[lVar14 * 0x10] & *(uint*)( lVar22 + 8 )) * 0x80 + *(long*)( *(long*)( lVar22 + 0x18 ) + ( ulong )(local_848[lVar14 * 0x10] >> ( (byte)uVar1 & 0x1f )) * 8 ) + 0x70 ) = local_848[lVar18 * 0x10];
                     UNLOCK();
                     lVar22 = *(long*)this;
                     pNVar15 = (Node*)( ( ulong )(local_848[lVar18 * 0x10] & *(uint*)( lVar22 + 8 )) * 0x80 + *(long*)( *(long*)( lVar22 + 0x18 ) + ( ulong )(local_848[lVar18 * 0x10] >> ( ( byte ) * (undefined4*)( lVar22 + 4 ) & 0x1f )) * 8 ) );
                     LOCK();
                     *(uint*)( pNVar15 + ( (long)(int)local_848[lVar18 * 0x10 + 1] + 0x18 ) * 4 ) = local_848[lVar14 * 0x10] | 0x800000;
                     UNLOCK();
                     local_858._8_8_ = local_818[lVar14 * 8 + 1];
                     local_858._0_8_ = local_818[lVar14 * 8];
                     uVar10 = ( ulong )(iVar7 - 1U);
                     local_868._8_8_ = local_828[lVar14 * 8 + 1];
                     local_868._0_8_ = local_828[lVar14 * 8];
                     uVar5 = Node::SetChildBounds(pNVar15, local_848[lVar18 * 0x10 + 1], (AABox*)local_868);
                     lVar14 = lVar18;
                  }
;
                  lVar22 = (long)(int)uVar13;
                  iVar11 = *(int*)( (long)&uStack_840 + ( lVar14 * 0x10 + (long)(int)( uVar5 + 2 ) ) * 4 );
                  iVar2 = *(int*)( (long)&uStack_840 + ( lVar14 * 0x10 + lVar22 ) * 4 );
                  iVar6 = iVar11 - iVar2;
                  if (iVar6 != 1) break;
                  uVar5 = *(uint*)( param_3 + (long)iVar2 * 4 );
                  uVar24 = (ulong)uVar5;
                  uVar13 = uVar5 & 0x800000;
                  if (( uVar5 & 0x800000 ) == 0) {
                     lVar18 = *(long*)( *(long*)( param_1 + 0x10 ) + ( ulong )(uVar5 & 0x7fffff) * 8 );
                     auVar27 = *(undefined1(*) [16])( lVar18 + 0x20 );
                     auVar26 = *(undefined1(*) [16])( lVar18 + 0x30 );
                  }
 else {
                     lVar18 = *(long*)this;
                     pNVar15 = (Node*)( ( ulong )(uVar5 & 0xff7fffff & *(uint*)( lVar18 + 8 )) * 0x80 + *(long*)( *(long*)( lVar18 + 0x18 ) + ( ulong )(( uVar5 & 0xff7fffff ) >> ( ( byte ) * (undefined4*)( lVar18 + 4 ) & 0x1f )) * 8 ) );
                     iVar7 = Node::GetChildBounds(pNVar15, 0, local_888);
                     do {
                        iVar7 = Node::GetChildBounds(pNVar15, iVar7, (AABox*)local_868);
                        uVar5 = (uint)uVar24;
                        local_888 = (AABox[16])minps((undefined1[16])local_888, local_868);
                        local_878 = maxps(local_878, local_858);
                        auVar27 = (undefined1[16])local_888;
                        auVar26 = local_878;
                     }
 while ( iVar7 != 4 );
                  }

                  local_858 = auVar26;
                  local_868 = auVar27;
                  lVar18 = *(long*)this;
                  pNVar15 = (Node*)( ( ulong )(local_848[lVar14 * 0x10] & *(uint*)( lVar18 + 8 )) * 0x80 + *(long*)( *(long*)( lVar18 + 0x18 ) + ( ulong )(local_848[lVar14 * 0x10] >> ( ( byte ) * (undefined4*)( lVar18 + 4 ) & 0x1f )) * 8 ) );
                  LOCK();
                  *(uint*)( pNVar15 + ( lVar22 + 0x18 ) * 4 ) = uVar5;
                  UNLOCK();
                  uVar21 = local_848[lVar14 * 0x10 + 1];
                  lVar22 = Node::SetChildBounds(pNVar15, uVar21, (AABox*)local_868);
                  if (uVar13 == 0) {
                     LOCK();
                     *(uint*)( *(long*)( param_2 + 0x10 ) + 4 + ( ulong )(uVar5 & 0x7fffff) * 8 ) = uVar21 * 0x40000000 + *(int*)( (long)local_848 + lVar22 );
                     UNLOCK();
                  }
 else {
                     lVar18 = *(long*)this;
                     LOCK();
                     *(undefined4*)( ( ulong )(uVar5 & 0xff7fffff & *(uint*)( lVar18 + 8 )) * 0x80 + *(long*)( *(long*)( lVar18 + 0x18 ) + ( ulong )(( uVar5 & 0xff7fffff ) >> ( ( byte ) * (undefined4*)( lVar18 + 4 ) & 0x1f )) * 8 ) + 0x70 ) = *(undefined4*)( (long)local_848 + lVar22 );
                     UNLOCK();
                  }

                  auVar27 = minps(*(undefined1(*) [16])( local_828 + lVar14 * 8 ), local_868);
                  *(undefined1(*) [16])( local_828 + lVar14 * 8 ) = auVar27;
                  auVar27 = maxps(*(undefined1(*) [16])( local_818 + lVar14 * 8 ), local_858);
                  *(undefined1(*) [16])( local_818 + lVar14 * 8 ) = auVar27;
                  uVar5 = local_848[lVar14 * 0x10 + 1];
               }
;
               uVar5 = uVar13;
            }
 while ( iVar6 < 2 );
            uVar5 = ( &uStack_82c )[lVar14 * 0x10];
            pFVar16 = *(FixedSizeFreeList<JPH::QuadTree::Node>**)this;
            local_889 = uVar5 + 1 < param_5;
            uVar13 = FixedSizeFreeList<JPH::QuadTree::Node>::ConstructObject<bool&>(pFVar16, &local_889);
            uVar12 = SUB81(pFVar16, 0);
            if (uVar13 == 0xffffffff) break;
            lVar14 = (long)(int)( iVar7 + 1U );
            ( &uStack_82c )[lVar14 * 0x10] = uVar5 + 1;
            local_848[lVar14 * 0x10] = uVar13;
            local_848[lVar14 * 0x10 + 1] = 0xffffffff;
            local_828[lVar14 * 8] = __LC3;
            local_828[lVar14 * 8 + 1] = _UNK_001042a8;
            local_818[lVar14 * 8] = __LC1;
            local_818[lVar14 * 8 + 1] = _UNK_00104298;
            sPartition4(param_3, pVVar8, iVar2, iVar11, (int*)( &uStack_840 + lVar14 * 8 ));
            uVar5 = local_848[lVar14 * 0x10 + 1];
            uVar10 = ( ulong )(iVar7 + 1U);
         }
;
      }

      /* WARNING: Subroutine does not return */
      AllocateNode((bool)uVar12);
   }

   uVar5 = *(uint*)param_3;
   if (( uVar5 & 0x800000 ) == 0) {
      lVar14 = *(long*)( param_1 + 0x10 );
   }
 else {
      lVar14 = *(long*)this;
      LOCK();
      *(undefined4*)( ( ulong )(uVar5 & 0xff7fffff & *(uint*)( lVar14 + 8 )) * 0x80 + *(long*)( *(long*)( lVar14 + 0x18 ) + ( ulong )(( uVar5 & 0xff7fffff ) >> ( ( byte ) * (undefined4*)( lVar14 + 4 ) & 0x1f )) * 8 ) + 0x70 ) = 0xffffffff;
      UNLOCK();
      uVar5 = *(uint*)param_3;
      lVar14 = *(long*)( param_1 + 0x10 );
      if (( uVar5 & 0x800000 ) != 0) {
         lVar14 = *(long*)this;
         pAVar19 = (AABox*)local_848;
         pNVar15 = (Node*)Node::GetChildBounds((Node*)( ( ulong )(uVar5 & 0xff7fffff & *(uint*)( lVar14 + 8 )) * 0x80 + *(long*)( *(long*)( lVar14 + 0x18 ) + ( ulong )(( uVar5 & 0xff7fffff ) >> ( ( byte ) * (undefined4*)( lVar14 + 4 ) & 0x1f )) * 8 ) ), 0, (AABox*)local_868);
         iVar7 = 1;
         do {
            iVar11 = iVar7 + 1;
            pNVar15 = (Node*)Node::GetChildBounds(pNVar15, iVar7, pAVar19);
            auVar27._4_4_ = local_848[1];
            auVar27._0_4_ = local_848[0];
            auVar27._8_8_ = uStack_840;
            local_868 = minps(local_868, auVar27);
            auVar26._8_4_ = uStack_830;
            auVar26._0_8_ = local_838;
            auVar26._12_4_ = uStack_82c;
            local_858 = maxps(local_858, auVar26);
            iVar7 = iVar11;
         }
 while ( iVar11 != 4 );
         local_838 = local_858._0_8_;
         uStack_830 = local_858._8_4_;
         uStack_82c = local_858._12_4_;
         local_848[0] = local_868._0_4_;
         local_848[1] = local_868._4_4_;
         uStack_840 = local_868._8_8_;
         goto LAB_00103a60;
      }

   }

   lVar14 = *(long*)( lVar14 + ( ulong )(uVar5 & 0x7fffff) * 8 );
   uStack_840 = *(undefined8*)( lVar14 + 0x28 );
   local_848[0] = ( uint ) * (undefined8*)( lVar14 + 0x20 );
   local_848[1] = ( uint )(( ulong ) * (undefined8*)( lVar14 + 0x20 ) >> 0x20);
   local_838 = *(undefined8*)( lVar14 + 0x30 );
   uStack_830 = ( undefined4 ) * (undefined8*)( lVar14 + 0x38 );
   uStack_82c = ( uint )(( ulong ) * (undefined8*)( lVar14 + 0x38 ) >> 0x20);
   LAB_00103a60:uVar5 = *(uint*)param_3;
   *(ulong*)param_6 = CONCAT44(local_848[1], local_848[0]);
   *(undefined8*)( param_6 + 8 ) = uStack_840;
   *(undefined8*)( param_6 + 0x10 ) = local_838;
   *(ulong*)( param_6 + 0x18 ) = CONCAT44(uStack_82c, uStack_830);
   LAB_00103933:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
/* JPH::QuadTree::BuildTree(JPH::Array<JPH::Body*, JPH::STLAllocator<JPH::Body*> > const&,
   JPH::Array<JPH::QuadTree::Tracking, JPH::STLAllocator<JPH::QuadTree::Tracking> >&,
   JPH::QuadTree::NodeID*, int, unsigned int, JPH::AABox&) */undefined8 JPH::QuadTree::BuildTree(QuadTree *this, Array *param_1, Array *param_2, NodeID *param_3, int param_4, uint param_5, AABox *param_6) {
   undefined8 uVar1;
   uVar1 = cInvalidBounds._8_8_;
   if (param_4 != 0) {
      uVar1 = BuildTree(this, param_1, param_2, param_3, param_4, param_5, param_6);
      return uVar1;
   }

   *(undefined8*)param_6 = cInvalidBounds._0_8_;
   *(undefined8*)( param_6 + 8 ) = uVar1;
   uVar1 = cInvalidBounds._24_8_;
   *(undefined8*)( param_6 + 0x10 ) = cInvalidBounds._16_8_;
   *(undefined8*)( param_6 + 0x18 ) = uVar1;
   return 0xffffffff;
}
/* JPH::QuadTree::AddBodiesPrepare(JPH::Array<JPH::Body*, JPH::STLAllocator<JPH::Body*> > const&,
   JPH::Array<JPH::QuadTree::Tracking, JPH::STLAllocator<JPH::QuadTree::Tracking> >&, JPH::BodyID*,
   int, JPH::QuadTree::AddState&) */void JPH::QuadTree::AddBodiesPrepare(QuadTree *this, Array *param_1, Array *param_2, BodyID *param_3, int param_4, AddState *param_5) {
   undefined8 uVar1;
   undefined4 uVar2;
   uVar1 = cInvalidBounds._8_8_;
   if (param_4 == 0) {
      *(undefined8*)( param_5 + 0x10 ) = cInvalidBounds._0_8_;
      *(undefined8*)( param_5 + 0x18 ) = uVar1;
      uVar1 = cInvalidBounds._24_8_;
      *(undefined8*)( param_5 + 0x20 ) = cInvalidBounds._16_8_;
      *(undefined8*)( param_5 + 0x28 ) = uVar1;
      *(undefined4*)param_5 = 0xffffffff;
      return;
   }

   uVar2 = BuildTree(this, param_1, param_2, (NodeID*)param_3, param_4, 0, (AABox*)( param_5 + 0x10 ));
   *(undefined4*)param_5 = uVar2;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::QuadTree::UpdatePrepare(JPH::Array<JPH::Body*, JPH::STLAllocator<JPH::Body*> > const&,
   JPH::Array<JPH::QuadTree::Tracking, JPH::STLAllocator<JPH::QuadTree::Tracking> >&,
   JPH::QuadTree::UpdateState&, bool) */void JPH::QuadTree::UpdatePrepare(QuadTree *this, Array *param_1, Array *param_2, UpdateState *param_3, bool param_4) {
   int iVar1;
   NodeID *pNVar2;
   long lVar3;
   NodeID *pNVar4;
   uint uVar5;
   undefined1 uVar6;
   uint uVar7;
   uint *puVar8;
   Node *this_00;
   FixedSizeFreeList<JPH::QuadTree::Node> *pFVar9;
   long lVar10;
   long in_FS_OFFSET;
   bool local_26a;
   bool local_269;
   undefined4 local_268;
   undefined4 uStack_264;
   undefined4 uStack_260;
   undefined4 uStack_25c;
   undefined4 local_258;
   undefined4 uStack_254;
   undefined4 uStack_250;
   undefined4 uStack_24c;
   uint local_248[130];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   LOCK();
   this[0x50] = (QuadTree)0x0;
   UNLOCK();
   uVar7 = *(uint*)( this + 0x4c );
   pNVar2 = (NodeID*)( *Allocate )(( ulong ) * (uint*)( this + 0x40 ) << 2);
   iVar1 = 0;
   uVar7 = *(uint*)( this + (ulong)uVar7 * 4 + 0x44 ) | 0x800000;
   local_248[0] = uVar7;
   pNVar4 = pNVar2;
   do {
      if (( uVar7 & 0x800000 ) == 0) {
         LAB_00103c60:*(uint*)pNVar4 = uVar7;
         pNVar4 = pNVar4 + 4;
      }
 else {
         lVar3 = *(long*)this;
         uVar5 = uVar7 & 0xff7fffff;
         lVar3 = ( ulong )(uVar5 & *(uint*)( lVar3 + 8 )) * 0x80 + *(long*)( *(long*)( lVar3 + 0x18 ) + ( ulong )(uVar5 >> ( ( byte ) * (undefined4*)( lVar3 + 4 ) & 0x1f )) * 8 );
         if (( *(int*)( lVar3 + 0x74 ) == 0 ) && ( !param_4 )) goto LAB_00103c60;
         puVar8 = (uint*)( lVar3 + 0x60 );
         do {
            uVar7 = *puVar8;
            if (uVar7 != 0xffffffff) {
               if (iVar1 < 0x80) {
                  lVar10 = (long)iVar1;
                  iVar1 = iVar1 + 1;
                  local_248[lVar10] = uVar7;
               }
 else {
                  *(uint*)pNVar4 = uVar7;
                  pNVar4 = pNVar4 + 4;
               }

            }

            puVar8 = puVar8 + 1;
         }
 while ( puVar8 != (uint*)( lVar3 + 0x70 ) );
         lVar3 = *(long*)this;
         *(undefined4*)( ( ulong )(uVar5 & *(uint*)( lVar3 + 8 )) * 0x80 + *(long*)( *(long*)( lVar3 + 0x18 ) + ( ulong )(uVar5 >> ( ( byte ) * (undefined4*)( lVar3 + 4 ) & 0x1f )) * 8 ) + 0x7c ) = 0xffffffff;
         if (*(int*)( this + 8 ) == -1) {
            *(uint*)( this + 8 ) = uVar5;
         }
 else {
            *(uint*)( ( ulong )(*(uint*)( this + 0xc ) & *(uint*)( lVar3 + 8 )) * 0x80 + *(long*)( *(long*)( lVar3 + 0x18 ) + ( ulong )(*(uint*)( this + 0xc ) >> ( ( byte ) * (undefined4*)( lVar3 + 4 ) & 0x1f )) * 8 ) + 0x7c ) = uVar5;
         }

         *(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
         *(uint*)( this + 0xc ) = uVar5;
      }

      iVar1 = iVar1 + -1;
      if (iVar1 < 0) break;
      uVar7 = local_248[iVar1];
   }
 while ( true );
   iVar1 = (int)( (long)pNVar4 - (long)pNVar2 >> 2 );
   if (iVar1 == 0) {
      pFVar9 = *(FixedSizeFreeList<JPH::QuadTree::Node>**)this;
      local_269 = false;
      uVar7 = FixedSizeFreeList<JPH::QuadTree::Node>::ConstructObject<bool&>(pFVar9, &local_269);
      uVar6 = SUB81(pFVar9, 0);
      if (uVar7 == 0xffffffff) {
         LAB_00103e9b:/* WARNING: Subroutine does not return */AllocateNode((bool)uVar6);
      }

      uVar7 = uVar7 | 0x800000;
   }
 else {
      local_268 = _LC16;
      uStack_264 = _LC16;
      uStack_260 = _LC16;
      uStack_25c = _LC16;
      local_258 = _LC14;
      uStack_254 = _LC14;
      uStack_250 = _LC14;
      uStack_24c = _LC14;
      uVar7 = BuildTree(this, param_1, param_2, pNVar2, iVar1, 5, (AABox*)&local_268);
      if (( uVar7 & 0x800000 ) == 0) {
         pFVar9 = *(FixedSizeFreeList<JPH::QuadTree::Node>**)this;
         local_26a = false;
         uVar5 = FixedSizeFreeList<JPH::QuadTree::Node>::ConstructObject<bool&>(pFVar9, &local_26a);
         uVar6 = SUB81(pFVar9, 0);
         if (uVar5 == 0xffffffff) goto LAB_00103e9b;
         lVar3 = *(long*)this;
         this_00 = (Node*)( ( ulong )(uVar5 & *(uint*)( lVar3 + 8 )) * 0x80 + *(long*)( *(long*)( lVar3 + 0x18 ) + ( ulong )(uVar5 >> ( ( byte ) * (undefined4*)( lVar3 + 4 ) & 0x1f )) * 8 ) );
         uVar5 = Node::SetChildBounds(this_00, 0, (AABox*)&local_268);
         LOCK();
         *(uint*)( this_00 + 0x60 ) = uVar7;
         UNLOCK();
         LOCK();
         *(uint*)( *(long*)( param_2 + 0x10 ) + 4 + ( ulong )(uVar7 & 0x7fffff) * 8 ) = uVar5;
         UNLOCK();
         uVar7 = uVar5 | 0x800000;
      }

   }

   if (pNVar2 != (NodeID*)0x0) {
      ( *_Free )(pNVar2);
   }

   *(uint*)param_3 = uVar7;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::ObjectLayerPairFilter::ShouldCollide(unsigned short, unsigned short) const */undefined8 JPH::ObjectLayerPairFilter::ShouldCollide(ushort param_1, ushort param_2) {
   return 1;
}
/* WARNING: Control flow encountered bad instruction data *//* unsigned int JPH::FixedSizeFreeList<JPH::QuadTree::Node>::ConstructObject<bool&>(bool&) */uint JPH::FixedSizeFreeList<JPH::QuadTree::Node>::ConstructObject<bool&>(FixedSizeFreeList<JPH::QuadTree::Node> *this, bool *param_1) {
   FixedSizeFreeList<JPH::QuadTree::Node> *pFVar1;
   FixedSizeFreeList<JPH::QuadTree::Node> *pFVar2;
   pthread_mutex_t *__mutex;
   long lVar3;
   undefined4 uVar4;
   uint uVar5;
   ulong uVar6;
   int iVar7;
   uint uVar8;
   undefined8 uVar9;
   Node *pNVar10;
   uint uVar11;
   long lVar12;
   pFVar1 = this + 0x70;
   do {
      lVar12 = *(long*)pFVar1;
      uVar11 = (uint)lVar12;
      if (uVar11 == 0xffffffff) {
         LOCK();
         pFVar1 = this + 0x78;
         uVar11 = *(uint*)pFVar1;
         *(uint*)pFVar1 = *(uint*)pFVar1 + 1;
         UNLOCK();
         if (*(uint*)( this + 0x10 ) <= uVar11) {
            __mutex = (pthread_mutex_t*)( this + 0x40 );
            iVar7 = pthread_mutex_lock(__mutex);
            if (iVar7 != 0) {
               std::__throw_system_error(iVar7);
               /* WARNING: Bad instruction - Truncating control flow here */
               halt_baddata();
            }

            uVar8 = *(uint*)( this + 0x10 );
            if (uVar8 <= uVar11) {
               uVar5 = *(uint*)this;
               do {
                  uVar6 = (ulong)uVar8 / (ulong)uVar5;
                  if (*(int*)( this + 0xc ) == (int)uVar6) {
                     pthread_mutex_unlock(__mutex);
                     return 0xffffffff;
                  }

                  lVar12 = *(long*)( this + 0x18 );
                  uVar9 = ( *AlignedAllocate )((ulong)uVar5 << 7, 0x40);
                  uVar5 = *(uint*)this;
                  *(undefined8*)( lVar12 + uVar6 * 8 ) = uVar9;
                  uVar8 = *(int*)( this + 0x10 ) + uVar5;
                  *(uint*)( this + 0x10 ) = uVar8;
               }
 while ( uVar8 <= uVar11 );
            }

            pthread_mutex_unlock(__mutex);
         }

         pNVar10 = (Node*)( ( ulong )(uVar11 & *(uint*)( this + 8 )) * 0x80 + *(long*)( *(long*)( this + 0x18 ) + ( ulong )(uVar11 >> ( ( byte ) * (undefined4*)( this + 4 ) & 0x1f )) * 8 ) );
         QuadTree::Node::Node(pNVar10, *param_1);
         *(uint*)( pNVar10 + 0x7c ) = uVar11;
         return uVar11;
      }

      uVar4 = *(undefined4*)( ( ulong )(uVar11 & *(uint*)( this + 8 )) * 0x80 + *(long*)( *(long*)( this + 0x18 ) + ( ulong )(uVar11 >> ( ( byte ) * (undefined4*)( this + 4 ) & 0x1f )) * 8 ) + 0x7c );
      LOCK();
      pFVar2 = this + 0x68;
      iVar7 = *(int*)pFVar2;
      *(int*)pFVar2 = *(int*)pFVar2 + 1;
      UNLOCK();
      LOCK();
      lVar3 = *(long*)pFVar1;
      if (lVar12 == lVar3) {
         *(long*)pFVar1 = CONCAT44(iVar7, uVar4);
      }

      UNLOCK();
   }
 while ( lVar12 != lVar3 );
   pNVar10 = (Node*)( ( ulong )(uVar11 & *(uint*)( this + 8 )) * 0x80 + *(long*)( *(long*)( this + 0x18 ) + ( ulong )(uVar11 >> ( ( byte ) * (undefined4*)( this + 4 ) & 0x1f )) * 8 ) );
   QuadTree::Node::Node(pNVar10, *param_1);
   *(int*)( pNVar10 + 0x7c ) = (int)lVar12;
   return uVar11;
}
/* JPH::QuadTree::TryCreateNewRoot(JPH::Array<JPH::QuadTree::Tracking,
   JPH::STLAllocator<JPH::QuadTree::Tracking> >&, std::atomic<unsigned int>&, JPH::QuadTree::NodeID,
   JPH::AABox const&, int) */undefined8 JPH::QuadTree::TryCreateNewRoot(QuadTree *this, long param_1, uint *param_2, uint param_4, AABox *param_5, int param_6) {
   long *plVar1;
   uint *puVar2;
   uint uVar3;
   long lVar4;
   uint uVar5;
   uint uVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   uint uVar10;
   undefined4 uVar11;
   undefined8 uVar12;
   FixedSizeFreeList<JPH::QuadTree::Node> *this_00;
   Node *this_01;
   ulong uVar13;
   long in_FS_OFFSET;
   bool local_69;
   undefined4 local_68;
   undefined4 uStack_64;
   undefined4 uStack_60;
   undefined4 uStack_5c;
   undefined4 local_58;
   undefined4 uStack_54;
   undefined4 uStack_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = *param_2;
   local_69 = true;
   this_00 = *(FixedSizeFreeList<JPH::QuadTree::Node>**)this;
   uVar6 = *(uint*)( this_00 + 8 );
   lVar7 = *(long*)( *(long*)( this_00 + 0x18 ) + ( ulong )(uVar5 >> ( ( byte ) * (undefined4*)( this_00 + 4 ) & 0x1f )) * 8 );
   uVar10 = FixedSizeFreeList<JPH::QuadTree::Node>::ConstructObject<bool&>(this_00, &local_69);
   uVar13 = (ulong)uVar10;
   if (uVar10 == 0xffffffff) {
      /* WARNING: Subroutine does not return */
      AllocateNode(SUB81(this_00, 0));
   }

   lVar8 = *(long*)this;
   this_01 = (Node*)( ( ulong )(uVar10 & *(uint*)( lVar8 + 8 )) * 0x80 + *(long*)( *(long*)( lVar8 + 0x18 ) + ( ulong )(uVar10 >> ( ( byte ) * (undefined4*)( lVar8 + 4 ) & 0x1f )) * 8 ) );
   LOCK();
   *(uint*)( this_01 + 0x60 ) = uVar5 | 0x800000;
   UNLOCK();
   local_68 = _LC1;
   uStack_64 = _LC1;
   uStack_60 = _LC1;
   uStack_5c = _LC1;
   local_58 = _LC3;
   uStack_54 = _LC3;
   uStack_50 = _LC3;
   uStack_4c = _LC3;
   uVar11 = Node::SetChildBounds(this_01, 0, (AABox*)&local_68);
   LOCK();
   *(undefined4*)( this_01 + 100 ) = uVar11;
   UNLOCK();
   Node::SetChildBounds(this_01, 1, param_5);
   uVar10 = (uint)uVar13;
   if (( param_4 & 0x800000 ) == 0) {
      LOCK();
      uVar3 = *param_2;
      if (uVar5 == uVar3) {
         *param_2 = uVar10;
      }

      UNLOCK();
      if (uVar5 != uVar3) {
         LAB_001041c5:lVar7 = *(long*)this;
         plVar1 = (long*)( lVar7 + 0x70 );
         uVar5 = *(uint*)( lVar7 + 8 );
         lVar8 = *(long*)( *(long*)( lVar7 + 0x18 ) + ( ulong )(uVar10 >> ( ( byte ) * (undefined4*)( lVar7 + 4 ) & 0x1f )) * 8 );
         do {
            lVar9 = *plVar1;
            *(int*)( ( ulong )(uVar10 & uVar5) * 0x80 + lVar8 + 0x7c ) = (int)lVar9;
            LOCK();
            puVar2 = (uint*)( lVar7 + 0x68 );
            uVar6 = *puVar2;
            *puVar2 = *puVar2 + 1;
            UNLOCK();
            LOCK();
            lVar4 = *plVar1;
            if (lVar9 == lVar4) {
               *plVar1 = ( (ulong)uVar6 << 0x20 ) + uVar13;
            }

            UNLOCK();
         }
 while ( lVar9 != lVar4 );
         uVar12 = 0;
         goto LAB_0010416a;
      }

      LOCK();
      *(uint*)( *(long*)( param_1 + 0x10 ) + 4 + ( ulong )(param_4 & 0x7fffff) * 8 ) = uVar10 + 0x40000000;
      UNLOCK();
   }
 else {
      lVar8 = *(long*)this;
      LOCK();
      *(uint*)( ( ulong )(param_4 & 0xff7fffff & *(uint*)( lVar8 + 8 )) * 0x80 + *(long*)( *(long*)( lVar8 + 0x18 ) + ( ulong )(( param_4 & 0xff7fffff ) >> ( ( byte ) * (undefined4*)( lVar8 + 4 ) & 0x1f )) * 8 ) + 0x70 ) = uVar10;
      UNLOCK();
      LOCK();
      uVar3 = *param_2;
      if (uVar5 == uVar3) {
         *param_2 = uVar10;
      }

      UNLOCK();
      if (uVar5 != uVar3) goto LAB_001041c5;
   }

   LOCK();
   *(uint*)( ( ulong )(uVar5 & uVar6) * 0x80 + lVar7 + 0x70 ) = uVar10;
   UNLOCK();
   LOCK();
   *(int*)( this + 0x40 ) = *(int*)( this + 0x40 ) + param_6;
   UNLOCK();
   uVar12 = 1;
   LAB_0010416a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar12;
}
/* JPH::QuadTree::Node::Node(bool) */void JPH::QuadTree::Node::_GLOBAL__sub_I_Node(void) {
   if (DVec3::cTrue == '\0') {
      DVec3::cTrue = '\x01';
      DVec3::cTrue = _LC23;
   }

   cInvalidBounds._0_4_ = _LC3;
   cInvalidBounds._4_4_ = _LC3;
   cInvalidBounds._8_4_ = _LC3;
   cInvalidBounds._12_4_ = _LC3;
   cInvalidBounds._16_4_ = _LC1;
   cInvalidBounds._20_4_ = _LC1;
   cInvalidBounds._24_4_ = _LC1;
   cInvalidBounds._28_4_ = _LC1;
   return;
}

