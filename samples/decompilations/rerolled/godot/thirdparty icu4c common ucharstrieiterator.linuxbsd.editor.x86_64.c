/* icu_76_godot::UCharsTrie::Iterator::Iterator(icu_76_godot::ConstChar16Ptr, int, UErrorCode&) */void icu_76_godot::UCharsTrie::Iterator::Iterator(Iterator *this, undefined8 *param_2, undefined4 param_3, UErrorCode *param_4) {
   undefined8 uVar1;
   int iVar2;
   UVector32 *this_00;
   uVar1 = *param_2;
   iVar2 = *(int*)param_4;
   *(undefined8*)( this + 0x18 ) = 0xffffffffffffffff;
   this[0x20] = (Iterator)0x0;
   *(code**)( this + 0x28 ) = icu_76_godot::UVector32::UVector32;
   *(undefined2*)( this + 0x30 ) = 2;
   *(undefined4*)( this + 0x68 ) = param_3;
   *(undefined4*)( this + 0x6c ) = 0;
   *(undefined8*)( this + 0x70 ) = 0;
   *(undefined8*)this = uVar1;
   *(undefined8*)( this + 8 ) = uVar1;
   *(undefined8*)( this + 0x10 ) = uVar1;
   if (0 < iVar2) {
      return;
   }

   this_00 = (UVector32*)icu_76_godot::UMemory::operator_new((UMemory*)0x20, 2);
   if (this_00 == (UVector32*)0x0) {
      *(undefined8*)( this + 0x70 ) = 0;
      *(undefined4*)param_4 = 7;
   }
 else {
      icu_76_godot::UVector32::UVector32(this_00, param_4);
      *(UVector32**)( this + 0x70 ) = this_00;
   }

   return;
}
/* icu_76_godot::UCharsTrie::Iterator::Iterator(icu_76_godot::UCharsTrie const&, int, UErrorCode&)
    */void icu_76_godot::UCharsTrie::Iterator::Iterator(Iterator *this, UCharsTrie *param_1, int param_2, UErrorCode *param_3) {
   int iVar1;
   undefined4 uVar2;
   int iVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   UVector32 *this_00;
   int iVar6;
   uVar4 = *(undefined8*)( param_1 + 8 );
   uVar5 = *(undefined8*)( param_1 + 0x10 );
   iVar1 = *(int*)param_3;
   this[0x20] = (Iterator)0x0;
   *(int*)( this + 0x68 ) = param_2;
   *(undefined8*)this = uVar4;
   *(undefined8*)( this + 8 ) = uVar5;
   *(undefined8*)( this + 0x10 ) = uVar5;
   uVar2 = *(undefined4*)( param_1 + 0x18 );
   *(code**)( this + 0x28 ) = icu_76_godot::UVector32::UVector32;
   *(undefined2*)( this + 0x30 ) = 2;
   *(undefined4*)( this + 0x6c ) = 0;
   *(undefined8*)( this + 0x70 ) = 0;
   *(ulong*)( this + 0x18 ) = CONCAT44(uVar2, uVar2);
   if (0 < iVar1) {
      return;
   }

   this_00 = (UVector32*)icu_76_godot::UMemory::operator_new((UMemory*)0x20, 2);
   if (this_00 == (UVector32*)0x0) {
      iVar1 = *(int*)param_3;
      *(undefined8*)( this + 0x70 ) = 0;
      if (iVar1 < 1) {
         *(undefined4*)param_3 = 7;
      }

   }
 else {
      icu_76_godot::UVector32::UVector32(this_00, param_3);
      iVar1 = *(int*)param_3;
      *(UVector32**)( this + 0x70 ) = this_00;
      if (( iVar1 < 1 ) && ( -1 < *(int*)( this + 0x18 ) )) {
         iVar1 = *(int*)( this + 0x68 );
         iVar6 = *(int*)( this + 0x18 ) + 1;
         iVar3 = iVar1;
         if (iVar6 <= iVar1) {
            iVar3 = iVar6;
         }

         if (0 < iVar1) {
            iVar6 = iVar3;
         }

         icu_76_godot::UnicodeString::doAppend((wchar16*)( this + 0x28 ), (int)*(undefined8*)( this + 8 ), 0);
         *(int*)( this + 0x18 ) = *(int*)( this + 0x18 ) - iVar6;
         *(long*)( this + 8 ) = *(long*)( this + 8 ) + (long)iVar6 * 2;
      }

   }

   return;
}
/* icu_76_godot::UCharsTrie::Iterator::~Iterator() */void icu_76_godot::UCharsTrie::Iterator::~Iterator(Iterator *this) {
   if (*(long**)( this + 0x70 ) != (long*)0x0) {
      ( **(code**)( **(long**)( this + 0x70 ) + 8 ) )();
   }

   icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)( this + 0x28 ));
   return;
}
/* icu_76_godot::UCharsTrie::Iterator::reset() */Iterator * __thiscall icu_76_godot::UCharsTrie::Iterator::reset(Iterator *this){
   ushort uVar1;
   uint uVar2;
   uint uVar3;
   int iVar4;
   long lVar5;
   uint uVar6;
   iVar4 = *(int*)( this + 0x1c );
   uVar2 = *(uint*)( this + 0x68 );
   this[0x20] = (Iterator)0x0;
   lVar5 = *(long*)( this + 0x10 );
   uVar6 = iVar4 + 1;
   *(int*)( this + 0x18 ) = iVar4;
   *(long*)( this + 8 ) = lVar5;
   uVar3 = uVar2;
   if ((int)uVar6 <= (int)uVar2) {
      uVar3 = uVar6;
   }

   uVar1 = *(ushort*)( this + 0x30 );
   if (0 < (int)uVar2) {
      uVar6 = uVar3;
   }

   if (( uVar6 == 0 ) && ( ( uVar1 & 1 ) != 0 )) {
      icu_76_godot::UnicodeString::unBogus();
      lVar5 = *(long*)( this + 8 );
      iVar4 = *(int*)( this + 0x18 );
      goto LAB_00100200;
   }

   if ((short)uVar1 < 0) {
      if (*(uint*)( this + 0x34 ) <= uVar6) goto LAB_00100200;
      if (0x3ff < (int)uVar6) {
         *(uint*)( this + 0x34 ) = uVar6;
         *(ushort*)( this + 0x30 ) = uVar1 | 0xffe0;
         goto LAB_00100200;
      }

   }
 else if ((uint)(int)( (short)uVar1 >> 5 ) <= uVar6) goto LAB_00100200;
   *(ushort*)( this + 0x30 ) = uVar1 & 0x1f | ( ushort )(uVar6 << 5);
   LAB_00100200:*(uint*)( this + 0x18 ) = iVar4 - uVar6;
   *(long*)( this + 8 ) = lVar5 + (long)(int)uVar6 * 2;
   icu_76_godot::UVector32::setSize((int)*(undefined8*)( this + 0x70 ));
   return this;
}
/* icu_76_godot::UCharsTrie::Iterator::hasNext() const */undefined4 icu_76_godot::UCharsTrie::Iterator::hasNext(Iterator *this) {
   if (*(long*)( this + 8 ) != 0) {
      return 1;
   }

   return CONCAT31(( int3 )(( uint ) * (int*)( *(long*)( this + 0x70 ) + 8 ) >> 8), *(int*)( *(long*)( this + 0x70 ) + 8 ) != 0);
}
/* icu_76_godot::UCharsTrie::Iterator::branchNext(char16_t const*, int, UErrorCode&) */undefined2 *icu_76_godot::UCharsTrie::Iterator::branchNext(wchar16 *param_1, int param_2, UErrorCode *param_3) {
   ushort uVar1;
   undefined2 uVar2;
   int iVar3;
   long lVar4;
   char cVar5;
   undefined2 *puVar6;
   undefined2 *puVar7;
   uint uVar8;
   ulong uVar9;
   uint uVar10;
   uint uVar11;
   uint uVar12;
   undefined4 in_register_00000034;
   long lVar13;
   undefined2 *puVar14;
   wchar16 wVar15;
   long lVar16;
   long in_FS_OFFSET;
   undefined2 local_42;
   long local_40;
   puVar7 = (undefined2*)CONCAT44(in_register_00000034, param_2);
   uVar10 = (uint)param_3;
   uVar9 = (ulong)param_3 & 0xffffffff;
   lVar16 = *(long*)( param_1 + 0x38 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (5 < (int)uVar10) {
      do {
         puVar6 = puVar7 + 2;
         puVar14 = puVar6;
         if (0xfbff < (ushort)puVar7[1]) {
            puVar14 = puVar7 + 3;
            if (puVar7[1] == 0xffff) {
               puVar14 = puVar7 + 4;
            }

         }

         iVar3 = *(int*)( lVar16 + 8 );
         lVar4 = *(long*)param_1;
         uVar10 = iVar3 + 1;
         if (( (int)uVar10 < 0 ) || ( lVar13 = lVar16 * (int*)( lVar16 + 0xc ) < (int)uVar10 )) {
            cVar5 = icu_76_godot::UVector32::expandCapacity((int)lVar16, (UErrorCode*)(ulong)uVar10);
            if (cVar5 != '\0') {
               iVar3 = *(int*)( lVar16 + 8 );
               lVar13 = *(long*)( param_1 + 0x38 );
               goto LAB_001003f3;
            }

            lVar13 = *(long*)( param_1 + 0x38 );
         }
 else {
            LAB_001003f3:*(int*)( *(long*)( lVar16 + 0x18 ) + (long)iVar3 * 4 ) = (int)( (long)puVar14 - lVar4 >> 1 );
            *(int*)( lVar16 + 8 ) = *(int*)( lVar16 + 8 ) + 1;
         }

         uVar10 = (int)uVar9 >> 1;
         if (param_1[0x18] < L'\0') {
            uVar8 = *(uint*)( param_1 + 0x1a );
         }
 else {
            uVar8 = ( uint )(param_1[0x18] >> 5);
         }

         iVar3 = *(int*)( lVar13 + 8 );
         uVar11 = iVar3 + 1;
         if (( (int)uVar11 < 0 ) || ( lVar16 = lVar13 * (int*)( lVar13 + 0xc ) < (int)uVar11 )) {
            cVar5 = icu_76_godot::UVector32::expandCapacity((int)lVar13, (UErrorCode*)(ulong)uVar11);
            if (cVar5 != '\0') {
               iVar3 = *(int*)( lVar13 + 8 );
               lVar16 = *(long*)( param_1 + 0x38 );
               goto LAB_00100413;
            }

            lVar16 = *(long*)( param_1 + 0x38 );
         }
 else {
            LAB_00100413:*(uint*)( *(long*)( lVar13 + 0x18 ) + (long)iVar3 * 4 ) = ( (int)uVar9 - uVar10 ) * 0x10000 | uVar8;
            *(int*)( lVar13 + 8 ) = *(int*)( lVar13 + 8 ) + 1;
         }

         uVar1 = puVar7[1];
         uVar8 = (uint)uVar1;
         if (uVar1 < 0xfc00) {
            LAB_00100366:puVar7 = puVar6 + (int)uVar8;
         }
 else {
            if (uVar1 != 0xffff) {
               puVar6 = puVar7 + 3;
               uVar8 = ( uVar1 - 0xfc00 ) * 0x10000 | (uint)(ushort)puVar7[2];
               goto LAB_00100366;
            }

            puVar7 = puVar7 + (long)CONCAT22(puVar7[2], puVar7[3]) + 4;
         }

         if ((int)uVar10 < 6) break;
         uVar9 = (ulong)uVar10;
      }
 while ( true );
   }

   uVar1 = puVar7[1];
   uVar2 = *puVar7;
   uVar8 = uVar1 & 0x7fff;
   if (( uVar1 & 0x4000 ) == 0) {
      puVar6 = puVar7 + 2;
   }
 else if (( uVar1 & 0x7fff ) == 0x7fff) {
      puVar6 = puVar7 + 4;
      uVar8 = CONCAT22(puVar7[2], puVar7[3]);
   }
 else {
      puVar6 = puVar7 + 3;
      uVar8 = ( uVar8 - 0x4000 ) * 0x10000 | (uint)(ushort)puVar7[2];
   }

   iVar3 = *(int*)( lVar16 + 8 );
   lVar4 = *(long*)param_1;
   uVar11 = iVar3 + 1;
   if (( (int)uVar11 < 0 ) || ( lVar13 = lVar16 * (int*)( lVar16 + 0xc ) < (int)uVar11 )) {
      cVar5 = icu_76_godot::UVector32::expandCapacity((int)lVar16, (UErrorCode*)(ulong)uVar11);
      if (cVar5 != '\0') {
         iVar3 = *(int*)( lVar16 + 8 );
         lVar13 = *(long*)( param_1 + 0x38 );
         goto LAB_001005c3;
      }

      wVar15 = param_1[0x18];
      lVar13 = *(long*)( param_1 + 0x38 );
      if (wVar15 < L'\0') goto LAB_001005e8;
      LAB_001004f1:uVar11 = ( uint )(wVar15 >> 5);
   }
 else {
      LAB_001005c3:*(int*)( *(long*)( lVar16 + 0x18 ) + (long)iVar3 * 4 ) = (int)( (long)puVar6 - lVar4 >> 1 );
      *(int*)( lVar16 + 8 ) = *(int*)( lVar16 + 8 ) + 1;
      wVar15 = param_1[0x18];
      if (L'\xffff' < wVar15) goto LAB_001004f1;
      LAB_001005e8:uVar11 = *(uint*)( param_1 + 0x1a );
   }

   iVar3 = *(int*)( lVar13 + 8 );
   uVar12 = iVar3 + 1;
   if (( (int)uVar12 < 0 ) || ( *(int*)( lVar13 + 0xc ) < (int)uVar12 )) {
      cVar5 = icu_76_godot::UVector32::expandCapacity((int)lVar13, (UErrorCode*)(ulong)uVar12);
      if (cVar5 == '\0') goto LAB_0010052a;
      iVar3 = *(int*)( lVar13 + 8 );
   }

   *(uint*)( *(long*)( lVar13 + 0x18 ) + (long)iVar3 * 4 ) = ( uVar10 - 1 ) * 0x10000 | uVar11;
   *(int*)( lVar13 + 8 ) = *(int*)( lVar13 + 8 ) + 1;
   LAB_0010052a:local_42 = uVar2;
   icu_76_godot::UnicodeString::doAppend(param_1 + 0x14, (int)&local_42, 0);
   if ((int)(uint)uVar1 >> 0xf == 0) {
      puVar6 = puVar6 + (int)uVar8;
   }
 else {
      for (int i = 0; i < 4; i++) {
         param_1[( i + 4 )] = L'\0';
      }

      puVar6 = (undefined2*)0x0;
      *(uint*)( param_1 + 0x36 ) = uVar8;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::UCharsTrie::Iterator::next(UErrorCode&) */undefined8 icu_76_godot::UCharsTrie::Iterator::next(Iterator *this, UErrorCode *param_1) {
   ushort uVar1;
   long lVar2;
   int iVar3;
   int iVar4;
   undefined8 uVar5;
   ushort *puVar6;
   uint uVar7;
   uint uVar8;
   int iVar9;
   uint uVar10;
   ushort *puVar11;
   undefined2 *puVar12;
   long in_FS_OFFSET;
   bool bVar13;
   uint local_54;
   undefined2 local_42;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = 0;
   if (0 < *(int*)param_1) goto LAB_001006b0;
   puVar6 = *(ushort**)( this + 8 );
   if (puVar6 != (ushort*)0x0) goto LAB_0010068b;
   lVar2 = *(long*)( this + 0x70 );
   iVar4 = *(int*)( lVar2 + 8 );
   if (iVar4 == 0) goto LAB_001006b0;
   puVar12 = *(undefined2**)this;
   iVar3 = iVar4 + -1;
   if (iVar3 < 0) {
      local_54 = 0;
      uVar8 = 0;
      uVar7 = 0;
      bVar13 = true;
   }
 else {
      uVar7 = *(uint*)( *(long*)( lVar2 + 0x18 ) + (long)iVar3 * 4 );
      uVar8 = uVar7 & 0xffff;
      bVar13 = uVar8 == 0;
      local_54 = uVar7 >> 0x10;
      if (iVar4 != 1) {
         puVar12 = puVar12 + *(int*)( *(long*)( lVar2 + 0x18 ) + -4 + (long)iVar3 * 4 );
      }

   }

   icu_76_godot::UVector32::setSize((int)lVar2);
   uVar1 = *(ushort*)( this + 0x30 );
   if (( ( uVar1 & 1 ) == 0 ) || ( !bVar13 )) {
      if ((short)uVar1 < 0) {
         uVar10 = *(uint*)( this + 0x34 );
      }
 else {
         uVar10 = ( uint )((short)uVar1 >> 5);
      }

      if (uVar8 < uVar10) {
         if (( uVar7 & 0xfc00 ) == 0) {
            *(ushort*)( this + 0x30 ) = uVar1 & 0x1f | ( ushort )(uVar7 << 5);
         }
 else {
            *(uint*)( this + 0x34 ) = uVar8;
            *(ushort*)( this + 0x30 ) = uVar1 | 0xffe0;
         }

      }

   }
 else {
      icu_76_godot::UnicodeString::unBogus();
   }

   if (local_54 < 2) {
      local_42 = *puVar12;
      puVar6 = puVar12 + 1;
      icu_76_godot::UnicodeString::doAppend((wchar16*)( this + 0x28 ), (int)&local_42, 0);
      LAB_0010068b:if (*(int*)( this + 0x18 ) < 0) {
         do {
            uVar7 = ( uint ) * puVar6;
            puVar11 = puVar6 + 1;
            if (*puVar6 < 0x40) goto LAB_0010071d;
            LAB_001006ee:if (this[0x20] == (Iterator)0x0) {
               if (uVar7 >> 0xf == 0) {
                  if (uVar7 < 0x4040) {
                     uVar7 = ( (int)uVar7 >> 6 ) - 1;
                  }
 else if (uVar7 < 0x7fc0) {
                     uVar7 = ( ( uVar7 & 0x7fc0 ) - 0x4040 ) * 0x400 | (uint)puVar6[1];
                  }
 else {
                     uVar7 = CONCAT22(puVar6[1], puVar6[2]);
                  }

                  *(uint*)( this + 0x6c ) = uVar7;
                  if (0 < *(int*)( this + 0x68 )) {
                     if (*(short*)( this + 0x30 ) < 0) {
                        iVar4 = *(int*)( this + 0x34 );
                     }
 else {
                        iVar4 = (int)( *(short*)( this + 0x30 ) >> 5 );
                     }

                     if (*(int*)( this + 0x68 ) == iVar4) goto LAB_0010090a;
                  }

                  *(ushort**)( this + 8 ) = puVar6;
                  this[0x20] = (Iterator)0x1;
               }
 else {
                  uVar8 = uVar7 & 0x7fff;
                  if (( uVar7 & 0x4000 ) != 0) {
                     if (( (ushort)uVar7 & 0x7fff ) == 0x7fff) {
                        uVar8 = CONCAT22(puVar6[1], puVar6[2]);
                     }
 else {
                        uVar8 = ( uVar8 - 0x4000 ) * 0x10000 | (uint)puVar6[1];
                     }

                  }

                  *(uint*)( this + 0x6c ) = uVar8;
                  LAB_0010090a:*(undefined8*)( this + 8 ) = 0;
               }

               goto LAB_001006a3;
            }

            if (0x403f < uVar7) {
               puVar11 = puVar6 + 2;
               if (0x7fbf < uVar7) {
                  puVar11 = puVar6 + 3;
               }

            }

            this[0x20] = (Iterator)0x0;
            uVar7 = uVar7 & 0x3f;
            LAB_0010071d:iVar4 = *(int*)( this + 0x68 );
            if (iVar4 < 1) goto LAB_00100783;
            while (true) {
               if (*(short*)( this + 0x30 ) < 0) {
                  iVar3 = *(int*)( this + 0x34 );
               }
 else {
                  iVar3 = (int)( *(short*)( this + 0x30 ) >> 5 );
               }

               if (iVar4 == iVar3) goto LAB_00100693;
               if (uVar7 < 0x30) break;
               iVar9 = uVar7 - 0x2f;
               if (iVar4 < iVar3 + iVar9) {
                  icu_76_godot::UnicodeString::doAppend((wchar16*)( this + 0x28 ), (int)puVar11, 0);
                  goto LAB_00100693;
               }

               while (true) {
                  icu_76_godot::UnicodeString::doAppend((wchar16*)( this + 0x28 ), (int)puVar11, 0);
                  puVar6 = puVar11 + iVar9;
                  uVar7 = ( uint ) * puVar6;
                  puVar11 = puVar6 + 1;
                  if (0x3f < uVar7) goto LAB_001006ee;
                  iVar4 = *(int*)( this + 0x68 );
                  if (0 < iVar4) break;
                  LAB_00100783:iVar9 = uVar7 - 0x2f;
                  if (uVar7 < 0x30) goto LAB_0010078b;
               }
;
            }
;
            LAB_0010078b:if (uVar7 == 0) {
               uVar7 = ( uint ) * puVar11;
               puVar11 = puVar11 + 1;
            }

            puVar6 = (ushort*)branchNext((wchar16*)this, (int)puVar11, (UErrorCode*)( ulong )(uVar7 + 1));
            if (puVar6 == (ushort*)0x0) goto LAB_001006a3;
         }
 while ( true );
      }

      LAB_00100693:*(undefined8*)( this + 8 ) = 0;
      *(undefined4*)( this + 0x6c ) = 0xffffffff;
   }
 else {
      puVar6 = (ushort*)branchNext((wchar16*)this, (int)puVar12, (UErrorCode*)(ulong)local_54);
      if (puVar6 != (ushort*)0x0) goto LAB_0010068b;
   }

   LAB_001006a3:uVar5 = 1;
   LAB_001006b0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}

