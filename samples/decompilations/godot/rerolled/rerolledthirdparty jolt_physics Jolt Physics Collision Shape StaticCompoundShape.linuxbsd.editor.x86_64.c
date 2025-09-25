/* JPH::StaticCompoundShapeSettings::sCreateRTTI(JPH::RTTI&) */void JPH::StaticCompoundShapeSettings::sCreateRTTI(RTTI *param_1) {
   int iVar1;
   iVar1 = JPH::GetRTTIOfType((CompoundShapeSettings*)0x0);
   JPH::RTTI::AddBaseClass(param_1, iVar1);
   return;
}
/* JPH::StaticCompoundShape::SaveBinaryState(JPH::StreamOut&) const */void JPH::StaticCompoundShape::SaveBinaryState(StaticCompoundShape *this, StreamOut *param_1) {
   char cVar1;
   long in_FS_OFFSET;
   uint local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   JPH::CompoundShape::SaveBinaryState((StreamOut*)this);
   local_24 = ( uint ) * (undefined8*)( this + 0x70 );
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_24, 4);
   cVar1 = ( **(code**)( *(long*)param_1 + 0x18 ) )(param_1);
   if (cVar1 == '\0') {
      ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, *(undefined8*)( this + 0x80 ), (ulong)local_24 << 6);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::StaticCompoundShape::sPartition(unsigned int*, JPH::AABox*, int, int&) [clone .part.0] */void JPH::StaticCompoundShape::sPartition(uint *param_1, AABox *param_2, int param_3, int *param_4) {
   float *pfVar1;
   AABox *pAVar2;
   AABox *pAVar3;
   AABox *pAVar4;
   AABox *pAVar5;
   AABox *pAVar6;
   AABox *pAVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   float fVar10;
   AABox *pAVar11;
   long lVar12;
   AABox *pAVar13;
   int iVar14;
   int iVar15;
   uint uVar16;
   ulong uVar17;
   long lVar18;
   long in_FS_OFFSET;
   undefined1 auVar19[16];
   float fVar20;
   float fVar24;
   undefined1 auVar21[12];
   float fVar23;
   undefined1 auVar22[16];
   undefined1 auVar25[12];
   undefined1 auVar26[16];
   float fVar27;
   float fVar28;
   float fVar29;
   float fVar30;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   long local_30;
   fVar10 = _LC5;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 < param_2 + (long)param_3 * 0x20) {
      auVar22._4_4_ = _LC1;
      auVar22._0_4_ = _LC1;
      auVar22._8_4_ = _LC1;
      auVar22._12_4_ = _LC1;
      auVar26._4_4_ = _LC3;
      auVar26._0_4_ = _LC3;
      auVar26._8_4_ = _LC3;
      auVar26._12_4_ = _LC3;
      pAVar11 = param_2;
      do {
         pAVar13 = pAVar11 + 0x10;
         pAVar2 = pAVar11 + 0x14;
         pAVar3 = pAVar11 + 0x18;
         pAVar4 = pAVar11 + 0x1c;
         fVar27 = *(float*)pAVar11;
         pAVar5 = pAVar11 + 4;
         pAVar6 = pAVar11 + 8;
         pAVar7 = pAVar11 + 0xc;
         pAVar11 = pAVar11 + 0x20;
         auVar19._0_4_ = ( *(float*)pAVar13 + fVar27 ) * _LC5;
         auVar19._4_4_ = ( *(float*)pAVar2 + *(float*)pAVar5 ) * _LC5;
         auVar19._8_4_ = ( *(float*)pAVar3 + *(float*)pAVar6 ) * _LC5;
         auVar19._12_4_ = ( *(float*)pAVar4 + *(float*)pAVar7 ) * _LC5;
         auVar26 = minps(auVar26, auVar19);
         auVar25 = auVar26._0_12_;
         auVar22 = maxps(auVar22, auVar19);
         auVar21 = auVar22._0_12_;
      }
 while ( pAVar11 < param_2 + (long)param_3 * 0x20 );
      fVar27 = auVar26._0_4_ + auVar22._0_4_;
      fVar28 = auVar26._4_4_ + auVar22._4_4_;
      fVar29 = auVar26._8_4_ + auVar22._8_4_;
      fVar30 = auVar26._12_4_ + auVar22._12_4_;
   }
 else {
      fVar27 = 0.0;
      fVar28 = 0.0;
      fVar29 = 0.0;
      fVar30 = 0.0;
      auVar21._4_4_ = _LC1;
      auVar21._0_4_ = _LC1;
      auVar21._8_4_ = _LC1;
      auVar25._4_4_ = _LC3;
      auVar25._0_4_ = _LC3;
      auVar25._8_4_ = _LC3;
   }

   fVar20 = auVar21._0_4_ - auVar25._0_4_;
   fVar23 = auVar21._4_4_ - auVar25._4_4_;
   fVar24 = auVar21._8_4_ - auVar25._8_4_;
   if (fVar20 <= fVar23) {
      uVar16 = ( fVar23 < fVar24 ) + 1;
   }
 else {
      uVar16 = ( uint )(fVar20 < fVar24) * 2;
   }

   uVar17 = (ulong)uVar16;
   local_58 = CONCAT44(fVar28, fVar27);
   uStack_50 = CONCAT44(fVar30, fVar29);
   fVar27 = _LC5 * *(float*)( (long)&local_58 + uVar17 * 4 );
   iVar15 = 0;
   iVar14 = param_3;
   LAB_00100178:do {
      if (iVar14 <= iVar15) {
         LAB_00100258:if (( iVar15 < 1 ) || ( param_3 <= iVar15 )) {
            iVar15 = param_3 >> 1;
         }

         *param_4 = iVar15;
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      while (true) {
         pAVar11 = param_2 + (long)iVar15 * 0x20;
         while (true) {
            local_58 = CONCAT44(( *(float*)( pAVar11 + 0x14 ) + *(float*)( pAVar11 + 4 ) ) * fVar10, ( *(float*)( pAVar11 + 0x10 ) + *(float*)pAVar11 ) * fVar10);
            uStack_50 = CONCAT44(( *(float*)( pAVar11 + 0x1c ) + *(float*)( pAVar11 + 0xc ) ) * fVar10, ( *(float*)( pAVar11 + 0x18 ) + *(float*)( pAVar11 + 8 ) ) * fVar10);
            pfVar1 = (float*)( (long)&local_58 + uVar17 * 4 );
            if (fVar27 < *pfVar1 || fVar27 == *pfVar1) break;
            iVar15 = iVar15 + 1;
            pAVar11 = pAVar11 + 0x20;
            if (iVar14 == iVar15) goto LAB_00100178;
         }
;
         if (iVar14 <= iVar15) goto LAB_00100258;
         pAVar11 = param_2 + (long)iVar14 * 0x20;
         while (true) {
            local_58 = CONCAT44(( *(float*)( pAVar11 + -0xc ) + *(float*)( pAVar11 + -0x1c ) ) * fVar10, ( *(float*)( pAVar11 + -0x10 ) + *(float*)( pAVar11 + -0x20 ) ) * fVar10);
            uStack_50 = CONCAT44(( *(float*)( pAVar11 + -4 ) + *(float*)( pAVar11 + -0x14 ) ) * fVar10, ( *(float*)( pAVar11 + -8 ) + *(float*)( pAVar11 + -0x18 ) ) * fVar10);
            if (*(float*)( (long)&local_58 + uVar17 * 4 ) < fVar27) break;
            iVar14 = iVar14 + -1;
            pAVar11 = pAVar11 + -0x20;
            if (iVar14 == iVar15) goto LAB_00100178;
         }
;
         if (iVar14 <= iVar15) break;
         lVar18 = (long)iVar14;
         lVar12 = (long)iVar15;
         iVar14 = iVar14 + -1;
         iVar15 = iVar15 + 1;
         pAVar11 = param_2 + lVar18 * 0x20 + -0x20;
         uVar16 = param_1[lVar12];
         pAVar13 = param_2 + lVar12 * 0x20;
         uVar8 = *(undefined8*)pAVar11;
         uVar9 = *(undefined8*)( pAVar11 + 8 );
         local_58 = *(undefined8*)pAVar13;
         uStack_50 = *(undefined8*)( pAVar13 + 8 );
         param_1[lVar12] = param_1[lVar18 + -1];
         local_48 = *(undefined8*)( pAVar13 + 0x10 );
         uStack_40 = *(undefined8*)( pAVar13 + 0x18 );
         param_1[lVar18 + -1] = uVar16;
         *(undefined8*)pAVar13 = uVar8;
         *(undefined8*)( pAVar13 + 8 ) = uVar9;
         uVar8 = *(undefined8*)( pAVar11 + 0x18 );
         *(undefined8*)( pAVar13 + 0x10 ) = *(undefined8*)( pAVar11 + 0x10 );
         *(undefined8*)( pAVar13 + 0x18 ) = uVar8;
         *(undefined8*)pAVar11 = local_58;
         *(undefined8*)( pAVar11 + 8 ) = uStack_50;
         *(undefined8*)( pAVar11 + 0x10 ) = local_48;
         *(undefined8*)( pAVar11 + 0x18 ) = uStack_40;
         if (iVar14 <= iVar15) goto LAB_00100258;
      }
;
   }
 while ( true );
}
/* _FUN() */void JPH::StaticCompoundShape::sRegister()::{lambda()#1}::_FUN(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*Allocate)(0x90);
  *(undefined1 (*) [16])(puVar2 + 4) = (undefined1  [16])0x0;
  uVar1 = _LC3;
  *(undefined2 *)(puVar2 + 3) = 0x701;
  *(undefined4 *)(puVar2 + 6) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x34) = uVar1;
  *(undefined4 *)(puVar2 + 7) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x3c) = uVar1;
  uVar1 = _LC1;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)(puVar2 + 8) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x44) = uVar1;
  *(undefined4 *)(puVar2 + 9) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x4c) = uVar1;
  puVar2[2] = 0;
  puVar2[0xc] = 0;
  *(undefined4 *)(puVar2 + 0xd) = 0x7f7fffff;
  *puVar2 = &PTR__StaticCompoundShape_00109ee0;
  puVar2[0x10] = 0;
  *(undefined1 (*) [16])(puVar2 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 0xe) = (undefined1  [16])0x0;
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::{lambda()#1}::_FUN(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*Allocate)(0x58);
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[10] = 0;
  *puVar1 = &PTR_GetRTTI_00109ea8;
  *(undefined1 (*) [16])(puVar1 + 8) = (undefined1  [16])0x0;
  return;
}



/* void std::__cxx11::basic_string<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::_M_construct<char*>(char*, char*, std::forward_iterator_tag) [clone .isra.0] */

void std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
     _M_construct<char*>(long *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  undefined1 *__dest;
  ulong __n;
  
  __n = param_3 - (long)param_2;
  if (__n < 0x10) {
    __dest = (undefined1 *)*param_1;
    if (__n == 1) {
      *__dest = *param_2;
      param_1[1] = 1;
      *(undefined1 *)(*param_1 + 1) = 0;
      return;
    }
    if (__n == 0) {
      param_1[1] = 0;
      *__dest = 0;
      return;
    }
  }
  else {
    if ((long)__n < 0) {
      std::__throw_length_error("basic_string::_M_create");
      if (JPH::GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::rtti == '\0') {
        iVar1 = __cxa_guard_acquire(&JPH::GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::rtti);
        if (iVar1 != 0) {
          JPH::RTTI::RTTI((RTTI *)JPH::GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::rtti,
                          "StaticCompoundShapeSettings",0x58,
                          JPH::GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::{lambda()#1}::_FUN,
                          JPH::GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::{lambda(void*)#1}::
                          _FUN,JPH::StaticCompoundShapeSettings::sCreateRTTI);
          __cxa_atexit(JPH::RTTI::~RTTI,JPH::GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::rtti,
                       &__dso_handle);
          __cxa_guard_release(&JPH::GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::rtti);
          return;
        }
      }
      return;
    }
    __dest = (undefined1 *)(*JPH::Allocate)(__n + 1);
    param_1[2] = __n;
    *param_1 = (long)__dest;
  }
  memcpy(__dest,param_2,__n);
  param_1[1] = __n;
  *(undefined1 *)(*param_1 + __n) = 0;
  return;
}



/* JPH::StaticCompoundShapeSettings::GetRTTI() const */

undefined1 * JPH::StaticCompoundShapeSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::rtti,
                      "StaticCompoundShapeSettings",0x58,
                      GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::rtti,&__dso_handle)
      ;
      __cxa_guard_release(&GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::rtti;
}



/* JPH::StaticCompoundShape::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::StaticCompoundShape::RestoreBinaryState(StaticCompoundShape *this,StreamIn *param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::CompoundShape::RestoreBinaryState((StreamIn *)this);
  local_24 = (uint)*(undefined8 *)(this + 0x70);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_24,4);
  cVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
    if (cVar2 == '\0') {
      uVar5 = (ulong)local_24;
      uVar3 = *(undefined8 *)(this + 0x80);
      uVar4 = uVar5;
      if (*(ulong *)(this + 0x78) < uVar5) {
        uVar3 = (*Reallocate)(uVar3,*(ulong *)(this + 0x78) << 6,uVar5 << 6);
        *(ulong *)(this + 0x78) = uVar5;
        uVar4 = (ulong)local_24;
        *(undefined8 *)(this + 0x80) = uVar3;
      }
      lVar1 = *(long *)param_1;
      *(ulong *)(this + 0x70) = uVar5;
      (**(code **)(lVar1 + 0x10))(param_1,uVar3,uVar4 << 6);
      goto LAB_00100544;
    }
  }
  *(undefined8 *)(this + 0x70) = 0;
LAB_00100544:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_1 != (void *)0x0) {
    plVar3 = *(long **)((long)param_1 + 0x50);
    *(code **)param_1 = __popcountdi2;
    if (plVar3 != (long *)0x0) {
      if ((*(long *)((long)param_1 + 0x40) != 0) &&
         (plVar4 = plVar3 + *(long *)((long)param_1 + 0x40) * 8, plVar3 < plVar4)) {
        do {
          plVar2 = (long *)plVar3[1];
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar1 = plVar2 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar2 + 8))();
            }
          }
          plVar2 = (long *)*plVar3;
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar1 = plVar2 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar2 + 0x18))();
            }
          }
          plVar3 = plVar3 + 8;
        } while (plVar3 < plVar4);
        plVar3 = *(long **)((long)param_1 + 0x50);
      }
      *(undefined8 *)((long)param_1 + 0x40) = 0;
      (*Free)(plVar3);
    }
    *(undefined8 **)param_1 = &CollisionDispatch::sCastShape;
    if (*(char *)((long)param_1 + 0x38) == '\x01') {
      plVar3 = *(long **)((long)param_1 + 0x18);
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar4 = plVar3 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
    }
    else if ((*(char *)((long)param_1 + 0x38) == '\x02') &&
            (*(long *)((long)param_1 + 0x18) != (long)param_1 + 0x28)) {
      (*Free)();
    }
                    /* WARNING: Could not recover jumptable at 0x00100671. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::StaticCompoundShape::CollidePoint(JPH::Vec3, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::CollidePointResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) const */

void JPH::StaticCompoundShape::CollidePoint
               (undefined8 param_1,float param_2,long *param_3,uint *param_4,long param_5,
               undefined8 param_6)

{
  undefined8 *puVar1;
  uint uVar2;
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
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [14];
  float fVar28;
  float fVar29;
  ulong uVar30;
  undefined1 (*pauVar31) [16];
  byte bVar32;
  long lVar33;
  uint uVar34;
  long *plVar35;
  int iVar36;
  uint uVar37;
  long in_FS_OFFSET;
  bool bVar38;
  uint uVar39;
  float fVar40;
  uint uVar41;
  uint uVar42;
  float fVar43;
  uint uVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  float fVar48;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  undefined1 auVar49 [12];
  int iVar54;
  undefined1 auVar50 [16];
  int iVar60;
  int iVar61;
  int iVar62;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  uint uVar63;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  uint uVar69;
  int iVar70;
  int iVar71;
  undefined1 auVar72 [12];
  uint uVar79;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  int iVar80;
  uint uVar82;
  int iVar83;
  uint uVar85;
  int iVar86;
  undefined1 auVar75 [16];
  int iVar81;
  int iVar84;
  int iVar87;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  int iVar92;
  float fVar93;
  uint uVar95;
  uint uVar96;
  uint uVar97;
  uint uVar98;
  int iVar99;
  uint uVar100;
  uint uVar101;
  uint uVar102;
  uint uVar103;
  int iVar104;
  undefined1 auVar94 [16];
  uint uVar105;
  uint uVar106;
  uint uVar107;
  uint uVar108;
  int iVar109;
  uint uVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  uint uVar118;
  uint uVar119;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  uint uVar120;
  uint uVar121;
  uint uVar123;
  float fVar124;
  uint uVar129;
  uint uVar131;
  uint uVar132;
  uint uVar134;
  undefined1 auVar125 [16];
  uint uVar135;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  uint uVar122;
  uint uVar130;
  uint uVar133;
  uint uVar136;
  undefined1 auVar128 [16];
  uint uVar137;
  uint uVar138;
  uint uVar142;
  uint uVar143;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  uint uVar144;
  float fVar145;
  undefined1 auVar146 [16];
  float fVar147;
  undefined1 auVar148 [16];
  float fVar149;
  float fVar150;
  undefined1 auVar151 [16];
  float fVar152;
  undefined1 auVar153 [12];
  undefined1 auVar154 [16];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  uint uStack_250;
  int iStack_24c;
  uint auStack_248 [2];
  undefined8 auStack_240 [64];
  long local_40;
  
  uVar34 = *param_4;
  uVar2 = param_4[1];
  local_2c8._0_4_ = (float)param_1;
  fVar28 = (float)local_2c8;
  local_2c8._4_4_ = (float)((ulong)param_1 >> 0x20);
  fVar29 = local_2c8._4_4_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar37 = (int)param_3[10] - 1;
  bVar32 = (byte)uVar2;
  if (uVar37 != 0) {
    iVar36 = 0x1f;
    if (uVar37 != 0) {
      for (; uVar37 >> iVar36 == 0; iVar36 = iVar36 + -1) {
      }
    }
    uVar37 = iVar36 + 1;
    uVar34 = uVar34 & ~((int)(1L << ((byte)uVar37 & 0x3f)) + -1 << (bVar32 & 0x1f));
  }
  auStack_248[0] = 0;
  uVar30 = 0;
  iVar36 = 0;
  plVar35 = param_3;
  do {
    iVar45 = (int)uVar30;
    if (iVar45 != 0x7fffffff) {
      if (iVar45 < 0) {
        puVar1 = (undefined8 *)(param_3[0xc] + (ulong)(iVar45 + 0x80000000U) * 0x28);
        fVar19 = *(float *)(puVar1 + 1);
        fVar20 = *(float *)((long)puVar1 + 0xc);
        fVar21 = *(float *)(puVar1 + 2);
        uStack_250 = iVar45 + 0x80000000U << (bVar32 & 0x1f) | uVar34;
        iStack_24c = uVar2 + uVar37;
        fVar40 = __LC12;
        uVar39 = _UNK_0010a084;
        fVar43 = _UNK_0010a088;
        fVar112 = _LC22;
        if (*(char *)((long)puVar1 + 0x24) == '\0') {
          fVar112 = *(float *)((long)puVar1 + 0x14);
          fVar40 = *(float *)((long)puVar1 + 0x14);
          uVar39 = *(uint *)(puVar1 + 3);
          fVar43 = *(float *)((long)puVar1 + 0x1c);
          fVar111 = _LC22 - (fVar43 * fVar43 +
                            *(float *)(puVar1 + 3) * *(float *)(puVar1 + 3) +
                            fVar112 * fVar112 + 0.0);
          fVar112 = 0.0;
          if (0.0 <= fVar111) {
            fVar112 = SQRT(fVar111);
          }
        }
        fVar40 = (float)((uint)fVar40 ^ _LC33);
        fVar111 = (float)(uVar39 ^ _UNK_0010a0f4);
        fVar43 = (float)((uint)fVar43 ^ _UNK_0010a0f8);
        fVar112 = (float)((uint)fVar112 ^ _UNK_0010a0fc);
        fVar93 = fVar40 + fVar40;
        fVar145 = fVar111 + fVar111;
        plVar35 = (long *)*puVar1;
        fVar147 = (fVar43 + fVar43) * fVar43;
        fVar48 = (fVar43 + fVar43) * fVar112;
        fVar149 = (_LC22 - fVar40 * fVar93) - fVar145 * fVar111;
        fVar113 = fVar93 * fVar43 + fVar145 * fVar112;
        fVar124 = fVar93 * fVar43 - fVar145 * fVar112;
        fVar152 = fVar43 * fVar145 - fVar93 * fVar112;
        fVar43 = fVar43 * fVar145 + fVar93 * fVar112;
        fVar150 = fVar111 * fVar93 - fVar48;
        fVar48 = fVar48 + fVar111 * fVar93;
        fVar112 = (_LC22 - fVar145 * fVar111) - fVar147;
        fVar40 = (_LC22 - fVar147) - fVar40 * fVar93;
        local_2c8 = CONCAT44(fVar152 * param_2 + fVar28 * fVar48 + fVar29 * fVar40 +
                             (0.0 - (fVar19 * fVar48 + fVar20 * fVar40 + fVar21 * fVar152)),
                             fVar113 * param_2 + fVar28 * fVar112 + fVar29 * fVar150 +
                             (0.0 - (fVar19 * fVar112 + fVar20 * fVar150 + fVar21 * fVar113)));
        uStack_2c0._0_4_ =
             fVar149 * param_2 + fVar28 * fVar124 + fVar29 * fVar43 +
             (0.0 - (fVar19 * fVar124 + fVar20 * fVar43 + fVar21 * fVar149));
        uStack_2c0._4_4_ = param_2 * 0.0 + fVar28 * 0.0 + fVar29 * 0.0 + 1.0;
        (**(code **)(*plVar35 + 0xa8))(local_2c8,uStack_2c0,plVar35,&uStack_250,param_5,param_6);
        if (*(float *)(param_5 + 8) <= _LC1) goto LAB_00100e90;
      }
      else {
        pauVar31 = (undefined1 (*) [16])(uVar30 * 0x40 + param_3[0x10]);
        auVar94._4_4_ = _UNK_0010a0b4;
        auVar94._0_4_ = __LC16;
        auVar94._8_4_ = _UNK_0010a0b8;
        auVar94._12_4_ = _UNK_0010a0bc;
        auVar50 = *pauVar31;
        auVar141 = pauVar31[1];
        auVar8._10_2_ = 0;
        auVar8._0_10_ = auVar50._0_10_;
        auVar8._12_2_ = auVar50._6_2_;
        auVar14._8_2_ = auVar50._4_2_;
        auVar14._0_8_ = auVar50._0_8_;
        auVar14._10_4_ = auVar8._10_4_;
        auVar22._6_8_ = 0;
        auVar22._0_6_ = auVar14._8_6_;
        auVar73._6_8_ = SUB148(auVar22 << 0x40,6);
        auVar73._4_2_ = auVar50._2_2_;
        auVar73._0_2_ = auVar50._0_2_;
        auVar73._2_2_ = 0;
        auVar73._14_2_ = 0;
        auVar94 = auVar94 & auVar73;
        auVar50 = __LC13 & auVar73;
        iVar45 = auVar50._0_4_ * 0x2000;
        iVar54 = auVar50._4_4_ * 0x2000;
        iVar57 = auVar50._8_4_ * 0x2000;
        iVar60 = auVar50._12_4_ * 0x2000;
        auVar114._0_4_ = __LC14 + iVar45;
        auVar114._4_4_ = _UNK_0010a0a4 + iVar54;
        auVar114._8_4_ = _UNK_0010a0a8 + iVar57;
        auVar114._12_4_ = _UNK_0010a0ac + iVar60;
        uVar63 = (int)-(uint)(auVar94._0_4_ == __LC16) >> 0x1f;
        uVar66 = (int)-(uint)(auVar94._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar67 = (int)-(uint)(auVar94._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar68 = (int)-(uint)(auVar94._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar88 = (int)-(uint)(auVar94._0_4_ == 0) >> 0x1f;
        uVar95 = (int)-(uint)(auVar94._4_4_ == 0) >> 0x1f;
        uVar100 = (int)-(uint)(auVar94._8_4_ == 0) >> 0x1f;
        uVar105 = (int)-(uint)(auVar94._12_4_ == 0) >> 0x1f;
        auVar115 = auVar114 | __LC17;
        auVar125._4_4_ = _UNK_0010a0b4;
        auVar125._0_4_ = __LC16;
        auVar125._8_4_ = _UNK_0010a0b8;
        auVar125._12_4_ = _UNK_0010a0bc;
        auVar50 = *pauVar31;
        auVar73 = auVar73 & __LC21;
        uVar39 = auVar50._8_4_;
        auVar72._0_8_ = auVar50._8_8_;
        auVar72._8_4_ = uVar39;
        auVar3._10_2_ = 0;
        auVar3._0_10_ = auVar72._0_10_;
        auVar3._12_2_ = auVar50._14_2_;
        auVar9._8_2_ = auVar50._12_2_;
        auVar9._0_8_ = auVar72._0_8_;
        auVar9._10_4_ = auVar3._10_4_;
        auVar23._6_8_ = 0;
        auVar23._0_6_ = auVar9._8_6_;
        auVar15._4_2_ = auVar50._10_2_;
        auVar15._0_4_ = uVar39;
        auVar15._6_8_ = SUB148(auVar23 << 0x40,6);
        auVar74._0_4_ = uVar39 & 0xffff;
        auVar74._4_10_ = auVar15._4_10_;
        auVar74._14_2_ = 0;
        auVar125 = auVar125 & auVar74;
        auVar50 = __LC13 & auVar74;
        auVar74 = auVar74 & __LC21;
        iVar46 = auVar50._0_4_ * 0x2000;
        iVar55 = auVar50._4_4_ * 0x2000;
        iVar58 = auVar50._8_4_ * 0x2000;
        iVar61 = auVar50._12_4_ * 0x2000;
        auVar139._0_4_ = __LC14 + iVar46;
        auVar139._4_4_ = _UNK_0010a0a4 + iVar55;
        auVar139._8_4_ = _UNK_0010a0a8 + iVar58;
        auVar139._12_4_ = _UNK_0010a0ac + iVar61;
        uVar89 = (int)-(uint)(auVar125._0_4_ == __LC16) >> 0x1f;
        uVar96 = (int)-(uint)(auVar125._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar101 = (int)-(uint)(auVar125._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar106 = (int)-(uint)(auVar125._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar121 = (int)-(uint)(auVar125._0_4_ == 0) >> 0x1f;
        uVar129 = (int)-(uint)(auVar125._4_4_ == 0) >> 0x1f;
        uVar132 = (int)-(uint)(auVar125._8_4_ == 0) >> 0x1f;
        uVar135 = (int)-(uint)(auVar125._12_4_ == 0) >> 0x1f;
        auVar140 = auVar139 | __LC17;
        auVar50 = pauVar31[1];
        auVar4._10_2_ = 0;
        auVar4._0_10_ = auVar50._0_10_;
        auVar4._12_2_ = auVar50._6_2_;
        auVar10._8_2_ = auVar50._4_2_;
        auVar10._0_8_ = auVar50._0_8_;
        auVar10._10_4_ = auVar4._10_4_;
        auVar24._6_8_ = 0;
        auVar24._0_6_ = auVar10._8_6_;
        auVar116._6_8_ = SUB148(auVar24 << 0x40,6);
        auVar116._4_2_ = auVar50._2_2_;
        auVar116._0_2_ = auVar50._0_2_;
        auVar116._2_2_ = 0;
        auVar116._14_2_ = 0;
        auVar94 = __LC13 & auVar116;
        auVar50._4_4_ = _UNK_0010a0b4;
        auVar50._0_4_ = __LC16;
        auVar50._8_4_ = _UNK_0010a0b8;
        auVar50._12_4_ = _UNK_0010a0bc;
        iVar47 = auVar94._0_4_ * 0x2000;
        iVar56 = auVar94._4_4_ * 0x2000;
        iVar59 = auVar94._8_4_ * 0x2000;
        iVar62 = auVar94._12_4_ * 0x2000;
        auVar50 = auVar50 & auVar116;
        auVar126._0_4_ = __LC14 + iVar47;
        auVar126._4_4_ = _UNK_0010a0a4 + iVar56;
        auVar126._8_4_ = _UNK_0010a0a8 + iVar59;
        auVar126._12_4_ = _UNK_0010a0ac + iVar62;
        auVar116 = auVar116 & __LC21;
        uVar90 = (int)-(uint)(auVar50._0_4_ == 0) >> 0x1f;
        uVar97 = (int)-(uint)(auVar50._4_4_ == 0) >> 0x1f;
        uVar102 = (int)-(uint)(auVar50._8_4_ == 0) >> 0x1f;
        uVar107 = (int)-(uint)(auVar50._12_4_ == 0) >> 0x1f;
        uVar69 = (int)-(uint)(auVar50._0_4_ == __LC16) >> 0x1f;
        uVar79 = (int)-(uint)(auVar50._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar82 = (int)-(uint)(auVar50._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar85 = (int)-(uint)(auVar50._12_4_ == _UNK_0010a0bc) >> 0x1f;
        auVar94 = auVar126 | __LC17;
        auVar117._4_4_ = _UNK_0010a0b4;
        auVar117._0_4_ = __LC16;
        auVar117._8_4_ = _UNK_0010a0b8;
        auVar117._12_4_ = _UNK_0010a0bc;
        uVar39 = auVar141._8_4_;
        auVar49._0_8_ = auVar141._8_8_;
        auVar49._8_4_ = uVar39;
        auVar5._10_2_ = 0;
        auVar5._0_10_ = auVar49._0_10_;
        auVar5._12_2_ = auVar141._14_2_;
        auVar11._8_2_ = auVar141._12_2_;
        auVar11._0_8_ = auVar49._0_8_;
        auVar11._10_4_ = auVar5._10_4_;
        auVar25._6_8_ = 0;
        auVar25._0_6_ = auVar11._8_6_;
        auVar16._4_2_ = auVar141._10_2_;
        auVar16._0_4_ = uVar39;
        auVar16._6_8_ = SUB148(auVar25 << 0x40,6);
        auVar51._0_4_ = uVar39 & 0xffff;
        auVar51._4_10_ = auVar16._4_10_;
        auVar51._14_2_ = 0;
        auVar117 = auVar117 & auVar51;
        auVar50 = __LC13 & auVar51;
        auVar51 = auVar51 & __LC21;
        iVar70 = auVar50._0_4_ * 0x2000;
        iVar80 = auVar50._4_4_ * 0x2000;
        iVar83 = auVar50._8_4_ * 0x2000;
        iVar86 = auVar50._12_4_ * 0x2000;
        auVar127._0_4_ = __LC14 + iVar70;
        auVar127._4_4_ = _UNK_0010a0a4 + iVar80;
        auVar127._8_4_ = _UNK_0010a0a8 + iVar83;
        auVar127._12_4_ = _UNK_0010a0ac + iVar86;
        uVar110 = (int)-(uint)(auVar117._0_4_ == 0) >> 0x1f;
        uVar118 = (int)-(uint)(auVar117._4_4_ == 0) >> 0x1f;
        uVar119 = (int)-(uint)(auVar117._8_4_ == 0) >> 0x1f;
        uVar120 = (int)-(uint)(auVar117._12_4_ == 0) >> 0x1f;
        uVar91 = (int)-(uint)(auVar117._0_4_ == __LC16) >> 0x1f;
        uVar98 = (int)-(uint)(auVar117._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar103 = (int)-(uint)(auVar117._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar108 = (int)-(uint)(auVar117._12_4_ == _UNK_0010a0bc) >> 0x1f;
        auVar125 = auVar127 | __LC17;
        auVar50 = pauVar31[2];
        auVar141._4_4_ = _UNK_0010a0b4;
        auVar141._0_4_ = __LC16;
        auVar141._8_4_ = _UNK_0010a0b8;
        auVar141._12_4_ = _UNK_0010a0bc;
        auVar6._10_2_ = 0;
        auVar6._0_10_ = auVar50._0_10_;
        auVar6._12_2_ = auVar50._6_2_;
        auVar12._8_2_ = auVar50._4_2_;
        auVar12._0_8_ = auVar50._0_8_;
        auVar12._10_4_ = auVar6._10_4_;
        auVar26._6_8_ = 0;
        auVar26._0_6_ = auVar12._8_6_;
        auVar17._4_2_ = auVar50._2_2_;
        auVar17._0_4_ = auVar50._0_4_;
        auVar17._6_8_ = SUB148(auVar26 << 0x40,6);
        auVar75._0_4_ = auVar50._0_4_ & 0xffff;
        auVar75._4_10_ = auVar17._4_10_;
        auVar75._14_2_ = 0;
        auVar141 = auVar141 & auVar75;
        auVar50 = __LC13 & auVar75;
        auVar75 = auVar75 & __LC21;
        iVar92 = auVar50._0_4_ * 0x2000;
        iVar99 = auVar50._4_4_ * 0x2000;
        iVar104 = auVar50._8_4_ * 0x2000;
        iVar109 = auVar50._12_4_ * 0x2000;
        auVar154._0_4_ = __LC14 + iVar92;
        auVar154._4_4_ = _UNK_0010a0a4 + iVar99;
        auVar154._8_4_ = _UNK_0010a0a8 + iVar104;
        auVar154._12_4_ = _UNK_0010a0ac + iVar109;
        uVar122 = (int)-(uint)(auVar141._0_4_ == __LC16) >> 0x1f;
        uVar130 = (int)-(uint)(auVar141._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar133 = (int)-(uint)(auVar141._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar136 = (int)-(uint)(auVar141._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar138 = (int)-(uint)(auVar141._0_4_ == 0) >> 0x1f;
        uVar142 = (int)-(uint)(auVar141._4_4_ == 0) >> 0x1f;
        uVar143 = (int)-(uint)(auVar141._8_4_ == 0) >> 0x1f;
        uVar144 = (int)-(uint)(auVar141._12_4_ == 0) >> 0x1f;
        auVar117 = auVar154 | __LC17;
        auVar50 = pauVar31[2];
        auVar128._4_4_ = _UNK_0010a0b4;
        auVar128._0_4_ = __LC16;
        auVar128._8_4_ = _UNK_0010a0b8;
        auVar128._12_4_ = _UNK_0010a0bc;
        uVar39 = auVar50._8_4_;
        auVar153._0_8_ = auVar50._8_8_;
        auVar153._8_4_ = uVar39;
        auVar7._10_2_ = 0;
        auVar7._0_10_ = auVar153._0_10_;
        auVar7._12_2_ = auVar50._14_2_;
        auVar13._8_2_ = auVar50._12_2_;
        auVar13._0_8_ = auVar153._0_8_;
        auVar13._10_4_ = auVar7._10_4_;
        auVar27._6_8_ = 0;
        auVar27._0_6_ = auVar13._8_6_;
        auVar18._4_2_ = auVar50._10_2_;
        auVar18._0_4_ = uVar39;
        auVar18._6_8_ = SUB148(auVar27 << 0x40,6);
        auVar64._0_4_ = uVar39 & 0xffff;
        auVar64._4_10_ = auVar18._4_10_;
        auVar64._14_2_ = 0;
        auVar128 = auVar128 & auVar64;
        auVar50 = __LC13 & auVar64;
        auVar64 = __LC21 & auVar64;
        iVar71 = auVar50._0_4_ * 0x2000;
        iVar81 = auVar50._4_4_ * 0x2000;
        iVar84 = auVar50._8_4_ * 0x2000;
        iVar87 = auVar50._12_4_ * 0x2000;
        auVar65._0_4_ = auVar64._0_4_ << 0x10;
        auVar65._4_4_ = auVar64._4_4_ << 0x10;
        auVar65._8_4_ = auVar64._8_4_ << 0x10;
        auVar65._12_4_ = auVar64._12_4_ << 0x10;
        auVar151._0_4_ = __LC14 + iVar71;
        auVar151._4_4_ = _UNK_0010a0a4 + iVar81;
        auVar151._8_4_ = _UNK_0010a0a8 + iVar84;
        auVar151._12_4_ = _UNK_0010a0ac + iVar87;
        uVar39 = (int)-(uint)(__LC16 == auVar128._0_4_) >> 0x1f;
        uVar41 = (int)-(uint)(_UNK_0010a0b4 == auVar128._4_4_) >> 0x1f;
        uVar42 = (int)-(uint)(_UNK_0010a0b8 == auVar128._8_4_) >> 0x1f;
        uVar44 = (int)-(uint)(_UNK_0010a0bc == auVar128._12_4_) >> 0x1f;
        uVar123 = (int)-(uint)(auVar128._0_4_ == 0) >> 0x1f;
        uVar131 = (int)-(uint)(auVar128._4_4_ == 0) >> 0x1f;
        uVar134 = (int)-(uint)(auVar128._8_4_ == 0) >> 0x1f;
        uVar137 = (int)-(uint)(auVar128._12_4_ == 0) >> 0x1f;
        auVar141 = auVar151 | __LC17;
        auVar146._0_4_ = (uint)((float)(iVar71 + __LC18) + _LC20) & uVar123;
        auVar146._4_4_ = (uint)((float)(iVar81 + _UNK_0010a0d4) + _LC20) & uVar131;
        auVar146._8_4_ = (uint)((float)(iVar84 + _UNK_0010a0d8) + _LC20) & uVar134;
        auVar146._12_4_ = (uint)((float)(iVar87 + _UNK_0010a0dc) + _LC20) & uVar137;
        auVar50 = pauVar31[3];
        auVar148._0_4_ = ~uVar123 & (uVar39 & auVar141._0_4_ | ~uVar39 & auVar151._0_4_);
        auVar148._4_4_ = ~uVar131 & (uVar41 & auVar141._4_4_ | ~uVar41 & auVar151._4_4_);
        auVar148._8_4_ = ~uVar134 & (uVar42 & auVar141._8_4_ | ~uVar42 & auVar151._8_4_);
        auVar148._12_4_ = ~uVar137 & (uVar44 & auVar141._12_4_ | ~uVar44 & auVar151._12_4_);
        auVar65 = auVar65 | auVar146 | auVar148;
        auVar52._4_4_ =
             -(uint)((float)(auVar73._4_4_ << 0x10 |
                            (uint)((float)(iVar54 + _UNK_0010a0d4) + _LC20) & uVar95 |
                            ~uVar95 & (uVar66 & auVar115._4_4_ | ~uVar66 & auVar114._4_4_)) <=
                     fVar28 &&
                    fVar28 <= (float)(auVar51._4_4_ << 0x10 |
                                     (uint)((float)(iVar80 + _UNK_0010a0d4) + _LC20) & uVar118 |
                                     ~uVar118 & (uVar98 & auVar125._4_4_ | ~uVar98 & auVar127._4_4_)
                                     ));
        auVar52._0_4_ =
             -(uint)((float)(auVar73._0_4_ << 0x10 |
                            (uint)((float)(iVar45 + __LC18) + _LC20) & uVar88 |
                            ~uVar88 & (uVar63 & auVar115._0_4_ | ~uVar63 & auVar114._0_4_)) <=
                     fVar28 &&
                    fVar28 <= (float)(auVar51._0_4_ << 0x10 |
                                     (uint)((float)(iVar70 + __LC18) + _LC20) & uVar110 |
                                     ~uVar110 & (uVar91 & auVar125._0_4_ | ~uVar91 & auVar127._0_4_)
                                     ));
        auVar76._0_4_ =
             -(uint)(fVar29 <= (float)(auVar75._0_4_ << 0x10 |
                                      (uint)((float)(iVar92 + __LC18) + _LC20) & uVar138 |
                                      ~uVar138 &
                                      (uVar122 & auVar117._0_4_ | ~uVar122 & auVar154._0_4_)) &&
                    (float)(auVar74._0_4_ << 0x10 |
                           (uint)((float)(iVar46 + __LC18) + _LC20) & uVar121 |
                           ~uVar121 & (uVar89 & auVar140._0_4_ | ~uVar89 & auVar139._0_4_)) <=
                    fVar29);
        auVar76._4_4_ =
             -(uint)(fVar29 <= (float)(auVar75._4_4_ << 0x10 |
                                      (uint)((float)(iVar99 + _UNK_0010a0d4) + _LC20) & uVar142 |
                                      ~uVar142 &
                                      (uVar130 & auVar117._4_4_ | ~uVar130 & auVar154._4_4_)) &&
                    (float)(auVar74._4_4_ << 0x10 |
                           (uint)((float)(iVar55 + _UNK_0010a0d4) + _LC20) & uVar129 |
                           ~uVar129 & (uVar96 & auVar140._4_4_ | ~uVar96 & auVar139._4_4_)) <=
                    fVar29);
        auVar76._8_4_ =
             -(uint)(fVar29 <= (float)(auVar75._8_4_ << 0x10 |
                                      (uint)((float)(iVar104 + _UNK_0010a0d8) + _LC20) & uVar143 |
                                      ~uVar143 &
                                      (uVar133 & auVar117._8_4_ | ~uVar133 & auVar154._8_4_)) &&
                    (float)(auVar74._8_4_ << 0x10 |
                           (uint)((float)(iVar58 + _UNK_0010a0d8) + _LC20) & uVar132 |
                           ~uVar132 & (uVar101 & auVar140._8_4_ | ~uVar101 & auVar139._8_4_)) <=
                    fVar29);
        auVar76._12_4_ =
             -(uint)(fVar29 <= (float)(auVar75._12_4_ << 0x10 |
                                      (uint)((float)(iVar109 + _UNK_0010a0dc) + _LC20) & uVar144 |
                                      ~uVar144 &
                                      (uVar136 & auVar117._12_4_ | ~uVar136 & auVar154._12_4_)) &&
                    (float)(auVar74._12_4_ << 0x10 |
                           (uint)((float)(iVar61 + _UNK_0010a0dc) + _LC20) & uVar135 |
                           ~uVar135 & (uVar106 & auVar140._12_4_ | ~uVar106 & auVar139._12_4_)) <=
                    fVar29);
        auVar52._8_4_ =
             -(uint)((float)(auVar73._8_4_ << 0x10 |
                            (uint)((float)(iVar57 + _UNK_0010a0d8) + _LC20) & uVar100 |
                            ~uVar100 & (uVar67 & auVar115._8_4_ | ~uVar67 & auVar114._8_4_)) <=
                     fVar28 &&
                    fVar28 <= (float)(auVar51._8_4_ << 0x10 |
                                     (uint)((float)(iVar83 + _UNK_0010a0d8) + _LC20) & uVar119 |
                                     ~uVar119 &
                                     (uVar103 & auVar125._8_4_ | ~uVar103 & auVar127._8_4_)));
        auVar52._12_4_ =
             -(uint)((float)(auVar73._12_4_ << 0x10 |
                            (uint)((float)(iVar60 + _UNK_0010a0dc) + _LC20) & uVar105 |
                            ~uVar105 & (uVar68 & auVar115._12_4_ | ~uVar68 & auVar114._12_4_)) <=
                     fVar28 &&
                    fVar28 <= (float)(auVar51._12_4_ << 0x10 |
                                     (uint)((float)(iVar86 + _UNK_0010a0dc) + _LC20) & uVar120 |
                                     ~uVar120 &
                                     (uVar108 & auVar125._12_4_ | ~uVar108 & auVar127._12_4_)));
        uVar42 = auVar50._12_4_;
        auVar53._0_4_ =
             -(uint)((float)(auVar116._0_4_ << 0x10 |
                            (uint)((float)(iVar47 + __LC18) + _LC20) & uVar90 |
                            ~uVar90 & (uVar69 & auVar94._0_4_ | ~uVar69 & auVar126._0_4_)) <=
                     param_2 && param_2 <= auVar65._0_4_);
        auVar53._4_4_ =
             -(uint)((float)(auVar116._4_4_ << 0x10 |
                            (uint)((float)(iVar56 + _UNK_0010a0d4) + _LC20) & uVar97 |
                            ~uVar97 & (uVar79 & auVar94._4_4_ | ~uVar79 & auVar126._4_4_)) <=
                     param_2 && param_2 <= auVar65._4_4_);
        auVar53._8_4_ =
             -(uint)((float)(auVar116._8_4_ << 0x10 |
                            (uint)((float)(iVar59 + _UNK_0010a0d8) + _LC20) & uVar102 |
                            ~uVar102 & (uVar82 & auVar94._8_4_ | ~uVar82 & auVar126._8_4_)) <=
                     param_2 && param_2 <= auVar65._8_4_);
        auVar53._12_4_ =
             -(uint)((float)(auVar116._12_4_ << 0x10 |
                            (uint)((float)(iVar62 + _UNK_0010a0dc) + _LC20) & uVar107 |
                            ~uVar107 & (uVar85 & auVar94._12_4_ | ~uVar85 & auVar126._12_4_)) <=
                     param_2 && param_2 <= auVar65._12_4_);
        auVar53 = auVar52 & auVar76 & auVar53;
        uVar39 = movmskps((int)plVar35,auVar53);
        plVar35 = (long *)(ulong)uVar39;
        uVar39 = auVar53._8_4_ >> 0x1f;
        uVar39 = uVar39 & auVar50._8_4_ | ~uVar39 & uVar42;
        uVar41 = auVar53._4_4_ >> 0x1f;
        auVar115._0_4_ = auVar50._0_4_ & uVar41;
        auVar115._4_4_ = auVar50._4_4_ & uVar41;
        auVar115._8_4_ = uVar39 & uVar41;
        auVar115._12_4_ = uVar42 & uVar41;
        auVar77._0_4_ = ~uVar41 & auVar50._0_4_;
        auVar77._4_4_ = ~uVar41 & uVar39;
        auVar77._8_4_ = ~uVar41 & uVar42;
        auVar77._12_4_ = ~uVar41 & uVar42;
        uVar41 = auVar53._0_4_ >> 0x1f;
        auVar115 = auVar115 | auVar77;
        uVar39 = auVar115._12_4_;
        auVar140._0_4_ = auVar115._0_4_ & uVar41;
        auVar140._4_4_ = auVar115._4_4_ & uVar41;
        auVar140._8_4_ = auVar115._8_4_ & uVar41;
        auVar140._12_4_ = uVar39 & uVar41;
        auVar78._0_4_ = ~uVar41 & auVar115._4_4_;
        auVar78._4_4_ = ~uVar41 & auVar115._8_4_;
        auVar78._8_4_ = ~uVar41 & uVar39;
        auVar78._12_4_ = ~uVar41 & uVar39;
        iVar45 = __popcountdi2(plVar35);
        local_2c8 = SUB168(auVar140 | auVar78,0);
        uStack_2c0 = SUB168(auVar140 | auVar78,8);
        lVar33 = (long)iVar36;
        iVar36 = iVar36 + iVar45;
        *(undefined8 *)(auStack_248 + lVar33) = local_2c8;
        *(undefined8 *)((long)auStack_240 + lVar33 * 4) = uStack_2c0;
        if (*(float *)(param_5 + 8) <= _LC1) {
LAB_00100e90:
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
    }
    bVar38 = iVar36 == 0;
    iVar36 = iVar36 + -1;
    if (bVar38) goto LAB_00100e90;
    uVar30 = (ulong)auStack_248[iVar36];
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::StaticCompoundShape::GetIntersectingSubShapes(JPH::AABox const&, unsigned int*, int) const
    */

int __thiscall
JPH::StaticCompoundShape::GetIntersectingSubShapes
          (StaticCompoundShape *this,AABox *param_1,uint *param_2,int param_3)

{
  undefined1 auVar1 [14];
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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [14];
  undefined1 auVar28 [14];
  undefined1 (*pauVar29) [16];
  long lVar30;
  int iVar31;
  undefined4 uVar32;
  int iVar33;
  long in_FS_OFFSET;
  bool bVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  int iVar44;
  uint uVar45;
  int iVar46;
  int iVar47;
  uint uVar48;
  undefined1 auVar38 [12];
  int iVar43;
  undefined1 auVar39 [16];
  int iVar49;
  int iVar50;
  uint uVar51;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar61;
  uint uVar64;
  undefined1 auVar55 [12];
  uint uVar59;
  uint uVar60;
  uint uVar62;
  uint uVar63;
  uint uVar65;
  uint uVar66;
  undefined1 auVar56 [16];
  uint uVar67;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  uint uVar68;
  uint uVar74;
  undefined1 auVar69 [12];
  uint uVar73;
  undefined1 auVar70 [16];
  uint uVar75;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  uint uVar76;
  uint uVar77;
  uint uVar84;
  uint uVar86;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  uint uVar85;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  uint uVar90;
  uint uVar91;
  uint uVar93;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  uint uVar97;
  uint uVar98;
  undefined1 auVar92 [16];
  int iVar99;
  int iVar101;
  int iVar102;
  int iVar103;
  undefined1 auVar100 [16];
  uint uVar104;
  uint uVar105;
  uint uVar108;
  uint uVar110;
  uint uVar112;
  undefined1 auVar106 [16];
  uint uVar109;
  uint uVar111;
  uint uVar113;
  undefined1 auVar107 [16];
  int iVar114;
  int iVar117;
  int iVar118;
  undefined1 auVar115 [16];
  int iVar119;
  undefined1 auVar116 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  uint uVar122;
  uint uVar124;
  uint uVar125;
  uint uVar126;
  undefined1 auVar123 [16];
  undefined1 auVar127 [16];
  uint uVar128;
  undefined8 local_268;
  undefined8 uStack_260;
  uint local_238 [2];
  undefined8 auStack_230 [64];
  long local_30;
  
  uVar32 = SUB84(this,0);
  iVar33 = 0;
  iVar31 = 0;
  fVar17 = *(float *)param_1;
  fVar18 = *(float *)(param_1 + 4);
  fVar19 = *(float *)(param_1 + 8);
  fVar20 = *(float *)(param_1 + 0x10);
  fVar21 = *(float *)(param_1 + 0x14);
  fVar22 = *(float *)(param_1 + 0x18);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar37 = 0;
  local_238[0] = 0;
  do {
    if (uVar37 != 0x7fffffff) {
      if ((int)uVar37 < 0) {
        iVar33 = iVar33 + 1;
        *param_2 = uVar37 + 0x80000000;
        param_2 = param_2 + 1;
      }
      else {
        auVar70._4_4_ = _UNK_0010a0b4;
        auVar70._0_4_ = __LC16;
        auVar70._8_4_ = _UNK_0010a0b8;
        auVar70._12_4_ = _UNK_0010a0bc;
        pauVar29 = (undefined1 (*) [16])((ulong)uVar37 * 0x40 + *(long *)(this + 0x80));
        auVar39 = *pauVar29;
        auVar79 = pauVar29[1];
        auVar5._10_2_ = 0;
        auVar5._0_10_ = auVar39._0_10_;
        auVar5._12_2_ = auVar39._6_2_;
        auVar11._8_2_ = auVar39._4_2_;
        auVar11._0_8_ = auVar39._0_8_;
        auVar11._10_4_ = auVar5._10_4_;
        auVar23._6_8_ = 0;
        auVar23._0_6_ = auVar11._8_6_;
        auVar78._6_8_ = SUB148(auVar23 << 0x40,6);
        auVar78._4_2_ = auVar39._2_2_;
        auVar78._0_2_ = auVar39._0_2_;
        auVar78._2_2_ = 0;
        auVar78._14_2_ = 0;
        auVar1._10_2_ = 0;
        auVar1._0_10_ = auVar79._0_10_;
        auVar1._12_2_ = auVar79._6_2_;
        auVar6._8_2_ = auVar79._4_2_;
        auVar6._0_8_ = auVar79._0_8_;
        auVar6._10_4_ = auVar1._10_4_;
        auVar24._6_8_ = 0;
        auVar24._0_6_ = auVar6._8_6_;
        auVar13._4_2_ = auVar79._2_2_;
        auVar13._0_4_ = auVar79._0_4_;
        auVar13._6_8_ = SUB148(auVar24 << 0x40,6);
        auVar120._0_4_ = auVar79._0_4_ & 0xffff;
        auVar120._4_10_ = auVar13._4_10_;
        auVar120._14_2_ = 0;
        auVar70 = auVar70 & auVar78;
        auVar39 = __LC13 & auVar78;
        auVar78 = auVar78 & __LC21;
        iVar35 = auVar39._0_4_ * 0x2000;
        iVar43 = auVar39._4_4_ * 0x2000;
        iVar46 = auVar39._8_4_ * 0x2000;
        iVar49 = auVar39._12_4_ * 0x2000;
        uVar90 = __LC14 + iVar35;
        uVar93 = _UNK_0010a0a4 + iVar43;
        uVar95 = _UNK_0010a0a8 + iVar46;
        uVar97 = _UNK_0010a0ac + iVar49;
        uVar52 = (int)-(uint)(auVar70._0_4_ == __LC16) >> 0x1f;
        uVar59 = (int)-(uint)(auVar70._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar62 = (int)-(uint)(auVar70._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar65 = (int)-(uint)(auVar70._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar68 = (int)-(uint)(auVar70._0_4_ == 0) >> 0x1f;
        uVar73 = (int)-(uint)(auVar70._4_4_ == 0) >> 0x1f;
        uVar74 = (int)-(uint)(auVar70._8_4_ == 0) >> 0x1f;
        uVar75 = (int)-(uint)(auVar70._12_4_ == 0) >> 0x1f;
        auVar39 = *pauVar29;
        auVar69._8_4_ = auVar39._8_4_;
        auVar69._0_8_ = auVar39._8_8_;
        auVar2._10_2_ = 0;
        auVar2._0_10_ = auVar69._0_10_;
        auVar2._12_2_ = auVar39._14_2_;
        auVar7._8_2_ = auVar39._12_2_;
        auVar7._0_8_ = auVar69._0_8_;
        auVar7._10_4_ = auVar2._10_4_;
        auVar25._6_8_ = 0;
        auVar25._0_6_ = auVar7._8_6_;
        auVar14._4_2_ = auVar39._10_2_;
        auVar14._0_4_ = auVar69._8_4_;
        auVar14._6_8_ = SUB148(auVar25 << 0x40,6);
        auVar71._0_2_ = auVar39._8_2_;
        auVar71._2_2_ = 0;
        auVar71._4_10_ = auVar14._4_10_;
        auVar71._14_2_ = 0;
        auVar39 = __LC13 & auVar71;
        auVar79._4_4_ = _UNK_0010a0b4;
        auVar79._0_4_ = __LC16;
        auVar79._8_4_ = _UNK_0010a0b8;
        auVar79._12_4_ = _UNK_0010a0bc;
        iVar36 = auVar39._0_4_ * 0x2000;
        iVar44 = auVar39._4_4_ * 0x2000;
        iVar47 = auVar39._8_4_ * 0x2000;
        iVar50 = auVar39._12_4_ * 0x2000;
        auVar79 = auVar79 & auVar71;
        uVar91 = __LC14 + iVar36;
        uVar94 = _UNK_0010a0a4 + iVar44;
        uVar96 = _UNK_0010a0a8 + iVar47;
        uVar98 = _UNK_0010a0ac + iVar50;
        auVar71 = auVar71 & __LC21;
        uVar76 = (int)-(uint)(auVar79._0_4_ == 0) >> 0x1f;
        uVar84 = (int)-(uint)(auVar79._4_4_ == 0) >> 0x1f;
        uVar86 = (int)-(uint)(auVar79._8_4_ == 0) >> 0x1f;
        uVar88 = (int)-(uint)(auVar79._12_4_ == 0) >> 0x1f;
        uVar53 = (int)-(uint)(auVar79._0_4_ == __LC16) >> 0x1f;
        uVar60 = (int)-(uint)(auVar79._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar63 = (int)-(uint)(auVar79._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar66 = (int)-(uint)(auVar79._12_4_ == _UNK_0010a0bc) >> 0x1f;
        auVar56._4_4_ = _UNK_0010a0b4;
        auVar56._0_4_ = __LC16;
        auVar56._8_4_ = _UNK_0010a0b8;
        auVar56._12_4_ = _UNK_0010a0bc;
        auVar39 = __LC13 & auVar120;
        auVar56 = auVar56 & auVar120;
        iVar99 = auVar39._0_4_ * 0x2000;
        iVar101 = auVar39._4_4_ * 0x2000;
        iVar102 = auVar39._8_4_ * 0x2000;
        iVar103 = auVar39._12_4_ * 0x2000;
        auVar120 = auVar120 & __LC21;
        uVar77 = __LC14 + iVar99;
        uVar85 = _UNK_0010a0a4 + iVar101;
        uVar87 = _UNK_0010a0a8 + iVar102;
        uVar89 = _UNK_0010a0ac + iVar103;
        auVar121._0_4_ = auVar120._0_4_ << 0x10;
        auVar121._4_4_ = auVar120._4_4_ << 0x10;
        auVar121._8_4_ = auVar120._8_4_ << 0x10;
        auVar121._12_4_ = auVar120._12_4_ << 0x10;
        uVar54 = (int)-(uint)(auVar56._0_4_ == 0) >> 0x1f;
        uVar61 = (int)-(uint)(auVar56._4_4_ == 0) >> 0x1f;
        uVar64 = (int)-(uint)(auVar56._8_4_ == 0) >> 0x1f;
        uVar67 = (int)-(uint)(auVar56._12_4_ == 0) >> 0x1f;
        uVar37 = (int)-(uint)(auVar56._0_4_ == __LC16) >> 0x1f;
        uVar45 = (int)-(uint)(auVar56._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar48 = (int)-(uint)(auVar56._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar51 = (int)-(uint)(auVar56._12_4_ == _UNK_0010a0bc) >> 0x1f;
        auVar100._0_4_ = (uint)((float)(iVar99 + __LC18) + _LC20) & uVar54;
        auVar100._4_4_ = (uint)((float)(iVar101 + _UNK_0010a0d4) + _LC20) & uVar61;
        auVar100._8_4_ = (uint)((float)(iVar102 + _UNK_0010a0d8) + _LC20) & uVar64;
        auVar100._12_4_ = (uint)((float)(iVar103 + _UNK_0010a0dc) + _LC20) & uVar67;
        auVar115._0_4_ = ~uVar54 & (uVar37 & (uVar77 | __LC17) | ~uVar37 & uVar77);
        auVar115._4_4_ = ~uVar61 & (uVar45 & (uVar85 | _UNK_0010a0c4) | ~uVar45 & uVar85);
        auVar115._8_4_ = ~uVar64 & (uVar48 & (uVar87 | _UNK_0010a0c8) | ~uVar48 & uVar87);
        auVar115._12_4_ = ~uVar67 & (uVar51 & (uVar89 | _UNK_0010a0cc) | ~uVar51 & uVar89);
        auVar39 = pauVar29[1];
        auVar121 = auVar121 | auVar100 | auVar115;
        uVar37 = auVar39._8_4_;
        auVar38._0_8_ = auVar39._8_8_;
        auVar38._8_4_ = uVar37;
        auVar3._10_2_ = 0;
        auVar3._0_10_ = auVar38._0_10_;
        auVar3._12_2_ = auVar39._14_2_;
        auVar8._8_2_ = auVar39._12_2_;
        auVar8._0_8_ = auVar38._0_8_;
        auVar8._10_4_ = auVar3._10_4_;
        auVar26._6_8_ = 0;
        auVar26._0_6_ = auVar8._8_6_;
        auVar15._4_2_ = auVar39._10_2_;
        auVar15._0_4_ = uVar37;
        auVar15._6_8_ = SUB148(auVar26 << 0x40,6);
        auVar40._0_4_ = uVar37 & 0xffff;
        auVar40._4_10_ = auVar15._4_10_;
        auVar40._14_2_ = 0;
        auVar92._4_4_ = _UNK_0010a0b4;
        auVar92._0_4_ = __LC16;
        auVar92._8_4_ = _UNK_0010a0b8;
        auVar92._12_4_ = _UNK_0010a0bc;
        auVar39 = __LC13 & auVar40;
        auVar92 = auVar92 & auVar40;
        iVar114 = auVar39._0_4_ * 0x2000;
        iVar117 = auVar39._4_4_ * 0x2000;
        iVar118 = auVar39._8_4_ * 0x2000;
        iVar119 = auVar39._12_4_ * 0x2000;
        auVar40 = auVar40 & __LC21;
        uVar104 = __LC14 + iVar114;
        uVar108 = _UNK_0010a0a4 + iVar117;
        uVar110 = _UNK_0010a0a8 + iVar118;
        uVar112 = _UNK_0010a0ac + iVar119;
        uVar61 = (int)-(uint)(auVar92._0_4_ == 0) >> 0x1f;
        uVar64 = (int)-(uint)(auVar92._4_4_ == 0) >> 0x1f;
        uVar77 = (int)-(uint)(auVar92._8_4_ == 0) >> 0x1f;
        uVar87 = (int)-(uint)(auVar92._12_4_ == 0) >> 0x1f;
        uVar45 = (int)-(uint)(auVar92._0_4_ == __LC16) >> 0x1f;
        uVar48 = (int)-(uint)(auVar92._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar51 = (int)-(uint)(auVar92._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar54 = (int)-(uint)(auVar92._12_4_ == _UNK_0010a0bc) >> 0x1f;
        auVar39 = pauVar29[2];
        auVar9._10_2_ = 0;
        auVar9._0_10_ = auVar39._0_10_;
        auVar9._12_2_ = auVar39._6_2_;
        auVar12._8_2_ = auVar39._4_2_;
        auVar12._0_8_ = auVar39._0_8_;
        auVar12._10_4_ = auVar9._10_4_;
        auVar27._6_8_ = 0;
        auVar27._0_6_ = auVar12._8_6_;
        auVar80._6_8_ = SUB148(auVar27 << 0x40,6);
        auVar80._4_2_ = auVar39._2_2_;
        auVar80._0_2_ = auVar39._0_2_;
        auVar80._2_2_ = 0;
        auVar80._14_2_ = 0;
        auVar39 = __LC13 & auVar80;
        auVar106._4_4_ = _UNK_0010a0b4;
        auVar106._0_4_ = __LC16;
        auVar106._8_4_ = _UNK_0010a0b8;
        auVar106._12_4_ = _UNK_0010a0bc;
        iVar99 = auVar39._0_4_ * 0x2000;
        iVar101 = auVar39._4_4_ * 0x2000;
        iVar102 = auVar39._8_4_ * 0x2000;
        iVar103 = auVar39._12_4_ * 0x2000;
        auVar106 = auVar106 & auVar80;
        uVar122 = __LC14 + iVar99;
        uVar124 = _UNK_0010a0a4 + iVar101;
        uVar125 = _UNK_0010a0a8 + iVar102;
        uVar126 = _UNK_0010a0ac + iVar103;
        auVar80 = auVar80 & __LC21;
        auVar81._0_4_ = auVar80._0_4_ << 0x10;
        auVar81._4_4_ = auVar80._4_4_ << 0x10;
        auVar81._8_4_ = auVar80._8_4_ << 0x10;
        auVar81._12_4_ = auVar80._12_4_ << 0x10;
        uVar105 = (int)-(uint)(auVar106._0_4_ == 0) >> 0x1f;
        uVar109 = (int)-(uint)(auVar106._4_4_ == 0) >> 0x1f;
        uVar111 = (int)-(uint)(auVar106._8_4_ == 0) >> 0x1f;
        uVar113 = (int)-(uint)(auVar106._12_4_ == 0) >> 0x1f;
        uVar37 = (int)-(uint)(auVar106._0_4_ == __LC16) >> 0x1f;
        uVar67 = (int)-(uint)(auVar106._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar85 = (int)-(uint)(auVar106._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar89 = (int)-(uint)(auVar106._12_4_ == _UNK_0010a0bc) >> 0x1f;
        auVar123._0_4_ = ~uVar105 & (uVar37 & (uVar122 | __LC17) | ~uVar37 & uVar122);
        auVar123._4_4_ = ~uVar109 & (uVar67 & (uVar124 | _UNK_0010a0c4) | ~uVar67 & uVar124);
        auVar123._8_4_ = ~uVar111 & (uVar85 & (uVar125 | _UNK_0010a0c8) | ~uVar85 & uVar125);
        auVar123._12_4_ = ~uVar113 & (uVar89 & (uVar126 | _UNK_0010a0cc) | ~uVar89 & uVar126);
        auVar39 = pauVar29[2];
        uVar37 = auVar39._8_4_;
        auVar55._0_8_ = auVar39._8_8_;
        auVar55._8_4_ = uVar37;
        auVar4._10_2_ = 0;
        auVar4._0_10_ = auVar55._0_10_;
        auVar4._12_2_ = auVar39._14_2_;
        auVar10._8_2_ = auVar39._12_2_;
        auVar10._0_8_ = auVar55._0_8_;
        auVar10._10_4_ = auVar4._10_4_;
        auVar28._6_8_ = 0;
        auVar28._0_6_ = auVar10._8_6_;
        auVar16._4_2_ = auVar39._10_2_;
        auVar16._0_4_ = uVar37;
        auVar16._6_8_ = SUB148(auVar28 << 0x40,6);
        auVar57._0_4_ = uVar37 & 0xffff;
        auVar57._4_10_ = auVar16._4_10_;
        auVar57._14_2_ = 0;
        auVar39 = __LC13 & auVar57;
        auVar107._0_4_ = (uint)((float)(__LC18 + iVar99) + _LC20) & uVar105;
        auVar107._4_4_ = (uint)((float)(_UNK_0010a0d4 + iVar101) + _LC20) & uVar109;
        auVar107._8_4_ = (uint)((float)(_UNK_0010a0d8 + iVar102) + _LC20) & uVar111;
        auVar107._12_4_ = (uint)((float)(_UNK_0010a0dc + iVar103) + _LC20) & uVar113;
        iVar99 = auVar39._0_4_ * 0x2000;
        iVar101 = auVar39._4_4_ * 0x2000;
        iVar102 = auVar39._8_4_ * 0x2000;
        iVar103 = auVar39._12_4_ * 0x2000;
        auVar127._4_4_ = _UNK_0010a0b4;
        auVar127._0_4_ = __LC16;
        auVar127._8_4_ = _UNK_0010a0b8;
        auVar127._12_4_ = _UNK_0010a0bc;
        uVar124 = __LC14 + iVar99;
        uVar125 = _UNK_0010a0a4 + iVar101;
        uVar126 = _UNK_0010a0a8 + iVar102;
        uVar128 = _UNK_0010a0ac + iVar103;
        auVar127 = auVar127 & auVar57;
        auVar81 = auVar81 | auVar107 | auVar123;
        auVar57 = auVar57 & __LC21;
        uVar67 = (int)-(uint)(auVar127._0_4_ == __LC16) >> 0x1f;
        uVar85 = (int)-(uint)(auVar127._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar89 = (int)-(uint)(auVar127._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar105 = (int)-(uint)(auVar127._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar109 = (int)-(uint)(auVar127._0_4_ == 0) >> 0x1f;
        uVar111 = (int)-(uint)(auVar127._4_4_ == 0) >> 0x1f;
        uVar113 = (int)-(uint)(auVar127._8_4_ == 0) >> 0x1f;
        uVar122 = (int)-(uint)(auVar127._12_4_ == 0) >> 0x1f;
        uVar37 = *(uint *)(pauVar29[3] + 0xc);
        auVar82._4_4_ = -(uint)(auVar81._4_4_ < fVar18);
        auVar82._0_4_ = -(uint)(auVar81._0_4_ < fVar18);
        auVar82._8_4_ = -(uint)(auVar81._8_4_ < fVar18);
        auVar82._12_4_ = -(uint)(auVar81._12_4_ < fVar18);
        auVar58._4_4_ =
             -(uint)((float)(auVar40._4_4_ << 0x10 |
                            (uint)((float)(iVar117 + _UNK_0010a0d4) + _LC20) & uVar64 |
                            ~uVar64 & (uVar48 & (uVar108 | _UNK_0010a0c4) | ~uVar48 & uVar108)) <
                    fVar17);
        auVar58._0_4_ =
             -(uint)((float)(auVar40._0_4_ << 0x10 |
                            (uint)((float)(iVar114 + __LC18) + _LC20) & uVar61 |
                            ~uVar61 & (uVar45 & (uVar104 | __LC17) | ~uVar45 & uVar104)) < fVar17);
        auVar58._8_4_ =
             -(uint)((float)(auVar40._8_4_ << 0x10 |
                            (uint)((float)(iVar118 + _UNK_0010a0d8) + _LC20) & uVar77 |
                            ~uVar77 & (uVar51 & (uVar110 | _UNK_0010a0c8) | ~uVar51 & uVar110)) <
                    fVar17);
        auVar58._12_4_ =
             -(uint)((float)(auVar40._12_4_ << 0x10 |
                            (uint)((float)(iVar119 + _UNK_0010a0dc) + _LC20) & uVar87 |
                            ~uVar87 & (uVar54 & (uVar112 | _UNK_0010a0cc) | ~uVar54 & uVar112)) <
                    fVar17);
        auVar116._4_4_ =
             -(uint)(fVar21 < (float)(auVar71._4_4_ << 0x10 |
                                     (uint)((float)(iVar44 + _UNK_0010a0d4) + _LC20) & uVar84 |
                                     ~uVar84 & (uVar60 & (uVar94 | _UNK_0010a0c4) | ~uVar60 & uVar94
                                               )));
        auVar116._0_4_ =
             -(uint)(fVar21 < (float)(auVar71._0_4_ << 0x10 |
                                     (uint)((float)(iVar36 + __LC18) + _LC20) & uVar76 |
                                     ~uVar76 & (uVar53 & (uVar91 | __LC17) | ~uVar53 & uVar91)));
        auVar116._8_4_ =
             -(uint)(fVar21 < (float)(auVar71._8_4_ << 0x10 |
                                     (uint)((float)(iVar47 + _UNK_0010a0d8) + _LC20) & uVar86 |
                                     ~uVar86 & (uVar63 & (uVar96 | _UNK_0010a0c8) | ~uVar63 & uVar96
                                               )));
        auVar116._12_4_ =
             -(uint)(fVar21 < (float)(auVar71._12_4_ << 0x10 |
                                     (uint)((float)(iVar50 + _UNK_0010a0dc) + _LC20) & uVar88 |
                                     ~uVar88 & (uVar66 & (uVar98 | _UNK_0010a0cc) | ~uVar66 & uVar98
                                               )));
        auVar41._4_4_ =
             -(uint)((float)(auVar57._4_4_ << 0x10 |
                            (uint)((float)(iVar101 + _UNK_0010a0d4) + _LC20) & uVar111 |
                            ~uVar111 & (uVar85 & (uVar125 | _UNK_0010a0c4) | ~uVar85 & uVar125)) <
                    fVar19);
        auVar41._0_4_ =
             -(uint)((float)(auVar57._0_4_ << 0x10 |
                            (uint)((float)(iVar99 + __LC18) + _LC20) & uVar109 |
                            ~uVar109 & (uVar67 & (uVar124 | __LC17) | ~uVar67 & uVar124)) < fVar19);
        auVar41._8_4_ =
             -(uint)((float)(auVar57._8_4_ << 0x10 |
                            (uint)((float)(iVar102 + _UNK_0010a0d8) + _LC20) & uVar113 |
                            ~uVar113 & (uVar89 & (uVar126 | _UNK_0010a0c8) | ~uVar89 & uVar126)) <
                    fVar19);
        auVar41._12_4_ =
             -(uint)((float)(auVar57._12_4_ << 0x10 |
                            (uint)((float)(iVar103 + _UNK_0010a0dc) + _LC20) & uVar122 |
                            ~uVar122 & (uVar105 & (uVar128 | _UNK_0010a0cc) | ~uVar105 & uVar128)) <
                    fVar19);
        auVar72._4_4_ = -(uint)(fVar22 < auVar121._4_4_);
        auVar72._0_4_ = -(uint)(fVar22 < auVar121._0_4_);
        auVar72._8_4_ = -(uint)(fVar22 < auVar121._8_4_);
        auVar72._12_4_ = -(uint)(fVar22 < auVar121._12_4_);
        auVar39._4_4_ =
             -(uint)(fVar20 < (float)(auVar78._4_4_ << 0x10 |
                                     (uint)((float)(iVar43 + _UNK_0010a0d4) + _LC20) & uVar73 |
                                     ~uVar73 & (uVar59 & (uVar93 | _UNK_0010a0c4) | ~uVar59 & uVar93
                                               )));
        auVar39._0_4_ =
             -(uint)(fVar20 < (float)(auVar78._0_4_ << 0x10 |
                                     (uint)((float)(iVar35 + __LC18) + _LC20) & uVar68 |
                                     ~uVar68 & (uVar52 & (uVar90 | __LC17) | ~uVar52 & uVar90)));
        auVar39._8_4_ =
             -(uint)(fVar20 < (float)(auVar78._8_4_ << 0x10 |
                                     (uint)((float)(iVar46 + _UNK_0010a0d8) + _LC20) & uVar74 |
                                     ~uVar74 & (uVar62 & (uVar95 | _UNK_0010a0c8) | ~uVar62 & uVar95
                                               )));
        auVar39._12_4_ =
             -(uint)(fVar20 < (float)(auVar78._12_4_ << 0x10 |
                                     (uint)((float)(iVar49 + _UNK_0010a0dc) + _LC20) & uVar75 |
                                     ~uVar75 & (uVar65 & (uVar97 | _UNK_0010a0cc) | ~uVar65 & uVar97
                                               )));
        auVar39 = (auVar58 | auVar39 | auVar82 | auVar116 | auVar41 | auVar72) ^ __LC47;
        uVar32 = movmskps(uVar32,auVar39);
        uVar45 = auVar39._8_4_ >> 0x1f;
        uVar48 = uVar45 & *(uint *)(pauVar29[3] + 8) | ~uVar45 & uVar37;
        uVar51 = auVar39._4_4_ >> 0x1f;
        uVar52 = auVar39._0_4_ >> 0x1f;
        uVar45 = *(uint *)(pauVar29[3] + 4) & uVar51 | ~uVar51 & uVar48;
        uVar48 = uVar48 & uVar51 | ~uVar51 & uVar37;
        auVar42._0_4_ = *(uint *)pauVar29[3] & uVar52;
        auVar42._4_4_ = uVar45 & uVar52;
        auVar42._8_4_ = uVar48 & uVar52;
        auVar42._12_4_ = uVar37 & uVar52;
        auVar83._0_4_ = ~uVar52 & uVar45;
        auVar83._4_4_ = ~uVar52 & uVar48;
        auVar83._8_4_ = ~uVar52 & uVar37;
        auVar83._12_4_ = ~uVar52 & uVar37;
        iVar35 = __popcountdi2(uVar32);
        local_268 = SUB168(auVar42 | auVar83,0);
        uStack_260 = SUB168(auVar42 | auVar83,8);
        lVar30 = (long)iVar31;
        iVar31 = iVar31 + iVar35;
        *(undefined8 *)(local_238 + lVar30) = local_268;
        *(undefined8 *)((long)auStack_230 + lVar30 * 4) = uStack_260;
      }
      if (param_3 <= iVar33) {
LAB_00101450:
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          return iVar33;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    bVar34 = iVar31 == 0;
    iVar31 = iVar31 + -1;
    if (bVar34) goto LAB_00101450;
    uVar37 = local_238[iVar31];
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::StaticCompoundShape::CastRay(JPH::RayCast const&, JPH::RayCastSettings const&,
   JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay>&, JPH::ShapeFilter const&) const [clone .part.0] */

void __thiscall
JPH::StaticCompoundShape::CastRay
          (StaticCompoundShape *this,RayCast *param_1,RayCastSettings *param_2,
          SubShapeIDCreator *param_3,CollisionCollector *param_4,ShapeFilter *param_5)

{
  undefined1 auVar1 [14];
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
  undefined1 auVar17 [16];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined8 uVar24;
  ulong uVar25;
  undefined1 (*pauVar26) [16];
  long lVar27;
  ulong uVar28;
  byte bVar29;
  ulong uVar30;
  long lVar31;
  int iVar32;
  StaticCompoundShape *pSVar33;
  long *plVar34;
  StaticCompoundShape *pSVar35;
  long in_FS_OFFSET;
  byte bVar36;
  uint uVar37;
  int iVar40;
  uint uVar49;
  uint uVar51;
  undefined1 auVar41 [16];
  float fVar38;
  float fVar39;
  float fVar52;
  uint uVar54;
  undefined1 auVar42 [16];
  int iVar50;
  int iVar53;
  int iVar55;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar56 [16];
  StaticCompoundShape aSVar57 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar72 [12];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar73 [12];
  undefined1 auVar78 [16];
  undefined1 auVar74 [12];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar83;
  uint uVar84;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  undefined1 auVar85 [16];
  uint uVar89;
  uint uVar91;
  uint uVar92;
  uint uVar93;
  uint uVar94;
  undefined1 auVar90 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar99;
  float fVar102;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar103;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar107;
  undefined1 auVar106 [16];
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  uint uStack_4e8;
  uint uStack_4e4;
  uint uStack_4e0;
  uint uStack_4dc;
  uint uStack_4d0;
  int iStack_4cc;
  undefined1 auStack_4c8 [16];
  StaticCompoundShape aSStack_4b8 [16];
  undefined1 auStack_4a8 [8];
  undefined8 uStack_4a0;
  float fStack_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  uint auStack_488 [2];
  undefined8 auStack_480 [63];
  undefined1 auStack_288 [8];
  float fStack_280;
  uint uStack_278;
  uint uStack_274;
  uint uStack_270;
  int iStack_26c;
  RayCast *local_268;
  CollisionCollector *local_260;
  undefined8 local_258;
  uint uStack_250;
  undefined2 uStack_24c;
  RayCastSettings RStack_24a;
  ShapeFilter *pSStack_248;
  float afStack_240 [132];
  long local_30;
  
  bVar36 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_268 = param_1;
  local_260 = param_4;
  local_258 = *(undefined8 *)param_3;
  uStack_250 = *(int *)(this + 0x50) - 1;
  if (uStack_250 != 0) {
    iVar40 = 0x1f;
    if (uStack_250 != 0) {
      for (; uStack_250 >> iVar40 == 0; iVar40 = iVar40 + -1) {
      }
    }
    uStack_250 = iVar40 + 1;
  }
  auVar42 = *(undefined1 (*) [16])(param_1 + 0x10);
  pSStack_248 = param_5;
  uVar30 = 0;
  auVar41._0_4_ = 0.0 - auVar42._0_4_;
  auVar41._4_4_ = 0.0 - auVar42._4_4_;
  auVar41._8_4_ = 0.0 - auVar42._8_4_;
  auVar41._12_4_ = 0.0 - auVar42._12_4_;
  auStack_488[0] = 0;
  uStack_24c = *(undefined2 *)param_2;
  auVar41 = maxps(auVar41,auVar42);
  RStack_24a = param_2[2];
  uVar28 = 0;
  uStack_278 = -(uint)(auVar41._0_4_ <= _LC26);
  uStack_274 = -(uint)(auVar41._4_4_ <= _LC26);
  uStack_270 = -(uint)(auVar41._8_4_ <= _LC26);
  iStack_26c = -(uint)(auVar41._12_4_ <= _LC26);
  uVar37 = (int)uStack_278 >> 0x1f;
  uVar49 = (int)uStack_274 >> 0x1f;
  uVar51 = (int)uStack_270 >> 0x1f;
  uVar54 = iStack_26c >> 0x1f;
  auVar98._0_4_ = ~uVar37 & (uint)auVar42._0_4_;
  auVar98._4_4_ = ~uVar49 & (uint)auVar42._4_4_;
  auVar98._8_4_ = ~uVar51 & (uint)auVar42._8_4_;
  auVar98._12_4_ = ~uVar54 & (uint)auVar42._12_4_;
  auVar96._4_4_ = _LC22;
  auVar96._0_4_ = _LC22;
  auVar96._8_4_ = _LC22;
  auVar96._12_4_ = _LC22;
  auVar42._0_4_ = uVar37 & (uint)_LC22;
  auVar42._4_4_ = uVar49 & (uint)_LC22;
  auVar42._8_4_ = uVar51 & (uint)_LC22;
  auVar42._12_4_ = uVar54 & (uint)_LC22;
  _auStack_288 = divps(auVar96,auVar42 | auVar98);
  pSVar35 = this;
  do {
    iVar32 = (int)uVar30;
    iVar40 = (int)uVar28;
    if (iVar40 != 0x7fffffff) {
      if (iVar40 < 0) {
        plVar34 = (long *)(*(long *)(this + 0x60) + (ulong)(iVar40 + 0x80000000U) * 0x28);
        iStack_4cc = uStack_250 + local_258._4_4_;
        fVar102 = *(float *)(plVar34 + 1);
        fVar65 = *(float *)((long)plVar34 + 0xc);
        fVar39 = *(float *)(plVar34 + 2);
        bVar29 = (byte)((ulong)local_258 >> 0x20);
        uStack_4d0 = ~((int)(1L << ((byte)uStack_250 & 0x3f)) + -1 << (bVar29 & 0x1f)) &
                     (uint)local_258 | iVar40 + 0x80000000U << (bVar29 & 0x1f);
        fVar38 = __LC12;
        uVar37 = _UNK_0010a084;
        fVar52 = _UNK_0010a088;
        fVar58 = _LC22;
        if (*(char *)((long)plVar34 + 0x24) == '\0') {
          fVar58 = *(float *)((long)plVar34 + 0x14);
          fVar38 = *(float *)((long)plVar34 + 0x14);
          uVar37 = *(uint *)(plVar34 + 3);
          fVar52 = *(float *)((long)plVar34 + 0x1c);
          fVar69 = _LC22 - (fVar52 * fVar52 +
                           *(float *)(plVar34 + 3) * *(float *)(plVar34 + 3) + fVar58 * fVar58 + 0.0
                           );
          fVar58 = 0.0;
          if (0.0 <= fVar69) {
            fVar58 = SQRT(fVar69);
          }
        }
        fVar38 = (float)((uint)fVar38 ^ _LC33);
        fVar69 = (float)(uVar37 ^ _UNK_0010a0f4);
        fVar52 = (float)((uint)fVar52 ^ _UNK_0010a0f8);
        fVar58 = (float)((uint)fVar58 ^ _UNK_0010a0fc);
        pSVar35 = (StaticCompoundShape *)*plVar34;
        fVar99 = fVar69 + fVar69;
        fVar59 = fVar38 + fVar38;
        fVar63 = fVar58 * (fVar52 + fVar52);
        fVar103 = fVar52 * (fVar52 + fVar52);
        fVar108 = fVar52 * fVar99 - fVar59 * fVar58;
        fVar60 = fVar59 * fVar58 + fVar52 * fVar99;
        fVar70 = (_LC22 - fVar38 * fVar59) - fVar69 * fVar99;
        fVar64 = fVar52 * fVar59 + fVar99 * fVar58;
        fVar58 = fVar52 * fVar59 - fVar99 * fVar58;
        fVar71 = fVar69 * fVar59 - fVar63;
        fVar63 = fVar63 + fVar69 * fVar59;
        fVar83 = (_LC22 - fVar69 * fVar99) - fVar103;
        fVar109 = (_LC22 - fVar103) - fVar38 * fVar59;
        fVar38 = 0.0 - (fVar102 * fVar83 + fVar65 * fVar71 + fVar39 * fVar64);
        fVar69 = 0.0 - (fVar102 * fVar63 + fVar65 * fVar109 + fVar39 * fVar108);
        fVar99 = 0.0 - (fVar102 * fVar58 + fVar65 * fVar60 + fVar39 * fVar70);
        fVar52 = *(float *)local_268;
        fVar102 = *(float *)(local_268 + 4);
        fVar65 = *(float *)(local_268 + 8);
        fVar39 = fVar52 + *(float *)(local_268 + 0x10);
        fVar59 = fVar102 + *(float *)(local_268 + 0x14);
        fVar103 = fVar65 + *(float *)(local_268 + 0x18);
        auStack_4a8._0_4_ = fVar52 * fVar83 + fVar102 * fVar71 + fVar65 * fVar64 + fVar38;
        auStack_4a8._4_4_ = fVar52 * fVar63 + fVar102 * fVar109 + fVar65 * fVar108 + fVar69;
        uStack_4a0._0_4_ = fVar52 * fVar58 + fVar102 * fVar60 + fVar65 * fVar70 + fVar99;
        uStack_4a0._4_4_ = fVar52 * 0.0 + fVar102 * 0.0 + fVar65 * 0.0 + 1.0;
        fStack_498 = (fVar103 * fVar64 + fVar59 * fVar71 + fVar83 * fVar39 + fVar38) -
                     (float)auStack_4a8._0_4_;
        fStack_494 = (fVar103 * fVar108 + fVar59 * fVar109 + fVar63 * fVar39 + fVar69) -
                     (float)auStack_4a8._4_4_;
        fStack_490 = (fVar103 * fVar70 + fVar59 * fVar60 + fVar58 * fVar39 + fVar99) -
                     (float)uStack_4a0;
        fStack_48c = (fVar103 * 0.0 + fVar59 * 0.0 + fVar39 * 0.0 + 1.0) - uStack_4a0._4_4_;
        (**(code **)(*(long *)pSVar35 + 0xa0))
                  (pSVar35,auStack_4a8,&uStack_24c,&uStack_4d0,local_260,pSStack_248);
      }
      else {
        pauVar26 = (undefined1 (*) [16])(uVar28 * 0x40 + *(long *)(this + 0x80));
        auVar66._4_4_ = _UNK_0010a0b4;
        auVar66._0_4_ = __LC16;
        auVar66._8_4_ = _UNK_0010a0b8;
        auVar66._12_4_ = _UNK_0010a0bc;
        auVar42 = *pauVar26;
        auVar6._10_2_ = 0;
        auVar6._0_10_ = auVar42._0_10_;
        auVar6._12_2_ = auVar42._6_2_;
        auVar12._8_2_ = auVar42._4_2_;
        auVar12._0_8_ = auVar42._0_8_;
        auVar12._10_4_ = auVar6._10_4_;
        auVar18._6_8_ = 0;
        auVar18._0_6_ = auVar12._8_6_;
        auVar75._6_8_ = SUB148(auVar18 << 0x40,6);
        auVar75._4_2_ = auVar42._2_2_;
        auVar75._0_2_ = auVar42._0_2_;
        auVar75._2_2_ = 0;
        auVar75._14_2_ = 0;
        auVar41 = auVar66 & auVar75;
        auVar42 = __LC13 & auVar75;
        iVar40 = auVar42._0_4_ * 0x2000;
        iVar50 = auVar42._4_4_ * 0x2000;
        iVar53 = auVar42._8_4_ * 0x2000;
        iVar55 = auVar42._12_4_ * 0x2000;
        uVar89 = __LC14 + iVar40;
        uVar91 = _UNK_0010a0a4 + iVar50;
        uVar92 = _UNK_0010a0a8 + iVar53;
        uVar93 = _UNK_0010a0ac + iVar55;
        uVar37 = (int)-(uint)(auVar41._0_4_ == __LC16) >> 0x1f;
        uVar49 = (int)-(uint)(auVar41._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar51 = (int)-(uint)(auVar41._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar54 = (int)-(uint)(auVar41._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar84 = (int)-(uint)(auVar41._0_4_ == 0) >> 0x1f;
        uVar86 = (int)-(uint)(auVar41._4_4_ == 0) >> 0x1f;
        uVar87 = (int)-(uint)(auVar41._8_4_ == 0) >> 0x1f;
        uVar88 = (int)-(uint)(auVar41._12_4_ == 0) >> 0x1f;
        auVar75 = auVar75 & __LC21;
        auVar42 = *pauVar26;
        uVar94 = auVar42._8_4_;
        auVar72._0_8_ = auVar42._8_8_;
        auVar72._8_4_ = uVar94;
        fVar60 = (float)(auVar75._0_4_ << 0x10 |
                        (uint)((float)(iVar40 + __LC18) + _LC20) & uVar84 |
                        ~uVar84 & (uVar37 & (uVar89 | __LC17) | ~uVar37 & uVar89));
        fVar64 = (float)(auVar75._4_4_ << 0x10 |
                        (uint)((float)(iVar50 + _UNK_0010a0d4) + _LC20) & uVar86 |
                        ~uVar86 & (uVar49 & (uVar91 | _UNK_0010a0c4) | ~uVar49 & uVar91));
        fVar70 = (float)(auVar75._8_4_ << 0x10 |
                        (uint)((float)(iVar53 + _UNK_0010a0d8) + _LC20) & uVar87 |
                        ~uVar87 & (uVar51 & (uVar92 | _UNK_0010a0c8) | ~uVar51 & uVar92));
        fVar71 = (float)(auVar75._12_4_ << 0x10 |
                        (uint)((float)(iVar55 + _UNK_0010a0dc) + _LC20) & uVar88 |
                        ~uVar88 & (uVar54 & (uVar93 | _UNK_0010a0cc) | ~uVar54 & uVar93));
        auVar1._10_2_ = 0;
        auVar1._0_10_ = auVar72._0_10_;
        auVar1._12_2_ = auVar42._14_2_;
        auVar7._8_2_ = auVar42._12_2_;
        auVar7._0_8_ = auVar72._0_8_;
        auVar7._10_4_ = auVar1._10_4_;
        auVar19._6_8_ = 0;
        auVar19._0_6_ = auVar7._8_6_;
        auVar13._4_2_ = auVar42._10_2_;
        auVar13._0_4_ = uVar94;
        auVar13._6_8_ = SUB148(auVar19 << 0x40,6);
        auVar76._0_4_ = uVar94 & 0xffff;
        auVar76._4_10_ = auVar13._4_10_;
        auVar76._14_2_ = 0;
        auVar41 = auVar66 & auVar76;
        auVar42 = __LC13 & auVar76;
        auVar76 = auVar76 & __LC21;
        iVar40 = auVar42._0_4_ * 0x2000;
        iVar50 = auVar42._4_4_ * 0x2000;
        iVar53 = auVar42._8_4_ * 0x2000;
        iVar55 = auVar42._12_4_ * 0x2000;
        uVar84 = __LC14 + iVar40;
        uVar86 = _UNK_0010a0a4 + iVar50;
        uVar87 = _UNK_0010a0a8 + iVar53;
        uVar94 = _UNK_0010a0ac + iVar55;
        uVar37 = (int)-(uint)(auVar41._0_4_ == __LC16) >> 0x1f;
        uVar49 = (int)-(uint)(auVar41._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar51 = (int)-(uint)(auVar41._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar54 = (int)-(uint)(auVar41._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar88 = (int)-(uint)(auVar41._0_4_ == 0) >> 0x1f;
        uVar89 = (int)-(uint)(auVar41._4_4_ == 0) >> 0x1f;
        uVar91 = (int)-(uint)(auVar41._8_4_ == 0) >> 0x1f;
        uVar92 = (int)-(uint)(auVar41._12_4_ == 0) >> 0x1f;
        auVar42 = pauVar26[1];
        auVar2._10_2_ = 0;
        auVar2._0_10_ = auVar42._0_10_;
        auVar2._12_2_ = auVar42._6_2_;
        auVar8._8_2_ = auVar42._4_2_;
        auVar8._0_8_ = auVar42._0_8_;
        auVar8._10_4_ = auVar2._10_4_;
        auVar20._6_8_ = 0;
        auVar20._0_6_ = auVar8._8_6_;
        auVar77._6_8_ = SUB148(auVar20 << 0x40,6);
        auVar77._4_2_ = auVar42._2_2_;
        auVar77._0_2_ = auVar42._0_2_;
        auVar77._2_2_ = 0;
        auVar77._14_2_ = 0;
        fVar110 = (float)(auVar76._0_4_ << 0x10 |
                         (uint)((float)(iVar40 + __LC18) + _LC20) & uVar88 |
                         ~uVar88 & (uVar37 & (uVar84 | __LC17) | ~uVar37 & uVar84));
        fVar114 = (float)(auVar76._4_4_ << 0x10 |
                         (uint)((float)(iVar50 + _UNK_0010a0d4) + _LC20) & uVar89 |
                         ~uVar89 & (uVar49 & (uVar86 | _UNK_0010a0c4) | ~uVar49 & uVar86));
        fVar116 = (float)(auVar76._8_4_ << 0x10 |
                         (uint)((float)(iVar53 + _UNK_0010a0d8) + _LC20) & uVar91 |
                         ~uVar91 & (uVar51 & (uVar87 | _UNK_0010a0c8) | ~uVar51 & uVar87));
        fVar118 = (float)(auVar76._12_4_ << 0x10 |
                         (uint)((float)(iVar55 + _UNK_0010a0dc) + _LC20) & uVar92 |
                         ~uVar92 & (uVar54 & (uVar94 | _UNK_0010a0cc) | ~uVar54 & uVar94));
        auVar41 = auVar66 & auVar77;
        auVar42 = __LC13 & auVar77;
        auVar77 = auVar77 & __LC21;
        iVar40 = auVar42._0_4_ * 0x2000;
        iVar50 = auVar42._4_4_ * 0x2000;
        iVar53 = auVar42._8_4_ * 0x2000;
        iVar55 = auVar42._12_4_ * 0x2000;
        uVar37 = __LC14 + iVar40;
        uVar51 = _UNK_0010a0a4 + iVar50;
        uVar84 = _UNK_0010a0a8 + iVar53;
        uVar87 = _UNK_0010a0ac + iVar55;
        uVar49 = (int)-(uint)(auVar41._0_4_ == __LC16) >> 0x1f;
        uVar54 = (int)-(uint)(auVar41._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar86 = (int)-(uint)(auVar41._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar94 = (int)-(uint)(auVar41._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar88 = (int)-(uint)(auVar41._0_4_ == 0) >> 0x1f;
        uVar89 = (int)-(uint)(auVar41._4_4_ == 0) >> 0x1f;
        uVar91 = (int)-(uint)(auVar41._8_4_ == 0) >> 0x1f;
        uVar92 = (int)-(uint)(auVar41._12_4_ == 0) >> 0x1f;
        auVar42 = pauVar26[1];
        fVar83 = (float)(auVar77._0_4_ << 0x10 |
                        (uint)((float)(iVar40 + __LC18) + _LC20) & uVar88 |
                        ~uVar88 & (uVar49 & (uVar37 | __LC17) | ~uVar49 & uVar37));
        fVar108 = (float)(auVar77._4_4_ << 0x10 |
                         (uint)((float)(iVar50 + _UNK_0010a0d4) + _LC20) & uVar89 |
                         ~uVar89 & (uVar54 & (uVar51 | _UNK_0010a0c4) | ~uVar54 & uVar51));
        fVar109 = (float)(auVar77._8_4_ << 0x10 |
                         (uint)((float)(iVar53 + _UNK_0010a0d8) + _LC20) & uVar91 |
                         ~uVar91 & (uVar86 & (uVar84 | _UNK_0010a0c8) | ~uVar86 & uVar84));
        fVar107 = (float)(auVar77._12_4_ << 0x10 |
                         (uint)((float)(iVar55 + _UNK_0010a0dc) + _LC20) & uVar92 |
                         ~uVar92 & (uVar94 & (uVar87 | _UNK_0010a0cc) | ~uVar94 & uVar87));
        uVar37 = auVar42._8_4_;
        auVar73._0_8_ = auVar42._8_8_;
        auVar73._8_4_ = uVar37;
        auVar3._10_2_ = 0;
        auVar3._0_10_ = auVar73._0_10_;
        auVar3._12_2_ = auVar42._14_2_;
        auVar9._8_2_ = auVar42._12_2_;
        auVar9._0_8_ = auVar73._0_8_;
        auVar9._10_4_ = auVar3._10_4_;
        auVar21._6_8_ = 0;
        auVar21._0_6_ = auVar9._8_6_;
        auVar14._4_2_ = auVar42._10_2_;
        auVar14._0_4_ = uVar37;
        auVar14._6_8_ = SUB148(auVar21 << 0x40,6);
        auVar78._0_4_ = uVar37 & 0xffff;
        auVar78._4_10_ = auVar14._4_10_;
        auVar78._14_2_ = 0;
        auVar42 = __LC13 & auVar78;
        auVar41 = auVar66 & auVar78;
        auVar78 = auVar78 & __LC21;
        iVar40 = auVar42._0_4_ * 0x2000;
        iVar50 = auVar42._4_4_ * 0x2000;
        iVar53 = auVar42._8_4_ * 0x2000;
        iVar55 = auVar42._12_4_ * 0x2000;
        uVar37 = __LC14 + iVar40;
        uVar51 = _UNK_0010a0a4 + iVar50;
        uVar84 = _UNK_0010a0a8 + iVar53;
        uVar87 = _UNK_0010a0ac + iVar55;
        uVar49 = (int)-(uint)(auVar41._0_4_ == __LC16) >> 0x1f;
        uVar54 = (int)-(uint)(auVar41._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar86 = (int)-(uint)(auVar41._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar94 = (int)-(uint)(auVar41._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar88 = (int)-(uint)(auVar41._0_4_ == 0) >> 0x1f;
        uVar89 = (int)-(uint)(auVar41._4_4_ == 0) >> 0x1f;
        uVar91 = (int)-(uint)(auVar41._8_4_ == 0) >> 0x1f;
        uVar92 = (int)-(uint)(auVar41._12_4_ == 0) >> 0x1f;
        fVar59 = (float)(auVar78._0_4_ << 0x10 |
                        (uint)((float)(iVar40 + __LC18) + _LC20) & uVar88 |
                        ~uVar88 & (uVar49 & (uVar37 | __LC17) | ~uVar49 & uVar37));
        fVar99 = (float)(auVar78._4_4_ << 0x10 |
                        (uint)((float)(iVar50 + _UNK_0010a0d4) + _LC20) & uVar89 |
                        ~uVar89 & (uVar54 & (uVar51 | _UNK_0010a0c4) | ~uVar54 & uVar51));
        fVar103 = (float)(auVar78._8_4_ << 0x10 |
                         (uint)((float)(iVar53 + _UNK_0010a0d8) + _LC20) & uVar91 |
                         ~uVar91 & (uVar86 & (uVar84 | _UNK_0010a0c8) | ~uVar86 & uVar84));
        fVar63 = (float)(auVar78._12_4_ << 0x10 |
                        (uint)((float)(iVar55 + _UNK_0010a0dc) + _LC20) & uVar92 |
                        ~uVar92 & (uVar94 & (uVar87 | _UNK_0010a0cc) | ~uVar94 & uVar87));
        auVar42 = pauVar26[2];
        auVar4._10_2_ = 0;
        auVar4._0_10_ = auVar42._0_10_;
        auVar4._12_2_ = auVar42._6_2_;
        auVar10._8_2_ = auVar42._4_2_;
        auVar10._0_8_ = auVar42._0_8_;
        auVar10._10_4_ = auVar4._10_4_;
        auVar22._6_8_ = 0;
        auVar22._0_6_ = auVar10._8_6_;
        auVar15._4_2_ = auVar42._2_2_;
        auVar15._0_4_ = auVar42._0_4_;
        auVar15._6_8_ = SUB148(auVar22 << 0x40,6);
        auVar61._0_4_ = auVar42._0_4_ & 0xffff;
        auVar61._4_10_ = auVar15._4_10_;
        auVar61._14_2_ = 0;
        auVar41 = auVar66 & auVar61;
        auVar42 = __LC13 & auVar61;
        auVar61 = auVar61 & __LC21;
        iVar40 = auVar42._0_4_ * 0x2000;
        iVar50 = auVar42._4_4_ * 0x2000;
        iVar53 = auVar42._8_4_ * 0x2000;
        iVar55 = auVar42._12_4_ * 0x2000;
        uVar88 = __LC14 + iVar40;
        uVar89 = _UNK_0010a0a4 + iVar50;
        uVar91 = _UNK_0010a0a8 + iVar53;
        uVar92 = _UNK_0010a0ac + iVar55;
        uVar37 = (int)-(uint)(auVar41._0_4_ == __LC16) >> 0x1f;
        uVar49 = (int)-(uint)(auVar41._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar51 = (int)-(uint)(auVar41._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar54 = (int)-(uint)(auVar41._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar84 = (int)-(uint)(auVar41._0_4_ == 0) >> 0x1f;
        uVar86 = (int)-(uint)(auVar41._4_4_ == 0) >> 0x1f;
        uVar87 = (int)-(uint)(auVar41._8_4_ == 0) >> 0x1f;
        uVar94 = (int)-(uint)(auVar41._12_4_ == 0) >> 0x1f;
        fVar39 = (float)(auVar61._0_4_ << 0x10 |
                        (uint)((float)(iVar40 + __LC18) + _LC20) & uVar84 |
                        ~uVar84 & (uVar37 & (uVar88 | __LC17) | ~uVar37 & uVar88));
        fVar38 = (float)(auVar61._4_4_ << 0x10 |
                        (uint)((float)(iVar50 + _UNK_0010a0d4) + _LC20) & uVar86 |
                        ~uVar86 & (uVar49 & (uVar89 | _UNK_0010a0c4) | ~uVar49 & uVar89));
        fVar58 = (float)(auVar61._8_4_ << 0x10 |
                        (uint)((float)(iVar53 + _UNK_0010a0d8) + _LC20) & uVar87 |
                        ~uVar87 & (uVar51 & (uVar91 | _UNK_0010a0c8) | ~uVar51 & uVar91));
        fVar69 = (float)(auVar61._12_4_ << 0x10 |
                        (uint)((float)(iVar55 + _UNK_0010a0dc) + _LC20) & uVar94 |
                        ~uVar94 & (uVar54 & (uVar92 | _UNK_0010a0cc) | ~uVar54 & uVar92));
        auVar42 = pauVar26[2];
        auVar74._8_4_ = auVar42._8_4_;
        auVar74._0_8_ = auVar42._8_8_;
        auVar5._10_2_ = 0;
        auVar5._0_10_ = auVar74._0_10_;
        auVar5._12_2_ = auVar42._14_2_;
        auVar11._8_2_ = auVar42._12_2_;
        auVar11._0_8_ = auVar74._0_8_;
        auVar11._10_4_ = auVar5._10_4_;
        auVar23._6_8_ = 0;
        auVar23._0_6_ = auVar11._8_6_;
        auVar16._4_2_ = auVar42._10_2_;
        auVar16._0_4_ = auVar74._8_4_;
        auVar16._6_8_ = SUB148(auVar23 << 0x40,6);
        auVar43._0_4_ = auVar74._8_4_ & 0xffff;
        auVar43._4_10_ = auVar16._4_10_;
        auVar43._14_2_ = 0;
        auVar66 = auVar66 & auVar43;
        auVar42 = __LC13 & auVar43;
        auVar43 = __LC21 & auVar43;
        iVar40 = auVar42._0_4_ * 0x2000;
        iVar50 = auVar42._4_4_ * 0x2000;
        iVar53 = auVar42._8_4_ * 0x2000;
        iVar55 = auVar42._12_4_ * 0x2000;
        uVar88 = __LC14 + iVar40;
        uVar89 = _UNK_0010a0a4 + iVar50;
        uVar91 = _UNK_0010a0a8 + iVar53;
        uVar92 = _UNK_0010a0ac + iVar55;
        uVar37 = (int)-(uint)(__LC16 == auVar66._0_4_) >> 0x1f;
        uVar49 = (int)-(uint)(_UNK_0010a0b4 == auVar66._4_4_) >> 0x1f;
        uVar51 = (int)-(uint)(_UNK_0010a0b8 == auVar66._8_4_) >> 0x1f;
        uVar54 = (int)-(uint)(_UNK_0010a0bc == auVar66._12_4_) >> 0x1f;
        uVar84 = (int)-(uint)(auVar66._0_4_ == 0) >> 0x1f;
        uVar86 = (int)-(uint)(auVar66._4_4_ == 0) >> 0x1f;
        uVar87 = (int)-(uint)(auVar66._8_4_ == 0) >> 0x1f;
        uVar94 = (int)-(uint)(auVar66._12_4_ == 0) >> 0x1f;
        lVar27 = (long)iVar32;
        fVar111 = (float)(auVar43._0_4_ << 0x10 |
                         (uint)((float)(iVar40 + __LC18) + _LC20) & uVar84 |
                         ~uVar84 & (uVar37 & (uVar88 | __LC17) | ~uVar37 & uVar88));
        fVar115 = (float)(auVar43._4_4_ << 0x10 |
                         (uint)((float)(iVar50 + _UNK_0010a0d4) + _LC20) & uVar86 |
                         ~uVar86 & (uVar49 & (uVar89 | _UNK_0010a0c4) | ~uVar49 & uVar89));
        fVar117 = (float)(auVar43._8_4_ << 0x10 |
                         (uint)((float)(iVar53 + _UNK_0010a0d8) + _LC20) & uVar87 |
                         ~uVar87 & (uVar51 & (uVar91 | _UNK_0010a0c8) | ~uVar51 & uVar91));
        fVar119 = (float)(auVar43._12_4_ << 0x10 |
                         (uint)((float)(iVar55 + _UNK_0010a0dc) + _LC20) & uVar94 |
                         ~uVar94 & (uVar54 & (uVar92 | _UNK_0010a0cc) | ~uVar54 & uVar92));
        fVar52 = *(float *)local_268;
        fVar102 = *(float *)(local_268 + 4);
        fVar65 = *(float *)(local_268 + 8);
        auVar100._0_8_ =
             CONCAT44((fVar64 - fVar52) * (float)auStack_288._0_4_,
                      (fVar60 - fVar52) * (float)auStack_288._0_4_);
        auVar100._8_4_ = (fVar70 - fVar52) * (float)auStack_288._0_4_;
        auVar100._12_4_ = (fVar71 - fVar52) * (float)auStack_288._0_4_;
        auVar106._0_4_ = (fVar59 - fVar52) * (float)auStack_288._0_4_;
        auVar106._4_4_ = (fVar99 - fVar52) * (float)auStack_288._0_4_;
        auVar106._8_4_ = (fVar103 - fVar52) * (float)auStack_288._0_4_;
        auVar106._12_4_ = (fVar63 - fVar52) * (float)auStack_288._0_4_;
        auVar105._0_4_ = (fVar39 - fVar102) * (float)auStack_288._4_4_;
        auVar105._4_4_ = (fVar38 - fVar102) * (float)auStack_288._4_4_;
        auVar105._8_4_ = (fVar58 - fVar102) * (float)auStack_288._4_4_;
        auVar105._12_4_ = (fVar69 - fVar102) * (float)auStack_288._4_4_;
        auVar97._0_8_ =
             CONCAT44((fVar114 - fVar102) * (float)auStack_288._4_4_,
                      (fVar110 - fVar102) * (float)auStack_288._4_4_);
        auVar97._8_4_ = (fVar116 - fVar102) * (float)auStack_288._4_4_;
        auVar97._12_4_ = (fVar118 - fVar102) * (float)auStack_288._4_4_;
        auVar104._0_4_ = (fVar111 - fVar65) * fStack_280;
        auVar104._4_4_ = (fVar115 - fVar65) * fStack_280;
        auVar104._8_4_ = (fVar117 - fVar65) * fStack_280;
        auVar104._12_4_ = (fVar119 - fVar65) * fStack_280;
        auVar95._0_8_ = CONCAT44((fVar108 - fVar65) * fStack_280,(fVar83 - fVar65) * fStack_280);
        auVar95._8_4_ = (fVar109 - fVar65) * fStack_280;
        auVar95._12_4_ = (fVar107 - fVar65) * fStack_280;
        auVar67._8_4_ = auVar100._8_4_;
        auVar67._0_8_ = auVar100._0_8_;
        auVar67._12_4_ = auVar100._12_4_;
        auVar42 = minps(auVar67,auVar106);
        uVar37 = (int)uStack_278 >> 0x1f;
        auVar101 = maxps(auVar100,auVar106);
        auVar112._8_4_ = auVar97._8_4_;
        auVar112._0_8_ = auVar97._0_8_;
        auVar112._12_4_ = auVar97._12_4_;
        auVar98 = maxps(auVar97,auVar105);
        auVar79._0_4_ = ~uVar37 & auVar42._0_4_;
        auVar79._4_4_ = ~uVar37 & auVar42._4_4_;
        auVar79._8_4_ = ~uVar37 & auVar42._8_4_;
        auVar79._12_4_ = ~uVar37 & auVar42._12_4_;
        auVar42 = minps(auVar112,auVar105);
        auVar68._0_4_ = _LC1 & uVar37;
        auVar68._4_4_ = _LC1 & uVar37;
        auVar68._8_4_ = _LC1 & uVar37;
        auVar68._12_4_ = _LC1 & uVar37;
        uVar49 = (int)uStack_274 >> 0x1f;
        auVar80._0_4_ = ~uVar49 & auVar42._0_4_;
        auVar80._4_4_ = ~uVar49 & auVar42._4_4_;
        auVar80._8_4_ = ~uVar49 & auVar42._8_4_;
        auVar80._12_4_ = ~uVar49 & auVar42._12_4_;
        auVar113._0_4_ = _LC1 & uVar49;
        auVar113._4_4_ = _LC1 & uVar49;
        auVar113._8_4_ = _LC1 & uVar49;
        auVar113._12_4_ = _LC1 & uVar49;
        auVar81._8_4_ = auVar95._8_4_;
        auVar81._0_8_ = auVar95._0_8_;
        auVar81._12_4_ = auVar95._12_4_;
        auVar96 = maxps(auVar95,auVar104);
        auVar41 = minps(auVar81,auVar104);
        auVar42 = maxps(auVar68 | auVar79,auVar113 | auVar80);
        uVar51 = (int)uStack_270 >> 0x1f;
        uStack_4e8 = auVar41._0_4_;
        uStack_4e4 = auVar41._4_4_;
        uStack_4e0 = auVar41._8_4_;
        uStack_4dc = auVar41._12_4_;
        auVar44._0_4_ = ~uVar51 & uStack_4e8;
        auVar44._4_4_ = ~uVar51 & uStack_4e4;
        auVar44._8_4_ = ~uVar51 & uStack_4e0;
        auVar44._12_4_ = ~uVar51 & uStack_4dc;
        auVar90._0_4_ = _LC1 & uVar51;
        auVar90._4_4_ = _LC1 & uVar51;
        auVar90._8_4_ = _LC1 & uVar51;
        auVar90._12_4_ = _LC1 & uVar51;
        auVar45._0_4_ = ~uVar37 & auVar101._0_4_;
        auVar45._4_4_ = ~uVar37 & auVar101._4_4_;
        auVar45._8_4_ = ~uVar37 & auVar101._8_4_;
        auVar45._12_4_ = ~uVar37 & auVar101._12_4_;
        auVar41 = maxps(auVar42,auVar90 | auVar44);
        auVar56._0_4_ = uVar37 & _LC3;
        auVar56._4_4_ = uVar37 & _LC3;
        auVar56._8_4_ = uVar37 & _LC3;
        auVar56._12_4_ = uVar37 & _LC3;
        auVar85._0_4_ = uVar49 & _LC3;
        auVar85._4_4_ = uVar49 & _LC3;
        auVar85._8_4_ = uVar49 & _LC3;
        auVar85._12_4_ = uVar49 & _LC3;
        auVar46._0_4_ = ~uVar49 & auVar98._0_4_;
        auVar46._4_4_ = ~uVar49 & auVar98._4_4_;
        auVar46._8_4_ = ~uVar49 & auVar98._8_4_;
        auVar46._12_4_ = ~uVar49 & auVar98._12_4_;
        auVar82._0_4_ = uVar51 & _LC3;
        auVar82._4_4_ = uVar51 & _LC3;
        auVar82._8_4_ = uVar51 & _LC3;
        auVar82._12_4_ = uVar51 & _LC3;
        auVar42 = minps(auVar56 | auVar45,auVar85 | auVar46);
        auVar47._0_4_ = ~uVar51 & auVar96._0_4_;
        auVar47._4_4_ = ~uVar51 & auVar96._4_4_;
        auVar47._8_4_ = ~uVar51 & auVar96._8_4_;
        auVar47._12_4_ = ~uVar51 & auVar96._12_4_;
        auVar42 = minps(auVar42,auVar82 | auVar47);
        uVar87 = (uint)*(undefined8 *)pauVar26[3];
        uVar88 = (uint)((ulong)*(undefined8 *)pauVar26[3] >> 0x20);
        uVar94 = (uint)*(undefined8 *)(pauVar26[3] + 8);
        uVar89 = (uint)((ulong)*(undefined8 *)(pauVar26[3] + 8) >> 0x20);
        uVar37 = (int)(-(uint)((auVar42._0_4_ < auVar41._0_4_ || auVar42._0_4_ < 0.0) ||
                              (fVar59 < fVar60 || fVar39 < fVar110)) |
                       -(uint)(fVar52 < fVar60 || fVar59 < fVar52) & uStack_278 |
                       -(uint)(fVar39 < fVar102 || fVar102 < fVar110) & uStack_274 |
                      -(uint)(fVar111 < fVar65 || fVar65 < fVar83) & uStack_270 |
                      -(uint)(fVar111 < fVar83)) >> 0x1f;
        uVar49 = (int)(-(uint)((auVar42._4_4_ < auVar41._4_4_ || auVar42._4_4_ < 0.0) ||
                              (fVar99 < fVar64 || fVar38 < fVar114)) |
                       -(uint)(fVar52 < fVar64 || fVar99 < fVar52) & uStack_278 |
                       -(uint)(fVar38 < fVar102 || fVar102 < fVar114) & uStack_274 |
                      -(uint)(fVar115 < fVar65 || fVar65 < fVar108) & uStack_270 |
                      -(uint)(fVar115 < fVar108)) >> 0x1f;
        uVar51 = (int)(-(uint)((auVar42._8_4_ < auVar41._8_4_ || auVar42._8_4_ < 0.0) ||
                              (fVar103 < fVar70 || fVar58 < fVar116)) |
                       -(uint)(fVar52 < fVar70 || fVar103 < fVar52) & uStack_278 |
                       -(uint)(fVar58 < fVar102 || fVar102 < fVar116) & uStack_274 |
                      -(uint)(fVar117 < fVar65 || fVar65 < fVar109) & uStack_270 |
                      -(uint)(fVar117 < fVar109)) >> 0x1f;
        uVar54 = (int)(-(uint)((auVar42._12_4_ < auVar41._12_4_ || auVar42._12_4_ < 0.0) ||
                              (fVar63 < fVar71 || fVar69 < fVar118)) |
                       -(uint)(fVar52 < fVar71 || fVar63 < fVar52) & uStack_278 |
                       -(uint)(fVar69 < fVar102 || fVar102 < fVar118) & uStack_274 |
                      -(uint)(fVar119 < fVar65 || fVar65 < fVar107) & uStack_270 |
                      -(uint)(fVar119 < fVar107)) >> 0x1f;
        fVar52 = (float)(_LC3 & uVar37 | ~uVar37 & (uint)auVar41._0_4_);
        fVar102 = (float)(_LC3 & uVar49 | ~uVar49 & (uint)auVar41._4_4_);
        fVar38 = (float)(_LC3 & uVar51 | ~uVar51 & (uint)auVar41._8_4_);
        fVar58 = (float)(_LC3 & uVar54 | ~uVar54 & (uint)auVar41._12_4_);
        uVar37 = (int)-(uint)(fVar52 < fVar38) >> 0x1f;
        uVar49 = (int)-(uint)(fVar102 < fVar58) >> 0x1f;
        fVar65 = (float)((uint)fVar38 & uVar37 | ~uVar37 & (uint)fVar52);
        fVar39 = (float)((uint)fVar58 & uVar49 | ~uVar49 & (uint)fVar102);
        fVar38 = (float)((uint)fVar52 & uVar37 | ~uVar37 & (uint)fVar38);
        fVar58 = (float)((uint)fVar102 & uVar49 | ~uVar49 & (uint)fVar58);
        uVar84 = ~uVar37 & uVar87 | uVar37 & uVar94;
        uVar86 = ~uVar49 & uVar88 | uVar49 & uVar89;
        uVar94 = ~uVar37 & uVar94 | uVar37 & uVar87;
        uVar88 = ~uVar49 & uVar89 | uVar49 & uVar88;
        uVar37 = (int)-(uint)(fVar65 < fVar39) >> 0x1f;
        uVar51 = (int)-(uint)(fVar38 < fVar58) >> 0x1f;
        fVar52 = (float)((uint)fVar65 & uVar37 | ~uVar37 & (uint)fVar39);
        fVar102 = (float)((uint)fVar58 & uVar51 | ~uVar51 & (uint)fVar38);
        uVar49 = uVar37 & uVar84 | ~uVar37 & uVar86;
        uVar54 = uVar51 & uVar88 | ~uVar51 & uVar94;
        uVar87 = (int)-(uint)(fVar52 < fVar102) >> 0x1f;
        auVar62._4_4_ = ~uVar87 & (uint)fVar52;
        auVar62._0_4_ = (uint)fVar39 & uVar37 | ~uVar37 & (uint)fVar65;
        auVar62._8_4_ = ~uVar87 & (uint)fVar102;
        auVar62._12_4_ = (uint)fVar38 & uVar51 | ~uVar51 & (uint)fVar58;
        auVar17._4_4_ = (uint)fVar52 & uVar87;
        auVar17._0_4_ = (uint)fVar102 & uVar87;
        auVar17._8_8_ = 0;
        auStack_4c8._4_4_ = ~uVar87 & uVar49;
        auStack_4c8._0_4_ = uVar37 & uVar86 | ~uVar37 & uVar84;
        auStack_4c8._8_4_ = ~uVar87 & uVar54;
        auStack_4c8._12_4_ = uVar51 & uVar94 | ~uVar51 & uVar88;
        auVar101._4_4_ = uVar87 & uVar49;
        auVar101._0_4_ = uVar87 & uVar54;
        auVar101._8_8_ = 0;
        auVar62 = auVar17 << 0x20 | auVar62;
        auStack_4c8 = auVar101 << 0x20 | auStack_4c8;
        fVar52 = *(float *)(local_260 + 8);
        auVar48._4_4_ = -(uint)(auVar62._4_4_ < fVar52);
        auVar48._0_4_ = -(uint)(auVar62._0_4_ < fVar52);
        auVar48._8_4_ = -(uint)(auVar62._8_4_ < fVar52);
        auVar48._12_4_ = -(uint)(auVar62._12_4_ < fVar52);
        uVar49 = movmskps((int)pSVar35,auVar48);
        pSVar35 = (StaticCompoundShape *)(ulong)uVar49;
        uVar37 = __popcountdi2();
        _auStack_4a8 = auVar62;
        if (uVar49 == 0) {
          _auStack_4a8 = (undefined1  [16])0x0;
          aSVar57 = (StaticCompoundShape  [16])0x0;
        }
        else {
          aSStack_4b8[0] = (StaticCompoundShape)0x0;
          aSStack_4b8[1] = (StaticCompoundShape)0x0;
          aSStack_4b8[2] = (StaticCompoundShape)0x0;
          aSStack_4b8[3] = (StaticCompoundShape)0x0;
          aSStack_4b8[4] = (StaticCompoundShape)0x0;
          aSStack_4b8[5] = (StaticCompoundShape)0x0;
          aSStack_4b8[6] = (StaticCompoundShape)0x0;
          aSStack_4b8[7] = (StaticCompoundShape)0x0;
          aSStack_4b8[8] = (StaticCompoundShape)0x0;
          aSStack_4b8[9] = (StaticCompoundShape)0x0;
          aSStack_4b8[10] = (StaticCompoundShape)0x0;
          aSStack_4b8[0xb] = (StaticCompoundShape)0x0;
          aSStack_4b8[0xc] = (StaticCompoundShape)0x0;
          aSStack_4b8[0xd] = (StaticCompoundShape)0x0;
          aSStack_4b8[0xe] = (StaticCompoundShape)0x0;
          aSStack_4b8[0xf] = (StaticCompoundShape)0x0;
          uVar28 = (ulong)uVar37 << 2;
          pSVar35 = aSStack_4b8;
          lVar31 = (4 - (long)(int)uVar37) * 4;
          pSVar33 = (StaticCompoundShape *)auStack_4a8 + lVar31;
          if (7 < (uint)uVar28) {
            for (uVar30 = uVar28 >> 3 & 0x1fffffff; uVar30 != 0; uVar30 = uVar30 - 1) {
              *(long *)pSVar35 = *(long *)pSVar33;
              pSVar33 = pSVar33 + (ulong)bVar36 * -0x10 + 8;
              pSVar35 = pSVar35 + (ulong)bVar36 * -0x10 + 8;
            }
          }
          if ((uVar28 & 4) != 0) {
            *(undefined4 *)pSVar35 = *(undefined4 *)pSVar33;
          }
          plVar34 = (long *)(auStack_4c8 + lVar31);
          _auStack_4a8 = (undefined1  [16])0x0;
          pSVar33 = (StaticCompoundShape *)auStack_4a8;
          if (7 < (uint)uVar28) {
            pSVar35 = (StaticCompoundShape *)auStack_4a8;
            for (uVar30 = uVar28 >> 3 & 0x1fffffff; pSVar33 = pSVar35, uVar30 != 0;
                uVar30 = uVar30 - 1) {
              *(long *)pSVar35 = *plVar34;
              plVar34 = plVar34 + (ulong)bVar36 * -2 + 1;
              pSVar35 = pSVar35 + (ulong)bVar36 * -0x10 + 8;
            }
          }
          aSVar57 = aSStack_4b8;
          if ((uVar28 & 4) != 0) {
            *(int *)pSVar33 = (int)*plVar34;
          }
        }
        uVar24 = uStack_4a0;
        *(StaticCompoundShape (*) [16])(afStack_240 + lVar27) = aSVar57;
        iVar32 = iVar32 + uVar37;
        auStack_4c8 = _auStack_4a8;
        *(undefined1 (*) [8])(auStack_488 + lVar27) = auStack_4a8;
        *(undefined8 *)((long)auStack_480 + lVar27 * 4) = uVar24;
      }
      if (*(float *)(local_260 + 8) <= 0.0) {
LAB_0010183a:
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
    uVar28 = (long)(iVar32 + -1);
    do {
      uVar25 = uVar28;
      if ((int)uVar25 == -1) goto LAB_0010183a;
      uVar28 = uVar25 - 1;
    } while (*(float *)(local_260 + 8) < afStack_240[uVar25] ||
             *(float *)(local_260 + 8) == afStack_240[uVar25]);
    uVar30 = uVar25 & 0xffffffff;
    uVar28 = (ulong)auStack_488[(int)uVar25];
  } while( true );
}



/* JPH::StaticCompoundShape::CastRay(JPH::RayCast const&, JPH::RayCastSettings const&,
   JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay>&, JPH::ShapeFilter const&) const */

void __thiscall
JPH::StaticCompoundShape::CastRay
          (StaticCompoundShape *this,RayCast *param_1,RayCastSettings *param_2,
          SubShapeIDCreator *param_3,CollisionCollector *param_4,ShapeFilter *param_5)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_5 + 0x10))(param_5,this,param_3);
  if (cVar1 == '\0') {
    return;
  }
  CastRay(this,param_1,param_2,param_3,param_4,param_5);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::StaticCompoundShape::CastRay(JPH::RayCast const&, JPH::SubShapeIDCreator const&,
   JPH::RayCastResult&) const */

undefined1 __thiscall
JPH::StaticCompoundShape::CastRay
          (StaticCompoundShape *this,RayCast *param_1,SubShapeIDCreator *param_2,
          RayCastResult *param_3)

{
  undefined1 auVar1 [14];
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
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined8 uVar25;
  char cVar26;
  int iVar27;
  undefined1 (*pauVar28) [16];
  long lVar29;
  ulong uVar30;
  byte bVar31;
  ulong uVar32;
  long lVar33;
  StaticCompoundShape *pSVar34;
  long *plVar35;
  StaticCompoundShape *pSVar36;
  RayCastResult *pRVar37;
  long in_FS_OFFSET;
  byte bVar38;
  uint uVar39;
  int iVar42;
  uint uVar50;
  uint uVar53;
  undefined1 auVar43 [16];
  float fVar40;
  float fVar41;
  float fVar51;
  float fVar54;
  uint uVar56;
  undefined1 auVar44 [16];
  int iVar52;
  int iVar55;
  int iVar57;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar58;
  undefined1 auVar59 [16];
  StaticCompoundShape aSVar60 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  float fVar72;
  undefined1 auVar73 [12];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar74 [12];
  undefined1 auVar79 [16];
  undefined1 auVar75 [12];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar84;
  uint uVar85;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  undefined1 auVar86 [16];
  uint uVar90;
  uint uVar92;
  uint uVar93;
  uint uVar94;
  undefined1 auVar91 [16];
  undefined1 auVar95 [16];
  float fVar96;
  undefined1 auVar97 [16];
  float fVar98;
  float fVar101;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar102 [16];
  float fVar103;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar107;
  undefined1 auVar106 [16];
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  uint uStack_4d8;
  uint uStack_4d4;
  uint uStack_4d0;
  uint uStack_4cc;
  uint uStack_4c0;
  int iStack_4bc;
  undefined1 auStack_4b8 [16];
  StaticCompoundShape aSStack_4a8 [16];
  undefined1 auStack_498 [8];
  undefined8 uStack_490;
  float fStack_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  uint auStack_478 [2];
  undefined8 auStack_470 [63];
  undefined1 auStack_278 [8];
  float fStack_270;
  uint uStack_268;
  uint uStack_264;
  uint uStack_260;
  int iStack_25c;
  RayCast *local_258;
  RayCastResult *local_250;
  undefined8 local_248;
  uint uStack_240;
  undefined1 uStack_23c;
  float afStack_238 [130];
  long local_30;
  
  bVar38 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_258 = param_1;
  local_250 = param_3;
  local_248 = *(undefined8 *)param_2;
  uStack_240 = *(int *)(this + 0x50) - 1;
  if (uStack_240 != 0) {
    iVar42 = 0x1f;
    if (uStack_240 != 0) {
      for (; uStack_240 >> iVar42 == 0; iVar42 = iVar42 + -1) {
      }
    }
    uStack_240 = iVar42 + 1;
  }
  auVar44 = *(undefined1 (*) [16])(param_1 + 0x10);
  uStack_23c = 0;
  auStack_478[0] = 0;
  uVar32 = 0;
  auVar43._0_4_ = 0.0 - auVar44._0_4_;
  auVar43._4_4_ = 0.0 - auVar44._4_4_;
  auVar43._8_4_ = 0.0 - auVar44._8_4_;
  auVar43._12_4_ = 0.0 - auVar44._12_4_;
  uVar30 = 0;
  auVar43 = maxps(auVar43,auVar44);
  uStack_268 = -(uint)(auVar43._0_4_ <= _LC26);
  uStack_264 = -(uint)(auVar43._4_4_ <= _LC26);
  uStack_260 = -(uint)(auVar43._8_4_ <= _LC26);
  iStack_25c = -(uint)(auVar43._12_4_ <= _LC26);
  uVar39 = (int)uStack_268 >> 0x1f;
  uVar50 = (int)uStack_264 >> 0x1f;
  uVar53 = (int)uStack_260 >> 0x1f;
  uVar56 = iStack_25c >> 0x1f;
  auVar100._0_4_ = ~uVar39 & (uint)auVar44._0_4_;
  auVar100._4_4_ = ~uVar50 & (uint)auVar44._4_4_;
  auVar100._8_4_ = ~uVar53 & (uint)auVar44._8_4_;
  auVar100._12_4_ = ~uVar56 & (uint)auVar44._12_4_;
  auVar112._4_4_ = _LC22;
  auVar112._0_4_ = _LC22;
  auVar112._8_4_ = _LC22;
  auVar112._12_4_ = _LC22;
  auVar44._0_4_ = uVar39 & (uint)_LC22;
  auVar44._4_4_ = uVar50 & (uint)_LC22;
  auVar44._8_4_ = uVar53 & (uint)_LC22;
  auVar44._12_4_ = uVar56 & (uint)_LC22;
  _auStack_278 = divps(auVar112,auVar44 | auVar100);
  pSVar36 = this;
  do {
    pRVar37 = local_250;
    iVar27 = (int)uVar32;
    iVar42 = (int)uVar30;
    if (iVar42 != 0x7fffffff) {
      if (iVar42 < 0) {
        plVar35 = (long *)(*(long *)(this + 0x60) + (ulong)(iVar42 + 0x80000000U) * 0x28);
        iStack_4bc = uStack_240 + local_248._4_4_;
        fVar101 = *(float *)(plVar35 + 1);
        fVar67 = *(float *)((long)plVar35 + 0xc);
        fVar41 = *(float *)(plVar35 + 2);
        bVar31 = (byte)((ulong)local_248 >> 0x20);
        uStack_4c0 = ~((int)(1L << ((byte)uStack_240 & 0x3f)) + -1 << (bVar31 & 0x1f)) &
                     (uint)local_248 | iVar42 + 0x80000000U << (bVar31 & 0x1f);
        fVar40 = __LC12;
        uVar39 = _UNK_0010a084;
        fVar54 = _UNK_0010a088;
        fVar61 = _LC22;
        if (*(char *)((long)plVar35 + 0x24) == '\0') {
          fVar61 = *(float *)((long)plVar35 + 0x14);
          fVar40 = *(float *)((long)plVar35 + 0x14);
          uVar39 = *(uint *)(plVar35 + 3);
          fVar54 = *(float *)((long)plVar35 + 0x1c);
          fVar71 = _LC22 - (fVar54 * fVar54 +
                           *(float *)(plVar35 + 3) * *(float *)(plVar35 + 3) + fVar61 * fVar61 + 0.0
                           );
          fVar61 = 0.0;
          if (0.0 <= fVar71) {
            fVar61 = SQRT(fVar71);
          }
        }
        fVar40 = (float)((uint)fVar40 ^ _LC33);
        fVar51 = (float)(uVar39 ^ _UNK_0010a0f4);
        fVar54 = (float)((uint)fVar54 ^ _UNK_0010a0f8);
        fVar61 = (float)((uint)fVar61 ^ _UNK_0010a0fc);
        pSVar36 = (StaticCompoundShape *)*plVar35;
        fVar62 = fVar40 + fVar40;
        fVar96 = fVar51 + fVar51;
        fVar98 = (fVar54 + fVar54) * fVar54;
        fVar103 = (fVar54 + fVar54) * fVar61;
        fVar66 = fVar62 * fVar54 + fVar96 * fVar61;
        fVar71 = fVar62 * fVar54 - fVar96 * fVar61;
        fVar108 = fVar54 * fVar96 - fVar62 * fVar61;
        fVar63 = fVar62 * fVar61 + fVar54 * fVar96;
        fVar72 = (_LC22 - fVar40 * fVar62) - fVar96 * fVar51;
        fVar58 = fVar51 * fVar62 + fVar103;
        fVar103 = fVar51 * fVar62 - fVar103;
        fVar84 = (_LC22 - fVar96 * fVar51) - fVar98;
        fVar98 = (_LC22 - fVar98) - fVar40 * fVar62;
        fVar40 = 0.0 - (fVar101 * fVar84 + fVar67 * fVar103 + fVar41 * fVar66);
        fVar61 = 0.0 - (fVar101 * fVar58 + fVar67 * fVar98 + fVar41 * fVar108);
        fVar62 = 0.0 - (fVar101 * fVar71 + fVar67 * fVar63 + fVar41 * fVar72);
        fVar54 = *(float *)local_258;
        fVar101 = *(float *)(local_258 + 4);
        fVar67 = *(float *)(local_258 + 8);
        fVar41 = fVar54 + *(float *)(local_258 + 0x10);
        fVar51 = fVar101 + *(float *)(local_258 + 0x14);
        fVar96 = fVar67 + *(float *)(local_258 + 0x18);
        auStack_498._0_4_ = fVar54 * fVar84 + fVar101 * fVar103 + fVar67 * fVar66 + fVar40;
        auStack_498._4_4_ = fVar54 * fVar58 + fVar101 * fVar98 + fVar67 * fVar108 + fVar61;
        uStack_490._0_4_ = fVar54 * fVar71 + fVar101 * fVar63 + fVar67 * fVar72 + fVar62;
        uStack_490._4_4_ = fVar54 * 0.0 + fVar101 * 0.0 + fVar67 * 0.0 + 1.0;
        fStack_488 = (fVar96 * fVar66 + fVar51 * fVar103 + fVar84 * fVar41 + fVar40) -
                     (float)auStack_498._0_4_;
        fStack_484 = (fVar96 * fVar108 + fVar51 * fVar98 + fVar58 * fVar41 + fVar61) -
                     (float)auStack_498._4_4_;
        fStack_480 = (fVar96 * fVar72 + fVar51 * fVar63 + fVar71 * fVar41 + fVar62) -
                     (float)uStack_490;
        fStack_47c = (fVar96 * 0.0 + fVar51 * 0.0 + fVar41 * 0.0 + 1.0) - uStack_490._4_4_;
        cVar26 = (**(code **)(*(long *)pSVar36 + 0x98))(pSVar36,auStack_498,&uStack_4c0,local_250);
        if (cVar26 != '\0') {
          uStack_23c = 1;
        }
      }
      else {
        pauVar28 = (undefined1 (*) [16])(uVar30 * 0x40 + *(long *)(this + 0x80));
        auVar68._4_4_ = _UNK_0010a0b4;
        auVar68._0_4_ = __LC16;
        auVar68._8_4_ = _UNK_0010a0b8;
        auVar68._12_4_ = _UNK_0010a0bc;
        auVar44 = *pauVar28;
        auVar6._10_2_ = 0;
        auVar6._0_10_ = auVar44._0_10_;
        auVar6._12_2_ = auVar44._6_2_;
        auVar12._8_2_ = auVar44._4_2_;
        auVar12._0_8_ = auVar44._0_8_;
        auVar12._10_4_ = auVar6._10_4_;
        auVar19._6_8_ = 0;
        auVar19._0_6_ = auVar12._8_6_;
        auVar76._6_8_ = SUB148(auVar19 << 0x40,6);
        auVar76._4_2_ = auVar44._2_2_;
        auVar76._0_2_ = auVar44._0_2_;
        auVar76._2_2_ = 0;
        auVar76._14_2_ = 0;
        auVar43 = auVar68 & auVar76;
        auVar44 = __LC13 & auVar76;
        iVar42 = auVar44._0_4_ * 0x2000;
        iVar52 = auVar44._4_4_ * 0x2000;
        iVar55 = auVar44._8_4_ * 0x2000;
        iVar57 = auVar44._12_4_ * 0x2000;
        uVar90 = __LC14 + iVar42;
        uVar92 = _UNK_0010a0a4 + iVar52;
        uVar93 = _UNK_0010a0a8 + iVar55;
        uVar94 = _UNK_0010a0ac + iVar57;
        uVar39 = (int)-(uint)(auVar43._0_4_ == __LC16) >> 0x1f;
        uVar50 = (int)-(uint)(auVar43._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar53 = (int)-(uint)(auVar43._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar56 = (int)-(uint)(auVar43._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar85 = (int)-(uint)(auVar43._0_4_ == 0) >> 0x1f;
        uVar87 = (int)-(uint)(auVar43._4_4_ == 0) >> 0x1f;
        uVar88 = (int)-(uint)(auVar43._8_4_ == 0) >> 0x1f;
        uVar89 = (int)-(uint)(auVar43._12_4_ == 0) >> 0x1f;
        auVar76 = auVar76 & __LC21;
        auVar44 = *pauVar28;
        fVar109 = (float)(auVar76._0_4_ << 0x10 |
                         (uint)((float)(iVar42 + __LC18) + _LC20) & uVar85 |
                         ~uVar85 & (uVar39 & (uVar90 | __LC17) | ~uVar39 & uVar90));
        fVar114 = (float)(auVar76._4_4_ << 0x10 |
                         (uint)((float)(iVar52 + _UNK_0010a0d4) + _LC20) & uVar87 |
                         ~uVar87 & (uVar50 & (uVar92 | _UNK_0010a0c4) | ~uVar50 & uVar92));
        fVar116 = (float)(auVar76._8_4_ << 0x10 |
                         (uint)((float)(iVar55 + _UNK_0010a0d8) + _LC20) & uVar88 |
                         ~uVar88 & (uVar53 & (uVar93 | _UNK_0010a0c8) | ~uVar53 & uVar93));
        fVar118 = (float)(auVar76._12_4_ << 0x10 |
                         (uint)((float)(iVar57 + _UNK_0010a0dc) + _LC20) & uVar89 |
                         ~uVar89 & (uVar56 & (uVar94 | _UNK_0010a0cc) | ~uVar56 & uVar94));
        uVar39 = auVar44._8_4_;
        auVar73._0_8_ = auVar44._8_8_;
        auVar73._8_4_ = uVar39;
        auVar1._10_2_ = 0;
        auVar1._0_10_ = auVar73._0_10_;
        auVar1._12_2_ = auVar44._14_2_;
        auVar7._8_2_ = auVar44._12_2_;
        auVar7._0_8_ = auVar73._0_8_;
        auVar7._10_4_ = auVar1._10_4_;
        auVar20._6_8_ = 0;
        auVar20._0_6_ = auVar7._8_6_;
        auVar13._4_2_ = auVar44._10_2_;
        auVar13._0_4_ = uVar39;
        auVar13._6_8_ = SUB148(auVar20 << 0x40,6);
        auVar77._0_4_ = uVar39 & 0xffff;
        auVar77._4_10_ = auVar13._4_10_;
        auVar77._14_2_ = 0;
        auVar43 = auVar68 & auVar77;
        auVar44 = __LC13 & auVar77;
        auVar77 = auVar77 & __LC21;
        iVar42 = auVar44._0_4_ * 0x2000;
        iVar52 = auVar44._4_4_ * 0x2000;
        iVar55 = auVar44._8_4_ * 0x2000;
        iVar57 = auVar44._12_4_ * 0x2000;
        uVar85 = __LC14 + iVar42;
        uVar87 = _UNK_0010a0a4 + iVar52;
        uVar88 = _UNK_0010a0a8 + iVar55;
        uVar89 = _UNK_0010a0ac + iVar57;
        uVar39 = (int)-(uint)(auVar43._0_4_ == __LC16) >> 0x1f;
        uVar50 = (int)-(uint)(auVar43._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar53 = (int)-(uint)(auVar43._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar56 = (int)-(uint)(auVar43._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar90 = (int)-(uint)(auVar43._0_4_ == 0) >> 0x1f;
        uVar92 = (int)-(uint)(auVar43._4_4_ == 0) >> 0x1f;
        uVar93 = (int)-(uint)(auVar43._8_4_ == 0) >> 0x1f;
        uVar94 = (int)-(uint)(auVar43._12_4_ == 0) >> 0x1f;
        auVar44 = pauVar28[1];
        auVar2._10_2_ = 0;
        auVar2._0_10_ = auVar44._0_10_;
        auVar2._12_2_ = auVar44._6_2_;
        auVar8._8_2_ = auVar44._4_2_;
        auVar8._0_8_ = auVar44._0_8_;
        auVar8._10_4_ = auVar2._10_4_;
        auVar21._6_8_ = 0;
        auVar21._0_6_ = auVar8._8_6_;
        auVar78._6_8_ = SUB148(auVar21 << 0x40,6);
        auVar78._4_2_ = auVar44._2_2_;
        auVar78._0_2_ = auVar44._0_2_;
        auVar78._2_2_ = 0;
        auVar78._14_2_ = 0;
        fVar84 = (float)(auVar77._0_4_ << 0x10 |
                        (uint)((float)(iVar42 + __LC18) + _LC20) & uVar90 |
                        ~uVar90 & (uVar39 & (uVar85 | __LC17) | ~uVar39 & uVar85));
        fVar98 = (float)(auVar77._4_4_ << 0x10 |
                        (uint)((float)(iVar52 + _UNK_0010a0d4) + _LC20) & uVar92 |
                        ~uVar92 & (uVar50 & (uVar87 | _UNK_0010a0c4) | ~uVar50 & uVar87));
        fVar108 = (float)(auVar77._8_4_ << 0x10 |
                         (uint)((float)(iVar55 + _UNK_0010a0d8) + _LC20) & uVar93 |
                         ~uVar93 & (uVar53 & (uVar88 | _UNK_0010a0c8) | ~uVar53 & uVar88));
        fVar107 = (float)(auVar77._12_4_ << 0x10 |
                         (uint)((float)(iVar57 + _UNK_0010a0dc) + _LC20) & uVar94 |
                         ~uVar94 & (uVar56 & (uVar89 | _UNK_0010a0cc) | ~uVar56 & uVar89));
        auVar44 = __LC13 & auVar78;
        iVar42 = auVar44._0_4_ * 0x2000;
        iVar52 = auVar44._4_4_ * 0x2000;
        iVar55 = auVar44._8_4_ * 0x2000;
        iVar57 = auVar44._12_4_ * 0x2000;
        uVar85 = __LC14 + iVar42;
        uVar87 = _UNK_0010a0a4 + iVar52;
        uVar88 = _UNK_0010a0a8 + iVar55;
        uVar89 = _UNK_0010a0ac + iVar57;
        auVar44 = auVar68 & auVar78;
        auVar78 = auVar78 & __LC21;
        uVar39 = (int)-(uint)(auVar44._0_4_ == __LC16) >> 0x1f;
        uVar50 = (int)-(uint)(auVar44._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar53 = (int)-(uint)(auVar44._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar56 = (int)-(uint)(auVar44._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar90 = (int)-(uint)(auVar44._0_4_ == 0) >> 0x1f;
        uVar92 = (int)-(uint)(auVar44._4_4_ == 0) >> 0x1f;
        uVar93 = (int)-(uint)(auVar44._8_4_ == 0) >> 0x1f;
        uVar94 = (int)-(uint)(auVar44._12_4_ == 0) >> 0x1f;
        auVar44 = pauVar28[1];
        fVar63 = (float)(auVar78._0_4_ << 0x10 |
                        (uint)((float)(iVar42 + __LC18) + _LC20) & uVar90 |
                        ~uVar90 & (uVar39 & (uVar85 | __LC17) | ~uVar39 & uVar85));
        fVar66 = (float)(auVar78._4_4_ << 0x10 |
                        (uint)((float)(iVar52 + _UNK_0010a0d4) + _LC20) & uVar92 |
                        ~uVar92 & (uVar50 & (uVar87 | _UNK_0010a0c4) | ~uVar50 & uVar87));
        fVar72 = (float)(auVar78._8_4_ << 0x10 |
                        (uint)((float)(iVar55 + _UNK_0010a0d8) + _LC20) & uVar93 |
                        ~uVar93 & (uVar53 & (uVar88 | _UNK_0010a0c8) | ~uVar53 & uVar88));
        fVar103 = (float)(auVar78._12_4_ << 0x10 |
                         (uint)((float)(iVar57 + _UNK_0010a0dc) + _LC20) & uVar94 |
                         ~uVar94 & (uVar56 & (uVar89 | _UNK_0010a0cc) | ~uVar56 & uVar89));
        uVar39 = auVar44._8_4_;
        auVar74._0_8_ = auVar44._8_8_;
        auVar74._8_4_ = uVar39;
        auVar3._10_2_ = 0;
        auVar3._0_10_ = auVar74._0_10_;
        auVar3._12_2_ = auVar44._14_2_;
        auVar9._8_2_ = auVar44._12_2_;
        auVar9._0_8_ = auVar74._0_8_;
        auVar9._10_4_ = auVar3._10_4_;
        auVar22._6_8_ = 0;
        auVar22._0_6_ = auVar9._8_6_;
        auVar14._4_2_ = auVar44._10_2_;
        auVar14._0_4_ = uVar39;
        auVar14._6_8_ = SUB148(auVar22 << 0x40,6);
        auVar79._0_4_ = uVar39 & 0xffff;
        auVar79._4_10_ = auVar14._4_10_;
        auVar79._14_2_ = 0;
        auVar44 = __LC13 & auVar79;
        auVar43 = auVar68 & auVar79;
        auVar79 = auVar79 & __LC21;
        iVar42 = auVar44._0_4_ * 0x2000;
        iVar52 = auVar44._4_4_ * 0x2000;
        iVar55 = auVar44._8_4_ * 0x2000;
        iVar57 = auVar44._12_4_ * 0x2000;
        uVar39 = __LC14 + iVar42;
        uVar53 = _UNK_0010a0a4 + iVar52;
        uVar85 = _UNK_0010a0a8 + iVar55;
        uVar88 = _UNK_0010a0ac + iVar57;
        uVar50 = (int)-(uint)(auVar43._0_4_ == __LC16) >> 0x1f;
        uVar56 = (int)-(uint)(auVar43._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar87 = (int)-(uint)(auVar43._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar89 = (int)-(uint)(auVar43._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar90 = (int)-(uint)(auVar43._0_4_ == 0) >> 0x1f;
        uVar92 = (int)-(uint)(auVar43._4_4_ == 0) >> 0x1f;
        uVar93 = (int)-(uint)(auVar43._8_4_ == 0) >> 0x1f;
        uVar94 = (int)-(uint)(auVar43._12_4_ == 0) >> 0x1f;
        fVar51 = (float)(auVar79._0_4_ << 0x10 |
                        (uint)((float)(iVar42 + __LC18) + _LC20) & uVar90 |
                        ~uVar90 & (uVar50 & (uVar39 | __LC17) | ~uVar50 & uVar39));
        fVar62 = (float)(auVar79._4_4_ << 0x10 |
                        (uint)((float)(iVar52 + _UNK_0010a0d4) + _LC20) & uVar92 |
                        ~uVar92 & (uVar56 & (uVar53 | _UNK_0010a0c4) | ~uVar56 & uVar53));
        fVar96 = (float)(auVar79._8_4_ << 0x10 |
                        (uint)((float)(iVar55 + _UNK_0010a0d8) + _LC20) & uVar93 |
                        ~uVar93 & (uVar87 & (uVar85 | _UNK_0010a0c8) | ~uVar87 & uVar85));
        fVar58 = (float)(auVar79._12_4_ << 0x10 |
                        (uint)((float)(iVar57 + _UNK_0010a0dc) + _LC20) & uVar94 |
                        ~uVar94 & (uVar89 & (uVar88 | _UNK_0010a0cc) | ~uVar89 & uVar88));
        auVar44 = pauVar28[2];
        auVar4._10_2_ = 0;
        auVar4._0_10_ = auVar44._0_10_;
        auVar4._12_2_ = auVar44._6_2_;
        auVar10._8_2_ = auVar44._4_2_;
        auVar10._0_8_ = auVar44._0_8_;
        auVar10._10_4_ = auVar4._10_4_;
        auVar23._6_8_ = 0;
        auVar23._0_6_ = auVar10._8_6_;
        auVar15._4_2_ = auVar44._2_2_;
        auVar15._0_4_ = auVar44._0_4_;
        auVar15._6_8_ = SUB148(auVar23 << 0x40,6);
        auVar64._0_4_ = auVar44._0_4_ & 0xffff;
        auVar64._4_10_ = auVar15._4_10_;
        auVar64._14_2_ = 0;
        auVar43 = auVar68 & auVar64;
        auVar44 = __LC13 & auVar64;
        auVar64 = auVar64 & __LC21;
        iVar42 = auVar44._0_4_ * 0x2000;
        iVar52 = auVar44._4_4_ * 0x2000;
        iVar55 = auVar44._8_4_ * 0x2000;
        iVar57 = auVar44._12_4_ * 0x2000;
        uVar90 = __LC14 + iVar42;
        uVar92 = _UNK_0010a0a4 + iVar52;
        uVar93 = _UNK_0010a0a8 + iVar55;
        uVar94 = _UNK_0010a0ac + iVar57;
        uVar39 = (int)-(uint)(auVar43._0_4_ == __LC16) >> 0x1f;
        uVar50 = (int)-(uint)(auVar43._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar53 = (int)-(uint)(auVar43._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar56 = (int)-(uint)(auVar43._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar85 = (int)-(uint)(auVar43._0_4_ == 0) >> 0x1f;
        uVar87 = (int)-(uint)(auVar43._4_4_ == 0) >> 0x1f;
        uVar88 = (int)-(uint)(auVar43._8_4_ == 0) >> 0x1f;
        uVar89 = (int)-(uint)(auVar43._12_4_ == 0) >> 0x1f;
        fVar41 = (float)(auVar64._0_4_ << 0x10 |
                        (uint)((float)(iVar42 + __LC18) + _LC20) & uVar85 |
                        ~uVar85 & (uVar39 & (uVar90 | __LC17) | ~uVar39 & uVar90));
        fVar40 = (float)(auVar64._4_4_ << 0x10 |
                        (uint)((float)(iVar52 + _UNK_0010a0d4) + _LC20) & uVar87 |
                        ~uVar87 & (uVar50 & (uVar92 | _UNK_0010a0c4) | ~uVar50 & uVar92));
        fVar61 = (float)(auVar64._8_4_ << 0x10 |
                        (uint)((float)(iVar55 + _UNK_0010a0d8) + _LC20) & uVar88 |
                        ~uVar88 & (uVar53 & (uVar93 | _UNK_0010a0c8) | ~uVar53 & uVar93));
        fVar71 = (float)(auVar64._12_4_ << 0x10 |
                        (uint)((float)(iVar57 + _UNK_0010a0dc) + _LC20) & uVar89 |
                        ~uVar89 & (uVar56 & (uVar94 | _UNK_0010a0cc) | ~uVar56 & uVar94));
        auVar44 = pauVar28[2];
        auVar75._8_4_ = auVar44._8_4_;
        auVar75._0_8_ = auVar44._8_8_;
        auVar5._10_2_ = 0;
        auVar5._0_10_ = auVar75._0_10_;
        auVar5._12_2_ = auVar44._14_2_;
        auVar11._8_2_ = auVar44._12_2_;
        auVar11._0_8_ = auVar75._0_8_;
        auVar11._10_4_ = auVar5._10_4_;
        auVar24._6_8_ = 0;
        auVar24._0_6_ = auVar11._8_6_;
        auVar16._4_2_ = auVar44._10_2_;
        auVar16._0_4_ = auVar75._8_4_;
        auVar16._6_8_ = SUB148(auVar24 << 0x40,6);
        auVar45._0_4_ = auVar75._8_4_ & 0xffff;
        auVar45._4_10_ = auVar16._4_10_;
        auVar45._14_2_ = 0;
        auVar68 = auVar68 & auVar45;
        auVar44 = __LC13 & auVar45;
        auVar45 = __LC21 & auVar45;
        iVar42 = auVar44._0_4_ * 0x2000;
        iVar52 = auVar44._4_4_ * 0x2000;
        iVar55 = auVar44._8_4_ * 0x2000;
        iVar57 = auVar44._12_4_ * 0x2000;
        uVar90 = __LC14 + iVar42;
        uVar92 = _UNK_0010a0a4 + iVar52;
        uVar93 = _UNK_0010a0a8 + iVar55;
        uVar94 = _UNK_0010a0ac + iVar57;
        uVar39 = (int)-(uint)(__LC16 == auVar68._0_4_) >> 0x1f;
        uVar50 = (int)-(uint)(_UNK_0010a0b4 == auVar68._4_4_) >> 0x1f;
        uVar53 = (int)-(uint)(_UNK_0010a0b8 == auVar68._8_4_) >> 0x1f;
        uVar56 = (int)-(uint)(_UNK_0010a0bc == auVar68._12_4_) >> 0x1f;
        uVar85 = (int)-(uint)(auVar68._0_4_ == 0) >> 0x1f;
        uVar87 = (int)-(uint)(auVar68._4_4_ == 0) >> 0x1f;
        uVar88 = (int)-(uint)(auVar68._8_4_ == 0) >> 0x1f;
        uVar89 = (int)-(uint)(auVar68._12_4_ == 0) >> 0x1f;
        lVar29 = (long)iVar27;
        fVar110 = (float)(auVar45._0_4_ << 0x10 |
                         (uint)((float)(iVar42 + __LC18) + _LC20) & uVar85 |
                         ~uVar85 & (uVar39 & (uVar90 | __LC17) | ~uVar39 & uVar90));
        fVar115 = (float)(auVar45._4_4_ << 0x10 |
                         (uint)((float)(iVar52 + _UNK_0010a0d4) + _LC20) & uVar87 |
                         ~uVar87 & (uVar50 & (uVar92 | _UNK_0010a0c4) | ~uVar50 & uVar92));
        fVar117 = (float)(auVar45._8_4_ << 0x10 |
                         (uint)((float)(iVar55 + _UNK_0010a0d8) + _LC20) & uVar88 |
                         ~uVar88 & (uVar53 & (uVar93 | _UNK_0010a0c8) | ~uVar53 & uVar93));
        fVar119 = (float)(auVar45._12_4_ << 0x10 |
                         (uint)((float)(iVar57 + _UNK_0010a0dc) + _LC20) & uVar89 |
                         ~uVar89 & (uVar56 & (uVar94 | _UNK_0010a0cc) | ~uVar56 & uVar94));
        fVar54 = *(float *)local_258;
        fVar101 = *(float *)(local_258 + 4);
        fVar67 = *(float *)(local_258 + 8);
        auVar99._0_8_ =
             CONCAT44((fVar114 - fVar54) * (float)auStack_278._0_4_,
                      (fVar109 - fVar54) * (float)auStack_278._0_4_);
        auVar99._8_4_ = (fVar116 - fVar54) * (float)auStack_278._0_4_;
        auVar99._12_4_ = (fVar118 - fVar54) * (float)auStack_278._0_4_;
        auVar106._0_4_ = (fVar51 - fVar54) * (float)auStack_278._0_4_;
        auVar106._4_4_ = (fVar62 - fVar54) * (float)auStack_278._0_4_;
        auVar106._8_4_ = (fVar96 - fVar54) * (float)auStack_278._0_4_;
        auVar106._12_4_ = (fVar58 - fVar54) * (float)auStack_278._0_4_;
        auVar97._0_8_ =
             CONCAT44((fVar98 - fVar101) * (float)auStack_278._4_4_,
                      (fVar84 - fVar101) * (float)auStack_278._4_4_);
        auVar97._8_4_ = (fVar108 - fVar101) * (float)auStack_278._4_4_;
        auVar97._12_4_ = (fVar107 - fVar101) * (float)auStack_278._4_4_;
        auVar104._0_4_ = (fVar41 - fVar101) * (float)auStack_278._4_4_;
        auVar104._4_4_ = (fVar40 - fVar101) * (float)auStack_278._4_4_;
        auVar104._8_4_ = (fVar61 - fVar101) * (float)auStack_278._4_4_;
        auVar104._12_4_ = (fVar71 - fVar101) * (float)auStack_278._4_4_;
        auVar102._0_4_ = (fVar110 - fVar67) * fStack_270;
        auVar102._4_4_ = (fVar115 - fVar67) * fStack_270;
        auVar102._8_4_ = (fVar117 - fVar67) * fStack_270;
        auVar102._12_4_ = (fVar119 - fVar67) * fStack_270;
        auVar95._0_8_ = CONCAT44((fVar66 - fVar67) * fStack_270,(fVar63 - fVar67) * fStack_270);
        auVar95._8_4_ = (fVar72 - fVar67) * fStack_270;
        auVar95._12_4_ = (fVar103 - fVar67) * fStack_270;
        auVar69._8_4_ = auVar99._8_4_;
        auVar69._0_8_ = auVar99._0_8_;
        auVar69._12_4_ = auVar99._12_4_;
        auVar44 = minps(auVar69,auVar106);
        uVar39 = (int)uStack_268 >> 0x1f;
        auVar100 = maxps(auVar99,auVar106);
        auVar111._8_4_ = auVar97._8_4_;
        auVar111._0_8_ = auVar97._0_8_;
        auVar111._12_4_ = auVar97._12_4_;
        auVar112 = minps(auVar111,auVar104);
        auVar43 = maxps(auVar97,auVar104);
        auVar80._0_4_ = ~uVar39 & auVar44._0_4_;
        auVar80._4_4_ = ~uVar39 & auVar44._4_4_;
        auVar80._8_4_ = ~uVar39 & auVar44._8_4_;
        auVar80._12_4_ = ~uVar39 & auVar44._12_4_;
        auVar70._0_4_ = _LC1 & uVar39;
        auVar70._4_4_ = _LC1 & uVar39;
        auVar70._8_4_ = _LC1 & uVar39;
        auVar70._12_4_ = _LC1 & uVar39;
        uVar50 = (int)uStack_264 >> 0x1f;
        auVar81._0_4_ = ~uVar50 & auVar112._0_4_;
        auVar81._4_4_ = ~uVar50 & auVar112._4_4_;
        auVar81._8_4_ = ~uVar50 & auVar112._8_4_;
        auVar81._12_4_ = ~uVar50 & auVar112._12_4_;
        auVar113._0_4_ = _LC1 & uVar50;
        auVar113._4_4_ = _LC1 & uVar50;
        auVar113._8_4_ = _LC1 & uVar50;
        auVar113._12_4_ = _LC1 & uVar50;
        auVar82._8_4_ = auVar95._8_4_;
        auVar82._0_8_ = auVar95._0_8_;
        auVar82._12_4_ = auVar95._12_4_;
        auVar105._0_4_ = ~uVar50 & auVar43._0_4_;
        auVar105._4_4_ = ~uVar50 & auVar43._4_4_;
        auVar105._8_4_ = ~uVar50 & auVar43._8_4_;
        auVar105._12_4_ = ~uVar50 & auVar43._12_4_;
        auVar43 = minps(auVar82,auVar102);
        auVar112 = maxps(auVar95,auVar102);
        auVar44 = maxps(auVar70 | auVar80,auVar113 | auVar81);
        uVar53 = (int)uStack_260 >> 0x1f;
        uStack_4d8 = auVar43._0_4_;
        uStack_4d4 = auVar43._4_4_;
        uStack_4d0 = auVar43._8_4_;
        uStack_4cc = auVar43._12_4_;
        auVar46._0_4_ = ~uVar53 & uStack_4d8;
        auVar46._4_4_ = ~uVar53 & uStack_4d4;
        auVar46._8_4_ = ~uVar53 & uStack_4d0;
        auVar46._12_4_ = ~uVar53 & uStack_4cc;
        auVar91._0_4_ = _LC1 & uVar53;
        auVar91._4_4_ = _LC1 & uVar53;
        auVar91._8_4_ = _LC1 & uVar53;
        auVar91._12_4_ = _LC1 & uVar53;
        auVar47._0_4_ = ~uVar39 & auVar100._0_4_;
        auVar47._4_4_ = ~uVar39 & auVar100._4_4_;
        auVar47._8_4_ = ~uVar39 & auVar100._8_4_;
        auVar47._12_4_ = ~uVar39 & auVar100._12_4_;
        auVar43 = maxps(auVar44,auVar91 | auVar46);
        auVar59._0_4_ = uVar39 & _LC3;
        auVar59._4_4_ = uVar39 & _LC3;
        auVar59._8_4_ = uVar39 & _LC3;
        auVar59._12_4_ = uVar39 & _LC3;
        auVar86._0_4_ = uVar50 & _LC3;
        auVar86._4_4_ = uVar50 & _LC3;
        auVar86._8_4_ = uVar50 & _LC3;
        auVar86._12_4_ = uVar50 & _LC3;
        auVar44 = minps(auVar59 | auVar47,auVar86 | auVar105);
        auVar48._0_4_ = ~uVar53 & auVar112._0_4_;
        auVar48._4_4_ = ~uVar53 & auVar112._4_4_;
        auVar48._8_4_ = ~uVar53 & auVar112._8_4_;
        auVar48._12_4_ = ~uVar53 & auVar112._12_4_;
        auVar83._0_4_ = uVar53 & _LC3;
        auVar83._4_4_ = uVar53 & _LC3;
        auVar83._8_4_ = uVar53 & _LC3;
        auVar83._12_4_ = uVar53 & _LC3;
        auVar44 = minps(auVar44,auVar83 | auVar48);
        uVar88 = (uint)*(undefined8 *)pauVar28[3];
        uVar90 = (uint)((ulong)*(undefined8 *)pauVar28[3] >> 0x20);
        uVar89 = (uint)*(undefined8 *)(pauVar28[3] + 8);
        uVar92 = (uint)((ulong)*(undefined8 *)(pauVar28[3] + 8) >> 0x20);
        uVar39 = (int)(-(uint)((auVar44._0_4_ < auVar43._0_4_ || auVar44._0_4_ < 0.0) ||
                              (fVar51 < fVar109 || fVar41 < fVar84)) |
                       -(uint)(fVar54 < fVar109 || fVar51 < fVar54) & uStack_268 |
                       -(uint)(fVar101 < fVar84 || fVar41 < fVar101) & uStack_264 |
                      -(uint)(fVar110 < fVar67 || fVar67 < fVar63) & uStack_260 |
                      -(uint)(fVar110 < fVar63)) >> 0x1f;
        uVar50 = (int)(-(uint)((auVar44._4_4_ < auVar43._4_4_ || auVar44._4_4_ < 0.0) ||
                              (fVar62 < fVar114 || fVar40 < fVar98)) |
                       -(uint)(fVar54 < fVar114 || fVar62 < fVar54) & uStack_268 |
                       -(uint)(fVar101 < fVar98 || fVar40 < fVar101) & uStack_264 |
                      -(uint)(fVar115 < fVar67 || fVar67 < fVar66) & uStack_260 |
                      -(uint)(fVar115 < fVar66)) >> 0x1f;
        uVar53 = (int)(-(uint)((auVar44._8_4_ < auVar43._8_4_ || auVar44._8_4_ < 0.0) ||
                              (fVar96 < fVar116 || fVar61 < fVar108)) |
                       -(uint)(fVar54 < fVar116 || fVar96 < fVar54) & uStack_268 |
                       -(uint)(fVar101 < fVar108 || fVar61 < fVar101) & uStack_264 |
                      -(uint)(fVar117 < fVar67 || fVar67 < fVar72) & uStack_260 |
                      -(uint)(fVar117 < fVar72)) >> 0x1f;
        uVar56 = (int)(-(uint)((auVar44._12_4_ < auVar43._12_4_ || auVar44._12_4_ < 0.0) ||
                              (fVar58 < fVar118 || fVar71 < fVar107)) |
                       -(uint)(fVar54 < fVar118 || fVar58 < fVar54) & uStack_268 |
                       -(uint)(fVar101 < fVar107 || fVar71 < fVar101) & uStack_264 |
                      -(uint)(fVar119 < fVar67 || fVar67 < fVar103) & uStack_260 |
                      -(uint)(fVar119 < fVar103)) >> 0x1f;
        fVar54 = (float)(_LC3 & uVar39 | ~uVar39 & (uint)auVar43._0_4_);
        fVar101 = (float)(_LC3 & uVar50 | ~uVar50 & (uint)auVar43._4_4_);
        fVar40 = (float)(_LC3 & uVar53 | ~uVar53 & (uint)auVar43._8_4_);
        fVar61 = (float)(_LC3 & uVar56 | ~uVar56 & (uint)auVar43._12_4_);
        uVar39 = (int)-(uint)(fVar54 < fVar40) >> 0x1f;
        uVar50 = (int)-(uint)(fVar101 < fVar61) >> 0x1f;
        fVar67 = (float)((uint)fVar40 & uVar39 | ~uVar39 & (uint)fVar54);
        fVar41 = (float)((uint)fVar61 & uVar50 | ~uVar50 & (uint)fVar101);
        fVar40 = (float)((uint)fVar54 & uVar39 | ~uVar39 & (uint)fVar40);
        fVar61 = (float)((uint)fVar101 & uVar50 | ~uVar50 & (uint)fVar61);
        uVar85 = ~uVar39 & uVar88 | uVar39 & uVar89;
        uVar87 = ~uVar50 & uVar90 | uVar50 & uVar92;
        uVar89 = ~uVar39 & uVar89 | uVar39 & uVar88;
        uVar90 = ~uVar50 & uVar92 | uVar50 & uVar90;
        uVar39 = (int)-(uint)(fVar67 < fVar41) >> 0x1f;
        uVar53 = (int)-(uint)(fVar40 < fVar61) >> 0x1f;
        fVar54 = (float)((uint)fVar67 & uVar39 | ~uVar39 & (uint)fVar41);
        fVar101 = (float)((uint)fVar61 & uVar53 | ~uVar53 & (uint)fVar40);
        uVar50 = uVar39 & uVar85 | ~uVar39 & uVar87;
        uVar56 = uVar53 & uVar90 | ~uVar53 & uVar89;
        uVar88 = (int)-(uint)(fVar54 < fVar101) >> 0x1f;
        auVar65._4_4_ = ~uVar88 & (uint)fVar54;
        auVar65._0_4_ = (uint)fVar41 & uVar39 | ~uVar39 & (uint)fVar67;
        auVar65._8_4_ = ~uVar88 & (uint)fVar101;
        auVar65._12_4_ = (uint)fVar40 & uVar53 | ~uVar53 & (uint)fVar61;
        auVar18._4_4_ = (uint)fVar54 & uVar88;
        auVar18._0_4_ = (uint)fVar101 & uVar88;
        auVar18._8_8_ = 0;
        auStack_4b8._4_4_ = ~uVar88 & uVar50;
        auStack_4b8._0_4_ = uVar39 & uVar87 | ~uVar39 & uVar85;
        auStack_4b8._8_4_ = ~uVar88 & uVar56;
        auStack_4b8._12_4_ = uVar53 & uVar89 | ~uVar53 & uVar90;
        auVar17._4_4_ = uVar88 & uVar50;
        auVar17._0_4_ = uVar88 & uVar56;
        auVar17._8_8_ = 0;
        auVar65 = auVar18 << 0x20 | auVar65;
        auStack_4b8 = auVar17 << 0x20 | auStack_4b8;
        fVar54 = *(float *)(local_250 + 4);
        auVar49._4_4_ = -(uint)(auVar65._4_4_ < fVar54);
        auVar49._0_4_ = -(uint)(auVar65._0_4_ < fVar54);
        auVar49._8_4_ = -(uint)(auVar65._8_4_ < fVar54);
        auVar49._12_4_ = -(uint)(auVar65._12_4_ < fVar54);
        uVar50 = movmskps((int)pSVar36,auVar49);
        pSVar36 = (StaticCompoundShape *)(ulong)uVar50;
        uVar39 = __popcountdi2();
        _auStack_498 = auVar65;
        if (uVar50 == 0) {
          _auStack_498 = (undefined1  [16])0x0;
          aSVar60 = (StaticCompoundShape  [16])0x0;
        }
        else {
          aSStack_4a8[0] = (StaticCompoundShape)0x0;
          aSStack_4a8[1] = (StaticCompoundShape)0x0;
          aSStack_4a8[2] = (StaticCompoundShape)0x0;
          aSStack_4a8[3] = (StaticCompoundShape)0x0;
          aSStack_4a8[4] = (StaticCompoundShape)0x0;
          aSStack_4a8[5] = (StaticCompoundShape)0x0;
          aSStack_4a8[6] = (StaticCompoundShape)0x0;
          aSStack_4a8[7] = (StaticCompoundShape)0x0;
          aSStack_4a8[8] = (StaticCompoundShape)0x0;
          aSStack_4a8[9] = (StaticCompoundShape)0x0;
          aSStack_4a8[10] = (StaticCompoundShape)0x0;
          aSStack_4a8[0xb] = (StaticCompoundShape)0x0;
          aSStack_4a8[0xc] = (StaticCompoundShape)0x0;
          aSStack_4a8[0xd] = (StaticCompoundShape)0x0;
          aSStack_4a8[0xe] = (StaticCompoundShape)0x0;
          aSStack_4a8[0xf] = (StaticCompoundShape)0x0;
          uVar30 = (ulong)uVar39 << 2;
          pSVar36 = aSStack_4a8;
          lVar33 = (4 - (long)(int)uVar39) * 4;
          pSVar34 = (StaticCompoundShape *)auStack_498 + lVar33;
          if (7 < (uint)uVar30) {
            for (uVar32 = uVar30 >> 3 & 0x1fffffff; uVar32 != 0; uVar32 = uVar32 - 1) {
              *(long *)pSVar36 = *(long *)pSVar34;
              pSVar34 = pSVar34 + (ulong)bVar38 * -0x10 + 8;
              pSVar36 = pSVar36 + (ulong)bVar38 * -0x10 + 8;
            }
          }
          if ((uVar30 & 4) != 0) {
            *(undefined4 *)pSVar36 = *(undefined4 *)pSVar34;
          }
          plVar35 = (long *)(auStack_4b8 + lVar33);
          _auStack_498 = (undefined1  [16])0x0;
          pSVar34 = (StaticCompoundShape *)auStack_498;
          if (7 < (uint)uVar30) {
            pSVar36 = (StaticCompoundShape *)auStack_498;
            for (uVar32 = uVar30 >> 3 & 0x1fffffff; pSVar34 = pSVar36, uVar32 != 0;
                uVar32 = uVar32 - 1) {
              *(long *)pSVar36 = *plVar35;
              plVar35 = plVar35 + (ulong)bVar38 * -2 + 1;
              pSVar36 = pSVar36 + (ulong)bVar38 * -0x10 + 8;
            }
          }
          aSVar60 = aSStack_4a8;
          if ((uVar30 & 4) != 0) {
            *(int *)pSVar34 = (int)*plVar35;
          }
        }
        auVar44 = _auStack_498;
        uVar25 = uStack_490;
        *(StaticCompoundShape (*) [16])(afStack_238 + lVar29) = aSVar60;
        iVar27 = iVar27 + uVar39;
        *(undefined1 (*) [8])(auStack_478 + lVar29) = auStack_498;
        *(undefined8 *)((long)auStack_470 + lVar29 * 4) = uVar25;
        auStack_4b8 = auVar44;
        pRVar37 = local_250;
      }
      if (*(float *)(pRVar37 + 4) <= 0.0) {
LAB_001024b6:
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          return uStack_23c;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    iVar27 = iVar27 + -1;
    uVar30 = (long)iVar27;
    while( true ) {
      if (iVar27 == -1) goto LAB_001024b6;
      if (afStack_238[uVar30] <= *(float *)(pRVar37 + 4) &&
          *(float *)(pRVar37 + 4) != afStack_238[uVar30]) break;
      iVar27 = (int)(uVar30 - 1);
      uVar30 = uVar30 - 1;
    }
    uVar32 = uVar30 & 0xffffffff;
    uVar30 = (ulong)auStack_478[(int)uVar30];
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::StaticCompoundShape::GetIntersectingSubShapes(JPH::OrientedBox const&, unsigned int*, int)
   const */

int __thiscall
JPH::StaticCompoundShape::GetIntersectingSubShapes
          (StaticCompoundShape *this,OrientedBox *param_1,uint *param_2,int param_3)

{
  undefined1 auVar1 [14];
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
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [14];
  undefined1 auVar30 [14];
  undefined1 auVar31 [14];
  undefined1 auVar32 [14];
  undefined1 auVar33 [14];
  undefined1 auVar34 [14];
  bool bVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined8 uVar54;
  ulong uVar55;
  undefined1 (*pauVar56) [16];
  float *pfVar57;
  float *pfVar58;
  float *pfVar59;
  long lVar60;
  float *pfVar61;
  int iVar62;
  undefined4 uVar63;
  int iVar64;
  long in_FS_OFFSET;
  bool bVar65;
  int iVar66;
  float fVar67;
  int iVar75;
  undefined1 auVar68 [12];
  int iVar73;
  undefined1 auVar69 [16];
  int iVar77;
  undefined1 auVar70 [16];
  float fVar74;
  float fVar76;
  float fVar78;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  uint uVar79;
  float fVar80;
  uint uVar85;
  uint uVar87;
  undefined1 auVar81 [12];
  uint uVar89;
  undefined1 auVar82 [16];
  float fVar86;
  float fVar88;
  float fVar90;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  uint uVar91;
  float fVar92;
  uint uVar98;
  uint uVar100;
  undefined1 auVar93 [16];
  uint uVar102;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar99;
  float fVar101;
  float fVar103;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  uint uVar104;
  uint uVar106;
  uint uVar107;
  uint uVar108;
  undefined1 auVar105 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar114;
  float fVar119;
  undefined1 auVar115 [12];
  undefined1 auVar116 [16];
  float fVar120;
  float fVar121;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar122;
  float fVar125;
  float fVar126;
  undefined1 auVar123 [16];
  float fVar127;
  undefined1 auVar124 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  float fVar132;
  float fVar134;
  float fVar135;
  undefined1 auVar133 [16];
  float fVar136;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_348;
  undefined8 uStack_340;
  float local_338 [36];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  uint local_248 [2];
  undefined8 auStack_240 [64];
  long local_40;
  
  bVar35 = false;
  iVar64 = 0;
  iVar62 = 0;
  uVar20 = *(undefined8 *)param_1;
  uVar21 = *(undefined8 *)(param_1 + 8);
  auVar36 = *(undefined1 (*) [16])param_1;
  uVar22 = *(undefined8 *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = 0;
  fVar17 = *(float *)(param_1 + 0x30);
  fVar18 = *(float *)(param_1 + 0x34);
  fVar19 = *(float *)(param_1 + 0x38);
  uVar23 = *(undefined8 *)(param_1 + 0x10);
  uVar24 = *(undefined8 *)(param_1 + 0x18);
  auVar37 = *(undefined1 (*) [16])(param_1 + 0x10);
  local_2a8 = uVar22;
  uVar22 = local_2a8;
  uStack_2a0 = *(undefined8 *)(param_1 + 8);
  uVar46 = uStack_2a0;
  uVar25 = *(undefined8 *)(param_1 + 0x10);
  uVar26 = *(undefined8 *)(param_1 + 0x20);
  uVar27 = *(undefined8 *)(param_1 + 0x28);
  auVar38 = *(undefined1 (*) [16])(param_1 + 0x20);
  local_298 = uVar25;
  uVar25 = local_298;
  uStack_290 = *(undefined8 *)(param_1 + 0x18);
  uVar50 = uStack_290;
  uVar28 = *(undefined8 *)(param_1 + 0x20);
  local_288 = uVar28;
  uVar28 = local_288;
  uStack_280 = *(undefined8 *)(param_1 + 0x28);
  uVar54 = uStack_280;
  local_278 = *(undefined8 *)(param_1 + 0x30);
  uStack_270 = *(undefined8 *)(param_1 + 0x38);
  local_268 = *(undefined8 *)(param_1 + 0x40);
  uStack_260 = *(undefined8 *)(param_1 + 0x48);
  local_248[0] = 0;
  uStack_2a0._0_4_ = (float)*(undefined8 *)(param_1 + 8);
  fVar45 = (float)uStack_2a0;
  local_2a8._4_4_ = (float)((ulong)uVar22 >> 0x20);
  fVar44 = local_2a8._4_4_;
  uStack_290._0_4_ = (float)*(undefined8 *)(param_1 + 0x18);
  fVar49 = (float)uStack_290;
  local_298._4_4_ = (float)((ulong)uVar25 >> 0x20);
  fVar48 = local_298._4_4_;
  uStack_280._0_4_ = (float)*(undefined8 *)(param_1 + 0x28);
  fVar53 = (float)uStack_280;
  local_288._4_4_ = (float)((ulong)uVar28 >> 0x20);
  fVar52 = local_288._4_4_;
  local_2a8._0_4_ = (float)uVar22;
  fVar43 = (float)local_2a8;
  local_298._0_4_ = (float)uVar25;
  fVar47 = (float)local_298;
  local_288._0_4_ = (float)uVar28;
  fVar51 = (float)local_288;
  local_2a8 = uVar22;
  uStack_2a0 = uVar46;
  local_298 = uVar25;
  uStack_290 = uVar50;
  local_288 = uVar28;
  uStack_280 = uVar54;
  do {
    iVar66 = (int)uVar55;
    if (iVar66 != 0x7fffffff) {
      if (iVar66 < 0) {
        iVar64 = iVar64 + 1;
        bVar35 = true;
        *param_2 = iVar66 + 0x80000000;
        param_2 = param_2 + 1;
      }
      else {
        lVar60 = 0;
        pauVar56 = (undefined1 (*) [16])(uVar55 * 0x40 + *(long *)(this + 0x80));
        auVar93._4_4_ = _UNK_0010a0b4;
        auVar93._0_4_ = __LC16;
        auVar93._8_4_ = _UNK_0010a0b8;
        auVar93._12_4_ = _UNK_0010a0bc;
        auVar69 = *pauVar56;
        auVar94 = *pauVar56;
        auVar6._10_2_ = 0;
        auVar6._0_10_ = auVar69._0_10_;
        auVar6._12_2_ = auVar69._6_2_;
        auVar12._8_2_ = auVar69._4_2_;
        auVar12._0_8_ = auVar69._0_8_;
        auVar12._10_4_ = auVar6._10_4_;
        auVar29._6_8_ = 0;
        auVar29._0_6_ = auVar12._8_6_;
        auVar133._6_8_ = SUB148(auVar29 << 0x40,6);
        auVar133._4_2_ = auVar69._2_2_;
        auVar133._0_2_ = auVar69._0_2_;
        auVar133._2_2_ = 0;
        auVar133._14_2_ = 0;
        auVar115._8_4_ = auVar94._8_4_;
        auVar115._0_8_ = auVar94._8_8_;
        auVar93 = auVar93 & auVar133;
        auVar69 = __LC13 & auVar133;
        auVar1._10_2_ = 0;
        auVar1._0_10_ = auVar115._0_10_;
        auVar1._12_2_ = auVar94._14_2_;
        auVar7._8_2_ = auVar94._12_2_;
        auVar7._0_8_ = auVar115._0_8_;
        auVar7._10_4_ = auVar1._10_4_;
        auVar30._6_8_ = 0;
        auVar30._0_6_ = auVar7._8_6_;
        auVar13._4_2_ = auVar94._10_2_;
        auVar13._0_4_ = auVar115._8_4_;
        auVar13._6_8_ = SUB148(auVar30 << 0x40,6);
        auVar116._0_4_ = auVar115._8_4_ & 0xffff;
        auVar116._4_10_ = auVar13._4_10_;
        auVar116._14_2_ = 0;
        iVar66 = auVar69._0_4_ * 0x2000;
        iVar73 = auVar69._4_4_ * 0x2000;
        iVar75 = auVar69._8_4_ * 0x2000;
        iVar77 = auVar69._12_4_ * 0x2000;
        auVar133 = auVar133 & __LC21;
        uVar104 = __LC14 + iVar66;
        uVar106 = _UNK_0010a0a4 + iVar73;
        uVar107 = _UNK_0010a0a8 + iVar75;
        uVar108 = _UNK_0010a0ac + iVar77;
        uVar79 = (int)-(uint)(auVar93._0_4_ == __LC16) >> 0x1f;
        uVar85 = (int)-(uint)(auVar93._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar87 = (int)-(uint)(auVar93._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar89 = (int)-(uint)(auVar93._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar91 = (int)-(uint)(auVar93._0_4_ == 0) >> 0x1f;
        uVar98 = (int)-(uint)(auVar93._4_4_ == 0) >> 0x1f;
        uVar100 = (int)-(uint)(auVar93._8_4_ == 0) >> 0x1f;
        uVar102 = (int)-(uint)(auVar93._12_4_ == 0) >> 0x1f;
        auVar94._4_4_ = _UNK_0010a0b4;
        auVar94._0_4_ = __LC16;
        auVar94._8_4_ = _UNK_0010a0b8;
        auVar94._12_4_ = _UNK_0010a0bc;
        fVar132 = (float)(auVar133._0_4_ << 0x10 |
                         (uint)((float)(iVar66 + __LC18) + _LC20) & uVar91 |
                         ~uVar91 & (uVar79 & (uVar104 | __LC17) | ~uVar79 & uVar104));
        fVar134 = (float)(auVar133._4_4_ << 0x10 |
                         (uint)((float)(iVar73 + _UNK_0010a0d4) + _LC20) & uVar98 |
                         ~uVar98 & (uVar85 & (uVar106 | _UNK_0010a0c4) | ~uVar85 & uVar106));
        fVar135 = (float)(auVar133._8_4_ << 0x10 |
                         (uint)((float)(iVar75 + _UNK_0010a0d8) + _LC20) & uVar100 |
                         ~uVar100 & (uVar87 & (uVar107 | _UNK_0010a0c8) | ~uVar87 & uVar107));
        fVar136 = (float)(auVar133._12_4_ << 0x10 |
                         (uint)((float)(iVar77 + _UNK_0010a0dc) + _LC20) & uVar102 |
                         ~uVar102 & (uVar89 & (uVar108 | _UNK_0010a0cc) | ~uVar89 & uVar108));
        auVar94 = auVar94 & auVar116;
        auVar69 = pauVar56[1];
        auVar93 = __LC13 & auVar116;
        auVar116 = auVar116 & __LC21;
        iVar66 = auVar93._0_4_ * 0x2000;
        iVar73 = auVar93._4_4_ * 0x2000;
        iVar75 = auVar93._8_4_ * 0x2000;
        iVar77 = auVar93._12_4_ * 0x2000;
        auVar2._10_2_ = 0;
        auVar2._0_10_ = auVar69._0_10_;
        auVar2._12_2_ = auVar69._6_2_;
        auVar8._8_2_ = auVar69._4_2_;
        auVar8._0_8_ = auVar69._0_8_;
        auVar8._10_4_ = auVar2._10_4_;
        auVar31._6_8_ = 0;
        auVar31._0_6_ = auVar8._8_6_;
        auVar123._6_8_ = SUB148(auVar31 << 0x40,6);
        auVar123._4_2_ = auVar69._2_2_;
        auVar123._0_2_ = auVar69._0_2_;
        auVar123._2_2_ = 0;
        auVar123._14_2_ = 0;
        uVar91 = (int)-(uint)(auVar94._0_4_ == 0) >> 0x1f;
        uVar98 = (int)-(uint)(auVar94._4_4_ == 0) >> 0x1f;
        uVar100 = (int)-(uint)(auVar94._8_4_ == 0) >> 0x1f;
        uVar102 = (int)-(uint)(auVar94._12_4_ == 0) >> 0x1f;
        uVar104 = __LC14 + iVar66;
        uVar106 = _UNK_0010a0a4 + iVar73;
        uVar107 = _UNK_0010a0a8 + iVar75;
        uVar108 = _UNK_0010a0ac + iVar77;
        uVar79 = (int)-(uint)(auVar94._0_4_ == __LC16) >> 0x1f;
        uVar85 = (int)-(uint)(auVar94._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar87 = (int)-(uint)(auVar94._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar89 = (int)-(uint)(auVar94._12_4_ == _UNK_0010a0bc) >> 0x1f;
        auVar69._4_4_ = _UNK_0010a0b4;
        auVar69._0_4_ = __LC16;
        auVar69._8_4_ = _UNK_0010a0b8;
        auVar69._12_4_ = _UNK_0010a0bc;
        auVar69 = auVar69 & auVar123;
        fVar114 = (float)(auVar116._0_4_ << 0x10 |
                         (uint)((float)(iVar66 + __LC18) + _LC20) & uVar91 |
                         ~uVar91 & (uVar79 & (uVar104 | __LC17) | ~uVar79 & uVar104));
        fVar119 = (float)(auVar116._4_4_ << 0x10 |
                         (uint)((float)(iVar73 + _UNK_0010a0d4) + _LC20) & uVar98 |
                         ~uVar98 & (uVar85 & (uVar106 | _UNK_0010a0c4) | ~uVar85 & uVar106));
        fVar120 = (float)(auVar116._8_4_ << 0x10 |
                         (uint)((float)(iVar75 + _UNK_0010a0d8) + _LC20) & uVar100 |
                         ~uVar100 & (uVar87 & (uVar107 | _UNK_0010a0c8) | ~uVar87 & uVar107));
        fVar121 = (float)(auVar116._12_4_ << 0x10 |
                         (uint)((float)(iVar77 + _UNK_0010a0dc) + _LC20) & uVar102 |
                         ~uVar102 & (uVar89 & (uVar108 | _UNK_0010a0cc) | ~uVar89 & uVar108));
        auVar94 = __LC13 & auVar123;
        auVar123 = auVar123 & __LC21;
        iVar66 = auVar94._0_4_ * 0x2000;
        iVar73 = auVar94._4_4_ * 0x2000;
        iVar75 = auVar94._8_4_ * 0x2000;
        iVar77 = auVar94._12_4_ * 0x2000;
        uVar91 = (int)-(uint)(auVar69._0_4_ == 0) >> 0x1f;
        uVar98 = (int)-(uint)(auVar69._4_4_ == 0) >> 0x1f;
        uVar100 = (int)-(uint)(auVar69._8_4_ == 0) >> 0x1f;
        uVar102 = (int)-(uint)(auVar69._12_4_ == 0) >> 0x1f;
        uVar79 = (int)-(uint)(auVar69._0_4_ == __LC16) >> 0x1f;
        uVar85 = (int)-(uint)(auVar69._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar87 = (int)-(uint)(auVar69._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar89 = (int)-(uint)(auVar69._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar104 = __LC14 + iVar66;
        uVar106 = _UNK_0010a0a4 + iVar73;
        uVar107 = _UNK_0010a0a8 + iVar75;
        uVar108 = _UNK_0010a0ac + iVar77;
        auVar69 = pauVar56[1];
        auVar109._4_4_ = _UNK_0010a0b4;
        auVar109._0_4_ = __LC16;
        auVar109._8_4_ = _UNK_0010a0b8;
        auVar109._12_4_ = _UNK_0010a0bc;
        fVar122 = (float)(auVar123._0_4_ << 0x10 |
                         (uint)((float)(iVar66 + __LC18) + _LC20) & uVar91 |
                         ~uVar91 & (uVar79 & (uVar104 | __LC17) | ~uVar79 & uVar104));
        fVar125 = (float)(auVar123._4_4_ << 0x10 |
                         (uint)((float)(iVar73 + _UNK_0010a0d4) + _LC20) & uVar98 |
                         ~uVar98 & (uVar85 & (uVar106 | _UNK_0010a0c4) | ~uVar85 & uVar106));
        fVar126 = (float)(auVar123._8_4_ << 0x10 |
                         (uint)((float)(iVar75 + _UNK_0010a0d8) + _LC20) & uVar100 |
                         ~uVar100 & (uVar87 & (uVar107 | _UNK_0010a0c8) | ~uVar87 & uVar107));
        fVar127 = (float)(auVar123._12_4_ << 0x10 |
                         (uint)((float)(iVar77 + _UNK_0010a0dc) + _LC20) & uVar102 |
                         ~uVar102 & (uVar89 & (uVar108 | _UNK_0010a0cc) | ~uVar89 & uVar108));
        uVar79 = auVar69._8_4_;
        auVar68._0_8_ = auVar69._8_8_;
        auVar68._8_4_ = uVar79;
        auVar3._10_2_ = 0;
        auVar3._0_10_ = auVar68._0_10_;
        auVar3._12_2_ = auVar69._14_2_;
        auVar9._8_2_ = auVar69._12_2_;
        auVar9._0_8_ = auVar68._0_8_;
        auVar9._10_4_ = auVar3._10_4_;
        auVar32._6_8_ = 0;
        auVar32._0_6_ = auVar9._8_6_;
        auVar14._4_2_ = auVar69._10_2_;
        auVar14._0_4_ = uVar79;
        auVar14._6_8_ = SUB148(auVar32 << 0x40,6);
        auVar70._0_4_ = uVar79 & 0xffff;
        auVar70._4_10_ = auVar14._4_10_;
        auVar70._14_2_ = 0;
        auVar109 = auVar109 & auVar70;
        auVar69 = __LC13 & auVar70;
        iVar66 = auVar69._0_4_ * 0x2000;
        iVar73 = auVar69._4_4_ * 0x2000;
        iVar75 = auVar69._8_4_ * 0x2000;
        iVar77 = auVar69._12_4_ * 0x2000;
        uVar104 = __LC14 + iVar66;
        uVar106 = _UNK_0010a0a4 + iVar73;
        uVar107 = _UNK_0010a0a8 + iVar75;
        uVar108 = _UNK_0010a0ac + iVar77;
        uVar79 = (int)-(uint)(auVar109._0_4_ == __LC16) >> 0x1f;
        uVar85 = (int)-(uint)(auVar109._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar87 = (int)-(uint)(auVar109._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar89 = (int)-(uint)(auVar109._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar91 = (int)-(uint)(auVar109._0_4_ == 0) >> 0x1f;
        uVar98 = (int)-(uint)(auVar109._4_4_ == 0) >> 0x1f;
        uVar100 = (int)-(uint)(auVar109._8_4_ == 0) >> 0x1f;
        uVar102 = (int)-(uint)(auVar109._12_4_ == 0) >> 0x1f;
        auVar70 = auVar70 & __LC21;
        auVar69 = pauVar56[2];
        auVar111._4_4_ = _UNK_0010a0b4;
        auVar111._0_4_ = __LC16;
        auVar111._8_4_ = _UNK_0010a0b8;
        auVar111._12_4_ = _UNK_0010a0bc;
        auVar4._10_2_ = 0;
        auVar4._0_10_ = auVar69._0_10_;
        auVar4._12_2_ = auVar69._6_2_;
        auVar10._8_2_ = auVar69._4_2_;
        auVar10._0_8_ = auVar69._0_8_;
        auVar10._10_4_ = auVar4._10_4_;
        auVar33._6_8_ = 0;
        auVar33._0_6_ = auVar10._8_6_;
        auVar15._4_2_ = auVar69._2_2_;
        auVar15._0_4_ = auVar69._0_4_;
        auVar15._6_8_ = SUB148(auVar33 << 0x40,6);
        auVar95._0_4_ = auVar69._0_4_ & 0xffff;
        auVar95._4_10_ = auVar15._4_10_;
        auVar95._14_2_ = 0;
        fVar67 = (float)(auVar70._0_4_ << 0x10 |
                        (uint)((float)(iVar66 + __LC18) + _LC20) & uVar91 |
                        ~uVar91 & (uVar79 & (uVar104 | __LC17) | ~uVar79 & uVar104));
        fVar74 = (float)(auVar70._4_4_ << 0x10 |
                        (uint)((float)(iVar73 + _UNK_0010a0d4) + _LC20) & uVar98 |
                        ~uVar98 & (uVar85 & (uVar106 | _UNK_0010a0c4) | ~uVar85 & uVar106));
        fVar76 = (float)(auVar70._8_4_ << 0x10 |
                        (uint)((float)(iVar75 + _UNK_0010a0d8) + _LC20) & uVar100 |
                        ~uVar100 & (uVar87 & (uVar107 | _UNK_0010a0c8) | ~uVar87 & uVar107));
        fVar78 = (float)(auVar70._12_4_ << 0x10 |
                        (uint)((float)(iVar77 + _UNK_0010a0dc) + _LC20) & uVar102 |
                        ~uVar102 & (uVar89 & (uVar108 | _UNK_0010a0cc) | ~uVar89 & uVar108));
        auVar111 = auVar111 & auVar95;
        auVar69 = __LC13 & auVar95;
        iVar66 = auVar69._0_4_ * 0x2000;
        iVar73 = auVar69._4_4_ * 0x2000;
        iVar75 = auVar69._8_4_ * 0x2000;
        iVar77 = auVar69._12_4_ * 0x2000;
        auVar95 = auVar95 & __LC21;
        uVar104 = __LC14 + iVar66;
        uVar106 = _UNK_0010a0a4 + iVar73;
        uVar107 = _UNK_0010a0a8 + iVar75;
        uVar108 = _UNK_0010a0ac + iVar77;
        uVar91 = (int)-(uint)(auVar111._0_4_ == 0) >> 0x1f;
        uVar98 = (int)-(uint)(auVar111._4_4_ == 0) >> 0x1f;
        uVar100 = (int)-(uint)(auVar111._8_4_ == 0) >> 0x1f;
        uVar102 = (int)-(uint)(auVar111._12_4_ == 0) >> 0x1f;
        uVar79 = (int)-(uint)(auVar111._0_4_ == __LC16) >> 0x1f;
        uVar85 = (int)-(uint)(auVar111._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar87 = (int)-(uint)(auVar111._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar89 = (int)-(uint)(auVar111._12_4_ == _UNK_0010a0bc) >> 0x1f;
        auVar69 = pauVar56[2];
        auVar128._4_4_ = _UNK_0010a0b4;
        auVar128._0_4_ = __LC16;
        auVar128._8_4_ = _UNK_0010a0b8;
        auVar128._12_4_ = _UNK_0010a0bc;
        fVar92 = (float)(auVar95._0_4_ << 0x10 |
                        (uint)((float)(iVar66 + __LC18) + _LC20) & uVar91 |
                        ~uVar91 & (uVar79 & (uVar104 | __LC17) | ~uVar79 & uVar104));
        fVar99 = (float)(auVar95._4_4_ << 0x10 |
                        (uint)((float)(iVar73 + _UNK_0010a0d4) + _LC20) & uVar98 |
                        ~uVar98 & (uVar85 & (uVar106 | _UNK_0010a0c4) | ~uVar85 & uVar106));
        fVar101 = (float)(auVar95._8_4_ << 0x10 |
                         (uint)((float)(iVar75 + _UNK_0010a0d8) + _LC20) & uVar100 |
                         ~uVar100 & (uVar87 & (uVar107 | _UNK_0010a0c8) | ~uVar87 & uVar107));
        fVar103 = (float)(auVar95._12_4_ << 0x10 |
                         (uint)((float)(iVar77 + _UNK_0010a0dc) + _LC20) & uVar102 |
                         ~uVar102 & (uVar89 & (uVar108 | _UNK_0010a0cc) | ~uVar89 & uVar108));
        uVar79 = auVar69._8_4_;
        auVar81._0_8_ = auVar69._8_8_;
        auVar81._8_4_ = uVar79;
        auVar5._10_2_ = 0;
        auVar5._0_10_ = auVar81._0_10_;
        auVar5._12_2_ = auVar69._14_2_;
        auVar11._8_2_ = auVar69._12_2_;
        auVar11._0_8_ = auVar81._0_8_;
        auVar11._10_4_ = auVar5._10_4_;
        auVar34._6_8_ = 0;
        auVar34._0_6_ = auVar11._8_6_;
        auVar16._4_2_ = auVar69._10_2_;
        auVar16._0_4_ = uVar79;
        auVar16._6_8_ = SUB148(auVar34 << 0x40,6);
        auVar82._0_4_ = uVar79 & 0xffff;
        auVar82._4_10_ = auVar16._4_10_;
        auVar82._14_2_ = 0;
        auVar128 = auVar128 & auVar82;
        auVar69 = __LC13 & auVar82;
        auVar82 = auVar82 & __LC21;
        iVar66 = auVar69._0_4_ * 0x2000;
        iVar73 = auVar69._4_4_ * 0x2000;
        iVar75 = auVar69._8_4_ * 0x2000;
        iVar77 = auVar69._12_4_ * 0x2000;
        uVar104 = __LC14 + iVar66;
        uVar106 = _UNK_0010a0a4 + iVar73;
        uVar107 = _UNK_0010a0a8 + iVar75;
        uVar108 = _UNK_0010a0ac + iVar77;
        uVar91 = (int)-(uint)(auVar128._0_4_ == 0) >> 0x1f;
        uVar98 = (int)-(uint)(auVar128._4_4_ == 0) >> 0x1f;
        uVar100 = (int)-(uint)(auVar128._8_4_ == 0) >> 0x1f;
        uVar102 = (int)-(uint)(auVar128._12_4_ == 0) >> 0x1f;
        uVar79 = (int)-(uint)(auVar128._0_4_ == __LC16) >> 0x1f;
        uVar85 = (int)-(uint)(auVar128._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar87 = (int)-(uint)(auVar128._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar89 = (int)-(uint)(auVar128._12_4_ == _UNK_0010a0bc) >> 0x1f;
        local_338[0x18] = (fVar67 - fVar132) * _LC5;
        local_338[0x19] = (fVar74 - fVar134) * _LC5;
        local_338[0x1a] = (fVar76 - fVar135) * _LC5;
        local_338[0x1b] = (fVar78 - fVar136) * _LC5;
        local_348 = local_268;
        uStack_340 = uStack_260;
        fVar80 = (float)(auVar82._0_4_ << 0x10 |
                        (uint)(_LC20 + (float)(iVar66 + __LC18)) & uVar91 |
                        ~uVar91 & (uVar79 & (uVar104 | __LC17) | ~uVar79 & uVar104));
        fVar86 = (float)(auVar82._4_4_ << 0x10 |
                        (uint)(_LC20 + (float)(iVar73 + _UNK_0010a0d4)) & uVar98 |
                        ~uVar98 & (uVar85 & (uVar106 | _UNK_0010a0c4) | ~uVar85 & uVar106));
        fVar88 = (float)(auVar82._8_4_ << 0x10 |
                        (uint)(_LC20 + (float)(iVar75 + _UNK_0010a0d8)) & uVar100 |
                        ~uVar100 & (uVar87 & (uVar107 | _UNK_0010a0c8) | ~uVar87 & uVar107));
        fVar90 = (float)(auVar82._12_4_ << 0x10 |
                        (uint)(_LC20 + (float)(iVar77 + _UNK_0010a0dc)) & uVar102 |
                        ~uVar102 & (uVar89 & (uVar108 | _UNK_0010a0cc) | ~uVar89 & uVar108));
        local_338[0] = fVar17 - (fVar132 + fVar67) * _LC5;
        local_338[1] = fVar17 - (fVar134 + fVar74) * _LC5;
        local_338[2] = fVar17 - (fVar135 + fVar76) * _LC5;
        local_338[3] = fVar17 - (fVar136 + fVar78) * _LC5;
        local_338[0x1c] = (fVar92 - fVar114) * _LC5;
        local_338[0x1d] = (fVar99 - fVar119) * _LC5;
        local_338[0x1e] = (fVar101 - fVar120) * _LC5;
        local_338[0x1f] = (fVar103 - fVar121) * _LC5;
        local_338[4] = fVar18 - (fVar114 + fVar92) * _LC5;
        local_338[5] = fVar18 - (fVar119 + fVar99) * _LC5;
        local_338[6] = fVar18 - (fVar120 + fVar101) * _LC5;
        local_338[7] = fVar18 - (fVar121 + fVar103) * _LC5;
        auVar124._8_4_ = 0xffffffff;
        auVar124._0_8_ = 0xffffffffffffffff;
        auVar124._12_4_ = 0xffffffff;
        local_338[0x20] = (fVar80 - fVar122) * _LC5;
        local_338[0x21] = (fVar86 - fVar125) * _LC5;
        local_338[0x22] = (fVar88 - fVar126) * _LC5;
        local_338[0x23] = (fVar90 - fVar127) * _LC5;
        local_338[8] = fVar19 - (fVar122 + fVar80) * _LC5;
        local_338[9] = fVar19 - (fVar125 + fVar86) * _LC5;
        local_338[10] = fVar19 - (fVar126 + fVar88) * _LC5;
        local_338[0xb] = fVar19 - (fVar127 + fVar90) * _LC5;
        auVar112._0_4_ = 0.0 - (float)uVar20;
        auVar112._4_4_ = 0.0 - (float)((ulong)uVar20 >> 0x20);
        auVar112._8_4_ = 0.0 - (float)uVar21;
        auVar112._12_4_ = 0.0 - (float)((ulong)uVar21 >> 0x20);
        auVar69 = maxps(auVar112,auVar36);
        auVar137._0_4_ = 0.0 - (float)uVar23;
        auVar137._4_4_ = 0.0 - (float)((ulong)uVar23 >> 0x20);
        auVar137._8_4_ = 0.0 - (float)uVar24;
        auVar137._12_4_ = 0.0 - (float)((ulong)uVar24 >> 0x20);
        local_338[0xc] = auVar69._0_4_ + _LC29;
        local_338[0xd] = auVar69._4_4_ + _LC29;
        local_338[0xe] = auVar69._8_4_ + _LC29;
        auVar94 = maxps(auVar137,auVar37);
        local_338[0xf] = auVar69._12_4_ + _LC29;
        auVar110._0_4_ = 0.0 - (float)uVar26;
        auVar110._4_4_ = 0.0 - (float)((ulong)uVar26 >> 0x20);
        auVar110._8_4_ = 0.0 - (float)uVar27;
        auVar110._12_4_ = 0.0 - (float)((ulong)uVar27 >> 0x20);
        local_338[0x10] = auVar94._0_4_ + _LC29;
        local_338[0x11] = auVar94._4_4_ + _LC29;
        local_338[0x12] = auVar94._8_4_ + _LC29;
        auVar69 = maxps(auVar110,auVar38);
        local_338[0x13] = auVar94._12_4_ + _LC29;
        local_338[0x14] = auVar69._0_4_ + _LC29;
        local_338[0x15] = auVar69._4_4_ + _LC29;
        local_338[0x16] = auVar69._8_4_ + _LC29;
        local_338[0x17] = auVar69._12_4_ + _LC29;
        pfVar57 = local_338 + 0xc;
        do {
          fVar67 = pfVar57[4];
          fVar74 = *pfVar57;
          auVar143._0_4_ = 0.0 - *(float *)((long)local_338 + lVar60);
          auVar143._4_4_ = 0.0 - *(float *)((long)local_338 + lVar60 + 4);
          auVar143._8_4_ = 0.0 - *(float *)((long)local_338 + lVar60 + 8);
          auVar143._12_4_ = 0.0 - *(float *)((long)local_338 + lVar60 + 0xc);
          auVar69 = maxps(auVar143,*(undefined1 (*) [16])((long)local_338 + lVar60));
          fVar76 = pfVar57[8];
          lVar39 = lVar60 + 0x60;
          lVar40 = lVar60 + 100;
          lVar41 = lVar60 + 0x68;
          lVar42 = lVar60 + 0x6c;
          lVar60 = lVar60 + 0x10;
          auVar144._4_4_ =
               -(uint)(auVar69._4_4_ <=
                      fVar67 * local_268._4_4_ + fVar74 * (float)local_268 +
                      fVar76 * (float)uStack_260 + *(float *)((long)local_338 + lVar40));
          auVar144._0_4_ =
               -(uint)(auVar69._0_4_ <=
                      fVar67 * local_268._4_4_ + fVar74 * (float)local_268 +
                      fVar76 * (float)uStack_260 + *(float *)((long)local_338 + lVar39));
          auVar144._8_4_ =
               -(uint)(auVar69._8_4_ <=
                      fVar67 * local_268._4_4_ + fVar74 * (float)local_268 +
                      fVar76 * (float)uStack_260 + *(float *)((long)local_338 + lVar41));
          auVar144._12_4_ =
               -(uint)(auVar69._12_4_ <=
                      fVar67 * local_268._4_4_ + fVar74 * (float)local_268 +
                      fVar76 * (float)uStack_260 + *(float *)((long)local_338 + lVar42));
          auVar124 = auVar124 & auVar144;
          pfVar57 = pfVar57 + 1;
        } while (lVar60 != 0x30);
        pfVar57 = local_338 + 0xc;
        pfVar59 = (float *)&local_348;
        pfVar61 = (float *)&local_2a8;
        do {
          fVar67 = pfVar61[1];
          pfVar58 = pfVar57 + 4;
          fVar74 = *pfVar61;
          fVar76 = pfVar57[1];
          fVar78 = pfVar61[2];
          auVar152._0_4_ = fVar78 * local_338[8] + fVar67 * local_338[4] + fVar74 * local_338[0];
          auVar152._4_4_ = fVar78 * local_338[9] + fVar67 * local_338[5] + fVar74 * local_338[1];
          auVar152._8_4_ = fVar78 * local_338[10] + fVar67 * local_338[6] + fVar74 * local_338[2];
          auVar152._12_4_ = fVar78 * local_338[0xb] + fVar67 * local_338[7] + fVar74 * local_338[3];
          auVar145._0_4_ = 0.0 - auVar152._0_4_;
          auVar145._4_4_ = 0.0 - auVar152._4_4_;
          auVar145._8_4_ = 0.0 - auVar152._8_4_;
          auVar145._12_4_ = 0.0 - auVar152._12_4_;
          auVar69 = maxps(auVar145,auVar152);
          fVar67 = *pfVar57;
          fVar74 = pfVar57[2];
          fVar78 = *pfVar59;
          auVar146._4_4_ =
               -(uint)(auVar69._4_4_ <=
                      fVar78 + fVar74 * local_338[0x21] +
                               fVar76 * local_338[0x1d] + fVar67 * local_338[0x19]);
          auVar146._0_4_ =
               -(uint)(auVar69._0_4_ <=
                      fVar78 + fVar74 * local_338[0x20] +
                               fVar76 * local_338[0x1c] + fVar67 * local_338[0x18]);
          auVar146._8_4_ =
               -(uint)(auVar69._8_4_ <=
                      fVar78 + fVar74 * local_338[0x22] +
                               fVar76 * local_338[0x1e] + fVar67 * local_338[0x1a]);
          auVar146._12_4_ =
               -(uint)(auVar69._12_4_ <=
                      fVar78 + fVar74 * local_338[0x23] +
                               fVar76 * local_338[0x1f] + fVar67 * local_338[0x1b]);
          auVar124 = auVar124 & auVar146;
          pfVar57 = pfVar58;
          pfVar59 = pfVar59 + 1;
          pfVar61 = pfVar61 + 4;
        } while (local_338 + 0x18 != pfVar58);
        auVar147._0_4_ = fVar44 * local_338[8] - local_338[4] * fVar45;
        auVar147._4_4_ = fVar44 * local_338[9] - local_338[5] * fVar45;
        auVar147._8_4_ = fVar44 * local_338[10] - local_338[6] * fVar45;
        auVar147._12_4_ = fVar44 * local_338[0xb] - local_338[7] * fVar45;
        auVar153._0_4_ = 0.0 - auVar147._0_4_;
        auVar153._4_4_ = 0.0 - auVar147._4_4_;
        auVar153._8_4_ = 0.0 - auVar147._8_4_;
        auVar153._12_4_ = 0.0 - auVar147._12_4_;
        auVar128 = maxps(auVar153,auVar147);
        auVar138._0_4_ = fVar48 * local_338[8] - local_338[4] * fVar49;
        auVar138._4_4_ = fVar48 * local_338[9] - local_338[5] * fVar49;
        auVar138._8_4_ = fVar48 * local_338[10] - local_338[6] * fVar49;
        auVar138._12_4_ = fVar48 * local_338[0xb] - local_338[7] * fVar49;
        auVar148._0_4_ = 0.0 - auVar138._0_4_;
        auVar148._4_4_ = 0.0 - auVar138._4_4_;
        auVar148._8_4_ = 0.0 - auVar138._8_4_;
        auVar148._12_4_ = 0.0 - auVar138._12_4_;
        auVar93 = maxps(auVar148,auVar138);
        auVar139._0_4_ = fVar52 * local_338[8] - local_338[4] * fVar53;
        auVar139._4_4_ = fVar52 * local_338[9] - local_338[5] * fVar53;
        auVar139._8_4_ = fVar52 * local_338[10] - local_338[6] * fVar53;
        auVar139._12_4_ = fVar52 * local_338[0xb] - local_338[7] * fVar53;
        auVar149._0_4_ = 0.0 - auVar139._0_4_;
        auVar149._4_4_ = 0.0 - auVar139._4_4_;
        auVar149._8_4_ = 0.0 - auVar139._8_4_;
        auVar149._12_4_ = 0.0 - auVar139._12_4_;
        auVar109 = maxps(auVar149,auVar139);
        auVar140._0_4_ = local_338[0] * fVar45 - fVar43 * local_338[8];
        auVar140._4_4_ = local_338[1] * fVar45 - fVar43 * local_338[9];
        auVar140._8_4_ = local_338[2] * fVar45 - fVar43 * local_338[10];
        auVar140._12_4_ = local_338[3] * fVar45 - fVar43 * local_338[0xb];
        auVar150._0_4_ = 0.0 - auVar140._0_4_;
        auVar150._4_4_ = 0.0 - auVar140._4_4_;
        auVar150._8_4_ = 0.0 - auVar140._8_4_;
        auVar150._12_4_ = 0.0 - auVar140._12_4_;
        auVar111 = maxps(auVar150,auVar140);
        auVar141._0_4_ = local_338[0] * fVar49 - fVar47 * local_338[8];
        auVar141._4_4_ = local_338[1] * fVar49 - fVar47 * local_338[9];
        auVar141._8_4_ = local_338[2] * fVar49 - fVar47 * local_338[10];
        auVar141._12_4_ = local_338[3] * fVar49 - fVar47 * local_338[0xb];
        auVar151._4_4_ = 0.0 - auVar141._4_4_;
        auVar151._0_4_ = 0.0 - auVar141._0_4_;
        auVar151._8_4_ = 0.0 - auVar141._8_4_;
        auVar151._12_4_ = 0.0 - auVar141._12_4_;
        auVar94 = maxps(auVar151,auVar141);
        auVar142._0_4_ = local_338[0] * fVar53 - local_338[8] * fVar51;
        auVar142._4_4_ = local_338[1] * fVar53 - local_338[9] * fVar51;
        auVar142._8_4_ = local_338[2] * fVar53 - local_338[10] * fVar51;
        auVar142._12_4_ = local_338[3] * fVar53 - local_338[0xb] * fVar51;
        auVar129._0_4_ = 0.0 - auVar142._0_4_;
        auVar129._4_4_ = 0.0 - auVar142._4_4_;
        auVar129._8_4_ = 0.0 - auVar142._8_4_;
        auVar129._12_4_ = 0.0 - auVar142._12_4_;
        auVar69 = maxps(auVar129,auVar142);
        auVar154._0_4_ =
             -(uint)(auVar94._0_4_ <=
                     local_338[0x10] * local_338[0x20] + local_338[0x12] * local_338[0x18] +
                     local_338[0xd] * (float)uStack_260 + local_338[0x15] * (float)local_268 &&
                    auVar69._0_4_ <=
                    local_338[0x20] * local_338[0x14] + local_338[0x18] * local_338[0x16] +
                    local_338[0xd] * local_268._4_4_ + (float)local_268 * local_338[0x11]);
        auVar154._4_4_ =
             -(uint)(auVar94._4_4_ <=
                     local_338[0x10] * local_338[0x21] + local_338[0x12] * local_338[0x19] +
                     local_338[0xd] * (float)uStack_260 + local_338[0x15] * (float)local_268 &&
                    auVar69._4_4_ <=
                    local_338[0x21] * local_338[0x14] + local_338[0x19] * local_338[0x16] +
                    local_338[0xd] * local_268._4_4_ + (float)local_268 * local_338[0x11]);
        auVar154._8_4_ =
             -(uint)(auVar94._8_4_ <=
                     local_338[0x10] * local_338[0x22] + local_338[0x12] * local_338[0x1a] +
                     local_338[0xd] * (float)uStack_260 + local_338[0x15] * (float)local_268 &&
                    auVar69._8_4_ <=
                    local_338[0x22] * local_338[0x14] + local_338[0x1a] * local_338[0x16] +
                    local_338[0xd] * local_268._4_4_ + (float)local_268 * local_338[0x11]);
        auVar154._12_4_ =
             -(uint)(auVar94._12_4_ <=
                     local_338[0x10] * local_338[0x23] + local_338[0x12] * local_338[0x1b] +
                     local_338[0xd] * (float)uStack_260 + local_338[0x15] * (float)local_268 &&
                    auVar69._12_4_ <=
                    local_338[0x23] * local_338[0x14] + local_338[0x1b] * local_338[0x16] +
                    local_338[0xd] * local_268._4_4_ + (float)local_268 * local_338[0x11]);
        auVar130._0_4_ = fVar43 * local_338[4] - local_338[0] * fVar44;
        auVar130._4_4_ = fVar43 * local_338[5] - local_338[1] * fVar44;
        auVar130._8_4_ = fVar43 * local_338[6] - local_338[2] * fVar44;
        auVar130._12_4_ = fVar43 * local_338[7] - local_338[3] * fVar44;
        auVar83._0_4_ = 0.0 - auVar130._0_4_;
        auVar83._4_4_ = 0.0 - auVar130._4_4_;
        auVar83._8_4_ = 0.0 - auVar130._8_4_;
        auVar83._12_4_ = 0.0 - auVar130._12_4_;
        auVar69 = maxps(auVar83,auVar130);
        auVar113._0_4_ = fVar47 * local_338[4] - fVar48 * local_338[0];
        auVar113._4_4_ = fVar47 * local_338[5] - fVar48 * local_338[1];
        auVar113._8_4_ = fVar47 * local_338[6] - fVar48 * local_338[2];
        auVar113._12_4_ = fVar47 * local_338[7] - fVar48 * local_338[3];
        auVar84._0_4_ = 0.0 - auVar113._0_4_;
        auVar84._4_4_ = 0.0 - auVar113._4_4_;
        auVar84._8_4_ = 0.0 - auVar113._8_4_;
        auVar84._12_4_ = 0.0 - auVar113._12_4_;
        auVar94 = maxps(auVar84,auVar113);
        auVar96._0_4_ =
             -(uint)(auVar128._0_4_ <=
                     local_338[0xd] * local_338[0x20] + local_338[0xe] * local_338[0x1c] +
                     local_338[0x10] * (float)uStack_260 + local_338[0x14] * local_268._4_4_ &&
                    auVar93._0_4_ <=
                    local_338[0x20] * local_338[0x11] + local_338[0x12] * local_338[0x1c] +
                    (float)uStack_260 * local_338[0xc] + local_338[0x14] * (float)local_268);
        auVar96._4_4_ =
             -(uint)(auVar128._4_4_ <=
                     local_338[0xd] * local_338[0x21] + local_338[0xe] * local_338[0x1d] +
                     local_338[0x10] * (float)uStack_260 + local_338[0x14] * local_268._4_4_ &&
                    auVar93._4_4_ <=
                    local_338[0x21] * local_338[0x11] + local_338[0x12] * local_338[0x1d] +
                    (float)uStack_260 * local_338[0xc] + local_338[0x14] * (float)local_268);
        auVar96._8_4_ =
             -(uint)(auVar128._8_4_ <=
                     local_338[0xd] * local_338[0x22] + local_338[0xe] * local_338[0x1e] +
                     local_338[0x10] * (float)uStack_260 + local_338[0x14] * local_268._4_4_ &&
                    auVar93._8_4_ <=
                    local_338[0x22] * local_338[0x11] + local_338[0x12] * local_338[0x1e] +
                    (float)uStack_260 * local_338[0xc] + local_338[0x14] * (float)local_268);
        auVar96._12_4_ =
             -(uint)(auVar128._12_4_ <=
                     local_338[0xd] * local_338[0x23] + local_338[0xe] * local_338[0x1f] +
                     local_338[0x10] * (float)uStack_260 + local_338[0x14] * local_268._4_4_ &&
                    auVar93._12_4_ <=
                    local_338[0x23] * local_338[0x11] + local_338[0x12] * local_338[0x1f] +
                    (float)uStack_260 * local_338[0xc] + local_338[0x14] * (float)local_268);
        auVar105._0_4_ = local_338[4] * fVar51 - fVar52 * local_338[0];
        auVar105._4_4_ = local_338[5] * fVar51 - fVar52 * local_338[1];
        auVar105._8_4_ = local_338[6] * fVar51 - fVar52 * local_338[2];
        auVar105._12_4_ = local_338[7] * fVar51 - fVar52 * local_338[3];
        auVar131._0_4_ =
             -(uint)(auVar69._0_4_ <=
                     local_338[0xc] * local_338[0x1c] + local_338[0xd] * local_338[0x18] +
                     local_338[0x12] * (float)uStack_260 + local_268._4_4_ * local_338[0x16] &&
                    auVar94._0_4_ <=
                    (float)uStack_260 * local_338[0xe] + local_338[0x16] * (float)local_268 +
                    local_338[0x11] * local_338[0x18] + local_338[0x10] * local_338[0x1c]);
        auVar131._4_4_ =
             -(uint)(auVar69._4_4_ <=
                     local_338[0xc] * local_338[0x1d] + local_338[0xd] * local_338[0x19] +
                     local_338[0x12] * (float)uStack_260 + local_268._4_4_ * local_338[0x16] &&
                    auVar94._4_4_ <=
                    (float)uStack_260 * local_338[0xe] + local_338[0x16] * (float)local_268 +
                    local_338[0x11] * local_338[0x19] + local_338[0x10] * local_338[0x1d]);
        auVar131._8_4_ =
             -(uint)(auVar69._8_4_ <=
                     local_338[0xc] * local_338[0x1e] + local_338[0xd] * local_338[0x1a] +
                     local_338[0x12] * (float)uStack_260 + local_268._4_4_ * local_338[0x16] &&
                    auVar94._8_4_ <=
                    (float)uStack_260 * local_338[0xe] + local_338[0x16] * (float)local_268 +
                    local_338[0x11] * local_338[0x1a] + local_338[0x10] * local_338[0x1e]);
        auVar131._12_4_ =
             -(uint)(auVar69._12_4_ <=
                     local_338[0xc] * local_338[0x1f] + local_338[0xd] * local_338[0x1b] +
                     local_338[0x12] * (float)uStack_260 + local_268._4_4_ * local_338[0x16] &&
                    auVar94._12_4_ <=
                    (float)uStack_260 * local_338[0xe] + local_338[0x16] * (float)local_268 +
                    local_338[0x11] * local_338[0x1b] + local_338[0x10] * local_338[0x1f]);
        auVar117._0_4_ = 0.0 - auVar105._0_4_;
        auVar117._4_4_ = 0.0 - auVar105._4_4_;
        auVar117._8_4_ = 0.0 - auVar105._8_4_;
        auVar117._12_4_ = 0.0 - auVar105._12_4_;
        auVar69 = maxps(auVar117,auVar105);
        auVar118._4_4_ =
             -(uint)(auVar69._4_4_ <=
                    local_338[0x19] * local_338[0x15] + local_338[0x1d] * local_338[0x14] +
                    local_268._4_4_ * local_338[0xe] + (float)local_268 * local_338[0x12]);
        auVar118._0_4_ =
             -(uint)(auVar69._0_4_ <=
                    local_338[0x18] * local_338[0x15] + local_338[0x1c] * local_338[0x14] +
                    local_268._4_4_ * local_338[0xe] + (float)local_268 * local_338[0x12]);
        auVar118._8_4_ =
             -(uint)(auVar69._8_4_ <=
                    local_338[0x1a] * local_338[0x15] + local_338[0x1e] * local_338[0x14] +
                    local_268._4_4_ * local_338[0xe] + (float)local_268 * local_338[0x12]);
        auVar118._12_4_ =
             -(uint)(auVar69._12_4_ <=
                    local_338[0x1b] * local_338[0x15] + local_338[0x1f] * local_338[0x14] +
                    local_268._4_4_ * local_338[0xe] + (float)local_268 * local_338[0x12]);
        auVar71._0_4_ =
             -(uint)(auVar109._0_4_ <=
                     local_338[0x15] * local_338[0x20] + local_338[0x1c] * local_338[0x16] +
                     local_268._4_4_ * local_338[0xc] + local_338[0x10] * (float)local_268 &&
                    auVar111._0_4_ <=
                    local_338[0x20] * local_338[0xc] + local_338[0xe] * local_338[0x18] +
                    (float)uStack_260 * local_338[0x11] + local_338[0x15] * local_268._4_4_);
        auVar71._4_4_ =
             -(uint)(auVar109._4_4_ <=
                     local_338[0x15] * local_338[0x21] + local_338[0x1d] * local_338[0x16] +
                     local_268._4_4_ * local_338[0xc] + local_338[0x10] * (float)local_268 &&
                    auVar111._4_4_ <=
                    local_338[0x21] * local_338[0xc] + local_338[0xe] * local_338[0x19] +
                    (float)uStack_260 * local_338[0x11] + local_338[0x15] * local_268._4_4_);
        auVar71._8_4_ =
             -(uint)(auVar109._8_4_ <=
                     local_338[0x15] * local_338[0x22] + local_338[0x1e] * local_338[0x16] +
                     local_268._4_4_ * local_338[0xc] + local_338[0x10] * (float)local_268 &&
                    auVar111._8_4_ <=
                    local_338[0x22] * local_338[0xc] + local_338[0xe] * local_338[0x1a] +
                    (float)uStack_260 * local_338[0x11] + local_338[0x15] * local_268._4_4_);
        auVar71._12_4_ =
             -(uint)(auVar109._12_4_ <=
                     local_338[0x15] * local_338[0x23] + local_338[0x1f] * local_338[0x16] +
                     local_268._4_4_ * local_338[0xc] + local_338[0x10] * (float)local_268 &&
                    auVar111._12_4_ <=
                    local_338[0x23] * local_338[0xc] + local_338[0xe] * local_338[0x1b] +
                    (float)uStack_260 * local_338[0x11] + local_338[0x15] * local_268._4_4_);
        auVar69 = auVar131 & auVar118 & auVar71 & auVar96 & auVar124 & auVar154;
        uVar91 = (uint)((ulong)*(undefined8 *)(pauVar56[3] + 8) >> 0x20);
        uVar63 = movmskps((int)local_338,auVar69);
        uVar79 = auVar69._8_4_ >> 0x1f;
        uVar85 = uVar79 & (uint)*(undefined8 *)(pauVar56[3] + 8) | ~uVar79 & uVar91;
        uVar87 = auVar69._4_4_ >> 0x1f;
        uVar89 = auVar69._0_4_ >> 0x1f;
        uVar79 = (uint)((ulong)*(undefined8 *)pauVar56[3] >> 0x20) & uVar87 | ~uVar87 & uVar85;
        uVar85 = uVar85 & uVar87 | ~uVar87 & uVar91;
        auVar72._0_4_ = (uint)*(undefined8 *)pauVar56[3] & uVar89;
        auVar72._4_4_ = uVar79 & uVar89;
        auVar72._8_4_ = uVar85 & uVar89;
        auVar72._12_4_ = uVar91 & uVar89;
        auVar97._0_4_ = ~uVar89 & uVar79;
        auVar97._4_4_ = ~uVar89 & uVar85;
        auVar97._8_4_ = ~uVar89 & uVar91;
        auVar97._12_4_ = ~uVar89 & uVar91;
        iVar66 = __popcountdi2(CONCAT44((int)((ulong)local_338 >> 0x20),uVar63));
        local_508 = SUB168(auVar72 | auVar97,0);
        uStack_500 = SUB168(auVar72 | auVar97,8);
        lVar60 = (long)iVar62;
        iVar62 = iVar62 + iVar66;
        *(undefined8 *)(local_248 + lVar60) = local_508;
        *(undefined8 *)((long)auStack_240 + lVar60 * 4) = uStack_500;
      }
      if (param_3 <= iVar64) {
LAB_00103998:
        if (!bVar35) {
          iVar64 = 0;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return iVar64;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    bVar65 = iVar62 == 0;
    iVar62 = iVar62 + -1;
    if (bVar65) goto LAB_00103998;
    uVar55 = (ulong)local_248[iVar62];
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::StaticCompoundShape::sCastShapeVsCompound(JPH::ShapeCast const&, JPH::ShapeCastSettings
   const&, JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44 const&,
   JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::ShapeCastResult, JPH::CollisionCollectorTraitsCastShape>&) */

void __thiscall
JPH::StaticCompoundShape::sCastShapeVsCompound
          (undefined8 param_1_00,undefined8 param_2_00,StaticCompoundShape *this,undefined8 param_1,
          long param_2,StaticCompoundShape *param_3,undefined8 *param_7,undefined8 *param_8,
          undefined8 *param_9,long param_10)

{
  long *plVar1;
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
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [14];
  undefined1 auVar28 [14];
  undefined8 uVar29;
  char cVar30;
  long lVar31;
  ulong uVar32;
  undefined1 (*pauVar33) [16];
  ulong uVar34;
  byte bVar35;
  ulong uVar36;
  long lVar37;
  int iVar38;
  StaticCompoundShape *pSVar39;
  long *plVar40;
  long in_FS_OFFSET;
  byte bVar41;
  uint uVar42;
  float fVar43;
  uint uVar48;
  float fVar49;
  uint uVar50;
  undefined1 auVar44 [16];
  uint uVar51;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar52;
  int iVar53;
  int iVar54;
  undefined8 uVar55;
  int iVar66;
  int iVar68;
  undefined1 auVar56 [12];
  int iVar71;
  undefined1 auVar58 [16];
  int iVar67;
  int iVar69;
  undefined1 auVar57 [12];
  int iVar72;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined8 uVar70;
  undefined1 auVar73 [16];
  float fVar80;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar81;
  float fVar82;
  float fVar83;
  int iVar94;
  int iVar99;
  undefined1 auVar89 [16];
  int iVar84;
  uint uVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  uint uVar95;
  int iVar96;
  int iVar97;
  uint uVar100;
  int iVar101;
  int iVar102;
  int iVar104;
  uint uVar105;
  int iVar106;
  int iVar107;
  undefined1 auVar90 [16];
  int iVar98;
  int iVar103;
  int iVar108;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar109;
  undefined1 auVar93 [16];
  uint uVar110;
  uint uVar112;
  uint uVar113;
  uint uVar114;
  uint uVar121;
  uint uVar126;
  undefined1 auVar115 [16];
  uint uVar111;
  uint uVar122;
  uint uVar127;
  uint uVar131;
  uint uVar132;
  undefined1 auVar116 [16];
  uint uVar123;
  uint uVar124;
  uint uVar125;
  uint uVar128;
  uint uVar129;
  uint uVar130;
  uint uVar133;
  uint uVar134;
  uint uVar135;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  float fVar136;
  float fVar137;
  uint uVar138;
  uint uVar139;
  uint uVar140;
  uint uVar146;
  uint uVar147;
  uint uVar149;
  uint uVar150;
  uint uVar153;
  uint uVar154;
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  uint uVar148;
  uint uVar151;
  float fVar152;
  uint uVar155;
  float fVar156;
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  uint uVar157;
  float fVar160;
  uint uVar168;
  uint uVar172;
  undefined1 auVar161 [16];
  uint uVar158;
  uint uVar159;
  uint uVar169;
  uint uVar170;
  uint uVar173;
  uint uVar174;
  uint uVar176;
  uint uVar177;
  uint uVar178;
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  float fVar171;
  float fVar175;
  float fVar179;
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  uint uVar180;
  float fVar181;
  uint uVar190;
  undefined1 auVar182 [12];
  uint uVar188;
  undefined1 auVar183 [16];
  uint uVar192;
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  float fVar189;
  float fVar191;
  float fVar193;
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  float fVar197;
  uint uVar198;
  uint uVar202;
  uint uVar203;
  uint uVar204;
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  float fVar209;
  undefined1 auVar210 [16];
  float fVar211;
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  float fVar214;
  uint uVar215;
  uint uVar216;
  uint uVar217;
  uint uVar218;
  undefined1 auVar219 [16];
  undefined1 auStack_758 [8];
  float fStack_750;
  float fStack_74c;
  uint uStack_690;
  int iStack_68c;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined1 auStack_678 [16];
  undefined1 auStack_668 [4];
  float afStack_664 [3];
  undefined1 auStack_658 [16];
  undefined8 uStack_648;
  ulong uStack_640;
  undefined8 uStack_638;
  float fStack_630;
  float fStack_62c;
  undefined1 auStack_628 [4];
  float afStack_624 [15];
  undefined1 auStack_5e8 [4];
  float fStack_5e4;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined1 auStack_5a8 [16];
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined1 auStack_548 [16];
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 auStack_528 [16];
  uint auStack_518 [2];
  undefined8 auStack_510 [63];
  undefined1 auStack_318 [8];
  float fStack_310;
  int iStack_308;
  int iStack_304;
  int iStack_300;
  int iStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  undefined8 local_2d8;
  undefined8 local_2d0;
  StaticCompoundShape *local_2c8;
  undefined8 local_2c0;
  StaticCompoundShape *local_2b8;
  long local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278 [8];
  float fStack_270;
  float fStack_26c;
  undefined8 local_268;
  undefined8 local_260;
  uint uStack_258;
  float afStack_254 [2];
  undefined8 auStack_24c [65];
  long local_40;
  
  bVar41 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c8 = this;
  local_2c0 = param_1;
  local_2b8 = param_3;
  local_2b0 = param_10;
  local_2d8 = param_1_00;
  local_2d0 = param_2_00;
  local_2a8 = *param_7;
  uStack_2a0 = param_7[1];
  local_2f8 = (*(float *)(this + 0x80) + *(float *)(this + 0x70)) * _LC5;
  fStack_2f4 = (*(float *)(this + 0x84) + *(float *)(this + 0x74)) * _LC5;
  fStack_2f0 = (*(float *)(this + 0x88) + *(float *)(this + 0x78)) * _LC5;
  fStack_2ec = (*(float *)(this + 0x8c) + *(float *)(this + 0x7c)) * _LC5;
  local_2e8 = (*(float *)(this + 0x80) - *(float *)(this + 0x70)) * _LC5;
  fStack_2e4 = (*(float *)(this + 0x84) - *(float *)(this + 0x74)) * _LC5;
  fStack_2e0 = (*(float *)(this + 0x88) - *(float *)(this + 0x78)) * _LC5;
  fStack_2dc = (*(float *)(this + 0x8c) - *(float *)(this + 0x7c)) * _LC5;
  local_268 = *param_8;
  local_298 = param_7[2];
  uStack_290 = param_7[3];
  local_288 = param_7[4];
  uStack_280 = param_7[5];
  local_260 = *param_9;
  _local_278 = *(undefined1 (*) [16])(param_7 + 6);
  uStack_258 = *(int *)(param_2 + 0x50) - 1;
  if (uStack_258 != 0) {
    iVar53 = 0x1f;
    if (uStack_258 != 0) {
      for (; uStack_258 >> iVar53 == 0; iVar53 = iVar53 + -1) {
      }
    }
    uStack_258 = iVar53 + 1;
  }
  auVar219 = *(undefined1 (*) [16])(this + 0x60);
  uVar36 = 0;
  uVar34 = 0;
  auStack_518[0] = 0;
  auVar44._0_4_ = 0.0 - auVar219._0_4_;
  auVar44._4_4_ = 0.0 - auVar219._4_4_;
  auVar44._8_4_ = 0.0 - auVar219._8_4_;
  auVar44._12_4_ = 0.0 - auVar219._12_4_;
  auVar44 = maxps(auVar44,auVar219);
  iStack_308 = -(uint)(auVar44._0_4_ <= _LC26);
  iStack_304 = -(uint)(auVar44._4_4_ <= _LC26);
  iStack_300 = -(uint)(auVar44._8_4_ <= _LC26);
  iStack_2fc = -(uint)(auVar44._12_4_ <= _LC26);
  uVar42 = iStack_308 >> 0x1f;
  uVar48 = iStack_304 >> 0x1f;
  uVar50 = iStack_300 >> 0x1f;
  uVar51 = iStack_2fc >> 0x1f;
  auVar165._0_4_ = ~uVar42 & (uint)auVar219._0_4_;
  auVar165._4_4_ = ~uVar48 & (uint)auVar219._4_4_;
  auVar165._8_4_ = ~uVar50 & (uint)auVar219._8_4_;
  auVar165._12_4_ = ~uVar51 & (uint)auVar219._12_4_;
  auVar92._4_4_ = _LC22;
  auVar92._0_4_ = _LC22;
  auVar92._8_4_ = _LC22;
  auVar92._12_4_ = _LC22;
  auVar219._0_4_ = uVar42 & (uint)_LC22;
  auVar219._4_4_ = uVar48 & (uint)_LC22;
  auVar219._8_4_ = uVar50 & (uint)_LC22;
  auVar219._12_4_ = uVar51 & (uint)_LC22;
  _auStack_318 = divps(auVar92,auVar219 | auVar165);
  do {
    iVar38 = (int)uVar36;
    iVar53 = (int)uVar34;
    if (iVar53 != 0x7fffffff) {
      if (iVar53 < 0) {
        plVar40 = (long *)(*(long *)(param_2 + 0x60) + (ulong)(iVar53 + 0x80000000U) * 0x28);
        iStack_68c = uStack_258 + local_260._4_4_;
        bVar35 = (byte)((ulong)local_260 >> 0x20);
        fVar43 = (float)local_2d8 * *(float *)(plVar40 + 1);
        fVar49 = local_2d8._4_4_ * *(float *)((long)plVar40 + 0xc);
        fStack_630 = (float)local_2d0 * *(float *)(plVar40 + 2);
        uStack_690 = ~((int)(1L << ((byte)uStack_258 & 0x3f)) + -1 << (bVar35 & 0x1f)) &
                     (uint)local_260 | iVar53 + 0x80000000U << (bVar35 & 0x1f);
        if (*(char *)((long)plVar40 + 0x24) == '\0') {
          fVar80 = *(float *)((long)plVar40 + 0x14);
          fVar109 = *(float *)(plVar40 + 3);
          fVar136 = 0.0;
          fVar83 = *(float *)((long)plVar40 + 0x1c);
          fVar81 = _LC22 - (fVar83 * fVar83 + fVar109 * fVar109 + fVar80 * fVar80 + 0.0);
          if (0.0 <= fVar81) {
            fVar136 = SQRT(fVar81);
          }
          fVar82 = fVar80 + fVar80;
          fVar209 = fVar109 + fVar109;
          fVar214 = fVar83 * (fVar83 + fVar83);
          fVar137 = fVar136 * (fVar83 + fVar83);
          fVar197 = fVar83 * fVar82 + fVar209 * fVar136;
          fVar52 = fVar83 * fVar82 - fVar209 * fVar136;
          fVar81 = fVar83 * fVar209 - fVar82 * fVar136;
          fVar83 = fVar82 * fVar136 + fVar83 * fVar209;
          fVar211 = fVar109 * fVar82 - fVar137;
          fVar137 = fVar109 * fVar82 + fVar137;
          fVar136 = (_LC22 - fVar109 * fVar209) - fVar214;
          fVar214 = (_LC22 - fVar214) - fVar80 * fVar82;
          fVar80 = (_LC22 - fVar80 * fVar82) - fVar109 * fVar209;
        }
        else {
          fVar137 = 0.0;
          fVar52 = 0.0;
          fVar211 = 0.0;
          fVar83 = 0.0;
          fVar197 = 0.0;
          fVar81 = 0.0;
          fVar136 = _LC22;
          fVar214 = _LC22;
          fVar80 = _LC22;
        }
        register0x00001304 = fVar137;
        auStack_668 = fVar136;
        register0x00001308 = fVar52;
        register0x0000130c = 0;
        fStack_62c = _LC22;
        auStack_658._4_4_ = fVar214;
        auStack_658._0_4_ = fVar211;
        uStack_638 = CONCAT44(fVar49,fVar43);
        lVar31 = 0;
        auStack_658._8_4_ = fVar83;
        auStack_658._12_4_ = 0;
        uStack_648 = CONCAT44(fVar81,fVar197);
        uStack_640 = (ulong)(uint)fVar80;
        do {
          fVar109 = *(float *)(auStack_668 + lVar31);
          fVar82 = *(float *)(auStack_668 + lVar31 + 4);
          fVar209 = *(float *)(auStack_668 + lVar31 + 8);
          fVar152 = *(float *)(auStack_668 + lVar31 + 0xc);
          *(float *)(auStack_628 + lVar31) =
               fVar152 * (float)local_278._0_4_ +
               fVar209 * (float)local_288 + fVar82 * (float)local_298 + fVar109 * (float)local_2a8;
          *(float *)(auStack_628 + lVar31 + 4) =
               fVar152 * (float)local_278._4_4_ +
               fVar209 * local_288._4_4_ + fVar82 * local_298._4_4_ + fVar109 * local_2a8._4_4_;
          *(float *)(auStack_628 + lVar31 + 8) =
               fVar152 * fStack_270 +
               fVar209 * (float)uStack_280 +
               fVar82 * (float)uStack_290 + fVar109 * (float)uStack_2a0;
          *(float *)(auStack_628 + lVar31 + 0xc) =
               fVar152 * fStack_26c +
               fVar209 * uStack_280._4_4_ + fVar82 * uStack_290._4_4_ + fVar109 * uStack_2a0._4_4_;
          lVar31 = lVar31 + 0x10;
        } while (lVar31 != 0x40);
        lVar31 = 0;
        do {
          pSVar39 = local_2c8 + lVar31 + 0x20;
          fVar109 = *(float *)pSVar39;
          fVar82 = *(float *)(pSVar39 + 4);
          fVar209 = *(float *)(pSVar39 + 8);
          fVar152 = *(float *)(pSVar39 + 0xc);
          *(float *)(auStack_5e8 + lVar31) =
               fVar152 * (0.0 - (fVar43 * fVar136 + fVar49 * fVar137 + fStack_630 * fVar52)) +
               fVar109 * fVar136 + fVar82 * fVar137 + fVar209 * fVar52;
          *(float *)(auStack_5e8 + lVar31 + 4) =
               fVar152 * (0.0 - (fVar43 * fVar211 + fVar49 * fVar214 + fStack_630 * fVar83)) +
               fVar109 * fVar211 + fVar82 * fVar214 + fVar209 * fVar83;
          *(float *)(auStack_5e8 + lVar31 + 8) =
               fVar152 * (0.0 - (fVar43 * fVar197 + fVar49 * fVar81 + fStack_630 * fVar80)) +
               fVar109 * fVar197 + fVar82 * fVar81 + fVar209 * fVar80;
          *(float *)(auStack_5e8 + lVar31 + 0xc) =
               fVar152 * 1.0 + fVar109 * 0.0 + fVar82 * 0.0 + fVar209 * 0.0;
          lVar31 = lVar31 + 0x10;
        } while (lVar31 != 0x40);
        fVar43 = *(float *)(local_2c8 + 0x60);
        fVar49 = *(float *)(local_2c8 + 100);
        fVar109 = *(float *)(local_2c8 + 0x68);
        plVar1 = *(long **)local_2c8;
        uVar55 = *(undefined8 *)(local_2c8 + 0x10);
        uVar70 = *(undefined8 *)(local_2c8 + 0x18);
        auStack_758._4_4_ = fVar43 * fVar211 + fVar49 * fVar214 + fVar109 * fVar83;
        auStack_758._0_4_ = fVar43 * fVar136 + fVar49 * fVar137 + fVar109 * fVar52;
        fStack_750 = fVar43 * fVar197 + fVar49 * fVar81 + fVar109 * fVar80;
        fStack_74c = fVar43 * 0.0 + fVar49 * 0.0 + fVar109 * 0.0;
        (**(code **)(*plVar1 + 0x30))(uVar55,uVar70,&uStack_688,plVar1);
        pSVar39 = local_2b8;
        uStack_588 = _auStack_5e8;
        uStack_580 = uStack_5e0;
        auStack_5a8._0_8_ = plVar1;
        uStack_578 = uStack_5d8;
        uStack_570 = uStack_5d0;
        auStack_548 = _auStack_758;
        uStack_568 = uStack_5c8;
        uStack_560 = uStack_5c0;
        uStack_558 = uStack_5b8;
        uStack_550 = uStack_5b0;
        uStack_538 = uStack_688;
        uStack_530 = uStack_680;
        auStack_528 = auStack_678;
        uStack_598 = uVar55;
        uStack_590 = uVar70;
        auVar219 = CompoundShape::SubShape::TransformScale(local_2d8,local_2d0,plVar40);
        uVar55 = local_2c0;
        lVar31 = *plVar40;
        this = pSVar39;
        cVar30 = (**(code **)(*(long *)pSVar39 + 0x18))(pSVar39,plVar1,&local_268,lVar31);
        if (cVar30 != '\0') {
          this = (StaticCompoundShape *)auStack_5a8;
          (*(code *)(&CollisionDispatch::sCastShape)
                    [(ulong)*(byte *)(lVar31 + 0x19) +
                     (ulong)*(byte *)(auStack_5a8._0_8_ + 0x19) * 0x22])
                    (auVar219._0_8_,auVar219._8_8_,this,uVar55,lVar31,pSVar39,auStack_628,&local_268
                     ,&uStack_690);
        }
      }
      else {
        auVar115._4_4_ = _UNK_0010a0b4;
        auVar115._0_4_ = __LC16;
        auVar115._8_4_ = _UNK_0010a0b8;
        auVar115._12_4_ = _UNK_0010a0bc;
        pauVar33 = (undefined1 (*) [16])(uVar34 * 0x40 + *(long *)(param_2 + 0x80));
        auVar219 = *pauVar33;
        auVar44 = pauVar33[1];
        auVar7._10_2_ = 0;
        auVar7._0_10_ = auVar219._0_10_;
        auVar7._12_2_ = auVar219._6_2_;
        auVar13._8_2_ = auVar219._4_2_;
        auVar13._0_8_ = auVar219._0_8_;
        auVar13._10_4_ = auVar7._10_4_;
        auVar23._6_8_ = 0;
        auVar23._0_6_ = auVar13._8_6_;
        auVar89._6_8_ = SUB148(auVar23 << 0x40,6);
        auVar89._4_2_ = auVar219._2_2_;
        auVar89._0_2_ = auVar219._0_2_;
        auVar89._2_2_ = 0;
        auVar89._14_2_ = 0;
        auVar115 = auVar115 & auVar89;
        auVar219 = __LC13 & auVar89;
        iVar53 = auVar219._0_4_ * 0x2000;
        iVar66 = auVar219._4_4_ * 0x2000;
        iVar68 = auVar219._8_4_ * 0x2000;
        iVar71 = auVar219._12_4_ * 0x2000;
        uVar138 = __LC14 + iVar53;
        uVar146 = _UNK_0010a0a4 + iVar66;
        uVar149 = _UNK_0010a0a8 + iVar68;
        uVar153 = _UNK_0010a0ac + iVar71;
        uVar42 = (int)-(uint)(auVar115._0_4_ == __LC16) >> 0x1f;
        uVar48 = (int)-(uint)(auVar115._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar50 = (int)-(uint)(auVar115._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar51 = (int)-(uint)(auVar115._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar110 = (int)-(uint)(auVar115._0_4_ == 0) >> 0x1f;
        uVar121 = (int)-(uint)(auVar115._4_4_ == 0) >> 0x1f;
        uVar126 = (int)-(uint)(auVar115._8_4_ == 0) >> 0x1f;
        uVar131 = (int)-(uint)(auVar115._12_4_ == 0) >> 0x1f;
        auVar219 = *pauVar33;
        uVar85 = auVar219._8_4_;
        auVar56._0_8_ = auVar219._8_8_;
        auVar56._8_4_ = uVar85;
        auVar89 = auVar89 & __LC21;
        auVar161._4_4_ = _UNK_0010a0b4;
        auVar161._0_4_ = __LC16;
        auVar161._8_4_ = _UNK_0010a0b8;
        auVar161._12_4_ = _UNK_0010a0bc;
        auVar2._10_2_ = 0;
        auVar2._0_10_ = auVar56._0_10_;
        auVar2._12_2_ = auVar219._14_2_;
        auVar8._8_2_ = auVar219._12_2_;
        auVar8._0_8_ = auVar56._0_8_;
        auVar8._10_4_ = auVar2._10_4_;
        auVar24._6_8_ = 0;
        auVar24._0_6_ = auVar8._8_6_;
        auVar14._4_2_ = auVar219._10_2_;
        auVar14._0_4_ = uVar85;
        auVar14._6_8_ = SUB148(auVar24 << 0x40,6);
        auVar58._0_4_ = uVar85 & 0xffff;
        auVar58._4_10_ = auVar14._4_10_;
        auVar58._14_2_ = 0;
        auVar161 = auVar161 & auVar58;
        auVar219 = __LC13 & auVar58;
        auVar58 = auVar58 & __LC21;
        iVar84 = auVar219._0_4_ * 0x2000;
        iVar94 = auVar219._4_4_ * 0x2000;
        iVar99 = auVar219._8_4_ * 0x2000;
        iVar104 = auVar219._12_4_ * 0x2000;
        uVar139 = __LC14 + iVar84;
        uVar147 = _UNK_0010a0a4 + iVar94;
        uVar150 = _UNK_0010a0a8 + iVar99;
        uVar154 = _UNK_0010a0ac + iVar104;
        uVar111 = (int)-(uint)(auVar161._0_4_ == __LC16) >> 0x1f;
        uVar122 = (int)-(uint)(auVar161._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar127 = (int)-(uint)(auVar161._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar132 = (int)-(uint)(auVar161._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar157 = (int)-(uint)(auVar161._0_4_ == 0) >> 0x1f;
        uVar168 = (int)-(uint)(auVar161._4_4_ == 0) >> 0x1f;
        uVar172 = (int)-(uint)(auVar161._8_4_ == 0) >> 0x1f;
        uVar176 = (int)-(uint)(auVar161._12_4_ == 0) >> 0x1f;
        auVar219 = pauVar33[1];
        auVar3._10_2_ = 0;
        auVar3._0_10_ = auVar219._0_10_;
        auVar3._12_2_ = auVar219._6_2_;
        auVar9._8_2_ = auVar219._4_2_;
        auVar9._0_8_ = auVar219._0_8_;
        auVar9._10_4_ = auVar3._10_4_;
        auVar25._6_8_ = 0;
        auVar25._0_6_ = auVar9._8_6_;
        auVar141._6_8_ = SUB148(auVar25 << 0x40,6);
        auVar141._4_2_ = auVar219._2_2_;
        auVar141._0_2_ = auVar219._0_2_;
        auVar141._2_2_ = 0;
        auVar141._14_2_ = 0;
        auVar219 = __LC13 & auVar141;
        auVar116._4_4_ = _UNK_0010a0b4;
        auVar116._0_4_ = __LC16;
        auVar116._8_4_ = _UNK_0010a0b8;
        auVar116._12_4_ = _UNK_0010a0bc;
        iVar54 = auVar219._0_4_ * 0x2000;
        iVar67 = auVar219._4_4_ * 0x2000;
        iVar69 = auVar219._8_4_ * 0x2000;
        iVar72 = auVar219._12_4_ * 0x2000;
        auVar116 = auVar116 & auVar141;
        uVar158 = __LC14 + iVar54;
        uVar169 = _UNK_0010a0a4 + iVar67;
        uVar173 = _UNK_0010a0a8 + iVar69;
        uVar177 = _UNK_0010a0ac + iVar72;
        auVar141 = auVar141 & __LC21;
        uVar112 = (int)-(uint)(auVar116._0_4_ == 0) >> 0x1f;
        uVar123 = (int)-(uint)(auVar116._4_4_ == 0) >> 0x1f;
        uVar128 = (int)-(uint)(auVar116._8_4_ == 0) >> 0x1f;
        uVar133 = (int)-(uint)(auVar116._12_4_ == 0) >> 0x1f;
        auVar142._4_4_ = _UNK_0010a0b4;
        auVar142._0_4_ = __LC16;
        auVar142._8_4_ = _UNK_0010a0b8;
        auVar142._12_4_ = _UNK_0010a0bc;
        uVar85 = (int)-(uint)(auVar116._0_4_ == __LC16) >> 0x1f;
        uVar95 = (int)-(uint)(auVar116._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar100 = (int)-(uint)(auVar116._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar105 = (int)-(uint)(auVar116._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar113 = auVar44._8_4_;
        auVar57._0_8_ = auVar44._8_8_;
        auVar57._8_4_ = uVar113;
        auVar4._10_2_ = 0;
        auVar4._0_10_ = auVar57._0_10_;
        auVar4._12_2_ = auVar44._14_2_;
        auVar10._8_2_ = auVar44._12_2_;
        auVar10._0_8_ = auVar57._0_8_;
        auVar10._10_4_ = auVar4._10_4_;
        auVar26._6_8_ = 0;
        auVar26._0_6_ = auVar10._8_6_;
        auVar15._4_2_ = auVar44._10_2_;
        auVar15._0_4_ = uVar113;
        auVar15._6_8_ = SUB148(auVar26 << 0x40,6);
        auVar59._0_4_ = uVar113 & 0xffff;
        auVar59._4_10_ = auVar15._4_10_;
        auVar59._14_2_ = 0;
        auVar142 = auVar142 & auVar59;
        auVar219 = __LC13 & auVar59;
        auVar59 = auVar59 & __LC21;
        iVar86 = auVar219._0_4_ * 0x2000;
        iVar96 = auVar219._4_4_ * 0x2000;
        iVar101 = auVar219._8_4_ * 0x2000;
        iVar106 = auVar219._12_4_ * 0x2000;
        uVar159 = __LC14 + iVar86;
        uVar170 = _UNK_0010a0a4 + iVar96;
        uVar174 = _UNK_0010a0a8 + iVar101;
        uVar178 = _UNK_0010a0ac + iVar106;
        uVar113 = (int)-(uint)(auVar142._0_4_ == __LC16) >> 0x1f;
        uVar124 = (int)-(uint)(auVar142._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar129 = (int)-(uint)(auVar142._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar134 = (int)-(uint)(auVar142._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar140 = (int)-(uint)(auVar142._0_4_ == 0) >> 0x1f;
        uVar148 = (int)-(uint)(auVar142._4_4_ == 0) >> 0x1f;
        uVar151 = (int)-(uint)(auVar142._8_4_ == 0) >> 0x1f;
        uVar155 = (int)-(uint)(auVar142._12_4_ == 0) >> 0x1f;
        auVar219 = pauVar33[2];
        auVar183._4_4_ = _UNK_0010a0b4;
        auVar183._0_4_ = __LC16;
        auVar183._8_4_ = _UNK_0010a0b8;
        auVar183._12_4_ = _UNK_0010a0bc;
        auVar44 = pauVar33[2];
        auVar5._10_2_ = 0;
        auVar5._0_10_ = auVar219._0_10_;
        auVar5._12_2_ = auVar219._6_2_;
        auVar11._8_2_ = auVar219._4_2_;
        auVar11._0_8_ = auVar219._0_8_;
        auVar11._10_4_ = auVar5._10_4_;
        auVar27._6_8_ = 0;
        auVar27._0_6_ = auVar11._8_6_;
        auVar16._4_2_ = auVar219._2_2_;
        auVar16._0_4_ = auVar219._0_4_;
        auVar16._6_8_ = SUB148(auVar27 << 0x40,6);
        auVar162._0_4_ = auVar219._0_4_ & 0xffff;
        auVar162._4_10_ = auVar16._4_10_;
        auVar162._14_2_ = 0;
        auVar183 = auVar183 & auVar162;
        auVar219 = __LC13 & auVar162;
        auVar162 = auVar162 & __LC21;
        iVar87 = auVar219._0_4_ * 0x2000;
        iVar97 = auVar219._4_4_ * 0x2000;
        iVar102 = auVar219._8_4_ * 0x2000;
        iVar107 = auVar219._12_4_ * 0x2000;
        uVar198 = __LC14 + iVar87;
        uVar202 = _UNK_0010a0a4 + iVar97;
        uVar203 = _UNK_0010a0a8 + iVar102;
        uVar204 = _UNK_0010a0ac + iVar107;
        uVar114 = (int)-(uint)(auVar183._0_4_ == __LC16) >> 0x1f;
        uVar125 = (int)-(uint)(auVar183._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar130 = (int)-(uint)(auVar183._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar135 = (int)-(uint)(auVar183._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar180 = (int)-(uint)(auVar183._0_4_ == 0) >> 0x1f;
        uVar188 = (int)-(uint)(auVar183._4_4_ == 0) >> 0x1f;
        uVar190 = (int)-(uint)(auVar183._8_4_ == 0) >> 0x1f;
        uVar192 = (int)-(uint)(auVar183._12_4_ == 0) >> 0x1f;
        uVar215 = auVar44._8_4_;
        auVar182._0_8_ = auVar44._8_8_;
        auVar182._8_4_ = uVar215;
        auVar6._10_2_ = 0;
        auVar6._0_10_ = auVar182._0_10_;
        auVar6._12_2_ = auVar44._14_2_;
        auVar12._8_2_ = auVar44._12_2_;
        auVar12._0_8_ = auVar182._0_8_;
        auVar12._10_4_ = auVar6._10_4_;
        auVar28._6_8_ = 0;
        auVar28._0_6_ = auVar12._8_6_;
        auVar17._4_2_ = auVar44._10_2_;
        auVar17._0_4_ = uVar215;
        auVar17._6_8_ = SUB148(auVar28 << 0x40,6);
        auVar90._0_4_ = uVar215 & 0xffff;
        auVar90._4_10_ = auVar17._4_10_;
        auVar90._14_2_ = 0;
        auVar219 = __LC21 & auVar90;
        auVar199._4_4_ = _UNK_0010a0b4;
        auVar199._0_4_ = __LC16;
        auVar199._8_4_ = _UNK_0010a0b8;
        auVar199._12_4_ = _UNK_0010a0bc;
        auVar199 = auVar199 & auVar90;
        auVar90 = __LC13 & auVar90;
        iVar88 = auVar90._0_4_ * 0x2000;
        iVar98 = auVar90._4_4_ * 0x2000;
        iVar103 = auVar90._8_4_ * 0x2000;
        iVar108 = auVar90._12_4_ * 0x2000;
        uVar215 = __LC14 + iVar88;
        uVar216 = _UNK_0010a0a4 + iVar98;
        uVar217 = _UNK_0010a0a8 + iVar103;
        uVar218 = _UNK_0010a0ac + iVar108;
        auVar60._0_4_ =
             (float)(auVar59._0_4_ << 0x10 |
                    (uint)((float)(iVar86 + __LC18) + _LC20) & uVar140 |
                    ~uVar140 & (uVar113 & (uVar159 | __LC17) | ~uVar113 & uVar159)) *
             (float)local_2d8;
        auVar60._4_4_ =
             (float)(auVar59._4_4_ << 0x10 |
                    (uint)((float)(iVar96 + _UNK_0010a0d4) + _LC20) & uVar148 |
                    ~uVar148 & (uVar124 & (uVar170 | _UNK_0010a0c4) | ~uVar124 & uVar170)) *
             (float)local_2d8;
        auVar60._8_4_ =
             (float)(auVar59._8_4_ << 0x10 |
                    (uint)((float)(iVar101 + _UNK_0010a0d8) + _LC20) & uVar151 |
                    ~uVar151 & (uVar129 & (uVar174 | _UNK_0010a0c8) | ~uVar129 & uVar174)) *
             (float)local_2d8;
        auVar60._12_4_ =
             (float)(auVar59._12_4_ << 0x10 |
                    (uint)((float)(iVar106 + _UNK_0010a0dc) + _LC20) & uVar155 |
                    ~uVar155 & (uVar134 & (uVar178 | _UNK_0010a0cc) | ~uVar134 & uVar178)) *
             (float)local_2d8;
        uVar140 = (int)-(uint)(auVar199._0_4_ == 0) >> 0x1f;
        uVar148 = (int)-(uint)(auVar199._4_4_ == 0) >> 0x1f;
        uVar151 = (int)-(uint)(auVar199._8_4_ == 0) >> 0x1f;
        uVar155 = (int)-(uint)(auVar199._12_4_ == 0) >> 0x1f;
        uVar113 = (int)-(uint)(auVar199._0_4_ == __LC16) >> 0x1f;
        uVar124 = (int)-(uint)(auVar199._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar129 = (int)-(uint)(auVar199._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar134 = (int)-(uint)(auVar199._12_4_ == _UNK_0010a0bc) >> 0x1f;
        lVar31 = (long)iVar38;
        auVar91._0_8_ =
             CONCAT44((float)(auVar89._4_4_ << 0x10 |
                             (uint)((float)(iVar66 + _UNK_0010a0d4) + _LC20) & uVar121 |
                             ~uVar121 & (uVar48 & (uVar146 | _UNK_0010a0c4) | ~uVar48 & uVar146)) *
                      (float)local_2d8,
                      (float)(auVar89._0_4_ << 0x10 |
                             (uint)((float)(iVar53 + __LC18) + _LC20) & uVar110 |
                             ~uVar110 & (uVar42 & (uVar138 | __LC17) | ~uVar42 & uVar138)) *
                      (float)local_2d8);
        auVar91._8_4_ =
             (float)(auVar89._8_4_ << 0x10 |
                    (uint)((float)(iVar68 + _UNK_0010a0d8) + _LC20) & uVar126 |
                    ~uVar126 & (uVar50 & (uVar149 | _UNK_0010a0c8) | ~uVar50 & uVar149)) *
             (float)local_2d8;
        auVar91._12_4_ =
             (float)(auVar89._12_4_ << 0x10 |
                    (uint)((float)(iVar71 + _UNK_0010a0dc) + _LC20) & uVar131 |
                    ~uVar131 & (uVar51 & (uVar153 | _UNK_0010a0cc) | ~uVar51 & uVar153)) *
             (float)local_2d8;
        auVar184._8_4_ = auVar91._8_4_;
        auVar184._0_8_ = auVar91._0_8_;
        auVar184._12_4_ = auVar91._12_4_;
        auVar92 = maxps(auVar91,auVar60);
        auVar115 = minps(auVar184,auVar60);
        auVar163._0_4_ =
             (float)(auVar162._0_4_ << 0x10 |
                    (uint)((float)(iVar87 + __LC18) + _LC20) & uVar180 |
                    ~uVar180 & (uVar114 & (uVar198 | __LC17) | ~uVar114 & uVar198)) *
             local_2d8._4_4_;
        auVar163._4_4_ =
             (float)(auVar162._4_4_ << 0x10 |
                    (uint)((float)(iVar97 + _UNK_0010a0d4) + _LC20) & uVar188 |
                    ~uVar188 & (uVar125 & (uVar202 | _UNK_0010a0c4) | ~uVar125 & uVar202)) *
             local_2d8._4_4_;
        auVar163._8_4_ =
             (float)(auVar162._8_4_ << 0x10 |
                    (uint)((float)(iVar102 + _UNK_0010a0d8) + _LC20) & uVar190 |
                    ~uVar190 & (uVar130 & (uVar203 | _UNK_0010a0c8) | ~uVar130 & uVar203)) *
             local_2d8._4_4_;
        auVar163._12_4_ =
             (float)(auVar162._12_4_ << 0x10 |
                    (uint)((float)(iVar107 + _UNK_0010a0dc) + _LC20) & uVar192 |
                    ~uVar192 & (uVar135 & (uVar204 | _UNK_0010a0cc) | ~uVar135 & uVar204)) *
             local_2d8._4_4_;
        auVar61._0_8_ =
             CONCAT44((float)(auVar58._4_4_ << 0x10 |
                             (uint)((float)(iVar94 + _UNK_0010a0d4) + _LC20) & uVar168 |
                             ~uVar168 & (uVar122 & (uVar147 | _UNK_0010a0c4) | ~uVar122 & uVar147))
                      * local_2d8._4_4_,
                      (float)(auVar58._0_4_ << 0x10 |
                             (uint)((float)(iVar84 + __LC18) + _LC20) & uVar157 |
                             ~uVar157 & (uVar111 & (uVar139 | __LC17) | ~uVar111 & uVar139)) *
                      local_2d8._4_4_);
        auVar61._8_4_ =
             (float)(auVar58._8_4_ << 0x10 |
                    (uint)((float)(iVar99 + _UNK_0010a0d8) + _LC20) & uVar172 |
                    ~uVar172 & (uVar127 & (uVar150 | _UNK_0010a0c8) | ~uVar127 & uVar150)) *
             local_2d8._4_4_;
        auVar61._12_4_ =
             (float)(auVar58._12_4_ << 0x10 |
                    (uint)((float)(iVar104 + _UNK_0010a0dc) + _LC20) & uVar176 |
                    ~uVar176 & (uVar132 & (uVar154 | _UNK_0010a0cc) | ~uVar132 & uVar154)) *
             local_2d8._4_4_;
        auVar73._0_4_ =
             (float)(auVar219._0_4_ << 0x10 |
                    (uint)((float)(iVar88 + __LC18) + _LC20) & uVar140 |
                    ~uVar140 & (uVar113 & (uVar215 | __LC17) | ~uVar113 & uVar215)) *
             (float)local_2d0;
        auVar73._4_4_ =
             (float)(auVar219._4_4_ << 0x10 |
                    (uint)((float)(iVar98 + _UNK_0010a0d4) + _LC20) & uVar148 |
                    ~uVar148 & (uVar124 & (uVar216 | _UNK_0010a0c4) | ~uVar124 & uVar216)) *
             (float)local_2d0;
        auVar73._8_4_ =
             (float)(auVar219._8_4_ << 0x10 |
                    (uint)((float)(iVar103 + _UNK_0010a0d8) + _LC20) & uVar151 |
                    ~uVar151 & (uVar129 & (uVar217 | _UNK_0010a0c8) | ~uVar129 & uVar217)) *
             (float)local_2d0;
        auVar73._12_4_ =
             (float)(auVar219._12_4_ << 0x10 |
                    (uint)((float)(iVar108 + _UNK_0010a0dc) + _LC20) & uVar155 |
                    ~uVar155 & (uVar134 & (uVar218 | _UNK_0010a0cc) | ~uVar134 & uVar218)) *
             (float)local_2d0;
        auVar185._8_4_ = auVar61._8_4_;
        auVar185._0_8_ = auVar61._0_8_;
        auVar185._12_4_ = auVar61._12_4_;
        auVar219 = maxps(auVar61,auVar163);
        auVar161 = minps(auVar185,auVar163);
        auVar62._0_8_ =
             CONCAT44((float)(auVar141._4_4_ << 0x10 |
                             (uint)((float)(iVar67 + _UNK_0010a0d4) + _LC20) & uVar123 |
                             ~uVar123 & (uVar95 & (uVar169 | _UNK_0010a0c4) | ~uVar95 & uVar169)) *
                      (float)local_2d0,
                      (float)(auVar141._0_4_ << 0x10 |
                             (uint)((float)(iVar54 + __LC18) + _LC20) & uVar112 |
                             ~uVar112 & (uVar85 & (uVar158 | __LC17) | ~uVar85 & uVar158)) *
                      (float)local_2d0);
        auVar62._8_4_ =
             (float)(auVar141._8_4_ << 0x10 |
                    (uint)((float)(iVar69 + _UNK_0010a0d8) + _LC20) & uVar128 |
                    ~uVar128 & (uVar100 & (uVar173 | _UNK_0010a0c8) | ~uVar100 & uVar173)) *
             (float)local_2d0;
        auVar62._12_4_ =
             (float)(auVar141._12_4_ << 0x10 |
                    (uint)((float)(iVar72 + _UNK_0010a0dc) + _LC20) & uVar133 |
                    ~uVar133 & (uVar105 & (uVar177 | _UNK_0010a0cc) | ~uVar105 & uVar177)) *
             (float)local_2d0;
        auVar164._8_4_ = auVar62._8_4_;
        auVar164._0_8_ = auVar62._0_8_;
        auVar164._12_4_ = auVar62._12_4_;
        auVar44 = maxps(auVar62,auVar73);
        auVar165 = minps(auVar164,auVar73);
        fVar211 = auVar92._0_4_ + local_2e8;
        fVar52 = auVar92._4_4_ + local_2e8;
        fVar137 = auVar92._8_4_ + local_2e8;
        fVar109 = auVar92._12_4_ + local_2e8;
        fVar82 = auVar115._0_4_ - local_2e8;
        fVar209 = auVar115._4_4_ - local_2e8;
        fVar152 = auVar115._8_4_ - local_2e8;
        fVar156 = auVar115._12_4_ - local_2e8;
        fVar181 = auVar161._0_4_ - fStack_2e4;
        fVar189 = auVar161._4_4_ - fStack_2e4;
        fVar191 = auVar161._8_4_ - fStack_2e4;
        fVar193 = auVar161._12_4_ - fStack_2e4;
        fVar43 = fStack_2e4 + auVar219._0_4_;
        fVar83 = fStack_2e4 + auVar219._4_4_;
        fVar197 = fStack_2e4 + auVar219._8_4_;
        fVar214 = fStack_2e4 + auVar219._12_4_;
        fVar160 = auVar165._0_4_ - fStack_2e0;
        fVar171 = auVar165._4_4_ - fStack_2e0;
        fVar175 = auVar165._8_4_ - fStack_2e0;
        fVar179 = auVar165._12_4_ - fStack_2e0;
        fVar49 = auVar44._0_4_ + fStack_2e0;
        fVar81 = auVar44._4_4_ + fStack_2e0;
        fVar136 = auVar44._8_4_ + fStack_2e0;
        fVar80 = auVar44._12_4_ + fStack_2e0;
        auVar200._0_8_ =
             CONCAT44((fVar209 - local_2f8) * (float)auStack_318._0_4_,
                      (fVar82 - local_2f8) * (float)auStack_318._0_4_);
        auVar200._8_4_ = (fVar152 - local_2f8) * (float)auStack_318._0_4_;
        auVar200._12_4_ = (fVar156 - local_2f8) * (float)auStack_318._0_4_;
        auVar210._0_4_ = (fVar211 - local_2f8) * (float)auStack_318._0_4_;
        auVar210._4_4_ = (fVar52 - local_2f8) * (float)auStack_318._0_4_;
        auVar210._8_4_ = (fVar137 - local_2f8) * (float)auStack_318._0_4_;
        auVar210._12_4_ = (fVar109 - local_2f8) * (float)auStack_318._0_4_;
        auVar194._0_8_ =
             CONCAT44((fVar189 - fStack_2f4) * (float)auStack_318._4_4_,
                      (fVar181 - fStack_2f4) * (float)auStack_318._4_4_);
        auVar194._8_4_ = (fVar191 - fStack_2f4) * (float)auStack_318._4_4_;
        auVar194._12_4_ = (fVar193 - fStack_2f4) * (float)auStack_318._4_4_;
        auVar186._0_8_ =
             CONCAT44((fVar171 - fStack_2f0) * fStack_310,(fVar160 - fStack_2f0) * fStack_310);
        auVar186._8_4_ = (fVar175 - fStack_2f0) * fStack_310;
        auVar186._12_4_ = (fVar179 - fStack_2f0) * fStack_310;
        auVar74._4_4_ = (fVar81 - fStack_2f0) * fStack_310;
        auVar74._0_4_ = (fVar49 - fStack_2f0) * fStack_310;
        auVar143._8_4_ = auVar200._8_4_;
        auVar143._0_8_ = auVar200._0_8_;
        auVar143._12_4_ = auVar200._12_4_;
        auVar219 = minps(auVar143,auVar210);
        uVar42 = iStack_308 >> 0x1f;
        auVar165 = maxps(auVar200,auVar210);
        auVar207._0_4_ = (fVar43 - fStack_2f4) * (float)auStack_318._4_4_;
        auVar207._4_4_ = (fVar83 - fStack_2f4) * (float)auStack_318._4_4_;
        auVar207._8_4_ = (fVar197 - fStack_2f4) * (float)auStack_318._4_4_;
        auVar207._12_4_ = (fVar214 - fStack_2f4) * (float)auStack_318._4_4_;
        auVar212._8_4_ = auVar194._8_4_;
        auVar212._0_8_ = auVar194._0_8_;
        auVar212._12_4_ = auVar194._12_4_;
        auVar117._0_4_ = ~uVar42 & auVar219._0_4_;
        auVar117._4_4_ = ~uVar42 & auVar219._4_4_;
        auVar117._8_4_ = ~uVar42 & auVar219._8_4_;
        auVar117._12_4_ = ~uVar42 & auVar219._12_4_;
        auVar74._8_4_ = (fVar136 - fStack_2f0) * fStack_310;
        auVar74._12_4_ = (fVar80 - fStack_2f0) * fStack_310;
        auVar44 = minps(auVar212,auVar207);
        uVar50 = iStack_304 >> 0x1f;
        auVar205._0_4_ = (uint)_LC1 & uVar42;
        auVar205._4_4_ = (uint)_LC1 & uVar42;
        auVar205._8_4_ = (uint)_LC1 & uVar42;
        auVar205._12_4_ = (uint)_LC1 & uVar42;
        auVar63._8_4_ = auVar186._8_4_;
        auVar63._0_8_ = auVar186._0_8_;
        auVar63._12_4_ = auVar186._12_4_;
        auVar219 = minps(auVar63,auVar74);
        auVar92 = maxps(auVar194,auVar207);
        auVar118._0_4_ = ~uVar50 & auVar44._0_4_;
        auVar118._4_4_ = ~uVar50 & auVar44._4_4_;
        auVar118._8_4_ = ~uVar50 & auVar44._8_4_;
        auVar118._12_4_ = ~uVar50 & auVar44._12_4_;
        auVar44 = maxps(auVar186,auVar74);
        auVar213._0_4_ = (uint)_LC1 & uVar50;
        auVar213._4_4_ = (uint)_LC1 & uVar50;
        auVar213._8_4_ = (uint)_LC1 & uVar50;
        auVar213._12_4_ = (uint)_LC1 & uVar50;
        auVar115 = maxps(auVar205 | auVar117,auVar213 | auVar118);
        uVar48 = iStack_300 >> 0x1f;
        auVar166._0_4_ = (uint)_LC1 & uVar48;
        auVar166._4_4_ = (uint)_LC1 & uVar48;
        auVar166._8_4_ = (uint)_LC1 & uVar48;
        auVar166._12_4_ = (uint)_LC1 & uVar48;
        auVar75._0_4_ = ~uVar48 & auVar219._0_4_;
        auVar75._4_4_ = ~uVar48 & auVar219._4_4_;
        auVar75._8_4_ = ~uVar48 & auVar219._8_4_;
        auVar75._12_4_ = ~uVar48 & auVar219._12_4_;
        auVar76._0_4_ = ~uVar42 & auVar165._0_4_;
        auVar76._4_4_ = ~uVar42 & auVar165._4_4_;
        auVar76._8_4_ = ~uVar42 & auVar165._8_4_;
        auVar76._12_4_ = ~uVar42 & auVar165._12_4_;
        auVar187._4_4_ = -(uint)(fVar81 < fVar171);
        auVar187._0_4_ = -(uint)(fVar49 < fVar160);
        auVar45._0_4_ = uVar42 & _LC3;
        auVar45._4_4_ = uVar42 & _LC3;
        auVar45._8_4_ = uVar42 & _LC3;
        auVar45._12_4_ = uVar42 & _LC3;
        auVar144._0_4_ = uVar50 & _LC3;
        auVar144._4_4_ = uVar50 & _LC3;
        auVar144._8_4_ = uVar50 & _LC3;
        auVar144._12_4_ = uVar50 & _LC3;
        auVar77._0_4_ = ~uVar50 & auVar92._0_4_;
        auVar77._4_4_ = ~uVar50 & auVar92._4_4_;
        auVar77._8_4_ = ~uVar50 & auVar92._8_4_;
        auVar77._12_4_ = ~uVar50 & auVar92._12_4_;
        auVar119._0_4_ = uVar48 & _LC3;
        auVar119._4_4_ = uVar48 & _LC3;
        auVar119._8_4_ = uVar48 & _LC3;
        auVar119._12_4_ = uVar48 & _LC3;
        auVar195._0_4_ = ~uVar48 & auVar44._0_4_;
        auVar195._4_4_ = ~uVar48 & auVar44._4_4_;
        auVar195._8_4_ = ~uVar48 & auVar44._8_4_;
        auVar195._12_4_ = ~uVar48 & auVar44._12_4_;
        auVar219 = minps(auVar45 | auVar76,auVar144 | auVar77);
        auVar44 = maxps(auVar115,auVar166 | auVar75);
        auVar187._8_4_ = -(uint)(fVar136 < fVar175);
        auVar187._12_4_ = -(uint)(fVar80 < fVar179);
        auVar219 = minps(auVar219,auVar119 | auVar195);
        auVar64._4_4_ = -(uint)(fVar81 < fStack_2f0);
        auVar64._0_4_ = -(uint)(fVar49 < fStack_2f0);
        auVar64._8_4_ = -(uint)(fVar136 < fStack_2f0);
        auVar64._12_4_ = -(uint)(fVar80 < fStack_2f0);
        auVar46._4_4_ = -(uint)(auVar219._4_4_ < 0.0);
        auVar46._0_4_ = -(uint)(auVar219._0_4_ < 0.0);
        auVar46._8_4_ = -(uint)(auVar219._8_4_ < 0.0);
        auVar46._12_4_ = -(uint)(auVar219._12_4_ < 0.0);
        auVar167._4_4_ = -(uint)(auVar219._4_4_ < auVar44._4_4_);
        auVar167._0_4_ = -(uint)(auVar219._0_4_ < auVar44._0_4_);
        auVar167._8_4_ = -(uint)(auVar219._8_4_ < auVar44._8_4_);
        auVar167._12_4_ = -(uint)(auVar219._12_4_ < auVar44._12_4_);
        auVar196._4_4_ = -(uint)(fVar83 < fVar189);
        auVar196._0_4_ = -(uint)(fVar43 < fVar181);
        auVar78._4_4_ = -(uint)(fVar83 < fStack_2f4);
        auVar78._0_4_ = -(uint)(fVar43 < fStack_2f4);
        auVar196._8_4_ = -(uint)(fVar197 < fVar191);
        auVar196._12_4_ = -(uint)(fVar214 < fVar193);
        auVar145._4_4_ = -(uint)(fVar52 < fVar209);
        auVar145._0_4_ = -(uint)(fVar211 < fVar82);
        auVar93._4_4_ = -(uint)(fVar52 < local_2f8);
        auVar93._0_4_ = -(uint)(fVar211 < local_2f8);
        auVar93._8_4_ = -(uint)(fVar137 < local_2f8);
        auVar93._12_4_ = -(uint)(fVar109 < local_2f8);
        auVar120._4_4_ = -(uint)(local_2f8 < fVar209);
        auVar120._0_4_ = -(uint)(local_2f8 < fVar82);
        auVar120._8_4_ = -(uint)(local_2f8 < fVar152);
        auVar120._12_4_ = -(uint)(local_2f8 < fVar156);
        auVar145._8_4_ = -(uint)(fVar137 < fVar152);
        auVar145._12_4_ = -(uint)(fVar109 < fVar156);
        auVar78._8_4_ = -(uint)(fVar197 < fStack_2f4);
        auVar78._12_4_ = -(uint)(fVar214 < fStack_2f4);
        auVar206._4_4_ = -(uint)(fStack_2f4 < fVar189);
        auVar206._0_4_ = -(uint)(fStack_2f4 < fVar181);
        auVar206._8_4_ = -(uint)(fStack_2f4 < fVar191);
        auVar206._12_4_ = -(uint)(fStack_2f4 < fVar193);
        auVar208._4_4_ = -(uint)(fStack_2f0 < fVar171);
        auVar208._0_4_ = -(uint)(fStack_2f0 < fVar160);
        auVar208._8_4_ = -(uint)(fStack_2f0 < fVar175);
        auVar208._12_4_ = -(uint)(fStack_2f0 < fVar179);
        auVar20._4_4_ = iStack_308;
        auVar20._0_4_ = iStack_308;
        auVar20._8_4_ = iStack_308;
        auVar20._12_4_ = iStack_308;
        auVar22._4_4_ = iStack_304;
        auVar22._0_4_ = iStack_304;
        auVar22._8_4_ = iStack_304;
        auVar22._12_4_ = iStack_304;
        auVar21._4_4_ = iStack_300;
        auVar21._0_4_ = iStack_300;
        auVar21._8_4_ = iStack_300;
        auVar21._12_4_ = iStack_300;
        auVar219 = (auVar120 | auVar93) & auVar20 | (auVar206 | auVar78) & auVar22 |
                   auVar145 | auVar196 | auVar167 | auVar46 |
                   (auVar208 | auVar64) & auVar21 | auVar187;
        uVar42 = auVar219._0_4_ >> 0x1f;
        uVar48 = auVar219._4_4_ >> 0x1f;
        uVar50 = auVar219._8_4_ >> 0x1f;
        uVar51 = auVar219._12_4_ >> 0x1f;
        auVar201._0_4_ = _LC3 & uVar42;
        auVar201._4_4_ = _LC3 & uVar48;
        auVar201._8_4_ = _LC3 & uVar50;
        auVar201._12_4_ = _LC3 & uVar51;
        auVar65._0_4_ = ~uVar42 & (uint)auVar44._0_4_;
        auVar65._4_4_ = ~uVar48 & (uint)auVar44._4_4_;
        auVar65._8_4_ = ~uVar50 & (uint)auVar44._8_4_;
        auVar65._12_4_ = ~uVar51 & (uint)auVar44._12_4_;
        auVar201 = auVar201 | auVar65;
        fVar43 = *(float *)(local_2b0 + 8);
        if (*(float *)(local_2b0 + 8) <= _LC35) {
          fVar43 = _LC35;
        }
        fVar49 = auVar201._0_4_;
        fVar83 = auVar201._4_4_;
        fVar136 = auVar201._8_4_;
        fVar214 = auVar201._12_4_;
        uVar50 = (uint)*(undefined8 *)pauVar33[3];
        uVar51 = (uint)((ulong)*(undefined8 *)pauVar33[3] >> 0x20);
        uVar100 = (uint)*(undefined8 *)(pauVar33[3] + 8);
        uVar110 = (uint)((ulong)*(undefined8 *)(pauVar33[3] + 8) >> 0x20);
        uVar42 = (int)-(uint)(fVar49 < fVar136) >> 0x1f;
        uVar48 = (int)-(uint)(fVar83 < fVar214) >> 0x1f;
        fVar81 = (float)((uint)fVar136 & uVar42 | ~uVar42 & (uint)fVar49);
        fVar197 = (float)((uint)fVar214 & uVar48 | ~uVar48 & (uint)fVar83);
        fVar136 = (float)((uint)fVar49 & uVar42 | ~uVar42 & (uint)fVar136);
        fVar214 = (float)((uint)fVar83 & uVar48 | ~uVar48 & (uint)fVar214);
        uVar85 = ~uVar42 & uVar50 | uVar42 & uVar100;
        uVar95 = ~uVar48 & uVar51 | uVar48 & uVar110;
        uVar105 = ~uVar42 & uVar100 | uVar42 & uVar50;
        uVar110 = ~uVar48 & uVar110 | uVar48 & uVar51;
        uVar42 = (int)-(uint)(fVar81 < fVar197) >> 0x1f;
        uVar50 = (int)-(uint)(fVar136 < fVar214) >> 0x1f;
        fVar49 = (float)((uint)fVar81 & uVar42 | ~uVar42 & (uint)fVar197);
        fVar83 = (float)((uint)fVar214 & uVar50 | ~uVar50 & (uint)fVar136);
        uVar48 = uVar42 & uVar85 | ~uVar42 & uVar95;
        uVar51 = uVar50 & uVar110 | ~uVar50 & uVar105;
        uVar100 = (int)-(uint)(fVar49 < fVar83) >> 0x1f;
        auVar79._4_4_ = ~uVar100 & (uint)fVar49;
        auVar79._0_4_ = (uint)fVar197 & uVar42 | ~uVar42 & (uint)fVar81;
        auVar79._8_4_ = ~uVar100 & (uint)fVar83;
        auVar79._12_4_ = (uint)fVar136 & uVar50 | ~uVar50 & (uint)fVar214;
        auVar19._4_4_ = (uint)fVar49 & uVar100;
        auVar19._0_4_ = (uint)fVar83 & uVar100;
        auVar19._8_8_ = 0;
        auVar79 = auVar19 << 0x20 | auVar79;
        register0x000012c4 = ~uVar100 & uVar48;
        auStack_628 = uVar42 & uVar95 | ~uVar42 & uVar85;
        register0x000012c8 = ~uVar100 & uVar51;
        register0x000012cc = uVar50 & uVar105 | ~uVar50 & uVar110;
        auVar18._4_4_ = uVar100 & uVar48;
        auVar18._0_4_ = uVar100 & uVar51;
        auVar18._8_8_ = 0;
        _auStack_628 = auVar18 << 0x20 | _auStack_628;
        auVar47._4_4_ = -(uint)(auVar79._4_4_ < fVar43);
        auVar47._0_4_ = -(uint)(auVar79._0_4_ < fVar43);
        auVar47._8_4_ = -(uint)(auVar79._8_4_ < fVar43);
        auVar47._12_4_ = -(uint)(auVar79._12_4_ < fVar43);
        uVar48 = movmskps((int)this,auVar47);
        this = (StaticCompoundShape *)(ulong)uVar48;
        uVar42 = __popcountdi2();
        auStack_5a8 = auVar79;
        if (uVar48 == 0) {
          auStack_5a8 = (undefined1  [16])0x0;
          uVar55 = 0;
          uVar70 = 0;
        }
        else {
          _auStack_5e8 = (undefined1  [16])0x0;
          uVar34 = (ulong)uVar42 << 2;
          this = (StaticCompoundShape *)auStack_5e8;
          lVar37 = (4 - (long)(int)uVar42) * 4;
          pSVar39 = (StaticCompoundShape *)auStack_5a8 + lVar37;
          if (7 < (uint)uVar34) {
            for (uVar36 = uVar34 >> 3 & 0x1fffffff; uVar36 != 0; uVar36 = uVar36 - 1) {
              *(long *)this = *(long *)pSVar39;
              pSVar39 = pSVar39 + (ulong)bVar41 * -0x10 + 8;
              this = this + (ulong)bVar41 * -0x10 + 8;
            }
          }
          if ((uVar34 & 4) != 0) {
            *(undefined4 *)this = *(undefined4 *)pSVar39;
          }
          plVar40 = (long *)(auStack_628 + lVar37);
          auStack_5a8 = (undefined1  [16])0x0;
          pSVar39 = (StaticCompoundShape *)auStack_5a8;
          if (7 < (uint)uVar34) {
            this = (StaticCompoundShape *)auStack_5a8;
            for (uVar36 = uVar34 >> 3 & 0x1fffffff; pSVar39 = this, uVar36 != 0; uVar36 = uVar36 - 1
                ) {
              *(long *)this = *plVar40;
              plVar40 = plVar40 + (ulong)bVar41 * -2 + 1;
              this = this + (ulong)bVar41 * -0x10 + 8;
            }
          }
          uVar55 = _auStack_5e8;
          uVar70 = uStack_5e0;
          if ((uVar34 & 4) != 0) {
            *(int *)pSVar39 = (int)*plVar40;
          }
        }
        uVar29 = auStack_5a8._8_8_;
        *(undefined8 *)(afStack_254 + lVar31) = uVar55;
        *(undefined8 *)((long)auStack_24c + lVar31 * 4) = uVar70;
        iVar38 = iVar38 + uVar42;
        _auStack_628 = auStack_5a8;
        *(undefined8 *)(auStack_518 + lVar31) = auStack_5a8._0_8_;
        *(undefined8 *)((long)auStack_510 + lVar31 * 4) = uVar29;
      }
      if (*(float *)(local_2b0 + 8) <= _LC1) {
LAB_0010407d:
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
    uVar34 = (long)(iVar38 + -1);
    do {
      uVar32 = uVar34;
      if ((int)uVar32 == -1) goto LAB_0010407d;
      fVar43 = *(float *)(local_2b0 + 8);
      if (*(float *)(local_2b0 + 8) <= _LC35) {
        fVar43 = _LC35;
      }
      uVar34 = uVar32 - 1;
    } while (fVar43 <= afStack_254[uVar32]);
    uVar36 = uVar32 & 0xffffffff;
    uVar34 = (ulong)auStack_518[(int)uVar32];
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::StaticCompoundShape::CollectTransformedShapes(JPH::AABox const&, JPH::Vec3, JPH::Quat,
   JPH::Vec3, JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::ShapeFilter const&) const */

void JPH::StaticCompoundShape::CollectTransformedShapes
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_1,undefined1 (*param_8) [16],
               undefined8 *param_9,long param_10,long *param_11)

{
  long *plVar1;
  code *pcVar2;
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [14];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  char cVar30;
  ulong uVar31;
  undefined1 (*pauVar32) [16];
  float *pfVar33;
  float *pfVar34;
  byte bVar35;
  float *pfVar36;
  long lVar37;
  undefined8 *puVar38;
  int iVar39;
  undefined4 uVar40;
  long in_FS_OFFSET;
  bool bVar41;
  float fVar42;
  float fVar43;
  int iVar44;
  float fVar49;
  float fVar51;
  float fVar53;
  undefined1 auVar45 [16];
  int iVar50;
  int iVar52;
  int iVar54;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  uint uVar55;
  int iVar56;
  uint uVar65;
  uint uVar67;
  undefined1 auVar57 [12];
  uint uVar69;
  undefined1 auVar59 [16];
  int iVar66;
  int iVar68;
  undefined1 auVar58 [12];
  int iVar70;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  int iVar71;
  uint uVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar86;
  undefined1 auVar76 [16];
  int iVar81;
  uint uVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  uint uVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  int iVar91;
  uint uVar92;
  int iVar93;
  int iVar94;
  int iVar95;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  uint uVar99;
  uint uVar103;
  uint uVar113;
  undefined1 auVar104 [16];
  uint uVar100;
  uint uVar108;
  uint uVar109;
  uint uVar114;
  uint uVar118;
  uint uVar119;
  undefined1 auVar105 [16];
  uint uVar101;
  uint uVar102;
  uint uVar110;
  uint uVar111;
  uint uVar115;
  uint uVar116;
  uint uVar120;
  uint uVar121;
  undefined1 auVar106 [16];
  uint uVar112;
  uint uVar117;
  uint uVar122;
  undefined1 auVar107 [16];
  float fVar123;
  uint uVar126;
  uint uVar124;
  uint uVar125;
  uint uVar130;
  uint uVar131;
  uint uVar133;
  uint uVar134;
  uint uVar136;
  uint uVar137;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  uint uVar132;
  uint uVar135;
  uint uVar138;
  undefined1 auVar129 [16];
  float fVar139;
  uint uVar140;
  uint uVar141;
  uint uVar142;
  uint uVar147;
  uint uVar150;
  undefined1 auVar143 [16];
  uint uVar148;
  uint uVar149;
  uint uVar151;
  uint uVar152;
  uint uVar153;
  uint uVar154;
  uint uVar155;
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  float fVar156;
  float fVar157;
  uint uVar158;
  uint uVar164;
  uint uVar165;
  undefined1 auVar159 [12];
  uint uVar166;
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  float fVar167;
  undefined1 auVar168 [16];
  uint uVar169;
  uint uVar170;
  uint uVar177;
  uint uVar179;
  uint uVar181;
  undefined1 auVar171 [16];
  uint uVar178;
  uint uVar180;
  uint uVar182;
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  float fVar188;
  float fVar189;
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  uint uVar200;
  float fVar201;
  uint uVar203;
  uint uVar204;
  uint uVar205;
  undefined1 auVar202 [16];
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  uint local_4e8;
  uint uStack_4e4;
  uint uStack_4e0;
  uint uStack_4dc;
  uint uStack_448;
  uint uStack_444;
  uint uStack_440;
  uint uStack_43c;
  uint uStack_3b0;
  int iStack_3ac;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  float afStack_398 [36];
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined1 local_2e8 [4];
  float afStack_2e4 [3];
  undefined1 local_2d8 [8];
  float fStack_2d0;
  float fStack_2cc;
  undefined1 local_2c8 [8];
  float fStack_2c0;
  float fStack_2bc;
  undefined8 local_2b8;
  float local_2b0;
  undefined4 local_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [8];
  float fStack_280;
  float fStack_27c;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  long local_260;
  uint uStack_258;
  long *plStack_250;
  uint auStack_248 [2];
  undefined8 auStack_240 [64];
  long local_40;
  
  local_4e8 = (uint)param_3;
  uStack_4e4 = (uint)((ulong)param_3 >> 0x20);
  uStack_4e0 = (uint)param_4;
  uStack_4dc = (uint)((ulong)param_4 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar30 = (**(code **)(*param_11 + 0x10))(param_11,param_1);
  if (cVar30 == '\0') {
LAB_00104a77:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  fVar42 = (float)(local_4e8 ^ _LC33);
  fVar49 = (float)(uStack_4e4 ^ _UNK_0010a0f4);
  fVar51 = (float)(uStack_4e0 ^ _UNK_0010a0f8);
  fVar53 = (float)(uStack_4dc ^ _UNK_0010a0fc);
  local_2ac = 0x3f800000;
  local_308 = *(undefined8 *)*param_8;
  uStack_300 = *(undefined8 *)(*param_8 + 8);
  fVar139 = fVar49 + fVar49;
  local_2f8 = *(undefined8 *)param_8[1];
  uStack_2f0 = *(undefined8 *)(param_8[1] + 8);
  fVar96 = fVar42 + fVar42;
  fVar167 = fVar51 * (fVar51 + fVar51);
  fVar43 = fVar53 * (fVar51 + fVar51);
  local_2c8._0_4_ = fVar51 * fVar96 + fVar139 * fVar53;
  fVar123 = fVar51 * fVar96 - fVar139 * fVar53;
  fVar188 = fVar51 * fVar139 - fVar96 * fVar53;
  fVar51 = fVar51 * fVar139 + fVar96 * fVar53;
  local_2c8._4_4_ = fVar188;
  fVar53 = (_LC22 - fVar42 * fVar96) - fVar49 * fVar139;
  fVar189 = (_LC22 - fVar167) - fVar42 * fVar96;
  fStack_2c0 = fVar53;
  fStack_2bc = 0.0;
  fVar157 = fVar49 * fVar96 + fVar43;
  local_2d8._0_4_ = fVar49 * fVar96 - fVar43;
  auVar45 = *param_8;
  local_2e8 = (undefined1  [4])((_LC22 - fVar49 * fVar139) - fVar167);
  local_2d8._4_4_ = fVar189;
  fStack_2d0 = fVar51;
  fStack_2cc = 0.0;
  local_4f8._0_4_ = (float)param_1_00;
  afStack_2e4[0] = fVar157;
  afStack_2e4[1] = fVar123;
  afStack_2e4[2] = 0.0;
  local_4f8._4_4_ = (float)((ulong)param_1_00 >> 0x20);
  uStack_4f0._0_4_ = (float)param_2;
  fVar42 = (auVar45._0_4_ + *(float *)param_8[1]) * _LC5;
  fVar43 = (auVar45._4_4_ + *(float *)(param_8[1] + 4)) * _UNK_0010a074;
  fVar49 = (auVar45._8_4_ + *(float *)(param_8[1] + 8)) * _UNK_0010a078;
  local_298 = param_1_00;
  uStack_290 = param_2;
  fStack_280 = (float)uStack_4e0;
  local_288 = param_3;
  fStack_27c = (float)uStack_4dc;
  local_2b8 = CONCAT44(fVar42 * fVar157 + fVar43 * fVar189 + fVar49 * fVar188 +
                       (0.0 - ((float)local_4f8 * fVar157 + local_4f8._4_4_ * fVar189 +
                              (float)uStack_4f0 * fVar188)),
                       fVar42 * (float)local_2e8 + fVar43 * (float)local_2d8._0_4_ +
                       fVar49 * (float)local_2c8._0_4_ +
                       (0.0 - ((float)local_4f8 * (float)local_2e8 +
                               local_4f8._4_4_ * (float)local_2d8._0_4_ +
                              (float)uStack_4f0 * (float)local_2c8._0_4_)));
  local_2b0 = fVar42 * fVar123 + fVar43 * fVar51 + fVar49 * fVar53 +
              (0.0 - ((float)local_4f8 * fVar123 + local_4f8._4_4_ * fVar51 +
                     (float)uStack_4f0 * fVar53));
  local_2a8 = _LC5 * (*(float *)param_8[1] - auVar45._0_4_);
  fStack_2a4 = _UNK_0010a074 * (*(float *)(param_8[1] + 4) - auVar45._4_4_);
  fStack_2a0 = _UNK_0010a078 * (*(float *)(param_8[1] + 8) - auVar45._8_4_);
  fStack_29c = _UNK_0010a07c * (*(float *)(param_8[1] + 0xc) - auVar45._12_4_);
  local_278 = param_5;
  local_270 = param_6;
  local_268 = *param_9;
  local_260 = param_10;
  uStack_258 = *(int *)(param_1 + 0x50) - 1;
  if (uStack_258 != 0) {
    iVar39 = 0x1f;
    if (uStack_258 != 0) {
      for (; uStack_258 >> iVar39 == 0; iVar39 = iVar39 + -1) {
      }
    }
    uStack_258 = iVar39 + 1;
  }
  plStack_250 = param_11;
  iVar39 = 0;
  auStack_248[0] = 0;
  uVar31 = 0;
  do {
    iVar44 = (int)uVar31;
    if (iVar44 != 0x7fffffff) {
      if (iVar44 < 0) {
        puVar38 = (undefined8 *)(*(long *)(param_1 + 0x60) + (ulong)(iVar44 + 0x80000000U) * 0x28);
        fVar53 = (float)local_288._0_4_ * 0.0;
        fVar201 = (float)local_288._4_4_ * 0.0;
        fVar167 = (float)(_LC33 ^ local_288._0_4_);
        fVar188 = (float)(_UNK_0010a0f4 ^ local_288._4_4_);
        fVar189 = (float)(_UNK_0010a0f8 ^ (uint)fStack_280);
        fVar156 = (float)(_UNK_0010a0fc ^ (uint)fStack_27c);
        fVar42 = *(float *)(puVar38 + 1) * (float)local_278;
        fVar43 = *(float *)((long)puVar38 + 0xc) * local_278._4_4_;
        fVar49 = *(float *)(puVar38 + 2) * (float)local_270;
        iStack_3ac = uStack_258 + local_268._4_4_;
        bVar35 = (byte)((ulong)local_268 >> 0x20);
        uStack_3b0 = ~((int)(1L << ((byte)uStack_258 & 0x3f)) + -1 << (bVar35 & 0x1f)) &
                     (uint)local_268 | iVar44 + 0x80000000U << (bVar35 & 0x1f);
        fVar157 = fStack_280 * 0.0;
        fVar123 = (fStack_27c * fVar42 + fVar53 + (float)local_288._4_4_ * fVar49) -
                  fStack_280 * fVar43;
        fVar96 = (fStack_27c * fVar43 - (float)local_288._0_4_ * fVar49) + fVar201 +
                 fStack_280 * fVar42;
        fVar139 = fStack_27c * 0.0;
        fVar51 = (((float)local_288._0_4_ * fVar43 + fStack_27c * fVar49) -
                 (float)local_288._4_4_ * fVar42) + fVar157;
        fVar42 = ((fVar139 - (float)local_288._0_4_ * fVar42) - fVar43 * (float)local_288._4_4_) -
                 fVar49 * fStack_280;
        local_4f8 = CONCAT44(fVar51 * fVar167 +
                             fVar96 * fVar156 + (fVar42 * fVar188 - fVar123 * fVar189) +
                             local_298._4_4_,
                             ((fVar96 * fVar189 + fVar123 * fVar156 + fVar42 * fVar167) -
                             fVar51 * fVar188) + (float)local_298);
        uStack_4f0._0_4_ =
             fVar51 * fVar156 + ((fVar123 * fVar188 + fVar42 * fVar189) - fVar96 * fVar167) +
             (float)uStack_290;
        uStack_4f0._4_4_ =
             (((fVar42 * fVar156 - fVar123 * fVar167) - fVar96 * fVar188) - fVar51 * fVar189) +
             uStack_290._4_4_;
        if (*(char *)((long)puVar38 + 0x24) == '\0') {
          fVar51 = *(float *)((long)puVar38 + 0x14);
          fVar167 = *(float *)(puVar38 + 3);
          fVar189 = 0.0;
          fVar188 = *(float *)((long)puVar38 + 0x1c);
          fVar42 = _LC22 - (fVar188 * fVar188 + fVar167 * fVar167 + fVar51 * fVar51 + 0.0);
          if (0.0 <= fVar42) {
            fVar189 = SQRT(fVar42);
          }
          fVar139 = fStack_27c * fVar51;
          fVar157 = fVar167 * fStack_280;
          auVar45._0_4_ = fVar188 * (float)local_288._4_4_;
          auVar45._4_4_ = fVar189 * (float)local_288._4_4_;
          auVar45._8_4_ = (float)*(undefined8 *)((long)puVar38 + 0x14) * (float)local_288._4_4_;
          auVar45._12_4_ = fVar167 * (float)local_288._4_4_;
          fVar53 = fVar188 * (float)local_288._0_4_;
          fVar42 = fVar189 * (float)local_288._0_4_;
          fVar43 = fVar167 * (float)local_288._0_4_;
          fVar49 = fVar51 * (float)local_288._0_4_;
          fVar51 = fVar51 * fStack_280;
          fVar96 = fVar189 * fStack_280;
          fVar123 = fVar188 * fStack_280;
          fVar167 = fStack_27c * fVar167;
          fVar188 = fStack_27c * fVar188;
          fVar189 = fStack_27c * fVar189;
        }
        else {
          auVar45._12_4_ = fVar201;
          auVar45._8_4_ = fVar201;
          auVar45._4_4_ = (float)local_288._4_4_;
          auVar45._0_4_ = fVar201;
          fVar42 = (float)local_288._0_4_;
          fVar43 = fVar53;
          fVar49 = fVar53;
          fVar51 = fVar157;
          fVar96 = fStack_280;
          fVar123 = fVar157;
          fVar167 = fVar139;
          fVar188 = fVar139;
          fVar189 = fStack_27c;
        }
        plVar1 = (long *)*puVar38;
        pcVar2 = *(code **)(*plVar1 + 0xb8);
        auVar104 = CompoundShape::SubShape::TransformScale(local_278,local_270);
        (*pcVar2)(local_4f8,uStack_4f0,
                  CONCAT44(fVar51 + auVar45._4_4_ + (fVar167 - fVar53),
                           (auVar45._0_4_ + fVar42 + fVar139) - fVar157),
                  CONCAT44(((fVar189 - fVar49) - auVar45._12_4_) - fVar123,
                           fVar96 + ((fVar43 + fVar188) - auVar45._8_4_)),auVar104._0_8_,
                  auVar104._8_8_,plVar1,&local_308,&uStack_3b0,local_260,plStack_250);
      }
      else {
        lVar37 = 0;
        pauVar32 = (undefined1 (*) [16])(uVar31 * 0x40 + *(long *)(param_1 + 0x80));
        auVar104._4_4_ = _UNK_0010a0b4;
        auVar104._0_4_ = __LC16;
        auVar104._8_4_ = _UNK_0010a0b8;
        auVar104._12_4_ = _UNK_0010a0bc;
        auVar45 = *pauVar32;
        auVar8._10_2_ = 0;
        auVar8._0_10_ = auVar45._0_10_;
        auVar8._12_2_ = auVar45._6_2_;
        auVar14._8_2_ = auVar45._4_2_;
        auVar14._0_8_ = auVar45._0_8_;
        auVar14._10_4_ = auVar8._10_4_;
        auVar20._6_8_ = 0;
        auVar20._0_6_ = auVar14._8_6_;
        auVar76._6_8_ = SUB148(auVar20 << 0x40,6);
        auVar76._4_2_ = auVar45._2_2_;
        auVar76._0_2_ = auVar45._0_2_;
        auVar76._2_2_ = 0;
        auVar76._14_2_ = 0;
        auVar104 = auVar104 & auVar76;
        auVar45 = __LC13 & auVar76;
        iVar44 = auVar45._0_4_ * 0x2000;
        iVar50 = auVar45._4_4_ * 0x2000;
        iVar52 = auVar45._8_4_ * 0x2000;
        iVar54 = auVar45._12_4_ * 0x2000;
        uVar124 = __LC14 + iVar44;
        uVar130 = _UNK_0010a0a4 + iVar50;
        uVar133 = _UNK_0010a0a8 + iVar52;
        uVar136 = _UNK_0010a0ac + iVar54;
        uVar55 = (int)-(uint)(auVar104._0_4_ == __LC16) >> 0x1f;
        uVar65 = (int)-(uint)(auVar104._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar67 = (int)-(uint)(auVar104._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar69 = (int)-(uint)(auVar104._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar99 = (int)-(uint)(auVar104._0_4_ == 0) >> 0x1f;
        uVar108 = (int)-(uint)(auVar104._4_4_ == 0) >> 0x1f;
        uVar113 = (int)-(uint)(auVar104._8_4_ == 0) >> 0x1f;
        uVar118 = (int)-(uint)(auVar104._12_4_ == 0) >> 0x1f;
        auVar45 = *pauVar32;
        uVar72 = auVar45._8_4_;
        auVar57._0_8_ = auVar45._8_8_;
        auVar57._8_4_ = uVar72;
        auVar143._4_4_ = _UNK_0010a0b4;
        auVar143._0_4_ = __LC16;
        auVar143._8_4_ = _UNK_0010a0b8;
        auVar143._12_4_ = _UNK_0010a0bc;
        auVar3._10_2_ = 0;
        auVar3._0_10_ = auVar57._0_10_;
        auVar3._12_2_ = auVar45._14_2_;
        auVar9._8_2_ = auVar45._12_2_;
        auVar9._0_8_ = auVar57._0_8_;
        auVar9._10_4_ = auVar3._10_4_;
        auVar21._6_8_ = 0;
        auVar21._0_6_ = auVar9._8_6_;
        auVar15._4_2_ = auVar45._10_2_;
        auVar15._0_4_ = uVar72;
        auVar15._6_8_ = SUB148(auVar21 << 0x40,6);
        auVar59._0_4_ = uVar72 & 0xffff;
        auVar59._4_10_ = auVar15._4_10_;
        auVar59._14_2_ = 0;
        auVar143 = auVar143 & auVar59;
        auVar76 = auVar76 & __LC21;
        auVar45 = __LC13 & auVar59;
        auVar59 = auVar59 & __LC21;
        iVar71 = auVar45._0_4_ * 0x2000;
        iVar81 = auVar45._4_4_ * 0x2000;
        iVar86 = auVar45._8_4_ * 0x2000;
        iVar91 = auVar45._12_4_ * 0x2000;
        uVar100 = (int)-(uint)(auVar143._0_4_ == __LC16) >> 0x1f;
        uVar109 = (int)-(uint)(auVar143._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar114 = (int)-(uint)(auVar143._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar119 = (int)-(uint)(auVar143._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar125 = __LC14 + iVar71;
        uVar131 = _UNK_0010a0a4 + iVar81;
        uVar134 = _UNK_0010a0a8 + iVar86;
        uVar137 = _UNK_0010a0ac + iVar91;
        uVar140 = (int)-(uint)(auVar143._0_4_ == 0) >> 0x1f;
        uVar147 = (int)-(uint)(auVar143._4_4_ == 0) >> 0x1f;
        uVar150 = (int)-(uint)(auVar143._8_4_ == 0) >> 0x1f;
        uVar153 = (int)-(uint)(auVar143._12_4_ == 0) >> 0x1f;
        auVar105._4_4_ = _UNK_0010a0b4;
        auVar105._0_4_ = __LC16;
        auVar105._8_4_ = _UNK_0010a0b8;
        auVar105._12_4_ = _UNK_0010a0bc;
        auVar45 = pauVar32[1];
        auVar4._10_2_ = 0;
        auVar4._0_10_ = auVar45._0_10_;
        auVar4._12_2_ = auVar45._6_2_;
        auVar10._8_2_ = auVar45._4_2_;
        auVar10._0_8_ = auVar45._0_8_;
        auVar10._10_4_ = auVar4._10_4_;
        auVar22._6_8_ = 0;
        auVar22._0_6_ = auVar10._8_6_;
        auVar127._6_8_ = SUB148(auVar22 << 0x40,6);
        auVar127._4_2_ = auVar45._2_2_;
        auVar127._0_2_ = auVar45._0_2_;
        auVar127._2_2_ = 0;
        auVar127._14_2_ = 0;
        auVar105 = auVar105 & auVar127;
        auVar45 = __LC13 & auVar127;
        auVar127 = auVar127 & __LC21;
        iVar56 = auVar45._0_4_ * 0x2000;
        iVar66 = auVar45._4_4_ * 0x2000;
        iVar68 = auVar45._8_4_ * 0x2000;
        iVar70 = auVar45._12_4_ * 0x2000;
        uVar141 = __LC14 + iVar56;
        uVar148 = _UNK_0010a0a4 + iVar66;
        uVar151 = _UNK_0010a0a8 + iVar68;
        uVar154 = _UNK_0010a0ac + iVar70;
        uVar101 = (int)-(uint)(auVar105._0_4_ == 0) >> 0x1f;
        uVar110 = (int)-(uint)(auVar105._4_4_ == 0) >> 0x1f;
        uVar115 = (int)-(uint)(auVar105._8_4_ == 0) >> 0x1f;
        uVar120 = (int)-(uint)(auVar105._12_4_ == 0) >> 0x1f;
        uVar72 = (int)-(uint)(auVar105._0_4_ == __LC16) >> 0x1f;
        uVar82 = (int)-(uint)(auVar105._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar87 = (int)-(uint)(auVar105._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar92 = (int)-(uint)(auVar105._12_4_ == _UNK_0010a0bc) >> 0x1f;
        auVar45 = pauVar32[1];
        auVar128._4_4_ = _UNK_0010a0b4;
        auVar128._0_4_ = __LC16;
        auVar128._8_4_ = _UNK_0010a0b8;
        auVar128._12_4_ = _UNK_0010a0bc;
        uVar102 = auVar45._8_4_;
        auVar58._0_8_ = auVar45._8_8_;
        auVar58._8_4_ = uVar102;
        auVar5._10_2_ = 0;
        auVar5._0_10_ = auVar58._0_10_;
        auVar5._12_2_ = auVar45._14_2_;
        auVar11._8_2_ = auVar45._12_2_;
        auVar11._0_8_ = auVar58._0_8_;
        auVar11._10_4_ = auVar5._10_4_;
        auVar23._6_8_ = 0;
        auVar23._0_6_ = auVar11._8_6_;
        auVar16._4_2_ = auVar45._10_2_;
        auVar16._0_4_ = uVar102;
        auVar16._6_8_ = SUB148(auVar23 << 0x40,6);
        auVar60._0_4_ = uVar102 & 0xffff;
        auVar60._4_10_ = auVar16._4_10_;
        auVar60._14_2_ = 0;
        auVar128 = auVar128 & auVar60;
        auVar45 = __LC13 & auVar60;
        auVar60 = auVar60 & __LC21;
        iVar73 = auVar45._0_4_ * 0x2000;
        iVar83 = auVar45._4_4_ * 0x2000;
        iVar88 = auVar45._8_4_ * 0x2000;
        iVar93 = auVar45._12_4_ * 0x2000;
        uVar142 = __LC14 + iVar73;
        uVar149 = _UNK_0010a0a4 + iVar83;
        uVar152 = _UNK_0010a0a8 + iVar88;
        uVar155 = _UNK_0010a0ac + iVar93;
        uVar102 = (int)-(uint)(auVar128._0_4_ == __LC16) >> 0x1f;
        uVar111 = (int)-(uint)(auVar128._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar116 = (int)-(uint)(auVar128._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar121 = (int)-(uint)(auVar128._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar126 = (int)-(uint)(auVar128._0_4_ == 0) >> 0x1f;
        uVar132 = (int)-(uint)(auVar128._4_4_ == 0) >> 0x1f;
        uVar135 = (int)-(uint)(auVar128._8_4_ == 0) >> 0x1f;
        uVar138 = (int)-(uint)(auVar128._12_4_ == 0) >> 0x1f;
        auVar45 = pauVar32[2];
        auVar106._4_4_ = _UNK_0010a0b4;
        auVar106._0_4_ = __LC16;
        auVar106._8_4_ = _UNK_0010a0b8;
        auVar106._12_4_ = _UNK_0010a0bc;
        auVar104 = pauVar32[2];
        auVar6._10_2_ = 0;
        auVar6._0_10_ = auVar45._0_10_;
        auVar6._12_2_ = auVar45._6_2_;
        auVar12._8_2_ = auVar45._4_2_;
        auVar12._0_8_ = auVar45._0_8_;
        auVar12._10_4_ = auVar6._10_4_;
        auVar24._6_8_ = 0;
        auVar24._0_6_ = auVar12._8_6_;
        auVar17._4_2_ = auVar45._2_2_;
        auVar17._0_4_ = auVar45._0_4_;
        auVar17._6_8_ = SUB148(auVar24 << 0x40,6);
        auVar144._0_4_ = auVar45._0_4_ & 0xffff;
        auVar144._4_10_ = auVar17._4_10_;
        auVar144._14_2_ = 0;
        auVar106 = auVar106 & auVar144;
        auVar45 = __LC13 & auVar144;
        auVar144 = auVar144 & __LC21;
        iVar74 = auVar45._0_4_ * 0x2000;
        iVar84 = auVar45._4_4_ * 0x2000;
        iVar89 = auVar45._8_4_ * 0x2000;
        iVar94 = auVar45._12_4_ * 0x2000;
        uVar169 = __LC14 + iVar74;
        uVar177 = _UNK_0010a0a4 + iVar84;
        uVar179 = _UNK_0010a0a8 + iVar89;
        uVar181 = _UNK_0010a0ac + iVar94;
        uVar103 = (int)-(uint)(auVar106._0_4_ == 0) >> 0x1f;
        uVar112 = (int)-(uint)(auVar106._4_4_ == 0) >> 0x1f;
        uVar117 = (int)-(uint)(auVar106._8_4_ == 0) >> 0x1f;
        uVar122 = (int)-(uint)(auVar106._12_4_ == 0) >> 0x1f;
        uVar158 = (int)-(uint)(auVar106._0_4_ == __LC16) >> 0x1f;
        uVar164 = (int)-(uint)(auVar106._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar165 = (int)-(uint)(auVar106._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar166 = (int)-(uint)(auVar106._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar170 = auVar104._8_4_;
        auVar159._0_8_ = auVar104._8_8_;
        auVar159._8_4_ = uVar170;
        auVar7._10_2_ = 0;
        auVar7._0_10_ = auVar159._0_10_;
        auVar7._12_2_ = auVar104._14_2_;
        auVar13._8_2_ = auVar104._12_2_;
        auVar13._0_8_ = auVar159._0_8_;
        auVar13._10_4_ = auVar7._10_4_;
        auVar25._6_8_ = 0;
        auVar25._0_6_ = auVar13._8_6_;
        auVar18._4_2_ = auVar104._10_2_;
        auVar18._0_4_ = uVar170;
        auVar18._6_8_ = SUB148(auVar25 << 0x40,6);
        auVar160._0_4_ = uVar170 & 0xffff;
        auVar160._4_10_ = auVar18._4_10_;
        auVar160._14_2_ = 0;
        auVar171._4_4_ = _UNK_0010a0b4;
        auVar171._0_4_ = __LC16;
        auVar171._8_4_ = _UNK_0010a0b8;
        auVar171._12_4_ = _UNK_0010a0bc;
        auVar104 = __LC13 & auVar160;
        auVar45 = __LC21 & auVar160;
        auVar171 = auVar171 & auVar160;
        iVar75 = auVar104._0_4_ * 0x2000;
        iVar85 = auVar104._4_4_ * 0x2000;
        iVar90 = auVar104._8_4_ * 0x2000;
        iVar95 = auVar104._12_4_ * 0x2000;
        uVar200 = __LC14 + iVar75;
        uVar203 = _UNK_0010a0a4 + iVar85;
        uVar204 = _UNK_0010a0a8 + iVar90;
        uVar205 = _UNK_0010a0ac + iVar95;
        uVar170 = (int)-(uint)(auVar171._0_4_ == 0) >> 0x1f;
        uVar178 = (int)-(uint)(auVar171._4_4_ == 0) >> 0x1f;
        uVar180 = (int)-(uint)(auVar171._8_4_ == 0) >> 0x1f;
        uVar182 = (int)-(uint)(auVar171._12_4_ == 0) >> 0x1f;
        auVar145._0_4_ =
             (float)(auVar144._0_4_ << 0x10 |
                    (uint)((float)(iVar74 + __LC18) + _LC20) & uVar103 |
                    ~uVar103 & (uVar158 & (uVar169 | __LC17) | ~uVar158 & uVar169)) *
             local_278._4_4_;
        auVar145._4_4_ =
             (float)(auVar144._4_4_ << 0x10 |
                    (uint)((float)(iVar84 + _UNK_0010a0d4) + _LC20) & uVar112 |
                    ~uVar112 & (uVar164 & (uVar177 | _UNK_0010a0c4) | ~uVar164 & uVar177)) *
             local_278._4_4_;
        auVar145._8_4_ =
             (float)(auVar144._8_4_ << 0x10 |
                    (uint)((float)(iVar89 + _UNK_0010a0d8) + _LC20) & uVar117 |
                    ~uVar117 & (uVar165 & (uVar179 | _UNK_0010a0c8) | ~uVar165 & uVar179)) *
             local_278._4_4_;
        auVar145._12_4_ =
             (float)(auVar144._12_4_ << 0x10 |
                    (uint)((float)(iVar94 + _UNK_0010a0dc) + _LC20) & uVar122 |
                    ~uVar122 & (uVar166 & (uVar181 | _UNK_0010a0cc) | ~uVar166 & uVar181)) *
             local_278._4_4_;
        uVar103 = (int)-(uint)(auVar171._0_4_ == __LC16) >> 0x1f;
        uVar112 = (int)-(uint)(auVar171._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar117 = (int)-(uint)(auVar171._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar122 = (int)-(uint)(auVar171._12_4_ == _UNK_0010a0bc) >> 0x1f;
        auVar161._0_8_ =
             CONCAT44((float)(auVar76._4_4_ << 0x10 |
                             (uint)((float)(iVar50 + _UNK_0010a0d4) + _LC20) & uVar108 |
                             ~uVar108 & (uVar65 & (uVar130 | _UNK_0010a0c4) | ~uVar65 & uVar130)) *
                      (float)local_278,
                      (float)(auVar76._0_4_ << 0x10 |
                             (uint)((float)(iVar44 + __LC18) + _LC20) & uVar99 |
                             ~uVar99 & (uVar55 & (uVar124 | __LC17) | ~uVar55 & uVar124)) *
                      (float)local_278);
        auVar161._8_4_ =
             (float)(auVar76._8_4_ << 0x10 |
                    (uint)((float)(iVar52 + _UNK_0010a0d8) + _LC20) & uVar113 |
                    ~uVar113 & (uVar67 & (uVar133 | _UNK_0010a0c8) | ~uVar67 & uVar133)) *
             (float)local_278;
        auVar161._12_4_ =
             (float)(auVar76._12_4_ << 0x10 |
                    (uint)((float)(iVar54 + _UNK_0010a0dc) + _LC20) & uVar118 |
                    ~uVar118 & (uVar69 & (uVar136 | _UNK_0010a0cc) | ~uVar69 & uVar136)) *
             (float)local_278;
        auVar61._0_4_ =
             (float)(auVar60._0_4_ << 0x10 |
                    (uint)((float)(iVar73 + __LC18) + _LC20) & uVar126 |
                    ~uVar126 & (uVar102 & (uVar142 | __LC17) | ~uVar102 & uVar142)) *
             (float)local_278;
        auVar61._4_4_ =
             (float)(auVar60._4_4_ << 0x10 |
                    (uint)((float)(iVar83 + _UNK_0010a0d4) + _LC20) & uVar132 |
                    ~uVar132 & (uVar111 & (uVar149 | _UNK_0010a0c4) | ~uVar111 & uVar149)) *
             (float)local_278;
        auVar61._8_4_ =
             (float)(auVar60._8_4_ << 0x10 |
                    (uint)((float)(iVar88 + _UNK_0010a0d8) + _LC20) & uVar135 |
                    ~uVar135 & (uVar116 & (uVar152 | _UNK_0010a0c8) | ~uVar116 & uVar152)) *
             (float)local_278;
        auVar61._12_4_ =
             (float)(auVar60._12_4_ << 0x10 |
                    (uint)((float)(iVar93 + _UNK_0010a0dc) + _LC20) & uVar138 |
                    ~uVar138 & (uVar121 & (uVar155 | _UNK_0010a0cc) | ~uVar121 & uVar155)) *
             (float)local_278;
        auVar77._0_8_ =
             CONCAT44((float)(auVar59._4_4_ << 0x10 |
                             (uint)((float)(iVar81 + _UNK_0010a0d4) + _LC20) & uVar147 |
                             ~uVar147 & (uVar109 & (uVar131 | _UNK_0010a0c4) | ~uVar109 & uVar131))
                      * local_278._4_4_,
                      (float)(auVar59._0_4_ << 0x10 |
                             (uint)((float)(iVar71 + __LC18) + _LC20) & uVar140 |
                             ~uVar140 & (uVar100 & (uVar125 | __LC17) | ~uVar100 & uVar125)) *
                      local_278._4_4_);
        auVar77._8_4_ =
             (float)(auVar59._8_4_ << 0x10 |
                    (uint)((float)(iVar86 + _UNK_0010a0d8) + _LC20) & uVar150 |
                    ~uVar150 & (uVar114 & (uVar134 | _UNK_0010a0c8) | ~uVar114 & uVar134)) *
             local_278._4_4_;
        auVar77._12_4_ =
             (float)(auVar59._12_4_ << 0x10 |
                    (uint)((float)(iVar91 + _UNK_0010a0dc) + _LC20) & uVar153 |
                    ~uVar153 & (uVar119 & (uVar137 | _UNK_0010a0cc) | ~uVar119 & uVar137)) *
             local_278._4_4_;
        auVar172._8_4_ = auVar161._8_4_;
        auVar172._0_8_ = auVar161._0_8_;
        auVar172._12_4_ = auVar161._12_4_;
        auVar106 = minps(auVar172,auVar61);
        auVar105 = maxps(auVar161,auVar61);
        auVar62._0_8_ =
             CONCAT44((float)(auVar127._4_4_ << 0x10 |
                             (uint)((float)(iVar66 + _UNK_0010a0d4) + _LC20) & uVar110 |
                             ~uVar110 & (uVar82 & (uVar148 | _UNK_0010a0c4) | ~uVar82 & uVar148)) *
                      (float)local_270,
                      (float)(auVar127._0_4_ << 0x10 |
                             (uint)((float)(iVar56 + __LC18) + _LC20) & uVar101 |
                             ~uVar101 & (uVar72 & (uVar141 | __LC17) | ~uVar72 & uVar141)) *
                      (float)local_270);
        auVar62._8_4_ =
             (float)(auVar127._8_4_ << 0x10 |
                    (uint)((float)(iVar68 + _UNK_0010a0d8) + _LC20) & uVar115 |
                    ~uVar115 & (uVar87 & (uVar151 | _UNK_0010a0c8) | ~uVar87 & uVar151)) *
             (float)local_270;
        auVar62._12_4_ =
             (float)(auVar127._12_4_ << 0x10 |
                    (uint)((float)(iVar70 + _UNK_0010a0dc) + _LC20) & uVar120 |
                    ~uVar120 & (uVar92 & (uVar154 | _UNK_0010a0cc) | ~uVar92 & uVar154)) *
             (float)local_270;
        auVar190._8_4_ = auVar77._8_4_;
        auVar190._0_8_ = auVar77._0_8_;
        auVar190._12_4_ = auVar77._12_4_;
        auVar104 = maxps(auVar77,auVar145);
        auVar59 = minps(auVar190,auVar145);
        auVar97._0_4_ =
             (float)local_270 *
             (float)(auVar45._0_4_ << 0x10 |
                    (uint)((float)(iVar75 + __LC18) + _LC20) & uVar170 |
                    ~uVar170 & (uVar103 & (uVar200 | __LC17) | ~uVar103 & uVar200));
        auVar97._4_4_ =
             (float)local_270 *
             (float)(auVar45._4_4_ << 0x10 |
                    (uint)((float)(iVar85 + _UNK_0010a0d4) + _LC20) & uVar178 |
                    ~uVar178 & (uVar112 & (uVar203 | _UNK_0010a0c4) | ~uVar112 & uVar203));
        auVar97._8_4_ =
             (float)local_270 *
             (float)(auVar45._8_4_ << 0x10 |
                    (uint)((float)(iVar90 + _UNK_0010a0d8) + _LC20) & uVar180 |
                    ~uVar180 & (uVar117 & (uVar204 | _UNK_0010a0c8) | ~uVar117 & uVar204));
        auVar97._12_4_ =
             (float)local_270 *
             (float)(auVar45._12_4_ << 0x10 |
                    (uint)((float)(iVar95 + _UNK_0010a0dc) + _LC20) & uVar182 |
                    ~uVar182 & (uVar122 & (uVar205 | _UNK_0010a0cc) | ~uVar122 & uVar205));
        uStack_3a8 = CONCAT44(fStack_2a4,local_2a8);
        uStack_3a0 = CONCAT44(fStack_29c,fStack_2a0);
        auVar168._8_4_ = auVar62._8_4_;
        auVar168._0_8_ = auVar62._0_8_;
        auVar168._12_4_ = auVar62._12_4_;
        auVar128 = minps(auVar168,auVar97);
        auVar45 = maxps(auVar62,auVar97);
        afStack_398[0] = (float)local_2b8 - (auVar106._0_4_ + auVar105._0_4_) * _LC5;
        afStack_398[1] = (float)local_2b8 - (auVar106._4_4_ + auVar105._4_4_) * _UNK_0010a074;
        afStack_398[2] = (float)local_2b8 - (auVar106._8_4_ + auVar105._8_4_) * _UNK_0010a078;
        afStack_398[3] = (float)local_2b8 - (auVar106._12_4_ + auVar105._12_4_) * _UNK_0010a07c;
        afStack_398[4] = local_2b8._4_4_ - (auVar59._0_4_ + auVar104._0_4_) * _LC5;
        afStack_398[5] = local_2b8._4_4_ - (auVar59._4_4_ + auVar104._4_4_) * _UNK_0010a074;
        afStack_398[6] = local_2b8._4_4_ - (auVar59._8_4_ + auVar104._8_4_) * _UNK_0010a078;
        afStack_398[7] = local_2b8._4_4_ - (auVar59._12_4_ + auVar104._12_4_) * _UNK_0010a07c;
        uVar69 = 0xffffffff;
        uVar55 = 0xffffffff;
        uVar65 = 0xffffffff;
        uVar67 = 0xffffffff;
        auVar129._0_4_ = 0.0 - (float)local_2e8;
        auVar129._4_4_ = 0.0 - afStack_2e4[0];
        auVar129._8_4_ = 0.0 - afStack_2e4[1];
        auVar129._12_4_ = 0.0 - afStack_2e4[2];
        auVar143 = maxps(auVar129,_local_2e8);
        afStack_398[8] = local_2b0 - (auVar128._0_4_ + auVar45._0_4_) * _LC5;
        afStack_398[9] = local_2b0 - (auVar128._4_4_ + auVar45._4_4_) * _UNK_0010a074;
        afStack_398[10] = local_2b0 - (auVar128._8_4_ + auVar45._8_4_) * _UNK_0010a078;
        afStack_398[0xb] = local_2b0 - (auVar128._12_4_ + auVar45._12_4_) * _UNK_0010a07c;
        afStack_398[0xc] = auVar143._0_4_ + _LC29;
        afStack_398[0xd] = auVar143._4_4_ + _LC29;
        afStack_398[0xe] = auVar143._8_4_ + _LC29;
        afStack_398[0xf] = auVar143._12_4_ + _LC29;
        auVar183._0_4_ = 0.0 - (float)local_2d8._0_4_;
        auVar183._4_4_ = 0.0 - (float)local_2d8._4_4_;
        auVar183._8_4_ = 0.0 - fStack_2d0;
        auVar183._12_4_ = 0.0 - fStack_2cc;
        auVar107._0_4_ = 0.0 - (float)local_2c8._0_4_;
        auVar107._4_4_ = 0.0 - (float)local_2c8._4_4_;
        auVar107._8_4_ = 0.0 - fStack_2c0;
        auVar107._12_4_ = 0.0 - fStack_2bc;
        auVar171 = maxps(auVar183,_local_2d8);
        auVar143 = maxps(auVar107,_local_2c8);
        afStack_398[0x1c] = (auVar104._0_4_ - auVar59._0_4_) * _LC5;
        afStack_398[0x1d] = (auVar104._4_4_ - auVar59._4_4_) * _UNK_0010a074;
        afStack_398[0x1e] = (auVar104._8_4_ - auVar59._8_4_) * _UNK_0010a078;
        afStack_398[0x1f] = (auVar104._12_4_ - auVar59._12_4_) * _UNK_0010a07c;
        afStack_398[0x20] = (auVar45._0_4_ - auVar128._0_4_) * _LC5;
        afStack_398[0x21] = (auVar45._4_4_ - auVar128._4_4_) * _UNK_0010a074;
        afStack_398[0x22] = (auVar45._8_4_ - auVar128._8_4_) * _UNK_0010a078;
        afStack_398[0x23] = (auVar45._12_4_ - auVar128._12_4_) * _UNK_0010a07c;
        afStack_398[0x10] = auVar171._0_4_ + _LC29;
        afStack_398[0x11] = auVar171._4_4_ + _LC29;
        afStack_398[0x12] = auVar171._8_4_ + _LC29;
        afStack_398[0x14] = auVar143._0_4_ + _LC29;
        afStack_398[0x15] = auVar143._4_4_ + _LC29;
        afStack_398[0x16] = auVar143._8_4_ + _LC29;
        afStack_398[0x18] = _LC5 * (auVar105._0_4_ - auVar106._0_4_);
        afStack_398[0x19] = _UNK_0010a074 * (auVar105._4_4_ - auVar106._4_4_);
        afStack_398[0x1a] = _UNK_0010a078 * (auVar105._8_4_ - auVar106._8_4_);
        afStack_398[0x1b] = _UNK_0010a07c * (auVar105._12_4_ - auVar106._12_4_);
        afStack_398[0x13] = auVar171._12_4_ + _LC29;
        afStack_398[0x17] = auVar143._12_4_ + _LC29;
        pfVar33 = afStack_398 + 0xc;
        do {
          fVar42 = pfVar33[4];
          fVar43 = *pfVar33;
          auVar173._0_4_ = 0.0 - *(float *)((long)afStack_398 + lVar37);
          auVar173._4_4_ = 0.0 - *(float *)((long)afStack_398 + lVar37 + 4);
          auVar173._8_4_ = 0.0 - *(float *)((long)afStack_398 + lVar37 + 8);
          auVar173._12_4_ = 0.0 - *(float *)((long)afStack_398 + lVar37 + 0xc);
          auVar45 = maxps(auVar173,*(undefined1 (*) [16])((long)afStack_398 + lVar37));
          fVar49 = pfVar33[8];
          lVar26 = lVar37 + 0x60;
          lVar27 = lVar37 + 100;
          lVar28 = lVar37 + 0x68;
          lVar29 = lVar37 + 0x6c;
          lVar37 = lVar37 + 0x10;
          uVar55 = uVar55 & -(uint)(auVar45._0_4_ <=
                                   fVar42 * fStack_2a4 + fVar43 * local_2a8 + fVar49 * fStack_2a0 +
                                   *(float *)((long)afStack_398 + lVar26));
          uVar65 = uVar65 & -(uint)(auVar45._4_4_ <=
                                   fVar42 * fStack_2a4 + fVar43 * local_2a8 + fVar49 * fStack_2a0 +
                                   *(float *)((long)afStack_398 + lVar27));
          uVar67 = uVar67 & -(uint)(auVar45._8_4_ <=
                                   fVar42 * fStack_2a4 + fVar43 * local_2a8 + fVar49 * fStack_2a0 +
                                   *(float *)((long)afStack_398 + lVar28));
          uVar69 = uVar69 & -(uint)(auVar45._12_4_ <=
                                   fVar42 * fStack_2a4 + fVar43 * local_2a8 + fVar49 * fStack_2a0 +
                                   *(float *)((long)afStack_398 + lVar29));
          pfVar33 = pfVar33 + 1;
        } while (lVar37 != 0x30);
        pfVar33 = afStack_398 + 0xc;
        pfVar36 = (float *)&uStack_3a8;
        puVar38 = &local_308;
        do {
          fVar42 = *(float *)((long)puVar38 + 0x24);
          pfVar34 = pfVar33 + 4;
          fVar43 = *(float *)(puVar38 + 4);
          fVar49 = *pfVar33;
          fVar51 = *(float *)(puVar38 + 5);
          auVar174._0_4_ =
               fVar42 * afStack_398[4] + fVar43 * afStack_398[0] + fVar51 * afStack_398[8];
          auVar174._4_4_ =
               fVar42 * afStack_398[5] + fVar43 * afStack_398[1] + fVar51 * afStack_398[9];
          auVar174._8_4_ =
               fVar42 * afStack_398[6] + fVar43 * afStack_398[2] + fVar51 * afStack_398[10];
          auVar174._12_4_ =
               fVar42 * afStack_398[7] + fVar43 * afStack_398[3] + fVar51 * afStack_398[0xb];
          auVar191._0_4_ = 0.0 - auVar174._0_4_;
          auVar191._4_4_ = 0.0 - auVar174._4_4_;
          auVar191._8_4_ = 0.0 - auVar174._8_4_;
          auVar191._12_4_ = 0.0 - auVar174._12_4_;
          auVar45 = maxps(auVar191,auVar174);
          fVar42 = pfVar33[1];
          fVar43 = pfVar33[2];
          fVar51 = *pfVar36;
          uVar55 = uVar55 & -(uint)(auVar45._0_4_ <=
                                   fVar42 * afStack_398[0x1c] + fVar49 * afStack_398[0x18] +
                                   fVar43 * afStack_398[0x20] + fVar51);
          uVar65 = uVar65 & -(uint)(auVar45._4_4_ <=
                                   fVar42 * afStack_398[0x1d] + fVar49 * afStack_398[0x19] +
                                   fVar43 * afStack_398[0x21] + fVar51);
          uVar67 = uVar67 & -(uint)(auVar45._8_4_ <=
                                   fVar42 * afStack_398[0x1e] + fVar49 * afStack_398[0x1a] +
                                   fVar43 * afStack_398[0x22] + fVar51);
          uVar69 = uVar69 & -(uint)(auVar45._12_4_ <=
                                   fVar42 * afStack_398[0x1f] + fVar49 * afStack_398[0x1b] +
                                   fVar43 * afStack_398[0x23] + fVar51);
          pfVar33 = pfVar34;
          pfVar36 = pfVar36 + 1;
          puVar38 = puVar38 + 2;
        } while (afStack_398 + 0x18 != pfVar34);
        auVar192._0_4_ = afStack_2e4[0] * afStack_398[8] - afStack_398[4] * afStack_2e4[1];
        auVar192._4_4_ = afStack_2e4[0] * afStack_398[9] - afStack_398[5] * afStack_2e4[1];
        auVar192._8_4_ = afStack_2e4[0] * afStack_398[10] - afStack_398[6] * afStack_2e4[1];
        auVar192._12_4_ = afStack_2e4[0] * afStack_398[0xb] - afStack_398[7] * afStack_2e4[1];
        auVar195._0_4_ = 0.0 - auVar192._0_4_;
        auVar195._4_4_ = 0.0 - auVar192._4_4_;
        auVar195._8_4_ = 0.0 - auVar192._8_4_;
        auVar195._12_4_ = 0.0 - auVar192._12_4_;
        auVar105 = maxps(auVar195,auVar192);
        auVar184._0_4_ = (float)local_2d8._4_4_ * afStack_398[8] - afStack_398[4] * fStack_2d0;
        auVar184._4_4_ = (float)local_2d8._4_4_ * afStack_398[9] - afStack_398[5] * fStack_2d0;
        auVar184._8_4_ = (float)local_2d8._4_4_ * afStack_398[10] - afStack_398[6] * fStack_2d0;
        auVar184._12_4_ = (float)local_2d8._4_4_ * afStack_398[0xb] - afStack_398[7] * fStack_2d0;
        auVar193._4_4_ = 0.0 - auVar184._4_4_;
        auVar193._0_4_ = 0.0 - auVar184._0_4_;
        auVar193._8_4_ = 0.0 - auVar184._8_4_;
        auVar193._12_4_ = 0.0 - auVar184._12_4_;
        auVar143 = maxps(auVar193,auVar184);
        auVar185._0_4_ = (float)local_2c8._4_4_ * afStack_398[8] - afStack_398[4] * fStack_2c0;
        auVar185._4_4_ = (float)local_2c8._4_4_ * afStack_398[9] - afStack_398[5] * fStack_2c0;
        auVar185._8_4_ = (float)local_2c8._4_4_ * afStack_398[10] - afStack_398[6] * fStack_2c0;
        auVar185._12_4_ = (float)local_2c8._4_4_ * afStack_398[0xb] - afStack_398[7] * fStack_2c0;
        auVar197._0_4_ = 0.0 - auVar185._0_4_;
        auVar197._4_4_ = 0.0 - auVar185._4_4_;
        auVar197._8_4_ = 0.0 - auVar185._8_4_;
        auVar197._12_4_ = 0.0 - auVar185._12_4_;
        auVar128 = maxps(auVar197,auVar185);
        auVar175._0_4_ = afStack_2e4[1] * afStack_398[0] - afStack_398[8] * (float)local_2e8;
        auVar175._4_4_ = afStack_2e4[1] * afStack_398[1] - afStack_398[9] * (float)local_2e8;
        auVar175._8_4_ = afStack_2e4[1] * afStack_398[2] - afStack_398[10] * (float)local_2e8;
        auVar175._12_4_ = afStack_2e4[1] * afStack_398[3] - afStack_398[0xb] * (float)local_2e8;
        auVar198._0_4_ = 0.0 - auVar175._0_4_;
        auVar198._4_4_ = 0.0 - auVar175._4_4_;
        auVar198._8_4_ = 0.0 - auVar175._8_4_;
        auVar198._12_4_ = 0.0 - auVar175._12_4_;
        auVar106 = maxps(auVar198,auVar175);
        auVar196._0_4_ = fStack_2d0 * afStack_398[0] - afStack_398[8] * (float)local_2d8._0_4_;
        auVar196._4_4_ = fStack_2d0 * afStack_398[1] - afStack_398[9] * (float)local_2d8._0_4_;
        auVar196._8_4_ = fStack_2d0 * afStack_398[2] - afStack_398[10] * (float)local_2d8._0_4_;
        auVar196._12_4_ = fStack_2d0 * afStack_398[3] - afStack_398[0xb] * (float)local_2d8._0_4_;
        auVar199._0_4_ = 0.0 - auVar196._0_4_;
        auVar199._4_4_ = 0.0 - auVar196._4_4_;
        auVar199._8_4_ = 0.0 - auVar196._8_4_;
        auVar199._12_4_ = 0.0 - auVar196._12_4_;
        auVar104 = maxps(auVar199,auVar196);
        auVar194._0_4_ = fStack_2c0 * afStack_398[0] - afStack_398[8] * (float)local_2c8._0_4_;
        auVar194._4_4_ = fStack_2c0 * afStack_398[1] - afStack_398[9] * (float)local_2c8._0_4_;
        auVar194._8_4_ = fStack_2c0 * afStack_398[2] - afStack_398[10] * (float)local_2c8._0_4_;
        auVar194._12_4_ = fStack_2c0 * afStack_398[3] - afStack_398[0xb] * (float)local_2c8._0_4_;
        auVar146._0_4_ = 0.0 - auVar194._0_4_;
        auVar146._4_4_ = 0.0 - auVar194._4_4_;
        auVar146._8_4_ = 0.0 - auVar194._8_4_;
        auVar146._12_4_ = 0.0 - auVar194._12_4_;
        auVar45 = maxps(auVar146,auVar194);
        auVar202._0_4_ =
             -(uint)(auVar104._0_4_ <=
                     afStack_398[0x10] * afStack_398[0x20] + afStack_398[0x12] * afStack_398[0x18] +
                     afStack_398[0xd] * fStack_2a0 + afStack_398[0x15] * local_2a8 &&
                    auVar45._0_4_ <=
                    afStack_398[0x20] * afStack_398[0x14] + afStack_398[0x16] * afStack_398[0x18] +
                    fStack_2a4 * afStack_398[0xd] + afStack_398[0x11] * local_2a8);
        auVar202._4_4_ =
             -(uint)(auVar104._4_4_ <=
                     afStack_398[0x10] * afStack_398[0x21] + afStack_398[0x12] * afStack_398[0x19] +
                     afStack_398[0xd] * fStack_2a0 + afStack_398[0x15] * local_2a8 &&
                    auVar45._4_4_ <=
                    afStack_398[0x21] * afStack_398[0x14] + afStack_398[0x16] * afStack_398[0x19] +
                    fStack_2a4 * afStack_398[0xd] + afStack_398[0x11] * local_2a8);
        auVar202._8_4_ =
             -(uint)(auVar104._8_4_ <=
                     afStack_398[0x10] * afStack_398[0x22] + afStack_398[0x12] * afStack_398[0x1a] +
                     afStack_398[0xd] * fStack_2a0 + afStack_398[0x15] * local_2a8 &&
                    auVar45._8_4_ <=
                    afStack_398[0x22] * afStack_398[0x14] + afStack_398[0x16] * afStack_398[0x1a] +
                    fStack_2a4 * afStack_398[0xd] + afStack_398[0x11] * local_2a8);
        auVar202._12_4_ =
             -(uint)(auVar104._12_4_ <=
                     afStack_398[0x10] * afStack_398[0x23] + afStack_398[0x12] * afStack_398[0x1b] +
                     afStack_398[0xd] * fStack_2a0 + afStack_398[0x15] * local_2a8 &&
                    auVar45._12_4_ <=
                    afStack_398[0x23] * afStack_398[0x14] + afStack_398[0x16] * afStack_398[0x1b] +
                    fStack_2a4 * afStack_398[0xd] + afStack_398[0x11] * local_2a8);
        auVar186._0_4_ = (float)local_2e8 * afStack_398[4] - afStack_2e4[0] * afStack_398[0];
        auVar186._4_4_ = (float)local_2e8 * afStack_398[5] - afStack_2e4[0] * afStack_398[1];
        auVar186._8_4_ = (float)local_2e8 * afStack_398[6] - afStack_2e4[0] * afStack_398[2];
        auVar186._12_4_ = (float)local_2e8 * afStack_398[7] - afStack_2e4[0] * afStack_398[3];
        auVar63._0_4_ = 0.0 - auVar186._0_4_;
        auVar63._4_4_ = 0.0 - auVar186._4_4_;
        auVar63._8_4_ = 0.0 - auVar186._8_4_;
        auVar63._12_4_ = 0.0 - auVar186._12_4_;
        auVar45 = maxps(auVar63,auVar186);
        auVar176._0_4_ =
             (float)local_2d8._0_4_ * afStack_398[4] - (float)local_2d8._4_4_ * afStack_398[0];
        auVar176._4_4_ =
             (float)local_2d8._0_4_ * afStack_398[5] - (float)local_2d8._4_4_ * afStack_398[1];
        auVar176._8_4_ =
             (float)local_2d8._0_4_ * afStack_398[6] - (float)local_2d8._4_4_ * afStack_398[2];
        auVar176._12_4_ =
             (float)local_2d8._0_4_ * afStack_398[7] - (float)local_2d8._4_4_ * afStack_398[3];
        auVar64._0_4_ = 0.0 - auVar176._0_4_;
        auVar64._4_4_ = 0.0 - auVar176._4_4_;
        auVar64._8_4_ = 0.0 - auVar176._8_4_;
        auVar64._12_4_ = 0.0 - auVar176._12_4_;
        auVar104 = maxps(auVar64,auVar176);
        auVar187._0_4_ =
             -(uint)(auVar45._0_4_ <=
                     afStack_398[0xc] * afStack_398[0x1c] + afStack_398[0xd] * afStack_398[0x18] +
                     afStack_398[0x12] * fStack_2a0 + afStack_398[0x16] * fStack_2a4 &&
                    auVar104._0_4_ <=
                    fStack_2a0 * afStack_398[0xe] + afStack_398[0x16] * local_2a8 +
                    afStack_398[0x11] * afStack_398[0x18] + afStack_398[0x10] * afStack_398[0x1c]);
        auVar187._4_4_ =
             -(uint)(auVar45._4_4_ <=
                     afStack_398[0xc] * afStack_398[0x1d] + afStack_398[0xd] * afStack_398[0x19] +
                     afStack_398[0x12] * fStack_2a0 + afStack_398[0x16] * fStack_2a4 &&
                    auVar104._4_4_ <=
                    fStack_2a0 * afStack_398[0xe] + afStack_398[0x16] * local_2a8 +
                    afStack_398[0x11] * afStack_398[0x19] + afStack_398[0x10] * afStack_398[0x1d]);
        auVar187._8_4_ =
             -(uint)(auVar45._8_4_ <=
                     afStack_398[0xc] * afStack_398[0x1e] + afStack_398[0xd] * afStack_398[0x1a] +
                     afStack_398[0x12] * fStack_2a0 + afStack_398[0x16] * fStack_2a4 &&
                    auVar104._8_4_ <=
                    fStack_2a0 * afStack_398[0xe] + afStack_398[0x16] * local_2a8 +
                    afStack_398[0x11] * afStack_398[0x1a] + afStack_398[0x10] * afStack_398[0x1e]);
        auVar187._12_4_ =
             -(uint)(auVar45._12_4_ <=
                     afStack_398[0xc] * afStack_398[0x1f] + afStack_398[0xd] * afStack_398[0x1b] +
                     afStack_398[0x12] * fStack_2a0 + afStack_398[0x16] * fStack_2a4 &&
                    auVar104._12_4_ <=
                    fStack_2a0 * afStack_398[0xe] + afStack_398[0x16] * local_2a8 +
                    afStack_398[0x11] * afStack_398[0x1b] + afStack_398[0x10] * afStack_398[0x1f]);
        auVar19._4_4_ = uVar65;
        auVar19._0_4_ = uVar55;
        auVar19._8_4_ = uVar67;
        auVar19._12_4_ = uVar69;
        auVar98._0_4_ =
             afStack_398[4] * (float)local_2c8._0_4_ - (float)local_2c8._4_4_ * afStack_398[0];
        auVar98._4_4_ =
             afStack_398[5] * (float)local_2c8._0_4_ - (float)local_2c8._4_4_ * afStack_398[1];
        auVar98._8_4_ =
             afStack_398[6] * (float)local_2c8._0_4_ - (float)local_2c8._4_4_ * afStack_398[2];
        auVar98._12_4_ =
             afStack_398[7] * (float)local_2c8._0_4_ - (float)local_2c8._4_4_ * afStack_398[3];
        auVar78._0_4_ =
             -(uint)(auVar105._0_4_ <=
                     afStack_398[0xd] * afStack_398[0x20] + afStack_398[0xe] * afStack_398[0x1c] +
                     afStack_398[0x10] * fStack_2a0 + fStack_2a4 * afStack_398[0x14] &&
                    auVar143._0_4_ <=
                    afStack_398[0x11] * afStack_398[0x20] + afStack_398[0x12] * afStack_398[0x1c] +
                    fStack_2a0 * afStack_398[0xc] + afStack_398[0x14] * local_2a8);
        auVar78._4_4_ =
             -(uint)(auVar105._4_4_ <=
                     afStack_398[0xd] * afStack_398[0x21] + afStack_398[0xe] * afStack_398[0x1d] +
                     afStack_398[0x10] * fStack_2a0 + fStack_2a4 * afStack_398[0x14] &&
                    auVar143._4_4_ <=
                    afStack_398[0x11] * afStack_398[0x21] + afStack_398[0x12] * afStack_398[0x1d] +
                    fStack_2a0 * afStack_398[0xc] + afStack_398[0x14] * local_2a8);
        auVar78._8_4_ =
             -(uint)(auVar105._8_4_ <=
                     afStack_398[0xd] * afStack_398[0x22] + afStack_398[0xe] * afStack_398[0x1e] +
                     afStack_398[0x10] * fStack_2a0 + fStack_2a4 * afStack_398[0x14] &&
                    auVar143._8_4_ <=
                    afStack_398[0x11] * afStack_398[0x22] + afStack_398[0x12] * afStack_398[0x1e] +
                    fStack_2a0 * afStack_398[0xc] + afStack_398[0x14] * local_2a8);
        auVar78._12_4_ =
             -(uint)(auVar105._12_4_ <=
                     afStack_398[0xd] * afStack_398[0x23] + afStack_398[0xe] * afStack_398[0x1f] +
                     afStack_398[0x10] * fStack_2a0 + fStack_2a4 * afStack_398[0x14] &&
                    auVar143._12_4_ <=
                    afStack_398[0x11] * afStack_398[0x23] + afStack_398[0x12] * afStack_398[0x1f] +
                    fStack_2a0 * afStack_398[0xc] + afStack_398[0x14] * local_2a8);
        auVar162._0_4_ = 0.0 - auVar98._0_4_;
        auVar162._4_4_ = 0.0 - auVar98._4_4_;
        auVar162._8_4_ = 0.0 - auVar98._8_4_;
        auVar162._12_4_ = 0.0 - auVar98._12_4_;
        auVar45 = maxps(auVar162,auVar98);
        uStack_448 = (uint)*(undefined8 *)pauVar32[3];
        uStack_444 = (uint)((ulong)*(undefined8 *)pauVar32[3] >> 0x20);
        uStack_440 = (uint)*(undefined8 *)(pauVar32[3] + 8);
        uStack_43c = (uint)((ulong)*(undefined8 *)(pauVar32[3] + 8) >> 0x20);
        auVar163._4_4_ =
             -(uint)(auVar45._4_4_ <=
                    afStack_398[0x19] * afStack_398[0x15] + afStack_398[0x1d] * afStack_398[0x14] +
                    fStack_2a4 * afStack_398[0xe] + local_2a8 * afStack_398[0x12]);
        auVar163._0_4_ =
             -(uint)(auVar45._0_4_ <=
                    afStack_398[0x18] * afStack_398[0x15] + afStack_398[0x1c] * afStack_398[0x14] +
                    fStack_2a4 * afStack_398[0xe] + local_2a8 * afStack_398[0x12]);
        auVar163._8_4_ =
             -(uint)(auVar45._8_4_ <=
                    afStack_398[0x1a] * afStack_398[0x15] + afStack_398[0x1e] * afStack_398[0x14] +
                    fStack_2a4 * afStack_398[0xe] + local_2a8 * afStack_398[0x12]);
        auVar163._12_4_ =
             -(uint)(auVar45._12_4_ <=
                    afStack_398[0x1b] * afStack_398[0x15] + afStack_398[0x1f] * afStack_398[0x14] +
                    fStack_2a4 * afStack_398[0xe] + local_2a8 * afStack_398[0x12]);
        auVar46._0_4_ =
             -(uint)(auVar128._0_4_ <=
                     afStack_398[0x15] * afStack_398[0x20] + afStack_398[0x16] * afStack_398[0x1c] +
                     fStack_2a4 * afStack_398[0xc] + local_2a8 * afStack_398[0x10] &&
                    auVar106._0_4_ <=
                    afStack_398[0x20] * afStack_398[0xc] + afStack_398[0xe] * afStack_398[0x18] +
                    afStack_398[0x11] * fStack_2a0 + fStack_2a4 * afStack_398[0x15]);
        auVar46._4_4_ =
             -(uint)(auVar128._4_4_ <=
                     afStack_398[0x15] * afStack_398[0x21] + afStack_398[0x16] * afStack_398[0x1d] +
                     fStack_2a4 * afStack_398[0xc] + local_2a8 * afStack_398[0x10] &&
                    auVar106._4_4_ <=
                    afStack_398[0x21] * afStack_398[0xc] + afStack_398[0xe] * afStack_398[0x19] +
                    afStack_398[0x11] * fStack_2a0 + fStack_2a4 * afStack_398[0x15]);
        auVar46._8_4_ =
             -(uint)(auVar128._8_4_ <=
                     afStack_398[0x15] * afStack_398[0x22] + afStack_398[0x16] * afStack_398[0x1e] +
                     fStack_2a4 * afStack_398[0xc] + local_2a8 * afStack_398[0x10] &&
                    auVar106._8_4_ <=
                    afStack_398[0x22] * afStack_398[0xc] + afStack_398[0xe] * afStack_398[0x1a] +
                    afStack_398[0x11] * fStack_2a0 + fStack_2a4 * afStack_398[0x15]);
        auVar46._12_4_ =
             -(uint)(auVar128._12_4_ <=
                     afStack_398[0x15] * afStack_398[0x23] + afStack_398[0x16] * afStack_398[0x1f] +
                     fStack_2a4 * afStack_398[0xc] + local_2a8 * afStack_398[0x10] &&
                    auVar106._12_4_ <=
                    afStack_398[0x23] * afStack_398[0xc] + afStack_398[0xe] * afStack_398[0x1b] +
                    afStack_398[0x11] * fStack_2a0 + fStack_2a4 * afStack_398[0x15]);
        auVar45 = auVar187 & auVar163 & auVar46 & auVar78 & auVar19 & auVar202;
        uVar40 = movmskps((int)afStack_398,auVar45);
        uVar55 = auVar45._8_4_ >> 0x1f;
        uVar55 = uVar55 & uStack_440 | ~uVar55 & uStack_43c;
        uVar65 = auVar45._4_4_ >> 0x1f;
        auVar47._0_4_ = uStack_448 & uVar65;
        auVar47._4_4_ = uStack_444 & uVar65;
        auVar47._8_4_ = uVar55 & uVar65;
        auVar47._12_4_ = uStack_43c & uVar65;
        auVar79._0_4_ = ~uVar65 & uStack_448;
        auVar79._4_4_ = ~uVar65 & uVar55;
        auVar79._8_4_ = ~uVar65 & uStack_43c;
        auVar79._12_4_ = ~uVar65 & uStack_43c;
        uVar65 = auVar45._0_4_ >> 0x1f;
        auVar47 = auVar47 | auVar79;
        uVar55 = auVar47._12_4_;
        auVar48._0_4_ = auVar47._0_4_ & uVar65;
        auVar48._4_4_ = auVar47._4_4_ & uVar65;
        auVar48._8_4_ = auVar47._8_4_ & uVar65;
        auVar48._12_4_ = uVar55 & uVar65;
        auVar80._0_4_ = ~uVar65 & auVar47._4_4_;
        auVar80._4_4_ = ~uVar65 & auVar47._8_4_;
        auVar80._8_4_ = ~uVar65 & uVar55;
        auVar80._12_4_ = ~uVar65 & uVar55;
        iVar44 = __popcountdi2(CONCAT44((int)((ulong)afStack_398 >> 0x20),uVar40));
        local_4f8 = SUB168(auVar48 | auVar80,0);
        uStack_4f0 = SUB168(auVar48 | auVar80,8);
        lVar37 = (long)iVar39;
        iVar39 = iVar39 + iVar44;
        *(undefined8 *)(auStack_248 + lVar37) = local_4f8;
        *(undefined8 *)((long)auStack_240 + lVar37 * 4) = uStack_4f0;
      }
      if (*(float *)(local_260 + 8) <= _LC1) goto LAB_00104a77;
    }
    bVar41 = iVar39 == 0;
    iVar39 = iVar39 + -1;
    if (bVar41) goto LAB_00104a77;
    uVar31 = (ulong)auStack_248[iVar39];
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::StaticCompoundShape::sCollideCompoundVsShape(JPH::Shape const*, JPH::Shape const*,
   JPH::Vec3, JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) */

void JPH::StaticCompoundShape::sCollideCompoundVsShape
               (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
               long param_1,long *param_2,float *param_7,undefined8 *param_8,undefined8 *param_9,
               undefined8 *param_10,undefined8 param_11,long param_12,float *param_13)

{
  long *plVar1;
  float fVar2;
  float fVar3;
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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [14];
  undefined1 auVar28 [14];
  undefined1 auVar29 [14];
  long *plVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  char cVar33;
  long lVar34;
  undefined1 (*pauVar35) [16];
  ulong uVar36;
  undefined1 (*pauVar37) [16];
  byte bVar38;
  float *pfVar39;
  long lVar40;
  float *pfVar41;
  float *pfVar42;
  int iVar43;
  long in_FS_OFFSET;
  bool bVar44;
  int iVar45;
  int iVar46;
  int iVar58;
  int iVar60;
  undefined1 auVar48 [12];
  undefined1 auVar50 [16];
  int iVar62;
  undefined1 auVar51 [16];
  int iVar59;
  int iVar61;
  undefined1 auVar49 [12];
  int iVar63;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined8 uVar47;
  float fVar64;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  uint uVar67;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  undefined1 auVar68 [16];
  int iVar72;
  uint uVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar87;
  undefined1 auVar77 [16];
  int iVar82;
  uint uVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  uint uVar88;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  uint uVar93;
  int iVar94;
  int iVar95;
  int iVar96;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  uint uVar97;
  uint uVar101;
  float fVar102;
  uint uVar107;
  uint uVar111;
  uint uVar112;
  uint uVar116;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  uint uVar98;
  uint uVar108;
  uint uVar113;
  uint uVar117;
  uint uVar118;
  undefined1 auVar105 [16];
  uint uVar99;
  uint uVar100;
  uint uVar109;
  uint uVar110;
  uint uVar114;
  uint uVar115;
  uint uVar119;
  uint uVar120;
  undefined1 auVar106 [16];
  uint uVar121;
  uint uVar122;
  uint uVar123;
  uint uVar124;
  uint uVar128;
  uint uVar129;
  float fVar131;
  uint uVar132;
  uint uVar133;
  float fVar135;
  uint uVar136;
  uint uVar137;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  uint uVar130;
  uint uVar134;
  uint uVar138;
  undefined1 auVar127 [16];
  uint uVar139;
  uint uVar140;
  uint uVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  uint uVar149;
  uint uVar152;
  undefined1 auVar145 [16];
  uint uVar150;
  uint uVar151;
  uint uVar153;
  uint uVar154;
  uint uVar155;
  uint uVar156;
  uint uVar157;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  uint uVar158;
  uint uVar161;
  uint uVar162;
  undefined1 auVar159 [12];
  uint uVar163;
  undefined1 auVar160 [16];
  uint uVar164;
  float fVar165;
  uint uVar169;
  uint uVar170;
  uint uVar171;
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  uint uVar172;
  float fVar174;
  uint uVar180;
  uint uVar182;
  uint uVar184;
  undefined1 auVar175 [16];
  uint uVar173;
  uint uVar181;
  uint uVar183;
  uint uVar185;
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar186 [16];
  float fVar187;
  uint uVar188;
  uint uVar189;
  uint uVar190;
  uint uVar191;
  undefined1 auVar192 [16];
  undefined8 local_458;
  undefined8 uStack_450;
  uint uStack_3d0;
  int iStack_3cc;
  float afStack_3c8 [16];
  undefined1 auStack_388 [4];
  float afStack_384 [3];
  undefined1 auStack_378 [16];
  undefined1 auStack_368 [16];
  undefined8 uStack_358;
  float fStack_350;
  float fStack_34c;
  undefined8 local_348;
  long local_340;
  long *local_338;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [8];
  float fStack_280;
  undefined4 uStack_27c;
  undefined1 local_278 [8];
  float fStack_270;
  float fStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  uint uStack_258;
  float *pfStack_250;
  float afStack_248 [2];
  undefined8 uStack_240;
  undefined1 aauStack_218 [29] [16];
  long local_40;
  
  uStack_260 = *param_10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_268 = *param_9;
  local_348 = param_11;
  local_340 = param_12;
  local_308 = *(undefined8 *)param_7;
  uStack_300 = *(undefined8 *)(param_7 + 2);
  local_2f8 = *(undefined8 *)(param_7 + 4);
  uStack_2f0 = *(undefined8 *)(param_7 + 6);
  local_288._4_4_ = _LC3;
  local_288._0_4_ = _LC3;
  fStack_280 = (float)_LC3;
  uStack_27c = (float)_LC3;
  local_2e8 = *(undefined8 *)(param_7 + 8);
  uStack_2e0 = *(undefined8 *)(param_7 + 10);
  local_278._4_4_ = _LC1;
  local_278._0_4_ = _LC1;
  fStack_270 = _LC1;
  fStack_26c = _LC1;
  local_2d8 = *(undefined8 *)(param_7 + 0xc);
  uStack_2d0 = *(undefined8 *)(param_7 + 0xe);
  local_2c8 = *param_8;
  uStack_2c0 = param_8[1];
  local_2b8 = param_8[2];
  uStack_2b0 = param_8[3];
  local_2a8 = param_8[4];
  uStack_2a0 = param_8[5];
  local_298 = param_8[6];
  uStack_290 = param_8[7];
  uStack_258 = *(int *)(param_1 + 0x50) - 1;
  if (uStack_258 != 0) {
    iVar43 = 0x1f;
    if (uStack_258 != 0) {
      for (; uStack_258 >> iVar43 == 0; iVar43 = iVar43 + -1) {
      }
    }
    uStack_258 = iVar43 + 1;
  }
  fVar64 = *param_7;
  fVar2 = param_7[1];
  fVar187 = param_7[2];
  fVar142 = param_7[6];
  pfStack_250 = param_13;
  fVar131 = (float)*(undefined8 *)(param_7 + 4);
  fVar135 = (float)((ulong)*(undefined8 *)(param_7 + 4) >> 0x20);
  fVar165 = (float)*(undefined8 *)(param_7 + 8);
  fVar174 = (float)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20);
  fVar143 = param_7[10];
  fVar102 = param_7[0xc];
  fVar3 = param_7[0xd];
  fVar144 = param_7[0xe];
  lVar34 = 0;
  do {
    pfVar39 = (float *)((long)param_8 + lVar34);
    fVar20 = *pfVar39;
    fVar21 = pfVar39[1];
    fVar22 = pfVar39[2];
    fVar23 = pfVar39[3];
    *(float *)((long)*(undefined1 (*) [16])afStack_248 + lVar34) =
         fVar23 * (0.0 - (fVar102 * fVar64 + fVar3 * fVar2 + fVar144 * fVar187)) +
         fVar20 * fVar64 + fVar21 * fVar2 + fVar22 * fVar187;
    *(float *)((long)afStack_248 + lVar34 + 4) =
         fVar23 * (0.0 - (fVar102 * fVar131 + fVar3 * fVar135 + fVar144 * fVar142)) +
         fVar20 * fVar131 + fVar21 * fVar135 + fVar22 * fVar142;
    *(float *)((long)&uStack_240 + lVar34) =
         fVar23 * (0.0 - (fVar102 * fVar165 + fVar3 * fVar174 + fVar144 * fVar143)) +
         fVar20 * fVar165 + fVar21 * fVar174 + fVar22 * fVar143;
    *(float *)((long)&uStack_240 + lVar34 + 4) =
         fVar23 * 1.0 + fVar20 * 0.0 + fVar21 * 0.0 + fVar22 * 0.0;
    lVar34 = lVar34 + 0x10;
  } while (lVar34 != 0x40);
  pfVar41 = afStack_3c8;
  local_338 = param_2;
  local_328 = param_1_00;
  local_320 = param_2_00;
  local_318 = param_3;
  uStack_310 = param_4;
  (**(code **)(*param_2 + 0x20))(afStack_3c8);
  local_458._0_4_ = (float)param_3;
  local_458._4_4_ = (float)((ulong)param_3 >> 0x20);
  uStack_450._0_4_ = (float)param_4;
  uStack_450._4_4_ = (float)((ulong)param_4 >> 0x20);
  auVar192._0_4_ = afStack_3c8[4] * (float)local_458;
  auVar192._4_4_ = afStack_3c8[5] * local_458._4_4_;
  auVar192._8_4_ = afStack_3c8[6] * (float)uStack_450;
  auVar192._12_4_ = afStack_3c8[7] * uStack_450._4_4_;
  auVar103._0_8_ = CONCAT44(local_458._4_4_ * afStack_3c8[1],(float)local_458 * afStack_3c8[0]);
  auVar103._8_4_ = (float)uStack_450 * afStack_3c8[2];
  auVar103._12_4_ = uStack_450._4_4_ * afStack_3c8[3];
  auVar50._8_4_ = auVar103._8_4_;
  auVar50._0_8_ = auVar103._0_8_;
  auVar50._12_4_ = auVar103._12_4_;
  _auStack_388 = minps(auVar103,auVar192);
  auStack_378 = maxps(auVar50,auVar192);
  pauVar37 = (undefined1 (*) [16])afStack_248;
  pfVar39 = (float *)auStack_388;
  auVar192 = aauStack_218[0];
  do {
    fVar142 = *pfVar39;
    fVar64 = pfVar39[4];
    pauVar35 = pauVar37 + 1;
    pfVar39 = pfVar39 + 1;
    auVar167._0_8_ =
         CONCAT44(fVar142 * *(float *)((long)*pauVar37 + 4),fVar142 * *(float *)*pauVar37);
    auVar167._8_4_ = fVar142 * *(float *)((long)*pauVar37 + 8);
    auVar167._12_4_ = fVar142 * *(float *)((long)*pauVar37 + 0xc);
    auVar177._0_4_ = fVar64 * *(float *)*pauVar37;
    auVar177._4_4_ = fVar64 * *(float *)((long)*pauVar37 + 4);
    auVar177._8_4_ = fVar64 * *(float *)((long)*pauVar37 + 8);
    auVar177._12_4_ = fVar64 * *(float *)((long)*pauVar37 + 0xc);
    auVar179._8_4_ = auVar167._8_4_;
    auVar179._0_8_ = auVar167._0_8_;
    auVar179._12_4_ = auVar167._12_4_;
    auVar103 = minps(auVar179,auVar177);
    auVar50 = maxps(auVar167,auVar177);
    local_288._0_4_ = SUB164(aauStack_218[0],0) + auVar103._0_4_;
    local_288._4_4_ = SUB164(aauStack_218[0],4) + auVar103._4_4_;
    fStack_280 = SUB164(aauStack_218[0],8) + auVar103._8_4_;
    uStack_27c = SUB164(aauStack_218[0],0xc) + auVar103._12_4_;
    local_278._0_4_ = auVar192._0_4_ + auVar50._0_4_;
    local_278._4_4_ = auVar192._4_4_ + auVar50._4_4_;
    fStack_270 = auVar192._8_4_ + auVar50._8_4_;
    fStack_26c = auVar192._12_4_ + auVar50._12_4_;
    pauVar37 = pauVar35;
    aauStack_218[0] = _local_288;
    auVar192 = _local_278;
  } while (aauStack_218 != pauVar35);
  afStack_248[0] = 0.0;
  uVar36 = 0;
  iVar43 = 0;
  do {
    pfVar39 = pfStack_250;
    lVar34 = local_340;
    uVar47 = local_348;
    iVar45 = (int)uVar36;
    if (iVar45 != 0x7fffffff) {
      if (iVar45 < 0) {
        plVar1 = (long *)(*(long *)(param_1 + 0x60) + (ulong)(iVar45 + 0x80000000U) * 0x28);
        if (*(char *)((long)plVar1 + 0x24) == '\0') {
          fVar2 = *(float *)((long)plVar1 + 0x14);
          fVar3 = *(float *)(plVar1 + 3);
          fVar64 = *(float *)((long)plVar1 + 0x1c);
          fVar142 = _LC22 - (fVar64 * fVar64 + fVar3 * fVar3 + fVar2 * fVar2 + 0.0);
          fVar143 = 0.0;
          if (0.0 <= fVar142) {
            fVar143 = SQRT(fVar142);
          }
          fVar144 = fVar2 + fVar2;
          fVar165 = fVar3 + fVar3;
          fVar174 = fVar64 * (fVar64 + fVar64);
          fVar102 = fVar143 * (fVar64 + fVar64);
          fVar187 = fVar64 * fVar165 - fVar144 * fVar143;
          auStack_378._8_8_ = ZEXT48((uint)(fVar144 * fVar143 + fVar64 * fVar165));
          auStack_378._0_4_ = fVar3 * fVar144 - fVar102;
          fVar102 = fVar3 * fVar144 + fVar102;
          fVar142 = fVar64 * fVar144 + fVar165 * fVar143;
          fVar143 = fVar64 * fVar144 - fVar165 * fVar143;
          fVar64 = (_LC22 - fVar2 * fVar144) - fVar3 * fVar165;
          auStack_378._4_4_ = (_LC22 - fVar174) - fVar2 * fVar144;
          fVar2 = (_LC22 - fVar3 * fVar165) - fVar174;
        }
        else {
          fVar102 = 0.0;
          fVar143 = 0.0;
          auStack_378._0_4_ = 0.0;
          auStack_378._8_8_ = 0;
          fVar142 = 0.0;
          fVar187 = 0.0;
          fVar64 = _LC22;
          auStack_378._4_4_ = _LC22;
          fVar2 = _LC22;
        }
        register0x00001244 = fVar102;
        auStack_388 = fVar2;
        fStack_34c = _LC22;
        register0x00001248 = fVar143;
        register0x0000124c = 0;
        auStack_368._4_4_ = fVar187;
        auStack_368._0_4_ = fVar142;
        uStack_358 = CONCAT44(*(float *)((long)plVar1 + 0xc) * local_328._4_4_,
                              *(float *)(plVar1 + 1) * (float)local_328);
        lVar40 = 0;
        auStack_368._8_4_ = fVar64;
        auStack_368._12_4_ = 0;
        fStack_350 = *(float *)(plVar1 + 2) * (float)local_320;
        do {
          fVar142 = *(float *)((long)auStack_388 + lVar40);
          fVar64 = *(float *)(auStack_388 + lVar40 + 4);
          fVar2 = *(float *)(auStack_388 + lVar40 + 8);
          fVar187 = *(float *)(auStack_388 + lVar40 + 0xc);
          *(float *)((long)afStack_3c8 + lVar40) =
               fVar187 * (float)local_2d8 +
               fVar142 * (float)local_308 + fVar64 * (float)local_2f8 + fVar2 * (float)local_2e8;
          *(float *)((long)afStack_3c8 + lVar40 + 4) =
               fVar187 * (float)((ulong)local_2d8 >> 0x20) +
               fVar142 * (float)((ulong)local_308 >> 0x20) +
               fVar64 * (float)((ulong)local_2f8 >> 0x20) +
               fVar2 * (float)((ulong)local_2e8 >> 0x20);
          *(float *)((long)afStack_3c8 + lVar40 + 8) =
               fVar187 * (float)uStack_2d0 +
               fVar142 * (float)uStack_300 + fVar64 * (float)uStack_2f0 + fVar2 * (float)uStack_2e0;
          *(float *)((long)afStack_3c8 + lVar40 + 0xc) =
               fVar187 * (float)((ulong)uStack_2d0 >> 0x20) +
               fVar142 * (float)((ulong)uStack_300 >> 0x20) +
               fVar64 * (float)((ulong)uStack_2f0 >> 0x20) +
               fVar2 * (float)((ulong)uStack_2e0 >> 0x20);
          lVar40 = lVar40 + 0x10;
        } while (lVar40 != 0x40);
        iStack_3cc = uStack_258 + local_268._4_4_;
        bVar38 = (byte)((ulong)local_268 >> 0x20);
        uStack_3d0 = ~((int)(1L << ((byte)uStack_258 & 0x3f)) + -1 << (bVar38 & 0x1f)) &
                     (uint)local_268 | iVar45 + 0x80000000U << (bVar38 & 0x1f);
        auVar192 = CompoundShape::SubShape::TransformScale(local_328,local_320,plVar1);
        uVar32 = uStack_310;
        uVar31 = local_318;
        plVar30 = local_338;
        pfVar42 = (float *)*plVar1;
        pfVar41 = pfVar39;
        cVar33 = (**(code **)(*(long *)pfVar39 + 0x18))(pfVar39,pfVar42,&uStack_3d0,local_338);
        if (cVar33 != '\0') {
          (*(code *)(&CollisionDispatch::sCollideShape)
                    [(ulong)*(byte *)((long)plVar30 + 0x19) +
                     (ulong)*(byte *)((long)pfVar42 + 0x19) * 0x22])
                    (auVar192._0_8_,auVar192._8_8_,uVar31,uVar32,pfVar42,plVar30,afStack_3c8,
                     &local_2c8,&uStack_3d0,&uStack_260,uVar47,lVar34,pfVar39);
          pfVar41 = pfVar42;
        }
      }
      else {
        pauVar37 = (undefined1 (*) [16])(uVar36 * 0x40 + *(long *)(param_1 + 0x80));
        auVar104._4_4_ = _UNK_0010a0b4;
        auVar104._0_4_ = __LC16;
        auVar104._8_4_ = _UNK_0010a0b8;
        auVar104._12_4_ = _UNK_0010a0bc;
        auVar192 = *pauVar37;
        auVar50 = pauVar37[1];
        auVar9._10_2_ = 0;
        auVar9._0_10_ = auVar192._0_10_;
        auVar9._12_2_ = auVar192._6_2_;
        auVar15._8_2_ = auVar192._4_2_;
        auVar15._0_8_ = auVar192._0_8_;
        auVar15._10_4_ = auVar9._10_4_;
        auVar24._6_8_ = 0;
        auVar24._0_6_ = auVar15._8_6_;
        auVar77._6_8_ = SUB148(auVar24 << 0x40,6);
        auVar77._4_2_ = auVar192._2_2_;
        auVar77._0_2_ = auVar192._0_2_;
        auVar77._2_2_ = 0;
        auVar77._14_2_ = 0;
        auVar104 = auVar104 & auVar77;
        auVar192 = __LC13 & auVar77;
        iVar45 = auVar192._0_4_ * 0x2000;
        iVar58 = auVar192._4_4_ * 0x2000;
        iVar60 = auVar192._8_4_ * 0x2000;
        iVar62 = auVar192._12_4_ * 0x2000;
        uVar122 = __LC14 + iVar45;
        uVar128 = _UNK_0010a0a4 + iVar58;
        uVar132 = _UNK_0010a0a8 + iVar60;
        uVar136 = _UNK_0010a0ac + iVar62;
        uVar97 = (int)-(uint)(auVar104._0_4_ == 0) >> 0x1f;
        uVar107 = (int)-(uint)(auVar104._4_4_ == 0) >> 0x1f;
        uVar112 = (int)-(uint)(auVar104._8_4_ == 0) >> 0x1f;
        uVar117 = (int)-(uint)(auVar104._12_4_ == 0) >> 0x1f;
        uVar67 = (int)-(uint)(auVar104._0_4_ == __LC16) >> 0x1f;
        uVar69 = (int)-(uint)(auVar104._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar70 = (int)-(uint)(auVar104._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar71 = (int)-(uint)(auVar104._12_4_ == _UNK_0010a0bc) >> 0x1f;
        auVar145._4_4_ = _UNK_0010a0b4;
        auVar145._0_4_ = __LC16;
        auVar145._8_4_ = _UNK_0010a0b8;
        auVar145._12_4_ = _UNK_0010a0bc;
        auVar192 = *pauVar37;
        auVar77 = auVar77 & __LC21;
        uVar73 = auVar192._8_4_;
        auVar48._0_8_ = auVar192._8_8_;
        auVar48._8_4_ = uVar73;
        auVar4._10_2_ = 0;
        auVar4._0_10_ = auVar48._0_10_;
        auVar4._12_2_ = auVar192._14_2_;
        auVar10._8_2_ = auVar192._12_2_;
        auVar10._0_8_ = auVar48._0_8_;
        auVar10._10_4_ = auVar4._10_4_;
        auVar25._6_8_ = 0;
        auVar25._0_6_ = auVar10._8_6_;
        auVar16._4_2_ = auVar192._10_2_;
        auVar16._0_4_ = uVar73;
        auVar16._6_8_ = SUB148(auVar25 << 0x40,6);
        auVar51._0_4_ = uVar73 & 0xffff;
        auVar51._4_10_ = auVar16._4_10_;
        auVar51._14_2_ = 0;
        auVar145 = auVar145 & auVar51;
        auVar192 = __LC13 & auVar51;
        auVar51 = auVar51 & __LC21;
        iVar72 = auVar192._0_4_ * 0x2000;
        iVar82 = auVar192._4_4_ * 0x2000;
        iVar87 = auVar192._8_4_ * 0x2000;
        iVar92 = auVar192._12_4_ * 0x2000;
        uVar123 = __LC14 + iVar72;
        uVar129 = _UNK_0010a0a4 + iVar82;
        uVar133 = _UNK_0010a0a8 + iVar87;
        uVar137 = _UNK_0010a0ac + iVar92;
        uVar98 = (int)-(uint)(auVar145._0_4_ == __LC16) >> 0x1f;
        uVar108 = (int)-(uint)(auVar145._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar113 = (int)-(uint)(auVar145._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar118 = (int)-(uint)(auVar145._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar139 = (int)-(uint)(auVar145._0_4_ == 0) >> 0x1f;
        uVar149 = (int)-(uint)(auVar145._4_4_ == 0) >> 0x1f;
        uVar152 = (int)-(uint)(auVar145._8_4_ == 0) >> 0x1f;
        uVar155 = (int)-(uint)(auVar145._12_4_ == 0) >> 0x1f;
        auVar192 = pauVar37[1];
        auVar5._10_2_ = 0;
        auVar5._0_10_ = auVar192._0_10_;
        auVar5._12_2_ = auVar192._6_2_;
        auVar11._8_2_ = auVar192._4_2_;
        auVar11._0_8_ = auVar192._0_8_;
        auVar11._10_4_ = auVar5._10_4_;
        auVar26._6_8_ = 0;
        auVar26._0_6_ = auVar11._8_6_;
        auVar125._6_8_ = SUB148(auVar26 << 0x40,6);
        auVar125._4_2_ = auVar192._2_2_;
        auVar125._0_2_ = auVar192._0_2_;
        auVar125._2_2_ = 0;
        auVar125._14_2_ = 0;
        auVar105._4_4_ = _UNK_0010a0b4;
        auVar105._0_4_ = __LC16;
        auVar105._8_4_ = _UNK_0010a0b8;
        auVar105._12_4_ = _UNK_0010a0bc;
        auVar105 = auVar105 & auVar125;
        auVar192 = __LC13 & auVar125;
        auVar125 = auVar125 & __LC21;
        iVar46 = auVar192._0_4_ * 0x2000;
        iVar59 = auVar192._4_4_ * 0x2000;
        iVar61 = auVar192._8_4_ * 0x2000;
        iVar63 = auVar192._12_4_ * 0x2000;
        uVar140 = __LC14 + iVar46;
        uVar150 = _UNK_0010a0a4 + iVar59;
        uVar153 = _UNK_0010a0a8 + iVar61;
        uVar156 = _UNK_0010a0ac + iVar63;
        uVar99 = (int)-(uint)(auVar105._0_4_ == 0) >> 0x1f;
        uVar109 = (int)-(uint)(auVar105._4_4_ == 0) >> 0x1f;
        uVar114 = (int)-(uint)(auVar105._8_4_ == 0) >> 0x1f;
        uVar119 = (int)-(uint)(auVar105._12_4_ == 0) >> 0x1f;
        uVar73 = (int)-(uint)(auVar105._0_4_ == __LC16) >> 0x1f;
        uVar83 = (int)-(uint)(auVar105._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar88 = (int)-(uint)(auVar105._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar93 = (int)-(uint)(auVar105._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar100 = auVar50._8_4_;
        auVar49._0_8_ = auVar50._8_8_;
        auVar49._8_4_ = uVar100;
        auVar6._10_2_ = 0;
        auVar6._0_10_ = auVar49._0_10_;
        auVar6._12_2_ = auVar50._14_2_;
        auVar12._8_2_ = auVar50._12_2_;
        auVar12._0_8_ = auVar49._0_8_;
        auVar12._10_4_ = auVar6._10_4_;
        auVar27._6_8_ = 0;
        auVar27._0_6_ = auVar12._8_6_;
        auVar17._4_2_ = auVar50._10_2_;
        auVar17._0_4_ = uVar100;
        auVar17._6_8_ = SUB148(auVar27 << 0x40,6);
        auVar52._0_4_ = uVar100 & 0xffff;
        auVar52._4_10_ = auVar17._4_10_;
        auVar52._14_2_ = 0;
        auVar126._4_4_ = _UNK_0010a0b4;
        auVar126._0_4_ = __LC16;
        auVar126._8_4_ = _UNK_0010a0b8;
        auVar126._12_4_ = _UNK_0010a0bc;
        auVar192 = __LC13 & auVar52;
        auVar126 = auVar126 & auVar52;
        auVar52 = auVar52 & __LC21;
        iVar74 = auVar192._0_4_ * 0x2000;
        iVar84 = auVar192._4_4_ * 0x2000;
        iVar89 = auVar192._8_4_ * 0x2000;
        iVar94 = auVar192._12_4_ * 0x2000;
        uVar141 = __LC14 + iVar74;
        uVar151 = _UNK_0010a0a4 + iVar84;
        uVar154 = _UNK_0010a0a8 + iVar89;
        uVar157 = _UNK_0010a0ac + iVar94;
        uVar100 = (int)-(uint)(auVar126._0_4_ == __LC16) >> 0x1f;
        uVar110 = (int)-(uint)(auVar126._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar115 = (int)-(uint)(auVar126._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar120 = (int)-(uint)(auVar126._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar124 = (int)-(uint)(auVar126._0_4_ == 0) >> 0x1f;
        uVar130 = (int)-(uint)(auVar126._4_4_ == 0) >> 0x1f;
        uVar134 = (int)-(uint)(auVar126._8_4_ == 0) >> 0x1f;
        uVar138 = (int)-(uint)(auVar126._12_4_ == 0) >> 0x1f;
        auVar192 = pauVar37[2];
        auVar106._4_4_ = _UNK_0010a0b4;
        auVar106._0_4_ = __LC16;
        auVar106._8_4_ = _UNK_0010a0b8;
        auVar106._12_4_ = _UNK_0010a0bc;
        auVar50 = pauVar37[2];
        auVar7._10_2_ = 0;
        auVar7._0_10_ = auVar192._0_10_;
        auVar7._12_2_ = auVar192._6_2_;
        auVar13._8_2_ = auVar192._4_2_;
        auVar13._0_8_ = auVar192._0_8_;
        auVar13._10_4_ = auVar7._10_4_;
        auVar28._6_8_ = 0;
        auVar28._0_6_ = auVar13._8_6_;
        auVar18._4_2_ = auVar192._2_2_;
        auVar18._0_4_ = auVar192._0_4_;
        auVar18._6_8_ = SUB148(auVar28 << 0x40,6);
        auVar146._0_4_ = auVar192._0_4_ & 0xffff;
        auVar146._4_10_ = auVar18._4_10_;
        auVar146._14_2_ = 0;
        auVar106 = auVar106 & auVar146;
        auVar192 = __LC13 & auVar146;
        auVar146 = auVar146 & __LC21;
        iVar75 = auVar192._0_4_ * 0x2000;
        iVar85 = auVar192._4_4_ * 0x2000;
        iVar90 = auVar192._8_4_ * 0x2000;
        iVar95 = auVar192._12_4_ * 0x2000;
        uVar172 = __LC14 + iVar75;
        uVar180 = _UNK_0010a0a4 + iVar85;
        uVar182 = _UNK_0010a0a8 + iVar90;
        uVar184 = _UNK_0010a0ac + iVar95;
        uVar158 = (int)-(uint)(auVar106._0_4_ == __LC16) >> 0x1f;
        uVar161 = (int)-(uint)(auVar106._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar162 = (int)-(uint)(auVar106._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar163 = (int)-(uint)(auVar106._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar101 = (int)-(uint)(auVar106._0_4_ == 0) >> 0x1f;
        uVar111 = (int)-(uint)(auVar106._4_4_ == 0) >> 0x1f;
        uVar116 = (int)-(uint)(auVar106._8_4_ == 0) >> 0x1f;
        uVar121 = (int)-(uint)(auVar106._12_4_ == 0) >> 0x1f;
        uVar164 = auVar50._8_4_;
        auVar159._0_8_ = auVar50._8_8_;
        auVar159._8_4_ = uVar164;
        auVar8._10_2_ = 0;
        auVar8._0_10_ = auVar159._0_10_;
        auVar8._12_2_ = auVar50._14_2_;
        auVar14._8_2_ = auVar50._12_2_;
        auVar14._0_8_ = auVar159._0_8_;
        auVar14._10_4_ = auVar8._10_4_;
        auVar29._6_8_ = 0;
        auVar29._0_6_ = auVar14._8_6_;
        auVar19._4_2_ = auVar50._10_2_;
        auVar19._0_4_ = uVar164;
        auVar19._6_8_ = SUB148(auVar29 << 0x40,6);
        auVar160._0_4_ = uVar164 & 0xffff;
        auVar160._4_10_ = auVar19._4_10_;
        auVar160._14_2_ = 0;
        auVar175._4_4_ = _UNK_0010a0b4;
        auVar175._0_4_ = __LC16;
        auVar175._8_4_ = _UNK_0010a0b8;
        auVar175._12_4_ = _UNK_0010a0bc;
        auVar192 = __LC13 & auVar160;
        auVar50 = __LC21 & auVar160;
        iVar76 = auVar192._0_4_ * 0x2000;
        iVar86 = auVar192._4_4_ * 0x2000;
        iVar91 = auVar192._8_4_ * 0x2000;
        iVar96 = auVar192._12_4_ * 0x2000;
        auVar175 = auVar175 & auVar160;
        auVar192 = pauVar37[3];
        uVar188 = __LC14 + iVar76;
        uVar189 = _UNK_0010a0a4 + iVar86;
        uVar190 = _UNK_0010a0a8 + iVar91;
        uVar191 = _UNK_0010a0ac + iVar96;
        uVar173 = (int)-(uint)(auVar175._0_4_ == 0) >> 0x1f;
        uVar181 = (int)-(uint)(auVar175._4_4_ == 0) >> 0x1f;
        uVar183 = (int)-(uint)(auVar175._8_4_ == 0) >> 0x1f;
        uVar185 = (int)-(uint)(auVar175._12_4_ == 0) >> 0x1f;
        uVar164 = (int)-(uint)(auVar175._0_4_ == __LC16) >> 0x1f;
        uVar169 = (int)-(uint)(auVar175._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar170 = (int)-(uint)(auVar175._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar171 = (int)-(uint)(auVar175._12_4_ == _UNK_0010a0bc) >> 0x1f;
        auVar53._0_4_ =
             (float)(auVar52._0_4_ << 0x10 |
                    (uint)((float)(iVar74 + __LC18) + _LC20) & uVar124 |
                    ~uVar124 & (uVar100 & (uVar141 | __LC17) | ~uVar100 & uVar141)) *
             (float)local_328;
        auVar53._4_4_ =
             (float)(auVar52._4_4_ << 0x10 |
                    (uint)((float)(iVar84 + _UNK_0010a0d4) + _LC20) & uVar130 |
                    ~uVar130 & (uVar110 & (uVar151 | _UNK_0010a0c4) | ~uVar110 & uVar151)) *
             (float)local_328;
        auVar53._8_4_ =
             (float)(auVar52._8_4_ << 0x10 |
                    (uint)((float)(iVar89 + _UNK_0010a0d8) + _LC20) & uVar134 |
                    ~uVar134 & (uVar115 & (uVar154 | _UNK_0010a0c8) | ~uVar115 & uVar154)) *
             (float)local_328;
        auVar53._12_4_ =
             (float)(auVar52._12_4_ << 0x10 |
                    (uint)((float)(iVar94 + _UNK_0010a0dc) + _LC20) & uVar138 |
                    ~uVar138 & (uVar120 & (uVar157 | _UNK_0010a0cc) | ~uVar120 & uVar157)) *
             (float)local_328;
        auVar176._0_8_ =
             CONCAT44((float)(auVar77._4_4_ << 0x10 |
                             (uint)((float)(iVar58 + _UNK_0010a0d4) + _LC20) & uVar107 |
                             ~uVar107 & (uVar69 & (uVar128 | _UNK_0010a0c4) | ~uVar69 & uVar128)) *
                      (float)local_328,
                      (float)(auVar77._0_4_ << 0x10 |
                             (uint)((float)(iVar45 + __LC18) + _LC20) & uVar97 |
                             ~uVar97 & (uVar67 & (uVar122 | __LC17) | ~uVar67 & uVar122)) *
                      (float)local_328);
        auVar176._8_4_ =
             (float)(auVar77._8_4_ << 0x10 |
                    (uint)((float)(iVar60 + _UNK_0010a0d8) + _LC20) & uVar112 |
                    ~uVar112 & (uVar70 & (uVar132 | _UNK_0010a0c8) | ~uVar70 & uVar132)) *
             (float)local_328;
        auVar176._12_4_ =
             (float)(auVar77._12_4_ << 0x10 |
                    (uint)((float)(iVar62 + _UNK_0010a0dc) + _LC20) & uVar117 |
                    ~uVar117 & (uVar71 & (uVar136 | _UNK_0010a0cc) | ~uVar71 & uVar136)) *
             (float)local_328;
        auVar166._8_4_ = auVar176._8_4_;
        auVar166._0_8_ = auVar176._0_8_;
        auVar166._12_4_ = auVar176._12_4_;
        auVar177 = maxps(auVar176,auVar53);
        auVar167 = minps(auVar166,auVar53);
        auVar147._0_4_ =
             (float)(auVar146._0_4_ << 0x10 |
                    (uint)((float)(iVar75 + __LC18) + _LC20) & uVar101 |
                    ~uVar101 & (uVar158 & (uVar172 | __LC17) | ~uVar158 & uVar172)) *
             local_328._4_4_;
        auVar147._4_4_ =
             (float)(auVar146._4_4_ << 0x10 |
                    (uint)((float)(iVar85 + _UNK_0010a0d4) + _LC20) & uVar111 |
                    ~uVar111 & (uVar161 & (uVar180 | _UNK_0010a0c4) | ~uVar161 & uVar180)) *
             local_328._4_4_;
        auVar147._8_4_ =
             (float)(auVar146._8_4_ << 0x10 |
                    (uint)((float)(iVar90 + _UNK_0010a0d8) + _LC20) & uVar116 |
                    ~uVar116 & (uVar162 & (uVar182 | _UNK_0010a0c8) | ~uVar162 & uVar182)) *
             local_328._4_4_;
        auVar147._12_4_ =
             (float)(auVar146._12_4_ << 0x10 |
                    (uint)((float)(iVar95 + _UNK_0010a0dc) + _LC20) & uVar121 |
                    ~uVar121 & (uVar163 & (uVar184 | _UNK_0010a0cc) | ~uVar163 & uVar184)) *
             local_328._4_4_;
        auVar54._0_8_ =
             CONCAT44((float)(auVar51._4_4_ << 0x10 |
                             (uint)((float)(iVar82 + _UNK_0010a0d4) + _LC20) & uVar149 |
                             ~uVar149 & (uVar108 & (uVar129 | _UNK_0010a0c4) | ~uVar108 & uVar129))
                      * local_328._4_4_,
                      (float)(auVar51._0_4_ << 0x10 |
                             (uint)((float)(iVar72 + __LC18) + _LC20) & uVar139 |
                             ~uVar139 & (uVar98 & (uVar123 | __LC17) | ~uVar98 & uVar123)) *
                      local_328._4_4_);
        auVar54._8_4_ =
             (float)(auVar51._8_4_ << 0x10 |
                    (uint)((float)(iVar87 + _UNK_0010a0d8) + _LC20) & uVar152 |
                    ~uVar152 & (uVar113 & (uVar133 | _UNK_0010a0c8) | ~uVar113 & uVar133)) *
             local_328._4_4_;
        auVar54._12_4_ =
             (float)(auVar51._12_4_ << 0x10 |
                    (uint)((float)(iVar92 + _UNK_0010a0dc) + _LC20) & uVar155 |
                    ~uVar155 & (uVar118 & (uVar137 | _UNK_0010a0cc) | ~uVar118 & uVar137)) *
             local_328._4_4_;
        auVar68._0_4_ =
             (float)(auVar50._0_4_ << 0x10 |
                    (uint)((float)(iVar76 + __LC18) + _LC20) & uVar173 |
                    ~uVar173 & (uVar164 & (uVar188 | __LC17) | ~uVar164 & uVar188)) *
             (float)local_320;
        auVar68._4_4_ =
             (float)(auVar50._4_4_ << 0x10 |
                    (uint)((float)(iVar86 + _UNK_0010a0d4) + _LC20) & uVar181 |
                    ~uVar181 & (uVar169 & (uVar189 | _UNK_0010a0c4) | ~uVar169 & uVar189)) *
             (float)local_320;
        auVar68._8_4_ =
             (float)(auVar50._8_4_ << 0x10 |
                    (uint)((float)(iVar91 + _UNK_0010a0d8) + _LC20) & uVar183 |
                    ~uVar183 & (uVar170 & (uVar190 | _UNK_0010a0c8) | ~uVar170 & uVar190)) *
             (float)local_320;
        auVar68._12_4_ =
             (float)(auVar50._12_4_ << 0x10 |
                    (uint)((float)(iVar96 + _UNK_0010a0dc) + _LC20) & uVar185 |
                    ~uVar185 & (uVar171 & (uVar191 | _UNK_0010a0cc) | ~uVar171 & uVar191)) *
             (float)local_320;
        auVar178._8_4_ = auVar54._8_4_;
        auVar178._0_8_ = auVar54._0_8_;
        auVar178._12_4_ = auVar54._12_4_;
        auVar50 = maxps(auVar54,auVar147);
        auVar179 = minps(auVar178,auVar147);
        uVar47 = CONCAT44((float)(auVar125._4_4_ << 0x10 |
                                 (uint)((float)(iVar59 + _UNK_0010a0d4) + _LC20) & uVar109 |
                                 ~uVar109 & (uVar83 & (uVar150 | _UNK_0010a0c4) | ~uVar83 & uVar150)
                                 ) * (float)local_320,
                          (float)(auVar125._0_4_ << 0x10 |
                                 (uint)((float)(iVar46 + __LC18) + _LC20) & uVar99 |
                                 ~uVar99 & (uVar73 & (uVar140 | __LC17) | ~uVar73 & uVar140)) *
                          (float)local_320);
        fVar142 = (float)(auVar125._8_4_ << 0x10 |
                         (uint)((float)(iVar61 + _UNK_0010a0d8) + _LC20) & uVar114 |
                         ~uVar114 & (uVar88 & (uVar153 | _UNK_0010a0c8) | ~uVar88 & uVar153)) *
                  (float)local_320;
        fVar64 = (float)(auVar125._12_4_ << 0x10 |
                        (uint)((float)(iVar63 + _UNK_0010a0dc) + _LC20) & uVar119 |
                        ~uVar119 & (uVar93 & (uVar156 | _UNK_0010a0cc) | ~uVar93 & uVar156)) *
                 (float)local_320;
        auVar186._8_4_ = fVar142;
        auVar186._0_8_ = uVar47;
        auVar186._12_4_ = fVar64;
        auVar78._8_4_ = fVar142;
        auVar78._0_8_ = uVar47;
        auVar78._12_4_ = fVar64;
        auVar104 = minps(auVar186,auVar68);
        auVar103 = maxps(auVar78,auVar68);
        auVar148._4_4_ = -(uint)((float)local_278._0_4_ < auVar167._4_4_);
        auVar148._0_4_ = -(uint)((float)local_278._0_4_ < auVar167._0_4_);
        auVar148._8_4_ = -(uint)((float)local_278._0_4_ < auVar167._8_4_);
        auVar148._12_4_ = -(uint)((float)local_278._0_4_ < auVar167._12_4_);
        auVar127._4_4_ = -(uint)(auVar177._4_4_ < (float)local_288._0_4_);
        auVar127._0_4_ = -(uint)(auVar177._0_4_ < (float)local_288._0_4_);
        auVar127._8_4_ = -(uint)(auVar177._8_4_ < (float)local_288._0_4_);
        auVar127._12_4_ = -(uint)(auVar177._12_4_ < (float)local_288._0_4_);
        auVar168._4_4_ = -(uint)((float)local_278._4_4_ < auVar179._4_4_);
        auVar168._0_4_ = -(uint)((float)local_278._4_4_ < auVar179._0_4_);
        auVar168._8_4_ = -(uint)((float)local_278._4_4_ < auVar179._8_4_);
        auVar168._12_4_ = -(uint)((float)local_278._4_4_ < auVar179._12_4_);
        auVar65._4_4_ = -(uint)(auVar50._4_4_ < (float)local_288._4_4_);
        auVar65._0_4_ = -(uint)(auVar50._0_4_ < (float)local_288._4_4_);
        auVar65._8_4_ = -(uint)(auVar50._8_4_ < (float)local_288._4_4_);
        auVar65._12_4_ = -(uint)(auVar50._12_4_ < (float)local_288._4_4_);
        auVar55._4_4_ = -(uint)(fStack_270 < auVar104._4_4_);
        auVar55._0_4_ = -(uint)(fStack_270 < auVar104._0_4_);
        auVar55._8_4_ = -(uint)(fStack_270 < auVar104._8_4_);
        auVar55._12_4_ = -(uint)(fStack_270 < auVar104._12_4_);
        auVar79._4_4_ = -(uint)(auVar103._4_4_ < fStack_280);
        auVar79._0_4_ = -(uint)(auVar103._0_4_ < fStack_280);
        auVar79._8_4_ = -(uint)(auVar103._8_4_ < fStack_280);
        auVar79._12_4_ = -(uint)(auVar103._12_4_ < fStack_280);
        uVar70 = auVar192._12_4_;
        auVar66._8_4_ = 0xffffffff;
        auVar66._0_8_ = 0xffffffffffffffff;
        auVar66._12_4_ = 0xffffffff;
        auVar66 = (auVar65 | auVar168 | auVar127 | auVar148 | auVar55 | auVar79) ^ auVar66;
        uVar67 = movmskps((int)pfVar41,auVar66);
        pfVar41 = (float *)(ulong)uVar67;
        uVar67 = auVar66._8_4_ >> 0x1f;
        uVar67 = uVar67 & auVar192._8_4_ | ~uVar67 & uVar70;
        uVar69 = auVar66._4_4_ >> 0x1f;
        auVar56._0_4_ = auVar192._0_4_ & uVar69;
        auVar56._4_4_ = auVar192._4_4_ & uVar69;
        auVar56._8_4_ = uVar67 & uVar69;
        auVar56._12_4_ = uVar70 & uVar69;
        auVar80._0_4_ = ~uVar69 & auVar192._0_4_;
        auVar80._4_4_ = ~uVar69 & uVar67;
        auVar80._8_4_ = ~uVar69 & uVar70;
        auVar80._12_4_ = ~uVar69 & uVar70;
        uVar69 = auVar66._0_4_ >> 0x1f;
        auVar56 = auVar56 | auVar80;
        uVar67 = auVar56._12_4_;
        auVar57._0_4_ = auVar56._0_4_ & uVar69;
        auVar57._4_4_ = auVar56._4_4_ & uVar69;
        auVar57._8_4_ = auVar56._8_4_ & uVar69;
        auVar57._12_4_ = uVar67 & uVar69;
        auVar81._0_4_ = ~uVar69 & auVar56._4_4_;
        auVar81._4_4_ = ~uVar69 & auVar56._8_4_;
        auVar81._8_4_ = ~uVar69 & uVar67;
        auVar81._12_4_ = ~uVar69 & uVar67;
        iVar45 = __popcountdi2(pfVar41);
        local_458 = SUB168(auVar57 | auVar81,0);
        uStack_450 = SUB168(auVar57 | auVar81,8);
        lVar34 = (long)iVar43;
        iVar43 = iVar43 + iVar45;
        *(undefined8 *)(afStack_248 + lVar34) = local_458;
        *(undefined8 *)((long)&uStack_240 + lVar34 * 4) = uStack_450;
      }
      if (*(float *)(local_340 + 8) <= _LC1) {
LAB_00106840:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    bVar44 = iVar43 == 0;
    iVar43 = iVar43 + -1;
    if (bVar44) goto LAB_00106840;
    uVar36 = (ulong)(uint)afStack_248[iVar43];
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::StaticCompoundShape::sCollideShapeVsCompound(JPH::Shape const*, JPH::Shape const*,
   JPH::Vec3, JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) */

void JPH::StaticCompoundShape::sCollideShapeVsCompound
               (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
               float *param_1,long param_2,undefined8 *param_7,float *param_8,undefined8 *param_9,
               undefined8 *param_10,long param_11,long param_12,float *param_13)

{
  long *plVar1;
  float fVar2;
  float fVar3;
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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [14];
  undefined1 auVar28 [14];
  undefined1 auVar29 [14];
  long lVar30;
  undefined8 uVar31;
  char cVar32;
  long lVar33;
  undefined1 (*pauVar34) [16];
  ulong uVar35;
  undefined1 (*pauVar36) [16];
  long lVar37;
  byte bVar38;
  float *pfVar39;
  float *pfVar40;
  float *pfVar41;
  int iVar42;
  long in_FS_OFFSET;
  bool bVar43;
  int iVar44;
  int iVar45;
  int iVar57;
  int iVar59;
  undefined1 auVar47 [12];
  undefined1 auVar49 [16];
  int iVar61;
  undefined1 auVar50 [16];
  int iVar58;
  int iVar60;
  undefined1 auVar48 [12];
  int iVar62;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined8 uVar46;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  uint uVar66;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  undefined1 auVar67 [16];
  int iVar71;
  uint uVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  float fVar76;
  int iVar87;
  undefined1 auVar77 [16];
  int iVar82;
  uint uVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  uint uVar88;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  uint uVar93;
  int iVar94;
  int iVar95;
  int iVar96;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  uint uVar97;
  uint uVar101;
  float fVar102;
  uint uVar109;
  uint uVar114;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  uint uVar98;
  uint uVar110;
  uint uVar115;
  uint uVar119;
  uint uVar120;
  undefined1 auVar106 [16];
  uint uVar99;
  uint uVar100;
  uint uVar111;
  uint uVar112;
  uint uVar116;
  uint uVar117;
  uint uVar121;
  uint uVar122;
  undefined1 auVar107 [16];
  uint uVar113;
  uint uVar118;
  uint uVar123;
  undefined1 auVar108 [16];
  uint uVar124;
  uint uVar125;
  uint uVar126;
  uint uVar130;
  uint uVar131;
  float fVar133;
  uint uVar134;
  uint uVar135;
  float fVar137;
  uint uVar138;
  uint uVar139;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  uint uVar132;
  uint uVar136;
  uint uVar140;
  undefined1 auVar129 [16];
  uint uVar141;
  uint uVar142;
  uint uVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  uint uVar151;
  uint uVar154;
  undefined1 auVar147 [16];
  uint uVar152;
  uint uVar153;
  uint uVar155;
  uint uVar156;
  uint uVar157;
  uint uVar158;
  uint uVar159;
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  uint uVar160;
  uint uVar163;
  uint uVar164;
  undefined1 auVar161 [12];
  uint uVar165;
  undefined1 auVar162 [16];
  uint uVar166;
  float fVar167;
  uint uVar170;
  uint uVar171;
  uint uVar172;
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  uint uVar173;
  float fVar175;
  uint uVar181;
  uint uVar183;
  uint uVar185;
  undefined1 auVar176 [16];
  uint uVar174;
  uint uVar182;
  uint uVar184;
  uint uVar186;
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  uint uVar189;
  uint uVar190;
  uint uVar191;
  uint uVar192;
  undefined1 auVar193 [16];
  undefined8 local_458;
  undefined8 uStack_450;
  uint uStack_3d0;
  int iStack_3cc;
  float afStack_3c8 [16];
  undefined1 auStack_388 [4];
  float afStack_384 [3];
  undefined1 auStack_378 [16];
  undefined1 auStack_368 [16];
  undefined8 uStack_358;
  float fStack_350;
  float fStack_34c;
  long local_348;
  long local_340;
  float *local_338;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [8];
  float fStack_280;
  undefined4 uStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  uint uStack_258;
  float *pfStack_250;
  float afStack_248 [2];
  undefined8 uStack_240;
  undefined1 aauStack_218 [29] [16];
  long local_40;
  
  uStack_260 = *param_10;
  local_268 = *param_9;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_348 = param_11;
  local_340 = param_12;
  local_308 = *param_7;
  uStack_300 = param_7[1];
  local_2f8 = param_7[2];
  uStack_2f0 = param_7[3];
  local_288._4_4_ = _LC3;
  local_288._0_4_ = _LC3;
  fStack_280 = (float)_LC3;
  uStack_27c = (float)_LC3;
  local_2e8 = param_7[4];
  uStack_2e0 = param_7[5];
  local_278 = _LC1;
  fStack_274 = _LC1;
  fStack_270 = _LC1;
  fStack_26c = _LC1;
  local_2d8 = param_7[6];
  uStack_2d0 = param_7[7];
  local_2c8 = *(undefined8 *)param_8;
  uStack_2c0 = *(undefined8 *)(param_8 + 2);
  local_2b8 = *(undefined8 *)(param_8 + 4);
  uStack_2b0 = *(undefined8 *)(param_8 + 6);
  local_2a8 = *(undefined8 *)(param_8 + 8);
  uStack_2a0 = *(undefined8 *)(param_8 + 10);
  local_298 = *(undefined8 *)(param_8 + 0xc);
  uStack_290 = *(undefined8 *)(param_8 + 0xe);
  uStack_258 = *(int *)(param_2 + 0x50) - 1;
  if (uStack_258 != 0) {
    iVar42 = 0x1f;
    if (uStack_258 != 0) {
      for (; uStack_258 >> iVar42 == 0; iVar42 = iVar42 + -1) {
      }
    }
    uStack_258 = iVar42 + 1;
  }
  fVar145 = *param_8;
  fVar2 = param_8[1];
  fVar144 = param_8[2];
  fVar102 = param_8[6];
  pfStack_250 = param_13;
  fVar133 = (float)*(undefined8 *)(param_8 + 4);
  fVar137 = (float)((ulong)*(undefined8 *)(param_8 + 4) >> 0x20);
  fVar167 = (float)*(undefined8 *)(param_8 + 8);
  fVar175 = (float)((ulong)*(undefined8 *)(param_8 + 8) >> 0x20);
  fVar63 = param_8[10];
  fVar76 = param_8[0xc];
  fVar3 = param_8[0xd];
  fVar146 = param_8[0xe];
  lVar33 = 0;
  do {
    pfVar39 = (float *)((long)param_7 + lVar33);
    fVar20 = *pfVar39;
    fVar21 = pfVar39[1];
    fVar22 = pfVar39[2];
    fVar23 = pfVar39[3];
    *(float *)((long)*(undefined1 (*) [16])afStack_248 + lVar33) =
         fVar23 * (0.0 - (fVar76 * fVar145 + fVar3 * fVar2 + fVar146 * fVar144)) +
         fVar20 * fVar145 + fVar21 * fVar2 + fVar22 * fVar144;
    *(float *)((long)afStack_248 + lVar33 + 4) =
         fVar23 * (0.0 - (fVar76 * fVar133 + fVar3 * fVar137 + fVar146 * fVar102)) +
         fVar20 * fVar133 + fVar21 * fVar137 + fVar22 * fVar102;
    *(float *)((long)&uStack_240 + lVar33) =
         fVar23 * (0.0 - (fVar76 * fVar167 + fVar3 * fVar175 + fVar146 * fVar63)) +
         fVar20 * fVar167 + fVar21 * fVar175 + fVar22 * fVar63;
    *(float *)((long)&uStack_240 + lVar33 + 4) =
         fVar23 * 1.0 + fVar20 * 0.0 + fVar21 * 0.0 + fVar22 * 0.0;
    lVar33 = lVar33 + 0x10;
  } while (lVar33 != 0x40);
  pfVar40 = afStack_3c8;
  local_338 = param_1;
  local_328 = param_1_00;
  uStack_320 = param_2_00;
  local_318 = param_3;
  local_310 = param_4;
  (**(code **)(*(long *)param_1 + 0x20))(afStack_3c8,param_1);
  local_458._0_4_ = (float)param_1_00;
  local_458._4_4_ = (float)((ulong)param_1_00 >> 0x20);
  uStack_450._0_4_ = (float)param_2_00;
  uStack_450._4_4_ = (float)((ulong)param_2_00 >> 0x20);
  auVar193._0_4_ = afStack_3c8[4] * (float)local_458;
  auVar193._4_4_ = afStack_3c8[5] * local_458._4_4_;
  auVar193._8_4_ = afStack_3c8[6] * (float)uStack_450;
  auVar193._12_4_ = afStack_3c8[7] * uStack_450._4_4_;
  auVar49._0_8_ = CONCAT44(local_458._4_4_ * afStack_3c8[1],(float)local_458 * afStack_3c8[0]);
  auVar49._8_4_ = (float)uStack_450 * afStack_3c8[2];
  auVar49._12_4_ = uStack_450._4_4_ * afStack_3c8[3];
  auVar104._8_4_ = auVar49._8_4_;
  auVar104._0_8_ = auVar49._0_8_;
  auVar104._12_4_ = auVar49._12_4_;
  _auStack_388 = minps(auVar49,auVar193);
  auStack_378 = maxps(auVar104,auVar193);
  pauVar36 = (undefined1 (*) [16])afStack_248;
  pfVar39 = (float *)auStack_388;
  auVar193 = aauStack_218[0];
  do {
    fVar102 = *pfVar39;
    fVar145 = pfVar39[4];
    pauVar34 = pauVar36 + 1;
    pfVar39 = pfVar39 + 1;
    auVar169._0_8_ =
         CONCAT44(fVar102 * *(float *)((long)*pauVar36 + 4),fVar102 * *(float *)*pauVar36);
    auVar169._8_4_ = fVar102 * *(float *)((long)*pauVar36 + 8);
    auVar169._12_4_ = fVar102 * *(float *)((long)*pauVar36 + 0xc);
    auVar178._0_4_ = fVar145 * *(float *)*pauVar36;
    auVar178._4_4_ = fVar145 * *(float *)((long)*pauVar36 + 4);
    auVar178._8_4_ = fVar145 * *(float *)((long)*pauVar36 + 8);
    auVar178._12_4_ = fVar145 * *(float *)((long)*pauVar36 + 0xc);
    auVar103._8_4_ = auVar169._8_4_;
    auVar103._0_8_ = auVar169._0_8_;
    auVar103._12_4_ = auVar169._12_4_;
    auVar104 = minps(auVar103,auVar178);
    auVar49 = maxps(auVar169,auVar178);
    auVar180._0_4_ = SUB164(aauStack_218[0],0) + auVar104._0_4_;
    auVar180._4_4_ = SUB164(aauStack_218[0],4) + auVar104._4_4_;
    auVar180._8_4_ = SUB164(aauStack_218[0],8) + auVar104._8_4_;
    auVar180._12_4_ = SUB164(aauStack_218[0],0xc) + auVar104._12_4_;
    auVar188._0_4_ = auVar193._0_4_ + auVar49._0_4_;
    auVar188._4_4_ = auVar193._4_4_ + auVar49._4_4_;
    auVar188._8_4_ = auVar193._8_4_ + auVar49._8_4_;
    auVar188._12_4_ = auVar193._12_4_ + auVar49._12_4_;
    pauVar36 = pauVar34;
    aauStack_218[0] = auVar180;
    auVar193 = auVar188;
  } while (aauStack_218 != pauVar34);
  fVar102 = *(float *)(param_11 + 0x20);
  uVar35 = 0;
  iVar42 = 0;
  afStack_248[0] = 0.0;
  local_288._0_4_ = auVar180._0_4_ - fVar102;
  local_288._4_4_ = auVar180._4_4_ - fVar102;
  fStack_280 = auVar180._8_4_ - fVar102;
  uStack_27c = auVar180._12_4_ - fVar102;
  local_278 = fVar102 + auVar188._0_4_;
  fStack_274 = fVar102 + auVar188._4_4_;
  fStack_270 = fVar102 + auVar188._8_4_;
  fStack_26c = fVar102 + auVar188._12_4_;
  do {
    pfVar39 = pfStack_250;
    lVar30 = local_340;
    lVar33 = local_348;
    iVar44 = (int)uVar35;
    if (iVar44 != 0x7fffffff) {
      if (iVar44 < 0) {
        plVar1 = (long *)(*(long *)(param_2 + 0x60) + (ulong)(iVar44 + 0x80000000U) * 0x28);
        iStack_3cc = uStack_258 + uStack_260._4_4_;
        bVar38 = (byte)((ulong)uStack_260 >> 0x20);
        uStack_3d0 = ~((int)(1L << ((byte)uStack_258 & 0x3f)) + -1 << (bVar38 & 0x1f)) &
                     (uint)uStack_260 | iVar44 + 0x80000000U << (bVar38 & 0x1f);
        if (*(char *)((long)plVar1 + 0x24) == '\0') {
          fVar2 = *(float *)((long)plVar1 + 0x14);
          fVar3 = *(float *)(plVar1 + 3);
          fVar102 = *(float *)((long)plVar1 + 0x1c);
          fVar144 = _LC22 - (fVar102 * fVar102 + fVar3 * fVar3 + fVar2 * fVar2 + 0.0);
          fVar145 = 0.0;
          if (0.0 <= fVar144) {
            fVar145 = SQRT(fVar144);
          }
          fVar146 = fVar2 + fVar2;
          fVar167 = fVar3 + fVar3;
          fVar175 = fVar102 * (fVar102 + fVar102);
          fVar63 = fVar145 * (fVar102 + fVar102);
          fVar144 = fVar102 * fVar167 - fVar146 * fVar145;
          auStack_378._8_8_ = ZEXT48((uint)(fVar146 * fVar145 + fVar102 * fVar167));
          fVar76 = fVar102 * fVar146 - fVar167 * fVar145;
          fVar102 = fVar102 * fVar146 + fVar167 * fVar145;
          auStack_378._0_4_ = fVar3 * fVar146 - fVar63;
          fVar63 = fVar3 * fVar146 + fVar63;
          fVar145 = (_LC22 - fVar2 * fVar146) - fVar3 * fVar167;
          auStack_378._4_4_ = (_LC22 - fVar175) - fVar2 * fVar146;
          fVar2 = (_LC22 - fVar3 * fVar167) - fVar175;
        }
        else {
          fVar63 = 0.0;
          fVar76 = 0.0;
          auStack_378._0_4_ = 0.0;
          auStack_378._8_8_ = 0;
          fVar102 = 0.0;
          fVar144 = 0.0;
          fVar145 = _LC22;
          auStack_378._4_4_ = _LC22;
          fVar2 = _LC22;
        }
        register0x00001244 = fVar63;
        auStack_388 = fVar2;
        fStack_34c = _LC22;
        register0x00001248 = fVar76;
        register0x0000124c = 0;
        auStack_368._4_4_ = fVar144;
        auStack_368._0_4_ = fVar102;
        uStack_358 = CONCAT44(*(float *)((long)plVar1 + 0xc) * local_318._4_4_,
                              *(float *)(plVar1 + 1) * (float)local_318);
        lVar37 = 0;
        auStack_368._8_4_ = fVar145;
        auStack_368._12_4_ = 0;
        fStack_350 = *(float *)(plVar1 + 2) * (float)local_310;
        do {
          fVar102 = *(float *)((long)auStack_388 + lVar37);
          fVar145 = *(float *)(auStack_388 + lVar37 + 4);
          fVar2 = *(float *)(auStack_388 + lVar37 + 8);
          fVar144 = *(float *)(auStack_388 + lVar37 + 0xc);
          *(float *)((long)afStack_3c8 + lVar37) =
               fVar144 * (float)local_298 +
               fVar102 * (float)local_2c8 + fVar145 * (float)local_2b8 + fVar2 * (float)local_2a8;
          *(float *)((long)afStack_3c8 + lVar37 + 4) =
               fVar144 * (float)((ulong)local_298 >> 0x20) +
               fVar102 * (float)((ulong)local_2c8 >> 0x20) +
               fVar145 * (float)((ulong)local_2b8 >> 0x20) +
               fVar2 * (float)((ulong)local_2a8 >> 0x20);
          *(float *)((long)afStack_3c8 + lVar37 + 8) =
               fVar144 * (float)uStack_290 +
               fVar102 * (float)uStack_2c0 + fVar145 * (float)uStack_2b0 + fVar2 * (float)uStack_2a0
          ;
          *(float *)((long)afStack_3c8 + lVar37 + 0xc) =
               fVar144 * (float)((ulong)uStack_290 >> 0x20) +
               fVar102 * (float)((ulong)uStack_2c0 >> 0x20) +
               fVar145 * (float)((ulong)uStack_2b0 >> 0x20) +
               fVar2 * (float)((ulong)uStack_2a0 >> 0x20);
          lVar37 = lVar37 + 0x10;
        } while (lVar37 != 0x40);
        auVar193 = CompoundShape::SubShape::TransformScale(local_318,local_310,plVar1);
        uVar31 = uStack_320;
        uVar46 = local_328;
        pfVar41 = local_338;
        lVar37 = *plVar1;
        pfVar40 = pfVar39;
        cVar32 = (**(code **)(*(long *)pfVar39 + 0x18))(pfVar39,local_338,&local_268,lVar37);
        if (cVar32 != '\0') {
          (*(code *)(&CollisionDispatch::sCollideShape)
                    [(ulong)*(byte *)(lVar37 + 0x19) + (ulong)*(byte *)((long)pfVar41 + 0x19) * 0x22
                    ])(uVar46,uVar31,auVar193._0_8_,auVar193._8_8_,pfVar41,lVar37,&local_308,
                       afStack_3c8,&local_268,&uStack_3d0,lVar33,lVar30,pfVar39);
          pfVar40 = pfVar41;
        }
      }
      else {
        pauVar36 = (undefined1 (*) [16])(uVar35 * 0x40 + *(long *)(param_2 + 0x80));
        auVar105._4_4_ = _UNK_0010a0b4;
        auVar105._0_4_ = __LC16;
        auVar105._8_4_ = _UNK_0010a0b8;
        auVar105._12_4_ = _UNK_0010a0bc;
        auVar193 = *pauVar36;
        auVar49 = pauVar36[1];
        auVar9._10_2_ = 0;
        auVar9._0_10_ = auVar193._0_10_;
        auVar9._12_2_ = auVar193._6_2_;
        auVar15._8_2_ = auVar193._4_2_;
        auVar15._0_8_ = auVar193._0_8_;
        auVar15._10_4_ = auVar9._10_4_;
        auVar24._6_8_ = 0;
        auVar24._0_6_ = auVar15._8_6_;
        auVar77._6_8_ = SUB148(auVar24 << 0x40,6);
        auVar77._4_2_ = auVar193._2_2_;
        auVar77._0_2_ = auVar193._0_2_;
        auVar77._2_2_ = 0;
        auVar77._14_2_ = 0;
        auVar105 = auVar105 & auVar77;
        auVar193 = __LC13 & auVar77;
        iVar44 = auVar193._0_4_ * 0x2000;
        iVar57 = auVar193._4_4_ * 0x2000;
        iVar59 = auVar193._8_4_ * 0x2000;
        iVar61 = auVar193._12_4_ * 0x2000;
        uVar124 = __LC14 + iVar44;
        uVar130 = _UNK_0010a0a4 + iVar57;
        uVar134 = _UNK_0010a0a8 + iVar59;
        uVar138 = _UNK_0010a0ac + iVar61;
        uVar97 = (int)-(uint)(auVar105._0_4_ == 0) >> 0x1f;
        uVar109 = (int)-(uint)(auVar105._4_4_ == 0) >> 0x1f;
        uVar114 = (int)-(uint)(auVar105._8_4_ == 0) >> 0x1f;
        uVar119 = (int)-(uint)(auVar105._12_4_ == 0) >> 0x1f;
        uVar66 = (int)-(uint)(auVar105._0_4_ == __LC16) >> 0x1f;
        uVar68 = (int)-(uint)(auVar105._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar69 = (int)-(uint)(auVar105._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar70 = (int)-(uint)(auVar105._12_4_ == _UNK_0010a0bc) >> 0x1f;
        auVar147._4_4_ = _UNK_0010a0b4;
        auVar147._0_4_ = __LC16;
        auVar147._8_4_ = _UNK_0010a0b8;
        auVar147._12_4_ = _UNK_0010a0bc;
        auVar193 = *pauVar36;
        auVar77 = auVar77 & __LC21;
        uVar72 = auVar193._8_4_;
        auVar47._0_8_ = auVar193._8_8_;
        auVar47._8_4_ = uVar72;
        auVar4._10_2_ = 0;
        auVar4._0_10_ = auVar47._0_10_;
        auVar4._12_2_ = auVar193._14_2_;
        auVar10._8_2_ = auVar193._12_2_;
        auVar10._0_8_ = auVar47._0_8_;
        auVar10._10_4_ = auVar4._10_4_;
        auVar25._6_8_ = 0;
        auVar25._0_6_ = auVar10._8_6_;
        auVar16._4_2_ = auVar193._10_2_;
        auVar16._0_4_ = uVar72;
        auVar16._6_8_ = SUB148(auVar25 << 0x40,6);
        auVar50._0_4_ = uVar72 & 0xffff;
        auVar50._4_10_ = auVar16._4_10_;
        auVar50._14_2_ = 0;
        auVar147 = auVar147 & auVar50;
        auVar193 = __LC13 & auVar50;
        auVar50 = auVar50 & __LC21;
        iVar71 = auVar193._0_4_ * 0x2000;
        iVar82 = auVar193._4_4_ * 0x2000;
        iVar87 = auVar193._8_4_ * 0x2000;
        iVar92 = auVar193._12_4_ * 0x2000;
        uVar125 = __LC14 + iVar71;
        uVar131 = _UNK_0010a0a4 + iVar82;
        uVar135 = _UNK_0010a0a8 + iVar87;
        uVar139 = _UNK_0010a0ac + iVar92;
        uVar98 = (int)-(uint)(auVar147._0_4_ == __LC16) >> 0x1f;
        uVar110 = (int)-(uint)(auVar147._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar115 = (int)-(uint)(auVar147._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar120 = (int)-(uint)(auVar147._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar141 = (int)-(uint)(auVar147._0_4_ == 0) >> 0x1f;
        uVar151 = (int)-(uint)(auVar147._4_4_ == 0) >> 0x1f;
        uVar154 = (int)-(uint)(auVar147._8_4_ == 0) >> 0x1f;
        uVar157 = (int)-(uint)(auVar147._12_4_ == 0) >> 0x1f;
        auVar193 = pauVar36[1];
        auVar5._10_2_ = 0;
        auVar5._0_10_ = auVar193._0_10_;
        auVar5._12_2_ = auVar193._6_2_;
        auVar11._8_2_ = auVar193._4_2_;
        auVar11._0_8_ = auVar193._0_8_;
        auVar11._10_4_ = auVar5._10_4_;
        auVar26._6_8_ = 0;
        auVar26._0_6_ = auVar11._8_6_;
        auVar127._6_8_ = SUB148(auVar26 << 0x40,6);
        auVar127._4_2_ = auVar193._2_2_;
        auVar127._0_2_ = auVar193._0_2_;
        auVar127._2_2_ = 0;
        auVar127._14_2_ = 0;
        auVar193 = __LC13 & auVar127;
        auVar106._4_4_ = _UNK_0010a0b4;
        auVar106._0_4_ = __LC16;
        auVar106._8_4_ = _UNK_0010a0b8;
        auVar106._12_4_ = _UNK_0010a0bc;
        iVar45 = auVar193._0_4_ * 0x2000;
        iVar58 = auVar193._4_4_ * 0x2000;
        iVar60 = auVar193._8_4_ * 0x2000;
        iVar62 = auVar193._12_4_ * 0x2000;
        auVar106 = auVar106 & auVar127;
        uVar142 = __LC14 + iVar45;
        uVar152 = _UNK_0010a0a4 + iVar58;
        uVar155 = _UNK_0010a0a8 + iVar60;
        uVar158 = _UNK_0010a0ac + iVar62;
        auVar127 = auVar127 & __LC21;
        uVar99 = (int)-(uint)(auVar106._0_4_ == 0) >> 0x1f;
        uVar111 = (int)-(uint)(auVar106._4_4_ == 0) >> 0x1f;
        uVar116 = (int)-(uint)(auVar106._8_4_ == 0) >> 0x1f;
        uVar121 = (int)-(uint)(auVar106._12_4_ == 0) >> 0x1f;
        auVar128._4_4_ = _UNK_0010a0b4;
        auVar128._0_4_ = __LC16;
        auVar128._8_4_ = _UNK_0010a0b8;
        auVar128._12_4_ = _UNK_0010a0bc;
        uVar72 = (int)-(uint)(auVar106._0_4_ == __LC16) >> 0x1f;
        uVar83 = (int)-(uint)(auVar106._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar88 = (int)-(uint)(auVar106._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar93 = (int)-(uint)(auVar106._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar100 = auVar49._8_4_;
        auVar48._0_8_ = auVar49._8_8_;
        auVar48._8_4_ = uVar100;
        auVar6._10_2_ = 0;
        auVar6._0_10_ = auVar48._0_10_;
        auVar6._12_2_ = auVar49._14_2_;
        auVar12._8_2_ = auVar49._12_2_;
        auVar12._0_8_ = auVar48._0_8_;
        auVar12._10_4_ = auVar6._10_4_;
        auVar27._6_8_ = 0;
        auVar27._0_6_ = auVar12._8_6_;
        auVar17._4_2_ = auVar49._10_2_;
        auVar17._0_4_ = uVar100;
        auVar17._6_8_ = SUB148(auVar27 << 0x40,6);
        auVar51._0_4_ = uVar100 & 0xffff;
        auVar51._4_10_ = auVar17._4_10_;
        auVar51._14_2_ = 0;
        auVar128 = auVar128 & auVar51;
        auVar193 = __LC13 & auVar51;
        auVar51 = auVar51 & __LC21;
        iVar73 = auVar193._0_4_ * 0x2000;
        iVar84 = auVar193._4_4_ * 0x2000;
        iVar89 = auVar193._8_4_ * 0x2000;
        iVar94 = auVar193._12_4_ * 0x2000;
        uVar143 = __LC14 + iVar73;
        uVar153 = _UNK_0010a0a4 + iVar84;
        uVar156 = _UNK_0010a0a8 + iVar89;
        uVar159 = _UNK_0010a0ac + iVar94;
        uVar100 = (int)-(uint)(auVar128._0_4_ == __LC16) >> 0x1f;
        uVar112 = (int)-(uint)(auVar128._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar117 = (int)-(uint)(auVar128._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar122 = (int)-(uint)(auVar128._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar126 = (int)-(uint)(auVar128._0_4_ == 0) >> 0x1f;
        uVar132 = (int)-(uint)(auVar128._4_4_ == 0) >> 0x1f;
        uVar136 = (int)-(uint)(auVar128._8_4_ == 0) >> 0x1f;
        uVar140 = (int)-(uint)(auVar128._12_4_ == 0) >> 0x1f;
        auVar193 = pauVar36[2];
        auVar107._4_4_ = _UNK_0010a0b4;
        auVar107._0_4_ = __LC16;
        auVar107._8_4_ = _UNK_0010a0b8;
        auVar107._12_4_ = _UNK_0010a0bc;
        auVar49 = pauVar36[2];
        auVar7._10_2_ = 0;
        auVar7._0_10_ = auVar193._0_10_;
        auVar7._12_2_ = auVar193._6_2_;
        auVar13._8_2_ = auVar193._4_2_;
        auVar13._0_8_ = auVar193._0_8_;
        auVar13._10_4_ = auVar7._10_4_;
        auVar28._6_8_ = 0;
        auVar28._0_6_ = auVar13._8_6_;
        auVar18._4_2_ = auVar193._2_2_;
        auVar18._0_4_ = auVar193._0_4_;
        auVar18._6_8_ = SUB148(auVar28 << 0x40,6);
        auVar148._0_4_ = auVar193._0_4_ & 0xffff;
        auVar148._4_10_ = auVar18._4_10_;
        auVar148._14_2_ = 0;
        auVar107 = auVar107 & auVar148;
        auVar193 = __LC13 & auVar148;
        auVar148 = auVar148 & __LC21;
        iVar74 = auVar193._0_4_ * 0x2000;
        iVar85 = auVar193._4_4_ * 0x2000;
        iVar90 = auVar193._8_4_ * 0x2000;
        iVar95 = auVar193._12_4_ * 0x2000;
        uVar173 = __LC14 + iVar74;
        uVar181 = _UNK_0010a0a4 + iVar85;
        uVar183 = _UNK_0010a0a8 + iVar90;
        uVar185 = _UNK_0010a0ac + iVar95;
        uVar160 = (int)-(uint)(auVar107._0_4_ == __LC16) >> 0x1f;
        uVar163 = (int)-(uint)(auVar107._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar164 = (int)-(uint)(auVar107._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar165 = (int)-(uint)(auVar107._12_4_ == _UNK_0010a0bc) >> 0x1f;
        uVar101 = (int)-(uint)(auVar107._0_4_ == 0) >> 0x1f;
        uVar113 = (int)-(uint)(auVar107._4_4_ == 0) >> 0x1f;
        uVar118 = (int)-(uint)(auVar107._8_4_ == 0) >> 0x1f;
        uVar123 = (int)-(uint)(auVar107._12_4_ == 0) >> 0x1f;
        uVar166 = auVar49._8_4_;
        auVar161._0_8_ = auVar49._8_8_;
        auVar161._8_4_ = uVar166;
        auVar8._10_2_ = 0;
        auVar8._0_10_ = auVar161._0_10_;
        auVar8._12_2_ = auVar49._14_2_;
        auVar14._8_2_ = auVar49._12_2_;
        auVar14._0_8_ = auVar161._0_8_;
        auVar14._10_4_ = auVar8._10_4_;
        auVar29._6_8_ = 0;
        auVar29._0_6_ = auVar14._8_6_;
        auVar19._4_2_ = auVar49._10_2_;
        auVar19._0_4_ = uVar166;
        auVar19._6_8_ = SUB148(auVar29 << 0x40,6);
        auVar162._0_4_ = uVar166 & 0xffff;
        auVar162._4_10_ = auVar19._4_10_;
        auVar162._14_2_ = 0;
        auVar176._4_4_ = _UNK_0010a0b4;
        auVar176._0_4_ = __LC16;
        auVar176._8_4_ = _UNK_0010a0b8;
        auVar176._12_4_ = _UNK_0010a0bc;
        auVar193 = __LC13 & auVar162;
        auVar49 = __LC21 & auVar162;
        iVar75 = auVar193._0_4_ * 0x2000;
        iVar86 = auVar193._4_4_ * 0x2000;
        iVar91 = auVar193._8_4_ * 0x2000;
        iVar96 = auVar193._12_4_ * 0x2000;
        auVar176 = auVar176 & auVar162;
        auVar193 = pauVar36[3];
        uVar189 = __LC14 + iVar75;
        uVar190 = _UNK_0010a0a4 + iVar86;
        uVar191 = _UNK_0010a0a8 + iVar91;
        uVar192 = _UNK_0010a0ac + iVar96;
        uVar174 = (int)-(uint)(auVar176._0_4_ == 0) >> 0x1f;
        uVar182 = (int)-(uint)(auVar176._4_4_ == 0) >> 0x1f;
        uVar184 = (int)-(uint)(auVar176._8_4_ == 0) >> 0x1f;
        uVar186 = (int)-(uint)(auVar176._12_4_ == 0) >> 0x1f;
        uVar166 = (int)-(uint)(auVar176._0_4_ == __LC16) >> 0x1f;
        uVar170 = (int)-(uint)(auVar176._4_4_ == _UNK_0010a0b4) >> 0x1f;
        uVar171 = (int)-(uint)(auVar176._8_4_ == _UNK_0010a0b8) >> 0x1f;
        uVar172 = (int)-(uint)(auVar176._12_4_ == _UNK_0010a0bc) >> 0x1f;
        auVar52._0_4_ =
             (float)(auVar51._0_4_ << 0x10 |
                    (uint)((float)(iVar73 + __LC18) + _LC20) & uVar126 |
                    ~uVar126 & (uVar100 & (uVar143 | __LC17) | ~uVar100 & uVar143)) *
             (float)local_318;
        auVar52._4_4_ =
             (float)(auVar51._4_4_ << 0x10 |
                    (uint)((float)(iVar84 + _UNK_0010a0d4) + _LC20) & uVar132 |
                    ~uVar132 & (uVar112 & (uVar153 | _UNK_0010a0c4) | ~uVar112 & uVar153)) *
             (float)local_318;
        auVar52._8_4_ =
             (float)(auVar51._8_4_ << 0x10 |
                    (uint)((float)(iVar89 + _UNK_0010a0d8) + _LC20) & uVar136 |
                    ~uVar136 & (uVar117 & (uVar156 | _UNK_0010a0c8) | ~uVar117 & uVar156)) *
             (float)local_318;
        auVar52._12_4_ =
             (float)(auVar51._12_4_ << 0x10 |
                    (uint)((float)(iVar94 + _UNK_0010a0dc) + _LC20) & uVar140 |
                    ~uVar140 & (uVar122 & (uVar159 | _UNK_0010a0cc) | ~uVar122 & uVar159)) *
             (float)local_318;
        auVar177._0_8_ =
             CONCAT44((float)(auVar77._4_4_ << 0x10 |
                             (uint)((float)(iVar57 + _UNK_0010a0d4) + _LC20) & uVar109 |
                             ~uVar109 & (uVar68 & (uVar130 | _UNK_0010a0c4) | ~uVar68 & uVar130)) *
                      (float)local_318,
                      (float)(auVar77._0_4_ << 0x10 |
                             (uint)((float)(iVar44 + __LC18) + _LC20) & uVar97 |
                             ~uVar97 & (uVar66 & (uVar124 | __LC17) | ~uVar66 & uVar124)) *
                      (float)local_318);
        auVar177._8_4_ =
             (float)(auVar77._8_4_ << 0x10 |
                    (uint)((float)(iVar59 + _UNK_0010a0d8) + _LC20) & uVar114 |
                    ~uVar114 & (uVar69 & (uVar134 | _UNK_0010a0c8) | ~uVar69 & uVar134)) *
             (float)local_318;
        auVar177._12_4_ =
             (float)(auVar77._12_4_ << 0x10 |
                    (uint)((float)(iVar61 + _UNK_0010a0dc) + _LC20) & uVar119 |
                    ~uVar119 & (uVar70 & (uVar138 | _UNK_0010a0cc) | ~uVar70 & uVar138)) *
             (float)local_318;
        auVar168._8_4_ = auVar177._8_4_;
        auVar168._0_8_ = auVar177._0_8_;
        auVar168._12_4_ = auVar177._12_4_;
        auVar178 = maxps(auVar177,auVar52);
        auVar169 = minps(auVar168,auVar52);
        auVar149._0_4_ =
             (float)(auVar148._0_4_ << 0x10 |
                    (uint)((float)(iVar74 + __LC18) + _LC20) & uVar101 |
                    ~uVar101 & (uVar160 & (uVar173 | __LC17) | ~uVar160 & uVar173)) *
             local_318._4_4_;
        auVar149._4_4_ =
             (float)(auVar148._4_4_ << 0x10 |
                    (uint)((float)(iVar85 + _UNK_0010a0d4) + _LC20) & uVar113 |
                    ~uVar113 & (uVar163 & (uVar181 | _UNK_0010a0c4) | ~uVar163 & uVar181)) *
             local_318._4_4_;
        auVar149._8_4_ =
             (float)(auVar148._8_4_ << 0x10 |
                    (uint)((float)(iVar90 + _UNK_0010a0d8) + _LC20) & uVar118 |
                    ~uVar118 & (uVar164 & (uVar183 | _UNK_0010a0c8) | ~uVar164 & uVar183)) *
             local_318._4_4_;
        auVar149._12_4_ =
             (float)(auVar148._12_4_ << 0x10 |
                    (uint)((float)(iVar95 + _UNK_0010a0dc) + _LC20) & uVar123 |
                    ~uVar123 & (uVar165 & (uVar185 | _UNK_0010a0cc) | ~uVar165 & uVar185)) *
             local_318._4_4_;
        auVar53._0_8_ =
             CONCAT44((float)(auVar50._4_4_ << 0x10 |
                             (uint)((float)(iVar82 + _UNK_0010a0d4) + _LC20) & uVar151 |
                             ~uVar151 & (uVar110 & (uVar131 | _UNK_0010a0c4) | ~uVar110 & uVar131))
                      * local_318._4_4_,
                      (float)(auVar50._0_4_ << 0x10 |
                             (uint)((float)(iVar71 + __LC18) + _LC20) & uVar141 |
                             ~uVar141 & (uVar98 & (uVar125 | __LC17) | ~uVar98 & uVar125)) *
                      local_318._4_4_);
        auVar53._8_4_ =
             (float)(auVar50._8_4_ << 0x10 |
                    (uint)((float)(iVar87 + _UNK_0010a0d8) + _LC20) & uVar154 |
                    ~uVar154 & (uVar115 & (uVar135 | _UNK_0010a0c8) | ~uVar115 & uVar135)) *
             local_318._4_4_;
        auVar53._12_4_ =
             (float)(auVar50._12_4_ << 0x10 |
                    (uint)((float)(iVar92 + _UNK_0010a0dc) + _LC20) & uVar157 |
                    ~uVar157 & (uVar120 & (uVar139 | _UNK_0010a0cc) | ~uVar120 & uVar139)) *
             local_318._4_4_;
        auVar67._0_4_ =
             (float)(auVar49._0_4_ << 0x10 |
                    (uint)((float)(iVar75 + __LC18) + _LC20) & uVar174 |
                    ~uVar174 & (uVar166 & (uVar189 | __LC17) | ~uVar166 & uVar189)) *
             (float)local_310;
        auVar67._4_4_ =
             (float)(auVar49._4_4_ << 0x10 |
                    (uint)((float)(iVar86 + _UNK_0010a0d4) + _LC20) & uVar182 |
                    ~uVar182 & (uVar170 & (uVar190 | _UNK_0010a0c4) | ~uVar170 & uVar190)) *
             (float)local_310;
        auVar67._8_4_ =
             (float)(auVar49._8_4_ << 0x10 |
                    (uint)((float)(iVar91 + _UNK_0010a0d8) + _LC20) & uVar184 |
                    ~uVar184 & (uVar171 & (uVar191 | _UNK_0010a0c8) | ~uVar171 & uVar191)) *
             (float)local_310;
        auVar67._12_4_ =
             (float)(auVar49._12_4_ << 0x10 |
                    (uint)((float)(iVar96 + _UNK_0010a0dc) + _LC20) & uVar186 |
                    ~uVar186 & (uVar172 & (uVar192 | _UNK_0010a0cc) | ~uVar172 & uVar192)) *
             (float)local_310;
        auVar179._8_4_ = auVar53._8_4_;
        auVar179._0_8_ = auVar53._0_8_;
        auVar179._12_4_ = auVar53._12_4_;
        auVar49 = maxps(auVar53,auVar149);
        auVar180 = minps(auVar179,auVar149);
        uVar46 = CONCAT44((float)(auVar127._4_4_ << 0x10 |
                                 (uint)((float)(iVar58 + _UNK_0010a0d4) + _LC20) & uVar111 |
                                 ~uVar111 & (uVar83 & (uVar152 | _UNK_0010a0c4) | ~uVar83 & uVar152)
                                 ) * (float)local_310,
                          (float)(auVar127._0_4_ << 0x10 |
                                 (uint)((float)(iVar45 + __LC18) + _LC20) & uVar99 |
                                 ~uVar99 & (uVar72 & (uVar142 | __LC17) | ~uVar72 & uVar142)) *
                          (float)local_310);
        fVar102 = (float)(auVar127._8_4_ << 0x10 |
                         (uint)((float)(iVar60 + _UNK_0010a0d8) + _LC20) & uVar116 |
                         ~uVar116 & (uVar88 & (uVar155 | _UNK_0010a0c8) | ~uVar88 & uVar155)) *
                  (float)local_310;
        fVar145 = (float)(auVar127._12_4_ << 0x10 |
                         (uint)((float)(iVar62 + _UNK_0010a0dc) + _LC20) & uVar121 |
                         ~uVar121 & (uVar93 & (uVar158 | _UNK_0010a0cc) | ~uVar93 & uVar158)) *
                  (float)local_310;
        auVar187._8_4_ = fVar102;
        auVar187._0_8_ = uVar46;
        auVar187._12_4_ = fVar145;
        auVar78._8_4_ = fVar102;
        auVar78._0_8_ = uVar46;
        auVar78._12_4_ = fVar145;
        auVar188 = minps(auVar187,auVar67);
        auVar104 = maxps(auVar78,auVar67);
        auVar150._4_4_ = -(uint)(local_278 < auVar169._4_4_);
        auVar150._0_4_ = -(uint)(local_278 < auVar169._0_4_);
        auVar150._8_4_ = -(uint)(local_278 < auVar169._8_4_);
        auVar150._12_4_ = -(uint)(local_278 < auVar169._12_4_);
        auVar64._4_4_ = -(uint)(auVar178._4_4_ < (float)local_288._0_4_);
        auVar64._0_4_ = -(uint)(auVar178._0_4_ < (float)local_288._0_4_);
        auVar64._8_4_ = -(uint)(auVar178._8_4_ < (float)local_288._0_4_);
        auVar64._12_4_ = -(uint)(auVar178._12_4_ < (float)local_288._0_4_);
        auVar129._4_4_ = -(uint)(fStack_274 < auVar180._4_4_);
        auVar129._0_4_ = -(uint)(fStack_274 < auVar180._0_4_);
        auVar129._8_4_ = -(uint)(fStack_274 < auVar180._8_4_);
        auVar129._12_4_ = -(uint)(fStack_274 < auVar180._12_4_);
        auVar108._4_4_ = -(uint)(auVar49._4_4_ < (float)local_288._4_4_);
        auVar108._0_4_ = -(uint)(auVar49._0_4_ < (float)local_288._4_4_);
        auVar108._8_4_ = -(uint)(auVar49._8_4_ < (float)local_288._4_4_);
        auVar108._12_4_ = -(uint)(auVar49._12_4_ < (float)local_288._4_4_);
        auVar54._4_4_ = -(uint)(fStack_270 < auVar188._4_4_);
        auVar54._0_4_ = -(uint)(fStack_270 < auVar188._0_4_);
        auVar54._8_4_ = -(uint)(fStack_270 < auVar188._8_4_);
        auVar54._12_4_ = -(uint)(fStack_270 < auVar188._12_4_);
        auVar79._4_4_ = -(uint)(auVar104._4_4_ < fStack_280);
        auVar79._0_4_ = -(uint)(auVar104._0_4_ < fStack_280);
        auVar79._8_4_ = -(uint)(auVar104._8_4_ < fStack_280);
        auVar79._12_4_ = -(uint)(auVar104._12_4_ < fStack_280);
        uVar69 = auVar193._12_4_;
        auVar65._8_4_ = 0xffffffff;
        auVar65._0_8_ = 0xffffffffffffffff;
        auVar65._12_4_ = 0xffffffff;
        auVar65 = (auVar64 | auVar150 | auVar108 | auVar129 | auVar54 | auVar79) ^ auVar65;
        uVar66 = movmskps((int)pfVar40,auVar65);
        pfVar40 = (float *)(ulong)uVar66;
        uVar66 = auVar65._8_4_ >> 0x1f;
        uVar66 = uVar66 & auVar193._8_4_ | ~uVar66 & uVar69;
        uVar68 = auVar65._4_4_ >> 0x1f;
        auVar55._0_4_ = auVar193._0_4_ & uVar68;
        auVar55._4_4_ = auVar193._4_4_ & uVar68;
        auVar55._8_4_ = uVar66 & uVar68;
        auVar55._12_4_ = uVar69 & uVar68;
        auVar80._0_4_ = ~uVar68 & auVar193._0_4_;
        auVar80._4_4_ = ~uVar68 & uVar66;
        auVar80._8_4_ = ~uVar68 & uVar69;
        auVar80._12_4_ = ~uVar68 & uVar69;
        uVar68 = auVar65._0_4_ >> 0x1f;
        auVar55 = auVar55 | auVar80;
        uVar66 = auVar55._12_4_;
        auVar56._0_4_ = auVar55._0_4_ & uVar68;
        auVar56._4_4_ = auVar55._4_4_ & uVar68;
        auVar56._8_4_ = auVar55._8_4_ & uVar68;
        auVar56._12_4_ = uVar66 & uVar68;
        auVar81._0_4_ = ~uVar68 & auVar55._4_4_;
        auVar81._4_4_ = ~uVar68 & auVar55._8_4_;
        auVar81._8_4_ = ~uVar68 & uVar66;
        auVar81._12_4_ = ~uVar68 & uVar66;
        iVar44 = __popcountdi2(pfVar40);
        local_458 = SUB168(auVar56 | auVar81,0);
        uStack_450 = SUB168(auVar56 | auVar81,8);
        lVar33 = (long)iVar42;
        iVar42 = iVar42 + iVar44;
        *(undefined8 *)(afStack_248 + lVar33) = local_458;
        *(undefined8 *)((long)&uStack_240 + lVar33 * 4) = uStack_450;
      }
      if (*(float *)(local_340 + 8) <= _LC1) {
LAB_00107440:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    bVar43 = iVar42 == 0;
    iVar42 = iVar42 + -1;
    if (bVar43) goto LAB_00107440;
    uVar35 = (ulong)(uint)afStack_248[iVar42];
  } while( true );
}



/* JPH::GetRTTIOfType(JPH::StaticCompoundShapeSettings*) */

undefined1 * JPH::GetRTTIOfType(StaticCompoundShapeSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::rtti,
                      "StaticCompoundShapeSettings",0x58,
                      GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::{lambda(void*)#1}::_FUN,
                      StaticCompoundShapeSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::rtti,&__dso_handle)
      ;
      __cxa_guard_release(&GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::StaticCompoundShapeSettings*)::rtti;
}



/* JPH::StaticCompoundShapeSettings::CastTo(JPH::RTTI const*) const */

void JPH::StaticCompoundShapeSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((StaticCompoundShapeSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::StaticCompoundShape::Node::SetChildInvalid(unsigned int) */

void __thiscall JPH::StaticCompoundShape::Node::SetChildInvalid(Node *this,uint param_1)

{
  Node *pNVar1;
  
  *(undefined4 *)(this + (ulong)param_1 * 4 + 0x30) = 0x7fffffff;
  pNVar1 = this + (ulong)param_1 * 2;
  *(undefined2 *)pNVar1 = 0x7bff;
  *(undefined2 *)(pNVar1 + 8) = 0x7bff;
  *(undefined2 *)(pNVar1 + 0x10) = 0x7bff;
  *(undefined2 *)(pNVar1 + 0x18) = 0x7bff;
  *(undefined2 *)(pNVar1 + 0x20) = 0x7bff;
  *(undefined2 *)(pNVar1 + 0x28) = 0x7bff;
  return;
}



/* JPH::StaticCompoundShape::Node::SetChildBounds(unsigned int, JPH::AABox const&) */

void __thiscall
JPH::StaticCompoundShape::Node::SetChildBounds(Node *this,uint param_1,AABox *param_2)

{
  Node *pNVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  
  uVar2 = *(uint *)param_2;
  uVar8 = uVar2 & 0x7fffff;
  uVar4 = uVar2 >> 0x17 & 0xff;
  uVar6 = (ushort)(uVar2 >> 0x10);
  uVar7 = uVar6 & 0x8000;
  if (uVar4 == 0xff) {
    uVar7 = (-(ushort)(uVar8 == 0) & 0xfe00) + 0x7e00 | uVar7;
  }
  else {
    iVar5 = uVar4 - 0x70;
    if (iVar5 < 0x1f) {
      if (iVar5 < -10) {
        uVar7 = 0;
        if ((int)uVar2 < 0) {
          uVar7 = (uVar2 & 0x7fffffff) != 0 | 0x8000;
        }
      }
      else {
        if (iVar5 < 1) {
          uVar8 = uVar8 | 0x800000;
          bVar3 = 0xe - (char)iVar5;
          uVar4 = (1 << (bVar3 & 0x1f)) - 1;
        }
        else {
          uVar4 = 0x1fff;
          bVar3 = 0xd;
          uVar7 = uVar7 | (short)iVar5 * 0x400;
        }
        uVar7 = (ushort)(uVar8 >> (bVar3 & 0x1f)) | uVar7;
        if ((uVar8 & uVar4) != 0) {
          uVar7 = (uVar7 + 1) - (ushort)(-1 < (int)uVar2);
        }
      }
    }
    else {
      uVar7 = uVar7 | 0x7bffU - ((short)uVar6 >> 0xf);
    }
  }
  uVar2 = *(uint *)(param_2 + 4);
  pNVar1 = this + (ulong)param_1 * 2;
  *(ushort *)pNVar1 = uVar7;
  uVar8 = uVar2 & 0x7fffff;
  uVar4 = uVar2 >> 0x17 & 0xff;
  uVar6 = (ushort)(uVar2 >> 0x10);
  uVar7 = uVar6 & 0x8000;
  if (uVar4 == 0xff) {
    uVar7 = (-(ushort)(uVar8 == 0) & 0xfe00) + 0x7e00 | uVar7;
  }
  else {
    iVar5 = uVar4 - 0x70;
    if (iVar5 < 0x1f) {
      if (iVar5 < -10) {
        uVar7 = 0;
        if ((int)uVar2 < 0) {
          uVar7 = (uVar2 & 0x7fffffff) != 0 | 0x8000;
        }
      }
      else {
        if (iVar5 < 1) {
          uVar8 = uVar8 | 0x800000;
          bVar3 = 0xe - (char)iVar5;
          uVar4 = (1 << (bVar3 & 0x1f)) - 1;
        }
        else {
          uVar4 = 0x1fff;
          bVar3 = 0xd;
          uVar7 = uVar7 | (short)iVar5 * 0x400;
        }
        uVar7 = (ushort)(uVar8 >> (bVar3 & 0x1f)) | uVar7;
        if ((uVar8 & uVar4) != 0) {
          uVar7 = (uVar7 + 1) - (ushort)(-1 < (int)uVar2);
        }
      }
    }
    else {
      uVar7 = uVar7 | 0x7bffU - ((short)uVar6 >> 0xf);
    }
  }
  uVar2 = *(uint *)(param_2 + 8);
  *(ushort *)(pNVar1 + 8) = uVar7;
  uVar8 = uVar2 & 0x7fffff;
  uVar4 = uVar2 >> 0x17 & 0xff;
  uVar6 = (ushort)(uVar2 >> 0x10);
  uVar7 = uVar6 & 0x8000;
  if (uVar4 == 0xff) {
    uVar7 = (-(ushort)(uVar8 == 0) & 0xfe00) + 0x7e00 | uVar7;
  }
  else {
    iVar5 = uVar4 - 0x70;
    if (iVar5 < 0x1f) {
      if (iVar5 < -10) {
        uVar7 = 0;
        if ((int)uVar2 < 0) {
          uVar7 = (uVar2 & 0x7fffffff) != 0 | 0x8000;
        }
      }
      else {
        if (iVar5 < 1) {
          uVar8 = uVar8 | 0x800000;
          bVar3 = 0xe - (char)iVar5;
          uVar4 = (1 << (bVar3 & 0x1f)) - 1;
        }
        else {
          uVar4 = 0x1fff;
          bVar3 = 0xd;
          uVar7 = uVar7 | (short)iVar5 * 0x400;
        }
        uVar7 = (ushort)(uVar8 >> (bVar3 & 0x1f)) | uVar7;
        if ((uVar8 & uVar4) != 0) {
          uVar7 = (uVar7 + 1) - (ushort)(-1 < (int)uVar2);
        }
      }
    }
    else {
      uVar7 = uVar7 | 0x7bffU - ((short)uVar6 >> 0xf);
    }
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  *(ushort *)(pNVar1 + 0x10) = uVar7;
  uVar8 = uVar2 & 0x7fffff;
  uVar4 = uVar2 >> 0x17 & 0xff;
  uVar6 = (ushort)(uVar2 >> 0x10);
  uVar7 = uVar6 & 0x8000;
  if (uVar4 == 0xff) {
    uVar7 = (-(ushort)(uVar8 == 0) & 0xfe00) + 0x7e00 | uVar7;
  }
  else {
    iVar5 = uVar4 - 0x70;
    if (iVar5 < 0x1f) {
      if (iVar5 < -10) {
        uVar7 = 0x8000;
        if (-1 < (int)uVar2) {
          uVar7 = (ushort)((uVar2 & 0x7fffffff) != 0);
        }
      }
      else {
        if (iVar5 < 1) {
          uVar8 = uVar8 | 0x800000;
          bVar3 = 0xe - (char)iVar5;
          uVar4 = (1 << (bVar3 & 0x1f)) - 1;
        }
        else {
          uVar4 = 0x1fff;
          bVar3 = 0xd;
          uVar7 = uVar7 | (short)iVar5 * 0x400;
        }
        uVar7 = (ushort)(uVar8 >> (bVar3 & 0x1f)) | uVar7;
        if ((uVar8 & uVar4) != 0) {
          uVar7 = (uVar7 + 1) - (ushort)((int)uVar2 < 0);
        }
      }
    }
    else {
      uVar7 = uVar7 | 0x7bffU - ((short)~uVar6 >> 0xf);
    }
  }
  uVar2 = *(uint *)(param_2 + 0x14);
  *(ushort *)(pNVar1 + 0x18) = uVar7;
  uVar8 = uVar2 & 0x7fffff;
  uVar4 = uVar2 >> 0x17 & 0xff;
  uVar6 = (ushort)(uVar2 >> 0x10);
  uVar7 = uVar6 & 0x8000;
  if (uVar4 == 0xff) {
    uVar7 = (-(ushort)(uVar8 == 0) & 0xfe00) + 0x7e00 | uVar7;
  }
  else {
    iVar5 = uVar4 - 0x70;
    if (iVar5 < 0x1f) {
      if (iVar5 < -10) {
        uVar7 = 0x8000;
        if (-1 < (int)uVar2) {
          uVar7 = (ushort)((uVar2 & 0x7fffffff) != 0);
        }
      }
      else {
        if (iVar5 < 1) {
          uVar8 = uVar8 | 0x800000;
          bVar3 = 0xe - (char)iVar5;
          uVar4 = (1 << (bVar3 & 0x1f)) - 1;
        }
        else {
          uVar4 = 0x1fff;
          bVar3 = 0xd;
          uVar7 = uVar7 | (short)iVar5 * 0x400;
        }
        uVar7 = (ushort)(uVar8 >> (bVar3 & 0x1f)) | uVar7;
        if ((uVar8 & uVar4) != 0) {
          uVar7 = (uVar7 + 1) - (ushort)((int)uVar2 < 0);
        }
      }
    }
    else {
      uVar7 = uVar7 | 0x7bffU - ((short)~uVar6 >> 0xf);
    }
  }
  uVar2 = *(uint *)(param_2 + 0x18);
  *(ushort *)(pNVar1 + 0x20) = uVar7;
  uVar8 = uVar2 & 0x7fffff;
  uVar4 = uVar2 >> 0x17 & 0xff;
  uVar6 = (ushort)(uVar2 >> 0x10);
  uVar7 = uVar6 & 0x8000;
  if (uVar4 != 0xff) {
    iVar5 = uVar4 - 0x70;
    if (0x1e < iVar5) {
      *(ushort *)(pNVar1 + 0x28) = uVar7 | 0x7bffU - ((short)~uVar6 >> 0xf);
      return;
    }
    if (iVar5 < -10) {
      uVar7 = 0x8000;
      if (-1 < (int)uVar2) {
        *(ushort *)(pNVar1 + 0x28) = (ushort)((uVar2 & 0x7fffffff) != 0);
        return;
      }
    }
    else {
      if (iVar5 < 1) {
        uVar8 = uVar8 | 0x800000;
        bVar3 = 0xe - (char)iVar5;
        uVar4 = (1 << (bVar3 & 0x1f)) - 1;
      }
      else {
        uVar4 = 0x1fff;
        bVar3 = 0xd;
        uVar7 = uVar7 | (short)iVar5 * 0x400;
      }
      uVar7 = (ushort)(uVar8 >> (bVar3 & 0x1f)) | uVar7;
      if ((uVar8 & uVar4) != 0) {
        uVar7 = (uVar7 + 1) - (ushort)((int)uVar2 < 0);
      }
    }
    *(ushort *)(pNVar1 + 0x28) = uVar7;
    return;
  }
  *(ushort *)(pNVar1 + 0x28) = (-(ushort)(uVar8 == 0) & 0xfe00) + 0x7e00 | uVar7;
  return;
}



/* JPH::StaticCompoundShape::sPartition(unsigned int*, JPH::AABox*, int, int&) */

void JPH::StaticCompoundShape::sPartition(uint *param_1,AABox *param_2,int param_3,int *param_4)

{
  if (4 < param_3) {
    sPartition(param_1,param_2,param_3,param_4);
    return;
  }
  *param_4 = param_3 / 2;
  return;
}



/* JPH::StaticCompoundShape::sPartition4(unsigned int*, JPH::AABox*, int, int, int*) */

void JPH::StaticCompoundShape::sPartition4
               (uint *param_1,AABox *param_2,int param_3,int param_4,int *param_5)

{
  uint *puVar1;
  AABox *pAVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = param_1 + param_3;
  iVar4 = param_4 - param_3;
  pAVar2 = param_2 + (long)param_3 * 0x20;
  if (iVar4 < 5) {
    iVar3 = iVar4 / 2;
    param_5[2] = iVar3;
  }
  else {
    sPartition(puVar1,pAVar2,iVar4,param_5 + 2);
    iVar3 = param_5[2];
    if (4 < iVar3) {
      sPartition(puVar1,pAVar2,iVar3,param_5 + 1);
      iVar3 = param_5[2];
      goto joined_r0x00107cc2;
    }
  }
  param_5[1] = iVar3 / 2;
joined_r0x00107cc2:
  iVar4 = iVar4 - iVar3;
  if (iVar4 < 5) {
    iVar4 = iVar4 / 2;
  }
  else {
    sPartition(puVar1 + iVar3,pAVar2 + (long)iVar3 * 0x20,iVar4,param_5 + 3);
    iVar3 = param_5[2];
    iVar4 = param_5[3];
  }
  param_5[4] = param_4;
  *(ulong *)param_5 = CONCAT44(param_5[1] + param_3,param_3);
  *(ulong *)(param_5 + 2) = CONCAT44(iVar4 + iVar3 + param_3,iVar3 + param_3);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::StaticCompoundShape::sRegister() */

void JPH::StaticCompoundShape::sRegister(void)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  
  pbVar3 = &sAllSubShapeTypes;
  _GetMassProperties = sRegister()::{lambda()#1}::_FUN;
  _GetLeafShape = (undefined4)Color::sOrange;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    *(code **)((ulong)bVar1 * 8 + 0x10b820) = sCollideCompoundVsShape;
    lVar2 = (ulong)bVar1 * 0x110;
    *(code **)(&RotatedTranslatedShapeSettings::vtable + lVar2) = sCollideShapeVsCompound;
    *(code **)(JPH::CompoundShape::GetSubShapeIDBitsRecursive + lVar2) = sCastShapeVsCompound;
  } while (pbVar3 != (byte *)0x10a042);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::StaticCompoundShape::StaticCompoundShape(JPH::StaticCompoundShapeSettings const&,
   JPH::TempAllocator&, JPH::Result<JPH::Ref<JPH::Shape> >&) */

void __thiscall
JPH::StaticCompoundShape::StaticCompoundShape
          (StaticCompoundShape *this,StaticCompoundShapeSettings *param_1,TempAllocator *param_2,
          Result *param_3)

{
  uint uVar1;
  long *plVar2;
  uint *puVar3;
  undefined2 *puVar4;
  uint *puVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char cVar19;
  uint uVar20;
  uint uVar21;
  AABox *pAVar22;
  uint *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  ulong uVar27;
  uint uVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  Node *pNVar32;
  AABox *pAVar33;
  int iVar34;
  SubShapeSettings *pSVar35;
  long in_FS_OFFSET;
  bool bVar36;
  undefined1 auVar37 [16];
  float fVar38;
  undefined1 auVar39 [16];
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
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulong uStack_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  float local_60;
  float local_5c;
  long local_40;
  
  uVar17 = _UNK_0010a068;
  uVar10 = __LC3;
  uVar16 = _UNK_0010a05c;
  uVar15 = _UNK_0010a058;
  uVar14 = _UNK_0010a054;
  uVar13 = _LC1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar26 = *(undefined8 *)(param_1 + 0x10);
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR__StaticCompoundShape_00109ee0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = uVar26;
  *(undefined2 *)(this + 0x18) = 0x701;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x68) = 0x7f7fffff;
  *(undefined8 *)(this + 0x30) = uVar10;
  *(undefined8 *)(this + 0x38) = uVar17;
  *(undefined4 *)(this + 0x40) = uVar13;
  *(undefined4 *)(this + 0x44) = uVar14;
  *(undefined4 *)(this + 0x48) = uVar15;
  *(undefined4 *)(this + 0x4c) = uVar16;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x80) = 0;
  uVar20 = (uint)*(ulong *)(param_1 + 0x40);
  if (uVar20 < 2) {
    if (param_3[0x20] == (Result)0x1) {
      plVar9 = *(long **)param_3;
      if (plVar9 != (long *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    else if ((param_3[0x20] == (Result)0x2) && (*(Result **)param_3 != param_3 + 0x10)) {
      (*Free)();
    }
    param_3[0x20] = (Result)0x0;
    *(Result **)param_3 = param_3 + 0x10;
    puVar24 = (undefined8 *)(*Allocate)(0x59);
    uVar10 = _UNK_0010a128;
    uVar26 = __LC38;
    *(undefined8 *)(param_3 + 0x10) = 0x58;
    *(undefined8 **)param_3 = puVar24;
    *puVar24 = uVar26;
    puVar24[1] = uVar10;
    uVar10 = _UNK_0010a138;
    uVar26 = __LC39;
    puVar24[10] = 0x2165706168536465;
    puVar24[2] = uVar26;
    puVar24[3] = uVar10;
    uVar26 = _UNK_0010a148;
    puVar24[4] = __LC40;
    puVar24[5] = uVar26;
    uVar26 = _UNK_0010a158;
    puVar24[6] = __LC41;
    puVar24[7] = uVar26;
    uVar26 = _UNK_0010a168;
    puVar24[8] = __LC42;
    puVar24[9] = uVar26;
    *(undefined8 *)(param_3 + 8) = 0x58;
    *(undefined1 *)(*(long *)param_3 + 0x58) = 0;
    param_3[0x20] = (Result)0x2;
LAB_00107eb7:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_001087e4;
  }
  uVar30 = *(ulong *)(param_1 + 0x40) & 0xffffffff;
  lVar31 = 0;
  lVar29 = 0;
  Array<JPH::CompoundShape::SubShape,JPH::STLAllocator<JPH::CompoundShape::SubShape>>::resize
            ((Array<JPH::CompoundShape::SubShape,JPH::STLAllocator<JPH::CompoundShape::SubShape>> *)
             (this + 0x50),uVar30);
  fVar41 = 0.0;
  do {
    pSVar35 = (SubShapeSettings *)(*(long *)(this + 0x60) + lVar31);
    cVar19 = CompoundShape::SubShape::FromSettings
                       (pSVar35,(Result *)(*(long *)(param_1 + 0x50) + lVar29));
    if (cVar19 == '\0') goto LAB_00107eb7;
    lVar29 = lVar29 + 0x40;
    lVar31 = lVar31 + 0x28;
    (**(code **)(**(long **)pSVar35 + 0x40))(&local_98);
    fVar41 = fVar41 + (float)local_98;
    auVar37._0_4_ = *(float *)(pSVar35 + 8) * (float)local_98 + *(float *)(this + 0x20);
    auVar37._4_4_ = *(float *)(pSVar35 + 0xc) * (float)local_98 + *(float *)(this + 0x24);
    auVar37._8_4_ = *(float *)(pSVar35 + 0x10) * (float)local_98 + *(float *)(this + 0x28);
    auVar37._12_4_ = *(float *)(pSVar35 + 0x14) * (float)local_98 + *(float *)(this + 0x2c);
    *(undefined1 (*) [16])(this + 0x20) = auVar37;
  } while (lVar29 != uVar30 << 6);
  if (0.0 < fVar41) {
    auVar39._4_4_ = fVar41;
    auVar39._0_4_ = fVar41;
    auVar39._8_4_ = fVar41;
    auVar39._12_4_ = fVar41;
    auVar37 = divps(auVar37,auVar39);
    *(undefined1 (*) [16])(this + 0x20) = auVar37;
  }
  puVar25 = *(undefined8 **)(this + 0x60);
  *(undefined4 *)(this + 0x68) = 0x7f7fffff;
  puVar24 = puVar25 + *(long *)(this + 0x50) * 5;
  while (puVar25 != puVar24) {
    plVar9 = (long *)*puVar25;
    puVar25 = puVar25 + 5;
    fVar41 = (float)(**(code **)(*plVar9 + 0x38))();
    if (*(float *)(this + 0x68) <= fVar41) {
      fVar41 = *(float *)(this + 0x68);
    }
    *(float *)(this + 0x68) = fVar41;
  }
  pAVar22 = (AABox *)(**(code **)(*(long *)param_2 + 0x10))(param_2);
  uVar30 = 0;
  puVar23 = (uint *)(**(code **)(*(long *)param_2 + 0x10))(param_2);
  fVar41 = _LC22;
  do {
    puVar24 = (undefined8 *)(*(long *)(this + 0x60) + uVar30 * 0x28);
    local_68 = CONCAT44(*(float *)((long)puVar24 + 0xc) - *(float *)(this + 0x24),
                        *(float *)(puVar24 + 1) - *(float *)(this + 0x20));
    local_60 = *(float *)(puVar24 + 2) - *(float *)(this + 0x28);
    puVar24[1] = local_68;
    *(float *)(puVar24 + 2) = local_60;
    if (*(char *)((long)puVar24 + 0x24) == '\0') {
      fVar38 = *(float *)((long)puVar24 + 0x14);
      fVar6 = *(float *)(puVar24 + 3);
      fVar43 = 0.0;
      fVar49 = *(float *)((long)puVar24 + 0x1c);
      fVar42 = fVar41 - (fVar49 * fVar49 + fVar6 * fVar6 + fVar38 * fVar38 + 0.0);
      if (0.0 <= fVar42) {
        fVar43 = SQRT(fVar42);
      }
      fVar40 = fVar38 + fVar38;
      fVar44 = fVar6 + fVar6;
      fVar46 = (fVar49 + fVar49) * fVar49;
      fVar48 = (fVar49 + fVar49) * fVar43;
      uStack_90 = (ulong)(uint)(fVar40 * fVar49 - fVar44 * fVar43);
      fVar42 = fVar40 * fVar49 + fVar44 * fVar43;
      fVar45 = (fVar41 - fVar38 * fVar40) - fVar44 * fVar6;
      fVar47 = fVar49 * fVar44 - fVar40 * fVar43;
      fVar43 = fVar40 * fVar43 + fVar49 * fVar44;
      fVar49 = (fVar41 - fVar46) - fVar38 * fVar40;
      fVar38 = fVar6 * fVar40 - fVar48;
      fVar48 = fVar6 * fVar40 + fVar48;
      fVar46 = (fVar41 - fVar44 * fVar6) - fVar46;
    }
    else {
      fVar48 = 0.0;
      fVar43 = 0.0;
      uStack_90 = 0;
      fVar38 = 0.0;
      fVar42 = 0.0;
      fVar47 = 0.0;
      fVar45 = fVar41;
      fVar49 = fVar41;
      fVar46 = fVar41;
    }
    local_98 = CONCAT44(fVar48,fVar46);
    local_88._4_4_ = fVar49;
    local_88._0_4_ = fVar38;
    local_88._8_4_ = fVar43;
    local_88._12_4_ = 0;
    local_78._4_4_ = fVar47;
    local_78._0_4_ = fVar42;
    local_78._8_4_ = fVar45;
    local_78._12_4_ = 0;
    local_5c = fVar41;
    (**(code **)(*(long *)*puVar24 + 0x30))
              (0x3f8000003f800000,0x3f8000003f800000,&local_b8,(long *)*puVar24,&local_98);
    bVar36 = uVar30 != uVar20 - 1;
    *(undefined8 *)(pAVar22 + uVar30 * 0x20) = local_b8;
    *(undefined8 *)(pAVar22 + uVar30 * 0x20 + 8) = uStack_b0;
    *(undefined8 *)(pAVar22 + uVar30 * 0x20 + 0x10) = local_a8;
    *(undefined8 *)(pAVar22 + uVar30 * 0x20 + 0x10 + 8) = uStack_a0;
    fVar41 = _LC22;
    auVar11._8_8_ = uStack_b0;
    auVar11._0_8_ = local_b8;
    auVar37 = minps(*(undefined1 (*) [16])(this + 0x30),auVar11);
    puVar23[uVar30] = (uint)uVar30;
    uVar30 = uVar30 + 1;
    *(undefined1 (*) [16])(this + 0x30) = auVar37;
    auVar12._8_8_ = uStack_a0;
    auVar12._0_8_ = local_a8;
    auVar37 = maxps(*(undefined1 (*) [16])(this + 0x40),auVar12);
    *(undefined1 (*) [16])(this + 0x40) = auVar37;
  } while (bVar36);
  puVar24 = (undefined8 *)(**(code **)(*(long *)param_2 + 0x10))(param_2,uVar20 << 6);
  uVar30 = (ulong)((uVar20 + 2) / 3 + uVar20);
  if (*(ulong *)(this + 0x78) < uVar30) {
    uVar26 = (*Reallocate)(*(undefined8 *)(this + 0x80),*(ulong *)(this + 0x78) << 6,uVar30 << 6);
    *(ulong *)(this + 0x78) = uVar30;
    *(undefined8 *)(this + 0x80) = uVar26;
  }
  *(ulong *)(this + 0x70) = uVar30;
  uVar18 = _UNK_0010a068;
  uVar17 = __LC3;
  iVar34 = 0;
  uVar26 = CONCAT44(_UNK_0010a054,_LC1);
  uVar10 = CONCAT44(_UNK_0010a05c,_UNK_0010a058);
  *puVar24 = 0xffffffff00000000;
  puVar24[4] = uVar17;
  puVar24[5] = uVar18;
  puVar24[6] = uVar26;
  puVar24[7] = uVar10;
  sPartition4(puVar23,pAVar22,0,uVar20,(int *)(puVar24 + 1));
  lVar29 = 0;
  uVar21 = *(uint *)((long)puVar24 + 4);
  uVar28 = 1;
  while( true ) {
    while( true ) {
      uVar1 = uVar21 + 1;
      puVar3 = (uint *)(puVar24 + lVar29 * 8);
      puVar3[1] = uVar1;
      uVar10 = _UNK_0010a068;
      uVar26 = __LC3;
      if (3 < (int)uVar1) break;
      uVar7 = puVar3[(long)(int)uVar1 + 2];
      uVar8 = puVar3[(long)(int)(uVar21 + 2) + 2];
      uVar21 = uVar1;
      if (uVar8 == uVar7) {
        lVar31 = (ulong)*puVar3 * 0x40 + *(long *)(this + 0x80);
        *(undefined4 *)(lVar31 + 0x30 + (ulong)uVar1 * 4) = 0x7fffffff;
        puVar4 = (undefined2 *)(lVar31 + (ulong)uVar1 * 2);
        *puVar4 = 0x7bff;
        puVar4[4] = 0x7bff;
        puVar4[8] = 0x7bff;
        puVar4[0xc] = 0x7bff;
        puVar4[0x10] = 0x7bff;
        puVar4[0x14] = 0x7bff;
      }
      else if (uVar8 - uVar7 == 1) {
        pNVar32 = (Node *)((ulong)*puVar3 * 0x40 + *(long *)(this + 0x80));
        pAVar33 = pAVar22 + (long)(int)uVar7 * 0x20;
        *(uint *)(pNVar32 + (long)(int)uVar1 * 4 + 0x30) = puVar23[(int)uVar7] | 0x80000000;
        Node::SetChildBounds(pNVar32,uVar1,pAVar33);
        auVar37 = minps(*(undefined1 (*) [16])(puVar3 + 8),*(undefined1 (*) [16])pAVar33);
        *(undefined1 (*) [16])(puVar3 + 8) = auVar37;
        auVar37 = maxps(*(undefined1 (*) [16])(puVar3 + 0xc),*(undefined1 (*) [16])(pAVar33 + 0x10))
        ;
        *(undefined1 (*) [16])(puVar3 + 0xc) = auVar37;
      }
      else {
        iVar34 = iVar34 + 1;
        puVar3 = (uint *)(puVar24 + lVar29 * 8 + 8);
        *puVar3 = uVar28;
        *(undefined8 *)(puVar3 + 8) = uVar26;
        *(undefined8 *)(puVar3 + 10) = uVar10;
        uVar26 = CONCAT44(_UNK_0010a054,_LC1);
        uVar10 = CONCAT44(_UNK_0010a05c,_UNK_0010a058);
        puVar3[1] = 0xffffffff;
        *(undefined8 *)(puVar3 + 0xc) = uVar26;
        *(undefined8 *)(puVar3 + 0xe) = uVar10;
        sPartition4(puVar23,pAVar22,uVar7,uVar8,(int *)(puVar3 + 2));
        lVar29 = (long)iVar34;
        uVar21 = puVar3[1];
        uVar28 = uVar28 + 1;
      }
    }
    lVar31 = *(long *)(this + 0x80);
    if (iVar34 < 1) break;
    puVar5 = (uint *)(puVar24 + lVar29 * 8 + -8);
    iVar34 = iVar34 + -1;
    auVar37 = minps(*(undefined1 (*) [16])(puVar5 + 8),*(undefined1 (*) [16])(puVar3 + 8));
    *(undefined1 (*) [16])(puVar5 + 8) = auVar37;
    auVar37 = maxps(*(undefined1 (*) [16])(puVar5 + 0xc),*(undefined1 (*) [16])(puVar3 + 0xc));
    pNVar32 = (Node *)(lVar31 + (ulong)*puVar5 * 0x40);
    uVar21 = puVar5[1];
    *(undefined1 (*) [16])(puVar5 + 0xc) = auVar37;
    *(uint *)(pNVar32 + (long)(int)uVar21 * 4 + 0x30) = *puVar3;
    Node::SetChildBounds(pNVar32,uVar21,(AABox *)(puVar3 + 8));
    lVar29 = (long)iVar34;
    uVar21 = *(uint *)((long)puVar24 + lVar29 * 0x40 + 4);
  }
  uVar27 = (ulong)uVar28;
  uVar30 = *(ulong *)(this + 0x78);
  if (uVar30 < uVar27) {
    uVar26 = (*Reallocate)(lVar31,uVar30 << 6,uVar27 << 6);
    *(undefined8 *)(this + 0x80) = uVar26;
    *(ulong *)(this + 0x70) = uVar27;
    *(ulong *)(this + 0x78) = uVar27;
LAB_0010852a:
    if (uVar28 < 0x80000001) goto LAB_0010849c;
    if (param_3[0x20] == (Result)0x1) {
      plVar9 = *(long **)param_3;
      if (plVar9 != (long *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    else if ((param_3[0x20] == (Result)0x2) && (*(Result **)param_3 != param_3 + 0x10)) {
      (*Free)();
    }
    param_3[0x20] = (Result)0x0;
    *(Result **)param_3 = param_3 + 0x10;
    puVar25 = (undefined8 *)(*Allocate)(0x26);
    uVar10 = _UNK_0010a178;
    uVar26 = __LC43;
    *(undefined8 *)(param_3 + 0x10) = 0x25;
    *(undefined8 **)param_3 = puVar25;
    *puVar25 = uVar26;
    puVar25[1] = uVar10;
    uVar26 = _UNK_0010a188;
    puVar25[2] = __LC44;
    puVar25[3] = uVar26;
    *(undefined8 *)((long)puVar25 + 0x1d) = 0x7365646f6e20796e;
    *(undefined8 *)(param_3 + 8) = 0x25;
    *(undefined1 *)(*(long *)param_3 + 0x25) = 0;
    param_3[0x20] = (Result)0x2;
  }
  else {
    *(ulong *)(this + 0x70) = uVar27;
    if (lVar31 == 0) goto LAB_0010852a;
    if (uVar27 != 0) {
      if (uVar27 < uVar30) {
        uVar26 = (*Reallocate)(lVar31,uVar30 << 6,uVar27 << 6);
        *(undefined8 *)(this + 0x80) = uVar26;
        *(ulong *)(this + 0x78) = uVar27;
      }
      goto LAB_0010852a;
    }
    (*Free)();
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x78) = 0;
LAB_0010849c:
    uVar21 = JPH::CompoundShape::GetSubShapeIDBitsRecursive();
    if (uVar21 < 0x21) {
      LOCK();
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      UNLOCK();
      if (param_3[0x20] == (Result)0x1) {
        plVar9 = *(long **)param_3;
        if (plVar9 != (long *)0x0) {
          LOCK();
          plVar2 = plVar9 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
        }
      }
      else if ((param_3[0x20] == (Result)0x2) && (*(Result **)param_3 != param_3 + 0x10)) {
        (*Free)();
      }
      *(StaticCompoundShape **)param_3 = this;
      param_3[0x20] = (Result)0x1;
    }
    else {
      Result<JPH::Ref<JPH::Shape>>::SetError
                ((Result<JPH::Ref<JPH::Shape>> *)param_3,
                 "Compound hierarchy is too deep and exceeds the amount of available sub shape ID bits"
                );
    }
  }
  (**(code **)(*(long *)param_2 + 0x18))(param_2,puVar24,uVar20 << 6);
  (**(code **)(*(long *)param_2 + 0x18))(param_2,puVar23,uVar20 * 4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00108722. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_2 + 0x18))(param_2,pAVar22,uVar20 << 5);
    return;
  }
LAB_001087e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001089fb) */
/* WARNING: Removing unreachable block (ram,0x00108b90) */
/* WARNING: Removing unreachable block (ram,0x00108a06) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::StaticCompoundShapeSettings::Create(JPH::TempAllocator&) const */

TempAllocator * JPH::StaticCompoundShapeSettings::Create(TempAllocator *param_1)

{
  long *plVar1;
  StaticCompoundShape *pSVar2;
  RotatedTranslatedShape *pRVar3;
  long lVar4;
  ulong *puVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  StaticCompoundShapeSettings SVar10;
  uint uVar11;
  int iVar12;
  StaticCompoundShape *this;
  undefined8 *puVar13;
  ulong uVar14;
  RotatedTranslatedShape *this_00;
  ulong uVar15;
  TempAllocator *in_RDX;
  StaticCompoundShapeSettings *in_RSI;
  StaticCompoundShapeSettings *pSVar16;
  StaticCompoundShapeSettings *pSVar17;
  long in_FS_OFFSET;
  byte bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  StaticCompoundShapeSettings *local_a8;
  int local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  long *local_90;
  StaticCompoundShapeSettings local_88;
  long local_80 [2];
  char local_70;
  undefined1 local_68 [16];
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  ulong uStack_40;
  long local_30;
  
  bVar18 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  SVar10 = in_RSI[0x38];
  if (SVar10 != (StaticCompoundShapeSettings)0x0) goto LAB_0010887a;
  if (*(long *)(in_RSI + 0x40) == 0) {
    *(StaticCompoundShapeSettings **)(in_RSI + 0x18) = in_RSI + 0x28;
    puVar13 = (undefined8 *)(*Allocate)(0x1c);
    uVar9 = _UNK_0010a128;
    uVar8 = __LC38;
    *(undefined8 *)(in_RSI + 0x28) = 0x1b;
    *(undefined8 **)(in_RSI + 0x18) = puVar13;
    *puVar13 = uVar8;
    puVar13[1] = uVar9;
    uVar8 = _UNK_0010a198;
    *(undefined8 *)((long)puVar13 + 0xb) = __LC46;
    *(undefined8 *)((long)puVar13 + 0x13) = uVar8;
    *(undefined8 *)(in_RSI + 0x20) = 0x1b;
    *(undefined1 *)(*(long *)(in_RSI + 0x18) + 0x1b) = 0;
    in_RSI[0x38] = (StaticCompoundShapeSettings)0x2;
    param_1[0x20] = (TempAllocator)0x2;
LAB_0010892e:
    lVar4 = *(long *)(in_RSI + 0x20);
    *(TempAllocator **)param_1 = param_1 + 0x10;
    std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
    _M_construct<char*>(param_1,*(long *)(in_RSI + 0x18),lVar4 + *(long *)(in_RSI + 0x18));
  }
  else {
    if (*(long *)(in_RSI + 0x40) == 1) {
      puVar5 = *(ulong **)(in_RSI + 0x50);
      auVar19._4_4_ = -(uint)(*(float *)((long)puVar5 + 0x14) == 0.0);
      auVar19._0_4_ = -(uint)(*(float *)(puVar5 + 2) == 0.0);
      auVar19._8_4_ = -(uint)(*(float *)(puVar5 + 3) == 0.0);
      auVar19._12_4_ = -(uint)(*(float *)((long)puVar5 + 0x1c) == 0.0);
      uVar11 = movmskps(1,auVar19);
      if (((~uVar11 & 7) != 0) ||
         (auVar20._4_4_ = -(uint)(*(float *)((long)puVar5 + 0x24) == _UNK_0010a084),
         auVar20._0_4_ = -(uint)(*(float *)(puVar5 + 4) == __LC12),
         auVar20._8_4_ = -(uint)(*(float *)(puVar5 + 5) == _UNK_0010a088),
         auVar20._12_4_ = -(uint)(*(float *)((long)puVar5 + 0x2c) == _LC22),
         iVar12 = movmskps(~uVar11,auVar20), iVar12 != 0xf)) {
        local_68 = (undefined1  [16])0x0;
        local_58 = puVar5[2];
        uStack_50 = puVar5[3];
        local_48 = puVar5[4];
        uStack_40 = puVar5[5];
        uVar15 = *puVar5;
        if (uVar15 == 0) {
          uVar14 = puVar5[1];
          if (uVar14 != 0) {
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar14;
            local_68 = auVar7 << 0x40;
            goto LAB_00108a14;
          }
        }
        else {
          local_68._8_8_ = 0;
          local_68._0_8_ = uVar15;
          LOCK();
          *(int *)(uVar15 + 8) = *(int *)(uVar15 + 8) + 1;
          UNLOCK();
          uVar14 = puVar5[1];
          if ((uVar14 != 0) && (local_68._8_8_ = uVar14, uVar14 != 0)) {
LAB_00108a14:
            LOCK();
            *(int *)(uVar14 + 8) = *(int *)(uVar14 + 8) + 1;
            UNLOCK();
          }
        }
        local_70 = '\0';
        local_98 = 0;
        local_a0 = 0;
        local_a8 = (StaticCompoundShapeSettings *)&DecoratedShapeSettings::vtable;
        this_00 = (RotatedTranslatedShape *)(*Allocate)(0x50);
        JPH::RotatedTranslatedShape::RotatedTranslatedShape
                  (this_00,(RotatedTranslatedShapeSettings *)&local_a8,(Result *)(in_RSI + 0x18));
        pRVar3 = this_00 + 8;
        LOCK();
        *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
        UNLOCK();
        LOCK();
        *(int *)pRVar3 = *(int *)pRVar3 + -1;
        UNLOCK();
        if (*(int *)pRVar3 == 0) {
          (**(code **)(*(long *)this_00 + 8))(this_00);
        }
        local_a8 = (StaticCompoundShapeSettings *)&__cxxabiv1::__si_class_type_info::vtable;
        if ((long *)local_68._8_8_ != (long *)0x0) {
          LOCK();
          plVar6 = (long *)(local_68._8_8_ + 8);
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)(*(long *)local_68._8_8_ + 8))();
          }
        }
        if ((long *)local_68._0_8_ != (long *)0x0) {
          LOCK();
          plVar6 = (long *)(local_68._0_8_ + 8);
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)(*(long *)local_68._0_8_ + 0x18))();
          }
        }
        local_a8 = (StaticCompoundShapeSettings *)&CollisionDispatch::sCastShape;
        if (local_70 == '\x01') {
          if (local_90 != (long *)0x0) {
            LOCK();
            plVar6 = local_90 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)(*local_90 + 8))();
            }
          }
        }
        else if ((local_70 == '\x02') && (local_90 != local_80)) {
          (*Free)();
        }
        goto LAB_00108876;
      }
      uVar15 = puVar5[1];
      if (uVar15 == 0) {
        if ((long *)*puVar5 == (long *)0x0) {
          Result<JPH::Ref<JPH::Shape>>::SetError
                    ((Result<JPH::Ref<JPH::Shape>> *)(in_RSI + 0x18),"Sub shape is null!");
          SVar10 = in_RSI[0x38];
          goto LAB_0010887a;
        }
        (**(code **)(*(long *)*puVar5 + 0x20))(&local_a8);
        if (in_RSI[0x38] == (StaticCompoundShapeSettings)0x1) {
          plVar6 = *(long **)(in_RSI + 0x18);
          if (plVar6 != (long *)0x0) {
            LOCK();
            plVar1 = plVar6 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar6 + 8))();
            }
          }
        }
        else if ((in_RSI[0x38] == (StaticCompoundShapeSettings)0x2) &&
                (*(StaticCompoundShapeSettings **)(in_RSI + 0x18) != in_RSI + 0x28)) {
          (*Free)();
        }
        in_RSI[0x38] = local_88;
        if (local_88 != (StaticCompoundShapeSettings)0x1) {
          if (local_88 != (StaticCompoundShapeSettings)0x2) {
            *(StaticCompoundShapeSettings *)(param_1 + 0x20) = local_88;
            goto LAB_00108889;
          }
          *(StaticCompoundShapeSettings **)(in_RSI + 0x18) = in_RSI + 0x28;
          if (local_a8 != (StaticCompoundShapeSettings *)&local_98) {
            *(StaticCompoundShapeSettings **)(in_RSI + 0x18) = local_a8;
            *(ulong *)(in_RSI + 0x20) = CONCAT44(uStack_9c,local_a0);
            *(undefined8 *)(in_RSI + 0x28) = local_98;
            param_1[0x20] = (TempAllocator)0x2;
            goto LAB_0010892e;
          }
          pSVar16 = local_a8;
          pSVar17 = in_RSI + 0x28;
          for (uVar15 = (ulong)(local_a0 + 1); uVar15 != 0; uVar15 = uVar15 - 1) {
            *pSVar17 = *pSVar16;
            pSVar16 = pSVar16 + (ulong)bVar18 * -2 + 1;
            pSVar17 = pSVar17 + (ulong)bVar18 * -2 + 1;
          }
          *(ulong *)(in_RSI + 0x20) = CONCAT44(uStack_9c,local_a0);
          SVar10 = in_RSI[0x38];
          goto LAB_0010887a;
        }
        *(StaticCompoundShapeSettings **)(in_RSI + 0x18) = local_a8;
        param_1[0x20] = (TempAllocator)0x1;
        goto LAB_001088c0;
      }
      LOCK();
      *(int *)(uVar15 + 8) = *(int *)(uVar15 + 8) + 1;
      UNLOCK();
      if (in_RSI[0x38] == (StaticCompoundShapeSettings)0x1) {
        plVar6 = *(long **)(in_RSI + 0x18);
        if (plVar6 != (long *)0x0) {
          LOCK();
          plVar1 = plVar6 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      else if ((in_RSI[0x38] == (StaticCompoundShapeSettings)0x2) &&
              (*(StaticCompoundShapeSettings **)(in_RSI + 0x18) != in_RSI + 0x28)) {
        (*Free)();
      }
      *(ulong *)(in_RSI + 0x18) = uVar15;
      in_RSI[0x38] = (StaticCompoundShapeSettings)0x1;
      param_1[0x20] = (TempAllocator)0x1;
      *(ulong *)param_1 = uVar15;
    }
    else {
      this = (StaticCompoundShape *)(*Allocate)(0x90);
      StaticCompoundShape::StaticCompoundShape(this,in_RSI,in_RDX,(Result *)(in_RSI + 0x18));
      pSVar2 = this + 8;
      LOCK();
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      UNLOCK();
      LOCK();
      *(int *)pSVar2 = *(int *)pSVar2 + -1;
      UNLOCK();
      if (*(int *)pSVar2 == 0) {
        (**(code **)(*(long *)this + 8))(this);
      }
LAB_00108876:
      SVar10 = in_RSI[0x38];
LAB_0010887a:
      *(StaticCompoundShapeSettings *)(param_1 + 0x20) = SVar10;
      if (SVar10 != (StaticCompoundShapeSettings)0x1) {
        if (SVar10 != (StaticCompoundShapeSettings)0x2) goto LAB_00108889;
        goto LAB_0010892e;
      }
LAB_001088c0:
      uVar15 = *(ulong *)(in_RSI + 0x18);
      *(ulong *)param_1 = uVar15;
      if (uVar15 == 0) goto LAB_00108889;
    }
    LOCK();
    *(int *)(uVar15 + 8) = *(int *)(uVar15 + 8) + 1;
    UNLOCK();
  }
LAB_00108889:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* JPH::StaticCompoundShapeSettings::Create() const */

StaticCompoundShapeSettings * __thiscall
JPH::StaticCompoundShapeSettings::Create(StaticCompoundShapeSettings *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Create((TempAllocator *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::Shape::SaveMaterialState(JPH::Array<JPH::RefConst<JPH::PhysicsMaterial>,
   JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial> > >&) const */

void JPH::Shape::SaveMaterialState(Array *param_1)

{
  return;
}



/* JPH::Shape::RestoreMaterialState(JPH::RefConst<JPH::PhysicsMaterial> const*, unsigned int) */

void JPH::Shape::RestoreMaterialState(RefConst *param_1,uint param_2)

{
  return;
}



/* JPH::CompoundShape::GetCenterOfMass() const */

undefined1  [16] __thiscall JPH::CompoundShape::GetCenterOfMass(CompoundShape *this)

{
  return *(undefined1 (*) [16])(this + 0x20);
}



/* JPH::CompoundShape::GetLocalBounds() const */

void JPH::CompoundShape::GetLocalBounds(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_RSI;
  undefined8 *in_RDI;
  
  uVar1 = *(undefined8 *)(in_RSI + 0x38);
  uVar2 = *(undefined8 *)(in_RSI + 0x40);
  uVar3 = *(undefined8 *)(in_RSI + 0x48);
  *in_RDI = *(undefined8 *)(in_RSI + 0x30);
  in_RDI[1] = uVar1;
  in_RDI[2] = uVar2;
  in_RDI[3] = uVar3;
  return;
}



/* JPH::CompoundShape::GetInnerRadius() const */

undefined4 __thiscall JPH::CompoundShape::GetInnerRadius(CompoundShape *this)

{
  return *(undefined4 *)(this + 0x68);
}



/* JPH::CompoundShape::GetTrianglesStart(JPH::Shape::GetTrianglesContext&, JPH::AABox const&,
   JPH::Vec3, JPH::Quat, JPH::Vec3) const */

void JPH::CompoundShape::GetTrianglesStart(void)

{
  return;
}



/* JPH::CompoundShape::GetTrianglesNext(JPH::Shape::GetTrianglesContext&, int, JPH::Float3*,
   JPH::PhysicsMaterial const**) const */

undefined8
JPH::CompoundShape::GetTrianglesNext
          (GetTrianglesContext *param_1,int param_2,Float3 *param_3,PhysicsMaterial **param_4)

{
  return 0;
}



/* JPH::StaticCompoundShape::GetStats() const */

undefined1  [16] __thiscall JPH::StaticCompoundShape::GetStats(StaticCompoundShape *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(long *)(this + 0x70) * 0x40 + 0x90 + *(long *)(this + 0x50) * 0x28;
  return auVar1;
}



/* JPH::TempAllocatorMalloc::Allocate(unsigned int) */

undefined8 __thiscall JPH::TempAllocatorMalloc::Allocate(TempAllocatorMalloc *this,uint param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00108e4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*AlignedAllocate)(param_1,0x10);
    return uVar1;
  }
  return 0;
}



/* JPH::TempAllocatorMalloc::Free(void*, unsigned int) */

void JPH::TempAllocatorMalloc::Free(void *param_1,uint param_2)

{
  undefined4 in_register_00000034;
  
  if (CONCAT44(in_register_00000034,param_2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00108e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*AlignedFree)(CONCAT44(in_register_00000034,param_2));
    return;
  }
  return;
}



/* JPH::TempAllocatorMalloc::~TempAllocatorMalloc() */

void __thiscall JPH::TempAllocatorMalloc::~TempAllocatorMalloc(TempAllocatorMalloc *this)

{
  return;
}



/* JPH::TempAllocatorMalloc::~TempAllocatorMalloc() */

void __thiscall JPH::TempAllocatorMalloc::~TempAllocatorMalloc(TempAllocatorMalloc *this)

{
                    /* WARNING: Could not recover jumptable at 0x00108e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*JPH::Free)();
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::StaticCompoundShape::~StaticCompoundShape() */

void __thiscall JPH::StaticCompoundShape::~StaticCompoundShape(StaticCompoundShape *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  *(undefined ***)this = &PTR__StaticCompoundShape_00109ee0;
  if (*(long *)(this + 0x80) != 0) {
    *(undefined8 *)(this + 0x70) = 0;
    (*Free)();
  }
  plVar4 = *(long **)(this + 0x60);
  *(code **)this = JPH::RTTI::RTTI;
  if (plVar4 == (long *)0x0) {
    return;
  }
  if ((*(long *)(this + 0x50) != 0) &&
     (plVar2 = plVar4 + *(long *)(this + 0x50) * 5, plVar4 < plVar2)) {
    do {
      while (plVar3 = (long *)*plVar4, plVar3 == (long *)0x0) {
LAB_00108f50:
        plVar4 = plVar4 + 5;
        if (plVar2 <= plVar4) goto LAB_00108f80;
      }
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) goto LAB_00108f50;
      plVar4 = plVar4 + 5;
      (**(code **)(*plVar3 + 8))();
    } while (plVar4 < plVar2);
LAB_00108f80:
    plVar4 = *(long **)(this + 0x60);
  }
  *(undefined8 *)(this + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00108f93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(plVar4);
  return;
}



/* JPH::StaticCompoundShape::~StaticCompoundShape() */

void __thiscall JPH::StaticCompoundShape::~StaticCompoundShape(StaticCompoundShape *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  *(undefined ***)this = &PTR__StaticCompoundShape_00109ee0;
  if (*(long *)(this + 0x80) != 0) {
    *(undefined8 *)(this + 0x70) = 0;
    (*Free)();
  }
  plVar4 = *(long **)(this + 0x60);
  *(code **)this = JPH::RTTI::RTTI;
  if (plVar4 != (long *)0x0) {
    if ((*(long *)(this + 0x50) != 0) &&
       (plVar2 = plVar4 + *(long *)(this + 0x50) * 5, plVar4 < plVar2)) {
      do {
        while (plVar3 = (long *)*plVar4, plVar3 == (long *)0x0) {
LAB_00109010:
          plVar4 = plVar4 + 5;
          if (plVar2 <= plVar4) goto LAB_00109040;
        }
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) goto LAB_00109010;
        plVar4 = plVar4 + 5;
        (**(code **)(*plVar3 + 8))();
      } while (plVar4 < plVar2);
LAB_00109040:
      plVar4 = *(long **)(this + 0x60);
    }
    *(undefined8 *)(this + 0x50) = 0;
    (*Free)(plVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0010905c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::StaticCompoundShapeSettings::~StaticCompoundShapeSettings() */

void __thiscall
JPH::StaticCompoundShapeSettings::~StaticCompoundShapeSettings(StaticCompoundShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(this + 0x50);
  *(code **)this = __popcountdi2;
  if (plVar3 != (long *)0x0) {
    if ((*(long *)(this + 0x40) != 0) &&
       (plVar4 = plVar3 + *(long *)(this + 0x40) * 8, plVar3 < plVar4)) {
      do {
        plVar2 = (long *)plVar3[1];
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar2 + 8))();
          }
        }
        plVar2 = (long *)*plVar3;
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar2 + 0x18))();
          }
        }
        plVar3 = plVar3 + 8;
      } while (plVar3 < plVar4);
      plVar3 = *(long **)(this + 0x50);
    }
    *(undefined8 *)(this + 0x40) = 0;
    (*Free)(plVar3);
  }
  *(undefined8 **)this = &CollisionDispatch::sCastShape;
  if (this[0x38] == (StaticCompoundShapeSettings)0x1) {
    plVar3 = *(long **)(this + 0x18);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00109162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 8))();
        return;
      }
    }
  }
  else if ((this[0x38] == (StaticCompoundShapeSettings)0x2) &&
          (*(StaticCompoundShapeSettings **)(this + 0x18) != this + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010911d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::StaticCompoundShapeSettings::~StaticCompoundShapeSettings() */

void __thiscall
JPH::StaticCompoundShapeSettings::~StaticCompoundShapeSettings(StaticCompoundShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(this + 0x50);
  *(code **)this = __popcountdi2;
  if (plVar3 != (long *)0x0) {
    if ((*(long *)(this + 0x40) != 0) &&
       (plVar4 = plVar3 + *(long *)(this + 0x40) * 8, plVar3 < plVar4)) {
      do {
        plVar2 = (long *)plVar3[1];
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar2 + 8))();
          }
        }
        plVar2 = (long *)*plVar3;
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar2 + 0x18))();
          }
        }
        plVar3 = plVar3 + 8;
      } while (plVar3 < plVar4);
      plVar3 = *(long **)(this + 0x50);
    }
    *(undefined8 *)(this + 0x40) = 0;
    (*Free)(plVar3);
  }
  *(undefined8 **)this = &CollisionDispatch::sCastShape;
  if (this[0x38] == (StaticCompoundShapeSettings)0x1) {
    plVar3 = *(long **)(this + 0x18);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
  }
  else if ((this[0x38] == (StaticCompoundShapeSettings)0x2) &&
          (*(StaticCompoundShapeSettings **)(this + 0x18) != this + 0x28)) {
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x0010921a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CompoundShape::SubShape::FromSettings(JPH::CompoundShapeSettings::SubShapeSettings const&,
   JPH::Result<JPH::Ref<JPH::Shape> >&) */

undefined8 JPH::CompoundShape::SubShape::FromSettings(SubShapeSettings *param_1,Result *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  SubShapeSettings SVar9;
  undefined8 uVar10;
  long *plVar11;
  long *in_RDX;
  long *plVar12;
  long in_FS_OFFSET;
  float fVar13;
  undefined8 uVar14;
  undefined1 auVar15 [12];
  float in_XMM1_Da;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  long *local_48 [2];
  long local_38 [2];
  char local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar11 = *(long **)(param_2 + 8);
  if (plVar11 == (long *)0x0) {
    (**(code **)(**(long **)param_2 + 0x20))(local_48);
    if (local_28 != '\x01') {
      if ((char)in_RDX[4] == '\x01') {
        plVar11 = (long *)*in_RDX;
        if (plVar11 != (long *)0x0) {
          LOCK();
          plVar12 = plVar11 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)(*plVar11 + 8))();
          }
          goto LAB_00109543;
        }
LAB_00109698:
        *(char *)(in_RDX + 4) = local_28;
LAB_0010969d:
        if (local_28 == '\x02') {
          *in_RDX = (long)(in_RDX + 2);
          std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
          _M_construct<char*>();
LAB_001096c4:
          if (local_28 == '\x01') {
            if (local_48[0] != (long *)0x0) {
              LOCK();
              plVar11 = local_48[0] + 1;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)*plVar11 == 0) {
                (**(code **)(*local_48[0] + 8))();
                uVar10 = 0;
                goto LAB_001094d3;
              }
            }
          }
          else if ((local_28 == '\x02') && (local_48[0] != local_38)) {
            (*Free)();
          }
        }
      }
      else {
        if (((char)in_RDX[4] != '\x02') || ((long *)*in_RDX == in_RDX + 2)) goto LAB_00109698;
        (*Free)();
LAB_00109543:
        *(char *)(in_RDX + 4) = local_28;
        if (local_28 != '\x01') goto LAB_0010969d;
        *in_RDX = (long)local_48[0];
        if (local_48[0] != (long *)0x0) {
          LOCK();
          *(int *)(local_48[0] + 1) = (int)local_48[0][1] + 1;
          UNLOCK();
          goto LAB_001096c4;
        }
      }
      uVar10 = 0;
      goto LAB_001094d3;
    }
    plVar11 = *(long **)param_1;
    if (plVar11 == local_48[0]) {
LAB_00109668:
      if (local_48[0] != (long *)0x0) {
        LOCK();
        plVar11 = local_48[0] + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)(*local_48[0] + 8))();
          plVar12 = *(long **)param_1;
          goto LAB_001092d9;
        }
      }
    }
    else {
      if (plVar11 != (long *)0x0) {
        LOCK();
        plVar12 = plVar11 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
      *(long **)param_1 = local_48[0];
      if (local_48[0] == (long *)0x0) {
        if (local_28 != '\x01') {
          plVar12 = (long *)0x0;
          if (local_28 != '\x02') goto LAB_001092d9;
LAB_00109623:
          (*Free)();
        }
      }
      else {
        LOCK();
        *(int *)(local_48[0] + 1) = (int)local_48[0][1] + 1;
        UNLOCK();
        if (local_28 == '\x01') goto LAB_00109668;
        if ((local_28 == '\x02') && (local_48[0] != local_38)) goto LAB_00109623;
      }
    }
    plVar12 = *(long **)param_1;
  }
  else {
    plVar12 = *(long **)param_1;
    if (plVar11 != plVar12) {
      if (plVar12 == (long *)0x0) {
        *(long **)param_1 = plVar11;
      }
      else {
        LOCK();
        plVar11 = plVar12 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
        plVar11 = *(long **)(param_2 + 8);
        *(long **)param_1 = plVar11;
        plVar12 = plVar11;
        if (plVar11 == (long *)0x0) goto LAB_001092d9;
      }
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      plVar12 = *(long **)param_1;
    }
  }
LAB_001092d9:
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x30);
  uVar14 = (**(code **)(*plVar12 + 0x18))();
  fVar7 = _LC22;
  fVar6 = _UNK_0010a088;
  fVar5 = _UNK_0010a084;
  fVar4 = __LC12;
  local_78 = (float)uVar10;
  fStack_74 = (float)((ulong)uVar10 >> 0x20);
  fStack_70 = (float)uVar1;
  fStack_6c = (float)((ulong)uVar1 >> 0x20);
  local_60 = (float)uVar14;
  fStack_5c = (float)((ulong)uVar14 >> 0x20);
  fVar18 = (float)(_LC33 ^ (uint)local_78);
  fVar19 = (float)(_UNK_0010a0f4 ^ (uint)fStack_74);
  fVar20 = (float)(_UNK_0010a0f8 ^ (uint)fStack_70);
  fVar21 = (float)(_UNK_0010a0fc ^ (uint)fStack_6c);
  fVar22 = (fStack_6c * local_60 + local_78 * 0.0 + fStack_74 * in_XMM1_Da) - fStack_70 * fStack_5c;
  fVar17 = (fStack_6c * fStack_5c - local_78 * in_XMM1_Da) + fStack_74 * 0.0 + fStack_70 * local_60;
  fVar16 = ((fStack_6c * in_XMM1_Da + local_78 * fStack_5c) - fStack_74 * local_60) +
           fStack_70 * 0.0;
  fVar13 = ((fStack_6c * 0.0 - local_78 * local_60) - fStack_74 * fStack_5c) -
           fStack_70 * in_XMM1_Da;
  local_58 = (float)uVar2;
  fStack_54 = (float)((ulong)uVar2 >> 0x20);
  fStack_50 = (float)uVar3;
  *(ulong *)(param_1 + 8) =
       CONCAT44(fVar16 * fVar18 + (fVar19 * fVar13 - fVar22 * fVar20) + fVar17 * fVar21 + fStack_54,
                ((fVar22 * fVar21 + fVar18 * fVar13 + fVar17 * fVar20) - fVar16 * fVar19) + local_58
               );
  *(float *)(param_1 + 0x10) =
       fVar16 * fVar21 + ((fVar22 * fVar19 + fVar20 * fVar13) - fVar17 * fVar18) + fStack_50;
  uVar8 = _LC33;
  fVar13 = fVar4 - local_78;
  fVar16 = fVar5 - fStack_74;
  fVar17 = fVar6 - fStack_70;
  if ((fVar13 * fVar13 + fVar16 * fVar16 +
       fVar17 * fVar17 + (fVar7 - fStack_6c) * (fVar7 - fStack_6c) <= _LC30) ||
     ((__LC31 - local_78) * (__LC31 - local_78) +
      (_UNK_0010a114 - fStack_74) * (_UNK_0010a114 - fStack_74) +
      (_UNK_0010a118 - fStack_70) * (_UNK_0010a118 - fStack_70) +
      (_UNK_0010a11c - fStack_6c) * (_UNK_0010a11c - fStack_6c) <= _LC30)) {
    SVar9 = (SubShapeSettings)0x1;
    auVar15._4_4_ = _LC22;
    auVar15._0_4_ = _LC22;
    auVar15._8_4_ = _LC22;
    local_78 = fVar4;
    fStack_74 = fVar5;
    fStack_70 = fVar6;
  }
  else {
    SVar9 = (SubShapeSettings)0x0;
    auVar15._4_4_ = fStack_6c;
    auVar15._0_4_ = fStack_6c;
    auVar15._8_4_ = fStack_6c;
  }
  param_1[0x24] = SVar9;
  uVar10 = 1;
  *(ulong *)(param_1 + 0x14) =
       CONCAT44((uint)fStack_74 ^ auVar15._4_4_ & uVar8,(uint)local_78 ^ auVar15._0_4_ & uVar8);
  *(uint *)(param_1 + 0x1c) = (uint)fStack_70 ^ auVar15._8_4_ & uVar8;
LAB_001094d3:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



/* JPH::CompoundShape::SubShape::TransformScale(JPH::Vec3) const */

undefined1  [16]
JPH::CompoundShape::SubShape::TransformScale(undefined8 param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
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
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_28 = (float)param_1;
  uStack_24 = (float)((ulong)param_1 >> 0x20);
  uStack_20 = (float)param_2;
  uStack_1c = (undefined4)((ulong)param_2 >> 0x20);
  if ((*(char *)(param_3 + 0x24) == '\0') &&
     (_LC34 < (uStack_20 - local_28) * (uStack_20 - local_28) +
              (uStack_24 - uStack_20) * (uStack_24 - uStack_20) +
              (local_28 - uStack_24) * (local_28 - uStack_24) + 0.0)) {
    fVar4 = *(float *)(param_3 + 0x14);
    fVar11 = *(float *)(param_3 + 0x18);
    fVar6 = 0.0;
    fVar1 = *(float *)(param_3 + 0x1c);
    fVar7 = _LC22 - (fVar1 * fVar1 + fVar11 * fVar11 + fVar4 * fVar4 + 0.0);
    if (0.0 <= fVar7) {
      fVar6 = SQRT(fVar7);
    }
    fVar8 = fVar4 + fVar4;
    fVar13 = fVar11 + fVar11;
    fVar7 = (fVar1 + fVar1) * fVar1;
    fVar5 = (fVar1 + fVar1) * fVar6;
    fVar10 = (_LC22 - fVar4 * fVar8) - fVar13 * fVar11;
    fVar14 = (_LC22 - fVar7) - fVar4 * fVar8;
    fVar15 = fVar11 * fVar8 - fVar5;
    fVar7 = (_LC22 - fVar13 * fVar11) - fVar7;
    fVar5 = fVar5 + fVar11 * fVar8;
    fVar12 = fVar8 * fVar1 + fVar13 * fVar6;
    fVar9 = fVar8 * fVar1 - fVar13 * fVar6;
    fVar4 = fVar1 * fVar13 + fVar8 * fVar6;
    fVar11 = fVar1 * fVar13 - fVar8 * fVar6;
    fVar11 = fVar11 * uStack_24 * fVar11 + fVar12 * local_28 * fVar12 + fVar10 * uStack_20 * fVar10;
    auVar3._4_4_ = fVar4 * uStack_20 * fVar4 +
                   fVar15 * fVar15 * local_28 + fVar14 * fVar14 * uStack_24;
    auVar3._0_4_ = fVar9 * uStack_20 * fVar9 + fVar5 * uStack_24 * fVar5 + fVar7 * local_28 * fVar7;
    auVar3._8_4_ = fVar11;
    auVar3._12_4_ = fVar11;
    return auVar3;
  }
  auVar2._8_4_ = uStack_20;
  auVar2._0_8_ = param_1;
  auVar2._12_4_ = uStack_1c;
  return auVar2;
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
      goto LAB_00109a74;
    }
    if (__n == 0) goto LAB_00109a74;
  }
  else {
    __dest = (Result<JPH::Ref<JPH::Shape>> *)(*Allocate)(__n + 1);
    *(size_t *)(this + 0x10) = __n;
    *(Result<JPH::Ref<JPH::Shape>> **)this = __dest;
  }
  memcpy(__dest,param_1,__n);
  __dest = *(Result<JPH::Ref<JPH::Shape>> **)this;
LAB_00109a74:
  *(size_t *)(this + 8) = __n;
  __dest[__n] = (Result<JPH::Ref<JPH::Shape>>)0x0;
  this[0x20] = (Result<JPH::Ref<JPH::Shape>>)0x2;
  return;
}



/* JPH::Array<JPH::CompoundShape::SubShape, JPH::STLAllocator<JPH::CompoundShape::SubShape>
   >::resize(unsigned long) */

void __thiscall
JPH::Array<JPH::CompoundShape::SubShape,JPH::STLAllocator<JPH::CompoundShape::SubShape>>::resize
          (Array<JPH::CompoundShape::SubShape,JPH::STLAllocator<JPH::CompoundShape::SubShape>> *this
          ,ulong param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  uVar2 = *(ulong *)this;
  if (param_1 < uVar2) {
    lVar3 = *(long *)(this + 0x10);
    for (puVar8 = (undefined8 *)(lVar3 + param_1 * 0x28);
        puVar8 < (undefined8 *)(lVar3 + uVar2 * 0x28); puVar8 = puVar8 + 5) {
      plVar4 = (long *)*puVar8;
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  if (*(ulong *)(this + 8) < param_1) {
    puVar5 = (undefined8 *)(*Allocate)(param_1 * 0x28);
    puVar8 = *(undefined8 **)(this + 0x10);
    if (puVar8 != (undefined8 *)0x0) {
      lVar3 = *(long *)this;
      if (puVar5 < puVar8) {
        for (puVar6 = puVar5; puVar6 < puVar5 + lVar3 * 5; puVar6 = puVar6 + 5) {
          *puVar6 = *puVar8;
          puVar6[1] = puVar8[1];
          *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar8 + 2);
          *(undefined8 *)((long)puVar6 + 0x14) = *(undefined8 *)((long)puVar8 + 0x14);
          *(undefined4 *)((long)puVar6 + 0x1c) = *(undefined4 *)((long)puVar8 + 0x1c);
          *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(puVar8 + 4);
          *(undefined1 *)((long)puVar6 + 0x24) = *(undefined1 *)((long)puVar8 + 0x24);
          puVar8 = puVar8 + 5;
        }
      }
      else {
        puVar8 = puVar8 + lVar3 * 5 + -5;
        puVar6 = puVar5 + lVar3 * 5 + -5;
        if (!CARRY8(lVar3 * 0x28 - 0x28,(ulong)puVar5)) {
          do {
            puVar7 = puVar6 + -5;
            *puVar6 = *puVar8;
            puVar6[1] = puVar8[1];
            *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar8 + 2);
            *(undefined8 *)((long)puVar6 + 0x14) = *(undefined8 *)((long)puVar8 + 0x14);
            *(undefined4 *)((long)puVar6 + 0x1c) = *(undefined4 *)((long)puVar8 + 0x1c);
            *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(puVar8 + 4);
            *(undefined1 *)((long)puVar6 + 0x24) = *(undefined1 *)((long)puVar8 + 0x24);
            puVar6 = puVar7;
            puVar8 = puVar8 + -5;
          } while (puVar5 <= puVar7);
        }
      }
      (*Free)();
    }
    *(undefined8 **)(this + 0x10) = puVar5;
    *(ulong *)(this + 8) = param_1;
  }
  else {
    puVar5 = *(undefined8 **)(this + 0x10);
  }
  for (puVar8 = puVar5 + *(long *)this * 5; puVar8 < puVar5 + param_1 * 5; puVar8 = puVar8 + 5) {
    *puVar8 = 0;
  }
  *(ulong *)this = param_1;
  return;
}



/* JPH::GetRTTIOfType(JPH::StaticCompoundShapeSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC47;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::StaticCompoundShapeSettings::~StaticCompoundShapeSettings() */

void __thiscall
JPH::StaticCompoundShapeSettings::~StaticCompoundShapeSettings(StaticCompoundShapeSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::StaticCompoundShape::~StaticCompoundShape() */

void __thiscall JPH::StaticCompoundShape::~StaticCompoundShape(StaticCompoundShape *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* JPH::TempAllocatorMalloc::~TempAllocatorMalloc() */

void __thiscall JPH::TempAllocatorMalloc::~TempAllocatorMalloc(TempAllocatorMalloc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
