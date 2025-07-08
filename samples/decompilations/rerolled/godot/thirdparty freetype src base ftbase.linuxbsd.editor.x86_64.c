void FT_GlyphLoader_Adjust_Points(long param_1) {
   long lVar1;
   lVar1 = *(long*)( param_1 + 0x20 );
   if (lVar1 != 0) {
      lVar1 = lVar1 + (long)*(short*)( param_1 + 0x1a ) * 0x10;
   }

   *(long*)( param_1 + 0x68 ) = lVar1;
   lVar1 = *(long*)( param_1 + 0x28 );
   if (lVar1 != 0) {
      lVar1 = lVar1 + *(short*)( param_1 + 0x1a );
   }

   *(long*)( param_1 + 0x70 ) = lVar1;
   lVar1 = *(long*)( param_1 + 0x30 );
   if (lVar1 != 0) {
      lVar1 = lVar1 + (long)*(short*)( param_1 + 0x18 ) * 2;
   }

   *(long*)( param_1 + 0x78 ) = lVar1;
   if (*(char*)( param_1 + 0x14 ) != '\0') {
      lVar1 = (long)*(short*)( param_1 + 0x1a ) * 0x10;
      *(long*)( param_1 + 0x88 ) = lVar1 + *(long*)( param_1 + 0x40 );
      *(long*)( param_1 + 0x90 ) = lVar1 + *(long*)( param_1 + 0x48 );
   }

   return;
}
long hash_str_lookup(undefined8 *param_1) {
   char cVar1;
   char *pcVar2;
   long lVar3;
   pcVar2 = (char*)*param_1;
   lVar3 = 0;
   cVar1 = *pcVar2;
   while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      lVar3 = (long)cVar1 + lVar3 * 0x1f;
      cVar1 = *pcVar2;
   }
;
   return lVar3;
}
long hash_num_lookup(int *param_1) {
   int iVar1;
   iVar1 = *param_1;
   return ( ulong )(byte)((uint)iVar1 >> 0x18) + ( ( (ulong)(long)iVar1 >> 0x10 & 0xff ) + ( ( ulong )(byte)((uint)iVar1 >> 8) + (ulong)(byte)iVar1 * 0x1f ) * 0x1f ) * 0x1f;
}
undefined4 hash_num_compare(int *param_1, int *param_2) {
   return CONCAT31(( int3 )(( uint ) * param_2 >> 8), *param_1 == *param_2);
}
long *hash_bucket(undefined8 param_1, long param_2) {
   long *plVar1;
   char cVar2;
   ulong uVar3;
   long *plVar4;
   long lVar5;
   undefined8 local_30[2];
   plVar1 = *(long**)( param_2 + 0x20 );
   local_30[0] = param_1;
   uVar3 = ( **(code**)( param_2 + 0x10 ) )(local_30);
   plVar4 = plVar1 + uVar3 % ( ulong ) * (uint*)( param_2 + 4 );
   do {
      lVar5 = *plVar4;
      if (lVar5 == 0) {
         return plVar4;
      }

      while (true) {
         cVar2 = ( **(code**)( param_2 + 0x18 ) )(lVar5, local_30);
         if (cVar2 != '\0') {
            return plVar4;
         }

         plVar4 = plVar4 + -1;
         if (plVar1 <= plVar4) break;
         plVar4 = plVar1 + ( *(int*)( param_2 + 4 ) - 1 );
         lVar5 = *plVar4;
         if (lVar5 == 0) {
            return plVar4;
         }

      }
;
   }
 while ( true );
}
void destroy_size(long param_1, long param_2, long param_3) {
   code *pcVar1;
   if (*(code**)( param_2 + 0x10 ) != (code*)0x0) {
      ( **(code**)( param_2 + 0x10 ) )(param_2);
   }

   pcVar1 = *(code**)( *(long*)( param_3 + 0x18 ) + 0x78 );
   if (pcVar1 != (code*)0x0) {
      ( *pcVar1 )(param_2);
   }

   if (*(long*)( param_2 + 0x50 ) != 0) {
      ( **(code**)( param_1 + 0x10 ) )(param_1);
      *(undefined8*)( param_2 + 0x50 ) = 0;
   }

   /* WARNING: Could not recover jumptable at 0x001001d7. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( param_1 + 0x10 ) )(param_1, param_2);
   return;
}
undefined8 find_unicode_charmap(long param_1) {
   long *plVar1;
   long lVar2;
   long *plVar3;
   long *plVar4;
   plVar1 = *(long**)( param_1 + 0x50 );
   if (( plVar1 != (long*)0x0 ) && ( plVar4 = plVar1 + (long)*(int*)( param_1 + 0x48 ) + -1 ),plVar3 = plVar4,plVar1 <= plVar4) {
      do {
         lVar2 = *plVar3;
         if (( *(int*)( lVar2 + 8 ) == 0x756e6963 ) && ( ( *(int*)( lVar2 + 0xc ) == 0xa0003 || ( *(int*)( lVar2 + 0xc ) == 0x40000 ) ) )) {
            *(long*)( param_1 + 0xa8 ) = lVar2;
            return 0;
         }

         plVar3 = plVar3 + -1;
      }
 while ( plVar1 <= plVar3 );
      for (; plVar1 <= plVar4; plVar4 = plVar4 + -1) {
         if (*(int*)( *plVar4 + 8 ) == 0x756e6963) {
            *(long*)( param_1 + 0xa8 ) = *plVar4;
            return 0;
         }

      }

   }

   return 0x26;
}
void memory_stream_close(long *param_1) {
   long lVar1;
   code *UNRECOVERED_JUMPTABLE;
   lVar1 = param_1[3];
   if (*param_1 != 0) {
      ( **(code**)( lVar1 + 0x10 ) )(lVar1);
   }

   *param_1 = 0;
   UNRECOVERED_JUMPTABLE = *(code**)( lVar1 + 0x10 );
   param_1[1] = 0;
   param_1[6] = 0;
   /* WARNING: Could not recover jumptable at 0x001002b6. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *UNRECOVERED_JUMPTABLE )(lVar1, param_1);
   return;
}
int ft_raccess_sort_ref_by_id(short *param_1, short *param_2) {
   return (int)*param_1 - (int)*param_2;
}
void ft_trig_pseudo_rotate(long *param_1, long param_2) {
   long lVar1;
   byte bVar2;
   long lVar3;
   long *plVar4;
   long *plVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   lVar8 = *param_1;
   lVar1 = param_1[1];
   lVar3 = lVar8;
   if (param_2 < -0x2d0000) {
      do {
         lVar8 = lVar1;
         lVar1 = -lVar3;
         param_2 = param_2 + 0x5a0000;
         lVar3 = lVar8;
      }
 while ( param_2 < -0x2d0000 );
   }
 else {
      lVar3 = lVar1;
      if (0x2d0000 < param_2) {
         do {
            lVar1 = lVar8;
            lVar8 = -lVar3;
            param_2 = param_2 + -0x5a0000;
            lVar3 = lVar1;
         }
 while ( 0x2d0000 < param_2 );
      }

   }

   lVar3 = 1;
   bVar2 = 1;
   plVar4 = &ft_trig_arctan_table;
   do {
      while (true) {
         plVar5 = plVar4 + 1;
         lVar7 = lVar1 + lVar3 >> ( bVar2 & 0x3f );
         lVar6 = lVar8 + lVar3 >> ( bVar2 & 0x3f );
         if (-1 < param_2) break;
         lVar8 = lVar8 + lVar7;
         lVar1 = lVar1 - lVar6;
         param_2 = param_2 + *plVar4;
         lVar3 = lVar3 * 2;
         bVar2 = bVar2 + 1;
         plVar4 = plVar5;
         if (plVar5 == (long*)0x10d3b0) goto LAB_00100371;
      }
;
      lVar8 = lVar8 - lVar7;
      lVar1 = lVar1 + lVar6;
      param_2 = param_2 - *plVar4;
      lVar3 = lVar3 * 2;
      bVar2 = bVar2 + 1;
      plVar4 = plVar5;
   }
 while ( plVar5 != (long*)0x10d3b0 );
   LAB_00100371:*param_1 = lVar8;
   param_1[1] = lVar1;
   return;
}
void ft_trig_pseudo_polarize(long *param_1) {
   long lVar1;
   long lVar2;
   byte bVar3;
   long lVar4;
   long *plVar5;
   long *plVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   lVar8 = *param_1;
   lVar4 = param_1[1];
   lVar1 = -lVar8;
   if (lVar8 < lVar4) {
      lVar9 = 0x5a0000;
      lVar7 = lVar4 + lVar8;
      lVar2 = lVar1;
      lVar8 = lVar4;
      if (lVar4 == lVar1 || SBORROW8(lVar4, lVar1) != lVar7 < 0) {
         lVar9 = -0xb40000;
         if (0 < lVar4) {
            lVar9 = 0xb40000;
         }

         lVar2 = -lVar4;
         lVar8 = lVar1;
      }

   }
 else if (SBORROW8(lVar4, lVar1) == lVar4 + lVar8 < 0) {
      lVar9 = 0;
      lVar2 = lVar4;
   }
 else {
      lVar9 = -0x5a0000;
      lVar2 = lVar8;
      lVar8 = -lVar4;
   }

   lVar4 = 1;
   bVar3 = 1;
   plVar5 = &ft_trig_arctan_table;
   do {
      while (true) {
         plVar6 = plVar5 + 1;
         lVar7 = lVar2 + lVar4 >> ( bVar3 & 0x3f );
         lVar1 = lVar8 + lVar4 >> ( bVar3 & 0x3f );
         if (0 < lVar2) break;
         lVar8 = lVar8 - lVar7;
         lVar2 = lVar2 + lVar1;
         lVar9 = lVar9 - *plVar5;
         lVar4 = lVar4 * 2;
         bVar3 = bVar3 + 1;
         plVar5 = plVar6;
         if (plVar6 == (long*)0x10d3b0) goto LAB_00100449;
      }
;
      lVar8 = lVar8 + lVar7;
      lVar2 = lVar2 - lVar1;
      lVar9 = lVar9 + *plVar5;
      lVar4 = lVar4 * 2;
      bVar3 = bVar3 + 1;
      plVar5 = plVar6;
   }
 while ( plVar6 != (long*)0x10d3b0 );
   LAB_00100449:if (-1 < lVar9) {
      *param_1 = lVar8;
      param_1[1] = lVar9 + 8U & 0xfffffffffffffff0;
      return;
   }

   *param_1 = lVar8;
   param_1[1] = -(8U - lVar9 & 0xfffffffffffffff0);
   return;
}
undefined8 hash_str_compare(undefined8 *param_1, undefined8 *param_2) {
   int iVar1;
   undefined4 extraout_var;
   if (*(char*)*param_1 != *(char*)*param_2) {
      return 0;
   }

   iVar1 = strcmp((char*)*param_1, (char*)*param_2);
   return CONCAT71(( int7 )(CONCAT44(extraout_var, iVar1) >> 8), iVar1 == 0);
}
undefined8 ft_property_do(long param_1, char *param_2, long param_3, long param_4, char param_5, undefined1 param_6) {
   code *pcVar1;
   int iVar2;
   undefined8 *puVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   if (param_1 == 0) {
      return 0x21;
   }

   if (( param_3 == 0 || param_4 == 0 ) || ( param_2 == (char*)0x0 )) {
      uVar4 = 6;
   }
 else {
      puVar5 = (undefined8*)( param_1 + 0x18 );
      puVar3 = puVar5 + *(uint*)( param_1 + 0x14 );
      while (( puVar5<puVar3&&(iVar2 = strcmp(*(char**)( *(long*)*puVar5 + 0x10 ), param_2), iVar2, != 0) )) {
         puVar5 = puVar5 + 1;
      }
;
      if (puVar3 != puVar5) {
         pcVar1 = *(code**)( *(long*)*puVar5 + 0x40 );
         if (( pcVar1 != (code*)0x0 ) && ( puVar3 = (undefined8*)( *pcVar1 )((long*)*puVar5, "properties") ),puVar3 != (undefined8*)0x0) {
            if (param_5 == '\0') {
               if ((code*)puVar3[1] != (code*)0x0) {
                  /* WARNING: Could not recover jumptable at 0x00100608. Too many branches */
                  /* WARNING: Treating indirect jump as call */
                  uVar4 = ( *(code*)puVar3[1] )(*puVar5, param_3, param_4);
                  return uVar4;
               }

            }
 else if ((code*)*puVar3 != (code*)0x0) {
               /* WARNING: Could not recover jumptable at 0x001005ce. Too many branches */
               /* WARNING: Treating indirect jump as call */
               uVar4 = ( *(code*)*puVar3 )(*puVar5, param_3, param_4, param_6);
               return uVar4;
            }

         }

         return 7;
      }

      uVar4 = 0xb;
   }

   return uVar4;
}
void ft_recompute_scaled_metrics_isra_0(short param_1, short param_2, short param_3, short param_4, long param_5) {
   long lVar1;
   lVar1 = (long)*(int*)( param_5 + 0x10 );
   *(ulong*)( param_5 + 0x18 ) = ( param_1 * lVar1 + 0x8000 + ( param_1 * lVar1 >> 0x3f ) >> 0x10 ) + 0x3fU & 0xffffffffffffffc0;
   *(long*)( param_5 + 0x20 ) = (long)(int)( ( uint )(( ulong )(param_2 * lVar1 + 0x8000 + ( param_2 * lVar1 >> 0x3f )) >> 0x10) & 0xffffffc0 );
   *(ulong*)( param_5 + 0x28 ) = ( param_3 * lVar1 + 0x8000 + ( param_3 * lVar1 >> 0x3f ) >> 0x10 ) + 0x20U & 0xffffffffffffffc0;
   lVar1 = (long)param_4 * (long)*(int*)( param_5 + 8 );
   *(ulong*)( param_5 + 0x30 ) = ( lVar1 + 0x8000 + ( lVar1 >> 0x3f ) >> 0x10 ) + 0x20U & 0xffffffffffffffc0;
   return;
}
void destroy_charmaps_part_0(long param_1, long param_2) {
   long lVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   lVar4 = *(long*)( param_1 + 0x50 );
   if (0 < *(int*)( param_1 + 0x48 )) {
      lVar3 = 0;
      do {
         plVar2 = *(long**)( lVar4 + lVar3 * 8 );
         lVar1 = lVar3 * 8;
         lVar4 = *(long*)( *plVar2 + 0xb8 );
         if (*(code**)( plVar2[2] + 0x10 ) != (code*)0x0) {
            ( **(code**)( plVar2[2] + 0x10 ) )(plVar2);
         }

         lVar3 = lVar3 + 1;
         ( **(code**)( lVar4 + 0x10 ) )(lVar4, plVar2);
         lVar4 = *(long*)( param_1 + 0x50 );
         *(undefined8*)( lVar4 + lVar1 ) = 0;
      }
 while ( (int)lVar3 < *(int*)( param_1 + 0x48 ) );
   }

   if (lVar4 != 0) {
      ( **(code**)( param_2 + 0x10 ) )(param_2);
   }

   *(undefined8*)( param_1 + 0x50 ) = 0;
   *(undefined4*)( param_1 + 0x48 ) = 0;
   return;
}
undefined8 raccess_guess_darwin_hfsplus(long *param_1, undefined8 param_2, char *param_3, undefined8 *param_4, undefined8 *param_5) {
   size_t __n;
   undefined8 uVar1;
   void *pvVar2;
   __n = strlen(param_3);
   uVar1 = 10;
   if (__n < 0x7ffffffa) {
      pvVar2 = (void*)( **(code**)( *param_1 + 8 ) )(*param_1, __n + 6);
      if (pvVar2 == (void*)0x0) {
         uVar1 = 0x40;
      }
 else {
         pvVar2 = memcpy(pvVar2, param_3, __n);
         *(undefined2*)( (undefined4*)( __n + (long)pvVar2 ) + 1 ) = 99;
         uVar1 = 0;
         *(undefined4*)( __n + (long)pvVar2 ) = 0x7273722f;
         *param_4 = pvVar2;
         *param_5 = 0;
      }

   }

   return uVar1;
}
undefined8 raccess_guess_darwin_newvfs(long *param_1, undefined8 param_2, char *param_3, undefined8 *param_4, undefined8 *param_5) {
   undefined8 uVar1;
   undefined8 uVar2;
   size_t __n;
   undefined8 uVar3;
   void *pvVar4;
   char *pcVar5;
   __n = strlen(param_3);
   uVar3 = 10;
   if (__n < 0x7fffffee) {
      pvVar4 = (void*)( **(code**)( *param_1 + 8 ) )(*param_1, __n + 0x12);
      if (pvVar4 == (void*)0x0) {
         uVar3 = 0x40;
      }
 else {
         pvVar4 = memcpy(pvVar4, param_3, __n);
         uVar2 = _LC1._8_8_;
         uVar1 = _LC1._0_8_;
         pcVar5 = (char*)( __n + (long)pvVar4 );
         pcVar5[0x10] = 'c';
         pcVar5[0x11] = '\0';
         uVar3 = 0;
         *(undefined8*)pcVar5 = uVar1;
         *(undefined8*)( pcVar5 + 8 ) = uVar2;
         *param_4 = pvVar4;
         *param_5 = 0;
      }

   }

   return uVar3;
}
char *raccess_make_file_name(long param_1, char *param_2, char *param_3) {
   size_t sVar1;
   size_t sVar2;
   char *__dest;
   char *pcVar3;
   sVar1 = strlen(param_2);
   sVar2 = strlen(param_3);
   if (0 < (long)( sVar1 + 1 + sVar2 )) {
      __dest = (char*)( **(code**)( param_1 + 8 ) )(param_1);
      if (__dest != (char*)0x0) {
         pcVar3 = strrchr(param_2, 0x2f);
         if (pcVar3 == (char*)0x0) {
            *__dest = '\0';
         }
 else {
            strncpy(__dest, param_2, (size_t)( pcVar3 + ( 1 - (long)param_2 ) ));
            __dest[(long)( pcVar3 + ( 1 - (long)param_2 ) )] = '\0';
            param_2 = pcVar3 + 1;
         }

         sVar1 = strlen(__dest);
         pcVar3 = stpcpy(__dest + sVar1, param_3);
         strcpy(pcVar3, param_2);
         return __dest;
      }

   }

   return (char*)0x0;
}
undefined8 raccess_guess_linux_cap(undefined8 *param_1, undefined8 param_2, undefined8 param_3, long *param_4, undefined8 *param_5) {
   long lVar1;
   lVar1 = raccess_make_file_name(*param_1, param_3, ".resource/");
   if (lVar1 != 0) {
      *param_4 = lVar1;
      *param_5 = 0;
      return 0;
   }

   return 0x40;
}
undefined8 raccess_guess_vfat(undefined8 *param_1, undefined8 param_2, undefined8 param_3, long *param_4, undefined8 *param_5) {
   long lVar1;
   lVar1 = raccess_make_file_name(*param_1, param_3, "resource.frk/");
   if (lVar1 != 0) {
      *param_4 = lVar1;
      *param_5 = 0;
      return 0;
   }

   return 0x40;
}
ulong FT_RoundFix(ulong param_1) {
   return ( 0x7fff - ( (long)~param_1 >> 0x3f ) ) + param_1 & 0xffffffffffff0000;
}
ulong FT_CeilFix(long param_1) {
   return param_1 + 0xffffU & 0xffffffffffff0000;
}
ulong FT_FloorFix(ulong param_1) {
   return param_1 & 0xffffffffffff0000;
}
ulong FT_MulDiv(long param_1, long param_2, ulong param_3) {
   ulong uVar1;
   int iVar2;
   iVar2 = 1;
   if (param_1 < 0) {
      param_1 = -param_1;
      iVar2 = -1;
   }

   if (param_2 < 0) {
      param_2 = -param_2;
      iVar2 = -iVar2;
   }

   if ((long)param_3 < 0) {
      param_3 = -param_3;
      iVar2 = -iVar2;
   }
 else if (param_3 == 0) {
      uVar1 = 0x7fffffff;
      if (iVar2 == -1) {
         uVar1 = 0xffffffff80000001;
      }

      return uVar1;
   }

   param_3 = ( ( param_3 >> 1 ) + param_1 * param_2 ) / param_3;
   if (iVar2 == -1) {
      param_3 = -param_3;
   }

   return param_3;
}
ulong FT_MulDiv_No_Round(long param_1, long param_2, ulong param_3) {
   ulong uVar1;
   int iVar2;
   iVar2 = 1;
   if (param_1 < 0) {
      param_1 = -param_1;
      iVar2 = -1;
   }

   if (param_2 < 0) {
      param_2 = -param_2;
      iVar2 = -iVar2;
   }

   if ((long)param_3 < 0) {
      param_3 = -param_3;
      iVar2 = -iVar2;
   }
 else if (param_3 == 0) {
      uVar1 = 0x7fffffff;
      if (iVar2 == -1) {
         uVar1 = 0xffffffff80000001;
      }

      return uVar1;
   }

   param_3 = ( ulong )(param_1 * param_2) / param_3;
   if (iVar2 == -1) {
      param_3 = -param_3;
   }

   return param_3;
}
long FT_MulFix(int param_1, int param_2) {
   return (long)(int)( ( ulong )((long)param_1 * (long)param_2 + 0x8000 + ( (long)param_1 * (long)param_2 >> 0x3f )) >> 0x10 );
}
ulong FT_DivFix(long param_1, ulong param_2) {
   ulong uVar1;
   long lVar2;
   if (param_1 < 0) {
      lVar2 = -param_1;
      if ((long)param_2 < 0) {
         param_2 = -param_2;
         goto LAB_00100b83;
      }

      uVar1 = 0xffffffff80000001;
      if (param_2 != 0) {
         return -(((param_2 >> 1) + param_1 * -0x10000) / param_2);
      }

   }
 else {
      if ((long)param_2 < 0) {
         return -(((-param_2 >> 1) + param_1 * 0x10000) / -param_2);
      }

      uVar1 = 0x7fffffff;
      lVar2 = param_1;
      if (param_2 != 0) {
         LAB_00100b83:return ( ( param_2 >> 1 ) + lVar2 * 0x10000 ) / param_2;
      }

   }

   return uVar1;
}
void FT_Matrix_Multiply(int *param_1, long *param_2) {
   long lVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   if (( param_1 != (int*)0x0 ) && ( param_2 != (long*)0x0 )) {
      lVar5 = (long)param_1[2] * (long)(int)param_2[3];
      lVar8 = (long)*param_1 * (long)(int)*param_2;
      lVar7 = (long)param_1[2] * (long)(int)param_2[2];
      lVar6 = (long)*param_1 * (long)(int)param_2[1];
      lVar4 = (long)(int)*param_2 * (long)param_1[4];
      lVar3 = (long)(int)param_2[2] * (long)param_1[6];
      lVar1 = (long)param_1[4] * (long)(int)param_2[1];
      lVar2 = (long)param_1[6] * (long)(int)param_2[3];
      *param_2 = (long)(int)( ( ulong )(lVar8 + 0x8000 + ( lVar8 >> 0x3f )) >> 0x10 ) + (long)(int)( ( ulong )(lVar7 + 0x8000 + ( lVar7 >> 0x3f )) >> 0x10 );
      param_2[1] = (long)(int)( ( ulong )(lVar5 + 0x8000 + ( lVar5 >> 0x3f )) >> 0x10 ) + (long)(int)( ( ulong )(lVar6 + 0x8000 + ( lVar6 >> 0x3f )) >> 0x10 );
      param_2[2] = (long)(int)( ( ulong )(lVar3 + 0x8000 + ( lVar3 >> 0x3f )) >> 0x10 ) + (long)(int)( ( ulong )(lVar4 + 0x8000 + ( lVar4 >> 0x3f )) >> 0x10 );
      param_2[3] = (long)(int)( ( ulong )(lVar2 + 0x8000 + ( lVar2 >> 0x3f )) >> 0x10 ) + (long)(int)( ( ulong )(lVar1 + 0x8000 + ( lVar1 >> 0x3f )) >> 0x10 );
      return;
   }

   return;
}
undefined8 FT_Matrix_Invert(ulong *param_1) {
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   long lVar4;
   ulong uVar5;
   ulong uVar6;
   long lVar7;
   ulong uVar8;
   ulong uVar9;
   if (param_1 == (ulong*)0x0) {
      return 6;
   }

   uVar1 = param_1[3];
   uVar2 = *param_1;
   uVar5 = param_1[2];
   uVar3 = param_1[1];
   lVar7 = (long)(int)uVar2 * (long)(int)uVar1;
   lVar4 = (long)(int)uVar5 * (long)(int)uVar3;
   uVar8 = (long)(int)( ( ulong )(lVar7 + 0x8000 + ( lVar7 >> 0x3f )) >> 0x10 ) - (long)(int)( ( ulong )(lVar4 + 0x8000 + ( lVar4 >> 0x3f )) >> 0x10 );
   if (uVar8 == 0) {
      return 6;
   }

   uVar6 = uVar8;
   if ((long)uVar3 < 0) {
      if ((long)uVar8 < 0) {
         uVar6 = -uVar8;
         uVar9 = uVar6 >> 1;
         param_1[1] = -((uVar3 * -0x10000 + uVar9) / uVar6);
         if (-1 < (long)uVar5) {
            uVar5 = ( uVar5 * 0x10000 + uVar9 ) / uVar6;
            goto LAB_00100e7a;
         }

         uVar5 = ( uVar9 + uVar5 * -0x10000 ) / uVar6;
         LAB_00100f7f:param_1[2] = -uVar5;
         if (-1 < (long)uVar1) goto LAB_00100e87;
         LAB_00100f8f:*param_1 = ( uVar1 * -0x10000 + uVar9 ) / uVar6;
      }
 else {
         uVar9 = uVar8 >> 1;
         param_1[1] = ( uVar3 * -0x10000 + uVar9 ) / uVar8;
         if ((long)uVar5 < 0) goto LAB_00100f6b;
         LAB_00100e68:uVar5 = ( uVar5 * 0x10000 + uVar9 ) / uVar6;
         if (-1 < (long)uVar8) goto LAB_00100dfa;
         LAB_00100e7a:param_1[2] = uVar5;
         if ((long)uVar1 < 0) goto LAB_00100f8f;
         LAB_00100e87:*param_1 = -((uVar1 * 0x10000 + uVar9) / uVar6);
      }

      if ((long)uVar2 < 0) {
         uVar6 = ( uVar2 * -0x10000 + uVar9 ) / uVar6;
         goto LAB_00100eb3;
      }

      LAB_00100ea3:uVar6 = ( uVar2 * 0x10000 + uVar9 ) / uVar6;
   }
 else {
      if ((long)uVar8 < 0) {
         uVar6 = -uVar8;
         uVar9 = uVar6 >> 1;
         param_1[1] = ( uVar3 * 0x10000 + uVar9 ) / uVar6;
         if (-1 < (long)uVar5) goto LAB_00100e68;
         LAB_00100f6b:uVar5 = ( uVar9 + uVar5 * -0x10000 ) / uVar6;
         if ((long)uVar8 < 0) goto LAB_00100f7f;
         LAB_00100f07:param_1[2] = uVar5;
         if (-1 < (long)uVar1) goto LAB_00100e0a;
         LAB_00100f14:*param_1 = -((uVar1 * -0x10000 + uVar9) / uVar6);
         if (-1 < (long)uVar2) {
            if (-1 < (long)uVar8) goto LAB_00100e23;
            goto LAB_00100ea3;
         }

      }
 else {
         uVar9 = uVar8 >> 1;
         param_1[1] = -((uVar3 * 0x10000 + uVar9) / uVar8);
         if ((long)uVar5 < 0) {
            uVar5 = ( uVar9 + uVar5 * -0x10000 ) / uVar8;
            goto LAB_00100f07;
         }

         uVar5 = ( uVar5 * 0x10000 + uVar9 ) / uVar8;
         LAB_00100dfa:param_1[2] = -uVar5;
         if ((long)uVar1 < 0) goto LAB_00100f14;
         LAB_00100e0a:*param_1 = ( uVar1 * 0x10000 + uVar9 ) / uVar6;
         if (-1 < (long)uVar2) {
            LAB_00100e23:param_1[3] = ( uVar2 * 0x10000 + uVar9 ) / uVar6;
            return 0;
         }

      }

      uVar6 = ( uVar2 * -0x10000 + uVar9 ) / uVar6;
   }

   uVar6 = -uVar6;
   LAB_00100eb3:param_1[3] = uVar6;
   return 0;
}
void FT_Matrix_Multiply_Scaled(undefined8 *param_1, long *param_2, long param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   if (( param_1 != (undefined8*)0x0 ) && ( param_2 != (long*)0x0 )) {
      param_3 = param_3 << 0x10;
      lVar7 = *param_2;
      uVar1 = *param_1;
      lVar3 = FT_MulDiv(uVar1, lVar7, param_3);
      uVar2 = param_1[1];
      lVar8 = param_2[2];
      lVar4 = FT_MulDiv(uVar2, lVar8, param_3);
      lVar9 = param_2[1];
      lVar5 = FT_MulDiv(uVar1, lVar9, param_3);
      lVar10 = param_2[3];
      lVar6 = FT_MulDiv(uVar2, lVar10, param_3);
      uVar1 = param_1[2];
      lVar7 = FT_MulDiv(uVar1, lVar7, param_3);
      uVar2 = param_1[3];
      lVar8 = FT_MulDiv(uVar2, lVar8, param_3);
      lVar9 = FT_MulDiv(uVar1, lVar9, param_3);
      lVar10 = FT_MulDiv(uVar2, lVar10, param_3);
      *param_2 = lVar3 + lVar4;
      param_2[1] = lVar5 + lVar6;
      param_2[2] = lVar7 + lVar8;
      param_2[3] = lVar9 + lVar10;
      return;
   }

   return;
}
undefined8 FT_Matrix_Check(ulong *param_1) {
   int iVar1;
   ulong uVar2;
   ulong uVar3;
   long lVar4;
   byte bVar5;
   ulong uVar6;
   ulong uVar7;
   long lVar8;
   ulong uVar9;
   ulong uVar10;
   ulong uVar11;
   ulong uVar12;
   if (param_1 != (ulong*)0x0) {
      uVar9 = *param_1;
      uVar12 = param_1[1];
      uVar10 = param_1[2];
      uVar11 = param_1[3];
      uVar2 = -uVar9;
      if (0 < (long)uVar9) {
         uVar2 = uVar9;
      }

      uVar6 = -uVar12;
      if (0 < (long)uVar12) {
         uVar6 = uVar12;
      }

      uVar7 = -uVar10;
      if (0 < (long)uVar10) {
         uVar7 = uVar10;
      }

      uVar3 = -uVar11;
      if (0 < (long)uVar11) {
         uVar3 = uVar11;
      }

      uVar3 = uVar2 | uVar6 | uVar7 | uVar3;
      if (( uVar3 != 0 ) && ( (long)uVar3 < 0x80000000 )) {
         iVar1 = 0x1f;
         if ((uint)uVar3 != 0) {
            for (; (uint)uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {}
         }

         if (0 < iVar1 + -0xc) {
            bVar5 = ( byte )(iVar1 + -0xc);
            uVar9 = (long)uVar9 >> ( bVar5 & 0x3f );
            uVar12 = (long)uVar12 >> ( bVar5 & 0x3f );
            uVar10 = (long)uVar10 >> ( bVar5 & 0x3f );
            uVar11 = (long)uVar11 >> ( bVar5 & 0x3f );
         }

         lVar8 = uVar9 * uVar11 - uVar12 * uVar10;
         lVar4 = -lVar8;
         if (0 < lVar8) {
            lVar4 = lVar8;
         }

         return CONCAT71(( int7 )(( ulong )(lVar4 << 5) >> 8), uVar9 * uVar9 + uVar12 * uVar12 + uVar11 * uVar11 + uVar10 * uVar10 < ( ulong )(lVar4 << 5));
      }

   }

   return 0;
}
void FT_Vector_Transform_Scaled(long *param_1, undefined8 *param_2, long param_3) {
   long lVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   if (( param_1 != (long*)0x0 ) && ( param_2 != (undefined8*)0x0 )) {
      param_3 = param_3 << 0x10;
      lVar3 = *param_1;
      lVar1 = FT_MulDiv(lVar3, *param_2, param_3);
      lVar4 = param_1[1];
      lVar2 = FT_MulDiv(lVar4, param_2[1], param_3);
      lVar3 = FT_MulDiv(lVar3, param_2[2], param_3);
      lVar4 = FT_MulDiv(lVar4, param_2[3], param_3);
      *param_1 = lVar1 + lVar2;
      param_1[1] = lVar4 + lVar3;
      return;
   }

   return;
}
ulong FT_Vector_NormLen(ulong *param_1) {
   char cVar1;
   uint uVar2;
   int iVar3;
   int iVar4;
   ulong uVar5;
   byte bVar6;
   byte bVar7;
   byte bVar8;
   uint uVar9;
   ulong uVar10;
   int iVar11;
   uint uVar12;
   uint uVar13;
   int iVar14;
   int iVar15;
   int iVar16;
   uVar13 = ( uint ) * param_1;
   uVar10 = *param_1 & 0xffffffff;
   iVar4 = (int)param_1[1];
   uVar5 = param_1[1] & 0xffffffff;
   if ((int)uVar13 < 0) {
      uVar13 = -uVar13;
      uVar10 = (ulong)uVar13;
      iVar14 = -1;
      iVar11 = -1;
      if (iVar4 < 0) {
         uVar5 = ( ulong )(uint) - iVar4;
         iVar14 = -1;
         iVar4 = -1;
         goto LAB_00101325;
      }

   }
 else {
      if (iVar4 < 0) {
         uVar5 = ( ulong )(uint) - iVar4;
         uVar10 = 0xffffffffffff0000;
         iVar14 = 1;
         iVar4 = -1;
         if (uVar13 != 0) goto LAB_00101325;
         LAB_00101308:param_1[1] = uVar10;
         return uVar5;
      }

      if (uVar13 == 0) {
         if (iVar4 == 0) {
            return uVar5;
         }

         uVar10 = 0x10000;
         goto LAB_00101308;
      }

      iVar14 = 1;
      iVar11 = 1;
   }

   if (iVar4 == 0) {
      *param_1 = (long)( iVar11 << 0x10 );
      return uVar10;
   }

   iVar4 = 1;
   LAB_00101325:uVar2 = (uint)uVar5;
   if (uVar2 < uVar13) {
      uVar9 = (int)( uVar5 >> 1 ) + uVar13;
   }
 else {
      uVar9 = ( uVar13 >> 1 ) + uVar2;
   }

   uVar12 = 0x1f;
   if (uVar9 != 0) {
      for (; uVar9 >> uVar12 == 0; uVar12 = uVar12 - 1) {}
   }

   bVar6 = ( byte )(uVar12 ^ 0x1f);
   iVar15 = ( 0xaaaaaaaaUL >> ( bVar6 & 0x3f ) <= (ulong)uVar9 ) + 0xf;
   iVar11 = ( uVar12 ^ 0x1f ) - iVar15;
   bVar7 = (byte)iVar11;
   cVar1 = (char)iVar15;
   if (iVar11 < 1) {
      bVar8 = cVar1 - bVar6;
      uVar2 = uVar2 >> ( bVar8 & 0x1f );
      uVar13 = uVar13 >> ( bVar8 & 0x1f );
      uVar9 = uVar9 >> ( bVar8 & 0x1f );
   }
 else {
      uVar2 = uVar2 << ( bVar7 & 0x1f );
      uVar13 = uVar13 << ( bVar7 & 0x1f );
      if (uVar2 < uVar13) {
         uVar9 = ( uVar2 >> 1 ) + uVar13;
      }
 else {
         uVar9 = ( uVar13 >> 1 ) + uVar2;
      }

   }

   iVar15 = 0x10000 - uVar9;
   do {
      uVar12 = ( (int)( iVar15 * uVar13 ) >> 0x10 ) + uVar13;
      uVar9 = ( (int)( iVar15 * uVar2 ) >> 0x10 ) + uVar2;
      iVar16 = uVar9 * uVar9 + uVar12 * uVar12;
      iVar3 = iVar16 + 0x1ff;
      if (-1 < iVar16) {
         iVar3 = iVar16;
      }

      iVar16 = -(iVar3 >> 9) * ( iVar15 + 0x10000 >> 8 );
      iVar3 = iVar16 + 0xffff;
      if (-1 < iVar16) {
         iVar3 = iVar16;
      }

      iVar15 = iVar15 + ( iVar3 >> 0x10 );
   }
 while ( 0xffff < iVar16 );
   uVar10 = (ulong)uVar12;
   if (iVar14 == -1) {
      uVar10 = -(ulong)uVar12;
   }

   *param_1 = uVar10;
   uVar10 = (ulong)uVar9;
   if (iVar4 == -1) {
      uVar10 = -(ulong)uVar9;
   }

   param_1[1] = uVar10;
   iVar14 = uVar13 * uVar12 + uVar2 * uVar9;
   iVar4 = iVar14 + 0xffff;
   if (-1 < iVar14) {
      iVar4 = iVar14;
   }

   iVar4 = ( iVar4 >> 0x10 ) + 0x10000;
   if (0 < iVar11) {
      return ( ulong )(( uint )(( 1 << ( bVar7 - 1 & 0x1f ) ) + iVar4) >> ( bVar7 & 0x1f ));
   }

   return ( ulong )(uint)(iVar4 << ( cVar1 - bVar6 & 0x1f ));
}
int ft_corner_orientation(long param_1, long param_2, long param_3, long param_4) {
   long lVar1;
   lVar1 = param_1 * param_4 - param_2 * param_3;
   return ( uint )(0 < lVar1) + (int)( lVar1 >> 0x3f );
}
bool ft_corner_is_flat(long param_1, long param_2, long param_3, long param_4) {
   long lVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   lVar1 = param_2 + param_4;
   lVar4 = param_1 + param_3;
   if (param_1 < 1) {
      param_1 = -param_1;
   }

   if (param_2 < 1) {
      param_2 = -param_2;
   }

   if (param_2 < param_1) {
      param_1 = ( param_2 * 3 >> 3 ) + param_1;
   }
 else {
      param_1 = ( param_1 * 3 >> 3 ) + param_2;
   }

   lVar3 = -param_3;
   if (0 < param_3) {
      lVar3 = param_3;
   }

   if (param_4 < 1) {
      param_4 = -param_4;
   }

   if (param_4 < lVar3) {
      lVar3 = ( param_4 * 3 >> 3 ) + lVar3;
   }
 else {
      lVar3 = ( lVar3 * 3 >> 3 ) + param_4;
   }

   lVar2 = -lVar4;
   if (0 < lVar4) {
      lVar2 = lVar4;
   }

   lVar4 = -lVar1;
   if (0 < lVar1) {
      lVar4 = lVar1;
   }

   if (lVar4 < lVar2) {
      lVar2 = ( lVar4 * 3 >> 3 ) + lVar2;
   }
 else {
      lVar2 = ( lVar2 * 3 >> 3 ) + lVar4;
   }

   return ( lVar3 + param_1 ) - lVar2<lVar2> > 4;
}
long FT_MulAddFix(long param_1, long param_2, uint param_3) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   long lVar4;
   if (param_3 != 0) {
      uVar3 = 0;
      lVar4 = 0;
      do {
         lVar1 = uVar3 * 4;
         lVar2 = uVar3 * 8;
         uVar3 = uVar3 + 1;
         lVar4 = lVar4 + (long)*(int*)( param_2 + lVar1 ) * *(long*)( param_1 + lVar2 );
      }
 while ( param_3 != uVar3 );
      return lVar4 + 0x8000 >> 0x10;
   }

   return 0;
}
undefined8 FT_Palette_Data_Get(long param_1, undefined8 *param_2) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0x23;
   }

   if (param_2 != (undefined8*)0x0) {
      if (( *(byte*)( param_1 + 0x10 ) & 8 ) == 0) {
         param_2[4] = 0;
         *(undefined2*)param_2 = 0;
         *(undefined2*)( param_2 + 3 ) = 0;
         *(undefined1(*) [16])( param_2 + 1 ) = (undefined1[16])0x0;
         return 0;
      }

      uVar1 = *(undefined8*)( param_1 + 0x420 );
      *param_2 = *(undefined8*)( param_1 + 0x418 );
      param_2[1] = uVar1;
      uVar1 = *(undefined8*)( param_1 + 0x430 );
      param_2[2] = *(undefined8*)( param_1 + 0x428 );
      param_2[3] = uVar1;
      param_2[4] = *(undefined8*)( param_1 + 0x438 );
      return 0;
   }

   return 6;
}
undefined8 FT_Palette_Select(long param_1, undefined2 param_2, undefined8 *param_3) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0x23;
   }

   if (( *(byte*)( param_1 + 0x10 ) & 8 ) == 0) {
      if (param_3 != (undefined8*)0x0) {
         *param_3 = 0;
         return 0;
      }

   }
 else {
      uVar1 = ( **(code**)( *(long*)( param_1 + 0x370 ) + 0x100 ) )(param_1, param_2);
      if ((int)uVar1 != 0) {
         return uVar1;
      }

      *(undefined2*)( param_1 + 0x440 ) = param_2;
      if (param_3 != (undefined8*)0x0) {
         *param_3 = *(undefined8*)( param_1 + 0x448 );
      }

   }

   return 0;
}
undefined8 FT_Palette_Set_Foreground_Color(long param_1, undefined4 param_2) {
   if (param_1 != 0) {
      if (( *(byte*)( param_1 + 0x10 ) & 8 ) != 0) {
         *(undefined4*)( param_1 + 0x451 ) = param_2;
         *(undefined1*)( param_1 + 0x450 ) = 1;
      }

      return 0;
   }

   return 0x23;
}
undefined8 FT_Error_String(void) {
   return 0;
}
undefined8 FT_Get_Font_Format(long param_1) {
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar1;
   if (param_1 != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( **(long**)( param_1 + 0xb0 ) + 0x40 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         /* WARNING: Could not recover jumptable at 0x00101773. Too many branches */
         /* WARNING: Treating indirect jump as call */
         uVar1 = ( *UNRECOVERED_JUMPTABLE )(*(long**)( param_1 + 0xb0 ), "font-format");
         return uVar1;
      }

   }

   return 0;
}
undefined8 FT_Get_X11_Font_Format(long param_1) {
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar1;
   if (param_1 != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( **(long**)( param_1 + 0xb0 ) + 0x40 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         /* WARNING: Could not recover jumptable at 0x001017a3. Too many branches */
         /* WARNING: Treating indirect jump as call */
         uVar1 = ( *UNRECOVERED_JUMPTABLE )(*(long**)( param_1 + 0xb0 ), "font-format");
         return uVar1;
      }

   }

   return 0;
}
undefined8 FT_GlyphLoader_New(long param_1, long *param_2) {
   long *plVar1;
   ulong uVar2;
   undefined8 *puVar3;
   byte bVar4;
   bVar4 = 0;
   plVar1 = (long*)( **(code**)( param_1 + 8 ) )(param_1, 0xb0);
   if (plVar1 != (long*)0x0) {
      plVar1[1] = 0;
      plVar1[0x15] = 0;
      puVar3 = (undefined8*)( ( ulong )(plVar1 + 2) & 0xfffffffffffffff8 );
      for (uVar2 = ( ulong )(( (int)plVar1 - (int)(undefined8*)( ( ulong )(plVar1 + 2) & 0xfffffffffffffff8 ) ) + 0xb0U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
         *puVar3 = 0;
         puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
      }

      *plVar1 = param_1;
      *param_2 = (long)plVar1;
      return 0;
   }

   return 0x40;
}
void FT_GlyphLoader_Rewind(long param_1) {
   *(undefined4*)( param_1 + 0x18 ) = 0;
   *(undefined4*)( param_1 + 0x38 ) = 0;
   *(undefined4*)( param_1 + 0x50 ) = 0;
   *(undefined8*)( param_1 + 0xa0 ) = *(undefined8*)( param_1 + 0x58 );
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( param_1 + ( 16*i + 96 ) ) = *(undefined8*)( param_1 + ( 16*i + 24 ) );
      *(undefined8*)( param_1 + ( 16*i + 104 ) ) = *(undefined8*)( param_1 + ( 16*i + 32 ) );
   }

   return;
}
void FT_GlyphLoader_Reset(long *param_1) {
   long lVar1;
   lVar1 = *param_1;
   if (param_1[4] != 0) {
      ( **(code**)( lVar1 + 0x10 ) )(lVar1);
   }

   param_1[4] = 0;
   if (param_1[5] != 0) {
      ( **(code**)( lVar1 + 0x10 ) )(lVar1);
   }

   param_1[5] = 0;
   if (param_1[6] != 0) {
      ( **(code**)( lVar1 + 0x10 ) )(lVar1);
   }

   param_1[6] = 0;
   if (param_1[8] != 0) {
      ( **(code**)( lVar1 + 0x10 ) )(lVar1);
   }

   param_1[8] = 0;
   if (param_1[0xb] != 0) {
      ( **(code**)( lVar1 + 0x10 ) )(lVar1);
   }

   param_1[9] = 0;
   *(undefined4*)( param_1 + 3 ) = 0;
   *(undefined4*)( param_1 + 7 ) = 0;
   *(undefined4*)( param_1 + 10 ) = 0;
   param_1[0xb] = 0;
   param_1[1] = 0;
   *(undefined4*)( param_1 + 2 ) = 0;
   param_1[0x14] = 0;
   for (int i = 0; i < 8; i++) {
      param_1[( i + 12 )] = param_1[( i + 3 )];
   }

   return;
}
void FT_GlyphLoader_Done(long *param_1) {
   long lVar1;
   if (param_1 != (long*)0x0) {
      lVar1 = *param_1;
      FT_GlyphLoader_Reset();
      /* WARNING: Could not recover jumptable at 0x0010198a. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( lVar1 + 0x10 ) )(lVar1, param_1);
      return;
   }

   return;
}
void FT_GlyphLoader_Prepare(long param_1) {
   long lVar1;
   lVar1 = *(long*)( param_1 + 0x20 );
   *(undefined4*)( param_1 + 0x60 ) = 0;
   *(undefined4*)( param_1 + 0x98 ) = 0;
   if (lVar1 != 0) {
      lVar1 = lVar1 + (long)*(short*)( param_1 + 0x1a ) * 0x10;
   }

   *(long*)( param_1 + 0x68 ) = lVar1;
   lVar1 = *(long*)( param_1 + 0x28 );
   if (lVar1 != 0) {
      lVar1 = lVar1 + *(short*)( param_1 + 0x1a );
   }

   *(long*)( param_1 + 0x70 ) = lVar1;
   lVar1 = *(long*)( param_1 + 0x30 );
   if (lVar1 != 0) {
      lVar1 = lVar1 + (long)*(short*)( param_1 + 0x18 ) * 2;
   }

   *(long*)( param_1 + 0x78 ) = lVar1;
   if (*(char*)( param_1 + 0x14 ) != '\0') {
      lVar1 = (long)*(short*)( param_1 + 0x1a ) * 0x10;
      *(long*)( param_1 + 0x88 ) = lVar1 + *(long*)( param_1 + 0x40 );
      *(long*)( param_1 + 0x90 ) = lVar1 + *(long*)( param_1 + 0x48 );
   }

   lVar1 = *(long*)( param_1 + 0x58 );
   if (lVar1 != 0) {
      lVar1 = lVar1 + ( ulong ) * (uint*)( param_1 + 0x50 ) * 0x30;
   }

   *(long*)( param_1 + 0xa0 ) = lVar1;
   return;
}
void FT_GlyphLoader_Add(long param_1) {
   short *psVar1;
   short sVar2;
   short sVar3;
   short *psVar4;
   short *psVar5;
   long lVar6;
   short *psVar7;
   uint uVar8;
   ulong uVar9;
   if (param_1 != 0) {
      sVar2 = *(short*)( param_1 + 0x60 );
      uVar8 = *(int*)( param_1 + 0x98 ) + *(int*)( param_1 + 0x50 );
      uVar9 = (ulong)uVar8;
      sVar3 = *(short*)( param_1 + 0x1a );
      *(uint*)( param_1 + 0x50 ) = uVar8;
      *(uint*)( param_1 + 0x18 ) = CONCAT22((short)( ( uint ) * (undefined4*)( param_1 + 0x18 ) >> 0x10 ) + (short)( ( uint ) * (undefined4*)( param_1 + 0x60 ) >> 0x10 ), (short)*(undefined4*)( param_1 + 0x18 ) + (short)*(undefined4*)( param_1 + 0x60 ));
      if (0 < sVar2) {
         psVar1 = *(short**)( param_1 + 0x78 ) + 1;
         psVar4 = psVar1;
         psVar7 = *(short**)( param_1 + 0x78 );
         while (psVar5 = psVar4,*psVar7 = *psVar7 + sVar3,psVar5 != psVar1 + ( (int)sVar2 - 1 )) {
            psVar7 = psVar5;
            psVar4 = psVar5 + 1;
         }
;
      }

      *(undefined4*)( param_1 + 0x60 ) = 0;
      *(undefined4*)( param_1 + 0x98 ) = 0;
      FT_GlyphLoader_Adjust_Points();
      lVar6 = *(long*)( param_1 + 0x58 );
      if (lVar6 != 0) {
         lVar6 = lVar6 + uVar9 * 0x30;
      }

      *(long*)( param_1 + 0xa0 ) = lVar6;
      return;
   }

   return;
}
undefined8 ft_hash_str_init(undefined8 *param_1, long param_2) {
   undefined8 uVar1;
   undefined8 *puVar2;
   ulong uVar3;
   undefined8 *puVar4;
   byte bVar5;
   uVar1 = _LC5;
   bVar5 = 0;
   *(undefined4*)( param_1 + 1 ) = 0;
   *param_1 = uVar1;
   param_1[2] = hash_str_lookup;
   param_1[3] = hash_str_compare;
   puVar2 = (undefined8*)( **(code**)( param_2 + 8 ) )(param_2, 0x788);
   if (puVar2 != (undefined8*)0x0) {
      *puVar2 = 0;
      puVar2[0xf0] = 0;
      puVar4 = (undefined8*)( ( ulong )(puVar2 + 1) & 0xfffffffffffffff8 );
      for (uVar3 = ( ulong )(( (int)puVar2 - (int)(undefined8*)( ( ulong )(puVar2 + 1) & 0xfffffffffffffff8 ) ) + 0x788U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
         *puVar4 = 0;
         puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
      }

      param_1[4] = puVar2;
      return 0;
   }

   param_1[4] = 0;
   return 0x40;
}
undefined8 ft_hash_num_init(undefined8 *param_1, long param_2) {
   undefined8 uVar1;
   undefined8 *puVar2;
   ulong uVar3;
   undefined8 *puVar4;
   byte bVar5;
   uVar1 = _LC5;
   bVar5 = 0;
   *(undefined4*)( param_1 + 1 ) = 0;
   *param_1 = uVar1;
   param_1[2] = hash_num_lookup;
   param_1[3] = hash_num_compare;
   puVar2 = (undefined8*)( **(code**)( param_2 + 8 ) )(param_2, 0x788);
   if (puVar2 != (undefined8*)0x0) {
      *puVar2 = 0;
      puVar2[0xf0] = 0;
      puVar4 = (undefined8*)( ( ulong )(puVar2 + 1) & 0xfffffffffffffff8 );
      for (uVar3 = ( ulong )(( (int)puVar2 - (int)(undefined8*)( ( ulong )(puVar2 + 1) & 0xfffffffffffffff8 ) ) + 0x788U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
         *puVar4 = 0;
         puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
      }

      param_1[4] = puVar2;
      return 0;
   }

   param_1[4] = 0;
   return 0x40;
}
void ft_hash_str_free(long param_1, long param_2) {
   long *plVar1;
   long *plVar2;
   if (param_1 != 0) {
      plVar2 = *(long**)( param_1 + 0x20 );
      if (*(uint*)( param_1 + 4 ) != 0) {
         plVar1 = plVar2 + *(uint*)( param_1 + 4 );
         do {
            if (*plVar2 != 0) {
               ( **(code**)( param_2 + 0x10 ) )(param_2);
            }

            *plVar2 = 0;
            plVar2 = plVar2 + 1;
         }
 while ( plVar2 != plVar1 );
         plVar2 = *(long**)( param_1 + 0x20 );
      }

      if (plVar2 != (long*)0x0) {
         ( **(code**)( param_2 + 0x10 ) )(param_2, plVar2);
      }

      *(undefined8*)( param_1 + 0x20 ) = 0;
      return;
   }

   return;
}
long ft_hash_str_lookup(void) {
   long *plVar1;
   long lVar2;
   plVar1 = (long*)hash_bucket();
   lVar2 = *plVar1;
   if (lVar2 != 0) {
      lVar2 = lVar2 + 8;
   }

   return lVar2;
}
long ft_hash_num_lookup(undefined4 param_1) {
   long *plVar1;
   long lVar2;
   plVar1 = (long*)hash_bucket(param_1);
   lVar2 = *plVar1;
   if (lVar2 != 0) {
      lVar2 = lVar2 + 8;
   }

   return lVar2;
}
void ft_lcd_padding(long *param_1, long *param_2, int param_3) {
   long lVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   lVar1 = *param_2;
   if (param_3 == 3) {
      lVar6 = *(long*)( lVar1 + 0x178 );
      lVar5 = *(long*)( lVar1 + 0x168 );
      lVar8 = *(long*)( lVar1 + 0x158 );
      lVar7 = *(long*)( lVar1 + 0x180 );
      lVar2 = *(long*)( lVar1 + 0x170 );
      lVar1 = *(long*)( lVar1 + 0x160 );
      lVar3 = lVar5;
      if (lVar5 <= lVar6) {
         lVar3 = lVar6;
      }

      if (lVar3 < lVar8) {
         lVar3 = lVar8;
      }

      lVar4 = lVar2;
      if (lVar2 <= lVar7) {
         lVar4 = lVar7;
      }

      if (lVar4 < lVar1) {
         lVar4 = lVar1;
      }

      if (lVar5 < lVar6) {
         lVar6 = lVar5;
      }

      if (lVar6 <= lVar8) {
         lVar8 = lVar6;
      }

      if (lVar2 < lVar7) {
         lVar7 = lVar2;
      }

      *param_1 = *param_1 - lVar3;
      param_1[1] = param_1[1] - lVar4;
      if (lVar1 < lVar7) {
         lVar7 = lVar1;
      }

      param_1[2] = param_1[2] - lVar8;
      param_1[3] = param_1[3] - lVar7;
      return;
   }

   if (param_3 != 4) {
      return;
   }

   lVar6 = *(long*)( lVar1 + 0x170 );
   lVar5 = *(long*)( lVar1 + 0x180 );
   lVar8 = *(long*)( lVar1 + 0x160 );
   lVar7 = lVar6;
   if (lVar6 <= lVar5) {
      lVar7 = lVar5;
   }

   if (lVar7 < lVar8) {
      lVar7 = lVar8;
   }

   *param_1 = *param_1 - lVar7;
   if (lVar6 < lVar5) {
      lVar5 = lVar6;
   }

   if (lVar8 < lVar5) {
      lVar5 = lVar8;
   }

   lVar6 = *(long*)( lVar1 + 0x168 );
   param_1[2] = param_1[2] - lVar5;
   lVar5 = *(long*)( lVar1 + 0x178 );
   lVar1 = *(long*)( lVar1 + 0x158 );
   lVar8 = lVar6;
   if (lVar5 <= lVar6) {
      lVar8 = lVar5;
   }

   if (lVar1 < lVar8) {
      lVar8 = lVar1;
   }

   param_1[1] = param_1[1] + lVar8;
   if (lVar5 < lVar6) {
      lVar5 = lVar6;
   }

   if (lVar5 < lVar1) {
      lVar5 = lVar1;
   }

   param_1[3] = param_1[3] + lVar5;
   return;
}
undefined8 FT_Library_SetLcdFilterWeights(void) {
   return 7;
}
undefined8 FT_Library_SetLcdFilter(void) {
   return 7;
}
undefined8 FT_Library_SetLcdGeometry(long param_1, undefined8 *param_2) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0x21;
   }

   if (param_2 != (undefined8*)0x0) {
      uVar1 = param_2[1];
      *(undefined8*)( param_1 + 0x158 ) = *param_2;
      *(undefined8*)( param_1 + 0x160 ) = uVar1;
      uVar1 = param_2[3];
      *(undefined8*)( param_1 + 0x168 ) = param_2[2];
      *(undefined8*)( param_1 + 0x170 ) = uVar1;
      uVar1 = param_2[5];
      *(undefined8*)( param_1 + 0x178 ) = param_2[4];
      *(undefined8*)( param_1 + 0x180 ) = uVar1;
      return 0;
   }

   return 6;
}
char *ft_service_list_lookup(long *param_1, char *param_2) {
   int iVar1;
   char *__s1;
   if (param_1 == (long*)0x0) {
      return (char*)0x0;
   }

   if (param_2 != (char*)0x0) {
      __s1 = (char*)*param_1;
      if (__s1 == (char*)0x0) {
         __s1 = (char*)0x0;
      }
 else {
         do {
            iVar1 = strcmp(__s1, param_2);
            if (iVar1 == 0) {
               return (char*)param_1[1];
            }

            __s1 = (char*)param_1[2];
            param_1 = param_1 + 2;
         }
 while ( __s1 != (char*)0x0 );
      }

      return __s1;
   }

   return (char*)0x0;
}
void ft_validator_init(long param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4) {
   *(undefined8*)( param_1 + 200 ) = param_2;
   *(undefined8*)( param_1 + 0xd0 ) = param_3;
   *(undefined4*)( param_1 + 0xd8 ) = param_4;
   *(undefined4*)( param_1 + 0xdc ) = 0;
   return;
}
undefined8 ft_validator_run(void) {
   return 0xffffffff;
}
void ft_validator_error(long param_1, undefined4 param_2) {
   *(undefined4*)( param_1 + 0xdc ) = param_2;
   /* WARNING: Subroutine does not return */
   __longjmp_chk(param_1, 1);
}
void FT_Stream_Free(long param_1, int param_2) {
   long lVar1;
   if (param_1 == 0) {
      return;
   }

   lVar1 = *(long*)( param_1 + 0x38 );
   if (*(code**)( param_1 + 0x30 ) != (code*)0x0) {
      ( **(code**)( param_1 + 0x30 ) )();
   }

   if (param_2 == 0) {
      /* WARNING: Could not recover jumptable at 0x00101fb4. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( lVar1 + 0x10 ) )(lVar1, param_1);
      return;
   }

   return;
}
void ft_glyphslot_free_bitmap(long param_1) {
   long lVar1;
   uint uVar2;
   lVar1 = *(long*)( param_1 + 0x128 );
   if (lVar1 != 0) {
      uVar2 = *(uint*)( lVar1 + 8 );
      if (( uVar2 & 1 ) != 0) {
         if (*(long*)( param_1 + 0xa8 ) != 0) {
            lVar1 = *(long*)( *(long*)( param_1 + 8 ) + 0xb8 );
            ( **(code**)( lVar1 + 0x10 ) )(lVar1);
            lVar1 = *(long*)( param_1 + 0x128 );
            uVar2 = *(uint*)( lVar1 + 8 );
         }

         *(undefined8*)( param_1 + 0xa8 ) = 0;
         *(uint*)( lVar1 + 8 ) = uVar2 & 0xfffffffe;
         return;
      }

   }

   *(undefined8*)( param_1 + 0xa8 ) = 0;
   return;
}
void ft_glyphslot_done(long param_1) {
   uint uVar1;
   undefined8 *puVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long *plVar6;
   long *plVar7;
   puVar2 = *(undefined8**)( *(long*)( param_1 + 8 ) + 0xb0 );
   lVar3 = puVar2[3];
   lVar4 = puVar2[2];
   if (( *(byte*)( *(long*)( param_1 + 8 ) + 0x12 ) & 1 ) == 0) goto LAB_0010209e;
   lVar5 = *(long*)( param_1 + 0x128 );
   plVar6 = *(long**)( param_1 + 0x120 );
   plVar7 = plVar6;
   if (lVar5 == 0) {
      LAB_00102083:plVar6 = plVar7;
      if (plVar7 != (long*)0x0) goto LAB_00102088;
   }
 else {
      if (( *(uint*)( lVar5 + 8 ) & 2 ) == 0) goto LAB_00102083;
      if (*plVar6 != 0) {
         ( **(code**)( lVar4 + 0x10 ) )(lVar4);
         lVar5 = *(long*)( param_1 + 0x128 );
         plVar7 = *(long**)( param_1 + 0x120 );
         uVar1 = *(uint*)( lVar5 + 8 );
         *plVar6 = 0;
         *(uint*)( lVar5 + 8 ) = uVar1 & 0xfffffffd;
         goto LAB_00102083;
      }

      *(uint*)( lVar5 + 8 ) = *(uint*)( lVar5 + 8 ) & 0xfffffffd;
      LAB_00102088:( **(code**)( lVar4 + 0x10 ) )(lVar4, plVar6);
   }

   *(undefined8*)( param_1 + 0x120 ) = 0;
   LAB_0010209e:if (*(code**)( lVar3 + 0x88 ) != (code*)0x0) {
      ( **(code**)( lVar3 + 0x88 ) )(param_1);
   }

   ft_glyphslot_free_bitmap(param_1);
   plVar6 = *(long**)( param_1 + 0x128 );
   if (plVar6 != (long*)0x0) {
      if (( *(ulong*)*puVar2 & 0x200 ) == 0) {
         plVar7 = (long*)*plVar6;
         if (plVar7 != (long*)0x0) {
            lVar3 = *plVar7;
            FT_GlyphLoader_Reset(plVar7);
            ( **(code**)( lVar3 + 0x10 ) )(lVar3, plVar7);
            plVar6 = *(long**)( param_1 + 0x128 );
         }

         *plVar6 = 0;
      }

      ( **(code**)( lVar4 + 0x10 ) )(lVar4);
      *(undefined8*)( param_1 + 0x128 ) = 0;
   }

   return;
}
void ft_glyphslot_set_bitmap(long param_1, undefined8 param_2) {
   long lVar1;
   uint uVar2;
   lVar1 = *(long*)( param_1 + 0x128 );
   if (lVar1 != 0) {
      uVar2 = *(uint*)( lVar1 + 8 );
      if (( uVar2 & 1 ) != 0) {
         if (*(long*)( param_1 + 0xa8 ) != 0) {
            lVar1 = *(long*)( *(long*)( param_1 + 8 ) + 0xb8 );
            ( **(code**)( lVar1 + 0x10 ) )(lVar1);
            lVar1 = *(long*)( param_1 + 0x128 );
            uVar2 = *(uint*)( lVar1 + 8 );
         }

         *(uint*)( lVar1 + 8 ) = uVar2 & 0xfffffffe;
      }

   }

   *(undefined8*)( param_1 + 0xa8 ) = param_2;
   return;
}
void FT_Done_GlyphSlot(long param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   if (param_1 == 0) {
      return;
   }

   lVar3 = *(long*)( param_1 + 8 );
   lVar1 = *(long*)( *(long*)( lVar3 + 0xb0 ) + 0x10 );
   lVar2 = *(long*)( lVar3 + 0x98 );
   if (lVar2 == 0) {
      return;
   }

   if (param_1 == lVar2) {
      *(undefined8*)( lVar3 + 0x98 ) = *(undefined8*)( lVar2 + 0x10 );
   }
 else {
      do {
         lVar3 = lVar2;
         lVar2 = *(long*)( lVar3 + 0x10 );
         if (lVar2 == 0) {
            return;
         }

      }
 while ( param_1 != lVar2 );
      *(undefined8*)( lVar3 + 0x10 ) = *(undefined8*)( param_1 + 0x10 );
   }

   if (*(code**)( param_1 + 0x28 ) != (code*)0x0) {
      ( **(code**)( param_1 + 0x28 ) )(param_1);
   }

   ft_glyphslot_done(param_1);
   /* WARNING: Could not recover jumptable at 0x0010225e. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( lVar1 + 0x10 ) )(lVar1, param_1);
   return;
}
void destroy_face(long param_1, long param_2, long param_3) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   ulong uVar4;
   long lVar5;
   lVar1 = *(long*)( param_3 + 0x18 );
   if (*(code**)( param_2 + 0xe0 ) != (code*)0x0) {
      ( **(code**)( param_2 + 0xe0 ) )(*(undefined8*)( param_2 + 0xd8 ));
   }

   while (*(long*)( param_2 + 0x98 ) != 0) {
      FT_Done_GlyphSlot();
   }
;
   if (param_1 != 0) {
      lVar5 = *(long*)( param_2 + 200 );
      while (lVar5 != 0) {
         lVar2 = *(long*)( lVar5 + 8 );
         destroy_size(param_1, *(undefined8*)( lVar5 + 0x10 ), param_3);
         ( **(code**)( param_1 + 0x10 ) )(param_1, lVar5);
         lVar5 = lVar2;
      }
;
      *(undefined1(*) [16])( param_2 + 200 ) = (undefined1[16])0x0;
   }

   *(undefined8*)( param_2 + 0xa0 ) = 0;
   if (*(code**)( param_2 + 0x60 ) != (code*)0x0) {
      ( **(code**)( param_2 + 0x60 ) )(param_2);
   }

   destroy_charmaps_part_0(param_2, param_1);
   pcVar3 = *(code**)( lVar1 + 0x68 );
   if (pcVar3 != (code*)0x0) {
      ( *pcVar3 )(param_2);
   }

   lVar1 = *(long*)( param_2 + 0xc0 );
   uVar4 = *(ulong*)( param_2 + 0x10 );
   if (lVar1 != 0) {
      lVar5 = *(long*)( lVar1 + 0x38 );
      if (*(code**)( lVar1 + 0x30 ) != (code*)0x0) {
         ( **(code**)( lVar1 + 0x30 ) )(lVar1);
      }

      if (( uVar4 & 0x400 ) == 0) {
         ( **(code**)( lVar5 + 0x10 ) )(lVar5, lVar1);
      }

   }

   *(undefined8*)( param_2 + 0xc0 ) = 0;
   if (*(long*)( param_2 + 0xf0 ) != 0) {
      ( **(code**)( param_1 + 0x10 ) )(param_1);
      *(undefined8*)( param_2 + 0xf0 ) = 0;
   }

   /* WARNING: Could not recover jumptable at 0x001023a7. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( param_1 + 0x10 ) )(param_1, param_2);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FT_Set_Transform(long param_1, long *param_2, long *param_3) {
   long *plVar1;
   long lVar2;
   long lVar3;
   if (param_1 == 0) {
      return;
   }

   plVar1 = *(long**)( param_1 + 0xf0 );
   *(undefined4*)( plVar1 + 6 ) = 0;
   lVar2 = _UNK_0010d468;
   if (param_2 == (long*)0x0) {
      *plVar1 = ram0x0010d460;
      plVar1[1] = lVar2;
      lVar2 = _UNK_0010d478;
      plVar1[2] = __LC7;
      plVar1[3] = lVar2;
      param_2 = plVar1;
      LAB_0010243a:if (( *param_2 == 0x10000 ) && ( param_2[3] == 0x10000 )) goto LAB_001023fd;
   }
 else {
      lVar2 = param_2[1];
      *plVar1 = *param_2;
      plVar1[1] = lVar2;
      lVar3 = param_2[3];
      lVar2 = param_2[1];
      plVar1[2] = param_2[2];
      plVar1[3] = lVar3;
      if (lVar2 == 0 && param_2[2] == 0) goto LAB_0010243a;
   }

   *(undefined4*)( plVar1 + 6 ) = 1;
   LAB_001023fd:if (param_3 != (long*)0x0) {
      lVar2 = param_3[1];
      plVar1[4] = *param_3;
      plVar1[5] = lVar2;
      if (*param_3 != 0 || param_3[1] != 0) {
         *(uint*)( plVar1 + 6 ) = *(uint*)( plVar1 + 6 ) | 2;
      }

      return;
   }

   *(undefined1(*) [16])( plVar1 + 4 ) = (undefined1[16])0x0;
   return;
}
void FT_Get_Transform(long param_1, undefined8 *param_2, undefined8 *param_3) {
   undefined8 *puVar1;
   undefined8 uVar2;
   if (param_1 != 0) {
      puVar1 = *(undefined8**)( param_1 + 0xf0 );
      if (param_2 != (undefined8*)0x0) {
         uVar2 = puVar1[1];
         *param_2 = *puVar1;
         param_2[1] = uVar2;
         uVar2 = puVar1[3];
         param_2[2] = puVar1[2];
         param_2[3] = uVar2;
      }

      if (param_3 != (undefined8*)0x0) {
         uVar2 = puVar1[5];
         *param_3 = puVar1[4];
         param_3[1] = uVar2;
      }

   }

   return;
}
undefined8 FT_Reference_Face(long param_1) {
   int *piVar1;
   if (param_1 != 0) {
      piVar1 = (int*)( *(long*)( param_1 + 0xf0 ) + 0x78 );
      *piVar1 = *piVar1 + 1;
      return 0;
   }

   return 0x23;
}
undefined8 FT_Done_Face(long param_1) {
   long lVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   int iVar5;
   if (param_1 == 0) {
      return 0x23;
   }

   lVar1 = *(long*)( param_1 + 0xb0 );
   if (lVar1 != 0) {
      iVar5 = *(int*)( *(long*)( param_1 + 0xf0 ) + 0x78 ) + -1;
      *(int*)( *(long*)( param_1 + 0xf0 ) + 0x78 ) = iVar5;
      if (0 < iVar5) {
         return 0;
      }

      lVar3 = *(long*)( lVar1 + 0x10 );
      for (plVar2 = *(long**)( lVar1 + 0x20 ); plVar2 != (long*)0x0; plVar2 = (long*)plVar2[1]) {
         if (param_1 == plVar2[2]) {
            lVar4 = *plVar2;
            plVar2 = (long*)plVar2[1];
            if (lVar4 == 0) {
               *(long**)( lVar1 + 0x20 ) = plVar2;
            }
 else {
               *(long**)( lVar4 + 8 ) = plVar2;
            }

            if (plVar2 == (long*)0x0) {
               *(long*)( lVar1 + 0x28 ) = lVar4;
            }
 else {
               *plVar2 = lVar4;
            }

            ( **(code**)( lVar3 + 0x10 ) )(lVar3);
            destroy_face(lVar3, param_1, lVar1);
            return 0;
         }

      }

   }

   return 0x23;
}
undefined8 FT_Done_Size(long *param_1) {
   long lVar1;
   long lVar2;
   long *plVar3;
   long lVar4;
   long lVar5;
   undefined8 uVar6;
   if (param_1 == (long*)0x0) {
      return 0x24;
   }

   lVar1 = *param_1;
   if (lVar1 == 0) {
      uVar6 = 0x23;
   }
 else {
      lVar2 = *(long*)( lVar1 + 0xb0 );
      if (lVar2 == 0) {
         uVar6 = 0x22;
      }
 else {
         plVar3 = *(long**)( lVar1 + 200 );
         while (true) {
            if (plVar3 == (long*)0x0) {
               return 0x24;
            }

            if (param_1 == (long*)plVar3[2]) break;
            plVar3 = (long*)plVar3[1];
         }
;
         lVar4 = *plVar3;
         lVar5 = *(long*)( lVar2 + 0x10 );
         plVar3 = (long*)plVar3[1];
         if (lVar4 == 0) {
            *(long**)( lVar1 + 200 ) = plVar3;
         }
 else {
            *(long**)( lVar4 + 8 ) = plVar3;
         }

         if (plVar3 == (long*)0x0) {
            *(long*)( lVar1 + 0xd0 ) = lVar4;
         }
 else {
            *plVar3 = lVar4;
         }

         ( **(code**)( lVar5 + 0x10 ) )(lVar5);
         if (*(long**)( lVar1 + 0xa0 ) == param_1) {
            *(undefined8*)( lVar1 + 0xa0 ) = 0;
            if (*(long*)( lVar1 + 200 ) != 0) {
               *(undefined8*)( lVar1 + 0xa0 ) = *(undefined8*)( *(long*)( lVar1 + 200 ) + 0x10 );
            }

         }

         destroy_size(lVar5, param_1, lVar2);
         uVar6 = 0;
      }

   }

   return uVar6;
}
undefined8 FT_Match_Size(long param_1, int *param_2, char param_3, long *param_4) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   long lVar6;
   ulong uVar7;
   long lVar8;
   ulong uVar9;
   uVar3 = 0x23;
   if (( ( *(byte*)( param_1 + 0x10 ) & 2 ) == 0 ) || ( uVar3 = 7 * param_2 != 0 )) {
      return uVar3;
   }

   lVar4 = *(long*)( param_2 + 2 );
   lVar8 = lVar4;
   if (param_2[6] != 0) {
      lVar8 = (long)( (ulong)(uint)param_2[6] * lVar4 + 0x24 ) / 0x48;
   }

   lVar2 = *(long*)( param_2 + 4 );
   lVar6 = lVar2;
   if (param_2[7] != 0) {
      lVar1 = (ulong)(uint)param_2[7] * lVar2 + 0x24;
      lVar6 = lVar1 >> 0x3f;
      lVar6 = ( lVar1 / 0x12 + lVar6 >> 2 ) - lVar6;
   }

   if (lVar4 == 0) {
      if (lVar2 != 0) {
         lVar8 = lVar6;
      }

   }
 else if (lVar2 == 0) {
      lVar6 = lVar8;
   }

   uVar7 = lVar6 + 0x20U & 0xffffffffffffffc0;
   uVar9 = lVar8 + 0x20U & 0xffffffffffffffc0;
   if (( ( uVar9 != 0 ) && ( uVar7 != 0 ) ) && ( 0 < *(int*)( param_1 + 0x38 ) )) {
      lVar4 = 0;
      plVar5 = (long*)( *(long*)( param_1 + 0x40 ) + 0x10 );
      do {
         if (( uVar7 == ( plVar5[1] + 0x20U & 0xffffffffffffffc0 ) ) && ( ( ( *plVar5 + 0x20U & 0xffffffffffffffc0 ) == uVar9 || ( param_3 != '\0' ) ) )) {
            if (param_4 != (long*)0x0) {
               *param_4 = lVar4;
            }

            return 0;
         }

         lVar4 = lVar4 + 1;
         plVar5 = plVar5 + 4;
      }
 while ( *(int*)( param_1 + 0x38 ) != lVar4 );
   }

   return 0x17;
}
void ft_synthesize_vertical_metrics(long param_1, long param_2) {
   long lVar1;
   long lVar2;
   long lVar3;
   lVar1 = *(long*)( param_1 + 8 );
   lVar2 = *(long*)( param_1 + 0x18 );
   lVar3 = lVar1;
   if (lVar1 <= lVar2) {
      lVar3 = lVar2;
   }

   if (-1 < lVar2) {
      lVar3 = lVar1 - lVar2;
   }

   if (param_2 == 0) {
      param_2 = ( lVar3 * 0xc ) / 10;
   }

   *(long*)( param_1 + 0x38 ) = param_2;
   *(long*)( param_1 + 0x28 ) = *(long*)( param_1 + 0x10 ) - *(long*)( param_1 + 0x20 ) / 2;
   *(long*)( param_1 + 0x30 ) = ( param_2 - lVar3 ) / 2;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FT_Select_Metrics(long param_1, long param_2) {
   short sVar1;
   ushort uVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   ulong uVar8;
   short *psVar9;
   ulong uVar10;
   lVar3 = *(long*)( param_1 + 0xa0 );
   psVar9 = (short*)( param_2 * 0x20 + *(long*)( param_1 + 0x40 ) );
   lVar4 = *(long*)( psVar9 + 8 );
   lVar5 = *(long*)( psVar9 + 0xc );
   *(short*)( lVar3 + 0x18 ) = (short)( lVar4 + 0x20 >> 6 );
   *(short*)( lVar3 + 0x1a ) = (short)( lVar5 + 0x20 >> 6 );
   uVar7 = _UNK_0010d488;
   uVar6 = __LC9;
   if (( *(byte*)( param_1 + 0x10 ) & 1 ) == 0) {
      sVar1 = *psVar9;
      *(long*)( lVar3 + 0x30 ) = lVar5;
      *(undefined8*)( lVar3 + 0x38 ) = 0;
      *(long*)( lVar3 + 0x48 ) = lVar4;
      *(undefined8*)( lVar3 + 0x20 ) = uVar6;
      *(undefined8*)( lVar3 + 0x28 ) = uVar7;
      *(long*)( lVar3 + 0x40 ) = (long)( (int)sVar1 << 6 );
      return;
   }

   uVar2 = *(ushort*)( param_1 + 0x88 );
   uVar8 = (ulong)uVar2;
   if (lVar4 < 0) {
      if (uVar8 != 0) {
         uVar10 = ( ulong )(uVar2 >> 1);
         *(ulong*)( lVar3 + 0x20 ) = -((uVar10 + lVar4 * -0x10000) / uVar8);
         goto joined_r0x001029cf;
      }

      *(undefined8*)( lVar3 + 0x20 ) = 0xffffffff80000001;
   }
 else {
      if (uVar8 != 0) {
         uVar10 = ( ulong )(uVar2 >> 1);
         *(ulong*)( lVar3 + 0x20 ) = ( lVar4 * 0x10000 + uVar10 ) / uVar8;
         joined_r0x001029cf:if (lVar5 < 0) {
            uVar8 = -((lVar5 * -0x10000 + uVar10) / uVar8);
         }
 else {
            uVar8 = ( lVar5 * 0x10000 + uVar10 ) / uVar8;
         }

         goto LAB_00102923;
      }

      *(undefined8*)( lVar3 + 0x20 ) = 0x7fffffff;
   }

   if (lVar5 < 0) {
      uVar8 = 0xffffffff80000001;
   }
 else {
      uVar8 = 0x7fffffff;
   }

   LAB_00102923:*(ulong*)( lVar3 + 0x28 ) = uVar8;
   ft_recompute_scaled_metrics_isra_0(*(undefined2*)( param_1 + 0x8a ), *(undefined2*)( param_1 + 0x8c ), *(undefined2*)( param_1 + 0x8e ), *(undefined2*)( param_1 + 0x90 ), lVar3 + 0x18);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 FT_Request_Metrics(long param_1, int *param_2) {
   int iVar1;
   long lVar2;
   ulong uVar3;
   undefined8 uVar4;
   ulong uVar5;
   ulong uVar6;
   undefined8 uVar7;
   ulong uVar8;
   long lVar9;
   ulong uVar10;
   long lVar11;
   ulong uVar12;
   ulong uVar13;
   ulong uVar14;
   lVar2 = *(long*)( param_1 + 0xa0 );
   if (( *(byte*)( param_1 + 0x10 ) & 1 ) == 0) {
      for (int i = 0; i < 3; i++) {
         *(undefined1(*) [16])( lVar2 + ( 16*i + 24 ) ) = (undefined1[16])0;
      }

      uVar4 = _UNK_0010d488;
      uVar7 = __LC9;
      *(undefined8*)( lVar2 + 0x48 ) = 0;
      *(undefined8*)( lVar2 + 0x20 ) = uVar7;
      *(undefined8*)( lVar2 + 0x28 ) = uVar4;
      return 0;
   }

   uVar5 = *(ulong*)( param_2 + 2 );
   uVar3 = *(ulong*)( param_2 + 4 );
   iVar1 = *param_2;
   uVar6 = *(ulong*)( param_2 + 4 );
   uVar14 = *(ulong*)( param_2 + 2 );
   switch (iVar1) {
      case 0:
    uVar7 = FUN_00102aaf(param_1,*(undefined2 *)(param_1 + 0x88));
    return uVar7;
      case 1:
    uVar6 = (ulong)((int)*(short *)(param_1 + 0x8a) - (int)*(short *)(param_1 + 0x8c));
    uVar14 = uVar6;
    break;
      case 2:
    uVar6 = *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x68);
    uVar14 = *(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x70);
    break;
      case 3:
    uVar6 = (ulong)*(short *)(param_1 + 0x90);
    uVar14 = (long)((int)*(short *)(param_1 + 0x8a) - (int)*(short *)(param_1 + 0x8c));
    break;
      case 4:
    *(ulong *)(lVar2 + 0x20) = uVar5;
    *(ulong *)(lVar2 + 0x28) = uVar3;
    if (uVar5 == 0) {
      *(ulong *)(lVar2 + 0x20) = uVar3;
      uVar14 = uVar6;
    }
    else if (uVar3 == 0) {
      *(ulong *)(lVar2 + 0x28) = uVar5;
      uVar6 = uVar14;
    }
    goto LAB_00102b7f;
      default:
    uVar7 = FUN_00102aaf(param_1,0);
    return uVar7;
   }

   uVar13 = -uVar6;
   if (0 < (long)uVar6) {
      uVar13 = uVar6;
   }

   uVar10 = -uVar14;
   if (0 < (long)uVar14) {
      uVar10 = uVar14;
   }

   uVar12 = uVar5;
   if (param_2[6] != 0) {
      uVar12 = (long)( (uint)param_2[6] * uVar5 + 0x24 ) / 0x48;
   }

   uVar8 = uVar3;
   if (param_2[7] != 0) {
      uVar8 = (long)( (uint)param_2[7] * uVar3 + 0x24 ) / 0x48;
   }

   if (( uVar3 == 0 ) && ( uVar5 != 0 )) {
      LAB_00102b1b:if (uVar13 == 0) {
         return 0x85;
      }

      if ((long)uVar12 < 0) {
         uVar6 = -(((uVar13 >> 1) + uVar12 * -0x10000) / uVar13);
         *(ulong*)( lVar2 + 0x20 ) = uVar6;
         if (uVar3 == 0) {
            *(ulong*)( lVar2 + 0x28 ) = uVar6;
            LAB_00102d29:uVar8 = 0xffffffff80000001;
            if (uVar13 != 0) {
               uVar8 = -(((uVar13 >> 1) - uVar10 * uVar12) / uVar13);
            }

            goto LAB_00102cdd;
         }

         goto LAB_00102b52;
      }

      uVar6 = ( ( uVar13 >> 1 ) + uVar12 * 0x10000 ) / uVar13;
      *(ulong*)( lVar2 + 0x20 ) = uVar6;
      if (uVar3 != 0) goto LAB_00102b52;
      *(ulong*)( lVar2 + 0x28 ) = uVar6;
      LAB_00102ccf:if (uVar13 == 0) {
         uVar8 = 0x7fffffff;
      }
 else {
         uVar8 = ( ( uVar13 >> 1 ) + uVar10 * uVar12 ) / uVar13;
      }

      LAB_00102cdd:uVar14 = uVar6;
      if (iVar1 == 3) {
         uVar5 = *(ulong*)( lVar2 + 0x28 );
         goto LAB_00102cea;
      }

      LAB_00102b5b:if (iVar1 == 0) goto LAB_00102bba;
      uVar6 = *(ulong*)( lVar2 + 0x28 );
   }
 else {
      if (uVar14 == 0) {
         return 0x85;
      }

      uVar14 = uVar10 >> 1;
      if ((long)uVar8 < 0) {
         uVar6 = -((uVar14 + uVar8 * -0x10000) / uVar10);
         *(ulong*)( lVar2 + 0x28 ) = uVar6;
         if (uVar5 == 0) {
            uVar12 = -((uVar14 - uVar13 * uVar8) / uVar10);
            goto LAB_00102cb6;
         }

         goto LAB_00102b1b;
      }

      uVar6 = ( uVar8 * 0x10000 + uVar14 ) / uVar10;
      *(ulong*)( lVar2 + 0x28 ) = uVar6;
      if (uVar5 != 0) goto LAB_00102b1b;
      uVar12 = ( uVar13 * uVar8 + uVar14 ) / uVar10;
      LAB_00102cb6:*(ulong*)( lVar2 + 0x20 ) = uVar6;
      if (uVar3 == 0) {
         *(ulong*)( lVar2 + 0x28 ) = uVar6;
         if ((long)uVar12 < 0) goto LAB_00102d29;
         goto LAB_00102ccf;
      }

      LAB_00102b52:uVar14 = uVar6;
      if (iVar1 != 3) goto LAB_00102b5b;
      uVar5 = *(ulong*)( lVar2 + 0x28 );
      if ((long)uVar6 < (long)*(ulong*)( lVar2 + 0x28 )) {
         *(ulong*)( lVar2 + 0x28 ) = uVar6;
      }
 else {
         LAB_00102cea:uVar6 = uVar5;
         *(ulong*)( lVar2 + 0x20 ) = uVar6;
         uVar14 = uVar6;
      }

   }

   LAB_00102b7f:lVar11 = (long)(int)uVar14 * ( ulong ) * (ushort*)( param_1 + 0x88 );
   lVar9 = (long)(int)uVar6 * ( ulong ) * (ushort*)( param_1 + 0x88 );
   uVar12 = lVar11 + 0x8000 + ( lVar11 >> 0x3f ) >> 0x10;
   uVar8 = lVar9 + 0x8000 + ( lVar9 >> 0x3f ) >> 0x10;
   LAB_00102bba:lVar9 = (long)( uVar8 + 0x20 ) >> 6;
   if (( (long)( uVar12 + 0x20 ) < 0x400000 ) && ( lVar9 < 0x10000 )) {
      *(short*)( lVar2 + 0x18 ) = (short)( (long)( uVar12 + 0x20 ) >> 6 );
      *(short*)( lVar2 + 0x1a ) = (short)lVar9;
      ft_recompute_scaled_metrics_isra_0(*(undefined2*)( param_1 + 0x8a ), *(undefined2*)( param_1 + 0x8c ), *(undefined2*)( param_1 + 0x8e ), *(undefined2*)( param_1 + 0x90 ));
      return 0;
   }

   return 0x17;
}
undefined8 FUN_00102aaf(long param_1, long param_2, undefined8 param_3, long param_4) {
   ulong uVar1;
   ulong uVar2;
   int iVar3;
   long lVar4;
   ulong unaff_RBX;
   int unaff_EBP;
   long lVar5;
   ulong uVar6;
   long in_R10;
   ulong in_R11;
   ulong unaff_R12;
   ulong unaff_R13;
   ulong uVar7;
   uVar6 = unaff_R13;
   if (*(uint*)( param_4 + 0x18 ) != 0) {
      uVar6 = (long)( *(uint*)( param_4 + 0x18 ) * unaff_R13 + 0x24 ) / 0x48;
   }

   uVar2 = unaff_R12;
   if (*(uint*)( param_4 + 0x1c ) != 0) {
      uVar2 = (long)( *(uint*)( param_4 + 0x1c ) * unaff_R12 + 0x24 ) / 0x48;
   }

   if (( unaff_R12 == 0 ) && ( unaff_R13 != 0 )) {
      LAB_00102b1b:if (in_R11 == 0) {
         return 0x85;
      }

      if ((long)uVar6 < 0) {
         uVar1 = -(((in_R11 >> 1) + uVar6 * -0x10000) / in_R11);
         *(ulong*)( in_R10 + 0x20 ) = uVar1;
         if (unaff_R12 == 0) {
            *(ulong*)( in_R10 + 0x28 ) = uVar1;
            LAB_00102d29:uVar2 = 0xffffffff80000001;
            if (in_R11 != 0) {
               uVar2 = -(((in_R11 >> 1) - unaff_RBX * uVar6) / in_R11);
            }

            goto LAB_00102cdd;
         }

         goto LAB_00102b52;
      }

      uVar1 = ( ( in_R11 >> 1 ) + uVar6 * 0x10000 ) / in_R11;
      *(ulong*)( in_R10 + 0x20 ) = uVar1;
      if (unaff_R12 != 0) goto LAB_00102b52;
      *(ulong*)( in_R10 + 0x28 ) = uVar1;
      LAB_00102ccf:if (in_R11 == 0) {
         uVar2 = 0x7fffffff;
      }
 else {
         uVar2 = ( ( in_R11 >> 1 ) + unaff_RBX * uVar6 ) / in_R11;
      }

      LAB_00102cdd:if (unaff_EBP == 3) {
         uVar6 = *(ulong*)( in_R10 + 0x28 );
         goto LAB_00102cea;
      }

      LAB_00102b5b:if (unaff_EBP == 0) goto LAB_00102bba;
      iVar3 = (int)*(undefined8*)( in_R10 + 0x28 );
      uVar6 = uVar1;
   }
 else {
      if (param_2 == 0) {
         return 0x85;
      }

      uVar7 = unaff_RBX >> 1;
      if ((long)uVar2 < 0) {
         uVar1 = -((uVar7 + uVar2 * -0x10000) / unaff_RBX);
         *(ulong*)( in_R10 + 0x28 ) = uVar1;
         if (unaff_R13 == 0) {
            uVar6 = -((uVar7 - in_R11 * uVar2) / unaff_RBX);
            goto LAB_00102cb6;
         }

         goto LAB_00102b1b;
      }

      uVar1 = ( uVar2 * 0x10000 + uVar7 ) / unaff_RBX;
      *(ulong*)( in_R10 + 0x28 ) = uVar1;
      if (unaff_R13 != 0) goto LAB_00102b1b;
      uVar6 = ( in_R11 * uVar2 + uVar7 ) / unaff_RBX;
      LAB_00102cb6:*(ulong*)( in_R10 + 0x20 ) = uVar1;
      if (unaff_R12 == 0) {
         *(ulong*)( in_R10 + 0x28 ) = uVar1;
         if ((long)uVar6 < 0) goto LAB_00102d29;
         goto LAB_00102ccf;
      }

      LAB_00102b52:if (unaff_EBP != 3) goto LAB_00102b5b;
      uVar6 = *(ulong*)( in_R10 + 0x28 );
      if ((long)uVar1 < (long)uVar6) {
         *(ulong*)( in_R10 + 0x28 ) = uVar1;
         iVar3 = (int)uVar1;
         uVar6 = uVar1;
      }
 else {
         LAB_00102cea:*(ulong*)( in_R10 + 0x20 ) = uVar6;
         iVar3 = (int)uVar6;
      }

   }

   lVar5 = (long)(int)uVar6 * ( ulong ) * (ushort*)( param_1 + 0x88 );
   lVar4 = (long)iVar3 * ( ulong ) * (ushort*)( param_1 + 0x88 );
   uVar6 = lVar5 + 0x8000 + ( lVar5 >> 0x3f ) >> 0x10;
   uVar2 = lVar4 + 0x8000 + ( lVar4 >> 0x3f ) >> 0x10;
   LAB_00102bba:lVar4 = (long)( uVar2 + 0x20 ) >> 6;
   if (( (long)( uVar6 + 0x20 ) < 0x400000 ) && ( lVar4 < 0x10000 )) {
      *(short*)( in_R10 + 0x18 ) = (short)( (long)( uVar6 + 0x20 ) >> 6 );
      *(short*)( in_R10 + 0x1a ) = (short)lVar4;
      ft_recompute_scaled_metrics_isra_0(*(undefined2*)( param_1 + 0x8a ), *(undefined2*)( param_1 + 0x8c ), *(undefined2*)( param_1 + 0x8e ), *(undefined2*)( param_1 + 0x90 ));
      return 0;
   }

   return 0x17;
}
void switchD_00102a45::caseD_0(long param_1) {
   FUN_00102aaf(param_1, *(undefined2*)( param_1 + 0x88 ));
   return;
}
undefined8 FT_Select_Size(long param_1, int param_2) {
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar1;
   if (( param_1 == 0 ) || ( ( *(byte*)( param_1 + 0x10 ) & 2 ) == 0 )) {
      return 0x23;
   }

   if (( -1 < param_2 ) && ( param_2 < *(int*)( param_1 + 0x38 ) )) {
      UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( *(long*)( param_1 + 0xb0 ) + 0x18 ) + 0xb8 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         /* WARNING: Could not recover jumptable at 0x00102e69. Too many branches */
         /* WARNING: Treating indirect jump as call */
         uVar1 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( param_1 + 0xa0 ));
         return uVar1;
      }

      FT_Select_Metrics(param_1, (long)param_2);
      return 0;
   }

   return 6;
}
undefined8 FT_Request_Size(long param_1, uint *param_2) {
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined4 local_18[2];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      uVar1 = 0x23;
   }
 else if (*(long*)( param_1 + 0xa0 ) == 0) {
      uVar1 = 0x24;
   }
 else if (( ( ( param_2 == (uint*)0x0 ) || ( *(long*)( param_2 + 2 ) < 0 ) ) || ( *(long*)( param_2 + 4 ) < 0 ) ) || ( 4 < *param_2 )) {
      uVar1 = 6;
   }
 else {
      *(undefined8*)( *(long*)( *(long*)( param_1 + 0xa0 ) + 0x50 ) + 0x18 ) = 0;
      UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( *(long*)( param_1 + 0xb0 ) + 0x18 ) + 0xb0 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00102f29. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar1 = ( *UNRECOVERED_JUMPTABLE )();
            return uVar1;
         }

         goto LAB_00102fd1;
      }

      if (( ( uint ) * (undefined8*)( param_1 + 0x10 ) & 3 ) != 2) {
         if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar1 = FT_Request_Metrics(param_1);
            return uVar1;
         }

         goto LAB_00102fd1;
      }

      uVar1 = FT_Match_Size(param_1, param_2, 0, local_18);
      if ((int)uVar1 == 0) {
         if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar1 = FT_Select_Size(param_1, local_18[0]);
            return uVar1;
         }

         goto LAB_00102fd1;
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   LAB_00102fd1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
void FT_Set_Char_Size(undefined8 param_1, long param_2, long param_3, int param_4, int param_5) {
   long in_FS_OFFSET;
   undefined4 local_38[2];
   long local_30;
   long local_28;
   int local_20;
   int local_1c;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = param_3;
   if (( param_2 != 0 ) && ( local_30 = param_3 == 0 )) {
      param_3 = param_2;
   }

   if (local_30 < 0x40) {
      local_30 = 0x40;
   }

   if (param_3 < 0x40) {
      param_3 = 0x40;
   }

   local_1c = param_5;
   if (param_4 == 0) {
      local_20 = param_5;
      if (param_5 == 0) {
         local_1c = 0x48;
         local_20 = 0x48;
      }

   }
 else {
      local_20 = param_4;
      if (param_5 == 0) {
         local_1c = param_4;
      }

   }

   local_38[0] = 0;
   local_28 = param_3;
   FT_Request_Size(param_1, local_38);
   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
void FT_Set_Pixel_Sizes(undefined8 param_1, uint param_2, uint param_3) {
   uint uVar1;
   long in_FS_OFFSET;
   undefined4 local_38[2];
   ulong local_30;
   ulong local_28;
   undefined8 local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = param_3;
   if (( param_2 != 0 ) && ( uVar1 = param_3 == 0 )) {
      param_3 = param_2;
   }

   local_38[0] = 0;
   local_20 = 0;
   if (uVar1 == 0) {
      uVar1 = 1;
   }

   if (0xffff < uVar1) {
      uVar1 = 0xffff;
   }

   local_30 = ( ulong )(uVar1 << 6);
   if (param_3 == 0) {
      param_3 = 1;
   }

   if (0xffff < param_3) {
      param_3 = 0xffff;
   }

   local_28 = ( ulong )(param_3 << 6);
   FT_Request_Size(param_1, local_38);
   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
undefined8 FT_Get_Kerning(long param_1, undefined8 param_2, undefined8 param_3, int param_4, undefined1 (*param_5)[16]) {
   code *pcVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined8 uVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   ulong uVar10;
   ulong uVar11;
   if (param_1 == 0) {
      return 0x23;
   }

   if (param_5 == (undefined1(*) [16])0x0) {
      uVar6 = 6;
   }
 else {
      lVar9 = *(long*)( param_1 + 0xb0 );
      *param_5 = (undefined1[16])0x0;
      pcVar1 = *(code**)( *(long*)( lVar9 + 0x18 ) + 0x98 );
      if (pcVar1 != (code*)0x0) {
         uVar6 = ( *pcVar1 )();
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         if (param_4 != 2) {
            lVar9 = *(long*)( param_1 + 0xa0 );
            lVar7 = (long)*(int*)*param_5 * (long)*(int*)( lVar9 + 0x20 );
            lVar8 = (long)*(int*)( lVar9 + 0x28 ) * (long)*(int*)( *param_5 + 8 );
            uVar10 = (ulong)(int)( ( ulong )(lVar7 + 0x8000 + ( lVar7 >> 0x3f )) >> 0x10 );
            *(ulong*)*param_5 = uVar10;
            uVar11 = (ulong)(int)( ( ulong )(lVar8 + 0x8000 + ( lVar8 >> 0x3f )) >> 0x10 );
            *(ulong*)( *param_5 + 8 ) = uVar11;
            if (param_4 != 1) {
               if (*(ushort*)( lVar9 + 0x18 ) < 0x19) {
                  lVar7 = *(ushort*)( lVar9 + 0x18 ) * uVar10;
                  if ((long)uVar10 < 0) {
                     uVar10 = 0xc - lVar7;
                     auVar5._8_8_ = 0;
                     auVar5._0_8_ = uVar10;
                     lVar7 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar5, 8);
                     uVar10 = -((uVar10 - lVar7 >> 1) + lVar7 >> 4);
                  }
 else {
                     uVar10 = lVar7 + 0xc;
                     auVar2._8_8_ = 0;
                     auVar2._0_8_ = uVar10;
                     lVar7 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar2, 8);
                     uVar10 = lVar7 + ( uVar10 - lVar7 >> 1 ) >> 4;
                  }

               }

               if (*(ushort*)( lVar9 + 0x1a ) < 0x19) {
                  lVar9 = *(ushort*)( lVar9 + 0x1a ) * uVar11;
                  if ((long)uVar11 < 0) {
                     uVar11 = 0xc - lVar9;
                     auVar4._8_8_ = 0;
                     auVar4._0_8_ = uVar11;
                     lVar9 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar4, 8);
                     uVar11 = -((uVar11 - lVar9 >> 1) + lVar9 >> 4);
                  }
 else {
                     uVar11 = lVar9 + 0xc;
                     auVar3._8_8_ = 0;
                     auVar3._0_8_ = uVar11;
                     lVar9 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar3, 8);
                     uVar11 = lVar9 + ( uVar11 - lVar9 >> 1 ) >> 4;
                  }

               }

               *(ulong*)*param_5 = uVar10 + 0x20 & 0xffffffffffffffc0;
               *(ulong*)( *param_5 + 8 ) = uVar11 + 0x20 & 0xffffffffffffffc0;
            }

         }

      }

      uVar6 = 0;
   }

   return uVar6;
}
undefined8 FT_Get_Track_Kerning(long param_1, undefined8 param_2, undefined4 param_3, long param_4) {
   code *pcVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   if (param_1 == 0) {
      return 0x23;
   }

   if (param_4 == 0) {
      uVar3 = 6;
   }
 else {
      pcVar1 = *(code**)( **(long**)( param_1 + 0xb0 ) + 0x40 );
      if (pcVar1 != (code*)0x0) {
         puVar2 = (undefined8*)( *pcVar1 )(*(long**)( param_1 + 0xb0 ), "kerning");
         if (puVar2 != (undefined8*)0x0) {
            /* WARNING: Could not recover jumptable at 0x0010334e. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar3 = ( *(code*)*puVar2 )(param_1, param_2, param_3, param_4);
            return uVar3;
         }

      }

      uVar3 = 7;
   }

   return uVar3;
}
undefined8 FT_Select_Charmap(long param_1, int param_2) {
   long *plVar1;
   long *plVar2;
   undefined8 uVar3;
   if (param_1 == 0) {
      return 0x23;
   }

   if (param_2 == 0) {
      if (*(int*)( param_1 + 0x48 ) == 0) {
         return 6;
      }

   }
 else if (param_2 == 0x756e6963) {
      uVar3 = find_unicode_charmap();
      return uVar3;
   }

   plVar2 = *(long**)( param_1 + 0x50 );
   if (plVar2 != (long*)0x0) {
      plVar1 = plVar2 + *(int*)( param_1 + 0x48 );
      while (true) {
         if (plVar1 <= plVar2) {
            return 6;
         }

         if (*(int*)( *plVar2 + 8 ) == param_2) break;
         plVar2 = plVar2 + 1;
      }
;
      *(long*)( param_1 + 0xa8 ) = *plVar2;
      return 0;
   }

   return 0x26;
}
int FT_Get_Charmap_Index(long *param_1) {
   long lVar1;
   int iVar2;
   undefined8 *puVar3;
   if (( param_1 != (long*)0x0 ) && ( lVar1 = lVar1 != 0 )) {
      if (*(int*)( lVar1 + 0x48 ) < 1) {
         return 0;
      }

      puVar3 = *(undefined8**)( lVar1 + 0x50 );
      iVar2 = 0;
      do {
         if ((long*)*puVar3 == param_1) {
            return iVar2;
         }

         iVar2 = iVar2 + 1;
         puVar3 = puVar3 + 1;
      }
 while ( iVar2 != *(int*)( lVar1 + 0x48 ) );
      return iVar2;
   }

   return -1;
}
undefined8 FT_Get_Char_Index(long param_1) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }

   if (( *(long*)( param_1 + 0xa8 ) != 0 ) && ( uVar1 = ( **(code**)( *(long*)( *(long*)( param_1 + 0xa8 ) + 0x10 ) + 0x18 ) )() ),(uint)uVar1 < *(uint*)( param_1 + 0x20 )) {
      return uVar1;
   }

   return 0;
}
undefined4 FT_Get_Next_Char(long param_1, undefined4 param_2, uint *param_3) {
   long lVar1;
   uint uVar2;
   undefined4 uVar3;
   long in_FS_OFFSET;
   undefined4 local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 == 0 ) || ( lVar1 = *(long*)( param_1 + 0xa8 ) ),lVar1 == 0 )) {
      uVar2 = 0;
      uVar3 = 0;
   }
 else {
      local_34 = param_2;
      do {
         uVar2 = ( **(code**)( *(long*)( lVar1 + 0x10 ) + 0x20 ) )(lVar1, &local_34);
      }
 while ( *(uint*)( param_1 + 0x20 ) <= uVar2 );
      uVar3 = 0;
      if (uVar2 != 0) {
         uVar3 = local_34;
      }

   }

   if (param_3 != (uint*)0x0) {
      *param_3 = uVar2;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 FT_Get_First_Char(long param_1, uint *param_2) {
   long lVar1;
   uint uVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   uint local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_24 = 0;
   if (( ( ( param_1 == 0 ) || ( lVar1 = *(long*)( param_1 + 0xa8 ) ),lVar1 == 0 ) ) || ( *(long*)( param_1 + 0x20 ) == 0 )) {
      uVar3 = 0;
   }
 else {
      uVar3 = FT_Get_Next_Char(param_1, 0, &local_24);
   }

   if (param_2 != (uint*)0x0) {
      *param_2 = local_24;
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
undefined8 FT_Face_Properties(long param_1, uint param_2, long *param_3) {
   long lVar1;
   int iVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( param_3 == (long*)0x0 )) {
      return 6;
   }

   plVar3 = param_3 + (ulong)param_2 * 2;
   if (param_2 == 0) {
      return 0;
   }

   do {
      while (lVar1 = *param_3,lVar1 != 0x6461726b) {
         if (lVar1 == 0x6c636466) {
            return 7;
         }

         if (lVar1 != 0x73656564) {
            return 6;
         }

         if ((int*)param_3[1] == (int*)0x0) {
            *(undefined4*)( *(long*)( param_1 + 0xf0 ) + 0x74 ) = 0xffffffff;
         }
 else {
            iVar2 = *(int*)param_3[1];
            if (iVar2 < 0) {
               iVar2 = 0;
            }

            *(int*)( *(long*)( param_1 + 0xf0 ) + 0x74 ) = iVar2;
         }

         LAB_00103632:param_3 = param_3 + 2;
         if (param_3 == plVar3) {
            return 0;
         }

      }
;
      if ((char*)param_3[1] == (char*)0x0) {
         *(undefined1*)( *(long*)( param_1 + 0xf0 ) + 0x70 ) = 0xff;
         goto LAB_00103632;
      }

      *(bool*)( *(long*)( param_1 + 0xf0 ) + 0x70 ) = *(char*)param_3[1] != '\x01';
      param_3 = param_3 + 2;
      if (param_3 == plVar3) {
         return 0;
      }

   }
 while ( true );
}
undefined8 FT_Get_Name_Index(long param_1, long param_2) {
   code *pcVar1;
   undefined8 uVar2;
   long lVar3;
   if (param_1 == 0) {
      return 0;
   }

   if (( ( *(byte*)( param_1 + 0x11 ) & 2 ) != 0 ) && ( param_2 != 0 )) {
      lVar3 = *(long*)( *(long*)( param_1 + 0xf0 ) + 0x50 );
      if (lVar3 != -2) {
         if (lVar3 == 0) {
            pcVar1 = *(code**)( **(long**)( param_1 + 0xb0 ) + 0x40 );
            if (pcVar1 == (code*)0x0) {
               *(undefined8*)( *(long*)( param_1 + 0xf0 ) + 0x50 ) = 0xfffffffffffffffe;
               return 0;
            }

            lVar3 = ( *pcVar1 )(*(long**)( param_1 + 0xb0 ), "glyph-dict");
            if (lVar3 == 0) {
               *(undefined8*)( *(long*)( param_1 + 0xf0 ) + 0x50 ) = 0xfffffffffffffffe;
               return 0;
            }

            *(long*)( *(long*)( param_1 + 0xf0 ) + 0x50 ) = lVar3;
         }

         if (*(code**)( lVar3 + 8 ) != (code*)0x0) {
            /* WARNING: Could not recover jumptable at 0x001036fb. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar2 = ( **(code**)( lVar3 + 8 ) )(param_1, param_2);
            return uVar2;
         }

      }

   }

   return 0;
}
undefined8 FT_Get_Glyph_Name(long param_1, uint param_2, undefined1 *param_3, ulong param_4) {
   code *pcVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   if (param_1 == 0) {
      return 0x23;
   }

   if (( param_3 != (undefined1*)0x0 ) && ( (int)param_4 != 0 )) {
      *param_3 = 0;
      if (*(long*)( param_1 + 0x20 ) <= (long)(ulong)param_2) {
         return 0x10;
      }

      if (( *(byte*)( param_1 + 0x11 ) & 2 ) != 0) {
         puVar3 = *(undefined8**)( *(long*)( param_1 + 0xf0 ) + 0x50 );
         if (puVar3 != (undefined8*)0xfffffffffffffffe) {
            if (puVar3 == (undefined8*)0x0) {
               pcVar1 = *(code**)( **(long**)( param_1 + 0xb0 ) + 0x40 );
               if (pcVar1 == (code*)0x0) {
                  *(undefined8*)( *(long*)( param_1 + 0xf0 ) + 0x50 ) = 0xfffffffffffffffe;
                  return 6;
               }

               puVar3 = (undefined8*)( *pcVar1 )(*(long**)( param_1 + 0xb0 ), "glyph-dict");
               if (puVar3 == (undefined8*)0x0) {
                  *(undefined8*)( *(long*)( param_1 + 0xf0 ) + 0x50 ) = 0xfffffffffffffffe;
                  return 6;
               }

               param_4 = param_4 & 0xffffffff;
               *(undefined8**)( *(long*)( param_1 + 0xf0 ) + 0x50 ) = puVar3;
            }

            if ((code*)*puVar3 != (code*)0x0) {
               /* WARNING: Could not recover jumptable at 0x001037eb. Too many branches */
               /* WARNING: Treating indirect jump as call */
               uVar2 = ( *(code*)*puVar3 )(param_1, param_2, param_3, param_4);
               return uVar2;
            }

         }

      }

   }

   return 6;
}
undefined8 FT_Get_Postscript_Name(long param_1) {
   code *pcVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   if (param_1 == 0) {
      return 0;
   }

   puVar3 = *(undefined8**)( *(long*)( param_1 + 0xf0 ) + 0x38 );
   if (puVar3 == (undefined8*)0xfffffffffffffffe) {
      return 0;
   }

   if (puVar3 == (undefined8*)0x0) {
      pcVar1 = *(code**)( **(long**)( param_1 + 0xb0 ) + 0x40 );
      if (pcVar1 == (code*)0x0) {
         *(undefined8*)( *(long*)( param_1 + 0xf0 ) + 0x38 ) = 0xfffffffffffffffe;
         return 0;
      }

      puVar3 = (undefined8*)( *pcVar1 )(*(long**)( param_1 + 0xb0 ), "postscript-font-name");
      if (puVar3 == (undefined8*)0x0) {
         *(undefined8*)( *(long*)( param_1 + 0xf0 ) + 0x38 ) = 0xfffffffffffffffe;
         return 0;
      }

      *(undefined8**)( *(long*)( param_1 + 0xf0 ) + 0x38 ) = puVar3;
   }

   if ((code*)*puVar3 == (code*)0x0) {
      return 0;
   }

   /* WARNING: Could not recover jumptable at 0x001038c3. Too many branches */
   /* WARNING: Treating indirect jump as call */
   uVar2 = ( *(code*)*puVar3 )(param_1);
   return uVar2;
}
undefined8 FT_Get_Sfnt_Table(long param_1, undefined4 param_2) {
   code *pcVar1;
   long lVar2;
   undefined8 uVar3;
   if (param_1 == 0) {
      return 0;
   }

   if (( *(byte*)( param_1 + 0x10 ) & 8 ) != 0) {
      pcVar1 = *(code**)( **(long**)( param_1 + 0xb0 ) + 0x40 );
      if (pcVar1 != (code*)0x0) {
         lVar2 = ( *pcVar1 )(*(long**)( param_1 + 0xb0 ), "sfnt-table");
         if (lVar2 != 0) {
            /* WARNING: Could not recover jumptable at 0x0010397a. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar3 = ( **(code**)( lVar2 + 8 ) )(param_1, param_2);
            return uVar3;
         }

      }

   }

   return 0;
}
undefined8 FT_Load_Sfnt_Table(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5) {
   code *pcVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   if (param_1 == 0) {
      return 0x23;
   }

   if (( *(byte*)( param_1 + 0x10 ) & 8 ) != 0) {
      pcVar1 = *(code**)( **(long**)( param_1 + 0xb0 ) + 0x40 );
      if (pcVar1 != (code*)0x0) {
         puVar2 = (undefined8*)( *pcVar1 )(*(long**)( param_1 + 0xb0 ), "sfnt-table");
         if (puVar2 != (undefined8*)0x0) {
            /* WARNING: Could not recover jumptable at 0x00103a05. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar3 = ( *(code*)*puVar2 )(param_1, param_2, param_3, param_4, param_5);
            return uVar3;
         }

      }

      return 7;
   }

   return 0x23;
}
undefined8 FT_Sfnt_Table_Info(long param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4) {
   code *pcVar1;
   undefined8 uVar2;
   long lVar3;
   long in_FS_OFFSET;
   undefined1 auStack_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      uVar2 = 0x23;
   }
 else {
      uVar2 = 0x23;
      if (( *(byte*)( param_1 + 0x10 ) & 8 ) != 0) {
         pcVar1 = *(code**)( **(long**)( param_1 + 0xb0 ) + 0x40 );
         if (pcVar1 != (code*)0x0) {
            lVar3 = ( *pcVar1 )(*(long**)( param_1 + 0xb0 ), "sfnt-table");
            if (lVar3 != 0) {
               uVar2 = ( **(code**)( lVar3 + 0x10 ) )(param_1, param_2, param_3, auStack_38, param_4);
               goto LAB_00103aab;
            }

         }

         uVar2 = 7;
      }

   }

   LAB_00103aab:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 FT_Get_CMap_Language_ID(long *param_1) {
   long *plVar1;
   code *pcVar2;
   int iVar3;
   undefined8 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_28[3];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 != (long*)0x0 ) && ( *param_1 != 0 )) {
      plVar1 = *(long**)( *param_1 + 0xb0 );
      pcVar2 = *(code**)( *plVar1 + 0x40 );
      if (( pcVar2 != (code*)0x0 ) && ( ( puVar4 = (undefined8*)( *pcVar2 )(plVar1, "tt-cmaps") ),puVar4 != (undefined8*)0x0 && ( iVar3 = ( *(code*)*puVar4 )(param_1, local_28) ),iVar3 == 0 )) goto LAB_00103b52;
   }

   local_28[0] = 0;
   LAB_00103b52:if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_28[0];
}
undefined8 FT_Get_CMap_Format(long *param_1) {
   long *plVar1;
   code *pcVar2;
   int iVar3;
   undefined8 *puVar4;
   long in_FS_OFFSET;
   undefined1 auStack_28[8];
   undefined8 local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 != (long*)0x0 ) && ( *param_1 != 0 )) {
      plVar1 = *(long**)( *param_1 + 0xb0 );
      pcVar2 = *(code**)( *plVar1 + 0x40 );
      if (( pcVar2 != (code*)0x0 ) && ( ( puVar4 = (undefined8*)( *pcVar2 )(plVar1, "tt-cmaps") ),puVar4 != (undefined8*)0x0 && ( iVar3 = ( *(code*)*puVar4 )(param_1, auStack_28) ),iVar3 == 0 )) goto LAB_00103bcb;
   }

   local_20 = 0xffffffffffffffff;
   LAB_00103bcb:if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_20;
}
undefined8 FT_Set_Charmap(long param_1, long param_2) {
   long *plVar1;
   long lVar2;
   long *plVar3;
   if (param_1 == 0) {
      return 0x23;
   }

   plVar3 = *(long**)( param_1 + 0x50 );
   if (( plVar3 != (long*)0x0 ) && ( param_2 != 0 )) {
      plVar1 = plVar3 + *(int*)( param_1 + 0x48 );
      while (true) {
         if (plVar1 <= plVar3) {
            return 6;
         }

         if (( *plVar3 == param_2 ) && ( lVar2 = lVar2 != 0xe )) break;
         plVar3 = plVar3 + 1;
      }
;
      *(long*)( param_1 + 0xa8 ) = *plVar3;
      return 0;
   }

   return 0x26;
}
long find_variant_selector_charmap_isra_0(int param_1, long *param_2) {
   long *plVar1;
   long lVar2;
   if (param_2 == (long*)0x0) {
      return 0;
   }

   plVar1 = param_2 + param_1;
   if (param_2 < plVar1) {
      do {
         if (( *(int*)( *param_2 + 0xc ) == 0x50000 ) && ( lVar2 = lVar2 == 0xe )) {
            return *param_2;
         }

         param_2 = param_2 + 1;
      }
 while ( param_2 < plVar1 );
   }

   return 0;
}
undefined8 FT_Face_GetCharsOfVariant(long param_1, undefined4 param_2) {
   long lVar1;
   undefined8 uVar2;
   if (param_1 == 0) {
      return 0;
   }

   lVar1 = find_variant_selector_charmap_isra_0(*(undefined4*)( param_1 + 0x48 ), *(undefined8*)( param_1 + 0x50 ));
   if (lVar1 != 0) {
      /* WARNING: Could not recover jumptable at 0x00103d40. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar2 = ( **(code**)( *(long*)( lVar1 + 0x10 ) + 0x48 ) )(lVar1, *(undefined8*)( param_1 + 0xb8 ), param_2);
      return uVar2;
   }

   return 0;
}
undefined8 FT_Face_GetVariantsOfChar(long param_1, undefined4 param_2) {
   long lVar1;
   undefined8 uVar2;
   if (param_1 == 0) {
      return 0;
   }

   lVar1 = find_variant_selector_charmap_isra_0(*(undefined4*)( param_1 + 0x48 ), *(undefined8*)( param_1 + 0x50 ));
   if (lVar1 != 0) {
      /* WARNING: Could not recover jumptable at 0x00103da0. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar2 = ( **(code**)( *(long*)( lVar1 + 0x10 ) + 0x40 ) )(lVar1, *(undefined8*)( param_1 + 0xb8 ), param_2);
      return uVar2;
   }

   return 0;
}
undefined8 FT_Face_GetVariantSelectors(long param_1) {
   long lVar1;
   undefined8 uVar2;
   if (param_1 == 0) {
      return 0;
   }

   lVar1 = find_variant_selector_charmap_isra_0(*(undefined4*)( param_1 + 0x48 ), *(undefined8*)( param_1 + 0x50 ));
   if (lVar1 != 0) {
      /* WARNING: Could not recover jumptable at 0x00103df1. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar2 = ( **(code**)( *(long*)( lVar1 + 0x10 ) + 0x38 ) )(lVar1, *(undefined8*)( param_1 + 0xb8 ));
      return uVar2;
   }

   return 0;
}
undefined8 FT_Face_GetCharVariantIsDefault(long param_1, undefined4 param_2, undefined4 param_3) {
   long lVar1;
   undefined8 uVar2;
   if (param_1 == 0) {
      return 0xffffffff;
   }

   lVar1 = find_variant_selector_charmap_isra_0(*(undefined4*)( param_1 + 0x48 ), *(undefined8*)( param_1 + 0x50 ));
   if (lVar1 != 0) {
      /* WARNING: Could not recover jumptable at 0x00103e4b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar2 = ( **(code**)( *(long*)( lVar1 + 0x10 ) + 0x30 ) )(lVar1, param_2, param_3);
      return uVar2;
   }

   return 0xffffffff;
}
undefined8 FT_Face_GetCharVariantIndex(long param_1, undefined4 param_2, undefined4 param_3) {
   long lVar1;
   undefined8 uVar2;
   if (param_1 == 0) {
      return 0;
   }

   if (( *(long*)( param_1 + 0xa8 ) != 0 ) && ( *(int*)( *(long*)( param_1 + 0xa8 ) + 8 ) == 0x756e6963 )) {
      lVar1 = find_variant_selector_charmap_isra_0(*(undefined4*)( param_1 + 0x48 ), *(undefined8*)( param_1 + 0x50 ));
      if (lVar1 != 0) {
         /* WARNING: Could not recover jumptable at 0x00103ed2. Too many branches */
         /* WARNING: Treating indirect jump as call */
         uVar2 = ( **(code**)( *(long*)( lVar1 + 0x10 ) + 0x28 ) )(lVar1, *(undefined8*)( param_1 + 0xa8 ), param_2, param_3);
         return uVar2;
      }

   }

   return 0;
}
undefined8 FT_Activate_Size(long *param_1) {
   long lVar1;
   if (param_1 == (long*)0x0) {
      return 0x24;
   }

   lVar1 = *param_1;
   if (( lVar1 != 0 ) && ( *(long*)( lVar1 + 0xb0 ) != 0 )) {
      *(long**)( lVar1 + 0xa0 ) = param_1;
      return 0;
   }

   return 0x23;
}
long FT_Lookup_Renderer(long param_1, int param_2, long *param_3) {
   long lVar1;
   long lVar2;
   if (param_1 != 0) {
      lVar2 = *(long*)( param_1 + 0x118 );
      if (param_3 != (long*)0x0) {
         if (*param_3 != 0) {
            lVar2 = *(long*)( *param_3 + 8 );
         }

         *param_3 = 0;
      }

      for (; lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar1 = *(long*)( lVar2 + 0x10 );
         if (*(int*)( lVar1 + 0x20 ) == param_2) {
            if (param_3 == (long*)0x0) {
               return lVar1;
            }

            *param_3 = lVar2;
            return lVar1;
         }

      }

   }

   return 0;
}
long FT_Get_Renderer(long param_1, int param_2) {
   long lVar1;
   if (param_1 != 0) {
      for (lVar1 = *(long*)( param_1 + 0x118 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
         if (param_2 == *(int*)( *(long*)( lVar1 + 0x10 ) + 0x20 )) {
            return *(long*)( lVar1 + 0x10 );
         }

      }

   }

   return 0;
}
undefined8 FT_Set_Renderer(long param_1, long param_2, uint param_3, undefined8 *param_4) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   if (param_1 == 0) {
      return 0x21;
   }

   if (param_2 != 0) {
      if (( param_3 != 0 ) && ( param_4 == (undefined8*)0x0 )) {
         return 6;
      }

      plVar1 = *(long**)( param_1 + 0x118 );
      for (plVar2 = plVar1; plVar2 != (long*)0x0; plVar2 = (long*)plVar2[1]) {
         if (param_2 == plVar2[2]) {
            lVar3 = *plVar2;
            if (lVar3 != 0) {
               plVar4 = (long*)plVar2[1];
               *(long**)( lVar3 + 8 ) = plVar4;
               if (plVar4 == (long*)0x0) {
                  *(long*)( param_1 + 0x120 ) = lVar3;
               }
 else {
                  *plVar4 = lVar3;
               }

               *plVar2 = 0;
               plVar2[1] = (long)plVar1;
               *plVar1 = (long)plVar2;
               *(long**)( param_1 + 0x118 ) = plVar2;
            }

            if (*(int*)( param_2 + 0x20 ) == 0x6f75746c) {
               *(long*)( param_1 + 0x128 ) = param_2;
            }

            pcVar5 = *(code**)( *(long*)( param_2 + 0x18 ) + 0x68 );
            puVar7 = param_4 + (ulong)param_3 * 2;
            if (param_3 != 0) {
               do {
                  uVar6 = ( *pcVar5 )(param_2, *param_4, param_4[1]);
                  if ((int)uVar6 != 0) {
                     return uVar6;
                  }

                  param_4 = param_4 + 2;
               }
 while ( param_4 != puVar7 );
            }

            return 0;
         }

      }

   }

   return 6;
}
long *FT_Get_Module(long param_1, char *param_2) {
   undefined8 *puVar1;
   long *plVar2;
   int iVar3;
   undefined8 *puVar4;
   if (( param_1 != 0 ) && ( param_2 != (char*)0x0 )) {
      puVar4 = (undefined8*)( param_1 + 0x18 );
      puVar1 = puVar4 + *(uint*)( param_1 + 0x14 );
      for (; puVar4 < puVar1; puVar4 = puVar4 + 1) {
         plVar2 = (long*)*puVar4;
         iVar3 = strcmp(*(char**)( *plVar2 + 0x10 ), param_2);
         if (iVar3 == 0) {
            return plVar2;
         }

      }

   }

   return (long*)0x0;
}
long *FT_Get_Module_Interface(void) {
   long *plVar1;
   plVar1 = (long*)FT_Get_Module();
   if (plVar1 != (long*)0x0) {
      plVar1 = *(long**)( *plVar1 + 0x28 );
   }

   return plVar1;
}
long ft_module_get_service(long *param_1, undefined8 param_2, char param_3) {
   undefined8 *puVar1;
   long *plVar2;
   long lVar3;
   undefined8 *puVar4;
   bool bVar5;
   if (param_1 == (long*)0x0) {
      return 0;
   }

   if (*(code**)( *param_1 + 0x40 ) == (code*)0x0) {
      bVar5 = true;
      lVar3 = 0;
   }
 else {
      lVar3 = ( **(code**)( *param_1 + 0x40 ) )();
      bVar5 = lVar3 == 0;
   }

   if (( param_3 != '\0' ) && ( bVar5 )) {
      puVar4 = (undefined8*)( param_1[1] + 0x18 );
      puVar1 = puVar4 + *(uint*)( param_1[1] + 0x14 );
      for (; puVar4 < puVar1; puVar4 = puVar4 + 1) {
         plVar2 = (long*)*puVar4;
         if (( ( param_1 != plVar2 ) && ( *(code**)( *plVar2 + 0x40 ) != (code*)0x0 ) ) && ( lVar3 = ( **(code**)( *plVar2 + 0x40 ) )(plVar2, param_2) ),lVar3 != 0) {
            return lVar3;
         }

      }

      lVar3 = 0;
   }

   return lVar3;
}
undefined8 FT_Remove_Module(long param_1, long *param_2) {
   ulong *puVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   ulong *puVar5;
   long lVar6;
   long lVar7;
   ulong uVar8;
   long lVar9;
   long *plVar10;
   long *plVar11;
   if (param_1 == 0) {
      return 0x21;
   }

   if (param_2 != (long*)0x0) {
      plVar11 = (long*)( param_1 + 0x18 );
      plVar10 = plVar11 + *(uint*)( param_1 + 0x14 );
      for (; plVar11 < plVar10; plVar11 = plVar11 + 1) {
         if ((long*)*plVar11 == param_2) {
            *(uint*)( param_1 + 0x14 ) = *(uint*)( param_1 + 0x14 ) - 1;
            if (plVar11 < plVar10 + -1) {
               memmove(plVar11, plVar11 + 1, ( (long)plVar10 + ( -9 - (long)plVar11 ) & 0xfffffffffffffff8U ) + 8);
            }

            puVar1 = (ulong*)*param_2;
            plVar11 = (long*)param_2[1];
            plVar10[-1] = 0;
            lVar2 = param_2[2];
            uVar8 = *puVar1;
            if (plVar11 == (long*)0x0) goto LAB_001042e9;
            if (param_2 == (long*)plVar11[0x26]) {
               plVar11[0x26] = 0;
            }

            if (( ( uVar8 & 2 ) == 0 ) || ( plVar10 = (long*)plVar11[0x23] ),plVar10 == (long*)0x0) goto LAB_001042e9;
            goto LAB_00104359;
         }

      }

   }

   return 0x22;
   while (plVar10 = (long*)plVar10[1],plVar10 != (long*)0x0) {
      LAB_00104359:if (param_2 == (long*)plVar10[2]) {
         lVar6 = *plVar11;
         if (param_2[0xd] != 0) {
            ( **(code**)( *(long*)( param_2[3] + 0x70 ) + 0x28 ) )();
         }

         lVar9 = *plVar10;
         plVar4 = (long*)plVar10[1];
         if (lVar9 == 0) {
            plVar11[0x23] = (long)plVar4;
         }
 else {
            *(long**)( lVar9 + 8 ) = plVar4;
         }

         if (plVar4 == (long*)0x0) {
            plVar11[0x24] = lVar9;
         }
 else {
            *plVar4 = lVar9;
         }

         ( **(code**)( lVar6 + 0x10 ) )(lVar6, plVar10);
         lVar6 = plVar11[0x23];
         goto joined_r0x001043ab;
      }

   }
;
   goto LAB_001042e9;
   joined_r0x001043ab:if (lVar6 == 0) goto LAB_0010445e;
   lVar9 = *(long*)( lVar6 + 0x10 );
   if (*(int*)( lVar9 + 0x20 ) == 0x6f75746c) goto LAB_001043d2;
   lVar6 = *(long*)( lVar6 + 8 );
   goto joined_r0x001043ab;
   LAB_0010445e:lVar9 = 0;
   LAB_001043d2:puVar5 = (ulong*)*param_2;
   plVar11[0x25] = lVar9;
   uVar8 = *puVar5;
   LAB_001042e9:if (( ( uVar8 & 1 ) != 0 ) && ( lVar6 = lVar6 != 0 )) {
      lVar9 = param_2[4];
      while (lVar9 != 0) {
         lVar7 = *(long*)( lVar9 + 8 );
         destroy_face(lVar6, *(undefined8*)( lVar9 + 0x10 ), param_2);
         ( **(code**)( lVar6 + 0x10 ) )(lVar6, lVar9);
         lVar9 = lVar7;
      }
;
      *(undefined1(*) [16])( param_2 + 4 ) = (undefined1[16])0x0;
   }

   pcVar3 = (code*)puVar1[7];
   if (pcVar3 != (code*)0x0) {
      ( *pcVar3 )(param_2);
   }

   ( **(code**)( lVar2 + 0x10 ) )(lVar2, param_2);
   return 0;
}
void FT_Property_Set(void) {
   ft_property_do();
   return;
}
void FT_Property_Get(void) {
   ft_property_do();
   return;
}
void ft_property_string_set(void) {
   ft_property_do();
   return;
}
undefined8 FT_Reference_Library(long param_1) {
   if (param_1 != 0) {
      *(int*)( param_1 + 0x188 ) = *(int*)( param_1 + 0x188 ) + 1;
      return 0;
   }

   return 0x21;
}
undefined8 FT_New_Library(long param_1, long *param_2) {
   long lVar1;
   undefined8 uVar2;
   long *plVar3;
   ulong uVar4;
   undefined8 *puVar5;
   byte bVar6;
   bVar6 = 0;
   if (param_1 != 0) {
      uVar2 = 6;
      if (param_2 != (long*)0x0) {
         plVar3 = (long*)( **(code**)( param_1 + 8 ) )(param_1, 400);
         if (plVar3 == (long*)0x0) {
            uVar2 = 0x40;
         }
 else {
            plVar3[0x31] = 0;
            puVar5 = (undefined8*)( ( ulong )(plVar3 + 1) & 0xfffffffffffffff8 );
            for (uVar4 = ( ulong )(( (int)plVar3 - (int)(undefined8*)( ( ulong )(plVar3 + 1) & 0xfffffffffffffff8 ) ) + 400U >> 3); lVar1 = _LC17,uVar4 != 0; uVar4 = uVar4 - 1) {
               *puVar5 = 0;
               puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
            }

            *plVar3 = param_1;
            *(undefined4*)( plVar3 + 2 ) = 2;
            plVar3[1] = lVar1;
            uVar2 = 0;
            *(undefined4*)( plVar3 + 0x31 ) = 1;
            *param_2 = (long)plVar3;
         }

      }

      return uVar2;
   }

   return 6;
}
void FT_Library_Version(long param_1, undefined4 *param_2, undefined4 *param_3, undefined4 *param_4) {
   undefined4 uVar1;
   undefined4 uVar2;
   undefined4 uVar3;
   if (param_1 == 0) {
      uVar1 = 0;
      uVar2 = 0;
      uVar3 = 0;
   }
 else {
      uVar3 = *(undefined4*)( param_1 + 8 );
      uVar2 = *(undefined4*)( param_1 + 0xc );
      uVar1 = *(undefined4*)( param_1 + 0x10 );
   }

   if (param_2 != (undefined4*)0x0) {
      *param_2 = uVar3;
   }

   if (param_3 != (undefined4*)0x0) {
      *param_3 = uVar2;
   }

   if (param_4 != (undefined4*)0x0) {
      *param_4 = uVar1;
   }

   return;
}
undefined8 FT_Done_Library(long *param_1) {
   long lVar1;
   char *__s2;
   undefined8 *puVar2;
   byte *pbVar3;
   int iVar4;
   uint uVar5;
   long lVar6;
   undefined8 uVar7;
   long lVar8;
   uint uVar9;
   long in_FS_OFFSET;
   char **local_70;
   char *local_58;
   undefined8 local_50;
   char *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (long*)0x0) {
      uVar7 = 0x21;
   }
 else {
      iVar4 = (int)param_1[0x31] + -1;
      *(int*)( param_1 + 0x31 ) = iVar4;
      if (iVar4 < 1) {
         local_70 = &local_58;
         lVar1 = *param_1;
         uVar9 = *(uint*)( (long)param_1 + 0x14 );
         local_50 = 0;
         local_58 = "type42";
         uVar5 = uVar9;
         do {
            if (uVar9 != 0) {
               lVar8 = 0;
               __s2 = *local_70;
               do {
                  while (true) {
                     puVar2 = (undefined8*)param_1[lVar8 + 3];
                     pbVar3 = (byte*)*puVar2;
                     if (( ( ( __s2 == (char*)0x0 ) || ( iVar4 = strcmp(*(char**)( pbVar3 + 0x10 ), __s2) ),iVar4 == 0 ) ) && ( ( *pbVar3 & 1 ) != 0 )) &&( lVar6 = lVar6 != 0 );
                     lVar8 = lVar8 + 1;
                     uVar5 = uVar9;
                     if (uVar9 <= (uint)lVar8) goto LAB_001046d3;
                  }
;
                  do {
                     FT_Done_Face(*(undefined8*)( lVar6 + 0x10 ));
                     lVar6 = puVar2[4];
                  }
 while ( lVar6 != 0 );
                  uVar9 = *(uint*)( (long)param_1 + 0x14 );
                  lVar8 = lVar8 + 1;
                  uVar5 = uVar9;
               }
 while ( (uint)lVar8 < uVar9 );
            }

            LAB_001046d3:local_70 = local_70 + 1;
         }
 while ( local_70 != &local_48 );
         while (uVar9 != 0) {
            FT_Remove_Module(param_1, param_1[( ulong )(uVar5 - 1) + 3]);
            uVar5 = *(uint*)( (long)param_1 + 0x14 );
            uVar9 = uVar5;
         }
;
         ( **(code**)( lVar1 + 0x10 ) )(lVar1, param_1);
      }

      uVar7 = 0;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void FT_Set_Debug_Hook(long param_1, uint param_2, long param_3) {
   if (( param_3 != 0 && param_2 < 4 ) && ( param_1 != 0 )) {
      *(long*)( param_1 + 0x138 + (ulong)param_2 * 8 ) = param_3;
      return;
   }

   return;
}
undefined4 FT_Get_TrueType_Engine_Type(long param_1) {
   long lVar1;
   undefined4 *puVar2;
   if (param_1 == 0) {
      return 0;
   }

   lVar1 = FT_Get_Module(param_1, "truetype");
   if (lVar1 != 0) {
      puVar2 = (undefined4*)ft_module_get_service(lVar1, "truetype-engine", 0);
      if (puVar2 != (undefined4*)0x0) {
         return *puVar2;
      }

   }

   return 0;
}
undefined8 FT_Get_SubGlyph_Info(long param_1, uint param_2, undefined4 *param_3, uint *param_4, undefined4 *param_5, undefined4 *param_6, undefined8 *param_7) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined4 *puVar3;
   if (param_1 == 0) {
      return 6;
   }

   if (( ( *(long*)( param_1 + 0xf8 ) != 0 ) && ( *(int*)( param_1 + 0x90 ) == 0x636f6d70 ) ) && ( param_2 < *(uint*)( param_1 + 0xf0 ) )) {
      puVar3 = (undefined4*)( *(long*)( param_1 + 0xf8 ) + (ulong)param_2 * 0x30 );
      uVar1 = *(undefined8*)( puVar3 + 4 );
      uVar2 = *(undefined8*)( puVar3 + 6 );
      *param_3 = *puVar3;
      *param_4 = ( uint ) * (ushort*)( puVar3 + 1 );
      *param_5 = puVar3[2];
      *param_6 = puVar3[3];
      *param_7 = uVar1;
      param_7[1] = uVar2;
      uVar1 = *(undefined8*)( puVar3 + 10 );
      param_7[2] = *(undefined8*)( puVar3 + 8 );
      param_7[3] = uVar1;
      return 0;
   }

   return 6;
}
undefined8 FT_Get_Color_Glyph_Layer(long param_1, uint param_2, long param_3, long param_4, long param_5) {
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar1;
   if (( ( ( param_1 != 0 ) && ( param_3 != 0 ) ) && ( param_4 != 0 ) ) && ( ( ( param_5 != 0 && ( param_2 < *(uint*)( param_1 + 0x20 ) ) ) && ( ( ( *(byte*)( param_1 + 0x10 ) & 8 ) != 0 && ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 0x370 ) + 0x108 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0 ) ) ) )) {
      /* WARNING: Could not recover jumptable at 0x001048a6. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar1 = ( *UNRECOVERED_JUMPTABLE )();
      return uVar1;
   }

   return 0;
}
undefined8 FT_Get_Color_Glyph_Paint(long param_1, undefined8 param_2, undefined8 param_3, long param_4) {
   undefined8 uVar1;
   if (( ( ( param_1 != 0 ) && ( param_4 != 0 ) ) && ( ( *(byte*)( param_1 + 0x10 ) & 8 ) != 0 ) ) && ( *(long*)( *(long*)( param_1 + 0x370 ) + 0x108 ) != 0 )) {
      /* WARNING: Could not recover jumptable at 0x001048e5. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar1 = ( **(code**)( *(long*)( param_1 + 0x370 ) + 0x110 ) )();
      return uVar1;
   }

   return 0;
}
undefined8 FT_Get_Color_Glyph_ClipBox(long param_1, undefined8 param_2, long param_3) {
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar1;
   if (( ( ( param_1 != 0 ) && ( param_3 != 0 ) ) && ( ( *(byte*)( param_1 + 0x10 ) & 8 ) != 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 0x370 ) + 0x118 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x00104927. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar1 = ( *UNRECOVERED_JUMPTABLE )();
      return uVar1;
   }

   return 0;
}
undefined8 FT_Get_Paint_Layers(long param_1, long param_2, long param_3) {
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar1;
   if (( ( ( param_3 != 0 && param_2 != 0 ) && ( param_1 != 0 ) ) && ( ( *(byte*)( param_1 + 0x10 ) & 8 ) != 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 0x370 ) + 0x120 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x00104972. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar1 = ( *UNRECOVERED_JUMPTABLE )();
      return uVar1;
   }

   return 0;
}
undefined8 FT_Get_Paint(long param_1, undefined8 param_2, undefined8 param_3, long param_4) {
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar1;
   if (( ( ( param_1 != 0 ) && ( param_4 != 0 ) ) && ( ( *(byte*)( param_1 + 0x10 ) & 8 ) != 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 0x370 ) + 0x130 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x001049a7. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar1 = ( *UNRECOVERED_JUMPTABLE )();
      return uVar1;
   }

   return 0;
}
undefined8 FT_Get_Colorline_Stops(long param_1, long param_2, long param_3) {
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar1;
   if (( ( ( param_2 != 0 && param_3 != 0 ) && ( param_1 != 0 ) ) && ( ( *(byte*)( param_1 + 0x10 ) & 8 ) != 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 0x370 ) + 0x128 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x001049f2. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar1 = ( *UNRECOVERED_JUMPTABLE )();
      return uVar1;
   }

   return 0;
}
undefined8 FT_Outline_Decompose(short *param_1, undefined8 *param_2, undefined8 param_3) {
   short sVar1;
   undefined4 uVar2;
   long lVar3;
   undefined8 uVar4;
   byte bVar5;
   long *plVar6;
   long *plVar7;
   byte *pbVar8;
   int iVar9;
   byte *pbVar10;
   long *plVar11;
   long in_FS_OFFSET;
   int local_bc;
   long local_b8;
   long local_98;
   long lStack_90;
   long local_88;
   long lStack_80;
   long local_78;
   long local_70;
   long local_68;
   long lStack_60;
   long local_58;
   long local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (short*)0x0) {
      LAB_00104f08:uVar4 = 0x14;
   }
 else if (param_2 == (undefined8*)0x0) {
      uVar4 = 6;
   }
 else {
      uVar2 = *(undefined4*)( param_2 + 4 );
      lVar3 = param_2[5];
      if (0 < *param_1) {
         local_bc = -1;
         local_b8 = 0;
         LAB_00104a7b:sVar1 = *(short*)( *(long*)( param_1 + 0xc ) + local_b8 * 2 );
         iVar9 = local_bc + 1;
         local_bc = (int)sVar1;
         if (iVar9 <= sVar1) {
            plVar11 = (long*)( *(long*)( param_1 + 4 ) + (long)sVar1 * 0x10 );
            plVar6 = (long*)( *(long*)( param_1 + 4 ) + (long)iVar9 * 0x10 );
            pbVar10 = (byte*)( (long)iVar9 + *(long*)( param_1 + 8 ) );
            bVar5 = (byte)uVar2;
            local_98 = ( *plVar6 << ( bVar5 & 0x3f ) ) - lVar3;
            lStack_90 = ( plVar6[1] << ( bVar5 & 0x3f ) ) - lVar3;
            local_88 = local_98;
            lStack_80 = lStack_90;
            if (( *pbVar10 & 3 ) != 2) {
               if (( *pbVar10 & 3 ) == 0) {
                  local_88 = ( *plVar11 << ( bVar5 & 0x3f ) ) - lVar3;
                  lStack_80 = ( plVar11[1] << ( bVar5 & 0x3f ) ) - lVar3;
                  if (( *(byte*)( *(long*)( param_1 + 8 ) + (long)sVar1 ) & 3 ) == 1) {
                     plVar11 = plVar11 + -2;
                  }
 else {
                     local_88 = ( local_98 + local_88 ) / 2;
                     lStack_80 = ( lStack_90 + lStack_80 ) / 2;
                  }

                  plVar6 = plVar6 + -2;
                  pbVar10 = pbVar10 + -1;
               }

               uVar4 = ( *(code*)*param_2 )(&local_88, param_3);
               if ((int)uVar4 == 0) {
                  joined_r0x00104b49:do {
                     if (plVar11 <= plVar6) goto LAB_00104d4f;
                     plVar7 = plVar6 + 2;
                     pbVar8 = pbVar10 + 1;
                     if (( pbVar10[1] & 3 ) == 0) {
                        local_98 = ( plVar6[2] << ( bVar5 & 0x3f ) ) - lVar3;
                        lStack_90 = ( plVar6[3] << ( bVar5 & 0x3f ) ) - lVar3;
                        if (plVar11 <= plVar7) {
                           LAB_00104ecd:uVar4 = ( *(code*)param_2[2] )(&local_98, &local_88, param_3);
                           goto LAB_00104eda;
                        }

                        while (true) {
                           pbVar10 = pbVar8 + 1;
                           plVar6 = plVar7 + 2;
                           pbVar8 = pbVar8 + 1;
                           local_68 = ( plVar7[2] << ( bVar5 & 0x3f ) ) - lVar3;
                           lStack_60 = ( plVar7[3] << ( bVar5 & 0x3f ) ) - lVar3;
                           if (( *pbVar10 & 3 ) == 1) break;
                           if (( *pbVar10 & 3 ) != 0) goto LAB_00104f08;
                           local_58 = ( local_68 + local_98 ) / 2;
                           local_50 = ( lStack_60 + lStack_90 ) / 2;
                           uVar4 = ( *(code*)param_2[2] )(&local_98, &local_58, param_3);
                           if ((int)uVar4 != 0) goto LAB_00104c68;
                           local_98 = local_68;
                           lStack_90 = lStack_60;
                           plVar7 = plVar6;
                           if (plVar11 <= plVar6) goto LAB_00104ecd;
                        }
;
                        uVar4 = ( *(code*)param_2[2] )(&local_98, &local_68, param_3);
                        iVar9 = (int)uVar4;
                        pbVar10 = pbVar8;
                     }
 else {
                        if (( pbVar10[1] & 3 ) != 1) {
                           if (( plVar11 < plVar6 + 4 ) || ( ( pbVar10[2] & 3 ) != 2 )) goto LAB_00104f08;
                           local_78 = ( plVar6[2] << ( bVar5 & 0x3f ) ) - lVar3;
                           local_70 = ( plVar6[3] << ( bVar5 & 0x3f ) ) - lVar3;
                           local_68 = ( plVar6[4] << ( bVar5 & 0x3f ) ) - lVar3;
                           lStack_60 = ( plVar6[5] << ( bVar5 & 0x3f ) ) - lVar3;
                           if (plVar11 < plVar6 + 6) {
                              uVar4 = ( *(code*)param_2[3] )(&local_78, &local_68, &local_88, param_3);
                              goto LAB_00104eda;
                           }

                           local_58 = ( plVar6[6] << ( bVar5 & 0x3f ) ) - lVar3;
                           local_50 = ( plVar6[7] << ( bVar5 & 0x3f ) ) - lVar3;
                           uVar4 = ( *(code*)param_2[3] )(&local_78, &local_68, &local_58, param_3);
                           if ((int)uVar4 != 0) break;
                           pbVar10 = pbVar10 + 3;
                           plVar6 = plVar6 + 6;
                           goto joined_r0x00104b49;
                        }

                        local_58 = ( plVar6[2] << ( bVar5 & 0x3f ) ) - lVar3;
                        local_50 = ( plVar6[3] << ( bVar5 & 0x3f ) ) - lVar3;
                        uVar4 = ( *(code*)param_2[1] )(&local_58, param_3);
                        iVar9 = (int)uVar4;
                        plVar6 = plVar7;
                        pbVar10 = pbVar8;
                     }

                     if (iVar9 != 0) break;
                  }
 while ( true );
               }

               goto LAB_00104c68;
            }

         }

         goto LAB_00104f08;
      }

      LAB_00104efa:uVar4 = 0;
   }

   LAB_00104c68:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00104d4f:uVar4 = ( *(code*)param_2[1] )(&local_88, param_3);
   LAB_00104eda:if ((int)uVar4 != 0) goto LAB_00104c68;
   local_b8 = local_b8 + 1;
   if ((int)*param_1 <= (int)local_b8) goto LAB_00104efa;
   goto LAB_00104a7b;
}
undefined8 FT_Outline_Check(short *param_1) {
   short sVar1;
   short sVar2;
   long lVar3;
   undefined8 uVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   if (param_1 != (short*)0x0) {
      sVar1 = param_1[1];
      iVar7 = (int)sVar1;
      sVar2 = *param_1;
      if (sVar1 == 0 && sVar2 == 0) {
         return 0;
      }

      if (( 0 < sVar1 ) && ( 0 < sVar2 )) {
         sVar1 = **(short**)( param_1 + 0xc );
         if (( -1 < sVar1 ) && ( sVar1 < iVar7 )) {
            lVar3 = 1;
            iVar5 = (int)sVar1;
            do {
               if ((int)sVar2 <= (int)lVar3) {
                  uVar4 = 0x14;
                  if (iVar7 + -1 == iVar5) {
                     uVar4 = 0;
                  }

                  return uVar4;
               }

               iVar6 = (int)( *(short**)( param_1 + 0xc ) )[lVar3];
               lVar3 = lVar3 + 1;
            }
 while ( ( iVar5 < iVar6 ) && ( iVar5 = iVar6 < iVar7 ) );
         }

      }

   }

   return 0x14;
}
undefined8 FT_Outline_Copy(int *param_1, int *param_2) {
   undefined8 uVar1;
   if (param_1 == (int*)0x0) {
      return 0x14;
   }

   if (param_2 != (int*)0x0) {
      uVar1 = 6;
      if (*param_1 == *param_2) {
         if (param_1 != param_2) {
            if (*(short*)( (long)param_1 + 2 ) != 0) {
               memcpy(*(void**)( param_2 + 2 ), *(void**)( param_1 + 2 ), (long)*(short*)( (long)param_1 + 2 ) << 4);
               memcpy(*(void**)( param_2 + 4 ), *(void**)( param_1 + 4 ), (long)*(short*)( (long)param_1 + 2 ));
            }

            if ((short)*param_1 != 0) {
               memcpy(*(void**)( param_2 + 6 ), *(void**)( param_1 + 6 ), (long)(short)*param_1 * 2);
            }

            param_2[8] = param_1[8] & 0xfffffffeU | param_2[8] & 1U;
         }

         uVar1 = 0;
      }

      return uVar1;
   }

   return 0x14;
}
undefined8 FT_Outline_Done(long *param_1, undefined4 *param_2) {
   long lVar1;
   undefined8 uVar2;
   if (param_1 != (long*)0x0) {
      if (param_2 == (undefined4*)0x0) {
         uVar2 = 0x14;
      }
 else {
         lVar1 = *param_1;
         if (lVar1 == 0) {
            uVar2 = 6;
         }
 else {
            if (( *(byte*)( param_2 + 8 ) & 1 ) != 0) {
               if (*(long*)( param_2 + 2 ) != 0) {
                  ( **(code**)( lVar1 + 0x10 ) )(lVar1);
               }

               *(undefined8*)( param_2 + 2 ) = 0;
               if (*(long*)( param_2 + 4 ) != 0) {
                  ( **(code**)( lVar1 + 0x10 ) )(lVar1);
               }

               *(undefined8*)( param_2 + 4 ) = 0;
               if (*(long*)( param_2 + 6 ) != 0) {
                  ( **(code**)( lVar1 + 0x10 ) )(lVar1);
               }

            }

            *param_2 = 0;
            uVar2 = 0;
            *(undefined8*)( param_2 + 6 ) = 0;
            param_2[8] = 0;
            *(undefined1(*) [16])( param_2 + 2 ) = (undefined1[16])0x0;
         }

      }

      return uVar2;
   }

   return 0x21;
}
void FT_Outline_Get_CBox(long param_1, long *param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long *plVar7;
   if (( param_1 != 0 ) && ( param_2 != (long*)0x0 )) {
      if (*(short*)( param_1 + 2 ) == 0) {
         lVar5 = 0;
         lVar6 = 0;
         lVar3 = 0;
         lVar4 = 0;
      }
 else {
         plVar1 = *(long**)( param_1 + 8 );
         lVar4 = *plVar1;
         lVar3 = plVar1[1];
         plVar7 = plVar1 + (long)*(short*)( param_1 + 2 ) * 2;
         lVar6 = lVar4;
         lVar5 = lVar3;
         while (plVar1 = plVar1 + 2,plVar1 < plVar7) {
            lVar2 = *plVar1;
            if (lVar2 < lVar4) {
               lVar4 = lVar2;
            }

            if (lVar6 < lVar2) {
               lVar6 = lVar2;
            }

            lVar2 = plVar1[1];
            if (lVar2 < lVar3) {
               lVar3 = lVar2;
            }

            if (lVar5 < lVar2) {
               lVar5 = lVar2;
            }

         }
;
      }

      *param_2 = lVar4;
      param_2[2] = lVar6;
      param_2[1] = lVar3;
      param_2[3] = lVar5;
   }

   return;
}
ulong ft_glyphslot_preset_bitmap(undefined8 *param_1, int param_2, long *param_3) {
   ulong uVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   int iVar6;
   uint uVar7;
   int iVar8;
   undefined1 uVar9;
   long lVar10;
   long lVar11;
   ulong uVar12;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   long local_58;
   long local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( param_1 + 0x12 ) == 0x53564720) {
      plVar2 = (long*)FT_Get_Module(*param_1, "ot-svg");
      uVar1 = ( *(code*)**(undefined8**)( *plVar2 + 0x28 ) )(plVar2, param_1, 0);
      goto LAB_001053d4;
   }

   uVar1 = 1;
   if (*(int*)( param_1 + 0x12 ) != 0x6f75746c) goto LAB_001053d4;
   if (param_3 == (long*)0x0) {
      uVar12 = 0;
      uVar1 = 0;
      lVar3 = 0;
      lVar10 = 0;
   }
 else {
      uVar1 = ( ulong )(( uint ) * param_3 & 0x3f);
      lVar10 = *param_3 >> 6;
      lVar3 = param_3[1] >> 6;
      uVar12 = ( ulong )((uint)param_3[1] & 0x3f);
   }

   FT_Outline_Get_CBox(param_1 + 0x19, &local_68);
   lVar5 = ( local_68 >> 6 ) + lVar10;
   lVar10 = lVar10 + ( local_58 >> 6 );
   lVar11 = local_60 >> 6;
   local_68 = ( (uint)local_68 & 0x3f ) + uVar1;
   local_60 = ( (uint)local_60 & 0x3f ) + uVar12;
   local_58 = ( (uint)local_58 & 0x3f ) + uVar1;
   lVar11 = lVar11 + lVar3;
   lVar4 = local_50 >> 6;
   local_50 = ( (uint)local_50 & 0x3f ) + uVar12;
   lVar3 = lVar3 + lVar4;
   if (param_2 == 3) {
      ft_lcd_padding(&local_68, param_1, 3);
      iVar6 = 5;
      LAB_0010545b:lVar5 = ( local_68 >> 6 ) + lVar5;
      lVar11 = ( local_60 >> 6 ) + lVar11;
      lVar10 = ( local_58 + 0x3f >> 6 ) + lVar10;
      lVar3 = ( local_50 + 0x3f >> 6 ) + lVar3;
      lVar4 = lVar10 - lVar5;
      uVar7 = (uint)lVar4;
      iVar8 = (int)lVar3 - (int)lVar11;
      if (iVar6 == 5) {
         lVar4 = lVar4 * 3;
         uVar9 = 5;
         uVar7 = (int)lVar4 + 3U & 0xfffffffc;
      }
 else if (iVar6 == 6) {
         iVar8 = iVar8 * 3;
         uVar9 = 6;
      }
 else {
         uVar9 = 2;
      }

   }
 else {
      if (param_2 == 4) {
         ft_lcd_padding(&local_68, param_1, 4);
         iVar6 = 6;
         goto LAB_0010545b;
      }

      if (param_2 != 2) {
         iVar6 = 2;
         goto LAB_0010545b;
      }

      lVar5 = ( local_68 + 0x1f >> 6 ) + lVar5;
      lVar10 = ( local_58 + 0x20 >> 6 ) + lVar10;
      if (lVar5 == lVar10) {
         if ((long)( ( ( ulong )(( uint )(local_68 + 0x1f) & 0x3f) - 0x1f ) + ( ulong )(( uint )(local_58 + 0x20) & 0x3f) ) < 0x20) {
            lVar5 = lVar5 + -1;
         }
 else {
            lVar10 = lVar5 + 1;
         }

      }

      lVar4 = lVar10 - lVar5;
      lVar11 = ( local_60 + 0x1f >> 6 ) + lVar11;
      lVar3 = ( local_50 + 0x20 >> 6 ) + lVar3;
      if (lVar11 == lVar3) {
         if ((long)( ( ( ulong )(( uint )(local_60 + 0x1f) & 0x3f) - 0x1f ) + ( ulong )(( uint )(local_50 + 0x20) & 0x3f) ) < 0x20) {
            lVar11 = lVar11 + -1;
            goto LAB_0010535a;
         }

         lVar3 = lVar11 + 1;
         iVar8 = 1;
      }
 else {
         LAB_0010535a:iVar8 = (int)lVar3 - (int)lVar11;
      }

      uVar9 = 1;
      uVar7 = (int)( lVar4 + 0xf >> 4 ) * 2;
   }

   *(int*)( param_1 + 0x18 ) = (int)lVar5;
   *(undefined1*)( (long)param_1 + 0xb2 ) = uVar9;
   *(undefined2*)( param_1 + 0x16 ) = 0x100;
   *(int*)( (long)param_1 + 0x9c ) = (int)lVar4;
   *(int*)( param_1 + 0x13 ) = iVar8;
   *(uint*)( param_1 + 0x14 ) = uVar7;
   *(int*)( (long)param_1 + 0xc4 ) = (int)lVar3;
   uVar1 = ( ulong )((uint)CONCAT71(( int7 )((ulong)lVar10 >> 8), 0x7fff < lVar10) | (uint)CONCAT71(( int7 )((ulong)lVar5 >> 8), lVar5 < -0x8000) | (uint)CONCAT71(( int7 )((ulong)lVar11 >> 8), lVar11 < -0x8000) | (uint)CONCAT71(( int7 )((ulong)lVar3 >> 8), 0x7fff < lVar3));
   LAB_001053d4:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void FT_Outline_Translate(long param_1, long param_2, long param_3) {
   short sVar1;
   long *plVar2;
   long *plVar3;
   long *plVar4;
   if (param_1 != 0) {
      sVar1 = *(short*)( param_1 + 2 );
      plVar2 = *(long**)( param_1 + 8 );
      if (0 < sVar1) {
         plVar3 = plVar2;
         do {
            plVar4 = plVar3 + 2;
            *plVar3 = *plVar3 + param_2;
            plVar3[1] = plVar3[1] + param_3;
            plVar3 = plVar4;
         }
 while ( plVar2 + ( ulong )((int)sVar1 - 1) * 2 + 2 != plVar4 );
      }

   }

   return;
}
void FT_Outline_Reverse(short *param_1) {
   undefined1 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long lVar5;
   undefined1 *puVar6;
   undefined1 *puVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   undefined8 *puVar10;
   undefined8 *puVar11;
   undefined1 *puVar12;
   undefined1 *puVar13;
   long lVar14;
   long lVar15;
   if (param_1 != (short*)0x0) {
      if (0 < *param_1) {
         lVar14 = 0;
         lVar15 = 0xffffffff;
         do {
            lVar5 = (long)( (int)lVar15 + 2 );
            lVar15 = (long)*(short*)( *(long*)( param_1 + 0xc ) + lVar14 * 2 );
            puVar8 = (undefined8*)( lVar5 * 0x10 + *(long*)( param_1 + 4 ) );
            puVar10 = (undefined8*)( *(long*)( param_1 + 4 ) + lVar15 * 0x10 );
            if (puVar8 < puVar10) {
               do {
                  uVar2 = *puVar8;
                  uVar3 = puVar8[1];
                  uVar4 = puVar10[1];
                  puVar9 = puVar8 + 2;
                  puVar11 = puVar10 + -2;
                  *puVar8 = *puVar10;
                  puVar8[1] = uVar4;
                  *puVar10 = uVar2;
                  puVar10[1] = uVar3;
                  puVar8 = puVar9;
                  puVar10 = puVar11;
               }
 while ( puVar9 < puVar11 );
            }

            puVar6 = (undefined1*)( lVar5 + *(long*)( param_1 + 8 ) );
            puVar12 = (undefined1*)( *(long*)( param_1 + 8 ) + lVar15 );
            if (puVar6 < puVar12) {
               do {
                  uVar1 = *puVar6;
                  puVar7 = puVar6 + 1;
                  puVar13 = puVar12 + -1;
                  *puVar6 = *puVar12;
                  *puVar12 = uVar1;
                  puVar6 = puVar7;
                  puVar12 = puVar13;
               }
 while ( puVar7 < puVar13 );
            }

            lVar14 = lVar14 + 1;
         }
 while ( (int)lVar14 < (int)*param_1 );
      }

      *(uint*)( param_1 + 0x10 ) = *(uint*)( param_1 + 0x10 ) ^ 4;
   }

   return;
}
undefined8 FT_Outline_Render(long param_1, long param_2, long param_3) {
   undefined8 uVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   long local_38;
   long local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      uVar1 = 0x21;
      goto LAB_001057b6;
   }

   if (param_2 != 0) {
      if (param_3 == 0) {
         uVar1 = 6;
         goto LAB_001057b6;
      }

      FT_Outline_Get_CBox(param_2, &local_48);
      if (( ( ( -0x1000001 < local_48 ) && ( -0x1000001 < local_40 ) ) && ( local_38 < 0x1000001 ) ) && ( local_30 < 0x1000001 )) {
         lVar2 = *(long*)( param_1 + 0x128 );
         lVar3 = *(long*)( param_1 + 0x118 );
         *(long*)( param_3 + 8 ) = param_2;
         if (( *(uint*)( param_3 + 0x10 ) & 6 ) == 2) {
            *(long*)( param_3 + 0x40 ) = local_48 >> 6;
            *(long*)( param_3 + 0x48 ) = local_40 >> 6;
            *(long*)( param_3 + 0x50 ) = local_38 + 0x3f >> 6;
            *(long*)( param_3 + 0x58 ) = local_30 + 0x3f >> 6;
         }

         if (lVar2 == 0) {
            uVar1 = 0x13;
         }
 else {
            while (( uVar1 = ( **(code**)( lVar2 + 0x70 ) )(*(undefined8*)( lVar2 + 0x68 ), param_3) ),(int)uVar1 != 0 && ( (char)uVar1 == '\x13' )) {
               lVar2 = *(long*)( param_1 + 0x118 );
               if (lVar3 != 0) {
                  lVar2 = *(long*)( lVar3 + 8 );
               }

               while (true) {
                  lVar3 = lVar2;
                  if (lVar3 == 0) goto LAB_001057b6;
                  lVar2 = *(long*)( lVar3 + 0x10 );
                  if (*(int*)( lVar2 + 0x20 ) == 0x6f75746c) break;
                  lVar2 = *(long*)( lVar3 + 8 );
               }
;
            }
;
         }

         goto LAB_001057b6;
      }

   }

   uVar1 = 0x14;
   LAB_001057b6:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar1;
}
undefined8 FT_Outline_Get_Bitmap(undefined8 param_1, undefined8 param_2, long param_3) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   long local_78[2];
   undefined4 local_68;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == 0) {
      uVar1 = 6;
   }
 else {
      local_68 = 0;
      if (( ( byte )(*(char*)( param_3 + 0x1a ) - 5U) < 2 ) || ( *(char*)( param_3 + 0x1a ) == '\x02' )) {
         local_68 = 1;
      }

      local_78[0] = param_3;
      uVar1 = FT_Outline_Render(param_1, param_2, local_78);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void FT_Vector_Transform(long *param_1, int *param_2) {
   long lVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   if (( param_1 != (long*)0x0 ) && ( param_2 != (int*)0x0 )) {
      lVar2 = (long)*param_2 * (long)(int)*param_1;
      lVar1 = (long)param_2[2] * (long)(int)param_1[1];
      lVar4 = (long)param_2[4] * (long)(int)*param_1;
      lVar3 = (long)param_2[6] * (long)(int)param_1[1];
      *param_1 = (long)(int)( ( ulong )(lVar2 + 0x8000 + ( lVar2 >> 0x3f )) >> 0x10 ) + (long)(int)( ( ulong )(lVar1 + 0x8000 + ( lVar1 >> 0x3f )) >> 0x10 );
      param_1[1] = (long)(int)( ( ulong )(lVar4 + 0x8000 + ( lVar4 >> 0x3f )) >> 0x10 ) + (long)(int)( ( ulong )(lVar3 + 0x8000 + ( lVar3 >> 0x3f )) >> 0x10 );
   }

   return;
}
void FT_Outline_Transform(long param_1, int *param_2) {
   short sVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   long *plVar6;
   long lVar7;
   long lVar8;
   long *plVar9;
   long *plVar10;
   long lVar11;
   long lVar12;
   if (( ( ( param_1 != 0 ) && ( param_2 != (int*)0x0 ) ) && ( plVar6 = *(long**)( param_1 + 8 ) ),plVar6 != (long*)0x0 )) &&( sVar1 = *(short*)( param_1 + 2 ) ),plVar6;
   iVar3 = param_2[2];
   iVar4 = param_2[4];
   iVar5 = param_2[6];
   plVar9 = plVar6;
   do {
      plVar10 = plVar9 + 2;
      lVar11 = (long)(int)*plVar9 * (long)iVar4;
      lVar7 = (long)(int)*plVar9 * (long)iVar2;
      lVar12 = (long)(int)plVar9[1] * (long)iVar3;
      lVar8 = (long)(int)plVar9[1] * (long)iVar5;
      *plVar9 = (long)(int)( ( ulong )(lVar12 + 0x8000 + ( lVar12 >> 0x3f )) >> 0x10 ) + (long)(int)( ( ulong )(lVar7 + 0x8000 + ( lVar7 >> 0x3f )) >> 0x10 );
      plVar9[1] = (long)(int)( ( ulong )(lVar11 + 0x8000 + ( lVar11 >> 0x3f )) >> 0x10 ) + (long)(int)( ( ulong )(lVar8 + 0x8000 + ( lVar8 >> 0x3f )) >> 0x10 );
      plVar9 = plVar10;
   }
 while ( plVar10 < plVar6 + (long)sVar1 * 2 );
   return;
}
return;}char FT_Outline_Get_Orientation(short *param_1) {
   short *psVar1;
   long *plVar2;
   long lVar3;
   uint uVar4;
   char cVar5;
   uint uVar6;
   short *psVar7;
   long lVar8;
   long lVar9;
   uint uVar10;
   long *plVar11;
   long lVar12;
   long lVar13;
   int iVar14;
   int iVar15;
   short *psVar16;
   long lVar17;
   long lVar18;
   int iVar19;
   int iVar20;
   long in_FS_OFFSET;
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar5 = '\0';
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   if (param_1 == (short*)0x0) {
      cVar5 = '\0';
   }
 else if (0 < param_1[1]) {
      FT_Outline_Get_CBox(param_1, local_68);
      if (local_68._0_8_ != local_58._0_8_) {
         if (( ( ( local_68._8_8_ != local_58._8_8_ && -0x1000001 < (long)local_68._0_8_ ) && -0x1000001 < (long)local_68._8_8_ ) && (long)local_58._0_8_ < 0x1000001 ) && ( (long)local_58._8_8_ < 0x1000001 )) {
            lVar3 = *(long*)( param_1 + 4 );
            uVar6 = local_58._0_4_;
            if ((long)local_58._0_8_ < 0) {
               uVar6 = -local_58._0_4_;
            }

            uVar10 = local_68._0_4_;
            if ((long)local_68._0_8_ < 0) {
               uVar10 = -local_68._0_4_;
            }

            uVar4 = 0x1f;
            if (( uVar6 | uVar10 ) != 0) {
               for (; ( uVar6 | uVar10 ) >> uVar4 == 0; uVar4 = uVar4 - 1) {}
            }

            iVar20 = 0x11 - ( uVar4 ^ 0x1f );
            if (iVar20 < 0) {
               iVar20 = 0;
            }

            uVar10 = local_58._8_4_ - local_68._8_4_;
            uVar6 = 0x1f;
            if (uVar10 != 0) {
               for (; uVar10 >> uVar6 == 0; uVar6 = uVar6 - 1) {}
            }

            iVar19 = 0x11 - ( uVar6 ^ 0x1f );
            if (iVar19 < 0) {
               iVar19 = 0;
            }

            if (0 < *param_1) {
               lVar18 = 0;
               psVar1 = *(short**)( param_1 + 0xc ) + 1;
               psVar7 = *(short**)( param_1 + 0xc );
               psVar16 = psVar1;
               iVar14 = -1;
               while (true) {
                  iVar15 = (int)*psVar7;
                  plVar11 = (long*)( (long)*psVar7 * 0x10 + lVar3 );
                  if (iVar14 < iVar15) {
                     lVar17 = (long)iVar14 * 0x10 + lVar3;
                     lVar8 = *plVar11 >> ( (byte)iVar20 & 0x3f );
                     lVar12 = plVar11[1] >> ( (byte)iVar19 & 0x3f );
                     do {
                        plVar11 = (long*)( lVar17 + 0x10 );
                        plVar2 = (long*)( lVar17 + 0x18 );
                        lVar17 = lVar17 + 0x10;
                        lVar9 = *plVar11 >> ( (byte)iVar20 & 0x3f );
                        lVar13 = *plVar2 >> ( (byte)iVar19 & 0x3f );
                        lVar18 = lVar18 + ( lVar13 - lVar12 ) * ( lVar8 + lVar9 );
                        lVar8 = lVar9;
                        lVar12 = lVar13;
                     }
 while ( ( ( ulong )(( iVar15 - iVar14 ) - 1) + (long)iVar14 ) * 0x10 + lVar3 + 0x10 != lVar17 );
                  }

                  if (psVar1 + ( (int)*param_1 - 1 ) == psVar16) break;
                  psVar7 = psVar16;
                  psVar16 = psVar16 + 1;
                  iVar14 = iVar15;
               }
;
               cVar5 = ( lVar18 == 0 ) * '\x02';
               if (0 < lVar18) {
                  cVar5 = '\x01';
               }

               goto LAB_00105af1;
            }

         }

      }

      cVar5 = '\x02';
   }

   LAB_00105af1:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return cVar5;
}
undefined8 FT_Outline_EmboldenXY(short *param_1, long param_2, long param_3) {
   short *psVar1;
   long *plVar2;
   short sVar3;
   long lVar4;
   bool bVar5;
   int iVar6;
   int iVar7;
   uint uVar8;
   long lVar9;
   long lVar10;
   short *psVar11;
   ulong uVar12;
   ulong uVar13;
   ulong uVar14;
   long *plVar15;
   undefined8 uVar16;
   long lVar17;
   short *psVar18;
   int iVar19;
   int iVar20;
   int iVar21;
   ulong uVar22;
   int iVar23;
   long lVar24;
   long lVar25;
   long lVar26;
   int iVar27;
   ulong uVar28;
   int iVar29;
   long in_FS_OFFSET;
   long extraout_XMM0_Qa;
   long lVar30;
   long extraout_XMM0_Qb;
   long lVar31;
   long lVar32;
   long lVar33;
   ulong local_c0;
   ulong local_b8;
   int local_b0;
   long local_a8;
   int local_a0;
   int local_98;
   long local_58;
   long lStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (short*)0x0) {
      uVar16 = 0x14;
   }
 else {
      lVar9 = param_2 / 2;
      lVar10 = param_3 / 2;
      if (( param_2 - ( param_2 >> 0x3f ) | param_3 - ( param_3 >> 0x3f ) ) >> 1 != 0) {
         iVar7 = FT_Outline_Get_Orientation();
         sVar3 = *param_1;
         if (iVar7 == 2) {
            uVar16 = 6;
            if (sVar3 != 0) goto LAB_0010601a;
         }
 else {
            lVar4 = *(long*)( param_1 + 4 );
            if (0 < sVar3) {
               iVar29 = -1;
               psVar1 = *(short**)( param_1 + 0xc ) + 1;
               psVar11 = *(short**)( param_1 + 0xc );
               psVar18 = psVar1;
               do {
                  iVar21 = iVar29 + 1;
                  iVar29 = (int)*psVar11;
                  if (( iVar29 != -1 ) && ( iVar21 != iVar29 )) {
                     lVar32 = 0;
                     lVar33 = 0;
                     iVar27 = -1;
                     local_b8 = 0;
                     lVar30 = 0;
                     lVar31 = 0;
                     uVar13 = 0;
                     iVar19 = iVar29;
                     iVar20 = iVar21;
                     do {
                        uVar14 = local_b8;
                        lVar17 = lVar30;
                        local_a8 = lVar31;
                        local_58 = lVar32;
                        lStack_50 = lVar33;
                        if (iVar27 == iVar20) {
                           joined_r0x00105d8c:lVar31 = lStack_50;
                           lVar30 = local_58;
                           uVar28 = uVar14;
                           iVar6 = iVar20;
                           local_58 = lVar30;
                           lStack_50 = lVar31;
                           if (uVar13 != 0) {
                              if (iVar27 < 0) {
                                 iVar27 = iVar19;
                                 lVar32 = lVar17;
                                 lVar33 = local_a8;
                                 local_b8 = uVar13;
                              }

                              local_b0 = (int)lVar17;
                              local_c0._0_4_ = (int)local_a8;
                              lVar25 = (long)local_b0 * (long)(int)lVar30;
                              lVar26 = (long)(int)lVar31 * (long)(int)local_c0;
                              lVar25 = (long)(int)( ( ulong )(lVar26 + 0x8000 + ( lVar26 >> 0x3f )) >> 0x10 ) + (long)(int)( ( ulong )(lVar25 + 0x8000 + ( lVar25 >> 0x3f )) >> 0x10 );
                              if (lVar25 < -0xefff) {
                                 uVar14 = 0;
                                 uVar12 = 0;
                              }
 else {
                                 lVar24 = (long)(int)local_c0 * (long)(int)lVar30;
                                 uVar14 = lVar25 + 0x10000;
                                 local_a8 = lVar31 + local_a8;
                                 lVar17 = lVar30 + lVar17;
                                 lVar26 = (long)(int)lVar31 * (long)local_b0;
                                 lVar25 = (long)(int)( ( ulong )(lVar24 + 0x8000 + ( lVar24 >> 0x3f )) >> 0x10 );
                                 lVar26 = (long)(int)( ( ulong )(lVar26 + 0x8000 + ( lVar26 >> 0x3f )) >> 0x10 );
                                 if (iVar7 == 0) {
                                    local_a8 = -local_a8;
                                    local_c0 = lVar26 - lVar25;
                                 }
 else {
                                    local_c0 = lVar25 - lVar26;
                                    lVar17 = -lVar17;
                                 }

                                 local_a0 = (int)lVar9;
                                 if (uVar28 <= uVar13) {
                                    uVar13 = uVar28;
                                 }

                                 lVar25 = (long)local_a0 * (long)(int)local_c0;
                                 lVar26 = (long)(int)uVar14 * (long)(int)uVar13;
                                 iVar23 = (int)( ( ulong )(lVar26 + 0x8000 + ( lVar26 >> 0x3f )) >> 0x10 );
                                 if (iVar23 < (int)( ( ulong )(lVar25 + 0x8000 + ( lVar25 >> 0x3f )) >> 0x10 )) {
                                    if (local_a8 < 0) {
                                       local_a8 = -local_a8;
                                       if ((long)local_c0 < 0) {
                                          uVar12 = ( ( -local_c0 >> 1 ) + local_a8 * uVar13 ) / -local_c0;
                                       }
 else {
                                          uVar12 = 0xffffffff80000001;
                                          uVar22 = local_c0;
                                          if (local_c0 != 0) goto LAB_001061dc;
                                       }

                                    }
 else {
                                       if ((long)local_c0 < 0) {
                                          uVar22 = -local_c0;
                                          LAB_001061dc:uVar12 = ( ( uVar22 >> 1 ) + local_a8 * uVar13 ) / uVar22;
                                          goto LAB_00106140;
                                       }

                                       uVar12 = 0x7fffffff;
                                       if (local_c0 != 0) {
                                          uVar12 = ( ( local_c0 >> 1 ) + local_a8 * uVar13 ) / local_c0;
                                       }

                                    }

                                 }
 else {
                                    uVar12 = uVar14 >> 1;
                                    if (local_a8 < 0) {
                                       if (-2 < param_2) {
                                          uVar12 = ( uVar12 + -local_a8 * lVar9 ) / uVar14;
                                          goto LAB_00106140;
                                       }

                                       uVar12 = ( uVar12 - -local_a8 * lVar9 ) / uVar14;
                                    }
 else if (param_2 < -1) {
                                       uVar12 = ( uVar12 - local_a8 * lVar9 ) / uVar14;
                                       LAB_00106140:uVar12 = -uVar12;
                                    }
 else {
                                       uVar12 = ( lVar9 * local_a8 + uVar12 ) / uVar14;
                                    }

                                 }

                                 local_98 = (int)lVar10;
                                 lVar25 = (long)local_98 * (long)(int)local_c0;
                                 if (iVar23 < (int)( ( ulong )(lVar25 + 0x8000 + ( lVar25 >> 0x3f )) >> 0x10 )) {
                                    if (lVar17 < 0) {
                                       if ((long)local_c0 < 0) {
                                          uVar14 = ( ( -local_c0 >> 1 ) + -lVar17 * uVar13 ) / -local_c0;
                                       }
 else {
                                          uVar14 = 0xffffffff80000001;
                                          if (local_c0 != 0) {
                                             uVar14 = ( ( local_c0 >> 1 ) + -lVar17 * uVar13 ) / local_c0;
                                             goto LAB_00106173;
                                          }

                                       }

                                    }
 else if ((long)local_c0 < 0) {
                                       uVar14 = -((uVar13 * lVar17 + (-local_c0 >> 1)) / -local_c0);
                                    }
 else {
                                       uVar14 = 0x7fffffff;
                                       if (local_c0 != 0) {
                                          uVar14 = ( ( local_c0 >> 1 ) + uVar13 * lVar17 ) / local_c0;
                                       }

                                    }

                                 }
 else {
                                    uVar13 = uVar14 >> 1;
                                    if (lVar17 < 0) {
                                       if (-2 < param_3) {
                                          uVar14 = ( uVar13 + -lVar17 * lVar10 ) / uVar14;
                                          goto LAB_00106173;
                                       }

                                       uVar14 = ( uVar13 - -lVar17 * lVar10 ) / uVar14;
                                    }
 else if (param_3 < -1) {
                                       uVar14 = ( uVar13 - lVar10 * lVar17 ) / uVar14;
                                       LAB_00106173:uVar14 = -uVar14;
                                    }
 else {
                                       uVar14 = ( uVar13 + lVar10 * lVar17 ) / uVar14;
                                    }

                                 }

                              }

                              while (iVar19 != iVar20) {
                                 plVar15 = (long*)( (long)iVar19 * 0x10 + lVar4 );
                                 *plVar15 = *plVar15 + lVar9 + uVar12;
                                 plVar15[1] = plVar15[1] + uVar14 + lVar10;
                                 bVar5 = iVar29 <= iVar19;
                                 iVar19 = iVar19 + 1;
                                 if (bVar5) {
                                    iVar19 = iVar21;
                                 }

                              }
;
                           }

                        }
 else {
                           plVar15 = (long*)( lVar4 + (long)iVar20 * 0x10 );
                           plVar2 = (long*)( lVar4 + (long)iVar19 * 0x10 );
                           local_58 = *plVar15 - *plVar2;
                           lStack_50 = plVar15[1] - plVar2[1];
                           uVar8 = FT_Vector_NormLen(&local_58);
                           uVar28 = uVar13;
                           iVar6 = iVar19;
                           lVar30 = extraout_XMM0_Qa;
                           lVar31 = extraout_XMM0_Qb;
                           uVar14 = (ulong)uVar8;
                           lVar17 = extraout_XMM0_Qa;
                           local_a8 = extraout_XMM0_Qb;
                           if ((ulong)uVar8 != 0) goto joined_r0x00105d8c;
                        }

                        iVar19 = iVar6;
                        bVar5 = iVar29 <= iVar20;
                        iVar20 = iVar20 + 1;
                        if (bVar5) {
                           iVar20 = iVar21;
                        }

                     }
 while ( ( iVar20 != iVar19 ) && ( uVar13 = iVar19 != iVar27 ) );
                  }

                  if (psVar1 + ( (int)sVar3 - 1 ) == psVar18) break;
                  psVar11 = psVar18;
                  psVar18 = psVar18 + 1;
               }
 while ( true );
            }

         }

      }

      uVar16 = 0;
   }

   LAB_0010601a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar16;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void FT_Outline_Embolden(undefined8 param_1, undefined8 param_2) {
   FT_Outline_EmboldenXY(param_1, param_2, param_2);
   return;
}
undefined8 ps_property_set(long param_1, char *param_2, uint *param_3, char param_4) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   uint uVar6;
   int iVar7;
   uint uVar8;
   long lVar9;
   uint *puVar10;
   undefined8 uVar11;
   uint *puVar12;
   long in_FS_OFFSET;
   uint *local_70;
   uint local_68[7];
   uint local_4c[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar7 = strcmp(param_2, "darkening-parameters");
   if (iVar7 != 0) {
      iVar7 = strcmp(param_2, "hinting-engine");
      if (iVar7 == 0) {
         if (param_4 == '\0') {
            uVar11 = 7;
            if (*param_3 != 1) goto LAB_001064bf;
         }
 else {
            uVar11 = 6;
            iVar7 = strcmp((char*)param_3, "adobe");
            if (iVar7 != 0) goto LAB_001064bf;
         }

         *(undefined4*)( param_1 + 0x38 ) = 1;
      }
 else {
         iVar7 = strcmp(param_2, "no-stem-darkening");
         if (iVar7 == 0) {
            if (param_4 == '\0') {
               *(byte*)( param_1 + 0x3c ) = ( byte ) * param_3;
            }
 else {
               lVar9 = strtol((char*)param_3, (char**)0x0, 10);
               *(bool*)( param_1 + 0x3c ) = lVar9 != 0;
            }

         }
 else {
            uVar11 = 0xc;
            iVar7 = strcmp(param_2, "random-seed");
            if (iVar7 != 0) goto LAB_001064bf;
            if (param_4 == '\0') {
               uVar8 = *param_3;
            }
 else {
               lVar9 = strtol((char*)param_3, (char**)0x0, 10);
               uVar8 = (uint)lVar9;
            }

            if ((int)uVar8 < 0) {
               uVar8 = 0;
            }

            *(uint*)( param_1 + 0x60 ) = uVar8;
         }

      }

      uVar11 = 0;
      goto LAB_001064bf;
   }

   uVar11 = 0;
   if (param_4 == '\0') {
      uVar8 = param_3[7];
      puVar10 = param_3;
      LAB_001063bb:uVar1 = *puVar10;
      uVar2 = puVar10[2];
      if (-1 < (int)( uVar1 | uVar2 )) {
         uVar3 = puVar10[4];
         uVar4 = puVar10[6];
         if (-1 < (int)( uVar3 | uVar4 )) {
            uVar5 = puVar10[3];
            if (( ( ( uVar5 < 0x1f5 ) && ( puVar10[1] < 0x1f5 ) ) && ( uVar6 = puVar10[5] ),uVar6 < 0x1f5 )) &&( ( ( uVar8 < 0x1f5 && ( (int)uVar1 <= (int)uVar2 ) ) && ( ( (int)uVar2 <= (int)uVar3 && ( (int)uVar3 <= (int)uVar4 ) ) ) ) ) * (ulong*)( param_1 + 0x40 ) = CONCAT44(puVar10[1], uVar1);
            *(ulong*)( param_1 + 0x48 ) = CONCAT44(uVar5, uVar2);
            *(ulong*)( param_1 + 0x50 ) = CONCAT44(uVar6, uVar3);
            *(ulong*)( param_1 + 0x58 ) = CONCAT44(uVar8, uVar4);
            goto LAB_001064bf;
         }

      }

   }

}
else{puVar10 = local_68;puVar12 = puVar10;do {
   lVar9 = strtol((char*)param_3, (char**)&local_70, 10);
   *puVar12 = (uint)lVar9;
   if (( ( byte ) * local_70 != 0x2c ) || ( local_70 == param_3 )) goto LAB_00106560;
   puVar12 = puVar12 + 1;
   param_3 = (uint*)( (long)local_70 + 1 );
}
 while ( puVar12 != local_4c );lVar9 = strtol((char*)param_3, (char**)&local_70, 10);uVar8 = (uint)lVar9;local_4c[0] = uVar8;if (( ( *local_70 & 0xdf ) == 0 ) && ( local_70 != param_3 )) goto LAB_001063bb;}LAB_00106560:uVar11 = 6;LAB_001064bf:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar11;}undefined8 ps_property_get(long param_1, char *param_2, undefined4 *param_3) {
   int iVar1;
   iVar1 = strcmp(param_2, "darkening-parameters");
   if (iVar1 == 0) {
      *param_3 = *(undefined4*)( param_1 + 0x40 );
      for (int i = 0; i < 7; i++) {
         param_3[( i + 1 )] = *(undefined4*)( param_1 + ( 4*i + 68 ) );
      }

   }
 else {
      iVar1 = strcmp(param_2, "hinting-engine");
      if (iVar1 == 0) {
         *param_3 = *(undefined4*)( param_1 + 0x38 );
      }
 else {
         iVar1 = strcmp(param_2, "no-stem-darkening");
         if (iVar1 != 0) {
            return 0xc;
         }

         *(undefined1*)param_3 = *(undefined1*)( param_1 + 0x3c );
      }

   }

   return 0;
}
void FT_Raccess_Guess(undefined8 param_1, long param_2, undefined8 param_3, undefined8 *param_4, long param_5, undefined4 *param_6) {
   undefined4 uVar1;
   long lVar2;
   undefined **ppuVar3;
   ppuVar3 = &ft_raccess_guess_table;
   do {
      *param_4 = 0;
      if (param_2 == 0) {
         *param_6 = 0;
         LAB_001066c8:uVar1 = ( *(code*)*ppuVar3 )(param_1, param_2, param_3, param_4, param_5);
         *param_6 = uVar1;
      }
 else {
         if (*(code**)( param_2 + 0x28 ) == (code*)0x0) {
            LAB_001066b9:*(undefined8*)( param_2 + 0x10 ) = 0;
            *param_6 = 0;
            goto LAB_001066c8;
         }

         lVar2 = ( **(code**)( param_2 + 0x28 ) )(param_2, 0, 0, 0);
         if (lVar2 == 0) goto LAB_001066b9;
         *param_6 = 0x55;
      }

      ppuVar3 = ppuVar3 + 2;
      param_4 = param_4 + 1;
      param_5 = param_5 + 8;
      param_6 = param_6 + 1;
      if (ppuVar3 == (undefined**)"/..namedfork/rsr") {
         return;
      }

   }
 while ( true );
}
undefined2 FT_Get_Sfnt_Name_Count(long param_1) {
   undefined2 uVar1;
   uVar1 = 0;
   if (( param_1 != 0 ) && ( ( *(byte*)( param_1 + 0x10 ) & 8 ) != 0 )) {
      uVar1 = *(undefined2*)( param_1 + 0x230 );
   }

   return uVar1;
}
void FT_Stream_OpenMemory(undefined8 *param_1, undefined8 param_2, undefined8 param_3) {
   *param_1 = param_2;
   param_1[1] = param_3;
   param_1[2] = 0;
   param_1[8] = 0;
   *(undefined1(*) [16])( param_1 + 5 ) = (undefined1[16])0x0;
   return;
}
void FT_Stream_Close(long param_1) {
   if (( param_1 != 0 ) && ( *(code**)( param_1 + 0x30 ) != (code*)0x0 )) {
      /* WARNING: Could not recover jumptable at 0x00106792. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( param_1 + 0x30 ) )();
      return;
   }

   return;
}
undefined8 FT_Stream_Seek(long param_1, ulong param_2) {
   long lVar1;
   if (*(code**)( param_1 + 0x28 ) == (code*)0x0) {
      if (*(ulong*)( param_1 + 8 ) < param_2) {
         return 0x55;
      }

   }
 else {
      lVar1 = ( **(code**)( param_1 + 0x28 ) )(param_1, param_2, 0, 0);
      if (lVar1 != 0) {
         return 0x55;
      }

   }

   *(ulong*)( param_1 + 0x10 ) = param_2;
   return 0;
}
undefined8 FT_Stream_Skip(long param_1, long param_2) {
   long lVar1;
   ulong uVar2;
   if (param_2 < 0) {
      return 0x55;
   }

   uVar2 = *(long*)( param_1 + 0x10 ) + param_2;
   if (*(code**)( param_1 + 0x28 ) == (code*)0x0) {
      if (*(ulong*)( param_1 + 8 ) < uVar2) {
         return 0x55;
      }

   }
 else {
      lVar1 = ( **(code**)( param_1 + 0x28 ) )(param_1, uVar2, 0, 0);
      if (lVar1 != 0) {
         return 0x55;
      }

   }

   *(ulong*)( param_1 + 0x10 ) = uVar2;
   return 0;
}
undefined8 FT_Stream_Pos(long param_1) {
   return *(undefined8*)( param_1 + 0x10 );
}
undefined8 FT_Stream_Read(long *param_1, void *param_2, ulong param_3) {
   ulong uVar1;
   ulong __n;
   uVar1 = param_1[2];
   if (uVar1 < (ulong)param_1[1]) {
      if ((code*)param_1[5] == (code*)0x0) {
         if (param_3 == 0) {
            return 0;
         }

         __n = param_1[1] - uVar1;
         if (param_3 < __n) {
            __n = param_3;
         }

         memcpy(param_2, (void*)( *param_1 + uVar1 ), __n);
      }
 else {
         __n = ( *(code*)param_1[5] )(param_1, uVar1, param_2, param_3);
      }

      param_1[2] = uVar1 + __n;
      if (param_3 <= __n) {
         return 0;
      }

   }

   return 0x55;
}
undefined8 FT_Stream_ReadAt(long *param_1, ulong param_2, void *param_3, ulong param_4) {
   ulong __n;
   if (param_2 < (ulong)param_1[1]) {
      if ((code*)param_1[5] == (code*)0x0) {
         if (param_4 == 0) {
            param_1[2] = param_2;
            return 0;
         }

         __n = param_1[1] - param_2;
         if (param_4 < __n) {
            __n = param_4;
         }

         memcpy(param_3, (void*)( *param_1 + param_2 ), __n);
      }
 else {
         __n = ( *(code*)param_1[5] )(param_1);
      }

      param_1[2] = param_2 + __n;
      if (param_4 <= __n) {
         return 0;
      }

   }

   return 0x55;
}
undefined8 FT_Get_Sfnt_Name(long param_1, uint param_2, undefined8 *param_3) {
   ushort uVar1;
   undefined8 uVar2;
   long lVar3;
   long lVar4;
   ulong uVar5;
   int iVar6;
   long lVar7;
   uint uVar8;
   undefined8 *puVar9;
   long lVar10;
   if (( param_3 == (undefined8*)0x0 ) || ( param_1 == 0 )) {
      return 6;
   }

   if (( *(byte*)( param_1 + 0x10 ) & 8 ) == 0) {
      return 6;
   }

   if (*(ushort*)( param_1 + 0x230 ) <= param_2) {
      return 6;
   }

   uVar8 = 0;
   puVar9 = (undefined8*)( (ulong)param_2 * 0x20 + *(long*)( param_1 + 0x248 ) );
   uVar1 = *(ushort*)( puVar9 + 1 );
   lVar10 = puVar9[3];
   if (uVar1 == 0) goto LAB_001069e9;
   if (lVar10 != 0) {
      uVar8 = (uint)uVar1;
      goto LAB_001069e9;
   }

   lVar3 = *(long*)( param_1 + 0xb8 );
   lVar4 = *(long*)( param_1 + 0xc0 );
   lVar7 = ( **(code**)( lVar3 + 8 ) )(lVar3, uVar1);
   if (lVar7 != 0) {
      puVar9[3] = lVar7;
      uVar5 = puVar9[2];
      if (*(code**)( lVar4 + 0x28 ) == (code*)0x0) {
         if (uVar5 <= *(ulong*)( lVar4 + 8 )) goto LAB_00106a62;
      }
 else {
         lVar7 = ( **(code**)( lVar4 + 0x28 ) )(lVar4, uVar5, 0);
         if (lVar7 == 0) {
            LAB_00106a62:*(ulong*)( lVar4 + 0x10 ) = uVar5;
            iVar6 = FT_Stream_ReadAt(lVar4, uVar5, puVar9[3]);
            if (iVar6 == 0) {
               lVar10 = puVar9[3];
               uVar8 = ( uint ) * (ushort*)( puVar9 + 1 );
               goto LAB_001069e9;
            }

         }

         lVar7 = puVar9[3];
         if (lVar7 == 0) goto LAB_00106a9a;
      }

      ( **(code**)( lVar3 + 0x10 ) )(lVar3, lVar7);
   }

   LAB_00106a9a:puVar9[3] = 0;
   uVar8 = 0;
   *(undefined2*)( puVar9 + 1 ) = 0;
   LAB_001069e9:uVar2 = *puVar9;
   param_3[1] = lVar10;
   *(uint*)( param_3 + 2 ) = uVar8;
   *param_3 = uVar2;
   return 0;
}
undefined8 FT_Get_Sfnt_LangTag(long param_1, uint param_2, long *param_3) {
   ushort *puVar1;
   ushort uVar2;
   long lVar3;
   long lVar4;
   ulong uVar5;
   int iVar6;
   long lVar7;
   uint uVar8;
   long lVar9;
   if (( param_3 == (long*)0x0 ) || ( param_1 == 0 )) {
      return 6;
   }

   if (( *(byte*)( param_1 + 0x10 ) & 8 ) == 0) {
      return 6;
   }

   if (*(short*)( param_1 + 0x238 ) != 1) {
      return 8;
   }

   if (param_2 < 0x8001) {
      return 6;
   }

   if (*(uint*)( param_1 + 0x250 ) <= param_2 - 0x8000) {
      return 6;
   }

   puVar1 = (ushort*)( *(long*)( param_1 + 600 ) + ( ulong )(param_2 - 0x8000) * 0x18 );
   uVar8 = 0;
   uVar2 = *puVar1;
   lVar9 = *(long*)( puVar1 + 8 );
   if (uVar2 == 0) goto LAB_00106b42;
   if (lVar9 != 0) {
      uVar8 = (uint)uVar2;
      goto LAB_00106b42;
   }

   lVar3 = *(long*)( param_1 + 0xb8 );
   lVar4 = *(long*)( param_1 + 0xc0 );
   lVar7 = ( **(code**)( lVar3 + 8 ) )(lVar3, uVar2);
   if (lVar7 != 0) {
      *(long*)( puVar1 + 8 ) = lVar7;
      uVar5 = *(ulong*)( puVar1 + 4 );
      if (*(code**)( lVar4 + 0x28 ) == (code*)0x0) {
         if (uVar5 <= *(ulong*)( lVar4 + 8 )) goto LAB_00106ba8;
      }
 else {
         lVar7 = ( **(code**)( lVar4 + 0x28 ) )(lVar4, uVar5, 0);
         if (lVar7 == 0) {
            LAB_00106ba8:*(ulong*)( lVar4 + 0x10 ) = uVar5;
            iVar6 = FT_Stream_ReadAt(lVar4, uVar5, *(undefined8*)( puVar1 + 8 ));
            if (iVar6 == 0) {
               lVar9 = *(long*)( puVar1 + 8 );
               uVar8 = ( uint ) * puVar1;
               goto LAB_00106b42;
            }

         }

         lVar7 = *(long*)( puVar1 + 8 );
         if (lVar7 == 0) goto LAB_00106be0;
      }

      ( **(code**)( lVar3 + 0x10 ) )(lVar3, lVar7);
   }

   LAB_00106be0:puVar1[8] = 0;
   for (int i = 0; i < 3; i++) {
      puVar1[( i + 9 )] = 0;
   }

   uVar8 = 0;
   *puVar1 = 0;
   LAB_00106b42:*param_3 = lVar9;
   *(uint*)( param_3 + 1 ) = uVar8;
   return 0;
}
size_t FT_Stream_TryRead(long *param_1, void *param_2, ulong param_3) {
   ulong __n;
   ulong uVar1;
   ulong uVar2;
   __n = 0;
   uVar2 = param_1[2];
   if (uVar2 < (ulong)param_1[1]) {
      if ((code*)param_1[5] == (code*)0x0) {
         if (param_3 != 0) {
            uVar1 = param_1[1] - uVar2;
            __n = param_3;
            if (uVar1 <= param_3) {
               __n = uVar1;
            }

            memcpy(param_2, (void*)( uVar2 + *param_1 ), __n);
            uVar2 = param_1[2] + __n;
         }

      }
 else {
         __n = ( *(code*)param_1[5] )(param_1, uVar2, param_2, param_3);
         uVar2 = param_1[2] + __n;
      }

      param_1[2] = uVar2;
   }

   return __n;
}
void FT_Stream_ReleaseFrame(long param_1, long *param_2) {
   if (( ( param_1 != 0 ) && ( *(long*)( param_1 + 0x28 ) != 0 ) ) && ( *param_2 != 0 )) {
      ( **(code**)( *(long*)( param_1 + 0x38 ) + 0x10 ) )(*(long*)( param_1 + 0x38 ));
   }

   *param_2 = 0;
   return;
}
undefined8 FT_Stream_EnterFrame(long *param_1, ulong param_2) {
   ulong uVar1;
   long lVar2;
   ulong uVar3;
   long lVar4;
   undefined8 uVar5;
   uVar3 = param_1[1];
   if ((code*)param_1[5] == (code*)0x0) {
      uVar1 = param_1[2];
      if (( uVar1 < uVar3 ) && ( param_2 <= uVar3 - uVar1 )) {
         param_1[8] = *param_1 + uVar1;
         param_1[9] = *param_1 + uVar1 + param_2;
         param_1[2] = uVar1 + param_2;
         return 0;
      }

      return 0x55;
   }

   if (uVar3 < param_2) {
      return 0x55;
   }

   lVar4 = param_1[7];
   if ((long)param_2 < 1) {
      *param_1 = 0;
      if (param_2 != 0) {
         return 6;
      }

      uVar3 = ( *(code*)param_1[5] )(param_1, param_1[2], 0, 0);
   }
 else {
      lVar2 = ( **(code**)( lVar4 + 8 ) )(lVar4);
      if (lVar2 == 0) {
         *param_1 = 0;
         return 0x40;
      }

      *param_1 = lVar2;
      uVar3 = ( *(code*)param_1[5] )(param_1, param_1[2], lVar2, param_2);
      if (uVar3 < param_2) {
         if (*param_1 != 0) {
            ( **(code**)( lVar4 + 0x10 ) )(lVar4);
         }

         *param_1 = 0;
         lVar4 = 0;
         uVar5 = 0x55;
         lVar2 = 0;
         goto LAB_00106d4b;
      }

   }

   lVar4 = *param_1;
   if (lVar4 == 0) {
      lVar2 = 0;
      uVar5 = 0;
   }
 else {
      lVar2 = param_2 + lVar4;
      uVar5 = 0;
   }

   LAB_00106d4b:param_1[8] = lVar4;
   param_1[2] = param_1[2] + uVar3;
   param_1[9] = lVar2;
   return uVar5;
}
void FT_Stream_ExtractFrame(long param_1, undefined8 param_2, undefined8 *param_3) {
   int iVar1;
   iVar1 = FT_Stream_EnterFrame();
   if (iVar1 == 0) {
      *param_3 = *(undefined8*)( param_1 + 0x40 );
      *(undefined1(*) [16])( param_1 + 0x40 ) = (undefined1[16])0x0;
   }

   return;
}
void FT_Stream_ExitFrame(long *param_1) {
   if (param_1[5] != 0) {
      if (*param_1 != 0) {
         ( **(code**)( param_1[7] + 0x10 ) )(param_1[7]);
      }

      *param_1 = 0;
   }

   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   return;
}
undefined1 FT_Stream_GetByte(long param_1) {
   undefined1 *puVar1;
   undefined1 uVar2;
   puVar1 = *(undefined1**)( param_1 + 0x40 );
   uVar2 = 0;
   if (puVar1 < *(undefined1**)( param_1 + 0x48 )) {
      *(undefined1**)( param_1 + 0x40 ) = puVar1 + 1;
      uVar2 = *puVar1;
   }

   return uVar2;
}
ushort FT_Stream_GetUShort(long param_1) {
   ushort *puVar1;
   ushort uVar2;
   puVar1 = *(ushort**)( param_1 + 0x40 );
   uVar2 = 0;
   if ((long)puVar1 + 1U < *(ulong*)( param_1 + 0x48 )) {
      uVar2 = *puVar1;
      puVar1 = puVar1 + 1;
      uVar2 = uVar2 << 8 | uVar2 >> 8;
   }

   *(ushort**)( param_1 + 0x40 ) = puVar1;
   return uVar2;
}
undefined2 FT_Stream_GetUShortLE(long param_1) {
   undefined2 *puVar1;
   undefined2 uVar2;
   puVar1 = *(undefined2**)( param_1 + 0x40 );
   uVar2 = 0;
   if ((long)puVar1 + 1U < *(ulong*)( param_1 + 0x48 )) {
      uVar2 = *puVar1;
      puVar1 = puVar1 + 1;
   }

   *(undefined2**)( param_1 + 0x40 ) = puVar1;
   return uVar2;
}
uint FT_Stream_GetUOffset(long param_1) {
   byte *pbVar1;
   uint uVar2;
   byte *pbVar3;
   pbVar1 = *(byte**)( param_1 + 0x40 );
   uVar2 = 0;
   pbVar3 = pbVar1;
   if (pbVar1 + 2 < *(byte**)( param_1 + 0x48 )) {
      pbVar3 = pbVar1 + 3;
      uVar2 = ( uint ) * pbVar1 << 0x10 | (uint)pbVar1[1] << 8 | (uint)pbVar1[2];
   }

   *(byte**)( param_1 + 0x40 ) = pbVar3;
   return uVar2;
}
uint FT_Stream_GetULong(long param_1) {
   uint uVar1;
   uint *puVar2;
   puVar2 = *(uint**)( param_1 + 0x40 );
   uVar1 = 0;
   if ((long)puVar2 + 3U < *(ulong*)( param_1 + 0x48 )) {
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
      uVar1 = uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18;
   }

   *(uint**)( param_1 + 0x40 ) = puVar2;
   return uVar1;
}
undefined4 FT_Stream_GetULongLE(long param_1) {
   undefined4 *puVar1;
   undefined4 uVar2;
   puVar1 = *(undefined4**)( param_1 + 0x40 );
   uVar2 = 0;
   if ((long)puVar1 + 3U < *(ulong*)( param_1 + 0x48 )) {
      uVar2 = *puVar1;
      puVar1 = puVar1 + 1;
   }

   *(undefined4**)( param_1 + 0x40 ) = puVar1;
   return uVar2;
}
undefined1 FT_Stream_ReadByte(long *param_1, undefined4 *param_2) {
   undefined4 uVar1;
   long lVar2;
   undefined1 uVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   undefined1 local_21;
   long local_20;
   uVar4 = param_1[2];
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_21 = 0;
   if (uVar4 < (ulong)param_1[1]) {
      if ((code*)param_1[5] == (code*)0x0) {
         uVar3 = *(undefined1*)( *param_1 + uVar4 );
      }
 else {
         lVar2 = ( *(code*)param_1[5] )(param_1, uVar4, &local_21, 1);
         if (lVar2 != 1) goto LAB_00107022;
         uVar4 = param_1[2];
         uVar3 = local_21;
      }

      uVar1 = 0;
      param_1[2] = uVar4 + 1;
   }
 else {
      LAB_00107022:uVar1 = 0x55;
      uVar3 = local_21;
   }

   *param_2 = uVar1;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
ushort FT_Stream_ReadUShort(long *param_1, undefined4 *param_2) {
   ushort uVar1;
   long lVar2;
   undefined4 uVar3;
   ushort *puVar4;
   long in_FS_OFFSET;
   ushort local_22;
   long local_20;
   lVar2 = param_1[2];
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((ulong)param_1[1] <= lVar2 + 1U) {
      LAB_001070c0:uVar3 = 0x55;
      uVar1 = 0;
      goto LAB_001070c7;
   }

   if ((code*)param_1[5] == (code*)0x0) {
      uVar1 = 0;
      puVar4 = (ushort*)( lVar2 + *param_1 );
      if (puVar4 != (ushort*)0x0) goto LAB_001070a2;
   }
 else {
      puVar4 = &local_22;
      lVar2 = ( *(code*)param_1[5] )(param_1, lVar2, puVar4, 2);
      if (lVar2 != 2) goto LAB_001070c0;
      lVar2 = param_1[2];
      LAB_001070a2:uVar1 = *puVar4 << 8 | *puVar4 >> 8;
   }

   uVar3 = 0;
   param_1[2] = lVar2 + 2;
   LAB_001070c7:*param_2 = uVar3;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar1;
}
int FT_Raccess_Get_HeaderInfo(undefined8 param_1, long param_2, ulong param_3, ulong *param_4, long *param_5) {
   ulong uVar1;
   char cVar2;
   code *pcVar3;
   bool bVar4;
   bool bVar5;
   short sVar6;
   long lVar7;
   uint uVar8;
   long lVar9;
   ulong uVar10;
   long lVar11;
   long lVar12;
   int iVar13;
   long in_FS_OFFSET;
   int local_6c;
   uint local_68;
   byte local_64;
   byte local_63;
   byte local_62;
   byte local_61;
   byte local_60;
   byte local_5f;
   byte local_5e;
   byte local_5d;
   byte local_5c;
   byte local_5b;
   byte local_5a;
   byte local_59;
   char local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( param_2 + 0x28 ) == (code*)0x0) {
      if (param_3 <= *(ulong*)( param_2 + 8 )) goto LAB_0010714e;
   }
 else {
      lVar7 = ( **(code**)( param_2 + 0x28 ) )(param_2, param_3, 0, 0);
      if (lVar7 == 0) {
         LAB_0010714e:*(ulong*)( param_2 + 0x10 ) = param_3;
         local_6c = FT_Stream_ReadAt(param_2, param_3, &local_68, 0x10);
         iVar13 = local_6c;
         if (local_6c != 0) goto LAB_001073a0;
         if (( ( ( -1 < (char)local_68 ) && ( -1 < (char)local_64 ) ) && ( -1 < (char)local_60 ) ) && ( -1 < (char)local_5c )) {
            lVar11 = (long)(int)( local_68 >> 0x18 | ( local_68 & 0xff0000 ) >> 8 | ( local_68 & 0xff00 ) << 8 | local_68 << 0x18 );
            *param_5 = lVar11;
            uVar8 = (uint)local_63 << 0x10 | (uint)local_64 << 0x18 | (uint)local_61 | (uint)local_62 << 8;
            lVar12 = (long)(int)uVar8;
            lVar7 = (long)(int)( (uint)local_5f << 0x10 | (uint)local_60 << 0x18 | (uint)local_5d | (uint)local_5e << 8 );
            lVar9 = (long)(int)( (uint)local_5b << 0x10 | (uint)local_5c << 0x18 | (uint)local_59 | (uint)local_5a << 8 );
            if (uVar8 != 0) {
               if (lVar11 < lVar12) {
                  if (lVar11 <= lVar12 - lVar7) {
                     LAB_00107247:if (( (long)param_3 <= 0x7fffffffffffffff - ( lVar11 + lVar7 ) ) && ( (long)param_3 <= 0x7fffffffffffffff - ( lVar12 + lVar9 ) )) {
                        if (( lVar7 + lVar11 + param_3 <= *(ulong*)( param_2 + 8 ) ) && ( uVar10 = param_3 + lVar12 ),lVar9 + uVar10 <= *(ulong*)( param_2 + 8 )) {
                           pcVar3 = *(code**)( param_2 + 0x28 );
                           *param_5 = lVar11 + param_3;
                           if (pcVar3 == (code*)0x0) {
                              if (uVar10 <= *(ulong*)( param_2 + 8 )) goto LAB_001072c2;
                           }
 else {
                              lVar7 = ( *pcVar3 )(param_2, uVar10, 0, 0);
                              if (lVar7 == 0) {
                                 LAB_001072c2:*(ulong*)( param_2 + 0x10 ) = uVar10;
                                 local_58[0xf] = local_59 + 1;
                                 local_6c = FT_Stream_ReadAt(param_2, uVar10, local_58, 0x10);
                                 iVar13 = local_6c;
                                 if (local_6c != 0) goto LAB_001073a0;
                                 lVar7 = 0;
                                 bVar4 = true;
                                 bVar5 = true;
                                 do {
                                    cVar2 = local_58[lVar7];
                                    if (cVar2 != '\0') {
                                       bVar5 = false;
                                    }

                                    if (cVar2 != *(char*)( (long)&local_68 + lVar7 )) {
                                       bVar4 = false;
                                    }

                                    lVar7 = lVar7 + 1;
                                 }
 while ( lVar7 != 0x10 );
                                 if (!bVar4 && !bVar5) goto LAB_001073f0;
                                 uVar1 = *(long*)( param_2 + 0x10 ) + 8;
                                 if (*(code**)( param_2 + 0x28 ) == (code*)0x0) {
                                    if (uVar1 <= *(ulong*)( param_2 + 8 )) goto LAB_00107352;
                                 }
 else {
                                    lVar7 = ( **(code**)( param_2 + 0x28 ) )(param_2, uVar1, 0, 0);
                                    if (lVar7 == 0) {
                                       LAB_00107352:*(ulong*)( param_2 + 0x10 ) = uVar1;
                                    }

                                 }

                                 sVar6 = FT_Stream_ReadUShort(param_2, &local_6c);
                                 iVar13 = local_6c;
                                 if (local_6c != 0) goto LAB_001073a0;
                                 if ((long)sVar6 < 0) goto LAB_001073f0;
                                 uVar10 = uVar10 + (long)sVar6;
                                 if (*(code**)( param_2 + 0x28 ) == (code*)0x0) {
                                    if (uVar10 <= *(ulong*)( param_2 + 8 )) goto LAB_00107397;
                                 }
 else {
                                    lVar7 = ( **(code**)( param_2 + 0x28 ) )(param_2, uVar10, 0, 0);
                                    if (lVar7 == 0) {
                                       LAB_00107397:*(ulong*)( param_2 + 0x10 ) = uVar10;
                                       *param_4 = uVar10;
                                       goto LAB_001073a0;
                                    }

                                 }

                              }

                           }

                           goto LAB_001073d2;
                        }

                     }

                  }

               }
 else if (lVar12 <= lVar11 - lVar9) goto LAB_00107247;
            }

         }

         LAB_001073f0:iVar13 = 2;
         goto LAB_001073a0;
      }

   }

   LAB_001073d2:iVar13 = 0x55;
   LAB_001073a0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar13;
}
undefined2 FT_Stream_ReadUShortLE(long *param_1, undefined4 *param_2) {
   undefined2 uVar1;
   long lVar2;
   undefined4 uVar3;
   undefined2 *puVar4;
   long in_FS_OFFSET;
   undefined2 local_22;
   long local_20;
   lVar2 = param_1[2];
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((ulong)param_1[1] <= lVar2 + 1U) {
      LAB_00107498:uVar3 = 0x55;
      uVar1 = 0;
      goto LAB_0010749f;
   }

   if ((code*)param_1[5] == (code*)0x0) {
      uVar1 = 0;
      puVar4 = (undefined2*)( lVar2 + *param_1 );
      if (puVar4 != (undefined2*)0x0) goto LAB_00107482;
   }
 else {
      puVar4 = &local_22;
      lVar2 = ( *(code*)param_1[5] )(param_1, lVar2, puVar4, 2);
      if (lVar2 != 2) goto LAB_00107498;
      lVar2 = param_1[2];
      LAB_00107482:uVar1 = *puVar4;
   }

   uVar3 = 0;
   param_1[2] = lVar2 + 2;
   LAB_0010749f:*param_2 = uVar3;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar1;
}
uint FT_Stream_ReadUOffset(long *param_1, undefined4 *param_2) {
   uint uVar1;
   long lVar2;
   undefined4 uVar3;
   byte *pbVar4;
   long in_FS_OFFSET;
   byte local_23[3];
   long local_20;
   lVar2 = param_1[2];
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((ulong)param_1[1] <= lVar2 + 2U) {
      LAB_00107560:uVar3 = 0x55;
      uVar1 = 0;
      goto LAB_00107567;
   }

   if ((code*)param_1[5] == (code*)0x0) {
      uVar1 = 0;
      pbVar4 = (byte*)( lVar2 + *param_1 );
      if (pbVar4 != (byte*)0x0) goto LAB_00107535;
   }
 else {
      pbVar4 = local_23;
      lVar2 = ( *(code*)param_1[5] )(param_1, lVar2, pbVar4, 3);
      if (lVar2 != 3) goto LAB_00107560;
      lVar2 = param_1[2];
      LAB_00107535:uVar1 = ( uint ) * pbVar4 << 0x10 | (uint)pbVar4[1] << 8 | (uint)pbVar4[2];
   }

   uVar3 = 0;
   param_1[2] = lVar2 + 3;
   LAB_00107567:*param_2 = uVar3;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar1;
}
uint FT_Stream_ReadULong(long *param_1, undefined4 *param_2) {
   uint uVar1;
   long lVar2;
   undefined4 uVar3;
   uint *puVar4;
   long in_FS_OFFSET;
   uint local_24;
   long local_20;
   lVar2 = param_1[2];
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((ulong)param_1[1] <= lVar2 + 3U) {
      LAB_00107608:uVar3 = 0x55;
      uVar1 = 0;
      goto LAB_0010760f;
   }

   if ((code*)param_1[5] == (code*)0x0) {
      uVar1 = 0;
      puVar4 = (uint*)( lVar2 + *param_1 );
      if (puVar4 != (uint*)0x0) goto LAB_001075f2;
   }
 else {
      puVar4 = &local_24;
      lVar2 = ( *(code*)param_1[5] )(param_1, lVar2, puVar4, 4);
      if (lVar2 != 4) goto LAB_00107608;
      lVar2 = param_1[2];
      LAB_001075f2:uVar1 = *puVar4;
      uVar1 = uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18;
   }

   uVar3 = 0;
   param_1[2] = lVar2 + 4;
   LAB_0010760f:*param_2 = uVar3;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar1;
}
int FT_Raccess_Get_DataOffsets(long *param_1, long param_2, ulong param_3, long param_4, long param_5, char param_6, long *param_7, size_t *param_8) {
   ulong uVar1;
   long lVar2;
   ushort uVar3;
   short sVar4;
   short sVar5;
   undefined2 uVar6;
   int iVar7;
   uint uVar8;
   long lVar9;
   undefined2 *__base;
   long lVar10;
   size_t sVar11;
   int iVar12;
   undefined2 *puVar13;
   int iVar14;
   int iVar15;
   long in_FS_OFFSET;
   int local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = *param_1;
   if (*(code**)( param_2 + 0x28 ) == (code*)0x0) {
      if (param_3 <= *(ulong*)( param_2 + 8 )) goto LAB_001076c9;
   }
 else {
      lVar9 = ( **(code**)( param_2 + 0x28 ) )(param_2, param_3, 0, 0);
      if (lVar9 == 0) {
         LAB_001076c9:*(ulong*)( param_2 + 0x10 ) = param_3;
         uVar3 = FT_Stream_ReadUShort(param_2, &local_44);
         iVar15 = local_44;
         if (local_44 == 0) {
            if ((short)uVar3 + 1 < 0xff0) {
               iVar14 = 0;
               if (0 < (short)uVar3 + 1) {
                  do {
                     iVar7 = FT_Stream_ReadULong(param_2, &local_44);
                     iVar15 = local_44;
                     if (( ( local_44 != 0 ) || ( sVar4 = FT_Stream_ReadUShort(param_2, &local_44) ),iVar15 = local_44,local_44 != 0 )) goto LAB_00107780;
                     if (iVar7 == param_5) {
                        *param_8 = (long)( sVar4 + 1 );
                        if (0xaa6 < (long)( sVar4 + 1 ) - 1U) goto LAB_001077d0;
                        param_3 = param_3 + (long)sVar5;
                        if (*(code**)( param_2 + 0x28 ) == (code*)0x0) {
                           if (*(ulong*)( param_2 + 8 ) < param_3) goto LAB_001077bf;
                        }
 else {
                           lVar9 = ( **(code**)( param_2 + 0x28 ) )(param_2, param_3, 0, 0);
                           if (lVar9 != 0) goto LAB_001077bf;
                        }

                        *(ulong*)( param_2 + 0x10 ) = param_3;
                        sVar11 = *param_8;
                        iVar15 = 6;
                        if ((long)sVar11 < 0) goto LAB_00107780;
                        if (sVar11 == 0) {
                           __base = (undefined2*)0x0;
                           local_44 = 0;
                           sVar11 = 0;
                           if (param_6 == '\0') goto LAB_00107ab5;
                           goto LAB_00107883;
                        }

                        iVar15 = 10;
                        if (0x7ffffff < (long)sVar11) goto LAB_00107780;
                        __base = (undefined2*)( **(code**)( lVar2 + 8 ) )(lVar2, sVar11 << 4);
                        if (__base == (undefined2*)0x0) {
                           iVar15 = 0x40;
                           goto LAB_00107780;
                        }

                        local_44 = 0;
                        sVar11 = *param_8;
                        if ((long)sVar11 < 1) goto LAB_00107a53;
                        lVar9 = 0;
                        puVar13 = __base;
                        goto LAB_001079e8;
                     }

                     iVar14 = iVar14 + 1;
                  }
 while ( uVar3 + 1 != iVar14 );
               }

               iVar15 = 1;
            }
 else {
               LAB_001077d0:iVar15 = 8;
            }

         }

         goto LAB_00107780;
      }

   }

   LAB_001077bf:iVar15 = 0x55;
   LAB_00107780:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar15;
   LAB_001079e8:do {
      uVar6 = FT_Stream_ReadUShort(param_2, &local_44);
      *puVar13 = uVar6;
      iVar15 = local_44;
      if (local_44 != 0) goto LAB_001078c8;
      uVar1 = *(long*)( param_2 + 0x10 ) + 2;
      if (*(code**)( param_2 + 0x28 ) != (code*)0x0) {
         lVar10 = ( **(code**)( param_2 + 0x28 ) )(param_2, uVar1, 0, 0);
         if (lVar10 == 0) goto LAB_0010796d;
         LAB_00107a20:iVar15 = 0x55;
         goto LAB_001078c8;
      }

      if (*(ulong*)( param_2 + 8 ) < uVar1) goto LAB_00107a20;
      LAB_0010796d:*(ulong*)( param_2 + 0x10 ) = uVar1;
      uVar8 = FT_Stream_ReadULong(param_2, &local_44);
      iVar15 = local_44;
      if (local_44 != 0) goto LAB_001078c8;
      uVar1 = *(long*)( param_2 + 0x10 ) + 4;
      if (*(code**)( param_2 + 0x28 ) == (code*)0x0) {
         if (*(ulong*)( param_2 + 8 ) < uVar1) goto LAB_00107a20;
      }
 else {
         lVar10 = ( **(code**)( param_2 + 0x28 ) )(param_2, uVar1, 0);
         if (lVar10 != 0) goto LAB_00107a20;
      }

      *(ulong*)( param_2 + 0x10 ) = uVar1;
      if ((int)uVar8 < 0) {
         iVar15 = 8;
         goto LAB_001078c8;
      }

      lVar9 = lVar9 + 1;
      *(ulong*)( puVar13 + 4 ) = ( ulong )(uVar8 & 0xffffff);
      sVar11 = *param_8;
      puVar13 = puVar13 + 8;
   }
 while ( lVar9 < (long)sVar11 );
   LAB_00107a53:if (param_6 == '\0') {
      iVar15 = 6;
      if (-1 < (long)sVar11) {
         if (sVar11 == 0) {
            LAB_00107ab5:lVar9 = 0;
            LAB_00107ab7:iVar15 = 0;
            *param_7 = lVar9;
         }
 else if ((long)sVar11 < 0x10000000) {
            LAB_00107acf:lVar9 = ( **(code**)( lVar2 + 8 ) )(lVar2, sVar11 * 8);
            if (lVar9 != 0) {
               lVar10 = 0;
               if (0 < (long)*param_8) {
                  do {
                     *(long*)( lVar9 + lVar10 * 8 ) = *(long*)( __base + lVar10 * 8 + 4 ) + param_4;
                     lVar10 = lVar10 + 1;
                  }
 while ( lVar10 < (long)*param_8 );
                  *param_7 = lVar9;
                  iVar15 = 0;
                  goto LAB_001078c8;
               }

               goto LAB_00107ab7;
            }

            iVar12 = 0x40;
            iVar15 = 0x40;
         }
 else {
            iVar12 = 10;
            iVar15 = 10;
         }

         local_44 = iVar12;
         if (__base == (undefined2*)0x0) goto LAB_00107780;
      }

   }
 else {
      LAB_00107883:qsort(__base, sVar11, 0x10, ft_raccess_sort_ref_by_id);
      sVar11 = *param_8;
      if ((long)sVar11 < 0) {
         iVar15 = 6;
      }
 else if (sVar11 == 0) {
         *param_7 = 0;
         iVar15 = 0;
      }
 else {
         if ((long)sVar11 < 0x10000000) goto LAB_00107acf;
         iVar15 = 10;
      }

   }

   LAB_001078c8:( **(code**)( lVar2 + 0x10 ) )(lVar2, __base);
   goto LAB_00107780;
}
int raccess_guess_apple_generic_isra_0(long param_1, int param_2, long *param_3) {
   ulong uVar1;
   ushort uVar2;
   int iVar3;
   long lVar4;
   uint uVar5;
   long in_FS_OFFSET;
   int local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = FT_Stream_ReadULong(param_1, &local_44);
   if (local_44 != 0) goto LAB_00107bb6;
   if (iVar3 == param_2) {
      FT_Stream_ReadULong(param_1, &local_44);
      if (local_44 != 0) goto LAB_00107bb6;
      uVar1 = *(long*)( param_1 + 0x10 ) + 0x10;
      if (*(code**)( param_1 + 0x28 ) == (code*)0x0) {
         if (uVar1 <= *(ulong*)( param_1 + 8 )) goto LAB_00107c1d;
      }
 else {
         lVar4 = ( **(code**)( param_1 + 0x28 ) )(param_1, uVar1, 0, 0);
         if (lVar4 == 0) {
            LAB_00107c1d:*(ulong*)( param_1 + 0x10 ) = uVar1;
            uVar2 = FT_Stream_ReadUShort(param_1, &local_44);
            if (local_44 != 0) goto LAB_00107bb6;
            if (uVar2 != 0) {
               uVar5 = 0;
               do {
                  iVar3 = FT_Stream_ReadULong(param_1, &local_44);
                  if (local_44 != 0) goto LAB_00107bb6;
                  if (iVar3 == 2) {
                     iVar3 = FT_Stream_ReadULong(param_1, &local_44);
                     if (( local_44 == 0 ) && ( FT_Stream_ReadULong(param_1, &local_44),local_44 == 0 )) {
                        local_44 = 0;
                        *param_3 = (long)iVar3;
                        goto LAB_00107bb6;
                     }

                  }
 else {
                     uVar1 = *(long*)( param_1 + 0x10 ) + 8;
                     if (*(code**)( param_1 + 0x28 ) == (code*)0x0) {
                        if (*(ulong*)( param_1 + 8 ) < uVar1) goto LAB_00107ce0;
                     }
 else {
                        lVar4 = ( **(code**)( param_1 + 0x28 ) )(param_1, uVar1, 0, 0);
                        if (lVar4 != 0) goto LAB_00107ce0;
                     }

                     *(ulong*)( param_1 + 0x10 ) = uVar1;
                  }

                  uVar5 = uVar5 + 1;
               }
 while ( uVar2 != uVar5 );
            }

            goto LAB_00107bb1;
         }

      }

      LAB_00107ce0:local_44 = 0x55;
   }
 else {
      LAB_00107bb1:local_44 = 2;
   }

   LAB_00107bb6:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_44;
}
undefined8 raccess_guess_apple_double(undefined8 param_1, long param_2, undefined8 param_3, undefined8 *param_4, undefined8 param_5) {
   undefined8 uVar1;
   *param_4 = 0;
   if (param_2 != 0) {
      uVar1 = raccess_guess_apple_generic_isra_0(param_2, 0x51607, param_5);
      return uVar1;
   }

   return 0x51;
}
undefined8 raccess_guess_apple_single(undefined8 param_1, long param_2, undefined8 param_3, undefined8 *param_4, undefined8 param_5) {
   undefined8 uVar1;
   *param_4 = 0;
   if (param_2 != 0) {
      uVar1 = raccess_guess_apple_generic_isra_0(param_2, 0x51600, param_5);
      return uVar1;
   }

   return 0x51;
}
undefined4 FT_Stream_ReadULongLE(long *param_1, undefined4 *param_2) {
   undefined4 uVar1;
   long lVar2;
   undefined4 uVar3;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined4 local_24;
   long local_20;
   lVar2 = param_1[2];
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((ulong)param_1[1] <= lVar2 + 3U) {
      LAB_00107dd8:uVar3 = 0x55;
      uVar1 = 0;
      goto LAB_00107ddf;
   }

   if ((code*)param_1[5] == (code*)0x0) {
      uVar1 = 0;
      puVar4 = (undefined4*)( lVar2 + *param_1 );
      if (puVar4 != (undefined4*)0x0) goto LAB_00107dc2;
   }
 else {
      puVar4 = &local_24;
      lVar2 = ( *(code*)param_1[5] )(param_1, lVar2, puVar4, 4);
      if (lVar2 != 4) goto LAB_00107dd8;
      lVar2 = param_1[2];
      LAB_00107dc2:uVar1 = *puVar4;
   }

   uVar3 = 0;
   param_1[2] = lVar2 + 4;
   LAB_00107ddf:*param_2 = uVar3;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar1;
}
ulong FT_Stream_ReadFields(long *param_1, long param_2, long param_3) {
   byte bVar1;
   byte bVar2;
   char cVar3;
   uint uVar4;
   bool bVar5;
   ulong uVar6;
   sbyte sVar7;
   ulong *puVar8;
   uint *puVar9;
   long lVar10;
   uint *puVar11;
   uint *puVar12;
   undefined8 *puVar13;
   undefined8 *puVar14;
   byte bVar15;
   bVar15 = 0;
   if (param_2 == 0) {
      return 6;
   }

   if (param_1 == (long*)0x0) {
      return 0x28;
   }

   param_2 = param_2 + 4;
   bVar5 = false;
   puVar11 = (uint*)param_1[8];
   do {
      bVar1 = *(byte*)( param_2 + -4 );
      switch (bVar1) {
         case 4:
      uVar6 = FT_Stream_EnterFrame(param_1,*(undefined2 *)(param_2 + -2));
      if ((int)uVar6 == 0) {
        puVar12 = (uint *)param_1[8];
        bVar5 = true;
        goto LAB_00107f57;
      }
      goto joined_r0x00107eb3;
         default:
      param_1[8] = (long)puVar11;
      uVar6 = 0;
joined_r0x00107eb3:
      if (!bVar5) {
        return uVar6;
      }
      if (param_1[5] != 0) {
        if (*param_1 != 0) {
          (**(code **)(param_1[7] + 0x10))(param_1[7]);
          uVar6 = uVar6 & 0xffffffff;
        }
        *param_1 = 0;
      }
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      return uVar6;
         case 8:
         case 9:
      uVar6 = (ulong)(byte)*puVar11;
      sVar7 = 0x18;
      puVar12 = (uint *)((long)puVar11 + 1);
      break;
         case 0xc:
         case 0xd:
      sVar7 = 0x10;
      puVar12 = (uint *)((long)puVar11 + 2);
      uVar6 = (ulong)(ushort)((ushort)*puVar11 << 8 | (ushort)*puVar11 >> 8);
      break;
         case 0xe:
         case 0xf:
      uVar6 = (ulong)(ushort)*puVar11;
      sVar7 = 0x10;
      puVar12 = (uint *)((long)puVar11 + 2);
      break;
         case 0x10:
         case 0x11:
      uVar4 = *puVar11;
      sVar7 = 0;
      puVar12 = puVar11 + 1;
      uVar6 = (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                     uVar4 << 0x18);
      break;
         case 0x12:
         case 0x13:
      uVar6 = (ulong)*puVar11;
      sVar7 = 0;
      puVar12 = puVar11 + 1;
      break;
         case 0x14:
         case 0x15:
      puVar12 = (uint *)((long)puVar11 + 3);
      uVar6 = (ulong)((uint)(byte)*puVar11 << 0x10 | (uint)*(byte *)((long)puVar11 + 1) << 8 |
                     (uint)*(byte *)((long)puVar11 + 2));
      sVar7 = 8;
      break;
         case 0x16:
         case 0x17:
      puVar12 = (uint *)((long)puVar11 + 3);
      uVar6 = (ulong)((uint)*(byte *)((long)puVar11 + 2) << 0x10 |
                      (uint)*(byte *)((long)puVar11 + 1) << 8 | (uint)(byte)*puVar11);
      sVar7 = 8;
      break;
         case 0x18:
         case 0x19:
      bVar2 = *(byte *)(param_2 + -3);
      uVar6 = (ulong)bVar2;
      puVar12 = (uint *)((long)puVar11 + uVar6);
      if (puVar12 <= (uint *)param_1[9]) {
        if (bVar1 == 0x18) {
          puVar9 = (uint *)((ulong)*(ushort *)(param_2 + -2) + param_3);
          if (bVar2 < 8) {
            if ((bVar2 & 4) == 0) {
              if ((bVar2 != 0) && (*(byte *)puVar9 = (byte)*puVar11, (bVar2 & 2) != 0)) {
                *(undefined2 *)((uVar6 - 2) + (long)puVar9) =
                     *(undefined2 *)((long)puVar11 + (uVar6 - 2));
              }
            }
            else {
              *puVar9 = *puVar11;
              *(undefined4 *)((uVar6 - 4) + (long)puVar9) =
                   *(undefined4 *)((long)puVar11 + (uVar6 - 4));
            }
          }
          else {
            *(undefined8 *)puVar9 = *(undefined8 *)puVar11;
            *(undefined8 *)((uVar6 - 8) + (long)puVar9) =
                 *(undefined8 *)((long)puVar11 + (uVar6 - 8));
            lVar10 = (long)puVar9 - (long)((ulong)(puVar9 + 2) & 0xfffffffffffffff8);
            puVar13 = (undefined8 *)((long)puVar11 - lVar10);
            puVar14 = (undefined8 *)((ulong)(puVar9 + 2) & 0xfffffffffffffff8);
            for (uVar6 = (ulong)((uint)bVar2 + (int)lVar10 >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar14 = *puVar13;
              puVar13 = puVar13 + (ulong)bVar15 * -2 + 1;
              puVar14 = puVar14 + (ulong)bVar15 * -2 + 1;
            }
          }
        }
        goto LAB_00107f57;
      }
      uVar6 = 0x55;
      goto joined_r0x00107eb3;
      }

      if (( bVar1 & 1 ) != 0) {
         uVar6 = ( ulong )((int)( uVar6 << sVar7 ) >> sVar7);
      }

      cVar3 = *(char*)( param_2 + -3 );
      puVar8 = (ulong*)( ( ulong ) * (ushort*)( param_2 + -2 ) + param_3 );
      if (cVar3 == '\x02') {
         *(short*)puVar8 = (short)uVar6;
      }
 else if (cVar3 == '\x04') {
         *(int*)puVar8 = (int)uVar6;
      }
 else if (cVar3 == '\x01') {
         *(char*)puVar8 = (char)uVar6;
      }
 else {
         *puVar8 = uVar6;
      }

      LAB_00107f57:param_2 = param_2 + 4;
      puVar11 = puVar12;
   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */long FT_Cos(undefined8 param_1) {
   long in_FS_OFFSET;
   long local_28;
   undefined8 uStack_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = __LC27;
   uStack_20 = _UNK_0010d498;
   ft_trig_pseudo_rotate(&local_28, param_1);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_28 + 0x80 >> 8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */long FT_Sin(undefined8 param_1) {
   long in_FS_OFFSET;
   undefined8 local_28;
   long lStack_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = __LC27;
   lStack_20 = _UNK_0010d498;
   ft_trig_pseudo_rotate(&local_28, param_1);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lStack_20 + 0x80 >> 8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ulong FT_Tan(undefined8 param_1) {
   ulong uVar1;
   ulong uVar2;
   long lVar3;
   long in_FS_OFFSET;
   ulong local_28;
   long lStack_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = __LC28;
   lStack_20 = _UNK_0010d4a8;
   ft_trig_pseudo_rotate(&local_28, param_1);
   if (lStack_20 < 0) {
      lVar3 = -lStack_20;
      if (-1 < (long)local_28) {
         uVar1 = 0xffffffff80000001;
         if (local_28 != 0) {
            uVar1 = -(((local_28 >> 1) + lStack_20 * -0x10000) / local_28);
         }

         goto LAB_001081e9;
      }

      uVar2 = -local_28;
   }
 else {
      if ((long)local_28 < 0) {
         uVar1 = -(((-local_28 >> 1) + lStack_20 * 0x10000) / -local_28);
         goto LAB_001081e9;
      }

      uVar1 = 0x7fffffff;
      uVar2 = local_28;
      lVar3 = lStack_20;
      if (local_28 == 0) goto LAB_001081e9;
   }

   uVar1 = ( ( uVar2 >> 1 ) + lVar3 * 0x10000 ) / uVar2;
   LAB_001081e9:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong FT_Atan2(ulong param_1, ulong param_2) {
   uint uVar1;
   char cVar2;
   byte bVar3;
   uint uVar4;
   ulong uVar5;
   uint uVar6;
   long in_FS_OFFSET;
   long lStack_28;
   ulong uStack_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = param_1 | param_2;
   if (( param_1 | param_2 ) != 0) {
      uVar6 = -(uint)param_1;
      if (-1 < (long)param_1) {
         uVar6 = (uint)param_1;
      }

      uVar4 = -(uint)param_2;
      if (-1 < (long)param_2) {
         uVar4 = (uint)param_2;
      }

      uVar1 = 0x1f;
      if (( uVar6 | uVar4 ) != 0) {
         for (; ( uVar6 | uVar4 ) >> uVar1 == 0; uVar1 = uVar1 - 1) {}
      }

      cVar2 = (char)( uVar1 ^ 0x1f );
      if ((int)( 0x1f - ( uVar1 ^ 0x1f ) ) < 0x1e) {
         bVar3 = cVar2 - 2;
         lStack_28 = param_1 << ( bVar3 & 0x3f );
         uStack_20 = param_2 << ( bVar3 & 0x3f );
      }
 else {
         bVar3 = 2 - cVar2;
         lStack_28 = (long)param_1 >> ( bVar3 & 0x3f );
         uStack_20 = (long)param_2 >> ( bVar3 & 0x3f );
      }

      ft_trig_pseudo_polarize(&lStack_28);
      uVar5 = uStack_20;
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FT_Vector_Unit(long *param_1) {
   long lVar1;
   long lVar2;
   lVar1 = _UNK_0010d498;
   if (param_1 != (long*)0x0) {
      *param_1 = __LC27;
      param_1[1] = lVar1;
      ft_trig_pseudo_rotate();
      lVar1 = *param_1 + __LC29;
      lVar2 = param_1[1] + _UNK_0010d4b8;
      *(int*)param_1 = (int)( (ulong)lVar1 >> 8 );
      *(int*)( (long)param_1 + 4 ) = (int)( lVar1 >> 0x28 );
      *(int*)( param_1 + 1 ) = (int)( (ulong)lVar2 >> 8 );
      *(int*)( (long)param_1 + 0xc ) = (int)( lVar2 >> 0x28 );
      return;
   }

   return;
}
void FT_Vector_Rotate(long *param_1, long param_2) {
   int iVar1;
   char cVar2;
   long lVar3;
   long lVar4;
   byte bVar5;
   uint uVar6;
   ulong uVar7;
   uint uVar8;
   uint uVar9;
   ulong uVar10;
   long in_FS_OFFSET;
   long local_38;
   long lStack_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 == (long*)0x0 ) || ( param_2 == 0 )) goto LAB_00108499;
   local_38 = *param_1;
   lStack_30 = param_1[1];
   lVar4 = *param_1;
   uVar9 = (uint)lVar4;
   if (lVar4 == 0) {
      if (lStack_30 == 0) goto LAB_00108499;
   }
 else if (lVar4 < 0) {
      uVar9 = -uVar9;
   }

   uVar6 = -(uint)lStack_30;
   if (-1 < lStack_30) {
      uVar6 = (uint)lStack_30;
   }

   uVar8 = 0x1f;
   if (( uVar9 | uVar6 ) != 0) {
      for (; ( uVar9 | uVar6 ) >> uVar8 == 0; uVar8 = uVar8 - 1) {}
   }

   uVar8 = uVar8 ^ 0x1f;
   iVar1 = uVar8 - 2;
   bVar5 = (byte)iVar1;
   cVar2 = (char)uVar8;
   if ((int)( 0x1f - uVar8 ) < 0x1e) {
      local_38 = lVar4 << ( bVar5 & 0x3f );
      lStack_30 = lStack_30 << ( bVar5 & 0x3f );
   }
 else {
      local_38 = lVar4 >> ( 2U - cVar2 & 0x3f );
      lStack_30 = lStack_30 >> ( 2U - cVar2 & 0x3f );
   }

   ft_trig_pseudo_rotate(&local_38);
   if (local_38 < 0) {
      uVar10 = -(local_38 * -0xdbd95b16 + 0x40000000U >> 0x20);
      if (-1 < lStack_30) goto LAB_00108444;
      LAB_00108512:uVar7 = -(lStack_30 * -0xdbd95b16 + 0x40000000U >> 0x20);
      if (0 < iVar1) goto LAB_00108461;
      LAB_00108537:lVar3 = uVar10 << ( 2U - cVar2 & 0x3f );
      lVar4 = uVar7 << ( 2U - cVar2 & 0x3f );
   }
 else {
      uVar10 = local_38 * 0xdbd95b16 + 0x40000000U >> 0x20;
      if (lStack_30 < 0) goto LAB_00108512;
      LAB_00108444:uVar7 = lStack_30 * 0xdbd95b16 + 0x40000000U >> 0x20;
      if (iVar1 < 1) goto LAB_00108537;
      LAB_00108461:lVar3 = (long)( 1 << ( cVar2 - 3U & 0x1f ) );
      lVar4 = (long)( lVar3 + uVar7 + ( (long)uVar7 >> 0x3f ) ) >> ( bVar5 & 0x3f );
      lVar3 = (long)( lVar3 + uVar10 + ( (long)uVar10 >> 0x3f ) ) >> ( bVar5 & 0x3f );
   }

   param_1[1] = lVar4;
   *param_1 = lVar3;
   LAB_00108499:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
ulong FT_Vector_Length(ulong *param_1) {
   char cVar1;
   ulong uVar2;
   byte bVar3;
   uint uVar4;
   uint uVar5;
   uint uVar6;
   long in_FS_OFFSET;
   ulong local_38;
   ulong uStack_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (ulong*)0x0) {
      uVar2 = 0;
   }
 else {
      local_38 = *param_1;
      uStack_30 = param_1[1];
      if (local_38 == 0) {
         uVar2 = -uStack_30;
         if (0 < (long)uStack_30) {
            uVar2 = uStack_30;
         }

      }
 else if (uStack_30 == 0) {
         uVar2 = -local_38;
         if (0 < (long)local_38) {
            uVar2 = local_38;
         }

      }
 else {
         uVar5 = -(uint)local_38;
         if (-1 < (long)local_38) {
            uVar5 = (uint)local_38;
         }

         uVar4 = -(uint)uStack_30;
         if (-1 < (long)uStack_30) {
            uVar4 = (uint)uStack_30;
         }

         uVar6 = 0x1f;
         if (( uVar5 | uVar4 ) != 0) {
            for (; ( uVar5 | uVar4 ) >> uVar6 == 0; uVar6 = uVar6 - 1) {}
         }

         uVar6 = uVar6 ^ 0x1f;
         bVar3 = ( byte )(uVar6 - 2);
         cVar1 = (char)uVar6;
         if ((int)( 0x1f - uVar6 ) < 0x1e) {
            local_38 = local_38 << ( bVar3 & 0x3f );
            uStack_30 = uStack_30 << ( bVar3 & 0x3f );
         }
 else {
            local_38 = (long)local_38 >> ( 2U - cVar1 & 0x3f );
            uStack_30 = (long)uStack_30 >> ( 2U - cVar1 & 0x3f );
         }

         ft_trig_pseudo_polarize(&local_38);
         if ((long)local_38 < 0) {
            uVar2 = -(local_38 * -0xdbd95b16 + 0x40000000 >> 0x20);
         }
 else {
            uVar2 = local_38 * 0xdbd95b16 + 0x40000000 >> 0x20;
         }

         if ((int)( uVar6 - 2 ) < 1) {
            uVar2 = ( ulong )(uint)((int)uVar2 << ( 2U - cVar1 & 0x1f ));
         }
 else {
            uVar2 = (long)( uVar2 + ( 1L << ( cVar1 - 3U & 0x3f ) ) ) >> ( bVar3 & 0x3f );
         }

      }

   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
void FT_Hypot(undefined8 param_1, undefined8 param_2) {
   long in_FS_OFFSET;
   undefined8 local_28;
   undefined8 local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = param_1;
   local_20 = param_2;
   FT_Vector_Length(&local_28);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void FT_Vector_Polarize(long *param_1, ulong *param_2, long *param_3) {
   long lVar1;
   ulong uVar2;
   byte bVar3;
   byte bVar4;
   uint uVar5;
   uint uVar6;
   uint uVar7;
   long in_FS_OFFSET;
   long local_48;
   long lStack_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != (ulong*)0x0 && param_3 != (long*)0x0 ) && ( param_1 != (long*)0x0 )) {
      lVar1 = *param_1;
      lStack_40 = param_1[1];
      uVar7 = (uint)lVar1;
      if (lVar1 == 0) {
         local_48 = 0;
         if (lStack_40 == 0) goto LAB_001087f2;
      }
 else if (lVar1 < 0) {
         uVar7 = -uVar7;
      }

      uVar5 = -(uint)lStack_40;
      if (-1 < lStack_40) {
         uVar5 = (uint)lStack_40;
      }

      uVar6 = 0x1f;
      if (( uVar7 | uVar5 ) != 0) {
         for (; ( uVar7 | uVar5 ) >> uVar6 == 0; uVar6 = uVar6 - 1) {}
      }

      uVar6 = uVar6 ^ 0x1f;
      bVar3 = ( byte )(uVar6 - 2);
      if ((int)( 0x1f - uVar6 ) < 0x1e) {
         local_48 = lVar1 << ( bVar3 & 0x3f );
         lStack_40 = lStack_40 << ( bVar3 & 0x3f );
      }
 else {
         bVar4 = 2 - (char)uVar6;
         local_48 = lVar1 >> ( bVar4 & 0x3f );
         lStack_40 = lStack_40 >> ( bVar4 & 0x3f );
      }

      ft_trig_pseudo_polarize(&local_48);
      if (local_48 < 0) {
         uVar2 = -(local_48 * -0xdbd95b16 + 0x40000000U >> 0x20);
      }
 else {
         uVar2 = local_48 * 0xdbd95b16 + 0x40000000U >> 0x20;
      }

      if ((int)( uVar6 - 2 ) < 0) {
         uVar2 = ( ulong )(uint)((int)uVar2 << ( 2U - (char)uVar6 & 0x1f ));
      }
 else {
         uVar2 = (long)uVar2 >> ( bVar3 & 0x3f );
      }

      *param_2 = uVar2;
      *param_3 = lStack_40;
   }

   LAB_001087f2:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
void FT_Vector_From_Polar(undefined8 *param_1, undefined8 param_2, undefined8 param_3) {
   if (param_1 != (undefined8*)0x0) {
      *param_1 = param_2;
      param_1[1] = 0;
      FT_Vector_Rotate(param_1, param_3);
      return;
   }

   return;
}
long FT_Angle_Diff(long param_1, long param_2) {
   long lVar1;
   param_2 = param_2 - param_1;
   if (param_2 < -0xb3ffff) {
      lVar1 = param_2 + 0x1680000;
      if (lVar1 < -0xb3ffff) {
         if (( ( -param_2 - 0xb40000U ) / 0x1680000 & 1 ) == 0) goto LAB_00108900;
         while (lVar1 = param_2 + 0x2d00000,lVar1 < -0xb3ffff) {
            LAB_00108900:param_2 = lVar1;
         }
;
      }

   }
 else {
      lVar1 = param_2;
      if (0xb40000 < param_2) {
         lVar1 = param_2 + -0x1680000;
         if (0xb40000 < lVar1) {
            if (( ( param_2 - 0xb40001U ) / 0x1680000 & 1 ) == 0) goto LAB_00108968;
            for (lVar1 = param_2 + -0x2d00000; 0xb40000 < lVar1; lVar1 = lVar1 + -0x5a00000) {
               LAB_00108968:if (lVar1 + -0x2d00000 < 0xb40001) {
                  return lVar1 + -0x2d00000;
               }

            }

         }

      }

   }

   return lVar1;
}
void *ft_mem_alloc(long param_1, size_t param_2, uint *param_3) {
   uint uVar1;
   void *pvVar2;
   if (0 < (long)param_2) {
      pvVar2 = (void*)( **(code**)( param_1 + 8 ) )();
      if (pvVar2 == (void*)0x0) {
         uVar1 = 0x40;
         pvVar2 = (void*)0x0;
      }
 else {
         pvVar2 = memset(pvVar2, 0, param_2);
         uVar1 = 0;
      }

      *param_3 = uVar1;
      return pvVar2;
   }

   *param_3 = -(uint)(param_2 != 0) & 6;
   return (void*)0x0;
}
int FT_Stream_New(long *param_1, uint *param_2, long *param_3) {
   long lVar1;
   code *pcVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   uint uVar5;
   int iVar6;
   undefined8 *puVar7;
   long in_FS_OFFSET;
   int local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_3 = 0;
   if (param_1 == (long*)0x0) {
      iVar6 = 0x21;
      goto LAB_00108a94;
   }

   if (param_2 == (uint*)0x0) goto LAB_00108a70;
   lVar1 = *param_1;
   uVar5 = *param_2 & 7;
   if (uVar5 == 1) {
      puVar7 = (undefined8*)ft_mem_alloc(lVar1, 0x50, &local_34);
      iVar6 = local_34;
      if (local_34 != 0) goto LAB_00108a94;
      uVar3 = *(undefined8*)( param_2 + 4 );
      uVar4 = *(undefined8*)( param_2 + 2 );
      puVar7[2] = 0;
      puVar7[8] = 0;
      *puVar7 = uVar4;
      puVar7[1] = uVar3;
      puVar7[7] = lVar1;
      *(undefined1(*) [16])( puVar7 + 5 ) = (undefined1[16])0x0;
   }
 else {
      if (uVar5 != 4) {
         if (uVar5 == 2) {
            puVar7 = *(undefined8**)( param_2 + 8 );
            if (puVar7 != (undefined8*)0x0) {
               puVar7[7] = lVar1;
               goto LAB_00108a8e;
            }

         }
 else if (( ( ( *param_2 & 2 ) != 0 ) && ( *(long*)( param_2 + 8 ) != 0 ) ) && ( pcVar2 = *(code**)( *(long*)( param_2 + 8 ) + 0x30 ) ),pcVar2 != (code*)0x0) {
            ( *pcVar2 )();
         }

         LAB_00108a70:iVar6 = 6;
         goto LAB_00108a94;
      }

      puVar7 = (undefined8*)ft_mem_alloc(lVar1, 0x50, &local_34);
      iVar6 = local_34;
      if (local_34 != 0) goto LAB_00108a94;
      puVar7[7] = lVar1;
      iVar6 = FT_Stream_Open(puVar7, *(undefined8*)( param_2 + 6 ));
      local_34 = iVar6;
      if (iVar6 != 0) {
         ( **(code**)( lVar1 + 0x10 ) )(lVar1, puVar7);
         goto LAB_00108a94;
      }

   }

   LAB_00108a8e:*param_3 = (long)puVar7;
   iVar6 = 0;
   LAB_00108a94:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int FT_Attach_Stream(long param_1, byte *param_2) {
   long lVar1;
   code *pcVar2;
   int iVar3;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      iVar3 = 0x23;
   }
 else {
      lVar1 = *(long*)( param_1 + 0xb0 );
      if (lVar1 == 0) {
         iVar3 = 0x22;
      }
 else {
         iVar3 = FT_Stream_New(*(undefined8*)( lVar1 + 8 ), param_2, &local_38);
         if (iVar3 == 0) {
            iVar3 = 7;
            pcVar2 = *(code**)( *(long*)( lVar1 + 0x18 ) + 0xa0 );
            if (pcVar2 != (code*)0x0) {
               iVar3 = ( *pcVar2 )(param_1, local_38);
            }

            if (( *(long*)( param_2 + 0x20 ) == 0 ) || ( ( *param_2 & 2 ) == 0 )) {
               if (local_38 != 0) {
                  lVar1 = *(long*)( local_38 + 0x38 );
                  if (*(code**)( local_38 + 0x30 ) != (code*)0x0) {
                     ( **(code**)( local_38 + 0x30 ) )(local_38);
                  }

                  ( **(code**)( lVar1 + 0x10 ) )(lVar1, local_38);
               }

            }
 else if (( local_38 != 0 ) && ( *(code**)( local_38 + 0x30 ) != (code*)0x0 )) {
               ( **(code**)( local_38 + 0x30 ) )(local_38);
            }

         }

      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 FT_Attach_File(undefined8 param_1, long param_2) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined4 local_58[6];
   long local_40;
   undefined8 local_38;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 0) {
      uVar1 = 6;
   }
 else {
      local_38 = 0;
      local_58[0] = 4;
      local_40 = param_2;
      uVar1 = FT_Attach_Stream(param_1, local_58);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined4 ft_glyphslot_alloc_bitmap(long param_1, undefined8 param_2) {
   uint uVar1;
   long lVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined4 local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = *(long*)( *(long*)( param_1 + 8 ) + 0xb8 );
   uVar1 = *(uint*)( *(long*)( param_1 + 0x128 ) + 8 );
   if (( uVar1 & 1 ) == 0) {
      *(uint*)( *(long*)( param_1 + 0x128 ) + 8 ) = uVar1 | 1;
   }
 else {
      if (*(long*)( param_1 + 0xa8 ) != 0) {
         ( **(code**)( lVar2 + 0x10 ) )(lVar2);
      }

      *(undefined8*)( param_1 + 0xa8 ) = 0;
   }

   uVar3 = ft_mem_alloc(lVar2, param_2, &local_24);
   *(undefined8*)( param_1 + 0xa8 ) = uVar3;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_24;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong open_face(long param_1, undefined8 *param_2, byte *param_3, undefined4 param_4, int param_5, long *param_6, long *param_7) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   uint uVar4;
   long lVar5;
   long lVar6;
   long *plVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   lVar1 = *(long*)( param_1 + 0x18 );
   lVar2 = *(long*)( param_1 + 0x10 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar5 = ft_mem_alloc(lVar2, *(undefined8*)( lVar1 + 0x48 ), &local_44);
   uVar4 = local_44;
   uVar8 = (ulong)local_44;
   if (local_44 == 0) {
      *(long*)( lVar5 + 0xb0 ) = param_1;
      *(long*)( lVar5 + 0xb8 ) = lVar2;
      *(undefined8*)( lVar5 + 0xc0 ) = *param_2;
      if (*param_3 != 0) {
         *(ulong*)( lVar5 + 0x10 ) = *(ulong*)( lVar5 + 0x10 ) | 0x400;
      }

      lVar6 = ft_mem_alloc(lVar2, 0x80, &local_44);
      uVar4 = local_44;
      if (local_44 == 0) {
         *(long*)( lVar5 + 0xf0 ) = lVar6;
         *(undefined8*)( lVar6 + 0x68 ) = 0;
         if (0 < param_5) {
            plVar7 = param_6;
            do {
               if (*plVar7 == 0x696e6372) {
                  *(long*)( lVar6 + 0x68 ) = plVar7[1];
               }

               plVar7 = plVar7 + 2;
            }
 while ( ( plVar7 != param_6 + (long)param_5 * 2 ) && ( *(long*)( lVar6 + 0x68 ) == 0 ) );
         }

         pcVar3 = *(code**)( lVar1 + 0x60 );
         *(undefined4*)( lVar6 + 0x74 ) = 0xffffffff;
         if (pcVar3 == (code*)0x0) {
            *param_2 = *(undefined8*)( lVar5 + 0xc0 );
            *param_3 = ( byte )(*(ulong*)( lVar5 + 0x10 ) >> 10) & 1;
            LAB_00108fac:uVar8 = find_unicode_charmap(lVar5);
            if ((int)uVar8 == 0) goto LAB_00108f3a;
            if ((char)uVar8 == '&') {
               uVar8 = 0;
               goto LAB_00108f3a;
            }

         }
 else {
            uVar8 = ( *pcVar3 )(*param_2, lVar5, param_4, param_5, param_6);
            local_44 = (uint)uVar8;
            *param_2 = *(undefined8*)( lVar5 + 0xc0 );
            *param_3 = ( byte )(*(ulong*)( lVar5 + 0x10 ) >> 10) & 1;
            if (local_44 == 0) goto LAB_00108fac;
         }

         uVar4 = (uint)uVar8;
         destroy_charmaps_part_0(lVar5, lVar2);
         if (*(code**)( lVar1 + 0x68 ) != (code*)0x0) {
            ( **(code**)( lVar1 + 0x68 ) )(lVar5);
         }

      }
 else {
         destroy_charmaps_part_0(lVar5, lVar2);
         if (*(code**)( lVar1 + 0x68 ) != (code*)0x0) {
            ( **(code**)( lVar1 + 0x68 ) )(lVar5);
         }

         if (lVar6 == 0) goto LAB_00108f26;
      }

      ( **(code**)( lVar2 + 0x10 ) )(lVar2, lVar6);
      LAB_00108f26:( **(code**)( lVar2 + 0x10 ) )(lVar2, lVar5);
      uVar8 = (ulong)uVar4;
   }
 else {
      if (lVar5 != 0) {
         destroy_charmaps_part_0(lVar5, lVar2);
         if (*(code**)( lVar1 + 0x68 ) != (code*)0x0) {
            ( **(code**)( lVar1 + 0x68 ) )(lVar5);
         }

         goto LAB_00108f26;
      }

      if (*(code**)( lVar1 + 0x68 ) != (code*)0x0) {
         ( **(code**)( lVar1 + 0x68 ) )(0);
         uVar8 = (ulong)uVar4;
      }

   }

   lVar5 = 0;
   LAB_00108f3a:*param_7 = lVar5;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8;
}
int FT_New_Size(long param_1, long *param_2) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long *plVar5;
   long lVar6;
   int iVar7;
   long in_FS_OFFSET;
   int local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      iVar7 = 0x23;
      goto LAB_00109180;
   }

   if (param_2 == (long*)0x0) {
      iVar7 = 6;
      goto LAB_00109180;
   }

   if (*(long*)( param_1 + 0xb0 ) == 0) {
      iVar7 = 0x22;
      goto LAB_00109180;
   }

   lVar1 = *(long*)( *(long*)( param_1 + 0xb0 ) + 0x18 );
   *param_2 = 0;
   lVar2 = *(long*)( param_1 + 0xb8 );
   plVar4 = (long*)ft_mem_alloc(lVar2, *(undefined8*)( lVar1 + 0x50 ), &local_44);
   if (local_44 == 0) {
      plVar5 = (long*)( **(code**)( lVar2 + 8 ) )(lVar2, 0x18);
      if (plVar5 == (long*)0x0) {
         local_44 = 0x40;
         goto LAB_001091be;
      }

      *plVar4 = param_1;
      lVar6 = ft_mem_alloc(lVar2, 0x48, &local_44);
      iVar7 = local_44;
      if (local_44 == 0) {
         plVar4[10] = lVar6;
         pcVar3 = *(code**)( lVar1 + 0x70 );
         if (( pcVar3 == (code*)0x0 ) || ( local_44 = local_44 == 0 )) {
            lVar1 = *(long*)( param_1 + 0xd0 );
            *param_2 = (long)plVar4;
            plVar5[2] = (long)plVar4;
            plVar5[1] = 0;
            *plVar5 = lVar1;
            if (lVar1 == 0) {
               *(long**)( param_1 + 200 ) = plVar5;
            }
 else {
               *(long**)( lVar1 + 8 ) = plVar5;
            }

            *(long**)( param_1 + 0xd0 ) = plVar5;
            goto LAB_00109180;
         }

      }

      iVar7 = local_44;
      ( **(code**)( lVar2 + 0x10 ) )(lVar2, plVar5);
   }
 else {
      LAB_001091be:iVar7 = local_44;
      if (plVar4 == (long*)0x0) goto LAB_00109180;
   }

   if (plVar4[10] != 0) {
      ( **(code**)( lVar2 + 0x10 ) )(lVar2);
   }

   plVar4[10] = 0;
   ( **(code**)( lVar2 + 0x10 ) )(lVar2, plVar4);
   LAB_00109180:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar7;
}
ulong FT_Add_Module(long *param_1, ulong *param_2) {
   char *__s2;
   long *plVar1;
   long lVar2;
   ulong *puVar3;
   code *pcVar4;
   int iVar5;
   uint uVar6;
   ulong uVar7;
   undefined8 *puVar8;
   long *plVar9;
   ulong *puVar10;
   long lVar11;
   long in_FS_OFFSET;
   uint local_4c;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (long*)0x0) {
      uVar7 = 0x21;
      goto LAB_00109370;
   }

   if (param_2 == (ulong*)0x0) {
      uVar7 = 6;
      goto LAB_00109370;
   }

   uVar7 = 4;
   if (0x2000d < (long)param_2[4]) goto LAB_00109370;
   local_4c = *(uint*)( (long)param_1 + 0x14 );
   if (local_4c != 0) {
      __s2 = (char*)param_2[2];
      plVar9 = param_1;
      do {
         plVar1 = (long*)plVar9[3];
         lVar2 = *plVar1;
         iVar5 = strcmp(*(char**)( lVar2 + 0x10 ), __s2);
         if (iVar5 == 0) {
            uVar7 = 5;
            if ((long)param_2[3] <= *(long*)( lVar2 + 0x18 )) goto LAB_00109370;
            FT_Remove_Module(param_1, plVar1);
            local_4c = *(uint*)( (long)param_1 + 0x14 );
            break;
         }

         plVar9 = plVar9 + 1;
      }
 while ( param_1 + local_4c != plVar9 );
      uVar7 = 0x30;
      if (0x1f < local_4c) goto LAB_00109370;
   }

   lVar2 = *param_1;
   puVar8 = (undefined8*)ft_mem_alloc(lVar2, param_2[1], &local_44);
   uVar7 = (ulong)local_44;
   if (local_44 != 0) goto LAB_00109370;
   uVar7 = *param_2;
   puVar8[1] = param_1;
   puVar8[2] = lVar2;
   *puVar8 = param_2;
   puVar10 = param_2;
   if (( uVar7 & 2 ) == 0) {
      LAB_0010932a:if (( uVar7 & 4 ) != 0) {
         param_1[0x26] = (long)puVar8;
      }

      if (( uVar7 & 1 ) != 0) {
         puVar8[3] = puVar10;
      }

      if ((code*)param_2[6] == (code*)0x0) {
         uVar7 = (ulong)local_44;
      }
 else {
         uVar7 = ( *(code*)param_2[6] )(puVar8);
         local_44 = (uint)uVar7;
         if (local_44 != 0) goto LAB_001094a2;
      }

      uVar6 = *(uint*)( (long)param_1 + 0x14 );
      *(uint*)( (long)param_1 + 0x14 ) = uVar6 + 1;
      param_1[(ulong)uVar6 + 3] = (long)puVar8;
   }
 else {
      lVar11 = *param_1;
      plVar9 = (long*)( **(code**)( lVar11 + 8 ) )(lVar11, 0x18);
      if (plVar9 != (long*)0x0) {
         puVar3 = (ulong*)*puVar8;
         iVar5 = (int)puVar3[9];
         uVar7 = puVar3[0xe];
         puVar8[3] = puVar3;
         *(int*)( puVar8 + 4 ) = iVar5;
         puVar10 = puVar3;
         if (( uVar7 != 0 ) && ( pcVar4 = *(code**)( uVar7 + 8 ) ),pcVar4 != (code*)0x0) {
            uVar6 = ( *pcVar4 )(lVar11, puVar8 + 0xd);
            if (uVar6 != 0) {
               ( **(code**)( lVar11 + 0x10 ) )(lVar11, plVar9);
               uVar7 = (ulong)uVar6;
               goto LAB_001094a2;
            }

            uVar7 = puVar3[10];
            puVar8[0xe] = *(undefined8*)( puVar3[0xe] + 0x20 );
            puVar8[0xf] = uVar7;
            iVar5 = (int)puVar3[9];
            puVar10 = (ulong*)*puVar8;
         }

         if (iVar5 == 0x53564720) {
            puVar8[0xf] = puVar3[10];
         }

         lVar11 = param_1[0x24];
         plVar9[2] = (long)puVar8;
         plVar9[1] = 0;
         *plVar9 = lVar11;
         if (lVar11 == 0) {
            param_1[0x23] = (long)plVar9;
            param_1[0x24] = (long)plVar9;
            goto LAB_00109479;
         }

         *(long**)( lVar11 + 8 ) = plVar9;
         param_1[0x24] = (long)plVar9;
         for (plVar9 = (long*)param_1[0x23]; plVar9 != (long*)0x0; plVar9 = (long*)plVar9[1]) {
            LAB_00109479:lVar11 = plVar9[2];
            if (*(int*)( lVar11 + 0x20 ) == 0x6f75746c) goto LAB_00109486;
         }

         lVar11 = 0;
         LAB_00109486:param_1[0x25] = lVar11;
         uVar7 = *puVar10;
         local_44 = 0;
         goto LAB_0010932a;
      }

      uVar7 = 0x40;
      LAB_001094a2:if (( ( ( ( *(byte*)*puVar8 & 2 ) != 0 ) && ( lVar11 = puVar8[3] ),lVar11 != 0 ) ) && ( *(int*)( lVar11 + 0x48 ) == 0x6f75746c )) &&( puVar8[0xd] != 0 )(**(code**)( *(long*)( lVar11 + 0x70 ) + 0x28 ))();
   }

   ( **(code**)( lVar2 + 0x10 ) )(lVar2, puVar8);
   uVar7 = uVar7 & 0xffffffff;
}
LAB_00109370:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return uVar7;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}int FT_New_GlyphSlot(long param_1, undefined8 *param_2) {
   long lVar1;
   long lVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   undefined8 uVar9;
   long in_FS_OFFSET;
   int local_4c;
   int local_48;
   int local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      iVar5 = 0x23;
      goto LAB_001095a4;
   }

   lVar1 = *(long*)( param_1 + 0xb0 );
   if (lVar1 == 0) {
      iVar5 = 6;
      goto LAB_001095a4;
   }

   lVar2 = *(long*)( lVar1 + 0x10 );
   puVar6 = (undefined8*)ft_mem_alloc(lVar2, *(undefined8*)( *(long*)( lVar1 + 0x18 ) + 0x58 ), &local_4c);
   if (local_4c != 0) {
      iVar5 = local_4c;
      if (param_2 != (undefined8*)0x0) {
         *param_2 = 0;
      }

      goto LAB_001095a4;
   }

   puVar8 = *(undefined8**)( param_1 + 0xb0 );
   lVar1 = puVar8[3];
   uVar9 = puVar8[2];
   *puVar6 = puVar8[1];
   puVar6[1] = param_1;
   puVar7 = (undefined8*)ft_mem_alloc(uVar9, 0x50, &local_48);
   iVar3 = local_48;
   iVar5 = local_48;
   if (local_48 == 0) {
      puVar6[0x25] = puVar7;
      if (( *(ulong*)*puVar8 & 0x200 ) == 0) {
         puVar8 = (undefined8*)ft_mem_alloc(uVar9, 0xb0, &local_44);
         if (local_44 == 0) {
            *puVar8 = uVar9;
            local_48 = 0;
            *puVar7 = puVar8;
            goto LAB_00109642;
         }

         iVar5 = local_44;
         if (( *(byte*)( puVar6[1] + 0x12 ) & 1 ) == 0) goto LAB_0010971b;
         LAB_001096ee:uVar9 = ft_mem_alloc(uVar9, 0x80, &local_48);
         iVar5 = local_48;
         if (local_48 != 0) goto LAB_0010971b;
         puVar6[0x24] = uVar9;
         iVar4 = iVar3;
      }
 else {
         LAB_00109642:if (*(code**)( lVar1 + 0x80 ) == (code*)0x0) {
            iVar4 = local_48;
            if (( *(byte*)( puVar6[1] + 0x12 ) & 1 ) != 0) goto LAB_001096ee;
         }
 else {
            iVar5 = ( **(code**)( lVar1 + 0x80 ) )(puVar6);
            if (( *(byte*)( puVar6[1] + 0x12 ) & 1 ) != 0) goto LAB_001096ee;
            iVar4 = iVar3;
            local_4c = iVar5;
            if (iVar5 != 0) goto LAB_0010971b;
         }

      }

      iVar5 = iVar4;
      puVar6[2] = *(undefined8*)( param_1 + 0x98 );
      *(undefined8**)( param_1 + 0x98 ) = puVar6;
      if (param_2 != (undefined8*)0x0) {
         *param_2 = puVar6;
      }

   }
 else {
      LAB_0010971b:ft_glyphslot_done(puVar6);
      ( **(code**)( lVar2 + 0x10 ) )(lVar2, puVar6);
   }

   LAB_001095a4:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar5;
}
undefined8 FT_Render_Glyph_Internal(long param_1, long param_2, undefined4 param_3) {
   undefined4 uVar1;
   char cVar2;
   int iVar3;
   undefined8 uVar4;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   undefined4 local_60;
   undefined4 local_5c;
   undefined1 local_58[8];
   undefined8 local_50;
   long local_40;
   lVar5 = *(long*)( param_2 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(byte*)( *(long*)( param_2 + 0x128 ) + 0x4a ) & 0x10 ) == 0) {
      LAB_001097b0:iVar3 = *(int*)( param_2 + 0x90 );
      if (iVar3 == 0x6f75746c) {
         lVar5 = *(long*)( param_1 + 0x128 );
         lVar6 = *(long*)( param_1 + 0x118 );
         joined_r0x0010998b:if (lVar5 != 0) {
            LAB_00109800:do {
               uVar4 = ( **(code**)( lVar5 + 0x78 ) )(lVar5, param_2, param_3, 0);
               if (( (int)uVar4 == 0 ) || ( (char)uVar4 != '\x13' )) goto LAB_00109860;
               if (param_1 == 0) {
                  LAB_00109850:if (*(int*)( param_2 + 0x90 ) == 0x62697473) goto LAB_001099c9;
                  goto LAB_00109860;
               }

               lVar5 = *(long*)( param_1 + 0x118 );
               if (lVar6 != 0) {
                  lVar5 = *(long*)( lVar6 + 8 );
               }

               while (true) {
                  lVar6 = lVar5;
                  if (lVar6 == 0) goto LAB_00109850;
                  lVar5 = *(long*)( lVar6 + 0x10 );
                  if (*(int*)( param_2 + 0x90 ) == *(int*)( lVar5 + 0x20 )) break;
                  lVar5 = *(long*)( lVar6 + 8 );
               }
;
            }
 while ( true );
         }

         uVar4 = 0x13;
         goto LAB_00109860;
      }

      if (param_1 != 0) {
         for (lVar6 = *(long*)( param_1 + 0x118 ); lVar6 != 0; lVar6 = *(long*)( lVar6 + 8 )) {
            lVar5 = *(long*)( lVar6 + 0x10 );
            if (*(int*)( lVar5 + 0x20 ) == iVar3) goto LAB_00109800;
         }

      }

      uVar4 = 0x13;
      if (iVar3 != 0x62697473) goto LAB_00109860;
   }
 else {
      uVar1 = *(undefined4*)( param_2 + 0x18 );
      local_50 = 0;
      cVar2 = FT_Get_Color_Glyph_Layer(lVar5, uVar1, &local_60, &local_5c, local_58);
      if (cVar2 == '\0') goto LAB_001097b0;
      iVar3 = FT_New_GlyphSlot(lVar5, 0);
      if (iVar3 != 0) {
         LAB_00109970:lVar5 = *(long*)( param_1 + 0x128 );
         lVar6 = *(long*)( param_1 + 0x118 );
         *(undefined4*)( param_2 + 0x90 ) = 0x6f75746c;
         goto joined_r0x0010998b;
      }

      lVar6 = *(long*)( lVar5 + 0x370 );
      do {
         iVar3 = FT_Load_Glyph(lVar5, local_60, *(uint*)( *(long*)( param_2 + 0x128 ) + 0x48 ) & 0xffefffff | 4);
         if (( iVar3 != 0 ) || ( iVar3 = ( **(code**)( lVar6 + 0x138 ) )(lVar5, local_5c, param_2, *(undefined8*)( lVar5 + 0x98 )) ),iVar3 != 0) {
            FT_Done_GlyphSlot(*(undefined8*)( lVar5 + 0x98 ));
            goto LAB_00109970;
         }

         cVar2 = FT_Get_Color_Glyph_Layer(lVar5, uVar1, &local_60, &local_5c, local_58);
      }
 while ( cVar2 != '\0' );
      uVar4 = *(undefined8*)( lVar5 + 0x98 );
      *(undefined4*)( param_2 + 0x90 ) = 0x62697473;
      FT_Done_GlyphSlot(uVar4);
   }

   LAB_001099c9:uVar4 = 0;
   LAB_00109860:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
undefined8 FT_Render_Glyph(long param_1, undefined4 param_2) {
   undefined8 uVar1;
   if (( param_1 != 0 ) && ( *(long*)( param_1 + 8 ) != 0 )) {
      uVar1 = FT_Render_Glyph_Internal(*(undefined8*)( *(long*)( *(long*)( param_1 + 8 ) + 0xb0 ) + 8 ), param_1, param_2);
      return uVar1;
   }

   return 6;
}
ulong FT_Load_Glyph(long param_1, undefined4 param_2, uint param_3) {
   short sVar1;
   undefined4 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   ulong uVar6;
   ulong uVar7;
   uint uVar8;
   int iVar9;
   ulong uVar10;
   undefined8 uVar11;
   char *pcVar12;
   ulong uVar13;
   long lVar14;
   long *plVar15;
   long *plVar16;
   long lVar17;
   undefined8 uVar18;
   long lVar19;
   ulong uVar20;
   ulong uVar21;
   ulong uVar22;
   ulong uVar23;
   bool bVar24;
   if (param_1 == 0) {
      return 0x23;
   }

   if (( *(long*)( param_1 + 0xa0 ) == 0 ) || ( lVar3 = lVar3 == 0 )) {
      return 0x23;
   }

   ft_glyphslot_free_bitmap();
   *(undefined4*)( lVar3 + 0x18 ) = 0;
   *(undefined1(*) [16])( lVar3 + 0x30 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( lVar3 + 0x40 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( lVar3 + 0x50 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( lVar3 + 0x60 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( lVar3 + 200 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( lVar3 + 0xd8 ) = (undefined1[16])0x0;
   *(undefined8*)( lVar3 + 0xe8 ) = 0;
   *(undefined8*)( lVar3 + 0x98 ) = 0;
   *(undefined4*)( lVar3 + 0xa0 ) = 0;
   *(undefined1*)( lVar3 + 0xb2 ) = 0;
   *(undefined8*)( lVar3 + 0xc0 ) = 0;
   *(undefined4*)( lVar3 + 0xf0 ) = 0;
   *(undefined8*)( lVar3 + 0x108 ) = 0;
   *(undefined1(*) [16])( lVar3 + 0xf8 ) = (undefined1[16])0x0;
   if (( *(byte*)( *(long*)( lVar3 + 8 ) + 0x12 ) & 1 ) == 0) {
      *(undefined8*)( lVar3 + 0x120 ) = 0;
   }
 else {
      lVar14 = *(long*)( lVar3 + 0x128 );
      uVar8 = *(uint*)( lVar14 + 8 );
      if (( uVar8 & 2 ) != 0) {
         plVar4 = *(long**)( lVar3 + 0x120 );
         if (*plVar4 != 0) {
            ( **(code**)( *(long*)( *(long*)( lVar3 + 8 ) + 0xb8 ) + 0x10 ) )();
            lVar14 = *(long*)( lVar3 + 0x128 );
            uVar8 = *(uint*)( lVar14 + 8 );
         }

         *plVar4 = 0;
         *(uint*)( lVar14 + 8 ) = uVar8 & 0xfffffffd;
      }

   }

   plVar4 = *(long**)( param_1 + 0xb0 );
   lVar17 = *(long*)( param_1 + 0xa0 );
   *(undefined4*)( lVar3 + 0x90 ) = 0;
   *(undefined1(*) [16])( lVar3 + 0x70 ) = (undefined1[16])0x0;
   lVar14 = plVar4[1];
   sVar1 = *(short*)( lVar17 + 0x18 );
   *(undefined1(*) [16])( lVar3 + 0x80 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( lVar3 + 0x110 ) = (undefined1[16])0x0;
   plVar15 = *(long**)( lVar14 + 0x130 );
   if (( sVar1 == 0 ) || ( *(short*)( lVar17 + 0x1a ) == 0 )) {
      param_3 = param_3 | 1;
   }

   if (( param_3 & 0x400 ) != 0) {
      param_3 = param_3 | 0x801;
   }

   if (( param_3 & 1 ) != 0) {
      param_3 = param_3 & 0xfffffffb | 10;
   }

   if (( param_3 & 0x400000 ) != 0) {
      param_3 = param_3 & 0xfffffffb;
   }

   if (( ( plVar15 == (long*)0x0 ) || ( ( param_3 & 0x8002 ) != 0 ) ) || ( ( ( uint ) * (undefined8*)( param_1 + 0x10 ) & 0x2001 ) != 1 )) goto LAB_00109ba4;
   if (( param_3 & 0x800 ) == 0) {
      lVar14 = **(long**)( param_1 + 0xf0 );
      if (( *(long**)( param_1 + 0xf0 ) )[2] == 0) {
         if (lVar14 != 0) goto LAB_00109de0;
      }
 else if (lVar14 == 0) goto LAB_00109de0;
      LAB_00109ba4:uVar8 = ( **(code**)( plVar4[3] + 0x90 ) )(lVar3, lVar17, param_2, param_3);
      uVar20 = (ulong)uVar8;
      if (uVar8 != 0) {
         return uVar20;
      }

      if (*(int*)( lVar3 + 0x90 ) == 0x6f75746c) {
         uVar8 = FT_Outline_Check(lVar3 + 200);
         uVar20 = (ulong)uVar8;
         if (uVar8 != 0) {
            return uVar20;
         }

         if (( param_3 & 2 ) == 0) {
            uVar10 = *(ulong*)( lVar3 + 0x58 );
            uVar6 = *(ulong*)( lVar3 + 0x60 );
            uVar7 = *(ulong*)( lVar3 + 0x40 );
            lVar14 = *(long*)( lVar3 + 0x48 );
            uVar22 = uVar10 & 0xffffffffffffffc0;
            uVar23 = uVar6 & 0xffffffffffffffc0;
            uVar21 = uVar7 & 0xffffffffffffffc0;
            uVar13 = lVar14 + 0x3fU & 0xffffffffffffffc0;
            if (( param_3 & 0x10 ) == 0) {
               *(ulong*)( lVar3 + 0x48 ) = uVar13;
               *(ulong*)( lVar3 + 0x58 ) = uVar22;
               *(ulong*)( lVar3 + 0x60 ) = uVar23;
               *(ulong*)( lVar3 + 0x40 ) = uVar21;
               lVar17 = ( uVar7 + 0x3f + *(long*)( lVar3 + 0x30 ) & 0xffffffffffffffc0 ) - uVar21;
               lVar14 = uVar13 - ( lVar14 - *(long*)( lVar3 + 0x38 ) & 0xffffffffffffffc0U );
            }
 else {
               *(ulong*)( lVar3 + 0x40 ) = uVar21;
               *(ulong*)( lVar3 + 0x48 ) = uVar13;
               *(ulong*)( lVar3 + 0x58 ) = uVar22;
               *(ulong*)( lVar3 + 0x60 ) = uVar23;
               lVar17 = ( uVar10 + 0x3f + *(long*)( lVar3 + 0x30 ) & 0xffffffffffffffc0 ) - uVar22;
               lVar14 = ( uVar6 + 0x3f + *(long*)( lVar3 + 0x38 ) & 0xffffffffffffffc0 ) - uVar23;
            }

            *(long*)( lVar3 + 0x38 ) = lVar14;
            *(long*)( lVar3 + 0x30 ) = lVar17;
            *(ulong*)( lVar3 + 0x50 ) = *(long*)( lVar3 + 0x50 ) + 0x20U & 0xffffffffffffffc0;
            *(ulong*)( lVar3 + 0x68 ) = *(long*)( lVar3 + 0x68 ) + 0x20U & 0xffffffffffffffc0;
         }

      }

      goto LAB_00109be6;
   }

   LAB_00109de0:if (( ( param_3 & 0x20 ) == 0 ) && ( ( *(ulong*)*plVar4 & 0x400 ) != 0 )) {
      pcVar5 = (code*)( (ulong*)*plVar4 )[8];
      if (pcVar5 == (code*)0x0) {
         pcVar12 = (char*)0x0;
      }
 else {
         pcVar12 = (char*)( *pcVar5 )(plVar4, "font-format");
         lVar17 = *(long*)( param_1 + 0xa0 );
      }

      bVar24 = false;
      pcVar12 = strstr(pcVar12, "Type 1");
      if (pcVar12 != (char*)0x0) {
         bVar24 = (int)plVar4[7] == 1;
      }

      if (( ( ( param_3 & 0xf0000 ) == 0x10000 ) && ( ( *(ulong*)*plVar4 & 0x800 ) == 0 ) ) && ( !bVar24 )) goto LAB_00109deb;
      uVar10 = *(ulong*)( param_1 + 0x10 );
      if (( ( ( ( uVar10 & 8 ) == 0 ) || ( *(long*)( param_1 + 0x4f8 ) == 0 ) ) || ( *(short*)( param_1 + 0x1e6 ) != 0 ) ) || ( ( *(long*)( param_1 + 0x458 ) != 0 || ( *(long*)( param_1 + 0x468 ) != 0 ) ) )) goto LAB_00109ba4;
   }
 else {
      LAB_00109deb:uVar10 = *(ulong*)( param_1 + 0x10 );
   }

   uVar20 = 0;
   uVar8 = (uint)uVar10;
   if (( ( param_3 & 0x1000000 ) == 0 ) && ( ( uVar10 & 0x10000 ) != 0 )) {
      iVar9 = ( **(code**)( plVar4[3] + 0x90 ) )(lVar3, lVar17, param_2, param_3 | 0x800000);
      if (( iVar9 == 0 ) && ( *(int*)( lVar3 + 0x90 ) == 0x53564720 )) goto LAB_00109be6;
      uVar8 = ( uint ) * (undefined8*)( param_1 + 0x10 );
      lVar17 = *(long*)( param_1 + 0xa0 );
   }

   if (( ( uVar8 & 2 ) != 0 ) && ( ( param_3 & 8 ) == 0 )) {
      iVar9 = ( **(code**)( plVar4[3] + 0x90 ) )(lVar3, lVar17, param_2, param_3 | 0x4000);
      if (( iVar9 == 0 ) && ( *(int*)( lVar3 + 0x90 ) == 0x62697473 )) goto LAB_00109be6;
      lVar17 = *(long*)( param_1 + 0xa0 );
   }

   lVar14 = *(long*)( param_1 + 0xf0 );
   uVar2 = *(undefined4*)( lVar14 + 0x30 );
   *(undefined4*)( lVar14 + 0x30 ) = 0;
   uVar8 = ( **(code**)( *(long*)( *plVar15 + 0x28 ) + 0x18 ) )(plVar15, lVar3, lVar17, param_2, param_3);
   uVar20 = (ulong)uVar8;
   *(undefined4*)( lVar14 + 0x30 ) = uVar2;
   LAB_00109be6:if (( param_3 & 0x10 ) == 0) {
      uVar11 = *(undefined8*)( lVar3 + 0x50 );
      uVar18 = 0;
   }
 else {
      uVar18 = *(undefined8*)( lVar3 + 0x68 );
      uVar11 = 0;
   }

   *(undefined8*)( lVar3 + 0x88 ) = uVar18;
   *(undefined8*)( lVar3 + 0x80 ) = uVar11;
   if (( ( param_3 & 0x2000 ) == 0 ) && ( ( *(byte*)( param_1 + 0x10 ) & 1 ) != 0 )) {
      lVar14 = *(long*)( param_1 + 0xa0 );
      lVar17 = *(long*)( lVar14 + 0x20 );
      if (lVar17 < 0) {
         uVar10 = *(long*)( lVar3 + 0x70 ) * lVar17 + 0x20U >> 6;
      }
 else {
         uVar10 = -(0x20U - *(long *)(lVar3 + 0x70) * lVar17 >> 6);
      }

      *(ulong*)( lVar3 + 0x70 ) = uVar10;
      lVar14 = *(long*)( lVar14 + 0x28 );
      if (lVar14 < 0) {
         uVar10 = *(long*)( lVar3 + 0x78 ) * lVar14 + 0x20U >> 6;
      }
 else {
         uVar10 = -(0x20U - *(long *)(lVar3 + 0x78) * lVar14 >> 6);
      }

      *(ulong*)( lVar3 + 0x78 ) = uVar10;
   }

   if (( param_3 & 0x800 ) == 0) {
      lVar14 = *(long*)( param_1 + 0xf0 );
      uVar8 = *(uint*)( lVar14 + 0x30 );
      if (uVar8 != 0) {
         iVar9 = *(int*)( lVar3 + 0x90 );
         lVar17 = *(long*)( *(long*)( *(long*)( lVar3 + 8 ) + 0xb0 ) + 8 );
         lVar19 = *(long*)( lVar17 + 0x128 );
         if (( lVar19 == 0 ) || ( iVar9 != *(int*)( lVar19 + 0x20 ) )) {
            for (lVar17 = *(long*)( lVar17 + 0x118 ); lVar17 != 0; lVar17 = *(long*)( lVar17 + 8 )) {
               lVar19 = *(long*)( lVar17 + 0x10 );
               if (iVar9 == *(int*)( lVar19 + 0x20 )) goto LAB_00109fb6;
            }

            if (iVar9 == 0x6f75746c) {
               if (( uVar8 & 1 ) != 0) {
                  FT_Outline_Transform(lVar3 + 200, lVar14);
               }

               if (( uVar8 & 2 ) != 0) {
                  sVar1 = *(short*)( lVar3 + 0xca );
                  lVar17 = *(long*)( lVar14 + 0x20 );
                  lVar19 = *(long*)( lVar14 + 0x28 );
                  plVar4 = *(long**)( lVar3 + 0xd0 );
                  if (0 < sVar1) {
                     plVar15 = plVar4;
                     do {
                        plVar16 = plVar15 + 2;
                        *plVar15 = *plVar15 + lVar17;
                        plVar15[1] = plVar15[1] + lVar19;
                        plVar15 = plVar16;
                     }
 while ( plVar16 != plVar4 + ( ulong )((int)sVar1 - 1) * 2 + 2 );
                  }

               }

            }

         }
 else {
            LAB_00109fb6:uVar8 = ( **(code**)( *(long*)( lVar19 + 0x18 ) + 0x58 ) )(lVar19, lVar3, lVar14, lVar14 + 0x20);
            uVar20 = (ulong)uVar8;
         }

         FT_Vector_Transform(lVar3 + 0x80, lVar14);
      }

   }

   *(undefined4*)( lVar3 + 0x18 ) = param_2;
   *(uint*)( *(long*)( lVar3 + 0x128 ) + 0x48 ) = param_3;
   if (( ( ( (int)uVar20 == 0 ) && ( ( param_3 & 1 ) == 0 ) ) && ( *(int*)( lVar3 + 0x90 ) != 0x636f6d70 ) ) && ( *(int*)( lVar3 + 0x90 ) != 0x62697473 )) {
      uVar8 = (int)param_3 >> 0x10 & 0xf;
      if (uVar8 == 0) {
         uVar8 = param_3 >> 0xb & 2;
      }

      if (( param_3 & 4 ) == 0) {
         ft_glyphslot_preset_bitmap(lVar3, uVar8, 0);
      }
 else {
         if (*(long*)( lVar3 + 8 ) != 0) {
            uVar10 = FT_Render_Glyph_Internal(*(undefined8*)( *(long*)( *(long*)( lVar3 + 8 ) + 0xb0 ) + 8 ), lVar3, uVar8);
            return uVar10;
         }

         uVar20 = 6;
      }

   }

   return uVar20;
}
undefined8 FT_Get_Advances(long param_1, ulong param_2, uint param_3, uint param_4, ulong *param_5) {
   ulong *puVar1;
   code *pcVar2;
   long lVar3;
   undefined8 uVar4;
   ulong uVar5;
   long lVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   if (param_1 == 0) {
      return 0x23;
   }

   if (param_5 == (ulong*)0x0) {
      return 6;
   }

   uVar9 = (uint)param_2;
   uVar5 = param_2 & 0xffffffff;
   uVar7 = ( uint ) * (undefined8*)( param_1 + 0x20 );
   if (( uVar7 <= uVar9 || uVar7 < uVar9 + param_3 ) || ( CARRY4(uVar9, param_3) )) {
      return 0x10;
   }

   if (param_3 == 0) {
      return 0;
   }

   pcVar2 = *(code**)( *(long*)( *(long*)( param_1 + 0xb0 ) + 0x18 ) + 0xa8 );
   if (pcVar2 == (code*)0x0) {
      LAB_0010a471:if (( param_4 & 0x20000000 ) != 0) {
         return 7;
      }

      uVar7 = param_4 & 1;
      if (( param_4 & 1 ) == 0) {
         uVar7 = 0x400;
      }

      LAB_0010a3c5:do {
         uVar4 = FT_Load_Glyph(param_1, uVar5, param_4 | 0x100);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         if (( param_4 & 0x10 ) == 0) {
            lVar3 = *(long*)( *(long*)( param_1 + 0x98 ) + 0x80 );
         }
 else {
            lVar3 = *(long*)( *(long*)( param_1 + 0x98 ) + 0x88 );
         }

         uVar8 = (int)uVar5 + 1;
         uVar5 = (ulong)uVar8;
         *param_5 = lVar3 * (int)uVar7;
         param_5 = param_5 + 1;
      }
 while ( uVar9 + param_3 != uVar8 );
   }
 else {
      if (( param_4 & 3 ) == 0) {
         if (( param_4 & 0xf0000 ) != 0x10000) {
            uVar7 = 0x400;
            if (( param_4 & 0x20000000 ) != 0) {
               return 7;
            }

            goto LAB_0010a3c5;
         }

         uVar4 = ( *pcVar2 )(param_1, param_2, param_3, param_4);
         if ((int)uVar4 != 0) goto LAB_0010a46d;
      }
 else {
         uVar4 = ( *pcVar2 )(param_1, param_2, param_3, param_4);
         if ((int)uVar4 != 0) {
            LAB_0010a46d:if ((char)uVar4 != '\a') {
               return uVar4;
            }

            goto LAB_0010a471;
         }

         if (( param_4 & 1 ) != 0) {
            return 0;
         }

      }

      lVar3 = *(long*)( param_1 + 0xa0 );
      if (lVar3 == 0) {
         return 0x24;
      }

      puVar1 = param_5 + param_3;
      lVar6 = *(long*)( lVar3 + 0x28 );
      if (( param_4 & 0x10 ) == 0) {
         lVar6 = *(long*)( lVar3 + 0x20 );
      }

      do {
         if (lVar6 < 0) {
            uVar5 = -(0x20 - *param_5 * lVar6 >> 6);
         }
 else {
            uVar5 = *param_5 * lVar6 + 0x20 >> 6;
         }

         *param_5 = uVar5;
         param_5 = param_5 + 1;
      }
 while ( puVar1 != param_5 );
   }

   return 0;
}
undefined8 FT_Get_Advance(long param_1, ulong param_2, uint param_3, ulong *param_4) {
   code *pcVar1;
   long lVar2;
   undefined8 uVar3;
   ulong uVar4;
   long lVar5;
   if (param_1 == 0) {
      return 0x23;
   }

   if (param_4 == (ulong*)0x0) {
      return 6;
   }

   if (*(uint*)( param_1 + 0x20 ) <= (uint)param_2) {
      return 0x10;
   }

   pcVar1 = *(code**)( *(long*)( *(long*)( param_1 + 0xb0 ) + 0x18 ) + 0xa8 );
   if (pcVar1 != (code*)0x0) {
      if (( param_3 & 3 ) == 0) {
         if (( param_3 & 0xf0000 ) != 0x10000) goto LAB_0010a5e6;
         uVar3 = ( *pcVar1 )(param_1, param_2, 1, param_3, param_4);
         if ((int)uVar3 == 0) goto LAB_0010a618;
      }
 else {
         uVar3 = ( *pcVar1 )(param_1, param_2, 1, param_3, param_4);
         if ((int)uVar3 == 0) {
            if (( param_3 & 1 ) != 0) {
               return 0;
            }

            LAB_0010a618:lVar2 = *(long*)( param_1 + 0xa0 );
            if (lVar2 == 0) {
               return 0x24;
            }

            lVar5 = *(long*)( lVar2 + 0x28 );
            if (( param_3 & 0x10 ) == 0) {
               lVar5 = *(long*)( lVar2 + 0x20 );
            }

            if (lVar5 < 0) {
               uVar4 = *param_4 * lVar5 + 0x20 >> 6;
            }
 else {
               uVar4 = -(0x20 - *param_4 * lVar5 >> 6);
            }

            *param_4 = uVar4;
            return 0;
         }

      }

      if ((char)uVar3 != '\a') {
         return uVar3;
      }

   }

   LAB_0010a5e6:uVar3 = FT_Get_Advances(param_1, param_2 & 0xffffffff, 1, param_3, param_4);
   return uVar3;
}
undefined8 FT_Load_Char(long param_1, ulong param_2, ulong param_3) {
   uint uVar1;
   undefined8 uVar2;
   if (param_1 != 0) {
      if (*(long*)( param_1 + 0xa8 ) != 0) {
         uVar1 = ( **(code**)( *(long*)( *(long*)( param_1 + 0xa8 ) + 0x10 ) + 0x18 ) )();
         param_3 = param_3 & 0xffffffff;
         param_2 = (ulong)uVar1;
         if (*(uint*)( param_1 + 0x20 ) <= uVar1) {
            param_2 = 0;
         }

      }

      uVar2 = FT_Load_Glyph(param_1, param_2, param_3);
      return uVar2;
   }

   return 0x23;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */uint ft_open_face_internal(long *param_1, uint *param_2, long param_3, long *param_4, char param_5) {
   long *plVar1;
   short *psVar2;
   long lVar3;
   bool bVar4;
   bool bVar5;
   undefined8 uVar6;
   long lVar7;
   bool bVar8;
   uint uVar9;
   int iVar10;
   long lVar11;
   long *plVar12;
   short *psVar13;
   undefined8 *puVar14;
   short sVar15;
   uint uVar16;
   undefined8 *puVar17;
   undefined8 uVar18;
   long lVar19;
   ulong uVar20;
   int *piVar21;
   long lVar22;
   long in_FS_OFFSET;
   char cVar23;
   long local_238;
   char local_1f1;
   long local_1f0;
   long local_1e8;
   long local_1e0;
   undefined4 local_1d8;
   undefined4 uStack_1d4;
   long local_1c0;
   int local_198[12];
   long local_168[9];
   long local_120;
   undefined8 local_118[10];
   char local_c8;
   byte local_c7;
   char acStack_c6[61];
   char local_89;
   char local_7e;
   char local_76;
   uint local_75;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_1f0 = 0;
   local_1e8 = 0;
   if (param_3 < 1) {
      uVar20 = -(ulong)(-(uint)param_3 & 0x7fffffff);
   }
 else {
      uVar20 = ( ulong )((uint)param_3 & 0x7fffffff);
   }

   if (param_2 == (uint*)0x0) {
      LAB_0010a9be:uVar9 = 6;
      goto LAB_0010a85b;
   }

   cVar23 = false;
   if (( *param_2 & 2 ) != 0) {
      cVar23 = *(long*)( param_2 + 8 ) != 0;
   }

   local_1f1 = cVar23;
   uVar9 = FT_Stream_New(param_1, param_2, &local_1f0);
   if (uVar9 == 0) {
      lVar19 = local_1f0;
      if (( param_4 == (long*)0x0 ) && ( -1 < (long)uVar20 )) {
         if (local_1f0 == 0) goto LAB_0010a9be;
         local_238 = 0;
         puVar17 = (undefined8*)0x0;
         uVar9 = 6;
         goto LAB_0010a80d;
      }

      local_238 = *param_1;
      if (( ( *param_2 & 8 ) == 0 ) || ( puVar17 = *(undefined8**)( param_2 + 10 ) ),puVar17 == (undefined8*)0x0) {
         puVar14 = (undefined8*)0x0;
         plVar12 = param_1 + 3;
         plVar1 = plVar12 + *(uint*)( (long)param_1 + 0x14 );
         if (plVar12 < plVar1) {
            uVar9 = 0xb;
            do {
               puVar17 = (undefined8*)*plVar12;
               if (( *(byte*)*puVar17 & 1 ) != 0) {
                  if (( *param_2 & 0x10 ) == 0) {
                     uVar9 = 0;
                     uVar18 = 0;
                  }
 else {
                     uVar9 = param_2[0xc];
                     uVar18 = *(undefined8*)( param_2 + 0xe );
                  }

                  uVar9 = open_face(puVar17, &local_1f0, &local_1f1, uVar20, uVar9, uVar18, &local_1e8);
                  if (uVar9 == 0) goto LAB_0010ac88;
                  uVar16 = uVar9 & 0xff;
                  if (( ( param_5 != '\0' ) && ( iVar10 = strcmp(*(char**)( *(long*)*plVar12 + 0x10 ), "truetype") ),lVar19 = local_1f0,iVar10 == 0 )) {
                     if (( *(code**)( local_1f0 + 0x28 ) != (code*)0x0 ) && ( lVar11 = ( **(code**)( local_1f0 + 0x28 ) )(local_1f0, 0, 0, 0) ),cVar23 = local_1f1,lVar11 != 0) goto LAB_0010aa30;
                     *(undefined8*)( lVar19 + 0x10 ) = 0;
                     uVar9 = open_face_PS_from_sfnt_stream_isra_0(param_1, lVar19, uVar20, param_4);
                     cVar23 = local_1f1;
                     if (uVar9 == 0) {
                        lVar11 = *(long*)( lVar19 + 0x38 );
                        if (*(code**)( lVar19 + 0x30 ) != (code*)0x0) {
                           ( **(code**)( lVar19 + 0x30 ) )(lVar19);
                        }

                        goto joined_r0x0010b204;
                     }

                     uVar16 = uVar9 & 0xff;
                  }

                  puVar14 = puVar17;
                  if (uVar16 != 2) {
                     cVar23 = local_1f1;
                     if (uVar16 != 0x51) goto LAB_0010adbd;
                     goto LAB_0010a9fa;
                  }

               }

               plVar12 = plVar12 + 1;
            }
 while ( plVar12 < plVar1 );
            bVar8 = (char)uVar9 != 'Q' && (char)uVar9 != '\x02';
            puVar17 = puVar14;
            cVar23 = local_1f1;
            goto LAB_0010a9f2;
         }

         uVar9 = 0xb;
         puVar17 = puVar14;
         goto LAB_0010aa09;
      }

      if (( *(byte*)*puVar17 & 1 ) == 0) {
         uVar9 = 0x20;
         if (local_1f0 == 0) goto LAB_0010a85b;
         uVar9 = 0x20;
         lVar11 = 0;
         LAB_0010ac2e:lVar22 = local_1f0;
         lVar19 = *(long*)( local_1f0 + 0x38 );
         if (*(code**)( local_1f0 + 0x30 ) != (code*)0x0) {
            ( **(code**)( local_1f0 + 0x30 ) )(local_1f0);
         }

         if (cVar23 == '\0') {
            ( **(code**)( lVar19 + 0x10 ) )(lVar19, lVar22);
         }

      }
 else {
         uVar18 = 0;
         uVar9 = 0;
         if (( *param_2 & 0x10 ) != 0) {
            uVar9 = param_2[0xc];
            uVar18 = *(undefined8*)( param_2 + 0xe );
         }

         uVar9 = open_face(puVar17, &local_1f0, &local_1f1, uVar20, uVar9, uVar18, &local_1e8);
         if (uVar9 == 0) {
            LAB_0010ac88:plVar12 = (long*)( **(code**)( local_238 + 8 ) )(local_238, 0x18);
            lVar19 = local_1e8;
            if (plVar12 != (long*)0x0) {
               lVar11 = *(long*)( local_1e8 + 0xb0 );
               plVar12[2] = local_1e8;
               lVar22 = *(long*)( lVar11 + 0x28 );
               plVar12[1] = 0;
               *plVar12 = lVar22;
               if (lVar22 == 0) {
                  *(long**)( lVar11 + 0x20 ) = plVar12;
               }
 else {
                  *(long**)( lVar22 + 8 ) = plVar12;
               }

               *(long**)( lVar11 + 0x28 ) = plVar12;
               if (-1 < (long)uVar20) {
                  uVar9 = FT_New_GlyphSlot(local_1e8, 0);
                  if (( uVar9 != 0 ) || ( uVar9 = uVar9 != 0 )) {
                     FT_Done_Face(lVar19);
                     goto LAB_0010a85b;
                  }

                  *(ulong*)( lVar19 + 0xa0 ) = CONCAT44(uStack_1d4, local_1d8);
               }

               uVar20 = *(ulong*)( lVar19 + 0x10 );
               if (( uVar20 & 1 ) != 0) {
                  if (*(short*)( lVar19 + 0x8e ) < 0) {
                     *(short*)( lVar19 + 0x8e ) = -*(short *)(lVar19 + 0x8e);
                  }

                  if (( uVar20 & 0x20 ) == 0) {
                     *(undefined2*)( lVar19 + 0x92 ) = *(undefined2*)( lVar19 + 0x8e );
                  }

               }

               if (( ( uVar20 & 2 ) != 0 ) && ( 0 < *(int*)( lVar19 + 0x38 ) )) {
                  psVar13 = *(short**)( lVar19 + 0x40 );
                  psVar2 = psVar13 + (long)*(int*)( lVar19 + 0x38 ) * 0x10;
                  do {
                     sVar15 = *psVar13;
                     if (sVar15 < 0) {
                        sVar15 = -sVar15;
                        *psVar13 = sVar15;
                        if (*(long*)( psVar13 + 8 ) < 0) {
                           *(long*)( psVar13 + 8 ) = -*(long *)(psVar13 + 8);
                        }

                        lVar11 = *(long*)( psVar13 + 0xc );
                        if (lVar11 < 0) {
                           LAB_0010b0f9:*(long*)( psVar13 + 0xc ) = -lVar11;
                        }

                        if (-1 < sVar15) goto LAB_0010b0d9;
                        LAB_0010aebd:psVar13[0] = 0;
                        psVar13[1] = 0;
                        psVar13[0xc] = 0;
                        psVar13[0xd] = 0;
                        psVar13[0xe] = 0;
                        psVar13[0xf] = 0;
                        *(undefined1(*) [16])( psVar13 + 4 ) = (undefined1[16])0x0;
                     }
 else {
                        if (*(long*)( psVar13 + 8 ) < 0) {
                           *(long*)( psVar13 + 8 ) = -*(long *)(psVar13 + 8);
                           lVar11 = *(long*)( psVar13 + 0xc );
                           if (lVar11 < 0) goto LAB_0010b0f9;
                           LAB_0010b0d9:if (*(long*)( psVar13 + 8 ) < 0) goto LAB_0010aebd;
                        }
 else if (*(long*)( psVar13 + 0xc ) < 0) {
                           *(long*)( psVar13 + 0xc ) = -*(long *)(psVar13 + 0xc);
                           goto LAB_0010b0d9;
                        }

                        if (*(long*)( psVar13 + 0xc ) < 0) goto LAB_0010aebd;
                     }

                     psVar13 = psVar13 + 0x10;
                  }
 while ( psVar13 != psVar2 );
               }

               uVar18 = _UNK_0010d468;
               puVar17 = *(undefined8**)( lVar19 + 0xf0 );
               *puVar17 = ram0x0010d460;
               puVar17[1] = uVar18;
               uVar6 = _UNK_0010d478;
               uVar18 = __LC7;
               *(undefined4*)( puVar17 + 0xf ) = 1;
               puVar17[2] = uVar18;
               puVar17[3] = uVar6;
               *(undefined1*)( puVar17 + 0xe ) = 0xff;
               *(undefined1(*) [16])( puVar17 + 4 ) = (undefined1[16])0x0;
               if (param_4 == (long*)0x0) {
                  uVar9 = 0;
                  FT_Done_Face(lVar19);
               }
 else {
                  uVar9 = 0;
                  *param_4 = lVar19;
               }

               goto LAB_0010a85b;
            }

            uVar9 = 0x40;
            lVar11 = local_1e8;
         }
 else {
            lVar11 = local_1e8;
            cVar23 = local_1f1;
            if (local_1f0 != 0) goto LAB_0010ac2e;
         }

      }

   }
 else {
      local_238 = 0;
      puVar17 = (undefined8*)0x0;
      bVar8 = (char)uVar9 != '\x02' && (char)uVar9 != 'Q';
      LAB_0010a9f2:uVar16 = uVar9 & 0xff;
      if (bVar8) {
         LAB_0010adbd:lVar19 = local_1f0;
         if (( uVar16 == 0x55 ) && ( param_5 != '\0' )) goto LAB_0010aa30;
         LAB_0010aa09:lVar11 = local_1e8;
         if (lVar19 == 0) goto LAB_0010a846;
      }
 else {
         LAB_0010a9fa:lVar19 = local_1f0;
         if (param_5 == '\0') {
            if (uVar16 != 2) goto LAB_0010aa09;
            LAB_0010aa04:uVar9 = 2;
            goto LAB_0010aa09;
         }

         LAB_0010aa30:if (lVar19 == 0) {
            uVar9 = 0x55;
            lVar11 = local_1e8;
            if (( *param_2 & 4 ) == 0) goto LAB_0010a846;
            LAB_0010af2c:lVar22 = 0;
            plVar12 = local_168;
            lVar11 = *param_1;
            piVar21 = &DAT_0010d3c8;
            local_1e0 = 0;
            FT_Raccess_Guess(param_1, lVar19, *(undefined8*)( param_2 + 6 ), plVar12, local_118, local_198);
            iVar10 = 2;
            bVar8 = false;
            do {
               bVar4 = false;
               bVar5 = bVar8;
               if (*piVar21 - 3U < 2) {
                  if (!bVar8) {
                     bVar4 = true;
                     goto LAB_0010afc0;
                  }

               }
 else {
                  LAB_0010afc0:if (local_198[lVar22] == 0) {
                     local_1d8 = 4;
                     local_1c0 = plVar12[lVar22];
                     if (local_1c0 == 0) {
                        local_1c0 = *(long*)( param_2 + 6 );
                     }

                     iVar10 = FT_Stream_New(param_1, &local_1d8, &local_1e0);
                     lVar7 = local_1e0;
                     if (( ( !bVar4 ) || ( bVar5 = bVar4 ),(char)iVar10 != 'Q' )) {
                        iVar10 = IsMacResource(param_1, local_1e0, local_118[lVar22], uVar20, param_4);
                        if (lVar7 != 0) {
                           lVar3 = *(long*)( lVar7 + 0x38 );
                           if (*(code**)( lVar7 + 0x30 ) != (code*)0x0) {
                              ( **(code**)( lVar7 + 0x30 ) )(lVar7);
                           }

                           ( **(code**)( lVar3 + 0x10 ) )(lVar3, lVar7);
                        }

                        if (iVar10 == 0) break;
                        if (bVar4) {
                           bVar5 = bVar4;
                        }

                     }

                  }

               }

               lVar22 = lVar22 + 1;
               piVar21 = piVar21 + 4;
               bVar8 = bVar5;
            }
 while ( lVar22 != 9 );
            do {
               if (*plVar12 != 0) {
                  ( **(code**)( lVar11 + 0x10 ) )(lVar11);
                  *plVar12 = 0;
               }

               plVar12 = plVar12 + 1;
            }
 while ( &local_120 != plVar12 );
            if (iVar10 == 0) {
               if (lVar19 == 0) {
                  uVar9 = 0;
                  goto LAB_0010a85b;
               }

               LAB_0010ab82:lVar11 = *(long*)( lVar19 + 0x38 );
               if (*(code**)( lVar19 + 0x30 ) != (code*)0x0) {
                  ( **(code**)( lVar19 + 0x30 ) )(lVar19);
               }

               joined_r0x0010b204:if (cVar23 == '\0') {
                  ( **(code**)( lVar11 + 0x10 ) )(lVar11, lVar19);
               }

               uVar9 = 0;
               goto LAB_0010a85b;
            }

            goto LAB_0010aa04;
         }

         if (( *(code**)( lVar19 + 0x28 ) != (code*)0x0 ) && ( lVar11 = lVar11 != 0 )) {
            uVar9 = 0x55;
            if (( *param_2 & 4 ) == 0) goto LAB_0010a80d;
            goto LAB_0010af2c;
         }

         *(undefined8*)( lVar19 + 0x10 ) = 0;
         uVar9 = FT_Stream_ReadAt(lVar19, 0, &local_c8, 0x80);
         if (uVar9 == 0) {
            if (( ( ( ( local_c8 == '\0' && local_7e == '\0' ) && local_76 == '\0' ) && ( ( byte )(local_c7 - 1) < 0x21 ) ) && ( local_89 == '\0' ) ) && ( ( acStack_c6[local_c7] == '\0' && ( -1 < (char)local_75 ) ) )) {
               uVar9 = IsMacResource(param_1, lVar19, ( (long)(int)( local_75 >> 0x18 | ( local_75 & 0xff0000 ) >> 8 | ( local_75 & 0xff00 ) << 8 | local_75 << 0x18 ) + 0x7fU & 0xffffffffffffff80 ) + 0x80, uVar20, param_4);
               goto LAB_0010ab30;
            }

            LAB_0010ab38:uVar9 = IsMacResource(param_1, lVar19, 0, uVar20, param_4);
         }
 else {
            LAB_0010ab30:if ((char)uVar9 == '\x02') goto LAB_0010ab38;
         }

         uVar16 = uVar9 & 0xff;
         if (( uVar16 != 2 ) && ( uVar16 != 0x55 )) {
            if (uVar9 != 0) goto LAB_0010a80d;
            goto LAB_0010ab82;
         }

         if (( *param_2 & 4 ) != 0) goto LAB_0010af2c;
         if (uVar16 == 2) {
            uVar9 = 2;
         }

      }

      LAB_0010a80d:lVar22 = *(long*)( lVar19 + 0x38 );
      if (*(code**)( lVar19 + 0x30 ) != (code*)0x0) {
         ( **(code**)( lVar19 + 0x30 ) )(lVar19);
      }

      lVar11 = local_1e8;
      if (cVar23 == '\0') {
         ( **(code**)( lVar22 + 0x10 ) )(lVar22, lVar19);
         lVar11 = local_1e8;
      }

   }

   LAB_0010a846:if (lVar11 != 0) {
      destroy_face(local_238, lVar11, puVar17);
   }

   LAB_0010a85b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 FT_New_Face(undefined8 param_1, long param_2, undefined8 param_3, undefined8 param_4) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined4 local_58[6];
   long local_40;
   undefined8 local_38;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 0) {
      uVar1 = 6;
   }
 else {
      local_58[0] = 4;
      local_38 = 0;
      local_40 = param_2;
      uVar1 = ft_open_face_internal(param_1, local_58, param_3, param_4, 1);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Type propagation algorithm not settling */int open_face_from_buffer(long *param_1, long param_2, long param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   long lVar1;
   int iVar2;
   long *plVar3;
   long in_FS_OFFSET;
   int local_8c[9];
   long *local_68;
   long local_60;
   long local_40;
   lVar1 = *param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = FT_Get_Module(param_1, param_5);
   if (local_60 == 0) {
      if (param_2 != 0) {
         ( **(code**)( lVar1 + 0x10 ) )(lVar1, param_2);
      }

      iVar2 = 0xb;
   }
 else {
      local_8c[1] = 8;
      iVar2 = 6;
      if (param_2 != 0) {
         local_68 = (long*)0x0;
         plVar3 = (long*)ft_mem_alloc(lVar1, 0x50, local_8c);
         if (local_8c[0] == 0) {
            *plVar3 = param_2;
            plVar3[6] = (long)memory_stream_close;
            plVar3[1] = param_3;
            plVar3[2] = 0;
            plVar3[8] = 0;
            plVar3[5] = 0;
            plVar3[3] = lVar1;
            local_8c[1] = 10;
            local_68 = plVar3;
            iVar2 = ft_open_face_internal(param_1, local_8c + 1, param_4, param_6, 0);
         }
 else {
            ( **(code**)( lVar1 + 0x10 ) )(lVar1, param_2);
            iVar2 = local_8c[0];
         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
uint open_face_PS_from_sfnt_stream_isra_0(long *param_1, long param_2, ulong param_3, undefined8 param_4) {
   ulong uVar1;
   bool bVar2;
   ushort uVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   uint uVar7;
   char *pcVar8;
   ulong uVar9;
   ulong uVar10;
   ulong uVar11;
   uint uVar12;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar5 = *param_1;
   if (0 < (long)param_3) {
      param_3 = param_3 & 0xffff;
   }

   uVar1 = *(ulong*)( param_2 + 0x10 );
   iVar4 = FT_Stream_ReadULong(param_2, &local_44);
   if (local_44 == 0) {
      uVar12 = 2;
      if (iVar4 != 0x74797031) goto LAB_0010b43c;
      uVar3 = FT_Stream_ReadUShort(param_2, &local_44);
      if (local_44 != 0) goto LAB_0010b4a8;
      uVar10 = *(long*)( param_2 + 0x10 ) + 6;
      if (*(code**)( param_2 + 0x28 ) == (code*)0x0) {
         if (uVar10 <= *(ulong*)( param_2 + 8 )) goto LAB_0010b4e9;
      }
 else {
         lVar6 = ( **(code**)( param_2 + 0x28 ) )(param_2, uVar10, 0, 0);
         if (lVar6 == 0) {
            LAB_0010b4e9:*(ulong*)( param_2 + 0x10 ) = uVar10;
            if (uVar3 == 0) {
               local_44 = 0x8e;
               goto LAB_0010b469;
            }

            bVar2 = false;
            uVar10 = 0xffffffffffffffff;
            uVar12 = 0;
            do {
               iVar4 = FT_Stream_ReadULong(param_2, &local_44);
               if (local_44 != 0) goto LAB_0010b62f;
               uVar11 = *(long*)( param_2 + 0x10 ) + 4;
               if (*(code**)( param_2 + 0x28 ) == (code*)0x0) {
                  if (*(ulong*)( param_2 + 8 ) < uVar11) goto LAB_0010b62a;
               }
 else {
                  lVar6 = ( **(code**)( param_2 + 0x28 ) )(param_2, uVar11, 0, 0);
                  if (lVar6 != 0) {
                     LAB_0010b62a:local_44 = 0x55;
                     goto LAB_0010b62f;
                  }

               }

               *(ulong*)( param_2 + 0x10 ) = uVar11;
               uVar7 = FT_Stream_ReadULong(param_2, &local_44);
               uVar11 = (ulong)uVar7;
               if (local_44 != 0) goto LAB_0010b62f;
               uVar7 = FT_Stream_ReadULong(param_2, &local_44);
               uVar9 = (ulong)uVar7;
               if (local_44 != 0) goto LAB_0010b62f;
               if (iVar4 == 0x43494420) {
                  uVar10 = uVar10 + 1;
                  uVar11 = uVar11 + 0x16;
                  uVar9 = uVar9 - 0x16;
                  if (-1 < (long)param_3) {
                     bVar2 = true;
                     goto LAB_0010b53d;
                  }

                  bVar2 = true;
                  LAB_0010b682:uVar10 = *(ulong*)( param_2 + 8 );
                  local_44 = 8;
                  if (( uVar10 < uVar11 ) || ( uVar10 - uVar11 < uVar9 )) goto LAB_0010b469;
                  uVar11 = uVar11 + uVar1;
                  if (*(code**)( param_2 + 0x28 ) == (code*)0x0) {
                     if (uVar10 < uVar11) goto LAB_0010b610;
                  }
 else {
                     lVar6 = ( **(code**)( param_2 + 0x28 ) )(param_2, uVar11, 0, 0);
                     if (lVar6 != 0) goto LAB_0010b610;
                  }

                  *(ulong*)( param_2 + 0x10 ) = uVar11;
                  if ((long)uVar9 < 1) {
                     local_44 = 6;
                     if (uVar9 != 0) goto LAB_0010b469;
                     lVar6 = 0;
                     local_44 = FT_Stream_ReadAt(param_2, uVar11, 0, 0);
                     if (local_44 != 0) goto LAB_0010b4a8;
                  }
 else {
                     lVar6 = ( **(code**)( lVar5 + 8 ) )(lVar5, uVar9);
                     if (lVar6 == 0) {
                        local_44 = 0x40;
                        goto LAB_0010b469;
                     }

                     local_44 = FT_Stream_ReadAt(param_2, *(undefined8*)( param_2 + 0x10 ), lVar6, uVar9);
                     if (local_44 != 0) {
                        ( **(code**)( lVar5 + 0x10 ) )(lVar5, lVar6);
                        uVar7 = local_44 & 0xff;
                        goto LAB_0010b4ac;
                     }

                  }

                  pcVar8 = "type1";
                  if (bVar2) {
                     pcVar8 = "t1cid";
                  }

                  uVar10 = 0;
                  if ((long)param_3 < 1) {
                     uVar10 = param_3;
                  }

                  local_44 = open_face_from_buffer(param_1, lVar6, uVar9, uVar10, pcVar8, param_4);
                  goto LAB_0010b4a8;
               }

               if (iVar4 == 0x54595031) {
                  uVar10 = uVar10 + 1;
                  uVar11 = uVar11 + 0x18;
                  uVar9 = uVar9 - 0x18;
                  if ((long)param_3 < 0) {
                     bVar2 = false;
                     goto LAB_0010b682;
                  }

                  bVar2 = false;
               }

               LAB_0010b53d:if (( -1 < (long)param_3 ) && ( param_3 == uVar10 )) goto LAB_0010b682;
               uVar12 = uVar12 + 1;
            }
 while ( uVar3 != uVar12 );
            local_44 = 0x8e;
            LAB_0010b62f:uVar7 = local_44 & 0xff;
            goto LAB_0010b4ac;
         }

      }

   }
 else {
      LAB_0010b4a8:uVar7 = local_44 & 0xff;
      LAB_0010b4ac:uVar12 = local_44;
      if (uVar7 != 2) goto LAB_0010b469;
      LAB_0010b43c:if (*(code**)( param_2 + 0x28 ) == (code*)0x0) {
         if (uVar1 <= *(ulong*)( param_2 + 8 )) goto LAB_0010b460;
      }
 else {
         lVar5 = ( **(code**)( param_2 + 0x28 ) )(param_2, uVar1, 0, 0);
         if (lVar5 == 0) {
            LAB_0010b460:*(ulong*)( param_2 + 0x10 ) = uVar1;
            local_44 = uVar12;
            goto LAB_0010b469;
         }

      }

   }

   LAB_0010b610:local_44 = 0x55;
   LAB_0010b469:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_44;
}
int IsMacResource(long *param_1, long param_2, undefined8 param_3, long param_4, undefined8 *param_5) {
   long lVar1;
   long lVar2;
   int iVar3;
   ushort uVar4;
   int iVar5;
   uint uVar6;
   long lVar7;
   int *piVar8;
   undefined4 *puVar9;
   long lVar10;
   ulong uVar11;
   ulong uVar12;
   ulong uVar13;
   char *pcVar14;
   ulong uVar15;
   ulong uVar16;
   long in_FS_OFFSET;
   long *plVar17;
   int local_a8;
   long local_a0;
   long local_90;
   int local_64;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = *param_1;
   iVar5 = FT_Raccess_Get_HeaderInfo();
   if (iVar5 != 0) goto LAB_0010b87d;
   plVar17 = &local_50;
   iVar5 = FT_Raccess_Get_DataOffsets(param_1, param_2, local_60, local_58, 0x504f5354, 1, &local_50, &local_48);
   if (iVar5 == 0) {
      lVar2 = *param_1;
      local_64 = 1;
      if (param_4 + 1U < 2) {
         lVar7 = 0;
         uVar13 = 0;
         if (local_48 < 1) {
            if (local_50 != 0) {
               ( **(code**)( lVar1 + 0x10 ) )(lVar1, local_50);
            }

            iVar5 = 10;
         }
 else {
            do {
               uVar15 = *(ulong*)( local_50 + lVar7 * 8 );
               if (*(code**)( param_2 + 0x28 ) == (code*)0x0) {
                  if (*(ulong*)( param_2 + 8 ) < uVar15) {
                     LAB_0010bb98:iVar5 = 0x55;
                     ( **(code**)( lVar1 + 0x10 ) )(lVar1, local_50);
                     goto LAB_0010b87d;
                  }

               }
 else {
                  lVar10 = ( **(code**)( param_2 + 0x28 ) )(param_2, uVar15, 0, 0);
                  if (lVar10 != 0) goto LAB_0010bb98;
               }

               *(ulong*)( param_2 + 0x10 ) = uVar15;
               uVar6 = FT_Stream_ReadULong(param_2, &local_64);
               uVar15 = (ulong)uVar6;
               iVar5 = local_64;
               if (local_64 != 0) goto LAB_0010bc32;
               if (( 0xffffff < uVar15 ) || ( 0xffffff - uVar15 < uVar13 + 6 )) {
                  iVar5 = 9;
                  ( **(code**)( lVar1 + 0x10 ) )(lVar1, local_50);
                  goto LAB_0010b87d;
               }

               lVar7 = lVar7 + 1;
               uVar13 = uVar13 + 6 + uVar15;
            }
 while ( lVar7 != local_48 );
            uVar15 = uVar13 + 2;
            puVar9 = (undefined4*)( **(code**)( lVar2 + 8 ) )(lVar2, uVar15);
            if (puVar9 == (undefined4*)0x0) {
               iVar5 = 0x40;
               ( **(code**)( lVar1 + 0x10 ) )(lVar1, local_50);
            }
 else {
               *puVar9 = 0x180;
               *(undefined2*)( puVar9 + 1 ) = 0;
               lVar7 = 0;
               local_64 = 0;
               local_a0 = 0;
               local_a8 = 1;
               local_90 = 2;
               uVar12 = 6;
               do {
                  uVar16 = *(ulong*)( local_50 + lVar7 * 8 );
                  if (*(code**)( param_2 + 0x28 ) == (code*)0x0) {
                     if (*(ulong*)( param_2 + 8 ) < uVar16) goto LAB_0010be3a;
                  }
 else {
                     lVar10 = ( **(code**)( param_2 + 0x28 ) )(param_2, uVar16, 0, 0);
                     if (lVar10 != 0) goto LAB_0010be3a;
                  }

                  *(ulong*)( param_2 + 0x10 ) = uVar16;
                  uVar6 = FT_Stream_ReadULong(param_2, &local_64);
                  uVar16 = (ulong)uVar6;
                  if (( ( local_64 != 0 ) || ( 0x7fffffff < uVar16 ) ) || ( uVar4 = local_64 != 0 )) goto LAB_0010be3a;
                  iVar5 = (int)(uint)uVar4 >> 8;
                  local_64 = 10;
                  uVar11 = uVar12;
                  if (iVar5 != 0) {
                     uVar11 = 2;
                     if (1 < uVar16) {
                        uVar11 = uVar16;
                     }

                     lVar10 = uVar11 - 2;
                     if (iVar5 == local_a8) {
                        local_a0 = local_a0 + lVar10;
                     }
 else {
                        if (uVar15 < local_90 + 3U) goto LAB_0010be3a;
                        *(undefined4*)( (long)puVar9 + local_90 ) = (undefined4)local_a0;
                        if (iVar5 == 5) {
                           uVar13 = uVar12 + 2;
                           if (uVar15 < uVar13) goto LAB_0010be3a;
                           *(undefined2*)( (long)puVar9 + uVar12 ) = 0x380;
                           goto LAB_0010bf0a;
                        }

                        if (uVar15 < uVar12 + 6) goto LAB_0010be3a;
                        local_90 = uVar12 + 2;
                        *(undefined1*)( (long)puVar9 + uVar12 ) = 0x80;
                        *(char*)( (long)puVar9 + uVar12 + 1 ) = (char)( uVar4 >> 8 );
                        for (int i = 0; i < 4; i++) {
                           *(undefined1*)( (long)puVar9 + uVar12 + ( i + 2 ) ) = 0;
                        }

                        uVar12 = uVar12 + 6;
                        local_a0 = lVar10;
                     }

                     if (( ( uVar13 < uVar12 ) || ( uVar11 = uVar13 < uVar11 ) ) || ( local_64 = FT_Stream_ReadAt(param_2, *(undefined8*)( param_2 + 0x10 ), uVar12 + (long)puVar9) ),local_a8 = iVar5,local_64 != 0) goto LAB_0010be3a;
                  }

                  lVar7 = lVar7 + 1;
                  uVar12 = uVar11;
               }
 while ( lVar7 != local_48 );
               local_64 = 10;
               uVar13 = uVar11 + 2;
               if (( uVar15 < uVar13 ) || ( *(undefined2*)( (long)puVar9 + uVar11 ) = uVar15 < local_90 + 3U )) {
                  LAB_0010be3a:( **(code**)( lVar2 + 0x10 ) )(lVar2, puVar9);
                  iVar5 = 1;
                  LAB_0010bc32:( **(code**)( lVar1 + 0x10 ) )(lVar1, local_50);
               }
 else {
                  LAB_0010bf0a:local_64 = 10;
                  *(undefined4*)( (long)puVar9 + local_90 ) = (undefined4)local_a0;
                  iVar5 = open_face_from_buffer(param_1, puVar9, uVar13, 0, "type1", param_5);
                  ( **(code**)( lVar1 + 0x10 ) )(lVar1, local_50);
                  if (iVar5 == 0) {
                     *(undefined8*)*param_5 = 1;
                  }

               }

            }

         }

         goto LAB_0010b87d;
      }

      if (local_50 != 0) {
         ( **(code**)( lVar1 + 0x10 ) )(lVar1, local_50, local_48, lVar2, plVar17);
      }

      LAB_0010bbc3:iVar5 = 1;
      goto LAB_0010b87d;
   }

   iVar5 = FT_Raccess_Get_DataOffsets(param_1, param_2, local_60, local_58, 0x73666e74, 0, &local_50);
   if (iVar5 != 0) goto LAB_0010b87d;
   lVar2 = *param_1;
   uVar13 = param_4 % local_48 >> 0x3f ^ param_4 % local_48;
   if (local_48 <= (long)uVar13) {
      LAB_0010bbd0:if (local_50 != 0) {
         ( **(code**)( lVar1 + 0x10 ) )(lVar1, local_50);
      }

      goto LAB_0010bbc3;
   }

   uVar15 = *(ulong*)( local_50 + uVar13 * 8 );
   if (*(code**)( param_2 + 0x28 ) == (code*)0x0) {
      if (uVar15 <= *(ulong*)( param_2 + 8 )) goto LAB_0010b986;
      LAB_0010bbf2:iVar5 = 0x55;
   }
 else {
      lVar7 = ( **(code**)( param_2 + 0x28 ) )(param_2, uVar15, 0, 0);
      if (lVar7 != 0) goto LAB_0010bbf2;
      LAB_0010b986:*(ulong*)( param_2 + 0x10 ) = uVar15;
      uVar6 = FT_Stream_ReadULong(param_2, &local_64);
      iVar3 = local_64;
      iVar5 = local_64;
      if (local_64 == 0) {
         if (uVar6 == 0) goto LAB_0010bbd0;
         if (0xffffff < uVar6) {
            if (local_50 != 0) {
               ( **(code**)( lVar1 + 0x10 ) )(lVar1, local_50);
            }

            iVar5 = 9;
            goto LAB_0010b87d;
         }

         local_64 = open_face_PS_from_sfnt_stream_isra_0(param_1, param_2, uVar13, param_5);
         if (local_64 == 0) {
            if (local_50 != 0) {
               ( **(code**)( lVar1 + 0x10 ) )(lVar1, local_50);
            }

         }
 else {
            uVar15 = uVar15 + 4;
            if (*(code**)( param_2 + 0x28 ) == (code*)0x0) {
               if (*(ulong*)( param_2 + 8 ) < uVar15) goto LAB_0010bbf2;
            }
 else {
               lVar7 = ( **(code**)( param_2 + 0x28 ) )(param_2, uVar15, 0, 0);
               if (lVar7 != 0) goto LAB_0010bbf2;
            }

            *(ulong*)( param_2 + 0x10 ) = uVar15;
            piVar8 = (int*)( **(code**)( lVar2 + 8 ) )(lVar2, uVar6);
            if (piVar8 == (int*)0x0) {
               if (local_50 != 0) {
                  ( **(code**)( lVar1 + 0x10 ) )(lVar1, local_50);
               }

               iVar5 = 0x40;
               goto LAB_0010b87d;
            }

            iVar5 = FT_Stream_ReadAt(param_2, *(undefined8*)( param_2 + 0x10 ), piVar8, uVar6);
            local_64 = iVar5;
            if (iVar5 != 0) {
               ( **(code**)( lVar2 + 0x10 ) )(lVar2, piVar8);
               goto LAB_0010bbf7;
            }

            pcVar14 = "truetype";
            if (( 4 < uVar6 ) && ( *piVar8 == 0x4f54544f )) {
               pcVar14 = "cff";
            }

            iVar5 = open_face_from_buffer(param_1, piVar8, uVar6, 0, pcVar14, param_5);
            if (local_50 != 0) {
               ( **(code**)( lVar1 + 0x10 ) )(lVar1, local_50);
            }

            if (iVar5 != 0) goto LAB_0010b87d;
         }

         *(long*)*param_5 = local_48;
         iVar5 = iVar3;
         goto LAB_0010b87d;
      }

   }

   LAB_0010bbf7:if (local_50 != 0) {
      ( **(code**)( lVar1 + 0x10 ) )(lVar1, local_50);
   }

   LAB_0010b87d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar5;
}
undefined8 FT_New_Memory_Face(undefined8 param_1, long param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined4 local_58[2];
   long local_50;
   undefined8 local_48;
   undefined8 local_38;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 0) {
      uVar1 = 6;
   }
 else {
      local_58[0] = 1;
      local_38 = 0;
      local_50 = param_2;
      local_48 = param_3;
      uVar1 = ft_open_face_internal(param_1, local_58, param_4, param_5, 1);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void FT_Open_Face(void) {
   ft_open_face_internal();
   return;
}
int raccess_guess_linux_double_from_file_name(long *param_1, undefined8 param_2, undefined8 param_3) {
   long lVar1;
   int iVar2;
   long lVar3;
   long in_FS_OFFSET;
   int local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = 0x21;
   if (param_1 != (long*)0x0) {
      lVar1 = *param_1;
      lVar3 = ft_mem_alloc(lVar1, 0x50, &local_34);
      iVar2 = local_34;
      if (local_34 == 0) {
         *(long*)( lVar3 + 0x38 ) = lVar1;
         iVar2 = FT_Stream_Open(lVar3, param_2);
         if (iVar2 == 0) {
            iVar2 = raccess_guess_apple_generic_isra_0(lVar3, 0x51607, param_3);
            lVar1 = *(long*)( lVar3 + 0x38 );
            if (*(code**)( lVar3 + 0x30 ) != (code*)0x0) {
               ( **(code**)( lVar3 + 0x30 ) )(lVar3);
            }

            ( **(code**)( lVar1 + 0x10 ) )(lVar1, lVar3);
         }
 else {
            ( **(code**)( lVar1 + 0x10 ) )(lVar1, lVar3);
         }

      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int raccess_guess_linux_netatalk(long *param_1, undefined8 param_2, undefined8 param_3, long *param_4, undefined8 param_5) {
   long lVar1;
   int iVar2;
   long lVar3;
   lVar1 = *param_1;
   lVar3 = raccess_make_file_name(lVar1, param_3, ".AppleDouble/");
   if (lVar3 == 0) {
      return 0x40;
   }

   iVar2 = raccess_guess_linux_double_from_file_name(param_1, lVar3, param_5);
   if (iVar2 != 0) {
      ( **(code**)( lVar1 + 0x10 ) )(lVar1, lVar3);
      return iVar2;
   }

   *param_4 = lVar3;
   return 0;
}
int raccess_guess_linux_double(long *param_1, undefined8 param_2, undefined8 param_3, long *param_4, undefined8 param_5) {
   long lVar1;
   int iVar2;
   long lVar3;
   lVar1 = *param_1;
   lVar3 = raccess_make_file_name(lVar1, param_3, &_LC37);
   if (lVar3 == 0) {
      return 0x40;
   }

   iVar2 = raccess_guess_linux_double_from_file_name(param_1, lVar3, param_5);
   if (iVar2 != 0) {
      ( **(code**)( lVar1 + 0x10 ) )(lVar1, lVar3);
      return iVar2;
   }

   *param_4 = lVar3;
   return 0;
}
int raccess_guess_darwin_ufs_export(long *param_1, undefined8 param_2, undefined8 param_3, long *param_4, undefined8 param_5) {
   long lVar1;
   int iVar2;
   long lVar3;
   lVar1 = *param_1;
   lVar3 = raccess_make_file_name(lVar1, param_3, &_LC38);
   if (lVar3 == 0) {
      return 0x40;
   }

   iVar2 = raccess_guess_linux_double_from_file_name(param_1, lVar3, param_5);
   if (iVar2 != 0) {
      ( **(code**)( lVar1 + 0x10 ) )(lVar1, lVar3);
      return iVar2;
   }

   *param_4 = lVar3;
   return 0;
}
long ft_mem_qalloc(long param_1, long param_2, uint *param_3) {
   long lVar1;
   if (0 < param_2) {
      lVar1 = ( **(code**)( param_1 + 8 ) )();
      *param_3 = ( uint )(lVar1 == 0) << 6;
      return lVar1;
   }

   *param_3 = -(uint)(param_2 != 0) & 6;
   return 0;
}
long ft_mem_qrealloc(long param_1, ulong param_2, ulong param_3, ulong param_4, long param_5, uint *param_6) {
   undefined1 auVar1[16];
   long lVar2;
   uint uVar3;
   uVar3 = 6;
   if (-1 < (long)( param_4 | param_2 | param_3 )) {
      if (( param_4 == 0 ) || ( param_2 == 0 )) {
         if (param_5 != 0) {
            ( **(code**)( param_1 + 0x10 ) )(param_1, param_5);
         }

         *param_6 = 0;
         return 0;
      }

      auVar1._8_8_ = 0;
      auVar1._0_8_ = SUB168(SEXT816(0x7fffffff), 8);
      uVar3 = 10;
      if ((long)param_4 <= SUB168(( auVar1 << 0x40 | ZEXT816(0x7fffffff) ) / SEXT816((long)param_2), 0)) {
         if (param_3 == 0) {
            param_5 = ( **(code**)( param_1 + 8 ) )(param_1, param_4 * param_2);
            uVar3 = ( uint )(param_5 == 0) << 6;
         }
 else {
            lVar2 = ( **(code**)( param_1 + 0x18 ) )(param_1, param_3 * param_2, param_4 * param_2, param_5);
            uVar3 = -(uint)(lVar2 == 0) & 0x40;
            if (lVar2 != 0) {
               param_5 = lVar2;
            }

         }

      }

   }

   *param_6 = uVar3;
   return param_5;
}
void FT_CMap_Done(long *param_1) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   long lVar4;
   undefined8 uVar5;
   long lVar6;
   int iVar7;
   long lVar8;
   int iVar9;
   long in_FS_OFFSET;
   int local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (long*)0x0) {
      lVar2 = *param_1;
      iVar1 = *(int*)( lVar2 + 0x48 );
      if (0 < iVar1) {
         lVar4 = *(long*)( lVar2 + 0x50 );
         lVar6 = (long)iVar1;
         lVar8 = 0;
         do {
            if (*(long**)( lVar4 + lVar8 * 8 ) == param_1) {
               uVar3 = *(undefined8*)( lVar4 + -8 + lVar6 * 8 );
               lVar4 = ft_mem_qrealloc(*(undefined8*)( lVar2 + 0xb8 ), 8, lVar6, (long)( iVar1 + -1 ), lVar4, &local_34);
               *(long*)( lVar2 + 0x50 ) = lVar4;
               if (local_34 == 0) {
                  iVar1 = *(int*)( lVar2 + 0x48 );
                  iVar7 = (int)lVar8 + 1;
                  lVar6 = (long)iVar7;
                  iVar9 = iVar1 + -1;
                  while (iVar7 < iVar1) {
                     uVar5 = uVar3;
                     if (iVar9 != (int)lVar6) {
                        uVar5 = *(undefined8*)( lVar4 + lVar6 * 8 );
                     }

                     *(undefined8*)( lVar4 + -8 + lVar6 * 8 ) = uVar5;
                     lVar6 = lVar6 + 1;
                     iVar7 = (int)lVar6;
                  }
;
                  *(int*)( lVar2 + 0x48 ) = iVar9;
                  if (*(long**)( lVar2 + 0xa8 ) == param_1) {
                     *(undefined8*)( lVar2 + 0xa8 ) = 0;
                  }

                  lVar2 = *(long*)( *param_1 + 0xb8 );
                  if (*(code**)( param_1[2] + 0x10 ) != (code*)0x0) {
                     ( **(code**)( param_1[2] + 0x10 ) )(param_1);
                  }

                  if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Could not recover jumptable at 0x0010c4e8. Too many branches */
                     /* WARNING: Treating indirect jump as call */
                     ( **(code**)( lVar2 + 0x10 ) )(lVar2, param_1);
                     return;
                  }

                  goto LAB_0010c51e;
               }

               break;
            }

            lVar8 = lVar8 + 1;
         }
 while ( lVar8 != lVar6 );
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010c51e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
int FT_CMap_New(undefined8 *param_1, undefined8 param_2, long *param_3, undefined8 *param_4) {
   long lVar1;
   undefined8 uVar2;
   code *pcVar3;
   long lVar4;
   int iVar5;
   long *plVar6;
   long lVar7;
   long in_FS_OFFSET;
   int local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 == (undefined8*)0x0 ) || ( param_3 == (long*)0x0 ) ) || ( lVar1 = lVar1 == 0 )) {
      iVar5 = 6;
      goto LAB_0010c616;
   }

   uVar2 = *(undefined8*)( lVar1 + 0xb8 );
   plVar6 = (long*)ft_mem_alloc(uVar2, *param_1, &local_44);
   iVar5 = local_44;
   if (local_44 == 0) {
      lVar7 = *param_3;
      lVar4 = param_3[1];
      pcVar3 = (code*)param_1[1];
      plVar6[2] = (long)param_1;
      *plVar6 = lVar7;
      plVar6[1] = lVar4;
      if (( pcVar3 == (code*)0x0 ) || ( local_44 = local_44 == 0 )) {
         lVar7 = ft_mem_qrealloc(uVar2, 8, (long)*(int*)( lVar1 + 0x48 ), (long)( *(int*)( lVar1 + 0x48 ) + 1 ), *(undefined8*)( lVar1 + 0x50 ), &local_44);
         *(long*)( lVar1 + 0x50 ) = lVar7;
         if (local_44 == 0) {
            iVar5 = *(int*)( lVar1 + 0x48 );
            *(int*)( lVar1 + 0x48 ) = iVar5 + 1;
            *(long**)( lVar7 + (long)iVar5 * 8 ) = plVar6;
            iVar5 = local_44;
            goto joined_r0x0010c610;
         }

      }

      iVar5 = local_44;
      lVar1 = *(long*)( *plVar6 + 0xb8 );
      if (*(code**)( plVar6[2] + 0x10 ) != (code*)0x0) {
         ( **(code**)( plVar6[2] + 0x10 ) )(plVar6);
      }

      ( **(code**)( lVar1 + 0x10 ) )(lVar1, plVar6);
      plVar6 = (long*)0x0;
   }

   joined_r0x0010c610:if (param_4 != (undefined8*)0x0) {
      *param_4 = plVar6;
   }

   LAB_0010c616:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar5;
}
long ft_mem_realloc(undefined8 param_1, long param_2, long param_3, long param_4, undefined8 param_5, int *param_6) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined4 local_44;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = ft_mem_qrealloc();
   if (( ( local_44 == 0 ) && ( lVar2 != 0 ) ) && ( param_3 < param_4 )) {
      memset((void*)( lVar2 + param_2 * param_3 ), 0, ( param_4 - param_3 ) * param_2);
   }

   *param_6 = local_44;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int FT_GlyphLoader_CreateExtra(undefined8 *param_1) {
   int iVar1;
   long lVar2;
   long in_FS_OFFSET;
   int local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = 0;
   if (( *(int*)( param_1 + 1 ) != 0 ) && ( param_1[8] == 0 )) {
      lVar2 = ft_mem_realloc(*param_1, 0x10, 0, *(int*)( param_1 + 1 ) * 2, 0, &local_14);
      param_1[8] = lVar2;
      iVar1 = local_14;
      if (local_14 == 0) {
         *(undefined1*)( (long)param_1 + 0x14 ) = 1;
         param_1[9] = lVar2 + ( ulong ) * (uint*)( param_1 + 1 ) * 0x10;
         FT_GlyphLoader_Adjust_Points(param_1);
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int FT_GlyphLoader_CheckPoints(undefined8 *param_1, int param_2, int param_3) {
   uint uVar1;
   bool bVar2;
   uint uVar3;
   int iVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   long lVar7;
   int iVar8;
   ulong uVar9;
   uint uVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   int local_44;
   long local_40;
   uVar6 = *param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_44 = FT_GlyphLoader_CreateExtra();
   iVar8 = local_44;
   if (local_44 != 0) goto LAB_0010c8a0;
   uVar1 = *(uint*)( param_1 + 1 );
   uVar3 = (int)*(short*)( (long)param_1 + 0x1a ) + (int)*(short*)( (long)param_1 + 0x62 ) + param_2;
   if (uVar1 < uVar3) {
      if (uVar3 < 0x8000) {
         uVar9 = (ulong)uVar1;
         uVar10 = ( uVar1 >> 1 ) + uVar1;
         if (uVar10 < uVar3) {
            uVar10 = uVar3;
         }

         uVar3 = uVar10 + 7 & 0xfffffff8;
         if (0x7fff < uVar3) {
            uVar3 = 0x7fff;
         }

         uVar11 = (ulong)uVar3;
         uVar5 = ft_mem_realloc(uVar6, 0x10, uVar9, uVar11, param_1[4], &local_44);
         param_1[4] = uVar5;
         iVar8 = local_44;
         if (local_44 == 0) {
            uVar5 = ft_mem_realloc(uVar6, 1, uVar9, uVar11, param_1[5], &local_44);
            param_1[5] = uVar5;
            iVar8 = local_44;
            if (local_44 == 0) {
               if (*(char*)( (long)param_1 + 0x14 ) != '\0') {
                  lVar7 = ft_mem_realloc(uVar6, 0x10, uVar1 * 2, uVar3 * 2, param_1[8], &local_44);
                  param_1[8] = lVar7;
                  iVar8 = local_44;
                  if (local_44 != 0) goto LAB_0010c8a0;
                  memmove((void*)( lVar7 + uVar11 * 0x10 ), (void*)( lVar7 + uVar9 * 0x10 ), uVar9 * 0x10);
                  param_1[9] = uVar11 * 0x10 + param_1[8];
               }

               *(uint*)( param_1 + 1 ) = uVar3;
               bVar2 = true;
               goto LAB_0010c8d3;
            }

         }

      }
 else {
         LAB_0010c908:iVar8 = 10;
      }

   }
 else {
      bVar2 = false;
      LAB_0010c8d3:iVar4 = FT_GlyphLoader_CreateExtra(param_1);
      local_44 = iVar4;
      iVar8 = iVar4;
      if (iVar4 == 0) {
         uVar1 = *(uint*)( (long)param_1 + 0xc );
         uVar3 = (int)*(short*)( param_1 + 3 ) + (int)*(short*)( param_1 + 0xc ) + param_3;
         if (uVar3 <= uVar1) {
            if (bVar2) {
               FT_GlyphLoader_Adjust_Points(param_1);
            }

            goto LAB_0010c8a8;
         }

         if (0x7fff < uVar3) goto LAB_0010c908;
         uVar10 = ( uVar1 >> 1 ) + uVar1;
         if (uVar3 <= uVar10) {
            uVar3 = uVar10;
         }

         uVar3 = uVar3 + 3 & 0xfffffffc;
         if (0x7fff < uVar3) {
            uVar3 = 0x7fff;
         }

         uVar6 = ft_mem_realloc(uVar6, 2, uVar1, uVar3, param_1[6], &local_44);
         param_1[6] = uVar6;
         iVar8 = local_44;
         if (local_44 == 0) {
            *(uint*)( (long)param_1 + 0xc ) = uVar3;
            FT_GlyphLoader_Adjust_Points(param_1);
            goto LAB_0010c8a8;
         }

      }

   }

   LAB_0010c8a0:FT_GlyphLoader_Reset(param_1);
   iVar4 = iVar8;
   LAB_0010c8a8:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar4;
}
int FT_GlyphLoader_CheckSubGlyphs(undefined8 *param_1, int param_2) {
   long lVar1;
   uint uVar2;
   long in_FS_OFFSET;
   int local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = param_2 + *(int*)( param_1 + 10 ) + *(int*)( param_1 + 0x13 );
   if (*(uint*)( param_1 + 2 ) < uVar2) {
      uVar2 = uVar2 + 1 & 0xfffffffe;
      lVar1 = ft_mem_realloc(*param_1, 0x30, *(uint*)( param_1 + 2 ), uVar2, param_1[0xb], &local_24);
      param_1[0xb] = lVar1;
      if (local_24 != 0) goto LAB_0010ca7c;
      *(uint*)( param_1 + 2 ) = uVar2;
      if (lVar1 != 0) {
         lVar1 = lVar1 + ( ulong ) * (uint*)( param_1 + 10 ) * 0x30;
      }

      param_1[0x14] = lVar1;
   }

   local_24 = 0;
   LAB_0010ca7c:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_24;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int FT_Outline_New(long *param_1, uint param_2, uint param_3, undefined4 *param_4) {
   long lVar1;
   undefined8 uVar2;
   int iVar3;
   long in_FS_OFFSET;
   int local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (long*)0x0) {
      iVar3 = 0x21;
   }
 else {
      lVar1 = *param_1;
      if (( param_4 != (undefined4*)0x0 ) && ( lVar1 != 0 )) {
         *param_4 = 0;
         *(undefined8*)( param_4 + 6 ) = 0;
         param_4[8] = 0;
         *(undefined1(*) [16])( param_4 + 2 ) = (undefined1[16])0x0;
         if (( -1 < (int)param_3 ) && ( param_3 <= param_2 )) {
            iVar3 = 10;
            if (param_2 < 0x8000) {
               uVar2 = ft_mem_realloc(lVar1, 0x10, 0, param_2, 0, &local_44);
               *(undefined8*)( param_4 + 2 ) = uVar2;
               if (local_44 == 0) {
                  uVar2 = ft_mem_realloc(lVar1, 1, 0, param_2, 0, &local_44);
                  *(undefined8*)( param_4 + 4 ) = uVar2;
                  if (local_44 == 0) {
                     uVar2 = ft_mem_realloc(lVar1, 2, 0, (long)(int)param_3, 0, &local_44);
                     *(undefined8*)( param_4 + 6 ) = uVar2;
                     if (local_44 == 0) {
                        param_4[8] = param_4[8] | 1;
                        *(short*)( (long)param_4 + 2 ) = (short)param_2;
                        *(short*)param_4 = (short)param_3;
                        iVar3 = local_44;
                        goto LAB_0010cbdd;
                     }

                  }

               }

               param_4[8] = param_4[8] | 1;
               FT_Outline_Done(param_1, param_4);
               iVar3 = local_44;
            }

            goto LAB_0010cbdd;
         }

      }

      iVar3 = 6;
   }

   LAB_0010cbdd:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int hash_insert(undefined8 param_1, undefined8 param_2, uint *param_3, long param_4) {
   uint uVar1;
   uint uVar2;
   long *plVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   long *plVar6;
   long *plVar7;
   long in_FS_OFFSET;
   int local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar3 = (long*)hash_bucket(param_1, param_3);
   if (*plVar3 == 0) {
      puVar4 = (undefined8*)( **(code**)( param_4 + 8 ) )(param_4, 0x10);
      if (puVar4 == (undefined8*)0x0) {
         local_34 = 0x40;
         goto LAB_0010cca1;
      }

      *plVar3 = (long)puVar4;
      *puVar4 = param_1;
      puVar4[1] = param_2;
      uVar2 = param_3[2];
      if (*param_3 <= uVar2) {
         uVar2 = param_3[1];
         plVar3 = *(long**)( param_3 + 8 );
         uVar1 = uVar2 * 2;
         param_3[1] = uVar1;
         *param_3 = uVar1 / 3;
         uVar5 = ft_mem_realloc(param_4, 8, 0, uVar1, 0, &local_34);
         *(undefined8*)( param_3 + 8 ) = uVar5;
         if (local_34 != 0) goto LAB_0010cca1;
         if (uVar2 != 0) {
            plVar7 = plVar3;
            do {
               if ((undefined8*)*plVar7 != (undefined8*)0x0) {
                  plVar6 = (long*)hash_bucket(*(undefined8*)*plVar7, param_3);
                  *plVar6 = *plVar7;
               }

               plVar7 = plVar7 + 1;
            }
 while ( plVar3 + uVar2 != plVar7 );
         }

         if (plVar3 == (long*)0x0) {
            uVar2 = param_3[2];
         }
 else {
            ( **(code**)( param_4 + 0x10 ) )(param_4, plVar3);
            uVar2 = param_3[2];
         }

      }

      param_3[2] = uVar2 + 1;
   }
 else {
      *(undefined8*)( *plVar3 + 8 ) = param_2;
   }

   local_34 = 0;
   LAB_0010cca1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_34;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ft_hash_str_insert(void) {
   hash_insert();
   return;
}
void ft_hash_num_insert(undefined4 param_1) {
   hash_insert(param_1);
   return;
}
void ft_mem_free(long param_1, long param_2) {
   if (param_2 != 0) {
      /* WARNING: Could not recover jumptable at 0x0010cdd9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( param_1 + 0x10 ) )();
      return;
   }

   return;
}
void *ft_mem_dup(long param_1, void *param_2, size_t param_3, uint *param_4) {
   uint uVar1;
   void *__dest;
   if (0 < (long)param_3) {
      __dest = (void*)( **(code**)( param_1 + 8 ) )(param_1, param_3);
      if (__dest == (void*)0x0) {
         uVar1 = 0x40;
      }
 else {
         if (param_2 != (void*)0x0) {
            __dest = memcpy(__dest, param_2, param_3);
         }

         uVar1 = 0;
      }

      *param_4 = uVar1;
      return __dest;
   }

   *param_4 = -(uint)(param_3 != 0) & 6;
   return (void*)0x0;
}
void *ft_mem_strdup(long param_1, char *param_2, undefined4 *param_3) {
   undefined4 uVar1;
   size_t sVar2;
   void *pvVar3;
   if (param_2 == (char*)0x0) {
      pvVar3 = (void*)0x0;
      uVar1 = 0;
   }
 else {
      sVar2 = strlen(param_2);
      pvVar3 = (void*)( **(code**)( param_1 + 8 ) )(param_1, sVar2 + 1);
      if (pvVar3 == (void*)0x0) {
         uVar1 = 0x40;
         pvVar3 = (void*)0x0;
      }
 else {
         pvVar3 = memcpy(pvVar3, param_2, sVar2 + 1);
         uVar1 = 0;
      }

   }

   *param_3 = uVar1;
   return pvVar3;
}
bool ft_mem_strcpyn(char *param_1, char *param_2, ulong param_3) {
   char cVar1;
   char *pcVar2;
   char *pcVar3;
   pcVar2 = param_1;
   if (1 < param_3) {
      pcVar3 = param_1;
      do {
         cVar1 = *param_2;
         pcVar2 = pcVar3;
         if (cVar1 == '\0') break;
         pcVar2 = pcVar3 + 1;
         param_2 = param_2 + 1;
         *pcVar3 = cVar1;
         pcVar3 = pcVar2;
      }
 while ( pcVar2 != param_1 + ( param_3 - 1 ) );
   }

   *pcVar2 = '\0';
   return *param_2 != '\0';
}
long FT_List_Find(long *param_1, long param_2) {
   long lVar1;
   if (param_1 == (long*)0x0) {
      return 0;
   }

   lVar1 = *param_1;
   if (lVar1 == 0) {
      return lVar1;
   }

   do {
      if (*(long*)( lVar1 + 0x10 ) == param_2) {
         return lVar1;
      }

      lVar1 = *(long*)( lVar1 + 8 );
   }
 while ( lVar1 != 0 );
   return lVar1;
}
void FT_List_Add(undefined8 *param_1, long *param_2) {
   long lVar1;
   if (( param_1 != (undefined8*)0x0 ) && ( param_2 != (long*)0x0 )) {
      lVar1 = param_1[1];
      param_2[1] = 0;
      *param_2 = lVar1;
      if (lVar1 == 0) {
         *param_1 = param_2;
      }
 else {
         *(long**)( lVar1 + 8 ) = param_2;
      }

      param_1[1] = param_2;
   }

   return;
}
void FT_List_Insert(undefined8 *param_1, undefined8 *param_2) {
   undefined8 *puVar1;
   if (( param_1 != (undefined8*)0x0 ) && ( param_2 != (undefined8*)0x0 )) {
      puVar1 = (undefined8*)*param_1;
      *param_2 = 0;
      param_2[1] = puVar1;
      if (puVar1 == (undefined8*)0x0) {
         param_1[1] = param_2;
      }
 else {
         *puVar1 = param_2;
      }

      *param_1 = param_2;
   }

   return;
}
void FT_List_Remove(undefined8 *param_1, long *param_2) {
   long lVar1;
   long *plVar2;
   if (( param_1 != (undefined8*)0x0 ) && ( param_2 != (long*)0x0 )) {
      lVar1 = *param_2;
      plVar2 = (long*)param_2[1];
      if (lVar1 == 0) {
         *param_1 = plVar2;
      }
 else {
         *(long**)( lVar1 + 8 ) = plVar2;
      }

      if (plVar2 != (long*)0x0) {
         *plVar2 = lVar1;
         return;
      }

      param_1[1] = lVar1;
   }

   return;
}
void FT_List_Up(undefined8 *param_1, long *param_2) {
   long lVar1;
   long *plVar2;
   undefined8 *puVar3;
   if (( ( param_1 != (undefined8*)0x0 ) && ( param_2 != (long*)0x0 ) ) && ( lVar1 = lVar1 != 0 )) {
      plVar2 = (long*)param_2[1];
      *(long**)( lVar1 + 8 ) = plVar2;
      if (plVar2 == (long*)0x0) {
         param_1[1] = lVar1;
      }
 else {
         *plVar2 = lVar1;
      }

      puVar3 = (undefined8*)*param_1;
      *param_2 = 0;
      param_2[1] = (long)puVar3;
      *puVar3 = param_2;
      *param_1 = param_2;
   }

   return;
}
undefined8 FT_List_Iterate(long *param_1, code *param_2, undefined8 param_3) {
   long lVar1;
   undefined8 uVar2;
   long lVar3;
   if (param_1 == (long*)0x0) {
      return 6;
   }

   if (param_2 != (code*)0x0) {
      lVar3 = *param_1;
      do {
         if (lVar3 == 0) {
            return 0;
         }

         lVar1 = *(long*)( lVar3 + 8 );
         uVar2 = ( *param_2 )(lVar3, param_3);
         lVar3 = lVar1;
      }
 while ( (int)uVar2 == 0 );
      return uVar2;
   }

   return 6;
}
void FT_List_Finalize(undefined1 (*param_1)[16], code *param_2, long param_3, undefined8 param_4) {
   long lVar1;
   long lVar2;
   if (param_1 == (undefined1(*) [16])0x0) {
      return;
   }

   if (param_3 != 0) {
      lVar2 = *(long*)*param_1;
      while (lVar2 != 0) {
         lVar1 = *(long*)( lVar2 + 8 );
         if (param_2 != (code*)0x0) {
            ( *param_2 )(param_3, *(undefined8*)( lVar2 + 0x10 ), param_4);
         }

         ( **(code**)( param_3 + 0x10 ) )(param_3, lVar2);
         lVar2 = lVar1;
      }
;
      *param_1 = (undefined1[16])0x0;
   }

   return;
}
void FT_Request_Metrics_cold(undefined8 param_1) {
   FUN_00102aaf(param_1, 0);
   return;
}

