byte CheckDecBuffer(uint *param_1) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   bool bVar6;
   uint uVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   int iVar11;
   uVar1 = *param_1;
   if (0xc < uVar1) {
      return 2;
   }

   uVar2 = param_1[1];
   lVar10 = (long)(int)uVar2;
   lVar9 = (long)(int)( param_1[2] - 1 );
   if (10 < uVar1) {
      uVar7 = param_1[0xc];
      iVar11 = (int)( uVar2 + 1 ) / 2;
      uVar4 = -uVar7;
      if (0 < (int)uVar7) {
         uVar4 = uVar7;
      }

      uVar7 = param_1[0xd];
      uVar3 = param_1[0xe];
      uVar5 = -uVar7;
      if (0 < (int)uVar7) {
         uVar5 = uVar7;
      }

      uVar7 = -uVar3;
      if (0 < (int)uVar3) {
         uVar7 = uVar3;
      }

      lVar8 = (long)( (int)( param_1[2] + 1 ) / 2 + -1 );
      bVar6 = ( ( ( ( ( ( ( *(long*)( param_1 + 4 ) != 0 && *(long*)( param_1 + 6 ) != 0 ) && *(long*)( param_1 + 8 ) != 0 ) && (int)uVar2 <= (int)uVar4 ) && iVar11 <= (int)uVar5 ) && iVar11 <= (int)uVar7 ) && ( ulong )((int)uVar4 * lVar9 + lVar10) <= *(ulong*)( param_1 + 0x10 ) ) && ( ulong )((int)uVar5 * lVar8 + (long)iVar11) <= *(ulong*)( param_1 + 0x12 ) ) && ( ulong )((int)uVar7 * lVar8 + (long)iVar11) <= *(ulong*)( param_1 + 0x14 );
      if (uVar1 == 0xc) {
         uVar1 = param_1[0xf];
         uVar7 = -uVar1;
         if (0 < (int)uVar1) {
            uVar7 = uVar1;
         }

         bVar6 = bVar6 && ( ( *(long*)( param_1 + 10 ) != 0 && (int)uVar2 <= (int)uVar7 ) && ( ulong )((int)uVar7 * lVar9 + lVar10) <= *(ulong*)( param_1 + 0x16 ) );
      }

      return bVar6 * '\x02' ^ 2;
   }

   uVar7 = param_1[6];
   uVar4 = -uVar7;
   if (0 < (int)uVar7) {
      uVar4 = uVar7;
   }

   return ( (int)uVar4 * lVar9 + (ulong)(byte)kModeBpp[uVar1] * lVar10 <= *(ulong*)( param_1 + 8 ) && ( *(long*)( param_1 + 4 ) != 0 && (int)( (byte)kModeBpp[uVar1] * uVar2 ) <= (int)uVar4 ) ) * '\x02' ^ 2;
}
undefined8 WebPFlipBuffer(uint *param_1) {
   uint uVar1;
   long lVar2;
   int iVar3;
   if (param_1 == (uint*)0x0) {
      return 2;
   }

   if (10 < *param_1) {
      lVar2 = (long)(int)param_1[2] + -1;
      iVar3 = (int)( ( ulong ) * (undefined8*)( param_1 + 0xc ) >> 0x20 );
      *(long*)( param_1 + 8 ) = *(long*)( param_1 + 8 ) + (long)(int)param_1[0xe] * ( lVar2 >> 1 );
      param_1[0xe] = -param_1[0xe];
      *(long*)( param_1 + 4 ) = (int)param_1[0xc] * lVar2 + *(long*)( param_1 + 4 );
      *(long*)( param_1 + 6 ) = (long)iVar3 * ( lVar2 >> 1 ) + *(long*)( param_1 + 6 );
      *(ulong*)( param_1 + 0xc ) = CONCAT44(-iVar3, -(int)*(undefined8 *)(param_1 + 0xc));
      if (*(long*)( param_1 + 10 ) != 0) {
         uVar1 = param_1[0xf];
         param_1[0xf] = -uVar1;
         *(long*)( param_1 + 10 ) = *(long*)( param_1 + 10 ) + lVar2 * (int)uVar1;
      }

      return 0;
   }

   *(long*)( param_1 + 4 ) = *(long*)( param_1 + 4 ) + (long)(int)( param_1[2] - 1 ) * (long)(int)param_1[6];
   param_1[6] = -param_1[6];
   return 0;
}
undefined8 WebPAllocateDecBuffer(ulong param_1, ulong param_2, long param_3, uint *param_4) {
   long lVar1;
   uint uVar2;
   bool bVar3;
   int iVar4;
   undefined8 uVar5;
   long lVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   uint uVar10;
   long lVar11;
   ulong uVar12;
   long lVar13;
   long lVar14;
   long in_FS_OFFSET;
   uint local_48;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar10 = (uint)param_1;
   bVar3 = ( (int)uVar10 < 1 || (int)param_2 < 1 ) || param_4 == (uint*)0x0;
   if (bVar3) goto LAB_001004e8;
   uVar12 = param_1 & 0xffffffff;
   if (param_3 == 0) {
      LAB_001002cf:uVar2 = *param_4;
      param_4[1] = uVar10;
      uVar9 = (uint)param_2;
      param_4[2] = uVar9;
      if (( 0xc < uVar2 ) || ( bVar3 )) goto LAB_001004e8;
      if (( 0 < (int)param_4[3] ) || ( *(long*)( param_4 + 0x1c ) != 0 )) goto LAB_001002f6;
      if (0x7fffffff < (ulong)(byte)kModeBpp[uVar2] * (long)(int)uVar10) goto LAB_001004e8;
      uVar8 = (byte)kModeBpp[uVar2] * uVar10;
      lVar14 = (long)(int)uVar8 * (long)(int)uVar9;
      if (uVar2 < 0xb) {
         lVar13 = WebPSafeMalloc(lVar14, 1);
         if (lVar13 == 0) goto LAB_00100526;
         *(long*)( param_4 + 0x1c ) = lVar13;
         *(long*)( param_4 + 4 ) = lVar13;
         param_4[6] = uVar8;
         *(long*)( param_4 + 8 ) = lVar14;
         LAB_001002f6:uVar5 = CheckDecBuffer(param_4);
         if (( ( (int)uVar5 == 0 ) && ( param_3 != 0 ) ) && ( *(int*)( param_3 + 0x30 ) != 0 )) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar5 = WebPFlipBuffer(param_4);
               return uVar5;
            }

            goto LAB_0010053c;
         }

      }
 else {
         uVar7 = (int)( uVar10 + 1 ) >> 1;
         lVar13 = (long)( (int)( uVar9 + 1 ) >> 1 ) * (long)(int)uVar7;
         if (uVar2 == 0xc) {
            lVar11 = (long)(int)uVar10 * (long)(int)uVar9;
         }
 else {
            lVar11 = 0;
            uVar10 = 0;
         }

         lVar1 = lVar14 + lVar13 * 2;
         lVar6 = WebPSafeMalloc(lVar11 + lVar1, 1);
         if (lVar6 != 0) {
            param_4[0xc] = uVar8;
            *(long*)( param_4 + 0x10 ) = lVar14;
            *(long*)( param_4 + 0x1c ) = lVar6;
            *(long*)( param_4 + 4 ) = lVar6;
            *(long*)( param_4 + 6 ) = lVar14 + lVar6;
            param_4[0xd] = uVar7;
            *(long*)( param_4 + 0x12 ) = lVar13;
            *(long*)( param_4 + 8 ) = ( lVar1 - lVar13 ) + lVar6;
            param_4[0xe] = uVar7;
            *(long*)( param_4 + 0x14 ) = lVar13;
            if (uVar2 == 0xc) {
               *(long*)( param_4 + 10 ) = lVar6 + lVar1;
            }

            *(long*)( param_4 + 0x16 ) = lVar11;
            param_4[0xf] = uVar10;
            goto LAB_001002f6;
         }

         LAB_00100526:uVar5 = 1;
      }

   }
 else {
      if (*(int*)( param_3 + 8 ) == 0) {
         if (*(int*)( param_3 + 0x1c ) == 0) {
            LAB_001002c2:bVar3 = (int)param_2 < 1 || (int)uVar10 < 1;
            goto LAB_001002cf;
         }

         LAB_00100370:local_48 = *(uint*)( param_3 + 0x20 );
         local_44 = *(uint*)( param_3 + 0x24 );
         iVar4 = WebPRescalerGetScaledDimensions(uVar12, param_2, &local_48, &local_44);
         if (iVar4 != 0) {
            param_2 = (ulong)local_44;
            bVar3 = (int)local_44 < 1 || (int)local_48 < 1;
            uVar10 = local_48;
            goto LAB_001002cf;
         }

      }
 else {
         uVar10 = *(uint*)( param_3 + 0x14 );
         uVar2 = *(uint*)( param_3 + 0x18 );
         iVar4 = WebPCheckCropDimensions(param_1, param_2, *(uint*)( param_3 + 0xc ) & 0xfffffffe, *(uint*)( param_3 + 0x10 ) & 0xfffffffe, uVar10, uVar2);
         if (iVar4 != 0) {
            param_2 = (ulong)uVar2;
            uVar12 = (ulong)uVar10;
            if (*(int*)( param_3 + 0x1c ) != 0) goto LAB_00100370;
            goto LAB_001002c2;
         }

      }

      LAB_001004e8:uVar5 = 2;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   LAB_0010053c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
undefined8 WebPInitDecBufferInternal(undefined8 *param_1, int param_2) {
   ulong uVar1;
   undefined8 *puVar2;
   if (( param_2 >> 8 == 2 ) && ( param_1 != (undefined8*)0x0 )) {
      *param_1 = 0;
      param_1[0xe] = 0;
      puVar2 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
      for (uVar1 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0x78U >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
         *puVar2 = 0;
         puVar2 = puVar2 + 1;
      }

      return 1;
   }

   return 0;
}
void WebPFreeDecBuffer(long param_1) {
   if (param_1 == 0) {
      return;
   }

   if (0 < *(int*)( param_1 + 0xc )) {
      *(undefined8*)( param_1 + 0x70 ) = 0;
      return;
   }

   WebPSafeFree(*(undefined8*)( param_1 + 0x70 ));
   *(undefined8*)( param_1 + 0x70 ) = 0;
   return;
}
void WebPCopyDecBuffer(undefined8 *param_1, undefined8 *param_2) {
   undefined8 uVar1;
   if (( param_1 != (undefined8*)0x0 ) && ( param_2 != (undefined8*)0x0 )) {
      uVar1 = param_1[1];
      *param_2 = *param_1;
      param_2[1] = uVar1;
      for (int i = 0; i < 6; i++) {
         uVar1 = param_1[( 2*i + 3 )];
         param_2[( 2*i + 2 )] = param_1[( 2*i + 2 )];
         param_2[( 2*i + 3 )] = uVar1;
      }

      param_2[0xe] = param_1[0xe];
      if (param_1[0xe] != 0) {
         *(undefined4*)( (long)param_2 + 0xc ) = 1;
         param_2[0xe] = 0;
      }

   }

   return;
}
void WebPGrabDecBuffer(undefined8 *param_1, undefined8 *param_2) {
   undefined8 uVar1;
   if (( param_1 != (undefined8*)0x0 ) && ( param_2 != (undefined8*)0x0 )) {
      uVar1 = param_1[1];
      *param_2 = *param_1;
      param_2[1] = uVar1;
      for (int i = 0; i < 6; i++) {
         uVar1 = param_1[( 2*i + 3 )];
         param_2[( 2*i + 2 )] = param_1[( 2*i + 2 )];
         param_2[( 2*i + 3 )] = uVar1;
      }

      param_2[0xe] = param_1[0xe];
      if (param_1[0xe] != 0) {
         *(undefined4*)( (long)param_1 + 0xc ) = 1;
         param_1[0xe] = 0;
      }

   }

   return;
}
undefined8 WebPCopyDecBufferPixels(uint *param_1, long param_2) {
   undefined8 uVar1;
   int iVar2;
   undefined8 uVar3;
   undefined4 uVar4;
   ulong extraout_XMM0_Qa;
   uVar3 = 2;
   uVar1 = *(undefined8*)( param_1 + 1 );
   *(undefined8*)( param_2 + 4 ) = uVar1;
   uVar4 = ( undefined4 )((ulong)uVar1 >> 0x20);
   iVar2 = CheckDecBuffer(uVar1, uVar4, param_2);
   if (iVar2 == 0) {
      uVar3 = 0;
      if (*param_1 < 0xb) {
         WebPCopyPlane(*(undefined8*)( param_1 + 4 ), param_1[6], *(undefined8*)( param_2 + 0x10 ), *(undefined4*)( param_2 + 0x18 ), (uint)(byte)kModeBpp[*param_1] * (int)extraout_XMM0_Qa, uVar4);
         return 0;
      }

      WebPCopyPlane(*(undefined8*)( param_1 + 4 ), param_1[0xc], *(undefined8*)( param_2 + 0x10 ), *(undefined4*)( param_2 + 0x30 ), extraout_XMM0_Qa & 0xffffffff, uVar4);
      WebPCopyPlane(*(undefined8*)( param_1 + 6 ), param_1[0xd], *(undefined8*)( param_2 + 0x18 ), *(undefined4*)( param_2 + 0x34 ), (int)( param_1[1] + 1 ) / 2, (int)( param_1[2] + 1 ) / 2);
      WebPCopyPlane(*(undefined8*)( param_1 + 8 ), param_1[0xe], *(undefined8*)( param_2 + 0x20 ), *(undefined4*)( param_2 + 0x38 ), (int)( param_1[1] + 1 ) / 2, (int)( param_1[2] + 1 ) / 2);
      if (( *param_1 < 0xd ) && ( ( 0x17baUL >> ( ( ulong ) * param_1 & 0x3f ) & 1 ) != 0 )) {
         WebPCopyPlane(*(undefined8*)( param_1 + 10 ), param_1[0xf], *(undefined8*)( param_2 + 0x28 ), *(undefined4*)( param_2 + 0x3c ), param_1[1], param_1[2]);
      }

   }

   return uVar3;
}
bool WebPAvoidSlowMemory(int *param_1, long param_2) {
   if (( ( 1 < param_1[3] ) && ( *param_1 - 7U < 4 ) ) && ( param_2 != 0 )) {
      return *(int*)( param_2 + 8 ) != 0;
   }

   return false;
}

