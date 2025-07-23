/* icu_76_godot::ResourceDataValue::getType() const */int icu_76_godot::ResourceDataValue::getType(ResourceDataValue *this) {
   return (int)(char)gPublicTypes[*(uint*)( this + 0x18 ) >> 0x1c];
}
/* icu_76_godot::ResourceDataValue::isNoInheritanceMarker() const */bool icu_76_godot::ResourceDataValue::isNoInheritanceMarker(ResourceDataValue *this) {
   int *piVar1;
   uint uVar2;
   long lVar3;
   uint uVar4;
   short *psVar5;
   bool bVar6;
   bool bVar7;
   uVar2 = *(uint*)( this + 0x18 );
   bVar6 = false;
   uVar4 = uVar2 & 0xfffffff;
   bVar7 = false;
   if (uVar4 != 0) {
      lVar3 = *(long*)( this + 8 );
      if (uVar2 < 0x10000000) {
         piVar1 = (int*)( *(long*)( lVar3 + 8 ) + (ulong)uVar2 * 4 );
         bVar7 = bVar6;
         if (( ( *piVar1 == 3 ) && ( (short)piVar1[1] == 0x2205 ) ) && ( *(short*)( (long)piVar1 + 6 ) == 0x2205 )) {
            bVar7 = (short)piVar1[2] == 0x2205;
         }

      }
 else if (uVar2 >> 0x1c == 6) {
         if ((int)uVar4 < *(int*)( lVar3 + 0x30 )) {
            psVar5 = (short*)( *(long*)( lVar3 + 0x28 ) + (ulong)uVar4 * 2 );
         }
 else {
            psVar5 = (short*)( *(long*)( lVar3 + 0x10 ) + ( ulong )(uVar4 - *(int*)( lVar3 + 0x30 )) * 2 );
         }

         bVar6 = false;
         bVar7 = bVar6;
         if (*psVar5 == 0x2205) {
            if (( psVar5[1] == 0x2205 ) && ( psVar5[2] == 0x2205 )) {
               bVar7 = psVar5[3] == 0;
            }

         }
 else {
            bVar7 = false;
            if (( ( *psVar5 == -0x23fd ) && ( psVar5[1] == 0x2205 ) ) && ( bVar7 = bVar6 ),psVar5[2] == 0x2205) {
               bVar7 = psVar5[3] == 0x2205;
            }

         }

      }

   }

   return bVar7;
}
/* isAcceptable(void*, char const*, char const*, UDataInfo const*) */undefined4 isAcceptable(void *param_1, char *param_2, char *param_3, UDataInfo *param_4) {
   *(undefined4*)param_1 = *(undefined4*)( param_4 + 0xc );
   if (( ( ( 0x13 < *(ushort*)param_4 ) && ( *(short*)( param_4 + 4 ) == 0 ) ) && ( param_4[6] == (UDataInfo)0x2 ) ) && ( ( *(short*)( param_4 + 8 ) == 0x6552 && ( *(short*)( param_4 + 10 ) == 0x4273 ) ) )) {
      return CONCAT31(( int3 )((byte)param_4[0xc] - 1 >> 8), ( byte )((byte)param_4[0xc] - 1) < 3);
   }

   return 0;
}
/* res_init(ResourceData*, unsigned char*, void const*, int, UErrorCode*) */void res_init(ResourceData *param_1, uchar *param_2, void *param_3, int param_4, UErrorCode *param_5) {
   uint uVar1;
   uint uVar2;
   long lVar3;
   uint uVar4;
   byte bVar5;
   /* WARNING: Load size is inaccurate */
   uVar1 = *param_3;
   *(void**)( param_1 + 8 ) = param_3;
   *(undefined2**)( param_1 + 0x10 ) = &gEmpty16;
   *(uint*)( param_1 + 0x20 ) = uVar1;
   if (-1 < param_4) {
      if (*param_2 == '\x01') {
         if (param_4 >> 2 < (int)( ( -(uint)(param_2[1] == '\0') & 0xfffffffb ) + 6 )) goto LAB_00100280;
      }
 else if (param_4 >> 2 < 6) goto LAB_00100280;
   }

   if (( 0x34UL >> ( uVar1 >> 0x1c ) & 1 ) != 0) {
      bVar5 = *param_2;
      if (( bVar5 == 1 ) && ( param_2[1] == '\0' )) {
         *(undefined4*)( param_1 + 0x24 ) = 0x10000;
         goto LAB_001002b1;
      }

      uVar1 = *(uint*)( (long)param_3 + 4 );
      uVar4 = uVar1 & 0xff;
      if (( 4 < uVar4 ) && ( ( param_4 < 0 || ( ( (int)( ( uVar4 + 1 ) * 4 ) <= param_4 && ( *(int*)( (long)param_3 + 0x10 ) * 4 <= param_4 ) ) ) ) )) {
         if ((int)( uVar4 + 1 ) < *(int*)( (long)param_3 + 8 )) {
            *(int*)( param_1 + 0x24 ) = *(int*)( (long)param_3 + 8 ) << 2;
            bVar5 = *param_2;
         }

         if (2 < bVar5) {
            *(uint*)( param_1 + 0x30 ) = *(uint*)( (long)param_3 + 4 ) >> 8;
         }

         if (uVar4 == 5) {
            if (( ( *(uint*)( param_1 + 0x38 ) & 0xffff00 ) == 0 ) || ( ( uVar1 & 0xf8 ) != 0 )) goto LAB_001002b1;
         }
 else {
            uVar2 = *(uint*)( (long)param_3 + 0x18 );
            param_1[0x38] = ( ResourceData )((byte)uVar2 & 1);
            param_1[0x39] = ( ResourceData )(( byte )(uVar2 >> 1) & 1);
            param_1[0x3a] = ( ResourceData )(( byte )(uVar2 >> 2) & 1);
            *(uint*)( param_1 + 0x34 ) = uVar2 >> 0x10;
            *(uint*)( param_1 + 0x30 ) = *(uint*)( param_1 + 0x30 ) | ( uVar2 & 0xf000 ) << 0xc;
            if (( ( *(uint*)( param_1 + 0x38 ) & 0xffff00 ) == 0 ) || ( ( uVar1 & 0xf8 ) != 0 )) {
               if (( uVar4 != 6 ) && ( *(int*)( (long)param_3 + 8 ) < *(int*)( (long)param_3 + 0x1c ) )) {
                  *(void**)( param_1 + 0x10 ) = (void*)( (long)param_3 + (long)*(int*)( (long)param_3 + 8 ) * 4 );
               }

               LAB_001002b1:param_1[0x3b] = (ResourceData)0x1;
               return;
            }

         }

      }

   }

   LAB_00100280:lVar3 = *(long*)param_1;
   *(undefined4*)param_5 = 3;
   if (lVar3 != 0) {
      udata_close_76_godot();
      *(undefined8*)param_1 = 0;
   }

   return;
}
/* icu_76_godot::ResourceDataValue::~ResourceDataValue() */void icu_76_godot::ResourceDataValue::~ResourceDataValue(ResourceDataValue *this) {
   *(undefined***)this = &PTR__ResourceDataValue_00102ad0;
   icu_76_godot::ResourceValue::~ResourceValue((ResourceValue*)this);
   return;
}
/* icu_76_godot::ResourceDataValue::~ResourceDataValue() */void icu_76_godot::ResourceDataValue::~ResourceDataValue(ResourceDataValue *this) {
   void *in_RSI;
   *(undefined***)this = &PTR__ResourceDataValue_00102ad0;
   icu_76_godot::ResourceValue::~ResourceValue((ResourceValue*)this);
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}
/* ures_compareRows(void const*, void const*, void const*) */void ures_compareRows(void *param_1, void *param_2, void *param_3) {
   /* WARNING: Load size is inaccurate */
   /* WARNING: Load size is inaccurate */
   strcmp((char*)( (long)param_1 + (long)*param_2 ), (char*)( (long)*param_3 + (long)param_1 ));
   return;
}
/* icu_76_godot::ResourceDataValue::getTable(UErrorCode&) const */void icu_76_godot::ResourceDataValue::getTable(UErrorCode *param_1) {
   ushort *puVar1;
   ushort uVar2;
   long lVar3;
   uint uVar4;
   int *in_RDX;
   ushort *puVar5;
   uint uVar6;
   long in_RSI;
   uint *puVar8;
   uint *puVar9;
   ushort *puVar10;
   ulong uVar7;
   if (0 < *in_RDX) {
      LAB_001004cd:*(undefined4*)( param_1 + 0x20 ) = 0;
      *(undefined1(*) [16])param_1 = (undefined1[16])0x0;
      *(undefined1(*) [16])( param_1 + 0x10 ) = (undefined1[16])0x0;
      return;
   }

   lVar3 = *(long*)( in_RSI + 8 );
   uVar4 = *(uint*)( in_RSI + 0x18 ) >> 0x1c;
   uVar6 = *(uint*)( in_RSI + 0x18 ) & 0xfffffff;
   uVar7 = (ulong)uVar6;
   if (uVar4 == 4) {
      if (uVar6 != 0) {
         puVar10 = (ushort*)0x0;
         puVar9 = (uint*)( *(long*)( lVar3 + 8 ) + uVar7 * 4 );
         puVar8 = puVar9 + 1;
         uVar4 = *puVar9;
         puVar9 = puVar8 + (int)uVar4;
         puVar5 = (ushort*)0x0;
         goto LAB_0010052b;
      }

   }
 else {
      if (uVar4 == 5) {
         puVar9 = (uint*)0x0;
         puVar10 = (ushort*)( *(long*)( lVar3 + 0x10 ) + uVar7 * 2 );
         puVar8 = (uint*)0x0;
         puVar5 = puVar10 + 1;
         uVar2 = *puVar10;
         uVar4 = (uint)uVar2;
         puVar10 = puVar5 + uVar2;
         goto LAB_0010052b;
      }

      if (uVar4 != 2) {
         *in_RDX = 0x11;
         goto LAB_001004cd;
      }

      if (uVar6 != 0) {
         puVar10 = (ushort*)0x0;
         puVar1 = (ushort*)( *(long*)( lVar3 + 8 ) + uVar7 * 4 );
         puVar5 = puVar1 + 1;
         uVar2 = *puVar1;
         uVar4 = (uint)uVar2;
         puVar9 = (uint*)( puVar5 + ( ulong )(~(uint)uVar2 & 1) + (ulong)uVar2 );
         puVar8 = (uint*)0x0;
         goto LAB_0010052b;
      }

   }

   uVar4 = 0;
   puVar9 = (uint*)0x0;
   puVar10 = (ushort*)0x0;
   puVar8 = (uint*)0x0;
   puVar5 = (ushort*)0x0;
   LAB_0010052b:*(ushort**)param_1 = puVar5;
   *(uint**)( param_1 + 8 ) = puVar8;
   *(ushort**)( param_1 + 0x10 ) = puVar10;
   *(uint**)( param_1 + 0x18 ) = puVar9;
   *(uint*)( param_1 + 0x20 ) = uVar4;
   return;
}
/* icu_76_godot::ResourceDataValue::getUInt(UErrorCode&) const */uint icu_76_godot::ResourceDataValue::getUInt(ResourceDataValue *this, UErrorCode *param_1) {
   uint uVar1;
   uVar1 = 0;
   if (*(int*)param_1 < 1) {
      uVar1 = *(uint*)( this + 0x18 );
      if (uVar1 >> 0x1c != 7) {
         *(undefined4*)param_1 = 0x11;
      }

      uVar1 = uVar1 & 0xfffffff;
   }

   return uVar1;
}
/* icu_76_godot::ResourceDataValue::getInt(UErrorCode&) const */int icu_76_godot::ResourceDataValue::getInt(ResourceDataValue *this, UErrorCode *param_1) {
   uint uVar1;
   int iVar2;
   iVar2 = 0;
   if (*(int*)param_1 < 1) {
      uVar1 = *(uint*)( this + 0x18 );
      if (uVar1 >> 0x1c != 7) {
         *(undefined4*)param_1 = 0x11;
      }

      iVar2 = (int)( uVar1 << 4 ) >> 4;
   }

   return iVar2;
}
/* ures_swapResource(UDataSwapper const*, unsigned int const*, unsigned int*, unsigned int, char
   const*, TempTable*, UErrorCode*) [clone .isra.0] */void ures_swapResource(UDataSwapper *param_1, uint *param_2, uint *param_3, uint param_4, char *param_5, TempTable *param_6, UErrorCode *param_7) {
   uint *puVar1;
   undefined4 *puVar2;
   int *piVar3;
   UErrorCode *pUVar4;
   uint uVar5;
   ushort uVar6;
   int iVar7;
   uint uVar8;
   undefined4 uVar9;
   code *UNRECOVERED_JUMPTABLE;
   UErrorCode *pUVar10;
   char *pcVar11;
   uint uVar12;
   UErrorCode *pUVar13;
   long lVar14;
   ulong uVar15;
   UErrorCode *pUVar16;
   long lVar17;
   long lVar18;
   UErrorCode *__dest;
   uint local_88;
   UErrorCode *local_78;
   UErrorCode *local_70;
   UErrorCode *local_68;
   UErrorCode *local_60;
   uVar8 = param_4 >> 0x1c;
   if ((int)param_4 < 0) {
      if (uVar8 == 9) {
         return;
      }

   }
 else if (4 < uVar8) {
      return;
   }

   uVar12 = param_4 & 0xfffffff;
   if (uVar12 == 0) {
      return;
   }

   puVar1 = (uint*)( *(long*)( param_5 + 0x18 ) + (long)( (int)uVar12 >> 5 ) * 4 );
   uVar5 = *puVar1;
   if (( uVar5 >> ( param_4 & 0x1f ) & 1 ) != 0) {
      return;
   }

   *puVar1 = uVar5 | 1 << ( param_4 & 0x1f );
   local_60 = (UErrorCode*)( param_3 + uVar12 );
   pUVar10 = (UErrorCode*)( param_2 + uVar12 );
   switch (uVar8) {
      case 0:
      case 3:
    iVar7 = udata_readInt32_76_godot(param_1,*(uint *)pUVar10);
    (**(code **)(param_1 + 0x38))(param_1,pUVar10,4,local_60,param_6);
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x30);
    local_60 = local_60 + 4;
    iVar7 = iVar7 * 2;
    pUVar10 = pUVar10 + 4;
    break;
      case 1:
    udata_readInt32_76_godot(param_1,*(uint *)pUVar10);
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x38);
    iVar7 = 4;
    break;
      case 2:
      case 4:
    local_88 = param_4 & 0xfffffff;
    if (uVar8 == 2) {
      uVar6 = (**(code **)(param_1 + 8))(*(undefined2 *)pUVar10);
      local_68 = local_60 + 2;
      uVar12 = (uint)uVar6;
      local_78 = pUVar10 + 2;
      (**(code **)(param_1 + 0x30))(param_1,pUVar10,2,local_60,param_6);
      local_60 = (UErrorCode *)0x0;
      local_70 = (UErrorCode *)0x0;
      iVar7 = ((int)(uVar12 + 2) >> 1) + local_88;
    }
    else {
      uVar12 = udata_readInt32_76_godot(param_1,*(uint *)pUVar10);
      local_70 = pUVar10 + 4;
      (**(code **)(param_1 + 0x38))(param_1,pUVar10,4,local_60,param_6);
      local_68 = (UErrorCode *)0x0;
      local_78 = (UErrorCode *)0x0;
      iVar7 = local_88 + 1 + uVar12;
      local_60 = local_60 + 4;
    }
    if (uVar12 == 0) {
      return;
    }
    uVar15 = 0;
    pUVar4 = (UErrorCode *)(param_2 + iVar7);
    if (0 < (int)uVar12) {
      do {
        if (local_78 == (UErrorCode *)0x0) {
          udata_readInt32_76_godot(param_1,*(undefined4 *)(local_70 + uVar15 * 4));
        }
        else {
          (**(code **)(param_1 + 8))(*(undefined2 *)(local_78 + uVar15 * 2));
        }
        uVar8 = (**(code **)(param_1 + 0x10))(*(undefined4 *)(pUVar4 + uVar15 * 4));
        pUVar10 = (UErrorCode *)param_2;
        ures_swapResource(param_1,param_2,param_3,uVar8,param_5,param_6,(UErrorCode *)param_3);
        if (0 < *(int *)param_6) {
          pcVar11 = "ures_swapResource(table res=%08x)[%d].recurse(%08x) failed\n";
LAB_00100a65:
          udata_printError_76_godot(param_1,pcVar11,param_4,uVar15 & 0xffffffff,uVar8);
          return;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != (long)(int)uVar12);
    }
    __dest = (UErrorCode *)(param_3 + iVar7);
    if ((1 < (byte)param_5[0x24]) || (param_1[1] == param_1[3])) {
      if (local_78 == (UErrorCode *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x38);
        iVar7 = uVar12 * 8;
        pUVar10 = local_70;
      }
      else {
        (**(code **)(param_1 + 0x30))(param_1,local_78,uVar12 * 2,local_68,param_6);
        UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x38);
        iVar7 = uVar12 * 4;
        local_60 = __dest;
        pUVar10 = pUVar4;
      }
      break;
    }
    if (local_78 == (UErrorCode *)0x0) {
      lVar18 = *(long *)(param_5 + 8);
      if (0 < (int)uVar12) {
        lVar14 = (long)(int)uVar12;
        lVar17 = 0;
        do {
          puVar2 = (undefined4 *)(lVar18 + lVar17 * 8);
          uVar9 = udata_readInt32_76_godot(param_1,*(undefined4 *)(local_70 + lVar17 * 4));
          lVar18 = *(long *)(param_5 + 8);
          *puVar2 = uVar9;
          *(int *)(lVar18 + 4 + lVar17 * 8) = (int)lVar17;
          lVar17 = lVar17 + 1;
        } while (lVar17 != lVar14);
        goto LAB_00100b20;
      }
      uprv_sortArray_76_godot
                (lVar18,uVar12,8,ures_compareRows,*(undefined8 *)param_5,0,param_6,pUVar10);
      if (0 < *(int *)param_6) goto LAB_00100d59;
      if ((local_70 != local_60) ||
         (pUVar10 = *(UErrorCode **)(param_5 + 0x10), local_60 == pUVar10)) goto LAB_00100ea7;
LAB_00100e10:
      memcpy(local_60,pUVar10,(long)(int)(uVar12 * 4));
    }
    else if ((int)uVar12 < 1) {
      uprv_sortArray_76_godot
                (*(undefined8 *)(param_5 + 8),uVar12,8,ures_compareRows,*(undefined8 *)param_5,0,
                 param_6,param_1[3]);
      if (0 < *(int *)param_6) goto LAB_00100d59;
      if ((local_78 != local_68) ||
         (pUVar10 = *(UErrorCode **)(param_5 + 0x10), local_68 == pUVar10)) {
LAB_00100ea7:
        if (pUVar4 != __dest) {
          return;
        }
        pUVar10 = *(UErrorCode **)(param_5 + 0x10);
        goto LAB_00100c93;
      }
LAB_00100be7:
      memcpy(local_68,pUVar10,(long)(int)(uVar12 * 2));
    }
    else {
      uVar15 = (ulong)uVar12;
      lVar14 = 0;
      do {
        uVar6 = (**(code **)(param_1 + 8))(*(undefined2 *)(local_78 + lVar14 * 2));
        lVar18 = *(long *)(param_5 + 8);
        puVar1 = (uint *)(lVar18 + lVar14 * 8);
        puVar1[1] = (uint)lVar14;
        lVar14 = lVar14 + 1;
        *puVar1 = (uint)uVar6;
      } while ((int)uVar12 != lVar14);
      uVar12 = (uint)uVar15;
LAB_00100b20:
      uprv_sortArray_76_godot(lVar18,uVar12,8,ures_compareRows,*(undefined8 *)param_5,0,param_6);
      if (0 < *(int *)param_6) {
LAB_00100d59:
        udata_printError_76_godot
                  (param_1,"ures_swapResource(table res=%08x).uprv_sortArray(%d items) failed\n",
                   param_4,uVar12);
        return;
      }
      if (local_78 == (UErrorCode *)0x0) {
        pUVar10 = local_60;
        if (local_70 == local_60) {
          pUVar10 = *(UErrorCode **)(param_5 + 0x10);
        }
        lVar18 = 0;
        pUVar13 = pUVar10;
        do {
          lVar14 = lVar18 * 8;
          lVar18 = lVar18 + 1;
          (**(code **)(param_1 + 0x38))
                    (param_1,local_70 + (long)*(int *)(*(long *)(param_5 + 8) + 4 + lVar14) * 4,4,
                     pUVar13,param_6);
          pUVar13 = pUVar13 + 4;
        } while ((int)lVar18 < (int)uVar12);
        if (local_60 != pUVar10) goto LAB_00100e10;
      }
      else {
        pUVar10 = local_68;
        if (local_78 == local_68) {
          pUVar10 = *(UErrorCode **)(param_5 + 0x10);
        }
        lVar18 = 0;
        pUVar13 = pUVar10;
        do {
          lVar14 = lVar18 * 8;
          lVar18 = lVar18 + 1;
          (**(code **)(param_1 + 0x30))
                    (param_1,local_78 + (long)*(int *)(*(long *)(param_5 + 8) + 4 + lVar14) * 2,2,
                     pUVar13,param_6);
          pUVar13 = pUVar13 + 2;
        } while ((int)lVar18 < (int)uVar12);
        if (local_68 != pUVar10) goto LAB_00100be7;
      }
    }
    if (pUVar4 == __dest) {
      pUVar10 = *(UErrorCode **)(param_5 + 0x10);
      if ((int)uVar12 < 1) goto LAB_00100c93;
    }
    else {
      pUVar10 = __dest;
      if ((int)uVar12 < 1) {
        return;
      }
    }
    lVar18 = 0;
    pUVar13 = pUVar10;
    do {
      pUVar16 = pUVar13 + 4;
      piVar3 = (int *)(*(long *)(param_5 + 8) + 4 + lVar18);
      lVar18 = lVar18 + 8;
      (**(code **)(param_1 + 0x38))(param_1,pUVar4 + (long)*piVar3 * 4,4,pUVar13,param_6);
      pUVar13 = pUVar16;
    } while (pUVar10 + (long)(int)uVar12 * 4 != pUVar16);
LAB_00100c93:
    if (__dest == pUVar10) {
      return;
    }
    memcpy(__dest,pUVar10,(long)(int)(uVar12 * 4));
    return;
      default:
    *(undefined4 *)param_6 = 0x10;
    return;
      case 8:
    iVar7 = udata_readInt32_76_godot(param_1,*(uint *)pUVar10);
    (**(code **)(param_1 + 0x38))(param_1,pUVar10,4,local_60,param_6);
    uVar15 = 0;
    if (0 < iVar7) {
      do {
        uVar8 = (**(code **)(param_1 + 0x10))(*(undefined4 *)(pUVar10 + uVar15 * 4 + 4));
        ures_swapResource(param_1,param_2,param_3,uVar8,param_5,param_6,local_60);
        if (0 < *(int *)param_6) {
          pcVar11 = "ures_swapResource(array res=%08x)[%d].recurse(%08x) failed\n";
          goto LAB_00100a65;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != (long)iVar7);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x38);
    iVar7 = iVar7 << 2;
    local_60 = local_60 + 4;
    pUVar10 = pUVar10 + 4;
    break;
      case 0xe:
    iVar7 = udata_readInt32_76_godot(param_1,*(uint *)pUVar10);
    iVar7 = iVar7 * 4 + 4;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x38);
   }

   /* WARNING: Could not recover jumptable at 0x001008b4. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *UNRECOVERED_JUMPTABLE )(param_1, pUVar10, iVar7, local_60, param_6);
   return;
}
/* icu_76_godot::ResourceDataValue::getAliasString(int&, UErrorCode&) const */int *__thiscallicu_76_godot::ResourceDataValue::getAliasString(ResourceDataValue *this, int *param_1, UErrorCode *param_2) {
   int *piVar1;
   uint uVar2;
   int iVar3;
   if (*(int*)param_2 < 1) {
      if (*(uint*)( this + 0x18 ) >> 0x1c == 3) {
         iVar3 = 0;
         piVar1 = (int*)&gEmptyString;
         uVar2 = *(uint*)( this + 0x18 ) & 0xfffffff;
         if (uVar2 != 0) {
            piVar1 = (int*)( *(long*)( *(long*)( this + 8 ) + 8 ) + (ulong)uVar2 * 4 );
            iVar3 = *piVar1;
         }

         *param_1 = iVar3;
         return piVar1 + 1;
      }

      *param_1 = 0;
      *(undefined4*)param_2 = 0x11;
   }

   return (int*)0x0;
}
/* icu_76_godot::ResourceDataValue::getIntVector(int&, UErrorCode&) const */int *__thiscallicu_76_godot::ResourceDataValue::getIntVector(ResourceDataValue *this, int *param_1, UErrorCode *param_2) {
   int *piVar1;
   uint uVar2;
   int iVar3;
   if (*(int*)param_2 < 1) {
      if (*(uint*)( this + 0x18 ) >> 0x1c == 0xe) {
         iVar3 = 0;
         piVar1 = (int*)&gEmpty32;
         uVar2 = *(uint*)( this + 0x18 ) & 0xfffffff;
         if (uVar2 != 0) {
            piVar1 = (int*)( *(long*)( *(long*)( this + 8 ) + 8 ) + (ulong)uVar2 * 4 );
            iVar3 = *piVar1;
         }

         *param_1 = iVar3;
         return piVar1 + 1;
      }

      *param_1 = 0;
      *(undefined4*)param_2 = 0x11;
   }

   return (int*)0x0;
}
/* icu_76_godot::ResourceDataValue::getBinary(int&, UErrorCode&) const */int *__thiscallicu_76_godot::ResourceDataValue::getBinary(ResourceDataValue *this, int *param_1, UErrorCode *param_2) {
   int *piVar1;
   uint uVar2;
   int iVar3;
   if (*(int*)param_2 < 1) {
      if (*(uint*)( this + 0x18 ) >> 0x1c == 1) {
         iVar3 = 0;
         piVar1 = (int*)&gEmpty32;
         uVar2 = *(uint*)( this + 0x18 ) & 0xfffffff;
         if (uVar2 != 0) {
            piVar1 = (int*)( *(long*)( *(long*)( this + 8 ) + 8 ) + (ulong)uVar2 * 4 );
            iVar3 = *piVar1;
         }

         *param_1 = iVar3;
         return piVar1 + 1;
      }

      *param_1 = 0;
      *(undefined4*)param_2 = 0x11;
   }

   return (int*)0x0;
}
/* icu_76_godot::ResourceDataValue::getArray(UErrorCode&) const */void icu_76_godot::ResourceDataValue::getArray(UErrorCode *param_1) {
   ushort *puVar1;
   uint *puVar2;
   uint uVar3;
   uint *puVar4;
   int *in_RDX;
   uint uVar5;
   long in_RSI;
   ushort *puVar6;
   if (0 < *in_RDX) {
      *(undefined4*)( param_1 + 0x10 ) = 0;
      *(undefined1(*) [16])param_1 = (undefined1[16])0x0;
      return;
   }

   uVar3 = *(uint*)( in_RSI + 0x18 ) >> 0x1c;
   uVar5 = *(uint*)( in_RSI + 0x18 ) & 0xfffffff;
   if (uVar3 == 8) {
      if (uVar5 == 0) {
         uVar3 = 0;
         puVar4 = (uint*)0x0;
         puVar6 = (ushort*)0x0;
      }
 else {
         puVar2 = (uint*)( *(long*)( *(long*)( in_RSI + 8 ) + 8 ) + (ulong)uVar5 * 4 );
         puVar6 = (ushort*)0x0;
         puVar4 = puVar2 + 1;
         uVar3 = *puVar2;
      }

   }
 else {
      if (uVar3 != 9) {
         *in_RDX = 0x11;
         *(undefined4*)( param_1 + 0x10 ) = 0;
         *(undefined1(*) [16])param_1 = (undefined1[16])0x0;
         return;
      }

      puVar4 = (uint*)0x0;
      puVar1 = (ushort*)( *(long*)( *(long*)( in_RSI + 8 ) + 0x10 ) + (ulong)uVar5 * 2 );
      puVar6 = puVar1 + 1;
      uVar3 = ( uint ) * puVar1;
   }

   *(ushort**)param_1 = puVar6;
   *(uint**)( param_1 + 8 ) = puVar4;
   *(uint*)( param_1 + 0x10 ) = uVar3;
   return;
}
void res_read_76_godot(ResourceData *param_1, UDataInfo *param_2, void *param_3, int param_4, UErrorCode *param_5) {
   char cVar1;
   uchar *puVar2;
   long in_FS_OFFSET;
   uchar local_14[4];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])param_1 = (undefined1[16])0x0;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( param_1 + ( 16*i + 16 ) ) = (undefined1[16])0;
   }

   if (*(int*)param_5 < 1) {
      puVar2 = local_14;
      cVar1 = isAcceptable(puVar2, (char*)0x0, (char*)0x0, param_2);
      if (cVar1 == '\0') {
         *(undefined4*)param_5 = 3;
      }
 else {
         res_init(param_1, puVar2, param_3, param_4, param_5);
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void res_load_76_godot(ResourceData *param_1, undefined8 param_2, undefined8 param_3, UErrorCode *param_4) {
   int iVar1;
   undefined8 uVar2;
   void *pvVar3;
   long in_FS_OFFSET;
   uchar local_24[4];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])param_1 = (undefined1[16])0x0;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( param_1 + ( 16*i + 16 ) ) = (undefined1[16])0;
   }

   uVar2 = udata_openChoice_76_godot(param_2, &_LC3, param_3, isAcceptable, local_24, param_4);
   iVar1 = *(int*)param_4;
   *(undefined8*)param_1 = uVar2;
   if (iVar1 < 1) {
      pvVar3 = (void*)udata_getMemory_76_godot(uVar2);
      res_init(param_1, local_24, pvVar3, -1, param_4);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void res_unload_76_godot(long *param_1) {
   if (*param_1 != 0) {
      udata_close_76_godot();
      *param_1 = 0;
   }

   return;
}
int res_getPublicType_76_godot(uint param_1) {
   return (int)(char)gPublicTypes[param_1 >> 0x1c];
}
uint *res_getStringNoTrace_76_godot(long param_1, uint param_2, uint *param_3) {
   ushort *puVar1;
   uint *puVar2;
   ushort uVar3;
   uint uVar4;
   uint *puVar5;
   if (param_2 >> 0x1c == 6) {
      param_2 = param_2 & 0xfffffff;
      if ((int)param_2 < *(int*)( param_1 + 0x30 )) {
         puVar5 = (uint*)( *(long*)( param_1 + 0x28 ) + (ulong)param_2 * 2 );
      }
 else {
         puVar5 = (uint*)( *(long*)( param_1 + 0x10 ) + ( ulong )(param_2 - *(int*)( param_1 + 0x30 )) * 2 );
      }

      uVar3 = ( ushort ) * puVar5;
      if (( uVar3 & 0xfc00 ) == 0xdc00) {
         if (uVar3 < 0xdfef) {
            uVar4 = uVar3 & 0x3ff;
            puVar5 = (uint*)( (long)puVar5 + 2 );
         }
 else {
            puVar1 = (ushort*)( (long)puVar5 + 2 );
            if (uVar3 == 0xdfff) {
               puVar2 = puVar5 + 1;
               puVar5 = (uint*)( (long)puVar5 + 6 );
               uVar4 = CONCAT22(*puVar1, ( ushort ) * puVar2);
            }
 else {
               puVar5 = puVar5 + 1;
               uVar4 = ( uVar3 - 0xdfef ) * 0x10000 | ( uint ) * puVar1;
            }

         }

      }
 else {
         uVar4 = u_strlen_76_godot(puVar5);
      }

   }
 else {
      uVar4 = 0;
      puVar5 = (uint*)0x0;
      if (param_2 < 0x10000000) {
         puVar5 = (uint*)&gEmptyString;
         if (param_2 != 0) {
            puVar5 = (uint*)( *(long*)( param_1 + 8 ) + (ulong)param_2 * 4 );
            uVar4 = *puVar5;
         }

         puVar5 = puVar5 + 1;
      }

   }

   if (param_3 != (uint*)0x0) {
      *param_3 = uVar4;
   }

   return puVar5;
}
/* (anonymous namespace)::getStringArray(ResourceData const*, icu_76_godot::ResourceArray const&,
   icu_76_godot::UnicodeString*, int, UErrorCode&) */int (anonymous_namespace)::getStringArray(ResourceData *param_1, ResourceArray *param_2, UnicodeString *param_3, int param_4, UErrorCode *param_5) {
   ushort uVar1;
   long lVar2;
   uint uVar3;
   long lVar4;
   int iVar5;
   long in_FS_OFFSET;
   undefined4 local_4c;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)param_5 < 1) {
      if (param_3 == (UnicodeString*)0x0) {
         if (param_4 != 0) goto LAB_00101448;
      }
 else if (param_4 < 0) {
         LAB_00101448:*(undefined4*)param_5 = 1;
         goto LAB_0010144f;
      }

      iVar5 = *(int*)( param_2 + 0x10 );
      if (iVar5 != 0) {
         if (param_4 < iVar5) {
            *(undefined4*)param_5 = 0xf;
         }
 else if (0 < iVar5) {
            lVar4 = 0;
            do {
               if (*(long*)param_2 == 0) {
                  uVar3 = *(uint*)( *(long*)( param_2 + 8 ) + lVar4 * 2 );
               }
 else {
                  uVar1 = *(ushort*)( *(long*)param_2 + lVar4 );
                  uVar3 = (uint)uVar1;
                  if (*(int*)( param_1 + 0x34 ) <= (int)(uint)uVar1) {
                     uVar3 = ( (uint)uVar1 - *(int*)( param_1 + 0x34 ) ) + *(int*)( param_1 + 0x30 );
                  }

                  uVar3 = uVar3 | 0x60000000;
               }

               lVar2 = res_getStringNoTrace_76_godot(param_1, uVar3, &local_4c);
               if (lVar2 == 0) {
                  *(undefined4*)param_5 = 0x11;
                  goto LAB_0010144f;
               }

               local_48 = lVar2;
               icu_76_godot::UnicodeString::setTo(param_3, 1, &local_48, local_4c);
               lVar4 = lVar4 + 2;
               param_3 = param_3 + 0x40;
            }
 while ( lVar4 != (long)iVar5 * 2 );
         }

         goto LAB_00101452;
      }

   }

   LAB_0010144f:iVar5 = 0;
   LAB_00101452:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::ResourceDataValue::getStringArray(icu_76_godot::UnicodeString*, int, UErrorCode&)
   const */void icu_76_godot::ResourceDataValue::getStringArray(ResourceDataValue *this, UnicodeString *param_1, int param_2, UErrorCode *param_3) {
   ushort *puVar1;
   uint *puVar2;
   uint uVar3;
   uint uVar4;
   ResourceData *pRVar5;
   long in_FS_OFFSET;
   undefined1 local_48[16];
   uint local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *(long*)this + 0x50 ) != getArray) {
      ( **(code**)( *(long*)this + 0x50 ) )(local_48, this, param_3);
      pRVar5 = *(ResourceData**)( this + 8 );
      goto LAB_001014ff;
   }

   pRVar5 = *(ResourceData**)( this + 8 );
   if (*(int*)param_3 < 1) {
      uVar3 = *(uint*)( this + 0x18 ) >> 0x1c;
      uVar4 = *(uint*)( this + 0x18 ) & 0xfffffff;
      if (uVar3 == 8) {
         if (uVar4 == 0) {
            local_38 = 0;
            local_48._8_8_ = (uint*)0x0;
            local_48._0_8_ = (ushort*)0x0;
         }
 else {
            local_48._0_8_ = (ushort*)0x0;
            puVar2 = (uint*)( *(long*)( pRVar5 + 8 ) + (ulong)uVar4 * 4 );
            local_48._8_8_ = puVar2 + 1;
            local_38 = *puVar2;
         }

      }
 else {
         if (uVar3 != 9) {
            *(undefined4*)param_3 = 0x11;
            goto LAB_001014e9;
         }

         puVar1 = (ushort*)( *(long*)( pRVar5 + 0x10 ) + (ulong)uVar4 * 2 );
         local_48._8_8_ = (uint*)0x0;
         local_48._0_8_ = puVar1 + 1;
         local_38 = ( uint ) * puVar1;
      }

   }
 else {
      LAB_001014e9:local_38 = 0;
      local_48 = (undefined1[16])0x0;
   }

   LAB_001014ff:(anonymous_namespace)::getStringArray(pRVar5, (ResourceArray*)local_48, param_1, param_2, param_3);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::ResourceDataValue::getStringArrayOrStringAsArray(icu_76_godot::UnicodeString*, int,
   UErrorCode&) const */undefined8 icu_76_godot::ResourceDataValue::getStringArrayOrStringAsArray(ResourceDataValue *this, UnicodeString *param_1, int param_2, UErrorCode *param_3) {
   long lVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined4 local_4c;
   long local_48[3];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x18 ) - 8U < 2) {
      ( **(code**)( *(long*)this + 0x50 ) )((ResourceArray*)local_48, this, param_3);
      uVar2 = (anonymous_namespace)::getStringArray(*(ResourceData**)( this + 8 ), (ResourceArray*)local_48, param_1, param_2, param_3);
      goto LAB_00101671;
   }

   if (0 < *(int*)param_3) {
      LAB_0010163e:uVar2 = 0;
      goto LAB_00101671;
   }

   if (param_1 == (UnicodeString*)0x0) {
      if (param_2 != 0) goto LAB_00101690;
      LAB_001016a4:*(undefined4*)param_3 = 0xf;
   }
 else {
      if (param_2 < 0) {
         LAB_00101690:*(undefined4*)param_3 = 1;
         uVar2 = 0;
         goto LAB_00101671;
      }

      if (param_2 == 0) goto LAB_001016a4;
      lVar1 = res_getStringNoTrace_76_godot(*(undefined8*)( this + 8 ), *(int*)( this + 0x18 ), &local_4c);
      if (lVar1 == 0) {
         *(undefined4*)param_3 = 0x11;
         goto LAB_0010163e;
      }

      local_48[0] = lVar1;
      icu_76_godot::UnicodeString::setTo(param_1, 1, local_48, local_4c);
   }

   uVar2 = 1;
   LAB_00101671:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::ResourceDataValue::getStringOrFirstOfArray(UErrorCode&) const */UErrorCode *icu_76_godot::ResourceDataValue::getStringOrFirstOfArray(UErrorCode *param_1) {
   ushort uVar1;
   ushort *puVar2;
   long lVar3;
   int *in_RDX;
   uint uVar4;
   long *in_RSI;
   long in_FS_OFFSET;
   undefined4 local_54;
   long local_50;
   ushort *local_48;
   uint *local_40;
   int local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined2*)( param_1 + 8 ) = 2;
   *(code**)param_1 = strchr;
   if (*in_RDX < 1) {
      puVar2 = (ushort*)res_getStringNoTrace_76_godot(in_RSI[1], (int)in_RSI[3], &local_54);
      if (puVar2 == (ushort*)0x0) {
         ( **(code**)( *in_RSI + 0x50 ) )(&local_48);
         if (*in_RDX < 1) {
            if (0 < local_38) {
               lVar3 = in_RSI[1];
               if (local_48 == (ushort*)0x0) {
                  uVar4 = *local_40;
               }
 else {
                  uVar1 = *local_48;
                  uVar4 = (uint)uVar1;
                  if (*(int*)( lVar3 + 0x34 ) <= (int)(uint)uVar1) {
                     uVar4 = ( (uint)uVar1 - *(int*)( lVar3 + 0x34 ) ) + *(int*)( lVar3 + 0x30 );
                  }

                  uVar4 = uVar4 | 0x60000000;
               }

               lVar3 = res_getStringNoTrace_76_godot(lVar3, uVar4, &local_54);
               if (lVar3 != 0) {
                  local_50 = lVar3;
                  icu_76_godot::UnicodeString::setTo(param_1, 1, &local_50, local_54);
                  goto LAB_00101718;
               }

            }

            *in_RDX = 0x11;
         }

      }
 else {
         local_48 = puVar2;
         icu_76_godot::UnicodeString::setTo(param_1, 1, &local_48, local_54);
      }

   }

   LAB_00101718:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::ResourceDataValue::getString(int&, UErrorCode&) const */long icu_76_godot::ResourceDataValue::getString(ResourceDataValue *this, int *param_1, UErrorCode *param_2) {
   long lVar1;
   if (0 < *(int*)param_2) {
      return 0;
   }

   lVar1 = res_getStringNoTrace_76_godot(*(undefined8*)( this + 8 ), *(undefined4*)( this + 0x18 ), param_1);
   if (lVar1 != 0) {
      return lVar1;
   }

   *(undefined4*)param_2 = 0x11;
   return 0;
}
long res_getAlias_76_godot(long param_1, uint param_2, undefined4 *param_3) {
   undefined8 *puVar1;
   long lVar2;
   undefined4 uVar3;
   uVar3 = 0;
   if (param_2 >> 0x1c == 3) {
      puVar1 = &gEmptyString;
      uVar3 = 0;
      if (( param_2 & 0xfffffff ) != 0) {
         puVar1 = (undefined8*)( *(long*)( param_1 + 8 ) + ( ulong )(param_2 & 0xfffffff) * 4 );
         uVar3 = *(undefined4*)puVar1;
      }

      lVar2 = (long)puVar1 + 4;
   }
 else {
      lVar2 = 0;
   }

   if (param_3 != (undefined4*)0x0) {
      *param_3 = uVar3;
   }

   return lVar2;
}
long res_getBinaryNoTrace_76_godot(long param_1, uint param_2, undefined4 *param_3) {
   undefined8 *puVar1;
   long lVar2;
   undefined4 uVar3;
   uVar3 = 0;
   if (param_2 >> 0x1c == 1) {
      puVar1 = &gEmpty32;
      uVar3 = 0;
      if (( param_2 & 0xfffffff ) != 0) {
         puVar1 = (undefined8*)( *(long*)( param_1 + 8 ) + ( ulong )(param_2 & 0xfffffff) * 4 );
         uVar3 = *(undefined4*)puVar1;
      }

      lVar2 = (long)puVar1 + 4;
   }
 else {
      lVar2 = 0;
   }

   if (param_3 != (undefined4*)0x0) {
      *param_3 = uVar3;
   }

   return lVar2;
}
long res_getIntVectorNoTrace_76_godot(long param_1, uint param_2, undefined4 *param_3) {
   undefined8 *puVar1;
   long lVar2;
   undefined4 uVar3;
   uVar3 = 0;
   if (param_2 >> 0x1c == 0xe) {
      puVar1 = &gEmpty32;
      uVar3 = 0;
      if (( param_2 & 0xfffffff ) != 0) {
         puVar1 = (undefined8*)( *(long*)( param_1 + 8 ) + ( ulong )(param_2 & 0xfffffff) * 4 );
         uVar3 = *(undefined4*)puVar1;
      }

      lVar2 = (long)puVar1 + 4;
   }
 else {
      lVar2 = 0;
   }

   if (param_3 != (undefined4*)0x0) {
      *param_3 = uVar3;
   }

   return lVar2;
}
uint res_countArrayItems_76_godot(long param_1, uint param_2) {
   ulong uVar1;
   uint uVar2;
   uint uVar3;
   ulong uVar4;
   uVar2 = param_2 >> 0x1c;
   uVar3 = param_2 & 0xfffffff;
   uVar4 = (ulong)uVar3;
   if (uVar2 != 0xf) {
      if (uVar2 < 3) {
         if (uVar2 != 2) {
            return 1;
         }

         if (uVar3 != 0) {
            return ( uint ) * (ushort*)( *(long*)( param_1 + 8 ) + uVar4 * 4 );
         }

      }
 else {
         uVar1 = 1L << ( byte )(param_2 >> 0x1c);
         if (( uVar1 & 0x40c8 ) != 0) {
            return 1;
         }

         if (( uVar1 & 0x220 ) != 0) {
            return ( uint ) * (ushort*)( *(long*)( param_1 + 0x10 ) + uVar4 * 2 );
         }

         if (( ( uVar1 & 0x110 ) != 0 ) && ( uVar3 != 0 )) {
            return *(uint*)( *(long*)( param_1 + 8 ) + uVar4 * 4 );
         }

      }

   }

   return 0;
}
uint res_getTableItemByKey_76_godot(ResourceData *param_1, uint param_2, int *param_3, char **param_4) {
   ushort *puVar1;
   int *piVar2;
   ushort uVar3;
   char *pcVar4;
   uint uVar5;
   int iVar6;
   int iVar7;
   ulong uVar8;
   uVar5 = param_2 & 0xfffffff;
   uVar8 = (ulong)uVar5;
   if (( param_4 != (char**)0x0 ) && ( pcVar4 = *param_4 ),pcVar4 != (char*)0x0) {
      param_2 = param_2 >> 0x1c;
      if (param_2 == 4) {
         if (uVar5 != 0) {
            piVar2 = (int*)( *(long*)( param_1 + 8 ) + uVar8 * 4 );
            iVar6 = *piVar2;
            piVar2 = piVar2 + 1;
            iVar7 = _res_findTable32Item(param_1, piVar2, iVar6, pcVar4, param_4);
            *param_3 = iVar7;
            if (-1 < iVar7) {
               return piVar2[iVar6 + iVar7];
            }

         }

      }
 else if (param_2 == 5) {
         puVar1 = (ushort*)( *(long*)( param_1 + 0x10 ) + uVar8 * 2 );
         uVar3 = *puVar1;
         puVar1 = puVar1 + 1;
         iVar6 = _res_findTableItem(param_1, puVar1, (uint)uVar3, pcVar4, param_4);
         *param_3 = iVar6;
         if (-1 < iVar6) {
            uVar3 = puVar1[(int)( (uint)uVar3 + iVar6 )];
            uVar5 = (uint)uVar3;
            if (*(int*)( param_1 + 0x34 ) <= (int)(uint)uVar3) {
               uVar5 = ( (uint)uVar3 - *(int*)( param_1 + 0x34 ) ) + *(int*)( param_1 + 0x30 );
            }

            return uVar5 | 0x60000000;
         }

      }
 else if (( param_2 == 2 ) && ( uVar5 != 0 )) {
         puVar1 = (ushort*)( *(long*)( param_1 + 8 ) + uVar8 * 4 );
         uVar3 = *puVar1;
         puVar1 = puVar1 + 1;
         iVar6 = _res_findTableItem(param_1, puVar1, (uint)uVar3, pcVar4, param_4);
         *param_3 = iVar6;
         if (-1 < iVar6) {
            return *(uint*)( puVar1 + ( ulong )(~(uint)uVar3 & 1) + (ulong)uVar3 + (long)iVar6 * 2 );
         }

      }

      return 0xffffffff;
   }

   return 0xffffffff;
}
uint res_getTableItemByIndex_76_godot(long param_1, uint param_2, int param_3, long *param_4) {
   ushort *puVar1;
   int *piVar2;
   ushort uVar3;
   ushort uVar4;
   int iVar5;
   uint uVar6;
   long lVar8;
   uint uVar9;
   ulong uVar7;
   uVar6 = param_2 & 0xfffffff;
   uVar7 = (ulong)uVar6;
   if (param_3 < 0) {
      return 0xffffffff;
   }

   param_2 = param_2 >> 0x1c;
   if (param_2 == 4) {
      uVar9 = 0xffffffff;
      if (uVar6 != 0) {
         piVar2 = (int*)( *(long*)( param_1 + 8 ) + uVar7 * 4 );
         iVar5 = *piVar2;
         if (param_3 < iVar5) {
            if (param_4 != (long*)0x0) {
               uVar6 = piVar2[(long)param_3 + 1];
               if ((int)uVar6 < 0) {
                  lVar8 = ( ulong )(uVar6 & 0x7fffffff) + *(long*)( param_1 + 0x18 );
               }
 else {
                  lVar8 = (long)(int)uVar6 + *(long*)( param_1 + 8 );
               }

               *param_4 = lVar8;
            }

            uVar9 = piVar2[(long)( param_3 + iVar5 ) + 1];
         }

      }

   }
 else if (param_2 == 5) {
      puVar1 = (ushort*)( *(long*)( param_1 + 0x10 ) + uVar7 * 2 );
      uVar9 = 0xffffffff;
      uVar3 = *puVar1;
      if (param_3 < (int)(uint)uVar3) {
         if (param_4 != (long*)0x0) {
            uVar4 = puVar1[(long)param_3 + 1];
            if ((int)(uint)uVar4 < *(int*)( param_1 + 0x24 )) {
               lVar8 = (ulong)uVar4 + *(long*)( param_1 + 8 );
            }
 else {
               lVar8 = ( (ulong)uVar4 - (long)*(int*)( param_1 + 0x24 ) ) + *(long*)( param_1 + 0x18 );
            }

            *param_4 = lVar8;
         }

         uVar3 = puVar1[(long)(int)( (uint)uVar3 + param_3 ) + 1];
         uVar6 = (uint)uVar3;
         if (*(int*)( param_1 + 0x34 ) <= (int)(uint)uVar3) {
            uVar6 = ( (uint)uVar3 - *(int*)( param_1 + 0x34 ) ) + *(int*)( param_1 + 0x30 );
         }

         return uVar6 | 0x60000000;
      }

   }
 else {
      uVar9 = 0xffffffff;
      if (( param_2 == 2 ) && ( uVar6 != 0 )) {
         puVar1 = (ushort*)( *(long*)( param_1 + 8 ) + uVar7 * 4 );
         uVar3 = *puVar1;
         if (param_3 < (int)(uint)uVar3) {
            if (param_4 != (long*)0x0) {
               uVar4 = puVar1[(long)param_3 + 1];
               if ((int)(uint)uVar4 < *(int*)( param_1 + 0x24 )) {
                  lVar8 = (ulong)uVar4 + *(long*)( param_1 + 8 );
               }
 else {
                  lVar8 = ( (ulong)uVar4 - (long)*(int*)( param_1 + 0x24 ) ) + *(long*)( param_1 + 0x18 );
               }

               *param_4 = lVar8;
            }

            uVar9 = *(uint*)( puVar1 + (long)param_3 * 2 + ( ulong )(~(uint)uVar3 & 1) + (ulong)uVar3 + 1 );
         }

      }

   }

   return uVar9;
}
void res_getResource_76_godot(long param_1, undefined8 param_2) {
   long in_FS_OFFSET;
   undefined1 local_1c[4];
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = param_2;
   res_getTableItemByKey_76_godot(param_1, *(undefined4*)( param_1 + 0x20 ), local_1c, &local_18);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::ResourceTable::getKeyAndValue(int, char const*&, icu_76_godot::ResourceValue&)
   const */undefined8 icu_76_godot::ResourceTable::getKeyAndValue(ResourceTable *this, int param_1, char **param_2, ResourceValue *param_3) {
   ushort uVar1;
   long lVar2;
   uint uVar3;
   char *pcVar4;
   ulong uVar5;
   long lVar6;
   if (( param_1 < 0 ) || ( *(int*)( this + 0x20 ) <= param_1 )) {
      return 0;
   }

   lVar2 = *(long*)( param_3 + 8 );
   lVar6 = (long)param_1;
   if (*(long*)this == 0) {
      uVar3 = *(uint*)( *(long*)( this + 8 ) + lVar6 * 4 );
      uVar5 = (ulong)(int)uVar3;
      if ((int)uVar3 < 0) {
         pcVar4 = (char*)( ( ulong )(uVar3 & 0x7fffffff) + *(long*)( lVar2 + 0x18 ) );
         goto LAB_00101d53;
      }

   }
 else {
      uVar1 = *(ushort*)( *(long*)this + lVar6 * 2 );
      uVar5 = (ulong)uVar1;
      if (*(int*)( lVar2 + 0x24 ) <= (int)(uint)uVar1) {
         pcVar4 = (char*)( ( uVar5 - (long)*(int*)( lVar2 + 0x24 ) ) + *(long*)( lVar2 + 0x18 ) );
         goto LAB_00101d53;
      }

   }

   pcVar4 = (char*)( uVar5 + *(long*)( lVar2 + 8 ) );
   LAB_00101d53:*param_2 = pcVar4;
   if (*(long*)( this + 0x10 ) == 0) {
      uVar3 = *(uint*)( *(long*)( this + 0x18 ) + lVar6 * 4 );
   }
 else {
      uVar1 = *(ushort*)( *(long*)( this + 0x10 ) + lVar6 * 2 );
      uVar3 = (uint)uVar1;
      if (*(int*)( lVar2 + 0x34 ) <= (int)(uint)uVar1) {
         uVar3 = ( (uint)uVar1 - *(int*)( lVar2 + 0x34 ) ) + *(int*)( lVar2 + 0x30 );
      }

      uVar3 = uVar3 | 0x60000000;
   }

   *(uint*)( param_3 + 0x18 ) = uVar3;
   return 1;
}
/* icu_76_godot::ResourceTable::findValue(char const*, icu_76_godot::ResourceValue&) const */undefined8 icu_76_godot::ResourceTable::findValue(ResourceTable *this, char *param_1, ResourceValue *param_2) {
   ushort uVar1;
   ResourceData *pRVar2;
   int iVar3;
   uint uVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   char *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pRVar2 = *(ResourceData**)( param_2 + 8 );
   local_28 = (char*)0x0;
   if (*(ushort**)this == (ushort*)0x0) {
      iVar3 = _res_findTable32Item(pRVar2, *(int**)( this + 8 ), *(int*)( this + 0x20 ), param_1, &local_28);
   }
 else {
      iVar3 = _res_findTableItem(pRVar2, *(ushort**)this, *(int*)( this + 0x20 ), param_1, &local_28);
   }

   uVar5 = 0;
   if (-1 < iVar3) {
      if (*(long*)( this + 0x10 ) == 0) {
         uVar4 = *(uint*)( *(long*)( this + 0x18 ) + (long)iVar3 * 4 );
      }
 else {
         uVar1 = *(ushort*)( *(long*)( this + 0x10 ) + (long)iVar3 * 2 );
         uVar4 = (uint)uVar1;
         if (*(int*)( pRVar2 + 0x34 ) <= (int)(uint)uVar1) {
            uVar4 = ( (uint)uVar1 - *(int*)( pRVar2 + 0x34 ) ) + *(int*)( pRVar2 + 0x30 );
         }

         uVar4 = uVar4 | 0x60000000;
      }

      *(uint*)( param_2 + 0x18 ) = uVar4;
      uVar5 = 1;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
uint res_getArrayItem_76_godot(long param_1, uint param_2, int param_3) {
   ushort *puVar1;
   int *piVar2;
   ushort uVar3;
   uint uVar4;
   uVar4 = param_2 & 0xfffffff;
   if (-1 < param_3) {
      if (param_2 >> 0x1c == 8) {
         if (( uVar4 != 0 ) && ( piVar2 = (int*)( *(long*)( param_1 + 8 ) + (ulong)uVar4 * 4 ) ),param_3 < *piVar2) {
            return piVar2[param_3 + 1];
         }

      }
 else if (( param_2 >> 0x1c == 9 ) && ( puVar1 = (ushort*)( *(long*)( param_1 + 0x10 ) + (ulong)uVar4 * 2 ) ),param_3 < (int)( uint ) * puVar1) {
         uVar3 = puVar1[param_3 + 1];
         uVar4 = (uint)uVar3;
         if (*(int*)( param_1 + 0x34 ) <= (int)(uint)uVar3) {
            uVar4 = ( (uint)uVar3 - *(int*)( param_1 + 0x34 ) ) + *(int*)( param_1 + 0x30 );
         }

         return uVar4 | 0x60000000;
      }

   }

   return 0xffffffff;
}
/* icu_76_godot::ResourceArray::internalGetResource(ResourceData const*, int) const */uint icu_76_godot::ResourceArray::internalGetResource(ResourceArray *this, ResourceData *param_1, int param_2) {
   ushort uVar1;
   if (*(long*)this == 0) {
      return *(uint*)( *(long*)( this + 8 ) + (long)param_2 * 4 );
   }

   uVar1 = *(ushort*)( *(long*)this + (long)param_2 * 2 );
   if ((int)(uint)uVar1 < *(int*)( param_1 + 0x34 )) {
      return uVar1 | 0x60000000;
   }

   return ( (uint)uVar1 - *(int*)( param_1 + 0x34 ) ) + *(int*)( param_1 + 0x30 ) | 0x60000000;
}
/* icu_76_godot::ResourceArray::getValue(int, icu_76_godot::ResourceValue&) const */undefined8 icu_76_godot::ResourceArray::getValue(ResourceArray *this, int param_1, ResourceValue *param_2) {
   ushort uVar1;
   int iVar2;
   uint uVar3;
   if (( -1 < param_1 ) && ( param_1 < *(int*)( this + 0x10 ) )) {
      if (*(long*)this == 0) {
         uVar3 = *(uint*)( *(long*)( this + 8 ) + (long)param_1 * 4 );
      }
 else {
         uVar1 = *(ushort*)( *(long*)this + (long)param_1 * 2 );
         uVar3 = (uint)uVar1;
         iVar2 = *(int*)( *(long*)( param_2 + 8 ) + 0x34 );
         if (iVar2 <= (int)(uint)uVar1) {
            uVar3 = ( (uint)uVar1 - iVar2 ) + *(int*)( *(long*)( param_2 + 8 ) + 0x30 );
         }

         uVar3 = uVar3 | 0x60000000;
      }

      *(uint*)( param_2 + 0x18 ) = uVar3;
      return 1;
   }

   return 0;
}
ulong res_findResource_76_godot(undefined8 param_1, ulong param_2, long *param_3, undefined8 *param_4) {
   uint uVar1;
   ulong uVar2;
   char *pcVar3;
   size_t sVar4;
   char *pcVar5;
   char *__s;
   ulong uVar6;
   long in_FS_OFFSET;
   int local_4c;
   char *local_48;
   long local_40;
   __s = (char*)*param_3;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_4c = 0;
   uVar2 = param_2 & 0xffffffff;
   local_48 = (char*)0x0;
   if (*__s != '\0') {
      uVar2 = param_2 & 0xffffffff;
      uVar6 = param_2 >> 0x1c & 0xf;
      if (( ( ( 0x24UL >> ( param_2 >> 0x1c & 0xf ) & 1 ) == 0 ) && ( (int)uVar6 != 4 ) ) && ( 1 < (int)uVar6 - 8U )) {
         LAB_0010202b:uVar2 = 0xffffffff;
      }
 else {
         while (true) {
            if ((int)uVar2 == -1) goto LAB_0010202b;
            if (( 0x334UL >> uVar6 & 1 ) == 0) break;
            pcVar3 = strchr(__s, 0x2f);
            if (pcVar3 == (char*)0x0) {
               sVar4 = strlen(__s);
               pcVar5 = __s + sVar4;
            }
 else {
               if (pcVar3 == __s) goto LAB_0010202b;
               *pcVar3 = '\0';
               pcVar5 = pcVar3 + 1;
            }

            *param_3 = (long)pcVar5;
            if (( (int)uVar6 == 4 ) || ( ( 0x24UL >> (sbyte)uVar6 & 1 ) != 0 )) {
               *param_4 = __s;
               uVar1 = res_getTableItemByKey_76_godot(param_1, uVar2, &local_4c);
               __s = (char*)*param_3;
               uVar2 = (ulong)uVar1;
               uVar6 = ( ulong )(uVar1 >> 0x1c);
            }
 else {
               local_4c = __isoc23_strtol(__s, &local_48, 10);
               if (( local_4c < 0 ) || ( *local_48 != '\0' )) {
                  uVar6 = 0xf;
                  uVar2 = 0xffffffff;
               }
 else {
                  uVar1 = res_getArrayItem_76_godot(param_1, uVar2, local_4c);
                  uVar2 = (ulong)uVar1;
                  uVar6 = ( ulong )(uVar1 >> 0x1c);
               }

               *param_4 = 0;
               __s = (char*)*param_3;
            }

            if (( pcVar3 == (char*)0x0 ) || ( *__s == '\0' )) break;
         }
;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int ures_swap_76_godot(UDataSwapper *param_1, long param_2, int param_3, long param_4, TempTable *param_5) {
   uint *__src;
   char cVar1;
   byte bVar2;
   int iVar3;
   uint uVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   uint uVar8;
   uint *__dest;
   int iVar9;
   char *pcVar10;
   int iVar11;
   long in_FS_OFFSET;
   int local_d00;
   uint *local_cf8;
   undefined1 *local_cf0;
   undefined1 *local_ce8;
   undefined1 *local_ce0;
   int local_cd8;
   byte local_cd4;
   undefined1 local_cc8[800];
   undefined1 local_9a8[800];
   undefined1 local_688[1608];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = udata_swapDataHeader_76_godot();
   if (( param_5 != (TempTable*)0x0 ) && ( *(int*)param_5 < 1 )) {
      bVar2 = *(byte*)( param_2 + 0x10 );
      if (( *(short*)( param_2 + 0xc ) == 0x6552 ) && ( *(short*)( param_2 + 0xe ) == 0x4273 )) {
         if (bVar2 == 1) {
            cVar1 = *(char*)( param_2 + 0x11 );
            if (cVar1 == '\0') goto LAB_001021f4;
         }
 else if (1 < ( byte )(bVar2 - 2)) goto LAB_001021f0;
         local_cd4 = bVar2;
         if (param_3 < 0) {
            iVar11 = -1;
         }
 else {
            iVar9 = param_3 - iVar3;
            iVar11 = iVar9 + 3;
            if (-1 < iVar9) {
               iVar11 = iVar9;
            }

            iVar11 = iVar11 >> 2;
            if (iVar9 < 0x18) {
               udata_printError_76_godot(param_1, "ures_swap(): too few bytes (%d after header) for a resource bundle\n");
               *(undefined4*)param_5 = 8;
               goto LAB_00102224;
            }

         }

         __src = (uint*)( param_2 + iVar3 );
         uVar4 = ( **(code**)( param_1 + 0x10 ) )(*__src);
         bVar2 = udata_readInt32_76_godot(param_1, __src[1]);
         if (bVar2 < 5) {
            udata_printError_76_godot(param_1, "ures_swap(): too few indexes for a 1.1+ resource bundle\n");
            *(undefined4*)param_5 = 8;
         }
 else {
            iVar9 = bVar2 + 1;
            iVar5 = udata_readInt32_76_godot(param_1, __src[2]);
            local_d00 = iVar5;
            if (6 < bVar2) {
               local_d00 = udata_readInt32_76_godot(param_1, __src[7]);
            }

            iVar6 = udata_readInt32_76_godot(param_1, __src[4]);
            iVar7 = udata_readInt32_76_godot(param_1);
            if (( iVar11 < 0 ) || ( iVar6 <= iVar11 )) {
               local_cd8 = iVar5 * 4;
               if (iVar5 <= iVar9) {
                  local_cd8 = 0;
               }

               if (-1 < param_3) {
                  __dest = (uint*)( iVar3 + param_4 );
                  uVar8 = ( param_3 + 0x1f >> 5 ) + 3U & 0xfffffffc;
                  if ((int)uVar8 < 0x321) {
                     local_ce0 = local_9a8;
                  }
 else {
                     local_ce0 = (undefined1*)uprv_malloc_76_godot((long)(int)uVar8);
                     if (local_ce0 == (undefined1*)0x0) {
                        udata_printError_76_godot(param_1, "ures_swap(): unable to allocate memory for tracking resources\n");
                        *(undefined4*)param_5 = 7;
                        goto LAB_00102224;
                     }

                  }

                  memset(local_ce0, 0, (long)(int)uVar8);
                  if (param_2 != param_4) {
                     memcpy(__dest, __src, (long)( iVar6 * 4 ));
                  }

                  iVar11 = ( iVar5 - iVar9 ) * 4;
                  udata_swapInvStringBlock_76_godot(param_1, __src + iVar9, iVar11, __dest + iVar9, param_5);
                  pcVar10 = "ures_swap().udata_swapInvStringBlock(keys[%d]) failed\n";
                  if (0 < *(int*)param_5) {
                     LAB_001025f7:udata_printError_76_godot(param_1, pcVar10, iVar11);
                     joined_r0x00102609:if (local_ce0 != local_9a8) {
                        uprv_free_76_godot();
                     }

                     goto LAB_00102224;
                  }

                  if (iVar5 < local_d00) {
                     ( **(code**)( param_1 + 0x30 ) )(param_1, __src + iVar5, ( local_d00 - iVar5 ) * 4, __dest + iVar5, param_5);
                     if (0 < *(int*)param_5) {
                        iVar11 = ( local_d00 - iVar5 ) * 2;
                        pcVar10 = "ures_swap().swapArray16(16-bit units[%d]) failed\n";
                        goto LAB_001025f7;
                     }

                  }

                  local_cf8 = __dest;
                  if (( local_cd4 < 2 ) && ( 200 < iVar7 )) {
                     local_cf0 = (undefined1*)uprv_malloc_76_godot((long)( iVar7 * 4 ) + (long)iVar7 * 8);
                     if (local_cf0 == (undefined1*)0x0) {
                        udata_printError_76_godot(param_1, "ures_swap(): unable to allocate memory for sorting tables (max length: %d)\n", iVar7);
                        *(undefined4*)param_5 = 7;
                        goto joined_r0x00102609;
                     }

                     local_ce8 = local_cf0 + (long)iVar7 * 8;
                  }
 else {
                     local_cf0 = local_688;
                     local_ce8 = local_cc8;
                  }

                  ures_swapResource(param_1, __src, __dest, uVar4, (char*)&local_cf8, param_5, (UErrorCode*)__dest);
                  if (0 < *(int*)param_5) {
                     udata_printError_76_godot(param_1, "ures_swapResource(root res=%08x) failed\n", uVar4);
                  }

                  if (local_cf0 != local_688) {
                     uprv_free_76_godot();
                  }

                  if (local_ce0 != local_9a8) {
                     uprv_free_76_godot();
                  }

                  ( **(code**)( param_1 + 0x38 ) )(param_1, __src, iVar9 * 4, __dest, param_5);
               }

               iVar3 = iVar3 + iVar6 * 4;
               goto LAB_00102226;
            }

            udata_printError_76_godot(param_1, "ures_swap(): resource top %d exceeds bundle length %d\n", iVar6);
            *(undefined4*)param_5 = 8;
         }

      }
 else {
         LAB_001021f0:cVar1 = *(char*)( param_2 + 0x11 );
         LAB_001021f4:udata_printError_76_godot(param_1, "ures_swap(): data format %02x.%02x.%02x.%02x (format version %02x.%02x) is not a resource bundle\n", *(undefined1*)( param_2 + 0xc ), *(undefined1*)( param_2 + 0xd ), *(undefined1*)( param_2 + 0xe ), *(undefined1*)( param_2 + 0xf ), bVar2, cVar1);
         *(undefined4*)param_5 = 0x10;
      }

   }

   LAB_00102224:iVar3 = 0;
   LAB_00102226:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

