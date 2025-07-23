/* renormalizeValue(double, Triple const&, TripleDistances const&, bool) */double renormalizeValue(double param_1, Triple *param_2, TripleDistances *param_3, bool param_4) {
   double *pdVar1;
   long in_FS_OFFSET;
   double dVar2;
   double dVar3;
   ulong uVar4;
   double dVar5;
   double local_50[2];
   double local_40;
   undefined8 local_38;
   undefined8 uStack_30;
   ulong local_28;
   ulong uStack_20;
   ulong local_18;
   long local_10;
   local_40 = *(double*)param_2;
   dVar2 = *(double*)( param_2 + 8 );
   local_50[0] = param_1;
   dVar5 = *(double*)( param_2 + 0x10 );
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_4) {
      pdVar1 = local_50;
      local_50[0] = dVar5;
      if (param_1 < local_40) {
         pdVar1 = &local_40;
         if (dVar5 < local_40) goto LAB_0010107d;
      }
 else if (dVar5 < param_1) goto LAB_0010107d;
      local_50[0] = *pdVar1;
   }

   LAB_0010107d:dVar3 = 0.0;
   if (dVar2 != local_50[0]) {
      if (dVar2 < 0.0) {
         uStack_30 = *(undefined8*)param_3;
         local_38 = *(undefined8*)( param_3 + 8 );
         local_28 = (ulong)dVar5 ^ _LC3;
         uStack_20 = (ulong)dVar2 ^ _LC3;
         local_18 = (ulong)local_40 ^ _LC3;
         uVar4 = renormalizeValue((double)( (ulong)local_50[0] ^ _LC3 ), (Triple*)&local_28, (TripleDistances*)&local_38, param_4);
         dVar3 = (double)( uVar4 ^ _LC3 );
      }
 else if (dVar2 < local_50[0]) {
         dVar3 = ( local_50[0] - dVar2 ) / ( dVar5 - dVar2 );
      }
 else if (0.0 <= local_40) {
         dVar3 = ( local_50[0] - dVar2 ) / ( dVar2 - local_40 );
      }
 else {
         dVar5 = *(double*)( param_3 + 8 ) * dVar2;
         if (local_50[0] < 0.0) {
            dVar2 = dVar5 - local_50[0] * *(double*)param_3;
         }
 else {
            dVar2 = ( dVar2 - local_50[0] ) * *(double*)( param_3 + 8 );
         }

         dVar3 = (double)( (ulong)dVar2 ^ _LC3 ) / ( dVar5 - local_40 * *(double*)param_3 );
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return dVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* rebase_tent(Triple, Triple, TripleDistances) */uint *rebase_tent(undefined8 param_1, undefined8 param_2, uint *param_3) {
   ulong uVar1;
   double *pdVar2;
   void *pvVar3;
   uint uVar4;
   uint uVar5;
   uint uVar6;
   double *pdVar7;
   long in_FS_OFFSET;
   double dVar8;
   double dVar9;
   double dVar10;
   double dVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   undefined8 in_stack_00000020;
   undefined8 in_stack_00000028;
   undefined8 in_stack_00000030;
   undefined8 local_68;
   undefined8 local_60;
   int local_58;
   uint local_54;
   double *local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = param_1;
   local_60 = param_2;
   _solve(&local_58);
   for (int i = 0; i < 4; i++) {
      param_3[i] = 0;
   }

   pdVar7 = local_50;
   joined_r0x00101295:do {
      if (pdVar7 == local_50 + (ulong)local_54 * 4) {
         if (local_58 != 0) {
            free(local_50);
         }

         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return param_3;
      }

      dVar11 = *pdVar7;
      if (dVar11 != 0.0) {
         if (( ( pdVar7[1] != 0.0 ) || ( pdVar7[2] != 0.0 ) ) || ( pdVar7[3] != 0.0 )) {
            dVar9 = pdVar7[2];
            dVar10 = pdVar7[3];
            dVar8 = (double)renormalizeValue(pdVar7[1], (Triple*)&stack0x00000020, (TripleDistances*)&local_68, true);
            dVar9 = (double)renormalizeValue(dVar9, (Triple*)&stack0x00000020, (TripleDistances*)&local_68, true);
            dVar10 = (double)renormalizeValue(dVar10, (Triple*)&stack0x00000020, (TripleDistances*)&local_68, true);
            uVar5 = param_3[1];
            uVar1 = (ulong)uVar5;
            uVar6 = *param_3;
            if ((int)uVar5 < (int)uVar6) {
               pvVar3 = *(void**)( param_3 + 2 );
               uVar5 = uVar5 + 1;
            }
 else {
               uVar5 = uVar5 + 1;
               if ((int)uVar6 < 0) {
                  LAB_001014e5:uVar12 = __hb_CrapPool;
                  uVar13 = _realloc;
                  _free = ___stack_chk_fail;
                  __hb_CrapPool = __hb_NullPool;
                  _realloc = uVar12;
                  ___stack_chk_fail = uVar13;
                  goto LAB_001012f0;
               }

               uVar4 = uVar6;
               if (uVar6 < uVar5) {
                  do {
                     uVar4 = ( uVar4 >> 1 ) + 8 + uVar4;
                  }
 while ( uVar4 < uVar5 );
                  if (0x7ffffff < uVar4) {
                     LAB_001014e0:*param_3 = ~uVar6;
                     goto LAB_001014e5;
                  }

                  pvVar3 = realloc(*(void**)( param_3 + 2 ), (ulong)uVar4 << 5);
                  if (pvVar3 == (void*)0x0) {
                     uVar6 = *param_3;
                     if (uVar6 < uVar4) {
                        LAB_00101524:*param_3 = ~uVar6;
                        goto LAB_001014e5;
                     }

                     uVar1 = (ulong)param_3[1];
                     pvVar3 = *(void**)( param_3 + 2 );
                     dVar11 = *pdVar7;
                     uVar5 = param_3[1] + 1;
                  }
 else {
                     *(void**)( param_3 + 2 ) = pvVar3;
                     uVar1 = (ulong)param_3[1];
                     *param_3 = uVar4;
                     dVar11 = *pdVar7;
                     uVar5 = param_3[1] + 1;
                  }

               }
 else {
                  pvVar3 = *(void**)( param_3 + 2 );
               }

            }

            param_3[1] = uVar5;
            pdVar2 = (double*)( uVar1 * 0x20 + (long)pvVar3 );
            *pdVar2 = dVar11;
            pdVar2[1] = dVar8;
            pdVar2[2] = dVar9;
            pdVar2[3] = dVar10;
            pdVar7 = pdVar7 + 4;
            goto joined_r0x00101295;
         }

         uVar5 = param_3[1];
         uVar1 = (ulong)uVar5;
         uVar6 = *param_3;
         uVar4 = uVar5 + 1;
         if ((int)uVar5 < (int)uVar6) {
            LAB_001012c6:pvVar3 = *(void**)( param_3 + 2 );
         }
 else {
            if ((int)uVar6 < 0) goto LAB_001014e5;
            uVar5 = uVar6;
            if (uVar4 <= uVar6) goto LAB_001012c6;
            do {
               uVar5 = uVar5 + 8 + ( uVar5 >> 1 );
            }
 while ( uVar5 < uVar4 );
            if (0x7ffffff < uVar5) goto LAB_001014e0;
            pvVar3 = realloc(*(void**)( param_3 + 2 ), (ulong)uVar5 << 5);
            if (pvVar3 == (void*)0x0) {
               uVar6 = *param_3;
               if (uVar6 < uVar5) goto LAB_00101524;
               uVar1 = (ulong)param_3[1];
               pvVar3 = *(void**)( param_3 + 2 );
               uVar4 = param_3[1] + 1;
            }
 else {
               *(void**)( param_3 + 2 ) = pvVar3;
               uVar1 = (ulong)param_3[1];
               *param_3 = uVar5;
               uVar4 = param_3[1] + 1;
            }

         }

         dVar11 = *pdVar7;
         dVar9 = pdVar7[1];
         param_3[1] = uVar4;
         pdVar2 = (double*)( uVar1 * 0x20 + (long)pvVar3 );
         *pdVar2 = dVar11;
         pdVar2[1] = dVar9;
         dVar11 = pdVar7[3];
         pdVar2[2] = pdVar7[2];
         pdVar2[3] = dVar11;
      }

      LAB_001012f0:pdVar7 = pdVar7 + 4;
   }
 while ( true );
}

