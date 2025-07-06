undefined8 do_callout_dfa(long param_1, undefined8 param_2, long param_3, long param_4, long param_5, long param_6, ulong *param_7) {
   short sVar1;
   ushort uVar2;
   long lVar3;
   code *UNRECOVERED_JUMPTABLE_00;
   long lVar4;
   undefined8 uVar5;
   sVar1 = *(short*)( param_1 + param_6 * 2 );
   lVar3 = *(long*)( param_5 + 0x90 );
   param_6 = param_6 * 2;
   if (sVar1 == 0x76) {
      *param_7 = (ulong)DAT_00109076;
      UNRECOVERED_JUMPTABLE_00 = *(code**)( param_5 + 0xa0 );
   } else {
      *param_7 = ( ulong ) * (ushort*)( param_1 + 6 + param_6 );
      UNRECOVERED_JUMPTABLE_00 = *(code**)( param_5 + 0xa0 );
   }
   if (UNRECOVERED_JUMPTABLE_00 != (code*)0x0) {
      *(undefined8*)( lVar3 + 0x10 ) = param_2;
      lVar4 = *(long*)( param_5 + 0x20 );
      *(long*)( lVar3 + 0x38 ) = param_4 - lVar4 >> 1;
      uVar2 = *(ushort*)( param_1 + 2 + param_6 );
      *(long*)( lVar3 + 0x30 ) = param_3 - lVar4 >> 1;
      *(ulong*)( lVar3 + 0x40 ) = (ulong)uVar2;
      *(ulong*)( lVar3 + 0x48 ) = ( ulong ) * (ushort*)( param_1 + 4 + param_6 );
      if (sVar1 == 0x76) {
         uVar2 = *(ushort*)( param_1 + 6 + param_6 );
         uVar5 = *(undefined8*)( param_5 + 0x98 );
         *(undefined8*)( lVar3 + 0x50 ) = 0;
         *(undefined8*)( lVar3 + 0x60 ) = 0;
         *(uint*)( lVar3 + 4 ) = (uint)uVar2;
         *(undefined8*)( lVar3 + 0x58 ) = 0;
         /* WARNING: Could not recover jumptable at 0x001000f6. Too many branches */
         /* WARNING: Treating indirect jump as call */
         uVar5 = ( *UNRECOVERED_JUMPTABLE_00 )(lVar3, uVar5);
         return uVar5;
      }
      uVar2 = *(ushort*)( param_1 + 8 + param_6 );
      *(undefined4*)( lVar3 + 4 ) = 0;
      *(long*)( lVar3 + 0x60 ) = param_1 + 0xc + param_6;
      uVar5 = *(undefined8*)( param_5 + 0x98 );
      *(ulong*)( lVar3 + 0x50 ) = (ulong)uVar2;
      *(ulong*)( lVar3 + 0x58 ) = *param_7 - 7;
      /* WARNING: Could not recover jumptable at 0x001000a7. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar5 = ( *UNRECOVERED_JUMPTABLE_00 )(lVar3, uVar5);
      return uVar5;
   }
   return 0;
}undefined8 more_workspace(undefined8 *param_1, int param_2, undefined8 *param_3) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   long lVar3;
   uint uVar4;
   ulong uVar5;
   puVar1 = (undefined8*)*param_1;
   puVar2 = (undefined8*)*puVar1;
   if (puVar2 != (undefined8*)0x0) {
      uVar4 = *(uint*)( puVar2 + 1 );
      goto LAB_0010011a;
   }
   uVar4 = *(uint*)( param_3 + 10 );
   lVar3 = param_3[0xb];
   if (*(uint*)( puVar1 + 1 ) < 0x1fffffff) {
      uVar5 = ( ulong )(*(uint*)( puVar1 + 1 ) * 2 >> 8);
      if ((ulong)uVar4 < uVar5 + lVar3) {
         LAB_0010015c:uVar5 = ( ulong )(uVar4 - (int)lVar3);
      }
      uVar4 = (int)uVar5 << 8;
      if ((ulong)uVar4 < ( ulong )(param_2 + 0x3ec)) {
         return 0xffffffc1;
      }
      lVar3 = (ulong)uVar4 << 2;
   } else {
      if ((ulong)uVar4 < lVar3 + 0x3fffffU) goto LAB_0010015c;
      lVar3 = 0xfffffc00;
      uVar4 = 0x3fffff00;
      uVar5 = 0x3fffff;
   }
   puVar2 = (undefined8*)( *(code*)*param_3 )(lVar3, param_3[2]);
   if (puVar2 == (undefined8*)0x0) {
      return 0xffffffd0;
   }
   param_3[0xb] = param_3[0xb] + uVar5;
   *puVar2 = 0;
   *(uint*)( puVar2 + 1 ) = uVar4;
   *puVar1 = puVar2;
   LAB_0010011a:*(uint*)( (long)puVar2 + 0xc ) = uVar4 - 4;
   *param_1 = puVar2;
   return 0;
}int internal_dfa_match(long param_1, ushort *param_2, ushort *param_3, long param_4, long *param_5, uint param_6, uint *param_7, int param_8, uint param_9, long param_10) {
   int iVar1;
   long lVar2;
   long *plVar3;
   long lVar4;
   byte bVar5;
   ushort uVar6;
   ushort *puVar7;
   ushort *puVar8;
   long lVar9;
   long lVar10;
   undefined8 uVar11;
   long *plVar12;
   long lVar13;
   long lVar14;
   int iVar15;
   int iVar16;
   int iVar17;
   bool bVar18;
   bool bVar19;
   bool bVar20;
   bool bVar21;
   int iVar22;
   uint uVar23;
   uint uVar24;
   uint uVar25;
   uint uVar26;
   long lVar27;
   uint *puVar28;
   ulong uVar29;
   ulong uVar30;
   uint *puVar31;
   uint *puVar32;
   ushort *puVar33;
   ushort *puVar34;
   uint *puVar35;
   uint uVar36;
   ushort uVar37;
   long lVar38;
   uint *puVar39;
   uint uVar40;
   ulong uVar41;
   long lVar42;
   uint uVar43;
   int iVar44;
   uint uVar45;
   uint uVar46;
   uint *puVar47;
   int iVar48;
   int iVar49;
   uint uVar50;
   long in_FS_OFFSET;
   bool bVar51;
   bool bVar52;
   bool bVar53;
   uint *local_170;
   ushort *local_150;
   int local_13c;
   ushort *local_128;
   long local_118;
   uint local_b8;
   int local_b0;
   undefined8 local_70;
   long *local_68;
   ushort *puStack_60;
   long local_58;
   uint local_50;
   long local_40;
   uVar43 = *(uint*)( param_1 + 0x70 );
   local_118 = param_10;
   puVar7 = *(ushort**)( param_1 + 0x20 );
   puVar8 = *(ushort**)( param_1 + 0x28 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar9 = *(long*)( param_1 + 0x18 );
   uVar45 = uVar43 & 0x80000;
   uVar24 = *(uint*)( param_1 + 0x68 );
   *(uint*)( param_1 + 0x68 ) = uVar24 + 1;
   if (*(uint*)( param_1 + 0x60 ) <= uVar24) {
      iVar22 = -0x2f;
      goto LAB_00100678;
   }
   iVar1 = param_9 + 1;
   if (*(uint*)( param_1 + 100 ) < param_9) {
      iVar22 = -0x35;
      goto LAB_00100678;
   }
   puVar47 = param_7 + 2;
   iVar17 = ( ( param_8 + -2 ) / 6 ) * 6;
   iVar15 = iVar17 / 6;
   lVar10 = *(long*)( param_1 + 0x40 );
   local_170 = puVar47 + (long)iVar15 * 3;
   uVar37 = *param_2;
   local_128 = param_3;
   if (( ushort )(uVar37 - 0x81) < 2) {
      uVar30 = 0;
      puVar34 = param_2;
      do {
         if (uVar30 < puVar34[3]) {
            uVar30 = (ulong)puVar34[3];
         }
         puVar34 = puVar34 + puVar34[1];
      } while ( *puVar34 == 0x78 );
      if (uVar45 == 0) {
         uVar41 = (long)param_3 - (long)puVar7 >> 1;
         if (uVar30 < uVar41) {
            uVar41 = uVar30;
         }
         local_128 = param_3 + -uVar41;
      } else {
         uVar41 = 0;
         if (( uVar30 != 0 ) && ( puVar7 < param_3 )) {
            while (local_128 = param_3 + -1,puVar7 < local_128) {
               puVar34 = param_3 + -1;
               param_3 = param_3 + -2;
               if (( *puVar34 & 0xfc00 ) != 0xdc00) {
                  param_3 = local_128;
               }
               uVar41 = uVar41 + 1;
               local_128 = param_3;
               if (( uVar30 <= uVar41 ) || ( param_3 <= puVar7 )) goto LAB_001007a6;
            };
            uVar41 = uVar41 + 1;
         }
      }
      LAB_001007a6:if (local_128 < *(ushort**)( param_1 + 0x30 )) {
         *(ushort**)( param_1 + 0x30 ) = local_128;
      }
      uVar30 = 0;
      puVar32 = local_170;
      do {
         uVar24 = 0;
         iVar22 = 0;
         if (param_2[2] == 0x7d) {
            uVar24 = (uint)param_2[3];
            puVar31 = puVar32;
            if (param_2[3] <= uVar41) {
               iVar22 = 2;
               goto LAB_001007d0;
            }
         } else {
            LAB_001007d0:if (iVar15 <= (int)uVar30) goto LAB_00100381;
            puVar32[1] = 0;
            uVar30 = ( ulong )((int)uVar30 + 1);
            puVar31 = puVar32 + 3;
            *puVar32 = -(iVar22 + 2 + (int)((long)param_2 - lVar9 >> 1));
            puVar32[2] = (int)uVar41 - uVar24;
         }
         param_2 = param_2 + param_2[1];
         puVar32 = puVar31;
      } while ( *param_2 == 0x78 );
      LAB_00100390:uVar41 = (ulong)(int)uVar30;
   } else {
      if (( iVar1 != 1 ) || ( ( *(byte*)( param_1 + 0x6c ) & 0x40 ) == 0 )) {
         uVar30 = 0;
         iVar22 = ( ( ushort )(uVar37 - 0x8e) < 2 || ( ushort )(uVar37 - 0x89) < 2 ) + 2;
         puVar32 = local_170;
         do {
            iVar49 = (int)uVar30;
            uVar30 = ( ulong )(iVar49 + 1);
            if (iVar15 <= iVar49) goto LAB_00100381;
            puVar32[1] = 0;
            *puVar32 = iVar22 + (int)( (long)param_2 - lVar9 >> 1 );
            param_2 = param_2 + param_2[1];
            iVar22 = 2;
            puVar32 = puVar32 + 3;
         } while ( *param_2 == 0x78 );
         goto LAB_00100390;
      }
      do {
         param_2 = param_2 + param_2[1];
      } while ( *param_2 == 0x78 );
      uVar41 = (ulong)(int)param_7[1];
      uVar30 = uVar41;
      if (*param_7 == 0) {
         memcpy(local_170, puVar47, uVar41 * 0xc);
      }
   }
   bVar18 = false;
   iVar49 = -1;
   bVar51 = uVar45 != 0;
   uVar43 = uVar43 & 0xa0000;
   bVar52 = uVar43 == 0;
   lVar2 = lVar10 + 0x340;
   lVar27 = lVar10 + 0x100;
   local_150 = local_128;
   uVar24 = 0;
   uVar30 = uVar30 & 0xffffffff;
   LAB_0010040b:puVar32 = puVar47;
   if (*(ushort**)( param_1 + 0x38 ) < local_150) {
      *(ushort**)( param_1 + 0x38 ) = local_150;
   }
   param_7[1] = (uint)uVar30;
   *param_7 = uVar24 ^ 1;
   puVar47 = local_170 + uVar41 * 3;
   if (local_150 < puVar8) {
      uVar37 = *local_150;
      local_13c = 1;
      uVar24 = (uint)uVar37;
      if (( uVar45 != 0 ) && ( ( uVar37 & 0xfc00 ) == 0xd800 )) {
         local_13c = 2;
         uVar24 = ( ( uVar37 & 0x3ff ) << 10 | local_150[1] & 0x3ff ) + 0x10000;
      }
   } else {
      uVar24 = 0xffffffff;
      local_13c = 0;
   }
   bVar19 = bVar18;
   if (0 < (int)(uint)uVar30) {
      iVar44 = 0;
      iVar48 = 0;
      uVar30 = uVar30 & 0xffffffff;
      bVar20 = false;
      local_b8 = 0;
      puVar31 = puVar32;
      bVar53 = false;
      LAB_00100503:puVar35 = local_170 + (long)iVar44 * 3;
      uVar40 = *puVar35;
      bVar18 = bVar53;
      if (-1 < (int)uVar40) goto LAB_0010051a;
      if ((int)puVar35[2] < 1) {
         uVar40 = -uVar40;
         *puVar35 = uVar40;
         goto LAB_0010051a;
      }
      iVar22 = iVar48 + 1;
      if (iVar48 < iVar15) {
         uVar11 = *(undefined8*)puVar35;
         puVar28 = puVar31 + 3;
         puVar31[2] = puVar35[2] - 1;
         iVar44 = iVar44 + 1;
         *(undefined8*)puVar31 = uVar11;
         iVar48 = iVar22;
         if (bVar19) {
            bVar18 = bVar19;
         }
         goto LAB_001004fe;
      }
      goto LAB_00100381;
   }
   local_b8 = 0;
   bVar20 = false;
   LAB_0010433f:iVar22 = iVar49;
   if (( bVar19 ) && ( param_7[1] != local_b8 )) {
      uVar43 = *(uint*)( param_1 + 0x6c );
      if (( uVar43 & 0x20 ) != 0) {
         if (( bVar20 ) || ( ( puVar8 <= local_150 && ( ( *(ushort**)( param_1 + 0x30 ) < local_150 || ( *(int*)( param_1 + 0x7c ) != 0 ) ) ) ) )) {
            LAB_00105e0b:iVar22 = -2;
            goto LAB_00100678;
         }
         goto LAB_00105903;
      }
      if (( uVar43 & 0x10 ) == 0) goto LAB_00105903;
      if (iVar49 < 0) {
         if (( !bVar20 ) && ( ( local_150 < puVar8 || ( ( local_150 <= *(ushort**)( param_1 + 0x30 ) && ( *(int*)( param_1 + 0x7c ) == 0 ) ) ) ) )) goto LAB_00100678;
         goto LAB_00105e0b;
      }
   } else {
      LAB_00105903:if (iVar49 < 0) goto LAB_00100678;
      uVar43 = *(uint*)( param_1 + 0x6c );
   }
   if (( ( ( uVar43 | *(uint*)( param_1 + 0x70 ) ) & 0x20000000 ) != 0 ) && ( iVar22 = puVar8 <= local_150 )) {
      iVar22 = iVar49;
   }
   LAB_00100678:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar22;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_0010051a:uVar25 = (uint)uVar30;
   puVar28 = local_170;
   if (0 < iVar44) {
      do {
         if (( *puVar28 == uVar40 ) && ( puVar28[1] == puVar35[1] )) {
            iVar44 = iVar44 + 1;
            if ((int)uVar25 <= iVar44) goto LAB_00100546;
            goto LAB_00100503;
         }
         puVar28 = puVar28 + 3;
      } while ( puVar35 != puVar28 );
   }
   puVar34 = (ushort*)( lVar9 + (long)(int)uVar40 * 2 );
   uVar37 = *puVar34;
   uVar41 = (ulong)uVar37;
   bVar21 = bVar19;
   if (( local_13c == 0 ) && ( bVar21 = true ),poptable[uVar41] == '\0') {
      bVar21 = bVar19;
   }
   bVar19 = bVar21;
   bVar5 = coptable[uVar41];
   uVar26 = (uint)uVar37;
   puVar28 = puVar31;
   if (bVar5 == 0) {
      uVar23 = 0xffffffff;
      iVar22 = 0;
      LAB_001006af:if (0x1dd < uVar26) goto switchD_00100634_caseD_e;
      LAB_001006b8:if (10 < uVar26) goto LAB_001006c2;
      if (uVar26 < 4) {
         if (uVar26 != 1) {
            if (uVar26 == 2) {
               if (local_150 == puVar7 + param_4) {
                  if (iVar15 <= (int)uVar25) goto LAB_00100381;
                  iVar44 = iVar44 + 1;
                  *puVar47 = uVar40 + 1;
                  puVar47[1] = 0;
                  puVar47 = puVar47 + 3;
                  uVar30 = ( ulong )(uVar25 + 1);
               } else {
                  iVar44 = iVar44 + 1;
               }
               goto LAB_001004fe;
            }
            goto switchD_00100634_caseD_e;
         }
         if (puVar7 == local_150) {
            if (iVar15 <= (int)uVar25) goto LAB_00100381;
            iVar44 = iVar44 + 1;
            *puVar47 = uVar40 + 1;
            puVar47[1] = 0;
            puVar47 = puVar47 + 3;
            uVar30 = ( ulong )(uVar25 + 1);
         } else {
            iVar44 = iVar44 + 1;
         }
         goto LAB_001004fe;
      }
      uVar29 = 1L << ( (byte)uVar37 & 0x3f );
      if (( uVar29 & 0x540 ) != 0) {
         if (local_13c == 0) {
            iVar44 = iVar44 + 1;
         } else if (( uVar24 < 0x100 ) && ( ( *(byte*)( lVar2 + (ulong)uVar24 ) & toptable1[uVar41] ) == toptable2[uVar41] )) {
            iVar44 = iVar44 + 1;
         } else {
            if (iVar15 <= iVar48) goto LAB_00100381;
            iVar44 = iVar44 + 1;
            *puVar31 = uVar40 + 1;
            puVar31[1] = 0;
            puVar28 = puVar31 + 3;
            iVar48 = iVar48 + 1;
         }
         goto LAB_001004fe;
      }
      if (( uVar29 & 0x30 ) != 0) goto switchD_001006dc_caseD_a9;
      if (( uVar29 & 0x280 ) == 0) goto switchD_00100634_caseD_e;
      goto switchD_001006dc_caseD_b;
   }
   uVar6 = puVar34[bVar5];
   uVar23 = (uint)uVar6;
   if (( uVar45 != 0 ) && ( ( uVar6 & 0xfc00 ) == 0xd800 )) {
      iVar22 = 2;
      uVar23 = ( ( uVar6 & 0x3ff ) << 10 | puVar34[(ulong)bVar5 + 1] & 0x3ff ) + 0x10000;
      goto LAB_001006af;
   }
   if (uVar37 < 0x55) {
      iVar22 = 1;
      goto LAB_001006b8;
   }
   switch (uVar6) {
      case 0xe:
    goto switchD_00100634_caseD_e;
      case 0xf:
      case 0x10:
    uVar26 = uVar26 + 300;
    break;
      case 0x11:
    uVar41 = (ulong)(uVar26 + 0x154);
    if (0x1dd < uVar26 + 0x154) goto switchD_00100634_caseD_e;
    uVar23 = 0x11;
    goto LAB_00100956;
      case 0x12:
      case 0x13:
    uVar26 = uVar26 + 0x168;
    break;
      case 0x14:
      case 0x15:
    uVar26 = uVar26 + 0x17c;
    break;
      case 0x16:
    uVar41 = (ulong)(uVar26 + 0x140);
    if (0x1dd < uVar26 + 0x140) goto switchD_00100634_caseD_e;
    uVar23 = 0x16;
    iVar22 = 1;
    goto LAB_001006c2;
      default:
    if (0x1dd < uVar37) goto switchD_00100634_caseD_e;
    goto LAB_00100956;
   }
   uVar41 = (ulong)uVar26;
   if (0x1dd < uVar26) {
      switchD_00100634_caseD_e:iVar22 = -0x2a;
      goto LAB_00100678;
   }
   LAB_00100956:iVar22 = 1;
   LAB_001006c2:iVar16 = (int)uVar41;
   switch (iVar16) {
      case 0xb:
switchD_001006dc_caseD_b:
    if ((local_13c == 0) || (0xff < uVar24)) {
      iVar44 = iVar44 + 1;
    }
    else if ((*(byte *)(lVar2 + (ulong)uVar24) & toptable1[uVar41]) == toptable2[uVar41]) {
      iVar44 = iVar44 + 1;
    }
    else {
      if (iVar15 <= iVar48) goto LAB_00100381;
      iVar44 = iVar44 + 1;
      *puVar31 = uVar40 + 1;
      puVar31[1] = 0;
      puVar28 = puVar31 + 3;
      iVar48 = iVar48 + 1;
    }
    break;
      case 0xc:
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
    }
    else {
      puVar34 = *(ushort **)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x74) == 0) {
        if ((local_150 <= puVar34 + -(ulong)*(uint *)(param_1 + 0x78)) &&
           (*local_150 == *(ushort *)(param_1 + 0x80))) {
          if (*(uint *)(param_1 + 0x78) == 1) {
            iVar44 = iVar44 + 1;
            break;
          }
          if (local_150[1] == *(ushort *)(param_1 + 0x82)) {
            iVar44 = iVar44 + 1;
            break;
          }
        }
      }
      else if (local_150 < puVar34) {
        iVar22 = _pcre2_is_newline_16
                           (local_150,*(int *)(param_1 + 0x74),puVar34,param_1 + 0x78,bVar51);
        if (iVar22 != 0) {
          iVar44 = iVar44 + 1;
          break;
        }
        puVar34 = *(ushort **)(param_1 + 0x28);
      }
      if ((((local_150 + 1 < puVar34) || ((*(byte *)(param_1 + 0x6c) & 0x20) == 0)) ||
          (*(int *)(param_1 + 0x74) != 0)) ||
         ((*(int *)(param_1 + 0x78) != 2 || (*(ushort *)(param_1 + 0x80) != uVar24)))) {
        if (iVar15 <= iVar48) goto LAB_00100381;
        iVar44 = iVar44 + 1;
        *puVar31 = uVar40 + 1;
        puVar31[1] = 0;
        puVar28 = puVar31 + 3;
        iVar48 = iVar48 + 1;
      }
      else {
        bVar19 = true;
        iVar44 = iVar44 + 1;
        bVar20 = true;
      }
    }
    break;
      case 0xd:
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
    }
    else {
      if (iVar15 <= iVar48) goto LAB_00100381;
      iVar44 = iVar44 + 1;
      *puVar31 = uVar40 + 1;
      puVar31[1] = 0;
      puVar28 = puVar31 + 3;
      iVar48 = iVar48 + 1;
    }
    break;
      default:
    goto switchD_00100634_caseD_e;
      case 0xf:
      case 0x10:
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      break;
    }
    uVar25 = uVar24 + 0x7f;
    if (-1 < (int)uVar24) {
      uVar25 = uVar24;
    }
    lVar42 = (ulong)*(ushort *)
                     (&_pcre2_ucd_stage2_16 +
                     (long)(int)((uint)*(ushort *)
                                        (&_pcre2_ucd_stage1_16 + (long)((int)uVar25 >> 7) * 2) *
                                 0x80 + (int)uVar24 % 0x80) * 2) * 0xc;
    switch(puVar34[1]) {
    case 0:
      goto switchD_00101f25_caseD_0;
    case 1:
      bVar53 = (byte)((&DAT_00109021)[lVar42] - 8) < 2 || (&DAT_00109021)[lVar42] == '\x05';
      break;
    case 2:
      bVar53 = *(uint *)(&_pcre2_ucp_gentype_16 + (ulong)(byte)(&DAT_00109021)[lVar42] * 4) ==
               (uint)puVar34[2];
      break;
    case 3:
      bVar53 = (ushort)(byte)(&DAT_00109021)[lVar42] == puVar34[2];
      break;
    case 4:
      bVar53 = (ushort)(byte)(&_pcre2_ucd_records_16)[lVar42] == puVar34[2];
      break;
    case 5:
      uVar37 = puVar34[2];
      bVar53 = true;
      if ((byte)(&_pcre2_ucd_records_16)[lVar42] != uVar37) {
        bVar53 = (1 << ((byte)uVar37 & 0x1f) &
                 *(uint *)(&_pcre2_ucd_script_sets_16 +
                          ((ulong)(*(ushort *)(_pcre2_extuni_16 + lVar42) & 0x3ff) +
                          (ulong)(uVar37 >> 5)) * 4)) != 0;
      }
      break;
    case 6:
      bVar53 = (*(uint *)(&_pcre2_ucp_gentype_16 + (ulong)(byte)(&DAT_00109021)[lVar42] * 4) &
               0xfffffffd) == 1;
      break;
    case 7:
    case 8:
      if (uVar24 != 0x180e) {
        if (0x180e < uVar24) {
          if (uVar24 < 0x2060) {
            if (uVar24 < 0x2028) {
              if (uVar24 - 0x2000 < 0xb) goto switchD_00101f25_caseD_0;
            }
            else {
              bVar53 = true;
              if ((0x80000000000083U >> ((ulong)(uVar24 - 0x2028) & 0x3f) & 1) != 0) break;
            }
          }
          else if (uVar24 == 0x3000) goto switchD_00101f25_caseD_0;
          goto LAB_001030fd;
        }
        if (uVar24 != 0x85) {
          if (uVar24 < 0x86) {
            bVar53 = true;
            if (uVar24 < 0xe) {
              if (uVar24 < 9) {
LAB_001030fd:
                bVar53 = *(int *)(&_pcre2_ucp_gentype_16 + (ulong)(byte)(&DAT_00109021)[lVar42] * 4)
                         == 6;
              }
            }
            else if (uVar24 != 0x20) goto LAB_001030fd;
            break;
          }
          if ((uVar24 != 0xa0) && (uVar24 != 0x1680)) goto LAB_001030fd;
        }
      }
      goto switchD_00101f25_caseD_0;
    case 9:
      bVar53 = true;
      if ((*(uint *)(&_pcre2_ucp_gentype_16 + (ulong)(byte)(&DAT_00109021)[lVar42] * 4) & 0xfffffffd
          ) != 1) {
        bVar53 = ((&DAT_00109021)[lVar42] - 0xc & 0xfb) == 0;
      }
      break;
    case 10:
      puVar35 = (uint *)(&_pcre2_ucd_caseless_sets_16 + (ulong)puVar34[2] * 4);
      do {
        uVar25 = *puVar35;
        if (uVar24 < uVar25) {
          bVar53 = false;
          goto LAB_00103113;
        }
        puVar35 = puVar35 + 1;
      } while (uVar25 != uVar24);
switchD_00101f25_caseD_0:
      bVar53 = true;
      break;
    case 0xb:
      if (((uVar24 & 0xffffffdf) == 0x40) || (uVar24 == 0x24)) goto switchD_00101f25_caseD_0;
      bVar53 = uVar24 - 0xa0 < 0xd760 || 0xdfff < uVar24;
      break;
    case 0xc:
      bVar53 = *(ushort *)(_pcre2_extuni_16 + lVar42) >> 0xb == puVar34[2];
      break;
    case 0xd:
      bVar53 = (1 << ((byte)puVar34[2] & 0x1f) &
               *(uint *)(&_pcre2_ucd_boolprop_sets_16 +
                        ((ulong)(*(ushort *)(&DAT_0010902a + lVar42) & 0xfff) +
                        (ulong)(puVar34[2] >> 5)) * 4)) != 0;
      break;
    default:
      bVar53 = iVar16 != 0x10;
    }
LAB_00103113:
    if ((iVar16 == 0x10) == bVar53) {
      if (iVar15 <= iVar48) goto LAB_00100381;
      iVar44 = iVar44 + 1;
      *puVar31 = uVar40 + 3;
      puVar31[1] = 0;
      puVar28 = puVar31 + 3;
      iVar48 = iVar48 + 1;
    }
    else {
      iVar44 = iVar44 + 1;
    }
    break;
      case 0x11:
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      break;
    }
    if (uVar24 == 0xd) {
      iVar22 = iVar48 + 1;
      if (local_150 + 1 < puVar8) {
        if (local_150[1] == 10) {
          if (iVar15 <= iVar48) goto LAB_00100381;
          iVar44 = iVar44 + 1;
          *puVar31 = ~uVar40;
          puVar31[1] = 0;
          puVar31[2] = 1;
          puVar28 = puVar31 + 3;
          iVar48 = iVar22;
        }
        else {
          if (iVar15 <= iVar48) goto LAB_00100381;
          iVar44 = iVar44 + 1;
          *puVar31 = uVar40 + 1;
          puVar31[1] = 0;
          puVar28 = puVar31 + 3;
          iVar48 = iVar22;
        }
      }
      else {
        if (iVar15 <= iVar48) goto LAB_00100381;
        puVar28 = puVar31 + 3;
        *puVar31 = uVar40 + 1;
        iVar44 = iVar44 + 1;
        puVar31[1] = 0;
        iVar48 = iVar22;
        bVar18 = true;
        if ((*(byte *)(param_1 + 0x6c) & 0x20) == 0) {
          bVar18 = bVar53;
        }
      }
      break;
    }
    if (uVar24 < 0xe) {
      if (uVar24 != 10) {
        if (uVar24 - 0xb < 2) goto LAB_00104241;
LAB_001057fe:
        iVar44 = iVar44 + 1;
        break;
      }
    }
    else {
      if ((uVar24 != 0x85) && (1 < uVar24 - 0x2028)) goto LAB_001057fe;
LAB_00104241:
      if (*(short *)(param_1 + 0x88) == 2) {
        iVar44 = iVar44 + 1;
        break;
      }
    }
    if (iVar15 <= iVar48) goto LAB_00100381;
    iVar44 = iVar44 + 1;
    *puVar31 = uVar40 + 1;
    puVar31[1] = 0;
    puVar28 = puVar31 + 3;
    iVar48 = iVar48 + 1;
    break;
      case 0x12:
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      break;
    }
    if (uVar24 != 0x180e) {
      if (uVar24 < 0x180f) {
        if (uVar24 != 0xa0) {
          if (uVar24 < 0xa1) {
            if ((uVar24 != 9) && (uVar24 != 0x20)) {
LAB_0010294d:
              if (iVar15 <= iVar48) goto LAB_00100381;
              iVar44 = iVar44 + 1;
              *puVar31 = uVar40 + 1;
              puVar31[1] = 0;
              puVar28 = puVar31 + 3;
              iVar48 = iVar48 + 1;
              break;
            }
          }
          else if (uVar24 != 0x1680) goto LAB_0010294d;
        }
      }
      else if (uVar24 != 0x205f) {
        if (uVar24 < 0x2060) {
          if (uVar24 < 0x200b) {
            if (uVar24 < 0x2000) goto LAB_0010294d;
          }
          else if (uVar24 != 0x202f) goto LAB_0010294d;
        }
        else if (uVar24 != 0x3000) goto LAB_0010294d;
      }
    }
    iVar44 = iVar44 + 1;
    break;
      case 0x13:
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      break;
    }
    if (uVar24 != 0x180e) {
      if (uVar24 < 0x180f) {
        if (uVar24 != 0xa0) {
          if (uVar24 < 0xa1) {
            if ((uVar24 != 9) && (uVar24 != 0x20)) {
LAB_00102c40:
              iVar44 = iVar44 + 1;
              break;
            }
          }
          else if (uVar24 != 0x1680) goto LAB_00102c40;
        }
      }
      else if (uVar24 != 0x205f) {
        if (uVar24 < 0x2060) {
          if (uVar24 < 0x200b) {
            if (uVar24 < 0x2000) goto LAB_00102c40;
          }
          else if (uVar24 != 0x202f) goto LAB_00102c40;
        }
        else if (uVar24 != 0x3000) goto LAB_00102c40;
      }
    }
    if (iVar15 <= iVar48) goto LAB_00100381;
    iVar44 = iVar44 + 1;
    *puVar31 = uVar40 + 1;
    puVar31[1] = 0;
    puVar28 = puVar31 + 3;
    iVar48 = iVar48 + 1;
    break;
      case 0x14:
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      break;
    }
    if (uVar24 == 0x85) {
LAB_00103f74:
      iVar44 = iVar44 + 1;
    }
    else {
      if (uVar24 < 0x86) {
        if (uVar24 - 10 < 4) goto LAB_00103f74;
      }
      else if (uVar24 - 0x2028 < 2) goto LAB_00103f74;
      if (iVar15 <= iVar48) goto LAB_00100381;
      iVar44 = iVar44 + 1;
      *puVar31 = uVar40 + 1;
      puVar31[1] = 0;
      puVar28 = puVar31 + 3;
      iVar48 = iVar48 + 1;
    }
    break;
      case 0x15:
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      break;
    }
    if (uVar24 != 0x85) {
      if (uVar24 < 0x86) {
        if (3 < uVar24 - 10) {
LAB_001042f0:
          iVar44 = iVar44 + 1;
          break;
        }
      }
      else if (1 < uVar24 - 0x2028) goto LAB_001042f0;
    }
    if (iVar15 <= iVar48) goto LAB_00100381;
    iVar44 = iVar44 + 1;
    *puVar31 = uVar40 + 1;
    puVar31[1] = 0;
    puVar28 = puVar31 + 3;
    iVar48 = iVar48 + 1;
    break;
      case 0x16:
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
    }
    else {
      local_70 = (ulong)local_70._4_4_ << 0x20;
      puVar34 = (ushort *)
                _pcre2_extuni_16(uVar24,local_150 + local_13c,*(undefined8 *)(param_1 + 0x20),puVar8
                                 ,bVar51);
      if ((puVar8 <= puVar34) && (bVar18 = true, (*(byte *)(param_1 + 0x6c) & 0x20) == 0)) {
        bVar18 = bVar53;
      }
      if (iVar15 <= iVar48) goto LAB_00100381;
      iVar44 = iVar44 + 1;
      *puVar31 = ~uVar40;
      puVar31[1] = 0;
      puVar31[2] = (uint)local_70;
      puVar28 = puVar31 + 3;
      iVar48 = iVar48 + 1;
    }
    break;
      case 0x17:
    if (local_13c != 0) {
      puVar34 = *(ushort **)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x74) == 0) {
        uVar26 = *(uint *)(param_1 + 0x78);
        lVar42 = (ulong)uVar26 * -2;
        if (puVar34 + -(ulong)uVar26 < local_150) {
          iVar44 = iVar44 + 1;
          break;
        }
        if (*local_150 != *(ushort *)(param_1 + 0x80)) {
          iVar44 = iVar44 + 1;
          break;
        }
        if (uVar26 == 1) {
          lVar42 = -2;
        }
        else if (local_150[1] != *(ushort *)(param_1 + 0x82)) {
          iVar44 = iVar44 + 1;
          break;
        }
      }
      else {
        if (puVar34 <= local_150) {
          iVar44 = iVar44 + 1;
          break;
        }
        iVar22 = _pcre2_is_newline_16
                           (local_150,*(int *)(param_1 + 0x74),puVar34,param_1 + 0x78,bVar51);
        if (iVar22 == 0) {
          iVar44 = iVar44 + 1;
          break;
        }
        lVar42 = (ulong)*(uint *)(param_1 + 0x78) * -2;
      }
      if (local_150 != (ushort *)(lVar42 + (long)puVar8)) {
        iVar44 = iVar44 + 1;
        break;
      }
    }
    if ((*(byte *)(param_1 + 0x6c) & 0x20) != 0) goto LAB_00105e0b;
    if (iVar15 <= (int)uVar25) goto LAB_00100381;
    iVar44 = iVar44 + 1;
    uVar30 = (ulong)(uVar25 + 1);
    *puVar47 = uVar40 + 1;
    puVar47[1] = 0;
    puVar47 = puVar47 + 3;
    break;
      case 0x18:
    if (local_150 < puVar8) {
      iVar44 = iVar44 + 1;
    }
    else {
      if ((*(byte *)(param_1 + 0x6c) & 0x20) != 0) goto LAB_00105e0b;
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      iVar44 = iVar44 + 1;
      uVar30 = (ulong)(uVar25 + 1);
      *puVar47 = uVar40 + 1;
      puVar47[1] = 0;
      puVar47 = puVar47 + 3;
    }
    break;
      case 0x19:
    if ((*(uint *)(param_1 + 0x6c) & 2) != 0) {
      iVar44 = iVar44 + 1;
      break;
    }
    if (local_13c == 0) {
      if ((*(uint *)(param_1 + 0x6c) & 0x20) != 0) {
        bVar19 = true;
        iVar44 = iVar44 + 1;
        break;
      }
LAB_00102515:
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      iVar44 = iVar44 + 1;
      uVar30 = (ulong)(uVar25 + 1);
      *puVar47 = uVar40 + 1;
      puVar47[1] = 0;
      puVar47 = puVar47 + 3;
      break;
    }
    puVar34 = *(ushort **)(param_1 + 0x28);
    if ((*(byte *)(param_1 + 0x70) & 0x10) == 0) {
      if (*(int *)(param_1 + 0x74) == 0) {
        if (((local_150 <= puVar34 + -(ulong)*(uint *)(param_1 + 0x78)) &&
            (*local_150 == *(ushort *)(param_1 + 0x80))) &&
           ((*(uint *)(param_1 + 0x78) == 1 || (local_150[1] == *(ushort *)(param_1 + 0x82))))) {
LAB_00105bf4:
          if (local_150 == puVar8 + -(ulong)*(uint *)(param_1 + 0x78)) goto LAB_00102515;
          goto LAB_00105c12;
        }
      }
      else if (local_150 < puVar34) {
        iVar22 = _pcre2_is_newline_16
                           (local_150,*(int *)(param_1 + 0x74),puVar34,param_1 + 0x78,bVar51);
        if (iVar22 != 0) goto LAB_00105bf4;
LAB_00105c12:
        puVar34 = *(ushort **)(param_1 + 0x28);
      }
    }
    if (local_150 + 1 < puVar34) {
      iVar44 = iVar44 + 1;
    }
    else if ((*(uint *)(param_1 + 0x6c) & 0x30) == 0) {
      iVar44 = iVar44 + 1;
    }
    else if (*(int *)(param_1 + 0x74) == 0) {
      if (*(int *)(param_1 + 0x78) == 2) {
        if (*(ushort *)(param_1 + 0x80) == uVar24) {
          if ((*(uint *)(param_1 + 0x6c) & 0x20) == 0) {
            bVar19 = true;
            iVar44 = iVar44 + 1;
            bVar20 = true;
          }
          else {
            if (iVar15 <= iVar48) goto LAB_00100381;
            iVar44 = iVar44 + 1;
            *puVar31 = ~uVar40;
            puVar31[1] = 0;
            puVar31[2] = 1;
            puVar28 = puVar31 + 3;
            iVar48 = iVar48 + 1;
            bVar18 = true;
          }
        }
        else {
          iVar44 = iVar44 + 1;
        }
      }
      else {
        iVar44 = iVar44 + 1;
      }
    }
    else {
      iVar44 = iVar44 + 1;
    }
    break;
      case 0x1a:
    if ((*(uint *)(param_1 + 0x6c) & 2) != 0) {
      puVar34 = *(ushort **)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x74) == 0) {
        if (puVar34 + -(ulong)*(uint *)(param_1 + 0x78) < local_150) {
          iVar44 = iVar44 + 1;
          break;
        }
        if (*local_150 != *(ushort *)(param_1 + 0x80)) {
          iVar44 = iVar44 + 1;
          break;
        }
        if ((*(uint *)(param_1 + 0x78) != 1) && (local_150[1] != *(ushort *)(param_1 + 0x82))) {
          iVar44 = iVar44 + 1;
          break;
        }
      }
      else {
        if (puVar34 <= local_150) {
          iVar44 = iVar44 + 1;
          break;
        }
        iVar22 = _pcre2_is_newline_16
                           (local_150,*(int *)(param_1 + 0x74),puVar34,param_1 + 0x78,bVar51);
        if (iVar22 == 0) {
          iVar44 = iVar44 + 1;
          break;
        }
      }
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      iVar44 = iVar44 + 1;
      uVar30 = (ulong)(uVar25 + 1);
      *puVar47 = uVar40 + 1;
      puVar47[1] = 0;
      puVar47 = puVar47 + 3;
      break;
    }
    if (local_13c == 0) {
      if ((*(uint *)(param_1 + 0x6c) & 0x20) != 0) {
        bVar19 = true;
        iVar44 = iVar44 + 1;
        break;
      }
LAB_00102568:
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      iVar44 = iVar44 + 1;
      uVar30 = (ulong)(uVar25 + 1);
      *puVar47 = uVar40 + 1;
      puVar47[1] = 0;
      puVar47 = puVar47 + 3;
    }
    else {
      puVar34 = *(ushort **)(param_1 + 0x28);
      if ((*(byte *)(param_1 + 0x70) & 0x10) == 0) {
        if (*(int *)(param_1 + 0x74) == 0) {
          if (((local_150 <= puVar34 + -(ulong)*(uint *)(param_1 + 0x78)) &&
              (*local_150 == *(ushort *)(param_1 + 0x80))) &&
             ((*(uint *)(param_1 + 0x78) == 1 || (local_150[1] == *(ushort *)(param_1 + 0x82)))))
          goto LAB_00102568;
        }
        else if (local_150 < puVar34) {
          iVar22 = _pcre2_is_newline_16
                             (local_150,*(int *)(param_1 + 0x74),puVar34,param_1 + 0x78,bVar51);
          if (iVar22 != 0) goto LAB_00102568;
          puVar34 = *(ushort **)(param_1 + 0x28);
        }
      }
      if (local_150 + 1 < puVar34) {
        iVar44 = iVar44 + 1;
      }
      else if ((*(uint *)(param_1 + 0x6c) & 0x30) == 0) {
        iVar44 = iVar44 + 1;
      }
      else if (*(int *)(param_1 + 0x74) == 0) {
        if (*(int *)(param_1 + 0x78) == 2) {
          if (*(ushort *)(param_1 + 0x80) == uVar24) {
            if ((*(uint *)(param_1 + 0x6c) & 0x20) == 0) {
              bVar19 = true;
              iVar44 = iVar44 + 1;
              bVar20 = true;
            }
            else {
              if (iVar15 <= iVar48) goto LAB_00100381;
              iVar44 = iVar44 + 1;
              *puVar31 = ~uVar40;
              puVar31[1] = 0;
              puVar31[2] = 1;
              puVar28 = puVar31 + 3;
              iVar48 = iVar48 + 1;
              bVar18 = true;
            }
          }
          else {
            iVar44 = iVar44 + 1;
          }
        }
        else {
          iVar44 = iVar44 + 1;
        }
      }
      else {
        iVar44 = iVar44 + 1;
      }
    }
    break;
      case 0x1b:
    if (puVar7 == local_150) {
      if ((*(byte *)(param_1 + 0x6c) & 1) == 0) {
        if (iVar15 <= (int)uVar25) goto LAB_00100381;
        iVar44 = iVar44 + 1;
        uVar30 = (ulong)(uVar25 + 1);
        *puVar47 = uVar40 + 1;
        puVar47[1] = 0;
        puVar47 = puVar47 + 3;
      }
      else {
        iVar44 = iVar44 + 1;
      }
    }
    else {
      iVar44 = iVar44 + 1;
    }
    break;
      case 0x1c:
    if ((puVar7 != local_150) || ((*(byte *)(param_1 + 0x6c) & 1) != 0)) {
      if ((puVar8 == local_150) && ((*(byte *)(param_1 + 0x72) & 0x20) == 0)) {
        iVar44 = iVar44 + 1;
        break;
      }
      puVar34 = *(ushort **)(param_1 + 0x20);
      if (*(int *)(param_1 + 0x74) == 0) {
        uVar41 = (ulong)*(uint *)(param_1 + 0x78);
        if (local_150 < puVar34 + uVar41) {
          iVar44 = iVar44 + 1;
          break;
        }
        if (local_150[-uVar41] != *(ushort *)(param_1 + 0x80)) {
          iVar44 = iVar44 + 1;
          break;
        }
        if ((*(uint *)(param_1 + 0x78) != 1) &&
           (local_150[1 - uVar41] != *(ushort *)(param_1 + 0x82))) {
          iVar44 = iVar44 + 1;
          break;
        }
      }
      else {
        if (local_150 <= puVar34) {
          iVar44 = iVar44 + 1;
          break;
        }
        iVar22 = _pcre2_was_newline_16
                           (local_150,*(int *)(param_1 + 0x74),puVar34,param_1 + 0x78,bVar51);
        if (iVar22 == 0) {
          iVar44 = iVar44 + 1;
          break;
        }
      }
    }
    if (iVar15 <= (int)uVar25) goto LAB_00100381;
    iVar44 = iVar44 + 1;
    uVar30 = (ulong)(uVar25 + 1);
    *puVar47 = uVar40 + 1;
    puVar47[1] = 0;
    puVar47 = puVar47 + 3;
    break;
      case 0x1d:
    if ((local_13c == 0) || (uVar24 != uVar23)) {
      iVar44 = iVar44 + 1;
    }
    else {
      if (iVar15 <= iVar48) goto LAB_00100381;
      iVar44 = iVar44 + 1;
      *puVar31 = uVar40 + 1 + iVar22;
      puVar31[1] = 0;
      puVar28 = puVar31 + 3;
      iVar48 = iVar48 + 1;
    }
    break;
      case 0x1e:
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
    }
    else if (uVar43 == 0) {
      if (uVar24 < 0x100) {
        if (0xff < uVar23) {
          iVar44 = iVar44 + 1;
          break;
        }
        uVar23 = (uint)*(byte *)(lVar10 + (ulong)uVar23);
        uVar25 = (uint)*(byte *)(lVar10 + (ulong)uVar24);
      }
      else {
        uVar25 = uVar24;
        if (uVar23 < 0x100) {
          iVar44 = iVar44 + 1;
          break;
        }
      }
      if (uVar23 == uVar25) {
        if (iVar15 <= iVar48) goto LAB_00100381;
        iVar44 = iVar44 + 1;
        *puVar31 = uVar40 + 2;
        puVar31[1] = 0;
        puVar28 = puVar31 + 3;
        iVar48 = iVar48 + 1;
      }
      else {
        iVar44 = iVar44 + 1;
      }
    }
    else if (uVar24 == uVar23) {
      if (iVar15 <= iVar48) goto LAB_00100381;
      iVar44 = iVar44 + 1;
      *puVar31 = uVar40 + 1 + iVar22;
      puVar31[1] = 0;
      puVar28 = puVar31 + 3;
      iVar48 = iVar48 + 1;
    }
    else {
      if (uVar24 < 0x80) {
        uVar25 = (uint)*(byte *)(lVar27 + (ulong)uVar24);
      }
      else {
        uVar25 = uVar24 + 0x7f;
        if (-1 < (int)uVar24) {
          uVar25 = uVar24;
        }
        uVar25 = uVar24 + *(int *)(&DAT_00109024 +
                                  (ulong)*(ushort *)
                                          (&_pcre2_ucd_stage2_16 +
                                          (long)(int)((uint)*(ushort *)
                                                             (&_pcre2_ucd_stage1_16 +
                                                             (long)((int)uVar25 >> 7) * 2) * 0x80 +
                                                     (int)uVar24 % 0x80) * 2) * 0xc);
      }
      if (uVar25 == uVar23) {
        if (iVar15 <= iVar48) goto LAB_00100381;
        iVar44 = iVar44 + 1;
        *puVar31 = uVar40 + 1 + iVar22;
        puVar31[1] = 0;
        puVar28 = puVar31 + 3;
        iVar48 = iVar48 + 1;
      }
      else {
        iVar44 = iVar44 + 1;
      }
    }
    break;
      case 0x1f:
    if ((local_13c == 0) || (uVar24 == uVar23)) {
      iVar44 = iVar44 + 1;
    }
    else {
      if (iVar15 <= iVar48) goto LAB_00100381;
      iVar44 = iVar44 + 1;
      *puVar31 = uVar40 + 1 + iVar22;
      puVar31[1] = 0;
      puVar28 = puVar31 + 3;
      iVar48 = iVar48 + 1;
    }
    break;
      case 0x20:
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
    }
    else {
      if ((uVar23 < 0x80) || (bVar52)) {
        uVar25 = uVar23;
        if (uVar23 < 0x100) {
          uVar25 = (uint)*(byte *)(lVar27 + (ulong)uVar23);
        }
      }
      else {
        uVar25 = uVar23 + 0x7f;
        if (-1 < (int)uVar23) {
          uVar25 = uVar23;
        }
        uVar25 = *(int *)(&DAT_00109024 +
                         (ulong)*(ushort *)
                                 (&_pcre2_ucd_stage2_16 +
                                 (long)(int)((uint)*(ushort *)
                                                    (&_pcre2_ucd_stage1_16 +
                                                    (long)((int)uVar25 >> 7) * 2) * 0x80 +
                                            (int)uVar23 % 0x80) * 2) * 0xc) + uVar23;
      }
      if ((uVar24 == uVar23) || (uVar24 == uVar25)) {
        iVar44 = iVar44 + 1;
      }
      else {
        if (iVar15 <= iVar48) goto LAB_00100381;
        iVar44 = iVar44 + 1;
        *puVar31 = uVar40 + 1 + iVar22;
        puVar31[1] = 0;
        puVar28 = puVar31 + 3;
        iVar48 = iVar48 + 1;
      }
    }
    break;
      case 0x21:
      case 0x22:
      case 0x2a:
      case 0x3b:
      case 0x3c:
      case 0x44:
    bVar53 = false;
    goto LAB_00100db0;
      case 0x23:
      case 0x24:
      case 0x2b:
      case 0x3d:
      case 0x3e:
      case 0x45:
    bVar53 = false;
    goto LAB_00100c9e;
      case 0x25:
      case 0x26:
      case 0x2c:
      case 0x3f:
      case 0x40:
      case 0x46:
    bVar53 = false;
    goto LAB_00100b93;
      case 0x27:
      case 0x28:
      case 0x2d:
      case 0x41:
      case 0x42:
      case 0x47:
    bVar53 = false;
    goto LAB_00100a57;
      case 0x29:
      case 0x43:
    uVar25 = puVar35[1];
    uVar26 = 0xffffffff;
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      break;
    }
    goto LAB_00101fb4;
      case 0x2e:
      case 0x2f:
      case 0x37:
      case 0x48:
      case 0x49:
      case 0x51:
    uVar41 = (ulong)(iVar16 - 0xd);
    bVar53 = true;
LAB_00100db0:
    uVar26 = uVar25 + 1;
    if (iVar15 <= (int)uVar25) goto LAB_00100381;
    puVar47[1] = 0;
    puVar35 = puVar47 + 3;
    *puVar47 = uVar40 + 1 + iVar22;
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      uVar30 = (ulong)uVar26;
      puVar47 = puVar35;
    }
    else {
      uVar25 = 0xffffffff;
      if (bVar53) {
        if ((uVar23 < 0x80) || (bVar52)) {
          uVar25 = uVar23;
          if (uVar23 < 0x100) {
            uVar25 = (uint)*(byte *)(lVar27 + (ulong)uVar23);
          }
        }
        else {
          uVar25 = uVar23 + 0x7f;
          if (-1 < (int)uVar23) {
            uVar25 = uVar23;
          }
          uVar25 = *(int *)(&DAT_00109024 +
                           (ulong)*(ushort *)
                                   (&_pcre2_ucd_stage2_16 +
                                   (long)(int)((uint)*(ushort *)
                                                      (&_pcre2_ucd_stage1_16 +
                                                      (long)((int)uVar25 >> 7) * 2) * 0x80 +
                                              (int)uVar23 % 0x80) * 2) * 0xc) + uVar23;
        }
      }
      uVar46 = (uint)uVar41;
      if ((uVar24 == uVar23 || uVar24 == uVar25) == uVar46 < 0x3b) {
        if ((uVar46 != 0x2a) && (uVar46 != 0x44)) {
          uVar30 = (ulong)uVar26;
          puVar47 = puVar35;
        }
        if (iVar15 <= iVar48) goto LAB_00100381;
        *puVar31 = uVar40;
        iVar44 = iVar44 + 1;
        puVar31[1] = 0;
        puVar28 = puVar31 + 3;
        iVar48 = iVar48 + 1;
      }
      else {
        iVar44 = iVar44 + 1;
        uVar30 = (ulong)uVar26;
        puVar47 = puVar35;
      }
    }
    break;
      case 0x30:
      case 0x31:
      case 0x38:
      case 0x4a:
      case 0x4b:
      case 0x52:
    uVar41 = (ulong)(iVar16 - 0xd);
    bVar53 = true;
LAB_00100c9e:
    uVar26 = puVar35[1];
    puVar35 = puVar47;
    if (0 < (int)uVar26) {
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      puVar47[1] = 0;
      uVar30 = (ulong)(uVar25 + 1);
      puVar35 = puVar47 + 3;
      *puVar47 = uVar40 + 1 + iVar22;
    }
    puVar47 = puVar35;
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
    }
    else {
      uVar25 = 0xffffffff;
      if (bVar53) {
        if ((uVar23 < 0x80) || (bVar52)) {
          uVar25 = uVar23;
          if (uVar23 < 0x100) {
            uVar25 = (uint)*(byte *)(lVar27 + (ulong)uVar23);
          }
        }
        else {
          uVar25 = uVar23 + 0x7f;
          if (-1 < (int)uVar23) {
            uVar25 = uVar23;
          }
          uVar25 = *(int *)(&DAT_00109024 +
                           (ulong)*(ushort *)
                                   (&_pcre2_ucd_stage2_16 +
                                   (long)(int)((uint)*(ushort *)
                                                      (&_pcre2_ucd_stage1_16 +
                                                      (long)((int)uVar25 >> 7) * 2) * 0x80 +
                                              (int)uVar23 % 0x80) * 2) * 0xc) + uVar23;
        }
      }
      uVar46 = (uint)uVar41;
      if ((uVar24 == uVar23 || uVar24 == uVar25) == uVar46 < 0x3b) {
        if ((0 < (int)uVar26) && ((uVar46 == 0x2b || (uVar46 == 0x45)))) {
          uVar30 = (ulong)((int)uVar30 - 1);
          puVar35 = puVar35 + -3;
        }
        if (iVar15 <= iVar48) goto LAB_00100381;
        *puVar31 = uVar40;
        iVar44 = iVar44 + 1;
        puVar31[1] = uVar26 + 1;
        puVar47 = puVar35;
        puVar28 = puVar31 + 3;
        iVar48 = iVar48 + 1;
      }
      else {
        iVar44 = iVar44 + 1;
      }
    }
    break;
      case 0x32:
      case 0x33:
      case 0x39:
      case 0x4c:
      case 0x4d:
      case 0x53:
    uVar41 = (ulong)(iVar16 - 0xd);
    bVar53 = true;
LAB_00100b93:
    uVar26 = uVar25 + 1;
    if (iVar15 <= (int)uVar25) goto LAB_00100381;
    uVar40 = uVar40 + 1 + iVar22;
    puVar35 = puVar47 + 3;
    puVar47[1] = 0;
    *puVar47 = uVar40;
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      uVar30 = (ulong)uVar26;
      puVar47 = puVar35;
    }
    else {
      uVar25 = 0xffffffff;
      if (bVar53) {
        if ((uVar23 < 0x80) || (bVar52)) {
          uVar25 = uVar23;
          if (uVar23 < 0x100) {
            uVar25 = (uint)*(byte *)(lVar27 + (ulong)uVar23);
          }
        }
        else {
          uVar25 = uVar23 + 0x7f;
          if (-1 < (int)uVar23) {
            uVar25 = uVar23;
          }
          uVar25 = *(int *)(&DAT_00109024 +
                           (ulong)*(ushort *)
                                   (&_pcre2_ucd_stage2_16 +
                                   (long)(int)((int)uVar23 % 0x80 +
                                              (uint)*(ushort *)
                                                     (&_pcre2_ucd_stage1_16 +
                                                     (long)((int)uVar25 >> 7) * 2) * 0x80) * 2) *
                           0xc) + uVar23;
        }
      }
      uVar46 = (uint)uVar41;
      if ((uVar24 == uVar23 || uVar24 == uVar25) == uVar46 < 0x3b) {
        if ((uVar46 != 0x2c) && (uVar46 != 0x46)) {
          uVar30 = (ulong)uVar26;
          puVar47 = puVar35;
        }
        if (iVar15 <= iVar48) goto LAB_00100381;
        *puVar31 = uVar40;
        iVar44 = iVar44 + 1;
        puVar31[1] = 0;
        puVar28 = puVar31 + 3;
        iVar48 = iVar48 + 1;
      }
      else {
        iVar44 = iVar44 + 1;
        uVar30 = (ulong)uVar26;
        puVar47 = puVar35;
      }
    }
    break;
      case 0x34:
      case 0x35:
      case 0x3a:
      case 0x4e:
      case 0x4f:
      case 0x54:
    uVar41 = (ulong)(iVar16 - 0xd);
    bVar53 = true;
LAB_00100a57:
    uVar26 = uVar25 + 1;
    if (iVar15 <= (int)uVar25) goto LAB_00100381;
    puVar47[1] = 0;
    uVar25 = puVar35[1];
    uVar46 = uVar40 + 2 + iVar22;
    puVar35 = puVar47 + 3;
    *puVar47 = uVar46;
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      uVar30 = (ulong)uVar26;
      puVar47 = puVar35;
    }
    else {
      uVar36 = 0xffffffff;
      if (bVar53) {
        if ((uVar23 < 0x80) || (bVar52)) {
          uVar36 = uVar23;
          if (uVar23 < 0x100) {
            uVar36 = (uint)*(byte *)(lVar27 + (ulong)uVar23);
          }
        }
        else {
          uVar36 = uVar23 + 0x7f;
          if (-1 < (int)uVar23) {
            uVar36 = uVar23;
          }
          uVar36 = *(int *)(&DAT_00109024 +
                           (ulong)*(ushort *)
                                   (&_pcre2_ucd_stage2_16 +
                                   (long)(int)((int)uVar23 % 0x80 +
                                              (uint)*(ushort *)
                                                     (&_pcre2_ucd_stage1_16 +
                                                     (long)((int)uVar36 >> 7) * 2) * 0x80) * 2) *
                           0xc) + uVar23;
        }
      }
      uVar50 = (uint)uVar41;
      if ((uVar24 == uVar23 || uVar24 == uVar36) == uVar50 < 0x3b) {
        if ((uVar50 != 0x2d) && (uVar50 != 0x47)) {
          uVar30 = (ulong)uVar26;
          puVar47 = puVar35;
        }
        if ((int)(uVar25 + 1) < (int)(uint)puVar34[1]) {
          if (iVar15 <= iVar48) goto LAB_00100381;
          *puVar31 = uVar40;
          iVar44 = iVar44 + 1;
          puVar31[1] = uVar25 + 1;
          puVar28 = puVar31 + 3;
          iVar48 = iVar48 + 1;
        }
        else {
          if (iVar15 <= iVar48) goto LAB_00100381;
          *puVar31 = uVar46;
          iVar44 = iVar44 + 1;
          puVar31[1] = 0;
          puVar28 = puVar31 + 3;
          iVar48 = iVar48 + 1;
        }
      }
      else {
        iVar44 = iVar44 + 1;
        uVar30 = (ulong)uVar26;
        puVar47 = puVar35;
      }
    }
    break;
      case 0x36:
      case 0x50:
    uVar25 = puVar35[1];
    uVar41 = (ulong)(iVar16 - 0xd);
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      break;
    }
    if ((uVar23 < 0x80) || (bVar52)) {
      uVar26 = uVar23;
      if (uVar23 < 0x100) {
        uVar26 = (uint)*(byte *)(lVar27 + (ulong)uVar23);
      }
    }
    else {
      uVar26 = uVar23 + 0x7f;
      if (-1 < (int)uVar23) {
        uVar26 = uVar23;
      }
      uVar26 = *(int *)(&DAT_00109024 +
                       (ulong)*(ushort *)
                               (&_pcre2_ucd_stage2_16 +
                               (long)(int)((uint)*(ushort *)
                                                  (&_pcre2_ucd_stage1_16 +
                                                  (long)((int)uVar26 >> 7) * 2) * 0x80 +
                                          (int)uVar23 % 0x80) * 2) * 0xc) + uVar23;
    }
LAB_00101fb4:
    if ((uVar24 == uVar23 || uVar24 == uVar26) == (uint)uVar41 < 0x3b) {
      if ((int)(uVar25 + 1) < (int)(uint)puVar34[1]) {
        if (iVar15 <= iVar48) goto LAB_00100381;
        *puVar31 = uVar40;
        iVar44 = iVar44 + 1;
        puVar31[1] = uVar25 + 1;
        puVar28 = puVar31 + 3;
        iVar48 = iVar48 + 1;
      }
      else {
        if (iVar15 <= iVar48) goto LAB_00100381;
        iVar44 = iVar44 + 1;
        *puVar31 = uVar40 + 2 + iVar22;
        puVar31[1] = 0;
        puVar28 = puVar31 + 3;
        iVar48 = iVar48 + 1;
      }
    }
    else {
      iVar44 = iVar44 + 1;
    }
    break;
      case 0x55:
      case 0x56:
      case 0x5e:
    uVar26 = uVar25 + 1;
    uVar41 = (ulong)uVar26;
    if (iVar15 <= (int)uVar25) goto LAB_00100381;
    puVar47[1] = 0;
    puVar35 = puVar47 + 3;
    *puVar47 = uVar40 + 2;
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      puVar47 = puVar35;
      uVar30 = uVar41;
      break;
    }
    if (uVar23 == 0xc) {
      puVar34 = *(ushort **)(param_1 + 0x28);
      if ((local_150 + 1 < puVar34) || ((*(byte *)(param_1 + 0x6c) & 0x20) == 0)) {
        if (uVar24 < 0x100) {
          iVar22 = *(int *)(param_1 + 0x74);
          if (iVar22 != 0) goto LAB_00104e7d;
LAB_00104d3d:
          if ((local_150 <= puVar34 + -(ulong)*(uint *)(param_1 + 0x78)) &&
             (*local_150 == *(ushort *)(param_1 + 0x80))) {
            if (*(uint *)(param_1 + 0x78) == 1) {
              iVar44 = iVar44 + 1;
              puVar47 = puVar35;
              uVar30 = uVar41;
              break;
            }
            if (local_150[1] == *(ushort *)(param_1 + 0x82)) {
              iVar44 = iVar44 + 1;
              puVar47 = puVar35;
              uVar30 = uVar41;
              break;
            }
          }
        }
      }
      else {
        iVar22 = *(int *)(param_1 + 0x74);
        if (iVar22 == 0) {
          if ((*(int *)(param_1 + 0x78) == 2) && (*(ushort *)(param_1 + 0x80) == uVar24)) {
            bVar19 = true;
            iVar44 = iVar44 + 1;
            bVar20 = true;
            puVar47 = puVar35;
            uVar30 = uVar41;
            break;
          }
          if (uVar24 < 0x100) goto LAB_00104d3d;
        }
        else if (uVar24 < 0x100) {
LAB_00104e7d:
          if ((local_150 < puVar34) &&
             (iVar22 = _pcre2_is_newline_16(local_150,iVar22,puVar34,param_1 + 0x78,bVar51),
             iVar22 != 0)) {
            iVar44 = iVar44 + 1;
            puVar47 = puVar35;
            uVar30 = (ulong)uVar26;
            break;
          }
        }
      }
    }
    else {
      if (0xff < uVar24) {
        if (uVar23 != 7) {
          if ((uVar23 & 0xfffffffd) == 9) {
            iVar44 = iVar44 + 1;
            puVar47 = puVar35;
            uVar30 = uVar41;
            break;
          }
          goto LAB_00103dc5;
        }
        if (0xff < uVar24) {
          iVar44 = iVar44 + 1;
          puVar47 = puVar35;
          uVar30 = uVar41;
          break;
        }
      }
      if ((*(byte *)(lVar2 + (ulong)uVar24) & toptable1[uVar23]) == toptable2[uVar23]) {
        iVar44 = iVar44 + 1;
        puVar47 = puVar35;
        uVar30 = uVar41;
        break;
      }
    }
LAB_00103dc5:
    if (iVar16 != 0x5e) {
      puVar47 = puVar35;
      uVar30 = (ulong)uVar26;
    }
    if (iVar15 <= iVar48) goto LAB_00100381;
    *puVar31 = uVar40;
    iVar44 = iVar44 + 1;
    puVar31[1] = 0;
    puVar28 = puVar31 + 3;
    iVar48 = iVar48 + 1;
    break;
      case 0x57:
      case 0x58:
      case 0x5f:
    uVar26 = puVar35[1];
    puVar35 = puVar47;
    if (0 < (int)uVar26) {
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      puVar47[1] = 0;
      uVar30 = (ulong)(uVar25 + 1);
      puVar35 = puVar47 + 3;
      *puVar47 = uVar40 + 2;
    }
    puVar47 = puVar35;
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      break;
    }
    if (uVar23 == 0xc) {
      puVar34 = *(ushort **)(param_1 + 0x28);
      if ((local_150 + 1 < puVar34) || ((*(byte *)(param_1 + 0x6c) & 0x20) == 0)) {
        if (uVar24 < 0x100) {
          iVar22 = *(int *)(param_1 + 0x74);
          if (iVar22 != 0) goto LAB_001050cc;
LAB_0010475f:
          if ((local_150 <= puVar34 + -(ulong)*(uint *)(param_1 + 0x78)) &&
             (*local_150 == *(ushort *)(param_1 + 0x80))) {
            if (*(uint *)(param_1 + 0x78) == 1) {
              iVar44 = iVar44 + 1;
              break;
            }
            if (local_150[1] == *(ushort *)(param_1 + 0x82)) {
              iVar44 = iVar44 + 1;
              break;
            }
          }
        }
      }
      else {
        iVar22 = *(int *)(param_1 + 0x74);
        if (iVar22 == 0) {
          if ((*(int *)(param_1 + 0x78) == 2) && (*(ushort *)(param_1 + 0x80) == uVar24)) {
            bVar19 = true;
            iVar44 = iVar44 + 1;
            bVar20 = true;
            break;
          }
          if (uVar24 < 0x100) goto LAB_0010475f;
        }
        else if (uVar24 < 0x100) {
LAB_001050cc:
          if ((local_150 < puVar34) &&
             (iVar22 = _pcre2_is_newline_16(local_150,iVar22,puVar34,param_1 + 0x78,bVar51),
             iVar22 != 0)) {
            iVar44 = iVar44 + 1;
            break;
          }
        }
      }
    }
    else {
      if (0xff < uVar24) {
        if (uVar23 != 7) {
          if ((uVar23 & 0xfffffffd) == 9) {
            iVar44 = iVar44 + 1;
            break;
          }
          goto LAB_00103e0a;
        }
        if (0xff < uVar24) {
          iVar44 = iVar44 + 1;
          break;
        }
      }
      if ((*(byte *)(lVar2 + (ulong)uVar24) & toptable1[uVar23]) == toptable2[uVar23]) {
        iVar44 = iVar44 + 1;
        break;
      }
    }
LAB_00103e0a:
    if ((0 < (int)uVar26) && (iVar16 == 0x5f)) {
      uVar30 = (ulong)((int)uVar30 - 1);
      puVar35 = puVar35 + -3;
    }
    if (iVar15 <= iVar48) goto LAB_00100381;
    *puVar31 = uVar40;
    iVar44 = iVar44 + 1;
    puVar31[1] = uVar26 + 1;
    puVar47 = puVar35;
    puVar28 = puVar31 + 3;
    iVar48 = iVar48 + 1;
    break;
      case 0x59:
      case 0x5a:
      case 0x60:
    uVar26 = uVar25 + 1;
    uVar41 = (ulong)uVar26;
    if (iVar15 <= (int)uVar25) goto LAB_00100381;
    puVar47[1] = 0;
    puVar35 = puVar47 + 3;
    *puVar47 = uVar40 + 2;
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      puVar47 = puVar35;
      uVar30 = uVar41;
      break;
    }
    if (uVar23 == 0xc) {
      puVar34 = *(ushort **)(param_1 + 0x28);
      if ((local_150 + 1 < puVar34) || ((*(byte *)(param_1 + 0x6c) & 0x20) == 0)) {
        if (uVar24 < 0x100) {
          iVar22 = *(int *)(param_1 + 0x74);
          if (iVar22 != 0) goto LAB_00104f8a;
LAB_00104bb3:
          if ((local_150 <= puVar34 + -(ulong)*(uint *)(param_1 + 0x78)) &&
             (*local_150 == *(ushort *)(param_1 + 0x80))) {
            if (*(uint *)(param_1 + 0x78) == 1) {
              iVar44 = iVar44 + 1;
              puVar47 = puVar35;
              uVar30 = uVar41;
              break;
            }
            if (local_150[1] == *(ushort *)(param_1 + 0x82)) {
              iVar44 = iVar44 + 1;
              puVar47 = puVar35;
              uVar30 = uVar41;
              break;
            }
          }
        }
      }
      else {
        iVar22 = *(int *)(param_1 + 0x74);
        if (iVar22 == 0) {
          if ((*(int *)(param_1 + 0x78) == 2) && (*(ushort *)(param_1 + 0x80) == uVar24)) {
            bVar19 = true;
            iVar44 = iVar44 + 1;
            bVar20 = true;
            puVar47 = puVar35;
            uVar30 = uVar41;
            break;
          }
          if (uVar24 < 0x100) goto LAB_00104bb3;
        }
        else if (uVar24 < 0x100) {
LAB_00104f8a:
          if ((local_150 < puVar34) &&
             (iVar22 = _pcre2_is_newline_16(local_150,iVar22,puVar34,param_1 + 0x78,bVar51),
             iVar22 != 0)) {
            iVar44 = iVar44 + 1;
            puVar47 = puVar35;
            uVar30 = (ulong)uVar26;
            break;
          }
        }
      }
    }
    else {
      if (0xff < uVar24) {
        if (uVar23 != 7) {
          if ((uVar23 & 0xfffffffd) == 9) {
            iVar44 = iVar44 + 1;
            puVar47 = puVar35;
            uVar30 = uVar41;
            break;
          }
          goto LAB_00103e56;
        }
        if (0xff < uVar24) {
          iVar44 = iVar44 + 1;
          puVar47 = puVar35;
          uVar30 = uVar41;
          break;
        }
      }
      if ((*(byte *)(lVar2 + (ulong)uVar24) & toptable1[uVar23]) == toptable2[uVar23]) {
        iVar44 = iVar44 + 1;
        puVar47 = puVar35;
        uVar30 = uVar41;
        break;
      }
    }
LAB_00103e56:
    if (iVar16 != 0x60) {
      puVar47 = puVar35;
      uVar30 = (ulong)uVar26;
    }
    if (iVar15 <= iVar48) goto LAB_00100381;
    *puVar31 = uVar40 + 2;
    iVar44 = iVar44 + 1;
    puVar31[1] = 0;
    puVar28 = puVar31 + 3;
    iVar48 = iVar48 + 1;
    break;
      case 0x5b:
      case 0x5c:
      case 0x61:
    uVar26 = uVar25 + 1;
    uVar41 = (ulong)uVar26;
    if (iVar15 <= (int)uVar25) goto LAB_00100381;
    puVar47[1] = 0;
    uVar25 = puVar35[1];
    *puVar47 = uVar40 + 3;
    puVar35 = puVar47 + 3;
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      puVar47 = puVar35;
      uVar30 = uVar41;
      break;
    }
    if (uVar23 == 0xc) {
      puVar33 = *(ushort **)(param_1 + 0x28);
      if ((local_150 + 1 < puVar33) || ((*(byte *)(param_1 + 0x6c) & 0x20) == 0)) {
        if (uVar24 < 0x100) {
          iVar22 = *(int *)(param_1 + 0x74);
          if (iVar22 != 0) goto LAB_0010517f;
LAB_00104a95:
          if ((local_150 <= puVar33 + -(ulong)*(uint *)(param_1 + 0x78)) &&
             (*local_150 == *(ushort *)(param_1 + 0x80))) {
            if (*(uint *)(param_1 + 0x78) == 1) {
              iVar44 = iVar44 + 1;
              puVar47 = puVar35;
              uVar30 = uVar41;
              break;
            }
            if (local_150[1] == *(ushort *)(param_1 + 0x82)) {
              iVar44 = iVar44 + 1;
              puVar47 = puVar35;
              uVar30 = uVar41;
              break;
            }
          }
        }
      }
      else {
        iVar22 = *(int *)(param_1 + 0x74);
        if (iVar22 == 0) {
          if ((*(int *)(param_1 + 0x78) == 2) && (*(ushort *)(param_1 + 0x80) == uVar24)) {
            bVar19 = true;
            iVar44 = iVar44 + 1;
            bVar20 = true;
            puVar47 = puVar35;
            uVar30 = uVar41;
            break;
          }
          if (uVar24 < 0x100) goto LAB_00104a95;
        }
        else if (uVar24 < 0x100) {
LAB_0010517f:
          if ((local_150 < puVar33) &&
             (iVar22 = _pcre2_is_newline_16(local_150,iVar22,puVar33,param_1 + 0x78,bVar51),
             iVar22 != 0)) {
            iVar44 = iVar44 + 1;
            puVar47 = puVar35;
            uVar30 = (ulong)uVar26;
            break;
          }
        }
      }
    }
    else {
      if (uVar23 == 7) {
        if (0xff < uVar24) {
          iVar44 = iVar44 + 1;
          puVar47 = puVar35;
          uVar30 = uVar41;
          break;
        }
      }
      else if (0xff < uVar24) {
        if ((uVar23 & 0xfffffffd) == 9) {
          iVar44 = iVar44 + 1;
          puVar47 = puVar35;
          uVar30 = uVar41;
          break;
        }
        goto LAB_001038ab;
      }
      if ((*(byte *)(lVar2 + (ulong)uVar24) & toptable1[uVar23]) == toptable2[uVar23]) {
        iVar44 = iVar44 + 1;
        puVar47 = puVar35;
        uVar30 = uVar41;
        break;
      }
    }
LAB_001038ab:
    if (iVar16 != 0x61) {
      uVar30 = (ulong)uVar26;
      puVar47 = puVar35;
    }
    if ((int)(uVar25 + 1) < (int)(uint)puVar34[1]) {
      if (iVar15 <= iVar48) goto LAB_00100381;
      *puVar31 = uVar40;
      iVar44 = iVar44 + 1;
      puVar31[1] = uVar25 + 1;
      puVar28 = puVar31 + 3;
      iVar48 = iVar48 + 1;
    }
    else {
      if (iVar15 <= iVar48) goto LAB_00100381;
      iVar44 = iVar44 + 1;
      puVar31[1] = 0;
      *puVar31 = uVar40 + 3;
      puVar28 = puVar31 + 3;
      iVar48 = iVar48 + 1;
    }
    break;
      case 0x5d:
    uVar25 = puVar35[1];
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      break;
    }
    if (uVar23 == 0xc) {
      puVar33 = *(ushort **)(param_1 + 0x28);
      if ((local_150 + 1 < puVar33) || ((*(byte *)(param_1 + 0x6c) & 0x20) == 0)) {
        if (uVar24 < 0x100) {
          iVar22 = *(int *)(param_1 + 0x74);
          if (iVar22 != 0) goto LAB_00105339;
LAB_001041c1:
          if ((local_150 <= puVar33 + -(ulong)*(uint *)(param_1 + 0x78)) &&
             (*local_150 == *(ushort *)(param_1 + 0x80))) {
            if (*(uint *)(param_1 + 0x78) == 1) {
              iVar44 = iVar44 + 1;
              break;
            }
            if (local_150[1] == *(ushort *)(param_1 + 0x82)) {
              iVar44 = iVar44 + 1;
              break;
            }
          }
        }
      }
      else {
        iVar22 = *(int *)(param_1 + 0x74);
        if (iVar22 == 0) {
          if ((*(int *)(param_1 + 0x78) == 2) && (*(ushort *)(param_1 + 0x80) == uVar24)) {
            bVar19 = true;
            iVar44 = iVar44 + 1;
            bVar20 = true;
            break;
          }
          if (uVar24 < 0x100) goto LAB_001041c1;
        }
        else if (uVar24 < 0x100) {
LAB_00105339:
          if ((local_150 < puVar33) &&
             (iVar22 = _pcre2_is_newline_16(local_150,iVar22,puVar33,param_1 + 0x78,bVar51),
             iVar22 != 0)) {
            iVar44 = iVar44 + 1;
            break;
          }
        }
      }
    }
    else {
      if (uVar23 == 7) {
        if (0xff < uVar24) {
          iVar44 = iVar44 + 1;
          break;
        }
      }
      else if (0xff < uVar24) {
        if ((uVar23 & 0xfffffffd) == 9) {
          iVar44 = iVar44 + 1;
          break;
        }
        goto LAB_00103b00;
      }
      if ((*(byte *)(lVar2 + (ulong)uVar24) & toptable1[uVar23]) == toptable2[uVar23]) {
        iVar44 = iVar44 + 1;
        break;
      }
    }
LAB_00103b00:
    if ((int)(uVar25 + 1) < (int)(uint)puVar34[1]) {
      if (iVar15 <= iVar48) goto LAB_00100381;
      *puVar31 = uVar40;
      iVar44 = iVar44 + 1;
      puVar31[1] = uVar25 + 1;
      puVar28 = puVar31 + 3;
      iVar48 = iVar48 + 1;
    }
    else {
      if (iVar15 <= iVar48) goto LAB_00100381;
      iVar44 = iVar44 + 1;
      *puVar31 = uVar40 + 3;
      puVar31[1] = 0;
      puVar28 = puVar31 + 3;
      iVar48 = iVar48 + 1;
    }
    break;
      case 0x6e:
      case 0x6f:
      case 0x70:
    if (iVar16 == 0x70) {
      puVar33 = puVar34 + puVar34[1];
      if (local_13c == 0) goto LAB_00103d05;
      uVar26 = _pcre2_xclass_16(uVar24,puVar34 + 2,bVar51);
LAB_00101757:
      uVar37 = *puVar33;
      uVar23 = (uint)((long)puVar33 - lVar9 >> 1);
      switch(uVar37) {
      case 0x62:
      case 99:
      case 0x6a:
        goto switchD_0010178a_caseD_62;
      case 100:
      case 0x65:
      case 0x6b:
        uVar46 = puVar35[1];
        if ((int)uVar46 < 1) {
          if (uVar26 != 0) {
LAB_00105fcd:
            puVar35 = puVar47;
            uVar26 = uVar25;
            goto LAB_00103092;
          }
          goto LAB_00105fc1;
        }
        if (iVar15 <= (int)uVar25) goto LAB_00100381;
        puVar47[1] = 0;
        *puVar47 = uVar23 + 1;
        if (uVar26 != 0) {
          puVar35 = puVar47 + 3;
          uVar26 = uVar25 + 1;
          if (uVar37 == 0x6b) goto LAB_00105fcd;
LAB_00103092:
          if (iVar15 <= iVar48) goto LAB_00100381;
          *puVar31 = uVar40;
          iVar44 = iVar44 + 1;
          puVar31[1] = uVar46 + 1;
          uVar30 = (ulong)uVar26;
          puVar47 = puVar35;
          puVar28 = puVar31 + 3;
          iVar48 = iVar48 + 1;
          goto LAB_001004fe;
        }
        goto LAB_00103d69;
      case 0x66:
      case 0x67:
      case 0x6c:
        goto switchD_0010178a_caseD_66;
      case 0x68:
      case 0x69:
      case 0x6d:
        uVar46 = puVar35[1];
        if ((int)(uint)puVar33[1] <= (int)uVar46) {
          if (iVar15 <= (int)uVar25) goto LAB_00100381;
          puVar47[1] = 0;
          *puVar47 = uVar23 + 3;
          if (uVar26 != 0) {
            uVar6 = puVar33[2];
            if (uVar37 != 0x6d) {
              uVar30 = (ulong)(uVar25 + 1);
              puVar47 = puVar47 + 3;
            }
            goto LAB_0010301b;
          }
          goto LAB_00105ebd;
        }
        if (uVar26 != 0) {
          uVar6 = puVar33[2];
LAB_0010301b:
          uVar46 = uVar46 + 1;
          if ((uVar6 == 0) || ((int)uVar46 < (int)(uint)uVar6)) {
            if (iVar15 <= iVar48) goto LAB_00100381;
            *puVar31 = uVar40;
            iVar44 = iVar44 + 1;
            puVar31[1] = uVar46;
            puVar28 = puVar31 + 3;
            iVar48 = iVar48 + 1;
          }
          else {
            if (iVar15 <= iVar48) goto LAB_00100381;
            iVar44 = iVar44 + 1;
            *puVar31 = uVar23 + 3;
            puVar31[1] = 0;
            puVar28 = puVar31 + 3;
            iVar48 = iVar48 + 1;
          }
          goto LAB_001004fe;
        }
        goto LAB_00103d86;
      default:
        if (uVar26 == 0) {
          iVar44 = iVar44 + 1;
        }
        else {
          if (iVar15 <= iVar48) goto LAB_00100381;
          *puVar31 = uVar23;
          iVar44 = iVar44 + 1;
          puVar31[1] = 0;
          puVar28 = puVar31 + 3;
          iVar48 = iVar48 + 1;
        }
        goto LAB_001004fe;
      }
    }
    puVar33 = puVar34 + 0x11;
    if (local_13c != 0) {
      if (uVar24 < 0x100) {
        uVar26 = *(byte *)((long)puVar34 + (ulong)((uVar24 >> 3) + 2)) >> ((byte)uVar24 & 7) & 1;
      }
      else {
        uVar26 = (uint)(iVar16 == 0x6f);
      }
      goto LAB_00101757;
    }
LAB_00103d05:
    uVar37 = *puVar33;
    uVar23 = (uint)((long)puVar33 - lVar9 >> 1);
    switch(uVar37) {
    case 0x62:
    case 99:
    case 0x6a:
      uVar26 = 0;
switchD_0010178a_caseD_62:
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      puVar47[1] = 0;
      *puVar47 = uVar23 + 1;
      if (uVar26 == 0) {
        iVar44 = iVar44 + 1;
        uVar30 = (ulong)(uVar25 + 1);
        puVar47 = puVar47 + 3;
      }
      else {
        if (uVar37 != 0x6a) {
          uVar30 = (ulong)(uVar25 + 1);
          puVar47 = puVar47 + 3;
        }
        if (iVar15 <= iVar48) goto LAB_00100381;
        *puVar31 = uVar40;
        iVar44 = iVar44 + 1;
        puVar31[1] = 0;
        puVar28 = puVar31 + 3;
        iVar48 = iVar48 + 1;
      }
      break;
    case 100:
    case 0x65:
    case 0x6b:
      if ((int)puVar35[1] < 1) {
LAB_00105fc1:
        iVar44 = iVar44 + 1;
        break;
      }
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      puVar47[1] = 0;
      *puVar47 = uVar23 + 1;
LAB_00103d69:
      iVar44 = iVar44 + 1;
      uVar30 = (ulong)(uVar25 + 1);
      puVar47 = puVar47 + 3;
      break;
    case 0x66:
    case 0x67:
    case 0x6c:
      uVar26 = 0;
switchD_0010178a_caseD_66:
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      puVar47[1] = 0;
      *puVar47 = uVar23 + 1;
      if (uVar26 == 0) {
        iVar44 = iVar44 + 1;
        uVar30 = (ulong)(uVar25 + 1);
        puVar47 = puVar47 + 3;
      }
      else {
        if (uVar37 != 0x6c) {
          uVar30 = (ulong)(uVar25 + 1);
          puVar47 = puVar47 + 3;
        }
        if (iVar15 <= iVar48) goto LAB_00100381;
        *puVar31 = uVar23 + 1;
        iVar44 = iVar44 + 1;
        puVar31[1] = 0;
        puVar28 = puVar31 + 3;
        iVar48 = iVar48 + 1;
      }
      break;
    case 0x68:
    case 0x69:
    case 0x6d:
      if ((int)(uint)puVar33[1] <= (int)puVar35[1]) {
        if (iVar15 <= (int)uVar25) goto LAB_00100381;
        puVar47[1] = 0;
        *puVar47 = uVar23 + 3;
LAB_00105ebd:
        iVar44 = iVar44 + 1;
        uVar30 = (ulong)(uVar25 + 1);
        puVar47 = puVar47 + 3;
        break;
      }
LAB_00103d86:
      iVar44 = iVar44 + 1;
      break;
    default:
      iVar44 = iVar44 + 1;
    }
    break;
      case 0x75:
    uVar25 = 0;
    local_70 = local_118;
    lVar42 = lVar9 + (ulong)puVar34[1] * 2;
    if (*(long *)(param_1 + 0x18) != lVar42) {
      uVar25 = (uint)*(ushort *)(lVar42 + 4);
    }
    uVar26 = *(uint *)(local_118 + 0xc);
    if (uVar26 < 3000) {
      iVar22 = more_workspace(&local_70,2000,param_1);
      if (iVar22 != 0) goto LAB_00100678;
      uVar26 = *(uint *)(local_70 + 0xc);
    }
    local_118 = local_70;
    *(uint *)(local_70 + 0xc) = uVar26 - 3000;
    lVar4 = local_70 + ((ulong)*(uint *)(local_70 + 8) - (ulong)uVar26) * 4;
    plVar3 = *(long **)(param_1 + 0xa8);
    for (plVar12 = plVar3; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      if (((*(uint *)(plVar12 + 3) == uVar25) && ((ushort *)plVar12[1] == local_150)) &&
         (plVar12[2] == *(long *)(param_1 + 0x38))) {
        iVar22 = -0x34;
        goto LAB_00100678;
      }
    }
    *(long ***)(param_1 + 0xa8) = &local_68;
    puStack_60 = local_150;
    local_68 = plVar3;
    local_58 = *(long *)(param_1 + 0x38);
    local_50 = uVar25;
    iVar22 = internal_dfa_match(param_1,lVar42,local_150,(long)local_150 - (long)puVar7 >> 1,lVar4,
                                1000,lVar4 + 8000,1000,iVar1,local_70);
    *(int *)(local_118 + 0xc) = *(int *)(local_118 + 0xc) + 3000;
    *(long **)(param_1 + 0xa8) = local_68;
    if (iVar22 == 0) {
      iVar22 = -0x27;
      goto LAB_00100678;
    }
    if (iVar22 < 1) {
      if (iVar22 != -1) goto LAB_00100678;
    }
    else {
      lVar42 = (long)(iVar22 * 2 + -2);
      puVar35 = puVar47;
      do {
        lVar13 = *(long *)(lVar4 + 8 + lVar42 * 8);
        lVar14 = *(long *)(lVar4 + lVar42 * 8);
        lVar38 = lVar13 - lVar14;
        if (uVar45 != 0) {
          for (puVar34 = puVar7 + lVar14; puVar34 < puVar7 + lVar13; puVar34 = puVar34 + 1) {
            lVar38 = lVar38 - (ulong)((*puVar34 & 0xfc00) == 0xdc00);
          }
        }
        if (lVar38 == 0) {
          if (iVar15 <= (int)uVar30) goto LAB_00104c60;
          *puVar35 = uVar40 + 2;
          uVar30 = (ulong)((int)uVar30 + 1);
          puVar47 = puVar35 + 3;
          puVar35[1] = 0;
        }
        else {
          if (iVar15 <= iVar48) goto LAB_00104c60;
          *puVar31 = -uVar40 - 2;
          puVar31[1] = 0;
          puVar31[2] = (int)lVar38 - 1;
          puVar47 = puVar35;
          puVar31 = puVar31 + 3;
          iVar48 = iVar48 + 1;
        }
        lVar42 = lVar42 + -2;
        puVar35 = puVar47;
      } while (-1 < (int)lVar42);
    }
    iVar44 = iVar44 + 1;
    puVar28 = puVar31;
    break;
      case 0x76:
      case 0x77:
    iVar22 = do_callout_dfa(puVar34,param_5,local_128,local_150,param_1,0,&local_70);
    if (iVar22 < 0) goto LAB_00100678;
    puVar31 = puVar47;
    if (iVar22 == 0) {
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      puVar47[1] = 0;
      uVar30 = (ulong)(uVar25 + 1);
      puVar31 = puVar47 + 3;
      *puVar47 = uVar40 + (uint)local_70;
    }
    iVar44 = iVar44 + 1;
    puVar47 = puVar31;
    break;
      case 0x78:
    do {
      puVar34 = puVar34 + puVar34[1];
    } while (*puVar34 == 0x78);
    if (iVar15 <= (int)uVar25) goto LAB_00100381;
    iVar44 = iVar44 + 1;
    puVar47[1] = 0;
    *puVar47 = (uint)((long)puVar34 - lVar9 >> 1);
    puVar47 = puVar47 + 3;
    uVar30 = (ulong)(uVar25 + 1);
    break;
      for (int i = 0; i < 3; i++) {
         case 0x79:
      }
      case 0x7c:
    if (param_2 != puVar34) {
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      puVar47[1] = 0;
      *puVar47 = uVar40 + 2;
      if (iVar16 == 0x79) {
        iVar44 = iVar44 + 1;
        puVar47 = puVar47 + 3;
        uVar30 = (ulong)(uVar25 + 1);
      }
      else {
        if (iVar15 <= (int)(uVar25 + 1)) goto LAB_00100381;
        uVar37 = puVar34[1];
        iVar44 = iVar44 + 1;
        puVar47[4] = 0;
        puVar47[3] = uVar40 - uVar37;
        puVar47 = puVar47 + 6;
        uVar30 = (ulong)(uVar25 + 2);
      }
      break;
    }
    if (local_150 <= local_128) {
      if ((*(uint *)(param_1 + 0x6c) & 4) != 0) {
        iVar44 = iVar44 + 1;
        break;
      }
      if (((*(uint *)(param_1 + 0x6c) & 8) != 0) &&
         (local_128 <= puVar7 + *(long *)(param_1 + 0x48))) {
        iVar44 = iVar44 + 1;
        break;
      }
    }
    if (iVar49 < 0) {
      if (1 < param_6) {
        iVar49 = 1;
        goto LAB_001040f9;
      }
LAB_0010549c:
      iVar49 = 0;
    }
    else {
      if (iVar49 != 0) {
        iVar49 = iVar49 + 1;
        if (iVar49 * 2 <= (int)param_6) {
          _pcre2_memmove16(param_5 + 2,param_5,(long)(iVar49 * 2 + -2) << 3);
          goto LAB_001040f9;
        }
      }
      if ((int)(param_6 - 2) < 1) {
        if (param_6 != 2) goto LAB_0010549c;
      }
      else {
        _pcre2_memmove16(param_5 + 2,param_5,(long)(int)(param_6 - 2) * 8);
      }
      iVar49 = 0;
LAB_001040f9:
      *param_5 = (long)local_128 - (long)puVar7 >> 1;
      param_5[1] = (long)local_150 - (long)puVar7 >> 1;
    }
    iVar22 = iVar49;
    if ((*(byte *)(param_1 + 0x6c) & 0x80) != 0) goto LAB_00100678;
    iVar44 = iVar44 + 1;
    break;
      for (int i = 0; i < 3; i++) {
         case 0x7f:
      }
      case 0x82:
    puVar33 = puVar34 + puVar34[1];
    local_70 = local_118;
    uVar40 = *(uint *)(local_118 + 0xc);
    if (uVar40 < 0x3ec) {
      iVar22 = more_workspace(&local_70,4,param_1);
      if (iVar22 != 0) goto LAB_00100678;
      uVar40 = *(uint *)(local_70 + 0xc);
    }
    local_118 = local_70;
    *(uint *)(local_70 + 0xc) = uVar40 - 0x3ec;
    lVar42 = local_70 + ((ulong)*(uint *)(local_70 + 8) - (ulong)uVar40) * 4;
    uVar37 = *puVar33;
    while (uVar37 == 0x78) {
      puVar33 = puVar33 + puVar33[1];
      uVar37 = *puVar33;
    }
    iVar22 = internal_dfa_match(param_1,puVar34,local_150,(long)local_150 - (long)puVar7 >> 1,lVar42
                                ,2,lVar42 + 0x10,1000,iVar1,local_70);
    *(int *)(local_118 + 0xc) = *(int *)(local_118 + 0xc) + 0x3ec;
    if (iVar22 < -1) goto LAB_00100678;
    puVar31 = puVar47;
    if ((iVar22 == -1) != ((iVar16 - 0x7fU & 0xfffffffd) == 0)) {
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      uVar30 = (ulong)(uVar25 + 1);
      puVar31 = puVar47 + 3;
      puVar47[1] = 0;
      *puVar47 = (uint)((long)puVar33 + (4 - lVar9) >> 1);
    }
    iVar44 = iVar44 + 1;
    puVar47 = puVar31;
    break;
      case 0x85:
    local_70 = local_118;
    uVar40 = *(uint *)(local_118 + 0xc);
    if (uVar40 < 0x3ec) {
      iVar22 = more_workspace(&local_70,4,param_1);
      if (iVar22 != 0) goto LAB_00100678;
      uVar40 = *(uint *)(local_70 + 0xc);
    }
    local_118 = local_70;
    *(uint *)(local_70 + 0xc) = uVar40 - 0x3ec;
    plVar3 = (long *)(local_70 + ((ulong)*(uint *)(local_70 + 8) - (ulong)uVar40) * 4);
    iVar22 = internal_dfa_match(param_1,puVar34,local_150,(long)local_150 - (long)puVar7 >> 1,plVar3
                                ,2,plVar3 + 2,1000,iVar1,local_70);
    *(int *)(local_118 + 0xc) = *(int *)(local_118 + 0xc) + 0x3ec;
    if (-1 < iVar22) {
      lVar42 = plVar3[1] - *plVar3;
      do {
        puVar34 = puVar34 + puVar34[1];
      } while (*puVar34 == 0x78);
      uVar26 = 0xffffffff;
      iVar22 = (int)((long)puVar34 - lVar9 >> 1);
      uVar40 = iVar22 + 2;
      if ((ushort)(*puVar34 - 0x7a) < 2) {
        uVar26 = iVar22 - (uint)puVar34[1];
      }
      if (lVar42 == 0) {
        if ((int)uVar25 < iVar15) {
          *puVar47 = uVar40;
          iVar44 = iVar44 + 1;
          puVar47[1] = 0;
          puVar47 = puVar47 + 3;
          uVar30 = (ulong)(uVar25 + 1);
          break;
        }
      }
      else {
        iVar44 = iVar44 + 1;
        if ((iVar48 == 0) && ((int)uVar25 <= iVar44)) {
          local_150 = local_150 + lVar42;
          if (5 < iVar17) {
            *puVar31 = uVar40;
            puVar31[1] = 0;
            puVar28 = puVar31 + 3;
            if ((int)uVar26 < 0) {
              local_13c = 0;
              iVar48 = 1;
            }
            else {
              iVar44 = 0;
              local_13c = 0;
              local_170[1] = 0;
              *local_170 = uVar26;
              puVar47 = local_170 + 3;
              uVar30 = 1;
              iVar48 = 1;
            }
            break;
          }
        }
        else {
          if (uVar45 != 0) {
            for (puVar34 = puVar7 + *plVar3; puVar34 < puVar7 + plVar3[1]; puVar34 = puVar34 + 1) {
              lVar42 = lVar42 - (ulong)((*puVar34 & 0xfc00) == 0xdc00);
            }
          }
          if (iVar48 < iVar15) {
            puVar31[1] = 0;
            uVar25 = (int)lVar42 - 1;
            *puVar31 = -uVar40;
            puVar31[2] = uVar25;
            if ((int)uVar26 < 0) {
              puVar28 = puVar31 + 3;
              iVar48 = iVar48 + 1;
            }
            else {
              if (iVar15 <= iVar48 + 1) goto LAB_00104c60;
              puVar31[5] = uVar25;
              puVar31[3] = -uVar26;
              puVar31[4] = 0;
              puVar28 = puVar31 + 6;
              iVar48 = iVar48 + 2;
            }
            break;
          }
        }
      }
      goto LAB_00104c60;
    }
    if (iVar22 != -1) goto LAB_00100678;
    iVar44 = iVar44 + 1;
    break;
      case 0x87:
      case 0x8c:
    do {
      iVar22 = (int)uVar30;
      uVar30 = (ulong)(iVar22 + 1);
      if (iVar15 <= iVar22) goto LAB_00100381;
      puVar47[1] = 0;
      puVar31 = puVar47 + 3;
      *puVar47 = (int)((long)puVar34 - lVar9 >> 1) + 2;
      puVar34 = puVar34 + puVar34[1];
      puVar47 = puVar31;
    } while (*puVar34 == 0x78);
    iVar44 = iVar44 + 1;
    break;
      case 0x88:
      case 0x8a:
      case 0x8d:
      case 0x8f:
      case 0x99:
    local_70 = local_118;
    uVar40 = *(uint *)(local_118 + 0xc);
    if (uVar40 < 0x3ec) {
      iVar22 = more_workspace(&local_70,4,param_1);
      if (iVar22 != 0) goto LAB_00100678;
      uVar40 = *(uint *)(local_70 + 0xc);
    }
    local_118 = local_70;
    *(uint *)(local_70 + 0xc) = uVar40 - 0x3ec;
    plVar3 = (long *)(local_70 + ((ulong)*(uint *)(local_70 + 8) - (ulong)uVar40) * 4);
    if (iVar16 == 0x99) {
      puVar34 = puVar34 + 1;
    }
    lVar42 = 0;
    puVar33 = local_150;
    while (iVar22 = internal_dfa_match(param_1,puVar34,puVar33,(long)local_150 - (long)puVar7 >> 1,
                                       plVar3,2,plVar3 + 2,1000,iVar1,local_118), -1 < iVar22) {
      if (plVar3[1] - *plVar3 == 0) goto LAB_001036f2;
      puVar33 = puVar33 + (plVar3[1] - *plVar3);
      lVar42 = lVar42 + 1;
    }
    if (iVar22 != -1) goto LAB_00100678;
LAB_001036f2:
    iVar44 = iVar44 + 1;
    *(int *)(local_118 + 0xc) = *(int *)(local_118 + 0xc) + 0x3ec;
    if ((lVar42 != 0) || (iVar16 == 0x99)) {
      do {
        puVar34 = puVar34 + puVar34[1];
      } while (*puVar34 == 0x78);
      uVar40 = (int)((long)puVar34 - lVar9 >> 1) + 2;
      if ((iVar48 == 0) && ((int)uVar25 <= iVar44)) {
        if (iVar17 < 6) goto LAB_00100381;
        *puVar31 = uVar40;
        puVar31[1] = 0;
        local_13c = 0;
        puVar28 = puVar31 + 3;
        iVar48 = 1;
        local_150 = puVar33;
      }
      else {
        lVar42 = (long)puVar33 - (long)local_150 >> 1;
        iVar22 = (int)lVar42;
        puVar34 = local_150;
        if (uVar45 != 0) {
          for (; puVar34 < puVar33; puVar34 = puVar34 + 1) {
            lVar42 = lVar42 - (ulong)((*puVar34 & 0xfc00) == 0xdc00);
            iVar22 = (int)lVar42;
          }
        }
        if (iVar15 <= iVar48) goto LAB_00100381;
        *puVar31 = -uVar40;
        puVar31[1] = 0;
        puVar31[2] = iVar22 - 1;
        puVar28 = puVar31 + 3;
        iVar48 = iVar48 + 1;
      }
    }
    break;
      case 0x89:
      case 0x8e:
    if (iVar15 <= (int)uVar25) goto LAB_00100381;
    puVar47[1] = 0;
    *puVar47 = (int)((long)(int)uVar40 * 2 >> 1) + 3;
    puVar34 = puVar34 + puVar34[1];
    if (*puVar34 == 0x78) {
      uVar40 = uVar25 + 2;
      if (iVar15 <= (int)(uVar25 + 1)) goto LAB_00100381;
      puVar47 = puVar47 + 3;
      while( true ) {
        puVar47[1] = 0;
        *puVar47 = (int)((long)puVar34 - lVar9 >> 1) + 2;
        puVar34 = puVar34 + puVar34[1];
        if (*puVar34 != 0x78) break;
        uVar40 = uVar40 + 1;
        puVar47 = puVar47 + 3;
        if (uVar40 == iVar15 + 1U) goto LAB_00100381;
      }
      iVar44 = iVar44 + 1;
      puVar47 = puVar47 + 3;
      uVar30 = (ulong)uVar40;
    }
    else {
      iVar44 = iVar44 + 1;
      puVar47 = puVar47 + 3;
      uVar30 = (ulong)(uVar25 + 1);
    }
    break;
      case 0x8b:
      case 0x90:
    uVar26 = (uint)puVar34[1];
    uVar37 = puVar34[2];
    if ((ushort)(uVar37 - 0x76) < 2) {
      iVar22 = do_callout_dfa(puVar34,param_5,local_128,local_150,param_1,2);
      if (iVar22 < 0) goto LAB_00100678;
      if (iVar22 != 0) {
        iVar44 = iVar44 + 1;
        break;
      }
      puVar34 = puVar34 + local_70;
      uVar37 = puVar34[2];
    }
    switch(uVar37) {
    case 0x91:
    case 0x92:
    case 0x94:
switchD_00102028_caseD_91:
      iVar22 = -0x28;
      goto LAB_00100678;
    case 0x93:
      if (puVar34[3] != 0xffff) goto switchD_00102028_caseD_91;
      if (*(long *)(param_1 + 0xa8) == 0) {
        if (iVar15 <= (int)uVar25) goto LAB_00100381;
        iVar44 = iVar44 + 1;
        uVar30 = (ulong)(uVar25 + 1);
        puVar47[1] = 0;
        *puVar47 = uVar40 + 2 + uVar26;
        puVar47 = puVar47 + 3;
      }
      else {
        if (iVar15 <= (int)uVar25) goto LAB_00100381;
        iVar44 = iVar44 + 1;
        uVar30 = (ulong)(uVar25 + 1);
        *puVar47 = uVar40 + 4;
        puVar47[1] = 0;
        puVar47 = puVar47 + 3;
      }
      break;
    case 0x95:
    case 0xa3:
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      iVar44 = iVar44 + 1;
      uVar30 = (ulong)(uVar25 + 1);
      puVar47[1] = 0;
      *puVar47 = uVar40 + 2 + uVar26;
      puVar47 = puVar47 + 3;
      break;
    case 0x96:
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      iVar44 = iVar44 + 1;
      uVar30 = (ulong)(uVar25 + 1);
      *puVar47 = uVar40 + 3;
      puVar47[1] = 0;
      puVar47 = puVar47 + 3;
      break;
    default:
      puVar33 = puVar34 + 2 + puVar34[3];
      local_70 = local_118;
      uVar23 = *(uint *)(local_118 + 0xc);
      if (uVar23 < 0x3ec) {
        iVar22 = more_workspace(&local_70,4,param_1);
        if (iVar22 != 0) goto LAB_00100678;
        uVar23 = *(uint *)(local_70 + 0xc);
      }
      local_118 = local_70;
      *(uint *)(local_70 + 0xc) = uVar23 - 0x3ec;
      lVar42 = local_70 + ((ulong)*(uint *)(local_70 + 8) - (ulong)uVar23) * 4;
      uVar6 = *puVar33;
      while (uVar6 == 0x78) {
        puVar33 = puVar33 + puVar33[1];
        uVar6 = *puVar33;
      }
      iVar22 = internal_dfa_match(param_1,puVar34 + 2,local_150,(long)local_150 - (long)puVar7 >> 1,
                                  lVar42,2,lVar42 + 0x10,1000,iVar1,local_70);
      *(int *)(local_118 + 0xc) = *(int *)(local_118 + 0xc) + 0x3ec;
      if (iVar22 < -1) goto LAB_00100678;
      if ((iVar22 == -1) == ((uVar37 - 0x7f & 0xfffd) == 0)) {
        if (iVar15 <= (int)uVar25) goto LAB_00104c60;
        uVar26 = uVar40 + 2 + uVar26;
      }
      else {
        if (iVar15 <= (int)uVar25) {
LAB_00104c60:
          iVar22 = -0x2b;
          goto LAB_00100678;
        }
        uVar26 = (uint)((long)puVar33 + (4 - lVar9) >> 1);
      }
      *puVar47 = uVar26;
      iVar44 = iVar44 + 1;
      puVar47[1] = 0;
      puVar47 = puVar47 + 3;
      uVar30 = (ulong)(uVar25 + 1);
    }
    break;
      case 0x97:
      case 0x98:
    if (iVar15 <= (int)uVar25) goto LAB_00100381;
    uVar37 = puVar34[2];
    puVar47[1] = 0;
    *puVar47 = uVar40 + 1;
    puVar34 = puVar34 + (ulong)uVar37 + 1;
    uVar37 = *puVar34;
    while (uVar37 == 0x78) {
      puVar34 = puVar34 + puVar34[1];
      uVar37 = *puVar34;
    }
    if (iVar15 <= (int)(uVar25 + 1)) goto LAB_00100381;
    puVar47[4] = 0;
    iVar44 = iVar44 + 1;
    puVar47[3] = (int)((long)puVar34 - lVar9 >> 1) + 2;
    puVar47 = puVar47 + 6;
    uVar30 = (ulong)(uVar25 + 2);
    break;
      case 0xa3:
    local_b8 = local_b8 + 1;
    iVar44 = iVar44 + 1;
    break;
      case 0xa7:
    puVar34 = puVar34 + (ulong)puVar34[2] + 1;
    uVar37 = *puVar34;
    while (uVar37 == 0x78) {
      puVar34 = puVar34 + puVar34[1];
      uVar37 = *puVar34;
    }
    if (iVar15 <= (int)uVar25) goto LAB_00100381;
    iVar44 = iVar44 + 1;
    puVar47[1] = 0;
    *puVar47 = (int)((long)puVar34 - lVar9 >> 1) + 2;
    puVar47 = puVar47 + 3;
    uVar30 = (ulong)(uVar25 + 1);
    break;
      case 0xa9:
      case 0xaa:
switchD_001006dc_caseD_a9:
    iVar22 = (int)uVar41;
    if (puVar7 < local_150) {
      puVar34 = local_150 + -1;
      if (puVar34 < *(ushort **)(param_1 + 0x30)) {
        *(ushort **)(param_1 + 0x30) = puVar34;
      }
      uVar41 = (ulong)local_150[-1];
      if (uVar45 == 0) {
LAB_001021cd:
        uVar26 = (uint)uVar41;
        if (iVar22 - 0xa9U < 2) goto LAB_001059cc;
        if (0xff < uVar26) goto LAB_00105050;
        if ((*(byte *)(lVar2 + uVar41) & 0x10) == 0) {
          if (local_13c == 0) goto LAB_001044e1;
          if (*(ushort **)(param_1 + 0x38) <= local_150) {
            if (uVar45 != 0) {
              bVar53 = false;
              goto LAB_001034ec;
            }
            *(ushort **)(param_1 + 0x38) = local_150 + 1;
          }
          bVar53 = false;
          goto LAB_00102224;
        }
        bVar53 = true;
        if (local_13c != 0) {
          if (*(ushort **)(param_1 + 0x38) <= local_150) {
            if (uVar45 != 0) {
              bVar53 = true;
              goto LAB_001034ec;
            }
            *(ushort **)(param_1 + 0x38) = local_150 + 1;
          }
          bVar53 = true;
          goto LAB_00102224;
        }
      }
      else {
        uVar37 = local_150[-1] & 0xfc00;
        if (uVar37 == 0xdc00) {
          puVar34 = local_150 + -2;
          uVar41 = (ulong)local_150[-2];
          uVar37 = local_150[-2] & 0xfc00;
        }
        if (uVar37 != 0xd800) goto LAB_001021cd;
        if (1 < iVar22 - 0xa9U) {
LAB_00105050:
          if (local_13c != 0) {
            if (*(ushort **)(param_1 + 0x38) <= local_150) goto LAB_001034d7;
            bVar53 = false;
            goto LAB_00102224;
          }
          goto LAB_001044e1;
        }
        uVar26 = (((uint)uVar41 & 0x3ff) << 10 | puVar34[1] & 0x3ff) + 0x10000;
LAB_001059cc:
        if ((*(uint *)(&_pcre2_ucp_gentype_16 +
                      (ulong)(byte)(&DAT_00109021)
                                   [(ulong)*(ushort *)
                                            (&_pcre2_ucd_stage2_16 +
                                            (long)(int)((uVar26 & 0x7f) +
                                                       (uint)*(ushort *)
                                                              (&_pcre2_ucd_stage1_16 +
                                                              (long)((int)uVar26 >> 7) * 2) * 0x80)
                                            * 2) * 0xc] * 4) & 0xfffffffd) == 1) {
          bVar53 = true;
          if (local_13c != 0) {
            if (*(ushort **)(param_1 + 0x38) <= local_150) {
              if (uVar45 != 0) goto LAB_00105a58;
LAB_00105c59:
              *(ushort **)(param_1 + 0x38) = local_150 + 1;
            }
LAB_00105aa8:
            bVar53 = true;
            goto LAB_00103548;
          }
        }
        else {
          if (((&DAT_00109021)
               [(ulong)*(ushort *)
                        (&_pcre2_ucd_stage2_16 +
                        (long)(int)((uVar26 & 0x7f) +
                                   (uint)*(ushort *)
                                          (&_pcre2_ucd_stage1_16 + (long)((int)uVar26 >> 7) * 2) *
                                   0x80) * 2) * 0xc] - 0xc & 0xfb) != 0) {
            if (local_13c != 0) {
              if (*(ushort **)(param_1 + 0x38) <= local_150) {
                if (uVar45 != 0) {
                  bVar53 = false;
                  goto LAB_001034ec;
                }
                *(ushort **)(param_1 + 0x38) = local_150 + 1;
              }
              bVar53 = false;
              goto LAB_00103548;
            }
            goto LAB_001044e1;
          }
          bVar53 = true;
          if (local_13c != 0) {
            if (*(ushort **)(param_1 + 0x38) <= local_150) {
              if (uVar45 == 0) goto LAB_00105c59;
LAB_00105a58:
              bVar53 = true;
              goto LAB_001034ec;
            }
            goto LAB_00105aa8;
          }
        }
      }
    }
    else if (local_13c == 0) {
LAB_001044e1:
      bVar53 = false;
    }
    else {
      bVar53 = false;
      if (*(ushort **)(param_1 + 0x38) <= local_150) {
LAB_001034d7:
        bVar53 = false;
        puVar34 = local_150 + 1;
        if (uVar45 != 0) {
LAB_001034ec:
          puVar34 = local_150 + 1;
          if ((puVar34 < *(ushort **)(param_1 + 0x28)) && ((local_150[1] & 0xfc00) == 0xdc00)) {
            puVar34 = local_150 + 2;
          }
        }
        *(ushort **)(param_1 + 0x38) = puVar34;
      }
      if (iVar22 - 0xa9U < 2) {
LAB_00103548:
        uVar26 = uVar24 + 0x7f;
        if (-1 < (int)uVar24) {
          uVar26 = uVar24;
        }
        if ((*(uint *)(&_pcre2_ucp_gentype_16 +
                      (ulong)(byte)(&DAT_00109021)
                                   [(ulong)*(ushort *)
                                            (&_pcre2_ucd_stage2_16 +
                                            (long)(int)((uint)*(ushort *)
                                                               (&_pcre2_ucd_stage1_16 +
                                                               (long)((int)uVar26 >> 7) * 2) * 0x80
                                                       + (int)uVar24 % 0x80) * 2) * 0xc] * 4) &
            0xfffffffd) == 1) {
          bVar53 = (bool)(bVar53 ^ 1);
        }
        else {
          bVar53 = (bool)(((&DAT_00109021)
                           [(ulong)*(ushort *)
                                    (&_pcre2_ucd_stage2_16 +
                                    (long)(int)((uint)*(ushort *)
                                                       (&_pcre2_ucd_stage1_16 +
                                                       (long)((int)uVar26 >> 7) * 2) * 0x80 +
                                               (int)uVar24 % 0x80) * 2) * 0xc] - 0xc & 0xfb) == 0 ^
                         bVar53);
        }
      }
      else {
LAB_00102224:
        if (uVar24 < 0x100) {
          bVar53 = (bool)(*(byte *)(lVar2 + (ulong)uVar24) >> 4 & 1 ^ bVar53);
        }
      }
    }
    if ((iVar22 == 4 || iVar22 == 0xa9) == bVar53) {
      iVar44 = iVar44 + 1;
    }
    else {
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      iVar44 = iVar44 + 1;
      *puVar47 = uVar40 + 1;
      puVar47[1] = 0;
      puVar47 = puVar47 + 3;
      uVar30 = (ulong)(uVar25 + 1);
    }
    break;
      case 0xab:
      case 0xac:
    iVar22 = 0;
    goto LAB_00100678;
      case 0x181:
      case 0x182:
      case 0x18a:
    local_b0 = 0;
    goto LAB_00101b43;
      case 0x183:
      case 0x184:
      case 0x18b:
    uVar26 = puVar35[1];
    puVar35 = puVar47;
    if (0 < (int)uVar26) {
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      puVar47[1] = 0;
      uVar30 = (ulong)(uVar25 + 1);
      puVar35 = puVar47 + 3;
      *puVar47 = uVar40 + 4;
    }
    puVar47 = puVar35;
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      break;
    }
    uVar25 = uVar24 + 0x7f;
    if (-1 < (int)uVar24) {
      uVar25 = uVar24;
    }
    lVar42 = (ulong)*(ushort *)
                     (&_pcre2_ucd_stage2_16 +
                     (long)(int)((uint)*(ushort *)
                                        (&_pcre2_ucd_stage1_16 + (long)((int)uVar25 >> 7) * 2) *
                                 0x80 + (int)uVar24 % 0x80) * 2) * 0xc;
    switch(puVar34[2]) {
    case 0:
      goto switchD_00101abe_caseD_0;
    case 1:
      bVar53 = (byte)((&DAT_00109021)[lVar42] - 8) < 2 || (&DAT_00109021)[lVar42] == '\x05';
      break;
    case 2:
      bVar53 = *(uint *)(&_pcre2_ucp_gentype_16 + (ulong)(byte)(&DAT_00109021)[lVar42] * 4) ==
               (uint)puVar34[3];
      break;
    case 3:
      bVar53 = (ushort)(byte)(&DAT_00109021)[lVar42] == puVar34[3];
      break;
    case 4:
      bVar53 = (ushort)(byte)(&_pcre2_ucd_records_16)[lVar42] == puVar34[3];
      break;
    case 5:
      uVar37 = puVar34[3];
      bVar53 = true;
      if ((byte)(&_pcre2_ucd_records_16)[lVar42] != uVar37) {
        bVar53 = (1 << ((byte)uVar37 & 0x1f) &
                 *(uint *)(&_pcre2_ucd_script_sets_16 +
                          ((ulong)(*(ushort *)(_pcre2_extuni_16 + lVar42) & 0x3ff) +
                          (ulong)(uVar37 >> 5)) * 4)) != 0;
      }
      break;
    case 6:
      bVar53 = (*(uint *)(&_pcre2_ucp_gentype_16 + (ulong)(byte)(&DAT_00109021)[lVar42] * 4) &
               0xfffffffd) == 1;
      break;
    case 7:
    case 8:
      if (uVar24 != 0x180e) {
        if (0x180e < uVar24) {
          if (uVar24 < 0x2060) {
            if (uVar24 < 0x2028) {
              if (uVar24 - 0x2000 < 0xb) goto switchD_00101abe_caseD_0;
            }
            else {
              bVar53 = true;
              if ((0x80000000000083U >> ((ulong)(uVar24 - 0x2028) & 0x3f) & 1) != 0) break;
            }
          }
          else if (uVar24 == 0x3000) goto switchD_00101abe_caseD_0;
          goto LAB_00103167;
        }
        if (uVar24 != 0x85) {
          if (uVar24 < 0x86) {
            bVar53 = true;
            if (uVar24 < 0xe) {
              if (uVar24 < 9) {
LAB_00103167:
                bVar53 = *(int *)(&_pcre2_ucp_gentype_16 + (ulong)(byte)(&DAT_00109021)[lVar42] * 4)
                         == 6;
              }
            }
            else if (uVar24 != 0x20) goto LAB_00103167;
            break;
          }
          if ((uVar24 != 0xa0) && (uVar24 != 0x1680)) goto LAB_00103167;
        }
      }
      goto switchD_00101abe_caseD_0;
    case 9:
      bVar53 = true;
      if ((*(uint *)(&_pcre2_ucp_gentype_16 + (ulong)(byte)(&DAT_00109021)[lVar42] * 4) & 0xfffffffd
          ) != 1) {
        bVar53 = ((&DAT_00109021)[lVar42] - 0xc & 0xfb) == 0;
      }
      break;
    case 10:
      puVar39 = (uint *)(&_pcre2_ucd_caseless_sets_16 + (ulong)puVar34[3] * 4);
      do {
        uVar25 = *puVar39;
        if (uVar24 < uVar25) {
          bVar53 = false;
          goto LAB_0010317d;
        }
        puVar39 = puVar39 + 1;
      } while (uVar25 != uVar24);
switchD_00101abe_caseD_0:
      bVar53 = true;
      break;
    case 0xb:
      if (((uVar24 & 0xffffffdf) == 0x40) || (uVar24 == 0x24)) goto switchD_00101abe_caseD_0;
      bVar53 = uVar24 - 0xa0 < 0xd760 || 0xdfff < uVar24;
      break;
    case 0xc:
      bVar53 = *(ushort *)(_pcre2_extuni_16 + lVar42) >> 0xb == puVar34[3];
      break;
    case 0xd:
      bVar53 = (1 << ((byte)puVar34[3] & 0x1f) &
               *(uint *)(&_pcre2_ucd_boolprop_sets_16 +
                        ((ulong)(*(ushort *)(&DAT_0010902a + lVar42) & 0xfff) +
                        (ulong)(puVar34[3] >> 5)) * 4)) != 0;
      break;
    default:
      bVar53 = iVar16 != 0x10;
    }
LAB_0010317d:
    if ((uVar23 == 0x10) == bVar53) {
      if ((0 < (int)uVar26) && (iVar16 == 0x18b)) {
        uVar30 = (ulong)((int)uVar30 - 1);
        puVar35 = puVar35 + -3;
      }
      if (iVar15 <= iVar48) goto LAB_00100381;
      *puVar31 = uVar40;
      iVar44 = iVar44 + 1;
      puVar31[1] = uVar26 + 1;
      puVar47 = puVar35;
      puVar28 = puVar31 + 3;
      iVar48 = iVar48 + 1;
    }
    else {
      iVar44 = iVar44 + 1;
    }
    break;
      case 0x185:
      case 0x186:
      case 0x18c:
    local_b0 = 4;
LAB_00101b43:
    uVar26 = uVar25 + 1;
    if (iVar15 <= (int)uVar25) goto LAB_00100381;
    puVar47[1] = 0;
    puVar35 = puVar47 + 3;
    *puVar47 = uVar40 + 4;
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      puVar47 = puVar35;
      uVar30 = (ulong)uVar26;
      break;
    }
    uVar25 = uVar24 + 0x7f;
    if (-1 < (int)uVar24) {
      uVar25 = uVar24;
    }
    lVar42 = (ulong)*(ushort *)
                     (&_pcre2_ucd_stage2_16 +
                     (long)(int)((int)uVar24 % 0x80 +
                                (uint)*(ushort *)
                                       (&_pcre2_ucd_stage1_16 + (long)((int)uVar25 >> 7) * 2) * 0x80
                                ) * 2) * 0xc;
    switch(puVar34[2]) {
    case 0:
      goto switchD_00101bf3_caseD_0;
    case 1:
      bVar53 = (byte)((&DAT_00109021)[lVar42] - 8) < 2 || (&DAT_00109021)[lVar42] == '\x05';
      break;
    case 2:
      bVar53 = *(uint *)(&_pcre2_ucp_gentype_16 + (ulong)(byte)(&DAT_00109021)[lVar42] * 4) ==
               (uint)puVar34[3];
      break;
    case 3:
      bVar53 = (ushort)(byte)(&DAT_00109021)[lVar42] == puVar34[3];
      break;
    case 4:
      bVar53 = (ushort)(byte)(&_pcre2_ucd_records_16)[lVar42] == puVar34[3];
      break;
    case 5:
      uVar37 = puVar34[3];
      bVar53 = true;
      if ((byte)(&_pcre2_ucd_records_16)[lVar42] != uVar37) {
        bVar53 = (1 << ((byte)uVar37 & 0x1f) &
                 *(uint *)(&_pcre2_ucd_script_sets_16 +
                          ((ulong)(uVar37 >> 5) +
                          (ulong)(*(ushort *)(_pcre2_extuni_16 + lVar42) & 0x3ff)) * 4)) != 0;
      }
      break;
    case 6:
      bVar53 = (*(uint *)(&_pcre2_ucp_gentype_16 + (ulong)(byte)(&DAT_00109021)[lVar42] * 4) &
               0xfffffffd) == 1;
      break;
    case 7:
    case 8:
      if (uVar24 != 0x180e) {
        if (0x180e < uVar24) {
          if (uVar24 < 0x2060) {
            if (uVar24 < 0x2028) {
              if (uVar24 - 0x2000 < 0xb) goto switchD_00101bf3_caseD_0;
            }
            else {
              bVar53 = true;
              if ((0x80000000000083U >> ((ulong)(uVar24 - 0x2028) & 0x3f) & 1) != 0) break;
            }
          }
          else if (uVar24 == 0x3000) goto switchD_00101bf3_caseD_0;
          goto LAB_00102f1c;
        }
        if (uVar24 != 0x85) {
          bVar53 = true;
          if (uVar24 < 0x86) {
            if (uVar24 < 0xe) {
              if (uVar24 < 9) {
LAB_00102f1c:
                bVar53 = *(int *)(&_pcre2_ucp_gentype_16 + (ulong)(byte)(&DAT_00109021)[lVar42] * 4)
                         == 6;
              }
            }
            else if (uVar24 != 0x20) goto LAB_00102f1c;
          }
          else if ((uVar24 != 0xa0) && (uVar24 != 0x1680)) goto LAB_00102f1c;
          break;
        }
      }
      goto switchD_00101bf3_caseD_0;
    case 9:
      bVar53 = true;
      if ((*(uint *)(&_pcre2_ucp_gentype_16 + (ulong)(byte)(&DAT_00109021)[lVar42] * 4) & 0xfffffffd
          ) != 1) {
        bVar53 = ((&DAT_00109021)[lVar42] - 0xc & 0xfb) == 0;
      }
      break;
    case 10:
      puVar39 = (uint *)(&_pcre2_ucd_caseless_sets_16 + (ulong)puVar34[3] * 4);
      do {
        uVar25 = *puVar39;
        if (uVar24 < uVar25) {
          bVar53 = false;
          goto LAB_00102cc0;
        }
        puVar39 = puVar39 + 1;
      } while (uVar25 != uVar24);
switchD_00101bf3_caseD_0:
      bVar53 = true;
      break;
    case 0xb:
      if (((uVar24 & 0xffffffdf) == 0x40) || (uVar24 == 0x24)) goto switchD_00101bf3_caseD_0;
      bVar53 = uVar24 - 0xa0 < 0xd760 || 0xdfff < uVar24;
      break;
    case 0xc:
      bVar53 = *(ushort *)(_pcre2_extuni_16 + lVar42) >> 0xb == puVar34[3];
      break;
    case 0xd:
      bVar53 = (1 << ((byte)puVar34[3] & 0x1f) &
               *(uint *)(&_pcre2_ucd_boolprop_sets_16 +
                        ((ulong)(*(ushort *)(&DAT_0010902a + lVar42) & 0xfff) +
                        (ulong)(puVar34[3] >> 5)) * 4)) != 0;
      break;
    default:
      bVar53 = iVar16 != 0x10;
    }
LAB_00102cc0:
    if ((uVar23 == 0x10) == bVar53) {
      if ((iVar16 - 0x18aU & 0xfffffffd) != 0) {
        uVar30 = (ulong)uVar26;
        puVar47 = puVar35;
      }
      if (iVar15 <= iVar48) goto LAB_00100381;
      iVar44 = iVar44 + 1;
      puVar31[1] = 0;
      *puVar31 = local_b0 + uVar40;
      puVar28 = puVar31 + 3;
      iVar48 = iVar48 + 1;
    }
    else {
      iVar44 = iVar44 + 1;
      puVar47 = puVar35;
      uVar30 = (ulong)uVar26;
    }
    break;
      for (int i = 0; i < 3; i++) {
         case 0x187:
      }
      case 0x18d:
    puVar39 = puVar47;
    if (iVar16 != 0x189) {
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      puVar47[1] = 0;
      uVar30 = (ulong)(uVar25 + 1);
      puVar39 = puVar47 + 3;
      *puVar47 = uVar40 + 5;
    }
    uVar25 = puVar35[1];
    puVar47 = puVar39;
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      break;
    }
    uVar26 = uVar24 + 0x7f;
    if (-1 < (int)uVar24) {
      uVar26 = uVar24;
    }
    lVar42 = (ulong)*(ushort *)
                     (&_pcre2_ucd_stage2_16 +
                     (long)(int)((uint)*(ushort *)
                                        (&_pcre2_ucd_stage1_16 + (long)((int)uVar26 >> 7) * 2) *
                                 0x80 + (int)uVar24 % 0x80) * 2) * 0xc;
    switch(puVar34[3]) {
    case 0:
      goto switchD_00101481_caseD_0;
    case 1:
      bVar53 = (byte)((&DAT_00109021)[lVar42] - 8) < 2 || (&DAT_00109021)[lVar42] == '\x05';
      break;
    case 2:
      bVar53 = *(uint *)(&_pcre2_ucp_gentype_16 + (ulong)(byte)(&DAT_00109021)[lVar42] * 4) ==
               (uint)puVar34[4];
      break;
    case 3:
      bVar53 = (ushort)(byte)(&DAT_00109021)[lVar42] == puVar34[4];
      break;
    case 4:
      bVar53 = (ushort)(byte)(&_pcre2_ucd_records_16)[lVar42] == puVar34[4];
      break;
    case 5:
      uVar37 = puVar34[4];
      bVar53 = true;
      if ((byte)(&_pcre2_ucd_records_16)[lVar42] != uVar37) {
        bVar53 = (1 << ((byte)uVar37 & 0x1f) &
                 *(uint *)(&_pcre2_ucd_script_sets_16 +
                          ((ulong)(*(ushort *)(_pcre2_extuni_16 + lVar42) & 0x3ff) +
                          (ulong)(uVar37 >> 5)) * 4)) != 0;
      }
      break;
    case 6:
      bVar53 = (*(uint *)(&_pcre2_ucp_gentype_16 + (ulong)(byte)(&DAT_00109021)[lVar42] * 4) &
               0xfffffffd) == 1;
      break;
    case 7:
    case 8:
      if (uVar24 != 0x180e) {
        if (0x180e < uVar24) {
          if (uVar24 < 0x2060) {
            if (uVar24 < 0x2028) {
              if (uVar24 - 0x2000 < 0xb) goto switchD_00101481_caseD_0;
            }
            else {
              bVar53 = true;
              if ((0x80000000000083U >> ((ulong)(uVar24 - 0x2028) & 0x3f) & 1) != 0) break;
            }
          }
          else if (uVar24 == 0x3000) goto switchD_00101481_caseD_0;
          goto LAB_001031d1;
        }
        if (uVar24 != 0x85) {
          if (uVar24 < 0x86) {
            bVar53 = true;
            if (uVar24 < 0xe) {
              if (uVar24 < 9) {
LAB_001031d1:
                bVar53 = *(int *)(&_pcre2_ucp_gentype_16 + (ulong)(byte)(&DAT_00109021)[lVar42] * 4)
                         == 6;
              }
            }
            else if (uVar24 != 0x20) goto LAB_001031d1;
            break;
          }
          if ((uVar24 != 0xa0) && (uVar24 != 0x1680)) goto LAB_001031d1;
        }
      }
      goto switchD_00101481_caseD_0;
    case 9:
      bVar53 = true;
      if ((*(uint *)(&_pcre2_ucp_gentype_16 + (ulong)(byte)(&DAT_00109021)[lVar42] * 4) & 0xfffffffd
          ) != 1) {
        bVar53 = ((&DAT_00109021)[lVar42] - 0xc & 0xfb) == 0;
      }
      break;
    case 10:
      puVar35 = (uint *)(&_pcre2_ucd_caseless_sets_16 + (ulong)puVar34[4] * 4);
      do {
        uVar26 = *puVar35;
        if (uVar24 < uVar26) {
          bVar53 = false;
          goto LAB_001031e7;
        }
        puVar35 = puVar35 + 1;
      } while (uVar26 != uVar24);
switchD_00101481_caseD_0:
      bVar53 = true;
      break;
    case 0xb:
      if (((uVar24 & 0xffffffdf) == 0x40) || (uVar24 == 0x24)) goto switchD_00101481_caseD_0;
      bVar53 = uVar24 - 0xa0 < 0xd760 || 0xdfff < uVar24;
      break;
    case 0xc:
      bVar53 = *(ushort *)(_pcre2_extuni_16 + lVar42) >> 0xb == puVar34[4];
      break;
    case 0xd:
      bVar53 = (1 << ((byte)puVar34[4] & 0x1f) &
               *(uint *)(&_pcre2_ucd_boolprop_sets_16 +
                        ((ulong)(*(ushort *)(&DAT_0010902a + lVar42) & 0xfff) +
                        (ulong)(puVar34[4] >> 5)) * 4)) != 0;
      break;
    default:
      bVar53 = iVar16 != 0x10;
    }
LAB_001031e7:
    if ((uVar23 == 0x10) == bVar53) {
      if (iVar16 == 0x18d) {
        uVar30 = (ulong)((int)uVar30 - 1);
        puVar39 = puVar39 + -3;
      }
      puVar47 = puVar39;
      if ((int)(uVar25 + 1) < (int)(uint)puVar34[1]) {
        if (iVar15 <= iVar48) goto LAB_00100381;
        *puVar31 = uVar40;
        iVar44 = iVar44 + 1;
        puVar31[1] = uVar25 + 1;
        puVar28 = puVar31 + 3;
        iVar48 = iVar48 + 1;
      }
      else {
        if (iVar15 <= iVar48) goto LAB_00100381;
        iVar44 = iVar44 + 1;
        *puVar31 = uVar40 + 5;
        puVar31[1] = 0;
        puVar28 = puVar31 + 3;
        iVar48 = iVar48 + 1;
      }
    }
    else {
      iVar44 = iVar44 + 1;
    }
    break;
      case 0x195:
      case 0x196:
      case 0x19e:
    iVar22 = 0;
    goto LAB_00101bfc;
      case 0x197:
      case 0x198:
      case 0x19f:
    uVar26 = puVar35[1];
    if ((int)uVar26 < 1) {
      if (local_13c == 0) {
        iVar44 = iVar44 + 1;
        break;
      }
    }
    else {
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      puVar47[1] = 0;
      *puVar47 = uVar40 + 2;
      if (local_13c == 0) {
        iVar44 = iVar44 + 1;
        puVar47 = puVar47 + 3;
        uVar30 = (ulong)(uVar25 + 1);
        break;
      }
      if (iVar16 != 0x19f) {
        uVar30 = (ulong)(uVar25 + 1);
        puVar47 = puVar47 + 3;
      }
    }
    local_70 = (ulong)local_70._4_4_ << 0x20;
    _pcre2_extuni_16(uVar24,local_150 + local_13c,*(undefined8 *)(param_1 + 0x20),puVar8,bVar51,
                     &local_70);
    if (iVar15 <= iVar48) goto LAB_00100381;
    puVar31[1] = uVar26 + 1;
    iVar44 = iVar44 + 1;
    *puVar31 = -uVar40;
    puVar31[2] = (uint)local_70;
    puVar28 = puVar31 + 3;
    iVar48 = iVar48 + 1;
    break;
      case 0x199:
      case 0x19a:
      case 0x1a0:
    iVar22 = 2;
LAB_00101bfc:
    if (iVar15 <= (int)uVar25) goto LAB_00100381;
    puVar47[1] = 0;
    *puVar47 = uVar40 + 2;
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      puVar47 = puVar47 + 3;
      uVar30 = (ulong)(uVar25 + 1);
    }
    else {
      if ((iVar16 - 0x19eU & 0xfffffffd) != 0) {
        uVar30 = (ulong)(uVar25 + 1);
        puVar47 = puVar47 + 3;
      }
      local_70 = (ulong)local_70._4_4_ << 0x20;
      _pcre2_extuni_16(uVar24,local_150 + local_13c,*(undefined8 *)(param_1 + 0x20),puVar8,bVar51,
                       &local_70);
      if (iVar15 <= iVar48) goto LAB_00100381;
      iVar44 = iVar44 + 1;
      puVar31[1] = 0;
      *puVar31 = -(uVar40 + iVar22);
      puVar31[2] = (uint)local_70;
      puVar28 = puVar31 + 3;
      iVar48 = iVar48 + 1;
    }
    break;
      for (int i = 0; i < 3; i++) {
         case 0x19b:
      }
      case 0x1a1:
    if (iVar16 == 0x19d) {
      uVar26 = puVar35[1];
      if (local_13c == 0) {
        iVar44 = iVar44 + 1;
        break;
      }
    }
    else {
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      puVar47[1] = 0;
      uVar26 = puVar35[1];
      *puVar47 = uVar40 + 3;
      if (local_13c == 0) {
        iVar44 = iVar44 + 1;
        puVar47 = puVar47 + 3;
        uVar30 = (ulong)(uVar25 + 1);
        break;
      }
      if (iVar16 != 0x1a1) {
        uVar30 = (ulong)(uVar25 + 1);
        puVar47 = puVar47 + 3;
      }
    }
    local_70 = (ulong)local_70._4_4_ << 0x20;
    puVar33 = (ushort *)
              _pcre2_extuni_16(uVar24,local_150 + local_13c,*(undefined8 *)(param_1 + 0x20),puVar8,
                               bVar51,&local_70);
    if ((puVar8 <= puVar33) && (bVar18 = true, (*(byte *)(param_1 + 0x6c) & 0x20) == 0)) {
      bVar18 = bVar53;
    }
    if ((int)(uVar26 + 1) < (int)(uint)puVar34[1]) {
      if (iVar15 <= iVar48) goto LAB_00100381;
      puVar31[1] = uVar26 + 1;
      *puVar31 = -uVar40;
    }
    else {
      if (iVar15 <= iVar48) goto LAB_00100381;
      puVar31[1] = 0;
      *puVar31 = -uVar40 - 3;
    }
    puVar31[2] = (uint)local_70;
    iVar44 = iVar44 + 1;
    puVar28 = puVar31 + 3;
    iVar48 = iVar48 + 1;
    break;
      case 0x1a9:
      case 0x1aa:
      case 0x1b2:
    iVar22 = 0;
    goto LAB_00101cdf;
      case 0x1ab:
      case 0x1ac:
      case 0x1b3:
    uVar26 = puVar35[1];
    puVar35 = puVar47;
    if (0 < (int)uVar26) {
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      puVar47[1] = 0;
      uVar30 = (ulong)(uVar25 + 1);
      puVar35 = puVar47 + 3;
      *puVar47 = uVar40 + 2;
    }
    puVar47 = puVar35;
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      break;
    }
    if (uVar24 == 0xd) {
      uVar25 = 0;
      if (local_150 + 1 < puVar8) {
        uVar25 = (uint)(local_150[1] == 10);
      }
    }
    else if (uVar24 < 0xe) {
      uVar25 = 0;
      if (uVar24 != 10) {
        if (uVar24 - 0xb < 2) goto LAB_00104580;
LAB_001057ba:
        iVar44 = iVar44 + 1;
        break;
      }
    }
    else {
      if ((uVar24 != 0x85) && (1 < uVar24 - 0x2028)) goto LAB_001057ba;
LAB_00104580:
      uVar25 = 0;
      if (*(short *)(param_1 + 0x88) == 2) {
        iVar44 = iVar44 + 1;
        break;
      }
    }
    if ((0 < (int)uVar26) && (iVar16 == 0x1b3)) {
      uVar30 = (ulong)((int)uVar30 - 1);
      puVar35 = puVar35 + -3;
    }
    if (iVar15 <= iVar48) goto LAB_00100381;
    puVar31[1] = uVar26 + 1;
    iVar44 = iVar44 + 1;
    *puVar31 = -uVar40;
    puVar31[2] = uVar25;
    puVar47 = puVar35;
    puVar28 = puVar31 + 3;
    iVar48 = iVar48 + 1;
    break;
      case 0x1ad:
      case 0x1ae:
      case 0x1b4:
    iVar22 = 2;
LAB_00101cdf:
    uVar26 = uVar25 + 1;
    if (iVar15 <= (int)uVar25) goto LAB_00100381;
    puVar47[1] = 0;
    puVar35 = puVar47 + 3;
    *puVar47 = uVar40 + 2;
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      puVar47 = puVar35;
      uVar30 = (ulong)uVar26;
      break;
    }
    if (uVar24 == 0xd) {
      uVar25 = 0;
      if (local_150 + 1 < puVar8) {
        uVar25 = (uint)(local_150[1] == 10);
      }
    }
    else if (uVar24 < 0xe) {
      uVar25 = 0;
      if (uVar24 != 10) {
        if (uVar24 - 0xb < 2) goto LAB_00103bce;
LAB_00103bf9:
        iVar44 = iVar44 + 1;
        puVar47 = puVar35;
        uVar30 = (ulong)uVar26;
        break;
      }
    }
    else {
      if ((uVar24 != 0x85) && (1 < uVar24 - 0x2028)) goto LAB_00103bf9;
LAB_00103bce:
      uVar25 = 0;
      if (*(short *)(param_1 + 0x88) == 2) {
        iVar44 = iVar44 + 1;
        puVar47 = puVar35;
        uVar30 = (ulong)uVar26;
        break;
      }
    }
    if ((iVar16 - 0x1b2U & 0xfffffffd) != 0) {
      uVar30 = (ulong)uVar26;
      puVar47 = puVar35;
    }
    if (iVar15 <= iVar48) goto LAB_00100381;
    puVar31[2] = uVar25;
    iVar44 = iVar44 + 1;
    puVar31[1] = 0;
    *puVar31 = -(iVar22 + uVar40);
    puVar28 = puVar31 + 3;
    iVar48 = iVar48 + 1;
    break;
      for (int i = 0; i < 3; i++) {
         case 0x1af:
      }
      case 0x1b5:
    if (iVar16 != 0x1b1) {
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      puVar47[1] = 0;
      *puVar47 = uVar40 + 3;
      puVar47 = puVar47 + 3;
      uVar25 = uVar25 + 1;
    }
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      uVar30 = (ulong)uVar25;
      break;
    }
    if (uVar24 == 0xd) {
      uVar26 = 0;
      if (local_150 + 1 < puVar8) {
        uVar26 = (uint)(local_150[1] == 10);
      }
    }
    else if (uVar24 < 0xe) {
      uVar26 = 0;
      if (uVar24 != 10) {
        if (uVar24 - 0xb < 2) goto LAB_00104c85;
LAB_00104e01:
        iVar44 = iVar44 + 1;
        uVar30 = (ulong)uVar25;
        break;
      }
    }
    else {
      if ((uVar24 != 0x85) && (1 < uVar24 - 0x2028)) goto LAB_00104e01;
LAB_00104c85:
      uVar26 = 0;
      if (*(short *)(param_1 + 0x88) == 2) {
        iVar44 = iVar44 + 1;
        uVar30 = (ulong)uVar25;
        break;
      }
    }
    if (iVar16 == 0x1b5) {
      uVar25 = uVar25 - 1;
      puVar47 = puVar47 + -3;
    }
    if ((int)(puVar35[1] + 1) < (int)(uint)puVar34[1]) {
      if (iVar15 <= iVar48) goto LAB_00100381;
      puVar31[1] = puVar35[1] + 1;
      iVar44 = iVar44 + 1;
      *puVar31 = -uVar40;
      puVar31[2] = uVar26;
      puVar28 = puVar31 + 3;
      uVar30 = (ulong)uVar25;
      iVar48 = iVar48 + 1;
    }
    else {
      if (iVar15 <= iVar48) goto LAB_00100381;
      puVar31[2] = uVar26;
      iVar44 = iVar44 + 1;
      puVar31[1] = 0;
      *puVar31 = -uVar40 - 3;
      puVar28 = puVar31 + 3;
      uVar30 = (ulong)uVar25;
      iVar48 = iVar48 + 1;
    }
    break;
      case 0x1bd:
      case 0x1be:
      case 0x1c6:
    iVar22 = 0;
    goto LAB_00101d79;
      case 0x1bf:
      case 0x1c0:
      case 0x1c7:
    uVar26 = puVar35[1];
    puVar35 = puVar47;
    if (0 < (int)uVar26) {
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      puVar47[1] = 0;
      uVar30 = (ulong)(uVar25 + 1);
      puVar35 = puVar47 + 3;
      *puVar47 = uVar40 + 2;
    }
    puVar47 = puVar35;
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      break;
    }
    if (uVar24 == 0x180e) {
LAB_0010500a:
      bVar53 = true;
    }
    else if (uVar24 < 0x180f) {
      if (uVar24 == 0xa0) goto LAB_0010500a;
      if (uVar24 < 0xa1) {
        bVar53 = true;
        if (uVar24 != 9) {
          bVar53 = uVar24 == 0x20;
        }
      }
      else {
        bVar53 = uVar24 == 0x1680;
      }
    }
    else {
      if (uVar24 == 0x205f) goto LAB_0010500a;
      if (uVar24 < 0x2060) {
        if (uVar24 < 0x200b) {
          bVar53 = 0x1fff < uVar24;
        }
        else {
          bVar53 = uVar24 == 0x202f;
        }
      }
      else {
        bVar53 = uVar24 == 0x3000;
      }
    }
    if ((uVar23 == 0x13) == bVar53) {
      if ((0 < (int)uVar26) && (iVar16 == 0x1c7)) {
        uVar30 = (ulong)((int)uVar30 - 1);
        puVar35 = puVar35 + -3;
      }
      if (iVar15 <= iVar48) goto LAB_00100381;
      puVar31[1] = uVar26 + 1;
      iVar44 = iVar44 + 1;
      *puVar31 = -uVar40;
      puVar31[2] = 0;
      puVar47 = puVar35;
      puVar28 = puVar31 + 3;
      iVar48 = iVar48 + 1;
    }
    else {
      iVar44 = iVar44 + 1;
    }
    break;
      case 0x1c1:
      case 0x1c2:
      case 0x1c8:
    iVar22 = 2;
LAB_00101d79:
    uVar26 = uVar25 + 1;
    if (iVar15 <= (int)uVar25) goto LAB_00100381;
    puVar47[1] = 0;
    puVar35 = puVar47 + 3;
    *puVar47 = uVar40 + 2;
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      puVar47 = puVar35;
      uVar30 = (ulong)uVar26;
      break;
    }
    if (uVar24 == 0x180e) {
LAB_001045f4:
      bVar53 = true;
    }
    else if (uVar24 < 0x180f) {
      if (uVar24 == 0xa0) goto LAB_001045f4;
      if (uVar24 < 0xa1) {
        bVar53 = true;
        if (uVar24 != 9) {
          bVar53 = uVar24 == 0x20;
        }
      }
      else {
        bVar53 = uVar24 == 0x1680;
      }
    }
    else {
      if (uVar24 == 0x205f) goto LAB_001045f4;
      if (uVar24 < 0x2060) {
        if (uVar24 < 0x200b) {
          bVar53 = 0x1fff < uVar24;
        }
        else {
          bVar53 = uVar24 == 0x202f;
        }
      }
      else {
        bVar53 = uVar24 == 0x3000;
      }
    }
    if ((uVar23 == 0x13) == bVar53) {
      if ((iVar16 - 0x1c6U & 0xfffffffd) != 0) {
        uVar30 = (ulong)uVar26;
        puVar47 = puVar35;
      }
      if (iVar15 <= iVar48) goto LAB_00100381;
      puVar31[1] = 0;
      puVar31[2] = 0;
      iVar44 = iVar44 + 1;
      *puVar31 = -(uVar40 + iVar22);
      puVar28 = puVar31 + 3;
      iVar48 = iVar48 + 1;
    }
    else {
      iVar44 = iVar44 + 1;
      puVar47 = puVar35;
      uVar30 = (ulong)uVar26;
    }
    break;
      for (int i = 0; i < 3; i++) {
         case 0x1c3:
      }
      case 0x1c9:
    puVar39 = puVar47;
    if (iVar16 != 0x1c5) {
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      puVar47[1] = 0;
      uVar30 = (ulong)(uVar25 + 1);
      puVar39 = puVar47 + 3;
      *puVar47 = uVar40 + 3;
    }
    puVar47 = puVar39;
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      break;
    }
    if (uVar24 == 0x180e) {
LAB_00105000:
      bVar53 = true;
    }
    else if (uVar24 < 0x180f) {
      if (uVar24 == 0xa0) goto LAB_00105000;
      if (uVar24 < 0xa1) {
        bVar53 = true;
        if (uVar24 != 9) {
          bVar53 = uVar24 == 0x20;
        }
      }
      else {
        bVar53 = uVar24 == 0x1680;
      }
    }
    else {
      if (uVar24 == 0x205f) goto LAB_00105000;
      if (uVar24 < 0x2060) {
        if (uVar24 < 0x200b) {
          bVar53 = 0x1fff < uVar24;
        }
        else {
          bVar53 = uVar24 == 0x202f;
        }
      }
      else {
        bVar53 = uVar24 == 0x3000;
      }
    }
    if ((uVar23 == 0x13) == bVar53) {
      if (iVar16 == 0x1c9) {
        uVar30 = (ulong)((int)uVar30 - 1);
        puVar39 = puVar39 + -3;
      }
      puVar47 = puVar39;
      if ((int)(puVar35[1] + 1) < (int)(uint)puVar34[1]) {
        if (iVar15 <= iVar48) goto LAB_00100381;
        puVar31[1] = puVar35[1] + 1;
        iVar44 = iVar44 + 1;
        *puVar31 = -uVar40;
        puVar31[2] = 0;
        puVar28 = puVar31 + 3;
        iVar48 = iVar48 + 1;
      }
      else {
        if (iVar15 <= iVar48) goto LAB_00100381;
        iVar44 = iVar44 + 1;
        puVar31[1] = 0;
        puVar31[2] = 0;
        *puVar31 = -uVar40 - 3;
        puVar28 = puVar31 + 3;
        iVar48 = iVar48 + 1;
      }
    }
    else {
      iVar44 = iVar44 + 1;
    }
    break;
      case 0x1d1:
      case 0x1d2:
      case 0x1da:
    iVar22 = 0;
    goto LAB_00101ac6;
      case 0x1d3:
      case 0x1d4:
      case 0x1db:
    uVar26 = puVar35[1];
    puVar35 = puVar47;
    if (0 < (int)uVar26) {
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      puVar47[1] = 0;
      uVar30 = (ulong)(uVar25 + 1);
      puVar35 = puVar47 + 3;
      *puVar47 = uVar40 + 2;
    }
    puVar47 = puVar35;
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
    }
    else {
      if (uVar24 == 0x85) {
        bVar53 = true;
      }
      else if (uVar24 < 0x86) {
        bVar53 = uVar24 - 10 < 4;
      }
      else {
        bVar53 = uVar24 - 0x2028 < 2;
      }
      if ((uVar23 == 0x15) == bVar53) {
        if ((0 < (int)uVar26) && (iVar16 == 0x1db)) {
          uVar30 = (ulong)((int)uVar30 - 1);
          puVar35 = puVar35 + -3;
        }
        if (iVar15 <= iVar48) goto LAB_00100381;
        puVar31[1] = uVar26 + 1;
        iVar44 = iVar44 + 1;
        *puVar31 = -uVar40;
        puVar31[2] = 0;
        puVar47 = puVar35;
        puVar28 = puVar31 + 3;
        iVar48 = iVar48 + 1;
      }
      else {
        iVar44 = iVar44 + 1;
      }
    }
    break;
      case 0x1d5:
      case 0x1d6:
      case 0x1dc:
    iVar22 = 2;
LAB_00101ac6:
    uVar26 = uVar25 + 1;
    if (iVar15 <= (int)uVar25) goto LAB_00100381;
    puVar47[1] = 0;
    *puVar47 = uVar40 + 2;
    puVar35 = puVar47 + 3;
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
      puVar47 = puVar35;
      uVar30 = (ulong)uVar26;
    }
    else {
      if (uVar24 == 0x85) {
        bVar53 = true;
      }
      else if (uVar24 < 0x86) {
        bVar53 = uVar24 - 10 < 4;
      }
      else {
        bVar53 = uVar24 - 0x2028 < 2;
      }
      if ((uVar23 == 0x15) == bVar53) {
        if ((iVar16 - 0x1daU & 0xfffffffd) != 0) {
          uVar30 = (ulong)uVar26;
          puVar47 = puVar35;
        }
        if (iVar15 <= iVar48) goto LAB_00100381;
        iVar44 = iVar44 + 1;
        puVar31[1] = 0;
        puVar31[2] = 0;
        *puVar31 = -(uVar40 + iVar22);
        puVar28 = puVar31 + 3;
        iVar48 = iVar48 + 1;
      }
      else {
        iVar44 = iVar44 + 1;
        puVar47 = puVar35;
        uVar30 = (ulong)uVar26;
      }
    }
    break;
      for (int i = 0; i < 3; i++) {
         case 0x1d7:
      }
      case 0x1dd:
    puVar39 = puVar47;
    if (iVar16 != 0x1d9) {
      if (iVar15 <= (int)uVar25) goto LAB_00100381;
      puVar47[1] = 0;
      uVar30 = (ulong)(uVar25 + 1);
      puVar39 = puVar47 + 3;
      *puVar47 = uVar40 + 3;
    }
    puVar47 = puVar39;
    if (local_13c == 0) {
      iVar44 = iVar44 + 1;
    }
    else {
      if (uVar24 == 0x85) {
        bVar53 = true;
      }
      else if (uVar24 < 0x86) {
        bVar53 = uVar24 - 10 < 4;
      }
      else {
        bVar53 = uVar24 - 0x2028 < 2;
      }
      if ((uVar23 == 0x15) == bVar53) {
        if (iVar16 == 0x1dd) {
          uVar30 = (ulong)((int)uVar30 - 1);
          puVar39 = puVar39 + -3;
        }
        puVar47 = puVar39;
        if ((int)(puVar35[1] + 1) < (int)(uint)puVar34[1]) {
          if (iVar15 <= iVar48) goto LAB_00100381;
          puVar31[1] = puVar35[1] + 1;
          iVar44 = iVar44 + 1;
          *puVar31 = -uVar40;
          puVar31[2] = 0;
          puVar28 = puVar31 + 3;
          iVar48 = iVar48 + 1;
        }
        else {
          if (iVar15 <= iVar48) goto LAB_00100381;
          iVar44 = iVar44 + 1;
          puVar31[1] = 0;
          puVar31[2] = 0;
          *puVar31 = -uVar40 - 3;
          puVar28 = puVar31 + 3;
          iVar48 = iVar48 + 1;
        }
      }
      else {
        iVar44 = iVar44 + 1;
      }
    }
   }
   LAB_001004fe:puVar31 = puVar28;
   bVar53 = bVar18;
   if ((int)uVar30 <= iVar44) goto LAB_00100546;
   goto LAB_00100503;
   LAB_00100546:if (iVar48 < 1) goto LAB_0010433f;
   uVar41 = (ulong)iVar48;
   local_150 = local_150 + local_13c;
   uVar24 = *param_7;
   uVar30 = uVar41;
   puVar47 = local_170;
   local_170 = puVar32;
   goto LAB_0010040b;
   LAB_00100381:iVar22 = -0x2b;
   goto LAB_00100678;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int pcre2_dfa_match_16(undefined8 *param_1, ushort *param_2, ulong param_3, undefined8 param_4, uint param_5, undefined8 *param_6) {
   ushort uVar1;
   ushort uVar2;
   uint uVar3;
   int iVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   code *pcVar8;
   void *__src;
   long lVar9;
   undefined8 uVar10;
   undefined1 *puVar11;
   ushort uVar12;
   uint uVar13;
   uint uVar14;
   uint uVar15;
   int iVar16;
   long lVar17;
   ushort *puVar18;
   ushort *puVar19;
   void *__dest;
   uint uVar20;
   uint uVar21;
   ulong uVar22;
   ushort *puVar23;
   long lVar24;
   undefined1 *puVar25;
   uint uVar26;
   ushort *puVar27;
   ushort *puVar28;
   int iVar29;
   undefined1 uVar30;
   long in_FS_OFFSET;
   undefined1 local_7030[28672];
   puVar11 = &stack0xffffffffffffffd0;
   do {
      puVar25 = puVar11;
      *(undefined8*)( puVar25 + -0x1000 ) = *(undefined8*)( puVar25 + -0x1000 );
      puVar11 = puVar25 + -0x1000;
   } while ( puVar25 + -0x1000 != local_7030 );
   puVar5 = *(undefined8**)( puVar25 + 0x6038 );
   *(undefined8*)( puVar25 + -0x19c8 ) = param_4;
   *(undefined8*)( puVar25 + -0x19b8 ) = *(undefined8*)( puVar25 + 0x6040 );
   *(undefined8*)( puVar25 + 0x5ff0 ) = *(undefined8*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( puVar25 + -0x1818 ) = 0;
   *(undefined8*)( puVar25 + -0x1810 ) = _LC1;
   if (param_2 == (ushort*)0x0 && param_3 == 0) {
      param_2 = (ushort*)&_LC0;
   }
   if (( param_5 & 0x1fffbf00 ) != 0) {
      LAB_00106def:iVar16 = -0x22;
      goto LAB_00106df8;
   }
   if (( ( ( param_1 == (undefined8*)0x0 ) || ( param_2 == (ushort*)0x0 ) ) || ( *(long*)( puVar25 + -0x19b8 ) == 0 ) ) || ( param_6 == (undefined8*)0x0 )) {
      iVar16 = -0x33;
      goto LAB_00106df8;
   }
   *(undefined4*)( puVar25 + -0x195c ) = 0;
   if (param_3 == 0xffffffffffffffff) {
      *(undefined8*)( puVar25 + -0x19d0 ) = 0x107a98;
      param_3 = _pcre2_strlen_16(param_2);
      *(undefined4*)( puVar25 + -0x195c ) = 1;
   }
   if (*(ulong*)( puVar25 + 0x6048 ) < 0x14) {
      iVar16 = -0x2b;
      goto LAB_00106df8;
   }
   if (param_3 < *(ulong*)( puVar25 + -0x19c8 )) {
      iVar16 = -0x21;
      goto LAB_00106df8;
   }
   uVar15 = *(uint*)( param_1 + 0xb );
   if (( ( param_5 & 0x30 ) != 0 ) && ( ( ( param_5 | uVar15 ) & 0x20000000 ) != 0 )) goto LAB_00106def;
   if (( uVar15 & 0x4000000 ) != 0) {
      iVar16 = -0x42;
      goto LAB_00106df8;
   }
   if (*(int*)( param_1 + 10 ) != 0x50435245) {
      iVar16 = -0x1f;
      goto LAB_00106df8;
   }
   uVar26 = *(uint*)( param_1 + 0xc );
   if (( uVar26 & 7 ) != 2) {
      iVar16 = -0x20;
      goto LAB_00106df8;
   }
   uVar13 = uVar26 >> 0xe & 0xc | param_5;
   *(uint*)( puVar25 + -0x1980 ) = param_5 & 0x40;
   if (( ( param_5 & 0x40 ) != 0 ) && ( ( ( 1 < **(uint**)( puVar25 + -0x19b8 ) || ( uVar21 = ( *(uint**)( puVar25 + -0x19b8 ) )[1] ),(int)uVar21 < 1 ) ) || ( (int)( ( *(long*)( puVar25 + 0x6048 ) - 2U ) / 3 ) < (int)uVar21 ) )) {
      iVar16 = -0x26;
      goto LAB_00106df8;
   }
   *(uint*)( puVar25 + -0x19bc ) = uVar15 & 0x80000;
   *(uint*)( puVar25 + -0x1968 ) = ( uint )(( uVar15 & 0x80000 ) != 0);
   puVar19 = param_2 + *(long*)( puVar25 + -0x19c8 );
   *(long*)( puVar25 + -0x1958 ) = *(long*)( puVar25 + -0x19c8 ) * 2;
   puVar23 = param_2 + param_3;
   *(ushort**)( puVar25 + -0x1988 ) = puVar19 + -1;
   *(uint*)( puVar25 + -0x1970 ) = uVar26 & 0x200;
   if (( ( param_5 & 0x80000040 ) == 0 ) && ( -1 < (int)uVar15 )) {
      *(undefined4*)( puVar25 + -0x19a0 ) = 0;
      *(uint*)( puVar25 + -0x19a8 ) = uVar15 >> 8 & 1;
   } else {
      *(undefined4*)( puVar25 + -0x19a0 ) = 1;
      *(undefined4*)( puVar25 + -0x19a8 ) = 0;
   }
   *(undefined4*)( puVar25 + -0x1938 ) = 2;
   *(undefined1**)( puVar25 + -0x1838 ) = puVar25 + -0x1938;
   *(ushort**)( puVar25 + -0x1918 ) = param_2;
   *(long*)( puVar25 + -0x1910 ) = (long)( param_3 * 2 ) >> 1;
   *(undefined4*)( puVar25 + -0x18d0 ) = 0;
   *(undefined8*)( puVar25 + -0x1930 ) = 1;
   *(undefined8*)( puVar25 + -0x1920 ) = 0;
   if (puVar5 == (undefined8*)0x0) {
      uVar6 = param_1[2];
      uVar7 = *param_1;
      uVar10 = param_1[1];
      *(ushort**)( puVar25 + -0x19b0 ) = puVar23;
      *(undefined8*)( puVar25 + -0x1828 ) = 0;
      *(undefined8*)( puVar25 + -0x18b8 ) = uVar6;
      *(uint*)( puVar25 + -0x1868 ) = _DAT_001090cc;
      *(uint*)( puVar25 + -0x1864 ) = _DAT_001090d0;
      *(undefined8*)( puVar25 + -0x18c8 ) = uVar7;
      *(undefined8*)( puVar25 + -0x18c0 ) = uVar10;
      uVar21 = _DAT_001090cc;
      uVar20 = _DAT_001090d0;
      uVar14 = _DAT_001090c8;
   } else {
      if (puVar5[9] == -1) {
         *(ushort**)( puVar25 + -0x19b0 ) = puVar23;
      } else {
         if (( uVar15 & 0x800000 ) == 0) {
            iVar16 = -0x38;
            goto LAB_00106df8;
         }
         *(ushort**)( puVar25 + -0x19b0 ) = param_2 + puVar5[9];
      }
      uVar21 = *(uint*)( (long)puVar5 + 0x54 );
      uVar20 = *(uint*)( puVar5 + 0xb );
      uVar7 = *puVar5;
      uVar10 = puVar5[1];
      *(undefined8*)( puVar25 + -0x1828 ) = puVar5[5];
      uVar6 = puVar5[6];
      *(uint*)( puVar25 + -0x1868 ) = uVar21;
      *(undefined8*)( puVar25 + -0x1830 ) = uVar6;
      uVar6 = puVar5[2];
      *(uint*)( puVar25 + -0x1864 ) = uVar20;
      *(undefined8*)( puVar25 + -0x18b8 ) = uVar6;
      uVar14 = *(uint*)( puVar5 + 10 );
      *(undefined8*)( puVar25 + -0x18c8 ) = uVar7;
      *(undefined8*)( puVar25 + -0x18c0 ) = uVar10;
   }
   uVar3 = *(uint*)( param_1 + 0xd );
   *(uint*)( puVar25 + -0x1878 ) = uVar14;
   if (uVar3 < uVar21) {
      *(uint*)( puVar25 + -0x1868 ) = uVar3;
   }
   if (*(uint*)( (long)param_1 + 0x6c ) < uVar20) {
      *(uint*)( puVar25 + -0x1864 ) = *(uint*)( (long)param_1 + 0x6c );
   }
   if (*(uint*)( (long)param_1 + 100 ) < uVar14) {
      *(uint*)( puVar25 + -0x1878 ) = *(uint*)( (long)param_1 + 100 );
   }
   uVar12 = *(ushort*)( (long)param_1 + 0x84 );
   uVar1 = *(ushort*)( (long)param_1 + 0x86 );
   *(ushort**)( puVar25 + -0x18a8 ) = param_2;
   *(ushort**)( puVar25 + -0x18a0 ) = puVar23;
   uVar2 = *(ushort*)( (long)param_1 + 0x7c );
   uVar21 = (uint)uVar2;
   *(uint*)( puVar25 + -0x185c ) = uVar13;
   *(uint*)( puVar25 + -0x1858 ) = uVar15;
   *(undefined4*)( puVar25 + -0x1860 ) = 0;
   *(undefined8*)( puVar25 + -0x1870 ) = 0;
   *(undefined4*)( puVar25 + -0x1854 ) = 0;
   *(long*)( puVar25 + -0x18b0 ) = (long)param_1 + (long)(int)( (uint)uVar1 * (uint)uVar12 ) * 2 + 0x88;
   *(undefined8*)( puVar25 + -0x1888 ) = param_1[3];
   *(undefined8*)( puVar25 + -0x1880 ) = *(undefined8*)( puVar25 + -0x19c8 );
   uVar15 = uVar26 >> 0xd & 1;
   if (uVar2 != 0) {
      uVar15 = 1;
   }
   *(uint*)( puVar25 + -0x184c ) = uVar15;
   *(undefined2*)( puVar25 + -0x1840 ) = *(undefined2*)( param_1 + 0xf );
   switch (*(undefined2*)( (long)param_1 + 0x7a )) {
      default:
    iVar16 = -0x2c;
    goto LAB_00106df8;
      case 1:
    *(undefined4 *)(puVar25 + -0x1850) = 1;
    *(undefined2 *)(puVar25 + -0x1848) = 0xd;
    break;
      case 2:
    *(undefined4 *)(puVar25 + -0x1850) = 1;
    *(undefined2 *)(puVar25 + -0x1848) = 10;
    break;
      case 3:
    *(undefined4 *)(puVar25 + -0x1850) = 2;
    *(undefined4 *)(puVar25 + -0x1848) = 0xa000d;
    break;
      case 4:
    *(undefined4 *)(puVar25 + -0x1854) = 1;
    break;
      case 5:
    *(undefined4 *)(puVar25 + -0x1854) = 2;
    break;
      case 6:
    *(undefined4 *)(puVar25 + -0x1850) = 1;
    *(undefined2 *)(puVar25 + -0x1848) = 0;
   }
   if (( *(int*)( puVar25 + -0x19bc ) != 0 ) && ( ( param_5 & 0x40000000 ) == 0 )) {
      puVar27 = puVar19;
      if (*(long*)( puVar25 + -0x19c8 ) != 0) {
         if (( puVar19 < puVar23 ) && ( ( *puVar19 & 0xfc00 ) == 0xdc00 )) {
            iVar16 = -0x24;
            goto LAB_00106df8;
         }
         if (( uVar2 != 0 ) && ( param_2 < puVar19 )) {
            while (puVar27 = puVar27 + -1,param_2 < puVar27) {
               if (( ( *puVar27 & 0xfc00 ) != 0xdc00 ) && ( ( uVar21 = uVar21 - 1 ),uVar21 == 0 || ( puVar27 <= param_2 ) )) break;
            };
         }
      }
      *(uint*)( puVar25 + -0x197c ) = uVar13;
      *(ulong*)( puVar25 + -0x1990 ) = param_3;
      lVar17 = (long)puVar27 - (long)param_2 >> 1;
      *(long*)( puVar25 + -0x1998 ) = lVar17;
      *(undefined8*)( puVar25 + -0x19d0 ) = 0x106f61;
      iVar16 = _pcre2_valid_utf_16(puVar27, param_3 - lVar17, param_6 + 0xb);
      lVar17 = *(long*)( puVar25 + -0x1998 );
      *(int*)( (long)param_6 + 100 ) = iVar16;
      if (iVar16 != 0) {
         param_6[0xb] = param_6[0xb] + lVar17;
         goto LAB_00106df8;
      }
      uVar26 = *(uint*)( param_1 + 0xc );
      param_3 = *(ulong*)( puVar25 + -0x1990 );
      uVar13 = *(uint*)( puVar25 + -0x197c );
   }
   if (( uVar26 & 0x10 ) == 0) {
      if (( *(int*)( puVar25 + -0x1970 ) == 0 ) && ( ( uVar26 & 0x40 ) != 0 )) {
         *(undefined8*)( puVar25 + -0x1978 ) = 0;
         *(undefined8**)( puVar25 + -0x1990 ) = param_1 + 5;
         *(undefined2*)( puVar25 + -0x196a ) = 0;
         *(undefined2*)( puVar25 + -0x197c ) = 0;
         *(undefined4*)( puVar25 + -0x1998 ) = 0;
      } else {
         *(undefined8*)( puVar25 + -0x1978 ) = 0;
         *(undefined8*)( puVar25 + -0x1990 ) = 0;
         *(undefined2*)( puVar25 + -0x196a ) = 0;
         *(undefined2*)( puVar25 + -0x197c ) = 0;
         *(undefined4*)( puVar25 + -0x1998 ) = 0;
      }
   } else {
      uVar15 = *(uint*)( param_1 + 0xe );
      uVar12 = (ushort)uVar15;
      *(ushort*)( puVar25 + -0x197c ) = uVar12;
      if (( uVar26 & 0x20 ) == 0) {
         *(ushort*)( puVar25 + -0x196a ) = uVar12;
         *(undefined8*)( puVar25 + -0x1978 ) = 2;
         *(undefined8*)( puVar25 + -0x1990 ) = 0;
         *(undefined4*)( puVar25 + -0x1998 ) = 1;
      } else {
         if (uVar12 < 0x100) {
            *(ushort*)( puVar25 + -0x196a ) = ( ushort ) * (byte*)( *(long*)( puVar25 + -0x1888 ) + 0x100 + ( ulong )(uVar15 & 0xffff) );
            if (0x7f < uVar12) goto LAB_0010731a;
         } else {
            *(ushort*)( puVar25 + -0x196a ) = uVar12;
            LAB_0010731a:if (( *(int*)( puVar25 + -0x19bc ) != 0 ) || ( ( *(byte*)( (long)param_1 + 0x5a ) & 2 ) != 0 )) {
               *(undefined8*)( puVar25 + -0x1978 ) = 2;
               *(undefined4*)( puVar25 + -0x1998 ) = 1;
               *(undefined8*)( puVar25 + -0x1990 ) = 0;
               *(ushort*)( puVar25 + -0x196a ) = uVar12 + *(short*)( &DAT_00109024 + ( ulong ) * (ushort*)( &_pcre2_ucd_stage2_16 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_16 + ( ulong )(uVar12 >> 7) * 2 ) * 0x80 + ( uVar15 & 0x7f ) ) * 2 ) * 0xc );
               goto LAB_00106ff0;
            }
         }
         *(undefined8*)( puVar25 + -0x1978 ) = 2;
         *(undefined8*)( puVar25 + -0x1990 ) = 0;
         *(undefined4*)( puVar25 + -0x1998 ) = 1;
      }
   }
   LAB_00106ff0:if (( uVar26 & 0x80 ) == 0) {
      uVar30 = 0;
      *(undefined2*)( puVar25 + -0x195e ) = 0;
      *(undefined2*)( puVar25 + -0x1960 ) = 0;
   } else {
      uVar15 = *(uint*)( (long)param_1 + 0x74 );
      uVar12 = (ushort)uVar15;
      *(ushort*)( puVar25 + -0x1960 ) = uVar12;
      if (( uVar26 & 0x100 ) == 0) {
         *(ushort*)( puVar25 + -0x195e ) = uVar12;
         uVar30 = 1;
      } else {
         if (uVar12 < 0x100) {
            uVar30 = 1;
            *(ushort*)( puVar25 + -0x195e ) = ( ushort ) * (byte*)( *(long*)( puVar25 + -0x1888 ) + 0x100 + ( ulong )(uVar15 & 0xffff) );
            if (uVar12 < 0x80) goto LAB_00107040;
         } else {
            *(ushort*)( puVar25 + -0x195e ) = uVar12;
         }
         if (( *(int*)( puVar25 + -0x19bc ) != 0 ) || ( uVar30 = 1(*(byte*)( (long)param_1 + 0x5a ) & 2) != 0 )) {
            uVar30 = 1;
            *(ushort*)( puVar25 + -0x195e ) = uVar12 + *(short*)( &DAT_00109024 + ( ulong ) * (ushort*)( &_pcre2_ucd_stage2_16 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_16 + ( ulong )(uVar12 >> 7) * 2 ) * 0x80 + ( uVar15 & 0x7f ) ) * 2 ) * 0xc );
         }
      }
   }
   LAB_00107040:if (( *(byte*)( (long)param_6 + 0x61 ) & 1 ) != 0) {
      uVar6 = param_6[2];
      uVar7 = param_6[4];
      *(ulong*)( puVar25 + -0x1950 ) = param_3;
      *(uint*)( puVar25 + -0x1964 ) = uVar13;
      pcVar8 = (code*)param_6[1];
      *(undefined8*)( puVar25 + -0x19d0 ) = 0x10705d;
      ( *pcVar8 )(uVar7, uVar6);
      *(byte*)( (long)param_6 + 0x61 ) = *(byte*)( (long)param_6 + 0x61 ) & 0xfe;
      param_3 = *(ulong*)( puVar25 + -0x1950 );
      uVar13 = *(uint*)( puVar25 + -0x1964 );
   }
   param_6[3] = param_1;
   iVar4 = *(int*)( puVar25 + -0x19a8 );
   param_6[4] = 0;
   param_6[5] = 0;
   *(undefined1*)( param_6 + 0xc ) = 1;
   *(uint*)( puVar25 + -0x1950 ) = uVar13;
   *(ulong*)( puVar25 + -0x1940 ) = param_3;
   puVar25[-0x1964] = uVar30;
   *(ushort**)( puVar25 + -0x1948 ) = param_2;
   iVar29 = *(int*)( puVar25 + -0x19a0 );
   LAB_001070c0:puVar27 = puVar19;
   if (( *(uint*)( param_1 + 0xb ) & 0x10000 ) == 0 && *(int*)( puVar25 + -0x1980 ) == 0) {
      if (iVar4 == 0) {
         if (iVar29 != 0) {
            LAB_00107189:if (( *(long*)( puVar25 + -0x1990 ) == 0 ) && ( *(int*)( puVar25 + -0x1998 ) == 0 )) goto LAB_001071a3;
            if (puVar23 <= puVar19) goto LAB_00107258;
            uVar12 = *puVar19;
            if (( *(int*)( puVar25 + -0x1998 ) == 0 ) || ( ( *(ushort*)( puVar25 + -0x197c ) != uVar12 && ( *(ushort*)( puVar25 + -0x196a ) != uVar12 ) ) )) {
               if (*(long*)( puVar25 + -0x1990 ) == 0) goto LAB_00107258;
               uVar15 = (uint)uVar12;
               if (0xff < uVar12) {
                  uVar15 = 0xff;
               }
               if (( *(byte*)( *(long*)( puVar25 + -0x1990 ) + ( ulong )(ushort)((ushort)uVar15 >> 3) ) >> ( uVar15 & 7 ) & 1 ) == 0) goto LAB_00107258;
            }
            goto LAB_001071a3;
         }
         LAB_001075ac:if (*(int*)( puVar25 + -0x1998 ) == 0) goto LAB_00107680;
         if (*(short*)( puVar25 + -0x197c ) == *(short*)( puVar25 + -0x196a )) {
            for (; ( puVar19 < puVar23 && ( *puVar19 != *(ushort*)( puVar25 + -0x197c ) ) ); puVar19 = puVar19 + 1) {}
         } else if (puVar19 < puVar23) {
            do {
               if (( *(ushort*)( puVar25 + -0x196a ) == *puVar19 ) || ( *(ushort*)( puVar25 + -0x197c ) == *puVar19 )) break;
               puVar19 = puVar19 + 1;
            } while ( puVar19 < puVar23 );
         }
         LAB_00107600:puVar23 = *(ushort**)( puVar25 + -0x18a0 );
         puVar27 = puVar19;
         if (( puVar25[-0x185c] & 0x30 ) != 0) goto LAB_00107408;
         if (puVar23 <= puVar19) goto LAB_00107258;
      } else {
         puVar18 = puVar19;
         if (*(int*)( puVar25 + -0x19bc ) == 0) {
            if (puVar19 < puVar23) {
               *(int*)( puVar25 + -0x19a8 ) = iVar29;
               *(undefined8**)( puVar25 + -0x19a0 ) = param_1;
               do {
                  puVar28 = *(ushort**)( puVar25 + -0x18a0 );
                  if (*(int*)( puVar25 + -0x1854 ) == 0) {
                     if (( ( puVar18 <= puVar28 + -(ulong) * (uint*)( puVar25 + -0x1850 ) ) && ( *puVar18 == *(ushort*)( puVar25 + -0x1848 ) ) ) && ( ( *(uint*)( puVar25 + -0x1850 ) == 1 || ( puVar18[1] == *(ushort*)( puVar25 + -0x1846 ) ) ) )) break;
                  } else if (puVar18 < puVar28) {
                     *(undefined8*)( puVar25 + -0x19d0 ) = 0x10753e;
                     iVar16 = _pcre2_is_newline_16(puVar18, *(int*)( puVar25 + -0x1854 ), puVar28, puVar25 + -0x1850, 0);
                     if (iVar16 != 0) break;
                  }
                  puVar18 = puVar18 + 1;
               } while ( puVar18 < puVar23 );
               param_1 = *(undefined8**)( puVar25 + -0x19a0 );
               iVar29 = *(int*)( puVar25 + -0x19a8 );
               LAB_00107180:puVar23 = puVar18;
               if (iVar29 == 0) goto LAB_001075ac;
               goto LAB_00107189;
            }
            if (iVar29 != 0) goto LAB_00107cf3;
            iVar16 = *(int*)( puVar25 + -0x1998 );
         } else {
            *(undefined1**)( puVar25 + -0x19a0 ) = puVar25 + -0x1850;
            if (puVar19 < puVar23) {
               do {
                  puVar28 = puVar18;
                  if (*(int*)( puVar25 + -0x1854 ) == 0) {
                     if (( ( puVar18 <= *(ushort**)( puVar25 + -0x18a0 ) + -(ulong) * (uint*)( puVar25 + -0x1850 ) ) && ( *puVar18 == *(ushort*)( puVar25 + -0x1848 ) ) ) && ( ( *(uint*)( puVar25 + -0x1850 ) == 1 || ( puVar18[1] == *(ushort*)( puVar25 + -0x1846 ) ) ) )) goto LAB_00107180;
                  } else if (puVar18 < *(ushort**)( puVar25 + -0x18a0 )) {
                     *(ushort**)( puVar25 + -0x19a8 ) = puVar18;
                     *(undefined8*)( puVar25 + -0x19d0 ) = 0x107815;
                     iVar16 = _pcre2_is_newline_16();
                     puVar18 = *(ushort**)( puVar25 + -0x19a8 );
                     puVar28 = puVar18;
                     if (iVar16 != 0) goto LAB_00107180;
                  }
                  puVar18 = puVar28 + 1;
                  if (( puVar23 <= puVar18 ) || ( ( ( puVar28[1] & 0xfc00 ) == 0xdc00 && ( puVar18 = puVar28 + 2 ),puVar23 <= puVar18 ) )) goto LAB_00107180;
               } while ( true );
            }
            if (iVar29 != 0) {
               LAB_00107cf3:if (( *(long*)( puVar25 + -0x1990 ) == 0 ) && ( *(int*)( puVar25 + -0x1998 ) == 0 )) goto LAB_001071a3;
               goto LAB_00107258;
            }
            iVar16 = *(int*)( puVar25 + -0x1998 );
         }
         puVar23 = puVar19;
         if (iVar16 != 0) goto LAB_00107600;
         LAB_00107680:if (*(int*)( puVar25 + -0x1970 ) == 0) {
            if (*(long*)( puVar25 + -0x1990 ) != 0) {
               for (; puVar19 < puVar23; puVar19 = puVar19 + 1) {
                  uVar15 = ( uint ) * puVar19;
                  if (0xff < uVar15) {
                     uVar15 = 0xff;
                  }
                  if (( *(byte*)( *(long*)( puVar25 + -0x1990 ) + ( ulong )(uVar15 >> 3) ) >> ( uVar15 & 7 ) & 1 ) != 0) break;
               }
               goto LAB_00107600;
            }
         } else {
            puVar18 = *(ushort**)( puVar25 + -0x18a8 );
            if ((ushort*)( *(long*)( puVar25 + -0x1958 ) + (long)puVar18 ) < puVar19) {
               if (*(int*)( puVar25 + -0x19bc ) == 0) {
                  if (puVar19 < puVar23) {
                     *(undefined8**)( puVar25 + -0x19a8 ) = param_1;
                     LAB_001076ea:if (*(int*)( puVar25 + -0x1854 ) == 0) {
                        uVar22 = ( ulong ) * (uint*)( puVar25 + -0x1850 );
                        if (( ( puVar27 < puVar18 + uVar22 ) || ( puVar27[-uVar22] != *(ushort*)( puVar25 + -0x1848 ) ) ) || ( ( *(uint*)( puVar25 + -0x1850 ) != 1 && ( puVar27[1 - uVar22] != *(ushort*)( puVar25 + -0x1846 ) ) ) )) {
                           LAB_001076d9:puVar27 = puVar27 + 1;
                           if (puVar27 < puVar23) goto code_r0x001076e2;
                        }
                        param_1 = *(undefined8**)( puVar25 + -0x19a8 );
                     } else {
                        if (puVar27 <= puVar18) goto LAB_001076d9;
                        *(undefined8*)( puVar25 + -0x19d0 ) = 0x1078a3;
                        iVar16 = _pcre2_was_newline_16(puVar27, *(int*)( puVar25 + -0x1854 ), puVar18, puVar25 + -0x1850, 0);
                        if (iVar16 == 0) goto LAB_001076d9;
                        param_1 = *(undefined8**)( puVar25 + -0x19a8 );
                        LAB_00107c04:if (( ( ( puVar27[-1] == 0xd ) && ( *(int*)( puVar25 + -0x1854 ) - 1U < 2 ) ) && ( puVar27 < puVar23 ) ) && ( *puVar27 == 10 )) {
                           puVar27 = puVar27 + 1;
                        }
                     }
                  }
               } else if (puVar19 < puVar23) {
                  do {
                     puVar27 = puVar19;
                     if (*(int*)( puVar25 + -0x1854 ) == 0) {
                        uVar22 = ( ulong ) * (uint*)( puVar25 + -0x1850 );
                        if (( ( puVar18 + uVar22 <= puVar19 ) && ( puVar19[-uVar22] == *(ushort*)( puVar25 + -0x1848 ) ) ) && ( ( *(uint*)( puVar25 + -0x1850 ) == 1 || ( puVar19[1 - uVar22] == *(ushort*)( puVar25 + -0x1846 ) ) ) )) break;
                     } else if (puVar18 < puVar19) {
                        *(undefined8**)( puVar25 + -0x19a8 ) = param_6;
                        *(undefined8*)( puVar25 + -0x19d0 ) = 0x107beb;
                        iVar16 = _pcre2_was_newline_16(puVar19, *(int*)( puVar25 + -0x1854 ), puVar18, puVar25 + -0x1850, 1);
                        param_6 = *(undefined8**)( puVar25 + -0x19a8 );
                        if (iVar16 != 0) goto LAB_00107c04;
                     }
                     puVar27 = puVar19 + 1;
                     if (( puVar23 <= puVar27 ) || ( ( ( puVar19[1] & 0xfc00 ) == 0xdc00 && ( puVar27 = puVar19 + 2 ),puVar23 <= puVar27 ) )) break;
                     puVar18 = *(ushort**)( puVar25 + -0x18a8 );
                     puVar19 = puVar27;
                  } while ( true );
               }
            }
         }
         LAB_001071a3:puVar23 = *(ushort**)( puVar25 + -0x18a0 );
         puVar19 = puVar27;
         if (( puVar25[-0x185c] & 0x30 ) != 0) goto LAB_00107408;
      }
      uVar22 = (long)puVar23 - (long)puVar19;
      if ((long)uVar22 >> 1 < (long)( ulong ) * (ushort*)( (long)param_1 + 0x7e )) goto LAB_00107258;
      puVar18 = (ushort*)( *(long*)( puVar25 + -0x1978 ) + (long)puVar19 );
      puVar27 = puVar19;
      if (( ( *(ushort**)( puVar25 + -0x1988 ) < puVar18 ) && ( puVar25[-0x1964] != '\0' ) ) && ( ( uVar22 < 3999 || ( ( iVar29 == 0 && ( uVar22 < 3999999 ) ) ) ) )) {
         if (*(short*)( puVar25 + -0x1960 ) == *(short*)( puVar25 + -0x195e )) {
            do {
               puVar19 = puVar18;
               if (puVar23 <= puVar19) goto LAB_00107258;
               puVar18 = puVar19 + 1;
            } while ( *puVar19 != *(ushort*)( puVar25 + -0x1960 ) );
         } else {
            do {
               puVar19 = puVar18;
               if (puVar23 <= puVar19) goto LAB_00107258;
            } while ( ( *puVar19 != *(ushort*)( puVar25 + -0x195e ) ) && ( puVar18 = puVar19 + 1 * puVar19 != *(ushort*)( puVar25 + -0x1960 ) ) );
         }
         *(ushort**)( puVar25 + -0x1988 ) = puVar19;
      }
   }
   LAB_00107408:if (*(ushort**)( puVar25 + -0x19b0 ) < puVar27) goto LAB_00107258;
   uVar12 = *(ushort*)( (long)param_6 + 0x62 );
   *(ushort**)( puVar25 + -0x1898 ) = puVar27;
   *(ushort**)( puVar25 + -0x1890 ) = puVar27;
   *(undefined8*)( puVar25 + -0x1820 ) = 0;
   *(undefined1**)( puVar25 + -0x19d0 ) = puVar25 + -0x1818;
   *(undefined8*)( puVar25 + -0x19d8 ) = 0;
   *(ulong*)( puVar25 + -0x19e0 ) = ( ulong ) * (uint*)( puVar25 + 0x6048 );
   *(undefined8*)( puVar25 + -0x19e8 ) = *(undefined8*)( puVar25 + -0x19b8 );
   *(undefined8*)( puVar25 + -0x19f0 ) = 0x107471;
   iVar16 = internal_dfa_match(puVar25 + -0x18c8, *(undefined8*)( puVar25 + -0x18b0 ), puVar27, *(undefined8*)( puVar25 + -0x19c8 ), param_6 + 0xd, (uint)uVar12 + (uint)uVar12);
   if (( iVar16 != -1 ) || ( iVar29 != 0 )) {
      __src = *(void**)( puVar25 + -0x1948 );
      uVar15 = *(uint*)( puVar25 + -0x1950 );
      lVar17 = *(long*)( puVar25 + -0x1940 );
      lVar24 = (long)puVar27 - (long)__src >> 1;
      if (iVar16 == -2) {
         if (*(short*)( (long)param_6 + 0x62 ) != 0) {
            param_6[0xd] = lVar24;
            param_6[0xe] = (long)puVar23 - (long)__src >> 1;
         }
         lVar9 = *(long*)( puVar25 + -0x1898 );
         param_6[8] = lVar17;
         param_6[0xb] = lVar24;
         *(undefined4*)( (long)param_6 + 100 ) = 0xfffffffe;
         param_6[9] = lVar9 - (long)__src >> 1;
         param_6[10] = *(long*)( puVar25 + -0x1890 ) - (long)__src >> 1;
      } else {
         lVar9 = *(long*)( puVar25 + -0x1898 );
         param_6[8] = lVar17;
         param_6[0xb] = lVar24;
         *(int*)( (long)param_6 + 100 ) = iVar16;
         param_6[9] = lVar9 - (long)__src >> 1;
         param_6[10] = *(long*)( puVar25 + -0x1890 ) - (long)__src >> 1;
         if (iVar16 < 0) goto LAB_0010725e;
         if (( uVar15 & 0x4000 ) != 0) {
            iVar4 = *(int*)( puVar25 + -0x195c );
            uVar6 = param_6[2];
            pcVar8 = (code*)*param_6;
            *(undefined8*)( puVar25 + -0x19d0 ) = 0x107a68;
            __dest = (void*)( *pcVar8 )(( iVar4 + lVar17 ) * 2, uVar6);
            param_6[4] = __dest;
            if (__dest == (void*)0x0) {
               iVar16 = -0x30;
               goto LAB_00106df8;
            }
            *(undefined8*)( puVar25 + -0x19d0 ) = 0x107a83;
            memcpy(__dest, __src, ( iVar4 + lVar17 ) * 2);
            *(byte*)( (long)param_6 + 0x61 ) = *(byte*)( (long)param_6 + 0x61 ) | 1;
            goto LAB_0010725e;
         }
      }
      param_6[4] = __src;
      goto LAB_0010725e;
   }
   if (iVar4 != 0) {
      puVar19 = *(ushort**)( puVar25 + -0x18a0 );
      if (*(int*)( puVar25 + -0x1854 ) == 0) {
         if (( ( puVar27 <= puVar19 + -(ulong) * (uint*)( puVar25 + -0x1850 ) ) && ( *puVar27 == *(ushort*)( puVar25 + -0x1848 ) ) ) && ( ( *(uint*)( puVar25 + -0x1850 ) == 1 || ( puVar27[1] == *(ushort*)( puVar25 + -0x1846 ) ) ) )) goto LAB_00107258;
      } else if (puVar27 < puVar19) {
         *(undefined8*)( puVar25 + -0x19d0 ) = 0x107655;
         iVar16 = _pcre2_is_newline_16(puVar27, *(int*)( puVar25 + -0x1854 ), puVar19, puVar25 + -0x1850);
         if (iVar16 != 0) goto LAB_00107258;
      }
   }
   puVar19 = puVar27 + 1;
   if (*(int*)( puVar25 + -0x19bc ) == 0) {
      LAB_001074f0:if (puVar23 < puVar19) goto LAB_00107258;
      LAB_001074f9:if (( ( ( puVar19[-1] == 0xd ) && ( puVar19 < puVar23 ) ) && ( *puVar19 == 10 ) ) && ( ( ( *(byte*)( (long)param_1 + 0x61 ) & 8 ) == 0 && ( ( *(int*)( puVar25 + -0x1854 ) - 1U < 2 || ( *(int*)( puVar25 + -0x1850 ) == 2 ) ) ) ) )) {
         puVar19 = puVar19 + 1;
      }
      goto LAB_001070c0;
   }
   if (puVar19 < puVar23) {
      if (( puVar27[1] & 0xfc00 ) == 0xdc00) {
         puVar19 = puVar27 + 2;
         goto LAB_001074f0;
      }
      goto LAB_001074f9;
   }
   if (puVar19 <= puVar23) goto LAB_001070c0;
   LAB_00107258:iVar16 = -1;
   LAB_0010725e:puVar5 = *(undefined8**)( puVar25 + -0x1818 );
   while (puVar5 != (undefined8*)0x0) {
      *(undefined8*)( puVar25 + -0x1818 ) = *puVar5;
      *(undefined8*)( puVar25 + -0x19d0 ) = 0x10728a;
      ( **(code**)( puVar25 + -0x18c0 ) )(puVar5, *(undefined8*)( puVar25 + -0x18b8 ));
      puVar5 = *(undefined8**)( puVar25 + -0x1818 );
   };
   LAB_00106df8:if (*(long*)( puVar25 + 0x5ff0 ) != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      *(undefined8*)( puVar25 + -0x19d0 ) = 0x107d4c;
      __stack_chk_fail();
   }
   return iVar16;
   code_r0x001076e2:puVar18 = *(ushort**)( puVar25 + -0x18a8 );
   goto LAB_001076ea;
}
