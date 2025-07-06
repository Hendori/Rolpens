undefined8 New_Profile(long param_1, int param_2, char param_3) {
   byte bVar1;
   long lVar2;
   long lVar3;
   ulong uVar4;
   ushort uVar5;
   ulong uVar6;
   uVar4 = *(ulong*)( param_1 + 0x30 );
   uVar6 = uVar4;
   if (*(long*)( param_1 + 0x88 ) == 0) {
      uVar6 = uVar4 + 0x40;
      *(ulong*)( param_1 + 0x30 ) = uVar6;
      *(ulong*)( param_1 + 0x80 ) = uVar4;
      *(ulong*)( param_1 + 0x88 ) = uVar4;
   }

   if (*(ulong*)( param_1 + 0x28 ) <= uVar6) {
      *(undefined4*)( param_1 + 0x38 ) = 0x62;
      return 1;
   }

   lVar2 = *(long*)( param_1 + 0x80 );
   *(ulong*)( lVar2 + 0x10 ) = uVar6;
   *(undefined8*)( lVar2 + 8 ) = 0;
   *(undefined8*)( lVar2 + 0x38 ) = 0;
   *(undefined1(*) [16])( lVar2 + 0x20 ) = (undefined1[16])0x0;
   bVar1 = *(byte*)( param_1 + 0x40 );
   uVar5 = (ushort)bVar1;
   if (param_2 == 2) {
      if (param_3 != '\0') {
         uVar5 = bVar1 | 0x10;
      }

   }
 else {
      if (param_3 != '\0') {
         lVar3 = *(long*)( param_1 + 0x90 );
         *(ushort*)( lVar2 + 0x18 ) = bVar1 | 0x28;
         goto joined_r0x0010008f;
      }

      uVar5 = bVar1 | 8;
   }

   lVar3 = *(long*)( param_1 + 0x90 );
   *(ushort*)( lVar2 + 0x18 ) = uVar5;
   joined_r0x0010008f:if (lVar3 == 0) {
      *(long*)( param_1 + 0x90 ) = lVar2;
   }

   *(int*)( param_1 + 0x98 ) = param_2;
   *(undefined2*)( param_1 + 0x7a ) = 1;
   return 0;
}
undefined8 End_Profile(long param_1, char param_2) {
   ushort uVar1;
   ulong uVar2;
   long lVar3;
   ulong uVar4;
   ushort uVar5;
   long lVar6;
   uVar2 = *(ulong*)( param_1 + 0x30 );
   lVar3 = *(long*)( param_1 + 0x80 );
   lVar6 = uVar2 - *(long*)( lVar3 + 0x10 );
   if (lVar6 < 0) {
      *(undefined4*)( param_1 + 0x38 ) = 99;
      return 1;
   }

   uVar4 = uVar2;
   if (lVar6 != 0) {
      *(long*)( lVar3 + 0x20 ) = lVar6 >> 3;
      if (param_2 != '\0') {
         uVar1 = *(ushort*)( lVar3 + 0x18 );
         uVar5 = uVar1 | 0x10;
         if (( uVar1 & 8 ) == 0) {
            uVar5 = uVar1 | 0x20;
         }

         *(ushort*)( lVar3 + 0x18 ) = uVar5;
      }

      uVar4 = uVar2 + 0x40;
      *(ulong*)( param_1 + 0x80 ) = uVar2;
      *(ulong*)( param_1 + 0x30 ) = uVar4;
      *(undefined8*)( uVar2 + 0x20 ) = 0;
      *(ulong*)( uVar2 + 0x10 ) = uVar4;
      *(ulong*)( lVar3 + 0x38 ) = uVar2;
      *(short*)( param_1 + 0x78 ) = *(short*)( param_1 + 0x78 ) + 1;
   }

   if (uVar4 < *(ulong*)( param_1 + 0x28 )) {
      *(undefined1*)( param_1 + 0x7b ) = 0;
      return 0;
   }

   *(undefined4*)( param_1 + 0x38 ) = 0x62;
   return 1;
}
undefined8 Insert_Y_Turn(long param_1, int param_2) {
   uint uVar1;
   long *plVar2;
   int iVar3;
   long *plVar4;
   long *plVar5;
   ulong uVar6;
   long lVar7;
   uVar1 = *(uint*)( param_1 + 0x3c );
   plVar2 = *(long**)( param_1 + 0x20 );
   lVar7 = (long)param_2;
   iVar3 = uVar1 - 1;
   if (-1 < iVar3) {
      plVar4 = plVar2;
      do {
         plVar4 = plVar4 + -1;
         if (*plVar4 <= (long)param_2) {
            if ((long)param_2 <= plVar2[(long)iVar3 - (long)(int)uVar1]) {
               return 0;
            }

            plVar4 = plVar2 + ( (long)iVar3 - (long)(int)uVar1 );
            do {
               iVar3 = (int)lVar7;
               plVar5 = plVar4 + -1;
               lVar7 = (long)(int)*plVar4;
               *plVar4 = (long)iVar3;
               plVar4 = plVar5;
            }
 while ( plVar5 != plVar2 + ( -1 - (long)(int)uVar1 ) );
            break;
         }

         iVar3 = iVar3 + -1;
      }
 while ( iVar3 != -1 );
   }

   uVar6 = *(long*)( param_1 + 0x28 ) - 8;
   *(ulong*)( param_1 + 0x28 ) = uVar6;
   if (*(ulong*)( param_1 + 0x30 ) < uVar6) {
      *(uint*)( param_1 + 0x3c ) = uVar1 + 1;
      plVar2[(int)~uVar1] = lVar7;
      return 0;
   }

   *(undefined4*)( param_1 + 0x38 ) = 0x62;
   return 1;
}
void Split_Conic(long *param_1) {
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   ulong uVar4;
   uVar1 = param_1[2] + param_1[4];
   uVar2 = param_1[3] + param_1[5];
   param_1[8] = param_1[4];
   param_1[9] = param_1[5];
   uVar3 = *param_1 + param_1[2];
   uVar4 = param_1[1] + param_1[3];
   *(int*)( param_1 + 6 ) = (int)( uVar1 >> 1 );
   *(int*)( (long)param_1 + 0x34 ) = (int)( (long)uVar1 >> 0x21 );
   *(int*)( param_1 + 7 ) = (int)( uVar2 >> 1 );
   *(int*)( (long)param_1 + 0x3c ) = (int)( (long)uVar2 >> 0x21 );
   *(int*)( param_1 + 4 ) = (int)( uVar1 + uVar3 >> 2 );
   *(int*)( (long)param_1 + 0x24 ) = (int)( (long)( uVar1 + uVar3 ) >> 0x22 );
   *(int*)( param_1 + 5 ) = (int)( uVar2 + uVar4 >> 2 );
   *(int*)( (long)param_1 + 0x2c ) = (int)( (long)( uVar2 + uVar4 ) >> 0x22 );
   *(int*)( param_1 + 2 ) = (int)( uVar3 >> 1 );
   *(int*)( (long)param_1 + 0x14 ) = (int)( (long)uVar3 >> 0x21 );
   *(int*)( param_1 + 3 ) = (int)( uVar4 >> 1 );
   *(int*)( (long)param_1 + 0x1c ) = (int)( (long)uVar4 >> 0x21 );
   return;
}
void Split_Cubic(long *param_1) {
   long lVar1;
   ulong uVar2;
   long lVar3;
   ulong uVar4;
   ulong uVar5;
   ulong uVar6;
   ulong uVar7;
   ulong uVar8;
   ulong uVar9;
   ulong uVar10;
   param_1[0xc] = param_1[6];
   param_1[0xd] = param_1[7];
   uVar9 = param_1[4] + param_1[6];
   uVar10 = param_1[5] + param_1[7];
   lVar1 = param_1[2] + param_1[4];
   lVar3 = param_1[3] + param_1[5];
   uVar5 = *param_1 + param_1[2];
   uVar6 = param_1[1] + param_1[3];
   uVar7 = lVar1 + uVar9;
   uVar8 = lVar3 + uVar10;
   uVar2 = lVar1 + uVar5;
   uVar4 = lVar3 + uVar6;
   *(int*)( param_1 + 10 ) = (int)( uVar9 >> 1 );
   *(int*)( (long)param_1 + 0x54 ) = (int)( (long)uVar9 >> 0x21 );
   *(int*)( param_1 + 0xb ) = (int)( uVar10 >> 1 );
   *(int*)( (long)param_1 + 0x5c ) = (int)( (long)uVar10 >> 0x21 );
   *(int*)( param_1 + 8 ) = (int)( uVar7 >> 2 );
   *(int*)( (long)param_1 + 0x44 ) = (int)( (long)uVar7 >> 0x22 );
   *(int*)( param_1 + 9 ) = (int)( uVar8 >> 2 );
   *(int*)( (long)param_1 + 0x4c ) = (int)( (long)uVar8 >> 0x22 );
   *(int*)( param_1 + 2 ) = (int)( uVar5 >> 1 );
   *(int*)( (long)param_1 + 0x14 ) = (int)( (long)uVar5 >> 0x21 );
   *(int*)( param_1 + 3 ) = (int)( uVar6 >> 1 );
   *(int*)( (long)param_1 + 0x1c ) = (int)( (long)uVar6 >> 0x21 );
   *(int*)( param_1 + 4 ) = (int)( uVar2 >> 2 );
   *(int*)( (long)param_1 + 0x24 ) = (int)( (long)uVar2 >> 0x22 );
   *(int*)( param_1 + 5 ) = (int)( uVar4 >> 2 );
   *(int*)( (long)param_1 + 0x2c ) = (int)( (long)uVar4 >> 0x22 );
   *(int*)( param_1 + 6 ) = (int)( uVar2 + uVar7 >> 3 );
   *(int*)( (long)param_1 + 0x34 ) = (int)( (long)( uVar2 + uVar7 ) >> 0x23 );
   *(int*)( param_1 + 7 ) = (int)( uVar4 + uVar8 >> 3 );
   *(int*)( (long)param_1 + 0x3c ) = (int)( (long)( uVar4 + uVar8 ) >> 0x23 );
   return;
}
undefined8 Bezier_Up(undefined4 *param_1, int param_2, long *param_3, code *param_4, ulong param_5, ulong param_6) {
   char cVar1;
   int iVar2;
   ulong uVar3;
   long lVar4;
   long lVar5;
   long *plVar6;
   ulong uVar7;
   long *plVar8;
   long *plVar9;
   long lVar10;
   ulong uVar11;
   lVar10 = (long)param_2;
   lVar5 = ( param_3 + lVar10 * 2 )[1];
   plVar9 = *(long**)( param_1 + 0xc );
   if (( param_3[1] < (long)param_5 ) || ( (long)param_6 < lVar5 )) goto LAB_00100497;
   iVar2 = param_1[1];
   uVar11 = param_3[1] & (long)-iVar2;
   if ((long)param_6 < (long)uVar11) {
      uVar11 = param_6;
   }

   if (lVar5 < (long)param_5) {
      LAB_001003e3:cVar1 = *(char*)( (long)param_1 + 0x7a );
      uVar7 = param_5;
   }
 else {
      param_5 = (long)iVar2 + -1 + lVar5 & (long)-iVar2;
      if (( ushort )((short)iVar2 - 1U & (ushort)lVar5) != 0) goto LAB_001003e3;
      if (*(char*)( (long)param_1 + 0x7b ) == '\0') {
         plVar6 = plVar9;
         plVar9 = plVar9 + 1;
      }
 else {
         *(undefined1*)( (long)param_1 + 0x7b ) = 0;
         plVar6 = plVar9 + -1;
      }

      *plVar6 = param_3[lVar10 * 2];
      cVar1 = *(char*)( (long)param_1 + 0x7a );
      uVar7 = (long)iVar2 + param_5;
   }

   if (cVar1 != '\0') {
      *(long*)( *(long*)( param_1 + 0x20 ) + 0x28 ) = (long)param_5 >> ( ( byte ) * param_1 & 0x3f );
      *(undefined1*)( (long)param_1 + 0x7a ) = 0;
   }

   if ((long)uVar7 <= (long)uVar11) {
      plVar6 = param_3;
      if (*(long**)( param_1 + 10 ) <= plVar9 + ( (long)( uVar11 - uVar7 ) >> ( ( byte ) * param_1 & 0x3f ) ) + 1) {
         *(long**)( param_1 + 0xc ) = plVar9;
         param_1[0xe] = 0x62;
         return 1;
      }

      do {
         *(undefined1*)( (long)param_1 + 0x7b ) = 0;
         uVar3 = plVar6[1];
         if ((long)uVar7 < (long)uVar3) {
            plVar8 = plVar6 + lVar10 * 2;
            lVar5 = uVar3 - plVar8[1];
            if (lVar5 < (int)param_1[4]) {
               lVar4 = *plVar6;
               plVar6 = plVar6 + lVar10 * -2;
               *plVar9 = (long)( ( lVar4 - *plVar8 ) * ( uVar7 - plVar8[1] ) ) / lVar5 + *plVar8;
               uVar7 = uVar7 + (long)(int)param_1[1];
               plVar9 = plVar9 + 1;
            }
 else {
               ( *param_4 )();
               plVar6 = plVar8;
            }

         }
 else {
            plVar8 = plVar9;
            if (uVar7 == uVar3) {
               *(undefined1*)( (long)param_1 + 0x7b ) = 1;
               plVar8 = plVar9 + 1;
               *plVar9 = *plVar6;
               uVar7 = uVar7 + (long)(int)param_1[1];
            }

            plVar9 = plVar8;
            plVar6 = plVar6 + lVar10 * -2;
         }

      }
 while ( ( param_3 <= plVar6 ) && ( (long)uVar7 <= (long)uVar11 ) );
   }

   LAB_00100497:*(long**)( param_1 + 0xc ) = plVar9;
   return 0;
}
undefined8 Conic_To(long param_1, undefined8 param_2, long param_3, undefined8 param_4, ulong param_5) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char cVar4;
   char cVar5;
   ulong uVar6;
   undefined8 uVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   bool bVar10;
   int iVar11;
   ulong uVar12;
   long in_FS_OFFSET;
   undefined8 local_458;
   ulong local_450[130];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_450[1] = param_2;
   local_450[2] = param_3;
   local_458 = param_4;
   local_450[0] = param_5;
   local_450[3] = *(undefined8*)( param_1 + 0x58 );
   uVar6 = *(ulong*)( param_1 + 0x60 );
   local_450[4] = uVar6;
   puVar9 = &local_458;
   do {
      if ((long)param_5 < (long)uVar6) {
         if (( param_3 <= (long)uVar6 ) && ( (long)param_5 <= param_3 )) {
            iVar11 = *(int*)( param_1 + 0x98 );
            uVar12 = param_5;
            if (iVar11 == 2) {
               LAB_00100647:lVar2 = *(long*)( param_1 + 0x68 );
               puVar9[1] = -uVar12;
               lVar3 = *(long*)( param_1 + 0x70 );
               puVar9[3] = -param_3;
               cVar4 = *(char*)( param_1 + 0x7a );
               puVar9[5] = -uVar6;
               cVar5 = Bezier_Up(param_1, 2, puVar9, Split_Conic, -lVar3, -lVar2);
               if (( cVar4 != '\0' ) && ( *(char*)( param_1 + 0x7a ) == '\0' )) {
                  plVar1 = (long*)( *(long*)( param_1 + 0x80 ) + 0x28 );
                  *plVar1 = -*plVar1;
               }

               puVar9[1] = -puVar9[1];
               if (cVar5 == '\0') goto LAB_001006a9;
            }
 else {
               uVar12 = 2;
               bVar10 = (long)*(int*)( param_1 + 8 ) <= (long)( uVar6 & (long)( *(int*)( param_1 + 4 ) + -1 ) );
               LAB_00100600:uVar6 = (ulong)(uint)(int)bVar10;
               if (( iVar11 == 0 ) || ( cVar4 = End_Profile(param_1, uVar6) ),cVar4 == '\0') {
                  iVar11 = (int)uVar12;
                  cVar4 = New_Profile(param_1, uVar12 & 0xffffffff, uVar6 & 0xffffffff);
                  if (cVar4 == '\0') {
                     if (iVar11 == 1) goto LAB_00100760;
                     param_3 = puVar9[3];
                     uVar6 = puVar9[5];
                     uVar12 = puVar9[1];
                     goto LAB_00100647;
                  }

               }

            }

            LAB_00100790:uVar7 = 1;
            goto LAB_00100733;
         }

         LAB_00100718:puVar8 = puVar9 + 4;
         Split_Conic(puVar9);
         if (puVar8 < &local_458) {
            LAB_00100729:*(undefined8*)( param_1 + 0x58 ) = param_4;
            uVar7 = 0;
            *(ulong*)( param_1 + 0x60 ) = param_5;
            LAB_00100733:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return uVar7;
         }

      }
 else {
         if (( param_3 < (long)uVar6 ) || ( (long)param_5 < param_3 )) goto LAB_00100718;
         if (uVar6 != param_5) {
            iVar11 = *(int*)( param_1 + 0x98 );
            if (iVar11 != 1) {
               uVar12 = 1;
               bVar10 = (long)*(int*)( param_1 + 8 ) <= (long)( ( (long)-*(int *)(param_1 + 4) & ( uVar6 - 1 ) + (long)*(int*)( param_1 + 4 ) ) - uVar6 );
               goto LAB_00100600;
            }

            LAB_00100760:cVar4 = Bezier_Up(param_1, 2, puVar9, Split_Conic, *(undefined8*)( param_1 + 0x68 ), *(undefined8*)( param_1 + 0x70 ));
            if (cVar4 != '\0') goto LAB_00100790;
         }

         LAB_001006a9:puVar8 = puVar9 + -4;
         if (puVar8 < &local_458) goto LAB_00100729;
      }

      uVar6 = puVar8[5];
      param_3 = puVar8[3];
      param_5 = puVar8[1];
      param_4 = *puVar8;
      puVar9 = puVar8;
   }
 while ( true );
}
void Sort(long *param_1) {
   long *plVar1;
   long *plVar2;
   long *plVar3;
   plVar3 = (long*)*param_1;
   plVar1 = plVar3;
   if (plVar3 != (long*)0x0) {
      do {
         *plVar1 = *(long*)plVar1[2];
         plVar1[4] = plVar1[4] + -1;
         plVar1[2] = plVar1[2] + ( -(ulong)((*(ushort *)(plVar1 + 3) & 8) == 0) & 0xfffffffffffffff0 ) + 8;
         plVar2 = plVar1 + 1;
         plVar1 = (long*)*plVar2;
      }
 while ( (long*)*plVar2 != (long*)0x0 );
      plVar1 = (long*)plVar3[1];
      while (plVar2 = param_1,plVar1 != (long*)0x0) {
         while (*plVar3 <= *plVar1) {
            plVar2 = plVar3 + 1;
            plVar3 = (long*)plVar3[1];
            if (plVar3 == (long*)0x0) {
               return;
            }

            plVar1 = (long*)plVar3[1];
            if (plVar1 == (long*)0x0) {
               return;
            }

         }
;
         *plVar2 = (long)plVar1;
         plVar3[1] = plVar1[1];
         plVar1[1] = (long)plVar3;
         plVar3 = (long*)*param_1;
         plVar1 = (long*)plVar3[1];
      }
;
   }

   return;
}
void Vertical_Sweep_Init(long param_1, short param_2) {
   *(long*)( param_1 + 0x50 ) = *(long*)( param_1 + 0x48 ) - (long)( (int)param_2 * *(int*)( param_1 + 0xa8 ) );
   return;
}
void Vertical_Sweep_Span(undefined4 *param_1, undefined8 param_2, ulong param_3, ulong param_4, long param_5) {
   byte *pbVar1;
   byte *pbVar2;
   ushort uVar3;
   byte bVar4;
   int iVar5;
   uint uVar6;
   ulong uVar7;
   long lVar8;
   byte *pbVar9;
   long lVar10;
   ulong uVar11;
   long lVar12;
   undefined8 *puVar13;
   byte bVar14;
   iVar5 = param_1[1];
   uVar11 = (long)iVar5 + -1 + param_3 & (long)-iVar5;
   uVar7 = (long)-iVar5 & param_4;
   if (( ( ( ( *(ushort*)( param_5 + 0x18 ) & 7 ) != 2 ) && ( (long)( ( param_4 - param_3 ) - (long)iVar5 ) <= (long)(int)param_1[5] ) ) && ( param_3 != uVar11 ) ) && ( param_4 != uVar7 )) {
      uVar7 = uVar11;
   }

   lVar8 = (long)uVar7 >> ( ( byte ) * param_1 & 0x3f );
   if (-1 < lVar8) {
      uVar3 = *(ushort*)( (long)param_1 + 0x42 );
      lVar12 = (long)uVar11 >> ( ( byte ) * param_1 & 0x3f );
      if (lVar12 < (long)(ulong)uVar3) {
         lVar10 = 0;
         if (-1 < lVar12) {
            lVar10 = lVar12;
         }

         if ((long)(ulong)uVar3 <= lVar8) {
            lVar8 = (long)(int)( uVar3 - 1 );
         }

         pbVar9 = (byte*)( *(long*)( param_1 + 0x14 ) + ( lVar10 >> 3 ) );
         bVar14 = ~(byte)(0x7f >> ((byte)lVar8 & 7));
         iVar5 = (int)( lVar8 >> 3 ) - (int)( lVar10 >> 3 );
         bVar4 = ( byte )(0xff >> ( (byte)lVar10 & 7 ));
         if (0 < iVar5) {
            *pbVar9 = *pbVar9 | bVar4;
            if (iVar5 != 1) {
               uVar6 = iVar5 - 1;
               pbVar1 = pbVar9 + 1;
               if (uVar6 < 8) {
                  if (( uVar6 & 4 ) == 0) {
                     if (( uVar6 != 0 ) && ( *pbVar1 = 0xff(uVar6 & 2) != 0 )) {
                        ( pbVar9 + ( (ulong)uVar6 - 1 ) )[0] = 0xff;
                        ( pbVar9 + ( (ulong)uVar6 - 1 ) )[1] = 0xff;
                     }

                  }
 else {
                     for (int i = 0; i < 4; i++) {
                        pbVar1[i] = 255;
                     }

                     pbVar1 = pbVar9 + ( (ulong)uVar6 - 3 );
                     for (int i = 0; i < 4; i++) {
                        pbVar1[i] = 255;
                     }

                  }

               }
 else {
                  for (int i = 0; i < 8; i++) {
                     pbVar9[( i + 1 )] = 255;
                  }

                  pbVar2 = pbVar9 + ( (ulong)uVar6 - 7 );
                  for (int i = 0; i < 8; i++) {
                     pbVar2[i] = 255;
                  }

                  puVar13 = (undefined8*)( ( ulong )(pbVar9 + 9) & 0xfffffffffffffff8 );
                  for (uVar7 = ( ulong )(uVar6 + ( (int)pbVar1 - (int)(undefined8*)( ( ulong )(pbVar9 + 9) & 0xfffffffffffffff8 ) ) >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
                     *puVar13 = 0xffffffffffffffff;
                     puVar13 = puVar13 + 1;
                  }

               }

               pbVar9 = pbVar9 + (int)uVar6;
            }

            pbVar9[1] = pbVar9[1] | bVar14;
            return;
         }

         *pbVar9 = bVar14 & bVar4 | *pbVar9;
      }

   }

   return;
}
void Vertical_Sweep_Drop(undefined4 *param_1, short param_2, long param_3, ulong param_4, long param_5, long param_6) {
   ushort uVar1;
   int iVar2;
   ulong uVar3;
   byte *pbVar4;
   ulong uVar5;
   byte bVar6;
   ulong uVar7;
   ushort uVar8;
   int iVar9;
   ulong uVar10;
   long lVar11;
   long lVar12;
   ulong uVar13;
   ulong uVar14;
   iVar2 = param_1[1];
   uVar3 = ( ulong ) - iVar2;
   uVar7 = (long)iVar2 + -1 + param_3 & uVar3;
   uVar13 = uVar3 & param_4;
   if ((long)uVar13 < (long)uVar7) {
      if ((long)iVar2 + uVar13 != uVar7) {
         return;
      }

      uVar1 = *(ushort*)( param_5 + 0x18 );
      uVar8 = uVar1 & 7;
      if (uVar8 == 4) {
         LAB_00100ad0:iVar2 = iVar2 * 0x3f;
         iVar9 = iVar2 + 0x3f;
         if (-1 < iVar2) {
            iVar9 = iVar2;
         }

         uVar5 = uVar3 & (long)( (long)( iVar9 >> 6 ) + param_4 + param_3 ) >> 1;
      }
 else {
         uVar5 = uVar13;
         if (4 < uVar8) {
            if (uVar8 != 5) {
               return;
            }

            if (param_6 == *(long*)( param_5 + 0x38 )) {
               if (*(long*)( param_5 + 0x20 ) < 1) {
                  LAB_00100bee:if (( uVar1 & 0x10 ) == 0) {
                     return;
                  }

                  if ((long)( param_4 - param_3 ) < (long)(int)param_1[2]) {
                     return;
                  }

                  if (*(long*)( param_6 + 0x38 ) == param_5) {
                     LAB_00100ab6:if (*(long*)( param_5 + 0x28 ) == (long)param_2) {
                        if (( uVar1 & 0x20 ) == 0) {
                           return;
                        }

                        if ((long)( param_4 - param_3 ) < (long)(int)param_1[2]) {
                           return;
                        }

                     }

                  }

                  if (uVar8 == 1) goto LAB_00100aef;
               }
 else if (param_5 == *(long*)( param_6 + 0x38 )) goto LAB_00100ab6;
            }
 else if (( param_5 == *(long*)( param_6 + 0x38 ) ) && ( (long)param_2 == *(long*)( param_5 + 0x28 ) )) {
               if (( uVar1 & 0x20 ) == 0) {
                  return;
               }

               if ((long)( param_4 - param_3 ) < (long)(int)param_1[2]) {
                  return;
               }

            }

            goto LAB_00100ad0;
         }

         if (uVar8 != 0) {
            if (uVar8 != 1) {
               return;
            }

            if (param_6 == *(long*)( param_5 + 0x38 )) {
               if (*(long*)( param_5 + 0x20 ) < 1) goto LAB_00100bee;
               if (param_5 == *(long*)( param_6 + 0x38 )) goto LAB_00100ab6;
            }
 else if (( param_5 == *(long*)( param_6 + 0x38 ) ) && ( (long)param_2 == *(long*)( param_5 + 0x28 ) )) {
               if (( uVar1 & 0x20 ) == 0) {
                  return;
               }

               if ((long)( param_4 - param_3 ) < (long)(int)param_1[2]) {
                  return;
               }

            }

         }

      }

      LAB_00100aef:bVar6 = ( byte ) * param_1;
      uVar3 = uVar7;
      uVar14 = uVar13;
      if ((long)uVar5 < 0) {
         LAB_00100b61:uVar5 = uVar3;
         lVar12 = (long)uVar14 >> ( bVar6 & 0x3f );
         if (( lVar12 < 0 ) || ( (long)( ulong ) * (ushort*)( (long)param_1 + 0x42 ) <= lVar12 )) goto LAB_00100a04;
      }
 else {
         uVar10 = ( ulong ) * (ushort*)( (long)param_1 + 0x42 );
         lVar11 = (long)uVar5 >> ( bVar6 & 0x3f );
         uVar3 = uVar13;
         uVar14 = uVar7;
         if (( (long)uVar10 <= lVar11 ) || ( uVar3 = uVar7 ),uVar14 = uVar13,uVar5 == uVar7) goto LAB_00100b61;
         lVar12 = (long)uVar7 >> ( bVar6 & 0x3f );
         if (( lVar12 < 0 ) || ( (long)uVar10 <= lVar12 )) goto LAB_00100a16;
      }

      if (( ( uint ) * (byte*)( *(long*)( param_1 + 0x14 ) + ( lVar12 >> 3 ) ) & 0x80 >> ( (byte)lVar12 & 7 ) ) != 0) {
         return;
      }

   }
 else {
      bVar6 = ( byte ) * param_1;
      uVar5 = uVar7;
   }

   LAB_00100a04:lVar11 = (long)uVar5 >> ( bVar6 & 0x3f );
   if (lVar11 < 0) {
      return;
   }

   uVar10 = ( ulong ) * (ushort*)( (long)param_1 + 0x42 );
   LAB_00100a16:if (lVar11 < (long)uVar10) {
      pbVar4 = (byte*)( ( lVar11 >> 3 ) + *(long*)( param_1 + 0x14 ) );
      *pbVar4 = *pbVar4 | ( byte )(0x80 >> ( (byte)lVar11 & 7 ));
   }

   return;
}
void Vertical_Sweep_Step(long param_1) {
   *(long*)( param_1 + 0x50 ) = *(long*)( param_1 + 0x50 ) - (long)*(int*)( param_1 + 0xa8 );
   return;
}
void Horizontal_Sweep_Init(void) {
   return;
}
void Horizontal_Sweep_Span(undefined4 *param_1, short param_2, ulong param_3, ulong param_4) {
   ulong uVar1;
   byte *pbVar2;
   uVar1 = (ulong)(int)-param_1[1];
   if (( ( param_3 == ( ( param_3 - 1 ) + (long)(int)param_1[1] & uVar1 ) ) && ( param_3 = (long)param_3 >> ( ( byte ) * param_1 & 0x3f ) ),-1 < (long)param_3 )) {
      pbVar2 = (byte*)( ( (long)( param_2 >> 3 ) - param_3 * (long)(int)param_1[0x2a] ) + *(long*)( param_1 + 0x12 ) );
      *pbVar2 = *pbVar2 | ( byte )(0x80 >> ( (byte)param_2 & 7 ));
      uVar1 = (ulong)(int)-param_1[1];
   }

   if (( ( ( ~uVar1 & param_4 ) == 0 ) && ( param_4 = (long)param_4 >> ( ( byte ) * param_1 & 0x3f ) ),-1 < (long)param_4 )) {
      pbVar2 = (byte*)( ( (long)( param_2 >> 3 ) - (long)(int)param_1[0x2a] * param_4 ) + *(long*)( param_1 + 0x12 ) );
      *pbVar2 = *pbVar2 | ( byte )(0x80 >> ( (byte)param_2 & 7 ));
      return;
   }

   return;
}
void Horizontal_Sweep_Drop(undefined4 *param_1, short param_2, long param_3, ulong param_4, long param_5, long param_6) {
   ushort uVar1;
   int iVar2;
   byte bVar3;
   ulong uVar4;
   ulong uVar5;
   byte *pbVar6;
   ulong uVar7;
   ulong uVar8;
   ulong uVar9;
   ulong uVar10;
   ushort uVar11;
   int iVar12;
   ulong uVar13;
   iVar2 = param_1[1];
   uVar10 = ( ulong ) - iVar2;
   uVar4 = (long)iVar2 + -1 + param_3 & uVar10;
   uVar8 = uVar10 & param_4;
   if ((long)uVar8 < (long)uVar4) {
      if ((long)iVar2 + uVar8 != uVar4) {
         return;
      }

      uVar1 = *(ushort*)( param_5 + 0x18 );
      uVar11 = uVar1 & 7;
      if (uVar11 == 4) {
         LAB_00100e50:iVar2 = iVar2 * 0x3f;
         iVar12 = iVar2 + 0x3f;
         if (-1 < iVar2) {
            iVar12 = iVar2;
         }

         uVar7 = (long)( (long)( iVar12 >> 6 ) + param_4 + param_3 ) >> 1 & uVar10;
      }
 else {
         uVar7 = uVar8;
         if (4 < uVar11) {
            if (uVar11 != 5) {
               return;
            }

            if (param_6 == *(long*)( param_5 + 0x38 )) {
               if (*(long*)( param_5 + 0x20 ) < 1) {
                  LAB_00100f8e:if (( uVar1 & 0x10 ) == 0) {
                     return;
                  }

                  if ((long)( param_4 - param_3 ) < (long)(int)param_1[2]) {
                     return;
                  }

                  if (*(long*)( param_6 + 0x38 ) == param_5) {
                     LAB_00100e36:if (*(long*)( param_5 + 0x28 ) == (long)param_2) {
                        if (( uVar1 & 0x20 ) == 0) {
                           return;
                        }

                        if ((long)( param_4 - param_3 ) < (long)(int)param_1[2]) {
                           return;
                        }

                     }

                  }

                  if (uVar11 == 1) goto LAB_00100e74;
               }
 else if (param_5 == *(long*)( param_6 + 0x38 )) goto LAB_00100e36;
            }
 else if (( param_5 == *(long*)( param_6 + 0x38 ) ) && ( *(long*)( param_5 + 0x28 ) == (long)param_2 )) {
               if (( uVar1 & 0x20 ) == 0) {
                  return;
               }

               if ((long)( param_4 - param_3 ) < (long)(int)param_1[2]) {
                  return;
               }

            }

            goto LAB_00100e50;
         }

         if (uVar11 != 0) {
            if (uVar11 != 1) {
               return;
            }

            if (param_6 == *(long*)( param_5 + 0x38 )) {
               if (*(long*)( param_5 + 0x20 ) < 1) goto LAB_00100f8e;
               if (param_5 == *(long*)( param_6 + 0x38 )) goto LAB_00100e36;
            }
 else if (( param_5 == *(long*)( param_6 + 0x38 ) ) && ( *(long*)( param_5 + 0x28 ) == (long)param_2 )) {
               if (( uVar1 & 0x20 ) == 0) {
                  return;
               }

               if ((long)( param_4 - param_3 ) < (long)(int)param_1[2]) {
                  return;
               }

            }

         }

      }

      LAB_00100e74:bVar3 = ( byte ) * param_1;
      uVar10 = uVar4;
      uVar9 = uVar8;
      if ((long)uVar7 < 0) {
         LAB_00100ef9:uVar7 = uVar10;
         uVar4 = (long)uVar9 >> ( bVar3 & 0x3f );
         if (( (long)uVar4 < 0 ) || ( (uint)param_1[0x28] <= uVar4 )) goto LAB_00100d66;
      }
 else {
         uVar13 = (ulong)(uint)param_1[0x28];
         uVar5 = (long)uVar7 >> ( bVar3 & 0x3f );
         uVar10 = uVar8;
         uVar9 = uVar4;
         if (( uVar13 <= uVar5 ) || ( uVar10 = uVar4 ),uVar9 = uVar8,uVar7 == uVar4) goto LAB_00100ef9;
         uVar4 = (long)uVar4 >> ( bVar3 & 0x3f );
         if (( (long)uVar4 < 0 ) || ( uVar13 <= uVar4 )) goto LAB_00100d78;
      }

      if (( *(byte*)( *(long*)( param_1 + 0x12 ) + ( (long)( param_2 >> 3 ) - (long)(int)param_1[0x2a] * uVar4 ) ) & ( byte )(0x80 >> ( (byte)param_2 & 7 )) ) != 0) {
         return;
      }

   }
 else {
      bVar3 = ( byte ) * param_1;
      uVar7 = uVar4;
   }

   LAB_00100d66:uVar5 = (long)uVar7 >> ( bVar3 & 0x3f );
   if ((long)uVar5 < 0) {
      return;
   }

   uVar13 = (ulong)(uint)param_1[0x28];
   LAB_00100d78:if (uVar5 < uVar13) {
      pbVar6 = (byte*)( *(long*)( param_1 + 0x12 ) + ( (long)( param_2 >> 3 ) - (long)(int)param_1[0x2a] * uVar5 ) );
      *pbVar6 = *pbVar6 | ( byte )(0x80 >> ( (byte)param_2 & 7 ));
   }

   return;
}
void Horizontal_Sweep_Step(void) {
   return;
}
void ft_black_reset(void) {
   return;
}
undefined8 ft_black_set_mode(void) {
   return 0;
}
undefined8 ft_raster1_init(long param_1) {
   ( **(code**)( *(long*)( *(long*)( param_1 + 0x18 ) + 0x70 ) + 0x10 ) )(*(undefined8*)( param_1 + 0x68 ), 0, 0);
   return 0;
}
void ft_raster1_set_mode(long param_1) {
   /* WARNING: Could not recover jumptable at 0x00101057. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)( *(long*)( param_1 + 0x18 ) + 0x70 ) + 0x18 ) )(*(undefined8*)( param_1 + 0x68 ));
   return;
}
void ft_black_done(undefined8 *param_1) {
   ft_mem_free(*param_1, param_1);
   return;
}
undefined8 Line_Up(undefined4 *param_1, long param_2, long param_3, long param_4, long param_5, long param_6, long param_7) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   byte bVar4;
   long *plVar5;
   long lVar7;
   long *plVar8;
   long lVar9;
   int iVar10;
   int iVar11;
   long lVar12;
   long lVar13;
   int iVar14;
   uint uVar15;
   long *plVar6;
   lVar9 = param_5 - param_3;
   if (param_5 < param_6 || param_7 < param_3) {
      return 0;
   }

   if (lVar9 < 1) {
      return 0;
   }

   lVar13 = param_4 - param_2;
   if (param_3 < param_6) {
      lVar7 = FT_MulDiv(lVar13, param_6 - param_3, lVar9);
      lVar7 = param_2 + lVar7;
      uVar2 = 0;
      bVar4 = ( byte ) * param_1;
      iVar10 = (int)( param_6 >> ( bVar4 & 0x3f ) );
   }
 else {
      bVar4 = ( byte ) * param_1;
      iVar10 = (int)( param_3 >> ( bVar4 & 0x3f ) );
      uVar2 = param_1[1] - 1 & (uint)param_3;
      lVar7 = param_2;
   }

   if (param_7 < param_5) {
      iVar14 = (int)( param_7 >> ( bVar4 & 0x3f ) );
      uVar15 = 0;
   }
 else {
      iVar14 = (int)( param_5 >> ( bVar4 & 0x3f ) );
      uVar15 = param_1[1] - 1 & (uint)param_5;
   }

   if ((int)uVar2 < 1) {
      lVar3 = *(long*)( param_1 + 0xc );
      if (*(char*)( (long)param_1 + 0x7b ) != '\0') {
         lVar3 = lVar3 + -8;
         *(long*)( param_1 + 0xc ) = lVar3;
      }

   }
 else {
      if (iVar10 == iVar14) {
         return 0;
      }

      lVar3 = FT_MulDiv(lVar13, (long)(int)( param_1[1] - uVar2 ), lVar9);
      lVar7 = lVar7 + lVar3;
      lVar3 = *(long*)( param_1 + 0xc );
      iVar10 = iVar10 + 1;
   }

   *(bool*)( (long)param_1 + 0x7b ) = uVar15 == 0;
   if (*(char*)( (long)param_1 + 0x7a ) != '\0') {
      *(long*)( *(long*)( param_1 + 0x20 ) + 0x28 ) = (long)iVar10;
      *(undefined1*)( (long)param_1 + 0x7a ) = 0;
   }

   iVar11 = ( iVar14 - iVar10 ) + 1;
   if (*(ulong*)( param_1 + 10 ) <= ( ulong )(lVar3 + (long)iVar11 * 8)) {
      param_1[0xe] = 0x62;
      return 1;
   }

   if (lVar13 < 1) {
      lVar3 = FT_MulDiv_No_Round((long)(int)param_1[1], param_2 - param_4, lVar9);
      lVar12 = -1;
      lVar3 = -lVar3;
      lVar13 = (long)(int)param_1[1] * ( param_2 - param_4 );
   }
 else {
      lVar3 = FT_MulDiv_No_Round((long)(int)param_1[1], lVar13, lVar9);
      lVar12 = 1;
      lVar13 = (int)param_1[1] * lVar13;
   }

   plVar8 = *(long**)( param_1 + 0xc );
   param_3 = param_3 - param_5;
   if (0 < iVar11) {
      plVar1 = plVar8 + (long)( iVar14 - iVar10 ) + 1;
      plVar5 = plVar8;
      do {
         plVar6 = plVar5 + 1;
         *plVar5 = lVar7;
         lVar7 = lVar7 + lVar3;
         param_3 = param_3 + lVar13 % lVar9;
         if (-1 < param_3) {
            param_3 = param_3 - lVar9;
            lVar7 = lVar7 + lVar12;
         }

         plVar5 = plVar6;
         plVar8 = plVar1;
      }
 while ( plVar6 != plVar1 );
   }

   *(long**)( param_1 + 0xc ) = plVar8;
   return 0;
}
undefined8 Line_To(long param_1, undefined8 param_2, long param_3) {
   long *plVar1;
   char cVar2;
   int iVar3;
   char cVar4;
   long lVar5;
   ulong uVar6;
   iVar3 = *(int*)( param_1 + 0x98 );
   if (iVar3 == 1) {
      uVar6 = *(ulong*)( param_1 + 0x60 );
      if (param_3 < (long)uVar6) {
         cVar4 = End_Profile(param_1, (long)*(int*)( param_1 + 8 ) <= (long)( (long)( *(int*)( param_1 + 4 ) + -1 ) & uVar6 ));
         if (cVar4 != '\0') {
            return 1;
         }

         cVar4 = New_Profile();
         goto joined_r0x001014eb;
      }

      LAB_0010142d:cVar4 = Line_Up(param_1, *(undefined8*)( param_1 + 0x58 ), uVar6, param_2, param_3, *(undefined8*)( param_1 + 0x68 ), *(undefined8*)( param_1 + 0x70 ));
   }
 else {
      if (iVar3 == 2) {
         lVar5 = *(long*)( param_1 + 0x60 );
         if (lVar5 < param_3) {
            cVar4 = End_Profile(param_1, (long)*(int*)( param_1 + 8 ) <= ( (long)-*(int *)(param_1 + 4) & lVar5 + -1 + (long)*(int*)( param_1 + 4 ) ) - lVar5);
            if (cVar4 != '\0') {
               return 1;
            }

            cVar4 = New_Profile();
            goto joined_r0x001014eb;
         }

      }
 else {
         if (iVar3 != 0) goto LAB_00101409;
         uVar6 = *(ulong*)( param_1 + 0x60 );
         if ((long)uVar6 < param_3) {
            cVar4 = New_Profile(param_1, 1, (long)*(int*)( param_1 + 8 ) <= (long)( ( (long)-*(int *)(param_1 + 4) & ( uVar6 - 1 ) + (long)*(int*)( param_1 + 4 ) ) - uVar6 ));
         }
 else {
            if ((long)uVar6 <= param_3) goto LAB_00101409;
            cVar4 = New_Profile(param_1, 2, (long)*(int*)( param_1 + 8 ) <= (long)( uVar6 & (long)( *(int*)( param_1 + 4 ) + -1 ) ));
         }

         joined_r0x001014eb:if (cVar4 != '\0') {
            return 1;
         }

         if (*(int*)( param_1 + 0x98 ) == 1) {
            uVar6 = *(ulong*)( param_1 + 0x60 );
            goto LAB_0010142d;
         }

         if (*(int*)( param_1 + 0x98 ) != 2) goto LAB_00101409;
         lVar5 = *(long*)( param_1 + 0x60 );
      }

      cVar2 = *(char*)( param_1 + 0x7a );
      cVar4 = Line_Up(param_1, *(undefined8*)( param_1 + 0x58 ), -lVar5, param_2, -param_3, -*(long *)(param_1 + 0x70), -*(long *)(param_1 + 0x68));
      if (( cVar2 != '\0' ) && ( *(char*)( param_1 + 0x7a ) == '\0' )) {
         plVar1 = (long*)( *(long*)( param_1 + 0x80 ) + 0x28 );
         *plVar1 = -*plVar1;
      }

   }

   if (cVar4 != '\0') {
      return 1;
   }

   LAB_00101409:*(undefined8*)( param_1 + 0x58 ) = param_2;
   *(long*)( param_1 + 0x60 ) = param_3;
   return 0;
}
int ft_black_new(undefined8 param_1, undefined8 *param_2) {
   undefined8 *puVar1;
   long in_FS_OFFSET;
   int local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar1 = (undefined8*)ft_mem_alloc(param_1, 8, &local_24);
   if (local_24 == 0) {
      *puVar1 = param_1;
   }

   *param_2 = puVar1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_24;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ft_raster1_get_cbox(long param_1, long param_2, undefined1 (*param_3)[16]) {
   *param_3 = (undefined1[16])0x0;
   param_3[1] = (undefined1[16])0x0;
   if (*(int*)( param_2 + 0x90 ) != *(int*)( param_1 + 0x20 )) {
      return;
   }

   FT_Outline_Get_CBox(param_2 + 200, param_3);
   return;
}
int ft_raster1_render(long param_1, long param_2, int param_3, long *param_4) {
   uint *puVar1;
   long lVar2;
   int iVar3;
   int iVar4;
   undefined8 uVar5;
   char cVar6;
   int iVar7;
   undefined8 uVar8;
   ulong uVar9;
   ulong uVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   int local_ac;
   long local_a8;
   long local_a0;
   undefined4 local_98;
   long local_40;
   lVar2 = param_2 + 200;
   uVar5 = *(undefined8*)( param_1 + 0x10 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_ac = 0;
   if (*(int*)( param_2 + 0x90 ) != *(int*)( param_1 + 0x20 )) {
      local_ac = 6;
      goto LAB_00101641;
   }

   iVar7 = 0x13;
   if (param_3 != 2) goto LAB_00101674;
   if (( *(byte*)( *(long*)( param_2 + 0x128 ) + 8 ) & 1 ) != 0) {
      ft_mem_free(uVar5, *(undefined8*)( param_2 + 0xa8 ));
      *(undefined8*)( param_2 + 0xa8 ) = 0;
      puVar1 = (uint*)( *(long*)( param_2 + 0x128 ) + 8 );
      *puVar1 = *puVar1 & 0xfffffffe;
   }

   cVar6 = ft_glyphslot_preset_bitmap(param_2, 2, param_4);
   if (cVar6 == '\0') {
      uVar8 = ft_mem_realloc(uVar5, (long)*(int*)( param_2 + 0xa0 ), 0, *(undefined4*)( param_2 + 0x98 ), 0, &local_ac);
      *(undefined8*)( param_2 + 0xa8 ) = uVar8;
      if (local_ac != 0) goto LAB_00101641;
      iVar7 = *(int*)( param_2 + 0xc0 );
      iVar3 = *(int*)( param_2 + 0x98 );
      iVar4 = *(int*)( param_2 + 0xc4 );
      puVar1 = (uint*)( *(long*)( param_2 + 0x128 ) + 8 );
      *puVar1 = *puVar1 | 1;
      uVar9 = ( ulong )(( iVar3 - iVar4 ) * 0x40);
      uVar11 = ( ulong )(iVar7 * -0x40);
      if (param_4 != (long*)0x0) {
         uVar11 = uVar11 + *param_4;
         uVar9 = uVar9 + param_4[1];
      }

      uVar10 = uVar11 | uVar9;
      if (uVar10 != 0) {
         FT_Outline_Translate(lVar2, uVar11);
      }

      local_a8 = param_2 + 0x98;
      local_98 = 0;
      local_a0 = lVar2;
      local_ac = ( **(code**)( param_1 + 0x70 ) )(*(undefined8*)( param_1 + 0x68 ), &local_a8);
      if (local_ac != 0) goto LAB_00101649;
      *(undefined4*)( param_2 + 0x90 ) = 0x62697473;
   }
 else {
      local_ac = 0x62;
      LAB_00101641:uVar10 = 0;
      uVar9 = 0;
      uVar11 = 0;
      LAB_00101649:if (( *(byte*)( *(long*)( param_2 + 0x128 ) + 8 ) & 1 ) != 0) {
         ft_mem_free(uVar5, *(undefined8*)( param_2 + 0xa8 ));
         *(undefined8*)( param_2 + 0xa8 ) = 0;
         puVar1 = (uint*)( *(long*)( param_2 + 0x128 ) + 8 );
         *puVar1 = *puVar1 & 0xfffffffe;
      }

   }

   iVar7 = local_ac;
   if (uVar10 != 0) {
      FT_Outline_Translate(lVar2, -uVar11, -uVar9);
      iVar7 = local_ac;
   }

   LAB_00101674:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar7;
}
undefined8 ft_raster1_transform(long param_1, long param_2, long param_3, undefined8 *param_4) {
   undefined8 uVar1;
   uVar1 = 6;
   if (*(int*)( param_2 + 0x90 ) == *(int*)( param_1 + 0x20 )) {
      if (param_3 != 0) {
         FT_Outline_Transform(param_2 + 200, param_3);
      }

      if (param_4 != (undefined8*)0x0) {
         FT_Outline_Translate(param_2 + 200, *param_4, param_4[1]);
      }

      uVar1 = 0;
   }

   return uVar1;
}
undefined8 Cubic_To(long param_1, undefined8 param_2, long param_3, undefined8 param_4, long param_5, undefined8 param_6, ulong param_7) {
   long *plVar1;
   long lVar2;
   char cVar3;
   char cVar4;
   ulong uVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   long lVar9;
   bool bVar10;
   ulong uVar11;
   int iVar12;
   ulong uVar13;
   long in_FS_OFFSET;
   undefined8 local_658;
   ulong local_650;
   undefined8 local_648;
   long local_640;
   undefined8 local_638;
   long local_630;
   undefined8 local_628;
   ulong local_620;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_638 = param_2;
   local_630 = param_3;
   local_648 = param_4;
   local_640 = param_5;
   local_658 = param_6;
   local_650 = param_7;
   local_628 = *(undefined8*)( param_1 + 0x58 );
   uVar5 = *(ulong*)( param_1 + 0x60 );
   local_620 = uVar5;
   puVar8 = &local_658;
   do {
      if ((long)param_7 < (long)uVar5) {
         uVar13 = param_7;
         uVar11 = uVar5;
         if (param_3 <= param_5) goto LAB_0010191f;
         LAB_00101a66:lVar9 = param_3;
         if ((long)uVar13 <= param_5) goto LAB_0010192e;
         LAB_00101a75:puVar7 = puVar8 + 6;
         Split_Cubic(puVar8);
         if (puVar7 < &local_658) goto LAB_00101a86;
      }
 else {
         uVar13 = uVar5;
         uVar11 = param_7;
         if (param_5 < param_3) goto LAB_00101a66;
         LAB_0010191f:lVar9 = param_5;
         if (param_3 < (long)uVar13) goto LAB_00101a75;
         LAB_0010192e:if ((long)uVar11 < lVar9) goto LAB_00101a75;
         if (uVar5 != param_7) {
            iVar12 = *(int*)( param_1 + 0x98 );
            if ((long)param_7 < (long)uVar5) {
               uVar13 = param_7;
               if (iVar12 == 2) {
                  LAB_001019c9:puVar8[1] = -uVar13;
                  lVar9 = *(long*)( param_1 + 0x68 );
                  puVar8[3] = -param_5;
                  lVar2 = *(long*)( param_1 + 0x70 );
                  puVar8[5] = -param_3;
                  cVar3 = *(char*)( param_1 + 0x7a );
                  puVar8[7] = -uVar5;
                  cVar4 = Bezier_Up(param_1, 3, puVar8, Split_Cubic, -lVar2, -lVar9);
                  if (( cVar3 != '\0' ) && ( *(char*)( param_1 + 0x7a ) == '\0' )) {
                     plVar1 = (long*)( *(long*)( param_1 + 0x80 ) + 0x28 );
                     *plVar1 = -*plVar1;
                  }

                  puVar8[1] = -puVar8[1];
                  if (cVar4 == '\0') goto LAB_00101a32;
               }
 else {
                  uVar13 = 2;
                  bVar10 = (long)*(int*)( param_1 + 8 ) <= (long)( uVar5 & (long)( *(int*)( param_1 + 4 ) + -1 ) );
                  LAB_0010197e:uVar5 = (ulong)(uint)(int)bVar10;
                  if (( iVar12 == 0 ) || ( cVar3 = End_Profile(param_1, uVar5) ),cVar3 == '\0') {
                     iVar12 = (int)uVar13;
                     cVar3 = New_Profile(param_1, uVar13 & 0xffffffff, uVar5 & 0xffffffff);
                     if (cVar3 == '\0') {
                        if (iVar12 == 1) goto LAB_00101af0;
                        param_5 = puVar8[3];
                        param_3 = puVar8[5];
                        uVar5 = puVar8[7];
                        uVar13 = puVar8[1];
                        goto LAB_001019c9;
                     }

                  }

               }

               LAB_00101b20:uVar6 = 1;
               goto LAB_00101a90;
            }

            if (iVar12 != 1) {
               uVar13 = 1;
               bVar10 = (long)*(int*)( param_1 + 8 ) <= (long)( ( (long)-*(int *)(param_1 + 4) & ( uVar5 - 1 ) + (long)*(int*)( param_1 + 4 ) ) - uVar5 );
               goto LAB_0010197e;
            }

            LAB_00101af0:cVar3 = Bezier_Up(param_1, 3, puVar8, Split_Cubic, *(undefined8*)( param_1 + 0x68 ), *(undefined8*)( param_1 + 0x70 ));
            if (cVar3 != '\0') goto LAB_00101b20;
         }

         LAB_00101a32:puVar7 = puVar8 + -6;
         if (puVar7 < &local_658) {
            LAB_00101a86:*(undefined8*)( param_1 + 0x58 ) = param_6;
            uVar6 = 0;
            *(ulong*)( param_1 + 0x60 ) = param_7;
            LAB_00101a90:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return uVar6;
         }

      }

      uVar5 = puVar7[7];
      param_3 = puVar7[5];
      param_5 = puVar7[3];
      param_7 = puVar7[1];
      param_6 = *puVar7;
      puVar8 = puVar7;
   }
 while ( true );
}
/* WARNING: Type propagation algorithm not settling */int Render_Single_Pass_constprop_0(undefined4 *param_1, char param_2, int param_3) {
   undefined8 uVar1;
   int iVar2;
   char cVar3;
   long *plVar4;
   long *plVar5;
   ulong uVar6;
   ulong uVar7;
   ulong *puVar8;
   ulong uVar9;
   ulong *puVar10;
   short sVar11;
   long lVar12;
   ulong uVar13;
   ulong **ppuVar14;
   int iVar15;
   long lVar16;
   short sVar17;
   long lVar18;
   byte *pbVar19;
   long *plVar20;
   ulong *puVar21;
   uint uVar22;
   long lVar23;
   ulong *puVar24;
   byte bVar25;
   int iVar26;
   long lVar27;
   long lVar28;
   long lVar29;
   long lVar30;
   long lVar31;
   long lVar32;
   long lVar33;
   long lVar34;
   ushort uVar35;
   ulong *puVar36;
   ushort uVar37;
   int iVar38;
   ulong uVar39;
   long lVar40;
   byte *pbVar41;
   long in_FS_OFFSET;
   long local_108;
   uint local_100;
   int local_fc;
   int local_f8;
   ulong *local_e0;
   ulong *local_d8;
   ulong *local_d0;
   int aiStack_c8[34];
   long local_40;
   local_108 = (long)param_3;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_f8 = 0;
   local_fc = 0;
   local_100 = param_3;
   do {
      while (true) {
         *(undefined2*)( (long)param_1 + 0x7a ) = 0;
         *(undefined8*)( param_1 + 0x22 ) = 0;
         *(undefined8*)( param_1 + 0xe ) = 0;
         sVar11 = *(short*)( param_1 + 0x32 );
         *(long*)( param_1 + 0x1a ) = (long)local_fc * (long)(int)param_1[1];
         uVar39 = *(long*)( param_1 + 8 ) - 0x40;
         *(long*)( param_1 + 0x1c ) = (int)param_1[1] * local_108;
         uVar7 = *(ulong*)( param_1 + 6 );
         *(ulong*)( param_1 + 0x20 ) = uVar7;
         *(ulong*)( param_1 + 10 ) = uVar39;
         *(ulong*)( param_1 + 0xc ) = uVar7;
         *(ulong*)( uVar7 + 0x10 ) = uVar7;
         *(undefined2*)( param_1 + 0x1e ) = 0;
         if (sVar11 < 1) break;
         lVar40 = 0;
         uVar39 = 0xffffffff;
         do {
            lVar12 = (long)(int)param_1[3];
            param_1[0x26] = 0;
            lVar18 = (long)( (int)uVar39 + 1 );
            lVar27 = (long)(int)param_1[2];
            *(undefined8*)( param_1 + 0x24 ) = 0;
            sVar11 = *(short*)( *(long*)( param_1 + 0x38 ) + lVar40 * 2 );
            uVar39 = (ulong)sVar11;
            plVar20 = (long*)( uVar39 * 0x10 + *(long*)( param_1 + 0x34 ) );
            plVar4 = (long*)( *(long*)( param_1 + 0x34 ) + lVar18 * 0x10 );
            lVar16 = *plVar4 * lVar12 - lVar27;
            lVar23 = plVar4[1] * lVar12 - lVar27;
            lVar29 = *plVar20 * lVar12 - lVar27;
            lVar27 = lVar12 * plVar20[1] - lVar27;
            lVar12 = lVar27;
            lVar28 = lVar16;
            if (param_2 == '\0') {
               lVar12 = lVar29;
               lVar28 = lVar23;
               lVar23 = lVar16;
               lVar29 = lVar27;
            }

            pbVar19 = (byte*)( lVar18 + *(long*)( param_1 + 0x36 ) );
            bVar25 = *pbVar19;
            if (( bVar25 & 4 ) != 0) {
               *(byte*)( param_1 + 0x10 ) = bVar25 >> 5;
               bVar25 = *pbVar19;
            }

            if (( bVar25 & 3 ) == 2) goto LAB_00102108;
            if (( bVar25 & 3 ) == 0) {
               if (( *(byte*)( *(long*)( param_1 + 0x36 ) + uVar39 ) & 3 ) == 1) {
                  plVar20 = plVar20 + -2;
               }
 else {
                  lVar29 = ( lVar29 + lVar28 ) / 2;
                  lVar12 = ( lVar12 + lVar23 ) / 2;
               }

               plVar4 = plVar4 + -2;
               pbVar19 = pbVar19 + -1;
               lVar28 = lVar29;
               lVar23 = lVar12;
            }

            *(long*)( param_1 + 0x16 ) = lVar23;
            *(long*)( param_1 + 0x18 ) = lVar28;
            if (plVar4 < plVar20) {
               do {
                  plVar5 = plVar4 + 2;
                  pbVar41 = pbVar19 + 1;
                  if (( pbVar19[1] & 3 ) == 0) {
                     lVar27 = plVar4[2] * (long)(int)param_1[3] - (long)(int)param_1[2];
                     lVar29 = (long)(int)param_1[3] * plVar4[3] - (long)(int)param_1[2];
                     lVar12 = lVar27;
                     plVar4 = plVar5;
                     if (param_2 == '\0') {
                        lVar12 = lVar29;
                        lVar29 = lVar27;
                     }

                     while (true) {
                        if (plVar20 <= plVar4) {
                           cVar3 = Conic_To(param_1, lVar29, lVar12, lVar23, lVar28);
                           goto joined_r0x001020fa;
                        }

                        plVar5 = plVar4 + 2;
                        pbVar41 = pbVar41 + 1;
                        lVar16 = plVar4[2] * (long)(int)param_1[3] - (long)(int)param_1[2];
                        lVar18 = (long)(int)param_1[3] * plVar4[3] - (long)(int)param_1[2];
                        lVar27 = lVar18;
                        if (param_2 == '\0') {
                           lVar27 = lVar16;
                           lVar16 = lVar18;
                        }

                        if (( *pbVar41 & 3 ) == 1) break;
                        if (( *pbVar41 & 3 ) != 0) goto LAB_00102108;
                        cVar3 = Conic_To(param_1, lVar29, lVar12, ( lVar29 + lVar27 ) / 2, ( lVar12 + lVar16 ) / 2);
                        lVar12 = lVar16;
                        lVar29 = lVar27;
                        plVar4 = plVar5;
                        if (cVar3 != '\0') goto LAB_00101d97;
                     }
;
                     cVar3 = Conic_To(param_1, lVar29, lVar12, lVar27, lVar16);
                     pbVar19 = pbVar41;
                     joined_r0x0010215a:if (cVar3 != '\0') goto LAB_00101d97;
                  }
 else {
                     if (( pbVar19[1] & 3 ) == 1) {
                        lVar27 = plVar4[2] * (long)(int)param_1[3] - (long)(int)param_1[2];
                        lVar29 = (long)(int)param_1[3] * plVar4[3] - (long)(int)param_1[2];
                        lVar12 = lVar27;
                        if (param_2 == '\0') {
                           lVar12 = lVar29;
                           lVar29 = lVar27;
                        }

                        cVar3 = Line_To(param_1, lVar29, lVar12);
                        pbVar19 = pbVar41;
                        goto joined_r0x0010215a;
                     }

                     if (( plVar20 < plVar4 + 4 ) || ( ( pbVar19[2] & 3 ) != 2 )) goto LAB_00102108;
                     lVar27 = (long)(int)param_1[3];
                     plVar5 = plVar4 + 6;
                     lVar16 = (long)(int)param_1[2];
                     lVar31 = plVar4[2] * lVar27 - lVar16;
                     lVar29 = plVar4[3] * lVar27 - lVar16;
                     lVar18 = plVar4[4] * lVar27 - lVar16;
                     lVar12 = plVar4[5] * lVar27 - lVar16;
                     if (param_2 == '\0') {
                        lVar30 = lVar18;
                        lVar33 = lVar29;
                        lVar32 = lVar31;
                        lVar34 = lVar12;
                        if (plVar20 < plVar5) goto LAB_00102798;
                        lVar30 = plVar4[6] * lVar27 - lVar16;
                        lVar33 = lVar27 * plVar4[7] - lVar16;
                        lVar27 = lVar18;
                        lVar16 = lVar31;
                     }
 else {
                        lVar30 = lVar12;
                        lVar33 = lVar31;
                        lVar32 = lVar29;
                        lVar34 = lVar18;
                        if (plVar20 < plVar5) {
                           LAB_00102798:cVar3 = Cubic_To(param_1, lVar32, lVar33, lVar30, lVar34, lVar23, lVar28);
                           joined_r0x001020fa:uVar39 = (ulong)(uint)(int)sVar11;
                           goto joined_r0x001020fa;
                        }

                        lVar33 = plVar4[6] * lVar27 - lVar16;
                        lVar30 = lVar27 * plVar4[7] - lVar16;
                        lVar27 = lVar12;
                        lVar16 = lVar29;
                        lVar12 = lVar18;
                        lVar29 = lVar31;
                     }

                     cVar3 = Cubic_To(param_1, lVar16, lVar29, lVar27, lVar12, lVar30, lVar33);
                     if (cVar3 != '\0') goto LAB_00101d97;
                     pbVar19 = pbVar19 + 3;
                  }

                  plVar4 = plVar5;
               }
 while ( plVar5 < plVar20 );
               uVar39 = (ulong)(uint)(int)sVar11;
            }

            cVar3 = Line_To(param_1, lVar23, lVar28);
            joined_r0x001020fa:if (cVar3 != '\0') goto LAB_00101d97;
            iVar26 = param_1[1];
            uVar7 = *(ulong*)( param_1 + 0x18 );
            lVar12 = *(long*)( param_1 + 0x20 );
            lVar28 = *(long*)( param_1 + 0xc );
            uVar6 = (long)( iVar26 + -1 ) & uVar7;
            if (( ( ( uVar6 == 0 ) && ( *(long*)( param_1 + 0x1a ) <= (long)uVar7 ) ) && ( (long)uVar7 <= *(long*)( param_1 + 0x1c ) ) ) && ( ( *(long*)( param_1 + 0x24 ) != 0 && ( ( ( *(ushort*)( *(long*)( param_1 + 0x24 ) + 0x18 ) ^ *(ushort*)( lVar12 + 0x18 ) ) & 8 ) == 0 ) ) )) {
               lVar28 = lVar28 + -8;
               *(long*)( param_1 + 0xc ) = lVar28;
            }

            if (( *(long*)( lVar12 + 0x10 ) == lVar28 ) || ( ( *(byte*)( lVar12 + 0x18 ) & 8 ) == 0 )) {
               uVar6 = ( ( uVar7 - 1 ) + (long)iVar26 & (long)-iVar26 ) - uVar7;
            }

            cVar3 = End_Profile(param_1, (long)(int)param_1[2] <= (long)uVar6);
            if (cVar3 != '\0') goto LAB_00101d97;
            if (*(long*)( param_1 + 0x24 ) != 0) {
               *(long*)( lVar12 + 0x38 ) = *(long*)( param_1 + 0x24 );
            }

            lVar40 = lVar40 + 1;
         }
 while ( (int)lVar40 < (int)*(short*)( param_1 + 0x32 ) );
         uVar35 = *(ushort*)( param_1 + 0x1e );
         if (( uVar35 < 2 ) || ( lVar40 = *(long*)( param_1 + 0x22 ) * (long*)( param_1 + 0x22 ) == 0 )) {
            uVar7 = *(ulong*)( param_1 + 0xc );
            uVar39 = *(ulong*)( param_1 + 10 );
            break;
         }

         do {
            lVar28 = *(long*)( lVar40 + 0x20 );
            lVar12 = 0;
            if (uVar35 != 1) {
               lVar12 = *(long*)( lVar40 + 0x10 ) + lVar28 * 8;
            }

            *(long*)( lVar40 + 8 ) = lVar12;
            if (( *(byte*)( lVar40 + 0x18 ) & 8 ) == 0) {
               uVar22 = ( (int)*(ulong*)( lVar40 + 0x28 ) + 1 ) - (int)lVar28;
               uVar39 = (ulong)uVar22;
               *(long*)( lVar40 + 0x10 ) = *(long*)( lVar40 + 0x10 ) + lVar28 * 8 + -8;
               *(long*)( lVar40 + 0x28 ) = (long)(int)uVar22;
            }
 else {
               uVar39 = *(ulong*)( lVar40 + 0x28 ) & 0xffffffff;
            }

            cVar3 = Insert_Y_Turn(param_1, uVar39);
            if (( cVar3 != '\0' ) || ( cVar3 = cVar3 != '\0' )) goto LAB_00101d97;
            uVar35 = uVar35 - 1;
            lVar40 = lVar12;
         }
 while ( uVar35 != 0 );
         if (*(ulong*)( param_1 + 0xc ) < *(ulong*)( param_1 + 10 )) {
            local_e0 = (ulong*)0x0;
            local_d8 = (ulong*)0x0;
            local_d0 = (ulong*)0x0;
            uVar39 = *(long*)( param_1 + 0x1a ) >> ( ( byte ) * param_1 & 0x3f );
            uVar7 = *(long*)( param_1 + 0x1c ) >> ( ( byte ) * param_1 & 0x3f );
            puVar24 = *(ulong**)( param_1 + 0x22 );
            do {
               puVar21 = (ulong*)puVar24[1];
               *puVar24 = 0;
               sVar11 = (short)puVar24[5];
               uVar6 = uVar7;
               if (sVar11 < (short)uVar7) {
                  uVar6 = puVar24[5];
               }

               uVar7 = uVar6 & 0xffffffff;
               uVar22 = ( ushort )(sVar11 + (short)puVar24[4]) - 1;
               sVar11 = (short)uVar39;
               uVar39 = uVar39 & 0xffffffff;
               if (sVar11 < (short)uVar22) {
                  uVar39 = (ulong)uVar22;
               }

               ppuVar14 = &local_e0;
               for (puVar8 = local_e0; ( puVar8 != (ulong*)0x0 && ( (long)*puVar8 < 1 ) ); puVar8 = (ulong*)puVar8[1]) {
                  ppuVar14 = (ulong**)( puVar8 + 1 );
               }

               puVar24[1] = (ulong)puVar8;
               *ppuVar14 = puVar24;
               puVar24 = puVar21;
            }
 while ( puVar21 != (ulong*)0x0 );
            if (param_1[0xf] != 0) {
               sVar11 = (short)uVar7;
               ( **(code**)( param_1 + 0x3c ) )(param_1, (int)sVar11, (int)(short)uVar39);
               for (puVar24 = local_e0; puVar24 != (ulong*)0x0; puVar24 = (ulong*)puVar24[1]) {
                  *(int*)( puVar24 + 6 ) = (int)puVar24[5] - (int)sVar11;
               }

               iVar26 = param_1[0xf];
               if (0 < iVar26) {
                  if (*(long*)( *(long*)( param_1 + 8 ) + (long)-iVar26 * 8 ) != (long)sVar11) {
                     LAB_00102348:sVar11 = 0;
                     LAB_00102368:puVar24 = local_e0;
                     while (puVar21 = puVar24,puVar24 != (ulong*)0x0) {
                        while (true) {
                           puVar24 = (ulong*)puVar21[1];
                           puVar8 = puVar21 + 6;
                           *(int*)puVar8 = (int)*puVar8 - (int)sVar11;
                           if ((int)*puVar8 != 0) break;
                           if (local_e0 != (ulong*)0x0) {
                              puVar8 = local_e0;
                              ppuVar14 = &local_e0;
                              if (local_e0 != puVar21) {
                                 do {
                                    puVar36 = puVar8;
                                    puVar8 = (ulong*)puVar36[1];
                                    if (puVar8 == (ulong*)0x0) goto LAB_001023ad;
                                 }
 while ( puVar8 != puVar21 );
                                 ppuVar14 = (ulong**)( puVar36 + 1 );
                              }

                              *ppuVar14 = puVar24;
                           }

                           LAB_001023ad:ppuVar14 = &local_d8;
                           puVar8 = local_d8;
                           if (( puVar21[3] & 8 ) == 0) {
                              puVar8 = local_d0;
                              ppuVar14 = &local_d0;
                              if (local_d0 == (ulong*)0x0) {
                                 puVar8 = (ulong*)0x0;
                              }
 else {
                                 do {
                                    if ((long)*puVar21 < (long)*puVar8) {
                                       puVar21[1] = (ulong)puVar8;
                                       *ppuVar14 = puVar21;
                                       goto LAB_001023e9;
                                    }

                                    ppuVar14 = (ulong**)( puVar8 + 1 );
                                    puVar8 = (ulong*)puVar8[1];
                                 }
 while ( puVar8 != (ulong*)0x0 );
                              }

                           }
 else {
                              for (; ( puVar8 != (ulong*)0x0 && ( (long)*puVar8 <= (long)*puVar21 ) ); puVar8 = (ulong*)puVar8[1]) {
                                 ppuVar14 = (ulong**)( puVar8 + 1 );
                              }

                           }

                           puVar21[1] = (ulong)puVar8;
                           *ppuVar14 = puVar21;
                           LAB_001023e9:puVar21 = puVar24;
                           if (puVar24 == (ulong*)0x0) goto LAB_001023ee;
                        }
;
                     }
;
                     LAB_001023ee:Sort(&local_d8);
                     Sort(&local_d0);
                     iVar15 = iVar26 + -1;
                     param_1[0xf] = iVar15;
                     uVar1 = *(undefined8*)( *(long*)( param_1 + 8 ) + (long)-iVar26 * 8 );
                     uVar35 = (ushort)uVar1;
                     local_100 = (uint)uVar35;
                     iVar26 = (int)uVar1 - (int)uVar7;
                     sVar11 = (short)iVar26;
                     uVar37 = (ushort)uVar7;
                     if ((short)uVar37 < (short)uVar35) {
                        iVar15 = (short)uVar37 + 1;
                        iVar38 = (int)(short)uVar37;
                        iVar2 = iVar15;
                        do {
                           puVar21 = local_d0;
                           puVar24 = local_d8;
                           if (( local_d8 != (ulong*)0x0 ) && ( sVar17 = 0 ),puVar36 = local_d0,puVar8 = local_d8,local_d0 != (ulong*)0x0) {
                              do {
                                 uVar7 = *puVar8;
                                 uVar6 = *puVar36;
                                 uVar13 = uVar7;
                                 if ((long)uVar7 <= (long)uVar6) {
                                    uVar13 = uVar6;
                                    uVar6 = uVar7;
                                 }

                                 lVar40 = (long)(int)param_1[1];
                                 if (lVar40 < (long)( uVar13 - uVar6 )) {
                                    LAB_00102490:( **(code**)( param_1 + 0x3e ) )(param_1, iVar38);
                                    LAB_001024a2:puVar8 = (ulong*)puVar8[1];
                                    puVar36 = (ulong*)puVar36[1];
                                 }
 else {
                                    uVar7 = (ulong)(int)-param_1[1];
                                    uVar9 = uVar7 & ( uVar13 - 1 ) + lVar40;
                                    uVar7 = uVar7 & uVar6;
                                    if (( ( uVar6 == uVar7 ) || ( uVar13 == uVar9 ) ) || ( ( (long)uVar7 <= (long)uVar9 && ( uVar9 != uVar7 + lVar40 ) ) )) goto LAB_00102490;
                                    if (( puVar8[3] & 7 ) == 2) goto LAB_001024a2;
                                    *puVar8 = uVar6;
                                    sVar17 = sVar17 + 1;
                                    *puVar36 = uVar13;
                                    puVar36 = (ulong*)puVar36[1];
                                    *(undefined4*)( puVar8 + 6 ) = 1;
                                    puVar8 = (ulong*)puVar8[1];
                                 }

                              }
 while ( ( puVar8 != (ulong*)0x0 ) && ( puVar36 != (ulong*)0x0 ) );
                              puVar8 = puVar21;
                              puVar36 = puVar24;
                              if (0 < sVar17) {
                                 do {
                                    if ((int)puVar36[6] != 0) {
                                       uVar7 = *puVar8;
                                       *(undefined4*)( puVar36 + 6 ) = 0;
                                       ( **(code**)( param_1 + 0x40 ) )(param_1, iVar38, *puVar36, uVar7, puVar36, puVar8);
                                    }

                                    puVar10 = puVar8 + 1;
                                 }
 while ( ( (ulong*)puVar36[1] != (ulong*)0x0 ) && ( puVar8 = (ulong*)*puVar10 ),puVar36 = (ulong*)puVar36[1],(ulong*)*puVar10 != (ulong*)0x0 );
                              }

                           }

                           ( **(code**)( param_1 + 0x42 ) )(param_1);
                           if (iVar2 == ( iVar26 - 1U & 0xffff ) + iVar15) goto code_r0x0010255f;
                           Sort(&local_d8);
                           Sort(&local_d0);
                           iVar38 = iVar2;
                           iVar2 = iVar2 + 1;
                        }
 while ( true );
                     }

                     local_100 = (uint)uVar37;
                     puVar21 = local_d0;
                     puVar24 = local_d8;
                     goto LAB_00102567;
                  }

                  iVar26 = iVar26 + -1;
                  param_1[0xf] = iVar26;
                  if (iVar26 != 0) goto LAB_00102348;
               }

               local_100 = (uint)uVar6;
               LAB_00102704:sVar11 = (short)local_100;
               while (sVar11 <= (short)uVar39) {
                  local_100 = local_100 + 1;
                  ( **(code**)( param_1 + 0x42 ) )(param_1);
                  sVar11 = (short)local_100;
               }
;
               goto joined_r0x001021fd;
            }

            LAB_00102108:param_1[0xe] = 0x14;
            iVar26 = 0x14;
            goto LAB_00102115;
         }

         LAB_00101d97:iVar26 = param_1[0xe];
         if (( iVar26 != 0x62 ) || ( local_fc == local_100 )) goto LAB_00102115;
         aiStack_c8[local_f8] = local_fc;
         local_f8 = local_f8 + 1;
         local_fc = ( (int)( local_fc + local_100 ) >> 1 ) + 1;
      }
;
      *(undefined8*)( param_1 + 0x22 ) = 0;
      if (uVar39 <= uVar7) goto LAB_00101d97;
      joined_r0x001021fd:if (local_f8 + -1 < 0) {
         iVar26 = 0;
         LAB_00102115:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return iVar26;
      }

      local_f8 = local_f8 + -1;
      local_100 = local_fc + -1;
      local_108 = (long)(int)local_100;
      local_fc = aiStack_c8[local_f8];
   }
 while ( true );
   code_r0x0010255f:iVar15 = param_1[0xf];
   LAB_00102567:puVar8 = puVar24;
   if (puVar24 != (ulong*)0x0) {
      while (( puVar24 = (ulong*)puVar8[1] ),puVar8[4] == 0 && ( local_d8 != (ulong*)0x0 )) {
         puVar36 = local_d8;
         ppuVar14 = &local_d8;
         if (local_d8 != puVar8) {
            do {
               puVar10 = puVar36;
               puVar36 = (ulong*)puVar10[1];
               if (puVar36 == (ulong*)0x0) goto LAB_00102567;
            }
 while ( puVar36 != puVar8 );
            ppuVar14 = (ulong**)( puVar10 + 1 );
         }

         *ppuVar14 = puVar24;
         puVar8 = puVar24;
         if (puVar24 == (ulong*)0x0) goto LAB_001025b0;
      }
;
      goto LAB_00102567;
   }

   LAB_001025b0:puVar24 = puVar21;
   if (puVar24 != (ulong*)0x0) {
      puVar21 = (ulong*)puVar24[1];
      if (( puVar24[4] == 0 ) && ( local_d0 != (ulong*)0x0 )) {
         puVar8 = local_d0;
         ppuVar14 = &local_d0;
         if (local_d0 != puVar24) {
            do {
               puVar36 = puVar8;
               puVar8 = (ulong*)puVar36[1];
               if (puVar8 == (ulong*)0x0) goto LAB_001025b0;
            }
 while ( puVar8 != puVar24 );
            ppuVar14 = (ulong**)( puVar36 + 1 );
         }

         *ppuVar14 = puVar21;
      }

      goto LAB_001025b0;
   }

   if (iVar15 < 1) goto LAB_00102704;
   uVar7 = (ulong)(ushort)local_100;
   iVar26 = iVar15;
   goto LAB_00102368;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 ft_black_render(long param_1, undefined8 *param_2) {
   short *psVar1;
   int *piVar2;
   ulong uVar3;
   undefined8 uVar4;
   undefined1 *puVar5;
   char cVar6;
   undefined8 uVar7;
   undefined4 uVar8;
   undefined1 *puVar9;
   undefined4 uVar10;
   long in_FS_OFFSET;
   undefined8 uVar11;
   undefined1 local_4008[16384];
   puVar5 = &stack0xfffffffffffffff8;
   do {
      puVar9 = puVar5;
      *(undefined8*)( puVar9 + -0x1000 ) = *(undefined8*)( puVar9 + -0x1000 );
      puVar5 = puVar9 + -0x1000;
   }
 while ( puVar9 + -0x1000 != local_4008 );
   psVar1 = (short*)param_2[1];
   *(undefined8*)( puVar9 + 0x2ff8 ) = *(undefined8*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      uVar7 = 0x60;
      goto LAB_00102a8a;
   }

   if (psVar1 != (short*)0x0) {
      piVar2 = (int*)*param_2;
      if (( psVar1[1] == 0 ) || ( *psVar1 < 1 )) goto LAB_00102a88;
      if (( *(long*)( psVar1 + 0xc ) != 0 ) && ( *(long*)( psVar1 + 4 ) != 0 )) {
         uVar7 = 0x14;
         if (( (int)psVar1[1] != *(short*)( *(long*)( psVar1 + 0xc ) + -2 + (long)*psVar1 * 2 ) + 1 ) || ( uVar7 = 0x13(*(byte*)( param_2 + 2 ) & 3) != 0 )) goto LAB_00102a8a;
         if (piVar2 == (int*)0x0) {
            LAB_00102ad0:uVar7 = 6;
         }
 else {
            if (( piVar2[1] != 0 ) && ( *piVar2 != 0 )) {
               if (*(long*)( piVar2 + 4 ) == 0) goto LAB_00102ad0;
               uVar7 = *(undefined8*)( psVar1 + 4 );
               uVar11 = *(undefined8*)piVar2;
               uVar4 = *(undefined8*)( piVar2 + 2 );
               *(undefined8*)( puVar9 + -0x1058 ) = *(undefined8*)psVar1;
               *(undefined8*)( puVar9 + -0x1050 ) = uVar7;
               uVar7 = *(undefined8*)( psVar1 + 0xc );
               *(undefined8*)( puVar9 + -0x1048 ) = *(undefined8*)( psVar1 + 8 );
               *(undefined8*)( puVar9 + -0x1040 ) = uVar7;
               uVar3 = *(ulong*)( psVar1 + 0x10 );
               *(undefined8*)( puVar9 + -0x1080 ) = uVar11;
               *(undefined8*)( puVar9 + -0x1078 ) = uVar4;
               uVar7 = *(undefined8*)( piVar2 + 4 );
               uVar11 = *(undefined8*)( piVar2 + 6 );
               *(ulong*)( puVar9 + -0x1038 ) = uVar3;
               *(undefined8*)( puVar9 + -0x1070 ) = uVar7;
               *(undefined8*)( puVar9 + -0x1068 ) = uVar11;
               *(undefined8*)( puVar9 + -0x1060 ) = *(undefined8*)( piVar2 + 8 );
               *(undefined1**)( puVar9 + -0x1108 ) = puVar9 + -0x1010;
               *(undefined1**)( puVar9 + -0x1100 ) = puVar9 + 0x2ff0;
               if (( uVar3 & 0x100 ) == 0) {
                  uVar10 = 0x20;
                  uVar8 = 2;
                  uVar7 = __LC3;
                  uVar11 = _UNK_00102be8;
               }
 else {
                  uVar10 = 0x100;
                  uVar8 = 0x1e;
                  uVar7 = __LC2;
                  uVar11 = _UNK_00102bd8;
               }

               cVar6 = '\x02';
               if (( uVar3 & 8 ) == 0) {
                  cVar6 = (char)( ( ( uint )(( uVar3 & 0xffffffff ) >> 4) & 1 ) << 2 ) + ( ( uVar3 & 0x20 ) == 0 );
               }

               puVar9[-0x10e0] = cVar6;
               *(undefined8*)( puVar9 + -0x1120 ) = uVar7;
               *(undefined8*)( puVar9 + -0x1118 ) = uVar11;
               *(undefined4*)( puVar9 + -0x110c ) = uVar8;
               *(code**)( puVar9 + -0x1030 ) = Vertical_Sweep_Init;
               *(code**)( puVar9 + -0x1028 ) = Vertical_Sweep_Span;
               *(short*)( puVar9 + -0x10de ) = (short)*(undefined4*)( puVar9 + -0x107c );
               *(undefined4*)( puVar9 + -0x1110 ) = uVar10;
               *(long*)( puVar9 + -0x10d8 ) = *(long*)( puVar9 + -0x1070 );
               *(code**)( puVar9 + -0x1020 ) = Vertical_Sweep_Drop;
               *(code**)( puVar9 + -0x1018 ) = Vertical_Sweep_Step;
               if (0 < *(int*)( puVar9 + -0x1078 )) {
                  *(ulong*)( puVar9 + -0x10d8 ) = *(long*)( puVar9 + -0x1070 ) + (long)*(int*)( puVar9 + -0x1078 ) * ( ulong )(*(int*)( puVar9 + -0x1080 ) - 1U);
               }

               *(undefined8*)( puVar9 + -0x1128 ) = 0x102a13;
               uVar7 = Render_Single_Pass_constprop_0(puVar9 + -0x1120, 0, *(int*)( puVar9 + -0x1080 ) - 1U);
               if ((int)uVar7 != 0) goto LAB_00102a8a;
               if (( puVar9[-0x1037] & 2 ) == 0) {
                  *(code**)( puVar9 + -0x1030 ) = Horizontal_Sweep_Init;
                  *(code**)( puVar9 + -0x1028 ) = Horizontal_Sweep_Span;
                  *(code**)( puVar9 + -0x1020 ) = Horizontal_Sweep_Drop;
                  *(code**)( puVar9 + -0x1018 ) = Horizontal_Sweep_Step;
                  *(undefined8*)( puVar9 + -0x1128 ) = 0x102a80;
                  uVar7 = Render_Single_Pass_constprop_0(puVar9 + -0x1120, 1, *(int*)( puVar9 + -0x107c ) + -1);
                  goto LAB_00102a8a;
               }

            }

            LAB_00102a88:uVar7 = 0;
         }

         goto LAB_00102a8a;
      }

   }

   uVar7 = 0x14;
   LAB_00102a8a:if (*(long*)( puVar9 + 0x2ff8 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar7;
   }

   /* WARNING: Subroutine does not return */
   *(char**)( puVar9 + -0x1128 ) = "raster1";
   __stack_chk_fail();
}

