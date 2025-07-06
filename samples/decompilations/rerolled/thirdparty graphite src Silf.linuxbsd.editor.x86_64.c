/* graphite2::Silf::Silf() */void graphite2::Silf::Silf(Silf *this) {
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x38 ) = 0;
   *(undefined2*)( this + 0x40 ) = 0;
   *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x44 ) = (undefined1[16])0x0;
   return;
}
/* graphite2::Silf::releaseBuffers() */void graphite2::Silf::releaseBuffers(Silf *this) {
   Pass *pPVar1;
   Pass *this_00;
   pPVar1 = *(Pass**)this;
   if (pPVar1 != (Pass*)0x0) {
      this_00 = pPVar1 + *(long*)( pPVar1 + -8 ) * 0x90;
      if (pPVar1 != this_00) {
         do {
            this_00 = this_00 + -0x90;
            graphite2::Pass::~Pass(this_00);
         }
 while ( *(Pass**)this != this_00 );
      }

      free(this_00 + -8);
   }

   if (*(void**)( this + 8 ) != (void*)0x0) {
      free(*(void**)( this + 8 ));
   }

   for (int i = 0; i < 3; i++) {
      free(*(void**)( this + ( 8*i + 16 ) ));
   }

   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   return;
}
/* graphite2::Silf::~Silf() */void graphite2::Silf::~Silf(Silf *this) {
   releaseBuffers(this);
   return;
}
/* graphite2::Silf::findPseudo(unsigned int) const */ushort graphite2::Silf::findPseudo(Silf *this, uint param_1) {
   uint *puVar1;
   ushort uVar2;
   uint *puVar3;
   uVar2 = *(ushort*)( this + 0x3a );
   if (uVar2 != 0) {
      puVar3 = *(uint**)( this + 8 );
      puVar1 = puVar3 + ( ulong )(uVar2 - 1) * 2 + 2;
      do {
         if (*puVar3 == param_1) {
            return (ushort)puVar3[1];
         }

         puVar3 = puVar3 + 2;
      }
 while ( puVar3 != puVar1 );
      uVar2 = 0;
   }

   return uVar2;
}
/* graphite2::Silf::findClassIndex(unsigned short, unsigned short) const */ulong graphite2::Silf::findClassIndex(Silf *this, ushort param_1, ushort param_2) {
   ulong uVar1;
   ushort *puVar2;
   ushort *puVar3;
   uint uVar4;
   ushort *puVar5;
   uVar1 = 0xffffffff;
   if (*(ushort*)( this + 0x3c ) < param_1) {
      return uVar1;
   }

   uVar4 = *(uint*)( *(long*)( this + 0x10 ) + (ulong)param_1 * 4 );
   puVar3 = (ushort*)( *(long*)( this + 0x18 ) + (ulong)uVar4 * 2 );
   if (param_1 < *(ushort*)( this + 0x3e )) {
      uVar4 = *(int*)( *(long*)( this + 0x10 ) + 4 + (ulong)param_1 * 4 ) - uVar4;
      if (uVar4 != 0) {
         uVar1 = 0;
         while (puVar3[uVar1] != param_2) {
            uVar1 = uVar1 + 1;
            if (uVar4 == uVar1) {
               return 0xffffffff;
            }

         }
;
      }

   }
 else {
      puVar5 = puVar3 + 4;
      puVar3 = puVar5 + (int)( ( uint ) * puVar3 * 2 );
      do {
         puVar2 = (ushort*)( ( ( (long)puVar3 - (long)puVar5 >> 1 ) - ( (long)puVar3 - (long)puVar5 >> 0x3f ) & 0xfffffffffffffffcU ) + (long)puVar5 );
         if (*puVar2 <= param_2) {
            puVar5 = puVar2;
            puVar2 = puVar3;
         }

         puVar3 = puVar2;
      }
 while ( 4 < (long)puVar3 - (long)puVar5 );
      uVar1 = 0xffffffff;
      if (*puVar5 == param_2) {
         return (ulong)puVar5[1];
      }

   }

   return uVar1;
}
/* graphite2::Silf::getClassGlyph(unsigned short, unsigned int) const */undefined2 graphite2::Silf::getClassGlyph(Silf *this, ushort param_1, uint param_2) {
   int iVar1;
   uint uVar2;
   uint uVar3;
   undefined2 uVar4;
   uVar4 = 0;
   if (param_1 <= *(ushort*)( this + 0x3c )) {
      iVar1 = *(int*)( *(long*)( this + 0x10 ) + (ulong)param_1 * 4 );
      uVar2 = *(uint*)( *(long*)( this + 0x10 ) + 4 + (ulong)param_1 * 4 );
      if (param_1 < *(ushort*)( this + 0x3e )) {
         uVar4 = 0;
         if (param_2 < uVar2 - iVar1) {
            return *(undefined2*)( *(long*)( this + 0x18 ) + ( ulong )(param_2 + iVar1) * 2 );
         }

      }
 else {
         uVar3 = iVar1 + 4;
         if (uVar3 < uVar2) {
            while (*(ushort*)( *(long*)( this + 0x18 ) + ( ulong )(uVar3 + 1) * 2 ) != param_2) {
               uVar3 = uVar3 + 2;
               if (uVar2 <= uVar3) {
                  return 0;
               }

            }
;
            uVar4 = *(undefined2*)( *(long*)( this + 0x18 ) + (ulong)uVar3 * 2 );
         }

      }

   }

   return uVar4;
}
/* graphite2::Silf::runGraphite(graphite2::Segment*, unsigned char, unsigned char, int) const */undefined8 graphite2::Silf::runGraphite(Silf *this, Segment *param_1, uchar param_2, uchar param_3, int param_4) {
   long lVar1;
   char cVar2;
   undefined8 uVar3;
   ulong uVar4;
   Machine *pMVar5;
   Silf SVar6;
   Silf SVar7;
   long in_FS_OFFSET;
   Segment *local_1ab8;
   undefined8 local_1ab0;
   undefined4 local_18a8;
   undefined8 local_18a0;
   undefined4 local_1898;
   Silf local_1894;
   undefined1 local_1893;
   undefined1 *local_1888;
   undefined1 *puStack_1880;
   undefined1 local_1878[2048];
   Segment **local_1078;
   undefined8 local_1070;
   Segment **local_1068;
   undefined8 local_1060;
   undefined4 local_1058;
   int local_50;
   long local_40;
   SVar7 = this[0x2d];
   local_1888 = local_1878;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_1894 = this[0x2f];
   lVar1 = *(long*)( param_1 + 0xb0 );
   local_1893 = 0;
   local_1070 = *(undefined8*)( *(long*)( param_1 + 0x88 ) + 0x90 );
   local_1078 = &local_1ab8;
   local_18a8 = 0;
   local_18a0 = 0;
   local_1898 = ( undefined4 )(lVar1 << 6);
   local_1ab0 = 0;
   local_50 = 0;
   local_1058 = 0;
   local_1060 = 0;
   local_1ab8 = param_1;
   puStack_1880 = local_1888;
   local_1068 = local_1078;
   if (param_3 == '\0') {
      if (( param_2 == '\0' ) && ( SVar7 == (Silf)0xff )) goto LAB_00100399;
      param_3 = *(uchar*)( this + 0x28 );
   }

   if (param_2 < (byte)SVar7) {
      if ((byte)SVar7 <= param_3) goto LAB_001003ed;
      if (param_4 != 0) goto LAB_00100530;
      LAB_00100406:SVar7 = (Silf)0xff;
   }
 else {
      if (( param_4 == 0 ) || ( SVar7 != (Silf)param_2 )) goto LAB_00100406;
      if (param_3 < (byte)SVar7) {
         LAB_00100530:if (param_3 + 1 != (uint)(byte)SVar7) goto LAB_00100406;
      }

      LAB_001003ed:param_3 = param_3 + '\x01';
   }

   uVar4 = (ulong)param_2;
   while (SVar6 = (Silf)param_3,uVar4 < (byte)SVar6) {
      if ((byte)SVar7 != uVar4) {
         do {
            pMVar5 = (Machine*)( uVar4 * 0x90 + *(long*)this );
            if (( ( ( ( 0x1f < uVar4 ) || ( ( (byte)param_1[0xc6] >> ( (uint)uVar4 & 0x1f ) & 1 ) == 0 ) ) || ( pMVar5[0x48] != (Machine)0x0 ) ) && ( cVar2 = graphite2::Pass::runGraphite(pMVar5, (FiniteStateMachine*)&local_1068, SUB81(&local_1888, 0)) ),cVar2 == '\0' )) {
               uVar3 = 0;
               goto LAB_0010039e;
            }

            uVar4 = uVar4 + 1;
            if ((byte)SVar6 <= uVar4) goto LAB_00100399;
         }
 while ( (byte)SVar7 != uVar4 );
      }

      if (( ( (char)param_1[0xc4] >> 6 ^ (byte)param_1[0xc4] ) & 1 ) != ( (byte)this[0x2f] & 1 )) {
         graphite2::Segment::reverseSlots();
      }

      if (( this[0x34] != (Silf)0x0 ) && ( ( ~(byte)param_1[0xc4] & 3 ) == 0 )) {
         graphite2::Segment::doMirror((ushort)param_1);
      }

      SVar7 = SVar6;
      param_3 = (char)SVar6 + -1;
   }
;
   LAB_00100399:uVar3 = 1;
   LAB_0010039e:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* graphite2::Silf::readClassMap(unsigned char const*, unsigned long, unsigned int,
   graphite2::Error&) */ulong graphite2::Silf::readClassMap(Silf *this, uchar *param_1, ulong param_2, uint param_3, Error *param_4) {
   uint *puVar1;
   ushort uVar2;
   uint *puVar3;
   ushort uVar4;
   uint uVar5;
   uint uVar6;
   uint *puVar7;
   uint *puVar8;
   void *pvVar9;
   size_t sVar10;
   ushort *puVar11;
   ushort uVar12;
   long lVar13;
   ushort uVar14;
   ulong uVar15;
   ushort *local_40[2];
   if (param_2 < 4) {
      *(undefined4*)param_4 = 0x1b;
      return 0xffffffff;
   }

   *(undefined4*)param_4 = 0;
   puVar11 = (ushort*)( param_1 + 4 );
   uVar4 = *(ushort*)param_1 << 8 | *(ushort*)param_1 >> 8;
   *(ushort*)( this + 0x3c ) = uVar4;
   uVar12 = *(ushort*)( param_1 + 2 ) << 8 | *(ushort*)( param_1 + 2 ) >> 8;
   *(ushort*)( this + 0x3e ) = uVar12;
   if (uVar4 < uVar12) {
      *(undefined4*)param_4 = 0x1c;
      return 0xffffffff;
   }

   *(undefined4*)param_4 = 0;
   lVar13 = (long)(int)( uVar4 + 1 );
   local_40[0] = puVar11;
   if (param_3 < 0x40000) {
      if (param_2 - 4 < ( ulong )(lVar13 * 2)) goto LAB_00100689;
      uVar2 = uVar4 * 2 + 6;
      uVar14 = *(ushort*)( param_1 + 4 ) << 8 | *(ushort*)( param_1 + 4 ) >> 8;
      uVar15 = (ulong)(long)(int)( ( uint )(ushort)(puVar11[uVar4] << 8 | puVar11[uVar4] >> 8) - (uint)uVar2 ) >> 1;
      uVar5 = (uint)uVar15;
      if (uVar14 != uVar2) {
         *(undefined4*)param_4 = 0x1e;
         return 0xffffffff;
      }

      if (param_2 - uVar14 >> 1 < ( uVar15 & 0xffffffff )) goto LAB_00100741;
      puVar8 = (uint*)malloc(lVar13 << 2);
      *(uint**)( this + 0x10 ) = puVar8;
      if (puVar8 == (uint*)0x0) goto LAB_00100850;
      *(undefined4*)param_4 = 0;
      puVar3 = puVar8 + (ulong)uVar4 + 1;
      do {
         uVar14 = *puVar11;
         puVar11 = puVar11 + 1;
         uVar6 = ( uint )((ulong)(long)(int)( ( uint )(ushort)(uVar14 << 8 | uVar14 >> 8) - (uint)uVar2 ) >> 1);
         *puVar8 = uVar6;
         if (uVar5 < uVar6) goto LAB_00100741;
         puVar8 = puVar8 + 1;
         local_40[0] = puVar11;
      }
 while ( puVar3 != puVar8 );
   }
 else {
      if (param_2 - 4 < ( ulong )(lVar13 << 2)) goto LAB_00100689;
      uVar5 = readClassOffsets<unsigned_int>(this, (uchar**)local_40, param_2, param_4);
   }

   if (uVar5 == 0xffffffff) {
      return 0xffffffff;
   }

   if ((int)( (uint)uVar12 + ( (uint)uVar4 - (uint)uVar12 ) * 6 ) <= (int)uVar5) {
      puVar3 = *(uint**)( this + 0x10 );
      *(undefined4*)param_4 = 0;
      puVar8 = puVar3 + uVar12;
      if (puVar3 != puVar8) {
         puVar7 = puVar3;
         uVar6 = *puVar3;
         do {
            puVar1 = puVar7 + 1;
            if (*puVar1 < uVar6) {
               *(undefined4*)param_4 = 0x20;
               return 0xffffffff;
            }

            puVar7 = puVar7 + 1;
            uVar6 = *puVar1;
         }
 while ( puVar8 != puVar7 );
      }

      uVar15 = (ulong)uVar5;
      pvVar9 = malloc(uVar15 * 2);
      *(void**)( this + 0x18 ) = pvVar9;
      if (pvVar9 == (void*)0x0) {
         LAB_00100850:*(undefined4*)param_4 = 1;
         return 0xffffffff;
      }

      *(undefined4*)param_4 = 0;
      if (uVar15 != 0) {
         sVar10 = 0;
         do {
            *(ushort*)( (long)pvVar9 + sVar10 ) = *(ushort*)( (long)local_40[0] + sVar10 ) << 8 | *(ushort*)( (long)local_40[0] + sVar10 ) >> 8;
            sVar10 = sVar10 + 2;
         }
 while ( uVar15 * 2 != sVar10 );
      }

      while (true) {
         if (puVar8 == puVar3 + uVar4) {
            return uVar15;
         }

         uVar6 = *puVar8;
         puVar11 = (ushort*)( (long)pvVar9 + (ulong)uVar6 * 2 );
         if (uVar5 < uVar6 + 4) break;
         uVar12 = *puVar11;
         if (( ( uVar12 == 0 ) || ( uVar5 < uVar6 + 4 + (uint)uVar12 * 2 ) ) || ( (uint)uVar12 != (uint)puVar11[3] + (uint)puVar11[1] )) {
            *(undefined4*)param_4 = 0x21;
            return 0xffffffff;
         }

         if (( puVar8[1] - uVar6 & 1 ) != 0) {
            *(undefined4*)param_4 = 0xffffffff;
            return 0xffffffff;
         }

         puVar8 = puVar8 + 1;
      }
;
      LAB_00100741:*(undefined4*)param_4 = 0x1f;
      return 0xffffffff;
   }

   LAB_00100689:*(undefined4*)param_4 = 0x1d;
   return 0xffffffff;
}
/* graphite2::Silf::readGraphite(unsigned char const*, unsigned long, graphite2::Face&, unsigned
   int) */undefined8 graphite2::Silf::readGraphite(Silf *this, uchar *param_1, ulong param_2, Face *param_3, uint param_4) {
   Silf SVar1;
   Silf SVar2;
   Silf SVar3;
   Silf SVar4;
   Silf SVar5;
   Silf SVar6;
   Silf SVar7;
   Silf SVar8;
   Silf SVar9;
   Silf SVar10;
   byte bVar11;
   ushort uVar12;
   undefined4 uVar13;
   char cVar14;
   uint uVar15;
   uint uVar16;
   undefined4 *puVar17;
   undefined4 *puVar18;
   undefined4 *puVar19;
   void *pvVar20;
   ulong uVar21;
   ulong *puVar22;
   undefined8 uVar23;
   Pass *this_00;
   ushort *puVar24;
   ushort *puVar25;
   long lVar26;
   ushort uVar27;
   uint uVar28;
   ushort *puVar29;
   undefined8 *puVar30;
   int iVar31;
   long in_FS_OFFSET;
   ulong local_a8;
   int local_54;
   ushort *local_50;
   uint *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = (ushort*)param_1;
   if (0x5ffff < param_4) {
      local_54 = 0x37;
      releaseBuffers(this);
      *(int*)( param_3 + 0x98 ) = local_54;
      goto LAB_001008bf;
   }

   local_54 = 0;
   if (param_4 < 0x30000) {
      puVar24 = (ushort*)param_1;
      if (0x13 < param_2) goto LAB_00100914;
      LAB_001009ea:local_54 = 7;
      LAB_001009f2:releaseBuffers(this);
      *(int*)( param_3 + 0x98 ) = local_54;
   }
 else {
      puVar24 = (ushort*)( param_1 + 8 );
      if (param_2 < 0x1c) goto LAB_001009ea;
      LAB_00100914:uVar27 = *puVar24;
      puVar25 = puVar24 + 10;
      *(ushort*)( this + 0x44 ) = puVar24[1] << 8 | puVar24[1] >> 8;
      *(ushort*)( this + 0x46 ) = puVar24[2] << 8 | puVar24[2] >> 8;
      SVar1 = *(Silf*)( puVar24 + 3 );
      this[0x28] = SVar1;
      SVar2 = *(Silf*)( (long)puVar24 + 7 );
      this[0x2a] = SVar2;
      SVar3 = *(Silf*)( puVar24 + 4 );
      this[0x2b] = SVar3;
      SVar4 = *(Silf*)( (long)puVar24 + 9 );
      this[0x2c] = SVar4;
      SVar5 = *(Silf*)( puVar24 + 5 );
      this[0x2d] = SVar5;
      this[0x2e] = *(Silf*)( (long)puVar24 + 0xb );
      SVar6 = *(Silf*)( puVar24 + 7 );
      this[0x30] = SVar6;
      SVar7 = *(Silf*)( (long)puVar24 + 0xf );
      this[0x31] = SVar7;
      SVar8 = *(Silf*)( puVar24 + 8 );
      this[0x33] = SVar8;
      SVar9 = *(Silf*)( (long)puVar24 + 0x11 );
      this[0x34] = SVar9;
      this[0x35] = *(Silf*)( puVar24 + 9 );
      SVar10 = *(Silf*)( (long)puVar24 + 0x13 );
      this[0x29] = SVar10;
      lVar26 = *(long*)( param_3 + 0x78 );
      local_50 = puVar25;
      if (( ushort )(uVar27 << 8 | uVar27 >> 8) < *(ushort*)( lVar26 + 0x28 )) {
         puVar24 = (ushort*)( param_1 + param_2 );
         if (puVar24 <= (ushort*)( ( ulong )((uint)(byte)SVar10 * 8) + (long)puVar25 )) {
            iVar31 = 9;
            goto LAB_001009bc;
         }

         if (SVar10 != (Silf)0x0) {
            uVar21 = (ulong)(byte)SVar10;
            puVar17 = (undefined4*)malloc(uVar21 * 4);
            *(undefined4**)( this + 0x20 ) = puVar17;
            if (puVar17 == (undefined4*)0x0) {
               *(undefined4*)( param_3 + 0x98 ) = 1;
               goto LAB_001008bf;
            }

            puVar18 = puVar17;
            puVar29 = puVar25;
            do {
               uVar13 = *(undefined4*)puVar29;
               puVar19 = puVar18 + 1;
               puVar29 = puVar29 + 4;
               *puVar18 = uVar13;
               puVar18 = puVar19;
            }
 while ( puVar17 + uVar21 != puVar19 );
            puVar25 = puVar25 + uVar21 * 4;
         }

         puVar29 = puVar25 + 5;
         if (puVar24 <= puVar29) {
            local_54 = 10;
            local_50 = puVar25;
            releaseBuffers(this);
            *(int*)( param_3 + 0x98 ) = local_54;
            goto LAB_001008bf;
         }

         uVar27 = *puVar25 << 8 | *puVar25 >> 8;
         *(ushort*)( this + 0x38 ) = uVar27;
         this[0x32] = *(Silf*)( puVar25 + 1 );
         this[0x36] = *(Silf*)( (long)puVar25 + 3 );
         this[0x2f] = ( Silf )((char)puVar25[2] + -1);
         SVar10 = *(Silf*)( (long)puVar25 + 5 );
         this[0x37] = SVar10;
         bVar11 = *(byte*)( (long)puVar25 + 9 );
         local_50 = (ushort*)( (long)puVar29 + (ulong)bVar11 * 2 + 1 );
         if (puVar24 <= local_50) {
            local_54 = 0xb;
            releaseBuffers(this);
            *(int*)( param_3 + 0x98 ) = local_54;
            goto LAB_001008bf;
         }

         puVar29 = puVar29 + (ulong)bVar11 + ( ulong ) * (byte*)( (long)puVar29 + (ulong)bVar11 * 2 + 1 ) * 2 + 1;
         if (puVar24 <= puVar29 + 3) {
            local_54 = 0xc;
            releaseBuffers(this);
            *(int*)( param_3 + 0x98 ) = local_54;
            goto LAB_001008bf;
         }

         *(ushort*)( this + 0x40 ) = *puVar29 << 8 | *puVar29 >> 8;
         local_48 = (uint*)( puVar29 + 1 );
         uVar28 = *(uint*)( puVar29 + 1 );
         uVar21 = ( ulong ) * (ushort*)( lVar26 + 0x2a );
         if (uVar21 <= (byte)SVar6) {
            iVar31 = 0xd;
            goto LAB_001009bc;
         }

         if (uVar21 <= (byte)SVar7) {
            iVar31 = 0xe;
            goto LAB_001009bc;
         }

         if (uVar21 <= (byte)SVar8) {
            iVar31 = 0xf;
            goto LAB_001009bc;
         }

         if (uVar21 <= (byte)SVar9) {
            iVar31 = 0x10;
            goto LAB_001009bc;
         }

         if (( SVar10 != (Silf)0x0 ) && ( uVar21 - 5 <= (ulong)(byte)SVar10 )) {
            iVar31 = 0x35;
            goto LAB_001009bc;
         }

         if (0x80 < (byte)SVar1) {
            iVar31 = 0x11;
            goto LAB_001009bc;
         }

         uVar28 = uVar28 >> 0x18 | ( uVar28 & 0xff0000 ) >> 8 | ( uVar28 & 0xff00 ) << 8 | uVar28 << 0x18;
         uVar21 = (ulong)uVar28;
         if (param_2 <= uVar21) {
            iVar31 = 0x12;
            goto LAB_001009bc;
         }

         if ((byte)SVar3 < (byte)SVar2) {
            iVar31 = 0x13;
            goto LAB_001009bc;
         }

         if ((byte)SVar1 < (byte)SVar3) {
            iVar31 = 0x14;
            goto LAB_001009bc;
         }

         if ((byte)SVar4 < (byte)SVar3) {
            iVar31 = 0x16;
            goto LAB_001009bc;
         }

         if ((byte)SVar1 < (byte)SVar4) {
            iVar31 = 0x17;
            goto LAB_001009bc;
         }

         if (( SVar5 != (Silf)0xff ) && ( ( (byte)SVar5 < (byte)SVar4 || ( (byte)SVar1 < (byte)SVar5 ) ) )) {
            iVar31 = 0x19;
            goto LAB_001009bc;
         }

         if (0x7f < uVar27) {
            iVar31 = 0x18;
            goto LAB_001009bc;
         }

         local_a8 = (ulong)(byte)SVar1;
         local_50 = puVar29 + 3 + local_a8 * 2;
         if (uVar21 <= ( ulong )(uint)((int)local_50 - (int)param_1) + 2) {
            local_54 = 0x12;
            releaseBuffers(this);
            *(int*)( param_3 + 0x98 ) = local_54;
            goto LAB_001008bf;
         }

         puVar24 = local_50 + 4;
         uVar27 = *local_50 << 8 | *local_50 >> 8;
         *(ushort*)( this + 0x3a ) = uVar27;
         local_50 = puVar24;
         pvVar20 = malloc((ulong)uVar27 * 8);
         *(void**)( this + 8 ) = pvVar20;
         if (uVar21 <= ( ulong )(uint)((int)puVar24 - (int)param_1) + (ulong)uVar27 * 6) {
            iVar31 = 0x1a;
            goto LAB_001009bc;
         }

         iVar31 = 1;
         if (pvVar20 == (void*)0x0) goto LAB_001009bc;
         for (lVar26 = 0; (int)lVar26 < (int)(uint)uVar27; lVar26 = lVar26 + 1) {
            uVar16 = be::read<unsigned_int>((uchar**)&local_50);
            *(uint*)( (long)pvVar20 + lVar26 * 8 ) = uVar16;
            uVar12 = *local_50;
            local_50 = local_50 + 1;
            *(uint*)( (long)pvVar20 + lVar26 * 8 + 4 ) = ( uint )(ushort)(uVar12 << 8 | uVar12 >> 8);
         }

         lVar26 = uVar21 - (long)local_50;
         uVar21 = readClassMap(this, (uchar*)local_50, ( ulong )(param_1 + lVar26), param_4, (Error*)&local_54);
         puVar22 = (ulong*)malloc(local_a8 * 0x90 + 8);
         *puVar22 = local_a8;
         this_00 = (Pass*)( puVar22 + 1 );
         while (local_a8 = local_a8 - 1,local_a8 != 0xffffffffffffffff) {
            graphite2::Pass::Pass(this_00);
            this_00 = this_00 + 0x90;
         }
;
         *(Pass**)this = (Pass*)( puVar22 + 1 );
         if (local_54 == 0) {
            if (uVar21 <= ( ( ulong )(param_1 + lVar26) & 0xffffffff )) {
               for (uVar21 = 0; uVar21 < (byte)this[0x28]; uVar21 = uVar21 + 1) {
                  uVar15 = be::read<unsigned_int>((uchar**)&local_48);
                  uVar16 = *local_48;
                  *(uint*)( param_3 + 0x9c ) = ( *(uint*)( param_3 + 0x98 ) & 0xff00 ) + 3 + (int)uVar21 * 0x10000;
                  uVar16 = uVar16 >> 0x18 | ( uVar16 & 0xff0000 ) >> 8 | ( uVar16 & 0xff00 ) << 8 | uVar16 << 0x18;
                  if (( uVar16 < uVar15 ) || ( local_54 = uVar15 < uVar28 )) {
                     iVar31 = 0x22;
                     goto LAB_001009bc;
                  }

                  if (param_2 < uVar16) {
                     iVar31 = 0x23;
                     goto LAB_001009bc;
                  }

                  iVar31 = 4;
                  if (( uVar21 < (byte)this[0x2c] ) && ( iVar31 = 3 ),uVar21 < (byte)this[0x2b]) {
                     iVar31 = 2 - ( uint )(uVar21 < (byte)this[0x2a]);
                  }

                  puVar30 = (undefined8*)( uVar21 * 0x90 + *(long*)this );
                  *puVar30 = this;
                  cVar14 = graphite2::Pass::readPass(puVar30, param_1 + uVar15, uVar16 - uVar15, (ulong)uVar15, param_3, iVar31, param_4, (Error*)&local_54);
                  if (cVar14 == '\0') {
                     releaseBuffers(this);
                     goto LAB_001008bf;
                  }

               }

               uVar28 = 1;
               *(undefined2*)( this + 0x48 ) = *(undefined2*)( *(long*)( param_3 + 0x78 ) + 0x2c );
               this[0x50] = ( Silf )((byte)this[0x50] & 0xfe | this[0x2d] != (Silf)0xff);
               if (this[0x29] == (Silf)0x0) {
                  uVar28 = ( uint )((byte)this[0x2c] < (byte)this[0x2b]);
               }

               this[0x50] = ( Silf )((char)this[0x2e] * '\x02' & 2U | ( byte )(uVar28 << 2) | (byte)this[0x50] & 0xf9);
               *(uint*)( this + 0x4c ) = (byte)this[0x2e] >> 2 & 7;
               uVar23 = 1;
               goto LAB_001008c1;
            }

            local_54 = 0x12;
         }

         goto LAB_001009f2;
      }

      iVar31 = 8;
      LAB_001009bc:local_54 = iVar31;
      releaseBuffers(this);
      *(int*)( param_3 + 0x98 ) = local_54;
   }

   LAB_001008bf:uVar23 = 0;
   LAB_001008c1:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar23;
}
/* unsigned int be::read<unsigned int>(unsigned char const*&) */uint be::read<unsigned_int>(uchar **param_1) {
   uint uVar1;
   uVar1 = *(uint*)*param_1;
   *param_1 = (uchar*)( (long)*param_1 + 4 );
   return uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18;
}
/* unsigned int graphite2::Silf::readClassOffsets<unsigned int>(unsigned char const*&, unsigned
   long, graphite2::Error&) */uint graphite2::Silf::readClassOffsets<unsigned_int>(Silf *this, uchar **param_1, ulong param_2, Error *param_3) {
   uint *puVar1;
   undefined4 uVar2;
   uint *puVar3;
   ulong uVar4;
   uint uVar5;
   uint *puVar6;
   uint uVar7;
   uint uVar8;
   uVar4 = ( ulong ) * (ushort*)( this + 0x3c );
   puVar6 = (uint*)*param_1;
   uVar7 = puVar6[uVar4];
   uVar8 = ( uint ) * (ushort*)( this + 0x3c ) * 4 + 8;
   uVar5 = *puVar6;
   uVar7 = ( uVar7 >> 0x18 | ( uVar7 & 0xff0000 ) >> 8 | ( uVar7 & 0xff00 ) << 8 | uVar7 << 0x18 ) - uVar8 >> 1;
   if (( uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18 ) == uVar8) {
      if (param_2 - uVar8 >> 1 < (ulong)uVar7) {
         uVar2 = 0x1f;
      }
 else {
         puVar3 = (uint*)malloc(uVar4 * 4 + 4);
         *(uint**)( this + 0x10 ) = puVar3;
         if (puVar3 == (uint*)0x0) {
            uVar2 = 1;
         }
 else {
            *(undefined4*)param_3 = 0;
            puVar1 = puVar3 + uVar4 + 1;
            while (true) {
               uVar5 = *puVar6;
               puVar6 = puVar6 + 1;
               *param_1 = (uchar*)puVar6;
               uVar5 = ( uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18 ) - uVar8 >> 1;
               *puVar3 = uVar5;
               if (uVar7 < uVar5) break;
               puVar3 = puVar3 + 1;
               *(undefined4*)param_3 = 0;
               if (puVar1 == puVar3) {
                  return uVar7;
               }

            }
;
            uVar2 = 0x1f;
         }

      }

   }
 else {
      uVar2 = 0x1e;
   }

   *(undefined4*)param_3 = uVar2;
   return 0xffffffff;
}

