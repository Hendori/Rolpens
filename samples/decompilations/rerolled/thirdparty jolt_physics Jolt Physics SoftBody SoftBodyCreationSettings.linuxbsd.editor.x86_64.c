/* JPH::SoftBodyCreationSettings::sCreateRTTI(JPH::RTTI&) */void JPH::SoftBodyCreationSettings::sCreateRTTI(RTTI *param_1) {
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::HashTable<JPH::GroupFilter const*, std::pair<JPH::GroupFilter const*, unsigned int>,
   JPH::UnorderedMapDetail<JPH::GroupFilter const*, unsigned int>, JPH::Hash<JPH::GroupFilter
   const*>, std::equal_to<JPH::GroupFilter const*> >::rehash(unsigned int) [clone .isra.0] */void JPH::HashTable<JPH::GroupFilter_const*,std::pair<JPH::GroupFilter_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::GroupFilter_const*,unsigned_int>,JPH::Hash<JPH::GroupFilter_const*>,std::equal_to<JPH::GroupFilter_const*>>::rehash(uint param_1) {
   char *pcVar1;
   undefined8 *puVar2;
   undefined4 uVar3;
   undefined8 uVar4;
   ushort uVar5;
   undefined1 auVar6[16];
   byte bVar7;
   long lVar8;
   long lVar9;
   ulong uVar10;
   int iVar11;
   uint uVar12;
   byte *pbVar13;
   long lVar14;
   uint uVar15;
   ulong uVar16;
   long lVar17;
   undefined8 *puVar18;
   undefined4 in_register_0000003c;
   uint uVar19;
   undefined1 *puVar20;
   uint uVar21;
   uint uVar22;
   long in_FS_OFFSET;
   undefined1 auVar23[16];
   undefined8 local_48;
   long local_40[2];
   uVar22 = *(uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
   uVar16 = (ulong)uVar22;
   puVar20 = *(undefined1**)( CONCAT44(in_register_0000003c, param_1) + 8 );
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   lVar8 = 0;
   if (uVar22 != 0) {
      do {
         while (true) {
            pcVar1 = puVar20 + lVar8;
            if (*pcVar1 != '\0') break;
            LAB_0010004a:lVar8 = lVar8 + 1;
            if ((uint)uVar16 <= (uint)lVar8) goto LAB_00100074;
         };
         if (*pcVar1 == '\x7f') {
            *pcVar1 = '\0';
            puVar20 = *(undefined1**)( CONCAT44(in_register_0000003c, param_1) + 8 );
            uVar16 = ( ulong ) * (uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
            goto LAB_0010004a;
         }
         *pcVar1 = '\x7f';
         uVar22 = *(uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
         uVar16 = (ulong)uVar22;
         lVar8 = lVar8 + 1;
         puVar20 = *(undefined1**)( CONCAT44(in_register_0000003c, param_1) + 8 );
      } while ( (uint)lVar8 < uVar22 );
   }
   LAB_00100074:puVar20[uVar16] = *puVar20;
   lVar8 = 1;
   do {
      lVar17 = *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 );
      iVar11 = (int)lVar8;
      puVar20 = (undefined1*)( lVar17 + lVar8 );
      lVar8 = lVar8 + 1;
      *(undefined1*)( lVar17 + ( ulong )(uint)(iVar11 + *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x14 )) ) = *puVar20;
      auVar6 = __LC0;
   } while ( lVar8 != 0xf );
   uVar22 = *(uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
   uVar16 = (ulong)uVar22;
   uVar19 = uVar22 - 1;
   if (uVar22 != 0) {
      uVar22 = 0xfffffff1;
      lVar8 = 0;
      do {
         lVar17 = *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 );
         if (*(char*)( lVar17 + lVar8 ) == '\x7f') {
            lVar9 = *(long*)CONCAT44(in_register_0000003c, param_1);
            lVar14 = lVar8 * 0x10;
            while (true) {
               local_48 = *(undefined8*)( lVar9 + lVar14 );
               uVar10 = 0xcbf29ce484222325;
               pbVar13 = (byte*)&local_48;
               do {
                  bVar7 = *pbVar13;
                  pbVar13 = pbVar13 + 1;
                  uVar10 = ( uVar10 ^ bVar7 ) * 0x100000001b3;
               } while ( pbVar13 != (byte*)local_40 );
               bVar7 = (byte)uVar10 | 0x80;
               uVar15 = (int)uVar16 - 1U & ( uint )(uVar10 >> 7);
               auVar23 = *(undefined1(*) [16])( lVar17 + (ulong)uVar15 ) & auVar6;
               uVar5 = ( ushort )(SUB161(auVar23 >> 7, 0) & 1) | ( ushort )(SUB161(auVar23 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar23 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar23 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar23 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar23 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar23 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar23 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar23 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar23 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar23 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar23 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar23 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar23 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar23 >> 0x77, 0) & 1) << 0xe | ( ushort )(byte)(auVar23[0xf] >> 7) << 0xf;
               uVar21 = uVar15;
               while (uVar5 == 0xffff) {
                  uVar21 = uVar21 + 0x10 & uVar19;
                  auVar23 = *(undefined1(*) [16])( lVar17 + (ulong)uVar21 ) & auVar6;
                  uVar5 = ( ushort )(SUB161(auVar23 >> 7, 0) & 1) | ( ushort )(SUB161(auVar23 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar23 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar23 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar23 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar23 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar23 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar23 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar23 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar23 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar23 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar23 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar23 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar23 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar23 >> 0x77, 0) & 1) << 0xe | ( ushort )(byte)(auVar23[0xf] >> 7) << 0xf;
               };
               iVar11 = 0;
               for (uVar12 = uVar5 ^ 0xffff; ( uVar12 & 1 ) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
                  iVar11 = iVar11 + 1;
               }
               uVar21 = iVar11 + uVar21 & uVar19;
               if (( ( uVar21 - uVar15 ^ (int)lVar8 - uVar15 ) & uVar19 & 0xfffffff0 ) == 0) {
                  *(byte*)( lVar17 + lVar8 ) = bVar7;
                  *(byte*)( *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 ) + ( ulong )(( *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x14 ) - 1U & uVar22 ) + 0xf) ) = bVar7;
                  uVar16 = ( ulong ) * (uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
                  goto LAB_001000f0;
               }
               pbVar13 = (byte*)( lVar17 + (ulong)uVar21 );
               lVar17 = (ulong)uVar21 * 0x10;
               if (*pbVar13 == 0) break;
               *pbVar13 = bVar7;
               *(byte*)( *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 ) + ( ulong )(( uVar21 - 0xf & *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x14 ) - 1U ) + 0xf) ) = bVar7;
               lVar9 = *(long*)CONCAT44(in_register_0000003c, param_1);
               puVar18 = (undefined8*)( lVar17 + lVar9 );
               puVar2 = (undefined8*)( lVar9 + lVar14 );
               uVar4 = *puVar2;
               *puVar2 = *puVar18;
               *puVar18 = uVar4;
               uVar3 = *(undefined4*)( puVar2 + 1 );
               *(undefined4*)( puVar2 + 1 ) = *(undefined4*)( puVar18 + 1 );
               *(undefined4*)( puVar18 + 1 ) = uVar3;
               lVar17 = *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 );
               uVar16 = ( ulong ) * (uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
            };
            *pbVar13 = bVar7;
            *(byte*)( *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 ) + ( ulong )(( uVar21 - 0xf & *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x14 ) - 1U ) + 0xf) ) = bVar7;
            *(undefined1*)( *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 ) + lVar8 ) = 0;
            *(undefined1*)( *(long*)( CONCAT44(in_register_0000003c, param_1) + 8 ) + ( ulong )(( *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x14 ) - 1U & uVar22 ) + 0xf) ) = 0;
            puVar2 = (undefined8*)( *(long*)CONCAT44(in_register_0000003c, param_1) + lVar14 );
            uVar4 = puVar2[1];
            puVar18 = (undefined8*)( *(long*)CONCAT44(in_register_0000003c, param_1) + lVar17 );
            *puVar18 = *puVar2;
            puVar18[1] = uVar4;
            uVar16 = ( ulong ) * (uint*)( CONCAT44(in_register_0000003c, param_1) + 0x14 );
         }
         LAB_001000f0:lVar8 = lVar8 + 1;
         uVar22 = uVar22 + 1;
      } while ( (uint)lVar8 < (uint)uVar16 );
   }
   *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x18 ) = (int)( uVar16 * 7 >> 3 ) - *(int*)( CONCAT44(in_register_0000003c, param_1) + 0x10 );
   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* void std::__cxx11::basic_string<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::_M_construct<char const*>(char const*, char const*, std::forward_iterator_tag) [clone .isra.0]
    */void std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_construct<char_const*>(long *param_1, undefined1 *param_2, long param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined1 *__dest;
   undefined8 *puVar4;
   ulong __n;
   __n = param_3 - (long)param_2;
   if (__n < 0x10) {
      __dest = (undefined1*)*param_1;
      if (__n == 1) {
         *__dest = *param_2;
         param_1[1] = 1;
         *(undefined1*)( *param_1 + 1 ) = 0;
         return;
      }
      if (__n == 0) {
         param_1[1] = 0;
         *__dest = 0;
         return;
      }
   } else {
      if ((long)__n < 0) {
         std::__throw_length_error("basic_string::_M_create");
         puVar4 = (undefined8*)( *JPH::Allocate )(0x70);
         *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
         uVar2 = _LC5;
         uVar1 = __LC2;
         *(undefined2*)( puVar4 + 7 ) = 0;
         uVar3 = _LC5;
         puVar4[4] = uVar1;
         puVar4[5] = uVar2;
         uVar2 = _UNK_00101c48;
         uVar1 = __LC4;
         *puVar4 = 0;
         puVar4[6] = 0;
         puVar4[8] = 0;
         puVar4[9] = 0xffffffffffffffff;
         *(undefined4*)( puVar4 + 10 ) = 5;
         *(undefined8*)( (long)puVar4 + 100 ) = uVar3;
         *(undefined2*)( (long)puVar4 + 0x6c ) = 0x101;
         *(undefined1*)( (long)puVar4 + 0x6e ) = 1;
         *(undefined8*)( (long)puVar4 + 0x54 ) = uVar1;
         *(undefined8*)( (long)puVar4 + 0x5c ) = uVar2;
         return;
      }
      __dest = (undefined1*)( *JPH::Allocate )(__n + 1);
      param_1[2] = __n;
      *param_1 = (long)__dest;
   }
   memcpy(__dest, param_2, __n);
   param_1[1] = __n;
   *(undefined1*)( *param_1 + __n ) = 0;
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* _FUN() */void JPH::GetRTTIOfType(JPH::SoftBodyCreationSettings *) {
   lambda()
   #1
   {
      undefined8 uVar1;
      undefined8 uVar2;
      undefined8 uVar3;
      undefined8 *puVar4;
      puVar4 = (undefined8*)( *Allocate )(0x70);
      *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
      uVar2 = _LC5;
      uVar1 = __LC2;
      *(undefined2*)( puVar4 + 7 ) = 0;
      uVar3 = _LC5;
      puVar4[4] = uVar1;
      puVar4[5] = uVar2;
      uVar2 = _UNK_00101c48;
      uVar1 = __LC4;
      *puVar4 = 0;
      puVar4[6] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0xffffffffffffffff;
      *(undefined4*)( puVar4 + 10 ) = 5;
      *(undefined8*)( (long)puVar4 + 100 ) = uVar3;
      *(undefined2*)( (long)puVar4 + 0x6c ) = 0x101;
      *(undefined1*)( (long)puVar4 + 0x6e ) = 1;
      *(undefined8*)( (long)puVar4 + 0x54 ) = uVar1;
      *(undefined8*)( (long)puVar4 + 0x5c ) = uVar2;
      return;
   }
   /* JPH::GetRTTIOfType(JPH::SoftBodyCreationSettings*) */
   undefined1 *JPH::GetRTTIOfType(SoftBodyCreationSettings *param_1) {
      int iVar1;
      if (GetRTTIOfType(JPH::SoftBodyCreationSettings * ::rtti == '\0') {
         iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::SoftBodyCreationSettings * ::rtti));
         if (iVar1 != 0) {
            JPH::RTTI::RTTI((RTTI*)GetRTTIOfType(JPH::SoftBodyCreationSettings * ::rtti, "SoftBodyCreationSettings", 0x70, GetRTTIOfType(JPH::SoftBodyCreationSettings * ::_FUN, GetRTTIOfType(JPH::SoftBodyCreationSettings*)::{lambda(void*)#1}::_FUN,
                      SoftBodyCreationSettings::sCreateRTTI);, __cxa_atexit(RTTI::~RTTI, GetRTTIOfType(JPH::SoftBodyCreationSettings*)::rtti,&__dso_handle);, __cxa_guard_release(&GetRTTIOfType(JPH::SoftBodyCreationSettings*)::rtti);
      return, GetRTTIOfType(JPH::SoftBodyCreationSettings*)::rtti;
    }
  }
  return, GetRTTIOfType(JPH::SoftBodyCreationSettings*)::rtti;
}, /* JPH::SoftBodyCreationSettings::SaveBinaryState(JPH::StreamOut&) const */, void __thiscall
JPH::SoftBodyCreationSettings::SaveBinaryState(SoftBodyCreationSettings *this,StreamOut *param_1), {
                                       ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x10, 0xc);
                                       ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x20, 0x10);
                                       ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x30, 8);
                                       ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x38, 2);
                                       JPH::CollisionGroup::SaveBinaryState((StreamOut*)( this + 0x40 ));
                                       ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x50, 4);
                                       ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x54, 4);
                                       ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x58, 4);
                                       ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x5c, 4);
                                       ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x60, 4);
                                       ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 100, 4);
                                       ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x68, 4);
                                       ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x6c, 1);
                                       ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x6d, 1);
                                       /* WARNING: Could not recover jumptable at 0x001005af. Too many branches */
                                       /* WARNING: Treating indirect jump as call */
                                       ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x6e, 1);
                                       return;
                                    }, /* JPH::SoftBodyCreationSettings::RestoreBinaryState(JPH::StreamIn&) */, void __thiscall
JPH::SoftBodyCreationSettings::RestoreBinaryState(SoftBodyCreationSettings *this, StreamIn * param_1)(**(code**)( *(long*)param_1 + 0x10 ))(param_1, this + 0x10, 0xc)(**(code**)( *(long*)param_1 + 0x10 ))(param_1, this + 0x20, 0x10)(**(code**)( *(long*)param_1 + 0x10 ))(param_1, this + 0x30, 8)(**(code**)( *(long*)param_1 + 0x10 ))(param_1, this + 0x38, 2) * )(this + 0x40))(**(code**)( *(long*)param_1 + 0x10 ))(param_1, this + 0x50, 4)(**(code**)( *(long*)param_1 + 0x10 ))(param_1, this + 0x54, 4)(**(code**)( *(long*)param_1 + 0x10 ))(param_1, this + 0x58, 4)(**(code**)( *(long*)param_1 + 0x10 ))(param_1, this + 0x5c, 4)(**(code**)( *(long*)param_1 + 0x10 ))(param_1, this + 0x60, 4)(**(code**)( *(long*)param_1 + 0x10 ))(param_1, this + 100, 4)(**(code**)( *(long*)param_1 + 0x10 ))(param_1, this + 0x68, 4)(**(code**)( *(long*)param_1 + 0x10 ))(param_1, this + 0x6c, 1)(**(code**)( *(long*)param_1 + 0x10 ))(param_1, this + 0x6d, 1)(**(code**)( *(long*)param_1 + 0x10 ))(param_1, this + 0x6e, 1) * ::{lambda(void*)#1}::_FUN(void *param_1), {
                                 long *plVar1;
                                 long *plVar2;
                                 SoftBodySharedSettings *this;
                                 if (param_1 != (void*)0x0) {
                                    plVar2 = *(long**)( (long)param_1 + 0x40 );
                                    if (plVar2 != (long*)0x0) {
                                       LOCK();
                                       plVar1 = plVar2 + 1;
                                       *(int*)plVar1 = (int)*plVar1 + -1;
                                       UNLOCK();
                                       if ((int)*plVar1 == 0) {
                                          ( **(code**)( *plVar2 + 0x18 ) )();
                                       }
                                    }
                                    /* WARNING: Load size is inaccurate */
                                    this * param_1;
                                    if (this != (SoftBodySharedSettings*)0x0) {
                                       LOCK();
                                       *(int*)this = *(int*)this + -1;
                                       UNLOCK();
                                       if (*(int*)this == 0) {
                                          SoftBodySharedSettings::~SoftBodySharedSettings(this);
                                          ( *Free )(this);
                                       }
                                    }
                                    /* WARNING: Could not recover jumptable at 0x0010072a. Too many branches */
                                    /* WARNING: Treating indirect jump as call */
                                    ( *Free )(param_1);
                                    return;
                                 }
                                 return;
                              }, /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */, /* JPH::SoftBodyCreationSettings::sRestoreWithChildren(JPH::StreamIn&,
   JPH::Array<JPH::Ref<JPH::SoftBodySharedSettings>,
   JPH::STLAllocator<JPH::Ref<JPH::SoftBodySharedSettings> > >&,
   JPH::Array<JPH::Ref<JPH::PhysicsMaterial>, JPH::STLAllocator<JPH::Ref<JPH::PhysicsMaterial> > >&,
   JPH::Array<JPH::Ref<JPH::GroupFilter>, JPH::STLAllocator<JPH::Ref<JPH::GroupFilter> > >&) */, SoftBodyCreationSettings * __thiscall
JPH::SoftBodyCreationSettings::sRestoreWithChildren
          (SoftBodyCreationSettings *this, StreamIn * param_1, Array * param_2, Array * param_3, Array * param_4) * plVar1 * plVar2 * pSVar3 * plVar4 * pSVar5 * extraout_RAX * extraout_RDX * pSVar7 * this_00 * pAVar8 * pSStack_140 * pSStack_138 * pSStack_120 * local_118;
  ulong local_110;
  SoftBodySharedSettings local_108[16] * local_e8;
  long local_e0;
  long local_d8[2] * local_b8[2];
  undefined1 local_a8[16] * local_78 * (long*)( in_FS_OFFSET + 0x28 )(undefined1[16])0x0;
  this[0x70] = (SoftBodyCreationSettings)0x0;
  local_80 = 0;
  local_54 = _LC5;
  local_b8[0] = (SoftBodySharedSettings*)0x0(long *)0x0;
  local_70 = 0xffffffffffffffff;
  local_68 = 5;
  local_4c = 0x101;
  local_4a = (SoftBodyCreationSettings)0x1;
  local_64 = __LC4;
  uStack_5c = _UNK_00101c48;
  pSStack_120 = (SoftBodySharedSettings *)0x100832;
  pAVar8 = param_4;
  RestoreBinaryState((SoftBodyCreationSettings *)local_b8,param_1);
  pSStack_120 = (SoftBodySharedSettings *)0x10083c;
  cVar6 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if (cVar6 == '\0'), {
                                 pSStack_120 = (SoftBodySharedSettings*)0x10084a;
                                 cVar6 = ( **(code**)( *(long*)param_1 + 0x20 ) )(param_1);
                                 if (cVar6 == '\0') {
                                    pSStack_120 = (SoftBodySharedSettings*)0x100911;
                                    pSVar7 = param_1;
                                    JPH::SoftBodySharedSettings::sRestoreWithMaterials((StreamIn*)&local_118, (Array*)param_1, param_2);
                                    pSVar5 = local_b8[0];
                                    pSVar3 = local_118;
                                    if (local_f8 == '\x02') {
                                       if (this[0x70] == (SoftBodyCreationSettings)0x1) {
                                          plVar2 = *(long**)( this + 0x40 );
                                          if (plVar2 != (long*)0x0) {
                                             LOCK();
                                             plVar4 = plVar2 + 1;
                                             *(int*)plVar4 = (int)*plVar4 + -1;
                                             UNLOCK();
                                             if ((int)*plVar4 == 0) {
                                                pSStack_120 = (SoftBodySharedSettings*)0x100db6;
                                                ( **(code**)( *plVar2 + 0x18 ) )();
                                             }
                                          }
                                          param_4 = *(Array**)this;
                                          if (param_4 != (Array*)0x0) {
                                             LOCK();
                                             *(int*)param_4 = *(int*)param_4 + -1;
                                             UNLOCK();
                                             if (*(int*)param_4 == 0) {
                                                pSStack_120 = (SoftBodySharedSettings*)0x100d47;
                                                SoftBodySharedSettings::~SoftBodySharedSettings((SoftBodySharedSettings*)param_4);
                                                pSStack_120 = (SoftBodySharedSettings*)0x100d50;
                                                ( *Free )(param_4);
                                             }
                                          }
                                       } else if (( this[0x70] == (SoftBodyCreationSettings)0x2 ) && ( *(SoftBodyCreationSettings**)this != this + 0x10 )) {
                                          pSStack_120 = (SoftBodySharedSettings*)0x100c16;
                                          ( *Free )();
                                       }
                                       this[0x70] = (SoftBodyCreationSettings)0x0;
                                       *(SoftBodyCreationSettings**)this = this + 0x10;
                                       if (( pSVar3 == (SoftBodySharedSettings*)0x0 ) && ( lVar11 = 0 ),uVar10 = local_110,local_110 != 0) {
                                          LAB_00100dc8:this_00 = "basic_string: construction from null is not valid";
                                          pSStack_120 = (SoftBodySharedSettings*)0x100dd4;
                                          std::__throw_logic_error("basic_string: construction from null is not valid");
                                          lStack_148 = *(long*)( in_FS_OFFSET + 0x28 );
                                          pSStack_140 = this;
                                          pSStack_138 = this + 0x10;
                                          uStack_130 = uVar10;
                                          lStack_128 = lVar11;
                                          pSStack_120 = (SoftBodySharedSettings*)param_4;
                                          SaveBinaryState((SoftBodyCreationSettings*)this_00, (StreamOut*)pSVar7);
                                          if (( extraout_RDX == (UnorderedMap*)0x0 ) || ( param_3 == (Array*)0x0 )) {
                                             uStack_14c = 0xffffffff;
                                             ( **(code**)( *(long*)pSVar7 + 0x10 ) )(pSVar7, &uStack_14c, 4);
                                          } else {
                                             JPH::SoftBodySharedSettings::SaveWithMaterials(*(StreamOut**)this_00, (UnorderedMap*)pSVar7, extraout_RDX);
                                          }
                                          if (lStack_148 != *(long*)( in_FS_OFFSET + 0x28 )) {
                                             /* WARNING: Subroutine does not return */
                                             __stack_chk_fail();
                                          }
                                          StreamUtils::SaveObjectReference<JPH::GroupFilter>((StreamOut*)pSVar7, *(GroupFilter**)( (SoftBodyCreationSettings*)this_00 + 0x40 ), (UnorderedMap*)pAVar8);
                                          return extraout_RAX;
                                       }
                                       pSStack_120 = (SoftBodySharedSettings*)0x100b46;
                                       std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_construct<char_const*>(this, pSVar3, pSVar3 + local_110);
                                       this[0x70] = (SoftBodyCreationSettings)0x2;
                                    } else {
                                       if (local_b8[0] != local_118) {
                                          if (local_b8[0] != (SoftBodySharedSettings*)0x0) {
                                             LOCK();
                                             *(int*)local_b8[0] = *(int*)local_b8[0] + -1;
                                             UNLOCK();
                                             if (*(int*)local_b8[0] == 0) {
                                                pSStack_120 = (SoftBodySharedSettings*)0x100c28;
                                                SoftBodySharedSettings::~SoftBodySharedSettings(local_b8[0]);
                                                pSStack_120 = (SoftBodySharedSettings*)0x100c31;
                                                ( *Free )(pSVar5);
                                             }
                                          }
                                          local_b8[0] = local_118;
                                          if (local_118 != (SoftBodySharedSettings*)0x0) {
                                             LOCK();
                                             *(int*)local_118 = *(int*)local_118 + 1;
                                             UNLOCK();
                                          }
                                       }
                                       pSStack_120 = (SoftBodySharedSettings*)0x10095d;
                                       StreamUtils::RestoreObjectReference<JPH::GroupFilter>((StreamUtils*)&local_e8, param_1, param_4);
                                       plVar2 = local_e8;
                                       uVar10 = (ulong)local_c8;
                                       if (local_c8 == 2) {
                                          if (this[0x70] == (SoftBodyCreationSettings)0x1) {
                                             plVar4 = *(long**)( this + 0x40 );
                                             if (plVar4 != (long*)0x0) {
                                                LOCK();
                                                plVar1 = plVar4 + 1;
                                                *(int*)plVar1 = (int)*plVar1 + -1;
                                                UNLOCK();
                                                if ((int)*plVar1 == 0) {
                                                   pSStack_120 = (SoftBodySharedSettings*)0x100dc1;
                                                   ( **(code**)( *plVar4 + 0x18 ) )();
                                                }
                                             }
                                             pSVar3 = *(SoftBodySharedSettings**)this;
                                             if (pSVar3 != (SoftBodySharedSettings*)0x0) {
                                                LOCK();
                                                *(int*)pSVar3 = *(int*)pSVar3 + -1;
                                                UNLOCK();
                                                if (*(int*)pSVar3 == 0) {
                                                   pSStack_120 = (SoftBodySharedSettings*)0x100d97;
                                                   SoftBodySharedSettings::~SoftBodySharedSettings(pSVar3);
                                                   pSStack_120 = (SoftBodySharedSettings*)0x100da0;
                                                   ( *Free )(pSVar3);
                                                }
                                             }
                                          } else if (( this[0x70] == (SoftBodyCreationSettings)0x2 ) && ( *(SoftBodyCreationSettings**)this != this + 0x10 )) {
                                             pSStack_120 = (SoftBodySharedSettings*)0x100c70;
                                             ( *Free )();
                                          }
                                          this[0x70] = (SoftBodyCreationSettings)0x0;
                                          *(SoftBodyCreationSettings**)this = this + 0x10;
                                          if (( plVar2 == (long*)0x0 ) && ( param_4 = (Array*)0x0 ),pSVar7 = param_1,lVar11 = local_e0,local_e0 != 0) goto LAB_00100dc8;
                                          pSStack_120 = (SoftBodySharedSettings*)0x100c94;
                                          std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_construct<char_const*>(this, plVar2, (long)plVar2 + local_e0);
                                          SVar9 = (SoftBodyCreationSettings)0x2;
                                       } else {
                                          if (local_e8 != local_78) {
                                             if (local_78 != (long*)0x0) {
                                                LOCK();
                                                plVar4 = local_78 + 1;
                                                *(int*)plVar4 = (int)*plVar4 + -1;
                                                UNLOCK();
                                                if ((int)*plVar4 == 0) {
                                                   pSStack_120 = (SoftBodySharedSettings*)0x100991;
                                                   ( **(code**)( *local_78 + 0x18 ) )();
                                                }
                                             }
                                             local_78 = plVar2;
                                             if (plVar2 != (long*)0x0) {
                                                LOCK();
                                                *(int*)( plVar2 + 1 ) = (int)plVar2[1] + 1;
                                                UNLOCK();
                                             }
                                          }
                                          if (this[0x70] == (SoftBodyCreationSettings)0x1) {
                                             plVar2 = *(long**)( this + 0x40 );
                                             if (plVar2 != (long*)0x0) {
                                                LOCK();
                                                plVar4 = plVar2 + 1;
                                                *(int*)plVar4 = (int)*plVar4 + -1;
                                                UNLOCK();
                                                if ((int)*plVar4 == 0) {
                                                   pSStack_120 = (SoftBodySharedSettings*)0x100dab;
                                                   ( **(code**)( *plVar2 + 0x18 ) )();
                                                }
                                             }
                                             pSVar3 = *(SoftBodySharedSettings**)this;
                                             if (pSVar3 != (SoftBodySharedSettings*)0x0) {
                                                LOCK();
                                                *(int*)pSVar3 = *(int*)pSVar3 + -1;
                                                UNLOCK();
                                                if (*(int*)pSVar3 == 0) {
                                                   pSStack_120 = (SoftBodySharedSettings*)0x100cfb;
                                                   SoftBodySharedSettings::~SoftBodySharedSettings(pSVar3);
                                                   pSStack_120 = (SoftBodySharedSettings*)0x100d04;
                                                   ( *Free )(pSVar3);
                                                }
                                             }
                                          } else if (( this[0x70] == (SoftBodyCreationSettings)0x2 ) && ( *(SoftBodyCreationSettings**)this != this + 0x10 )) {
                                             pSStack_120 = (SoftBodySharedSettings*)0x100bf6;
                                             ( *Free )();
                                          }
                                          this[0x70] = (SoftBodyCreationSettings)0x0;
                                          *(SoftBodySharedSettings**)this = local_b8[0];
                                          if (local_b8[0] != (SoftBodySharedSettings*)0x0) {
                                             LOCK();
                                             *(int*)local_b8[0] = *(int*)local_b8[0] + 1;
                                             UNLOCK();
                                          }
                                          *(undefined8*)( this + 0x30 ) = local_88;
                                          *(undefined8*)( this + 0x10 ) = local_a8._0_8_;
                                          *(undefined8*)( this + 0x18 ) = local_a8._8_8_;
                                          *(undefined2*)( this + 0x38 ) = local_80;
                                          *(undefined8*)( this + 0x20 ) = local_98;
                                          *(undefined8*)( this + 0x28 ) = uStack_90;
                                          *(long**)( this + 0x40 ) = local_78;
                                          if (local_78 != (long*)0x0) {
                                             LOCK();
                                             *(int*)( local_78 + 1 ) = (int)local_78[1] + 1;
                                             UNLOCK();
                                          }
                                          SVar9 = (SoftBodyCreationSettings)0x1;
                                          *(undefined8*)( this + 0x48 ) = local_70;
                                          *(undefined8*)( this + 0x54 ) = local_64;
                                          *(undefined8*)( this + 0x5c ) = uStack_5c;
                                          *(undefined4*)( this + 0x50 ) = local_68;
                                          *(undefined8*)( this + 100 ) = local_54;
                                          *(undefined2*)( this + 0x6c ) = local_4c;
                                          this[0x6e] = local_4a;
                                       }
                                       this[0x70] = SVar9;
                                       if (local_c8 == 1) {
                                          if (local_e8 != (long*)0x0) {
                                             LOCK();
                                             plVar2 = local_e8 + 1;
                                             *(int*)plVar2 = (int)*plVar2 + -1;
                                             UNLOCK();
                                             if ((int)*plVar2 == 0) {
                                                pSStack_120 = (SoftBodySharedSettings*)0x100cbf;
                                                ( **(code**)( *local_e8 + 0x18 ) )();
                                             }
                                          }
                                       } else if (( local_c8 == 2 ) && ( local_e8 != local_d8 )) {
                                          pSStack_120 = (SoftBodySharedSettings*)0x100bc9;
                                          ( *Free )();
                                       }
                                    }
                                    if (local_f8 == '\x01') {
                                       if (local_118 != (SoftBodySharedSettings*)0x0) {
                                          LOCK();
                                          *(int*)local_118 = *(int*)local_118 + -1;
                                          UNLOCK();
                                          if (*(int*)local_118 == 0) {
                                             pSStack_120 = (SoftBodySharedSettings*)0x100ba0;
                                             SoftBodySharedSettings::~SoftBodySharedSettings(local_118);
                                             pSStack_120 = (SoftBodySharedSettings*)0x100ba9;
                                             ( *Free )(local_118);
                                          }
                                       }
                                    } else if (( local_f8 == '\x02' ) && ( local_118 != local_108 )) {
                                       pSStack_120 = (SoftBodySharedSettings*)0x100aa9;
                                       ( *Free )();
                                    }
                                    goto LAB_00100884;
                                 }
                              }, if (this[0x70] == (SoftBodyCreationSettings), 0x1) = *(long**)( this + 0x40 )(plVar2 != (long*)0x0), {
      LOCK() + 1 * (int*)plVar4 = (int)*plVar4 + -1, ;
      UNLOCK()((int)*plVar4 == 0) = (SoftBodySharedSettings*)0x100bd6(**(code**)( *plVar2 + 0x18 ))() * (SoftBodySharedSettings**)this(pSVar3 != (SoftBodySharedSettings*)0x0), {
      LOCK());
            *(int*)pSVar3 = *(int*)pSVar3 + -1;
            UNLOCK();
            if (*(int*)pSVar3 == 0) {
               pSStack_120 = (SoftBodySharedSettings*)0x100ae8;
               SoftBodySharedSettings::~SoftBodySharedSettings(pSVar3);
               pSStack_120 = (SoftBodySharedSettings*)0x100af1;
               ( *Free )(pSVar3);
            }
         }
      } else if (( this[0x70] == (SoftBodyCreationSettings)0x2 ) && ( *(SoftBodyCreationSettings**)this != this + 0x10 )) {
         pSStack_120 = (SoftBodySharedSettings*)0x1008f6;
         ( *Free )();
      }
      this[0x70] = (SoftBodyCreationSettings)0x0;
      *(SoftBodyCreationSettings**)this = this + 0x10;
      pSStack_120 = (SoftBodySharedSettings*)0x100880;
      std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_construct<char_const*>(this, "Error reading body creation settings");
      this[0x70] = (SoftBodyCreationSettings)0x2;
      LAB_00100884:if (local_78 != (long*)0x0) {
         LOCK();
         plVar2 = local_78 + 1;
         *(int*)plVar2 = (int)*plVar2 + -1;
         UNLOCK();
         if ((int)*plVar2 == 0) {
            pSStack_120 = (SoftBodySharedSettings*)0x100b76;
            ( **(code**)( *local_78 + 0x18 ) )();
         }
      }
      pSVar3 = local_b8[0];
      if (local_b8[0] != (SoftBodySharedSettings*)0x0) {
         LOCK();
         *(int*)local_b8[0] = *(int*)local_b8[0] + -1;
         UNLOCK();
         if (*(int*)local_b8[0] == 0) {
            pSStack_120 = (SoftBodySharedSettings*)0x100b58;
            SoftBodySharedSettings::~SoftBodySharedSettings(local_b8[0]);
            pSStack_120 = (SoftBodySharedSettings*)0x100b61;
            ( *Free )(pSVar3);
         }
      }
      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         pSStack_120 = (SoftBodySharedSettings*)0x100dc8;
         __stack_chk_fail();
      }
      return this;
   }
   /* JPH::SoftBodyCreationSettings::SaveWithChildren(JPH::StreamOut&,
   JPH::UnorderedMap<JPH::SoftBodySharedSettings const*, unsigned int,
   JPH::Hash<JPH::SoftBodySharedSettings const*>, std::equal_to<JPH::SoftBodySharedSettings const*>
   >*, JPH::UnorderedMap<JPH::PhysicsMaterial const*, unsigned int, JPH::Hash<JPH::PhysicsMaterial
   const*>, std::equal_to<JPH::PhysicsMaterial const*> >*, JPH::UnorderedMap<JPH::GroupFilter
   const*, unsigned int, JPH::Hash<JPH::GroupFilter const*>, std::equal_to<JPH::GroupFilter const*>
   >*) const */
   void JPH::SoftBodyCreationSettings::SaveWithChildren(SoftBodyCreationSettings *this, StreamOut *param_1, UnorderedMap *param_2, UnorderedMap *param_3, UnorderedMap *param_4) {
      long in_FS_OFFSET;
      undefined4 local_34;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      SaveBinaryState(this, param_1);
      if (( param_2 == (UnorderedMap*)0x0 ) || ( param_3 == (UnorderedMap*)0x0 )) {
         local_34 = 0xffffffff;
         ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_34, 4);
      } else {
         JPH::SoftBodySharedSettings::SaveWithMaterials(*(StreamOut**)this, (UnorderedMap*)param_1, param_2);
      }
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         StreamUtils::SaveObjectReference<JPH::GroupFilter>(param_1, *(GroupFilter**)( this + 0x40 ), param_4);
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* JPH::RTTI::~RTTI() */
   void JPH::RTTI::~RTTI(RTTI *this) {
      return;
   }
   /* JPH::PhysicsMaterial::~PhysicsMaterial() */
   void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
      /* WARNING: Could not recover jumptable at 0x00100f44. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *Free )();
      return;
   }
   /* JPH::Result<JPH::Ref<JPH::GroupFilter> >
   JPH::StreamUtils::RestoreObjectReference<JPH::GroupFilter>(JPH::StreamIn&,
   JPH::Array<JPH::Ref<JPH::GroupFilter>, JPH::STLAllocator<JPH::Ref<JPH::GroupFilter> > >&) */
   StreamUtils * __thiscallJPH::StreamUtils::RestoreObjectReference<JPH::GroupFilter>(StreamUtils * this, StreamIn * param_1, Array * param_2);
   {
      long *plVar1;
      long lVar2;
      long *plVar3;
      undefined8 uVar4;
      ulong uVar5;
      uint uVar6;
      ulong uVar7;
      undefined8 *puVar8;
      undefined8 *puVar9;
      undefined8 *puVar10;
      uint uVar11;
      long lVar12;
      undefined8 *puVar13;
      long in_FS_OFFSET;
      uint local_5c;
      StreamUtils *local_58;
      long local_50;
      undefined8 local_48[2];
      StreamUtils local_38;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      lVar12 = *(long*)param_1;
      this[0x20] = (StreamUtils)0x0;
      local_5c = 0xffffffff;
      ( **(code**)( lVar12 + 0x10 ) )(param_1, &local_5c, 4);
      if (local_5c == 0xffffffff) {
         if (this[0x20] == (StreamUtils)0x1) {
            plVar3 = *(long**)this;
            if (plVar3 != (long*)0x0) {
               LOCK();
               plVar1 = plVar3 + 1;
               *(int*)plVar1 = (int)*plVar1 + -1;
               UNLOCK();
               if ((int)*plVar1 == 0) {
                  ( **(code**)( *plVar3 + 0x18 ) )();
               }
            }
         } else if (( this[0x20] == (StreamUtils)0x2 ) && ( *(StreamUtils**)this != this + 0x10 )) {
            ( *Free )();
         }
         *(undefined8*)this = 0;
         this[0x20] = (StreamUtils)0x1;
         goto LAB_00101008;
      }
      if ((ulong)local_5c < *(ulong*)param_2) {
         lVar12 = *(long*)( *(long*)( param_2 + 0x10 ) + (ulong)local_5c * 8 );
         if (lVar12 != 0) {
            LOCK();
            *(int*)( lVar12 + 8 ) = *(int*)( lVar12 + 8 ) + 1;
            UNLOCK();
         }
         if (this[0x20] == (StreamUtils)0x1) {
            plVar3 = *(long**)this;
            if (plVar3 != (long*)0x0) {
               LOCK();
               plVar1 = plVar3 + 1;
               *(int*)plVar1 = (int)*plVar1 + -1;
               UNLOCK();
               if ((int)*plVar1 == 0) {
                  ( **(code**)( *plVar3 + 0x18 ) )();
               }
            }
         } else if (( this[0x20] == (StreamUtils)0x2 ) && ( *(StreamUtils**)this != this + 0x10 )) {
            ( *Free )();
         }
         *(long*)this = lVar12;
         this[0x20] = (StreamUtils)0x1;
         goto LAB_00101008;
      }
      JPH::GroupFilter::sRestoreFromBinaryState((StreamIn*)&local_58);
      if (this[0x20] == (StreamUtils)0x1) {
         plVar3 = *(long**)this;
         if (plVar3 != (long*)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            *(int*)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
               ( **(code**)( *plVar3 + 0x18 ) )();
            }
         }
         LAB_00101051:this[0x20] = local_38;
         if (local_38 != (StreamUtils)0x1) goto LAB_00101061;
         LAB_00101156:*(StreamUtils**)this = local_58;
      } else {
         if (( this[0x20] != (StreamUtils)0x2 ) || ( *(StreamUtils**)this == this + 0x10 )) goto LAB_00101051;
         ( *Free )();
         this[0x20] = local_38;
         if (local_38 == (StreamUtils)0x1) goto LAB_00101156;
         LAB_00101061:if (local_38 == (StreamUtils)0x2) {
            *(StreamUtils**)this = this + 0x10;
            if (local_58 != (StreamUtils*)local_48) {
               *(StreamUtils**)this = local_58;
               *(long*)( this + 8 ) = local_50;
               *(undefined8*)( this + 0x10 ) = local_48[0];
               goto LAB_00101008;
            }
            uVar7 = local_50 + 1;
            uVar6 = (uint)uVar7;
            if (uVar6 < 8) {
               if (( uVar7 & 4 ) == 0) {
                  if (( uVar6 != 0 ) && ( this[0x10] = *local_58(uVar7 & 2) != 0 )) {
                     *(undefined2*)( this + ( uVar7 & 0xffffffff ) + 0xe ) = *(undefined2*)( local_58 + ( ( uVar7 & 0xffffffff ) - 2 ) );
                  }
               } else {
                  *(undefined4*)( this + 0x10 ) = *(undefined4*)local_58;
                  *(undefined4*)( this + ( uVar7 & 0xffffffff ) + 0xc ) = *(undefined4*)( local_58 + ( ( uVar7 & 0xffffffff ) - 4 ) );
               }
            } else {
               *(undefined8*)( this + 0x10 ) = *(undefined8*)local_58;
               *(undefined8*)( this + ( uVar7 & 0xffffffff ) + 8 ) = *(undefined8*)( local_58 + ( ( uVar7 & 0xffffffff ) - 8 ) );
               lVar12 = (long)( this + 0x10 ) - ( ( ulong )(this + 0x18) & 0xfffffffffffffff8 );
               uVar6 = uVar6 + (int)lVar12 & 0xfffffff8;
               if (7 < uVar6) {
                  uVar11 = 0;
                  do {
                     uVar7 = (ulong)uVar11;
                     uVar11 = uVar11 + 8;
                     *(undefined8*)( ( ( ulong )(this + 0x18) & 0xfffffffffffffff8 ) + uVar7 ) = *(undefined8*)( local_58 + ( uVar7 - lVar12 ) );
                  } while ( uVar11 < uVar6 );
               }
            }
            *(long*)( this + 8 ) = local_50;
            if (this[0x20] == (StreamUtils)0x2) goto LAB_00101008;
         }
      }
      lVar12 = *(long*)param_2;
      uVar7 = lVar12 + 1;
      if (*(ulong*)( param_2 + 8 ) < uVar7) {
         uVar5 = *(ulong*)( param_2 + 8 ) * 2;
         if (uVar7 <= uVar5) {
            uVar7 = uVar5;
         }
         puVar8 = (undefined8*)( *Allocate )(uVar7 * 8);
         puVar13 = *(undefined8**)( param_2 + 0x10 );
         if (puVar13 != (undefined8*)0x0) {
            lVar12 = *(long*)param_2;
            if (puVar8 < puVar13) {
               for (puVar9 = puVar8; puVar9 < puVar8 + lVar12; puVar9 = puVar9 + 1) {
                  uVar4 = *puVar13;
                  puVar13 = puVar13 + 1;
                  *puVar9 = uVar4;
               }
            } else {
               puVar13 = puVar13 + lVar12 + -1;
               puVar9 = puVar8 + lVar12 + -1;
               if (!CARRY8(lVar12 * 8 - 8,(ulong)puVar8)) {
                  do {
                     uVar4 = *puVar13;
                     puVar10 = puVar9 + -1;
                     puVar13 = puVar13 + -1;
                     *puVar9 = uVar4;
                     puVar9 = puVar10;
                  } while ( puVar8 <= puVar10 );
               }
            }
            ( *Free )();
         }
         lVar12 = *(long*)param_2;
         *(undefined8**)( param_2 + 0x10 ) = puVar8;
         *(ulong*)( param_2 + 8 ) = uVar7;
         uVar7 = lVar12 + 1;
      } else {
         puVar8 = *(undefined8**)( param_2 + 0x10 );
      }
      *(ulong*)param_2 = uVar7;
      lVar2 = *(long*)this;
      puVar8[lVar12] = lVar2;
      if (lVar2 != 0) {
         LOCK();
         *(int*)( lVar2 + 8 ) = *(int*)( lVar2 + 8 ) + 1;
         UNLOCK();
      }
      LAB_00101008:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return this;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* JPH::PhysicsMaterial::~PhysicsMaterial() */
   void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
      return;
   }
   /* JPH::SoftBodySharedSettings::~SoftBodySharedSettings() */
   void JPH::SoftBodySharedSettings::~SoftBodySharedSettings(SoftBodySharedSettings *this) {
      long *plVar1;
      long *plVar2;
      long *plVar3;
      long *plVar4;
      for (int i = 0; i < 3; i++) {
         if (*(long*)( this + ( -24*i + 296 ) ) != 0) {
            *(undefined8*)( this + ( -24*i + 280 ) ) = 0;
            ( *Free )();
         }
      }
      plVar4 = *(long**)( this + 0xd8 );
      if (plVar4 != (long*)0x0) {
         if (( *(long*)( this + 200 ) != 0 ) && ( plVar2 = plVar4 < plVar2 )) {
            do {
               while (plVar3 = (long*)*plVar4,plVar3 == (long*)0x0) {
                  LAB_001014e0:plVar4 = plVar4 + 1;
                  if (plVar2 <= plVar4) goto LAB_00101518;
               };
               LOCK();
               plVar1 = plVar3 + 1;
               *(int*)plVar1 = (int)*plVar1 + -1;
               UNLOCK();
               if ((int)*plVar1 != 0) goto LAB_001014e0;
               if (*(code**)( *plVar3 + 0x18 ) != PhysicsMaterial::~PhysicsMaterial) {
                  ( **(code**)( *plVar3 + 0x18 ) )();
                  goto LAB_001014e0;
               }
               ( *Free )();
               plVar4 = plVar4 + 1;
            } while ( plVar4 < plVar2 );
            LAB_00101518:plVar4 = *(long**)( this + 0xd8 );
         }
         *(undefined8*)( this + 200 ) = 0;
         ( *Free )(plVar4);
      }
      for (int i = 0; i < 7; i++) {
         if (*(long*)( this + ( -24*i + 192 ) ) != 0) {
            *(undefined8*)( this + ( -24*i + 176 ) ) = 0;
            ( *Free )();
         }
      }
      if (*(long*)( this + 0x18 ) == 0) {
         return;
      }
      *(undefined8*)( this + 8 ) = 0;
      /* WARNING: Could not recover jumptable at 0x001014ba. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *Free )();
      return;
   }
   /* JPH::HashTable<JPH::GroupFilter const*, std::pair<JPH::GroupFilter const*, unsigned int>,
   JPH::UnorderedMapDetail<JPH::GroupFilter const*, unsigned int>, JPH::Hash<JPH::GroupFilter
   const*>, std::equal_to<JPH::GroupFilter const*> >::GrowTable() */
   void JPH::HashTable<JPH::GroupFilter_const*,std::pair<JPH::GroupFilter_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::GroupFilter_const*,unsigned_int>,JPH::Hash<JPH::GroupFilter_const*>,std::equal_to<JPH::GroupFilter_const*>>::GrowTable(HashTable<JPH::GroupFilter_const*,std::pair<JPH::GroupFilter_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::GroupFilter_const*,unsigned_int>,JPH::Hash<JPH::GroupFilter_const*>,std::equal_to<JPH::GroupFilter_const*>> *this) {
      void *__s;
      char *pcVar1;
      uint uVar2;
      undefined8 *puVar3;
      ushort uVar4;
      int iVar5;
      undefined8 uVar6;
      undefined8 uVar7;
      uint uVar8;
      ulong uVar9;
      long lVar10;
      byte *pbVar11;
      undefined8 *puVar12;
      uint uVar13;
      byte bVar14;
      undefined8 *puVar15;
      int iVar16;
      char *pcVar17;
      long in_FS_OFFSET;
      undefined1 auVar18[16];
      undefined8 local_48;
      long local_40[2];
      uVar2 = *(uint*)( this + 0x14 );
      local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
      uVar9 = ( ulong )(uVar2 * 2);
      if (uVar2 * 2 < 0x10) {
         uVar9 = 0x10;
      }
      if (uVar2 <= (uint)uVar9) {
         puVar3 = *(undefined8**)this;
         pcVar17 = *(char**)( this + 8 );
         *(undefined4*)( this + 0x10 ) = 0;
         *(uint*)( this + 0x14 ) = (uint)uVar9;
         *(undefined1(*) [16])this = (undefined1[16])0x0;
         *(int*)( this + 0x18 ) = (int)( uVar9 * 7 >> 3 );
         lVar10 = ( *Allocate )(uVar9 * 0x11 + 0xf);
         *(long*)this = lVar10;
         __s = (void*)( lVar10 + ( ulong ) * (uint*)( this + 0x14 ) * 0x10 );
         *(void**)( this + 8 ) = __s;
         memset(__s, 0, ( ulong )(*(uint*)( this + 0x14 ) + 0xf));
         if (puVar3 != (undefined8*)0x0) {
            if (uVar2 != 0) {
               puVar12 = puVar3;
               do {
                  while (*pcVar17 < '\0') {
                     iVar16 = *(int*)( this + 0x18 );
                     if (iVar16 == 0) {
                        if (( ulong ) * (uint*)( this + 0x14 ) < ( ulong )(uint)((int)( ( ulong ) * (uint*)( this + 0x14 ) * 7 >> 3 ) - *(int*)( this + 0x10 )) << 3) {
                           rehash((uint)this);
                           iVar16 = *(int*)( this + 0x18 );
                        } else {
                           GrowTable(this);
                           iVar16 = *(int*)( this + 0x18 );
                        }
                     }
                     uVar9 = 0xcbf29ce484222325;
                     local_48 = *puVar12;
                     pbVar11 = (byte*)&local_48;
                     do {
                        bVar14 = *pbVar11;
                        pbVar11 = pbVar11 + 1;
                        uVar9 = ( uVar9 ^ bVar14 ) * 0x100000001b3;
                     } while ( pbVar11 != (byte*)local_40 );
                     bVar14 = (byte)uVar9 | 0x80;
                     uVar8 = ( uint )(uVar9 >> 7);
                     while (true) {
                        uVar8 = uVar8 & *(int*)( this + 0x14 ) - 1U;
                        pcVar1 = (char*)( *(long*)( this + 8 ) + (ulong)uVar8 );
                        auVar18[0] = -(*pcVar1 == '\0');
                        for (int i = 0; i < 15; i++) {
                           auVar18[( i + 1 )] = -(pcVar1[1] == '\0');
                        }
                        uVar4 = ( ushort )(SUB161(auVar18 >> 7, 0) & 1) | ( ushort )(SUB161(auVar18 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar18 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar18 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar18 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar18 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar18 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar18 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar18 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar18 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar18 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar18 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar18 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar18 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar18 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar18[0xf] >> 7) << 0xf;
                        if (uVar4 != 0) break;
                        uVar8 = uVar8 + 0x10;
                     };
                     iVar5 = 0;
                     for (uVar13 = (uint)uVar4; ( uVar13 & 1 ) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
                        iVar5 = iVar5 + 1;
                     }
                     puVar15 = puVar12 + 2;
                     pcVar17 = pcVar17 + 1;
                     *(int*)( this + 0x18 ) = iVar16 + -1;
                     uVar8 = iVar5 + uVar8 & *(int*)( this + 0x14 ) - 1U;
                     *(byte*)( *(long*)( this + 8 ) + (ulong)uVar8 ) = bVar14;
                     *(byte*)( *(long*)( this + 8 ) + ( ulong )(( uVar8 - 0xf & *(int*)( this + 0x14 ) - 1U ) + 0xf) ) = bVar14;
                     uVar6 = *puVar12;
                     uVar7 = puVar12[1];
                     puVar12 = (undefined8*)( (ulong)uVar8 * 0x10 + *(long*)this );
                     *(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
                     *puVar12 = uVar6;
                     puVar12[1] = uVar7;
                     puVar12 = puVar15;
                     if (puVar3 + (ulong)uVar2 * 2 == puVar15) goto LAB_001017b0;
                  };
                  puVar12 = puVar12 + 2;
                  pcVar17 = pcVar17 + 1;
               } while ( puVar3 + (ulong)uVar2 * 2 != puVar12 );
            }
            LAB_001017b0:if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x001017d1. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *Free )(puVar3);
               return;
            }
            goto LAB_00101800;
         }
      }
      if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      LAB_00101800:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }
   /* bool JPH::HashTable<JPH::GroupFilter const*, std::pair<JPH::GroupFilter const*, unsigned int>,
   JPH::UnorderedMapDetail<JPH::GroupFilter const*, unsigned int>, JPH::Hash<JPH::GroupFilter
   const*>, std::equal_to<JPH::GroupFilter const*> >::InsertKey<false>(JPH::GroupFilter const*
   const&, unsigned int&) */
   bool JPH::HashTable<JPH::GroupFilter_const*,std::pair<JPH::GroupFilter_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::GroupFilter_const*,unsigned_int>,JPH::Hash<JPH::GroupFilter_const*>,std::equal_to<JPH::GroupFilter_const*>>::InsertKey<false>(HashTable<JPH::GroupFilter_const*,std::pair<JPH::GroupFilter_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::GroupFilter_const*,unsigned_int>,JPH::Hash<JPH::GroupFilter_const*>,std::equal_to<JPH::GroupFilter_const*>> *this, GroupFilter **param_1, uint *param_2) {
      uint uVar1;
      byte *pbVar2;
      byte bVar3;
      ushort uVar4;
      int iVar5;
      uint uVar6;
      byte bVar7;
      byte bVar8;
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
      uint uVar23;
      uint uVar24;
      GroupFilter **ppGVar25;
      bool bVar26;
      uint uVar27;
      ulong uVar28;
      uint uVar29;
      long in_FS_OFFSET;
      byte bVar30;
      undefined1 auVar31[16];
      undefined1 auVar32[16];
      undefined1 auVar33[16];
      GroupFilter *local_38;
      long local_30[2];
      ppGVar25 = &local_38;
      local_30[0] = *(long*)( in_FS_OFFSET + 0x28 );
      if (*(int*)( this + 0x18 ) == 0) {
         if (( ulong ) * (uint*)( this + 0x14 ) < ( ulong )(uint)((int)( ( ulong ) * (uint*)( this + 0x14 ) * 7 >> 3 ) - *(int*)( this + 0x10 )) << 3) {
            rehash((uint)this);
         } else {
            GrowTable(this);
         }
      }
      uVar28 = 0xcbf29ce484222325;
      local_38 = *param_1;
      do {
         bVar30 = *(byte*)ppGVar25;
         ppGVar25 = (GroupFilter**)( (long)ppGVar25 + 1 );
         uVar28 = ( uVar28 ^ bVar30 ) * 0x100000001b3;
      } while ( ppGVar25 != (GroupFilter**)local_30 );
      bVar30 = (byte)uVar28 | 0x80;
      uVar24 = 0xffffffff;
      uVar1 = *(int*)( this + 0x14 ) - 1;
      uVar29 = ( uint )(uVar28 >> 7);
      while (true) {
         uVar29 = uVar29 & uVar1;
         pbVar2 = (byte*)( *(long*)( this + 8 ) + (ulong)uVar29 );
         bVar7 = *pbVar2;
         bVar8 = pbVar2[1];
         bVar9 = pbVar2[2];
         bVar10 = pbVar2[3];
         bVar11 = pbVar2[4];
         bVar12 = pbVar2[5];
         bVar13 = pbVar2[6];
         bVar14 = pbVar2[7];
         bVar15 = pbVar2[8];
         bVar16 = pbVar2[9];
         bVar17 = pbVar2[10];
         bVar18 = pbVar2[0xb];
         bVar19 = pbVar2[0xc];
         bVar20 = pbVar2[0xd];
         bVar21 = pbVar2[0xe];
         bVar22 = pbVar2[0xf];
         auVar32[0] = -(bVar30 == bVar7);
         auVar32[1] = -(bVar30 == bVar8);
         auVar32[2] = -(bVar30 == bVar9);
         auVar32[3] = -(bVar30 == bVar10);
         auVar32[4] = -(bVar30 == bVar11);
         auVar32[5] = -(bVar30 == bVar12);
         auVar32[6] = -(bVar30 == bVar13);
         auVar32[7] = -(bVar30 == bVar14);
         auVar32[8] = -(bVar30 == bVar15);
         auVar32[9] = -(bVar30 == bVar16);
         auVar32[10] = -(bVar30 == bVar17);
         auVar32[0xb] = -(bVar30 == bVar18);
         auVar32[0xc] = -(bVar30 == bVar19);
         auVar32[0xd] = -(bVar30 == bVar20);
         auVar32[0xe] = -(bVar30 == bVar21);
         auVar32[0xf] = -(bVar30 == bVar22);
         uVar4 = ( ushort )(SUB161(auVar32 >> 7, 0) & 1) | ( ushort )(SUB161(auVar32 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar32 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar32 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar32 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar32 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar32 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar32 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar32 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar32 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar32 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar32 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar32 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar32 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar32 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar32[0xf] >> 7) << 0xf;
         if (uVar4 != 0) {
            uVar27 = (uint)uVar4;
            uVar23 = uVar29;
            do {
               iVar5 = 0;
               for (uVar6 = uVar27; ( uVar6 & 1 ) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                  iVar5 = iVar5 + 1;
               }
               uVar23 = uVar23 + iVar5 & uVar1;
               if (*param_1 == *(GroupFilter**)( *(long*)this + (ulong)uVar23 * 0x10 )) {
                  bVar26 = false;
                  goto LAB_00101925;
               }
               uVar23 = uVar23 + 1;
               bVar3 = (char)iVar5 + 1U & 0x1f;
               uVar6 = uVar27 >> bVar3;
               uVar27 = uVar27 >> bVar3;
            } while ( uVar6 != 0 );
         }
         if (uVar24 == 0xffffffff) {
            auVar33[0] = -(bVar7 == _LC11);
            auVar33[1] = -(bVar8 == UNK_00101c51);
            auVar33[2] = -(bVar9 == UNK_00101c52);
            auVar33[3] = -(bVar10 == UNK_00101c53);
            auVar33[4] = -(bVar11 == UNK_00101c54);
            auVar33[5] = -(bVar12 == UNK_00101c55);
            auVar33[6] = -(bVar13 == UNK_00101c56);
            auVar33[7] = -(bVar14 == UNK_00101c57);
            auVar33[8] = -(bVar15 == UNK_00101c58);
            auVar33[9] = -(bVar16 == UNK_00101c59);
            auVar33[10] = -(bVar17 == UNK_00101c5a);
            auVar33[0xb] = -(bVar18 == UNK_00101c5b);
            auVar33[0xc] = -(bVar19 == UNK_00101c5c);
            auVar33[0xd] = -(bVar20 == UNK_00101c5d);
            auVar33[0xe] = -(bVar21 == UNK_00101c5e);
            auVar33[0xf] = -(bVar22 == UNK_00101c5f);
            iVar5 = 0;
            uVar27 = ( uint )(ushort)(( ushort )(SUB161(auVar33 >> 7, 0) & 1) | ( ushort )(SUB161(auVar33 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar33 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar33 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar33 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar33 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar33 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar33 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar33 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar33 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar33 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar33 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar33 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar33 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar33 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar33[0xf] >> 7) << 0xf);
            for (uVar23 = uVar27; ( uVar23 & 1 ) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
               iVar5 = iVar5 + 1;
            }
            if (uVar27 != 0) {
               uVar24 = iVar5 + uVar29;
            }
         }
         auVar31[0] = -(bVar7 == 0);
         auVar31[1] = -(bVar8 == 0);
         auVar31[2] = -(bVar9 == 0);
         auVar31[3] = -(bVar10 == 0);
         auVar31[4] = -(bVar11 == 0);
         auVar31[5] = -(bVar12 == 0);
         auVar31[6] = -(bVar13 == 0);
         auVar31[7] = -(bVar14 == 0);
         auVar31[8] = -(bVar15 == 0);
         auVar31[9] = -(bVar16 == 0);
         auVar31[10] = -(bVar17 == 0);
         auVar31[0xb] = -(bVar18 == 0);
         auVar31[0xc] = -(bVar19 == 0);
         auVar31[0xd] = -(bVar20 == 0);
         auVar31[0xe] = -(bVar21 == 0);
         auVar31[0xf] = -(bVar22 == 0);
         uVar4 = ( ushort )(SUB161(auVar31 >> 7, 0) & 1) | ( ushort )(SUB161(auVar31 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar31 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar31 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar31 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar31 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar31 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar31 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar31 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar31 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar31 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar31 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar31 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar31 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar31 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar31[0xf] >> 7) << 0xf;
         if (uVar4 != 0) break;
         uVar29 = uVar29 + 0x10;
      };
      if (uVar24 == 0xffffffff) {
         iVar5 = 0;
         for (uVar24 = (uint)uVar4; ( uVar24 & 1 ) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
            iVar5 = iVar5 + 1;
         }
         *(int*)( this + 0x18 ) = *(int*)( this + 0x18 ) + -1;
         uVar24 = iVar5 + uVar29;
      }
      uVar23 = uVar1 & uVar24;
      *(byte*)( *(long*)( this + 8 ) + (ulong)uVar23 ) = bVar30;
      *(byte*)( *(long*)( this + 8 ) + ( ulong )(( *(int*)( this + 0x14 ) - 1U & uVar23 - 0xf ) + 0xf) ) = bVar30;
      bVar26 = true;
      *(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
      LAB_00101925:*param_2 = uVar23;
      if (local_30[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
         return bVar26;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* void JPH::StreamUtils::SaveObjectReference<JPH::GroupFilter>(JPH::StreamOut&, JPH::GroupFilter
   const*, JPH::UnorderedMap<JPH::GroupFilter const*, unsigned int, JPH::Hash<JPH::GroupFilter
   const*>, std::equal_to<JPH::GroupFilter const*> >*) */
   void JPH::StreamUtils::SaveObjectReference<JPH::GroupFilter>(StreamOut *param_1, GroupFilter *param_2, UnorderedMap *param_3) {
      uint uVar1;
      undefined1 auVar2[16];
      int iVar3;
      byte bVar4;
      ushort uVar5;
      int iVar6;
      bool bVar7;
      uint uVar8;
      undefined8 *puVar9;
      ulong uVar10;
      uint uVar11;
      GroupFilter **ppGVar12;
      long *plVar13;
      uint uVar14;
      long in_FS_OFFSET;
      byte bVar15;
      byte bVar17;
      undefined1 auVar16[16];
      undefined1 auVar18[16];
      GroupFilter *local_50[2];
      int local_3c;
      GroupFilter *local_38;
      GroupFilter *local_30;
      local_30 = *(GroupFilter**)( in_FS_OFFSET + 0x28 );
      local_50[0] = param_2;
      if (( param_3 == (UnorderedMap*)0x0 ) || ( param_2 == (GroupFilter*)0x0 )) {
         local_38 = (GroupFilter*)CONCAT44(local_38._4_4_, 0xffffffff);
         ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_38, 4);
      } else {
         iVar3 = *(int*)( param_3 + 0x10 );
         if (iVar3 != 0) {
            ppGVar12 = &local_38;
            local_38 = param_2;
            uVar10 = 0xcbf29ce484222325;
            do {
               bVar15 = *(byte*)ppGVar12;
               ppGVar12 = (GroupFilter**)( (long)ppGVar12 + 1 );
               uVar10 = ( uVar10 ^ bVar15 ) * 0x100000001b3;
            } while ( ppGVar12 != &local_30 );
            bVar15 = (byte)uVar10 | 0x80;
            uVar1 = *(uint*)( param_3 + 0x14 ) - 1;
            uVar14 = ( uint )(uVar10 >> 7);
            while (true) {
               uVar14 = uVar14 & uVar1;
               uVar10 = (ulong)uVar14;
               auVar2 = *(undefined1(*) [16])( *(long*)( param_3 + 8 ) + uVar10 );
               for (int i = 0; i < 15; i++) {
                  auVar18[i] = -(bVar15 == auVar2[0]);
               }
               bVar17 = auVar2[0xf];
               auVar18[0xf] = -(bVar15 == bVar17);
               uVar5 = ( ushort )(SUB161(auVar18 >> 7, 0) & 1) | ( ushort )(SUB161(auVar18 >> 0xf, 0) & 1) << 1 | ( ushort )(SUB161(auVar18 >> 0x17, 0) & 1) << 2 | ( ushort )(SUB161(auVar18 >> 0x1f, 0) & 1) << 3 | ( ushort )(SUB161(auVar18 >> 0x27, 0) & 1) << 4 | ( ushort )(SUB161(auVar18 >> 0x2f, 0) & 1) << 5 | ( ushort )(SUB161(auVar18 >> 0x37, 0) & 1) << 6 | ( ushort )(SUB161(auVar18 >> 0x3f, 0) & 1) << 7 | ( ushort )(SUB161(auVar18 >> 0x47, 0) & 1) << 8 | ( ushort )(SUB161(auVar18 >> 0x4f, 0) & 1) << 9 | ( ushort )(SUB161(auVar18 >> 0x57, 0) & 1) << 10 | ( ushort )(SUB161(auVar18 >> 0x5f, 0) & 1) << 0xb | ( ushort )(SUB161(auVar18 >> 0x67, 0) & 1) << 0xc | ( ushort )(SUB161(auVar18 >> 0x6f, 0) & 1) << 0xd | ( ushort )(SUB161(auVar18 >> 0x77, 0) & 1) << 0xe | ( ushort )(auVar18[0xf] >> 7) << 0xf;
               if (uVar5 != 0) {
                  uVar11 = (uint)uVar5;
                  do {
                     iVar6 = 0;
                     for (uVar8 = uVar11; ( uVar8 & 1 ) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                        iVar6 = iVar6 + 1;
                     }
                     uVar8 = (int)uVar10 + iVar6 & uVar1;
                     plVar13 = (long*)( (ulong)uVar8 * 0x10 + *(long*)param_3 );
                     if (param_2 == (GroupFilter*)*plVar13) {
                        if (*(uint*)( param_3 + 0x14 ) == uVar8) goto LAB_00101a3a;
                        ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, plVar13 + 1, 4);
                        goto LAB_00101aab;
                     }
                     uVar10 = ( ulong )(uVar8 + 1);
                     bVar4 = (char)iVar6 + 1U & 0x1f;
                     uVar8 = uVar11 >> bVar4;
                     uVar11 = uVar11 >> bVar4;
                  } while ( uVar8 != 0 );
               }
               for (int i = 0; i < 15; i++) {
                  auVar16[i] = -(auVar2[0] == 0);
               }
               auVar16[0xf] = -(bVar17 == 0);
               if (( ( ( ( ( ( ( ( ( ( ( ( ( ( ( auVar16 >> 7 & (undefined1[16])0x1 ) != (undefined1[16])0x0 || ( auVar16 >> 0xf & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar16 >> 0x17 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar16 >> 0x1f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar16 >> 0x27 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar16 >> 0x2f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar16 >> 0x37 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar16 >> 0x3f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar16 >> 0x47 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar16 >> 0x4f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar16 >> 0x57 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar16 >> 0x5f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar16 >> 0x67 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar16 >> 0x6f & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || ( auVar16 >> 0x77 & (undefined1[16])0x1 ) != (undefined1[16])0x0 ) || bVar17 == 0) break;
               uVar14 = uVar14 + 0x10;
            };
         }
         LAB_00101a3a:local_3c = iVar3;
         bVar7 = HashTable<JPH::GroupFilter_const*,std::pair<JPH::GroupFilter_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::GroupFilter_const*,unsigned_int>,JPH::Hash<JPH::GroupFilter_const*>,std::equal_to<JPH::GroupFilter_const*>>::InsertKey<false>((HashTable<JPH::GroupFilter_const*,std::pair<JPH::GroupFilter_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::GroupFilter_const*,unsigned_int>,JPH::Hash<JPH::GroupFilter_const*>,std::equal_to<JPH::GroupFilter_const*>>*)param_3, local_50, (uint*)&local_38);
         puVar9 = (undefined8*)( ( (ulong)local_38 & 0xffffffff ) * 0x10 + *(long*)param_3 );
         if (bVar7) {
            *puVar9 = param_2;
         }
         *(int*)( puVar9 + 1 ) = iVar3;
         ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_3c, 4);
         ( **(code**)( *(long*)param_2 + 0x28 ) )(param_2, param_1);
      }
      LAB_00101aab:if (local_30 == *(GroupFilter**)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* JPH::GetRTTIOfType(JPH::SoftBodyCreationSettings*) */
   void JPH::_GLOBAL__sub_I_GetRTTIOfType(void) {
      if (DVec3::cTrue == '\0') {
         DVec3::cTrue = '\x01';
         DVec3::cTrue = _LC12;
      }
      return;
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* JPH::SoftBodySharedSettings::~SoftBodySharedSettings() */
   void JPH::SoftBodySharedSettings::~SoftBodySharedSettings(SoftBodySharedSettings *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* JPH::PhysicsMaterial::~PhysicsMaterial() */
   void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* JPH::RTTI::~RTTI() */
   void JPH::RTTI::~RTTI(RTTI *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
}
