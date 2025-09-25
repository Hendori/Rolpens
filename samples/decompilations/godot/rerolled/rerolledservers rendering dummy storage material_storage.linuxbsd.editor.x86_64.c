/* RendererDummy::MaterialStorage::material_set_shader(RID, RID) */void RendererDummy::MaterialStorage::material_set_shader(MaterialStorage *this, ulong param_2, undefined8 param_3) {
   undefined8 *puVar1;
   int iVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x5b4 ) )) {
      puVar1 = (undefined8*)( *(long*)( *(long*)( this + 0x5a0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x5b0 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x5b0 ) ) * 0x18 );
      iVar2 = *(int*)( puVar1 + 2 );
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         *puVar1 = param_3;
         return;
      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("material_set_shader", "servers/rendering/dummy/storage/material_storage.cpp", 0xfb, "Parameter \"material\" is null.", 0, 0);
   return;
}
/* RendererDummy::MaterialStorage::material_set_next_pass(RID, RID) */void RendererDummy::MaterialStorage::material_set_next_pass(MaterialStorage *this, ulong param_2, undefined8 param_3) {
   long lVar1;
   int iVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x5b4 ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x5a0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x5b0 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x5b0 ) ) * 0x18;
      iVar2 = *(int*)( lVar1 + 0x10 );
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         *(undefined8*)( lVar1 + 8 ) = param_3;
         return;
      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("material_set_next_pass", "servers/rendering/dummy/storage/material_storage.cpp", 0x102, "Parameter \"material\" is null.", 0, 0);
   return;
}
/* RendererDummy::MaterialStorage::material_free(RID) */undefined1  [16] __thiscallRendererDummy::MaterialStorage::material_free(MaterialStorage *this, ulong param_2) {
   int iVar1;
   uint uVar2;
   undefined1 auVar3[16];
   long lVar4;
   ulong uStack_10;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x5b4 )) {
         lVar4 = *(long*)( *(long*)( this + 0x5a0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x5b0 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x5b0 ) ) * 0x18;
         iVar1 = *(int*)( lVar4 + 0x10 );
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            if (iVar1 < 0) {
               lVar4 = 0;
               _err_print_error(&_LC11, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0);
            }
 else {
               *(undefined4*)( lVar4 + 0x10 ) = 0xffffffff;
               uVar2 = *(int*)( this + 0x5b8 ) - 1;
               *(uint*)( this + 0x5b8 ) = uVar2;
               uStack_10 = (ulong)uVar2 % ( ulong ) * (uint*)( this + 0x5b0 );
               lVar4 = *(long*)( *(long*)( this + 0x5a8 ) + ( (ulong)uVar2 / ( ulong ) * (uint*)( this + 0x5b0 ) ) * 8 );
               *(uint*)( lVar4 + uStack_10 * 4 ) = (uint)param_2;
            }

            auVar3._8_8_ = uStack_10;
            auVar3._0_8_ = lVar4;
            return auVar3;
         }

         if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   auVar3 = _err_print_error("material_free", "servers/rendering/dummy/storage/material_storage.cpp", 0xf4, "Parameter \"material\" is null.", 0, 0);
   return auVar3;
}
/* SortArray<StringName, StringName::AlphCompare, true>::adjust_heap(long, long, long, StringName,
   StringName*) const [clone .isra.0] */void SortArray<StringName,StringName::AlphCompare,true>::adjust_heap(long param_1, long param_2, long param_3, StringName_conflict *param_4, long param_5) {
   byte *pbVar1;
   byte *pbVar2;
   uint uVar3;
   byte bVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   long lVar9;
   byte *pbVar10;
   long lVar11;
   byte *pbVar12;
   StringName_conflict *pSVar13;
   StringName_conflict *this;
   long lVar14;
   long in_FS_OFFSET;
   StringName_conflict *local_50;
   long local_48;
   long local_40;
   lVar11 = param_2 * 2 + 2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar14 = param_2;
   if (lVar11 < param_3) {
      do {
         lVar9 = lVar11 + -1;
         this(StringName_conflict * )(param_5 + ( lVar9 + param_1 ) * 8);
         pSVar13 = (StringName_conflict*)( param_5 + ( param_1 + lVar11 ) * 8 );
         lVar6 = *(long*)this;
         lVar5 = *(long*)pSVar13;
         if (lVar5 == 0) {
            if (lVar6 != 0) {
               pbVar10 = *(byte**)( lVar6 + 8 );
               uVar8 = 0;
               pbVar12 = &_LC12;
               LAB_001003fc:if (pbVar10 == (byte*)0x0) {
                  lVar5 = 0;
                  uVar3 = **(uint**)( lVar6 + 0x10 );
                  if (uVar3 != 0 || uVar8 != 0) {
                     do {
                        if (uVar8 == 0) goto LAB_001003b0;
                        if (uVar3 == 0) break;
                        if (uVar8 < uVar3) goto LAB_001003b0;
                        if (uVar3 < uVar8) break;
                        uVar8 = (uint)(char)pbVar12[lVar5 + 1];
                        uVar3 = ( *(uint**)( lVar6 + 0x10 ) )[lVar5 + 1];
                        lVar5 = lVar5 + 1;
                     }
 while ( uVar8 != 0 || uVar3 != 0 );
                  }

               }
 else {
                  uVar3 = (uint)(char)*pbVar10;
                  bVar4 = (byte)uVar8 | *pbVar10;
                  LAB_0010044e:if (bVar4 != 0) {
                     lVar6 = 1;
                     do {
                        if (uVar8 == 0) goto LAB_001003b0;
                        if (uVar3 == 0) break;
                        if (uVar8 < uVar3) goto LAB_001003b0;
                        if (uVar3 < uVar8) break;
                        pbVar1 = pbVar12 + lVar6;
                        uVar8 = (uint)(char)*pbVar1;
                        pbVar2 = pbVar10 + lVar6;
                        uVar3 = (uint)(char)*pbVar2;
                        lVar6 = lVar6 + 1;
                     }
 while ( *pbVar1 != 0 || *pbVar2 != 0 );
                  }

               }

            }

         }
 else {
            pbVar12 = *(byte**)( lVar5 + 8 );
            if (lVar6 == 0) {
               if (pbVar12 != (byte*)0x0) {
                  bVar4 = *pbVar12;
                  uVar8 = (uint)(char)bVar4;
                  pbVar10 = &_LC12;
                  uVar3 = 0;
                  goto LAB_0010044e;
               }

               uVar8 = 0;
               pbVar10 = &_LC12;
            }
 else {
               pbVar10 = *(byte**)( lVar6 + 8 );
               if (pbVar12 != (byte*)0x0) {
                  uVar8 = (uint)(char)*pbVar12;
                  goto LAB_001003fc;
               }

               if (pbVar10 == (byte*)0x0) {
                  lVar7 = 4;
                  uVar8 = **(uint**)( lVar6 + 0x10 );
                  uVar3 = **(uint**)( lVar5 + 0x10 );
                  if (uVar8 != 0 || uVar3 != 0) {
                     do {
                        if (uVar3 == 0) goto LAB_001003b0;
                        if (uVar8 == 0) break;
                        if (uVar3 < uVar8) goto LAB_001003b0;
                        if (uVar8 < uVar3) break;
                        uVar3 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar7 );
                        uVar8 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
                        lVar7 = lVar7 + 4;
                     }
 while ( uVar3 != 0 || uVar8 != 0 );
                  }

                  goto LAB_001003d8;
               }

               uVar8 = (uint)(char)*pbVar10;
            }

            lVar6 = 0;
            uVar3 = **(uint**)( lVar5 + 0x10 );
            if (uVar3 != 0 || uVar8 != 0) {
               do {
                  if (uVar3 == 0) goto LAB_001003b0;
                  if (uVar8 == 0) break;
                  if (uVar3 < uVar8) goto LAB_001003b0;
                  if (uVar8 < uVar3) break;
                  uVar3 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
                  uVar8 = (uint)(char)pbVar10[lVar6 + 1];
                  lVar6 = lVar6 + 1;
               }
 while ( uVar3 != 0 || uVar8 != 0 );
            }

         }

         LAB_001003d8:lVar9 = lVar11;
         this =
         pSVar13;
         lVar11 = lVar11 + 1;
         LAB_001003b0:lVar11 = lVar11 * 2;
         StringName::operator =((StringName_conflict*)( param_5 + ( lVar14 + param_1 ) * 8 ), this);
         lVar14 = lVar9;
      }
 while ( lVar11 < param_3 );
      pSVar13 = this;
      if (lVar11 == param_3) goto LAB_00100818;
   }
 else {
      this(StringName_conflict * )(param_5 + ( param_2 + param_1 ) * 8);
      if (lVar11 != param_3) {
         StringName::StringName((StringName_conflict*)&local_48, param_4);
         goto LAB_001005f2;
      }

      LAB_00100818:lVar9 = lVar11 + -1;
      pSVar13 = (StringName_conflict*)( param_5 + ( param_1 + lVar9 ) * 8 );
      StringName::operator =(this, pSVar13);
   }

   StringName::StringName((StringName_conflict*)&local_48, param_4);
   lVar11 = ( lVar9 + -1 ) - ( lVar9 + -1 >> 0x3f );
   this =
   pSVar13;
   while (param_2 < lVar9) {
      lVar14 = lVar11 >> 1;
      this(StringName_conflict * )(param_5 + ( param_1 + lVar14 ) * 8);
      lVar11 = *(long*)this;
      if (lVar11 == 0) {
         if (local_48 != 0) {
            pbVar10 = *(byte**)( local_48 + 8 );
            uVar3 = 0;
            uVar8 = 0;
            pbVar12 = &_LC12;
            if (pbVar10 != (byte*)0x0) goto LAB_001006b3;
            LAB_00100655:uVar8 = **(uint**)( local_48 + 0x10 );
            if (uVar8 != 0 || uVar3 != 0) {
               lVar11 = 0;
               while (uVar3 != 0) {
                  if (uVar8 == 0) goto LAB_001005e8;
                  if (uVar3 < uVar8) break;
                  if (uVar8 < uVar3) goto LAB_001005e8;
                  uVar3 = (uint)(char)pbVar12[lVar11 + 1];
                  uVar8 = ( *(uint**)( local_48 + 0x10 ) )[lVar11 + 1];
                  lVar11 = lVar11 + 1;
                  if (uVar3 == 0 && uVar8 == 0) goto LAB_001005e8;
               }
;
               goto LAB_001005b0;
            }

         }

         LAB_001005e8 = (StringName_conflict*)( param_5 + ( lVar9 + param_1 ) * 8 );
         break;
      }

      pbVar12 = *(byte**)( lVar11 + 8 );
      if (local_48 == 0) {
         uVar8 = 0;
         pbVar10 = &_LC12;
         if (pbVar12 != (byte*)0x0) {
            bVar4 = *pbVar12;
            uVar8 = (uint)(char)bVar4;
            pbVar10 = &_LC12;
            uVar3 = 0;
            goto LAB_001006b9;
         }

         LAB_0010071a:uVar3 = **(uint**)( lVar11 + 0x10 );
         if (uVar3 == 0 && uVar8 == 0) goto LAB_001005e8;
         lVar6 = 0;
         while (uVar3 != 0) {
            if (uVar8 == 0) goto LAB_001005e8;
            if (uVar3 < uVar8) break;
            if (uVar8 < uVar3) goto LAB_001005e8;
            uVar3 = ( *(uint**)( lVar11 + 0x10 ) )[lVar6 + 1];
            uVar8 = (uint)(char)pbVar10[lVar6 + 1];
            lVar6 = lVar6 + 1;
            if (uVar3 == 0 && uVar8 == 0) goto LAB_001005e8;
         }
;
      }
 else {
         pbVar10 = *(byte**)( local_48 + 8 );
         if (pbVar12 == (byte*)0x0) {
            if (pbVar10 != (byte*)0x0) {
               uVar8 = (uint)(char)*pbVar10;
               goto LAB_0010071a;
            }

            uVar8 = **(uint**)( local_48 + 0x10 );
            uVar3 = **(uint**)( lVar11 + 0x10 );
            if (uVar8 == 0 && uVar3 == 0) goto LAB_001005e8;
            lVar6 = 4;
            while (uVar3 != 0) {
               if (uVar8 == 0) goto LAB_001005e8;
               if (uVar3 < uVar8) break;
               if (uVar8 < uVar3) goto LAB_001005e8;
               uVar3 = *(uint*)( (long)*(uint**)( lVar11 + 0x10 ) + lVar6 );
               uVar8 = *(uint*)( (long)*(uint**)( local_48 + 0x10 ) + lVar6 );
               lVar6 = lVar6 + 4;
               if (uVar3 == 0 && uVar8 == 0) {
                  this(StringName_conflict * )(param_5 + ( param_1 + lVar9 ) * 8);
                  goto LAB_001005f2;
               }

            }
;
         }
 else {
            uVar3 = (uint)(char)*pbVar12;
            uVar8 = uVar3;
            if (pbVar10 == (byte*)0x0) goto LAB_00100655;
            LAB_001006b3:uVar3 = (uint)(char)*pbVar10;
            bVar4 = (byte)uVar8 | *pbVar10;
            LAB_001006b9:if (bVar4 == 0) goto LAB_001005e8;
            lVar11 = 1;
            while (uVar8 != 0) {
               if (uVar3 == 0) goto LAB_001005e8;
               if (uVar8 < uVar3) break;
               if (uVar3 < uVar8) goto LAB_001005e8;
               pbVar1 = pbVar12 + lVar11;
               uVar8 = (uint)(char)*pbVar1;
               pbVar2 = pbVar10 + lVar11;
               uVar3 = (uint)(char)*pbVar2;
               lVar11 = lVar11 + 1;
               if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_001005e8;
            }
;
         }

      }

      LAB_001005b0:StringName::operator =((StringName_conflict*)( param_5 + ( lVar9 + param_1 ) * 8 ), this);
      lVar11 = ( lVar14 + -1 ) - ( lVar14 + -1 >> 0x3f );
      lVar9 = lVar14;
   }
;
   LAB_001005f2:local_50 = (StringName_conflict*)&local_48;
   StringName::operator =(this, local_50);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SortArray<StringName, StringName::AlphCompare, true>::unguarded_linear_insert(long, StringName,
   StringName*) const [clone .isra.0] */void SortArray<StringName,StringName::AlphCompare,true>::unguarded_linear_insert(long param_1, StringName_conflict *param_2, long param_3) {
   byte *pbVar1;
   byte *pbVar2;
   StringName_conflict *pSVar3;
   byte bVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   uint uVar9;
   byte *pbVar10;
   byte *pbVar11;
   pSVar3 = (StringName_conflict*)( param_3 + -8 + param_1 * 8 );
   lVar6 = *(long*)pSVar3;
   lVar5 = *(long*)param_2;
   do {
      if (lVar5 == 0) {
         if (lVar6 == 0) goto LAB_00100a5b;
         pbVar10 = *(byte**)( lVar6 + 8 );
         uVar8 = 0;
         pbVar11 = &_LC12;
         LAB_00100961:if (pbVar10 == (byte*)0x0) {
            uVar9 = **(uint**)( lVar6 + 0x10 );
            if (uVar9 == 0 && uVar8 == 0) goto LAB_00100a5b;
            lVar5 = 0;
            while (uVar8 != 0) {
               if (uVar9 == 0) goto LAB_00100a5b;
               if (uVar8 < uVar9) break;
               if (uVar9 < uVar8) goto LAB_00100a5b;
               uVar8 = (uint)(char)pbVar11[lVar5 + 1];
               uVar9 = ( *(uint**)( lVar6 + 0x10 ) )[lVar5 + 1];
               lVar5 = lVar5 + 1;
               if (uVar8 == 0 && uVar9 == 0) goto LAB_00100a5b;
            }
;
         }
 else {
            uVar9 = (uint)(char)*pbVar10;
            bVar4 = (byte)uVar8 | *pbVar10;
            LAB_001009be:if (bVar4 == 0) goto LAB_00100a5b;
            lVar6 = 1;
            while (uVar8 != 0) {
               if (uVar9 == 0) goto LAB_00100a5b;
               if (uVar8 < uVar9) break;
               if (uVar9 < uVar8) goto LAB_00100a5b;
               pbVar1 = pbVar11 + lVar6;
               uVar8 = (uint)(char)*pbVar1;
               pbVar2 = pbVar10 + lVar6;
               uVar9 = (uint)(char)*pbVar2;
               lVar6 = lVar6 + 1;
               if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00100a5b;
            }
;
         }

      }
 else {
         pbVar11 = *(byte**)( lVar5 + 8 );
         if (lVar6 == 0) {
            if (pbVar11 != (byte*)0x0) {
               bVar4 = *pbVar11;
               uVar8 = (uint)(char)bVar4;
               pbVar10 = &_LC12;
               uVar9 = 0;
               goto LAB_001009be;
            }

            uVar8 = 0;
            pbVar10 = &_LC12;
            LAB_001008d7:uVar9 = **(uint**)( lVar5 + 0x10 );
            if (uVar9 == 0 && uVar8 == 0) goto LAB_00100a5b;
            lVar6 = 0;
            while (uVar9 != 0) {
               if (uVar8 == 0) goto LAB_00100a5b;
               if (uVar9 < uVar8) break;
               if (uVar8 < uVar9) goto LAB_00100a5b;
               uVar9 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
               uVar8 = (uint)(char)pbVar10[lVar6 + 1];
               lVar6 = lVar6 + 1;
               if (uVar9 == 0 && uVar8 == 0) goto LAB_00100a5b;
            }
;
         }
 else {
            pbVar10 = *(byte**)( lVar6 + 8 );
            if (pbVar11 != (byte*)0x0) {
               uVar8 = (uint)(char)*pbVar11;
               goto LAB_00100961;
            }

            if (pbVar10 != (byte*)0x0) {
               uVar8 = (uint)(char)*pbVar10;
               goto LAB_001008d7;
            }

            uVar8 = **(uint**)( lVar6 + 0x10 );
            uVar9 = **(uint**)( lVar5 + 0x10 );
            if (uVar8 == 0 && uVar9 == 0) goto LAB_00100a5b;
            lVar7 = 4;
            while (uVar9 != 0) {
               if (uVar8 == 0) goto LAB_00100a5b;
               if (uVar9 < uVar8) break;
               if (uVar8 < uVar9) goto LAB_00100a5b;
               uVar9 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar7 );
               uVar8 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
               lVar7 = lVar7 + 4;
               if (uVar9 == 0 && uVar8 == 0) goto LAB_00100a5b;
            }
;
         }

      }

      param_1 = param_1 + -1;
      if (param_1 == 0) {
         param_1 = 1;
         _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
         LAB_00100a5b:StringName::operator =((StringName_conflict*)( param_3 + param_1 * 8 ), param_2);
         return;
      }

      StringName::operator =(pSVar3 + 8, pSVar3);
      lVar5 = *(long*)param_2;
      lVar6 = *(long*)( pSVar3 + -8 );
      pSVar3 = pSVar3 + -8;
   }
 while ( true );
}
/* SortArray<StringName, StringName::AlphCompare, true>::linear_insert(long, long, StringName*)
   const [clone .isra.0] */void SortArray<StringName,StringName::AlphCompare,true>::linear_insert(long param_1, long param_2, StringName_conflict *param_3) {
   StringName_conflict *this;
   byte *pbVar1;
   byte *pbVar2;
   byte bVar3;
   long lVar4;
   long lVar5;
   uint uVar6;
   uint uVar7;
   StringName_conflict *this_00;
   byte *pbVar8;
   byte *pbVar9;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   this =
   param_3 + param_1 * 8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName_conflict*)&local_50, param_3 + param_2 * 8);
   if (local_50 == 0) {
      lVar4 = *(long*)this;
      if (lVar4 != 0) {
         pbVar8 = *(byte**)( lVar4 + 8 );
         uVar6 = 0;
         pbVar9 = &_LC12;
         LAB_00100c38:if (pbVar8 == (byte*)0x0) {
            uVar7 = **(uint**)( lVar4 + 0x10 );
            if (uVar6 != 0 || uVar7 != 0) {
               lVar5 = 0;
               do {
                  if (uVar6 == 0) goto LAB_00100b90;
                  if (uVar7 == 0) break;
                  if (uVar6 < uVar7) goto LAB_00100b90;
                  if (uVar7 < uVar6) break;
                  uVar6 = (uint)(char)pbVar9[lVar5 + 1];
                  uVar7 = ( *(uint**)( lVar4 + 0x10 ) )[lVar5 + 1];
                  lVar5 = lVar5 + 1;
               }
 while ( uVar6 != 0 || uVar7 != 0 );
            }

         }
 else {
            uVar7 = (uint)(char)*pbVar8;
            bVar3 = *pbVar8 | (byte)uVar6;
            LAB_00100ce0:if (bVar3 != 0) {
               lVar4 = 1;
               do {
                  if (uVar6 == 0) goto LAB_00100b90;
                  if (uVar7 == 0) break;
                  if (uVar6 < uVar7) goto LAB_00100b90;
                  if (uVar7 < uVar6) break;
                  pbVar1 = pbVar9 + lVar4;
                  uVar6 = (uint)(char)*pbVar1;
                  pbVar2 = pbVar8 + lVar4;
                  uVar7 = (uint)(char)*pbVar2;
                  lVar4 = lVar4 + 1;
               }
 while ( *pbVar1 != 0 || *pbVar2 != 0 );
            }

         }

      }

   }
 else {
      lVar4 = *(long*)this;
      pbVar9 = *(byte**)( local_50 + 8 );
      if (lVar4 == 0) {
         if (pbVar9 != (byte*)0x0) {
            bVar3 = *pbVar9;
            uVar6 = (uint)(char)bVar3;
            pbVar8 = &_LC12;
            uVar7 = 0;
            goto LAB_00100ce0;
         }

         uVar6 = 0;
         pbVar8 = &_LC12;
      }
 else {
         pbVar8 = *(byte**)( lVar4 + 8 );
         if (pbVar9 != (byte*)0x0) {
            uVar6 = (uint)(char)*pbVar9;
            goto LAB_00100c38;
         }

         if (pbVar8 == (byte*)0x0) {
            uVar6 = **(uint**)( lVar4 + 0x10 );
            uVar7 = **(uint**)( local_50 + 0x10 );
            if (uVar6 != 0 || uVar7 != 0) {
               lVar5 = 4;
               do {
                  if (uVar7 == 0) goto LAB_00100b90;
                  if (uVar6 == 0) break;
                  if (uVar7 < uVar6) goto LAB_00100b90;
                  if (uVar6 < uVar7) break;
                  uVar7 = *(uint*)( (long)*(uint**)( local_50 + 0x10 ) + lVar5 );
                  uVar6 = *(uint*)( (long)*(uint**)( lVar4 + 0x10 ) + lVar5 );
                  lVar5 = lVar5 + 4;
               }
 while ( uVar7 != 0 || uVar6 != 0 );
            }

            goto LAB_00100c88;
         }

         uVar6 = (uint)(char)*pbVar8;
      }

      uVar7 = **(uint**)( local_50 + 0x10 );
      if (uVar6 != 0 || uVar7 != 0) {
         lVar4 = 0;
         do {
            if (uVar7 == 0) goto LAB_00100b90;
            if (uVar6 == 0) break;
            if (uVar7 < uVar6) goto LAB_00100b90;
            if (uVar6 < uVar7) break;
            uVar7 = ( *(uint**)( local_50 + 0x10 ) )[lVar4 + 1];
            uVar6 = (uint)(char)pbVar8[lVar4 + 1];
            lVar4 = lVar4 + 1;
         }
 while ( uVar7 != 0 || uVar6 != 0 );
      }

   }

   LAB_00100c88:StringName::StringName((StringName_conflict*)&local_48, (StringName_conflict*)&local_50);
   unguarded_linear_insert(param_2, (StringName_conflict*)&local_48, param_3);
   if (StringName::configured == '\0') goto LAB_00100bd6;
   if (local_48 != 0) {
      StringName::unref();
      goto LAB_00100bc2;
   }

   goto LAB_00100bc6;
   LAB_00100b90:this_00 = param_3 + param_2 * 8;
   if (param_1 < param_2) {
      do {
         param_2 = param_2 + -1;
         StringName::operator =(this_00, this_00 + -8);
         this_00 = this_00 + -8;
      }
 while ( param_1 != param_2 );
   }

   StringName::operator =(this, (StringName_conflict*)&local_50);
   LAB_00100bc2:if (StringName::configured == '\0') goto LAB_00100bd6;
   LAB_00100bc6:if (local_50 != 0) {
      StringName::unref();
   }

   LAB_00100bd6:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* SortArray<StringName, StringName::AlphCompare, true>::median_of_3(StringName const&, StringName
   const&, StringName const&) const [clone .isra.0] */StringName_conflict *SortArray<StringName,StringName::AlphCompare,true>::median_of_3(StringName_conflict *param_1, StringName_conflict *param_2, StringName_conflict *param_3) {
   byte *pbVar1;
   byte *pbVar2;
   byte bVar3;
   uint uVar4;
   uint uVar5;
   uint uVar6;
   uint *puVar7;
   long lVar8;
   long lVar9;
   uint *puVar10;
   byte bVar11;
   uint uVar12;
   long lVar13;
   long lVar14;
   byte *pbVar15;
   byte *pbVar16;
   byte *pbVar17;
   lVar8 = *(long*)param_1;
   lVar9 = *(long*)param_3;
   lVar13 = *(long*)param_2;
   if (lVar8 == 0) {
      pbVar15 = &_LC12;
      pbVar16 = &_LC12;
      if (lVar13 == 0) {
         LAB_001016c0:if (lVar9 != 0) {
            pbVar17 = *(byte**)( lVar9 + 8 );
            LAB_00100f8e:uVar5 = (uint)(char)*pbVar16;
            uVar4 = uVar5;
            goto LAB_00100f94;
         }

         uVar5 = (uint)(char)*pbVar16;
         uVar6 = 0;
         uVar12 = 0;
         pbVar17 = &_LC12;
         if (*pbVar16 == 0) goto LAB_00101289;
         LAB_001010e2:lVar8 = 1;
         do {
            if (uVar5 == 0) {
               return param_1;
            }

            if (uVar6 == 0) break;
            if (uVar5 < uVar6) {
               return param_1;
            }

            if (uVar6 < uVar5) break;
            pbVar2 = pbVar16 + lVar8;
            uVar5 = (uint)(char)*pbVar2;
            pbVar1 = pbVar17 + lVar8;
            uVar6 = (uint)(char)*pbVar1;
            lVar8 = lVar8 + 1;
         }
 while ( *pbVar2 != 0 || *pbVar1 != 0 );
      }
 else {
         pbVar15 = *(byte**)( lVar13 + 8 );
         uVar4 = 0;
         pbVar16 = &_LC12;
         LAB_00100f12:if (pbVar15 != (byte*)0x0) {
            uVar12 = (uint)(char)*pbVar15;
            bVar11 = *pbVar15 | (byte)uVar4;
            LAB_00101000:if (bVar11 != 0) {
               lVar14 = 1;
               do {
                  if (uVar4 == 0) goto joined_r0x00101048;
                  if (uVar12 == 0) break;
                  if (uVar4 < uVar12) goto joined_r0x00101048;
                  if (uVar12 < uVar4) break;
                  pbVar17 = pbVar16 + lVar14;
                  uVar4 = (uint)(char)*pbVar17;
                  pbVar2 = pbVar15 + lVar14;
                  uVar12 = (uint)(char)*pbVar2;
                  lVar14 = lVar14 + 1;
               }
 while ( *pbVar17 != 0 || *pbVar2 != 0 );
               goto LAB_00100f78;
            }

            goto LAB_001016c0;
         }

         uVar12 = **(uint**)( lVar13 + 0x10 );
         if (uVar4 != 0 || uVar12 != 0) {
            lVar14 = 0;
            do {
               if (uVar4 == 0) goto joined_r0x00101048;
               if (uVar12 == 0) break;
               if (uVar4 < uVar12) goto joined_r0x00101048;
               if (uVar12 < uVar4) break;
               uVar4 = (uint)(char)pbVar16[lVar14 + 1];
               uVar12 = ( *(uint**)( lVar13 + 0x10 ) )[lVar14 + 1];
               lVar14 = lVar14 + 1;
            }
 while ( uVar4 != 0 || uVar12 != 0 );
            goto LAB_00100f78;
         }

         if (lVar9 == 0) goto LAB_001012e1;
         pbVar17 = *(byte**)( lVar9 + 8 );
         uVar5 = 0;
         LAB_00100f94:if (pbVar17 != (byte*)0x0) {
            uVar6 = (uint)(char)*pbVar17;
            bVar11 = (byte)uVar4 | *pbVar17;
            goto LAB_001010d9;
         }

         puVar10 = *(uint**)( lVar9 + 0x10 );
         uVar4 = *puVar10;
         uVar6 = uVar4 | uVar5;
         if (uVar6 == 0) goto LAB_001015c6;
         lVar8 = 0;
         do {
            if (uVar5 == 0) {
               return param_1;
            }

            if (uVar4 == 0) break;
            if (uVar5 < uVar4) {
               return param_1;
            }

            if (uVar4 < uVar5) break;
            uVar5 = (uint)(char)pbVar16[lVar8 + 1];
            uVar4 = puVar10[lVar8 + 1];
            lVar8 = lVar8 + 1;
         }
 while ( uVar5 != 0 || uVar4 != 0 );
      }

      LAB_00101270:if (pbVar15 == (byte*)0x0) {
         if (pbVar17 == (byte*)0x0) {
            puVar10 = *(uint**)( lVar9 + 0x10 );
            LAB_001015cf:uVar4 = *puVar10;
            uVar12 = **(uint**)( lVar13 + 0x10 );
            if (uVar12 == 0 && uVar4 == 0) {
               return param_2;
            }

            lVar8 = 4;
            while (true) {
               if (uVar12 == 0) {
                  return param_3;
               }

               if (uVar4 == 0) {
                  return param_2;
               }

               if (uVar12 < uVar4) {
                  return param_3;
               }

               if (uVar4 < uVar12) break;
               uVar12 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar8 );
               uVar4 = *(uint*)( (long)puVar10 + lVar8 );
               lVar8 = lVar8 + 4;
               if (uVar12 == 0 && uVar4 == 0) {
                  return param_2;
               }

            }
;
            return param_2;
         }

         uVar12 = (uint)(char)*pbVar17;
         LAB_00101456:uVar4 = **(uint**)( lVar13 + 0x10 );
         if (uVar4 != 0 || uVar12 != 0) {
            lVar8 = 0;
            do {
               if (uVar4 == 0) {
                  return param_3;
               }

               if (uVar12 == 0) {
                  return param_2;
               }

               if (uVar4 < uVar12) {
                  return param_3;
               }

               if (uVar12 < uVar4) {
                  return param_2;
               }

               uVar4 = ( *(uint**)( lVar13 + 0x10 ) )[lVar8 + 1];
               uVar12 = (uint)(char)pbVar17[lVar8 + 1];
               lVar8 = lVar8 + 1;
            }
 while ( uVar4 != 0 || uVar12 != 0 );
         }

         return param_2;
      }

      if (pbVar17 == (byte*)0x0) {
         puVar10 = *(uint**)( lVar9 + 0x10 );
         uVar6 = *puVar10;
         LAB_001014b8:uVar4 = (uint)(char)*pbVar15;
         if (uVar4 == 0 && uVar6 == 0) {
            return param_2;
         }

         lVar8 = 0;
         while (true) {
            if (uVar4 == 0) {
               return param_3;
            }

            if (uVar6 == 0) {
               return param_2;
            }

            if (uVar4 < uVar6) {
               return param_3;
            }

            if (uVar6 < uVar4) break;
            uVar4 = (uint)(char)pbVar15[lVar8 + 1];
            uVar6 = puVar10[lVar8 + 1];
            lVar8 = lVar8 + 1;
            if (uVar4 == 0 && uVar6 == 0) {
               return param_2;
            }

         }
;
         return param_2;
      }

      uVar12 = (uint)(char)*pbVar17;
      uVar5 = uVar12;
   }
 else {
      pbVar16 = *(byte**)( lVar8 + 8 );
      if (lVar13 == 0) {
         if (pbVar16 != (byte*)0x0) {
            bVar11 = *pbVar16;
            uVar4 = (uint)(char)bVar11;
            uVar12 = 0;
            pbVar15 = &_LC12;
            goto LAB_00101000;
         }

         uVar4 = 0;
         pbVar15 = &_LC12;
         LAB_00100df9:uVar12 = **(uint**)( lVar8 + 0x10 );
         if (uVar4 != 0 || uVar12 != 0) {
            lVar14 = 0;
            do {
               if (uVar12 == 0) goto joined_r0x00101048;
               if (uVar4 == 0) break;
               if (uVar12 < uVar4) goto joined_r0x00101048;
               if (uVar4 < uVar12) break;
               uVar12 = ( *(uint**)( lVar8 + 0x10 ) )[lVar14 + 1];
               uVar4 = (uint)(char)pbVar15[lVar14 + 1];
               lVar14 = lVar14 + 1;
            }
 while ( uVar12 != 0 || uVar4 != 0 );
         }

         LAB_00100f78:if (lVar9 != 0) {
            pbVar17 = *(byte**)( lVar9 + 8 );
            if (pbVar16 != (byte*)0x0) goto LAB_00100f8e;
            puVar7 = *(uint**)( lVar8 + 0x10 );
            uVar4 = *puVar7;
            LAB_00101378:if (pbVar17 != (byte*)0x0) {
               uVar12 = (uint)(char)*pbVar17;
               uVar6 = uVar4 | uVar12;
               goto LAB_00101633;
            }

            puVar10 = *(uint**)( lVar9 + 0x10 );
            uVar12 = *puVar10;
            uVar6 = uVar12 | uVar4;
            if (uVar6 != 0) {
               lVar8 = 4;
               do {
                  if (uVar4 == 0) {
                     return param_1;
                  }

                  if (uVar12 == 0) break;
                  if (uVar4 < uVar12) {
                     return param_1;
                  }

                  if (uVar12 < uVar4) break;
                  uVar4 = *(uint*)( (long)puVar7 + lVar8 );
                  uVar12 = *(uint*)( (long)puVar10 + lVar8 );
                  lVar8 = lVar8 + 4;
               }
 while ( uVar4 != 0 || uVar12 != 0 );
               goto LAB_00101270;
            }

            LAB_001015c6:if (pbVar15 != (byte*)0x0) goto LAB_001014b8;
            goto LAB_001015cf;
         }

         if (pbVar16 == (byte*)0x0) {
            puVar7 = *(uint**)( lVar8 + 0x10 );
            goto LAB_00101691;
         }

         LAB_001012e1:bVar11 = *pbVar16;
         uVar5 = (uint)(char)bVar11;
         uVar6 = 0;
         pbVar17 = &_LC12;
         LAB_001010d9:uVar12 = uVar6;
         if (bVar11 != 0) goto LAB_001010e2;
      }
 else {
         pbVar15 = *(byte**)( lVar13 + 8 );
         if (pbVar16 != (byte*)0x0) {
            uVar4 = (uint)(char)*pbVar16;
            goto LAB_00100f12;
         }

         if (pbVar15 != (byte*)0x0) {
            uVar4 = (uint)(char)*pbVar15;
            goto LAB_00100df9;
         }

         puVar7 = *(uint**)( lVar8 + 0x10 );
         uVar12 = **(uint**)( lVar13 + 0x10 );
         uVar4 = *puVar7;
         if (uVar12 != 0 || uVar4 != 0) {
            lVar14 = 4;
            do {
               if (uVar4 == 0) {
                  LAB_001011e8:pbVar16 = (byte*)0x0;
                  goto joined_r0x00101048;
               }

               if (uVar12 == 0) break;
               if (uVar4 < uVar12) goto LAB_001011e8;
               if (uVar12 < uVar4) break;
               uVar4 = *(uint*)( (long)puVar7 + lVar14 );
               uVar12 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar14 );
               lVar14 = lVar14 + 4;
            }
 while ( uVar4 != 0 || uVar12 != 0 );
            pbVar16 = (byte*)0x0;
            goto LAB_00100f78;
         }

         if (lVar9 != 0) {
            pbVar17 = *(byte**)( lVar9 + 8 );
            uVar4 = 0;
            goto LAB_00101378;
         }

         LAB_00101691:uVar4 = *puVar7;
         uVar12 = 0;
         pbVar17 = &_LC12;
         uVar6 = uVar4;
         LAB_00101633:if (uVar6 != 0) {
            lVar8 = 0;
            do {
               if (uVar4 == 0) {
                  return param_1;
               }

               if (uVar12 == 0) break;
               if (uVar4 < uVar12) {
                  return param_1;
               }

               if (uVar12 < uVar4) break;
               uVar4 = puVar7[lVar8 + 1];
               uVar12 = (uint)(char)pbVar17[lVar8 + 1];
               lVar8 = lVar8 + 1;
            }
 while ( uVar4 != 0 || uVar12 != 0 );
            goto LAB_00101270;
         }

      }

      uVar5 = uVar12;
      if (pbVar15 == (byte*)0x0) goto LAB_00101456;
   }

   LAB_00101289:bVar11 = *pbVar15;
   if (bVar11 == 0 && (char)uVar5 == '\0') {
      return param_2;
   }

   lVar8 = 1;
   while (true) {
      uVar4 = (uint)(char)bVar11;
      if (uVar4 == 0) {
         return param_3;
      }

      if (uVar12 == 0) {
         return param_2;
      }

      if (uVar4 < uVar12) {
         return param_3;
      }

      if (uVar12 < uVar4) break;
      bVar11 = pbVar15[lVar8];
      pbVar16 = pbVar17 + lVar8;
      uVar12 = (uint)(char)*pbVar16;
      lVar8 = lVar8 + 1;
      if (bVar11 == 0 && *pbVar16 == 0) {
         return param_2;
      }

   }
;
   return param_2;
   joined_r0x00101048:if (lVar9 == 0) {
      uVar4 = 0;
      uVar12 = 0;
      bVar11 = 0;
      pbVar17 = &_LC12;
      if (pbVar15 != (byte*)0x0) goto LAB_00101137;
      LAB_00101064:uVar6 = **(uint**)( lVar13 + 0x10 );
      uVar4 = uVar6 | uVar12;
      if (uVar4 != 0) {
         lVar14 = 0;
         do {
            if (uVar6 == 0) {
               return param_2;
            }

            if (uVar12 == 0) break;
            if (uVar6 < uVar12) {
               return param_2;
            }

            if (uVar12 < uVar6) break;
            uVar6 = ( *(uint**)( lVar13 + 0x10 ) )[lVar14 + 1];
            uVar12 = (uint)(char)pbVar17[lVar14 + 1];
            lVar14 = lVar14 + 1;
         }
 while ( uVar6 != 0 || uVar12 != 0 );
         goto LAB_00101200;
      }

      LAB_001016ce:bVar11 = (byte)uVar12;
      if (pbVar16 == (byte*)0x0) goto LAB_001013ee;
   }
 else {
      pbVar17 = *(byte**)( lVar9 + 8 );
      if (pbVar15 == (byte*)0x0) {
         if (pbVar17 != (byte*)0x0) {
            uVar12 = (uint)(char)*pbVar17;
            goto LAB_00101064;
         }

         puVar7 = *(uint**)( lVar9 + 0x10 );
         uVar4 = *puVar7;
         uVar6 = **(uint**)( lVar13 + 0x10 );
         uVar12 = uVar4 | uVar6;
         if (uVar12 == 0) goto LAB_00101569;
         lVar14 = 4;
         do {
            if (uVar6 == 0) {
               return param_2;
            }

            if (uVar4 == 0) break;
            if (uVar6 < uVar4) {
               return param_2;
            }

            if (uVar4 < uVar6) break;
            uVar6 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar14 );
            uVar4 = *(uint*)( (long)puVar7 + lVar14 );
            lVar14 = lVar14 + 4;
         }
 while ( uVar6 != 0 || uVar4 != 0 );
      }
 else {
         if (pbVar17 == (byte*)0x0) {
            puVar7 = *(uint**)( lVar9 + 0x10 );
            uVar6 = (uint)(char)*pbVar15;
            uVar4 = *puVar7;
            uVar12 = uVar4 | uVar6;
            if (uVar12 != 0) {
               lVar13 = 0;
               do {
                  if (uVar6 == 0) {
                     return param_2;
                  }

                  if (uVar4 == 0) break;
                  if (uVar6 < uVar4) {
                     return param_2;
                  }

                  if (uVar4 < uVar6) break;
                  uVar6 = (uint)(char)pbVar15[lVar13 + 1];
                  uVar4 = puVar7[lVar13 + 1];
                  lVar13 = lVar13 + 1;
               }
 while ( uVar6 != 0 || uVar4 != 0 );
               goto LAB_00101200;
            }

            LAB_00101569:if (pbVar16 == (byte*)0x0) goto LAB_0010156e;
            goto LAB_00101516;
         }

         bVar11 = *pbVar17;
         uVar4 = (uint)(char)bVar11;
         LAB_00101137:bVar3 = *pbVar15;
         uVar12 = ( uint )(bVar11 | bVar3);
         if (( bVar11 | bVar3 ) == 0) goto LAB_001016ce;
         lVar13 = 1;
         do {
            uVar12 = (uint)(char)bVar3;
            if (uVar12 == 0) {
               return param_2;
            }

            if (uVar4 == 0) break;
            if (uVar12 < uVar4) {
               return param_2;
            }

            if (uVar4 < uVar12) break;
            bVar3 = pbVar15[lVar13];
            pbVar2 = pbVar17 + lVar13;
            uVar4 = (uint)(char)*pbVar2;
            lVar13 = lVar13 + 1;
         }
 while ( bVar3 != 0 || *pbVar2 != 0 );
      }

      LAB_00101200:if (pbVar16 == (byte*)0x0) {
         if (pbVar17 == (byte*)0x0) {
            puVar7 = *(uint**)( lVar9 + 0x10 );
            LAB_0010156e:uVar4 = *puVar7;
            uVar12 = **(uint**)( lVar8 + 0x10 );
            if (uVar12 == 0 && uVar4 == 0) {
               return param_1;
            }

            lVar9 = 4;
            while (true) {
               if (uVar12 == 0) {
                  return param_3;
               }

               if (uVar4 == 0) {
                  return param_1;
               }

               if (uVar12 < uVar4) {
                  return param_3;
               }

               if (uVar4 < uVar12) break;
               uVar12 = *(uint*)( (long)*(uint**)( lVar8 + 0x10 ) + lVar9 );
               uVar4 = *(uint*)( (long)puVar7 + lVar9 );
               lVar9 = lVar9 + 4;
               if (uVar12 == 0 && uVar4 == 0) {
                  return param_1;
               }

            }
;
            return param_1;
         }

         uVar4 = (uint)(char)*pbVar17;
         LAB_001013ee:uVar12 = **(uint**)( lVar8 + 0x10 );
         if (uVar12 == 0 && uVar4 == 0) {
            return param_1;
         }

         lVar9 = 0;
         while (true) {
            if (uVar12 == 0) {
               return param_3;
            }

            if (uVar4 == 0) {
               return param_1;
            }

            if (uVar12 < uVar4) {
               return param_3;
            }

            if (uVar4 < uVar12) break;
            uVar12 = ( *(uint**)( lVar8 + 0x10 ) )[lVar9 + 1];
            uVar4 = (uint)(char)pbVar17[lVar9 + 1];
            lVar9 = lVar9 + 1;
            if (uVar12 == 0 && uVar4 == 0) {
               return param_1;
            }

         }
;
         return param_1;
      }

      if (pbVar17 == (byte*)0x0) {
         puVar7 = *(uint**)( lVar9 + 0x10 );
         uVar12 = *puVar7;
         LAB_00101516:uVar4 = (uint)(char)*pbVar16;
         if (uVar4 == 0 && uVar12 == 0) {
            return param_1;
         }

         lVar8 = 0;
         while (true) {
            if (uVar4 == 0) {
               return param_3;
            }

            if (uVar12 == 0) {
               return param_1;
            }

            if (uVar4 < uVar12) {
               return param_3;
            }

            if (uVar12 < uVar4) break;
            uVar4 = (uint)(char)pbVar16[lVar8 + 1];
            uVar12 = puVar7[lVar8 + 1];
            lVar8 = lVar8 + 1;
            if (uVar4 == 0 && uVar12 == 0) {
               return param_1;
            }

         }
;
         return param_1;
      }

      bVar11 = *pbVar17;
      uVar4 = (uint)(char)bVar11;
   }

   bVar3 = *pbVar16;
   if (bVar3 == 0 && bVar11 == 0) {
      return param_1;
   }

   lVar8 = 1;
   while (true) {
      uVar12 = (uint)(char)bVar3;
      if (uVar12 == 0) {
         return param_3;
      }

      if (uVar4 == 0) {
         return param_1;
      }

      if (uVar12 < uVar4) {
         return param_3;
      }

      if (uVar4 < uVar12) break;
      bVar3 = pbVar16[lVar8];
      pbVar15 = pbVar17 + lVar8;
      uVar4 = (uint)(char)*pbVar15;
      lVar8 = lVar8 + 1;
      if (bVar3 == 0 && *pbVar15 == 0) {
         return param_1;
      }

   }
;
   return param_1;
}
/* SortArray<StringName, StringName::AlphCompare, true>::partitioner(long, long, StringName,
   StringName*) const [clone .isra.0] */long SortArray<StringName,StringName::AlphCompare,true>::partitioner(long param_1, long param_2, long *param_3, long param_4) {
   byte *pbVar1;
   byte *pbVar2;
   long lVar3;
   long lVar4;
   byte *pbVar5;
   uint uVar6;
   uint uVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long *plVar11;
   byte bVar12;
   byte *pbVar13;
   long *plVar14;
   lVar10 = *param_3;
   lVar3 = *(long*)( param_4 + param_1 * 8 );
   lVar9 = param_1;
   lVar8 = param_2;
   joined_r0x0010176f:if (lVar3 == 0) {
      if (lVar10 == 0) goto LAB_00101890;
      pbVar5 = *(byte**)( lVar10 + 8 );
      uVar6 = 0;
      pbVar13 = &_LC12;
      LAB_00101826:if (pbVar5 == (byte*)0x0) {
         uVar7 = **(uint**)( lVar10 + 0x10 );
         if (uVar7 != 0 || uVar6 != 0) {
            lVar3 = 0;
            do {
               if (uVar6 == 0) goto LAB_001017f0;
               if (uVar7 == 0) break;
               if (uVar6 < uVar7) goto LAB_001017f0;
               if (uVar7 < uVar6) break;
               uVar6 = (uint)(char)pbVar13[lVar3 + 1];
               uVar7 = ( *(uint**)( lVar10 + 0x10 ) )[lVar3 + 1];
               lVar3 = lVar3 + 1;
            }
 while ( uVar6 != 0 || uVar7 != 0 );
         }

         goto LAB_00101890;
      }

      uVar7 = (uint)(char)*pbVar5;
      bVar12 = (byte)uVar6 | *pbVar5;
      LAB_00101b66:if (bVar12 != 0) {
         lVar3 = 1;
         do {
            if (uVar6 == 0) goto LAB_001017f0;
            if (uVar7 == 0) break;
            if (uVar6 < uVar7) goto LAB_001017f0;
            if (uVar7 < uVar6) break;
            pbVar1 = pbVar13 + lVar3;
            uVar6 = (uint)(char)*pbVar1;
            pbVar2 = pbVar5 + lVar3;
            uVar7 = (uint)(char)*pbVar2;
            lVar3 = lVar3 + 1;
         }
 while ( *pbVar1 != 0 || *pbVar2 != 0 );
      }

   }
 else {
      pbVar13 = *(byte**)( lVar3 + 8 );
      if (lVar10 == 0) {
         if (pbVar13 != (byte*)0x0) {
            bVar12 = *pbVar13;
            uVar6 = (uint)(char)bVar12;
            uVar7 = 0;
            pbVar5 = &_LC12;
            goto LAB_00101b66;
         }

         uVar6 = 0;
         pbVar5 = &_LC12;
      }
 else {
         pbVar5 = *(byte**)( lVar10 + 8 );
         if (pbVar13 != (byte*)0x0) {
            uVar6 = (uint)(char)*pbVar13;
            goto LAB_00101826;
         }

         if (pbVar5 == (byte*)0x0) {
            uVar6 = **(uint**)( lVar10 + 0x10 );
            uVar7 = **(uint**)( lVar3 + 0x10 );
            if (uVar6 != 0 || uVar7 != 0) {
               lVar4 = 4;
               do {
                  if (uVar7 == 0) goto LAB_001017f0;
                  if (uVar6 == 0) break;
                  if (uVar7 < uVar6) goto LAB_001017f0;
                  if (uVar6 < uVar7) break;
                  uVar7 = *(uint*)( (long)*(uint**)( lVar3 + 0x10 ) + lVar4 );
                  uVar6 = *(uint*)( (long)*(uint**)( lVar10 + 0x10 ) + lVar4 );
                  lVar4 = lVar4 + 4;
               }
 while ( uVar7 != 0 || uVar6 != 0 );
            }

            goto LAB_00101890;
         }

         uVar6 = (uint)(char)*pbVar5;
      }

      uVar7 = **(uint**)( lVar3 + 0x10 );
      if (uVar7 != 0 || uVar6 != 0) {
         lVar4 = 0;
         do {
            if (uVar7 == 0) goto LAB_001017f0;
            if (uVar6 == 0) break;
            if (uVar7 < uVar6) goto LAB_001017f0;
            if (uVar6 < uVar7) break;
            uVar7 = ( *(uint**)( lVar3 + 0x10 ) )[lVar4 + 1];
            uVar6 = (uint)(char)pbVar5[lVar4 + 1];
            lVar4 = lVar4 + 1;
         }
 while ( uVar7 != 0 || uVar6 != 0 );
      }

   }

   goto LAB_00101890;
   LAB_001017f0:if (param_2 + -1 == lVar9) {
      _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
      lVar10 = *param_3;
      LAB_00101890:plVar11 = (long*)( param_4 + -8 + lVar8 * 8 );
      LAB_001018a0:lVar8 = lVar8 + -1;
      lVar3 = *plVar11;
      if (lVar10 != 0) {
         pbVar13 = *(byte**)( lVar10 + 8 );
         do {
            if (lVar3 == 0) {
               if (pbVar13 != (byte*)0x0) {
                  bVar12 = *pbVar13;
                  uVar7 = (uint)(char)bVar12;
                  pbVar5 = &_LC12;
                  uVar6 = 0;
                  goto LAB_00101a4e;
               }

               uVar6 = 0;
               pbVar5 = &_LC12;
               LAB_0010196a:uVar7 = **(uint**)( lVar10 + 0x10 );
               if (uVar7 == 0 && uVar6 == 0) goto LAB_00101ac8;
               lVar3 = 0;
               while (uVar7 != 0) {
                  if (uVar6 == 0) goto LAB_00101ac8;
                  if (uVar7 < uVar6) break;
                  if (uVar6 < uVar7) goto LAB_00101ac8;
                  uVar7 = ( *(uint**)( lVar10 + 0x10 ) )[lVar3 + 1];
                  uVar6 = (uint)(char)pbVar5[lVar3 + 1];
                  lVar3 = lVar3 + 1;
                  if (uVar7 == 0 && uVar6 == 0) goto LAB_00101ac8;
               }
;
            }
 else {
               pbVar5 = *(byte**)( lVar3 + 8 );
               if (pbVar13 != (byte*)0x0) goto LAB_00101a90;
               if (pbVar5 != (byte*)0x0) {
                  uVar6 = (uint)(char)*pbVar5;
                  goto LAB_0010196a;
               }

               uVar6 = **(uint**)( lVar3 + 0x10 );
               uVar7 = **(uint**)( lVar10 + 0x10 );
               if (uVar6 == 0 && uVar7 == 0) goto LAB_00101ac8;
               lVar4 = 4;
               while (uVar7 != 0) {
                  if (uVar6 == 0) goto LAB_00101ac8;
                  if (uVar7 < uVar6) break;
                  if (uVar6 < uVar7) goto LAB_00101ac8;
                  uVar7 = *(uint*)( (long)*(uint**)( lVar10 + 0x10 ) + lVar4 );
                  uVar6 = *(uint*)( (long)*(uint**)( lVar3 + 0x10 ) + lVar4 );
                  lVar4 = lVar4 + 4;
                  if (uVar7 == 0 && uVar6 == 0) goto LAB_00101ac8;
               }
;
            }

            plVar14 = plVar11;
            if (param_1 == lVar8) goto LAB_00101aa0;
            lVar3 = plVar11[-1];
            lVar8 = lVar8 + -1;
            plVar11 = plVar11 + -1;
         }
 while ( true );
      }

      if (lVar3 != 0) {
         pbVar5 = *(byte**)( lVar3 + 8 );
         uVar7 = 0;
         bVar12 = 0;
         pbVar13 = &_LC12;
         goto LAB_001019d9;
      }

      goto LAB_00101ac8;
   }

   LAB_001017fe:lVar9 = lVar9 + 1;
   lVar3 = *(long*)( param_4 + lVar9 * 8 );
   goto joined_r0x0010176f;
   LAB_00101a90:bVar12 = *pbVar13;
   uVar7 = (uint)(char)bVar12;
   LAB_001019d9:if (pbVar5 == (byte*)0x0) {
      uVar6 = **(uint**)( lVar3 + 0x10 );
      if (uVar6 == 0 && uVar7 == 0) goto LAB_00101ac8;
      lVar4 = 0;
      while (plVar14 = plVar11,uVar7 != 0) {
         if (uVar6 == 0) goto LAB_00101ac8;
         if (uVar7 < uVar6) break;
         if (uVar6 < uVar7) goto LAB_00101ac8;
         uVar7 = (uint)(char)pbVar13[lVar4 + 1];
         uVar6 = ( *(uint**)( lVar3 + 0x10 ) )[lVar4 + 1];
         lVar4 = lVar4 + 1;
         if (uVar7 == 0 && uVar6 == 0) goto LAB_00101ac8;
      }
;
   }
 else {
      uVar6 = (uint)(char)*pbVar5;
      bVar12 = bVar12 | *pbVar5;
      LAB_00101a4e:if (bVar12 == 0) goto LAB_00101ac8;
      lVar3 = 1;
      while (plVar14 = plVar11,uVar7 != 0) {
         if (uVar6 == 0) goto LAB_00101ac8;
         if (uVar7 < uVar6) break;
         if (uVar6 < uVar7) goto LAB_00101ac8;
         pbVar1 = pbVar13 + lVar3;
         uVar7 = (uint)(char)*pbVar1;
         pbVar2 = pbVar5 + lVar3;
         uVar6 = (uint)(char)*pbVar2;
         lVar3 = lVar3 + 1;
         if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00101ac8;
      }
;
   }

   plVar11 = plVar14 + -1;
   if (param_1 == lVar8) goto LAB_00101aa0;
   goto LAB_001018a0;
   LAB_00101aa0:plVar11 = plVar14;
   _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
   LAB_00101ac8:if (lVar8 <= lVar9) {
      return lVar9;
   }

   lVar3 = *(long*)( param_4 + lVar9 * 8 );
   *(undefined8*)( param_4 + lVar9 * 8 ) = 0;
   if (*plVar11 != 0) {
      StringName::unref();
      *(long*)( param_4 + lVar9 * 8 ) = *plVar11;
      *plVar11 = 0;
   }

   if (lVar3 != 0) {
      StringName::unref();
      *plVar11 = lVar3;
   }

   lVar10 = *param_3;
   goto LAB_001017fe;
}
/* RendererDummy::MaterialStorage::material_initialize(RID) */void RendererDummy::MaterialStorage::material_initialize(MaterialStorage *this, ulong param_2) {
   undefined1(*pauVar1)[16];
   undefined8 uVar2;
   uint uVar3;
   char *pcVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x5b4 ) )) {
      pauVar1 = (undefined1(*) [16])( *(long*)( *(long*)( this + 0x5a0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x5b0 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x5b0 ) ) * 0x18 );
      if ((int)*(uint*)pauVar1[1] < 0) {
         uVar3 = ( uint )(param_2 >> 0x20);
         if (uVar3 == ( *(uint*)pauVar1[1] & 0x7fffffff )) {
            *(uint*)pauVar1[1] = uVar3;
            *pauVar1 = (undefined1[16])0x0;
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
/* SortArray<StringName, StringName::AlphCompare, true>::partial_sort(long, long, long, StringName*)
   const [clone .isra.0] */void SortArray<StringName,StringName::AlphCompare,true>::partial_sort(long param_1, long param_2, long param_3, StringName_conflict *param_4) {
   byte *pbVar1;
   byte *pbVar2;
   bool bVar3;
   byte bVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   uint uVar9;
   long lVar10;
   byte *pbVar11;
   byte *pbVar12;
   StringName_conflict *pSVar13;
   long lVar14;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   lVar10 = param_3 - param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar10 < 2) {
      if (param_2 <= param_3) goto LAB_0010202b;
      LAB_00101e16:lVar14 = param_3;
      LAB_00101e50:lVar6 = *(long*)( param_4 + lVar14 * 8 );
      lVar5 = *(long*)( param_4 + param_1 * 8 );
      if (lVar6 == 0) {
         if (lVar5 != 0) {
            pbVar11 = *(byte**)( lVar5 + 8 );
            uVar8 = 0;
            pbVar12 = &_LC12;
            LAB_00102064:if (pbVar11 == (byte*)0x0) {
               uVar9 = **(uint**)( lVar5 + 0x10 );
               if (uVar9 != 0 || uVar8 != 0) {
                  lVar6 = 0;
                  do {
                     if (uVar8 == 0) goto LAB_00101ed0;
                     if (uVar9 == 0) break;
                     if (uVar8 < uVar9) goto LAB_00101ed0;
                     if (uVar9 < uVar8) break;
                     uVar8 = (uint)(char)pbVar12[lVar6 + 1];
                     uVar9 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
                     lVar6 = lVar6 + 1;
                  }
 while ( uVar8 != 0 || uVar9 != 0 );
               }

            }
 else {
               uVar9 = (uint)(char)*pbVar11;
               bVar4 = (byte)uVar8 | *pbVar11;
               LAB_001020c6:if (bVar4 != 0) {
                  lVar6 = 1;
                  do {
                     if (uVar8 == 0) goto LAB_00101ed0;
                     if (uVar9 == 0) break;
                     if (uVar8 < uVar9) goto LAB_00101ed0;
                     if (uVar9 < uVar8) break;
                     pbVar1 = pbVar12 + lVar6;
                     uVar8 = (uint)(char)*pbVar1;
                     pbVar2 = pbVar11 + lVar6;
                     uVar9 = (uint)(char)*pbVar2;
                     lVar6 = lVar6 + 1;
                  }
 while ( *pbVar1 != 0 || *pbVar2 != 0 );
               }

            }

         }

      }
 else {
         pbVar12 = *(byte**)( lVar6 + 8 );
         if (lVar5 == 0) {
            if (pbVar12 != (byte*)0x0) {
               bVar4 = *pbVar12;
               uVar8 = (uint)(char)bVar4;
               uVar9 = 0;
               pbVar11 = &_LC12;
               goto LAB_001020c6;
            }

            uVar8 = 0;
            pbVar11 = &_LC12;
         }
 else {
            pbVar11 = *(byte**)( lVar5 + 8 );
            if (pbVar12 != (byte*)0x0) {
               uVar8 = (uint)(char)*pbVar12;
               goto LAB_00102064;
            }

            if (pbVar11 == (byte*)0x0) {
               uVar8 = **(uint**)( lVar5 + 0x10 );
               uVar9 = **(uint**)( lVar6 + 0x10 );
               if (uVar8 != 0 || uVar9 != 0) {
                  lVar7 = 4;
                  do {
                     if (uVar9 == 0) goto LAB_00101ed0;
                     if (uVar8 == 0) break;
                     if (uVar9 < uVar8) goto LAB_00101ed0;
                     if (uVar8 < uVar9) break;
                     uVar9 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
                     uVar8 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar7 );
                     lVar7 = lVar7 + 4;
                  }
 while ( uVar9 != 0 || uVar8 != 0 );
               }

               goto LAB_00101f58;
            }

            uVar8 = (uint)(char)*pbVar11;
         }

         uVar9 = **(uint**)( lVar6 + 0x10 );
         if (uVar9 != 0 || uVar8 != 0) {
            lVar5 = 0;
            do {
               if (uVar9 == 0) goto LAB_00101ed0;
               if (uVar8 == 0) break;
               if (uVar9 < uVar8) goto LAB_00101ed0;
               if (uVar8 < uVar9) break;
               uVar9 = ( *(uint**)( lVar6 + 0x10 ) )[lVar5 + 1];
               uVar8 = (uint)(char)pbVar11[lVar5 + 1];
               lVar5 = lVar5 + 1;
            }
 while ( uVar9 != 0 || uVar8 != 0 );
         }

      }

      goto LAB_00101f58;
   }

   lVar14 = lVar10 + -2 >> 1;
   pSVar13 = param_4 + ( param_1 + lVar14 ) * 8;
   while (true) {
      StringName::StringName((StringName_conflict*)&local_48, pSVar13);
      adjust_heap(param_1, lVar14, lVar10, (StringName_conflict*)&local_48, param_4);
      if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
         StringName::unref();
      }

      pSVar13 = pSVar13 + -8;
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
   }
;
   if (param_3 < param_2) goto LAB_00101e16;
   goto LAB_00101f8b;
   LAB_00101ed0:StringName::StringName((StringName_conflict*)&local_50, param_4 + lVar14 * 8);
   StringName::operator =(param_4 + lVar14 * 8, param_4 + param_1 * 8);
   StringName::StringName((StringName_conflict*)&local_48, (StringName_conflict*)&local_50);
   adjust_heap(param_1, 0, lVar10, (StringName_conflict*)&local_48, param_4);
   if (( StringName::configured != '\0' ) && ( ( ( local_48 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_50 != 0 ) ) )) {
      StringName::unref();
   }

   LAB_00101f58:lVar14 = lVar14 + 1;
   if (param_2 <= lVar14) goto code_r0x00101f65;
   goto LAB_00101e50;
   code_r0x00101f65:if (lVar10 < 2) goto LAB_0010202b;
   LAB_00101f8b:pSVar13 = param_4 + param_3 * 8 + -8;
   lVar10 = ( param_3 + -1 ) - param_1;
   do {
      StringName::StringName((StringName_conflict*)&local_50, pSVar13);
      StringName::operator =(pSVar13, param_4 + param_1 * 8);
      StringName::StringName((StringName_conflict*)&local_48, (StringName_conflict*)&local_50);
      adjust_heap(param_1, 0, lVar10, (StringName_conflict*)&local_48, param_4);
      if (( ( StringName::configured != '\0' ) && ( ( local_48 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      pSVar13 = pSVar13 + -8;
      bVar3 = 1 < lVar10;
      lVar10 = lVar10 + -1;
   }
 while ( bVar3 );
   LAB_0010202b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<ShaderLanguage::Scalar>::_ref(CowData<ShaderLanguage::Scalar> const&) [clone .part.0] */void CowData<ShaderLanguage::Scalar>::_ref(CowData<ShaderLanguage::Scalar> *this, CowData *param_1) {
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
/* SortArray<Pair<StringName, int>, ShaderLanguage::UniformOrderComparator, true>::adjust_heap(long,
   long, long, Pair<StringName, int>, Pair<StringName, int>*) const [clone .isra.0] */void SortArray<Pair<StringName,int>,ShaderLanguage::UniformOrderComparator,true>::adjust_heap(long param_1, long param_2, long param_3, StringName_conflict *param_4, long param_5) {
   StringName_conflict *pSVar1;
   StringName_conflict *pSVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   bool bVar7;
   long local_58;
   int local_50;
   long local_40;
   lVar5 = param_2 * 2 + 2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar6 = param_2;
   if (lVar5 < param_3) {
      do {
         pSVar1 = (StringName_conflict*)( ( param_1 + lVar5 ) * 0x10 + param_5 );
         pSVar2 = (StringName_conflict*)( ( lVar5 + -1 + param_1 ) * 0x10 + param_5 );
         lVar3 = lVar5 + -1;
         lVar4 = lVar5;
         if (*(int*)( pSVar2 + 8 ) <= *(int*)( pSVar1 + 8 )) {
            lVar4 = lVar5 + 1;
            pSVar2 = pSVar1;
            lVar3 = lVar5;
         }

         lVar5 = lVar4 * 2;
         pSVar1 = (StringName_conflict*)( ( lVar6 + param_1 ) * 0x10 + param_5 );
         StringName::operator =(pSVar1, pSVar2);
         *(undefined4*)( pSVar1 + 8 ) = *(undefined4*)( pSVar2 + 8 );
         lVar6 = lVar3;
      }
 while ( lVar5 < param_3 );
   }
 else {
      pSVar2 = (StringName_conflict*)( ( param_2 + param_1 ) * 0x10 + param_5 );
      lVar3 = param_2;
   }

   pSVar1 = pSVar2;
   if (param_3 == lVar5) {
      lVar3 = param_3 + -1;
      pSVar1 = (StringName_conflict*)( ( param_1 + lVar3 ) * 0x10 + param_5 );
      StringName::operator =(pSVar2, pSVar1);
      *(undefined4*)( pSVar2 + 8 ) = *(undefined4*)( pSVar1 + 8 );
   }

   StringName::StringName((StringName_conflict*)&local_58, param_4);
   local_50 = *(int*)( param_4 + 8 );
   lVar5 = ( lVar3 + -1 ) - ( lVar3 + -1 >> 0x3f );
   while (param_2 < lVar3) {
      lVar6 = lVar5 >> 1;
      pSVar2 = (StringName_conflict*)( ( param_1 + lVar6 ) * 0x10 + param_5 );
      pSVar1 = (StringName_conflict*)( ( param_1 + lVar3 ) * 0x10 + param_5 );
      if (local_50 <= *(int*)( pSVar2 + 8 )) break;
      StringName::operator =(pSVar1, pSVar2);
      *(undefined4*)( pSVar1 + 8 ) = *(undefined4*)( pSVar2 + 8 );
      lVar5 = ( lVar6 + -1 ) - ( lVar6 + -1 >> 0x3f );
      pSVar1 = pSVar2;
      lVar3 = lVar6;
   }
;
   StringName::operator =(pSVar1, (StringName_conflict*)&local_58);
   bVar7 = StringName::configured != '\0';
   *(int*)( pSVar1 + 8 ) = local_50;
   if (( bVar7 ) && ( local_58 != 0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SortArray<Pair<StringName, int>, ShaderLanguage::UniformOrderComparator, true>::introsort(long,
   long, Pair<StringName, int>*, long) const [clone .isra.0] */void SortArray<Pair<StringName,int>,ShaderLanguage::UniformOrderComparator,true>::introsort(long param_1, long param_2, Pair_conflict *param_3, long param_4) {
   int iVar1;
   int iVar2;
   long lVar3;
   Pair_conflict *pPVar4;
   int iVar5;
   Pair_conflict *pPVar6;
   long lVar7;
   StringName_conflict *pSVar8;
   Pair_conflict *pPVar9;
   long lVar10;
   Pair_conflict *pPVar11;
   long lVar12;
   long in_FS_OFFSET;
   bool bVar13;
   long *plVar14;
   StringName_conflict *local_70;
   long local_68;
   int local_60;
   long local_58;
   int local_50;
   long local_40;
   lVar10 = param_2 - param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0x10 < lVar10) {
      if (param_4 != 0) {
         plVar14 = &local_58;
         pPVar11 = param_3 + param_1 * 0x10;
         lVar7 = param_2;
         LAB_001024bc:param_4 = param_4 + -1;
         iVar5 = *(int*)( pPVar11 + 8 );
         pPVar9 = param_3 + lVar7 * 0x10 + -0x10;
         iVar1 = *(int*)( pPVar9 + 8 );
         pPVar4 = param_3 + ( ( lVar10 >> 1 ) + param_1 ) * 0x10;
         iVar2 = *(int*)( pPVar4 + 8 );
         if (iVar5 < iVar2) {
            pPVar6 = pPVar4;
            if (( iVar1 <= iVar2 ) && ( pPVar6 = iVar1 <= iVar5 )) {
               pPVar6 = pPVar11;
            }

         }
 else {
            pPVar6 = pPVar11;
            if (( iVar1 <= iVar5 ) && ( pPVar6 = iVar1 <= iVar2 )) {
               pPVar6 = pPVar4;
            }

         }

         StringName::StringName((StringName_conflict*)&local_68, (StringName_conflict*)pPVar6);
         iVar5 = *(int*)( (StringName_conflict*)pPVar6 + 8 );
         pPVar9 = pPVar11;
         lVar12 = param_1;
         lVar10 = lVar7;
         local_60 = iVar5;
         do {
            param_2 = lVar12;
            if (*(int*)( pPVar9 + 8 ) < iVar5) {
               if (lVar10 + -1 == lVar12) {
                  _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0, lVar10, lVar12, plVar14);
                  iVar5 = local_60;
                  goto LAB_00102551;
               }

            }
 else {
               LAB_00102551:lVar7 = lVar7 + -1;
               pPVar4 = param_3 + lVar7 * 0x10;
               if (iVar5 < *(int*)( pPVar4 + 8 )) {
                  pPVar6 = param_3 + lVar7 * 0x10 + -0x10;
                  while (param_1 != lVar7) {
                     lVar7 = lVar7 + -1;
                     pPVar4 = pPVar6;
                     if (*(int*)( pPVar6 + 8 ) <= iVar5) goto LAB_001025b4;
                     pPVar6 = pPVar6 + -0x10;
                  }
;
                  _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0, lVar10, param_2, plVar14);
               }

               LAB_001025b4:if (lVar7 <= lVar12) goto LAB_00102650;
               local_58 = *(long*)pPVar9;
               local_50 = *(int*)( pPVar9 + 8 );
               *(long*)pPVar9 = 0;
               if (*(long*)pPVar4 != 0) {
                  StringName::unref();
                  *(long*)pPVar9 = *(long*)pPVar4;
                  *(long*)pPVar4 = 0;
               }

               *(undefined4*)( pPVar9 + 8 ) = *(undefined4*)( pPVar4 + 8 );
               if (local_58 != 0) {
                  StringName::unref();
                  lVar3 = local_58;
                  local_58 = 0;
                  *(long*)pPVar4 = lVar3;
               }

               bVar13 = StringName::configured != '\0';
               *(int*)( pPVar4 + 8 ) = local_50;
               iVar5 = local_60;
               if (( bVar13 ) && ( local_58 != 0 )) {
                  StringName::unref();
                  iVar5 = local_60;
               }

            }

            pPVar9 = pPVar9 + 0x10;
            lVar12 = lVar12 + 1;
         }
 while ( true );
      }

      LAB_001026fe:local_70 = (StringName_conflict*)&local_68;
      lVar7 = lVar10 + -2 >> 1;
      pSVar8 = (StringName_conflict*)( param_3 + ( param_1 + lVar7 ) * 0x10 );
      while (true) {
         StringName::StringName((StringName_conflict*)&local_58, pSVar8);
         local_50 = *(int*)( pSVar8 + 8 );
         adjust_heap(param_1, lVar7, lVar10, (StringName_conflict*)&local_58, param_3);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         pSVar8 = pSVar8 + -0x10;
         if (lVar7 == 0) break;
         lVar7 = lVar7 + -1;
      }
;
      pSVar8 = (StringName_conflict*)( param_3 + param_1 * 0x10 );
      pPVar11 = param_3 + param_2 * 0x10 + -0x10;
      lVar10 = ( param_2 + -1 ) - param_1;
      do {
         StringName::StringName(local_70, (StringName_conflict*)pPVar11);
         local_60 = *(int*)( (StringName_conflict*)pPVar11 + 8 );
         StringName::operator =((StringName_conflict*)pPVar11, pSVar8);
         *(undefined4*)( (StringName_conflict*)pPVar11 + 8 ) = *(undefined4*)( pSVar8 + 8 );
         StringName::StringName((StringName_conflict*)&local_58, local_70);
         local_50 = local_60;
         adjust_heap(param_1, 0, lVar10, (StringName_conflict*)&local_58, param_3);
         if (( StringName::configured != '\0' ) && ( ( ( local_58 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_68 != 0 ) ) )) {
            StringName::unref();
         }

         pPVar11 = (Pair_conflict*)( (StringName_conflict*)pPVar11 + -0x10 );
         bVar13 = 1 < lVar10;
         lVar10 = lVar10 + -1;
      }
 while ( bVar13 );
   }

   LAB_00102838:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00102650:if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   introsort(lVar12, lVar10, param_3, param_4);
   lVar10 = lVar12 - param_1;
   if (lVar10 < 0x11) goto LAB_00102838;
   lVar7 = lVar12;
   if (param_4 == 0) goto LAB_001026fe;
   goto LAB_001024bc;
}
/* SortArray<StringName, StringName::AlphCompare, true>::introsort(long, long, StringName*, long)
   const [clone .isra.0] */void SortArray<StringName,StringName::AlphCompare,true>::introsort(long param_1, long param_2, StringName_conflict *param_3, long param_4) {
   long lVar1;
   StringName_conflict *pSVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   long lVar15;
   long in_FS_OFFSET;
   long local_138;
   long local_120;
   long local_100;
   long local_f8;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) {
      LAB_001032ba:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      if (param_4 != 0) {
         lVar12 = param_2 * 8;
         lVar3 = param_2;
         LAB_00102902:param_4 = param_4 + -1;
         pSVar2 = (StringName_conflict*)median_of_3(param_3 + param_1 * 8, param_3 + ( ( lVar1 >> 1 ) + param_1 ) * 8, param_3 + lVar12 + -8);
         StringName::StringName((StringName_conflict*)&local_48, pSVar2);
         param_2 = partitioner(param_1, lVar3, (StringName_conflict*)&local_48, param_3);
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         lVar1 = lVar3 - param_2;
         if (0x10 < lVar1) {
            if (param_4 != 0) {
               lVar12 = param_4;
               lVar4 = lVar3;
               LAB_001029c1:do {
                  lVar12 = lVar12 + -1;
                  pSVar2 = (StringName_conflict*)median_of_3(param_3 + param_2 * 8, param_3 + ( ( lVar1 >> 1 ) + param_2 ) * 8, param_3 + lVar4 * 8 + -8);
                  StringName::StringName((StringName_conflict*)&local_48, pSVar2);
                  lVar3 = partitioner(param_2, lVar4, (StringName_conflict*)&local_48, param_3);
                  if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                     StringName::unref();
                  }

                  lVar1 = lVar4 - lVar3;
                  if (0x10 < lVar1) {
                     if (lVar12 != 0) {
                        lVar13 = lVar12;
                        local_138 = lVar4;
                        LAB_00102a82:do {
                           lVar13 = lVar13 + -1;
                           pSVar2 = (StringName_conflict*)median_of_3(param_3 + lVar3 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar3 ) * 8, param_3 + local_138 * 8 + -8);
                           StringName::StringName((StringName_conflict*)&local_48, pSVar2);
                           lVar4 = partitioner(lVar3, local_138, (StringName_conflict*)&local_48, param_3);
                           if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                              StringName::unref();
                           }

                           lVar1 = local_138 - lVar4;
                           if (0x10 < lVar1) {
                              if (lVar13 != 0) {
                                 lVar11 = lVar13;
                                 LAB_00102b3c:do {
                                    lVar11 = lVar11 + -1;
                                    lVar9 = local_138 * 8;
                                    pSVar2 = (StringName_conflict*)median_of_3(param_3 + lVar4 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar4 ) * 8, param_3 + lVar9 + -8);
                                    StringName::StringName((StringName_conflict*)&local_48, pSVar2);
                                    lVar5 = partitioner(lVar4, local_138, (StringName_conflict*)&local_48, param_3);
                                    if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                       StringName::unref();
                                    }

                                    lVar1 = local_138 - lVar5;
                                    if (0x10 < lVar1) {
                                       lVar6 = local_138;
                                       if (lVar11 != 0) {
                                          lVar7 = local_138;
                                          local_100 = lVar11;
                                          do {
                                             local_100 = local_100 + -1;
                                             pSVar2 = (StringName_conflict*)median_of_3(param_3 + lVar5 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar5 ) * 8, param_3 + lVar9 + -8);
                                             StringName::StringName((StringName_conflict*)&local_48, pSVar2);
                                             lVar6 = partitioner(lVar5, lVar7, (StringName_conflict*)&local_48, param_3);
                                             if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                                StringName::unref();
                                             }

                                             lVar1 = lVar7 - lVar6;
                                             if (0x10 < lVar1) {
                                                if (local_100 != 0) {
                                                   lVar8 = lVar7;
                                                   local_120 = local_100;
                                                   do {
                                                      local_120 = local_120 + -1;
                                                      pSVar2 = (StringName_conflict*)median_of_3(param_3 + lVar6 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar6 ) * 8, param_3 + lVar9 + -8);
                                                      StringName::StringName((StringName_conflict*)&local_48, pSVar2);
                                                      lVar7 = partitioner(lVar6, lVar8, (StringName_conflict*)&local_48, param_3);
                                                      if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                                         StringName::unref();
                                                      }

                                                      lVar1 = lVar8 - lVar7;
                                                      if (0x10 < lVar1) {
                                                         if (local_120 == 0) {
                                                            LAB_0010308e:partial_sort(lVar7, lVar8, lVar8, param_3);
                                                         }
 else {
                                                            lVar9 = lVar8;
                                                            local_138 = local_120;
                                                            do {
                                                               while (true) {
                                                                  local_138 = local_138 + -1;
                                                                  lVar14 = lVar9 * 8;
                                                                  pSVar2 = (StringName_conflict*)median_of_3(param_3 + lVar7 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar7 ) * 8, param_3 + lVar14 + -8);
                                                                  StringName::StringName((StringName_conflict*)&local_48, pSVar2);
                                                                  lVar8 = partitioner(lVar7, lVar9, (StringName_conflict*)&local_48, param_3);
                                                                  if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                                                     StringName::unref();
                                                                  }

                                                                  lVar1 = lVar9 - lVar8;
                                                                  if (0x10 < lVar1) break;
                                                                  LAB_00102ffe:lVar1 = lVar8 - lVar7;
                                                                  if (lVar1 < 0x11) {
                                                                     lVar1 = lVar7 - lVar6;
                                                                     if (lVar1 < 0x11) goto LAB_00102fb0;
                                                                     goto LAB_00103059;
                                                                  }

                                                                  lVar9 = lVar8;
                                                                  if (local_138 == 0) goto LAB_0010308e;
                                                               }
;
                                                               if (local_138 == 0) {
                                                                  LAB_00102fed:partial_sort(lVar8, lVar9, lVar9, param_3);
                                                                  goto LAB_00102ffe;
                                                               }

                                                               lVar10 = lVar9;
                                                               local_f8 = local_138;
                                                               while (true) {
                                                                  local_f8 = local_f8 + -1;
                                                                  pSVar2 = (StringName_conflict*)median_of_3(param_3 + lVar8 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar8 ) * 8, param_3 + lVar14 + -8);
                                                                  StringName::StringName((StringName_conflict*)&local_48, pSVar2);
                                                                  lVar9 = partitioner(lVar8, lVar10, (StringName_conflict*)&local_48, param_3);
                                                                  if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                                                     StringName::unref();
                                                                  }

                                                                  lVar1 = lVar10 - lVar9;
                                                                  if (0x10 < lVar1) {
                                                                     if (local_f8 != 0) {
                                                                        lVar14 = local_f8;
                                                                        lVar15 = lVar10;
                                                                        do {
                                                                           lVar14 = lVar14 + -1;
                                                                           pSVar2 = (StringName_conflict*)median_of_3(param_3 + lVar9 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar9 ) * 8, param_3 + lVar15 * 8 + -8);
                                                                           StringName::StringName((StringName_conflict*)&local_48, pSVar2);
                                                                           lVar10 = partitioner(lVar9, lVar15, (StringName_conflict*)&local_48, param_3);
                                                                           if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                                                              StringName::unref();
                                                                           }

                                                                           introsort(lVar10, lVar15, param_3, lVar14);
                                                                           lVar1 = lVar10 - lVar9;
                                                                           if (lVar1 < 0x11) {
                                                                              lVar1 = lVar9 - lVar8;
                                                                              if (lVar1 < 0x11) goto LAB_00102ffe;
                                                                              goto LAB_00102f84;
                                                                           }

                                                                           lVar15 = lVar10;
                                                                        }
 while ( lVar14 != 0 );
                                                                     }

                                                                     partial_sort(lVar9, lVar10, lVar10, param_3);
                                                                  }

                                                                  lVar1 = lVar9 - lVar8;
                                                                  if (lVar1 < 0x11) break;
                                                                  if (local_f8 == 0) goto LAB_00102fed;
                                                                  LAB_00102f84:lVar14 = lVar9 * 8;
                                                                  lVar10 = lVar9;
                                                               }
;
                                                               lVar1 = lVar8 - lVar7;
                                                               lVar9 = lVar8;
                                                            }
 while ( 0x10 < lVar1 );
                                                         }

                                                      }

                                                      lVar1 = lVar7 - lVar6;
                                                      if (lVar1 < 0x11) {
                                                         lVar1 = lVar6 - lVar5;
                                                         if (lVar1 < 0x11) goto LAB_001030d7;
                                                         goto LAB_00102fd1;
                                                      }

                                                      if (local_120 == 0) break;
                                                      LAB_00103059:lVar9 = lVar7 * 8;
                                                      lVar8 = lVar7;
                                                   }
 while ( true );
                                                }

                                                partial_sort(lVar6, lVar7, lVar7, param_3);
                                             }

                                             LAB_00102fb0:lVar1 = lVar6 - lVar5;
                                             if (lVar1 < 0x11) {
                                                lVar1 = lVar5 - lVar4;
                                                local_138 = lVar5;
                                                if (lVar1 < 0x11) goto LAB_00103190;
                                                goto LAB_00102b3c;
                                             }

                                             if (local_100 == 0) break;
                                             LAB_00102fd1:lVar9 = lVar6 * 8;
                                             lVar7 = lVar6;
                                          }
 while ( true );
                                       }

                                       partial_sort(lVar5, lVar6, lVar6, param_3);
                                    }

                                    LAB_001030d7:lVar1 = lVar5 - lVar4;
                                    if (lVar1 < 0x11) {
                                       lVar1 = lVar4 - lVar3;
                                       local_138 = lVar4;
                                       if (lVar1 < 0x11) goto LAB_00103221;
                                       goto LAB_00102a82;
                                    }

                                    local_138 = lVar5;
                                 }
 while ( lVar11 != 0 );
                              }

                              partial_sort(lVar4, local_138, local_138, param_3);
                           }

                           LAB_00103190:lVar1 = lVar4 - lVar3;
                           if (lVar1 < 0x11) {
                              lVar1 = lVar3 - param_2;
                              lVar4 = lVar3;
                              if (lVar1 < 0x11) goto LAB_001032ae;
                              goto LAB_001029c1;
                           }

                           local_138 = lVar4;
                        }
 while ( lVar13 != 0 );
                     }

                     partial_sort(lVar3, lVar4, lVar4, param_3);
                  }

                  LAB_00103221:lVar1 = lVar3 - param_2;
                  if (lVar1 < 0x11) goto LAB_001032ae;
                  lVar4 = lVar3;
                  if (lVar12 == 0) break;
               }
 while ( true );
            }

            partial_sort(param_2, lVar3, lVar3, param_3);
         }

         lVar1 = param_2 - param_1;
         if (0x10 < lVar1) {
            if (param_4 != 0) goto LAB_0010328d;
            goto LAB_001032ec;
         }

         goto LAB_001032ba;
      }

      LAB_001032ec:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         partial_sort(param_1, param_2, param_2, param_3);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_001032ae:lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) goto LAB_001032ba;
   LAB_0010328d:lVar12 = param_2 * 8;
   lVar3 = param_2;
   goto LAB_00102902;
}
/* RendererDummy::MaterialStorage::global_shader_parameter_remove(StringName const&) */void RendererDummy::MaterialStorage::global_shader_parameter_remove(MaterialStorage *this, StringName_conflict *param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long *plVar4;
   uint uVar5;
   long lVar6;
   long lVar7;
   undefined8 uVar8;
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
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   undefined1 auVar35[16];
   undefined1 auVar36[16];
   ulong uVar37;
   uint uVar38;
   int iVar39;
   uint uVar40;
   long lVar41;
   ulong uVar42;
   ulong uVar43;
   ulong uVar44;
   long lVar45;
   uint uVar46;
   uint uVar47;
   ulong uVar48;
   long *plVar49;
   uint *puVar50;
   if (*(long*)( this + 0x10 ) == 0) {
      return;
   }

   if (*(int*)( this + 0x34 ) == 0) {
      return;
   }

   uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x30 ) * 4 );
   lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x30 ) * 8 );
   if (*(long*)param_1 == 0) {
      uVar38 = StringName::get_empty_hash();
   }
 else {
      uVar38 = *(uint*)( *(long*)param_1 + 0x20 );
   }

   uVar42 = CONCAT44(0, uVar5);
   lVar45 = *(long*)( this + 0x18 );
   if (uVar38 == 0) {
      uVar38 = 1;
   }

   auVar9._8_8_ = 0;
   auVar9._0_8_ = (ulong)uVar38 * lVar6;
   auVar23._8_8_ = 0;
   auVar23._0_8_ = uVar42;
   lVar41 = SUB168(auVar9 * auVar23, 8);
   uVar40 = *(uint*)( lVar45 + lVar41 * 4 );
   iVar39 = SUB164(auVar9 * auVar23, 8);
   if (uVar40 == 0) {
      return;
   }

   uVar46 = 0;
   while (( uVar38 != uVar40 || ( lVar41 = *(long*)( *(long*)( *(long*)( this + 0x10 ) + lVar41 * 8 ) + 0x10 ) ),lVar41 != *(long*)param_1 )) {
      uVar46 = uVar46 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = ( ulong )(iVar39 + 1) * lVar6;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar42;
      lVar41 = SUB168(auVar10 * auVar24, 8);
      uVar40 = *(uint*)( lVar45 + lVar41 * 4 );
      iVar39 = SUB164(auVar10 * auVar24, 8);
      if (uVar40 == 0) {
         return;
      }

      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar40 * lVar6;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar42;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(( uVar5 + iVar39 ) - SUB164(auVar11 * auVar25, 8)) * lVar6;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar42;
      if (SUB164(auVar12 * auVar26, 8) < uVar46) {
         return;
      }

   }
;
   if (*(long*)( this + 0x10 ) == 0) {
      return;
   }

   if (*(int*)( this + 0x34 ) == 0) {
      return;
   }

   uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x30 ) * 4 );
   uVar42 = CONCAT44(0, uVar5);
   lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x30 ) * 8 );
   if (lVar41 == 0) {
      uVar38 = StringName::get_empty_hash();
      lVar45 = *(long*)( this + 0x18 );
   }
 else {
      uVar38 = *(uint*)( lVar41 + 0x20 );
   }

   if (uVar38 == 0) {
      uVar38 = 1;
   }

   auVar13._8_8_ = 0;
   auVar13._0_8_ = (ulong)uVar38 * lVar6;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar42;
   lVar41 = SUB168(auVar13 * auVar27, 8);
   uVar40 = *(uint*)( lVar45 + lVar41 * 4 );
   uVar46 = SUB164(auVar13 * auVar27, 8);
   if (uVar40 == 0) {
      return;
   }

   uVar47 = 0;
   do {
      uVar43 = (ulong)uVar46;
      if (( uVar38 == uVar40 ) && ( lVar7 = *(long*)( this + 0x10 ) * (long*)( *(long*)( lVar7 + lVar41 * 8 ) + 0x10 ) == *(long*)param_1 )) {
         uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x30 ) * 4 );
         uVar48 = CONCAT44(0, uVar5);
         lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x30 ) * 8 );
         auVar17._8_8_ = 0;
         auVar17._0_8_ = ( ulong )(uVar46 + 1) * lVar6;
         auVar31._8_8_ = 0;
         auVar31._0_8_ = uVar48;
         uVar42 = SUB168(auVar17 * auVar31, 8);
         puVar50 = (uint*)( lVar45 + uVar42 * 4 );
         uVar40 = SUB164(auVar17 * auVar31, 8);
         uVar38 = *puVar50;
         if (( uVar38 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = (ulong)uVar38 * lVar6,auVar32._8_8_ = 0,auVar32._0_8_ = uVar48,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( uVar5 + uVar40 ) - SUB164(auVar18 * auVar32, 8)) * lVar6,auVar33._8_8_ = 0,auVar33._0_8_ = uVar48,uVar37 = (ulong)uVar40,uVar44 = uVar43,SUB164(auVar19 * auVar33, 8) != 0) {
            while (true) {
               uVar43 = uVar37;
               puVar1 = (uint*)( lVar45 + uVar44 * 4 );
               *puVar50 = *puVar1;
               puVar2 = (undefined8*)( lVar7 + uVar42 * 8 );
               *puVar1 = uVar38;
               puVar3 = (undefined8*)( lVar7 + uVar44 * 8 );
               uVar8 = *puVar2;
               *puVar2 = *puVar3;
               *puVar3 = uVar8;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = ( ulong )((int)uVar43 + 1) * lVar6;
               auVar36._8_8_ = 0;
               auVar36._0_8_ = uVar48;
               uVar42 = SUB168(auVar22 * auVar36, 8);
               puVar50 = (uint*)( lVar45 + uVar42 * 4 );
               uVar38 = *puVar50;
               if (( uVar38 == 0 ) || ( auVar20._8_8_ = 0 ),auVar20._0_8_ = (ulong)uVar38 * lVar6,auVar34._8_8_ = 0,auVar34._0_8_ = uVar48,auVar21._8_8_ = 0,auVar21._0_8_ = ( ulong )(( SUB164(auVar22 * auVar36, 8) + uVar5 ) - SUB164(auVar20 * auVar34, 8)) * lVar6,auVar35._8_8_ = 0,auVar35._0_8_ = uVar48,SUB164(auVar21 * auVar35, 8) == 0) break;
               uVar37 = uVar42 & 0xffffffff;
               uVar44 = uVar43;
            }
;
         }

         plVar4 = (long*)( lVar7 + uVar43 * 8 );
         *(undefined4*)( lVar45 + uVar43 * 4 ) = 0;
         plVar49 = (long*)*plVar4;
         if (*(long**)( this + 0x20 ) == plVar49) {
            *(long*)( this + 0x20 ) = *plVar49;
            plVar49 = (long*)*plVar4;
         }

         if (*(long**)( this + 0x28 ) == plVar49) {
            *(long*)( this + 0x28 ) = plVar49[1];
            plVar49 = (long*)*plVar4;
         }

         if ((long*)plVar49[1] != (long*)0x0) {
            *(long*)plVar49[1] = *plVar49;
            plVar49 = (long*)*plVar4;
         }

         if (*plVar49 != 0) {
            *(long*)( *plVar49 + 8 ) = plVar49[1];
            plVar49 = (long*)*plVar4;
         }

         if (( StringName::configured != '\0' ) && ( plVar49[2] != 0 )) {
            StringName::unref();
         }

         Memory::free_static(plVar49, false);
         *(undefined8*)( *(long*)( this + 0x10 ) + uVar43 * 8 ) = 0;
         *(int*)( this + 0x34 ) = *(int*)( this + 0x34 ) + -1;
         return;
      }

      uVar47 = uVar47 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = ( ulong )(uVar46 + 1) * lVar6;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar42;
      lVar41 = SUB168(auVar14 * auVar28, 8);
      uVar40 = *(uint*)( lVar45 + lVar41 * 4 );
      uVar46 = SUB164(auVar14 * auVar28, 8);
   }
 while ( ( uVar40 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar40 * lVar6,auVar29._8_8_ = 0,auVar29._0_8_ = uVar42,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar5 + uVar46 ) - SUB164(auVar15 * auVar29, 8)) * lVar6,auVar30._8_8_ = 0,auVar30._0_8_ = uVar42,uVar47 <= SUB164(auVar16 * auVar30, 8) );
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
/* RendererDummy::MaterialStorage::global_shader_parameter_get_type(StringName const&) const */undefined4 RendererDummy::MaterialStorage::global_shader_parameter_get_type(MaterialStorage *this, StringName_conflict *param_1) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
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
   code *pcVar20;
   undefined4 uVar21;
   uint uVar22;
   int iVar23;
   uint uVar24;
   long lVar25;
   uint uVar26;
   ulong uVar27;
   ulong uVar28;
   uint uVar29;
   long lVar30;
   long in_FS_OFFSET;
   long local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x10 ) != 0 ) && ( *(int*)( this + 0x34 ) != 0 )) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x30 ) * 4 );
      lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x30 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar22 = StringName::get_empty_hash();
      }
 else {
         uVar22 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar28 = CONCAT44(0, uVar2);
      lVar30 = *(long*)( this + 0x18 );
      if (uVar22 == 0) {
         uVar22 = 1;
      }

      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar22 * lVar3;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar28;
      lVar25 = SUB168(auVar4 * auVar12, 8);
      uVar29 = *(uint*)( lVar30 + lVar25 * 4 );
      uVar27 = (ulong)uVar29;
      iVar23 = SUB164(auVar4 * auVar12, 8);
      if (uVar29 != 0) {
         uVar29 = 0;
         while (( uVar22 != (uint)uVar27 || ( lVar25 = *(long*)( *(long*)( *(long*)( this + 0x10 ) + lVar25 * 8 ) + 0x10 ) ),lVar25 != *(long*)param_1 )) {
            uVar29 = uVar29 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(iVar23 + 1) * lVar3;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar28;
            lVar25 = SUB168(auVar5 * auVar13, 8);
            uVar24 = *(uint*)( lVar30 + lVar25 * 4 );
            uVar27 = (ulong)uVar24;
            iVar23 = SUB164(auVar5 * auVar13, 8);
            if (( uVar24 == 0 ) || ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar27 * lVar3,auVar14._8_8_ = 0,auVar14._0_8_ = uVar28,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar2 + iVar23 ) - SUB164(auVar6 * auVar14, 8)) * lVar3,auVar15._8_8_ = 0,auVar15._0_8_ = uVar28,SUB164(auVar7 * auVar15, 8) < uVar29) goto LAB_001039c0;
         }
;
         if (( *(long*)( this + 0x10 ) == 0 ) || ( *(int*)( this + 0x34 ) == 0 )) goto LAB_00103a20;
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x30 ) * 4 );
         uVar28 = CONCAT44(0, uVar2);
         lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x30 ) * 8 );
         if (lVar25 == 0) {
            uVar22 = StringName::get_empty_hash();
            lVar30 = *(long*)( this + 0x18 );
         }
 else {
            uVar22 = *(uint*)( lVar25 + 0x20 );
         }

         if (uVar22 == 0) {
            uVar22 = 1;
         }

         auVar8._8_8_ = 0;
         auVar8._0_8_ = (ulong)uVar22 * lVar3;
         auVar16._8_8_ = 0;
         auVar16._0_8_ = uVar28;
         lVar25 = SUB168(auVar8 * auVar16, 8);
         uVar29 = *(uint*)( lVar30 + lVar25 * 4 );
         uVar24 = SUB164(auVar8 * auVar16, 8);
         if (uVar29 == 0) goto LAB_00103a20;
         uVar26 = 0;
         while (( uVar22 != uVar29 || ( *(long*)( *(long*)( *(long*)( this + 0x10 ) + lVar25 * 8 ) + 0x10 ) != *(long*)param_1 ) )) {
            uVar26 = uVar26 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = ( ulong )(uVar24 + 1) * lVar3;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar28;
            lVar25 = SUB168(auVar9 * auVar17, 8);
            uVar29 = *(uint*)( lVar30 + lVar25 * 4 );
            uVar24 = SUB164(auVar9 * auVar17, 8);
            if (( uVar29 == 0 ) || ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar29 * lVar3,auVar18._8_8_ = 0,auVar18._0_8_ = uVar28,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( uVar2 + uVar24 ) - SUB164(auVar10 * auVar18, 8)) * lVar3,auVar19._8_8_ = 0,auVar19._0_8_ = uVar28,SUB164(auVar11 * auVar19, 8) < uVar26) {
               LAB_00103a20:_err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar20 = (code*)invalidInstructionException();
               ( *pcVar20 )();
            }

         }
;
         uVar21 = *(undefined4*)( *(long*)( *(long*)( this + 0x10 ) + (ulong)uVar24 * 8 ) + 0x18 );
         goto LAB_00103998;
      }

   }

   LAB_001039c0:Variant::Variant((Variant*)local_58, "don\'t have name, sorry");
   stringify_variants((Variant*)&local_60);
   __print_line((String*)&local_60);
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

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   uVar21 = 0x1d;
   LAB_00103998:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar21;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererDummy::MaterialStorage::material_get_instance_shader_parameters(RID,
   List<RendererMaterialStorage::InstanceShaderParam, DefaultAllocator>*) */void RendererDummy::MaterialStorage::material_get_instance_shader_parameters(MaterialStorage *this, ulong param_2, long *param_3) {
   long *plVar1;
   ulong *puVar2;
   long lVar3;
   int iVar4;
   ulong uVar5;
   char *__s;
   undefined8 uVar6;
   long lVar7;
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   size_t sVar11;
   undefined4 *puVar12;
   long lVar13;
   undefined1(*pauVar14)[16];
   long *plVar15;
   long in_FS_OFFSET;
   bool bVar16;
   long local_f0;
   char *local_e8;
   size_t local_e0;
   long local_d8;
   undefined4 local_d0;
   long local_c8;
   undefined4 local_c0;
   undefined4 local_b8[8];
   undefined8 local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   undefined4 local_68;
   int local_60[2];
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x5b4 ) )) {
      puVar2 = (ulong*)( *(long*)( *(long*)( this + 0x5a0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x5b0 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x5b0 ) ) * 0x18 );
      if ((int)puVar2[2] == (int)( param_2 >> 0x20 )) {
         uVar5 = *puVar2;
         if (( uVar5 != 0 ) && ( (uint)uVar5 < *(uint*)( this + 0x54 ) )) {
            lVar3 = *(long*)( *(long*)( this + 0x40 ) + ( ( uVar5 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x50 ) ) * 8 ) + ( ( uVar5 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x50 ) ) * 0x38;
            iVar4 = *(int*)( lVar3 + 0x30 );
            if (iVar4 == (int)( uVar5 >> 0x20 )) {
               plVar15 = *(long**)( lVar3 + 0x18 );
               if (plVar15 != (long*)0x0) {
                  do {
                     while ((int)plVar15[9] != 1) {
                        LAB_00103b98:plVar15 = (long*)*plVar15;
                        if (plVar15 == (long*)0x0) goto LAB_00103fa8;
                     }
;
                     local_98 = 0;
                     local_80 = 0;
                     local_78 = 0;
                     local_70 = 6;
                     local_60[0] = 0;
                     local_60[1] = 0;
                     local_90 = (undefined1[16])0x0;
                     local_58 = (undefined1[16])0x0;
                     ShaderLanguage::uniform_to_property_info((Uniform*)&local_e8);
                     local_98 = CONCAT44(local_98._4_4_, local_e8._0_4_);
                     uVar6 = local_90._0_8_;
                     if (local_90._0_8_ != local_e0) {
                        if (local_90._0_8_ != 0) {
                           LOCK();
                           plVar1 = (long*)( local_90._0_8_ - 0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              auVar10._8_8_ = 0;
                              auVar10._0_8_ = local_90._8_8_;
                              local_90 = auVar10 << 0x40;
                              Memory::free_static((void*)( uVar6 - 0x10 ), false);
                           }

                        }

                        local_90._0_8_ = local_e0;
                        local_e0 = 0;
                     }

                     if (local_90._8_8_ != local_d8) {
                        StringName::unref();
                        lVar3 = local_d8;
                        local_d8 = 0;
                        local_90._8_8_ = lVar3;
                     }

                     lVar7 = local_78;
                     lVar3 = local_c8;
                     local_80 = CONCAT44(local_80._4_4_, local_d0);
                     if (local_78 == local_c8) {
                        local_70 = local_c0;
                        if (local_78 != 0) {
                           LOCK();
                           plVar1 = (long*)( local_78 + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              local_c8 = 0;
                              Memory::free_static((void*)( lVar3 + -0x10 ), false);
                           }

                        }

                     }
 else {
                        if (local_78 != 0) {
                           LOCK();
                           plVar1 = (long*)( local_78 + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              local_78 = 0;
                              Memory::free_static((void*)( lVar7 + -0x10 ), false);
                           }

                        }

                        local_78 = local_c8;
                        local_70 = local_c0;
                     }

                     if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
                        StringName::unref();
                     }

                     sVar11 = local_e0;
                     if (local_e0 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_e0 - 0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_e0 = 0;
                           Memory::free_static((void*)( sVar11 - 0x10 ), false);
                        }

                     }

                     lVar3 = plVar15[2];
                     if (lVar3 == 0) {
                        LAB_00104009:local_f0 = 0;
                        if (local_90._0_8_ != 0) {
                           LAB_0010401a:LOCK();
                           plVar1 = (long*)( local_90._0_8_ + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              uVar6 = local_90._0_8_;
                              auVar9._8_8_ = 0;
                              auVar9._0_8_ = local_90._8_8_;
                              local_90 = auVar9 << 0x40;
                              Memory::free_static((void*)( uVar6 + -0x10 ), false);
                           }

                           goto LAB_00103d77;
                        }

                     }
 else {
                        __s = *(char**)( lVar3 + 8 );
                        local_f0 = 0;
                        if (__s == (char*)0x0) {
                           if (*(long*)( lVar3 + 0x10 ) == 0) goto LAB_00104009;
                           plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
                           do {
                              lVar7 = *plVar1;
                              if (lVar7 == 0) goto LAB_00103d5d;
                              LOCK();
                              lVar13 = *plVar1;
                              bVar16 = lVar7 == lVar13;
                              if (bVar16) {
                                 *plVar1 = lVar7 + 1;
                                 lVar13 = lVar7;
                              }

                              UNLOCK();
                           }
 while ( !bVar16 );
                           if (lVar13 != -1) {
                              local_f0 = *(long*)( lVar3 + 0x10 );
                           }

                        }
 else {
                           local_e0 = strlen(__s);
                           local_e8 = __s;
                           String::parse_latin1((StrRange*)&local_f0);
                        }

                        LAB_00103d5d:lVar3 = local_f0;
                        if (local_90._0_8_ == local_f0) {
                           if (local_f0 != 0) {
                              LOCK();
                              plVar1 = (long*)( local_f0 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 local_f0 = 0;
                                 Memory::free_static((void*)( lVar3 + -0x10 ), false);
                              }

                           }

                        }
 else {
                           if (local_90._0_8_ != 0) goto LAB_0010401a;
                           LAB_00103d77:local_90._0_8_ = local_f0;
                        }

                     }

                     local_68 = (undefined4)plVar15[0xf];
                     ShaderLanguage::constant_value_to_variant(local_b8, plVar15 + 7, (int)plVar15[5], (int)plVar15[6], *(undefined4*)( (long)plVar15 + 0x4c ));
                     if (Variant::needs_deinit[local_60[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     local_60[0] = local_b8[0];
                     if (*param_3 == 0) {
                        pauVar14 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                        *param_3 = (long)pauVar14;
                        *(undefined4*)pauVar14[1] = 0;
                        *pauVar14 = (undefined1[16])0x0;
                     }

                     puVar12 = (undefined4*)operator_new(0x68, DefaultAllocator::alloc);
                     *(undefined1(*) [16])( puVar12 + 2 ) = (undefined1[16])0x0;
                     *puVar12 = 0;
                     puVar12[6] = 0;
                     *(undefined8*)( puVar12 + 8 ) = 0;
                     puVar12[10] = 6;
                     puVar12[0xe] = 0;
                     *(undefined8*)( puVar12 + 0x18 ) = 0;
                     *(undefined1(*) [16])( puVar12 + 0x10 ) = (undefined1[16])0x0;
                     *(undefined1(*) [16])( puVar12 + 0x14 ) = (undefined1[16])0x0;
                     *puVar12 = (undefined4)local_98;
                     if (local_90._0_8_ != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)( puVar12 + 2 ), (CowData*)local_90);
                     }

                     StringName::operator =((StringName_conflict*)( puVar12 + 4 ), (StringName_conflict*)( local_90 + 8 ));
                     puVar12[6] = (undefined4)local_80;
                     if (*(long*)( puVar12 + 8 ) != local_78) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)( puVar12 + 8 ), (CowData*)&local_78);
                     }

                     puVar12[10] = local_70;
                     puVar12[0xc] = local_68;
                     Variant::operator =((Variant*)( puVar12 + 0xe ), (Variant*)local_60);
                     uVar6 = *(undefined8*)( *param_3 + 8 );
                     *(long*)( puVar12 + 0x18 ) = *param_3;
                     plVar1 = (long*)*param_3;
                     *(undefined8*)( puVar12 + 0x14 ) = 0;
                     *(undefined8*)( puVar12 + 0x16 ) = uVar6;
                     if (plVar1[1] != 0) {
                        *(undefined4**)( plVar1[1] + 0x50 ) = puVar12;
                     }

                     plVar1[1] = (long)puVar12;
                     if (*plVar1 == 0) {
                        *plVar1 = (long)puVar12;
                     }

                     *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
                     if (Variant::needs_deinit[local_60[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     lVar3 = local_78;
                     if (local_78 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_78 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_78 = 0;
                           Memory::free_static((void*)( lVar3 + -0x10 ), false);
                        }

                     }

                     if (( StringName::configured != '\0' ) && ( local_90._8_8_ != 0 )) {
                        StringName::unref();
                     }

                     uVar6 = local_90._0_8_;
                     if (local_90._0_8_ == 0) goto LAB_00103b98;
                     LOCK();
                     plVar1 = (long*)( local_90._0_8_ + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 != 0) goto LAB_00103b98;
                     auVar8._8_8_ = 0;
                     auVar8._0_8_ = local_90._8_8_;
                     local_90 = auVar8 << 0x40;
                     Memory::free_static((void*)( uVar6 + -0x10 ), false);
                     plVar15 = (long*)*plVar15;
                  }
 while ( plVar15 != (long*)0x0 );
               }

            }
 else if (iVar4 + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

         }

         LAB_00103fa8:if (puVar2[1] == 0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00103ffa. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)this + 0x120 ) )(this, puVar2[1], param_3);
            return;
         }

         goto LAB_001042de;
      }

      if ((int)puVar2[2] + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("material_get_instance_shader_parameters", "servers/rendering/dummy/storage/material_storage.cpp", 0x109, "Parameter \"material\" is null.", 0, 0);
      return;
   }

   LAB_001042de:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RendererDummy::MaterialStorage::global_shader_parameters_load_settings(bool) */void RendererDummy::MaterialStorage::global_shader_parameters_load_settings(bool param_1) {
   long *plVar1;
   String *pSVar2;
   uint uVar3;
   long lVar4;
   long lVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   char cVar14;
   uint uVar15;
   List *pLVar16;
   int iVar17;
   long lVar18;
   ulong uVar19;
   uint uVar20;
   undefined7 in_register_00000039;
   long *plVar21;
   ulong uVar22;
   uint uVar23;
   long in_FS_OFFSET;
   long *local_78;
   long local_70;
   Variant local_68[8];
   long local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   plVar21 = (long*)CONCAT71(in_register_00000039, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = (long*)0x0;
   pLVar16 = (List*)ProjectSettings::get_singleton();
   Object::get_property_list(pLVar16, SUB81((List<PropertyInfo,DefaultAllocator>*)&local_78, 0));
   if (local_78 != (long*)0x0) {
      lVar4 = *local_78;
      joined_r0x00104349:if (lVar4 != 0) {
         pSVar2 = (String*)( lVar4 + 8 );
         cVar14 = String::begins_with((char*)pSVar2);
         if (cVar14 != '\0') {
            String::get_slice((char*)&local_60, (int)pSVar2);
            StringName::StringName((StringName_conflict*)&local_70, (String*)&local_60, false);
            lVar5 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar1 = (long*)( local_60 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar5 + -0x10 ), false);
               }

            }

            ProjectSettings::get_singleton();
            StringName::StringName((StringName_conflict*)&local_60, pSVar2, false);
            ProjectSettings::get_setting_with_override((StringName_conflict*)&local_58);
            Variant::operator_cast_to_Dictionary(local_68);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
               Variant::_clear_internal();
            }

            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            Variant::Variant((Variant*)&local_58, "type");
            cVar14 = Dictionary::has(local_68);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
               Variant::_clear_internal();
            }

            if (cVar14 != '\0') {
               Variant::Variant((Variant*)&local_58, "value");
               cVar14 = Dictionary::has(local_68);
               if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
               }

               if (cVar14 == '\0') {
                  _err_print_error("global_shader_parameters_load_settings", "servers/rendering/dummy/storage/material_storage.cpp", 0x5c, "Condition \"!d.has(\"value\")\" is true. Continuing.", 0, 0);
                  goto LAB_0010464b;
               }

               Variant::Variant((Variant*)&local_58, "type");
               Dictionary::operator [](local_68);
               Variant::operator_cast_to_String((Variant*)&local_60);
               if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
               }

               uVar19 = 0;
               do {
                  cVar14 = operator == ( ( &global_shader_parameters_load_settings(bool), ::global_var_type_names)[uVar19],(String*)&local_60 ) );
                  if (cVar14 != '\0') {
                     if (( plVar21[2] == 0 ) || ( *(int*)( (long)plVar21 + 0x34 ) == 0 )) goto LAB_001046ca;
                     uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar21 + 6 ) * 4 );
                     lVar5 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( plVar21 + 6 ) * 8 );
                     if (local_70 == 0) {
                        uVar15 = StringName::get_empty_hash();
                     }
 else {
                        uVar15 = *(uint*)( local_70 + 0x20 );
                     }

                     uVar22 = CONCAT44(0, uVar3);
                     if (uVar15 == 0) {
                        uVar15 = 1;
                     }

                     auVar6._8_8_ = 0;
                     auVar6._0_8_ = (ulong)uVar15 * lVar5;
                     auVar10._8_8_ = 0;
                     auVar10._0_8_ = uVar22;
                     lVar18 = SUB168(auVar6 * auVar10, 8);
                     uVar20 = *(uint*)( plVar21[3] + lVar18 * 4 );
                     iVar17 = SUB164(auVar6 * auVar10, 8);
                     if (uVar20 == 0) goto LAB_001046ca;
                     uVar23 = 0;
                     goto LAB_00104609;
                  }

                  uVar19 = uVar19 + 1;
               }
 while ( uVar19 != 0x1d );
               _err_print_error("global_shader_parameters_load_settings", "servers/rendering/dummy/storage/material_storage.cpp", 0x89, "Condition \"gvtype == RenderingServer::GLOBAL_VAR_TYPE_MAX\" is true. Continuing.", 0, 0);
               if (local_60 == 0) goto LAB_0010464b;
               goto LAB_0010462a;
            }

            _err_print_error("global_shader_parameters_load_settings", "servers/rendering/dummy/storage/material_storage.cpp", 0x5b, "Condition \"!d.has(\"type\")\" is true. Continuing.", 0, 0);
            goto LAB_0010464b;
         }

         goto LAB_00104360;
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)&local_78);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   while (true) {
      uVar23 = uVar23 + 1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = ( ulong )(iVar17 + 1) * lVar5;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar22;
      lVar18 = SUB168(auVar7 * auVar11, 8);
      uVar20 = *(uint*)( plVar21[3] + lVar18 * 4 );
      iVar17 = SUB164(auVar7 * auVar11, 8);
      if (( uVar20 == 0 ) || ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar20 * lVar5,auVar12._8_8_ = 0,auVar12._0_8_ = uVar22,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar3 + iVar17 ) - SUB164(auVar8 * auVar12, 8)) * lVar5,auVar13._8_8_ = 0,auVar13._0_8_ = uVar22,SUB164(auVar9 * auVar13, 8) < uVar23) break;
      LAB_00104609:if (( uVar20 == uVar15 ) && ( *(long*)( *(long*)( plVar21[2] + lVar18 * 8 ) + 0x10 ) == local_70 )) goto LAB_00104620;
   }
;
   LAB_001046ca:local_50 = (undefined1[16])0x0;
   local_58 = 0;
   ( **(code**)( *plVar21 + 0x10 ) )(plVar21, (StringName_conflict*)&local_70, uVar19 & 0xffffffff, (StringName_conflict*)&local_58);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   LAB_00104620:if (local_60 != 0) {
      LAB_0010462a:lVar5 = local_60;
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   LAB_0010464b:Dictionary::~Dictionary((Dictionary*)local_68);
   if (( StringName::configured == '\0' ) || ( local_70 == 0 )) {
      LAB_00104360:lVar4 = *(long*)( lVar4 + 0x30 );
   }
 else {
      StringName::unref();
      lVar4 = *(long*)( lVar4 + 0x30 );
   }

   goto joined_r0x00104349;
}
/* RendererDummy::MaterialStorage::global_shader_parameter_add(StringName const&,
   RenderingServer::GlobalShaderParameterType, Variant const&) */void RendererDummy::MaterialStorage::global_shader_parameter_add(long param_1, StringName_conflict *param_2, undefined4 param_3) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   uint uVar11;
   undefined4 *puVar12;
   int iVar13;
   long lVar14;
   uint uVar15;
   ulong uVar16;
   uint uVar17;
   if (( *(long*)( param_1 + 0x10 ) != 0 ) && ( *(int*)( param_1 + 0x34 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x30 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x30 ) * 8 );
      if (*(long*)param_2 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( *(long*)param_2 + 0x20 );
      }

      uVar16 = CONCAT44(0, uVar1);
      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      lVar14 = SUB168(auVar3 * auVar7, 8);
      uVar15 = *(uint*)( *(long*)( param_1 + 0x18 ) + lVar14 * 4 );
      iVar13 = SUB164(auVar3 * auVar7, 8);
      if (uVar15 != 0) {
         uVar17 = 0;
         do {
            if (( uVar11 == uVar15 ) && ( *(long*)( *(long*)( *(long*)( param_1 + 0x10 ) + lVar14 * 8 ) + 0x10 ) == *(long*)param_2 )) {
               _err_print_error("global_shader_parameter_add", "servers/rendering/dummy/storage/material_storage.cpp", 0x33, "Condition \"global_shader_variables.has(p_name)\" is true.", 0, 0);
               return;
            }

            uVar17 = uVar17 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar13 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar16;
            lVar14 = SUB168(auVar4 * auVar8, 8);
            uVar15 = *(uint*)( *(long*)( param_1 + 0x18 ) + lVar14 * 4 );
            iVar13 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar15 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar15 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar13 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,uVar17 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   puVar12 = (undefined4*)HashMap<StringName,RenderingServer::GlobalShaderParameterType,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,RenderingServer::GlobalShaderParameterType>>>::operator []((HashMap<StringName,RenderingServer::GlobalShaderParameterType,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,RenderingServer::GlobalShaderParameterType>>>*)( param_1 + 8 ), param_2);
   *puVar12 = param_3;
   return;
}
/* RendererDummy::MaterialStorage::shader_allocate() */void RendererDummy::MaterialStorage::shader_allocate(MaterialStorage *this) {
   RID_Alloc<RendererDummy::MaterialStorage::DummyShader,false>::allocate_rid((RID_Alloc<RendererDummy::MaterialStorage::DummyShader,false>*)( this + 0x38 ));
   return;
}
/* RendererDummy::MaterialStorage::material_allocate() */void RendererDummy::MaterialStorage::material_allocate(MaterialStorage *this) {
   RID_Alloc<RendererDummy::MaterialStorage::DummyMaterial,false>::allocate_rid((RID_Alloc<RendererDummy::MaterialStorage::DummyMaterial,false>*)( this + 0x598 ));
   return;
}
/* RendererDummy::MaterialStorage::shader_set_code(RID, String const&) */void RendererDummy::MaterialStorage::shader_set_code(MaterialStorage *this, ulong param_2, long *param_3) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char cVar4;
   int iVar5;
   String *pSVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   long local_1f8;
   long local_1f0;
   undefined *local_1e8;
   undefined8 local_1e0;
   char *local_1d8;
   undefined1 local_1d0[16];
   undefined1 local_1c0[16];
   undefined8 local_1b0;
   undefined1 local_1a0[16];
   undefined1 local_190[16];
   undefined8 local_180;
   undefined1 local_170[16];
   undefined1 local_160[16];
   undefined8 local_150;
   undefined1 local_140[16];
   undefined1 local_130[16];
   undefined8 local_120;
   undefined1 local_110[16];
   undefined1 local_100[16];
   undefined8 local_f0;
   long local_e8;
   GeneratedCode local_d8[8];
   undefined8 local_d0;
   undefined8 local_c0;
   undefined8 local_b0;
   undefined4 local_a8;
   undefined1 local_a0[16];
   undefined1 local_90[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined8 local_58;
   undefined4 local_50;
   undefined2 local_4c;
   undefined1 local_4a;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x54 ) )) {
      lVar3 = *(long*)( *(long*)( this + 0x40 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x50 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x50 ) ) * 0x38;
      iVar5 = *(int*)( lVar3 + 0x30 );
      if (iVar5 == (int)( param_2 >> 0x20 )) {
         if (( *param_3 != 0 ) && ( 1 < *(uint*)( *param_3 + -8 ) )) {
            ShaderLanguage::get_shader_type((String*)&local_1f8);
            cVar4 = String::operator ==((String*)&local_1f8, "canvas_item");
            if (cVar4 == '\0') {
               uVar7 = 2;
               cVar4 = String::operator ==((String*)&local_1f8, "particles");
               if (cVar4 != '\0') goto LAB_00104a72;
               uVar7 = 0;
               cVar4 = String::operator ==((String*)&local_1f8, "spatial");
               if (cVar4 != '\0') goto LAB_00104a72;
               uVar7 = 3;
               cVar4 = String::operator ==((String*)&local_1f8, "sky");
               if (cVar4 != '\0') goto LAB_00104a72;
               uVar7 = 4;
               cVar4 = String::operator ==((String*)&local_1f8, "fog");
               if (cVar4 != '\0') goto LAB_00104a72;
               local_1d0._0_8_ = 0x21;
               local_1d8 = " not supported in Dummy renderer.";
               local_1e8 = (undefined*)0x0;
               String::parse_latin1((StrRange*)&local_1e8);
               operator+((char *)&
               local_1f0,(String*)"Shader type ";
               pSVar6 = (String*)&local_1d8;
               String::operator +((String*)&local_1d8, (String*)&local_1f0);
               _err_print_error("shader_set_code", "servers/rendering/dummy/storage/material_storage.cpp", 0xb7, "Method/function failed.", (String*)&local_1d8, 0, 0, pSVar6);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
               lVar3 = local_1f8;
            }
 else {
               uVar7 = 1;
               LAB_00104a72:local_4c = 0;
               local_1b0 = _LC65;
               local_180 = _LC65;
               local_150 = _LC65;
               local_120 = _LC65;
               local_f0 = _LC65;
               local_58 = _LC65;
               local_1d0 = (undefined1[16])0x0;
               lVar2 = singleton + 0x90;
               local_1c0 = (undefined1[16])0x0;
               local_1e8 = &_LC12;
               local_1a0 = (undefined1[16])0x0;
               local_190 = (undefined1[16])0x0;
               local_170 = (undefined1[16])0x0;
               local_160 = (undefined1[16])0x0;
               local_140 = (undefined1[16])0x0;
               local_130 = (undefined1[16])0x0;
               local_110 = (undefined1[16])0x0;
               local_100 = (undefined1[16])0x0;
               local_a0 = (undefined1[16])0x0;
               local_90 = (undefined1[16])0x0;
               local_78 = (undefined1[16])0x0;
               local_68 = (undefined1[16])0x0;
               local_d0 = 0;
               local_c0 = 0;
               local_b0 = 0;
               local_a8 = 0;
               local_50 = 0;
               local_4a = 0;
               local_1f0 = 0;
               local_1e0 = 0;
               local_e8 = lVar3;
               String::parse_latin1((StrRange*)&local_1f0);
               iVar5 = ShaderCompiler::compile(lVar2, uVar7, param_3, (IdentifierActions*)&local_1d8, (StrRange*)&local_1f0, local_d8);
               lVar3 = local_1f0;
               if (local_1f0 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_1f0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_1f0 = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               if (iVar5 == 0) {
                  ShaderCompiler::GeneratedCode::~GeneratedCode(local_d8);
                  ShaderCompiler::IdentifierActions::~IdentifierActions((IdentifierActions*)&local_1d8);
                  lVar3 = local_1f8;
               }
 else {
                  _err_print_error("shader_set_code", "servers/rendering/dummy/storage/material_storage.cpp", 0xbe, "Condition \"err != OK\" is true.", "Shader compilation failed.", 0, 0);
                  ShaderCompiler::GeneratedCode::~GeneratedCode(local_d8);
                  ShaderCompiler::IdentifierActions::~IdentifierActions((IdentifierActions*)&local_1d8);
                  lVar3 = local_1f8;
               }

            }

            local_1f8 = lVar3;
            if (lVar3 != 0) {
               LOCK();
               plVar1 = (long*)( lVar3 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_1f8 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00104e3b;
      }

      if (iVar5 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("shader_set_code", "servers/rendering/dummy/storage/material_storage.cpp", 0xa3, "Parameter \"shader\" is null.", 0, 0);
      return;
   }

   LAB_00104e3b:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CowData<String>::_ref(CowData<String> const&) [clone .part.0] */void CowData<String>::_ref(CowData<String> *this, CowData *param_1) {
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
/* RendererDummy::MaterialStorage::shader_free(RID) */void RendererDummy::MaterialStorage::shader_free(MaterialStorage *this, ulong param_2) {
   long *plVar1;
   long lVar2;
   int iVar3;
   long lVar4;
   ulong uVar5;
   uint uVar6;
   int *piVar7;
   long lVar8;
   void *pvVar9;
   long lVar10;
   if (( param_2 == 0 ) || ( *(uint*)( this + 0x54 ) <= (uint)param_2 )) {
      LAB_001050d4:_err_print_error("shader_free", "servers/rendering/dummy/storage/material_storage.cpp", 0x9c, "Parameter \"shader\" is null.", 0, 0);
      return;
   }

   uVar5 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x50 );
   lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x50 ) ) * 0x38;
   lVar8 = lVar2 + *(long*)( *(long*)( this + 0x40 ) + uVar5 * 8 );
   iVar3 = *(int*)( lVar8 + 0x30 );
   if (iVar3 != (int)( param_2 >> 0x20 )) {
      if (iVar3 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_001050d4;
   }

   if (iVar3 < 0) {
      _err_print_error(&_LC11, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
      return;
   }

   pvVar9 = *(void**)( lVar8 + 8 );
   if (pvVar9 == (void*)0x0) goto LAB_0010505f;
   if (*(int*)( lVar8 + 0x2c ) == 0) {
      LAB_001050b0:Memory::free_static(pvVar9, false);
      Memory::free_static(*(void**)( lVar8 + 0x10 ), false);
   }
 else {
      uVar6 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar8 + 0x28 ) * 4 );
      if (uVar6 == 0) {
         *(undefined4*)( lVar8 + 0x2c ) = 0;
         *(undefined1(*) [16])( lVar8 + 0x18 ) = (undefined1[16])0x0;
         goto LAB_001050b0;
      }

      lVar10 = 0;
      do {
         piVar7 = (int*)( *(long*)( lVar8 + 0x10 ) + lVar10 );
         if (*piVar7 != 0) {
            pvVar9 = *(void**)( (long)pvVar9 + lVar10 * 2 );
            *piVar7 = 0;
            if (*(long*)( (long)pvVar9 + 0x88 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( (long)pvVar9 + 0x88 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar4 = *(long*)( (long)pvVar9 + 0x88 );
                  *(undefined8*)( (long)pvVar9 + 0x88 ) = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

            if (*(long*)( (long)pvVar9 + 0x80 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( (long)pvVar9 + 0x80 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar4 = *(long*)( (long)pvVar9 + 0x80 );
                  *(undefined8*)( (long)pvVar9 + 0x80 ) = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

            CowData<String>::_unref((CowData<String>*)( (long)pvVar9 + 0x70 ));
            if (*(long*)( (long)pvVar9 + 0x40 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( (long)pvVar9 + 0x40 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar4 = *(long*)( (long)pvVar9 + 0x40 );
                  *(undefined8*)( (long)pvVar9 + 0x40 ) = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + 0x10 ) != 0 )) {
               StringName::unref();
            }

            Memory::free_static(pvVar9, false);
            pvVar9 = *(void**)( lVar8 + 8 );
            *(undefined8*)( (long)pvVar9 + lVar10 * 2 ) = 0;
         }

         lVar10 = lVar10 + 4;
      }
 while ( lVar10 != (ulong)uVar6 << 2 );
      *(undefined4*)( lVar8 + 0x2c ) = 0;
      *(undefined1(*) [16])( lVar8 + 0x18 ) = (undefined1[16])0x0;
      if (pvVar9 != (void*)0x0) goto LAB_001050b0;
   }

   lVar8 = lVar2 + *(long*)( *(long*)( this + 0x40 ) + uVar5 * 8 );
   LAB_0010505f:*(undefined4*)( lVar8 + 0x30 ) = 0xffffffff;
   uVar6 = *(int*)( this + 0x58 ) - 1;
   *(uint*)( this + 0x58 ) = uVar6;
   *(uint*)( *(long*)( *(long*)( this + 0x48 ) + ( (ulong)uVar6 / ( ulong ) * (uint*)( this + 0x50 ) ) * 8 ) + ( (ulong)uVar6 % ( ulong ) * (uint*)( this + 0x50 ) ) * 4 ) = (uint)param_2;
   return;
}
/* RendererDummy::MaterialStorage::~MaterialStorage() */void RendererDummy::MaterialStorage::~MaterialStorage(MaterialStorage *this) {
   long *plVar1;
   long lVar2;
   uint uVar3;
   uint uVar4;
   char *pcVar5;
   long lVar6;
   void *pvVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__MaterialStorage_0010cac8;
   singleton = 0;
   if (( *(long*)( this + 0x10 ) != 0 ) && ( *(int*)( this + 0x34 ) != 0 )) {
      lVar6 = 0;
      uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x30 ) * 4 );
      if (uVar3 != 0) {
         do {
            if (*(int*)( *(long*)( this + 0x18 ) + lVar6 ) != 0) {
               *(int*)( *(long*)( this + 0x18 ) + lVar6 ) = 0;
               pvVar7 = *(void**)( *(long*)( this + 0x10 ) + lVar6 * 2 );
               if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar7 + 0x10 ) != 0 )) {
                  StringName::unref();
               }

               Memory::free_static(pvVar7, false);
               *(undefined8*)( *(long*)( this + 0x10 ) + lVar6 * 2 ) = 0;
            }

            lVar6 = lVar6 + 4;
         }
 while ( (ulong)uVar3 << 2 != lVar6 );
      }

      *(undefined4*)( this + 0x34 ) = 0;
      *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
   }

   uVar3 = *(uint*)( this + 0x5b8 );
   *(undefined***)( this + 0x598 ) = &PTR__RID_Alloc_0010caa8;
   if (uVar3 != 0) {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
      print_error((String*)&local_48);
      pcVar5 = local_48;
      lVar6 = local_50;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
            lVar6 = local_50;
         }

      }

      local_50 = lVar6;
      if (lVar6 != 0) {
         LOCK();
         plVar1 = (long*)( lVar6 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

   }

   uVar3 = *(uint*)( this + 0x5b4 );
   uVar4 = *(uint*)( this + 0x5b0 );
   lVar6 = 0;
   if (uVar4 <= uVar3) {
      do {
         Memory::free_static(*(void**)( *(long*)( this + 0x5a0 ) + lVar6 * 8 ), false);
         lVar2 = lVar6 * 8;
         lVar6 = lVar6 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x5a8 ) + lVar2 ), false);
      }
 while ( (uint)lVar6 < uVar3 / uVar4 );
   }

   if (*(void**)( this + 0x5a0 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0x5a0 ), false);
      Memory::free_static(*(void**)( this + 0x5a8 ), false);
   }

   for (int i = 0; i < 3; i++) {
      if (*(long*)( this + ( -8*i + 1416 ) ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + ( -8*i + 1416 ) ) + -16 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar6 = *(long*)( this + ( -8*i + 1416 ) );
            *(undefined8*)( this + ( -8*i + 1416 ) ) = 0;
            Memory::free_static((void*)( lVar6 + -16 ), false);
         }

      }

   }

   pvVar7 = *(void**)( this + 0x540 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x564 ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x560 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0x564 ) = 0;
            *(undefined1(*) [16])( this + 0x550 ) = (undefined1[16])0x0;
         }
 else {
            lVar6 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x548 ) + lVar6 ) != 0) {
                  pvVar7 = *(void**)( (long)pvVar7 + lVar6 * 2 );
                  *(int*)( *(long*)( this + 0x548 ) + lVar6 ) = 0;
                  if (*(long*)( (long)pvVar7 + 0x18 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar7 + 0x18 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar2 = *(long*)( (long)pvVar7 + 0x18 );
                        *(undefined8*)( (long)pvVar7 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar2 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar7 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar7, false);
                  pvVar7 = *(void**)( this + 0x540 );
                  *(undefined8*)( (long)pvVar7 + lVar6 * 2 ) = 0;
               }

               lVar6 = lVar6 + 4;
            }
 while ( lVar6 != (ulong)uVar3 << 2 );
            *(undefined4*)( this + 0x564 ) = 0;
            *(undefined1(*) [16])( this + 0x550 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_001054ab;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x548 ), false);
   }

   LAB_001054ab:pvVar7 = *(void**)( this + 0x510 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x534 ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x530 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0x534 ) = 0;
            *(undefined1(*) [16])( this + 0x520 ) = (undefined1[16])0x0;
         }
 else {
            lVar6 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x518 ) + lVar6 ) != 0) {
                  pvVar7 = *(void**)( (long)pvVar7 + lVar6 * 2 );
                  *(int*)( *(long*)( this + 0x518 ) + lVar6 ) = 0;
                  if (*(long*)( (long)pvVar7 + 0x18 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar7 + 0x18 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar2 = *(long*)( (long)pvVar7 + 0x18 );
                        *(undefined8*)( (long)pvVar7 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar2 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar7 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar7, false);
                  pvVar7 = *(void**)( this + 0x510 );
                  *(undefined8*)( (long)pvVar7 + lVar6 * 2 ) = 0;
               }

               lVar6 = lVar6 + 4;
            }
 while ( lVar6 != (ulong)uVar3 << 2 );
            *(undefined4*)( this + 0x534 ) = 0;
            *(undefined1(*) [16])( this + 0x520 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_0010559b;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x518 ), false);
   }

   LAB_0010559b:pvVar7 = *(void**)( this + 0x4e0 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x504 ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x500 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0x504 ) = 0;
            *(undefined1(*) [16])( this + 0x4f0 ) = (undefined1[16])0x0;
         }
 else {
            lVar6 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x4e8 ) + lVar6 ) != 0) {
                  pvVar7 = *(void**)( (long)pvVar7 + lVar6 * 2 );
                  *(int*)( *(long*)( this + 0x4e8 ) + lVar6 ) = 0;
                  if (*(long*)( (long)pvVar7 + 0x18 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar7 + 0x18 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar2 = *(long*)( (long)pvVar7 + 0x18 );
                        *(undefined8*)( (long)pvVar7 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar2 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar7 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar7, false);
                  pvVar7 = *(void**)( this + 0x4e0 );
                  *(undefined8*)( (long)pvVar7 + lVar6 * 2 ) = 0;
               }

               lVar6 = lVar6 + 4;
            }
 while ( (ulong)uVar3 << 2 != lVar6 );
            *(undefined4*)( this + 0x504 ) = 0;
            *(undefined1(*) [16])( this + 0x4f0 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_00105689;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x4e8 ), false);
   }

   LAB_00105689:pvVar7 = *(void**)( this + 0x4b0 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x4d4 ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x4d0 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0x4d4 ) = 0;
            *(undefined1(*) [16])( this + 0x4c0 ) = (undefined1[16])0x0;
         }
 else {
            lVar6 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x4b8 ) + lVar6 ) != 0) {
                  pvVar7 = *(void**)( (long)pvVar7 + lVar6 * 2 );
                  *(int*)( *(long*)( this + 0x4b8 ) + lVar6 ) = 0;
                  if (*(long*)( (long)pvVar7 + 0x18 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar7 + 0x18 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar2 = *(long*)( (long)pvVar7 + 0x18 );
                        *(undefined8*)( (long)pvVar7 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar2 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar7 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar7, false);
                  pvVar7 = *(void**)( this + 0x4b0 );
                  *(undefined8*)( (long)pvVar7 + lVar6 * 2 ) = 0;
               }

               lVar6 = lVar6 + 4;
            }
 while ( lVar6 != (ulong)uVar3 << 2 );
            *(undefined4*)( this + 0x4d4 ) = 0;
            *(undefined1(*) [16])( this + 0x4c0 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_00105779;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x4b8 ), false);
   }

   LAB_00105779:pvVar7 = *(void**)( this + 0x480 );
   if (pvVar7 != (void*)0x0) {
      if (( *(int*)( this + 0x4a4 ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x4a0 ) * 4 ) == 0 || ( memset(*(void**)( this + 0x498 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x4a0 ) * 4 ) * 4),*(int*)( this + 0x4a4 ) != 0 ) ) )) {
         lVar6 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar7 + lVar6 * 8 ) != 0 )) {
               StringName::unref();
               pvVar7 = *(void**)( this + 0x480 );
            }

            lVar6 = lVar6 + 1;
         }
 while ( (uint)lVar6 < *(uint*)( this + 0x4a4 ) );
         *(undefined4*)( this + 0x4a4 ) = 0;
         if (pvVar7 == (void*)0x0) goto LAB_00105816;
      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x490 ), false);
      Memory::free_static(*(void**)( this + 0x488 ), false);
      Memory::free_static(*(void**)( this + 0x498 ), false);
   }

   LAB_00105816:pvVar7 = *(void**)( this + 0x458 );
   if (pvVar7 != (void*)0x0) {
      if (( *(int*)( this + 0x47c ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x478 ) * 4 ) == 0 || ( memset(*(void**)( this + 0x470 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x478 ) * 4 ) * 4),*(int*)( this + 0x47c ) != 0 ) ) )) {
         lVar6 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar7 + lVar6 * 8 ) != 0 )) {
               StringName::unref();
               pvVar7 = *(void**)( this + 0x458 );
            }

            lVar6 = lVar6 + 1;
         }
 while ( (uint)lVar6 < *(uint*)( this + 0x47c ) );
         *(undefined4*)( this + 0x47c ) = 0;
         if (pvVar7 == (void*)0x0) goto LAB_001058ae;
      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x468 ), false);
      Memory::free_static(*(void**)( this + 0x460 ), false);
      Memory::free_static(*(void**)( this + 0x470 ), false);
   }

   LAB_001058ae:pvVar7 = *(void**)( this + 0x430 );
   if (pvVar7 != (void*)0x0) {
      if (( *(int*)( this + 0x454 ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x450 ) * 4 ) == 0 || ( memset(*(void**)( this + 0x448 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x450 ) * 4 ) * 4),*(int*)( this + 0x454 ) != 0 ) ) )) {
         lVar6 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar7 + lVar6 * 8 ) != 0 )) {
               StringName::unref();
               pvVar7 = *(void**)( this + 0x430 );
            }

            lVar6 = lVar6 + 1;
         }
 while ( (uint)lVar6 < *(uint*)( this + 0x454 ) );
         *(undefined4*)( this + 0x454 ) = 0;
         if (pvVar7 == (void*)0x0) goto LAB_0010594e;
      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x440 ), false);
      Memory::free_static(*(void**)( this + 0x438 ), false);
      Memory::free_static(*(void**)( this + 0x448 ), false);
   }

   LAB_0010594e:pvVar7 = *(void**)( this + 0x408 );
   if (pvVar7 != (void*)0x0) {
      if (( *(int*)( this + 0x42c ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x428 ) * 4 ) == 0 || ( memset(*(void**)( this + 0x420 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x428 ) * 4 ) * 4),*(int*)( this + 0x42c ) != 0 ) ) )) {
         lVar6 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar7 + lVar6 * 8 ) != 0 )) {
               StringName::unref();
               pvVar7 = *(void**)( this + 0x408 );
            }

            lVar6 = lVar6 + 1;
         }
 while ( (uint)lVar6 < *(uint*)( this + 0x42c ) );
         *(undefined4*)( this + 0x42c ) = 0;
         if (pvVar7 == (void*)0x0) goto LAB_001059ee;
      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x418 ), false);
      Memory::free_static(*(void**)( this + 0x410 ), false);
      Memory::free_static(*(void**)( this + 0x420 ), false);
   }

   LAB_001059ee:pvVar7 = *(void**)( this + 0x3e0 );
   if (pvVar7 != (void*)0x0) {
      if (( *(int*)( this + 0x404 ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x400 ) * 4 ) == 0 || ( memset(*(void**)( this + 0x3f8 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x400 ) * 4 ) * 4),*(int*)( this + 0x404 ) != 0 ) ) )) {
         lVar6 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar7 + lVar6 * 8 ) != 0 )) {
               StringName::unref();
               pvVar7 = *(void**)( this + 0x3e0 );
            }

            lVar6 = lVar6 + 1;
         }
 while ( (uint)lVar6 < *(uint*)( this + 0x404 ) );
         *(undefined4*)( this + 0x404 ) = 0;
         if (pvVar7 == (void*)0x0) goto LAB_00105a8e;
      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x3f0 ), false);
      Memory::free_static(*(void**)( this + 1000 ), false);
      Memory::free_static(*(void**)( this + 0x3f8 ), false);
   }

   LAB_00105a8e:pvVar7 = *(void**)( this + 0x3b8 );
   if (pvVar7 != (void*)0x0) {
      if (( *(int*)( this + 0x3dc ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x3d8 ) * 4 ) == 0 || ( memset(*(void**)( this + 0x3d0 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x3d8 ) * 4 ) * 4),*(int*)( this + 0x3dc ) != 0 ) ) )) {
         lVar6 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar7 + lVar6 * 8 ) != 0 )) {
               StringName::unref();
               pvVar7 = *(void**)( this + 0x3b8 );
            }

            lVar6 = lVar6 + 1;
         }
 while ( (uint)lVar6 < *(uint*)( this + 0x3dc ) );
         *(undefined4*)( this + 0x3dc ) = 0;
         if (pvVar7 == (void*)0x0) goto LAB_00105b2e;
      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x3c8 ), false);
      Memory::free_static(*(void**)( this + 0x3c0 ), false);
      Memory::free_static(*(void**)( this + 0x3d0 ), false);
   }

   LAB_00105b2e:if (( StringName::configured != '\0' ) && ( ( ( *(long*)( this + 0x3b0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( *(long*)( this + 0x3a8 ) != 0 ) ) )) {
      StringName::unref();
   }

   ShaderLanguage::~ShaderLanguage((ShaderLanguage*)( this + 0x90 ));
   RID_Alloc<RendererDummy::MaterialStorage::DummyShader,false>::~RID_Alloc((RID_Alloc<RendererDummy::MaterialStorage::DummyShader,false>*)( this + 0x38 ));
   pvVar7 = *(void**)( this + 0x10 );
   if (pvVar7 == (void*)0x0) {
      LAB_00105c2e:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      if (*(int*)( this + 0x34 ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x30 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0x34 ) = 0;
            *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
         }
 else {
            lVar6 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x18 ) + lVar6 ) != 0) {
                  bVar8 = StringName::configured != '\0';
                  *(int*)( *(long*)( this + 0x18 ) + lVar6 ) = 0;
                  pvVar7 = *(void**)( (long)pvVar7 + lVar6 * 2 );
                  if (( bVar8 ) && ( *(long*)( (long)pvVar7 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar7, false);
                  pvVar7 = *(void**)( this + 0x10 );
                  *(undefined8*)( (long)pvVar7 + lVar6 * 2 ) = 0;
               }

               lVar6 = lVar6 + 4;
            }
 while ( (ulong)uVar3 << 2 != lVar6 );
            *(undefined4*)( this + 0x34 ) = 0;
            *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_00105c2e;
         }

      }

      Memory::free_static(pvVar7, false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x18 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererDummy::MaterialStorage::~MaterialStorage() */void RendererDummy::MaterialStorage::~MaterialStorage(MaterialStorage *this) {
   ~MaterialStorage(this)
   ;;
   operator_delete(this, 0x5f0);
   return;
}
/* CowData<StringName>::_copy_on_write() [clone .isra.0] */void CowData<StringName>::_copy_on_write(CowData<StringName> *this) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   long lVar5;
   ulong uVar6;
   StringName_conflict *this_00;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar6 = 0x10;
   if (lVar2 * 8 != 0) {
      uVar6 = lVar2 * 8 - 1;
      uVar6 = uVar6 | uVar6 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = ( uVar6 | uVar6 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar6, false);
   if (puVar4 != (undefined8*)0x0) {
      lVar5 = 0;
      *puVar4 = 1;
      puVar4[1] = lVar2;
      this_00 = (StringName_conflict*)( puVar4 + 2 );
      if (lVar2 != 0) {
         do {
            lVar1 = lVar5 * 8;
            lVar5 = lVar5 + 1;
            StringName::StringName(this_00, (StringName_conflict*)( *(long*)this + lVar1 ));
            this_00 = this_00 + 8;
         }
 while ( lVar2 != lVar5 );
      }

      _unref(this);
      *(StringName_conflict**)this = (StringName_conflict*)( puVar4 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* RendererDummy::MaterialStorage::global_shader_parameter_get_list() const */void RendererDummy::MaterialStorage::global_shader_parameter_get_list(void) {
   CowData<StringName> *this;
   StringName_conflict *pSVar1;
   int iVar2;
   StringName_conflict *pSVar3;
   long *plVar4;
   long in_RSI;
   long lVar5;
   long in_RDI;
   long lVar6;
   long lVar7;
   long lVar8;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   plVar4 = *(long**)( in_RSI + 0x20 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( in_RDI + 8 ) = 0;
   if (plVar4 != (long*)0x0) {
      this(CowData<StringName> * )(in_RDI + 8);
      do {
         StringName::StringName((StringName_conflict*)&local_48, (StringName_conflict*)( plVar4 + 2 ));
         if (*(long*)( in_RDI + 8 ) == 0) {
            lVar5 = 1;
         }
 else {
            lVar5 = *(long*)( *(long*)( in_RDI + 8 ) + -8 ) + 1;
         }

         iVar2 = CowData<StringName>::resize<false>(this, lVar5);
         if (iVar2 == 0) {
            if (*(long*)( in_RDI + 8 ) == 0) {
               lVar6 = -1;
               lVar5 = 0;
            }
 else {
               lVar5 = *(long*)( *(long*)( in_RDI + 8 ) + -8 );
               lVar6 = lVar5 + -1;
               if (-1 < lVar6) {
                  CowData<StringName>::_copy_on_write(this);
                  StringName::operator =((StringName_conflict*)( *(long*)( in_RDI + 8 ) + lVar6 * 8 ), (StringName_conflict*)&local_48);
                  goto LAB_0010618f;
               }

            }

            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar6, lVar5, "p_index", "size()", "", false, false);
         }
 else {
            _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
         }

         LAB_0010618f:if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         plVar4 = (long*)*plVar4;
      }
 while ( plVar4 != (long*)0x0 );
      if (( *(long*)( in_RDI + 8 ) != 0 ) && ( lVar5 = lVar5 != 0 )) {
         CowData<StringName>::_copy_on_write(this);
         pSVar1 = *(StringName_conflict**)( in_RDI + 8 );
         if (lVar5 != 1) {
            lVar6 = 0;
            lVar7 = lVar5;
            do {
               lVar7 = lVar7 >> 1;
               lVar6 = lVar6 + 1;
            }
 while ( lVar7 != 1 );
            lVar6 = lVar6 * 2;
            lVar7 = 1;
            lVar8 = lVar5;
            if (lVar5 < 0x11) {
               do {
                  lVar6 = lVar7 + 1;
                  SortArray<StringName,StringName::AlphCompare,true>::linear_insert(0, lVar7, pSVar1);
                  lVar7 = lVar6;
               }
 while ( lVar5 != lVar6 );
            }
 else {
               do {
                  lVar6 = lVar6 + -1;
                  pSVar3 = (StringName_conflict*)SortArray<StringName,StringName::AlphCompare,true>::median_of_3(pSVar1, pSVar1 + ( lVar8 >> 1 ) * 8, pSVar1 + lVar8 * 8 + -8);
                  StringName::StringName((StringName_conflict*)&local_48, pSVar3);
                  lVar7 = SortArray<StringName,StringName::AlphCompare,true>::partitioner(0, lVar8, (StringName_conflict*)&local_48, pSVar1);
                  if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                     StringName::unref();
                  }

                  SortArray<StringName,StringName::AlphCompare,true>::introsort(lVar7, lVar8, pSVar1, lVar6);
                  lVar8 = 1;
                  if (lVar7 < 0x11) goto LAB_00106350;
                  lVar8 = lVar7;
               }
 while ( lVar6 != 0 );
               SortArray<StringName,StringName::AlphCompare,true>::partial_sort(0, lVar7, lVar7, pSVar1);
               lVar8 = 1;
               LAB_00106350:do {
                  lVar6 = lVar8 + 1;
                  SortArray<StringName,StringName::AlphCompare,true>::linear_insert(0, lVar8, pSVar1);
                  lVar8 = lVar6;
               }
 while ( lVar6 != 0x10 );
               lVar6 = 0x10;
               do {
                  StringName::StringName((StringName_conflict*)&local_48, pSVar1 + lVar6 * 8);
                  SortArray<StringName,StringName::AlphCompare,true>::unguarded_linear_insert(lVar6, (StringName_conflict*)&local_48, pSVar1);
                  if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                     StringName::unref();
                  }

                  lVar6 = lVar6 + 1;
               }
 while ( lVar5 != lVar6 );
            }

         }

      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererDummy::MaterialStorage::MaterialStorage() */void RendererDummy::MaterialStorage::MaterialStorage(MaterialStorage *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   undefined1 auVar4[16];
   undefined8 uVar5;
   ulong uVar6;
   undefined8 extraout_RDX;
   undefined8 extraout_RDX_00;
   undefined8 extraout_RDX_01;
   undefined8 extraout_RDX_02;
   undefined8 uVar7;
   long lVar8;
   void *pvVar9;
   long in_FS_OFFSET;
   undefined1 auStack_128[8];
   undefined1 local_120[16];
   undefined1 local_110[16];
   undefined8 local_100;
   undefined1 local_f0[16];
   undefined1 local_e0[16];
   undefined8 local_d0;
   undefined1 local_c0[16];
   undefined1 local_b0[16];
   undefined8 local_a0;
   undefined1 local_90[16];
   undefined1 local_80[16];
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined1 local_58[16];
   long local_48;
   undefined4 local_40;
   undefined2 local_3c;
   long local_30;
   uVar5 = _UNK_0010cee8;
   uVar7 = __LC83;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( this + 0x78 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x30 ) = 2;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined8*)( this + 0x48 ) = 0;
   *(undefined8*)( this + 0x60 ) = 0;
   *(undefined8*)( this + 0x88 ) = 0;
   *(undefined***)this = &PTR__MaterialStorage_0010cac8;
   *(undefined***)( this + 0x38 ) = &PTR__RID_Alloc_0010ca88;
   *(undefined4*)( this + 0x78 ) = 1;
   *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x68 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x50 ) = uVar7;
   *(undefined8*)( this + 0x58 ) = uVar5;
   ShaderCompiler::ShaderCompiler((ShaderCompiler*)( this + 0x90 ));
   local_100 = 0;
   *(undefined1(*) [16])( this + 0x5d8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x5c8 ) = (undefined1[16])0x0;
   uVar5 = _UNK_0010cef8;
   uVar7 = __LC84;
   *(undefined***)( this + 0x598 ) = &PTR__RID_Alloc_0010caa8;
   uVar6 = 1;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 1440 ) ) = 0;
   }

   *(undefined4*)( this + 0x5d8 ) = 1;
   singleton = this;
   *(undefined8*)( this + 0x5b0 ) = uVar7;
   *(undefined8*)( this + 0x5b8 ) = uVar5;
   local_120 = (undefined1[16])0x0;
   local_110 = (undefined1[16])0x0;
   do {
      if (0x16 < *(uint*)( hash_table_size_primes + uVar6 * 4 )) {
         local_100 = uVar6 & 0xffffffff;
         uVar7 = extraout_RDX;
         goto LAB_00106552;
      }

      uVar6 = uVar6 + 1;
   }
 while ( uVar6 != 0x1d );
   _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   uVar7 = extraout_RDX_00;
   LAB_00106552:local_d0 = 0;
   uVar6 = 1;
   local_f0 = (undefined1[16])0x0;
   local_e0 = (undefined1[16])0x0;
   do {
      if (0x16 < *(uint*)( hash_table_size_primes + uVar6 * 4 )) {
         local_d0 = uVar6 & 0xffffffff;
         goto LAB_001065b1;
      }

      uVar6 = uVar6 + 1;
   }
 while ( uVar6 != 0x1d );
   _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   uVar7 = extraout_RDX_01;
   LAB_001065b1:local_a0 = 0;
   uVar6 = 1;
   local_c0 = (undefined1[16])0x0;
   local_b0 = (undefined1[16])0x0;
   do {
      if (0x16 < *(uint*)( hash_table_size_primes + uVar6 * 4 )) {
         local_a0 = uVar6 & 0xffffffff;
         goto LAB_00106611;
      }

      uVar6 = uVar6 + 1;
   }
 while ( uVar6 != 0x1d );
   _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   uVar7 = 0x106481;
   LAB_00106611:local_70 = 0;
   uVar6 = 1;
   local_90 = (undefined1[16])0x0;
   local_80 = (undefined1[16])0x0;
   do {
      if (0x16 < *(uint*)( hash_table_size_primes + uVar6 * 4 )) {
         local_70 = uVar6 & 0xffffffff;
         goto LAB_00106683;
      }

      uVar6 = uVar6 + 1;
   }
 while ( uVar6 != 0x1d );
   _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   uVar7 = extraout_RDX_02;
   LAB_00106683:local_68 = 0;
   local_60 = 0;
   local_48 = 0;
   local_40 = 0;
   local_3c = 0;
   local_58 = (undefined1[16])0x0;
   ShaderCompiler::initialize((ShaderCompiler*)( this + 0x90 ), auStack_128, uVar7);
   lVar8 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar8 + -0x10 ), false);
      }

   }

   uVar7 = local_58._8_8_;
   if (local_58._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_58._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58._8_8_ = 0;
         Memory::free_static((void*)( uVar7 + -0x10 ), false);
      }

   }

   uVar7 = local_58._0_8_;
   if (local_58._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_58._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_58._8_8_;
         local_58 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar7 + -0x10 ), false);
      }

   }

   if ((void*)local_90._0_8_ != (void*)0x0) {
      pvVar9 = (void*)local_90._0_8_;
      if (local_70._4_4_ != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( local_70 & 0xffffffff ) * 4 );
         if (uVar2 == 0) {
            local_70 = local_70 & 0xffffffff;
            local_80 = (undefined1[16])0x0;
         }
 else {
            lVar8 = 0;
            do {
               if (*(int*)( local_90._8_8_ + lVar8 ) != 0) {
                  pvVar9 = *(void**)( (long)pvVar9 + lVar8 * 2 );
                  *(int*)( local_90._8_8_ + lVar8 ) = 0;
                  if (*(long*)( (long)pvVar9 + 0x18 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar9 + 0x18 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar9 + 0x18 );
                        *(undefined8*)( (long)pvVar9 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar9, false);
                  *(undefined8*)( local_90._0_8_ + lVar8 * 2 ) = 0;
                  pvVar9 = (void*)local_90._0_8_;
               }

               lVar8 = lVar8 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar8 );
            local_70 = local_70 & 0xffffffff;
            local_80 = (undefined1[16])0x0;
            if (pvVar9 == (void*)0x0) goto LAB_0010680f;
         }

      }

      Memory::free_static(pvVar9, false);
      Memory::free_static((void*)local_90._8_8_, false);
   }

   LAB_0010680f:if ((void*)local_c0._0_8_ != (void*)0x0) {
      pvVar9 = (void*)local_c0._0_8_;
      if (local_a0._4_4_ != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( local_a0 & 0xffffffff ) * 4 );
         if (uVar2 == 0) {
            local_a0 = local_a0 & 0xffffffff;
            local_b0 = (undefined1[16])0x0;
         }
 else {
            lVar8 = 0;
            do {
               if (*(int*)( local_c0._8_8_ + lVar8 ) != 0) {
                  pvVar9 = *(void**)( (long)pvVar9 + lVar8 * 2 );
                  *(int*)( local_c0._8_8_ + lVar8 ) = 0;
                  if (*(long*)( (long)pvVar9 + 0x18 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar9 + 0x18 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar9 + 0x18 );
                        *(undefined8*)( (long)pvVar9 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar9, false);
                  *(undefined8*)( local_c0._0_8_ + lVar8 * 2 ) = 0;
                  pvVar9 = (void*)local_c0._0_8_;
               }

               lVar8 = lVar8 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar8 );
            local_a0 = local_a0 & 0xffffffff;
            local_b0 = (undefined1[16])0x0;
            if (pvVar9 == (void*)0x0) goto LAB_001068f6;
         }

      }

      Memory::free_static(pvVar9, false);
      Memory::free_static((void*)local_c0._8_8_, false);
   }

   LAB_001068f6:if ((void*)local_f0._0_8_ != (void*)0x0) {
      pvVar9 = (void*)local_f0._0_8_;
      if (local_d0._4_4_ != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( local_d0 & 0xffffffff ) * 4 );
         if (uVar2 == 0) {
            local_d0 = local_d0 & 0xffffffff;
            local_e0 = (undefined1[16])0x0;
         }
 else {
            lVar8 = 0;
            do {
               if (*(int*)( local_f0._8_8_ + lVar8 ) != 0) {
                  pvVar9 = *(void**)( (long)pvVar9 + lVar8 * 2 );
                  *(int*)( local_f0._8_8_ + lVar8 ) = 0;
                  if (*(long*)( (long)pvVar9 + 0x18 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar9 + 0x18 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar9 + 0x18 );
                        *(undefined8*)( (long)pvVar9 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar9, false);
                  *(undefined8*)( local_f0._0_8_ + lVar8 * 2 ) = 0;
                  pvVar9 = (void*)local_f0._0_8_;
               }

               lVar8 = lVar8 + 4;
            }
 while ( lVar8 != (ulong)uVar2 << 2 );
            local_d0 = local_d0 & 0xffffffff;
            local_e0 = (undefined1[16])0x0;
            if (pvVar9 == (void*)0x0) goto LAB_001069d1;
         }

      }

      Memory::free_static(pvVar9, false);
      Memory::free_static((void*)local_f0._8_8_, false);
   }

   LAB_001069d1:if ((void*)local_120._0_8_ != (void*)0x0) {
      pvVar9 = (void*)local_120._0_8_;
      if (local_100._4_4_ != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( local_100 & 0xffffffff ) * 4 );
         if (uVar2 == 0) {
            local_100 = local_100 & 0xffffffff;
            local_110 = (undefined1[16])0x0;
         }
 else {
            lVar8 = 0;
            do {
               if (*(int*)( local_120._8_8_ + lVar8 ) != 0) {
                  pvVar9 = *(void**)( (long)pvVar9 + lVar8 * 2 );
                  *(int*)( local_120._8_8_ + lVar8 ) = 0;
                  if (*(long*)( (long)pvVar9 + 0x18 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar9 + 0x18 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar9 + 0x18 );
                        *(undefined8*)( (long)pvVar9 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar9, false);
                  *(undefined8*)( local_120._0_8_ + lVar8 * 2 ) = 0;
                  pvVar9 = (void*)local_120._0_8_;
               }

               lVar8 = lVar8 + 4;
            }
 while ( lVar8 != (ulong)uVar2 << 2 );
            local_100 = local_100 & 0xffffffff;
            local_110 = (undefined1[16])0x0;
            if (pvVar9 == (void*)0x0) goto LAB_00106a9f;
         }

      }

      Memory::free_static(pvVar9, false);
      Memory::free_static((void*)local_120._8_8_, false);
   }

   LAB_00106a9f:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererDummy::MaterialStorage::get_shader_parameter_list(RID, List<PropertyInfo,
   DefaultAllocator>*) const */void RendererDummy::MaterialStorage::get_shader_parameter_list(MaterialStorage *this, ulong param_2, long *param_3) {
   HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>> *this_00;
   StringName_conflict *pSVar1;
   char *__s;
   code *pcVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined8 uVar6;
   char cVar7;
   long lVar8;
   undefined4 *puVar9;
   undefined1(*pauVar10)[16];
   long lVar11;
   ulong uVar12;
   StringName_conflict *pSVar13;
   StringName_conflict *pSVar14;
   uint uVar15;
   StringName_conflict *pSVar16;
   long *plVar17;
   Pair_conflict *pPVar18;
   long lVar19;
   StringName_conflict *pSVar20;
   ulong uVar21;
   long in_FS_OFFSET;
   bool bVar22;
   Uniform *local_100;
   Pair_conflict *local_f8;
   long local_f0;
   StringName_conflict *local_e8;
   uint local_bc;
   ulong local_a0;
   ulong local_98;
   long local_90;
   char *local_88;
   size_t local_80;
   long local_78;
   undefined1 local_70[16];
   undefined8 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x54 ) )) {
      this_00 = (HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>*)( *(long*)( *(long*)( this + 0x40 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x50 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x50 ) ) * 0x38 );
      if (*(int*)( this_00 + 0x30 ) == (int)( param_2 >> 0x20 )) {
         uVar21 = 0;
         uVar12 = 0;
         local_f8 = (Pair_conflict*)0x0;
         plVar17 = *(long**)( this_00 + 0x18 );
         if (plVar17 != (long*)0x0) {
            do {
               if ((int)plVar17[9] == 0) {
                  StringName::StringName((StringName_conflict*)&local_88, (StringName_conflict*)( plVar17 + 2 ));
                  StringName::StringName((StringName_conflict*)&local_78, (StringName_conflict*)&local_88);
                  local_70._0_4_ = *(undefined4*)( (long)plVar17 + 0x1c );
                  if ((int)uVar21 == (int)uVar12) {
                     uVar15 = (int)uVar21 * 2;
                     if (uVar15 == 0) {
                        uVar15 = 1;
                     }

                     uVar21 = (ulong)uVar15;
                     local_f8 = (Pair_conflict*)Memory::realloc_static(local_f8, uVar21 << 4, false);
                     if (local_f8 == (Pair_conflict*)0x0) {
                        _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar2 = (code*)invalidInstructionException();
                        ( *pcVar2 )();
                     }

                  }

                  StringName::StringName((StringName_conflict*)( local_f8 + uVar12 * 0x10 ), (StringName_conflict*)&local_78);
                  bVar22 = StringName::configured != '\0';
                  *(undefined4*)( (StringName_conflict*)( local_f8 + uVar12 * 0x10 ) + 8 ) = local_70._0_4_;
                  if (( bVar22 ) && ( ( ( local_78 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_88 != (char*)0x0 ) ) )) {
                     StringName::unref();
                  }

                  uVar12 = ( ulong )((int)uVar12 + 1);
               }

               plVar17 = (long*)*plVar17;
            }
 while ( plVar17 != (long*)0x0 );
            local_bc = (uint)uVar12;
            lVar8 = (long)(int)local_bc;
            if (lVar8 != 0) {
               if (lVar8 == 1) {
                  SortArray<Pair<StringName,int>,ShaderLanguage::UniformOrderComparator,true>::introsort(0, 1, local_f8, 0);
                  local_bc = 1;
               }
 else {
                  lVar11 = 0;
                  lVar19 = lVar8;
                  do {
                     lVar19 = lVar19 >> 1;
                     lVar11 = lVar11 + 1;
                  }
 while ( lVar19 != 1 );
                  SortArray<Pair<StringName,int>,ShaderLanguage::UniformOrderComparator,true>::introsort(0, lVar8, local_f8, lVar11 * 2);
                  if (lVar8 < 0x11) {
                     lVar19 = 1;
                     pSVar16 = (StringName_conflict*)( local_f8 + 0x10 );
                     do {
                        StringName::StringName((StringName_conflict*)&local_78, pSVar16);
                        local_70._0_4_ = *(int*)( pSVar16 + 8 );
                        lVar11 = lVar19;
                        pSVar14 = pSVar16;
                        if (*(int*)( pSVar16 + 8 ) < *(int*)( local_f8 + 8 )) {
                           do {
                              StringName::operator =(pSVar14, pSVar14 + -0x10);
                              *(undefined4*)( pSVar14 + 8 ) = *(undefined4*)( pSVar14 + -8 );
                              lVar11 = lVar11 + -1;
                              pSVar14 = pSVar14 + -0x10;
                           }
 while ( lVar11 != 0 );
                           StringName::operator =((StringName_conflict*)local_f8, (StringName_conflict*)&local_78);
                           *(undefined4*)( local_f8 + 8 ) = local_70._0_4_;
                           LAB_0010721e:if (StringName::configured != '\0') {
                              LAB_00107222:if (local_78 != 0) {
                                 StringName::unref();
                              }

                           }

                        }
 else {
                           StringName::StringName((StringName_conflict*)&local_88, (StringName_conflict*)&local_78);
                           local_80 = CONCAT44(local_80._4_4_, local_70._0_4_);
                           pSVar20 = pSVar16;
                           if ((int)local_70._0_4_ < *(int*)( pSVar16 + -8 )) {
                              while (lVar11 = lVar11 + -1,lVar11 != 0) {
                                 StringName::operator =(pSVar14, pSVar20 + -0x10);
                                 *(undefined4*)( pSVar14 + 8 ) = *(undefined4*)( pSVar20 + -8 );
                                 if (*(int*)( pSVar14 + -0x18 ) <= (int)local_80) {
                                    pSVar14 = (StringName_conflict*)( local_f8 + lVar11 * 0x10 );
                                    goto LAB_0010785f;
                                 }

                                 pSVar14 = pSVar14 + -0x10;
                                 pSVar20 = pSVar20 + -0x10;
                              }
;
                              _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                              pSVar14 = (StringName_conflict*)( local_f8 + 0x10 );
                           }

                           LAB_0010785f:StringName::operator =(pSVar14, (StringName_conflict*)&local_88);
                           bVar22 = StringName::configured != '\0';
                           *(int*)( pSVar14 + 8 ) = (int)local_80;
                           if (bVar22) {
                              if (local_88 != (char*)0x0) {
                                 StringName::unref();
                                 goto LAB_0010721e;
                              }

                              goto LAB_00107222;
                           }

                        }

                        lVar19 = lVar19 + 1;
                        pSVar16 = pSVar16 + 0x10;
                     }
 while ( lVar8 != lVar19 );
                  }
 else {
                     pSVar16 = (StringName_conflict*)( local_f8 + 0x10 );
                     pSVar14 = pSVar16;
                     lVar19 = 0;
                     do {
                        lVar11 = lVar19 + 1;
                        StringName::StringName((StringName_conflict*)&local_78, pSVar14);
                        local_70._0_4_ = *(int*)( pSVar14 + 8 );
                        pSVar20 = pSVar14;
                        if (*(int*)( pSVar14 + 8 ) < *(int*)( local_f8 + 8 )) {
                           do {
                              pSVar13 = pSVar20 + -0x10;
                              StringName::operator =(pSVar20, pSVar13);
                              *(undefined4*)( pSVar20 + 8 ) = *(undefined4*)( pSVar20 + -8 );
                              pSVar20 = pSVar13;
                           }
 while ( pSVar13 != (StringName_conflict*)local_f8 );
                           StringName::operator =((StringName_conflict*)local_f8, (StringName_conflict*)&local_78);
                           *(undefined4*)( local_f8 + 8 ) = local_70._0_4_;
                           LAB_00106ead:if (StringName::configured != '\0') {
                              LAB_00106eb1:if (local_78 != 0) {
                                 StringName::unref();
                              }

                           }

                        }
 else {
                           StringName::StringName((StringName_conflict*)&local_88, (StringName_conflict*)&local_78);
                           local_80 = CONCAT44(local_80._4_4_, local_70._0_4_);
                           pSVar13 = pSVar14;
                           if ((int)local_70._0_4_ < *(int*)( pSVar14 + -8 )) {
                              while (lVar19 != 0) {
                                 StringName::operator =(pSVar20, pSVar13 + -0x10);
                                 *(undefined4*)( pSVar20 + 8 ) = *(undefined4*)( pSVar13 + -8 );
                                 if (*(int*)( pSVar20 + -0x18 ) <= (int)local_80) {
                                    pSVar20 = (StringName_conflict*)( local_f8 + lVar19 * 0x10 );
                                    goto LAB_00107122;
                                 }

                                 pSVar20 = pSVar20 + -0x10;
                                 pSVar13 = pSVar13 + -0x10;
                                 lVar19 = lVar19 + -1;
                              }
;
                              _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                              pSVar20 = pSVar16;
                           }

                           LAB_00107122:StringName::operator =(pSVar20, (StringName_conflict*)&local_88);
                           bVar22 = StringName::configured != '\0';
                           *(int*)( pSVar20 + 8 ) = (int)local_80;
                           if (bVar22) {
                              if (local_88 != (char*)0x0) {
                                 StringName::unref();
                                 goto LAB_00106ead;
                              }

                              goto LAB_00106eb1;
                           }

                        }

                        pSVar14 = pSVar14 + 0x10;
                        lVar19 = lVar11;
                     }
 while ( lVar11 != 0xf );
                     local_f0 = 0x10;
                     local_e8 = (StringName_conflict*)( local_f8 + 0xf0 );
                     pSVar14 = (StringName_conflict*)( local_f8 + 0x100 );
                     do {
                        StringName::StringName((StringName_conflict*)&local_78, pSVar14);
                        local_70._0_4_ = *(int*)( pSVar14 + 8 );
                        pSVar20 = pSVar14;
                        pSVar13 = local_e8;
                        lVar19 = local_f0 + -1;
                        if (*(int*)( pSVar14 + 8 ) < *(int*)( pSVar14 + -8 )) {
                           do {
                              lVar11 = lVar19 + -1;
                              StringName::operator =(pSVar20, pSVar13);
                              pSVar1 = pSVar13 + 8;
                              pSVar13 = pSVar13 + (long)( pSVar14 + ( -0x20 - (long)local_e8 ) );
                              *(undefined4*)( pSVar20 + 8 ) = *(undefined4*)pSVar1;
                              if (*(int*)( pSVar20 + -0x18 ) <= (int)local_70._0_4_) {
                                 pSVar20 = (StringName_conflict*)( local_f8 + lVar19 * 0x10 );
                                 goto LAB_00106fb2;
                              }

                              pSVar20 = pSVar20 + -0x10;
                              lVar19 = lVar11;
                           }
 while ( lVar11 != 0 );
                           _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                           pSVar20 = pSVar16;
                        }

                        LAB_00106fb2:StringName::operator =(pSVar20, (StringName_conflict*)&local_78);
                        bVar22 = StringName::configured != '\0';
                        *(undefined4*)( pSVar20 + 8 ) = local_70._0_4_;
                        if (( bVar22 ) && ( local_78 != 0 )) {
                           StringName::unref();
                        }

                        local_f0 = local_f0 + 1;
                        pSVar14 = pSVar14 + 0x10;
                        local_e8 = local_e8 + 0x10;
                     }
 while ( lVar8 != local_f0 );
                  }

               }

               local_100 = (Uniform*)&local_78;
               local_a0 = 0;
               uVar15 = 0;
               pPVar18 = local_f8;
               LAB_001076fe:lVar8 = HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>::operator [](this_00, (StringName_conflict*)pPVar18);
               local_98 = 0;
               plVar17 = (long*)( *(long*)( lVar8 + 0x68 ) + -0x10 );
               if (*(long*)( lVar8 + 0x68 ) != 0) {
                  do {
                     lVar19 = *plVar17;
                     if (lVar19 == 0) goto LAB_00107746;
                     LOCK();
                     lVar11 = *plVar17;
                     bVar22 = lVar19 == lVar11;
                     if (bVar22) {
                        *plVar17 = lVar19 + 1;
                        lVar11 = lVar19;
                     }

                     UNLOCK();
                  }
 while ( !bVar22 );
                  if (lVar11 != -1) {
                     local_98 = *(ulong*)( lVar8 + 0x68 );
                  }

               }

               LAB_00107746:if (( *(long*)( lVar8 + 0x70 ) != 0 ) && ( 1 < *(uint*)( *(long*)( lVar8 + 0x70 ) + -8 ) )) {
                  operator+((char *)
                  local_100,(String*)&_LC96;
                  String::operator +=((String*)&local_98, (String*)local_100);
                  lVar8 = local_78;
                  if (local_78 != 0) {
                     LOCK();
                     plVar17 = (long*)( local_78 + -0x10 );
                     *plVar17 = *plVar17 + -1;
                     UNLOCK();
                     if (*plVar17 == 0) {
                        local_78 = 0;
                        Memory::free_static((void*)( lVar8 + -0x10 ), false);
                     }

                  }

               }

               cVar7 = String::operator !=((String*)&local_98, (String*)&local_a0);
               if (cVar7 != '\0') {
                  local_78 = 0;
                  local_60 = 0;
                  local_58 = 0;
                  plVar17 = (long*)( local_98 - 0x10 );
                  local_50 = 0x40;
                  local_70 = (undefined1[16])0x0;
                  if (local_98 != 0) {
                     do {
                        lVar8 = *plVar17;
                        if (lVar8 == 0) goto LAB_00107336;
                        LOCK();
                        lVar19 = *plVar17;
                        bVar22 = lVar8 == lVar19;
                        if (bVar22) {
                           *plVar17 = lVar8 + 1;
                           lVar19 = lVar8;
                        }

                        UNLOCK();
                     }
 while ( !bVar22 );
                     if (lVar19 != -1) {
                        local_70._8_8_ = 0;
                        local_70._0_8_ = local_98;
                     }

                  }

                  LAB_00107336:if (*param_3 == 0) {
                     pauVar10 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                     *param_3 = (long)pauVar10;
                     *(undefined4*)pauVar10[1] = 0;
                     *pauVar10 = (undefined1[16])0x0;
                  }

                  puVar9 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
                  *(undefined8*)( puVar9 + 8 ) = 0;
                  *(undefined1(*) [16])( puVar9 + 2 ) = (undefined1[16])0x0;
                  *puVar9 = 0;
                  puVar9[6] = 0;
                  puVar9[10] = 6;
                  *(undefined8*)( puVar9 + 0x10 ) = 0;
                  *(undefined1(*) [16])( puVar9 + 0xc ) = (undefined1[16])0x0;
                  *puVar9 = (undefined4)local_78;
                  if (local_70._0_8_ != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( puVar9 + 2 ), (CowData*)local_70);
                  }

                  StringName::operator =((StringName_conflict*)( puVar9 + 4 ), (StringName_conflict*)( local_70 + 8 ));
                  puVar9[6] = (undefined4)local_60;
                  if (*(long*)( puVar9 + 8 ) != local_58) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( puVar9 + 8 ), (CowData*)&local_58);
                  }

                  puVar9[10] = local_50;
                  plVar17 = (long*)*param_3;
                  lVar8 = plVar17[1];
                  *(long**)( puVar9 + 0x10 ) = plVar17;
                  *(undefined8*)( puVar9 + 0xc ) = 0;
                  *(long*)( puVar9 + 0xe ) = lVar8;
                  if (lVar8 != 0) {
                     *(undefined4**)( lVar8 + 0x30 ) = puVar9;
                  }

                  plVar17[1] = (long)puVar9;
                  if (*plVar17 == 0) {
                     *plVar17 = (long)puVar9;
                  }

                  *(int*)( plVar17 + 2 ) = (int)plVar17[2] + 1;
                  if (local_a0 != local_98) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)&local_98);
                  }

                  lVar8 = local_58;
                  if (local_58 != 0) {
                     LOCK();
                     plVar17 = (long*)( local_58 + -0x10 );
                     *plVar17 = *plVar17 + -1;
                     UNLOCK();
                     if (*plVar17 == 0) {
                        local_58 = 0;
                        Memory::free_static((void*)( lVar8 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( local_70._8_8_ != 0 )) {
                     StringName::unref();
                  }

                  uVar6 = local_70._0_8_;
                  if (local_70._0_8_ != 0) {
                     LOCK();
                     plVar17 = (long*)( local_70._0_8_ + -0x10 );
                     *plVar17 = *plVar17 + -1;
                     UNLOCK();
                     if (*plVar17 == 0) {
                        auVar3._8_8_ = 0;
                        auVar3._0_8_ = local_70._8_8_;
                        local_70 = auVar3 << 0x40;
                        Memory::free_static((void*)( uVar6 + -0x10 ), false);
                     }

                  }

               }

               ShaderLanguage::uniform_to_property_info(local_100);
               lVar8 = *(long*)pPVar18;
               if (lVar8 == 0) {
                  LAB_00107921:local_90 = 0;
                  if (local_70._0_8_ == 0) goto LAB_0010754d;
                  LAB_00107932:LOCK();
                  plVar17 = (long*)( local_70._0_8_ + -0x10 );
                  *plVar17 = *plVar17 + -1;
                  UNLOCK();
                  if (*plVar17 == 0) {
                     uVar6 = local_70._0_8_;
                     auVar5._8_8_ = 0;
                     auVar5._0_8_ = local_70._8_8_;
                     local_70 = auVar5 << 0x40;
                     Memory::free_static((void*)( uVar6 + -0x10 ), false);
                  }

                  LAB_00107540:local_70._0_8_ = local_90;
                  LAB_0010754d:lVar8 = *param_3;
               }
 else {
                  __s = *(char**)( lVar8 + 8 );
                  local_90 = 0;
                  if (__s == (char*)0x0) {
                     if (*(long*)( lVar8 + 0x10 ) == 0) goto LAB_00107921;
                     plVar17 = (long*)( *(long*)( lVar8 + 0x10 ) + -0x10 );
                     do {
                        lVar19 = *plVar17;
                        if (lVar19 == 0) goto LAB_00107526;
                        LOCK();
                        lVar11 = *plVar17;
                        bVar22 = lVar19 == lVar11;
                        if (bVar22) {
                           *plVar17 = lVar19 + 1;
                           lVar11 = lVar19;
                        }

                        UNLOCK();
                     }
 while ( !bVar22 );
                     if (lVar11 != -1) {
                        local_90 = *(long*)( lVar8 + 0x10 );
                     }

                  }
 else {
                     local_80 = strlen(__s);
                     local_88 = __s;
                     String::parse_latin1((StrRange*)&local_90);
                  }

                  LAB_00107526:lVar8 = local_90;
                  if (local_70._0_8_ != local_90) {
                     if (local_70._0_8_ != 0) goto LAB_00107932;
                     goto LAB_00107540;
                  }

                  if (local_90 == 0) goto LAB_0010754d;
                  LOCK();
                  plVar17 = (long*)( local_90 + -0x10 );
                  *plVar17 = *plVar17 + -1;
                  UNLOCK();
                  if (*plVar17 != 0) goto LAB_0010754d;
                  local_90 = 0;
                  Memory::free_static((void*)( lVar8 + -0x10 ), false);
                  lVar8 = *param_3;
               }

               if (lVar8 == 0) {
                  pauVar10 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *param_3 = (long)pauVar10;
                  *(undefined4*)pauVar10[1] = 0;
                  *pauVar10 = (undefined1[16])0x0;
               }

               puVar9 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
               *(undefined8*)( puVar9 + 8 ) = 0;
               *(undefined1(*) [16])( puVar9 + 2 ) = (undefined1[16])0x0;
               *puVar9 = 0;
               puVar9[6] = 0;
               puVar9[10] = 6;
               *(undefined8*)( puVar9 + 0x10 ) = 0;
               *(undefined1(*) [16])( puVar9 + 0xc ) = (undefined1[16])0x0;
               *puVar9 = (undefined4)local_78;
               if (local_70._0_8_ != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( puVar9 + 2 ), (CowData*)local_70);
               }

               StringName::operator =((StringName_conflict*)( puVar9 + 4 ), (StringName_conflict*)( local_70 + 8 ));
               puVar9[6] = (undefined4)local_60;
               if (*(long*)( puVar9 + 8 ) != local_58) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( puVar9 + 8 ), (CowData*)&local_58);
               }

               lVar19 = local_58;
               puVar9[10] = local_50;
               plVar17 = (long*)*param_3;
               lVar8 = plVar17[1];
               *(undefined8*)( puVar9 + 0xc ) = 0;
               *(long**)( puVar9 + 0x10 ) = plVar17;
               *(long*)( puVar9 + 0xe ) = lVar8;
               if (lVar8 != 0) {
                  *(undefined4**)( lVar8 + 0x30 ) = puVar9;
               }

               plVar17[1] = (long)puVar9;
               if (*plVar17 == 0) {
                  *plVar17 = (long)puVar9;
               }

               *(int*)( plVar17 + 2 ) = (int)plVar17[2] + 1;
               if (local_58 != 0) {
                  LOCK();
                  plVar17 = (long*)( local_58 + -0x10 );
                  *plVar17 = *plVar17 + -1;
                  UNLOCK();
                  if (*plVar17 == 0) {
                     local_58 = 0;
                     Memory::free_static((void*)( lVar19 + -0x10 ), false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( local_70._8_8_ != 0 )) {
                  StringName::unref();
               }

               uVar6 = local_70._0_8_;
               if (local_70._0_8_ != 0) {
                  LOCK();
                  plVar17 = (long*)( local_70._0_8_ + -0x10 );
                  *plVar17 = *plVar17 + -1;
                  UNLOCK();
                  if (*plVar17 == 0) {
                     auVar4._8_8_ = 0;
                     auVar4._0_8_ = local_70._8_8_;
                     local_70 = auVar4 << 0x40;
                     Memory::free_static((void*)( uVar6 + -0x10 ), false);
                  }

               }

               uVar21 = local_98;
               if (local_98 != 0) {
                  LOCK();
                  plVar17 = (long*)( local_98 - 0x10 );
                  *plVar17 = *plVar17 + -1;
                  UNLOCK();
                  if (*plVar17 == 0) {
                     local_98 = 0;
                     Memory::free_static((void*)( uVar21 - 0x10 ), false);
                  }

               }

               uVar21 = local_a0;
               uVar15 = uVar15 + 1;
               if (uVar15 != local_bc) goto code_r0x001076ed;
               if (local_a0 != 0) {
                  LOCK();
                  plVar17 = (long*)( local_a0 - 0x10 );
                  *plVar17 = *plVar17 + -1;
                  UNLOCK();
                  if (*plVar17 == 0) {
                     local_a0 = 0;
                     Memory::free_static((void*)( uVar21 - 0x10 ), false);
                  }

               }

               if (local_f8 != (Pair_conflict*)0x0) {
                  pPVar18 = local_f8;
                  do {
                     if (( StringName::configured != '\0' ) && ( *(long*)pPVar18 != 0 )) {
                        StringName::unref();
                     }

                     pPVar18 = pPVar18 + 0x10;
                  }
 while ( local_f8 + (ulong)local_bc * 0x10 != pPVar18 );
                  goto LAB_00107ae0;
               }

               goto LAB_00107b50;
            }

            if (local_f8 != (Pair_conflict*)0x0) {
               LAB_00107ae0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  Memory::free_static(local_f8, false);
                  return;
               }

               goto LAB_00107c4f;
            }

         }

         LAB_00107b50:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00107c4f;
      }

      if (*(int*)( this_00 + 0x30 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("get_shader_parameter_list", "servers/rendering/dummy/storage/material_storage.cpp", 0xc3, "Parameter \"shader\" is null.", 0, 0);
      return;
   }

   LAB_00107c4f:/* WARNING: Subroutine does not return */__stack_chk_fail();
   code_r0x001076ed:pPVar18 = (Pair_conflict*)( (StringName_conflict*)pPVar18 + 0x10 );
   if (local_bc <= uVar15) {
      _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)uVar15, (ulong)local_bc, "p_index", "count", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   goto LAB_001076fe;
}
/* RendererDummy::MaterialStorage::shader_initialize(RID) */undefined1  [16] __thiscallRendererDummy::MaterialStorage::shader_initialize(MaterialStorage *this, ulong param_2) {
   long lVar1;
   undefined1 auVar2[16];
   long lVar3;
   uint uVar4;
   char *pcVar5;
   undefined1 auVar6[16];
   undefined8 uVar7;
   undefined8 uStack_10;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x54 ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x40 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x50 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x50 ) ) * 0x38;
      if ((int)*(uint*)( lVar1 + 0x30 ) < 0) {
         uVar4 = ( uint )(param_2 >> 0x20);
         if (uVar4 == ( *(uint*)( lVar1 + 0x30 ) & 0x7fffffff )) {
            *(uint*)( lVar1 + 0x30 ) = uVar4;
            lVar3 = 1;
            *(undefined8*)( lVar1 + 0x28 ) = 0;
            *(undefined1(*) [16])( lVar1 + 8 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( lVar1 + 0x18 ) = (undefined1[16])0x0;
            do {
               if (0x16 < *(uint*)( hash_table_size_primes + lVar3 * 4 )) {
                  *(int*)( lVar1 + 0x28 ) = (int)lVar3;
                  auVar6._8_8_ = hash_table_size_primes;
                  auVar6._0_8_ = lVar3;
                  return auVar6;
               }

               lVar3 = lVar3 + 1;
            }
 while ( lVar3 != 0x1d );
            uVar7 = 0;
            _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0);
            auVar2._8_8_ = uStack_10;
            auVar2._0_8_ = uVar7;
            return auVar2;
         }

         pcVar5 = "Attempting to initialize the wrong RID";
         uVar7 = 0xfc;
      }
 else {
         pcVar5 = "Initializing already initialized RID";
         uVar7 = 0xf8;
      }

      _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar7, "Method/function failed. Returning: nullptr", pcVar5, 0, 0);
   }

   auVar6 = _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
   return auVar6;
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* RendererDummy::MaterialStorage::global_shader_parameter_set(StringName const&, Variant const&) */void RendererDummy::MaterialStorage::global_shader_parameter_set(StringName_conflict *param_1, Variant *param_2) {
   return;
}
/* RendererDummy::MaterialStorage::global_shader_parameter_set_override(StringName const&, Variant
   const&) */void RendererDummy::MaterialStorage::global_shader_parameter_set_override(StringName_conflict *param_1, Variant *param_2) {
   return;
}
/* RendererDummy::MaterialStorage::global_shader_parameter_get(StringName const&) const */StringName_conflict *RendererDummy::MaterialStorage::global_shader_parameter_get(StringName_conflict *param_1) {
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   return param_1;
}
/* RendererDummy::MaterialStorage::global_shader_parameters_clear() */void RendererDummy::MaterialStorage::global_shader_parameters_clear(void) {
   return;
}
/* RendererDummy::MaterialStorage::global_shader_parameters_instance_allocate(RID) */undefined8 RendererDummy::MaterialStorage::global_shader_parameters_instance_allocate(void) {
   return 0;
}
/* RendererDummy::MaterialStorage::global_shader_parameters_instance_free(RID) */void RendererDummy::MaterialStorage::global_shader_parameters_instance_free(void) {
   return;
}
/* RendererDummy::MaterialStorage::global_shader_parameters_instance_update(RID, int, Variant
   const&, int) */void RendererDummy::MaterialStorage::global_shader_parameters_instance_update(void) {
   return;
}
/* RendererDummy::MaterialStorage::shader_set_path_hint(RID, String const&) */void RendererDummy::MaterialStorage::shader_set_path_hint(void) {
   return;
}
/* RendererDummy::MaterialStorage::shader_set_default_texture_parameter(RID, StringName const&, RID,
   int) */void RendererDummy::MaterialStorage::shader_set_default_texture_parameter(void) {
   return;
}
/* RendererDummy::MaterialStorage::shader_get_default_texture_parameter(RID, StringName const&, int)
   const */undefined8 RendererDummy::MaterialStorage::shader_get_default_texture_parameter(void) {
   return 0;
}
/* RendererDummy::MaterialStorage::shader_get_parameter_default(RID, StringName const&) const */undefined4 *RendererDummy::MaterialStorage::shader_get_parameter_default(undefined4 *param_1) {
   *param_1 = 0;
   *(undefined1(*) [16])( param_1 + 2 ) = (undefined1[16])0x0;
   return param_1;
}
/* RendererDummy::MaterialStorage::shader_get_native_source_code(RID) const */long RendererDummy::MaterialStorage::shader_get_native_source_code(long param_1) {
   *(undefined8*)( param_1 + 8 ) = 0;
   return param_1;
}
/* RendererDummy::MaterialStorage::material_set_render_priority(RID, int) */void RendererDummy::MaterialStorage::material_set_render_priority(void) {
   return;
}
/* RendererDummy::MaterialStorage::material_set_param(RID, StringName const&, Variant const&) */void RendererDummy::MaterialStorage::material_set_param(void) {
   return;
}
/* RendererDummy::MaterialStorage::material_get_param(RID, StringName const&) const */undefined4 *RendererDummy::MaterialStorage::material_get_param(undefined4 *param_1) {
   *param_1 = 0;
   *(undefined1(*) [16])( param_1 + 2 ) = (undefined1[16])0x0;
   return param_1;
}
/* RendererDummy::MaterialStorage::material_is_animated(RID) */undefined8 RendererDummy::MaterialStorage::material_is_animated(void) {
   return 0;
}
/* RendererDummy::MaterialStorage::material_casts_shadows(RID) */undefined8 RendererDummy::MaterialStorage::material_casts_shadows(void) {
   return 0;
}
/* RendererDummy::MaterialStorage::material_get_cull_mode(RID) const */undefined8 RendererDummy::MaterialStorage::material_get_cull_mode(void) {
   return 0;
}
/* RendererDummy::MaterialStorage::material_update_dependency(RID, DependencyTracker*) */void RendererDummy::MaterialStorage::material_update_dependency(void) {
   return;
}
/* RendererDummy::MaterialStorage::shader_get_code(RID) const */StrRange *RendererDummy::MaterialStorage::shader_get_code(StrRange *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = 0;
   String::parse_latin1(param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderCompiler::IdentifierActions::~IdentifierActions() */void ShaderCompiler::IdentifierActions::~IdentifierActions(IdentifierActions *this) {
   uint uVar1;
   long lVar2;
   void *pvVar3;
   bool bVar4;
   pvVar3 = *(void**)( this + 200 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0xec ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xe8 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0xec ) = 0;
            *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xd0 ) + lVar2 ) != 0) {
                  bVar4 = StringName::configured != '\0';
                  *(int*)( *(long*)( this + 0xd0 ) + lVar2 ) = 0;
                  pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
                  if (( bVar4 ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar3, false);
                  pvVar3 = *(void**)( this + 200 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( lVar2 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0xec ) = 0;
            *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_001087ac;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0xd0 ), false);
   }

   LAB_001087ac:pvVar3 = *(void**)( this + 0x98 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0xbc ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xb8 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0xbc ) = 0;
            *(undefined1(*) [16])( this + 0xa8 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xa0 ) + lVar2 ) != 0) {
                  bVar4 = StringName::configured != '\0';
                  *(int*)( *(long*)( this + 0xa0 ) + lVar2 ) = 0;
                  pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
                  if (( bVar4 ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar3, false);
                  pvVar3 = *(void**)( this + 0x98 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( (ulong)uVar1 << 2 != lVar2 );
            *(undefined4*)( this + 0xbc ) = 0;
            *(undefined1(*) [16])( this + 0xa8 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_0010886c;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0xa0 ), false);
   }

   LAB_0010886c:pvVar3 = *(void**)( this + 0x68 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0x8c ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x88 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x8c ) = 0;
            *(undefined1(*) [16])( this + 0x78 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x70 ) + lVar2 ) != 0) {
                  bVar4 = StringName::configured != '\0';
                  *(int*)( *(long*)( this + 0x70 ) + lVar2 ) = 0;
                  pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
                  if (( bVar4 ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar3, false);
                  pvVar3 = *(void**)( this + 0x68 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( (ulong)uVar1 << 2 != lVar2 );
            *(undefined4*)( this + 0x8c ) = 0;
            *(undefined1(*) [16])( this + 0x78 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_00108923;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x70 ), false);
   }

   LAB_00108923:pvVar3 = *(void**)( this + 0x38 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0x5c ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x58 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x5c ) = 0;
            *(undefined1(*) [16])( this + 0x48 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x40 ) + lVar2 ) != 0) {
                  bVar4 = StringName::configured != '\0';
                  *(int*)( *(long*)( this + 0x40 ) + lVar2 ) = 0;
                  pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
                  if (( bVar4 ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar3, false);
                  pvVar3 = *(void**)( this + 0x38 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( lVar2 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x5c ) = 0;
            *(undefined1(*) [16])( this + 0x48 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_001089ce;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x40 ), false);
   }

   LAB_001089ce:pvVar3 = *(void**)( this + 8 );
   if (pvVar3 == (void*)0x0) {
      return;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (uVar1 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }
 else {
         lVar2 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar2 ) != 0) {
               bVar4 = StringName::configured != '\0';
               *(int*)( *(long*)( this + 0x10 ) + lVar2 ) = 0;
               pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
               if (( bVar4 ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                  StringName::unref();
               }

               Memory::free_static(pvVar3, false);
               pvVar3 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
            }

            lVar2 = lVar2 + 4;
         }
 while ( lVar2 != (ulong)uVar1 << 2 );
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         if (pvVar3 == (void*)0x0) {
            return;
         }

      }

   }

   Memory::free_static(pvVar3, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   return;
}
/* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   long *plVar1;
   void *pvVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   plVar5 = *(long**)this;
   if (plVar5 == (long*)0x0) {
      return;
   }

   do {
      pvVar2 = (void*)*plVar5;
      if (pvVar2 == (void*)0x0) {
         if ((int)plVar5[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( (long)pvVar2 + 0x40 ) == plVar5) {
         lVar4 = *(long*)( (long)pvVar2 + 0x30 );
         lVar3 = *(long*)( (long)pvVar2 + 0x38 );
         *plVar5 = lVar4;
         if (pvVar2 == (void*)plVar5[1]) {
            plVar5[1] = lVar3;
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x30 ) = lVar4;
            lVar4 = *(long*)( (long)pvVar2 + 0x30 );
         }

         if (lVar4 != 0) {
            *(long*)( lVar4 + 0x38 ) = lVar3;
         }

         if (*(long*)( (long)pvVar2 + 0x20 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)pvVar2 + 0x20 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = *(long*)( (long)pvVar2 + 0x20 );
               *(undefined8*)( (long)pvVar2 + 0x20 ) = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar2 + 0x10 ) != 0 )) {
            StringName::unref();
         }

         if (*(long*)( (long)pvVar2 + 8 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)pvVar2 + 8 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = *(long*)( (long)pvVar2 + 8 );
               *(undefined8*)( (long)pvVar2 + 8 ) = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         Memory::free_static(pvVar2, false);
         *(int*)( plVar5 + 2 ) = (int)plVar5[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar5 = *(long**)this;
   }
 while ( (int)plVar5[2] != 0 );
   Memory::free_static(plVar5, false);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, RenderingServer::GlobalShaderParameterType, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   RenderingServer::GlobalShaderParameterType> > >::operator[](StringName const&) */undefined8 * __thiscallHashMap<StringName,RenderingServer::GlobalShaderParameterType,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,RenderingServer::GlobalShaderParameterType>>>::operator [](HashMap<StringName,RenderingServer::GlobalShaderParameterType,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,RenderingServer::GlobalShaderParameterType>>> * this, StringName_conflict * param_1) * puVar1 ;undefined8 *puVar2void *pvVar3void *__sundefined8 *puVar4undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]uint uVar37uint uVar38uint uVar39ulong uVar40undefined8 uVar41void *__s_00undefined8 *puVar42long lVar43void *pvVar44ulong uVar45int iVar46long lVar47long lVar48long lVar49ulong uVar50undefined8 uVar51uint uVar52uint uVar53uint uVar54undefined8 *puVar55long in_FS_OFFSETbool bVar56long local_58undefined4 local_50long local_40lVar43 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar38);if (lVar43 == 0) {
   LAB_00109488:uVar45 = uVar40 * 4;
   uVar50 = uVar40 * 8;
   uVar41 = Memory::alloc_static(uVar45, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   pvVar44 = (void*)Memory::alloc_static(uVar50, false);
   *(void**)( this + 8 ) = pvVar44;
   if ((int)uVar40 != 0) {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)pvVar44 + uVar50 ) ) && ( pvVar44 < (void*)( (long)pvVar3 + uVar45 ) )) {
         uVar45 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar45 * 4 ) = 0;
            *(undefined8*)( (long)pvVar44 + uVar45 * 8 ) = 0;
            uVar45 = uVar45 + 1;
         }
 while ( uVar40 != uVar45 );
         goto LAB_00109338;
      }

      memset(pvVar3, 0, uVar45);
      memset(pvVar44, 0, uVar50);
      iVar46 = *(int*)( this + 0x2c );
      LAB_0010933c:if (iVar46 != 0) {
         LAB_00109344:uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar45 = CONCAT44(0, uVar38);
         lVar43 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar39 = StringName::get_empty_hash();
         }
 else {
            uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar39 == 0) {
            uVar39 = 1;
         }

         uVar54 = 0;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = (ulong)uVar39 * lVar43;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar45;
         lVar49 = SUB168(auVar17 * auVar33, 8);
         uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
         uVar53 = SUB164(auVar17 * auVar33, 8);
         if (uVar52 != 0) {
            do {
               if (( uVar39 == uVar52 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar49 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  puVar42 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar53 * 8 );
                  *(undefined4*)( puVar42 + 3 ) = 0;
                  goto LAB_00108f3c;
               }

               uVar54 = uVar54 + 1;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = ( ulong )(uVar53 + 1) * lVar43;
               auVar34._8_8_ = 0;
               auVar34._0_8_ = uVar45;
               lVar49 = SUB168(auVar18 * auVar34, 8);
               uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
               uVar53 = SUB164(auVar18 * auVar34, 8);
            }
 while ( ( uVar52 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar52 * lVar43,auVar35._8_8_ = 0,auVar35._0_8_ = uVar45,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar38 + uVar53 ) - SUB164(auVar19 * auVar35, 8)) * lVar43,auVar36._8_8_ = 0,auVar36._0_8_ = uVar45,uVar54 <= SUB164(auVar20 * auVar36, 8) );
         }

         iVar46 = *(int*)( this + 0x2c );
      }

      goto LAB_00108f73;
   }

   iVar46 = *(int*)( this + 0x2c );
   if (pvVar44 == (void*)0x0) goto LAB_00108f73;
   if (iVar46 != 0) goto LAB_00109344;
   LAB_00108f99:uVar38 = *(uint*)( this + 0x28 );
   if (uVar38 == 0x1c) {
      puVar42 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_00108f3c;
   }

   uVar40 = ( ulong )(uVar38 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar39 = *(uint*)( hash_table_size_primes + (ulong)uVar38 * 4 );
   if (uVar38 + 1 < 2) {
      uVar40 = 2;
   }

   uVar38 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar50 = (ulong)uVar38;
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar44 = *(void**)( this + 8 );
   uVar40 = uVar50 * 4;
   uVar45 = uVar50 * 8;
   pvVar3 = *(void**)( this + 0x10 );
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   __s_00 = (void*)Memory::alloc_static(uVar45, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar38 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar45 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar40 != uVar50 );
      }
 else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar45);
      }

   }

   if (uVar39 != 0) {
      uVar40 = 0;
      do {
         uVar38 = *(uint*)( (long)pvVar3 + uVar40 * 4 );
         if (uVar38 != 0) {
            lVar43 = *(long*)( this + 0x10 );
            uVar54 = 0;
            uVar52 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar45 = CONCAT44(0, uVar52);
            lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar38 * lVar49;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar45;
            lVar47 = SUB168(auVar9 * auVar25, 8);
            puVar1 = (uint*)( lVar43 + lVar47 * 4 );
            iVar46 = SUB164(auVar9 * auVar25, 8);
            uVar53 = *puVar1;
            uVar41 = *(undefined8*)( (long)pvVar44 + uVar40 * 8 );
            while (uVar53 != 0) {
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar53 * lVar49;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar45;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(( uVar52 + iVar46 ) - SUB164(auVar10 * auVar26, 8)) * lVar49;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar45;
               uVar37 = SUB164(auVar11 * auVar27, 8);
               uVar51 = uVar41;
               if (uVar37 < uVar54) {
                  *puVar1 = uVar38;
                  puVar42 = (undefined8*)( (long)__s_00 + lVar47 * 8 );
                  uVar51 = *puVar42;
                  *puVar42 = uVar41;
                  uVar38 = uVar53;
                  uVar54 = uVar37;
               }

               uVar54 = uVar54 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(iVar46 + 1) * lVar49;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar45;
               lVar47 = SUB168(auVar12 * auVar28, 8);
               puVar1 = (uint*)( lVar43 + lVar47 * 4 );
               iVar46 = SUB164(auVar12 * auVar28, 8);
               uVar41 = uVar51;
               uVar53 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar47 * 8 ) = uVar41;
            *puVar1 = uVar38;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar40 = uVar40 + 1;
      }
 while ( uVar39 != uVar40 );
      Memory::free_static(pvVar44, false);
      Memory::free_static(pvVar3, false);
   }

}
 else {
   iVar46 = *(int*)( this + 0x2c );
   if (iVar46 != 0) {
      lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar39 = StringName::get_empty_hash();
         lVar43 = *(long*)( this + 8 );
      }
 else {
         uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar39 == 0) {
         uVar39 = 1;
      }

      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21, 8);
      uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
      uVar53 = SUB164(auVar5 * auVar21, 8);
      if (uVar52 != 0) {
         uVar54 = 0;
         do {
            if (( uVar39 == uVar52 ) && ( *(long*)( *(long*)( lVar43 + lVar47 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               puVar42 = *(undefined8**)( lVar43 + (ulong)uVar53 * 8 );
               goto LAB_00108f3c;
            }

            uVar54 = uVar54 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(uVar53 + 1) * lVar49;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar40;
            lVar47 = SUB168(auVar6 * auVar22, 8);
            uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
            uVar53 = SUB164(auVar6 * auVar22, 8);
         }
 while ( ( uVar52 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar52 * lVar49,auVar23._8_8_ = 0,auVar23._0_8_ = uVar40,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar53 + uVar38 ) - SUB164(auVar7 * auVar23, 8)) * lVar49,auVar24._8_8_ = 0,auVar24._0_8_ = uVar40,uVar54 <= SUB164(auVar8 * auVar24, 8) );
      }

      uVar40 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar43 == 0) goto LAB_00109488;
      LAB_00109338:iVar46 = *(int*)( this + 0x2c );
      goto LAB_0010933c;
   }

   LAB_00108f73:if ((float)uVar40 * __LC39 < (float)( iVar46 + 1 )) goto LAB_00108f99;
}
StringName::StringName((StringName_conflict*)&local_58, param_1);local_50 = 0;puVar42 = (undefined8*)operator_new(0x20, "");*puVar42 = 0;puVar42[1] = 0;StringName::StringName((StringName_conflict*)( puVar42 + 2 ), (StringName_conflict*)&local_58);bVar56 = StringName::configured != '\0';*(undefined4*)( puVar42 + 3 ) = local_50;if (( bVar56 ) && ( local_58 != 0 )) {
   StringName::unref();
}
puVar4 = *(undefined8**)( this + 0x20 );if (puVar4 == (undefined8*)0x0) {
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar42;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 == 0) goto LAB_0010944d;
   LAB_00109224:uVar38 = *(uint*)( lVar43 + 0x20 );
}
 else {
   *puVar4 = puVar42;
   puVar42[1] = puVar4;
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 != 0) goto LAB_00109224;
   LAB_0010944d:uVar38 = StringName::get_empty_hash();
}
if (uVar38 == 0) {
   uVar38 = 1;
}
uVar40 = (ulong)uVar38;lVar43 = *(long*)( this + 0x10 );uVar53 = 0;lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar45 = CONCAT44(0, uVar39);auVar13._8_8_ = 0;auVar13._0_8_ = uVar40 * lVar49;auVar29._8_8_ = 0;auVar29._0_8_ = uVar45;lVar48 = SUB168(auVar13 * auVar29, 8);lVar47 = *(long*)( this + 8 );puVar1 = (uint*)( lVar43 + lVar48 * 4 );iVar46 = SUB164(auVar13 * auVar29, 8);uVar52 = *puVar1;puVar4 = puVar42;while (uVar52 != 0) {
   auVar14._8_8_ = 0;
   auVar14._0_8_ = (ulong)uVar52 * lVar49;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar45;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(( uVar39 + iVar46 ) - SUB164(auVar14 * auVar30, 8)) * lVar49;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar45;
   uVar38 = SUB164(auVar15 * auVar31, 8);
   puVar55 = puVar4;
   if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8*)( lVar47 + lVar48 * 8 );
      puVar55 = (undefined8*)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
   }

   uVar38 = (uint)uVar40;
   uVar53 = uVar53 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(iVar46 + 1) * lVar49;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar45;
   lVar48 = SUB168(auVar16 * auVar32, 8);
   puVar1 = (uint*)( lVar43 + lVar48 * 4 );
   iVar46 = SUB164(auVar16 * auVar32, 8);
   puVar4 = puVar55;
   uVar52 = *puVar1;
}
;*(undefined8**)( lVar47 + lVar48 * 8 ) = puVar4;*puVar1 = uVar38;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00108f3c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return puVar42 + 3;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
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
/* WARNING: Removing unreachable block (ram,0x001097b0) *//* WARNING: Removing unreachable block (ram,0x001098e0) *//* WARNING: Removing unreachable block (ram,0x00109a59) *//* WARNING: Removing unreachable block (ram,0x001098ec) *//* WARNING: Removing unreachable block (ram,0x001098f6) *//* WARNING: Removing unreachable block (ram,0x00109a3b) *//* WARNING: Removing unreachable block (ram,0x00109902) *//* WARNING: Removing unreachable block (ram,0x0010990c) *//* WARNING: Removing unreachable block (ram,0x00109a1d) *//* WARNING: Removing unreachable block (ram,0x00109918) *//* WARNING: Removing unreachable block (ram,0x00109922) *//* WARNING: Removing unreachable block (ram,0x001099ff) *//* WARNING: Removing unreachable block (ram,0x0010992e) *//* WARNING: Removing unreachable block (ram,0x00109938) *//* WARNING: Removing unreachable block (ram,0x001099e1) *//* WARNING: Removing unreachable block (ram,0x00109944) *//* WARNING: Removing unreachable block (ram,0x0010994e) *//* WARNING: Removing unreachable block (ram,0x001099c3) *//* WARNING: Removing unreachable block (ram,0x00109956) *//* WARNING: Removing unreachable block (ram,0x00109960) *//* WARNING: Removing unreachable block (ram,0x001099a8) *//* WARNING: Removing unreachable block (ram,0x00109968) *//* WARNING: Removing unreachable block (ram,0x0010997e) *//* WARNING: Removing unreachable block (ram,0x0010998a) *//* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
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
/* RID_Alloc<RendererDummy::MaterialStorage::DummyMaterial, false>::~RID_Alloc() */void RID_Alloc<RendererDummy::MaterialStorage::DummyMaterial,false>::~RID_Alloc(RID_Alloc<RendererDummy::MaterialStorage::DummyMaterial,false> *this) {
   long *plVar1;
   long lVar2;
   uint uVar3;
   uint uVar4;
   char *pcVar5;
   long lVar6;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   uVar3 = *(uint*)( this + 0x20 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_0010caa8;
   if (uVar3 != 0) {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
      print_error((String*)&local_48);
      pcVar5 = local_48;
      lVar6 = local_50;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
            lVar6 = local_50;
         }

      }

      local_50 = lVar6;
      if (lVar6 != 0) {
         LOCK();
         plVar1 = (long*)( lVar6 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

   }

   uVar3 = *(uint*)( this + 0x1c );
   uVar4 = *(uint*)( this + 0x18 );
   if (uVar4 <= uVar3) {
      lVar6 = 0;
      do {
         Memory::free_static(*(void**)( *(long*)( this + 8 ) + lVar6 * 8 ), false);
         lVar2 = lVar6 * 8;
         lVar6 = lVar6 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
      }
 while ( (uint)lVar6 < uVar3 / uVar4 );
   }

   if (*(void**)( this + 8 ) == (void*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      Memory::free_static(*(void**)( this + 8 ), false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<RendererDummy::MaterialStorage::DummyMaterial, false>::~RID_Alloc() */void RID_Alloc<RendererDummy::MaterialStorage::DummyMaterial,false>::~RID_Alloc(RID_Alloc<RendererDummy::MaterialStorage::DummyMaterial,false> *this) {
   long *plVar1;
   long lVar2;
   uint uVar3;
   uint uVar4;
   char *pcVar5;
   long lVar6;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   uVar3 = *(uint*)( this + 0x20 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_0010caa8;
   if (uVar3 != 0) {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
      print_error((String*)&local_48);
      pcVar5 = local_48;
      lVar6 = local_50;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
            lVar6 = local_50;
         }

      }

      local_50 = lVar6;
      if (lVar6 != 0) {
         LOCK();
         plVar1 = (long*)( lVar6 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

   }

   uVar3 = *(uint*)( this + 0x1c );
   uVar4 = *(uint*)( this + 0x18 );
   if (uVar4 <= uVar3) {
      lVar6 = 0;
      do {
         Memory::free_static(*(void**)( *(long*)( this + 8 ) + lVar6 * 8 ), false);
         lVar2 = lVar6 * 8;
         lVar6 = lVar6 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
      }
 while ( (uint)lVar6 < uVar3 / uVar4 );
   }

   if (*(void**)( this + 8 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 8 ), false);
      Memory::free_static(*(void**)( this + 0x10 ), false);
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   operator_delete(this, 0x58);
   return;
}
/* RID_Alloc<RendererDummy::MaterialStorage::DummyShader, false>::allocate_rid() */ulong RID_Alloc<RendererDummy::MaterialStorage::DummyShader,false>::allocate_rid(RID_Alloc<RendererDummy::MaterialStorage::DummyShader,false> *this) {
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
      uVar5 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0x38, false);
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
         puVar11 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + lVar12 ) + 0x30 );
         do {
            *puVar11 = 0xffffffff;
            puVar11 = puVar11 + 0xe;
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
      *(uint*)( *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar3 / (ulong)uVar8 ) * 8 ) + ( (ulong)uVar3 % (ulong)uVar8 ) * 0x38 + 0x30 ) = uVar10 | 0x80000000;
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
/* RID_Alloc<RendererDummy::MaterialStorage::DummyMaterial, false>::allocate_rid() */ulong RID_Alloc<RendererDummy::MaterialStorage::DummyMaterial,false>::allocate_rid(RID_Alloc<RendererDummy::MaterialStorage::DummyMaterial,false> *this) {
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
/* CowData<String>::_unref() */void CowData<String>::_unref(CowData<String> *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long *plVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      plVar1 = *(long**)this;
      if (plVar1 != (long*)0x0) {
         lVar3 = plVar1[-1];
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            plVar6 = plVar1;
            do {
               if (*plVar6 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar6 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = *plVar6;
                     *plVar6 = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static(plVar1 + -2, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* ShaderCompiler::GeneratedCode::~GeneratedCode() */void ShaderCompiler::GeneratedCode::~GeneratedCode(GeneratedCode *this) {
   long *plVar1;
   uint uVar2;
   code *pcVar3;
   long lVar4;
   GeneratedCode *pGVar5;
   long *plVar6;
   void *pvVar7;
   long lVar8;
   pvVar7 = *(void**)( this + 0x60 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x84 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x80 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x84 ) = 0;
            *(undefined1(*) [16])( this + 0x70 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x68 ) + lVar4 ) != 0) {
                  pvVar7 = *(void**)( (long)pvVar7 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x68 ) + lVar4 ) = 0;
                  if (*(long*)( (long)pvVar7 + 0x18 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar7 + 0x18 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar8 = *(long*)( (long)pvVar7 + 0x18 );
                        *(undefined8*)( (long)pvVar7 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar8 + -0x10 ), false);
                     }

                  }

                  if (*(long*)( (long)pvVar7 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar7 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar8 = *(long*)( (long)pvVar7 + 0x10 );
                        *(undefined8*)( (long)pvVar7 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar8 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar7, false);
                  pvVar7 = *(void**)( this + 0x60 );
                  *(undefined8*)( (long)pvVar7 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x84 ) = 0;
            *(undefined1(*) [16])( this + 0x70 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_0010a390;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x68 ), false);
   }

   LAB_0010a390:pGVar5 = this + 0x50;
   do {
      if (*(long*)pGVar5 != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)pGVar5 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar4 = *(long*)pGVar5;
            *(long*)pGVar5 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      pGVar5 = pGVar5 + -8;
   }
 while ( pGVar5 != this + 0x38 );
   if (*(long*)( this + 0x38 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x38 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)( this + 0x38 );
         *(undefined8*)( this + 0x38 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x28 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x28 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)( this + 0x28 );
         *(undefined8*)( this + 0x28 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x18 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x18 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x18 );
         if (plVar1 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar4 = plVar1[-1];
         lVar8 = 0;
         *(undefined8*)( this + 0x18 ) = 0;
         plVar6 = plVar1;
         if (lVar4 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar6 = plVar6 + 5;
            }
 while ( lVar4 != lVar8 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   CowData<String>::_unref((CowData<String>*)( this + 8 ));
   return;
}
/* RID_Alloc<RendererDummy::MaterialStorage::DummyShader, false>::~RID_Alloc() */void RID_Alloc<RendererDummy::MaterialStorage::DummyShader,false>::~RID_Alloc(RID_Alloc<RendererDummy::MaterialStorage::DummyShader,false> *this) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   ulong uVar4;
   void *pvVar5;
   int *piVar6;
   long lVar7;
   uint uVar8;
   ulong uVar9;
   undefined8 *puVar10;
   ulong uVar11;
   long lVar12;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   uVar8 = *(uint*)( this + 0x20 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_0010ca88;
   if (uVar8 == 0) {
      uVar4 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = *(uint*)( this + 0x18 );
      puVar10 = *(undefined8**)( this + 8 );
      LAB_0010a78b:if ((uint)uVar4 < uVar8) goto LAB_0010a7cb;
      lVar7 = 0;
      while (true) {
         Memory::free_static((void*)puVar10[lVar7], false);
         lVar12 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar12 ), false);
         if (( uint )(uVar4 / uVar8) <= (uint)lVar7) break;
         puVar10 = *(undefined8**)( this + 8 );
      }
;
   }
 else {
      local_60 = 0;
      local_50 = 0x3b;
      local_58 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_60);
      vformat<unsigned_int,char_const*>((String*)&local_58, (uint)(StrRange*)&local_60, (char*)(ulong)uVar8);
      print_error((String*)&local_58);
      pcVar3 = local_58;
      lVar7 = local_60;
      if (local_58 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
            lVar7 = local_60;
         }

      }

      local_60 = lVar7;
      if (lVar7 != 0) {
         LOCK();
         plVar1 = (long*)( lVar7 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      uVar8 = *(uint*)( this + 0x18 );
      uVar9 = (ulong)uVar8;
      puVar10 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar11 = 0;
         do {
            lVar7 = puVar10[uVar11 / uVar9] + ( uVar11 % uVar9 ) * 0x38;
            if (-1 < *(int*)( lVar7 + 0x30 )) {
               pvVar5 = *(void**)( lVar7 + 8 );
               if (pvVar5 != (void*)0x0) {
                  if (*(int*)( lVar7 + 0x2c ) == 0) {
                     LAB_0010a820:Memory::free_static(pvVar5, false);
                     Memory::free_static(*(void**)( lVar7 + 0x10 ), false);
                  }
 else {
                     uVar8 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar7 + 0x28 ) * 4 );
                     if (uVar8 == 0) {
                        *(undefined4*)( lVar7 + 0x2c ) = 0;
                        *(undefined1(*) [16])( lVar7 + 0x18 ) = (undefined1[16])0x0;
                        goto LAB_0010a820;
                     }

                     lVar12 = 0;
                     do {
                        piVar6 = (int*)( *(long*)( lVar7 + 0x10 ) + lVar12 );
                        if (*piVar6 != 0) {
                           pvVar5 = *(void**)( (long)pvVar5 + lVar12 * 2 );
                           *piVar6 = 0;
                           if (*(long*)( (long)pvVar5 + 0x88 ) != 0) {
                              LOCK();
                              plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x88 ) + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 lVar2 = *(long*)( (long)pvVar5 + 0x88 );
                                 *(undefined8*)( (long)pvVar5 + 0x88 ) = 0;
                                 Memory::free_static((void*)( lVar2 + -0x10 ), false);
                              }

                           }

                           if (*(long*)( (long)pvVar5 + 0x80 ) != 0) {
                              LOCK();
                              plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x80 ) + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 lVar2 = *(long*)( (long)pvVar5 + 0x80 );
                                 *(undefined8*)( (long)pvVar5 + 0x80 ) = 0;
                                 Memory::free_static((void*)( lVar2 + -0x10 ), false);
                              }

                           }

                           CowData<String>::_unref((CowData<String>*)( (long)pvVar5 + 0x70 ));
                           if (*(long*)( (long)pvVar5 + 0x40 ) != 0) {
                              LOCK();
                              plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x40 ) + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 lVar2 = *(long*)( (long)pvVar5 + 0x40 );
                                 *(undefined8*)( (long)pvVar5 + 0x40 ) = 0;
                                 Memory::free_static((void*)( lVar2 + -0x10 ), false);
                              }

                           }

                           if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 )) {
                              StringName::unref();
                           }

                           Memory::free_static(pvVar5, false);
                           pvVar5 = *(void**)( lVar7 + 8 );
                           *(undefined8*)( (long)pvVar5 + lVar12 * 2 ) = 0;
                        }

                        lVar12 = lVar12 + 4;
                     }
 while ( (ulong)uVar8 * 4 != lVar12 );
                     *(undefined4*)( lVar7 + 0x2c ) = 0;
                     *(undefined1(*) [16])( lVar7 + 0x18 ) = (undefined1[16])0x0;
                     if (pvVar5 != (void*)0x0) goto LAB_0010a820;
                  }

                  puVar10 = *(undefined8**)( this + 8 );
                  uVar9 = ( ulong ) * (uint*)( this + 0x18 );
               }

               uVar8 = (uint)uVar9;
            }

            uVar4 = ( ulong ) * (uint*)( this + 0x1c );
            uVar11 = uVar11 + 1;
         }
 while ( uVar11 < uVar4 );
         goto LAB_0010a78b;
      }

      if (uVar8 != 0) goto LAB_0010a7cb;
      Memory::free_static((void*)*puVar10, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar10 = *(undefined8**)( this + 8 );
   LAB_0010a7cb:if (puVar10 == (undefined8*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      Memory::free_static(puVar10, false);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<RendererDummy::MaterialStorage::DummyShader, false>::~RID_Alloc() */void RID_Alloc<RendererDummy::MaterialStorage::DummyShader,false>::~RID_Alloc(RID_Alloc<RendererDummy::MaterialStorage::DummyShader,false> *this) {
   ~RID_Alloc(this)
   ;;
   operator_delete(this, 0x58);
   return;
}
/* CowData<StringName>::_unref() */void CowData<StringName>::_unref(CowData<StringName> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long lVar5;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      plVar1 = *(long**)this;
      if (plVar1 != (long*)0x0) {
         lVar2 = plVar1[-1];
         *(undefined8*)this = 0;
         if (lVar2 != 0) {
            lVar5 = 0;
            plVar4 = plVar1;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar4 != 0 )) {
                  StringName::unref();
               }

               lVar5 = lVar5 + 1;
               plVar4 = plVar4 + 1;
            }
 while ( lVar2 != lVar5 );
         }

         Memory::free_static(plVar1 + -2, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<StringName>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<StringName>::_realloc(long) */undefined8 CowData<StringName>::_realloc(CowData<StringName> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<StringName>::resize<false>(long) */undefined8 CowData<StringName>::resize<false>(CowData<StringName> *this, long param_1) {
   code *pcVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   long lVar4;
   long lVar5;
   ulong uVar6;
   undefined8 *puVar7;
   long lVar8;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar4 = 0;
      lVar5 = 0;
   }
 else {
      lVar4 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar4) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar5 = lVar4 * 8;
      if (lVar5 != 0) {
         uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
         uVar6 = uVar6 | uVar6 >> 2;
         uVar6 = uVar6 | uVar6 >> 4;
         uVar6 = uVar6 | uVar6 >> 8;
         uVar6 = uVar6 | uVar6 >> 0x10;
         lVar5 = ( uVar6 | uVar6 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_0010ad50:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar6 = param_1 * 8 - 1;
   uVar6 = uVar6 >> 1 | uVar6;
   uVar6 = uVar6 | uVar6 >> 2;
   uVar6 = uVar6 | uVar6 >> 4;
   uVar6 = uVar6 | uVar6 >> 8;
   uVar6 = uVar6 | uVar6 >> 0x10;
   uVar6 = uVar6 | uVar6 >> 0x20;
   lVar8 = uVar6 + 1;
   if (lVar8 == 0) goto LAB_0010ad50;
   if (param_1 <= lVar4) {
      lVar4 = *(long*)this;
      uVar6 = param_1;
      while (lVar4 != 0) {
         if (*(ulong*)( lVar4 + -8 ) <= uVar6) {
            LAB_0010ac2a:if (lVar8 != lVar5) {
               uVar2 = _realloc(this, lVar8);
               if ((int)uVar2 != 0) {
                  return uVar2;
               }

               lVar4 = *(long*)this;
               if (lVar4 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

            }

            *(long*)( lVar4 + -8 ) = param_1;
            return 0;
         }

         while (( StringName::configured == '\0' || ( *(long*)( lVar4 + uVar6 * 8 ) == 0 ) )) {
            uVar6 = uVar6 + 1;
            if (*(ulong*)( lVar4 + -8 ) <= uVar6) goto LAB_0010ac2a;
         }
;
         StringName::unref();
         uVar6 = uVar6 + 1;
         lVar4 = *(long*)this;
      }
;
      goto LAB_0010abf7;
   }

   if (lVar8 == lVar5) {
      LAB_0010accb:puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) {
         LAB_0010abf7:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar4 = puVar7[-1];
      if (param_1 <= lVar4) goto LAB_0010acab;
   }
 else {
      if (lVar4 != 0) {
         uVar2 = _realloc(this, lVar8);
         if ((int)uVar2 != 0) {
            return uVar2;
         }

         goto LAB_0010accb;
      }

      puVar3 = (undefined8*)Memory::alloc_static(uVar6 + 0x11, false);
      if (puVar3 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar7 = puVar3 + 2;
      *puVar3 = 1;
      puVar3[1] = 0;
      *(undefined8**)this = puVar7;
      lVar4 = 0;
   }

   memset(puVar7 + lVar4, 0, ( param_1 - lVar4 ) * 8);
   LAB_0010acab:puVar7[-1] = param_1;
   return 0;
}
/* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::_resize_and_rehash(unsigned int) */void HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::_resize_and_rehash(HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>> *this, uint param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::insert(StringName const&, String
   const&, bool) */StringName_conflict *
HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
::insert(StringName_conflict *param_1,String *param_2,bool param_3){
   long *plVar1;
   uint *puVar2;
   uint uVar3;
   undefined8 *puVar4;
   long lVar5;
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
   ulong uVar22;
   uint uVar23;
   uint uVar24;
   long lVar25;
   undefined8 uVar26;
   void *__s_00;
   CowData *in_RCX;
   uint uVar27;
   int iVar28;
   undefined7 in_register_00000011;
   StringName_conflict *pSVar29;
   long lVar30;
   long lVar31;
   ulong uVar32;
   char in_R8B;
   uint uVar33;
   ulong uVar34;
   uint uVar35;
   long *plVar36;
   long in_FS_OFFSET;
   long *local_80;
   long local_58;
   long local_50[2];
   long local_40;
   pSVar29 = (StringName_conflict*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar23 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar22 = (ulong)uVar23;
      uVar32 = uVar22 * 4;
      uVar34 = uVar22 * 8;
      uVar26 = Memory::alloc_static(uVar32, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar26;
      __s_00 = (void*)Memory::alloc_static(uVar34, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar23 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar34 ) ) && ( __s_00 < (void*)( (long)__s + uVar32 ) )) {
            uVar32 = 0;
            do {
               *(undefined4*)( (long)__s + uVar32 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar32 * 8 ) = 0;
               uVar32 = uVar32 + 1;
            }
 while ( uVar22 != uVar32 );
         }
 else {
            memset(__s, 0, uVar32);
            memset(__s_00, 0, uVar34);
         }

         goto LAB_0010b042;
      }

      iVar28 = *(int*)( param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_0010b159;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0010b04e;
      LAB_0010b17b:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         local_80 = (long*)0x0;
         goto LAB_0010b34b;
      }

      _resize_and_rehash((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
 else {
      LAB_0010b042:iVar28 = *(int*)( param_2 + 0x2c );
      if (iVar28 != 0) {
         LAB_0010b04e:uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         uVar32 = CONCAT44(0, uVar3);
         lVar25 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         if (*(long*)pSVar29 == 0) {
            uVar24 = StringName::get_empty_hash();
         }
 else {
            uVar24 = *(uint*)( *(long*)pSVar29 + 0x20 );
         }

         if (uVar24 == 0) {
            uVar24 = 1;
         }

         uVar35 = 0;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = (ulong)uVar24 * lVar25;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = uVar32;
         lVar30 = SUB168(auVar6 * auVar14, 8);
         uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar30 * 4 );
         uVar27 = SUB164(auVar6 * auVar14, 8);
         if (uVar33 != 0) {
            do {
               if (( uVar33 == uVar24 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 8 ) + lVar30 * 8 ) + 0x10 ) == *(long*)pSVar29 )) {
                  local_80 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar27 * 8 );
                  if (local_80[3] != *(long*)in_RCX) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( local_80 + 3 ), in_RCX);
                     local_80 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar27 * 8 );
                  }

                  goto LAB_0010b34b;
               }

               uVar35 = uVar35 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(uVar27 + 1) * lVar25;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar32;
               lVar30 = SUB168(auVar7 * auVar15, 8);
               uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar30 * 4 );
               uVar27 = SUB164(auVar7 * auVar15, 8);
            }
 while ( ( uVar33 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar33 * lVar25,auVar16._8_8_ = 0,auVar16._0_8_ = uVar32,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar3 + uVar27 ) - SUB164(auVar8 * auVar16, 8)) * lVar25,auVar17._8_8_ = 0,auVar17._0_8_ = uVar32,uVar35 <= SUB164(auVar9 * auVar17, 8) );
         }

         iVar28 = *(int*)( param_2 + 0x2c );
      }

      LAB_0010b159:if ((float)uVar23 * __LC39 < (float)( iVar28 + 1 )) goto LAB_0010b17b;
   }

   StringName::StringName((StringName_conflict*)&local_58, pSVar29);
   local_50[0] = 0;
   if (*(long*)in_RCX != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_50, in_RCX);
   }

   local_80 = (long*)operator_new(0x20, "");
   *local_80 = 0;
   local_80[1] = 0;
   StringName::StringName((StringName_conflict*)( local_80 + 2 ), (StringName_conflict*)&local_58);
   local_80[3] = 0;
   if (( local_50[0] != 0 ) && ( CowData<char32_t>::_ref((CowData<char32_t>*)( local_80 + 3 ), (CowData*)local_50),lVar25 = local_50[0],local_50[0] != 0 )) {
      LOCK();
      plVar1 = (long*)( local_50[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50[0] = 0;
         Memory::free_static((void*)( lVar25 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
      StringName::unref();
   }

   puVar4 = *(undefined8**)( param_2 + 0x20 );
   if (puVar4 == (undefined8*)0x0) {
      *(long**)( param_2 + 0x18 ) = local_80;
      *(long**)( param_2 + 0x20 ) = local_80;
      LAB_0010b26c:lVar25 = *(long*)pSVar29;
      if (lVar25 != 0) goto LAB_0010b279;
      LAB_0010b3a1:uVar23 = StringName::get_empty_hash();
   }
 else {
      if (in_R8B == '\0') {
         *puVar4 = local_80;
         local_80[1] = (long)puVar4;
         *(long**)( param_2 + 0x20 ) = local_80;
         goto LAB_0010b26c;
      }

      lVar25 = *(long*)( param_2 + 0x18 );
      *(long**)( lVar25 + 8 ) = local_80;
      *local_80 = lVar25;
      lVar25 = *(long*)pSVar29;
      *(long**)( param_2 + 0x18 ) = local_80;
      if (lVar25 == 0) goto LAB_0010b3a1;
      LAB_0010b279:uVar23 = *(uint*)( lVar25 + 0x20 );
   }

   lVar25 = *(long*)( param_2 + 0x10 );
   if (uVar23 == 0) {
      uVar23 = 1;
   }

   uVar32 = (ulong)uVar23;
   uVar33 = 0;
   lVar30 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar34 = CONCAT44(0, uVar3);
   auVar10._8_8_ = 0;
   auVar10._0_8_ = uVar32 * lVar30;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = uVar34;
   lVar31 = SUB168(auVar10 * auVar18, 8);
   lVar5 = *(long*)( param_2 + 8 );
   puVar2 = (uint*)( lVar25 + lVar31 * 4 );
   iVar28 = SUB164(auVar10 * auVar18, 8);
   uVar24 = *puVar2;
   plVar1 = local_80;
   while (uVar24 != 0) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar24 * lVar30;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar34;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(( iVar28 + uVar3 ) - SUB164(auVar11 * auVar19, 8)) * lVar30;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar34;
      uVar23 = SUB164(auVar12 * auVar20, 8);
      plVar36 = plVar1;
      if (uVar23 < uVar33) {
         *puVar2 = (uint)uVar32;
         uVar32 = (ulong)uVar24;
         puVar4 = (undefined8*)( lVar5 + lVar31 * 8 );
         plVar36 = (long*)*puVar4;
         *puVar4 = plVar1;
         uVar33 = uVar23;
      }

      uVar23 = (uint)uVar32;
      uVar33 = uVar33 + 1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = ( ulong )(iVar28 + 1) * lVar30;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar34;
      lVar31 = SUB168(auVar13 * auVar21, 8);
      puVar2 = (uint*)( lVar25 + lVar31 * 4 );
      iVar28 = SUB164(auVar13 * auVar21, 8);
      plVar1 = plVar36;
      uVar24 = *puVar2;
   }
;
   *(long**)( lVar5 + lVar31 * 8 ) = plVar1;
   *puVar2 = uVar23;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_0010b34b:*(long**)param_1 = local_80;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HashMap<StringName, ShaderLanguage::ShaderNode::Uniform, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::ShaderNode::Uniform> > >::_resize_and_rehash(unsigned int) */void HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>::_resize_and_rehash(HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>> *this, uint param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, ShaderLanguage::ShaderNode::Uniform, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::ShaderNode::Uniform> > >::operator[](StringName const&) */undefined8 * __thiscallHashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>::operator [](HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>> * this, StringName_conflict * param_1) * plVar1 ;uint *puVar2undefined8 *puVar3void *__sundefined1 auVar4[16]undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]ulong uVar29undefined8 uVar30uint uVar31uint uVar32uint uVar33undefined8 *puVar34undefined8 uVar35void *__s_00long lVar36int iVar37long lVar38long lVar39long lVar40undefined8 *puVar41uint uVar42ulong uVar43uint uVar44uint uVar45ulong uVar46long in_FS_OFFSETundefined8 *local_160long local_130[3]undefined4 local_118undefined4 uStack_114undefined4 local_110undefined4 uStack_10cundefined8 local_100undefined8 local_f8undefined1 local_f0[16]undefined1 local_d8[16]long local_c8undefined1 local_c0[16]undefined8 local_b0undefined4 local_a8long local_98undefined8 local_90undefined1 local_88undefined8 local_84undefined8 local_7cundefined4 local_74long local_68undefined4 local_60undefined1 local_58[16]long local_40lVar36 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar33 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar46 = CONCAT44(0, uVar33);if (( lVar36 != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
   lVar39 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   if (*(long*)param_1 == 0) {
      uVar31 = StringName::get_empty_hash();
      lVar36 = *(long*)( this + 8 );
   }
 else {
      uVar31 = *(uint*)( *(long*)param_1 + 0x20 );
   }

   if (uVar31 == 0) {
      uVar31 = 1;
   }

   auVar4._8_8_ = 0;
   auVar4._0_8_ = (ulong)uVar31 * lVar39;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = uVar46;
   lVar38 = SUB168(auVar4 * auVar16, 8);
   uVar32 = *(uint*)( *(long*)( this + 0x10 ) + lVar38 * 4 );
   uVar42 = SUB164(auVar4 * auVar16, 8);
   if (uVar32 != 0) {
      uVar44 = 0;
      do {
         if (( uVar32 == uVar31 ) && ( *(long*)( *(long*)( lVar36 + lVar38 * 8 ) + 0x10 ) == *(long*)param_1 )) {
            local_160 = (undefined8*)( *(long*)( lVar36 + (ulong)uVar42 * 8 ) + 0x18 );
            goto LAB_0010b860;
         }

         uVar44 = uVar44 + 1;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = ( ulong )(uVar42 + 1) * lVar39;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = uVar46;
         lVar38 = SUB168(auVar5 * auVar17, 8);
         uVar32 = *(uint*)( *(long*)( this + 0x10 ) + lVar38 * 4 );
         uVar42 = SUB164(auVar5 * auVar17, 8);
      }
 while ( ( uVar32 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar32 * lVar39,auVar18._8_8_ = 0,auVar18._0_8_ = uVar46,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar42 + uVar33 ) - SUB164(auVar6 * auVar18, 8)) * lVar39,auVar19._8_8_ = 0,auVar19._0_8_ = uVar46,uVar44 <= SUB164(auVar7 * auVar19, 8) );
   }

}
uVar30 = _LC88;local_130[2] = 0x600000000;local_110 = 0x3f800000;uStack_10c = 0x3a83126f;uVar33 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );local_130[0] = 0;local_130[1] = 0;local_118 = 2;uStack_114 = 0;local_100 = 0;local_f8 = 0;local_f0 = (undefined1[16])0x0;if (lVar36 == 0) {
   uVar29 = (ulong)uVar33;
   uVar46 = uVar29 * 4;
   uVar43 = uVar29 * 8;
   uVar35 = Memory::alloc_static(uVar46, false);
   *(undefined8*)( this + 0x10 ) = uVar35;
   __s_00 = (void*)Memory::alloc_static(uVar43, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar33 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar43 ) ) && ( __s_00 < (void*)( (long)__s + uVar46 ) )) {
         uVar46 = 0;
         do {
            *(undefined4*)( (long)__s + uVar46 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar46 * 8 ) = 0;
            uVar46 = uVar46 + 1;
         }
 while ( uVar29 != uVar46 );
      }
 else {
         memset(__s, 0, uVar46);
         memset(__s_00, 0, uVar43);
      }

      goto LAB_0010b923;
   }

   iVar37 = *(int*)( this + 0x2c );
   if (__s_00 == (void*)0x0) goto LAB_0010bb01;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_0010b930;
   LAB_0010bb23:if (*(int*)( this + 0x28 ) == 0x1c) {
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      lVar36 = 0;
      LAB_0010bab3:local_160 = (undefined8*)( lVar36 + 0x18 );
      goto LAB_0010babc;
   }

   _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
}
 else {
   LAB_0010b923:iVar37 = *(int*)( this + 0x2c );
   if (iVar37 != 0) {
      LAB_0010b930:uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar46 = CONCAT44(0, uVar31);
      lVar36 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar32 = StringName::get_empty_hash();
      }
 else {
         uVar32 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar32 == 0) {
         uVar32 = 1;
      }

      uVar45 = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar32 * lVar36;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar46;
      lVar39 = SUB168(auVar8 * auVar20, 8);
      uVar42 = *(uint*)( *(long*)( this + 0x10 ) + lVar39 * 4 );
      uVar44 = SUB164(auVar8 * auVar20, 8);
      if (uVar42 != 0) {
         do {
            if (( uVar42 == uVar32 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar39 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               lVar36 = *(long*)( *(long*)( this + 8 ) + (ulong)uVar44 * 8 );
               *(undefined8*)( lVar36 + 0x28 ) = uVar30;
               *(undefined4*)( lVar36 + 0x30 ) = 0;
               *(undefined1(*) [16])( lVar36 + 0x18 ) = (undefined1[16])0x0;
               if (*(long*)( lVar36 + 0x40 ) != 0) {
                  CowData<ShaderLanguage::Scalar>::_ref((CowData<ShaderLanguage::Scalar>*)( lVar36 + 0x40 ), (CowData*)local_130);
               }

               uVar30 = _LC89;
               *(undefined1*)( lVar36 + 0x50 ) = 0;
               *(undefined8*)( lVar36 + 0x48 ) = 0;
               *(undefined8*)( lVar36 + 0x54 ) = uVar30;
               *(ulong*)( lVar36 + 0x5c ) = CONCAT44(local_110, uStack_114);
               *(undefined4*)( lVar36 + 100 ) = uStack_10c;
               if (*(long*)( lVar36 + 0x70 ) != 0) {
                  CowData<String>::_ref((CowData<String>*)( lVar36 + 0x70 ), (CowData*)&local_100);
               }

               *(undefined4*)( lVar36 + 0x78 ) = 0;
               if (*(long*)( lVar36 + 0x80 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( lVar36 + 0x80 ), (CowData*)local_f0);
               }

               if (*(long*)( lVar36 + 0x88 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( lVar36 + 0x88 ), (CowData*)( local_f0 + 8 ));
               }

               lVar36 = *(long*)( *(long*)( this + 8 ) + (ulong)uVar44 * 8 );
               goto LAB_0010bab3;
            }

            uVar45 = uVar45 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = ( ulong )(uVar44 + 1) * lVar36;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar46;
            lVar39 = SUB168(auVar9 * auVar21, 8);
            uVar42 = *(uint*)( *(long*)( this + 0x10 ) + lVar39 * 4 );
            uVar44 = SUB164(auVar9 * auVar21, 8);
         }
 while ( ( uVar42 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar42 * lVar36,auVar22._8_8_ = 0,auVar22._0_8_ = uVar46,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( uVar31 + uVar44 ) - SUB164(auVar10 * auVar22, 8)) * lVar36,auVar23._8_8_ = 0,auVar23._0_8_ = uVar46,uVar45 <= SUB164(auVar11 * auVar23, 8) );
      }

      iVar37 = *(int*)( this + 0x2c );
   }

   LAB_0010bb01:if ((float)uVar33 * __LC39 < (float)( iVar37 + 1 )) goto LAB_0010bb23;
}
local_d8 = (undefined1[16])0x0;StringName::StringName((StringName_conflict*)&local_c8, param_1);local_c0 = (undefined1[16])0x0;local_84 = _LC89;local_7c = CONCAT44(local_110, uStack_114);local_58 = (undefined1[16])0x0;local_b0 = uVar30;local_a8 = 0;local_98 = 0;local_90 = 0;local_88 = 0;local_74 = uStack_10c;local_68 = 0;local_60 = 0;puVar34 = (undefined8*)operator_new(0x90, "");*puVar34 = local_d8._0_8_;puVar34[1] = local_d8._8_8_;StringName::StringName((StringName_conflict*)( puVar34 + 2 ), (StringName_conflict*)&local_c8);local_160 = puVar34 + 3;puVar34[8] = 0;puVar34[3] = local_c0._0_8_;puVar34[4] = local_c0._8_8_;puVar34[5] = local_b0;*(undefined4*)( puVar34 + 6 ) = local_a8;if (local_98 != 0) {
   CowData<ShaderLanguage::Scalar>::_ref((CowData<ShaderLanguage::Scalar>*)( puVar34 + 8 ), (CowData*)&local_98);
}
puVar34[0xe] = 0;puVar34[9] = local_90;*(undefined1*)( puVar34 + 10 ) = local_88;*(undefined8*)( (long)puVar34 + 0x54 ) = local_84;*(undefined8*)( (long)puVar34 + 0x5c ) = local_7c;*(undefined4*)( (long)puVar34 + 100 ) = local_74;if (local_68 != 0) {
   CowData<String>::_ref((CowData<String>*)( puVar34 + 0xe ), (CowData*)&local_68);
}
puVar34[0x10] = 0;*(undefined4*)( puVar34 + 0xf ) = local_60;if (local_58._0_8_ != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)( puVar34 + 0x10 ), (CowData*)local_58);
}
puVar34[0x11] = 0;if (local_58._8_8_ != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)( puVar34 + 0x11 ), (CowData*)( local_58 + 8 ));
   uVar30 = local_58._8_8_;
   if (local_58._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_58._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58._8_8_ = 0;
         Memory::free_static((void*)( uVar30 + -0x10 ), false);
      }

   }

}
uVar30 = local_58._0_8_;if (local_58._0_8_ != 0) {
   LOCK();
   plVar1 = (long*)( local_58._0_8_ + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      auVar28._8_8_ = 0;
      auVar28._0_8_ = local_58._8_8_;
      local_58 = auVar28 << 0x40;
      Memory::free_static((void*)( uVar30 + -0x10 ), false);
   }

}
CowData<String>::_unref((CowData<String>*)&local_68);lVar36 = local_98;if (local_98 != 0) {
   LOCK();
   plVar1 = (long*)( local_98 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void*)( lVar36 + -0x10 ), false);
   }

}
if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
   StringName::unref();
}
puVar41 = *(undefined8**)( this + 0x20 );if (puVar41 == (undefined8*)0x0) {
   lVar36 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar34;
   *(undefined8**)( this + 0x20 ) = puVar34;
   if (lVar36 == 0) goto LAB_0010bfbe;
   LAB_0010bdb3:uVar33 = *(uint*)( lVar36 + 0x20 );
}
 else {
   *puVar41 = puVar34;
   puVar34[1] = puVar41;
   lVar36 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar34;
   if (lVar36 != 0) goto LAB_0010bdb3;
   LAB_0010bfbe:uVar33 = StringName::get_empty_hash();
}
lVar36 = *(long*)( this + 0x10 );if (uVar33 == 0) {
   uVar33 = 1;
}
uVar46 = (ulong)uVar33;uVar42 = 0;lVar39 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar43 = CONCAT44(0, uVar31);auVar12._8_8_ = 0;auVar12._0_8_ = uVar46 * lVar39;auVar24._8_8_ = 0;auVar24._0_8_ = uVar43;lVar40 = SUB168(auVar12 * auVar24, 8);lVar38 = *(long*)( this + 8 );puVar2 = (uint*)( lVar36 + lVar40 * 4 );iVar37 = SUB164(auVar12 * auVar24, 8);uVar32 = *puVar2;while (uVar32 != 0) {
   auVar13._8_8_ = 0;
   auVar13._0_8_ = (ulong)uVar32 * lVar39;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar43;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(( iVar37 + uVar31 ) - SUB164(auVar13 * auVar25, 8)) * lVar39;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar43;
   uVar33 = SUB164(auVar14 * auVar26, 8);
   puVar41 = puVar34;
   if (uVar33 < uVar42) {
      *puVar2 = (uint)uVar46;
      uVar46 = (ulong)uVar32;
      puVar3 = (undefined8*)( lVar38 + lVar40 * 8 );
      puVar41 = (undefined8*)*puVar3;
      *puVar3 = puVar34;
      uVar42 = uVar33;
   }

   uVar33 = (uint)uVar46;
   uVar42 = uVar42 + 1;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(iVar37 + 1) * lVar39;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar43;
   lVar40 = SUB168(auVar15 * auVar27, 8);
   puVar2 = (uint*)( lVar36 + lVar40 * 4 );
   iVar37 = SUB164(auVar15 * auVar27, 8);
   puVar34 = puVar41;
   uVar32 = *puVar2;
}
;*(undefined8**)( lVar38 + lVar40 * 8 ) = puVar34;*puVar2 = uVar33;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;if (local_f0._8_8_ != 0) {
   LOCK();
   plVar1 = (long*)( local_f0._8_8_ + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      Memory::free_static((void*)( local_f0._8_8_ + -0x10 ), false);
   }

}
if (local_f0._0_8_ != 0) {
   LOCK();
   plVar1 = (long*)( local_f0._0_8_ + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      Memory::free_static((void*)( local_f0._0_8_ + -0x10 ), false);
   }

}
LAB_0010babc:CowData<String>::_unref((CowData<String>*)&local_100);if (local_130[0] != 0) {
   LOCK();
   plVar1 = (long*)( local_130[0] + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      Memory::free_static((void*)( local_130[0] + -0x10 ), false);
   }

}
LAB_0010b860:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return local_160;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, ShaderLanguage::ShaderNode::Uniform, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::ShaderNode::Uniform> > >::insert(StringName const&,
   ShaderLanguage::ShaderNode::Uniform const&, bool) */StringName_conflict *
HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>
::insert(StringName_conflict *param_1,Uniform *param_2,bool param_3){
   long *plVar1;
   uint *puVar2;
   uint uVar3;
   undefined8 *puVar4;
   long lVar5;
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
   ulong uVar22;
   uint uVar23;
   uint uVar24;
   long *plVar25;
   long lVar26;
   undefined8 uVar27;
   void *__s_00;
   long *in_RCX;
   uint uVar28;
   int iVar29;
   undefined7 in_register_00000011;
   StringName_conflict *pSVar30;
   long lVar31;
   long lVar32;
   char in_R8B;
   uint uVar33;
   ulong uVar34;
   uint uVar35;
   ulong uVar36;
   long *plVar37;
   long in_FS_OFFSET;
   long local_c8;
   long local_c0;
   long lStack_b8;
   long local_b0;
   undefined4 local_a8;
   long local_98;
   long local_90;
   undefined1 local_88;
   undefined8 local_84;
   undefined8 local_7c;
   undefined4 local_74;
   long local_68;
   undefined4 local_60;
   long local_58;
   long local_50[2];
   long local_40;
   pSVar30 = (StringName_conflict*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar23 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar22 = (ulong)uVar23;
      uVar36 = uVar22 * 4;
      uVar34 = uVar22 * 8;
      uVar27 = Memory::alloc_static(uVar36, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar27;
      __s_00 = (void*)Memory::alloc_static(uVar34, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar23 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar34 ) ) && ( __s_00 < (void*)( (long)__s + uVar36 ) )) {
            uVar36 = 0;
            do {
               *(undefined4*)( (long)__s + uVar36 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar36 * 8 ) = 0;
               uVar36 = uVar36 + 1;
            }
 while ( uVar22 != uVar36 );
         }
 else {
            memset(__s, 0, uVar36);
            memset(__s_00, 0, uVar34);
         }

         goto LAB_0010c126;
      }

      iVar29 = *(int*)( param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_0010c2c8;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0010c132;
      LAB_0010c2ea:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         plVar25 = (long*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0010c69e;
      }

      _resize_and_rehash((HashMap<StringName,ShaderLanguage::ShaderNode::Uniform,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::ShaderNode::Uniform>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
 else {
      LAB_0010c126:iVar29 = *(int*)( param_2 + 0x2c );
      if (iVar29 != 0) {
         LAB_0010c132:uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         uVar36 = CONCAT44(0, uVar3);
         lVar26 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         if (*(long*)pSVar30 == 0) {
            uVar24 = StringName::get_empty_hash();
         }
 else {
            uVar24 = *(uint*)( *(long*)pSVar30 + 0x20 );
         }

         if (uVar24 == 0) {
            uVar24 = 1;
         }

         uVar35 = 0;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = (ulong)uVar24 * lVar26;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = uVar36;
         lVar31 = SUB168(auVar6 * auVar14, 8);
         uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar31 * 4 );
         uVar28 = SUB164(auVar6 * auVar14, 8);
         if (uVar33 != 0) {
            do {
               if (( uVar24 == uVar33 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 8 ) + lVar31 * 8 ) + 0x10 ) == *(long*)pSVar30 )) {
                  lVar31 = in_RCX[1];
                  lVar26 = *(long*)( *(long*)( param_2 + 8 ) + (ulong)uVar28 * 8 );
                  *(long*)( lVar26 + 0x18 ) = *in_RCX;
                  *(long*)( lVar26 + 0x20 ) = lVar31;
                  *(long*)( lVar26 + 0x28 ) = in_RCX[2];
                  *(int*)( lVar26 + 0x30 ) = (int)in_RCX[3];
                  if (*(long*)( lVar26 + 0x40 ) != in_RCX[5]) {
                     CowData<ShaderLanguage::Scalar>::_ref((CowData<ShaderLanguage::Scalar>*)( lVar26 + 0x40 ), (CowData*)( in_RCX + 5 ));
                  }

                  *(long*)( lVar26 + 0x48 ) = in_RCX[6];
                  *(char*)( lVar26 + 0x50 ) = (char)in_RCX[7];
                  *(undefined8*)( lVar26 + 0x54 ) = *(undefined8*)( (long)in_RCX + 0x3c );
                  lVar31 = 0;
                  do {
                     *(undefined4*)( lVar26 + 0x5c + lVar31 ) = *(undefined4*)( (long)in_RCX + lVar31 + 0x44 );
                     lVar31 = lVar31 + 4;
                  }
 while ( lVar31 != 0xc );
                  if (*(long*)( lVar26 + 0x70 ) != in_RCX[0xb]) {
                     CowData<String>::_ref((CowData<String>*)( lVar26 + 0x70 ), (CowData*)( in_RCX + 0xb ));
                  }

                  *(int*)( lVar26 + 0x78 ) = (int)in_RCX[0xc];
                  if (*(long*)( lVar26 + 0x80 ) != in_RCX[0xd]) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( lVar26 + 0x80 ), (CowData*)( in_RCX + 0xd ));
                  }

                  if (*(long*)( lVar26 + 0x88 ) != in_RCX[0xe]) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( lVar26 + 0x88 ), (CowData*)( in_RCX + 0xe ));
                  }

                  plVar25 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar28 * 8 );
                  goto LAB_0010c69e;
               }

               uVar35 = uVar35 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(uVar28 + 1) * lVar26;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar36;
               lVar31 = SUB168(auVar7 * auVar15, 8);
               uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar31 * 4 );
               uVar28 = SUB164(auVar7 * auVar15, 8);
            }
 while ( ( uVar33 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar33 * lVar26,auVar16._8_8_ = 0,auVar16._0_8_ = uVar36,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar3 + uVar28 ) - SUB164(auVar8 * auVar16, 8)) * lVar26,auVar17._8_8_ = 0,auVar17._0_8_ = uVar36,uVar35 <= SUB164(auVar9 * auVar17, 8) );
         }

         iVar29 = *(int*)( param_2 + 0x2c );
      }

      LAB_0010c2c8:if ((float)uVar23 * __LC39 < (float)( iVar29 + 1 )) goto LAB_0010c2ea;
   }

   StringName::StringName((StringName_conflict*)&local_c8, pSVar30);
   local_b0 = in_RCX[2];
   local_c0 = *in_RCX;
   lStack_b8 = in_RCX[1];
   local_98 = 0;
   local_a8 = (undefined4)in_RCX[3];
   if (in_RCX[5] != 0) {
      CowData<ShaderLanguage::Scalar>::_ref((CowData<ShaderLanguage::Scalar>*)&local_98, (CowData*)( in_RCX + 5 ));
   }

   local_90 = in_RCX[6];
   local_68 = 0;
   local_88 = (undefined1)in_RCX[7];
   local_84 = *(undefined8*)( (long)in_RCX + 0x3c );
   local_7c = *(undefined8*)( (long)in_RCX + 0x44 );
   local_74 = *(undefined4*)( (long)in_RCX + 0x4c );
   if (in_RCX[0xb] != 0) {
      CowData<String>::_ref((CowData<String>*)&local_68, (CowData*)( in_RCX + 0xb ));
   }

   local_60 = (undefined4)in_RCX[0xc];
   local_58 = 0;
   if (in_RCX[0xd] != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( in_RCX + 0xd ));
   }

   local_50[0] = 0;
   if (in_RCX[0xe] != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_50, (CowData*)( in_RCX + 0xe ));
   }

   plVar25 = (long*)operator_new(0x90, "");
   *plVar25 = 0;
   plVar25[1] = 0;
   StringName::StringName((StringName_conflict*)( plVar25 + 2 ), (StringName_conflict*)&local_c8);
   plVar25[8] = 0;
   plVar25[5] = local_b0;
   plVar25[3] = local_c0;
   plVar25[4] = lStack_b8;
   *(undefined4*)( plVar25 + 6 ) = local_a8;
   if (local_98 != 0) {
      CowData<ShaderLanguage::Scalar>::_ref((CowData<ShaderLanguage::Scalar>*)( plVar25 + 8 ), (CowData*)&local_98);
   }

   plVar25[0xe] = 0;
   plVar25[9] = local_90;
   *(undefined1*)( plVar25 + 10 ) = local_88;
   *(undefined8*)( (long)plVar25 + 0x54 ) = local_84;
   *(undefined8*)( (long)plVar25 + 0x5c ) = local_7c;
   *(undefined4*)( (long)plVar25 + 100 ) = local_74;
   if (local_68 != 0) {
      CowData<String>::_ref((CowData<String>*)( plVar25 + 0xe ), (CowData*)&local_68);
   }

   plVar25[0x10] = 0;
   *(undefined4*)( plVar25 + 0xf ) = local_60;
   if (local_58 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( plVar25 + 0x10 ), (CowData*)&local_58);
   }

   plVar25[0x11] = 0;
   if (( local_50[0] != 0 ) && ( CowData<char32_t>::_ref((CowData<char32_t>*)( plVar25 + 0x11 ), (CowData*)local_50),lVar26 = local_50[0],local_50[0] != 0 )) {
      LOCK();
      plVar1 = (long*)( local_50[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50[0] = 0;
         Memory::free_static((void*)( lVar26 + -0x10 ), false);
      }

   }

   lVar26 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar26 + -0x10 ), false);
      }

   }

   CowData<String>::_unref((CowData<String>*)&local_68);
   lVar26 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar26 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
      StringName::unref();
   }

   puVar4 = *(undefined8**)( param_2 + 0x20 );
   if (puVar4 == (undefined8*)0x0) {
      *(long**)( param_2 + 0x18 ) = plVar25;
      *(long**)( param_2 + 0x20 ) = plVar25;
      LAB_0010c5a1:lVar26 = *(long*)pSVar30;
      if (lVar26 != 0) goto LAB_0010c5ae;
      LAB_0010c6f4:uVar23 = StringName::get_empty_hash();
   }
 else {
      if (in_R8B == '\0') {
         *puVar4 = plVar25;
         plVar25[1] = (long)puVar4;
         *(long**)( param_2 + 0x20 ) = plVar25;
         goto LAB_0010c5a1;
      }

      lVar26 = *(long*)( param_2 + 0x18 );
      *(long**)( lVar26 + 8 ) = plVar25;
      *plVar25 = lVar26;
      lVar26 = *(long*)pSVar30;
      *(long**)( param_2 + 0x18 ) = plVar25;
      if (lVar26 == 0) goto LAB_0010c6f4;
      LAB_0010c5ae:uVar23 = *(uint*)( lVar26 + 0x20 );
   }

   lVar26 = *(long*)( param_2 + 0x10 );
   if (uVar23 == 0) {
      uVar23 = 1;
   }

   uVar36 = (ulong)uVar23;
   uVar33 = 0;
   lVar31 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar34 = CONCAT44(0, uVar3);
   auVar10._8_8_ = 0;
   auVar10._0_8_ = uVar36 * lVar31;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = uVar34;
   lVar32 = SUB168(auVar10 * auVar18, 8);
   lVar5 = *(long*)( param_2 + 8 );
   puVar2 = (uint*)( lVar26 + lVar32 * 4 );
   iVar29 = SUB164(auVar10 * auVar18, 8);
   uVar24 = *puVar2;
   plVar1 = plVar25;
   while (uVar24 != 0) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar24 * lVar31;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar34;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(( iVar29 + uVar3 ) - SUB164(auVar11 * auVar19, 8)) * lVar31;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar34;
      uVar23 = SUB164(auVar12 * auVar20, 8);
      plVar37 = plVar1;
      if (uVar23 < uVar33) {
         *puVar2 = (uint)uVar36;
         uVar36 = (ulong)uVar24;
         puVar4 = (undefined8*)( lVar5 + lVar32 * 8 );
         plVar37 = (long*)*puVar4;
         *puVar4 = plVar1;
         uVar33 = uVar23;
      }

      uVar23 = (uint)uVar36;
      uVar33 = uVar33 + 1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = ( ulong )(iVar29 + 1) * lVar31;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar34;
      lVar32 = SUB168(auVar13 * auVar21, 8);
      puVar2 = (uint*)( lVar26 + lVar32 * 4 );
      iVar29 = SUB164(auVar13 * auVar21, 8);
      plVar1 = plVar37;
      uVar24 = *puVar2;
   }
;
   *(long**)( lVar5 + lVar32 * 8 ) = plVar1;
   *puVar2 = uVar23;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_0010c69e:*(long**)param_1 = plVar25;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<RendererDummy::MaterialStorage::DummyShader, false>::~RID_Alloc() */void RID_Alloc<RendererDummy::MaterialStorage::DummyShader,false>::~RID_Alloc(RID_Alloc<RendererDummy::MaterialStorage::DummyShader,false> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ShaderCompiler::GeneratedCode::~GeneratedCode() */void ShaderCompiler::GeneratedCode::~GeneratedCode(GeneratedCode *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<RendererDummy::MaterialStorage::DummyMaterial, false>::~RID_Alloc() */void RID_Alloc<RendererDummy::MaterialStorage::DummyMaterial,false>::~RID_Alloc(RID_Alloc<RendererDummy::MaterialStorage::DummyMaterial,false> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ShaderCompiler::IdentifierActions::~IdentifierActions() */void ShaderCompiler::IdentifierActions::~IdentifierActions(IdentifierActions *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

